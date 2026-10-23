# Reading the action window

The bottom-right window is the game's own log. Every event it prints there is a semantic record of what
happened, which is more useful than anything derived from memory deltas. This page records whether it can be
read, and how.

## Why it matters

Everything measured so far came from watching fields change and inferring what caused it. That produced
several wrong claims:

- "magic missiles never affect HP", withdrawn because two samples cannot tell a miss from a parry
- "HP is at `0xcde85`", wrong, because it and max HP were both 400

**The action window would have settled both immediately**, because it says what happened in words:
`Attacked!` `You parried!` `was hit for 5`.

## Three routes, and which work

### Route 1: search memory for the text. Does not work.

```
FINDS Attacked   -> not found
FINDS parried    -> not found
```

The text is not stored as ASCII. It is **`0xEB` runs**, the private double-byte character set established in
[eb-renderer.md](eb-renderer.md), which the renderer hands to TownsOS. So memory search cannot find it and
cannot decode it.

### Route 2: read the screen. Works, with a caveat.

`tools/readscreen.py` crops a framebuffer region and prints it as text. Two problems:

- The glyphs are the same private character set, so the shapes are renderable but the characters are not
  standard. Reading them needs the font, which is unresolved.
- At 640x496 emulated inside a 1024x800 framebuffer, a text window is small. Reading it means repeating
  `readscreen.py --box` with the window's exact coordinates.

**The coordinates have not been measured yet**, and the game has since returned to a title screen, so there
is nothing to measure against until a character is back in the world.

### Route 3: a vision model on a screenshot. Untried, and the most promising.

`POST /api/shot` writes a PNG. A vision model can read the action window directly, including the glyphs,
without needing the font decoded.

**This is the route worth trying**, because it sidesteps the one unresolved problem in the whole text pipeline.
The project has been avoiding vision because the driving model cannot see images, but a **separate vision
agent** does not have that limitation.

## What a capture would look like

1. `POST /api/shot` once per second into `saves/fight/shot-NNN.png`
2. `node tools/peek.js --kv` once per second into `saves/fight/record-NNN.txt`
3. A vision pass over each shot, reading only the action window's rectangle
4. Correlate the text, the field deltas, and the trace by timestamp

That yields a blow-by-blow: **what the game said happened**, **what changed**, and **what code ran**.

## The known blocker, stated plainly

**`DBLOG` and field reads compete.** With `ENA AUTODISASMR` running, a single `MD` call returns about 250 lines
because every instruction is echoed, and the 16 lines that are the actual memory dump are buried among them.
`tools/peek.js` now requires the `|` separator that only an `MD` line carries, which fixes the parse, but the
contention makes each read slow.

**So a capture cannot log every instruction and read fields once a second at the same time without
degrading.** Options:

- **Read fields and take shots only**, no instruction trace. Cheap, and the trace is what is least necessary
  given the action window gives the semantics.
- **Trace only**, for a short window around one action, then correlate with a few field reads taken either
  side.

## Recommendation

**Capture the action window and the fields, not the instruction trace.** The trace answers "what code ran",
which is the question to ask *after* knowing what happened. The action window answers what happened.

---

**[Combat observed](combat-observed.md)** **[HP and damage](hp-and-damage.md)** **[Live field map](live-fieldmap.md)**
