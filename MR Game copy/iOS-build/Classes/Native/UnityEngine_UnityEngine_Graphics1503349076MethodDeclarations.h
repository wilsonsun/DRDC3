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

// UnityEngine.Mesh
struct Mesh_t_982089418_0;
// UnityEngine.ComputeBuffer
struct ComputeBuffer_t_722535890_0;
// UnityEngine.Texture
struct Texture_t1814018354_0;
// UnityEngine.RenderTexture
struct RenderTexture_t1203146108_0;
// UnityEngine.Material
struct Material_t1701708784_0;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t_1268320952_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x41577636070.h"
#include "UnityEngine_UnityEngine_MeshTopology2096697797.h"
#include "UnityEngine_UnityEngine_RenderBuffer_1016476737.h"
#include "UnityEngine_UnityEngine_CubemapFace1077405851.h"

// System.Void UnityEngine.Graphics::DrawMeshNow(UnityEngine.Mesh,UnityEngine.Matrix4x4)
extern "C"  void Graphics_DrawMeshNow_m_1770725003_0 (Object_t * __this /* static, unused */, Mesh_t_982089418_0 * ___mesh, Matrix4x4_t1577636070_0  ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_DrawMeshNow2(UnityEngine.Mesh,UnityEngine.Matrix4x4,System.Int32)
extern "C"  void Graphics_Internal_DrawMeshNow2_m1490231000_0 (Object_t * __this /* static, unused */, Mesh_t_982089418_0 * ___mesh, Matrix4x4_t1577636070_0  ___matrix, int32_t ___materialIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::INTERNAL_CALL_Internal_DrawMeshNow2(UnityEngine.Mesh,UnityEngine.Matrix4x4&,System.Int32)
extern "C"  void Graphics_INTERNAL_CALL_Internal_DrawMeshNow2_m_688126645_0 (Object_t * __this /* static, unused */, Mesh_t_982089418_0 * ___mesh, Matrix4x4_t1577636070_0 * ___matrix, int32_t ___materialIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawProceduralIndirect(UnityEngine.MeshTopology,UnityEngine.ComputeBuffer,System.Int32)
extern "C"  void Graphics_DrawProceduralIndirect_m_1478310035_0 (Object_t * __this /* static, unused */, int32_t ___topology, ComputeBuffer_t_722535890_0 * ___bufferWithArgs, int32_t ___argsOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
extern "C"  void Graphics_Blit_m_886130379_0 (Object_t * __this /* static, unused */, Texture_t1814018354_0 * ___source, RenderTexture_t1203146108_0 * ___dest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material)
extern "C"  void Graphics_Blit_m_1599513005_0 (Object_t * __this /* static, unused */, Texture_t1814018354_0 * ___source, RenderTexture_t1203146108_0 * ___dest, Material_t1701708784_0 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
extern "C"  void Graphics_Blit_m336256356_0 (Object_t * __this /* static, unused */, Texture_t1814018354_0 * ___source, RenderTexture_t1203146108_0 * ___dest, Material_t1701708784_0 * ___mat, int32_t ___pass, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_BlitMaterial(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32,System.Boolean)
extern "C"  void Graphics_Internal_BlitMaterial_m_1481411488_0 (Object_t * __this /* static, unused */, Texture_t1814018354_0 * ___source, RenderTexture_t1203146108_0 * ___dest, Material_t1701708784_0 * ___mat, int32_t ___pass, bool ___setRT, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::BlitMultiTap(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Vector2[])
extern "C"  void Graphics_BlitMultiTap_m_83157265_0 (Object_t * __this /* static, unused */, Texture_t1814018354_0 * ___source, RenderTexture_t1203146108_0 * ___dest, Material_t1701708784_0 * ___mat, Vector2U5BU5D_t_1268320952_0* ___offsets, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_BlitMultiTap(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Vector2[])
extern "C"  void Graphics_Internal_BlitMultiTap_m1682166383_0 (Object_t * __this /* static, unused */, Texture_t1814018354_0 * ___source, RenderTexture_t1203146108_0 * ___dest, Material_t1701708784_0 * ___mat, Vector2U5BU5D_t_1268320952_0* ___offsets, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_SetNullRT()
extern "C"  void Graphics_Internal_SetNullRT_m_1519104085_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_SetRTSimple(UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&,System.Int32,UnityEngine.CubemapFace)
extern "C"  void Graphics_Internal_SetRTSimple_m_310903712_0 (Object_t * __this /* static, unused */, RenderBuffer_t_1016476737_0 * ___color, RenderBuffer_t_1016476737_0 * ___depth, int32_t ___mip, int32_t ___face, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRandomWriteTarget(System.Int32,UnityEngine.ComputeBuffer)
extern "C"  void Graphics_SetRandomWriteTarget_m_1508474486_0 (Object_t * __this /* static, unused */, int32_t ___index, ComputeBuffer_t_722535890_0 * ___uav, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::ClearRandomWriteTargets()
extern "C"  void Graphics_ClearRandomWriteTargets_m223572883_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_SetRandomWriteTargetBuffer(System.Int32,UnityEngine.ComputeBuffer)
extern "C"  void Graphics_Internal_SetRandomWriteTargetBuffer_m_432788374_0 (Object_t * __this /* static, unused */, int32_t ___index, ComputeBuffer_t_722535890_0 * ___uav, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRenderTargetImpl(UnityEngine.RenderBuffer,UnityEngine.RenderBuffer,System.Int32,UnityEngine.CubemapFace)
extern "C"  void Graphics_SetRenderTargetImpl_m1430595897_0 (Object_t * __this /* static, unused */, RenderBuffer_t_1016476737_0  ___colorBuffer, RenderBuffer_t_1016476737_0  ___depthBuffer, int32_t ___mipLevel, int32_t ___face, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRenderTargetImpl(UnityEngine.RenderTexture,System.Int32,UnityEngine.CubemapFace)
extern "C"  void Graphics_SetRenderTargetImpl_m_1887027781_0 (Object_t * __this /* static, unused */, RenderTexture_t1203146108_0 * ___rt, int32_t ___mipLevel, int32_t ___face, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRenderTarget(UnityEngine.RenderTexture)
extern "C"  void Graphics_SetRenderTarget_m_1243353189_0 (Object_t * __this /* static, unused */, RenderTexture_t1203146108_0 * ___rt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
