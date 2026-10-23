# The ENEMY2 tile loader

**Tried:** find the code that indexes the `ENEMY2` tile bank. The name search came
back empty earlier, because the asset path is not referenced as an immediate
anywhere in the image, so this went at the arithmetic instead.

**Measured:** the tile stride is a left shift. Every 512-byte tile access in this
binary appears as `shl r32, 9`, and of the 17 such sites, four are followed
immediately by an `add eax, <bank base>`:

| lookup site | bank base | gap from previous |
|---|---|---|
| `0xe7bb2` | `0x0b5578` | |
| `0xe7c15` | `0x0b7578` | `0x2000` |
| `0xe7c78` | `0x0b9578` | `0x2000` |
| `0xe7cdb` | `0x0bb578` | `0x2000` |

All four sit inside **one function starting at `0xe7b58`**, each followed by the
same bytes (`89 45 d8 2b ff 81 ff 80 00 00 00 7d 0d ad ...`), so they are four
unrolled copies of the same operation rather than four branches.

The spacing is the informative part. `0x2000` is 8,192 bytes, which is **16 tiles
of 512**. Four banks of sixteen is 64 tiles, and `ENEMY2` is 33,280 bytes, which is
`4 x 8192 + 512`, so 65 tiles with one left over. That reconciles exactly.

**Verdict:** POSITIVE for the code location and the bank layout. The loader is at
`0xe7b58`, it indexes tiles by `index * 512`, and it addresses **four banks of
sixteen tiles** at `0x0b5578`, `0x0b7578`, `0x0b9578`, `0x0bb578`.

## What is not established

Four banks against four time periods is an inviting reading, and it is a **guess**.
Nothing measured so far says which bank corresponds to which era, or whether the
four banks are eras at all rather than something like land, town, dungeon and
vehicle art. The wiki's creature lists divide into land, townsfolk and dungeon,
which is three groups and not four, so the tidy explanation does not even fit.

Confirming it needs one experiment: capture a machine state with the player standing
on the overworld in a known era, and again in a different era, then compare what is
in each of the four banks.

## Why the RAM check found nothing

The obvious next step was to look inside those buffers in the captured state, and it
returned zeros. That is not a contradiction and it is worth recording so it is not
rediscovered as a bug.

`0x0b5578` lies inside the large zero region of `ENCHANT.EXP` itself. Of the image's
1,072,366 bytes, a 337 KB block starting at `0x07b557` is zero fill, and `0x0b5578`
lands inside it. Those addresses are **BSS**: runtime buffer space, present in the
file only as zeros.

The image base in the savestate was re-derived and confirmed with two independent
high-entropy anchors, the `ENEMY2` path string at image `0x22f4` and the
`WRONG TIFF HEADDER` string at image `0x2280`. Both give the same delta, `0x762d2`,
so the mapping is sound and the zeros are real.

The savestate was taken **at the death screen**, by which point the tile buffers had
been released or reused. A capture taken while standing on the map is what would
show them populated.

## Reproducing

```bash
# the stride sites
python3 - <<'EOF'
img = open('/var/tmp/ENCHANT.EXP','rb').read()[0x20:]
for i in range(len(img)-8):
    if img[i]==0xC1 and (img[i+1]&0xF8)==0xE0 and img[i+2]==9 and img[i+3]==0x05:
        print(hex(i+0x20), hex(int.from_bytes(img[i+4:i+8],'little')))
EOF
```

---

**[Assets and graphics](assets-and-graphics.md)** **[Open questions](open-questions.md)**
