# High C V1.7 L13: the FM Towns kit, and what it is

The strongest compiler candidate found so far, on identity rather than on output. It has not yet been made to
produce an object file, and this page records both halves.

## Why this one is different from the two already tried

| | v2.31 | v3.04 | **V1.7 L13** |
|---|---|---|---|
| date | April 1991 | January 1993 | **driver (c) 1989-1990** |
| runtime library string | 1983-1988 | n/a | **1983-1989** |
| game's runtime string | n/a | n/a | **1983-1988** |
| platform | generic DOS | generic DOS | **FM Towns** |
| libraries | sources only | installer | **`hcc.lib` plus `townslib`** |
| distribution | five floppies, plain files | interactive installer | a CD image |

**Three things point at this kit and not at the others.**

**It is the FM Towns kit.** `hc386/townslib/` holds `include` and `lib` for the platform the game targets, and the
CD ships the Fujitsu extender: `386|DOS-Extender Version 1.2aJ L51, Copyright (C) 1986-1991 PharLap and Fujitsu
Ltd., Director: TownsOS`. A generic DOS High C would not ship that.

**The runtime library is one year from the game's, not two.** The game embeds `1983-1988`. This kit's compiler
carries `1983-1989`. v2.31 also carries `1983-1988` in its library strings, so this is not decisive alone, but it
is at least as close.

**It is the 1.x product line, not 2.x.** The division evidence in
[highc-forensics.md](highc-forensics.md) says the game was built by a compiler that emits hardware `idiv` for
division by a constant power of two, and that v2.31 emits a bias-then-shift reciprocal at every optimisation level
including `-O0`. A lower version number is consistent with the older, less strength-reducing code generator.

## What is on the CD

The archive is a 71,187,984-byte **MODE1/2352** CD image. It converts to a 2048-byte-sector ISO by dropping the
16-byte header from each sector, after which it mounts cleanly.

```
hc386/bin/hc386.exe     61,888 bytes, the driver, plain MZ executable
hc386/bin/hcd386.exe    the code generator
hc386/bin/hcd386p.exp   the code generator, protected mode
hc386/bin/hc386.cnf     the driver configuration
hc386/inc               headers
hc386/small/hcc.lib     a PREBUILT library, unlike v2.31 which shipped sources only
hc386/townslib/{include,lib}   FM Towns specific
run386.exe              386|DOS-Extender 1.2aJ L51, Fujitsu build
```

## The two configuration traps, both found and both fixed

**The driver hardcodes the CD drive.** `hc386.cnf` contains

```
NATIVERUN=q:\run386.exe -nocrt
```

`Q:` is where the CD would be on a real Towns. Off the CD, every compile fails with

```
(C:\HC\BIN\HC386:) q:\run386.exe:file not found
```

which reads as a broken installation rather than a stale path. Fixed by repointing `NATIVERUN` at the copy of the
extender on `C:`.

**The header path variable is `IPATH`, not `INCLUDE`.** v2.31 uses `INCLUDE`. The CD's own `autoexec.bat` sets
`IPATH=Q:\INC\`. Setting the wrong one gets no error, just an empty output.

## Where it currently stops

With both traps fixed, `RUN386` starts and **hangs with no output**. The DOSBox window title becomes
`DOSBox-X 2024.03.01: RUN386 - 100%`, which means the extender is executing rather than failing to load.

**Running `RUN386` with no arguments also hangs**, and prints nothing. A Phar Lap extender normally prints its
version banner when invoked bare, so producing nothing at all is itself the clue.

**The leading explanation is that this extender expects TownsOS.** Its banner names TownsOS explicitly, and the
whole kit is the FM Towns edition. DOSBox-X provides a generic DOS environment; the FM Towns extender may be
probing for TownsOS services and waiting.

**What has not been tried:** running the compiler under Tsugaru, which is the FM Towns emulator this project
already uses and which boots TownsOS. The `fmtowns` container exists and boots TownsOS 2.1 L40. That is the
obvious next move and it is a different container from the DOSBox one.

## What would settle it

One successful compile, then the two-line test from [highc-forensics.md](highc-forensics.md):

```c
int f(int x) { return (x - 4) / 16; }
```

If the object contains `idiv`, this is the compiler family that built the game, and the decompile path reopens. If
it contains a bias-then-shift reciprocal, this is another dead end and the answer is that the compiler was never
shipped publicly.
