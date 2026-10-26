# The nobase-SIB addressing class

**Verdict: OPEN, parked as a class after three routines and eleven source shapes.** This is
the third of the class-level causes found working the `base-fold` queue, and it is recorded
once rather than as three separate park notes. A fourth candidate, `0x100307`, was withdrawn
from the class when the mask tool turned out to be the fault, and is now recovered.

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
