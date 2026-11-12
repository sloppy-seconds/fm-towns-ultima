# British: the Lord British message, running on Linux

`BRITISH.EXP` is the publisher's splash that plays before any of the three games: a header bar, a photograph of
Lord British, and a message that scrolls up the right-hand panel in Japanese and then in English. It is in scope as
a second consumer of the machine rather than as a game (`docs/port-structure.md`), and as of 2026-11-12 it runs end
to end on Linux.

## How to run it

From a checkout, with the unpacked archive.org zip beside the repository:

```bash
./tools/port-build.sh british --no-run
U2_SHOT=/var/tmp/british.png ./build/british/b/british --graphics=none --frames=9000
```

Drop `--graphics=none` for `--graphics=sdl` and a window opens. Run it from the directory that holds the five media
files, or pass the three paths the way `tools/port-build.sh` does:

```bash
./build/british/b/british --graphics=sdl BRITISH.EXP build/british/TBIOS.BIN build/british/disc.cue
```

## What was measured

Every number below came from a command run on 2026-11-12, on the disc image
`Ultima Trilogy 1-3 (1990)(Origins)(Jp-En).img`.

| step | command | result |
|---|---|---|
| extraction | `node tools/getfile.js BRITISH.EXP --disc <img>` | 360,481 bytes, matches `tools/games.js` |
| strip | `tail -c +513` | 359,969 bytes, entry dword at `0x14` is `0x54094`, bytes at `0x54094` in the stripped image are `eb 56` |
| seeds | `tools/seeds.js --bin BRITISH.EXP --emit --shift 0x200` plus the entry | 213 in the runtime frame, no measured seed file for this title |
| no-code ranges | `tools/codelimits.js --args` | 12 for the game, 3 for TBIOS |
| recompile, game | `python3 -m fmtownskit.recomp` | 395 functions, 11,503 instructions, 35,676 bytes, 9 jump tables (6 bounded), 30 indirect unresolved, 0 refused, 0 conflicts |
| recompile, tbios | same pass | 5,574 functions, 15,398 instructions, 56,493 bytes. That is the union of the titles' seeds, which is what `module/tbios` now holds |
| coverage | `tools/insncoverage.py` | 11,504 instruction addresses |
| run, 120 frames | `--graphics=none` | exit 0, no fault |
| run, 9,000 frames | `--graphics=none` | exit 0, zero faults, message displayed in full |

The screenshot at 9,000 frames is the finished state: the header reads `Ultima Trilogy` and `Message from Lord
British`, the photograph has the `Lord British` signature drawn over the bottom of it, and the panel holds the whole
message ending `We hope that you will enjoy these worlds brought to you on the advanced technology of the FM-TOWNS.`

## The one thing that did not work, and what fixed it

The first complete run stopped at machine frame 1297, partway down the message, with

```
fault at 0110:00006864: no recompiled function at 0110:00006864 (eip 000039f1, frame 1297)
```

and exit code 3. That is a TBIOS routine, not a routine of `BRITISH.EXP`. The TBIOS module is seeded from
`tools/tbios-seeds.txt`, which is every distinct offset that executed in segment `0110` during a live **Ultima II**
boot, and Ultima II never called this one. `tools/dis32.py build/british/TBIOS.BIN 0x6864 0x40` shows real code at
the address, a `gs:[ebp+...]` based calculation using `shld`, `imul` and `sar`, so the seed is a function start and
not a guess.

The fix is per title, because the trace it is missing from is one game's trace. `tools/games.js` gained a
`tbiosSeeds` field naming a file of extra segment-`0110` offsets, and `tools/port-build.sh` appends them to the
TBIOS spec. `british` is the first title to need one and its file is `tools/tbios-british-seeds.txt`. With that
single seed the same run reaches frame 9,000 with zero faults.

## The gap, closed on 2026-11-12

`module/tbios` used to be the Ultima II capture's module, with no function at `0x6864`, so a build from the
committed modules stopped at frame 1297 with `no recompiled function at 0110:00006864`. That was measured on the
binary built from `module/british` and `module/tbios` alone, before the fix below, and it exit 3.

It now carries the union of every title's seeds, so the same committed-module build runs to frame 9,000 with zero
faults, and its screenshot is sha256-identical to the from-disc recompile's:

```bash
cmake -S port -B build/british-release -DPORT_TARGET=british -DPORT_PROGRAM=BRITISH.EXP \
	-DRECOMP_DIR=$PWD/module/british -DTBIOS_DIR=$PWD/module/tbios -DU2_FOREIGN_MODULE=ON
```

The cost was measured before it was paid, and it is why the regeneration was done on purpose rather than as a side
effect. Adding one function rewrites **290 of the 302** `p_tbios_*.cpp` files, and 292 of the directory's 304 files
once `p_tbios_funcs.h` and `p_tbios_table.cpp` are counted, because the recompiler splits its
output by function count and one more entry moves the boundaries. The module goes from 5,573 functions and 15,288
instructions to 5,574 and 15,398.

All seven titles were rebuilt against the regenerated module and compared at the same frame count. Ultima I, II,
III and the three demos produce byte-identical screenshots before and after, so the extra function changed nothing
they reach, and `british` is the only one whose behaviour moves.

## Translating it, and why it is not the demos' problem

This title carries **two** blocks of the same message: a Japanese one of 24 lines in Shift-JIS, and beside it an English
one of 13 lines in ASCII, drawn one after the other. So the demos' workbook has no direct equivalent here: English already
exists, and a workbook is for a third language.

Measured 2026-11-13 from the executable:

| block | lines | characters per line | encoding |
|---|---|---|---|
| Japanese | 24 | 4 to 16 | Shift-JIS pairs |
| English | 13 | 14 to 30 | ASCII |

**There is no room to grow.** Each line ends either at `0x0A` or at a run of `0x00`, with 0 to 4 bytes of padding after
it, so a replacement must be at most as long as the line it replaces. That is unlike the demos, whose strings are all
followed by `00 00` and which `tools/demopatch.js` sizes from the gap to the next string.

Two consequences for anyone patching this. The Japanese block is the harder target because half its lines are under ten
characters, which a Latin script cannot say anything in. And the patcher does not accept `BRITISH.EXP` today: it is
limited to the three demos, and a british table would also need the mixed `0x0A`/`0x00` terminators written back
unchanged rather than one terminator assumed for the block.
