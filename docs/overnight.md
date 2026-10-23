# Overnight queue

Work that can be done with nobody watching. Every item here needs no emulator, no keypress and no
decision from a human. Each ends in either a committed page or a recorded negative, and each states
how to tell it is finished.

## Rules for unattended work

1. **Commit and push after every completed item.** Not at the end of the night. An uncommitted result
   the next session cannot find is a lost result.
2. **`node tools/verify.js` must pass before each commit.** 107 checks, takes seconds.
3. **Never invent a value to make a table look complete.** Write `unknown` and say what would name it.
4. **A negative is a finished item.** Write it with its measurement and move on. Do not retry a failed
   approach with a cosmetic variation.
5. **If an item turns out blocked, stop it and write why.** Do not substitute a different question
   that happens to be answerable.
6. **No emulator, no container, no keypress.** Not available. Attempting them wastes the night.

## Item 0: read this before starting

`ENCHANT.EXP` is **not in the repo** and must never be committed. Extract it per-command:

```
node -e 'const{Disc,defaultDisc}=require("./tools/cd.js");const fs=require("fs");const d=new Disc(defaultDisc(process.cwd()));const c=d.catalogue();const n=[...c.keys()].find(k=>/ENCHANT\.EXP$/i.test(k));fs.writeFileSync("ENCHANT.EXP",d.get(c,n));d.close();'
```

Delete it with `rm -f ENCHANT.EXP` before committing. The image has the `0x20` `MP` header stripped,
so **an offset in the image is a virtual address**. Never subtract `0x20`.

---

## Item 1: `WORLD*.UT2` format (start here, half done)

**68,096 bytes, four files, no page documents the layout.** Best first item because the shape is
already measured and the remainder is bounded. `tools/worldfmt.js` is committed and does the reporting.

**Measured, from `saves/maxed_four.hdm`:**

| finding | value |
|---|---|
| file size | 68,096 bytes, all four **byte-identical** |
| row pitch | **128 bytes** |
| values per row | **24 dwords**, then 32 bytes of zero padding |
| rows carrying data | **6**, that is 768 bytes |
| from `0x300` to EOF | zero, 67,328 bytes |
| `WORLD_FILL_FROM` | 61,952 |

**The six rows, as dwords:**

```
row0  30 31 32 33 34 | 30 31 32 33 34 | 30 31 33 34 | 30 31 32 33 34 | 30 31 32 33 34
row1  30 30 30 30 30 | 31 31 31 31 31 | 32 32 32 32 | 33 33 33 33 33 | 34 34 34 34 34
row2  192 224 255 32 64 255 255 64 192 192 255 64 192 255 32 224 255 32 32 192 64 64 255 32
row3  56 248 60 252 52 224 60 52 56 248 60 52 56 60 252 248 60 252 252 56 60 60 224 252
row4  all zero
row5  all 2
```

**Rows 2 and 3 are bitmask tables, and this is the strongest signal.** In binary:

```
row2  32=00100000  64=01000000  192=11000000  224=11100000  255=11111111
row3  52=00110100  56=00111000  60=00111100  224=11100000  248=11111000  252=11111100
```

Every value in row 2 is a contiguous run of ones: one bit, one bit, two, three, eight. Row 3 holds runs
that grow by one bit at a time (`00110100` to `00111100`) plus the same `11100000`/`11111000`/`11111100`
family from the high end. **This is a shift or mask table, not terrain.** Rows 0 and 1 hold 30 to 34
grouped and counted, which reads like a small enumeration over five things.

**A real negative already: all four world files are byte-identical in this save.** Either the format
carries no per-slot state, or this save never wrote any. Do not assume it carries world data.

**Questions left:**

- Is `30..34` an **index into five things**? Row 1 is monotone in blocks of five, which is what a
  histogram or a column index looks like. Row 0 has the same values in a different order.
- Row 2 and row 3 as **shift tables**: test whether each entry equals `mask << n` or `mask >> n` for a
  single base mask. If they do, the rows are a precomputed rotation table and their purpose is
  probably text or sprite shifting.
- Row 5 is **all `2`**. Constant. What reads a constant 2?
- Why does `WORLD_FILL_FROM` say 61,952 when real data ends at 768? Either the constant describes
  where the game writes rather than where data ends, or it is wrong. **State which, with evidence.**
- 68,096 = 532 x 128. 532 = 4 x 133. No divisor makes it a clean 128x256 or 256x256 map, so either
  there is a header or the file is not one contiguous map.

**Done when** `world-format.md` has a measured layout for the six rows, or a negative saying what the
arithmetic rules out.

## Item 2: read the `randMod` functions, 33 of 35

**The largest unit.** 85 sites cluster into 35 functions. Two are read: the shrine dispatcher at
`0xf2cc0` and the consumable tick at `0xef440`.

For each:

```
node tools/randgroups.js
node tools/sweep.js --entry 0xADDR --len N
node tools/fieldmap.js --resolve 0x...
```

Write down in field names: what it rolls, the thresholds, what it reads, what it writes, which message
string it prints.

**Order, biggest first:** `0xf3758` (6, confirmed to hold real sites at `0xf37f9`, `0xf380f`,
`0xf3a6a`), then the fours `0xef898`, `0xf94fc`, `0xfcabc`, then the threes, twos, ones.

**One page per group of related functions**, not per function. Functions sharing a message table or a
record field belong together.

**Watch for:** the off-by-`0x20`, `ndisasm` mis-decoding `ff 34 bd <disp32>`, and reading a `db` ratio
as proof of alignment.

**Done when** all 35 appear in a page with arithmetic stated or a recorded reason they could not be
read. Update `plan.md` item 1 with the real count.

## Item 3: the high bits of a map cell

`v & 3` is terrain, established against a shuffle control. The upper nibble gained **+54.0pp**, the
largest of any field tested. Root cause unknown.

**Answerable statically.** The map buffer is 256 rows by 128 columns and the file supplies rows from
offset 1,536. Work on the MAP2 files directly.

- Test whether the high nibble describes the **cell** or its **neighbours**. An edge or corner code
  will correlate with the adjacent cell's low nibble in one consistent direction.
- Test the four high bits **independently**. `v >> 4` was measured as a unit and averaging four bits
  would hide four different meanings.
- Render four maps, one per high-bit value. Nobody can look at them tonight, so describe the geometry
  in words and save the images rather than judging them.

**Done when** the meaning is established or these specific tests are recorded negative.

## Item 4: name every roster field by usage

`record-layout.md` gives all 90 fields by name and address. Many have no known reader or writer.

**Pure bookkeeping, suits unattended work.** For each of the 90 addresses, find every reference in the
image with the correct displacement form, and record what reads and what writes it. Fields written but
never read, or read but never written, are findings.

Build `tools/fieldrefs.js` to take the field table and emit reference counts. Commit it.

**Done when** every field has a count and the unexplained ones are listed, in `field-references.md`.

## Item 5: assert the new findings in `verify.js`

The reproducibility contract is missing recent results. Two are cleanly assertable:

- **Record base `0xcde54`.** The format string has a fixed field count and the three anchors are fixed
  addresses. A stranger with the same zip can confirm it.
- **The 77 all-`0xEB` strings.** A count either holds or fails.
- **`WORLD*.UT2`**: 68,096 bytes, 128-byte rows, 6 rows of data.

**Done when** `verify.js` covers these and still passes. Do this early, it protects the other items.

## Item 6: sweep the docs for drift

58 pages, several written before later corrections. Known drift:

- `roster-reference.md` is stale and missing item fields.
- `shrine-function.md` has a correction banner but its body still uses the old field names.
- Pages still saying the record layout is unsolved.

Grep and fix, linking to `record-layout.md`. Do not delete history, annotate it.

**Done when** no page contradicts `record-layout.md`.

## Not in this queue, and why

- **The `0xEB` glyph question.** Parked after twelve attempts. Twelve is enough.
- **The top-of-image mapping.** Breaks above `0x104000`. Needs a savestate and nobody can take one.
- **The `0xe4086` switch table.** Three explanations ruled out. A fourth would be a guess.
- **Anything on Track B.** All of it needs keys pressed.
- **Combat formulas stated as verified.** They can be *read* under item 2. Confirming one needs a
  fight, so write them as read, not as verified.

## If everything finishes

Then the night produced a world format, 33 functions read, a map-cell answer, a field-reference table
and a clean docs set. That is more than enough. **Do not start something new at 4am.** Update
`plan.md` and stop, so the next session starts from an accurate map rather than a surprise.
