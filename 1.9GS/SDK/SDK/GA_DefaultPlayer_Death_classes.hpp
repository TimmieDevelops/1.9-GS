#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_DefaultPlayer_Death

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GAB_GenericDeath_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_DefaultPlayer_Death.GA_DefaultPlayer_Death_C
// 0x0008 (0x0BD8 - 0x0BD0)
class UGA_DefaultPlayer_Death_C final : public UGAB_GenericDeath_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_DefaultPlayer_Death_C;           // 0x0BD0(0x0008)(Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_DefaultPlayer_Death(int32 EntryPoint);
	void PickDeathMontageSection();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_DefaultPlayer_Death_C">();
	}
	static class UGA_DefaultPlayer_Death_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_DefaultPlayer_Death_C>();
	}
};
static_assert(alignof(UGA_DefaultPlayer_Death_C) == 0x000008, "Wrong alignment on UGA_DefaultPlayer_Death_C");
static_assert(sizeof(UGA_DefaultPlayer_Death_C) == 0x000BD8, "Wrong size on UGA_DefaultPlayer_Death_C");
static_assert(offsetof(UGA_DefaultPlayer_Death_C, UberGraphFrame_GA_DefaultPlayer_Death_C) == 0x000BD0, "Member 'UGA_DefaultPlayer_Death_C::UberGraphFrame_GA_DefaultPlayer_Death_C' has a wrong offset!");

}
