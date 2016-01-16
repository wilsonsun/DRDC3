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
// UnityEngine.Shader
struct Shader_t1278883054_0;
// UnityEngine.Material
struct Material_t1701708784_0;

#include "AssemblyU2DUnityScript_PostEffectsBase_302254835.h"
#include "AssemblyU2DUnityScript_SunShaftsResolution582104843.h"
#include "AssemblyU2DUnityScript_ShaftsScreenBlendMode258551657.h"
#include "UnityEngine_UnityEngine_Color_388944582.h"

// SunShafts
struct  SunShafts_t_693512961_0  : public PostEffectsBase_t_302254835_0
{
	// SunShaftsResolution SunShafts::resolution
	int32_t ___resolution_5;
	// ShaftsScreenBlendMode SunShafts::screenBlendMode
	int32_t ___screenBlendMode_6;
	// UnityEngine.Transform SunShafts::sunTransform
	Transform_t1584899523_0 * ___sunTransform_7;
	// System.Int32 SunShafts::radialBlurIterations
	int32_t ___radialBlurIterations_8;
	// UnityEngine.Color SunShafts::sunColor
	Color_t_388944582_0  ___sunColor_9;
	// System.Single SunShafts::sunShaftBlurRadius
	float ___sunShaftBlurRadius_10;
	// System.Single SunShafts::sunShaftIntensity
	float ___sunShaftIntensity_11;
	// System.Single SunShafts::useSkyBoxAlpha
	float ___useSkyBoxAlpha_12;
	// System.Single SunShafts::maxRadius
	float ___maxRadius_13;
	// System.Boolean SunShafts::useDepthTexture
	bool ___useDepthTexture_14;
	// UnityEngine.Shader SunShafts::sunShaftsShader
	Shader_t1278883054_0 * ___sunShaftsShader_15;
	// UnityEngine.Material SunShafts::sunShaftsMaterial
	Material_t1701708784_0 * ___sunShaftsMaterial_16;
	// UnityEngine.Shader SunShafts::simpleClearShader
	Shader_t1278883054_0 * ___simpleClearShader_17;
	// UnityEngine.Material SunShafts::simpleClearMaterial
	Material_t1701708784_0 * ___simpleClearMaterial_18;
};
