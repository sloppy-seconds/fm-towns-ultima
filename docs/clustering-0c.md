# Feature-vector clustering of the game module

Plan item [0c](plan-attribution.md). The instrument is `tools/cluster.py`, the committed output is
`docs/ledger.json`. The short version: the clustering works, the atlas-coverage census it produces is the
valuable part, and **the item's own acceptance check fails**. The enter band does not land in one cluster at
any granularity, that measurement was accepted as the result on 2026-11-02 rather than tuned away, and the
item is closed on it.

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

**Accepted as a negative, 2026-11-02.** The criterion is not met and the item is closed on the measurement
rather than on a retry. The alternative was to hunt for an axis that makes the band cohere, and the sweep is
evidence against that working: coherence fell as axes were added, so a richer vector makes the region less
uniform, not more. Two further readings were considered and neither is worth the time. There is no planned
work that would produce the missing axis, and the criterion was asking the region to be one homogeneous thing
with one provenance, which is a claim about the enter band that nothing else in the repository supports.

What this does **not** do is separate the three hypotheses `docs/compiler-generation.md` left open: an older
MetaWare library, a different compiler, or hand-written assembly. All three would look like this. Separating
them still needs the atlas's never-emits list pointed at individual routines, which is `hand-asm-positive`
work and not clustering work.

`0d` and `12b` were both held behind this and are now unblocked.

## The atlas-coverage census, which is what 0c was actually for

Counting the whole module against the atlas's idioms is the step that turns the atlas into attributions:

| idiom | functions | atlas says |
|---|---|---|
| `sub reg,reg` to zero | 227 | emitted (A08, A09, A13, A33) |
| `and reg,reg` as a truthiness test | 220 | **now explained: A37 shows a register condition compiles to exactly this** |
| `xor reg,reg` to zero | 41 | never emitted, and A33 confirms `a ^= a` still gives `sub` |
| `test` | 43 | emitted for a mask test (A34), absent as `test reg,reg` |
| a string op | 25 | **now explained: A39 shows an inlined `memcpy` emits `rep movsd` and `rep movsb`** |
| `sar 1` | 14 | only reachable from an explicit halving (A32) |

Two of these are live exclusion signals and one is not:

- **41 functions zero with `xor reg,reg`.** The atlas measured this as never emitted, and the two probes most
  likely to provoke it both refused: A33's `a ^= a` gives `sub eax, eax`, and A40's xor-toggle accumulator gives
  `not cl` plus `sub` for the zeroing. This is the strongest `hand-asm-positive` candidate the clustering
  produced, and it is the only one that survived being tested.

  **It is `probable`, not `proven`.** One signal, from one instrument, against a probe corpus that was wrong
  about three other claims in the same session. The ledger's `confidence` column exists for exactly this, and
  the note has to say how many independent signals back it. A second independent method would move these to
  `proven`. Re-running the same census would not.
- **43 functions use `test`, and that means nothing.** An earlier draft of the atlas said `test` never appears,
  and A34 refuted it the same day. See the correction in [idiom-atlas.md](idiom-atlas.md).
- **25 functions use a string op, and that also means nothing.** The draft claimed the compiler never emits one,
  and A39 refuted it: `memcpy` inlines to `rep movsd` plus `rep movsb`. This was the largest of the three
  near-misses, because those 25 functions looked like the best hand-asm evidence in the module for about an
  hour.

And one gap that closed the same way: **220 functions use `and reg,reg` as a truthiness test**, a fifth of the
module, with no probe behind it at the time. A37 showed `while (p)` compiles to `and edi, edi; je`, so it is
ordinary output. Flagging each of these as unknown rather than reasoning from them is what made all three
findable.

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
