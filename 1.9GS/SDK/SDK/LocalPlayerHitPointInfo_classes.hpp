#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LocalPlayerHitPointInfo

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LocalPlayerHitPointInfo.LocalPlayerHitPointInfo_C
// 0x0028 (0x0288 - 0x0260)
class ULocalPlayerHitPointInfo_C final : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(Transient, DuplicateTransient)
	class UFortBangWrapper*                       _Bang_Wrapper___PlayerInfo_;                       // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHitPointBar_C*                         _Hit_Point_Bar__Health;                            // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHitPointBar_C*                         _Hit_Point_Bar__Shield;                            // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHitPointBar_C*                         _Hit_Point_Bar__Stamina;                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_LocalPlayerHitPointInfo(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LocalPlayerHitPointInfo_C">();
	}
	static class ULocalPlayerHitPointInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULocalPlayerHitPointInfo_C>();
	}
};
static_assert(alignof(ULocalPlayerHitPointInfo_C) == 0x000008, "Wrong alignment on ULocalPlayerHitPointInfo_C");
static_assert(sizeof(ULocalPlayerHitPointInfo_C) == 0x000288, "Wrong size on ULocalPlayerHitPointInfo_C");
static_assert(offsetof(ULocalPlayerHitPointInfo_C, UberGraphFrame) == 0x000260, "Member 'ULocalPlayerHitPointInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULocalPlayerHitPointInfo_C, _Bang_Wrapper___PlayerInfo_) == 0x000268, "Member 'ULocalPlayerHitPointInfo_C::_Bang_Wrapper___PlayerInfo_' has a wrong offset!");
static_assert(offsetof(ULocalPlayerHitPointInfo_C, _Hit_Point_Bar__Health) == 0x000270, "Member 'ULocalPlayerHitPointInfo_C::_Hit_Point_Bar__Health' has a wrong offset!");
static_assert(offsetof(ULocalPlayerHitPointInfo_C, _Hit_Point_Bar__Shield) == 0x000278, "Member 'ULocalPlayerHitPointInfo_C::_Hit_Point_Bar__Shield' has a wrong offset!");
static_assert(offsetof(ULocalPlayerHitPointInfo_C, _Hit_Point_Bar__Stamina) == 0x000280, "Member 'ULocalPlayerHitPointInfo_C::_Hit_Point_Bar__Stamina' has a wrong offset!");

}
