#pragma once
// port/native_shadows.h - the strangler's shadow manifest.
//
// WHAT A SHADOW IS. The machine dispatches by guest address through x86_lookup_cs(), which walks
// g_x86_modules in order and takes the FIRST module that has a function at that address. A shadow is a
// hand-written native function registered for a guest address that the recompiler also emits, listed in a
// module that comes first. The recompiled function stays in the built binary as dead code; the native one
// answers.
//
// WHY IT IS BUILT THIS WAY RATHER THAN BY EDITING THE RECOMPILED C++. The generated sources are build output.
// `tools/port-build.sh` does `rm -rf "$RECOMP"` and recompiles from ENCHANT.EXP on every run, and the
// committed `module/` is a checked-in copy of that same output. Anything hand-edited inside either is
// destroyed by the next recompile, so a replacement must live somewhere the recompiler does not write. This
// file, native_shadows.cpp and port/modules.cpp are that somewhere.
//
// THE CONTRACT A SHADOW MUST KEEP, and it is the same one a generated function keeps:
//   - it has the signature `void fn(X86Cpu&)`
//   - arguments come off the guest stack, and `c.r[]`/`c.sbase[]` are the machine's registers
//   - the result goes in `c.r[0]`
//   - it returns with `c.eip = pop32(c);`
//   - it must not fall off the end, which the generated code covers with x86_fault()
//
// IT FAILS SILENTLY IF THE ORDER IS WRONG. Append g_mod_native after g_mod_game in port/modules.cpp and every
// shadow quietly stops being used: the port still runs, on the old code. That is why tools/portcheck.js
// asserts the order, and why this paragraph exists rather than a comment buried in the .cpp.
//
// THE TABLE IS EMPTY ON PURPOSE. It was committed before the first replacement so the gate exists before there
// is anything to protect. See docs/plan-port.md item 11c.

#include "x86.h"

// The entry type is the kit's own, deliberately: X86Module::funcs is `const X86FuncEntry*`, so a shadow table
// is the same shape as a recompiled one and x86_lookup() binary-searches both the same way.

// THE ADDRESS IS THE GUEST ADDRESS, NOT THE FILE OFFSET, and getting this wrong is the trap that has cost this
// project the most time. `module/p_game_funcs.h` names functions in the guest frame (`f_000e9c2c`), while
// `docs/routines.json` and `docs/corpus.json` quote file offsets (`0xe9e2c`), and the two differ by the 0x200
// MP header. The machine dispatches with guest addresses, so a shadow's `addr` must be the guest one:
//
//   file 0xe9e2c  ->  guest 0xe9c2c  ->  f_000e9c2c
//   file 0xe140c  ->  guest 0xe120c  ->  f_000e120c
//
// tools/portcheck.js resolves every entry against `module/p_game_funcs.h`, so a file offset written here fails
// the gate instead of silently shadowing nothing. That check is what caught this comment when it was first
// written with file offsets.

// The shadows, ascending by address. Ascending because x86_lookup() binary-searches the table: an unsorted
// entry does not fail, the search simply never reaches it and the recompiled twin answers instead.
extern const X86FuncEntry g_x86_shadows[];
extern const unsigned g_x86_nshadows;

// The module carrying them. Its cs is the game's code selector, because that is where the shadowed addresses
// live, and it is listed FIRST in port/modules.cpp.
extern const X86Module g_mod_native;
