// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ttt_msgs:msg/Move.idl
// generated code does not contain a copyright notice

#include "ttt_msgs/msg/detail/move__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ttt_msgs
const rosidl_type_hash_t *
ttt_msgs__msg__Move__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2f, 0x8c, 0xf0, 0xbf, 0x4b, 0x46, 0xed, 0xa6,
      0xc1, 0x4c, 0xd9, 0x9e, 0x0e, 0xe5, 0xe0, 0x56,
      0x86, 0x53, 0x5d, 0x45, 0xd6, 0xb8, 0x12, 0x99,
      0xf8, 0x74, 0xab, 0x52, 0xd9, 0x65, 0x00, 0x9b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ttt_msgs__msg__Move__TYPE_NAME[] = "ttt_msgs/msg/Move";

// Define type names, field names, and default values
static char ttt_msgs__msg__Move__FIELD_NAME__cell_index[] = "cell_index";
static char ttt_msgs__msg__Move__FIELD_NAME__player[] = "player";

static rosidl_runtime_c__type_description__Field ttt_msgs__msg__Move__FIELDS[] = {
  {
    {ttt_msgs__msg__Move__FIELD_NAME__cell_index, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ttt_msgs__msg__Move__FIELD_NAME__player, 6, 6},
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
ttt_msgs__msg__Move__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ttt_msgs__msg__Move__TYPE_NAME, 17, 17},
      {ttt_msgs__msg__Move__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# cell index 0..8 (top-left to bottom-right)\n"
  "uint8 cell_index\n"
  "\n"
  "# 1 = X, 2 = O\n"
  "int8 player\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ttt_msgs__msg__Move__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ttt_msgs__msg__Move__TYPE_NAME, 17, 17},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 91, 91},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ttt_msgs__msg__Move__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ttt_msgs__msg__Move__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
