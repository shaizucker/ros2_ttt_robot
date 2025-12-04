// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ttt_msgs:msg/Move.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ttt_msgs/msg/detail/move__rosidl_typesupport_introspection_c.h"
#include "ttt_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ttt_msgs/msg/detail/move__functions.h"
#include "ttt_msgs/msg/detail/move__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ttt_msgs__msg__Move__rosidl_typesupport_introspection_c__Move_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ttt_msgs__msg__Move__init(message_memory);
}

void ttt_msgs__msg__Move__rosidl_typesupport_introspection_c__Move_fini_function(void * message_memory)
{
  ttt_msgs__msg__Move__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ttt_msgs__msg__Move__rosidl_typesupport_introspection_c__Move_message_member_array[2] = {
  {
    "cell_index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ttt_msgs__msg__Move, cell_index),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "player",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ttt_msgs__msg__Move, player),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ttt_msgs__msg__Move__rosidl_typesupport_introspection_c__Move_message_members = {
  "ttt_msgs__msg",  // message namespace
  "Move",  // message name
  2,  // number of fields
  sizeof(ttt_msgs__msg__Move),
  false,  // has_any_key_member_
  ttt_msgs__msg__Move__rosidl_typesupport_introspection_c__Move_message_member_array,  // message members
  ttt_msgs__msg__Move__rosidl_typesupport_introspection_c__Move_init_function,  // function to initialize message memory (memory has to be allocated)
  ttt_msgs__msg__Move__rosidl_typesupport_introspection_c__Move_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ttt_msgs__msg__Move__rosidl_typesupport_introspection_c__Move_message_type_support_handle = {
  0,
  &ttt_msgs__msg__Move__rosidl_typesupport_introspection_c__Move_message_members,
  get_message_typesupport_handle_function,
  &ttt_msgs__msg__Move__get_type_hash,
  &ttt_msgs__msg__Move__get_type_description,
  &ttt_msgs__msg__Move__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ttt_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ttt_msgs, msg, Move)() {
  if (!ttt_msgs__msg__Move__rosidl_typesupport_introspection_c__Move_message_type_support_handle.typesupport_identifier) {
    ttt_msgs__msg__Move__rosidl_typesupport_introspection_c__Move_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ttt_msgs__msg__Move__rosidl_typesupport_introspection_c__Move_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
