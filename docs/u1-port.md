# The Ultima I port, measured

`DARKNESS.EXP`, built with the same machinery as Ultima II and III. The lesson from those two is that a title is a
descriptor row plus whatever the machine says when it runs, and U1 needed one seed and no new code.

## The build

```
tools/game-build.sh u1 --no-run
counts    functions=955 instructions=43180 bytes=141303 jump_tables=69 bounded=66 indirect=30 refused=0 conflicts=0
built     build/u1/b/u1  (45,797,480 bytes)
stripped  /var/tmp/u1-DARKNESS-stripped.bin (965,474 bytes, was 965,986), entry 0xe7a74 = eb56
```

91 seconds, and nothing in the toolchain needed changing. The container is `MP` with the size arithmetic exact and
`relocCount` 0, the entry field is a runtime address, and the bytes at `entry + 0x200` are the same `eb 56` High C
start-up stub the other two carry. `tools/games.js` has held its row since the seven-title table was built, so the
executable's name, the program to read off the disc (`\DARKNESS.EXP`) and the selector all came from data.

The seed deriver finds 654 candidates for it. The recompiler reaches 955 functions from those plus the entry, with
0 refused and 0 conflicts, and 30 unresolved indirect transfers, which is the same order as Ultima III's 30.

## The one seed the machine had to supply

First run faulted at frame 98:

```
fault at 000c:000ca9a0: no recompiled function at 000c:000ca9a0 (eip 000e3d37, frame 98)
```

`0x0ca9a0` starts `ff 05 e0 c6 04 00` (`inc dword [0x4c6e0]`) and the two bytes before it are `c3 8b c0`, a `ret` and
the two-byte nop. A leaf with no prologue, so no static rule has it: the same shape as `0xbc14c` and `0xd6f4a` in
Ultima III. Added to `tools/u1-seeds.txt` with that fault beside it, one rebuild, and the run completes 300 frames.

**It draws its title screen.** `Ultima Trilogy`, `Ultima I - The First Age of Darkness -`, `FUJITSU`, and the title
art, read off the capture rather than inferred.

## It is playable, on a player's report

Paul played it on jarvis on 2026-11-12: created a character, chose `Journey Onward`, and played. That is a player's
observation and it is the oracle, so it is recorded as one rather than as a measurement of this project's.

Two seeds got it there, and the second is the interesting one:

| seal | fault | what it is |
|---|---|---|
| `0x0ca9a0` | frame 98, from `0x0e3d37` | `inc dword [0x4c6e0]`, after a `ret` and the two-byte nop |
| `0x0e5d8a` | frame 1779, from `0x0e4c17`, on `Journey Onward` | `cmp byte [0xc3e81], 2`, after the same shape |

The second is **the same routine as Ultima III's seed `0xd6f4a`**, which opens `cmp byte [0xb4131], 2` behind the same
`ret; mov; inc; ret`. Two games, one High C library function, both invisible to the static rules for the same reason:
a leaf with no prologue. That is the first cross-title confirmation of the pattern, and it suggests the next title's
first seed is worth looking for in the same place.

**What still is not established.** Whether every U1 screen works. Character creation, `Journey Onward`, play, a town
and a dungeon are confirmed by a player. The shops, the endgame and a save read back field by field are not:
`ROSTER.UT1` is 9,682 bytes for his character against the 9,676 [save-files.md](save-files.md) records for the
original's, so the two agree in size but their fields have not been compared.

## An open question from play: monsters and closed doors

Paul's report, 2026-11-12: in a dungeon, **monsters attacked him through closed doors**. Whether that is the
original's behaviour is not known, and this page will not guess. What can be said now is where the answer will come
from, and it is a shorter search than it looks.

**The `u1` binary contains no hand-written replacement code.** `tools/game-build.sh` builds every title but Ultima II
with `-DU2_FOREIGN_MODULE=ON`, which compiles `port/native_shadows.cpp` with an empty manifest, because those shadows
name routines of `ENCHANT.EXP`. So the dungeon rules that ran are the original's own instructions, translated
mechanically. A divergence from the machine therefore has only four plausible sources, and three of them are the
port's own machinery rather than the game's logic:

| possible source | why it can still be a port defect |
|---|---|
| the random number generator | the port's RNG is the C library's, seeded the way the original seeds it, and a different sequence would change which monster steps where |
| timing | a turn driven by an interrupt arriving at a different point in the frame |
| the machine layer | an I/O or BIOS answer the program reads and acts on |
| the original itself | monsters in U1 may genuinely be able to attack through a door |

**How to settle it, cheapest first.** Read the dungeon's monster-move rule in the recompiled code: it is a small amount
of arithmetic, it is in the module already, and it either forbids entering a door tile or it does not. That is the
corpus answer and it needs no emulator. The emulator is the fallback, and `tools/container-run.sh` or the `jarvis`
copy both run the original.

## Reproducing

## Reproducing

```
tools/game-build.sh u1 --no-run
U2_SHOT=/var/tmp/u1.png ./build/u1/b/u1 --graphics=none --frames=300
```

Run it from a directory that holds the five media files, or pass the three paths, and it reads `\DARKNESS.EXP` off
the disc.
