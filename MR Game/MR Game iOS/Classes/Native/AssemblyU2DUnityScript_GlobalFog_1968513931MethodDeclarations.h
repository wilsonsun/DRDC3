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

// GlobalFog
struct GlobalFog_t_1968513931_0;
// UnityEngine.RenderTexture
struct RenderTexture_t1203146108_0;
// UnityEngine.Material
struct Material_t1701708784_0;

#include "codegen/il2cpp-codegen.h"

// System.Void GlobalFog::.ctor()
extern "C"  void GlobalFog__ctor_m1822081531_0 (GlobalFog_t_1968513931_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GlobalFog::CheckResources()
extern "C"  bool GlobalFog_CheckResources_m_1638693656_0 (GlobalFog_t_1968513931_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GlobalFog::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void GlobalFog_OnRenderImage_m_1742339709_0 (GlobalFog_t_1968513931_0 * __this, RenderTexture_t1203146108_0 * ___source, RenderTexture_t1203146108_0 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GlobalFog::CustomGraphicsBlit(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
extern "C"  void GlobalFog_CustomGraphicsBlit_m1505333463_0 (Object_t * __this /* static, unused */, RenderTexture_t1203146108_0 * ___source, RenderTexture_t1203146108_0 * ___dest, Material_t1701708784_0 * ___fxMaterial, int32_t ___passNr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GlobalFog::Main()
extern "C"  void GlobalFog_Main_m667007842_0 (GlobalFog_t_1968513931_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
