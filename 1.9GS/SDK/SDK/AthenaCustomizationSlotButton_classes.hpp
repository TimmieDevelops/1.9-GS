#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaCustomizationSlotButton

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C
// 0x00F8 (0x09B0 - 0x08B8)
class UAthenaCustomizationSlotButton_C final : public UAthenaCustomizationSlotSelectorButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x08B8(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 EmptyImage;                                        // 0x08C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageSlotType;                                     // 0x08C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNormalBangWrapper_C*                   NormalBangWrapper;                                 // 0x08D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OverlayTypeIcon;                                   // 0x08D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   TooltipBody;                                       // 0x08E0(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                   TooltipHeader;                                     // 0x08F8(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          ShowSubTypeIcon;                                   // 0x0910(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_911[0x7];                                      // 0x0911(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            SubTypeIcon;                                       // 0x0918(0x0090)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          bSuppressTooltip;                                  // 0x09A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	EFortItemCardSize                             SlottedItemCardSize;                               // 0x09A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_9AA[0x2];                                      // 0x09AA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TypeIconVerticalOffset;                            // 0x09AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaCustomizationSlotButton(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Update_SubType_Icon_Image();
	void Update_SubType_Icon_Glow(bool GlowIcon);
	void UpdateTypeIconOffset(float VerticalOffset);
	ESlateVisibility ShouldShowEmptyImage();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaCustomizationSlotButton_C">();
	}
	static class UAthenaCustomizationSlotButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaCustomizationSlotButton_C>();
	}
};
static_assert(alignof(UAthenaCustomizationSlotButton_C) == 0x000008, "Wrong alignment on UAthenaCustomizationSlotButton_C");
static_assert(sizeof(UAthenaCustomizationSlotButton_C) == 0x0009B0, "Wrong size on UAthenaCustomizationSlotButton_C");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, UberGraphFrame) == 0x0008B8, "Member 'UAthenaCustomizationSlotButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, EmptyImage) == 0x0008C0, "Member 'UAthenaCustomizationSlotButton_C::EmptyImage' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, ImageSlotType) == 0x0008C8, "Member 'UAthenaCustomizationSlotButton_C::ImageSlotType' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, NormalBangWrapper) == 0x0008D0, "Member 'UAthenaCustomizationSlotButton_C::NormalBangWrapper' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, OverlayTypeIcon) == 0x0008D8, "Member 'UAthenaCustomizationSlotButton_C::OverlayTypeIcon' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, TooltipBody) == 0x0008E0, "Member 'UAthenaCustomizationSlotButton_C::TooltipBody' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, TooltipHeader) == 0x0008F8, "Member 'UAthenaCustomizationSlotButton_C::TooltipHeader' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, ShowSubTypeIcon) == 0x000910, "Member 'UAthenaCustomizationSlotButton_C::ShowSubTypeIcon' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, SubTypeIcon) == 0x000918, "Member 'UAthenaCustomizationSlotButton_C::SubTypeIcon' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, bSuppressTooltip) == 0x0009A8, "Member 'UAthenaCustomizationSlotButton_C::bSuppressTooltip' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, SlottedItemCardSize) == 0x0009A9, "Member 'UAthenaCustomizationSlotButton_C::SlottedItemCardSize' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, TypeIconVerticalOffset) == 0x0009AC, "Member 'UAthenaCustomizationSlotButton_C::TypeIconVerticalOffset' has a wrong offset!");

}
