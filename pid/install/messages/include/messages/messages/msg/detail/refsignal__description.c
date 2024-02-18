// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from messages:msg/Refsignal.idl
// generated code does not contain a copyright notice

#include "messages/msg/detail/refsignal__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_messages
const rosidl_type_hash_t *
messages__msg__Refsignal__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x94, 0xd1, 0xd2, 0x10, 0xbd, 0xec, 0xd3, 0x7b,
      0x79, 0xe2, 0xd0, 0xbb, 0x20, 0x03, 0x7d, 0x21,
      0x40, 0xab, 0x63, 0x68, 0x89, 0x6e, 0x55, 0xa9,
      0x74, 0xe4, 0x2a, 0xbb, 0xe9, 0x82, 0x49, 0x07,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char messages__msg__Refsignal__TYPE_NAME[] = "messages/msg/Refsignal";

// Define type names, field names, and default values
static char messages__msg__Refsignal__FIELD_NAME__setpoint[] = "setpoint";

static rosidl_runtime_c__type_description__Field messages__msg__Refsignal__FIELDS[] = {
  {
    {messages__msg__Refsignal__FIELD_NAME__setpoint, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
messages__msg__Refsignal__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {messages__msg__Refsignal__TYPE_NAME, 22, 22},
      {messages__msg__Refsignal__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64 setpoint";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
messages__msg__Refsignal__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {messages__msg__Refsignal__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 15, 15},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
messages__msg__Refsignal__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *messages__msg__Refsignal__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
