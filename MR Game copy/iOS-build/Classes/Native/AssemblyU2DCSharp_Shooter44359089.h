#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t_1022613340_0;
// UnityEngine.Texture2D
struct Texture2D_t_485082364_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"

// Shooter
struct  Shooter_t44359089_0  : public MonoBehaviour_t_92453903_0
{
	// UnityEngine.Rigidbody Shooter::projectile
	Rigidbody_t_1022613340_0 * ___projectile_2;
	// System.Single Shooter::speed
	float ___speed_3;
	// UnityEngine.Texture2D Shooter::buttonImage
	Texture2D_t_485082364_0 * ___buttonImage_4;
};
