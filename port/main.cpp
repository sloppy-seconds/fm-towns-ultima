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

// An instruction trace, for differential debugging against the machine. The kit calls this for every
// instruction when the build defines X86_TRACE_ON (see x86.h), and the point is to compare the port's sequence
// with a control-flow capture taken off the emulator: the first place they part is the bug. Without it the
// only way to find a divergence is to guess which BIOS return was answered wrongly, which is the failure this
// project keeps paying for.
#ifdef X86_TRACE_ON
static FILE* g_trace_file = nullptr;
static unsigned long long g_trace_written = 0, g_trace_limit = 0;
static std::vector<uint8_t> g_trace_seen;     // one byte per 4 KB page of a 64 MB window, then bit set per byte
// First executions only, in the order they happen. A full instruction trace of a real start-up is hundreds of
// millions of lines and would have to be paged through; the order in which each address is *first* executed is
// a few tens of thousands of lines, is bounded whatever the run length, and is what a comparison against the
// machine's block-level capture actually needs.
void x86_trace(X86Cpu& c, uint32_t at) {
	if (!g_trace_file || g_trace_written >= g_trace_limit) return;
	uint64_t key = ((uint64_t)(c.sreg[1] & 0xFFFF) << 32) | at;
	if (g_trace_seen.empty()) g_trace_seen.assign((size_t)1 << 22, 0);   // 4 MB of bits covers 32 M addresses
	size_t slot = (size_t)(key >> 3) & ((1u << 22) - 1);
	uint8_t bit = (uint8_t)(1u << (key & 7));
	if (g_trace_seen[slot] & bit) return;
	g_trace_seen[slot] |= bit;
	std::fprintf(g_trace_file, "%04x:%08x\n", (unsigned)c.sreg[1], at);
	++g_trace_written;
}
#endif

#include "floppy.h"

// The A: drive, as a real FAT12 reader over the image the machine mounts. Read only, and opened by main.
static u2floppy::Image g_floppy;

// Hooks the vendored runtime calls (declared in towns_dos.cpp, which is where the DOS layer decides where a
// name lives). They are defined here because the floppy is U2's save-disk format in practice, not a platform
// service the kit should own. The declaration there sits inside namespace towns, so these must too.
namespace towns {
bool fm_floppy_attrs(const std::string& path, uint32_t& attrib, uint32_t& size) {
	u2floppy::Entry e;
	if (!g_floppy.find(path, e)) return false;
	attrib = e.dos_attr();
	size = e.size;
	return true;
}

bool fm_floppy_read(const std::string& path, std::vector<uint8_t>& out) { return g_floppy.read(path, out); }
}  // namespace towns

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
	const char* tbios_path = argc > 3 ? argv[3] : "build/port/tbios.bin";
	const char* cue_path = argc > 4 ? argv[4] : "build/port/disc.cue";
	const char* floppy_path = argc > 5 ? argv[5] : "saves/userdisk.hdm";

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

	// TBIOS. This disc does not carry the modular set that TBIOS.INI composes: it ships a finished
	// TBIOS.BIN beside TBIOS.SYS, so there is nothing to compose. It is read as a plain file rather than
	// through the kit's Disc, because the kit's cue reader refuses this disc's PREGAP on the audio tracks
	// ("a gap not in the files is not read here"), and tool 21 in this repository already reads the ISO
	// correctly. tools/port-build.sh extracts it from the disc with tools/cd.js.
	std::vector<uint8_t> tbios = read_file(tbios_path);
	if (tbios.empty()) {
		std::fprintf(stderr, "TBIOS: cannot read %s\n", tbios_path);
		return 2;
	}
	std::printf("machine   TBIOS %zu bytes from %s, low 768 KB mapped by boot_towns\n", tbios.size(),
	            tbios_path);
	// U2_TRACE_INT=1 records every BIOS call the program makes. The kit's int90() implements the
	// services its own recordings saw, and this program asks for one they never did, so the list of
	// what it asks for is the evidence needed to decide what to add.
	if (std::getenv("U2_TRACE_INT")) m.trace_int = true;

	// The program opens its assets by DOS path (Q:\GRAPH\MAP2_1.TIF and friends), so the machine needs a
	// disc to read them from. Without one, the first int 21h open segfaults inside Disc::handle, which is
	// what the 600-frame run did before this was here.
	{
		std::string err;
		if (!m.disc.open(cue_path, err)) {
			std::fprintf(stderr, "disc %s: %s\n", cue_path, err.c_str());
			return 2;
		}
		std::printf("machine   disc opened from %s\n", cue_path);
	}

	// The A: drive. Without it the program's start-up probe for A:\ROSTER1.UT2 fails and it shows an "insert the
	// disk" prompt instead of the title, which is what the port did before this existed. A missing image is
	// reported and survived rather than treated as fatal, so the port still runs when only the CD is present.
	if (g_floppy.open(floppy_path)) {
		std::printf("machine   floppy opened from %s\n", floppy_path);
		if (std::getenv("U2_FLOPPY_LS")) {
			for (const auto& e : g_floppy.list())
				std::printf("floppy    %-14s %6u bytes%s\n", e.name.c_str(), e.size, e.is_dir() ? "  (dir)" : "");
			return 0;
		}
	} else {
		std::printf("machine   no floppy: A: will answer nothing and the program will ask for a disk\n");
	}
	towns::boot_towns(m, tbios);

	// The program, where the running game has it. The image is followed by the program's own BSS and
	// heap: it writes past the image end at 0x51e000, so the mapping is generous rather than exact.
	m.map_ram(PROGRAM_BASE, image_size + 0x40000);
	m.write_block(PROGRAM_BASE, image, image_size);
	std::printf("program   %u bytes at linear 0x%x, %u KB of clear space after it\n", image_size,
	            PROGRAM_BASE, 0x40000 / 1024);

	// The two selectors, as measured. 000C is the code segment, 0014 the data one, same base.
	m.set_desc(0x000C, PROGRAM_BASE, 0x2000000);
	m.set_desc(0x0014, PROGRAM_BASE, 0x2000000);
	// 0110 is the TBIOS code segment. Live STA reported CS=0110 at linear 0x19EF4, and boot_towns puts
	// the TBIOS image at 0x100000, so the segment's base is 0x100000 and 0x19EF4 is its offset 0x9EF4.
	m.set_desc(0x0110, 0x100000, (uint32_t)tbios.size());
	// 0024 and 002C are selectors the start-up loads and TownsOS would have created. Their bases are
	// NOT measured, so this is a flat descriptor standing in for one, and it is marked as a guess: if
	// the program reads through them and gets nonsense, this is the first place to look.
	m.set_desc(0x0024, 0, 0xFFFFFFFF);
	m.set_desc(0x002C, 0, 0xFFFFFFFF);

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
	// The VRAM access counters have to be on before the program runs, not after it has finished.
	// U2_TRACE_FILE=<path> writes the instruction trace, and U2_TRACE_LIMIT caps it (default two million
	// instructions, which is a few hundred MB of text at worst and enough to cover start-up).
#ifdef X86_TRACE_ON
	if (const char* tf = std::getenv("U2_TRACE_FILE")) {
		g_trace_file = std::fopen(tf, "w");
		if (!g_trace_file) {
			std::fprintf(stderr, "trace: cannot write %s\n", tf);
			return 2;
		}
		const char* lim = std::getenv("U2_TRACE_LIMIT");
		g_trace_limit = lim ? std::strtoull(lim, nullptr, 10) : 200000ull;	// first executions, not instructions
		std::printf("trace     %s, first executions up to %llu\n", tf, g_trace_limit);
	}
#endif
	if (std::getenv("U2_VRAM")) m.set_count_access(true);
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
	std::printf("after     eax 0x%08x ecx 0x%08x edx 0x%08x ebx 0x%08x\n", c.r[0], c.r[1], c.r[2], c.r[3]);	std::printf("          esp 0x%08x ebp 0x%08x esi 0x%08x edi 0x%08x eip 0x%08x\n", c.r[4], c.r[5],
	            c.r[6], c.r[7], c.eip);
	std::printf("          machine frames %llu  guest clocks %llu\n", (unsigned long long)m.frame,
	            (unsigned long long)c.clocks);
#ifdef X86_TRACE_ON
	if (g_trace_file) {
		std::printf("trace     %llu instructions written\n", g_trace_written);
		std::fclose(g_trace_file);
		g_trace_file = nullptr;
	}
#endif
	// U2_DUMP=<linear hex> prints 32 bytes of guest memory at the end, so a buffer the program filled can
	// be compared with the same buffer read live off the machine. That is how the int93 outregs struct at
	// DS:0x7a634 was checked against the value measured there.
	// U2_DIFF_CODE=1 compares the program's code in guest memory against the image on disk at the end of the
	// run and prints every byte that changed. That is item 7c: a program that patches its own instructions is
	// invisible to a recompiler, and one site found by tripping over it does not prove it is the only one.
	//
	// U2_COVERAGE=<file> narrows it to bytes the recompiler decoded as instructions, written by
	// tools/insncoverage.py from the same walk. Without it the diff is half a megabyte of the program filling
	// its own zero-filled data, and a patched instruction is lost in that.
	if (std::getenv("U2_DIFF_CODE")) {
		std::vector<char> is_insn(image_size, 0);
		if (const char* cov = std::getenv("U2_COVERAGE")) {
			std::vector<uint8_t> text = read_file(cov);
			std::string line;
			uint32_t marked = 0;
			for (size_t k = 0; k <= text.size(); ++k) {
				if (k < text.size() && text[k] != '\n') { line += (char)text[k]; continue; }
				if (!line.empty() && line[0] != '#') {
					unsigned addr = 0, size = 0;
					if (std::sscanf(line.c_str(), "%x %u", &addr, &size) == 2)
						for (unsigned b = 0; b < size && addr + b < image_size; ++b) {
							if (!is_insn[addr + b]) is_insn[addr + b] = 1, ++marked;
						}
				}
				line.clear();
			}
			std::printf("coverage  %u bytes of the image are instruction bytes, from %s\n", marked, cov);
		} else {
			std::printf("coverage  none given: every difference will be reported, data included\n");
		}
		std::vector<uint8_t> now(image_size);
		m.read_block(PROGRAM_BASE, now.data(), image_size);
		uint32_t diff = 0, in_code = 0;
		for (uint32_t k = 0; k < image_size; ++k) {
			if (now[k] == image[k]) continue;
			++diff;
			if (!is_insn[k]) continue;
			++in_code;
			std::printf("patched   guest 0x%06x  %02x -> %02x\n", k, image[k], now[k]);
		}
		std::printf("patched   %u bytes differ, of which %u are inside a decoded instruction\n", diff, in_code);
	}
	// U2_VRAM=1 reports what the machine's own VRAM vector holds at the end of the run. That is the first half
	// of item 7a: if it is empty, the picture is missing because nothing is mapped to it, not because the
	// program drew nothing, and the two are indistinguishable from a frame count.
	if (std::getenv("U2_VRAM")) {
		m.set_count_access(false);                              // just in case, before the counters are read
		uint64_t nonzero = 0;
		long first = -1;
		for (size_t k = 0; k < m.vram.size(); ++k) {
			if (!m.vram[k]) continue;
			++nonzero;
			if (first < 0) first = (long)k;
		}
		std::printf("vram      %llu of %zu bytes are non-zero, first at %ld\n", (unsigned long long)nonzero,
		            m.vram.size(), first);
		// The access counters answer the next question a dump cannot: did the program touch VRAM at all, or did
		// it write somewhere this machine does not call VRAM. "Drew nothing" and "never tried" look identical in
		// a memory snapshot.
		std::printf("vram      %llu writes and %llu reads to it, %llu sprite writes\n",
		            (unsigned long long)m.access.vram_w, (unsigned long long)m.access.vram_r,
		            (unsigned long long)m.access.spr_w);
		if (first >= 0) {
			std::printf("vram      from %#lx:", (unsigned long)first);
			for (long k = first; k < first + 32 && k < (long)m.vram.size(); ++k)
				std::printf(" %02x", m.vram[k]);
			std::printf("\n");
		}
	}
	if (const char* dump = std::getenv("U2_DUMP")) {
		uint32_t at = (uint32_t)std::strtoul(dump, nullptr, 16);
		uint8_t buf[32];
		m.read_block(at, buf, sizeof buf);
		std::printf("memory    %08x:", at);
		for (unsigned char ch : buf) std::printf(" %02x", ch);
		std::printf("\n");
	}
	return code;
}
