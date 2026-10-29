// generated from rosidl_generator_cpp/resource/rosidl_generator_cpp__visibility_control.hpp.in
// generated code does not contain a copyright notice

#ifndef RG75_300_GRIPPER__MSG__ROSIDL_GENERATOR_CPP__VISIBILITY_CONTROL_HPP_
#define RG75_300_GRIPPER__MSG__ROSIDL_GENERATOR_CPP__VISIBILITY_CONTROL_HPP_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_GENERATOR_CPP_EXPORT_rg75_300_gripper __attribute__ ((dllexport))
    #define ROSIDL_GENERATOR_CPP_IMPORT_rg75_300_gripper __attribute__ ((dllimport))
  #else
    #define ROSIDL_GENERATOR_CPP_EXPORT_rg75_300_gripper __declspec(dllexport)
    #define ROSIDL_GENERATOR_CPP_IMPORT_rg75_300_gripper __declspec(dllimport)
  #endif
  #ifdef ROSIDL_GENERATOR_CPP_BUILDING_DLL_rg75_300_gripper
    #define ROSIDL_GENERATOR_CPP_PUBLIC_rg75_300_gripper ROSIDL_GENERATOR_CPP_EXPORT_rg75_300_gripper
  #else
    #define ROSIDL_GENERATOR_CPP_PUBLIC_rg75_300_gripper ROSIDL_GENERATOR_CPP_IMPORT_rg75_300_gripper
  #endif
#else
  #define ROSIDL_GENERATOR_CPP_EXPORT_rg75_300_gripper __attribute__ ((visibility("default")))
  #define ROSIDL_GENERATOR_CPP_IMPORT_rg75_300_gripper
  #if __GNUC__ >= 4
    #define ROSIDL_GENERATOR_CPP_PUBLIC_rg75_300_gripper __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_GENERATOR_CPP_PUBLIC_rg75_300_gripper
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // RG75_300_GRIPPER__MSG__ROSIDL_GENERATOR_CPP__VISIBILITY_CONTROL_HPP_
