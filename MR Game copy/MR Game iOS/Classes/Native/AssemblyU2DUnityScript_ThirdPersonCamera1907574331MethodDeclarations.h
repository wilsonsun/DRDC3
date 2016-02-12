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

// ThirdPersonCamera
struct ThirdPersonCamera_t1907574331_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// System.Void ThirdPersonCamera::.ctor()
extern "C"  void ThirdPersonCamera__ctor_m257513973_0 (ThirdPersonCamera_t1907574331_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::Awake()
extern "C"  void ThirdPersonCamera_Awake_m495119192_0 (ThirdPersonCamera_t1907574331_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::DebugDrawStuff()
extern "C"  void ThirdPersonCamera_DebugDrawStuff_m1262650860_0 (ThirdPersonCamera_t1907574331_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ThirdPersonCamera::AngleDistance(System.Single,System.Single)
extern "C"  float ThirdPersonCamera_AngleDistance_m_675949335_0 (ThirdPersonCamera_t1907574331_0 * __this, float ___a, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::Apply(UnityEngine.Transform,UnityEngine.Vector3)
extern "C"  void ThirdPersonCamera_Apply_m_660493713_0 (ThirdPersonCamera_t1907574331_0 * __this, Transform_t1584899523_0 * ___dummyTarget, Vector3_t_725341337_0  ___dummyCenter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::LateUpdate()
extern "C"  void ThirdPersonCamera_LateUpdate_m_1702960770_0 (ThirdPersonCamera_t1907574331_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::Cut(UnityEngine.Transform,UnityEngine.Vector3)
extern "C"  void ThirdPersonCamera_Cut_m2076631707_0 (ThirdPersonCamera_t1907574331_0 * __this, Transform_t1584899523_0 * ___dummyTarget, Vector3_t_725341337_0  ___dummyCenter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::SetUpRotation(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void ThirdPersonCamera_SetUpRotation_m_1921842274_0 (ThirdPersonCamera_t1907574331_0 * __this, Vector3_t_725341337_0  ___centerPos, Vector3_t_725341337_0  ___headPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ThirdPersonCamera::GetCenterOffset()
extern "C"  Vector3_t_725341337_0  ThirdPersonCamera_GetCenterOffset_m402709067_0 (ThirdPersonCamera_t1907574331_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::Main()
extern "C"  void ThirdPersonCamera_Main_m_214746072_0 (ThirdPersonCamera_t1907574331_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
