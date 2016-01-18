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

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// FocusWatch
struct  FocusWatch_t_1306660846_0  : public MonoBehaviour_t_92453903_0
{
	// UnityEngine.Transform FocusWatch::secondHand
	Transform_t1584899523_0 * ___secondHand_2;
	// UnityEngine.Vector3 FocusWatch::secondHandRot
	Vector3_t_725341337_0  ___secondHandRot_3;
	// UnityEngine.Vector3 FocusWatch::secondHandRotRate
	Vector3_t_725341337_0  ___secondHandRotRate_4;
	// System.Int32 FocusWatch::skipChance
	int32_t ___skipChance_5;
	// UnityEngine.Transform FocusWatch::secondHandClone
	Transform_t1584899523_0 * ___secondHandClone_6;
	// System.Single FocusWatch::timePassed
	float ___timePassed_7;
	// System.Int32 FocusWatch::rand
	int32_t ___rand_8;
};
