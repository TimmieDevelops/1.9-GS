#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ImpactNumbers

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ImpactNumbers.ImpactNumbers_C
// 0x0080 (0x05E0 - 0x0560)
class AImpactNumbers_C final : public AFortDamageNumbersActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0560(0x0008)(Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0568(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Spacing_percentage_for_1s;                         // 0x0570(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FontYSize_0;                                       // 0x0574(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FontXSize_0;                                       // 0x0578(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FontSizeScaleMaxPerc;                              // 0x057C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Standard_Hit_Color;                                // 0x0580(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Critical_Wall_Hit_Color;                           // 0x0590(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Player_Damage_Color;                               // 0x05A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Number_Spacing_Multiplier;                         // 0x05B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Number_of_number_rotations;                        // 0x05B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Critical_Hit_Multiplier;                           // 0x05B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Distance_from_Camera_Before_Doubling_Size;         // 0x05BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Critical_Enemy_Hit_Color;                          // 0x05C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                        Number_offset_per;                                 // 0x05D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void ExecuteUbergraph_ImpactNumbers(int32 EntryPoint);
	void OnNewDamageNumber(const struct FFortDamageNumberInfo& NewDamageNumberInfo);
	void UserConstructionScript();
	void init_a_new_number_set(struct FFortDamageNumberInfo& NewDamageHitInfoStruct, struct FTransform* OutCameraTransform, struct FVector* OutNumberLocation);
	void Set_Material_Pararmeters(struct FFortDamageNumberInfo& NewDamageHitInfoStruct, const struct FTransform& CameraTransform, const struct FVector& NumberLocation);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ImpactNumbers_C">();
	}
	static class AImpactNumbers_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AImpactNumbers_C>();
	}
};
static_assert(alignof(AImpactNumbers_C) == 0x000008, "Wrong alignment on AImpactNumbers_C");
static_assert(sizeof(AImpactNumbers_C) == 0x0005E0, "Wrong size on AImpactNumbers_C");
static_assert(offsetof(AImpactNumbers_C, UberGraphFrame) == 0x000560, "Member 'AImpactNumbers_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AImpactNumbers_C, DefaultSceneRoot) == 0x000568, "Member 'AImpactNumbers_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AImpactNumbers_C, Spacing_percentage_for_1s) == 0x000570, "Member 'AImpactNumbers_C::Spacing_percentage_for_1s' has a wrong offset!");
static_assert(offsetof(AImpactNumbers_C, FontYSize_0) == 0x000574, "Member 'AImpactNumbers_C::FontYSize_0' has a wrong offset!");
static_assert(offsetof(AImpactNumbers_C, FontXSize_0) == 0x000578, "Member 'AImpactNumbers_C::FontXSize_0' has a wrong offset!");
static_assert(offsetof(AImpactNumbers_C, FontSizeScaleMaxPerc) == 0x00057C, "Member 'AImpactNumbers_C::FontSizeScaleMaxPerc' has a wrong offset!");
static_assert(offsetof(AImpactNumbers_C, Standard_Hit_Color) == 0x000580, "Member 'AImpactNumbers_C::Standard_Hit_Color' has a wrong offset!");
static_assert(offsetof(AImpactNumbers_C, Critical_Wall_Hit_Color) == 0x000590, "Member 'AImpactNumbers_C::Critical_Wall_Hit_Color' has a wrong offset!");
static_assert(offsetof(AImpactNumbers_C, Player_Damage_Color) == 0x0005A0, "Member 'AImpactNumbers_C::Player_Damage_Color' has a wrong offset!");
static_assert(offsetof(AImpactNumbers_C, Number_Spacing_Multiplier) == 0x0005B0, "Member 'AImpactNumbers_C::Number_Spacing_Multiplier' has a wrong offset!");
static_assert(offsetof(AImpactNumbers_C, Number_of_number_rotations) == 0x0005B4, "Member 'AImpactNumbers_C::Number_of_number_rotations' has a wrong offset!");
static_assert(offsetof(AImpactNumbers_C, Critical_Hit_Multiplier) == 0x0005B8, "Member 'AImpactNumbers_C::Critical_Hit_Multiplier' has a wrong offset!");
static_assert(offsetof(AImpactNumbers_C, Distance_from_Camera_Before_Doubling_Size) == 0x0005BC, "Member 'AImpactNumbers_C::Distance_from_Camera_Before_Doubling_Size' has a wrong offset!");
static_assert(offsetof(AImpactNumbers_C, Critical_Enemy_Hit_Color) == 0x0005C0, "Member 'AImpactNumbers_C::Critical_Enemy_Hit_Color' has a wrong offset!");
static_assert(offsetof(AImpactNumbers_C, Number_offset_per) == 0x0005D0, "Member 'AImpactNumbers_C::Number_offset_per' has a wrong offset!");

}
