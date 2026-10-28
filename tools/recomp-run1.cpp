// run1.cpp - load the recompiled module and execute one function in the host process.
//
// This is the missing main(). The generated project produces `recomp` as a static library plus a
// modules.cpp, and the kit's own x86_selftest.cpp is a main() that runs recorded vectors against
// single functions with a synthetic CPU. Nothing loads the image, sets up a machine, and calls a
// routine the way the program would.
//
// It answers one question and no more: does the recompiled C++ execute and return, or where does it
// stop. A stop is a result too, and the trap handlers print which one.
//
// Build (from the generated directory):
//   cmake -S . -B b -DCMAKE_BUILD_TYPE=Release && cmake --build b -j
//   ./b/run1 0x209
//
// The image is the whole ENCHANT.EXP at base 0, which is what the module table says: {size 1072398,
// base 0}. So a module address is a FILE offset here, and the runtime address the emulator reports is
// 0x200 lower. That is the same 0x200 the rest of this project keeps tripping over, so it is spelled
// out rather than implied.

#include "x86.h"

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <csetjmp>
#include <vector>

extern const X86Module g_mod_p_game;

static const X86Module* g_cur = nullptr;
static std::jmp_buf g_stop;
static const char* g_why = "";

[[noreturn]] static void stop(const char* why) {
	g_why = why;
	std::longjmp(g_stop, 1);
}

// ---- memory -------------------------------------------------------------------------------
static uint8_t* page(uint32_t p) {
	if (!g_x86_page[p]) {
		void* v = std::calloc(4096, 1);
		if (!v) stop("out of memory");
		g_x86_page[p] = (uint8_t*)v;
	}
	return g_x86_page[p];
}

uint32_t x86_mem_read(uint32_t a, int n) {
	if (!g_x86_page[a >> 12]) stop("read from an unmapped page");
	uint32_t v = 0;
	for (int k = 0; k < n; ++k) v |= (uint32_t)page(a >> 12)[(a + k) & 0xFFF] << (8 * k);
	return v;
}

void x86_mem_write(uint32_t a, int n, uint32_t v) {
	for (int k = 0; k < n; ++k) page(a >> 12)[(a + k) & 0xFFF] = (uint8_t)(v >> (8 * k));
}

void x86_load_seg(X86Cpu& c, int n, uint32_t sel) {
	c.sreg[n] = (uint16_t)sel;
	c.sbase[n] = 0;  // flat: the image is at base 0
}

// ---- everything the emitted code calls that the host cannot do ---------------------------
static int g_traps = 0;

void x86_int(X86Cpu& c, int v, uint32_t) {
	std::printf("  STOP  int %02xh at eip 0x%x (the machine, not the code)\n", v, c.eip);
	++g_traps;
	stop("int");
}
uint32_t x86_in(X86Cpu& c, uint32_t port, int) {
	std::printf("  STOP  in from port 0x%x at eip 0x%x\n", port, c.eip);
	stop("in");
}
void x86_out(X86Cpu& c, uint32_t port, int, uint32_t) {
	std::printf("  STOP  out to port 0x%x at eip 0x%x\n", port, c.eip);
	stop("out");
}
void x86_far(X86Cpu& c, uint32_t, uint32_t, bool, int, uint32_t) { stop("far transfer"); }
void x86_retf(X86Cpu& c, int, uint32_t) { stop("retf"); }
void x86_iret(X86Cpu& c, int) { stop("iret"); }
void x86_system(X86Cpu& c, uint32_t, const char* what) { stop(what); }
// LSL and LAR ask for a selector's limit and access rights. Everything here runs in a flat model with
// 4 GB segments, so the limit is the whole address space and the rights are fully permissive. Answering
// them is not a guess about the game, it is the answer a flat descriptor gives.
bool x86_lsl(X86Cpu& c, uint32_t selector, uint32_t& limit) {
	(void)c;
	(void)selector;
	limit = 0xFFFFFu;
	return true;
}
void x86_poll(X86Cpu& c) { c.budget = 1 << 30; }
[[noreturn]] void x86_fault(X86Cpu& c, uint32_t at, const char* why) {
	std::printf("  STOP  fault at 0x%x: %s\n", at, why);
	stop(why);
}
void x86_call(X86Cpu& c, uint32_t target) {
	X86Func f = x86_lookup(g_cur, target);
	if (!f) {
		std::printf("  STOP  call to 0x%x, which is not an emitted entry\n", target);
		stop("call to a non-entry");
	}
	f(c);
}
void x86_jump(X86Cpu& c, uint32_t target) {
	X86Func f = x86_lookup(g_cur, target);
	if (!f) {
		std::printf("  STOP  jump to 0x%x, which is not an emitted entry\n", target);
		stop("jump to a non-entry");
	}
	f(c);
}

// ---- main ---------------------------------------------------------------------------------
int main(int argc, char** argv) {
	uint32_t entry = argc > 1 ? (uint32_t)std::strtoul(argv[1], nullptr, 0) : 0x209u;
	g_cur = &g_mod_p_game;
	const X86Module* m = g_cur;

	std::printf("module   %s  image %u bytes  base 0x%x  %u functions\n", m->name, m->size, m->base,
	            m->nfuncs);

	// The image, at its base, exactly as x86_selftest.cpp does it.
	for (uint32_t k = 0; k < m->size;) {
		uint32_t b = m->base + k, n = 4096 - (b & 0xFFF);
		if (n > m->size - k) n = m->size - k;
		std::memcpy(page(b >> 12) + (b & 0xFFF), m->image + k, n);
		k += n;
	}
	// A stack. The live game's ESP at the hand-off was 0x11EAC8, so the stack lives in the same
	// place here and the addresses in a fault will look familiar.
	const uint32_t STACK_TOP = 0x11F000u;
	for (uint32_t a = STACK_TOP - 0x2000; a < STACK_TOP; a += 0x1000) (void)page(a >> 12);

	X86Func f = x86_lookup(m, entry);
	if (!f) {
		std::printf("no emitted function at 0x%x\n", entry);
		return 1;
	}

	X86Cpu c{};
	c.r[4] = STACK_TOP;  // esp
	c.fl = 0x202;        // IF set
	for (int i = 0; i < 6; ++i) c.sbase[i] = 0;  // flat segments, image at 0
	c.budget = 1 << 30;
	push32(c, 0xFFFFFFF0u);  // the sentinel the function returns to

	std::printf("call     0x%x\n", entry);
	int stopped = 0;
	if (setjmp(g_stop)) {
		stopped = 1;
	} else {
		f(c);
	}

	std::printf("after    eax 0x%08x ecx 0x%08x edx 0x%08x ebx 0x%08x\n", c.r[0], c.r[1], c.r[2], c.r[3]);
	std::printf("         esp 0x%08x ebp 0x%08x esi 0x%08x edi 0x%08x eip 0x%08x\n", c.r[4], c.r[5],
	            c.r[6], c.r[7], c.eip);
	std::printf("         eflags 0x%x  clocks %llu  traps %d  %s\n", c.fl, (unsigned long long)c.clocks,
	            g_traps, stopped ? g_why : "returned");
	return stopped ? 0 : 0;
}
