# The control-flow walk

[entry-point-question.md](entry-point-question.md) said reaching the functions a `CALL`-target
sweep cannot see would need "a control-flow walk". That walk is now built, and it works.

`tools/cfgwalk.js`.

## What it does

Seeds with every `CALL rel32` target, because the instruction that reaches a target proves it is
a function entry. Then follows control flow:

| instruction | successors |
|---|---|
| `call rel32` | target queued, **and** fall through |
| `jmp rel32` | target queued, no fall-through |
| `jcc rel8/rel32` | target **and** fall-through |
| `jmp reg` / `jmp [mem]` | **unresolved**, recorded, path ends |
| `ret` | path ends |
| anything else | fall through |

**Gap recovery** is what makes it beat a `CALL`-target sweep. When a path ends at a `ret`, the
walk skips a run of alignment padding (`0x90`, `66 8B C0`, `8B C0`) and treats the next byte as a
new start. Functions reached only by fall-through are recovered this way.

The concrete case that motivated all of this: `0xf9cac` is `jmp 0xf9cb0`, which lands on a `ret`.
The real body starts at `0xf9cb8` after a `mov ax,ax` pad. **No `CALL` target points at
`0xf9cb8`**, so a `CALL`-target sweep misses the whole function, and the `randMod` site inside it
is either lost or misjudged.

## Measured

```
instructions decoded: 79,470
distinct boundaries:  79,470
unresolved edges:     144
elapsed:              ~2.1 s
```

**`randMod` sites: 85 raw → 83 on real instruction boundaries.**

Two rejected, and both are provably wrong:

| rejected | why |
|---|---|
| `0xef4bb` | inside `mov eax,[0xceca0]` at `0xef4ba` |
| `0xef4cd` | inside `mov eax,[edx+0xcdeef]` at `0xef4cc` |

The real call in that function is `0xef4ad`, which the walk keeps. Verified by disassembling
`0xef490`.

## The bug this tool had, and why it is worth recording

The first version cached decoded instructions in a map keyed by address, filling it from 4 KB
windows. That ran a full walk in 1.5 s instead of 69 s, and it was **wrong**.

**The symptom:** `0xf9e78` decoded correctly on its own, but the walk stepped from it to nowhere,
so `0xf9e7d` and everything after it was rejected as "not a boundary". Real call sites were being
dropped.

**The cause:** instruction lengths after the first line of a window are only valid if the window's
base is itself an instruction boundary. A window decoded from a non-aligned base gives garbage
lengths for every instruction after the first, and the address-keyed cache happily stored that
garbage under real addresses.

**The fix:** the cache is now **per path**, refilled only from addresses the walk believes are
boundaries, and discarded when the path ends. That keeps the speed and removes the hazard.

**Why it matters beyond this tool:** the wrong version produced plausible numbers (79,470
instructions, 144 unresolved edges) and a plausible rejection list. It was only caught by checking
a specific address that should have been accepted. Same failure shape as the `funcs.js` label
skew: a fast, tidy, confidently wrong answer.

## The unresolved edges

144 indirect branches, recorded and not followed. The dominant pattern is:

```
call dword near [0xdfc5c]
```

That is a **call through a function pointer stored in a global**, and it appears eight times or
more. Following it needs to know what is stored at `0xdfc5c` at runtime.

**Corrected:** this was written as if that meant playing the game. It does not. Two savestates
already exist, and reading them settled what `0xdfc5c` is: the printf output callback, installed
at startup. What reading it *at runtime* needs is a reliable file-to-memory mapping for the top of
the image, which is **not** yet derived and is a static-analysis problem.

See [indirect-branches.md](indirect-branches.md).

This matches the 58:1 direct-to-indirect ratio `code-analysis.md` records. The walk stops at
those points honestly rather than guessing a target.

## What this changes

**The `randMod` survey is now trustworthy on 83 of 85 sites** instead of 33 of 85 with four
impossible values. The remaining 2 are known false positives, identified and explainable.

More importantly for later work, `tools/cfgwalk.js --check <addr>` answers "is this a real
instruction boundary" for any address in about two seconds. That is the primitive every future
disassembly question needs.

## What it does not do

**Not a decompiler and not a complete CFG.** It does not resolve indirect branches, does not
track register values, and does not distinguish code from data beyond what control flow reaches.
A path that runs more than 20,000 instructions is abandoned as a likely misdecode into data.

**Coverage is bounded by reachability.** Anything reached only through `call [0xdfc5c]` is
outside it.

## Why the earlier estimate was wrong

The design guessed this "would cost substantially more" than the `CALL`-target sweep and was not
worth building for tidiness. That was wrong on both counts: it took one tool and a bug fix, and
it doubles the usable site count. The rule about not deferring extraction work should have
applied here, and the phrase "not worth building for tidiness" was a rationalisation for not
doing something that turned out to be cheap.

---

**[The entry-point question](entry-point-question.md)** **[The randMod survey](randmod-survey.md)** **[The A12 design](a12-design.md)**
