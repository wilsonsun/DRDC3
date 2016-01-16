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

// NoiseEffect
struct NoiseEffect_t_544239760_0;
// UnityEngine.Material
struct Material_t1701708784_0;
// UnityEngine.RenderTexture
struct RenderTexture_t1203146108_0;

#include "codegen/il2cpp-codegen.h"

// System.Void NoiseEffect::.ctor()
extern "C"  void NoiseEffect__ctor_m2073125536_0 (NoiseEffect_t_544239760_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NoiseEffect::Start()
extern "C"  void NoiseEffect_Start_m1020263328_0 (NoiseEffect_t_544239760_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material NoiseEffect::get_material()
extern "C"  Material_t1701708784_0 * NoiseEffect_get_material_m_422918539_0 (NoiseEffect_t_544239760_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NoiseEffect::OnDisable()
extern "C"  void NoiseEffect_OnDisable_m_957978873_0 (NoiseEffect_t_544239760_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NoiseEffect::SanitizeParameters()
extern "C"  void NoiseEffect_SanitizeParameters_m_596184105_0 (NoiseEffect_t_544239760_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NoiseEffect::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void NoiseEffect_OnRenderImage_m1996322238_0 (NoiseEffect_t_544239760_0 * __this, RenderTexture_t1203146108_0 * ___source, RenderTexture_t1203146108_0 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
