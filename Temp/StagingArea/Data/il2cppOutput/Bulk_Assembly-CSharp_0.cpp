#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_Cell3051913968.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Int322071877448.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Component3819376471.h"
#include "AssemblyU2DCSharp_Element2605769808.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_AudioSource1135106623.h"
#include "AssemblyU2DCSharp_Generador1559741577.h"
#include "UnityEngine_UI_UnityEngine_UI_Text356221433.h"
#include "UnityEngine_UnityEngine_Collider2D646061738.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"
#include "mscorlib_System_Single2076509932.h"
#include "AssemblyU2DCSharp_RayCast178483017.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_RaycastHit2D4063908774.h"
#include "mscorlib_System_Nullable_1_gen2088641033.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "AssemblyU2DCSharp_toCredits1814485887.h"
#include "AssemblyU2DCSharp_toGame4255897611.h"

// Cell
struct Cell_t3051913968;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// UnityEngine.Component
struct Component_t3819376471;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Object
struct Il2CppObject;
// Element
struct Element_t2605769808;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// System.String
struct String_t;
// Generador
struct Generador_t1559741577;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.Collider2D
struct Collider2D_t646061738;
// UnityEngine.Object
struct Object_t1021602117;
// RayCast
struct RayCast_t178483017;
// UnityEngine.Camera
struct Camera_t189460977;
// toCredits
struct toCredits_t1814485887;
// toGame
struct toGame_t4255897611;
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_Instantiate_TisGameObject_t1756533147_m3064851704_MethodInfo_var;
extern const uint32_t Cell_Generar_m4175242929_MetadataUsageId;
extern const MethodInfo* Component_GetComponent_TisAudioSource_t1135106623_m3920278003_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisGenerador_t1559741577_m1012120736_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2252102943;
extern Il2CppCodeGenString* _stringLiteral878003815;
extern const uint32_t Element_Start_m2768812673_MetadataUsageId;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisCell_t3051913968_m947207269_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral3779991494;
extern const uint32_t Element_OnTriggerEnter2D_m1309996761_MetadataUsageId;
extern const MethodInfo* GameObject_GetComponent_TisCell_t3051913968_m1772861161_MethodInfo_var;
extern const uint32_t Element_Destruir_m2001980847_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral1594891052;
extern const uint32_t Generador_Start_m3878041552_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral2484685498;
extern Il2CppCodeGenString* _stringLiteral2484685497;
extern Il2CppCodeGenString* _stringLiteral2484685504;
extern Il2CppCodeGenString* _stringLiteral2484685503;
extern const uint32_t Generador_Update_m706811565_MetadataUsageId;
extern const uint32_t Generador_GenerarObjeto_m164918953_MetadataUsageId;
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppClass* Physics2D_t2540166467_il2cpp_TypeInfo_var;
extern Il2CppClass* Nullable_1_t2088641033_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern const MethodInfo* Nullable_1_GetValueOrDefault_m2607283502_MethodInfo_var;
extern const MethodInfo* Nullable_1_get_HasValue_m1733730025_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisElement_t2605769808_m3486264509_MethodInfo_var;
extern const uint32_t RayCast_Update_m2904143889_MetadataUsageId;

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) GameObject_t1756533147 * m_Items[1];

public:
	inline GameObject_t1756533147 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t1756533147 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t1756533147 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GameObject_t1756533147 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t1756533147 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t1756533147 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  Il2CppObject * Object_Instantiate_TisIl2CppObject_m3829784634_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, Vector3_t2243707580  p1, Quaternion_t4030073918  p2, const MethodInfo* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m4109961936_gshared (Component_t3819376471 * __this, const MethodInfo* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  Il2CppObject * GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared (GameObject_t1756533147 * __this, const MethodInfo* method);
// !0 System.Nullable`1<System.Boolean>::GetValueOrDefault()
extern "C"  bool Nullable_1_GetValueOrDefault_m2607283502_gshared (Nullable_1_t2088641033 * __this, const MethodInfo* method);
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
extern "C"  bool Nullable_1_get_HasValue_m1733730025_gshared (Nullable_1_t2088641033 * __this, const MethodInfo* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m2464341955 (MonoBehaviour_t1158329972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern "C"  int32_t Random_Range_m694320887 (Il2CppObject * __this /* static, unused */, int32_t p0, int32_t p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3275118058 * Component_get_transform_m2697483695 (Component_t3819376471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t2243707580  Transform_get_position_m1104419803 (Transform_t3275118058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C"  Quaternion_t4030073918  Quaternion_get_identity_m1561886418 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
#define Object_Instantiate_TisGameObject_t1756533147_m3064851704(__this /* static, unused */, p0, p1, p2, method) ((  GameObject_t1756533147 * (*) (Il2CppObject * /* static, unused */, GameObject_t1756533147 *, Vector3_t2243707580 , Quaternion_t4030073918 , const MethodInfo*))Object_Instantiate_TisIl2CppObject_m3829784634_gshared)(__this /* static, unused */, p0, p1, p2, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
#define Component_GetComponent_TisAudioSource_t1135106623_m3920278003(__this, method) ((  AudioSource_t1135106623 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
extern "C"  GameObjectU5BU5D_t3057952154* GameObject_FindGameObjectsWithTag_m2154478296 (Il2CppObject * __this /* static, unused */, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<Generador>()
#define GameObject_GetComponent_TisGenerador_t1559741577_m1012120736(__this, method) ((  Generador_t1559741577 * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
#define GameObject_GetComponent_TisText_t356221433_m1217399699(__this, method) ((  Text_t356221433 * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1756533147 * Component_get_gameObject_m3105766835 (Component_t3819376471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GameObject::get_tag()
extern "C"  String_t* GameObject_get_tag_m1425941094 (GameObject_t1756533147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m1790663636 (Il2CppObject * __this /* static, unused */, String_t* p0, String_t* p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<Cell>()
#define Component_GetComponent_TisCell_t3051913968_m947207269(__this, method) ((  Cell_t3051913968 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<Cell>()
#define GameObject_GetComponent_TisCell_t3051913968_m1772861161(__this, method) ((  Cell_t3051913968 * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// System.Void Cell::setIsEmpty(System.Boolean)
extern "C"  void Cell_setIsEmpty_m3465005831 (Cell_t3051913968 * __this, bool ___dato0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play()
extern "C"  void AudioSource_Play_m353744792 (AudioSource_t1135106623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Int32::ToString()
extern "C"  String_t* Int32_ToString_m2960866144 (int32_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m4145850038 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Generador::GenerarObjeto()
extern "C"  void Generador_GenerarObjeto_m164918953 (Generador_t1559741577 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
extern "C"  void SceneManager_LoadScene_m87258056 (Il2CppObject * __this /* static, unused */, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m2233168104 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cell::Generar()
extern "C"  void Cell_Generar_m4175242929 (Cell_t3051913968 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
extern "C"  bool Input_GetMouseButtonDown_m47917805 (Il2CppObject * __this /* static, unused */, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C"  Camera_t189460977 * Camera_get_main_m475173995 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern "C"  Vector3_t2243707580  Input_get_mousePosition_m146923508 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  Camera_ScreenToWorldPoint_m929392728 (Camera_t189460977 * __this, Vector3_t2243707580  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C"  Vector2_t2243707579  Vector2_op_Implicit_m1064335535 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
extern "C"  Vector2_t2243707579  Vector2_get_zero_m3966848876 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  RaycastHit2D_t4063908774  Physics2D_Raycast_m2560154475 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  p0, Vector2_t2243707579  p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
extern "C"  Collider2D_t646061738 * RaycastHit2D_get_collider_m2568504212 (RaycastHit2D_t4063908774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m2402264703 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * p0, Object_t1021602117 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RaycastHit2D::op_Implicit(UnityEngine.RaycastHit2D)
extern "C"  bool RaycastHit2D_op_Implicit_m596912073 (Il2CppObject * __this /* static, unused */, RaycastHit2D_t4063908774  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !0 System.Nullable`1<System.Boolean>::GetValueOrDefault()
#define Nullable_1_GetValueOrDefault_m2607283502(__this, method) ((  bool (*) (Nullable_1_t2088641033 *, const MethodInfo*))Nullable_1_GetValueOrDefault_m2607283502_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
#define Nullable_1_get_HasValue_m1733730025(__this, method) ((  bool (*) (Nullable_1_t2088641033 *, const MethodInfo*))Nullable_1_get_HasValue_m1733730025_gshared)(__this, method)
// System.Boolean System.String::op_Inequality(System.String,System.String)
extern "C"  bool String_op_Inequality_m304203149 (Il2CppObject * __this /* static, unused */, String_t* p0, String_t* p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Component::get_tag()
extern "C"  String_t* Component_get_tag_m357168014 (Component_t3819376471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m920475918 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<Element>()
#define GameObject_GetComponent_TisElement_t2605769808_m3486264509(__this, method) ((  Element_t2605769808 * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// System.Void Element::Destruir()
extern "C"  void Element_Destruir_m2001980847 (Element_t2605769808 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cell::.ctor()
extern "C"  void Cell__ctor_m556620985 (Cell_t3051913968 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Cell::setIsEmpty(System.Boolean)
extern "C"  void Cell_setIsEmpty_m3465005831 (Cell_t3051913968 * __this, bool ___dato0, const MethodInfo* method)
{
	{
		bool L_0 = ___dato0;
		__this->set_isEmpty_4(L_0);
		return;
	}
}
// System.Void Cell::Start()
extern "C"  void Cell_Start_m3779694929 (Cell_t3051913968 * __this, const MethodInfo* method)
{
	{
		__this->set_isEmpty_4((bool)1);
		return;
	}
}
// System.Void Cell::Update()
extern "C"  void Cell_Update_m293693946 (Cell_t3051913968 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Cell::Generar()
extern "C"  void Cell_Generar_m4175242929 (Cell_t3051913968 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cell_Generar_m4175242929_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_isEmpty_4();
		if (!L_0)
		{
			goto IL_003d;
		}
	}
	{
		GameObjectU5BU5D_t3057952154* L_1 = __this->get_arrayElements_3();
		GameObjectU5BU5D_t3057952154* L_2 = __this->get_arrayElements_3();
		int32_t L_3 = Random_Range_m694320887(NULL /*static, unused*/, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_2)->max_length)))), /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		GameObject_t1756533147 * L_5 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		Transform_t3275118058 * L_6 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_7 = Transform_get_position_m1104419803(L_6, /*hidden argument*/NULL);
		Quaternion_t4030073918  L_8 = Quaternion_get_identity_m1561886418(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t1756533147_m3064851704(NULL /*static, unused*/, L_5, L_7, L_8, /*hidden argument*/Object_Instantiate_TisGameObject_t1756533147_m3064851704_MethodInfo_var);
		__this->set_isEmpty_4((bool)0);
	}

IL_003d:
	{
		return;
	}
}
// System.Void Element::.ctor()
extern "C"  void Element__ctor_m3274598753 (Element_t2605769808 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Element::Start()
extern "C"  void Element_Start_m2768812673 (Element_t2605769808 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Element_Start_m2768812673_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioSource_t1135106623 * L_0 = Component_GetComponent_TisAudioSource_t1135106623_m3920278003(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t1135106623_m3920278003_MethodInfo_var);
		__this->set_audio_3(L_0);
		GameObjectU5BU5D_t3057952154* L_1 = GameObject_FindGameObjectsWithTag_m2154478296(NULL /*static, unused*/, _stringLiteral2252102943, /*hidden argument*/NULL);
		int32_t L_2 = 0;
		GameObject_t1756533147 * L_3 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		Generador_t1559741577 * L_4 = GameObject_GetComponent_TisGenerador_t1559741577_m1012120736(L_3, /*hidden argument*/GameObject_GetComponent_TisGenerador_t1559741577_m1012120736_MethodInfo_var);
		__this->set_generador_4(L_4);
		GameObjectU5BU5D_t3057952154* L_5 = GameObject_FindGameObjectsWithTag_m2154478296(NULL /*static, unused*/, _stringLiteral878003815, /*hidden argument*/NULL);
		int32_t L_6 = 0;
		GameObject_t1756533147 * L_7 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		Text_t356221433 * L_8 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_7, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		__this->set_score_5(L_8);
		return;
	}
}
// System.Void Element::Update()
extern "C"  void Element_Update_m2358624190 (Element_t2605769808 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Element::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void Element_OnTriggerEnter2D_m1309996761 (Element_t2605769808 * __this, Collider2D_t646061738 * ___objeto0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Element_OnTriggerEnter2D_m1309996761_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider2D_t646061738 * L_0 = ___objeto0;
		GameObject_t1756533147 * L_1 = Component_get_gameObject_m3105766835(L_0, /*hidden argument*/NULL);
		String_t* L_2 = GameObject_get_tag_m1425941094(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_2, _stringLiteral3779991494, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		Collider2D_t646061738 * L_4 = ___objeto0;
		Cell_t3051913968 * L_5 = Component_GetComponent_TisCell_t3051913968_m947207269(L_4, /*hidden argument*/Component_GetComponent_TisCell_t3051913968_m947207269_MethodInfo_var);
		int32_t L_6 = L_5->get_id_2();
		__this->set_idCell_2(L_6);
	}

IL_002b:
	{
		return;
	}
}
// System.Void Element::Destruir()
extern "C"  void Element_Destruir_m2001980847 (Element_t2605769808 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Element_Destruir_m2001980847_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_t3057952154* V_0 = NULL;
	int32_t V_1 = 0;
	{
		GameObjectU5BU5D_t3057952154* L_0 = GameObject_FindGameObjectsWithTag_m2154478296(NULL /*static, unused*/, _stringLiteral3779991494, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_003c;
	}

IL_0012:
	{
		GameObjectU5BU5D_t3057952154* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		GameObject_t1756533147 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		Cell_t3051913968 * L_5 = GameObject_GetComponent_TisCell_t3051913968_m1772861161(L_4, /*hidden argument*/GameObject_GetComponent_TisCell_t3051913968_m1772861161_MethodInfo_var);
		int32_t L_6 = L_5->get_id_2();
		int32_t L_7 = __this->get_idCell_2();
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0038;
		}
	}
	{
		GameObjectU5BU5D_t3057952154* L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10 = L_9;
		GameObject_t1756533147 * L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		Cell_t3051913968 * L_12 = GameObject_GetComponent_TisCell_t3051913968_m1772861161(L_11, /*hidden argument*/GameObject_GetComponent_TisCell_t3051913968_m1772861161_MethodInfo_var);
		Cell_setIsEmpty_m3465005831(L_12, (bool)1, /*hidden argument*/NULL);
	}

IL_0038:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_003c:
	{
		int32_t L_14 = V_1;
		GameObjectU5BU5D_t3057952154* L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_15)->max_length)))))))
		{
			goto IL_0012;
		}
	}
	{
		AudioSource_t1135106623 * L_16 = __this->get_audio_3();
		AudioSource_Play_m353744792(L_16, /*hidden argument*/NULL);
		Generador_t1559741577 * L_17 = __this->get_generador_4();
		Generador_t1559741577 * L_18 = L_17;
		int32_t L_19 = L_18->get_score_9();
		L_18->set_score_9(((int32_t)((int32_t)L_19+(int32_t)1)));
		Text_t356221433 * L_20 = __this->get_score_5();
		Generador_t1559741577 * L_21 = __this->get_generador_4();
		int32_t* L_22 = L_21->get_address_of_score_9();
		String_t* L_23 = Int32_ToString_m2960866144(L_22, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_20, L_23);
		Generador_t1559741577 * L_24 = __this->get_generador_4();
		Generador_t1559741577 * L_25 = L_24;
		int32_t L_26 = L_25->get_contElments_11();
		L_25->set_contElments_11(((int32_t)((int32_t)L_26-(int32_t)1)));
		GameObject_t1756533147 * L_27 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Destroy_m4145850038(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Generador::.ctor()
extern "C"  void Generador__ctor_m3800850464 (Generador_t1559741577 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Generador::Start()
extern "C"  void Generador_Start_m3878041552 (Generador_t1559741577 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Generador_Start_m3878041552_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_cont_2((0.0f));
		GameObjectU5BU5D_t3057952154* L_0 = GameObject_FindGameObjectsWithTag_m2154478296(NULL /*static, unused*/, _stringLiteral3779991494, /*hidden argument*/NULL);
		__this->set_arrayElement_4(L_0);
		__this->set_condition_3((5.0f));
		__this->set_level2_5((bool)0);
		__this->set_level3_6((bool)0);
		__this->set_level4_7((bool)0);
		__this->set_level5_8((bool)0);
		__this->set_score_9(0);
		GameObjectU5BU5D_t3057952154* L_1 = GameObject_FindGameObjectsWithTag_m2154478296(NULL /*static, unused*/, _stringLiteral1594891052, /*hidden argument*/NULL);
		int32_t L_2 = 0;
		GameObject_t1756533147 * L_3 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		Text_t356221433 * L_4 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_3, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		__this->set_level_10(L_4);
		__this->set_contElments_11(0);
		return;
	}
}
// System.Void Generador::Update()
extern "C"  void Generador_Update_m706811565 (Generador_t1559741577 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Generador_Update_m706811565_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Generador_GenerarObjeto_m164918953(__this, /*hidden argument*/NULL);
		int32_t L_0 = __this->get_score_9();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_004a;
		}
	}
	{
		__this->set_level2_5((bool)1);
		__this->set_level3_6((bool)0);
		__this->set_level4_7((bool)0);
		__this->set_level5_8((bool)0);
		__this->set_condition_3((3.0f));
		Text_t356221433 * L_1 = __this->get_level_10();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, _stringLiteral2484685498);
	}

IL_004a:
	{
		int32_t L_2 = __this->get_score_9();
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)20)))))
		{
			goto IL_008e;
		}
	}
	{
		__this->set_level3_6((bool)1);
		__this->set_level2_5((bool)0);
		__this->set_level4_7((bool)0);
		__this->set_level5_8((bool)0);
		__this->set_condition_3((1.0f));
		Text_t356221433 * L_3 = __this->get_level_10();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, _stringLiteral2484685497);
	}

IL_008e:
	{
		int32_t L_4 = __this->get_score_9();
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)40)))))
		{
			goto IL_00d2;
		}
	}
	{
		__this->set_level4_7((bool)1);
		__this->set_level2_5((bool)0);
		__this->set_level3_6((bool)0);
		__this->set_level5_8((bool)0);
		__this->set_condition_3((0.1f));
		Text_t356221433 * L_5 = __this->get_level_10();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteral2484685504);
	}

IL_00d2:
	{
		int32_t L_6 = __this->get_score_9();
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)80)))))
		{
			goto IL_0116;
		}
	}
	{
		__this->set_level2_5((bool)0);
		__this->set_level3_6((bool)0);
		__this->set_level4_7((bool)0);
		__this->set_level5_8((bool)1);
		__this->set_condition_3((0.05f));
		Text_t356221433 * L_7 = __this->get_level_10();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, _stringLiteral2484685503);
	}

IL_0116:
	{
		int32_t L_8 = __this->get_contElments_11();
		if ((((int32_t)L_8) < ((int32_t)((int32_t)39))))
		{
			goto IL_0129;
		}
	}
	{
		SceneManager_LoadScene_m87258056(NULL /*static, unused*/, 2, /*hidden argument*/NULL);
	}

IL_0129:
	{
		return;
	}
}
// System.Void Generador::GenerarObjeto()
extern "C"  void Generador_GenerarObjeto_m164918953 (Generador_t1559741577 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Generador_GenerarObjeto_m164918953_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->get_cont_2();
		float L_1 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_cont_2(((float)((float)L_0+(float)L_1)));
		float L_2 = __this->get_cont_2();
		float L_3 = __this->get_condition_3();
		if ((!(((float)L_2) >= ((float)L_3))))
		{
			goto IL_005d;
		}
	}
	{
		GameObjectU5BU5D_t3057952154* L_4 = __this->get_arrayElement_4();
		GameObjectU5BU5D_t3057952154* L_5 = __this->get_arrayElement_4();
		int32_t L_6 = Random_Range_m694320887(NULL /*static, unused*/, 0, ((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_5)->max_length))))-(int32_t)1)), /*hidden argument*/NULL);
		int32_t L_7 = L_6;
		GameObject_t1756533147 * L_8 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Cell_t3051913968 * L_9 = GameObject_GetComponent_TisCell_t3051913968_m1772861161(L_8, /*hidden argument*/GameObject_GetComponent_TisCell_t3051913968_m1772861161_MethodInfo_var);
		Cell_Generar_m4175242929(L_9, /*hidden argument*/NULL);
		int32_t L_10 = __this->get_contElments_11();
		__this->set_contElments_11(((int32_t)((int32_t)L_10+(int32_t)1)));
		__this->set_cont_2((0.0f));
	}

IL_005d:
	{
		return;
	}
}
// System.Void RayCast::.ctor()
extern "C"  void RayCast__ctor_m2088849326 (RayCast_t178483017 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RayCast::Start()
extern "C"  void RayCast_Start_m1701073870 (RayCast_t178483017 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void RayCast::Update()
extern "C"  void RayCast_Update_m2904143889 (RayCast_t178483017 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RayCast_Update_m2904143889_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t2088641033  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t G_B5_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButtonDown_m47917805(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_00c8;
		}
	}
	{
		Camera_t189460977 * L_1 = Camera_get_main_m475173995(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		Vector3_t2243707580  L_2 = Input_get_mousePosition_m146923508(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t2243707580  L_3 = Camera_ScreenToWorldPoint_m929392728(L_1, L_2, /*hidden argument*/NULL);
		Vector2_t2243707579  L_4 = Vector2_op_Implicit_m1064335535(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		Vector2_t2243707579  L_5 = Vector2_get_zero_m3966848876(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t2540166467_il2cpp_TypeInfo_var);
		RaycastHit2D_t4063908774  L_6 = Physics2D_Raycast_m2560154475(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		__this->set_hit_2(L_6);
		RaycastHit2D_t4063908774 * L_7 = __this->get_address_of_hit_2();
		Collider2D_t646061738 * L_8 = RaycastHit2D_get_collider_m2568504212(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Inequality_m2402264703(NULL /*static, unused*/, L_8, (Object_t1021602117 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_00c8;
		}
	}
	{
		RaycastHit2D_t4063908774  L_10 = __this->get_hit_2();
		bool L_11 = RaycastHit2D_op_Implicit_m596912073(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		Initobj (Nullable_1_t2088641033_il2cpp_TypeInfo_var, (&V_0));
		Nullable_1_t2088641033  L_12 = V_0;
		V_0 = L_12;
		bool L_13 = Nullable_1_GetValueOrDefault_m2607283502((&V_0), /*hidden argument*/Nullable_1_GetValueOrDefault_m2607283502_MethodInfo_var);
		if ((!(((uint32_t)L_11) == ((uint32_t)L_13))))
		{
			goto IL_006f;
		}
	}
	{
		bool L_14 = Nullable_1_get_HasValue_m1733730025((&V_0), /*hidden argument*/Nullable_1_get_HasValue_m1733730025_MethodInfo_var);
		G_B5_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		goto IL_0070;
	}

IL_006f:
	{
		G_B5_0 = 1;
	}

IL_0070:
	{
		if (!G_B5_0)
		{
			goto IL_00c8;
		}
	}
	{
		RaycastHit2D_t4063908774 * L_15 = __this->get_address_of_hit_2();
		Collider2D_t646061738 * L_16 = RaycastHit2D_get_collider_m2568504212(L_15, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_17 = Component_get_gameObject_m3105766835(L_16, /*hidden argument*/NULL);
		String_t* L_18 = GameObject_get_tag_m1425941094(L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_19 = String_op_Inequality_m304203149(NULL /*static, unused*/, L_18, _stringLiteral3779991494, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00c8;
		}
	}
	{
		RaycastHit2D_t4063908774 * L_20 = __this->get_address_of_hit_2();
		Collider2D_t646061738 * L_21 = RaycastHit2D_get_collider_m2568504212(L_20, /*hidden argument*/NULL);
		String_t* L_22 = Component_get_tag_m357168014(L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		RaycastHit2D_t4063908774 * L_23 = __this->get_address_of_hit_2();
		Collider2D_t646061738 * L_24 = RaycastHit2D_get_collider_m2568504212(L_23, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_25 = Component_get_gameObject_m3105766835(L_24, /*hidden argument*/NULL);
		Element_t2605769808 * L_26 = GameObject_GetComponent_TisElement_t2605769808_m3486264509(L_25, /*hidden argument*/GameObject_GetComponent_TisElement_t2605769808_m3486264509_MethodInfo_var);
		Element_Destruir_m2001980847(L_26, /*hidden argument*/NULL);
	}

IL_00c8:
	{
		return;
	}
}
// System.Void toCredits::.ctor()
extern "C"  void toCredits__ctor_m683222592 (toCredits_t1814485887 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void toCredits::Start()
extern "C"  void toCredits_Start_m1581075140 (toCredits_t1814485887 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void toCredits::Update()
extern "C"  void toCredits_Update_m789706795 (toCredits_t1814485887 * __this, const MethodInfo* method)
{
	{
		float L_0 = __this->get_cont_2();
		float L_1 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_cont_2(((float)((float)L_0+(float)L_1)));
		float L_2 = __this->get_cont_2();
		if ((!(((float)L_2) >= ((float)(3.0f)))))
		{
			goto IL_0028;
		}
	}
	{
		SceneManager_LoadScene_m87258056(NULL /*static, unused*/, 3, /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}
}
// System.Void toGame::.ctor()
extern "C"  void toGame__ctor_m2793500786 (toGame_t4255897611 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void toGame::Start()
extern "C"  void toGame_Start_m2039959990 (toGame_t4255897611 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void toGame::Update()
extern "C"  void toGame_Update_m1225891891 (toGame_t4255897611 * __this, const MethodInfo* method)
{
	{
		float L_0 = __this->get_cont_2();
		float L_1 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_cont_2(((float)((float)L_0+(float)L_1)));
		float L_2 = __this->get_cont_2();
		if ((!(((float)L_2) >= ((float)(3.0f)))))
		{
			goto IL_0028;
		}
	}
	{
		SceneManager_LoadScene_m87258056(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
