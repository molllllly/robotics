// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from project_interface:srv/ExploreGoal.idl
// generated code does not contain a copyright notice

#ifndef PROJECT_INTERFACE__SRV__DETAIL__EXPLORE_GOAL__TRAITS_HPP_
#define PROJECT_INTERFACE__SRV__DETAIL__EXPLORE_GOAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "project_interface/srv/detail/explore_goal__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace project_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const ExploreGoal_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExploreGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExploreGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace project_interface

namespace rosidl_generator_traits
{

[[deprecated("use project_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const project_interface::srv::ExploreGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  project_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use project_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const project_interface::srv::ExploreGoal_Request & msg)
{
  return project_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<project_interface::srv::ExploreGoal_Request>()
{
  return "project_interface::srv::ExploreGoal_Request";
}

template<>
inline const char * name<project_interface::srv::ExploreGoal_Request>()
{
  return "project_interface/srv/ExploreGoal_Request";
}

template<>
struct has_fixed_size<project_interface::srv::ExploreGoal_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<project_interface::srv::ExploreGoal_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<project_interface::srv::ExploreGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'next_goal'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace project_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const ExploreGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: next_goal
  {
    out << "next_goal: ";
    to_flow_style_yaml(msg.next_goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExploreGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: next_goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "next_goal:\n";
    to_block_style_yaml(msg.next_goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExploreGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace project_interface

namespace rosidl_generator_traits
{

[[deprecated("use project_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const project_interface::srv::ExploreGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  project_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use project_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const project_interface::srv::ExploreGoal_Response & msg)
{
  return project_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<project_interface::srv::ExploreGoal_Response>()
{
  return "project_interface::srv::ExploreGoal_Response";
}

template<>
inline const char * name<project_interface::srv::ExploreGoal_Response>()
{
  return "project_interface/srv/ExploreGoal_Response";
}

template<>
struct has_fixed_size<project_interface::srv::ExploreGoal_Response>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<project_interface::srv::ExploreGoal_Response>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<project_interface::srv::ExploreGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<project_interface::srv::ExploreGoal>()
{
  return "project_interface::srv::ExploreGoal";
}

template<>
inline const char * name<project_interface::srv::ExploreGoal>()
{
  return "project_interface/srv/ExploreGoal";
}

template<>
struct has_fixed_size<project_interface::srv::ExploreGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<project_interface::srv::ExploreGoal_Request>::value &&
    has_fixed_size<project_interface::srv::ExploreGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<project_interface::srv::ExploreGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<project_interface::srv::ExploreGoal_Request>::value &&
    has_bounded_size<project_interface::srv::ExploreGoal_Response>::value
  >
{
};

template<>
struct is_service<project_interface::srv::ExploreGoal>
  : std::true_type
{
};

template<>
struct is_service_request<project_interface::srv::ExploreGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<project_interface::srv::ExploreGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PROJECT_INTERFACE__SRV__DETAIL__EXPLORE_GOAL__TRAITS_HPP_
