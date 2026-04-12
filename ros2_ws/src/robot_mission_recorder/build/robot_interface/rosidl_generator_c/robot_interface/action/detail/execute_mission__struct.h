// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_interface:action/ExecuteMission.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACE__ACTION__DETAIL__EXECUTE_MISSION__STRUCT_H_
#define ROBOT_INTERFACE__ACTION__DETAIL__EXECUTE_MISSION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'mission_type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/ExecuteMission in the package robot_interface.
typedef struct robot_interface__action__ExecuteMission_Goal
{
  rosidl_runtime_c__String mission_type;
  float duration_seconds;
} robot_interface__action__ExecuteMission_Goal;

// Struct for a sequence of robot_interface__action__ExecuteMission_Goal.
typedef struct robot_interface__action__ExecuteMission_Goal__Sequence
{
  robot_interface__action__ExecuteMission_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interface__action__ExecuteMission_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'summary'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/ExecuteMission in the package robot_interface.
typedef struct robot_interface__action__ExecuteMission_Result
{
  bool success;
  rosidl_runtime_c__String summary;
} robot_interface__action__ExecuteMission_Result;

// Struct for a sequence of robot_interface__action__ExecuteMission_Result.
typedef struct robot_interface__action__ExecuteMission_Result__Sequence
{
  robot_interface__action__ExecuteMission_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interface__action__ExecuteMission_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'current_step'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/ExecuteMission in the package robot_interface.
typedef struct robot_interface__action__ExecuteMission_Feedback
{
  float progress_percent;
  rosidl_runtime_c__String current_step;
  int32_t steps_completed;
} robot_interface__action__ExecuteMission_Feedback;

// Struct for a sequence of robot_interface__action__ExecuteMission_Feedback.
typedef struct robot_interface__action__ExecuteMission_Feedback__Sequence
{
  robot_interface__action__ExecuteMission_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interface__action__ExecuteMission_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "robot_interface/action/detail/execute_mission__struct.h"

/// Struct defined in action/ExecuteMission in the package robot_interface.
typedef struct robot_interface__action__ExecuteMission_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  robot_interface__action__ExecuteMission_Goal goal;
} robot_interface__action__ExecuteMission_SendGoal_Request;

// Struct for a sequence of robot_interface__action__ExecuteMission_SendGoal_Request.
typedef struct robot_interface__action__ExecuteMission_SendGoal_Request__Sequence
{
  robot_interface__action__ExecuteMission_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interface__action__ExecuteMission_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ExecuteMission in the package robot_interface.
typedef struct robot_interface__action__ExecuteMission_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} robot_interface__action__ExecuteMission_SendGoal_Response;

// Struct for a sequence of robot_interface__action__ExecuteMission_SendGoal_Response.
typedef struct robot_interface__action__ExecuteMission_SendGoal_Response__Sequence
{
  robot_interface__action__ExecuteMission_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interface__action__ExecuteMission_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ExecuteMission in the package robot_interface.
typedef struct robot_interface__action__ExecuteMission_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} robot_interface__action__ExecuteMission_GetResult_Request;

// Struct for a sequence of robot_interface__action__ExecuteMission_GetResult_Request.
typedef struct robot_interface__action__ExecuteMission_GetResult_Request__Sequence
{
  robot_interface__action__ExecuteMission_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interface__action__ExecuteMission_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "robot_interface/action/detail/execute_mission__struct.h"

/// Struct defined in action/ExecuteMission in the package robot_interface.
typedef struct robot_interface__action__ExecuteMission_GetResult_Response
{
  int8_t status;
  robot_interface__action__ExecuteMission_Result result;
} robot_interface__action__ExecuteMission_GetResult_Response;

// Struct for a sequence of robot_interface__action__ExecuteMission_GetResult_Response.
typedef struct robot_interface__action__ExecuteMission_GetResult_Response__Sequence
{
  robot_interface__action__ExecuteMission_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interface__action__ExecuteMission_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "robot_interface/action/detail/execute_mission__struct.h"

/// Struct defined in action/ExecuteMission in the package robot_interface.
typedef struct robot_interface__action__ExecuteMission_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  robot_interface__action__ExecuteMission_Feedback feedback;
} robot_interface__action__ExecuteMission_FeedbackMessage;

// Struct for a sequence of robot_interface__action__ExecuteMission_FeedbackMessage.
typedef struct robot_interface__action__ExecuteMission_FeedbackMessage__Sequence
{
  robot_interface__action__ExecuteMission_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interface__action__ExecuteMission_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_INTERFACE__ACTION__DETAIL__EXECUTE_MISSION__STRUCT_H_
