# The Tsugaru fork: control-flow and I/O instruments we own

**Read this before building any debugging rig for the emulator.** Twice in one session a
breakpoint script was built and handed to Paul when this fork already contained a
full-speed recorder, and both times the missing instrument was found only after the
hand-built one had failed.

## Where it is

```
references/TOWNSEMU        fork of captainys/TOWNSEMU, branch cfg-dump
build/main_cui/Tsugaru_CUI built CUI binary
Containerfile             builds it without touching the host toolchain
```

Our commits on top of upstream:

| commit | what it adds |
|---|---|
| `a5e5ffda` | `CFGSTART`, `CFGSTOP`, `SAVECFG`: the control-flow edge recorder |
| `ca816b87` | `CFGSTART` enables the debugger, and records opcode, length, exception and CS base |
| `ed396b69` | records the pre-execution EIP and settles the fall-through arithmetic |
| `8d20f53e` | the Containerfile |

## The recorder

```
CFGSTART            clear the graph and begin
CFGSTOP             stop, and report the distinct edge count
SAVECFG file.txt    write "src dst kind count", one line per distinct edge
```

Kinds come from the source opcode, never the destination: `F` fall-through, `J` jump,
`C` call, `R` return, `S` segment change (far calls, far returns and interrupts). Edges are
stored once with a take count, keyed on source and destination, so a busy loop costs one
line rather than one per iteration. The final pending edge is dropped rather than guessed.

This runs at full speed. That is the whole point: it is the only instrument here that
answers "what executed" without stopping the machine.

## The rig on the test machine

`jarvis:~/Downloads/ut-towns/` holds a runnable copy so the original can be observed without touching anything else. It is not in git and
it has been lost once, so the contents are listed here and it is rebuilt rather than recalled:

```
emulator/Tsugaru_CFG     this fork, built
emulator/Tsugaru_CUI     stock, for comparison
roms/                    the FreeTOWNS set from vendor/roms
disc/                    the trilogy .ccd, .img and save disk
saves/CMOS.BIN           required. Without it the machine beeps and never finds the CD
```

Every part comes from the repository or from the disc. `saves/CMOS.BIN` is the one that is easy to forget and the one whose absence
produces a confusing symptom: a machine that beeps and exits instead of booting, which reads like an instrument fault.

## Extra logging in this fork

| variable | effect |
|---|---|
| `TSG_IO_TRACE=1` | every write to `0x4C0`-`0x4FF` with the writing instruction |
| `TSG_CDDA_LOG=1` | every CD audio start and stop, with the range, the instruction, the call stack, and 16 bytes at `DS:0x0E34` and `DS:0x0E50` |

Two traps already paid for. The trampoline at `0256:0018` does `mov ax,0x50 / mov ds,ax`, so a dump taken through the live DS at a CD audio
event reads the driver's data, not the game's. And the first version of the call-stack log printed the debugger's instruction ring, which
is useless here because the CD BIOS polls in a tight loop and every entry was that loop.

## What the console gives, and what it does not

Measured 2026-11-05 on the CUI binary, all three spellings rejected with `Do what?`:

```
IOMON 1272 1272      rejected
IOMON 4f8 4f8        rejected
IOMON                rejected
AUTODISASM           rejected
```

`IOMON`, `AUTODISASM`, `EVENTLOG` and `CMDLOG` are menu items in `Tsugaru_GUI`, not console
commands, and there is no command-line switch for them either. Do not spend a run finding
this out again.

What the CUI console does have:

| command | behaviour |
|---|---|
| `RUN` | resume. **Not `G`**, which the console answers with `Do what?` |
| `BRKON <event>` | break on an event, which stops the machine |
| `CBRKON <event>` | clear a break event. It is not a conditional break |
| `HIST` | the recent CS:EIP ring |
| `MD`, `STA`, `PAU`, `SAVECFG` | memory dump, status, pause, save the edge graph |
| `MON MEMW <phys> [<phys2>]` | monitor a memory **write** and keep running. Physical address, not linear |
| `ADTR <seg>:<off>` | translate. Paging is on, so linear and physical differ and a monitor needs the physical answer |
| `FIND <bytes>` | search main RAM, sprite RAM and VRAM. It may not reach the program's four-megabyte area |

Events for `BRKON` include `IOW <port>`, `IOR`, `MEMR`/`MEMW <physical>`, `INT n`,
`INT n AH=hh`, `INT n AX=hhhh`, `RETKEY`, `LBUTTONUP` and the VRAM and PIC families. The
`INT n AX=hhhh` form is how a BIOS service call is trapped, for example `INT 93 AX=50C0`
for the CD play request.

## Breakpoints throttle, and that has produced wrong answers

Every break stops the machine, and each stop needs a resume. At 150 ms per resume a run of
forty seconds of wall time covers about thirteen seconds of machine time, so an event that
was silent may simply have been outside the window. Three conclusions in one session were
retracted for exactly this. If a breakpoint run is used anyway:

- automate the resume by writing `RUN` to the console's input every 100 to 150 ms
- prove coverage with a heartbeat event that fires continuously, such as `IOW 4d8`, whose
  `0x27` timer writes run about 295 times a second
- run the emulator unbuffered (`stdbuf -o0`) or a short session's log stops at one pipe
  buffer and looks exactly like a silent run

## The recipe for a question like "where does the music start"

1. run the `cfg-dump` binary with `-DEBUG`
2. `CFGSTART`, then play to the moment in question
3. `CFGSTOP`, then `SAVECFG /var/tmp/cfg.txt`
4. read the edges around the routine of interest, and the callers that reach it

That answers what executed without stopping anything. For device traffic, add a non-stopping
write log for the ports in question in the fork itself rather than a breakpoint, because the
fork is ours and a few lines there beat any script built around stops.

## The scripts on the rig, and what each is for

They live beside the emulator in `/home/paul/Downloads/ut-towns`, are not in this repository, and
are listed here because the next session otherwise rebuilds one of them.

| script | what it does |
|---|---|
| `cewatch.sh` | watches writes to the game's CD track table at `DS:0xCE0` with `MON MEMW`, on both the physical `0x77CE0` and the linear `0x400CE0` ranges, because the extender's page tables move the mapping. Needs a click and a drive to the splash |
| `cddacreate.sh` | the same watch plus `TSG_CDDA_LOG=1`, held open for eight minutes, with the exact key route to the Create Character screen printed in its header. This is the script that recorded the original playing track 7 there, `09:50:00` to `11:42:74`, which is what plan item 5p was resolved against |
| `dump50.sh`, `dump53.sh`, `dump54.sh`, `dump55.sh` | timed memory dumps with no typing needed: low memory and the `0x50` selector, the `0x68C50` region, and the interrupt vector table. `dump54.sh`'s log is the input to `tools/ivt.py` |
| `dumptoc.sh` | dumps the CD BIOS's own parsed table of contents at physical `0x8BAE` |
| `pcmwatch.sh` | runs with `TSG_IO_TRACE=1` and nothing else, to capture the RF5C68 register traffic while a repeating sound plays. The log needs filtering afterwards; the lines that matter are ports `0x4F0` to `0x4F8`. Written for plan item 5q |
| `spawnwatch.sh` | dumps the monster band table at `0xD4A00`, the spawn slots at `0xCE3C0` and the RNG at `0xDFC78` every 30 seconds, with `ADTR` before each so the live window can be identified. Written for plan item 5r. Needs a hand only for the click and the walk |

Every one of them writes a log beside itself and takes its console commands from a FIFO, so
nothing has to be typed while the machine runs. The two that need hands say so in their headers.

## Not this fork

`docs/geartowns.md` records a different rig: a separate emulator with a 106-tool MCP server,
machine profiles and a `config.ini`. It is not this fork and it does not answer questions
about Tsugaru's execution. Check which one is being discussed before building anything.
