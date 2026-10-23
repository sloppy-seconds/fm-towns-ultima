# `MAP2_*` geometry, solved

The map geometry was an open question for most of this project. It is now measured.

## The buffer

The loaded map lives in a **32,768-byte buffer**, which is exactly **256 x 128**.

Found by walking out from the known payload position in a savestate:

- payload starts at state `0xb0ac2`
- walking backward while every byte has both nibbles in 0 to 7 reaches `0xb04c2`
- walking forward the same way reaches `0xb84c2`
- `0xb84c3 - 0xb04c2 = 32,769`, so the clean boundary is **32,768 bytes**

The span divides exactly: `32768 / 128 = 256`.

## The file payload sits at the end of the buffer

The `MAP2_1.TIF` payload loaded from file offset `0x800` is 31,232 bytes and begins at
**buffer offset 1,536**:

```
1536 + 31232 = 32768
```

So the file supplies the **last** 31,232 bytes of the buffer, and the first 1,536 bytes are
generated. `1536 = 128 x 12`, which is **12 rows**.

That is the finding that resolves the earlier confusion. The file is not the whole map. It is
the map minus its first 12 rows.

## What the first 12 rows are

All 1,536 bytes are non-zero, and only 12 distinct values appear in them. The dominant is
`0x33`.

Rows 0 to 3 are uniformly `0x33` across all 128 columns. Rows 4 to 7 carry terrain variation.

## The geometry is 128 wide

Rendered at width 128, the buffer is immediately legible as a map:

```
  0 --------------------------------------------------------------------------------------------------------------------------------
  1 --------------------------------------------------------------------------------------------------------------------------------
  8 =================-=======-======-==--========---======================--==-=---===--==================-=-===========-==========
  9 -=========-==--==========================-=====-===================--======-====-=-======================---=--=================
 12 =======*========--====#-====-===-=====#=-===============-=======-====-===-==========*-----=====-===**--*-=-==========-*=-=-=====
 25 **-------------=*=-###-----#=-====----####----.-==-#########=-===--#########=--=**------------.==*-#=------#=-===.-#=------#=-:.
 26 ==-#=------#=-.:.=-#=------#=-===--#=------#=-=.=.-#=------#=--=---#=------#=-===*-#=------#=-*=-*-#=------#=--.**-#=------#=-=-
 27 ==-#=------#=-**=*-#=------#=-===--#=------#=---*-###=----###=-*:--------------..-###=----###=--=---------------=-###=----###=--
 36 +:::+:::+:::+:::+:::+:::+:::+:::+:::+:::+:::+:::++++++++++++++++::+:::+:::+:::+:::+***+:::+:::+:::+:::+:::+:::+:++++++++++++++++
```

Rows 25 to 27 show a repeating structure with two pillars per cell, which is a row of
buildings. Rows 36 to 39 show a regular tiled grid.

Nothing resembling terrain appears at any other width, which is why every earlier candidate
failed. **128 is correct.**

## Row classification

Grouping the rows by their content:

| rows | content |
|---|---|
| 0-3 | uniform `0x33`, the generated border |
| 4-7 | land, 8 to 9 distinct values per row |
| 8-11 | uniform `0x44`, water |
| 12-27 | dense terrain, up to 23 distinct values per row |
| 28-35 | `0x44` water again |
| 36-39 | regular grid, 6 distinct values |
| 40-43 | terrain |
| 44-47 | `0x44` water |
| 48+ | alternating terrain and water bands |

The repeating `0x44` bands are water separating landmasses, which is what an Ultima II Sosaria
map should look like.

## Why this took so long

Three separate errors kept it hidden, and each is now documented elsewhere:

1. **The payload was assumed to be the whole map.** It is not. 31,232 bytes is the file
   payload, and the buffer is 32,768. The 1,536-byte difference is 12 generated rows, which
   is why `31232 = 128 x 244` looked right and never rendered.
2. **The buffer address is not searchable.** `0xb0ac2` appears nowhere in `ENCHANT.EXP` as a
   dword, so no static scan finds it. It had to come from a savestate.
3. **Width 128 was assumed to be wrong** because the earlier renders at 128 looked like noise.
   They looked like noise because they started at the payload, not at the buffer, so every row
   was offset by 1,536 bytes.

The third one is the interesting failure. The width was right the whole time. The starting
offset was wrong, and an offset error of `1536` bytes at width 128 shifts every row by exactly
12 cells, which destroys all horizontal coherence and produces noise.

## Reproducing it

```bash
node -e 'const{Disc,defaultDisc}=require("./tools/cd.js");const fs=require("fs");
const d=new Disc(defaultDisc(process.cwd()));const c=d.catalogue();
const n=[...c.keys()].find(k=>/MAP2_1\.TIF$/i.test(k));
fs.writeFileSync("/var/tmp/MAP2_1.bin",d.get(c,n));d.close();'
```

Then find the payload in a savestate and walk out to the 32,768-byte buffer bounds.
`tools/maprender.js` does the render.

## Still open

**The cell encoding.** Values are 0 to `0x77` with both nibbles in 0 to 7. Whether a cell is
one byte or two fields is unresolved, and the earlier nibble work
([u3-hypothesis-tests.md](u3-hypothesis-tests.md)) suggested duplication with a boundary case
that came out as a dead tie.

What is settled is the thing that was blocking: **the grid is 128 x 256, the file supplies
rows 12 onward, and the first 12 rows are generated.**

---

**[The map is 128 wide](u3-hypothesis-tests.md)** **[Plan](plan.md)** **[Open questions](open-questions.md)**
