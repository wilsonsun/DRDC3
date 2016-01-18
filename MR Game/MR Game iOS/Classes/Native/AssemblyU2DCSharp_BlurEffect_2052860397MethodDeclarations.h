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

// BlurEffect
struct BlurEffect_t_2052860397_0;
// UnityEngine.Material
struct Material_t1701708784_0;
// UnityEngine.RenderTexture
struct RenderTexture_t1203146108_0;

#include "codegen/il2cpp-codegen.h"

// System.Void BlurEffect::.ctor()
extern "C"  void BlurEffect__ctor_m1835050659_0 (BlurEffect_t_2052860397_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BlurEffect::.cctor()
extern "C"  void BlurEffect__cctor_m569899370_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material BlurEffect::get_material()
extern "C"  Material_t1701708784_0 * BlurEffect_get_material_m2126257904_0 (BlurEffect_t_2052860397_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BlurEffect::OnDisable()
extern "C"  void BlurEffect_OnDisable_m_140643958_0 (BlurEffect_t_2052860397_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BlurEffect::Start()
extern "C"  void BlurEffect_Start_m782188451_0 (BlurEffect_t_2052860397_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BlurEffect::FourTapCone(UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Int32)
extern "C"  void BlurEffect_FourTapCone_m1899509174_0 (BlurEffect_t_2052860397_0 * __this, RenderTexture_t1203146108_0 * ___source, RenderTexture_t1203146108_0 * ___dest, int32_t ___iteration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BlurEffect::DownSample4x(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void BlurEffect_DownSample4x_m260295921_0 (BlurEffect_t_2052860397_0 * __this, RenderTexture_t1203146108_0 * ___source, RenderTexture_t1203146108_0 * ___dest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BlurEffect::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void BlurEffect_OnRenderImage_m1809781723_0 (BlurEffect_t_2052860397_0 * __this, RenderTexture_t1203146108_0 * ___source, RenderTexture_t1203146108_0 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
