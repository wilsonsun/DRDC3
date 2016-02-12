#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t_485082364_0;
// UnityEngine.Shader
struct Shader_t1278883054_0;
// UnityEngine.Material
struct Material_t1701708784_0;

#include "AssemblyU2DUnityScript_PostEffectsBase_302254835.h"
#include "AssemblyU2DUnityScript_Bloom_TweakMode1875724125.h"
#include "AssemblyU2DUnityScript_Bloom_BloomScreenBlendMode1533886359.h"
#include "AssemblyU2DUnityScript_Bloom_HDRBloomMode_724693118.h"
#include "AssemblyU2DUnityScript_Bloom_BloomQuality_448681714.h"
#include "UnityEngine_UnityEngine_Color_388944582.h"
#include "AssemblyU2DUnityScript_Bloom_LensFlareStyle_117212877.h"

// Bloom
struct  Bloom_t1244566877_0  : public PostEffectsBase_t_302254835_0
{
	// Bloom/TweakMode Bloom::tweakMode
	int32_t ___tweakMode_5;
	// Bloom/BloomScreenBlendMode Bloom::screenBlendMode
	int32_t ___screenBlendMode_6;
	// Bloom/HDRBloomMode Bloom::hdr
	int32_t ___hdr_7;
	// System.Boolean Bloom::doHdr
	bool ___doHdr_8;
	// System.Single Bloom::sepBlurSpread
	float ___sepBlurSpread_9;
	// Bloom/BloomQuality Bloom::quality
	int32_t ___quality_10;
	// System.Single Bloom::bloomIntensity
	float ___bloomIntensity_11;
	// System.Single Bloom::bloomThreshhold
	float ___bloomThreshhold_12;
	// UnityEngine.Color Bloom::bloomThreshholdColor
	Color_t_388944582_0  ___bloomThreshholdColor_13;
	// System.Int32 Bloom::bloomBlurIterations
	int32_t ___bloomBlurIterations_14;
	// System.Int32 Bloom::hollywoodFlareBlurIterations
	int32_t ___hollywoodFlareBlurIterations_15;
	// System.Single Bloom::flareRotation
	float ___flareRotation_16;
	// Bloom/LensFlareStyle Bloom::lensflareMode
	int32_t ___lensflareMode_17;
	// System.Single Bloom::hollyStretchWidth
	float ___hollyStretchWidth_18;
	// System.Single Bloom::lensflareIntensity
	float ___lensflareIntensity_19;
	// System.Single Bloom::lensflareThreshhold
	float ___lensflareThreshhold_20;
	// System.Single Bloom::lensFlareSaturation
	float ___lensFlareSaturation_21;
	// UnityEngine.Color Bloom::flareColorA
	Color_t_388944582_0  ___flareColorA_22;
	// UnityEngine.Color Bloom::flareColorB
	Color_t_388944582_0  ___flareColorB_23;
	// UnityEngine.Color Bloom::flareColorC
	Color_t_388944582_0  ___flareColorC_24;
	// UnityEngine.Color Bloom::flareColorD
	Color_t_388944582_0  ___flareColorD_25;
	// System.Single Bloom::blurWidth
	float ___blurWidth_26;
	// UnityEngine.Texture2D Bloom::lensFlareVignetteMask
	Texture2D_t_485082364_0 * ___lensFlareVignetteMask_27;
	// UnityEngine.Shader Bloom::lensFlareShader
	Shader_t1278883054_0 * ___lensFlareShader_28;
	// UnityEngine.Material Bloom::lensFlareMaterial
	Material_t1701708784_0 * ___lensFlareMaterial_29;
	// UnityEngine.Shader Bloom::screenBlendShader
	Shader_t1278883054_0 * ___screenBlendShader_30;
	// UnityEngine.Material Bloom::screenBlend
	Material_t1701708784_0 * ___screenBlend_31;
	// UnityEngine.Shader Bloom::blurAndFlaresShader
	Shader_t1278883054_0 * ___blurAndFlaresShader_32;
	// UnityEngine.Material Bloom::blurAndFlaresMaterial
	Material_t1701708784_0 * ___blurAndFlaresMaterial_33;
	// UnityEngine.Shader Bloom::brightPassFilterShader
	Shader_t1278883054_0 * ___brightPassFilterShader_34;
	// UnityEngine.Material Bloom::brightPassFilterMaterial
	Material_t1701708784_0 * ___brightPassFilterMaterial_35;
};
