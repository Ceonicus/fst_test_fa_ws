// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ev_08_suction_gripper:msg/SuctionState.idl
// generated code does not contain a copyright notice

#ifndef EV_08_SUCTION_GRIPPER__MSG__DETAIL__SUCTION_STATE__FUNCTIONS_H_
#define EV_08_SUCTION_GRIPPER__MSG__DETAIL__SUCTION_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ev_08_suction_gripper/msg/rosidl_generator_c__visibility_control.h"

#include "ev_08_suction_gripper/msg/detail/suction_state__struct.h"

/// Initialize msg/SuctionState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ev_08_suction_gripper__msg__SuctionState
 * )) before or use
 * ev_08_suction_gripper__msg__SuctionState__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ev_08_suction_gripper
bool
ev_08_suction_gripper__msg__SuctionState__init(ev_08_suction_gripper__msg__SuctionState * msg);

/// Finalize msg/SuctionState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ev_08_suction_gripper
void
ev_08_suction_gripper__msg__SuctionState__fini(ev_08_suction_gripper__msg__SuctionState * msg);

/// Create msg/SuctionState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ev_08_suction_gripper__msg__SuctionState__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ev_08_suction_gripper
ev_08_suction_gripper__msg__SuctionState *
ev_08_suction_gripper__msg__SuctionState__create();

/// Destroy msg/SuctionState message.
/**
 * It calls
 * ev_08_suction_gripper__msg__SuctionState__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ev_08_suction_gripper
void
ev_08_suction_gripper__msg__SuctionState__destroy(ev_08_suction_gripper__msg__SuctionState * msg);

/// Check for msg/SuctionState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ev_08_suction_gripper
bool
ev_08_suction_gripper__msg__SuctionState__are_equal(const ev_08_suction_gripper__msg__SuctionState * lhs, const ev_08_suction_gripper__msg__SuctionState * rhs);

/// Copy a msg/SuctionState message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ev_08_suction_gripper
bool
ev_08_suction_gripper__msg__SuctionState__copy(
  const ev_08_suction_gripper__msg__SuctionState * input,
  ev_08_suction_gripper__msg__SuctionState * output);

/// Initialize array of msg/SuctionState messages.
/**
 * It allocates the memory for the number of elements and calls
 * ev_08_suction_gripper__msg__SuctionState__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ev_08_suction_gripper
bool
ev_08_suction_gripper__msg__SuctionState__Sequence__init(ev_08_suction_gripper__msg__SuctionState__Sequence * array, size_t size);

/// Finalize array of msg/SuctionState messages.
/**
 * It calls
 * ev_08_suction_gripper__msg__SuctionState__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ev_08_suction_gripper
void
ev_08_suction_gripper__msg__SuctionState__Sequence__fini(ev_08_suction_gripper__msg__SuctionState__Sequence * array);

/// Create array of msg/SuctionState messages.
/**
 * It allocates the memory for the array and calls
 * ev_08_suction_gripper__msg__SuctionState__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ev_08_suction_gripper
ev_08_suction_gripper__msg__SuctionState__Sequence *
ev_08_suction_gripper__msg__SuctionState__Sequence__create(size_t size);

/// Destroy array of msg/SuctionState messages.
/**
 * It calls
 * ev_08_suction_gripper__msg__SuctionState__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ev_08_suction_gripper
void
ev_08_suction_gripper__msg__SuctionState__Sequence__destroy(ev_08_suction_gripper__msg__SuctionState__Sequence * array);

/// Check for msg/SuctionState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ev_08_suction_gripper
bool
ev_08_suction_gripper__msg__SuctionState__Sequence__are_equal(const ev_08_suction_gripper__msg__SuctionState__Sequence * lhs, const ev_08_suction_gripper__msg__SuctionState__Sequence * rhs);

/// Copy an array of msg/SuctionState messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ev_08_suction_gripper
bool
ev_08_suction_gripper__msg__SuctionState__Sequence__copy(
  const ev_08_suction_gripper__msg__SuctionState__Sequence * input,
  ev_08_suction_gripper__msg__SuctionState__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // EV_08_SUCTION_GRIPPER__MSG__DETAIL__SUCTION_STATE__FUNCTIONS_H_
