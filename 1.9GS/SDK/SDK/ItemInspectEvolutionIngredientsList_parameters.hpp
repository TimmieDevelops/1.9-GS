#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemInspectEvolutionIngredientsList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function ItemInspectEvolutionIngredientsList.ItemInspectEvolutionIngredientsList_C.SetIngredients
// 0x0070 (0x0070 - 0x0000)
struct ItemInspectEvolutionIngredientsList_C_SetIngredients final
{
public:
	class UFortItem*                              Item;                                              // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFortItemQuantityPair>          InIngredients;                                     // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortItemQuantityPair                  CallFunc_Array_Get_Item;                           // 0x0030(0x0028)()
	class UItemInspectEvolutionIngredientsEntry_C* CallFunc_Create_ReturnValue;                       // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65[0x3];                                       // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemInspectEvolutionIngredientsList_C_SetIngredients) == 0x000008, "Wrong alignment on ItemInspectEvolutionIngredientsList_C_SetIngredients");
static_assert(sizeof(ItemInspectEvolutionIngredientsList_C_SetIngredients) == 0x000070, "Wrong size on ItemInspectEvolutionIngredientsList_C_SetIngredients");
static_assert(offsetof(ItemInspectEvolutionIngredientsList_C_SetIngredients, Item) == 0x000000, "Member 'ItemInspectEvolutionIngredientsList_C_SetIngredients::Item' has a wrong offset!");
static_assert(offsetof(ItemInspectEvolutionIngredientsList_C_SetIngredients, InIngredients) == 0x000008, "Member 'ItemInspectEvolutionIngredientsList_C_SetIngredients::InIngredients' has a wrong offset!");
static_assert(offsetof(ItemInspectEvolutionIngredientsList_C_SetIngredients, Temp_int_Array_Index_Variable) == 0x000018, "Member 'ItemInspectEvolutionIngredientsList_C_SetIngredients::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ItemInspectEvolutionIngredientsList_C_SetIngredients, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'ItemInspectEvolutionIngredientsList_C_SetIngredients::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ItemInspectEvolutionIngredientsList_C_SetIngredients, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'ItemInspectEvolutionIngredientsList_C_SetIngredients::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemInspectEvolutionIngredientsList_C_SetIngredients, CallFunc_GetOwningPlayer_ReturnValue) == 0x000028, "Member 'ItemInspectEvolutionIngredientsList_C_SetIngredients::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemInspectEvolutionIngredientsList_C_SetIngredients, CallFunc_Array_Get_Item) == 0x000030, "Member 'ItemInspectEvolutionIngredientsList_C_SetIngredients::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ItemInspectEvolutionIngredientsList_C_SetIngredients, CallFunc_Create_ReturnValue) == 0x000058, "Member 'ItemInspectEvolutionIngredientsList_C_SetIngredients::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemInspectEvolutionIngredientsList_C_SetIngredients, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'ItemInspectEvolutionIngredientsList_C_SetIngredients::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemInspectEvolutionIngredientsList_C_SetIngredients, CallFunc_Less_IntInt_ReturnValue) == 0x000064, "Member 'ItemInspectEvolutionIngredientsList_C_SetIngredients::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemInspectEvolutionIngredientsList_C_SetIngredients, CallFunc_AddChild_ReturnValue) == 0x000068, "Member 'ItemInspectEvolutionIngredientsList_C_SetIngredients::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function ItemInspectEvolutionIngredientsList.ItemInspectEvolutionIngredientsList_C.SetupItemLevelRequirement
// 0x0120 (0x0120 - 0x0000)
struct ItemInspectEvolutionIngredientsList_C_SetupItemLevelRequirement final
{
public:
	class UFortItem*                              Item;                                              // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMaxLevel_ReturnValue;                  // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLevel_ReturnValue;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0018(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue2;              // 0x0030(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0048(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData2;             // 0x0088(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00C8(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00D8(0x0018)()
	bool                                          CallFunc_Less_IntInt_ReturnValue2;                 // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F2[0x6];                                       // 0x00F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_Select_Default;                             // 0x00F8(0x0028)()
};
static_assert(alignof(ItemInspectEvolutionIngredientsList_C_SetupItemLevelRequirement) == 0x000008, "Wrong alignment on ItemInspectEvolutionIngredientsList_C_SetupItemLevelRequirement");
static_assert(sizeof(ItemInspectEvolutionIngredientsList_C_SetupItemLevelRequirement) == 0x000120, "Wrong size on ItemInspectEvolutionIngredientsList_C_SetupItemLevelRequirement");
static_assert(offsetof(ItemInspectEvolutionIngredientsList_C_SetupItemLevelRequirement, Item) == 0x000000, "Member 'ItemInspectEvolutionIngredientsList_C_SetupItemLevelRequirement::Item' has a wrong offset!");
static_assert(offsetof(ItemInspectEvolutionIngredientsList_C_SetupItemLevelRequirement, CallFunc_GetMaxLevel_ReturnValue) == 0x000008, "Member 'ItemInspectEvolutionIngredientsList_C_SetupItemLevelRequirement::CallFunc_GetMaxLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemInspectEvolutionIngredientsList_C_SetupItemLevelRequirement, CallFunc_GetLevel_ReturnValue) == 0x00000C, "Member 'ItemInspectEvolutionIngredientsList_C_SetupItemLevelRequirement::CallFunc_GetLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemInspectEvolutionIngredientsList_C_SetupItemLevelRequirement, CallFunc_Less_IntInt_ReturnValue) == 0x000010, "Member 'ItemInspectEvolutionIngredientsList_C_SetupItemLevelRequirement::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemInspectEvolutionIngredientsList_C_SetupItemLevelRequirement, CallFunc_Conv_IntToText_ReturnValue) == 0x000018, "Member 'ItemInspectEvolutionIngredientsList_C_SetupItemLevelRequirement::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemInspectEvolutionIngredientsList_C_SetupItemLevelRequirement, CallFunc_Conv_IntToText_ReturnValue2) == 0x000030, "Member 'ItemInspectEvolutionIngredientsList_C_SetupItemLevelRequirement::CallFunc_Conv_IntToText_ReturnValue2' has a wrong offset!");
static_assert(offsetof(ItemInspectEvolutionIngredientsList_C_SetupItemLevelRequirement, K2Node_MakeStruct_FormatArgumentData) == 0x000048, "Member 'ItemInspectEvolutionIngredientsList_C_SetupItemLevelRequirement::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(ItemInspectEvolutionIngredientsList_C_SetupItemLevelRequirement, K2Node_MakeStruct_FormatArgumentData2) == 0x000088, "Member 'ItemInspectEvolutionIngredientsList_C_SetupItemLevelRequirement::K2Node_MakeStruct_FormatArgumentData2' has a wrong offset!");
static_assert(offsetof(ItemInspectEvolutionIngredientsList_C_SetupItemLevelRequirement, K2Node_MakeArray_Array) == 0x0000C8, "Member 'ItemInspectEvolutionIngredientsList_C_SetupItemLevelRequirement::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ItemInspectEvolutionIngredientsList_C_SetupItemLevelRequirement, CallFunc_Format_ReturnValue) == 0x0000D8, "Member 'ItemInspectEvolutionIngredientsList_C_SetupItemLevelRequirement::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemInspectEvolutionIngredientsList_C_SetupItemLevelRequirement, CallFunc_Less_IntInt_ReturnValue2) == 0x0000F0, "Member 'ItemInspectEvolutionIngredientsList_C_SetupItemLevelRequirement::CallFunc_Less_IntInt_ReturnValue2' has a wrong offset!");
static_assert(offsetof(ItemInspectEvolutionIngredientsList_C_SetupItemLevelRequirement, Temp_bool_Variable) == 0x0000F1, "Member 'ItemInspectEvolutionIngredientsList_C_SetupItemLevelRequirement::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ItemInspectEvolutionIngredientsList_C_SetupItemLevelRequirement, K2Node_Select_Default) == 0x0000F8, "Member 'ItemInspectEvolutionIngredientsList_C_SetupItemLevelRequirement::K2Node_Select_Default' has a wrong offset!");

}
