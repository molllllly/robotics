// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from air_lab_interfaces:msg/Goals.idl
// generated code does not contain a copyright notice

#ifndef AIR_LAB_INTERFACES__MSG__DETAIL__GOALS__TRAITS_HPP_
#define AIR_LAB_INTERFACES__MSG__DETAIL__GOALS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "air_lab_interfaces/msg/detail/goals__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'goals'
#include "air_lab_interfaces/msg/detail/goal__traits.hpp"

namespace air_lab_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Goals & msg,
  std::ostream & out)
{
  out << "{";
  // member: goals
  {
    if (msg.goals.size() == 0) {
      out << "goals: []";
    } else {
      out << "goals: [";
      size_t pending_items = msg.goals.size();
      for (auto item : msg.goals) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Goals & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goals
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.goals.size() == 0) {
      out << "goals: []\n";
    } else {
      out << "goals:\n";
      for (auto item : msg.goals) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Goals & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace air_lab_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use air_lab_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const air_lab_interfaces::msg::Goals & msg,
  std::ostream & out, size_t indentation = 0)
{
  air_lab_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use air_lab_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const air_lab_interfaces::msg::Goals & msg)
{
  return air_lab_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<air_lab_interfaces::msg::Goals>()
{
  return "air_lab_interfaces::msg::Goals";
}

template<>
inline const char * name<air_lab_interfaces::msg::Goals>()
{
  return "air_lab_interfaces/msg/Goals";
}

template<>
struct has_fixed_size<air_lab_interfaces::msg::Goals>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<air_lab_interfaces::msg::Goals>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<air_lab_interfaces::msg::Goals>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AIR_LAB_INTERFACES__MSG__DETAIL__GOALS__TRAITS_HPP_
