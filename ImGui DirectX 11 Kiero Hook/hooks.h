#pragma once
#include "offsets.h"

// PLAYER RELATED ↓↓↓
// EMOTES
bool(__fastcall* hasEmote_Orig)(DWORD*, const char*, DWORD*);
bool __stdcall hasEmote_Hook(DWORD* __this, const char* emoteID, DWORD* method) {
	return true;
}
void UnlockEmotes() {
	MH_CreateHook(reinterpret_cast<LPVOID*>(GameAssembly + HasEmoteOffset), &hasEmote_Hook, (LPVOID*)&hasEmote_Orig);
	MH_EnableHook(reinterpret_cast<LPVOID*>(GameAssembly + HasEmoteOffset));
}

// SKINS
bool(__fastcall* hasSkin_Orig)(DWORD*, const char*, DWORD*);
bool __stdcall hasSkin_Hook(DWORD* __this, const char* skinID, DWORD* method) {
	return true;
}
void UnlockSkins() {
	MH_CreateHook(reinterpret_cast<LPVOID*>(GameAssembly + HasSkinOffset), &hasSkin_Hook, (LPVOID*)&hasSkin_Orig);
	MH_EnableHook(reinterpret_cast<LPVOID*>(GameAssembly + HasSkinOffset));
}

// ANIMATIONS
bool(__fastcall* hasAnimation_Orig)(DWORD*, const char*, DWORD*);
bool __stdcall hasAnimation_Hook(DWORD* __this, const char* animationID, DWORD* method) {
	return true;
}
void UnlockAnimations() {
	MH_CreateHook(reinterpret_cast<LPVOID*>(GameAssembly + HasAnimationOffset), &hasAnimation_Hook, (LPVOID*)&hasAnimation_Orig);
	MH_EnableHook(reinterpret_cast<LPVOID*>(GameAssembly + HasAnimationOffset));
}

// FOOTSTEPS
bool(__fastcall* hasFootstep_Orig)(DWORD*, const char*, DWORD*);
bool __stdcall hasFootstep_Hook(DWORD* __this, const char* footstepID, DWORD* method) {
	return true;
}
void UnlockFootstep() {
	MH_CreateHook(reinterpret_cast<LPVOID*>(GameAssembly + HasFootstepOffset), &hasFootstep_Hook, (LPVOID*)&hasFootstep_Orig);
	MH_EnableHook(reinterpret_cast<LPVOID*>(GameAssembly + HasFootstepOffset));
}
