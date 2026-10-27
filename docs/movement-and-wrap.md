# Movement and the torus wrap

**Verdict: the wrap is arithmetic on a 16 by 16 grid, and it applies to `MAP_X`/`MAP_Y`, not to
`PLAYER_X`/`PLAYER_Y`.** Read from `0xef5b4`. The step deltas come from a four-way direction
selector. What is not yet read is the blocking test and the food and turn decrements.

This answers part of plan item 5b. Recorded as partial rather than complete, because two of the
four things the item asks for were not found.

## The wrap routine

`0xef5b4`, 240 bytes, frameless in effect (it reads its arguments from a jump table rather than
the stack). The load-bearing part:

```asm
ef5bb  movsx  edx, [0xd6e68]     ; direction, 1..4
ef5c2  dec    edx
ef5c3  cmp    edx, 0x3
ef5c6  ja     done               ; anything outside 1..4 does nothing
ef5c8  jmp    [4*edx+0xef3d0]    ; four cases
```

Each case sets two values, a step in x and a step in y:

| case | `edi` (dx) | `[ebp-4]` (dy) |
|---|---|---|
| `0xef5eb` | 0 | +2 |
| `0xef5f6` | -2 | 0 |
| `0xef5fd` | +2 | 0 |
| fallthrough at `0xef609` | unchanged | 0 |

Then the arithmetic:

```asm
ef609  mov eax, [0xceca0]        ; current record index
       ... 351-byte record stride ...
ef619  mov esi, edi
ef61b  add esi, [edx+0xcdf63]    ; esi = MAP_X + dx
ef621  mov ebx, [edx+0xcdf67]
ef627  add ebx, [ebp+-0x4]       ; ebx = MAP_Y + dy
ef62a  cmp esi, 0xf
ef62d  jle  skip
ef62f  sub esi, 0x10             ; if (x > 15) x -= 16
skip:
ef632  and esi, esi
ef634  jge  skip2
ef636  add esi, 0x10             ; if (x < 0)  x += 16
skip2:
ef639  cmp ebx, 0xf
ef63c  jle  skip3
ef63e  sub ebx, 0x10             ; if (y > 15) y -= 16
skip3:
ef641  and esi, esi              ; note: tests esi again, not ebx
ef643  jge  skip4
ef645  add ebx, 0x10             ; if (x < 0)  y += 16
```

**The wrap constant is 16.** Coordinates are compared against `0xf` and corrected by `0x10`, so
the addressed map is 16 by 16 and movement is toroidal in both axes.

**One oddity worth recording rather than smoothing over.** The second y correction at `0xef641`
tests `esi` rather than `ebx`. The raw bytes there are `23 f6`, which is `and esi,esi` and not a
mis-decode, so the source or the compiler really did test the x value twice. It does not change
behaviour when only one axis moves, and it is recorded here as unexplained.

## The fields, and a correction to an assumption

| field | offset | written by |
|---|---|---|
| `MAP_X` | `0xcdf63` | this routine, from `MAP_X + dx` |
| `MAP_Y` | `0xcdf67` | this routine, from `MAP_Y + dy` |
| `PLAYER_X` | `0xcdf6b` | the roster loader at `0xead78`, from parsed text |
| `PLAYER_Y` | `0xcdf6f` | same |

They are four bytes apart and both exist, so **the wrap operates on the map coordinate pair, not
the player coordinate pair.** `docs/live-fieldmap.md` observed `PLAYER_X` change by one on a west
step, which is consistent if both are updated, but this routine only shows the `MAP_` writes.

Somebody reading "torus wrap on the player position" would look in the wrong place. That was my
own first assumption.

## The collision check, which is not a separate routine

After the wrap, the destination is tested by calling `0xfb41c`:

```asm
ef648  push ebx
ef649  push esi
ef64a  push [0xd4a68]           ; the current map id
ef650  call 0xfb41c              ; returns the destination cell
ef655  add esp, 0xc
ef658  and eax, eax
ef65a  je   commit               ; zero means passable
ef65c  push 0x3
ef65e  call 0xe1b44              ; blocked: a sound
ef663  push 0x46dc
ef668  push 0x7
ef66a  call 0xe5854              ; blocked: a message
```

`0xfb41c` takes the destination x and y, computes `(x << 8) + (y << 4)`, and reads a cell:

```asm
fb428  shl eax, 0x8             ; x << 8
fb42d  shl edx, 0x4             ; y << 4
fb430  add edx, eax
fb432  mov eax, [edx+0xd4a7c]
fb43a  jne  return               ; cell+8 nonzero -> returns 0
fb448  mov eax, [edx+0xd4a78]
fb44e  cmp eax, 0xffffffff
fb451  jne  return               ; cell+4 != -1 -> returns -1
fb45f  mov eax, [edx+0xd4a74]    ; otherwise the cell at +0
```

The stride is 16 bytes per cell and 256 per row, which is the same 16 by 16 grid the wrap uses.

**`0xfb41c` is not yet in `docs/routines.json`.** It is read here and unregistered, and an earlier
draft of this page wrongly said it was.

If the cell is passable the position is committed:

```asm
ef68b  mov [edx+0xcdf63], esi    ; MAP_X = new x
ef691  mov [0xd4a4c], esi        ; a mirrored copy
ef697  mov [edx+0xcdf67], ebx    ; MAP_Y = new y
ef69d  mov [0xd4a50], ebx        ; mirrored copy
```

**Note the mirrored copies at `0xd4a4c` and `0xd4a50`.** The position is stored twice, one copy in
the roster record and one in a global pair, and both are written on every successful step.

## What is still not read

**The food and turn counters.** Not found in this routine and not searched for yet. They belong to
whatever drives the turn, which is plan item 1b and is `BLOCKED ON INPUT`.

**The direction numbering.** The four cases give deltas but the mapping from arrow keys to
direction 1..4 was not confirmed here. `docs/bot-build.md` records that a west step moved
`PLAYER_X` down by one, so direction to delta is observable but not yet tied to this selector.

**The jump table at `0xef3d0`.** Four dwords read from `0xef3d0` are not valid code addresses
when read directly, and the disassembly of the targets decodes as data. The table is probably
stored as offsets or with a different base. The inline cases above are reliable and the table
itself is left unresolved rather than guessed at.

## Related

- `docs/live-fieldmap.md`: the field addresses, observed against a paused VM
- `docs/record-layout.md`: the 351-byte record and its fields
- `docs/cell-fields.md`: what a map cell contains
- `docs/routines.json`: `0xfb41c`, the destination test this routine calls
