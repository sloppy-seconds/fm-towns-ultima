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
| the binary | the title's id, via a CMake `PORT_TARGET` cache variable | done: `u3` builds `u3`, `u2` builds `u2` |
| measured seeds | `tools/seeds/<id>.txt` | partly: `tools/u3-seeds.txt` and `tools/runtime-seeds.txt` |
| extracted asset output | `extracted/<id>/` | not done, `extracted/u2` and `extracted/GRAPH` coexist |
| the save disk | `saves/<id>-test.hdm` | partly: `saves/u3test.hdm` |
| the doc page | `docs/port-<id>.md` | not done, this session added `docs/u3-port.md` |
| environment variables | one neutral `PORT_*` namespace | not done, 30+ `U2_*` names are shared by U2 and U3 today |
| release assets | `<id>port-<os>-<arch>` | not done, and deliberately unchanged by the executable's rename: `dist/u2port-linux-x86_64` still says what it is to somebody who downloads it |
| the link mode | static SDL3 from `tools/sdl-from-source.sh`, shared refused | done: CMake stops on a shared SDL3, `-DPORT_ALLOW_SHARED_SDL=ON` is for a link check that ships nothing |

The environment variables are the ones that will hurt first, because U3 already uses `U2_SHOT` and `U2_STACK` and
a third title would copy whichever spelling it reads first. They are also the change most likely to break a
harness silently, so they go last and alone.

## Where a title's files live

One rule, because the first two attempts disagreed: **the binary goes at the tree root beside `play.sh`, and the
engine's files go in `game/`.** That is how `/home/paul/Downloads/fmu2/` is laid out on jarvis, and it is why
`u2` and `u3` sit beside `u2port` rather than inside `game/` next to the executables the guest loads. A build that
puts a binary anywhere else makes a person guess which directory to run it from.

| what | where | example |
|---|---|---|
| the port binary | tree root | `fmu2/u2`, `fmu2/u3` |
| the guest's executable and the disc | `game/` | `game/ENCHANT.EXP`, `game/EXODUS.EXP`, `game/disc.cue`, `game/ultima.img` |
| save floppies | `assets/save-disk/` | `assets/save-disk/userdisk.hdm`, `assets/save-disk/u3test.hdm` |

Inside the repository the same distinction is `build/<id>/b/<id>` for the binary and `build/<id>/` for the
per-title build products, which is a staging directory rather than a distribution one.

## Static by default, and a shared SDL is a configuration error

Every build links the pinned SDL3 archive, and one that would link the distro's shared library stops at configure
time and names `tools/sdl-from-source.sh` instead. The reasoning is the same as the release's: a binary that needs
`libSDL3` from a package manager is not portable, Ubuntu 24.04 has no `libsdl3-dev` at all, and a person who copies
one file expects one file to work.

Two cache traps were paid for here on 2026-11-10, both the same shape as the `FMT_RUNTIME` one:

- `SDL3_DIR` is cached, so a tree configured before this rule kept the brew prefix, `find_package` used it, and the
  configure failed with the message about a shared SDL3. Every build now passes `SDL3_DIR` explicitly as well as
  `CMAKE_PREFIX_PATH`.
- `PORT_TARGET` is cached too, so the first build after the executable was renamed produced `u2port` while printing
  `u2`. Every build passes it explicitly.

`-DPORT_ALLOW_SHARED_SDL=ON` exists for exactly one case, `tools/ci-port-build.sh`, which links inside a container
that has a shared SDL3 and ships nothing. The release workflow builds the archive from source, so the static path is
proven there rather than in the fast link job.

## The order, and why

1. The descriptor table and the naming conventions. No behaviour change, and it is what stops the next title
   copying a name instead of asking for it.
2. `PORT_TARGET` in CMake plus the six call sites that name the binary. Done: the executable is the title's id,
   so `u2` and `u3`, and the release asset keeps its long name. Every build passes `-DPORT_TARGET` explicitly
   rather than relying on the default, because the value is cached and a tree configured before the rename kept
   producing `u2port` while printing the new name. That was measured, not anticipated.
3. The `PORT_*` environment namespace with `U2_*` honoured as aliases for one release, then dropped.

Steps 1 and 2 are in `docs/recompile-ultima3-plan.md` as items U3-6a, U3-6b and U3-6c. Step 3 is the one to do
with a control smoke run afterwards rather than with the compiler's blessing.
