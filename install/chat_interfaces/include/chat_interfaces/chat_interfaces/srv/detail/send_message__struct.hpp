// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from chat_interfaces:srv/SendMessage.idl
// generated code does not contain a copyright notice

#ifndef CHAT_INTERFACES__SRV__DETAIL__SEND_MESSAGE__STRUCT_HPP_
#define CHAT_INTERFACES__SRV__DETAIL__SEND_MESSAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'message'
#include "chat_interfaces/msg/detail/chat_message__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__chat_interfaces__srv__SendMessage_Request __attribute__((deprecated))
#else
# define DEPRECATED__chat_interfaces__srv__SendMessage_Request __declspec(deprecated)
#endif

namespace chat_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SendMessage_Request_
{
  using Type = SendMessage_Request_<ContainerAllocator>;

  explicit SendMessage_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_init)
  {
    (void)_init;
  }

  explicit SendMessage_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _message_type =
    chat_interfaces::msg::ChatMessage_<ContainerAllocator>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__message(
    const chat_interfaces::msg::ChatMessage_<ContainerAllocator> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    chat_interfaces::srv::SendMessage_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const chat_interfaces::srv::SendMessage_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<chat_interfaces::srv::SendMessage_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<chat_interfaces::srv::SendMessage_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      chat_interfaces::srv::SendMessage_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<chat_interfaces::srv::SendMessage_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      chat_interfaces::srv::SendMessage_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<chat_interfaces::srv::SendMessage_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<chat_interfaces::srv::SendMessage_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<chat_interfaces::srv::SendMessage_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__chat_interfaces__srv__SendMessage_Request
    std::shared_ptr<chat_interfaces::srv::SendMessage_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__chat_interfaces__srv__SendMessage_Request
    std::shared_ptr<chat_interfaces::srv::SendMessage_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendMessage_Request_ & other) const
  {
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendMessage_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendMessage_Request_

// alias to use template instance with default allocator
using SendMessage_Request =
  chat_interfaces::srv::SendMessage_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace chat_interfaces


#ifndef _WIN32
# define DEPRECATED__chat_interfaces__srv__SendMessage_Response __attribute__((deprecated))
#else
# define DEPRECATED__chat_interfaces__srv__SendMessage_Response __declspec(deprecated)
#endif

namespace chat_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SendMessage_Response_
{
  using Type = SendMessage_Response_<ContainerAllocator>;

  explicit SendMessage_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit SendMessage_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    chat_interfaces::srv::SendMessage_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const chat_interfaces::srv::SendMessage_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<chat_interfaces::srv::SendMessage_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<chat_interfaces::srv::SendMessage_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      chat_interfaces::srv::SendMessage_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<chat_interfaces::srv::SendMessage_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      chat_interfaces::srv::SendMessage_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<chat_interfaces::srv::SendMessage_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<chat_interfaces::srv::SendMessage_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<chat_interfaces::srv::SendMessage_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__chat_interfaces__srv__SendMessage_Response
    std::shared_ptr<chat_interfaces::srv::SendMessage_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__chat_interfaces__srv__SendMessage_Response
    std::shared_ptr<chat_interfaces::srv::SendMessage_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendMessage_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendMessage_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendMessage_Response_

// alias to use template instance with default allocator
using SendMessage_Response =
  chat_interfaces::srv::SendMessage_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace chat_interfaces

namespace chat_interfaces
{

namespace srv
{

struct SendMessage
{
  using Request = chat_interfaces::srv::SendMessage_Request;
  using Response = chat_interfaces::srv::SendMessage_Response;
};

}  // namespace srv

}  // namespace chat_interfaces

#endif  // CHAT_INTERFACES__SRV__DETAIL__SEND_MESSAGE__STRUCT_HPP_
