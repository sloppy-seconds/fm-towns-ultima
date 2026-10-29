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
| `cfgwalk.js` | Control-flow walk from CALL targets, following jmp/jcc targets and fall-through, with gap recovery after alignment padding. **Refuses a transfer into zero fill and names it**, which is the difference between 79,303 decoded instructions and 39,190. `--check addr` answers whether an address is a real instruction boundary in about 2 seconds, `--refusals` lists what the guard refused and reports in the **guest frame** with a printed frame header, `--no-guard` reproduces the inflated count. `--seeds-file F` adds guest-frame addresses from a file to the seed set, in the format `tools/runtime-seeds.txt` already uses for the recompiler, and `--test-seeds F` gives a per-address conflict verdict: `boundary`, `mid-instruction`, `zero-fill` or `unreached`. Those two are how the cross-seed test with fmtownskit is run, and the verdicts are in `docs/walk-comparison.md`. Records the 135 indirect branches it cannot follow. |
| `fieldmap.js` | Derives the in-memory character record layout from the roster format string. `--check` verifies three anchors agree on one base; `--resolve 0x..` names any address. Record base `0xcde54`. |
| `plancheck.js` | Verifies every item in `docs/plan.md` carries a valid State, Autonomy, done-when and blocked-by. Exits non-zero if not. `--todo` lists items an agent could start now. |
| `patchcheck.js` | The kit submodule's four invariants, in the order they fail: the working tree is clean, `patches/fmtownskit-base.txt` is an ancestor of the pin, `git diff <base>` equals the mirror patch byte for byte, and the pin is on `origin/mp-support` so a fresh clone can fetch it. `fmtownskit` is a submodule of the fork `paulczar/fmtownskit` on branch `mp-support`, so editing the kit is ordinary git rather than a patch-apply dance, and `patches/fmtownskit-mp-support.patch` is a mirror kept for readers. Skips with a printed note when the submodule is not initialised. Runs from `checkall.js` as `kit patches`. |
| `resumepoints.js` | The function starts the recompiler never resumes at, because it stops each function at its terminating `ret` and never continues after the 2 to 4 bytes of alignment padding that follow. Derived as the first instruction start of this project's walk after the recompiler's last, per function containing a skipped call. This is what closed the port's fidelity gap: 138 call instructions were absent from the module, and seeding 41 of these took the module from 818 functions to 863 with 0 refused and 0 conflicts and the skipped calls from 138 to 7. `--check` compares against `tools/runtime-seeds.txt` and fails if the unseeded residue is anything other than the three addresses named in `EXPECTED_RESIDUE`, so it cannot grow silently. Skips with a printed note when no module is present. Runs from `checkall.js` as `calls the port was skipping`. |
| `calltargets.js` | Which `E8 rel32` call targets nothing really calls. For each target, is the site of any call pointing at it an instruction start in **either** walk. Applied to all 738 targets it finds 26 that are pointed at only by data bytes, and that is what took the queue from 775 routines to 749. Both decoders are required and that is measured, not assumed: with this project's walk alone the rule marks 124, because a call site inside a region our seeds never cover is not one of our instruction starts even when it is plainly code. `--check` compares `tools/non-call-targets.txt` with a fresh derivation, which is how `checkall.js` runs it; `--write` rewrites the file. Skips with a printed note when no recompiled module is present. |
| `queue.js` | The decompilation queue. Derives the universe rather than reading it: every `E8 rel32` call target, plus the starts in `tools/runtime-seeds.txt`, minus the ones excluded as not routines (zero fill, and the 26 in `tools/non-call-targets.txt`). Merges `docs/queue.json`, which stores only status, cause, differing bytes, levers, needs and what unlocked a row, and reports what can be worked now. A routine with no row is `unattempted`, so the counts cannot drift from the image. `--counts` prints the totals and the sum check, `--parked` lists the parked set with dependencies, `--rebuild` rewrites the ledger from `docs/routines.json`, `--json` dumps the merged rows. Runs from `checkall.js` as `decompilation queue`. |
| `recondiff.js` | Compares our control-flow walk with fmtownskit's, in both directions, and classifies every difference. fmtownskit emits 818 functions and 41,847 instructions against our 738 call targets and 39,190, so the two sets are put side by side rather than left as two numbers. Converts `cfgwalk.js`'s frame into the guest frame by one named constant and **checks that conversion against two anchors** before printing anything, because a frame mismatch here reads as an empty intersection rather than as an error. Its results: 697 shared starts, 77 of theirs being boundaries no CALL reaches, 44 addresses our seeds never reach, and **seven of our call targets landing in zero fill**, which makes them `E8` bytes in data. It reports the run holding each of the seven, which is how the two thresholds in `codelimits.js` are argued: three are in megabyte-scale extents and four in 53 to 59 byte gaps between routines. `--emit-seeds F` writes the starts only our walk holds, which is the input to the cross-seed recompile. Exits 1 on that finding. `--json` for the gate, `--verbose` for every differing address, `--recomp <dir>` to read a module from elsewhere, which is how the gate was tested against a deliberately incomplete one. Runs from `checkall.js` as `walk comparison`. |
| `recomp-cross.sh`, `recompcompare.js` | The second half of item 4n: can the recompiler be taught the starts our walk holds? The shell script derives those addresses with `recondiff.js --emit-seeds`, recompiles with them through `port-build.sh`'s `U2_EXTRA_SEEDS` into a separate directory, and the JS tool compares the two modules function set against function set. It fails if a function disappears, if a seed is not emitted, or if either module's report states a refusal or a conflict, and a report line missing a count is itself a failure. Measured: 848 functions against 818 with all 30 emitted, and **2 refused with 32 conflicts**, so the two decodes disagree about those regions. The static test cannot see that because it asks a one-sided question. Not in `checkall.js`: it needs the disc, the submodule and a full recompilation, so it is a measurement rather than a gate. |
| `portcheck.js` | The port's measured values, asserted against the source that carries them: program base, hand-off `ESP`, descriptor limit, profile physical base, the entry read from the header, the floppy geometry, the measured seeds, and that every `U2_*` switch is both documented and present. Reads `port/`, `tools/` and `docs/` only, so it needs no emulator, no disc and no recompile. The superseded values are asserted **absent from code** so a revert fails here instead of at the next emulator session. `--root <dir>` points it at a copy, which is how it was made to fail on purpose. Runs from `checkall.js` as `port constants`. |
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
| `codemask.js` | The complement of a walk's reach: which byte ranges nothing decoded. Takes the output of `fmtownskit.recomp.discover --code-ranges`, so it needs the submodule initialised. `--outside-zero` subtracts the zero fill to leave the ranges worth asking about, 123,501 bytes. |
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
| `propnames.js` | **Propagates names from a build that kept symbols onto one that did not**, by probing 24 bytes at each `SYM1` symbol and keeping only probes that occur exactly once in the target. `--shift N` is the control, `--tsv` writes the landed offsets. On `TMENU` to `ENCHANT` it is a **measured negative**: 54 unique matches, none of them function starts. See [name-propagation.md](../docs/name-propagation.md). |
| `sym1.js` | Parses the `TMENU.EXP` symbol table: 1,725 named symbols including the whole Fujitsu `EGB_*` graphics layer. Validates by exact blob consumption. Values are 32-bit file offsets into the load image, `0x238` to `0x33848`. |
| `palette-reference.js` | Derives the real palette from emulator screenshots by cross-screen consensus. Screenshots are not committed. |
| `vendor.sh` | Downloads Tsugaru and the FreeTowns ROMs into `vendor/`, both gitignored. |
| `debug-session.sh` | Runs U2 under Tsugaru with the debugger, headless over SSH. |
| `calltrace.py` | **A timeline of what the machine executed**, cheaply. Tsugaru keeps the last 65,536 `CS:EIP` values in memory and `SAVEHIST` dumps them; this reads that dump, separates game from TBIOS steps, and ranks the hottest addresses. `--save` captures a fresh one over the API, `--file` analyses an existing dump offline. **`--save` verifies the clock is advancing first**, because `SAVEHIST` on a paused machine writes 65,536 zero lines and looks like a success. See [the execution timeline](#the-execution-timeline) below. |
| `container-run.sh` | Start/stop the podman container: Xvfb, VNC, noVNC, and the supervisor API. Playable from a browser. |
| `x-run.sh` | The same idea with nothing project-specific in it: `container/Containerfile.x` is a generic X container (Xvfb, x11vnc, noVNC, plus a C++ toolchain and SDL3) that runs whatever command it is given. `./tools/x-run.sh start` builds the port inside it from a read-only mount of the working tree, into a named volume, and serves it at `http://<host>:6081/vnc.html`. `shot` captures the virtual display to a file, `run <cmd>` runs anything else on that display. Debian trixie is the base because the host's binary needs a newer glibc than Ubuntu 24.04 has and 24.04 has no `libsdl3-dev` at all. |
| `cfgprobe.py` | **Answers whether an address ever executed**, by arming the emulator's edge recorder before the boot and querying the result. `capture` reboots, records, drives into the game and saves the graph. `query` reports, per image offset, whether it was an instruction start, whether it was a branch destination, and what ran either side of it. Stdlib only, runs on the host. See [whether an address ever executed](#whether-an-address-ever-executed) below. |
| `recomp-build.sh` | **Builds the recompiled C++ module and executes one function in the host process.** Patches the generated `CMakeLists.txt` path, drops in `recomp-run1.cpp` as the missing `main()`, adds the target, builds with cmake, and runs an address. 8.6 seconds for 794 functions. A run that stops on `int 0x90` is a result, not a failure. See `docs/recomp-plan.md`. |
| `port-build.sh` | Builds `u2port`, the recompiled game on fmtownskit's machine: strips the image, derives seeds and no-code ranges, recompiles the game and TBIOS as two modules with their own ranges, writes the one-track cue the kit's disc reader needs, and runs it. `--reuse` skips the recompile. Every recompilation also writes `build/port/recomp/report.txt`, each module's functions, instructions, jump tables, every unresolved indirect transfer with its operands, and every refusal. That file is where item 7d's 30 and 67 come from, so it is named in the build output rather than left to be found. |
| `insncoverage.py` | Writes the address and size of every instruction the recompiler decoded, from the same walk and the same seeds, so the port's code diff can tell a patched instruction from a data write. Item 7c. |
| `runtime-seeds.txt` | Function entries measured on the machine rather than derived from the image, in the guest frame, with where each came from. Read by `port-build.sh`. |
| `divergence.py` | Compares the port's first-execution trace against the machine's control-flow capture and reports where they part. `-DX86_TRACE_ON` plus `U2_TRACE_FILE` on the port, `cfgprobe.py capture` for the machine. It found the missing `A:` drive. |
| `u2flow.py` | Drives the game from the Towns OS menu to a loaded character, checking the screen before every keypress and stopping rather than guessing. `--status` reports the screen without changing it, `--dry-run` checks and sends nothing, `--journey` does the walk. **Run it inside the container** (`podman exec fmtowns python3 /opt/u2/u2flow.py --journey`): it drives `xdotool` against `DISPLAY=:99`, which does not exist on the host. Baked into the image for that reason. |
| `u2read.py` | Turns a screenshot into text for the panels that do not need vision: status bar, stats, action log. Needs a seeded glyph table (`--teach <panel>`), so it reports `?` until taught. Needs Pillow. |
| `u2screen.py` | Reads the screen over the supervisor API. Stdlib only, so it runs anywhere. |
| `peek.js` | **Reads the character record from a running game and prints it as typed values.** The one tool to use for live field reads. `--json` for one object, `--kv` for `key=value`, a bare list of names for a subset. Exits non-zero if a field could not be read, so a zero and a failure are distinguishable. See [reading the character record](#reading-the-character-record) below. |
| `stateread.py` | **Reads the same character record from a `.state` file**, with no emulator, no container and no running game. Same fields, same `--json`. `--check` verifies the address mapping and `--expect field=value` verifies the record against a live reading. See [reading a savestate](#reading-a-savestate) below. |
| `u2bot.py` | Plays: walks, attacks, passes, enters towns, recording every action with a screenshot, the character fields and the CPU state. Needs Pillow. |
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

### Reading the character record

**Use `tools/peek.js`. Do not parse `MD` output by hand.** Every field it reads is a verified
address, it retries past the `FF` the game briefly writes while updating the record, and it
distinguishes "could not read" from "the value is zero".

```
$ node tools/peek.js
  hp          400   0xcde81
  maxhp       400   0xcde85
  exp           0   0xcde89
  food      39895   0xcde8d
  gold        400   0xcde91
  px           19   0xcdf6b
  py           19   0xcdf6f
  map           6   0xcdf53
  rng    3565644218   0xdfc78
```

| invocation | output |
|---|---|
| `node tools/peek.js` | all fields, one per line, with the address |
| `node tools/peek.js --json` | one JSON object, `{"hp":400,"food":39895,...}` |
| `node tools/peek.js --kv` | `hp=400`, one per line, for a shell capture script |
| `node tools/peek.js hp px` | only the named fields |

**The exit status is the point.** It is non-zero if any requested field could not be read, so
a caller can tell a real `0` from a failed read. A field that fails prints `null` in JSON,
`-1` in `--kv` because that format cannot express null, and `FAILED` in the default output.
All four cases were checked in this session:

```
$ node tools/peek.js hp            ; echo $?   -> reads 400, exit 0
$ node tools/peek.js nosuchfield   ; echo $?   -> "unknown field", exit 1
$ FMTOWNS_API=http://127.0.0.1:9999 node tools/peek.js hp ; echo $?   -> exit 1
$ FMTOWNS_API=http://127.0.0.1:9999 node tools/peek.js --kv hp        -> hp=-1
```

When testing the exit status, capture `$?` from `node` directly and not from a pipeline: the
first version of this check ran `node ... | head` and read `head`'s status, which is always 0.

```
$ node tools/peek.js --json | jq -r .food
39895
$ node tools/peek.js nosuchfield; echo $?
unknown field: nosuchfield
1
```

**The fields and how each was verified** are in the header of `tools/peek.js` and in
[live-fieldmap.md](../docs/live-fieldmap.md). The short version: `hp`, `exp`, `food` and `gold`
were checked against the game's own status screen, and `px`/`py` against a single step. `map`
is **unverified**. `rng` was confirmed as the LCG state by finding consecutive samples on the
chain.

**Three things that make reads wrong, all handled here:**

- **The `MD` reply is never alone.** With `DBLOG` and `AUTODISASMR` running, a single `MD` call
  returns hundreds of trace lines and the 16 that matter are buried. An `MD` line is the only
  one carrying a literal `|` before the ASCII rendering, and that is what the parser keys on.
- **The record flips to `FF` while being rewritten**, about one sample in six. `peek.js`
  retries up to five times and treats `FF` as "try again", not as a value. Pausing first with
  `PAU` avoids the problem entirely and is the better habit; see
  [live-fieldmap.md](../docs/live-fieldmap.md).
- **A dword read at a non-field address returns garbage rather than failing.** Only the
  addresses in `FIELDS` are verified. Reading somewhere else needs a new entry and a
  verification, not an ad-hoc read.

The API defaults to `http://127.0.0.1:8080` and `FMTOWNS_API` overrides it. **Use `127.0.0.1`,
not `localhost`:** on this host `localhost` resolves to IPv6 `::1`, nothing listens there, and
every call fails instantly with curl exit 56, which looks like a dead supervisor.

`peek.js` shells out to `curl` and so runs on the **host**, unlike `u2flow.py`. That is the
one difference worth remembering: `u2flow.py` needs `DISPLAY=:99` and must run inside the
container; `peek.js` only needs the API and runs outside it.

### Reading a savestate

`tools/stateread.py` reads the same fields as `peek.js` from a `.state` file, with nothing
running. That is what makes offline analysis possible: a savestate is RAM, frozen, so every
question about state stops costing a boot and a session.

```
$ ./tools/.venv/bin/python3 tools/stateread.py saves/analysis/live.state --json
{"hp": 216, "maxhp": 400, "exp": 10, "food": 39460, "gold": 431, "px": 13, "py": 20,
 "map": 35, "rng": 1130578755, "strength": 20, "agility": 25, "stamina": 20, ...}
```

Taken while the game was paused, then compared against `peek.js` reading the same moment:
**eight of nine fields matched exactly** (hp, maxhp, exp, food, gold, px, py, map). `rng`
differed because it advances every frame and the capture is a moment earlier.

**The file.** A `0x140`-byte header, then memory. The header begins `u32 0x140` then the ASCII
`FMTOWNS`, and `486DX` sits at `0x148`. `--check` prints those, and nothing about the rest of
the header is claimed.

**The addresses, which is the hard part, and they do not unify.** Three rules, each measured:

| what | rule | source |
|---|---|---|
| code below `0xd0000` | `state = 0x0762d2 + imageOffset` | `docs/mirrored-region.md` |
| code at or above `0xd0000` | `state = 0x4392d2 - imageOffset` | `docs/mirrored-region.md` |
| the player record | `state = 0x29d4b2 + imageOffset` | measured against a live game |

The third is the surprise and it **contradicts the obvious reading of the second**: `0xcde81`
is above `0xd0000`, so the mirrored formula applies to it and returns `0x36b451`, which holds
zero. The record is actually at `0x36b333`, 0x11e earlier. Both addresses are above
`0xd0000`, so the offset alone does not decide which rule applies, and the two are not one rule
with a different constant. **What separates them is not established.** The likely distinction
is that the code is loaded from the file while the record is BSS, which `live-session.md`
records as "two bases found, relationship unknown".

**Why the file cannot confirm the record base.** The record is BSS, so the image is *zero*
there. A mapping that points at zeros therefore matches `ENCHANT.EXP` perfectly while holding
nothing, which is exactly how an earlier version of this tool reported `0x0762d2` as correct on
92 of 92 comparisons and read all zeros. **The only honest test is a value read from the running
game at the same moment:**

```
$ ./tools/.venv/bin/python3 tools/stateread.py saves/analysis/live.state --check \
    --expect hp=216 --expect food=39460 --expect px=13
  hp            want 216      got 216      ok
  food          want 39460    got 39460    ok
  px            want 13       got 13       ok
  record base 0x29d4b2: every supplied value matches
```

**The procedure, which is the point of the tool.** Take the state paused, read the live fields,
and check them against it:

```bash
curl -s -X POST -H 'content-type: application/json' -d '{"line":"PAU"}' \
     http://127.0.0.1:8080/api/cmd
curl -s -X POST -H 'content-type: application/json' \
     -d '{"line":"SAVESTATE /data/analysis/live.state"}' http://127.0.0.1:8080/api/cmd
node tools/peek.js --json                       # the ground truth
./tools/.venv/bin/python3 tools/stateread.py saves/analysis/live.state --check \
     --expect hp=216 --expect food=39460
curl -s -X POST -H 'content-type: application/json' -d '{"line":"RUN"}' \
     http://127.0.0.1:8080/api/cmd
```

**`--check` is not optional when trusting a new state.** It exits non-zero if the code mapping
drops below 50 percent agreement, or if any `--expect` value does not match. A silently wrong
mapping is the failure mode this tool exists to prevent, and it produces plausible numbers from
the wrong place rather than an error.

`--at 0xcde81 --len 32` dumps any image offset, and `--diff 0xe5d90` compares one against
`ENCHANT.EXP`.

### The execution timeline

`tools/calltrace.py` answers "what actually ran", which is a different question from a control
flow graph. A CFG says which blocks exist and how they connect; this says which instructions
were executed, in order, on the most recent turn.

**Tsugaru already keeps it.** The emulator maintains a rolling in-memory log of the last 65,536
`CS:EIP` values with the stack pointer, and `SAVEHIST` writes it out instantly. No disassembly,
no register dump, nothing streamed to disk. The dump is about 2.3 MB of text and takes a second.

```
$ ./tools/.venv/bin/python3 tools/calltrace.py --save --top 5
  >>Debugger is ON.
  captured .../saves/analysis/calltrace.txt (2293760 bytes)
calltrace.txt: 65536 steps, 1 zero-filled
  game  (CS 000c): 31670 steps
  TBIOS (CS 0110): 33438 steps
  other segments : 0008=164, 5e88=132, 0092=114, 0018=15, 005d=2

hottest instruction addresses:
   0110:0x9af1  x3954
   0110:0x9af2  x3954
   0110:0x9af3  x3954
```

**Why not the full trace.** `tools/fightcapture.sh` can log every instruction with disassembly and
a full register set, but that is about **10 MB per second**: a 60-second fight is roughly 600 MB,
and it competes with live memory reads through the same console, because with `AUTODISASMR` on a
single `MD` returns around 250 lines with the 16 that matter buried. `SAVEHIST` costs none of that
because the emulator was keeping the history anyway.

**A window, not a history from boot.** The ring buffer holds 65,536 steps, so a dump is the recent
past. That suits the question this project has, which is what ran during a turn, rather than what
ran since power on.

**Two ways `--save` can lie, both guarded.**

- `SAVEHIST` only records while the debugger is enabled, so `--save` sends `ENA DEBUG` first and
  prints what the emulator says.
- `RUN` returns empty output whether or not the machine resumed, so `--save` takes the emulator's
  clock before and after and **refuses to capture if it did not advance**. Without that check the
  dump is 65,536 zero lines, which reads as a successful capture of an idle machine.

The all-zero case is also caught at analysis time, so a dump captured by other means is not
mistaken for data:

```
$ ./tools/.venv/bin/python3 tools/calltrace.py --file zeros.txt
zeros.txt: 100 steps, 100 zero-filled
  EVERY line is zero. The machine was paused, so nothing was recorded.
```

exits 1.

**What it does not give.** Not a call graph: a `call` and a far `ret` and an interrupt all look
like the same segment change, so `--calls` reports **transitions** rather than calls and is named
for what it measures. Per-turn attribution needs a dump either side of the action, taken paused.

### Whether an address ever executed

`tools/cfgprobe.py` answers one question: did the machine ever run the instruction at image offset X.

```bash
python3 tools/cfgprobe.py capture --journey --out /data/analysis/entry-boot.txt
python3 tools/cfgprobe.py query saves/analysis/entry-boot.txt --image 0x101a20
```

`capture` issues `RESET`, `CFGSTART`, drives the Towns menu into the game with `u2flow.py --journey`,
then `CFGSTOP` and `SAVECFG`. **Arming before the boot is the point**: a load-time jump cannot be
missed by a recorder that started afterwards. It refuses to write a capture when the machine is
paused, because a paused machine records nothing and an empty graph reads as a quiet one.

`query` takes ENCHANT.EXP offsets and reports whether each was an instruction start, whether it was a
branch destination, and the nearest executed instructions either side, which is what separates "not
reached" from "not in the capture at all". Before answering it re-derives `preEIP + preLen == src` on
the fall-through edges and prints the agreement rate. That is the check that the columns are read the
way `Execute_SaveCFG` writes them, and every earlier reading of this format got it wrong.

The image offset maps to `segment:(offset - 0x200)` for `000C`, because the game runs the file with its
`MP` header stripped, so `--image` takes a **file offset** and `--address` takes a **segment
offset**. They differ by 0x200, and the `MP` header's `EIP` is an address.

`--out` is a path **inside the container**, so `/data/analysis/...` rather than a host path. `saves/` is
mounted at `/data`.

It answered the entry-point question, and the answer needed the question corrected. `--address
0x101a20` reports the header's address as the first game instruction, a `jmp` whose bytes sit at file
offset `0x101c20`. Asking for `--image 0x101a20` looks 0x200 away, at a byte that is not an
instruction boundary, and returns a correct negative to the wrong question. See
[entry-point-question.md](../docs/entry-point-question.md).

### Console quirks worth knowing

- `TYPE 2` needs the space. `TYPE2` returns "Do what?".
- Print targets need the `PRI` prefix: `PRI PALETTE`, not `PALETTE`.
- **`RUN` gives no confirmation that it worked.** It returns empty output whether it resumed the
  machine or not, so a script that pauses, runs and saves can produce two copies of a frozen
  machine and diff them as if they were live. **Check the emulator's own clock instead:**

  ```
  STA  ->  Towns TIME (Nano-Seconds): 3051982309317
  sleep 3
  STA  ->  Towns TIME (Nano-Seconds): 3055235626510
  ```

  Advancing values mean running. **Identical nanosecond values mean paused**, whatever `RUN`
  appeared to do. This cost an hour on 2026-10-28: a "live" baseline of 50,906 changed bytes was
  two copies of a paused machine plus the pause transition. See `docs/monster-movement.md`.
- `PAU` on an already-paused machine prints a doubled prompt, `>>Towns TIME`, which is the only
  hint that the pause was redundant.
- The VM starts paused only with `-PAUSE`. Without it the game is already running.

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
| `refindex.py` | Builds the function-to-data index: for every function start the walk found, the absolute addresses its body references, with the operand form. Turns "which function prints the attack menu" from a search into a lookup. `--query ADDR` asks who references an address, `--function ADDR` what a function references. Needs the `fmtownskit` submodule and the Capstone venv. |
| `funtriage.js` | Ranks the functions the walk found by how much is already known about each: which TBIOS stubs it calls, which named globals it touches, whether it references text. Joins `refindex.json`, `docs/globals.json` and the thunk table. `--fn ADDR` reports one function. Emits evidence, never names. |
| `tbios-read.js` | Reads a game routine together with the TBIOS handlers it reaches. Prints each call site, the wrapper it enters, how far into the wrapper the `b4 <AH>` sits, the AH value and the handler's disassembly to its first `ret`. `--at ADDR`, `--ah 0x46`, `--handler 0x2d78`. `--check` asserts seven calls in `0xe5d90`, the direct AH set of the four rectangle-cluster routines, that AH 0x48 and 0x49 share a handler, and the 57-byte text window stride. Three defects it had, all recorded: the call target is the wrapper start and NOT the signature, a routine ends at its last `ret` not its first, and a bare `main()` discards the `--check` exit status. |
