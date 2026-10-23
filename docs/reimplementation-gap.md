# How far from reimplementation

The goal is reimplementation. Extraction exists to build the strongest possible corpus of data, assets
and rules first, so that reimplementation is a translation exercise rather than a guess.

This page measures the gap honestly. It was written because the stated goal in `AGENTS.md` had drifted
into extraction-as-endpoint, and the drift was hiding the fact that **the corpus is nowhere near ready.**

## The headline number

**738 distinct functions are called from `ENCHANT.EXP`. 22 are now named, the game loop is found, and
the rest are not.**

```
738   distinct CALL targets
 22   named from string references or structure   3.0%
716   unnamed
```

An earlier version of this page measured by address mentions rather than by names, which counted
incidental listings. The named count is the honest one and it is lower.

**What changed since that measurement is not the number, it is the method.** `tools/callgraph.js` and
`tools/fnstrings.js` make naming a routine take seconds rather than minutes, and the game loop at
`0xe97c0` gives every remaining question a unit to be described against.

See [call-graph.md](call-graph.md) and [game-loop.md](game-loop.md).

Measured by extracting every `E8` call target and matching against every `0x` address in `docs/`. The
3.5 percent figure counts targets mentioned three or more times, which is a rough proxy for "someone
wrote a paragraph about this" rather than "the address appears in a list".

## What is actually ready

These are genuinely done, and the extraction work is real:

| area | state |
|---|---|
| All 23 graphic files | decoded, 63 PNGs produced, palette solved |
| All 14 sound effects | decoded to WAV |
| Title art, sprites, map tiles | decoded, colour output exists |
| The 8-colour palette | solved, with a documented residual |
| Map geometry | 256 x 128 buffer, file supplies rows from 12 |
| Map cell terrain | `v & 3`, 4 classes |
| Character record | 90 fields named, base `0xcde54` |
| Roster file format | fully reverse engineered, editable in a browser |
| Save disk format | FAT12 read and write |
| RNG | LCG identified, both helper functions read |
| Display text | extracts as Shift-JIS |

**The assets are in good shape. The data formats are in good shape. The rules are not.**

## What reimplementation actually needs, and what is missing

A working reimplementation needs five things. Here is each one against the real state.

### 1. Assets: mostly there

Graphics and sound decode. Two gaps:

- **The `0xEB` word dictionary** is parked, and **this page originally said it was not on the
  reimplementation path. That was wrong.** Building the call graph showed that most high-string-count
  routines reference only `0xEB` runs, so the dictionary is the naming and display mechanism for the
  majority of message routines. See [call-graph.md](call-graph.md). It needs one more attempt by a
  different method: find the routine that consumes the runs, rather than decoding the runs.
- **`WORLD*.UT2` is not understood.** 68,096 bytes, six rows of data measured, meaning unknown. If the
  world file holds map state, a reimplementation cannot load a save without it.

### 2. Data tables: partly there

The character record is fully named. The map geometry is known. **But almost every other table in the
game is unidentified:** monster stats, item properties, spell effects, shop inventories, town
layouts, NPC dialogue assignment.

### 3. Game rules: this is the hole

**26 of 738 functions.** The rules that make Ultima II playable are mostly unread. Combat, movement
costs, spell effects, monster behaviour, shop pricing, NPC schedules, the passage of time, win
conditions. Almost none of it is documented as arithmetic.

The shrine function and the consumable tick are read, which is two behaviours out of hundreds.

### 4. Control flow: not attempted

There is no map of which function calls which at the level of "this is the main game loop", "this is
the combat routine", "this is the town-entry routine". `funcs.js` gives a frequency table, not a call
graph with names.

**Without this, reimplementation has no skeleton.** Knowing what `0xe6e48` does (it is called 616
times) matters less than knowing which routine drives a turn.

### 5. Platform glue: not needed for a reimplementation

The Fujitsu BIOS layer, the Phar Lap loader and the TownsOS font are **not** needed to reimplement.
That is worth saying because it is where a lot of investigation went. They are needed to understand
the original, not to rebuild a game.

## A defensible estimate

Not a percentage, because percentages of "the game" are not well defined. Instead, what is left, by
the kind of work.

**Months of work remain, and the shape of it is uneven.**

| reason the asset side is far ahead | reason the rules side is far behind |
|---|---|
| assets have exact sizes, so decoders are provable | rules have no sizes, only behaviour |
| one decoder covers 23 files | one routine covers one rule |
| the palette needed finding, not reading | every rule needs reading |
| extraction is a single pass | rules are hundreds of independent reads |

**The single biggest lever now is the call graph, not more extraction.** 738 functions is tractable if
grouped: 247 are called three or more times, and those will be the meaningful routines. The 384 called
exactly once are mostly glue.

## What I would do differently, stated plainly

The project spent a great deal of effort on questions that mostly do not block reimplementation: the
top-of-image runtime mapping, the switch table, the TownsOS font. Those were interesting and they are
documented, but none of them are on the reimplementation path.

**The glyph dictionary is the exception and one correction belongs here.** Twelve probes went into it
and this page first said it was off the critical path. The call graph shows it is on the path, because
most message routines reference only `0xEB` runs. The twelve probes were not wasted, but they were
aimed at decoding the data rather than at finding the code that reads it, and those are different
questions.

Meanwhile **22 of 738 functions are named.** That ratio is the honest scoreboard.

## The revised plan, in order

1. **Build a call graph with names.** Not a frequency table. Group the 247 frequently-called routines
   and identify the top-level ones: main loop, turn handler, combat, town, dungeon, inventory, save.
   This is the skeleton and nothing else is as valuable.
2. **Read the routines on that skeleton**, in order of what a player does: create a character, move,
   enter a town, fight, buy, cast, save. Each becomes a page with its arithmetic.
3. **Identify the data tables** the skeleton references. Monster stats, item table, spell table, town
   data. These are extraction work and they are tractable.
4. **Finish `WORLD*.UT2`**, because a reimplementation has to load and save.
5. **Revisit the glyph dictionary only if** the skeleton shows a routine that renders it.

Steps 1 and 3 are unattended-work shaped. Step 2 needs the same reading discipline the shrine function
needed. Step 4 is bounded.

---

**[Plan](plan.md)** **[Open questions](open-questions.md)** **[Index](index.md)**
