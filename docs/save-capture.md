# Saving the game, and the roster loader shared by menu and death

Four captures with known actions separate the write path from the read path, and the read path turns out
to be one routine with two callers.

## The four captures

| capture | action | new instructions | writer `0xeb374` | reader `0xe9d2c` |
|---|---|---|---|---|
| `save1` | one save | 4,398 | **yes**, all 75 fields | no |
| `savequit` | save then quit | 5,337 | **yes** | no |
| `journey` | Journey Onward, warm | 8,347 | no | no |
| `journey3` | Journey Onward, **cold boot** | 7,998 | no | **yes** |

The two warm `journey` runs reached neither, because the emulator process was the same one that made the
save and the character never left memory. **`journey3` is the one that settles it**: the supervisor uptime
was 8.6 seconds when it was armed, so the character could not have been in memory, and it came back as
HP 382, gold 141, `gem` set, at (16,17).

So the writer and the reader are separate routines, and `docs/six-named-routines.md` calling `0xeb374`
"the save and load system" is wrong in the "and load" half.

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

## `0xe0e90` is a general file loader, and it was reached in a warm run for the music

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
in a capture that has just entered the game is not evidence about the save. The cold-boot `journey3` does
**not** reach it, which confirms it is not on the load path.

There is no text parsing in it either. The per-byte call in its read loop, `0xfe220`, sets `ah=0x12` and
calls `0xfe2c8`, which is a BIOS entry rather than a character handler.

## The reader is `0xe9d2c`, called by both menu and death

An earlier version of this page called it "the death-side reader" because death was the first capture to
reach it. The cold boot shows it is the general roster loader.

```
0xe9d2c  push ebp / mov ebp,esp / sub esp,0x60
0xe9d35  mov [0xce71c], 0              ; clear a global
0xe9d3f  push 0x24cc / call 0xe9c44    ; a prompt, before the file opens
0xe9dd2  push 0x253e                   ; "rt"
0xe9dd7  push 0x2544                   ; "A:\ROSTER1.UT2"
0xe9ddc  call 0x100f34                 ; fopen
0xe9e06  push 0x4f                     ; 79 bytes
0xe9e0c  call 0x10078c                 ; fgets
0xe9e14  cmp byte [ebp-0x50], 0x52     ; 'R', the header's first letter
```

The caller in the cold-boot capture is a plain call at `0xebe3b`:

```
0xebe3b  call 0xe9d2c
0xebe40  inc eax
0xebe41  jne 0xebe63                   ; 0 success, -1 failure
0xebe43  push 0x2d60                   ; "Can't load Roster! Push [SPACE]"
```

So the routine returns a status and the caller prints that message when it is -1. `0xebe3b` itself has no
static caller, which fits a menu dispatch rather than a direct `call`.

## The reader's text path

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
| the reader is `0xe9d2c` | reached in the cold-boot `journey3`, absent from every write capture |
| menu and death share the reader | both reach `0xe9d2c` and its `fopen` |
| the reader uses `"rt"` and checks `'R'` | `0xe9dd2` pushes the mode, `0xe9e14` compares the byte |
| a failed load prints a specific message | `0x2d60` is `Can't load Roster! Push [SPACE]` |
| `0xe0e90` is a file loader, not the roster | its caller passes `\SOUND\ULTIMA.FMB` |
| the save succeeded | `0xeb1f6` reached, `0xeb1d6` not |

## What is not established

- how the reader parses the text it reads. It checks the header byte and then loops, and the loop body was
  not read
- what the prompt at `0x24cc` asks, which runs before the file is opened
- what the other 69 function entries in `save1` do. Most are probably text and pane helpers, because a save
  redraws the screen
- whether the `Q` key and any menu save share a path. Only `Q` has been captured

A caution that cost two wrong conclusions in this area, and applies to every future capture: a run reports
what happened during its window, not only the action you intended. `journey2` reached the writer because a
`Q` save happened inside it, and both warm `journey` runs reached neither writer nor reader because the
character had never left memory. The cold-boot run is the only one of the four that answers the question.

**[Save files](save-files.md)** **[Six named routines](six-named-routines.md)** **[CFG findings](cfg-findings.md)**

