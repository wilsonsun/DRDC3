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
#include "AssemblyU2DUnityScript_Vignetting_AberrationMode1375473958.h"

// Vignetting
struct  Vignetting_t_1588897699_0  : public PostEffectsBase_t_302254835_0
{
	// Vignetting/AberrationMode Vignetting::mode
	int32_t ___mode_5;
	// System.Single Vignetting::intensity
	float ___intensity_6;
	// System.Single Vignetting::chromaticAberration
	float ___chromaticAberration_7;
	// System.Single Vignetting::axialAberration
	float ___axialAberration_8;
	// System.Single Vignetting::blur
	float ___blur_9;
	// System.Single Vignetting::blurSpread
	float ___blurSpread_10;
	// System.Single Vignetting::luminanceDependency
	float ___luminanceDependency_11;
	// UnityEngine.Shader Vignetting::vignetteShader
	Shader_t1278883054_0 * ___vignetteShader_12;
	// UnityEngine.Material Vignetting::vignetteMaterial
	Material_t1701708784_0 * ___vignetteMaterial_13;
	// UnityEngine.Shader Vignetting::separableBlurShader
	Shader_t1278883054_0 * ___separableBlurShader_14;
	// UnityEngine.Material Vignetting::separableBlurMaterial
	Material_t1701708784_0 * ___separableBlurMaterial_15;
	// UnityEngine.Shader Vignetting::chromAberrationShader
	Shader_t1278883054_0 * ___chromAberrationShader_16;
	// UnityEngine.Material Vignetting::chromAberrationMaterial
	Material_t1701708784_0 * ___chromAberrationMaterial_17;
};
