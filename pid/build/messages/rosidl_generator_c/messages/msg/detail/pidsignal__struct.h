// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from messages:msg/Pidsignal.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES__MSG__DETAIL__PIDSIGNAL__STRUCT_H_
#define MESSAGES__MSG__DETAIL__PIDSIGNAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Pidsignal in the package messages.
typedef struct messages__msg__Pidsignal
{
  float actuation;
} messages__msg__Pidsignal;

// Struct for a sequence of messages__msg__Pidsignal.
typedef struct messages__msg__Pidsignal__Sequence
{
  messages__msg__Pidsignal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} messages__msg__Pidsignal__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MESSAGES__MSG__DETAIL__PIDSIGNAL__STRUCT_H_
