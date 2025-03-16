// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from chat_interfaces:msg/ChatMessage.idl
// generated code does not contain a copyright notice

#ifndef CHAT_INTERFACES__MSG__DETAIL__CHAT_MESSAGE__STRUCT_HPP_
#define CHAT_INTERFACES__MSG__DETAIL__CHAT_MESSAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__chat_interfaces__msg__ChatMessage __attribute__((deprecated))
#else
# define DEPRECATED__chat_interfaces__msg__ChatMessage __declspec(deprecated)
#endif

namespace chat_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ChatMessage_
{
  using Type = ChatMessage_<ContainerAllocator>;

  explicit ChatMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sender = "";
      this->content = "";
    }
  }

  explicit ChatMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sender(_alloc),
    content(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sender = "";
      this->content = "";
    }
  }

  // field types and members
  using _sender_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sender_type sender;
  using _content_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _content_type content;

  // setters for named parameter idiom
  Type & set__sender(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->sender = _arg;
    return *this;
  }
  Type & set__content(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->content = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    chat_interfaces::msg::ChatMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const chat_interfaces::msg::ChatMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<chat_interfaces::msg::ChatMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<chat_interfaces::msg::ChatMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      chat_interfaces::msg::ChatMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<chat_interfaces::msg::ChatMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      chat_interfaces::msg::ChatMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<chat_interfaces::msg::ChatMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<chat_interfaces::msg::ChatMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<chat_interfaces::msg::ChatMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__chat_interfaces__msg__ChatMessage
    std::shared_ptr<chat_interfaces::msg::ChatMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__chat_interfaces__msg__ChatMessage
    std::shared_ptr<chat_interfaces::msg::ChatMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChatMessage_ & other) const
  {
    if (this->sender != other.sender) {
      return false;
    }
    if (this->content != other.content) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChatMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChatMessage_

// alias to use template instance with default allocator
using ChatMessage =
  chat_interfaces::msg::ChatMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace chat_interfaces

#endif  // CHAT_INTERFACES__MSG__DETAIL__CHAT_MESSAGE__STRUCT_HPP_
