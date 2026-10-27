# `enter` is compiler-emitted in both binaries, and carries a local size

**Verdict: the assembly-stub reading is wrong for both programs. `enter` appears in ordinary
C-shaped routines in `ENCHANT.EXP` and in `TMENU.EXP`, and it encodes the function's local
frame size, which a hand-written stub would not do.**

This is the census that `docs/enter-band-boundary.md` asked for, run on Fujitsu's binary as
well as Origins'. It reverses the last remaining explanation.

## The census

`tools/entercensus.js`, seeding from every direct call target in each binary, then classifying
each entry by prologue form and by whether its body contains a non-C instruction.

`TMENU.EXP`, 823 entries:

| prologue / kind | count |
|---|---|
| `push-ebp` / C-frame | 203 |
| **`enter` / C-frame** | **169** |
| `enter` / other | 61 |
| `other` / other | 266 |
| `other` / stub | 36 |
| `enter` / stub | 22 |

**169 routines start with `enter` and are C-shaped**: they read arguments at `[ebp+N]` and
contain no `int`, `out`, `pushal` or `loop`. If `enter` were an assembler idiom confined to
hardware glue, that number would be near zero.

## The decisive detail: `enter` takes a local size

`enter imm16, imm8` has two operands: bytes of locals to allocate, and a nesting level. A
compiler setting up a frame fills in the first. A hand-written stub that wanted `enter 0,0`
would pass zero.

Counted across both binaries, `enter` with a non-zero first operand:

| | `ENCHANT.EXP` | `TMENU.EXP` |
|---|---|---|
| `enter 0x0` | 92 | 151 |
| `enter 0x4` | 17 | 69 |
| `enter 0x8` | 4 | 56 |
| `enter 0xc` | 5 | 28 |
| `enter 0x10` | 4 | 28 |
| `enter 0x18` | 0 | 21 |

**Both binaries allocate locals through the `enter` operand.** `ENCHANT` does it 34 times
across the sizes above.

## A worked example from TMENU

`0xfb7c`, which touches no hardware at all:

```
enter 0xc, 0x0                      <- 12 bytes of locals
push esi / push edi / push ebx
mov esi, [ebp+0x8]
mov ecx, [ebp+0xc]
sub ecx, [ebp+0x18]
...
mov [ebp+0xfffffffc], esi           <- local at [ebp-4]
mov [ebp+0xfffffff8], ecx           <- local at [ebp-8]
mov [ebp+0xfffffff4], 0x0           <- local at [ebp-0xc]
...
call 0xfbf8
```

That is a compiler allocating exactly the 12 bytes its `enter` operand declared, and using
them as locals in a comparison loop. There is no plausible hand-written reading of it.

## What this means

**`enter` is a code-generation choice of the toolchain, present in both programs, not an
assembly idiom.** The three readings that accumulated over this investigation resolve as:

| reading | status |
|---|---|
| a different compiler | refuted, `docs/enter-is-platform.md` |
| a separately linked library or translation unit | refuted, `docs/enter-band-boundary.md` |
| hand-written assembly in the same link | **refuted here** |

What is left is the original one: **the same compiler emits both prologue forms and something
selects between them.** The selection is not any of the 43 command-line toggles
(`docs/compiler-toggles.md`), and it is not reachable from the source shapes tried
(`docs/highc-driver-route.md`).

## The honest gap this exposes

`ENCHANT` uses `enter` 86 times in raw bytes but only **29** census entries start with it, and
92 of the raw `enter 0x0` hits are inside instructions rather than at entries. So the raw
counts quoted in `docs/compiler-generation.md` were measuring something looser than function
prologues. That page's numbers should be read as byte-level indicators only.

More importantly: `TMENU` uses `enter` far more than `ENCHANT` does, proportionally. **252 of
823 entries against 29 of 454.** Two binaries from the same toolchain differ five-fold in how
often they choose it. That is the strongest evidence yet that a per-function condition
selects the form, and that `ENCHANT`'s band is where that condition is met, not where a
different build starts.

## Related

- `docs/enter-band-boundary.md`: the band, still correct as a boundary
- `docs/enter-is-platform.md`: why "different compiler" was wrong
- `docs/compiler-toggles.md`: all 43 toggles, exhausted
- `docs/highc-driver-route.md`: the driver route, and three uncontrolled tests
- `tools/entercensus.js`: the tool this page uses, reusable on any container
