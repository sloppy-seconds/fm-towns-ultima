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
