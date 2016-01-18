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
#include "AssemblyU2DUnityScript_ScreenOverlay_OverlayBlendMo622987669.h"

// ScreenOverlay
struct  ScreenOverlay_t_709566562_0  : public PostEffectsBase_t_302254835_0
{
	// ScreenOverlay/OverlayBlendMode ScreenOverlay::blendMode
	int32_t ___blendMode_5;
	// System.Single ScreenOverlay::intensity
	float ___intensity_6;
	// UnityEngine.Texture2D ScreenOverlay::texture
	Texture2D_t_485082364_0 * ___texture_7;
	// UnityEngine.Shader ScreenOverlay::overlayShader
	Shader_t1278883054_0 * ___overlayShader_8;
	// UnityEngine.Material ScreenOverlay::overlayMaterial
	Material_t1701708784_0 * ___overlayMaterial_9;
};
