#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MissionGen_Athena

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MissionGen_Athena.MissionGen_Athena_C
// 0x0000 (0x06A8 - 0x06A8)
class UMissionGen_Athena_C final : public UFortMissionGenerator
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MissionGen_Athena_C">();
	}
	static class UMissionGen_Athena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMissionGen_Athena_C>();
	}
};
static_assert(alignof(UMissionGen_Athena_C) == 0x000008, "Wrong alignment on UMissionGen_Athena_C");
static_assert(sizeof(UMissionGen_Athena_C) == 0x0006A8, "Wrong size on UMissionGen_Athena_C");

}
