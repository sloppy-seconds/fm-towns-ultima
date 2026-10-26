# The nobase-SIB addressing class

**Verdict: OPEN, and reduced from three routines to one.** Two of the three members were
still in this class by mistake, and the flag search in
[leasib-flags-negative.md](leasib-flags-negative.md) is what exposed it. What remains is a
single routine with a measured negative behind it.

## The correction, first, because it changes the count

This page originally listed `0xe779c`, `0xe7784` and `0xe3c58` as three routines parked on
one cause. **`0xe779c` and `0xe7784` were never mismatches.** The plain source

```c
extern char arr[];
int f(int i) { return *(int*)(arr + i*57); }
```

compiles, with **no flags**, to `8b 82 <disp32>`, which is exactly the target. Both are now
recovered under the disp32 standard. The park notes were written from a different source
shape that produced `8b 04 15`, and the shape rather than the routine was the problem.

That is the same defect class this project keeps recording: a conclusion drawn from one
probe that would have been reversed by a second. The lesson is narrower this time, though,
and worth stating: **a park note must record the source that produced the mismatch.** The
original notes did not, so the wrong conclusion could not be checked against its input.

## The one genuine case

Only `0xe3c58` remains, and it is a different instruction from the one the class was named
for. It is a `lea`, not a load:

```
target    8d b0 90 de 04 00    lea esi,[eax+0x4de90]      base register present
ours      8d 34 05 <disp32>    lea esi,[eax*1+disp32]     SIB base field = 101
```

39 of its 41 bytes already match, including the `lodsb`/`stosb` loop.

## The flag search, run

Forty flag sets, one fixed source, `tools/leasibflags.py`:

```
compiled: 39 of 40;  rejected: 1
emitted the base-register lea (8db0): 0
no exact match
```

The search is not an empty gesture: `-off optimize_xjmp` and `-off auto_reg_alloc` both
changed the emitted code, so the flags reach codegen. Neither fixes the `lea`. The full
result, including which toggle names are demonstrably live and which are unobservable, is
in [leasib-flags-negative.md](leasib-flags-negative.md).

**The honest limit:** several toggle names tested were invented, and this compiler accepts
an unknown toggle silently. So the negative binds the `-O` family and the two proven-live
toggles, and does not bind names this project does not know. Reading the real toggle list
from the kit is the next probe and has not been done.

## The remaining sections

The material below was written when the class had three members and one of them was
`0x100307`, which turned out to be a mask defect in the comparison tool rather than a
codegen difference. It is left in place because the reasoning about which encodings differ
is still correct, but the counts in it are superseded by the two paragraphs above.

## The difference, exactly

The game emits a memory operand with **no base register**, using a SIB byte whose base field
is `101` and whose scale is 1:

```
8b 04 15 <disp32>    mov eax,[edx*1+disp]     (0xe779c target)
```

High C 1.73 emits the base-plus-displacement form:

```
8b 82 <disp32>       mov eax,[edx+disp]       (what we compile)
```

The two encode the same address. The difference is whether the compiler has a register to
put the base in at the moment it builds the operand.

**Two routines have it the other way round.** `0x100307` and `0xe3c58` were both recorded
as members of this class and one of them was wrong. Measured from the image:

```
0x100307 target: ... c6 80 05 fa 0d 00 ff ...   mov byte [eax+0xdfa05],0xff
0xe3c58  target: ... 8d b0 90 de 04 00 ...      lea esi,[eax+0x4de90]
```

**`0x100307` is not in this class.** Its target uses the base form, and the mismatch was in
the tool rather than in the compiler: `tools/cmpdisp.js` masked the `a1`/`a3` moffs opcodes
but not the byte forms `a0`/`a2`, so a correct routine was reported as differing in five
bytes that were three separate absolute displacements. With `a0`/`a2` added to the mask it
is `identical except disp32`, and it is now recorded as recovered. That is a mask gap, not a
codegen difference, and it is the kind of error this page exists to keep out of the class
list.

So the class has **three** members, not four: `0xe779c`, `0xe7784` and `0xe3c58`.

## The four routines, and the shapes tried

| routine | what it is | what was tried |
|---|---|---|
| `0xe779c` | getter, 57-byte-stride array at `0x7af05` | byte array `arr+i*57`; struct with 53-byte pad; `extern` array; `register` pointer; `int[64][14]` |
| `0xe7784` | setter for the same array, stores `-1` | same set, since the shape is identical |
| `0xe3c58` | 0x1000-byte copy, `lodsb`/`stosb` loop | `src + (i<<12)`; `&src[i<<12]`; `src + i*4096`; `(unsigned char*)((int)src + (i<<12))` |
| `0x100307` | conditional byte store | **not this class**, and recovered. See the correction above |

Eleven source shapes across three routines, and the field that differs is the same one every
time. `0xe3c58` is the most useful because **39 of its 41 bytes already match**, including
the `ac aa 41 eb f3` `lodsb`/`stosb` loop, so only the `lea` differs.

## Why this is a class and not four routines

Three or more routines parking on one cause is the trigger in `docs/overnight-run.md` for
treating it as a class. Four have now, and none of them is a logic problem: in each case the
C is understood and the bytes agree except for one addressing encoding.

That means grinding more source shapes on `0xe3c58` is not work, it is repetition. The
question is whether High C 1.73 has **any** source form that puts the base in the displacement
instead of a register, and the honest answer so far is that the twelve shapes tried say no.

## What would settle it

Not more source shapes. Two things:

1. **A flag search that is aimed at this specific output.** `docs/decompilation-experiment.md`
   tested 21 flag sets for the *frame* decision. The addressing choice is a different toggle
   and has not been searched. `-on/-off` for the addressing or register-allocation family is
   the place to look, and the probe is a single fixed source with a known correct output.
2. **A runtime answer.** Whether the original compiler even had this choice, or whether the
   region was built by the different compiler `docs/compiler-generation.md` describes, is
   settled by evidence of provenance rather than by source shape.

## The relationship to the other two classes

Three class causes now account for most of the parks:

| class | tell | routines |
|---|---|---|
| relocation | `00 00 00 00` where an address belongs | the whole `non-leaf` set; handled by `tools/cmpdisp.js` |
| compiler generation | `enter 0,0`, `xor eax,eax` | 3 parked, 29 routines affected |
| nobase SIB | base in a register where the game uses the displacement | 3 parked (`0xe779c`, `0xe7784`, `0xe3c58`) |

The first is solved by tolerating it, because it is a linker's job. The other two are not
solved by tolerance: they are byte differences that a correct source cannot remove, and
they mark a limit of this compiler rather than of the source.

## Related

- `docs/compiler-generation.md`: the `enter`/`xor` class
- `docs/nonleaf-relocation-ceiling.md`: the relocation class
- `docs/overnight-run.md`: the queue, Pass 2, and the three-park trigger
- `docs/tooling-policy.md`: the decoder used for every measurement here
