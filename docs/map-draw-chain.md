# The map draw chain: cell value to screen

Items 2a and 2b attacked together, as `plan.md` said they had to be. This page records the drawing chain
from a map cell byte to a screen pixel, which is the thing both items needed and neither could reach alone.

## The chain, end to end

```
0x77e90      a 64 x 64 array of 16-bit tile indices. stride 0x80, 2 bytes per entry
0x40e90      the screen buffer. 4096 bytes per page, selected by an argument shifted 0xc
```

Three routines touch `0x77e90` and they form a coherent pipeline.

### The plotter, `0xf3e04`

```
0xf3e04   mov eax,[esp+0xc]          ; y
0xf3e08   shl eax,7                  ; y * 128
0xf3e0b   mov edx,[esp+0x8]          ; x
0xf3e0f   mov cx,[esp+0x4]           ; value
0xf3e14   mov [eax+edx*2+0x77e90],cx ; tile index at (x, y)
0xf3e1c   ret
```

**Four instructions' worth of work: plot a 16-bit tile index at `x, y`.** Established earlier in
`more-routines.md` as a "16-bit/stride-128 writer" without knowing what it wrote. It writes tile indices.

### The blitter, `0xe3d04`

```
0xe3d04   ; arg at [ebp+8] is the screen page
0xe3d0f   cmp esi,0x40                ; 64 rows
0xe3d1b   mov eax,esi / shl eax,7     ; source stride 128 bytes
0xe3d22   mov edx,edi / shl edx,0xc   ; destination page, 4096 bytes each
0xe3d2a   mov eax,esi / shl eax,6     ; destination row stride 64
0xe3d34   mov dl,[edx+ecx*2+0x77e90]  ; read the tile index
0xe3d3b   mov [eax+0x40e90],dl        ; write it to the screen page
```

**It copies the 64 by 64 tile grid into a 64 by 64 screen page.** One byte per cell, one page per call,
selected by the argument.

### The reverse, `0xe3c94`

The second half of `0xe3c64` walks the same 64 by 64 grid in the opposite direction:

```
0xe3cb5   movzx edx,byte [edx+0x40e90]  ; read back from the screen
0xe3cbc   mov [eax+ebx*2+0x77e90],dx    ; write into the tile grid
```

So the pair is a blit out and a blit back, which is how a scrolling or layered viewport would work.

## What this establishes, and what it does not

**Established.** The tile grid is **64 by 64**, not 128 by 256. Its entries are **16-bit**, not bytes. The
screen buffer is paged in **4096-byte** units. The plotter takes `x, y, value` in that order and is the
single write path for the grid.

**Not established.** Where the *map cell byte* becomes a *tile index*. The grid at `0x77e90` is written by
`0xf3e04`, and the only callers of that which place a tile are drawing routines that already know which tile
they want. **No routine found so far reads a `MAP2_*` cell and writes the corresponding tile index.**

That is the remaining gap for 2b, and it is narrower than before: the destination is known exactly, so what
is missing is one caller.

## Why the 64 by 64 grid matters for 2a

`cell-fields.md` established that a map cell is `v = (group << 4) | flag`, 8 groups by 8 flags. **Eight groups
and eight flags is 64 combinations**, and the tile grid is 64 by 64.

That is a coincidence worth naming but **not a proof**. The grid is 64 by 64 *cells* (a viewport), not 64
*values*. An 8 by 8 value space mapping onto a 64 by 64 viewport is arithmetic that happens to match, and
nothing yet shows the two are related.

**Stated plainly so it is not mistaken for a finding:** the tile grid being 64 wide does not confirm the 8 by
8 value space, and the earlier claim that `MAP2_*` uses a "64-tile vocabulary" was already corrected in
`cell-encoding.md` as a count of distinct byte values rather than tiles.

## What would close 2a

The blitter reads `[edx+ecx*2+0x77e90]` and writes one byte per cell to the screen. **A tile index of 0 to
63 written into a 64-wide grid means the screen page is a tile map, not pixels.** Whoever converts it to
pixels is one step further out, and that routine is where the 16-bit tile index becomes a bitmap offset.

Finding that routine would:
- give tile index to picture, which is 2b
- and show whether the 8 group and 8 flag values select within a tile, which is 2a

**The same caller answers both.** That is the circularity `plan.md` recorded, now with a specific target: the
routine after `0xe3d04` in the chain, the one that turns a 16-bit index into pixels.

## Two searches that failed, recorded so they are not repeated

**Searching for `0x40e90` readers** gives five functions: `0xe3c00`, `0xe3c64`, `0xe3d04`, `0xeafc4` and
`0xebb70`. Two are title art and the roster writer, and the other three are the blit pair already covered. So
the screen page is not read back by a routine that converts tile indices to pixels. **There is no pixel
conversion step.** The page holds tile indices and something else must consume them at display time, outside
the reach of a displacement search.

**Searching for a 64-entry pointer table** produced about 120 false candidates, because any dense run of
in-range dwords matches. It was a bad test and produced nothing. The one real candidate, `0xd8f84`, is the
170-entry table already recorded in `statesegments.js` as zeros at runtime.

## Honest state

**Neither item is done.** What is new is that the search space narrowed from "somewhere in 738 routines" to
"the consumer of the buffer at `0xe3d04` writes to `0x40e90`". That is a concrete next step rather than
another correlation pass, and it is the third time this session that a failing search produced a specific
target instead of a result.

---

**[Cell fields](cell-fields.md)** **[Cell encoding](cell-encoding.md)** **[Map geometry](map-geometry.md)** **[Plan](plan.md)**
