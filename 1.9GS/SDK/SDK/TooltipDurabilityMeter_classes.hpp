#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TooltipDurabilityMeter

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TooltipDurabilityMeter.TooltipDurabilityMeter_C
// 0x0098 (0x02C8 - 0x0230)
class UTooltipDurabilityMeter_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(Transient, DuplicateTransient)
	class UVerticalBox*                           _Vertical_Box__Durability;                         // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemDurabilityMeter_C*                 ItemDurabilityMeter;                               // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTooltip_DisplayAttribute_C*            Tooltip_DisplayAttribute;                          // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFortDisplayAttribute                  DisplayData;                                       // 0x0250(0x0070)(Edit, BlueprintVisible, ExposeOnSpawn)
	float                                         Normalized;                                        // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_TooltipDurabilityMeter(int32 EntryPoint);
	void Construct();
	void Draw(float Normalized_0, const struct FFortDisplayAttribute& Display_Attribute);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TooltipDurabilityMeter_C">();
	}
	static class UTooltipDurabilityMeter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTooltipDurabilityMeter_C>();
	}
};
static_assert(alignof(UTooltipDurabilityMeter_C) == 0x000008, "Wrong alignment on UTooltipDurabilityMeter_C");
static_assert(sizeof(UTooltipDurabilityMeter_C) == 0x0002C8, "Wrong size on UTooltipDurabilityMeter_C");
static_assert(offsetof(UTooltipDurabilityMeter_C, UberGraphFrame) == 0x000230, "Member 'UTooltipDurabilityMeter_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTooltipDurabilityMeter_C, _Vertical_Box__Durability) == 0x000238, "Member 'UTooltipDurabilityMeter_C::_Vertical_Box__Durability' has a wrong offset!");
static_assert(offsetof(UTooltipDurabilityMeter_C, ItemDurabilityMeter) == 0x000240, "Member 'UTooltipDurabilityMeter_C::ItemDurabilityMeter' has a wrong offset!");
static_assert(offsetof(UTooltipDurabilityMeter_C, Tooltip_DisplayAttribute) == 0x000248, "Member 'UTooltipDurabilityMeter_C::Tooltip_DisplayAttribute' has a wrong offset!");
static_assert(offsetof(UTooltipDurabilityMeter_C, DisplayData) == 0x000250, "Member 'UTooltipDurabilityMeter_C::DisplayData' has a wrong offset!");
static_assert(offsetof(UTooltipDurabilityMeter_C, Normalized) == 0x0002C0, "Member 'UTooltipDurabilityMeter_C::Normalized' has a wrong offset!");

}
