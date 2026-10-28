// port/main.cpp - Ultima II, natively: the recompiled game code on fmtownskit's FM Towns machine.
//
// WHY THIS EXISTS. tools/recomp-run1.cpp runs one recompiled function against the bare x86 runtime
// (x86.h), which has no DOS, no TBIOS and no video, so the start-up stops at int 21h. This is the
// other half of the kit: `fmt_towns`, the machine. It has the Phar Lap and DOS layer, TBIOS composed
// from the disc's own modules, the timer, the video and the sound. The CPU dispatches into recompiled
// modules by code selector (towns_cpu.cpp), so the game's compiled functions run inside a working
// machine rather than beside a stub.
//
// WHAT THIS PROGRAM DOES TODAY. It sets the machine up as TownsOS hands it over, maps ENCHANT.EXP
// where the running game has it, sets the two code and data selectors this project measured live,
// and calls the entry point. It does not boot the disc, because a port runs a program rather than an
// operating system.
//
// THE ADDRESSES, which are the whole difficulty and are all measured:
//
//   CS 000C and DS/ES/SS/FS/GS 0014, both with linear base 0x400000   (docs/live-session.md, STA)
//   runtime address = file offset - 0x200, so file 0x200 is linear 0x400000 (docs/cfg-findings.md)
//   the entry is runtime 0x101A20, the MP header EIP, delivered by the loader's IRETD
//   ESP at the hand-off was 0x11EAC8                                    (docs/entry-point-question.md)
//
// So the module must be keyed by runtime addresses, which means the recompilation is run on the file
// with its 0x200 header removed: `tail -c +513 ENCHANT.EXP` then `--exp game=stripped@0x0`. Keying it
// on the unstripped file puts every lookup 0x200 out, which is the mistake this project has made
// twice already.
//
// Build: tools/port-build.sh <recomp-dir>

#include "towns.h"
#include "x86.h"

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>

extern const X86Module g_mod_p_game;

static std::vector<uint8_t> read_file(const char* path) {
	std::vector<uint8_t> v;
	FILE* f = std::fopen(path, "rb");
	if (!f) return v;
	std::fseek(f, 0, SEEK_END);
	long n = std::ftell(f);
	std::fseek(f, 0, SEEK_SET);
	if (n > 0) {
		v.resize((size_t)n);
		if (std::fread(v.data(), 1, v.size(), f) != v.size()) v.clear();
	}
	std::fclose(f);
	return v;
}

int main(int argc, char** argv) {
	const char* exp_path = argc > 1 ? argv[1] : "ENCHANT.EXP";
	long frames = argc > 2 ? std::atol(argv[2]) : 0;

	std::vector<uint8_t> file = read_file(exp_path);
	if (file.size() < 0x1000) {
		std::fprintf(stderr, "%s: cannot read the executable\n", exp_path);
		return 2;
	}

	// The image is the file with its 0x200 bytes of MP header and loader stub removed, because the
	// runtime address of file offset 0x200 is 0, and the module is keyed by runtime addresses.
	const uint32_t HEADER = 0x200;
	if (file.size() <= HEADER || file[0] != 'M' || file[1] != 'P') {
		std::fprintf(stderr, "%s: not an MP image\n", exp_path);
		return 2;
	}
	const uint8_t* image = file.data() + HEADER;
	const uint32_t image_size = (uint32_t)(file.size() - HEADER);

	const uint32_t PROGRAM_BASE = 0x400000;  // measured: CS 000C and DS 0014 both sit here
	const uint32_t ENTRY = 0x101A20;         // measured: the loader's IRETD delivers this
	const uint32_t STACK = 0x11EAC8;         // measured: ESP at the hand-off

	towns::Machine m;
	std::printf("machine   townsos profile, %u MB\n", m.profile->ram_mb);
	m.townsos();
	std::printf("machine   TownsOS hand-off state set\n");

	// The program, where the running game has it.
	m.map_ram(PROGRAM_BASE, image_size + 0x10000);
	m.write_block(PROGRAM_BASE, image, image_size);
	// The stack, and a little above it.
	m.map_ram(0x110000, 0x20000);
	std::printf("program   %u bytes at linear 0x%x\n", image_size, PROGRAM_BASE);

	// The two selectors, as measured. 000C is the code segment, 0014 the data one, same base.
	m.set_desc(0x000C, PROGRAM_BASE, 0x2000000);
	m.set_desc(0x0014, PROGRAM_BASE, 0x2000000);

	X86Cpu c;
	std::memset(&c, 0, sizeof c);
	c.r[4] = STACK;
	c.fl = 0x202;
	for (int i = 0; i < 6; ++i) c.sbase[i] = PROGRAM_BASE;
	c.sreg[1] = 0x000C;  // cs
	for (int i = 0; i < 6; ++i)
		if (i != 1) c.sreg[i] = 0x0014;
	c.budget = 1 << 30;

	X86Func entry = x86_lookup_cs(0x000C, ENTRY);
	if (!entry) {
		std::printf("no recompiled function at 000C:%x\n", ENTRY);
		std::printf("the module holds %u functions, keyed by runtime address\n", g_mod_p_game.nfuncs);
		return 1;
	}

	std::printf("entry     000C:%x  esp 0x%x  cs base 0x%x\n", ENTRY, STACK, PROGRAM_BASE);
	if (frames) {
		m.on_vsync = [&](towns::Machine& mm) {
			if ((long)mm.frame >= frames) throw towns::Stop{0};
		};
	}

	int code = 0;
	try {
		entry(c);
		std::printf("the program returned from its entry\n");
	} catch (const towns::Stop& s) {
		code = s.code;
		std::printf("stopped\n");
	}
	std::printf("after     eax 0x%08x ecx 0x%08x edx 0x%08x ebx 0x%08x\n", c.r[0], c.r[1], c.r[2], c.r[3]);
	std::printf("          esp 0x%08x ebp 0x%08x esi 0x%08x edi 0x%08x eip 0x%08x\n", c.r[4], c.r[5],
	            c.r[6], c.r[7], c.eip);
	std::printf("          machine frames %llu  guest clocks %llu\n", (unsigned long long)m.frame,
	            (unsigned long long)c.clocks);
	return code;
}
