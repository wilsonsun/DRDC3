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

// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache
struct DispatcherCache_t1717444401_0;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct Dispatcher_t_58148143_0;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey
struct DispatcherKey_t_1419432498_0;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory
struct DispatcherFactory_t_1820685083_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::.ctor()
extern "C"  void DispatcherCache__ctor_m_1485718273_0 (DispatcherCache_t1717444401_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::.cctor()
extern "C"  void DispatcherCache__cctor_m705277582_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::Get(Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory)
extern "C"  Dispatcher_t_58148143_0 * DispatcherCache_Get_m_578461657_0 (DispatcherCache_t1717444401_0 * __this, DispatcherKey_t_1419432498_0 * ___key, DispatcherFactory_t_1820685083_0 * ___factory, const MethodInfo* method) IL2CPP_METHOD_ATTR;
