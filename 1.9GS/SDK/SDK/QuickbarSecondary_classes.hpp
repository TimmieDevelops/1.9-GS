#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QuickbarSecondary

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "QuickbarBase_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass QuickbarSecondary.QuickbarSecondary_C
// 0x0088 (0x0310 - 0x0288)
class UQuickbarSecondary_C final : public UQuickbarBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_QuickbarSecondary_C;                // 0x0288(0x0008)(Transient, DuplicateTransient)
	class UHorizontalBox*                         _Horizontal_Box__Camera_Mode_Content;              // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 _Image__Separator;                                 // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 _Image__Switch_Action;                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                       KeybindSwitchBinding;                              // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuickbarSlot_C*                        Quickbar_Slot_F1;                                  // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuickbarSlot_C*                        Quickbar_Slot_F2;                                  // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuickbarSlot_C*                        Quickbar_Slot_F3;                                  // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuickbarSlot_C*                        Quickbar_Slot_F4;                                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuickbarSlot_C*                        Quickbar_Slot_F5;                                  // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Building;                                  // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortBangWrapper*                       TutorialQBS1;                                      // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortBangWrapper*                       TutorialQBS2;                                      // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortBangWrapper*                       TutorialQBS3;                                      // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortBangWrapper*                       TutorialQBS4;                                      // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortBangWrapper*                       TutorialQBS5;                                      // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         SecondaryFocusedSlot;                              // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_QuickbarSecondary(int32 EntryPoint);
	void Destruct();
	void HandleInputMethodChanged(bool bUsingGamepad);
	void HandleKeybindsChanged();
	void Minimize();
	void Maximize();
	void Construct();
	void Show_Secondary_Quickbar_Rail(bool Show);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuickbarSecondary_C">();
	}
	static class UQuickbarSecondary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuickbarSecondary_C>();
	}
};
static_assert(alignof(UQuickbarSecondary_C) == 0x000008, "Wrong alignment on UQuickbarSecondary_C");
static_assert(sizeof(UQuickbarSecondary_C) == 0x000310, "Wrong size on UQuickbarSecondary_C");
static_assert(offsetof(UQuickbarSecondary_C, UberGraphFrame_QuickbarSecondary_C) == 0x000288, "Member 'UQuickbarSecondary_C::UberGraphFrame_QuickbarSecondary_C' has a wrong offset!");
static_assert(offsetof(UQuickbarSecondary_C, _Horizontal_Box__Camera_Mode_Content) == 0x000290, "Member 'UQuickbarSecondary_C::_Horizontal_Box__Camera_Mode_Content' has a wrong offset!");
static_assert(offsetof(UQuickbarSecondary_C, _Image__Separator) == 0x000298, "Member 'UQuickbarSecondary_C::_Image__Separator' has a wrong offset!");
static_assert(offsetof(UQuickbarSecondary_C, _Image__Switch_Action) == 0x0002A0, "Member 'UQuickbarSecondary_C::_Image__Switch_Action' has a wrong offset!");
static_assert(offsetof(UQuickbarSecondary_C, KeybindSwitchBinding) == 0x0002A8, "Member 'UQuickbarSecondary_C::KeybindSwitchBinding' has a wrong offset!");
static_assert(offsetof(UQuickbarSecondary_C, Quickbar_Slot_F1) == 0x0002B0, "Member 'UQuickbarSecondary_C::Quickbar_Slot_F1' has a wrong offset!");
static_assert(offsetof(UQuickbarSecondary_C, Quickbar_Slot_F2) == 0x0002B8, "Member 'UQuickbarSecondary_C::Quickbar_Slot_F2' has a wrong offset!");
static_assert(offsetof(UQuickbarSecondary_C, Quickbar_Slot_F3) == 0x0002C0, "Member 'UQuickbarSecondary_C::Quickbar_Slot_F3' has a wrong offset!");
static_assert(offsetof(UQuickbarSecondary_C, Quickbar_Slot_F4) == 0x0002C8, "Member 'UQuickbarSecondary_C::Quickbar_Slot_F4' has a wrong offset!");
static_assert(offsetof(UQuickbarSecondary_C, Quickbar_Slot_F5) == 0x0002D0, "Member 'UQuickbarSecondary_C::Quickbar_Slot_F5' has a wrong offset!");
static_assert(offsetof(UQuickbarSecondary_C, SizeBox_Building) == 0x0002D8, "Member 'UQuickbarSecondary_C::SizeBox_Building' has a wrong offset!");
static_assert(offsetof(UQuickbarSecondary_C, TutorialQBS1) == 0x0002E0, "Member 'UQuickbarSecondary_C::TutorialQBS1' has a wrong offset!");
static_assert(offsetof(UQuickbarSecondary_C, TutorialQBS2) == 0x0002E8, "Member 'UQuickbarSecondary_C::TutorialQBS2' has a wrong offset!");
static_assert(offsetof(UQuickbarSecondary_C, TutorialQBS3) == 0x0002F0, "Member 'UQuickbarSecondary_C::TutorialQBS3' has a wrong offset!");
static_assert(offsetof(UQuickbarSecondary_C, TutorialQBS4) == 0x0002F8, "Member 'UQuickbarSecondary_C::TutorialQBS4' has a wrong offset!");
static_assert(offsetof(UQuickbarSecondary_C, TutorialQBS5) == 0x000300, "Member 'UQuickbarSecondary_C::TutorialQBS5' has a wrong offset!");
static_assert(offsetof(UQuickbarSecondary_C, SecondaryFocusedSlot) == 0x000308, "Member 'UQuickbarSecondary_C::SecondaryFocusedSlot' has a wrong offset!");

}
