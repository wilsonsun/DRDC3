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

// UnityEngine.Texture2D
struct Texture2D_t_485082364_0;
// UnityEngine.Color[]
struct ColorU5BU5D_t_113585636_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_TextureFormat_865243191.h"
#include "mscorlib_System_IntPtr_1047952454.h"
#include "UnityEngine_UnityEngine_Color_388944582.h"

// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
extern "C"  void Texture2D__ctor_m1883511258_0 (Texture2D_t_485082364_0 * __this, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean)
extern "C"  void Texture2D__ctor_m1918985003_0 (Texture2D_t_485082364_0 * __this, int32_t ___width, int32_t ___height, int32_t ___format, bool ___mipmap, bool ___linear, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::Internal_Create(UnityEngine.Texture2D,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean,System.IntPtr)
extern "C"  void Texture2D_Internal_Create_m457592211_0 (Object_t * __this /* static, unused */, Texture2D_t_485082364_0 * ___mono, int32_t ___width, int32_t ___height, int32_t ___format, bool ___mipmap, bool ___linear, IntPtr_t ___nativeTex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetPixel(System.Int32,System.Int32,UnityEngine.Color)
extern "C"  void Texture2D_SetPixel_m378278602_0 (Texture2D_t_485082364_0 * __this, int32_t ___x, int32_t ___y, Color_t_388944582_0  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::INTERNAL_CALL_SetPixel(UnityEngine.Texture2D,System.Int32,System.Int32,UnityEngine.Color&)
extern "C"  void Texture2D_INTERNAL_CALL_SetPixel_m40008491_0 (Object_t * __this /* static, unused */, Texture2D_t_485082364_0 * ___self, int32_t ___x, int32_t ___y, Color_t_388944582_0 * ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels()
extern "C"  ColorU5BU5D_t_113585636_0* Texture2D_GetPixels_m1759701362_0 (Texture2D_t_485082364_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels(System.Int32)
extern "C"  ColorU5BU5D_t_113585636_0* Texture2D_GetPixels_m_1280048189_0 (Texture2D_t_485082364_0 * __this, int32_t ___miplevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  ColorU5BU5D_t_113585636_0* Texture2D_GetPixels_m871852803_0 (Texture2D_t_485082364_0 * __this, int32_t ___x, int32_t ___y, int32_t ___blockWidth, int32_t ___blockHeight, int32_t ___miplevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::Apply(System.Boolean,System.Boolean)
extern "C"  void Texture2D_Apply_m_1540434866_0 (Texture2D_t_485082364_0 * __this, bool ___updateMipmaps, bool ___makeNoLongerReadable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::Apply()
extern "C"  void Texture2D_Apply_m1364130776_0 (Texture2D_t_485082364_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
