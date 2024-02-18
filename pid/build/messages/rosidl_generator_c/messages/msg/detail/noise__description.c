// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from messages:msg/Noise.idl
// generated code does not contain a copyright notice

#include "messages/msg/detail/noise__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_messages
const rosidl_type_hash_t *
messages__msg__Noise__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2e, 0x6d, 0xa2, 0x69, 0x5b, 0x0b, 0xc2, 0x81,
      0x80, 0x40, 0xda, 0x2e, 0x96, 0xca, 0x7a, 0xd1,
      0xcb, 0x0a, 0xf2, 0xc8, 0x65, 0x79, 0xf6, 0x37,
      0xe4, 0x1b, 0x85, 0x8d, 0x71, 0x51, 0x49, 0x47,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char messages__msg__Noise__TYPE_NAME[] = "messages/msg/Noise";

// Define type names, field names, and default values
static char messages__msg__Noise__FIELD_NAME__noise[] = "noise";

static rosidl_runtime_c__type_description__Field messages__msg__Noise__FIELDS[] = {
  {
    {messages__msg__Noise__FIELD_NAME__noise, 5, 5},
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
messages__msg__Noise__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {messages__msg__Noise__TYPE_NAME, 18, 18},
      {messages__msg__Noise__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 noise";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
messages__msg__Noise__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {messages__msg__Noise__TYPE_NAME, 18, 18},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 14, 14},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
messages__msg__Noise__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *messages__msg__Noise__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
