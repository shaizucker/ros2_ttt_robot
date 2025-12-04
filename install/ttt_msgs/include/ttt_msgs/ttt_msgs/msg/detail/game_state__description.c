// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ttt_msgs:msg/GameState.idl
// generated code does not contain a copyright notice

#include "ttt_msgs/msg/detail/game_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ttt_msgs
const rosidl_type_hash_t *
ttt_msgs__msg__GameState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdc, 0x6f, 0xde, 0xcf, 0xf1, 0x02, 0xb6, 0x11,
      0x0f, 0x90, 0xf0, 0x92, 0xc1, 0x91, 0x47, 0xfa,
      0x7d, 0x8a, 0xb2, 0x18, 0x74, 0x93, 0x95, 0x5a,
      0x0b, 0xd2, 0xd2, 0x3c, 0x9b, 0x96, 0x07, 0xee,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ttt_msgs__msg__GameState__TYPE_NAME[] = "ttt_msgs/msg/GameState";

// Define type names, field names, and default values
static char ttt_msgs__msg__GameState__FIELD_NAME__cells[] = "cells";
static char ttt_msgs__msg__GameState__FIELD_NAME__current_player[] = "current_player";
static char ttt_msgs__msg__GameState__FIELD_NAME__status[] = "status";

static rosidl_runtime_c__type_description__Field ttt_msgs__msg__GameState__FIELDS[] = {
  {
    {ttt_msgs__msg__GameState__FIELD_NAME__cells, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8_ARRAY,
      9,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ttt_msgs__msg__GameState__FIELD_NAME__current_player, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ttt_msgs__msg__GameState__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ttt_msgs__msg__GameState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ttt_msgs__msg__GameState__TYPE_NAME, 22, 22},
      {ttt_msgs__msg__GameState__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# 0 = empty, 1 = X, 2 = O\n"
  "int8[9] cells\n"
  "\n"
  "# 1 = X, 2 = O\n"
  "int8 current_player\n"
  "\n"
  "# 0 = ongoing, 1 = X_wins, 2 = O_wins, 3 = draw\n"
  "int8 status\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ttt_msgs__msg__GameState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ttt_msgs__msg__GameState__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 138, 138},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ttt_msgs__msg__GameState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ttt_msgs__msg__GameState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
