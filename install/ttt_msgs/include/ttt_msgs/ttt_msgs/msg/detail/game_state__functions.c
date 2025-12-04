// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ttt_msgs:msg/GameState.idl
// generated code does not contain a copyright notice
#include "ttt_msgs/msg/detail/game_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ttt_msgs__msg__GameState__init(ttt_msgs__msg__GameState * msg)
{
  if (!msg) {
    return false;
  }
  // cells
  // current_player
  // status
  return true;
}

void
ttt_msgs__msg__GameState__fini(ttt_msgs__msg__GameState * msg)
{
  if (!msg) {
    return;
  }
  // cells
  // current_player
  // status
}

bool
ttt_msgs__msg__GameState__are_equal(const ttt_msgs__msg__GameState * lhs, const ttt_msgs__msg__GameState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cells
  for (size_t i = 0; i < 9; ++i) {
    if (lhs->cells[i] != rhs->cells[i]) {
      return false;
    }
  }
  // current_player
  if (lhs->current_player != rhs->current_player) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  return true;
}

bool
ttt_msgs__msg__GameState__copy(
  const ttt_msgs__msg__GameState * input,
  ttt_msgs__msg__GameState * output)
{
  if (!input || !output) {
    return false;
  }
  // cells
  for (size_t i = 0; i < 9; ++i) {
    output->cells[i] = input->cells[i];
  }
  // current_player
  output->current_player = input->current_player;
  // status
  output->status = input->status;
  return true;
}

ttt_msgs__msg__GameState *
ttt_msgs__msg__GameState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ttt_msgs__msg__GameState * msg = (ttt_msgs__msg__GameState *)allocator.allocate(sizeof(ttt_msgs__msg__GameState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ttt_msgs__msg__GameState));
  bool success = ttt_msgs__msg__GameState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ttt_msgs__msg__GameState__destroy(ttt_msgs__msg__GameState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ttt_msgs__msg__GameState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ttt_msgs__msg__GameState__Sequence__init(ttt_msgs__msg__GameState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ttt_msgs__msg__GameState * data = NULL;

  if (size) {
    data = (ttt_msgs__msg__GameState *)allocator.zero_allocate(size, sizeof(ttt_msgs__msg__GameState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ttt_msgs__msg__GameState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ttt_msgs__msg__GameState__fini(&data[i - 1]);
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
ttt_msgs__msg__GameState__Sequence__fini(ttt_msgs__msg__GameState__Sequence * array)
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
      ttt_msgs__msg__GameState__fini(&array->data[i]);
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

ttt_msgs__msg__GameState__Sequence *
ttt_msgs__msg__GameState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ttt_msgs__msg__GameState__Sequence * array = (ttt_msgs__msg__GameState__Sequence *)allocator.allocate(sizeof(ttt_msgs__msg__GameState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ttt_msgs__msg__GameState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ttt_msgs__msg__GameState__Sequence__destroy(ttt_msgs__msg__GameState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ttt_msgs__msg__GameState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ttt_msgs__msg__GameState__Sequence__are_equal(const ttt_msgs__msg__GameState__Sequence * lhs, const ttt_msgs__msg__GameState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ttt_msgs__msg__GameState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ttt_msgs__msg__GameState__Sequence__copy(
  const ttt_msgs__msg__GameState__Sequence * input,
  ttt_msgs__msg__GameState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ttt_msgs__msg__GameState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ttt_msgs__msg__GameState * data =
      (ttt_msgs__msg__GameState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ttt_msgs__msg__GameState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ttt_msgs__msg__GameState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ttt_msgs__msg__GameState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
