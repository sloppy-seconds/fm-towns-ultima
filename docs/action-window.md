# Reading the action window

The bottom-right window is the game's own log of every event. Reading it gives a semantic transcript, which
is strictly better than inferring events from field deltas: the inference produced two withdrawn claims in
this project, and the log would have settled both in one line.

## It can be read, with a vision model

**`local/qwen3.8-flash-next` through `delegate` reads it correctly.** Verified on a real screenshot during a
fight. No agent definition is needed, and none should be committed: the invocation is

```
subagent({ agent: "delegate", model: "local/qwen3.8-flash-next",
           task: "read <path> and transcribe the lower-right box" })
```

The driving model cannot see images. The subagent can, because `delegate` accepts a model, and both
`local/qwen3.8-flash-next` and `local/qwen3.8-27b-dense` list `image` in their input types in `models.json`.

**This is the answer to the font problem.** The action window's glyphs are the private character set from
[eb-renderer.md](eb-renderer.md), which is why `FINDS Attacked` in memory returns nothing and why character
recognition against a table is not possible. A vision model reads the rendered shapes and never needs the
font.

## The region

In a live game, inside the 640 by 496 emulated area:

- the action window is a boxed region at framebuffer **rows 79 to 111**
- horizontally it starts near **column 401** and ends near **490**
- text lines sit in **rows 83 to 109**

Found with `tools/readscreen.py --scale 4`, which renders glyph shapes large enough to locate the box even
though they cannot be read as characters.

## What it produced

From one fight, transcribed exactly:

```
Damage +  16!
You defeated
 Thief!
Wand !
  Gold +  14!
  Exp. +   4!
```

**The log states the damage, the monster, the weapon, and both rewards.** Everything the memory work had been
inferring one field at a time.

## The status bar confirms the field map independently

The same screenshot showed the status bar:

```
H:  344   E:    25
P:  374  G:   249   A
```

| letter | value | field | memory |
|---|---|---|---|
| `H` | 344 | HP | `0xcde81` = 344 |
| `E` | 25 | EXPERIENCE | `0xcde89` = 25 |
| `P` | 374 | FOOD | `0xcde8d` = 37465, displayed divided by 100 |
| `G` | 249 | GOLD | `0xcde91` = 249 |

**All four match.** This is the first time the field map has been checked against the display that uses it,
and the four fields previously verified one at a time are now confirmed together.

`P` and `G` are the game's own letters for food and gold, which resolves the naming ambiguity left open in
`live-fieldmap.md`.

**A fifth field is truncated.** The third line reads `P: 374  G: 249  A` and the `A` has no visible value in
this transcription. It is probably a fifth stat cut off at the window edge, and a crop aimed at that line
would settle it.

## The rewards, cross-checked

The log says `Gold + 14` and `Exp. + 4`. Independently, memory read GOLD 235 to 249 and EXPERIENCE 21 to 25.
**Two methods, same two numbers.** That is the strongest evidence either method produced this session.

## What is not settled

- **What `Damage + 16` is damage to.** The phrasing does not distinguish damage dealt from damage taken, and
  the player's HP at the end was 344, which does not obviously include a 16. Worth confirming rather than
  assuming.
- **The truncated fifth status field.**
- **Whether the log scrolls or truncates** when more events occur than fit in the window. A long fight would
  answer it.

## The method, now the default for combat

**Read the action window with a vision model, and the fields with `tools/peek.js`, and correlate the two.**
Do not infer events from field deltas alone.

---

**[Combat observed](combat-observed.md)** **[HP and damage](hp-and-damage.md)** **[Live field map](live-fieldmap.md)**
