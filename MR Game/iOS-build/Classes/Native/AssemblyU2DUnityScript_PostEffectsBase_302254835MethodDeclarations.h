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

// PostEffectsBase
struct PostEffectsBase_t_302254835_0;
// UnityEngine.Material
struct Material_t1701708784_0;
// UnityEngine.Shader
struct Shader_t1278883054_0;
// UnityEngine.RenderTexture
struct RenderTexture_t1203146108_0;

#include "codegen/il2cpp-codegen.h"

// System.Void PostEffectsBase::.ctor()
extern "C"  void PostEffectsBase__ctor_m_1498536285_0 (PostEffectsBase_t_302254835_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material PostEffectsBase::CheckShaderAndCreateMaterial(UnityEngine.Shader,UnityEngine.Material)
extern "C"  Material_t1701708784_0 * PostEffectsBase_CheckShaderAndCreateMaterial_m_623298753_0 (PostEffectsBase_t_302254835_0 * __this, Shader_t1278883054_0 * ___s, Material_t1701708784_0 * ___m2Create, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material PostEffectsBase::CreateMaterial(UnityEngine.Shader,UnityEngine.Material)
extern "C"  Material_t1701708784_0 * PostEffectsBase_CreateMaterial_m_1327315479_0 (PostEffectsBase_t_302254835_0 * __this, Shader_t1278883054_0 * ___s, Material_t1701708784_0 * ___m2Create, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsBase::OnEnable()
extern "C"  void PostEffectsBase_OnEnable_m1067186691_0 (PostEffectsBase_t_302254835_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PostEffectsBase::CheckSupport()
extern "C"  bool PostEffectsBase_CheckSupport_m98947434_0 (PostEffectsBase_t_302254835_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PostEffectsBase::CheckResources()
extern "C"  bool PostEffectsBase_CheckResources_m_608558144_0 (PostEffectsBase_t_302254835_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsBase::Start()
extern "C"  void PostEffectsBase_Start_m1743568803_0 (PostEffectsBase_t_302254835_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PostEffectsBase::CheckSupport(System.Boolean)
extern "C"  bool PostEffectsBase_CheckSupport_m_1440430751_0 (PostEffectsBase_t_302254835_0 * __this, bool ___needDepth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PostEffectsBase::CheckSupport(System.Boolean,System.Boolean)
extern "C"  bool PostEffectsBase_CheckSupport_m211681276_0 (PostEffectsBase_t_302254835_0 * __this, bool ___needDepth, bool ___needHdr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PostEffectsBase::Dx11Support()
extern "C"  bool PostEffectsBase_Dx11Support_m959258874_0 (PostEffectsBase_t_302254835_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsBase::ReportAutoDisable()
extern "C"  void PostEffectsBase_ReportAutoDisable_m1382128358_0 (PostEffectsBase_t_302254835_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PostEffectsBase::CheckShader(UnityEngine.Shader)
extern "C"  bool PostEffectsBase_CheckShader_m_782496528_0 (PostEffectsBase_t_302254835_0 * __this, Shader_t1278883054_0 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsBase::NotSupported()
extern "C"  void PostEffectsBase_NotSupported_m_470691172_0 (PostEffectsBase_t_302254835_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsBase::DrawBorder(UnityEngine.RenderTexture,UnityEngine.Material)
extern "C"  void PostEffectsBase_DrawBorder_m_1788887339_0 (PostEffectsBase_t_302254835_0 * __this, RenderTexture_t1203146108_0 * ___dest, Material_t1701708784_0 * ___material, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsBase::Main()
extern "C"  void PostEffectsBase_Main_m282796474_0 (PostEffectsBase_t_302254835_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
