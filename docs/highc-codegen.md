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

## Alternate prologues were tested and do not explain the missing half

The obvious objection to the 50 50 figure is that half the routines use a *different* prologue rather than none.
That was tested image-wide rather than argued:

```
55 8b ec  (push ebp, then mov ebp,esp)    366   50% of 738 routines
83 ec NN  (sub esp,N with no frame)        80   11% more at most
```

**`sub esp` adds at most eleven points, so the alternate-prologue explanation covers a sixth of the gap, not the
half it would need to.** The majority of unframed routines begin with neither a frame nor a stack allocation.

Three other candidate entry shapes were checked and none produced a head within 400 bytes of the cited address:
a bare callee-saved push pair, `push ebp` followed by callee-saved registers, and a clean prologue preceded by a
`ret` or `leave`. So the missing prologues are not simply a different pattern in a predictable place.

## The cited addresses are instruction addresses, not function heads

This is now measured rather than suspected, and it is the more important half of the finding.

Look at the twelve bytes before each cited address:

| function | cited | preceding bytes | what that is |
|---|---|---|---|
| `statGain` | `0xf25b4` | `...68 d4 63 00 00` | the tail of `push 0x63d4`. The cited address lands inside an instruction's operand |
| `pixelWriter` | `0xf3e04` | `...b8 ff ff ff ff` | the tail of `mov eax,-1` |
| `dispatcher` | `0xf6ebc` | `...6a 07 e8 89 fc fe ff` | the tail of a `call` |

**A CORRECTION TO THIS SECTION, from the walk that settles it.** Reading the bytes by eye suggested these
addresses began mid-instruction. Checking them against `cfgwalk.js`, which walks from all 738 CALL targets, says
otherwise for two of the three:

```
0xf3e04   boundary: true   CALL target: true   prologue: false   -> function head
0xef4bb   boundary: false  CALL target: false  prologue: false   -> not a boundary at all
0xe1c5c   boundary: true   CALL target: true   prologue: true    -> function head
```

**`0xf3e04` is called by something, so it is a function head with no frame pointer.** My byte-level reading was
wrong because a cursor placed by hand lands wherever it lands, while the walk has 79,470 decoded instructions
agreeing on where boundaries are. That is the same lesson as everywhere else in this project: prefer the
instrument to the eyeball.

**So the finding narrows to what it actually says.** The published addresses are function heads that were
*identified* by a distinctive instruction, and the error that matters is smaller than "mid-instruction": it is
that **three of three checked had no standard prologue**, and a hand search for `55 8b ec` would have missed two of
them. An address being a CALL target is the reliable test, and the prologue is a convenience.

**What this does not change.** The pre-correction claim below overstated the case, and the underlying point
stands: a cited address is a citation of an identifying instruction, not proof of a boundary, and only the walk
proves a boundary.

*The superseded reading, kept because the reasoning error is instructive:* `ghidra-viability.md` records Ghidra agreeing on these addresses, and it is
now consistent: Ghidra was asked to disassemble at a byte offset and did so, which is not the same as identifying a
function entry.

**What this does not invalidate.** The routines are real and their behaviour was read correctly. `randMod`,
`randRange`, `renderer` and `counter` do have a real `push ebp` a short way before the cited address, so for those
the citation is a body address inside a correctly located function.

**What it does invalidate.** Any claim of the form "`0xf3e04` is the pixel writer" as a *function boundary*. The
honest form is "the instruction at `0xf3e04` is how the pixel writer was identified". Those support different
conclusions, and only the second has evidence.

## The calling convention is stack-based, and it is mixed

Two counts that settle questions the plan was going to ask a compiler, and both contradict what I had assumed.

**Arguments go on the stack, not in registers.** `pixelWriter` at `0xf3e04` reads its arguments with

```
8b 44 24 0c   mov eax,[esp+0xc]   ; arg3
8b 54 24 08   mov edx,[esp+0x8]   ; arg2
```

which is `esp`-relative, with no frame pointer at all. Image-wide:

```
mov reg,[esp+disp8]   223
mov eax,[ebp+disp8]   394
```

Both forms are common, and they are the same convention at different points: a framed function reads its
arguments off `ebp`, an unframed one reads them off `esp`. **Neither passes arguments in registers.** The earlier
guess in this page that High C used a register convention was wrong, and the count says so.

**Clean-up is split.** Of the returns in the image:

```
c3        plain ret        1024
c2 imm16  ret and pop N     341
```

A third of the returns clean their own arguments, which is the `stdcall` shape, and two thirds do not, which is
`cdecl`.

**Two caveats on that count, and they matter.** `c2` is a single byte, so the 341 is a **byte scan, not an
instruction scan** and it includes `c2` appearing inside data or inside a longer instruction. And the addresses
are spread across the whole image rather than clustered at the Fujitsu library:

```
0x000000:  40      0x0e0000:  69
0x0d0000:   6      0x0f0000:  99
                   0x100000: 127
```

So this is not a clean split between Origins code and library code, which was the tidy explanation. It is mixed
within the game code, or the count is inflated by false positives, and **the current tooling cannot tell which.**
Confirming it needs the `ret` bytes intersected with instruction boundaries from `cfgwalk.js`, which the CLI does
not expose.

**So this is a lead, not a finding.** Who pops the arguments is the question that decides how a decompiler should
type every call, and it is worth a proper count before it is believed.

## What this changes about the experiment

The plan was going to ask a compiler how it passes arguments. **That question is now answered from the bytes**, so
it does not need a toolchain, and the experiment can spend its effort on the questions the bytes cannot answer:

| question | status now |
|---|---|
| register or stack arguments | **answered by counting**: stack, both framed and unframed forms |
| who cleans the stack | **half answered**: 341 of 1365 returns pop arguments, split not yet attributed |
| when a frame pointer is emitted | **open**, and the 50 50 split is the target to reproduce |
| multiply-by-20 `lea`-then-shift sequence | **partly open**: three sites found, not proved to be the idiom |
| how a `switch` is emitted | **open**: `jump-tables.md` has tables, no attribution to High C |

That is a much sharper experiment. Compile one function with a frame and one without, and see whether the
difference is local-variable count, `-O` level, or a specific switch.

## Why the frame pointer is often absent

Three plain explanations, in order of likelihood, none yet tested:

**The functions are small.** A leaf that uses only registers needs no frame, and High C emitted a bare `ret`
after pushes. The established functions are 16 to 25 instructions.

**~~The register calling convention.~~ WRONG, and the count disproves it.** This page originally guessed that High
C passed arguments in registers, which would explain the missing frames. The bytes say otherwise: 223
`[esp+disp8]` argument reads and 394 `[ebp+disp8]` reads, and neither is a register-passed argument. Unframed
functions read their arguments off `esp` instead of `ebp`. Kept here because the guess was reasonable and wrong,
and a reader deserves to see which.

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
