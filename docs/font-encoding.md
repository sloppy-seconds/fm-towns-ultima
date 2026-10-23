# The font encoding

**Status: OPEN.** Nine probes tried. What follows is the corrected understanding, the
mistakes that had to be undone, and the eight glyphs that are genuinely established.

## What is established

The Japanese **display text** is standard Shift-JIS and reads directly. No conversion
is needed for the dialogue, the ending, the town names or the menus.

Strings that the game draws contain **mixed encodings**: runs of `0xEB <index>` glyph
pairs interleaved with ordinary Shift-JIS bytes, in the same string, separated by
nulls or spliced together. A single logical string like `東へ` is stored as four
`0xEB` glyphs because the glyph run encodes the *reading* (ひがしへ, four mora) while
the Shift-JIS twin encodes the display form (two characters).

That difference in length is the reason every equal-length pairing failed.

## Corrections to earlier claims

Two earlier claims were wrong. They are corrected here rather than deleted, because
the wrong method is the thing most likely to be repeated.

**Wrong:** "each name is stored twice, once in a custom font encoding and once in
standard Shift-JIS, derivable by aligning the two". The two forms are not the same
string at equal length, so alignment on length cannot work.

**Wrong:** "eight probes failed, therefore the structure is not recoverable by
statistic". Nine probes have now been run and the ninth produced real results. The
conclusion drawn after eight was premature.

## Probes, in order

| # | method | verdict |
|---|---|---|
| 1 | positional alignment, equal length | NEGATIVE, lengths differ by design |
| 2 | frequency matching | NEGATIVE, BIOS fill polluted the JIS side |
| 3 | hand-transcribed seed | NEGATIVE, 6 glyph conflicts, method unsound |
| 4 | mechanical table walk | NEGATIVE, runs and names are separate lists |
| 5 | reading-vs-kanji ratio | directionally right, computed on wrong pairing |
| 6 | offset search under length constraint | NEGATIVE, no offset satisfies it |
| 7 | two-byte code page | NEGATIVE, only 75 values |
| 8 | Shift-JIS trail-byte confusion | PARTIAL, explains the confusion only |
| 9 | null-separated run/JIS pairs | **POSITIVE, partial** |

## Probe 9: what actually works

Walk the string pool from `0x1000` to `0x8000`. At each `0xEB`, take the maximal run
of `0xEB <index>` pairs, skip nulls, and decode the Shift-JIS that follows. Only keep
the pair when the Shift-JIS side is **kana only** and the two lengths agree, because
that is the only case where glyphs and characters correspond one to one.

Measured: 328 EB runs have a JIS twin in that window, of which **5** are kana-only and
equal length. Those 5 yield **8 unanimous glyph mappings**:

```
0x48 -> フ     0x4d -> 　     0x5c -> ク     0x61 -> ん
0x6b -> −      0x74 -> と     0x75 -> 　     0x94 -> ェ
```

Cross-check: `4e 6b 5c` maps to `オ−ク` (orc) and `48 94` maps to `フェ`. Both are
coherent, and `0x6b -> −` matches the long-vowel mark seen in `オ−ク` in the monster
table.

Five usable pairs is not enough to decode arbitrary text, but it is enough to prove
the mechanism.

## Why it stops at eight

Most `EB` runs are not clean paired strings. They are **fragments** of longer runs
that were split when Shift-JIS punctuation was spliced in. Two examples from the pool:

```
0x1d90  eb6b eb5e eb5c eb6d 81 40 eb70 eb62 eb6d eb61 81 40 eb5a 81 40
        ^^^^^^^^^^^^^^^^^^^^ punctuation ^^^^^^^^^^^^^^^^^^^^
```

A walker that stops at the first non-`EB` byte sees `6b 5e 5c 6d` and then hits
`0x81 0x40`, which is the Shift-JIS space. Splitting on that gives fragments, and
each fragment loses its alignment with the reading.

Handling that correctly means reconstructing the logical string first, which means
knowing where each string ends, which is the same problem as the record structure.

## Correction: text drawing does not use the glyph runs

A later reading of the renderer at `0xe6e90` (see [text-renderer.md](text-renderer.md))
shows that text is drawn by **parsing Shift-JIS directly**, testing lead and trail byte
ranges and advancing one or two bytes per character. There is no font index lookup on the
drawing path.

So the claim below, that a complete solution needs the font index table in order to draw
text, was wrong in its premise. Drawing text already works. The `0xEB` runs belong to some
other subsystem and are not a prerequisite for anything on this page.

The reasoning below is kept because it still describes where the runs probably live.

## What a complete solution needs

The `EB` encoding is a **font index**, not a character code. The mapping from index to
glyph is almost certainly a table in the executable: 75 distinct indices were observed
across the whole game text, which is a plausible size for a subset font holding the
kana plus the kanji that the game uses.

Finding that table needs the code that indexes it, or the font bitmap data the indices
select from. Neither is reachable by the probes tried so far, because the addressing
is indirect, which is the same wall the asset paths and the debug mode strings are
behind.

## Practical guidance

The **display text extracts cleanly** and this page does not change that. `savetext.py`
reads it, `game-text.md` documents where it is. The `EB` glyph runs are needed only to
reconstruct how a string was *read* rather than *written*, and nothing in the current
extraction depends on that.

Treat them as opaque until the indirect addressing is solved.

---

**[The game text](game-text.md)** **[The code](code-analysis.md)** **[Open questions](open-questions.md)**
