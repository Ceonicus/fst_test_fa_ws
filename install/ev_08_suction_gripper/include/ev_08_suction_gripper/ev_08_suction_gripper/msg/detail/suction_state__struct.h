// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ev_08_suction_gripper:msg/SuctionState.idl
// generated code does not contain a copyright notice

#ifndef EV_08_SUCTION_GRIPPER__MSG__DETAIL__SUCTION_STATE__STRUCT_H_
#define EV_08_SUCTION_GRIPPER__MSG__DETAIL__SUCTION_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SuctionState in the package ev_08_suction_gripper.
typedef struct ev_08_suction_gripper__msg__SuctionState
{
  bool suction_a_on;
  bool suction_b_on;
  /// optional, 0 if no sensor
  float force_a;
  /// optional, 0 if no sensor
  float force_b;
  /// "ok", "error", etc.
  rosidl_runtime_c__String status;
} ev_08_suction_gripper__msg__SuctionState;

// Struct for a sequence of ev_08_suction_gripper__msg__SuctionState.
typedef struct ev_08_suction_gripper__msg__SuctionState__Sequence
{
  ev_08_suction_gripper__msg__SuctionState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ev_08_suction_gripper__msg__SuctionState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EV_08_SUCTION_GRIPPER__MSG__DETAIL__SUCTION_STATE__STRUCT_H_
