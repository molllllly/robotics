// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from air_lab_interfaces:srv/ExecuteTst.idl
// generated code does not contain a copyright notice

#ifndef AIR_LAB_INTERFACES__SRV__DETAIL__EXECUTE_TST__TRAITS_HPP_
#define AIR_LAB_INTERFACES__SRV__DETAIL__EXECUTE_TST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "air_lab_interfaces/srv/detail/execute_tst__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace air_lab_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ExecuteTst_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: tst_file
  {
    out << "tst_file: ";
    rosidl_generator_traits::value_to_yaml(msg.tst_file, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteTst_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: tst_file
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tst_file: ";
    rosidl_generator_traits::value_to_yaml(msg.tst_file, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteTst_Request & msg, bool use_flow_style = false)
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

}  // namespace air_lab_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use air_lab_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const air_lab_interfaces::srv::ExecuteTst_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  air_lab_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use air_lab_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const air_lab_interfaces::srv::ExecuteTst_Request & msg)
{
  return air_lab_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<air_lab_interfaces::srv::ExecuteTst_Request>()
{
  return "air_lab_interfaces::srv::ExecuteTst_Request";
}

template<>
inline const char * name<air_lab_interfaces::srv::ExecuteTst_Request>()
{
  return "air_lab_interfaces/srv/ExecuteTst_Request";
}

template<>
struct has_fixed_size<air_lab_interfaces::srv::ExecuteTst_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<air_lab_interfaces::srv::ExecuteTst_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<air_lab_interfaces::srv::ExecuteTst_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace air_lab_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ExecuteTst_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: error_message
  {
    out << "error_message: ";
    rosidl_generator_traits::value_to_yaml(msg.error_message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteTst_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: error_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_message: ";
    rosidl_generator_traits::value_to_yaml(msg.error_message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteTst_Response & msg, bool use_flow_style = false)
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

}  // namespace air_lab_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use air_lab_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const air_lab_interfaces::srv::ExecuteTst_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  air_lab_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use air_lab_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const air_lab_interfaces::srv::ExecuteTst_Response & msg)
{
  return air_lab_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<air_lab_interfaces::srv::ExecuteTst_Response>()
{
  return "air_lab_interfaces::srv::ExecuteTst_Response";
}

template<>
inline const char * name<air_lab_interfaces::srv::ExecuteTst_Response>()
{
  return "air_lab_interfaces/srv/ExecuteTst_Response";
}

template<>
struct has_fixed_size<air_lab_interfaces::srv::ExecuteTst_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<air_lab_interfaces::srv::ExecuteTst_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<air_lab_interfaces::srv::ExecuteTst_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<air_lab_interfaces::srv::ExecuteTst>()
{
  return "air_lab_interfaces::srv::ExecuteTst";
}

template<>
inline const char * name<air_lab_interfaces::srv::ExecuteTst>()
{
  return "air_lab_interfaces/srv/ExecuteTst";
}

template<>
struct has_fixed_size<air_lab_interfaces::srv::ExecuteTst>
  : std::integral_constant<
    bool,
    has_fixed_size<air_lab_interfaces::srv::ExecuteTst_Request>::value &&
    has_fixed_size<air_lab_interfaces::srv::ExecuteTst_Response>::value
  >
{
};

template<>
struct has_bounded_size<air_lab_interfaces::srv::ExecuteTst>
  : std::integral_constant<
    bool,
    has_bounded_size<air_lab_interfaces::srv::ExecuteTst_Request>::value &&
    has_bounded_size<air_lab_interfaces::srv::ExecuteTst_Response>::value
  >
{
};

template<>
struct is_service<air_lab_interfaces::srv::ExecuteTst>
  : std::true_type
{
};

template<>
struct is_service_request<air_lab_interfaces::srv::ExecuteTst_Request>
  : std::true_type
{
};

template<>
struct is_service_response<air_lab_interfaces::srv::ExecuteTst_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AIR_LAB_INTERFACES__SRV__DETAIL__EXECUTE_TST__TRAITS_HPP_
