#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PBWA_S1_Archway

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PBWA_S1_Archway.PBWA_S1_Archway_C
// 0x0000 (0x10C0 - 0x10C0)
class APBWA_S1_Archway_C final : public ABuildingWall
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PBWA_S1_Archway_C">();
	}
	static class APBWA_S1_Archway_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APBWA_S1_Archway_C>();
	}
};
static_assert(alignof(APBWA_S1_Archway_C) == 0x000010, "Wrong alignment on APBWA_S1_Archway_C");
static_assert(sizeof(APBWA_S1_Archway_C) == 0x0010C0, "Wrong size on APBWA_S1_Archway_C");

}
