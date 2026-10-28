# Two frames of reference, and the confident general rule that erases one

**A wrong fix was implemented and reverted. The cause was accepting a general fact about
Phar Lap executables over a measured fact about this one.**

## What happened

Working on plan item 5b, a new tool `tools/globrefs.js` searched `ENCHANT.EXP` for the
little-endian literal of `PLAYER_X` (`0xcdf6b`) and then asked `tools/decode.js` to decode
the instruction containing each hit. All 85 hits failed an alignment test, and the tool
refused to report a result. That refusal was correct.

The wrong diagnosis: the tool sliced the `0x20` header off before searching, then passed
those offsets to a decoder reading the raw file, so the two were 32 bytes apart. The fix
looked obvious, `tools/decode_worker.py` did `fh.seek(lo)` on the raw file, and it was
changed to detect an `MP` signature and seek `lo + 0x20`.

**That change was wrong.** It broke two gates and 13 assertions:

```
FAIL disp32 comparison works and can fail  (9)
        0xfdeb6 expected identical-except-disp32, got length-differs
FAIL global tooling regression  (4)
        globals.js and globals_od.js disagree on 47 base-fold routines
        0xe5578 should report 5 data references, got 1
```

It was reverted with `git checkout tools/decode_worker.py`. The real bug was in the new
tool alone: it mixed frames.

## The decisive measurement

The routine this project calls the pixel writer is recorded at `0xf3e24` in
[highc-authentic-toolchain.md](highc-authentic-toolchain.md), and its opening bytes are
`8b 44 24 0c c1 e0 07`. Searching for those bytes settles which frame is which:

```
$ node -e "const b=require('fs').readFileSync('ENCHANT.EXP');
  const n=Buffer.from('8b44240cc1e007','hex');
  let p=0,h=[];while((p=b.indexOf(n,p))!==-1){h.push(p);p++;}
  console.log('raw   :',h.map(x=>'0x'+x.toString(16)).join(' '));
  const f=b.slice(0x20);p=0;h=[];
  while((p=f.indexOf(n,p))!==-1){h.push(p);p++;}
  console.log('sliced:',h.map(x=>'0x'+x.toString(16)).join(' '));"

raw   : 0xf3e24
sliced: 0xf3e04
```

The documented address matches the **raw** file offset. The sliced frame reports the same
function at `0xf3e04`, which is the different function
[pixel-writer-address-correction.md](pixel-writer-address-correction.md) proves the
original confusion came from.

So both frames exist and both are internally correct, and the task is to know which one a
given tool is speaking.

## Why the general rule was wrong here

Gemini was asked for what it knows about Phar Lap executables and supplied a confident
summary. Four of its claims are false for `ENCHANT.EXP`, and the first would have broken
the corpus:

| claim | measured here |
|---|---|
| the load image begins at `0x20`, so seek past the header | `bytes[0x20..0x30]` is **all zeros**, and `blocks*512 = 1,072,640` does not equal the real size of `1,072,398` |
| raw files carry unresolved relocation placeholders, so never decode raw | `relocCount` at header offset `6` is **0**. There is nothing to patch, which is precisely why raw offsets work |
| assert the first instruction is `push ebp` or `enter` | [enter-band-boundary.md](enter-band-boundary.md) measured `enter` in **27 of 27** routines in the band and `push ebp` in **0**, and 30 routines begin with `int 0x90` |
| a linear sweep is fatal, trace instead | correct, and already the method. [capstone-gate.md](capstone-gate.md) measured Capstone and ndisasm disagreeing on 122,199 addresses when both swept linearly |

The general rule is not wrong about Phar Lap. It is wrong about **which Phar Lap format**.
A `P3` extended header with relocations behaves exactly as described. `ENCHANT.EXP` is an
`MP` flat image with `relocCount = 0`, and generalising from one to the other discards the
measurement that makes the tooling here work.

## The rule this earns

**A general fact about a file format never overrides a measured fact about this file.** When
the two conflict, the measurement wins, and the burden is on the general claim to show it
applies.

The failure mode is specific and worth naming, because it has now happened twice on the same
address. A confident, well-formed, externally sourced claim reads exactly like a measurement.
It arrives with no caveat, it is usually true of the general class, and it is more
comfortable to accept than to re-run a probe that contradicts it. **The `0xf3e04` confusion
in [pixel-writer-address-correction.md](pixel-writer-address-correction.md) is the same
error**: a paraphrase of expected bytes was accepted over the bytes themselves, and two
compilers were calibrated against it.

## The practical guard

When mixing two tools, name the frame. `funcs.js` converts its stripped offsets to raw on
output for this reason. A tool that reads bytes and hands offsets to a decoder must do both
in the same frame, and the cheapest way to be sure is to check one known address whose
location in both frames is already recorded:

```
raw   : pixel writer at 0xf3e24
sliced: the same function at 0xf3e04, which is a different function in the raw frame
```

If a tool reports the pixel writer at `0xf3e04`, it is speaking stripped. If it reports
`0xf3e24`, it is speaking raw. Neither is wrong, but a tool that says one and reads the
other is broken, and its output will look plausible while being 32 bytes adrift.

`tools/globrefs.js` now reads raw throughout and carries the measurement in a comment at
`loadImage()` so the next reader does not repeat the slip.

## A third frame, the one the program runs in

**Two frames was already wrong.** There are three, and the one nothing was checking is the one the
program runs in. Found by reversing the port failure, not by looking for it.

| frame | offset of a given byte | who speaks it |
|---|---|---|
| raw file | `f` | `xxd`, `codelimits.js` including `--args` and its `DOCUMENTED` table, `seeds.js` |
| stripped | `f - 0x20` | `cfgwalk.js` (`HEADER = 0x20`), and `docs/call-graph.md` |
| **guest** | `f - 0x200` | the running machine: `CS=000C` at base `0x400000`, and the recompiled modules |

So guest = stripped minus `0x1e0`, and the two conventions this page already documents are 32 bytes apart
while these are 480. The measurement, on the entry this project established:

```
guest 0x101a20   raw file 0x101c20 holds EB 56   stripped would call it 0x101c00
```

And on the address the port died on:

```
port fault: no recompiled function at 000c:00103620     <- guest
raw file 0x103820: 55 8b ec                            <- the prologue
node tools/cfgwalk.js --check 0x103800  -> boundary: true, prologue: true, "function head"
node tools/cfgwalk.js --check 0x103620  -> NOT an instruction boundary
node tools/cfgwalk.js --check 0x103820  -> NOT an instruction boundary
```

**This is why `--check` refused a real function head.** It was asked in the wrong frame twice. The tool
was right both times and the question was wrong, which is the same shape as the failure this page
already records: a tool that says one frame and reads another.

**The documentation is not internally consistent about which frame it writes.** Sampled 95 distinct
addresses from `docs/call-graph.md` and tested for a `55 8b ec` prologue at the address as written, at
+`0x20`, and at +`0x200`:

| where the prologue is | addresses |
|---|---|
| at the address as written (raw) | 0 |
| at address + `0x20` (stripped) | 54 |
| at address + `0x200` (guest) | 0 |
| no frame-pointer prologue in any of the three | 41 |

So `call-graph.md` writes stripped addresses, and the 41 are consistent with the measurement that only
half the routines open with a frame pointer. Meanwhile `highc-authentic-toolchain.md` records the pixel
writer at `0xf3e24`, which is the raw offset, and searching for its bytes finds them there and nowhere
else. Both pages are right about their own subject and neither says which frame it is using.

**The practical guard, extended.** The old guard is still true and still insufficient: it distinguishes
raw from stripped. For anything the emulator or a recompiled module will execute, the guest frame
applies, and it is a further `0x1e0` below stripped. The cheapest check is the entry, whose position is
recorded in all three:

```
raw 0x101c20 = EB 56     stripped 0x101c00     guest 0x101a20
```
