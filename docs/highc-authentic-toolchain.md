# High C reproduces seven routines byte-for-byte, and the frame is a compiler option

**Verdict: POSITIVE, and it corrects three stored conclusions.** The High C 1.73
code generator, driven by `HC386.EXE` from a TownsOS shell on the English
TownsOS 1.1 L20 developer disk with the SDK CD mounted as `Q:`, reproduces the
exact instruction bytes of all seven routines previously classified `matched`.
It also emits an optimised instruction sequence, which the earlier real-mode
invocation did not.

The page that established the compile route is `docs/highc-compile-success.md`.
That page is still correct about the route. What follows supersedes parts of
`docs/highc-codegen.md` and `docs/decompilation-experiment.md` on two specific
points, listed under Corrections.

## Why this mattered

Every previous compile in this project went through `HCD386.EXE` called directly
in a DOS box. That path has two measured defects: it aborts with
`Treepage:Malloc_check` under TownsOS command mode, and it produces byte-identical
output for twenty-one different optimisation flag sets, which was read as the
optimiser never engaging.

`frame-decision` was filed as blocked on reaching the protected-mode compiler.
This page reaches it and the block is gone.

## The working invocation

This is the exact host command, verified this session from
`/proc/<Tsugaru>/cmdline` inside the container. Nothing beyond these flags is needed, and
adding a boot key or a different CMOS is what made an earlier attempt fail.

```bash
podman run --name tosprobe --rm -d \
  -p 6082:6080 -p 5902:5900 -p 8099:8080 \
  -v "$PWD/vendor/emulator:/emulator:ro,z" \
  -v "$PWD/vendor/roms:/roms:ro,z" \
  -v "$PWD/saves:/data:z" \
  -e RESOLUTION=1024x768x24 -e ROM_DIR=/roms -e API_PORT=8080 \
  -e "TSUGARU_EXTRA=-CD /data/hc.ccd -HD0 /data/scratch-tos11en.h0" \
  localhost/fmtowns:latest
```

which the entrypoint expands to

```
Tsugaru_CUI /roms -CMOS /data/CMOS.BIN -CD /data/hc.ccd -HD0 /data/scratch-tos11en.h0
```

Four things about that line are load bearing, and each one cost an attempt:

- **No `-BOOTKEY`.** Leaving it out lets the firmware use the hard disk and reach DOS.
  `-BOOTKEY F0` and `-BOOTKEY CD` both land on the TownsOS desktop instead.
- **No `-FD0`.** No floppy is involved in this route at all.
- **No custom `CMOS`.** The entrypoint default is `/data/CMOS.BIN` (md5
  `67c07678301ea47d7d795a01c7202b7a`) and it works. `CMOS_HDD.bin` declares ten SCSI
  units, which pushes the disk behind nine phantoms, and `CMOS_ONE.bin` is for the DOS
  floppy route. See `docs/working-c-drive.md`.
- **`-CD` at launch**, because `MSCDEX` must see media at power-on or `Q:` never appears.

## Inside the guest

Boot reaches a DOS prompt. The prompt is `Q:\>` when the current drive is the CD:

```
Q:\> d:
D:\> hc386 enter.c
Found Q:\HC386\BIN\HC386.EXE
MetaWare High C Compiler 1.73
Copyright (C) 1988-91 MetaWare Incorporated.  Serial 1-307000.
386|LINK: 2.2dJ -- Copyright (C) 1986-90 Phar Lap Software, Inc.
Warning: No stack segment.
D:\>
```

`Warning: No stack segment.` is normal for a small P3 program and the build succeeds. The
driver compiles and links in one step and writes `<name>.EXP` and `<name>.MAP` beside the
source.

`HC386.EXE`, not `HCD386.EXE`. This is the command the CD's own `DEMO.BAT` uses.

## Method, host side

The hard disk image is a raw UNZ image with a 1536-byte partition offset.

```
mount -o loop,rw,offset=1536 saves/scratch-tos11en.h0 /mnt/fmtowns
cp /var/tmp/R1.C /mnt/fmtowns/R1.C
sync && umount /mnt/fmtowns
# boot guest, compile, then console Q to persist CMOS
mount -o loop,ro,offset=1536 saves/scratch-tos11en.h0 /mnt/fmtowns
cp /mnt/fmtowns/R1.EXP /var/tmp/
```

Code extraction: the `P3` header is 384 bytes, a `DX` block sits at `0x180`, and
the first code byte is at `0x200`. Compare from `0x200` to the first `0xc3`
inclusive, which is the same rule `tools/trycands.py` applies to the target.

## Measured, the seven

Target bytes come from `ENCHANT.EXP` through `tools/trycands.py:target_bytes`,
so this is the identical comparison that produced the original matches.

| routine | target | ours | verdict |
|---|---|---|---|
| `0xe9e2c` | 21 | 21 | identical |
| `0xe44d0` | 49 | 49 | identical |
| `0xe9940` | 37 | 37 | identical |
| `0xe07e8` | 58 | 58 | identical |
| `0xe65fc` | 23 | 23 | identical |
| `0xe662c` | 9 | 9 | identical |
| `0xfd0ec` | 29 | 29 | identical |

Seven of seven. Two of the seven, `0xe9940` and `0xe07e8`, carry a framed
prologue in both target and build, so the toolchain emits frames when the source
calls for them and reproduces them exactly.

## Measured, the optimiser is active

Three probes compiled through the same path:

```
int f2(int a,int b){ int t; t=a+b; return t*2; }
  8b 4c 24 04   mov ecx,[esp+0x4]
  03 4c 24 08   add ecx,[esp+0x8]
  8d 04 09      lea eax,[ecx+ecx]
  c3            ret
```

`lea eax,[ecx+ecx]` is strength reduction on a multiply, and the named local `t`
does not exist in the output. That is register allocation plus the peephole. The
real-mode `HCD386.EXE` could not be made to produce this under any flag set.

Note also that the local did not force a frame. Locals alone are not the cause of
frames.

## Measured, what does force a frame

Four candidates for `0xe52c8`, which is framed in the target with no locals:

```
push ebp
mov ebp,esp
mov ecx,[ebp+0x8]
mov eax,[ebp+0xc]   ... seven field writes, one zeroed ...
mov eax,ecx
leave
ret
```

| candidate | shape | frame | bytes |
|---|---|---|---|
| A_plain | eight params, direct writes | no | 62 |
| B_localptr | alias pointer local | no | 62 |
| C_addrlocal | `int z=0` used once | yes, plus `[ebp-4]` | 60 |
| D_addrtaken | `&z` taken | yes, plus `sub esp,8` | 72 |
| target | | yes, no locals | 58 |

A surviving local forces a frame but also emits the storage, which the target
does not have. No source shape tried produces framed-with-no-locals.

The size arithmetic settles what the difference is. `A_plain` is 62 and the
target is 58. The target reads eight arguments as `mov eax,[ebp+0x8]`, three
bytes, where the build reads them as `mov eax,[esp+0x8]`, four bytes. Eight
bytes saved, four spent on `push ebp`, `mov ebp,esp` and `leave`. 62 minus 8
plus 4 is 58. The instruction sequence, the field order, the zeroed field and
the `mov eax,ecx` return all already agree.

So the only difference is the base register the arguments are read through, and
that is a compiler option, not a source shape. The option search is now cheap.

## Measured, the container is still P3

`TEST.EXP` begins `50 33 01 00`, signature `P3`. `ENCHANT.EXP` is `MP`. This
reproduces the earlier finding that `386LINK.EXE` cannot emit `MP`, from a new
direction, and it does not matter: routine-level byte comparison is unaffected
by the container, which is the metric this project chose.

## Corrections

Three stored statements are wrong or superseded.

1. `docs/routines.json` classifies `0xe1bf4` and `0xe1c24` as `frame-decision`.
   Both begin `b8 f4 e3 00 00`, `mov eax,0xe3f4`, an absolute address of a
   global. Those four bytes are a linker relocation, so the literal value can
   never agree in a standalone build. They are `base-fold`.
2. The conclusion that the optimiser cannot be engaged was specific to calling
   `HCD386.EXE` directly. Through `HC386.EXE` it engages and changes the output.
3. `frame-decision` is not blocked on the protected-mode compiler. The protected
   mode path runs, and the remaining gap is one option.

## The toggle is named, and the obstacle is the front-end tokenizer

The frame decision is controlled by a documented compiler toggle, `Remove_BP`.

Evidence, three independent sources agreeing:

- `doc/hc17um.doc` lists `Remove_BP` in its toggle table with a default, and
  its description is about whether parameters are addressed through `ebp` or
  `esp`. That is precisely the measured difference.
- `doc/hc17um.doc` also lists `Remove_BP` among the optimisation toggles,
  beside `Optimize_FP`, `Align_routines` and `Use_short_calls`.
- `hcd386.exe` contains the symbol `REMOVE_BP` in that same table, and a
  function `remove_bp_refs` positioned between `PROLOG` and `EPILOG`. So the
  prologue emits the frame and a later pass strips it when the toggle is on.

So `0xe52c8` was built with `Remove_BP` off, and the default build has it on.

### Why it cannot be passed yet

The front-end tokenises on the underscore. Both spellings fail:

```
hc386 -Hoff=Remove_BP f1.c
  Erroneous parameter '-off=Remove' ignored.
  Erroneous parameter 'BP' ignored.
hc386 -off Remove_BP f1.c
  Unknown option -off will be passed to the linker.
  Fatal error: Missing value to command switch "--off"
  Info: Error in switch "--off" on line 7 of file "5cdf0000.tmp".
```

The second message is the useful one. It shows the front-end builds an answer
file, `5cdf0000.tmp`, and passes it to the backend with `@`. The same answer
file appears in the linker map as `@5cdf0000.tmp`. `-off` is a backend switch
and the front-end forwards unknown switches, so the toggle is reachable through
the answer file even though `-Hoff=` cannot express it.

`#pragma Off(Remove_BP);` and `#pragma On(Remove_BP);` were both tried and both
fail with `(syntactic) unexpected symbol: <DONE>` at the end of file, so the
pragma spelling in the manual does not work as written in this build.

Note on method: a quoted form was attempted and appeared to fail, but the quotes
were typed as `*` because the guest keyboard is Japanese layout. That test was
invalid, not negative.

### Status of frame-decision

Not blocked, and not solved. The cause is identified and named, the remaining
gap is one flag, and the flag cannot currently be expressed on the command line.
Three routes remain, none tried:

1. Capture the answer file before the front-end deletes it, edit in
   `-off Remove_BP`, and invoke the backend directly with `@`.
2. Set the toggle in `hc386.cnf` or `hc386set.cnf`, which the manual shows can
   carry `ARGS=` lines with toggle names.
3. Find the correct pragma spelling. `hc386.hlp` is a compiled help file and
   has not been read.

## Open

- Whether `HC386.EXE` invokes `HCD386P.EXP`. The codegen proves an optimising
  pass ran, but which binary ran is unverified.
- `0xe552c`, `0xe5304` and `0xfe95d` remain `unresolved` and have not been
  attempted through this path.
