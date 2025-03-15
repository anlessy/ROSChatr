// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from chat_interfaces:srv/SendMessage.idl
// generated code does not contain a copyright notice

#ifndef CHAT_INTERFACES__SRV__DETAIL__SEND_MESSAGE__STRUCT_H_
#define CHAT_INTERFACES__SRV__DETAIL__SEND_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "chat_interfaces/msg/detail/chat_message__struct.h"

/// Struct defined in srv/SendMessage in the package chat_interfaces.
typedef struct chat_interfaces__srv__SendMessage_Request
{
  chat_interfaces__msg__ChatMessage message;
} chat_interfaces__srv__SendMessage_Request;

// Struct for a sequence of chat_interfaces__srv__SendMessage_Request.
typedef struct chat_interfaces__srv__SendMessage_Request__Sequence
{
  chat_interfaces__srv__SendMessage_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chat_interfaces__srv__SendMessage_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SendMessage in the package chat_interfaces.
typedef struct chat_interfaces__srv__SendMessage_Response
{
  bool success;
} chat_interfaces__srv__SendMessage_Response;

// Struct for a sequence of chat_interfaces__srv__SendMessage_Response.
typedef struct chat_interfaces__srv__SendMessage_Response__Sequence
{
  chat_interfaces__srv__SendMessage_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chat_interfaces__srv__SendMessage_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CHAT_INTERFACES__SRV__DETAIL__SEND_MESSAGE__STRUCT_H_
