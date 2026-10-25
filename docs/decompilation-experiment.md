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
