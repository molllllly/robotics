// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from project_interface:srv/ExploreGoal.idl
// generated code does not contain a copyright notice
#include "project_interface/srv/detail/explore_goal__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
project_interface__srv__ExploreGoal_Request__init(project_interface__srv__ExploreGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
project_interface__srv__ExploreGoal_Request__fini(project_interface__srv__ExploreGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
project_interface__srv__ExploreGoal_Request__are_equal(const project_interface__srv__ExploreGoal_Request * lhs, const project_interface__srv__ExploreGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
project_interface__srv__ExploreGoal_Request__copy(
  const project_interface__srv__ExploreGoal_Request * input,
  project_interface__srv__ExploreGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

project_interface__srv__ExploreGoal_Request *
project_interface__srv__ExploreGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  project_interface__srv__ExploreGoal_Request * msg = (project_interface__srv__ExploreGoal_Request *)allocator.allocate(sizeof(project_interface__srv__ExploreGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(project_interface__srv__ExploreGoal_Request));
  bool success = project_interface__srv__ExploreGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
project_interface__srv__ExploreGoal_Request__destroy(project_interface__srv__ExploreGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    project_interface__srv__ExploreGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
project_interface__srv__ExploreGoal_Request__Sequence__init(project_interface__srv__ExploreGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  project_interface__srv__ExploreGoal_Request * data = NULL;

  if (size) {
    data = (project_interface__srv__ExploreGoal_Request *)allocator.zero_allocate(size, sizeof(project_interface__srv__ExploreGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = project_interface__srv__ExploreGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        project_interface__srv__ExploreGoal_Request__fini(&data[i - 1]);
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
project_interface__srv__ExploreGoal_Request__Sequence__fini(project_interface__srv__ExploreGoal_Request__Sequence * array)
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
      project_interface__srv__ExploreGoal_Request__fini(&array->data[i]);
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

project_interface__srv__ExploreGoal_Request__Sequence *
project_interface__srv__ExploreGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  project_interface__srv__ExploreGoal_Request__Sequence * array = (project_interface__srv__ExploreGoal_Request__Sequence *)allocator.allocate(sizeof(project_interface__srv__ExploreGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = project_interface__srv__ExploreGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
project_interface__srv__ExploreGoal_Request__Sequence__destroy(project_interface__srv__ExploreGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    project_interface__srv__ExploreGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
project_interface__srv__ExploreGoal_Request__Sequence__are_equal(const project_interface__srv__ExploreGoal_Request__Sequence * lhs, const project_interface__srv__ExploreGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!project_interface__srv__ExploreGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
project_interface__srv__ExploreGoal_Request__Sequence__copy(
  const project_interface__srv__ExploreGoal_Request__Sequence * input,
  project_interface__srv__ExploreGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(project_interface__srv__ExploreGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    project_interface__srv__ExploreGoal_Request * data =
      (project_interface__srv__ExploreGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!project_interface__srv__ExploreGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          project_interface__srv__ExploreGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!project_interface__srv__ExploreGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `next_goal`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
project_interface__srv__ExploreGoal_Response__init(project_interface__srv__ExploreGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // next_goal
  if (!geometry_msgs__msg__Pose__init(&msg->next_goal)) {
    project_interface__srv__ExploreGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
project_interface__srv__ExploreGoal_Response__fini(project_interface__srv__ExploreGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // next_goal
  geometry_msgs__msg__Pose__fini(&msg->next_goal);
}

bool
project_interface__srv__ExploreGoal_Response__are_equal(const project_interface__srv__ExploreGoal_Response * lhs, const project_interface__srv__ExploreGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // next_goal
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->next_goal), &(rhs->next_goal)))
  {
    return false;
  }
  return true;
}

bool
project_interface__srv__ExploreGoal_Response__copy(
  const project_interface__srv__ExploreGoal_Response * input,
  project_interface__srv__ExploreGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // next_goal
  if (!geometry_msgs__msg__Pose__copy(
      &(input->next_goal), &(output->next_goal)))
  {
    return false;
  }
  return true;
}

project_interface__srv__ExploreGoal_Response *
project_interface__srv__ExploreGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  project_interface__srv__ExploreGoal_Response * msg = (project_interface__srv__ExploreGoal_Response *)allocator.allocate(sizeof(project_interface__srv__ExploreGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(project_interface__srv__ExploreGoal_Response));
  bool success = project_interface__srv__ExploreGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
project_interface__srv__ExploreGoal_Response__destroy(project_interface__srv__ExploreGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    project_interface__srv__ExploreGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
project_interface__srv__ExploreGoal_Response__Sequence__init(project_interface__srv__ExploreGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  project_interface__srv__ExploreGoal_Response * data = NULL;

  if (size) {
    data = (project_interface__srv__ExploreGoal_Response *)allocator.zero_allocate(size, sizeof(project_interface__srv__ExploreGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = project_interface__srv__ExploreGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        project_interface__srv__ExploreGoal_Response__fini(&data[i - 1]);
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
project_interface__srv__ExploreGoal_Response__Sequence__fini(project_interface__srv__ExploreGoal_Response__Sequence * array)
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
      project_interface__srv__ExploreGoal_Response__fini(&array->data[i]);
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

project_interface__srv__ExploreGoal_Response__Sequence *
project_interface__srv__ExploreGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  project_interface__srv__ExploreGoal_Response__Sequence * array = (project_interface__srv__ExploreGoal_Response__Sequence *)allocator.allocate(sizeof(project_interface__srv__ExploreGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = project_interface__srv__ExploreGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
project_interface__srv__ExploreGoal_Response__Sequence__destroy(project_interface__srv__ExploreGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    project_interface__srv__ExploreGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
project_interface__srv__ExploreGoal_Response__Sequence__are_equal(const project_interface__srv__ExploreGoal_Response__Sequence * lhs, const project_interface__srv__ExploreGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!project_interface__srv__ExploreGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
project_interface__srv__ExploreGoal_Response__Sequence__copy(
  const project_interface__srv__ExploreGoal_Response__Sequence * input,
  project_interface__srv__ExploreGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(project_interface__srv__ExploreGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    project_interface__srv__ExploreGoal_Response * data =
      (project_interface__srv__ExploreGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!project_interface__srv__ExploreGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          project_interface__srv__ExploreGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!project_interface__srv__ExploreGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
