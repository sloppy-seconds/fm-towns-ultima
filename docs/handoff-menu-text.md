# Handover: the menu's missing text in the port

**RESOLVED.** The cause was not the one this handover proposed, and the difference matters for anyone reading it as a
worked example. The labels were never a missing call or a loop that ran once: both were measured and both were
correct. The port drove the same text engine as the machine, with the same arguments and the same string, and read
its glyphs out of a font that was empty. Two-byte characters come from `\UTFONT.FNT` on the disc, loaded into RAM by
TownsOS and reached through a far pointer at `TBIOS:0x1E8`, and the port had kept the blank placeholder the disc's
own `TBIOS.BIN` ships. The port now loads that file and points TBIOS at it, and the menu box's VRAM matches the
machine's capture with **0 bytes differing**. Full account, with the measurements: `docs/port-missing-text.md`,
section "Solved: the kanji font is on the disc, not in a ROM", and plan item 7h.

Everything below is left as written, because the ruled-out table is still accurate and the instruments are still
the right ones. Two of its conclusions are now known to be wrong: "the defect is in how many times the game's label
loop executes" is false, and so is "the port calls it once in the entire run" unless it means one call for one
label. Where this handover and the page disagree, the page is the later reading.

---

Everything a fresh agent needs to finish this without re-deriving it. Written to be read top to bottom once, then
used as a checklist. Every number here was measured, and the command that produced it is named.

## Done when

The port's game menu shows its labels. Concretely: the three label bands the machine holds at VRAM rows `348-363`,
`381-394` and `397-411` also hold glyph pixels in the port, and `U2_VRAM_DUMP` at the menu frame differs from the
machine's capture by the noise floor rather than by 2,733 bytes. The failure case is a port that renders the box,
the highlight and the bars but no characters inside the box.

## What is wrong, in one paragraph

The port and the machine run the same game and call the same TBIOS text service with identical arguments, but the
machine calls it twice per menu redraw and the port calls it once in the entire run. The machine's menu frame holds
three label bands, the port's holds one, at rows `365-379`. So the text routine works and the data it is given is
correct, and the defect is in how many times the game's label loop executes.

## The two measurements that define the defect

**Call count, same screen, same arguments.** The service is `AH=0x46`, reached through the game's system-layer thunk
at `000C:000008BD`. On the machine, a Down press produces two calls, both with `edi=0x7A7D8`, `esi=0x7ADD8`,
`edx=0x39`, `ebx=0x39`. In the port the same service is called once, at frame 404, with the same four values.

**VRAM bands.** Row by row, differing bytes between the two menu frames: rows `349-363` differ by 5 to 28, rows
`365-379` by 36 to 73, rows `381-394` by 10 to 86, rows `397-411` by 6 to 67. The machine's glyphs sit in the first,
third and fourth groups. The port's single label sits in the second, which is the black gap between the box's two
blue bands, which is why it is invisible.

## Verified facts

| fact | how it was measured |
|---|---|
| The port **does** execute the glyph plotter `0110:0000659C`, at frame 404 | `U2_TRACE_FN=110:659c:659d` prints the entry |
| Same glyph, same state: `eax 0000000F`, `ecx 0000003A`, `esi FFFFFFFF`, `ebp 0007A7D8` on both sides | entry trace against `BP 0110:0000659C` on the machine |
| The renderer computes `EDI = movsx(dx) * [gs:ebp+0x20] + (bx>>3)`, pitch `0x200` on both sides | disassembly at `0x652E-0x6535`, state block dump |
| The port's `dx` is 365, the machine's 391, which is 26 pixels, one text line | `EDX` at the same call, `0x3400 = 26 * 512` bytes of `EDI` |
| The text service is called once in the port, twice per redraw on the machine | `U2_TRACE_FAR=1 U2_TRACE_FAR_ALL=600`, and `BP 0110:00000280` |
| Glyph pixels are XORed into the background, not written as a colour | the machine's write instruction is `xor [es:edi],eax` at `0110:000065A3`, `0xDD ^ 0x66 = 0xBB` |
| The pixel mode comes from a 32-entry table at `0x61C4`, chosen from `gs:[ebp+0x14]` | disassembly at `0x6120` |
| The box fill lands in frame 401 and the plots in frame 404, so nothing covers the text | `U2_WATCH` with the frame in each line |
| The port's font reads are a different routine, `0110:0000F1C4`, reading ANK and kanji codes | `U2_RDWATCH=c2100000:40000` names its readers |

## Ruled out, with the measurement

- **Renderer missing.** False. The port enters `0110:0000659C` with the same registers as the machine.
- **Wrong arguments.** False. `edi`, `esi`, `edx`, `ebx` are identical.
- **Pitch or state block.** False. Both hold `0x200` at `gs:ebp+0x20` and agree on every dword up to `+0x20`.
- **Palette.** False. `PRI PALETTE` and `U2_PALETTE=1` agree on all sixteen entries.
- **Font ROM absent.** False. The port reads 2,572 font bytes in the run, 488 of them during the menu draw.
- **The box overwriting the text.** False. Fill at frame 401, plots at 404.
- **The `0xFF99` KVRAM or ANK gate.** False. A watch over `0xCFF00-0xD0100` records zero writes.
- **A missing import or xref.** The thunks are reached by computed address (`base + n*0x24`), so no xref exists and
  no xref search will find them.

## Next actions, in order

**1. Get the caller of the text service.** It is the loop that runs once in the port.

```
ENABLE DEBUG
BC *
BP 0110:00000280
BP 0118:00000280
RUN
# press Down on the menu with: podman exec fmtowns env DISPLAY=:99 xdotool key Down
# at each break read the state line and keep the one with EAX >> 8 == 0x46
```

Then read `[esp]` for the return address, and `HIST 8` for the instructions before it. The thunks pass arguments in
`EDI` and `ESI`, so the loop counter lives in the caller's frame, not in a register at the call.

**2. Find the loop's counter and compare it.** Once the caller is known, its counter is a dword in the game's data.
Read it on the machine at the break, and in the port at the same frame:

```
U2_MEM_DUMP=<linear>:<len>:/var/tmp/port-counter.bin
```

The port's copy is expected to hold the value that makes the loop run once. That single dword is the defect.

**3. Fix and verify.** After the change, the port's menu must show three label bands. Acceptance is a VRAM diff
against a fresh machine capture, plus a screenshot with visible characters. Use the recipes below.

## Reproduction recipes

Build and run the port headless at the menu:

```
./tools/port-build.sh --frames 20
U2_FONT=vendor/roms/FMT_FNT.ROM U2_VRAM_DUMP=/var/tmp/port-menu.bin \
U2_SHOT=/var/tmp/port-menu.png U2_KEYS=400:3520 \
./build/port/b/u2port --graphics=none --frames=900 ENCHANT.EXP \
  build/port/tbios.bin build/port/disc.cue saves/userdisk.hdm
```

`400:3520` is space, Towns scan `0x35`. Return is `0x1D`. Both dismiss the splash.

Capture the machine's menu, VRAM and program memory in one pass. The machine must be driven and dumped in the same
script, because anything that leaves it alone lets it leave the game:

```
podman exec fmtowns python3 /opt/u2/u2flow.py          # stops at the menu, sends space once
# then immediately: POST /api/pause, and read with MD 0:<linear>, 32 lines at a time
# VRAM is linear 0x80000000, the program's data segment starts at linear 0x400000
```

`u2flow` without `--journey` stops at the game menu by design. Its icon coordinate is framebuffer `(200,199)`, and
`u2flow` translates it, so drive the click with `u2flow` rather than with raw `xdotool` coordinates.

Diff the two:

```
node -e "const fs=require('fs');const p=fs.readFileSync('/var/tmp/port-menu.bin');
const m=fs.readFileSync('/var/tmp/machine-vram-menu.bin');
let d=0;for(let i=0;i<m.length;i++) if(p[i]!==m[i]) d++;console.log('differing bytes',d);"
```

## Instruments, exact syntax

| switch | what it does |
|---|---|
| `U2_TRACE_FAR=1` | one line per distinct far call site into TBIOS, with registers |
| `U2_TRACE_FAR_ALL=<n>` | that many calls individually, plus the return values |
| `U2_TRACE_FN=<cs>:<lo>:<hi>` | log entries into a code range, with registers and segment bases |
| `U2_FN_DUMP=<off>:<len>:<path>` | dump `gs:ebp+off` at the first traced entry |
| `U2_FN_DUMP_AT=<frame>` | hold that dump until a frame, so both sides fire on the same glyph |
| `U2_WATCH=<lo>:<len>`, `U2_WATCH_AT=<frame>`, `U2_WATCH_MAX=<n>` | linear write watch, armed at a frame, bounded |
| `U2_RDWATCH=<lo>:<len>` | read counter that names its readers |
| `U2_MEM_DUMP=<lo>:<len>:<path>` | dump guest memory at exit |
| `U2_KEYS=<frame>:<scan><ascii>,...` | press keys, hex, Towns codes |
| `U2_PAD=<frame>:<bits>[:<hold>]` | press the game pad, for screens driven by the pad |

Machine side: `ENABLE DEBUG` turns the debugger on, `BP <cs:eip>`, `BL`, `BC *`, `HIST <n>`, `MD 0:<linear> <len>`.
Features are enabled only as `ENABLE <name>`. `DEBUG` alone answers `Do what?`.

## Traps that have already cost time

- **`MD 120:<off>` reads ordinary memory once the program has its own GDT.** Use `MD 0:<linear>`. VRAM is
  `0x80000000`, the program's data is at `0x400000`. A capture with the selector form came back as x86 code and was
  nearly reported as a difference.
- **The frame hook runs at the vsync after the frame it belongs to.** A key pressed at frame 700 acts during frame
  701, so a watch for that operation must be armed at 699.
- **`U2_WATCH` matches the write's start address.** A dword write at `0x58` covers `0x5A` and is not reported for a
  watch on `0x5A`. Watch the aligned window.
- **The watch stops at 64 hits unless `U2_WATCH_MAX` is raised.** Four earlier watches each reported exactly 64 lines,
  all the same start-up fill, and read as "nothing else writes here".
- **`space` and `return` are Towns JIS codes, not PC/AT.** Space `0x35`, return `0x1D`, up `0x4D`, left `0x4F`, right
  `0x51`. The front-end translates SDL's scancodes with `kPcToTowns`, and `portcheck` asserts it.
- **A watch line's `CS:EIP` can be inconsistent.** A boot fill is attributed to `0110:000E5C80`, which is past the end
  of the 81,920-byte `tbios.bin`. Treat the entry trace's `cs:off` as authoritative and the watch's register dump as a
  hint. This has not been resolved and is worth a check before trusting any single attribution.
- **The emulator debugger is off by default.** `BP` answers `Error: Debugger is not enabled.` until `ENABLE DEBUG`.
- A monitor left armed makes the machine look halted, and `RESET` does not clear it. A session that ends with
  `ENABLE CRTC2MON` or `ENABLE IOMON` leaves monitors that print a line and stop the VM, so every `RUN` stops on the
  first I/O access and reads as the program crashing one frame at a time. `DIS CRTC2MON`, `DIS IOMON`, `DIS FDCMON`
  and the other monitor features clear them. `RESET` reboots the VM and leaves them armed, and it also leaves the VM
  paused at `F000:FFF0`, so a reset needs a `RUN` before anything responds.
- `U2_STOP_AT` fires at start-up unless told otherwise. TBIOS's text renderer is entered 14 times before the game
  menu draws and the first entry is the copyright notice, so a comparison "at the text renderer" is a comparison of
  two different operations. `U2_STOP_FRAME=<n>` now skips hits before frame n. Use it before believing any stop.

## Where the artefacts are

Scratch files live in `/var/tmp` and may be gone. Everything above regenerates them. The durable record of this
investigation is `docs/port-missing-text.md`, which holds the ruled-out table and the earlier findings about the
copyright notice, which shares this defect.
