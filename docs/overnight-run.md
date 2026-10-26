# Overnight: work the routine queue until it is empty

**This is a work queue, not a set of decisions.** The job is to attempt **every** routine,
from every angle available, and leave each one either recovered or parked with a named cause.
A parked routine is not finished. It goes back in the queue the moment something else might
unlock it.

The failure this rewrite exists to correct: the previous version of this page made a single
probe on one routine count as a "decisive experiment", and made a written negative count the
same as a recovered routine. That produced four documents and zero new routines. The queue
below cannot be completed by writing prose.

## The two standards, and which one counts

The project already recovers routines under **two** standards, and only one of them was being
counted:

| standard | what it means | where it is used |
|---|---|---|
| `matched` | bytes identical | the 14 `c-leaf` routines |
| **`identical except disp32`** | every byte agrees except the displacement of an absolute reference or a call `rel32` | `0xef548`, `0xef248`, and the source-known `0xf3e24` |

**Both count as recovered.** A routine whose logic is fully reconstructed, whose only difference
is an address the linker assigns, is a recovered routine. Counting only byte-perfect matches
excluded most of the queue by construction and made the honest ceiling look like 14.

Status labels a routine may end the night with:

- `matched`: bytes identical.
- `identical except disp32`: the source is right, the difference is link-time addresses only.
  Always record which bytes and why.
- `parked:<cause>`: attempted, not recovered, cause named. **Returns to the queue on unlock.**
- `not-c`: no C source produces it (port I/O, `pusha`, x87). Permanent, and the reason is proof.

## The unlock rule (the one the old plan was missing)

A routine is never abandoned on first failure. It is **parked**, and it comes back when any of
these happens:

1. **A lever is found on any other routine.** A source shape, flag, or addressing form that
   changed one routine's output may change a parked one. Re-run every parked routine against
   the new lever before moving on.
2. **A global it references is typed.** A typed global often fixes the addressing form, which
   is what most parks are waiting on.
3. **A routine it calls is recovered.** The callee's known signature fixes the call's argument
   setup.
4. **The same cause parks three different routines.** That is a signal the cause is a class, not
   a routine. Investigate the class once, then re-run all three.

Keep a parked list with the cause for each. **At the end of the night, every parked routine is
re-attempted once against the complete set of levers found during the night.** Parking is a
delay, not a verdict.

## Autonomy rules

- Commit in logical units. Run `node tools/checkall.js` before every commit; it must pass.
- **Never quote a number from memory.** Re-measure, and put the command in the write-up.
- **Never stop the queue to write an essay.** A finding goes in a page when it is a lever or a
  class-level cause. A single routine's park goes in the queue list, not in a new document.
- Do not hand-test against a named disk image. Copy first.
- If something hangs, stop and write down what hung. Do not chase it.
- **A claim without a check is a guess.** If it cannot be checked tonight, label it.

## The queue, and the order to work it

All counts below are from `docs/corpus.json` (738 routines) and `docs/routines.json`.
The queue is worked top to bottom, and the unlock rule loops it back.

### Pass 1: finish the near-complete set

| set | count | why first |
|---|---|---|
| `c-leaf` with no absolute reference | 14 | 10 already `matched`; the rest are close |
| routines already in the register as `unresolved` or `register-choice` | 3 | source exists, one lever away |

Do these first because they are the cheapest recoveries and because the lever that finishes
them may be the lever that unblocks a parked routine.

### Pass 2: the base-fold set, smallest first

76 routines that reference an absolute address and make no call. Under the
`identical except disp32` standard these are recoverable, and the previous plan wrongly
treated them as blocked. Work them smallest-first:

```
node -e 'const c=require("./docs/corpus.json");for(const e of c.filter(x=>x.kind==="base-fold").sort((a,b)=>a.size-b.size))console.log("0x"+e.addr.toString(16),e.size,e.reason.join(""))'
```

For each:

1. `node tools/preflight.js <addr>` for boundary and the absolute reference
2. disassemble with `tools/decode.js` (never `ndisasm` text; see `docs/tooling-policy.md`)
3. read the prologue for the argument map, write the C
4. `./tools/cc.sh <file> --json` and diff
5. record `matched`, or `identical except disp32` with the differing bytes named, or park with a cause

The first three (`0xe1c24`, `0xe1bf4`, `0xf3e24`) are already `identical except disp32` and are
the worked examples of the standard.

### Pass 3: the non-leaf set, wrappers first, then by caller count

307 routines that make at least one call. The call `rel32` is a link-time relocation, so these
cannot be `matched`. They can all be `identical except disp32`. Order:

1. **Wrappers with one call and nothing else** (`call; ret`, `call; sub eax,eax; ret`). These
   are common and their logic is fully determined. Several are already identified:
   `0xe9430` calls `0xe9400`, `0xf7bf0` calls `0xef2f4`, `0xe1068` calls `0xfe2d4`,
   `0xe157c` calls `0xfe2fe`. Recover each as `identical except disp32` naming the callee.
2. **≤64 bytes, no absolute reference** (62 routines). Fewest degrees of freedom. Work each.
3. **Everything else, by caller count descending.** Highest caller count first, because a
   recovered routine high in the graph unblocks its callers.

For every non-leaf routine the recovery records the callee addresses. That is a call-graph
fact worth having even when the body is not yet written.

### Pass 4: globals, interleaved not isolated

120 distinct globals, 5 typed, 4 excluded as hardware. **Do not type them in isolation.**
Type a global, then immediately recover a routine that uses it, so each global is confirmed by
code. The routine:

1. `node tools/globals.js --scan base-fold --json` for the graph
2. take the most-referenced untyped global that is not in the hardware block (`0xdf0xx`)
3. read its uses across every routine that touches it, derive type from operand shape
   (element size from scale, stride from the `lea` chain)
4. record in `docs/globals.json` with the routines that support it, and say whether it is a
   hypothesis (one routine) or corroborated (several)
5. `node tools/globals_od.js --compare` must stay at 0 disagreements

Each typed global feeds the unlock rule. After typing a batch, re-run every parked routine
that references a global.

### Pass 5: the structural questions, when the queue stalls

Cheap and independent. Run them when the queue has nothing startable, not before.

**5a. Linker address placement.** Answered for `-offset` (rejected). The remaining options
`-segment`, `-group`, `-order`, `-databreak` were never properly tried. If any places a data
segment at a chosen absolute address in flat model, the base-fold set becomes `matched` rather
than `identical except disp32`. Either answer is a result.

**5b. Plan item 4h**, migrating the remaining eleven `ndisasm` sites. Mechanical, unblocks
nothing but removes the last text parsing from the toolchain. Do it in a lull.

## What "done" looks like

The queue is done when **every routine in it has a status**, and the statuses add up:

- `matched` + `identical except disp32` = recovered count, which should rise well past 10
- `parked:<cause>` = attempted, cause named, re-attempted at the end of the night
- `not-c` = proof of impossibility

There is no target number for the night. The target is **no routine left unattempted**. A
night that attempts 300 and recovers 40 beats a night that attempts 1 and documents it.

## Recording

Every unit ends with: what was asked, what was done, what was claimed and which check proved
it, what is stale elsewhere. `node tools/sessionreport.js` first, then the report.

**One page per lever or class-level cause. One row per routine in the queue list.** The queue
list is the record of the grind. Prose about a single routine belongs in its queue row.

## Outcomes of the first run under the old plan

Recorded so the failure is not repeated. That run reached the README's Phase 2, made one
candidate for `0xe6a58`, found four differences, and stopped. The findings it did establish
are real and are kept:

- **`0xe6a58` is `base-fold`, not non-leaf.** The census gives it `calls: 0` and
  `references 0x7a7d0`. It was never a valid test of non-leaf reachability, and its failure is
  the absolute-address difference, which the `identical except disp32` standard recovers.
- **The non-leaf set cannot be `matched`.** Every call is `e8 <rel32>`, a link-time relocation.
  Measured on four wrappers, each compiling to the game's exact shape apart from those four
  bytes. Linking does not fix it. This is why those routines use the disp32 standard.
- **The `0xe6a58` source is known**: 57-byte stride at `0x7aee4`, `(c-6)/8` as three
  `cdq/sub/sar` pairs, `(d-4)/16` as `idiv`, `xchg eax,ebx` a swap. Under the disp32 standard
  it is one recovery away.

Full detail: `docs/nonleaf-relocation-ceiling.md`.

**What that run should have done instead:** continued into Pass 2 and Pass 3 rather than
stopping to write the page. The page is correct and is kept. Stopping was the error.
