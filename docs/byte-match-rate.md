# 4f: the byte-match rate across the Level-1 leaf population

Plan item [4f](plan.md). The question it exists to answer: is High C 1.73 the compiler that built this game,
measured on a population rather than on two routines.

**Answer: 11 of 14 match byte for byte, 78.6 percent** (10 of them already in the register, `0xe140c` pending
promotion). The stop condition in the item is "fewer than 30 percent match means the toolchain is not the
original", so this is not close. Two more are blocked on a configuration toggle rather than on their C, which puts
the recoverable set at 13 of 14.

## The population is 14, not 33, and that is the first finding

The item says "at least 25 of the 33 Level-1 candidates". The current classifier yields **14**, and the number
is not a choice of ordering: `docs/corpus.json` holds exactly 14 rows of `kind: c-leaf`, and
`tools/preflight.js --scan 40` independently reports "14 C leaves among real function starts" after excluding 10
as not-C and the rest as non-leaf or base-fold.

So 25 of 33 was never reachable, and 4f could not have been completed as written. The item's premise was also
stale in a second way: it says the compiler question "is currently answered by two routines", and by the time
this ran **10 of the 14 were already matched**. The two-routine framing dates from before that work.

Both are recorded rather than quietly adjusted, because an acceptance criterion that cannot be met is worth
knowing about before someone spends a session trying.

## All 14, and what each is

| addr | bytes | callers | status |
|---|---|---|---|
| `0xe5304` | 189 | 3 | matched, framed-pending |
| `0xe552c` | 76 | 4 | matched, driver-verified |
| `0xe52c8` | 58 | 4 | matched, framed-pending |
| `0xe07e8` | 58 | 2 | matched, driver-verified |
| `0xe44d0` | 49 | 85 | matched, driver-verified |
| `0xe1c24` | 46 | 11 | **base-fold, attempted here: 48 vs 46** |
| `0xe1bf4` | 46 | 11 | **base-fold, attempted here: 48 vs 46** |
| `0xe140c` | 43 | 2 | **matched here, 43/43, new** |
| `0xe9940` | 37 | 84 | matched, driver-verified |
| `0xfe95d` | 32 | 2 | **unresolved, attempted here: 52 vs 32** |
| `0xfd0ec` | 29 | 2 | matched, driver-verified |
| `0xe65fc` | 23 | 2 | matched, driver-verified |
| `0xe9e2c` | 21 | 91 | matched, driver-verified |
| `0xe662c` | 9 | 2 | matched, driver-verified |

**14 of 14 attempted.** The item asked for 25 of an impossible 33, so completing the actual population is the
honest equivalent.

## The four attempts

Every candidate was compiled through the **authentic driver route** (`tools/atlas-build.py --corpus`), not
`tools/cserve.js` as the item's autonomy note says. That matters: `cserve` drives the real-mode `HCD386.EXE`,
whose optimiser never engages, and a rate measured on unoptimised output would be a rate for a generator that
is not the one that built the game.

### `0xe140c`: matched, 43 of 43 bytes

```
target  55 8b ec 57 8b 7d 08 8b 55 0c 2b c9 3b ca 75 04 8b c7 eb 14 80 3f f2 75 0a
        41 3b d1 75 05 8d 47 06 eb 05 83 c7 06 eb ec 5f c9 c3
ours    identical, all 43 bytes
```

```c
char *f(char *p, int n) {
	int i;
	i = 0;
	if (n == 0)
		return p;
	for (;;) {
		if (*p == (char)0xf2) {
			i++;
			if (i == n)
				return p + 6;
		}
		p += 6;
	}
}
```

The routine counts occurrences of `0xf2` in a 6-byte-stride array and returns the element after the n-th one.
It was classed `register-choice` because several candidate sources were already known to produce all 43 bytes
with one register pair differing, so the *source text* was under-determined rather than the bytes wrong. This
candidate produces all 43 bytes, which settles the byte question. It is **instruction-for-instruction identical,
including every branch displacement**, and the branch targets shown by a disassembler differ only because the
target is loaded at `0xe140c` and the standalone build at 0.

**The comparison needed a fix to report this honestly, and the fix is about the two containers being different.**
`ENCHANT.EXP` is an **`MP`** flat image, and the game's extents here come from `docs/corpus.json`, which is a walk
to the routine's `ret`. A candidate is built by `386LINK.EXE`, which emits **`P3`** (signature `50 33`), and
`tools/atlas-build.py` reads a candidate's extent from the linker map's segment size. **That size is aligned:**
all 40 atlas probes and all 7 candidate modules report a code segment divisible by 4, so `0xe140c`'s 43 bytes
of code are reported as `0x2C` = 44.

The candidate therefore arrived as 44 bytes: 43 of code plus one `00` of trailing alignment fill. `tools/byteid.js`
exempted trailing padding only on the *target* side, so a correct candidate was reported as `length-differs`. It
now also exempts an all-zero tail on the candidate side, and only an all-zero tail, because the function ends at
its `ret` and a candidate that genuinely ran past the function has a real instruction there. The exemption is
recorded on the result as `candidatePaddingBytes` rather than silently discarded.

**A caveat this exposes in the atlas, recorded rather than fixed.** The atlas table's `bytes` column also comes
from a map segment size, so for any probe whose real code length is not a multiple of four the figure includes
one to three bytes of alignment fill. No atlas finding depends on it, because the claims are about instructions
and idioms rather than lengths, but the number is the segment size and not the code size.

**Promoting it in the register is 4j's work and is deliberately deferred, with the numbers recorded here so it
cannot be lost.** `docs/routines.json` still classes `0xe140c` as `register-choice`, and that entry is not false:
it already says "12 candidates, all 43/43 bytes", so it records that the bytes match and only leaves the source
text undetermined. Changing the class to `matched` moves three owned counts across two ledgers at once:

| ledger | change |
|---|---|
| `docs/routines.json` | `matched` 10 to 11, `register-choice` 1 to 0 |
| `docs/queue.json` | its row would go `unattempted` to `matched`, so the queue reads 11 matched and 685 unattempted instead of 10 and 686 |
| the driver-verified count | 8 to 9, which `tools/checkall.js` asserts and four pages restate |

That is the grind and its ledger, which is item 4j, and doing half of it inside a measurement item is how two
ledgers start disagreeing. The exact C is in `tools/cand-4f/a51_e140c.c` and the passing comparison is reproduced
above, so the promotion is a five-minute edit for whoever picks up 4j rather than a rediscovery.

### `0xe1bf4` and `0xe1c24`: 48 against 46, blocked on the frame decision

Both are "six ints into a fixed struct at absolute `0xe3f4`", fields at `+0x24` and `+0x3c`:

```c
struct S { char pad[0x24]; int f0, f1, f2, f3, f4, f5; };
void f(int a, int b, int c, int d, int e, int g) {
	struct S *p = (struct S *)0xe3f4;
	p->f0 = a; /* ... */ p->f5 = g;
}
```

The candidate is 48 bytes against the asserted 46, and the disassembly shows why:

```
target                        ours
push ebp                      mov ecx, 0xe3f4
mov ebp, esp                  mov eax, [esp + 4]
mov eax, 0xe3f4               mov [ecx + 0x24], eax
mov edx, [ebp + 8]            mov eax, [esp + 8]
mov [eax + 0x24], edx         mov [ecx + 0x28], eax
...
leave / ret                   ret
```

**The target is framed and the default build is not.** For six arguments the framed form saves six bytes on the
loads (`[ebp+8]` is 3 bytes where `[esp+8]` is 4) and spends four on the frame, so 46 against 48 is exactly the
arithmetic that `docs/highc-authentic-toolchain.md` diagnoses for `0xe52c8`. The register allocation differs too
(`ecx` base against `eax` base, `eax` value against `edx`), and that is most likely a consequence of the same
decision rather than a second cause.

So these are not wrong C. They are the frame-decision class, which is blocked on `Remove_BP`, and this attempt
is an independent confirmation of that block from two routines that were not part of the original diagnosis.

### `0xfe95d`: 52 against 32, and the reason is the calling convention

The target is 32 bytes and its **first instruction is `movzx ebx, al`**, with no prologue at all: it takes its
argument in a register, reads a word table through `cs:`, returns in `dx`, and uses a 16-bit `mul`. The closest
C the arithmetic allows is:

```c
unsigned f(unsigned char c) {
	unsigned v = (c & 0xf) + 1;
	unsigned idx = c >> 4;
	return (unsigned)((tbl[idx] * v) & 0xffffu);
}
```

which compiles to 52 bytes and reads its argument from `[esp+4]`. `docs/highc-codegen.md` measures that High C
passes no arguments in registers, so **no C source can produce that opening**. That is the evidence, and it is
why this routine stays `unresolved` rather than being called not-C: a different calling convention is a
possibility the evidence does not exclude, and the experiment page warns that "not-C" is a stronger claim than
is supported.

## The rate

| outcome | count | share |
|---|---|---|
| byte-identical match | **10** | **71.4%** |
| matched by this run, awaiting promotion to the register (4j) | 1 | 7.1% |
| blocked on the frame decision, C believed correct | 2 | 14.3% |
| calling convention unexplained | 1 | 7.1% |
| **attempted** | **14** | **100%** |

The item's stop condition is 30 percent. Even counting only what is already in the register this is 71.4 percent,
and with `0xe140c` included it is 78.6. Neither is near the stop condition, and the conclusion both license is the
one the project has been building toward: **High C 1.73 is the compiler that built this game**. It is not "78.6
percent of the game is recoverable", because this population is the leaf set and deliberately the easiest part of
it.

## Reproducing

```
./tools/atlas-build.py --corpus /var/tmp/atlas/cand4f      # needs the corpus sources
node tools/byteid.js --addr 0xe140c --code "<the 43 bytes>"
```

The four candidate sources are `a51_e140c.c` through `a54_fe95d.c` in `tools/cand-4f/`. They are committed
for the same reason `docs/routines.json` carries a `c` field: a candidate is a mechanical translation of machine
code into a language a person can read, which is what this repository exists to preserve, and it contains no
media. The original executable is never committed and never shipped.
