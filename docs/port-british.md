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
| recompile, tbios | same pass | 5,574 functions, 15,398 instructions, 56,493 bytes. Without the title's extra seed it is 5,573 / 15,288 / 56,115 |
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

## The gap that is still open

`module/tbios` is the committed TBIOS module and it was regenerated from the Ultima II capture, so it has no
function at `0x6864`. A build from the committed modules therefore still stops at frame 1297:

```bash
cmake -S port -B build/british-release -DPORT_TARGET=british -DPORT_PROGRAM=BRITISH.EXP \
	-DRECOMP_DIR=$PWD/module/british -DTBIOS_DIR=$PWD/module/tbios -DU2_FOREIGN_MODULE=ON
```

Closing it means regenerating `module/tbios` with the union of the titles' seeds, and that is not a small or a
local act. Measured with `diff -rq module/tbios <fresh recomp>`, adding one function rewrites 292 of the 302
`p_tbios_*.cpp` files, because the split of functions across files moves with the count, and that module is shared
by every title. It needs doing on purpose, with Ultima I, II and III re-verified afterwards, and not as a side
effect of a branch that set out to play a splash screen.

`module/british` is committed regardless. It is the game half, it is what the recompiler emitted for
`BRITISH.EXP`, and the fault above is not in it.
