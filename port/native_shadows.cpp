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
#include "p_game_funcs.h"   // the recompiled twin, for the U2_SHADOW_OFF baseline

#include <cstdio>
#include <cstdlib>

namespace {

// U2_SHADOW_OFF=1 makes every shadow delegate to its recompiled twin, so one binary can produce both the
// strangler's behaviour and the pre-strangler baseline. That is what makes the differential in
// tools/shadow-diff.py a comparison of one binary against itself rather than of two builds against each other.
bool shadow_off() {
	static const bool off = std::getenv("U2_SHADOW_OFF") != nullptr;
	return off;
}

// U2_SHADOW_TRACE=1 prints one line the first time each shadow is entered. Without it a differential that
// passes proves the runs agree, not that the shadow was reached, which is the vacuous version of this test.
void shadow_entered(uint32_t addr) {
	static const bool trace = std::getenv("U2_SHADOW_TRACE") != nullptr;
	if (!trace) return;
	std::fprintf(stderr, "shadow    entered 0x%x\n", addr);
}

}  // namespace

// ---- native_000e120c: guest 0xe120c, which is file 0xe140c -------------------------------
//
// The routine (item 4f proved this C byte-identical, 43 of 43 bytes): count occurrences of 0xf2 in a
// 6-byte-stride array and return the element after the n-th one, or the base pointer when n is 0.
//
// TICK ACCOUNTING IS PART OF THE CONTRACT, and this is the first thing the strangler learned. X86_TICK is
// `c.budget -= n; c.clocks += n`, so it feeds BOTH the guest clock the game can read and the budget that
// decides when x86_poll() delivers an interrupt. A shadow that got the arithmetic right and the ticks wrong
// would drift the game's sense of time, so the blocks below carry the same counts the recompiled twin does:
// 23 on entry, 9 for the n==0 arm, 12 at the loop head, 9 when 0xf2 matches, 9 on the advance, 20 in the
// epilogue. Per iteration that is 21 when the byte does not match and 30 when it does.
//
// THE LOOP STATE LIVES IN GUEST REGISTERS (edi, ecx, edx) rather than in C++ locals, and the prologue is
// reproduced rather than skipped. Both are deliberate: X86_POLL runs inline and returns, but the interrupt it
// services can read the machine's registers and stack, and if execution ever hands over mid-loop the twin
// resumes at 0xe1220 and runs its own epilogue against the frame this function pushed.

void native_000e120c(X86Cpu& c) {
	shadow_entered(0xE120Cu);
	if (shadow_off()) { p_game::f_000e120c(c); return; }
	X86_TICK(c, 23);
	push32(c, c.r[5]);                        // push ebp
	c.r[5] = c.r[4];                          // mov ebp, esp
	push32(c, c.r[7]);                        // push edi
	const uint32_t ebp = c.r[5];
	c.r[7] = rd32(c.sbase[2] + ebp + 0x8u);   // edi = [ebp+8], the array
	c.r[2] = rd32(c.sbase[2] + ebp + 0xCu);   // edx = [ebp+0xc], the count
	c.r[1] = 0;                               // ecx = 0

	if (c.r[1] == c.r[2]) {
		X86_TICK(c, 9);
		c.r[0] = c.r[7];
	} else {
		for (;;) {
			X86_TICK(c, 12);
			if (rd8(c.sbase[3] + c.r[7]) == 0xF2u) {
				X86_TICK(c, 9);
				c.r[1] += 1;
				if (c.r[2] == c.r[1]) {
					X86_TICK(c, 9);
					c.r[0] = c.r[7] + 6u;
					break;
				}
			}
			X86_TICK(c, 9);
			c.r[7] += 6u;
			X86_POLL(c, 0xE1220u);
		}
	}

	X86_TICK(c, 20);
	c.r[7] = pop32(c);                        // pop edi
	c.r[4] = c.r[5];                          // leave
	c.r[5] = pop32(c);
	c.eip = pop32(c);                         // ret
}

#ifdef U2_SHADOW_WRONG
// A deliberately wrong copy, used only to prove the differential gate can fail. Compiled out unless
// -DU2_SHADOW_WRONG is set, which tools/shadow-diff.py does in a second build directory. It returns the
// element itself instead of the one after it, which is the kind of off-by-one a real transcription makes.
void native_000e120c_wrong(X86Cpu& c) {
	native_000e120c(c);
	c.r[0] -= 6u;
}
#endif

// ---- native_000e9c2c: guest 0xe9c2c, which is file 0xe9e2c -------------------------------
//
// The "=" scanner, 21 bytes, item 4f's byte-identical match and driver-verified. It walks from `p` while the byte
// is neither '=' nor NUL and returns one past where it stopped:
//
//     char *f(char *p) { while (*p != '=' && *p != 0) p++; return p + 1; }
//
// Chosen as 11c's target because it is REACHABLE. `0xe120c` above never executes from play input, so a
// differential over it would compare two runs in which the shadow did nothing. U2_STOP_AT across the create route
// shows this one fires there. It also has no frame and no calls, so the state to reproduce is one register and
// the flags.
//
// Ticks come from the twin: 4 on entry, 11 at the loop head, 7 for the zero test, 9 on the advance, 14 at the exit.
// The cursor lives in ecx because the backward jump is a poll site and the twin resumes at 0xe9c30.

void native_000e9c2c(X86Cpu& c) {
	shadow_entered(0xE9C2Cu);
	if (shadow_off()) { p_game::f_000e9c2c(c); return; }
	X86_TICK(c, 4);
	c.r[1] = rd32(c.sbase[2] + c.r[4] + 0x4u);          // ecx = p
	for (;;) {
		X86_TICK(c, 11);
		s8(c, 0, rd8(c.sbase[3] + c.r[1]));                 // al = *p
		(void)x86_sub(c, g8(c, 0), 0x3Du, 0, 1);            // cmp al, '='
		if (x86_cc(c, 4)) break;
		X86_TICK(c, 7);
		{ uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }   // and al, al
		if (x86_cc(c, 4)) break;
		X86_TICK(c, 9);
		c.r[1] = x86_inc(c, c.r[1], 4);                     // inc ecx
		X86_POLL(c, 0xE9C30u);
	}
	X86_TICK(c, 14);
	c.r[1] = x86_inc(c, c.r[1], 4);                         // inc ecx, one past where it stopped
	c.r[0] = c.r[1];                                        // mov eax, ecx
#ifdef U2_SHADOW_WRONG
	c.r[0] -= 1u;                                           // one byte short: the off-by-one this gate must catch
#endif
	c.eip = pop32(c);                                       // ret
}

// ---- native_000e42d0: guest 0xe42d0, file 0xe44d0 ---------------------------------------
//
// A decimal parser, 49 bytes and one of the four byte-identical matches that the create route actually enters (329
// times). Skip spaces and tabs, then read digits:
//
//     int f(char *p) { while (*p == ' ' || *p == '\t') p++; int n = 0;
//                      while (*p >= '0' && *p <= '9') n = n * 10 + (*p++ - '0'); return n; }
//
// The multiply is the compiler's `lea ecx,[ecx+ecx*4]` then `add ecx,ecx`, so it is ten times, not a call. Blocks and
// their ticks come from the twin: 6 entry, 11 at each loop head, 7 for the second test, 9 on the skip advance, 23 on
// the digit accumulate, 12 at the exit. The two cursors stay in edx and ecx because both backward jumps are poll
// sites and the twin resumes at 0xe42d6 and 0xe42e3.
void native_000e42d0(X86Cpu& c) {
	shadow_entered(0xE42D0u);
	if (shadow_off()) { p_game::f_000e42d0(c); return; }
	X86_TICK(c, 6);
	c.r[2] = rd32(c.sbase[2] + c.r[4] + 0x4u);          // edx = p
	c.r[1] = x86_sub(c, c.r[1], c.r[1], 0, 4);          // sub ecx, ecx
	for (;;) {
		X86_TICK(c, 11);                                // L_e42d6: skip blanks
		s8(c, 0, rd8(c.sbase[3] + c.r[2]));
		(void)x86_sub(c, g8(c, 0), 0x20u, 0, 1);        // cmp al, ' '
		if (x86_cc(c, 4)) goto advance;
		X86_TICK(c, 7);
		(void)x86_sub(c, g8(c, 0), 0x09u, 0, 1);        // cmp al, tab
		if (x86_cc(c, 5)) break;                        // jne: not a blank, go read digits
	advance:
		X86_TICK(c, 9);
		c.r[2] = x86_inc(c, c.r[2], 4);                 // inc edx
		X86_POLL(c, 0xE42D6u);
	}
	for (;;) {
		X86_TICK(c, 11);                                // L_e42e3: digits
		s8(c, 0, rd8(c.sbase[3] + c.r[2]));
		(void)x86_sub(c, g8(c, 0), 0x30u, 0, 1);        // cmp al, '0'
		if (x86_cc(c, 2)) break;                        // below '0'
		X86_TICK(c, 7);
		(void)x86_sub(c, g8(c, 0), 0x39u, 0, 1);        // cmp al, '9'
		if (x86_cc(c, 7)) break;                        // above '9'
		X86_TICK(c, 23);
		c.r[1] = c.r[1] + c.r[1] * 4;                   // lea ecx,[ecx+ecx*4]
		c.r[1] = x86_add(c, c.r[1], c.r[1], 0, 4);      // add ecx, ecx  => n * 10
		c.r[0] = g8(c, 0);                              // movzx eax, al
		c.r[0] = x86_sub(c, c.r[0], 0x30u, 0, 4);       // sub eax, '0'
		c.r[0] = x86_add(c, c.r[0], c.r[1], 0, 4);      // add eax, ecx
		{ uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }   // xchg ecx, eax
		c.r[2] = x86_inc(c, c.r[2], 4);                 // inc edx
		X86_POLL(c, 0xE42E3u);
	}
	X86_TICK(c, 12);                                    // L_e42fe
	c.r[0] = c.r[1];
	c.eip = pop32(c);
}

// ---- native_000e642c: guest 0xe642c, file 0xe662c ---------------------------------------
//
// A signed 16-bit field getter, 9 bytes: `int f(char *p) { return *(int16_t *)(p + 0x36); }`. Entered 12 times on the
// create route. One block, 20 ticks, no branch and nothing to poll.
void native_000e642c(X86Cpu& c) {
	shadow_entered(0xE642Cu);
	if (shadow_off()) { p_game::f_000e642c(c); return; }
	X86_TICK(c, 20);
	c.r[0] = rd32(c.sbase[2] + c.r[4] + 0x4u);
	c.r[0] = (uint32_t)(int32_t)(int16_t)rd16(c.sbase[3] + c.r[0] + 0x36u);
	c.eip = pop32(c);
}

// ---- native_000e63fc: guest 0xe63fc, file 0xe65fc ---------------------------------------
//
// Copies two fields out of a record, 23 bytes:
//
//     void f(char *p, int *a, int *b) { *a = *(int *)(p + 0x1e); *b = *(int *)(p + 0x2a); }
//
// One block, 34 ticks. The writes go through wr32 on the data segment, matching the twin.
void native_000e63fc(X86Cpu& c) {
	shadow_entered(0xE63FCu);
	if (shadow_off()) { p_game::f_000e63fc(c); return; }
	X86_TICK(c, 34);
	c.r[1] = rd32(c.sbase[2] + c.r[4] + 0x4u);          // ecx = p
	c.r[0] = rd32(c.sbase[3] + c.r[1] + 0x1Eu);         // eax = *(p + 0x1e)
	c.r[2] = rd32(c.sbase[2] + c.r[4] + 0x8u);          // edx = a
	wr32(c.sbase[3] + c.r[2], c.r[0]);
	c.r[0] = rd32(c.sbase[3] + c.r[1] + 0x2Au);         // eax = *(p + 0x2a)
	c.r[2] = rd32(c.sbase[2] + c.r[4] + 0xCu);          // edx = b
	wr32(c.sbase[3] + c.r[2], c.r[0]);
	c.eip = pop32(c);
}

// ---- a family: guest 0xe5748, 0xe5760, 0xe5778, 0xe5790 --------------------------------
//
// Four 22-byte wrappers, identical except one constant. Each is
//
//     int f(short x) { return g(0x7a7d8, N, x); }   with N = 0, 1, 2, 3
//
// so the address alone selects the constant. They are entered 32, 18, 10 and 2 times on the create route, which makes
// them the most-used small routines left. The call is to a function the module already holds, so it goes through
// x86_call_known with the same return address the twin pushes, and the tick layout is the twin's: 23 for the block
// that ends at the call, 16 for the epilogue after it.
static void wrapper_7a7d8(X86Cpu& c, uint32_t which, uint32_t ret) {
	X86_TICK(c, 23);
	push32(c, c.r[5]);                                  // push ebp
	c.r[5] = c.r[4];                                    // mov ebp, esp
	c.r[0] = (uint32_t)(int32_t)(int16_t)rd16(c.sbase[2] + c.r[5] + 0x8u);   // movsx eax, [ebp+8]
	push32(c, c.r[0]);
	push32(c, which);
	push32(c, 0x7A7D8u);
	push32(c, ret);
	x86_call_known(c, 0x20Eu, p_game::f_0000020e);
	X86_RET(c, ret);
	X86_TICK(c, 16);
	c.r[4] = c.r[5];                                    // leave
	c.r[5] = pop32(c);
	c.eip = pop32(c);                                   // ret
}

void native_000e5748(X86Cpu& c) {
	shadow_entered(0xE5748u);
	if (shadow_off()) { p_game::f_000e5748(c); return; }
	wrapper_7a7d8(c, 0u, 0xE575Cu);
}

void native_000e5760(X86Cpu& c) {
	shadow_entered(0xE5760u);
	if (shadow_off()) { p_game::f_000e5760(c); return; }
	wrapper_7a7d8(c, 1u, 0xE5774u);
}

void native_000e5778(X86Cpu& c) {
	shadow_entered(0xE5778u);
	if (shadow_off()) { p_game::f_000e5778(c); return; }
	wrapper_7a7d8(c, 2u, 0xE578Cu);
}

void native_000e5790(X86Cpu& c) {
	shadow_entered(0xE5790u);
	if (shadow_off()) { p_game::f_000e5790(c); return; }
	wrapper_7a7d8(c, 3u, 0xE57A4u);
}

// ---- three more wrappers into 0x7a7d8: 0xe5810, 0xe58b8, 0xe58cc --------------------
//
// Eighteen bytes each and identical but for the callee: `int f(int x) { return g(0x7a7d8, x); }`, where g is 0x4b1,
// 0x27d and 0x1c4. The argument is pushed as a dword here, not sign-extended from a word, which is the only difference
// from the 0xe57xx family above. Ticks from the twin: 18 for the block ending at the call, 16 for the epilogue.
static void wrapper_7a7d8_arg(X86Cpu& c, uint32_t callee, X86Func twin, uint32_t ret) {
	X86_TICK(c, 18);
	push32(c, c.r[5]);                                  // push ebp
	c.r[5] = c.r[4];                                    // mov ebp, esp
	push32(c, rd32(c.sbase[2] + c.r[5] + 0x8u));        // push [ebp+8]
	push32(c, 0x7A7D8u);
	push32(c, ret);
	x86_call_known(c, callee, twin);
	X86_RET(c, ret);
	X86_TICK(c, 16);
	c.r[4] = c.r[5];
	c.r[5] = pop32(c);
	c.eip = pop32(c);
}

void native_000e5810(X86Cpu& c) {
	shadow_entered(0xE5810u);
	if (shadow_off()) { p_game::f_000e5810(c); return; }
	wrapper_7a7d8_arg(c, 0x4B1u, p_game::f_000004b1, 0xE5820u);
}

void native_000e58b8(X86Cpu& c) {
	shadow_entered(0xE58B8u);
	if (shadow_off()) { p_game::f_000e58b8(c); return; }
	wrapper_7a7d8_arg(c, 0x27Du, p_game::f_0000027d, 0xE58C8u);
}

void native_000e58cc(X86Cpu& c) {
	shadow_entered(0xE58CCu);
	if (shadow_off()) { p_game::f_000e58cc(c); return; }
	wrapper_7a7d8_arg(c, 0x1C4u, p_game::f_000001c4, 0xE58DCu);
}

// ---- native_000e58e0: guest 0xe58e0, file 0xe5ae0 ---------------------------------------
//
// Thirty-four bytes: advance an index and wrap it at four, then call 0x1e6 with (0x7a7d8, 0, index):
//
//     int f(int i) { i++; if (i == 4) i = 0; return g(0x7a7d8, 0, i); }
//
// Ticks: 19 for the prologue block, 2 for the wrap that only runs when the index reached four, 13 for the pushes and
// the call, 22 for the epilogue including the `add esp,0xc` that drops the three arguments.
void native_000e58e0(X86Cpu& c) {
	shadow_entered(0xE58E0u);
	if (shadow_off()) { p_game::f_000e58e0(c); return; }
	X86_TICK(c, 19);
	push32(c, c.r[5]);
	c.r[5] = c.r[4];
	push32(c, c.r[7]);                                  // push edi
	c.r[7] = rd32(c.sbase[2] + c.r[5] + 0x8u);          // edi = i
	c.r[7] = x86_inc(c, c.r[7], 4);
	(void)x86_sub(c, c.r[7], 0x4u, 0, 4);               // cmp edi, 4
	if (!x86_cc(c, 5)) {                                // jne skips the wrap
		X86_TICK(c, 2);
		c.r[7] = x86_sub(c, c.r[7], c.r[7], 0, 4);      // sub edi, edi
	}
	X86_TICK(c, 13);
	push32(c, c.r[7]);
	push32(c, 0u);
	push32(c, 0x7A7D8u);
	push32(c, 0xE58FCu);
	x86_call_known(c, 0x1E6u, p_game::f_000001e6);
	X86_RET(c, 0xE58FCu);
	X86_TICK(c, 22);
	c.r[4] = x86_add(c, c.r[4], 0xCu, 0, 4);            // add esp, 0xc
	c.r[7] = pop32(c);
	c.r[4] = c.r[5];
	c.r[5] = pop32(c);
	c.eip = pop32(c);
}

// Ascending by address, because x86_lookup() binary-searches this table.
const X86FuncEntry g_x86_shadows[] = {
	{ 0xe120c, native_000e120c },
	{ 0xe42d0, native_000e42d0 },
	{ 0xe5748, native_000e5748 },
	{ 0xe5760, native_000e5760 },
	{ 0xe5778, native_000e5778 },
	{ 0xe5790, native_000e5790 },
	{ 0xe5810, native_000e5810 },
	{ 0xe58b8, native_000e58b8 },
	{ 0xe58cc, native_000e58cc },
	{ 0xe58e0, native_000e58e0 },
	{ 0xe63fc, native_000e63fc },
	{ 0xe642c, native_000e642c },
	{ 0xe9c2c, native_000e9c2c },
};

const unsigned g_x86_nshadows = static_cast<unsigned>(sizeof(g_x86_shadows) / sizeof(g_x86_shadows[0]));

// The module. `size`, `crc` and `image` describe the recompiler's image and are only consulted by the kit's
// self-test, so a native module leaves them zero and null: there is no image, because these functions were
// written rather than translated. `cs` is the game's code selector, because that is where the shadowed
// addresses live, which is what lets x86_lookup_cs() match this module against the game module's selector.
const X86Module g_mod_native = {
	"NATIVE", 0x000C, 0u, 0u, g_x86_shadows, sizeof(g_x86_shadows) / sizeof(g_x86_shadows[0]), 0u, nullptr,
};
