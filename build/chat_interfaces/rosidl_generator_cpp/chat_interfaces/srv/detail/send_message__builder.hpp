// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from chat_interfaces:srv/SendMessage.idl
// generated code does not contain a copyright notice

#ifndef CHAT_INTERFACES__SRV__DETAIL__SEND_MESSAGE__BUILDER_HPP_
#define CHAT_INTERFACES__SRV__DETAIL__SEND_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "chat_interfaces/srv/detail/send_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace chat_interfaces
{

namespace srv
{

namespace builder
{

class Init_SendMessage_Request_message
{
public:
  Init_SendMessage_Request_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::chat_interfaces::srv::SendMessage_Request message(::chat_interfaces::srv::SendMessage_Request::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chat_interfaces::srv::SendMessage_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::chat_interfaces::srv::SendMessage_Request>()
{
  return chat_interfaces::srv::builder::Init_SendMessage_Request_message();
}

}  // namespace chat_interfaces


namespace chat_interfaces
{

namespace srv
{

namespace builder
{

class Init_SendMessage_Response_success
{
public:
  Init_SendMessage_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::chat_interfaces::srv::SendMessage_Response success(::chat_interfaces::srv::SendMessage_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chat_interfaces::srv::SendMessage_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::chat_interfaces::srv::SendMessage_Response>()
{
  return chat_interfaces::srv::builder::Init_SendMessage_Response_success();
}

}  // namespace chat_interfaces

#endif  // CHAT_INTERFACES__SRV__DETAIL__SEND_MESSAGE__BUILDER_HPP_
