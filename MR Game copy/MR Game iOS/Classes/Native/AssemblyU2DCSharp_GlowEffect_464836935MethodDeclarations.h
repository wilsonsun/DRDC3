#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// GlowEffect
struct GlowEffect_t_464836935_0;
// UnityEngine.Material
struct Material_t1701708784_0;
// UnityEngine.RenderTexture
struct RenderTexture_t1203146108_0;

#include "codegen/il2cpp-codegen.h"

// System.Void GlowEffect::.ctor()
extern "C"  void GlowEffect__ctor_m_174935875_0 (GlowEffect_t_464836935_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material GlowEffect::get_compositeMaterial()
extern "C"  Material_t1701708784_0 * GlowEffect_get_compositeMaterial_m331963105_0 (GlowEffect_t_464836935_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material GlowEffect::get_blurMaterial()
extern "C"  Material_t1701708784_0 * GlowEffect_get_blurMaterial_m_389147555_0 (GlowEffect_t_464836935_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material GlowEffect::get_downsampleMaterial()
extern "C"  Material_t1701708784_0 * GlowEffect_get_downsampleMaterial_m_429119486_0 (GlowEffect_t_464836935_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GlowEffect::OnDisable()
extern "C"  void GlowEffect_OnDisable_m_1524015452_0 (GlowEffect_t_464836935_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GlowEffect::Start()
extern "C"  void GlowEffect_Start_m_1227798083_0 (GlowEffect_t_464836935_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GlowEffect::FourTapCone(UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Int32)
extern "C"  void GlowEffect_FourTapCone_m_1017449392_0 (GlowEffect_t_464836935_0 * __this, RenderTexture_t1203146108_0 * ___source, RenderTexture_t1203146108_0 * ___dest, int32_t ___iteration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GlowEffect::DownSample4x(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void GlowEffect_DownSample4x_m1638670987_0 (GlowEffect_t_464836935_0 * __this, RenderTexture_t1203146108_0 * ___source, RenderTexture_t1203146108_0 * ___dest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GlowEffect::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void GlowEffect_OnRenderImage_m1589735809_0 (GlowEffect_t_464836935_0 * __this, RenderTexture_t1203146108_0 * ___source, RenderTexture_t1203146108_0 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GlowEffect::BlitGlow(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void GlowEffect_BlitGlow_m1965346137_0 (GlowEffect_t_464836935_0 * __this, RenderTexture_t1203146108_0 * ___source, RenderTexture_t1203146108_0 * ___dest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
