# The `enter` cluster is one region, and it interleaves

**Verdict: `enter` is confined to one 2,260-byte band, and inside that band it interleaves
with routines that do not use it. That rules out the "one translation unit built by a
different compiler" reading and leaves a smaller, more specific question.**

This is the falsifying test `docs/compiler-generation.md` named for itself and did not run.
It is a measurement over the census and the image, with no compilation.

## The numbers

**`enter` is essentially absolutely confined.** Counting every census entry that begins with
`c8` (`enter 0,0`) against every entry that does not:

| region | routines | start with `enter` |
|---|---|---|
| inside the band `0xfdb9a`-`0xfe46e` | 41 | **66 percent (27)** |
| everything else | 413 | **2 routines, 0.5 percent** |

The two outside are `0x1044c4` and `0x1044dc`. They sit next to each other, 0x6,056 bytes
above the band, and form a pair of the same kind. **Every other routine in the image does not
use `enter`.**

So "the upper region may be a different compiler" was too vague. The band is **2,260 bytes**
and it is one contiguous area, not the upper third of the image.

## The finding that breaks the easy explanation

Inside the band, `enter` and non-`enter` routines are **interleaved**, not separated into
blocks. Written as a sequence, `E` for a routine starting `c8` and `.` for one that does not:

```
EEEEE.EEEEEEEEE..E.....E.EE..E...EEEEEEEE
```

That is **13 alternations** in 41 routines. There is no sub-block of "the different compiler"
followed by a sub-block of "the normal compiler". They are next to each other throughout.

The gap sizes confirm it. Consecutive `enter` routines are as close as `0x10` and `0x15`
apart, with non-`enter` routines in between at `0xfdeb0`, `0xfdeb6`, `0xfdecc` and so on.
Six-byte routines sit directly between 16-byte `enter` routines.

**A translation unit or a linked library would be contiguous.** Interleaved at that
granularity is not what a separately-built object file looks like.

## What that leaves

Two explanations survive, and they are now distinguishable:

**1. The `enter` form is a source-level choice, not a compiler choice.**
`enter 0,0` and `push ebp; mov ebp, esp` are the same two-byte-equivalent prologue. Some
compilers emit `enter` for the same function depending on nothing more than the function's
identity in an internal table, or on an alignment or fixup decision. If that is what is
happening, the two forms coexist inside one build by construction, which is exactly what
interleaving looks like.

**2. The band contains a mix of hand-written or library code and game code.**
The band overlaps the region the census already calls the library edge, and
`docs/addressing-limits.md` records that the BIOS gateway sits nearby.

The test that separates these is not another clustering count. It is whether **any** source
shape produces `enter 0,0` under the 43 real toggle names, which is now possible to ask
because the toggle list exists. `docs/leasib-flags-negative.md` could not answer it because
that sweep used invented names.

## A second tell that does not work

`docs/compiler-generation.md` used `xor eax, eax` against `sub eax, eax` as corroboration,
citing that 23 of 26 `xor` sites fell in the same address range as the `enter` cluster. That
count is correct but it does not carry the weight the page gave it. Measured per routine
inside the band:

| | count |
|---|---|
| routines containing `33 c0` (`xor eax, eax`) | 6 of 41 |
| routines containing `2b c0` (`sub eax, eax`) | **0 of 41** |
| routines containing neither | 35 of 41 |

**No routine in the band contains `sub eax,eax` at all**, and most contain neither. So the
zeroing idiom does not separate `enter` from non-`enter` routines inside the band: both
groups are mostly silent on it.

That does not refute the `xor` finding at image level, but it does mean `xor` is not evidence
about *this* cluster. It was a coincidence of two sparse signals overlapping, and the page
should not have presented it as corroboration of the same cause. Corrected here, and the
original page now says so.

## The honest state

- **Established:** `enter` occurs in 27 of 41 routines in one 2,260-byte band and in 0 of the
  other 413. It interleaves with non-`enter` routines 13 times.
- **Ruled out:** a separately-linked translation unit or library, because that would be
  contiguous.
- **Not established:** whether `enter` is reachable from C source at all with this compiler,
  and whether the band's mix is source choice or provenance.
- **Not established:** that `0x1044c4` and `0x1044dc`, the two outliers, share the cause.

The next probe is the source-shape test against the real toggle list. It is cheap, it is
falsifiable, and it is the only thing that can turn this from a description into an answer.

## Related

- `docs/compiler-generation.md`: the original claim, now corrected on both points
- `docs/compiler-toggles.md`: the 43 real toggle names, which that test needs
- `docs/leasib-flags-negative.md`: why the earlier flag sweep could not ask this
