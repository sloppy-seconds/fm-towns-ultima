# The recompiled modules

This directory holds the recompiler's output: each title's own 386 code, and the TBIOS layer every title calls,
translated mechanically into C++. Since 2026-11-12 it is split by owner, because the TBIOS half is the same program
for every title and 84 MB:

| directory | what | size |
|---|---|---|
| `u1/` | Ultima I's game module, 30 files | 8.2 MB |
| `u2/` | Ultima II's game module, 32 files, plus `report.txt` and `coverage.txt` | 9.0 MB |
| `u3/` | Ultima III's game module, 33 files | 8.5 MB |
| `british/` | the Lord British message's game module, 10 files | 2.3 MB |
| `u1demo/`, `u2demo/`, `u3demo/` | the three demo modules, 10 files each | 2.9 MB each |
| `tbios/` | the TBIOS module, 304 files, **shared by every title** | 84 MB |

Each game directory carries `p_game_*.cpp`, `p_game_funcs.h`, `p_game_table.cpp` and the `modules.cpp` the recompiler
wrote for it. `tbios/` carries `p_tbios_*.cpp`, `p_tbios_funcs.h` and `p_tbios_table.cpp`. They are built together, never
merged: `port/CMakeLists.txt` globs both `RECOMP_DIR` (the title) and `TBIOS_DIR` (shared), and `port/modules.cpp`
names the two modules in the order the lookup needs.

The split is what lets a release build all three binaries with no disc, no recompiler and no game byte read, and it is
why `module/tbios` has one owner: a recompilation of TBIOS changes what every title runs, so it is regenerated on
purpose rather than as a side effect of somebody's build.

It is all in git on purpose, and that is a decision rather than an oversight.

## The policy, stated

The recompiled C++ may live in git. **The original media never does, and never will:** not `ENCHANT.EXP`, not the
disc images, not the floppy, not the ROMs, not any extracted artwork, audio, font or map. Those are commercial
software still in copyright and every one of them is supplied by the reader, who is expected to own the game.

The reason for the split is preservation. Ultima II on FM Towns is abandonware with no legal way to buy it, and a
translation of its machine code into a language a person can read is the artefact most worth keeping legible for as
long as possible. A binary is not legible and a disc image is not readable, so what gets preserved is the C++.

Full policy, with the takedown route: [docs/licensing.md](../docs/licensing.md).

## Why this is code and not the game in disguise

Measured, not asserted. Across all 422 module sources, every title's game module and the shared TBIOS module, there
are three string literals of six characters or more:
`"p_game_funcs.h"`, `"p_tbios_funcs.h"` and `"ran off the end of a function"`, the last two of which are the
recompiler's own. The recompiler translates instructions. The game's text, art and maps live in its data segment and
on its disc, and none of that is emitted here. `tools/portcheck.js` re-runs that measurement over every module
directory on every check, so a future recompile that started embedding game strings fails a gate instead of quietly
shipping the game.

## Provenance

| | |
|---|---|
| source executable | `ENCHANT.EXP`, 1,072,398 bytes, sha256 `2534aaf991eae6e8b950bcc14e78c15385c58c970235edcc531644d82d6d12f5` |
| what was actually recompiled | that file with its first 512 bytes removed, sha256 `e0488548d99bfa44d3138d83fd5347b82a9b97a98ba113984b927f4b07f0ac47`, because the module is keyed by runtime address and the runtime address of file offset `0x200` is `0` |
| TBIOS | `TBIOS.BIN`, 81,920 bytes, read off the disc's data track by `tools/cd.js` |
| recompiler | `fmtownskit` at `acecc30d6ac1cb196dd6a38bb1e9d25454c9199b`, branch `mp-support` |
| game seeds | `tools/seeds.js --emit`, shifted by `0x200` into the runtime frame, plus the 88 machine-measured entries in `tools/runtime-seeds.txt`, plus the entry `0x101a20` |
| no-code ranges | `tools/codelimits.js --args`, scoped per module |
| TBIOS seeds | every distinct offset that executed in segment `0110` on the running game, checked in as `tools/tbios-seeds.txt` (5,395 of them). One more is measured but **not** in this directory: `0x6864`, which only `BRITISH.EXP` reaches. See [docs/port-british.md](../docs/port-british.md) |
| what it emitted | game: 865 functions, 43,016 instructions, 141,157 bytes, 0 refused, 0 conflicts. tbios: 5,573 functions, 15,288 instructions, 56,115 bytes, 0 refused, 0 conflicts |

## Regenerating it

```bash
./tools/port-build.sh --no-run --no-coverage --out build/port
diff -r build/port/recomp module
```

That needs the disc, because the seeds and the ranges are derived from the image. Nobody has to regenerate it to
build or play the port, which is the entire point of it being here: `cmake -S port -B build -DRECOMP_DIR=$PWD/module`
is a complete build of the port with no recompile and no game file involved.

## What is deliberately not committed

The recompiler also writes a `CMakeLists.txt` and a `selftest` binary into its output directory. Neither is here.
The CMake file records the absolute `FMT_RUNTIME` path of whoever ran it, and `port/CMakeLists.txt` already builds
the module from a `RECOMP_DIR` glob without it. A compiled binary has no business in a source repository.
