import random
import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient

from ttt_msgs.msg import GameState
from ttt_msgs.action import DrawSymbol, DrawGrid, GoHome

EMPTY = 0
X = 1
O = 2

STATUS_ONGOING = 0
STATUS_X_WINS = 1
STATUS_O_WINS = 2
STATUS_DRAW = 3


class GameNode(Node):
    def __init__(self):
        super().__init__('ttt_game_node')

        self.pub = self.create_publisher(GameState, 'game_state', 10)

        # Action clients
        self.draw_grid_client = ActionClient(self, DrawGrid, 'draw_grid')
        self.draw_symbol_client = ActionClient(self, DrawSymbol, 'draw_symbol')
        self.go_home_client = ActionClient(self, GoHome, 'go_home')

        # Game variables
        self.board = [EMPTY] * 9
        self.current_player = X
        self.status = STATUS_ONGOING
        self.game_running = False

        # Start process
        self.create_timer(1.0, self.tick)
        self.get_logger().info("Game node ready.")

        # Automatically start a new round
        self.start_game()


    # ----------------- GAME START -----------------
    def start_game(self):
        self.get_logger().info("Starting new game. Drawing grid.")
        self.board = [EMPTY] * 9
        self.current_player = X
        self.status = STATUS_ONGOING
        self.game_running = True

        # Send grid drawing action
        self.call_draw_grid()


    # ----------------- MAIN LOOP -----------------
    def tick(self):
        if not self.game_running:
            return

        if self.status != STATUS_ONGOING:
            self.get_logger().info(f"Game finished: {self.status_to_str(self.status)}")
            self.game_running = False
            self.call_go_home()
            return

        # Robot turn: simple random strategy
        empty_cells = [i for i, v in enumerate(self.board) if v == EMPTY]
        if not empty_cells:
            self.status = STATUS_DRAW
            return

        chosen = random.choice(empty_cells)
        self.board[chosen] = self.current_player

        self.get_logger().info(f"Player {self.current_player} -> cell {chosen}")

        # Tell the motion node to draw the symbol
        self.call_draw_symbol(chosen, self.current_player)

        # Update status
        self.update_status()

        if self.status == STATUS_ONGOING:
            self.current_player = O if self.current_player == X else X

        # Publish state
        msg = GameState()
        msg.cells = self.board
        msg.current_player = self.current_player
        msg.status = self.status
        self.pub.publish(msg)


    # ----------------- ACTION CALLS -----------------

    def call_draw_grid(self):
        """Send DrawGrid action goal"""
        if not self.draw_grid_client.wait_for_server(timeout_sec=2.0):
            self.get_logger().error("DrawGrid action server not available.")
            return

        goal_msg = DrawGrid.Goal()
        self.draw_grid_client.send_goal_async(goal_msg)

    def call_draw_symbol(self, cell, symbol):
        """Send DrawSymbol action goal"""
        if not self.draw_symbol_client.wait_for_server(timeout_sec=2.0):
            self.get_logger().error("DrawSymbol action server not available.")
            return

        goal_msg = DrawSymbol.Goal()
        goal_msg.cell_index = cell
        goal_msg.symbol = symbol

        self.draw_symbol_client.send_goal_async(goal_msg)

    def call_go_home(self):
        """Send GoHome action goal"""
        if not self.go_home_client.wait_for_server(timeout_sec=2.0):
            self.get_logger().error("GoHome action server not available.")
            return

        goal_msg = GoHome.Goal()
        self.go_home_client.send_goal_async(goal_msg)


    # ----------------- GAME LOGIC -----------------

    def update_status(self):
        wins = [
            (0,1,2), (3,4,5), (6,7,8),
            (0,3,6), (1,4,7), (2,5,8),
            (0,4,8), (2,4,6)
        ]
        for a, b, c in wins:
            if self.board[a] != EMPTY and self.board[a] == self.board[b] == self.board[c]:
                self.status = STATUS_X_WINS if self.board[a] == X else STATUS_O_WINS
                return

        if all(v != EMPTY for v in self.board):
            self.status = STATUS_DRAW
        else:
            self.status = STATUS_ONGOING

    def status_to_str(self, s):
        return {
            STATUS_ONGOING: "ongoing",
            STATUS_X_WINS: "X wins",
            STATUS_O_WINS: "O wins",
            STATUS_DRAW: "draw",
        }.get(s, "unknown")


def main():
    rclpy.init()
    node = GameNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
