# Sound

The `.SND` effect format, and why the playback rate is uncertain.

## The `.SND` effect format

### 7.1 `.SND` header

**Tried:** fit a field layout across all 15 files.

**Measured:** every file satisfies `filesize == 32 + u32@12` exactly, 15 of 15.
Layout:

```
 0   char[8]  name
 8   u32      flag, 1 for most, junk in FIRE and WHAT
12   u32      payload length, authoritative
16   u32      payload length-1 for BUMP/FIRE/WHAT, else 0
20   u32      same as 12 for BUMP/FIRE/WHAT, else 0
24   u32      nominal rate, unreliable
28   u16      always 60
30   u16      always 0
32   bytes    payload, runs to EOF, no trailer
```

**Verdict:** positive. Two earlier readings were wrong: the payload is not
followed by a 32-byte trailer, and `u32@12` is the length rather than the file
size.

**Open:** field 24 reads 1960 for 13 files but 2,426,302 for `BUMP` and
4,292,870,291 for `FIRE`. WAVs use 1960 as best-supported and report the raw
value. Whether 1960 is the true playback rate is unverified.

### 7.2 `.FMB` instrument bank

**Measured:** `SOUND/ULTIMA.FMB`, 6,152 bytes, 213 instrument names in fixed
64-byte records: `Trumpet`, `Horn`, `Tuba`, `Brass`, `Brass 2`, `BrsBell`,
`Piccolo`, `Flute`, `Clarinet`, `Oboe`, `Fagotto`, `Strings`, `Strg 2`,
`Piano`, `E.Piano`, `E.Piano2`, `P.Organ`, `P.Org 2`, `E.Organ`, `Harpsic`,
`Clavinet`, `Guitar`, ...

**Verdict:** FM Towns YM2612 patch bank. Names extractable. Rendering needs a
YM2612 core plus a driver. Not attempted.

### 7.3 Files named `.MP3`

**Tried:** check for MPEG frame sync.

**Measured:** `UT3/BRITISH.MP3` and `UT3/DARDIN.DG3` begin `02 02 02 02...`.
No `0xFF 0xEx` sync anywhere.

**Verdict:** NEGATIVE. Not MP3 audio. `UT3/*.MP3` (4,096 B) and `UT3/*.DG3`
(2,048 B) are fixed-size map data, consistent with the `MAPTYPE` names
(`BRITISH`, `MOON`, `FAWN`, `YEW`, `GREY`, `AMBROSIA`, `SOSARIA`, `EXODUS`,
`DEATH`, `DUNGEON`, `TIME`, `CNFLCT`, `DEVIL`, `LCN`, `MONTOR_E`, `MONTOR_W`)
for Ultima III's towns. *Format open.*

---

---

**[Assets and graphics](assets-and-graphics.md)** **[The save disk](save-disk.md)**
