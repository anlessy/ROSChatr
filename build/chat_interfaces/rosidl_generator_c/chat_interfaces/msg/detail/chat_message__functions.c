// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from chat_interfaces:msg/ChatMessage.idl
// generated code does not contain a copyright notice
#include "chat_interfaces/msg/detail/chat_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `sender`
// Member `content`
#include "rosidl_runtime_c/string_functions.h"

bool
chat_interfaces__msg__ChatMessage__init(chat_interfaces__msg__ChatMessage * msg)
{
  if (!msg) {
    return false;
  }
  // sender
  if (!rosidl_runtime_c__String__init(&msg->sender)) {
    chat_interfaces__msg__ChatMessage__fini(msg);
    return false;
  }
  // content
  if (!rosidl_runtime_c__String__init(&msg->content)) {
    chat_interfaces__msg__ChatMessage__fini(msg);
    return false;
  }
  return true;
}

void
chat_interfaces__msg__ChatMessage__fini(chat_interfaces__msg__ChatMessage * msg)
{
  if (!msg) {
    return;
  }
  // sender
  rosidl_runtime_c__String__fini(&msg->sender);
  // content
  rosidl_runtime_c__String__fini(&msg->content);
}

bool
chat_interfaces__msg__ChatMessage__are_equal(const chat_interfaces__msg__ChatMessage * lhs, const chat_interfaces__msg__ChatMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sender
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->sender), &(rhs->sender)))
  {
    return false;
  }
  // content
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->content), &(rhs->content)))
  {
    return false;
  }
  return true;
}

bool
chat_interfaces__msg__ChatMessage__copy(
  const chat_interfaces__msg__ChatMessage * input,
  chat_interfaces__msg__ChatMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // sender
  if (!rosidl_runtime_c__String__copy(
      &(input->sender), &(output->sender)))
  {
    return false;
  }
  // content
  if (!rosidl_runtime_c__String__copy(
      &(input->content), &(output->content)))
  {
    return false;
  }
  return true;
}

chat_interfaces__msg__ChatMessage *
chat_interfaces__msg__ChatMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chat_interfaces__msg__ChatMessage * msg = (chat_interfaces__msg__ChatMessage *)allocator.allocate(sizeof(chat_interfaces__msg__ChatMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(chat_interfaces__msg__ChatMessage));
  bool success = chat_interfaces__msg__ChatMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
chat_interfaces__msg__ChatMessage__destroy(chat_interfaces__msg__ChatMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    chat_interfaces__msg__ChatMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
chat_interfaces__msg__ChatMessage__Sequence__init(chat_interfaces__msg__ChatMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chat_interfaces__msg__ChatMessage * data = NULL;

  if (size) {
    data = (chat_interfaces__msg__ChatMessage *)allocator.zero_allocate(size, sizeof(chat_interfaces__msg__ChatMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = chat_interfaces__msg__ChatMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        chat_interfaces__msg__ChatMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
chat_interfaces__msg__ChatMessage__Sequence__fini(chat_interfaces__msg__ChatMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      chat_interfaces__msg__ChatMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

chat_interfaces__msg__ChatMessage__Sequence *
chat_interfaces__msg__ChatMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chat_interfaces__msg__ChatMessage__Sequence * array = (chat_interfaces__msg__ChatMessage__Sequence *)allocator.allocate(sizeof(chat_interfaces__msg__ChatMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = chat_interfaces__msg__ChatMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
chat_interfaces__msg__ChatMessage__Sequence__destroy(chat_interfaces__msg__ChatMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    chat_interfaces__msg__ChatMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
chat_interfaces__msg__ChatMessage__Sequence__are_equal(const chat_interfaces__msg__ChatMessage__Sequence * lhs, const chat_interfaces__msg__ChatMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!chat_interfaces__msg__ChatMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
chat_interfaces__msg__ChatMessage__Sequence__copy(
  const chat_interfaces__msg__ChatMessage__Sequence * input,
  chat_interfaces__msg__ChatMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(chat_interfaces__msg__ChatMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    chat_interfaces__msg__ChatMessage * data =
      (chat_interfaces__msg__ChatMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!chat_interfaces__msg__ChatMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          chat_interfaces__msg__ChatMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!chat_interfaces__msg__ChatMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
