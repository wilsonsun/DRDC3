﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Tonemapping
struct Tonemapping_t93581046_0;
// UnityEngine.RenderTexture
struct RenderTexture_t1203146108_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Tonemapping::.ctor()
extern "C"  void Tonemapping__ctor_m_1046965926_0 (Tonemapping_t93581046_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Tonemapping::CheckResources()
extern "C"  bool Tonemapping_CheckResources_m1009027049_0 (Tonemapping_t93581046_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Tonemapping::UpdateCurve()
extern "C"  float Tonemapping_UpdateCurve_m_1327909782_0 (Tonemapping_t93581046_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tonemapping::OnDisable()
extern "C"  void Tonemapping_OnDisable_m1138993345_0 (Tonemapping_t93581046_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Tonemapping::CreateInternalRenderTexture()
extern "C"  bool Tonemapping_CreateInternalRenderTexture_m_575433982_0 (Tonemapping_t93581046_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tonemapping::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void Tonemapping_OnRenderImage_m232999620_0 (Tonemapping_t93581046_0 * __this, RenderTexture_t1203146108_0 * ___source, RenderTexture_t1203146108_0 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tonemapping::Main()
extern "C"  void Tonemapping_Main_m_533920733_0 (Tonemapping_t93581046_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
