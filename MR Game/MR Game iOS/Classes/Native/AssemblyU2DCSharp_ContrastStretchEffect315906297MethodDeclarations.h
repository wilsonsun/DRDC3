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

// ContrastStretchEffect
struct ContrastStretchEffect_t315906297_0;
// UnityEngine.Material
struct Material_t1701708784_0;
// UnityEngine.RenderTexture
struct RenderTexture_t1203146108_0;
// UnityEngine.Texture
struct Texture_t1814018354_0;

#include "codegen/il2cpp-codegen.h"

// System.Void ContrastStretchEffect::.ctor()
extern "C"  void ContrastStretchEffect__ctor_m_1701775625_0 (ContrastStretchEffect_t315906297_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material ContrastStretchEffect::get_materialLum()
extern "C"  Material_t1701708784_0 * ContrastStretchEffect_get_materialLum_m_1553429816_0 (ContrastStretchEffect_t315906297_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material ContrastStretchEffect::get_materialReduce()
extern "C"  Material_t1701708784_0 * ContrastStretchEffect_get_materialReduce_m412011332_0 (ContrastStretchEffect_t315906297_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material ContrastStretchEffect::get_materialAdapt()
extern "C"  Material_t1701708784_0 * ContrastStretchEffect_get_materialAdapt_m134400422_0 (ContrastStretchEffect_t315906297_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material ContrastStretchEffect::get_materialApply()
extern "C"  Material_t1701708784_0 * ContrastStretchEffect_get_materialApply_m491688690_0 (ContrastStretchEffect_t315906297_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ContrastStretchEffect::Start()
extern "C"  void ContrastStretchEffect_Start_m1540329463_0 (ContrastStretchEffect_t315906297_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ContrastStretchEffect::OnEnable()
extern "C"  void ContrastStretchEffect_OnEnable_m_2027071185_0 (ContrastStretchEffect_t315906297_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ContrastStretchEffect::OnDisable()
extern "C"  void ContrastStretchEffect_OnDisable_m2026239966_0 (ContrastStretchEffect_t315906297_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ContrastStretchEffect::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void ContrastStretchEffect_OnRenderImage_m1769701127_0 (ContrastStretchEffect_t315906297_0 * __this, RenderTexture_t1203146108_0 * ___source, RenderTexture_t1203146108_0 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ContrastStretchEffect::CalculateAdaptation(UnityEngine.Texture)
extern "C"  void ContrastStretchEffect_CalculateAdaptation_m_1783504704_0 (ContrastStretchEffect_t315906297_0 * __this, Texture_t1814018354_0 * ___curTexture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
