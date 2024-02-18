// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from messages:msg/Pidsignal.idl
// generated code does not contain a copyright notice

#include "messages/msg/detail/pidsignal__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_messages
const rosidl_type_hash_t *
messages__msg__Pidsignal__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5d, 0xc5, 0x00, 0x9b, 0x36, 0x61, 0x9f, 0x47,
      0x2e, 0xc8, 0x2a, 0xc9, 0xb9, 0x8f, 0xc5, 0x25,
      0xa4, 0x04, 0xfe, 0x92, 0x8b, 0x68, 0x7b, 0x3c,
      0x5d, 0x3e, 0xbc, 0x1f, 0xfc, 0x71, 0x5d, 0xba,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char messages__msg__Pidsignal__TYPE_NAME[] = "messages/msg/Pidsignal";

// Define type names, field names, and default values
static char messages__msg__Pidsignal__FIELD_NAME__actuation[] = "actuation";

static rosidl_runtime_c__type_description__Field messages__msg__Pidsignal__FIELDS[] = {
  {
    {messages__msg__Pidsignal__FIELD_NAME__actuation, 9, 9},
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
messages__msg__Pidsignal__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {messages__msg__Pidsignal__TYPE_NAME, 22, 22},
      {messages__msg__Pidsignal__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32  actuation";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
messages__msg__Pidsignal__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {messages__msg__Pidsignal__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 19, 19},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
messages__msg__Pidsignal__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *messages__msg__Pidsignal__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
