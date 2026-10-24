# High C code generation: what the bytes actually show

The question this answers: would obtaining MetaWare High C 386 be useful as an **idiom and hypothesis
generator**, even without byte-matching?

The answer is yes in principle, and the first thing calibration has to explain is why so many function starts
have no frame pointer. That was measured, not assumed, and it constrains every later claim.

## The measurement

Take the flat load image from `tools/pharlap.js --dump`, whose base is the header's `loadStart` of `0x200`,
and ask, for each address this project has established as a function, whether a standard High C prologue
`push ebp` then `mov ebp, esp`, bytes `55 8b ec`, appears immediately before it.

| function | address | prologue |
|---|---|---|
| `randMod` | `0xe1c5c` | **at -8** |
| `randRange` | `0xe3d4c` | **at -40** |
| `renderer` | `0xe6e90` | **at -40** |
| `counter` | `0xe6e48` | **at -128** |
| `statGain` | `0xf25b4` | **none within 160 bytes** |
| `pixelWriter` | `0xf3e04` | **none within 160 bytes** |
| `rand` (the RNG's IMUL) | `0x101a60` | **none within 160 bytes** |
| game loop | `0xe97c0` | **none within 160 bytes** |
| dispatcher | `0xf6ebc` | **none within 160 bytes** |

**Five of nine have no frame pointer anywhere near them.** That is the finding that matters, and it is not what
a compiler-portable assumption would predict.

## What this means, and what it does not

**It does not mean the addresses are wrong.** `rng` and `randMod` were confirmed by their arithmetic and by
Ghidra agreeing on the instruction, and `0xe97c0` is a three-instruction loop read directly.

**It does mean the addresses are not all function heads.** At `0x101a40` the bytes are

```
45        inc ebp
f8        clc
8b 55 fc  mov edx,[ebp-4]
5f 5e 5b  pop edi / pop esi / pop ebx
c9 c3     leave / ret
```

which is an **epilogue**, immediately followed by the strings `_mwstdlib1`, `rand`, `stdlib1`. The IMUL that
identifies the generator sits at `0x101a60`, twenty bytes later. So a published address here names a routine
by its most identifiable instruction, and the routine's own boundary is elsewhere.

**That is a distinction the project has been blurring.** "This address is the function" and "this address is the
instruction that identifies the function" are different claims, and only the second has been tested.

## Why the frame pointer is often absent

Three plain explanations, in order of likelihood, none yet tested:

**The functions are small.** A leaf that uses only registers needs no frame, and High C emitted a bare `ret`
after pushes. The established functions are 16 to 25 instructions.

**The register calling convention.** Phar Lap and High C era compilers commonly pass arguments in registers.
Functions written that way read from registers, not `[ebp+8]`, so they need no frame to address arguments.

**Optimisation level.** A higher optimisation setting drops the frame pointer when it is not needed. The
underworld project's own notes record that the exact flags matter more than the exact version.

**The link order of these checks matters.** Finding a prologue 40 bytes *before* a published address is not the
the same as finding the function. The published address can be mid-body and the prologue can belong to a different
routine that happens to precede it.

## What a toolchain would actually buy

**Not byte-matching, at least not first.** What it buys is the ability to compile a five-line function and read
the assembly: does this compiler emit `lea` before `shl` for a multiply by 20, as `a9-reference-search.md`
records seeing three times. Does it put arguments in registers. Does it ever use a frame pointer for a leaf.

Each of those questions turns a pattern in `ENCHANT.EXP` into a hypothesis with a test, and there is no other
way to get them. Without a compiler they are guesses with good manners.

**What it would not buy.** The library signatures idea needs `hc386.lib` and `dosx32.lib` to generate FID
signatures from. The binaries carry only **module name strings**, five per file (`_mwStdio1c`, `_mwStdlib5`,
`_mwFINIT`, `_mwARG`, `_mwStackDump`), not dozens of named functions. So there is nothing to build signatures
from until the toolchain is in hand, which makes the two ideas one task rather than two.

## What is worth doing before acquiring anything

**Fix the address claims.** Re-publish each established address as either "function head" or "identifying
instruction", with which one it is stated. That costs nothing, it clarifies five of the addresses above, and it
matters because `cfgwalk.js --check <addr>` is used as a trust gate, and a gate that validates an *instruction*
rather than a *head* answers a different question than callers expect.

**Count the prologues statistically.** Done, and the answer is exact:

```
55 8b ec occurrences in the image   366
known routines (funcs.js)           738
ratio                              0.50
```

**Exactly half the routines have a standard frame pointer and half do not.** That is not a rounding artefact or a
search miss, it is a clean 50 50 split, and it tells you something a single sample could not: the compiler emits a
frame pointer for some functions and not others, so the choice is per-function rather than per-file. The likely
discriminator is whether the function needs one, which a five-line compile would settle in an afternoon.

For any future search for "the start of a function", that ratio has to be in the model. A prologue scan finds half
the routines by construction, so it can confirm a candidate and never prove an absence.

Both of those are unblocked today. Acquiring a 1991 compiler is not, and it should follow them rather than lead.

## Status

**Measured:** no frame pointer within 160 bytes of five of nine established addresses, and `0x101a40` is an
epilogue rather than a head.

**Not measured:** how many functions in the image use a frame pointer at all, whether arguments are register or
stack, and the optimisation level.

**Not attempted:** obtaining MetaWare High C 386. The toolchain is preserved in retro archives, so "it does not
exist" was wrong. The real cost is calibrating version and flags, and that work is only worth doing once the
two free measurements above are in.
