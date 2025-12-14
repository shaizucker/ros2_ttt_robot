import time
import threading
import math

import gpiod
from gpiod.line import Direction, Value


class HardwareInterface:
    """
    Low-level hardware interface for:
    - Left stepper (STEP + DIR) via gpiod
    - Right stepper (STEP + DIR) via gpiod
    - 5V hobby servo (PWM on one GPIO) via gpiod-based software PWM thread
    """

    def __init__(self):
        # ======= CONFIG – CHANGE THESE TO MATCH YOUR WIRING =======

        # gpiochip name – check with `gpioinfo` (e.g. gpiochip0, gpiochip4, ...)
        self.CHIP_NAME = "gpiochip4"

        # Stepper GPIOs (BCM numbers/offsets)
        self.LEFT_STEP_LINE = 12    # left STEP
        self.LEFT_DIR_LINE  = 13    # left DIR

        self.RIGHT_STEP_LINE = 22   # right STEP
        self.RIGHT_DIR_LINE  = 23   # right DIR

        # Servo GPIO (BCM)
        self.SERVO_PIN = 18         # servo signal on BCM 18

        # Stepper timing
        # CALIBRATION CHANGE: 0.0025s for 200 Hz step rate
        self.STEP_DELAY = 0.03    # seconds between step edges 

        # Servo timing constants (Standard hobby servo: 50Hz, 500us min, 2500us max)
        self.SERVO_FREQ_HZ = 50.0
        self.SERVO_PERIOD_S = 1.0 / self.SERVO_FREQ_HZ
        self.SERVO_MIN_US = 500
        self.SERVO_MAX_US = 2500
        self.SERVO_MIN_DEG = 0.0
        self.SERVO_MAX_DEG = 180.0

        # ======= INTERNAL STATE =======
        self._req = None                # gpiod line request for all pins
        self._servo_angle = 90.0        # Current target angle for PWM thread
        self._servo_stop = threading.Event()
        self._servo_thread = None
        self._last_servo_angle = 90.0   # Last commanded angle for deadband
        self.DEADBAND_DEG = 2.0         # Don't update for changes less than this

        # ======= INIT GPIO (steppers & servo via gpiod) =======
        self._init_gpio()

        # ======= INIT SERVO PWM THREAD =======
        self._start_servo_thread()


    # ------------------------------------------------------------------
    # GPIO init (gpiod style)
    # ------------------------------------------------------------------

    def _init_gpio(self):
        """Requests all necessary GPIO lines using gpiod."""
        chip_path = f"/dev/{self.CHIP_NAME}"

        ls_output_low = gpiod.LineSettings(
            direction=Direction.OUTPUT,
            output_value=Value.INACTIVE,
        )

        # Request all lines (steppers AND servo)
        self._req = gpiod.request_lines(
            path=chip_path,
            consumer="ttt_hardware",
            config={
                self.LEFT_STEP_LINE: ls_output_low,
                self.LEFT_DIR_LINE: ls_output_low,
                self.RIGHT_STEP_LINE: ls_output_low,
                self.RIGHT_DIR_LINE: ls_output_low,
                self.SERVO_PIN: ls_output_low, 
            },
        )

    def _set_line(self, offset: int, value: int):
        """Set a single GPIO line (stepper or servo) to 0 or 1."""
        v = Value.ACTIVE if value else Value.INACTIVE
        self._req.set_values({offset: v})

    # ------------------------------------------------------------------
    # Stepper interface (Unified Synchronous Movement)
    # ------------------------------------------------------------------

    def move_both(self, delta_left: int, delta_right: int):
        """
        Move both steppers simultaneously using a synchronous loop.
        Uses a Bresenham-like algorithm to maintain the correct step ratio.
        """
        if delta_left == 0 and delta_right == 0:
            return

        # 1. Set Directions
        left_dir = 1 if delta_left > 0 else 0
        right_dir = 1 if delta_right > 0 else 0
        
        self._set_line(self.LEFT_DIR_LINE, left_dir)
        self._set_line(self.RIGHT_DIR_LINE, right_dir)

        # 2. Determine Steps for Synchronization
        abs_left = abs(delta_left)
        abs_right = abs(delta_right)
        
        max_steps = max(abs_left, abs_right)
        slow_steps = min(abs_left, abs_right)
        
        # Identify which motor is 'slow' and 'fast' (or equally fast)
        # Note: If abs_left == abs_right, they both pulse every time.
        # If one is 0, the other is 'fast' and 'slow' is 0, also handled.

        error = 0
        
        for _ in range(max_steps):
            pins_to_set_high = []
            
            # --- High Pulse Calculation (Fastest Motor always pulses) ---
            
            # 1. Determine if the Left motor should pulse this cycle
            # It pulses if it's the fastest (abs_left == max_steps) OR if it's the 
            # slower one and its error accumulator has reached the threshold.
            if abs_left == max_steps:
                pins_to_set_high.append(self.LEFT_STEP_LINE)
            
            # 2. Determine if the Right motor should pulse this cycle
            if abs_right == max_steps:
                pins_to_set_high.append(self.RIGHT_STEP_LINE)

            # 3. Check for the slower motor using Bresenham's principle
            if slow_steps > 0 and max_steps > 0 and slow_steps < max_steps:
                error += slow_steps * 2 # Multiply by 2 for integer math to avoid float
                if error >= max_steps * 2:
                    # Time to pulse the slow motor
                    if abs_left == slow_steps:
                        pins_to_set_high.append(self.LEFT_STEP_LINE)
                    if abs_right == slow_steps:
                        pins_to_set_high.append(self.RIGHT_STEP_LINE)
                    error -= max_steps * 2
            
            # --- Execution ---
            
            # Pulse High
            for pin in set(pins_to_set_high):
                 self._set_line(pin, 1)
            
            time.sleep(self.STEP_DELAY)
            
            # Pulse Low
            for pin in set(pins_to_set_high):
                self._set_line(pin, 0)
            
            time.sleep(self.STEP_DELAY)

    # The old move_left and move_right functions are now removed.

    # ------------------------------------------------------------------
    # Servo interface (Software PWM using gpiod in background thread)
    # ------------------------------------------------------------------

    def _start_servo_thread(self):
        """Starts the continuous PWM loop for the servo."""
        self._servo_stop.clear()
        self._servo_thread = threading.Thread(target=self._servo_pwm_loop, daemon=True)
        self._servo_thread.start()

    def _servo_pwm_loop(self):
        """The core software PWM loop running continuously."""
        
        while not self._servo_stop.is_set():
            angle = self._servo_angle
            clamped_angle = max(self.SERVO_MIN_DEG, min(self.SERVO_MAX_DEG, angle))
            
            t = (clamped_angle - self.SERVO_MIN_DEG) / (self.SERVO_MAX_DEG - self.SERVO_MIN_DEG)
            pulse_us = self.SERVO_MIN_US + t * (self.SERVO_MAX_US - self.SERVO_MIN_US)
            pulse_s = pulse_us / 1_000_000.0

            # --- PWM Cycle ---
            self._set_line(self.SERVO_PIN, 1)
            time.sleep(pulse_s)
            
            self._set_line(self.SERVO_PIN, 0)
            
            remaining_s = self.SERVO_PERIOD_S - pulse_s
            
            if remaining_s > 0:
                time.sleep(remaining_s)

    def set_servo_angle(self, angle_deg: float):
        """Update the target angle for the background PWM thread."""
        
        if abs(angle_deg - self._last_servo_angle) < self.DEADBAND_DEG:
            return

        self._last_servo_angle = float(angle_deg)
        self._servo_angle = float(angle_deg)


    # ------------------------------------------------------------------
    # Cleanup
    # ------------------------------------------------------------------

    def close(self):
        # 1. Stop the servo PWM thread cleanly
        if self._servo_thread is not None:
            print("Stopping servo PWM thread...")
            self._servo_stop.set()
            self._servo_thread.join(timeout=1.0) 
            
        # 2. Release all gpiod lines and set them inactive
        if self._req is not None:
            self._req.set_values({
                self.LEFT_STEP_LINE: Value.INACTIVE,
                self.LEFT_DIR_LINE: Value.INACTIVE,
                self.RIGHT_STEP_LINE: Value.INACTIVE,
                self.RIGHT_DIR_LINE: Value.INACTIVE,
                self.SERVO_PIN: Value.INACTIVE, 
            })
            self._req.release()