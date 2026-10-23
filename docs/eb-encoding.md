# `0xEB` is a Shift-JIS lead byte, and the runs are not parallel texts

Thirteen attempts to decode the `0xEB` runs produced one glyph of fifty-four. This one produced a real
structural result in a few minutes, and then hit a wall that is worth recording precisely.

## The result: `0xEB` is a lead byte

The text renderer at `0xe6e90` decides character width with a range test:

```
0xe6f15   mov al,[edi]
0xe6f17   cmp al,0x81
0xe6f19   jc  0xe6f1f        ; below 0x81, not a lead byte
0xe6f1b   cmp al,0x9f
0xe6f1d   jna 0xe6f2d        ; 0x81..0x9f is a lead byte
0xe6f1f   mov al,[edi]
0xe6f21   cmp al,0xe0
0xe6f23   jc  0xe6f70        ; below 0xe0, single byte
0xe6f29   cmp al,0xfc
0xe6f2b   ja  0xe6f70        ; above 0xfc, single byte
```

**`0xEB` lies in `0xE0` to `0xFC`.** So `[0xEB, code]` is **one double-byte character**, two bytes
wide. A run of 5 pairs is a five-character string.

That kills the "glyph alphabet" model outright and it is proven, not inferred.

## The supporting negative

**No code compares against `0xEB` in any form.** Measured over the whole image:

```
cmp al,0xeb      3 sites, all three fail tools/sweep.js --check
cmp eax,0xeb     0
cmp ax,0xeb      0
cmp r32,0xeb     0 across all eight registers
```

The renderer never tests for `0xEB`, it tests the range. That is exactly what a Shift-JIS-aware
renderer does, and it means no separate decode path exists.

## The wall: the runs are not parallel texts

The tempting conclusion is that each `0xEB` run is the same string as the Shift-JIS text beside it, so
one gives cribs for the other. **That is false.** Measured on all 77 adjacent pairs:

| run | codes | next Shift-JIS text | chars |
|---|---|---|---|
| `4d 68 6b 6d 61` | 5 | `北へ` | 2 |
| `56 5e 6c 6d` | 4 | `西へ` | 2 |
| `4c 5e 6b 5c 6e 6b 72` | 7 | `水星` | 2 |
| `4a 62 67 60` | 4 | `王` | 1 |
| `44 66 69 6d 72` | 5 | `［ 未 登 録 ］` | 9 |
| `74` | 1 | `の周回軌道上です` | 8 |

**There is no length relationship at all**, in either direction. `王` is one character with four codes.
`の周回軌道上です` is eight characters with one code.

And the same run appears under different texts:

```
4d 68 6b 6d 61  ->  北へ  and  北へ進む  and  ＜北＞
44 5a 6c 6d     ->  東へ  and  東へ進む
```

So the runs are **shared tokens, not transcriptions of their neighbours.** `tools/ebcorpus.js --dupes`
prints this.

## What the codes most likely are

The four direction tokens are the clearest evidence. `4d 68 6b 6d 61` covers `北へ`, `北へ進む` and
`＜北＞`. One token, three contexts. That is what a **word identifier** looks like, not what a spelling
looks like.

Combined with the lead-byte result, the reading is: **the `0xEB` range is a private double-byte
character set, and the characters in that set are words or word-fragments rather than kana.** Fujitsu
would have supplied a font where those code points render as the localised phrase.

**This is a hypothesis with one strong supporting pattern and no proof.** It is written as a
hypothesis.

## What I tried and got wrong in this session

Worth recording because the same error has now happened five times in this project.

I built a 1:1 mapping from the ten length-matched pairs and got sixteen clean-looking entries including
`0x44=東` and `0x6c=進`. **It looked like a decode.** Then I checked the contradictions:

- `0x5a` mapped to `へ` and `0x5e` also mapped to `へ`
- `0x65` mapped to both `っ` and `つ`

A substitution cipher cannot have those collisions. So the alignment was wrong, and the mapping was a
fit to mismatched data. **A table that is self-consistent in its easy cases and contradictory in its
hard cases is not a decode.**

The specific error: `東へ` and `東へ進む` share a prefix, so a 4-code run can be "aligned" to either by
choosing which characters to ignore. I was choosing per pair, which is fitting, not decoding.

## What would actually settle it

One of these, in order of cost:

1. **Find the routine that renders `0xEB` runs and read how it indexes.** Not the renderer, which is
   already read and only handles width. Something must select the glyph. If it indexes a table, that
   table's size tells the story.
2. **Extract the dual font from a savestate.** If the game loads two fonts, one JIS and one private,
   the private one is in memory and its glyphs can be read out and OCR'd.
3. **Compare against the Japanese PC-98 release**, if the same text appears there in standard Shift-JIS.
   That is a corpus, not a probe.

All three are bounded. None of them is another statistical pass over the bytes, which is what failed
thirteen times.

## Correction to earlier pages

`reimplementation-gap.md` said the glyph question was off the reimplementation path. `call-graph.md`
corrected that to on-path. **Both were describing the wrong object.** There is no glyph question, there
is a private double-byte character set, and its renderer path is now half understood.

The most useful lesson: **`text-renderer.md` already recorded the `0xE0` to `0xFC` lead-byte test
months ago.** The consequence for `0xEB` was never drawn from it. The answer was in a page this project
had written and not reread.

---

**[The text renderer](text-renderer.md)** **[The EB corpus](eb-corpus.md)** **[The glyph bitmap search](glyph-bitmap-search.md)**
