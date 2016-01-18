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

// DepthOfField34
struct DepthOfField34_t_2068807321_0;
// UnityEngine.RenderTexture
struct RenderTexture_t1203146108_0;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DUnityScript_DofBlurriness_243477206.h"

// System.Void DepthOfField34::.ctor()
extern "C"  void DepthOfField34__ctor_m_1739116337_0 (DepthOfField34_t_2068807321_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfField34::.cctor()
extern "C"  void DepthOfField34__cctor_m1439872190_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfField34::CreateMaterials()
extern "C"  void DepthOfField34_CreateMaterials_m2046039421_0 (DepthOfField34_t_2068807321_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DepthOfField34::CheckResources()
extern "C"  bool DepthOfField34_CheckResources_m1478491472_0 (DepthOfField34_t_2068807321_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfField34::OnDisable()
extern "C"  void DepthOfField34_OnDisable_m1386972598_0 (DepthOfField34_t_2068807321_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfField34::OnEnable()
extern "C"  void DepthOfField34_OnEnable_m_2047692713_0 (DepthOfField34_t_2068807321_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DepthOfField34::FocalDistance01(System.Single)
extern "C"  float DepthOfField34_FocalDistance01_m_620277105_0 (DepthOfField34_t_2068807321_0 * __this, float ___worldDist, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DepthOfField34::GetDividerBasedOnQuality()
extern "C"  int32_t DepthOfField34_GetDividerBasedOnQuality_m1571877277_0 (DepthOfField34_t_2068807321_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DepthOfField34::GetLowResolutionDividerBasedOnQuality(System.Int32)
extern "C"  int32_t DepthOfField34_GetLowResolutionDividerBasedOnQuality_m1541090306_0 (DepthOfField34_t_2068807321_0 * __this, int32_t ___baseDivider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfField34::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void DepthOfField34_OnRenderImage_m_2089730513_0 (DepthOfField34_t_2068807321_0 * __this, RenderTexture_t1203146108_0 * ___source, RenderTexture_t1203146108_0 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfField34::Blur(UnityEngine.RenderTexture,UnityEngine.RenderTexture,DofBlurriness,System.Int32,System.Single)
extern "C"  void DepthOfField34_Blur_m1707189946_0 (DepthOfField34_t_2068807321_0 * __this, RenderTexture_t1203146108_0 * ___from, RenderTexture_t1203146108_0 * ___to, int32_t ___iterations, int32_t ___blurPass, float ___spread, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfField34::BlurFg(UnityEngine.RenderTexture,UnityEngine.RenderTexture,DofBlurriness,System.Int32,System.Single)
extern "C"  void DepthOfField34_BlurFg_m1118807323_0 (DepthOfField34_t_2068807321_0 * __this, RenderTexture_t1203146108_0 * ___from, RenderTexture_t1203146108_0 * ___to, int32_t ___iterations, int32_t ___blurPass, float ___spread, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfField34::BlurHex(UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Int32,System.Single,UnityEngine.RenderTexture)
extern "C"  void DepthOfField34_BlurHex_m_709503559_0 (DepthOfField34_t_2068807321_0 * __this, RenderTexture_t1203146108_0 * ___from, RenderTexture_t1203146108_0 * ___to, int32_t ___blurPass, float ___spread, RenderTexture_t1203146108_0 * ___tmp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfField34::Downsample(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void DepthOfField34_Downsample_m1745147009_0 (DepthOfField34_t_2068807321_0 * __this, RenderTexture_t1203146108_0 * ___from, RenderTexture_t1203146108_0 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfField34::AddBokeh(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void DepthOfField34_AddBokeh_m585189675_0 (DepthOfField34_t_2068807321_0 * __this, RenderTexture_t1203146108_0 * ___bokehInfo, RenderTexture_t1203146108_0 * ___tempTex, RenderTexture_t1203146108_0 * ___finalTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfField34::ReleaseTextures()
extern "C"  void DepthOfField34_ReleaseTextures_m_2037299444_0 (DepthOfField34_t_2068807321_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfField34::AllocateTextures(System.Boolean,UnityEngine.RenderTexture,System.Int32,System.Int32)
extern "C"  void DepthOfField34_AllocateTextures_m_607769825_0 (DepthOfField34_t_2068807321_0 * __this, bool ___blurForeground, RenderTexture_t1203146108_0 * ___source, int32_t ___divider, int32_t ___lowTexDivider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfField34::Main()
extern "C"  void DepthOfField34_Main_m_971890162_0 (DepthOfField34_t_2068807321_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
