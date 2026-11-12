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
#include "control.h"
#include "towns_sdl.h"
// Needed for the control channel's `key`, which pushes through SDL rather than beside it. The measured reason is
// in docs/port-defects.md: the U2_KEYS path reaches the guest and still cannot activate the game menu, while a key
// that arrives as an SDL event does it first try. Same names, same door the physical keyboard uses.
#include <SDL3/SDL.h>

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <filesystem>
#include <fstream>
#include <memory>
#include <algorithm>
#include <cctype>
#include <string>
#include <vector>

extern const X86Module g_mod_p_game;

// WHICH PROGRAM THIS BINARY RUNS, at compile time, because the module compiled into it is that title's code and
// nothing else. The executable is named after its title (docs/port-structure.md), and so is the program it looks
// for inside the disc image: `u3` wants EXODUS.EXP and `u2` wants ENCHANT.EXP. Without this, a per-title binary
// still asked the disc for `\ENCHANT.EXP` and ran to `no recompiled function at 000C:101a20`, which is Ultima II's
// entry inside a module that never contained it. Measured on jarvis 2026-11-10.
//
// The default is Ultima II's, so every existing doc, route and instrument that says ENCHANT.EXP still means what it
// says, and the build passes -DPORT_PROGRAM for any other title.
#ifndef PORT_PROGRAM
#define PORT_PROGRAM "ENCHANT.EXP"
#endif
static const char *const kProgram = PORT_PROGRAM;

// WHAT THE WINDOW SAYS IT IS. This was a literal, `"Ultima II - FM Towns, recompiled"`, and every one of the seven
// binaries said it, because a title written into the source is a title nobody has to choose. The build now passes
// this from the title table, and the CMake default is PORT_PROGRAM rather than a fixed string, so a build that forgets
// gets a title bar that is wrong-looking but still its own rather than one shared with six other titles.
#ifndef PORT_TITLE
#define PORT_TITLE PORT_PROGRAM
#endif
static const char *const kTitle = PORT_TITLE;

// THE SPEED THIS BINARY STARTS AT, in percent of the FM Towns clock, set by the build from tools/games.js `cpuRate`.
// The three demos default to 20 because their narration scrolls faster than it can be read, and because a demo ends the
// run on any key press, so the kit's F5 cannot be used on them. The fallback is the machine's own speed, which is what
// every measurement in this repository was taken at, so a build that forgets is fast rather than mysteriously slow.
#ifndef PORT_CPU_RATE
#define PORT_CPU_RATE 100
#endif

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
static void print_vram_hash(const towns::Machine &m) {
	auto fnv = [](const uint8_t *p, size_t n, uint32_t h) {
		for (size_t i = 0; i < n; ++i)
			h = (h ^ p[i]) * 16777619u;
		return h;
	};
	std::printf("vramhash  %08x  %zu bytes\n", fnv(m.vram.data(), m.vram.size(), 2166136261u), m.vram.size());
	const size_t block = 0x4000;
	std::printf("vramblock ");
	for (size_t off = 0; off + block <= m.vram.size(); off += block)
		std::printf(" %08x", fnv(m.vram.data() + off, block, 2166136261u));
	std::printf("\n");
}

// WHAT IS SWITCHED ON, SAID OUT LOUD. Silent instruments are how three false negatives were produced in one session:
// a key refused headlessly and the driver ignored the error, a stop count set high enough to suppress its own output,
// and a watch read as "nothing happened" rather than "nothing was watched". The list is derived from the ENVIRONMENT
// rather than from a hand-written table of switch names, so it cannot drift as switches are added, and it prints on
// every run, so "no instruments" becomes a stated fact rather than an absence of evidence.
//
// A switch set in a build that cannot honour it is marked, because an env var that is set and ignored looks exactly
// like one that is set and working, which is the whole failure this function exists to remove.
// The environment block, and how to remove one variable from it, which is the whole of this file's platform
// difference. Windows has no `unsetenv` and calls the block `_environ`; emptying a variable with `_putenv_s` is what
// its own documentation recommends instead. Nothing else in the port or the toolkit is POSIX: grepping for
// unsetenv, setenv, environ, mmap, dlopen, pthread_ or /proc/ finds only these lines.
#ifdef _WIN32
extern "C" char **_environ;
#define environ _environ
static void unset_env(const char *name) {
	_putenv_s(name, "");
}
#else
extern char **environ;
static void unset_env(const char *name) {
	unsetenv(name);
}
#endif
// Instrument variables removed because --dev was not given. Declared here because the sweep that fills it runs in
// main() and the line that reports it is printed later.
static std::vector<std::string> g_instruments_dropped;
static void print_instruments() {
	struct Item {
		std::string name, value;
	};
	std::vector<Item> items;
	for (char **e = environ; e && *e; ++e) {
		std::string s(*e);
		if (s.rfind("U2_", 0) != 0)
			continue;
		size_t eq = s.find('=');
		items.push_back({s.substr(0, eq), eq == std::string::npos ? std::string() : s.substr(eq + 1)});
	}
	std::sort(items.begin(), items.end(), [](const Item &a, const Item &b) { return a.name < b.name; });
	// The switches whose handling sits inside `#ifdef X86_TRACE_ON`, measured 2026-11-02 from the guard at line 531.
	static const char *kTraceOnly[] = {"U2_STOP_AT",	"U2_STOP_COUNT", "U2_STOP_DUMP",
									   "U2_STOP_FRAME", "U2_TRACE_FILE", "U2_TRACE_LIMIT"};
	std::printf("instruments");
	if (items.empty())
		std::printf(" none, plain gameplay");
	for (const Item &it : items) {
		std::string v = it.value;
		if (v.size() > 60)
			v = v.substr(0, 60) + "...";
		std::printf(" %s=%s", it.name.c_str(), v.c_str());
#ifndef X86_TRACE_ON
		for (const char *t : kTraceOnly)
			if (it.name == t)
				std::printf("(IGNORED, needs -DU2_TRACE=ON)");
#endif
	}
	// Dropped switches are named too. Without this the gate would silently ignore a switch, which is the same defect
	// in a new place: an instrument that does nothing and says nothing about doing nothing.
	if (!g_instruments_dropped.empty()) {
		std::printf("  [dropped, pass --dev:");
		for (const std::string &n : g_instruments_dropped)
			std::printf(" %s", n.c_str());
		std::printf("]");
	}
	std::printf("\n");
}

#ifdef X86_TRACE_ON
static FILE *g_trace_file = nullptr;
static unsigned long long g_trace_written = 0, g_trace_limit = 0;
static std::vector<uint8_t> g_trace_seen;  // one byte per 4 KB page of a 64 MB window, then bit set per byte
static uint32_t g_stop_at = 0, g_stop_dump = 0, g_stop_len = 0;
static unsigned long long g_stop_count = 0, g_stop_hits = 0;
static unsigned long long g_stop_frame = 0;
// First executions only, in the order they happen. A full instruction trace of a real start-up is hundreds of
// millions of lines and would have to be paged through; the order in which each address is *first* executed is
// a few tens of thousands of lines, is bounded whatever the run length, and is what a comparison against the
// machine's block-level capture actually needs.
//
// U2_STOP_AT=<guest addr> stops the run when that instruction runs and prints memory, so a value can be read at
// exactly the same point on both sides. That is how a divergence in an allocator's return value gets compared
// rather than guessed at.
//
// U2_STOP_FRAME=<n> ignores hits before frame n. Without it a routine that also runs during start-up is compared at
// start-up and never at the operation under study: the first hit of TBIOS's text renderer is the copyright notice,
// and the game menu's own call is 14 hits later. That is a comparison of the wrong moment, which reads exactly like
// a real difference.
void x86_trace(X86Cpu &c, uint32_t at) {
	// In a trace build this runs once per instruction, so it is the only place that knows where execution really is. Without
	// this line c.eip only moves at call boundaries, and every instrument that reports c.eip (the I/O write log among them)
	// reports the caller's resume address instead of the writing instruction. That mistake was made once: a write to 0x4F8 was
	// attributed to 0110:00012944, the site that had called a function with no OUT in it at all.
	c.eip = at;
	if (g_stop_at && at == g_stop_at) {
		if (g_stop_frame && (!towns::g_towns || towns::g_towns->frame < g_stop_frame))
			return;
		if (++g_stop_hits < g_stop_count)
			return;	 // U2_STOP_COUNT stops at the Nth hit, not the first
		std::printf("stop      reached 0x%06x on hit %llu after %llu instructions\n", at, g_stop_hits, g_trace_written);
		if (g_stop_dump && g_stop_len) {
			std::vector<uint8_t> buf(g_stop_len);
			towns::g_towns->read_block(g_stop_dump, buf.data(), (uint32_t)buf.size());
			std::printf("memory    %08x:", g_stop_dump);
			for (unsigned char ch : buf)
				std::printf(" %02x", ch);
			std::printf("\n");
		}
		std::printf("regs      eax %08x ebx %08x ecx %08x edx %08x esi %08x edi %08x ebp %08x esp %08x\n", c.r[0],
					c.r[3], c.r[1], c.r[2], c.r[6], c.r[7], c.r[5], c.r[4]);
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
		if (g_trace_file)
			std::fclose(g_trace_file);
		if (std::getenv("U2_VRAM_HASH"))
			print_vram_hash(*towns::g_towns);
		std::exit(0);
	}
	if (!g_trace_file || g_trace_written >= g_trace_limit)
		return;
	uint64_t key = ((uint64_t)(c.sreg[1] & 0xFFFF) << 32) | at;
	if (g_trace_seen.empty())
		g_trace_seen.assign((size_t)1 << 22, 0);  // 4 MB of bits covers 32 M addresses
	size_t slot = (size_t)(key >> 3) & ((1u << 22) - 1);
	uint8_t bit = (uint8_t)(1u << (key & 7));
	if (g_trace_seen[slot] & bit)
		return;
	g_trace_seen[slot] |= bit;
	std::fprintf(g_trace_file, "%04x:%08x\n", (unsigned)c.sreg[1], at);
	++g_trace_written;
}
#endif

#include "floppy.h"
#include "savestore.h"

// The A: drive, as a real FAT12 reader and writer over the image the machine mounts. Opened by main, and read-only
// unless the run allows save writes.
static u2floppy::Image g_floppy;
// The same four hooks, answered by a directory when there is no image. Which one is in use is decided once at start-up
// and printed, so a run always says where a character it just saved has gone.
static u2floppy::Dir g_saves;
static bool g_saves_dir = false;

// Hooks the vendored runtime calls (declared in towns_dos.cpp, which is where the DOS layer decides where a
// name lives). They are defined here because the floppy is U2's save-disk format in practice, not a platform
// service the kit should own. The declaration there sits inside namespace towns, so these must too.
namespace towns {
bool fm_floppy_attrs(const std::string &path, uint32_t &attrib, uint32_t &size) {
	u2floppy::Entry e;
	if (!(g_saves_dir ? g_saves.find(path, e) : g_floppy.find(path, e)))
		return false;
	attrib = e.dos_attr();
	size = e.size;
	return true;
}

bool fm_floppy_read(const std::string &path, std::vector<uint8_t> &out) {
	return g_saves_dir ? g_saves.read(path, out) : g_floppy.read(path, out);
}

// The write policy, in one place. The save disk is the only writable image there is, and it is writable unless the
// run asked not to be. The game disc is not reachable from here at all: it is a separate file served by the CD
// path, so "never mutate the original media" needs no rule in this function because there is nothing to guard.
bool fm_floppy_writable(const std::string & /*path*/) {
	return g_saves_dir ? g_saves.writable() : g_floppy.writable();
}

bool fm_floppy_write(const std::string &path, const std::vector<uint8_t> &data) {
	return g_saves_dir ? g_saves.write_file(path, data) : g_floppy.write_file(path, data);
}
}  // namespace towns

// ---- finding the media when no arguments are given ------------------------------------------------------------
//
// A release binary that needs four paths on its command line is a binary most readers will not get running. With no
// positional arguments the port looks where a person is likely to have put their own copy of the game, prints what it
// picked, and says what it looked for when it cannot find it. The binary's own directory is one of the places it
// looks, so a double-click on a desktop works from any current directory.
//
// It does NOT extract anything from the disc. Pulling ENCHANT.EXP and TBIOS.BIN out of the image is tools/getfile.js,
// which is JavaScript and ships beside this binary, and duplicating an ISO reader in C++ to avoid one command would be
// a large amount of code to get subtly wrong. A missing piece therefore names the command that produces it.
namespace fs = std::filesystem;

static bool file_exists(const std::string &p) {
	std::error_code ec;
	return fs::is_regular_file(p, ec);
}

// The places to look, nearest first. `.` is the current directory; `game`, `original` and `data` are the names a
// reader is likely to have used; the binary's own directory covers a double-click, and its `game` subdirectory covers
// an unpacked archive laid out beside the executable.
static std::vector<std::string> media_dirs(const char *argv0) {
	std::vector<std::string> dirs{"."};
	// assets/save-disk is where this archive ships the prepared floppy, once the reader unpacks it from
	// assets/save-disk/userdisk.hdm.zip. Finding it there is the difference between the game starting and the game
	// showing its own WRONG DISK prompt on the first run.
	for (const char *d : {"game", "original", "data", "assets/save-disk"}) {
		std::error_code ec;
		if (fs::is_directory(d, ec))
			dirs.push_back(d);
	}
	std::error_code ec;
	const fs::path exe = fs::absolute(argv0 ? argv0 : "u2port", ec);
	if (!ec) {
		const fs::path dir = exe.parent_path();
		dirs.push_back(dir.string());
		dirs.push_back((dir / "game").string());
	}
	return dirs;
}

static std::string find_media(const std::vector<std::string> &dirs, std::initializer_list<const char *> names) {
	for (const std::string &d : dirs)
		for (const char *n : names) {
			const std::string p = (d == ".") ? std::string(n) : d + "/" + n;
			if (file_exists(p))
				return p;
		}
	return std::string();
}

// Any floppy image in the media directories, when none of the conventional names is there. The retail UserDisk unpacks as
// `Ultima Trilogy 1-3 (1990)(Origins)(Jp-En)[UserDisk].hdm`, which no fixed list of names is going to guess, and a tree
// holding only the download is exactly the tree this port is handed. One image is used, several is no guess: the same rule
// cue_from_image applies to the disc, for the same reason.
static std::string floppy_from_dir(const std::vector<std::string> &dirs) {
	for (const std::string &d : dirs) {
		std::error_code ec;
		std::vector<fs::path> found;
		for (const auto &e : fs::directory_iterator(d, ec)) {
			std::string ext = e.path().extension().string();
			for (char &ch : ext) ch = (char)std::tolower((unsigned char)ch);
			if (ext == ".hdm")
				found.push_back(e.path());
		}
		if (ec || found.size() != 1)
			continue;
		return found.front().string();
	}
	return std::string();
}

// The archive.org zip unpacks to an .img and a .ccd, and the disc reader wants a cue. Writing `<image>.cue` beside the
// image is what play.sh does in its work directory, and doing it here means a reader with only the unzipped download
// can still run. It is written once and only when there is exactly one image, so a directory holding several cannot
// be guessed at wrongly.
static std::string cue_from_image(const std::vector<std::string> &dirs) {
	for (const std::string &d : dirs) {
		std::error_code ec;
		std::vector<fs::path> images;
		for (const auto &e : fs::directory_iterator(d, ec)) {
			const std::string ext = e.path().extension().string();
			if (ext == ".img" || ext == ".IMG")
				images.push_back(e.path());
		}
		if (ec || images.size() != 1)
			continue;
		const fs::path &img = images.front();
		// CLONECD FIRST, because it is the only file here that states the layout. The download ships "<image>.ccd" beside the
		// image, with a Control byte and a PLBA per track, so the seven audio tracks survive and the program is given a real
		// table of contents. A cue cannot express this disc: track 2's PREGAP is undecidable from the cue, and the reader refuses
		// the file rather than shift every later track by 150 sectors in silence. Measured before this existed: the game asked the
		// CD to play 00:00:00 to 00:00:00 and no music played, because one track was all it had been told about.
		const fs::path ccd = img.parent_path() / (img.stem().string() + ".ccd");
		if (file_exists(ccd.string()))
			return ccd.string();
		// A NAME OF OUR OWN, because the obvious one is taken and wrong. The archive.org download ships
		// "<image>.cue" beside "<image>.img", and that cue declares a PREGAP on the audio tracks that the reader
		// refuses. Writing "<image>.cue" therefore either collides with the download's own file, in which case the
		// first version of this returned it and the port refused to start on a perfectly good rip, or overwrites
		// something the reader owns. Ours goes in a name the download cannot have.
		const fs::path cue = img.parent_path() / (img.stem().string() + ".u2port.cue");
		if (file_exists(cue.string()))
			return cue.string();
		std::ofstream out(cue);
		if (!out)
			continue;
		// Relative to the cue, because that is how the reader resolves it: an absolute path here comes out doubled.
		out << "FILE \"" << img.filename().string() << "\" BINARY\n  TRACK 01 MODE1/2352\n    INDEX 01 00:00:00\n";
		out.close();
		if (file_exists(cue.string())) {
			std::printf("media     wrote %s for the single disc image beside it\n", cue.string().c_str());
			return cue.string();
		}
	}
	return std::string();
}

// Say what was found and, when something is missing, what to do about it. Silence here is the failure mode this
// repository keeps paying for: a run that found nothing looks exactly like a run that found the wrong thing.
static void report_media(const std::string &program, const std::string &tbios, const std::string &cue,
						 const std::string &disk, const std::vector<std::string> &dirs, const std::string &cache_dir) {
	if (!program.empty())
		std::printf("media     program %s\n", program.c_str());
	if (!tbios.empty())
		std::printf("media     tbios   %s\n", tbios.c_str());
	if (!cue.empty())
		std::printf("media     disc    %s\n", cue.c_str());
	if (!disk.empty())
		std::printf("media     save    %s\n", disk.c_str());
	// A disc image is enough on its own: the program and TBIOS are inside its ISO 9660 volume and are read from there
	// when they are not on disk. So the only thing that can be missing fatally here is the disc itself.
	if (!cue.empty()) {
		if (program.empty())
			std::printf("media     program will be read from the disc (\\%s)\n", kProgram);
		if (tbios.empty())
			std::printf("media     TBIOS will be read from the disc (\\TBIOS.BIN)\n");
		if (disk.empty())
			std::printf("media     save    no .hdm to seed from, so saves start empty in ./saves\n");
		return;
	}
	// No disc, but an earlier run kept what the disc was for. That is a success, and it must not print the block below,
	// which reads as a failure.
	if (!cache_dir.empty() && file_exists(cache_dir + "/" + kProgram)) {
		std::printf("media     no disc, running from the cache at %s (put a disc image back to refresh it)\n",
					cache_dir.c_str());
		if (disk.empty())
			std::printf("media     save    no .hdm to seed from, so saves start empty in ./saves\n");
		return;
	}

	std::printf("media     looked in:");
	for (const std::string &d : dirs)
		std::printf(" %s", d.c_str());
	std::printf("\n");
	if (program.empty())
		std::printf("media     %s is not there\n", kProgram);
	if (tbios.empty())
		std::printf("media     tbios.bin (or TBIOS.BIN) is not there\n");
	if (cue.empty())
		std::printf("media     no .cue and no single .img to write one for\n");
	if (disk.empty())
		std::printf("media     save    no .hdm to seed from, so saves start empty in ./saves\n");
	std::printf("\n");
	std::printf("Put your own copy of the game in ./game/ and use the tools beside this binary:\n");
	std::printf("  node tools/getfile.js %s --disc game/<image>.img --out game\n", kProgram);
	std::printf("  node tools/getfile.js TBIOS.BIN   --disc game/<image>.img --out game\n");
	std::printf("or pass the four paths yourself:\n");
	std::printf("  <binary> %s tbios.bin disc.cue userdisk.hdm\n", kProgram);
	std::printf("README.txt in this archive has the longer version.\n");
}

// Write a file taken from the disc into the cache, creating the directories it needs. False on any failure, so a
// caller can leave the read on the disc rather than serve a path that is not there. A read-only tree is the ordinary
// case for that: the game still runs, it just keeps reading the disc.
static bool cache_store(const std::string &dir, const std::string &rel, const std::vector<uint8_t> &bytes);

// The glyph ROM as a table in this binary, generated at build time by tools/embed.js from
// assets/font-rom/FMT_FNT.ROM. Declared here rather than in a header because nothing else needs it.
extern const unsigned char g_embedded_font_rom[];
extern const unsigned long g_embedded_font_rom_size;
// The licence texts, embedded by port/CMakeLists.txt through tools/embed.js. SDL3 and fmtownskit are static inside this
// binary, so their notices have to travel with it, and a notice that cannot be separated from the binary is the only
// version that survives somebody copying just the binary.
extern const unsigned char g_licence_mit[];
extern const unsigned long g_licence_mit_size;
extern const unsigned char g_licence_fmtownskit[];
extern const unsigned long g_licence_fmtownskit_size;
extern const unsigned char g_licence_sdl3[];
extern const unsigned long g_licence_sdl3_size;
// The glyph ROM's provenance, which travels with the binary for the same reason the licences do. The ROM is generated
// from a public-domain BDF font and is not Fujitsu code, but neither upstream attaches an explicit grant to the
// generated file, and that has to be stated where the reader can read it rather than in a document they no longer get.
extern const unsigned char g_licence_font_rom[];
extern const unsigned long g_licence_font_rom_size;

static std::vector<uint8_t> read_file(const char *path) {
	std::vector<uint8_t> v;
	FILE *f = std::fopen(path, "rb");
	if (!f)
		return v;
	std::fseek(f, 0, SEEK_END);
	long n = std::ftell(f);
	std::fseek(f, 0, SEEK_SET);
	if (n > 0) {
		v.resize((size_t)n);
		if (std::fread(v.data(), 1, v.size(), f) != v.size())
			v.clear();
	}
	std::fclose(f);
	return v;
}

// Read a block and render it as hex. Shared by the immediate and the parked `mem` replies so the two cannot drift
// apart in formatting, and so the parked one is the same read at a different moment rather than a second
// implementation.
static std::string mem_hex(towns::Machine &m, uint32_t linear, uint32_t len) {
	std::vector<uint8_t> bytes(len, 0);
	m.read_block(linear, bytes.data(), len);
	std::string hex;
	hex.reserve((size_t)len * 2);
	for (uint8_t b : bytes) {
		char hx[3];
		std::snprintf(hx, sizeof hx, "%02x", b);
		hex += hx;
	}
	return hex;
}

static bool cache_store(const std::string &dir, const std::string &rel, const std::vector<uint8_t> &bytes) {
	if (dir.empty() || rel.empty() || bytes.empty())
		return false;
	std::error_code ec;
	const fs::path out(dir + "/" + rel);
	fs::create_directories(out.parent_path(), ec);
	std::ofstream f(out, std::ios::binary);
	if (!f)
		return false;
	f.write(reinterpret_cast<const char *>(bytes.data()), (std::streamsize)bytes.size());
	return f.good();
}

int main(int argc, char **argv) {
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
	// Whole multiples with the window snapped to match is the default, because a window that resizes while the picture
	// does not was a real report. This flag is the other answer: fill the window and keep the aspect ratio.
	bool letterbox = false;
	long frames_flag = -1;
	// THE CPU'S RATE, in percent of the FM Towns clock, which is how a title that scrolls faster than a person can
	// read is slowed down. The kit models the rate (Machine::cpu_rate) and its window binds F5/F6/F7 to it, but a
	// keystroke is not available here: the demos end the run on any key press, so reaching for F5 closes the thing
	// being watched. This makes the rate a start-up fact instead, and the window's title shows it like the keys do.
	// The starting value is the build's, from the title table, and --cpu-rate overrides it.
	int cpu_rate_arg = PORT_CPU_RATE;
	// WHETHER THE CALLER NAMED --graphics=, as opposed to taking the default. It decides what an unavailable window
	// means: a default that cannot open falls back to none, because a measurement must not need a display, and an
	// explicit request that cannot open is refused, because somebody who typed `--graphics=sdl` wants a window and
	// nothing else. Measured the hard way on jarvis 2026-11-13: `DISPLAY=:0` without the X cookie printed
	// `Invalid MIT-MAGIC-COOKIE-1 key`, fell back to none, and the run looked like a program that had crashed.
	bool graphics_explicit = false;
	std::string control_spec;
	// The save disk takes writes by default, because a created character that cannot be saved does not exist. The
	// flag is the escape hatch for a run that must not touch an image, and it is what the older guardrail was.
	bool read_only_disk = false;
	// The turn-boundary key clear is on by default, because the machine this reproduces does not carry input
	// across a turn (docs/port-defects.md). This flag turns it off, which keeps the old queueing behaviour
	// available and is what a test uses to prove the clear is what changed.
	bool key_queue_ok = false;
	// The instrument switches are governed by this. Without it they are removed from the environment before anything
	// reads them, so plain gameplay cannot be changed by a stale U2_STOP_AT in a shell.
	bool dev = false;
	// Not a mode: a 5-line answer to "what am I allowed to do with this", because the licences are compiled into the
	// binary rather than only shipped beside it.
	bool show_licences = false;
	std::vector<const char *> pos;
	for (int i = 1; i < argc; ++i) {
		if (!std::strncmp(argv[i], "--graphics=", 11))
			graphics = argv[i] + 11, graphics_explicit = true;
		else if (!std::strcmp(argv[i], "--fullscreen"))
			fullscreen = true;
		else if (!std::strcmp(argv[i], "--letterbox"))
			letterbox = true;
		else if (!std::strncmp(argv[i], "--scale=", 8))
			scale = std::atoi(argv[i] + 8);
		else if (!std::strncmp(argv[i], "--frames=", 9))
			frames_flag = std::atol(argv[i] + 9);
		else if (!std::strncmp(argv[i], "--cpu-rate=", 11)) {
			// Refused rather than clamped. The kit clamps to 1..1000, and a typo of `--cpu-rate=0` becoming 1 percent
			// is a run that looks like a hang rather than a mistake in an argument.
			char *end = nullptr;
			const long v = std::strtol(argv[i] + 11, &end, 10);
			if (!end || *end || v < 1 || v > 1000) {
				std::fprintf(stderr, "--cpu-rate= takes a percentage of the FM Towns clock, 1 to 1000. Got %s\n", argv[i] + 11);
				return 2;
			}
			cpu_rate_arg = (int)v;
		}
		else if (!std::strncmp(argv[i], "--control=", 10))
			control_spec = argv[i] + 10;
		else if (!std::strcmp(argv[i], "--read-only-disk"))
			read_only_disk = true;
		else if (!std::strcmp(argv[i], "--allow-key-queue"))
			key_queue_ok = true;
		else if (!std::strcmp(argv[i], "--dev"))
			dev = true;
		else if (!std::strcmp(argv[i], "--licences") || !std::strcmp(argv[i], "--licenses"))
			show_licences = true;
		else
			pos.push_back(argv[i]);
	}

	if (show_licences) {
		auto emit = [](const char *who, const unsigned char *text, unsigned long size) {
			std::printf("\n===== %s =====\n\n%.*s", who, (int)size, (const char *)text);
			if (size && text[size - 1] != '\n')
				std::printf("\n");
		};
		std::printf(
			"Ultima II on FM Towns, recompiled. Three pieces of software are inside this file, and this is what each\n"
			"of them permits. None of it is game data: the game comes from a disc image you supply.\n");
		emit("this port's own code, MIT licence", g_licence_mit, g_licence_mit_size);
		emit("fmtownskit, the runtime the recompiled code is linked onto, MIT licence", g_licence_fmtownskit,
			 g_licence_fmtownskit_size);
		emit("SDL3, statically linked, used for the window, keyboard, gamepad and sound, zlib licence", g_licence_sdl3,
			 g_licence_sdl3_size);
		emit("the glyph ROM embedded in this binary, and what is and is not established about it", g_licence_font_rom,
			 g_licence_font_rom_size);
		std::printf(
			"\nThe game itself is not distributed with this program and is covered by none of the above. If you own a\n"
			"copy of the FM Towns Ultima Trilogy, this runs from your own disc image.\n");
		return 0;
	}

	// THE HARNESS IS OFF UNLESS ASKED FOR. Instrument switches are removed from the environment here, before any of
	// // the 39 reads below, rather than being checked at each read: a rule enforced in one place cannot be forgotten
	// at the fortieth. Configuration and input scheduling are NOT instruments and stay available, because a run that
	// cannot find its font ROM is not a more honest run, it is a blank screen.
	//
	// What was dropped is reported by print_instruments(), because an instrument that vanishes without saying so is
	// precisely the failure this mechanism exists to remove.
	if (!dev) {
		static const char *kAlwaysHonoured[] = {"U2_FONT", "U2_FONT20", "U2_CLOCK", "U2_ENTRY", "U2_STACK",
												"U2_KEYS", "U2_PAD",	"U2_LAYER", "U2_SHOT"};
		std::vector<std::string> drop;
		for (char **e = environ; e && *e; ++e) {
			std::string s(*e);
			if (s.rfind("U2_", 0) != 0)
				continue;
			std::string name = s.substr(0, s.find('='));
			bool keep = false;
			for (const char *a : kAlwaysHonoured)
				if (name == a)
					keep = true;
			if (!keep)
				drop.push_back(name);
		}
		for (const std::string &n : drop) {
			unset_env(n.c_str());
			g_instruments_dropped.push_back(n);
		}
	}
	if (graphics != "sdl" && graphics != "none") {
		std::fprintf(stderr, "--graphics=%s: not a backend. This build has: sdl, none\n", graphics.c_str());
		return 2;
	}
	if (!control_spec.empty() && control_spec.find(':') == std::string::npos &&
		control_spec.find('/') == std::string::npos) {
		std::fprintf(stderr, "--control=%s: want host:port (for example 127.0.0.1:8765) or /path/to.sock\n",
					 control_spec.c_str());
		return 2;
	}
	bool use_sdl = graphics == "sdl";
	// NO ARGUMENTS: find the media rather than refusing to start. See the block above for what is searched and why
	// nothing is extracted here.
	std::string m_program, m_tbios, m_cue, m_disk;
	// Where the disc's files are kept once they have been read once. Beside the media when there is media, so a run
	// that starts in game/ and a run that starts elsewhere agree on one place, and otherwise the two conventional
	// names a cache-only tree will have.
	std::string cache_dir;
	std::vector<std::string> m_dirs;
	if (pos.empty()) {
		m_dirs = media_dirs(argv[0]);
		// The lower-case spelling is what a hand-copied tree tends to hold, and it is built from kProgram so a second
		// title does not have to remember to add its own.
		std::string progLower(kProgram);
		for (char &ch : progLower) ch = (char)std::tolower((unsigned char)ch);
		m_program = find_media(m_dirs, {kProgram, progLower.c_str()});
		m_tbios = find_media(m_dirs, {"tbios.bin", "TBIOS.BIN"});
		m_cue = find_media(m_dirs, {"disc.cue", "game.cue", "u2.cue"});
		m_disk = find_media(m_dirs, {"userdisk.hdm", "save.hdm", "disk.hdm"});
		if (m_disk.empty())
			m_disk = floppy_from_dir(m_dirs);
		if (m_cue.empty())
			m_cue = cue_from_image(m_dirs);
		// cache_dir has to be known before the report, because the report has to say whether a missing disc is a
		// failure or a tree that already has what it needs.
		{
			std::error_code ec;
			if (!m_cue.empty())
				cache_dir = (fs::path(m_cue).parent_path() / "extracted").string();
			else if (fs::is_directory("game", ec))
				cache_dir = "game/extracted";
			else
				cache_dir = "extracted";
		}
		report_media(m_program, m_tbios, m_cue, m_disk, m_dirs, cache_dir);
		// NO DISC IS NOT FATAL IF THE CACHE ALREADY HOLDS WHAT THE DISC WAS FOR. That is the whole point of caching:
		// run once with your own disc, and from then on the image is optional.
		if (m_cue.empty() && !file_exists(cache_dir + "/" + kProgram)) {
			std::printf("media     no disc image, and no cached copy at %s/%s\n", cache_dir.c_str(), kProgram);
			return 2;
		}
	}
	const char *exp_path = pos.size() > 0 ? pos[0] : m_program.c_str();
	// The second positional is a frame count only when it is one. It is optional, and when `--frames=N` already
	// gave a count it is absent, so deciding by shape rather than by position keeps `ENCHANT.EXP 600 tbios cue`
	// and `--frames=600 ENCHANT.EXP tbios cue` both meaning what they look like. A first version indexed
	// positionally and, under --frames, read the TBIOS image as the cue and the cue as TBIOS: the machine then
	// reported "TBIOS 110 bytes" and the run was meaningless.
	size_t next = 1;
	long frames = frames_flag >= 0 ? frames_flag : 0;
	if (frames_flag < 0 && pos.size() > 1) {
		const char *a = pos[1];
		bool digits = *a != 0;
		for (const char *q = a; *q; ++q)
			if (*q < '0' || *q > '9')
				digits = false;
		if (digits) {
			frames = std::atol(a);
			next = 2;
		}
	}
	const char *tbios_path = pos.size() > next ? pos[next] : "build/port/tbios.bin";
	const char *cue_path = pos.size() > next + 1 ? pos[next + 1] : "build/port/disc.cue";
	const char *floppy_path = pos.size() > next + 2 ? pos[next + 2] : "saves/userdisk.hdm";
	// WHETHER THE CALLER NAMED A FLOPPY, which is not the same question as whether they named anything. The saves
	// directory used to be chosen only when there were no arguments at all, so passing the three media paths - which
	// every tool here does, and which is the only way to run when the media is not in the current directory - silently
	// dropped the player's saves and left A: as an unopened image. Every floppy access then failed, the game answered
	// "A WRONG DISK! Push SPACE", and nothing said why. Measured 2026-11-10 in the container, with three save files
	// present and readable.
	const bool floppy_named = pos.size() > next + 2;
	if (pos.empty()) {
		tbios_path = m_tbios.c_str();
		cue_path = m_cue.c_str();
		// A missing save disk is not fatal: the A: probe fails and the program asks for a disk, which is what the
		// original did when the drive was empty. Naming a path that does not exist is how that is expressed.
		floppy_path = m_disk.empty() ? "userdisk.hdm" : m_disk.c_str();
	}

	// THE DISC IS A SOURCE, NOT JUST A DEPENDENCY. ENCHANT.EXP and TBIOS.BIN live inside the ISO 9660 volume, and the
	// kit already walks it: the port has read \UTFONT.FNT out of the same volume for the kanji font since the font
	// window was fixed. So a player who has the disc image and nothing else has everything, and the extraction script
	// tools/getfile.js stops being a step they have to know about.
	//
	// The disc is opened here only if a file is actually missing, so a tree that already has the two files never pays
	// for the ISO index walk, and a run with no disc at all reaches the same error it always did.
	towns::Disc unpack;
	bool unpack_tried = false;
	std::string unpack_err;
	// Every disc file the PORT reads goes through here: cache first, then the disc, and whatever comes off the disc is
	// kept. The program's own opens go through the on_disc_cached hook with the same policy, so the two cannot drift
	// into disagreeing about what is cached. \\UTFONT.FNT is why this exists: it was read straight off the disc, so a
	// cache-only tree had no kanji font and drew nothing for two-byte characters.
	auto disc_or_cache = [&](const char *iso_path, std::vector<uint8_t> &out) -> bool {
		std::string rel = iso_path;
		while (!rel.empty() && (rel[0] == '\\' || rel[0] == '/'))
			rel.erase(0, 1);
		for (char &ch : rel)
			if (ch == '\\')
				ch = '/';
		out.clear();
		if (!cache_dir.empty()) {
			const std::string cached = cache_dir + "/" + rel;
			std::error_code ec;
			if (fs::is_regular_file(cached, ec)) {
				out = read_file(cached.c_str());
				if (!out.empty())
					return true;
			}
		}
		if (!unpack_tried) {
			unpack_tried = true;
			if (!cue_path[0])
				return false;
			unpack.open(cue_path, unpack_err);
		}
		std::vector<uint8_t> bytes;
		if (!unpack.file(iso_path, bytes) || bytes.empty())
			return false;
		if (!cache_dir.empty() && cache_store(cache_dir, rel, bytes))
			std::printf("disc      cached %s (%zu bytes)\n", rel.c_str(), bytes.size());
		out = std::move(bytes);
		return true;
	};

	std::vector<uint8_t> file = exp_path[0] ? read_file(exp_path) : std::vector<uint8_t>();
	const std::string program_on_disc = std::string("\\") + kProgram;
	if (file.size() < 0x1000 && disc_or_cache(program_on_disc.c_str(), file))
		std::printf("media     program %s read from the disc or its cache (%zu bytes)\n", program_on_disc.c_str(), file.size());
	if (file.size() < 0x1000) {
		std::fprintf(stderr, "%s: cannot read the executable, and %s is not on the disc\n",
					 exp_path[0] ? exp_path : kProgram, program_on_disc.c_str());
		return 2;
	}

	// The image is the file with its 0x200 bytes of MP header and loader stub removed, because the
	// runtime address of file offset 0x200 is 0, and the module is keyed by runtime addresses.
	const uint32_t HEADER = 0x200;
	if (file.size() <= HEADER || file[0] != 'M' || file[1] != 'P') {
		std::fprintf(stderr, "%s: not an MP image\n", exp_path);
		return 2;
	}
	const uint8_t *image = file.data() + HEADER;
	const uint32_t image_size = (uint32_t)(file.size() - HEADER);

	const uint32_t PROGRAM_BASE = 0x400000;	 // measured: CS 000C and DS 0014 both sit here
	// The entry is the header's own address field, which is an offset into the image (item 8b), so the port
	// reads it instead of naming it. For ENCHANT.EXP that field is 0x101A20, which is what was hardcoded here
	// and what the loader's IRETD was measured to deliver, so this is the same number arrived at generally.
	// It is what lets a second MP program be run without editing the port: BRITISH.EXP's field is 0x54094.
	const uint32_t ENTRY_FROM_HEADER = (uint32_t)file[0x14] | ((uint32_t)file[0x15] << 8) |
									   ((uint32_t)file[0x16] << 16) | ((uint32_t)file[0x17] << 24);
	const uint32_t ENTRY =
		std::getenv("U2_ENTRY") ? (uint32_t)std::strtoul(std::getenv("U2_ENTRY"), nullptr, 16) : ENTRY_FROM_HEADER;
	// ESP at the entry, measured twice and corrected once. 0x11EB10 is what STA reports when a breakpoint on
	// 000C:101A20 fires, and the program's own heap base (DS:0xDFD08) is that same number, so it is the value
	// the loader hands over. The older 0x11EAC8 was 0x48 lower, which put the heap base and every pointer it
	// returned 0x48 below the machine's, and the allocator then failed on its 28th allocation.
	// ESP AT THE ENTRY IS THE HEADER'S TOO, at offset 0x0e. For ENCHANT.EXP the field is 0x11EB10, which is the
	// same number STA reports when a breakpoint on 000C:101A20 fires, so the field and the machine agree on the
	// title it was measured on. That agreement is what makes it usable for a second title rather than assumed:
	// EXODUS.EXP's field is 0x000F5A78, above its 0x200-stripped image and inside the machine's RAM, and no live
	// reading of Ultima III's hand-off exists yet (docs/recompile-ultima3-plan.md, item U3-2a). A field that is
	// not plausible falls back to the measured value rather than to zero, so a misread header cannot silently
	// put the stack inside the program's own image.
	const uint32_t HEADER_STACK = (uint32_t)file[0x0e] | ((uint32_t)file[0x0f] << 8) |
								  ((uint32_t)file[0x10] << 16) | ((uint32_t)file[0x11] << 24);
	const uint32_t STACK_FROM_HEADER =
		(HEADER_STACK > image_size && HEADER_STACK < 0x800000) ? HEADER_STACK : 0x11EB10;
	const uint32_t STACK = std::getenv("U2_STACK")
							   ? (uint32_t)std::strtoul(std::getenv("U2_STACK"), nullptr, 16)
							   : STACK_FROM_HEADER;
	towns::Machine m;
	// The profile's program base and physical base are the kit's own ports: 0x200000 linear and 0x49000
	// physical. This program is at linear 0x400000, measured, and its pages sit at physical 0x76000, which is
	// the machine's own answer: `ADTR 14:0ce0` reported LINE 0x400CE0 and PHYS 0x76CE0 on the live machine.
	// Both matter because Phar Lap 250Fh turns a protected-mode address into a real-mode `seg:off` through
	// these two numbers, and the program uses that result to read a block it then copies into a table.
	static const towns::Profile kU2Profile = {"u2", 2, PROGRAM_BASE, 0x76000, 0, 0x1FFFFF};
	m.profile = &kU2Profile;
	std::printf("machine   townsos profile, %u MB\n", m.profile->ram_mb);
	// A FIXED CLOCK, because otherwise the guest can read the host's. DOS time (int 21h AH=2Ah/2Ch) answers the host
	// clock unless `clock_start` is set, and the game takes a seed from it: two identical runs of the same route were
	// measured differing in exactly one byte at 0x4cdc23, which is enough to flip a framebuffer hash and make any
	// differential report a difference for every shadow, correct or not. `U2_CLOCK=<unix seconds>` pins it; the
	// machine's own clock is added on top, so a run stays deterministic as well as replayable.
	if (const char *cl = std::getenv("U2_CLOCK")) {
		m.clock_start = std::strtoll(cl, nullptr, 10);
		std::printf("clock     pinned to %lld + machine time\n", (long long)m.clock_start);
	}
	m.townsos();

	// TBIOS. This disc does not carry the modular set that TBIOS.INI composes: it ships a finished
	// TBIOS.BIN beside TBIOS.SYS, so there is nothing to compose. It is read as a plain file rather than
	// through the kit's Disc, because the kit's cue reader refuses this disc's PREGAP on the audio tracks
	// ("a gap not in the files is not read here"), and tool 21 in this repository already reads the ISO
	// correctly. tools/port-build.sh extracts it from the disc with tools/cd.js.
	std::vector<uint8_t> tbios = tbios_path[0] ? read_file(tbios_path) : std::vector<uint8_t>();
	const bool tbios_from_disc = tbios.empty() && disc_or_cache("\\TBIOS.BIN", tbios);
	if (tbios.empty()) {
		std::fprintf(stderr, "TBIOS: cannot read %s, and \\TBIOS.BIN is not on the disc\n",
					 tbios_path[0] ? tbios_path : "tbios.bin");
		return 2;
	}
	std::printf("machine   TBIOS %zu bytes from %s, low 768 KB mapped by boot_towns\n", tbios.size(),
				tbios_from_disc ? "\\TBIOS.BIN on the disc or in its cache" : tbios_path);
	// SERVE THE DISC'S FILES FROM THE CACHE, which is what makes the image needed once rather than always. The program
	// asks for Q:\GRAPH\MAP2_1.TIF and its friends; the first time that is a disc read and the bytes are kept, and from
	// then on it is a local file, whether or not the disc is still there. The hook is asked from on_disc() in the kit,
	// the one place a guest path stops being a string and becomes a decision.
	if (!cache_dir.empty()) {
		m.on_disc_cached = [&m, cache_dir](const std::string &disc_path, std::string &host) -> bool {
			std::string rel = disc_path;
			while (!rel.empty() && (rel[0] == '\\' || rel[0] == '/'))
				rel.erase(0, 1);
			for (char &ch : rel)
				if (ch == '\\')
					ch = '/';
			if (rel.empty() || rel.find("..") != std::string::npos)
				return false;  // never write outside the cache
			const std::string cached = cache_dir + "/" + rel;
			std::error_code ec;
			if (fs::is_regular_file(cached, ec)) {
				host = cached;
				return true;
			}
			std::vector<uint8_t> bytes;
			if (!m.disc.file(disc_path, bytes) || bytes.empty())
				return false;
			if (!cache_store(cache_dir, rel, bytes))
				return false;  // cannot keep it, so read it off the disc as before
			std::printf("disc      cached %s (%zu bytes)\n", rel.c_str(), bytes.size());
			host = cached;
			return true;
		};
	}

	// U2_TRACE_INT=1 records every BIOS call the program makes. The kit's int90() implements the
	// services its own recordings saw, and this program asks for one they never did, so the list of
	// what it asks for is the evidence needed to decide what to add.
	if (std::getenv("U2_TRACE_INT"))
		m.trace_int = true;
	// The two halves of the machine poll, each on its own switch, for the experiment of 2026-11-03. The port's sound engine
	// comes up about 66 seconds after launch whatever is on screen, and on the original it is running before the menu appears;
	// the poll is the one thing this port has never run, and its two jobs are separate questions.
	//   U2_TICKS=1   run the timer BIOS's 10 ms callbacks, deliver no interrupts
	//   U2_IRQ=1     deliver hardware interrupts as well
	// Hardware interrupt delivery is part of the machine, not an experiment, so it is on by default. Measured on 2026-11-05: with
	// delivery off the whole played session took zero interrupts and the sound driver waited a minute for a timer that had already
	// expired, while with it on the driver writes the FM chip about 596 times a second from the first second. U2_NO_IRQ=1 turns it
	// off for a differential run, and U2_TICKS=1 adds the timer BIOS's 10 ms callbacks, which stay opt-in.
	m.irq_poll = !std::getenv("U2_NO_IRQ");
	if (std::getenv("U2_TICKS"))
		m.tick_poll = true;

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
			// Self-test for the CD audio path, independent of whether the program ever asks for it: U2_CD_TEST=<from>:<to> starts a
			// track immediately. Nothing in the game is touched, so a run with this on says whether this port can produce CD samples
			// at all, which is a different question from whether a program requested them.
			if (const char *cdt = std::getenv("U2_CD_TEST")) {
				unsigned long f = 0, t = 0;
				if (std::sscanf(cdt, "%lu:%lu", &f, &t) == 2) {
					m.cd_play((uint32_t)f, (uint32_t)t);
					std::printf("machine   CD test play %lu to %lu\n", f, t);
				}
			}
		}
	}

	// THE FONT ROM. The game fetches glyphs through selector 0138, whose base on the machine is 0xC2100000, and the kit
	// maps that linear range onto Machine::font. With the vector empty every glyph read returns zero, which draws
	// nothing: the copyright notice's box and bars appeared and its text did not. The ROM is vendored, not disc data
	// (it ships with the emulator's ROM set), so this is a warning when absent rather than a hard failure.
	{
		// The font ROM, found the same way as the media when no path was given: beside the binary, in ./game, or in the
		// roms/ directories a reader is likely to have. Without it the port runs and every glyph is blank, which reads
		// as a broken renderer rather than as a missing file, so it is worth looking for.
		std::vector<std::string> rom_dirs = m_dirs;
		// assets/font-rom is where THIS repository carries the glyph ROM, as one named exception to the rule that
		// platform ROMs are fetched rather than hosted. vendor/roms is the fetched set. Both are searched so a clone
		// and a tree that ran vendor.sh behave the same.
		rom_dirs.push_back("assets/font-rom");
		rom_dirs.push_back("roms");
		rom_dirs.push_back("vendor/roms");
		const std::string found_font = std::getenv("U2_FONT") ? std::string() : find_media(rom_dirs, {"FMT_FNT.ROM"});
		const char *font_path =
			std::getenv("U2_FONT") ? std::getenv("U2_FONT") : (found_font.empty() ? "FMT_FNT.ROM" : found_font.c_str());
		std::vector<uint8_t> glyphs = read_file(font_path);
		// THE COPY INSIDE THIS BINARY, used when there is no file. The ROM is generated from a public-domain font and
		// committed as assets/font-rom/FMT_FNT.ROM, and tools/embed.js turns it into a table at build time, so the port
		// does not need the file beside it. An external copy still wins, because a reader with a real FM Towns dump
		// should be able to use it.
		const bool embedded = glyphs.empty();
		if (embedded)
			glyphs.assign(g_embedded_font_rom, g_embedded_font_rom + g_embedded_font_rom_size);
		if (glyphs.empty()) {
			std::printf("machine   no font ROM at %s, so every glyph will be blank (set U2_FONT)\n", font_path);
		} else {
			m.font = std::move(glyphs);
			// The 16x16 ANK block is reached at physical 0xCB000, inside the RAM that boot_towns mapped, so those pages
			// have to be dropped for the font window to answer instead of the zero-filled RAM under it.
			m.unmap_font_window();
			if (embedded)
				std::printf("machine   font ROM %zu bytes, embedded in this binary (no %s beside it)\n", m.font.size(),
							font_path);
			else
				std::printf("machine   font ROM %zu bytes from %s\n", m.font.size(), font_path);
		}
		// The 20-dot font, a second ROM in its own window at linear 0xC2180000. Separate from the ANK font, and a
		// program drawing a title screen's large text may be using this one.
		const std::string found_font20 =
			std::getenv("U2_FONT20") ? std::string() : find_media(rom_dirs, {"FMT_F20.ROM"});
		const char *font20_path = std::getenv("U2_FONT20")
									  ? std::getenv("U2_FONT20")
									  : (found_font20.empty() ? "FMT_F20.ROM" : found_font20.c_str());
		std::vector<uint8_t> glyphs20 = read_file(font20_path);
		if (glyphs20.empty()) {
			std::printf("machine   no 20-dot font ROM at %s (set U2_FONT20)\n", font20_path);
		} else {
			m.font20 = std::move(glyphs20);
			std::printf("machine   20-dot font ROM %zu bytes from %s\n", m.font20.size(), font20_path);
		}
	}

	// The A: drive. Without it the program's start-up probe for A:\ROSTER1.UT2 fails and it shows an "insert the	//
	// disk" prompt instead of the title, which is what the port did before this existed. A missing image is reported
	// and survived rather than treated as fatal, so the port still runs when only the CD is present. NO FLOPPY NAMED
	// MEANS NO FLOPPY TO MANAGE. A player should not have to own, format and then find a 1.26 MB image to keep a
	// character in, so a run that does not name a floppy keeps saves as ordinary files beside the disc cache, and
	// naming one still means an image. That distinction is on the fourth positional argument and not on "no arguments
	// at all", which is the defect this branch used to have.
	if (!floppy_named) {
		const std::string save_root = (fs::path(cache_dir).parent_path() / "saves").string();
		if (g_saves.open(save_root, !read_only_disk)) {
			g_saves_dir = true;
			std::printf("machine   saves as plain files in %s (%s)\n", save_root.c_str(),
						g_saves.writable() ? "writable" : "read-only");
			if (!m_disk.empty()) {
				u2floppy::Image shipped;
				if (shipped.open(m_disk.c_str(), false)) {
					const int seeded = g_saves.seed_from(shipped);
					if (seeded)
						std::printf("machine   seeded %d save file(s) from %s\n", seeded, m_disk.c_str());
				}
			}
		}
	}
	if (!g_saves_dir && g_floppy.open(floppy_path, !read_only_disk)) {
		std::printf("machine   floppy opened from %s (%s)\n", floppy_path, read_only_disk ? "read-only" : "writable");
		if (std::getenv("U2_FLOPPY_LS")) {
			// Listing is not serving. The failure this option exists to rule out is a shim that answers the
			// attribute query and returns nothing when the program reads, which moves the failure one call later
			// and looks like a program fault. So each file is read in full and reported with a checksum, and a
			// short read is a failure of the run rather than a note.
			int bad = 0;
			for (const auto &e : g_floppy.list()) {
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
				for (uint8_t ch : data)
					h = (h ^ ch) * 16777619u;  // FNV-1a, so two runs can be compared
				std::printf("  read %u, fnv %08x%s\n", (unsigned)data.size(), h,
							data.size() == e.size ? "" : "  SHORT");
				if (data.size() != e.size)
					++bad;
			}
			std::printf("floppy    %d of the files read short or not at all\n", bad);
			return bad ? 1 : 0;
		}
	} else {
		if (!g_saves_dir)
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
	std::printf("program   %u bytes at linear 0x%x, %u KB of clear space after it\n", image_size, PROGRAM_BASE,
				0x40000 / 1024);

	// The two selectors, as measured. 000C is the code segment, 0014 the data one, same base.
	m.set_desc(0x000C, PROGRAM_BASE, 0x377FFF);	 // the machine's DS/CS limit, measured with LSL
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
	// glyphs were drawn as nothing. That is the whole of the empty box: the box is layer art and appeared, the text is
	// a font fetch and was zeroes. The load itself is below, next to the other files this port opens.
	m.set_desc(0x0128, 0x80100000, 0x7FFFF);
	m.set_desc(0x0130, 0x81000000, 0x1FFFF);
	m.set_desc(0x0138, 0xC2100000, 0x41FFF);
	m.set_desc(0x0140, 0xC2200000, 0xFFF);
	m.set_desc(0x0148, 0xC2000000, 0x7FFFF);
	// 0040 is flat low RAM, and TownsOS's own GDT entry for it is base 0, limit 0x3FFFFF. It is needed here for one
	// reason: TBIOS holds the kanji font as a far pointer into low RAM through this selector, and a selector with no
	// descriptor resolves to base 0 with the read going nowhere.
	m.set_desc(0x0040, 0, 0x3FFFFF);

	// THE KANJI FONT, which is in no ROM. TBIOS reaches a two-byte character's bitmap through a far pointer kept in
	// its own image at CS:0x1E8: the offset is the font base and the selector gets the glyph. TownsOS replaces the
	// placeholder in that slot at boot with 0003B7E1:0040, pointing at a RAM copy of the font. The port boots TBIOS
	// without TownsOS's loader, so its copy kept the placeholder, which points into the character ROM at 0138:6400 --
	// and that range of the character ROM is blank. Every two-byte character in the game therefore rendered from an
	// empty font: the menu's labels and the copyright notice's Japanese drew nothing while the single-byte ANK text,
	// which comes from the ROM at 0x3D000, drew correctly.
	//
	// The font itself is UTFONT.FNT on the disc: two banks of 94 records, 48 bytes each, one record per code:
	//
	//   +0 u16 0  +2 u16 tag (0x7535 or 0x7635)  +4 u8 index  +5 32 bytes of bitmap  +37 11 bytes of pad
	//
	// The bitmap offset is +5, and it was measured rather than read off that layout. The machine holds 0003B7E1:0040
	// at TBIOS:0x1E8, and the 32 bytes it copies for code 0x752F are 00 00 07 e0 1f f8 3e 7c ..., which is
	// UTFONT.FNT 0x2a5 (the record at 0x2a0 plus 5) and not 0x2a7. Both wrong offsets were tried: +7 leaves the menu
	// 1,435 bytes from the machine's and +6 leaves 3,396, while +5 leaves 0 across the whole menu box.
	// TBIOS indexes the font as (code - 0x7521) * 32 for codes 0x7521-0x757E and (code - 0x75C3) * 32 for
	// 0x7621-0x767E, so it wants the two banks packed with the record headers stripped and no gap between them. The
	// base address is the machine's own, so the two sides hold the same font at the same place.
	{
		std::vector<uint8_t> utf;
		const uint32_t FONT_BASE = 0x3B7E1;
		const uint32_t BANK = 94 * 48;	// one bank of records as stored, header included
		if (!disc_or_cache("\\UTFONT.FNT", utf) || utf.size() < 2 * BANK) {
			std::printf("machine   no kanji font (\\UTFONT.FNT, %zu bytes) on the disc: two-byte characters will draw "
						"nothing\n",
						utf.size());
		} else {
			std::vector<uint8_t> packed(188 * 32);
			for (int n = 0; n < 188; ++n) {
				const size_t rec = n < 94 ? (size_t)n * 48 : (size_t)BANK + (size_t)(n - 94) * 48;
				std::memcpy(packed.data() + (size_t)n * 32, utf.data() + rec + 5, 32);
			}
			m.write_block(FONT_BASE, packed.data(), (uint32_t)packed.size());
			uint8_t ptr[6] = {(uint8_t)(FONT_BASE),
							  (uint8_t)(FONT_BASE >> 8),
							  (uint8_t)(FONT_BASE >> 16),
							  (uint8_t)(FONT_BASE >> 24),
							  0x40,
							  0x00};
			m.write_block(0x100000 + 0x1E8, ptr, sizeof ptr);
			std::printf("machine   kanji font %zu glyphs at 0x%x, from \\UTFONT.FNT (%zu bytes)\n", packed.size() / 32,
						FONT_BASE, utf.size());
		}
	}

	X86Cpu c;
	std::memset(&c, 0, sizeof c);
	c.r[4] = STACK;
	c.fl = 0x202;
	for (int i = 0; i < 6; ++i)
		c.sbase[i] = PROGRAM_BASE;
	c.sreg[1] = 0x000C;	 // cs
	for (int i = 0; i < 6; ++i)
		if (i != 1)
			c.sreg[i] = 0x0014;
	// The first instruction budget, which is how long the guest runs before the runtime gets its turn. It used to be 1 << 30, over a
	// billion clocks, and that is the whole reason no hardware interrupt was ever delivered: x86_poll is what advances machine time
	// and takes pending interrupts, and at a billion clocks the first poll was hours of emulated time away. Measured on 2026-11-05:
	// with the old value a whole played session produced zero polls, zero interrupts taken, and music that waited a minute for a
	// timer that had already expired. A few thousand clocks is a small fraction of a scanline, and the poll recomputes its own
	// budget from the next machine event each time it runs.
	c.budget = 4000;

	X86Func entry = x86_lookup_cs(0x000C, ENTRY);
	if (!entry) {
		std::printf("no recompiled function at 000C:%x\n", ENTRY);
		std::printf("the module holds %u functions, keyed by runtime address\n", g_mod_p_game.nfuncs);
		return 1;
	}
	print_instruments();

	std::printf("entry     000C:%x  esp 0x%x  cs base 0x%x\n", ENTRY, STACK, PROGRAM_BASE);
	// Applied here rather than at construction, so it is set once everything else about the machine is and before the
	// first instruction runs. 100 is also applied when asked for, because a run that says nothing about the rate and a
	// run that asks for full speed should not be distinguishable only by reading the argument list.
	m.set_cpu_rate(cpu_rate_arg);
	if (cpu_rate_arg != 100)
		std::printf("cpu rate  %d%% of the FM Towns clock, so the guest runs %s than real time\n", m.cpu_rate,
					cpu_rate_arg < 100 ? "slower" : "faster");
	// The VRAM access counters have to be on before the program runs, not after it has finished.
	// U2_TRACE_FILE=<path> writes the instruction trace, and U2_TRACE_LIMIT caps it (default two million
	// instructions, which is a few hundred MB of text at worst and enough to cover start-up).
#ifdef X86_TRACE_ON
	if (const char *tf = std::getenv("U2_TRACE_FILE")) {
		g_trace_file = std::fopen(tf, "w");
		if (!g_trace_file) {
			std::fprintf(stderr, "trace: cannot write %s\n", tf);
			return 2;
		}
		const char *lim = std::getenv("U2_TRACE_LIMIT");
		g_trace_limit = lim ? std::strtoull(lim, nullptr, 10) : 200000ull;	// first executions, not instructions
		std::printf("trace     %s, first executions up to %llu\n", tf, g_trace_limit);
	} else {
		g_trace_limit = 0;	// no trace file, but stop-at can still be used
	}
	if (const char *sa = std::getenv("U2_STOP_AT")) {
		g_stop_at = (uint32_t)std::strtoul(sa, nullptr, 16);
		if (const char *sd = std::getenv("U2_STOP_DUMP"))
			g_stop_dump = (uint32_t)std::strtoul(sd, nullptr, 16);
		if (const char *sc = std::getenv("U2_STOP_COUNT"))
			g_stop_count = std::strtoull(sc, nullptr, 10);
		if (const char *sf = std::getenv("U2_STOP_FRAME"))
			g_stop_frame = std::strtoull(sf, nullptr, 10);
		if (!g_stop_count)
			g_stop_count = 1;
		g_stop_len = 64;
		std::printf("stop      will stop at 0x%06x on hit %llu%s\n", g_stop_at, g_stop_hits + g_stop_count,
					g_stop_dump ? "" : " (no U2_STOP_DUMP, registers only)");
		if (g_stop_frame)
			std::printf("stop      ignoring hits before frame %llu\n", g_stop_frame);
	}
#endif
	// U2_KEYS=<frame>:<scan><ascii>,... presses keys on given frames, which is how the port is driven past a
	// keyboard wait. The pair is hexadecimal and both halves are two digits, so `60:1e61` is "at frame 60,
	// press the key whose scan code is 0x1E and whose ASCII is 0x61", which is what 'a' measured as on the
	// machine at 000C:000000B6. Two digits each is not a limitation but a safeguard: a scan code is 8 bits and
	// so is the ASCII, and a longer field would silently mean a different key.
	struct KeyPress {
		long frame;
		uint8_t scan, ascii;
	};
	std::vector<KeyPress> keypresses;
	if (const char *ks = std::getenv("U2_KEYS")) {
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
		for (const KeyPress &k : keypresses)
			std::printf("%ld:%02x%02x ", k.frame, k.scan, k.ascii);
		std::printf("\n");
	}
	// U2_PAD=<frame>:<bits>[:<hold>],... presses the Towns' game pad on given frames, which is the only way to
	// drive some screens at all: the front-end maps SDL's arrows to the virtual pad rather than to key scan codes,
	// so a menu that navigates on the pad cannot be reached by U2_KEYS. `bits` is decimal against the kit's kPad*
	// enum, so up is 1, down 2, left 4, right 8, A 16, B 32, and `hold` defaults to 8 frames (about a seventh of a
	// second) because a one-frame press can fall between two polls of the game port.
	struct PadPress {
		long frame;
		unsigned bits;
		long hold;
	};
	std::vector<PadPress> padpresses;
	if (const char *ps = std::getenv("U2_PAD")) {
		std::string spec(ps);
		size_t at = 0;
		while (at < spec.size()) {
			size_t comma = spec.find(',', at);
			std::string item = spec.substr(at, comma == std::string::npos ? std::string::npos : comma - at);
			at = comma == std::string::npos ? spec.size() : comma + 1;
			size_t c1 = item.find(':');
			size_t c2 = c1 == std::string::npos ? std::string::npos : item.find(':', c1 + 1);
			if (c1 == std::string::npos) {
				std::fprintf(stderr, "U2_PAD: '%s' is not <frame>:<bits>[:<hold>]\n", item.c_str());
				return 2;
			}
			PadPress p{};
			p.frame = std::strtol(item.substr(0, c1).c_str(), nullptr, 10);
			p.bits = (unsigned)std::strtoul(
				item.substr(c1 + 1, c2 == std::string::npos ? std::string::npos : c2 - c1 - 1).c_str(), nullptr, 10);
			p.hold = c2 == std::string::npos ? 8 : std::strtol(item.substr(c2 + 1).c_str(), nullptr, 10);
			padpresses.push_back(p);
		}
		std::printf("pad       %zu presses: ", padpresses.size());
		for (const PadPress &p : padpresses)
			std::printf("%ld:%u(%ld) ", p.frame, p.bits, p.hold);
		std::printf("\n");
	}
	// U2_RDWATCH=<linear>[:<length>] counts reads inside one linear range and prints the total at the end. The
	// counterpart to U2_WATCH, which can only see writes: a routine that looks a glyph up and then declines to draw
	// writes nothing, and this is what separates that from a routine that never ran.
	if (const char *r = std::getenv("U2_RDWATCH")) {
		char buf[64];
		std::snprintf(buf, sizeof buf, "%s", r);
		char *colon = std::strchr(buf, ':');
		uint32_t len = 1;
		if (colon) {
			*colon = 0;
			len = (uint32_t)std::strtoul(colon + 1, nullptr, 16);
		}
		g_rdw_lo = (uint32_t)std::strtoul(buf, nullptr, 16);
		g_rdw_hi = g_rdw_lo + (len ? len : 1);
		std::printf("rdwatch   [%08x,%08x)\n", g_rdw_lo, g_rdw_hi);
	}
	// U2_TRACE_FN=<cs>:<lo>:<hi> logs every entry into one code-selector address range, deduped by (target, site).
	// A port whose functions are C++ calls has no instruction fetches to watch, so "does the program ever reach this
	// routine" cannot be answered by a read watch: this is the instrument for it.
	if (const char *fspec = std::getenv("U2_TRACE_FN")) {
		std::string s(fspec);
		size_t c1 = s.find(':'), c2 = c1 == std::string::npos ? std::string::npos : s.find(':', c1 + 1);
		if (c1 == std::string::npos || c2 == std::string::npos) {
			std::fprintf(stderr, "U2_TRACE_FN: '%s' is not <cs>:<lo>:<hi>\n", fspec);
		} else {
			g_trace_fn_cs = (uint32_t)std::strtoul(s.substr(0, c1).c_str(), nullptr, 16);
			g_trace_fn_lo = (uint32_t)std::strtoul(s.substr(c1 + 1, c2 - c1 - 1).c_str(), nullptr, 16);
			g_trace_fn_hi = (uint32_t)std::strtoul(s.substr(c2 + 1).c_str(), nullptr, 16);
			std::printf("trace     function entries in %04x:%08x..%08x\n", g_trace_fn_cs, g_trace_fn_lo, g_trace_fn_hi);
		}
	}
	// U2_FN_DUMP=<off>:<len>:<path> writes that many bytes at gs:ebp+off the first time a traced entry fires, so the
	// port's snapshot is taken inside the same call as the machine's breakpoint rather than after the frame.
	if (const char *d = std::getenv("U2_FN_DUMP")) {
		std::string s(d);
		size_t c1 = s.find(':'), c2 = c1 == std::string::npos ? std::string::npos : s.find(':', c1 + 1);
		if (c1 == std::string::npos || c2 == std::string::npos) {
			std::fprintf(stderr, "U2_FN_DUMP: '%s' is not <off>:<len>:<path>\n", d);
		} else {
			g_trace_fn_dump_off = (uint32_t)std::strtoul(s.substr(0, c1).c_str(), nullptr, 16);
			g_trace_fn_dump_len = (uint32_t)std::strtoul(s.substr(c1 + 1, c2 - c1 - 1).c_str(), nullptr, 16);
			g_trace_fn_dump_path = std::getenv("U2_FN_DUMP");
			static std::string path_storage = s.substr(c2 + 1);
			g_trace_fn_dump_path = path_storage.c_str();
			// U2_FN_DUMP_AT=<frame> holds the dump back until that frame, so both sides can be made to fire on the same
			// glyph: reach the menu, press a key, and dump on the first entry of the redraw.
			if (const char *at = std::getenv("U2_FN_DUMP_AT"))
				g_trace_fn_dump_frame = (uint32_t)std::strtoul(at, nullptr, 10);
			std::printf("trace     state dump %u bytes at gs:ebp+%x -> %s\n", g_trace_fn_dump_len, g_trace_fn_dump_off,
						g_trace_fn_dump_path);
		}
	}
	if (std::getenv("U2_VRAM"))
		m.set_count_access(true);
	// U2_TRACE_FAR=1 prints every distinct far call site into the TBIOS selector 0110, one line per site, with the
	// caller's CS:EIP. The program does not reach its system layer with constant-selector `9a` instructions and stores
	// no far pointer to it, so the callers exist only at run time. This is the measurement that names them.
	if (std::getenv("U2_TRACE_FAR")) {
		g_trace_far_sel = 0x0110;
		// U2_TRACE_FAR_ALL=<n> prints the first n transfers individually instead of one line per call site, and every
		// watched write carries the EAX of the transfer in flight. A dispatcher takes its function number as an
		// argument, so pairing the two is the only way to say which request produced which write.
		if (const char *n = std::getenv("U2_TRACE_FAR_ALL"))
			g_trace_far_all = (uint32_t)std::strtoul(n, nullptr, 10);
		std::printf("trace     far calls into selector 0110, %s\n",
					g_trace_far_all ? "every call" : "one line per call site");
	}
	// U2_SHOT=<path> writes the frame the machine is showing when the run ends, with the kit's own renderer, so
	// "the port draws something" is a picture rather than a byte count. The kit has write_png for exactly this
	// (it is how its own ports save frames at a VSYNC).
	const char *shot_path = std::getenv("U2_SHOT");
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
		o.title = std::string(kTitle) + " - FM Towns, recompiled";
		o.scale = scale;
		o.fullscreen = fullscreen;
		o.letterbox = letterbox;
		std::string err;
		if (host.open(o, err)) {
			host.on_key = [&m](uint8_t scan, uint8_t ascii) { m.press_key(scan, ascii); };
			std::printf("graphics  sdl, window open as \"%s\", Ctrl-Q or closing the window ends the run\n",
						o.title.c_str());
		} else {
			// A display that is missing costs a picture and not a measurement, so the DEFAULT falls back rather than
			// refusing. An explicit --graphics=sdl does not: the caller asked for a window, so a silent fallback leaves
			// them looking at a terminal with no picture and nothing saying why, which is indistinguishable from a
			// crash. The hint names XAUTHORITY because that, not DISPLAY, is the usual cause over ssh.
			if (graphics_explicit) {
				std::fprintf(stderr, "graphics  --graphics=sdl could not open a window: %s\n", err.c_str());
				std::fprintf(stderr,
							 "          DISPLAY is \"%s\". Over ssh the usual cause is the X cookie rather than the display:\n"
							 "          export XAUTHORITY=$(ps -eo cmd | grep -oE '\\-auth [^ ]+' | head -1 | cut -d' ' -f2)\n"
							 "          Use --graphics=none for a headless run.\n",
							 std::getenv("DISPLAY") ? std::getenv("DISPLAY") : "(unset)");
				return 2;
			}
			std::printf("graphics  sdl unavailable (%s), falling back to none\n", err.c_str());
			use_sdl = false;
		}
	} else {
		std::printf("graphics  none\n");
	}
	// The control channel, phase 10 tier 1. Opened here and serviced from the frame hook below, never from a thread,
	// so a command is only ever handled at a frame boundary. Without --control nothing in this block runs.
	std::unique_ptr<u2ctl::Channel> ctl;
	if (!control_spec.empty()) {
		ctl = std::make_unique<u2ctl::Channel>();
		std::string cerr;
		if (!ctl->open(control_spec, cerr)) {
			std::fprintf(stderr, "--control=%s: %s\n", control_spec.c_str(), cerr.c_str());
			return 2;
		}
		std::printf("control   %s\n", ctl->bound().c_str());
		std::fflush(stdout);
	}
	// U2_WATCH=<linear>[:<length>] reports every write into one linear range, with the instruction that made
	// it. This is the port's answer to a physical MEMW watch on the machine, and one thing it does better:
	// the machine's page tables move a linear address between physical pages, so a watch armed on a physical
	// byte can miss the write it was set for. Linear is what the program's code addresses.
	long watch_at = -1;
	uint32_t watch_lo_arm = 0, watch_hi_arm = 0;
	// U2_WATCH_MAX=<n> prints that many hits instead of 64. It is read HERE, outside every block, because the budget
	// is shared: it also bounds `U2_TRACE_FN`, which logs every routine entry in a range. Read only inside the U2_WATCH
	// block, a traced enumeration silently stopped at 64 entries and looked complete, which is exactly the kind of
	// quiet truncation that reads as a finding. Measured 2026-11-02 on the create route.
	if (const char *mx = std::getenv("U2_WATCH_MAX"))
		g_watch_max = (uint32_t)std::strtoul(mx, nullptr, 10);
	if (const char *w = std::getenv("U2_WATCH")) {
		char buf[64];
		std::snprintf(buf, sizeof buf, "%s", w);
		char *colon = std::strchr(buf, ':');
		uint32_t len = 1;
		if (colon) {
			*colon = 0;
			len = (uint32_t)std::strtoul(colon + 1, nullptr, 16);
		}
		g_watch_lo = (uint32_t)std::strtoul(buf, nullptr, 16);
		g_watch_hi = g_watch_lo + (len ? len : 1);
		// U2_WATCH_AT=<frame> arms it at that frame instead of at start-up. It exists for one reason: the interesting
		// writes to a screen come after the fills that clear it, and a watch armed at start-up spends its whole budget
		// on the fills. Measured before the knob: four watches over different ranges all reported exactly 64 lines, all
		// the same start-up fill, which read as "nothing else writes there".
		if (const char *at = std::getenv("U2_WATCH_AT")) {
			watch_at = std::strtol(at, nullptr, 10);
			watch_lo_arm = g_watch_lo;
			watch_hi_arm = g_watch_hi;
			g_watch_lo = g_watch_hi = 0;
		}
		std::printf("watch     [%08x,%08x) max %u%s", watch_lo_arm ? watch_lo_arm : g_watch_lo,
					watch_lo_arm ? watch_hi_arm : g_watch_hi, g_watch_max, watch_at >= 0 ? " armed later\n" : "\n");
	}
	// The running cpu, always, not only for the watch: an unknown I/O port is reported with the instruction that
	// wrote it, and a port number with no caller is a lead that has to be found again by watching.
	g_x86_cur = &c;
	// Control-channel state that outlives the frame it was asked in. `frame` and `wait` cannot be answered in the
	// frame they arrive, because their whole point is to answer when something has happened, so they park here and
	// the hook services them. One pending frame step and one pending wait at a time: a driver that sends two is
	// told so rather than silently having one dropped.
	struct CtlPending {
		long frame_id = -1;		// the id of a waiting `frame` command
		long frame_target = 0;	// the machine frame it is answered at
		long frame_from = 0;	// the machine frame it was received on
		long wait_id = -1;		// the id of a waiting `wait` command
		long wait_deadline = 0;
		bool wait_screen = false;
		uint32_t wait_hash = 0;	 // for screen waits, the sampled checksum at issue
		uint32_t wait_linear = 0;
		uint32_t wait_len = 1;
		std::vector<uint8_t> wait_bytes;
		long shot_id = -1;		// the id of a `shot` parked until a frame
		long shot_at = 0;		// the frame it renders on, so the picture is frame-exact and comparable
		std::string shot_path;	// empty means inline the PNG as base64
		// A `mem` parked until a frame, for the same reason a shot is: the reply is what a differential samples, and a
		// reply serviced "a frame or two later, whenever" is what made two identical runs disagree. Measured before
		// this existed: wanted frame 6200, read at 6201, and 13400 read at 13402, varying per run.
		long mem_id = -1;
		long mem_at = 0;
		uint32_t mem_linear = 0, mem_len = 0;
		bool busy() const { return frame_id >= 0 || wait_id >= 0 || shot_id >= 0 || mem_id >= 0; }
	} ctlpend;

	// A cheap stand-in for "did the picture change", computed the same way every time so two frames are comparable.
	// Hashing the whole frame each frame would be the honest checksum and far too slow to poll; sampling every
	// 997th pixel catches a screen that changed and ignores one that did not, which is what a wait needs.
	auto screen_sample = [&m]() {
		std::vector<uint32_t> rgb;
		int w = 0, h = 0;
		m.render(rgb, w, h);
		uint32_t hsh = 2166136261u;
		for (size_t i = 0; i < rgb.size(); i += 997) {
			hsh = (hsh ^ rgb[i]) * 16777619u;
		}
		return hsh;
	};

	// `seg:off` in hex, either half optional, or a bare linear hex. The segment is matched against the CPU's own
	// segment registers and resolved through its base, which is what the emulator console's `MD 14:cdf6b` means and
	// what docs/live-fieldmap.md records: DS's base is the image base, so a file address is the offset. A segment
	// value the CPU is not using is refused with the list rather than guessed at, because a wrong base reads as a
	// wrong game state and not as an error.
	auto resolve_addr = [&c](const std::string &spec, uint32_t &linear, std::string &err) {
		size_t colon = spec.find(':');
		if (colon == std::string::npos) {
			linear = (uint32_t)std::strtoul(spec.c_str(), nullptr, 16);
			return true;
		}
		std::string segs = spec.substr(0, colon);
		std::string offs = spec.substr(colon + 1);
		uint32_t seg = (uint32_t)std::strtoul(segs.c_str(), nullptr, 16);
		uint32_t off = (uint32_t)std::strtoul(offs.c_str(), nullptr, 16);
		for (int i = 0; i < 6; ++i) {
			if (c.sreg[i] == seg) {
				linear = c.sbase[i] + off;
				return true;
			}
		}
		err = "no segment register holds " + segs + ": the CPU has ";
		for (int i = 0; i < 6; ++i) {
			char hex[8];
			std::snprintf(hex, sizeof hex, "%s%04x", i ? " " : "", (unsigned)c.sreg[i]);
			err += hex;
		}
		return false;
	};

#ifndef _WIN32	// the control channel, which the Windows build does not port: see port/control.h
	// Build a `shot` reply: render is already done, this writes the PNG and either names the file or inlines it as
	// base64. Shared by the immediate command and the parked one so the two cannot drift apart.
	auto shot_reply = [](const std::string &want_path, long id, const std::vector<uint32_t> &rgb, int w, int h,
						 long frame) {
		std::string where = want_path;
		bool temp = where.empty();
		if (temp) {
			const char *tmpdir = std::getenv("TMPDIR");
			// glibc's mkstemps wants **six** X's before the suffix, not four, and returns EINVAL for anything less.
			// The first version used XXXX and every inline shot failed with "Invalid argument", which the test caught
			// and a manual run would have blamed on the renderer.
			char tmpl[512];
			std::snprintf(tmpl, sizeof tmpl, "%s/u2port-shot-XXXXXX.png", tmpdir && *tmpdir ? tmpdir : "/tmp");
			int fd = ::mkstemps(tmpl, 4);
			if (fd < 0)
				return u2ctl::error_reply(id, std::string("mkstemps: ") + std::strerror(errno));
			::close(fd);
			where = tmpl;
		}
		if (!towns::write_png(where, rgb, w, h))
			return u2ctl::error_reply(id, "write_png failed for " + where);
		const std::string fr = "\"frame\":" + std::to_string((long long)frame);
		if (!temp) {
			std::string wh;
			u2ctl::escape(where, wh);
			return u2ctl::ok_reply(id, "\"path\":\"" + wh + "\",\"width\":" + std::to_string(w) + "," + fr);
		}
		std::vector<uint8_t> png;
		if (!u2ctl::read_file(where, png)) {
			::unlink(where.c_str());
			return u2ctl::error_reply(id, "the png vanished before it could be read back");
		}
		::unlink(where.c_str());
		return u2ctl::ok_reply(id, "\"width\":" + std::to_string(w) + ",\"height\":" + std::to_string(h) +
									   ",\"png\":\"" + u2ctl::b64(png) + "\"," + fr);
	};
#endif	// !_WIN32

	if (frames || use_sdl || !keypresses.empty() || !padpresses.empty() || ctl) {
		// The last value of the turn clock at 0xcdf53, and whether it has been read yet.
		uint32_t turn_clock_last = 0;
		bool turn_clock_seen = false;
		// THE TURN BOUNDARY. The machine this port reproduces does not carry input across a turn: a direction
		// pressed twice quickly acts once, because the second press arrives while the first turn is running and
		// the guest is not asking for a key. Measured against Tsugaru on 2026-11-01 and recorded in
		// docs/port-defects.md.
		//
		// 0xcdf53 counts turns: it advances by exactly one per completed command, for moves, attacks, P)ass,
		// L)ook and inventory alike, and does not advance for keys typed into a modal prompt such as the YELL
		// line. When the guest asks for a key and that clock has moved since the last key it took, the turn that
		// was running has ended, so anything still queued arrived during it and is dropped.
		//
		// This runs at the serve, not at vsync. A vsync check looks equivalent and is not: the guest consumes
		// another key before the next vsync arrives, so eight queued presses cost two turns instead of one.
		//
		// A command that takes two keys is unaffected: "A" does not complete a turn on its own, so the clock has
		// not moved when the direction arrives and both keys are used.
		m.before_key_served = [&]() {
			uint32_t turn_now = 0;
			m.read_block(0x400000u + 0xCDF53u, reinterpret_cast<uint8_t *>(&turn_now), 4);
			if (turn_clock_seen && turn_now != turn_clock_last && !key_queue_ok)
				m.clear_keys();
			turn_clock_last = turn_now;
			turn_clock_seen = true;
		};
		// The callback is installed when ANY of these needs it. It used to be installed only under a frame limit,
		// which would have left `--sdl` with no limit showing a frozen window, because the hook that draws it is
		// this one.
		m.on_vsync = [&](towns::Machine &mm) {
			// The window first, because it is what paces the run and what throws Stop{0} when it is closed. Then
			// everything the headless runs do, in the same order as before, so `--sdl` adds a picture rather than
			// changing a measurement.
			if (use_sdl)
				host.vsync(mm);
			if (frames && (long)mm.frame >= frames)
				throw towns::Stop{0};
			if (watch_at >= 0 && (long)mm.frame == watch_at) {
				g_watch_lo = watch_lo_arm;
				g_watch_hi = watch_hi_arm;
				std::printf("watch     armed at frame %ld: [%08x,%08x)\n", watch_at, g_watch_lo, g_watch_hi);
			}
			for (const KeyPress &k : keypresses)
				if (k.frame == (long)mm.frame)
					mm.press_key(k.scan, k.ascii);
			// THE TURN BOUNDARY is handled in the on_key_served hook below, at the moment the guest asks for a
			// key, because a vsync-rate check is one frame late and lets a second command through.
			// The pad is level-sensitive rather than a queue: it is set for the frames asked for and cleared after
			// the hold, because a held direction is what the game polls and a press that never clears reads as a
			// direction held down for ever.
			for (const PadPress &p : padpresses) {
				if (p.frame == (long)mm.frame)
					mm.set_pad(0, p.bits);
				if (p.frame + p.hold == (long)mm.frame)
					mm.set_pad(0, 0);
			}
			// Control commands, answered between frames. `frame` in every reply is the machine's own counter, so a
			// caller can tell that two commands were served in the same frame rather than assuming it.
#ifndef _WIN32	// the control channel, which the Windows build does not port: see port/control.h
			if (ctl) {
				// Parked commands first, so a `frame` that became due this frame is answered before new commands are
				// read.
				if (ctlpend.frame_id >= 0 && (long)mm.frame >= ctlpend.frame_target) {
					// `from` is the frame the command was received on, not the frame the earlier reply was sent on, so
					// "exactly N" is checkable without knowing that commands are read once per frame. Without it a
					// caller measuring reply to reply sees N+1 and has to guess whether that is a bug or the transport.
					ctl->send(u2ctl::ok_reply(
						ctlpend.frame_id, "\"frame\":" + std::to_string((unsigned long long)mm.frame) + ",\"from\":" +
											  std::to_string((long long)ctlpend.frame_from) + ",\"stepped\":true"));
					ctlpend.frame_id = -1;
				}
				// A parked `mem` is answered on exactly the frame it asked for, like a shot. This is what makes a
				// sample a property of the run rather than of when the driver's previous command happened to be read.
				if (ctlpend.mem_id >= 0 && (long)mm.frame >= ctlpend.mem_at) {
					const long mid = ctlpend.mem_id;
					const uint32_t ml = ctlpend.mem_linear, mn = ctlpend.mem_len;
					ctlpend.mem_id = -1;
					char linh[16];
					std::snprintf(linh, sizeof linh, "0x%08x", ml);
					ctl->send(u2ctl::ok_reply(
						mid, std::string("\"linear\":\"") + linh + "\",\"n\":" + std::to_string(mn) + ",\"hex\":\"" +
								 mem_hex(m, ml, mn) + "\",\"frame\":" + std::to_string((unsigned long long)mm.frame)));
				}
				if (ctlpend.shot_id >= 0 && (long)mm.frame >= ctlpend.shot_at) {
					// A parked shot renders on exactly the frame it asked for, which is what makes it comparable with
					// U2_SHOT: the splash animates, so "about frame 600" is a different picture from frame 600.
					const long sid = ctlpend.shot_id;
					ctlpend.shot_id = -1;
					std::vector<uint32_t> rgb;
					int w = 0, h = 0;
					m.render(rgb, w, h);
					if (w > 0 && h > 0)
						ctl->send(shot_reply(ctlpend.shot_path, sid, rgb, w, h, (long)mm.frame));
					else
						ctl->send(u2ctl::error_reply(sid, "the machine has no frame to render"));
				}
				if (ctlpend.wait_id >= 0) {
					bool changed = false;
					std::string value;
					if (ctlpend.wait_screen) {
						changed = screen_sample() != ctlpend.wait_hash;
					} else {
						std::vector<uint8_t> now(ctlpend.wait_len, 0);
						m.read_block(ctlpend.wait_linear, now.data(), ctlpend.wait_len);
						if (now != ctlpend.wait_bytes) {
							changed = true;
							for (uint8_t b : now) {
								char hex[3];
								std::snprintf(hex, sizeof hex, "%02x", b);
								value += hex;
							}
						}
					}
					if (changed) {
						std::string fields =
							"\"frame\":" + std::to_string((unsigned long long)mm.frame) + ",\"changed\":true";
						if (!value.empty())
							fields += ",\"value\":\"" + value + "\"";
						ctl->send(u2ctl::ok_reply(ctlpend.wait_id, fields));
						ctlpend.wait_id = -1;
					} else if ((long)mm.frame >= ctlpend.wait_deadline) {
						ctl->send(u2ctl::error_reply(ctlpend.wait_id, "no change within the frame budget"));
						ctlpend.wait_id = -1;
					}
				}
				ctl->poll();
				u2ctl::Command cc;
				std::string perr;
				for (;;) {
					perr.clear();
					int st = ctl->next(cc, perr);
					if (st == 0)
						break;
					if (st < 0) {
						ctl->send(u2ctl::error_reply(cc.id, perr));
						continue;
					}
					const std::string fr = "\"frame\":" + std::to_string((unsigned long long)mm.frame);
					if (cc.cmd == "hello") {
						ctl->send(
							u2ctl::ok_reply(cc.id, "\"version\":\"" + std::string(u2ctl::version()) + "\"," + fr));
					} else if (cc.cmd == "ping") {
						// `keys` is how many queued presses KYB_read has taken. It exists because "the game is
						// ignoring this key" and "the game is not reading the keyboard" look identical from the
						// screen, and only one of them is an input-path bug.
						ctl->send(u2ctl::ok_reply(
							cc.id, fr + ",\"keys\":" + std::to_string((unsigned long long)m.keys_served) +
									   ",\"queued\":" + std::to_string((unsigned long long)m.keys.size())));
					} else if (cc.cmd == "echo") {
						std::string fields;
						for (const auto &kv : cc.args) {
							if (!fields.empty())
								fields += ",";
							std::string k, v;
							u2ctl::escape(kv.first, k);
							u2ctl::escape(kv.second, v);
							fields += "\"" + k + "\":\"" + v + "\"";
						}
						ctl->send(u2ctl::ok_reply(cc.id, fields));
					} else if (cc.cmd == "key") {
						// The name is SDL's own ("Return", "space", "Down", "a"), resolved by SDL_GetKeyFromName so the
						// port is not maintaining a second table of what a key is called. An unknown name is refused
						// with the name in the error, because a typo in a script otherwise reads as a game that ignored
						// the key.
						auto k = cc.args.find("key");
						if (k == cc.args.end()) {
							ctl->send(
								u2ctl::error_reply(cc.id, "key wants a key field, for example \"key\":\"Return\""));
							continue;
						}
						SDL_Keycode sym = SDL_GetKeyFromName(k->second.c_str());
						if (sym == SDLK_UNKNOWN) {
							ctl->send(u2ctl::error_reply(cc.id, "not a key name SDL knows: " + k->second));
							continue;
						}
						// `at` schedules the press on a FRAME, through the same list U2_KEYS fills. A key delivered
						// "now" lands wherever scheduling put the machine, which is enough to make two runs of one
						// route differ; a differential needs the keystroke itself to be at a fixed frame, not merely
						// the sample after it.
						if (auto it = cc.args.find("at"); it != cc.args.end()) {
							long at = std::strtol(it->second.c_str(), nullptr, 10);
							uint8_t scan = 0, ascii = 0;
							if (!towns::towns_key_scancode((int)SDL_GetScancodeFromKey(sym, nullptr), (int)sym, scan,
														   ascii)) {
								ctl->send(
									u2ctl::error_reply(cc.id, "the Towns keyboard has no code for: " + k->second));
								continue;
							}
							keypresses.push_back(KeyPress{at, scan, ascii});
							std::string kn;
							u2ctl::escape(k->second, kn);
							ctl->send(u2ctl::ok_reply(cc.id, "\"key\":\"" + kn + "\",\"at\":" + std::to_string(at) +
																 ",\"scan\":" + std::to_string(scan) +
																 ",\"ascii\":" + std::to_string(ascii) + "," + fr));
							continue;
						}
						// HEADLESS. There is no window, so there is no SDL event to push, but the guest does not care
						// where a keystroke came from. What the window's path uniquely supplies is the PC-to-Towns
						// translation, so ask for exactly that and press the result. Refusing here instead is what made
						// a 43-key sweep report that nothing reached the code under test, when in truth no key ever
						// reached the guest.
						if (!use_sdl) {
							uint8_t scan = 0, ascii = 0;
							if (!towns::towns_key_scancode((int)SDL_GetScancodeFromKey(sym, nullptr), (int)sym, scan,
														   ascii)) {
								ctl->send(
									u2ctl::error_reply(cc.id, "the Towns keyboard has no code for: " + k->second));
								continue;
							}
							m.press_key(scan, ascii);
							std::string kn;
							u2ctl::escape(k->second, kn);
							ctl->send(u2ctl::ok_reply(cc.id, "\"key\":\"" + kn + "\",\"scan\":" + std::to_string(scan) +
																 ",\"ascii\":" + std::to_string(ascii) + "," + fr));
							continue;
						}
						SDL_Event ev{};
						ev.type = SDL_EVENT_KEY_DOWN;
						ev.common.timestamp = 0;
						// windowID left zero on purpose: SdlHost does not expose the window, and the front-end's
						// handler dispatches on event type and scancode, so a zero id still travels the same road as a
						// physical key.
						ev.key.scancode = SDL_GetScancodeFromKey(sym, nullptr);
						ev.key.key = sym;
						ev.key.mod = 0;
						ev.key.repeat = false;
						if (!SDL_PushEvent(&ev)) {
							ctl->send(u2ctl::error_reply(cc.id, std::string("SDL_PushEvent: ") + SDL_GetError()));
							continue;
						}
						std::string kn;
						u2ctl::escape(k->second, kn);
						ctl->send(u2ctl::ok_reply(cc.id, "\"key\":\"" + kn + "\"," + fr));
					} else if (cc.cmd == "frame") {
						// Step exactly N machine frames and answer when the Nth has been reached. The reply carries the
						// frame it was sent on, so "exactly" is checkable by the caller rather than assumed.
						if (ctlpend.frame_id >= 0) {
							ctl->send(u2ctl::error_reply(cc.id, "a frame step is already pending"));
							continue;
						}
						long n = 1;
						if (auto it = cc.args.find("n"); it != cc.args.end())
							n = std::strtol(it->second.c_str(), nullptr, 10);
						if (n < 1 || n > 1000000) {
							ctl->send(u2ctl::error_reply(cc.id, "frame n must be between 1 and 1000000"));
							continue;
						}
						// `at` makes the step ABSOLUTE, which is what a differential needs. With relative steps a
						// caller that asks the frame and then asks to step lands somewhere that depends on how many
						// frames ran between the two commands, so two runs of the same route sit at different frames
						// and their state differs for reasons unrelated to the code under test. Measured: frame 60
						// against frame 1. `at` is idempotent, because being already there is the state the caller
						// asked for, not an error.
						if (auto it = cc.args.find("at"); it != cc.args.end()) {
							long at = std::strtol(it->second.c_str(), nullptr, 10);
							if (at < 0) {
								ctl->send(u2ctl::error_reply(cc.id, "frame at must not be negative"));
								continue;
							}
							if (at <= (long)mm.frame) {
								ctl->send(u2ctl::ok_reply(cc.id, fr));
								continue;
							}
							ctlpend.frame_id = cc.id;
							ctlpend.frame_from = (long)mm.frame;
							ctlpend.frame_target = at;
							continue;
						}
						ctlpend.frame_id = cc.id;
						ctlpend.frame_from = (long)mm.frame;
						ctlpend.frame_target = (long)mm.frame + n;
					} else if (cc.cmd == "wait") {
						if (ctlpend.wait_id >= 0) {
							ctl->send(u2ctl::error_reply(cc.id, "a wait is already pending"));
							continue;
						}
						long timeout = 600;
						if (auto it = cc.args.find("timeout"); it != cc.args.end())
							timeout = std::strtol(it->second.c_str(), nullptr, 10);
						if (timeout < 1 || timeout > 100000) {
							ctl->send(u2ctl::error_reply(cc.id, "wait timeout must be between 1 and 100000 frames"));
							continue;
						}
						ctlpend.wait_id = cc.id;
						ctlpend.wait_deadline = (long)mm.frame + timeout;
						if (auto it = cc.args.find("screen"); it != cc.args.end() && it->second != "0") {
							ctlpend.wait_screen = true;
							ctlpend.wait_hash = screen_sample();
						} else {
							auto addr = cc.args.find("addr");
							if (addr == cc.args.end()) {
								ctl->send(u2ctl::error_reply(cc.id, "wait wants addr (seg:off or linear) or screen"));
								ctlpend.wait_id = -1;
								continue;
							}
							uint32_t linear = 0;
							std::string werr;
							if (!resolve_addr(addr->second, linear, werr)) {
								ctl->send(u2ctl::error_reply(cc.id, werr));
								ctlpend.wait_id = -1;
								continue;
							}
							uint32_t len = 1;
							if (auto it2 = cc.args.find("n"); it2 != cc.args.end())
								len = (uint32_t)std::strtoul(it2->second.c_str(), nullptr, 10);
							if (len < 1 || len > 4096) {
								ctl->send(u2ctl::error_reply(cc.id, "wait n must be between 1 and 4096 bytes"));
								ctlpend.wait_id = -1;
								continue;
							}
							ctlpend.wait_screen = false;
							ctlpend.wait_linear = linear;
							ctlpend.wait_len = len;
							ctlpend.wait_bytes.assign(len, 0);
							m.read_block(linear, ctlpend.wait_bytes.data(), len);
						}
					} else if (cc.cmd == "mem") {
						auto addr = cc.args.find("addr");
						if (addr == cc.args.end()) {
							ctl->send(u2ctl::error_reply(cc.id, "mem wants addr (seg:off or linear) and optional n"));
							continue;
						}
						uint32_t linear = 0;
						std::string merr;
						if (!resolve_addr(addr->second, linear, merr)) {
							ctl->send(u2ctl::error_reply(cc.id, merr));
							continue;
						}
						uint32_t len = 16;
						if (auto it2 = cc.args.find("n"); it2 != cc.args.end())
							len = (uint32_t)std::strtoul(it2->second.c_str(), nullptr, 10);
						if (len < 1 || len > 65536) {
							ctl->send(u2ctl::error_reply(cc.id, "mem n must be between 1 and 65536"));
							continue;
						}
						// `at` parks the read until that frame, so the sample is a property of the run and not of when
						// this command happened to be read. Idempotent like `frame at`: a frame already gone is
						// answered now.
						if (auto it = cc.args.find("at"); it != cc.args.end()) {
							long at = std::strtol(it->second.c_str(), nullptr, 10);
							if (at < 0) {
								ctl->send(u2ctl::error_reply(cc.id, "mem at must not be negative"));
								continue;
							}
							if (at > (long)mm.frame) {
								if (ctlpend.mem_id >= 0) {
									ctl->send(u2ctl::error_reply(cc.id, "a mem is already parked"));
									continue;
								}
								ctlpend.mem_id = cc.id;
								ctlpend.mem_at = at;
								ctlpend.mem_linear = linear;
								ctlpend.mem_len = len;
								continue;
							}
						}
						char lin[16];
						std::snprintf(lin, sizeof lin, "0x%08x", linear);
						ctl->send(u2ctl::ok_reply(cc.id, std::string("\"linear\":\"") + lin +
															 "\",\"n\":" + std::to_string(len) + ",\"hex\":\"" +
															 mem_hex(m, linear, len) + "\"," + fr));
					} else if (cc.cmd == "shot") {
						// The same renderer U2_SHOT uses, so "the socket's picture" and "the file's picture" are the
						// same bytes and that is checkable rather than plausible. Inline as base64 by default; a `path`
						// writes the file instead, and an `at` parks the shot until that exact frame, which is what
						// makes it comparable with a run that ended on that frame.
						std::string want_path;
						if (auto it2 = cc.args.find("path"); it2 != cc.args.end() && !it2->second.empty())
							want_path = it2->second;
						long at = -1;
						if (auto it2 = cc.args.find("at"); it2 != cc.args.end())
							at = std::strtol(it2->second.c_str(), nullptr, 10);
						if (at > (long)mm.frame) {
							if (ctlpend.shot_id >= 0) {
								ctl->send(u2ctl::error_reply(cc.id, "a parked shot is already pending"));
								continue;
							}
							ctlpend.shot_id = cc.id;
							ctlpend.shot_at = at;
							ctlpend.shot_path = want_path;
							continue;
						}
						std::vector<uint32_t> rgb;
						int w = 0, h = 0;
						m.render(rgb, w, h);
						if (w <= 0 || h <= 0) {
							ctl->send(u2ctl::error_reply(cc.id, "the machine has no frame to render"));
							continue;
						}
						ctl->send(shot_reply(want_path, cc.id, rgb, w, h, (long)mm.frame));
					} else if (cc.cmd == "state") {
						// The roster is plain ASCII on the emulated floppy, so `state` is a reader rather than a
						// decoder, and it reads the same image the guest is writing through. Slot numbering follows
						// tools/savedisk.js: in-game slot 1 is the roster's "(0)", and the test asserts the two agree
						// field for field so neither parser can drift alone.
						long slot = 0;
						if (auto it2 = cc.args.find("slot"); it2 != cc.args.end())
							slot = std::strtol(it2->second.c_str(), nullptr, 10);
						// Read the live image, not the file. The guest's writes land in memory and reach the file only
						// at exit, so a reader that re-opened the path would report the disk as it was found and a
						// caller could not tell a failed save from a save that has not been flushed yet.
						if (!g_floppy.loaded()) {
							ctl->send(
								u2ctl::error_reply(cc.id, std::string("cannot open the floppy image ") + floppy_path));
							continue;
						}
						u2floppy::Image &disk = g_floppy;
						std::vector<uint8_t> raw;
						if (!disk.read("ROSTER1.UT2", raw) || raw.empty()) {
							ctl->send(u2ctl::error_reply(
								cc.id, "no ROSTER1.UT2 on the floppy, so there is no party to report"));
							continue;
						}
						if (slot < 0 || slot > 3) {
							ctl->send(u2ctl::error_reply(cc.id, "slot must be 0 to 3"));
							continue;
						}
						std::string text(raw.begin(), raw.end());
						const std::string tag = "(" + std::to_string(slot) + ")NAME=";
						size_t at = text.find(tag);
						if (at == std::string::npos) {
							ctl->send(
								u2ctl::error_reply(cc.id, "slot " + std::to_string(slot) + " is not in the roster"));
							continue;
						}
						size_t end = text.find("(NAME=", at + 1);
						for (size_t k = 0; k < 4; ++k) {
							std::string nxt = "(" + std::to_string(k) + ")NAME=";
							if (k == (size_t)slot)
								continue;
							size_t p = text.find(nxt, at + 1);
							if (p != std::string::npos && (end == std::string::npos || p < end))
								end = p;
						}
						if (end == std::string::npos)
							end = text.size();
						std::string body = text.substr(at, end - at);
						// The slot's fields, split on CR or LF, kept in file order so a reader sees the roster's own
						// arrangement rather than an alphabetical one.
						std::string out;
						size_t i = 0;
						bool first = true;
						while (i < body.size()) {
							size_t nl = body.find_first_of("\r\n", i);
							std::string line = body.substr(i, nl == std::string::npos ? std::string::npos : nl - i);
							i = (nl == std::string::npos) ? body.size() : nl + 1;
							size_t eq = line.find('=');
							if (eq == std::string::npos)
								continue;
							std::string key = line.substr(0, eq), val = line.substr(eq + 1);
							if (!key.compare(0, 1, "(")) {
								size_t close = key.find(')');
								if (close != std::string::npos)
									key = key.substr(close + 1);
							}
							if (key.empty())
								continue;
							std::string ek, ev;
							u2ctl::escape(key, ek);
							u2ctl::escape(val, ev);
							out += std::string(first ? "" : ",") + "\"" + ek + "\":\"" + ev + "\"";
							first = false;
						}
						ctl->send(u2ctl::ok_reply(cc.id, "\"slot\":" + std::to_string(slot) + ",\"disk\":" +
															 std::to_string((unsigned long long)raw.size()) + "," +
															 out + "," + fr));
					} else if (cc.cmd == "quit") {
						ctl->send(u2ctl::ok_reply(cc.id, fr));
						throw towns::Stop{0};
					} else {
						ctl->send(u2ctl::error_reply(cc.id, "unknown cmd '" + cc.cmd + "'"));
					}
				}
			}
#endif	// !_WIN32
		};
	}

	int code = 0;
	try {
		entry(c);
		std::printf("the program returned from its entry\n");
	} catch (const towns::Stop &s) {
		code = s.code;
		std::printf("stopped\n");
	}
	// U2_DUMP_ADDR / U2_DUMP_LEN: dump that range when the run ends, whatever ended it. The existing
	// U2_STOP_DUMP only fires when a stop address is set and hit, which cannot be used to ask "what does
	// this address hold after N frames" without guessing an address that is actually reached. Measured
	// need, 2026-11-09: comparing the monster band and group tables between the port and the original.
	if (const char *da = std::getenv("U2_DUMP_ADDR")) {
		const uint32_t at = (uint32_t)std::strtoul(da, nullptr, 16);
		uint32_t len = 32;
		if (const char *dl = std::getenv("U2_DUMP_LEN")) len = (uint32_t)std::strtoul(dl, nullptr, 16);
		std::vector<uint8_t> buf(len);
		towns::g_towns->read_block(at, buf.data(), len);
		std::printf("memory    %08x:", at);
		for (uint32_t i = 0; i < len; ++i) std::printf(" %02X", buf[i]);
		std::printf("\n");
	}
	// The disk is written once, here, and not per save. A run that dies part way leaves the image exactly as it was
	// found, which is the property that matters when the image is the only copy of somebody's characters.
	if (!g_saves_dir && g_floppy.loaded() && !g_floppy.flush())
		code = code ? code : 1;
	std::printf("after     eax 0x%08x ecx 0x%08x edx 0x%08x ebx 0x%08x\n", c.r[0], c.r[1], c.r[2], c.r[3]);
	std::printf("          esp 0x%08x ebp 0x%08x esi 0x%08x edi 0x%08x eip 0x%08x\n", c.r[4], c.r[5], c.r[6], c.r[7],
				c.eip);
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
		if (const char *cov = std::getenv("U2_COVERAGE")) {
			std::vector<uint8_t> text = read_file(cov);
			std::string line;
			uint32_t marked = 0;
			for (size_t k = 0; k <= text.size(); ++k) {
				if (k < text.size() && text[k] != '\n') {
					line += (char)text[k];
					continue;
				}
				if (!line.empty() && line[0] != '#') {
					unsigned addr = 0, size = 0;
					if (std::sscanf(line.c_str(), "%x %u", &addr, &size) == 2)
						for (unsigned b = 0; b < size && addr + b < image_size; ++b) {
							if (!is_insn[addr + b])
								is_insn[addr + b] = 1, ++marked;
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
			if (now[k] == image[k])
				continue;
			++diff;
			if (!is_insn[k])
				continue;
			++in_code;
			std::printf("patched   guest 0x%06x  %02x -> %02x\n", k, image[k], now[k]);
		}
		std::printf("patched   %u bytes differ, of which %u are inside a decoded instruction\n", diff, in_code);
	}
	// U2_VRAM=1 reports what the machine's own VRAM vector holds at the end of the run. That is the first half
	// of item 7a: if it is empty, the picture is missing because nothing is mapped to it, not because the
	// program drew nothing, and the two are indistinguishable from a frame count.
	if (std::getenv("U2_VRAM")) {
		m.set_count_access(false);	// just in case, before the counters are read
		uint64_t nonzero = 0;
		long first = -1;
		for (size_t k = 0; k < m.vram.size(); ++k) {
			if (!m.vram[k])
				continue;
			++nonzero;
			if (first < 0)
				first = (long)k;
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
	if (g_rdw_lo != g_rdw_hi)
		std::printf("rdwatch   %llu reads in [%08x,%08x)\n", g_rdw_hits, g_rdw_lo, g_rdw_hi);
	if (shot_path) {
		std::vector<uint32_t> rgb;
		int w = 0, h = 0;
		// U2_LAYER=<n> renders one graphics layer alone by masking the layer control byte before the renderer sees
		// it. A composed frame cannot say whether the pixels are missing from VRAM or hidden under the other
		// layer's opaque pixels, and that difference decides whether the fault is in the program or in the
		// composition. Not a permanent feature of the kit: it is the port masking one register for one shot.
		if (const char *only = std::getenv("U2_LAYER")) {
			const int n = std::atoi(only);
			m.video.layer_ctrl = n == 0 ? (uint8_t)(m.video.layer_ctrl & 0x0C) : (uint8_t)(m.video.layer_ctrl & 0x03);
			std::printf("shot      rendering layer %d alone, layer_ctrl masked to %02x\n", n, m.video.layer_ctrl);
		}
		m.render(rgb, w, h);
		if (w > 0 && h > 0 && towns::write_png(shot_path, rgb, w, h))
			std::printf("shot      %s (%dx%d)\n", shot_path, w, h);
		else
			std::printf("shot      %s: the machine has no frame to render\n", shot_path);
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
	// U2_VIDEO=1 prints the display state that decides what is on screen: the CRTC registers, the layer control byte
	// and the sprite controller's registers. This exists because the copyright notice's box is drawn while the text is
	// not, and the question is whether the second layer is enabled and where it points: a page that is drawn but not
	// enabled and a page that is enabled but never drawn look identical in a screenshot and different here.
	if (std::getenv("U2_VIDEO")) {
		std::printf("video     crtc:");
		for (int i = 0; i < 29; ++i)
			std::printf(" %04x", m.video.crtc[i]);
		std::printf("\nvideo     vreg:");
		// vreg is 2 bytes (0x448/0x44A). A first version of this looped to 16 and printed whatever followed it in
		// memory, which was the environment strings, so the bound is stated here rather than assumed.
		for (int i = 0; i < 2; ++i)
			std::printf(" %02x", m.video.vreg[i]);
		std::printf("\nvideo     layer_ctrl %02x  display_page %d  sprite page %d busy %d regs", m.video.layer_ctrl,
					(int)m.video.display_page, (int)m.sprite.page, (int)m.sprite.busy);
		for (int i = 0; i < 8; ++i)
			std::printf(" %02x", m.sprite.reg[i]);
		std::printf("\n");
	}
	// U2_VRAM_DUMP=<path> writes the whole VRAM array raw, so two frames can be diffed to find WHERE a drawing went
	// rather than whether the picture looks right. This exists because the text in the copyright notice is missing
	// from the port and the picture cannot say whether that is a renderer gap or the program never writing it: a byte
	// diff between the frame before the notice and the frame during it answers that directly.
	if (const char *vd = std::getenv("U2_VRAM_DUMP")) {
		if (FILE *f = std::fopen(vd, "wb")) {
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
		static const char *ramp = " .:-=+*#%@";
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
			while (!line.empty() && line.back() == ' ')
				line.pop_back();
			std::printf("screen    %s\n", line.c_str());
		}
	}
	if (const char *dump = std::getenv("U2_DUMP")) {
		uint32_t at = (uint32_t)std::strtoul(dump, nullptr, 16);
		uint8_t buf[32];
		m.read_block(at, buf, sizeof buf);
		std::printf("memory    %08x:", at);
		for (unsigned char ch : buf)
			std::printf(" %02x", ch);
		std::printf("\n");
	}
	// U2_MEM_DUMP=<lo>:<len>:<path> writes a range of guest memory to a file so it can be diffed against the same
	// range read off the machine with `MD 0:<linear>`. Thirty-two bytes at a time is enough to check one buffer and
	// useless for finding an empty table, and the difference between a machine that draws text and a port that does
	// not has to be in the data, because the code path is the same call from the same site.
	if (const char *spec = std::getenv("U2_MEM_DUMP")) {
		std::string s(spec);
		size_t c1 = s.find(':'), c2 = c1 == std::string::npos ? std::string::npos : s.find(':', c1 + 1);
		if (c1 == std::string::npos || c2 == std::string::npos) {
			std::fprintf(stderr, "U2_MEM_DUMP: '%s' is not <lo>:<len>:<path>\n", spec);
		} else {
			uint32_t lo = (uint32_t)std::strtoul(s.substr(0, c1).c_str(), nullptr, 16);
			uint32_t len = (uint32_t)std::strtoul(s.substr(c1 + 1, c2 - c1 - 1).c_str(), nullptr, 16);
			const std::string path = s.substr(c2 + 1);
			std::vector<uint8_t> buf(len);
			m.read_block(lo, buf.data(), len);
			FILE *f = std::fopen(path.c_str(), "wb");
			if (!f) {
				std::fprintf(stderr, "U2_MEM_DUMP: cannot write %s\n", path.c_str());
			} else {
				std::fwrite(buf.data(), 1, len, f);
				std::fclose(f);
				std::printf("memdump   %08x..%08x -> %s (%u bytes)\n", lo, lo + len, path.c_str(), len);
			}
		}
	}
	return code;
}
