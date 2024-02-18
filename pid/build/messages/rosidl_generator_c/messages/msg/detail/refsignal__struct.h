// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from messages:msg/Refsignal.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES__MSG__DETAIL__REFSIGNAL__STRUCT_H_
#define MESSAGES__MSG__DETAIL__REFSIGNAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Refsignal in the package messages.
typedef struct messages__msg__Refsignal
{
  int64_t setpoint;
} messages__msg__Refsignal;

// Struct for a sequence of messages__msg__Refsignal.
typedef struct messages__msg__Refsignal__Sequence
{
  messages__msg__Refsignal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} messages__msg__Refsignal__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MESSAGES__MSG__DETAIL__REFSIGNAL__STRUCT_H_
