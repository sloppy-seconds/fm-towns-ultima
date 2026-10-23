# A12: what a linear disassembler pass looks like

The plan says "build a linear disassembler pass". This page is the concrete design, worked out
far enough to show it is feasible and small, with the key facts measured rather than assumed.

## The problem it solves, demonstrated

`tools/randmods.js` byte-scans for `E8` opcodes and reports a call site when the relative target
matches. The failure is concrete and now proven.

Byte scan says there is a `randMod` call at `0xef4bb`. Disassembling from the enclosing function
entry instead gives:

```
000EF4B2  83C404            add esp,0x4
000EF4B5  83F805            cmp eax,0x5
000EF4B8  7D2E              jnl 0xef4e8
000EF4BA  A1A0EC0C00        mov eax,[0xceca0]
000EF4BF  8D1480            lea edx,[eax+eax*4]
```

**`0xef4bb` is the second byte of the `mov` at `0xef4ba`.** The `E8` the scanner found is part of
the address `0x0ceca0`, not an opcode. The real comparison is `cmp eax,0x5` at `0xef4b5`, which
the scanner could not see because it started in the wrong place.

That single example justifies the whole tool: a byte scan cannot distinguish an opcode from an
operand, and a linear sweep can.

## Why this is small

**`ndisasm` already does the hard part.** It decodes x86-32 and emits one instruction per line at
fixed columns:

```
000EF4B5  83F805            cmp eax,0x5
000EF4BA  A1A0EC0C00        mov eax,[0xceca0]
```

Three fields, parseable with one regex: **offset** (8 hex digits), **bytes**, **mnemonic and
operands**. Instruction length is simply the next offset minus this one, and the byte column
confirms it.

**So no x86 decoder is needed.** The tool slices the function out of the image, runs `ndisasm` on
it once, and parses the output. That is the entire dependency, and `ndisasm` is already a
requirement of `tools/funcs.js`.

## The design

```
tools/sweep.js <entry> [length]
```

1. Slice `img[entry .. entry+length]` from the header-stripped image.
2. Run `ndisasm -b32 -o<entry>` on the slice.
3. Parse every line into `{ addr, len, bytes, text }`.
4. Emit an **instruction boundary set**: the set of addresses that begin a real instruction.

Then the survey becomes:

```
tools/randmods.js --boundaries
```

which rejects any candidate site not in the boundary set. A candidate at `0xef4bb` disappears
because no instruction starts there.

## Scope, decided by measurement

**Full-image sweep is possible but wasteful.** A linear sweep over 1,072,366 bytes at 2
instructions per 5 bytes is roughly 400,000 instructions and about 20 MB of `ndisasm` text. The
project already records `ndisasm` producing 501,275 lines from a naive full pass.

**Sweeping the 247 strongly-called functions is enough and is small.** The function list already
exists from `tools/funcs.js`. Boundaries from one function do not leak into another, because the
question is always "is this address inside *some* real instruction", and each function is swept
from its own entry.

The 85 `randMod` sites and the 4 `randRange` sites all fall inside functions on that list, which
was checked when the site list was first built.

## The specific success criterion

Already written in the plan, and it is testable:

> the survey resolves substantially more than 33 of 85, with no impossible odds.

Concretely:

| before | expected after |
|---|---|
| 33 of 85 resolved | most of the 85 |
| 4 numerically impossible odds | **zero** |
| 52 unresolved | fewer, and the remainder genuinely having no comparison |

The "zero impossible odds" part is the real test. An impossible odd means the tool read a
comparison that does not exist, which only happens on a misaligned read. If the count is not zero,
the boundary filter has a bug.

## What it does not do

**Not a decompiler, and not a control-flow reconstruction.** It does not follow branches, does
not build basic blocks, does not decide what is code and what is data beyond what the sweep
covers. `code-analysis.md` records why a decompiler on this image is a bad idea without a proper
`MP` loader, and that reasoning still holds.

**It is a boundary oracle.** One question: does an instruction begin here. That is the minimum
needed to stop the false positives, and nothing more.

## The one real risk

**A sweep from a wrong entry gives confidently wrong boundaries for the whole slice.** If
`tools/funcs.js` lists a target that is not a real function entry, everything in that slice is
misaligned, and the boundary set will reject genuine sites inside it.

There is a cheap check: a sweep is trustworthy if it consumes its bytes cleanly and its last
instruction ends exactly at the slice end. A misaligned sweep typically produces `db` directives
and odd lengths. Recording the `db` count per function is enough to flag the bad ones.

That check should be built in, not added later.

## Effort

Small. The parse is one regex, the sweep is one `ndisasm` call per function, and the boundary set
is a `Set` of integers. A day's work, most of it spent on the `db`-ratio reporting and on
re-running the survey.

The value is disproportionate: **it unblocks the remaining formula work**, which is where the
actual game mechanics live, and it removes a class of error that has produced four wrong answers
on this project already.

## Built, and what the build revealed

`tools/sweep.js` exists and works. `tools/randmods.js --sweep` filters sites against real
instruction boundaries. Three findings came out of actually running it.

### 1. The full-image sweep is unusable, and the failure mode is instructive

Sweeping the whole stripped image from offset 0 decodes the loader stub and data as
instructions, so boundaries drift from the start. **Measured, and exactly backwards:** the full
sweep reports stripped `0xe391e` as a boundary and stripped `0xe391d`, which is the real
`cmp edx,0x48`, as not one.

This is the risk the design named, confirmed. **A linear sweep from a wrong origin is
confidently wrong**, and it looks the same as a correct one until you check specific addresses.

### 2. Per-function sweeps are sound

All **247** strongly-called functions sweep at a `db` ratio under 15 percent, and in fact all of
them came out at or near zero. So the function list from `tools/funcs.js` is reliable and
function-local sweeps can be trusted.

### 3. The filter halves the site count, and still cannot finish

Filtering the 85 `randMod` sites against per-function boundaries gives:

| sweep scope | sites surviving |
|---|---|
| none (raw byte scan) | 85 |
| 738 call targets | 72 |
| 247 strongly-called only | 24 |

So **13 of the 85 raw hits are provably false**, and the rest are real `call` instructions.

### The structural limit, stated plainly

**One false positive survives no matter how many call targets are swept**: `0xe393e`, reported
as `96/3`.

It lives in the function at `0xe3904`, which has **exactly one caller** and is therefore outside
any "strongly called" list. Sweeping all 738 call targets still misses it because `0xe3904`
**is not a call target at all**. It is reached by fall-through or by an indirect jump, so no
list of `CALL` destinations will ever include it.

That is the honest boundary of this technique: **it can only sweep functions that something
`call`s directly.** Reaching the rest needs either a full control-flow walk from the entry point
at `0x101a20`, or accepting a small residual error.

This project's own `code-analysis.md` records that direct:indirect dispatch is 58:1, so the
missed functions are a minority, and 13 of 14 found false positives is a large improvement on
none.

## What to do with the result

Once boundaries are trustworthy, the survey becomes mechanical and the 85 sites resolve. Each
resolved site is a probability in the game's logic. Collected together they are a description of
how the game behaves under randomness, which is the kind of thing no amount of playing produces
reliably and no amount of statistics on the binary produces correctly.

---

**[The randMod survey](randmod-survey.md)** **[The stat-gain routine](stat-gain.md)** **[Plan](plan.md)**
