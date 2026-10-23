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
24   u32      rate, 1960 in layout A, unreliable in layout B
28   u16      always 60
30   u16      always 0
32   bytes    payload, runs to EOF, no trailer
```

**Verdict:** positive. Two earlier readings were wrong: the payload is not
followed by a 32-byte trailer, and `u32@12` is the length rather than the file
size.

### The `u32@24` puzzle, answered for two of three files

Field 24 reads 1960 in twelve files and nonsense in `BUMP` (2,426,302) and `FIRE`
(4,292,870,291). That is not a corrupt field, it is a **second header layout**.

The discriminator is offset 16, which is `0` in layout A and `length - 1` in
layout B. `BUMP`, `FIRE` and `WHAT` all satisfy `off16 == off12 - 1` exactly, and
no other file does. So they are looped sounds carrying a loop point, and the
presence of that loop point shifts what the later offsets mean.

Measured on all 15 files: **offset 12 equals `filesize - 32` in 15 of 15**, so the
payload length field is reliable everywhere regardless of layout.

`WHAT` is the odd one out within layout B: its field 24 reads 1568, which is
plausible as a rate, while `BUMP` and `FIRE` read values that cannot be.

### Whether 1960 is a frequency is still open

**A scan of `ENCHANT.EXP` found no `1960` anywhere**, as a u16 or a u32. So the
game does not program this value, it reads it from the file. That is evidence about
where the number comes from, not what it means.

At 1960 Hz the effect durations run from 1.5 s (`WHAT`) to 29.9 s (`MAGIC2`).
Sound effects in a 1990 RPG are usually under two seconds, so a literal 1960 Hz
reading makes most of them implausibly long.

The payloads are 8-bit and full-range: `BOMB2` spans 0 to 255 with a mean of 110.8,
which is consistent with centred unsigned PCM rather than with a narrow or clipped
stream. That says the data is audio, not that 1960 is the rate.

**Verdict on the rate: OPEN.** Establishing it needs the code that programs the
PCM channel, which is Track B or a deeper read of the sound setup.

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
