# Compiling over HTTP: a C source in, the emitted bytes out

Two endpoints cover the whole calibration loop. Write C, get the bytes back,
diff them against the game. Measured at **about 12 seconds per compile**, down
from about 40 when each attempt rebooted the emulator.

`tools/cserve.js` is the server. `tools/cc.sh` is the command you type.

## Why the loop got fast: the floppy image is the transport

The container mounts `saves/` at `/data`, so the host and the guest share the
floppy image file. That makes the image a message bus, with one wrinkle that
took measurement to find:

| direction | works? |
|---|---|
| guest writes, host reads | **yes, immediately**, no reload needed |
| host writes, guest reads | **no**, and no amount of `FD0LOAD` fixes it |
| host writes → **`FD0EJECT` + `FD0LOAD`** → guest reads | **yes**, in about 2 seconds |

The emulator holds the image in memory. `FD0LOAD` on an already-loaded path does
not re-read the host file; the **eject** is what forces it to drop its copy. That
single fact is what replaces a reboot with a two-second reload.

It is not `SMARTDRV` and it is not DOS's directory cache. I removed `SMARTDRV`
from the floppy and the host-written file was still invisible.

## The two APIs

### Files, on the mounted image

```
GET    /api/fs/list?path=/           mdir
GET    /api/fs/file?path=/X.C        mtype
PUT    /api/fs/file?path=/X.C        raw bytes; reloads by default
DELETE /api/fs/file?path=/X.C        mdel
POST   /api/fs/reload                FD0EJECT + FD0UP + FD0LOAD
```

**`PUT` reloads by default.** A write the guest cannot see is the trap this
whole design exists to avoid, so it is not opt-in. `?reload=0` exists for bulk
writes followed by one explicit reload.

### Compile

```
POST /api/compile
  {"source": "...", "name": "CAL", "flags": "-O"}
→ {"ok": true, "name": "CAL", "size": 162, "objSha256": "…",
   "records": 10, "segments": 1,
   "code": "8b 44 24 0c c1 e0 07 …",
   "elapsedMs": 11800, "log": "…"}
```

`code` is the concatenation of the `LEDATA` payloads in segment order, already
parsed out of the OMF. **The bytes are the point**; the `.obj` is an
implementation detail. `log` carries the compiler's own output when a request
fails.

Concurrency is 1. One emulator, one floppy. A second concurrent compile gets
`429` rather than silently interleaving.

## The command

```
./tools/cc.sh file.c                     # print the code bytes
./tools/cc.sh -e 'int f(int x){…}'       # inline snippet
./tools/cc.sh file.c --want '8b 44 …'    # compare, exit 2 on mismatch
./tools/cc.sh file.c --json              # raw response
```

Exit codes: `0` compiled and matched, `1` compile failed, `2` bytes did not
match. That makes it usable directly in a test:

```bash
./tools/cc.sh plot.c --want '8b 44 24 0c c1 e0 07 …'
```

## Four failures that cost real time, and what fixed each

**1. `.DONE` became `.DON`.** DOS truncates extensions to three characters
silently, so a poll for `CCDON.DONE` never matched and every compile reported
"did not finish" while the compiler had actually succeeded. Every filename the
server creates now goes through an explicit 8.3 validator, and `name` is checked
before anything is written.

**2. The compile returned the PREVIOUS object.** The emulator flushes its
in-memory copy back to the host file when you eject. A delete-then-write
sequence gets undone by that flush arriving a moment later, so the next compile
read the last run's `.OBJ` for the new source. A fixed sleep helped but did not
fix it, because the flush timing varies.

The fix is not a longer sleep: **every output filename carries a generation
counter** (`G001.OBJ`, `D001.DON`, `L001.LOG`). A stale file can then never be
mistaken for this run's answer, because the name cannot pre-exist. This was the
worst failure mode available, because a wrong object looks exactly like a valid
answer.

**3. Redirection cannot be typed.** The guest keyboard cannot produce `>`
through the supervisor's key path and mangles `:`. All redirection therefore
lives in a batch file written host-side, and the client types only the batch
name.

**4. Files must be in the image before the attach.** Writing with `mtools` into
an image the emulator already holds is lost on the next flush. The order is
eject → delete → write → attach, and the server enforces it.

## Verified

Five consecutive compiles of three different sources, then two repeats, all
returning the expected bytes:

```
div16   11.9s correct
div2    11.9s correct
plots   11.9s correct
div16   12.6s correct
div2    12.6s correct
```

`div16` is `int f(int x){return (x-4)/16;}` which must emit `idiv`; `div2` is the
naive halving chain; `plots` is the pixel writer's pointer form. Those expected
byte strings come from `docs/highc-plot-calibration.md` and
`docs/highc-forensics.md`, which each cite the command that produced them.

## Running it

```bash
# once, in its own terminal
node tools/cserve.js &

# then, as often as you like
./tools/cc.sh -e 'int f(int x){ return (x-4)/16; }'
```

Options: `--port 8097`, `--api http://127.0.0.1:8096`,
`--image saves/dos62v6.hdm`, `--container dosboot`, `--timeout 90000`.

## What it does not do

- **Link.** Only compilation. `386LINK.EXE` has never been driven; see
  `docs/compiling-on-fm-towns.md`.
- **Run more than one compile at a time.** By design.
- **Touch the second floppy.** `FD1` does not work on this BIOS and is not
  needed; the image-as-bus approach replaces it.

## Related

- `docs/compiling-on-fm-towns.md`: the full manual recipe, every setting
- `docs/highc-compile-success.md`: why `HCD386.EXE` and not `RUN386`
- `docs/highc-plot-calibration.md`: the calibration results this serves
