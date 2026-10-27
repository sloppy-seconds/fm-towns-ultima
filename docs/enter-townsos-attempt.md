# The TownsOS driver path: attempted, not reached

**Verdict: the attempt did not reach a compiler prompt. It is recorded so the next person does
not repeat it, and because the reason it failed is informative.**

The question was whether `HC386.EXE` on TownsOS emits `enter 0,0` where `HCD386.EXE` does not.
`docs/highc-authentic-toolchain.md` records that the driver path produced optimised output the
real-mode generator never could, so it is the right place to look. This page records how far the
attempt got and where it stopped.

## What was done

1. Copied the TownsOS HDD master before touching it, per the repository rule:
   `cp saves/scratch-tos11en.h0 saves/scratch-enterprobe.h0`.
2. Mounted it at the documented partition offset and wrote the test source:

```
sudo mount -o loop,rw,offset=1536 saves/scratch-enterprobe.h0 /var/tmp/fmtowns
sudo cp ENTER.C /var/tmp/fmtowns/ENTER.C
sudo sync && sudo umount /var/tmp/fmtowns
```

The source is the `0xfe211` body rewritten as C, the same control used in
`docs/enter-not-emittable.md`:

```c
void bios_out(int func, char c);
int f(char c) { bios_out(0x46, c); return (unsigned char)c; }
```

3. Started a second Tsugaru container on separate ports so the working `dosboot` container and
   `cserve` were not disturbed, with two different boot configurations tried:
   `-BOOTKEY F0 -HD0 <image> -CD hc.ccd` and `-BOOTKEY CD -HD0 <image>`.

## Where it stopped

**Both boot configurations reached the TownsOS graphical desktop, not a command prompt.** The
screen reads as a desktop with a file-browser window. It does not give `Q:\>`, and there is no
text console to type into.

`docs/highc-authentic-toolchain.md` records the working prompt as:

```
Q:\> d:
D:\> hc386 r1.c
```

**`Q:\>` is the CD's own root**, so that session was booted from the SDK CD and reached a shell
somewhere the graphical desktop does not lead. This attempt booted the same CD and the same HDD
and landed in the desktop instead. The missing step is how that session got from the desktop to
a DOS prompt, and it is not written down in the page.

## What was found that is worth keeping

**The `Remove_BP` lead is richer than the earlier pages suggested.** `docs/highc-authentic-toolchain.md`
names the frame toggle as `Remove_BP`, cites a manual table, and records that `hcd386.exe`
contains the symbols `REMOVE_BP`, a `PROLOG` and `EPILOG` pair, and a function `remove_bp_refs`
between them. That is a mechanism, not a guess: the prologue emits the frame and a later pass
strips it.

**And it names the obstacle precisely.** `-off Remove_BP` cannot be passed on the driver command
line because the front-end tokenises on the underscore and splits it. The page records three
untried routes, one of which is setting the toggle in `hc386.cnf` or `hc386set.cnf`, which is a
file this project now knows how to read and write.

**That route does not work through `HCD386.EXE`**, which was tested here: `-off Remove_BP`,
`-off remove_bp`, `-off=Remove_BP` and `-off Optimize_FP` all produce byte-identical output
through the real-mode generator. That is consistent with the recorded finding that
`HCD386.EXE` gave identical output for twenty-one flag sets. So the config-file route can only
be tested through the driver, which needs the prompt this attempt did not reach.

## What would unblock it

Not a code change. One of these:

- **Find how the documented session reached `Q:\>`.** The page implies it did, so the step
  exists and is simply not recorded. Running the CD's own `DEMO.BAT` is the most likely route,
  since the page says the driver invocation is the command that `DEMO.BAT` uses.
- **Mount the CD's catalogue and read `hc386.hlp`**, which the page records as a compiled help
  file that has never been opened, and which would give the correct `Remove_BP` spelling and
  probably the pragma form as well.
- **Capture the front-end's answer file** `5cdf0000.tmp` before it is deleted, edit
  `-off Remove_BP` into it, and invoke the backend with `@`. The page names this as route 1.

## What this does not change

`docs/enter-not-emittable.md` says the real-mode generator does not emit `enter`, and that
remains measured and true. What it cannot say, and now explicitly does not claim, is that High C
1.73 as a whole cannot. The driver path is untested for this question.

## Related

- `docs/enter-not-emittable.md`: the `HCD386.EXE` measurement, scope-corrected
- `docs/highc-authentic-toolchain.md`: the driver route, the seven routines, and the `Remove_BP` finding
- `docs/compiler-toggles.md`: the 43 toggles reachable from the command line
- `docs/compiling-on-fm-towns.md`: the two code generators and when to use each
