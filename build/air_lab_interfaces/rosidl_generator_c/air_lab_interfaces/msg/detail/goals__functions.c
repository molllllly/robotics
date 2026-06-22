// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from air_lab_interfaces:msg/Goals.idl
// generated code does not contain a copyright notice
#include "air_lab_interfaces/msg/detail/goals__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `goals`
#include "air_lab_interfaces/msg/detail/goal__functions.h"

bool
air_lab_interfaces__msg__Goals__init(air_lab_interfaces__msg__Goals * msg)
{
  if (!msg) {
    return false;
  }
  // goals
  if (!air_lab_interfaces__msg__Goal__Sequence__init(&msg->goals, 0)) {
    air_lab_interfaces__msg__Goals__fini(msg);
    return false;
  }
  return true;
}

void
air_lab_interfaces__msg__Goals__fini(air_lab_interfaces__msg__Goals * msg)
{
  if (!msg) {
    return;
  }
  // goals
  air_lab_interfaces__msg__Goal__Sequence__fini(&msg->goals);
}

bool
air_lab_interfaces__msg__Goals__are_equal(const air_lab_interfaces__msg__Goals * lhs, const air_lab_interfaces__msg__Goals * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goals
  if (!air_lab_interfaces__msg__Goal__Sequence__are_equal(
      &(lhs->goals), &(rhs->goals)))
  {
    return false;
  }
  return true;
}

bool
air_lab_interfaces__msg__Goals__copy(
  const air_lab_interfaces__msg__Goals * input,
  air_lab_interfaces__msg__Goals * output)
{
  if (!input || !output) {
    return false;
  }
  // goals
  if (!air_lab_interfaces__msg__Goal__Sequence__copy(
      &(input->goals), &(output->goals)))
  {
    return false;
  }
  return true;
}

air_lab_interfaces__msg__Goals *
air_lab_interfaces__msg__Goals__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  air_lab_interfaces__msg__Goals * msg = (air_lab_interfaces__msg__Goals *)allocator.allocate(sizeof(air_lab_interfaces__msg__Goals), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(air_lab_interfaces__msg__Goals));
  bool success = air_lab_interfaces__msg__Goals__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
air_lab_interfaces__msg__Goals__destroy(air_lab_interfaces__msg__Goals * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    air_lab_interfaces__msg__Goals__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
air_lab_interfaces__msg__Goals__Sequence__init(air_lab_interfaces__msg__Goals__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  air_lab_interfaces__msg__Goals * data = NULL;

  if (size) {
    data = (air_lab_interfaces__msg__Goals *)allocator.zero_allocate(size, sizeof(air_lab_interfaces__msg__Goals), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = air_lab_interfaces__msg__Goals__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        air_lab_interfaces__msg__Goals__fini(&data[i - 1]);
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
air_lab_interfaces__msg__Goals__Sequence__fini(air_lab_interfaces__msg__Goals__Sequence * array)
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
      air_lab_interfaces__msg__Goals__fini(&array->data[i]);
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

air_lab_interfaces__msg__Goals__Sequence *
air_lab_interfaces__msg__Goals__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  air_lab_interfaces__msg__Goals__Sequence * array = (air_lab_interfaces__msg__Goals__Sequence *)allocator.allocate(sizeof(air_lab_interfaces__msg__Goals__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = air_lab_interfaces__msg__Goals__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
air_lab_interfaces__msg__Goals__Sequence__destroy(air_lab_interfaces__msg__Goals__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    air_lab_interfaces__msg__Goals__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
air_lab_interfaces__msg__Goals__Sequence__are_equal(const air_lab_interfaces__msg__Goals__Sequence * lhs, const air_lab_interfaces__msg__Goals__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!air_lab_interfaces__msg__Goals__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
air_lab_interfaces__msg__Goals__Sequence__copy(
  const air_lab_interfaces__msg__Goals__Sequence * input,
  air_lab_interfaces__msg__Goals__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(air_lab_interfaces__msg__Goals);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    air_lab_interfaces__msg__Goals * data =
      (air_lab_interfaces__msg__Goals *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!air_lab_interfaces__msg__Goals__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          air_lab_interfaces__msg__Goals__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!air_lab_interfaces__msg__Goals__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
