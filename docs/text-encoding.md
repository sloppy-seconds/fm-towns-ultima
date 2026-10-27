# The text encoding: `0xEB` escapes a font code, and the table is not in the binary

**Found while reading `0xeeda8`. The game's strings are not Shift-JIS and not ASCII: `0xEB`
introduces a font character code. The code-to-glyph table is not established, so no string in this
binary can be read yet.**

## What `0xeeda8` does

The `funtriage` ranking put it at 13, not the top, because it calls no TBIOS stubs. It is a
different kind of target: a game function touching all three object-table globals.

```
0xeeda8  push ebp / mov ebp,esp / sub esp,0x20
0xeedb1  mov [ebp-0x1d], 0
0xeedb5  push 7 ; call 0xe6b3c
0xeedbc  push 0x42dc ; push 7 ; call 0xe5854     output string 0x42dc
0xeedc8  mov eax,[0xceca0]                       the character index
0xeedcd  lea/lea/shl/sub                         index * 95
0xeeddb  cmp [edx+0xcde56], 1                    a per-character flag
0xeeddf  je 0xeee20
0xeedf2  push 0x42f4 ; push 7 ; call 0xe5854     output string 0x42f4
0xeee05  push 0x4308 ; push 7 ; call 0xe5854     output string 0x4308
0xeee20  push 7 ; call 0xe28c8                   a different path
0xeee30  push 0x4334 ; push 7 ; call 0xe5854
```

So `0xe5854` takes **(string, channel)** and is the text output routine, and `0xe6b3c`, `0xe6e68`,
`0xe28c8` are companions on the same channel 7. `0xe5854` is the highest-degree function in the
`0xe5xxx` cluster and is now a known anchor: **every call to it is a text output.**

The branch on `[edx+0xcde56]` is the same flag the object lookup used in
[movement-wrap-found.md](movement-wrap-found.md), so the three paths are three states of one
condition.

## The string encoding

`0x4308` decodes as Shift-JIS: **`~しました`**. The others do not, because they contain `0xEB`:

```
0x42dc   EB 42 EB 5A EB 67 EB 5C EB 5E EB 65 EB 5E EB 5D   then 24 spaces
0x4334   EB 6C 2E 6D EB 52 EB 69 EB 5A EB 5C EB 5E 2E 6E
```

So the format is: plain ASCII bytes are literal, and `0xEB <byte>` is a **character code**. The
trailing spaces are field padding, which says these are column templates rather than messages.

**The codes are not ASCII.** Reading `EB 42` as `B` gives `BZg\^e^]`, which is not a word. It is a
font glyph index, and the glyph table is not in `ENCHANT.EXP`.

## What this blocks, and how much

**Every string in the binary is unreadable until the glyph table is found.** That includes:

- the menu commands at `0x1673` (`A)ttack  J)ump  S)teal`), whose letters are plain ASCII and do
  read, so the table only affects the `0xEB` runs
- the 81 distinct strings in `extracted/strings.json`
- the message table at `0x1518` with its 56-byte stride

**Three attempts to find the table, all failed, and all recorded here.**

**First, `GAI.TIF`.** `tools/fontgrid.js` names it as a 352 by 352 character sheet with 184 empty
columns and 103 empty rows. Running the tool on the extracted `extracted/u2/title/gai.png` gives
**one ink run per axis**, a single 168 by 249 picture in the middle of the sheet. That is a title
graphic, not a grid of glyphs, so `GAI.TIF` is not a font. The earlier note about 184 empty columns
was reading a sparse picture, not a character sheet.

**Second, a font file among the assets.** The disc carries 63 `.TIF` files and no `.FNT`, `.DAT` or
any other font container. Nothing there is a glyph table.

**Third, `GAIJI2.COM`.** That name means user-defined characters and it is a Fujitsu program,
6,849 bytes, banner `Copyright FUJITSU LIMITED 1989-1990`, entered by the usual COM `jmp +0x3c`.
It is a driver, not a table: its dense data region is 193 bytes of code, and its system calls are
`int 21h` with `AH=09` (print) at two sites and `AH=3e`/`AH=3f` (close and read) at two more. Nothing
in it is a glyph bitmap.

**Where that leaves it.** The glyphs are most likely a TBIOS service rather than game data, which is
consistent with there being no font file on the disc: `fmtownskit`'s `tbiosld.py` lists a `FNT`
module among the TBIOS components for the modular builds. Naming a character code therefore means
either reading the font module out of `TBIOS.BIN`, or reading AH `0x0c`, `0x15`, `0x16` and `0x17` in
[first-ranked-function.md](first-ranked-function.md), which are the calls the text path uses.

Unproven in both cases. What is proven is that the table is not in the assets and not in
`GAIJI2.COM`.

## What was tried and failed

Reading `EB 42` as `0x41 + (code - 0x41)` is a tautology: it returns the code unchanged and produced
`BZg\^e^]`. Recorded because the first version of that test looked like it was doing something.

Trying Shift-JIS on the whole string fails at byte 0 with `illegal multibyte sequence`, which is what
established that `0xEB` is not a Shift-JIS lead byte but an escape.

## What is established

| | |
|---|---|
| `0xe5854` | text output, takes (string address, channel) |
| channel 7 | used by `0xe6b3c`, `0xe6e68`, `0xe28c8`, `0xe5854` together |
| `0xEB` | escapes one font character code |
| the code table | **not found**, and it is not in `ENCHANT.EXP` |
| `0xcde56` | a per-character flag, `1` selecting a different output path |

That is four anchors where there were none, and one blocker stated plainly rather than worked
around.
