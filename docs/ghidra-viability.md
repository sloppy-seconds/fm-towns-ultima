# Would Ghidra be a good idea now?

The project's rule says not to hand a decompiler "a flat binary at a guessed base", because every
address would be systematically wrong. That objection has been tested and it no longer holds.
Whether Ghidra is *useful* is a separate question, and the answer is qualified.

## The old objection, tested

`AGENTS.md` says:

> Do not install Ghidra, Reko, or IDA and hand them a flat binary at a guessed base. Every address
> will be systematically wrong in a way that looks like a finding.

Three facts now rule that out for this image:

**1. The base is not guessed.** `code-analysis.md` proves it is 0 from absolute operand values.

**2. There are no relocations.** The `MP` header field at offset 6 is `relocCount = 0`, measured.
A flat image with no relocations needs no fixup on import, so nothing goes stale.

**3. The header arithmetic is exact.** `lastPageBytes = 270`, `pages = 2095`, and
`270 + 2094 * 512 = 1,072,398`, which is the file size exactly. The container parses.

Ghidra is installed at `~/Projects/ghidra-12.1.4`, Java 25 is present, and an import at base 0 runs.

## What the test actually showed

Imported `/var/tmp/enchant_flat.bin` (the image with the 32-byte header stripped) as
`x86:LE:32:default` with `BinaryLoader`, base 0, and ran auto-analysis. 67 seconds.

**It agrees with the hand-built tooling on every address the project has established:**

| address | project name | Ghidra | function start | instruction |
|---|---|---|---|---|
| `0xe1c5c` | randMod | `FUN_000e1c5c` | yes | `PUSH EBP` |
| `0xe3d4c` | randRange | `FUN_000e3d4c` | yes | `PUSH EBP` |
| `0xe6e90` | renderer | `FUN_000e6e90` | yes | `PUSH EBP` |
| `0xf25b4` | statGain | `FUN_000f25b4` | yes | `PUSH 0x7` |
| `0xf3e04` | pixelWriter | `FUN_000f3e04` | yes | `MOV EAX,[ESP+0xc]` |
| `0x101a40` | rng | `FUN_00101a40` | yes | `IMUL EAX,[0xdfc78],0x41c64e6d` |
| `0xe6e48` | counter | `switchdataD_000e6e48` | yes | `PUSH EBP` |

**It also independently agrees that `0xef4bb` is not an instruction boundary**, which is the
false positive the project spent a session proving.

That is a strong cross-check. Two independent tools, one hand-built and one industrial, landing on
the same function starts and the same negative result.

## But it under-decodes badly

| | functions | instructions | bytes per instruction |
|---|---|---|---|
| Ghidra auto-analysis | 502 | 25,728 | **7.65** |
| `tools/cfgwalk.js` | - | 79,470 | **2.48** |

The image has 196,705 non-zero bytes. Normal x86 averages 2.5 to 3.5 bytes per instruction. **7.65
is not normal**, so Ghidra simply did not follow most of the code. A raw import with no entry point
and no symbols seeds only from what it can find by scanning, and stops aggressively.

**Seeding helps but is not automatic.** A test that disassembled from all 738 `CALL` targets using
`DisassembleCommand` successfully decoded an instruction at every one, including all seven known
functions. What it did *not* do is grow those into functions and follow flow through them, because
`createFunction` requires a body and rejects a bare entry point.

So the honest position is: **Ghidra decodes correctly where it is pointed, and does not find the
code by itself.**

## The verdict

**Yes, worth using, for three specific jobs and not as a replacement.**

**Good for:** reading a single function as C. The decompiler output for a
2 to 20 instruction function is far faster to read than assembly, and every function this project
has examined in detail is that size. `0xf25b4` is 25 instructions; `0xe1c5c` is 16.

**Good for:** cross-function type recovery. Seeing what a struct looks like across twenty callers is
exactly the job this project has been doing by hand with `tools/structfields.js` and
`tools/structmap.js`, slowly.

**Good for:** the 84 remaining `randMod` call sites. Each needs its surrounding function read, and
that is precisely decompiler-shaped work.

**Not good for:** finding the code. It under-decodes by a factor of three without seeds, and the
seeding path through the API is fiddly. `tools/cfgwalk.js` already produces 79,470 boundaries and
runs in two seconds.

**Not good for:** the top of the image. The mapping problem in
[indirect-branches.md](indirect-branches.md) is a memory-layout question, and no decompiler
answers it.

## The rule that should replace the old one

The old rule said do not use a decompiler at all. That was written when the base was uncertain and
the tooling did not exist to check anything. Both have changed.

**The replacement: use a decompiler on a function whose entry point is already established, and
verify its output against `tools/cfgwalk.js --check` before trusting an address.** The failure mode
that made the old rule necessary was silent systematic error; that is now detectable in two seconds
per address.

## What has not been done

Nothing has been decompiled yet. This page records a viability test and a cross-check, not a
workflow. The next step, if it is wanted, is to export the 84 unread `randMod` caller functions and
read them as C, comparing each against the assembly already produced by `tools/sweep.js`.

---

**[The randMod survey](randmod-survey.md)** **[The control-flow walk](cfgwalk.md)** **[The code](code-analysis.md)**
