// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ev_08_suction_gripper:msg/SuctionState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ev_08_suction_gripper/msg/detail/suction_state__rosidl_typesupport_introspection_c.h"
#include "ev_08_suction_gripper/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ev_08_suction_gripper/msg/detail/suction_state__functions.h"
#include "ev_08_suction_gripper/msg/detail/suction_state__struct.h"


// Include directives for member types
// Member `status`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ev_08_suction_gripper__msg__SuctionState__rosidl_typesupport_introspection_c__SuctionState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ev_08_suction_gripper__msg__SuctionState__init(message_memory);
}

void ev_08_suction_gripper__msg__SuctionState__rosidl_typesupport_introspection_c__SuctionState_fini_function(void * message_memory)
{
  ev_08_suction_gripper__msg__SuctionState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ev_08_suction_gripper__msg__SuctionState__rosidl_typesupport_introspection_c__SuctionState_message_member_array[5] = {
  {
    "suction_a_on",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ev_08_suction_gripper__msg__SuctionState, suction_a_on),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "suction_b_on",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ev_08_suction_gripper__msg__SuctionState, suction_b_on),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "force_a",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ev_08_suction_gripper__msg__SuctionState, force_a),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "force_b",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ev_08_suction_gripper__msg__SuctionState, force_b),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ev_08_suction_gripper__msg__SuctionState, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ev_08_suction_gripper__msg__SuctionState__rosidl_typesupport_introspection_c__SuctionState_message_members = {
  "ev_08_suction_gripper__msg",  // message namespace
  "SuctionState",  // message name
  5,  // number of fields
  sizeof(ev_08_suction_gripper__msg__SuctionState),
  ev_08_suction_gripper__msg__SuctionState__rosidl_typesupport_introspection_c__SuctionState_message_member_array,  // message members
  ev_08_suction_gripper__msg__SuctionState__rosidl_typesupport_introspection_c__SuctionState_init_function,  // function to initialize message memory (memory has to be allocated)
  ev_08_suction_gripper__msg__SuctionState__rosidl_typesupport_introspection_c__SuctionState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ev_08_suction_gripper__msg__SuctionState__rosidl_typesupport_introspection_c__SuctionState_message_type_support_handle = {
  0,
  &ev_08_suction_gripper__msg__SuctionState__rosidl_typesupport_introspection_c__SuctionState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ev_08_suction_gripper
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ev_08_suction_gripper, msg, SuctionState)() {
  if (!ev_08_suction_gripper__msg__SuctionState__rosidl_typesupport_introspection_c__SuctionState_message_type_support_handle.typesupport_identifier) {
    ev_08_suction_gripper__msg__SuctionState__rosidl_typesupport_introspection_c__SuctionState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ev_08_suction_gripper__msg__SuctionState__rosidl_typesupport_introspection_c__SuctionState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
