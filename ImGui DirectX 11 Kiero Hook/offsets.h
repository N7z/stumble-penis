#pragma once
#include <cstdio>
#include <libloaderapi.h>

uintptr_t GameAssembly = (uintptr_t)GetModuleHandle("GameAssembly.dll");

// Player Offsets
uintptr_t HasSkinOffset = 0x363020;
uintptr_t HasEmoteOffset = 0x362E80;
uintptr_t HasAnimationOffset = 0x362D50;
uintptr_t HasFootstepOffset = 0x362F90;

// Other Offsets
uintptr_t GenerateRoomCodeOffset = 0x394010;