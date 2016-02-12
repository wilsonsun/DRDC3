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

// System.Object
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m_1368756916_0 (Vector3_t_725341337_0 * __this, float ___x, float ___y, float ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Slerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t_725341337_0  Vector3_Slerp_m1274749478_0 (Object_t * __this /* static, unused */, Vector3_t_725341337_0  ___a, Vector3_t_725341337_0  ___b, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::INTERNAL_CALL_Slerp(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,UnityEngine.Vector3&)
extern "C"  void Vector3_INTERNAL_CALL_Slerp_m_968470112_0 (Object_t * __this /* static, unused */, Vector3_t_725341337_0 * ___a, Vector3_t_725341337_0 * ___b, float ___t, Vector3_t_725341337_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::RotateTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
extern "C"  Vector3_t_725341337_0  Vector3_RotateTowards_m_1628844204_0 (Object_t * __this /* static, unused */, Vector3_t_725341337_0  ___current, Vector3_t_725341337_0  ___target, float ___maxRadiansDelta, float ___maxMagnitudeDelta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::INTERNAL_CALL_RotateTowards(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Single,UnityEngine.Vector3&)
extern "C"  void Vector3_INTERNAL_CALL_RotateTowards_m_1030661710_0 (Object_t * __this /* static, unused */, Vector3_t_725341337_0 * ___current, Vector3_t_725341337_0 * ___target, float ___maxRadiansDelta, float ___maxMagnitudeDelta, Vector3_t_725341337_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t_725341337_0  Vector3_Cross_m_1400844821_0 (Object_t * __this /* static, unused */, Vector3_t_725341337_0  ___lhs, Vector3_t_725341337_0  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Vector3::GetHashCode()
extern "C"  int32_t Vector3_GetHashCode_m_382099592_0 (Vector3_t_725341337_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector3::Equals(System.Object)
extern "C"  bool Vector3_Equals_m_957775200_0 (Vector3_t_725341337_0 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
extern "C"  Vector3_t_725341337_0  Vector3_Normalize_m_1246969941_0 (Object_t * __this /* static, unused */, Vector3_t_725341337_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::Normalize()
extern "C"  void Vector3_Normalize_m_309983500_0 (Vector3_t_725341337_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
extern "C"  Vector3_t_725341337_0  Vector3_get_normalized_m_1644026943_0 (Vector3_t_725341337_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Vector3::ToString()
extern "C"  String_t* Vector3_ToString_m_728594236_0 (Vector3_t_725341337_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float Vector3_Dot_m_1924481872_0 (Object_t * __this /* static, unused */, Vector3_t_725341337_0  ___lhs, Vector3_t_725341337_0  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Project(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t_725341337_0  Vector3_Project_m2128087858_0 (Object_t * __this /* static, unused */, Vector3_t_725341337_0  ___vector, Vector3_t_725341337_0  ___onNormal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float Vector3_Angle_m1904328934_0 (Object_t * __this /* static, unused */, Vector3_t_725341337_0  ___from, Vector3_t_725341337_0  ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
extern "C"  float Vector3_Magnitude_m995314358_0 (Object_t * __this /* static, unused */, Vector3_t_725341337_0  ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::get_magnitude()
extern "C"  float Vector3_get_magnitude_m989985786_0 (Vector3_t_725341337_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::SqrMagnitude(UnityEngine.Vector3)
extern "C"  float Vector3_SqrMagnitude_m1662776270_0 (Object_t * __this /* static, unused */, Vector3_t_725341337_0  ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
extern "C"  float Vector3_get_sqrMagnitude_m1207423764_0 (Vector3_t_725341337_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C"  Vector3_t_725341337_0  Vector3_get_zero_m2017759730_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
extern "C"  Vector3_t_725341337_0  Vector3_get_one_m886467710_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
extern "C"  Vector3_t_725341337_0  Vector3_get_forward_m1039372701_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
extern "C"  Vector3_t_725341337_0  Vector3_get_back_m1326515313_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C"  Vector3_t_725341337_0  Vector3_get_up_m_248320155_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
extern "C"  Vector3_t_725341337_0  Vector3_get_down_m1397301612_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
extern "C"  Vector3_t_725341337_0  Vector3_get_right_m_279830284_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t_725341337_0  Vector3_op_Addition_m695438225_0 (Object_t * __this /* static, unused */, Vector3_t_725341337_0  ___a, Vector3_t_725341337_0  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t_725341337_0  Vector3_op_Subtraction_m_1452009131_0 (Object_t * __this /* static, unused */, Vector3_t_725341337_0  ___a, Vector3_t_725341337_0  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
extern "C"  Vector3_t_725341337_0  Vector3_op_UnaryNegation_m_1001769982_0 (Object_t * __this /* static, unused */, Vector3_t_725341337_0  ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t_725341337_0  Vector3_op_Multiply_m973638459_0 (Object_t * __this /* static, unused */, Vector3_t_725341337_0  ___a, float ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
extern "C"  Vector3_t_725341337_0  Vector3_op_Multiply_m_485891077_0 (Object_t * __this /* static, unused */, float ___d, Vector3_t_725341337_0  ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t_725341337_0  Vector3_op_Division_m_16978926_0 (Object_t * __this /* static, unused */, Vector3_t_725341337_0  ___a, float ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool Vector3_op_Equality_m582817895_0 (Object_t * __this /* static, unused */, Vector3_t_725341337_0  ___lhs, Vector3_t_725341337_0  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool Vector3_op_Inequality_m231387234_0 (Object_t * __this /* static, unused */, Vector3_t_725341337_0  ___lhs, Vector3_t_725341337_0  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;