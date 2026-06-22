// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from project_interface:srv/ExploreGoal.idl
// generated code does not contain a copyright notice

#ifndef PROJECT_INTERFACE__SRV__DETAIL__EXPLORE_GOAL__STRUCT_HPP_
#define PROJECT_INTERFACE__SRV__DETAIL__EXPLORE_GOAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__project_interface__srv__ExploreGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__project_interface__srv__ExploreGoal_Request __declspec(deprecated)
#endif

namespace project_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ExploreGoal_Request_
{
  using Type = ExploreGoal_Request_<ContainerAllocator>;

  explicit ExploreGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit ExploreGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    project_interface::srv::ExploreGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const project_interface::srv::ExploreGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<project_interface::srv::ExploreGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<project_interface::srv::ExploreGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      project_interface::srv::ExploreGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<project_interface::srv::ExploreGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      project_interface::srv::ExploreGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<project_interface::srv::ExploreGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<project_interface::srv::ExploreGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<project_interface::srv::ExploreGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__project_interface__srv__ExploreGoal_Request
    std::shared_ptr<project_interface::srv::ExploreGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__project_interface__srv__ExploreGoal_Request
    std::shared_ptr<project_interface::srv::ExploreGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExploreGoal_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExploreGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExploreGoal_Request_

// alias to use template instance with default allocator
using ExploreGoal_Request =
  project_interface::srv::ExploreGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace project_interface


// Include directives for member types
// Member 'next_goal'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__project_interface__srv__ExploreGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__project_interface__srv__ExploreGoal_Response __declspec(deprecated)
#endif

namespace project_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ExploreGoal_Response_
{
  using Type = ExploreGoal_Response_<ContainerAllocator>;

  explicit ExploreGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : next_goal(_init)
  {
    (void)_init;
  }

  explicit ExploreGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : next_goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _next_goal_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _next_goal_type next_goal;

  // setters for named parameter idiom
  Type & set__next_goal(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->next_goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    project_interface::srv::ExploreGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const project_interface::srv::ExploreGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<project_interface::srv::ExploreGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<project_interface::srv::ExploreGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      project_interface::srv::ExploreGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<project_interface::srv::ExploreGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      project_interface::srv::ExploreGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<project_interface::srv::ExploreGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<project_interface::srv::ExploreGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<project_interface::srv::ExploreGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__project_interface__srv__ExploreGoal_Response
    std::shared_ptr<project_interface::srv::ExploreGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__project_interface__srv__ExploreGoal_Response
    std::shared_ptr<project_interface::srv::ExploreGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExploreGoal_Response_ & other) const
  {
    if (this->next_goal != other.next_goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExploreGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExploreGoal_Response_

// alias to use template instance with default allocator
using ExploreGoal_Response =
  project_interface::srv::ExploreGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace project_interface

namespace project_interface
{

namespace srv
{

struct ExploreGoal
{
  using Request = project_interface::srv::ExploreGoal_Request;
  using Response = project_interface::srv::ExploreGoal_Response;
};

}  // namespace srv

}  // namespace project_interface

#endif  // PROJECT_INTERFACE__SRV__DETAIL__EXPLORE_GOAL__STRUCT_HPP_
