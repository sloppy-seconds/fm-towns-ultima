# Overnight queue

Work that needs nobody watching. Every item here needs no emulator, no keypress and no decision from a
human, and each ends in either a committed page or a recorded negative with its measurement.

**This queue was rewritten when the goal was corrected.** The end goal is reimplementation, so the
order is now the skeleton first and extraction second. The previous version put 33 `randMod` functions
at the top, which was wrong: knowing what a routine rolls is worth little until you know which routine
drives a turn.

## Rules for unattended work

1. **Commit and push after every completed item.** An uncommitted result the next session cannot find
   is a lost result.
2. **`node tools/verify.js` must pass before each commit.** 107 checks, seconds.
3. **Never invent a value to make a table look complete.** Write `unknown` and say what would name it.
4. **A negative is a finished item.** Record the measurement and move on. No cosmetic retries.
5. **If an item is blocked, stop it and write why.** Do not substitute an easier question.
6. **No emulator, no container, no keypress.**

## Item 0: before starting

`ENCHANT.EXP` is not in the repo and must never be committed. Extract it per-command and delete it
before committing:

```
node -e 'const{Disc,defaultDisc}=require("./tools/cd.js");const fs=require("fs");const d=new Disc(defaultDisc(process.cwd()));const c=d.catalogue();const n=[...c.keys()].find(k=>/ENCHANT\.EXP$/i.test(k));fs.writeFileSync("ENCHANT.EXP",d.get(c,n));d.close();'
rm -f ENCHANT.EXP
```

The image has the `0x20` header stripped, so **an offset in it is a virtual address.**

---

## Item 1: name the top-level routines

`tools/callgraph.js` is committed and already answers the structural question. Measured:

```
function starts:  738
call sites:       5435
self recursion:   16
distinct edges:   2476
routines nobody calls: 2   (0x101bdc, 0x1052c8)
```

**Two routines with no caller is the most important number on this page.** Everything in the game is
reachable from them. Both call `0x103c04`, which is therefore shared start-up code.

**One routine is already identified:** `0xf6ebc` calls 39 routines and its string references are
`ト・ボニフィス`, `ピタ－・ビレッジ`, `スタ－`, `・キャンプ`. That is **Port Boniface, Pita Village,
Star and Camp**, so `0xf6ebc` is the **location dispatch routine**. It is the first identified
skeleton node.

**The work:**

Work down `--callees` from `0xf6ebc` and from both entry points, naming routines by their string
references. The technique that identified `0xf6ebc` in two minutes generalises: scan the body for
`push imm32` pointing at printable strings, and the strings name the routine.

A tool would make this fast and is worth building: `tools/fnstrings.js`, which given an entry takes the
next function start as its bound, scans for `push imm32` and `mov reg,imm32` pointing at printable
data, and prints them. **Build it, commit it, then use it.**

**Name at least 30 top-level routines.** Candidates in order of fan-out: `0xf6ebc` (done), `0xebefc`
(31 callees), `0xf0c60` (26), `0xfe4a8` (26), `0xed7f0` (24), `0xe97c0` (23), `0xee770` (21),
`0xf4b24` (21), `0xfb08c` (21), `0xfa928` (20).

**Done when** `docs/call-graph.md` holds a named skeleton: entry points, the location dispatcher, and
enough of the 30 to say which subsystem each belongs to (movement, combat, town, dungeon, inventory,
character creation, saving, rendering, sound).

## Item 2: the game loop

Once `0xf6ebc` and its siblings are named, find the routine that **drives a turn**. It will be one
that calls several of the named subsystems in sequence and loops.

**Method:** `--tree 0x101bdc 4` and `--tree 0x1052c8 4` give the shape from each entry. Where a node
is a hub, expand it. The turn driver is the routine that calls movement, combat and rendering from the
same body.

**Record** the order of operations in a turn as far as the code shows it. That ordering is directly
useful to a reimplementation.

**Done when** `call-graph.md` has a section on the loop, or a recorded negative naming what could not
be resolved and why.

## Item 3: identify the data tables the skeleton references

Reading the named routines will surface `mov reg,[disp32]` and `push imm32` references into data
regions. Those are the monster table, item table, spell table, town table, shop tables.

**This is extraction work and it is the highest-value extraction left**, because a reimplementation
needs these tables and does not need any more artwork.

**Done when** each named routine's data references are recorded with the region they point at, and any
table that can be laid out is laid out in a page.

## Item 4: `WORLD*.UT2` format

**Half solved.** Measured from `saves/maxed_four.hdm`, by `tools/worldfmt.js`:

| finding | value |
|---|---|
| size | 68,096 bytes, all four **byte-identical** |
| row pitch | 128 bytes |
| values per row | 24 dwords, then 32 zero bytes |
| rows with data | 6, that is 768 bytes |
| `0x300` to EOF | zero, 67,328 bytes |

```
row0  30 31 32 33 34 ... (grouped, counted)
row1  30 30 30 30 30 31 31 31 31 31 ... (monotone in blocks of five)
row2  192 224 255 32 64 255 255 64 ...  (contiguous runs of ones)
row3  56 248 60 252 52 224 60 52 ...     (runs growing one bit at a time)
row4  all zero
row5  all 2
```

**Rows 2 and 3 are bitmask tables**, which is the strongest signal in the file. Every value is a
contiguous run of ones.

**A real negative already: all four world files are byte-identical**, so either the format carries no
per-slot state or this save never wrote any.

**Open:** whether `30..34` indexes five things, whether rows 2 and 3 are `mask << n` rotations, what
reads a constant `2`, and why `WORLD_FILL_FROM` is 61,952 when data ends at 768.

**Done when** `world-format.md` has a measured layout or a recorded negative.

## Item 5: assert the new findings in `verify.js`

The reproducibility contract is missing recent results. All of these are cleanly assertable:

- **Record base `0xcde54`** from the three anchors.
- **77 all-`0xEB` strings.**
- **`WORLD*.UT2`**: 68,096 bytes, 128-byte rows, 6 rows of data.
- **Call graph**: 738 starts, 2,476 edges, exactly 2 routines with no caller.
- **`0xf6ebc` is the location dispatcher**: its string references include the town names.

**Done when** `verify.js` covers these and still passes. Do this early, it protects the rest.

## Item 6: docs drift sweep

58 pages, several written before later corrections. Known drift:

- `roster-reference.md` is stale and missing item fields.
- `shrine-function.md` has a correction banner but its body still uses old field names.
- `extracted/u2/manifest.txt` still describes `MAP2_*` as 320x104 images when they are ASCII data.
- Pages still saying the record layout is unsolved.

Grep and fix, linking to the correcting page. Annotate, do not delete history.

**Done when** no page contradicts `record-layout.md` or `reimplementation-gap.md`.

## Lower priority now

These were top of the old queue and are demoted. Do them only if items 1 to 3 are exhausted.

- **The 33 unread `randMod` functions.** Reading them is useful but they are behaviours without a
  skeleton. Once item 1 names the routines, the `randMod` reads become far cheaper because the caller
  tells you what the function is for.
- **The high bits of a map cell.** Interesting, not on the reimplementation critical path.

## Not in this queue

- **The `0xEB` glyph question.** Twelve attempts. No thirteenth.
- **The top-of-image mapping.** Breaks above `0x104000`, needs a savestate.
- **The `0xe4086` switch table.** Three explanations ruled out.
- **Anything on Track B.** Needs keys pressed.

## If everything finishes

Update `plan.md` and `reimplementation-gap.md` with the new counts, then stop. **Do not start something
new at 4am.** An accurate map for the next session is worth more than a half-finished extra item.
