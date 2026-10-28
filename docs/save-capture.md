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

## `0xe0e90` is a general file loader, and Journey Onward calls it for the music

Found by diffing the captures: instructions present in `journey` and absent from `savequit`, then looking
for string pushes among them. Exactly one was a mode string.

```
0xe0ed0  push 0x106a              ; "rb"
0xe0ed5  push edi                 ; the filename, passed as an argument
0xe0ed6  call 0x100f34            ; fopen
0xe0ede  mov [0xe45c], eax        ; store the FILE*
0xe0ef1  push 0                    ; whence = SEEK_SET
0xe0ef3  push 0x354                ; offset 852
0xe0ef8  push [0xe45c]
0xe0efe  call 0x101524            ; fseek
0xe0f13  push 0x20                ; 32
0xe0f17  lea eax,[ebp-0x88]
0xe0f1e  call 0x100c58            ; fread
```

**`0x101524` is `fseek`, not `fread`.** It bounds-checks its third argument against 0 to 2, which is a
seek origin, while `0x100c58` is the one that pulls a FILE* and tests its flags at `+0xc`. So the sequence
is "seek to 852, then read 32 bytes", not "read 852 bytes".

### It loads music, not the roster

The filename is an argument, and the caller at `0xe0e50` passes `\SOUND\ULTIMA.FMB`. So `0xe0e90` is a
general file loader, used here for the soundtrack, and **Journey Onward reaches it because it starts the
music rather than because it reads the save.**

An earlier version of this page called it the menu-side roster loader, on the strength of its mode string
and its presence in `journey` alone. Both observations were right and the inference was not: a `"rb"` open
in a capture that has just entered the game is not evidence about the save.

There is no text parsing in it either. The per-byte call in its read loop, `0xfe220`, sets `ah=0x12` and
calls `0xfe2c8`, which is a BIOS entry rather than a character handler.

## Death reads the roster, and is the only roster reader found

So the reader identified so far is the one death uses, at `0xe9d2c`, in `"rt"` text mode. Whether Journey
Onward reads the roster by some other route **is not established**: `journey` contains neither `0xeb374`
nor `0xe9d2c`, and `0xe0e90` turned out to be the music.

## Death reads the roster by a text path

`death1` was captured before the loader was known, so it was checked afterwards against every candidate.
The answer was neither of the two routines already found.

| routine | reached by death1 |
|---|---|
| writer `0xeb374` | **no** |
| loader `0xe0e90` (`"rb"`, fread 852) | **no** |

So death opens the roster through a **third path**, and it is a text reader rather than a binary one.

### The death-side reader

```
0xe9dd2  push 0x253e              ; "rt"
0xe9dd7  push 0x2544              ; "A:\ROSTER1.UT2"
0xe9ddc  call 0x100f34            ; fopen
0xe9de7  jne 0xe9e05              ; opened
0xe9de9  push 0x2554              ; failure message
0xe9df3  mov eax, -1
0xe9e05  push edi
0xe9e06  push 0x4f               ; 79 bytes
0xe9e08  lea eax,[ebp-0x50]
0xe9e0c  call 0x10078c            ; fgets
0xe9e14  cmp byte [ebp-0x50], 0x52   ; 'R'
```

`0x52` is `R`, the first character of `Roster data:ULTIMA II for FM-TOWNS`, so the reader checks the
header before parsing. The mode is **`rt`**, text, not `rb`.

### A correction this forced

An earlier reading of this same function, `0xe9d2c`, concluded it was a loop that blanked and rewrote a
name field. The loop and the string copy are real, but the framing was wrong: **this is the death-side
roster reader**, and the clear-then-copy is the pass that reads each `NAME=` line back into the record.

That also explains why the slot letters `E`, `D`, `B` survived the clear when it was measured earlier.
The clear happens first and the read then writes the value from the file, which is exactly what was
observed and misread as "the store did not run".

### What the file paths actually are

| path | routine | mode | use |
|---|---|---|---|
| write | `0xeb374` | header then 75 fields | saving |
| read | `0xe9d2c` | `"rt"` | death |
| not the roster | `0xe0e90` | `"rb"` | loads `\SOUND\ULTIMA.FMB` |

Only one roster reader has been found, and it is the death path. The menu path is **open**: `journey`
reached neither `0xeb374` nor `0xe9d2c`, so either it finds another reader that has not been noticed, or
the character state it restored had already been in memory.

That second possibility is worth stating because it would be easy to miss. `journey` was taken from the
starting menu in the same emulator run as the save, so the process may never have lost the record. A
capture taken after a **cold boot** followed by Journey Onward would settle it, and none has been taken.

## What this establishes

| claim | evidence |
|---|---|
| the writer is `0xeb374` | all 75 format strings reached in `save1` |
| the writer runs first field to last | no gap in the sequence |
| Journey Onward does not use the writer | 8,347 instructions, `0xeb374` absent |
| death reads the roster in `"rt"` mode | `0xe9dd2` pushes the mode and filename, then `fopen` |
| `0xe0e90` is a file loader, not the roster | its caller passes `\SOUND\ULTIMA.FMB` |
| the save succeeded | `0xeb1f6` reached, `0xeb1d6` not |

## What is not established

- **how the menu restores a character at all.** Two captures of Journey Onward disagree with each other:
  `journey` reached neither the writer nor a roster reader, while `journey2` reached the writer's full
  open sequence (`0xeb1c4` through `0xeb1f6`). So the menu path both can write and does something else in
  other runs, and no capture has separated the cases
- whether a **cold boot** changes it. Both menu captures were taken in the same emulator process as the
  save, and the supervisor had been running 3 hours 33 minutes at the second one, so in neither case can
  it be shown that the character had to come from disk. A genuine cold boot followed by Journey Onward is
  the measurement that has not been taken
- how the death reader parses the text it reads. It checks the header byte `'R'` and then loops, and the loop
  body was not read
- what the other 69 function entries in `save1` do. Most are probably text and pane helpers, because a save
  redraws the screen

A caution from the two warm runs, because it affects how to read any future capture: the same menu choice
produced two different instruction sets, one of which wrote the roster and one of which did not. A single
capture of an action is not proof that the action always does the same thing.

**[Save files](save-files.md)** **[Six named routines](six-named-routines.md)** **[CFG findings](cfg-findings.md)**

