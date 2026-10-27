# The string tables, and whether the kit should mask them

**The tables are documented below. They are eight separate blocks, not one, and masking the largest
of them takes the conflict count from 359 to 166. Whether `fmtownskit` should do the masking is a
separate question and the answer is no.**

## The tables, measured

### Sound filename table, `0x1350` to `0x1472`

14 entries, `Q:\SOUND\<name>.SND`, at a **fixed 20-byte stride**:

```
0x1350  Q:\SOUND\BUMP.SND
0x1364  Q:\SOUND\FIRE.SND
0x1378  Q:\SOUND\WHAT.SND
0x138c  Q:\SOUND\MAGIC3.SND
0x13a0  Q:\SOUND\BUL1.SND
0x13b4  Q:\SOUND\MAGIC4.SND
0x13c8  Q:\SOUND\KATANA1.SND
0x13e0  Q:\SOUND\MONSTER1.SND
0x13f8  Q:\SOUND\BOMB5.SND
0x140c  Q:\SOUND\DOOR3.SND
0x1420  Q:\SOUND\BOMB4.SND
0x1434  Q:\SOUND\UZUMAKI1.SND
0x144c  Q:\SOUND\MAGIC2.SND
0x1460  Q:\SOUND\BOMB2.SND
```

The stride is 20 rather than the entry length, so each entry is NUL padded. This is the table whose
name appears as a literal 54 times in the image, which is how the sound code indexes it.

### Music filename table, `0x1e68` to `0x1f4c`

`Q:\SOUND\<name>.EUP`, same 20-byte stride, a separate block:

```
0x1e68  Q:\SOUND\MAP.EUP
0x1e7c  Q:\SOUND\SOUGON.EUP
0x1e90  Q:\SOUND\DUNGEON.EUP
0x1ea8  Q:\SOUND\MAPF1.EUP
0x1ebc  Q:\SOUND\MAPF2.EUP
0x1ed0  Q:\SOUND\DANF.EUP
0x1ee4  Q:\SOUND\OSIRO.EUP
0x1ef8  Q:\SOUND\BRIGHT1.EUP
0x1f10  Q:\SOUND\TOWN.EUP
0x1f24  Q:\SOUND\BRIGHT1.EUP
0x1f3c  Q:\SOUND\MAP.EUP
```

`BRIGHT1.EUP` and `MAP.EUP` each appear twice, so this is an index rather than a unique list.

### The remaining six groups

`Q:\` strings appear in eight groups in total, not one contiguous block:

| group | bytes |
|---|---|
| `0x1350..0x1472` | 290 |
| `0x1e68..0x1f4c` | 228 |
| `0x22ec..0x23db` | 239 |
| `0x24ac..0x24c0` | 20 |
| `0x2584..0x25e1` | 93 |
| `0x5178..0x5188` | 16 |
| `0x7dac..0x7e0f` | 99 |
| `0xb880..0xb8c4` | 68 |

### Message tables, `0x1500` onward

English followed by the same text in Shift-JIS:

```
0x1678  "   A)ttack  J)ump   S)teal \0"
0x1695  "   A)....   J)....  S)....\0"     Shift-JIS, the same menu
0x16c4  "   B)oard   K)limb  T)rans-\0"
0x3000  Shift-JIS prose, dense
```

Shift-JIS density reaches 113 to 135 lead bytes per 256 in places (`0x1a00` to `0x1d00`, `0x2000`
to `0x2100`), which is a Japanese text block rather than a table of ASCII strings.

**This accounts for three earlier misreadings.** A Shift-JIS lead byte is `0x81` to `0x9F` or `0xE0`
to `0xEF`, so `81 6d eb 42 eb 4e` is text and the `0xEB` at even offsets in
[unreferenced-extents.md](unreferenced-extents.md) is the second byte of a character code, not an
opcode.

## Masking them: measured effect

| masked | conflicts | functions | bytes of code |
|---|---|---|---|
| header only | 359 | 709 | 127,205 |
| header and `0x1348..0x3600` | **166** | 708 | 122,726 |
| header and `0x1348..0x6000` | not measured | | |

**193 conflicts removed, 4,479 bytes of claimed code given up.** The byte figure is the honest cost:
whatever the walk was decoding in that region becomes unmasked data, and the 4,479 bytes were not
code.

### Where the region actually ends, and a metric that failed

The first attempt to find the end used a "text-like" test counting ASCII, Shift-JIS lead bytes and
NULs. It reported **74 to 98 percent text-like all the way past `0x7a00`**, which is not credible:
Shift-JIS lead bytes plus ASCII plus NUL covers most of the byte range, so the test cannot tell text
from a sprite bank.

A stricter count, printable ASCII only, with runs of eight or more:

| from | printable ASCII | runs of 8+ |
|---|---|---|
| `0x1348` | 63% | 20 |
| `0x3000` | 39% | 5 |
| `0x4000` | 51% | 15 |
| `0x5000` | 34% | 3 |
| **`0x6000` onward** | 32% and falling | **0** |

ASCII runs stop entirely at `0x6000`, so that is a defensible end for the text. The region past it is
binary data of some other kind, not text, and is not masked by this.

The `0x1348..0x3600` range in the table above was the one actually measured. Widening to `0x6000`
would mask roughly twice as much and is **not** measured, so no conflict figure is claimed for it.

The remaining conflicts after the `0x1348..0x3600` mask start at `0x235`, and that one has its own
explanation:

```
0x230  mov al, [ebp]
0x233  int 0x90          ; a TBIOS trap
0x235  movzx eax, ah
0x239  ret
0x23a  00 00 00 00 00 00
0x240  4b 59 42 5f 6c 6f 63 6b   "KYB_lock"
```

The stub is clean and ends at `0x239`. A descent running past its `ret` reaches `"KYB_lock"` and
decodes ASCII as instructions, which is the same failure as the text tables in miniature.

## Should `fmtownskit` mask them: no

Three reasons, in order of weight.

**The region boundaries are game knowledge, not format knowledge.** `0x1348..0x3600` is where *this
game's* sound names and messages sit. His kit has no way to derive it, and hard-coding one game's
table offsets into a game-agnostic toolkit is exactly what `fmtownskit`'s README says it avoids.
`_edata` and `_end` are format facts. "The message table starts at 0x1500" is not.

**The mechanism already exists and is sufficient.** `--no-code` does everything needed. The finding
here is a *value* to pass it, not a capability it lacks. Adding a data detector to the kit would put
a heuristic where a measurement belongs.

**The mask is not the fix for the underlying defect anyway.** The real question is why a descent
leaves `0x239` with a `ret` and keeps going, or why a jump target lands in text. Answering that
removes the conflicts without masking anything and without losing the 4,479 bytes. Masking treats
the symptom.

So: **update `tools/codelimits.js` in this repository with the measured ranges**, keep the kit's
`--no-code` as the interface, and treat the entry into the text as the open question it is.

## What is not established

Why the walk enters `0x1348` at all. `--refs 0x1400` and `--refs 0x1678` both report no reached
instruction, `0xd5d` ends at `0xd8c` and the byte after its padding is a lone `0x7f`, and there is no
linear path from code into the table. Two candidates remain, both unproven: a jump table in the low
startup code read to the wrong bound, and a seed whose disassembly runs past its own terminator. The
`0x235` case is evidence for the second, since a stub ending in `ret` is followed by a string and a
descent that ignores the `ret` walks straight into it.
