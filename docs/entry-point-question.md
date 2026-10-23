# What "a control-flow walk from `0x101a20`" meant, and why it was wrong

[a12-design.md](a12-design.md) ends with a sentence saying that reaching the functions a linear
sweep cannot see needs "a control-flow walk from the entry point at `0x101a20`".

Asked to explain it, the phrase turned out to rest on an unexamined assumption. **`0x101a20` is
not an entry point.**

## What `0x101a20` actually is

It is the value of the `EIP` field in the `MP` header, at file offset `0x14`. `docs/code-analysis.md`
records it and correctly notes that it "invites the assumption that the image loads at `0x100000`",
and disproves the base but does not question `EIP` itself.

Disassembling at `0x101a20` gives:

```asm
00101A20  0203              add al,[ebx]
00101A22  D103              rol dword [ebx],1
00101A24  55                push ebp
00101A25  E066              loopne 0x101a8d
00101A27  8955F6            mov [ebp-0xa],edx
```

`add al,[ebx]` followed by `rol dword [ebx],1` is not a function prologue. The `push ebp` at
`0x101a24` is the tail of an instruction that started earlier, not a real one.

**Confirmed by sweep.** Disassembling from the real prologue at `0x101984` puts an instruction
boundary at `0x101a1f`, which means `0x101a20` is **one byte into a real instruction**.

So `0x101a20` is not a place code begins. Reading it as an entry point produces confidently
wrong output, which is the same failure the `funcs.js` label skew caused.

## So what did the sentence mean to say?

The intent was right and the example was wrong. The real point is:

> A linear sweep from a list of `CALL` targets only covers functions that something calls
> directly. Functions reached by fall-through, by an indirect jump, or by a jump table are
> outside that set, and their bytes are never swept.

`0xe3904`, the function containing the surviving false positive at `0xe393e`, is exactly such a
case: one caller, and not a `CALL` target at all.

## What a control-flow walk would actually be

Not "start at the entry point". Starting anywhere is the problem, not the solution.

A control-flow walk starts from a **known-good function entry**, sweeps forward until a
terminator, and then **follows the control flow**:

- a `call rel32` target becomes a new start point
- a `jmp rel32` target becomes a new start point
- a conditional jump's target and its fall-through both become start points
- a `ret` ends the current path
- a jump through a register or a memory table is an **unresolved edge**, recorded and not
  followed

Everything reachable that way gets swept, and every function reached only by fall-through from an
already-swept function is included because fall-through is followed too.

**The hard part is the unresolved edges.** `code-analysis.md` records direct:indirect at 58:1, so
5.5 percent of branches cannot be followed statically. Each one is a place where the walk stops
and some function beyond it goes unswept.

That is the honest trade: a control-flow walk from *verified* entries converts "25 percent of
functions are unsweepable" into "5.5 percent of branches leave holes". Better, and not complete.

## Why it was not done

The sweep built in A12 already removes **13 of 14** provable false positives in the `randMod`
survey using nothing but the `CALL`-target list. A control-flow walk would cost substantially
more and would still leave holes.

It is worth building when an unanswered question sits behind one of the holes. It is not worth
building for tidiness, and this project's own rule says not to defer extraction work for
generality.

## The correction to record

**`0x101a20` is not an entry point.** It is the `MP` header's `EIP` field value, and it points one
byte into a real instruction in this image.

Any future work should treat the `MP` header `EIP` as **unverified** rather than authoritative.
The only entries this project can trust are the ones derived from `CALL` targets, because those
are proven by the instruction that reaches them.

---

**[The A12 design](a12-design.md)** **[The randMod survey](randmod-survey.md)** **[Plan](plan.md)**
