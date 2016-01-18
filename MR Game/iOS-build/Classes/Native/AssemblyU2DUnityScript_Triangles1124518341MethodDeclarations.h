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

// Triangles
struct Triangles_t1124518341_0;
// UnityEngine.Mesh[]
struct MeshU5BU5D_t142152908_0;
// UnityEngine.Mesh
struct Mesh_t_982089418_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Triangles::.ctor()
extern "C"  void Triangles__ctor_m1061998251_0 (Triangles_t1124518341_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Triangles::.cctor()
extern "C"  void Triangles__cctor_m_1919888798_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Triangles::HasMeshes()
extern "C"  bool Triangles_HasMeshes_m_1558549604_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Triangles::Cleanup()
extern "C"  void Triangles_Cleanup_m1046863725_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh[] Triangles::GetMeshes(System.Int32,System.Int32)
extern "C"  MeshU5BU5D_t142152908_0* Triangles_GetMeshes_m1025524587_0 (Object_t * __this /* static, unused */, int32_t ___totalWidth, int32_t ___totalHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh Triangles::GetMesh(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  Mesh_t_982089418_0 * Triangles_GetMesh_m983155479_0 (Object_t * __this /* static, unused */, int32_t ___triCount, int32_t ___triOffset, int32_t ___totalWidth, int32_t ___totalHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Triangles::Main()
extern "C"  void Triangles_Main_m88299698_0 (Triangles_t1124518341_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
