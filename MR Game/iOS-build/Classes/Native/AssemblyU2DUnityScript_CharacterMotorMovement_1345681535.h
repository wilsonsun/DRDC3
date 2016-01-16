#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AnimationCurve
struct AnimationCurve_t27601876_0;
struct AnimationCurve_t27601876_0_marshaled;

#include "mscorlib_System_Object_887538054.h"
#include "UnityEngine_UnityEngine_CollisionFlags1145113214.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// CharacterMotorMovement
struct  CharacterMotorMovement_t_1345681535_0  : public Object_t
{
	// System.Single CharacterMotorMovement::maxForwardSpeed
	float ___maxForwardSpeed_0;
	// System.Single CharacterMotorMovement::maxSidewaysSpeed
	float ___maxSidewaysSpeed_1;
	// System.Single CharacterMotorMovement::maxBackwardsSpeed
	float ___maxBackwardsSpeed_2;
	// UnityEngine.AnimationCurve CharacterMotorMovement::slopeSpeedMultiplier
	AnimationCurve_t27601876_0 * ___slopeSpeedMultiplier_3;
	// System.Single CharacterMotorMovement::maxGroundAcceleration
	float ___maxGroundAcceleration_4;
	// System.Single CharacterMotorMovement::maxAirAcceleration
	float ___maxAirAcceleration_5;
	// System.Single CharacterMotorMovement::gravity
	float ___gravity_6;
	// System.Single CharacterMotorMovement::maxFallSpeed
	float ___maxFallSpeed_7;
	// UnityEngine.CollisionFlags CharacterMotorMovement::collisionFlags
	int32_t ___collisionFlags_8;
	// UnityEngine.Vector3 CharacterMotorMovement::velocity
	Vector3_t_725341337_0  ___velocity_9;
	// UnityEngine.Vector3 CharacterMotorMovement::frameVelocity
	Vector3_t_725341337_0  ___frameVelocity_10;
	// UnityEngine.Vector3 CharacterMotorMovement::hitPoint
	Vector3_t_725341337_0  ___hitPoint_11;
	// UnityEngine.Vector3 CharacterMotorMovement::lastHitPoint
	Vector3_t_725341337_0  ___lastHitPoint_12;
};
