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

## Why `ndisasm` has not been deleted

It is still correct for raw bytes and byte offsets, where no operand semantics are
asked for. Those uses are:
- reading instruction lengths for a boundary walk
- extracting the bytes of an instruction

Both are `funcs.js` and `cfgwalk.js` territory. They may migrate later, but there is
no correctness pressure: neither asks what an operand means.

The `-w` flag and the `checkall` assertion that every invocation passes it stay. They
guard the remaining uses.

## The seam, and its intended end state

`tools/decode.js` is currently a **Node module over a Python worker**
(`tools/decode_worker.py`), because the twelve remaining Node tools need a decoder
they can call. That seam exists for migration, not as the design.

**The intended end state is a Python module that calls Capstone directly**, with
`decode.js` remaining only for tools that stay in Node. A new Python tool should
import the Python decoder rather than spawn `decode.js` as a subprocess, because the
subprocess boundary is a second parsing layer of exactly the kind this policy exists
to remove.

That module does not exist yet. When it is written, the rule for new tools becomes:
import it, do not shell out.

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
