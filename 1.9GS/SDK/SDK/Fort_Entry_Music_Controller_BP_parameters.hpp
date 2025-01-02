#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Fort_Entry_Music_Controller_BP

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.ExecuteUbergraph_Fort_Entry_Music_Controller_BP
// 0x0028 (0x0028 - 0x0000)
struct Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(ESubGame SubGame)>             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESubGame                                      K2Node_CustomEvent_SubGame;                        // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP) == 0x000008, "Wrong alignment on Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP");
static_assert(sizeof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP) == 0x000028, "Wrong size on Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, EntryPoint) == 0x000000, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, CallFunc_GetContext_ReturnValue) == 0x000018, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, Temp_bool_Variable) == 0x000020, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, CallFunc_Not_PreBool_ReturnValue) == 0x000021, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, K2Node_CustomEvent_SubGame) == 0x000022, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::K2Node_CustomEvent_SubGame' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, K2Node_SwitchEnum_CmpSuccess) == 0x000023, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.On Sub Game Changed
// 0x0001 (0x0001 - 0x0000)
struct Fort_Entry_Music_Controller_BP_C_On_Sub_Game_Changed final
{
public:
	ESubGame                                      SubGame;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fort_Entry_Music_Controller_BP_C_On_Sub_Game_Changed) == 0x000001, "Wrong alignment on Fort_Entry_Music_Controller_BP_C_On_Sub_Game_Changed");
static_assert(sizeof(Fort_Entry_Music_Controller_BP_C_On_Sub_Game_Changed) == 0x000001, "Wrong size on Fort_Entry_Music_Controller_BP_C_On_Sub_Game_Changed");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_On_Sub_Game_Changed, SubGame) == 0x000000, "Member 'Fort_Entry_Music_Controller_BP_C_On_Sub_Game_Changed::SubGame' has a wrong offset!");

}
