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
// UnityEngine.Texture2D
struct Texture2D_t_485082364_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"
#include "AssemblyU2DCSharp_SSAOEffect_SSAOSamples1457697254.h"

// SSAOEffect
struct  SSAOEffect_t_291616038_0  : public MonoBehaviour_t_92453903_0
{
	// System.Single SSAOEffect::m_Radius
	float ___m_Radius_2;
	// SSAOEffect/SSAOSamples SSAOEffect::m_SampleCount
	int32_t ___m_SampleCount_3;
	// System.Single SSAOEffect::m_OcclusionIntensity
	float ___m_OcclusionIntensity_4;
	// System.Int32 SSAOEffect::m_Blur
	int32_t ___m_Blur_5;
	// System.Int32 SSAOEffect::m_Downsampling
	int32_t ___m_Downsampling_6;
	// System.Single SSAOEffect::m_OcclusionAttenuation
	float ___m_OcclusionAttenuation_7;
	// System.Single SSAOEffect::m_MinZ
	float ___m_MinZ_8;
	// UnityEngine.Shader SSAOEffect::m_SSAOShader
	Shader_t1278883054_0 * ___m_SSAOShader_9;
	// UnityEngine.Material SSAOEffect::m_SSAOMaterial
	Material_t1701708784_0 * ___m_SSAOMaterial_10;
	// UnityEngine.Texture2D SSAOEffect::m_RandomTexture
	Texture2D_t_485082364_0 * ___m_RandomTexture_11;
	// System.Boolean SSAOEffect::m_Supported
	bool ___m_Supported_12;
};
