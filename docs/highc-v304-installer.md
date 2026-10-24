# The High C/C++ 3.04 installer, and why it costs more than it returns

The project has two MetaWare compiler archives. v2.31 is usable in minutes. **v3.04 is not**, and this page records
why, because the reason is a property of how it was distributed rather than a property of the compiler.

## The archives are not equivalent

| | High C 386 v2.31 | High C/C++ v3.04 |
|---|---|---|
| date | **April 1991** | **January 1993** |
| shipped as | **plain files**, five disks merged | `INSTALL.EXE` plus seven packed volumes |
| usable in | minutes | needs an interactive installer |
| status | **working**, reproduced `pixelWriter` byte for byte | **blocked** |

On date alone v2.31 is the better candidate for a 1991 build, and it is the one that already matched real code.
v3.04 is two years later.

**A detail worth recording:** the archive labelled 3.04 contains documents dated **July 1992** (`README.ADS` says
"High C/C++ Version 3.0, July 1992") as well as the January 1993 readme. So it spans 3.0 to 3.04 and is not a
single narrow version.

## The installer is scripted, which is the one good thing about it

`INSTALL.DAT` is a 1,313-line Knowledge Dynamics script naming every screen and every file. That made the flow
knowable rather than guessable:

```
prerequisites notice  ->  how-to-answer legend  ->  compiler drive  ->  compiler directory
   ->  verify directory  ->  serial number  ->  component checkboxes  ->  copy
```

**Two of those screens are gates the driver did not expect.** The prerequisites notice and the legend are
*different screens* behind the same "press any key" prompt, so a driver sending one Return per screen runs one
behind for the whole sequence. That is what produced a stable three-screen loop rather than an error.

## The failure that took longest, and its cause

The installer offers `Drive C:` and `Drive Z:`, **defaults to Z:**, and Z: is DOSBox's internal shell drive. Choosing
it produces

```
You do not appear to have the minimum access rights to
drive Z: which are required for installation.
```

Because the list defaults to Z:, every Return re-triggers the failure. The installer script suppresses drives with
`@suppress A` and `@suppress B` but **not Z**, so the fix is one line:

```
        @suppress A
        @suppress B
        @suppress Z
```

That is a modification to a **copy** in `build/`, never to the archive in `references/`.

## The serial number is not a barrier

The serial check is a range test, not a validation:

```
@if (@compserialno < 100000 || @compserialno > 999999)
```

Any six-digit number passes. `123456` works.

## Why this is parked

**It has cost several hours and returned no compiler.** The reasoning is not in doubt, and the next steps are
known. What is in doubt is whether v3.04 is worth having at all, and the evidence says it is not the priority:

- it is **later** than the game, not earlier
- v2.31 already **reproduces real code**
- the question worth answering is whether matching **scales to a non-leaf routine**, and that needs no new compiler

**If v3.04 is ever wanted**, the remaining work is: two Returns for the two gates, arrow keys to move the drive
selection off Z: (or the `@suppress Z` patch), then the serial, then space bar on the Verify screen to change `NO`
to `YES`, then Return through the component checkboxes and the per-disk prompts.

**The instrument that worked was the screenshot, repeatedly.** Logs showed nothing, because the failure was on the
screen. That is the same lesson as the `2>&1` bug in the compile spike: DOS-era tooling reports its problems
visually and not in any log.
