# tools

Reusable extraction and analysis scripts.

**Dependencies, and they differ by job.** The verification gates (`verify.js`,
`checkall.js`, `check-disc.sh`) need Node and nothing else, deliberately, so anyone
can confirm the findings after unzipping the disc. The analysis and decoding tools
need a Python virtual environment with Capstone, because Capstone is the decoder and
its only binding with operand detail is Python:

```bash
./tools/decode-setup.sh          # once, creates tools/.venv (gitignored)
./tools/decode-setup.sh --check  # confirm it is present
```

`ndisasm` and GNU `objdump` are still used for raw bytes and byte offsets, and
`objdump` as an independent cross-check on operand classification. The rule that
came out of that work is in `docs/tooling-policy.md`: **never parse disassembler text
to answer a question about an operand.**

All of them locate the disc `.img` automatically by looking beside the tools
directory, so run them from the repo root.

| Script | What it does |
|---|---|
| `check-disc.sh` | **Start here if you only want to play.** Confirms your files match the expected rip. Plain POSIX shell, no Node. |
| `verify.js` | Reproduces every claim in [the docs](docs/), 107 assertions. Needs Node. Start here if you are working on the extraction. |
| `pharlap.js` | Loads Phar Lap `MP` and `P3` executables. Resolves symbol addresses to file offsets, disassembles at a symbol, dumps the flat load image. |
| `mirror.js` | Derives and verifies the mirrored runtime mapping for the top of the image: `stateAddress = 0x4392d2 - imageOffset`. |
| `overlaymap.js` | Two-state diff. Proved nothing is swapped between the death and title screens. |
| `relocate.js` | Probes each image region for its real runtime address. Its first version missed the mirrored region because it assumed one base. |
| `statefind.js` | Finds the image base in a savestate by long-run matching. Short probes give false matches through fill patterns. Establishes `0x762d2`. |
| `statesegments.js` | Classifies each block of the image as identical, zeroed, or different at runtime. |
| `statedump.js` | Compares the file against the runtime image at specific addresses. Its first version used a probe that does not survive; `statefind.js` supersedes its base-finding. |
| `overlays.js` | Maps which image regions are resident, and tests whether the binary is overlayed. |
| `extractstrings.js` | Extracts every string reachable from a renderer call site, classified by encoding. Writes `extracted/strings.json`, which is gitignored. |
| `msgtable.js` | Tests whether register-supplied string arguments come from constant-address loads. Found zero, which is a real negative. |
| `structmap.js` | Enumerates the fields of a strided array, searching both `[reg+disp32]` and `[base+index+disp]` encodings. The second form is what made the object array readable. |
| `sndparse.js` | Establishes the `.SND` header layouts. Offset 12 equals `filesize - 32` in 15 of 15 files. |
| `sndrate.js` | Tests whether the `1960` rate field can be a frequency, by computing effect durations. |
| `fontsheet.js` | Tests whether a greyscale PNG is a character sheet, by gutter and periodicity analysis. |
| `fontgrid.js` | Finds the cell grid in a character sheet, and prints a coarse ASCII view. Used to rule out `GAI.TIF` as a font. |
| `ebsuffix.py`, `ebfreq.py`, `ebposition.py`, `ebrefine.py`, `ebgojuon.py` | The five probes that produced `0x74` = `。` and ruled out gojuon ordering. |
| `msgcallers.js` | Walks back from every call to the text renderer to find where the string pointer comes from. Found 123 literal string call sites. `--target` picks a different function, `--literals` and `--all` list them. |
| `cfgwalk.js` | Control-flow walk from CALL targets, following jmp/jcc targets and fall-through, with gap recovery after alignment padding. `--check addr` answers whether an address is a real instruction boundary in about 2 seconds. Records the 144 indirect branches it cannot follow. |
| `fieldmap.js` | Derives the in-memory character record layout from the roster format string. `--check` verifies three anchors agree on one base; `--resolve 0x..` names any address. Record base `0xcde54`. |
| `plancheck.js` | Verifies every item in `docs/plan.md` carries a valid State, Autonomy, done-when and blocked-by. Exits non-zero if not. `--todo` lists items an agent could start now. |
| `planmigrate.js` | Reports planning docs that are not in the item format. Does not rewrite, so the conversion stays a judgement call. |
| `callgraph.js` | Builds caller to callee edges from every `E8` call site. Reports fan-in, fan-out, roots and reachability. 738 starts, 2,476 edges, 2 routines with no caller. |
| `fnstrings.js` | Prints the strings a function references, which is how a routine gets named. `--top N` ranks routines by string count. |
| `worldfmt.js` | Reports the `WORLD*.UT2` save layout: 128-byte rows, 24 dwords each, 6 rows of data then 67,328 bytes of zero. `--bits`, `--compare`, `--size`. |
| `ebcorpus.js` | Lists the 271 all-`0xEB` strings (78 followed by Shift-JIS) and whatever Shift-JIS string follows each. `--dupes` shows runs appearing under more than one text, which proves the runs are shared tokens rather than a transcription. |
| `randgroups.js` | Groups `randMod` call sites by enclosing function. 85 sites into 35 functions, 12 of which hold 55 sites. Follows the rule that every address is a virtual address and every image access is `img[addr]`. |
| `sweep.js` | Linear-sweeps a function from a real entry to produce instruction boundaries. `--check addr` says whether an address begins a real instruction. Full-image sweeps are unusable; per-function sweeps are sound. |
| `randmods.js` | Classifies `randMod` call sites. `--sweep` filters against real boundaries, which removes 13 of 85 provable false positives. |
| `funcs.js` | Finds real function entries from `CALL rel32` targets, ranks them by call count, and disassembles from any entry with correct alignment. This is the tool that makes reading the binary reliable. |
| `codelimits.js` | Derives the zero-fill regions from the bytes, 66 of them covering 76.6 percent of `ENCHANT.EXP`, and emits them as `--no-code` flags. `--check` asserts the table in `docs/code-analysis.md` and runs inside `checkall.js`, so a different disc rip fails rather than quietly producing a larger count. |
| `codemask.js` | The complement of a walk's reach: which byte ranges nothing decoded. Takes the output of `fmtownskit.recomp.discover --code-ranges`, so it needs that clone, which is gitignored. `--outside-zero` subtracts the zero fill to leave the ranges worth asking about, 123,501 bytes. |
| `seeds.js` | Derives candidate function starts for any `MP` binary on the disc, for the two games that have no corpus. Scans `E8`/`E9` targets, drops those in zero fill or named only once, then keeps a candidate only when a walk from it **alone** has zero conflicts. Validated against `ENCHANT.EXP`, where it finds 333 of the 681 C-shaped corpus rows. |
| `globrefs.js` | Finds the code sites that read or write one global, and separates the writes from the reads. Cross-checks `x86map --refs`: both report 12 writes to `PLAYER_X`. |
| `stride.js` | Decodes `lea` chains into exact struct strides. Found the 57-byte record used by six functions. |
| `structfields.js` | Given a record base and stride, finds every field offset by scanning displacements over the whole image. |
| `strtab.js` | Finds runs of consecutive dwords that point at printable strings, i.e. C arrays of `char*`. Found the string table at `0x7a864`. |
| `strptrs.js` | Scans for dwords that land on a *known* string start. The opposite test to `strtab.js`, and the stricter one, useful for ruling out indirect address tables. |
| `fontmap.py` | Derives the `0xEB` font glyph encoding from null-separated glyph/JIS pairs. Partial: 8 glyphs established, documented as OPEN. |
| `savetext.py` | Extracts Japanese and ASCII strings from a Tsugaru machine state. `--japanese`, `--ascii`, `--min N`, `--offset 0xNNN`. Found the monster name table and the game's UI text. |
| `cellfield.js` | Ranks candidate cell fields by spatial coherence, with an explicit random baseline. Ranking by absolute coherence, not by the ratio, which rewards large alphabets. |
| `maprender.js` | Renders a loaded map buffer as ASCII at the correct geometry. Must render from the buffer start, not the payload start: the 1,536-byte difference is 12 rows, and getting it wrong shifts every row by 12 cells. |
| `mapnibble.py` | Tests whether a `MAP2_*` payload is one value duplicated into both nibbles. Takes a map path. Its first attempt at this question produced a wrong falsification, recorded in `docs/u3-hypothesis-tests.md`. |
| `mapfmt.js` | Measures the `MAP2_*` map files. Confirms they are not ASCII, and that every byte is `(hi<<4)|lo` with both nibbles 0-7, i.e. a 64-tile vocabulary. `--render` for a character map. |
| `coderefs.js` | Finds code that references an asset string. `--all`, `--string X`, `--calls`. Reports that 5 of 71 paths are compiled in. |
| `test-coderefs.js` | Pins `coderefs.js` against hand-decoded bytes, 11 assertions. Run it after touching the tool. |
| `expimage.js` | Measures `ENCHANT.EXP` as a code image: real-bytes ratio, zero-fill regions, dispatch mix, function-boundary counts. Reproduces every number in [code analysis](docs/code-analysis.md). |
| `sym1.js` | Parses the `TMENU.EXP` symbol table: 1,725 named symbols including the whole Fujitsu `EGB_*` graphics layer. Validates by exact blob consumption. |
| `palette-reference.js` | Derives the real palette from emulator screenshots by cross-screen consensus. Screenshots are not committed. |
| `vendor.sh` | Downloads Tsugaru and the FreeTowns ROMs into `vendor/`, both gitignored. |
| `debug-session.sh` | Runs U2 under Tsugaru with the debugger, headless over SSH. |
| `container-run.sh` | Start/stop the podman container: Xvfb, VNC, noVNC, and the supervisor API. Playable from a browser. |
| `mame-run.sh` | Same idea for MAME's FM Towns driver. Separate image, no supervisor. See the note below before using it. |
| `savedisk.js` | Read and edit an FM Towns save disk from the shell: list, cat, slots, clone, set, world-copy, newdisk. Tested by `test-savedisk.js`. |
| `makesave.js` | Build a save disk with characters from the command line. Imports the same modules the browser editor uses, so it is the headless test for the page. |
| `test-savedisk.js` | Assertions for the FAT12 and roster logic, against a synthetic disk. Needs no game data. |
| `precommit-guard.sh` | Blocks commits containing copyrighted game data. Install as a git hook, see below. |
| `cd.js` | Shared library. Disc reader, ISO9660 walk, PNG/WAV writers, decoders for 4bpp packed/planar/byte-per-pixel and `.SND`. Import this rather than duplicating the format logic. |
| `tilesheet.js` | Render a tile bank to a labelled PNG grid. See `docs/assets-and-graphics.md` 5.4 for which layout to use per file. |
| `crossdiff.js` | Rabin-Karp shared-substring search between executables. Used in `docs/save-disk.md` 6.5. |
| `findpal.js` | I/O census and port classification, plus indirect-call/constant correlation. Used in `docs/save-disk.md` 6.6. |

## Loading a Phar Lap executable

```bash
node tools/pharlap.js --file TMENU.EXP --map
node tools/pharlap.js --file TMENU.EXP --at EGB_palette
node tools/pharlap.js --file TMENU.EXP --disasm EGB_palette --len 192
node tools/pharlap.js --file TMENU.EXP --dump /var/tmp/tmenu-load.bin
```

For `P3` (`TMENU.EXP`) this resolves the load image to `0x200`-`0x33892` and
reports that 1,723 of 1,725 symbol addresses fall inside it. For `MP`
(`DARKNESS`, `ENCHANT`, `EXODUS`) it reports the header, entry point and stack.

## Symbols

```bash
node tools/sym1.js                  # summary + colour/graphics symbols
node tools/sym1.js --find EGB_      # 30 EGB_* graphics functions
node tools/sym1.js --dump           # writes analysis/SYM1-symbols.txt
```

## Palette from screenshots

The palette is not in the assets and not findable by scanning the binary. The
running game shows it, so screenshots are used as ground truth:

```bash
node tools/palette-reference.js --dir /path/to/u2-screenshots
```

Quantises each screenshot to 16 colours, converts to RGB555, and ranks entries
by cross-screen agreement. A real palette entry appears on most screens, a JPEG
artefact does not.

Reference screenshots used for U2 came from
`pixsoriginadventures.co.uk/ultima-2-fm-towns-part-1` and `part-2`. They are
copyrighted and are not committed, per `AGENTS.md`.

## Running the game and reading hardware state

```bash
./tools/vendor.sh                  # Tsugaru + ROMs into vendor/ (gitignored)
./tools/debug-session.sh           # boot to the debugger console
./tools/debug-session.sh --auto    # boot, run 20s, dump palette, quit
```

`debug-session.sh` works over SSH with no monitor. It finds the desktop
session's Xwayland display and auth file, because Tsugaru needs a window even
when driven from the console.

Console commands worth knowing. Print targets need the `PRI` prefix:

```
RUN            run the VM
PAU            pause it
PRI PALETTE    the CRTC palette, 16 entries per page
PRI CRTC       CRTC registers, mode, page setup
STA            CPU state
RUN EIP        run to a temporary breakpoint
T              single step
BRKON MEMW a   break on memory write
Q              quit
```

Output goes to `analysis/`. Nothing produced by the emulator is committed.

## Playing in a browser, and driving it over HTTP

The container runs four things: Xvfb, x11vnc, noVNC, and a supervisor that owns
the emulator's tty and serves an HTTP API.

```bash
./tools/container-run.sh start      # build if needed, start, print URLs
./tools/container-run.sh status     # running? which ports?
./tools/container-run.sh stop       # tear down
./tools/container-run.sh logs       # follow logs
./tools/container-run.sh shell      # bash inside
./tools/container-run.sh build      # force image rebuild
```

## Building a save disk from the command line

`makesave.js` writes characters into a disk without the editor or the game. It
imports `web/fat12.js` and `web/roster.js`, the same modules the GitHub Pages
page loads, so it exercises shipped code rather than a parallel implementation.

```bash
# one character, the optimal build
node tools/makesave.js --out hero.hdm \
  --party --name HERO --race H --sex F --prof W --stats 25,25,10,10,10,10

# a full party of four
node tools/makesave.js --out party.hdm \
  --party --name ANA --race H --sex F --prof W --stats 25,25,10,10,10,10 \
  --party --name BOB --race D --sex M --prof F --stats 20,20,20,10,10,10 \
  --party --name CY  --race E --sex F --prof T --stats 20,20,10,10,10,20 \
  --party --name DEE --race B --sex M --prof C --stats 10,10,20,10,30,10
```

`--stats` is the base allocation, six numbers totalling 90 with none below 10.
The measured race, sex and profession modifiers are applied on top, and the
result is clamped to the game's cap of 99. Food is given in rations and stored
at a hundred times that.

The same rules as the page are enforced, so an over-spend is refused with the
exact amount over, as is a stat below the minimum. `--cheat` turns both off.

Every character is read back and re-parsed before the tool reports success, so a
silent write failure cannot pass. Verified end to end: a four-character disk
built this way loads in Ultima II and each character plays.

## MAME, and why it is not the answer

`tools/mame-run.sh` runs the same disc under MAME instead of Tsugaru. It exists
because MAME's floppy controller is a genuinely different implementation, and
that was worth testing against the one game that will not save.

It does not help. MAME boots the machine and shows Fujitsu's CD browser, but the
pointer stops working at the grey launcher menu exactly as it does under
Tsugaru, so Ultima II is never reached. MAME's own description of the driver is
`status="preliminary" emulation="preliminary"`. Read `docs/save-files.md` 8.4 before
spending time here.

It also needs a different ROM set. MAME will not accept the FreeTOWNS clean-room
ROMs in `vendor/roms/`. All four CRC32s mismatch. Put a real `fmtowns.zip` at
`tmp/fmtowns.zip` (gitignored) and check it first:

```bash
unzip -l tmp/fmtowns.zip    # expect fmt_dos.rom, fmt_dic.rom, fmt_fnt.rom, fmt_sys.rom
docker run --rm -it --entrypoint /bin/bash fmtowns-mame \
  -v "$PWD/tmp/fmtowns.zip:/roms/fmtowns.zip:ro" \
  -c 'export PATH=/usr/games:$PATH; mkdir -p /tmp/r; ln -s /roms/fmtowns.zip /tmp/r/; mame -rompath /tmp/r -verifyroms fmtowns'
```

Then:

```bash
./tools/mame-run.sh start saves/u2_gui_1232.img
./tools/mame-run.sh stop
```

Then open `http://<host>:6080/vnc.html`.

### Why a supervisor exists

`Tsugaru_CUI` reads console commands from stdin. A detached container has no
stdin, so binding the emulator directly means nothing can ever type into it.
`container/supervisor.js` holds both ends: it spawns Tsugaru with piped
stdin/stdout and exposes them over HTTP. Keystrokes, debugger commands and
palette dumps all work while the game runs.

### API

All under `/api`, JSON in and out. Port 8080.

| Method | Path | Purpose |
|---|---|---|
| GET | `/api/status` | running, pid, uptime, commands sent |
| GET | `/api/log?since=N` | console output |
| WS | `/api/stream` | live console |
| POST | `/api/run` `/api/pause` `/api/state` | run, pause, CPU state |
| POST | `/api/keys` `{text}` | type into the VM, returns keycodes sent |
| POST | `/api/cmd` `{line}` | any console command |
| POST | `/api/palette` | parsed 16-colour palette per page |
| POST | `/api/crtc` | CRTC registers |
| GET | `/api/screen?mode=` | capture and render as text |
| POST | `/api/shot` `{name,mode}` | capture, optionally rendered |
| GET | `/api/shot.png` | raw PNG bytes |
| GET | `/editor` | the character editor page |
| GET | `/api/type` `{text}` | alias for `/api/keys` |
| POST | `/api/key` `{keys}` | press named keys. Accepts an array or a comma-separated string, plus an optional `delay` in ms |
| POST | `/api/mouse` `{x,y,click}` | move the pointer, optionally click |
| POST | `/api/clickat` `{fx,fy,click}` | click by fraction of the window, which is easier than finding exact pixels |

Save disk routes. These read and write the floppy image mounted in drive 0.
Pause the emulator first: Tsugaru holds the image open and flushes its own view
over any edit made while it runs.

| Method | Path | Purpose |
|---|---|---|
| GET | `/api/save/info` | disk path, file list, and all four slots with their fields |
| POST | `/api/save/slot` `{slot,name,profession,race,sex,...}` | create or overwrite a slot |
| POST | `/api/save/clone` `{from,to,name}` | copy one slot into another |
| POST | `/api/save/delete` `{slot}` | blank a slot |

Creating into an empty slot also generates that slot's `WORLD<n>.UT2`, since a
new character needs a world. Editing an existing character leaves its world
alone, because that file holds their explored map and progress.

Every write is read back and re-parsed before the route reports success, so a
silent failure cannot pass.

### Reading the screen without vision

`/api/screen` returns the screen as text, so a model with no image support can
still interpret it. `mode` is `ascii`, `text`, `stats` or `all`.

```bash
curl -s 'http://<host>:8080/api/screen?mode=stats'
```

```json
{ "distinctColours": 1108, "allGrey": false,
  "top": [ {"hex":"#0022ee","percent":74.36}, {"hex":"#000000","percent":7.42},
           {"hex":"#ff0000","percent":5.56}, {"hex":"#ffff55","percent":4.96} ] }
```

That answers "is this screen in colour yet" in one call. `mode=ascii` gives a
luminance ramp for layout, `mode=text` a character grid at 8x16 cells for
reading dialogue and menus. The renderer is `container/screen.js`, zero
dependencies, with its own PNG decoder.

### Console quirks worth knowing

- `TYPE 2` needs the space. `TYPE2` returns "Do what?".
- Print targets need the `PRI` prefix: `PRI PALETTE`, not `PALETTE`.
- The VM starts paused only with `-PAUSE`. Without it the game is already
### Running without a display

If you do not have the desktop's display, run the emulator in a container:

```bash
./tools/container-run.sh          # build if needed, start, print the URL
```

Then open `http://<host>:6080/vnc.html` and click Connect. Raw VNC is on 5900 if
you prefer a native client.

```bash
./tools/container-run.sh shell    # bash inside the container
./tools/container-run.sh stop     # tear down
```

Under the hood: Xvfb at 640x480x24, x11vnc, noVNC. Tsugaru and the ROMs are
bind-mounted from `vendor/` read only, so nothing copyrighted is in the image.

Two host quirks broke this silently while building it, and the script now
detects both rather than assuming:

- podman may need sudo. The script uses it only when plain `podman info` fails,
  so it works whether or not the user is in the podman group.
- On a host with SELinux enforcing, every bind mount needs the `:z` suffix or the
  container gets `Permission denied` on the host directories and the emulator
  never starts. Docker Desktop on macOS and Windows rejects `:z`, so the suffix
  is added only when `/sys/fs/selinux/enforce` says SELinux is on.

It has only been tested on Linux. See the note in `README.md` section 3.

## Copyright guard

The repository contains scripts, tests and documentation only. The game, its
artwork and its audio stay out. `.gitignore` alone cannot enforce that, because
it does not stop `git add -f`. Install the hook once per clone:

```bash
ln -sf ../../tools/precommit-guard.sh .git/hooks/pre-commit
```

It blocks staged files by extension and by size, and prints why. See the
copyright section of `AGENTS.md`.

## Reproducing this work

You need only the zip from `archive.org/details/fmtownscdcollection`, unpacked
into the repository root. Then:

```bash
node tools/verify.js          # 107 assertions, exits 0 only if all pass
node tools/verify.js --verbose
node extract-u2.js            # produces extracted/u2/
```

`verify.js` is the authority. If a claim in [the docs](docs/) is not asserted there,
treat it as unverified. If `verify.js` fails on the source file MD5s, you have a
different rip of the disc and the results will legitimately differ.

## Usage

```bash
# Sprite tiles: 32x32 packed, 65 tiles
node tools/tilesheet.js --file ENEMY2.TIF --tw 32 --th 32 --packed4 --cols 8

# Player frames: 16x16, one byte per pixel
node tools/tilesheet.js --file PLAYER.TIF --tw 16 --th 16 --bytepx --cols 10

# Dungeon monsters: 16x16 packed, 1664 tiles
node tools/tilesheet.js --file DUNMON1.TIF --tw 16 --th 16 --packed4 --cols 24

# Shared code between executables
node tools/crossdiff.js --ref TMENU.EXP --min 256

# Where does this binary touch hardware?
node tools/findpal.js --file ENCHANT.EXP
```

Outputs go to `extracted/tiles/` and `analysis/`, both gitignored.

## Important caveat

`findpal.js` and any linear disassembly of this image produce unreliable
instruction boundaries. The `MP` payload does not decode as one flat 32-bit
stream, and evidence from `TMENU.EXP` shows the load address is not simply
"file offset + 0x75f". Treat its port census as indicative, not authoritative.
Read `docs/save-disk.md` 6.6 before trusting anything it reports.
| `refindex.py` | Builds the function-to-data index: for every function start the walk found, the absolute addresses its body references, with the operand form. Turns "which function prints the attack menu" from a search into a lookup. `--query ADDR` asks who references an address, `--function ADDR` what a function references. Needs `fmtownskit` under `references/`, which is gitignored, and the Capstone venv. |
| `funtriage.js` | Ranks the functions the walk found by how much is already known about each: which TBIOS stubs it calls, which named globals it touches, whether it references text. Joins `refindex.json`, `docs/globals.json` and the thunk table. `--fn ADDR` reports one function. Emits evidence, never names. |
| `tbios-read.js` | Reads a game routine together with the TBIOS handlers it reaches. Prints each call site, the wrapper it enters, how far into the wrapper the `b4 <AH>` sits, the AH value and the handler's disassembly to its first `ret`. `--at ADDR`, `--ah 0x46`, `--handler 0x2d78`. `--check` asserts seven calls in `0xe5d90`, the direct AH set of the four rectangle-cluster routines, that AH 0x48 and 0x49 share a handler, and the 57-byte text window stride. Three defects it had, all recorded: the call target is the wrapper start and NOT the signature, a routine ends at its last `ret` not its first, and a bare `main()` discards the `--check` exit status. |
