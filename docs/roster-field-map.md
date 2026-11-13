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

## What `MAP` means, and how the game uses it

`MAP` is bounds-checked as a small index, not compared for one special value. `cmp dword
[edx+0xcdf57], 4` occurs six times in `ENCHANT.EXP`, and the pair at `0xe2057` and `0xe20ab` is what
names the field:

```
cmp  dword ptr [edx + 0xcdf57], 4
jge  0xe206a
push dword ptr [edx + 0xcdf6b]      ; MAP < 4  -> PLAYER_X
jmp  0xe2082
0xe206a:
push dword ptr [edx + 0xcdf63]      ; MAP >= 4 -> DUNG_X
```

and the same shape for `PLAYER_Y` against `DUNG_Y`. So maps `0`-`3` are the four overworld maps and
`MAP >= 4` is the dungeon case, which is why `DUNG_X`/`DUNG_Y` exist at all.

**The view is not chosen from this field either.** `MAP` is mirrored into a global at `0xcda6c` by `mov
dword ptr [edx + 0xcdf57], eax` followed by `mov dword ptr [0xcda6c], eax` at `0xf34f6`, and the
drawing routine branches on the **mirror**: `cmp dword ptr [0xcda6c], 0` at `0xe8169`, and six
`cmp dword ptr [0xcda6c], -1` tests elsewhere.

Measured 2026-11-14, with a `poke` command added to the port's control socket for exactly this
question:

| what was done | what happened |
|---|---|
| save edited to `MAP=4`, `DUNG_X=1`, `DUNG_Y=1` | loads into the record, viewport stays overworld |
| mirror poked to `4` | framebuffer changes, no corridor at any value tried |
| mirror swept `-1, 1, 2, 3, 4` | five different frames, none of them first-person |
| untouched save, `MAP=0` | **845** compositor entries, so `0xe866c` is not a dungeon-only routine |

Two conclusions, both of which cost a wrong assumption to reach. **A save edit alone does not start in
a dungeon.** And `0xe866c` is the general 32x32 tile compositor into surface `0xbe5f4`, not a dungeon
corridor routine: it runs in the overworld, so its entry count cannot be used as an arrival test.
What remains for a scenario launch is the game's own map-change path, which is the code that writes
the mirror and loads the map data together.

## The roster loader does read the record from the text

Unproven when this page was written, and now measured. With `PLAYER_X=11` written into slot 0 of a
save, the live record reads `PLAYER_X=11` at `0xcdf6b` before any menu is pressed, so the loader maps
the text onto the record and it does so at boot. `node tools/savedisk.js` is therefore a valid way to
set record state, which is what makes the field map useful.

**Reading that value has a trap of its own.** The port's `mem` control command takes a **linear**
address, while every address on this page is a data offset in a segment based at `0x400000`. Reading
`mem addr=0xcdf6b` returns low memory and reports zeros, which is indistinguishable from an empty
record. The linear address is `0x4cdf6b`. Several probes in one session concluded "the record is empty"
from exactly that mistake.

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
