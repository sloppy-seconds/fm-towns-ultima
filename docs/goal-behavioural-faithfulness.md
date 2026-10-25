# Behaviourally faithful: the goal, stated, and what it retires

**The target is a game that behaves like Ultima II. It is not a rebuilt `ENCHANT.EXP`.**

That one sentence settles a set of questions this project had been carrying as open, and it changes
which work matters. This page records the decision and the consequences, so the same questions are not
reopened next month.

## What is now out of scope

### Byte-identical reconstruction of `ENCHANT.EXP`

Requires the original source for all 738 routines, the original link order, the original library builds,
and an MP container from `386LINK`. The first is 95 percent of the work and we are at 5.1 percent. Even
with all four, a single reordered object shifts every absolute address.

**Retired.** Not "later". Out, unless someone explicitly wants to reverse the build system, which is a
different project with a different goal.

### The MP versus P3 container question

Measured: `386LINK` with a bare `-exe` produces a `P3`-magic file, and `ENCHANT.EXP` is `MP` (header
verified: `pages=2095`, `lastPage=270`, `relocs=0`, arithmetic reproduces the file size exactly).

That was going to matter for level-2 and level-3 byte matching. **Both levels are now out of scope**, so
the container is a curiosity. `LINKLOC` is noted as the likely mechanism and left alone.

### The linker, for calibration

Routine-level calibration reads the `LEDATA` bytes out of an `.OBJ` and never links. Verified:
`plot.obj` has no `EXTDEF` and no `FIXUPP`, so its bytes are final.

**`386LINK` still matters** for the project's own harness, because compiling a whole reconstructed
program is how a behavioural reimplementation gets built. It does not matter for byte comparison.

### MP container fidelity, the Fujitsu BIOS layer, the Phar Lap loader

`docs/reimplementation-gap.md` already said this and it is worth restating under the new decision: these
are needed to understand the original, not to rebuild a game. A behavioural reimplementation does not
contain a Phar Lap loader.

## What is now in scope, and more important than before

The target is **rules as arithmetic**, in enough detail that the behaviour is reproducible. That makes
[reimplementation-gap.md](reimplementation-gap.md)'s four remaining categories the actual work:

| requirement | state | what "done" means |
|---|---|---|
| assets | mostly there | artwork and sound decode, and the files are enumerated |
| data tables | **partly there** | monster, item, spell, shop, town and NPC tables identified and read |
| game rules | **the hole** | combat, movement, time, magic and economy stated as arithmetic |
| control flow | not attempted | what drives a turn, and what drives the main loop |
| `WORLD*.UT2` | not understood | a save can be loaded and written |

**Level-1 calibration becomes more valuable than it was, not less.** Byte matching a routine is now a
*correctness check on a rule*, not a step toward a byte-identical binary. When a routine's arithmetic is
reproduced exactly and its emitted bytes match, the rule is almost certainly right. That is the strongest
confirmation available without playing the game.

## What this changes about how routines are documented

Under byte-identical reconstruction, every routine eventually needed reading and the order did not
matter much. Under behavioural faithfulness, **routines are ranked by whether a player can observe them.**

That reorders the work into what a player meets:

1. **create a character**: race, sex, profession, the stat rolls
2. **move and look**: map decoding, the tile grid, what blocks a step
3. **enter a town**: shop, tavern, guild, the NPC assignment table
4. **fight**: initiative, hit rolls, damage, monster stats
5. **buy and sell**: price tables, the equipment thresholds
6. **cast**: spell table, effects, reagent costs
7. **save and load**: `ROSTER1.UT2`, `WORLD*.UT2`

Anything not reachable from that list is a lower priority than it was, regardless of how interesting it
is. This is the same discipline `reimplementation-gap.md` asked for and it is now load bearing.

## What is explicitly not a shortcut

**A behavioural reimplementation is not a licence to guess.** The difference between it and a
byte-identical rebuild is what has to be *proved*, not what has to be *measured*:

- byte-identical: every instruction at every offset
- behavioural: every rule, as arithmetic, plus evidence it produces the observed behaviour

The second is less work but it is not less rigorous. The failure mode it invites is a rule that looks
right and is off by one, which is exactly the `0xcfe14` class of error this project keeps catching. The
mitigation is the same one that caught those: a check that can fail, and level-1 byte matching where the
routine is a leaf.

## The honest position

| | |
|---|---|
| routines named | see the count owned by [call-graph.md](call-graph.md), currently a low single-digit percentage |
| rules stated as arithmetic | a small fraction of combat, movement, time, magic, economy |
| data tables identified | character record, map geometry. Almost everything else open |
| saves | `ROSTER1.UT2` readable. `WORLD*.UT2` meaning unknown |
| **estimate to a playable reimplementation** | **months, and unevenly distributed** |

The infrastructure improved sharply today: compiling takes twelve seconds over HTTP instead of a session
of setup, and routine-level byte comparison works. That changes the cost of verification, which is the
bottleneck on reading routines. It does not change the number of routines left to read.

**The next lever is the call graph, not more tooling.** That was already the answer in
[reimplementation-gap.md](reimplementation-gap.md) and the decision to go behavioural confirms it rather
than overturning it.

## Related

- [reimplementation-gap.md](reimplementation-gap.md): the measured gap, and the five requirements
- [compiler-api.md](compiler-api.md): the verification instrument this decision leans on
- [plan.md](plan.md): the sequenced work
