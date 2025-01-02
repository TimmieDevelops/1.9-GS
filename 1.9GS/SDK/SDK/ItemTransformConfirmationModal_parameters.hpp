#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemTransformConfirmationModal

#include "Basic.hpp"


namespace SDK::Params
{

// Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.ExecuteUbergraph_ItemTransformConfirmationModal
// 0x0030 (0x0030 - 0x0000)
struct ItemTransformConfirmationModal_C_ExecuteUbergraph_ItemTransformConfirmationModal final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button2;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue2;          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemTransformConfirmationModal_C_ExecuteUbergraph_ItemTransformConfirmationModal) == 0x000008, "Wrong alignment on ItemTransformConfirmationModal_C_ExecuteUbergraph_ItemTransformConfirmationModal");
static_assert(sizeof(ItemTransformConfirmationModal_C_ExecuteUbergraph_ItemTransformConfirmationModal) == 0x000030, "Wrong size on ItemTransformConfirmationModal_C_ExecuteUbergraph_ItemTransformConfirmationModal");
static_assert(offsetof(ItemTransformConfirmationModal_C_ExecuteUbergraph_ItemTransformConfirmationModal, EntryPoint) == 0x000000, "Member 'ItemTransformConfirmationModal_C_ExecuteUbergraph_ItemTransformConfirmationModal::EntryPoint' has a wrong offset!");
static_assert(offsetof(ItemTransformConfirmationModal_C_ExecuteUbergraph_ItemTransformConfirmationModal, K2Node_ComponentBoundEvent_Button2) == 0x000008, "Member 'ItemTransformConfirmationModal_C_ExecuteUbergraph_ItemTransformConfirmationModal::K2Node_ComponentBoundEvent_Button2' has a wrong offset!");
static_assert(offsetof(ItemTransformConfirmationModal_C_ExecuteUbergraph_ItemTransformConfirmationModal, K2Node_ComponentBoundEvent_Button) == 0x000010, "Member 'ItemTransformConfirmationModal_C_ExecuteUbergraph_ItemTransformConfirmationModal::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(ItemTransformConfirmationModal_C_ExecuteUbergraph_ItemTransformConfirmationModal, CallFunc_GetUINavigationManager_ReturnValue) == 0x000018, "Member 'ItemTransformConfirmationModal_C_ExecuteUbergraph_ItemTransformConfirmationModal::CallFunc_GetUINavigationManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemTransformConfirmationModal_C_ExecuteUbergraph_ItemTransformConfirmationModal, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000020, "Member 'ItemTransformConfirmationModal_C_ExecuteUbergraph_ItemTransformConfirmationModal::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemTransformConfirmationModal_C_ExecuteUbergraph_ItemTransformConfirmationModal, CallFunc_GetUIManagerWidget_ReturnValue2) == 0x000028, "Member 'ItemTransformConfirmationModal_C_ExecuteUbergraph_ItemTransformConfirmationModal::CallFunc_GetUIManagerWidget_ReturnValue2' has a wrong offset!");

// Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ItemTransformConfirmationModal_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemTransformConfirmationModal_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on ItemTransformConfirmationModal_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(ItemTransformConfirmationModal_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on ItemTransformConfirmationModal_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(ItemTransformConfirmationModal_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'ItemTransformConfirmationModal_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ItemTransformConfirmationModal_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemTransformConfirmationModal_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on ItemTransformConfirmationModal_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(ItemTransformConfirmationModal_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on ItemTransformConfirmationModal_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(ItemTransformConfirmationModal_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'ItemTransformConfirmationModal_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function ItemTransformConfirmationModal.ItemTransformConfirmationModal_C.UpdateTransformInfo
// 0x0070 (0x0070 - 0x0000)
struct ItemTransformConfirmationModal_C_UpdateTransformInfo final
{
public:
	class UFortItem*                              TransformKey;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortItem*>                      SacrificeItems;                                    // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, ReferenceParm)
	int32                                         SacrificePoints;                                   // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentTier;                                       // 0x001C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                              CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortItem*                              CallFunc_Array_Get_Item2;                          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue2;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortItem*                              CallFunc_Array_Get_Item3;                          // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue3;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortItem*                              CallFunc_Array_Get_Item4;                          // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue4;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortItem*                              CallFunc_Array_Get_Item5;                          // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue5;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemTransformConfirmationModal_C_UpdateTransformInfo) == 0x000008, "Wrong alignment on ItemTransformConfirmationModal_C_UpdateTransformInfo");
static_assert(sizeof(ItemTransformConfirmationModal_C_UpdateTransformInfo) == 0x000070, "Wrong size on ItemTransformConfirmationModal_C_UpdateTransformInfo");
static_assert(offsetof(ItemTransformConfirmationModal_C_UpdateTransformInfo, TransformKey) == 0x000000, "Member 'ItemTransformConfirmationModal_C_UpdateTransformInfo::TransformKey' has a wrong offset!");
static_assert(offsetof(ItemTransformConfirmationModal_C_UpdateTransformInfo, SacrificeItems) == 0x000008, "Member 'ItemTransformConfirmationModal_C_UpdateTransformInfo::SacrificeItems' has a wrong offset!");
static_assert(offsetof(ItemTransformConfirmationModal_C_UpdateTransformInfo, SacrificePoints) == 0x000018, "Member 'ItemTransformConfirmationModal_C_UpdateTransformInfo::SacrificePoints' has a wrong offset!");
static_assert(offsetof(ItemTransformConfirmationModal_C_UpdateTransformInfo, CurrentTier) == 0x00001C, "Member 'ItemTransformConfirmationModal_C_UpdateTransformInfo::CurrentTier' has a wrong offset!");
static_assert(offsetof(ItemTransformConfirmationModal_C_UpdateTransformInfo, CallFunc_Array_Get_Item) == 0x000020, "Member 'ItemTransformConfirmationModal_C_UpdateTransformInfo::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ItemTransformConfirmationModal_C_UpdateTransformInfo, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'ItemTransformConfirmationModal_C_UpdateTransformInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemTransformConfirmationModal_C_UpdateTransformInfo, CallFunc_Array_Get_Item2) == 0x000030, "Member 'ItemTransformConfirmationModal_C_UpdateTransformInfo::CallFunc_Array_Get_Item2' has a wrong offset!");
static_assert(offsetof(ItemTransformConfirmationModal_C_UpdateTransformInfo, CallFunc_IsValid_ReturnValue2) == 0x000038, "Member 'ItemTransformConfirmationModal_C_UpdateTransformInfo::CallFunc_IsValid_ReturnValue2' has a wrong offset!");
static_assert(offsetof(ItemTransformConfirmationModal_C_UpdateTransformInfo, CallFunc_Array_Get_Item3) == 0x000040, "Member 'ItemTransformConfirmationModal_C_UpdateTransformInfo::CallFunc_Array_Get_Item3' has a wrong offset!");
static_assert(offsetof(ItemTransformConfirmationModal_C_UpdateTransformInfo, CallFunc_IsValid_ReturnValue3) == 0x000048, "Member 'ItemTransformConfirmationModal_C_UpdateTransformInfo::CallFunc_IsValid_ReturnValue3' has a wrong offset!");
static_assert(offsetof(ItemTransformConfirmationModal_C_UpdateTransformInfo, CallFunc_Array_Get_Item4) == 0x000050, "Member 'ItemTransformConfirmationModal_C_UpdateTransformInfo::CallFunc_Array_Get_Item4' has a wrong offset!");
static_assert(offsetof(ItemTransformConfirmationModal_C_UpdateTransformInfo, CallFunc_IsValid_ReturnValue4) == 0x000058, "Member 'ItemTransformConfirmationModal_C_UpdateTransformInfo::CallFunc_IsValid_ReturnValue4' has a wrong offset!");
static_assert(offsetof(ItemTransformConfirmationModal_C_UpdateTransformInfo, CallFunc_Array_Get_Item5) == 0x000060, "Member 'ItemTransformConfirmationModal_C_UpdateTransformInfo::CallFunc_Array_Get_Item5' has a wrong offset!");
static_assert(offsetof(ItemTransformConfirmationModal_C_UpdateTransformInfo, CallFunc_IsValid_ReturnValue5) == 0x000068, "Member 'ItemTransformConfirmationModal_C_UpdateTransformInfo::CallFunc_IsValid_ReturnValue5' has a wrong offset!");

}
