// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from air_lab_interfaces:msg/Goals.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "air_lab_interfaces/msg/detail/goals__rosidl_typesupport_introspection_c.h"
#include "air_lab_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "air_lab_interfaces/msg/detail/goals__functions.h"
#include "air_lab_interfaces/msg/detail/goals__struct.h"


// Include directives for member types
// Member `goals`
#include "air_lab_interfaces/msg/goal.h"
// Member `goals`
#include "air_lab_interfaces/msg/detail/goal__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void air_lab_interfaces__msg__Goals__rosidl_typesupport_introspection_c__Goals_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  air_lab_interfaces__msg__Goals__init(message_memory);
}

void air_lab_interfaces__msg__Goals__rosidl_typesupport_introspection_c__Goals_fini_function(void * message_memory)
{
  air_lab_interfaces__msg__Goals__fini(message_memory);
}

size_t air_lab_interfaces__msg__Goals__rosidl_typesupport_introspection_c__size_function__Goals__goals(
  const void * untyped_member)
{
  const air_lab_interfaces__msg__Goal__Sequence * member =
    (const air_lab_interfaces__msg__Goal__Sequence *)(untyped_member);
  return member->size;
}

const void * air_lab_interfaces__msg__Goals__rosidl_typesupport_introspection_c__get_const_function__Goals__goals(
  const void * untyped_member, size_t index)
{
  const air_lab_interfaces__msg__Goal__Sequence * member =
    (const air_lab_interfaces__msg__Goal__Sequence *)(untyped_member);
  return &member->data[index];
}

void * air_lab_interfaces__msg__Goals__rosidl_typesupport_introspection_c__get_function__Goals__goals(
  void * untyped_member, size_t index)
{
  air_lab_interfaces__msg__Goal__Sequence * member =
    (air_lab_interfaces__msg__Goal__Sequence *)(untyped_member);
  return &member->data[index];
}

void air_lab_interfaces__msg__Goals__rosidl_typesupport_introspection_c__fetch_function__Goals__goals(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const air_lab_interfaces__msg__Goal * item =
    ((const air_lab_interfaces__msg__Goal *)
    air_lab_interfaces__msg__Goals__rosidl_typesupport_introspection_c__get_const_function__Goals__goals(untyped_member, index));
  air_lab_interfaces__msg__Goal * value =
    (air_lab_interfaces__msg__Goal *)(untyped_value);
  *value = *item;
}

void air_lab_interfaces__msg__Goals__rosidl_typesupport_introspection_c__assign_function__Goals__goals(
  void * untyped_member, size_t index, const void * untyped_value)
{
  air_lab_interfaces__msg__Goal * item =
    ((air_lab_interfaces__msg__Goal *)
    air_lab_interfaces__msg__Goals__rosidl_typesupport_introspection_c__get_function__Goals__goals(untyped_member, index));
  const air_lab_interfaces__msg__Goal * value =
    (const air_lab_interfaces__msg__Goal *)(untyped_value);
  *item = *value;
}

bool air_lab_interfaces__msg__Goals__rosidl_typesupport_introspection_c__resize_function__Goals__goals(
  void * untyped_member, size_t size)
{
  air_lab_interfaces__msg__Goal__Sequence * member =
    (air_lab_interfaces__msg__Goal__Sequence *)(untyped_member);
  air_lab_interfaces__msg__Goal__Sequence__fini(member);
  return air_lab_interfaces__msg__Goal__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember air_lab_interfaces__msg__Goals__rosidl_typesupport_introspection_c__Goals_message_member_array[1] = {
  {
    "goals",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(air_lab_interfaces__msg__Goals, goals),  // bytes offset in struct
    NULL,  // default value
    air_lab_interfaces__msg__Goals__rosidl_typesupport_introspection_c__size_function__Goals__goals,  // size() function pointer
    air_lab_interfaces__msg__Goals__rosidl_typesupport_introspection_c__get_const_function__Goals__goals,  // get_const(index) function pointer
    air_lab_interfaces__msg__Goals__rosidl_typesupport_introspection_c__get_function__Goals__goals,  // get(index) function pointer
    air_lab_interfaces__msg__Goals__rosidl_typesupport_introspection_c__fetch_function__Goals__goals,  // fetch(index, &value) function pointer
    air_lab_interfaces__msg__Goals__rosidl_typesupport_introspection_c__assign_function__Goals__goals,  // assign(index, value) function pointer
    air_lab_interfaces__msg__Goals__rosidl_typesupport_introspection_c__resize_function__Goals__goals  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers air_lab_interfaces__msg__Goals__rosidl_typesupport_introspection_c__Goals_message_members = {
  "air_lab_interfaces__msg",  // message namespace
  "Goals",  // message name
  1,  // number of fields
  sizeof(air_lab_interfaces__msg__Goals),
  air_lab_interfaces__msg__Goals__rosidl_typesupport_introspection_c__Goals_message_member_array,  // message members
  air_lab_interfaces__msg__Goals__rosidl_typesupport_introspection_c__Goals_init_function,  // function to initialize message memory (memory has to be allocated)
  air_lab_interfaces__msg__Goals__rosidl_typesupport_introspection_c__Goals_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t air_lab_interfaces__msg__Goals__rosidl_typesupport_introspection_c__Goals_message_type_support_handle = {
  0,
  &air_lab_interfaces__msg__Goals__rosidl_typesupport_introspection_c__Goals_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_air_lab_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, air_lab_interfaces, msg, Goals)() {
  air_lab_interfaces__msg__Goals__rosidl_typesupport_introspection_c__Goals_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, air_lab_interfaces, msg, Goal)();
  if (!air_lab_interfaces__msg__Goals__rosidl_typesupport_introspection_c__Goals_message_type_support_handle.typesupport_identifier) {
    air_lab_interfaces__msg__Goals__rosidl_typesupport_introspection_c__Goals_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &air_lab_interfaces__msg__Goals__rosidl_typesupport_introspection_c__Goals_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
