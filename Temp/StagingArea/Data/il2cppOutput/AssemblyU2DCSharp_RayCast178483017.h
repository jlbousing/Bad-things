#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_RaycastHit2D4063908774.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RayCast
struct  RayCast_t178483017  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.RaycastHit2D RayCast::hit
	RaycastHit2D_t4063908774  ___hit_2;

public:
	inline static int32_t get_offset_of_hit_2() { return static_cast<int32_t>(offsetof(RayCast_t178483017, ___hit_2)); }
	inline RaycastHit2D_t4063908774  get_hit_2() const { return ___hit_2; }
	inline RaycastHit2D_t4063908774 * get_address_of_hit_2() { return &___hit_2; }
	inline void set_hit_2(RaycastHit2D_t4063908774  value)
	{
		___hit_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
