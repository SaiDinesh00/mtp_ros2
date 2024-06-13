// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aerobot_interfaces:msg/Esc.idl
// generated code does not contain a copyright notice
#include "aerobot_interfaces/msg/detail/esc__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
aerobot_interfaces__msg__Esc__init(aerobot_interfaces__msg__Esc * msg)
{
  if (!msg) {
    return false;
  }
  // pin_number
  // pulse_width
  return true;
}

void
aerobot_interfaces__msg__Esc__fini(aerobot_interfaces__msg__Esc * msg)
{
  if (!msg) {
    return;
  }
  // pin_number
  // pulse_width
}

bool
aerobot_interfaces__msg__Esc__are_equal(const aerobot_interfaces__msg__Esc * lhs, const aerobot_interfaces__msg__Esc * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pin_number
  if (lhs->pin_number != rhs->pin_number) {
    return false;
  }
  // pulse_width
  if (lhs->pulse_width != rhs->pulse_width) {
    return false;
  }
  return true;
}

bool
aerobot_interfaces__msg__Esc__copy(
  const aerobot_interfaces__msg__Esc * input,
  aerobot_interfaces__msg__Esc * output)
{
  if (!input || !output) {
    return false;
  }
  // pin_number
  output->pin_number = input->pin_number;
  // pulse_width
  output->pulse_width = input->pulse_width;
  return true;
}

aerobot_interfaces__msg__Esc *
aerobot_interfaces__msg__Esc__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aerobot_interfaces__msg__Esc * msg = (aerobot_interfaces__msg__Esc *)allocator.allocate(sizeof(aerobot_interfaces__msg__Esc), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aerobot_interfaces__msg__Esc));
  bool success = aerobot_interfaces__msg__Esc__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aerobot_interfaces__msg__Esc__destroy(aerobot_interfaces__msg__Esc * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aerobot_interfaces__msg__Esc__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aerobot_interfaces__msg__Esc__Sequence__init(aerobot_interfaces__msg__Esc__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aerobot_interfaces__msg__Esc * data = NULL;

  if (size) {
    data = (aerobot_interfaces__msg__Esc *)allocator.zero_allocate(size, sizeof(aerobot_interfaces__msg__Esc), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aerobot_interfaces__msg__Esc__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aerobot_interfaces__msg__Esc__fini(&data[i - 1]);
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
aerobot_interfaces__msg__Esc__Sequence__fini(aerobot_interfaces__msg__Esc__Sequence * array)
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
      aerobot_interfaces__msg__Esc__fini(&array->data[i]);
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

aerobot_interfaces__msg__Esc__Sequence *
aerobot_interfaces__msg__Esc__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aerobot_interfaces__msg__Esc__Sequence * array = (aerobot_interfaces__msg__Esc__Sequence *)allocator.allocate(sizeof(aerobot_interfaces__msg__Esc__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aerobot_interfaces__msg__Esc__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aerobot_interfaces__msg__Esc__Sequence__destroy(aerobot_interfaces__msg__Esc__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aerobot_interfaces__msg__Esc__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aerobot_interfaces__msg__Esc__Sequence__are_equal(const aerobot_interfaces__msg__Esc__Sequence * lhs, const aerobot_interfaces__msg__Esc__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aerobot_interfaces__msg__Esc__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aerobot_interfaces__msg__Esc__Sequence__copy(
  const aerobot_interfaces__msg__Esc__Sequence * input,
  aerobot_interfaces__msg__Esc__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aerobot_interfaces__msg__Esc);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aerobot_interfaces__msg__Esc * data =
      (aerobot_interfaces__msg__Esc *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aerobot_interfaces__msg__Esc__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aerobot_interfaces__msg__Esc__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aerobot_interfaces__msg__Esc__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
