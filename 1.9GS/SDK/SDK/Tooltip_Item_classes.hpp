#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Tooltip_Item

#include "Basic.hpp"

#include "ItemTooltip_DisplayMode_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Tooltip-Item.Tooltip-Item_C
// 0x0098 (0x02C8 - 0x0230)
class UTooltip_Item_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       _Anim__Intro;                                      // 0x0238(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         _Horizontal_Box__Body;                             // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         _Horizontal_Box__Header;                           // 0x0248(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 _Image__Div_Header;                                // 0x0250(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 _Image__Header;                                    // 0x0258(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                _Spacer__Header;                                   // 0x0260(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                _Spacer__Icon;                                     // 0x0268(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             _Text__Header;                                     // 0x0270(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                BorderContent;                                     // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemTooltipContent_C*                  ItemTooltipContent;                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   HeaderText;                                        // 0x0288(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class USlateBrushAsset*                       Icon_Brush;                                        // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UFortItem*                              Item;                                              // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	EItemTooltip_DisplayMode                      DisplayMode;                                       // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_2B1[0x7];                                      // 0x02B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortItem*                              Comparison_Item;                                   // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         OverrideQuantity;                                  // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Tooltip_Item(int32 EntryPoint);
	void Construct();
	struct FSlateBrush Get_Icon_Brush();
	struct FLinearColor Get_Theme_Color__Normal_();
	ESlateVisibility Get_Tooltip_Header_Visibility();
	ESlateVisibility Get_Tooltip_Header_Icon_Visibility();
	ESlateVisibility Get_Tooltip_Header_Text_Visibility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Tooltip-Item_C">();
	}
	static class UTooltip_Item_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTooltip_Item_C>();
	}
};
static_assert(alignof(UTooltip_Item_C) == 0x000008, "Wrong alignment on UTooltip_Item_C");
static_assert(sizeof(UTooltip_Item_C) == 0x0002C8, "Wrong size on UTooltip_Item_C");
static_assert(offsetof(UTooltip_Item_C, UberGraphFrame) == 0x000230, "Member 'UTooltip_Item_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTooltip_Item_C, _Anim__Intro) == 0x000238, "Member 'UTooltip_Item_C::_Anim__Intro' has a wrong offset!");
static_assert(offsetof(UTooltip_Item_C, _Horizontal_Box__Body) == 0x000240, "Member 'UTooltip_Item_C::_Horizontal_Box__Body' has a wrong offset!");
static_assert(offsetof(UTooltip_Item_C, _Horizontal_Box__Header) == 0x000248, "Member 'UTooltip_Item_C::_Horizontal_Box__Header' has a wrong offset!");
static_assert(offsetof(UTooltip_Item_C, _Image__Div_Header) == 0x000250, "Member 'UTooltip_Item_C::_Image__Div_Header' has a wrong offset!");
static_assert(offsetof(UTooltip_Item_C, _Image__Header) == 0x000258, "Member 'UTooltip_Item_C::_Image__Header' has a wrong offset!");
static_assert(offsetof(UTooltip_Item_C, _Spacer__Header) == 0x000260, "Member 'UTooltip_Item_C::_Spacer__Header' has a wrong offset!");
static_assert(offsetof(UTooltip_Item_C, _Spacer__Icon) == 0x000268, "Member 'UTooltip_Item_C::_Spacer__Icon' has a wrong offset!");
static_assert(offsetof(UTooltip_Item_C, _Text__Header) == 0x000270, "Member 'UTooltip_Item_C::_Text__Header' has a wrong offset!");
static_assert(offsetof(UTooltip_Item_C, BorderContent) == 0x000278, "Member 'UTooltip_Item_C::BorderContent' has a wrong offset!");
static_assert(offsetof(UTooltip_Item_C, ItemTooltipContent) == 0x000280, "Member 'UTooltip_Item_C::ItemTooltipContent' has a wrong offset!");
static_assert(offsetof(UTooltip_Item_C, HeaderText) == 0x000288, "Member 'UTooltip_Item_C::HeaderText' has a wrong offset!");
static_assert(offsetof(UTooltip_Item_C, Icon_Brush) == 0x0002A0, "Member 'UTooltip_Item_C::Icon_Brush' has a wrong offset!");
static_assert(offsetof(UTooltip_Item_C, Item) == 0x0002A8, "Member 'UTooltip_Item_C::Item' has a wrong offset!");
static_assert(offsetof(UTooltip_Item_C, DisplayMode) == 0x0002B0, "Member 'UTooltip_Item_C::DisplayMode' has a wrong offset!");
static_assert(offsetof(UTooltip_Item_C, Comparison_Item) == 0x0002B8, "Member 'UTooltip_Item_C::Comparison_Item' has a wrong offset!");
static_assert(offsetof(UTooltip_Item_C, OverrideQuantity) == 0x0002C0, "Member 'UTooltip_Item_C::OverrideQuantity' has a wrong offset!");

}
