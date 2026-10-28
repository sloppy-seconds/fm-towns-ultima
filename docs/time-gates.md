## Time gates and the four worlds

Read from `0xf7590`–`0xf761f` and its callees. Addresses are guest offsets, which is the frame the running machine
and the recompiled module use.

### The gate, in the order the code tests it

```
eax = [0xceca0]                          ; which player record
edx = eax * 351                          ; the per-player block, see state-variables.md
if (ERA      [edx+0xcde99] > 4)  goto done;
if (MAP      [edx+0xcdf57] != 0) goto done;
if (GATE_X   [edx+0xcdf9f] != PLAYER_X [edx+0xcdf6b]) goto countdown;
if (GATE_Y   [edx+0xcdfa3] != PLAYER_Y [edx+0xcdf6f]) goto countdown;
call 0xf9780;                            ; the party stands on the gate
goto done;

countdown:
edx = [0xceca0] * 351
GATE_TIME  [edx+0xcdfa7] -= 1;
if (GATE_TIME >= 1) goto done;
GATE_TIME = 6;
WORLD     [edx+0xcdf8f] += 1;
if (WORLD > 3) WORLD = 0;
```

So the answer to the item's question, "whether the gate is a coordinate test, a map id, or an item check", is
**all three, in that order, and none of them is an item**:

- a **map test**, `MAP == 0`, which is the overworld
- a **coordinate test**, `GATE_X`/`GATE_Y` against `PLAYER_X`/`PLAYER_Y`, both exact equality
- a **per-character test**, `ERA <= 4`, which switches the whole gate off when it fails

The two branches are mutually exclusive: standing on the gate calls `0xf9780` and the countdown is skipped, and not
standing on it runs the countdown and never clears the gate.

### The four worlds

`WORLD` runs `0..3` and wraps, four values, one per era. It advances on the **time** branch, not on the coordinate
branch: every time `GATE_TIME` is decremented below 1 it is reloaded to 6 and `WORLD` increments. So the era changes
on a six-tick cadence while the party walks the overworld, and reaching the gate coordinate does something else
instead.

### What `0xf9780` does

It prints message `0xaae4` on window 7, calls `0xe1944(5)` and `0xe2824`, then pushes `ERA` and calls `0xe3b24`,
twice over. The two calls after the message take `ERA` as their argument, so the transition is era-aware rather than
a plain position change. **What it changes in the world state was not read**, and is not claimed here: the routine
is 100+ bytes and the arithmetic of the transition is the next thing to read if the gate needs to be exact.

### What is established and what is not

| claim | state |
|---|---|
| The gate is `MAP == 0` and `PLAYER_X/Y == GATE_X/GATE_Y`, gated by `ERA <= 4` | **read**, `0xf7590`–`0xf75d1` |
| `WORLD` is four values, `0..3`, wrapping | **read**, `0xf7603`–`0xf7612` |
| The era advances every six `GATE_TIME` ticks, on the countdown branch only | **read**, `0xf75e6`–`0xf7603` |
| The stride of the per-player block is 351 | **read**, the `lea/lea/shl/sub` sequence in six routines |
| `ERA`'s own meaning, and its values `2`–`0xd` written at `0xf39c8`–`0xf3ab0` | **not established** |
| What `0xf9780` changes beyond printing and calling with `ERA` | **not read** |
| Whether `GATE_TIME` ticks on a game turn or on a timer | **not established**; the routine is called from somewhere not yet read |

The values `ERA` takes are worth recording as a lead: `0xf39c8` sets it to 5, `0xf3a02` to 6, `0xf3a3c` to 4,
`0xf3a76` to 7 and `0xf3ab0` to 8, and `0xf2128` compares it to `0xd`. Five assignments in one routine looks like a
table of era transitions rather than a counter.
