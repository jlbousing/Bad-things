#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cell
struct  Cell_t3051913968  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 Cell::id
	int32_t ___id_2;
	// UnityEngine.GameObject[] Cell::arrayElements
	GameObjectU5BU5D_t3057952154* ___arrayElements_3;
	// System.Boolean Cell::isEmpty
	bool ___isEmpty_4;

public:
	inline static int32_t get_offset_of_id_2() { return static_cast<int32_t>(offsetof(Cell_t3051913968, ___id_2)); }
	inline int32_t get_id_2() const { return ___id_2; }
	inline int32_t* get_address_of_id_2() { return &___id_2; }
	inline void set_id_2(int32_t value)
	{
		___id_2 = value;
	}

	inline static int32_t get_offset_of_arrayElements_3() { return static_cast<int32_t>(offsetof(Cell_t3051913968, ___arrayElements_3)); }
	inline GameObjectU5BU5D_t3057952154* get_arrayElements_3() const { return ___arrayElements_3; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_arrayElements_3() { return &___arrayElements_3; }
	inline void set_arrayElements_3(GameObjectU5BU5D_t3057952154* value)
	{
		___arrayElements_3 = value;
		Il2CppCodeGenWriteBarrier(&___arrayElements_3, value);
	}

	inline static int32_t get_offset_of_isEmpty_4() { return static_cast<int32_t>(offsetof(Cell_t3051913968, ___isEmpty_4)); }
	inline bool get_isEmpty_4() const { return ___isEmpty_4; }
	inline bool* get_address_of_isEmpty_4() { return &___isEmpty_4; }
	inline void set_isEmpty_4(bool value)
	{
		___isEmpty_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
