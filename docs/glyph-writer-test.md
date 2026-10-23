# The `0xEB` glyph runs: testing whether the game writes them

[font-encoding.md](font-encoding.md) concluded the mapping needs "the code that indexes it, or the
font bitmap data". The control-flow walk now exists, so the first of those is testable.

This page records two tests, both negative, and one measurement that changes the scale of the
problem.

## Test 1: does any code write `0xEB` as an immediate?

If the game builds glyph runs, something emits `0xEB`. The two encodings to search are:

```
C6 /0 ib     mov byte [reg], 0xEB     -> pattern C6 <modrm> EB
B0-B7 ib     mov r8, 0xEB             -> pattern B0..B7 EB
```

**Measured:** 8 sites of the first form and 39 of the second across the whole image.

Each of the 8 was checked against `tools/cfgwalk.js --check`, which answers whether an address
begins a real instruction:

| candidate | is a boundary |
|---|---|
| `0xe82da` | no |
| `0xe9370` | **yes** |
| `0xe9384` | no |
| `0xe93bf` | no |
| `0xe93d3` | no |
| `0xe9597` | no |
| `0xeb358` | **yes** |
| `0xf3071` | no |

Two survive, and reading them shows both are false matches:

- **`0xe9370`** is not `mov byte [reg],0xEB` at all. It is the middle of the
  `lea edx,[eax+edx*2]` chain used everywhere for `*351` indexing. The `C6` the scanner matched is
  inside a different instruction.
- **`0xeb358`** is `push ebx`. The `C6` nearby belongs to `push dword 0x2650` at `0xeb35b`.

**Verdict: NEGATIVE.** No code in `ENCHANT.EXP` writes `0xEB` as an immediate. The glyph runs are
**data**, present in the image, not generated at runtime.

That is useful: it rules out looking for a generator, and it means the runs can be decoded from the
file alone without any runtime state.

## Test 2: is there a Shift-JIS character table the indices select from?

If the runs are data with a fixed index set, the natural companion is a table mapping index to
character. Four candidate shapes were considered by size: 54 glyphs at 2 bytes is 108, at 4 bytes
is 216.

**Measured:** scanning `0x1000` to `0x8000` for the longest run of consecutive 16-bit values that
are valid Shift-JIS double-byte characters finds **32 entries at `0x1ba4`**.

32 is too short for the 54 distinct indices observed, so a simple monotonic table of that shape
does not exist in the obvious place.

**Verdict: NEGATIVE for the simple table.** Not a proof of absence: the table could be at another
address space, or use a different element size, or the indices could select bitmap data rather than
characters.

## The measurement that changes the scale

Earlier glyph work analysed **160 "pure `EB` strings"**. Counting every `0xEB` pair in the region
`0x1000` to `0x8000`:

**5,661 pairs, first at `0x1078`, last at `0x8014`.**

So the previous analysis covered a small fraction of the data. Every statistical conclusion in
`font-encoding.md` and `eb-glyphs.md` was drawn from those 160 strings, not from 5,661 pairs. That
does not make them wrong, but it means the sample was much narrower than it looked and a wider
analysis should be redone before any of them are treated as settled.

## What the runs look like in context

The bytes immediately after the last pair:

```
0x8014  eb 69 00 83 60 83 62 83 76 82 f0 93 6e 82 b7 00
```

`eb 69` then a NUL, then a run of plain Shift-JIS (`83 60 83 62 83 76` is katakana, `82 f0` is `を`).
So `EB` pairs and ordinary Shift-JIS text are **interleaved arbitrarily**, not in separate regions.
That is consistent with the earlier finding that a single logical string can contain both, and it is
the reason every attempt to pair runs with adjacent Shift-JIS twins has failed.

## What to try next, if this is resumed

**Redo the frequency analysis over all 5,661 pairs, not the 160 strings.** The one established
mapping, `0x74` = `。`, was found by positional reasoning on the narrow sample. On the full sample
the positional statistics would be far more reliable, and the test that established `0x74` could be
re-run to see whether it still holds.

**Look for the glyph bitmaps rather than a character table.** If the runs are data indexing a subset
font, the bitmaps must be somewhere. 54 glyphs at 32 bytes is 1,728 bytes, which would be a
contiguous region with high entropy and no long zero runs. That search has not been done.

## Why this stopped here

Two tests, both negative, after several sessions of work on this question. The honest position is
that the glyph mapping has resisted every approach tried, the one confirmed glyph came from a
narrow sample, and the larger sample has not been analysed.

That is worth writing down rather than continuing to drill, because the cost of the next attempt
should be weighed against the second-order benefit: the mapping is only needed to name things, and
the game's display text already extracts cleanly as Shift-JIS.

---

**[The font encoding](font-encoding.md)** **[The EB glyph set](eb-glyphs.md)** **[The control-flow walk](cfgwalk.md)**
