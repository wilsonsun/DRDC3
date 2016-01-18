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
#include "AssemblyU2DUnityScript_AAMode_142486103.h"

// AntialiasingAsPostEffect
struct  AntialiasingAsPostEffect_t562998685_0  : public PostEffectsBase_t_302254835_0
{
	// AAMode AntialiasingAsPostEffect::mode
	int32_t ___mode_5;
	// System.Boolean AntialiasingAsPostEffect::showGeneratedNormals
	bool ___showGeneratedNormals_6;
	// System.Single AntialiasingAsPostEffect::offsetScale
	float ___offsetScale_7;
	// System.Single AntialiasingAsPostEffect::blurRadius
	float ___blurRadius_8;
	// System.Single AntialiasingAsPostEffect::edgeThresholdMin
	float ___edgeThresholdMin_9;
	// System.Single AntialiasingAsPostEffect::edgeThreshold
	float ___edgeThreshold_10;
	// System.Single AntialiasingAsPostEffect::edgeSharpness
	float ___edgeSharpness_11;
	// System.Boolean AntialiasingAsPostEffect::dlaaSharp
	bool ___dlaaSharp_12;
	// UnityEngine.Shader AntialiasingAsPostEffect::ssaaShader
	Shader_t1278883054_0 * ___ssaaShader_13;
	// UnityEngine.Material AntialiasingAsPostEffect::ssaa
	Material_t1701708784_0 * ___ssaa_14;
	// UnityEngine.Shader AntialiasingAsPostEffect::dlaaShader
	Shader_t1278883054_0 * ___dlaaShader_15;
	// UnityEngine.Material AntialiasingAsPostEffect::dlaa
	Material_t1701708784_0 * ___dlaa_16;
	// UnityEngine.Shader AntialiasingAsPostEffect::nfaaShader
	Shader_t1278883054_0 * ___nfaaShader_17;
	// UnityEngine.Material AntialiasingAsPostEffect::nfaa
	Material_t1701708784_0 * ___nfaa_18;
	// UnityEngine.Shader AntialiasingAsPostEffect::shaderFXAAPreset2
	Shader_t1278883054_0 * ___shaderFXAAPreset2_19;
	// UnityEngine.Material AntialiasingAsPostEffect::materialFXAAPreset2
	Material_t1701708784_0 * ___materialFXAAPreset2_20;
	// UnityEngine.Shader AntialiasingAsPostEffect::shaderFXAAPreset3
	Shader_t1278883054_0 * ___shaderFXAAPreset3_21;
	// UnityEngine.Material AntialiasingAsPostEffect::materialFXAAPreset3
	Material_t1701708784_0 * ___materialFXAAPreset3_22;
	// UnityEngine.Shader AntialiasingAsPostEffect::shaderFXAAII
	Shader_t1278883054_0 * ___shaderFXAAII_23;
	// UnityEngine.Material AntialiasingAsPostEffect::materialFXAAII
	Material_t1701708784_0 * ___materialFXAAII_24;
	// UnityEngine.Shader AntialiasingAsPostEffect::shaderFXAAIII
	Shader_t1278883054_0 * ___shaderFXAAIII_25;
	// UnityEngine.Material AntialiasingAsPostEffect::materialFXAAIII
	Material_t1701708784_0 * ___materialFXAAIII_26;
};
