// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ttt_msgs:msg/Move.idl
// generated code does not contain a copyright notice
#include "ttt_msgs/msg/detail/move__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ttt_msgs__msg__Move__init(ttt_msgs__msg__Move * msg)
{
  if (!msg) {
    return false;
  }
  // cell_index
  // player
  return true;
}

void
ttt_msgs__msg__Move__fini(ttt_msgs__msg__Move * msg)
{
  if (!msg) {
    return;
  }
  // cell_index
  // player
}

bool
ttt_msgs__msg__Move__are_equal(const ttt_msgs__msg__Move * lhs, const ttt_msgs__msg__Move * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cell_index
  if (lhs->cell_index != rhs->cell_index) {
    return false;
  }
  // player
  if (lhs->player != rhs->player) {
    return false;
  }
  return true;
}

bool
ttt_msgs__msg__Move__copy(
  const ttt_msgs__msg__Move * input,
  ttt_msgs__msg__Move * output)
{
  if (!input || !output) {
    return false;
  }
  // cell_index
  output->cell_index = input->cell_index;
  // player
  output->player = input->player;
  return true;
}

ttt_msgs__msg__Move *
ttt_msgs__msg__Move__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ttt_msgs__msg__Move * msg = (ttt_msgs__msg__Move *)allocator.allocate(sizeof(ttt_msgs__msg__Move), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ttt_msgs__msg__Move));
  bool success = ttt_msgs__msg__Move__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ttt_msgs__msg__Move__destroy(ttt_msgs__msg__Move * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ttt_msgs__msg__Move__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ttt_msgs__msg__Move__Sequence__init(ttt_msgs__msg__Move__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ttt_msgs__msg__Move * data = NULL;

  if (size) {
    data = (ttt_msgs__msg__Move *)allocator.zero_allocate(size, sizeof(ttt_msgs__msg__Move), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ttt_msgs__msg__Move__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ttt_msgs__msg__Move__fini(&data[i - 1]);
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
ttt_msgs__msg__Move__Sequence__fini(ttt_msgs__msg__Move__Sequence * array)
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
      ttt_msgs__msg__Move__fini(&array->data[i]);
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

ttt_msgs__msg__Move__Sequence *
ttt_msgs__msg__Move__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ttt_msgs__msg__Move__Sequence * array = (ttt_msgs__msg__Move__Sequence *)allocator.allocate(sizeof(ttt_msgs__msg__Move__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ttt_msgs__msg__Move__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ttt_msgs__msg__Move__Sequence__destroy(ttt_msgs__msg__Move__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ttt_msgs__msg__Move__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ttt_msgs__msg__Move__Sequence__are_equal(const ttt_msgs__msg__Move__Sequence * lhs, const ttt_msgs__msg__Move__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ttt_msgs__msg__Move__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ttt_msgs__msg__Move__Sequence__copy(
  const ttt_msgs__msg__Move__Sequence * input,
  ttt_msgs__msg__Move__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ttt_msgs__msg__Move);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ttt_msgs__msg__Move * data =
      (ttt_msgs__msg__Move *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ttt_msgs__msg__Move__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ttt_msgs__msg__Move__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ttt_msgs__msg__Move__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
