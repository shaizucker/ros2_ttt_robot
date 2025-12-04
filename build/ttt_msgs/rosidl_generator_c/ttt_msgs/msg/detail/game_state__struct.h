// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ttt_msgs:msg/GameState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ttt_msgs/msg/game_state.h"


#ifndef TTT_MSGS__MSG__DETAIL__GAME_STATE__STRUCT_H_
#define TTT_MSGS__MSG__DETAIL__GAME_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/GameState in the package ttt_msgs.
/**
  * 0 = empty, 1 = X, 2 = O
 */
typedef struct ttt_msgs__msg__GameState
{
  int8_t cells[9];
  /// 1 = X, 2 = O
  int8_t current_player;
  /// 0 = ongoing, 1 = X_wins, 2 = O_wins, 3 = draw
  int8_t status;
} ttt_msgs__msg__GameState;

// Struct for a sequence of ttt_msgs__msg__GameState.
typedef struct ttt_msgs__msg__GameState__Sequence
{
  ttt_msgs__msg__GameState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ttt_msgs__msg__GameState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TTT_MSGS__MSG__DETAIL__GAME_STATE__STRUCT_H_
