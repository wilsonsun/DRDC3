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
// UnityEngine.Texture3D
struct Texture3D_t_485082333_0;
// System.String
struct String_t;

#include "AssemblyU2DUnityScript_PostEffectsBase_302254835.h"

// ColorCorrectionLut
struct  ColorCorrectionLut_t91042832_0  : public PostEffectsBase_t_302254835_0
{
	// UnityEngine.Shader ColorCorrectionLut::shader
	Shader_t1278883054_0 * ___shader_5;
	// UnityEngine.Material ColorCorrectionLut::material
	Material_t1701708784_0 * ___material_6;
	// UnityEngine.Texture3D ColorCorrectionLut::converted3DLut
	Texture3D_t_485082333_0 * ___converted3DLut_7;
	// System.String ColorCorrectionLut::basedOnTempTex
	String_t* ___basedOnTempTex_8;
};
