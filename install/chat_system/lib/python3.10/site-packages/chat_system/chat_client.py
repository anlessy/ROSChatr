import rclpy
from rclpy.node import Node
from chat_interfaces.msg import ChatMessage
import threading

class ChatClient(Node):

    def __init__(self):
        super().__init__('chat_client')
        self.publisher_ = self.create_publisher(ChatMessage, 'chat_topic', 10)
        self.subscription = self.create_subscription(
            ChatMessage,
            'chat_topic',
            self.listener_callback,
            10)
        self.get_logger().info("Chat client is running. Enter a number to send a message.")

        # Start a thread to handle terminal input
        self.input_thread = threading.Thread(target=self.read_input)
        self.input_thread.daemon = True
        self.input_thread.start()

    def read_input(self):
        while rclpy.ok():
            try:
                # Read input from terminal
                content = input("Client: Enter a number: ")
                if content:
                    # Publish the message
                    msg = ChatMessage()
                    msg.sender = "Client"
                    msg.content = content
                    self.publisher_.publish(msg)
            except Exception as e:
                self.get_logger().error(f"Error reading input: {e}")
                break

    def listener_callback(self, msg):
        # Display messages received from server or other clients
        self.get_logger().info(f"Received from {msg.sender}: {msg.content}")

def main(args=None):
    rclpy.init(args=args)
    chat_client = ChatClient()
    rclpy.spin(chat_client)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
