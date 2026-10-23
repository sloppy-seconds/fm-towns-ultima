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

### Phase 1: the two observations (minutes)

Send `A` in a fight and read the screen. Send `P)ass` and read food. **These two answers settle the last two
unknowns in the scope**, and neither needs the bot to exist.

### Phase 2: `wait()` (the risky one)

Try the four signals in order. **If none work, the bot cannot be trusted and everything after this is
worthless**, which is why it is second and not last.

### Phase 3: `state()` and `press()`

One interface for reads, with no addresses outside it. Movement by arrow key, verified by `PLAYER_X`.
Record every action.

**Done when** the bot takes ten random steps and `PLAYER_X`/`PLAYER_Y` match its intent every time.

### Phase 4: `walk_to()`

BFS on the tile grid at `0x77e90`, with the stuck counter. Walkability established empirically: try a step,
record whether the party moved.

**Done when** the bot reaches a coordinate it has not seen, from a random start, five times out of five.

### Phase 5: `fight()`

`A)ttack` plus whatever prompt phase 1 revealed, repeated until the action log says it ended.

**Done when** the bot wins a fight unaided and writes a transcript of it.

### Phase 6: `tour()`

Walk, fight, enter a town with `E`, walk around it. **Record which monsters attacked on sight and which stayed
passive until provoked**. The player raised this and it needs no new capability.

**Done when** a transcript exists with at least one fight and one town visited.

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

## What this does not do

It will not finish Ultima II, and it is not self-play. It is a measurement instrument that happens to be able
to move a character around.

---

**[The bot plan, with reasoning](gameplayer-plan.md)** **[Command interaction](command-interaction.md)** **[Action window](action-window.md)**
