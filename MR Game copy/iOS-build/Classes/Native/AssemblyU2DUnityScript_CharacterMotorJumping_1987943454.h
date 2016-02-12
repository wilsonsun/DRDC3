#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object_887538054.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// CharacterMotorJumping
struct  CharacterMotorJumping_t_1987943454_0  : public Object_t
{
	// System.Boolean CharacterMotorJumping::enabled
	bool ___enabled_0;
	// System.Single CharacterMotorJumping::baseHeight
	float ___baseHeight_1;
	// System.Single CharacterMotorJumping::extraHeight
	float ___extraHeight_2;
	// System.Single CharacterMotorJumping::perpAmount
	float ___perpAmount_3;
	// System.Single CharacterMotorJumping::steepPerpAmount
	float ___steepPerpAmount_4;
	// System.Boolean CharacterMotorJumping::jumping
	bool ___jumping_5;
	// System.Boolean CharacterMotorJumping::holdingJumpButton
	bool ___holdingJumpButton_6;
	// System.Single CharacterMotorJumping::lastStartTime
	float ___lastStartTime_7;
	// System.Single CharacterMotorJumping::lastButtonDownTime
	float ___lastButtonDownTime_8;
	// UnityEngine.Vector3 CharacterMotorJumping::jumpDir
	Vector3_t_725341337_0  ___jumpDir_9;
};
