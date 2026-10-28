# The moongate: one switch, four destinations

A moongate step was captured from a cold-booted machine at era 2, position (16,17), map 117. It came out
at **era 0**, position **(29,56)**, map 118, with HP, gold and inventory unchanged.

## The whole routine, read

The captured write to `ERA` is at `0xf99dd`, and the block above it is a four-way destination table.

```
0xf9976  mov eax,[0xceca0]        ; the active character index
0xf9980  mov ebx,[0xd4614]        ; default era's Y
0xf9986  sub edi,edi              ; era 0
0xf9988  jmp 0xf99c1
0xf998a  mov esi,[0xd4638]        ; destination X, era 1
0xf9990  mov ebx,[0xd463c]        ; destination Y
0xf9996  mov edi,1
0xf999d  mov esi,[0xd4660]        ; destination X, era 2
0xf99a3  mov ebx,[0xd4664]
0xf99a9  mov edi,2
0xf99b0  mov esi,[0xd4688]        ; destination X, era 3
0xf99b6  mov ebx,[0xd468c]
0xf99bc  mov edi,3
0xf99c1  mov eax,[0xceca0]        ; record index again
0xf99c6..0xf99cf                  ; the 351 stride
0xf99d1  mov [edx+0xcdf6b],esi    ; PLAYER_X = destination X
0xf99d7  mov [edx+0xcdf6f],ebx    ; PLAYER_Y = destination Y
0xf99dd  mov [edx+0xcde99],edi    ; ERA = the destination's era
0xf99e3  push [edx+0xcdf57]       ; the map id
0xf99e9  push edi                 ; the new era
0xf99ea  call 0xf3c40             ; redraw
```

**So a moongate is a teleport to a fixed position in a chosen era.** The destinations are constants read
from `0xd4614`, `0xd4638` and so on, not computed.

## Which branch ran

Only one:

```
0xf9986 -> 0xf99c1     era 0
```

`0xf998a`, `0xf999d` and `0xf99b0`, the era 1, 2 and 3 destinations, were **not reached**. That matches the
observed transition from era 2 to era 0, and it confirms the branch is selected by the era table rather
than by anything the player controls at the moment of stepping.

## What the capture established

| claim | evidence |
|---|---|
| a moongate changes ERA | `era` read 2 before, 0 after |
| it also moves the player | (16,17) to (29,56) in one step |
| it does not change HP, gold or inventory | `peek.js` before and after, only `era`, `px`, `py`, `map` differ |
| era is written from a register | all 11 immediate stores to `0xcde99` were unreached, and `0xf99dd` is `mov [edx+0xcde99],edi` |
| four destinations exist, one per era | the four-way table at `0xf9986` to `0xf99bc` |
| the era-0 branch is the one taken | `0xf9986 -> 0xf99c1`, the other three unreached |

## What is not established

- **what selects the destination.** The four branches exist and only one ran, but the code that chooses
  between them is above `0xf9976` and was not read. So it is not known whether the choice is the current
  era, a cycle, a fixed warren, or something the player can influence.
- **what `0xf3c40` does with `(map, era)`.** It is called with both and is presumably the redraw or the map
  reload, and it was not read.
- **whether all four eras' destinations are reachable.** One transition was captured, from era 2 to era 0.
- **the value at `0xd4614`, the era-0 default.** The era-0 branch sets `edi` to 0 with `sub edi,edi` and
  loads only a Y coordinate, so its X must come from somewhere else. That gap is unexplained and should be
  read before this page is relied on.

**[Inside a turn](inside-a-turn.md)** **[Transport](transport-field.md)** **[CFG findings](cfg-findings.md)**
