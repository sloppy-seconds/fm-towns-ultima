# The `randMod` call sites: what the survey found and what it could not

Following [stat-gain.md](stat-gain.md), the next step was to classify all 85 call sites of the
random helper `0xe1c5c` and extract the odds each one tests. This page records the result,
which is partial, and the tooling bug found on the way.

## The tooling bug, found and fixed

`tools/funcs.js --at` passed the **file** address to `ndisasm -o` while the buffer it disassembles
is the image with the 32-byte `MP` header **stripped**. So every label ndisasm printed was
`0x20` higher than the address space the whole rest of the project uses.

The visible symptom: `call 0xe1c5c` printed as `call 0xe1c7c`, and `0xe1c7c` is a different,
real function. A session went into reading that function before the skew was noticed.

**Measured, not assumed.** The `randMod` prologue bytes are at stripped `0xe1c5c` and raw file
`0xe1c7c`:

```bash
node -e 'const fs=require("fs");
const raw=fs.readFileSync("ENCHANT.EXP");
const sig=Buffer.from("558bec578b7d0823ff7504","hex");
console.log("raw 0x"+raw.indexOf(sig).toString(16));'
```

**Fixed** by passing the stripped address as the origin. `funcs.js` now prints
`call 0x101a40` from `0xe1c5c`, which is the random generator, as it should.

**Why this matters beyond the fix:** every disassembly in this project that used `--at` was
labelled 32 bytes high. The instructions were right, because the bytes read were right, but any
address *quoted* from a `--at` run before this fix needs `-0x20` applied. The pages that quote
addresses had them taken from `tools/funcs.js`'s summary output and from the docs' own records,
not from `--at` labels, so they are unaffected. This was checked rather than assumed.

## The survey result

`tools/randmods.js` reads each call site, finds the argument pushed before the call and the
comparison made on the result, and reports the implied odds.

**33 of 85 sites resolved to an argument plus a comparison. 52 did not.**

| odds | as a percentage | sites |
|---|---|---|
| 5/10 | 50.0% | 7 |
| 4/16 | 25.0% | 4 |
| 3/10 | 30.0% | 2 |
| 62/99 | 62.6% | 2 |
| 50/101 | 49.5% | 1 |
| 75/101 | 74.3% | 1 |
| 5/11 | 45.5% | 1 |
| 4/11 | 36.4% | 1 |
| 7/10 | 70.0% | 1 |
| 2/10 | 20.0% | 1 |

**A coin flip is the most common roll in the game.** Seven sites test `rng % 10 < 5`, which is
exactly even odds. That is a design fact and it is the kind of thing only a survey produces.

The `n = 100, cmp = 50` and `n = 100, cmp = 75` pair at `0xeef4e` and `0xeef5d` is a 101-way roll
with two thresholds, which is how a three-way outcome is built.

## Why 52 sites did not resolve, and why some of the 33 are wrong

**The unresolved 52 are mostly legitimate.** A call site whose result is stored, used as an index,
or added to something has no comparison to find. `0xef4ca` does `mov eax,[edx+0xcdeef]` and
`jng`, which is testing a *loaded* value after adding the random one, not the roll itself.

**Some of the resolved 33 are misparsed.** Four odds are numerically impossible:

| site | reported | why it is wrong |
|---|---|---|
| `0xe393e` | 96/3 | comparison value exceeds the span |
| `0xf2e75` | 99/1 | the argument resolved as null |
| `0xf3729` | 271/289 | implausible pairing |
| `0xfae35` | 24/10 | comparison value exceeds the span |

These come from the same weakness: the tool scans for byte patterns and can land mid-instruction.
`0xef4bb` disassembles as `mov al,[0x8d000cec]`, which is nonsense, proving the offset is inside
an operand rather than on an instruction boundary.

**So the survey is a partial result, not a complete one.** It reliably finds the common shapes
and cannot be trusted site by site without checking each by disassembly.

## What the honest conclusion is

**Classifying all 85 sites properly needs real disassembly, not byte scanning.** The right tool
walks each function from its entry, tracks instruction boundaries, and only then looks for the
call pattern. That is a linear sweep pass, which this project does not have yet.

The byte-scan approach found the single most important site (`0xf25b4`, the stat-gain routine)
because that site happens to be at an instruction boundary and has an obviously-shaped
neighbourhood. It cannot be relied on for the rest.

**Recommended next step:** build a proper linear disassembler pass over each function in the
247-target list, recording instruction boundaries, then re-run this survey on that output. That
is bounded work with a clear success criterion, unlike another statistical probe.

## What survives from this survey

- The `funcs.js` label fix, which affects every future reading.
- The observation that even odds is the most common test in the game.
- `0xeef4e` and `0xeef5d` as a two-threshold 101-way roll, which is a three-way outcome.
- Confirmation that `0xf25b4` really is 2-in-10, since its site is one of the clean ones.

---

**[The stat-gain routine](stat-gain.md)** **[The random number helpers](rng-helpers.md)** **[Plan](plan.md)**
