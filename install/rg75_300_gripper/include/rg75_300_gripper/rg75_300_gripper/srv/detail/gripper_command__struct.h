// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rg75_300_gripper:srv/GripperCommand.idl
// generated code does not contain a copyright notice

#ifndef RG75_300_GRIPPER__SRV__DETAIL__GRIPPER_COMMAND__STRUCT_H_
#define RG75_300_GRIPPER__SRV__DETAIL__GRIPPER_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GripperCommand in the package rg75_300_gripper.
typedef struct rg75_300_gripper__srv__GripperCommand_Request
{
  float position;
  float force;
  int8_t activated;
} rg75_300_gripper__srv__GripperCommand_Request;

// Struct for a sequence of rg75_300_gripper__srv__GripperCommand_Request.
typedef struct rg75_300_gripper__srv__GripperCommand_Request__Sequence
{
  rg75_300_gripper__srv__GripperCommand_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rg75_300_gripper__srv__GripperCommand_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GripperCommand in the package rg75_300_gripper.
typedef struct rg75_300_gripper__srv__GripperCommand_Response
{
  bool success;
  rosidl_runtime_c__String message;
} rg75_300_gripper__srv__GripperCommand_Response;

// Struct for a sequence of rg75_300_gripper__srv__GripperCommand_Response.
typedef struct rg75_300_gripper__srv__GripperCommand_Response__Sequence
{
  rg75_300_gripper__srv__GripperCommand_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rg75_300_gripper__srv__GripperCommand_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RG75_300_GRIPPER__SRV__DETAIL__GRIPPER_COMMAND__STRUCT_H_
