#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// VirtualJoystick
struct VirtualJoystick_t_1387383540_0;
// UnityEngine.Rigidbody
struct Rigidbody_t_1022613340_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// PlayerMotor
struct  PlayerMotor_t1158565945_0  : public MonoBehaviour_t_92453903_0
{
	// System.Single PlayerMotor::moveSpeed
	float ___moveSpeed_2;
	// System.Single PlayerMotor::drag
	float ___drag_3;
	// System.Single PlayerMotor::terminalRotationSpeed
	float ___terminalRotationSpeed_4;
	// VirtualJoystick PlayerMotor::PosJoystick
	VirtualJoystick_t_1387383540_0 * ___PosJoystick_5;
	// VirtualJoystick PlayerMotor::AngleJoystick
	VirtualJoystick_t_1387383540_0 * ___AngleJoystick_6;
	// System.Single PlayerMotor::sensitivityX
	float ___sensitivityX_7;
	// UnityEngine.Rigidbody PlayerMotor::thisRigidbody
	Rigidbody_t_1022613340_0 * ___thisRigidbody_8;
	// UnityEngine.Vector3 PlayerMotor::<MoveVector>k__BackingField
	Vector3_t_725341337_0  ___U3CMoveVectorU3Ek__BackingField_9;
	// UnityEngine.Vector3 PlayerMotor::<AngleVector>k__BackingField
	Vector3_t_725341337_0  ___U3CAngleVectorU3Ek__BackingField_10;
};
