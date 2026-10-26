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
| `55 8b ec` (framed) | 318 |
| real starts (preceded by `ret`, after stripping padding) | 454 |
| **interior addresses, not function starts** | **284** |
| real starts that are also leaves | 103 |

103 leaves is the honest experiment queue. The 103 are also, by construction,
the routines whose `OBJ` carries no `EXTDEF` and no `FIXUPP`, so Trigger 1
cannot fire on them.

**They are not equally worth reconstructing, and the ordering matters.** Sorted
by caller count the top of the list is the pixel writer at `0xf3e24` (104
callers) and the `=` scanner at `0xe9e2c` (91). Sorted by size the top is a row
of 5-byte accessors with one caller each. The second list is easier and worth
far less: those routines sit on no player-visible path.

`node tools/preflight.js --scan N` takes highest-caller first. `--by size` gives
the other order, which is the right one only for a pure toolchain probe where
minimising degrees of freedom is the point.

Both listed routines have now been matched byte for byte, so the harder
ordering is also the productive one.

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

## Correction: an address base mismatch, not a wrong address

`funcs.js` and the docs disagreed about the pixel writer by exactly `0x20`:
`funcs.js` said `0xf3e04`, the docs said `0xf3e24`. Both were right.

`funcs.js` strips the 32-byte MP header and works on the remainder, so it reports
**stripped** offsets. Every doc quotes **raw file** offsets. The pixel writer is
at stripped `0xf3e04` and raw `0xf3e24`. Verified directly:

```
target bytes 8b 44 24 0c c1 e0 07   found at raw 0xf3e24
                                    found at stripped 0xf3e04
```

`funcs.js` now converts to raw offsets on output and labels the base in a comment.
This is the second address defect to cost time, and unlike the first it was not
wrong data: it was two tools using different frames without saying so.

## Result 5: a 21-byte routine with 91 callers, matched

The strongest result of the run. `0xe9e2c` is a `strlen`-to-`=` scanner:

```
0xE9E2C  8B4C2404   mov ecx,[esp+0x4]
0xE9E30  8A01       mov al,[ecx]
0xE9E32  3C3D       cmp al,0x3d          <- '=' tested FIRST
0xE9E34  7407       jz 0xE9E3D
0xE9E36  22C0       and al,al            <- then NUL
0xE9E38  7403       jz 0xE9E3D
0xE9E3A  41         inc ecx
0xE9E3B  EBF3       jmp 0xE9E30
0xE9E3D  41         inc ecx
0xE9E3E  8BC1       mov eax,ecx
0xE9E40  C3         ret
```

Target: `8b 4c 24 04 8a 01 3c 3d 74 07 22 c0 74 03 41 eb f3 41 8b c1 c3`

| candidate | result |
|---|---|
| `while (*p && *p != '=') p++; return p + 1;` | `22 c0 74 07 3c 3d` (tests NUL first) |
| `while (*p != '=' && *p) p++; p++; return p;` | **MATCH** |
| `for(;;){ if(*p=='=')break; if(!*p)break; p++; } p++; return p;` | **MATCH** |
| `while(1){ if(*p=='='||!*p) break; p++; } return ++p;` | **MATCH** |
| explicit `goto` | **MATCH** |

**Two independent source-shape levers, both confirmed:**

1. **Operand order in a `&&` determines branch order.** The game tests `'='`
   before NUL. Writing `*p && *p != '='` produces the opposite and does not
   match. This is a *semantic* lever, not a stylistic one.
2. **`return p + 1` versus `p++; return p` changes the epilogue.**
   `lea eax,[ecx+1]` versus `inc ecx; mov eax,ecx`. The game uses the latter.

Four source forms converge on the same 21 bytes, so the bytes do not uniquely
determine the source. That is worth knowing for the loop: a match confirms the
instruction selection, not the exact text.

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

## Result 6: the loop scored, 3 of 4, and the tool had to be fixed twice

`tools/decompile-run.js` runs the loop over a queue and records every outcome.
Scored against four routines:

| routine | bytes | callers | result |
|---|---|---|---|
| `0xe9e2c` | 21 | 91 | **matched** |
| `0xe44d0` | 49 | 85 | **matched** |
| `0xe662c` | 9 | 2 | **matched** |
| `0xf3e24` | 25 | 104 | unmatched |

**75 percent.** Above the 30 percent threshold in plan item 4f, so the toolchain
is not ruled out and the loop is measuring the queue rather than a broken build.

### `0xe44d0` is an `atoi` and it matched

49 bytes, 85 callers:

```c
int f(char *s) {
    int n = 0;
    while (*s == ' ' || *s == '\t') s++;
    while (*s >= '0' && *s <= '9') { n = n * 10 + (*s - '0'); s++; }
    return n;
}
```

A third source-shape lever, found here: **`n * 10 + (*s - '0')` and
`v*10 + *s - '0'` differ.** The first gives `83 e8 30 03 c1` (subtract then add),
the second gives `03 c1 83 e8 30` (add then subtract), and only the first
matches. Operator associativity in the accumulation decides the instruction
order.

### Two tool bugs, both caught by the routine lengths being wrong

Writing the runner exposed defects in my own code that had already produced
wrong answers. Both are worth recording because both were silent.

**Bug 1: a byte-wise scan stopped at a `0xc3` inside an operand.** `0xe30a0`
begins `53 56 57 bb 0c 9f 07 00 83 c3 04`, and the `0xc3` at byte 9 is the
middle of `add ebx,4`. The scan cut the routine at 10 bytes and produced a target
ending `83 c3` that no C can emit. Fix: instruction-aware decoding.

**Bug 2: my hand-written length table could not decode `66`-prefixed
instructions with a displacement.** `66 89 8c 50 90 7e 07 00` is 8 bytes;
recursing on the `89` after the prefix gave 3 and desynchronised everything
after it, which is why the pixel writer reported 2879 bytes.

**The fix for both was to stop hand-writing a decoder and shell out to
`ndisasm`**, which the project already depends on and which is correct from a
known entry because the entry supplies alignment. Slower, and worth it: a wrong
routine length silently invalidates every comparison downstream of it.

The general lesson, which this project keeps relearning: **check the routine
length against `ndisasm` before trusting any result derived from it.** A wrong
length looks exactly like a source-form mismatch.

### `0xf3e24` still does not match, and that is now informative

Four source forms were tried, including both array shapes and a local pointer.
None produce the target, because the target keeps `0x77e90` as a disp32 inside
the store and uses `[eax+edx*2]` as a scaled index:

```
66 89 8c 50 90 7e 07 00     mov [eax+edx*2+0x77e90],cx
```

The compiler will fold a *constant* address into a store displacement when the
index is a plain register, but it materialises the base into a register when a
scaled index is also needed. That combination was not reachable from any C tried.

This is recorded as an open source-shape question, not a toolchain one, because
the same compiler matched three other routines in the same run.

## Result 7: the honest population number is 2 of 6, and the tooling lied twice

Widening the run to six attempted routines from the top of the queue:

| routine | bytes | callers | result |
|---|---|---|---|
| `0xe9e2c` | 21 | 91 | **matched** |
| `0xe44d0` | 49 | 85 | **matched** |
| `0xf3e24` | 25 | 104 | unmatched, source shape |
| `0xe1c24` | 46 | 11 | unmatched, relocation |
| `0xe1bf4` | 46 | 11 | unmatched, frame decision |
| `0xefaf4` | 41 | 7 | unmatched, near miss |

**33 percent, not the 75 percent reported earlier.** That earlier figure came from
a four-routine set that was not the real queue and included two routines already
known to match.

### The transient that made the number wrong three times

The compile API intermittently returns `no object file produced` or `compile did
not finish` for a source that compiles cleanly when tried alone. Measured: the
same `while (*p != '=' && *p)` source matched on a standalone call and failed
inside a run, which turned a match into a cord pull and reported 17 percent.

Two causes, both real:

- **Back-to-back compiles degrade the guest.** After about four compiles in
  sequence the object stops being written. A three-second pause between routines
  and up to five retries recovers it.
- **The retry predicate was too narrow.** It matched `did not finish` but not
  `no object file produced`, so half the transient failures passed straight
  through as cord pulls.

**A measurement tool that reports the instrument's flakiness as the subject's
behaviour is worse than no tool.** The number moved 17, 33, 75, 33 across runs of
the same code. Any figure from this loop needs the retry logic in place and the
run repeated before it is quoted.

### What the four non-matches actually are

**`0xe1c24` and `0xe1bf4` are the same shape**: six `int` arguments stored into a
fixed struct at `0xe3f4`, fields at `+0x24` and `+0x3c`. The target is framed
(`55 8b ec`) and loads each argument into `edx` before storing via an `eax` base
loaded once. The compiler produces a frameless version that reads `[esp+N]` and
uses `ecx` as the base.

A local variable **does** force the frame, confirmed by experiment: adding an
unused local produced `55 8b ec`. But the register choice still differed. This
is Trigger 2 territory and it was left there rather than chased further.

**`0xefaf4` is a near miss worth naming.** The structure matches exactly
(`row*64+col`, byte load, two range tests, then `== 0xa`), and the difference is
one instruction: the target folds `0xbd578` into the load's displacement
(`0f b6 88 78 d5 0b 00`), the compiler adds it into the address first
(`05 78 d5 0b 00` then `0f b6 08`). The same folding difference as the pixel
writer.

### The pattern across all non-matches

Every failure so far is one of **two** things, never a semantic disagreement:

1. **Base folding.** Whether a constant address goes into the disp32 of an
   operand or is added into a register first.
2. **Frame and register selection.** Whether `ebp` is used, and which register
   holds a pointer.

Neither is "the C computes the wrong thing". Both are the compiler making a
different choice than the original build did, and neither has been cracked by
source shape alone.

**That is the finding that matters for the toolchain question.** Two of six match
byte for byte, which rules out "this is the wrong compiler". Four of six differ
only in codegen choices, which is consistent with a compiler that is the right
family but perhaps not the identical build, or with source forms not yet found.

The experiment cannot distinguish those two explanations, and does not claim to.

## Result 8: base folding is a LINK-time phenomenon, and that reclassifies a third of the failures

This settles the question the level-1 loop kept hitting. Three probes, in order.

### Probe 1: a literal address never folds

```c
int f(int i){ return *(unsigned char *)(0xbd578 + i); }
```

```
8b 44 24 04   mov eax,[esp+4]
05 78 d5 0b 00 add eax,0xbd578     <- added into a register
0f b6 00      movzx eax,byte [eax] <- no displacement
c3            ret
```

The compiler treats `0xbd578` as a constant, so it adds it. No relocation, no
fold, no way to ask for the fold from source.

### Probe 2: an `extern` declaration folds, but leaves a placeholder

```c
extern unsigned char buf[];
int f(int i){ return buf[i]; }
```

```
8b 44 24 04      mov eax,[esp+4]
0f b6 80 00 00 00 00  movzx eax,byte [eax+0x00000000]   <- FOLDED, placeholder
c3               ret
```

The object carries `EXTDEF` and `FIXUPP`. The instruction shape is now right,
and the displacement is the linker's to fill.

### Probe 3: linking fills the displacement, and the shape matches the game

Compiled a small program defining `unsigned char buf[0x100]` and linked it with
`386LINK BF.OBJ -lib Q:\HC386\SMALL\HCE`. The linked `BF.EXP` contains:

```
00000200  8B442404            mov eax,[esp+0x4]
00000204  0FB680B0440000      movzx eax,byte [eax+0x44b0]   <- REAL disp, folded
0000020B  C3                  ret
```

Compare the game's `0xefaf4` first three instructions:

```
000EFAF4  8B442408            mov eax,[esp+0x8]
000EFAF8  C1E006              shl eax,byte 0x6
000EFAFB  03442404            add eax,[esp+0x4]
000EFAFF  0FB68878D50B00      movzx ecx,byte [eax+0xbd578]  <- identical shape
```

**Same encoding family.** The differences are the buffer address (mine vs theirs)
and which register holds the result.

### What this means, and it is the important part

**Level-1 byte matching is structurally blind to any routine that touches a
global through a symbol.** The fold only happens when the address is a relocation
the linker resolves, and a `.OBJ` compared before linking has `00000000` there.

That is not a source-form problem and no C will fix it. It is a classification
problem, and it reclassifies the failures:

| failure | cause | Level 1 possible? |
|---|---|---|
| `0xefaf4` | base folding | **no**, until linked |
| `0xf3e24` pixel writer | base folding | **no**, until linked |
| `0xe1c24`, `0xe1bf4` | frame + register choice | unknown, Trigger 2 |
| `0xe9e2c`, `0xe44d0` | nothing | **yes**, matched |

So the four non-matches split cleanly: two are link-time and should never have
been attempted at Level 1, and two are the genuine Trigger 2 case.

### The consequence for the queue

The 103 leaves were selected because they contain no `E8` call, which was taken
to mean "self-contained". That was too weak: a leaf can still reference a global,
and doing so makes its `LEDATA` non-final exactly as a call would.

**The pre-flight gate now asks a third question: does the routine reference an
absolute address?** A routine that does cannot be matched until it is linked, so
the honest verdict is "not attemptable at Level 1" rather than a cord pull that
looks like a compiler disagreement.

Implemented, and the effect on the queue is large:

| | count |
|---|---|
| `E8` call targets | 738 |
| real function starts | 454 |
| leaves (no calls) | 103 |
| **leaves with no absolute address reference** | **40** |

**The real Level-1 pool is 40 routines, not 103.** Two thirds of the leaf set was
never attemptable, and every cord pull among them was the gate's fault rather
than the compiler's.

`0xf3e24`, the pixel writer with 104 callers, is now correctly excluded. It was
the highest-value candidate in the queue and it was structurally impossible the
whole time.

### The detector, and two bugs in it

It looks for a 4-byte value in a plausible data range sitting where a `disp32`
would be. Both bugs were found by testing it against routines of known verdict.

1. **It required both the byte before the displacement and the byte before that
   to look like `mod=10`.** With a SIB the layout is `[ModRM][SIB][disp32]`, and
   only the ModRM carries the mod bits. The SIB's top two bits are the scale.
   This rejected `0xf3e24`, whose `66 89 8c 50 <disp32>` has ModRM `0x8c`
   (`mod=10, rm=SIB`) and SIB `0x50` (`scale=1, index=edx, base=eax`).

2. **`boundaryOk` passed a raw address to `cfgwalk.js`, which works on stripped
   offsets.** Every routine came back "not an instruction boundary", which
   silently disqualified the entire queue. This is the same 0x20 base mismatch
   that caused the pixel-writer confusion, appearing a third time in a third
   tool.

Both are recorded because the pattern is now unmistakable: **every tool in this
repo that touches an address needs to state which base it uses, and every
consumer needs to convert.** Three separate tools have now had this bug.

## Result 9: rescored against the corrected pool, with failure classes

The `--scan` queue and the earlier runs were measuring different things. Rescored
against the corrected 33-routine pool, on the five attempted routines that are
actually in it:

| routine | bytes | callers | result |
|---|---|---|---|
| `0xe9e2c` | 21 | 91 | **matched** |
| `0xe44d0` | 49 | 85 | **matched** |
| `0xe662c` | 9 | 2 | **matched** |
| `0xe1c24` | 46 | 11 | cord, `relocation-placeholder` |
| `0xe1bf4` | 46 | 11 | cord, `frame-decision` |

**60 percent.** Three matched, two pulled the cord, and each cord has a distinct
class rather than "did not match".

Two routines previously counted as failures are now excluded from the pool
entirely: `0xf3e24` (absolute address) and `0xefaf4` (absolute address). They
were never attemptable at Level 1 and their cord pulls were miscounted as
compiler disagreements.

### The taxonomy

`tools/cordclass.js` defines twelve classes, each with a cause and a remedy. The
sorting that matters is by remedy, not by symptom:

| severity | classes | meaning |
|---|---|---|
| structural | `base-fold`, `relocation-placeholder`, `not-a-boundary` | no source form fixes these. Stop attempting them. |
| addressable | `frame-decision`, `register-choice`, `pointer-type`, `operand-order`, `associativity`, `idiom` | a known lever may fix these. Worth a pass. |
| instrument | `transient` | not the routine's fault. Retry. |
| unknown | `unexplained`, `needs-source` | leads. This set should shrink. |

The classification is conservative on purpose: anything not confidently matched
lands in `unexplained` rather than being forced into a class, because a wrong
class is worse than no class and would send someone chasing the wrong lever.

### Why classes and not just pass/fail

A cord pull that says "did not match" is a dead end. One that says
`frame-decision` is a lead, and **`0xe1bf4` and `0xe1c24` are the same shape as
each other** so cracking one likely cracks both. Six more routines in the pool
share the framed-with-six-arguments shape.

`node tools/cordclass.js --explain frame-decision` gives the cause, the remedy
and what solving it would unblock, without re-reading a transcript.

### Two more tool bugs, both the same shape as before

**Byte-wise scanning counted `0xe8` bytes inside operands.** `preflight.js`
reported `0xe44d0` as calling out when the routine contains no call at all,
which disqualified the routine that had already matched byte for byte. Fixed by
using `ndisasm`, which is what `decompile-run.js` had already been changed to.

**The floppy corrupted again mid-run**, this time under rapid mtools operations
rather than low space, and turned every remaining routine into `transient`. The
runner now detects a corrupt image, calls `/api/reset`, waits for the reboot and
retries the routine. Verified: the run printed `image corrupt, resetting` and
then completed, with `0xe662c` matching after the reset that would otherwise
have been recorded as a failure.

The reset endpoint earned its place on its first real use.

## Result 10: the frame-decision lead, closed as NEGATIVE after 23 sources and 21 flag sets

Two routines in the pool pull the cord with class `frame-decision`. The target at
`0xe1bf4` has a shape that turns out to be the whole problem:

```
55 8b ec          push ebp; mov ebp,esp     <- frame
b8 f4 e3 00 00    mov eax,0xe3f4            <- base in eax
8b 55 08          mov edx,[ebp+8]           <- argument read through the frame
89 50 24          mov [eax+0x24],edx        <- store via base+disp8
...
c9 c3             leave; ret
```

**A frame pointer with no frame.** There is no `sub esp`, no pushed register,
nothing saved at all, and yet the arguments are read at `[ebp+N]`. That
combination is not any shape this experiment could produce.

### What the compiler actually does

`tools/frameprobe.py` compiles 23 sources that differ in one respect at a time.
The rule it established is narrower than expected:

| variant | frame | why it matters |
|---|---|---|
| `local-unused` | **no** | declaring a local is not enough |
| `local-used` | yes | a live local is what forces the frame |
| `varargs` | no | variadic does not force a frame |
| `seven-args` | no | arity does not matter |
| `nested-call` | yes | but it also pushes `esi`/`edi` |
| `array-local` / `struct-local` | yes | but they also emit `sub esp,8` |
| `base-then-args-order` | yes | closest shape, uses `ecx` for the base |

**Eleven of 23 frame, and every one of them differs from the target in a second
way as well.** Those that allocate have a slot. Those that call push registers.
None has a frame and nothing else.

The one thing that reproduces the target's `mov eax,0xe3f4` is
`target-shape-min`, which puts the base in `eax` correctly but has no frame at
all. So the two halves of the target's prologue are reachable separately and
never together.

### Flags are not a lever

`tools/frameflags.py` compiles a single fixed source under 21 flag sets, on the
theory that a frame without a slot is an optimisation-level artefact.

**Every flag set that compiled produced byte-identical output.** `(none)`,
`-O`, `-O1`, `-O2`, `-OT`, `-OTx`, `-Od`, `-Ou`, `-Or`, `-Os`, `-Oa`, `-Ow`,
`-Oz`, `-Oe`, `-noframe`, `-frame`, `-f`, `-v` and both combinations all give
the same 60 bytes starting `558bec508b5508`.

`-g` alone failed with no object file produced, which is consistent with a
debug-format flag wanting something the DOS-native generator does not have.

**The optimiser is not being engaged by these flags.** High C 1.73's golden path
was `RUN386` with `HCD386P.EXP` and a `-O` argument; this project uses the
DOS-native `HCD386.EXE`, which compiles correctly but may not honour the same
switches. So the flag matrix shows that *this invocation* ignores the flags, not
that the flags do nothing in principle.

### Verdict

**NEGATIVE.** The frame-decision class is not addressable from source at Level 1
with this invocation. `0xe1bf4` and `0xe1c24` should be reclassified from
`addressable` to `structural`, with the note that the remedy is either a
different compiler invocation or the original flags, neither of which is
available.

That reclassification matters because it changes the plan: six more routines
share this shape, and they were going to be attempted under the assumption that
a source lever existed.

### What remains open

Whether `HCD386.EXE` honours `-O` at all is now an open question with a cheap
test: compile the same source through `RUN386 HCD386P.EXP` with and without
`-O`, the path the original toolchain documentation describes, and compare. That
was not attempted here because it needs the Phar Lap extender running inside the
guest, which the two-floppy setup does not currently do.

## Result 11: the floppy corruption had a cause, and it was ours

Three corruption incidents were attributed to volume and free space. Both were
wrong, and the guard written for the first hypothesis could never have caught the
second.

`tools/fatwatch.py` ran 12 compiles in a burst sampling the FAT after every one:

```
  # op         FAT            free
  1 compile    fe ff ff 03    176128
 12 compile    fe ff ff 03    173056
```

**Twelve compiles, no corruption, 3 KB of space consumed.** Volume is not the
trigger.

The trigger is a compile that **fails**. `tools/fateject.py` isolates it: one
source that the compiler rejects breaks the FAT on the first attempt, every time.

### Cause

`cserve.js` already ejected the floppy before its *setup* deletes, and says so in
a comment. It did **not** eject before `rmAll()`, which runs at the end of every
compile, on the success and failure paths both. So the last operation of every
compile deleted files host-side while the guest still had the volume open and its
FAT sectors cached. The guest then wrote that stale table back over the host's
edit and the table tore:

```
0x400   fe ff        two FAT12 reserved entries, valid
0x400   00 f0        a media descriptor byte where a FAT entry belongs
```

After that mtools cannot read the image at all, so every later compile reports
corruption rather than a compiler result.

### Fix

`rmAll()` now ejects first, waits 400 ms for the writeback, then deletes. Verified
by re-running the fatal source four times: the compile now **succeeds**, and the
FAT survives. The compile succeeded because it had been reading a torn volume,
not because the source changed.

Two lessons, both already in `AGENTS.md` in other words:

- The cause of a corruption that follows a *failure* is not the same as one that
  follows *volume*. Measuring the second and generalising was the error.
- A comment saying "eject first, order matters" sitting above code that does it
  in one place and not another is worse than no comment, because it reads as
  settled.

## Result 12: RUN386 is silent with the GDS driver resident. The window hypothesis is wrong

The theory worth testing was that `RUN386` fails only because no Towns window
system is present, and that "window system" might mean the **GDS device driver**
(`TOWNS.SYS` + `GDS.SYS`) rather than the `CONTROL.EXE` desktop. If so, an image
with the drivers resident and a normal prompt would be enough, which is exactly
what `saves/towns62.hdm` is.

It was tested. It is wrong.

### Setup

`saves/towns62.hdm` already has `DEVICE=A:\TOWNS.SYS`, `DEVICE=A:\DOS\GDS.SYS` and
`DEVICE=A:\DOS\MOUSE.SYS` in `CONFIG.SYS`, plus `OAK0.SYS` and
`OAK1.SYS /O1 /S0 /H1 /K0 /R1 /M2 /B1` which supply the Towns memory banks. It
boots to a writable `A:\>` with the CD mounted at `Q:`.

`tools/towns62-run386.py` copies it to a scratch image (the named image is never
modified) and replaces `AUTOEXEC.BAT` with a probe that appends each stage to
`A:\T.LOG`, so a hang is located from the host with no OCR.

### Measured

The full Towns resident stack, matching the stock `AUTOEXEC.BAT`:

```
P1_START
P2_SHARE=
P3_MSCDEX=
  Q:\ values HC_MULTI_K, Q:\HC386\BIN, HCD386P.EXP 670,437 bytes
P4_COCO=
```

**The trace ends at `P4_COCO`.** `COCO` runs and the batch never reaches
`SIDEWORK`. That confirms the documented behaviour and confirms it also happens
on this image, not only on the DOS 6.2 floppy.

Skipping the whole resident stack and letting only the `CONFIG.SYS` drivers
load, the batch runs to completion:

```
D1_START  D2_SHARE=  D3_MSCDEX=  D4_RUN386
D5_RC=          <- RUN386 with output redirected
D5B_TRY_BARE    <- RUN386 with no arguments, redirected
D5C_BARE_RC=
D5D_TRY_NOLOG   <- RUN386 with no arguments, no redirection
D5E_NOLOG_RC=
D6_DONE
```

Every stage reached. **`A:\R.LOG` and `A:\R2.LOG` are both empty and no `H.OBJ`
exists.** The screen colour count does not change across the run (1118 before,
1118 after), so nothing opened a window and nothing drew.

### Verdict

**NEGATIVE.** `RUN386` executes, returns an empty errorlevel rather than a
failure code, and produces no output and no object, with `TOWNS.SYS` and
`GDS.SYS` both resident. So the missing piece is not the GDS device driver.

Two things follow.

The `compiling-on-fm-towns.md` warning that `TOWNS.SYS`/`GDS.SYS` "buy nothing
here" was scoped to the `HCD386.EXE` route and is now confirmed for the `RUN386`
route as well, by measurement rather than by extension.

The optimiser question stays open, and the reason is now clearer: reaching
`RUN386` is not sufficient on its own, because something above the driver is
still missing. The remaining candidates are the `SIDEWORK` and `SYSINIT` stages
that `COCO` blocks, and `COCO` itself needs Towns memory banks that the DOS 6.2
floppy cannot supply. That is the same trilemma, unchanged, and this experiment
did not escape it.

### What was ruled out, precisely

Ruled out: **GDS resident plus writable volume plus DOS prompt is enough**.
It is not.

Not ruled out: that the full stack (COCO, SIDEWORK, SYSINIT) would work. It
cannot be reached because `COCO` stops the batch, and `COCO` fails on the
6.2 floppy for a documented memory reason.

## Result 13: the TownsOS-console plus GDS test, and what actually blocks it

The hypothesis worth testing was that `RUN386` needs both a TownsOS that completes
its resident stack **and** the `GDS.SYS` graphics driver, and that no image has
both. Two do, between them:

| image | boots to | `TOWNS.SYS` | `GDS.SYS` | stack completes |
|---|---|---|---|---|
| `tos21-console.hdm` | CLI (`CONTROL` commented out) | yes | **no** | `COCO` fails |
| `towns62.hdm` | CLI | yes | yes | `COCO` hangs |

`tools/tos21-gds.py` built the combination: `saves/scratch-tos21gds.hdm`, TownsOS
2.1 L51 with `GDS.SYS` (32,379 bytes) copied from `towns62.hdm` and
`DEVICE=\SYS\GDS.SYS` inserted after the `TOWNS.SYS` line. `CONFIG.SYS` verified by
reading it back. The boot sector is intact (`IPL4` present, first eight bytes
`49504c34 eb4d0620`).

### It could not be booted, and the reason is not GDS

A control image was built with the **original** `CONFIG.SYS` and a trace line added
at the top of `AUTOEXEC.BAT`. It also produced no `T.LOG`. So `GDS.SYS` is not what
breaks the boot.

The boot is reachable but stops before the shell. Two measured facts:

- The screen settles at 1,087 distinct colours, 92 percent black, and is
  **static**. Pressing Enter three times and then typing `XXXX` changes nothing,
  so the guest is not at a command prompt taking input.
- `SHELL=C:\COMMAND.COM C:\ /P` in `CONFIG.SYS`. On a floppy-only boot there is no
  `C:`, so the shell cannot start. That is consistent with a boot that loads the
  device drivers and then has nowhere to go.

This means `docs/highc-dos-negative.md`'s description of this image as one that
"boots to a DOS prompt" is correct only when a `C:` exists, which is what the
8 MB hard disk supplied in that earlier work. The image alone does not.

### Verdict

**NEGATIVE, and the test itself is blocked rather than the hypothesis refuted.**
The combination exists and is verifiable on disk, but it has never been booted
because this image needs a `C:` volume to reach its shell.

Ruled out: that `GDS.SYS` on a DOS 6.2 boot is what stops TownsOS from booting.

Not ruled out: the combined hypothesis. To test it the image needs either
`SHELL=A:\COMMAND.COM` or a hard disk supplying `C:`. The first is a two-byte edit
to a `CONFIG.SYS` line and is the obvious next attempt.

### The stale claim this contradicts

`docs/highc-dos-negative.md` states that `tos21-console.hdm` "carries
`CONSOLE.EXE`, `COMMAND.COM` and `RUN386.EXE`" and is "a TownsOS environment
**and** a real DOS shell at the same time". The first half is true. The second
half is true only with a `C:` present, and the page does not say so. That is the
same class of defect this project keeps finding: a sentence that was true in the
configuration it was measured in, written as if it were a property of the image.

## Result 14: the boot works, the shell cannot read the CD

Result 13 said the combined image could not be booted because `SHELL=C:` has no
`C:` on a floppy. That was the first of four defects, and fixing all four gets
the batch to run end to end. The fifth is a wall.

### The four defects, in the order they were found

**1. `SHELL=C:\COMMAND.COM C:\ /P` on a floppy-only boot.** No `C:` exists, so the
shell never starts, the screen freezes at 1,087 colours and keystrokes do
nothing. Changed to `SHELL=A:\COMMAND.COM A:\ /P`. After this the whole batch
ran from `G1_START` to `G8_DONE`.

**2. No `CDDRV.SYS` or `CDISC.SYS` on `tos21-console.hdm` at all.** The image's
`CONFIG.SYS` lists `CTL.SYS`, `TBIOSLD.SYS`, `TOWNS.SYS`, `OAK0`, `OAK1`,
`T_KANJI` and `TICM`, and no CD driver of any kind. Both copied from
`towns62.hdm` into `::/SYS` with the donor's arguments,
`/D:TOWNS_CD /U0:0`.

**3. No `MSCDEX.EXE` on `tos21-console.hdm` either.** This is the one that made
the earlier negative results uninterpretable: the stock `AUTOEXEC.BAT` calls
`MSCDEX /D:TOWNS_CD /M:8 /L:Q`, and with no `MSCDEX.EXE` anywhere on the volume
that line does nothing. **`Q:` never existed on this image.** A `RUN386
Q:\HC386\BIN\HCD386P.EXP` there was running against a drive that was not
mounted, which is why it produced nothing and reported nothing.

**4. The probe called `MSCDEX` by bare name.** Changed to the full path
`A:\SYS\MSCDEX.EXE`.

### What the fixes bought, and where it stops

With 1 to 4 fixed, `Q:` exists. `DIR Q:\` now prints a directory header instead
of failing outright. But every read of it reports:

```
FCB access not supported.
  drive Q: has no volume label
  directory is Q:\
```

`DIR A:\` reports the same for the floppy. So this `COMMAND.COM` cannot list any
directory, local or remote. `docs/compile-blocker.md` records the same wall for
the CD's own `console.exe` ("cannot write files, has no redirection, stubbed
`COPY`").

`COPY Q:\HC386\BIN\HCD386P.EXP A:\HCD.EXP` uses handle-based opens rather than
FCB, so it was tried as the way past that. **It produced no file and no error.**
`RUN386` with stderr redirected produced an empty log.

### Verdict

**NEGATIVE at this layer, and the reason is now specific.** The TownsOS-console
image plus GDS plus CD drivers plus MSCDEX reaches a live `A:\>` and a mounted
`Q:`, and the shell that comes with it cannot read files from either. The
combination hypothesis was never actually tested, because the test needs a
shell that can open a file and this one cannot.

This is a genuinely different failure from the ones before it. Earlier results
said "`RUN386` produces nothing", which was true and uninformative. This says why
on this image: the drive was never mounted, and after mounting it the shell
cannot read it.

### What would move this forward

Three candidates, cheapest first.

1. **`COMMAND.COM` from DOS 6.2 in place of the TownsOS one.** The DOS 6.2 shell
   on `dos62v6.hdm` has working `COPY`, redirection and directory listing. The
   TownsOS `COMMAND.COM` on this image is 24,161 bytes and does not. Worth one
   swap, since the shell is orthogonal to the drivers.
2. **`console.exe` with the CD as the working drive**, which is the
   `hdd-build-environment.md` route, and was abandoned there for the same class
   of reason.
3. **Give up the floppy and put DOS on the hard disk**, plan item 4g. That
   removes the shell question and the media-rotation question together.

None of the three is tried here. Each is a change of configuration rather than a
probe, and this experiment has now spent a long stretch on configuration.

## Result 15: the two linkers are different binaries with identical interfaces, and the real-mode one knows MP

The question was whether `P3` versus `MP` gates byte matching, and the way to
settle it was whether `386LINK.EXE` and `386LINKP.EXP` are the same program.

They are not, and the difference is informative.

| | `386LINK.EXE` | `386LINKP.EXP` |
|---|---|---|
| container | `MZ`, header parses exactly to 192,192 bytes | `P3`, 147,626 bytes |
| shared 16-byte code windows | **0 in 7,703** | |
| help and option table | identical, verbatim | identical, verbatim |
| tests input for `P2`, `P3`, `MP` | yes | yes |

Zero shared code with a byte-identical option table is the signature of one
source built twice, real mode and protected mode. It is the same relationship
`HC386.EXE` has to `HCD386P.EXP`. So `386LINKP.EXP` is not a wrapper around
`386LINK.EXE` and cannot be treated as one.

### The part that matters

Both linkers carry `-PACK` and `-NOPACK` for `.EXP` output, and both decode a
compare chain against `P2`, `P3` and `MP` (`66 3d 50 32` / `50 33` / `4d 50`).
So the real-mode linker understands the `MP` signature.

The earlier base-folding probe ran `386LINK BF.OBJ -lib Q:\HC386\SMALL\HCE` with
no format switch and got a `P3` file. The default is the packed `.EXP`. `MP` is
the **unpacked flat form**: 30-byte header, `relocCount = 0`, and
`(pages-1)*512 + lastPage` reproducing the game's 1,072,398 bytes exactly, which
`docs/ghidra-viability.md` already verified independently.

So the plausible chain is `386LINK.EXE ... -NOPACK` producing an `MP`-shaped
output, and that is a test which needs no emulator session, no `RUN386`, and no
interactive desktop.

### What this corrects

An earlier note in this experiment concluded that reaching the protected-mode
linker was required to produce the game's container. **That is now unsupported.**
What `RUN386` is actually required for is the protected-mode *compiler*
(`HCD386P.EXP`), not the container format.

If `386LINK.EXE -NOPACK` emits `MP`, then the container does not gate byte
matching at all, and `frame-decision` stands alone as the remaining structural
blocker.

## Result 16: 386LINK.EXE cannot emit MP. The container is not selectable.

Result 15 hypothesised that `386LINK.EXE -NOPACK` might produce the game's `MP`
container, since `MP` is the unpacked flat form and the real-mode linker knows
the `MP` signature. That was testable without an emulator session, so it was
tested, through a new `/api/link` endpoint so the result is repeatable.

### Measured

The same source linked twice:

| flags | result | size | signature |
|---|---|---|---|
| `-NOPACK` | ok | 528 | **`P3`** |
| (none) | ok | 528 | **`P3`** |

**Byte-identical.** `-NOPACK` changes nothing on a link with no large data, and
neither invocation produces `MP`.

The linker itself works. Its own output was captured:

```
386|LINK: 2.2dJ -- Copyright (C) 1986-90 Phar Lap Software, Inc.
Warning: No stack segment.
```

Only a benign warning, and `LKTO.EXP` was produced. So the failure is not a
linker error, it is that this linker does not write `MP`.

### The full option list settles it

`386LINK.EXE` exposes 101 option strings. The complete set that could plausibly
select an output container is:

```
-EXE file                .EXE output file
-RELEXE file             Reloc .EXE output file
-NOPACK / -PACK          pack or do not pack an .EXP file
-NOOUTPUT                no output file
```

**There is no `-MP` switch, and no switch that selects a native `EXP`
container.** `.EXP` is what `-NOPACK`/`-PACK` govern, and on this test both gave
the same 528 bytes.

### Header fields confirm these are different formats, not variants

```
P3  (386LINK.EXE output): 50 33 | u16@2=1     u16@4=384    u16@6=528
MP  (ENCHANT.EXP):        4d 50 | lastPage=270 pages=2095  relocs=0
```

`P3` carries a version number and a 384-byte header. `MP` carries a page count
and a relocation count. They are separate containers, and `MP` is not a packing
of `P3`.

### One asymmetry worth recording

Both linkers contain `cmp ax,0x504d` (compare against `'MP'`) exactly once. But
`386LINKP.EXP` additionally contains the operand-size-prefixed form
`66 3d 4d 50`, which `386LINK.EXE` lacks. That is 32-bit code the real-mode
linker does not have, consistent with the protected-mode linker carrying extra
container logic.

### Verdict

**NEGATIVE.** `386LINK.EXE` cannot produce an `MP` container, and no option it
accepts will make it.

This corrects result 15, which was a reasonable hypothesis and was wrong. It
also restores the earlier conclusion that the protected-mode toolchain is
required for the game's container, though for the **linker** as well as the
compiler rather than the compiler alone.

### The consequence for byte matching

**`P3` versus `MP` gates 100 percent byte matching and it is not reachable with
the toolchain that runs under plain DOS.** Any reconstruction we produce will be
`P3`. A file-level comparison against `ENCHANT.EXP` can therefore only ever be
done on the **code payload with the container stripped**, which is what
`tools/funcs.js` and `tools/cfgwalk.js` already do by skipping the 32-byte `MP`
header.

So the practical answer is that this does not block the work, it bounds the
claim. Routine-level byte matching (which is what the 60 percent figure
measures) is unaffected, because it compares instruction bytes at an offset, not
files. Whole-file identity was never attainable and is now known to be
unattainable for a second, independent reason.

### What the `/api/link` endpoint leaves behind

It is kept, because the next question about linking should not need another
round of hand-driving the linker. It also surfaced two real bugs, both recorded
in the tool comments: the linker names its output after the **object** file
(`LKTO.EXP`), not the source, which made an earlier probe report "no output"
while the output existed; and reading the image while the guest was still
writing tore the FAT, needing a settle delay after `.DON` appears.

## Result 17: 0xe9940 matched, and a tool that was lying about bytes

Two things happened here, one a success and one a defect in my own tooling that
needs recording because it produced a confident false result.

### The success

`0xe9940` (84 callers, 37 bytes) matched exactly:

```c
void f(int a){ int i; for(i=0; i<a*5000; i++); }
```

The target is a loop that counts until it reaches `a*5000`, where the multiply by
a constant is strength-reduced by the compiler into `lea`/`shl`/`sub`/`add`
sequences. Two levers were needed:

- **`void`, not `int`.** The first attempts were `int f(...){...return i;}`, which
  added a trailing `8b c1` (`mov eax,ecx`) the target does not have. The target
  falls straight from the loop into `pop edi; leave; ret`.
- **`i < a*5000`, not `a*5000 > i`.** The written order decides which value lands
  in `edx` and which in `ecx`, and the target compares `edx,ecx`.

`while(i < a*5000)` and `for(i=0; i<a*5000; i++);` both produce the exact 37 bytes.

### The defect, which matters more

`tools/trycands.py` originally obtained its target bytes by shelling out to `dd`
into a shared path, `/var/tmp/r.bin`, and then disassembling that path. When the
`dd` did not run, `ndisasm` disassembled **the previous routine's bytes** and
reported them as the target. There was no error: the output looked like a normal
disassembly of a real routine.

This produced a specific false claim during the session: five pool entries
(`0xff9dd`, `0xff025`, `0xe5578`, `0xe552c`, `0xe52c8`) were reported as "the
identical 37-byte routine at five addresses". They are not. Disassembled
correctly they are completely different:

- `0xe52c8` is a struct initialiser, six stores plus a zeroed field
- `0xe5578` is a static guard that toggles `[0x7a6b4]` between 0 and -1
- `0xff9dd` is hardware port I/O (`out dx,al`, `cli`), not game logic at all

The false claim was plausible in shape, which is why it survived a reading.
It came from a stale file and a missing error check, and it would have been
caught by comparing the reported bytes against the image for one of the five.

The tool now reads bytes in-process and hands them to `ndisasm` on stdin. No
temp file, no possibility of a stale read.

### The lesson, stated for the fourth time in this project

**This is the same class of failure as the 0x20 base mismatch, which has now
appeared in `funcs.js`, `preflight.js`, a `cfgwalk` call and this tool.** Every
one was a silent address or buffer error that produced a confident wrong answer
rather than an exception. The pattern is not coincidence, it is what this
codebase's tooling keeps getting wrong, and the countermeasure is the same each
time: make the tool print what it read and check it against an independent
source before trusting a derived claim.

### Also measured

`0xe52c8` is **not** matched and is classified `frame-decision`. The logic is
provably right: after the prologue, the target's instructions and the compiled
instructions are byte-identical (`8b 45 0c 89 01 8b 45 10 89 41 04 ... 8b c1`),
differing only in argument addressing, `[ebp+8]` against `[esp+4]`. That is the
structural class from result 10, so it joins `0xe1bf4` and `0xe1c24`.

The target also reads its arguments in a reordered sequence (8, 12, 16, 28, 32,
24), which none of the three candidates reproduced. That may be a separate lever
worth trying on a framed routine where the frame problem does not apply.

## Result 18: the absolute-reference detector had a second blind spot, and the pool is 24

`0xef548` is nine bytes:

```
C705606E0D0030000000   mov dword [0xd6e60],0x30
C3                     ret
```

It obviously references an absolute address. `tools/preflight.js` reported
`absolute data ref: none`.

**Cause.** The detector looked for a 32-bit displacement in a ModRM with `mod=10`,
plus the `a1`/`a3` moffs forms. It did not handle **`mod=00` with `rm=101`**,
which is the other encoding for a bare 32-bit address: `c7 05 <disp32> <imm32>`
is `mov dword [abs], imm`, with no base register at all.

Adding that case changes the pool:

| | count |
|---|---|
| leaves, before the fix | 33 |
| leaves, after | **24** |

Nine more routines were being offered as Level-1 candidates while referencing
absolute addresses, which means their `LEDATA` is a relocation and no amount of
C would have matched them.

### This is the fourth distinct defect in the same detector

For the record, the absolute-reference test has now been wrong four ways:

1. checking only `buf[i-1]` for `mod=10`, which missed the `[ModRM][SIB][disp32]`
   layout entirely (`0xf3e24` slipped through)
2. requiring **both** bytes before the displacement to look like `mod=10` when
   only the ModRM carries the mod bits (the SIB's top two are the scale, which
   rejected `0xf3e24` again)
3. `boundaryOk` passing a raw address to `cfgwalk.js`, which works on stripped
   offsets, so every routine reported "not an instruction boundary"
4. `mod=00 rm=101` not handled, so `mov [abs],imm` was invisible

Each was found by testing the detector against a routine whose verdict was known
independently. **None was found by reading the code.** That is the argument for
keeping a small set of hand-checked cases and asserting against them, rather than
trusting a heuristic because it looks right.

The correct count is now 24 candidates, three matched, and the earlier "60 percent
of five" figure stands on routines that are all still in this list.

## Result 19: four defences against the defect pattern, and each one proved it can fail

Four defects in `tools/preflight.js` and one in `tools/trycands.py` reached
commits. All five were silent, all five produced a plausible wrong answer, and
`node tools/checkall.js` passed every time because its nine checks inspect
documents and not tool logic.

Four changes, in order of leverage.

### 1. `tools/imgaudit.js`, asserted against known verdicts

23 assertions, wired into `checkall.js` as a tenth check. Four groups:

- **the address space**: the `MP` header arithmetic reproduces the file size
  (1,072,398), `rawToStripped` and `strippedToRaw` round trip, and a raw offset
  below the header throws rather than wrapping
- **the absolute-reference detector**: the `[ModRM][SIB][disp32]` form
  (`0xf3e24` -> `0x77e90`), the `mov [abs],imm` form (`0xef548` -> `0xd6e60`), a
  plain folded base (`0xefaf4` -> `0xbd578`), and three matched routines that must
  report `none` so the detector cannot be fixed by over-reporting
- **the matched routines' bytes**, which pin the ground truth the byte matching
  rests on
- **a scan that no tool hands a disassembler a fixed `/var/tmp` path**

**Every assertion was deliberately broken and watched to fail.** Measured:

| broken | assertion that fired |
|---|---|
| removed `mod=00 rm=101` | `preflight detects mov [abs],imm (0xef548)` |
| removed the SIB case | `preflight detects the SIB form (0xf3e24)` |
| `boundaryOk` given a raw address | `preflight converts to stripped (0xe9e2c)` |
| fixed temp path reintroduced | `no tool disassembles a fixed /var/tmp path` |

### The near miss, which is the useful part

The offset assertion was first written against `0xe9940`. With the conversion
deliberately broken, **it still passed**: `cfgwalk` reports a boundary at
`0xe9940` whether it is given the raw or the stripped address. The check would
have been decoration.

`0xe9e2c` discriminates, measured by asking `cfgwalk` both ways:

```
0xe9e2c raw:      boundary: false
0xe9e2c stripped: boundary: true
```

So the assertion moved to `0xe9e2c` and now fails when it should.

**The rule: write the assertion against a case where the wrong answer and the
right answer differ.** A test that cannot distinguish them buys confidence it has
not earned, which is exactly the failure mode the other five defects shared.

### 2. Tools print what they read

`tools/imgbase.js` is now the only place that converts between raw and stripped,
and `readRoutine` returns the bytes with their source path, raw offset, stripped
offset and leading 16 bytes. `tools/trycands.py` prints that provenance line
before any comparison, so a misaligned read is visible before it is trusted.

The defect this guards was invisible precisely because the output looked normal.

### 3. No shared temp paths

`tools/trycands.py` and `tools/funcs.js` both handed `ndisasm` a fixed file path.
Both now pass bytes on stdin. A stale `/var/tmp/funcs-at.bin` was found on disk
during this work, 32 bytes, left over from an earlier run, which is the hazard
made concrete rather than theoretical.

### 4. One offset convention, enforced

`tools/imgbase.js` owns the relationship. `tools/preflight.js` calls
`rawToStripped()` instead of doing the arithmetic inline. `tools/imgaudit.js`
asserts the round trip and the guard.

### What is still not covered

`tools/cfgwalk.js` and `tools/funcs.js` still do their own header arithmetic
internally rather than importing the helper. They are consistent today and the
audit pins their observable behaviour, but the unification is incomplete. That is
a deliberate stopping point: `cfgwalk.js` has its own test surface and changing
its internals risks more than it gains right now.

## Result 20: the pool contains two code populations, and the byte match rate means nothing across both

Working the queue found that **10 of the 24 routines contain instructions no C
compiler can emit from source.** Writing C for them is wasted work, and calling
them "unmatched" would misdescribe them.

The precise claim matters, because "not C" is not the same as "not part of the
game". Three distinct cases, and one earlier overstatement:

- **hand-written assembly** (`0xff0ba`): `pusha; mov ecx,0x19; nop; loop; popa`.
  High C has no source construct for `pusha`, `popa` or `loop`. This is a timing
  loop, written in asm.
- **hardware primitives** (`0xff9dd`, `0xfe0f1`, `0xffa72`, `0xffa8f`,
  `0xffaa1`): port I/O. A compiler emits `out` only through an intrinsic or an
  asm block, and this toolchain offers neither as plain C.
- **x87 helpers** (`0x103f0d`, `0x103ef3`, `0x103e64`, `0x103f6f`): `fld`/`ret n`.
  `ret n` is the callee-pops convention, which High C does not emit.

**A correction.** An earlier draft of this page put `0xfe95d` in the same list and
said all of them "can never match". That was too strong. `0xfe95d` takes its
argument in `al` and returns in `ax`/`dx` with no prologue, which is a
register-based convention rather than a non-C construct. It may well be C
compiled with a non-default convention, so it stays in the queue as `unresolved`
rather than being written off.

These routines are still part of the corpus. They are how the game reaches the
hardware, and the disassembly already says what they do. What cannot be done is
verifying them by byte-matching C, because there is no C to write.

### What they are

| address | bytes | what it actually is |
|---|---|---|
| `0xff9dd` | 6 | `jmp; out dx,al; jmp; ret` |
| `0xfe0f1` | 75 | `in`/`out` on ports 0x00 and 0x10 |
| `0xffa72` | 29 | `cli`; `out` port 0xe77, 0xe74 |
| `0xffa8f` | 18 | `out` port 0xe77, `in` port 0xe74 |
| `0xffaa1` | 30 | `cli`; `out` ports 0xe77, 0xe75 |
| `0xff0ba` | 11 | `pusha; mov ecx,0x19; nop; loop; popa; ret` |
| `0x103f0d` | 7 | `fld`/`ret 8` |
| `0x103ef3` | 7 | `fld`/`ret 4` |
| `0x103e64` | 20 | `fnstsw ax`, x87 status inspection |
| `0x103f6f` | 57 | `rep movsb` and x87, `ret 0xc` |
| `0xfe95d` | 31 | no prologue, returns in `ax`/`dx`, `mul bx` |

### Why they were in the pool

`tools/preflight.js` selects a routine when it is a real function start, makes no
calls, and references no absolute address. A BIOS stub satisfies all three: it is
a leaf, it is reached by a call, and its ports are immediates rather than
addresses. **The gate has no notion of what the code is**, only of what it does
not do.

### The address split, which is the useful part

Every non-C routine sits above `0xff000`. The image is `0x105d0e` bytes, and the
region from `0xff000` to EOF contains `cli`/`sti`, segment loads (`8e d0`) and
`rep movsb`: 16-bit real-mode support code, the Fujitsu and Phar Lap layer, not
Origins' C.

```
below 0xff000   15 routines    game code
above 0xff000   11 routines    library, BIOS support, x87 helpers
```

Of the 15 below `0xff000`, seven match. Of the 9 above, none can be matched
against C, and they should not have been in the queue. `0xfe0f1` sits below
`0xff000` and is still excluded, by the port-I/O test rather than the address,
which is why the two signals are independent.

### The consequence for the rate

The "60 percent" figure and its successors were computed over a pool that mixed
two populations. That is not a measurement of compiler fidelity, it is a mixture.
The honest denominator is the C-code population, and adding an address filter
gives it for free.

A candidate that references a `cli`-guarded port write or an x87 instruction is
not a routine whose C we have not guessed yet. It is a routine that was never C.

### What to do about it, and what was not done

The gate should reject a routine containing privileged or x87 instructions, or
above `0xff000`. **Neither was implemented here.** The classification above was
done by hand over the 24 entries, which is enough to state the finding and not
enough to keep the gate honest for the next 700 routines. That is the next piece
of work, and it belongs in `tools/preflight.js` with assertions in
`tools/imgaudit.js` the way the address detection now has.

## Result 21: the gate now excludes not-C code, and there is a register

Result 20 found that the candidate pool mixed two code populations. Three things
were built in response.

### `tools/preflight.js` classifies code kind

Two independent signals, both measured rather than assumed:

- **address**: `LIBRARY_FLOOR = 0xff000`. Every non-C routine found sits above
  it. The region above holds `cli`/`sti`, segment loads and `rep movsb`, which is
  16-bit real-mode support code, not Origins' C.
- **mnemonic**: `pusha`/`popa`, `loop`, x87, `ret n`, `rep movs`, and port I/O.
  None of these has a source form in this toolchain.

The text is matched against decoded mnemonics, not hex. An earlier attempt
matched against the raw byte string and reported `0xe140c` as port I/O because
`ee` occurs inside an operand. That is the same mistake as the SIB case: matching
bytes instead of instructions.

Result, over the same 24-entry pool:

```
14 C leaves among real function starts.
10 excluded as not-C.
```

The two signals are independent and both fire: `0xfe0f1` is below `0xff000` and
is excluded by port I/O, while `0x103f0d` is excluded by both.

### `docs/routines.json` is the register

24 entries, each carrying a class, a one-line description, and the evidence for
that class. It is in `docs/` and tracked, **not** in `analysis/`, because that
directory is gitignored to keep extracted game data out and a record of our own
findings placed there would be silently lost.

| class | count | meaning |
|---|---|---|
| `matched` | 7 | C found that reproduces the bytes exactly |
| `frame-decision` | 3 | logic right, prologue differs. Structural |
| `register-choice` | 1 | one register pair differs across 12 candidates |
| `unresolved` | 3 | real C routines nothing has cracked |
| `not-c` | 10 | no source form produces these instructions |

`node tools/routines.js` prints it grouped. `node tools/routines.js --todo` prints
the three actually-open routines.

### The register is audited, not just written

`tools/imgaudit.js` now asserts, and each assertion was broken deliberately and
watched to fail:

- only known class names appear (`bogus-class` fails)
- every `matched` entry records its C (removing one fails)
- every classified entry names its evidence
- every address is readable in the image

A register that claims a routine is matched when its bytes moved, or that lists
an address that is not a function start, is worse than no register.

### What is open

Three C routines, listed by `--todo`. `0xe140c` is `register-choice`, twelve
candidates deep. Three `frame-decision` routines are structurally blocked on the
same thing, and if that ever opens all three fall together.

The `not-c` ten are not abandoned, they are deferred to a different method:
reading and documenting the behaviour, since there is no C to match.

## Result 22: TownsOS 1.1 carries TownsMENU on the disk, and that is the best starting point found

`saves/tos11.hdm` had never been examined. It is the most useful image in the
repository.

### What is on it

Volume label `123`, 1,232 KB floppy, `IPL4` boot sector, and a genuine TownsOS 1.1
boot disk dated `1991-02-01`:

| file | size | what it is |
|---|---|---|
| `TMENU.EXP` | 240,602 | **TownsMENU itself, on the disk** |
| `RUN386.EXE` | 71,376 | the Phar Lap extender |
| `CONTROL.EXE` | 41,140 | the TownsMENU launcher |
| `IO.SYS` | 77,824 | TownsOS kernel |
| `TBIOS.SYS` + `TBIOS.BIN` | 387 + 81,920 | Towns BIOS driver |
| `DICUTY.COM` | 1,000 | dictionary utility |

`CONFIG.SYS` is two lines:

```
SHELL=C:\COMMAND.COM C:\ /P
DEVICE=TBIOS.SYS /TBIOS.BIN
```

`AUTOEXEC.BAT` launches `CONTROL` directly, in a restart loop.

Four files are **ours, not Fujitsu's**: `TGDRV.COM`, `DPAT.EXG`, `HDUTY.EXG` and
`FMT.EXP`, all dated `2026-10-25`. They were added in an earlier session and are
not part of the original disk.

### TownsMENU boots from it

Booting the image with `-BOOTKEY F0` and the High C SDK CD attached produces a
TownsMENU desktop, measured from the screen:

```
row 1-2   menu bar
row 3     separator
row 4-23  bordered panel, 27 percent white
row 25    status line
```

That is a window layout, not a text prompt. **TownsMENU is reachable without the
CD**, because `TMENU.EXP` is on the floppy. This is the first configuration where
that is true.

### But the guest cannot write to the floppy

This is what blocked the next step, and it cost three attempts before being
diagnosed.

A traced `AUTOEXEC.BAT` that wrote `T.LOG` produced no file. A typed
`ECHO ALIVE > A:\A.TXT` at the desktop produced no file. Re-issuing `FD0UP`
first changed nothing.

**So the desktop comes up and the volume is read-only.** Writing a probe to disk
and reading it back, which is the method this project uses for every other
bring-up, does not work here.

`FD0UP` is documented in `container/entrypoint.sh` as re-arming write protection,
and `docs/compiling-on-fm-towns.md` records that without it guest writes silently
do nothing. Here it appears to be on regardless. That has not been explained.

### Why this matters

Gemini's description of a 1989 dev setup said developers ran a hard disk with the
OS and toolchain on it. This disk is the closest thing in the repository to that:
TownsMENU resident, `RUN386` present, no CD needed to boot.

The remaining gap is writable storage. Three candidates, cheapest first:

1. **Fix the floppy write problem.** If the guest can write to `scratch-tos11.hdm`
   at all, then a compiled object has somewhere to land and the whole
   `RUN386 HCD386P.EXP` question becomes testable on a floppy.
2. **Attach the 64 MB `genhd2.img` as a second drive** and write there. Untested
   with this boot configuration.
3. **Boot the SDK CD and use `Q:` for the toolchain, with the floppy for output**,
   which is the configuration the developers are said to have used in reverse.

Not attempted here. The write-protection question has to be settled first,
because every one of the three depends on it.
