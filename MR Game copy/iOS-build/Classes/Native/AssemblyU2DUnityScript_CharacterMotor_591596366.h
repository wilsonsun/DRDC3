#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CharacterMotorMovement
struct CharacterMotorMovement_t_1345681535_0;
// CharacterMotorJumping
struct CharacterMotorJumping_t_1987943454_0;
// CharacterMotorMovingPlatform
struct CharacterMotorMovingPlatform_t_1971984333_0;
// CharacterMotorSliding
struct CharacterMotorSliding_t1442908444_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;
// UnityEngine.CharacterController
struct CharacterController_t_902802116_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// CharacterMotor
struct  CharacterMotor_t_591596366_0  : public MonoBehaviour_t_92453903_0
{
	// System.Boolean CharacterMotor::canControl
	bool ___canControl_2;
	// System.Boolean CharacterMotor::useFixedUpdate
	bool ___useFixedUpdate_3;
	// UnityEngine.Vector3 CharacterMotor::inputMoveDirection
	Vector3_t_725341337_0  ___inputMoveDirection_4;
	// System.Boolean CharacterMotor::inputJump
	bool ___inputJump_5;
	// CharacterMotorMovement CharacterMotor::movement
	CharacterMotorMovement_t_1345681535_0 * ___movement_6;
	// CharacterMotorJumping CharacterMotor::jumping
	CharacterMotorJumping_t_1987943454_0 * ___jumping_7;
	// CharacterMotorMovingPlatform CharacterMotor::movingPlatform
	CharacterMotorMovingPlatform_t_1971984333_0 * ___movingPlatform_8;
	// CharacterMotorSliding CharacterMotor::sliding
	CharacterMotorSliding_t1442908444_0 * ___sliding_9;
	// System.Boolean CharacterMotor::grounded
	bool ___grounded_10;
	// UnityEngine.Vector3 CharacterMotor::groundNormal
	Vector3_t_725341337_0  ___groundNormal_11;
	// UnityEngine.Vector3 CharacterMotor::lastGroundNormal
	Vector3_t_725341337_0  ___lastGroundNormal_12;
	// UnityEngine.Transform CharacterMotor::tr
	Transform_t1584899523_0 * ___tr_13;
	// UnityEngine.CharacterController CharacterMotor::controller
	CharacterController_t_902802116_0 * ___controller_14;
};
