#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Ranged_GenericDamage

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Ranged_GenericDamage.GA_Ranged_GenericDamage_C
// 0x0000 (0x0A90 - 0x0A90)
class UGA_Ranged_GenericDamage_C : public UFortGameplayAbility_RangedWeapon
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Ranged_GenericDamage_C">();
	}
	static class UGA_Ranged_GenericDamage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Ranged_GenericDamage_C>();
	}
};
static_assert(alignof(UGA_Ranged_GenericDamage_C) == 0x000008, "Wrong alignment on UGA_Ranged_GenericDamage_C");
static_assert(sizeof(UGA_Ranged_GenericDamage_C) == 0x000A90, "Wrong size on UGA_Ranged_GenericDamage_C");

}
