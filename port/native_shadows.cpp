#include "native_shadows.h"
#include "p_game_funcs.h"   // the recompiled twin, for the U2_SHADOW_OFF baseline

#include <cstdio>
#include <cstdlib>

// Native replacements for routines of ENCHANT.EXP, written as RULES.
//
// WHY THESE ARE NOT TRANSLATIONS. The recompiler's output in module/ is already a translation: one C++ line per
// instruction, carrying the machine's registers, stack arithmetic and flags. Writing a second one by hand adds no
// information, doubles the places a transcription error can hide, and cannot be read. A replacement earns its place
// only by stating what the routine MEANS, in terms a person can check against the game's behaviour.
//
// So each routine here is its rule, plus explicit tick counts. Everything mechanical is the binding's job, below:
// reading arguments, pushing a call's arguments and return address, dropping them afterwards, and returning.
//
// WHAT THE BINDING DELIBERATELY DOES NOT REPRODUCE, and why it is safe:
//   - the frame (push ebp / mov ebp, esp / leave). It has no net effect: after `leave` the stack pointer and ebp are
//     exactly what they were. It exists in the original because the routine used ebp to address arguments, which a
//     C++ body does not need. Dropping it changes no value any caller can see.
//   - push/pop of callee-saved registers. The original saves edi because it uses edi. A rule that does not touch
//     edi has already preserved it.
//   - the flags left by a comparison. They are not part of the calling convention and the rule's own comparisons
//     produce whatever its next statement needs.
//   - the exact return address pushed before a call. A sentinel is pushed and the callee's return is checked
//     against it, which is what the real address was for.
//
// WHAT IT MUST REPRODUCE, because the guest can observe it:
//   - the tick count, at the same block boundaries. Ticks charge both the guest clock the game reads and the budget
//     that decides when an interrupt is delivered, so a wrong count drifts the game's sense of time.
//   - the argument order and count a call presents to its callee, and the caller-side cleanup.
//   - the return value in eax.
//
// The check on all of it is tools/shadow-diff.py: the same scripted route with U2_SHADOW_OFF (every rule delegating
// to its twin) and with the rules live, comparing five screens and the save disk, with a control that compares the
// baseline to itself. A rule that states the wrong thing disagrees with the original; a copy of the original can
// only disagree by accident.

namespace {

// U2_SHADOW_OFF=1 routes every rule to its recompiled twin, so one binary produces both behaviours.
bool shadow_off() {
	static const bool off = std::getenv("U2_SHADOW_OFF") != nullptr;
	return off;
}

// U2_SHADOW_TRACE=1 reports entry, so a passing comparison cannot be the vacuous kind where nothing ran.
void shadow_entered(uint32_t addr) {
	static const bool trace = std::getenv("U2_SHADOW_TRACE") != nullptr;
	if (trace) std::fprintf(stderr, "shadow    entered 0x%x\n", addr);
}

// An argument of the guest's stack frame: [esp+4], [esp+8], ... at the routine's entry.
uint32_t arg32(X86Cpu& c, int n) { return rd32(c.sbase[2] + c.r[4] + 0x4u + 0x4u * (uint32_t)n); }
int32_t arg16(X86Cpu& c, int n) { return (int32_t)(int16_t)rd16(c.sbase[2] + c.r[4] + 0x4u + 0x4u * (uint32_t)n); }

// A byte of the guest's data segment, which is where every pointer in these routines points.
uint8_t data8(X86Cpu& c, uint32_t at) { return rd8(c.sbase[3] + at); }
uint32_t data32(X86Cpu& c, uint32_t at) { return rd32(c.sbase[3] + at); }
void put32(X86Cpu& c, uint32_t at, uint32_t v) { wr32(c.sbase[3] + at, v); }

uint32_t add32(X86Cpu& c, uint32_t a, uint32_t b) { return x86_add(c, a, b, 0, 4); }
uint32_t inc32(X86Cpu& c, uint32_t a) { return x86_inc(c, a, 4); }

// Enter a rule: report it, and honour the baseline switch. The address is passed twice because `0x` cannot be a
// token-pasting operand: one argument is the literal, the other is what pastes into the twin's symbol name.
#define SHADOW(addr, id)                                                                                              \
	shadow_entered(addr);                                                                                             \
	if (shadow_off()) {                                                                                               \
		p_game::f_000##id(c);                                                                                         \
		return;                                                                                                       \
	}

// The tick charge for the block that ends here, exactly as the original's basic blocks are charged.
#define TICK(n) X86_TICK(c, n)

// Return `v` in eax and pop the caller's return address, which is what `ret` does.
#define RETURN(c, v)                                                                                                  \
	do {                                                                                                              \
		(c).r[0] = (v);                                                                                               \
		(c).eip = pop32(c);                                                                                           \
	} while (0)

// A call to another guest function. The arguments are pushed in reverse so the callee finds them at [esp+4] onwards,
// then a return sentinel, because the callee's `ret` pops whatever is there. X86_RET gives up if the callee returned
// somewhere other than this call, which happens when it returns past its caller. Finally the caller drops the
// arguments, as cdecl requires, and the result is in eax.
#if !defined(U2_CALL_SENTINEL)
#define U2_CALL_SENTINEL 0xFFFFFFF0u
#endif
#define U2_CALL2(c, target, fn, a1, a2)                                                                               \
	do {                                                                                                              \
		push32(c, (a2));                                                                                              \
		push32(c, (a1));                                                                                              \
		push32(c, U2_CALL_SENTINEL);                                                                                  \
		x86_call_known(c, target, fn);                                                                                \
		X86_RET(c, U2_CALL_SENTINEL);                                                                                 \
		c.r[4] = add32(c, c.r[4], 0x8u);                                                                              \
	} while (0)
#define U2_CALL3(c, target, fn, a1, a2, a3)                                                                           \
	do {                                                                                                              \
		push32(c, (a3));                                                                                              \
		push32(c, (a2));                                                                                              \
		push32(c, (a1));                                                                                              \
		push32(c, U2_CALL_SENTINEL);                                                                                  \
		x86_call_known(c, target, fn);                                                                                \
		X86_RET(c, U2_CALL_SENTINEL);                                                                                 \
		c.r[4] = add32(c, c.r[4], 0xCu);                                                                              \
	} while (0)

}  // namespace

// =====================================================================================================================
// The rules.
// =====================================================================================================================

// 0xe120c (43 bytes, and never entered on any route measured so far)
//     char *f(char *p, int n) { while (n && *p != 0xf2) { p += 6; ... } }
// A scanner over a 6-byte-stride array, returning the element after the n-th 0xf2 marker. Kept in the explicit form
// because it has never been observed running: a readable rule that cannot be checked against behaviour would be a
// guess dressed as documentation.
void native_000e120c(X86Cpu& c) {
	shadow_entered(0xE120Cu);
	if (shadow_off()) { p_game::f_000e120c(c); return; }
	X86_TICK(c, 23);
	push32(c, c.r[5]);
	c.r[5] = c.r[4];
	push32(c, c.r[7]);
	c.r[7] = rd32(c.sbase[2] + c.r[5] + 0x8u);
	c.r[2] = rd32(c.sbase[2] + c.r[5] + 0xCu);
	c.r[1] = 0;
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
	c.r[7] = pop32(c);
	c.r[4] = c.r[5];
	c.r[5] = pop32(c);
	c.eip = pop32(c);
}

// 0xe42d0 (49 bytes, entered 329 times on the create route)
//     int f(char *p) { ... parse the decimal number at p, skipping leading blanks ... }
// Read as what it is: skip spaces and tabs, then accumulate digits until something else.
void native_000e42d0(X86Cpu& c) {
	SHADOW(0xE42D0u, e42d0);
	TICK(6);
	uint32_t p = arg32(c, 0);
	uint32_t n = 0;
	for (;;) {                                   // skip blanks
		TICK(11);
		const uint8_t ch = data8(c, p);
		if (ch != ' ') {
			TICK(7);
			if (ch != '\t') break;
		}
		TICK(9);
		p = inc32(c, p);
		X86_POLL(c, 0xE42D6u);
	}
	for (;;) {                                   // accumulate digits
		TICK(11);
		const uint8_t ch = data8(c, p);
		if (ch < '0') break;
		TICK(7);
		if (ch > '9') break;
		TICK(23);
		n = n * 10u + (uint32_t)(ch - '0');
		p = inc32(c, p);
		X86_POLL(c, 0xE42E3u);
	}
	TICK(12);
	RETURN(c, n);
}

// 0xe5748, 0xe5760, 0xe5778, 0xe5790 (22 bytes each)
//     int f(int x) { return g(0x7a7d8, N, x); }   with N = 0, 1, 2, 3
// The address selects the constant. Written out rather than generated by a macro so that each rule is visible here and
// so tools/portcheck.js can see the symbol the table names, which is the check that catches a table entry pointing at
// a function nobody wrote.
void native_000e5748(X86Cpu& c) {
	SHADOW(0xE5748u, e5748);
	TICK(23);
	U2_CALL3(c, 0x20Eu, p_game::f_0000020e, 0x7A7D8u, 0u, (uint32_t)arg16(c, 0));
	TICK(16);
	RETURN(c, c.r[0]);
}

void native_000e5760(X86Cpu& c) {
	SHADOW(0xE5760u, e5760);
	TICK(23);
	U2_CALL3(c, 0x20Eu, p_game::f_0000020e, 0x7A7D8u, 1u, (uint32_t)arg16(c, 0));
	TICK(16);
	RETURN(c, c.r[0]);
}

void native_000e5778(X86Cpu& c) {
	SHADOW(0xE5778u, e5778);
	TICK(23);
	U2_CALL3(c, 0x20Eu, p_game::f_0000020e, 0x7A7D8u, 2u, (uint32_t)arg16(c, 0));
	TICK(16);
	RETURN(c, c.r[0]);
}

void native_000e5790(X86Cpu& c) {
	SHADOW(0xE5790u, e5790);
	TICK(23);
	U2_CALL3(c, 0x20Eu, p_game::f_0000020e, 0x7A7D8u, 3u, (uint32_t)arg16(c, 0));
	TICK(16);
	RETURN(c, c.r[0]);
}

// 0xe5810, 0xe58b8, 0xe58cc (18 bytes each)
//     int f(int x) { return g(0x7a7d8, x); }   with g at 0x4b1, 0x27d and 0x1c4
void native_000e5810(X86Cpu& c) {
	SHADOW(0xE5810u, e5810);
	TICK(18);
	U2_CALL2(c, 0x4B1u, p_game::f_000004b1, 0x7A7D8u, arg32(c, 0));
	TICK(16);
	RETURN(c, c.r[0]);
}

void native_000e58b8(X86Cpu& c) {
	SHADOW(0xE58B8u, e58b8);
	TICK(18);
	U2_CALL2(c, 0x27Du, p_game::f_0000027d, 0x7A7D8u, arg32(c, 0));
	TICK(16);
	RETURN(c, c.r[0]);
}

void native_000e58cc(X86Cpu& c) {
	SHADOW(0xE58CCu, e58cc);
	TICK(18);
	U2_CALL2(c, 0x1C4u, p_game::f_000001c4, 0x7A7D8u, arg32(c, 0));
	TICK(16);
	RETURN(c, c.r[0]);
}

// 0xe58e0 (34 bytes)
//     int f(int index) { index++; if (index == 4) index = 0; return g(0x7a7d8, 0, index); }
void native_000e58e0(X86Cpu& c) {
	SHADOW(0xE58E0u, e58e0);
	TICK(19);
	int index = (int)arg32(c, 0) + 1;
	if (index == 4) {
		TICK(2);
		index = 0;
	}
	TICK(13);
	U2_CALL3(c, 0x1E6u, p_game::f_000001e6, 0x7A7D8u, 0u, (uint32_t)index);
	TICK(22);
	RETURN(c, c.r[0]);
}

// 0xe63fc (23 bytes)
//     void f(char *p, int *a, int *b) { *a = *(int *)(p + 0x1e); *b = *(int *)(p + 0x2a); }
void native_000e63fc(X86Cpu& c) {
	SHADOW(0xE63FCu, e63fc);
	TICK(34);
	const uint32_t p = arg32(c, 0);
	const uint32_t a = arg32(c, 1);
	const uint32_t b = arg32(c, 2);
	put32(c, a, data32(c, p + 0x1Eu));
	const uint32_t second = data32(c, p + 0x2Au);
	put32(c, b, second);
	RETURN(c, second);
}

// 0xe642c (9 bytes)
//     int f(char *p) { return *(int16_t *)(p + 0x36); }
void native_000e642c(X86Cpu& c) {
	SHADOW(0xE642Cu, e642c);
	TICK(20);
	RETURN(c, (uint32_t)(int32_t)(int16_t)rd16(c.sbase[3] + arg32(c, 0) + 0x36u));
}

// 0xe9c2c (21 bytes, 11c's first target)
//     char *f(char *p) { while (*p != '=' && *p != 0) p++; return p + 1; }
void native_000e9c2c(X86Cpu& c) {
	SHADOW(0xE9C2Cu, e9c2c);
	TICK(4);
	uint32_t p = arg32(c, 0);
	for (;;) {
		TICK(11);
		const uint8_t ch = data8(c, p);
		if (ch == '=') break;
		TICK(7);
		if (ch == 0) break;
		TICK(9);
		p = inc32(c, p);
		X86_POLL(c, 0xE9C30u);
	}
	TICK(14);
#ifdef U2_SHADOW_WRONG
	RETURN(c, p);          // one short: the off-by-one this gate must catch
#else
	RETURN(c, p + 1u);
#endif
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

// The module. `size`, `crc` and `image` describe the recompiler's image and are only consulted by the kit's
// self-test, so a native module leaves them zero and null: there is no image, because these functions were
// written rather than translated. `cs` is the game's code selector, because that is where the shadowed
// addresses live, which is what lets x86_lookup_cs() match this module against the game module's selector.
const X86Module g_mod_native = {
	"NATIVE", 0x000C, 0u, 0u, g_x86_shadows, sizeof(g_x86_shadows) / sizeof(g_x86_shadows[0]), 0u, nullptr,
};
