# High C calibration: the spike, and where it stops

The goal: compile a C function with MetaWare High C 386 and compare the generated code against a routine whose
bytes are known from `ENCHANT.EXP`. That turns the statistical frame-pointer rule in
[highc-codegen.md](highc-codegen.md) into something a compiler either reproduces or does not.

## The ground-truth target

`pixelWriter` at `0xf3e04` is the best available test, because its seven instructions are read completely and it
has no frame pointer:

```
0xf3e04  mov eax,[esp+0xc]     ; arg3
0xf3e08  shl eax,7             ; * 128
0xf3e0b  mov edx,[esp+0x8]     ; arg2
0xf3e0f  mov cx,[esp+0x4]      ; arg1
0xf3e14  mov [eax+edx*2+0x77e90],cx
0xf3e1c  ret
```

The equivalent C is one line, in `tools/calibration/plot.c`:

```c
void plot(unsigned short value, int col, int row) {
    *(unsigned short *)(0x77e90 + row * 128 + col * 2) = value;
}
```

This is a stronger test than a prologue check. It exercises the calling convention, the addressing-mode choice,
and the frame-pointer decision at once, and it has an exact expected output rather than a shape.

## What is done

**The compiler is extracted.** Both archives are floppy image sets rather than directories, and the driver is
`HC386.EXE`, not the `H386.EXE` an earlier brief guessed.

| what | where |
|---|---|
| archive | `references/metaware/MetaWare High C 386 v2.31 (1992) (5.25-1.2mb).7z` |
| contents | five 1,228,800-byte FAT12 images |
| extracted | `build/hc386_v231/`, all five disks merged |
| driver | `BIN/HC386.EXE`, `MZ` DOS executable |
| version | **2.31, April 1991**, from `README` |

**The version is a useful result on its own.** `ENCHANT.EXP` is a 1991 build and High C 2.31 is dated April 1991,
so this compiler is period-correct rather than five years late. The v3.04 archive is a 1993 C++ compiler and is
the less likely candidate.

**The libraries are source, not objects.** `LIB/` contains only `LIB/SRC`, C and assembly sources, with no prebuilt
`.LIB`. That is fine here because the test never links, but it means a later link step would have to build the
runtime first.

**`tools/calibrate.sh` exists and is correct as far as it goes.** It merges the disks, writes a DOSBox-X config with
absolute paths, borrows Xwayland, waits for a completion marker rather than sleeping, and disassembles the object.

## The container, which removed the DOSBox problem

A container was built for this, and the reason is not convenience. **The three Flatpak traps that cost several
hours were all artefacts of running a sandboxed GUI application from a headless shell**, and a container removes
each of them by construction.

| trap | container |
|---|---|
| sandbox cannot see `/var/home` | no sandbox, real paths |
| working directory is not the invocation directory | absolute paths, ours to set |
| no `DISPLAY` for SDL | the entrypoint owns Xvfb |

**`container/Containerfile.highc`** is the artefact worth sharing, and it is deliberately generic. Nothing in it is
specific to Ultima II. It carries the pieces that make a 1991 DOS compiler build reproducibly under a modern LTS:
`dosbox-x` and `dosbox` from apt, `mtools` for floppy images, `ndisasm` for disassembly, and `xterm` inside Xvfb so
a DOS session can be driven by hand over VNC when automation is not working.

**The toolchain is bind-mounted, not baked in.** `references/` holds the extracted compiler and the image never
does. Same posture as `container/Containerfile` takes with the ROMs: a 1991 commercial compiler is someone else's
copyright and does not belong in an image that might be published.

**`tools/calib-run.sh`** drives it: `start`, `build`, `shell`, `logs`, `stop`, `status`.

### What the container proved, and what it did not

Working, verified inside the container:

```
--- environment ---
HCDIR=C:\HC
PATH=C:\HC\BIN
INCLUDE=C:\HC\INC
--- compile ---
```

**The mount works, `BUILD.BAT` runs, the environment is set, and DOS can see the compiler**:

```
Directory of C:\HC\BIN
HC386    EXE             59,952 10/24/2026  9:45a
```

**So the autoexec and mount problems are solved.** What remains is narrower: `HC386` invoked with no arguments
prints nothing and returns immediately, where a DOS program of that era would normally print a usage banner. A
compiler that is a DOS extender will refuse to start without extended memory, and doing nothing is what that looks
like from the shell.

Two more traps found here and worth recording:

**Podman has two image stores on this host and they do not share, and using sudo caused it.** The first version of
this script built and ran with sudo, which put the image in the rootful store where a plain `podman images` cannot
see it, and podman then tried to **pull** `localhost/highc` from a registry, failing with a certificate error that
says nothing about the cause.

**That sudo was not needed and should not have been there.** It was copied from the emulator's notes without
checking. Rootless podman builds this image, runs it, and passes the bind mounts, and the existing
`container/Containerfile` is already run rootless. So the script now uses plain podman throughout. The store check
stays, because the failure it produces is still possible for anyone who builds rootful, and it now says which store
the image is in instead of letting podman attempt a registry pull.

**DOS gets one drive.** `C:` is mounted at `/work`, so `HCDIR=C:\HC` only resolves if the toolchain is also
mounted at `/work/HC`. Mounting it at `/hc` looks correct on the Linux side and is invisible to DOS.

## Current state: the compiler starts and does nothing

With the container in place the mount and autoexec questions are settled. `HC386` is visible to DOS, 59,952 bytes,
and invoking it produces **no output and an empty `ERRORLEVEL`**.

That is the signature of a DOS extender refusing to start, and the leading candidates are memory and DOS version.
`HC386.EXE` is a protected-mode program that expects `RUN386`-style extended memory, so the things to vary are
`xms`, `umb`, `memsize`, and possibly the emulated DOS version. All of those are one-line changes to
`container/highc/dosbox.conf`.

**What has not been tried, and is the cheap next step:** capture the DOSBox screen rather than its log. A screenshot
shows what DOS prints when `HC386` is invoked with no arguments, including an "insufficient memory" or "load error"
message that never reaches a log file. The first attempt at this has been made and its result is being read.

## What the next attempt should do

1. **Read the DOS screen, not the log.** The log carries SDL and config messages only. Every question about what
   DOS is doing needs the framebuffer.
2. **Vary the DOS environment**, one variable at a time: `xms=true`, `umb=true`, `memsize=64`, and an emulated DOS
   version of 6.22 if DOSBox-X defaults to something later. A 1991 extender may object to DOS 7.
3. **Try `dosbox` instead of `dosbox-x`.** Both are in the image. DOSBox 0.74 has a different and much older
   extender implementation, so if it runs there and not in DOSBox-X, the fault is the emulator rather than the
   compiler.
4. **Only then** worry about compiler flags, which is what the original brief was about.

## Why this is still worth finishing

The frame-pointer rule at 84 percent accuracy is a statistical inference from 738 routines. A single successful
compile of `plot()` would confirm or kill it outright, and the `plot()` test has an exact expected answer. Two of
the five questions in `highc-codegen.md` are already answered from the bytes alone, and the remaining three,
including how a `switch` is emitted and whether `lea`-then-shift is the multiply-by-20 idiom, cannot be settled
without a compiler.
