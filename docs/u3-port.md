# The Ultima III port, measured

What `EXODUS.EXP` does under this project's machine, as of 2026-11-10. The plan that owns the work is
[recompile-ultima3-plan.md](recompile-ultima3-plan.md), item ids below are its ids, and the numbers here
are the ones it asked for.

**Where it stands: the port boots Ultima III, draws the title, walks its menus, reads a character off a
save floppy, and stops at the disk validation in front of the game proper.** No fault, no workaround,
800 frames of attract loop. Everything past "Journey Onward" needs a save disk the original has not
been asked for yet.

## The build, in one command

`tools/u3-build.sh` extracts `EXODUS.EXP` and `TBIOS.BIN` from the disc, strips the 512-byte `MP` header
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

## The disk is the blocker, and it says so

`Journey Onward` answers `A WRONG DISK! Push SPACE`, and the disk holds one file:

```
AOMORI       (label)
ROSTER  UT3    14622 B  clusters 2-16 (15)
```

So the roster alone is not a playable disk. `WORLD.UT3`, `PARTY.UT3` and `PLAYERS.UT3` are named in the
binary and absent from this image. The next step is therefore not code: it is a save disk produced by the
**original** game after it has begun a journey, which is what plan item U3-3b now waits on. Synthesising
one would be guessing at a format nobody has read, which is the thing this repository forbids.

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
tools/u3-build.sh                       # recompile, build, run 120 frames
tools/u3-build.sh --reuse --frames 200  # with a shot, if you set U2_SHOT
./tools/u3drive.py --keys "space@500,Down@800,Return@1100,Return@1400" --frames 1900
./tools/look.py analysis/u3drive/final.png "read every word"
```

`node tools/verify.js` asserts the container and entry facts this page rests on, and
`node tools/checkall.js` runs it with everything else.
