# The three demos: one shell, three episodes, running on Linux

`UT1DEMO.EXP`, `UT2DEMO.EXP` and `UT3DEMO.EXP` are the slideshows that introduce each episode: a header bar naming
the game, a picture, and a panel of Japanese narration that runs before the story. They are in scope by Paul's
decision of 2026-11-10 as smoke tests of the machine rather than as games (`docs/port-structure.md`), and as of
2026-11-12 all three run from the committed modules.

They are also the cheapest possible check on the port, because they exercise the presentation layer and no game
rules. Nothing about Ultima's code can be concluded from them (`docs/three-games-compared.md`) and that has not
changed.

## Can it be English

The narration is **not** in the artwork. It is Shift-JIS in the executable, drawn with the kanji font TownsOS places
at `0x3b7e1`, which is the `kanji font 188 glyphs ... from \UTFONT.FNT` line in a run's log and why the demos reference
no font file of their own. The only pictures they load are `HEADTTL.TIF` and `UT1_1.TIF` to `UT1_4.TIF`, and none of
those holds a word of it.

**Measured 2026-11-12 with `node tools/demotext.js --compare`:**

| demo | decodable Shift-JIS runs | total bytes | from | to |
|---|---|---|---|---|
| `UT1DEMO.EXP` | 21 | 1,340 | `0x0014b4` | `0x001a36` |
| `UT2DEMO.EXP` | 20 | 1,764 | `0x0014b4` | `0x001bce` |
| `UT3DEMO.EXP` | 24 | 2,102 | `0x0014b4` | `0x001d2e` |

A run is a maximal sequence of two-byte characters, four characters or longer, that decodes as strict Shift-JIS. The
table starts at the **same file offset in all three** and the counts differ, so the shell is shared and the narration
is not: English is a translation per episode, not one table used three times.

### ASCII draws in that panel

Patching all 21 runs of a scratch copy with plain Latin letters, at the same byte lengths, and photographing the run at
frames 1,500 and 2,400 shows the narration panel full of `ABCDEFGHIJKLMNOP...`. So the renderer handles ASCII and an
English string would draw. The renderer's glyph source is the same font either way. The panel is not a picture.

### A translation has to fit, and the fit is tight

Every string is followed by `00 00` and the next one begins 2 to 4 bytes later, so the room for a replacement is the
original span less that 2-byte terminator. Measured over the pool: 18 to 82 bytes per line and **1,370 bytes over 21
strings** for Ultima I's demo, which is 30 bytes more than the Japanese occupies.

That is the constraint that matters, and it is why the answer is "yes, if the English is terse". Twenty-two Japanese
characters occupy 44 bytes, and the same sentence in English usually needs more than 46 characters. Some lines will fit in
place and some will not, and the ones that do not have to move.

### Moving a string is possible, and it is per string

Each string is referenced by a 32-bit literal in the code, not through a table: 19 of the 21 have a dword equal to
their runtime address somewhere in the image, and the first five of those sit at `0x8f02d`, `0x8f047`, `0x8f05a`,
`0x8f077` and `0x8f091`, between 19 and 32 bytes apart, which is the shape of a run of draw calls each carrying its own
immediate. So a longer translation can be put in free space, of which this binary has plenty, and the immediate that
points at the old address patched to match. That is one edit per string rather than one edit per pool.

**What this does not establish.** That the code takes a length at all, rather than reading to the NUL: the 2-byte
terminator and the tight packing are consistent with either, and it was not traced. It does not change the arithmetic,
because the next string starts where it starts.

**Why the output is not in this repository.** The strings are the game's dialogue, and the rule in
[licensing](licensing.md) is that dialogue and long strings never go into documentation. `tools/demotext.js` takes an
executable and prints the table, and `--out` writes under `extracted/`, which is gitignored. The tool is the only thing
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
