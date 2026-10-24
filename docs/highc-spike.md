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

## Where it stops: DOSBox-X runs but its autoexec does not

Three Flatpak traps were found and fixed, and a fourth remains:

**Fixed.** The Flatpak working directory is `/var/home/paul`, not where the script was invoked, so a relative
`-conf` path fails with `Can't open specified config file` and DOSBox-X then **silently loads the default config**,
which has no autoexec. Every path is now absolute and the log confirms the config is read.

**Fixed.** The sandbox cannot see `/var/home` without `--filesystem=home`, so the `C:` mount silently fails and
every DOS command writes nowhere.

**Fixed.** DOSBox-X needs a `DISPLAY` even with `-nogui`, because SDL initialises video regardless. Over SSH that
means borrowing Xwayland's socket and auth file, which `tools/debug-session.sh` already does for the emulator.

**Not fixed.** With the config confirmed loaded and the display working, **no file appears in the mounted
directory, not even the `echo MOUNTED > STARTED.TXT` the autoexec runs before the compiler.** So the failure is
before High C and before any file write. Either the `mount c` command fails inside DOSBox-X, or autoexec is
consumed before those lines run.

**What has not been tried, and would settle it:** capture the DOSBox-X screen rather than its log. A screenshot
shows whether the DOS prompt appears at all, what `mount` reports, and whether autoexec ran. The log only carries
SDL and config messages, so it cannot answer this. Every attempt so far raced the process exit and produced an
empty log.

## What the next attempt should do

1. **Run DOSBox-X without `-nogui` and with the screen visible**, or capture the framebuffer, so the DOS prompt is
   observable. Guessing at a black box cost more turns than it saved.
2. **Test the mount alone**, with an autoexec containing only `mount c <abs path>` and `c:` and nothing else, before
   adding the compiler back.
3. **Check whether this DOSBox-X version needs the autoexec in a different form**, such as a separate `.bat` the
   config calls, since `[autoexec]` parsing changed between versions.
4. Only then add `HC386`.

## Why this is still worth finishing

The frame-pointer rule at 84 percent accuracy is a statistical inference from 738 routines. A single successful
compile of `plot()` would confirm or kill it outright, and the `plot()` test has an exact expected answer. Two of
the five questions in `highc-codegen.md` are already answered from the bytes alone, and the remaining three,
including how a `switch` is emitted and whether `lea`-then-shift is the multiply-by-20 idiom, cannot be settled
without a compiler.
