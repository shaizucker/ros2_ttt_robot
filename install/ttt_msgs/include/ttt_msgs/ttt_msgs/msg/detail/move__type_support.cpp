// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ttt_msgs:msg/Move.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ttt_msgs/msg/detail/move__functions.h"
#include "ttt_msgs/msg/detail/move__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ttt_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Move_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ttt_msgs::msg::Move(_init);
}

void Move_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ttt_msgs::msg::Move *>(message_memory);
  typed_message->~Move();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Move_message_member_array[2] = {
  {
    "cell_index",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ttt_msgs::msg::Move, cell_index),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "player",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ttt_msgs::msg::Move, player),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Move_message_members = {
  "ttt_msgs::msg",  // message namespace
  "Move",  // message name
  2,  // number of fields
  sizeof(ttt_msgs::msg::Move),
  false,  // has_any_key_member_
  Move_message_member_array,  // message members
  Move_init_function,  // function to initialize message memory (memory has to be allocated)
  Move_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Move_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Move_message_members,
  get_message_typesupport_handle_function,
  &ttt_msgs__msg__Move__get_type_hash,
  &ttt_msgs__msg__Move__get_type_description,
  &ttt_msgs__msg__Move__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ttt_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ttt_msgs::msg::Move>()
{
  return &::ttt_msgs::msg::rosidl_typesupport_introspection_cpp::Move_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ttt_msgs, msg, Move)() {
  return &::ttt_msgs::msg::rosidl_typesupport_introspection_cpp::Move_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
