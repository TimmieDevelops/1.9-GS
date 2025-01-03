#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MainQuestsTile

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function MainQuestsTile.MainQuestsTile_C.ExecuteUbergraph_MainQuestsTile
// 0x0088 (0x0088 - 0x0000)
struct MainQuestsTile_C_ExecuteUbergraph_MainQuestsTile final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestManager*                      CallFunc_GetQuestManager_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_CustomEvent_Button;                         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItem*                         CallFunc_GetMainQuest_ReturnValue;                 // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue2;                  // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortQuestManager*                      CallFunc_GetQuestManager_ReturnValue2;             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasBeenSeenLocally_ReturnValue;           // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortQuestItemDefinition*               CallFunc_GetQuestDefinitionBP_ReturnValue;         // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortConversation*                      CallFunc_GetIntroConversation_ReturnValue;         // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_GetCachedWidget_ReturnValue;              // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFrontEndRewards_Widget_C*              K2Node_DynamicCast_AsFront_End_Rewards_Widget;     // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MainQuestsTile_C_ExecuteUbergraph_MainQuestsTile) == 0x000008, "Wrong alignment on MainQuestsTile_C_ExecuteUbergraph_MainQuestsTile");
static_assert(sizeof(MainQuestsTile_C_ExecuteUbergraph_MainQuestsTile) == 0x000088, "Wrong size on MainQuestsTile_C_ExecuteUbergraph_MainQuestsTile");
static_assert(offsetof(MainQuestsTile_C_ExecuteUbergraph_MainQuestsTile, EntryPoint) == 0x000000, "Member 'MainQuestsTile_C_ExecuteUbergraph_MainQuestsTile::EntryPoint' has a wrong offset!");
static_assert(offsetof(MainQuestsTile_C_ExecuteUbergraph_MainQuestsTile, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'MainQuestsTile_C_ExecuteUbergraph_MainQuestsTile::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(MainQuestsTile_C_ExecuteUbergraph_MainQuestsTile, CallFunc_GetQuestManager_ReturnValue) == 0x000010, "Member 'MainQuestsTile_C_ExecuteUbergraph_MainQuestsTile::CallFunc_GetQuestManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MainQuestsTile_C_ExecuteUbergraph_MainQuestsTile, K2Node_CustomEvent_Button) == 0x000018, "Member 'MainQuestsTile_C_ExecuteUbergraph_MainQuestsTile::K2Node_CustomEvent_Button' has a wrong offset!");
static_assert(offsetof(MainQuestsTile_C_ExecuteUbergraph_MainQuestsTile, CallFunc_GetMainQuest_ReturnValue) == 0x000020, "Member 'MainQuestsTile_C_ExecuteUbergraph_MainQuestsTile::CallFunc_GetMainQuest_ReturnValue' has a wrong offset!");
static_assert(offsetof(MainQuestsTile_C_ExecuteUbergraph_MainQuestsTile, K2Node_CreateDelegate_OutputDelegate) == 0x000028, "Member 'MainQuestsTile_C_ExecuteUbergraph_MainQuestsTile::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MainQuestsTile_C_ExecuteUbergraph_MainQuestsTile, CallFunc_GetContext_ReturnValue2) == 0x000038, "Member 'MainQuestsTile_C_ExecuteUbergraph_MainQuestsTile::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(MainQuestsTile_C_ExecuteUbergraph_MainQuestsTile, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'MainQuestsTile_C_ExecuteUbergraph_MainQuestsTile::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MainQuestsTile_C_ExecuteUbergraph_MainQuestsTile, CallFunc_GetQuestManager_ReturnValue2) == 0x000048, "Member 'MainQuestsTile_C_ExecuteUbergraph_MainQuestsTile::CallFunc_GetQuestManager_ReturnValue2' has a wrong offset!");
static_assert(offsetof(MainQuestsTile_C_ExecuteUbergraph_MainQuestsTile, CallFunc_HasBeenSeenLocally_ReturnValue) == 0x000050, "Member 'MainQuestsTile_C_ExecuteUbergraph_MainQuestsTile::CallFunc_HasBeenSeenLocally_ReturnValue' has a wrong offset!");
static_assert(offsetof(MainQuestsTile_C_ExecuteUbergraph_MainQuestsTile, CallFunc_GetQuestDefinitionBP_ReturnValue) == 0x000058, "Member 'MainQuestsTile_C_ExecuteUbergraph_MainQuestsTile::CallFunc_GetQuestDefinitionBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(MainQuestsTile_C_ExecuteUbergraph_MainQuestsTile, CallFunc_GetIntroConversation_ReturnValue) == 0x000060, "Member 'MainQuestsTile_C_ExecuteUbergraph_MainQuestsTile::CallFunc_GetIntroConversation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MainQuestsTile_C_ExecuteUbergraph_MainQuestsTile, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000068, "Member 'MainQuestsTile_C_ExecuteUbergraph_MainQuestsTile::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(MainQuestsTile_C_ExecuteUbergraph_MainQuestsTile, CallFunc_GetCachedWidget_ReturnValue) == 0x000070, "Member 'MainQuestsTile_C_ExecuteUbergraph_MainQuestsTile::CallFunc_GetCachedWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(MainQuestsTile_C_ExecuteUbergraph_MainQuestsTile, K2Node_DynamicCast_AsFront_End_Rewards_Widget) == 0x000078, "Member 'MainQuestsTile_C_ExecuteUbergraph_MainQuestsTile::K2Node_DynamicCast_AsFront_End_Rewards_Widget' has a wrong offset!");
static_assert(offsetof(MainQuestsTile_C_ExecuteUbergraph_MainQuestsTile, K2Node_DynamicCast_bSuccess) == 0x000080, "Member 'MainQuestsTile_C_ExecuteUbergraph_MainQuestsTile::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function MainQuestsTile.MainQuestsTile_C.HandleButtonClick
// 0x0008 (0x0008 - 0x0000)
struct MainQuestsTile_C_HandleButtonClick final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MainQuestsTile_C_HandleButtonClick) == 0x000008, "Wrong alignment on MainQuestsTile_C_HandleButtonClick");
static_assert(sizeof(MainQuestsTile_C_HandleButtonClick) == 0x000008, "Wrong size on MainQuestsTile_C_HandleButtonClick");
static_assert(offsetof(MainQuestsTile_C_HandleButtonClick, Button) == 0x000000, "Member 'MainQuestsTile_C_HandleButtonClick::Button' has a wrong offset!");

// Function MainQuestsTile.MainQuestsTile_C.HandleQuestChanged
// 0x0108 (0x0108 - 0x0000)
struct MainQuestsTile_C_HandleQuestChanged final
{
public:
	TArray<struct FFortItemInstanceQuantityPair>  EmptyArray;                                        // 0x0000(0x0010)(Edit, ZeroConstructor)
	struct FSlateBrush                            CallFunc_GetItemSmallPreviewImageBrush_ReturnValue; // 0x0010(0x0090)()
	class UFortQuestItemDefinition*               CallFunc_GetQuestDefinitionBP_ReturnValue;         // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortRewardInfo                        CallFunc_GetRewardInfo_BP_ReturnValue;             // 0x00A8(0x0030)()
	bool                                          Temp_bool_Variable;                                // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetDisplayName_ReturnValue;               // 0x00E0(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default;                             // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MainQuestsTile_C_HandleQuestChanged) == 0x000008, "Wrong alignment on MainQuestsTile_C_HandleQuestChanged");
static_assert(sizeof(MainQuestsTile_C_HandleQuestChanged) == 0x000108, "Wrong size on MainQuestsTile_C_HandleQuestChanged");
static_assert(offsetof(MainQuestsTile_C_HandleQuestChanged, EmptyArray) == 0x000000, "Member 'MainQuestsTile_C_HandleQuestChanged::EmptyArray' has a wrong offset!");
static_assert(offsetof(MainQuestsTile_C_HandleQuestChanged, CallFunc_GetItemSmallPreviewImageBrush_ReturnValue) == 0x000010, "Member 'MainQuestsTile_C_HandleQuestChanged::CallFunc_GetItemSmallPreviewImageBrush_ReturnValue' has a wrong offset!");
static_assert(offsetof(MainQuestsTile_C_HandleQuestChanged, CallFunc_GetQuestDefinitionBP_ReturnValue) == 0x0000A0, "Member 'MainQuestsTile_C_HandleQuestChanged::CallFunc_GetQuestDefinitionBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(MainQuestsTile_C_HandleQuestChanged, CallFunc_GetRewardInfo_BP_ReturnValue) == 0x0000A8, "Member 'MainQuestsTile_C_HandleQuestChanged::CallFunc_GetRewardInfo_BP_ReturnValue' has a wrong offset!");
static_assert(offsetof(MainQuestsTile_C_HandleQuestChanged, Temp_bool_Variable) == 0x0000D8, "Member 'MainQuestsTile_C_HandleQuestChanged::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MainQuestsTile_C_HandleQuestChanged, CallFunc_GetDisplayName_ReturnValue) == 0x0000E0, "Member 'MainQuestsTile_C_HandleQuestChanged::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MainQuestsTile_C_HandleQuestChanged, CallFunc_IsValid_ReturnValue) == 0x0000F8, "Member 'MainQuestsTile_C_HandleQuestChanged::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MainQuestsTile_C_HandleQuestChanged, K2Node_Select_Default) == 0x000100, "Member 'MainQuestsTile_C_HandleQuestChanged::K2Node_Select_Default' has a wrong offset!");

// Function MainQuestsTile.MainQuestsTile_C.PopulateFilteredObjectives
// 0x0030 (0x0030 - 0x0000)
struct MainQuestsTile_C_PopulateFilteredObjectives final
{
public:
	class UFortQuestItem*                         Quest;                                             // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestObjectiveInfo*                CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisibleToUser_ReturnValue;              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MainQuestsTile_C_PopulateFilteredObjectives) == 0x000008, "Wrong alignment on MainQuestsTile_C_PopulateFilteredObjectives");
static_assert(sizeof(MainQuestsTile_C_PopulateFilteredObjectives) == 0x000030, "Wrong size on MainQuestsTile_C_PopulateFilteredObjectives");
static_assert(offsetof(MainQuestsTile_C_PopulateFilteredObjectives, Quest) == 0x000000, "Member 'MainQuestsTile_C_PopulateFilteredObjectives::Quest' has a wrong offset!");
static_assert(offsetof(MainQuestsTile_C_PopulateFilteredObjectives, Temp_int_Array_Index_Variable) == 0x000008, "Member 'MainQuestsTile_C_PopulateFilteredObjectives::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MainQuestsTile_C_PopulateFilteredObjectives, CallFunc_Array_Length_ReturnValue) == 0x00000C, "Member 'MainQuestsTile_C_PopulateFilteredObjectives::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MainQuestsTile_C_PopulateFilteredObjectives, CallFunc_Array_Get_Item) == 0x000010, "Member 'MainQuestsTile_C_PopulateFilteredObjectives::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MainQuestsTile_C_PopulateFilteredObjectives, CallFunc_IsVisibleToUser_ReturnValue) == 0x000018, "Member 'MainQuestsTile_C_PopulateFilteredObjectives::CallFunc_IsVisibleToUser_ReturnValue' has a wrong offset!");
static_assert(offsetof(MainQuestsTile_C_PopulateFilteredObjectives, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'MainQuestsTile_C_PopulateFilteredObjectives::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MainQuestsTile_C_PopulateFilteredObjectives, CallFunc_Less_IntInt_ReturnValue) == 0x000020, "Member 'MainQuestsTile_C_PopulateFilteredObjectives::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MainQuestsTile_C_PopulateFilteredObjectives, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'MainQuestsTile_C_PopulateFilteredObjectives::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MainQuestsTile_C_PopulateFilteredObjectives, CallFunc_Array_Add_ReturnValue) == 0x000028, "Member 'MainQuestsTile_C_PopulateFilteredObjectives::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function MainQuestsTile.MainQuestsTile_C.SetScrollWidget
// 0x0008 (0x0008 - 0x0000)
struct MainQuestsTile_C_SetScrollWidget final
{
public:
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MainQuestsTile_C_SetScrollWidget) == 0x000008, "Wrong alignment on MainQuestsTile_C_SetScrollWidget");
static_assert(sizeof(MainQuestsTile_C_SetScrollWidget) == 0x000008, "Wrong size on MainQuestsTile_C_SetScrollWidget");
static_assert(offsetof(MainQuestsTile_C_SetScrollWidget, CallFunc_GetUINavigationManager_ReturnValue) == 0x000000, "Member 'MainQuestsTile_C_SetScrollWidget::CallFunc_GetUINavigationManager_ReturnValue' has a wrong offset!");

}

