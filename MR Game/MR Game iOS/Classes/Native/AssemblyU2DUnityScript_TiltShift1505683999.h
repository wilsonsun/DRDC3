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

// TiltShift
struct  TiltShift_t1505683999_0  : public PostEffectsBase_t_302254835_0
{
	// UnityEngine.Shader TiltShift::tiltShiftShader
	Shader_t1278883054_0 * ___tiltShiftShader_5;
	// UnityEngine.Material TiltShift::tiltShiftMaterial
	Material_t1701708784_0 * ___tiltShiftMaterial_6;
	// System.Int32 TiltShift::renderTextureDivider
	int32_t ___renderTextureDivider_7;
	// System.Int32 TiltShift::blurIterations
	int32_t ___blurIterations_8;
	// System.Boolean TiltShift::enableForegroundBlur
	bool ___enableForegroundBlur_9;
	// System.Int32 TiltShift::foregroundBlurIterations
	int32_t ___foregroundBlurIterations_10;
	// System.Single TiltShift::maxBlurSpread
	float ___maxBlurSpread_11;
	// System.Single TiltShift::focalPoint
	float ___focalPoint_12;
	// System.Single TiltShift::smoothness
	float ___smoothness_13;
	// System.Boolean TiltShift::visualizeCoc
	bool ___visualizeCoc_14;
	// System.Single TiltShift::start01
	float ___start01_15;
	// System.Single TiltShift::distance01
	float ___distance01_16;
	// System.Single TiltShift::end01
	float ___end01_17;
	// System.Single TiltShift::curve
	float ___curve_18;
};
