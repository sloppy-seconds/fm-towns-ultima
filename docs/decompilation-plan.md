# Plan: an agentic loop that runs until the Andon Cord is pulled

How to run the Level-1 reconstruction loop unattended. The strategy is
[decompilation-loop.md](decompilation-loop.md); the evidence behind the numbers
is [decompilation-experiment.md](decompilation-experiment.md).

## The one-sentence version

An agent picks a leaf from the 103 candidate queue, drafts C, compiles it through
`tools/cserve.js`, compares the bytes, and either records a match or pulls the
cord, then moves to the next routine. It stops when the queue is empty or when
its own failure rate trips a threshold.

## State it needs to keep

A single JSON file, `analysis/decompilation-queue.json`, gitignored because it is
derived. One record per candidate:

```json
{
  "addr": "0xe662c",
  "bytes": "8b 44 24 04 0f bf 40 36 c3",
  "length": 9,
  "callers": 12,
  "state": "matched",
  "attempts": 2,
  "bestC": "int f(char *p) { return *(short *)(p + 0x36); }",
  "note": "int pointer fails; char pointer folds the displacement",
  "cordPulled": null
}
```

`state` is one of `pending`, `matched`, `cord-relocation`,
`cord-timeout`, `blocked`.

## The loop

```
1. select     next pending candidate, smallest first
2. disassemble  read the bytes, decode to instructions
3. draft      write C that would produce those instructions
4. compile    POST /api/compile
5. compare    bytes equal?
              ├─ yes → record matched, bestC, continue
              └─ no  → diagnose
6. diagnose   is the difference a source-form signal?
              ├─ pointer type / displacement folding → vary the type, retry (≤4)
              ├─ instruction count identical, registers differ → Trigger 2, cord
              ├─ displacement is 00 00 00 00 → Trigger 1, cord
              └─ none of the above → retry until 20 minutes elapsed
7. cord       record everything, move on
8. repeat     until queue empty or the stop condition below
```

## Stop conditions

The loop halts and writes a report when any of these is true. They exist so it
cannot grind for hours producing nothing.

| condition | threshold | why |
|---|---|---|
| queue exhausted | 0 pending | normal completion |
| consecutive cord pulls | 5 | the source-form lever has stopped working |
| match rate over last 20 | under 20 percent | the approach has stopped paying |
| compile API failing | 3 consecutive errors | the instrument is broken, not the C |
| wall clock | 4 hours | unattended ceiling |

The **consecutive-cord** rule is the important one. A run that starts matching
and then stops is telling you the remaining routines need a different technique,
and continuing burns the budget without learning anything.

## What the agent must record for every attempt

Non-negotiable, because the value of this loop is the *differences*, not the
matches:

- the exact C that matched, or the closest attempt
- the emitted bytes versus the target
- which source-form variation changed the outcome
- for a cord: which trigger, and the evidence for it

A match with no recorded C is worthless. A cord pull with no recorded diagnosis
is a routine that gets retried next run.

## Escalation: when to ask a human

The loop should stop and ask rather than guess in three situations:

1. **A cord fires on a routine a plan item names.** If the routine is on the
   reimplementation path, a human decides whether to accept the state-diff
   substitute.
2. **Two candidate C fragments both match.** That means the bytes do not
   determine the source, which is worth knowing.
3. **A routine is a leaf but the disassembly does not make sense.** That is
   either a bad boundary or a data-in-code region, and both are human calls.

## What this plan does not do

- **It does not verify behaviour.** Level-1 matching is a proxy. A byte match
  means the source is right for this compiler; it does not test that the game
  behaves correctly. That needs the harness discussed in
  [decompilation-loop.md](decompilation-loop.md), which does not exist.
- **It does not name the routines.** 103 leaves can be matched without knowing
  what any of them does. Naming is separate work and the call graph already
  provides the tooling.
- **It does not reach the game.** 103 matched leaves is a demonstration that the
  method works, not progress toward a playable reimplementation. The rules work
  in [plan.md](plan.md) Phase 4 is where the game comes from.

## Why do the leaves at all, if they are not the game

Three reasons, and they are all about the method rather than the corpus:

1. **They prove the instrument.** 103 routines is enough to measure a match rate
   honestly and see whether it holds up past ten bytes.
2. **They are the largest set where Level-1 can succeed at all.** Every non-leaf
   relocates.
3. **They produce the source-form dictionary.** Which pointer types fold
   displacements, which idioms the compiler picks. That dictionary is the thing
   that makes a framed routine tractable later.

## Deliverables

| artefact | location |
|---|---|
| the queue with per-routine outcomes | `analysis/decompilation-queue.json` |
| a run report per session | `analysis/decompilation-run-<date>.md` |
| matched source appended to a corpus file | `analysis/matched/<addr>.c` |
| any correction the run forces | `docs/`, as a measurement with its command |

## The honest ceiling

If the loop matches 70 of 103 leaves, that is a working method and a
source-form dictionary. **It is not a game.** Saying otherwise would be the same
overclaim this project has been bitten by twice already.

What it would license is the next step: attempting framed routines with the
dictionary in hand, and deciding from that data whether a behavioural
reimplementation is tractable or whether the rules work has to proceed without
byte confirmation.

## Related

- [decompilation-experiment.md](decompilation-experiment.md): what was run and
  what it found
- [decompilation-loop.md](decompilation-loop.md): the strategy and the Andon Cord
- [compiler-api.md](compiler-api.md): the instrument this drives
- [plan.md](plan.md): where the rules work sits relative to this
