// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from messages:msg/Filter.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES__MSG__DETAIL__FILTER__STRUCT_H_
#define MESSAGES__MSG__DETAIL__FILTER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Filter in the package messages.
typedef struct messages__msg__Filter
{
  float position;
  float velocity;
} messages__msg__Filter;

// Struct for a sequence of messages__msg__Filter.
typedef struct messages__msg__Filter__Sequence
{
  messages__msg__Filter * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} messages__msg__Filter__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MESSAGES__MSG__DETAIL__FILTER__STRUCT_H_
