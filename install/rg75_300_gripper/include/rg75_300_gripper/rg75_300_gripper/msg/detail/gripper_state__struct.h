// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rg75_300_gripper:msg/GripperState.idl
// generated code does not contain a copyright notice

#ifndef RG75_300_GRIPPER__MSG__DETAIL__GRIPPER_STATE__STRUCT_H_
#define RG75_300_GRIPPER__MSG__DETAIL__GRIPPER_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/GripperState in the package rg75_300_gripper.
typedef struct rg75_300_gripper__msg__GripperState
{
  bool is_open;
  float position;
  float force;
  int8_t activated;
} rg75_300_gripper__msg__GripperState;

// Struct for a sequence of rg75_300_gripper__msg__GripperState.
typedef struct rg75_300_gripper__msg__GripperState__Sequence
{
  rg75_300_gripper__msg__GripperState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rg75_300_gripper__msg__GripperState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RG75_300_GRIPPER__MSG__DETAIL__GRIPPER_STATE__STRUCT_H_
