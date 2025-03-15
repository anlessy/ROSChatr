// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from chat_interfaces:srv/SendMessage.idl
// generated code does not contain a copyright notice

#ifndef CHAT_INTERFACES__SRV__DETAIL__SEND_MESSAGE__TRAITS_HPP_
#define CHAT_INTERFACES__SRV__DETAIL__SEND_MESSAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "chat_interfaces/srv/detail/send_message__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'message'
#include "chat_interfaces/msg/detail/chat_message__traits.hpp"

namespace chat_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SendMessage_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: message
  {
    out << "message: ";
    to_flow_style_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SendMessage_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message:\n";
    to_block_style_yaml(msg.message, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SendMessage_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace chat_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use chat_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const chat_interfaces::srv::SendMessage_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  chat_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use chat_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const chat_interfaces::srv::SendMessage_Request & msg)
{
  return chat_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<chat_interfaces::srv::SendMessage_Request>()
{
  return "chat_interfaces::srv::SendMessage_Request";
}

template<>
inline const char * name<chat_interfaces::srv::SendMessage_Request>()
{
  return "chat_interfaces/srv/SendMessage_Request";
}

template<>
struct has_fixed_size<chat_interfaces::srv::SendMessage_Request>
  : std::integral_constant<bool, has_fixed_size<chat_interfaces::msg::ChatMessage>::value> {};

template<>
struct has_bounded_size<chat_interfaces::srv::SendMessage_Request>
  : std::integral_constant<bool, has_bounded_size<chat_interfaces::msg::ChatMessage>::value> {};

template<>
struct is_message<chat_interfaces::srv::SendMessage_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace chat_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SendMessage_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SendMessage_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SendMessage_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace chat_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use chat_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const chat_interfaces::srv::SendMessage_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  chat_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use chat_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const chat_interfaces::srv::SendMessage_Response & msg)
{
  return chat_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<chat_interfaces::srv::SendMessage_Response>()
{
  return "chat_interfaces::srv::SendMessage_Response";
}

template<>
inline const char * name<chat_interfaces::srv::SendMessage_Response>()
{
  return "chat_interfaces/srv/SendMessage_Response";
}

template<>
struct has_fixed_size<chat_interfaces::srv::SendMessage_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<chat_interfaces::srv::SendMessage_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<chat_interfaces::srv::SendMessage_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<chat_interfaces::srv::SendMessage>()
{
  return "chat_interfaces::srv::SendMessage";
}

template<>
inline const char * name<chat_interfaces::srv::SendMessage>()
{
  return "chat_interfaces/srv/SendMessage";
}

template<>
struct has_fixed_size<chat_interfaces::srv::SendMessage>
  : std::integral_constant<
    bool,
    has_fixed_size<chat_interfaces::srv::SendMessage_Request>::value &&
    has_fixed_size<chat_interfaces::srv::SendMessage_Response>::value
  >
{
};

template<>
struct has_bounded_size<chat_interfaces::srv::SendMessage>
  : std::integral_constant<
    bool,
    has_bounded_size<chat_interfaces::srv::SendMessage_Request>::value &&
    has_bounded_size<chat_interfaces::srv::SendMessage_Response>::value
  >
{
};

template<>
struct is_service<chat_interfaces::srv::SendMessage>
  : std::true_type
{
};

template<>
struct is_service_request<chat_interfaces::srv::SendMessage_Request>
  : std::true_type
{
};

template<>
struct is_service_response<chat_interfaces::srv::SendMessage_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CHAT_INTERFACES__SRV__DETAIL__SEND_MESSAGE__TRAITS_HPP_
