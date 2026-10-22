# AGENTS.md

Guidance for anyone (agent or human) working in this repository.

## Goal

The goal is **Ultima II extraction**.

Extract as much useful data and artwork out of the FM Towns release of Ultima
II (`ENCHANT.EXP`) as the disc will give up. That means every image, every
sound effect, every map, every string, every monster, and eventually the
palette so the art is not condemned to greyscale.

Everything else is subordinate to that. Reimplementation is not the goal. It
is a possible later use for good extracted data, and it is not a reason to
extract anything, nor a reason to defer extraction.

Two rules shape how the work is done:

- Validate against the others. `DARKNESS`, `EXODUS`, `TMENU` and the three
  demos are free corroboration. A format claim that works on U2 and also holds
  on `EXODUS` is worth far more than one that only fits U2. Use them to
  confirm, not to distract.
- Generalise the tooling where it costs nothing. Extraction code written for
  U2 should not be hardcoded in ways that would break on another title. That
  is good engineering hygiene, not a second project. The payoff is that when
  the U2 work is done, the same machinery can be pointed at other FM Towns
  discs in `fmtownscdcollection` without a rewrite. That is a side benefit,
  never the reason for a decision.

Working order from here:

1. Data and artwork extraction for U2. This is the job.
2. Format documentation. Every format gets a record in `FINDINGS.md`, because
   an undocumented extraction is not repeatable.
3. Code understanding, but only where it unlocks something extraction cannot
   reach. The palette is the standing example.

## Read these first

| File | Why |
|---|---|
| `FINDINGS.md` | Every probe tried, with measurements and verdicts. **Read before proposing any investigation.** Five palette approaches are already documented as failed. |
| `README.md` | How to run the game, and how to run the extractors. |
| `tools/README.md` | What each tool does and how to invoke it. |

## The central lesson of this project

**Byte-plausible is not verified.** Three separate wrong conclusions were
reached and corrected in the first session:

- "This is X68000" when it is FM Towns. The `GP0:3` partitioning byte was
  over-read as a platform marker.
- "Map files render as terrain" when `MAP2_1` is ASCII character data. The
  renders were character codes displayed as greyscale.
- "`.SND` has a 32-byte trailer" when the payload runs to EOF.

Each looked convincing. Each was wrong. So:

- Measure before asserting. No claim about a format goes in a doc without a
  measurement that distinguishes it from its alternatives.
- State what a measurement does not prove. The cross-diff found a shared
  block and it turned out to be the float library, not graphics.
- Prefer exact arithmetic. The reliable signals on this disc are byte
  counts. `33280 == 320*104` and `filesize == 32 + u32@12` are proofs.
  Plausible-looking images and plausible-looking statistics are not.
- Record failures. A failed probe is worth as much as a success, because it
  stops the next person repeating it. `FINDINGS.md` exists for this.

## Hard-won technical constraints

These will bite immediately if forgotten.

### The MP/P3 loaders

The `.EXP` files are Phar Lap DOS extender executables in two flavours:

- `DARKNESS`, `ENCHANT`, `EXODUS`: signature **`MP`**, flat image. The header is
  the documented 30-byte layout and `lastPage`/`blocks` reproduce the exact file
  size for all three. Entry point in `EIP` at offset `0x14`.
- `TMENU`: signature **`P3`**, extended format, 384-byte header.

**The payload does not disassemble as one flat 32-bit stream.** Linear `ndisasm`
from `0x75f` produced 501,275 lines, a large fraction misaligned, and generated
false "port writes" and false "shared code" blocks. This is why every
byte-scanning palette probe failed. Do not trust any figure derived from linear
disassembly of this binary. Anything that needs real code/data separation
requires a proper `MP`/`P3` loader first.

### Symbols exist

`TMENU.EXP` contains a **`SYM1`** symbol table at file offset `0x33a92`, with
thousands of records including `EGB_palette`, `EGB_color`, `EGB_graph`,
`Palette_data1`, `Common_screen_data1` through `11`, and `Color0` / `Color2` /
`Color14`. This is the single largest lever available and it is not yet parsed.

Record framing is **not** settled. It is not a fixed stride, and neither
`[u8 len][name][u32 val]` nor `[u32 val][u8 len][name]` walks more than one
record. The visible structure in the hexdump is
`... 4d 00 00 00 00 | 94 38 04 00 | 0c 00 00 00 | 0a | ACT_HANDLE | f3 d2 00 00 01 00 | 0a | ACT_RC_ADDR ...`,
which suggests `[u32 value][u8 len][name][pad to 4][u32 type]`, but a walk with
that assumption terminates early. **Do not assume the framing. Derive it and
validate that the walk consumes the blob exactly.**

`DARKNESS`, `ENCHANT`, `EXODUS` and `UT3DEMO` **do not** carry `SYM1`. Only
`TMENU.EXP` does, and `TMENU` is Fujitsu's launcher, not Origins' game code. So
the symbols give you the **Fujitsu library layer by name**, not the game's own
functions. That is still very valuable, because the graphics and sound routines
the games call are Fujitsu's. It does not give you U3's internal variables.

### Colour

The artwork is 4-bit palette indices. The palette is **not** in any asset file
and no `PAL`/`palette` string appears in `ENCHANT.EXP`. All current output is
greyscale, and that is a documented limitation, not an oversight. The `SYM1`
symbols above are the most promising route in.

## Environment

### The emulator is available now

`tools/vendor.sh` fetches Tsugaru and the FreeTowns ROMs into `vendor/`. Both are
gitignored. `tools/debug-session.sh` drives the machine headless, which works over
SSH and needs no monitor: Tsugaru requires a window, so the script reuses the
desktop session's Xwayland display and auth file. If a future session finds
`DISPLAY` unset, look at how that script finds it rather than concluding the
emulator is unusable.

This changes what is practical. Runtime inspection is now cheap, so before
attempting static analysis of a value that only exists at runtime, check whether
`PRI PALETTE`, `PRI CRTC`, `BRKON MEMW` or a breakpoint answers it faster. The
palette cost five failed static probes and would have been one console command.

- Host `ai.lan`, Bazzite. Check `hostname` before sysadmin work.
- `node` for all tooling. No npm dependencies. `ndisasm` present via brew.
- Java 25 present (Ghidra would run). No Ghidra, Reko, or radare2 installed.
- Scratch files go to `/var/tmp`, **never** `/tmp`.
- The game itself runs in Tsugaru via `run.sh`. Not required for extraction.

## Repository conventions

### Ground truth over guessing

`ENCHANT.EXP` embeds its own asset paths (`Q:\GRAPH\MAP2_1.TIF`,
`A:\ROSTER1.UT2`). When a file list is needed, **read it out of the binary**
rather than inferring from filenames. This is how the U2 asset set was confirmed.

### Evidence lives in FINDINGS.md

New investigation, new section. Format per entry:

```
**Tried:** what was attempted and why
**Measured:** the numbers, not a summary
**Verdict:** POSITIVE / NEGATIVE / OPEN, and what it rules out
```

Corrections go in as corrections. Superseded claims get marked as superseded
rather than quietly deleted, because the history of being wrong is useful.

## Copyrighted material never enters git

This is a standing rule with no exceptions and no judgement call.

**What is copyrighted here:** the disc images, the floppy image, the executables,
all artwork, all audio, the ROM sets, and anything extracted from them. The game
is commercial software still in copyright. This repository distributes
**scripts, tests and documentation only**.

**Why it is absolute:** committing a copyrighted file is not recoverable. Git
history is permanent, a force-push does not un-distribute what has already been
cloned, and the mistake cannot be undone by the person who made it. The cost of
an over-broad ignore rule is that someone un-ignores one line. The cost of
committing a retail game is a distributed copyright violation. Bias hard toward
ignoring.

Rules that follow:

- Everything copyrighted is in `.gitignore`. If you find something copyrighted
  that is not covered, add the rule **before** doing anything else.
- Never `git add -f`. The force flag exists to defeat the only protection there
  is. If a file is ignored and you think it should be tracked, that is a
  conversation, not an override.
- Extracted output is copyrighted too. `extracted/`, `analysis/` and anything
  derivable from the disc stays out. The extraction **code** is committed, the
  extraction **product** is not.
- Do not paste game text, dialogue tables, or long strings from the binaries
  into documentation. Schema strings and format names (`SHAPE=%d`, `EGB_palette`)
  are protocol and are fine. Dialogue and story text are not.
- Extension matching is a safety net, not a guarantee. Gitignore patterns are
  case-sensitive, so mixed-case extensions slip through naive rules. The file
  has a case-insensitive block for this reason. Test any new rule against
  capitalised and mixed-case variants before trusting it.
- Before committing, run `git status --ignored` and confirm the expected files
  are among the ignored set rather than the tracked set.
- A verification harness asserting the presence of copyrighted files is fine.
  The harness must read them from disk and must not bundle them.

The test is not "is this file small enough to sneak in". The test is "would a
stranger cloning this repository receive a copy of the game".

### Reproducibility is the hard requirement

Every result in this repository must be reproducible by a stranger who has done
nothing but download the `.zip` from the Internet Archive. That is the standard.
Not "it worked on my machine", not "the author has the disc already".

Concretely, that person must be able to:

1. Download
   `FM-Towns CD/Ultima Trilogy 1-3 (1990)(Origins)(Jp-En)[+UserDisk].zip` from
   `archive.org/details/fmtownscdcollection`.
2. Unpack it into this directory, producing the five files listed in
   `README.md` section 1.
3. Run `node tools/verify.js` and get the same pass/fail verdict as everyone
   else.
4. Run the extractors and get byte-identical output, verified by checksums.

So every non-obvious fact needs all three of: a script that derives it, a test
that confirms it, and a paragraph that explains it.

- **No result may depend on unshared state.** Not a temp file, not a cached
dump, not something produced in an earlier conversation. If a script needs an
intermediate, it builds it from the disc each run.
- **No result may depend on manual steps.** If a human had to hand-edit a byte,
  that edit must become code.
- **Every extraction is checksummed.** `tools/verify.js` records expected
  SHA-256 sums for every output. A mismatch means either the disc is a different
  rip or a decoder changed, and both need to be known.
- **Assertions replace prose where possible.** "`MAP2_1` is 33,280 bytes" is a
  claim. `assert(size === 33280)` in `verify.js` is a fact that stays true or
  fails loudly.

If something cannot yet be reproduced from the zip alone, it is not a finding.
Write it in `FINDINGS.md` as OPEN and say what is missing.

A second person should be able to reproduce the disc identity independently.
`verify.js` therefore checks file sizes, MD5 sums of the source files, and the
ISO volume label, so a different rip of the same game is detected rather than
silently producing different results.

### Scripts

- Every extraction step lives in `tools/` and is committed. Nothing is done by
  ad-hoc one-liners that get thrown away.
- Shared format logic goes in `tools/cd.js`. Do not duplicate a decoder.
- Use `writePNG` / `writeWAV` / the decoders from `cd.js`.
- Scripts must print what they did, including counts and any mismatch.
- Write derived artefacts to `extracted/` or `analysis/`, both gitignored.
  Never commit game data, ROMs, or extracted assets.
- `tools/verify.js` is the entry point for anyone checking this work. It must
  stay dependency-free and must not require arguments.

### Editing files

- Never edit a file with a script. Use the `edit` tool. A `replace()` that
  silently no-ops and a successful replace are indistinguishable in output.
- If a script must write a file, read the changed text back to verify. Not a
  line count, not `grep -c` on a common word.
- Check `node --check` after editing any JS.

### Git

- Commit in logical units. `git init` is already done, branch `main`.
- Do not commit the disc images, the `.hdm`, `emulator/`, `saves/`,
  `extracted/`, or `analysis/`.
- Do not push anywhere without being asked.

### Style

- No em-dashes, no semicolons, no bold-at-start-of-bullet, no emojis.
- Verify with a grep for em-dashes and semicolons before committing docs.

## Known-good findings

Do not re-derive these. Everything here is backed by a measurement in
`FINDINGS.md`.

| Fact | Confidence |
|---|---|
| FM Towns 2HD 1,261,568-byte floppy, Towns OS, `IPL4` boot | High |
| 8-track disc: track 1 MODE1 data, tracks 2-8 CD-DA | High |
| Use `.ccd` not `.cue` (PREGAP ambiguity, documented by Tsugaru's author) | High |
| Written in C, MetaWare High C, Phar Lap extender | High |
| `DARKNESS`/`ENCHANT`/`EXODUS` are `MP` flat images, header parses exactly | High |
| `TMENU.EXP` is `P3` extended format, not `MP` | High |
| `ENEMY2` = 65 tiles of 32x32 4bpp packed at 512 B | High |
| `PLAYER` = 128 tiles of 16x16, 1 byte per pixel | High |
| `DUNMON1/2/3` = 1,664 / 416 / 104 tiles of 16x16 packed | High |
| Title art is 4bpp packed, 2 pixels per byte | High |
| `MAP2_1/2/3` is ASCII character data, not a bitmap | High |
| `.SND` = 32-byte header, payload to EOF, length at offset 12 | High |
| `.EUP` = EUPHONY voice tables, no colour or audio payload | High |
| `UT3/*.MP3` and `*.DG3` are map data, not MPEG audio | High |
| No palette in any asset, no `PAL` string in `ENCHANT.EXP` | High |
| `TMENU.EXP` has a `SYM1` symbol table naming the Fujitsu layer | High (framing open) |
| The four game binaries carry no `SYM1` | High |

## Platform versus U2-specific

Before writing a decoder, decide which of these it is. Marking something
platform-wide when it is U2-only produces over-general code that breaks on the
next title. Marking something U2-only when it is platform-wide means solving
the same problem repeatedly.

This list exists to keep the tooling honest, not to justify extra work. Nothing
here is a reason to defer a U2 extraction.

Almost certainly the platform, so write it generically and expect it everywhere:

- The `MP`/`P3` containers and the High C toolchain. Every Origins FM Towns
  title of this era is likely built the same way.
- TIFF-with-lying-headers as the artwork container. The pattern of a stale or
  bogus geometry tag appears across all three games here.
- 4bpp art in two layouts: packed (2 px per byte) for pictures, and the
  sheet/TIFF-strip convention for sprites.
- `.SND` and `.EUP` audio. `.EUP` is the Fujitsu EUPHONY driver layer, which is
  a platform component rather than anything Origins wrote.
- CD audio for music, and the `Q:\` / `A:\` drive conventions.
- Assets named after their content (`MAP2_1`, `PLAYER`, `CHEST`) and referenced
  by literal path strings embedded in the executable. That referencing habit is
  what makes this tractable and it likely repeats across titles.

U2-specific. Do not try to generalise these, but do document them:

- The exact asset set, the roster format (`RACE=%c`, `SKIN=%d`, `SPID=%d`), the
  U2 inventory list (`ANKH`, `RED_GEM`, `TRI_LITHIUM`), and the `WORLD1-4.UT2`
  save layout.
- `MAP2_1/2/3` as ASCII character maps. U3 uses fixed-size binary `.MP3`
  instead, so the U2 map format is *not* the platform map format.
- The 65-tile `ENEMY2` bank size.

Unknown either way, so do not assume: whether the palette is per-game data or a
shared Fujitsu table. This matters directly for U2. If `EGB_palette` is a
library routine reading a per-game table, then U2 has its own palette to find
and the search is on U2's data. If it is one shared table, U2 gets its colours
for free from a table that is not U2's. Either way U2 ends up in colour, but
the search is different, so resolve this before hunting.

## Open problems, cheapest first

All of these are U2 extraction work. Some are marked *(validates)*, meaning
they use the other binaries as a cross-check rather than as separate work.

1. **Confirm the palette in-game.** `PRI PALETTE` now works headless
   (FINDINGS 6.15) and gave a 16-colour table from the running machine. Those
   values were captured about 15 seconds into boot and look like the BIOS
   default set. Re-run `tools/debug-session.sh` once U2 is showing a coloured
   screen and compare. If the palette changes, that is U2's real table and the
   index mapping is solved. If it does not, use `BRKON MEMW` or a breakpoint at
   `EGB_palette` (`0x103c84` in `ENCHANT.EXP`) to catch `[edi+8]` when the game
   installs its own. Everything needed to do this is now vendored and scripted.
2. **Monster and animation table.** `ENEMY2` holds 65 tiles in pairs. Find the
   table indexing `SPID` so each creature can be named and its frames grouped.
   *(validates)* compare the corresponding table shape in `EXODUS`.
3. **U2 map format.** `MAP2_1/2/3` is character data. Establish the cell
   geometry and how `\UT2\MAP.MP2` relates to it.
4. **U2 roster and save format.** `ROSTER1.UT2` and `WORLD1-4.UT2`. The format
   string in `ENCHANT.EXP` lists every field, so the schema is already known,
   the byte layout is not.
5. **Strings.** `ENCHANT.EXP` holds the game text including the Japanese and
   English dialogue tables. Not yet extracted in usable form.

## What not to do

- Do not install Ghidra, Reko, or IDA and hand them a flat binary at a guessed
  base. Every address will be systematically wrong in a way that looks like a
  finding. Reko has no Phar Lap loader, and there is a known upstream issue
  reporting exactly this failure on FM Towns `.EXP` files.
- Do not convert the disc to ISO or bincue. Audio track alignment is lost.
- Do not treat greyscale output as a bug. Its cause is documented.
- Do not repeat a failed probe listed in `FINDINGS.md` without a new method.
