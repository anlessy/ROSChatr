// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from chat_interfaces:msg/ChatMessage.idl
// generated code does not contain a copyright notice
#include "chat_interfaces/msg/detail/chat_message__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "chat_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "chat_interfaces/msg/detail/chat_message__struct.h"
#include "chat_interfaces/msg/detail/chat_message__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // content, sender
#include "rosidl_runtime_c/string_functions.h"  // content, sender

// forward declare type support functions


using _ChatMessage__ros_msg_type = chat_interfaces__msg__ChatMessage;

static bool _ChatMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ChatMessage__ros_msg_type * ros_message = static_cast<const _ChatMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: sender
  {
    const rosidl_runtime_c__String * str = &ros_message->sender;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: content
  {
    const rosidl_runtime_c__String * str = &ros_message->content;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _ChatMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ChatMessage__ros_msg_type * ros_message = static_cast<_ChatMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: sender
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->sender.data) {
      rosidl_runtime_c__String__init(&ros_message->sender);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->sender,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'sender'\n");
      return false;
    }
  }

  // Field name: content
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->content.data) {
      rosidl_runtime_c__String__init(&ros_message->content);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->content,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'content'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_chat_interfaces
size_t get_serialized_size_chat_interfaces__msg__ChatMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ChatMessage__ros_msg_type * ros_message = static_cast<const _ChatMessage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name sender
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->sender.size + 1);
  // field.name content
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->content.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _ChatMessage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_chat_interfaces__msg__ChatMessage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_chat_interfaces
size_t max_serialized_size_chat_interfaces__msg__ChatMessage(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: sender
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: content
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = chat_interfaces__msg__ChatMessage;
    is_plain =
      (
      offsetof(DataType, content) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ChatMessage__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_chat_interfaces__msg__ChatMessage(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ChatMessage = {
  "chat_interfaces::msg",
  "ChatMessage",
  _ChatMessage__cdr_serialize,
  _ChatMessage__cdr_deserialize,
  _ChatMessage__get_serialized_size,
  _ChatMessage__max_serialized_size
};

static rosidl_message_type_support_t _ChatMessage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ChatMessage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, chat_interfaces, msg, ChatMessage)() {
  return &_ChatMessage__type_support;
}

#if defined(__cplusplus)
}
#endif
