#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Vivox

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct Vivox.VivoxMuteList
// 0x0050 (0x0050 - 0x0000)
struct alignas(0x08) FVivoxMuteList final
{
public:
	uint8                                         Pad_0[0x50];                                       // 0x0000(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FVivoxMuteList) == 0x000008, "Wrong alignment on FVivoxMuteList");
static_assert(sizeof(FVivoxMuteList) == 0x000050, "Wrong size on FVivoxMuteList");

}
