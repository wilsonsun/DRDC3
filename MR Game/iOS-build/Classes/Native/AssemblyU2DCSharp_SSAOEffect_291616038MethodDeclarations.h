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

// SSAOEffect
struct SSAOEffect_t_291616038_0;
// UnityEngine.Material
struct Material_t1701708784_0;
// UnityEngine.Shader
struct Shader_t1278883054_0;
// UnityEngine.RenderTexture
struct RenderTexture_t1203146108_0;

#include "codegen/il2cpp-codegen.h"

// System.Void SSAOEffect::.ctor()
extern "C"  void SSAOEffect__ctor_m_1442864708_0 (SSAOEffect_t_291616038_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material SSAOEffect::CreateMaterial(UnityEngine.Shader)
extern "C"  Material_t1701708784_0 * SSAOEffect_CreateMaterial_m668024654_0 (Object_t * __this /* static, unused */, Shader_t1278883054_0 * ___shader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SSAOEffect::DestroyMaterial(UnityEngine.Material)
extern "C"  void SSAOEffect_DestroyMaterial_m911558141_0 (Object_t * __this /* static, unused */, Material_t1701708784_0 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SSAOEffect::OnDisable()
extern "C"  void SSAOEffect_OnDisable_m_2019051485_0 (SSAOEffect_t_291616038_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SSAOEffect::Start()
extern "C"  void SSAOEffect_Start_m1799240380_0 (SSAOEffect_t_291616038_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SSAOEffect::OnEnable()
extern "C"  void SSAOEffect_OnEnable_m1721760842_0 (SSAOEffect_t_291616038_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SSAOEffect::CreateMaterials()
extern "C"  void SSAOEffect_CreateMaterials_m2139750954_0 (SSAOEffect_t_291616038_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SSAOEffect::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void SSAOEffect_OnRenderImage_m_2092559070_0 (SSAOEffect_t_291616038_0 * __this, RenderTexture_t1203146108_0 * ___source, RenderTexture_t1203146108_0 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
