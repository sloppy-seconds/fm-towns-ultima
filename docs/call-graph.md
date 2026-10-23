# The call graph, and what names a routine

The end goal is reimplementation. A reimplementation needs a skeleton: which routine drives a turn,
which handles combat, which enters a town. This page is the first sketch of that skeleton, produced by
`tools/callgraph.js` and `tools/fnstrings.js`.

## The shape of the game

```
image            1,072,366 bytes
function starts    738
call sites       5,435
self recursion      16
distinct edges   2,476
routines with no caller: 2
```

**Two routines have no caller: `0x101bdc` and `0x1052c8`.** Everything in the game is reachable from
them, so these are the entry points. Both call `0x103c04`, which is therefore shared start-up code.
That is a clean, exact result and it is the top of the skeleton.

## The technique that names a routine

Scan the body for `push imm32` and `mov r32,imm32` whose operand points at printable data. **The
strings name the routine.** It takes seconds and it works.

Built as `tools/fnstrings.js`. The bound for each scan is the next function start from the call graph,
so a scan cannot attribute a neighbour's strings to the wrong routine.

## Routines named so far

| routine | evidence | identification |
|---|---|---|
| `0x101bdc` | no caller | **entry point A** |
| `0x1052c8` | no caller | **entry point B** |
| `0x103c04` | called by both entries | **shared start-up** |
| `0xf6ebc` | 39 callees, references `ト・ボニフィス`, `ピタ－・ビレッジ`, `スタ－`, `・キャンプ` | **location dispatch** (Port Boniface, Pita Village, Star, Camp) |
| `0xeafc4` | references `\U2TITLE3.TIF`, `Q:\GRAPH\U2TITLE4.TIF` | **title art loader** |
| `0xebb70` | references `GREEN_GEM=%d\n`, `BRASS_BUTTON=%d\n` | **roster writer** |
| `0xf5a1c` | references `食 料 品` with yen signs | **shop screen** |
| `0xfd32c` | references `アントス卿がお待ちになっています` | **NPC dialogue** |
| `0xe22d4` | references `E.SND`, `IC3.SND` | **sound loader** |
| `0xe6e90` | established earlier | **text renderer** |
| `0xe9e0c` | established earlier | **roster parser** |
| `0xe1c5c` | established earlier | **`randMod`** |
| `0xe3d4c` | established earlier | **`randRange`** |
| `0xf2cc0` | established earlier | **tile effect dispatcher** |

Fourteen routines, of 738. The skeleton is started, not finished.

## The finding that changes the plan

**Most high-string-count routines reference only `0xEB` runs.**

`0xeb354` has 70 string references and every one sampled is an `0xEB` run. Same for `0xf02c8` (33),
`0xf0fcc` (31), `0xf4b24` (28), `0xf6c78` (27), `0xf1e8c` (26).

That means **the `0xEB` dictionary is the naming mechanism for the majority of the game's message
routines.** `reimplementation-gap.md` said the glyph question was not on the reimplementation path.
**That was wrong**, and this page corrects it.

It does not change the cost, and it does not change the twelve recorded negatives. What it changes is
the priority: a reimplementation that cannot read `0xEB` runs cannot name its own dialogue, shop and
combat routines, and cannot display their text. That makes the dictionary **worth one more attempt, by
a different method**, and the method is now obvious.

### The method that has not been tried

Every previous attempt tried to **decode** the runs. None tried to find the **routine that consumes**
them, by asking which code references the run addresses as immediates.

`tools/fnstrings.js` already lists those references with their offsets. For `0xeb354`, the addresses it
pushes are the run starts. The next step is to read `0xeb354` itself and see what it does with the code
byte. If it indexes a table, that table is the answer, and it will be a table of **pointers or widths**,
not of bitmaps. Eleven probes looked for bitmaps.

That is a bounded, static question with a specific target, which is the shape of question this project
answers well.

## What is still missing from the skeleton

- **The turn driver.** Not yet identified. It will be the routine that calls movement, combat and
  rendering from one body.
- **Combat.** Not identified.
- **Dungeon entry and movement.** `0xf6ebc` handles overworld locations, so dungeon entry is elsewhere.
- **Character creation.** `0xebb70` writes the roster, so creation is nearby but not named.
- **Spell casting.** Not identified.
- **Save and load.** The roster parser and writer are named, the world file is not understood.

Naming these is the current work. `docs/overnight.md` item 1 carries the method.

---

**[Distance to reimplementation](reimplementation-gap.md)** **[Overnight queue](overnight.md)** **[Plan](plan.md)**
