// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rg75_300_gripper:msg/GripperState.idl
// generated code does not contain a copyright notice
#include "rg75_300_gripper/msg/detail/gripper_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
rg75_300_gripper__msg__GripperState__init(rg75_300_gripper__msg__GripperState * msg)
{
  if (!msg) {
    return false;
  }
  // is_open
  // position
  // force
  // activated
  return true;
}

void
rg75_300_gripper__msg__GripperState__fini(rg75_300_gripper__msg__GripperState * msg)
{
  if (!msg) {
    return;
  }
  // is_open
  // position
  // force
  // activated
}

bool
rg75_300_gripper__msg__GripperState__are_equal(const rg75_300_gripper__msg__GripperState * lhs, const rg75_300_gripper__msg__GripperState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // is_open
  if (lhs->is_open != rhs->is_open) {
    return false;
  }
  // position
  if (lhs->position != rhs->position) {
    return false;
  }
  // force
  if (lhs->force != rhs->force) {
    return false;
  }
  // activated
  if (lhs->activated != rhs->activated) {
    return false;
  }
  return true;
}

bool
rg75_300_gripper__msg__GripperState__copy(
  const rg75_300_gripper__msg__GripperState * input,
  rg75_300_gripper__msg__GripperState * output)
{
  if (!input || !output) {
    return false;
  }
  // is_open
  output->is_open = input->is_open;
  // position
  output->position = input->position;
  // force
  output->force = input->force;
  // activated
  output->activated = input->activated;
  return true;
}

rg75_300_gripper__msg__GripperState *
rg75_300_gripper__msg__GripperState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rg75_300_gripper__msg__GripperState * msg = (rg75_300_gripper__msg__GripperState *)allocator.allocate(sizeof(rg75_300_gripper__msg__GripperState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rg75_300_gripper__msg__GripperState));
  bool success = rg75_300_gripper__msg__GripperState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rg75_300_gripper__msg__GripperState__destroy(rg75_300_gripper__msg__GripperState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rg75_300_gripper__msg__GripperState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rg75_300_gripper__msg__GripperState__Sequence__init(rg75_300_gripper__msg__GripperState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rg75_300_gripper__msg__GripperState * data = NULL;

  if (size) {
    data = (rg75_300_gripper__msg__GripperState *)allocator.zero_allocate(size, sizeof(rg75_300_gripper__msg__GripperState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rg75_300_gripper__msg__GripperState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rg75_300_gripper__msg__GripperState__fini(&data[i - 1]);
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
rg75_300_gripper__msg__GripperState__Sequence__fini(rg75_300_gripper__msg__GripperState__Sequence * array)
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
      rg75_300_gripper__msg__GripperState__fini(&array->data[i]);
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

rg75_300_gripper__msg__GripperState__Sequence *
rg75_300_gripper__msg__GripperState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rg75_300_gripper__msg__GripperState__Sequence * array = (rg75_300_gripper__msg__GripperState__Sequence *)allocator.allocate(sizeof(rg75_300_gripper__msg__GripperState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rg75_300_gripper__msg__GripperState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rg75_300_gripper__msg__GripperState__Sequence__destroy(rg75_300_gripper__msg__GripperState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rg75_300_gripper__msg__GripperState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rg75_300_gripper__msg__GripperState__Sequence__are_equal(const rg75_300_gripper__msg__GripperState__Sequence * lhs, const rg75_300_gripper__msg__GripperState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rg75_300_gripper__msg__GripperState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rg75_300_gripper__msg__GripperState__Sequence__copy(
  const rg75_300_gripper__msg__GripperState__Sequence * input,
  rg75_300_gripper__msg__GripperState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rg75_300_gripper__msg__GripperState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rg75_300_gripper__msg__GripperState * data =
      (rg75_300_gripper__msg__GripperState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rg75_300_gripper__msg__GripperState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rg75_300_gripper__msg__GripperState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rg75_300_gripper__msg__GripperState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
