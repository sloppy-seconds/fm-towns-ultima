# The DOS compile route is the default, and its toggles crack routines

**Verdict: use DOS mode.** For routine-level byte matching, `tools/cserve.js`
calling `HCD386.EXE` under MS-DOS 6.2 is the better tool than the TownsOS
route, and this page records why, how to bring it up cold, and the toggle that
reproduces a routine no source shape could match on its own.

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

## The flags parameter works, and one toggle cracks a routine

`/api/compile` accepts `flags` and interpolates it into the generator command
line at `tools/cserve.js:513`. Both ordinary switches and toggle switches
arrive. Measured on the `0xe52c8` candidate:

| flags | result |
|---|---|
| (none) | 62 bytes, frameless, sha `cfa02c2e3778` |
| `-O` | 62 bytes, identical |
| `-zzzzz` | 62 bytes, identical, **no error** |
| `-g` | compile fails, so the flag arrived |
| `-off auto_reg_alloc` | 189 bytes, register roles swapped |
| `-off optimize_xjmp` | 188 bytes, **framed** |
| `-off optimize_fp` | 186 bytes, **framed** |
| `-off remove_bp` | 62 bytes, identical |
| `-on profile` | 62 bytes, identical |

Two rules for anyone using this. **An unknown flag is silently ignored**, so a
flag experiment must always include a control that is expected to change
something, or a null result means nothing. And **toggle names are specific**.
`remove_bp` and `profile` do nothing here even though `REMOVE_BP` and `PROFILE`
are real symbols in `hcd386.exe`.

### What actually controls the frame

Not `Remove_BP`. The earlier hypothesis in
`docs/highc-authentic-toolchain.md` was wrong. The toggle is **`optimize_fp`**,
and with it off the generator keeps the frame pointer and addresses arguments
through `ebp`.

The name came from `hc386set.cnf`, which ships with:

```
HCDEBUG=-on codeview \
       -off optimize_xjmp optimize_fp auto_reg_alloc postpone_arg_pops
```

That line is the backend toggle syntax demonstrated by MetaWare itself:
`-off` followed by space-separated lowercase names, underscores included and no
tokeniser problem, because it is a config file rather than a command line. It
also explains why `-g` behaved differently from every `-O` variant, since `-g`
expands to this set.

With the corrected candidate source and `-off optimize_fp`, `0xe52c8` is
**byte-identical**, 58 bytes:

```
./tools/cc.sh e52c8.c --flags "-off optimize_fp" --want "$(target-hex e52c8)"
MATCH
```

The source is in `docs/routines.json` under `e52c8`, with the flag recorded in
a `flags` field alongside it.

### What this implies about the game build

The seven routines matched earlier needed no flag, and two of them are framed.
This one needs `-off optimize_fp` to become framed. So the flag is not a
project-wide setting in the original build, or the frame decision depends on
source shape as well. That is an open question, and it is now testable: re-run
the seven with the flag and see which stop matching.

## Correcting a claim made on this project's own evidence

`docs/highc-authentic-toolchain.md` first reported that the TownsOS route
"engages an optimiser" that the DOS route could not, citing `lea eax,[ecx+ecx]`
for a multiply by two. That was wrong and is corrected there. `lea` sequences
were already confirmed from the DOS route in `docs/highc-codegen.md`. Same code
generator, same behaviour.

An intermediate conclusion on this page, that toggle switches were silently
ignored, was also wrong. They work. The specific names tried first were
ineffective, and because unknown names are accepted without error the two
looked identical. The `-off auto_reg_alloc` control is what separated them.

## Related

- `docs/compiler-api.md`: the API in detail, and the floppy-as-transport measurement
- `docs/highc-authentic-toolchain.md`: the TownsOS route and the `Remove_BP` finding
- `docs/compiling-on-fm-towns.md`: full manual setup, every emulator setting
