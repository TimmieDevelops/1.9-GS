#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FrontendCamera_Manage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FrontendCamera_Manage.FrontendCamera_Manage_C
// 0x0010 (0x08D0 - 0x08C0)
class AFrontendCamera_Manage_C final : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x08C0(0x0008)(Transient, DuplicateTransient)
	class UCameraComponent*                       LoginCamera_0;                                     // 0x08C8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_FrontendCamera_Manage(int32 EntryPoint);
	void OnActivated();
	void OnDeactivated();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FrontendCamera_Manage_C">();
	}
	static class AFrontendCamera_Manage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFrontendCamera_Manage_C>();
	}
};
static_assert(alignof(AFrontendCamera_Manage_C) == 0x000010, "Wrong alignment on AFrontendCamera_Manage_C");
static_assert(sizeof(AFrontendCamera_Manage_C) == 0x0008D0, "Wrong size on AFrontendCamera_Manage_C");
static_assert(offsetof(AFrontendCamera_Manage_C, UberGraphFrame) == 0x0008C0, "Member 'AFrontendCamera_Manage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AFrontendCamera_Manage_C, LoginCamera_0) == 0x0008C8, "Member 'AFrontendCamera_Manage_C::LoginCamera_0' has a wrong offset!");

}
