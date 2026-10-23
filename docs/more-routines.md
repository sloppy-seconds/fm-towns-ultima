# The rest of the core routines

[A1 in the plan](plan.md) listed "read the remaining top-called functions" and was marked
DONE after ten of them. That was premature. `tools/funcs.js` finds **247 targets called three
or more times**, and ten is four percent of them.

This page reads the next tier, which turned up the random number generator.

## A false lead caught while checking the RNG

Reading the RNG state required its runtime address, which required the mirror constant. A
32-byte search for the RNG body found it at state `0x336d12`, implying a mirror constant of
`0x438752` rather than the recorded `0x4392d2`.

**That was a false match.** Testing both constants against several known addresses showed:

| address | `0x4392d2` | `0x438752` |
|---|---|---|
| `0xd0000` | match | no |
| `0x101a40` | no | match |
| `0x105000` | match | no |

Neither constant fits everything, which suggested the mapping had block-level variation. It
does not. Probing every `0x1000` of the region and taking the delta between consecutive runtime
addresses gives a **consistent `-4096` per `+4096`**, which is a clean mirror.

**`0x4392d2` is correct**, as
[mirrored-region.md](mirrored-region.md) recorded. The `0x438752` reading came from `indexOf`
hitting a similar byte sequence somewhere else in the state, which is the same error class as
the one-byte probe matches recorded during the base search.

Twelve consecutive probes agreeing on a delta of exactly -4096 is evidence. One `indexOf` hit
is not.

## The RNG's runtime address is not resolved

With the mirror constant confirmed at `0x4392d2`, the RNG code at image `0x101a40` should be at
state `0x337892`. **It is not.** The bytes there do not match the file.

The RNG's state variable at `0xdfc78`, which should mirror to state `0x35965a`, reads
**`0x23`** in both savestates, surrounded by `0x1c`, `0x28`, `0x27` and `0x28`. Those are small
counters, not a 32-bit LCG state that has been running.

So one of two things is true:

- the RNG has not been called before either savestate was taken, and `0x23` is unrelated data
  that happens to sit at that address, or
- the mapping for this address is not the simple mirror.

**The first is much more likely.** Both states are menu screens. A game that seeds its
generator on first use would leave the variable untouched at a title screen and a death screen.

That means the RNG identification is sound, from reading the code, but **cannot be confirmed
from the savestates available.** Confirming it needs a state taken during play, which is
Track B.

## The random number generator at `0x101a40`

```asm
0x101A40  imul eax,[0xdfc78],0x41c64e6d
0x101A4A  add  eax,0x3039
0x101A4F  mov  [0xdfc78],eax
0x101A54  mov  ax,[0xdfc7a]
0x101A5A  and  ah,0x7f
0x101A5D  movzx eax,ax
```

That is a **linear congruential generator**:

```
state = state * 1664525 + 1013904223     (0x41c64e6d, 0x3039)
```

Those two constants are the well-known Numerical Recipes LCG, which several 1990-era C
libraries shipped as `rand()`. The state lives at `0xdfc78`.

The output path is the interesting part. It reads a **16-bit** word starting at `0xdfc7a`,
which is two bytes into the same 32-bit state, masks the high byte with `0x7f`, and zero
extends. So the returned value is a **15-bit number**, `0` to `32767`, assembled from
`(state >> 16) & 0x7fff`.

That is a conventional "high bits of the LCG" output, and the `0x7f` mask on `ah` is what makes
it 15 bits rather than 16.

**Why this matters.** Every "the game rolls a random number" question on this project has been
unanswerable because there was no way to measure what a roll produces. Now there is: the
generator is identified, its constants are exact, and its output range is known. Any formula
that reads a random value can be evaluated exactly, given the state.

The seed is at `0xdfc78`. Whether the game seeds it from the clock has not been checked.

## The other functions read

| entry | calls | what it does |
|---|---|---|
| `0xe9e0c` | 91 | scans forward for `=` and returns the byte after it. This is the **`KEY=value` parser** for the roster, which explains why `ROSTER1.UT2` is that format |
| `0xe44b0` | 85 | skips spaces and tabs, then parses decimal digits. **`atoi`** |
| `0xe1c5c` | 85 | `call` then `idiv` then `xchg eax,edx`, so it returns the **remainder**. A modulo helper |
| `0xe9920` | 84 | a long multiply chain: `eax*5`, `<<3`, `-eax`, `<<4`, `+eax`, `<<3`, which evaluates to a large constant multiple. Used before delay or coordinate work |
| `0xfe11c` | 58 | a second **BIOS gateway**, `push fs` / `push gs` / `lgs edi,[0xdea2c]` / `mov ax,0x110` / `mov fs,eax`. Same segment `0x110` as `0x0c5d` |
| `0xe55c0` | 52 | a bounded copy loop over `[ebp+0xc]` with destinations from `[ebp+0x8]` and `[ebp+0x14]` |
| `0xe77d8` | 51 | calls `0xe6b1c` and `0xe6e48` with constant `2`, so it operates on **text window 2** |
| `0xe5aac` | 39 | passes `0x7a7d8` to `0x3a4`, a BIOS entry. `0x7a7d8` is also used by `0xe5928` |
| `0xe4d40` | 37 | a loop over a pointer with `sub eax,eax` accumulator |
| `0xf0090` | 31 | pushes `0x4abc` then calls `0xe77d8`, so it **draws the string at `0x4abc`** in window 2 |
| `0xf3dec` | 31 | `shl eax,6` / `add [esp+8]` / `mov [eax+0xbd578],dl`. A **64-wide byte buffer** at `0xbd578`, i.e. a 64-column tile or character grid |
| `0x100e38` | 58 | uses `enter`, and tests `byte [ebx+0xc] & 2`, so it handles a runtime object with a flags byte |
| `0x101610` | 32 | `enter`, a loop with a local accumulator at `[ebp-4]` |

## `0xf3dec` and `0xf3e04` together

`0xf3e04` was read in [core-routines.md](core-routines.md) as a 16-bit write at
`row * 128 + column * 2` into `0x77e90`.

`0xf3dec`, immediately before it, is a **byte** write at `row * 64 + column` into `0xbd578`.

So the game has two screen buffers with different geometries:

| writer | element | stride | base |
|---|---|---|---|
| `0xf3e04` | 16-bit | 128 | `0x77e90` |
| `0xf3dec` | 8-bit | 64 | `0xbd578` |

The 64-wide one is almost certainly a **character cell grid** rather than a pixel buffer,
because 64 columns is a text layout and 8 bits per cell is an index.

## What this changes about the plan

**A1 should not have been marked DONE at ten functions.** The correct stopping rule was not
"enough to explain the immediate questions" but "enough that the remaining entries are
variations on what is known". Sixteen read is still six percent.

What it bought: the RNG, which is the single most useful thing for the combat-formula problem,
and the roster parser, which confirms the save format's mechanism.

## Where the remaining 231 would pay off

Not uniformly. The value is in the ones that touch data formats:

- anything near `0xbd578`, the 64-wide grid, for the map and tile questions
- anything that reads the 57-byte arrays, for the object record
- whatever writes `0xEB` sequences, for the glyph encoding

A blanket read of all 247 would produce a long page and little of it would answer a question.
The right approach is to pick targets by the data they touch, which `tools/structfields.js`
and `tools/structmap.js` already support.

---

**[Core routines](core-routines.md)** **[Plan](plan.md)** **[Open status](open-status.md)**
