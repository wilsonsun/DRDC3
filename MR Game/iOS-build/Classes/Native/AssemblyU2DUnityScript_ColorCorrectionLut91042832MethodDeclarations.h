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

// ColorCorrectionLut
struct ColorCorrectionLut_t91042832_0;
// UnityEngine.Texture2D
struct Texture2D_t_485082364_0;
// System.String
struct String_t;
// UnityEngine.RenderTexture
struct RenderTexture_t1203146108_0;

#include "codegen/il2cpp-codegen.h"

// System.Void ColorCorrectionLut::.ctor()
extern "C"  void ColorCorrectionLut__ctor_m1049709254_0 (ColorCorrectionLut_t91042832_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ColorCorrectionLut::CheckResources()
extern "C"  bool ColorCorrectionLut_CheckResources_m_1049265607_0 (ColorCorrectionLut_t91042832_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ColorCorrectionLut::OnDisable()
extern "C"  void ColorCorrectionLut_OnDisable_m_1177957331_0 (ColorCorrectionLut_t91042832_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ColorCorrectionLut::OnDestroy()
extern "C"  void ColorCorrectionLut_OnDestroy_m999574719_0 (ColorCorrectionLut_t91042832_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ColorCorrectionLut::SetIdentityLut()
extern "C"  void ColorCorrectionLut_SetIdentityLut_m579616617_0 (ColorCorrectionLut_t91042832_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ColorCorrectionLut::ValidDimensions(UnityEngine.Texture2D)
extern "C"  bool ColorCorrectionLut_ValidDimensions_m_1018404627_0 (ColorCorrectionLut_t91042832_0 * __this, Texture2D_t_485082364_0 * ___tex2d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ColorCorrectionLut::Convert(UnityEngine.Texture2D,System.String)
extern "C"  void ColorCorrectionLut_Convert_m_1800750623_0 (ColorCorrectionLut_t91042832_0 * __this, Texture2D_t_485082364_0 * ___temp2DTex, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ColorCorrectionLut::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void ColorCorrectionLut_OnRenderImage_m1568456152_0 (ColorCorrectionLut_t91042832_0 * __this, RenderTexture_t1203146108_0 * ___source, RenderTexture_t1203146108_0 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ColorCorrectionLut::Main()
extern "C"  void ColorCorrectionLut_Main_m364997943_0 (ColorCorrectionLut_t91042832_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
