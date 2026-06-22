// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from air_lab_interfaces:msg/Goals.idl
// generated code does not contain a copyright notice

#ifndef AIR_LAB_INTERFACES__MSG__DETAIL__GOALS__STRUCT_H_
#define AIR_LAB_INTERFACES__MSG__DETAIL__GOALS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'goals'
#include "air_lab_interfaces/msg/detail/goal__struct.h"

/// Struct defined in msg/Goals in the package air_lab_interfaces.
typedef struct air_lab_interfaces__msg__Goals
{
  /// Name of the TST file to execute, it should be a full path
  air_lab_interfaces__msg__Goal__Sequence goals;
} air_lab_interfaces__msg__Goals;

// Struct for a sequence of air_lab_interfaces__msg__Goals.
typedef struct air_lab_interfaces__msg__Goals__Sequence
{
  air_lab_interfaces__msg__Goals * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} air_lab_interfaces__msg__Goals__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIR_LAB_INTERFACES__MSG__DETAIL__GOALS__STRUCT_H_
