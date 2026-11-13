# The roster field map

Every save field the game writes, with the address it is read from in the character record. This
page exists because the map is what makes a scenario launch possible: `MAP`, `DUNG_X` and `DUNG_Y`
are named save fields, so a dungeon start is a save edit rather than a walk through the menus.

`tools/rosterfields.py` reproduces the whole table from `ENCHANT.EXP`:

```
tools/.venv/bin/python tools/rosterfields.py ENCHANT.EXP
```

## The writer is the map

The roster writer serialises the character record as text, one `NAME=%d` line per field. Every line
is built the same way, and the pattern is the evidence:

```
push dword ptr [ebx + 0xcdf6b]   ; the value
push 0x2b3c                      ; the format string
push esi                         ; the buffer
call 0x101948                    ; sprintf
```

so the field is the address in the value push and the name is the format string. `ebx` is
`351 * index` with no base added, measured at the writer's entry:

```
mov  eax, edi
lea  edx, [eax + eax*4]    ; 5i
lea  edx, [eax + edx*2]    ; 11i
shl  edx, 5                ; 352i
sub  edx, eax              ; 351i
```

The writer emits 46 fields. The stats above `WAND` are written by an earlier block that this tool
does not scan.

## The trap: immediates are runtime addresses, strings are file offsets

**This cost a session and produced a confident, wrong field map.** The `MP` header is 512 bytes, so
the runtime address of a string is its file offset minus `0x200`. A `push` immediate is a runtime
address, so the string it names lives at `imm + 0x200`, not at `imm`.

Reading at the immediate gives the label one string block later. The result is still an ascending
list of fields with plausible names, so nothing looks wrong. Measured 2026-11-14:

| read at | label for the field at `0xcdf6b` |
|---|---|
| the immediate | `MACE=%d` |
| the immediate `+ 0x200` | `PLAYER_X=%d` |

`PLAYER_X` is correct, and two independent code paths say so without referring to the writer at all:

- `0xf77b0` compares `[+0x338]` against `[+0x286]` and `[+0x342]` against `[+0x290]`, a two-coordinate
  comparison whose pairs are `GATE_X`/`PLAYER_X` and `GATE_Y`/`PLAYER_Y`
- `0xeee55` reads `[+0x286]` and `[+0x290]` and then calls the sprite-slot allocator `0xe3010` with
  cell `0x7c` at the fixed centre `(5,5)` of the 11x11 view, which is where the player's own marker
  goes

Both of those agree with `docs/live-fieldmap.md`, which measured `PLAYER_X` by watching it change on
a west step. The wrong map was the only thing that disagreed.

## The fields that matter for a scenario launch

Record base `0xcde4d`, size 351, data offset. Linear address is the offset plus the `0x400000` data
segment base.

| field | data offset | linear |
|---|---|---|
| `MAP` | `0xcdf57` | `0x4cdf57` |
| `MAP_X` | `0xcdf5b` | `0x4cdf5b` |
| `MAP_Y` | `0xcdf5f` | `0x4cdf5f` |
| `DUNG_X` | `0xcdf63` | `0x4cdf63` |
| `DUNG_Y` | `0xcdf67` | `0x4cdf67` |
| `PLAYER_X` | `0xcdf6b` | `0x4cdf6b` |
| `PLAYER_Y` | `0xcdf6f` | `0x4cdf6f` |
| `WORLD` | `0xcdf8f` | `0x4cdf8f` |
| `GATE_X` | `0xcdf9f` | `0x4cdf9f` |
| `GATE_Y` | `0xcdfa3` | `0x4cdfa3` |
| `GATE_TIME` | `0xcdfa7` | `0x4cdfa7` |

`GATE_X` lands on `0xcdf9f`, which is exactly the address the comparison at `0xf77b0` uses, so the
gate pair is confirmed from the code rather than from the text.

## What this does not settle

**The 4-byte question in `docs/live-fieldmap.md` is still open.** That page observes `MAP` at
`0xcdf53` and `PLAYER_X` at `0xcdf6b`, 24 bytes apart, which needs five dwords between them. The
writer's sequence has `MAP 0xcdf57`, `MAP_X`, `MAP_Y`, `DUNG_X`, `DUNG_Y`, `PLAYER_X 0xcdf6b`, 20
bytes and four dwords. So either memory has one field there that the writer does not emit, or one of
the two `MAP` addresses is wrong. `0xcdf53` is `SCORE` in the writer's map. **Not resolved here**, and
the writer alone cannot resolve it.

**Whether the loader honours the text fields is unverified.** There is no `sscanf` in the image: all
28 references to the format table are `sprintf`. A search for a positional parse found none, so how
the roster text becomes memory is still unknown, and a save edited to a dungeon start has not been
shown to load into one.

## Crafted saves must keep every field the same width

`node tools/savedisk.js set` rewrites a value and does not pad it, so a longer or shorter number
changes the file's byte length and shifts every slot boundary after it. Measured 2026-11-14: setting
`FOOD=40000` to `555` shrank `ROSTER1.UT2` from 3339 to 3338 bytes and moved slot 0 from bytes
47-969 to 47-968, after which the game's Select Player screen showed that slot with no name.

Craft values that are the same number of digits as the ones already there, and check the byte count
is unchanged before drawing any conclusion from what the game does:

```
node tools/savedisk.js cat DISK ROSTER1.UT2 | wc -c     # must equal the original
```
