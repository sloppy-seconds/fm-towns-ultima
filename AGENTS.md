# AGENTS.md

Guidance for anyone (agent or human) working in this repository.

## Goal

**The end goal is reimplementation of Ultima II.** The extraction phase exists
to build the strongest possible corpus of data, assets and rules first, so that
reimplementation is a translation exercise rather than a guess.

Extraction is therefore **in service of** reimplementation, not an endpoint.
That distinction has been wrong in this file for a long time and it mattered:
it licensed reading code only where extraction was blocked, which is why 26 of
the game's 738 routines are documented and the rest are not.

What the corpus needs to contain:

- every image, sound effect, map and string the disc will give up
- every data table: monsters, items, spells, towns, shops, NPC assignment
- every rule, **as arithmetic**: combat, movement, time, magic, economy
- the control flow that ties them together: what drives a turn, what drives
  the main loop

A fact nobody can reproduce is not part of the corpus. Every finding needs a
script that derives it, a test that confirms it, and a paragraph that explains
it.

Two rules shape how the work is done:

- Validate against the others. `DARKNESS`, `EXODUS`, `TMENU` and the three
  demos are free corroboration. A format claim that works on U2 and also holds
  on `EXODUS` is worth far more than one that only fits U2. Use them to
  confirm, not to distract.
- Generalise the tooling where it costs nothing. Extraction code written for
  U2 should not be hardcoded in ways that would break on another title. That
  is good engineering hygiene, not a second project.

Working order from here, revised for the real goal:

1. **The call graph, with names.** 738 routines is tractable grouped, and 247
   are called three or more times. Identify the top-level ones. Without this a
   reimplementation has no skeleton.
2. **Read the routines on that skeleton** in the order a player meets them:
   create, move, enter a town, fight, buy, cast, save. Each gets a page with
   its arithmetic.
3. **Data and artwork extraction**, including the tables the skeleton names.
4. **Format documentation.** Every format gets a record in `docs/`.
5. **Runtime confirmation**, where reading cannot settle a question.

See [docs/reimplementation-gap.md](docs/reimplementation-gap.md) for the
measured distance and what is still missing.

## Read these first

| File | Why |
|---|---|
| `docs/` | Every probe tried, with measurements and verdicts, split by subject. **Read before proposing any investigation.** Five palette approaches are already documented as failed. |
| `README.md` | The GitHub front door. How to set up, play, make a character, run the tools. |
| `docs/index.md` | The docs site homepage. Scope, what is established, reading order. Not a copy of the README. |
| `docs/quickstart.md` | Three routes to playing. The thing most visitors actually want. |
| `tools/README.md` | What each tool does and how to invoke it. |
| `web/README.md` | The browser editor, for someone who arrived there and no further. |

### Documentation lives in four places, and changes go in all the relevant ones

`README.md`, `docs/index.md` and `web/README.md` are **separate documents serving
separate audiences**, not copies of each other. That is deliberate and it is also
a trap, because the same facts appear in several.

When something changes, ask which of these carry it:

| changed | update |
|---|---|
| how to set up or run anything | `README.md` and `docs/quickstart.md` |
| the project's scope, or what is established | `README.md`, `docs/index.md`, `web/README.md` |
| a link to the site, editor or repo | all three of those |
| a format finding | `docs/` only, plus `tools/verify.js` if assertable |
| a platform limitation | `README.md`, `docs/quickstart.md` |
| an item's state, or the order of work | `docs/plan.md`, then whichever of `docs/open-questions.md` / `docs/overnight.md` listed it |
| any count | the one page that owns it, then grep for the old number |
| a finding that closes a question | the closed list in `docs/plan.md`, and the question's own page |

### Planning documents have defined jobs

Three documents carry the plan and confusing their jobs is what causes drift. **`docs/plan.md` is the
plan of record.** `docs/open-questions.md` and `docs/overnight.md` are views of it. If they disagree,
`plan.md` wins and the other is the bug.

Item state uses exactly four words, bolded at the top of the item: **OPEN**, **DONE**, **CUT**,
**NEEDS A DECISION**. No synonyms. `DONE` obliges a page that records the result, an assertion in
`tools/verify.js` where assertable, and a line saying what is now known. `NEEDS A DECISION` names the
options and what each costs, because several items sat for sessions described as "untouched" when they
were really waiting on a choice nobody had framed.

**A finding and an item are different things.** A finding is a measured fact and lives in a subject page
with evidence and a `verify.js` assertion. An item is a unit of remaining work and lives in `plan.md` with
a state and a stopping rule, linking to findings rather than restating them. Keeping those separate is
what makes a single plan file work. Reasoning and measurements: `docs/plan-structure.md`.

**After every session, ask "what did this session make false?"** Every count that drifted here was
invalidated by work done in the same session that wrote it. Working forwards from a new finding to its
consequences is how a session closes cleanly.

Full process, including the five mechanical checks to run before committing: `docs/plan-process.md`.

Currently duplicated and easy to let drift: the archive.org link, the editor and
docs URLs, the scope paragraph, and the untested-platform caveat. If you touch
one, grep for the others.

A fact stated in the README but not in `docs/` is fine. The same fact stated
differently in two places is a bug waiting to be found.

### Do not claim more platform support than has been tested

Everything here was built on Linux and **only Linux has run it**. `vendor.sh`
now detects Windows and macOS and fetches the right emulator build, and the
executable names are handled, but no Windows or macOS machine has ever run this
code.

The specific trap: the scripts are `.sh` and do not run in `cmd` or PowerShell.
Saying "one command, on any platform" about `./tools/vendor.sh` is false on
Windows, and that exact wording was written and then corrected.

When describing platform support, separate the two questions, because they have
different answers:

- **the container**, which is Linux inside and plausibly portable
- **the shell scripts**, which need a bash environment on Windows

Both must be marked untested. The browser editor is the only component that is
genuinely cross-platform, because it is a web page.

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
  stops the next person repeating it. `docs/` exists for this.

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

### Interactive access

`tools/container-run.sh` runs Tsugaru inside podman with Xvfb, x11vnc, noVNC
and a supervisor, so the game is playable from any browser at
`http://<host>:6080/vnc.html` and drivable over HTTP at `http://<host>:8080/api`.
This is how to reach the running game when there is no local display, which is
the normal case over SSH.

Three host specifics the script encodes because each failed silently first time:
podman requires sudo here, SELinux is enforcing so bind mounts need `:z` or the
container gets `Permission denied` on every host directory, and the Tsugaru
window is titled `FM Towns Emulator - TSUGARU` with a 640x496 geometry rather
than 640x480, so matching on 640x480 finds nothing.

### Reading the screen without vision

`GET /api/screen?mode=stats` returns a colour census, which answers "is this
screen in colour yet" without any image interpretation. `mode=ascii` gives a
luminance ramp for layout and `mode=text` a character grid for reading menus and
dialogue. Use these rather than asking for a screenshot and hoping.

The palette command needs the `PRI` prefix: `PRI PALETTE`. Bare `PALETTE`
returns "Do what?".

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

### Evidence lives in docs/

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
Write it in `docs/` as OPEN and say what is missing.

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
`docs/`.

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
| The art uses palette indices 0-7 only, and those eight colours are confirmed | High |
| `TMENU.EXP` has a `SYM1` symbol table naming the Fujitsu layer | High (framing open) |
| The four game binaries carry no `SYM1` | High |
| Every file `ENCHANT.EXP` opens is extracted (23 graphics, 14 sounds) | High |
| A 1232 KB `-GENFD` disk is a real FM Towns disk. The other sizes are IBM PC | High |
| Ultima I and III write save files to floppy in Tsugaru | High |
| Ultima II saves to a formatted disk. Saves work end to end | High |
| U1 save survives shutdown and reloads, confirmed by playing the character | High |
| U2 writes `ROSTER1.UT2` (3,657 B) and `WORLD1.UT2` (68,096 B) | High |
| A blank generated 1232 KB disk is a valid save disk. It was never the problem | High |

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
   (`docs/palette.md` 6.15) and gave a 16-colour table from the running machine. Those
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

- **A decompiler is now allowed, with conditions.** The old rule banned Ghidra,
  Reko and IDA outright because the base was in doubt. That has changed: the base
  is proved to be 0, the `MP` header declares `relocCount = 0` so nothing needs
  fixups, and the header arithmetic reproduces the file size exactly. A test import
  at base 0 agreed with this project's own tooling on all seven established
  function addresses and on the `0xef4bb` false positive. See
  `docs/ghidra-viability.md`.

  **The condition: decompile only from an entry point already established by
  `tools/funcs.js` or `tools/cfgwalk.js`, and verify any address against
  `node tools/cfgwalk.js --check <addr>` before trusting it.** The failure mode
  the old rule guarded against was silent systematic error. That is now detectable
  in about two seconds per address, so the blanket ban is no longer the right
  instrument.

  **It under-decodes badly without seeds**: 25,728 instructions against this
  project's 79,470 over the same bytes, because a raw import with no entry point
  seeds only from what it can find by scanning. Use it to read code, not to find
  it.
- Reko still has no Phar Lap loader, and there is a known upstream issue reporting
  exactly this failure on FM Towns `.EXP` files. Do not reach for Reko.
- Do not convert the disc to ISO or bincue. Audio track alignment is lost.
- Do not treat greyscale output as a bug. Its cause is documented.
- Ultima II saves work. A formatted FM Towns floppy is fine and was never the
  problem. See `docs/` 8.5. What went wrong for most of one session was
  that tests were run against disks whose contents had not been checked, and
  negative results were built on top of each other without re-verifying the
  input.
- Never trust a disk-state test without first dumping the disk. Confirm what is
  actually on it with the root directory and FAT before drawing any conclusion
  from what a game said. A stale copy, a partial save or the wrong slot will
  look exactly like an emulator bug.
- Do not try MAME as a way around Ultima II problems. It works as an emulator
  (`tools/mame-run.sh`) but its `fmtowns` driver is `status="preliminary"` and
  the pointer dies at the CD launcher, so the games cannot be reached. It also
  needs a real Fujitsu ROM dump, since the FreeTOWNS clean-room ROMs all fail
  CRC verification. See `docs/` 8.4.
- Do not use the FreeTOWNS ROMs with MAME. All four CRC32s mismatch, and
  `FMT_DIC.ROM` is byte-identical to `FMT_F20.ROM`, which is what a substitute
  build looks like rather than dumped silicon.
- Do not use `-GENFD` with 640, 720 or 1440 and expect an FM Towns disk. Only
  1232 produces `IPL4` with 1024-byte sectors. The other three are IBM PC
  formats. The Tsugaru GUI offers the same four and produces identical bytes.
- Do not repeat a failed probe listed in `docs/` without a new method.
