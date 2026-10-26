# `enter 0,0` is the platform, not the compiler generation

**Verdict: the `enter`/`xor` idioms are the FM Towns toolchain, not a second compiler and not
a hand-written Origins fragment. Measured against Fujitsu's own binary.** This closes the
question `docs/compiler-generation.md` opened and `docs/enter-cluster.md` narrowed.

## The test

`TMENU.EXP` is Fujitsu's launcher. It was written by a different team, for a different
purpose, and it is not Origins code. If `enter 0,0` is a property of the platform toolchain it
will appear there too. If it is an Origins quirk it will not.

Extracted from the disc with the catalogue walker and counted:

| idiom | `ENCHANT.EXP` (Origins) | `TMENU.EXP` (Fujitsu) |
|---|---|---|
| `enter 0,0` (`c8 00 00 00`) | 86 | **80** |
| `push ebp; mov ebp, esp` (`55 8b ec`) | 366 | **283** |
| `xor eax, eax` (`33 c0`) | 26 | **27** |
| `sub eax, eax` (`2b c0`) | 167 | **618** |

**Both binaries mix all four idioms in the same proportions of presence.** Fujitsu's own code
uses `enter 0,0` 80 times. Origins' code uses it 86 times.

## The confirmation that makes it airtight

Both binaries carry the same two banner strings, byte for byte:

```
High C Run-time Library Copyright (C) 1983-1988 MetaWare Incorporated.
Copyright (C) FUJITSU LIMITED.
```

The **runtime library is identical**. Both were built against the same `libc`, on the same
platform, with the same MetaWare release.

## What this means

**The "different compiler generation" hypothesis is dead.** It was wrong in the way
`docs/compiler-generation.md` feared and in the way this project keeps repeating: a signal was
measured on one binary, found clustered, and attributed to provenance without ever checking
whether the same signal appears in a binary whose provenance is known and different.

It did appear. It is in Fujitsu's launcher, more often than in the game.

**So what is `enter 0,0` for?** The remaining question is much smaller and no longer about
provenance. Two candidates:

1. **A code-generator decision inside one compiler.** The same backend emits `enter` for some
   functions and `push ebp; mov ebp, esp` for others, based on something in the function's
   shape. Fujitsu's launcher has the same mix, which is consistent with this.
2. **An assembler macro.** If part of a binary was assembled rather than compiled, the
   assembler's macro would emit whichever form it was written with.

The interleaving measured in `docs/enter-cluster.md`, 13 alternations across 41 routines,
fits candidate 1 better than candidate 2: a macro would follow the hand-written block, not
alternate 13 times.

## What this does to the parked routines

`0xfdea0`, `0xfde90` and `0xfdebc` were parked with the cause "target uses `enter 0,0`, High C
1.73 emits `push ebp; mov ebp, esp`". **That cause is now known to be wrong as stated.** The
compiler does emit `enter` sometimes, in this very binary and in Fujitsu's. What we do not yet
know is what selects it.

The park reason should read: the same compiler emits both forms, and the selection rule is
unknown. That is a different and more tractable problem, because it means a source shape does
exist and has not been found, rather than the routine being out of reach.

## The lesson, which is the same one twice

`docs/compiler-generation.md` used clustering as evidence of provenance. It never tested
provenance on a binary whose provenance was known. One extraction and four counts would have
shown the signal is platform-wide.

That is the identical defect as the mask-too-narrow bug in `tools/cmpdisp.js`: a conclusion
drawn from a measurement that was correct in itself and applied to the wrong population.

## Related

- `docs/compiler-generation.md`: the hypothesis, now refuted
- `docs/enter-cluster.md`: the interleaving, which survives and supports the compiler-decision reading
- `docs/nonleaf-relocation-ceiling.md`: the relocation class, unaffected
- `docs/compiler-toggles.md`: the 43 toggles, none of which is this
