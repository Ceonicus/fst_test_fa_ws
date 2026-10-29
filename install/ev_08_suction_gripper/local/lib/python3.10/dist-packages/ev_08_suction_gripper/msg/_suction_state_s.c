// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ev_08_suction_gripper:msg/SuctionState.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "ev_08_suction_gripper/msg/detail/suction_state__struct.h"
#include "ev_08_suction_gripper/msg/detail/suction_state__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ev_08_suction_gripper__msg__suction_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("ev_08_suction_gripper.msg._suction_state.SuctionState", full_classname_dest, 53) == 0);
  }
  ev_08_suction_gripper__msg__SuctionState * ros_message = _ros_message;
  {  // suction_a_on
    PyObject * field = PyObject_GetAttrString(_pymsg, "suction_a_on");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->suction_a_on = (Py_True == field);
    Py_DECREF(field);
  }
  {  // suction_b_on
    PyObject * field = PyObject_GetAttrString(_pymsg, "suction_b_on");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->suction_b_on = (Py_True == field);
    Py_DECREF(field);
  }
  {  // force_a
    PyObject * field = PyObject_GetAttrString(_pymsg, "force_a");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->force_a = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // force_b
    PyObject * field = PyObject_GetAttrString(_pymsg, "force_b");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->force_b = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->status, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ev_08_suction_gripper__msg__suction_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SuctionState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ev_08_suction_gripper.msg._suction_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SuctionState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ev_08_suction_gripper__msg__SuctionState * ros_message = (ev_08_suction_gripper__msg__SuctionState *)raw_ros_message;
  {  // suction_a_on
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->suction_a_on ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "suction_a_on", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // suction_b_on
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->suction_b_on ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "suction_b_on", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // force_a
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->force_a);
    {
      int rc = PyObject_SetAttrString(_pymessage, "force_a", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // force_b
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->force_b);
    {
      int rc = PyObject_SetAttrString(_pymessage, "force_b", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->status.data,
      strlen(ros_message->status.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
