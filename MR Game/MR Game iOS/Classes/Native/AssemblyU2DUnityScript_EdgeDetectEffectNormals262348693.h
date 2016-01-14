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
#include "AssemblyU2DUnityScript_EdgeDetectMode_374496663.h"
#include "UnityEngine_UnityEngine_Color_388944582.h"

// EdgeDetectEffectNormals
struct  EdgeDetectEffectNormals_t262348693_0  : public PostEffectsBase_t_302254835_0
{
	// EdgeDetectMode EdgeDetectEffectNormals::mode
	int32_t ___mode_5;
	// System.Single EdgeDetectEffectNormals::sensitivityDepth
	float ___sensitivityDepth_6;
	// System.Single EdgeDetectEffectNormals::sensitivityNormals
	float ___sensitivityNormals_7;
	// System.Single EdgeDetectEffectNormals::edgeExp
	float ___edgeExp_8;
	// System.Single EdgeDetectEffectNormals::sampleDist
	float ___sampleDist_9;
	// System.Single EdgeDetectEffectNormals::edgesOnly
	float ___edgesOnly_10;
	// UnityEngine.Color EdgeDetectEffectNormals::edgesOnlyBgColor
	Color_t_388944582_0  ___edgesOnlyBgColor_11;
	// UnityEngine.Shader EdgeDetectEffectNormals::edgeDetectShader
	Shader_t1278883054_0 * ___edgeDetectShader_12;
	// UnityEngine.Material EdgeDetectEffectNormals::edgeDetectMaterial
	Material_t1701708784_0 * ___edgeDetectMaterial_13;
	// EdgeDetectMode EdgeDetectEffectNormals::oldMode
	int32_t ___oldMode_14;
};
