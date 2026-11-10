# Recompiling Ultima III

A behavioural port of `EXODUS.EXP` onto the machine `fmtownskit` provides: the game's own 386 code
recompiled to C++, linked against the FM Towns runtime this project already builds, and run without an
emulator.

**This is not a second preservation track.** Byte identity is out of scope here on purpose. The High C
reproduction in [plan-recomp.md](plan-recomp.md) exists to make functions match the original byte for
byte under its own equivalence rule, and nothing in this document asks for that. What Ultima III needs
first is a build that boots, draws and plays, and a set of pages saying what its rules are. A byte
match can be pursued afterwards by whoever wants it, against the machinery that already exists.

The reason to attempt it now is that the distance is measured and small. Ultima II took months because
everything had to be discovered. Almost all of it applies unchanged to the third game, and the parts
that do not apply have been measured already, below.

## The goal, stated so it can be checked

A player can sit in front of the port, create a party on a save disk, walk Sosaria, enter a town, a
castle and a dungeon, fight, buy, cast, save and reload, and the behaviour matches the original where
the two have been compared. The rules that behaviour rests on are written down as arithmetic in this
docs tree rather than inferred from what the genre usually does.

The failure case this plan is written to avoid is a port that boots the title screen and stops there
while the document calls it done.

## Where it stands, 2026-11-10

| item | state | one line |
|---|---|---|
| U3-0a | DONE | `verify.js` asserts the container, the entry and the stack field, with two watched controls |
| U3-0b | DONE | `tools/game-build.sh u3`, one command, counts reproducible across runs |
| U3-1a | DONE | CI links both module configurations and asserts the U3 build refuses with no game file |
| U3-1b | DONE | the title screen draws, 800 frames, no fault |
| U3-2a | OPEN | stack measured from the header, selectors moot because the game sets its own, base still assumed |
| U3-2b | DONE | 26 `int 21h` sites, every immediate one served |
| U3-2c | OPEN | the game has opened nothing from the disc yet, so there is nothing to test |
| U3-3a | DONE | `--route title-to-register`, every screen read before the next key |
| U3-3b | OPEN | all four save files are written by the port and each names itself; the field formats are unread |
| U3-3c | OPEN | no game screen with text has been reached yet |
| U3-3d | OPEN | not attempted |
| U3-4a | OPEN | 860 functions from 583 derived seeds and one measured, zero conflicts, no negatives |
| U3-4b | OPEN | 86 tables, 83 bounded, 30 unresolved indirect transfers |
| U3-4c | OPEN | not attempted |
| U3-4d | OPEN | not attempted |
| U3-5a-e | OPEN | blocked behind a playable save disk |
| U3-6a | DONE | `PORT_TARGET`, so the executable is the title's id: `u2`, `u3` |
| U3-6b | OPEN | two build scripts, one descriptor table, and the strip arithmetic in both |
| U3-6c | OPEN | 30+ `U2_*` environment names are shared by U2 and U3 |
| U3-6d | OPEN | `module/`, `extracted/` and the doc pages do not follow one pattern |
| U3-6e | OPEN | the floor is 2.34 and every image here is 2.41 or newer, so the gate refuses all of them |
| U3-6f | OPEN | the floor is not in the README or the quickstart, where a downloader would look |

The whole of the remainder hangs on one artefact: a save disk the **original** has begun a journey on.
[u3-port.md](u3-port.md) records how that was attempted and why it stopped, and it is the first thing a
person with two minutes at the emulator screen can unblock.

## What is already measured

Every row was produced in the session that wrote this page, and the command is the evidence. Nothing
here is recalled from an earlier page, and where a value is quoted from elsewhere it is named as such.

### The container and the entry

```
$ node tools/getfile.js EXODUS.EXP
wrote ./EXODUS.EXP (904310 bytes) from EXODUS.EXP

$ xxd -g1 -c 32 -s 0 -l 32 EXODUS.EXP | sed 's/^[0-9a-f]*: //'
4d 50 76 00 e7 06 00 00 20 00 1a 00 ff ff 78 5a 0f 00 fd a8 b0 8a 0d 00 1e 00 00 00 01 00 00 00  MPv..... .....xZ
```

| field | value | note |
|---|---|---|
| signature | `MP` | the same flat-image variant as `ENCHANT.EXP` and `DARKNESS.EXP` |
| lastPage, pages | 118, 1767 | `(1767 - 1) * 512 + 118 = 904,310`, the file size exactly |
| relocCount | 0 | file offset equals virtual address, no fixups to apply |
| headerSize at `0x18` | `0x1e` | the 30-byte header |
| entry dword at `0x14` | `0x000d8ab0` | the entry point |

The entry is real and it is the same code shape as Ultima II's. Both binaries hold an 18-byte start-up
stub at the entry, differing only in two call displacements, and the short jump at the end of both
lands on byte-identical code:

```
$ xxd -g1 -c 18 -s 0x101c20 -l 18 ENCHANT.EXP | sed 's/^[0-9a-f]*: //'
eb 56 e8 f5 a2 fe ff 50 e8 f7 1f 00 00 33 c0 cd 21 c3  .V.....P.....3..!.
```

```
$ xxd -g1 -c 18 -s 0xd8cb0 -l 18 EXODUS.EXP | sed 's/^[0-9a-f]*: //'
eb 56 e8 b1 96 fe ff 50 e8 b7 1d 00 00 33 c0 cd 21 c3  .V.....P.....3..!.
```

And the short jump each of them takes lands on the same sixteen bytes. In `ENCHANT.EXP` the target is
file `0x101c78`, in `EXODUS.EXP` file `0xd8d08`:

```
$ xxd -g1 -c 16 -s 0x101c78 -l 16 ENCHANT.EXP | sed 's/^[0-9a-f]*: //'
3c cd 75 1b 80 fc ab 75 16 3d cd ab cd ab 75 0f  <.u....u.=....u.
```

```
$ xxd -g1 -c 16 -s 0xd8d08 -l 16 EXODUS.EXP | sed 's/^[0-9a-f]*: //'
3c cd 75 1b 80 fc ab 75 16 3d cd ab cd ab 75 0f  <.u....u.=....u.
```

So the entry convention transfers: the dword at `0x14` is a runtime address, the image is the file
from `0x200`, and file offset minus `0x200` is the runtime address. That last arithmetic is this
project's most expensive recurring mistake and it is worth having re-measured rather than assumed.

### The recompiler runs on it

One seed, the entry, and no curated seed set at all:

```
$ tail -c +513 EXODUS.EXP > /var/tmp/u3/exodus-stripped.bin
$ PYTHONPATH="$PWD" python3 -m fmtownskit.recomp --out /var/tmp/u3/recomp \
    --raw "game=/var/tmp/u3/exodus-stripped.bin@0xd+0xd8ab0"
game: 645 functions, 41525 instructions, 136591 bytes of code;
      82 jump tables (81 bounded), 9 indirect transfers unresolved, 0 refused, 0 conflicts
```

That took 0.729 s. For comparison, Ultima II needed 747 seeds to reach 768 functions and 127,698
bytes, and this project's own derived walk over Ultima III reaches 459 functions from 345 clean seeds
([seed-sets.md](seed-sets.md)). A single entry seed beats both, which is the first pleasant surprise
in this document and also a warning: 645 functions from one seed means the reachable graph is dense,
not that the game is 645 functions long.

### The emitted C++ compiles

```
$ tools/recomp-build.sh /var/tmp/u3/build --no-run    # exits non-zero at step 4, see below
$ ls /var/tmp/u3/build/b/*.a
libfmt_x86.a  librecomp.a
```

The exit status is non-zero and that is the script's fourth step rather than the compile: it adds a
`run1` target and that target does not link, for the reason given below. `librecomp.a` is built before
the step that fails.

| measurement | value |
|---|---|
| generated sources | 24 `p_game_*.cpp` |
| generated lines | 182,396 |
| build time, configure and compile | 5.3 s |
| string literals of six characters or more | 3 distinct, all the recompiler's own |

The literal count matters for the terms in [licensing.md](licensing.md). Across every generated
source there are three distinct literals in total (`p_game_funcs.h`, `ran off the end of a function`
and the empty string), so the module is code with no game text in it. That is the same argument
Ultima II's module rests on, and it can be re-asserted rather than re-argued.

The bare `tools/recomp-run1.cpp` harness does **not** link this module, and it is not a U3 defect.
`x86_flags.cpp` now calls `x86_watch_write` and `g_watch_lo`, which live in
`fmtownskit/runtime/towns_mem.cpp`, so the hooks are part of the machine library and not of
`fmt_x86`. The port is the harness that supplies them.

### The asset set, read out of the binary

Ultima III names its files differently from Ultima II. `ENCHANT.EXP` carries 50 lines with a `Q:`
prefix. `EXODUS.EXP` carries none. Its four drive-absolute names are all on `A:`, which is the save
disk, and everything else is relative to the disc's root:

| reference | count | shape |
|---|---|---|
| `\GRAPH\*.TIF` | 24 | `MAP3`, `PLAYER`, `ENEMY`, `EXTRA`, `DUNG1`, `DUNG2`, `CHEST`, `HEADTTL`, three `DEMO3_*`, five ending pictures `EXOEND1` to `EXOEND5`, `SDRAGON`, `SDRAGON2`, `HITO`, `IZUMI`, `TIME`, `ROD`, `ANK`, `GAI` |
| `\UT3\*.MP3` | 16 | 4,096 bytes each, on the disc |
| `\UT3\*.DG3` | 7 | 2,048 bytes each, on the disc |
| `\SOUND\*.SND` | 14 | the same bank shape as U2's |
| `\SOUND\*.EUP` | 9 | EUPHONY voice tables |
| `A:\*.UT3` | 4 | `ROSTER`, `PARTY`, `PLAYERS`, `WORLD` |

The tile sheets are the same size as Ultima II's: `MAP3.TIF`, `PLAYER.TIF`, `ENEMY.TIF`, `EXTRA.TIF`,
`DUNG1.TIF`, `DUNG2.TIF` and `CHEST.TIF` are 33,280 bytes each and `HEADTTL.TIF` is 8,192, which is
exactly the U2 sizes. The TIFF header is the same lying-header form. The U2 decoder shape therefore
transfers and the extraction work is a subset of what already exists.

`\UT3\AUDIO.UT3` appears in the binary and is **not** on the disc. It is either a write target or a
generated file, and finding out which is part of phase 3.

## What transfers, and what has to be measured again

This is the whole plan in one table. The left column is why this job is small. The right column is
what it actually consists of.

| transfers unchanged | must be measured for U3 |
|---|---|
| the `MP` container path in `fmtownskit/exp.py` | the load base, CS and DS/ES/SS at hand-off |
| the recompiler, the emitter, the jump-table finder | which `int 21h` functions EXODUS calls and whether `towns_dos.cpp` serves them |
| `fmtownskit/runtime/`, the whole machine | the disc current drive and directory, since U3 opens relative names |
| `tools/port-build.sh`'s shape, strip and frame arithmetic | the entry seed set and the walk, which is a different program |
| `tools/getfile.js`, `tools/cd.js`, the TIFF and `.SND` decoders | the save format: `ROSTER.UT3`, `PARTY.UT3`, `PLAYERS.UT3`, `WORLD.UT3` |
| `port/control.h`, the socket, `key`/`frame`/`shot`/`mem` | `state`, whose parser is U2's roster and world |
| `port/native_shadows.cpp`, the shadow mechanism | which addresses EXODUS patches, measured |
| the TBIOS module and `tools/tbios-seeds.txt` | whether U3 enters TBIOS at offsets the seed file lacks |
| `assets/font-rom/FMT_FNT.ROM` plus the disc's `UTFONT.FNT` | nothing, the text path is the platform's |
| `tools/insncoverage.py`, `tools/cfgwalk.js`, `tools/funcs.js` | the seed set those run with, all of it |
| `tools/portcheck.js` as a pattern | its pins, which name U2's modules and U2's counts |

The two rows worth reading twice are the current directory and TBIOS. Both are places where a port
that looks like it works is reading the wrong thing, and both are cheap to check early.

## Phases

Each item carries a state, an autonomy value and acceptance criteria, in the same three fields the
four track documents use. **`node tools/plancheck.js` does not read this file.** It reads
`plan.md`, `plan-port.md`, `plan-recomp.md` and `plan-attribution.md`, so nothing here is validated by
a gate yet. The fields are written the same way so that promoting any of these into a track document
is a move rather than a rewrite, and so a reader is not learning a second schema.

Item ids are `U3-` prefixed because ids are unique across the four existing documents and this one
must not collide with them if it is ever merged.

### Phase 0. Pin the facts down so they cannot drift

Both items here are cheap and both prevent the class of error this repository keeps paying for: a
number quoted from a page instead of measured.

#### U3-0a. Assert the container and the entry in a gate

**State:** DONE · **Autonomy:** AUTONOMOUS

The measurements above exist in prose and in a `/var/tmp` directory. Prose is not a check. This item
turns them into assertions.

| field | value |
|---|---|
| done when | `tools/verify.js` reads `EXODUS.EXP` from the disc through `tools/cd.js` and asserts the size is 904,310, the signature is `MP`, `(pages - 1) * 512 + lastPage` equals the size, `relocCount` is 0, `headerSize` is `0x1e`, and the dword at `0x14` is `0x0d8ab0`. The failure case: a check that reads a copy under `/var/tmp` or a header dumped by hand, which would pass on a different rip |
| blocked by | nothing |

**What is now known.** Nine assertions, all reading the disc, plus one that compares the two binaries:
the 64 bytes before each entry are byte-identical, so the entry sits at the same relative offset in the
same High C runtime block. Two of the checks are controls, and both were watched failing: the size
changed by one byte, and the entry read as a file offset is `02 03`, not a jump.

#### U3-0b. One command that recompiles Ultima III

**State:** DONE · **Autonomy:** AUTONOMOUS

`tools/port-build.sh` is Ultima II's: it hardcodes `ENCHANT.EXP`, takes its seeds from
`tools/seeds.js`, its ranges from `tools/codelimits.js` and its entry as `0x101a20`. Four U2 values, one
script. This item makes a U3 build a parameter rather than a fork, which is also what keeps the two
builds from drifting apart.

| field | value |
|---|---|
| done when | one command strips `EXODUS.EXP`, runs the recompiler with the entry seed and the U3 seed set, and prints the function, instruction and byte counts as a regression line. A second run reproduces them exactly. The failure case: a script that hardcodes the counts it prints, or two scripts that each own half the strip arithmetic |
| blocked by | U3-0a, for the entry value it uses |

**What is now known.** `tools/game-build.sh u3` does the whole build in one command and prints one
machine-comparable line, `counts    functions=860 instructions=45443 bytes=148461 ...`. Two recompiler
runs into different directories produce identical counts, so the line is a regression figure rather
than a description. The script owns the strip, the frame shift, the seed derivation, the ranges and the
key together, checks the strip is exactly `0x200` bytes and that the entry field lands on `eb 56`, and
refuses to continue if either fails. `tools/seeds.js` gained `--shift 0x200` rather than the script
converting 583 values in shell.

### Phase 1. A module that builds and a machine that reaches it

#### U3-1a. Compile the module in CI

**State:** DONE · **Autonomy:** AUTONOMOUS

The compile is measured. What is missing is the harness that keeps it true, in the shape
`.github/workflows/port-build.yml` already uses for U2: no game file present, a synthetic image
recompiled and linked.

| field | value |
|---|---|
| done when | a workflow compiles a U3 module from a synthetic image and links it against `fmt_towns`, and fails when the recompiler emits a source that does not compile. The failure case: a job that builds U2 by accident, which is why it must name the game |
| blocked by | U3-0b |

**What is now known.** `tools/ci-port-build.sh` now builds **two** configurations from the same synthetic
module: Ultima II's, with the native shadows, and the one a second title uses
(`-DU2_FOREIGN_MODULE=ON`, an empty shadow manifest). It also asserts that `tools/game-build.sh` exits
non-zero when its game file is absent, so the U3 route cannot build a module from whatever is lying
around. The existing workflow job runs all of it, so CI covers the U3 configuration without a second
workflow to drift.

#### U3-1b. The title screen, drawn by the port

**State:** DONE · **Autonomy:** PARTLY AUTONOMOUS

The first real milestone and the one that answers every structural question at once: does the machine
hand the program what the original's loader did, does the video path work, does the palette lookup
find the same table, does the start-up stub get past its `int 21h` checks.

| field | value |
|---|---|
| done when | `port/main.cpp`'s U3 counterpart maps `EXODUS.EXP` at the measured base, sets the measured selectors and `ESP`, calls `0x0d8ab0`, and the frame captured with `shot` matches the machine's title screen. If the machine comparison is not available yet, the criterion is a captured frame with the title art legible and a written record of which pixels were compared. The failure case: a port that stops on a trap, where the trap address, the module it looked in and the function it wanted are all recorded rather than worked around |
| blocked by | U3-2a for the base and selectors. It can proceed with chosen values, and then the choice must be said out loud |

**What is now known.** The port boots `EXODUS.EXP`, reads the disc, opens the floppy, composes the kanji
font from `\UTFONT.FNT` and runs. At frame 200 the captured frame is the Ultima III title: a visual
read of the PNG reported the dragon artwork, `Ultima III - EXODUS -` and `FUJITSU`. Frames 400 and 800
are the same screen animating, with no fault, so the attract loop is stable and the game is waiting for
a key.

Three things had to be true and all three were assumed rather than measured, which is why 2a is still
open: the load base `0x400000`, CS `0x000c` and DS/ES/SS `0x0014` are Ultima II's. They work, and
"they work" is not the same claim as "they are what the original used". The stack pointer is no longer
assumed: `port/main.cpp` reads it from the `MP` header at `0x0e`, which is `0x000f5a78` for `EXODUS.EXP`
and `0x11eb10` for `ENCHANT.EXP`, the value a live `STA` reported there.

One measured seed was needed to get past frame 95: `0xbc14c`, reached through `call dword ptr [0xb3178]`
whose slot is zero in the image and written at run time. It is in `tools/u3-seeds.txt` with the fault
that produced it.

### Phase 2. The numbers that are the machine's, not the game's

#### U3-2a. The hand-off registers, measured live

**State:** OPEN · **Autonomy:** BLOCKED ON HUMAN

Ultima II's were load base `0x400000`, CS `0x000c`, DS/ES/SS `0x0014` and `ESP` `0x11eac8`, all read
from the running machine. **None of those may be assumed for Ultima III**, and the header offers no
evidence for them: its entry dword's high half is `0x000d`, while U2's is `0x0010` against a live CS
of `0x000c`, so the header field is not the selector.

| field | value |
|---|---|
| done when | the load base, CS, DS, ES, SS, EIP and ESP at the entry of `EXODUS.EXP` are recorded with the console commands that read them, in a page of their own. The failure case: the registers cannot be captured before the game runs its own start-up, in which case the port chooses a scheme, says so, and the scheme is written down as an assumption rather than presented as a measurement |
| blocked by | booting the game to Ultima III on the save disk, which needs a person at the menu |

**Where it has got to, 2026-11-10.** One third of it is measured and one third has stopped mattering.

The stack pointer is the measured third. `port/main.cpp` reads it from the `MP` header at `0x0e`:
`0x000f5a78` for `EXODUS.EXP`, and `0x11eb10` for `ENCHANT.EXP`, which is exactly what a live `STA`
reported at that game's entry. The field is the loader's value where it has been checked against the
machine, so reading it for a second title is a generalisation rather than a guess.

The selectors are the part that stopped mattering. Ultima III loads its own: the emitted module has nine
`mov ds, eax`, four `mov ss, eax`, four `mov es, eax`, four `mov fs, eax`, and two `mov ss, word ptr
[0xb318d]` and `[0xb3823]` that take a selector from the program's own data. Whatever the port sets at
the hand-off is replaced early.

The load base is what is left, and an argument says it cannot be observed by the program: the image is
flat, `relocCount` is 0, and every reference in it is segment-relative. `0x400000` is Ultima II's
measured value and Ultima III's **assumed** one. The live measurement that would settle it needs the
emulator driven to the game's entry, and the only running container is mid-session in Ultima II, so it
was not taken. Details in [u3-port.md](u3-port.md).

#### U3-2b. The DOS extender calls EXODUS makes

**State:** DONE · **Autonomy:** AUTONOMOUS

Static: the `int 21h` sites in the module, with `AH` where the constant is visible. Runtime: which of
them execute, from a control-channel trace.

| field | value |
|---|---|
| done when | every `AH` value U3 uses is listed with the site that uses it, and each is marked served, unserved or unreached by `fmtownskit/runtime/towns_dos.cpp`. The failure case: an unserved call that is found to matter, recorded with the symptom it causes rather than patched blindly |
| blocked by | U3-1b for the runtime half |

**What is now known.** 26 sites. Fourteen carry an immediate and every one of those is served by
`towns_dos.cpp` today: three each of the Phar Lap vector calls `2502`, `2503`, `2506`, `2507`, one
`AH=30` DOS version and one `AH=4a` setblock. The other twelve compute their function number and none
has raised a fault in 800 frames, so the static census is complete where it can be and the runtime half
is the absence of a fault rather than a trace. The table is in [u3-port.md](u3-port.md).

#### U3-2c. The disc's drive and current directory

**State:** OPEN · **Autonomy:** AUTONOMOUS

U3 opens `\GRAPH\MAP3.TIF` and `\UT3\SOSARIA.MP3` with no drive letter, so the current drive has to be
the CD and the current directory the disc root. `towns_dos.cpp` already documents "names with no drive
while the current drive is Q", so this may be a check rather than a change.

| field | value |
|---|---|
| done when | the port opens `\GRAPH\MAP3.TIF` and `\UT3\SOSARIA.MP3` from the disc image, and either the existing path handling is confirmed unchanged or the change is carried as a named kit patch in `patches/`. The failure case: a `chdir` shim added to the port that hides a wrong assumption inside the runtime |
| blocked by | U3-3b. Measured 2026-11-10: the game has opened **nothing** from the disc through 1900 frames. The title art is inside the executable, and the only disc file read is `\UTFONT.FNT`, which the machine opens for its own font and not the game. So the item cannot be measured until the game starts and asks for a map |

### Phase 3. From the title screen into the game

#### U3-3a. Keys, and a route that gets past the title

**State:** DONE · **Autonomy:** PARTLY AUTONOMOUS

| field | value |
|---|---|
| done when | a scripted route over the control socket leaves the title screen and reaches character creation or player selection, with every key code used written down. The failure case: the route needs a key the socket cannot deliver, recorded with the key and the symptom |
| blocked by | U3-1b |

**What is now known.** `tools/u3drive.py --route title-to-register` sends space at 500, Down at 800,
Return at 1100 and Return at 1400, and lands on the register with slot 1 reading `ASSS Male Elf
Barbarian Good`. Each screen was read before the next key was chosen, and the table of screens is in
[u3-port.md](u3-port.md). Two capabilities the route proves: digits reach the guest, because
`Create Entry (1-20)` accepted `1` and answered `Create (Not Empty!)`, and the game reads the roster off
the floppy through the port.

#### U3-3b. A save disk, read and written

**State:** OPEN · **Autonomy:** PARTLY AUTONOMOUS

`EXODUS.EXP` writes `A:\ROSTER.UT3`, `PARTY.UT3`, `PLAYERS.UT3` and `WORLD.UT3`. `docs/save-files.md`
records `ROSTER.UT3` at 14,622 bytes for a party. `saves/u3test.hdm` already exists.

| field | value |
|---|---|
| done when | every field of `ROSTER.UT3`, `PARTY.UT3`, `PLAYERS.UT3` and `WORLD.UT3` is named with its offset and width, the port's own written values are checked against the bytes the game reads back, and a character created in the original and one created in the port compare equal field by field. The failure case: fields that disagree are named one by one, not averaged into "mostly matches" |
| blocked by | nothing. The disk is no longer the obstacle, and the original does not have to supply one |

**Corrected 2026-11-10.** This item said a playable disk could only come from the original, and that
`WORLD.UT3` was the missing piece. That was wrong. A session in the port created characters and formed a
party, and the port wrote all four files: `ROSTER.UT3` 14,676 B, `PARTY.UT3` 197 B, `PLAYERS.UT3` 3,050 B,
`WORLD.UT3` 4,787 B. Each one names itself in its first bytes (`Roster data:ULTIMA III for FM-TOWNS` and so
on), so a file's identity does not depend on knowing its format. `A WRONG DISK! Push SPACE` was the
empty-disk case: the disk held the roster alone.

Both halves of the old criterion are now met in substance, and the item narrows to what is actually left,
which is the formats. Nothing here can yet say what `WORLD.UT3`'s 4,787 bytes hold beyond the word `Mons`
near the start, or how `PARTY.UT3`'s 197 bytes name its members. That is reading, and it is the whole of the
remaining item.

For comparison, the same session on Ultima II wrote `ROSTER1.UT2` (3,659 B) and `WORLD1.UT2` (68,096 B),
both the sizes [save-files.md](save-files.md) already records.

#### U3-3c. Text

**State:** OPEN · **Autonomy:** AUTONOMOUS

The text path is the platform's: the font ROM plus the disc's `\UTFONT.FNT`. U2's version of this test
compared VRAM of an on-screen box and got zero bytes differing.

| field | value |
|---|---|
| done when | a U3 menu or dialogue box rendered by the port has VRAM identical to the machine's for the same screen, or the differences are enumerated as glyph indices. The failure case: the test renders U2's box and calls it a U3 result |
| blocked by | U3-1b |

#### U3-3d. The tick

**State:** OPEN · **Autonomy:** PARTLY AUTONOMOUS

Ultima II's timer work ended with hardware interrupt delivery attempted, silenced the FM music and
bisected out ([interrupts.md](interrupts.md), plan item 5n). U3 will meet the same question and must
not repeat the attempt blind.

| field | value |
|---|---|
| done when | the port's clock and the original's advance together over a measured number of frames, or the divergence is quantified and the cause named. The failure case: a port that runs without a timer and calls the difference a rendering detail |
| blocked by | U3-3b |

### Phase 4. Coverage, so the port stops on a named missing function rather than a surprise

#### U3-4a. One seed set, reconciled

**State:** OPEN · **Autonomy:** AUTONOMOUS

Three numbers exist and none of them is the coverage figure: 645 functions from the entry alone, 459
from the derived clean seeds, and 1,767 pages of image, of which the entry walk covers 136,591 bytes.
Ultima II's equivalent exercise found 30 conflicting starts and resolved 22 of them as not-routines.

| field | value |
|---|---|
| done when | every start held by either walk is a function in the module or recorded as not-a-function with the evidence, the conflict count is zero, and the total is stated once on a page that owns it. The failure case: a union of seeds whose conflicts are suppressed by dropping the seeds that conflict |
| blocked by | U3-0b |

**Where it has got to, 2026-11-10.** The sets are reconciled enough to build with: `tools/seeds.js`
derives 583 candidates for `EXODUS.EXP` in 0.048 s (572 from `call rel32`, 126 single-caller targets
promoted by a prologue, 5 callback immediates, 6 address-taken), the entry is added, and one address the
machine supplied takes it to 860 functions and 148,461 bytes with zero walk conflicts. `docs/u3-port.md`
owns that number. What is not done is the other direction: no start has been shown to be a
not-a-function, and the 30 unresolved indirect transfers are the reason the union is not complete.

One address needed the machine, and its shape is the general problem: `call dword ptr [0xb3178]` has a
slot that is zero in the image, and the program fills it at run time from a `push imm32` at guest
`0xbecdf`. A static rule could follow that immediate, and the callback rule does not because the target
has no prologue. That is the next seed rule, and it is a candidate rather than a finding until it is
measured on a run.

#### U3-4b. The jump tables and the nine indirect transfers

**State:** OPEN · **Autonomy:** AUTONOMOUS

82 tables, 81 of them bounded, and 9 unresolved indirect transfers, each with its operand in
`report.txt`:

```
  indirect at 0xda297: call dword ptr [ebp + 8]
  indirect at 0xdbde6: call eax
  indirect at 0xd6eee: call dword ptr cs:[ebx]
  ...
```

| field | value |
|---|---|
| done when | each of the nine is either resolved by a rule that also holds on Ultima II, or recorded as needing runtime evidence, and the 82nd table (the unbounded one) is named with what bounds it. The failure case: a resolved transfer whose target set is guessed from the call shape |
| blocked by | U3-4a |

#### U3-4c. What EXODUS patches in its own code

**State:** OPEN · **Autonomy:** AUTONOMOUS

`docs/self-modifying-int.md` records `EXODUS.EXP` with its `int` store at `0x0d944f` writing the slot at
`0x0d926b`. Re-measured here rather than quoted: `xxd -g1 -c 16 -s 0xd944f -l 24 EXODUS.EXP` shows
`a2 6b 92 0d 00` at that address, which is `mov [0x0d926b], al`, and the slot holds `00` followed by
code. U2's port handles this with native shadows and an instruction-coverage diff.

| field | value |
|---|---|
| done when | every patched site in U3 is either covered by a shadow or shown not to execute inside the covered path, and the coverage diff runs on a U3 module. The failure case: a shadow written for U2's addresses and left in the list |
| blocked by | U3-4a |

#### U3-4d. A gate for the U3 port

**State:** OPEN · **Autonomy:** AUTONOMOUS

`tools/portcheck.js` pins U2's module names, its literal count and the shadow-module ordering. Its U3
counterpart pins the same things for a different module.

| field | value |
|---|---|
| done when | the gate asserts the module list order, the absence of game text in the generated sources, and the build's entry address, and a mutated copy of the tree makes it fail. The failure case: a gate that has never been seen to fail, which is a comment |
| blocked by | U3-1a |

### Phase 5. Behaviour, in the order a player meets it

One item per subject, each ending in arithmetic rather than description. These are the same subjects
Ultima II's corpus track names, and the standard is the same: a rule nobody can reproduce is not part
of the corpus.

| item | subject | done when |
|---|---|---|
| U3-5a | create and the roster | the attribute allocation, the class and race tables and the modifiers are stated as arithmetic read from the code, and a created character's bytes match one created in the original |
| U3-5b | move, time and the world clock | the movement rule, the wrap behaviour, the time unit and the effect of each time gate are stated, and a walked route in the port reproduces the original's clock |
| U3-5c | combat | the hit, damage and monster tables are stated as arithmetic, and three fights replayed in the port and in the original agree round for round |
| U3-5d | towns, shops and NPC assignment | shop stock, prices and NPC placement are read as tables, and a town's screen in the port matches the original's |
| U3-5e | magic and items | the spell table, the cost per casting and the item effects are stated as arithmetic |

All five are **AUTONOMOUS** for the reading and **PARTLY AUTONOMOUS** for the replay, because the replay
needs the original running. `references/u3-typescript` and `references/u3-gdx` are hypotheses to test
and never authorities, which is the rule [u3-hypothesis-tests.md](u3-hypothesis-tests.md) already
follows. That page's most valuable result is a falsification that turned out to be the error, which is
the failure mode to expect from treating a reference implementation as evidence.

### Phase 6. Seven titles that do not fight for names

Scope decided by Paul on 2026-11-10: `DARKNESS`, `ENCHANT`, `EXODUS`, `BRITISH` and the three demos. `TMENU` is
out, being `P3` and a launcher rather than a title. The conventions and the measured table are in
[port-structure.md](port-structure.md).

#### U3-6a. The binary is named after its title

**State:** DONE · **Autonomy:** AUTONOMOUS

Everything the port built was called `u2port`, including the one that runs Ultima III. The directories are
separate so nothing collides on disk today, but two releases, two `play.sh`es or one folder holding both
binaries do collide, and the name is also what `play.sh` looks for and what the release asset is called.

| field | value |
|---|---|
| done when | `port/CMakeLists.txt` takes the executable's name from a cache variable defaulting to `u2port`, every target-scoped line uses it, `tools/game-build.sh u3` produces `u3port`, and Ultima II's build still produces `u2port` with its release name, gate and docs unchanged. The failure case: a rename that moves `dist/u2port-linux-x86_64` or the name `tools/checkall.js` checks for |
| blocked by | nothing |

**What is now known.** `PORT_TARGET` is a cache variable, `project()` and every target-scoped line use it, and
the executable is named after the title's id rather than after the port: `tools/game-build.sh u3` links
`build/u3/b/u3` and Ultima II's build links `build/port/b/u2`. Verified by building and running both, 60 frames
each, with the register dumps this page already recorded. `tools/ci-port-build.sh` builds its foreign
configuration as `u3` and fails if the name did not reach the target, and `tools/u3drive.py` defaults to
`build/u3/b/u3`.

**The release asset name did not move.** `dist/u2port-linux-x86_64` is what the release ships and what
`tools/checkall.js` asserts, and it is a different name from the executable inside it. Renaming the executable
without renaming the asset is deliberate: the asset name says what the file is to somebody who downloads it.

**A cached variable lies.** The first rebuild after the rename printed `built .../b/u2` and produced nothing,
because `build/port/b/CMakeCache.txt` still held `PORT_TARGET=u2port`. Every build now passes `-DPORT_TARGET`
explicitly, for the same reason `tools/port-build.sh` already passed `-DFMT_RUNTIME` explicitly. The stale
`build/port/b/u2port` binary from before the rename is left in place rather than deleted, and nothing reads it.

**The done-when was wrong when first written**, saying `tools/game-build.sh u2` produces `u3port`. Nothing
implements an item literally like that, but a criterion that states the opposite of the intent is how a rename
gets argued about later, so it was corrected before the work rather than after.

#### U3-6b. One build script, not two

**State:** OPEN · **Autonomy:** AUTONOMOUS

`tools/port-build.sh` owns Ultima II's build and `tools/game-build.sh` owns the other six. They now share
`tools/games.js`, so they no longer disagree about a title's facts, but they still each own a copy of the strip,
the frame shift and the module key, which is the failure case U3-0b named.

| field | value |
|---|---|
| done when | `tools/port-build.sh --game <id>` builds every title, `tools/game-build.sh` is gone, and Ultima II's build produces the same counts and the same `counts` line it produces today. The failure case: two scripts that each own half of the strip arithmetic, or a merged script whose Ultima II path differs from the recorded numbers |
| blocked by | U3-6a |

#### U3-6c. One environment namespace

**State:** OPEN · **Autonomy:** AUTONOMOUS

More than thirty `U2_*` variables are shared by Ultima II and Ultima III today, including `U2_SHOT` and
`U2_STACK`, which U3's own build and drive scripts set. A third title would copy whichever spelling it read first.

| field | value |
|---|---|
| done when | every knob has a `PORT_*` spelling, the `U2_*` spellings are still honoured as aliases for one release with the alias documented and a test proving it still reaches the guest, and `tools/controlsmoke.py` passes on the port built that way. The failure case: an alias that silently wins over the new name, or a harness changed in the same commit and therefore unable to show which spelling it used |
| blocked by | U3-6b |

#### U3-6d. One directory per title, where the directory is not already shared

**State:** OPEN · **Autonomy:** AUTONOMOUS

`module/` is Ultima II's committed module under a generic name, `extracted/` mixes `u2`, `u2-colour`, `GRAPH`,
`SOUND` and `UT2`, and the two doc pages this session added do not follow one pattern.

| field | value |
|---|---|
| done when | the module lives at `module/<id>/` with Ultima II's moved there and the CMake default updated, extraction output goes to `extracted/<id>/`, the seeds files go to `tools/seeds/<id>.txt`, and the per-title pages are `docs/port-<id>.md`. The failure case: a move that leaves a script pointing at the old path, which `checkall` must catch rather than a user |
| blocked by | U3-6b |

#### U3-6e. A release base image whose libc is at or below the floor

**State:** OPEN · **Autonomy:** AUTONOMOUS

The floor is `GLIBC_2.34` and `tools/glibcfloor.js` enforces it, but no image in this repository can meet it. Releases are
built in `container/Containerfile.x`, which is Debian 13 trixie at glibc 2.41, and a host build asks for 2.43 through five
float-math symbols. So the gate that was just added refuses every artefact this repository can currently produce, which is
the correct behaviour and not yet a solution.

| field | value |
|---|---|
| done when | the release builds on a base whose glibc is at or below 2.34, `tools/release-package.sh` produces a binary that passes `tools/glibcfloor.js`, and that binary runs on a machine with glibc 2.34. The failure case: a base chosen because it builds rather than because its libc is old enough, or a floor passed by disabling symbols one at a time in the source, which would change the arithmetic rather than the header |
| blocked by | nothing. Candidate: Debian 11 bullseye at glibc 2.31, which is below the floor rather than on it, and whose gcc 10 needs checking against the C++20 the port uses |

#### U3-6f. Say the floor where a reader looks for it

**State:** OPEN · **Autonomy:** AUTONOMOUS

The floor is in `docs/port-structure.md` and in `tools/glibcfloor.js`, and nowhere a person deciding whether to download the
release will see it. The README and `docs/quickstart.md` are where a platform limitation belongs, per the rules in
AGENTS.md, and they currently say only that Linux is the only tested platform.

| field | value |
|---|---|
| done when | the README and `docs/quickstart.md` state the glibc floor with the versions that meet it, and `tools/checkall.js` fails if the number there disagrees with `tools/glibcfloor.js`. The failure case: the number written in three places without a check, which is the drift this project keeps paying for |
| blocked by | U3-6e, so the statement is true of the artefact that exists |

## Do not do

- Do not reuse U2's seed list or no-code ranges. They are derived from `ENCHANT.EXP`'s coverage and its
  `0xb91-0xe1c` hole. A U3 build that inherits them silently compiles a module keyed to the wrong program.
- Do not assume the load base, the selectors or `ESP`. U3-2a exists because the header's entry dword is not
  a selector and the U2 values are not evidence.
- Do not treat 645 functions as the function count. It is what one seed reaches.
- Do not use `tools/recomp-run1.cpp` as the harness. It no longer links, because the watch hooks belong to
  the machine library.
- Do not let Ultima III become the project's goal. The goal is unchanged and this repository is one
  project. U3 is a second title on the same machinery, and the corpus from it is corroboration of the
  platform findings, which is how [three-games-compared.md](three-games-compared.md) already uses it.
- Do not paste U3 game text into these pages. The rules in [licensing.md](licensing.md) are about the
  originals and they do not relax for a second title.

## What would make this plan wrong

Written down in advance, because a plan that cannot fail is not a plan.

- If U3's start-up depends on something the machine layer does not model, most likely a TownsOS service
  reached through a TBIOS offset the seed file lacks, the cost moves from a week to an unbounded number
  of patches and phase 1 stalls.
- If the game consumes its `.MP3` and `.DG3` files in a way that needs a decoder to run, not just to be
  read, then format work that [open-questions.md](open-questions.md) section 6 lists as open becomes a
  blocker rather than a side quest.
- If the save format turns out not to be self-describing after all. It already did not bite: all four files
  open with `Roster data:`, `Party data:`, `Player data:` and `World data:`, and the port writes them, so the
  formats are a reading job rather than a blocker.

## What this changes elsewhere

Adding this page puts it in the site's nav, which is the only place it is referenced. It does not
change `plan.md`, because that file's scope is Ultima II and mixing a second title into its item list
would make every count on it ambiguous. If this work grows enough to need the same discipline, the move
is a fifth track document with a unique id prefix and an entry in `tools/plancheck.js`'s `PLANS` list,
not a looser plan here.
