# Testing U3 mechanics against U2 data

Ultima III hypotheses taken from `references/` and tested against U2's own map file.
Five tests. One strong positive, one falsified, three inconclusive. Every result is
recorded, because the falsified ones stop the assumption being made later.

The point of this page is not that U3 tells us about U2. It does not. The point is that
U3's *conventions* can be turned into tests, and a test that fails is worth more than an
assumption that was never checked.

## The hypothesis source

From `references/u3-typescript/web/src/game/monsterTable.ts` and `monsters.ts`:

- a monster is stored as a **map value** in the map itself
- the **tile index is the map value divided by four**
- four consecutive map values therefore select one tile
- `SPAWN_TYPES` is a list of `map value / 4` indices, and the comment states that
  directly

That is a concrete, checkable claim about a convention. If U2 shares it, U2's map
values should show the same structure.

Test data: `MAP2_1.TIF`, payload from offset `0x800`, 31,232 bytes.

## H1: values divide by 4 into 16 indices

**Measured:** 62 distinct byte values, range `0x00` to `0x77`. Dividing by four gives
16 distinct indices, with a very uneven distribution: index 12 appears 7,678 times,
index 29 6,830, index 0 5,779.

**Verdict:** not informative on its own. Any byte range divides by four into quarters.
The distribution being uneven is expected for any map.

## H2: value = index*4 + variant, all four variants present

**Measured:** of the 16 indices reachable by `value >> 2`, **14 carry all four low-bit
variants**. The same is true using `value // 4`. Only two indices are incomplete, and
both are the ones with very few samples.

**Verdict: POSITIVE, but weaker than it first looked.** At face value this is exactly
the U3 convention. It is weaker because with only 62 distinct values and 16 indices, a
sparse set covers all four low bits easily by chance. See H5, which is the test that
decides it.

## H3: the byte is two 4-bit fields

**Measured:** high-nibble counts `{0: 6031, 1: 1001, 2: 938, 3: 9763, 4: 2930,
5: 1534, 6: 731, 7: 8304}` and low-nibble counts
`{0: 5975, 1: 936, 2: 801, 3: 10070, 4: 2845, 5: 1679, 6: 744, 7: 8182}`.

Those two histograms are almost identical in shape.

**Verdict:** suspicious, and it motivated everything below.

## H4: a sparse consecutive band of monster values

**Measured:** the values present are
`00 01 02 03 05 06 07`, then `10` through `17`, `20` through `26`, `30` through `37`,
`40` through `47`, `50` through `57`, `60` through `67`, `70` through `77`.

Every value has both nibbles in 0 to 7. Nothing outside the `0x00`-`0x77` box.

**Verdict:** NEGATIVE for the monster-band reading. There is no sparse upper band the
way U3's `13..30` spawn list would suggest. The box constraint is real and is the
interesting part.

## H5: the byte is one 3-bit value duplicated into both nibbles

The hypothesis this whole page was built to test, since H3's twin histograms suggest it.

**Measured, first attempt:** 75.6% of bytes have `hi == lo`. The eight mirrored values
`00 11 22 33 44 55 66 77` are the eight most frequent. The non-mirrored 24.4% are spread
across **232 of 244 rows**.

**First verdict: FALSIFIED**, on the reasoning that a duplicated field would not produce
structured exceptions scattered everywhere.

**That reasoning was wrong.** Uniform scatter is exactly what transitions between
adjacent tiles produce, because transitions occur everywhere on a map. The test was the
problem, not the hypothesis.

**Measured, corrected:** within each terrain group the diagonal dominates decisively.

| high nibble | most common low nibble | count | runner up |
|---|---|---|---|
| 0 | **0** | 5,727 | 5 at 169 |
| 3 | **3** | 7,517 | 7 at 1,171 |
| 4 | **4** | 1,944 | 3 at 790 |
| 7 | **7** | 6,459 | 3 at 1,337 |

A cell whose two nibbles agree is the common case. A cell whose nibbles disagree is a
boundary.

**Measured, adjacency:** of the non-mirrored bytes, **6,725 of 7,618 (88%)** have at
least one mirrored neighbour.

**Measured, which nibble belongs to the neighbourhood:** high nibble supported 2,561
times, low nibble 2,433 times, tied 2,624 times. **A dead tie.**

**Verdict: OPEN.** The duplication reading is supported by the diagonal dominance and by
adjacency, and contradicted by the tie when the question is *which* nibble is the cell's
own value. A transition byte has no unambiguous owner, which is what the tie shows.

## A genuine negative: this is not a uniform map

**Measured:** identical-byte runs average about 1.4. Distribution of run lengths:
length 1 occurs 7,053 times, 2 occurs 2,048, 3 occurs 998, 4 occurs 381, and the longest
run is 448.

**Verdict:** NEGATIVE for "large uniform terrain regions". A map of open sea and
grassland would show long runs. This shows noise-like texture with a handful of long
runs. That is consistent with the earlier finding that no candidate width renders as
recognisable terrain, and it is a second, independent indication that the row-major
cell-per-byte model is wrong.

## What this exercise actually established

**Established.** U2's map bytes live inside a `0x00`-`0x77` box, both nibbles in
0 to 7. The diagonal dominates. The file is not a simple raster of terrain.

**Not established.** That U2 uses `value / 4` to index a tile. That the byte is two
fields. That the duplicates mean what they appear to mean.

**The lesson, and it is the same one this project keeps relearning.** A U3 convention
generated a real test, the test produced a confident-looking falsification, and the
falsification was the error. H5 was declared dead on a scatter argument that a
transition model explains just as well. The hypothesis is not confirmed, but it is not
dead either, and the difference matters.

## What would settle it

The same thing that would settle the map geometry: **the code that reads the map**. All
of this is inference from statistics over data whose format is unknown, and statistics
over unknown structure will keep producing confident wrong answers.

---

**[The code](code-analysis.md)** **[Reference implementations](references.md)** **[Open questions](open-questions.md)**
