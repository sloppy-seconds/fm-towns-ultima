# The font encoding

**Status: OPEN.** Eight probes tried, all negative. This page exists so the next
attempt does not repeat them.

## What is established

The Japanese text in a savestate decodes cleanly as **standard Shift-JIS**. No
conversion step is needed. `tools/savetext.py` does exactly that and reads it.

Interleaved with the Shift-JIS text are runs of the form `0xEB <byte>` repeated.
These are **not** a second text encoding, which is what an earlier version of this
page claimed. They are a separate data structure that happens to sit between
strings, and `0xEB` is also a valid Shift-JIS lead byte, so naive parsing folds
them into the text and produces garbage.

## Corrections to earlier claims

Two claims in `game-text.md` and previous commits are wrong and are corrected here.

**Wrong:** "each name is stored twice, once in a custom font encoding and once in
standard Shift-JIS". The two are not the same string. The monster table alternates
a Shift-JIS name with an unrelated `0xEB`-prefixed block, and pairing them gives
nonsense such as `4d 5e 6c 6c` against `ネス湖の恐竜`.

**Wrong:** "the font encoding can be derived by alignment". Alignment was attempted
at offsets -3 to +3 against every length constraint available and no offset
satisfies them. See the probes below.

## Probes tried

**1. Positional alignment, equal length.** Pair every adjacent `0xEB` run with the
Shift-JIS run that follows it, keep only pairs of equal length.
Measured: 282 adjacent pairs found, but only 30 glyph indices received any vote and
just 2 were unambiguous. Sample pairs had 4 glyphs against 15 characters, so the
runs are fragments, not whole lines.
Verdict: NEGATIVE. Lengths do not match.

**2. Frequency matching.** Build the `0xEB` run vocabulary and the Shift-JIS word
vocabulary, then look for runs and words that occur equally often.
Measured: 2,847 runs, 1,469 distinct. 5,179 JIS strings, 333 distinct. The JIS side
was polluted by BIOS fill patterns (a 128-character `裹` run appearing 4,586 times).
Verdict: NEGATIVE. Frequencies did not line up.

**3. Seed from the 16 monster names, hand transcribed.** Read the glyph runs by eye
and pair with the names.
Measured: 11 glyphs recovered, 6 of them in direct conflict (`0x43` mapping to both
ガ and ネ). The transcription itself was guesswork.
Verdict: NEGATIVE, and the method was unsound. Do not repeat it.

**4. Mechanical walk of the monster table.** Walk `0x79360`-`0x79570`, splitting on
nulls and classifying each chunk as name or run.
Measured: 23 runs, 21 names, chunk lengths 2 to 32. Only 3 of 23 runs had a length
matching their neighbouring name.
Verdict: NEGATIVE. The runs and names are separate lists.

**5. Reading-versus-kanji ratio.** Hypothesis: the `0xEB` run is the phonetic
reading and the Shift-JIS is the display name, so names with kanji should have
longer runs.
Measured: names without kanji have mean ratio 1.39, names with kanji 2.31. The
direction matched the prediction.
Verdict: **INCONCLUSIVE, do not trust.** The pairing it was computed on was wrong,
and a ratio computed over a wrong pairing can show a spurious trend.

**6. Offset search under the length constraint.** Test whether `run[i]` pairs with
`name[i+off]` for offsets -3 to +3, requiring that a reading never be shorter than
its name.
Measured: violations at every offset, 2 to 4 out of about 20. No offset satisfied
the constraint.
Verdict: NEGATIVE. Length is not the right invariant.

**7. Two-byte character code.** Count every `0xEB <byte>` pair as one unit on the
theory that the region is a dense code page.
Measured: 75 distinct second bytes, `0xEB` present in 24.3 percent of the region.
Verdict: NEGATIVE. 75 values is far too few for Japanese text.

**8. Is the second byte a Shift-JIS trail byte.** Test whether `0xEB` is just a lead
byte being misread.
Measured: the non-`0xEB` bytes in the region are dominated by `0x82` (2,610), `0x81`
(1,219) and `0x83` (802), which are Shift-JIS lead bytes, confirming that Shift-JIS
text is present and adjacent. But decoding a whole `0xEB` run as Shift-JIS fails.
Verdict: **PARTIAL.** This explains why the two structures get confused. It does not
explain what the `0xEB` runs are.

## What the runs probably are

Not established. Candidates, in order of plausibility:

- **Compressed or packed text.** A dictionary of common words with a one-byte index
  would produce exactly this shape: short indices, high repetition, and a
  distribution that does not match character frequencies.
- **A record list**, not text. The 16 monster names could be a name table sitting
  alongside a 16-entry struct array, in which case the `0xEB` values are field
  bytes and `0xEB` appears often because it is a common field value.
- **A second language.** The disc carries `.EUP` files and a bilingual launcher, so
  a second text table is plausible.

The third is testable cheaply: if the runs are text, their glyph distribution
should match Japanese character frequency, with heavy repetition of kana like の,
に, は and を. The observed top glyph `0x5e` appears 659 times and `0x74` 534 times,
a steep curve, which is consistent with text but also with a struct field.

## What would settle it

The structure is not recoverable by statistic alone, and eight probes are enough
evidence for that. What is needed is the **code that reads it**, which means the
addressing problem has to be solved first, since these runs are reached the same way
the mode strings and asset paths are: not by immediate.

Until then, treat the `0xEB` runs as opaque. The Shift-JIS text is readable without
them, and that is the part that extracts cleanly.

---

**[The game text](game-text.md)** **[Open questions](open-questions.md)**
