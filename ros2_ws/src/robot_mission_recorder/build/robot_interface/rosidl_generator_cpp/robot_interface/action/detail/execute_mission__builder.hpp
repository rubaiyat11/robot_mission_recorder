// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_interface:action/ExecuteMission.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACE__ACTION__DETAIL__EXECUTE_MISSION__BUILDER_HPP_
#define ROBOT_INTERFACE__ACTION__DETAIL__EXECUTE_MISSION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_interface/action/detail/execute_mission__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_interface
{

namespace action
{

namespace builder
{

class Init_ExecuteMission_Goal_duration_seconds
{
public:
  explicit Init_ExecuteMission_Goal_duration_seconds(::robot_interface::action::ExecuteMission_Goal & msg)
  : msg_(msg)
  {}
  ::robot_interface::action::ExecuteMission_Goal duration_seconds(::robot_interface::action::ExecuteMission_Goal::_duration_seconds_type arg)
  {
    msg_.duration_seconds = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interface::action::ExecuteMission_Goal msg_;
};

class Init_ExecuteMission_Goal_mission_type
{
public:
  Init_ExecuteMission_Goal_mission_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteMission_Goal_duration_seconds mission_type(::robot_interface::action::ExecuteMission_Goal::_mission_type_type arg)
  {
    msg_.mission_type = std::move(arg);
    return Init_ExecuteMission_Goal_duration_seconds(msg_);
  }

private:
  ::robot_interface::action::ExecuteMission_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interface::action::ExecuteMission_Goal>()
{
  return robot_interface::action::builder::Init_ExecuteMission_Goal_mission_type();
}

}  // namespace robot_interface


namespace robot_interface
{

namespace action
{

namespace builder
{

class Init_ExecuteMission_Result_summary
{
public:
  explicit Init_ExecuteMission_Result_summary(::robot_interface::action::ExecuteMission_Result & msg)
  : msg_(msg)
  {}
  ::robot_interface::action::ExecuteMission_Result summary(::robot_interface::action::ExecuteMission_Result::_summary_type arg)
  {
    msg_.summary = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interface::action::ExecuteMission_Result msg_;
};

class Init_ExecuteMission_Result_success
{
public:
  Init_ExecuteMission_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteMission_Result_summary success(::robot_interface::action::ExecuteMission_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ExecuteMission_Result_summary(msg_);
  }

private:
  ::robot_interface::action::ExecuteMission_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interface::action::ExecuteMission_Result>()
{
  return robot_interface::action::builder::Init_ExecuteMission_Result_success();
}

}  // namespace robot_interface


namespace robot_interface
{

namespace action
{

namespace builder
{

class Init_ExecuteMission_Feedback_steps_completed
{
public:
  explicit Init_ExecuteMission_Feedback_steps_completed(::robot_interface::action::ExecuteMission_Feedback & msg)
  : msg_(msg)
  {}
  ::robot_interface::action::ExecuteMission_Feedback steps_completed(::robot_interface::action::ExecuteMission_Feedback::_steps_completed_type arg)
  {
    msg_.steps_completed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interface::action::ExecuteMission_Feedback msg_;
};

class Init_ExecuteMission_Feedback_current_step
{
public:
  explicit Init_ExecuteMission_Feedback_current_step(::robot_interface::action::ExecuteMission_Feedback & msg)
  : msg_(msg)
  {}
  Init_ExecuteMission_Feedback_steps_completed current_step(::robot_interface::action::ExecuteMission_Feedback::_current_step_type arg)
  {
    msg_.current_step = std::move(arg);
    return Init_ExecuteMission_Feedback_steps_completed(msg_);
  }

private:
  ::robot_interface::action::ExecuteMission_Feedback msg_;
};

class Init_ExecuteMission_Feedback_progress_percent
{
public:
  Init_ExecuteMission_Feedback_progress_percent()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteMission_Feedback_current_step progress_percent(::robot_interface::action::ExecuteMission_Feedback::_progress_percent_type arg)
  {
    msg_.progress_percent = std::move(arg);
    return Init_ExecuteMission_Feedback_current_step(msg_);
  }

private:
  ::robot_interface::action::ExecuteMission_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interface::action::ExecuteMission_Feedback>()
{
  return robot_interface::action::builder::Init_ExecuteMission_Feedback_progress_percent();
}

}  // namespace robot_interface


namespace robot_interface
{

namespace action
{

namespace builder
{

class Init_ExecuteMission_SendGoal_Request_goal
{
public:
  explicit Init_ExecuteMission_SendGoal_Request_goal(::robot_interface::action::ExecuteMission_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::robot_interface::action::ExecuteMission_SendGoal_Request goal(::robot_interface::action::ExecuteMission_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interface::action::ExecuteMission_SendGoal_Request msg_;
};

class Init_ExecuteMission_SendGoal_Request_goal_id
{
public:
  Init_ExecuteMission_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteMission_SendGoal_Request_goal goal_id(::robot_interface::action::ExecuteMission_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ExecuteMission_SendGoal_Request_goal(msg_);
  }

private:
  ::robot_interface::action::ExecuteMission_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interface::action::ExecuteMission_SendGoal_Request>()
{
  return robot_interface::action::builder::Init_ExecuteMission_SendGoal_Request_goal_id();
}

}  // namespace robot_interface


namespace robot_interface
{

namespace action
{

namespace builder
{

class Init_ExecuteMission_SendGoal_Response_stamp
{
public:
  explicit Init_ExecuteMission_SendGoal_Response_stamp(::robot_interface::action::ExecuteMission_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::robot_interface::action::ExecuteMission_SendGoal_Response stamp(::robot_interface::action::ExecuteMission_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interface::action::ExecuteMission_SendGoal_Response msg_;
};

class Init_ExecuteMission_SendGoal_Response_accepted
{
public:
  Init_ExecuteMission_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteMission_SendGoal_Response_stamp accepted(::robot_interface::action::ExecuteMission_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ExecuteMission_SendGoal_Response_stamp(msg_);
  }

private:
  ::robot_interface::action::ExecuteMission_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interface::action::ExecuteMission_SendGoal_Response>()
{
  return robot_interface::action::builder::Init_ExecuteMission_SendGoal_Response_accepted();
}

}  // namespace robot_interface


namespace robot_interface
{

namespace action
{

namespace builder
{

class Init_ExecuteMission_GetResult_Request_goal_id
{
public:
  Init_ExecuteMission_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_interface::action::ExecuteMission_GetResult_Request goal_id(::robot_interface::action::ExecuteMission_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interface::action::ExecuteMission_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interface::action::ExecuteMission_GetResult_Request>()
{
  return robot_interface::action::builder::Init_ExecuteMission_GetResult_Request_goal_id();
}

}  // namespace robot_interface


namespace robot_interface
{

namespace action
{

namespace builder
{

class Init_ExecuteMission_GetResult_Response_result
{
public:
  explicit Init_ExecuteMission_GetResult_Response_result(::robot_interface::action::ExecuteMission_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::robot_interface::action::ExecuteMission_GetResult_Response result(::robot_interface::action::ExecuteMission_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interface::action::ExecuteMission_GetResult_Response msg_;
};

class Init_ExecuteMission_GetResult_Response_status
{
public:
  Init_ExecuteMission_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteMission_GetResult_Response_result status(::robot_interface::action::ExecuteMission_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ExecuteMission_GetResult_Response_result(msg_);
  }

private:
  ::robot_interface::action::ExecuteMission_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interface::action::ExecuteMission_GetResult_Response>()
{
  return robot_interface::action::builder::Init_ExecuteMission_GetResult_Response_status();
}

}  // namespace robot_interface


namespace robot_interface
{

namespace action
{

namespace builder
{

class Init_ExecuteMission_FeedbackMessage_feedback
{
public:
  explicit Init_ExecuteMission_FeedbackMessage_feedback(::robot_interface::action::ExecuteMission_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::robot_interface::action::ExecuteMission_FeedbackMessage feedback(::robot_interface::action::ExecuteMission_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interface::action::ExecuteMission_FeedbackMessage msg_;
};

class Init_ExecuteMission_FeedbackMessage_goal_id
{
public:
  Init_ExecuteMission_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteMission_FeedbackMessage_feedback goal_id(::robot_interface::action::ExecuteMission_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ExecuteMission_FeedbackMessage_feedback(msg_);
  }

private:
  ::robot_interface::action::ExecuteMission_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interface::action::ExecuteMission_FeedbackMessage>()
{
  return robot_interface::action::builder::Init_ExecuteMission_FeedbackMessage_goal_id();
}

}  // namespace robot_interface

#endif  // ROBOT_INTERFACE__ACTION__DETAIL__EXECUTE_MISSION__BUILDER_HPP_
