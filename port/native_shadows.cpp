#include "native_shadows.h"
#include "x86_glue.h"
#ifndef U2_NO_SHADOWS
#include "p_game_funcs.h"  // the recompiled twin, for the U2_SHADOW_OFF baseline
#endif

#ifndef U2_NO_SHADOWS

// Native replacements for routines of ENCHANT.EXP, written as RULES.
//
// WHY THESE ARE NOT TRANSLATIONS. The recompiler's output in module/ is already a translation: one C++ line per
// instruction, carrying the machine's registers, stack arithmetic and flags. Writing a second one by hand adds no
// information, doubles the places a transcription error can hide, and cannot be read. A replacement earns its place
// only by stating what the routine MEANS, in terms a person can check against the game's behaviour.
//
// The mechanical half is in port/x86_glue.h, with the contract and the list of what is deliberately not reproduced.
// Read that first. What is left here is one comment per rule saying what the routine does in the game's terms.
//
// The check on all of it is tools/shadow-diff.py: the same scripted route with U2_SHADOW_OFF (every rule delegating
// to its twin) and with the rules live, comparing five screens and the save disk, with a control that compares the
// baseline to itself. A rule that states the wrong thing disagrees with the original; a copy of the original can only
// disagree by accident.

using namespace u2glue;

// ---------------------------------------------------------------------------------------------------------------------
// The rules, ascending by address.
// ---------------------------------------------------------------------------------------------------------------------

// 0xe05e8 (58 bytes, the last leaf on the create path).
//     void f(uint8_t *p) -- decrement a three-byte counter whose low byte wraps at 74.
// Not a number but a countdown: the low byte steps down through 0..73, borrows into the middle byte, which borrows into
// the high byte. Something reads it as a position in a 74-step cycle; whether that cycle is a timer or a phase is not
// established, so the rule stops at the arithmetic.
void native_000e05e8(X86Cpu &c) {
	if (delegate(0xE05E8u)) {
		p_game::f_000e05e8(c);
		return;
	}
	tick(c, 37);
	const uint32_t p = arg32(c, 0);
	uint8_t high = data8(c, p);
	uint8_t mid = data8(c, p + 1u);
	uint8_t low = data8(c, p + 2u);
	low = (uint8_t)(low - 1u);
	if ((int8_t)low < 0) {
		tick(c, 20);
		low = 0x4Au;  // the cycle length, 74
		mid = (uint8_t)(mid - 1u);
		if ((int8_t)mid < 0) {
			tick(c, 6);
			high = (uint8_t)(high - 1u);
		}
	}
	tick(c, 34);
	// eax is not restored by the original either, so the byte left in al is part of what it returns.
	s8(c, 0, high);
	wr8(c.sbase[3] + p, high);
	s8(c, 0, mid);
	wr8(c.sbase[3] + p + 1u, mid);
	wr8(c.sbase[3] + p + 2u, low);
	ret(c, c.r[0]);
}

// 0xe120c (43 bytes). Never entered on any route measured so far.
//     char *f(char *p, int n) -- walk a 6-byte-stride array, and return the element after the n-th 0xf2 marker.
// Kept in explicit form on purpose: it has never been observed running, so a readable rule for it would be a guess
// dressed as documentation. Everything here is checked against the twin instead.
void native_000e120c(X86Cpu &c) {
	if (delegate(0xE120Cu)) {
		p_game::f_000e120c(c);
		return;
	}
	tick(c, 23);
	push32(c, c.r[5]);
	c.r[5] = c.r[4];
	push32(c, c.r[7]);
	c.r[7] = rd32(c.sbase[2] + c.r[5] + 0x8u);
	c.r[2] = rd32(c.sbase[2] + c.r[5] + 0xCu);
	c.r[1] = 0;
	if (c.r[1] == c.r[2]) {
		tick(c, 9);
		c.r[0] = c.r[7];
	} else {
		for (;;) {
			tick(c, 12);
			if (rd8(c.sbase[3] + c.r[7]) == 0xF2u) {
				tick(c, 9);
				c.r[1] += 1;
				if (c.r[2] == c.r[1]) {
					tick(c, 9);
					c.r[0] = c.r[7] + 6u;
					break;
				}
			}
			tick(c, 9);
			c.r[7] += 6u;
			X86_POLL(c, 0xE1220u);
		}
	}
	tick(c, 20);
	c.r[7] = pop32(c);
	c.r[4] = c.r[5];
	c.r[5] = pop32(c);
	c.eip = pop32(c);
}

// 0xe1344 (55 bytes, entered 132,826 times on the create route: the hottest routine left).
//     void f(void) -- when the level from 0xfe11f has passed a threshold, fill a buffer with 0xFF up to it.
//     base = *(int *)0xe400; limit = *(int *)0xe414;
//     if (limit == 0) return;
//     if (call_0xfe11f() <= limit) return;            // unsigned
//     for (p = base; p < limit; ++p) *p = 0xFF;
//     *(int *)0xe414 = 0;
// A buffer reset, and 0xFF is the fill the port's own notes describe for areas the game has not written yet.
//
// NOT REPLACED, 2026-11-02. The rule was written and the differential refused it. What was measured before giving up:
// the guest clock at a fixed frame count is identical with and without it (1066682022 at 4,000 frames), and so are the
// shadow-entry counts at 2,000, 4,000, 8,000 and 16,000 frames, so the arithmetic and the tick placement agree during
// boot. Under the scripted route the two configurations then diverge, and the cause was not established. Two
// candidates, both untested: that this routine's 132,826 executions make the two runs fast enough apart for the
// driver to reach a frame late, or a real difference on a path boot does not take. Shipping a rule the differential
// rejects would defeat the point of having a differential, so the routine stays recompiled.

// 0xe1a54 (23 bytes).
//     int f(int x) { *(int *)0x40e04 = system_a(); return system_b(x); }
// One value recorded in a global on the way past, then the argument handed to a second system-layer call.
void native_000e1a54(X86Cpu &c) {
	if (delegate(0xE1A54u)) {
		p_game::f_000e1a54(c);
		return;
	}
	tick(c, 11);
	if (!call0(c, 0xFDCB6u, p_game::f_000fdcb6))
		return;
	put32(c, 0x40E04u, c.r[0]);
	tick(c, 14);
	if (!call1(c, 0xFDCA0u, p_game::f_000fdca0, arg32(c, 0)))
		return;
	tick(c, 16);
	ret(c, c.r[0]);
}

// 0xe23cc (31 bytes).
//     int f(void *p) { return system_0x102317(p, 0) != 0 ? -1 : 0; }
// A boolean flattened to the game's two answer values, which is the shape a predicate takes when the caller tests it
// with a comparison against zero in several places.
void native_000e23cc(X86Cpu &c) {
	if (delegate(0xE23CCu)) {
		p_game::f_000e23cc(c);
		return;
	}
	tick(c, 18);
	if (!call2(c, 0x102317u, p_game::f_00102317, arg32(c, 0), 0u))
		return;
	tick(c, 7);
	uint32_t answer;
	if (c.r[0] != 0) {
		tick(c, 9);
		answer = 0xFFFFFFFFu;  // -1: the call reported true
	} else {
		tick(c, 2);
		answer = 0u;
	}
	tick(c, 18);
	ret(c, answer);
}

// 0xe3530 (22 bytes).
//     int f(int i) { return g(table_7a5d8[i], -1); }
// The argument indexes a table of pointers and the entry is passed on with a constant -1, which is the shape of a
// dispatch through a table of handlers where the constant selects an operation.
void native_000e3530(X86Cpu &c) {
	if (delegate(0xE3530u)) {
		p_game::f_000e3530(c);
		return;
	}
	tick(c, 22);
	const uint32_t entry = data32(c, 0x7A5D8u + 4u * arg32(c, 0));
	if (!call2(c, 0xE07C8u, p_game::f_000e07c8, entry, 0xFFFFFFFFu))
		return;
	tick(c, 16);
	ret(c, c.r[0]);
}

// 0xe42d0 (49 bytes, entered 329 times on the create route).
//     int f(char *p) -- skip spaces and tabs, then read a decimal number, and return 0 if there are no digits.
// The game's own equivalent of atoi, used wherever a roster or a prompt hands back a number as text.
//
// A LOOP RULE: the cursor lives in edx and the accumulator in ecx, because the two backward jumps are places the
// runtime can resume in the recompiled twin, which reads those registers.
void native_000e42d0(X86Cpu &c) {
	if (delegate(0xE42D0u)) {
		p_game::f_000e42d0(c);
		return;
	}
	tick(c, 6);
	c.r[2] = arg32(c, 0);  // edx: the cursor
	c.r[1] = 0;			   // ecx: the number so far
	for (;;) {			   // skip blanks
		tick(c, 11);
		const uint8_t ch = data8(c, c.r[2]);
		if (ch != ' ') {
			tick(c, 7);
			if (ch != '\t')
				break;
		}
		tick(c, 9);
		c.r[2] += 1;
		X86_POLL(c, 0xE42D6u);
	}
	for (;;) {	// accumulate digits
		tick(c, 11);
		const uint8_t ch = data8(c, c.r[2]);
		if (ch < '0')
			break;
		tick(c, 7);
		if (ch > '9')
			break;
		tick(c, 23);
		c.r[1] = c.r[1] * 10u + (uint32_t)(ch - '0');
		c.r[2] += 1;
		X86_POLL(c, 0xE42E3u);
	}
	tick(c, 12);
	ret(c, c.r[1]);
}

// 0xe5654 (38 bytes).
//     void f(int a, char *s) { if (*(int *)0x7a6b4) s += strlen(s) + 1; g(a, s); }
// A conditional "skip to the end of the string" before passing it on: when the flag at 0x7a6b4 is set, the pointer is
// advanced past the terminator, so the callee receives the position after the text rather than its start. Ticks are 22
// for the entry block, 14 per loop iteration, 14 for the call block and 22 for the epilogue, and the poll sits on the
// backward jump as the twin has it.
void native_000e5654(X86Cpu &c) {
	if (delegate(0xE5654u)) {
		p_game::f_000e5654(c);
		return;
	}
	tick(c, 22);
	const uint32_t a = arg32(c, 0);
	uint32_t s = arg32(c, 1);
	if (data32(c, 0x7A6B4u) != 0) {
		for (;;) {
			tick(c, 14);
			s += 1;
			if (data8(c, s - 1u) == 0)
				break;
			X86_POLL(c, 0xE5664u);
		}
	}
	tick(c, 14);
	if (!call2(c, 0xE6CB0u, p_game::f_000e6cb0, a, s))
		return;
	tick(c, 22);
	ret(c, c.r[0]);
}

// 0xe5748, 0xe5760, 0xe5778, 0xe5790 (22 bytes each).
//     int f(int x) { return g(0x7a7d8, N, x); }   with N = 0, 1, 2, 3
// The display context at 0x7a7d8 is the first argument (see docs/display-context.md) and the address selects N, so
// four addresses are one shape with a different constant. Written out rather than generated by a macro so that each
// rule is visible and so tools/portcheck.js can see the symbol the table names.
void native_000e5748(X86Cpu &c) {
	if (delegate(0xE5748u)) {
		p_game::f_000e5748(c);
		return;
	}
	tick(c, 23);
	if (!call3(c, 0x20Eu, p_game::f_0000020e, 0x7A7D8u, 0u, (uint32_t)arg16(c, 0)))
		return;
	tick(c, 16);
	ret(c, c.r[0]);
}

void native_000e5760(X86Cpu &c) {
	if (delegate(0xE5760u)) {
		p_game::f_000e5760(c);
		return;
	}
	tick(c, 23);
	if (!call3(c, 0x20Eu, p_game::f_0000020e, 0x7A7D8u, 1u, (uint32_t)arg16(c, 0)))
		return;
	tick(c, 16);
	ret(c, c.r[0]);
}

void native_000e5778(X86Cpu &c) {
	if (delegate(0xE5778u)) {
		p_game::f_000e5778(c);
		return;
	}
	tick(c, 23);
	if (!call3(c, 0x20Eu, p_game::f_0000020e, 0x7A7D8u, 2u, (uint32_t)arg16(c, 0)))
		return;
	tick(c, 16);
	ret(c, c.r[0]);
}

void native_000e5790(X86Cpu &c) {
	if (delegate(0xE5790u)) {
		p_game::f_000e5790(c);
		return;
	}
	tick(c, 23);
	if (!call3(c, 0x20Eu, p_game::f_0000020e, 0x7A7D8u, 3u, (uint32_t)arg16(c, 0)))
		return;
	tick(c, 16);
	ret(c, c.r[0]);
}

// 0xe5810, 0xe58b8, 0xe58cc (18 bytes each).
//     int f(int x) { return g(0x7a7d8, x); }   with g at 0x4b1, 0x27d and 0x1c4
// The same shape as the four above but without the extra constant, and the argument arrives as a dword rather than
// sign-extended from a word.
void native_000e5810(X86Cpu &c) {
	if (delegate(0xE5810u)) {
		p_game::f_000e5810(c);
		return;
	}
	tick(c, 18);
	if (!call2(c, 0x4B1u, p_game::f_000004b1, 0x7A7D8u, arg32(c, 0)))
		return;
	tick(c, 16);
	ret(c, c.r[0]);
}

void native_000e58b8(X86Cpu &c) {
	if (delegate(0xE58B8u)) {
		p_game::f_000e58b8(c);
		return;
	}
	tick(c, 18);
	if (!call2(c, 0x27Du, p_game::f_0000027d, 0x7A7D8u, arg32(c, 0)))
		return;
	tick(c, 16);
	ret(c, c.r[0]);
}

void native_000e58cc(X86Cpu &c) {
	if (delegate(0xE58CCu)) {
		p_game::f_000e58cc(c);
		return;
	}
	tick(c, 18);
	if (!call2(c, 0x1C4u, p_game::f_000001c4, 0x7A7D8u, arg32(c, 0)))
		return;
	tick(c, 16);
	ret(c, c.r[0]);
}

// 0xe58e0 (34 bytes).
//     int f(int n) -- step the display context to state (n + 1) & 3 and hand it to TBIOS service 6.
// Every one of its ten call sites passes a constant, so callers NAME a state and this advances past it. What the four
// states change is not established, so the rule stops at the arithmetic and the call rather than inventing a name for
// them. See docs/display-context.md, which lists the context header's meaning as unresolved.
void native_000e58e0(X86Cpu &c) {
	if (delegate(0xE58E0u)) {
		p_game::f_000e58e0(c);
		return;
	}
	tick(c, 19);
	int state = (int)arg32(c, 0) + 1;
	if (state == 4) {
		tick(c, 2);
		state = 0;
	}
	tick(c, 13);
	if (!call3(c, 0x1E6u, p_game::f_000001e6, 0x7A7D8u, 0u, (uint32_t)state))
		return;
	tick(c, 22);
	ret(c, c.r[0]);
}

// 0xe5a3c (57 bytes).
//     void f(int which) -- two alternative settings of the display context, selected by the argument.
//     which == 0:  g(0x7a7d8, 1, 0,    0)
//     which == 1:  g(0x7a7d8, 1, 0x36, 0x31)
// Both go to 0x14a with the context and three more arguments, so the routine is a two-way choice between two argument
// sets. What the pairs select is not established.
void native_000e5a3c(X86Cpu &c) {
	if (delegate(0xE5A3Cu)) {
		p_game::f_000e5a3c(c);
		return;
	}
	static const uint32_t kFirst[] = {0x7A7D8u, 1u, 0u, 0u};
	static const uint32_t kSecond[] = {0x7A7D8u, 1u, 0x36u, 0x31u};
	tick(c, 17);
	const uint32_t which = arg32(c, 0);
	if (which == 0) {
		tick(c, 15);
		if (!callN(c, 0x14Au, p_game::f_0000014a, kFirst, 4))
			return;
		tick(c, 2);
	}
	tick(c, 7);
	if (which == 1) {
		tick(c, 15);
		if (!callN(c, 0x14Au, p_game::f_0000014a, kSecond, 4))
			return;
		tick(c, 2);
	}
	tick(c, 20);
	ret(c, c.r[0]);
}

// 0xe5c6c (32 bytes).
//     int f(int x) { tbios6(0x7a7d8, 1, x); return g(0x7a7d8); }
// Set a display-context state through TBIOS service 6, then hand the context to 0x518. The pair is "change it, then
// apply it", and the same two calls appear together in the family at 0xe58xx.
void native_000e5c6c(X86Cpu &c) {
	if (delegate(0xE5C6Cu)) {
		p_game::f_000e5c6c(c);
		return;
	}
	tick(c, 23);
	if (!call3(c, 0x20Eu, p_game::f_0000020e, 0x7A7D8u, 1u, (uint32_t)arg16(c, 0)))
		return;
	tick(c, 9);
	if (!call1(c, 0x518u, p_game::f_00000518, 0x7A7D8u))
		return;
	tick(c, 16);
	ret(c, c.r[0]);
}

// 0xe5cd4 (69 bytes).
//     void f(uint16_t a, uint16_t b, uint16_t c, uint16_t d)
//         fill a five-word structure at 0x7add8 with 2, a, b, c, d, then hand it to 0x809 with the display context.
// A parameter block: the four arguments are packed as 16-bit fields and passed by address, so the callee reads a struct
// rather than four stack arguments. What the fields mean is not established.
void native_000e5cd4(X86Cpu &c) {
	if (delegate(0xE5CD4u)) {
		p_game::f_000e5cd4(c);
		return;
	}
	tick(c, 41);
	put16(c, 0x7ADD8u, 2u);
	put16(c, 0x7ADDAu, (uint16_t)arg16(c, 0));
	put16(c, 0x7ADDCu, (uint16_t)arg16(c, 1));
	put16(c, 0x7ADDEu, (uint16_t)arg16(c, 2));
	put16(c, 0x7ADE0u, (uint16_t)arg16(c, 3));
	if (!call2(c, 0x809u, p_game::f_00000809, 0x7A7D8u, 0x7ADD8u))
		return;
	tick(c, 16);
	ret(c, c.r[0]);
}

// 0xe63fc (23 bytes).
//     void f(char *p, int *a, int *b) { *a = *(int *)(p + 0x1e); *b = *(int *)(p + 0x2a); }
void native_000e63fc(X86Cpu &c) {
	if (delegate(0xE63FCu)) {
		p_game::f_000e63fc(c);
		return;
	}
	tick(c, 34);
	const uint32_t p = arg32(c, 0);
	put32(c, arg32(c, 1), data32(c, p + 0x1Eu));
	const uint32_t second = data32(c, p + 0x2Au);
	put32(c, arg32(c, 2), second);
	ret(c, second);
}

// 0xe642c (9 bytes).
//     int f(char *p) { return *(int16_t *)(p + 0x36); }
void native_000e642c(X86Cpu &c) {
	if (delegate(0xE642Cu)) {
		p_game::f_000e642c(c);
		return;
	}
	tick(c, 20);
	ret(c, (uint32_t)(int32_t)(int16_t)rd16(c.sbase[3] + arg32(c, 0) + 0x36u));
}

// 0xe6c68 (69 bytes).
//     void f(int i) -- one entry of a 57-byte-stride table at 0x7aef9, counting to a limit.
//     base = 0x7aef9 + 57 * i;  *(base+4) = 0;
//     if (*(base+8) == *(base+0)) reset(i); else ++*(base+8);
// The three leas that compute `i * 57` are the compiler's multiply: i*3, then *9, then *2 plus the original, which is
// 57. A per-entry counter against a limit, with a callback when it reaches it. Whether the callback resets the counter
// is in 0xe6bc8, not here.
void native_000e6c68(X86Cpu &c) {
	if (delegate(0xE6C68u)) {
		p_game::f_000e6c68(c);
		return;
	}
	tick(c, 33);
	const uint32_t i = arg32(c, 0);
	const uint32_t base = 0x7AEF9u + 57u * i;
	put32(c, base + 4u, 0u);
	if (data32(c, base + 8u) == data32(c, base)) {
		tick(c, 9);
		if (!call1(c, 0xE6BC8u, p_game::f_000e6bc8, i))
			return;
		tick(c, 9);
	} else {
		tick(c, 12);
		put32(c, base + 8u, data32(c, base + 8u) + 1u);
	}
	tick(c, 20);
	ret(c, c.r[0]);
}

// 0xe75c4 (49 bytes).
//     void f(void) -- one ten-argument setup call, then two one-argument calls with the same constant, 2.
// All arguments are literals: 2, 0x10, 0x1b0, 0x260, 0x14, 0x4d, 0, 0xf, 0xf, 0xe, then 2 and 2. Nothing here is
// computed, so the rule is the argument list and the order, and what those numbers mean is not established.
void native_000e75c4(X86Cpu &c) {
	if (delegate(0xE75C4u)) {
		p_game::f_000e75c4(c);
		return;
	}
	static const uint32_t kSetup[] = {2u, 0x10u, 0x1B0u, 0x260u, 0x14u, 0x4Du, 0u, 0xFu, 0xFu, 0xEu};
	tick(c, 27);
	if (!callN(c, 0xE6858u, p_game::f_000e6858, kSetup, 10))
		return;
	tick(c, 9);
	if (!call1(c, 0xE693Cu, p_game::f_000e693c, 2u))
		return;
	tick(c, 9);
	if (!call1(c, 0xE699Cu, p_game::f_000e699c, 2u))
		return;
	tick(c, 12);
	ret(c, c.r[0]);
}

// 0xe9c2c (21 bytes, 11c's first target, and the reason the target choice became a measurement).
//     char *f(char *p) { while (*p != '=' && *p != 0) p++; return p + 1; }
// A LOOP RULE: the cursor is in ecx, because the backward jump is a place the runtime can resume in the twin.
void native_000e9c2c(X86Cpu &c) {
	if (delegate(0xE9C2Cu)) {
		p_game::f_000e9c2c(c);
		return;
	}
	tick(c, 4);
	c.r[1] = arg32(c, 0);
	for (;;) {
		tick(c, 11);
		const uint8_t ch = data8(c, c.r[1]);
		if (ch == '=')
			break;
		tick(c, 7);
		if (ch == 0)
			break;
		tick(c, 9);
		c.r[1] += 1;
		X86_POLL(c, 0xE9C30u);
	}
	tick(c, 14);
#ifdef U2_SHADOW_WRONG
	ret(c, c.r[1]);	 // one short: the off-by-one this gate must catch
#else
	ret(c, c.r[1] + 1u);
#endif
}

// Ascending by address, because x86_lookup() binary-searches this table.
const X86FuncEntry g_x86_shadows[] = {
	{0xe05e8, native_000e05e8}, {0xe120c, native_000e120c}, {0xe1a54, native_000e1a54}, {0xe23cc, native_000e23cc},
	{0xe3530, native_000e3530}, {0xe42d0, native_000e42d0}, {0xe5654, native_000e5654}, {0xe5748, native_000e5748},
	{0xe5760, native_000e5760}, {0xe5778, native_000e5778}, {0xe5790, native_000e5790}, {0xe5810, native_000e5810},
	{0xe58b8, native_000e58b8}, {0xe58cc, native_000e58cc}, {0xe58e0, native_000e58e0}, {0xe5a3c, native_000e5a3c},
	{0xe5c6c, native_000e5c6c}, {0xe5cd4, native_000e5cd4}, {0xe63fc, native_000e63fc}, {0xe642c, native_000e642c},
	{0xe6c68, native_000e6c68}, {0xe75c4, native_000e75c4}, {0xe9c2c, native_000e9c2c},
};

// The module. `size`, `crc` and `image` describe the recompiler's image and are only consulted by the kit's
// self-test, so a native module leaves them zero and null: there is no image, because these functions were written
// rather than translated. `cs` is the game's code selector, because that is where the shadowed addresses live, which
// is what lets x86_lookup_cs() match this module against the game module's selector.
const X86Module g_mod_native = {
	"NATIVE", 0x000C, 0u, 0u, g_x86_shadows, sizeof(g_x86_shadows) / sizeof(g_x86_shadows[0]), 0u, nullptr,
};

#else  // U2_NO_SHADOWS, the no-game CI build
// The CI check compiles the port against a module generated from 4 KB of zero fill, so none of the functions named
// above exists and the table cannot refer to them. Shadows are game-specific by construction, so that build carries an
// empty manifest with the same three symbols the port references. What the check proves is that the port links and runs
// with no game present; what it deliberately does not prove is anything about the strangler.
const X86FuncEntry g_x86_shadows[] = {{0u, nullptr}};
const unsigned g_x86_nshadows = 0;
const X86Module g_mod_native = {"NATIVE", 0x000C, 0u, 0u, g_x86_shadows, 0u, 0u, nullptr};
#endif
