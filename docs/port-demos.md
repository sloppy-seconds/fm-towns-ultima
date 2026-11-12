# The three demos: one shell, three episodes, running on Linux

`UT1DEMO.EXP`, `UT2DEMO.EXP` and `UT3DEMO.EXP` are the slideshows that introduce each episode: a header bar naming
the game, a picture, and a panel of Japanese narration that runs before the story. They are in scope by Paul's
decision of 2026-11-10 as smoke tests of the machine rather than as games (`docs/port-structure.md`), and as of
2026-11-12 all three run from the committed modules.

They are also the cheapest possible check on the port, because they exercise the presentation layer and no game
rules. Nothing about Ultima's code can be concluded from them (`docs/three-games-compared.md`) and that has not
changed.

## The narration is text, and it is not in the pictures

The demos scroll their narration faster than it can be read, and the question that follows is whether it could be
English. The answer turns on where the text lives, and it lives in the executable rather than in the artwork.

**Measured 2026-11-12, with `node tools/demotext.js --compare`:**

| demo | decodable Shift-JIS runs | total bytes | from | to |
|---|---|---|---|---|
| `UT1DEMO.EXP` | 21 | 1,340 | `0x0014b4` | `0x001a36` |
| `UT2DEMO.EXP` | 20 | 1,764 | `0x0014b4` | `0x001bce` |
| `UT3DEMO.EXP` | 24 | 2,102 | `0x0014b4` | `0x001d2e` |

A run here is a maximal sequence of two-byte characters, four characters or longer, that decodes as strict Shift-JIS.
The strings are drawn with the kanji font TownsOS places in low memory at `0x3b7e1`, which is the `kanji font 188
glyphs ... from \UTFONT.FNT` line in a run's log, and which is why the demos reference no font file of their own. The
only pictures they load are `HEADTTL.TIF` and `UT1_1.TIF` to `UT1_4.TIF`, and none of those holds the narration.

The table starts at the **same file offset in all three** and the counts differ, 21 against 20 against 24. So the
slideshow shell is shared and the narration is not: an English version is a translation per episode, not one table
used three times. That also means a string pool of fixed offsets cannot be reused across the three.

**What this does not establish.** That ASCII renders correctly in the narration panel, and whether the code takes a
length or reads to a terminator, which decides whether a translation can be longer than the original. The games draw
English with the same renderer, so the glyphs exist; the panel's line pitch is untested.

**Why the output is not in this repository.** The strings are the game's dialogue, and the rule in
[licensing](licensing.md) is that dialogue and long strings never go into documentation. `tools/demotext.js` takes an
executable and prints the table; `--out` writes under `extracted/`, which is gitignored, and the tool is the only thing
committed. A translated executable would be a modified copy of the original and could not be hosted either, so the shape
that fits is a table the reader translates plus a tool that rewrites their own disc into a build directory.

## Running them at a readable speed

The demos scroll their text faster than a person can read, and the obvious lever does not work on them. The kit binds
**F5** and **F6** to the CPU's rate, but **a demo ends its run on any key press**, so reaching for F5 closes the thing
being watched. That was measured by Paul on 2026-11-12.

The rate is therefore a start-up argument. `--cpu-rate=N` sets it as a percentage of the FM Towns clock before the
first instruction runs, and the window's title bar shows it, the same as the keys do in a title that accepts them:

```bash
./play.sh u1demo --cpu-rate=25       # a quarter of the machine's clock
./play.sh u3demo --headless 9000 --cpu-rate=25
```

Measured on `u1demo`, `--graphics=none`, the same 900 frames either way:

| rate | guest clocks the 900 frames consumed |
|---|---|
| 100% | 239,999,420 |
| 25% | 59,999,979 |

The guest gets a quarter of the work done per frame, which is what makes the text advance more slowly in wall time.
What that measurement does **not** say is how the picture compares at a fixed frame index: it differs, because the
demo is a quarter as far along, and how far along it *should* be for comfortable reading is a judgement about reading
rather than a number. 25 percent is a starting point, not a measured answer, and the rate is a percentage of a clock
this port reproduces, so anything between 1 and 1000 is accepted and refused only outside that range.

An argument that cannot be parsed, or 0, is **refused rather than clamped**. The kit clamps to 1 percent, and a typo
of `--cpu-rate=0` silently becoming 1 percent is a run that looks like a hang.

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
