// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from messages:msg/Pidsignal.idl
// generated code does not contain a copyright notice
#include "messages/msg/detail/pidsignal__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
messages__msg__Pidsignal__init(messages__msg__Pidsignal * msg)
{
  if (!msg) {
    return false;
  }
  // actuation
  return true;
}

void
messages__msg__Pidsignal__fini(messages__msg__Pidsignal * msg)
{
  if (!msg) {
    return;
  }
  // actuation
}

bool
messages__msg__Pidsignal__are_equal(const messages__msg__Pidsignal * lhs, const messages__msg__Pidsignal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // actuation
  if (lhs->actuation != rhs->actuation) {
    return false;
  }
  return true;
}

bool
messages__msg__Pidsignal__copy(
  const messages__msg__Pidsignal * input,
  messages__msg__Pidsignal * output)
{
  if (!input || !output) {
    return false;
  }
  // actuation
  output->actuation = input->actuation;
  return true;
}

messages__msg__Pidsignal *
messages__msg__Pidsignal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  messages__msg__Pidsignal * msg = (messages__msg__Pidsignal *)allocator.allocate(sizeof(messages__msg__Pidsignal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(messages__msg__Pidsignal));
  bool success = messages__msg__Pidsignal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
messages__msg__Pidsignal__destroy(messages__msg__Pidsignal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    messages__msg__Pidsignal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
messages__msg__Pidsignal__Sequence__init(messages__msg__Pidsignal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  messages__msg__Pidsignal * data = NULL;

  if (size) {
    data = (messages__msg__Pidsignal *)allocator.zero_allocate(size, sizeof(messages__msg__Pidsignal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = messages__msg__Pidsignal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        messages__msg__Pidsignal__fini(&data[i - 1]);
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
messages__msg__Pidsignal__Sequence__fini(messages__msg__Pidsignal__Sequence * array)
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
      messages__msg__Pidsignal__fini(&array->data[i]);
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

messages__msg__Pidsignal__Sequence *
messages__msg__Pidsignal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  messages__msg__Pidsignal__Sequence * array = (messages__msg__Pidsignal__Sequence *)allocator.allocate(sizeof(messages__msg__Pidsignal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = messages__msg__Pidsignal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
messages__msg__Pidsignal__Sequence__destroy(messages__msg__Pidsignal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    messages__msg__Pidsignal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
messages__msg__Pidsignal__Sequence__are_equal(const messages__msg__Pidsignal__Sequence * lhs, const messages__msg__Pidsignal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!messages__msg__Pidsignal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
messages__msg__Pidsignal__Sequence__copy(
  const messages__msg__Pidsignal__Sequence * input,
  messages__msg__Pidsignal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(messages__msg__Pidsignal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    messages__msg__Pidsignal * data =
      (messages__msg__Pidsignal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!messages__msg__Pidsignal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          messages__msg__Pidsignal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!messages__msg__Pidsignal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
