# Capstone as a replacement decoder: passes on code, fails on linear sweep

**Verdict: usable, with a condition.** Capstone 5.0.7 reproduces every real
instruction ndisasm decodes **within the code region**, identically in position and
length. It does **not** agree when both are run over the whole image linearly, and the
reason is that neither is decoding instructions there.

The C library is already installed as `capstone-5.0.6-4.fc44.x86_64`. Only the Python
binding is missing, and a throwaway venv supplies it in seconds. No system change.

## The gate: one region at a time

From a known entry, which is how every tool here actually decodes:

```
$ /var/tmp/csvenv/bin/python tools/decode_agree.py --region 0xe0000 0xf0000
ndisasm instructions : 20659
capstone instructions: 20633
boundaries: ndisasm 20659, capstone 20633, agree 20633
length disagreements  : 0
ndisasm pseudo-instruction lines (db/udw): 26
real instructions ndisasm decoded: 20633
real boundaries with no Capstone match: 0
VERDICT: PASS for substitution.
```

Every real instruction in the game's code region is decoded identically. The 26
apparent misses are ndisasm `db` and `udw` pseudo-instructions, which are not
instructions.

## Where it fails, and why it is not a defect

```
$ ... --region 0x0 0x105d0e
ndisasm instructions : 501473
capstone instructions: 499970
boundaries agree      : 378614
length disagreements  : 30
real boundaries with no Capstone match: 122199
VERDICT: FAIL.
```

Linear disassembly over the entire image disagrees badly. **Neither decoder is
producing instructions for most of that range.** The image contains data, and both
tools walk through it: ndisasm emits `db` for what it cannot decode and continues,
Capstone declines and resyncs a byte later. Once they lose sync they never recover,
because each is now decoding from a different offset into unrelated bytes.

This is the same phenomenon already recorded for linear `ndisasm` on this binary in
`docs/decompilation-experiment.md`: "the payload does not disassemble as one flat
32-bit stream", 501,275 lines of which "a large fraction misaligned". The whole-image
number was never meaningful and this confirms it from a second direction.

**So the condition is: decode from a known entry, never linearly.** That is already
the rule `preflight.js` and `cfgwalk.js` follow, and it is what makes Capstone a safe
substitute.

## What it buys

The operand model is structured rather than textual:

```
0e30c3  cmp  dword ptr [eax + edx + 0x392c8], 0
        base=eax  index=edx  scale=1  disp=0x392c8
```

`tools/globals.js` was inferring that with a regex and got it wrong twice in one
session: once missing the implicit `scale=1` so four globals were invisible, once
counting an address stored as an immediate. With Capstone those two cases differ in
**operand type** (`X86_OP_MEM` against `X86_OP_IMM`), so neither bug can be expressed.

## The eleven call sites

`ndisasm` is invoked from thirteen places in eleven files, with four different
conventions mixed together:

| file | shape |
|---|---|
| `funcs.js` | stdin |
| `cfgwalk.js` | temp file, `-o0x...` |
| `sweep.js` | temp file, decimal `-o` |
| `frameanalysis.js` | temp file, decimal `-o` |
| `preflight.js` | stdin |
| `globals.js` | stdin |
| `decompile-run.js` | temp file, two call sites |
| `randmods.js` | temp file, two call sites |
| `findpal.js` | shell string with `2>/dev/null` |
| `pharlap.js` | `-e` header skip |
| `dumpqueue.py`, `trycands.py` | stdin |

That mixture is how the `-w` continuation bug survived in eight of them at once. A
single shared decoder returning instruction objects removes the convention as a
variable.

## Status

**Not yet migrated.** This page records the gate, which passes for the region that
matters and fails for the sweep that never did. The migration is the next unit of work
and needs the census held as a regression: if `tools/corpus.json` changes after a tool
switches, the switch is wrong or the finding is real, and those must be told apart
before committing.

## Reproducing

```
python3 -m venv /var/tmp/csvenv
/var/tmp/csvenv/bin/pip install capstone
/var/tmp/csvenv/bin/python tools/decode_agree.py --region 0xe0000 0xf0000
```
