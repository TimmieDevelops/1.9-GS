#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TextScrollStyle_NoFade

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TextScrollStyle-NoFade.TextScrollStyle-NoFade_C
// 0x0000 (0x0040 - 0x0040)
class UTextScrollStyle_NoFade_C final : public UCommonTextScrollStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TextScrollStyle-NoFade_C">();
	}
	static class UTextScrollStyle_NoFade_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTextScrollStyle_NoFade_C>();
	}
};
static_assert(alignof(UTextScrollStyle_NoFade_C) == 0x000008, "Wrong alignment on UTextScrollStyle_NoFade_C");
static_assert(sizeof(UTextScrollStyle_NoFade_C) == 0x000040, "Wrong size on UTextScrollStyle_NoFade_C");

}
