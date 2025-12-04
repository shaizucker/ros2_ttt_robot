// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ttt_msgs:action/GoHome.idl
// generated code does not contain a copyright notice
#include "ttt_msgs/action/detail/go_home__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ttt_msgs__action__GoHome_Goal__init(ttt_msgs__action__GoHome_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
ttt_msgs__action__GoHome_Goal__fini(ttt_msgs__action__GoHome_Goal * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
ttt_msgs__action__GoHome_Goal__are_equal(const ttt_msgs__action__GoHome_Goal * lhs, const ttt_msgs__action__GoHome_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
ttt_msgs__action__GoHome_Goal__copy(
  const ttt_msgs__action__GoHome_Goal * input,
  ttt_msgs__action__GoHome_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

ttt_msgs__action__GoHome_Goal *
ttt_msgs__action__GoHome_Goal__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ttt_msgs__action__GoHome_Goal * msg = (ttt_msgs__action__GoHome_Goal *)allocator.allocate(sizeof(ttt_msgs__action__GoHome_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ttt_msgs__action__GoHome_Goal));
  bool success = ttt_msgs__action__GoHome_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ttt_msgs__action__GoHome_Goal__destroy(ttt_msgs__action__GoHome_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ttt_msgs__action__GoHome_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ttt_msgs__action__GoHome_Goal__Sequence__init(ttt_msgs__action__GoHome_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ttt_msgs__action__GoHome_Goal * data = NULL;

  if (size) {
    data = (ttt_msgs__action__GoHome_Goal *)allocator.zero_allocate(size, sizeof(ttt_msgs__action__GoHome_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ttt_msgs__action__GoHome_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ttt_msgs__action__GoHome_Goal__fini(&data[i - 1]);
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
ttt_msgs__action__GoHome_Goal__Sequence__fini(ttt_msgs__action__GoHome_Goal__Sequence * array)
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
      ttt_msgs__action__GoHome_Goal__fini(&array->data[i]);
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

ttt_msgs__action__GoHome_Goal__Sequence *
ttt_msgs__action__GoHome_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ttt_msgs__action__GoHome_Goal__Sequence * array = (ttt_msgs__action__GoHome_Goal__Sequence *)allocator.allocate(sizeof(ttt_msgs__action__GoHome_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ttt_msgs__action__GoHome_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ttt_msgs__action__GoHome_Goal__Sequence__destroy(ttt_msgs__action__GoHome_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ttt_msgs__action__GoHome_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ttt_msgs__action__GoHome_Goal__Sequence__are_equal(const ttt_msgs__action__GoHome_Goal__Sequence * lhs, const ttt_msgs__action__GoHome_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ttt_msgs__action__GoHome_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ttt_msgs__action__GoHome_Goal__Sequence__copy(
  const ttt_msgs__action__GoHome_Goal__Sequence * input,
  ttt_msgs__action__GoHome_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ttt_msgs__action__GoHome_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ttt_msgs__action__GoHome_Goal * data =
      (ttt_msgs__action__GoHome_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ttt_msgs__action__GoHome_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ttt_msgs__action__GoHome_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ttt_msgs__action__GoHome_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
ttt_msgs__action__GoHome_Result__init(ttt_msgs__action__GoHome_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    ttt_msgs__action__GoHome_Result__fini(msg);
    return false;
  }
  return true;
}

void
ttt_msgs__action__GoHome_Result__fini(ttt_msgs__action__GoHome_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
ttt_msgs__action__GoHome_Result__are_equal(const ttt_msgs__action__GoHome_Result * lhs, const ttt_msgs__action__GoHome_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
ttt_msgs__action__GoHome_Result__copy(
  const ttt_msgs__action__GoHome_Result * input,
  ttt_msgs__action__GoHome_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

ttt_msgs__action__GoHome_Result *
ttt_msgs__action__GoHome_Result__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ttt_msgs__action__GoHome_Result * msg = (ttt_msgs__action__GoHome_Result *)allocator.allocate(sizeof(ttt_msgs__action__GoHome_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ttt_msgs__action__GoHome_Result));
  bool success = ttt_msgs__action__GoHome_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ttt_msgs__action__GoHome_Result__destroy(ttt_msgs__action__GoHome_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ttt_msgs__action__GoHome_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ttt_msgs__action__GoHome_Result__Sequence__init(ttt_msgs__action__GoHome_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ttt_msgs__action__GoHome_Result * data = NULL;

  if (size) {
    data = (ttt_msgs__action__GoHome_Result *)allocator.zero_allocate(size, sizeof(ttt_msgs__action__GoHome_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ttt_msgs__action__GoHome_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ttt_msgs__action__GoHome_Result__fini(&data[i - 1]);
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
ttt_msgs__action__GoHome_Result__Sequence__fini(ttt_msgs__action__GoHome_Result__Sequence * array)
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
      ttt_msgs__action__GoHome_Result__fini(&array->data[i]);
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

ttt_msgs__action__GoHome_Result__Sequence *
ttt_msgs__action__GoHome_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ttt_msgs__action__GoHome_Result__Sequence * array = (ttt_msgs__action__GoHome_Result__Sequence *)allocator.allocate(sizeof(ttt_msgs__action__GoHome_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ttt_msgs__action__GoHome_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ttt_msgs__action__GoHome_Result__Sequence__destroy(ttt_msgs__action__GoHome_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ttt_msgs__action__GoHome_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ttt_msgs__action__GoHome_Result__Sequence__are_equal(const ttt_msgs__action__GoHome_Result__Sequence * lhs, const ttt_msgs__action__GoHome_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ttt_msgs__action__GoHome_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ttt_msgs__action__GoHome_Result__Sequence__copy(
  const ttt_msgs__action__GoHome_Result__Sequence * input,
  ttt_msgs__action__GoHome_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ttt_msgs__action__GoHome_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ttt_msgs__action__GoHome_Result * data =
      (ttt_msgs__action__GoHome_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ttt_msgs__action__GoHome_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ttt_msgs__action__GoHome_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ttt_msgs__action__GoHome_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
ttt_msgs__action__GoHome_Feedback__init(ttt_msgs__action__GoHome_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // progress
  return true;
}

void
ttt_msgs__action__GoHome_Feedback__fini(ttt_msgs__action__GoHome_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // progress
}

bool
ttt_msgs__action__GoHome_Feedback__are_equal(const ttt_msgs__action__GoHome_Feedback * lhs, const ttt_msgs__action__GoHome_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // progress
  if (lhs->progress != rhs->progress) {
    return false;
  }
  return true;
}

bool
ttt_msgs__action__GoHome_Feedback__copy(
  const ttt_msgs__action__GoHome_Feedback * input,
  ttt_msgs__action__GoHome_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // progress
  output->progress = input->progress;
  return true;
}

ttt_msgs__action__GoHome_Feedback *
ttt_msgs__action__GoHome_Feedback__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ttt_msgs__action__GoHome_Feedback * msg = (ttt_msgs__action__GoHome_Feedback *)allocator.allocate(sizeof(ttt_msgs__action__GoHome_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ttt_msgs__action__GoHome_Feedback));
  bool success = ttt_msgs__action__GoHome_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ttt_msgs__action__GoHome_Feedback__destroy(ttt_msgs__action__GoHome_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ttt_msgs__action__GoHome_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ttt_msgs__action__GoHome_Feedback__Sequence__init(ttt_msgs__action__GoHome_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ttt_msgs__action__GoHome_Feedback * data = NULL;

  if (size) {
    data = (ttt_msgs__action__GoHome_Feedback *)allocator.zero_allocate(size, sizeof(ttt_msgs__action__GoHome_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ttt_msgs__action__GoHome_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ttt_msgs__action__GoHome_Feedback__fini(&data[i - 1]);
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
ttt_msgs__action__GoHome_Feedback__Sequence__fini(ttt_msgs__action__GoHome_Feedback__Sequence * array)
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
      ttt_msgs__action__GoHome_Feedback__fini(&array->data[i]);
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

ttt_msgs__action__GoHome_Feedback__Sequence *
ttt_msgs__action__GoHome_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ttt_msgs__action__GoHome_Feedback__Sequence * array = (ttt_msgs__action__GoHome_Feedback__Sequence *)allocator.allocate(sizeof(ttt_msgs__action__GoHome_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ttt_msgs__action__GoHome_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ttt_msgs__action__GoHome_Feedback__Sequence__destroy(ttt_msgs__action__GoHome_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ttt_msgs__action__GoHome_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ttt_msgs__action__GoHome_Feedback__Sequence__are_equal(const ttt_msgs__action__GoHome_Feedback__Sequence * lhs, const ttt_msgs__action__GoHome_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ttt_msgs__action__GoHome_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ttt_msgs__action__GoHome_Feedback__Sequence__copy(
  const ttt_msgs__action__GoHome_Feedback__Sequence * input,
  ttt_msgs__action__GoHome_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ttt_msgs__action__GoHome_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ttt_msgs__action__GoHome_Feedback * data =
      (ttt_msgs__action__GoHome_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ttt_msgs__action__GoHome_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ttt_msgs__action__GoHome_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ttt_msgs__action__GoHome_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "ttt_msgs/action/detail/go_home__functions.h"

bool
ttt_msgs__action__GoHome_SendGoal_Request__init(ttt_msgs__action__GoHome_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    ttt_msgs__action__GoHome_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!ttt_msgs__action__GoHome_Goal__init(&msg->goal)) {
    ttt_msgs__action__GoHome_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
ttt_msgs__action__GoHome_SendGoal_Request__fini(ttt_msgs__action__GoHome_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  ttt_msgs__action__GoHome_Goal__fini(&msg->goal);
}

bool
ttt_msgs__action__GoHome_SendGoal_Request__are_equal(const ttt_msgs__action__GoHome_SendGoal_Request * lhs, const ttt_msgs__action__GoHome_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!ttt_msgs__action__GoHome_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
ttt_msgs__action__GoHome_SendGoal_Request__copy(
  const ttt_msgs__action__GoHome_SendGoal_Request * input,
  ttt_msgs__action__GoHome_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!ttt_msgs__action__GoHome_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

ttt_msgs__action__GoHome_SendGoal_Request *
ttt_msgs__action__GoHome_SendGoal_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ttt_msgs__action__GoHome_SendGoal_Request * msg = (ttt_msgs__action__GoHome_SendGoal_Request *)allocator.allocate(sizeof(ttt_msgs__action__GoHome_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ttt_msgs__action__GoHome_SendGoal_Request));
  bool success = ttt_msgs__action__GoHome_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ttt_msgs__action__GoHome_SendGoal_Request__destroy(ttt_msgs__action__GoHome_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ttt_msgs__action__GoHome_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ttt_msgs__action__GoHome_SendGoal_Request__Sequence__init(ttt_msgs__action__GoHome_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ttt_msgs__action__GoHome_SendGoal_Request * data = NULL;

  if (size) {
    data = (ttt_msgs__action__GoHome_SendGoal_Request *)allocator.zero_allocate(size, sizeof(ttt_msgs__action__GoHome_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ttt_msgs__action__GoHome_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ttt_msgs__action__GoHome_SendGoal_Request__fini(&data[i - 1]);
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
ttt_msgs__action__GoHome_SendGoal_Request__Sequence__fini(ttt_msgs__action__GoHome_SendGoal_Request__Sequence * array)
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
      ttt_msgs__action__GoHome_SendGoal_Request__fini(&array->data[i]);
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

ttt_msgs__action__GoHome_SendGoal_Request__Sequence *
ttt_msgs__action__GoHome_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ttt_msgs__action__GoHome_SendGoal_Request__Sequence * array = (ttt_msgs__action__GoHome_SendGoal_Request__Sequence *)allocator.allocate(sizeof(ttt_msgs__action__GoHome_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ttt_msgs__action__GoHome_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ttt_msgs__action__GoHome_SendGoal_Request__Sequence__destroy(ttt_msgs__action__GoHome_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ttt_msgs__action__GoHome_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ttt_msgs__action__GoHome_SendGoal_Request__Sequence__are_equal(const ttt_msgs__action__GoHome_SendGoal_Request__Sequence * lhs, const ttt_msgs__action__GoHome_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ttt_msgs__action__GoHome_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ttt_msgs__action__GoHome_SendGoal_Request__Sequence__copy(
  const ttt_msgs__action__GoHome_SendGoal_Request__Sequence * input,
  ttt_msgs__action__GoHome_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ttt_msgs__action__GoHome_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ttt_msgs__action__GoHome_SendGoal_Request * data =
      (ttt_msgs__action__GoHome_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ttt_msgs__action__GoHome_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ttt_msgs__action__GoHome_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ttt_msgs__action__GoHome_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
ttt_msgs__action__GoHome_SendGoal_Response__init(ttt_msgs__action__GoHome_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    ttt_msgs__action__GoHome_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
ttt_msgs__action__GoHome_SendGoal_Response__fini(ttt_msgs__action__GoHome_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
ttt_msgs__action__GoHome_SendGoal_Response__are_equal(const ttt_msgs__action__GoHome_SendGoal_Response * lhs, const ttt_msgs__action__GoHome_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
ttt_msgs__action__GoHome_SendGoal_Response__copy(
  const ttt_msgs__action__GoHome_SendGoal_Response * input,
  ttt_msgs__action__GoHome_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

ttt_msgs__action__GoHome_SendGoal_Response *
ttt_msgs__action__GoHome_SendGoal_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ttt_msgs__action__GoHome_SendGoal_Response * msg = (ttt_msgs__action__GoHome_SendGoal_Response *)allocator.allocate(sizeof(ttt_msgs__action__GoHome_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ttt_msgs__action__GoHome_SendGoal_Response));
  bool success = ttt_msgs__action__GoHome_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ttt_msgs__action__GoHome_SendGoal_Response__destroy(ttt_msgs__action__GoHome_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ttt_msgs__action__GoHome_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ttt_msgs__action__GoHome_SendGoal_Response__Sequence__init(ttt_msgs__action__GoHome_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ttt_msgs__action__GoHome_SendGoal_Response * data = NULL;

  if (size) {
    data = (ttt_msgs__action__GoHome_SendGoal_Response *)allocator.zero_allocate(size, sizeof(ttt_msgs__action__GoHome_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ttt_msgs__action__GoHome_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ttt_msgs__action__GoHome_SendGoal_Response__fini(&data[i - 1]);
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
ttt_msgs__action__GoHome_SendGoal_Response__Sequence__fini(ttt_msgs__action__GoHome_SendGoal_Response__Sequence * array)
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
      ttt_msgs__action__GoHome_SendGoal_Response__fini(&array->data[i]);
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

ttt_msgs__action__GoHome_SendGoal_Response__Sequence *
ttt_msgs__action__GoHome_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ttt_msgs__action__GoHome_SendGoal_Response__Sequence * array = (ttt_msgs__action__GoHome_SendGoal_Response__Sequence *)allocator.allocate(sizeof(ttt_msgs__action__GoHome_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ttt_msgs__action__GoHome_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ttt_msgs__action__GoHome_SendGoal_Response__Sequence__destroy(ttt_msgs__action__GoHome_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ttt_msgs__action__GoHome_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ttt_msgs__action__GoHome_SendGoal_Response__Sequence__are_equal(const ttt_msgs__action__GoHome_SendGoal_Response__Sequence * lhs, const ttt_msgs__action__GoHome_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ttt_msgs__action__GoHome_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ttt_msgs__action__GoHome_SendGoal_Response__Sequence__copy(
  const ttt_msgs__action__GoHome_SendGoal_Response__Sequence * input,
  ttt_msgs__action__GoHome_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ttt_msgs__action__GoHome_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ttt_msgs__action__GoHome_SendGoal_Response * data =
      (ttt_msgs__action__GoHome_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ttt_msgs__action__GoHome_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ttt_msgs__action__GoHome_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ttt_msgs__action__GoHome_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "ttt_msgs/action/detail/go_home__functions.h"

bool
ttt_msgs__action__GoHome_SendGoal_Event__init(ttt_msgs__action__GoHome_SendGoal_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    ttt_msgs__action__GoHome_SendGoal_Event__fini(msg);
    return false;
  }
  // request
  if (!ttt_msgs__action__GoHome_SendGoal_Request__Sequence__init(&msg->request, 0)) {
    ttt_msgs__action__GoHome_SendGoal_Event__fini(msg);
    return false;
  }
  // response
  if (!ttt_msgs__action__GoHome_SendGoal_Response__Sequence__init(&msg->response, 0)) {
    ttt_msgs__action__GoHome_SendGoal_Event__fini(msg);
    return false;
  }
  return true;
}

void
ttt_msgs__action__GoHome_SendGoal_Event__fini(ttt_msgs__action__GoHome_SendGoal_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  ttt_msgs__action__GoHome_SendGoal_Request__Sequence__fini(&msg->request);
  // response
  ttt_msgs__action__GoHome_SendGoal_Response__Sequence__fini(&msg->response);
}

bool
ttt_msgs__action__GoHome_SendGoal_Event__are_equal(const ttt_msgs__action__GoHome_SendGoal_Event * lhs, const ttt_msgs__action__GoHome_SendGoal_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!ttt_msgs__action__GoHome_SendGoal_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!ttt_msgs__action__GoHome_SendGoal_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
ttt_msgs__action__GoHome_SendGoal_Event__copy(
  const ttt_msgs__action__GoHome_SendGoal_Event * input,
  ttt_msgs__action__GoHome_SendGoal_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!ttt_msgs__action__GoHome_SendGoal_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!ttt_msgs__action__GoHome_SendGoal_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

ttt_msgs__action__GoHome_SendGoal_Event *
ttt_msgs__action__GoHome_SendGoal_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ttt_msgs__action__GoHome_SendGoal_Event * msg = (ttt_msgs__action__GoHome_SendGoal_Event *)allocator.allocate(sizeof(ttt_msgs__action__GoHome_SendGoal_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ttt_msgs__action__GoHome_SendGoal_Event));
  bool success = ttt_msgs__action__GoHome_SendGoal_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ttt_msgs__action__GoHome_SendGoal_Event__destroy(ttt_msgs__action__GoHome_SendGoal_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ttt_msgs__action__GoHome_SendGoal_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ttt_msgs__action__GoHome_SendGoal_Event__Sequence__init(ttt_msgs__action__GoHome_SendGoal_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ttt_msgs__action__GoHome_SendGoal_Event * data = NULL;

  if (size) {
    data = (ttt_msgs__action__GoHome_SendGoal_Event *)allocator.zero_allocate(size, sizeof(ttt_msgs__action__GoHome_SendGoal_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ttt_msgs__action__GoHome_SendGoal_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ttt_msgs__action__GoHome_SendGoal_Event__fini(&data[i - 1]);
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
ttt_msgs__action__GoHome_SendGoal_Event__Sequence__fini(ttt_msgs__action__GoHome_SendGoal_Event__Sequence * array)
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
      ttt_msgs__action__GoHome_SendGoal_Event__fini(&array->data[i]);
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

ttt_msgs__action__GoHome_SendGoal_Event__Sequence *
ttt_msgs__action__GoHome_SendGoal_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ttt_msgs__action__GoHome_SendGoal_Event__Sequence * array = (ttt_msgs__action__GoHome_SendGoal_Event__Sequence *)allocator.allocate(sizeof(ttt_msgs__action__GoHome_SendGoal_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ttt_msgs__action__GoHome_SendGoal_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ttt_msgs__action__GoHome_SendGoal_Event__Sequence__destroy(ttt_msgs__action__GoHome_SendGoal_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ttt_msgs__action__GoHome_SendGoal_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ttt_msgs__action__GoHome_SendGoal_Event__Sequence__are_equal(const ttt_msgs__action__GoHome_SendGoal_Event__Sequence * lhs, const ttt_msgs__action__GoHome_SendGoal_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ttt_msgs__action__GoHome_SendGoal_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ttt_msgs__action__GoHome_SendGoal_Event__Sequence__copy(
  const ttt_msgs__action__GoHome_SendGoal_Event__Sequence * input,
  ttt_msgs__action__GoHome_SendGoal_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ttt_msgs__action__GoHome_SendGoal_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ttt_msgs__action__GoHome_SendGoal_Event * data =
      (ttt_msgs__action__GoHome_SendGoal_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ttt_msgs__action__GoHome_SendGoal_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ttt_msgs__action__GoHome_SendGoal_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ttt_msgs__action__GoHome_SendGoal_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
ttt_msgs__action__GoHome_GetResult_Request__init(ttt_msgs__action__GoHome_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    ttt_msgs__action__GoHome_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
ttt_msgs__action__GoHome_GetResult_Request__fini(ttt_msgs__action__GoHome_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
ttt_msgs__action__GoHome_GetResult_Request__are_equal(const ttt_msgs__action__GoHome_GetResult_Request * lhs, const ttt_msgs__action__GoHome_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
ttt_msgs__action__GoHome_GetResult_Request__copy(
  const ttt_msgs__action__GoHome_GetResult_Request * input,
  ttt_msgs__action__GoHome_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

ttt_msgs__action__GoHome_GetResult_Request *
ttt_msgs__action__GoHome_GetResult_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ttt_msgs__action__GoHome_GetResult_Request * msg = (ttt_msgs__action__GoHome_GetResult_Request *)allocator.allocate(sizeof(ttt_msgs__action__GoHome_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ttt_msgs__action__GoHome_GetResult_Request));
  bool success = ttt_msgs__action__GoHome_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ttt_msgs__action__GoHome_GetResult_Request__destroy(ttt_msgs__action__GoHome_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ttt_msgs__action__GoHome_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ttt_msgs__action__GoHome_GetResult_Request__Sequence__init(ttt_msgs__action__GoHome_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ttt_msgs__action__GoHome_GetResult_Request * data = NULL;

  if (size) {
    data = (ttt_msgs__action__GoHome_GetResult_Request *)allocator.zero_allocate(size, sizeof(ttt_msgs__action__GoHome_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ttt_msgs__action__GoHome_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ttt_msgs__action__GoHome_GetResult_Request__fini(&data[i - 1]);
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
ttt_msgs__action__GoHome_GetResult_Request__Sequence__fini(ttt_msgs__action__GoHome_GetResult_Request__Sequence * array)
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
      ttt_msgs__action__GoHome_GetResult_Request__fini(&array->data[i]);
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

ttt_msgs__action__GoHome_GetResult_Request__Sequence *
ttt_msgs__action__GoHome_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ttt_msgs__action__GoHome_GetResult_Request__Sequence * array = (ttt_msgs__action__GoHome_GetResult_Request__Sequence *)allocator.allocate(sizeof(ttt_msgs__action__GoHome_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ttt_msgs__action__GoHome_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ttt_msgs__action__GoHome_GetResult_Request__Sequence__destroy(ttt_msgs__action__GoHome_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ttt_msgs__action__GoHome_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ttt_msgs__action__GoHome_GetResult_Request__Sequence__are_equal(const ttt_msgs__action__GoHome_GetResult_Request__Sequence * lhs, const ttt_msgs__action__GoHome_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ttt_msgs__action__GoHome_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ttt_msgs__action__GoHome_GetResult_Request__Sequence__copy(
  const ttt_msgs__action__GoHome_GetResult_Request__Sequence * input,
  ttt_msgs__action__GoHome_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ttt_msgs__action__GoHome_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ttt_msgs__action__GoHome_GetResult_Request * data =
      (ttt_msgs__action__GoHome_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ttt_msgs__action__GoHome_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ttt_msgs__action__GoHome_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ttt_msgs__action__GoHome_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "ttt_msgs/action/detail/go_home__functions.h"

bool
ttt_msgs__action__GoHome_GetResult_Response__init(ttt_msgs__action__GoHome_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!ttt_msgs__action__GoHome_Result__init(&msg->result)) {
    ttt_msgs__action__GoHome_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
ttt_msgs__action__GoHome_GetResult_Response__fini(ttt_msgs__action__GoHome_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  ttt_msgs__action__GoHome_Result__fini(&msg->result);
}

bool
ttt_msgs__action__GoHome_GetResult_Response__are_equal(const ttt_msgs__action__GoHome_GetResult_Response * lhs, const ttt_msgs__action__GoHome_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!ttt_msgs__action__GoHome_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
ttt_msgs__action__GoHome_GetResult_Response__copy(
  const ttt_msgs__action__GoHome_GetResult_Response * input,
  ttt_msgs__action__GoHome_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!ttt_msgs__action__GoHome_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

ttt_msgs__action__GoHome_GetResult_Response *
ttt_msgs__action__GoHome_GetResult_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ttt_msgs__action__GoHome_GetResult_Response * msg = (ttt_msgs__action__GoHome_GetResult_Response *)allocator.allocate(sizeof(ttt_msgs__action__GoHome_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ttt_msgs__action__GoHome_GetResult_Response));
  bool success = ttt_msgs__action__GoHome_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ttt_msgs__action__GoHome_GetResult_Response__destroy(ttt_msgs__action__GoHome_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ttt_msgs__action__GoHome_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ttt_msgs__action__GoHome_GetResult_Response__Sequence__init(ttt_msgs__action__GoHome_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ttt_msgs__action__GoHome_GetResult_Response * data = NULL;

  if (size) {
    data = (ttt_msgs__action__GoHome_GetResult_Response *)allocator.zero_allocate(size, sizeof(ttt_msgs__action__GoHome_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ttt_msgs__action__GoHome_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ttt_msgs__action__GoHome_GetResult_Response__fini(&data[i - 1]);
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
ttt_msgs__action__GoHome_GetResult_Response__Sequence__fini(ttt_msgs__action__GoHome_GetResult_Response__Sequence * array)
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
      ttt_msgs__action__GoHome_GetResult_Response__fini(&array->data[i]);
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

ttt_msgs__action__GoHome_GetResult_Response__Sequence *
ttt_msgs__action__GoHome_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ttt_msgs__action__GoHome_GetResult_Response__Sequence * array = (ttt_msgs__action__GoHome_GetResult_Response__Sequence *)allocator.allocate(sizeof(ttt_msgs__action__GoHome_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ttt_msgs__action__GoHome_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ttt_msgs__action__GoHome_GetResult_Response__Sequence__destroy(ttt_msgs__action__GoHome_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ttt_msgs__action__GoHome_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ttt_msgs__action__GoHome_GetResult_Response__Sequence__are_equal(const ttt_msgs__action__GoHome_GetResult_Response__Sequence * lhs, const ttt_msgs__action__GoHome_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ttt_msgs__action__GoHome_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ttt_msgs__action__GoHome_GetResult_Response__Sequence__copy(
  const ttt_msgs__action__GoHome_GetResult_Response__Sequence * input,
  ttt_msgs__action__GoHome_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ttt_msgs__action__GoHome_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ttt_msgs__action__GoHome_GetResult_Response * data =
      (ttt_msgs__action__GoHome_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ttt_msgs__action__GoHome_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ttt_msgs__action__GoHome_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ttt_msgs__action__GoHome_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "ttt_msgs/action/detail/go_home__functions.h"

bool
ttt_msgs__action__GoHome_GetResult_Event__init(ttt_msgs__action__GoHome_GetResult_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    ttt_msgs__action__GoHome_GetResult_Event__fini(msg);
    return false;
  }
  // request
  if (!ttt_msgs__action__GoHome_GetResult_Request__Sequence__init(&msg->request, 0)) {
    ttt_msgs__action__GoHome_GetResult_Event__fini(msg);
    return false;
  }
  // response
  if (!ttt_msgs__action__GoHome_GetResult_Response__Sequence__init(&msg->response, 0)) {
    ttt_msgs__action__GoHome_GetResult_Event__fini(msg);
    return false;
  }
  return true;
}

void
ttt_msgs__action__GoHome_GetResult_Event__fini(ttt_msgs__action__GoHome_GetResult_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  ttt_msgs__action__GoHome_GetResult_Request__Sequence__fini(&msg->request);
  // response
  ttt_msgs__action__GoHome_GetResult_Response__Sequence__fini(&msg->response);
}

bool
ttt_msgs__action__GoHome_GetResult_Event__are_equal(const ttt_msgs__action__GoHome_GetResult_Event * lhs, const ttt_msgs__action__GoHome_GetResult_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!ttt_msgs__action__GoHome_GetResult_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!ttt_msgs__action__GoHome_GetResult_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
ttt_msgs__action__GoHome_GetResult_Event__copy(
  const ttt_msgs__action__GoHome_GetResult_Event * input,
  ttt_msgs__action__GoHome_GetResult_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!ttt_msgs__action__GoHome_GetResult_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!ttt_msgs__action__GoHome_GetResult_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

ttt_msgs__action__GoHome_GetResult_Event *
ttt_msgs__action__GoHome_GetResult_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ttt_msgs__action__GoHome_GetResult_Event * msg = (ttt_msgs__action__GoHome_GetResult_Event *)allocator.allocate(sizeof(ttt_msgs__action__GoHome_GetResult_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ttt_msgs__action__GoHome_GetResult_Event));
  bool success = ttt_msgs__action__GoHome_GetResult_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ttt_msgs__action__GoHome_GetResult_Event__destroy(ttt_msgs__action__GoHome_GetResult_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ttt_msgs__action__GoHome_GetResult_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ttt_msgs__action__GoHome_GetResult_Event__Sequence__init(ttt_msgs__action__GoHome_GetResult_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ttt_msgs__action__GoHome_GetResult_Event * data = NULL;

  if (size) {
    data = (ttt_msgs__action__GoHome_GetResult_Event *)allocator.zero_allocate(size, sizeof(ttt_msgs__action__GoHome_GetResult_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ttt_msgs__action__GoHome_GetResult_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ttt_msgs__action__GoHome_GetResult_Event__fini(&data[i - 1]);
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
ttt_msgs__action__GoHome_GetResult_Event__Sequence__fini(ttt_msgs__action__GoHome_GetResult_Event__Sequence * array)
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
      ttt_msgs__action__GoHome_GetResult_Event__fini(&array->data[i]);
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

ttt_msgs__action__GoHome_GetResult_Event__Sequence *
ttt_msgs__action__GoHome_GetResult_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ttt_msgs__action__GoHome_GetResult_Event__Sequence * array = (ttt_msgs__action__GoHome_GetResult_Event__Sequence *)allocator.allocate(sizeof(ttt_msgs__action__GoHome_GetResult_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ttt_msgs__action__GoHome_GetResult_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ttt_msgs__action__GoHome_GetResult_Event__Sequence__destroy(ttt_msgs__action__GoHome_GetResult_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ttt_msgs__action__GoHome_GetResult_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ttt_msgs__action__GoHome_GetResult_Event__Sequence__are_equal(const ttt_msgs__action__GoHome_GetResult_Event__Sequence * lhs, const ttt_msgs__action__GoHome_GetResult_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ttt_msgs__action__GoHome_GetResult_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ttt_msgs__action__GoHome_GetResult_Event__Sequence__copy(
  const ttt_msgs__action__GoHome_GetResult_Event__Sequence * input,
  ttt_msgs__action__GoHome_GetResult_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ttt_msgs__action__GoHome_GetResult_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ttt_msgs__action__GoHome_GetResult_Event * data =
      (ttt_msgs__action__GoHome_GetResult_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ttt_msgs__action__GoHome_GetResult_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ttt_msgs__action__GoHome_GetResult_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ttt_msgs__action__GoHome_GetResult_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "ttt_msgs/action/detail/go_home__functions.h"

bool
ttt_msgs__action__GoHome_FeedbackMessage__init(ttt_msgs__action__GoHome_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    ttt_msgs__action__GoHome_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!ttt_msgs__action__GoHome_Feedback__init(&msg->feedback)) {
    ttt_msgs__action__GoHome_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
ttt_msgs__action__GoHome_FeedbackMessage__fini(ttt_msgs__action__GoHome_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  ttt_msgs__action__GoHome_Feedback__fini(&msg->feedback);
}

bool
ttt_msgs__action__GoHome_FeedbackMessage__are_equal(const ttt_msgs__action__GoHome_FeedbackMessage * lhs, const ttt_msgs__action__GoHome_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!ttt_msgs__action__GoHome_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
ttt_msgs__action__GoHome_FeedbackMessage__copy(
  const ttt_msgs__action__GoHome_FeedbackMessage * input,
  ttt_msgs__action__GoHome_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!ttt_msgs__action__GoHome_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

ttt_msgs__action__GoHome_FeedbackMessage *
ttt_msgs__action__GoHome_FeedbackMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ttt_msgs__action__GoHome_FeedbackMessage * msg = (ttt_msgs__action__GoHome_FeedbackMessage *)allocator.allocate(sizeof(ttt_msgs__action__GoHome_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ttt_msgs__action__GoHome_FeedbackMessage));
  bool success = ttt_msgs__action__GoHome_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ttt_msgs__action__GoHome_FeedbackMessage__destroy(ttt_msgs__action__GoHome_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ttt_msgs__action__GoHome_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ttt_msgs__action__GoHome_FeedbackMessage__Sequence__init(ttt_msgs__action__GoHome_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ttt_msgs__action__GoHome_FeedbackMessage * data = NULL;

  if (size) {
    data = (ttt_msgs__action__GoHome_FeedbackMessage *)allocator.zero_allocate(size, sizeof(ttt_msgs__action__GoHome_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ttt_msgs__action__GoHome_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ttt_msgs__action__GoHome_FeedbackMessage__fini(&data[i - 1]);
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
ttt_msgs__action__GoHome_FeedbackMessage__Sequence__fini(ttt_msgs__action__GoHome_FeedbackMessage__Sequence * array)
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
      ttt_msgs__action__GoHome_FeedbackMessage__fini(&array->data[i]);
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

ttt_msgs__action__GoHome_FeedbackMessage__Sequence *
ttt_msgs__action__GoHome_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ttt_msgs__action__GoHome_FeedbackMessage__Sequence * array = (ttt_msgs__action__GoHome_FeedbackMessage__Sequence *)allocator.allocate(sizeof(ttt_msgs__action__GoHome_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ttt_msgs__action__GoHome_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ttt_msgs__action__GoHome_FeedbackMessage__Sequence__destroy(ttt_msgs__action__GoHome_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ttt_msgs__action__GoHome_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ttt_msgs__action__GoHome_FeedbackMessage__Sequence__are_equal(const ttt_msgs__action__GoHome_FeedbackMessage__Sequence * lhs, const ttt_msgs__action__GoHome_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ttt_msgs__action__GoHome_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ttt_msgs__action__GoHome_FeedbackMessage__Sequence__copy(
  const ttt_msgs__action__GoHome_FeedbackMessage__Sequence * input,
  ttt_msgs__action__GoHome_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ttt_msgs__action__GoHome_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ttt_msgs__action__GoHome_FeedbackMessage * data =
      (ttt_msgs__action__GoHome_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ttt_msgs__action__GoHome_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ttt_msgs__action__GoHome_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ttt_msgs__action__GoHome_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
