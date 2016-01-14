#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t1584899523_0;

#include "mscorlib_System_Object_887538054.h"
#include "AssemblyU2DUnityScript_MovementTransferOnJump_1175636755.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"
#include "UnityEngine_UnityEngine_Quaternion1989680039.h"
#include "UnityEngine_UnityEngine_Matrix4x41577636070.h"

// CharacterMotorMovingPlatform
struct  CharacterMotorMovingPlatform_t_1971984333_0  : public Object_t
{
	// System.Boolean CharacterMotorMovingPlatform::enabled
	bool ___enabled_0;
	// MovementTransferOnJump CharacterMotorMovingPlatform::movementTransfer
	int32_t ___movementTransfer_1;
	// UnityEngine.Transform CharacterMotorMovingPlatform::hitPlatform
	Transform_t1584899523_0 * ___hitPlatform_2;
	// UnityEngine.Transform CharacterMotorMovingPlatform::activePlatform
	Transform_t1584899523_0 * ___activePlatform_3;
	// UnityEngine.Vector3 CharacterMotorMovingPlatform::activeLocalPoint
	Vector3_t_725341337_0  ___activeLocalPoint_4;
	// UnityEngine.Vector3 CharacterMotorMovingPlatform::activeGlobalPoint
	Vector3_t_725341337_0  ___activeGlobalPoint_5;
	// UnityEngine.Quaternion CharacterMotorMovingPlatform::activeLocalRotation
	Quaternion_t1989680039_0  ___activeLocalRotation_6;
	// UnityEngine.Quaternion CharacterMotorMovingPlatform::activeGlobalRotation
	Quaternion_t1989680039_0  ___activeGlobalRotation_7;
	// UnityEngine.Matrix4x4 CharacterMotorMovingPlatform::lastMatrix
	Matrix4x4_t1577636070_0  ___lastMatrix_8;
	// UnityEngine.Vector3 CharacterMotorMovingPlatform::platformVelocity
	Vector3_t_725341337_0  ___platformVelocity_9;
	// System.Boolean CharacterMotorMovingPlatform::newPlatform
	bool ___newPlatform_10;
};
