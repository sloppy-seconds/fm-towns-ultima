# Feature-vector clustering of the game module

Plan item [0c](plan-attribution.md). The instrument is `tools/cluster.py`, the committed output is
`docs/ledger.json`. The short version: the clustering works, the atlas-coverage census it produces is the
valuable part, and **the item's own acceptance check fails**. The enter band does not land in one cluster at
any granularity, and that is recorded as a measurement rather than tuned away.

## Population and method

**Measured:** 875 functions, parsed from `module/p_game_*.cpp` as `void f_XXXXXXXX(...)` with their
instructions carried as comments. That is the recompiler's own asserted walk, so the instruction census and the
function extents come from the same derivation that produced the port rather than from a second decode that
could disagree with it.

Note the count. The plan says the game module is 818 functions and 41,847 instructions, and the module
directory holds 875 function definitions. The two are not the same number and the difference is not
reconciled here; the clustering runs on what is actually in the committed module.

**Clustering is a categorical signature, not a distance metric with a chosen k.** Every axis is a small discrete
set taken from the atlas, so a function's cluster is the tuple of its axis values and the assignment is
reproducible, inspectable, and explainable back to idioms. A k-means over hand-weighted numeric features would
have produced groups nobody could state back as a reason, which is the thing this item must not do.

The 21 axes, each cited to the probe that established it: `frame`, `spill`, `epilogue`, `argbase`, `zero_sub`,
`zero_xor`, `test_used`, `cmp0`, `and_self`, `idiv`, `cdq`, `sar1`, `sarwide`, `imul`, `lea`, `movsx`, `movzx`,
`jumptab`, `setcc`, `strorm`, `int_instr`. Function size is deliberately excluded, because including it lets
cluster boundaries be driven by how big a function is, which correlates with position and says nothing.

**Result: 374 clusters.** Sizes `113, 40, 30, 20, 19, 15, 14, 13, 12, 11, 11, 10, 8, 8` and a long tail below
that. The largest, C00 with 113 functions, is `frame=none|spill=-|epilogue=ret-only|argbase=-`, which is the
unframed leaf with no distinguishing idiom at all. That is a real category rather than a failure: a fifth of
the module is small functions that do nothing the atlas has a name for.

## The enter band does not cohere, at any granularity

The item requires the enter cluster's routines to land in one cluster, as the check that the vectors mean
something. Two problems, one of them in the item.

**The item's own numbers disagree.** It states "41 routines in 2,260 bytes, `0xfdb9a..0x105000`". Those cannot
both be true: 2,260 bytes from `0xfdb9a` ends at `0xfe46e`, and the range as written is 476,774 bytes. The
byte count and the routine count agree with each other once the range is corrected, so the byte count is taken
as the assertion and the range as the typo, and the band used is `0xfdb9a..0xfe46e`. It holds 43 recompiled
functions.

**At that band the check fails.** 43 functions spread over 19 clusters, largest holding 21%.

That alone could be a granularity artefact, so a sweep was run over every prefix of the axis list rather than
one signature:

| axes | clusters in module | largest cluster | enter in clusters | enter largest |
|---|---|---|---|---|
| 4 | 49 | 28% | 8 | 37% |
| 8 | 155 | 18% | 15 | 28% |
| 12 | 222 | 18% | 15 | 28% |
| 16 | 299 | 14% | 18 | 28% |
| 21 | 374 | 13% | 19 | 21% |

Coherence never gets above 37%, and it gets worse as the vectors get richer. This is the interesting direction:
if the enter region were a separately built object, more idiom axes should separate it *from the rest* and hold
it together *within*, and instead its own members disagree with each other more as more axes are added.

**What this says, and what it does not.** `docs/compiler-generation.md` established that the enter band is not
reproducible by 1.73 under any source shape tried, and explicitly refused to name it, listing an older
MetaWare library, a different compiler, and hand-written assembly as three live hypotheses. This measurement
is consistent with all three and separates none of them. What it does argue against is a fourth idea that was
implicit in the item's acceptance criterion: that the enter region is one homogeneous thing with one
provenance. On these 21 axes it is not one thing. It is at least nineteen kinds of function, which is what a
linked library of unrelated routines would also look like, and what a hand-written region that grew over time
would look like too.

**This needs a decision, not more computation.** Either the criterion is wrong and the item is finished by the
measurement above, or there is an axis the atlas has not identified that would make the band cohere, and
finding it is a different piece of work than anything currently planned.

## The atlas-coverage census, which is what 0c was actually for

Counting the whole module against the atlas's idioms is the step that turns the atlas into attributions:

| idiom | functions | atlas says |
|---|---|---|
| `sub reg,reg` to zero | 227 | emitted (A08, A09, A13, A33) |
| `and reg,reg` as a truthiness test | 220 | **now explained: A37 shows a register condition compiles to exactly this** |
| `xor reg,reg` to zero | 41 | never emitted, and A33 confirms `a ^= a` still gives `sub` |
| `test` | 43 | emitted for a mask test (A34), absent as `test reg,reg` |
| a string op | 25 | never emitted (A30 gives a manual loop) |
| `sar 1` | 14 | only reachable from an explicit halving (A32) |

Two of these are live exclusion signals and one is not:

- **41 functions zero with `xor reg,reg`.** The atlas measured this as never emitted, and the probe most likely
  to provoke it (`a ^= a`) still produced `sub`. This is the strongest `hand-asm-positive` candidate the
  clustering produced.
- **25 functions use a string op.** The atlas never emitted `rep movsb` and A30 shows a byte copy becomes a
  manual loop. Also a strong candidate.
- **43 functions use `test`, and that means nothing.** An earlier draft of the atlas said `test` never appears,
  and A34 refuted it the same day. See the correction in [idiom-atlas.md](idiom-atlas.md).

And one gap that got closed the same night: **220 functions use `and reg,reg` as a truthiness test**, a fifth of
the module, and at the time the atlas had no probe for it. It was flagged as a feature rather than silently
ignored, and probe A37 then showed that `while (p)` compiles to `and edi, edi; je`. So the shape is ordinary
High C output and is not an exclusion signal at all. Flagging it as unknown is what made it possible to find
out.

## The position check

The item's stated failure case is clusters that only re-derive the address boundary. Measured: walking the
module in address order crosses a cluster boundary **698 times across 875 functions**, so clusters are heavily
interleaved rather than contiguous, which is the good direction. 29 clusters of five or more members do occupy
a single contiguous span, and those are the ones to distrust without a second look.

## Reproducing

```
./tools/cluster.py                       # summary
./tools/cluster.py --json                # full vectors and the sweep
./tools/cluster.py --write docs/ledger.json
```

`docs/ledger.json` carries a cluster id for all 875 functions, the id-to-signature map, and per-cluster size
and address span.
