# Searching for the glyph bitmaps: negative

[glyph-writer-test.md](glyph-writer-test.md) ended with a concrete suggestion: stop looking for a
character table and search for glyph bitmaps instead. 54 glyphs at 32 bytes each is 1,728
contiguous bytes with high entropy and no long zero runs.

That search was done. **It found nothing.**

## Method

Slide a 1,728-byte window across the image and score it with the properties a 1bpp 16x16 font has:

| property | font data | random data | text |
|---|---|---|---|
| printable ASCII fraction | very low | ~37% | high |
| zero byte fraction | low | ~0.4% | ~0% |
| entropy | moderate | ~7.5 | moderate |
| row-pair correlation at stride 16 | above chance | 1/256 | varies |

The last one is the discriminating test. In a 16x16 font, the bytes at `i` and `i+16` are
corresponding rows of adjacent glyphs, so they correlate at well above chance.

## Result 1: nothing font-like in the low region

Scanning `0x1000` to `0x9000` for windows with under 10 percent printable ASCII found **zero**.

That region is the string pool and its surroundings. It contains **no** packed bitmap data of any
kind. So the font, if it is in the image at all, is not near the text it renders.

The first looser filter returned 1,359 "font-like" windows, which on inspection were ordinary text
with a 42 percent ASCII fraction and a row correlation of 0.199. **The filter was too permissive and
the number was meaningless.** Tightening it to the property that actually distinguishes bitmap data
gave zero.

## Result 2: 1,353 candidates in the upper image, all noise

Scanning the whole image for windows under 25 percent ASCII and under 25 percent zero gives 1,353
hits, concentrated in three buckets:

| bucket | windows |
|---|---|
| `0x00000` | 18 |
| `0x0e0000` | 500 |
| `0x0f0000` | 781 |
| `0x100000` | 54 |

Those are in the upper image, above `0xd0000`, which is code and data that the project has barely
examined.

**Rendering them as 8 glyphs of 16x16 1bpp produces noise.** Three candidate positions were rendered
at `0xf0300`, `0xf1000` and `0xf2000`. All three look like random bit patterns with no character
structure: no consistent stroke widths, no baselines, no repeated shapes across 54 glyphs.

That is the important part. **A renderer will always produce output from arbitrary data.** Printing
a bit pattern as `#` and `.` gives something that looks like text to a casual glance, which is
exactly the class of error that produced three wrong conclusions early in this project. The test is
not "does it render", it is "does it have glyph structure", and these do not.

## Verdict

**NEGATIVE for glyph bitmaps in `ENCHANT.EXP`.** Three independent searches now agree the font is
not where it should be if it were in this binary:

- no character table of the right size (`glyph-writer-test.md`)
- no code that writes `0xEB` (`glyph-writer-test.md`)
- no 1,728-byte bitmap region with glyph structure (this page)

Combined with the earlier finding that `GAI.TIF` and `EXTRA.TIF` are not fonts, the most likely
conclusion is that **the glyphs are drawn by TownsOS**, from a font the game does not ship.

## What that would mean

If TownsOS supplies the glyphs, then the `0xEB <index>` pairs select from an operating-system font,
and the index-to-character mapping lives in the TownsOS ROM rather than in the game. Recovering it
would need either the ROM or a runtime capture, and neither is a file-format question about
`ENCHANT.EXP`.

That is consistent with everything measured: the runs are data, no game code generates them, there
is no table, and there are no bitmaps. Something outside the executable supplies the glyphs.

**Not proved.** It is the explanation that fits all the negatives, and it is testable with a
savestate by looking for the TownsOS font in memory, which has not been done.

## The honest cost

This is now the fourth work item spent on the glyph question, and the fifth distinct approach. The
list of failed approaches is:

1. equal-length pairing with Shift-JIS twins
2. frequency matching
3. hand-transcribed seed
4. reading-versus-kanji ratio
5. offset search
6. two-byte code page
7. transliteration against ship names
8. gojuon ordering
9. character table search
10. writer search
11. bitmap search

One glyph out of 54 is established, and `eb-glyphs.md` now records that even that was measured on 3
percent of the data.

**Recommendation: stop.** The mapping is needed only to name things. The game's display text already
extracts cleanly as Shift-JIS, and every formula and structure this project has recovered works
without it. The next step, if anyone wants to resume, is the savestate check for a TownsOS font, and
that is a different kind of question.

---

**[Testing whether code writes 0xEB](glyph-writer-test.md)** **[The EB glyph set](eb-glyphs.md)** **[The font encoding](font-encoding.md)**
