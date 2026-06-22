// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from project_interface:srv/ExploreGoal.idl
// generated code does not contain a copyright notice

#ifndef PROJECT_INTERFACE__SRV__DETAIL__EXPLORE_GOAL__BUILDER_HPP_
#define PROJECT_INTERFACE__SRV__DETAIL__EXPLORE_GOAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "project_interface/srv/detail/explore_goal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace project_interface
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::project_interface::srv::ExploreGoal_Request>()
{
  return ::project_interface::srv::ExploreGoal_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace project_interface


namespace project_interface
{

namespace srv
{

namespace builder
{

class Init_ExploreGoal_Response_next_goal
{
public:
  Init_ExploreGoal_Response_next_goal()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::project_interface::srv::ExploreGoal_Response next_goal(::project_interface::srv::ExploreGoal_Response::_next_goal_type arg)
  {
    msg_.next_goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::project_interface::srv::ExploreGoal_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::project_interface::srv::ExploreGoal_Response>()
{
  return project_interface::srv::builder::Init_ExploreGoal_Response_next_goal();
}

}  // namespace project_interface

#endif  // PROJECT_INTERFACE__SRV__DETAIL__EXPLORE_GOAL__BUILDER_HPP_
