#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemManagementModeDetailsPanel

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"


namespace SDK::Params
{

// Function ItemManagementModeDetailsPanel.ItemManagementModeDetailsPanel_C.ExecuteUbergraph_ItemManagementModeDetailsPanel
// 0x0010 (0x0010 - 0x0000)
struct ItemManagementModeDetailsPanel_C_ExecuteUbergraph_ItemManagementModeDetailsPanel final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortItemManagementMode                       Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortItemManagementMode                       CallFunc_GetItemManagementMode_ReturnValue;        // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default;                             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemManagementModeDetailsPanel_C_ExecuteUbergraph_ItemManagementModeDetailsPanel) == 0x000008, "Wrong alignment on ItemManagementModeDetailsPanel_C_ExecuteUbergraph_ItemManagementModeDetailsPanel");
static_assert(sizeof(ItemManagementModeDetailsPanel_C_ExecuteUbergraph_ItemManagementModeDetailsPanel) == 0x000010, "Wrong size on ItemManagementModeDetailsPanel_C_ExecuteUbergraph_ItemManagementModeDetailsPanel");
static_assert(offsetof(ItemManagementModeDetailsPanel_C_ExecuteUbergraph_ItemManagementModeDetailsPanel, EntryPoint) == 0x000000, "Member 'ItemManagementModeDetailsPanel_C_ExecuteUbergraph_ItemManagementModeDetailsPanel::EntryPoint' has a wrong offset!");
static_assert(offsetof(ItemManagementModeDetailsPanel_C_ExecuteUbergraph_ItemManagementModeDetailsPanel, Temp_byte_Variable) == 0x000004, "Member 'ItemManagementModeDetailsPanel_C_ExecuteUbergraph_ItemManagementModeDetailsPanel::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ItemManagementModeDetailsPanel_C_ExecuteUbergraph_ItemManagementModeDetailsPanel, CallFunc_GetItemManagementMode_ReturnValue) == 0x000005, "Member 'ItemManagementModeDetailsPanel_C_ExecuteUbergraph_ItemManagementModeDetailsPanel::CallFunc_GetItemManagementMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemManagementModeDetailsPanel_C_ExecuteUbergraph_ItemManagementModeDetailsPanel, K2Node_Select_Default) == 0x000008, "Member 'ItemManagementModeDetailsPanel_C_ExecuteUbergraph_ItemManagementModeDetailsPanel::K2Node_Select_Default' has a wrong offset!");

}
