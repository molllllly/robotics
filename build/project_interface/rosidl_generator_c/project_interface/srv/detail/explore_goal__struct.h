// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from project_interface:srv/ExploreGoal.idl
// generated code does not contain a copyright notice

#ifndef PROJECT_INTERFACE__SRV__DETAIL__EXPLORE_GOAL__STRUCT_H_
#define PROJECT_INTERFACE__SRV__DETAIL__EXPLORE_GOAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ExploreGoal in the package project_interface.
typedef struct project_interface__srv__ExploreGoal_Request
{
  uint8_t structure_needs_at_least_one_member;
} project_interface__srv__ExploreGoal_Request;

// Struct for a sequence of project_interface__srv__ExploreGoal_Request.
typedef struct project_interface__srv__ExploreGoal_Request__Sequence
{
  project_interface__srv__ExploreGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} project_interface__srv__ExploreGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'next_goal'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in srv/ExploreGoal in the package project_interface.
typedef struct project_interface__srv__ExploreGoal_Response
{
  geometry_msgs__msg__Pose next_goal;
} project_interface__srv__ExploreGoal_Response;

// Struct for a sequence of project_interface__srv__ExploreGoal_Response.
typedef struct project_interface__srv__ExploreGoal_Response__Sequence
{
  project_interface__srv__ExploreGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} project_interface__srv__ExploreGoal_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROJECT_INTERFACE__SRV__DETAIL__EXPLORE_GOAL__STRUCT_H_
