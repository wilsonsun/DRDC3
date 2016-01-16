#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RenderTexture
struct RenderTexture_t1203146108_0;

#include "AssemblyU2DCSharp_ImageEffectBase269039458.h"

// MotionBlur
struct  MotionBlur_t_978599304_0  : public ImageEffectBase_t269039458_0
{
	// System.Single MotionBlur::blurAmount
	float ___blurAmount_4;
	// System.Boolean MotionBlur::extraBlur
	bool ___extraBlur_5;
	// UnityEngine.RenderTexture MotionBlur::accumTexture
	RenderTexture_t1203146108_0 * ___accumTexture_6;
};
