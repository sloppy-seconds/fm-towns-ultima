# Overnight: work the routine queue until stopped

**Goal as stated:** decompile as much as possible to bit-perfect C, covering leaves,
non-leaf and globals, trying angles until it works, parking hard routines and returning to
them.

**What the measurements say that ceiling actually is.** This is not pessimism, it is the
number the plan has to be built on:

| pool | count | can it be bit-perfect? |
|---|---|---|
| `c-leaf` | 14 | yes, and **all 14 are already done or classified** |
| `base-fold` | 76 | source yes, bytes **no**, unless address layout is controlled |
| `non-leaf`, 1 call, ≤64 bytes | 86 | unknown, and `0xe6a58` is the test case |
| `non-leaf`, everything else | 221 | unknown, larger |
| `not-entry` | 284 | no, not function starts |
| `not-c` | 57 | no, no C source produces them |

So "bit-perfect C for the lot" cannot happen. What can happen tonight is **more matched
routines, a working method for the `non-leaf` set, and a decisive answer on the two
structural blockers.** The plan is ordered by which of those each item buys.

The one number worth carrying into the morning: **10 matched routines**. Everything below
is judged by whether it moves that, or by whether it explains why it cannot.

## Autonomy rules for the night

- Commit in logical units. Run `node tools/checkall.js` before every commit; it must pass.
- **Never quote a number from memory.** Re-measure, and put the command in the write-up.
- Park and rotate rather than grind. Three failed angles on one routine means move on.
- Record every negative as a page, not as a shrug. Four of this project's most useful
  documents are negatives.
- Do not hand-test against a named disk image. Copy first.
- If something hangs, stop and write down what hung. Do not chase it.
- **A claim without a check is a guess.** If it cannot be checked tonight, label it.

## Phase 1: unblock the pipeline (do first, or nothing else runs)

**1a. Bring up the compile pipeline.** `cserve.js` needs `dosboot` running and pointed at
it. Verify with a known routine before trusting it:

```
./tools/cc.sh /var/tmp/e52c8b.c --flags "-off optimize_fp" --want "$(target hex)"
```

Must print MATCH. If it does not, fix that before any decompiling; a broken pipeline
produces confident wrong results, which is worse than no results.

**1b. Confirm Capstone.** `./tools/decode-setup.sh --check`. The venv lives at
`tools/.venv` and is gitignored.

## Phase 2: the decisive experiment

**2a. Finish `0xe6a58`.** This is the highest-value single item, because it decides
whether the 307 are reachable.

Solved already: 57-byte stride at `0x7aee4`; byte at offset 0 then fourteen dwords; `(c-6)/8`
as three `cdq/sub/sar` pairs; `(d-4)/16` as `idiv`; `xchg eax,ebx` is a **swap**, not a min.
Three source shapes written, all fail on allocation: the target has no frame and hoists `c`
into `esi`, ours emit `push eax` and reload.

Angles to try, in order, and this is exactly the "try stuff" work:

1. **Fewer uses of the parameter.** If `c` is read once rather than twice the allocator has
   no reason to spill it. Rewrite so each parameter is used exactly once where possible.
2. **Separate statements rather than expressions.** The target's two divisions look like
   independent statements feeding distinct variables.
3. **`register` keyword.** High C may honour it. Cheap to test.
4. **Order the declarations to match the load order** `edi`, `esi`, `ebx`.
5. **`-off optimize_fp` and `-off auto_reg_alloc`** in combination. Both are known live
   toggles; `auto_reg_alloc` changes output (measured earlier).
6. **A different division spelling**, since the three-pair form came from
   `(e-6)/2/2/2` rather than `/8`.

If one of these matches, record it and apply the same lever to the other 85 single-call
small routines. If none does, write `0xe6a58` as a **negative with a named cause** and
say plainly that non-leaf matching is not tractable with source-shape search alone. Either
outcome is a result; grinding without recording is not.

## Phase 3: the `non-leaf` queue

Order by caller count, park anything that resists three angles. For each routine:

1. `node tools/preflight.js <addr>` for boundary, leaf, absolute-reference checks
2. disassemble with `tools/decode.js` (never `ndisasm` text; policy in
   `docs/tooling-policy.md`)
3. read the prologue for the argument map, then write the C
4. `./tools/cc.sh <file> --json` and diff
5. record the class: `matched`, or a named cause

Target the 86 single-call ≤64-byte routines first. They have the fewest degrees of freedom
and the highest chance of matching, and each one either matches or teaches a lever.

## Phase 4: globals

76 `base-fold` routines, 120 distinct globals, 4 typed. The routine:

1. `node tools/globals.js --scan base-fold --json` to get the graph
2. take the most-referenced untyped global
3. read its uses across every routine that touches it, derive the type from the operand
   shape (element size from the scale, stride from the `lea` chain)
4. record in `docs/globals.json`, with the routines that support it
5. cross-check against `tools/globals_od.js --compare`, which must stay at 0 disagreements

A global typed from several routines is corroborated; one from a single routine is a
hypothesis. Say which in the record.

**Do not** type all 120 in isolation. Type a few, then recover a routine that uses them,
so each global is confirmed by code rather than merely described.

## Phase 5: the two structural questions

Only if the above finishes. Both are cheap and both close a question.

**5a. Can the linker place a data segment?** `0xf3e24` needs its grid at `0x77e90` and 24
of 25 bytes already match. `-offset` was rejected earlier; `-segment`, `-group`, `-order`
and `-databreak` were never properly tried. If any works, the 76 `base-fold` routines
become matchable at once.

**5b. Plan item 4h**, migrating the remaining eleven `ndisasm` sites. Mechanical, and it
removes the last text-parsing from the toolchain.

## What "done" looks like in the morning

Any of these is success:

- `0xe6a58` matched, or a recorded negative naming the cause
- more than 10 matched routines
- a repeatable lever that works on several `non-leaf` routines
- typed globals with a routine recovered from them
- the linker question answered either way

None of these requires "everything". A night that produces one new lever and three honest
negatives is worth more than a night that produces ten guesses.

## Recording

Every unit ends with: what was asked, what was done, what was claimed and which check
proved it, what is stale elsewhere. `node tools/sessionreport.js` first, then the report.
`docs/session-summary.md` is the running narrative of this phase.

## Outcomes of this run

The pipeline was verified (Phase 1): `0xe52c8` recompiles to MATCH in 13.6s, Capstone 5.0.7
confirmed. The decisive experiment (Phase 2) produced a negative with a named cause, and the
cause was not the one expected. Full write-up: `docs/nonleaf-relocation-ceiling.md`.

- **`0xe6a58` is `base-fold`, not non-leaf.** The census gives it `calls: 0` and
  `references 0x7a7d0`. It was never a valid test of non-leaf reachability, and its failure is
  the absolute-address blocker of `docs/base-fold-negative.md`, not register allocation.
- **The non-leaf blocker is call relocations.** Every `non-leaf` routine makes a call, and a
  call is `e8 <rel32>`, a link-time relocation. A single-file compile emits `00 00 00 00`,
  the game has the real displacement. Measured on four real wrappers, each compiles to the
  game's exact shape apart from those four bytes. Linking does not fix it: the callee lands at
  our layout's address, not the game's.
- **Phase 5a was already answered** in `docs/base-fold-negative.md`: no `386LINK` option places
  a data segment at a chosen absolute address in the flat model. Re-confirmed: link puts globals
  near address 0.

**The ceiling is now located.** Byte-perfect compile-and-diff matches only call-free,
absolute-free routines: the 14 `c-leaf`, of which 10 are done. The 307 `non-leaf` and 76
`base-fold` sets are blocked by link-time layout, which no source shape removes. Past the
leaves the goal must change from byte-matching to behavioural reconstruction.

**Stale after this run:** plan item 4j (closed), `docs/nonleaf-reopened.md` allocation framing
(superseded), and the `0xe6a58` non-leaf framing in this file and `docs/plan.md` (corrected).
