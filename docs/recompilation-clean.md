# The recompilation, run clean: 709 functions, 761 vectors, 0 failures

`docs/recompilation-result.md` recorded a working recompilation and a caveat: 366 conflicts, 824
refusals, and a `655,298 instruction` walk over a 1,072,398-byte file. This page records the
same pipeline run with the zero-run guard applied, which is the configuration the project's own
coverage work already justified and which the earlier run did not use.

**The result: 40,927 instructions instead of 655,298, 359 conflicts instead of 366, and the
output compiles in 90 seconds instead of exhausting the machine, with 761 vectors and 0
failures.**

## What was run

```
ARGS="--no-code 0x0:0x200"; for r in $(node tools/codelimits.js); do ARGS="$ARGS --no-code $r"; done
./tools/.venv/bin/python3 -m fmtownskit.recomp --out recomp2 \
    --exp "game=ENCHANT.EXP@0x0/0x105d0e+$(cat seedset.keep)" $ARGS --selftest 3
```

Two things in that command line matter and both were wrong before.

## Correction one: the base is `@0x0`, not `@8`

`docs/recompilation-result.md` records `--exp game=ENCHANT.EXP@8+...`. For this `MP` the image
is the whole file at offset 0, which `docs/two-frames-of-reference.md` establishes and which
the header arithmetic confirms. A base of 8 shifts every emitted address by 8.

The check is simple: with `@0x0` the emitted symbols are `f_000002c8`, `f_000e5d90`,
`f_000e5ff4`, `f_000e6058`, which are **exactly** the addresses this project reads by hand. With
`@8` they would all be 8 higher and would not match `docs/display-context.md` or
`docs/rectangle-cluster.md`. Everything named in those pages is present in the output at its
true address:

```
$ grep -E "f_000e5d90|f_000e5ff4|f_000e6058" recomp2/p_game_funcs.h
void f_000e5d90(X86Cpu& c);
void f_000e5ff4(X86Cpu& c);
void f_000e6058(X86Cpu& c);
```

## Correction two: the zero-run guard is not optional

Without the guard the walk descends into zero fill and decodes it as `add [eax],al`, one
instruction every two bytes. That produced:

| | unguarded | guarded |
|---|---|---|
| instructions | 655,298 | **40,927** |
| bytes of code | 1,356,442 | **127,205** |
| conflicts | 546,743 (672 seeds, no header range) | **359** |
| C++ source | 20 MB per translation unit | **8.2 MB total** |
| compile time | over 8 minutes, not finished | **90 seconds** |

The instruction count is the tell. 40,927 is in the same range as this project's own guarded
walk (35,644 instructions over 397 seeds, `docs/guarded-walk-coverage.md`), while 655,298 is
larger than the file can contain. The earlier page's "655,298 instructions" was the same
overcount that `guarded-walk-coverage.md` already documented as "more code than the file
contains", and it was still in the recompilation write-up.

**The conflicts that remain are real and small.** 359, concentrated near the start of the image
(`0x235`, `0x5b9`, `0x7b5`), and they are a known class: a target derived from a table that
points into code that another path decodes from a different offset.

## What came out

| | |
|---|---|
| functions | **709** |
| instructions | **40,927** |
| bytes of code | **127,205** |
| C++ | **204,985 lines**, 38 translation units plus a 2.6 MB table |
| compiles | **yes**, 90 seconds, one link, no errors |
| self-test | **761 vectors, 0 failures**, 6 stopped at the machine |
| jump tables | 67, of which 64 bounded |
| indirect transfers unresolved | 24 |
| refused | 828 |

`6 stopped at the machine` means six vectors reached an interrupt, a port or a far transfer,
which is a property of the function and not a failure: the C++ stops where the interpreter
stops.

## The output is readable

This is the part that makes it useful rather than merely correct. Every instruction carries its
address and its disassembly as a comment, so a function can be read next to the page that
documents it. `f_000e5ff4` is the `rect_fill` of `docs/rectangle-cluster.md`:

```c
void f_000e5ff4(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0e5ff4  push ebp
    X86_AT(c, 0xe5ff4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e5ff5  mov ebp, esp
    X86_AT(c, 0xe5ff5u);
    c.r[5] = c.r[4];
    // 0e5ff7  mov ax, word ptr [0x7aedc]
    X86_AT(c, 0xe5ff7u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x7AEDCu))));
    // 0e5ffd  or al, 0x20
    X86_AT(c, 0xe5ffdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x20u, 1)); }
```

Which is the save-mode, set-bit-5 sequence that page describes, at the addresses it gives. A
reader can check the prose against the code without a disassembler.

## What this does not mean

**It is not a port.** The output is a function-per-routine translation driven by a CPU state
struct. There is no game loop, no timer, no input, no file I/O: those are the 24 unresolved
indirect transfers and the 828 refusals. `docs/reimplementation-gap.md` owns the measured
distance and this page does not change it.

**709 functions is not the whole program.** `docs/seed-sets.md` records that the seed set is
the limiting factor rather than the walk, and the union of curated and derived seeds is larger
than what was used here.

## Reproducing it

The generated C++ lives in `/var/tmp/recomp2` and is not committed: it is derived from
copyrighted code. To regenerate, follow the command at the top of this page. `refindex.json`
and the seed set are gitignored or in scratch space for the same reason.
