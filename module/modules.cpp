#include "x86.h"
extern const X86Module g_mod_p_game;
extern const X86Module g_mod_p_tbios;
const X86Module* const g_x86_modules[] = {&g_mod_p_game, &g_mod_p_tbios};
const int g_x86_nmodules = 2;
