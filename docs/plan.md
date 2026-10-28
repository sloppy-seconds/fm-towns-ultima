# Plan

Where the project is, what order the remaining work goes in, and how each piece of it finishes.

**The goal is behavioural faithfulness, not byte-identical reconstruction.** A game that plays like
Ultima II, from rules stated as arithmetic. That retires whole-image byte matching, the MP/P3 container
question and the linker-as-calibration-step. See
[goal-behavioural-faithfulness.md](goal-behavioural-faithfulness.md) for what that rules in and out.

Consequence for this plan: **routines are ranked by whether a player can observe them.** Anything not
reachable from create, move, town, fight, buy, cast, save is a lower priority than it was.

**And byte matching is conditional, not assumed.** It is a *diagnostic*, not a goal. A match says the
source is right for this compiler at these settings. A mismatch says one of four things, and only one of
them is "the C is wrong":

| what a mismatch means | how to tell |
|---|---|
| the C is wrong | varies with source shape, reachable by rewriting |
| a relocation placeholder | displacement is `00 00 00 00`, `FIXUPP` in the object |
| the address is not a function start | `node tools/preflight.js <addr>` |
| **the toolchain or settings are not the originals** | no source shape matches, over many routines |

That last row is the one to watch. If byte matching stops working across a *population* of routines rather
than a single stubborn one, the conclusion is that this High C build is not the one that made the game,
and the honest response is to stop byte matching and rely on behavioural evidence. It is not to grind.

This replaces an earlier version that was a list of open items with no sequencing. A list says what is
unfinished. A plan says what to do next and how to know it worked.

## The goal

**Reimplement Ultima II.** The extraction phase exists to build a strong enough corpus of data, assets
and rules that a reimplementation is a translation exercise rather than a guess.

Everything below is in service of that. [reimplementation-gap.md](reimplementation-gap.md) measures the
distance and is the honest scoreboard.

## Two tracks, and why the balance has to change

**Track A, static.** Reading `ENCHANT.EXP` and the asset files with no emulator. Deterministic,
scriptable, runs unattended. This is where nearly all progress has come from because it is the only
track anyone has worked.

**Track B, runtime.** Booting the game, taking savestates, measuring behaviour. Needs a human to press
keys.

**The balance is now the problem.** Of the four most recent questions, three ended in "this is outside
the executable" or "this needs a keypress":

| question | outcome |
|---|---|
| `cs:`-relative jump tables | table 1 works, table 2 needs the segment registers, which are not in the savestate in a findable form |
| the `0xEB` character mapping | the renderer hands bytes to TownsOS, so the mapping is not in the game at all |
| key to command mapping | the table keys are control codes, and which code the keyboard produces is runtime |
| the tick | not attempted, but every timer is a runtime quantity |

**The static vein is thinning.** What remains is mostly mechanical scaling of `tools/fnstrings.js`, which
is real work but not discovery. The high-value open questions have moved to Track B, and Track B has
never been attempted.

## What can be worked right now

Every item carries a state, an autonomy value and acceptance criteria. This table is the summary, derived
from the items below rather than maintained separately.

| item | autonomy | can an agent start it now |
|---|---|---|
| 1a Name the remaining routines | AUTONOMOUS | **done** |
| 1b Read the tick | BLOCKED ON INPUT | no, needs a two-state diff |
| 2a The high bits of a map cell | AUTONOMOUS | **yes**, but see the circularity |
| 2b Tile picture per `MAP2_*` value | AUTONOMOUS | not yet, held back by 2a |
| 3a One savestate during play | BLOCKED ON HUMAN | no, needs keypresses |
| 3d The savestate's falling addresses | AUTONOMOUS | **yes**, the states exist |
| 3b Which key is which command | AUTONOMOUS | **done**, the letter before the ) is the key |
| 3c The `0xEB` font | BLOCKED ON INPUT | no, and should not be opened |
| 4a The data tables | AUTONOMOUS | not yet, held back by 1a |
| 4b Combat formulas | BLOCKED ON HUMAN | no, neither half closed |
| 4c `WORLD*.UT2` layout | BLOCKED ON HUMAN | no, needs a save taken mid-game |
| 4d `.SND` playback rate | BLOCKED ON HUMAN | no, needs the running game |
| 4e Confirm the U2 palette in-game | BLOCKED ON HUMAN | no, needs a coloured screen |
| 4f Measure the byte-match rate | AUTONOMOUS | **yes**, the decompilation loop
| 4j Work the routine queue to empty | AUTONOMOUS | **yes**, the main grind |
| 4k The unlock ledger | AUTONOMOUS | **yes**, needed before 4j can be measured |
| 5a Character creation | AUTONOMOUS | **done**, modifiers read from the code |
| 5b Movement and torus wrap | AUTONOMOUS | **yes** |
| 5c Time gates and epochs | AUTONOMOUS | **yes** |
| 5d Towns and NPC assignment | AUTONOMOUS | **yes** |
| 5e Combat formulas | AUTONOMOUS | **yes** |
| 5f Shops and transports | AUTONOMOUS | **yes** |
| 5g Name the call graph | AUTONOMOUS | **yes**, mechanical |
| 6a One frame per tool, declared | AUTONOMOUS | **yes**, the table is measured |
| 6b What int 93h returns for AL=0x20 | AUTONOMOUS | **done**, measured off the machine |
| 7a Does the port's screen match the machine's | AUTONOMOUS | **yes**, both sides can dump |
| 7c What else the program patches at run time | AUTONOMOUS | **done**, one byte |
| 7d The indirect transfers the port meets next | AUTONOMOUS | **yes**, the rules exist |
| 7e A port regression the checks can run | AUTONOMOUS | **yes**, no emulator needed |

**Run `node tools/plancheck.js --todo` for the answer rather than reading this table.** At the time of
writing it reports twelve of twenty-seven startable now, with 2b and 4a held back by item order. That is
the honest answer to "what can an agent do tonight", and before the tool existed the answer had to be
assembled by reading nine paragraphs and hoping the prose was current.

The tool is authoritative and this prose is not, because the tool re-reads the items every time and the
prose does not.

**Four of nine items need a person, and that is a fact about the project rather than a failure.** Track B
has never run because keypresses must be explicitly requested, not because anything is missing. The
prerequisite table in Phase 3 shows every other piece is in place.

## Phase 1: finish the readable skeleton (Track A)

Cheap, mechanical, no blockers. Do this first because it removes the last excuse for not going to the
emulator.

### 1a. Name the remaining routines by string reference

**The named-routine count is owned by [call-graph.md](call-graph.md).** Re-derive it there rather than
quoting a number from here.

**State:** DONE · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | autonomous, and it is finished |
| done when | every routine with at least one readable string reference is named, and the count of routines with none is stated |
| blocked by | nothing |

**Done.** Of 738 call targets, **89 are real functions with a readable string and all 89 are now named.** Four
more addresses in the original list were data regions rather than functions and are recorded as such. 645
routines have no readable string and cannot be named this way.

The named-routine count is owned by [call-graph.md](call-graph.md).

**56 of the 93 remain unnamed** and they are listed explicitly rather than left as a search:

```
0xd3d 0xcfe14 0xd2b3b 0xd2ba5 0xd2e27 0xe1050 0xe17d8 0xe1b74 0xe1bd4 0xe1c04
0xe26b8 0xe2734 0xe2808 0xe3368 0xe3664 0xe77a4 0xe7ffc 0xe8140 0xe83ec 0xe8fa0
0xe9070 0xe9724 0xe9948 0xe9a94 0xe9e94 0xe9ed0 0xe9f0c 0xebe34 0xec154 0xec320
0xee770 0xef15c 0xef594 0xef720 0xf0ea4 0xf1b68 0xf1d0c 0xf1e8c 0xf25b4 0xf2cc0
0xf346c 0xf51f4 0xf5f00 0xf6660 0xf6bd0 0xf84a4 0xf8750 0xf8944 0xf8af4 0xf9f18
0xfabf4 0xfb25c 0xfbd24 0xfc4fc 0xfcabc 0x103850
```

Some of those are known in prose but not in the tables, such as `0xf2cc0` (the shrine/effect dispatcher) and
`0xf25b4` (stat gain). Several are data regions rather than functions, flagged by the boundary oracle. **This
item is a bounded list, not an open search.**



### 1b. Read the tick

**State:** OPEN · **Autonomy:** BLOCKED ON INPUT

**Partly answered by a live session.** Food is **not** consumed per move: `FOOD=235` before and after a step.
The static search found no per-move decrement and the runtime agrees. What still consumes food, and where,
is open. See [live-session.md](live-session.md).

| field | value |
|---|---|
| autonomy | was AUTONOMOUS. Reading every direct reference to FOOD and TORCHES found no tick, so it now needs a two-state diff |
| done when | each timer, its interval and its effect is named, or the two-state diff shows the counter is not on the fields the roster names |
| blocked by | a savestate bracketing two moves, which is the same artefact item 3a needs |

**Worked once and the plan assumption was wrong.** The item said the tick was describable as "what `0xf6ebc`
does that is not key-driven", which presumed the tick is inside the turn. **It is not.** Every direct
reference to `FOOD` at `0xcde91` and `TORCHES` at `0xcde62` is a threshold check, a spend, an add, an init or
a display. Full measurements and the four eliminated candidates are in [the-tick.md](the-tick.md).

That found three real constants on the way, which are new: **the 9999 food cap seen in code for the first
time**, and starvation thresholds at **50** and **1000**.

`inside-a-turn.md` covers what happens when the player acts. **What advances between actions is not
covered:** food per move, torch burn-down, monster repopulation, day and night, shop restock, spawn
timers.

A turn is now a known unit, so a tick is describable as "what `0xf6ebc` does that is not key-driven" and
checkable against the loop directly. Start from `0xf6ebc`'s callees that are **not** in the key dispatch
path, then the 33 unread `randMod` functions with the turn as a frame.



## Phase 2: the map, which is the last file-side unknown

### 2a. The high bits of a map cell

**State:** OPEN · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | autonomous, testable on file data alone |
| done when | the 8 group values and the 8 flag values are each given a meaning, or the correlation tests that would distinguish them are recorded negative with measurements |
| blocked by | nothing. The value space is now exactly known: `v = (group << 4) \| flag`, bits 0-2 flag, bits 4-6 group, bit 3 and bit 7 always zero |

**The value space is settled**, which makes this sharper than it was. Measured across the whole
`MAP2_1` payload and the runtime buffer: 62 distinct values, largest `0x77`, bit 3 never set in either
copy, and every group 0 to 7 carries flags. See [cell-encoding.md](cell-encoding.md).

That turns the question from "what are the high bits" into two separate questions with 8 answers each,
and 8 by 8 is small enough to enumerate rather than reason about.

**Worked once and did not finish, and it found a circular dependency.** The correlation tests are recorded
in [cell-fields.md](cell-fields.md) with their measurements: group equals flag in 75.3 percent of cells, the
two differ at terrain boundaries 91 percent of the time, and the disagreement is biased rightward. That
supports a reading where the flag is the current cell's terrain and the group is its right neighbour's, **but
it does not distinguish that from the trivial reading**, because the direct test of it returns the same 75.3
percent as the self-agreement. A test that cannot fail is not a test.

What would settle it is the tile loader resolving value to tile, which is item 2b, which needs this. **That
circularity was not visible before the work.**

**Second attempt, attacked together with 2b as the plan said.** It found the drawing chain rather than the
answer, and that narrows the gap: the tile grid at `0x77e90` is **64 by 64 of 16-bit indices**, plotted by
`0xf3e04` and blitted to a paged screen buffer by `0xe3d04`. Full chain in
[map-draw-chain.md](map-draw-chain.md).

**Still not done.** No routine was found that reads a `MAP2_*` cell and writes the corresponding tile index.
Two searches failed and are recorded: the screen page is not read back by any pixel-conversion routine, and a
64-entry pointer table search produced only false positives.

`v & 3` is terrain, established against a shuffle control. **The upper nibble has the largest
gain-over-shuffle of any field tested (+54pp)** and nobody knows what it carries.

Testable on file data alone: 256 rows by 128 columns, file supplies rows from 1,536.



### 2b. Tile picture per `MAP2_*` value

**State:** OPEN · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | autonomous, but only after the values mean something |
| done when | a page maps each of the 62 observed values to a tile picture, or states which cannot be resolved without runtime comparison |
| blocked by | 2a. Matching a picture to a number is meaningless until the number is known to select a tile |
| depends on | 2a |

**This item was previously written as NEEDS A DECISION**, on the grounds that automatic matching against
a rendered map and manual identification were two viable methods needing a choice. **That was a false
blocker.** Both artefacts already exist and `tools/tilesheet.js` already renders a labelled bank, so the
method question costs minutes rather than needing a decision. The real dependency is different and was
missed: there is nothing to match *to* until item 2a says what a value means.

`MAP2_*` uses 64 tile values. Which tile each name maps to is open, and it is extraction rather than
inference: the tiles render, so they can be matched against a rendered map.



## Phase 2b: a bot that plays the game

**The way out of the human bottleneck.** Every runtime measurement so far needed a person at the emulator.
A bot removes that, and the plan is in [gameplayer-plan.md](gameplayer-plan.md).

**Glyphs first.** `tools/u2read.py` measures the panels exactly but cannot read the characters, and nothing
downstream can be validated without readable text. This is one session and produces a reusable asset whether
or not the bot is finished.

Then the `waiting` flag, which is the highest-risk unknown, then walking, fighting and touring.

## Phase 3: go to the emulator (Track B)

**This is the phase that has never happened, and it is now worth more than another night of static work.**
**Procedure: [savestate-session.md](savestate-session.md)**, which is a run sheet with a command and a check
per step.

**Nothing is blocking it.** Checked at the time of writing:

| prerequisite | state |
|---|---|
| emulator vendored | `vendor/emulator`, `vendor/roms`, `vendor/freetownsos` all present |
| container image built | `localhost/u2-novnc`, 623 MB |
| driver tooling | `tools/container-run.sh`, `tools/debug-session.sh`, `tools/u2flow.py`, `tools/vncclick.py` |
| savestate tooling | `tools/statefind.js`, `tools/mirror.js`, `tools/savetext.py`, `tools/statesegments.js` |
| save-disk tooling | `tools/savedisk.js`, `tools/makesave.js` |

**The blocker is a policy, not a missing capability, and that distinction was not recorded before this.**
`container/supervisor.js` already exposes `POST /api/keys {text}` and drives the emulator with `xdotool`
against the `TSUGARU` window. Keypresses are mechanically possible right now.

What stops an agent is the standing rule in `AGENTS.md`: **every keypress has to be explicitly requested**
rather than decided by an agent. That rule exists for good reason, since a stray keypress can destroy a
save or skip past something being measured.

So Phase 3 needs a human to *authorise* the session, and after that the driver can run. It does not need a
human to sit and press keys one at a time. **That is a much smaller ask than "Track B needs a human", which
is how this was described for several sessions.**

### 3a. One savestate during play

**State:** OPEN · **Autonomy:** BLOCKED ON HUMAN

| field | value |
|---|---|
| autonomy | blocked by policy, not by tooling. `POST /api/keys` exists and works, but every keypress must be explicitly requested |
| done when | a state is captured, `statefind.js` and `mirror.js` run against it, and the segment registers, RNG seed, object record size and world contents are recorded |
| blocked by | a human starting a character and walking a few steps. Every keypress must be explicitly requested |

Not a menu. Start a character, walk a few steps, save state.

**This single artefact answers four open questions at once:**

- the **segment registers**, which settle the second jump table and the top-of-image mapping
- the **RNG seed** at `0xdfc78` while it is live, since both existing states are menus where the
  generator is never called
- the **object record size**, 57 or 69, because `0x7a7d0` is all zeros in both menu states
- the **world file contents**, because a played world is not blank and the current save has nobody who
  has entered the world



### 3d. Where the savestate's falling addresses come from

**State:** OPEN · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | autonomous. States already exist under `saves/analysis/` and `tools/statefind.js` reads them, so nothing here waits on a human |
| done when | either `stateAddress(o) = 0x4392d2 - o` is derived from the state container's own structure and shown to be a storage order, or it is shown to be something else. Whichever it is, `docs/mirrored-region.md` states it and `tools/stateread.py` applies the rule that holds |
| blocked by | nothing |

`docs/mirrored-region.md` measured that the top of the image is found at falling state-file addresses, and
read that as a memory layout. A live read contradicts the memory half: while the game ran, image offset `o`
read at `000C:(o - 0x200)` and matched `ENCHANT.EXP` at eight offsets from `0x200` to `0x10538E`, so the
region is contiguous in memory. The state windows also appear shifted by a few bytes rather than mirrored,
which points at the correspondence rather than the content. **The container's layout is unmeasured.**

This matters beyond one page: `tools/stateread.py` picks a rule by address, and the rule it picked was
established from the state file.



### 3b. Which key is which command

**State:** DONE · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | autonomous, and it needed no measurement at all |
| done when | the key for each command is known |
| blocked by | nothing |

**Done, and the item was misconceived.** There was never a mapping to discover: **the letter before the `)` is
the key.** `J)ump` is `J`, `K)limb` is `K`, `A)ttack` is `A`. The command bar documents its own bindings, which
is what a bar like that is for.

The full set is 25 commands in three columns, extracted from the binary at `save-files.md` 8.0.1.1.

**What remains separate, and is a design point rather than an unknown:** the dispatcher at `0xf6ebc` indexes a
ten-entry table by key minus one, and those keys are **control codes 1 to 10**. So movement is arrow keys and
letter commands reach a different path. The bot needs both routes, and both are known.



### 3c. The `0xEB` font, if it is wanted

**State:** CUT unless asked for · **Autonomy:** BLOCKED ON INPUT

| field | value |
|---|---|
| autonomy | needs an artefact that does not exist. A font search on the existing savestate failed, see below |
| done when | not defined, because the item is cut by default. See `eb-renderer.md` for why it is not needed |
| blocked by | a savestate plus the TownsOS font. Reopening needs a reason, not a method |

The renderer hands bytes to TownsOS. If the OS keeps glyphs in RAM, they are in the savestate and can be
read out.

**Explicitly optional.** [eb-renderer.md](eb-renderer.md) sets out why a reimplementation does not need
this. Do it only if the font shapes matter for their own sake.

**A font search on the existing savestate was attempted and failed.** The test looked for a region where
every 32 bytes is a 16x16 glyph with plausible ink and all adjacent glyphs differ, which is what a CJK font
in memory looks like. It found one candidate at state `0xa9200` with 511 of 511 adjacent glyphs distinct,
which looked promising and was **not a font**: rendered, the region is dense scattered noise with no letter
structure, which is what random data looks like. Recorded so the probe is not repeated.

So this item needs a state taken while the OS has a font loaded, which is the same artefact item 3a needs.

## Phase 4: the corpus a reimplementation needs

### 4a. The data tables

**State:** OPEN · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | autonomous, but depends on 1a naming the routines that index each table |
| done when | each table named in a routine has a page with its record layout |
| blocked by | nothing directly, but the order matters |
| depends on | 1a |

Monster stats, item properties, spell effects, shop inventories, town layouts. These are extraction work
and they are tractable once the routines that index them are named, which is what Phase 1 buys.

Four specific tables sit under this item and each has its measurement in
[open-questions.md](open-questions.md): the `ENEMY2` monster table and which creature each tile is
(question 2), the `DUNMON` bank sizes and what indexes them (question 4), the `UT3/*.MP3` and `*.DG3`
formats (question 6), and the item and spell tables which have no page yet.



### 4b. Combat formulas, stated as arithmetic

**State:** OPEN · **Autonomy:** BLOCKED ON HUMAN

| field | value |
|---|---|
| autonomy | was PARTLY AUTONOMOUS. The reading half also failed, so both halves now need more than static search |
| done when | to-hit and damage are stated exactly and marked read-versus-verified, or the page records why neither is reachable |
| blocked by | verification needs a controlled fight. The reading needs a method that is not a displacement search |

**Worked and neither half closed.** No routine that touches `HP` at `0xcde85` calls `randMod`, and no routine
touching `AGILITY` or `STRENGTH` does either. Eight HP references across six functions, all but one already
identified as init, save, load, status panel, tile interaction or publisher credit. Full measurements in
[combat-formulas.md](combat-formulas.md).

That search also caught a false attribution on `inside-a-turn.md`: `0xcfe14` was listed as the attack routine
and is 59 bytes of zero padding.

The RNG is understood and the record layout is known, so the formulas are readable. They cannot be
*verified* without a fight, which is why this sits after Phase 3.



### 4c. `WORLD*.UT2` layout

**State:** NEEDS A DECISION · **Autonomy:** BLOCKED ON HUMAN

| field | value |
|---|---|
| autonomy | needs a save taken mid-game, which requires a person at the emulator |
| done when | the record layout of a populated world file is stated, or the question is closed as unanswerable from available evidence |
| blocked by | any character having entered the world. All four in the only save are at `MAP=0`, `WORLD=0` |
| owner | [open-questions.md](open-questions.md) question 1 carries the measurement |

68,096 bytes each and all four byte-identical, because nobody in the only save has entered the world. The
measured shape is 128-byte rows, 24 dwords, six rows of data, with rows 0 and 1 a sorted/unsorted pair. That
reads as start-up scratch, not world state. See [world-format.md](world-format.md).

**The decision:** either take a mid-game save, or close this as unanswerable from available evidence. It
should not stay listed as merely "unread".

### 4d. `.SND` playback rate

**State:** OPEN · **Autonomy:** BLOCKED ON HUMAN

| field | value |
|---|---|
| autonomy | the rate is set at runtime by the EUPHONY driver, so the file cannot settle it |
| done when | the actual playback rate is measured, or the page states that only runtime can determine it |
| blocked by | a person listening to the running game, or a savestate of the driver state |

Whether 1960 Hz is real. The header layout is established ([sound.md](sound.md)), the rate is not in the
file. Small item, and it is the last unknown in audio extraction.

**Ranked low under behavioural faithfulness.** Nothing about how the game plays depends on it, so it
should not be picked up before the rules work in Phase 4b.

### 4f. Measure the byte-match rate across a population of leaves

**State:** OPEN · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | runs unattended via `tools/cserve.js` and `tools/preflight.js` |
| done when | at least 25 of the 33 Level-1 candidates are attempted and the match rate is recorded, or the run stops on the trigger below |
| blocked by | nothing |

**Why this is a plan item and not just tooling.** The whole question of whether High C 1.73 is the
compiler that built this game is currently answered by two routines. Two is not a population. A
mismatch on one routine has four possible causes; a mismatch on *most* of twenty-five has one.

The measurement: attempt 25 leaves, record match or cord per routine, and report the rate.

**Ordering, corrected.** The first version said smallest-first, which is the wrong choice for this
question. Smallest-first minimises degrees of freedom, which is right for a *toolchain check* but wrong
for a *useful* run: it spends the budget on 5-byte accessors called once. Order by caller count instead
(`tools/preflight.js --scan 25`), so the routines reconstructed are the ones a player can observe.
`0xf3e24` has 104 callers, `0xe9e2c` has 91, and both are now matched.

If the purpose ever narrows to "is this the right compiler at all", use `--by size` for a pure toolchain
probe where a 5-byte routine has almost no room to diverge.

**The stop condition, which is the real content of this item.** If fewer than 30 percent match, the
conclusion is that this toolchain is not the original and no amount of source-shape search will fix it.
At that point byte matching is abandoned as a verification method, the result is written up as a negative,
and the rules work proceeds on behavioural evidence only.

That outcome is a success, not a failure: it answers a question the corpus has been carrying since the
first calibration, and it costs a few hours rather than the months a wrong-toolchain assumption would.

**Known shape levers to try before calling a mismatch, from the experiment:** pointer type (byte versus
int), operand order in a `&&`, and `return p + 1` versus `p++; return p`. All three changed the output.

**The pool was 103 and is now 33.** That correction is worth reading before starting this item.
`tools/preflight.js` now asks a third question the first version did not: does the routine reference an
absolute address? A routine that does cannot be matched until it is linked, because the displacement is a
relocation that is `00000000` in the object. Two thirds of the leaf set was never attemptable, so a rate
measured across all 103 would have been a rate across a set that was mostly impossible by construction.
See [decompilation-experiment.md](decompilation-experiment.md) results 8 and 9.

**Every cord pull now carries a class** from `tools/cordclass.js`, so a run produces a table of causes
rather than a table of addresses. Read `node tools/cordclass.js <run.json>` after a run. A class marked
`structural` means stop attempting those routines; a class marked `addressable` means a lever exists and
`--explain <class>` names it.

### 4h. Migrate the remaining eleven `ndisasm` call sites to the shared decoder

**State:** OPEN · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | runs unattended; no emulator, no disc state, no interactive step |
| done when | every remaining site calls `tools/decode.js` (or Capstone directly, in Python), `PENDING` in `tools/checkall.js` is lowered to match, and `docs/corpus.json` is byte-identical after each census-critical tool is migrated |
| blocked by | nothing |

**What is done and what is not.** `tools/decode.js` exists, `docs/capstone-gate.md` proves it decodes
the code region identically to `ndisasm`, `tools/globals.js` is migrated as the worked example, and
`docs/tooling-policy.md` is enforced so no new violation can appear. **One of thirteen sites is
migrated.** The other eleven are this item.

**The eleven, and they are not equal in difficulty.**

| file | sites | risk |
|---|---|---|
| `trycands.py` | 1 | low. Python, so import Capstone directly |
| `dumpqueue.py` | 1 | low. Same |
| `findpal.js` | 1 | low, but the only shell-string invocation with `2>/dev/null` |
| `pharlap.js` | 2 | low. Uses `-e` to skip a header |
| `randmods.js` | 2 | low |
| `decompile-run.js` | 2 | low |
| `frameanalysis.js` | 1 | medium. Passes `-o` in decimal |
| `funcs.js` | 1 | **high. underpins the census** |
| `cfgwalk.js` | 1 | **high. underpins the census** |
| `sweep.js` | 1 | **high. underpins the census** |
| `preflight.js` | 1 | **high. underpins the census** |

**Order, and why it is this order.** Do the two Python sites first, because Python tools importing
Capstone directly is the intended end state and it establishes that pattern rather than the
Node-over-Python subprocess workaround. Then the five low-risk JS sites. Then the four census-critical
ones **one at a time, diffing `docs/corpus.json` after each**, because a change there is either a real
finding or a migration defect and those must be told apart before committing.

**`decode_agree.py` and `checkall.js` keep their `ndisasm` invocation deliberately.** The first is the
comparison harness and needs both decoders; the second greps for invocations to enforce the policy.
Deleting either would remove the ability to check the others.

**Failure case, stated.** If a census-critical migration changes `docs/corpus.json`, do not accept the
new file. Characterise the difference first: if it is a size or classification correction then the old
`ndisasm` path was wrong and the difference is a finding worth documenting; if it is a boundary shift
then the migration is at fault. The census is under an assertion precisely so this cannot be glossed.

See [tooling-policy.md](tooling-policy.md) and [capstone-gate.md](capstone-gate.md).

### 4i. Geartowns GL presentation, so the MCP debugger is usable

**State:** OPEN · **Autonomy:** BLOCKED ON HUMAN

| field | value |
|---|---|
| autonomy | needs someone to look at the noVNC view, and the container has no network for `dnf` |
| done when | the trilogy reaches a visible boot screen in noVNC, or the GL route is recorded as a negative and headless MCP is adopted instead |
| blocked by | the blocker is `SDL_GL_SetSwapInterval(1) failed` repeating with a frozen framebuffer |

The container builds, the FreeTOWNS ROMs load, the disc parses as 8 tracks, the BIOS
demonstrably executes (`CLI`, `CLD`, `OUT DX,AL` at `FC00:00000027`), and the MCP server
serves **106 tools** including `get_palettes` and `set_breakpoint`. What does not work is
presenting frames: two captures 15 seconds apart are byte-identical.

Eliminated already: Xvfb does advertise GLX; Mesa and `swrast_dri.so` are installed;
`SDL_RENDER_DRIVER=software` and `LIBGL_ALWAYS_SOFTWARE=1` change nothing because
Geartowns configures SDL itself; and it is not the debugger pausing, since `Debug = false`
and `PauseWhenInactive = false` were both set.

Four routes, in the order given in `docs/geartowns.md`: a Geartowns renderer or shader
setting; a real software GL stack such as `Xorg` with the dummy driver instead of Xvfb;
`--fullscreen` rather than `--windowed`; or abandon the picture and use headless MCP, which
takes no GL path at all.

**The last one is probably right.** The palette question needs `get_palettes`, not a
screenshot. The stdio client completes the handshake and `tools/list` but never gets a
`tools/call` response, and that is a bug in `tools/mcp-geartowns.py`, not in Geartowns.

### 4j. Work the routine queue to empty

**State:** OPEN · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | runs unattended via `tools/cc.sh`; no emulator interaction, no disc state |
| done when | every routine in the queue carries a status, the statuses sum to 738, and no routine is left `unattempted`. Recovered is `matched` plus `identical except disp32`. The run is not done at a count, it is done when the queue is empty |
| blocked by | nothing |

**This replaces the earlier "finish `0xe6a58`" framing, which was the wrong unit of work.** One
routine is not a plan. This item is the whole grind, and it exists because a previous run stopped at
one routine and wrote about it instead of continuing.

**Two recovery standards, both counted.** `matched` (bytes identical) and `identical except disp32`
(every byte agrees except the displacement of an absolute reference or a call `rel32`). The project
already recovers under both: `0xef548` and `0xef248` are `identical except disp32`. Counting only
byte-perfect matches excluded most of the queue by construction, because the non-leaf and base-fold
sets are defined by the very relocations that standard tolerates.

**The queue, worked in this order.**

| pass | set | count | why here |
|---|---|---|---|
| 1 | `c-leaf` plus the register's `unresolved` and `register-choice` | 14 + 3 | cheapest recoveries, and their lever may unblock a park |
| 2 | `base-fold`, smallest first | 76 | recoverable under the disp32 standard, wrongly treated as blocked before |
| 3a | single-call wrappers | several | logic fully determined by the callee list |
| 3b | `non-leaf` ≤64B | 118 | fewest degrees of freedom |
| 3c | remaining `non-leaf`, by caller count descending | 189 | a recovered callee unblocks its callers |
| 4 | globals, interleaved with the routines that use them | 120 (5 typed, 4 hardware) | each typed global feeds the unlock rule |

**Parking is a delay, not a verdict.** A routine that fails is parked with a named cause and re-enters
the queue when any of these happens: a lever is found on another routine, a global it references is
typed, a routine it calls is recovered, or the same cause parks three routines (which makes it a class
to investigate, not a routine to grind). **At the end of the night every parked routine is re-attempted
once** against the complete set of levers found during the night.

**Failure case, stated.** If a whole pass recovers nothing under either standard, do not write a page
about it and stop. Name the class, try the remaining angles listed in
[overnight-run.md](overnight-run.md), and move to the next pass. A pass that stalls is a row in the
queue summary, not a document.

See [overnight-run.md](overnight-run.md) for the per-routine loop and the angle list.

**Worked example, and the finding it produced.** `0xe6a58` was solved and its four differences from
the candidate were measured: an absolute base (`0x7a7d0`), a register-held parameter, an unsplit frame,
and split-store addressing. The first is the disp32 standard, so under this plan it is a recovery, not
a negative. The other three are levers to re-run against parked routines. Under the old plan this was
recorded as a closed negative and the queue stopped. See
[nonleaf-relocation-ceiling.md](nonleaf-relocation-ceiling.md).

### 4k. The unlock ledger

**State:** OPEN · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | runs unattended; a JSON file in `docs/` plus the re-attempt loop |
| done when | `docs/queue.json` exists, every attempted routine has a status and a cause when parked, and the end-of-night re-attempt pass has run and its effect is recorded |
| blocked by | nothing |

Item 4j needs a place to keep the per-routine status, or the grind is not measurable and "did the
unlock rule fire" is unanswerable. This item is that ledger.

**What it holds.** One row per routine: address, class, size, callers, status (`matched`, `identical
except disp32`, `parked`, `not-c`, `unattempted`), the differing bytes when recovered under the disp32
standard, the named cause when parked, the levers tried, and which unlock event returned it to the
queue.

**Why a file and not a paragraph.** `docs/routines.json` is the register of what has been *concluded*.
The ledger is the record of the *grind*, including the attempts that have not concluded. Separating
them means a parked routine does not pollute the register and a conclusion does not get lost in a
queue.

**The check that makes it worth having.** A small tool reads the ledger and reports: routines per
status, parked routines whose cause names a global or callee that has since been typed or recovered,
and the count of `unattempted` remaining. That report is the answer to "what can be worked right now"
for the decompilation track.

**Failure case, stated.** If the ledger is maintained by hand and drifts from `corpus.json`, the
counts will disagree and the unlock query will report false positives. The tool must derive class and
size from `corpus.json` and only store what it alone knows.

### 4l. Read the compiler's real toggle list

**State:** DONE · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | runs unattended through the existing compile channel; it needs no emulator interaction beyond a batch the serve already knows how to run |
| done when | the toggles `HCD386.EXE` accepts are listed from the kit itself rather than guessed, and `docs/leasib-flags-negative.md` is updated to say which names are refuted and which merely unknown |
| blocked by | nothing |

Item 4j's flag search produced a negative that is narrower than it first appeared, because this
compiler accepts an unknown toggle silently: an invented name and a real toggle that does not
affect the source are indistinguishable. The names tested that are not in MetaWare's own
`hc386set.cnf` line are therefore recorded as attempted rather than refuted, and the negative
binds only the `-O` family plus the two toggles proven live.

**The gap, measured.** Grepping every page for toggle names returns exactly five distinct
names, all from the one `HCDEBUG` line in `hc386set.cnf`: `optimize_xjmp`, `optimize_fp`,
`auto_reg_alloc`, `postpone_arg_pops`, `remove_bp`. The kit ships `hc386.cnf`, `hc386set.cnf`
and `config.exe` in `Q:\HC386\BIN`, and none of the three has been read.

**The route, which is already documented.** `docs/working-set.md` records that a guest-side
`COPY Q:\HC386\... C:\...` works, and `tools/cserve.js` already drives a batch file with
`xdoType` and `xdoKey` in its `link()` path. So this is a batch that copies the two `.cnf`
files to the floppy, then a read back through `getImageFile`. No new machinery is needed.

**Safety.** The batch writes two files to the compile floppy and deletes them, exactly as the
link path does today. It must not touch `saves/dos62v6.hdm` by hand; the cserve channel
already owns that image and its write path.

**Failure case, stated.** If `config.exe` turns out to be interactive-only, the `.cnf` files
still carry the defaults and are readable as text. If neither discloses the toggle names, the
negative stays scoped as it is and this item records that the list is not obtainable from the
kit rather than leaving the question open by omission.

**Resolution.** Read from the kit with the new `/api/probe` route. `hc386.cnf` is 2,098
lines of driver logic and names **43 toggles**; `hc386set.cnf` is the variable file. Every
real name was compiled in both senses against the `0xe3c58` body and **none produces the
target `lea`**. The `opt_sib`, `opt_addr`, `peephole` and similar names the earlier negative
tested are confirmed absent from the real list rather than merely unobservable. The address
model was also checked and `hc386.cnf` says "Only small model for 386", so there is no
memory-model switch to try. Two incidental findings are recorded: the kit ships
`ARGS=-native -HVp`, and `LINKNAME=386linkp.exp`, which explains the link failure in
`docs/bootable-dos-hdd.md`. Full write-up: [compiler-toggles.md](compiler-toggles.md).

### 4g. A bootable hard disk with the toolchain on it

**State:** OPEN · **Autonomy:** NEEDS A DECISION

| field | value |
|---|---|
| autonomy | partly. Building the image is mechanical, but the CD will not mount under the floppy boot and the route round that is a choice about the project's boot strategy |
| done when | either a bootable image with `HCD386.EXE` on a writable volume is produced and one compile runs with no floppy in the drive, or the page records why the CD-boot route cannot be made to work and the floppy stays |
| blocked by | `MSCDEX` failing to mount the CD under the DOS 6.2 floppy boot, so the compiler cannot be reached from there |

**Why it is on the list.** Every compile currently costs three floppy round trips and a
`FD0LOAD`, and each of those is a chance for the guest and the host to disagree about a live volume.
One of those disagreements produced a torn FAT and three separate misdiagnoses before it was found (see
[decompilation-experiment.md](decompilation-experiment.md) result 11). A compile path with no removable
media in it removes that whole class of failure, and removes the 700 ms writeback wait and the eject on
every operation with it.

**Why it is not started yet.** [compile-blocker.md](compile-blocker.md) records that both candidate
images lack DOS system files, so `C:` is a data volume rather than a DOS one and the CD's
`SHELL=C:\COMMAND.COM` cannot be satisfied. The obvious fix is to install DOS onto the image, which is a
change of approach rather than a fix. This is a decision, not a chore, and it should be taken before a
long run rather than in the middle of one.

### 4e. Confirm the U2 palette in-game

**State:** OPEN · **Autonomy:** BLOCKED ON HUMAN

| field | value |
|---|---|
| autonomy | `PRI PALETTE` works headless, but a person has to get U2 to a coloured screen first |
| done when | the palette read from the running game on a coloured screen is recorded, and either matches `docs/palette.md` 6.15 or is recorded as the real U2 table. Or the page states the 6.15 values are final |
| blocked by | a savestate of U2 showing a coloured screen, or a person driving the CD browser once |

**Why this is here and not in prose.** It was tracked only inside `AGENTS.md` and in two sections of
[palette.md](palette.md), using none of this plan's vocabulary, so nothing checked whether it was
live, stale or abandoned. Moving it here gives it a state and a checkable finish.

**What is already done.** `PRI PALETTE` was captured headless (`tools/debug-session.sh`) and returned a
16-colour table, recorded in [palette.md](palette.md) 6.15. Those values were read about 15 seconds into
boot and look like the BIOS default set rather than the game's own install.

**What remains, and it is one measurement.** Re-run `PRI PALETTE` once U2 is showing a coloured screen and
compare. If the table changes, that is U2's real palette and the index mapping is solved. If it does not,
the alternative is a breakpoint at `EGB_palette` (`0x103c84` in `ENCHANT.EXP`) catching `[edi+8]` when the
game installs its own. Everything needed is vendored and scripted.

**Why it matters for the corpus.** All current output is greyscale. Until this lands, every rendered asset
in `extracted/` is a documented limitation rather than a decoder bug.

## Phase 5: read the player's spine, as behavioural specs

The plan's goal section has always said routines are ranked by whether a player can observe them.
This phase is that ranking executed, and it is the main line of work from here.

**The method is read-first.** Compiling a candidate C is a diagnostic used when a specific question
about arithmetic or encoding needs settling, not the production step. The measurements behind that
decision are in
[goal-behavioural-faithfulness.md](goal-behavioural-faithfulness.md#how-the-work-is-done-read-first-compile-second).

**The finish line for a routine is a spec, not a byte match.** A programmer should be able to
reimplement it from its page without reading disassembly: inputs, the arithmetic as arithmetic,
outputs, and callers.

### 5a. Character creation, as arithmetic

**State:** DONE · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | runs unattended; the modifiers were read from the code and verified against four existing save files, no new characters needed |
| done when | the point allocation, the sex/race/profession modifiers and the starting inventory are each stated as arithmetic with their bounds, or the point at which a value becomes runtime-only is named |
| blocked by | nothing |

The first thing a player meets, and the first subsystem on the spine.

**Resolution.** The modifier arithmetic is now read from the code rather than measured, and the
model reproduces all four measured characters exactly. `0xed6e0` applies six `add [stat],` sums of
stack slots, and three branches write those slots: race at `0xecf07`, profession at `0xed3bb`, sex at
`0xed158`. That makes elf, dwarf, hobbit and thief known rather than unknown, since they come from
the same code.

| choice | STR | AGI | STA | CHA | WIS | INT |
|---|---|---|---|---|---|---|
| male | 0 | 0 | +10 | 0 | 0 | 0 |
| female | 0 | 0 | 0 | +10 | 0 | 0 |
| human | 0 | 0 | 0 | 0 | 0 | +5 |
| elf | 0 | +5 | 0 | 0 | 0 | 0 |
| dwarf | +5 | 0 | 0 | 0 | 0 | 0 |
| hobbit | -5 | 0 | 0 | +10 | 0 | 0 |
| fighter | +10 | +10 | 0 | 0 | 0 | 0 |
| cleric | 0 | 0 | 0 | 0 | +10 | 0 |
| wizard | 0 | 0 | 0 | 0 | 0 | +10 |
| thief | 0 | +10 | 0 | 0 | 0 | 0 |

**Allocation, also read from the code.** `0xec340` is the allocator: `mov esi, 0x1e` gives **30**
points to spend, `cmp edx, 0x19` caps each attribute at **25**, and `cmp eax, 0xa` floors it at **10**.
So one stat cannot take everything, because 25 absorbs at most 15 of the 30. **The cap of 25 was
confirmed interactively on the creation screen**, agreeing with the code. The 30-point budget and
the floor of 10 remain code-only.

**The 90 in `quickstart.md` and `save-files.md` is the total, not the budget.** Six attributes at
base 10 is 60, plus 30 to allocate is 90. Both numbers are right and the phrasing is loose rather
than wrong. Confirmed against the worked example there: entered 20, 15, 20, 15, 10, 10 sums to 90,
spends exactly 30 above base, and stays inside 10 to 25.

**`0xcde4d` is the points spent**, zeroed at `0xec34e` and required to be non-zero at `0xed632`
before the profession branch accepts, so the game will not let the player leave the allocation
screen having spent nothing.

**Caveat:** all four characters on `saves/modifier_test.hdm` were entered at exactly 10 each, so they
spent none of the 30. The allocation model rests on the `save-files.md` case and on the code, not on
a measurement of allocation itself, which is a weaker footing than the modifier table.

**Full write-up, including the invented premise this pass corrected:**
[creation-pass.md](creation-pass.md).

### 5b. Overworld movement, the step rule and the sector boundary

**State:** OPEN · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | runs unattended; every open question here is a static one. No new play sessions are needed unless a specific static question cannot be settled |
| done when | the routine that bounds `PLAYER_X` at 63 and changes the map id is named, the step rule and the blocking test are stated, and the viewport mapping from the 256 by 128 sector buffer to the 11 by 11 display is stated as arithmetic. Or each is shown to be unreachable statically, with the reason |
| blocked by | nothing |

**Corrected.** An earlier revision of this item said the wrap was arithmetic on a 16 by 16 grid. That
was wrong, and it contradicted what `docs/bot-plan.md` had already planned around. The `cmp 0xf` at
`0xef5b4` bounds a 16-wide **cell table**, not the world.

**What is established:** the wrap routine is **`0xf6b5a`**, read this session. For each axis
independently: if the coordinate is `>= 64` set it to 0, and if it is `< 0` set it to 63. That is a
torus of **64 in both axes**, which matches the 256 by 128 sector in `docs/map-geometry.md` being
sixteen sectors of 64 cells. The sector is **256 by 128 cells** of one byte each, 32,768 bytes. The
collision test is `0xfb41c`, which indexes a 16-byte cell table with `(x << 8) + (y << 4)`.

**Corrected again.** This item previously recorded that one step west from 0 gives 63 *and* the map
id (`0xcdf53`) changing 41 to 42, and then that the clamp could not explain the second half. Both
are now resolved. They are two independent pieces of code that happen to fire in the same turn
because the party is standing on an edge:

- `0xf6b5a` clamps each coordinate, `>= 64` to 0 and `< 0` to 63
- `0xf7742` calls `0xf1b48`, which does `MAP_ID += 1`, **only when `x == 0`, `x == 63`, `y == 0`
or `y == 63`** and the flag at `0xcdf57` is set

**The open questions, all static:**

- **what `0xf828c` does**, the loader the edge test calls. **Read.** It clears the flag at
`0xcdf57`, loads `0xcde99` through `0xf3e40`, then calls `0xefaac` on the eight neighbours of the
party. `0xefaac` is an object-at-position lookup over a **32-entry table** at `0xce3c8`, `0xce408`
and `0xce488`, returning `-1` when nothing is there. It is a mob or NPC adjacency check, not the
viewport.
- **the terrain geometry.** The lookup at `0xefaf4` indexes `terrain[y*64 + x]` at `0xbd578`, and
`0xbd578` is BSS. A stride of 64 conflicts with the 256 by 128 shape in `docs/map-geometry.md`,
because 32,768 bytes at a stride of 64 is 64 by 512. Either they are different buffers, or the
stride-64 index addresses a window, or one figure is wrong. **Not resolved.**
- **what `MAP_X`/`MAP_Y` (`0xcdf63`/`0xcdf67`) are**, given that `PLAYER_X`/`PLAYER_Y` are what the
clamp and the edge test use. All four are written by the same initialiser and neither meaning is
established.
- **the record base and stride.** The code computes `index * 95` at `0xec4f2`, but
`tools/fieldmap.js` puts the base at `0xcde54` from three agreeing anchors, and at that base the
initialiser's field run crosses a record boundary. Either the base, the stride, or the assumption
that those are per-character fields is wrong. Not resolved.
- **how the 11 by 11 viewport is derived from a 256 by 128 buffer.** The two are not one-to-one,
and the terrain conflict above has to settle first.
- **the food and turn counters**, which belong to the turn and to item 1b.

See [movement-wrap-found.md](movement-wrap-found.md).

**Method note.** The tempting next step is `bot-plan.md` P4, a savestate shape-match hunt for the
sector buffer's live address. That is the last resort, not the first: it derives a rule from watching
play. Every question above is answerable from the code, so it is attempted statically first. P4 stays
available for the buffer address if static work cannot pin it.

See [movement-and-wrap.md](movement-and-wrap.md).

### 5c. Time gates and the four epochs

**State:** OPEN · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | runs unattended |
| done when | the epoch switching rule and what gates it are stated, including whether the gate is a coordinate test, a map id, or an item check |
| blocked by | nothing |

### 5d. Towns, dungeons and NPC assignment

**State:** OPEN · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | runs unattended |
| done when | local map loading, the interior movement rule, and the NPC assignment table are read, with the table's stride and fields recorded |
| blocked by | nothing |

### 5e. Combat, as arithmetic

**State:** OPEN · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | runs unattended for the formulas; a live fight would need a person and is not required |
| done when | initiative, the hit test, damage, and monster stats are stated as arithmetic, each citing the routine that implements it |
| blocked by | nothing |

`docs/combat-formulas.md` and `docs/hp-and-damage.md` hold partial work. This item completes them.

### 5f. Shops, prices and transports

**State:** OPEN · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | runs unattended |
| done when | price tables, the gold checks, inventory mutation on buy/sell, and the board/disembark rules for ship, plane and time machine are stated |
| blocked by | nothing |

### 5g. Name the call graph above a caller threshold
**State:** OPEN · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | runs unattended; `tools/funcs.js` already produces the edges |
| done when | every routine with three or more callers has a provisional name, a one-line purpose and a link to its page, and the count is recorded |
| blocked by | nothing |

This is the skeleton a reimplementation needs and it is mechanical. `docs/call-graph.md` records the
current fraction.

**Progress, not completion.** Eleven routines are now named. The first six came from reading them
to their TBIOS handlers via `tools/tbios-read.js`: `0xe5854` (text out,
`docs/text-encoding.md`), `0xe5d90` (the display context, `docs/display-context.md`), and the
four-routine rectangle cluster `0xe5ff4`, `0xe6058`, `0xe60d0` and `0xe74ac`
(`docs/rectangle-cluster.md`). Five more came from strings once `tools/fnstrings.js` was fixed
and `0xEB` was solved: `0xeb374` (save and load), `0xebb90` (roster items), `0xe22f4` (sound
effects) and the eleven further routines the sweep grouped by handler (`docs/drawing-clusters.md`,
`docs/six-named-routines.md`).

**Two gates now carry more of this than the prose does.** `tools/triagesweep.js` groups all 41
TBIOS-calling routines by shared handler, so the clusters find themselves rather than being
noticed one at a time. And `0xEB` being solved means the 539 strings that were previously
unreadable now render, which unblocks naming every routine that references them.

Nothing here counts as satisfying the item, which asks for every routine with three or more
callers. **The threshold has now been counted, and the target was wrong.** "247" was a count of
call sites. Counting distinct caller functions, which is what the criterion says, there are **188**
routines with three or more callers. Of those, 65 have their address mentioned somewhere in `docs/`
and **123 are mentioned nowhere**, so the remaining work is 123 routines, not 247. The measurement
and the command are in [call-graph.md](call-graph.md).

The instrument for the residue is `tools/fnstrings.js --top` crossed with the 123-address list, since
that tool ranks by strings and the residue is by definition the routines that have none. The limit
is a body read per routine rather than anything the tooling is missing.

The cluster was worth more than four separate names. Reading them together produced the drawing
primitives a reimplementation needs, the screen geometry `0..639` by `0x18..0x1a7`, and a
correction to a stride that `text-encoding.md` had stated wrongly as 55 for want of a check.

## What is closed and should not be reopened

These have been tried, failed, and explained. Reopening them needs a new method, not a new attempt.

| item | why closed |
|---|---|
| `0xEB` character mapping inside the executable | the renderer passes bytes to TownsOS. It is not there. See [eb-renderer.md](eb-renderer.md) |
| `WORLD*.UT2` layout from the current save | all four characters are at `MAP=0`, `WORLD=0`. There is no populated world in the file. See [world-format.md](world-format.md) |
| the `0xe4086` switch table | three explanations ruled out, and it is one branch in a routine that already works |
| Ghidra as a way to *find* code | it agrees on every established address but under-decodes three to one without seeds. Use it to read, not to find |
| propagating `TMENU`'s names onto `ENCHANT` by byte probes | tried and measured: 54 "unique" probes, every one audited is mid-instruction or inside a string, and the count does not collapse when the probe is shifted. The two are different compilers' builds of different programs. See [name-propagation.md](name-propagation.md) |

## Method rules

Every one came from getting it wrong first, and the list is longer than it should be.

- **Byte-plausible is not verified.** Measure, and say what the measurement does not prove.
- **A layout that fits its anchor and drifts by one field is wrong and looks right.** Require three
  independent anchors to agree.
- **A fast tidy answer from a cache or a scan may be wrong.** The `cfgwalk` address cache gave a
  plausible rejection list and was dropping real sites.
- **Address arithmetic has produced six errors here.** An offset in the header-stripped image *is* a
  virtual address. The `disp32` of `2e ff 24 95` starts at **+4**, not +3. Parse displacements, never
  read them by eye.
- **Do not trust a search that assumes one base.** The top of the image is mirrored.
- **Do not trust a low `db` ratio as proof of clean disassembly.** `ndisasm` mis-decodes
  `ff 34 bd <disp32>`.
- **A partial edit is worse than no edit.** Twice this project left a sentence asserting a claim that a
  new paragraph had just retracted.
- **Docs go stale fastest in the session changing them.** Numbers in the plan were wrong one commit after
  being written, three times.
- **Record negatives.** A failed probe is worth as much as a success.
- **A correct measurement applied to the wrong population is this project's characteristic error.**
  Three times in one session: a raw byte count over a whole file reported as a signal, a signal
  measured on one binary and attributed to provenance, and a park noted without the source that
  produced it. Ask what the denominator is and whether the population is the one the question is
  about.
- **A park note must record the source that produced the mismatch.** Without it the park cannot be
  re-checked, and two `enter` parks in this session turned out to be false because the source shape
  was never written down.
- **An unknown cause does not licence tolerance.** `identical except disp32` is sound because those
  bytes are provably linker-supplied. A prologue mismatch with an unexplained cause is not the same
  thing and must not be filed as verified.
- **Never assume game behaviour. Validate it in the code, or ask Paul, before writing it down.**
  This is the strictest rule here and it has no exceptions. Every description of what the game does
  is either a quotation from code with the command that produced it, or it is marked unverified and
  not acted on.
  The incident: plan item 5a said character creation "rolls attributes from dice". That was invented.
  The game has the player allocate 90 points. The invented premise then sent the first attempt at
  the item looking for `randMod` call sites, and found monster spawn placement instead, which cost
  an hour and nearly produced a wrong page. A plausible sentence about a 1980s RPG reads exactly
  like a measured one, and nothing in the repository catches the difference.

## How this plan is kept honest

- `tools/verify.js` fails loudly if an established fact stops being true. 122 checks.
- `reimplementation-gap.md` carries the scoreboard and the named-routine count.
- `overnight.md` is the unattended queue, derived from this plan.
- Any number in this plan must be re-measured before being quoted, because three have already been wrong.

### 6b. What `int 93h` returns for `AL=0x20`

**State:** DONE · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | autonomous. It needed the emulator running, and the emulator trouble was accumulated debugger state rather than anything external |
| done when | the value the live machine leaves in DS:0x7a635 after start-up is recorded, and the `AL=0x20` case in the port's `int93` is either confirmed as `AH=0` or corrected. The failure case: the port is left with an unverified constant that changes which code path the program takes |
| blocked by | nothing |

**What is now known.** The return is measured, not chosen. At `000C:0E244D`, the instruction after the
first `int86(0x93)` call, the outregs struct at DS:0x7a634 holds:

| in | EAX | EBX | ECX | EDX |
|---|---|---|---|---|
| `AX=0x0220` | `0x00000020` | 0 | 0 | 4 |
| `AX=0x0720` | `0x00000000` | 1 | 1 | 0 |

`AH` is 0 in both, which is neither of the values the caller branches on, so the program takes the path that
consults two bits at DS:0x7a640 and then makes the second call. The port reproduces the second row exactly:
`U2_DUMP=47a634` after 3,000 frames prints `00 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00`, field for
field the live value.

Not assertable in `tools/verify.js`, because it needs the live machine rather than the disc. It is recorded
in [recomp-plan.md](recomp-plan.md) instead, with the breakpoint and the frame the reading was taken in.

## Phase 7: the port, which is the current line of work

The recompiled program runs under fmtownskit's machine. It completes start-up, opens its real assets and
survives 3,000 frames with no fault, which is the furthest this has ever got. Everything below moves that
forward, and nothing in Phase 7 may be swapped for Phase 1 to 5 work: the corpus items can wait, and a port
regression found late costs more than a routine page found late.

### 7a. Does the port's screen match the machine's

**State:** OPEN · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | autonomous. Both sides can produce a framebuffer without a human: the machine through the supervisor's screenshot endpoint, the port through a VRAM dump added to it |
| done when | the port emits its VRAM as an image or a hash, the machine's VRAM is read at a comparable point, and the result is stated as a match, a difference characterised by region, or a failure to produce one. The failure case it must catch: the port runs cleanly and draws nothing, which no frame count can see |
| blocked by | nothing |

This is the strongest validation available and it is the one that has never been attempted. Every check so far
counts guest clocks and faults, and a program can do both while writing the wrong pixels. The kit has a
palette and a CRTC; the machine has a screenshot endpoint; the port has the same memory the machine does, so
the comparison is two dumps and a diff.

### 7c. What else the program patches at run time

**State:** DONE · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | autonomous. Done without the emulator: the port diffs its own memory |
| done when | every byte of the code range that differs between the file and live memory is listed, and each is either explained by a named routine or recorded as unexplained. The `int` vector at guest `0x10241b` is the known one and must be recovered by the diff rather than assumed to be alone |
| blocked by | nothing |

**What is now known. Exactly one instruction byte in the image changes at run time**, after 24,000 frames:

```
patched   guest 0x10241b  00 -> 93
patched   522674 bytes differ, of which 1 are inside a decoded instruction
```

The mechanism is `U2_DIFF_CODE=1` on the port, with `U2_COVERAGE=<file>` from `tools/insncoverage.py`, which
runs the same walk with the same seeds and no-code ranges and writes each instruction's address and size. The
filter is what makes the answer visible: 522,674 bytes differ in total, almost all of it the program filling
its own zero-filled data, and one byte of it is code. The `int86` vector is recovered by the diff rather than
assumed, which was the acceptance test.

Scope, stated rather than implied: this is what the program did in 24,000 frames of emulated time. A site
reached later could still appear, and the check is now cheap enough to re-run after anything that changes how
far the port gets.

The `int86` routine writes the caller's vector into its own instruction, and the recompiler cannot see that.
One such site was found by tripping over it. If there are others, each is a latent port fault of the same
kind, and the diff is a page of work now against a debugging session later.

### 7d. The indirect transfers the port meets next

**State:** OPEN · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | autonomous. The recompiler already reports them, and three resolution rules are established |
| done when | each of the 30 unresolved transfers in the game module and the 67 in the TBIOS module is either resolved by a rule (a callback immediate pointing at a prologue, an address taken by `lea reg, [disp32]`, a measured seed) or shown to be unreachable, and the port's frame count before and after is recorded |
| blocked by | nothing |

**Progress, and what is left.** Two transfers were met by running and are now covered by rules rather than by
hand: the timer interrupt handler at `0x0fdde8`, which the prologue test rejected and which `lea reg, [disp32]`
finds, and the four hook pointers in its data segment, read live at DS:0xdea3c and recorded in
`tools/runtime-seeds.txt`. Frame 4,026 became 24,000 frames with no fault.

The rules found 6 address-taken functions, so the mechanism that was producing these is now understood. What
remains is the count: **30** unresolved in the game module against 26 before the seeds were added, because
more code decoded, and 67 in TBIOS. Each needs the same treatment or a recorded reason it cannot be reached.

### 7e. A port regression the checks can run

**State:** OPEN · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | autonomous. `checkall.js` already has the shape for it |
| done when | `node tools/checkall.js` fails if the port's known-good behaviour regresses, without needing the emulator, the disc or a recompile. Candidates: the seed count, the fact that the emitted module reads a patched vector, and the number of functions per module. The failure case: a check that passes when the port is broken |
| blocked by | nothing |

### 6a. One frame of reference per tool, declared and checked
**State:** OPEN · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | autonomous. The inventory is measurement over the tools that already exist, and nothing here waits on a human |
| done when | `docs/two-frames-of-reference.md` names the frame of every tool that emits or accepts an address, `node tools/cfgwalk.js --check` prints which frame it is answering in, and `tools/verify.js` asserts one known address resolving in each of the three. The failure case it must catch: a tool handed an address in the wrong frame answering plausibly instead of refusing |
| blocked by | nothing |

Three frames are in use and nothing declares them: raw file offsets, stripped (`file - 0x20`, which is
`cfgwalk.js` and `docs/call-graph.md`), and guest (`file - 0x200`, which is the running machine and the
recompiled modules). They are `32` and `480` bytes apart respectively, and the guest frame was the one
nothing was checking. The measurement is in
[two-frames-of-reference.md](two-frames-of-reference.md#a-third-frame-the-one-the-program-runs-in).

The cost of not declaring it, measured twice in one session: `cfgwalk --check` refused a real function
head because it was asked in the guest frame, and the instruction in `AGENTS.md` to verify addresses with
`--check` does not say which frame to use, so following it correctly is not possible from the text.

### 7f. Give the port a floppy drive

**State:** OPEN · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | autonomous. The image format is already implemented in `tools/savedisk.js`, the kit's DOS layer takes files through one object, and `saves/userdisk.hdm` is on disk |
| done when | `A:\ROSTER1.UT2` resolves for attributes and opens for reading in the port, the program's start-up takes the same branch as the machine at guest `0x0e259b`, and the port draws something. The failure case: a shim that answers the attribute query without serving the reads, which moves the failure one call later and hides it |
| blocked by | nothing |

This is where the port stops and it is not a code fault. The program probes `A:\ROSTER1.UT2` at start-up, the
port has no `A:` drive, the probe fails, and the program takes its "insert the disk, press the key" path and
waits forever. Every one of those 24,000 frames was an error dialog. `docs/recomp-plan.md` has the differential
trace that found it: 4,200 of the port's 4,216 executed addresses match the machine's, and the one that does
not is the `je` at `0x0e259b` that chooses between the error path and the rest of the game.

The work is a FAT12 reader behind the same interface the CD uses, driven by the `.hdm` image the machine mounts.
`tools/savedisk.js` already walks FAT12 and knows the keep-list quirks, so this is a translation rather than a
discovery.

---

**[Distance to reimplementation](reimplementation-gap.md)** **[Unattended queue](overnight.md)** **[All pages](index.md)**
