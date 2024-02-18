// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from messages:msg/Noise.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES__MSG__DETAIL__NOISE__STRUCT_H_
#define MESSAGES__MSG__DETAIL__NOISE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Noise in the package messages.
typedef struct messages__msg__Noise
{
  float noise;
} messages__msg__Noise;

// Struct for a sequence of messages__msg__Noise.
typedef struct messages__msg__Noise__Sequence
{
  messages__msg__Noise * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} messages__msg__Noise__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MESSAGES__MSG__DETAIL__NOISE__STRUCT_H_
