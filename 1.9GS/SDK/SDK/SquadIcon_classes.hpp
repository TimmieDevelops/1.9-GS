#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SquadIcon

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SquadIcon.SquadIcon_C
// 0x0000 (0x0250 - 0x0250)
class USquadIcon_C final : public UFortSquadIcon
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SquadIcon_C">();
	}
	static class USquadIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USquadIcon_C>();
	}
};
static_assert(alignof(USquadIcon_C) == 0x000008, "Wrong alignment on USquadIcon_C");
static_assert(sizeof(USquadIcon_C) == 0x000250, "Wrong size on USquadIcon_C");

}
