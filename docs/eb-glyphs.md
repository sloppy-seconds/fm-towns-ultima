# The `0xEB` glyph set: what is established

Ten probes have now been run on these runs. This page records the one glyph that is
proven, the structural facts that are measured, and the hypotheses that failed.

## The single established mapping

**`0x74` = `。` (ideographic full stop).**

The test: in 160 pure `0xEB` strings, `0x74` occurs in a non-final position **3 times**,
and all three are `。。` (double period). Every other occurrence is string-final. It also
terminates 316 of 1,327 strings in the wider pool, making it the most common string
terminator by far.

That is a real measurement with a failing case that did not occur, not a plausible story.

## Measured structure

**Vocabulary size.** 54 distinct glyphs across 160 pure `0xEB` strings, drawn from the
range `0x40` to `0x94`, with **31 gaps** in that range.

**Frequency.** 73 distinct glyphs across the whole region, 5,802 occurrences. Top 10 glyphs
account for **52.4%** of all occurrences. Only **6.8%** appear exactly once.

A high concentration and a very low hapax rate means a **fixed message vocabulary**, not a
full character set. This is a font containing only the characters the game's messages use.

**Positional split.** The glyphs divide by where they occur:

| range | behaviour |
|---|---|
| `0x40`-`0x4e` | appear at string **start**, never at end |
| `0x5a`-`0x77` | never at start, appear mid-string and at end |

Two clearest cases: `0x45` starts 12 of its 12 uses and ends none, and `0x5a` starts 1 of
its 56 uses and ends none.

**Contiguous runs** (no gaps):

```
0x40..0x4f   16 values
0x51..0x56    6 values
0x58..0x62   11 values
0x64..0x69    6 values
0x6b..0x75   11 values
0x77          1 value
0x90..0x91    2 values
0x94          1 value
```

## Hypotheses that failed

**Gojuon ordering.** The 46 basic katakana in standard order, mapped to consecutive glyph
values. **NEGATIVE:** there is no 46-long contiguous run. The largest is 16. The font is
sparse, so a positional gojuon assignment cannot be right.

**`0x5d` = `ス`, from the `-masu` ending.** The most common four-glyph ending is
`65 5e 5d 74` (10 occurrences). Reading that as `シ マ ス 。` was attractive because Japanese
message text is overwhelmingly polite form. **NEGATIVE:** only 11% of pure strings contain
`0x5d` at all, and polite text should use `ス` in nearly all of them.

**Transliteration against ship names.** `YASURAGI` and its `EB` twin, `Voyger` and its
`EB` twin, from the table at `0x1fc0`. **NEGATIVE:** the lengths differ in both directions,
6 letters against 5 glyphs and 6 letters against 4 glyphs, and glyph `0x6d` would have to be
both `ボ` and `ャ`. Recorded in [string-sources.md](string-sources.md).

**`マス` as a three-glyph ending.** `5e 5d 74` does occur 11 times, so this looked
supported. It is the same `0x5d` that fails the 11% test, so it fails with it.

**Equal-length alignment with Shift-JIS twins.** Eight earlier variants of this, all
recorded in [font-encoding.md](font-encoding.md).

## A scale correction

The counts on this page came from **160 "pure `EB` strings"**. Counting every `0xEB` pair in the
region `0x1000` to `0x8000` gives **5,661 pairs**, from `0x1078` to `0x8014`.

So the sample behind every statistical conclusion here was about 3 percent of the data. The one
established mapping, `0x74` = `。`, was found by positional reasoning on that narrow sample and
should be **re-tested against the full set** before it is treated as settled.

See [glyph-writer-test.md](glyph-writer-test.md) for the two tests that followed and both failed.

## Why it keeps failing, stated plainly

Every failed hypothesis has the same shape: a plausible reading of one sequence, checked
against nothing else. `マス` was plausible and wrong. Gojuon order was plausible and wrong.

The one that succeeded, `0x74` = `。`, succeeded because it made a **prediction that could
have failed** (a period should essentially never appear mid-sentence) and the prediction held
across 160 strings with three benign exceptions.

That is the only method that has produced anything here, and it needs a candidate character
whose positional behaviour is a strong constraint. `。` is such a character. Most kana are
not, because they can go almost anywhere.

## What would crack it

The mapping is a font index. The indices are not gojuon order, so they are a **glyph sheet
order** chosen by whoever drew the font.

Two routes remain:

1. **Find the font data.** If the glyph bitmaps are in an asset file, rendering the glyphs
   and looking at them identifies every one directly, with no inference at all. The asset
   inventory records 23 `GRAPH\*.TIF` files and one `UINT.TIF` or similar may hold the font.
   This is the strongest remaining route and it has not been tried.
2. **Find the writer.** Something emits `0xEB` sequences when the game builds a message.
   Locating the writer names the structure, as with every other structure on this project.

## Practical position

Unchanged. Text draws from plain Shift-JIS through the renderer at `0xe6e90`, and nothing in
the current extraction depends on these glyph runs. See [text-renderer.md](text-renderer.md).

The `0xEB` strings are a **second, parallel text encoding** used somewhere the Shift-JIS
path is not. Where that is remains open.

---

**[The font encoding, earlier probes](font-encoding.md)** **[Where the strings are](string-sources.md)** **[Plan](plan.md)**
