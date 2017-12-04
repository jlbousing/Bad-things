#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// Generador
struct Generador_t1559741577;
// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Element
struct  Element_t2605769808  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 Element::idCell
	int32_t ___idCell_2;
	// UnityEngine.AudioSource Element::audio
	AudioSource_t1135106623 * ___audio_3;
	// Generador Element::generador
	Generador_t1559741577 * ___generador_4;
	// UnityEngine.UI.Text Element::score
	Text_t356221433 * ___score_5;

public:
	inline static int32_t get_offset_of_idCell_2() { return static_cast<int32_t>(offsetof(Element_t2605769808, ___idCell_2)); }
	inline int32_t get_idCell_2() const { return ___idCell_2; }
	inline int32_t* get_address_of_idCell_2() { return &___idCell_2; }
	inline void set_idCell_2(int32_t value)
	{
		___idCell_2 = value;
	}

	inline static int32_t get_offset_of_audio_3() { return static_cast<int32_t>(offsetof(Element_t2605769808, ___audio_3)); }
	inline AudioSource_t1135106623 * get_audio_3() const { return ___audio_3; }
	inline AudioSource_t1135106623 ** get_address_of_audio_3() { return &___audio_3; }
	inline void set_audio_3(AudioSource_t1135106623 * value)
	{
		___audio_3 = value;
		Il2CppCodeGenWriteBarrier(&___audio_3, value);
	}

	inline static int32_t get_offset_of_generador_4() { return static_cast<int32_t>(offsetof(Element_t2605769808, ___generador_4)); }
	inline Generador_t1559741577 * get_generador_4() const { return ___generador_4; }
	inline Generador_t1559741577 ** get_address_of_generador_4() { return &___generador_4; }
	inline void set_generador_4(Generador_t1559741577 * value)
	{
		___generador_4 = value;
		Il2CppCodeGenWriteBarrier(&___generador_4, value);
	}

	inline static int32_t get_offset_of_score_5() { return static_cast<int32_t>(offsetof(Element_t2605769808, ___score_5)); }
	inline Text_t356221433 * get_score_5() const { return ___score_5; }
	inline Text_t356221433 ** get_address_of_score_5() { return &___score_5; }
	inline void set_score_5(Text_t356221433 * value)
	{
		___score_5 = value;
		Il2CppCodeGenWriteBarrier(&___score_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
