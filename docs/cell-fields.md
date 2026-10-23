# The cell value: 8 groups, 8 flags, and one field that is not terrain

Item 2a of the plan. `cell-encoding.md` said `v & 3` carries terrain with four classes. **That was
incomplete: the low field is three bits and takes eight values.** This page records what the value space
actually is, what the two halves correlate with, and what remains genuinely unknown.

## The value space, exactly

Measured across the whole `MAP2_1` payload (33,280 bytes) and the loaded runtime buffer from a savestate
(32,768 bytes). Both give the same answer.

```
distinct values        62
largest value          0x77
bytes with bit 3 set   0, in both copies
bit 7                  0, in both copies
```

So the byte is:

| bits | width | field |
|---|---|---|
| 0 to 2 | 3 | **flag**, 8 values |
| 3 | 1 | **always zero** |
| 4 to 6 | 3 | **group**, 8 values |
| 7 | 1 | **always zero** |

**Bit 3 never being set is the strongest fact here.** It holds in two independent copies of the data and it
rules out any reading where the low nibble is a plain 0 to 15 counter. The encoding was designed as 8 by 8,
and two combinations happen not to occur in this map.

## Group and flag are highly correlated, and that is the interesting part

Cross-tabulating the two fields over the whole buffer:

```
      f0     f1     f2     f3     f4     f5     f6     f7
g0:  5727     33      4     15      -    169     56     27
g1:     4    514      5    111    113    199     89     86
g2:    17      6    502     92     66    140    115      -
g3:     9    137    103   8177    674    154    206   1171
g4:     2     58     53    863   2326      5     58     20
g5:   148    127      3    172     15    754      1    407
g6:    32     82    130    182     69     12    212     12
g7:    36    100      1   1337     21    343      7   6459
```

**The diagonal dominates: 75.3 percent of cells have group equal to flag.** The off-diagonal entries are
small but structured, and they cluster on pairs like `7/3`, `3/7`, `4/3`, `3/4`.

## What the off-diagonal cells are

**They are terrain boundaries.** Of 8,097 cells where group differs from flag:

```
sit on a boundary with a differing neighbour terrain:  7,372  (91%)
have four neighbours with their own terrain:              601
```

**91 percent is decisive.** The two fields disagree exactly where the terrain changes. A field that differs
from another field only at edges is an edge encoding, not an independent attribute.

Which neighbour? Of those 7,973 differing cells with all four neighbours present:

| match | count | share |
|---|---|---|
| right neighbour's flag | 3,513 | 44.1% |
| left neighbour's flag | 1,124 | 14.1% |
| up neighbour's flag | 691 | 8.7% |
| down neighbour's flag | 462 | 5.8% |
| none | 2,183 | 27.4% |

**Strongly biased to the right**, which is the direction a raster reads, and consistent with a per-cell code
that describes the transition to the next cell.

## What this changes in `cell-encoding.md`

**The "4 terrain classes" claim was wrong in a specific way.** `v & 3` was chosen because it scored highest
on a coherence metric, and it did, but the field is three bits wide and takes eight values. The fourth bit
of the low nibble is the one that is always zero, which is why `v & 3` and `v & 7` score differently and why
the shorter field looked cleaner: **it was discarding real information.**

That is a general lesson worth recording. A metric that rewards narrower fields will always prefer `v & 3`
to `v & 7`, so "the low two bits are the terrain" may simply mean "the low two bits are the most compressible
projection of the terrain".

## What is still unknown

**The meaning of the eight group values and the eight flag values is not established.** What is established
is:

- the field widths, exactly
- that the two fields agree 75.3 percent of the time
- that they disagree at boundaries, 91 percent of the time
- that the disagreement points rightward

What that adds up to mechanically is not proven. The leading reading is that **the flag is the terrain of
the current cell and the group is the terrain of the cell to its right**, which would make the pair a
two-cell horizontal code and explain the rightward bias. That reading is **not confirmed**: the direct test
of that hypothesis gives 75.3 percent, which is the same as the self-agreement rate and therefore does not
distinguish it from the simpler "group and flag are the same thing most of the time".

**A test that cannot fail is not a test.** The rightward hypothesis needs something the simple one cannot
explain, and none has been found yet.

## Why the rendered map does not settle it either

Rendering rows 25 to 27 shows a repeated building structure:

```
26  ==-#=------#=-.:.=-#=------#=-===--#=------#=-=.=.-#=------#=--=---#=------#=-===*-#=------#=-*=-*-#=------#=--.**-#=------#=-=-
```

The recurring `#=------#=` is a building wall repeated at a regular pitch, and row 28 is a street with only
three distinct values (`52`, `67`, `68`). So the values do select graphics, and the low field distinguishes
shapes within one terrain.

But a picture of *what* is drawn does not say *which field* chose it, and without the tile loader resolving
`value -> tile` there is nothing to compare against. **That is item 2b, and it is blocked on this.**

## The honest state of item 2a

**Not done.** The plan's acceptance criterion is that the eight group values and eight flag values are each
given a meaning, or that the correlation tests which would distinguish them are recorded negative.

The second half is satisfied: the neighbour-correlation tests are recorded above with their measurements, and
they **did not distinguish the rightward hypothesis from the trivial one**. What would finish this is the
tile mapping, which is 2b, which needs this.

**That is a genuine circular dependency and it was not visible before this work.** It is recorded so the next
attempt starts from the tile loader rather than from more correlation.

---

**[Cell encoding](cell-encoding.md)** **[Map geometry](map-geometry.md)** **[Plan](plan.md)**
