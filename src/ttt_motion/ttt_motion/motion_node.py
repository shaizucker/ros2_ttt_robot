import time
import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer, GoalResponse, CancelResponse

from ttt_msgs.action import DrawSymbol, DrawGrid, GoHome


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

        feedback = DrawSymbol.Feedback()

        for i in range(10):
            if goal_handle.is_cancel_requested:
                goal_handle.canceled()
                return DrawSymbol.Result(success=False, message='Canceled')

            feedback.progress = (i + 1) / 10.0
            goal_handle.publish_feedback(feedback)
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


def main(args=None):
    rclpy.init(args=args)
    node = MotionNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
