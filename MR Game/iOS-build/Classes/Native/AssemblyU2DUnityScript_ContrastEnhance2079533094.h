#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t1701708784_0;
// UnityEngine.Shader
struct Shader_t1278883054_0;

#include "AssemblyU2DUnityScript_PostEffectsBase_302254835.h"

// ContrastEnhance
struct  ContrastEnhance_t2079533094_0  : public PostEffectsBase_t_302254835_0
{
	// System.Single ContrastEnhance::intensity
	float ___intensity_5;
	// System.Single ContrastEnhance::threshhold
	float ___threshhold_6;
	// UnityEngine.Material ContrastEnhance::separableBlurMaterial
	Material_t1701708784_0 * ___separableBlurMaterial_7;
	// UnityEngine.Material ContrastEnhance::contrastCompositeMaterial
	Material_t1701708784_0 * ___contrastCompositeMaterial_8;
	// System.Single ContrastEnhance::blurSpread
	float ___blurSpread_9;
	// UnityEngine.Shader ContrastEnhance::separableBlurShader
	Shader_t1278883054_0 * ___separableBlurShader_10;
	// UnityEngine.Shader ContrastEnhance::contrastCompositeShader
	Shader_t1278883054_0 * ___contrastCompositeShader_11;
};
