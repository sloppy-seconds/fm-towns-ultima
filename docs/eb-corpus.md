# What the `0xEB` runs actually are

Eleven probes for the `0xEB` glyphs were negative and the question was parked. Resuming the `randMod`
work ran into them again, and this page records what a twelfth attempt established and, more
importantly, what it did **not**.

## What is established

**77 all-`0xEB` strings exist in the image, and most are immediately followed by a Shift-JIS string
that names a similar thing.** That is `tools/ebcorpus.js`. It is a real structure and it was not
previously known.

**The `0xEB` runs are not a transcription of the visible text.** This is proved by three runs that
appear under different texts:

| glyph run | appears under |
|---|---|
| `4d 68 6b 6d 61` | `北へ` and `北へ進む` and `＜北＞` |
| `52 68 6e 6d 61` | `南へ` and `南へ進む` and `＜南＞` |
| `44 5a 6c 6d` | `東へ` and `東へ進む` |
| `56 5e 6c 6d` | `西へ` and `西へ進む` |

`node tools/ebcorpus.js --dupes` reproduces this in one command. **One run, three texts.** So the
run is a shared token, and any theory that aligns glyphs to characters one for one is dead. That is
the one solid negative here and it is worth having, because it retires the class of probe that was
attempted eleven times.

**One genuinely aligned example exists** and is worth recording because it is the shape a real
solution would take:

```
0x9db4  glyphs  44 71 62 6d | 20 | 5f 62 6b 6c 6d 74
0x9dca  text    シャトル    | を | 降りよ
```

Four glyphs for シャトル and one for を is a clean one-to-one there. The tail does not line up.
**One example that half-fits is not a decode**, and it is recorded as a lead rather than a result.

## What I got wrong in this session, and why it matters

I first reported this as a "parallel corpus" and wrote that it proved the glyphs were a fixed
vocabulary. **The adjacency assumption is unreliable**, and I found that out only after building on it.

In dense clusters the pattern is `SJIS, EB, SJIS, EB, ...` where each `EB` run belongs to the string
*before* it as often as the one after. `0xb020` is an example: pairing it forward gives 毒ヘビ, which
is a different monster from the `大クモ` the file lists. **Pairing forward is right sometimes and
wrong sometimes, and from the bytes alone I cannot tell which.**

So the corpus is **77 recorded adjacencies, not 77 translations**. The page said "translations"
before I checked, which is exactly the byte-plausible-is-not-verified error this project has
documented four times now.

## The useful thing the run does show

The four direction tokens are the strongest signal in the data:
`4d 68 6b 6d 61` is `北` as a *concept*, reused in a menu, in a movement message, and in a bracketed
label. That is consistent with the run being **a stable identifier for a word**, which is what a
localisation table would hold: one token per word, referenced from several places.

If that is right, the `0xEB` region is a **word dictionary for the localisation layer**, which
explains why eleven character-level probes failed. It is not a font, not a text encoding, and not a
per-message string. It is a word list.

**That is a hypothesis with one supporting pattern and no proof.** It is written here as a hypothesis.

## Recommendation: still parked

Nothing open needs this. The display text extracts cleanly as Shift-JIS, the record layout removed
the last place a glyph name was blocking a formula, and the shrine no longer depends on it.

If it is ever resumed, the thing to do is **not** more alignment. It is to find the code that
consumes `0xEB` and read what it does with the code byte. `tools/ebcorpus.js` already exists to list
the region, and the next step is a caller search for a reference into `0x1de0` or `0x9da0`.

---

**[Font encoding](font-encoding.md)** **[The glyph bitmap search](glyph-bitmap-search.md)** **[Plan](plan.md)**
