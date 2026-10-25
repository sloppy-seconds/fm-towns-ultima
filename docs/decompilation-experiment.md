# The decompilation experiment: what was run, and what it found

A first attempt at the Level-1 reconstruction loop, run on real routines from
`ENCHANT.EXP` rather than described. Three routines were driven end to end
through the compile API. Two matched; one exposed the Andon Cord trigger that
matters. The candidate pool turned out to be far smaller than the routine count
suggests, and one address in the project's own tooling is wrong.

## The loop, as run

For each routine: read its bytes from the image, disassemble, write C, compile
via `tools/cserve.js`, compare the emitted `LEDATA` against the target.

```
node tools/preflight.js 0xe662c        is this attemptable?
./tools/cc.sh -e '<candidate C>'       compile and print the bytes
```

## Result 1: a byte-identical match, and the source form decides it

`0xe662c`, nine bytes:

```
0x0E662C  8B442404   mov eax,[esp+0x4]
0x0E6630  0FBF4036   movsx eax,word [eax+0x36]
0x0E6634  C3         ret
```

Target bytes: `8b 44 24 04 0f bf 40 36 c3`

| candidate source | result |
|---|---|
| `int f(int p) { return *(short *)(p + 0x36); }` | `8b 44 24 04 83 c0 36 0f bf 00 c3` |
| `int f(char *p) { return *(short *)(p + 0x36); }` | **MATCH** |
| `int f(char *p) { return *(short *)&p[0x36]; }` | **MATCH** |
| `struct S { char pad[0x36]; short v; }; int f(struct S *p) { return p->v; }` | **MATCH** |
| `int f(char *p) { return *(short *)(0x36 + p); }` | **MATCH** |

**Four different sources produce identical bytes; one produces different bytes.**
The discriminator is whether the compiler sees a *byte* pointer, which lets it
fold `0x36` into the displacement. An `int` pointer makes it emit
`add eax,0x36` then `[eax]`.

This is the single most useful thing the experiment established. It is the same
effect that made `plot` diverge: pointer type determines whether a displacement
folds. When a candidate does not match, **vary the pointer type before touching
anything else.**

## Result 2: Trigger 1, confirmed mechanically

Two routines that read or write an absolute address:

```
0xfdeb0   A13CEA0D00   mov eax,[0xdea3c]
0xe8860   8B442404     mov eax,[esp+0x4]
          A370DA0C00   mov [0xcda70],eax
```

Compiling `int g; int f(void) { return g; }` produced:

```
a1 00 00 00 00 c3
```

The displacement is **`00 00 00 00`**, a relocation placeholder. Inspecting the
object confirms it: **`FIXUPP` present**, one record.

So the mismatch is not a codegen difference. The `LEDATA` bytes are pre-link and
the displacement is filled in by the linker against a base this build never had.
**No C will ever match these bytes as emitted.** This is Trigger 1 exactly, and
it is detectable before writing any C.

## Result 3: the candidate pool is 103, not 738

`funcs.js` reports **738 distinct `E8` call targets**. Many are *interior
addresses*, not function starts. Two examples, both called hundreds of times:

```
0xe6b1c, called 240 times. Fresh disassembly:  55 2C 89 94 08 45 07 00 00
  That is `push ebp` followed by garbage, because the containing instruction
  is `89 94 08 41 07 00 00` and the target lands inside its displacement.

0xe7440, called 231 times. Fresh disassembly:  E0 AE 07 00 1E ...
  `loopne`, which no C compiler emits.
```

Writing C for either is impossible: there is no source that produces a
mid-instruction entry point.

**The test that separates them:** work backwards from the target, strip
alignment padding (`8b c0` = `mov eax,eax`, `90`, `cc`), and require the byte
before it to be a `ret`. A real function follows the previous function's return.

Applied to all 738:

| | count |
|---|---|
| `E8` targets | 738 |
| start with `55 8b ec` (framed) | 318 |
| preceded by a `ret` within 8 bytes after stripping padding | 454 |
| **real starts that are also leaves** | **103** |

103 leaves is the honest experiment queue. The 103 are also, by construction,
the routines whose `OBJ` carries no `EXTDEF` and no `FIXUPP`, so Trigger 1
cannot fire on them.

Smallest candidates, all under 10 bytes:

| address | bytes |
|---|---|
| `0x103ef3` | 5 |
| `0xff9dd` | 6 |
| `0xfdeb0` | 6 |
| `0x104228` | 8 |
| `0xe662c` | 9 (matched) |

## Result 4: `cfgwalk --check` is necessary but not sufficient

Every interior address above answers **`true`** to `cfgwalk --check`, because it
genuinely is an instruction boundary in the decoded stream. Boundary-ness is not
the same property as "is a function start".

**Both tests are required.** The pre-flight gate in `tools/preflight.js` asks
both and only then reports a candidate.

## Correction to the project's own data

`funcs.js` lists `0xf3e04` as the pixel writer, called 104 times. The real
function is at **`0xf3e24`** (documented in
[pixel-writer-address-correction.md](pixel-writer-address-correction.md)).
`0xf3e04` is an interior address. The call-target list has not been regenerated
since that correction, so any count derived from it inherits the error.

This is the second time an uncorrected address has cost time. It is worth fixing
in `funcs.js`'s output rather than noting it again.

## What the experiment proves about the loop

**Viable.** Compile-and-compare works, takes about 12 seconds per attempt, and
the pre-flight gate removes roughly 86 percent of the naive candidate set before
any C is written.

**Source form is the dominant variable, not compiler flags.** Four flag sweeps
earlier in the project produced byte-identical output. Four *pointer types* here
produced two different instruction sequences. Effort should go into C shape.

**Trigger 1 is real, common, and pre-detectable.** Any routine touching an
absolute address relocates. That is most of the 635 non-leaf routines, which is
another reason the leaf pool is the right place to work.

## What was not tested

- **No multi-routine routine was matched.** All matches are leaves under ten
  bytes. Whether the loop scales to a framed function with locals and branches
  is untested.
- **No state-diff verification.** The post-Andon path in the strategy needs a C
  execution harness that does not exist. Snapshots of the live guest exist
  (`MD`, `SAVESTATE`), dual execution does not.
- **No Andon trigger other than 1 was hit.** Trigger 2 was never legitimately
  reached because the pointer-type fix resolved the one divergence that looked
  like register allocation.

## Related

- [decompilation-loop.md](decompilation-loop.md): the strategy, with the
  amendments this experiment forced
- [decompilation-plan.md](decompilation-plan.md): the agentic loop built on it
- [compiler-api.md](compiler-api.md): the instrument
