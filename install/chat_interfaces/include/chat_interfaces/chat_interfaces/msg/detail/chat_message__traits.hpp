// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from chat_interfaces:msg/ChatMessage.idl
// generated code does not contain a copyright notice

#ifndef CHAT_INTERFACES__MSG__DETAIL__CHAT_MESSAGE__TRAITS_HPP_
#define CHAT_INTERFACES__MSG__DETAIL__CHAT_MESSAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "chat_interfaces/msg/detail/chat_message__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace chat_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ChatMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: sender
  {
    out << "sender: ";
    rosidl_generator_traits::value_to_yaml(msg.sender, out);
    out << ", ";
  }

  // member: content
  {
    out << "content: ";
    rosidl_generator_traits::value_to_yaml(msg.content, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ChatMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sender
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sender: ";
    rosidl_generator_traits::value_to_yaml(msg.sender, out);
    out << "\n";
  }

  // member: content
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "content: ";
    rosidl_generator_traits::value_to_yaml(msg.content, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ChatMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace chat_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use chat_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const chat_interfaces::msg::ChatMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  chat_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use chat_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const chat_interfaces::msg::ChatMessage & msg)
{
  return chat_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<chat_interfaces::msg::ChatMessage>()
{
  return "chat_interfaces::msg::ChatMessage";
}

template<>
inline const char * name<chat_interfaces::msg::ChatMessage>()
{
  return "chat_interfaces/msg/ChatMessage";
}

template<>
struct has_fixed_size<chat_interfaces::msg::ChatMessage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<chat_interfaces::msg::ChatMessage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<chat_interfaces::msg::ChatMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CHAT_INTERFACES__MSG__DETAIL__CHAT_MESSAGE__TRAITS_HPP_
