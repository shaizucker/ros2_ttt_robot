// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ttt_msgs:msg/Move.idl
// generated code does not contain a copyright notice
#include "ttt_msgs/msg/detail/move__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ttt_msgs/msg/detail/move__functions.h"
#include "ttt_msgs/msg/detail/move__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: cell_index
  cdr << ros_message.cell_index;

  // Member: player
  cdr << ros_message.player;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ttt_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ttt_msgs::msg::Move & ros_message)
{
  // Member: cell_index
  cdr >> ros_message.cell_index;

  // Member: player
  cdr >> ros_message.player;

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ttt_msgs
get_serialized_size(
  const ttt_msgs::msg::Move & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: cell_index
  {
    size_t item_size = sizeof(ros_message.cell_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: player
  {
    size_t item_size = sizeof(ros_message.player);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ttt_msgs
max_serialized_size_Move(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: cell_index
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: player
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ttt_msgs::msg::Move;
    is_plain =
      (
      offsetof(DataType, player) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ttt_msgs
cdr_serialize_key(
  const ttt_msgs::msg::Move & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: cell_index
  cdr << ros_message.cell_index;

  // Member: player
  cdr << ros_message.player;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ttt_msgs
get_serialized_size_key(
  const ttt_msgs::msg::Move & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: cell_index
  {
    size_t item_size = sizeof(ros_message.cell_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: player
  {
    size_t item_size = sizeof(ros_message.player);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ttt_msgs
max_serialized_size_key_Move(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: cell_index
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: player
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ttt_msgs::msg::Move;
    is_plain =
      (
      offsetof(DataType, player) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _Move__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ttt_msgs::msg::Move *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Move__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ttt_msgs::msg::Move *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Move__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ttt_msgs::msg::Move *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Move__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Move(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Move__callbacks = {
  "ttt_msgs::msg",
  "Move",
  _Move__cdr_serialize,
  _Move__cdr_deserialize,
  _Move__get_serialized_size,
  _Move__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Move__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Move__callbacks,
  get_message_typesupport_handle_function,
  &ttt_msgs__msg__Move__get_type_hash,
  &ttt_msgs__msg__Move__get_type_description,
  &ttt_msgs__msg__Move__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ttt_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ttt_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<ttt_msgs::msg::Move>()
{
  return &ttt_msgs::msg::typesupport_fastrtps_cpp::_Move__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ttt_msgs, msg, Move)() {
  return &ttt_msgs::msg::typesupport_fastrtps_cpp::_Move__handle;
}

#ifdef __cplusplus
}
#endif
