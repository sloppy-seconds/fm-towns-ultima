# Saving the game: the full serialiser, captured

A save was taken with a differential capture armed, and the whole roster writer ran inside the window.
This is the largest clean capture in the project so far and the first with a fully understood action.

## What the capture contains

| | |
|---|---|
| action | one save, plus the returns to the game |
| new instructions | **4,398** |
| function entries among them | **70** |
| state change | food minus 15, map plus 1, nothing else |

The state check is what makes it clean: only the turn counter moved. No damage, no gold, no position
change, so the capture is the save path and not a fight that happened to be nearby.

## The roster serialiser is `0xeb374`, and it ran to completion

`0xeb374` formats every character field as `NAME=%d` or `NAME=%c` in roster order. **All 75 of its format
strings were pushed during the capture**, which means the writer ran from its first field to its last and
the capture is not a partial view.

The head of it:

```
0xeb36e  push [edx+0xcde72]     ; WISDOM
0xeb374  push 0x280c            ; "WISDOM=%d\n"
0xeb379  push esi
0xeb37c  call 0x101748          ; the formatted write
0xeb381  push [ebx+0xcde76]     ; INTELLIGENCE
0xeb387  push 0x2818            ; "INTELLIGENCE=%d\n"
0xeb392  movzx eax,[ebx+0xcde7a]  ; RACE, a byte
0xeb399  push eax
0xeb39a  push 0x282c            ; "RACE=%c\n"
```

Two details fall out of that. The field order in the writer matches `docs/save-files.md` exactly, and the
`%c` fields (`RACE`, `PROFESSION`, `SEX`) are read with `movzx` from a **byte** while the `%d` fields use a
dword, which is why the file's field widths differ from a naive 4 bytes each.

**`0xeb374` has no static caller.** The capture entered it from `0xeb36e`, which is inside the same
function, so the whole thing was reached by falling into it rather than by a `call`. That is one of the
indirect-entry cases the recompiler lists as unresolved, and this capture is the answer for this routine.

## The string constants sit in the writer, interleaved

The format strings are pushed from addresses in `0x280c` upward, immediately before each field's value is
pushed. So the routine is not a loop over a table: **each field is written by its own straight-line code**,
and the format string is an immediate in the instruction stream.

That explains why `docs/save-files.md` could read the whole schema out of the binary in order, and it means
a reimplementation needs the field list rather than a format-string table.

## What this establishes

| claim | evidence |
|---|---|
| `0xeb374` is the roster writer | all 75 `NAME=` format strings reached |
| the writer runs first field to last | no gap in the sequence |
| field order matches `docs/save-files.md` | `WISDOM`, `INTELLIGENCE`, `RACE`, `PROFESSION`, `SEX`, `MAGIC`, `HP` |
| `%c` fields are bytes, `%d` fields are dwords | `movzx` against a byte for RACE |
| the writer is entered by fall-through, not `call` | no static caller for `0xeb374` |
| the save is one turn | food minus 15, map plus 1 |

## What is not established

- where the file is opened and written, and under what name. `0xeb1c4` pushes `A:ROSTER1.UT2` but that is
  a different site and its role was not read
- whether a load reuses the same routine, which the format strings cannot distinguish
- what the 70 function entries reached alongside the writer do. Most are probably in `0xe5xxx`, the text
  and pane helpers, because a save redraws the screen
- whether the "exit to menu?" prompt that appeared afterwards writes anything else. It was declined and
  no capture was running

## There is no load option, and that changes how to read the routine

Reported from play: **the game has no load command outside the starting menu.** The only ways a save is
read are choosing Journey Onward at the start, and dying.

That matters because `docs/six-named-routines.md` describes `0xeb374` as "the save and load system" and
lists "what its three `ROSTER1.UT2` uses each do" as an open question. The observation narrows that
question considerably.

### What the three `ROSTER1.UT2` sites actually are

The addresses the page quotes were not the strings. Reading them shows three different constants:

| site | constant | text |
|---|---|---|
| `0xeb1c4` | `0x26e4` | `A:\ROSTER1.UT2` |
| `0xeb3d4` | `0x2850` | `MAGIC=%d\n` |
| `0xeb3f6` | `0x2864` | `MHP=%d\n` |
| `0xeb6ca` | `0x2a28` | `BRASS_BUTTON=%d\n` |

So `ROSTER1.UT2` appears **once** as a filename, and the other two sites quoted on that page are field
format strings that happen to sit near it. The filename is pushed at `0xeb1c4`, and every field after it
is written by straight-line code.

### The open sequence, read

```
0xeb1b3  cmp edi, 6                  ; a retry count
0xeb1b8  push 0x2698                 ; the give-up message
0xeb1bf  push 0x26e0
0xeb1c4  push 0x26e4                 ; "A:\ROSTER1.UT2"
0xeb1c9  call 0x100f34               ; fopen
0xeb1d1  xchg esi, eax
0xeb1d2  and esi, esi
0xeb1d4  jne 0xeb1f6                 ; success -> write the header
0xeb1d6  push 0x26f4                 ; "Data Save Error!"
0xeb1f6  push 0x2748                 ; "Roster data:ULTIMA II for FM-TOWNS"
```

`0x26f4` is `Data Save Error!` and `0x2748` is `Roster data:ULTIMA II for FM-TOWNS`, which is the file
header recorded in `docs/save-files.md`. **The capture reached `0xeb1f6` and did not reach `0xeb1d6`**, so
the save succeeded and took the success branch.

### What this leaves open

Since the write path is now traced from filename to header to all 75 fields, the remaining question is the
**read** path: which code opens the same file and parses it back, and whether that is a separate routine or
the same one entered at a different offset. A death and a Journey Onward would each exercise it, and neither
has been captured.

**[Save files](save-files.md)** **[Six named routines](six-named-routines.md)** **[CFG findings](cfg-findings.md)**
