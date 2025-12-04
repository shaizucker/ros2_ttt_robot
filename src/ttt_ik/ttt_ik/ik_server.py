import math
import rclpy
from rclpy.node import Node

from ttt_msgs.srv import ComputeIK


class IKServer(Node):
    def __init__(self):
        super().__init__('ik_server')

        # Declare parameters with defaults (cm)
        self.declare_parameter('link1_length_cm', 14.0)
        self.declare_parameter('link2_length_cm', 15.0)
        self.declare_parameter('base_distance_cm', 16.0)

        # Read parameters
        self.L1 = float(self.get_parameter('link1_length_cm').value)
        self.L2 = float(self.get_parameter('link2_length_cm').value)
        base_dist = float(self.get_parameter('base_distance_cm').value)

        # Bases: left at (0,0), right at (base_dist, 0)
        self.base_left = (0.0, 0.0)
        self.base_right = (base_dist, 0.0)

        self.srv = self.create_service(ComputeIK, 'compute_ik', self.compute_ik)
        self.get_logger().info(
            f"IK server ready. L1={self.L1} cm, L2={self.L2} cm, base_dist={base_dist} cm"
        )

    def compute_ik(self, request, response):
        px = request.x
        py = request.y

        left = self.solve_arm(px, py, *self.base_left)
        right = self.solve_arm(px, py, *self.base_right)

        if left is None or right is None:
            response.success = False
            response.message = "Unreachable position"
            return response

        response.left_shoulder = left[0]
        response.left_elbow = left[1]
        response.right_shoulder = right[0]
        response.right_elbow = right[1]
        response.success = True
        response.message = "OK"
        return response

    def solve_arm(self, px, py, bx, by):
        dx = px - bx
        dy = py - by
        L1 = self.L1
        L2 = self.L2

        d = math.sqrt(dx*dx + dy*dy)
        if d > L1 + L2 or d < abs(L1 - L2):
            return None

        cos_th2 = (dx*dx + dy*dy - L1*L1 - L2*L2) / (2 * L1 * L2)
        cos_th2 = max(min(cos_th2, 1.0), -1.0)
        th2 = math.acos(cos_th2)  # elbow-up

        k1 = L1 + L2 * math.cos(th2)
        k2 = L2 * math.sin(th2)
        th1 = math.atan2(dy, dx) - math.atan2(k2, k1)

        return th1, th2


def main(args=None):
    rclpy.init(args=args)
    node = IKServer()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

