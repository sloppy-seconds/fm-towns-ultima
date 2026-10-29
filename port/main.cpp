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
#include "towns_sdl.h"

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>

extern const X86Module g_mod_p_game;

// An instruction trace, for differential debugging against the machine. The kit calls this for every
// instruction when the build defines X86_TRACE_ON (see x86.h), and the point is to compare the port's sequence
// with a control-flow capture taken off the emulator: the first place they part is the bug. Without it the
// only way to find a divergence is to guess which BIOS return was answered wrongly, which is the failure this
// project keeps paying for.
// The VRAM signature, in one place because two callers need it: the end of a run and a U2_STOP_AT stop. Items 7a
// compares this against the same 512 KB read from the machine's segment 0120, so a stop has to produce it too or the
// comparison could only ever be taken at a frame count, which is not a comparable point.
//
// OUTSIDE the X86_TRACE_ON guard, unlike everything below it. It was inside, and the call at the end of a run is
// not guarded, so a build without the trace failed to compile with "print_vram_hash was not declared in this
// scope". VRAM hashing is an instrument in its own right (U2_VRAM_HASH) and does not need the trace to exist.
static void print_vram_hash(const towns::Machine& m) {
	auto fnv = [](const uint8_t* p, size_t n, uint32_t h) {
		for (size_t i = 0; i < n; ++i) h = (h ^ p[i]) * 16777619u;
		return h;
	};
	std::printf("vramhash  %08x  %zu bytes\n", fnv(m.vram.data(), m.vram.size(), 2166136261u), m.vram.size());
	const size_t block = 0x4000;
	std::printf("vramblock ");
	for (size_t off = 0; off + block <= m.vram.size(); off += block)
		std::printf(" %08x", fnv(m.vram.data() + off, block, 2166136261u));
	std::printf("\n");
}

#ifdef X86_TRACE_ON
static FILE* g_trace_file = nullptr;
static unsigned long long g_trace_written = 0, g_trace_limit = 0;
static std::vector<uint8_t> g_trace_seen;     // one byte per 4 KB page of a 64 MB window, then bit set per byte
static uint32_t g_stop_at = 0, g_stop_dump = 0, g_stop_len = 0;
static unsigned long long g_stop_count = 0, g_stop_hits = 0;
// First executions only, in the order they happen. A full instruction trace of a real start-up is hundreds of
// millions of lines and would have to be paged through; the order in which each address is *first* executed is
// a few tens of thousands of lines, is bounded whatever the run length, and is what a comparison against the
// machine's block-level capture actually needs.
//
// U2_STOP_AT=<guest addr> stops the run when that instruction runs and prints memory, so a value can be read at
// exactly the same point on both sides. That is how a divergence in an allocator's return value gets compared
// rather than guessed at.
void x86_trace(X86Cpu& c, uint32_t at) {
	if (g_stop_at && at == g_stop_at) {
		if (++g_stop_hits < g_stop_count) return;      // U2_STOP_COUNT stops at the Nth hit, not the first
		std::printf("stop      reached 0x%06x on hit %llu after %llu instructions\n", at, g_stop_hits,
		            g_trace_written);
		if (g_stop_dump && g_stop_len) {
			std::vector<uint8_t> buf(g_stop_len);
			towns::g_towns->read_block(g_stop_dump, buf.data(), (uint32_t)buf.size());
			std::printf("memory    %08x:", g_stop_dump);
			for (unsigned char ch : buf) std::printf(" %02x", ch);
			std::printf("\n");
		}
		std::printf("regs      eax %08x ebx %08x ecx %08x edx %08x esi %08x edi %08x ebp %08x esp %08x\n",
		            c.r[0], c.r[3], c.r[1], c.r[2], c.r[6], c.r[7], c.r[5], c.r[4]);
		// The segment registers and their bases, because a difference in a descriptor's base looks exactly like a
		// difference in the data and the general registers cannot tell the two apart.
		std::printf("segs      cs %04x/%08x ds %04x/%08x es %04x/%08x ss %04x/%08x fs %04x/%08x gs %04x/%08x\n",
		            (unsigned)c.sreg[1], (unsigned)c.sbase[1], (unsigned)c.sreg[3], (unsigned)c.sbase[3],
		            (unsigned)c.sreg[0], (unsigned)c.sbase[0], (unsigned)c.sreg[2], (unsigned)c.sbase[2],
		            (unsigned)c.sreg[4], (unsigned)c.sbase[4], (unsigned)c.sreg[5], (unsigned)c.sbase[5]);
		// The call stack, because a divergence this early is usually "the machine got here through a path that
		// initialised something and the port got here through one that did not", and the return address names the
		// path. The first dword is the return address; the rest is whatever the caller had pushed.
		{
			std::vector<uint8_t> sbuf(32);
			towns::g_towns->read_block(c.sbase[2] + c.r[4], sbuf.data(), (uint32_t)sbuf.size());
			std::printf("stack    ");
			for (int i = 0; i < 8; ++i) {
				uint32_t v = 0;
				std::memcpy(&v, sbuf.data() + i * 4, 4);
				std::printf("%s%08x", i ? " " : "", v);
			}
			std::printf("   (ss:%08x)", c.sbase[2] + c.r[4]);
			// [ebp+4] is the return address, and it names the caller. That is the question when a function
			// behaves correctly every time it is called and the program still does not move on: the fault is
			// then in whoever is calling it and what it does with the answer.
			uint8_t rb[4];
			towns::g_towns->read_block(c.sbase[2] + c.r[5] + 4, rb, 4);
			uint32_t ret = 0;
			std::memcpy(&ret, rb, 4);
			std::printf(" ret %08x\n", ret);
		}
		if (g_trace_file) std::fclose(g_trace_file);
		if (std::getenv("U2_VRAM_HASH")) print_vram_hash(*towns::g_towns);
		std::exit(0);
	}
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
	// Flags first, then the positional arguments the port has always taken. `--sdl` opens the kit's window
	// (fmtownskit's SdlHost) and runs unpaced until the window is closed, and it changes NOTHING else: the
	// trace, the stop-at, the keys, the frame limit and the shot all still apply, because the window is
	// driven from the same on_vsync the headless run uses. So `--sdl` is a viewer, not a second mode.
	// `--graphics=<backend>` picks where the picture goes. `sdl` is the default, because a person running the port
	// wants to see it, and `none` is pure headless, which is what tools/port-build.sh and every measurement pass so
	// that a run cannot be changed by whether a display happens to exist. A backend is a name and not a flag
	// because more than one is plausible: a frame dump, a remote viewer, a shim that compares against MAME. An
	// unknown name is refused with the list rather than silently treated as none, since a typo would otherwise look
	// like a headless run that simply drew nothing.
	std::string graphics = "sdl";
	bool fullscreen = false;
	int scale = 0;
	long frames_flag = -1;
	std::vector<const char*> pos;
	for (int i = 1; i < argc; ++i) {
		if (!std::strncmp(argv[i], "--graphics=", 11)) graphics = argv[i] + 11;
		else if (!std::strcmp(argv[i], "--fullscreen")) fullscreen = true;
		else if (!std::strncmp(argv[i], "--scale=", 8)) scale = std::atoi(argv[i] + 8);
		else if (!std::strncmp(argv[i], "--frames=", 9)) frames_flag = std::atol(argv[i] + 9);
		else pos.push_back(argv[i]);
	}
	if (graphics != "sdl" && graphics != "none") {
		std::fprintf(stderr, "--graphics=%s: not a backend. This build has: sdl, none\n", graphics.c_str());
		return 2;
	}
	bool use_sdl = graphics == "sdl";
	const char* exp_path = pos.size() > 0 ? pos[0] : "ENCHANT.EXP";
	// The second positional is a frame count only when it is one. It is optional, and when `--frames=N` already
	// gave a count it is absent, so deciding by shape rather than by position keeps `ENCHANT.EXP 600 tbios cue`
	// and `--frames=600 ENCHANT.EXP tbios cue` both meaning what they look like. A first version indexed
	// positionally and, under --frames, read the TBIOS image as the cue and the cue as TBIOS: the machine then
	// reported "TBIOS 110 bytes" and the run was meaningless.
	size_t next = 1;
	long frames = frames_flag >= 0 ? frames_flag : 0;
	if (frames_flag < 0 && pos.size() > 1) {
		const char* a = pos[1];
		bool digits = *a != 0;
		for (const char* q = a; *q; ++q)
			if (*q < '0' || *q > '9') digits = false;
		if (digits) {
			frames = std::atol(a);
			next = 2;
		}
	}
	const char* tbios_path = pos.size() > next ? pos[next] : "build/port/tbios.bin";
	const char* cue_path = pos.size() > next + 1 ? pos[next + 1] : "build/port/disc.cue";
	const char* floppy_path = pos.size() > next + 2 ? pos[next + 2] : "saves/userdisk.hdm";

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
	// The entry is the header's own address field, which is an offset into the image (item 8b), so the port
	// reads it instead of naming it. For ENCHANT.EXP that field is 0x101A20, which is what was hardcoded here
	// and what the loader's IRETD was measured to deliver, so this is the same number arrived at generally.
	// It is what lets a second MP program be run without editing the port: BRITISH.EXP's field is 0x54094.
	const uint32_t ENTRY_FROM_HEADER = (uint32_t)file[0x14] | ((uint32_t)file[0x15] << 8) |
									((uint32_t)file[0x16] << 16) | ((uint32_t)file[0x17] << 24);
	const uint32_t ENTRY = std::getenv("U2_ENTRY") ? (uint32_t)std::strtoul(std::getenv("U2_ENTRY"), nullptr, 16)
											 : ENTRY_FROM_HEADER;
	// ESP at the entry, measured twice and corrected once. 0x11EB10 is what STA reports when a breakpoint on
	// 000C:101A20 fires, and the program's own heap base (DS:0xDFD08) is that same number, so it is the value
	// the loader hands over. The older 0x11EAC8 was 0x48 lower, which put the heap base and every pointer it
	// returned 0x48 below the machine's, and the allocator then failed on its 28th allocation.
	const uint32_t STACK = std::getenv("U2_STACK") ? (uint32_t)std::strtoul(std::getenv("U2_STACK"), nullptr, 16)
										  : 0x11EB10;

	towns::Machine m;
	// The profile's program base and physical base are the kit's own ports: 0x200000 linear and 0x49000
	// physical. This program is at linear 0x400000, measured, and its pages sit at physical 0x76000, which is
	// the machine's own answer: `ADTR 14:0ce0` reported LINE 0x400CE0 and PHYS 0x76CE0 on the live machine.
	// Both matter because Phar Lap 250Fh turns a protected-mode address into a real-mode `seg:off` through
	// these two numbers, and the program uses that result to read a block it then copies into a table.
	static const towns::Profile kU2Profile = {"u2", 2, PROGRAM_BASE, 0x76000, 0, 0x1FFFFF};
	m.profile = &kU2Profile;
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
			// A missing disc is a warning, not the end of the port. The DOS layer now returns an error to the
			// program instead of dereferencing a null track (item 8c), and a program whose first asset open fails
			// is a more useful diagnostic than a port that refuses to start.
			std::printf("machine   no disc: %s\n", err.c_str());
		} else {
			std::printf("machine   disc opened from %s\n", cue_path);
		}
	}

	// THE FONT ROM. The game fetches glyphs through selector 0138, whose base on the machine is 0xC2100000, and the kit
	// maps that linear range onto Machine::font. With the vector empty every glyph read returns zero, which draws
	// nothing: the copyright notice's box and bars appeared and its text did not. The ROM is vendored, not disc data
	// (it ships with the emulator's ROM set), so this is a warning when absent rather than a hard failure.
	{
		const char* font_path = std::getenv("U2_FONT") ? std::getenv("U2_FONT") : "FMT_FNT.ROM";
		std::vector<uint8_t> glyphs = read_file(font_path);
		if (glyphs.empty()) {
			std::printf("machine   no font ROM at %s, so every glyph will be blank (set U2_FONT)\n", font_path);
		} else {
			m.font = std::move(glyphs);
			std::printf("machine   font ROM %zu bytes from %s\n", m.font.size(), font_path);
		}
	}

	// The A: drive. Without it the program's start-up probe for A:\ROSTER1.UT2 fails and it shows an "insert the	// disk" prompt instead of the title, which is what the port did before this existed. A missing image is
	// reported and survived rather than treated as fatal, so the port still runs when only the CD is present.
	if (g_floppy.open(floppy_path)) {
		std::printf("machine   floppy opened from %s\n", floppy_path);
		if (std::getenv("U2_FLOPPY_LS")) {
			// Listing is not serving. The failure this option exists to rule out is a shim that answers the
			// attribute query and returns nothing when the program reads, which moves the failure one call later
			// and looks like a program fault. So each file is read in full and reported with a checksum, and a
			// short read is a failure of the run rather than a note.
			int bad = 0;
			for (const auto& e : g_floppy.list()) {
				std::printf("floppy    %-14s %6u bytes%s", e.name.c_str(), e.size, e.is_dir() ? "  (dir)" : "");
				std::vector<uint8_t> data;
				if (e.is_dir()) {
					std::printf("\n");
					continue;
				}
				if (!g_floppy.read(e.name, data)) {
					std::printf("  READ FAILED\n");
					++bad;
					continue;
				}
				uint32_t h = 2166136261u;
				for (uint8_t ch : data) h = (h ^ ch) * 16777619u;   // FNV-1a, so two runs can be compared
				std::printf("  read %u, fnv %08x%s\n", (unsigned)data.size(), h,
				            data.size() == e.size ? "" : "  SHORT");
				if (data.size() != e.size) ++bad;
			}
			std::printf("floppy    %d of the files read short or not at all\n", bad);
			return bad ? 1 : 0;
		}
	} else {
		std::printf("machine   no floppy: A: will answer nothing and the program will ask for a disk\n");
	}
	towns::boot_towns(m, tbios);

	// The program, where the running game has it. The image is followed by the program's own BSS and
	// heap: it writes past the image end at 0x51e000, so the mapping is generous rather than exact.
	m.map_ram(PROGRAM_BASE, image_size + 0x40000);
	// And the space the program's own heap is allowed to grow into. Measured: the start-up reads the DS
	// descriptor's limit with LSL and stores it as the heap limit, and on the machine that limit is 0x377FFF.
	// The port used to fabricate 0x2000000, so the program was told its heap was nine times larger than the
	// machine's. Mapping has to cover it, because the heap grows up from the stack pointer inside this segment.
	m.map_ram(0x500000, 0x300000);
	m.write_block(PROGRAM_BASE, image, image_size);
	std::printf("program   %u bytes at linear 0x%x, %u KB of clear space after it\n", image_size,
	            PROGRAM_BASE, 0x40000 / 1024);

	// The two selectors, as measured. 000C is the code segment, 0014 the data one, same base.
	m.set_desc(0x000C, PROGRAM_BASE, 0x377FFF);	// the machine's DS/CS limit, measured with LSL
	m.set_desc(0x0014, PROGRAM_BASE, 0x377FFF);
	// 0110 is the TBIOS code segment. Live STA reported CS=0110 at linear 0x19EF4, and boot_towns puts
	// the TBIOS image at 0x100000, so the segment's base is 0x100000 and 0x19EF4 is its offset 0x9EF4.
	m.set_desc(0x0110, 0x100000, (uint32_t)tbios.size());
	// 0024 and 002C are selectors the start-up loads and TownsOS would have created. Measured on the running game
	// with `ADTR 24:0` and `ADTR 2c:0`, their linear bases are 0x000BF870 and 0x000BF820, fifty bytes apart, which
	// is a pair of TownsOS structures rather than anything this port can supply. The flat stand-in below is kept
	// deliberately: mapping them to their real bases would point into memory this port does not have, and the
	// program only reads them. What mattered was that they are NOT the screen, which is what the next two lines
	// establish.
	m.set_desc(0x0024, 0, 0xFFFFFFFF);
	m.set_desc(0x002C, 0, 0xFFFFFFFF);
	// 0120 is the SCREEN, and its absence was the reason the port drew nothing. Measured on the running game:
	// `STA` reports `ES=0120(LIN:80000000)`, and the kit maps VRAM at linear 0x80000000 (`towns_mem.cpp`: the
	// page table for 0x80000000.. sits on `m.vram`). So the program reaches the screen through a selector, not
	// through a fixed address, and a port without that descriptor gives it nowhere to draw. Every VRAM figure
	// before this line was a measurement of a program that had been handed no screen.
	m.set_desc(0x0120, 0x80000000, 0x7FFFF);
	// THE REST OF THE DESCRIPTOR TABLE THIS PROGRAM USES, read off the running game with `PRI GDT` rather than guessed.
	// Each is a window it reaches data through, and a selector with no descriptor resolves silently to base 0, so a
	// missing one does not fault, it just points somewhere wrong:
	//
	//   0128  base 0x80100000  limit 0x7FFFF   VRAM through the planar-packed view (towns_mem.cpp's packed())
	//   0130  base 0x81000000  limit 0x1FFFF   sprite RAM
	//   0138  base 0xC2100000  limit 0x41FFF   THE FONT ROM
	//   0140  base 0xC2200000  limit 0xFFF     the PCM wave RAM
	//   0148  base 0xC2000000  limit 0x7FFFF
	//
	// 0138 is the one that matters here. The copyright notice's text is fetched from the font ROM through it, and the
	// kit already maps 0xC2100000 onto Machine::font -- but nothing loaded the ROM, so every read returned zero and the
	// glyphs were drawn as nothing. That is the whole of the empty box: the box is layer art and appeared, the text is a
	// font fetch and was zeroes. The load itself is below, next to the other files this port opens.
	m.set_desc(0x0128, 0x80100000, 0x7FFFF);
	m.set_desc(0x0130, 0x81000000, 0x1FFFF);
	m.set_desc(0x0138, 0xC2100000, 0x41FFF);
	m.set_desc(0x0140, 0xC2200000, 0xFFF);
	m.set_desc(0x0148, 0xC2000000, 0x7FFFF);

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
	} else {
		g_trace_limit = 0;						// no trace file, but stop-at can still be used
	}
	if (const char* sa = std::getenv("U2_STOP_AT")) {
		g_stop_at = (uint32_t)std::strtoul(sa, nullptr, 16);
		if (const char* sd = std::getenv("U2_STOP_DUMP")) g_stop_dump = (uint32_t)std::strtoul(sd, nullptr, 16);
		if (const char* sc = std::getenv("U2_STOP_COUNT")) g_stop_count = std::strtoull(sc, nullptr, 10);
		if (!g_stop_count) g_stop_count = 1;
		g_stop_len = 64;
		std::printf("stop      will stop at 0x%06x on hit %llu%s\n", g_stop_at, g_stop_hits + g_stop_count,
		            g_stop_dump ? "" : " (no U2_STOP_DUMP, registers only)");
	}
#endif
	// U2_KEYS=<frame>:<scan><ascii>,... presses keys on given frames, which is how the port is driven past a
	// keyboard wait. The pair is hexadecimal and both halves are two digits, so `60:1e61` is "at frame 60,
	// press the key whose scan code is 0x1E and whose ASCII is 0x61", which is what 'a' measured as on the
	// machine at 000C:000000B6. Two digits each is not a limitation but a safeguard: a scan code is 8 bits and
	// so is the ASCII, and a longer field would silently mean a different key.
	struct KeyPress { long frame; uint8_t scan, ascii; };
	std::vector<KeyPress> keypresses;
	if (const char* ks = std::getenv("U2_KEYS")) {
		std::string spec(ks);
		size_t at = 0;
		while (at < spec.size()) {
			size_t comma = spec.find(',', at);
			std::string item = spec.substr(at, comma == std::string::npos ? std::string::npos : comma - at);
			at = comma == std::string::npos ? spec.size() : comma + 1;
			size_t colon = item.find(':');
			if (colon == std::string::npos || item.size() - colon - 1 != 4) {
				std::fprintf(stderr, "U2_KEYS: '%s' is not <frame>:<scan><ascii>\n", item.c_str());
				return 2;
			}
			KeyPress k{};
			k.frame = std::strtol(item.substr(0, colon).c_str(), nullptr, 10);
			k.scan = (uint8_t)std::strtoul(item.substr(colon + 1, 2).c_str(), nullptr, 16);
			k.ascii = (uint8_t)std::strtoul(item.substr(colon + 3, 2).c_str(), nullptr, 16);
			keypresses.push_back(k);
		}
		std::printf("keys      %zu presses: ", keypresses.size());
		for (const KeyPress& k : keypresses) std::printf("%ld:%02x%02x ", k.frame, k.scan, k.ascii);
		std::printf("\n");
	}
	if (std::getenv("U2_VRAM")) m.set_count_access(true);
	// U2_SHOT=<path> writes the frame the machine is showing when the run ends, with the kit's own renderer, so
	// "the port draws something" is a picture rather than a byte count. The kit has write_png for exactly this
	// (it is how its own ports save frames at a VSYNC).
	const char* shot_path = std::getenv("U2_SHOT");
	// U2_PALETTE=1 prints the palette the machine holds when the run ends, in the same `RRGGBB` form the emulator's
	// `PRI PALETTE` prints, one line per layer. Item 4e wants the running game's palette recorded and compared, and
	// two tables in the same notation can be compared by eye and by diff; a rendered picture cannot.
	const bool show_palette = std::getenv("U2_PALETTE") != nullptr;
	// The window, when asked for. `open` failing is not fatal: the run continues headless and says so, because a
	// missing display should cost a picture and not a measurement. The keystrokes the front-end reads are handed
	// straight to the keyboard queue the KYB_read patch serves, so typing works in the window.
	towns::SdlHost host;
	if (use_sdl) {
		towns::SdlOptions o;
		o.title = "Ultima II - FM Towns, recompiled";
		o.scale = scale;
		o.fullscreen = fullscreen;
		std::string err;
		if (host.open(o, err)) {
			host.on_key = [&m](uint8_t scan, uint8_t ascii) { m.press_key(scan, ascii); };
			std::printf("graphics  sdl, window open, Escape closes it and ends the run\n");
		} else {
			// A display that is missing costs a picture and not a measurement, so this falls back rather than
			// refusing. It says so, because "the window did not open" and "the window opened and showed nothing"
			// must not look the same.
			std::printf("graphics  sdl unavailable (%s), falling back to none\n", err.c_str());
			use_sdl = false;
		}
	} else {
		std::printf("graphics  none\n");
	}
	// U2_WATCH=<linear>[:<length>] reports every write into one linear range, with the instruction that made
	// it. This is the port's answer to a physical MEMW watch on the machine, and one thing it does better:
	// the machine's page tables move a linear address between physical pages, so a watch armed on a physical
	// byte can miss the write it was set for. Linear is what the program's code addresses.
	if (const char* w = std::getenv("U2_WATCH")) {
		char buf[64];
		std::snprintf(buf, sizeof buf, "%s", w);
		char* colon = std::strchr(buf, ':');
		uint32_t len = 1;
		if (colon) {
			*colon = 0;
			len = (uint32_t)std::strtoul(colon + 1, nullptr, 16);
		}
		g_watch_lo = (uint32_t)std::strtoul(buf, nullptr, 16);
		g_watch_hi = g_watch_lo + (len ? len : 1);
		std::printf("watch     [%08x,%08x)\n", g_watch_lo, g_watch_hi);
	}
	// The running cpu, always, not only for the watch: an unknown I/O port is reported with the instruction that
	// wrote it, and a port number with no caller is a lead that has to be found again by watching.
	g_x86_cur = &c;
	if (frames || use_sdl || !keypresses.empty()) {
		// The callback is installed when ANY of these needs it. It used to be installed only under a frame limit,
		// which would have left `--sdl` with no limit showing a frozen window, because the hook that draws it is
		// this one.
		m.on_vsync = [&](towns::Machine& mm) {
			// The window first, because it is what paces the run and what throws Stop{0} when it is closed. Then
			// everything the headless runs do, in the same order as before, so `--sdl` adds a picture rather than
			// changing a measurement.
			if (use_sdl) host.vsync(mm);
			if (frames && (long)mm.frame >= frames) throw towns::Stop{0};
			for (const KeyPress& k : keypresses)
				if (k.frame == (long)mm.frame) mm.press_key(k.scan, k.ascii);
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
	// Whether a queued key was ever taken. "The program did not react" and "the program never asked" look
	// identical from the outside, and the difference decides whether the fault is in the keyboard or in the
	// program's own path.
	if (!m.keys.empty() || m.keys_served) {
		std::printf("keys      %lu served, %zu still queued\n", m.keys_served, m.keys.size());
	}
	if (shot_path) {
		std::vector<uint32_t> rgb;
		int w = 0, h = 0;
		m.render(rgb, w, h);
		if (w > 0 && h > 0 && towns::write_png(shot_path, rgb, w, h)) std::printf("shot      %s (%dx%d)\n", shot_path, w, h);
		else std::printf("shot      %s: the machine has no frame to render\n", shot_path);
	}
	if (show_palette) {
		for (int layer = 0; layer < 2; ++layer) {
			std::printf("palette   page%d:", layer);
			for (int i = 0; i < 16; ++i)
				std::printf(" %02x%02x%02x", m.video.pal16[layer][i][0], m.video.pal16[layer][i][1],
				            m.video.pal16[layer][i][2]);
			std::printf("\n");
		}
	}
	// U2_VRAM_HASH=1 prints what can be compared with the machine byte for byte: how many bytes are non-zero, one
	// FNV-1a over the whole 512 KB, and the same over each 16 KB block so a difference can be named by region rather
	// than just declared. This exists because a rendered frame cannot be compared: the kit renders 704x525 of the
	// CRTC's layers and the supervisor's capture is a 640x480 window with its title bar in it, so the two pictures are
	// different objects. VRAM is the same 512 KB on both sides and has no window furniture in it.
	if (std::getenv("U2_VRAM_HASH")) {
		print_vram_hash(m);
	}
	// U2_VIDEO=1 prints the display state that decides what is on screen: the CRTC registers, the layer control byte and
	// the sprite controller's registers. This exists because the copyright notice's box is drawn while the text is not,
	// and the question is whether the second layer is enabled and where it points: a page that is drawn but not enabled
	// and a page that is enabled but never drawn look identical in a screenshot and different here.
	if (std::getenv("U2_VIDEO")) {
		std::printf("video     crtc:");
		for (int i = 0; i < 29; ++i) std::printf(" %04x", m.video.crtc[i]);
		std::printf("\nvideo     vreg:");
		// vreg is 2 bytes (0x448/0x44A). A first version of this looped to 16 and printed whatever followed it in memory,
		// which was the environment strings, so the bound is stated here rather than assumed.
		for (int i = 0; i < 2; ++i) std::printf(" %02x", m.video.vreg[i]);
		std::printf("\nvideo     layer_ctrl %02x  display_page %d  sprite page %d busy %d regs", m.video.layer_ctrl,
		            (int)m.video.display_page, (int)m.sprite.page, (int)m.sprite.busy);
		for (int i = 0; i < 8; ++i) std::printf(" %02x", m.sprite.reg[i]);
		std::printf("\n");
	}
	// U2_VRAM_DUMP=<path> writes the whole VRAM array raw, so two frames can be diffed to find WHERE a drawing went
	// rather than whether the picture looks right. This exists because the text in the copyright notice is missing
	// from the port and the picture cannot say whether that is a renderer gap or the program never writing it: a byte
	// diff between the frame before the notice and the frame during it answers that directly.
	if (const char* vd = std::getenv("U2_VRAM_DUMP")) {
		if (FILE* f = std::fopen(vd, "wb")) {
			std::fwrite(m.vram.data(), 1, m.vram.size(), f);
			std::fclose(f);
			std::printf("vramdump  %s (%zu bytes)\n", vd, m.vram.size());
		} else {
			std::printf("vramdump  %s: cannot open\n", vd);
		}
	}
	// U2_SCREEN=1 prints the frame as a luminance ramp, character for character the way container/screen.js's
	// toAscii does it, so the port and the supervisor's `GET /api/screen?mode=ascii` produce the same grid and the
	// two screens can be compared by diff rather than by looking. Same cells (width/100, twice as tall), same ramp,
	// same rounding: a comparison between two different metrics would prove nothing.
	if (std::getenv("U2_SCREEN")) {
		std::vector<uint32_t> rgb;
		int w = 0, h = 0;
		m.render(rgb, w, h);
		static const char* ramp = " .:-=+*#%@";
		const int cols = 100;
		const int cellW = std::max(1, w / cols), cellH = cellW * 2;
		const int rows = h / cellH;
		for (int ry = 0; ry < rows; ++ry) {
			std::string line;
			for (int cx = 0; cx < cols; ++cx) {
				double sum = 0;
				int n = 0;
				for (int y = ry * cellH; y < (ry + 1) * cellH; ++y) {
					for (int x = cx * cellW; x < (cx + 1) * cellW; ++x) {
						uint32_t p = rgb[(size_t)y * (size_t)w + (size_t)x];
						sum += 0.299 * ((p >> 16) & 0xFF) + 0.587 * ((p >> 8) & 0xFF) + 0.114 * (p & 0xFF);
						++n;
					}
				}
				const double v = sum / std::max(1, n);
				line += ramp[std::min<int>(9, (int)std::floor((v / 256.0) * 10))];
			}
			while (!line.empty() && line.back() == ' ') line.pop_back();
			std::printf("screen    %s\n", line.c_str());
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
