// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_interface:action/ExecuteMission.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACE__ACTION__DETAIL__EXECUTE_MISSION__TRAITS_HPP_
#define ROBOT_INTERFACE__ACTION__DETAIL__EXECUTE_MISSION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_interface/action/detail/execute_mission__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robot_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteMission_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: mission_type
  {
    out << "mission_type: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_type, out);
    out << ", ";
  }

  // member: duration_seconds
  {
    out << "duration_seconds: ";
    rosidl_generator_traits::value_to_yaml(msg.duration_seconds, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteMission_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mission_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mission_type: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_type, out);
    out << "\n";
  }

  // member: duration_seconds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration_seconds: ";
    rosidl_generator_traits::value_to_yaml(msg.duration_seconds, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteMission_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace robot_interface

namespace rosidl_generator_traits
{

[[deprecated("use robot_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_interface::action::ExecuteMission_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const robot_interface::action::ExecuteMission_Goal & msg)
{
  return robot_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<robot_interface::action::ExecuteMission_Goal>()
{
  return "robot_interface::action::ExecuteMission_Goal";
}

template<>
inline const char * name<robot_interface::action::ExecuteMission_Goal>()
{
  return "robot_interface/action/ExecuteMission_Goal";
}

template<>
struct has_fixed_size<robot_interface::action::ExecuteMission_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_interface::action::ExecuteMission_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robot_interface::action::ExecuteMission_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace robot_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteMission_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: summary
  {
    out << "summary: ";
    rosidl_generator_traits::value_to_yaml(msg.summary, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteMission_Result & msg,
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

  // member: summary
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "summary: ";
    rosidl_generator_traits::value_to_yaml(msg.summary, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteMission_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace robot_interface

namespace rosidl_generator_traits
{

[[deprecated("use robot_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_interface::action::ExecuteMission_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const robot_interface::action::ExecuteMission_Result & msg)
{
  return robot_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<robot_interface::action::ExecuteMission_Result>()
{
  return "robot_interface::action::ExecuteMission_Result";
}

template<>
inline const char * name<robot_interface::action::ExecuteMission_Result>()
{
  return "robot_interface/action/ExecuteMission_Result";
}

template<>
struct has_fixed_size<robot_interface::action::ExecuteMission_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_interface::action::ExecuteMission_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robot_interface::action::ExecuteMission_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace robot_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteMission_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: progress_percent
  {
    out << "progress_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.progress_percent, out);
    out << ", ";
  }

  // member: current_step
  {
    out << "current_step: ";
    rosidl_generator_traits::value_to_yaml(msg.current_step, out);
    out << ", ";
  }

  // member: steps_completed
  {
    out << "steps_completed: ";
    rosidl_generator_traits::value_to_yaml(msg.steps_completed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteMission_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: progress_percent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "progress_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.progress_percent, out);
    out << "\n";
  }

  // member: current_step
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_step: ";
    rosidl_generator_traits::value_to_yaml(msg.current_step, out);
    out << "\n";
  }

  // member: steps_completed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steps_completed: ";
    rosidl_generator_traits::value_to_yaml(msg.steps_completed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteMission_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace robot_interface

namespace rosidl_generator_traits
{

[[deprecated("use robot_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_interface::action::ExecuteMission_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const robot_interface::action::ExecuteMission_Feedback & msg)
{
  return robot_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<robot_interface::action::ExecuteMission_Feedback>()
{
  return "robot_interface::action::ExecuteMission_Feedback";
}

template<>
inline const char * name<robot_interface::action::ExecuteMission_Feedback>()
{
  return "robot_interface/action/ExecuteMission_Feedback";
}

template<>
struct has_fixed_size<robot_interface::action::ExecuteMission_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_interface::action::ExecuteMission_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robot_interface::action::ExecuteMission_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "robot_interface/action/detail/execute_mission__traits.hpp"

namespace robot_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteMission_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteMission_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteMission_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace robot_interface

namespace rosidl_generator_traits
{

[[deprecated("use robot_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_interface::action::ExecuteMission_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const robot_interface::action::ExecuteMission_SendGoal_Request & msg)
{
  return robot_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<robot_interface::action::ExecuteMission_SendGoal_Request>()
{
  return "robot_interface::action::ExecuteMission_SendGoal_Request";
}

template<>
inline const char * name<robot_interface::action::ExecuteMission_SendGoal_Request>()
{
  return "robot_interface/action/ExecuteMission_SendGoal_Request";
}

template<>
struct has_fixed_size<robot_interface::action::ExecuteMission_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<robot_interface::action::ExecuteMission_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<robot_interface::action::ExecuteMission_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<robot_interface::action::ExecuteMission_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<robot_interface::action::ExecuteMission_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace robot_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteMission_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteMission_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteMission_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace robot_interface

namespace rosidl_generator_traits
{

[[deprecated("use robot_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_interface::action::ExecuteMission_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const robot_interface::action::ExecuteMission_SendGoal_Response & msg)
{
  return robot_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<robot_interface::action::ExecuteMission_SendGoal_Response>()
{
  return "robot_interface::action::ExecuteMission_SendGoal_Response";
}

template<>
inline const char * name<robot_interface::action::ExecuteMission_SendGoal_Response>()
{
  return "robot_interface/action/ExecuteMission_SendGoal_Response";
}

template<>
struct has_fixed_size<robot_interface::action::ExecuteMission_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<robot_interface::action::ExecuteMission_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<robot_interface::action::ExecuteMission_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robot_interface::action::ExecuteMission_SendGoal>()
{
  return "robot_interface::action::ExecuteMission_SendGoal";
}

template<>
inline const char * name<robot_interface::action::ExecuteMission_SendGoal>()
{
  return "robot_interface/action/ExecuteMission_SendGoal";
}

template<>
struct has_fixed_size<robot_interface::action::ExecuteMission_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<robot_interface::action::ExecuteMission_SendGoal_Request>::value &&
    has_fixed_size<robot_interface::action::ExecuteMission_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<robot_interface::action::ExecuteMission_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<robot_interface::action::ExecuteMission_SendGoal_Request>::value &&
    has_bounded_size<robot_interface::action::ExecuteMission_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<robot_interface::action::ExecuteMission_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<robot_interface::action::ExecuteMission_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robot_interface::action::ExecuteMission_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace robot_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteMission_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteMission_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteMission_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace robot_interface

namespace rosidl_generator_traits
{

[[deprecated("use robot_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_interface::action::ExecuteMission_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const robot_interface::action::ExecuteMission_GetResult_Request & msg)
{
  return robot_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<robot_interface::action::ExecuteMission_GetResult_Request>()
{
  return "robot_interface::action::ExecuteMission_GetResult_Request";
}

template<>
inline const char * name<robot_interface::action::ExecuteMission_GetResult_Request>()
{
  return "robot_interface/action/ExecuteMission_GetResult_Request";
}

template<>
struct has_fixed_size<robot_interface::action::ExecuteMission_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<robot_interface::action::ExecuteMission_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<robot_interface::action::ExecuteMission_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "robot_interface/action/detail/execute_mission__traits.hpp"

namespace robot_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteMission_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteMission_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteMission_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace robot_interface

namespace rosidl_generator_traits
{

[[deprecated("use robot_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_interface::action::ExecuteMission_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const robot_interface::action::ExecuteMission_GetResult_Response & msg)
{
  return robot_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<robot_interface::action::ExecuteMission_GetResult_Response>()
{
  return "robot_interface::action::ExecuteMission_GetResult_Response";
}

template<>
inline const char * name<robot_interface::action::ExecuteMission_GetResult_Response>()
{
  return "robot_interface/action/ExecuteMission_GetResult_Response";
}

template<>
struct has_fixed_size<robot_interface::action::ExecuteMission_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<robot_interface::action::ExecuteMission_Result>::value> {};

template<>
struct has_bounded_size<robot_interface::action::ExecuteMission_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<robot_interface::action::ExecuteMission_Result>::value> {};

template<>
struct is_message<robot_interface::action::ExecuteMission_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robot_interface::action::ExecuteMission_GetResult>()
{
  return "robot_interface::action::ExecuteMission_GetResult";
}

template<>
inline const char * name<robot_interface::action::ExecuteMission_GetResult>()
{
  return "robot_interface/action/ExecuteMission_GetResult";
}

template<>
struct has_fixed_size<robot_interface::action::ExecuteMission_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<robot_interface::action::ExecuteMission_GetResult_Request>::value &&
    has_fixed_size<robot_interface::action::ExecuteMission_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<robot_interface::action::ExecuteMission_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<robot_interface::action::ExecuteMission_GetResult_Request>::value &&
    has_bounded_size<robot_interface::action::ExecuteMission_GetResult_Response>::value
  >
{
};

template<>
struct is_service<robot_interface::action::ExecuteMission_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<robot_interface::action::ExecuteMission_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robot_interface::action::ExecuteMission_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "robot_interface/action/detail/execute_mission__traits.hpp"

namespace robot_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteMission_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteMission_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteMission_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace robot_interface

namespace rosidl_generator_traits
{

[[deprecated("use robot_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_interface::action::ExecuteMission_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const robot_interface::action::ExecuteMission_FeedbackMessage & msg)
{
  return robot_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<robot_interface::action::ExecuteMission_FeedbackMessage>()
{
  return "robot_interface::action::ExecuteMission_FeedbackMessage";
}

template<>
inline const char * name<robot_interface::action::ExecuteMission_FeedbackMessage>()
{
  return "robot_interface/action/ExecuteMission_FeedbackMessage";
}

template<>
struct has_fixed_size<robot_interface::action::ExecuteMission_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<robot_interface::action::ExecuteMission_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<robot_interface::action::ExecuteMission_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<robot_interface::action::ExecuteMission_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<robot_interface::action::ExecuteMission_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<robot_interface::action::ExecuteMission>
  : std::true_type
{
};

template<>
struct is_action_goal<robot_interface::action::ExecuteMission_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<robot_interface::action::ExecuteMission_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<robot_interface::action::ExecuteMission_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // ROBOT_INTERFACE__ACTION__DETAIL__EXECUTE_MISSION__TRAITS_HPP_
