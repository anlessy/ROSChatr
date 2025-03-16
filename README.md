# ROSChatr
  ros机器人聊天室上位机，机器人通过大模型实时分析聊天对话并做出行动。
***
# 如何使用？
## 1.首先运行chat_system功能包下的chat_client或chat_serve节点
`ros2 run chat_system chat_client `
或者
`ros2 run chat_system chat_server`
## 2.其次运行roschat_ui功能包下的roschat_ui节点
运行该节点会弹出UI界面，在下方可输入文本，点击右边send可发送文本。点击下方按钮可选择需要显示的图片。
`ros2 run roschat_ui roschat_ui`
## 3.to do
## 4.此时通过在终端窗口或gui界面发送消息其余界面均可接收
***

