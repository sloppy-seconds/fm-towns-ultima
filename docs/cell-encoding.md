# The cell encoding

Following [map-geometry.md](map-geometry.md), which settled the grid at 128 x 256, the
remaining question is what a cell byte means.

## The measurement

Spatial coherence is the test. If a field carries terrain, adjacent cells should agree far
more often than chance.

| field read as | values | horizontal | vertical | H chance |
|---|---|---|---|---|
| `v & 3` | 4 | **84.6%** | **77.8%** | 25% |
| `v >> 2 & 3` | 2 | 79.7% | 65.7% | 50% |
| `v >> 4` | 8 | 75.5% | 58.2% | 12.5% |
| `v & 7` | 8 | 74.4% | 58.7% | 12.5% |
| full byte | 62 | 62.9% | 46.8% | 1.6% |

**`v & 3` is the strongest absolute signal**, at 84.6% horizontal against a 25% chance
baseline.

## A metric that lied, caught before it went in the doc

A first version of `tools/cellfield.js` ranked fields by **coherence divided by chance**, to
normalise for alphabet size. It put the **full byte on top at 38.97x**, ahead of `v & 3` at
3.38x.

That ranking is wrong and the reason is worth stating: dividing by chance rewards small
probabilities, so a field with 62 values gets a large ratio for a mediocre absolute score.
The ratio measures rarity, not structure.

Two things show the full byte is not the terrain field:

- Its absolute coherence, 62.9%, is **lower** than every narrower field, and it is the field
  that contains all of them. If the low bits were noise, the full byte would score at least
  as well as its parts. It does not, because the high bits are adding disagreement.
- Its coherence is **identical at every assumed width** from 64 to 256. See the control
  below.

**The correct reading is absolute coherence with the alphabet size stated alongside it.**
`v & 3` wins on that, and the narrower the field the higher it scores, until the two-value
field where chance itself is 50%.

## The critical control: why the old coherence test proved nothing

Raw byte agreement is **identical at every assumed width**: 62.9% at 64, 96, 128, 160, 192,
244 and 256, varying by 0.1 percentage points across them.

That is the same 62.5% figure this project recorded much earlier and cited as evidence that no
width fitted. It could never have found the geometry. Across a flat byte array, "the next byte
equals this one" barely depends on where rows are cut, so the test is blind to the parameter it
was meant to measure.

**Coherence per field discriminates. Coherence per byte does not.** That distinction is the
whole reason the earlier width search failed.

> **CORRECTION: this page said `v & 3` carries terrain with 4 classes. The low field is THREE bits and
> takes EIGHT values.** `v & 3` scored highest on a coherence metric, but a metric that rewards narrow fields
> will always prefer two bits to three, so the win was partly an artefact of the measurement. The fourth bit
> is the one that is always zero, which is why it looked cleaner: **it was discarding real information.**
> See [cell-fields.md](cell-fields.md) for the full cross-tabulation and what the two fields do at boundaries.

## The value space is exactly 8 groups by 8 flags

**Measured, and it constrains every other reading on this page.** Read the whole `MAP2_1` payload
(33,280 bytes) and the loaded map buffer from a savestate (32,768 bytes) and count the values.

```
distinct values      62, in both the file and the runtime buffer
largest value        119 = 0x77
bytes with bit 3 set 0, in both
values per high nibble: every high nibble 0..7 has values with low bits 0..7
```

So the byte splits as **`v = (group << 4) | flag`** with:

| bits | width | meaning |
|---|---|---|
| 0 to 2 | 3 | **flag, 8 values** |
| 3 | 1 | **always zero. Never set, in either the file or memory** |
| 4 to 6 | 3 | **group, 8 values** |
| 7 | 1 | always zero |

**This corrects an earlier reading on this page.** It said `v & 3` carries terrain with "4 terrain
classes". The low field is **three** bits, not two, and it takes **eight** values. Two of the eight
(`4` and `7`) are absent from some groups and present in others, which is why the count is 62 rather
than 64.

**Bit 3 being universally zero is the most useful fact here** because it is exact, it holds in two
independent copies of the data, and it rules out any scheme where the low nibble is a plain 0 to 15
counter. Whatever the flag means, it is one of eight.

The 62 values in a 64 namespace means the encoding was designed as 8 by 8 and two combinations happen
not to occur in this map. It does not mean two are invalid.

## What `v & 3` looks like

Rendered with four symbols, the map is immediately readable:

```
  8 .................O.......O......O..OO........OOO......................OO..O.OOO...OO....
  9 O.........O..OO..........................O.....O...................OO......O....O.O......
 12 .......o........OO....OO....O...O.....O.O...............O.......O....O...O.....
 20 O.OooOOooooooOOO..OooOOo...O....OOooooO..oooOOOO.oo.ooOOO..O..O.Ooo.oO.O....OOo.oo.
 25 ooOOOOOOOOOOOOO.o.OOOOOOOOOO.O....OOOOOOOOOOOO:O..OOOOOOOOOO.O...OOOOOOOOOOO.OO.ooOOO
 26 ..OO.OOOOOOO.O:o:.OO.OOOOOOO.O...OOO.OOOOOOO.O.:.:OO.OOOOOOO.OO.OOOO.OOOOOOO.O...
```

Rows 8 to 11 are open water. Rows 25 to 27 are a repeated structure with regular spacing,
which is the row of buildings identified in the geometry work. The transition from `.` to `O`
follows coastlines rather than noise.

## What the other bits are

**CORRECTION.** An earlier version of this section called the high nibble "not the terrain
class" on the grounds that its absolute coherence, 75.5%, is below `v & 3`'s 84.6%. That
comparison is wrong, because absolute coherence depends on the value distribution and cannot
compare fields with different alphabets.

The correct control is a **shuffle**: randomise the byte order, keep the distribution, and
measure again. A field carrying spatial information scores well above its own shuffle.

| field | real | shuffled | gain |
|---|---|---|---|
| `v & 3` | 84.6% | 42.7% | +41.9 pp |
| `v >> 2 & 3` | 79.7% | 50.8% | +28.9 pp |
| `v >> 4` | **75.5%** | **21.6%** | **+54.0 pp** |
| full byte | 62.9% | 13.9% | +49.0 pp |

**The high nibble has the largest gain of any field.** It is strongly structured, not noise.
Its low absolute score is an artefact of having eight values with a flat distribution, so even
shuffled it scores only 21.6%.

Run lengths agree: `v & 3` averages 6.20 cells per run, the high nibble 3.98, and both reach a
full 128-cell row.

**So the map cell holds at least two structured fields, not one terrain field plus noise.**

**Not established.** The working hypothesis is that the low two bits select terrain and the
remaining bits carry something terrain-adjacent, such as a variant, a diagonal, or a
combination flag. Two pieces of prior evidence point that way without proving it:

- The earlier nibble work found 75.6% of bytes have high nibble equal to low nibble, with the
  diagonal dominating inside each group, which is what a duplicated field with a boundary
  exception looks like.
- The renderer at `0xf3e04` masks nothing, it copies whole 16-bit words, so the display path
  does not tell us the bit layout.

## What this closes and what it opens

**Closed:** the number of terrain classes visible in the map is **4**, not 64. The 64-tile
vocabulary this project recorded earlier is the count of distinct *byte values*, not distinct
terrain types. Those are different things and conflating them is what made the earlier nibble
analysis confusing.

**Opened:** what the upper bits mean, and whether `v & 3` really is terrain or merely
correlates with it.

## Method note

Two coherence tests were run. The first, per byte, is useless and was used earlier in this
project to justify a wrong conclusion. The second, per field with an explicit random baseline,
is decisive.

The difference is stating the null hypothesis. "62.9%" means nothing; "62.9% against 4% chance
for 256 values, and 84.5% against 25% chance for 4 values" ranks the candidates.

---

**[Map geometry](map-geometry.md)** **[Testing U3 hypotheses](u3-hypothesis-tests.md)** **[Plan](plan.md)**
