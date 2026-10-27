# The real-mode generator does not emit `enter`

**Scope correction: this page tested `HCD386.EXE` only.** High C 1.73 has an optimising,
protected-mode path through the `HC386.EXE` driver on TownsOS, and it is measurably different:
`docs/highc-authentic-toolchain.md` records that the driver produced the optimiser output the
real-mode generator never could, and that `HCD386.EXE` returned byte-identical code for
twenty-one different flag sets. So "the compiler cannot emit `enter`" is too strong. What was
actually measured here is **the real-mode generator cannot**, under any setting reached from
that route.

`docs/enter-townsos.md` records the follow-up on the driver path.

**Verdict as measured, on `HCD386.EXE`:** across every source shape and every setting available
from the real-mode route, `HCD386.EXE` emits `push ebp; mov ebp, esp` and never `enter 0,0`.

This closes the chain of four pages on the subject. The earlier ones each narrowed it; this
one records the measurement that ends it.

## What was tried, and the count

Compiled through `tools/cc.sh` against **`HCD386.EXE`**, the real-mode generator (verified:
`cserve.js` line 364, and the compiler's own log line reads `MetaWare High C Compiler 1.73`).
This is not the optimising driver path; see the scope correction at the top.

**The control: `0xfe211` rewritten as C.** Its body is `enter 0,0; push ebx; mov bl,[ebp+8];
mov ah,0x46; call; movzx eax,al; pop ebx; leave; ret`, which is a BIOS character-output
wrapper. As C:

```c
void bios_out(int func, char c);
int f(char c) { bios_out(0x46, c); return (unsigned char)c; }
```

produces

```
55 8b ec 53 8a 5d 08 53 6a 46 e8 00 00 00 00 0f b6 c3 83 c4 08 5b c9 c3
```

**Same register allocation as the target (`53`, `8a 5d 08`, `5b`), same `leave; ret` tail, one
difference: the prologue.** The compiler chose the same everything and opened the frame
differently.

| setting | prologue emitted |
|---|---|
| (none) | `55 8b ec` |
| `-off optimize_fp` | `55 8b ec` |
| `-native -HVp` (the kit's own `ARGS`) | `55 8b ec` |
| `-on codeview` (the kit's own `HCDEBUG`) | `55 8b ec` |
| `-off optimize_xjmp` | `55 8b ec` |
| `-off optimize_fp -on codeview` | `55 8b ec` |
| `-O2` | `55 8b ec` |

And on shapes that force a real frame, with locals, with register saves, with three
arguments and three locals plus three calls: `55 8b ec` every time. **Zero `c8` in any
output.**

## Why the config-file lever is exhausted without being run

The plan was to vary `hc386set.cnf`, since `ARGS` lives there and not on the command line. That
turned out to be unnecessary: **the values in that file are `-native -HVp` and
`-on codeview ...`, and both were tested directly as flags above.** Bypassing the config by
calling `HCD386.EXE` directly does not hide anything, because the config's own contents were
reproduced on the command line.

Read alongside `docs/compiler-toggles.md`, which tested all 43 real toggle names, the space of
settings this compiler accepts has been covered.

## What that means for the three parked routines

`0xfdea0`, `0xfde90` and `0xfdebc` were parked on "target uses `enter 0,0`, High C 1.73 emits
`push ebp; mov ebp, esp`". That cause is now final, and it is a **`not-c`-shaped** conclusion
for the prologue specifically:

- the compiler does not produce this instruction under any setting tested
- the rest of the routine matches, so the logic is understood
- 13 of 15 bytes agree in the smallest case

They should be recorded as `not-c` with that reason, not as `unresolved`. `unresolved` implies
a lever might still be found. None remains.

## The two readings this leaves, both outside our control

1. **The band was assembled, not compiled.** The prologue is what an assembler macro would
   produce. `TMENU.EXP` showing both forms at the same rate is consistent with Fujitsu's build
   using the same assembler with the macro on for part of its tree.
2. **The band was built with a different release of the toolkit** that emitted `enter`. Both
   binaries carry the same `1983-1988` runtime banner, so the releases would have to be very
   close.

Neither is testable with what is on the disc. Both would be settled by the original Origins
source or build scripts, which are not available.

## What is genuinely known now, in order

| page | what it established |
|---|---|
| `compiler-generation.md` | first claimed a different compiler, on clustering |
| `enter-cluster.md` | the cluster is a 2,260-byte band and interleaves, so not a linked library |
| `enter-is-platform.md` | refuted "different compiler": Fujitsu's own launcher has the same idioms |
| `enter-band-boundary.md` | the band is 27 of 27 `enter` and 0 `push ebp`, a build-unit boundary |
| this page | the compiler we have cannot emit `enter` at all |

Four measurements, three of which corrected the one before. That is the honest history and it
is worth keeping, because the first page was confident and wrong.

## Related

- `docs/compiler-toggles.md`: the 43 toggles, all tested
- `docs/enter-band-boundary.md`: the boundary this explains
- `docs/enter-is-platform.md`: why "different compiler" was wrong
- `tools/cc.sh`: how every measurement above was made
