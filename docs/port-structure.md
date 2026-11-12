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
something to play. It runs end to end since 2026-11-12, and what that took is in
[docs/port-british.md](port-british.md).

**The three demos are one program.** `docs/three-games-compared.md` measured them 91.8 percent identical, with the
difference in one 44 KB region. Seven ids is the right table size, but the demos are one porting job. All three run
from their committed modules since 2026-11-12, and what that took is in [docs/port-demos.md](port-demos.md).

## Where the facts live, and where they will

| fact | settled convention | state |
|---|---|---|
| the title's executable and entry | `tools/games.js` | done |
| the build stage | `build/<id>/` | done for `u3`, `u2` still uses `build/port/` |
| the committed module | `module/<id>/` per title, `module/tbios/` shared | done for all seven: u1, u2, u3 at 8 to 9 MB each, the three demos at 2.9 MB each, british at 2.3 MB, plus one 84 MB TBIOS, which is why it is shared |
| the binary | the title's id, via a CMake `PORT_TARGET` cache variable | done: `u3` builds `u3`, `u2` builds `u2` |
| the window title bar | `PORT_TITLE`, from `tools/games.js` `window` | done: CMake defaults it to `PORT_PROGRAM` so a build path nobody updated still gets a bar of its own rather than a shared one |
| measured seeds | `tools/seeds/<id>.txt` | partly: `tools/u3-seeds.txt` and `tools/runtime-seeds.txt` |
| extracted asset output | `extracted/<id>/` | not done, `extracted/u2` and `extracted/GRAPH` coexist |
| the save disk | `saves/<id>-test.hdm` | partly: `saves/u3test.hdm` |
| the doc page | `docs/port-<id>.md` | begun: `docs/port-british.md` and `docs/port-demos.md` follow the spelling, `docs/u1-port.md` and `docs/u3-port.md` do not |
| environment variables | one neutral `PORT_*` namespace | not done, 30+ `U2_*` names are shared by U2 and U3 today |
| release assets | `fm-<id>-<os>-<arch>` | done: `tools/release-package.sh` builds one binary per id from `tools/games.js --ids`, so all seven Linux titles ship. Windows carries the three games only, and the release notes say so |
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

## The glibc floor is 2.34, and the release base is AlmaLinux 9

The floor is **GLIBC_2.34**, set by Paul on 2026-11-10, and `tools/glibcfloor.js` owns the number. The release refuses to
package a binary that needs a newer one, the same way it refuses a binary that wants `libSDL3` from the distro.

**The floor is decided by the build host, not the source.** A binary records, per imported symbol, the glibc version that
symbol appeared in, and the loader will not start it on a machine with an older libc. Measured on a host build of the port
on 2026-11-10, on glibc 2.43:

| needs | symbols | why |
|---|---|---|
| `GLIBC_2.43` | `acosf`, `asinf`, `atan2f`, `log10f`, `sqrtf` | single-precision float math, re-versioned in that release |
| `GLIBC_2.38` | `__isoc23_strtol` and the scanf family, `strlcpy`, `strlcat`, `fmod`, `fmodf` | C23 strtol redirects, and `strlcpy` arriving |
| `GLIBC_2.34` | 32 ordinary symbols | the newest version we accept |

The same source compiled where libc is older binds `sqrtf` to `GLIBC_2.2.5` and costs nothing, so no source change is
involved and none would help. What the floor needs is a base image at or below it.

**The base is AlmaLinux 9, measured.** `container/Containerfile.x` moved there on 2026-11-10 and the release it produces
passes the gate:

```
binary    dist/u2port-linux-x86_64, 45,681,016 bytes
highest   GLIBC_2.34  within the floor
libstdc++ none: linked statically, so libc is the only floor
ldd       linux-vdso.so.1 libm.so.6 libc.so.6 /lib64/ld-linux-x86-64.so.2
```

Two libraries beyond libc are all it needs, and the whole build takes 2m08s in the container once SDL is cached.

**Three things had to be right for it to work, and each failed first.**
| what | measured failure | fix |
|---|---|---|
| the base's libc | Debian 11 bullseye is 2.31 and compiles, but its gcc 10.2 has no `std::chrono::clock_cast` | Alma 9, whose glibc is exactly 2.34 |
| the base's compiler | Alma 9's own gcc 11.5 **also** lacks `clock_cast`, so the same one line in `towns_dos.cpp` failed twice | `gcc-toolset-13` from AppStream, first on `PATH` |
| where SDL installs | `GNUInstallDirs` puts `libSDL3.a` in `lib64` on the Red Hat family, so the prefix was unusable | `tools/sdl-from-source.sh` forces `CMAKE_INSTALL_LIBDIR=lib` |

A fourth was found in passing: the image had no `diffutils`, and the licence comparison then reported the two texts as
different because `cmp` was missing rather than because they differed.

**The display path was tested too, because that image is also `tools/x-run.sh`.** On Alma 9 the viewers come from EPEL,
which is the part a build alone would not prove. Measured 2026-11-10, in that image:

| what | result |
|---|---|
| `Xvfb :99` | up at 1024x768x24 |
| `x11vnc` | running, port 5900 |
| noVNC | `/usr/share/novnc` present, `websockify` serving, `GET /vnc.html` answers **200** |
| ImageMagick | `import -window root` captures the display |
| the port with `--graphics=sdl` | draws Ultima II's title on that display, captured and read back |

So EPEL's noVNC does land in the path `x-entry.sh` looks for, and nothing silently fell back to raw VNC.

**Two other libraries have floors of their own, and one is already fixed.** libstdc++ was asking for `GLIBCXX_3.4.31`,
which is gcc 13's, so the release links `libstdc++` and `libgcc` statically (`-DPORT_STATIC_CXX=ON`, passed by
`tools/release-package.sh`). Those symbols then live in the binary and glibc is the only remaining floor. That option is
not on by default because Fedora and Bazzite do not ship `libstdc++.a` without the `libstdc++-static` package, so a host
build links dynamically and is simply not shippable, which `glibcfloor.js` says out loud.

`node tools/glibcfloor.js build/u3/b/u3` prints the table above and exits non-zero. It has been watched failing, which is
the only reason to trust it: the ceiling is a comparison, and lowering it to 2.30 makes 2.38 fail as well.

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
