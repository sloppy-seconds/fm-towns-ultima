# Plan

Where the project is, what order the remaining work goes in, and how each piece of it finishes.

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
| 1a Name the remaining routines | AUTONOMOUS | **yes** |
| 1b Read the tick | AUTONOMOUS | **yes** |
| 2a High bits of a map cell | AUTONOMOUS | **yes** |
| 2b The 64-tile vocabulary | NEEDS A DECISION | choose the matching method first |
| 3a One savestate during play | BLOCKED ON HUMAN | no, needs keypresses |
| 3b Which key is which command | BLOCKED ON HUMAN | no, needs keypresses |
| 3c The `0xEB` font | CUT unless asked | no, and should not be opened |
| 4a The data tables | AUTONOMOUS | not yet, held back by 1a |
| 4b Combat formulas | PARTLY AUTONOMOUS | the reading only. Verification needs a fight |

**Run `node tools/plancheck.js --todo` for the answer rather than reading this table.** At the time of
writing it reports four items startable now: 1a, 1b, 2a and 4b, with 4a held back because it depends on
1a. That is the honest answer to "what can an agent do tonight", and before the tool existed the answer
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

**State:** OPEN · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | autonomous, no human input needed |
| done when | `call-graph.md` names every routine with at least one readable string reference, and states how many have none |
| blocked by | nothing |

**The named-routine count is owned by [call-graph.md](call-graph.md).** Re-derive it there rather than
quoting a number from here. `tools/fnstrings.js --top N` ranks candidates by string count and the technique
takes seconds per routine. Most of the remaining 700 are glue with no strings and can be skipped
honestly rather than named by guess.



### 1b. Read the tick

**State:** OPEN · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | autonomous, no human input needed |
| done when | `inside-a-tick.md` names each timer, its interval and its effect, or records that it could not be determined statically |
| blocked by | nothing |

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

`v & 3` is terrain, established against a shuffle control. **The upper nibble has the largest
gain-over-shuffle of any field tested (+54pp)** and nobody knows what it carries.

Testable on file data alone: 256 rows by 128 columns, file supplies rows from 1,536.



### 2b. Tile picture per value

**State:** OPEN · **Autonomy:** AUTONOMOUS once 2a lands

| field | value |
|---|---|
| autonomy | autonomous, but only after the values mean something |
| done when | a page maps each of the 62 observed values to a tile picture, or states which cannot be resolved without runtime comparison |
| blocked by | 2a. Matching a picture to a number is meaningless until the number is known to select a tile |

**This item was previously written as NEEDS A DECISION**, on the grounds that automatic matching against
a rendered map and manual identification were two viable methods needing a choice. **That was a false
blocker.** Both artefacts already exist and `tools/tilesheet.js` already renders a labelled bank, so the
method question costs minutes rather than needing a decision. The real dependency is different and was
missed: there is nothing to match *to* until item 2a says what a value means.

`MAP2_*` uses 64 tile values. Which tile each name maps to is open, and it is extraction rather than
inference: the tiles render, so they can be matched against a rendered map.



## Phase 3: go to the emulator (Track B)

**This is the phase that has never happened, and it is now worth more than another night of static work.**

**Nothing is blocking it.** Checked at the time of writing:

| prerequisite | state |
|---|---|
| emulator vendored | `vendor/emulator`, `vendor/roms`, `vendor/freetownsos` all present |
| container image built | `localhost/fmtowns`, 911 MB |
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

**State:** OPEN · **Autonomy:** BLOCKED ON HUMAN

| field | value |
|---|---|
| autonomy | blocked by policy, not by tooling. The same `POST /api/keys` endpoint drives it |
| done when | `command-dispatch.md` maps each key code to a command |
| blocked by | a human pressing keys one at a time, with each press requested rather than decided |

Press a key, see which handler runs. The dispatch table is known (ten entries, index is key minus one,
`0xd460c` holds the key), so this is a mapping exercise rather than a search.



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

**State:** OPEN · **Autonomy:** AUTONOMOUS once Phase 1 lands

| field | value |
|---|---|
| autonomy | autonomous, but depends on 1a naming the routines that index each table |
| done when | each table named in a routine has a page with its record layout |
| blocked by | nothing directly, but the order matters: 1a first |

Monster stats, item properties, spell effects, shop inventories, town layouts. These are extraction work
and they are tractable once the routines that index them are named, which is what Phase 1 buys.



### 4b. Combat formulas, stated as arithmetic

**State:** OPEN · **Autonomy:** PARTLY AUTONOMOUS

| field | value |
|---|---|
| autonomy | the reading is autonomous, the verification is not |
| done when | to-hit and damage are stated exactly and marked read-versus-verified |
| blocked by | verification needs a controlled fight, so this closes in two halves |

The RNG is understood and the record layout is known, so the formulas are readable. They cannot be
*verified* without a fight, which is why this sits after Phase 3.



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
