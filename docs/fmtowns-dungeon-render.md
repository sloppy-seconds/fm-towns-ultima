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
