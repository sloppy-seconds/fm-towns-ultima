# Porting seven titles without them fighting for names

The titles in scope, decided by Paul on 2026-11-10, are the three games, `BRITISH.EXP`, and the three demos.
`TMENU.EXP` is out: it is `P3` rather than `MP`, it is the TownsOS launcher rather than a title, and the shared
container arithmetic cannot serve it.

The point of this page is that seven titles cannot each invent their own spelling of the same six facts. It
records what the facts are, where each one lives, and which conventions are settled as opposed to still being
one game's name with the number filed off.

## The seven, as one table

Every entry below was measured from the disc, and the arithmetic that puts a title in this table is the same for
all of them: `(pages - 1) * 512 + lastPage` reproduces the file size exactly, the dword at `0x14` is a runtime
address, the stack field at `0x0e` is a plausible one, and the bytes at `entry` in the stripped image are the
`eb 56` High C start-up stub.

| id | title | executable | bytes | entry | esp |
|---|---|---|---|---|---|
| `u1` | Ultima I (DARKNESS.EXP) | `DARKNESS.EXP` | 965,986 | `0xe7a74` | `0x104b64` |
| `u2` | Ultima II (ENCHANT.EXP) | `ENCHANT.EXP` | 1,072,398 | `0x101a20` | `0x11eb10` |
| `u3` | Ultima III (EXODUS.EXP) | `EXODUS.EXP` | 904,310 | `0xd8ab0` | `0xf5a78` |
| `british` | British (BRITISH.EXP) | `BRITISH.EXP` | 360,481 | `0x54094` | `0x70e24` |
| `u1demo` | Ultima I demo (UT1DEMO.EXP) | `UT1DEMO.EXP` | 618,433 | `0x93034` | `0xafdc4` |
| `u2demo` | Ultima II demo (UT2DEMO.EXP) | `UT2DEMO.EXP` | 618,849 | `0x931d4` | `0xaff64` |
| `u3demo` | Ultima III demo (UT3DEMO.EXP) | `UT3DEMO.EXP` | 619,297 | `0x93394` | `0xb0124` |

`tools/games.js` is that table, and `node tools/games.js --table` regenerates it. Anything that needs a title's
executable name, entry, stack, selector, seed file or save disk asks the file rather than restating it.

**`BRITISH.EXP` is not a game.** Measured from its own strings: it references `\GRAPH\HEADTTL.TIF` and
`\GRAPH\BRIBRI.TIF` and the same sound bank as Ultima II (`\SND\ULTIMAFMB`, `BUMP`, `FIRE`, `WHAT`, `MAGIC3`,
`BUL1`, `MAGIC4`, `KATANA1`, `MONSTER1`, `BOMB5`, `DOOR3`, `BOMB4`, `UZUMAKI1`, `MAGIC2`, `BOMB2`). A publisher's
splash with a logo and a title header, 360 KB. It is in scope as a second consumer of the machine, not as
something to play.

**The three demos are one program.** `docs/three-games-compared.md` measured them 91.8 percent identical, with the
difference in one 44 KB region. Seven ids is the right table size, but the demos are one porting job.

## Where the facts live, and where they will

| fact | settled convention | state |
|---|---|---|
| the title's executable and entry | `tools/games.js` | done |
| the build stage | `build/<id>/` | done for `u3`, `u2` still uses `build/port/` |
| the committed module | `module/<id>/` | not done, `module/` is U2's today |
| the binary | `<id>port`, via a CMake `PORT_TARGET` cache variable | not done, everything is `u2port` today |
| measured seeds | `tools/seeds/<id>.txt` | partly: `tools/u3-seeds.txt` and `tools/runtime-seeds.txt` |
| extracted asset output | `extracted/<id>/` | not done, `extracted/u2` and `extracted/GRAPH` coexist |
| the save disk | `saves/<id>-test.hdm` | partly: `saves/u3test.hdm` |
| the doc page | `docs/port-<id>.md` | not done, this session added `docs/u3-port.md` |
| environment variables | one neutral `PORT_*` namespace | not done, 30+ `U2_*` names are shared by U2 and U3 today |
| release assets | `<id>port-<os>-<arch>` | not done, `dist/u2port-linux-x86_64` |

The environment variables are the ones that will hurt first, because U3 already uses `U2_SHOT` and `U2_STACK` and
a third title would copy whichever spelling it reads first. They are also the change most likely to break a
harness silently, so they go last and alone.

## The order, and why

1. The descriptor table and the naming conventions. No behaviour change, and it is what stops the next title
   copying a name instead of asking for it.
2. `PORT_TARGET` in CMake plus the six call sites that name the binary. U2's default stays `u2port`, so no
   release name, gate or doc moves.
3. The `PORT_*` environment namespace with `U2_*` honoured as aliases for one release, then dropped.

Steps 1 and 2 are in `docs/recompile-ultima3-plan.md` as items U3-6a, U3-6b and U3-6c. Step 3 is the one to do
with a control smoke run afterwards rather than with the compiler's blessing.
