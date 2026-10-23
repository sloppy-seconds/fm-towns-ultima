# The tick: what was found, and what was not

Item 1b of the plan. `inside-a-turn.md` covers what happens when the player acts. **What advances between
actions** is food per move, torch burn-down, monster repopulation, day and night, shop restock, spawn timers.

This page records what the search established. It did **not** find the tick, and the negative is specific
enough to be worth more than the attempt cost.

## The threshold constants, which are real

Three comparisons against `FOOD` at `0xcde91` are thresholds rather than arithmetic, and all three are
exact:

| address | comparison | reading |
|---|---|---|
| `0xef27b` | `cmp eax,0x270f` | cap at **9999** when adding food |
| `0xf1fda` | `cmp [edx+0xcde91],0x32` | **50**, a warning threshold |
| `0xf301d` | `cmp [edx+0xcde91],0x3e8` | **1000**, a second threshold |

The 9999 cap agrees with `record-layout.md` and with `maxed_four.hdm`, where `FOOD=999900` in the roster,
which is 9999 in the game's fixed-point times 100. **That is cross-confirmation of an existing finding
rather than a new one**, but it is the first time the cap has been seen in code rather than in a save.

Two thresholds at 50 and 1000 are new. They are the starvation warnings, and they tell a reimplementation
that food is checked at fixed points rather than continuously.

## The food function, and why it is not the tick

`0xf5284` decrements `FOOD` by its argument with an underflow guard:

```
0xf5284   mov eax,[edx+0xcde91]
0xf52a1   sub eax,edi
0xf52a3   inc eax
0xf52a4   jg  0xf52ad          ; if (FOOD - amount + 1) > 0
0xf52a6   mov eax,0xffffffff    ; else return -1
0xf52bd   sub [edx+0xcde91],edi
```

**Nine callers, and all nine are UI routines:**

```
0xf5394  ending sequence
0xf1474  music
0xf55ac  fortune teller
0xf5748  ?
0xf58d8  ?
0xf5a1c  shop
0xf5ca4  ?
0xf5f00  ?
0xf6148  ?
```

So this is **spending** food, not consuming it per move. A shop taking payment and a fortune teller charging
are user actions. The tick would be one call site reached once per turn from the game loop, and this is not
that shape.

## The add function, and the same problem

`0xef25c` adds to `FOOD` with the 9999 cap. Three callers: `0xf2454`, `0xf2cc0` (the shrine) and `0xfcabc`.
None is the turn loop.

## The four functions that touch both food and torches

Searching every reference to `FOOD` and every reference to `TORCHES` and intersecting by owning function:

```
functions touching FOOD:    0xe91f0 0xe9f0c 0xeb354 0xec320 0xed7f0 0xef25c
                            0xf0c60 0xf0ea4 0xf0fcc 0xf1e8c 0xf2cc0 0xf5284
functions touching TORCHES: 0xe1ff8 0xe9f0c 0xec320 0xecf17 0xed7f0 0xf0ea4
                            0xf1474 0xf1d0c 0xf2be4 0xfcf70

shared: 0xe9f0c  0xec320  0xed7f0  0xf0ea4
```

**Four candidates, and reading them eliminated all four:**

| function | what it actually is | evidence |
|---|---|---|
| `0xec320` | **character initialisation** | writes every record field in sequence from `0xcde4c` to `0xcde72` |
| `0xf0ea4` | **spell handling** | clamps `MAGIC` to `99` then `75` |
| `0xe9f0c` | roster load path | reached from character select |
| `0xed7f0` | status panel | 21 calls to the print routines |

**Every one touches both fields because a status display reads them or an init writes them**, not because it
ticks them. That is the trap in an intersection search: two fields appearing in the same function does not
mean the function advances them.

## What the negative establishes

**The tick does not decrement `FOOD` or `TORCHES` directly.** Every direct reference is a threshold check, a
spend, an add, an init or a display. If a per-move decrement exists it is either:

1. **inside `0xf6ebc` itself**, which calls nothing that writes those fields, so the write would have to be
   a displacement this search missed. The reference search was by exact `disp32`, which would catch it.
2. **in a field that is not `FOOD`**, with the roster `FOOD` a display copy and the live counter elsewhere.
   The record layout was derived from the format string, so this is possible: the format string names
   persisted fields, and a live tick counter need not be persisted.
3. **driven by a timer rather than a turn**, so it is not per-move at all.

**Option 2 is the most likely and it reframes the item.** `0xcde56` appeared earlier as an internal field in
five routines that is not in the format string. A counter that resets on load would look exactly like that.

## What would settle it

**A savestate bracketing two moves.** Walk one step, save, walk another, save, and diff. A tick counter will
change by a constant; a display copy will not change at all. That is one artefact and it is the same one item
3a needs.

**This item is therefore blocked on Track B**, and that was not visible before the search. It was written as
`AUTONOMOUS` on the grounds that it is static reading. It is not: reading found every direct reference to the
two named fields and none of them is a tick.

> **FOUND AT RUNTIME: the tick is 15, and its trigger is not yet settled.**
>
> Three consecutive turns in a live fight, each with a player action:
>
> ```
> FOOD 37735 -> 37720 -> 37705     -15 each time
> ```
>
> A single west step with no other action left `FOOD` unchanged.
>
> **Those two measurements contradict each other and the contradiction was not noticed when both were written
> down.** If the tick were per turn, the step should have cost 15 as well. If it were per action, a step is an
> action. Something is wrong with one of them.
>
> Possible resolutions, none confirmed:
>
> - the step test took its "after" reading before the turn resolved, so the drain landed later
> - movement is free and the drain is per non-movement action
> - the drain is per **turn**, and the step reading missed it for a timing reason
>
> **`P)ass` is the clean test**, and the player suggested it. A pass is a turn in which the player does nothing,
> so:
>
> | result of one `P)ass` | conclusion |
> |---|---|
> | food falls 15 | the tick is **per turn**, and the step reading was wrong |
> | food holds | the tick is **per action**, and passing is free |
>
> 15 in the game's fixed point is 0.15 food.
>
> **CONFIRMED AT RUNTIME: food is not consumed per move.** Measured live: `FOOD=235` before a step and
> `FOOD=235` after. The static search below found only thresholds, a spend path and a display, and the
> runtime agrees. See [live-session.md](live-session.md).

## The honest state of item 1b

**Not done, and one plan assumption was wrong.** The item said the tick was describable as "what `0xf6ebc`
does that is not key-driven", which presumed the tick is inside the turn. The search says the tick is
probably not keyed to the turn at all, and not on the fields the roster names.

Recorded so the next attempt starts from a two-state diff rather than from another static search.

---

**[Inside a turn](inside-a-turn.md)** **[Record layout](record-layout.md)** **[Plan](plan.md)**
