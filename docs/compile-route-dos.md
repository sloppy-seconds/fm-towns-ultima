# The DOS compile route is the default, and its flags only half work

**Verdict: use DOS mode.** For routine-level byte matching, `tools/cserve.js`
calling `HCD386.EXE` under MS-DOS 6.2 is the better tool than the TownsOS
route, and this page records why, how to bring it up cold, and one defect in it
that was found by measurement rather than assumed.

The TownsOS route is `docs/highc-authentic-toolchain.md`. It was worth one
session because it proved the substitute invocation reproduces the authentic
one, seven routines byte-for-byte. That validation is done and does not need
repeating per routine.

## Why DOS mode is the default

| | DOS mode (`cserve`) | TownsOS mode (`HC386.EXE`) |
|---|---|---|
| per-cycle time | about 13 s, scripted | minutes, keyboard typing plus screenshot reading |
| gets code bytes | parses the OMF object properly | manual offset guess at `0x200` in the `P3` container |
| reaches the backend | yes, calls `HCD386.EXE` directly | no, goes through the `HC386.EXE` front-end |
| container output | `P3` | `P3` |
| reproduces the 7 matches | yes | yes |

Both routes emit `P3`, so neither produces the game's `MP` container, and that
does not matter because the metric is instruction bytes at an offset.

Two things the TownsOS route is still needed for. It is the only way to run the
`HC386` front-end, which is what the developers most likely typed. And the floppy
used by DOS mode has limited space, so a run needing many files at once wants
the hard disk instead.

## Cold start, verified

Prerequisites are in `docs/compiling-on-fm-towns.md`. The container and the API
server are separate, and both must be running.

```bash
sudo -v                                  # podman needs sudo on this host

sudo podman run -d --name dosboot --rm \
  -p 6080:6080 -p 5900:5900 -p 8096:8080 \
  -v "$PWD/vendor/emulator:/emulator:ro,z" \
  -v "$PWD/vendor/roms:/roms:ro,z" \
  -v "$PWD/saves:/data:z" \
  -e RESOLUTION=1024x768x24 -e ROM_DIR=/roms -e API_PORT=8080 \
  -e FD0_IMAGE=/data/dos62v6.hdm -e CMOS=/data/CMOS_HDD.bin \
  -e "TSUGARU_EXTRA=-BOOTKEY F0 -HD0 /data/genhd2.img -CD /data/hc.ccd" \
  localhost/fmtowns:latest

sleep 50

node tools/cserve.js --container dosboot --podman "sudo podman" \
  --api http://127.0.0.1:8096 &
```

`--container` must match the container name, and `--podman "sudo podman"` is
required because podman needs sudo here. A `cserve` left running from an earlier
session will still be pointed at whatever container it started with, and the
result is the confusing error `no container with name or ID "hcboot" found`.
That was hit in practice. Check with:

```bash
curl -s http://127.0.0.1:8097/api/health
```

`healthy: true` only means the floppy image parses. It does **not** mean the
emulator is up, because `cserve` reads the image with mtools without asking the
guest. The container can be dead and health still reports green.

## Compiling one file

```bash
./tools/cc.sh file.c                       # print code bytes
./tools/cc.sh file.c --want '8b 44 24'     # compare, exit 2 on mismatch
./tools/cc.sh file.c --json                # full response, includes the compiler log
./tools/cc.sh -e 'int f(int x){return x;}' # inline
```

`--json` returns a `log` field with the compiler's own listing. Read it when a
compile is suspicious, because the object can be produced and still not reflect
what was asked for.

## Defect: the flags parameter only half works

`/api/compile` accepts `flags` and interpolates it into the generator command
line at `tools/cserve.js:513`. Ordinary switches arrive. **Toggle switches are
silently ignored.** Measured on one source, all producing the same object sha
`cfa02c2e3778`:

| flags | result |
|---|---|
| (none) | 62 bytes of code |
| `-O` | 62 bytes, identical |
| `-off Remove_BP` | 62 bytes, identical |
| `-on PROFILE` | 62 bytes, identical |
| `-off PROFILE` | 62 bytes, identical |
| `-on=PROFILE` | 62 bytes, identical |
| `-zzzzz` | 62 bytes, identical, no error |
| `-g` | **compile fails**, so the flag did arrive |

`-g` is the control that matters. It changed behaviour, which proves the channel
is live. `PROFILE` on should insert an `mcount` call at function entry, which
would be obvious in the bytes, and it did nothing. `-zzzzz` is accepted without
error, so **an unknown flag cannot be detected from the exit status**.

Consequences, both of them unwelcome:

1. `Remove_BP` cannot be set this way. The frame question in
   `docs/highc-authentic-toolchain.md` is not answered by the DOS route either.
2. `tools/frameflags.py` concluded that twenty-one flag sets produced
   byte-identical output, and that was read as the optimiser not engaging. That
   experiment could not have produced any other result for the toggle flags, and
   its header note that "unknown flags make High C error rather than ignore" is
   false. The conclusion needs re-deriving with `-O` levels only, and needs the
   `-g` style control applied first.

Any future flag experiment on this route must begin by proving the flag arrived,
using something that breaks the compile or visibly changes the code.

## Correcting a claim made on this project's own evidence

`docs/highc-authentic-toolchain.md` first reported that the TownsOS route
"engages an optimiser" that the DOS route could not, citing `lea eax,[ecx+ecx]`
for a multiply by two. That was wrong and is corrected there. `lea` sequences
were already confirmed from the DOS route in `docs/highc-codegen.md`. Same code
generator, same behaviour.

## Related

- `docs/compiler-api.md`: the API in detail, and the floppy-as-transport measurement
- `docs/highc-authentic-toolchain.md`: the TownsOS route and the `Remove_BP` finding
- `docs/compiling-on-fm-towns.md`: full manual setup, every emulator setting
