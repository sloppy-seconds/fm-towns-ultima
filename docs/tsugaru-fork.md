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

## Not this fork

`docs/geartowns.md` records a different rig: a separate emulator with a 106-tool MCP server,
machine profiles and a `config.ini`. It is not this fork and it does not answer questions
about Tsugaru's execution. Check which one is being discussed before building anything.
