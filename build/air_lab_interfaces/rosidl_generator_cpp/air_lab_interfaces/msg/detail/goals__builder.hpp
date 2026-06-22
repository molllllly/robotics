// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from air_lab_interfaces:msg/Goals.idl
// generated code does not contain a copyright notice

#ifndef AIR_LAB_INTERFACES__MSG__DETAIL__GOALS__BUILDER_HPP_
#define AIR_LAB_INTERFACES__MSG__DETAIL__GOALS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "air_lab_interfaces/msg/detail/goals__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace air_lab_interfaces
{

namespace msg
{

namespace builder
{

class Init_Goals_goals
{
public:
  Init_Goals_goals()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::air_lab_interfaces::msg::Goals goals(::air_lab_interfaces::msg::Goals::_goals_type arg)
  {
    msg_.goals = std::move(arg);
    return std::move(msg_);
  }

private:
  ::air_lab_interfaces::msg::Goals msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::air_lab_interfaces::msg::Goals>()
{
  return air_lab_interfaces::msg::builder::Init_Goals_goals();
}

}  // namespace air_lab_interfaces

#endif  // AIR_LAB_INTERFACES__MSG__DETAIL__GOALS__BUILDER_HPP_
