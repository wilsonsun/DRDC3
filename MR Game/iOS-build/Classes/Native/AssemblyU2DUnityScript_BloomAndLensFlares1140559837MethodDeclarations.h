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

// BloomAndLensFlares
struct BloomAndLensFlares_t1140559837_0;
// UnityEngine.RenderTexture
struct RenderTexture_t1203146108_0;

#include "codegen/il2cpp-codegen.h"

// System.Void BloomAndLensFlares::.ctor()
extern "C"  void BloomAndLensFlares__ctor_m969467289_0 (BloomAndLensFlares_t1140559837_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BloomAndLensFlares::CheckResources()
extern "C"  bool BloomAndLensFlares_CheckResources_m_88908602_0 (BloomAndLensFlares_t1140559837_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BloomAndLensFlares::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void BloomAndLensFlares_OnRenderImage_m1901953829_0 (BloomAndLensFlares_t1140559837_0 * __this, RenderTexture_t1203146108_0 * ___source, RenderTexture_t1203146108_0 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BloomAndLensFlares::AddTo(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void BloomAndLensFlares_AddTo_m_500848876_0 (BloomAndLensFlares_t1140559837_0 * __this, float ___intensity_, RenderTexture_t1203146108_0 * ___from, RenderTexture_t1203146108_0 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BloomAndLensFlares::BlendFlares(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void BloomAndLensFlares_BlendFlares_m2144354197_0 (BloomAndLensFlares_t1140559837_0 * __this, RenderTexture_t1203146108_0 * ___from, RenderTexture_t1203146108_0 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BloomAndLensFlares::BrightFilter(System.Single,System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void BloomAndLensFlares_BrightFilter_m1205853135_0 (BloomAndLensFlares_t1140559837_0 * __this, float ___thresh, float ___useAlphaAsMask, RenderTexture_t1203146108_0 * ___from, RenderTexture_t1203146108_0 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BloomAndLensFlares::Vignette(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void BloomAndLensFlares_Vignette_m609691074_0 (BloomAndLensFlares_t1140559837_0 * __this, float ___amount, RenderTexture_t1203146108_0 * ___from, RenderTexture_t1203146108_0 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BloomAndLensFlares::Main()
extern "C"  void BloomAndLensFlares_Main_m_191779836_0 (BloomAndLensFlares_t1140559837_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
