// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from chat_interfaces:msg/ChatMessage.idl
// generated code does not contain a copyright notice

#ifndef CHAT_INTERFACES__MSG__DETAIL__CHAT_MESSAGE__BUILDER_HPP_
#define CHAT_INTERFACES__MSG__DETAIL__CHAT_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "chat_interfaces/msg/detail/chat_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace chat_interfaces
{

namespace msg
{

namespace builder
{

class Init_ChatMessage_content
{
public:
  explicit Init_ChatMessage_content(::chat_interfaces::msg::ChatMessage & msg)
  : msg_(msg)
  {}
  ::chat_interfaces::msg::ChatMessage content(::chat_interfaces::msg::ChatMessage::_content_type arg)
  {
    msg_.content = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chat_interfaces::msg::ChatMessage msg_;
};

class Init_ChatMessage_sender
{
public:
  Init_ChatMessage_sender()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChatMessage_content sender(::chat_interfaces::msg::ChatMessage::_sender_type arg)
  {
    msg_.sender = std::move(arg);
    return Init_ChatMessage_content(msg_);
  }

private:
  ::chat_interfaces::msg::ChatMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::chat_interfaces::msg::ChatMessage>()
{
  return chat_interfaces::msg::builder::Init_ChatMessage_sender();
}

}  // namespace chat_interfaces

#endif  // CHAT_INTERFACES__MSG__DETAIL__CHAT_MESSAGE__BUILDER_HPP_
