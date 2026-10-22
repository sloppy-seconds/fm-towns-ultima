# AGENTS.md

Guidance for anyone (agent or human) working in this repository.

## Goal

Extract as much useful data and artwork as possible from the FM Towns release
of **Ultima Trilogy I-II-III** (1990), with the longer-term hope of reverse
engineering and reimplementing the games.

The target has moved to **Ultima III (Exodus)**, which is the first game with a
real data model: a tile-based world, fixed-size map files, and a named symbol
table. U2 work is complete enough to serve as a worked example of the method.

Working order from here:

1. Data and artwork extraction. Cheap, verifiable, useful even if the RE stalls.
2. Format documentation. Every format gets a record in `FINDINGS.md`.
3. Code understanding. Only where it unlocks something extraction cannot reach.
4. Reimplementation. A separate concern, not started.

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

### Scripts

- Every extraction step lives in `tools/` and is committed. Nothing is done by
  ad-hoc one-liners that get thrown away.
- Shared format logic goes in `tools/cd.js`. Do not duplicate a decoder.
- Use `writePNG` / `writeWAV` / the decoders from `cd.js`.
- Scripts must print what they did, including counts and any mismatch.
- Write derived artefacts to `extracted/` or `analysis/`, both gitignored.
  Never commit game data, ROMs, or extracted assets.

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
| `ENEMY2` = 65 tiles of 32x32 4bpp packed at 512 B | High |
| `PLAYER` = 128 tiles of 16x16, 1 byte per pixel | High |
| `DUNMON1/2/3` = 1,664 / 416 / 104 tiles of 16x16 packed | High |
| Title art is 4bpp packed, 2 pixels per byte | High |
| `MAP2_1/2/3` is ASCII character data, not a bitmap | High |
| `.SND` = 32-byte header, payload to EOF, length at offset 12 | High |
| `.EUP` = EUPHONY voice tables, no colour or audio payload | High |
| `UT3/*.MP3` and `*.DG3` are map data, not MPEG audio | High |
| No palette in any asset, no `PAL` string in `ENCHANT.EXP` | High |
| `TMENU.EXP` has a `SYM1` symbol table | High (framing open) |

## Open problems, cheapest first

1. **Parse `SYM1`.** Largest payoff. Derive the framing, validate the walk
   consumes the blob exactly.
2. **Identify `EGB_palette` / `Palette_data1`.** With symbols resolved, go
   straight to the address rather than scanning. Verify by rendering art in
   colour against the reference image.
3. **Ultima III data formats.** `UT3/*.MP3` (4,096 B) and `*.DG3` (2,048 B) are
   fixed-size and named after U3 towns. `UT3/AMBROSIA.MP3` etc. Look for the
   `MAPTYPE` equivalents in `EXODUS.EXP` as was done for `ENCHANT.EXP`.
4. **`LEVEL`/tile graphics for U3.** Which `GRAPH/*.TIF` files `EXODUS.EXP`
   opens. Extract the path strings first.
5. **Monster/animation table.** `ENEMY2` has 65 tiles in pairs. Find the table
   that indexes `SPID`.
6. **`MP`/`P3` loader.** Only worth building when something needs correct
   disassembly. `SYM1` may make it unnecessary.

## What not to do

- Do not install Ghidra, Reko, or IDA and hand them a flat binary at a guessed
  base. Every address will be systematically wrong in a way that looks like a
  finding. Reko has no Phar Lap loader, and there is a known upstream issue
  reporting exactly this failure on FM Towns `.EXP` files.
- Do not convert the disc to ISO or bincue. Audio track alignment is lost.
- Do not treat greyscale output as a bug. Its cause is documented.
- Do not repeat a failed probe listed in `FINDINGS.md` without a new method.
