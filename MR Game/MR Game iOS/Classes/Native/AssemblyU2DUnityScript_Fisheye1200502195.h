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

// Fisheye
struct  Fisheye_t1200502195_0  : public PostEffectsBase_t_302254835_0
{
	// System.Single Fisheye::strengthX
	float ___strengthX_5;
	// System.Single Fisheye::strengthY
	float ___strengthY_6;
	// UnityEngine.Shader Fisheye::fishEyeShader
	Shader_t1278883054_0 * ___fishEyeShader_7;
	// UnityEngine.Material Fisheye::fisheyeMaterial
	Material_t1701708784_0 * ___fisheyeMaterial_8;
};
