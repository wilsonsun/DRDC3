#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// CharacterMotor
struct CharacterMotor_t_591596366_0;
// UnityEngine.ControllerColliderHit
struct ControllerColliderHit_t_384325222_0;
// System.Collections.IEnumerator
struct IEnumerator_t1412936761_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// System.Void CharacterMotor::.ctor()
extern "C"  void CharacterMotor__ctor_m488653284_0 (CharacterMotor_t_591596366_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterMotor::Awake()
extern "C"  void CharacterMotor_Awake_m726258503_0 (CharacterMotor_t_591596366_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterMotor::UpdateFunction()
extern "C"  void CharacterMotor_UpdateFunction_m2139774881_0 (CharacterMotor_t_591596366_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterMotor::FixedUpdate()
extern "C"  void CharacterMotor_FixedUpdate_m759309407_0 (CharacterMotor_t_591596366_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterMotor::Update()
extern "C"  void CharacterMotor_Update_m_304755287_0 (CharacterMotor_t_591596366_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 CharacterMotor::ApplyInputVelocityChange(UnityEngine.Vector3)
extern "C"  Vector3_t_725341337_0  CharacterMotor_ApplyInputVelocityChange_m_2019761450_0 (CharacterMotor_t_591596366_0 * __this, Vector3_t_725341337_0  ___velocity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 CharacterMotor::ApplyGravityAndJumping(UnityEngine.Vector3)
extern "C"  Vector3_t_725341337_0  CharacterMotor_ApplyGravityAndJumping_m560798178_0 (CharacterMotor_t_591596366_0 * __this, Vector3_t_725341337_0  ___velocity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterMotor::OnControllerColliderHit(UnityEngine.ControllerColliderHit)
extern "C"  void CharacterMotor_OnControllerColliderHit_m847152032_0 (CharacterMotor_t_591596366_0 * __this, ControllerColliderHit_t_384325222_0 * ___hit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator CharacterMotor::SubtractNewPlatformVelocity()
extern "C"  Object_t * CharacterMotor_SubtractNewPlatformVelocity_m_1317891988_0 (CharacterMotor_t_591596366_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CharacterMotor::MoveWithPlatform()
extern "C"  bool CharacterMotor_MoveWithPlatform_m1269339432_0 (CharacterMotor_t_591596366_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 CharacterMotor::GetDesiredHorizontalVelocity()
extern "C"  Vector3_t_725341337_0  CharacterMotor_GetDesiredHorizontalVelocity_m_1188806593_0 (CharacterMotor_t_591596366_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 CharacterMotor::AdjustGroundVelocityToNormal(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t_725341337_0  CharacterMotor_AdjustGroundVelocityToNormal_m_1857193699_0 (CharacterMotor_t_591596366_0 * __this, Vector3_t_725341337_0  ___hVelocity, Vector3_t_725341337_0  ___groundNormal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CharacterMotor::IsGroundedTest()
extern "C"  bool CharacterMotor_IsGroundedTest_m1392628992_0 (CharacterMotor_t_591596366_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CharacterMotor::GetMaxAcceleration(System.Boolean)
extern "C"  float CharacterMotor_GetMaxAcceleration_m371706609_0 (CharacterMotor_t_591596366_0 * __this, bool ___grounded, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CharacterMotor::CalculateJumpVerticalSpeed(System.Single)
extern "C"  float CharacterMotor_CalculateJumpVerticalSpeed_m1458037698_0 (CharacterMotor_t_591596366_0 * __this, float ___targetJumpHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CharacterMotor::IsJumping()
extern "C"  bool CharacterMotor_IsJumping_m1746915502_0 (CharacterMotor_t_591596366_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CharacterMotor::IsSliding()
extern "C"  bool CharacterMotor_IsSliding_m260706152_0 (CharacterMotor_t_591596366_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CharacterMotor::IsTouchingCeiling()
extern "C"  bool CharacterMotor_IsTouchingCeiling_m75112500_0 (CharacterMotor_t_591596366_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CharacterMotor::IsGrounded()
extern "C"  bool CharacterMotor_IsGrounded_m_496144562_0 (CharacterMotor_t_591596366_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CharacterMotor::TooSteep()
extern "C"  bool CharacterMotor_TooSteep_m276062457_0 (CharacterMotor_t_591596366_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 CharacterMotor::GetDirection()
extern "C"  Vector3_t_725341337_0  CharacterMotor_GetDirection_m147030883_0 (CharacterMotor_t_591596366_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterMotor::SetControllable(System.Boolean)
extern "C"  void CharacterMotor_SetControllable_m1224300484_0 (CharacterMotor_t_591596366_0 * __this, bool ___controllable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CharacterMotor::MaxSpeedInDirection(UnityEngine.Vector3)
extern "C"  float CharacterMotor_MaxSpeedInDirection_m_1421519060_0 (CharacterMotor_t_591596366_0 * __this, Vector3_t_725341337_0  ___desiredMovementDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterMotor::SetVelocity(UnityEngine.Vector3)
extern "C"  void CharacterMotor_SetVelocity_m_1677256616_0 (CharacterMotor_t_591596366_0 * __this, Vector3_t_725341337_0  ___velocity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterMotor::Main()
extern "C"  void CharacterMotor_Main_m_2146952615_0 (CharacterMotor_t_591596366_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
