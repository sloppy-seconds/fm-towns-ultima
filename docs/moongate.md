# The moongate: era times index, and the destination is a constant

A moongate step was captured from a cold-booted machine at era 2, position (16,17), map 117. It came out
at **era 0**, position **(29,56)**, map 118, with HP, gold and inventory unchanged.

## The dispatch is two jump tables, not one

An earlier reading of this page described a four-way switch and said the era-0 branch had no X. That was
wrong: the branch it was reading was a *different* function, and the X is there.

The real structure, in `0xf9780`:

```
0xf97f7  mov edx,[edx+0xcde99]        ; ERA
0xf97fd  cmp edx, 4
0xf9800  ja  0xf99c1                  ; out of range -> the no-op path
0xf9806  jmp dword ptr cs:[edx*4 + 0xf980e]
```

A jump table at `0xf980e`, indexed by **era**:

| era | target |
|---|---|
| 0 | `0xf9822` |
| 1 | `0xf986a` |
| 2 | `0xf98b2` |
| 3 | `0xf9910` |

Each era branch then reads a **second** field, `[edx+0xcdf8f]`, bounds-checks it the same way, and jumps
through its own four-entry table. So the destination is a 4 by 4 grid.

| era | inner table |
|---|---|
| 0 | `0xf9849` |
| 1 | `0xf9891` |
| 2 | `0xf98d9` |
| 3 | `0xf9937` |

## The destinations are constants at a 40-byte stride

The inner branches fall into four blocks, each loading an X and a Y from consecutive dwords:

| destination block | X from | Y from | era written |
|---|---|---|---|
| `0xf997a` | `0xd4610` | `0xd4614` | 0 (`sub edi,edi`) |
| `0xf9859` | `0xd4630` | `0xd4634` | 1 |
| `0xf98a1` | `0xd4658` | `0xd465c` | 2 |
| `0xf98e9` | `0xd4680` | `0xd4684` | 3 |
| `0xf98fa` | `0xd46a8` | `0xd46ac` | **4** |

The bases are **40 bytes apart**, `0x28`, and every block ends by jumping to the common write path:

```
0xf99c1..0xf99cf                  ; the 351 stride from [0xceca0]
0xf99d1  mov [edx+0xcdf6b],esi    ; PLAYER_X = the block's X
0xf99d7  mov [edx+0xcdf6f],ebx    ; PLAYER_Y = the block's Y
0xf99dd  mov [edx+0xcde99],edi    ; ERA = the block's era
0xf99e3  push [edx+0xcdf57]       ; the map id
0xf99e9  push edi                 ; the new era
0xf99ea  call 0xf3c40             ; redraw
```

**Note the mismatch that is real and worth stating:** a destination block can write an era different from
the one whose table selected it. The block at `0xf997a` writes era 0, and it is reachable from the era 2
table. That is how a moongate becomes a *time* jump rather than a teleport within one era.

There is also a fifth era value, **4**, written by `0xf98fa`, which no table indexes.

## What the capture showed

The outer table was reached and took its **era 2** branch, `0xf9806 -> 0xf98b7`. The inner table at
`0xf98d1` then took `-> 0xf9980`, which is inside the block at `0xf997a`, the era-0 destination.

That block loads X from `0xd4610` and Y from `0xd4614`, and the capture came out at X=29, Y=56, era=0.
So those two constants are 29 and 56, and the code's prediction matches the observation on all three
values without any adjustment.

## What the captures establish

| claim | evidence |
|---|---|
| a moongate changes ERA | `era` read 2 before, 0 after |
| it moves the player | (16,17) to (29,56) in one step |
| HP, gold and inventory are untouched | `peek.js` before and after, only `era`, `px`, `py`, `map` differ |
| the era is written from a register | all 11 immediate stores to `0xcde99` were unreached, `0xf99dd` is `mov [edx+0xcde99],edi` |
| dispatch is era times a second field | two nested jump tables, `0xf980e` then per-era |
| destinations are constants at a 40-byte stride | five blocks, bases `0xd4610` to `0xd46a8` |
| the era-2 table can send you to era 0 | the observed path, `0xf9806 -> 0xf98b7 -> 0xf98d1 -> 0xf9980` |

## What is not established

- **what `[edx+0xcdf8f]` is.** It selects within an era and it is not a field this project has named. Its
  range is checked against 3, so it is 0 to 4.
- **what `0xf3c40` does** with `(map, era)`. It is called with both and is presumably the redraw or the map
  reload, and it was not read.
- **why era 4 exists** as a written value when no table indexes it.
- **whether the 40-byte stride is a structure.** Five destinations at a regular 0x28 spacing looks like one,
  but only the X and Y of each have been read.

**[Inside a turn](inside-a-turn.md)** **[Transport](transport-field.md)** **[CFG findings](cfg-findings.md)**
