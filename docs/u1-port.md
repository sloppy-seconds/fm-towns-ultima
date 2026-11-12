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

## What is not done

The game has not been driven past the title. Nothing has pressed a key at it, so the menu, character creation,
`A:\ROSTER.UT1` and the whole of the game are untested, and any of them may want another seed. The save disk is
`null` in `tools/games.js` because no U1 floppy exists yet; [save-files.md](save-files.md) records `ROSTER.UT1` at
9,676 bytes and says it is plain text, so the same directory-backed A: that serves U2 and U3 should serve it.

## Reproducing

```
tools/game-build.sh u1 --no-run
U2_SHOT=/var/tmp/u1.png ./build/u1/b/u1 --graphics=none --frames=300
```

Run it from a directory that holds the five media files, or pass the three paths, and it reads `\DARKNESS.EXP` off
the disc.
