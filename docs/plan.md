# Plan

Where the project is, what order the remaining work goes in, and how each piece of it finishes.

**The goal is behavioural faithfulness, not byte-identical reconstruction.** A game that plays like
Ultima II, from rules stated as arithmetic. That retires whole-image byte matching, the MP/P3 container
question and the linker-as-calibration-step. See
[goal-behavioural-faithfulness.md](goal-behavioural-faithfulness.md) for what that rules in and out.

Consequence for this plan: **routines are ranked by whether a player can observe them.** Anything not
reachable from create, move, town, fight, buy, cast, save is a lower priority than it was.

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
| 3b Which key is which command | AUTONOMOUS | **done**, the letter before the ) is the key |
| 3c The `0xEB` font | BLOCKED ON INPUT | no, and should not be opened |
| 4a The data tables | AUTONOMOUS | not yet, held back by 1a |
| 4b Combat formulas | BLOCKED ON HUMAN | no, neither half closed |
| 4c `WORLD*.UT2` layout | BLOCKED ON HUMAN | no, needs a save taken mid-game |
| 4d `.SND` playback rate | BLOCKED ON HUMAN | no, needs the running game |
| 4e Confirm the U2 palette in-game | BLOCKED ON HUMAN | no, needs a coloured screen |

**Run `node tools/plancheck.js --todo` for the answer rather than reading this table.** At the time of
writing it reports four of eleven startable now: 1a, 1b, 2a and 4b, with 4a and 2b held back by item order. That is the honest answer to "what can an agent do tonight", and before the tool existed the answer
had to be assembled by reading nine paragraphs and hoping the prose was current.

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

## What is closed and should not be reopened

These have been tried, failed, and explained. Reopening them needs a new method, not a new attempt.

| item | why closed |
|---|---|
| `0xEB` character mapping inside the executable | the renderer passes bytes to TownsOS. It is not there. See [eb-renderer.md](eb-renderer.md) |
| `WORLD*.UT2` layout from the current save | all four characters are at `MAP=0`, `WORLD=0`. There is no populated world in the file. See [world-format.md](world-format.md) |
| the `0xe4086` switch table | three explanations ruled out, and it is one branch in a routine that already works |
| Ghidra as a way to *find* code | it agrees on every established address but under-decodes three to one without seeds. Use it to read, not to find |

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

## How this plan is kept honest

- `tools/verify.js` fails loudly if an established fact stops being true. 122 checks.
- `reimplementation-gap.md` carries the scoreboard and the named-routine count.
- `overnight.md` is the unattended queue, derived from this plan.
- Any number in this plan must be re-measured before being quoted, because three have already been wrong.

---

**[Distance to reimplementation](reimplementation-gap.md)** **[Unattended queue](overnight.md)** **[All pages](index.md)**
