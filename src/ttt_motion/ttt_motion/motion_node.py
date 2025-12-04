import time
import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer, GoalResponse, CancelResponse

from ttt_msgs.action import DrawSymbol, DrawGrid, GoHome
from ttt_msgs.srv import ComputeIK



class MotionNode(Node):
    def __init__(self):
        super().__init__('ttt_motion_node')

        # Action servers
        self.draw_symbol_server = ActionServer(
            self,
            DrawSymbol,
            'draw_symbol',
            execute_callback=self.execute_draw_symbol,
            goal_callback=self.goal_cb,
            cancel_callback=self.cancel_cb,
        )

        self.draw_grid_server = ActionServer(
            self,
            DrawGrid,
            'draw_grid',
            execute_callback=self.execute_draw_grid,
            goal_callback=self.goal_cb,
            cancel_callback=self.cancel_cb,
        )

        self.go_home_server = ActionServer(
            self,
            GoHome,
            'go_home',
            execute_callback=self.execute_go_home,
            goal_callback=self.goal_cb,
            cancel_callback=self.cancel_cb,
        )

        self.ik_client = self.create_client(ComputeIK, 'compute_ik')
        self.get_logger().info('Waiting for IK server...')
        self.ik_client.wait_for_service()
        self.get_logger().info('IK client connected.')


        self.get_logger().info('Motion node up – mock actions ready.')

    # ---------- Generic callbacks ----------
    def goal_cb(self, goal_request):
        return GoalResponse.ACCEPT

    def cancel_cb(self, goal_handle):
        return CancelResponse.ACCEPT

    # ---------- Action execution ----------
    async def execute_draw_symbol(self, goal_handle):
        cell = goal_handle.request.cell_index
        symbol = goal_handle.request.symbol
        self.get_logger().info(f"Drawing symbol {symbol} in cell {cell}")

        # NEW: compute target (x,y) and call IK
        x, y = self.cell_to_xy(cell)
        self.get_logger().info(f"Target (x,y) = ({x:.2f} cm, {y:.2f} cm)")
        ik_res = self.compute_ik(x, y)
        if ik_res is None:
            goal_handle.abort()
            result = DrawSymbol.Result()
            result.success = False
            result.message = "IK failed"
            return result

        feedback = DrawSymbol.Feedback()

        for i in range(10):
            if goal_handle.is_cancel_requested:
                goal_handle.canceled()
                return DrawSymbol.Result(success=False, message='Canceled')

            feedback.progress = (i + 1) / 10.0
            goal_handle.publish_feedback(feedback)
            self.get_logger().info(
                f'DrawSymbol progress: {int(feedback.progress * 100)}%'
            )
            time.sleep(0.2)

        goal_handle.succeed()
        result = DrawSymbol.Result()
        result.success = True
        result.message = f"Symbol {symbol} drawn in cell {cell}"
        return result

    async def execute_draw_grid(self, goal_handle):
        self.get_logger().info("Drawing grid")
        feedback = DrawGrid.Feedback()

        for i in range(5):
            if goal_handle.is_cancel_requested:
                goal_handle.canceled()
                return DrawGrid.Result(success=False, message='Canceled')

            feedback.progress = (i + 1) / 5.0
            goal_handle.publish_feedback(feedback)
            time.sleep(0.3)

        goal_handle.succeed()
        result = DrawGrid.Result()
        result.success = True
        result.message = "Grid drawn"
        return result

    async def execute_go_home(self, goal_handle):
        self.get_logger().info("Going home")
        feedback = GoHome.Feedback()

        for i in range(3):
            if goal_handle.is_cancel_requested:
                goal_handle.canceled()
                return GoHome.Result(success=False, message='Canceled')

            feedback.progress = (i + 1) / 3.0
            goal_handle.publish_feedback(feedback)
            time.sleep(0.3)

        goal_handle.succeed()
        result = GoHome.Result()
        result.success = True
        result.message = "Home position reached"
        return result
    
    def compute_ik(self, x_cm: float, y_cm: float):
        """Call IK server and return joint angles or None."""
        req = ComputeIK.Request()
        req.x = float(x_cm)
        req.y = float(y_cm)

        future = self.ik_client.call_async(req)
        rclpy.spin_until_future_complete(self, future)

        if not future.result():
            self.get_logger().error('IK call failed (no result).')
            return None

        res = future.result()
        if not res.success:
            self.get_logger().warn(f'IK failed: {res.message}')
            return None

        self.get_logger().info(
            f"IK: L_sh={res.left_shoulder:.3f}, L_el={res.left_elbow:.3f}, "
            f"R_sh={res.right_shoulder:.3f}, R_el={res.right_elbow:.3f}"
        )
        return res
    
    def cell_to_xy(self, cell_index: int):
        """Convert cell 0..8 to (x,y) in cm."""
        # config – tune later
        base_dist = 16.0   # must match IK params
        cell_spacing = 4.0 # distance between cell centers
        center_x = base_dist / 2.0
        center_y = 10.0    # distance down from motors to board middle

        row = cell_index // 3  # 0,1,2
        col = cell_index % 3   # 0,1,2

        dx = (col - 1) * cell_spacing   # -1,0,1
        dy = (row - 1) * cell_spacing   # -1,0,1

        x = center_x + dx
        y = center_y + dy

        return x, y
    
        


def main(args=None):
    rclpy.init(args=args)
    node = MotionNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
