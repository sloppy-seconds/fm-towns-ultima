# The bot plan

A plan for the program that plays Ultima II, so that runtime measurement stops needing a person at the
emulator. This is a separate plan from [plan.md](plan.md): that one is about extracting the game, this one is
about a program that drives it. They share a blocker or two and nothing else.

**Read [bot-build.md](bot-build.md) first** for what already exists and works. This page is what remains.


## The goal, and what "done" means

A bot that can be sent into the game with a posture and left alone: it explores, fights or flees according to
its health and hunger, remembers the world as it goes, and reports what it found. Not a bot that finishes the
game. A bot that **answers questions no human wants to sit through**, which is the same bar `plan.md` sets for
extraction: a fact nobody can reproduce is not part of the corpus, and the bot is how the runtime facts get
reproduced.

The end goal is still reimplementation. The bot is an instrument for that, not a product.


## What already works, so the plan does not re-propose it

| command | verified |
|---|---|
| `state` | nine fields, matches the status bar |
| `prompt` | red-bar text detection, 29x separation |
| `press`, `walk`, `pass` | arrows via `/api/key`, letters via `/api/keys` |
| `survey` | square pattern, stops on damage |
| `discover` | probes neighbours, returns to origin |
| `tracker` | explores, logs real kills (`exp +3`, `exp +4`) |
| `personality` | derived posture, lockable by file |
| `record`, `tail` | JSON transcript with screenshot and CPU state |

Two failures are also recorded and must not be repeated: **sensing every cycle** made the bot stand still
attacking air, and **keying blocked squares on the map field** filed every square under an id that never
recurred, because that field counts turns.


## Borrowed from the U3 TypeScript rebuild, and deliberately not

`references/u3-typescript/web/src/game/` contains a headless player harness and an auto-combat planner. They are
**U3**, and U3 is not U2. The line between the two has to be drawn once, here, so nobody later mistakes a U3
constant for a U2 fact.

**Borrowed, as shape:**

| idea | source | why it transfers |
|---|---|---|
| `DECIDE` returns keys and never mutates state | `autocombat.ts` | makes the policy testable and replayable |
| priority list of conditions, not continuous scores | `autocombat.ts` | this is the corrected form. A score-based derivation inverted health bands |
| `VIEW_SIZE = 11`, `VIEW_CENTRE = 5` | `viewport.ts` | independent corroboration of the 11x11 centred viewport |
| a cell is `base` terrain plus optional `overlay` | `viewport.ts` | terrain stays clean while a monster stands on it |
| seeded replay for unattended runs | `tools/sim/fuzz.ts` | a run that cannot be replayed produced no evidence |
| thresholds scale with max HP | `autocombat.ts` | the Mac's flat 50 was wrong for a 100 HP character, and the comment says so |

**Deliberately not borrowed:**

| U3 thing | why not |
|---|---|
| four party members, class divisions | U2 is a single character |
| keypad digits `1`-`9` for direction | U2 uses arrow keys, and the console `TYPE` escape path does not produce them |
| `Repond`, `Pontori`, spell tables | different game |
| `placeMoongates()`, moon phases | U3's gate table is in a U3 resource file. U2's roster carries `GATE_X` and `GATE_TIME`, which is a different mechanism |
| `Starving: 184` message number | U2 may handle hunger differently |
| `GameIO` fake screen | U2's bot has no `GameIO`: it has an HTTP API and a heartbeat |

The rule: **shape transfers, mechanics must be derived from U2 and measured.** Every constant in the bot is a
U2 constant or is labelled a policy.


## Prerequisites, which block everything else

These five are measurement, not code. Every later item keys on them, so they come first.

The two that matter most are **P4** and **P1**, because between them they decide how the bot knows where it is
and where it is not. P4 finds the sector in memory, which the player chose over screen sampling because a cell
value is exact and a colour class is a guess. P1 finds the `ERA` and `WORLD` offsets, without which a map memory
cannot distinguish a town square from an overworld square at the same coordinates.

P2, P3 and P5 unblock items rather than phases: a starvation rate for the hunger policy, a corrected tick page,
and a measured choice of per-turn OBSERVE.

### P1. Live offsets for `ERA` and `WORLD`

**State:** OPEN · **Autonomy:** AUTONOMOUS

`roster-reference.md` puts `ERA` at index 24 and `WORLD` at index 85, from the printf format string. That
string is ground truth for a **save file** and not for memory: `save-vs-memory.md` records a four-byte shift
between `GOLD` and `MAP`, and the field the docs called `MAP` turned out to count turns.

| | |
|---|---|
| done when | both offsets are confirmed against live memory **and** the game's own display or a measurable behaviour change, with the method recorded, or the item states plainly that they could not be confirmed and why |
| failure case | an offset that agrees with the format string alone. That has passed three times while being wrong |

### P2. What food zero does to HP, and how fast

**State:** OPEN · **Autonomy:** PARTLY AUTONOMOUS

The player states that at food 0, HP is consumed. `the-tick.md` measures the drain at 15 per turn and nothing
measures starvation. `FOOD` is at `0xcde8d`, stored times 100, so a displayed `371` is 37,150 and 15 per turn
means about 2,470 turns to empty.

This is partly autonomous: a save can be generated with `FOOD=0` by `tools/saves.js`, which needs no keypresses.
Confirming the HP drain needs a few turns of play.

| | |
|---|---|
| done when | the HP loss per turn at zero food is a number, or the item records that no HP loss was observed and over how many turns |
| failure case | reporting "starves" without a rate. A policy needs a rate, not a verb |

### P3. Fix the contradiction in `the-tick.md`

**State:** OPEN · **Autonomy:** AUTONOMOUS

The page asserts "the tick is per TURN" and later "CONFIRMED AT RUNTIME: food is not consumed per move". Both
cannot hold for the same field. Every bot run shows `-15` on every step including blocked ones, which supports
per turn. The later claim is stale and needs a correction banner rather than deletion, per the project's rule
that superseded claims are marked, not removed.

| | |
|---|---|
| done when | one reading survives, the other carries a correction banner saying what it was and what displaced it |
| failure case | deleting the wrong sentence quietly |


## Phase 1: perception

The bot cannot presently answer "what is around me". It knows which squares refused it and which it has stood
on. That is not a viewport.

### P4. Find the sector buffer's live address

**State:** OPEN · **Autonomy:** AUTONOMOUS

The bot needs to know what is around it. There are two ways to observe: a screenshot with colour sampling, or a
memory read of the loaded sector. **The player's decision is to find the memory and use that**, because it gives
true cell values rather than coarse colour classes, and because the tile alphabet problem disappears when the
value is exact.

**The buffer is known to exist and its shape is measured.** `map-geometry.md`: a 32,768-byte buffer, exactly
256 by 128. The file supplies the last 31,232 bytes and the first 1,536 (`128 x 12`, twelve rows) are generated
at load. That is one sector, which matches the player's reading that only the current sector is resident.

**It has already been found once, by the method that should now be repeated.** `assets-and-graphics.md` §5.2.1
located the loaded payload in a savestate, matched **100 percent** of all 31,232 bytes, and confirmed it with
twelve independent high-entropy slices. So the buffer is real and locatable. What is missing is a **live flat
address**, because savestate offsets and flat addresses have different bases.

**Every earlier failure was inference, not measurement.** Those attempts are recorded and must not be repeated:

the bit-3-clear signature search, which returned about 120 false candidates because any page with the right
value distribution matches

a flat address guessed as a fixed offset from the record base, which ignores that the two live in different
segments

a 16-byte `FIND` probe, which missed

**The method, which is a SHAPE match and not a signature match:**

1. capture a live `SAVESTATE` while the party stands at a known position, with terrain visible on screen
2. read the 11 by 11 window of terrain off the screenshot
3. for each candidate 32,768-byte region, read the cell at the party's `(px, py)` and its neighbours, and compare
the resulting shape against the screen
4. one region should match. A shape match anchored on the party's own position is far stronger than a value
signature, because it uses where the party actually is as the discriminator

`SAVESTATE` writes a live state, so this needs no pause and no per-address `MD`. It is a 7.6 MB file, which is
fine for a one-off hunt and far too heavy per turn.

**The first question is not the address but the mapping.** The viewport shows 11 tiles and the buffer holds 256
by 128 cells, so the viewport cannot be the buffer at one-to-one scale. Either the viewport samples every nth
cell, or the buffer is not what the viewport reads. That has to be settled before any shape comparison, or the
comparison is against the wrong shape.

| | |
|---|---|
| done when | a live flat address (or the segment and offset pair) for the 32,768-byte sector buffer is confirmed by reading it while the party is at a known position and finding the expected terrain at the expected cell, and the address survives two separate sessions |
| failure case | an address whose bytes are merely plausible. A region of 32,768 bytes with the right value distribution is easy to find and is not evidence. The address must predict what is on screen at a position chosen before the read |

### P5. Choose the per-turn OBSERVE, once P4 lands

**State:** OPEN · **Autonomy:** AUTONOMOUS · **depends on** P4

Finding the address is a one-off. Using it every turn is a different cost, and the choice should be measured
rather than assumed.

The candidates, with what is known:

| route | gives | measured cost |
|---|---|---|
| screenshot and colour sampling | 121 colour classes | a curl and a PNG decode, about 0.3 s |
| `MD` the known region | exact cell values | 32,768 bytes is 2,048 dwords, which is 16 calls of `MD 128:` |
| `SAVESTATE` per turn | everything | 7.6 MB a turn. Rejected before measuring |

**The pause question is not settled and matters.** `live-session.md` records that reading the record without
`PAU` gives `FF` about one sample in six, because the game rewrites it mid-read. A map buffer would be worse,
since the game scrolls it. So an `MD` route probably needs `PAU` before and `RUN` after, and that has its own
cost.

| | |
|---|---|
| done when | both routes are timed on the same 20 turns and the numbers are written down, and one is chosen with the reason |
| failure case | choosing `MD` without measuring the pause cost, or choosing the screenshot without measuring whether its classes can distinguish the terrains the bot must tell apart |


## Phase 1: perception

The bot cannot presently answer "what is around me". It knows which squares refused it and which it has stood
on. That is not a viewport.

Phase 1 is ordered so that the **fallback comes first**. If P4 succeeds, item 1a and item 1b are largely replaced
by reading the buffer, and what remains is the small amount of work that maps a cell value to a symbol. Planning
the screen route first is deliberate: it is available today, it is the fallback if the address hunt fails, and
building it costs little.

### 1a. Read the 11x11 viewport, from memory if P4 succeeds, from the screen otherwise

**State:** OPEN · **Autonomy:** AUTONOMOUS

The map panel is measured at x1-361, y67-418, which is 360 by 351 pixels. Eleven tiles across 360 pixels is
**32.7 pixels per tile**, which is a normal sprite size and matches what the art shows. The party is at the
centre cell, `(5, 5)`.

The current `tile_colour_at()` divides the panel by **64**, which is wrong and has been wrong since it was
written. That is the bug this item starts by removing.

**Two sources, one interface.** `viewport()` returns 121 cells either way. Which source fills it is P5's
remaining choice. Building the screenshot reader first means the bot is not blocked while P4 is open, and it
means the fallback is tested rather than imagined.

| | |
|---|---|
| done when | a function returns a 121-cell grid for a live game, with the party's cell at index 60, and the symbols are stable across two samples taken without a turn between them |
| failure case | a grid that changes when the party does not move. That means the sampling is straddling tile boundaries, or the buffer is being read while the game is rewriting it |

### 1b. Earn the tile alphabet

**State:** OPEN · **Autonomy:** AUTONOMOUS

`cell-fields.md` establishes the **structure** of a map cell, 8 groups by 8 flags, and states plainly that the
**meaning** of the eight group values is not established. So a lookup table today would map `g0` to `?`.

**If P4 lands, this becomes cheap and certain.** The cell value is exact, so the alphabet is earned by walking
and recording which values refused the step. No colour class is involved and no guessing from artwork.

If P4 does not land, the same experiment runs against colour classes instead, and the alphabet is coarser.

| | |
|---|---|
| done when | every value or class the viewport can produce has either a walkable or a blocked observation behind it, or is explicitly listed as unseen, and the table is committed as data with the counts that produced it |
| failure case | a value named "mountain" from its appearance alone. The bot can observe passability and cannot observe geology |

### 1c. Distinguish terrain from overlay

**State:** OPEN · **Autonomy:** AUTONOMOUS

Borrowed shape from `viewport.ts`: a cell is `base` terrain plus an optional `overlay`. A monster standing on
grass must not erase the grass, or the traverse map degrades every time something walks past.

The signal available: terrain is static across turns once seen, an overlay is not. A cell that changes and then
changes back is an overlay. A cell that never changes is terrain.

| | |
|---|---|
| done when | a cell that has held two different symbols across a session is flagged as an overlay cell and its terrain symbol is retained separately |
| failure case | overwriting terrain with a monster and then treating the monster's symbol as ground |


## Phase 2: the map memory

### 2a. A map keyed by place, not by coordinates alone

**State:** OPEN · **Autonomy:** PARTLY AUTONOMOUS · **depends on** P1, 1a

Your framing, which is the right one: terrain rarely changes, monsters and NPCs move, and keeping the last known
thing at a square is close enough to how human memory works.

The key is `(ERA, WORLD, x, y)`. **`ERA` and `WORLD` are independent**, per `roster-reference.md`, and both are
readable once P1 lands. Until then this item is blocked, because a map keyed on coordinates alone will confuse
a town square with an overworld square at the same numbers.

| | |
|---|---|
| done when | two runs that visit the same squares under the same `(ERA, WORLD)` produce a shared memory, and two runs under different ones do not |
| failure case | a memory that grows uniformly with distance travelled regardless of where, which means the key is not discriminating |

### 2b. Remember what leads to where

**State:** OPEN · **Autonomy:** AUTONOMOUS · **depends on** 1a

Two ways to know which map you are on: remember the transition, or infer it from terrain. The player named both.
**Remembering is cheap and inference is expensive**, so this item does only remembering.

A transition is recorded as `(from ERA/WORLD, the command that caused it) -> (to ERA/WORLD)`. `E)nter` on a
known overworld square is the easy case. A moongate is the hard one, because it may move.

| | |
|---|---|
| done when | entering a town twice by the same route records the same destination twice, and the record is queryable as "where does this lead" |
| failure case | a destinations table that only ever grows, which means transitions are being recorded per turn rather than per event |

### 2c. Terrain matching for moongates, if 2b is not enough

**State:** NEEDS A DECISION · **Autonomy:** BLOCKED ON HUMAN

The player's other option: if a moongate is dynamic, infer the arrival from the viewport's terrain. This needs
the alphabet from 1b and a memory of what terrain looks like in each place, which is 2a.

Named as a decision rather than an item because it may be unnecessary. If 2b covers moongates, this is cut.
The decision point is after 2b: does a moongate record a stable destination?

| | |
|---|---|
| done when | either a moongate's arrival is identified from viewport terrain without a remembered route, or 2b is shown to cover every transition and this is marked CUT with that evidence |
| failure case | a terrain match that picks a candidate place by elimination. Two places with similar terrain must be reported as ambiguous, not resolved by guessing |


## Phase 3: the turn loop

### 3a. `ACT -> LOOK -> DECIDE -> ACT`, with pacing

**State:** OPEN · **Autonomy:** AUTONOMOUS

The player's loop, and it matches the measured tick: food falls 15 per turn, and **every action is a turn**,
including a blocked move and a failed action. So the loop cannot skip a turn by deciding nothing. `P)ass` is an
action.

`DECIDE` returns keys and mutates nothing, borrowed from `autocombat.ts`. That makes it testable without a game.

Pacing is a parameter because the two uses differ: a human watching wants something comfortable, and a bot
learning wants the game's own maximum. The cost that sets the floor is `state()`, which is nine `MD` commands
plus a screenshot, roughly half a second.

| | |
|---|---|
| done when | a full turn runs from a posture with no human in the loop for 50 consecutive turns, the wall-clock seconds per turn are reported, and changing the pacing parameter changes that number |
| failure case | a loop that can reach a state where no turn advances, such as waiting for a prompt that never appears. The first tracker did exactly this and spun 64 times on one wall |

### 3b. Read the action log

**State:** OPEN · **Autonomy:** AUTONOMOUS · **depends on** 1b

The bot presently infers from arithmetic: HP falling means something hit it, exp rising means something died.
That works and cannot be wrong about a number, but it cannot name a monster and cannot read a message.

The panel font was measured as **proportional, not fixed-pitch**, which invalidated the 16-pixel cell grid the
reader was built on. `tools/u2read.py` now segments at ink boundaries and `tools/seedglyphs.py` grows a table one
word at a time, refusing any label that contradicts an existing one. Labelling a whole panel from an assumed word
list produced 25 collisions where two letters shared a bitmap, which is impossible and meant the word list was
wrong.

| | |
|---|---|
| done when | the action log and the status bar can be read as text for a screenshot whose text is independently known, with the unknown-glyph count reported |
| failure case | a reading with more unknown glyphs than known ones presented as a result |

### 3c. Command keys and their consequences

**State:** OPEN · **Autonomy:** PARTLY AUTONOMOUS · **depends on** 3b

The command bar has 25 entries and the key is the letter before the `)`. That is established. What is not is
what each one does to the world, and several are dangerous: `Q)uit` ends a session without saving.

The bot works from an allow list today. This item turns the allow list into a table with an observed effect and
a recorded prompt for each command, so `DECIDE` can choose rather than avoid.

| | |
|---|---|
| done when | every one of the 25 commands has either an observed effect and prompt or is marked unsafe with the reason, and the allow list is derived from the table rather than written by hand |
| failure case | a command in the allow list whose effect was never observed |


## Phase 4: policy

### 4a. Postures as priority conditions

**State:** OPEN · **Autonomy:** AUTONOMOUS

Three postures, **Aggressive**, **Curious** and **Scared**, derived from health, hunger and environment, and
overridable by writing `saves/personality.json`. Built and working. What remains is finishing it.

The corrected form is a **priority list**, borrowed from `autocombat.ts`, replacing the score-based derivation
that reported AGGRESSIVE at 21 percent health because low health selected the lowest threshold.

| | |
|---|---|
| done when | each posture's first condition is stated as a condition rather than a weight, and a run at known health and hunger takes the expected branch |
| failure case | a posture that cannot be reached by any combination of health and hunger |

### 4b. Hunger as an urgency that outranks posture

**State:** OPEN · **Autonomy:** PARTLY AUTONOMOUS · **depends on** P2

Hunger differs from health in kind, not degree: health goes down and up, food **only goes down**, and it is
recoverable only by buying it. So it is a one-way resource with a fixed runway rather than a band.

"Hungry" and "starving" as the player described them are **deadlines**: turns until empty. That needs a distance
to a food shop, which needs the map, which is Phase 2. That is a circularity, and the way through it is a
conservative floor: below some food level, stop and buy regardless of distance.

| | |
|---|---|
| done when | a run started with low food leaves what it is doing and seeks a shop, or records that no shop was reachable, and the food level that triggers it is a number in the code not a word in a comment |
| failure case | an urgency rule that can only fire when it is already too late, which is any rule keyed on zero food |

### 4c. Buying food

**State:** OPEN · **Autonomy:** PARTLY AUTONOMOUS · **depends on** 3c, 4b

`0xf5a1c` is the shop screen, with `食 料 品` and yen signs. `meta-analysis-uses.md` states a discount band at
INT+CHA of 40 and 80. Neither is measured for the bot's purpose, which is: what does the prompt ask, what does
food cost, and how much arrives per purchase.

| | |
|---|---|
| done when | a purchase completes from a standing start, and the gold before, the gold after, and the food before and after are recorded as numbers |
| failure case | a purchase driven by a guessed key sequence that happens to work once |

### 4d. Lord British, and the offering

**State:** OPEN · **Autonomy:** BLOCKED ON HUMAN · **depends on** 2b

The player states that HP is gained by offering to Lord British in the castle on the island of Britain, and that
this is the only way. A reference corroborates it and adds two details the policy needs: the offering is
**50 gold**, and **King Ozy** can do it as well. The same source warns of a 16-bit overflow that sets HP to 0,
prevented by a dynamic taper, so offering is not safe to repeat blindly at high HP.

Finding the castle needs the map from Phase 2, so this waits.

| | |
|---|---|
| done when | gold falls by the expected amount, max HP rises, and the taper behaviour is recorded at least at two different starting HP |
| failure case | offering repeatedly without recording the gold cost per point of HP |


## Phase 5: unattended operation

### 5a. Seeded replay

**State:** OPEN · **Autonomy:** AUTONOMOUS

Borrowed from `tools/sim/fuzz.ts`. The RNG is the documented LCG at `0xdfc78`, so a run can be replayed from a
seed if the inputs are recorded. A run that cannot be replayed is not evidence, and this project's rule is that
a fact nobody can reproduce is not part of the corpus.

| | |
|---|---|
| done when | a recorded run replayed from its seed produces the same transcript, or the item records exactly where determinism breaks and why |
| failure case | a replay that differs and is reported as "close enough" |

### 5b. Invariants, checked every turn

**State:** OPEN · **Autonomy:** AUTONOMOUS

`fuzz.ts` checks what must always hold after every key. The equivalent here: HP is within bounds, food only
falls, position changes by at most one tile between turns **except** on a transition, `ERA` and `WORLD` are in
range, and a turn always advances the turn counter.

The position invariant is the one that would have caught the `map`-field bug immediately.

| | |
|---|---|
| done when | every invariant is violated by a deliberately broken build, proving it can fail |
| failure case | an invariant that has never been seen to fail. This project has already shipped four checks that could not fail |

### 5c. A run that reports rather than just logs

**State:** OPEN · **Autonomy:** AUTONOMOUS

The transcript is JSON lines with screenshots. What is missing is a summary a person can read: turns taken,
kills, distance explored, squares learned, deaths, and what was still unknown when the run ended.

| | |
|---|---|
| done when | one command produces that summary from a transcript without the bot running |
| failure case | a summary that reports activity rather than findings |


## What this plan does not cover

**Winning the game.** No route, no quest logic, no Minax. The bot is an instrument.

**Dialogue and NPCs beyond `T)alk`.** Reading dialogue needs glyphs that are not Latin and a vision model,
which is a different problem from driving.

**Combat tactics.** U2's combat is abstract enough that attacking the adjacent thing is close to optimal. The
`autocombat.ts` priority list is U3's, with classes and spells that U2 lacks, and porting it would be inventing
U2 mechanics from U3 data.

**The `0xEB` glyph mapping.** Parked in `plan.md`, and parked here for the same reason: the renderer hands bytes
to TownsOS, so the mapping is not in the game at all.
