// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from messages:msg/Systemsignal.idl
// generated code does not contain a copyright notice

#include "messages/msg/detail/systemsignal__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_messages
const rosidl_type_hash_t *
messages__msg__Systemsignal__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5c, 0xb5, 0xc9, 0xeb, 0x19, 0x73, 0x61, 0x71,
      0xae, 0x8a, 0xfe, 0xac, 0xf7, 0x7c, 0xec, 0xf7,
      0xfe, 0xdb, 0x1c, 0xf5, 0x77, 0xd3, 0xa3, 0x46,
      0x37, 0x81, 0x36, 0xf6, 0x10, 0x4f, 0xb1, 0xe5,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char messages__msg__Systemsignal__TYPE_NAME[] = "messages/msg/Systemsignal";

// Define type names, field names, and default values
static char messages__msg__Systemsignal__FIELD_NAME__position[] = "position";
static char messages__msg__Systemsignal__FIELD_NAME__velocity[] = "velocity";

static rosidl_runtime_c__type_description__Field messages__msg__Systemsignal__FIELDS[] = {
  {
    {messages__msg__Systemsignal__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {messages__msg__Systemsignal__FIELD_NAME__velocity, 8, 8},
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
messages__msg__Systemsignal__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {messages__msg__Systemsignal__TYPE_NAME, 25, 25},
      {messages__msg__Systemsignal__FIELDS, 2, 2},
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
messages__msg__Systemsignal__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {messages__msg__Systemsignal__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 34, 34},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
messages__msg__Systemsignal__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *messages__msg__Systemsignal__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
