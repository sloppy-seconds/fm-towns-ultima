# What the savestate says about the addressing limit

The test proposed in [addressing-limits.md](addressing-limits.md) has been run. It did not
give the answer that was expected, and what it gave is more useful.

## Method

`ENCHANT.EXP` is 1,072,366 bytes as a flat image. A death-screen savestate
(`/var/tmp/death.state`, 7,607,281 bytes) contains the loaded program.

The image base is **`0x762d2`**, confirmed independently rather than assumed: searching the
state for 4 KB windows of the image finds image offset `0x2000` matching state offset
`0x782d2` for a contiguous **50,648 bytes**, which implies a base of `0x782d2 - 0x2000 =
0x762d2`. This agrees with the value recorded in an earlier session.

Single-byte and short probes give false matches through repeated fill patterns. Only the
long-run search is reliable, and `tools/statefind.js` now does it that way.

## Result: the image is divided into four kinds of region

`tools/statesegments.js` compares the image against the state in 256-byte blocks:

| class | blocks | approx bytes |
|---|---|---|
| identical to the file | 2,446 | 626,176 |
| zero at runtime | 790 | 202,240 |
| different | 953 | 243,968 |

Classifying 4 KB blocks instead of 256-byte blocks makes the structure clear. There
are four kinds of region, not three:

| class | 4 KB blocks | bytes |
|---|---|---|
| zero in the file AND zero at runtime | 130 | 532,480 |
| different in both | 63 | 258,048 |
| in the file but **zero at runtime** | 57 | 233,472 |
| identical and non-zero | 12 | 49,152 |

Mapped across the image, one character per 4 KB:

```
0x000000  DDSSSSSSSSSSSSDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD.........................
0x064000  ......................ZZ............................................................................
0x0c8000  .....ZZZZZZZZZ.ZZZ.ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ
```

Reading that:

- `0x000000` to about `0x004000`: a boundary shim, then **identical** strings and data
- about `0x013000` to `0x064000`: **DIFFERENT**, roughly 330 KB
- `0x068800` to `0x0c8000`: **zero in both**, which is the 337 KB BSS run already recorded
- `0x0c9000` to `0x105cee`: **in the file but zero at runtime**, roughly 230 KB

**The boundary is `0x7a0e0`.** Everything below survives byte for byte. Everything above
diverges.

## The DIFFERENT region is graphics, not code

This is the part that had to be checked, because "different" could mean relocated code.

Sampling the region shows the file holds **zeros** and the state holds **image data**:

| address | file | runtime |
|---|---|---|
| `0x13000` | 24 zero bytes | `49 67 6b 4d 96 96 ff ff ff 87 7f 7f...` |
| `0x30000` | 24 zero bytes | `23 18 0d 03 80 83 80 07 14 24 31 3a...` |
| `0x40000` | 24 zero bytes | `77 77 77 ... 33 33 33 ...` |

So `0x013000` to `0x050000` is **BSS in the file that holds loaded artwork at runtime**. It is
not code and it is not relocated code. The `77` and `33` fill patterns are the same tile values
already found in the map data, which is consistent with loaded tile sheets.

## What is on each side of the boundary

**Below `0x7a0e0`, identical at runtime:**

| address | content |
|---|---|
| `0x22cc` | `Q:\GRAPH\MAP2_1.TIF` and neighbouring asset paths |
| `0x5501` | the five debug mode names |
| `0x1fc0` | `YASURAGI`, `Voyger`, the music titles |

Those are the things that *do* resolve as references.

**Above `0x7a0e0`, zero at runtime:**

| address | content in the file | at runtime |
|---|---|---|
| `0x7a0ec` | `01 00 00 00` | 0 |
| `0x7a0f0` | `05 00 00 00 05 00 00 00 6a 00 00 00` | 0 |
| `0x7a7d0` | object array base | 0 |
| `0x7a864` | the string pointer table | 0 |
| `0x7aee4` | text window array base | 0 |

And further up:

| address | content in the file | at runtime |
|---|---|---|
| `0xd8f84` | the 170-entry code pointer table | 0 |
| `0xe4086` | the switch jump table | 0 |

From `0x0e0200` to `0x105cee`, **154,350 bytes are zero at runtime** even though the file has
data there.

## And the upper region holds no resident code either

The last thing to check was whether the zeroed upper region is data only. It is not.

The five call sites that `coderefs.js` found pushing asset paths are at `0xe23d6`, `0xe240a`,
`0xe9c4a`, `0xeb011` and `0xf5485`. At runtime, **all five read as zeros**, even though they
are code.

| site | file | runtime |
|---|---|---|
| `0xe23d6` | `00 00 6a 0b e8 f1 48 00` | zeros |
| `0xe9c4a` | `a1 b4 a6 07 00 89 45 fc` | zeros |
| `0xeb011` | `56 6a 00 e8 1b 77 ff ff` | zeros |
| `0xf5485` | `00 00 00 68 10 7e 00 00` | zeros |

So the top ~230 KB of the binary is **not resident** at the moment the screenshot was taken.
That region covers `0x0c9000` to `0x105cee`.

The most likely reading is that `ENCHANT.EXP` is **overlayed**: a resident core plus segments
swapped in on demand, and the savestate holds only what was resident. A death screen would
not have the map drawing code loaded.

**This has a direct consequence for method.** Any scan of a savestate for a function in that
region is a **false negative**. Searching the state for the map index code, or for the glyph
writer, would fail even if the code exists, whenever the relevant overlay is not resident.

## CORRECTION: the overlay reading was wrong

The paragraph below infers that the binary is overlayed. **A two-state test has since
disproved it.** Two savestates taken at different screens show an identical resident set, so
nothing is swapped.

The real finding is simpler: the image loads contiguously at `0x762d2` up to about `0x0d0000`,
and the top 220 KB is **never loaded at all**, in either state.

See [overlay-test.md](overlay-test.md). The reasoning below is kept because it shows how a
single state led to a confident wrong answer.

## What this means

**The tables are initialised data that the game clears or overwrites on startup.** They are
in the file because they are statically initialised, and they are zero at runtime because the
game has reset them before the screenshot was taken.

This is ordinary for a game: a table of pointers used to build menus is allocated and filled
at runtime, and the copy in the executable is either a default or a dead initialiser.

**So the references are not hidden by segment-relative addressing.** Hypothesis 1 in
`addressing-limits.md` is now the *less* likely explanation. The tables really are at the
addresses the code names, and the flat-address scan is working correctly. What was being
scanned for was a reference to something that only exists at runtime.

## What this does not explain, and does not change

The **`0xEB` glyph writer** and the **`MAP2_*` index code** are still unaccounted for. Those
are code, not data, and they live below `0x0e500`, in the region that matches the file
exactly. So they are findable in principle and the earlier searches simply did not find them.

The **string table at `0x7a864`** being empty at runtime is consistent with it being built at
startup: `tools/strtab.js` found it in the file, and the game evidently rebuilds it.

## Corrections this forces

**`addressing-limits.md` listed "segment-relative addressing" as the most likely explanation.
That is now demoted.** The evidence points at runtime initialisation instead.

**The claim that 66 of 71 asset strings are "unreferenced" is unaffected.** Those strings are
real and present at runtime. The reason their references are not found as immediates is
separate and is what `coderefs.js` already documents: the loader builds or indexes them.

## The one thing still worth doing

A **second savestate taken at a different point** would distinguish "cleared once at startup"
from "cleared continuously". If the tables are populated in one state and zero in another, the
game fills them. That is cheap and it would settle the mechanism, though not the deeper
question of where the map index code is.

---

**[Addressing limits](addressing-limits.md)** **[Plan](plan.md)** **[Core routines](core-routines.md)**
