// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ttt_msgs:msg/Move.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ttt_msgs/msg/move.h"


#ifndef TTT_MSGS__MSG__DETAIL__MOVE__STRUCT_H_
#define TTT_MSGS__MSG__DETAIL__MOVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Move in the package ttt_msgs.
/**
  * cell index 0..8 (top-left to bottom-right)
 */
typedef struct ttt_msgs__msg__Move
{
  uint8_t cell_index;
  /// 1 = X, 2 = O
  int8_t player;
} ttt_msgs__msg__Move;

// Struct for a sequence of ttt_msgs__msg__Move.
typedef struct ttt_msgs__msg__Move__Sequence
{
  ttt_msgs__msg__Move * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ttt_msgs__msg__Move__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TTT_MSGS__MSG__DETAIL__MOVE__STRUCT_H_
