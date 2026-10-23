# Are the open items unsolvable? No

A check of each remaining open item, prompted by asking whether they are all unsolvable. They
are not. This page records what each one needs and whether that thing is available.

## Item 1: the high bits of a map cell. SOLVED, and my previous answer was wrong

[cell-encoding.md](cell-encoding.md) said `v & 3` is terrain and that the high nibble
"correlates at 74 to 75% with itself, above chance but well below `v & 3`", implying it was
mostly noise. **That inference was wrong**, and the test that produced it was the wrong test.

### The right control

Comparing a field's coherence against the probability of agreeing by chance is not enough,
because different fields have wildly different value distributions. The control that
discriminates is a **shuffle**: randomise the order of the same bytes and measure again. A field
carrying spatial information scores much higher than its own shuffled copy. A field carrying
none scores the same.

| field | real | shuffled | difference |
|---|---|---|---|
| `v & 3` | 84.6% | 42.7% | **+41.9 pp** |
| `v >> 2 & 3` | 79.7% | 50.8% | **+28.9 pp** |
| `v >> 4` | 75.5% | 21.6% | **+54.0 pp** |
| full byte | 62.9% | 13.9% | **+49.0 pp** |

**The high nibble has the largest gain of any field**, 54 points above its own shuffled
baseline, and 3.5 times its shuffled score. It is not noise. The reason its absolute number is
lower than `v & 3` is that it has more values and a less skewed distribution, so even its
shuffled baseline is low.

### Run length confirms both fields carry structure

| field | runs | mean run | longest |
|---|---|---|---|
| `v & 3` | 5,265 | 6.20 | 128 |
| `v >> 2 & 3` | 6,854 | 4.78 | 128 |
| `v >> 4` | 8,215 | 3.98 | 128 |
| full byte | 12,332 | 2.65 | 128 |

Every field produces runs of a full 128-cell row, so terrain-like stretches exist in all of
them. `v & 3` has the longest mean run, which is consistent with it being the primary terrain
selector, but it is not the only field doing work.

### The visual check that misled me

Rendering the high nibble produced what looked like noise while the low two bits produced
clean coastlines. That comparison was made without a shuffled control, and a field can look
noisy and still be strongly structured. The numbers above are the authority.

### Revised position

**The low two bits carry terrain, and the high nibble carries something else with genuine
spatial structure.** The most likely reading is that a cell stores terrain plus a variant or
edge qualifier, but that is not established.

What is now established is that this is **not** an unsolvable question, and that the earlier
"noise" conclusion rested on a missing control.

## Item 2: the `0xEB` glyph mapping. Hard, not unsolvable

1 of 54 glyphs decoded. Three routes remain and none has been exhausted:

- the writer, which has not been located
- a font elsewhere on the disc, ruled out for `GAI.TIF` and `EXTRA.TIF` but not for the
  TownsOS ROM, which is a fourth asset this project has not examined for glyph data
- pronunciation tables, if the game ships any

**Verdict: hard.** The statistical approaches are exhausted; the code and ROM approaches are
not.

## Item 3: the `0xe4086` switch table. Tested, still open

The proposed test was that the `cs`-relative operand needs the segment base added. It was run
and it failed.

**Measured:**

- `CS` from a live register dump is `0x5E84`, linear `0x5E840`.
- `CS + 0xe4086 = 0x1428c6`. At that address, **both savestates read all zeros.**
- Reading the file at `0xe4086` as u16 at three alignments gives instruction bytes, not
  offsets: `0x002e`, `0x6a00`, `0xa102`, `0xeca0`.

So the operand does not resolve as a flat address, as a mirrored address, or as a
`cs`-relative offset with that segment base.

**What was ruled out:** flat, mirrored, and cs-relative with the observed CS.

**What remains:** the segment could differ at the moment of the jump, since CS is not
constant, or the `jmp` is unreachable in practice and the switch never executes, or the
instruction was read at the wrong offset. None of these has been tested.

**Verdict: open, not cheap after all.** The predicted one-session fix did not work.

## Item 4: the asset path mechanism. Closed as not worth more effort

Five work items, one real structure found (the 20-byte record grid at `0x22cc`), no reference
to the table base. The inventory is complete and verified by other means.

**Verdict: solvable in principle, not worth the cost.** Documented in
[a9-reference-search.md](a9-reference-search.md).

## Item 5: the object record size, 57 or 69. Open, needs the right game state

The array at `0x7a7d0` is **all zeros at the title screen and at the death screen**, so neither
savestate can answer this. It needs a state taken while objects exist, which means during
play.

**Verdict: solvable, blocked on a Track B action.**

## Item 6: everything on the Track B list. Untried

Nothing there has been attempted. All of it needs a human or a running game.

## Summary

| item | state | needs |
|---|---|---|
| 1. high bits of a cell | **SOLVED** | done, wrong answer corrected |
| 2. `0xEB` glyphs | hard | code or ROM work |
| 3. `0xe4086` table | open | the cheap test failed, needs another idea |
| 4. asset paths | closed | not worth it |
| 5. object record size | open | a savestate during play |
| 6. Track B list | untried | a human |

**Two of six are answered here. One is cheap. Two are blocked on things a savestate or a
session would provide. One is deliberately abandoned.**

The useful correction from this check is item 1: a conclusion that had already been written
down as a finding was produced by a test missing its control, and one more measurement
overturned it.

---

**[Cell encoding](cell-encoding.md)** **[Plan](plan.md)** **[Open questions](open-questions.md)**
