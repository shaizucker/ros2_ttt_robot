// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ttt_msgs:msg/GameState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ttt_msgs/msg/detail/game_state__rosidl_typesupport_introspection_c.h"
#include "ttt_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ttt_msgs/msg/detail/game_state__functions.h"
#include "ttt_msgs/msg/detail/game_state__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ttt_msgs__msg__GameState__rosidl_typesupport_introspection_c__GameState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ttt_msgs__msg__GameState__init(message_memory);
}

void ttt_msgs__msg__GameState__rosidl_typesupport_introspection_c__GameState_fini_function(void * message_memory)
{
  ttt_msgs__msg__GameState__fini(message_memory);
}

size_t ttt_msgs__msg__GameState__rosidl_typesupport_introspection_c__size_function__GameState__cells(
  const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * ttt_msgs__msg__GameState__rosidl_typesupport_introspection_c__get_const_function__GameState__cells(
  const void * untyped_member, size_t index)
{
  const int8_t * member =
    (const int8_t *)(untyped_member);
  return &member[index];
}

void * ttt_msgs__msg__GameState__rosidl_typesupport_introspection_c__get_function__GameState__cells(
  void * untyped_member, size_t index)
{
  int8_t * member =
    (int8_t *)(untyped_member);
  return &member[index];
}

void ttt_msgs__msg__GameState__rosidl_typesupport_introspection_c__fetch_function__GameState__cells(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int8_t * item =
    ((const int8_t *)
    ttt_msgs__msg__GameState__rosidl_typesupport_introspection_c__get_const_function__GameState__cells(untyped_member, index));
  int8_t * value =
    (int8_t *)(untyped_value);
  *value = *item;
}

void ttt_msgs__msg__GameState__rosidl_typesupport_introspection_c__assign_function__GameState__cells(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int8_t * item =
    ((int8_t *)
    ttt_msgs__msg__GameState__rosidl_typesupport_introspection_c__get_function__GameState__cells(untyped_member, index));
  const int8_t * value =
    (const int8_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember ttt_msgs__msg__GameState__rosidl_typesupport_introspection_c__GameState_message_member_array[3] = {
  {
    "cells",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(ttt_msgs__msg__GameState, cells),  // bytes offset in struct
    NULL,  // default value
    ttt_msgs__msg__GameState__rosidl_typesupport_introspection_c__size_function__GameState__cells,  // size() function pointer
    ttt_msgs__msg__GameState__rosidl_typesupport_introspection_c__get_const_function__GameState__cells,  // get_const(index) function pointer
    ttt_msgs__msg__GameState__rosidl_typesupport_introspection_c__get_function__GameState__cells,  // get(index) function pointer
    ttt_msgs__msg__GameState__rosidl_typesupport_introspection_c__fetch_function__GameState__cells,  // fetch(index, &value) function pointer
    ttt_msgs__msg__GameState__rosidl_typesupport_introspection_c__assign_function__GameState__cells,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_player",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ttt_msgs__msg__GameState, current_player),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ttt_msgs__msg__GameState, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ttt_msgs__msg__GameState__rosidl_typesupport_introspection_c__GameState_message_members = {
  "ttt_msgs__msg",  // message namespace
  "GameState",  // message name
  3,  // number of fields
  sizeof(ttt_msgs__msg__GameState),
  false,  // has_any_key_member_
  ttt_msgs__msg__GameState__rosidl_typesupport_introspection_c__GameState_message_member_array,  // message members
  ttt_msgs__msg__GameState__rosidl_typesupport_introspection_c__GameState_init_function,  // function to initialize message memory (memory has to be allocated)
  ttt_msgs__msg__GameState__rosidl_typesupport_introspection_c__GameState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ttt_msgs__msg__GameState__rosidl_typesupport_introspection_c__GameState_message_type_support_handle = {
  0,
  &ttt_msgs__msg__GameState__rosidl_typesupport_introspection_c__GameState_message_members,
  get_message_typesupport_handle_function,
  &ttt_msgs__msg__GameState__get_type_hash,
  &ttt_msgs__msg__GameState__get_type_description,
  &ttt_msgs__msg__GameState__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ttt_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ttt_msgs, msg, GameState)() {
  if (!ttt_msgs__msg__GameState__rosidl_typesupport_introspection_c__GameState_message_type_support_handle.typesupport_identifier) {
    ttt_msgs__msg__GameState__rosidl_typesupport_introspection_c__GameState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ttt_msgs__msg__GameState__rosidl_typesupport_introspection_c__GameState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
