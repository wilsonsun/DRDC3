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

// DepthOfFieldScatter
struct DepthOfFieldScatter_t_1396451496_0;
// UnityEngine.RenderTexture
struct RenderTexture_t1203146108_0;

#include "codegen/il2cpp-codegen.h"

// System.Void DepthOfFieldScatter::.ctor()
extern "C"  void DepthOfFieldScatter__ctor_m187800120_0 (DepthOfFieldScatter_t_1396451496_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DepthOfFieldScatter::CheckResources()
extern "C"  bool DepthOfFieldScatter_CheckResources_m615102155_0 (DepthOfFieldScatter_t_1396451496_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfFieldScatter::OnEnable()
extern "C"  void DepthOfFieldScatter_OnEnable_m482566734_0 (DepthOfFieldScatter_t_1396451496_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfFieldScatter::OnDisable()
extern "C"  void DepthOfFieldScatter_OnDisable_m_1779363169_0 (DepthOfFieldScatter_t_1396451496_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfFieldScatter::ReleaseComputeResources()
extern "C"  void DepthOfFieldScatter_ReleaseComputeResources_m2113795243_0 (DepthOfFieldScatter_t_1396451496_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfFieldScatter::CreateComputeResources()
extern "C"  void DepthOfFieldScatter_CreateComputeResources_m_235575914_0 (DepthOfFieldScatter_t_1396451496_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DepthOfFieldScatter::FocalDistance01(System.Single)
extern "C"  float DepthOfFieldScatter_FocalDistance01_m_281773970_0 (DepthOfFieldScatter_t_1396451496_0 * __this, float ___worldDist, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfFieldScatter::WriteCoc(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Boolean)
extern "C"  void DepthOfFieldScatter_WriteCoc_m1764556993_0 (DepthOfFieldScatter_t_1396451496_0 * __this, RenderTexture_t1203146108_0 * ___fromTo, RenderTexture_t1203146108_0 * ___temp1, RenderTexture_t1203146108_0 * ___temp2, bool ___fgDilate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfFieldScatter::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void DepthOfFieldScatter_OnRenderImage_m105881382_0 (DepthOfFieldScatter_t_1396451496_0 * __this, RenderTexture_t1203146108_0 * ___source, RenderTexture_t1203146108_0 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfFieldScatter::Main()
extern "C"  void DepthOfFieldScatter_Main_m_1325373563_0 (DepthOfFieldScatter_t_1396451496_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
