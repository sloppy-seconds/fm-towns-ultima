# Plan: a bot that plays the game

A bot that plays Ultima II by reading the screen and memory and sending keys. It exists to remove the one
bottleneck this project cannot get past: **every runtime measurement so far has needed a human sitting at the
emulator.** Combat was measured once, over an afternoon, because a person had to fight while another process
read memory.

The goal is not to finish the game. It is to make measurement repeatable and unattended.

## What already exists, and what it is worth

The U3 reference clone in `references/u3-typescript` has a working player bot, `web/tools/pilot/bot.js`,
275 lines. Reading it end to end changes the estimate substantially, in both directions.

**It is a controller-only player.** Its own README: *"plays the development build with nothing but what a
controller has... It reads the game through the development hook (`window.u3`) to plan: the map, where the
townsfolk stand, which line of a menu the bar is on. **It never writes it.**"*

That boundary is exactly this project's: read state, send keys. The structure below transfers.

| piece | lines | ports to U2? |
|---|---|---|
| `press(key, n)` | 8 | **yes**, nearly unchanged |
| `idle(ms)` | 11 | **yes**, the idea is "wait until the game takes input" |
| `choose(re)` | 10 | **no**, U2 uses letter commands not a cursor menu |
| `command(re)` | 4 | **yes** in shape, U3-specific in lookup |
| `firstStep(done)` BFS | 35 | **yes**, the algorithm is general |
| `walkUntil` / `walkTo` | 28 | **yes**, with a new map source |
| `open(x, y, goal)` | 9 | **no**, the tile-value table is U3's |
| `fight` / `autoCombat` | 22 | **no**, U2 has no auto-combat setting |
| `enterAt` / `talkAll` / `leave` | 60 | partly, needs U2's town state |
| `tour` / `shot` / plumbing | 40 | yes |

**Roughly half the bot is portable**, and the portable half is the tedious half: waiting for input correctly,
pressing keys at the right rate, and BFS pathfinding with repathing when stuck.

## The four things U2 needs that the U3 bot does not

### 1. Letter commands, not a cursor menu

The U3 bot's `choose(re)` moves a highlight down a list. **U2 does not work that way.** Its command bar is
single letters, documented from the binary in `save-files.md` 8.0.1.1:

```
A)ttack  B)oard   C)ast    L)aunch  U)nlock
D)ecend  M)agic   V)iew
E)nter   N)egate  W)ear
F)ire    O)ffer   X)-it
G)et     P)ass    Y)ell
H)yper   Q)uit&save
I)gnite  R)eady   Z)tat
```

**This is simpler than U3's version.** `press('A')` replaces `choose(/^Attack/)`. No highlight tracking, no
scrolling. One real reduction in scope.

### 2. Reading the screen is a text problem, and it is not finished

The bot needs to know what the game is asking. The U3 bot reads `u3.screen.inputMode` and
`u3.screen.textRows`; U2 has neither, and the text is in the private `0xEB` character set.

**`tools/u2read.py` exists and half works.** It measures the panels exactly:

| panel | framebuffer rows | content |
|---|---|---|
| status | 102 to 118 | `H:`, `E:`, `P:`, `G:` lines |
| stats | 150 to 276 | 8 lines, 16 px pitch, `STRENGTH` through `WEA`/`ARM` |
| actions | 326 to 436 | 7 lines, the event log |
| map | x 1 to 361 | tile map, no text |

It finds text lines and glyph cells. **It cannot read the characters**, because there is no glyph table.

### 3. Reading the map

The U3 bot calls `u3.world.getXYVal(x, y)`. U2 has a 64 by 64 tile grid at `0x77e90`, plotted by `0xf3e04`
and blitted by `0xe3d04` (established in `map-draw-chain.md`).

**The tile grid is readable**, and it is smaller than U2's actual map, so it is a viewport. Whether it is the
right grid to pathfind on is unproven. The alternative is U2's own 256 by 128 map buffer, whose address in
memory is not yet located.

### 4. Knowing when the game wants input

The U3 bot polls `u3.keyboard.waiting`. U2 has no such flag that we know of, and **guessing wrong is costly**:
sending a key while the game is mid-animation moves the party unexpectedly, and in a fight it wastes a turn.

**This is the most important unknown**, and it is the difference between a bot that works and one that
randomly walks into walls.

## Phases

### Phase 1: read the characters (no bot)

**The glyph table.** Without it nothing else can work, because the bot cannot tell "what are you doing?" from
"you parried".

`u2read.py --cells` already prints each 16 px cell as ascii art, and the cells are on a measured grid starting
at x=376, step 16, glyph 14 px wide and 14 tall. Building the table is mechanical:

1. Take a screenshot whose text is known, such as the stats panel showing `STRENGTH : 30`. The known-text
   approach is what verified every field this session, and it is the only method here that has not produced a
   wrong answer.
2. Extract each cell, normalise it, and store the bitmap.
3. Repeat across enough screens to cover the alphabet, the digits, and the punctuation the panels use.
4. Validate by reading panels back and comparing to a vision-model transcription, which is already known to
   work for these panels.

**Done when** `u2read.py` returns text strings rather than row extents, and a test asserts it reads
`STRENGTH`, `H:`, `E:`, `P:`, `G:` correctly from two different screenshots.

**Effort: one session.**

### Phase 2: a state reader with one interface

Wrap the reads behind one function so the bot never touches memory addresses directly:

```
state() -> {
  waiting: bool,        # is the game asking for input
  prompt: str|null,     # the text the game is showing, if any
  hp, maxhp, exp, food, gold,
  x, y, map,
  actions: [str],       # the action log lines
  combat: bool,         # inferred from the action log and the command bar
}
```

**The `waiting` flag is the hard part.** Two candidate methods, both cheap to test:

- **Screen stillness.** Sample a small region twice, 100 ms apart. U2 redraws continuously while animating and
  is static when waiting. This is how `u2flow.py` already detects the splash animating.
- **A memory flag.** Search for a byte that is 1 while the game awaits input and 0 otherwise, using the
  memory filter tools (`MKMEMFILTER`, `UPDMEMFILTER SAME|DIFFERENT`) across two known states.

**Done when** `state()` returns correct values while the game is idle and while it is animating, and the
`waiting` flag is right in at least 50 consecutive tests.

**Effort: one to two sessions.** The `waiting` flag could absorb both.

### Phase 3: the walker

Port `idle`, `press`, `walkUntil`, `walkTo`, `firstStep` from the U3 bot, replacing `W().x`/`W().y` with
`state().x`/`state().y` and the U3 `open()` tile test with U2's own rule.

**U2's walkability rule comes from the map, not from a table.** `cell-encoding.md` and `cell-fields.md`
established that a cell's low three bits are a flag and the top three a group, and that the values are
8 by 8. Which values are walkable is **not yet known**, and this phase has to establish it, by walking into
things and recording whether the party moved.

**Done when** the bot walks to a target coordinate it has never seen, from a random start, five times out of
five, without needing a human.

**Effort: two sessions.**

### Phase 4: the fighter

**Do not port U3's auto-combat.** U2 has no such setting. Instead:

- Detect a fight. The command bar changes and the action log fills.
- Choose an action by letter. `A)ttack` is one keypress.
- Repeat until the action log says the monster is defeated, which `combat-observed.md` shows it does:
  `You defeated / Thief!`.

The U3 `autocombat.ts` decision list is worth **reading for ideas, not porting**: its priority order (nearly
dead, then specific spells against specific monsters, then ranged, then melee) is a reasonable U2 policy too,
but its spell names and monster species are U3's.

**Done when** the bot wins a fight unaided, and the resulting action log is written to a file as a
measurement transcript.

**Effort: one to two sessions.** This is the payoff phase: every fight becomes a free experiment.

### Phase 5: the player

`enterAt`, `talkAll`, `leave`, `tour`, using U2's command letters (`E)nter`, `X)-it`) and the town names
already extracted in `game-text.md`.

**Done when** the bot tours two towns and the transcript records what each NPC said.

**Effort: two sessions**, mostly because town movement interacts with NPCs in ways that will need debugging.

## What this buys, stated honestly

**Not self-play.** The bot will not finish Ultima II. It will walk, fight, enter towns and record what happens.

**What it actually removes is the human from the measurement loop.** Everything blocked on "needs a savestate
during play" or "needs someone to press keys" becomes a script run. That list is currently seven items:
the object array, monster HP, `WORLD*.UT2` contents, the tick, combat arithmetic, spell effects, and the
divisor keyboard map.

## Risks, named

| risk | severity | mitigation |
|---|---|---|
| **The `waiting` flag cannot be found** | **high** | screen stillness is the fallback, and it is already proven in `u2flow.py` |
| Walkability unknown for most tile values | medium | Phase 3 establishes it empirically, which is useful extraction in itself |
| The 64 by 64 tile grid is a viewport, not the map | medium | Phase 3 falls back to U2's own map buffer if coordinates disagree |
| Glyph table misses characters | low | fall back to the vision model for unreadable cells, which is already proven |
| The bot acts during a `Z` pause and loses a turn | low | the bot never presses `Z` |

## What not to do

- **Do not port `combat.ts` or `world.ts`.** 11,429 lines of U3 engine, and U2 differs in the details
  (`rebuttal.md` records eleven divergences from other ports).
- **Do not port `autocombat.ts`'s spell and monster names.** They are U3's species and U3's spell set.
- **Do not build a full AI.** The BFS walker plus a priority list is enough. Anything cleverer is untestable
  against a game whose rules are half unknown.

## The order, and why

**Glyphs first**, because nothing downstream can be validated without readable text, and because it is the
one phase that produces a reusable asset regardless of whether the bot is ever finished.

**Then `waiting`**, because it is the highest-risk unknown, and it is better to discover it cannot be solved
before building four phases on top of it.

**Then walking, then fighting, then touring.** Each phase is useful alone: a walker that cannot fight still
measures movement, food and the map.

---

**[Action window](action-window.md)** **[Combat observed](combat-observed.md)** **[References](references.md)** **[Plan](plan.md)**
