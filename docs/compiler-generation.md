# The upper region may be a different compiler generation

**REFUTED. Read [enter-is-platform.md](enter-is-platform.md).** The `enter` and `xor` idioms
this page treated as evidence of a different compiler are present in `TMENU.EXP`, Fujitsu's own
launcher, at the same rate: 80 `enter 0,0` against 283 `push ebp` forms, and it carries the
identical `1983-1988` MetaWare runtime banner. The same toolchain emits both forms, so the
signal is the platform, not the provenance.

The page is kept rather than deleted because the error is instructive: it used clustering as
evidence about provenance and never tested that signal on a binary whose provenance was known
and different. Four counts and one extraction would have settled it.

**Two earlier corrections also stand.** The cluster is a 2,260-byte band, not "the upper
region". And the `xor` corroboration below does not hold per routine: no routine in the band
contains `sub eax,eax`, so `xor` says nothing about this cluster.

**What survives:** the interleaving in [enter-cluster.md](enter-cluster.md), which now reads as
support for a code-generator selection rule inside one compiler rather than for two compilers.

**Original verdict, superseded:** a cluster of routines in the upper part of the image uses two
idioms High C 1.73 was believed never to emit.

This came out of working the `base-fold` queue, not from looking for it. Recording it
because the alternative is that every one of those routines gets parked separately with
the same cause, which is the class-level signal the plan's unlock rule exists to catch.

## The two idioms

**1. `enter 0,0` instead of `push ebp; mov ebp, esp`.**

`0xfdea0`, `0xfde90` and `0xfdebc` are a setter trio for three adjacent int globals. The
target prologue of each is `c8 00 00 00 00`, which is `enter 0,0`. High C 1.73 emits
`55 8b ec` for the same source, under every flag set tried.

**2. `xor eax, eax` instead of `sub eax, eax`.**

The same trio's tail is `33 c0 c9 c3`. High C 1.73 emits `2b c0 c9 c3`. Five source
spellings of "return zero" (`0`, `(int)0`, `1-1`, `v-v`, `0L`) all produce `2b c0`.

Measured with `tools/cmpdisp.js`:

```
$ node tools/cmpdisp.js --addr 0xfdea0 --code "55 8b ec 8b 45 08 a3 00 00 00 00 2b c0 c9 c3"
0xfdea0  LENGTH DIFFERS: target 16B, ours 15B
  target: c8 00 00 00 8b 45 08 a3 40 ea 0d 00 33 c0 c9 c3
  ours:   55 8b ec 8b 45 08 a3 00 00 00 00 2b c0 c9 c3
```

Thirteen of fifteen bytes agree. The two differences are the prologue and the zeroing.

## They cluster, and that is the evidence

Counted across all 738 census entries:

```
$ node -e 'const fs=require("fs");const buf=fs.readFileSync("ENCHANT.EXP");'
routines starting with enter (0xc8): 29
range: 0xfdb9a .. 0x1044dc
by page: 0xfd000:15  0xfe000:12  0x104000:2
kinds: non-leaf 24, not-c 2, base-fold 3
```

29 routines start with `enter`, and 27 of them sit in `0xfdb9a` to `0xfe...`. That is a
contiguous region, not a spread. A source-shape difference would not be clustered by
address. A different compiler, a different translation unit, or a linked library compiled
at a different time would be.

For contrast, 177 census entries start with `push ebp; mov ebp, esp`, and they are spread
across the whole image.

## What this does and does not establish

**Established:** the two idioms are real, they are clustered, and High C 1.73 does not
produce either one for any source shape tried here or in `docs/decompilation-experiment.md`
result 10 (23 sources, 21 flag sets, frame decision closed as NEGATIVE).

**Not established:** that the region was compiled by a different compiler. A linked
static library built with an older MetaWare release would look exactly like this. So would
hand-written assembly. The address range `0xfdb9a` upward overlaps the region the census
already calls the library layer in places.

**What would settle it:** the `enter` cluster and the seven routines known to be
High C 1.73 output (the ten `matched`) should be compared on a signal that is stable
across source shape. Candidate instruction is the zeroing idiom, because it is
compiler-wide rather than function-specific: count `33 c0` against `2b c0` across the
whole image and see whether the split follows the same address boundary as `enter`.

## The test, run

The zeroing idiom was counted across the whole image and it follows the same boundary.

```
33 c0 (xor eax,eax) total 26   in the enter region (0xfdb9a..0x105000): 23
2b c0 (sub eax,eax) total 167  in the enter region:                       34
33 c0 by 64K page: {0xf0000: 15, 0x100000: 11}
2b c0 by 64K page: {0xe0000: 80, 0xf0000: 52, 0x100000: 35}
```

**88 percent of the `xor` sites sit in the region where `enter` appears.** By contrast,
`sub eax,eax` is spread across the image and is the dominant form everywhere below
`0xf0000`, with 80 of 167 in the `0xe0000` page alone. The two idioms do not merely
co-occur, they partition the image along the same boundary.

That is the corroboration the page asked for, and it is a stronger result than the
prologue count on its own, because a single function's prologue is a local choice while
the zeroing idiom is habitual across a whole translation unit.

### Superseded: this corroboration does not hold per routine

The counts above are correct and were re-measured. The **inference** from them is what
failed. Counting per routine inside the `enter` band:

| inside the 2,260-byte band | count |
|---|---|
| routines containing `33 c0` | 6 of 41 |
| routines containing `2b c0` | **0 of 41** |
| routines containing neither | 35 of 41 |

**No routine in the band contains `sub eax,eax`, and 35 of 41 contain neither idiom.** So
`xor` does not distinguish an `enter` routine from a non-`enter` routine inside the band:
both groups are mostly silent about zeroing `eax`.

The image-level concentration was real but it was the coincidence of two sparse signals in
an overlapping range, not one cause producing both. Treating it as corroboration was the
error; see [enter-cluster.md](enter-cluster.md).

With that measured, the evidence is: two independent idioms, both clustered on the same
address boundary, neither reproducible by High C 1.73 under any source shape or flag set
tried. That is a coherent signature of a separately built code region.

Still not proven is **which** code region. A linked library built with an older MetaWare
release produces exactly this signature, and so would hand-written assembly, and the
upper pages overlap what the census already calls the library layer. Separating those
three is a further question and is not needed to act on the finding.

## Why it matters for the queue

If this is right, then:

- the 29 `enter` routines are not source-shape parks, they are a toolchain park. Grinding
  source variations on them is wasted time and should be recorded as a class, once.
- `docs/plan.md` item 4j's Pass 3 (`non-leaf` by caller count) will run into this region
  and should expect the same cause rather than rediscovering it per routine.
- the honest label is not "unmatched", it is "outside what this compiler emits", which is
  the same conclusion `docs/nonleaf-relocation-ceiling.md` reached for relocations by a
  different route.

## Related

- `docs/decompilation-experiment.md` result 10: the frame decision, closed negative for source shapes
- `docs/nonleaf-relocation-ceiling.md`: the other reason a correct routine cannot byte match
- `docs/overnight-run.md`: the queue this came from, Pass 2
- `docs/tooling-policy.md`: why the comparison used the decoder and not ndisasm text
