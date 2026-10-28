# Saving the game, and the separate loader

Two captures with known actions: a save followed by a quit, and a Journey Onward from the menu. Together
they separate the write path from the read path, and the two turn out not to share a routine.

## Both paths, measured

| capture | action | new instructions | save routine `0xeb374` reached |
|---|---|---|---|
| `save1` | one save | 4,398 | **yes**, all 75 fields |
| `savequit` | save then quit to menu | 5,337 | **yes** |
| `journey` | Journey Onward | 8,347 | **no** |

So **Journey Onward does not touch the writer.** `docs/six-named-routines.md` called `0xeb374` "the save
and load system"; the loader is a different routine, and this is the measurement that separates them.

## The writer, `0xeb374`

It formats every character field as `NAME=%d` or `NAME=%c` in roster order, and **all 75 of its format
strings were pushed** during `save1`, so it ran first field to last and that capture is not a partial view.

```
0xeb36e  push [edx+0xcde72]      ; WISDOM
0xeb374  push 0x280c             ; "WISDOM=%d\n"
0xeb37c  call 0x101748           ; the formatted write
0xeb392  movzx eax,[ebx+0xcde7a] ; RACE, a byte
0xeb39a  push 0x282c             ; "RACE=%c\n"
```

The `%c` fields are read with `movzx` from a byte while `%d` fields use a dword, which is why the file's
field widths are not uniform four-byte slots. **`0xeb374` has no static caller**: the capture entered it
from `0xeb36e` inside the same function, so it is reached by fall-through rather than by `call`. That is
one of the indirect-entry cases the recompiler lists as unresolved, and this is the answer for it.

### Opening the file for writing

```
0xeb1b3  cmp edi, 6                  ; a retry count
0xeb1c4  push 0x26e4                 ; "A:\ROSTER1.UT2"
0xeb1c9  call 0x100f34               ; fopen
0xeb1d4  jne 0xeb1f6                 ; success -> write the header
0xeb1d6  push 0x26f4                 ; "Data Save Error!"
0xeb1f6  push 0x2748                 ; "Roster data:ULTIMA II for FM-TOWNS"
```

That header string is the one `docs/save-files.md` records at the start of the roster file. Both captures
reached `0xeb1f6` and neither reached `0xeb1d6`, so both took the success branch.

`ROSTER1.UT2` appears **once** as a filename. An earlier reading of `six-named-routines.md` counted three
uses; the other two addresses it quoted are the field format strings `MAGIC=%d` and `MHP=%d`, which sit
nearby and are not filenames.

## The loader is a different routine, at `0xe0e90`

Found by diffing the captures: instructions present in `journey` and absent from `savequit`, then looking
for string pushes among them. Exactly one was a mode string.

```
0xe0ed0  push 0x106a              ; "rb"
0xe0ed5  push edi                 ; the filename
0xe0ed6  call 0x100f34            ; fopen
0xe0ede  mov [0xe45c], eax        ; store the FILE*
0xe0ee3  and eax, eax
0xe0ee5  jne 0xe0ef1              ; opened
0xe0ee7  mov eax, -1              ; failure returns -1
0xe0ef1  push 0
0xe0ef3  push 0x354               ; 852 bytes
0xe0ef8  push [0xe45c]
0xe0efe  call 0x101524            ; fread
```

**`0x354` is 852**, and the roster slot on the save disk is 917 bytes with the record region beginning at
byte 47, so 917 minus the 65-byte gap is consistent with an 852-byte read. That is a match worth noting
rather than a proof, since the exact partition of the 917 has not been re-measured here.

## What this establishes

| claim | evidence |
|---|---|
| the writer is `0xeb374` | all 75 format strings reached in `save1` |
| the writer runs first field to last | no gap in the sequence |
| Journey Onward does not use the writer | 8,347 instructions, `0xeb374` absent |
| the loader is separate, at `0xe0e90` | present in `journey`, absent in `savequit` |
| the loader opens with `"rb"` and reads 852 bytes | instruction operands |
| the save succeeded | `0xeb1f6` reached, `0xeb1d6` not |

## What is not established

- whether death uses the same loader. It is the other place a save is read, and `death1` predates knowing
  what to look for, so it was not checked
- how the loader parses the text back. It reads 852 bytes into a buffer and the parse has not been read
- whether `852` is the whole record or a prefix. The arithmetic is suggestive and not measured
- what the other 69 function entries in `save1` do. Most are probably text and pane helpers, because a save
  redraws the screen

**[Save files](save-files.md)** **[Six named routines](six-named-routines.md)** **[CFG findings](cfg-findings.md)**

