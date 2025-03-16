// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from chat_interfaces:msg/ChatMessage.idl
// generated code does not contain a copyright notice

#ifndef CHAT_INTERFACES__MSG__DETAIL__CHAT_MESSAGE__STRUCT_H_
#define CHAT_INTERFACES__MSG__DETAIL__CHAT_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'sender'
// Member 'content'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ChatMessage in the package chat_interfaces.
typedef struct chat_interfaces__msg__ChatMessage
{
  rosidl_runtime_c__String sender;
  rosidl_runtime_c__String content;
} chat_interfaces__msg__ChatMessage;

// Struct for a sequence of chat_interfaces__msg__ChatMessage.
typedef struct chat_interfaces__msg__ChatMessage__Sequence
{
  chat_interfaces__msg__ChatMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chat_interfaces__msg__ChatMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CHAT_INTERFACES__MSG__DETAIL__CHAT_MESSAGE__STRUCT_H_
