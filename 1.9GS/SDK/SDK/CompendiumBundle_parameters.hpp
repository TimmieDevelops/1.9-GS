#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CompendiumBundle

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"


namespace SDK::Params
{

// Function CompendiumBundle.CompendiumBundle_C.ExecuteUbergraph_CompendiumBundle
// 0x0020 (0x0020 - 0x0000)
struct CompendiumBundle_C_ExecuteUbergraph_CompendiumBundle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_ComponentBoundEvent_TabId2;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_ComponentBoundEvent_TabId;                  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_ComponentBoundEvent_TabButton;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CompendiumBundle_C_ExecuteUbergraph_CompendiumBundle) == 0x000008, "Wrong alignment on CompendiumBundle_C_ExecuteUbergraph_CompendiumBundle");
static_assert(sizeof(CompendiumBundle_C_ExecuteUbergraph_CompendiumBundle) == 0x000020, "Wrong size on CompendiumBundle_C_ExecuteUbergraph_CompendiumBundle");
static_assert(offsetof(CompendiumBundle_C_ExecuteUbergraph_CompendiumBundle, EntryPoint) == 0x000000, "Member 'CompendiumBundle_C_ExecuteUbergraph_CompendiumBundle::EntryPoint' has a wrong offset!");
static_assert(offsetof(CompendiumBundle_C_ExecuteUbergraph_CompendiumBundle, K2Node_ComponentBoundEvent_TabId2) == 0x000008, "Member 'CompendiumBundle_C_ExecuteUbergraph_CompendiumBundle::K2Node_ComponentBoundEvent_TabId2' has a wrong offset!");
static_assert(offsetof(CompendiumBundle_C_ExecuteUbergraph_CompendiumBundle, K2Node_ComponentBoundEvent_TabId) == 0x000010, "Member 'CompendiumBundle_C_ExecuteUbergraph_CompendiumBundle::K2Node_ComponentBoundEvent_TabId' has a wrong offset!");
static_assert(offsetof(CompendiumBundle_C_ExecuteUbergraph_CompendiumBundle, K2Node_ComponentBoundEvent_TabButton) == 0x000018, "Member 'CompendiumBundle_C_ExecuteUbergraph_CompendiumBundle::K2Node_ComponentBoundEvent_TabButton' has a wrong offset!");

// Function CompendiumBundle.CompendiumBundle_C.BndEvt__CompendiumPageTabList_K2Node_ComponentBoundEvent_12_OnTabButtonCreated__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct CompendiumBundle_C_BndEvt__CompendiumPageTabList_K2Node_ComponentBoundEvent_12_OnTabButtonCreated__DelegateSignature final
{
public:
	class FName                                   TabId;                                             // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          TabButton;                                         // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CompendiumBundle_C_BndEvt__CompendiumPageTabList_K2Node_ComponentBoundEvent_12_OnTabButtonCreated__DelegateSignature) == 0x000008, "Wrong alignment on CompendiumBundle_C_BndEvt__CompendiumPageTabList_K2Node_ComponentBoundEvent_12_OnTabButtonCreated__DelegateSignature");
static_assert(sizeof(CompendiumBundle_C_BndEvt__CompendiumPageTabList_K2Node_ComponentBoundEvent_12_OnTabButtonCreated__DelegateSignature) == 0x000010, "Wrong size on CompendiumBundle_C_BndEvt__CompendiumPageTabList_K2Node_ComponentBoundEvent_12_OnTabButtonCreated__DelegateSignature");
static_assert(offsetof(CompendiumBundle_C_BndEvt__CompendiumPageTabList_K2Node_ComponentBoundEvent_12_OnTabButtonCreated__DelegateSignature, TabId) == 0x000000, "Member 'CompendiumBundle_C_BndEvt__CompendiumPageTabList_K2Node_ComponentBoundEvent_12_OnTabButtonCreated__DelegateSignature::TabId' has a wrong offset!");
static_assert(offsetof(CompendiumBundle_C_BndEvt__CompendiumPageTabList_K2Node_ComponentBoundEvent_12_OnTabButtonCreated__DelegateSignature, TabButton) == 0x000008, "Member 'CompendiumBundle_C_BndEvt__CompendiumPageTabList_K2Node_ComponentBoundEvent_12_OnTabButtonCreated__DelegateSignature::TabButton' has a wrong offset!");

// Function CompendiumBundle.CompendiumBundle_C.BndEvt__CompendiumPageTabList_K2Node_ComponentBoundEvent_1_OnTabSelected__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) CompendiumBundle_C_BndEvt__CompendiumPageTabList_K2Node_ComponentBoundEvent_1_OnTabSelected__DelegateSignature final
{
public:
	class FName                                   TabId;                                             // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CompendiumBundle_C_BndEvt__CompendiumPageTabList_K2Node_ComponentBoundEvent_1_OnTabSelected__DelegateSignature) == 0x000008, "Wrong alignment on CompendiumBundle_C_BndEvt__CompendiumPageTabList_K2Node_ComponentBoundEvent_1_OnTabSelected__DelegateSignature");
static_assert(sizeof(CompendiumBundle_C_BndEvt__CompendiumPageTabList_K2Node_ComponentBoundEvent_1_OnTabSelected__DelegateSignature) == 0x000008, "Wrong size on CompendiumBundle_C_BndEvt__CompendiumPageTabList_K2Node_ComponentBoundEvent_1_OnTabSelected__DelegateSignature");
static_assert(offsetof(CompendiumBundle_C_BndEvt__CompendiumPageTabList_K2Node_ComponentBoundEvent_1_OnTabSelected__DelegateSignature, TabId) == 0x000000, "Member 'CompendiumBundle_C_BndEvt__CompendiumPageTabList_K2Node_ComponentBoundEvent_1_OnTabSelected__DelegateSignature::TabId' has a wrong offset!");

// Function CompendiumBundle.CompendiumBundle_C.SetBundle
// 0x0008 (0x0008 - 0x0000)
struct CompendiumBundle_C_SetBundle final
{
public:
	class UFortCompendiumBundle*                  CompendiumBundle_0;                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CompendiumBundle_C_SetBundle) == 0x000008, "Wrong alignment on CompendiumBundle_C_SetBundle");
static_assert(sizeof(CompendiumBundle_C_SetBundle) == 0x000008, "Wrong size on CompendiumBundle_C_SetBundle");
static_assert(offsetof(CompendiumBundle_C_SetBundle, CompendiumBundle_0) == 0x000000, "Member 'CompendiumBundle_C_SetBundle::CompendiumBundle_0' has a wrong offset!");

// Function CompendiumBundle.CompendiumBundle_C.UpdateTabs
// 0x0098 (0x0098 - 0x0000)
struct CompendiumBundle_C_UpdateTabs final
{
public:
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UFortCompendiumItem*>            CallFunc_GetCompendiumItems_OutActiveItems;        // 0x0010(0x0010)(ZeroConstructor, ReferenceParm)
	TArray<class UFortCompendiumItemDefinition*>  CallFunc_GetCompendiumItems_OutUnlockableItems;    // 0x0020(0x0010)(ZeroConstructor, ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable2;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable2;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCompendiumUpsellPage_C*                CallFunc_Create_ReturnValue;                       // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue2;                  // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue2;             // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCompendiumPage_C*                      CallFunc_Create_ReturnValue2;                      // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortCompendiumItem*                    CallFunc_Array_Get_Item;                           // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75[0x3];                                       // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortCompendiumItemDefinition*          CallFunc_GetCompendiumDefinitionBP_ReturnValue;    // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue2;                // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortCompendiumItemDefinition*          CallFunc_Array_Get_Item2;                          // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue2;                 // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CompendiumBundle_C_UpdateTabs) == 0x000008, "Wrong alignment on CompendiumBundle_C_UpdateTabs");
static_assert(sizeof(CompendiumBundle_C_UpdateTabs) == 0x000098, "Wrong size on CompendiumBundle_C_UpdateTabs");
static_assert(offsetof(CompendiumBundle_C_UpdateTabs, Temp_int_Loop_Counter_Variable) == 0x000000, "Member 'CompendiumBundle_C_UpdateTabs::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CompendiumBundle_C_UpdateTabs, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'CompendiumBundle_C_UpdateTabs::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CompendiumBundle_C_UpdateTabs, Temp_int_Array_Index_Variable) == 0x000008, "Member 'CompendiumBundle_C_UpdateTabs::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CompendiumBundle_C_UpdateTabs, CallFunc_GetCompendiumItems_OutActiveItems) == 0x000010, "Member 'CompendiumBundle_C_UpdateTabs::CallFunc_GetCompendiumItems_OutActiveItems' has a wrong offset!");
static_assert(offsetof(CompendiumBundle_C_UpdateTabs, CallFunc_GetCompendiumItems_OutUnlockableItems) == 0x000020, "Member 'CompendiumBundle_C_UpdateTabs::CallFunc_GetCompendiumItems_OutUnlockableItems' has a wrong offset!");
static_assert(offsetof(CompendiumBundle_C_UpdateTabs, Temp_int_Array_Index_Variable2) == 0x000030, "Member 'CompendiumBundle_C_UpdateTabs::Temp_int_Array_Index_Variable2' has a wrong offset!");
static_assert(offsetof(CompendiumBundle_C_UpdateTabs, CallFunc_GetOwningPlayer_ReturnValue) == 0x000038, "Member 'CompendiumBundle_C_UpdateTabs::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(CompendiumBundle_C_UpdateTabs, Temp_int_Loop_Counter_Variable2) == 0x000040, "Member 'CompendiumBundle_C_UpdateTabs::Temp_int_Loop_Counter_Variable2' has a wrong offset!");
static_assert(offsetof(CompendiumBundle_C_UpdateTabs, CallFunc_Create_ReturnValue) == 0x000048, "Member 'CompendiumBundle_C_UpdateTabs::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CompendiumBundle_C_UpdateTabs, CallFunc_Add_IntInt_ReturnValue2) == 0x000050, "Member 'CompendiumBundle_C_UpdateTabs::CallFunc_Add_IntInt_ReturnValue2' has a wrong offset!");
static_assert(offsetof(CompendiumBundle_C_UpdateTabs, CallFunc_GetOwningPlayer_ReturnValue2) == 0x000058, "Member 'CompendiumBundle_C_UpdateTabs::CallFunc_GetOwningPlayer_ReturnValue2' has a wrong offset!");
static_assert(offsetof(CompendiumBundle_C_UpdateTabs, CallFunc_Create_ReturnValue2) == 0x000060, "Member 'CompendiumBundle_C_UpdateTabs::CallFunc_Create_ReturnValue2' has a wrong offset!");
static_assert(offsetof(CompendiumBundle_C_UpdateTabs, CallFunc_Array_Get_Item) == 0x000068, "Member 'CompendiumBundle_C_UpdateTabs::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CompendiumBundle_C_UpdateTabs, CallFunc_Array_Length_ReturnValue) == 0x000070, "Member 'CompendiumBundle_C_UpdateTabs::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CompendiumBundle_C_UpdateTabs, CallFunc_Less_IntInt_ReturnValue) == 0x000074, "Member 'CompendiumBundle_C_UpdateTabs::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CompendiumBundle_C_UpdateTabs, CallFunc_GetCompendiumDefinitionBP_ReturnValue) == 0x000078, "Member 'CompendiumBundle_C_UpdateTabs::CallFunc_GetCompendiumDefinitionBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(CompendiumBundle_C_UpdateTabs, CallFunc_Array_Length_ReturnValue2) == 0x000080, "Member 'CompendiumBundle_C_UpdateTabs::CallFunc_Array_Length_ReturnValue2' has a wrong offset!");
static_assert(offsetof(CompendiumBundle_C_UpdateTabs, CallFunc_Array_Get_Item2) == 0x000088, "Member 'CompendiumBundle_C_UpdateTabs::CallFunc_Array_Get_Item2' has a wrong offset!");
static_assert(offsetof(CompendiumBundle_C_UpdateTabs, CallFunc_Less_IntInt_ReturnValue2) == 0x000090, "Member 'CompendiumBundle_C_UpdateTabs::CallFunc_Less_IntInt_ReturnValue2' has a wrong offset!");

// Function CompendiumBundle.CompendiumBundle_C.CreateTab
// 0x00F8 (0x00F8 - 0x0000)
struct CompendiumBundle_C_CreateTab final
{
public:
	class UFortCompendiumItemDefinition*          CompendiumItemDefinition;                          // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                ContentWidget;                                     // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetDisplayName_ReturnValue;               // 0x0010(0x0018)()
	class FString                                 CallFunc_GetPersistentName_ReturnValue;            // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFortTabButtonLabelInfo                K2Node_MakeStruct_FortTabButtonLabelInfo;          // 0x0038(0x00A8)()
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RegisterFortTab_ReturnValue;              // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CompendiumBundle_C_CreateTab) == 0x000008, "Wrong alignment on CompendiumBundle_C_CreateTab");
static_assert(sizeof(CompendiumBundle_C_CreateTab) == 0x0000F8, "Wrong size on CompendiumBundle_C_CreateTab");
static_assert(offsetof(CompendiumBundle_C_CreateTab, CompendiumItemDefinition) == 0x000000, "Member 'CompendiumBundle_C_CreateTab::CompendiumItemDefinition' has a wrong offset!");
static_assert(offsetof(CompendiumBundle_C_CreateTab, ContentWidget) == 0x000008, "Member 'CompendiumBundle_C_CreateTab::ContentWidget' has a wrong offset!");
static_assert(offsetof(CompendiumBundle_C_CreateTab, CallFunc_GetDisplayName_ReturnValue) == 0x000010, "Member 'CompendiumBundle_C_CreateTab::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CompendiumBundle_C_CreateTab, CallFunc_GetPersistentName_ReturnValue) == 0x000028, "Member 'CompendiumBundle_C_CreateTab::CallFunc_GetPersistentName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CompendiumBundle_C_CreateTab, K2Node_MakeStruct_FortTabButtonLabelInfo) == 0x000038, "Member 'CompendiumBundle_C_CreateTab::K2Node_MakeStruct_FortTabButtonLabelInfo' has a wrong offset!");
static_assert(offsetof(CompendiumBundle_C_CreateTab, CallFunc_Conv_StringToName_ReturnValue) == 0x0000E0, "Member 'CompendiumBundle_C_CreateTab::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CompendiumBundle_C_CreateTab, CallFunc_RegisterFortTab_ReturnValue) == 0x0000E8, "Member 'CompendiumBundle_C_CreateTab::CallFunc_RegisterFortTab_ReturnValue' has a wrong offset!");
static_assert(offsetof(CompendiumBundle_C_CreateTab, CallFunc_AddChild_ReturnValue) == 0x0000F0, "Member 'CompendiumBundle_C_CreateTab::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function CompendiumBundle.CompendiumBundle_C.HandleTabCreated
// 0x0048 (0x0048 - 0x0000)
struct CompendiumBundle_C_HandleTabCreated final
{
public:
	class FName                                   TabId;                                             // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          Button;                                            // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          LocalTab;                                          // 0x0010(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   LocalTabId;                                        // 0x0018(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconTabButton_C*                       K2Node_DynamicCast_AsIcon_Tab_Button;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x0030(0x0018)()
};
static_assert(alignof(CompendiumBundle_C_HandleTabCreated) == 0x000008, "Wrong alignment on CompendiumBundle_C_HandleTabCreated");
static_assert(sizeof(CompendiumBundle_C_HandleTabCreated) == 0x000048, "Wrong size on CompendiumBundle_C_HandleTabCreated");
static_assert(offsetof(CompendiumBundle_C_HandleTabCreated, TabId) == 0x000000, "Member 'CompendiumBundle_C_HandleTabCreated::TabId' has a wrong offset!");
static_assert(offsetof(CompendiumBundle_C_HandleTabCreated, Button) == 0x000008, "Member 'CompendiumBundle_C_HandleTabCreated::Button' has a wrong offset!");
static_assert(offsetof(CompendiumBundle_C_HandleTabCreated, LocalTab) == 0x000010, "Member 'CompendiumBundle_C_HandleTabCreated::LocalTab' has a wrong offset!");
static_assert(offsetof(CompendiumBundle_C_HandleTabCreated, LocalTabId) == 0x000018, "Member 'CompendiumBundle_C_HandleTabCreated::LocalTabId' has a wrong offset!");
static_assert(offsetof(CompendiumBundle_C_HandleTabCreated, K2Node_DynamicCast_AsIcon_Tab_Button) == 0x000020, "Member 'CompendiumBundle_C_HandleTabCreated::K2Node_DynamicCast_AsIcon_Tab_Button' has a wrong offset!");
static_assert(offsetof(CompendiumBundle_C_HandleTabCreated, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'CompendiumBundle_C_HandleTabCreated::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CompendiumBundle_C_HandleTabCreated, CallFunc_TextToUpper_ReturnValue) == 0x000030, "Member 'CompendiumBundle_C_HandleTabCreated::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");

// Function CompendiumBundle.CompendiumBundle_C.HandleTabSelected
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) CompendiumBundle_C_HandleTabSelected final
{
public:
	class FName                                   TabId;                                             // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetActiveTab_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CompendiumBundle_C_HandleTabSelected) == 0x000008, "Wrong alignment on CompendiumBundle_C_HandleTabSelected");
static_assert(sizeof(CompendiumBundle_C_HandleTabSelected) == 0x000010, "Wrong size on CompendiumBundle_C_HandleTabSelected");
static_assert(offsetof(CompendiumBundle_C_HandleTabSelected, TabId) == 0x000000, "Member 'CompendiumBundle_C_HandleTabSelected::TabId' has a wrong offset!");
static_assert(offsetof(CompendiumBundle_C_HandleTabSelected, CallFunc_GetActiveTab_ReturnValue) == 0x000008, "Member 'CompendiumBundle_C_HandleTabSelected::CallFunc_GetActiveTab_ReturnValue' has a wrong offset!");

}

