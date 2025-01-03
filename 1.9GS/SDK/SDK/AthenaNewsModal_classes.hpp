#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaNewsModal

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaNewsModal.AthenaNewsModal_C
// 0x0040 (0x0448 - 0x0408)
class UAthenaNewsModal_C final : public UFortActivatablePanel
{
public:
	uint8                                         Pad_408[0x8];                                      // 0x0408(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0410(0x0008)(Transient, DuplicateTransient)
	class UAthenaNews_C*                          AthenaNews;                                        // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      CloseButton;                                       // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             DescriptionScroll;                                 // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                            Lightbox;                                          // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MainIcon;                                          // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Title;                                             // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaNewsModal(int32 EntryPoint);
	void Construct();
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaNewsModal_C">();
	}
	static class UAthenaNewsModal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaNewsModal_C>();
	}
};
static_assert(alignof(UAthenaNewsModal_C) == 0x000008, "Wrong alignment on UAthenaNewsModal_C");
static_assert(sizeof(UAthenaNewsModal_C) == 0x000448, "Wrong size on UAthenaNewsModal_C");
static_assert(offsetof(UAthenaNewsModal_C, UberGraphFrame) == 0x000410, "Member 'UAthenaNewsModal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, AthenaNews) == 0x000418, "Member 'UAthenaNewsModal_C::AthenaNews' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, CloseButton) == 0x000420, "Member 'UAthenaNewsModal_C::CloseButton' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, DescriptionScroll) == 0x000428, "Member 'UAthenaNewsModal_C::DescriptionScroll' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, Lightbox) == 0x000430, "Member 'UAthenaNewsModal_C::Lightbox' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, MainIcon) == 0x000438, "Member 'UAthenaNewsModal_C::MainIcon' has a wrong offset!");
static_assert(offsetof(UAthenaNewsModal_C, Title) == 0x000440, "Member 'UAthenaNewsModal_C::Title' has a wrong offset!");

}

