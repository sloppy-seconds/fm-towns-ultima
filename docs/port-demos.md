# The three demos: one shell, three episodes, running on Linux

`UT1DEMO.EXP`, `UT2DEMO.EXP` and `UT3DEMO.EXP` are the slideshows that introduce each episode: a header bar naming
the game, a picture, and a panel of Japanese narration that runs before the story. They are in scope by Paul's
decision of 2026-11-10 as smoke tests of the machine rather than as games (`docs/port-structure.md`), and as of
2026-11-12 all three run from the committed modules.

They are also the cheapest possible check on the port, because they exercise the presentation layer and no game
rules. Nothing about Ultima's code can be concluded from them (`docs/three-games-compared.md`) and that has not
changed.

## How to run them

From a checkout, with the unpacked archive.org zip beside the repository:

```bash
./tools/port-build.sh u1demo --no-run      # or u2demo, u3demo
U2_SHOT=/var/tmp/u1demo.png ./build/u1demo/b/u1demo --graphics=none --frames=9000
```

Drop `--graphics=none` for `--graphics=sdl` and a window opens. Run from the directory holding the five media
files, or pass the three paths the way `tools/port-build.sh` does.

**These build from the committed modules without a disc**, and so does every other title now that `module/tbios`
carries the union of the seeds. `module/u1demo`,
`module/u2demo` and `module/u3demo` hold the game halves and every title shares `module/tbios`, so
`-DRECOMP_DIR=$PWD/module/u2demo -DTBIOS_DIR=$PWD/module/tbios` is a complete build. Measured: the binaries from the
committed modules and from the from-disc recompile produce sha256-identical screenshots at 9,000 frames, for all
three.

## What was measured

Every number below came from a command run on 2026-11-12 on
`Ultima Trilogy 1-3 (1990)(Origins)(Jp-En).img`.

| id | executable | bytes | entry | esp | functions | instructions | bytes of code |
|---|---|---|---|---|---|---|---|
| `u1demo` | `UT1DEMO.EXP` | 618,433 | `0x93034` | `0xafdc4` | 393 | 11,481 | 35,609 |
| `u2demo` | `UT2DEMO.EXP` | 618,849 | `0x931d4` | `0xaff64` | 393 | 11,485 | 35,624 |
| `u3demo` | `UT3DEMO.EXP` | 619,297 | `0x93394` | `0xb0124` | 393 | 11,517 | 35,741 |

All three: 211 seeds in the runtime frame, 11 no-code ranges for the game and 3 for TBIOS, 9 jump tables (6
bounded), 30 indirect transfers unresolved, 0 refused, 0 conflicts. The TBIOS half is the shared 5,574 functions,
because a demo does not reach anything the other titles do not, so nothing per-title is contributed there.

**The extra TBIOS seed is not needed here.** `BRITISH.EXP` stopped at frame 1297 without `0x6864` before the shared
module was regenerated ([docs/port-british.md](port-british.md)). All three demos run 9,000 machine frames with the
stock seed set and zero faults, so they never reach that routine and `tools/games.js` leaves `tbiosSeeds` null for
them.

Runs, `--graphics=none`, at 300, 1,400, 4,000 and 9,000 frames: exit 0 and `grep -c 'fault at'` zero every time.

## What each one shows

Read from the 9,000-frame screenshots, and the header text is the demos' own:

| id | header |
|---|---|
| `u1demo` | `Episode I : The First Age of Darkness` |
| `u2demo` | `Episode II : Revenge of Enchantress` |
| `u3demo` | `Episode III : - EXODUS -` |

Each screen also carries `Ultima Trilogy` in the top banner, `FUJITSU` to the right, and Japanese narration in the
panel below.

## Why the three modules look so different

`diff -rq` between any two committed demo modules reports 9 of the 10 files differing, which reads like three
unrelated programs. They are not, and the arithmetic says why.

| step | file size | entry |
|---|---|---|
| u1demo to u2demo | +416 bytes | +416 (`0x93034` to `0x931d4`) |
| u2demo to u3demo | +448 bytes | +448 (`0x931d4` to `0x93394`) |

The size gap and the entry gap are the same number each time, so each demo is the previous one with a small
insertion in front of the entry, and every address above it shifts. The recompiler keys its output on addresses and
splits it across files by function count, so a uniform shift rewrites nearly every file while changing almost no
instructions. That is why the shared shell is visible in a **binary** comparison, which
`docs/three-games-compared.md` made at 91.8 percent, and not in the module text. The instruction counts do differ
slightly, 11,481 against 11,485 against 11,517, and that difference is the content region rather than the shell.
