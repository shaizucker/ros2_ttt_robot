// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from ttt_msgs:msg/Move.idl
// generated code does not contain a copyright notice

#ifndef TTT_MSGS__MSG__DETAIL__MOVE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define TTT_MSGS__MSG__DETAIL__MOVE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "ttt_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "ttt_msgs/msg/detail/move__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace ttt_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ttt_msgs
cdr_serialize(
  const ttt_msgs::msg::Move & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ttt_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ttt_msgs::msg::Move & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ttt_msgs
get_serialized_size(
  const ttt_msgs::msg::Move & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ttt_msgs
max_serialized_size_Move(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ttt_msgs
cdr_serialize_key(
  const ttt_msgs::msg::Move & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ttt_msgs
get_serialized_size_key(
  const ttt_msgs::msg::Move & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ttt_msgs
max_serialized_size_key_Move(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ttt_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ttt_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ttt_msgs, msg, Move)();

#ifdef __cplusplus
}
#endif

#endif  // TTT_MSGS__MSG__DETAIL__MOVE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
