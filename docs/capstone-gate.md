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

## The eleven call sites, all migrated

`ndisasm` **was** invoked from thirteen places in eleven files, with four different
conventions mixed together. That is the state this page measured, and it is history:
plan item 4h migrated all eleven and `tools/checkall.js` now pins the invoking-file
count at 2, both of them deliberate. See `docs/tooling-policy.md` for what the
migration changed and how each difference was characterised.

The table below is the measurement that justified the change, kept because it is why
`tools/decode.js` exists.

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

## Migration, and what it cost

`tools/decode.js` is now the shared decoder, and `tools/globals.js` is migrated to it.
`tools/decode-setup.sh` creates a repo-local venv from `tools/decode-requirements.txt`,
gitignored, so the dependency survives a reboot. An earlier version pointed at
`/var/tmp/csvenv`, which is scratch space: that would have stopped working for no
visible reason.

**The result is stronger than before the migration.** `globals.js` and `globals_od.js`,
two independent implementations, now agree on **76 of 76** base-fold routines, and the
census in `docs/corpus.json` is byte-identical. Distinct globals: 120.

### Four bugs the migration exposed, all in the seam

None were in Capstone. Each was the same defect class the migration exists to remove:
a detector answering a slightly different question than the one asked.

1. **`''` is falsy.** The worker emits `''` for an absent register and the Node side
   passed it through, so `op.base && op.index` produced `'absolute'` for
   `[edx*4+disp]`, which has an index and no base. Every jump table became a global.
2. **An index is enough.** Even with `null`, the test required BOTH base and index.
   `[edx*4+0xe2d29]` is the base-less indexed form the compiler emits for jump tables
   and flat arrays, and it fell through to `absolute`.
3. **A jump table is not a global.** `jmp [edx*4+0xe2d29]` reaches code through a table
   of code addresses. Operand shape cannot distinguish it from an array, so the mnemonic
   has to be consulted. That is a genuine ambiguity in the operand model and is recorded
   rather than papered over.
4. **`retf 0xf30` ends a routine.** `globals_od.js` matched `^ret\b` and not `retf`, so
   `0xf329c` a switch dispatch stub, ran past its own terminator into the next routine
   and reported a global it does not touch.

### The width check caught itself

The migration broke `--width-check` and the only reason it was noticed is that the check
existed. It had been reading widths out of text like `mov byte [..]` / `mov cl,[..]`;
after the migration the text is `describe()` output, a display form with no size prefix,
so every width came back null and it reported **0 conflicts on a deliberately corrupted
image**. That is exactly the failure it was built to catch.

Width now comes from the register operand. The assertion in `checkglobals.js` was also
corrected: it demanded zero conflicts on the real image, but the real image genuinely has
**two**, so it now pins the number instead. Demanding zero was asserting something false.

The two real conflicts are findings:

| global | observation |
|---|---|
| `0x77e90` | written as a word by the pixel writer, read as a byte in another routine |
| `0xd4a74` | read as a dword and written as a byte within the same routine |

### Not yet migrated

Twelve `ndisasm` call sites remain in ten files. The pattern is now established and the
gate is proven, so each is mechanical. `globals.js` was chosen first because it had the
most known-buggy classification logic and the strongest existing cross-check.
