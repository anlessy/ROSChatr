// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from chat_interfaces:srv/SendMessage.idl
// generated code does not contain a copyright notice
#include "chat_interfaces/srv/detail/send_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `message`
#include "chat_interfaces/msg/detail/chat_message__functions.h"

bool
chat_interfaces__srv__SendMessage_Request__init(chat_interfaces__srv__SendMessage_Request * msg)
{
  if (!msg) {
    return false;
  }
  // message
  if (!chat_interfaces__msg__ChatMessage__init(&msg->message)) {
    chat_interfaces__srv__SendMessage_Request__fini(msg);
    return false;
  }
  return true;
}

void
chat_interfaces__srv__SendMessage_Request__fini(chat_interfaces__srv__SendMessage_Request * msg)
{
  if (!msg) {
    return;
  }
  // message
  chat_interfaces__msg__ChatMessage__fini(&msg->message);
}

bool
chat_interfaces__srv__SendMessage_Request__are_equal(const chat_interfaces__srv__SendMessage_Request * lhs, const chat_interfaces__srv__SendMessage_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // message
  if (!chat_interfaces__msg__ChatMessage__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
chat_interfaces__srv__SendMessage_Request__copy(
  const chat_interfaces__srv__SendMessage_Request * input,
  chat_interfaces__srv__SendMessage_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // message
  if (!chat_interfaces__msg__ChatMessage__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

chat_interfaces__srv__SendMessage_Request *
chat_interfaces__srv__SendMessage_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chat_interfaces__srv__SendMessage_Request * msg = (chat_interfaces__srv__SendMessage_Request *)allocator.allocate(sizeof(chat_interfaces__srv__SendMessage_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(chat_interfaces__srv__SendMessage_Request));
  bool success = chat_interfaces__srv__SendMessage_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
chat_interfaces__srv__SendMessage_Request__destroy(chat_interfaces__srv__SendMessage_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    chat_interfaces__srv__SendMessage_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
chat_interfaces__srv__SendMessage_Request__Sequence__init(chat_interfaces__srv__SendMessage_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chat_interfaces__srv__SendMessage_Request * data = NULL;

  if (size) {
    data = (chat_interfaces__srv__SendMessage_Request *)allocator.zero_allocate(size, sizeof(chat_interfaces__srv__SendMessage_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = chat_interfaces__srv__SendMessage_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        chat_interfaces__srv__SendMessage_Request__fini(&data[i - 1]);
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
chat_interfaces__srv__SendMessage_Request__Sequence__fini(chat_interfaces__srv__SendMessage_Request__Sequence * array)
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
      chat_interfaces__srv__SendMessage_Request__fini(&array->data[i]);
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

chat_interfaces__srv__SendMessage_Request__Sequence *
chat_interfaces__srv__SendMessage_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chat_interfaces__srv__SendMessage_Request__Sequence * array = (chat_interfaces__srv__SendMessage_Request__Sequence *)allocator.allocate(sizeof(chat_interfaces__srv__SendMessage_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = chat_interfaces__srv__SendMessage_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
chat_interfaces__srv__SendMessage_Request__Sequence__destroy(chat_interfaces__srv__SendMessage_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    chat_interfaces__srv__SendMessage_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
chat_interfaces__srv__SendMessage_Request__Sequence__are_equal(const chat_interfaces__srv__SendMessage_Request__Sequence * lhs, const chat_interfaces__srv__SendMessage_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!chat_interfaces__srv__SendMessage_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
chat_interfaces__srv__SendMessage_Request__Sequence__copy(
  const chat_interfaces__srv__SendMessage_Request__Sequence * input,
  chat_interfaces__srv__SendMessage_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(chat_interfaces__srv__SendMessage_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    chat_interfaces__srv__SendMessage_Request * data =
      (chat_interfaces__srv__SendMessage_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!chat_interfaces__srv__SendMessage_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          chat_interfaces__srv__SendMessage_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!chat_interfaces__srv__SendMessage_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
chat_interfaces__srv__SendMessage_Response__init(chat_interfaces__srv__SendMessage_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
chat_interfaces__srv__SendMessage_Response__fini(chat_interfaces__srv__SendMessage_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
chat_interfaces__srv__SendMessage_Response__are_equal(const chat_interfaces__srv__SendMessage_Response * lhs, const chat_interfaces__srv__SendMessage_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
chat_interfaces__srv__SendMessage_Response__copy(
  const chat_interfaces__srv__SendMessage_Response * input,
  chat_interfaces__srv__SendMessage_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

chat_interfaces__srv__SendMessage_Response *
chat_interfaces__srv__SendMessage_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chat_interfaces__srv__SendMessage_Response * msg = (chat_interfaces__srv__SendMessage_Response *)allocator.allocate(sizeof(chat_interfaces__srv__SendMessage_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(chat_interfaces__srv__SendMessage_Response));
  bool success = chat_interfaces__srv__SendMessage_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
chat_interfaces__srv__SendMessage_Response__destroy(chat_interfaces__srv__SendMessage_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    chat_interfaces__srv__SendMessage_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
chat_interfaces__srv__SendMessage_Response__Sequence__init(chat_interfaces__srv__SendMessage_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chat_interfaces__srv__SendMessage_Response * data = NULL;

  if (size) {
    data = (chat_interfaces__srv__SendMessage_Response *)allocator.zero_allocate(size, sizeof(chat_interfaces__srv__SendMessage_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = chat_interfaces__srv__SendMessage_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        chat_interfaces__srv__SendMessage_Response__fini(&data[i - 1]);
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
chat_interfaces__srv__SendMessage_Response__Sequence__fini(chat_interfaces__srv__SendMessage_Response__Sequence * array)
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
      chat_interfaces__srv__SendMessage_Response__fini(&array->data[i]);
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

chat_interfaces__srv__SendMessage_Response__Sequence *
chat_interfaces__srv__SendMessage_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chat_interfaces__srv__SendMessage_Response__Sequence * array = (chat_interfaces__srv__SendMessage_Response__Sequence *)allocator.allocate(sizeof(chat_interfaces__srv__SendMessage_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = chat_interfaces__srv__SendMessage_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
chat_interfaces__srv__SendMessage_Response__Sequence__destroy(chat_interfaces__srv__SendMessage_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    chat_interfaces__srv__SendMessage_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
chat_interfaces__srv__SendMessage_Response__Sequence__are_equal(const chat_interfaces__srv__SendMessage_Response__Sequence * lhs, const chat_interfaces__srv__SendMessage_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!chat_interfaces__srv__SendMessage_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
chat_interfaces__srv__SendMessage_Response__Sequence__copy(
  const chat_interfaces__srv__SendMessage_Response__Sequence * input,
  chat_interfaces__srv__SendMessage_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(chat_interfaces__srv__SendMessage_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    chat_interfaces__srv__SendMessage_Response * data =
      (chat_interfaces__srv__SendMessage_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!chat_interfaces__srv__SendMessage_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          chat_interfaces__srv__SendMessage_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!chat_interfaces__srv__SendMessage_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
