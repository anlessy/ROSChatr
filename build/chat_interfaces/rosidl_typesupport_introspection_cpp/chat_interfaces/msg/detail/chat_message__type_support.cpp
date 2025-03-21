// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from chat_interfaces:msg/ChatMessage.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "chat_interfaces/msg/detail/chat_message__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace chat_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ChatMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) chat_interfaces::msg::ChatMessage(_init);
}

void ChatMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<chat_interfaces::msg::ChatMessage *>(message_memory);
  typed_message->~ChatMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ChatMessage_message_member_array[2] = {
  {
    "sender",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chat_interfaces::msg::ChatMessage, sender),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "content",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chat_interfaces::msg::ChatMessage, content),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ChatMessage_message_members = {
  "chat_interfaces::msg",  // message namespace
  "ChatMessage",  // message name
  2,  // number of fields
  sizeof(chat_interfaces::msg::ChatMessage),
  ChatMessage_message_member_array,  // message members
  ChatMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  ChatMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ChatMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ChatMessage_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace chat_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<chat_interfaces::msg::ChatMessage>()
{
  return &::chat_interfaces::msg::rosidl_typesupport_introspection_cpp::ChatMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, chat_interfaces, msg, ChatMessage)() {
  return &::chat_interfaces::msg::rosidl_typesupport_introspection_cpp::ChatMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
