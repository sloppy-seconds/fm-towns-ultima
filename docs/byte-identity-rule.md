# The byte-identity equivalence rule

Plan item [12a](plan-recomp.md). This is the rule for what "matched" means on the preservation track, written
as code in `tools/byteid.js` before any function is declared matched. The item exists because two specific
errors were made without it, and both are named below.

**The rule in one line.** A candidate is matched when its bytes equal the game's bytes over the function's
asserted extent, except at sites where a demonstration proves the game's byte was supplied by the linker or
the assembler rather than authored.

An exemption that cannot be demonstrated is not an exemption. It is tolerance, and tolerance is how a
byte-identity fraction gets padded until it means nothing.

## Boundaries come from an assertion, not a scan

A function's extent is its `size` in `docs/corpus.json`, the committed derivation. If an address is not in that
file, `byteid.js` returns `extent-unasserted` and exits 2. It does not fall back to scanning for a `ret`.

This is not ceremony. `docs/ndisasm-continuation.md` records `0xe6a58` being analysed as 222 bytes when it is
228, and every conclusion drawn on those 222 bytes was a wrong conclusion with confidence attached. A
`ret`-terminated extent is exactly that scan, and it fails the same way on any function with a mid-body `ret`,
a `ret` in a jump-table gap, or a tail that the walk stopped early on.

Two further checks follow from taking the extent seriously:

- if the decode covers fewer bytes than the assertion, the verdict is `extent-incomplete`, because the walk
  and the derivation disagree and neither can be trusted
- if the candidate is longer than the extent, the verdict is `length-differs` with the note that the candidate
  ran past the function

## The exempt classes

There are three. Nothing else is ever masked, and the list is closed: `tools/byteid.js --list-exemptions`
prints it, and a gate asserts that this page names every entry.

### L1, a `disp32` holding a link-time absolute address

**Claim.** The compiler emits a placeholder and the linker fills the address, so the game's value and a
standalone build's value differ while the code is identical.

**Demonstration, from the kit itself.** Atlas probe A24 compiles `g = g + a` to `add dword ptr [0], eax`, and
A05 to `add dword ptr [0x10], eax`. The field is the linker's, observed directly.

**Per-site test applied at comparison time.** The game's 32-bit value must lie inside the loaded image. If it
does not, the exemption is refused and the bytes count as a difference.

### L2, a `rel32` on a direct call or jump

**Claim.** Same mechanism: A06 emits `call 0` and A27 emits `call 0x11` for a call into another module.

**Per-site test.** The displacement, read **signed**, must resolve to a target inside the image. Signedness
matters and was a bug in the first version of this rule: read unsigned, every backward call lands outside the
image and gets refused, which would have turned a large fraction of real matches into false mismatches.

### P1, inter-function alignment padding

**Claim.** Zero fill the assembler inserts to align the next function. Every atlas probe's image ends in it,
and it disassembles as `add byte ptr [eax], al`, which is what two zero bytes mean on this architecture.

**Per-site test.** The game bytes in the range must actually be zero. A real instruction cannot hide behind
this class.

## What is deliberately not exempt

**Short displacements.** A `rel8` on `eb` or a `7x` conditional jump is resolved by the assembler inside the
function and is authored code. `tools/cmpdisp.js`, written before this rule existed, masks whatever its
encoding walk returns including the `rel8` form, which is slightly too permissive. `byteid.js` restricts
exemptions to four-byte fields and is stricter than the tool it builds on. The known match at `0xe9e2c`
contains a `rel8` backward jump and still comes out `byte-identical` with zero exempt sites, which is the
demonstration that the stricter rule does not lose real matches.

**The prologue.** A difference in the first instruction is reported as `differs` with `prologueMismatch: true`
and the note "this must not be filed as verified". `docs/highc-authentic-toolchain.md` spent a session
discovering that a framed prologue in the target and an unframed one in the build was a compiler option and
not a source shape, and the reason that took a session is that the mismatch had been filed as a near-miss
instead of an open question. An unexplained prologue difference is a fact about the build, not a rounding
error.

**Register choice, frame style, instruction order, constant encodings.** All authored, all must match.

## The demonstrations are not a formality, and their real strength is measured

A mask that never refuses is the failure mode this whole item is about, so the refusal rate was measured rather
than asserted. Across the first 150 functions in `docs/corpus.json`, compared against their own bytes through
`byteid.js`, there are **1,288 relocation-shaped sites and 0 of them are refused**.

That is the honest number, and it says something worth saying: on this image the per-site demonstration is a
**validity guard, not a discriminator**. The image loads at base 0, so almost every `disp32` in it happens to
be a plausible address and almost every `rel32` resolves inside the image, and the L1/L2 tests let all of them
through. The thing that actually keeps the mask narrow is the encoding predicate inherited from
`tools/cmpdisp.js`, which only calls a field a relocation when the opcode, ModRM and SIB put a four-byte
displacement at that exact position, plus this rule's restriction to four-byte fields.

So the guard is asserted directly rather than left to fire by accident. `tools/checkall.js` calls the L1 and L2
predicates with values that must fail, which is the demonstration that they are predicates and not `true`:

```
L1.check(0xffffff6b, imageSize 1072366)  -> false
L2.check(0x7f048d0f, ...)                -> false
```

A check that has never been seen to fail is a comment, and a guard that has never been seen to refuse is the
same thing one level down. Saying the refusal rate is zero is better than quietly quoting a bigger number
measured by a different predicate, which is what an earlier draft of this page did.

## Verified against a known match

The rule was checked against bytes the real toolchain produced, not against a hand-written expectation.
`R1.EXP` on the TownsOS image is the standalone build of the `"="` scanner at `0xe9e2c`, which
`docs/routines.json` classes `matched`:

```
$ node -e "...compare(0xe9e2c, R1 code bytes)..."
R1 @0xe9e2c: byte-identical exempt sites: 0
```

Identical bytes, zero exemptions applied. A rule that produced this verdict only by masking something would
have shown a non-zero exempt-site count, and that is what the check looks at.

## Usage

```
node tools/byteid.js --addr 0xe9e2c --code "8b 4c 24 04 8a 01 ..."
node tools/byteid.js --addr 0xe9e2c --code "..." --json
node tools/byteid.js --list-exemptions
```

Exit codes: `0` for `byte-identical` or `identical-except-link`, `1` for `differs` or a length mismatch, `2`
for `extent-unasserted` or `extent-incomplete`. The distinction between 1 and 2 is the distinction between "my
C is not the original C" and "I cannot ask the question", and collapsing them is how a mismatch gets mistaken
for evidence.

## What this rule still cannot do

It cannot tell you that a match proves which compiler built the game. A byte match under this rule is positive
evidence and is what earns `compiler-1.73-matched` in the ledger, but a mismatch under it still cannot
distinguish "not this compiler" from "my C is not the original C", which is the constraint
[plan-attribution.md](plan-attribution.md) is built around. The atlas supplies the other half: a site
containing one of the never-emitted idioms is positive evidence of exclusion, and only that kind of evidence
can earn `hand-asm-positive`.
