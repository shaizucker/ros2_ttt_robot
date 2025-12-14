import math

import rclpy
from rclpy.node import Node

from ttt_msgs.msg import JointCommand
from ttt_hardware.low_level import HardwareInterface


class HardwareNode(Node):
    def __init__(self):
        super().__init__('ttt_hardware_node')
        self.hw = HardwareInterface()

        # Parameters (tuned for 1/8 microstepping and slower speed)
        self.declare_parameter('steps_per_rev', 200 * 8)  # 200 steps * 8 microsteps = 1600 steps/rev
        self.declare_parameter('gear_ratio', 1.0)        
        self.declare_parameter('left_zero_offset_deg', 0.0)
        self.declare_parameter('right_zero_offset_deg', 0.0)

        self.declare_parameter('servo_angle_up_deg', 60.0)
        self.declare_parameter('servo_angle_down_deg', 20.0)

        self.steps_per_rev = float(self.get_parameter('steps_per_rev').value)
        self.gear_ratio = float(self.get_parameter('gear_ratio').value)
        self.left_zero_offset = math.radians(
            float(self.get_parameter('left_zero_offset_deg').value)
        )
        self.right_zero_offset = math.radians(
            float(self.get_parameter('right_zero_offset_deg').value)
        )
        self.servo_up = float(self.get_parameter('servo_angle_up_deg').value)
        self.servo_down = float(self.get_parameter('servo_angle_down_deg').value)

        # Internal state: last commanded steps
        self.left_last = 0
        self.right_last = 0

        # Subscription
        self.sub = self.create_subscription(
            JointCommand,
            'joint_command',
            self.joint_callback,
            10
        )

        self.get_logger().info(
            f"Hardware node ready. steps_per_rev={self.steps_per_rev}, "
            f"gear_ratio={self.gear_ratio}"
        )

    # ---- Core conversion helpers ----

    def angle_to_steps(self, angle_rad: float) -> int:
        """Convert absolute joint angle (rad) to motor steps."""
        steps_per_rad = (self.steps_per_rev * self.gear_ratio) / (2.0 * math.pi)
        return int(round(angle_rad * steps_per_rad))

    # ---- Main callback ----

    def joint_callback(self, msg: JointCommand):
        left_target = msg.left_shoulder + self.left_zero_offset
        right_target = msg.right_shoulder + self.right_zero_offset

        left_steps_abs = self.angle_to_steps(left_target)
        right_steps_abs = self.angle_to_steps(right_target)

        delta_left = int(round(left_steps_abs - self.left_last))
        delta_right = int(round(right_steps_abs - self.right_last))

        self.left_last = left_steps_abs
        self.right_last = right_steps_abs

        servo_angle = self.servo_down if msg.pen_down else self.servo_up

        self.get_logger().info(
            f"HW delta: left={delta_left}, right={delta_right}, servo={servo_angle}"
        )

        # Use the unified stepper command
        self.send_steppers(delta_left, delta_right)
        
        # Send the servo command
        self.set_servo_angle(servo_angle)

    # New unified method for steppers
    def send_steppers(self, delta_left: int, delta_right: int):
        """Sends the synchronous step command to the hardware interface."""
        self.hw.move_both(delta_left, delta_right)

    def set_servo_angle(self, angle_deg: float):
        self.hw.set_servo_angle(angle_deg)
    
    
    def destroy_node(self):
        """
        Custom cleanup: Shut down the hardware interface before destroying the node.
        """
        if hasattr(self, 'hw') and self.hw is not None:
            self.get_logger().info('Closing hardware interface...')
            self.hw.close()
        
        super().destroy_node()


def main(args=None):
    rclpy.init(args=args)
    node = HardwareNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()