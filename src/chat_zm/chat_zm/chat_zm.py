'''import rclpy
from rclpy.node import Node
from chat_interfaces.msg import ChatMessage

class ChatTerminal(Node):

    def __init__(self):
        super().__init__('roschat_terminal')

        # 创建发布者和订阅者
        self.publisher_ = self.create_publisher(ChatMessage, 'chat_topic', 10)
        self.subscription = self.create_subscription(
            ChatMessage,
            'chat_topic',
            self.listener_callback,
            10)

        # 启动终端输入循环
        self.get_logger().info("Chat terminal is running. Type your message and press Enter to send.")
        self.input_loop()

    def send_message(self, content):
        """发布消息到 chat_topic"""
        if content:
            msg = ChatMessage()
            msg.sender = "roschat_terminal"
            msg.content = content
            self.publisher_.publish(msg)
            self.get_logger().info(f"You: {content}")

    def listener_callback(self, msg):
        """接收消息并显示在终端"""
        self.get_logger().info(f"{msg.sender}: {msg.content}")

    def input_loop(self):
        """终端输入循环"""
        try:
            while rclpy.ok():
                content = input("> ")  # 等待用户输入
                self.send_message(content)
        except KeyboardInterrupt:
            self.get_logger().info("Chat terminal is shutting down...")

def main(args=None):
    rclpy.init(args=args)
    chat_terminal = ChatTerminal()
    rclpy.spin(chat_terminal)
    chat_terminal.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()'''


'''import rclpy
from rclpy.node import Node
from chat_interfaces.msg import ChatMessage
import tkinter as tk
from tkinter import scrolledtext, font, ttk
import threading
import rclpy.logging


class ChatNode(Node):

    def __init__(self, node_name):
        super().__init__(node_name)

        # 设置日志级别为 ERROR，屏蔽 INFO 和 WARN 日志
        self.get_logger().set_level(rclpy.logging.LoggingSeverity.ERROR)

        # 创建消息发布者和订阅者
        self.pub = self.create_publisher(ChatMessage, 'chat_topic', 10)
        self.sub = self.create_subscription(
            ChatMessage,
            'chat_topic',
            self.msg_callback,
            10
        )

        # 根据节点名称设置发送者名称
        self.name = node_name

        # 启动终端输入线程
        self.input_thread = threading.Thread(target=self.read_input)
        self.input_thread.daemon = True
        self.input_thread.start()

        # 使用 print 输出
        print(f"{self.name} is running. Enter a message to send.")

        # 添加线程锁
        self.lock = threading.Lock()

    def read_input(self):
        """从终端读取用户输入并发布消息"""
        while rclpy.ok():
            try:
                user_input = input(f"{self.name}: Enter a message: ")
                if user_input:
                    msg = ChatMessage()
                    msg.sender = self.name
                    msg.content = user_input
                    self.pub.publish(msg)
            except Exception as e:
                # 使用 print 输出错误
                print(f"Error reading input: {e}")
                break

    def msg_callback(self, msg):
        """接收消息并打印到控制台"""
        with self.lock:  # 加锁
            print(f"Received from {msg.sender}: {msg.content}")


class ChatGUI(Node):

    def __init__(self):
        super().__init__('chat_gui')

        # 设置日志级别为 ERROR，屏蔽 INFO 和 WARN 日志
        self.get_logger().set_level(rclpy.logging.LoggingSeverity.ERROR)

        # 创建发布者和订阅者
        self.pub = self.create_publisher(ChatMessage, 'chat_topic', 10)
        self.sub = self.create_subscription(
            ChatMessage,
            'chat_topic',
            self.msg_callback,
            10
        )

        # 初始化 GUI
        try:
            self.root = tk.Tk()
            self.root.title("Chat")
            self.root.geometry("600x400")  # 调整窗口大小
            self.root.configure(bg="#c8e6c9")  # 设置背景颜色为浅绿色

            # 自定义字体和样式
            self.font = ('Helvetica', 12)

            # 创建聊天记录显示区域
            self.chat_area = scrolledtext.ScrolledText(
                self.root,
                state='disabled',
                wrap=tk.WORD,
                font=self.font,
                bg="#ffffff",
                fg="#000000",
                padx=10,
                pady=10,
                height=15
            )
            self.chat_area.pack(padx=10, pady=10, fill=tk.BOTH, expand=True)

            # 创建输入区域框架
            self.input_frame = tk.Frame(self.root, bg="#c8e6c9")
            self.input_frame.pack(fill=tk.X, padx=10, pady=10)

            # 创建消息输入框
            self.input_box = ttk.Entry(
                self.input_frame,
                font=self.font,
                width=40
            )
            self.input_box.pack(side=tk.LEFT, fill=tk.X, expand=True, padx=(0, 10))

            # 创建发送按钮
            self.send_btn = ttk.Button(
                self.input_frame,
                text="Send",
                command=self.send_msg
            )
            self.send_btn.pack(side=tk.RIGHT)

            # 启动 GUI 主循环
            self.root.after(100, self.update)
            print("GUI initialized successfully.")
            self.root.mainloop()
        except Exception as e:
            print(f"Failed to initialize GUI: {e}")

    def send_msg(self):
        """从输入框获取消息并发布到 chat_topic"""
        content = self.input_box.get()
        if content:
            msg = ChatMessage()
            msg.sender = "chat_gui"
            msg.content = content
            self.pub.publish(msg)
            self.input_box.delete(0, tk.END)  # 清空输入框

    def msg_callback(self, msg):
        """接收消息并显示在聊天记录区域"""
        self.chat_area.config(state='normal')
        self.chat_area.insert(tk.END, f"{msg.sender}: {msg.content}\n")
        self.chat_area.config(state='disabled')
        self.chat_area.yview(tk.END)  # 自动滚动到底部

    def update(self):
        """定期更新 GUI，确保 ROS 2 事件循环运行"""
        rclpy.spin_once(self, timeout_sec=0.1)
        self.root.after(100, self.update)


def main(args=None):
    rclpy.init(args=args)
    chat_gui = ChatGUI()
    rclpy.spin(chat_gui)
    chat_gui.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
    '''

'''
import rclpy
from rclpy.node import Node
from chat_interfaces.msg import ChatMessage
import threading

class ChatNode(Node):

    def __init__(self, node_name):
        super().__init__(node_name)

        # 创建消息发布者和订阅者
        self.message_publisher = self.create_publisher(ChatMessage, 'chat_topic', 10)
        self.message_subscription = self.create_subscription(
            ChatMessage,
            'chat_topic',
            self.message_received_callback,
            10
        )

        # 根据节点名称设置发送者名称
        self.node_name = node_name

        # 启动终端输入线程
        self.input_thread = threading.Thread(target=self.handle_user_input)
        self.input_thread.daemon = True
        self.input_thread.start()

        # 使用 print 输出
        print(f"{self.node_name} is running. Enter a number to send a message.")

    def handle_user_input(self):
        """从终端读取用户输入并发布消息"""
        while rclpy.ok():
            try:
                user_input = input(f"{self.node_name}: Enter a number: ")
                if user_input:
                    message = ChatMessage()
                    message.sender = self.node_name
                    message.content = user_input
                    self.message_publisher.publish(message)
            except Exception as e:
                # 使用 print 输出错误
                print(f"Error reading input: {e}")
                break

    def message_received_callback(self, message):
        """接收消息并打印到控制台"""
        # 使用 print 输出
        print(f"Received from {message.sender}: {message.content}")

def main(args=None):
    rclpy.init(args=args)

    # 创建节点，节点名称通过命令行参数传入
    import sys
    if len(sys.argv) < 2:
        print("Usage: ros2 run your_package_name chat_node <node_name>")
        return

    node_name = sys.argv[1]
    chat_node = ChatNode(node_name)

    # 进入 ROS 2 的主循环
    rclpy.spin(chat_node)

    # 销毁节点并关闭 ROS 2
    chat_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()'''
import rclpy
from rclpy.node import Node
from chat_interfaces.msg import ChatMessage
import threading
import re

class ChatNode(Node):

    def __init__(self, node_name):
        super().__init__(node_name)

        # 创建消息发布者和订阅者
        self.message_publisher = self.create_publisher(ChatMessage, 'chat_topic', 10)
        self.message_subscription = self.create_subscription(
            ChatMessage,
            'chat_topic',
            self.message_received_callback,
            10
        )

        # 根据节点名称设置发送者名称
        self.node_name = node_name

        # 启动终端输入线程
        self.input_thread = threading.Thread(target=self.handle_user_input)
        self.input_thread.daemon = True
        self.input_thread.start()

        # 使用 ROS 2 日志输出
        self.get_logger().info(f"{self.node_name} is running. Enter a number or an arithmetic expression to send a message.")

    def handle_user_input(self):
        """从终端读取用户输入并发布消息"""
        while rclpy.ok():
            try:
                user_input = input(f"{self.node_name}: Enter a number or an arithmetic expression: ")
                if user_input:
                    message = ChatMessage()
                    message.sender = self.node_name
                    message.content = user_input
                    self.message_publisher.publish(message)
            except Exception as e:
                # 使用 ROS 2 日志输出错误
                self.get_logger().error(f"Error reading input: {e}")
                break

    def message_received_callback(self, message):
        """接收消息并打印到控制台，如果是加减法表达式则计算结果"""
        try:
            # 去掉输入中的等号和其他非必要字符
            expression = message.content.replace('=', '').strip()
            
            # 使用正则表达式检查消息内容是否为简单的加减法表达式
            if re.match(r'^\d+(\s*[\+-]\s*\d+)+$', expression):
                result = eval(expression)  # 计算表达式结果
                self.get_logger().info(f"Received from {message.sender}: {expression} = {result}")
            else:
                self.get_logger().info(f"Received from {message.sender}: {message.content}")
        except Exception as e:
            self.get_logger().error(f"Error processing message: {e}")

def main(args=None):
    rclpy.init(args=args)

    # 创建节点，节点名称通过命令行参数传入
    import sys
    if len(sys.argv) < 2:
        print("Usage: ros2 run your_package_name chat_node <node_name>")
        return

    node_name = sys.argv[1]
    chat_node = ChatNode(node_name)

    # 进入 ROS 2 的主循环
    rclpy.spin(chat_node)

    # 销毁节点并关闭 ROS 2
    chat_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()