// port/x86_glue.h -- the machine work behind a native rule.
//
// WHY THIS FILE EXISTS. Every replacement routine needs the same eight or ten mechanical things: fetch an argument off
// the guest stack, read or write the data segment, charge the tick cost, call another guest function, return. When
// those are written inline in each rule, the rules read like assembly and there is nowhere to state the contract once.
// So the contract lives here, and port/native_shadows.cpp is a list of rules.
//
// THE CONTRACT, in full. A rule may assume only this:
//
//   delegate(c, addr)   reports the entry, and answers whether the caller must instead run the recompiled twin
//                       (U2_SHADOW_OFF). It returns a value rather than returning from the rule, so every exit of a
//                       rule is visible in the rule.
//   tick(c, n)          charges n cycles. The count is not decoration: it advances the guest clock the game can read
//                       and the budget that decides when an interrupt is delivered. The blocks charged and their
//                       order must match the original's basic blocks, which is why ticks are written out in the rules
//                       rather than derived.
//   arg32 / arg16       the routine's arguments, as the guest's cdecl call left them: [esp+4], [esp+8], ...
//   data8 / data32      a byte or dword of the data segment, which is where every pointer in these routines points.
//   put32               store a dword there.
//   call1 / call2 / call3  call another guest function with that many arguments. Returns false when the callee
//                       returned PAST this call, which happens when it returns further out; the rule must then
//                       return immediately without touching eip or adjusting the stack.
//   ret(c, v)           put v in eax and pop the caller's return address, which is what `ret` does.
//
// DELIBERATELY NOT REPRODUCED, and why each is invisible to a caller:
//   - the stack frame (push ebp / mov ebp,esp / leave). It has no net effect: after `leave` the stack pointer and ebp
//     hold exactly what they held before. It exists in the original because the routine addressed its arguments
//     through ebp, which a C++ body does not need.
//   - pushing and popping callee-saved registers. The original saves edi because it uses edi. A rule that never
//     touches edi has already preserved it.
//   - the flags a comparison leaves behind. They are not part of the calling convention, and a rule's own comparisons
//     produce whatever its next statement needs.
//   - the exact return address pushed before a call. A sentinel is pushed and the callee's return is checked against
//     it, which is the only thing the real address was for.
//
// ONE THING THAT MUST STAY IN A GUEST REGISTER. A rule containing a backward jump is a place the runtime can hand
// control back to the recompiled twin, which resumes at that jump's target and reads the registers the original held
// there. So a rule with a loop keeps its live values in the guest registers the twin expects, not in C++ locals. The
// three loop rules in native_shadows.cpp say so where they do it.

#pragma once
#include "x86.h"

#include <cstdio>
#include <cstdlib>

namespace u2glue {

// A return sentinel. The callee's `ret` pops whatever is on the guest stack, so the call pushes this instead of a real
// address and checks that the callee came back to it.
constexpr uint32_t kCallSentinel = 0xFFFFFFF0u;

// U2_SHADOW_OFF=1 routes every rule to its recompiled twin, so one binary produces both behaviours.
inline bool shadow_off() {
	static const bool off = std::getenv("U2_SHADOW_OFF") != nullptr;
	return off;
}

// U2_SHADOW_TRACE=1 reports entry, so a comparison that passes cannot be the vacuous kind where nothing ran.
inline void shadow_entered(uint32_t addr) {
	static const bool trace = std::getenv("U2_SHADOW_TRACE") != nullptr;
	if (trace) std::fprintf(stderr, "shadow    entered 0x%x\n", addr);
}

// Report the entry, and answer whether the caller must run the recompiled twin instead.
inline bool delegate(uint32_t addr) {
	shadow_entered(addr);
	return shadow_off();
}

// Charge n cycles of the guest's clock and interrupt budget.
inline void tick(X86Cpu& c, int n) {
	c.budget -= n;
	c.clocks += (uint64_t)n;
}

// An argument of the guest's stack frame: [esp+4] is argument 0 at the routine's entry.
inline uint32_t arg32(X86Cpu& c, int n) { return rd32(c.sbase[2] + c.r[4] + 0x4u + 0x4u * (uint32_t)n); }
inline int32_t arg16(X86Cpu& c, int n) { return (int32_t)(int16_t)rd16(c.sbase[2] + c.r[4] + 0x4u + 0x4u * (uint32_t)n); }

// The data segment, which is where every pointer these routines receive points.
inline uint8_t data8(X86Cpu& c, uint32_t at) { return rd8(c.sbase[3] + at); }
inline uint32_t data32(X86Cpu& c, uint32_t at) { return rd32(c.sbase[3] + at); }
inline void put32(X86Cpu& c, uint32_t at, uint32_t v) { wr32(c.sbase[3] + at, v); }
inline void put16(X86Cpu& c, uint32_t at, uint16_t v) { wr16(c.sbase[3] + at, v); }

namespace detail {
// The common half of every call: push the arguments in reverse so the callee finds them at [esp+4] onwards, push the
// sentinel, dispatch. Returns false when the callee did not return to this call.
inline bool call_prepare_and_dispatch(X86Cpu& c, uint32_t target, X86Func fn, int nargs) {
	push32(c, kCallSentinel);
	x86_call_known(c, target, fn);
	if (c.eip != kCallSentinel) return false;
	c.r[4] += 0x4u * (uint32_t)nargs;   // cdecl: the caller drops the arguments
	return true;
}
}  // namespace detail

inline bool call0(X86Cpu& c, uint32_t target, X86Func fn) {
	return detail::call_prepare_and_dispatch(c, target, fn, 0);
}

inline bool call1(X86Cpu& c, uint32_t target, X86Func fn, uint32_t a1) {
	push32(c, a1);
	return detail::call_prepare_and_dispatch(c, target, fn, 1);
}

inline bool call2(X86Cpu& c, uint32_t target, X86Func fn, uint32_t a1, uint32_t a2) {
	push32(c, a2);
	push32(c, a1);
	return detail::call_prepare_and_dispatch(c, target, fn, 2);
}

inline bool call3(X86Cpu& c, uint32_t target, X86Func fn, uint32_t a1, uint32_t a2, uint32_t a3) {
	push32(c, a3);
	push32(c, a2);
	push32(c, a1);
	return detail::call_prepare_and_dispatch(c, target, fn, 3);
}

// For a call with more arguments than a rule wants to spell out: `args` is in declaration order, so args[0] becomes
// the argument the callee reads at [esp+4].
inline bool callN(X86Cpu& c, uint32_t target, X86Func fn, const uint32_t* args, int nargs) {
	for (int i = nargs - 1; i >= 0; --i) push32(c, args[i]);
	return detail::call_prepare_and_dispatch(c, target, fn, nargs);
}

// Put v in eax and pop the caller's return address, which is what `ret` does.
inline void ret(X86Cpu& c, uint32_t v) {
	c.r[0] = v;
	c.eip = pop32(c);
}

}  // namespace u2glue
