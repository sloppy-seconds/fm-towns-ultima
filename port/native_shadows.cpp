// port/native_shadows.cpp - the native functions that answer for recompiled guest addresses.
//
// Read the header first: it states the contract and why the ordering is load-bearing. This file holds the
// table and the module, and every native replacement lands between them.
//
// THE TABLE IS EMPTY AND THAT IS DELIBERATE. It was committed before the first replacement so the gate exists
// before there is anything to protect. Adding a function means:
//   1. write `void native_000XXXXX(X86Cpu& c)` in this file, keeping the contract in the header
//   2. add one ascending line to g_x86_shadows
//   3. add its differential script, so the replacement is verified rather than asserted
//   4. update the ledger row so port-coverage and the attribution agree with the code
//
// STEP 3 IS NOT OPTIONAL. docs/plan-port.md item 11c's done-when is a differential run that is byte-identical
// on the static screens and on the disk image, and the check must be shown to fail when the replacement is
// deliberately wrong. A shadow with no script is an unverified claim about the game.

#include "native_shadows.h"

// Ascending by address, because x86_lookup() binary-searches this table.
const X86FuncEntry g_x86_shadows[] = {
	// { 0xe120c, native_000e120c },   <- file 0xe140c. GUEST address: see the header. Contract in the header.
};

const unsigned g_x86_nshadows = static_cast<unsigned>(sizeof(g_x86_shadows) / sizeof(g_x86_shadows[0]));

// The module. `size`, `crc` and `image` describe the recompiler's image and are only consulted by the kit's
// self-test, so a native module leaves them zero and null: there is no image, because these functions were
// written rather than translated. `cs` is the game's code selector, because that is where the shadowed
// addresses live, which is what lets x86_lookup_cs() match this module against the game module's selector.
const X86Module g_mod_native = {
	"NATIVE", 0x000C, 0u, 0u, g_x86_shadows, sizeof(g_x86_shadows) / sizeof(g_x86_shadows[0]), 0u, nullptr,
};
