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

// CameraMotionBlur
struct CameraMotionBlur_t722944680_0;
// UnityEngine.RenderTexture
struct RenderTexture_t1203146108_0;
// UnityEngine.Camera
struct Camera_t814710830_0;

#include "codegen/il2cpp-codegen.h"

// System.Void CameraMotionBlur::.ctor()
extern "C"  void CameraMotionBlur__ctor_m_472571922_0 (CameraMotionBlur_t722944680_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraMotionBlur::.cctor()
extern "C"  void CameraMotionBlur__cctor_m2048043391_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraMotionBlur::CalculateViewProjection()
extern "C"  void CameraMotionBlur_CalculateViewProjection_m_35740250_0 (CameraMotionBlur_t722944680_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraMotionBlur::Start()
extern "C"  void CameraMotionBlur_Start_m_1525434130_0 (CameraMotionBlur_t722944680_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraMotionBlur::OnEnable()
extern "C"  void CameraMotionBlur_OnEnable_m_1710720808_0 (CameraMotionBlur_t722944680_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraMotionBlur::OnDisable()
extern "C"  void CameraMotionBlur_OnDisable_m_1051800235_0 (CameraMotionBlur_t722944680_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CameraMotionBlur::CheckResources()
extern "C"  bool CameraMotionBlur_CheckResources_m842881425_0 (CameraMotionBlur_t722944680_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraMotionBlur::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void CameraMotionBlur_OnRenderImage_m_349728848_0 (CameraMotionBlur_t722944680_0 * __this, RenderTexture_t1203146108_0 * ___source, RenderTexture_t1203146108_0 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraMotionBlur::Remember()
extern "C"  void CameraMotionBlur_Remember_m_1274348445_0 (CameraMotionBlur_t722944680_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera CameraMotionBlur::GetTmpCam()
extern "C"  Camera_t814710830_0 * CameraMotionBlur_GetTmpCam_m1200152431_0 (CameraMotionBlur_t722944680_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraMotionBlur::StartFrame()
extern "C"  void CameraMotionBlur_StartFrame_m_709404863_0 (CameraMotionBlur_t722944680_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CameraMotionBlur::divRoundUp(System.Int32,System.Int32)
extern "C"  int32_t CameraMotionBlur_divRoundUp_m_1432643168_0 (CameraMotionBlur_t722944680_0 * __this, int32_t ___x, int32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraMotionBlur::Main()
extern "C"  void CameraMotionBlur_Main_m731534095_0 (CameraMotionBlur_t722944680_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
