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

// Bloom
struct Bloom_t1244566877_0;
// UnityEngine.RenderTexture
struct RenderTexture_t1203146108_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color_388944582.h"

// System.Void Bloom::.ctor()
extern "C"  void Bloom__ctor_m143899795_0 (Bloom_t1244566877_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Bloom::CheckResources()
extern "C"  bool Bloom_CheckResources_m277177936_0 (Bloom_t1244566877_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bloom::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void Bloom_OnRenderImage_m1745455083_0 (Bloom_t1244566877_0 * __this, RenderTexture_t1203146108_0 * ___source, RenderTexture_t1203146108_0 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bloom::AddTo(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void Bloom_AddTo_m_1429176486_0 (Bloom_t1244566877_0 * __this, float ___intensity_, RenderTexture_t1203146108_0 * ___from, RenderTexture_t1203146108_0 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bloom::BlendFlares(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void Bloom_BlendFlares_m_2128429605_0 (Bloom_t1244566877_0 * __this, RenderTexture_t1203146108_0 * ___from, RenderTexture_t1203146108_0 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bloom::BrightFilter(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void Bloom_BrightFilter_m931380964_0 (Bloom_t1244566877_0 * __this, float ___thresh, RenderTexture_t1203146108_0 * ___from, RenderTexture_t1203146108_0 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bloom::BrightFilter(UnityEngine.Color,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void Bloom_BrightFilter_m_1868396193_0 (Bloom_t1244566877_0 * __this, Color_t_388944582_0  ___threshColor, RenderTexture_t1203146108_0 * ___from, RenderTexture_t1203146108_0 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bloom::Vignette(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void Bloom_Vignette_m96280508_0 (Bloom_t1244566877_0 * __this, float ___amount, RenderTexture_t1203146108_0 * ___from, RenderTexture_t1203146108_0 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bloom::Main()
extern "C"  void Bloom_Main_m_772600374_0 (Bloom_t1244566877_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
