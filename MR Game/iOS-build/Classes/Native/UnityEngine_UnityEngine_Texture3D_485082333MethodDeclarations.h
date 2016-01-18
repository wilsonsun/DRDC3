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

// UnityEngine.Texture3D
struct Texture3D_t_485082333_0;
// UnityEngine.Color[]
struct ColorU5BU5D_t_113585636_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_TextureFormat_865243191.h"

// System.Void UnityEngine.Texture3D::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C"  void Texture3D__ctor_m967628078_0 (Texture3D_t_485082333_0 * __this, int32_t ___width, int32_t ___height, int32_t ___depth, int32_t ___format, bool ___mipmap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture3D::SetPixels(UnityEngine.Color[],System.Int32)
extern "C"  void Texture3D_SetPixels_m386933549_0 (Texture3D_t_485082333_0 * __this, ColorU5BU5D_t_113585636_0* ___colors, int32_t ___miplevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture3D::SetPixels(UnityEngine.Color[])
extern "C"  void Texture3D_SetPixels_m_1980144150_0 (Texture3D_t_485082333_0 * __this, ColorU5BU5D_t_113585636_0* ___colors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture3D::Apply(System.Boolean)
extern "C"  void Texture3D_Apply_m1773429840_0 (Texture3D_t_485082333_0 * __this, bool ___updateMipmaps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture3D::Apply()
extern "C"  void Texture3D_Apply_m_432820583_0 (Texture3D_t_485082333_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture3D::Internal_Create(UnityEngine.Texture3D,System.Int32,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C"  void Texture3D_Internal_Create_m_177173751_0 (Object_t * __this /* static, unused */, Texture3D_t_485082333_0 * ___mono, int32_t ___width, int32_t ___height, int32_t ___depth, int32_t ___format, bool ___mipmap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
