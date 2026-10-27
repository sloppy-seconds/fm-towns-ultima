# How to develop game knowledge quickly, and why the current method will not scale

**The method we have reads one routine at a time. There are 709. That is the problem, and the fix
is not reading faster.**

## What we have, measured

| | |
|---|---|
| functions recompiled | 709 |
| corpus rows | 738 |
| **rows with a name** | **0** |
| routines read this session | 7 |
| pages in `docs/` | 156 |

Forty of those pages are about the compiler, the container, the tooling or the palette. The
mechanics pages are `inside-a-turn.md`, `the-tick.md`, `combat-formulas.md`, `combat-observed.md`,
plus the save and creation pages. So the corpus of *rules* is thin and the corpus of *machinery* is
thick.

## Why reading 709 routines will not work

At seven routines in a long session, 709 is a hundred sessions. And the seven were not random:
each was found because a named global pointed at it. That is the actual method, and it is the only
one that has worked.

So the constraint is not reading speed, it is **how many anchors we have**. Every routine we have
read was reached through an anchor: `PLAYER_X`, `0xcdf6b`, the wrap constant `0x3f`, the map-id
`add`. No anchor, no direction.

## Where anchors come from, ranked by cost

**Already extracted, unused.** `extracted/strings.json` holds 128 call sites and 81 distinct
Japanese strings. They are the sound and error layer rather than gameplay, but each one names the
function that prints it. That is 128 anchors sitting on disk, and nobody has joined them to the
709 function starts. The join is one query.

**The menu table at `0x1678`.** `"   A)ttack  J)ump   S)teal "` is one line of a command menu, and
we know where it starts and that it pairs English with Shift-JIS. Reading the function that prints
it gives the entire command set, and the command set is the list of mechanics that exist. This is
the single highest-value read available, because its output is a vocabulary rather than one rule.

**The player record.** `0xcde54` with anchors at `0xcdf57`, `0xcdf6b`, `0xcdf6f`, and a stride
question still open. Field-by-field naming gives every function that touches the record a meaning,
and the record is touched by creation, movement, combat, shops and save. It is the join point of
most of the game.

**The tables already documented.** `docs/assets-and-graphics.md` has exact asset counts,
`map-geometry.md` has the buffer shape, `save-files.md` has the roster format. Each is an anchor
that has not been followed into code.

**Same-engine comparison across the three games.** U1 and U3 now walk with zero conflicts. A routine
identified in one is a routine in the other two. That is a cross-check, not a method for finding
things, but it makes a claim cheap to verify.

## What would make this fast, concretely

**One query that does not exist yet: which function references a given data address.** `x86map
--refs` answers it for one address at a time. What is wanted is the inverse and at scale: for every
one of the 709 function starts, the set of data addresses it references. That is a single pass over
the instruction stream, and it produces a graph from function to the strings and tables it touches.
With it, "which function prints the attack menu" becomes a lookup rather than a search.

That is maybe sixty lines using the API already present, and it converts 128 string anchors and
every known table into named functions in one run.

## What not to do

Do not try to name functions from their bytes. Three attempts this session at reading data by its
statistics produced three wrong answers, and the fourth thing that looked like a table was a
disassembly artefact. The reading has to start from something the game itself states: a string, a
global with a known meaning, or a documented asset count.

Do not treat the 166 conflicts as a blocker for this. They affect the recompiled output's fidelity,
not the address graph, and the address graph is what names functions.

## The recommendation

Build the function-to-data reference index. It is small, it reuses the existing decoder, and it is
the thing that turns the anchors we already have into named functions at a rate the session-by-
session method cannot match.
