// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from chat_interfaces:srv/SendMessage.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "chat_interfaces/srv/detail/send_message__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace chat_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SendMessage_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SendMessage_Request_type_support_ids_t;

static const _SendMessage_Request_type_support_ids_t _SendMessage_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SendMessage_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SendMessage_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SendMessage_Request_type_support_symbol_names_t _SendMessage_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, chat_interfaces, srv, SendMessage_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, chat_interfaces, srv, SendMessage_Request)),
  }
};

typedef struct _SendMessage_Request_type_support_data_t
{
  void * data[2];
} _SendMessage_Request_type_support_data_t;

static _SendMessage_Request_type_support_data_t _SendMessage_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SendMessage_Request_message_typesupport_map = {
  2,
  "chat_interfaces",
  &_SendMessage_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SendMessage_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SendMessage_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SendMessage_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SendMessage_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace chat_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<chat_interfaces::srv::SendMessage_Request>()
{
  return &::chat_interfaces::srv::rosidl_typesupport_cpp::SendMessage_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, chat_interfaces, srv, SendMessage_Request)() {
  return get_message_type_support_handle<chat_interfaces::srv::SendMessage_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "chat_interfaces/srv/detail/send_message__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace chat_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SendMessage_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SendMessage_Response_type_support_ids_t;

static const _SendMessage_Response_type_support_ids_t _SendMessage_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SendMessage_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SendMessage_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SendMessage_Response_type_support_symbol_names_t _SendMessage_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, chat_interfaces, srv, SendMessage_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, chat_interfaces, srv, SendMessage_Response)),
  }
};

typedef struct _SendMessage_Response_type_support_data_t
{
  void * data[2];
} _SendMessage_Response_type_support_data_t;

static _SendMessage_Response_type_support_data_t _SendMessage_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SendMessage_Response_message_typesupport_map = {
  2,
  "chat_interfaces",
  &_SendMessage_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SendMessage_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SendMessage_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SendMessage_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SendMessage_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace chat_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<chat_interfaces::srv::SendMessage_Response>()
{
  return &::chat_interfaces::srv::rosidl_typesupport_cpp::SendMessage_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, chat_interfaces, srv, SendMessage_Response)() {
  return get_message_type_support_handle<chat_interfaces::srv::SendMessage_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "chat_interfaces/srv/detail/send_message__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace chat_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SendMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SendMessage_type_support_ids_t;

static const _SendMessage_type_support_ids_t _SendMessage_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SendMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SendMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SendMessage_type_support_symbol_names_t _SendMessage_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, chat_interfaces, srv, SendMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, chat_interfaces, srv, SendMessage)),
  }
};

typedef struct _SendMessage_type_support_data_t
{
  void * data[2];
} _SendMessage_type_support_data_t;

static _SendMessage_type_support_data_t _SendMessage_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SendMessage_service_typesupport_map = {
  2,
  "chat_interfaces",
  &_SendMessage_service_typesupport_ids.typesupport_identifier[0],
  &_SendMessage_service_typesupport_symbol_names.symbol_name[0],
  &_SendMessage_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SendMessage_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SendMessage_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace chat_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<chat_interfaces::srv::SendMessage>()
{
  return &::chat_interfaces::srv::rosidl_typesupport_cpp::SendMessage_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, chat_interfaces, srv, SendMessage)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<chat_interfaces::srv::SendMessage>();
}

#ifdef __cplusplus
}
#endif
