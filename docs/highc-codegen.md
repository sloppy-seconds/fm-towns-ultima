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

**Arguments go on the stack, not in registers.** `pixelWriter` at `0xf3e24` reads its arguments with

```
8B44240C          mov eax,[esp+0xc]       ; arg3 = row
C1E007            shl eax,byte 0x7        ; row * 128
8B542408          mov edx,[esp+0x8]       ; arg2 = col
668B4C2404        mov cx,[esp+0x4]        ; arg1 = value
```

> These four lines are not adjacent in the image. `shl eax,7` sits between the
> first `mov` and the second, and the real function is contiguous as
> `8b 44 24 0c c1 e0 07 8b 54 24 08 66 8b 4c 24 04`. An earlier version of this
> block omitted the `shl`, which made the two `mov`s look adjacent and was wrong
> about the byte layout even though the `esp`-relative conclusion was right.

which is `esp`-relative, with no frame pointer at all. Image-wide:

```
mov reg,[esp+disp8]   223
mov eax,[ebp+disp8]   394
```

Both forms are common, and they are the same convention at different points: a framed function reads its
arguments off `ebp`, an unframed one reads them off `esp`. **Neither passes arguments in registers.** The earlier
guess in this page that High C used a register convention was wrong, and the count says so.

**Clean-up is NOT split by the compiler. It is split by OWNERSHIP.** The game code is caller-cleans
throughout and the callee-pops returns are all in the library layer. The first measurement said the
opposite, and it was wrong because of the decoder.

The byte count came first:

```
c3        plain ret        1024
c2 imm16  ret and pop N     341
```

**341 is exactly one third of 1023**, which was tidy enough to be suspicious when it was written down. So it was
checked against the walk, which knows where instructions actually begin, and asks the decoder what each return is
rather than counting bytes.

**Superseded: the first instruction-level answer.** `node tools/cfgwalk.js --retmap` reported this, and the
conclusion drawn from it was that the game was `cdecl` throughout:

```
ret instructions at proved boundaries: 776
  plain ret   (caller cleans): 776  100.0%
  ret imm16   (callee pops):     0    0.0%
```

**That zero was a decoder artefact, not a fact about the game.** The scan at the time went through
`ndisasm`, which renders `9b c2 04 00` as ONE line:

```
00103F1A  9BC20400  wait ret word 0x4
```

whose mnemonic is `wait`. A scan for instructions beginning `ret` cannot see a return that follows an x87
`wait`, and every library stub of that shape was invisible. It is the same defect class as the dead
`ret n` regex in `tools/preflight.js`: the return is there, and the detector was asking a slightly
different question. `docs/tooling-policy.md` records the migration that fixed both.

**The measurement, through the shared decoder:**

```
ret instructions at proved boundaries: 781
  plain ret   (caller cleans): 680  87.1%
  ret imm16   (callee pops):   101  12.9%
  argument bytes popped, commonest first: 4x51 8x28 12x14 16x4 28x1 24x1 32x1 20x1

callee-pops sites by 64K region:
  0x100000: 101
```

**Every one of the 101 sits in the `0x100000` region.** `0xff000` is the library floor this project
classifies with, so the game code below it has **no** callee-pops return: 100 percent caller-cleans. The
library layer above it uses `stdcall`-style returns, and the commonest pop is 4 bytes, which is a single
argument. Two ways to check one by hand:

```
$ xxd -s 0x103f0d -l 8 ENCHANT.EXP
00103f0d: dd44 2404 c208 008b                      .D$.....

$ xxd -s 0x103f6f -l 12 ENCHANT.EXP
00103f6f: 8b44 2404 df30 9bc2 0400 8b44            .D$..0.....D
```

The first is `fld qword [esp+4]` then `ret 8`. The second is `mov eax,[esp+4]`, `fbstp [eax]`, `wait`,
`ret 4`. Both are x87 helpers, and in both the callee pops its own argument.

**What this means for a decompiler is better than the old answer, not worse.** The split follows ownership,
so it is predictable: inside the game, every call is typed the same way and the caller adjusts the stack.
At the boundary to the library the callee does. Had the first count been believed, the decompiler would
have been right about the game and wrong about the layer beneath it, which is where the graphics, sound and
text primitives live.

The counts 680 and 101 are asserted as a *property* rather than a number by `tools/checkall.js`
(`return convention split by ownership`): at least one callee-pops return must exist, so the zero cannot
return silently, and every one of them must sit at or above the library floor.

## The frame-pointer rule, measured across all 738 routines

`tools/frameanalysis.js` decodes each routine from its CALL target to its first return and asks what predicts a
frame. The frame pointer is emitted for **43.1 percent** of routines, close to the half that a whole-image byte
count of `55 8b ec` suggested. The routine count itself is owned by [call-graph.md](call-graph.md).

Four hypotheses, scored by how cleanly each separates framed from unframed:

| hypothesis | has it | lacks it | separation |
|---|---|---|---|
| reads arguments at `[ebp+N]` | 77.2% framed | 21.2% framed | **56 points** |
| has negative-offset locals | 72.9% framed | 35.9% framed | 37 points |
| makes a call | 45.9% framed | 37.8% framed | 8 points |
| (instruction count) | median 23 | median 12 | see below |

**Calling something is nearly irrelevant**, at 8 points. Size is weakly associated and cannot be the rule, since
unframed routines reach 401 instructions while the shortest framed one is 6.

**The combination is the answer:**

```
ebp args AND locals      n= 65   framed  66.2%
ebp args, NO locals      n=224   framed  80.4%
no ebp args, locals      n= 79   framed  78.5%
neither                  n=370   framed   8.9%
esp-relative args only   n= 72   framed   0.0%
```

**A routine gets a frame pointer when it needs to address the stack through `ebp`, and not otherwise.** Every
group that touches `[ebp]` is 66 to 80 percent framed. The group that touches neither is 9 percent, and the group
that reads its arguments through `esp` instead is **zero percent, in all 72 cases**.

That last row is the invariant worth having. **No routine is both framed and `esp`-argued, in any of 72 cases.**
Stated as a prediction, "framed if and only if it touches `[ebp]`" is right **84.3 percent** of the time, with 33
exceptions in each direction.

**What the prediction is good for.** It lets a tool guess whether a candidate entry will have a prologue, which
matters because a prologue scan misses more than half the routines. It is a heuristic at 84 percent, not a
theorem, and the 33 exceptions in each direction are unexplained.

### The exceptions are analysis artefacts, not compiler behaviour

The rule mispredicted 33 routines one way and 83 the other. Examining the bytes shows that **almost none of them
are functions**, and that the rule is better than the 84.3 percent figure claims.

Sample openings from the "framed but never touches `[ebp]`" class:

```
0x1e9      dec ebx
0xe06a0    and eax,0xffff
0xe0cc8    inc ebp
0xe2ff0    mov eax,ecx
0xe9bec    les edi,[...]
0xec154    add [eax],al
0xee770    udw
0xf29f0    fimul word [eax+eax]
0xf75cc    db 0xfe
0x10490c   push cs
```

**Not one of those is a function head.** They are mid-body instructions, or data being decoded as code. The walk
seeds entries from every CALL target, and a CALL target in a jump table or inside an inline string is not a function
boundary.

The "unframed but touches `[ebp]`" class is the same story:

```
0x229      66 0A 55 8B    o16 or dl,[ebp-0x75]     <- the ASCII bytes "uf" then more text
0xe6746    C6 83 ...      mov byte [ebx+0x5e5f04c4] <- starts two bytes into a real instruction
0xf1474    83 C4 04       add esp,0x4               <- mid-body, and it ends with pop ebx / leave
```

`0xe6746` is `mov eax,esi` at `0xe6745` with the walk having started one byte late. `0xf1474`, which the docs call
the music routine, opens with `add esp,4` and closes with `pop ebx; leave`, which proves a frame was established
earlier in the same function.

**One case looked like a counter-example to another finding, and was not.** At `0x103bc2` the bytes `C2 04 00`
decode as `ret word 4`, which would be a callee-pops return, contradicting the `--retmap` result of zero. The bytes
around it are ASCII:

```
0x103bb8  8d 65 f0 5f 5e 5b c9   lea esp,[ebp-0x10] / pop edi / esi / ebx / leave
0x103bbf  c2 04 00 90 63 68 65   <- then "check_hea", a string
```

So `C2 04 00` is inside a string, and `--retmap` was right. This is the same trap as the earlier byte scan of `c2`:
**a byte is not an instruction until a walk says it is.**

### What this means for the 84.3 percent

The figure counts 738 walk entries, of which an unknown number are not function heads. **The true accuracy is
higher, and the exceptions are mostly the walk's seeding rather than the compiler's behaviour.** A stricter study
would filter entries to those that begin on a proven instruction boundary with a plausible opening, and would likely
leave a small residue of genuine cases rather than 116.

That stricter study is not done, and the number should not be quoted as 84.3 percent without the caveat.

**What the exceptions suggest.** A framed routine that never mentions `[ebp]` may store a local with a positive
displacement, or pass a pointer to its own frame to something else. An unframed routine that does mention `[ebp]`
is probably reading through a pointer that happens to live in `ebp`, not its own frame. Both are guesses and
neither has been checked against the actual bytes of a single exception.

## What this changes about the experiment## What this changes about the experiment

The plan was going to ask a compiler how it passes arguments. **That question is now answered from the bytes**, so
it does not need a toolchain, and the experiment can spend its effort on the questions the bytes cannot answer:

| question | status now |
|---|---|
| register or stack arguments | **answered by counting**: stack, both framed and unframed forms |
| who cleans the stack | **answered by instruction count**: the caller, in every proved return inside the game code. 101 callee-pops returns exist and all are in the library layer above `0xff000` |
| when a frame pointer is emitted | **rule found**: framed iff the routine addresses the stack through `ebp`. The 84.3% figure is a floor, not the true accuracy, because most of its "exceptions" are not functions |
| multiply-by-20 `lea`-then-shift sequence | **CONFIRMED by compiling**: `lea [reg+reg*4]` then `shl 2` is `i*20` exactly |
| how a `switch` is emitted | **CONFIRMED by compiling**: `jmp dword near [cs:eax*4+disp]`, table holds segment-relative offsets |

**The last two are now closed too**, by compiling rather than by inference. See [highc-spike.md](highc-spike.md) for
the generated code.

**All five are answered.** The fifth was closed not by compiling but by looking at what the exceptions were, and the
answer is that almost none of them are functions. See the section on artefacts below.

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
