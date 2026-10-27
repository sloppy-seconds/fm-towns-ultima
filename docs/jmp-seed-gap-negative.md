# The seed gap that was not there: a negative result

**Hypothesis: a class of functions exists that no seed set contains, because they cannot be reached
by `call rel32`. Tested and refuted.**

## Where the hypothesis came from

Reading plan item 5b's routines, three addresses turned out not to be function starts in the
recompiled output: `0xf6b5a` (the coordinate clamp), `0xf7742` (the edge-triggered map advance) and
`0xec4f0` (a character initialiser). None is in `docs/corpus.json`, the curated seed set, or the
derived seed set from `tools/seeds.js`.

The apparent conclusion was that the walk never found them, and that a whole class of code was
missing from the recompilation. That conclusion was wrong, and the way it was wrong is worth
recording because the check that refutes it takes one command.

## What was measured

**Refuting check: is the address contained in a function that IS in the set?**

| routine | address | status |
|---|---|---|
| coordinate clamp | `0xf6b5a` | inside `0xf6908`, offset +594 |
| edge-triggered map advance | `0xf7742` | inside `0xf7740`, offset +2 |
| character initialiser | `0xec4f0` | inside `0xec340`, offset +432 |

**7 of 7** routines read during 5b are inside recompiled functions. None was missing. Checking an
address against a list of function *starts* answers "is this a start", not "is this compiled", and
the two are different questions.

**Second check, of the hypothesis itself.** Every `jmp rel32` target in the image, filtered to those
inside the code band and outside the zero fill, that is not already a recompiled function:

| | count |
|---|---|
| `E9` targets in the band, outside zero fill | 681 |
| already a recompiled function | 14 |
| not a recompiled function | 667 |
| **distinct** among those | **315** |
| **of those, starting with `enter`, or with `push ebp` then `mov ebp, esp`** | **0** |

Zero of 315. They are loops and `switch` arms, which is exactly what a `jmp` target should be. A
function start needs a prologue and none of these has one.

**Third check, of the three addresses directly.** Searching the whole image for their little-endian
literal, and for any `E9` or `E8` pointing at them, returns:

```
0xf6b5a  literal occurrences: 0
0xf7742  literal occurrences: 0
0xec4f0  literal occurrences: 0
```

No reference by any mechanism. They are bodies of functions reached from their own prologues, which
the walk already had.

## What this rules out

**A seed gap caused by `call`-invisible function starts does not exist in this binary.** The
`49 percent` overlap between the derived seed set and the curated corpus, described in
[seed-sets.md](seed-sets.md), is not evidence of a hidden population. It is evidence that the
curated corpus contains addresses the `rel32` scan does not produce, and those are reached by other
means that the walk already follows.

Anyone proposing to raise coverage by scanning for more transfer opcodes should read this first. The
`E9` population is 681 targets, and its function-start yield is zero.

## What it does not rule out

The 366 conflicts are still real and are a separate defect: they mean some emitted bodies decode
data. Nothing here says the function set is complete, only that this particular mechanism for
extending it yields nothing.

## The lesson

A list of function starts is not a map of compiled code. Three addresses that were absent from the
start list were present in the output, and the check that would have said so was a range comparison
against the emitted set, not a membership test against the seed list. The wrong question was cheap
to ask and the right one was cheaper still.
