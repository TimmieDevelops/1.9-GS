#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AbilitiesPageTile

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function AbilitiesPageTile.AbilitiesPageTile_C.ExecuteUbergraph_AbilitiesPageTile
// 0x0028 (0x0028 - 0x0000)
struct AbilitiesPageTile_C_ExecuteUbergraph_AbilitiesPageTile final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bUsingGamepad)>           K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	class UCommonUIContext*                       CallFunc_GetContext_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bUsingGamepad;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AbilitiesPageTile_C_ExecuteUbergraph_AbilitiesPageTile) == 0x000008, "Wrong alignment on AbilitiesPageTile_C_ExecuteUbergraph_AbilitiesPageTile");
static_assert(sizeof(AbilitiesPageTile_C_ExecuteUbergraph_AbilitiesPageTile) == 0x000028, "Wrong size on AbilitiesPageTile_C_ExecuteUbergraph_AbilitiesPageTile");
static_assert(offsetof(AbilitiesPageTile_C_ExecuteUbergraph_AbilitiesPageTile, EntryPoint) == 0x000000, "Member 'AbilitiesPageTile_C_ExecuteUbergraph_AbilitiesPageTile::EntryPoint' has a wrong offset!");
static_assert(offsetof(AbilitiesPageTile_C_ExecuteUbergraph_AbilitiesPageTile, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'AbilitiesPageTile_C_ExecuteUbergraph_AbilitiesPageTile::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AbilitiesPageTile_C_ExecuteUbergraph_AbilitiesPageTile, CallFunc_GetContext_ReturnValue) == 0x000018, "Member 'AbilitiesPageTile_C_ExecuteUbergraph_AbilitiesPageTile::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(AbilitiesPageTile_C_ExecuteUbergraph_AbilitiesPageTile, K2Node_CustomEvent_bUsingGamepad) == 0x000020, "Member 'AbilitiesPageTile_C_ExecuteUbergraph_AbilitiesPageTile::K2Node_CustomEvent_bUsingGamepad' has a wrong offset!");

// Function AbilitiesPageTile.AbilitiesPageTile_C.HandleInputMethodChanged
// 0x0001 (0x0001 - 0x0000)
struct AbilitiesPageTile_C_HandleInputMethodChanged final
{
public:
	bool                                          bUsingGamepad;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AbilitiesPageTile_C_HandleInputMethodChanged) == 0x000001, "Wrong alignment on AbilitiesPageTile_C_HandleInputMethodChanged");
static_assert(sizeof(AbilitiesPageTile_C_HandleInputMethodChanged) == 0x000001, "Wrong size on AbilitiesPageTile_C_HandleInputMethodChanged");
static_assert(offsetof(AbilitiesPageTile_C_HandleInputMethodChanged, bUsingGamepad) == 0x000000, "Member 'AbilitiesPageTile_C_HandleInputMethodChanged::bUsingGamepad' has a wrong offset!");

// Function AbilitiesPageTile.AbilitiesPageTile_C.SetAbilityItemInfo
// 0x00D0 (0x00D0 - 0x0000)
struct AbilitiesPageTile_C_SetAbilityItemInfo final
{
public:
	class UFortItem*                              SlottedAbilityItem;                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetDisplayName_ReturnValue;               // 0x0008(0x0018)()
	class UFortItemDefinition*                    CallFunc_GetItemDefinitionBP_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortGadgetItemDefinition*              K2Node_DynamicCast_AsFort_Gadget_Item_Definition;  // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            CallFunc_GetItemSmallPreviewImageBrush_ReturnValue; // 0x0040(0x0090)()
};
static_assert(alignof(AbilitiesPageTile_C_SetAbilityItemInfo) == 0x000008, "Wrong alignment on AbilitiesPageTile_C_SetAbilityItemInfo");
static_assert(sizeof(AbilitiesPageTile_C_SetAbilityItemInfo) == 0x0000D0, "Wrong size on AbilitiesPageTile_C_SetAbilityItemInfo");
static_assert(offsetof(AbilitiesPageTile_C_SetAbilityItemInfo, SlottedAbilityItem) == 0x000000, "Member 'AbilitiesPageTile_C_SetAbilityItemInfo::SlottedAbilityItem' has a wrong offset!");
static_assert(offsetof(AbilitiesPageTile_C_SetAbilityItemInfo, CallFunc_GetDisplayName_ReturnValue) == 0x000008, "Member 'AbilitiesPageTile_C_SetAbilityItemInfo::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(AbilitiesPageTile_C_SetAbilityItemInfo, CallFunc_GetItemDefinitionBP_ReturnValue) == 0x000020, "Member 'AbilitiesPageTile_C_SetAbilityItemInfo::CallFunc_GetItemDefinitionBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(AbilitiesPageTile_C_SetAbilityItemInfo, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'AbilitiesPageTile_C_SetAbilityItemInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AbilitiesPageTile_C_SetAbilityItemInfo, K2Node_DynamicCast_AsFort_Gadget_Item_Definition) == 0x000030, "Member 'AbilitiesPageTile_C_SetAbilityItemInfo::K2Node_DynamicCast_AsFort_Gadget_Item_Definition' has a wrong offset!");
static_assert(offsetof(AbilitiesPageTile_C_SetAbilityItemInfo, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'AbilitiesPageTile_C_SetAbilityItemInfo::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AbilitiesPageTile_C_SetAbilityItemInfo, CallFunc_GetItemSmallPreviewImageBrush_ReturnValue) == 0x000040, "Member 'AbilitiesPageTile_C_SetAbilityItemInfo::CallFunc_GetItemSmallPreviewImageBrush_ReturnValue' has a wrong offset!");

// Function AbilitiesPageTile.AbilitiesPageTile_C.UpdateKeyBinding
// 0x0018 (0x0018 - 0x0000)
struct AbilitiesPageTile_C_UpdateKeyBinding final
{
public:
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue2;                     // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue3;                     // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsUsingGamepad_ReturnValue;               // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AbilitiesPageTile_C_UpdateKeyBinding) == 0x000008, "Wrong alignment on AbilitiesPageTile_C_UpdateKeyBinding");
static_assert(sizeof(AbilitiesPageTile_C_UpdateKeyBinding) == 0x000018, "Wrong size on AbilitiesPageTile_C_UpdateKeyBinding");
static_assert(offsetof(AbilitiesPageTile_C_UpdateKeyBinding, K2Node_SwitchInteger_CmpSuccess) == 0x000000, "Member 'AbilitiesPageTile_C_UpdateKeyBinding::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(AbilitiesPageTile_C_UpdateKeyBinding, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'AbilitiesPageTile_C_UpdateKeyBinding::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(AbilitiesPageTile_C_UpdateKeyBinding, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'AbilitiesPageTile_C_UpdateKeyBinding::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AbilitiesPageTile_C_UpdateKeyBinding, CallFunc_IsValid_ReturnValue2) == 0x000011, "Member 'AbilitiesPageTile_C_UpdateKeyBinding::CallFunc_IsValid_ReturnValue2' has a wrong offset!");
static_assert(offsetof(AbilitiesPageTile_C_UpdateKeyBinding, CallFunc_IsValid_ReturnValue3) == 0x000012, "Member 'AbilitiesPageTile_C_UpdateKeyBinding::CallFunc_IsValid_ReturnValue3' has a wrong offset!");
static_assert(offsetof(AbilitiesPageTile_C_UpdateKeyBinding, CallFunc_IsUsingGamepad_ReturnValue) == 0x000013, "Member 'AbilitiesPageTile_C_UpdateKeyBinding::CallFunc_IsUsingGamepad_ReturnValue' has a wrong offset!");

// Function AbilitiesPageTile.AbilitiesPageTile_C.SetAbilityPerkInfo
// 0x0160 (0x0160 - 0x0000)
struct AbilitiesPageTile_C_SetAbilityPerkInfo final
{
public:
	struct FFortUIPerk                            AbilityPerk;                                       // 0x0000(0x0088)(Parm)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0088(0x0028)()
	TArray<class UFortGadgetItemDefinition*>      CallFunc_BP_GetGadgets_GadgetItemDefinitions;      // 0x00B0(0x0010)(ZeroConstructor, ReferenceParm)
	class UFortGadgetItemDefinition*              CallFunc_Array_Get_Item;                           // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue; // 0x00C8(0x0090)()
	class UFortAbilityKit*                        CallFunc_GetGrantedAbilityKit_ReturnValue;         // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AbilitiesPageTile_C_SetAbilityPerkInfo) == 0x000008, "Wrong alignment on AbilitiesPageTile_C_SetAbilityPerkInfo");
static_assert(sizeof(AbilitiesPageTile_C_SetAbilityPerkInfo) == 0x000160, "Wrong size on AbilitiesPageTile_C_SetAbilityPerkInfo");
static_assert(offsetof(AbilitiesPageTile_C_SetAbilityPerkInfo, AbilityPerk) == 0x000000, "Member 'AbilitiesPageTile_C_SetAbilityPerkInfo::AbilityPerk' has a wrong offset!");
static_assert(offsetof(AbilitiesPageTile_C_SetAbilityPerkInfo, K2Node_MakeStruct_SlateColor) == 0x000088, "Member 'AbilitiesPageTile_C_SetAbilityPerkInfo::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(AbilitiesPageTile_C_SetAbilityPerkInfo, CallFunc_BP_GetGadgets_GadgetItemDefinitions) == 0x0000B0, "Member 'AbilitiesPageTile_C_SetAbilityPerkInfo::CallFunc_BP_GetGadgets_GadgetItemDefinitions' has a wrong offset!");
static_assert(offsetof(AbilitiesPageTile_C_SetAbilityPerkInfo, CallFunc_Array_Get_Item) == 0x0000C0, "Member 'AbilitiesPageTile_C_SetAbilityPerkInfo::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AbilitiesPageTile_C_SetAbilityPerkInfo, CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue) == 0x0000C8, "Member 'AbilitiesPageTile_C_SetAbilityPerkInfo::CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue' has a wrong offset!");
static_assert(offsetof(AbilitiesPageTile_C_SetAbilityPerkInfo, CallFunc_GetGrantedAbilityKit_ReturnValue) == 0x000158, "Member 'AbilitiesPageTile_C_SetAbilityPerkInfo::CallFunc_GetGrantedAbilityKit_ReturnValue' has a wrong offset!");

}
