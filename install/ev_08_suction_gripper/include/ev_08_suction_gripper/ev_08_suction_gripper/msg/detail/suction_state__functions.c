// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ev_08_suction_gripper:msg/SuctionState.idl
// generated code does not contain a copyright notice
#include "ev_08_suction_gripper/msg/detail/suction_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `status`
#include "rosidl_runtime_c/string_functions.h"

bool
ev_08_suction_gripper__msg__SuctionState__init(ev_08_suction_gripper__msg__SuctionState * msg)
{
  if (!msg) {
    return false;
  }
  // suction_a_on
  // suction_b_on
  // force_a
  // force_b
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    ev_08_suction_gripper__msg__SuctionState__fini(msg);
    return false;
  }
  return true;
}

void
ev_08_suction_gripper__msg__SuctionState__fini(ev_08_suction_gripper__msg__SuctionState * msg)
{
  if (!msg) {
    return;
  }
  // suction_a_on
  // suction_b_on
  // force_a
  // force_b
  // status
  rosidl_runtime_c__String__fini(&msg->status);
}

bool
ev_08_suction_gripper__msg__SuctionState__are_equal(const ev_08_suction_gripper__msg__SuctionState * lhs, const ev_08_suction_gripper__msg__SuctionState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // suction_a_on
  if (lhs->suction_a_on != rhs->suction_a_on) {
    return false;
  }
  // suction_b_on
  if (lhs->suction_b_on != rhs->suction_b_on) {
    return false;
  }
  // force_a
  if (lhs->force_a != rhs->force_a) {
    return false;
  }
  // force_b
  if (lhs->force_b != rhs->force_b) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  return true;
}

bool
ev_08_suction_gripper__msg__SuctionState__copy(
  const ev_08_suction_gripper__msg__SuctionState * input,
  ev_08_suction_gripper__msg__SuctionState * output)
{
  if (!input || !output) {
    return false;
  }
  // suction_a_on
  output->suction_a_on = input->suction_a_on;
  // suction_b_on
  output->suction_b_on = input->suction_b_on;
  // force_a
  output->force_a = input->force_a;
  // force_b
  output->force_b = input->force_b;
  // status
  if (!rosidl_runtime_c__String__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  return true;
}

ev_08_suction_gripper__msg__SuctionState *
ev_08_suction_gripper__msg__SuctionState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ev_08_suction_gripper__msg__SuctionState * msg = (ev_08_suction_gripper__msg__SuctionState *)allocator.allocate(sizeof(ev_08_suction_gripper__msg__SuctionState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ev_08_suction_gripper__msg__SuctionState));
  bool success = ev_08_suction_gripper__msg__SuctionState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ev_08_suction_gripper__msg__SuctionState__destroy(ev_08_suction_gripper__msg__SuctionState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ev_08_suction_gripper__msg__SuctionState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ev_08_suction_gripper__msg__SuctionState__Sequence__init(ev_08_suction_gripper__msg__SuctionState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ev_08_suction_gripper__msg__SuctionState * data = NULL;

  if (size) {
    data = (ev_08_suction_gripper__msg__SuctionState *)allocator.zero_allocate(size, sizeof(ev_08_suction_gripper__msg__SuctionState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ev_08_suction_gripper__msg__SuctionState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ev_08_suction_gripper__msg__SuctionState__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ev_08_suction_gripper__msg__SuctionState__Sequence__fini(ev_08_suction_gripper__msg__SuctionState__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ev_08_suction_gripper__msg__SuctionState__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ev_08_suction_gripper__msg__SuctionState__Sequence *
ev_08_suction_gripper__msg__SuctionState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ev_08_suction_gripper__msg__SuctionState__Sequence * array = (ev_08_suction_gripper__msg__SuctionState__Sequence *)allocator.allocate(sizeof(ev_08_suction_gripper__msg__SuctionState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ev_08_suction_gripper__msg__SuctionState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ev_08_suction_gripper__msg__SuctionState__Sequence__destroy(ev_08_suction_gripper__msg__SuctionState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ev_08_suction_gripper__msg__SuctionState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ev_08_suction_gripper__msg__SuctionState__Sequence__are_equal(const ev_08_suction_gripper__msg__SuctionState__Sequence * lhs, const ev_08_suction_gripper__msg__SuctionState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ev_08_suction_gripper__msg__SuctionState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ev_08_suction_gripper__msg__SuctionState__Sequence__copy(
  const ev_08_suction_gripper__msg__SuctionState__Sequence * input,
  ev_08_suction_gripper__msg__SuctionState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ev_08_suction_gripper__msg__SuctionState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ev_08_suction_gripper__msg__SuctionState * data =
      (ev_08_suction_gripper__msg__SuctionState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ev_08_suction_gripper__msg__SuctionState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ev_08_suction_gripper__msg__SuctionState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ev_08_suction_gripper__msg__SuctionState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
