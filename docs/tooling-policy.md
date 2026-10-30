# Tooling policy: two languages, one decoder

**Status: adopted.** This page is the reference for how tools in `tools/` are
written. `AGENTS.md` carries the short form; this carries the reasoning, because a
rule without the failure it prevents gets ignored the first time it is inconvenient.

## The two decisions

**1. Never parse disassembler text to answer a question about an operand.**

Call the decoder and get instruction objects. This is unconditional and applies to
new tools and to any tool being modified.

**2. Two languages, divided by job.**

| job | language | why |
|---|---|---|
| the gates: `verify.js`, `checkall.js`, `check-disc.sh` | Node, no dependencies | a stranger must be able to confirm the findings after unzipping the disc, with nothing installed but Node |
| analysis and decoding | Python | Capstone's only binding with operand detail is Python, and operand detail is the point |

New analysis tools are Python. The gates do not move.

**Capstone is chosen for dependencies, not because it is a better decoder.** `fmtownskit`,
a git submodule at `fmtownskit/`, carries its own independent 386 decoder, and `docs/decoder-comparison.md`
measures the two against each other: **234,153 instructions agree, 0 differ, 2 refused** over the
project's seed set, with 0 differences again across a 20,000-instruction random sweep. The kit's
decoder also returns typed operand objects, so it satisfies rule 1 and the policy does not forbid
it. The reasons for staying with Capstone are that switching gains nothing measured, that
Capstone is an rpm already on the machine while the kit is a gitignored clone, and that one
decoder is enough. Recorded because without the measurement this section could read as ruling
out a decoder it never examined.

## Why rule 1 is absolute

`ndisasm` was invoked from thirteen places in eleven files, with four different
conventions mixed together: stdin against temp files, `-o0x180000` against `-o` in
decimal, shell strings against argv arrays.

That mixture produced four separate defects, all the same shape:

| defect | what it cost |
|---|---|
| continuation lines | `0xef548` reported as 9 bytes when it is 11; 99 corpus rows with wrong sizes; `0xe6a58` analysed as 222 bytes when it is 228 |
| implicit scale of 1 | `[eax+edx+0x392c8]` classified as a struct field, so four globals were invisible |
| address as immediate | `mov [0x7b374],0x7b274` counted as two references instead of one |
| jump table as global | `jmp [edx*4+0xe2d29]` counted as data, adding seven phantom globals |

Each is the same defect: **a detector answering a slightly different question than
the one asked**, which is indistinguishable from a correct answer until a known case
fails it. Parsing text makes that class of bug easy to write. Reading operand types
makes it impossible to express, because `X86_OP_MEM` and `X86_OP_IMM` are different
values rather than different spellings.

The measured result after migrating `globals.js` to the shared decoder:
`globals.js` and `globals_od.js`, two independent implementations, agree on **76 of
76** base-fold routines, up from 69, and `docs/corpus.json` is byte-identical.

## The migration is complete (plan item 4h, 2026-10-30)

All eleven remaining `ndisasm` call sites listed in `docs/plan.md` 4h are migrated:
`trycands.py` and `dumpqueue.py` import Capstone directly (the intended end state
for Python tools), and `findpal.js`, `pharlap.js`, `randmods.js`, `decompile-run.js`,
`frameanalysis.js`, `funcs.js`, `cfgwalk.js`, `sweep.js` and `preflight.js` go
through `tools/decode.js`. `checkall.js` pins the invoking-file count at 2: itself
(the policy regex names the string it greps for) and `decode_agree.py` (the
comparison harness, which needs both decoders by design).

**The migration was verified by differential measurement, not by trust.** For each
tool the old path was run from `git show HEAD:` and compared against the new one over
the whole queue: `trycands` 99 of 101 target byte strings identical, `dumpqueue` 14
of 14, `decompile-run` 96 of 101, `sweep --funcs` byte-identical, `funcs --list`
byte-identical, the `preflight` census 729 rows identical, `frameanalysis`
flags identical on all but four routines. Every difference was characterised before being
accepted, and they fall into four classes.

| class | what it is | consequence |
|---|---|---|
| `db` walk vs stop | ndisasm emits a `db` line for an undecodable byte and keeps walking. Capstone stops, and the worker resyncs one byte at a time reporting skips | old sizes over-counted in data-ish regions. All 2 `trycands` diffs, all 5 `decompile-run` diffs and 27 `frameanalysis` size diffs sit on rows that are `not-c` or unattempted, none on a live queue row |
| mnemonic naming | Capstone says `pushal`/`popal` where ndisasm says `pusha`/`popa` | `codeKind` in `preflight.js` now matches both spellings, so the classification does not depend on the decoder |
| dead `ret n` check | ndisasm prints `ret word 0x8`, which the regex `\bret\s+0x` never matched | the ret-n reason in `preflight` was silently dead in every census row until this migration. 7 census rows gained the reason, and no row changed kind. `docs/corpus.json` updated |
| ndisasm mis-decode | ndisasm splits `ff 34 bd <disp32>` (`push [edi*4+disp]`) into a `db` line and desynchronises, and `sweep.js` carried a textual repair for it | Capstone decodes the form as one 7-byte instruction, measured at `0xf234a`, and the repair hack is deleted |

Two latent bugs in this repository's own tools were fixed by the same move.
`pharlap.js --disasm` passed `-e<start>` against an already-sliced file, so it
printed nothing at all, in silence. It now prints real disassembly. `randmods.js
--at` labelled its bytes 0x20 high, and the labels are now true in the frame the tool
uses.

**Walk-comparison pins moved and the movement is a gain.** `checkall` now pins our
seeded instruction count at 39795 (was 39820, the delta is the `db` class) and
instruction starts shared with fmtownskit at 38515 (was 38443). The shared count
rose because fmtownskit's decoder agrees with Capstone on every routine checked
(`docs/fmtownskit-and-seeds.md`), so replacing the ndisasm text parser moved our
boundaries toward the independent walk rather than away from it.

## The session: why per-window spawning was not enough

`cfgwalk` refills about 1,028 windows on a full walk and `preflight` asks about 738
routine bodies on a census. At 117 ms per `decode()` call, almost all of it
interpreter start and Capstone import, a migrated `cfgwalk` would have taken two
minutes. `tools/decode.js` therefore also exports `decodeSession()`: one persistent
worker speaking a line protocol over two FIFOs, about 2.7 ms per request. Measured
on the same work: census 116 s to 14 s, `cfgwalk --full` 1.3 s to 2.2 s (the old
ndisasm time, so the session keeps it in the same order), 100 window decodes 268 ms
against 11.7 s.

Node 22 has no `os.pipe()`, and `spawn`'s own pipe streams have no descriptor usable
by `fs.readSync`, so the session creates two FIFOs under `/var/tmp` and passes them
through a shell redirect. Both ends are opened `O_RDWR | O_NONBLOCK`: a NONBLOCK read
of a FIFO with no writer returns EOF rather than `EAGAIN`, which would look like a
dead worker during the child's startup window. The child is unref'd at creation so a
caller that finishes without `close()` still exits, and the worker leaves on stdin
EOF.

## Why `ndisasm` is still installed

It is no longer invoked by any tool that answers a question about instructions. What
remains is the comparison harness and the policy grep. The `-w` flag assertion stays
because `decode_agree.py` still exercises the ndisasm side of the comparison.

## The seam, and its intended end state

`tools/decode.js` is a **Node module over a Python worker**
(`tools/decode_worker.py`), because the Node tools need a decoder they can call.
That seam exists for migration, not as the design.

**The intended end state is a Python module that calls Capstone directly**, with
`decode.js` remaining only for tools that stay in Node. A new Python tool should
import the Python decoder rather than spawn `decode.js` as a subprocess, because the
subprocess boundary is a second parsing layer of exactly the kind this policy exists
to remove.

That shared Python module still does not exist, and after item 4h it is the only
piece of this policy that is not finished. What does exist is the pattern, in
`tools/trycands.py` and `tools/dumpqueue.py`: a small `_ensure_capstone()` that imports
Capstone directly and re-execs into `tools/.venv` when the import fails. Extracting
those two copies into one importable module is mechanical and has no correctness
pressure behind it, so it is not a plan item. The rule for new Python tools is still:
import Capstone, do not shell out.

## What this policy does not claim

**It does not claim Capstone is a better disassembler.** It is used because it exposes
operand structure. On the specific question "does it decode this image the same way",
`docs/capstone-gate.md` measures the answer: identical on every real instruction in
the code region, and divergent over a linear sweep of the whole image, where neither
tool is decoding instructions anyway.

**It does not claim `ndisasm` was a mistake.** It was the right tool for the first
year of this work, when the questions were about bytes and formats. The questions
changed.

**It does not settle portability.** The venv is Linux-tested only, like everything
else here. `tools/decode-setup.sh` is a bash script and will not run in `cmd` or
PowerShell.

## Applying it

Correct the two statements that were false, which is done:
- `AGENTS.md` said "`node` for all tooling. No npm dependencies."
- `tools/README.md` said "No dependencies beyond Node and (optionally) `ndisasm`."

For a new tool:

```bash
./tools/decode-setup.sh --check      # confirms the venv and capstone
```

If it reports NOT SET UP, run `./tools/decode-setup.sh` once. The venv is at
`tools/.venv`, gitignored, and `tools/decode-requirements.txt` pins the version.

## Related

- `docs/capstone-gate.md`: the measurement that made the swap safe
- `docs/ndisasm-continuation.md`: the `-w` trap
- `docs/objdump-crosscheck.md`: the second implementation that found four globals
