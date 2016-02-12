#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Shader
struct Shader_t1278883054_0;
// UnityEngine.Material
struct Material_t1701708784_0;

#include "AssemblyU2DUnityScript_PostEffectsBase_302254835.h"
#include "AssemblyU2DUnityScript_GlobalFog_FogMode534452167.h"
#include "UnityEngine_UnityEngine_Color_388944582.h"

// GlobalFog
struct  GlobalFog_t_1968513931_0  : public PostEffectsBase_t_302254835_0
{
	// GlobalFog/FogMode GlobalFog::fogMode
	int32_t ___fogMode_5;
	// System.Single GlobalFog::CAMERA_NEAR
	float ___CAMERA_NEAR_6;
	// System.Single GlobalFog::CAMERA_FAR
	float ___CAMERA_FAR_7;
	// System.Single GlobalFog::CAMERA_FOV
	float ___CAMERA_FOV_8;
	// System.Single GlobalFog::CAMERA_ASPECT_RATIO
	float ___CAMERA_ASPECT_RATIO_9;
	// System.Single GlobalFog::startDistance
	float ___startDistance_10;
	// System.Single GlobalFog::globalDensity
	float ___globalDensity_11;
	// System.Single GlobalFog::heightScale
	float ___heightScale_12;
	// System.Single GlobalFog::height
	float ___height_13;
	// UnityEngine.Color GlobalFog::globalFogColor
	Color_t_388944582_0  ___globalFogColor_14;
	// UnityEngine.Shader GlobalFog::fogShader
	Shader_t1278883054_0 * ___fogShader_15;
	// UnityEngine.Material GlobalFog::fogMaterial
	Material_t1701708784_0 * ___fogMaterial_16;
};
