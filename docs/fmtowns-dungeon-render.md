# The dungeon blit: first pass at the tile and rect rules

**Status:** first measurements, 2026-11-13. This page records what is established about how the FM Towns port draws
the first-person dungeon view, and it corrects two assumptions in `docs/fmtowns-dungeon-render-brief.md`. It is not the
codex that brief asks for.

## The bank is an 8x8 grid and the tile index is arithmetic, not a table

`DUNG1.TIF` is 64 tiles, which is an 8x8 grid. The owner's reading of "column 3, rows 3 to 7" is tiles 27, 35, 43, 51,
59, and every one of those is `row * 8 + 3`:

| tile | row | column | as `row*8+col` |
|---|---|---|---|
| 27 | 3 | 3 | 24 + 3 |
| 35 | 4 | 3 | 32 + 3 |
| 43 | 5 | 3 | 40 + 3 |
| 51 | 6 | 3 | 48 + 3 |
| 59 | 7 | 3 | 56 + 3 |

So what looks like a vertical strip of art is one *column* read down successive *rows*, and the renderer's rule is
`(base_row + depth) * 8 + column`. That is why no literal table exists: the byte patterns `1b 23 2b 33 3b`, `1b 23 2b`,
`23 2b 33` and their 16-bit forms all return **zero hits** across the whole image. There is no tile-index table to
extract, and the brief's "three tables of constants" is wrong on that point.

## The three literal asset-path pushes are not loads

Exactly three instructions in the image push one of the dungeon path strings:

| site | string |
|---|---|
| `0xe9b1d` | `Q:\GRAPH\MAP2_1.TIF` |
| `0xe9cb6` | `Q:\GRAPH\DUNG2.TIF` |
| `0xe9d45` | `Q:\GRAPH\MAP2_2.TIF` |

All three sit inside the function at `0xe9c0c`, which is 544 bytes and is a wait loop (`cmp edi, 0x2710`) that polls a
global and prints status text. Its callee `0xe77f8` is seven instructions: set a colour, wait, then hand the string to
`0xe5854`. It is a message routine, so those pushes are diagnostics, not asset loads. The loader is elsewhere and was
not found by string xref.

## The drawing primitive is a TBIOS trap wrapper

`0x7c4` is fifteen instructions and is the shape this project already documents for BIOS access:

```
0x007c4  push esi / push edi / mov edi,[esp+0xc] / mov al,[esp+0x10] / mov esi,[esp+0x14]
0x007d2  mov ah, 0x25
0x007d4  push fs / push 0x110 / pop fs / call ptr fs:[0x20] / pop fs / movsx eax, ah
```

`call fs:[0x20]` under selector `0x110` is the trap dispatch, `ah = 0x25` selects the function, and the three arguments
arrive as `edi`, `al` and `esi`. Callers pass `edi = 0x7a7d8` (a table of consecutive dwords 0, 1, 2, 3 ...), `al = 0`,
and `esi = 0x7add8`, a descriptor built immediately before the call.

## A descriptor that is a 16x16 rectangle

The builder at `0xe7815` computes an index into a record array and writes the rectangle fields:

```
lea eax,[eax+eax*2] / lea edx,[eax+eax*8] / lea edx,[eax+edx*2]     -> 57 * index
lea edi,[edx + 0x7aee4]                                            -> 57-byte records
mov edx,[edi+0x1d] / shl edx,4                                     -> a field scaled by 16
mov word ptr [0x7addc], 0x14                                       -> 20
mov ax,[edi+1] / add ax,2  -> [0x7adde]                            -> x1
mov ax,[edi+1] / add ax,0x11 -> [0x7ade2]                          -> x2 = x1 + 15
... field [edi+5] + 2, plus the scaled field -> [0x7ade0], [0x7ade4] with a difference of 0xf
```

A 16-pixel step per depth and a 15-pixel span is a 16x16 blit, and the 57-byte record stride looks like a creature or
entity table (name plus stats plus sprite fields). That is the monster path, not the wall path.

## The asset names are text, not loader arguments

Following the paths properly (decode from all 738 function entries, collect every instruction naming an address in the
string block) gives 18 references, and none of them loads a file.

- Each string carries an unidentified 4-byte prefix, so the code pushes the string start while a NUL scan finds the text
  four bytes later. `0x222c` is `DUNGEON_X = `, not `EON_X = `.
- `0xe77f8` is seven instructions: set a colour, wait, hand the string to `0xe5854`. A message wrapper.
- `0xe6eb0` reads `byte ptr [edi]`, tests the Shift-JIS ranges `0x81`-`0x9f` and `0xe0`-`0xfc`, and scales a 57-byte
  record to place the glyphs. A **text drawer**, not a TIFF loader.
- The two functions that push the paths, `0xe9ab4` and `0xe9c0c`, are screen painters: they set colours and windows with
  `0xe7460` and `0xe6b3c`, then print. `0xe9ab4` walks a 351-byte record at `0xcde4d` indexed by the global at `0xceca0`,
  which is the character record, so it is a status screen.

`Q:\GRAPH\DUNG1.TIF` therefore exists in the image only as printable text. The loader uses another mechanism and the
renderer cannot be reached through the asset names. That route should not be retried.

## The dungeon's draw call is `ah=0x2b`, and it is rare

A live walk in the dungeon, captured through the port with `U2_TRACE_FN=c:dc:b7d`, `U2_TRACE_FN_ARGS=6` and
`U2_TRACE_FN_MEM=47add8:18`, gives 17,766 TBIOS calls across frames 1261-4107:

| BIOS fn | calls | what it is |
|---|---|---|
| `ah=0x60` | 13,618 | timing or poll |
| `ah=0x07` | 1,487 | input |
| `ah=0x05` | 1,142 | unresolved |
| `ah=0x19` | 685 | unresolved |
| `ah=0x25` | 621 | **screen page blit**, three per frame |
| `ah=0x0a` | 114 | text or window |
| `ah=0x2b` | 99 | **the dungeon's draw call** |
| `ah=0x04`, `0x0c`, `0x46`, `0x41` | 66, 82, 8, 8 | mixed |

The `0x25` call is not a tile draw, which is what this page previously assumed. Its rect is constant at
`(244,245)-(499,444)`, 256x200, pitch 20, and its source pointer cycles through `0x12e530`, `0x134930` and `0x128130`
once each per frame. That is a triple-buffered page copy.

`0x2b` fires 99 times in the walk and its descriptor contents change with movement, which is what a draw call for the
view should look like. Its descriptor is the same `0x7add8` the builder at `0xe7815` writes, and the words read from
there change between calls (`0x1f300f5`, `0x1f3019d`, `0x1f30175`), while one field stays at `0x10` = 16, the step this
page already predicted from the 16x16 tile size.

**What is still missing is field meaning, not the call.** The dump length of 18 bytes yields four complete dwords and
four is not enough to name every field. The next capture needs `U2_TRACE_FN_MEM=47add8:24` and a walk with known
steps, so each field can be matched to a position instead of guessed at.

## The wrapper table, which is the reusable part

The game's 70 TBIOS wrappers live in the first 3 KB of code, one per BIOS function, each of the form
`mov ah,N; push 0x110; pop fs; call fs:[0x20]`. Runtime address to function:

| runtime | fn | runtime | fn | runtime | fn |
|---|---|---|---|---|---|
| `0x0dc` | 0x00 | `0x528` | 0x20 | `0x6a7` | **0x2a** |
| `0x103` | 0x01 | `0x546` | 0x21 | `0x6da` | **0x2b** |
| `0x169` | 0x02 | `0x569` | 0x22 | `0x715` | **0x2c** |
| `0x18d` | 0x03 | `0x591` | 0x23 | `0x783` | **0x2d** |
| `0x1b5` | 0x04 | `0x5b5` | 0x24 | `0x7b1` | **0x2e** |
| `0x1d8` | 0x05 | `0x5dd` | **0x25** | `0x7d6` | **0x2f** |
| `0x2da` | 0x0c | `0x651` | 0x28 | `0x7fa` | 0x40 |
| `0x291` | 0x0a | `0x679` | 0x29 | `0xa6e` | 0x51 |

`0x5c4` is the wrapper's *entry* for `ah=0x25`; the trap call itself is at `0x5dd`. Tracing an entry address and
reading it as a call site is what made the first capture look like it was drawing walls when it was copying pages.

## The instruments this took

| variable | what it does |
|---|---|
| `U2_TRACE_FN=<cs>:<lo>:<hi>` | log every entry into a code-selector range |
| `U2_TRACE_FN_ARGS=<n>` | print the first n stack dwords, so a stack-argument routine shows its arguments |
| `U2_TRACE_FN_MEM=<hex addr>:<hex len>` | print those bytes, for a routine whose arguments are pointers |

All three need `--dev`, or the port drops them silently. `U2_TRACE_FN` is parsed base 16, so an `0x` prefix parses as
zero. Runtime address = file offset - 0x200; the data segment base is `0x400000`, which is why the descriptor at data
offset `0x7add8` is dumped as linear `0x47add8`.

## The compositor, found statically at `0xe3c84`

The dungeon view is built in software, and the routine is at `0xe3c84` (runtime `0xe3a84`). It does not draw pixels at
all: it builds a 64x64 table of 16-bit view cells, which a later pass turns into tiles.

```
0xe3c8a  mov edi,[ebp+8]           ; bank number, negative = blank
0xe3c91  esi = 0                  ; row
0xe3c93  cmp esi,0x40  -> 64 rows
0xe3c98  ebx = 0                  ; column
0xe3c9a  cmp ebx,0x40  -> 64 columns
0xe3cc2  mov eax,edi / shl eax,0xc ; bank * 4096 = bank * (64*64)
0xe3cc7  mov edx,esi / shl edx,6   ; row * 64
0xe3ccc  add edx,eax / add edx,ebx ; index = bank*4096 + row*64 + col
0xe3cd5  movzx edx,byte [edx+0x40e90]   ; the cell map lives at 0x40e90
0xe3cd0  mov eax,esi / shl eax,7        ; row * 128 = 64 columns * 2 bytes
0xe3cdc  mov [eax+ebx*2+0x77e90],dx      ; view cells at 0x77e90, one WORD per cell
```

So there are two arrays and their shapes are exact:

| array | address | shape | element |
|---|---|---|---|
| cell map | `0x40e90` | 64x64 bytes per bank, `bank*4096 + row*64 + col` | map cell byte |
| view cells | `0x77e90` | 64x64 words, `row*128 + col*2` | 16-bit cell value |

A negative bank number writes zero cells, which is the blank case. The rest of the routine then overlays up to 32
entries from three parallel arrays (`0xce3c8` present flag, `0xce488` row, `0xce408` column, `0xce3e8` tile) into the same
view table at `row*128 + col*2`, which is how sprites and doors land on top of the wall map.

That is why no BIOS call looked like a tile draw: the view is a word table built by ordinary code, and only the finished
frame reaches the BIOS through the `ah=0x25` page blit. `0xe3d24` follows with the same 64x64 loop and is the next
thing to read, because it is where those cells become pixels.

## The view table's two accessors, and the player marker

Reading every instruction that names `0x77e90` or `0x40e90`, decoding only from function entries, gives five functions
and completes the picture of the table. There are two primitives:

```
0xf3e24  view_set(col, row, cell)      ; 6 instructions
         mov eax,[esp+0xc] / shl eax,7      ; row * 128
         mov edx,[esp+8] / mov cx,[esp+4]
         mov [eax+edx*2+0x77e90],cx         ; cell = cx

0xefb20  view_get(col, row)            ; 17 instructions
         mov eax,esi / shl eax,7
         movsx ecx,word [eax+edi*2+0x77e90] ; the cell
         ... compare (col,row) with [char+0xcdf9f] and [char+0xcdfa3]
         mov eax,0x10                       ; if equal, return 0x10 instead
```

The comparison is against two fields of the 351-byte character record indexed by `0xceca0`, and on a match it returns
`0x10` rather than the stored cell. So **cell `0x10` is the player's own square**, and the table holds the whole view
including the party.

| function | role |
|---|---|
| `0xe3c84` | map to view, 64x64, `bank*4096 + row*64 + col` in, `row*128 + col*2` out |
| `0xe3d24` | view back to map, the same two indices in reverse |
| `0xf3e24` | `view_set(col,row,cell)` |
| `0xefb20` | `view_get(col,row)`, with the player override |
| `0xe325c` | reads view cells, next to be read |

A correction to this repository's own notes: `0xf3e24` has been described as the pixel writer. It writes a 16-bit
**cell** into the view table, not a pixel. The pixel pass is still unfound, and the honest next step is to fix the
address frame for `tools/callers.py`, which reports zero near callers for all three of these functions even though they
must be called, and then follow `0xe325c`.

## Which banks are opaque, measured 2026-11-13

Every dungeon bank is 33,280 bytes: a 512-byte header and **64 tiles of 32x32 pixels at 512 bytes**, 4bpp packed.
Counting non-zero pixels per tile separates two kinds of art:

| bank | tiles | fully opaque | empty | ink heights |
|---|---|---|---|---|
| `DUNG1.TIF` | 64 | **64** | 0 | all 32 |
| `DUNG2.TIF` | 64 | **64** | 0 | all 32 |
| `CHEST.TIF` | 64 | 9 | 10 | 8, 11, 12, 13, 14, 15, 20, 22, 23, 29, 32 |

So the walls and the doors are **full 32x32 panels with no transparency at all**, while the chests are mostly
transparent with a height that steps by depth: 8 pixels for the furthest, 32 for the nearest. Ten chest tiles are
completely empty.

Two consequences that matter for the renderer:

- a wall or a door tile can simply overwrite what is under it, so draw order alone decides occlusion
- a chest tile cannot, because it is mostly transparent, so it has to be drawn *after* the wall behind it and the
  transparency has to be honoured

And a limit on this measurement: it counts non-zero pixels, which proves transparency or its absence and nothing about
what is drawn. `DUNMON1-3.TIF` are not in `extracted/GRAPH/`, so the monster banks are still unmeasured here.

## The monster banks: LOD confirmed, and the earlier refutation retracted

`DUNMON1/2/3.TIF` are 213,504 / 53,760 / 13,824 bytes. With a 512-byte header that is 212,992 / 53,248 / 13,312 body
bytes, which is exactly 26 sprites of **128x128 / 64x64 / 32x32** at 4bpp (8,192 / 2,048 / 512 bytes each).

**The three banks are the same 26 monsters at three levels of detail.** Measured by decoding each tier, sampling the
larger sprite at the smaller one's grid, and comparing sprite *n* against sprite *n*:

| comparison | pixels equal |
|---|---|
| 32px vs 64px | **61.3%** |
| 32px vs 128px | **59.1%** |
| control, sprite n against sprite n+1 | 42.6% |

An 18-point margin over the control across all 26 sprites is the same picture at three scales, and it agrees with the
visual check that sprite 0 is the same knight at 128, 64 and 32 pixels.

**This page previously recorded the opposite, and the reason matters.** The monster banks are TIFF-wrapped with
`FillOrder = 2`, meaning the **low** nibble is the left pixel. The first attempt decoded high-nibble-first, which
scrambles every sprite, and it produced 41.6% against a 32.8% control: weak enough to be read as "not the same art".
The conclusion was an artefact of the decoder, not a property of the banks. The same bug voided the "stride" test that
reported no internal structure in DUNMON2 and DUNMON3.

The rule that follows: any comparison of 4bpp TIFF-wrapped art here must decode low-nibble-first, and the raw tile banks
(`DUNG1`, `DUNG2`, `CHEST`) are high-nibble-first. Two conventions on one disc, and confusing them looks like bad art.

## Read watches: no guest code reads tiles to draw

Two read watches, run live in the dungeon through the port (`U2_RDWATCH=<linear>:<len>`, which logs one line per
**distinct** reading instruction).

**Watch 1, the four derived banks** `0xb5578`/`0xb7578`/`0xb9578`/`0xbb578`, 32 KB. Eight distinct readers, and four of
them are the generator reading back the bank it just wrote (`0xe7cb5`, `0xe7cd2`, `0xe7cef`, `0xe7d0c`). The other four
read at or past `0xbd578`, which is one byte beyond the last bank: a different structure, not the tiles.

**Watch 2, the four source tables** `0x7b578`, `0x7c778`, `0x7f778`, `0x7f978`. Twenty-seven distinct readers, every one
of them between `0xe797d` and `0xe91ca` — the loader and the generator's own setup. Nothing outside that cluster touches
them.

So **no guest instruction reads tile pixels for the purpose of drawing a frame.** The tile data is loaded, derived and
re-derived, and then never read again by the program's own code.

The remaining explanation, and it fits every earlier measurement: the copy happens on the **BIOS side**, inside the
handler for `ah=0x2b` — the call we traced 99 times in one dungeon walk, taking a table pointer in `s1`, a count in
`s2` and a descriptor in `s5`. That also explains why every attempt to find a tile blitter in guest code failed: there
is none. Guest code builds the view table and issues one BIOS call; the BIOS reads the tiles.

The next thing to read is therefore the `ah=0x2b` handler, not more guest code.

## The generator at `0xe7b58`

Sixteen passes, each writing a 512-byte tile into one of four derived banks:

| site | destination | source table |
|---|---|---|
| `0xe7bb2` | `0xb5578` | `0x7b578` |
| `0xe7c15` | `0xb7578` | `0x7c778` |
| `0xe7c78` | `0xb9578` | `0x7f778` |
| `0xe7cdb` | `0xbb578` | `0x7f978` |

Each pass shifts a table by `0x20` dwords (128 bytes) using an overlapping `mov [esi+edi*4+0x20], [esi+edi*4]` loop, then
copies `0x80` dwords (512 bytes) to `base + i*512`. So the intermediate depth tiles the brief assumed were stored on the
disc are **generated at run time** from four source tables, which is why DUNG1's 64 tiles cover more depth steps than
64 indices could.

## The real trap entry, and what `ah=0x2b` actually does

The table at `0x110cc` is the wrong one for game calls. Tracing selector `0110` broadly and filtering by caller shows**21 calls from site `0x6e1` — the `ah=0x2b` thunk — every one of them entering TBIOS at `0x0110:0x00000280`**:

```
0x0280  push fs / push es / push ds
0x0284  mov dword ptr gs:[edi+0x200], 0
0x028f  mov dword ptr gs:[edi+0x10], 1
0x0297  pushfd / cld / pushal
0x029a  mov ebp, edi
0x02a1  movzx edi, ah
0x02a4  call dword ptr cs:[edi*4 + 0x2b4]      ; the real dispatch table
0x02ac  popal / popfd / pop ds / pop es / pop fs / retf
```

So the dispatcher is `0x280`, its table is **`0x2b4`**, and it is a `call`, not a jump. `0x110b5` is an inner dispatcher on some other selector and was a dead end.

| ah | handler |
|---|---|
| `0x00` | `0x19b8` |
| `0x07` | `0x1c6c` |
| `0x25` | `0x20f8` |
| `0x2a` | `0x2400` |
| **`0x2b`** | **`0x244c`** |
| `0x2c` | `0x245c` |
| `0x60` | `0x336c` |

**`ah=0x2b` at `0x244c` is a stub**, four instructions: it pushes two words from the trap frame (`gs:[ebp+0x28]`, `gs:[ebp+0x2c]`), loads `ecx = 0x579c`, and jumps into the shared routine at `0x2429`. So the rectangle the game builds is consumed by `0x2429`, which is the next thing to read.

**`ah=0x2c` at `0x245c` is a filled-polygon primitive**, and it is readable: `mov cl,al`, then `lodsw` twice per iteration reading a vertex list from `esi`, clamping edge bounds to `3..0x100`, storing `dx`/`bx` and `esi` into the trap frame, computing `eax = ([ebp+0x1a]+1) * [ebp+0x20]`, and tracking min/max over the vertex pairs before calling `0x44a0`. That is the shape a `FillPolygon`-style BIOS entry has, and it matches the closed-door and wedge art the brief describes being drawn per depth.

## What `ah=0x2b` really is: a clipped rectangle fill

`0x244c` pushes two words from the trap frame and jumps to `0x2429`, which stores `al`, `dx` and `bx` into the frame and
calls `0x579c`. That routine reads a rectangle from `esi`, normalises its corners, clips them against the window bounds at
`gs:[ebp+0x28]` and `gs:[ebp+0x2c]`, and fills it.

So the call the dungeon uses 99 times per walk is **fill a clipped rectangle**, and the descriptor the game builds at
`0x7add8` is that rectangle. The walls' brick texture therefore does not come through this call; `0x2b` draws the shaded
geometry and recesses, while the textured view is what `ah=0x25` pages to the screen.

## Where the 57-byte records get their values

Nine functions write into the record array at `0x7aee4`. The ones worth reading next, by what they write:

| function | writes | note |
|---|---|---|
| `0xe6e68` | `[edx+0x7aefd]` | also called from the dungeon setup path |
| `0xe76d8` | `[edx+0x7af09] = edi` | stores a parameter, so likely the tile or sprite index |
| `0xe74ac` | reads `[ebx+0x7af09]` | the reader of the same field |
| `0xe776c`, `0xe7784` | `[edx+0x7af05] = 0 / -1` | a flag or sentinel |
| `0xe759c`, `0xe6dc8`, `0xe6b3c` | read `+0x7af15`, `+0x7af0d` | readers of other fields |

The field at `+0x25` (`0x7af09`) is written with a parameter and read by another function, which is the signature of the
index that selects art. That is the last link: whoever writes `+0x25` per depth decides which tile a cell draws.

## The pipeline end to end, and why there is no guest blitter

Put together from the measurements above, in execution order:

| stage | address | what it does |
|---|---|---|
| load | tables `0x7b578`, `0x7c778`, `0x7f778`, `0x7f978` | tile banks read from disc into memory |
| generate | `0xe7b58` | 16 passes per bank, each shifting a source table 128 bytes and copying 512 bytes, into `0xb5578` / `0xb7578` / `0xb9578` / `0xbb578` |
| build view | `0xe3c84` | 64x64 word table at `0x77e90` from the cell map at `0x40e90`, `bank*4096 + row*64 + col` |
| place sprites | `0xf3e24` / `0xefb20` | `view_set(col,row,cell)` and `view_get`, with cell `0x10` returned for the player |
| BIOS dispatch | `0x110b5`, table `0x110cc` | `movzx ebp,ah; jmp cs:[ebp*4+0x110cc]`, 256 entries indexed by function |
| draw | **`0x244c`** (`ah=0x2b`) | four-instruction stub: pushes two trap-frame words, `ecx = 0x579c`, jumps to `0x2429` |
| flush | `0x20f8` (`ah=0x25`) | the entry the real table names; not yet read |

**Why every search for a guest tile blit failed: the tiles are already in VRAM.** The program builds the view table
and then calls `ah=0x2b`, which copies rows *between VRAM offsets*. Pixels never come back into the program's data
space, so a read watch over the banks sees only the loader and the generator. Two such watches, over the derived banks
and over the source tables, returned 8 and 27 distinct readers respectively, all of them in that load/generate cluster.

**What is left for the codex is one piece of arithmetic.** The game-side wrapper at `0xc:0x6b6` computes `esi`, `ebx`
and `ecx` from the view cell before calling the dispatcher, and that computation is the tile-to-screen rectangle rule
the brief asks for: which tile, which rectangle, and how the depth selects it. Everything either side of it is located.

## The codex: the view pipeline, measured end to end

The dungeon view is an **11x11 grid of 32x32 tiles** drawn into an offscreen surface at `0xbe5f4`, then paged to the
screen. Every stage is now located and read:

| step | address | what it does |
|---|---|---|
| 1. visible cells | `0xe325c` | for row,col in 0..10, index `row*11+col`, read cell from the 64x64 table `0x77e90` at `row*128+col*2` |
| 2. allocate | `0xe3010` | find a free slot in 1..0x2f, store `(active=1, row, col, cell, flag)` into 24-byte records at `0x7a150` |
| 3. pack | `0xe30a0` | for each active slot copy `(col, row, cell)` into `0x79f0c+4`, count at `0x79f0c` |
| 4. stage | `0xe8860` | store the packet pointer in `0xcda70` |
| 5. **blit** | **`0xe886c`** | walk the triples and copy each 32x32 tile into the surface |
| 6. show | `ah=0x25` (`0x127a8`) | page the surface to the screen |

**The blit arithmetic, which is what the brief calls the rectangle rule:**

```
dest = 0xbe5f4 + (col << 5) / 2 + ((row * 11) << 10) / 2     ; col*16 bytes, row*5632 bytes
tile = dword [cell * 4 + 0xcd7f4]                            ; cell -> tile pointer
for y in 0..31:
    for x in 0..15:                                          ; 16 bytes = 32 pixels
        lo = [tile] & 0x0f ; if lo == 0: lo = [dest] & 0x0f   ; 0 = TRANSPARENT
        hi = [tile] & 0xf0 ; if hi == 0: hi = [dest] & 0xf0
        [dest] = lo + hi
        dest += 1
tile += 16 ; dest += 0xb0                                    ; 176 bytes per scanline
```

Stride `0xb0` = 176 bytes = **352 pixels at 4bpp**, and 352 = 11 x 32, so the surface is exactly the 11x11 tile grid.
Cell `0` is transparent, which matches the palette note in the brief, and it is why chests and doors composite over
walls while the opaque wall and door panels simply overwrite.

`0xcd7f4` is a **cell-to-tile-pointer table**, and `0xe31b0` permutes pairs of it, which is the only place randomness
appears in the draw path.

## There is no tower art set: two banks, two roles in one view

The brief's `§3.7` hypothesis, that DUNG1 and DUNG2 are a dungeon set and a tower set selected by location, was
**retracted by the owner on 2026-11-13**, and the code agrees with the retraction: `0xe8a00` maps **one contiguous cell
space** across both banks (`0x00`-`0x2b` to `0x83378`, `0x2c`-`0x6b` to `0x8b378`) and the same blitter draws both into the
same 11x11 surface. Two banks feeding one picture are two roles in that picture, not two places.

Cells above `0x6b` come from an explicit, curated list at `0xcd9a4` built by `mov dword [0xcd9a4], 0x93578` and its
neighbours. Those entries are **individual tiles from several banks**, not bank bases (`0x93578`, `0x93978` are two tiles
apart, `0x95b78` is far off), which is the shape a specials table has: doors, chests, monsters and the player each get a
hand-picked tile rather than a slice of a bank.

**Which role is which, measured on the art:**

| bank | distinct tiles | mirror pairs | edge density | palette | colours per tile |
|---|---|---|---|---|---|
| `DUNG1` | 63/64 | **0** | 52.8% | `1 3 4 5 7` | **3.0** |
| `DUNG2` | 64/64 | **0** | 66.4% | `1 2 3 4 5 6 7` | **5.5** |

`DUNG2` is nearly twice as colour-rich and busier at edges, which is what plain brick against an ornate arch should look
like. **Neither bank contains a single mirror pair**, so the "horizontal mirror is the right wall" rule in the brief is
not in the art: the same tile is drawn at a different grid position and the perspective is inside each tile.

The structural argument is stronger than the art one. The map's cell values are small integers `0`-`15`, and `0xe8a00`
puts cells `0x00`-`0x2b` in bank 0. So **every value a `.DG3` can hold lands in `DUNG1`**, and bank 1 is unreachable from
the map. That fits the encoding in the view loop, `if (cell > 0x100) { push -1; push cell-0x100 }`: specials are marked
above `0x100` and their low byte indexes the curated list at `0xcd9a4`.

So the two banks are best read as **map art versus placed-object art**, with the exact role of each still inferable rather
than proven. What is no longer tenable is two art sets chosen by location.

**Bank identity: the loader found, the names not yet decoded.** `0xe801c` is the bank loader and it is explicit about
destinations and sizes:

```
0xe8031  push 0x8000 / push 0x7b378 / push 0x20ec ; call 0xe6660   -> 32 KB into 0x7b378
0xe8071  push 0x8000 / push 0x83378 / push 0x2100 ; call 0xe6660   -> 32 KB into 0x83378
0xe8091  push 0x8000 / push 0x8b378 / push 0x2114 ; call 0xe6660   -> 32 KB into 0x8b378
```

Each is 32,768 bytes, which is exactly 64 tiles of 512, and the three destinations are the three 64-tile banks the cell
table uses. So the loader is identified and the sizes agree with the format.

The **names are still open**. The third argument is a pointer into the table at `0x20ec`, `0x2100`, `0x2114` (records 20
bytes apart), and that table is **not readable ASCII**: the bytes are pairs like `EB 4F EB 54 EB 4D EB 42 EB 47`, and the
loader passes a format string at `0x2070` that is encoded the same way. Meanwhile plain ASCII paths do exist nearby
(`\UT2\MAP.MP2` at `0x2150`), so the obfuscation is specific to this table rather than to the file. Decoding it is a
separate job and should not be guessed at.

What that leaves is narrow: the *addresses*, the *sizes* and the *roles* are measured; only the mapping from
`0x7b378` / `0x83378` / `0x8b378` to `DUNG1.TIF` / `DUNG2.TIF` / `CHEST.TIF` is unproven, and it needs either that string
table decoded or one dungeon session with a dump of those three addresses.

**Bank identity, measured:**

| address | evidence | identity |
|---|---|---|
| `0x7b378` | bytes 16-31 all `0x33`, 100% match to `DUNG1` and 59% to `DUNG2` | **`DUNG1`** |
| `0x8b378` | tile 0 entirely zero, which only `CHEST` has | **`CHEST`** |
| `0x83378` | bytes 0-15 are `0x33`, shared by both DUNG banks, so not decisive | **`DUNG2`**, by elimination |

That last one is inference, not measurement: three 32 KB loads, three files of exactly 32,768 bytes, two identified. A 32-byte
dump of `0x483378` would settle it.

**Which corrects an earlier claim on this page.** It was argued that the map's cell values `0..15` landing in bank 0 made
bank 0 "map art". Named, the cell table reads differently:

```
cells 0x00-0x2b (44) -> 0x83378 = DUNG2, 44 of its 64 tiles
cells 0x2c-0x6b (64) -> 0x8b378 = CHEST, exactly its 64 chest-and-ladder tiles
```

Sixty-four cells for sixty-four `CHEST` tiles is not a coincidence, and `DUNG1` is not in the table at all: it is the
**generator's source**, feeding the derived depth banks at `0xb5578`. So walls are drawn from generated tiles, and
doors, chests and ladders are drawn from cell values.

## Seven banks, and ladders are not in CHEST

The loader at `0xe801c` makes **seven** 32 KB loads, not three:

| destination | source pointer | name |
|---|---|---|
| `0x7b378` | `0x20ec` | `DUNG1`, measured |
| `0x83378` | `0x2100` | `DUNG2`, by elimination |
| `0x8b378` | `0x2114` | `CHEST`, measured |
| `0x93378` | `0x2128` | source of the ladder tiles |
| `0x9b378` | `0x213c` | unread |
| `0xa3378` | `0x2150` | **`\MAP.MP2`**, readable ASCII, so this load is map data and not art |
| `0xab378` | `0x2164` | unread |

The other source pointers hold byte pairs like `EB 4F EB 54 EB 4D`, which neither `cp932` nor `shift_jis` accepts, so those names
are still unresolved. One readable name among seven also shows the table is a mix, not a uniform encoding.

**Ladders are not `CHEST` tiles.** A live packet capture with the player standing at a ladder shows three sprites in total:

| position | cell | meaning |
|---|---|---|
| (7, **1**) | `0x75` | curated[9] -> `0x95778` = bank `0x93378`, tile 18 |
| (5, 5) | `0x6a` | `CHEST` tile 62, which is one of its blank tiles |
| (5, 5) | `0x00` | `DUNG2` tile 0 |

So ladders come from the fourth bank, and the brief's "`CHEST` = chests and ladders" is half wrong. `CHEST` tile 62 drawn
at the centre of the grid is consistent with a "nothing here" marker, since that tile is empty.

**Only three sprites for a whole corridor** also confirms from the other direction what the read watches showed: the walls
are not sprites at all. They come from the generator's derived banks, so the packet carries specials only.

**And the bank divides cleanly in two, which corrects this page twice over.** Palette index `1` is used by 16 of the tiles
in `24`-`63` and by **none** of the tiles in `0`-`23`:

| range | non-empty | symmetric | asymmetric | uses index `1` |
|---|---|---|---|---|
| `0`-`23` | 23 | 13 | 10 | **0 tiles** |
| `24`-`63` | 31 | 10 | 21 | **16 tiles** |

So `CHEST` is **chests in `0`-`23` and the ladder family in `24`-`63`**, matching the owner's visual reading. Within the ladder
half the symmetric tiles (`49`, `50`, `51`, `57`, `58`, `59`) are flat-faced views and the asymmetric ones (`25`, `27`, `36`,
`38`, `41`, `43`, `48`, `52`, `56`, `60`) are angled or receding pieces, which is exactly the mix a ladder built up a shaft
needs.

Two corrections follow. An earlier reading here called `48`-`60` the whole ladder family: it is only the flat-face subset.
And `36` was dismissed as "not a ladder tile" because it is asymmetric; asymmetry is what a perspective piece looks like, not
evidence against the ladder.

**Bank `0x93378` is a separate art set, and it is the far end of the specials.** Dumped in full and compared against every tile
of `CHEST`, `DUNG1` and `DUNG2`:

- first bytes `25 22 22 22 25 22 22 22`, dominated by palette indices **2 and 5**, which none of the three known banks use as
their base
- **no exact matches**; the best figures anywhere are 78-80% against `CHEST` tile 0, which is an *empty* tile, so those are
two blanks agreeing rather than a shared picture
- tile 18, the one the live packet named for the ladder, has ink **538 of 1024**

That last figure is the point. A ladder at the far end of a corridor is a small sprite on transparency, and about half
coverage is what a distant ladder should look like, while `CHEST`'s tiles `24`-`63` are full-coverage flat faces.

So this is the monster design again, applied to specials: **near ladders come from `CHEST` 24-63, distant ones from bank
`0x93378`**, and the renderer picks by distance. `0x9b378` and `0xab378`, the remaining two loads, are probably the rest of
that far-detail set and have not been read.

**The grid coordinates, measured by walking without turning.** Standing still and stepping straight back changed exactly one
number:

| position | row | col | cell |
|---|---|---|---|
| one step from the ladder | **8** | 1 | `0x75` |
| two steps from it | **7** | 1 | `0x75` |

So **`row` is depth along the facing and grows as you approach**, and **`col` is lateral offset**, with the player's own
square at `(5,5)`. An earlier pair, `(7,1)` and `(1,8)`, differed in both numbers and could not be attributed to distance;
this pair can, because nothing but a forward step changed.

**And the ladder's tile never changes.** It was `0x75` at row 1, at row 7 and at row 8. There is no per-depth ladder art
being selected: one tile is drawn at a grid position, and the perspective is inside the artwork rather than produced by the
renderer picking different tiles. That is the same conclusion the walls reached by a different route, since the walls are
generated depth tiles while the specials are single pre-drawn tiles placed on a grid.

## Three arrays that do not hold the drawing, measured

Every structure that looked like the view turned out to be written once and then left alone, while the screen kept changing:

| watched | result |
|---|---|
| packer `0xe30a0` | fired 8 times at start-up, never again while the player walked |
| sprite list `0x7a150` | one active entry, at the centre, with `flag -1`, which the view loop *skips* |
| view table `0x79e90` | 120 of 121 cells zero while a corridor was on screen; the one non-zero cell was `1`, at the ladder's own grid position |

So `0x79e90` is **not** the wall data, and that lone `1` is a flag rather than a tile, since the ladder's tile is `0x75`.
The walls are drawn by the generator's derived banks and never appear in these arrays, which is the same conclusion the read
watches reached from the other direction.

**What is therefore still missing**, stated plainly: the literal wall-tile-per-depth table. The arithmetic that applies a
tile is established, and so is the grid, but the path that emits the walls has not been located by watching memory. The next
step is reading the generator's callers and the derived-bank consumers in code.

## The cell to tile table, read literally

`0xe8a00` builds the pointer table at `0xcd7f4` and it is not a construction, it is two runs and a list:

```
for (cell = 0;    cell <= 0x2b; cell++)  tbl[cell] = 0x83378 + cell * 512
for (cell = 0x2c; cell <= 0x6b; cell++)  tbl[cell] = 0x8b378 + (cell - 0x2c) * 512
0xcd9a4: 0x93578, 0x93978, 0x94178, 0x95b78, 0x95d78, 0x95f78, 0x96178, ...
```

| cell range | tile pointer |
|---|---|
| `0x00`-`0x2b`, 44 cells | `0x83378 + cell*512`, one 32x32 4bpp tile per cell, sequential |
| `0x2c`-`0x6b`, 64 cells | `0x8b378 + (cell-0x2c)*512` |
| beyond | an explicit pointer list at `0xcd9a4`, one per cell, spanning several banks |

So **a cell value is a tile index**. There is no indirection to discover and no table to guess at: the value stored in
the 64x64 word table is an index into the 512-byte tile run that starts at `0x83378` or `0x8b378`, and the blitter at
`0xe886c` copies exactly that tile to `(col, row)` in the surface.

Cell `0x10` = 16 resolves to `0x83378 + 16*512`, which is the player's own tile, and it is consistent with `view_get`
returning `0x10` for the party's square.

## Open, and the frame question that gates the next step

- The block at `0xe7815` has **no near callers** (`tools/callers.py ENCHANT.EXP 0xe7815 0xe7816` reports zero), so it is
  either internal to a larger function or reached indirectly. Function boundaries here have to come from
  `tools/cfgwalk.js`, not from reading past a `ret`.
- `cfgwalk` itself reports a frame difference that must be settled before addresses cross between the two tools: it
  works on *the file minus `0x20`* and says "guest, which is this tool's addresses minus `0x1e0`". Every address on this
  page is a file offset in the `MP` flat image, which is what `capstone` and `callers.py` read. Anyone continuing must
  fix one frame and state it.

## Next steps

1. Settle the address frame, then use `tools/cfgwalk.js` to get the real function containing `0xe7815` and its callers.
2. Reach the dungeon view from the *state* side rather than the asset side: find what sets the `DUNGEON_X` / `DUNGEON_Y`
   globals and what is called on entering a dungeon, then read forward from there.
3. Find the wall loop: the code that walks depth adding 8 to the tile index and 16 to the vertical rectangle.
4. Confirm one frame against a screenshot at a known `(x, y, facing)`, which is the cheapest check available and needs
   no new tooling.
