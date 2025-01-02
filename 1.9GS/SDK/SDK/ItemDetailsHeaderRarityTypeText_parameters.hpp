#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemDetailsHeaderRarityTypeText

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ItemDetailsHeaderRarityTypeText.ItemDetailsHeaderRarityTypeText_C.ExecuteUbergraph_ItemDetailsHeaderRarityTypeText
// 0x0198 (0x0198 - 0x0000)
struct ItemDetailsHeaderRarityTypeText_C_ExecuteUbergraph_ItemDetailsHeaderRarityTypeText final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortItemType                                 CallFunc_GetType_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortRarity                                   CallFunc_GetRarity_ReturnValue;                    // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_ToText_ReturnValue;                       // 0x0008(0x0018)()
	struct FFortRarityItemData                    CallFunc_BPGetRarityData_ReturnValue;              // 0x0020(0x0080)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00A0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00E0(0x0010)(ZeroConstructor, ReferenceParm)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x00F0(0x0028)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0118(0x0018)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor2;                     // 0x0130(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor3;                     // 0x0158(0x0028)()
	class UFortItemDefinition*                    CallFunc_GetSchematicCraftingResultBP_ReturnValue; // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWeaponItemDefinition*              K2Node_DynamicCast_AsFort_Weapon_Item_Definition;  // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0191(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemDetailsHeaderRarityTypeText_C_ExecuteUbergraph_ItemDetailsHeaderRarityTypeText) == 0x000008, "Wrong alignment on ItemDetailsHeaderRarityTypeText_C_ExecuteUbergraph_ItemDetailsHeaderRarityTypeText");
static_assert(sizeof(ItemDetailsHeaderRarityTypeText_C_ExecuteUbergraph_ItemDetailsHeaderRarityTypeText) == 0x000198, "Wrong size on ItemDetailsHeaderRarityTypeText_C_ExecuteUbergraph_ItemDetailsHeaderRarityTypeText");
static_assert(offsetof(ItemDetailsHeaderRarityTypeText_C_ExecuteUbergraph_ItemDetailsHeaderRarityTypeText, EntryPoint) == 0x000000, "Member 'ItemDetailsHeaderRarityTypeText_C_ExecuteUbergraph_ItemDetailsHeaderRarityTypeText::EntryPoint' has a wrong offset!");
static_assert(offsetof(ItemDetailsHeaderRarityTypeText_C_ExecuteUbergraph_ItemDetailsHeaderRarityTypeText, CallFunc_GetType_ReturnValue) == 0x000004, "Member 'ItemDetailsHeaderRarityTypeText_C_ExecuteUbergraph_ItemDetailsHeaderRarityTypeText::CallFunc_GetType_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemDetailsHeaderRarityTypeText_C_ExecuteUbergraph_ItemDetailsHeaderRarityTypeText, CallFunc_GetRarity_ReturnValue) == 0x000005, "Member 'ItemDetailsHeaderRarityTypeText_C_ExecuteUbergraph_ItemDetailsHeaderRarityTypeText::CallFunc_GetRarity_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemDetailsHeaderRarityTypeText_C_ExecuteUbergraph_ItemDetailsHeaderRarityTypeText, CallFunc_ToText_ReturnValue) == 0x000008, "Member 'ItemDetailsHeaderRarityTypeText_C_ExecuteUbergraph_ItemDetailsHeaderRarityTypeText::CallFunc_ToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemDetailsHeaderRarityTypeText_C_ExecuteUbergraph_ItemDetailsHeaderRarityTypeText, CallFunc_BPGetRarityData_ReturnValue) == 0x000020, "Member 'ItemDetailsHeaderRarityTypeText_C_ExecuteUbergraph_ItemDetailsHeaderRarityTypeText::CallFunc_BPGetRarityData_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemDetailsHeaderRarityTypeText_C_ExecuteUbergraph_ItemDetailsHeaderRarityTypeText, K2Node_MakeStruct_FormatArgumentData) == 0x0000A0, "Member 'ItemDetailsHeaderRarityTypeText_C_ExecuteUbergraph_ItemDetailsHeaderRarityTypeText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(ItemDetailsHeaderRarityTypeText_C_ExecuteUbergraph_ItemDetailsHeaderRarityTypeText, K2Node_MakeArray_Array) == 0x0000E0, "Member 'ItemDetailsHeaderRarityTypeText_C_ExecuteUbergraph_ItemDetailsHeaderRarityTypeText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ItemDetailsHeaderRarityTypeText_C_ExecuteUbergraph_ItemDetailsHeaderRarityTypeText, K2Node_MakeStruct_SlateColor) == 0x0000F0, "Member 'ItemDetailsHeaderRarityTypeText_C_ExecuteUbergraph_ItemDetailsHeaderRarityTypeText::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(ItemDetailsHeaderRarityTypeText_C_ExecuteUbergraph_ItemDetailsHeaderRarityTypeText, CallFunc_Format_ReturnValue) == 0x000118, "Member 'ItemDetailsHeaderRarityTypeText_C_ExecuteUbergraph_ItemDetailsHeaderRarityTypeText::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemDetailsHeaderRarityTypeText_C_ExecuteUbergraph_ItemDetailsHeaderRarityTypeText, K2Node_MakeStruct_SlateColor2) == 0x000130, "Member 'ItemDetailsHeaderRarityTypeText_C_ExecuteUbergraph_ItemDetailsHeaderRarityTypeText::K2Node_MakeStruct_SlateColor2' has a wrong offset!");
static_assert(offsetof(ItemDetailsHeaderRarityTypeText_C_ExecuteUbergraph_ItemDetailsHeaderRarityTypeText, K2Node_MakeStruct_SlateColor3) == 0x000158, "Member 'ItemDetailsHeaderRarityTypeText_C_ExecuteUbergraph_ItemDetailsHeaderRarityTypeText::K2Node_MakeStruct_SlateColor3' has a wrong offset!");
static_assert(offsetof(ItemDetailsHeaderRarityTypeText_C_ExecuteUbergraph_ItemDetailsHeaderRarityTypeText, CallFunc_GetSchematicCraftingResultBP_ReturnValue) == 0x000180, "Member 'ItemDetailsHeaderRarityTypeText_C_ExecuteUbergraph_ItemDetailsHeaderRarityTypeText::CallFunc_GetSchematicCraftingResultBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemDetailsHeaderRarityTypeText_C_ExecuteUbergraph_ItemDetailsHeaderRarityTypeText, K2Node_DynamicCast_AsFort_Weapon_Item_Definition) == 0x000188, "Member 'ItemDetailsHeaderRarityTypeText_C_ExecuteUbergraph_ItemDetailsHeaderRarityTypeText::K2Node_DynamicCast_AsFort_Weapon_Item_Definition' has a wrong offset!");
static_assert(offsetof(ItemDetailsHeaderRarityTypeText_C_ExecuteUbergraph_ItemDetailsHeaderRarityTypeText, K2Node_DynamicCast_bSuccess) == 0x000190, "Member 'ItemDetailsHeaderRarityTypeText_C_ExecuteUbergraph_ItemDetailsHeaderRarityTypeText::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ItemDetailsHeaderRarityTypeText_C_ExecuteUbergraph_ItemDetailsHeaderRarityTypeText, CallFunc_IsValid_ReturnValue) == 0x000191, "Member 'ItemDetailsHeaderRarityTypeText_C_ExecuteUbergraph_ItemDetailsHeaderRarityTypeText::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}
