
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "robot_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_interface__action__ExecuteMission_Goal() -> *const std::ffi::c_void;
}

#[link(name = "robot_interface__rosidl_generator_c")]
extern "C" {
    fn robot_interface__action__ExecuteMission_Goal__init(msg: *mut ExecuteMission_Goal) -> bool;
    fn robot_interface__action__ExecuteMission_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteMission_Goal>, size: usize) -> bool;
    fn robot_interface__action__ExecuteMission_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteMission_Goal>);
    fn robot_interface__action__ExecuteMission_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteMission_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteMission_Goal>) -> bool;
}

// Corresponds to robot_interface__action__ExecuteMission_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteMission_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_type: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub duration_seconds: f32,

}



impl Default for ExecuteMission_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_interface__action__ExecuteMission_Goal__init(&mut msg as *mut _) {
        panic!("Call to robot_interface__action__ExecuteMission_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteMission_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_interface__action__ExecuteMission_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_interface__action__ExecuteMission_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_interface__action__ExecuteMission_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteMission_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteMission_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "robot_interface/action/ExecuteMission_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_interface__action__ExecuteMission_Goal() }
  }
}


#[link(name = "robot_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_interface__action__ExecuteMission_Result() -> *const std::ffi::c_void;
}

#[link(name = "robot_interface__rosidl_generator_c")]
extern "C" {
    fn robot_interface__action__ExecuteMission_Result__init(msg: *mut ExecuteMission_Result) -> bool;
    fn robot_interface__action__ExecuteMission_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteMission_Result>, size: usize) -> bool;
    fn robot_interface__action__ExecuteMission_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteMission_Result>);
    fn robot_interface__action__ExecuteMission_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteMission_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteMission_Result>) -> bool;
}

// Corresponds to robot_interface__action__ExecuteMission_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteMission_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub summary: rosidl_runtime_rs::String,

}



impl Default for ExecuteMission_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_interface__action__ExecuteMission_Result__init(&mut msg as *mut _) {
        panic!("Call to robot_interface__action__ExecuteMission_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteMission_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_interface__action__ExecuteMission_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_interface__action__ExecuteMission_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_interface__action__ExecuteMission_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteMission_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteMission_Result where Self: Sized {
  const TYPE_NAME: &'static str = "robot_interface/action/ExecuteMission_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_interface__action__ExecuteMission_Result() }
  }
}


#[link(name = "robot_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_interface__action__ExecuteMission_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "robot_interface__rosidl_generator_c")]
extern "C" {
    fn robot_interface__action__ExecuteMission_Feedback__init(msg: *mut ExecuteMission_Feedback) -> bool;
    fn robot_interface__action__ExecuteMission_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteMission_Feedback>, size: usize) -> bool;
    fn robot_interface__action__ExecuteMission_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteMission_Feedback>);
    fn robot_interface__action__ExecuteMission_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteMission_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteMission_Feedback>) -> bool;
}

// Corresponds to robot_interface__action__ExecuteMission_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteMission_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub progress_percent: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_step: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub steps_completed: i32,

}



impl Default for ExecuteMission_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_interface__action__ExecuteMission_Feedback__init(&mut msg as *mut _) {
        panic!("Call to robot_interface__action__ExecuteMission_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteMission_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_interface__action__ExecuteMission_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_interface__action__ExecuteMission_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_interface__action__ExecuteMission_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteMission_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteMission_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "robot_interface/action/ExecuteMission_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_interface__action__ExecuteMission_Feedback() }
  }
}


#[link(name = "robot_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_interface__action__ExecuteMission_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "robot_interface__rosidl_generator_c")]
extern "C" {
    fn robot_interface__action__ExecuteMission_FeedbackMessage__init(msg: *mut ExecuteMission_FeedbackMessage) -> bool;
    fn robot_interface__action__ExecuteMission_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteMission_FeedbackMessage>, size: usize) -> bool;
    fn robot_interface__action__ExecuteMission_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteMission_FeedbackMessage>);
    fn robot_interface__action__ExecuteMission_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteMission_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteMission_FeedbackMessage>) -> bool;
}

// Corresponds to robot_interface__action__ExecuteMission_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteMission_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::ExecuteMission_Feedback,

}



impl Default for ExecuteMission_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_interface__action__ExecuteMission_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to robot_interface__action__ExecuteMission_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteMission_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_interface__action__ExecuteMission_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_interface__action__ExecuteMission_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_interface__action__ExecuteMission_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteMission_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteMission_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "robot_interface/action/ExecuteMission_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_interface__action__ExecuteMission_FeedbackMessage() }
  }
}




#[link(name = "robot_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_interface__action__ExecuteMission_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "robot_interface__rosidl_generator_c")]
extern "C" {
    fn robot_interface__action__ExecuteMission_SendGoal_Request__init(msg: *mut ExecuteMission_SendGoal_Request) -> bool;
    fn robot_interface__action__ExecuteMission_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteMission_SendGoal_Request>, size: usize) -> bool;
    fn robot_interface__action__ExecuteMission_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteMission_SendGoal_Request>);
    fn robot_interface__action__ExecuteMission_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteMission_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteMission_SendGoal_Request>) -> bool;
}

// Corresponds to robot_interface__action__ExecuteMission_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteMission_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::ExecuteMission_Goal,

}



impl Default for ExecuteMission_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_interface__action__ExecuteMission_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to robot_interface__action__ExecuteMission_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteMission_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_interface__action__ExecuteMission_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_interface__action__ExecuteMission_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_interface__action__ExecuteMission_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteMission_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteMission_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "robot_interface/action/ExecuteMission_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_interface__action__ExecuteMission_SendGoal_Request() }
  }
}


#[link(name = "robot_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_interface__action__ExecuteMission_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "robot_interface__rosidl_generator_c")]
extern "C" {
    fn robot_interface__action__ExecuteMission_SendGoal_Response__init(msg: *mut ExecuteMission_SendGoal_Response) -> bool;
    fn robot_interface__action__ExecuteMission_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteMission_SendGoal_Response>, size: usize) -> bool;
    fn robot_interface__action__ExecuteMission_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteMission_SendGoal_Response>);
    fn robot_interface__action__ExecuteMission_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteMission_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteMission_SendGoal_Response>) -> bool;
}

// Corresponds to robot_interface__action__ExecuteMission_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteMission_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for ExecuteMission_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_interface__action__ExecuteMission_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to robot_interface__action__ExecuteMission_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteMission_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_interface__action__ExecuteMission_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_interface__action__ExecuteMission_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_interface__action__ExecuteMission_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteMission_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteMission_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "robot_interface/action/ExecuteMission_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_interface__action__ExecuteMission_SendGoal_Response() }
  }
}


#[link(name = "robot_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_interface__action__ExecuteMission_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "robot_interface__rosidl_generator_c")]
extern "C" {
    fn robot_interface__action__ExecuteMission_GetResult_Request__init(msg: *mut ExecuteMission_GetResult_Request) -> bool;
    fn robot_interface__action__ExecuteMission_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteMission_GetResult_Request>, size: usize) -> bool;
    fn robot_interface__action__ExecuteMission_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteMission_GetResult_Request>);
    fn robot_interface__action__ExecuteMission_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteMission_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteMission_GetResult_Request>) -> bool;
}

// Corresponds to robot_interface__action__ExecuteMission_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteMission_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for ExecuteMission_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_interface__action__ExecuteMission_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to robot_interface__action__ExecuteMission_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteMission_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_interface__action__ExecuteMission_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_interface__action__ExecuteMission_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_interface__action__ExecuteMission_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteMission_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteMission_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "robot_interface/action/ExecuteMission_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_interface__action__ExecuteMission_GetResult_Request() }
  }
}


#[link(name = "robot_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_interface__action__ExecuteMission_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "robot_interface__rosidl_generator_c")]
extern "C" {
    fn robot_interface__action__ExecuteMission_GetResult_Response__init(msg: *mut ExecuteMission_GetResult_Response) -> bool;
    fn robot_interface__action__ExecuteMission_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteMission_GetResult_Response>, size: usize) -> bool;
    fn robot_interface__action__ExecuteMission_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteMission_GetResult_Response>);
    fn robot_interface__action__ExecuteMission_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteMission_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteMission_GetResult_Response>) -> bool;
}

// Corresponds to robot_interface__action__ExecuteMission_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteMission_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::ExecuteMission_Result,

}



impl Default for ExecuteMission_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_interface__action__ExecuteMission_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to robot_interface__action__ExecuteMission_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteMission_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_interface__action__ExecuteMission_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_interface__action__ExecuteMission_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_interface__action__ExecuteMission_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteMission_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteMission_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "robot_interface/action/ExecuteMission_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_interface__action__ExecuteMission_GetResult_Response() }
  }
}






#[link(name = "robot_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__robot_interface__action__ExecuteMission_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to robot_interface__action__ExecuteMission_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct ExecuteMission_SendGoal;

impl rosidl_runtime_rs::Service for ExecuteMission_SendGoal {
    type Request = ExecuteMission_SendGoal_Request;
    type Response = ExecuteMission_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__robot_interface__action__ExecuteMission_SendGoal() }
    }
}




#[link(name = "robot_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__robot_interface__action__ExecuteMission_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to robot_interface__action__ExecuteMission_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct ExecuteMission_GetResult;

impl rosidl_runtime_rs::Service for ExecuteMission_GetResult {
    type Request = ExecuteMission_GetResult_Request;
    type Response = ExecuteMission_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__robot_interface__action__ExecuteMission_GetResult() }
    }
}


