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

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"
#include "UnityEngine_UnityEngine_Color_388944582.h"

// GlowEffect
struct  GlowEffect_t_464836935_0  : public MonoBehaviour_t_92453903_0
{
	// System.Single GlowEffect::glowIntensity
	float ___glowIntensity_2;
	// System.Int32 GlowEffect::blurIterations
	int32_t ___blurIterations_3;
	// System.Single GlowEffect::blurSpread
	float ___blurSpread_4;
	// UnityEngine.Color GlowEffect::glowTint
	Color_t_388944582_0  ___glowTint_5;
	// UnityEngine.Shader GlowEffect::compositeShader
	Shader_t1278883054_0 * ___compositeShader_6;
	// UnityEngine.Material GlowEffect::m_CompositeMaterial
	Material_t1701708784_0 * ___m_CompositeMaterial_7;
	// UnityEngine.Shader GlowEffect::blurShader
	Shader_t1278883054_0 * ___blurShader_8;
	// UnityEngine.Material GlowEffect::m_BlurMaterial
	Material_t1701708784_0 * ___m_BlurMaterial_9;
	// UnityEngine.Shader GlowEffect::downsampleShader
	Shader_t1278883054_0 * ___downsampleShader_10;
	// UnityEngine.Material GlowEffect::m_DownsampleMaterial
	Material_t1701708784_0 * ___m_DownsampleMaterial_11;
};
