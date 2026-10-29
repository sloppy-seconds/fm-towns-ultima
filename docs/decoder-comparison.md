# The kit's decoder against Capstone: agreement on 234,153 of 234,155

`docs/tooling-policy.md` says one decoder, and the project uses Capstone. That was adopted as
policy and never measured against the alternative that arrived later, when `fmtownskit` was
cloned into `references/`. Its `i386.py` is an independent 386 decoder with its own Capstone
cross-check built in, so the comparison was already written and only needed running.

**Result: the two decoders agree on every instruction either reaches except two, and those two
are instructions the kit deliberately refuses.**

## The measurement

`i386.py`'s `--check` decodes from a seed set, follows branches, and compares each instruction
to Capstone's. Run against the same 671-seed set the project's own tools use:

```
$ PYTHONPATH=. \
  tools/.venv/bin/python3 -m fmtownskit.i386 ENCHANT.EXP \
      --seed "$(cat /var/tmp/mpwork/seedset.keep)" --check
234155 instructions reached: 234153 agree with capstone, 0 differ, 2 refused here
  refused: opcode 0f 6a (capstone: punpckhdq) x1
  refused: mov to segment register 1 (capstone: mov) x1
```

**234,153 agree, 0 differ, 2 refused.** The refusal count is not disagreement: a refusal is a
deliberate "this is not a 386 integer instruction", and both are correct refusals.

- `0f 6a` is `punpckhdq`, an SSE2 instruction. The Towns has no SSE2. Capstone has a reading
  for it because Capstone is a modern x86 decoder; the kit refuses it because the game cannot
  execute it. The bytes are almost certainly not code, which means the walk reached data.
- `mov to segment register 1` is a `mov cs, ...`, which is illegal on a 386 and a later CPU
  extension. Again a correct refusal.

So on the code the project actually reads, the two decoders are **the same decoder**.

## The random sweep

From arbitrary byte positions, where most windows are not instructions at all:

```
$ tools/.venv/bin/python3 -m fmtownskit.i386 --sweep 20000
19334 agree, 0 differ, 539 refused by both,
58 refused here and decoded by capstone,
69 escapes capstone has no x87 reading for
  refused here, by kind: {'opcode': 32, 'mov': 10, 'cmov': 7, 'bswap': 3,
                          'rdtsc': 2, '8f': 1, 'sysret': 1, 'xadd': 1, 'cmpxchg': 1}
  differ, by kind: {}
```

**0 differ in both runs.** The 58 refusals are all instructions a 386 cannot execute:
`cmov`, `bswap`, `rdtsc`, `sysret`, `xadd`, `cmpxchg`, which are 486 and later. This is the kit
being stricter on purpose, because it is the reference its own recompiler is held against and
it must not silently accept code the machine would fault on.

## Why the project still uses Capstone

Four reasons, and only the first is about correctness:

1. **Nothing is gained by switching.** The measurements above show no disagreement to fix.
2. **Capstone is a binding to a C library that is already an rpm on this machine.** The kit's
   decoder is Python in a gitignored clone, so a stranger reproducing a finding would need the
   clone rather than `pip install capstone`.
3. **`docs/tooling-policy.md`'s rule 1 is about operand types, and both satisfy it.** The kit
   returns `Insn` objects with typed operands, so it is not the text-parsing hazard the policy
   exists to prevent. The policy does not forbid it; the policy is simply satisfied already.
4. **Two decoders are two things to disagree.** They currently do not disagree. The way to keep
   that true is to check occasionally rather than to run both.

## What this changes

**Nothing in the tooling.** It does change what `docs/tooling-policy.md` should be understood to
mean: the choice of Capstone is **not** a claim that the kit's decoder is worse. It is a claim
about dependencies and about one decoder being enough. That distinction was not written down,
and without the measurement the policy could be read as ruling out a decoder it never examined.

It also means the `2 refused` is a small, real signal worth keeping: **the seed walk reaches at
least two byte sequences that are not 386 code.** That is consistent with the 359 conflicts
`recomp/discover` reports and with the phantom seed found earlier at `0xd2b5b`, and it is
independent evidence for the same conclusion.

## What this does not say

- **Which addresses the two refusals are at.** `--check` reports the counts and the reasons but
  not the sites, and no other output of that run carries them. Finding them would need a walk
  that records refusals positionally, which `i386.py` does not expose.
- **Whether Capstone or the kit is right about `0f 6a` in context.** Both are right in the
  abstract: it is `punpckhdq`, and it is not something this machine runs.
- **Whether the kit's decoder handles the 16-bit and segment-heavy forms identically.** The
  walk here is 32-bit flat. A 16-bit check would be a different measurement and has not been run.

## Reproducing it

```sh
git submodule update --init fmtownskit
git -C fmtownskit apply patches/fmtownskit-mp-support.patch
export PYTHONPATH=$PWD
./tools/.venv/bin/python3 -m fmtownskit.i386 ENCHANT.EXP \
    --seed "$(cat /var/tmp/mpwork/seedset.keep)" --check
./tools/.venv/bin/python3 -m fmtownskit.i386 --sweep 20000
```

The clone is gitignored, so the first line is required and the counts depend on the seed set.
`tools/seeds.js` derives one if `/var/tmp/mpwork/seedset.keep` has gone; the numbers above are
from the curated 671, so a derived set would give different totals and the same verdict.
