// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ev_08_suction_gripper:srv/SuctionCommand.idl
// generated code does not contain a copyright notice

#ifndef EV_08_SUCTION_GRIPPER__SRV__DETAIL__SUCTION_COMMAND__STRUCT_H_
#define EV_08_SUCTION_GRIPPER__SRV__DETAIL__SUCTION_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SuctionCommand in the package ev_08_suction_gripper.
typedef struct ev_08_suction_gripper__srv__SuctionCommand_Request
{
  /// 1=A_ON, 2=A_OFF, 3=B_ON, 4=B_OFF, 5=BOTH_ON
  int8_t command;
} ev_08_suction_gripper__srv__SuctionCommand_Request;

// Struct for a sequence of ev_08_suction_gripper__srv__SuctionCommand_Request.
typedef struct ev_08_suction_gripper__srv__SuctionCommand_Request__Sequence
{
  ev_08_suction_gripper__srv__SuctionCommand_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ev_08_suction_gripper__srv__SuctionCommand_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SuctionCommand in the package ev_08_suction_gripper.
typedef struct ev_08_suction_gripper__srv__SuctionCommand_Response
{
  bool success;
  rosidl_runtime_c__String message;
} ev_08_suction_gripper__srv__SuctionCommand_Response;

// Struct for a sequence of ev_08_suction_gripper__srv__SuctionCommand_Response.
typedef struct ev_08_suction_gripper__srv__SuctionCommand_Response__Sequence
{
  ev_08_suction_gripper__srv__SuctionCommand_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ev_08_suction_gripper__srv__SuctionCommand_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EV_08_SUCTION_GRIPPER__SRV__DETAIL__SUCTION_COMMAND__STRUCT_H_
