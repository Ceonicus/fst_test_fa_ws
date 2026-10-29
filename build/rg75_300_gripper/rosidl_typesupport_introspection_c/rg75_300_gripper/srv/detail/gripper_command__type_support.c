// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rg75_300_gripper:srv/GripperCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rg75_300_gripper/srv/detail/gripper_command__rosidl_typesupport_introspection_c.h"
#include "rg75_300_gripper/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rg75_300_gripper/srv/detail/gripper_command__functions.h"
#include "rg75_300_gripper/srv/detail/gripper_command__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void rg75_300_gripper__srv__GripperCommand_Request__rosidl_typesupport_introspection_c__GripperCommand_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rg75_300_gripper__srv__GripperCommand_Request__init(message_memory);
}

void rg75_300_gripper__srv__GripperCommand_Request__rosidl_typesupport_introspection_c__GripperCommand_Request_fini_function(void * message_memory)
{
  rg75_300_gripper__srv__GripperCommand_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rg75_300_gripper__srv__GripperCommand_Request__rosidl_typesupport_introspection_c__GripperCommand_Request_message_member_array[3] = {
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rg75_300_gripper__srv__GripperCommand_Request, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "force",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rg75_300_gripper__srv__GripperCommand_Request, force),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "activated",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rg75_300_gripper__srv__GripperCommand_Request, activated),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rg75_300_gripper__srv__GripperCommand_Request__rosidl_typesupport_introspection_c__GripperCommand_Request_message_members = {
  "rg75_300_gripper__srv",  // message namespace
  "GripperCommand_Request",  // message name
  3,  // number of fields
  sizeof(rg75_300_gripper__srv__GripperCommand_Request),
  rg75_300_gripper__srv__GripperCommand_Request__rosidl_typesupport_introspection_c__GripperCommand_Request_message_member_array,  // message members
  rg75_300_gripper__srv__GripperCommand_Request__rosidl_typesupport_introspection_c__GripperCommand_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  rg75_300_gripper__srv__GripperCommand_Request__rosidl_typesupport_introspection_c__GripperCommand_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rg75_300_gripper__srv__GripperCommand_Request__rosidl_typesupport_introspection_c__GripperCommand_Request_message_type_support_handle = {
  0,
  &rg75_300_gripper__srv__GripperCommand_Request__rosidl_typesupport_introspection_c__GripperCommand_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rg75_300_gripper
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rg75_300_gripper, srv, GripperCommand_Request)() {
  if (!rg75_300_gripper__srv__GripperCommand_Request__rosidl_typesupport_introspection_c__GripperCommand_Request_message_type_support_handle.typesupport_identifier) {
    rg75_300_gripper__srv__GripperCommand_Request__rosidl_typesupport_introspection_c__GripperCommand_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rg75_300_gripper__srv__GripperCommand_Request__rosidl_typesupport_introspection_c__GripperCommand_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rg75_300_gripper/srv/detail/gripper_command__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rg75_300_gripper/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rg75_300_gripper/srv/detail/gripper_command__functions.h"
// already included above
// #include "rg75_300_gripper/srv/detail/gripper_command__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rg75_300_gripper__srv__GripperCommand_Response__rosidl_typesupport_introspection_c__GripperCommand_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rg75_300_gripper__srv__GripperCommand_Response__init(message_memory);
}

void rg75_300_gripper__srv__GripperCommand_Response__rosidl_typesupport_introspection_c__GripperCommand_Response_fini_function(void * message_memory)
{
  rg75_300_gripper__srv__GripperCommand_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rg75_300_gripper__srv__GripperCommand_Response__rosidl_typesupport_introspection_c__GripperCommand_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rg75_300_gripper__srv__GripperCommand_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rg75_300_gripper__srv__GripperCommand_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rg75_300_gripper__srv__GripperCommand_Response__rosidl_typesupport_introspection_c__GripperCommand_Response_message_members = {
  "rg75_300_gripper__srv",  // message namespace
  "GripperCommand_Response",  // message name
  2,  // number of fields
  sizeof(rg75_300_gripper__srv__GripperCommand_Response),
  rg75_300_gripper__srv__GripperCommand_Response__rosidl_typesupport_introspection_c__GripperCommand_Response_message_member_array,  // message members
  rg75_300_gripper__srv__GripperCommand_Response__rosidl_typesupport_introspection_c__GripperCommand_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  rg75_300_gripper__srv__GripperCommand_Response__rosidl_typesupport_introspection_c__GripperCommand_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rg75_300_gripper__srv__GripperCommand_Response__rosidl_typesupport_introspection_c__GripperCommand_Response_message_type_support_handle = {
  0,
  &rg75_300_gripper__srv__GripperCommand_Response__rosidl_typesupport_introspection_c__GripperCommand_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rg75_300_gripper
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rg75_300_gripper, srv, GripperCommand_Response)() {
  if (!rg75_300_gripper__srv__GripperCommand_Response__rosidl_typesupport_introspection_c__GripperCommand_Response_message_type_support_handle.typesupport_identifier) {
    rg75_300_gripper__srv__GripperCommand_Response__rosidl_typesupport_introspection_c__GripperCommand_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rg75_300_gripper__srv__GripperCommand_Response__rosidl_typesupport_introspection_c__GripperCommand_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rg75_300_gripper/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rg75_300_gripper/srv/detail/gripper_command__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers rg75_300_gripper__srv__detail__gripper_command__rosidl_typesupport_introspection_c__GripperCommand_service_members = {
  "rg75_300_gripper__srv",  // service namespace
  "GripperCommand",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // rg75_300_gripper__srv__detail__gripper_command__rosidl_typesupport_introspection_c__GripperCommand_Request_message_type_support_handle,
  NULL  // response message
  // rg75_300_gripper__srv__detail__gripper_command__rosidl_typesupport_introspection_c__GripperCommand_Response_message_type_support_handle
};

static rosidl_service_type_support_t rg75_300_gripper__srv__detail__gripper_command__rosidl_typesupport_introspection_c__GripperCommand_service_type_support_handle = {
  0,
  &rg75_300_gripper__srv__detail__gripper_command__rosidl_typesupport_introspection_c__GripperCommand_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rg75_300_gripper, srv, GripperCommand_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rg75_300_gripper, srv, GripperCommand_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rg75_300_gripper
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rg75_300_gripper, srv, GripperCommand)() {
  if (!rg75_300_gripper__srv__detail__gripper_command__rosidl_typesupport_introspection_c__GripperCommand_service_type_support_handle.typesupport_identifier) {
    rg75_300_gripper__srv__detail__gripper_command__rosidl_typesupport_introspection_c__GripperCommand_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)rg75_300_gripper__srv__detail__gripper_command__rosidl_typesupport_introspection_c__GripperCommand_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rg75_300_gripper, srv, GripperCommand_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rg75_300_gripper, srv, GripperCommand_Response)()->data;
  }

  return &rg75_300_gripper__srv__detail__gripper_command__rosidl_typesupport_introspection_c__GripperCommand_service_type_support_handle;
}
