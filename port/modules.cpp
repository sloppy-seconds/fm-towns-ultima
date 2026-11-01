// port/modules.cpp - the module list the port actually runs, with the native shadows first.
//
// WHY THIS FILE EXISTS IN port/ AND NOT IN module/. module/modules.cpp is written by the recompiler from the
// modules it compiled, so its order is the recompiler's and any edit to it is destroyed by the next
// recompile. x86_lookup_cs() walks this list in order and takes the FIRST module that has a function at the
// address asked for, so the order is the whole shadowing mechanism, and it has to be a committed file the
// port owns.
//
// THE ORDER IS LOAD-BEARING AND FAILS SILENTLY. g_mod_native must come first. If it is appended after
// g_mod_p_game then the recompiled twin always wins, the port still runs, and every shadow is quietly dead.
// tools/portcheck.js asserts the order, and also asserts that every module the generated list names still
// appears here, so a recompile that adds a module fails the gate instead of vanishing from the build.

#include "x86.h"

extern const X86Module g_mod_native;   // port/native_shadows.cpp
extern const X86Module g_mod_p_game;   // module/p_game_table.cpp
extern const X86Module g_mod_p_tbios;  // module/p_tbios_table.cpp

const X86Module* const g_x86_modules[] = {&g_mod_native, &g_mod_p_game, &g_mod_p_tbios};
const int g_x86_nmodules = 3;
