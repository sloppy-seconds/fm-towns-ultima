# Plan: a bot that plays the game

**Status: being built.** This page is the plan of record for the bot work. The narrative plan with the
reasoning is in [gameplayer-plan.md](gameplayer-plan.md); this is the working document, kept current.

## What it is for

**Remove the human from the measurement loop.** Every runtime measurement this project has made needed a person
sitting at the emulator: combat was measured once, over an afternoon, because a human had to fight while another
process read memory. Seven plan items are blocked on "needs a savestate during play" or "needs someone to press
keys".

The bot does not need to finish the game. It needs to **walk, fight, and record**.

## Scope, fixed by the player

| do | why |
|---|---|
| **walk** | movement, food, the map, getting somewhere |
| **attack** | combat, where every measurement has needed a human |
| **`P)ass`** | a turn where the player does nothing, which isolates the food tick |
| **`E` to enter a town**, then walk around | NPCs, shops, town geometry |
| record at every turn | see below |

| do not | why |
|---|---|
| `T)rans-` | too much unknown state for the value |
| dungeons | first-person, different renderer, U3 bot could not either |
| shops, dialogue choices | lists and consequences, not needed to walk or fight |

## What is established, and what is not

**Established, measured:**

| fact | how |
|---|---|
| movement is one arrow key, one unit | one west step moved `PLAYER_X` 36 to 35, `PLAYER_Y` unchanged |
| HP at `0xcde81`, max at `0xcde85` | player read 385 off the status bar, memory agreed |
| EXP at `0xcde89`, FOOD `0xcde8d`, GOLD `0xcde91` | status bar confirms all four, `P` is food, `G` is gold |
| the command bar is 25 letters, key is the letter before `)` | extracted from the binary |
| the action window reads correctly via a vision model | transcribed a whole fight |
| food falls 15 per action turn | three consecutive turns |
| the RNG is the documented LCG | consecutive live samples on the chain |

**Not established, and needed:**

| unknown | how it will be settled |
|---|---|
| **what `A)ttack` prompts for** | send `A`, read the screen. **One action.** |
| whether food ticks per turn or per action | `P)ass` once, read food. **One action.** |
| when the game is waiting for input | see below, the hard one |
| which tile values are walkable | walk into them and record whether the party moved |

## The hard problem: knowing when the game wants input

Everything else is mechanical. This is the one thing that could stop the bot working, because **sending a key
mid-animation moves the party unexpectedly, and in a fight it wastes a turn.**

Four candidate signals, cheapest first. **Try them in this order and stop at the first that works.**

1. **The screen is still.** Take two screenshots 100 ms apart and compare a region. U2 redraws continuously
   while animating and is static when waiting. `u2flow.py` already uses this to detect the splash animating, so
   the technique is proven in this project.
2. **The status dword changes.** `STA` reports `CS:EIP`; a game waiting for input sits in a known idle loop.
   The hottest address in the 4 GB trace was `0x9AEA` at 190,668 executions, which is that loop. **Check
   whether `EIP` sits in a small set of addresses while idle.**
3. **A memory flag.** Search for a byte that is 1 while waiting and 0 otherwise, using `MKMEMFILTER` and
   `UPDMEMFILTER SAME|DIFFERENT` across two known states.
4. **A timer.** Press the key after a fixed delay, tuned once. Crude, and it will misfire.

**Signal 1 is the fallback that cannot fail**, because it only needs the screen and the screen is a thing this
project can already read.

## The API the bot needs

The supervisor at `container/supervisor.js` already serves what is required. Two gaps:

| need | status |
|---|---|
| send a key | **`POST /api/keys {text}`** exists |
| take a screenshot | **`POST /api/shot {name}`** exists |
| read memory | **`POST /api/cmd {line:"MD 14:addr"}`** exists, used all session |
| read registers | **`POST /api/cmd {line:"STA"}`** exists |
| savestate | **`POST /api/cmd {line:"SAVESTATE path"}`** exists |
| **record an action with everything attached** | **needs building** |
| **is the game waiting** | **needs building, see above** |

**The recording endpoint is the valuable one.** One call should take a screenshot, read the fields, read
`STA`, and append a line to a JSONL transcript, so every bot action is a measurement without extra work.

```
POST /api/record  {label, note}
  -> shot-NNN.png, fields, CS:EIP, appended to transcript.jsonl
```

## The bot, in pieces

**Language: Python**, matching `tools/u2read.py`, `tools/readscreen.py` and `tools/u2flow.py`. Not an
instruction from the player, just what the existing tools are and what has the least friction.

```
tools/u2bot.py
  state()        -> dict   the one interface; no memory addresses escape it
  wait()         -> None   block until the game wants input
  press(key)     -> None   arrow or letter
  turn(action)   -> None   do one thing and record it
  walk_to(x, y)  -> bool   BFS on the tile grid
  fight()        -> str    attack until the action log says it ended
  tour()         -> None   walk, fight, note what happened
```

**Ported from the U3 pilot** (`references/u3-typescript/web/tools/pilot/bot.js`, 275 lines): the shape of
`idle`, `press`, `walkUntil`, `firstStep` BFS, and the stuck-counter repathing. Roughly half the file is
general algorithm.

**Not ported:** `choose(re)` for the command bar (U2 uses letters), `open(x,y)`'s U3 tile table, `fight`'s
use of a U3 auto-combat setting, and the four-member party logic, because **U2 is single-player**, which removes
`memberAlive`, party rotation and "Who?" handling.

## Phases, each useful alone

### Phase 1: the two observations (DONE)

**Both answered, without a human.**

**`P)ass` costs 15 food.** Measured twice, consecutively:

```
FOOD 37465 -> 37450 -> 37435     -15 each
HP   344 unchanged, X/Y unchanged
```

**So the food tick is per TURN, not per action.** That resolves the contradiction in `the-tick.md`: the
earlier "one west step, food unchanged" reading must have been taken before the turn resolved. A pass is a
turn in which nothing happens, and it still costs 15.

**`A)ttack` takes a direction.** Pressing `A` consumed nothing and showed:

```
Attack with
Hands!
Direct?
```

with the game printing its own instruction on the red bar: **`Direct with a arrow key!`**

So the sequence is `A`, then an arrow. That was the last unknown in the bot's scope.

### The trap phase 1 exposed

**A pending prompt swallows the next key.** After `A` left the game at `Direct?`, an arrow sent for movement
became the attack direction instead. Movement reported itself blocked when it was never attempted.

That is why `wait()` is not optional. Until it works, every keypress must be made in a state that has just been
read.

### Phase 2: `wait()` (the risky one)

Try the four signals in order. **If none work, the bot cannot be trusted and everything after this is
worthless**, which is why it is second and not last.

### Phase 3: `state()` and `press()` (DONE)

**Built and working.** `tools/u2bot.py` has `state`, `press`, `walk`, `pass`, `prompt`, `record` and `tail`.

**A real bug was found and fixed here.** Arrow keys were being sent as escape sequences through the console
`TYPE` command, and **the game ignored them**: it sat at its `Direct?` prompt through several attempts and the
prompt never cleared. The supervisor has a proper endpoint,

```
POST /api/key  {keys: "Up"|"Down"|"Left"|"Right"}
```

which drives `xdotool` with real named keys. Switching to it resolved the prompt on the first try. **The console
`TYPE` path does not produce arrow keys**, which is worth knowing for anything else that tries.

**Walk verified:**

```
left 1   39/25 -> 38/25   food -15
up 1     38/25 -> 38/24   food -15
left 3   38/24 -> 35/24   food -15 each
down 2   35/24 -> 35/25   then BLOCKED, and still food -15
```

**Every turn costs 15 food, whether it moved or not.** That closes the food question three ways: pass, walk,
and a blocked walk all cost the same. The earlier "one west step, food unchanged" reading was simply wrong.

A blocked step still spending the turn is correct, not a bug: the game consumed the turn and refused the move.

**Every action is recorded** to `saves/bot-transcript.jsonl`, one JSON line each, with a screenshot, the nine
fields and `CS:EIP`. `node tools/u2bot.py tail` prints them.

### The map, located in a savestate but not in memory

**Found the map in a savestate.** Taking a fresh one and scanning for the longest run of bytes with bit 3
clear gave a single candidate:

```
state offset 0xb06c2
62,976 bytes, 64 distinct values, max 0x77, bit 3 never set
```

That is **two 32,768-byte maps back to back**, and the second one renders as coherent terrain:

```
 16 .......*.#*#.............#
 17 .......#@@@@.........#@@@#
 18 @++++#..@##........##@#@@@
 20 .####...##@##..#@@@@###@@@
 22 ##.........##########@@@@#
```

Coastlines, forest, and structures. **That is the map**, and it is the first time this project has rendered
one from live game memory rather than from a file payload.

**Two things defeated locating it by address:**

- Its state offset (`0xb7cc2`, the start of the second map) is **below** the character record's base, so the two
  live in different segments and no single base maps both.
- **A 16-byte probe taken from it was not found by `FIND`** in live memory. Either the map changed between the
  savestate and the search, since walking modifies it, or that region is not in the RAM the search covers.

**So the map is known to exist, is readable from a savestate, and its live address is still unknown.** That is a
strict improvement on "not located" but it is not `walk_to`.

### Phase 4a: `discover()`, which works without the map

**Built and verified.** Rather than needing the map's address, the bot probes: try each direction, and the
party's own position tells you whether the square was walkable. Each probe costs one food and a successful step
is undone by stepping straight back.

From `33/23`, boxed in against water:

```
walkable: up=False  right=True  down=True  left=False
```

and the party ended where it started, as designed.

**This is slow and it is honest**, and it has one advantage over a static map: it reflects the map the game is
actually using, including anything generated at runtime, which `map-geometry.md` says accounts for the first 12
rows.

**What it gives the bot:** it can now tell a wall from open ground, so a survey can avoid retrying blocked
squares, and a fight can be sought rather than stumbled into.

### Phase 4: `walk_to()` (blocked, and the blocker is specific)

**Not built, because the map is not located.** Two candidate sources, both wrong:

- **`0x77e90`, the 64 by 64 tile grid**, is a *drawing buffer*: it reads all zeros when nothing is being drawn.
  Established in `map-draw-chain.md` as the buffer the blitter reads, and it is empty between frames.
- **Guessing a flat address for U2's own 256 by 128 map buffer** gave regions with 11 distinct values and bit 3
  set, which contradicts the map's measured signature of 62 distinct values, max `0x77`, bit 3 never set.

**Searching for a savestate map probe in live memory found nothing**, because the party has moved since that
state was taken, so the map contents differ.

**So `walk_to` needs the map buffer located first**, and that is the one genuinely hard piece left. `walk` works;
walking *to somewhere* does not.

### Phase 4b: `walk_to()` once the map is found

BFS on the tile grid at `0x77e90`, with the stuck counter. Walkability established empirically: try a step,
record whether the party moved.

**Done when** the bot reaches a coordinate it has not seen, from a random start, five times out of five.

### Phase 5: `fight()` (built, not yet exercised on a live monster)

`tools/u2bot.py attack` and `fight N` implement it: `A`, then the direction, then read the fields. It records
every round. **It has not been run against a monster yet**, because none was adjacent when it was written, so it
is built and untested rather than verified.

**Done when** the bot wins a fight unaided and writes a transcript of it.

### Phase 6: `tour()`

Walk, fight, enter a town with `E`, walk around it. **Record which monsters attacked on sight and which stayed
passive until provoked**. The player raised this and it needs no new capability.

**Done when** a transcript exists with at least one fight and one town visited.

## A survey, which works without the map

`walk_to` needs the map's live address. A **survey** does not: it walks a fixed pattern and records every turn.
That is enough to measure the food tick, find blocked squares, and answer the passive-versus-aggressive
question, none of which needs pathfinding.

A real run, unattended:

```
leg 1: up, 4 steps
  up  1/4  BLOCKED  35/22->35/22  hp 344->344  food -15
  up  2/4  BLOCKED  35/22->35/22  hp 344->344  food -15
  up  3/4  BLOCKED  35/22->35/22  hp 344->344  food -15
  up  4/4  BLOCKED  35/22->35/22  hp 344->344  food -15
leg 2: right, 4 steps
  right 1/4  moved   35/22->36/22  hp 344->344  food -15
  right 2/4  BLOCKED 36/22->36/22  hp 344->344  food -15
  ...

survey: 8 turns, 7 blocked, 0 attacked
```

**Two things it establishes.** Seven of eight turns were blocked, so the party was against a wall and the
survey found it without any map. And **food fell 15 on every turn, blocked or not**, which confirms the tick is
per turn for the fourth and fifth time.

**The survey stops itself if HP falls**, so a monster encounter ends it rather than being walked into
repeatedly. That is the safe default for unattended runs.

## Two behaviour modes, both built and both run

### Curiosity

Wanders, pokes at things, records everything. Its product is a transcript of what the world does when touched.

```
$ python3 tools/u2bot.py curiosity 12 --poke-every 5
  turn   0  right  34/22  food 368
  turn   1  up     34/21  food 368
  turn   4  right  35/19  food 368
  poke e   hp +0 exp +0 food -15
  turn   6  up     35/18  food 367
  ...
curiosity: 16 turns, 10 moved, 6 blocked, 2 pokes, 0 attacked, 0 kills
```

It works. 10 of 16 turns moved, it avoided walking into the wall it had just hit, and both pokes returned the
game to the world screen without getting stuck.

It works from an allow list, not from trying every key. The command bar has 25 entries and pressing the wrong one
is expensive: `Q)uit` ends the session without saving. The safe set is the ten commands that act and return on
their own, listed in `CURIOUS_COMMANDS`. The dangerous ones are recorded with their reasons in `NEVER_PRESS` so
the reason travels with the code rather than with whoever remembers it.

### Berserker

Hunts, then seeks. It attacks in each direction until something responds, and when nothing does it walks until
something is adjacent or somewhere accepts `E)nter`.

```
$ python3 tools/u2bot.py berserker 2
cycle 1
  nothing adjacent for 2 rounds: the fight is over
  seeking
  turn   0  up    to 35/10  food 362
  ...
  turn   6  down  to 36/7   food 361
  ENTERED something: map 256 -> 257
  seek result: enter
```

It entered a town. `map` went 256 to 257, which is the clearest signal the bot has that a transition happened, and
it found it by walking rather than by knowing the map. That answers "find a town and go into it" without needing
the map address, which `walk_to` still does not have.

It has not yet killed anything. Two monsters were 8 tiles west of the starting square and the bot walked north
instead, because the search order is fixed and does not remember where it saw one. So the kill loop is built and
unproven, and the seeking loop is proven.

### How the bot senses, and why this is a limitation rather than a design

The bot infers from effect, not from words:

| signal | meaning |
|---|---|
| `hp` falls | something hit the party, so it is adjacent and hostile |
| `exp` rises | something died |
| `gold` rises | something died, or money was found |
| `px`/`py` unchanged | the step was refused |
| `food` falls 15 | a turn passed, always |

It does not read the action log as text. The panel font turned out to be proportional, not fixed-pitch, which
invalidated the 16 px cell grid the reader started with, and the glyph table is only partly seeded.

What that costs: the bot cannot report a monster's name, and it notices a kill by arithmetic rather than by the
message. What it buys: it cannot be wrong about a number. Both modes work today, which reading the log would not
have.

## Personality: three postures, derived, and lockable from outside

The first design had `curious` and `berserker` as **commands**. A mode was chosen when the process started and
held for the whole run. That is the wrong shape: a player is not one thing for an hour, they are curious in a
town, forward on the open road, and frightened at 20 percent health.

So posture is now a value **derived before every decision**, with three possible overrides.

```
$ python3 tools/u2bot.py personality
SCARED  hp 21%  unknown  (effective health 21% vs aggression at 65% and fear at 40%, unknown)
```

### The rule, stated as a rule

Below 40 percent health the party is **scared**. Above 65 percent it is **aggressive**. Between, **curious**.
The environment shifts both cut points rather than adding a score, so neither can invert the health order.

| environment | 20% | 45% | 60% | 75% | 90% |
|---|---|---|---|---|---|
| town | scared | curious | curious | curious | curious |
| overworld | scared | aggressive | aggressive | aggressive | aggressive |
| unknown | scared | curious | curious | aggressive | aggressive |

That is a player's instinct written down: no fights in town, no hesitation on the road, caution when the place
is unfamiliar.

### The bug this caught in its own output

The first derivation scored each posture by how close the party was to that posture's fight threshold. At 21
percent health it reported **AGGRESSIVE**, because low health selects the lowest threshold. It was written by
scoring instead of by stating the rule, and the printed output showed it immediately.

The fix is to write the bands in order and compare against them, which cannot invert.

### Locking a posture, which is the API

A bot mid-run cannot be reconfigured by calling a function in its own process. So the lock is a **file**. Writing
it changes the next decision, with no socket, no restart, and no thread.

```
$ python3 tools/u2bot.py personality --set aggressive --note "testing the lock"
posture lock: aggressive
$ python3 tools/u2bot.py personality
AGGRESSIVE [locked]  hp 21%  unknown  (locked from outside)
$ python3 tools/u2bot.py personality --set auto
posture lock: cleared
$ python3 tools/u2bot.py personality
SCARED  hp 21%  unknown  (...)
```

The running bot reads `saves/personality.json` before every decision, so a write lands on the next turn. Same
mechanism when the bot is not running: set the posture, then start it.

### The environment is inferred, and that is the weak link

**The game does not expose a location kind at any address this project has confirmed.** `0xcde56` was a
candidate, from the overworld sub-screen call at `0xf746c`, and it read `0xec` unchanged across a walk and an
`E)nter`, so it was not used.

What is used instead is **blocked-square density**: a town is bounded, so its open area is small and the fraction
of refusals is high, while the overworld is large and mostly open. Above 0.55 refusals per visit reads as a town,
below 0.25 as overworld, anything else as unknown.

That correlates without proving. A mountain range looks like a town wall by this measure. The reason it is
acceptable to ship is that **a wrong environment does not break anything**: it only mis-weights the posture. So
this is a labelled inference rather than a blocker, and the code says so at the point of use.

### Terrain classes, which generalise where squares cannot

Recording "this square is blocked" teaches the bot nothing about any other square. Encountering one mountain
teaches it one square. So `TerrainBook` records the **colour signature** of a square and whether walking into it
worked, and predicts from the class:

| signature | walk | blocked | so |
|---|---|---|---|
| `rgb010` | 41 | 0 | passable |
| `rgb200` | 0 | 3 | impassable |

Colour is sampled from the screenshot at the party's grid position, coarse-bucketed, because a tile is only about
5.6 pixels across. Two squares with the same signature are the same bet, which is exactly the generalisation the
player described: learn one mountain, know all mountains.

The book refuses to predict on fewer than three observations, and only when the majority is decisive. A confident
wrong guess is worse than no opinion, because it makes the bot walk into a wall repeatedly.

**Seeded priors** live in `saves/lore.json`, in the shape a player who read the manual would have: water and
mountains impassable, bridges and grass passable, some monsters beyond a starting party. This is **not measured
from the game** and the file says so in its first field. It exists so the first turn has something to reason with,
and observation overwrites it.

## Recording, which is the actual product

**Every action writes a record.** Screenshot, fields, `CS:EIP`, and the action window text. That makes the bot
a measurement instrument rather than a toy, and it is what pays for the work.

On demand, heavier captures: `SAVESTATE` (7.6 MB) and the instruction trace. **The trace and field reads
compete**: with `AUTODISASMR` on, one `MD` returns about 250 lines and the 16 that matter are buried.
`tools/peek.js` handles that by requiring the `|` separator, but it is slow. So the trace is for short windows
around one action, not for a whole session.

## Risks

| risk | severity | mitigation |
|---|---|---|
| **`wait()` cannot be made reliable** | **high** | screen stillness is the fallback and is proven in `u2flow.py` |
| `A)ttack` needs something unexpected | medium | phase 1 answers it before anything is built on it |
| Walkability unknown for most tiles | medium | established empirically, and is useful extraction anyway |
| The bot presses `Z` and loses a turn | low | it never presses `Z`; the build has no turn timeout |
| A long session fills the disk | low | 1.2 TB free; the trace is capped per window |

## Rules the bot follows

- **Never press `Z`.** The FM Towns build has no turn timeout, so unpausing resolves a pending turn.
- **Never send a key without knowing the game wants one**, once `wait()` exists.
- **Record before acting**, so a crash mid-action still leaves the prior state.
- **No creative play.** Walk, attack, pass, enter. Anything else is out of scope by the player's instruction.

## What works, tonight

| command | does | verified |
|---|---|---|
| `state` | nine fields, `--json` for scripts | **yes**, `food_display` matches the status bar's `P:` |
| `prompt` | is the red bar showing text | **yes**, 56 idle vs 1622 at a prompt |
| `press` | arrows via `/api/key`, letters via `/api/keys` | **yes** |
| `walk DIR N` | N steps, recorded | **yes**, six steps |
| `pass` | `P)ass`, recorded | **yes**, twice |
| `survey LEGS STEPS` | a square pattern, recorded, stops on damage | **yes**, 8 turns unattended |
| `discover` | probes which neighbouring squares are walkable | **yes**, and it returns the party to its square |
| `attack DIR` | `A` then a direction | **built, not exercised on a monster** |
| `fight N` | repeated attacks, recorded | **built, not exercised** |
| `record NAME` | screenshot, fields, `CS:EIP`, transcript | **yes** |
| `tail N` | the transcript | **yes** |

**Every action writes a JSON line** to `saves/bot-transcript.jsonl` with a screenshot, the nine fields and the
CPU state. That is the instrument the exercise was for.

## What does not work

**`walk_to`**, because the map's live address is unknown. The map is in a savestate and renders correctly; it
cannot yet be read from running memory.

**`attack` and `fight`** are built from a shape that was measured (`A`, then an arrow, confirmed by the game
printing "Direct with a arrow key!") but have not been run against a monster, so they are untested rather
than wrong.

## What this does not do

It will not finish Ultima II, and it is not self-play. It is a measurement instrument that happens to be able
to move a character around.

---

**[The bot plan, with reasoning](gameplayer-plan.md)** **[Command interaction](command-interaction.md)** **[Action window](action-window.md)**
