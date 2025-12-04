// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ttt_msgs:msg/Move.idl
// generated code does not contain a copyright notice
#include "ttt_msgs/msg/detail/move__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ttt_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ttt_msgs/msg/detail/move__struct.h"
#include "ttt_msgs/msg/detail/move__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Move__ros_msg_type = ttt_msgs__msg__Move;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ttt_msgs
bool cdr_serialize_ttt_msgs__msg__Move(
  const ttt_msgs__msg__Move * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: cell_index
  {
    cdr << ros_message->cell_index;
  }

  // Field name: player
  {
    cdr << ros_message->player;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ttt_msgs
bool cdr_deserialize_ttt_msgs__msg__Move(
  eprosima::fastcdr::Cdr & cdr,
  ttt_msgs__msg__Move * ros_message)
{
  // Field name: cell_index
  {
    cdr >> ros_message->cell_index;
  }

  // Field name: player
  {
    cdr >> ros_message->player;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ttt_msgs
size_t get_serialized_size_ttt_msgs__msg__Move(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Move__ros_msg_type * ros_message = static_cast<const _Move__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: cell_index
  {
    size_t item_size = sizeof(ros_message->cell_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: player
  {
    size_t item_size = sizeof(ros_message->player);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ttt_msgs
size_t max_serialized_size_ttt_msgs__msg__Move(
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

  // Field name: cell_index
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: player
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
    using DataType = ttt_msgs__msg__Move;
    is_plain =
      (
      offsetof(DataType, player) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ttt_msgs
bool cdr_serialize_key_ttt_msgs__msg__Move(
  const ttt_msgs__msg__Move * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: cell_index
  {
    cdr << ros_message->cell_index;
  }

  // Field name: player
  {
    cdr << ros_message->player;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ttt_msgs
size_t get_serialized_size_key_ttt_msgs__msg__Move(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Move__ros_msg_type * ros_message = static_cast<const _Move__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: cell_index
  {
    size_t item_size = sizeof(ros_message->cell_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: player
  {
    size_t item_size = sizeof(ros_message->player);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ttt_msgs
size_t max_serialized_size_key_ttt_msgs__msg__Move(
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
  // Field name: cell_index
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: player
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
    using DataType = ttt_msgs__msg__Move;
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
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const ttt_msgs__msg__Move * ros_message = static_cast<const ttt_msgs__msg__Move *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_ttt_msgs__msg__Move(ros_message, cdr);
}

static bool _Move__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  ttt_msgs__msg__Move * ros_message = static_cast<ttt_msgs__msg__Move *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_ttt_msgs__msg__Move(cdr, ros_message);
}

static uint32_t _Move__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ttt_msgs__msg__Move(
      untyped_ros_message, 0));
}

static size_t _Move__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ttt_msgs__msg__Move(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Move = {
  "ttt_msgs::msg",
  "Move",
  _Move__cdr_serialize,
  _Move__cdr_deserialize,
  _Move__get_serialized_size,
  _Move__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Move__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Move,
  get_message_typesupport_handle_function,
  &ttt_msgs__msg__Move__get_type_hash,
  &ttt_msgs__msg__Move__get_type_description,
  &ttt_msgs__msg__Move__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ttt_msgs, msg, Move)() {
  return &_Move__type_support;
}

#if defined(__cplusplus)
}
#endif
