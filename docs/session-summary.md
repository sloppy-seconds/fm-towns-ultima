# Session summary: ten routines, a census, and four corrections

**State at the end of this session.** Ten routines matched byte for byte, a census of
all 738 call targets, 120 distinct globals, a shared instruction decoder, and an enforced
tooling policy. Four of my own conclusions were wrong and are corrected here rather than
quietly fixed.

This page exists because the work spanned several distinct threads and the plan file
records items rather than narrative. Read this to know where things stand; read
`docs/plan.md` to know what is next.

## Routines

**Ten matched**, up from seven. Each was matched by finding the source form the compiler
turn(s) into the exact bytes:

| routine | what it is | the lever that cracked it |
|---|---|---|
| `0xe9e2c` | skip to after `=` | already matched |
| `0xe44d0` | parse a leading integer | already matched |
| `0xe9940` | busy-wait loop | already matched |
| `0xe07e8` | decrement a packed time | already matched |
| `0xe65fc` | copy two struct fields out | already matched |
| `0xe662c` | read a short at `+0x36` | already matched |
| `0xfd0ec` | three-way sign | already matched |
| `0xe552c` | linear search, 132-byte stride | **parameter must be `char`, not `int`** |
| `0xe52c8` | 7-field struct init | **`-off optimize_fp`**, plus term order |
| `0xe5304` | 132-byte record writer | **term order in the index expression** |

Two levers generalise and are worth remembering:

**The flag is `optimize_fp`, not `Remove_BP`.** Found in `hc386set.cnf`, which ships
`HCDEBUG=-on codeview \ -off optimize_xjmp optimize_fp auto_reg_alloc postpone_arg_pops`.
That one line is MetaWare demonstrating the backend toggle syntax. With `-off optimize_fp`
`0xe52c8` matches; without it the build is frameless and the target framed.

**Term order decides which operand absorbs a constant.** `base[row*132+0x42+i]` lets the
compiler fold `0x42` into a `lea` displacement and shorten the store;
`base[row*132+i+0x42]` keeps the `lea` pure and leaves `0x42` in the store, which is what
the target does. Seven bytes differ, and for a while that looked like a storage
allocation rather than an addressing choice.

Full detail: `docs/compile-route-dos.md`.

## The census

`tools/preflight.js --census` classifies every call target in 1.5 seconds. Result, in
`docs/corpus.json` and checked against a fresh run by `checkall`:

| kind | share | meaning |
|---|---|---|
| `non-leaf` | 41.6% | real entry, makes calls |
| `not-entry` | 38.5% | interior address, not a function start |
| `base-fold` | 10.3% | real entry, no calls, references an absolute address |
| `not-c` | 7.7% | no C source shape can produce it |
| `c-leaf` | 1.9% | the byte-matchable set |

The largest single finding is the `not-entry` count: 38.5% of what was being called a
routine is not a function start. See `docs/corpus-census.md`.

## Globals

76 `base-fold` routines reference **120 distinct globals** between them. Four are typed:

| global | kind |
|---|---|
| `0xceca0` | int index into a 351-byte record array |
| `0xce408`, `0xce488` | parallel `int[]` per-id tables, `0x80` apart |
| `0x0d6e60` | plain int scalar |

Two were **excluded as hardware**, with proof: every user of `0xdf0c7` and `0xdf0c8`
contains `cli`/`out`/`in`.

Two routines recovered to the "identical except disp32" standard: `0xef548` (a single
store) and `0xef248` (which uses the full stride chain and validates the method).

Full detail: `docs/globals.json`, `docs/globals-plan.md`, `docs/globals-step2-plan.md`.

## Tooling

**`tools/decode.js`** is now the shared decoder: a Node module over a small Python
worker, because Capstone's only binding with operand detail is Python and `capstone-wasm`
exposes none. `tools/decode-setup.sh` creates a repo-local venv, gitignored, from
`tools/decode-requirements.txt`.

The reason for the change is operand **type**. `X86_OP_MEM` and `X86_OP_IMM` are different
values, so the class of bug that produced four defects this session cannot be expressed.
`globals.js` and `globals_od.js`, two independent implementations, now agree on **76 of
76** base-fold routines.

**`docs/tooling-policy.md`** records the rule and `checkall` enforces it: no tool outside
an explicit allow-list may invoke `ndisasm`, and the count of files that still do is
pinned so migrating one is an intentional edit.

## Four corrections, and what they had in common

**1. `grep -q MATCH` also matches `MISMATCH`.** My first run of the `optimize_fp`
comparison reported "7 of 7 still match". Five had broken. The corrected table came from
comparing hex in code. This is the defect this repository's own documentation warns about,
produced by the check rather than found by it.

**2. "The optimiser never engages" was specific to `HCD386.EXE`.** Through `HC386.EXE`
it engages and changes output. `docs/highc-codegen.md` already recorded `lea` sequences
from the DOS route, so my claim that the TownsOS route revealed a new optimiser was wrong.

**3. "Toggles are silently ignored" was wrong.** They work; `-off auto_reg_alloc` gives
188 bytes. The names I tried first were ineffective, and because unknown flags are
accepted without error the two cases looked identical until a control moved.

**4. The `non-leaf` blocker was the wrong compiler.** `docs/highc-spike.md` concluded
matching cannot scale past leaves because the game divides with `cdq/sub/sar` while High C
emits a reciprocal. That was measured with **2.31**. High C **1.73** emits the game's
exact three-pair sequence for `(e-6)/2/2/2`, and the `idiv` test the forensics page asked
for passes. The recorded negative was correct for its compiler and wrong for ours, and the
dependency was invisible.

The common thread is the same one the repository already documents: a claim is worth
exactly the conditions it was measured under, and three of these four were results that
had been correct when written and expired without anyone noticing.

## Two negatives worth as much as the positives

**Naming by string reference does not scale.** Two of 738 call targets reference any
string, and both reference glyph runs. The cause is structural: both routines this project
ever named from strings, `0xf6ebc` and `0xeb354`, are called **zero** times, so they are
not call targets at all. String-bearing routines sit outside the census, and sweeping the
census for them asked the wrong population. `docs/naming-negative.md`.

**Base-fold cannot be byte-matched without controlling address layout.** For `0xf3e24`,
the most-called routine in the image, the source is solved and 24 of 25 bytes match. The
three differing bytes are one disp32: our build places the global at its own address. The
linker will not be told where to put the segment, and patching the displacement afterwards
would prove nothing. `docs/base-fold-negative.md`.

## Where to go next

**Highest value: finish `0xe6a58`.** The record initialiser is solved, down to the 57-byte
stride and the `xchg` that is a swap rather than a min. It fails on register allocation
alone: the target hoists `c` into `esi` with no frame, our builds spill. That is the same
class as `0xe140c`, and it is the one open question about whether large `non-leaf` routines
are tractable at all.

**Plan item 4h is done**, the eleven `ndisasm` sites migrated to the shared decoder:
Python two first, then the low-risk JS, then the four census-critical ones one at a time
with a `corpus.json` diff after each. Nine census rows moved, none changed kind, and the
record is in `docs/tooling-policy.md`.

**Blocked on a person: the palette and the `0xe6a58` trace**, both of which want the
Geartowns debugger, which is pinned. See `docs/geartowns.md`.

The honest summary: the leaf and base-fold work is understood and near its end. The
`non-leaf` set is 41.6% of the image and we have one favourable data point about it, not a
method. That is the real frontier.
