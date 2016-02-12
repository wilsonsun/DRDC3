﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AnimationCurve
struct AnimationCurve_t27601876_0;
struct AnimationCurve_t27601876_0_marshaled;
// UnityEngine.Material
struct Material_t1701708784_0;
// UnityEngine.Texture2D
struct Texture2D_t_485082364_0;
// UnityEngine.Shader
struct Shader_t1278883054_0;

#include "AssemblyU2DUnityScript_PostEffectsBase_302254835.h"
#include "UnityEngine_UnityEngine_Color_388944582.h"
#include "AssemblyU2DUnityScript_ColorCorrectionMode_1472615874.h"

// ColorCorrectionCurves
struct  ColorCorrectionCurves_t1875039039_0  : public PostEffectsBase_t_302254835_0
{
	// UnityEngine.AnimationCurve ColorCorrectionCurves::redChannel
	AnimationCurve_t27601876_0 * ___redChannel_5;
	// UnityEngine.AnimationCurve ColorCorrectionCurves::greenChannel
	AnimationCurve_t27601876_0 * ___greenChannel_6;
	// UnityEngine.AnimationCurve ColorCorrectionCurves::blueChannel
	AnimationCurve_t27601876_0 * ___blueChannel_7;
	// System.Boolean ColorCorrectionCurves::useDepthCorrection
	bool ___useDepthCorrection_8;
	// UnityEngine.AnimationCurve ColorCorrectionCurves::zCurve
	AnimationCurve_t27601876_0 * ___zCurve_9;
	// UnityEngine.AnimationCurve ColorCorrectionCurves::depthRedChannel
	AnimationCurve_t27601876_0 * ___depthRedChannel_10;
	// UnityEngine.AnimationCurve ColorCorrectionCurves::depthGreenChannel
	AnimationCurve_t27601876_0 * ___depthGreenChannel_11;
	// UnityEngine.AnimationCurve ColorCorrectionCurves::depthBlueChannel
	AnimationCurve_t27601876_0 * ___depthBlueChannel_12;
	// UnityEngine.Material ColorCorrectionCurves::ccMaterial
	Material_t1701708784_0 * ___ccMaterial_13;
	// UnityEngine.Material ColorCorrectionCurves::ccDepthMaterial
	Material_t1701708784_0 * ___ccDepthMaterial_14;
	// UnityEngine.Material ColorCorrectionCurves::selectiveCcMaterial
	Material_t1701708784_0 * ___selectiveCcMaterial_15;
	// UnityEngine.Texture2D ColorCorrectionCurves::rgbChannelTex
	Texture2D_t_485082364_0 * ___rgbChannelTex_16;
	// UnityEngine.Texture2D ColorCorrectionCurves::rgbDepthChannelTex
	Texture2D_t_485082364_0 * ___rgbDepthChannelTex_17;
	// UnityEngine.Texture2D ColorCorrectionCurves::zCurveTex
	Texture2D_t_485082364_0 * ___zCurveTex_18;
	// System.Single ColorCorrectionCurves::saturation
	float ___saturation_19;
	// System.Boolean ColorCorrectionCurves::selectiveCc
	bool ___selectiveCc_20;
	// UnityEngine.Color ColorCorrectionCurves::selectiveFromColor
	Color_t_388944582_0  ___selectiveFromColor_21;
	// UnityEngine.Color ColorCorrectionCurves::selectiveToColor
	Color_t_388944582_0  ___selectiveToColor_22;
	// ColorCorrectionMode ColorCorrectionCurves::mode
	int32_t ___mode_23;
	// System.Boolean ColorCorrectionCurves::updateTextures
	bool ___updateTextures_24;
	// UnityEngine.Shader ColorCorrectionCurves::colorCorrectionCurvesShader
	Shader_t1278883054_0 * ___colorCorrectionCurvesShader_25;
	// UnityEngine.Shader ColorCorrectionCurves::simpleColorCorrectionCurvesShader
	Shader_t1278883054_0 * ___simpleColorCorrectionCurvesShader_26;
	// UnityEngine.Shader ColorCorrectionCurves::colorCorrectionSelectiveShader
	Shader_t1278883054_0 * ___colorCorrectionSelectiveShader_27;
	// System.Boolean ColorCorrectionCurves::updateTexturesOnStartup
	bool ___updateTexturesOnStartup_28;
};
