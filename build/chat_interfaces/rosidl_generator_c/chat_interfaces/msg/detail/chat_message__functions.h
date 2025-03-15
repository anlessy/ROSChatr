// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from chat_interfaces:msg/ChatMessage.idl
// generated code does not contain a copyright notice

#ifndef CHAT_INTERFACES__MSG__DETAIL__CHAT_MESSAGE__FUNCTIONS_H_
#define CHAT_INTERFACES__MSG__DETAIL__CHAT_MESSAGE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "chat_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "chat_interfaces/msg/detail/chat_message__struct.h"

/// Initialize msg/ChatMessage message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * chat_interfaces__msg__ChatMessage
 * )) before or use
 * chat_interfaces__msg__ChatMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_chat_interfaces
bool
chat_interfaces__msg__ChatMessage__init(chat_interfaces__msg__ChatMessage * msg);

/// Finalize msg/ChatMessage message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_chat_interfaces
void
chat_interfaces__msg__ChatMessage__fini(chat_interfaces__msg__ChatMessage * msg);

/// Create msg/ChatMessage message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * chat_interfaces__msg__ChatMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_chat_interfaces
chat_interfaces__msg__ChatMessage *
chat_interfaces__msg__ChatMessage__create();

/// Destroy msg/ChatMessage message.
/**
 * It calls
 * chat_interfaces__msg__ChatMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_chat_interfaces
void
chat_interfaces__msg__ChatMessage__destroy(chat_interfaces__msg__ChatMessage * msg);

/// Check for msg/ChatMessage message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_chat_interfaces
bool
chat_interfaces__msg__ChatMessage__are_equal(const chat_interfaces__msg__ChatMessage * lhs, const chat_interfaces__msg__ChatMessage * rhs);

/// Copy a msg/ChatMessage message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_chat_interfaces
bool
chat_interfaces__msg__ChatMessage__copy(
  const chat_interfaces__msg__ChatMessage * input,
  chat_interfaces__msg__ChatMessage * output);

/// Initialize array of msg/ChatMessage messages.
/**
 * It allocates the memory for the number of elements and calls
 * chat_interfaces__msg__ChatMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_chat_interfaces
bool
chat_interfaces__msg__ChatMessage__Sequence__init(chat_interfaces__msg__ChatMessage__Sequence * array, size_t size);

/// Finalize array of msg/ChatMessage messages.
/**
 * It calls
 * chat_interfaces__msg__ChatMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_chat_interfaces
void
chat_interfaces__msg__ChatMessage__Sequence__fini(chat_interfaces__msg__ChatMessage__Sequence * array);

/// Create array of msg/ChatMessage messages.
/**
 * It allocates the memory for the array and calls
 * chat_interfaces__msg__ChatMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_chat_interfaces
chat_interfaces__msg__ChatMessage__Sequence *
chat_interfaces__msg__ChatMessage__Sequence__create(size_t size);

/// Destroy array of msg/ChatMessage messages.
/**
 * It calls
 * chat_interfaces__msg__ChatMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_chat_interfaces
void
chat_interfaces__msg__ChatMessage__Sequence__destroy(chat_interfaces__msg__ChatMessage__Sequence * array);

/// Check for msg/ChatMessage message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_chat_interfaces
bool
chat_interfaces__msg__ChatMessage__Sequence__are_equal(const chat_interfaces__msg__ChatMessage__Sequence * lhs, const chat_interfaces__msg__ChatMessage__Sequence * rhs);

/// Copy an array of msg/ChatMessage messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_chat_interfaces
bool
chat_interfaces__msg__ChatMessage__Sequence__copy(
  const chat_interfaces__msg__ChatMessage__Sequence * input,
  chat_interfaces__msg__ChatMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CHAT_INTERFACES__MSG__DETAIL__CHAT_MESSAGE__FUNCTIONS_H_
