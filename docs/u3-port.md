# The Ultima III port, measured

What `EXODUS.EXP` does under this project's machine, as of 2026-11-10. The plan that owns the work is
[recompile-ultima3-plan.md](recompile-ultima3-plan.md), item ids below are its ids, and the numbers here
are the ones it asked for.

**Where it stands: the game is playable.** Paul played it on 2026-11-10 over noVNC in the container and reports
entering a town, getting into a fight, and dying. Add to that what this page measured: the port boots Ultima III,
draws the title, walks its menus, reads a character off a save floppy, creates characters, forms a party, writes all
four of the game's save files, and `Journey Onward` starts the journey with the map and the party on it.

That is the plan's goal sentence, met, for the part of the game a player reaches first. What is still unproven is
narrower than it used to be: saving from inside the game (`Q`), dungeons, and the four file formats, which remain
unread even though the port reads and writes them correctly.

## The build, in one command

`tools/game-build.sh u3` extracts `EXODUS.EXP` and `TBIOS.BIN` from the disc, strips the 512-byte `MP` header
and loader stub, derives a seed set, recompiles two modules, builds the port against them and runs.

```
program   EXODUS.EXP (904310 bytes, 81920 for TBIOS)
stripped  /var/tmp/u3-EXODUS-stripped.bin (903798 bytes, was 904310), entry 0xd8ab0 = eb56
ranges    58 for the game and 3 for tbios
counts    functions=860 instructions=45443 bytes=148461 jump_tables=86 bounded=83 indirect=30 refused=0 conflicts=0
```

The counts line is derived from the recompiler's own report, printed on every run and diffed by eye
against the previous one. Two recompiler runs into different directories produce identical counts.

## The seeds, and the one the machine had to supply

`tools/seeds.js` derives 583 candidates for this image in 0.048 s: 572 from `call rel32` transfers, 126
single-caller targets promoted by a High C prologue, 5 callback immediates and 6 address-taken. With the
entry that is 860 functions, 148,461 bytes of the 903,798-byte image, zero walk conflicts.

One address no static rule finds, and it is worth naming because it is the shape of the rest:
`call dword ptr [0xb3178]` at guest `0xd4ef3`, whose slot is **zero in the image**. The program writes
it at run time by pushing the address (`68 4c c1 0b 00` at guest `0xbecdf`). So the target is visible as
an immediate but not as a call target, in code the executable reaches through a pointer it built. The
port stopped there at frame 95, the address was added to `tools/u3-seeds.txt`, and it has not stopped
since.

## What the port draws

At frame 200 the captured frame is the title: the dragon artwork, `Ultima III - EXODUS -` in the header
bar and `FUJITSU` at the right, read off the PNG by `tools/look.py` rather than inferred. Frames 400 and
800 are the same screen animating. The art does not come from the disc, since the game has opened no
`GRAPH` file yet, so the title art is inside the executable.

## The route into the menus, measured

Every key below was sent over the control socket with `tools/u3drive.py`, and the screen after it was read
before the next key was chosen. The frames are the run's own, and the run is deterministic.

| frame | key | screen it produces |
|---|---|---|
| 500 | space | title gives way to the blue option box: `Return to Town`, `Organize a Party`, `Journey Onward` |
| 800 | Down | highlight moves to `Organize a Party` |
| 1100 | Return | `PARTY ORGANIZATION`: `Examine the Register`, `Create a Character`, `Form the Party`, `Disperse the Party`, `Terminate a Character`, `Main Menu`, `Look at a Character` |
| 1400 | Return | `Examine the Register`: slot 1 is `ASSS`, male, elf, barbarian, good. Slots 2-20 empty, `Press Space` |

Two things this establishes beyond the route itself. Digits reach the guest, because `Create Entry
(1-20)` accepted `1` and answered `Create (Not Empty!)`, so slot 1 is taken. And the game parses
`A:\ROSTER.UT3` through the port's floppy layer: the character it printed came off a disk image this
project has never written to.

That route is `ROUTES["title-to-register"]` in `tools/u3drive.py`.

## The disk, and the four files a party writes

**This section was wrong and is replaced.** It said a playable disk could only come from the original, and that
`WORLD.UT3` was the missing piece. A session on 2026-11-10 created characters and formed a party in the port, and
the port wrote all four files itself.

| file | size | first bytes |
|---|---|---|
| `ROSTER.UT3` | 14,676 B | `Roster data:ULTIMA III for FM-TOWNS` |
| `PARTY.UT3` | 197 B | `Party data:ULTIMA III for FM-TOWNS` |
| `PLAYERS.UT3` | 3,050 B | `Player data:ULTIMA III for FM-TOWNS` |
| `WORLD.UT3` | 4,787 B | `World data:ULTIMA III for FM-TOWNS` |

Every one names itself in its first bytes, which is how a file can be identified without knowing its format. The
same run on Ultima II wrote `ROSTER1.UT2` (3,659 B) and `WORLD1.UT2` (68,096 B), which are the sizes
[save-files.md](save-files.md) already records for that title.

So `A WRONG DISK! Push SPACE` was the empty-disk case, not a lock: the disk held `ROSTER.UT3` alone, and the other
three files did not exist yet. Forming a party is what creates them, and the port does that.

### Still unknown: the four formats

Four files with sizes and self-describing headers is not a field map. Nothing in this repository can yet say what
`WORLD.UT3`'s 4,787 bytes contain beyond the word `Mons` near the start, or how `PARTY.UT3`'s 197 bytes name the
members. That work is plan item U3-3b and it is reading, not guessing.

### The attempt that turned out not to be needed

Before the party route worked, a second container was started to drive the original to make a disk, with its own
ports, the disc read only, and copies of the floppy and CMOS in `/var/tmp` so nothing shared could be written. It
reached the TownsOS launcher and stopped, because that launcher is mouse driven and the vision model's pixel
readings came back in a coordinate space of their own. The container was removed with the floppy copy untouched.

That effort is recorded rather than deleted because it is the shape of a wrong turn: the answer was one menu
further along in the port, not an emulator session.

## Journey Onward works, and the two defects that were hiding it

**`Journey Onward` now starts the game.** Measured 2026-11-10 in the Alma container: title, `Down Down Return`, and the
port draws the map with the party on it, four characters and the location `South Wind`. Two defects had to be fixed, and
neither was where the crash appeared to be.

**Defect 1: the saves directory was ignored whenever any path was given.** A: is served either from a 1.26 MB image or
from `./saves` as ordinary files, and the directory was chosen only when the program had **no arguments at all**. Passing
the three media paths, which every tool here does and which is the only way to run when the media is not in the current
directory, silently left A: as an unopened image. Every floppy access then failed, and the game answered
`A WRONG DISK! Push SPACE`. Measured with three readable save files sitting in `./saves`. The rule is now on whether a
floppy was **named**, which is the fourth positional argument, and not on whether anything was named.

**Defect 2: the driving tool threw the port's output away.** `tools/u3drive.py` read the port's stdout only until the
control socket bound, then stopped. A fault at frame 1551 was written into a pipe nobody read, so "no fault in run.log"
was a statement about the log rather than about the run. A reader thread now drains it, and one reader owns the pipe
because the first version gave it two and the thread swallowed the `control` line.

**The crash itself was one missing function.** With both fixed, `Journey Onward` faulted at guest `0x0d6f4a`, reached from
`0x0d5dd7` at frame 1551. It is a leaf with no prologue, opening `cmp byte [0xb4131], 2`, which is why no static rule found
it: the same shape as the four callbacks already in `tools/u3-seeds.txt`. One line in that file, one rebuild, and the game
started. The record of that seed, with the fault that produced it, is in the file beside it.

## A played session, 2026-11-10

Paul played the port over noVNC in the container and reports reaching a town, getting into a fight, and dying. That
is a player's observation and it is the oracle, so it is recorded as such rather than as one of this page's
measurements.

What it puts beyond doubt, because each of these is a screen or a code path nobody had reached before:

| what | where it is exercised |
|---|---|
| town entry and the town screen | the town renderer, its NPCs and its tiles |
| combat | a fight started, rounds resolved, damage applied |
| death | the party died and the game handled it |

What that leaves as genuinely unknown, and it is a shorter list than yesterday: `Q` (Quit and Save) from inside the
game, which is the only path that writes the four save files from a *played* state, dungeons, and the four file
formats themselves.

## The DOS extender calls, counted

26 `int 21h` sites in the emitted module. Fourteen carry an immediate:

| `AH`/`AL` | count | what it is |
|---|---|---|
| `2502` | 3 | Phar Lap: read the protected-mode vector |
| `2503` | 3 | Phar Lap: read the real-mode vector |
| `2506` | 3 | Phar Lap: set the protected-mode vector |
| `2507` | 3 | Phar Lap: set the protected mode and real-mode vector |
| `30` | 1 | get DOS version |
| `4a` | 1 | resize the memory block |

The other twelve compute the function number. `fmtownskit/runtime/towns_dos.cpp` serves `2502`, `2503`,
`2504`, `2506` and `2507` already, which is why the game gets as far as it does: it installs interrupt
vectors through the extender and the port delivers them.

## The selectors are the game's, not the port's

Ultima III loads its own segment registers after start-up. The emitted code contains nine `mov ds, eax`,
four `mov ss, eax`, four `mov es, eax` and four `mov fs, eax`, plus `mov ss, word ptr [0xb318d]` and
`mov ss, word ptr [0xb3823]`, which load a selector from the program's own data.

So the port's initial CS `0x000c`, DS/ES/SS `0x0014` are replaced by the program early, and what remains
is the load base. `0x400000` is Ultima II's measured value and Ultima III's unmeasured one, and the
program cannot see it: the image is flat, `relocCount` is 0, and every reference is segment-relative.
That argument is why the base is still an assumption that has not yet mattered, and why it is written
down as an assumption rather than as a finding.

What is no longer assumed is the stack pointer. `port/main.cpp` reads it from the `MP` header at `0x0e`,
which gives `0x000f5a78` for `EXODUS.EXP`. The same field on `ENCHANT.EXP` is `0x11eb10`, which is what a
live `STA` reported at that game's entry, so the field is the loader's value where it has been checked.

## Reproducing

```
tools/game-build.sh u3                    # recompile, build, run 120 frames
tools/game-build.sh u3 --reuse --frames 200  # with a shot, if you set U2_SHOT
./tools/u3drive.py --keys "space@500,Down@800,Return@1100,Return@1400" --frames 1900
./tools/look.py analysis/u3drive/final.png "read every word"
```

`node tools/verify.js` asserts the container and entry facts this page rests on, and
`node tools/checkall.js` runs it with everything else.
