// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from messages:msg/Filter.idl
// generated code does not contain a copyright notice

#include "messages/msg/detail/filter__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_messages
const rosidl_type_hash_t *
messages__msg__Filter__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x73, 0xf5, 0xad, 0x98, 0x43, 0x31, 0x71, 0xf6,
      0x11, 0xee, 0xf9, 0x7e, 0xaa, 0x09, 0xf9, 0xed,
      0x9b, 0xc6, 0x44, 0x10, 0xd0, 0x49, 0x9e, 0xdd,
      0xe6, 0xe7, 0x26, 0x19, 0xce, 0xe1, 0x3e, 0x8e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char messages__msg__Filter__TYPE_NAME[] = "messages/msg/Filter";

// Define type names, field names, and default values
static char messages__msg__Filter__FIELD_NAME__position[] = "position";
static char messages__msg__Filter__FIELD_NAME__velocity[] = "velocity";

static rosidl_runtime_c__type_description__Field messages__msg__Filter__FIELDS[] = {
  {
    {messages__msg__Filter__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {messages__msg__Filter__FIELD_NAME__velocity, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
messages__msg__Filter__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {messages__msg__Filter__TYPE_NAME, 19, 19},
      {messages__msg__Filter__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 position\n"
  "float32 velocity";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
messages__msg__Filter__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {messages__msg__Filter__TYPE_NAME, 19, 19},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 34, 34},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
messages__msg__Filter__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *messages__msg__Filter__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
