import rclpy
from rclpy.node import Node
from chat_interfaces.msg import ChatMessage
import tkinter as tk
from tkinter import scrolledtext, font, ttk, filedialog
from PIL import Image, ImageTk  # 用于加载和显示图片

class ChatGUI(Node):

    def __init__(self):
        super().__init__('roschat_ui')

        # 创建发布者和订阅者
        self.publisher_ = self.create_publisher(ChatMessage, 'chat_topic', 10)
        self.subscription = self.create_subscription(
            ChatMessage,
            'chat_topic',
            self.listener_callback,
            10)

        # 初始化 GUI
        self.window = tk.Tk()
        self.window.title("Chat GUI")
        self.window.geometry("500x670")
        self.window.configure(bg="#f0f0f0")  # 设置背景颜色

        # 自定义字体
        self.font = font.Font(family="Helvetica", size=12)

        # 创建聊天记录显示区域
        self.chat_log = scrolledtext.ScrolledText(
            self.window,
            state='disabled',
            wrap=tk.WORD,
            font=self.font,
            bg="#ffffff",
            fg="#333333",
            padx=10,
            pady=10
        )
        self.chat_log.pack(fill=tk.BOTH, expand=True, padx=10, pady=10)

        # 创建消息输入框和发送按钮的容器
        self.input_frame = tk.Frame(self.window, bg="#f0f0f0")
        self.input_frame.pack(fill=tk.X, padx=10, pady=10)

        # 创建消息输入框
        self.entry = ttk.Entry(
            self.input_frame,
            font=self.font,
            width=40
        )
        self.entry.pack(side=tk.LEFT, fill=tk.X, expand=True, padx=(0, 10))

        # 创建发送按钮
        self.send_button = ttk.Button(
            self.input_frame,
            text="Send",
            command=self.send_message,
            style="TButton"
        )
        self.send_button.pack(side=tk.RIGHT)

        # 创建选择背景图片的按钮
        self.bg_button = ttk.Button(
            self.window,
            text="Change Background",
            command=self.change_background
        )
        self.bg_button.pack(side=tk.BOTTOM, pady=10)

        # 初始化背景图片
        self.bg_image = None
        self.bg_photo = None

        # 启动 GUI 主循环
        self.window.after(100, self.update_gui)
        self.window.mainloop()

    def send_message(self):
        """从输入框获取消息并发布到 chat_topic"""
        content = self.entry.get()
        if content:
            msg = ChatMessage()
            msg.sender = "roschat_ui"
            msg.content = content
            self.publisher_.publish(msg)
            self.entry.delete(0, tk.END)  # 清空输入框

    def listener_callback(self, msg):
        """接收消息并显示在聊天记录区域"""
        self.chat_log.config(state='normal')
        self.chat_log.insert(tk.END, f"{msg.sender}: {msg.content}\n")
        self.chat_log.config(state='disabled')
        self.chat_log.yview(tk.END)  # 自动滚动到底部

    def change_background(self):
        """选择并设置背景图片"""
        file_path = filedialog.askopenfilename(
            title="Select Background Image",
            filetypes=[("Image Files", "*.png *.jpg *.jpeg")]
        )
        if file_path:
            try:
                # 加载图片并调整大小
                image = Image.open(file_path)
                image = image.resize((self.chat_log.winfo_width(), self.chat_log.winfo_height()), Image.ANTIALIAS)
                self.bg_photo = ImageTk.PhotoImage(image)
                # 设置背景图片
                self.chat_log.config(bg="white")  # 重置背景颜色
                self.chat_log.image_create(tk.END, image=self.bg_photo)
            except Exception as e:
                print(f"Error loading image: {e}")

    def update_gui(self):
        """定期更新 GUI，确保 ROS 2 事件循环运行"""
        rclpy.spin_once(self, timeout_sec=0.1)
        self.window.after(100, self.update_gui)

def main(args=None):
    rclpy.init(args=args)
    chat_gui = ChatGUI()
    rclpy.spin(chat_gui)
    chat_gui.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()