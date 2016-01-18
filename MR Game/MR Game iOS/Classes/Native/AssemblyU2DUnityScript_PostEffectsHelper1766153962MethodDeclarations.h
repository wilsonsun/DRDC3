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

// PostEffectsHelper
struct PostEffectsHelper_t1766153962_0;
// UnityEngine.RenderTexture
struct RenderTexture_t1203146108_0;
// UnityEngine.Material
struct Material_t1701708784_0;
// UnityEngine.Camera
struct Camera_t814710830_0;

#include "codegen/il2cpp-codegen.h"

// System.Void PostEffectsHelper::.ctor()
extern "C"  void PostEffectsHelper__ctor_m1557567014_0 (PostEffectsHelper_t1766153962_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsHelper::Start()
extern "C"  void PostEffectsHelper_Start_m504704806_0 (PostEffectsHelper_t1766153962_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsHelper::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void PostEffectsHelper_OnRenderImage_m_1374103944_0 (PostEffectsHelper_t1766153962_0 * __this, RenderTexture_t1203146108_0 * ___source, RenderTexture_t1203146108_0 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsHelper::DrawLowLevelPlaneAlignedWithCamera(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Camera)
extern "C"  void PostEffectsHelper_DrawLowLevelPlaneAlignedWithCamera_m202260292_0 (Object_t * __this /* static, unused */, float ___dist, RenderTexture_t1203146108_0 * ___source, RenderTexture_t1203146108_0 * ___dest, Material_t1701708784_0 * ___material, Camera_t814710830_0 * ___cameraForProjectionMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsHelper::DrawBorder(UnityEngine.RenderTexture,UnityEngine.Material)
extern "C"  void PostEffectsHelper_DrawBorder_m_1627525518_0 (Object_t * __this /* static, unused */, RenderTexture_t1203146108_0 * ___dest, Material_t1701708784_0 * ___material, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsHelper::DrawLowLevelQuad(System.Single,System.Single,System.Single,System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material)
extern "C"  void PostEffectsHelper_DrawLowLevelQuad_m_94349045_0 (Object_t * __this /* static, unused */, float ___x1, float ___x2, float ___y1, float ___y2, RenderTexture_t1203146108_0 * ___source, RenderTexture_t1203146108_0 * ___dest, Material_t1701708784_0 * ___material, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsHelper::Main()
extern "C"  void PostEffectsHelper_Main_m_34261545_0 (PostEffectsHelper_t1766153962_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
