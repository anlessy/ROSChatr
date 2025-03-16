// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from chat_interfaces:msg/ChatMessage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "chat_interfaces/msg/detail/chat_message__rosidl_typesupport_introspection_c.h"
#include "chat_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "chat_interfaces/msg/detail/chat_message__functions.h"
#include "chat_interfaces/msg/detail/chat_message__struct.h"


// Include directives for member types
// Member `sender`
// Member `content`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void chat_interfaces__msg__ChatMessage__rosidl_typesupport_introspection_c__ChatMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  chat_interfaces__msg__ChatMessage__init(message_memory);
}

void chat_interfaces__msg__ChatMessage__rosidl_typesupport_introspection_c__ChatMessage_fini_function(void * message_memory)
{
  chat_interfaces__msg__ChatMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember chat_interfaces__msg__ChatMessage__rosidl_typesupport_introspection_c__ChatMessage_message_member_array[2] = {
  {
    "sender",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chat_interfaces__msg__ChatMessage, sender),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "content",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chat_interfaces__msg__ChatMessage, content),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers chat_interfaces__msg__ChatMessage__rosidl_typesupport_introspection_c__ChatMessage_message_members = {
  "chat_interfaces__msg",  // message namespace
  "ChatMessage",  // message name
  2,  // number of fields
  sizeof(chat_interfaces__msg__ChatMessage),
  chat_interfaces__msg__ChatMessage__rosidl_typesupport_introspection_c__ChatMessage_message_member_array,  // message members
  chat_interfaces__msg__ChatMessage__rosidl_typesupport_introspection_c__ChatMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  chat_interfaces__msg__ChatMessage__rosidl_typesupport_introspection_c__ChatMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t chat_interfaces__msg__ChatMessage__rosidl_typesupport_introspection_c__ChatMessage_message_type_support_handle = {
  0,
  &chat_interfaces__msg__ChatMessage__rosidl_typesupport_introspection_c__ChatMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_chat_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chat_interfaces, msg, ChatMessage)() {
  if (!chat_interfaces__msg__ChatMessage__rosidl_typesupport_introspection_c__ChatMessage_message_type_support_handle.typesupport_identifier) {
    chat_interfaces__msg__ChatMessage__rosidl_typesupport_introspection_c__ChatMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &chat_interfaces__msg__ChatMessage__rosidl_typesupport_introspection_c__ChatMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
