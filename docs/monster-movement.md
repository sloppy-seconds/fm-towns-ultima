# Monster movement: not one step per player turn

Two monsters followed the player across a stretch of overworld. The observed sequence is the
finding, and it contradicts the obvious model.

## What was observed

The player stood at **(57,18)** with a monster directly west at (56,18) and a second two tiles
west at (55,18). Paul then moved and reported the result:

| player action | player position | monsters |
|---|---|---|
| (start) | 57,18 | west of the player |
| step east | 58,18 | **followed** |
| step north | 58,17 | **did not move** |
| step north again | 58,16 | **moved** |

So **each monster moves on some player turns and not others**. It is not one step per player
step, and it is not zero.

**This is the whole of the measured result.** The rate is 2 movements in 3 player steps here,
which is a sample of three and not a rate. Whether it is a 1-in-2 pattern, a 2-in-3 pattern, a
random chance, or a speed stat is not determined, and three steps cannot distinguish those.

## Why it matters

`combat-observed.md` already establishes that every player action consumes one turn, including
failed ones, and that monsters "get theirs" on each. This measurement refines the second half:
**the monsters hold a turn every turn, but they do not spend it moving every turn.** A
reimplementation that moves each monster one square per player step will run them down twice as
fast as the original.

It also bears on the earlier question of whether a second monster which cannot reach the player
still takes a turn. It does not need to for anything observed here: a monster that is out of
range and does nothing is indistinguishable, in these two-state diffs, from one that is not
taking a turn at all.

## The method, which now works

Two savestates taken paused, differenced byte by byte, and compared against an **idle baseline**
taken the same way with no input.

| pair | bytes changed |
|---|---|
| idle, 3 s, no input, machine confirmed live | **7,772** |
| one step east | 71,426 |

Subtracting the baseline leaves 64,857, and most of that is still map redraw. **The baseline is
the step that makes this usable and it was missing from earlier attempts.**

### The baseline trap, which cost an hour

The first attempt at an idle baseline compared two states and found 50,906 changed bytes, which
was read as noise. It was not: the second state had been taken while **the machine was still
paused**, because `RUN` returns empty output whether or not it worked. So the "diff" was two
copies of a frozen machine plus a pause transition.

**`RUN` gives no confirmation.** The only reliable check is the emulator's own clock:

```
STA  ->  Towns TIME (Nano-Seconds): 3051982309317
sleep 3
STA  ->  Towns TIME (Nano-Seconds): 3055235626510   <- advancing, so it is running
```

Identical nanosecond values across two samples mean the machine is paused, whatever `RUN`
appeared to do. This belongs in `tools/README.md` next to the other console quirks and does now.

## What was not found, and the false leads

**The monster table was not located.** Three candidate addresses were examined and all three
were something else:

| address | what it looked like | what it is |
|---|---|---|
| `image+0xbe078` | `(55,18)` as an adjacent dword pair | coincidence: two adjacent *cells* reading `0x37 0x12` in a terrain array |
| `image+0xcd9a5` | a byte changing 55 to 53 as a monster moved | a tile index in a list of odd numbers |
| `image+0xce044` | an 80-byte mirrored structure | the tile viewport redrawing |

**The one live candidate is `image+0xcc408`**, a 12-dword array terminated by `0xFFFFFFFF`:

```
at (57,18):  43, 56, 56, 55, 49, 48, 23, 18, 55, 35, 57, 34
at (58,18):  43, 56, 57, 55, 50, 49, 23, 18, 56, 35, 57, 34
at (58,16):  43, 56, 58, 55, 51, 50, 23, 18, 57, 35, 57, 34
```

Four entries rise by exactly 1 per player step, at indices 2, 4, 5 and 8. **The values climb
monotonically and never fall**, which is the shape of a counter rather than a coordinate, and
they do not match the player's own position in either axis. So this is **not** claimed to be the
monster table. It is recorded because it is the only structure found that responds to movement,
and because a future attempt should start by explaining it rather than by searching again.

## What a better attempt looks like

**Search the map, not the records.** The failed searches all looked for coordinate-shaped values
in the record region. If monsters are marked on a tile map as cell values, no amount of
searching for `(x, y)` dwords will find them, and the right question is which *cells* changed
between two states.

Two further things that would help, both cheap:

- **Four more steps**, so 2-in-3 can be separated from 1-in-2 and from a random rate.
- **A step where a monster moves into an occupied cell**, which would show whether the movement
  is blocked by the player and so whether position is stored per monster at all.

## The states, which are not committed

`saves/analysis/` holds `step-before`, `step-after`, `step2-before`, `step2-after`, `live-a` and
`live-b`. They are derived from the game and gitignored. To regenerate: pause, `SAVESTATE`, note
`peek.js --json`, take one step, pause, `SAVESTATE`, diff.
