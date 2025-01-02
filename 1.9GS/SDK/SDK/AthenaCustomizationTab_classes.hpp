#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaCustomizationTab

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"
#include "Engine_structs.hpp"
#include "CommonUI_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaCustomizationTab.AthenaCustomizationTab_C
// 0x00A0 (0x04B0 - 0x0410)
class UAthenaCustomizationTab_C final : public UAthenaCustomizationScreenBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0410(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       IntroPicker;                                       // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* BackpackSlot;                                      // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationBannerButton_C*     BannerSlot;                                        // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* BattleBusSlot;                                     // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* CharacterSlot;                                     // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* DanceSlot;                                         // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Divider;                                           // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* GliderSlot;                                        // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* HarvestToolSlot;                                   // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* HatSlot;                                           // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       HeaderItemType;                                    // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* LoadScreenSlot;                                    // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerRankEmblem_C*                    PlayerRankEmblem_C_9;                              // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* TauntSlot;                                         // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* VictoryPoseSlot;                                   // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          PickingCosmetic;                                   // 0x0490(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_491[0x7];                                      // 0x0491(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                PickingRestoreFocusWidget;                         // 0x0498(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UProgressModalWidget_C*                 ProgressModal;                                     // 0x04A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_LocalPlayerProfileModal_C*          NewLocalPlayerWidget;                              // 0x04A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaCustomizationTab(int32 EntryPoint);
	void BndEvt__HarvestToolSlot_K2Node_ComponentBoundEvent_800_OnSlotClicked__DelegateSignature(EAthenaCustomizationCategory CustomizationType, class UCommonButton* Button, const class FText& BannerLabel);
	void BndEvt__CharacterSlot_K2Node_ComponentBoundEvent_785_OnSlotClicked__DelegateSignature(EAthenaCustomizationCategory CustomizationType, class UCommonButton* Button, const class FText& BannerLabel);
	void BndEvt__GliderSlot_K2Node_ComponentBoundEvent_540_OnSlotClicked__DelegateSignature(EAthenaCustomizationCategory CustomizationType, class UCommonButton* Button, const class FText& BannerLabel);
	void BndEvt__VictoryPoseSlot_K2Node_ComponentBoundEvent_390_OnSlotClicked__DelegateSignature(EAthenaCustomizationCategory CustomizationType, class UCommonButton* Button, const class FText& BannerLabel);
	void BndEvt__TauntSlot_K2Node_ComponentBoundEvent_377_OnSlotClicked__DelegateSignature(EAthenaCustomizationCategory CustomizationType, class UCommonButton* Button, const class FText& BannerLabel);
	void BndEvt__DanceSlot_K2Node_ComponentBoundEvent_365_OnSlotClicked__DelegateSignature(EAthenaCustomizationCategory CustomizationType, class UCommonButton* Button, const class FText& BannerLabel);
	void BndEvt__BattleBusSlot_K2Node_ComponentBoundEvent_354_OnSlotClicked__DelegateSignature(EAthenaCustomizationCategory CustomizationType, class UCommonButton* Button, const class FText& BannerLabel);
	void BndEvt__BackpackSlot_K2Node_ComponentBoundEvent_344_OnSlotClicked__DelegateSignature(EAthenaCustomizationCategory CustomizationType, class UCommonButton* Button, const class FText& BannerLabel);
	void BndEvt__HatSlot_K2Node_ComponentBoundEvent_335_OnSlotClicked__DelegateSignature(EAthenaCustomizationCategory CustomizationType, class UCommonButton* Button, const class FText& BannerLabel);
	void BndEvt__LoadScreenSlot_K2Node_ComponentBoundEvent_40_OnSlotClicked__DelegateSignature(EAthenaCustomizationCategory CustomizationType, class UCommonButton* Button, const class FText& BannerLabel);
	void BndEvt__AthenaCustomizationBannerButton_490_K2Node_ComponentBoundEvent_205_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_30_OnCosmeticChangeSaveEvent__DelegateSignature();
	void BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_12_OnCosmeticChangeSaveEvent__DelegateSignature();
	void Construct();
	void OnDeactivated();
	void OnInputModeChanged(bool bUsingGamepad);
	void OnActivated();
	void HandleCancel(bool* PassThrough);
	void RegisterCancel();
	void RegisterInputActions();
	void BeginPickingCustomization(EAthenaCustomizationCategory Category, class UWidget* WidgetToReturnFocusTo, const class FText& HeaderText);
	void EndPickingCustomization(bool RestoreFocus);
	void SelectInitialWidgetForGamepad();
	void RefreshInputActions();
	void ShowThrobber();
	void SelectFirstWidget();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaCustomizationTab_C">();
	}
	static class UAthenaCustomizationTab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaCustomizationTab_C>();
	}
};
static_assert(alignof(UAthenaCustomizationTab_C) == 0x000008, "Wrong alignment on UAthenaCustomizationTab_C");
static_assert(sizeof(UAthenaCustomizationTab_C) == 0x0004B0, "Wrong size on UAthenaCustomizationTab_C");
static_assert(offsetof(UAthenaCustomizationTab_C, UberGraphFrame) == 0x000410, "Member 'UAthenaCustomizationTab_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationTab_C, IntroPicker) == 0x000418, "Member 'UAthenaCustomizationTab_C::IntroPicker' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationTab_C, BackpackSlot) == 0x000420, "Member 'UAthenaCustomizationTab_C::BackpackSlot' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationTab_C, BannerSlot) == 0x000428, "Member 'UAthenaCustomizationTab_C::BannerSlot' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationTab_C, BattleBusSlot) == 0x000430, "Member 'UAthenaCustomizationTab_C::BattleBusSlot' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationTab_C, CharacterSlot) == 0x000438, "Member 'UAthenaCustomizationTab_C::CharacterSlot' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationTab_C, DanceSlot) == 0x000440, "Member 'UAthenaCustomizationTab_C::DanceSlot' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationTab_C, Divider) == 0x000448, "Member 'UAthenaCustomizationTab_C::Divider' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationTab_C, GliderSlot) == 0x000450, "Member 'UAthenaCustomizationTab_C::GliderSlot' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationTab_C, HarvestToolSlot) == 0x000458, "Member 'UAthenaCustomizationTab_C::HarvestToolSlot' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationTab_C, HatSlot) == 0x000460, "Member 'UAthenaCustomizationTab_C::HatSlot' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationTab_C, HeaderItemType) == 0x000468, "Member 'UAthenaCustomizationTab_C::HeaderItemType' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationTab_C, LoadScreenSlot) == 0x000470, "Member 'UAthenaCustomizationTab_C::LoadScreenSlot' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationTab_C, PlayerRankEmblem_C_9) == 0x000478, "Member 'UAthenaCustomizationTab_C::PlayerRankEmblem_C_9' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationTab_C, TauntSlot) == 0x000480, "Member 'UAthenaCustomizationTab_C::TauntSlot' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationTab_C, VictoryPoseSlot) == 0x000488, "Member 'UAthenaCustomizationTab_C::VictoryPoseSlot' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationTab_C, PickingCosmetic) == 0x000490, "Member 'UAthenaCustomizationTab_C::PickingCosmetic' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationTab_C, PickingRestoreFocusWidget) == 0x000498, "Member 'UAthenaCustomizationTab_C::PickingRestoreFocusWidget' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationTab_C, ProgressModal) == 0x0004A0, "Member 'UAthenaCustomizationTab_C::ProgressModal' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationTab_C, NewLocalPlayerWidget) == 0x0004A8, "Member 'UAthenaCustomizationTab_C::NewLocalPlayerWidget' has a wrong offset!");

}
