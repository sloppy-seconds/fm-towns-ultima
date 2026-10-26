# The non-leaf ceiling is call relocations, not register allocation

**Verdict: byte-perfect compile-and-diff cannot match any routine that makes a call.**
The overnight plan (`docs/overnight-run.md`) treated `0xe6a58` as the test case for whether
the 307 `non-leaf` routines are reachable, and framed its failure as register allocation.
Both premises are wrong, and the correct cause is more decisive than either.

This page answers the structural question Phase 2 was built to ask. It is a negative with a
named cause, and the cause is not the one the plan expected.

## Correction 1: `0xe6a58` is not a non-leaf routine

The census says so directly. Re-measured this session:

```
$ node -e 'const c=require("./docs/corpus.json");console.log(JSON.stringify(c.find(x=>x.addr===0xe6a58)))'
{"addr":944728,"callers":16,"size":228,"calls":0,"kind":"base-fold","reason":["references 0x7a7d0"]}
```

`calls: 0`. It makes no calls. It is classified `base-fold` because it references the
absolute address `0x7a7d0` (the record array base). `docs/overnight-run.md` and plan item
4j both describe it as "non-leaf, 1 call." That is a category error, and it means the
flagship test of non-leaf reachability was run on a routine from a different class.

## Correction 2: the `0xe6a58` failure is not "allocation alone"

A faithful candidate was written from a decoder disassembly (`tools/decode.js`, not ndisasm
text) and compiled with `-off optimize_fp`. It produced 173 bytes against the 228-byte
target. The differences are four, not one:

| the target does | the candidate does | class |
|---|---|---|
| `mov eax,0x7a7d0` then `[eax+ecx+disp]` stores | `lea ebx,[edx*1+0]` (relocatable base 0) | base-fold absolute |
| `lea eax,[esi-6]` (keeps `c` in `esi`) | `mov eax,[ebp+0x14]` then `sub eax,6` | allocation |
| keeps the division result in `eax`, no frame | `sub esp,8` and stores it to `[ebp-4]` | allocation |
| `[base+index+disp]` two-register addressing | folds base and index into one register | addressing |

The first difference is the base-fold blocker, which `docs/base-fold-negative.md` already
proved unmatchable: the linker will not place a data segment at a chosen absolute address in
the flat model. So `0xe6a58` was never matchable byte-for-byte, for the same reason the other
75 base-fold routines are not, regardless of register allocation. The "allocation alone"
framing in `docs/nonleaf-reopened.md` was incomplete.

## The real non-leaf blocker: every call is a link-time relocation

The `non-leaf` class is defined by making at least one call. A direct call is `e8 <rel32>`,
and that `rel32` is a relocation the linker fills from the callee's final address. A
single-file compile emits the placeholder `00 00 00 00`. The game's bytes carry the real
displacement. So the two differ in those four bytes no matter how correct the C is.

This was measured, not assumed. The frameless wrapper shape compiles exactly:

```
$ ./tools/cc.sh -e 'void g(void); void f(void){ g(); }'
e8 00 00 00 00 c3

$ ./tools/cc.sh -e 'void g(void); int f(void){ g(); return 0; }'
e8 00 00 00 00 2b c0 c3
```

Those are structurally identical to four real routines in the image. The only difference in
each pair is the call `rel32`:

| routine | game bytes | our compile | callee | rel32 in game |
|---|---|---|---|---|
| `0xe9430` | `e8 cb ff ff ff c3` | `e8 00 00 00 00 c3` | `0xe9400` | `0xffffffcb` |
| `0xf7bf0` | `e8 ff 76 ff ff c3` | `e8 00 00 00 00 c3` | `0xef2f4` | `0xffff76ff` |
| `0xe1068` | `e8 67 d2 01 00 2b c0 c3` | `e8 00 00 00 00 2b c0 c3` | `0xfe2d4` | `0x1d267` |
| `0xe157c` | `e8 7d cd 01 00 2b c0 c3` | `e8 00 00 00 00 2b c0 c3` | `0xfe2fe` | `0x1cd7d` |

The compiler reproduces the wrapper shape perfectly. It cannot reproduce the callee address,
because that is not a property of the source.

## Linking does not fix it

The obvious response is to link instead of compiling, so the relocation is filled. Tested
through `tools/cserve.js` `/api/link`, which runs `386LINK.EXE` and returns the linked code
with relocations applied. Two problems, both measured:

1. For a data reference, the linker places the global near address 0, not at the game's
   address. `int g; int f(void){return g;}` links to `a1 00 00 00 00` (`mov eax,[g]` with
   `g` at 0), while the game's globals sit at `0x7a7d0` and above.
2. For a call, the callee lands wherever our link places it, not where the game placed it.
   Matching the `rel32` would require reproducing the whole program's layout, which is the
   reimplementation itself, not a check on it.

So the relocation is not an artifact of stopping before the link step. It is the link step's
output, and the link output depends on the entire program.

## What this means for the plan

The byte-perfect compile-and-diff method has a hard ceiling, and it is now located:

- **Matchable byte-for-byte:** routines with no calls and no absolute data references. That is
  the `c-leaf` set, 14 routines, of which 10 are done and the rest are classified.
- **Not matchable byte-for-byte:** the 307 `non-leaf` routines (call relocations) and the 76
  `base-fold` routines (absolute data relocations). Both are blocked by link-time layout,
  which single-file compile-and-diff cannot control.

This is not pessimism about effort. It is that the method compares a linked program's bytes
against a single object's bytes, and the two differ by construction wherever a relocation
appears. No source shape removes a relocation.

The consequence for reimplementation: past the call-free leaves, the goal has to change from
"match the bytes" to "reconstruct the behaviour." Read the disassembly, write correct C, and
accept that the call displacements and global addresses will differ because they belong to the
program being rebuilt, not to the routine. The four wrappers above are the proof of concept:
their logic is fully recovered, and the only thing that does not match is the address of the
thing they call.

## What is still true and useful

- High C 1.73 reproduces the frameless call-wrapper shape exactly. The toolchain is right.
- The callees of `0xe9430`, `0xf7bf0`, `0xe1068`, `0xe157c` are now identified as direct calls
  to `0xe9400`, `0xef2f4`, `0xfe2d4`, `0xfe2fe`. That is a real call-graph fact.
- `0xe6a58` is `base-fold`, and its source (the 57-byte record initialiser) is understood. It
  is not a non-leaf test case and should not be treated as one.

## Related

- `docs/base-fold-negative.md`: the absolute-address blocker, and the linker-flag search
- `docs/nonleaf-reopened.md`: the division finding (still correct), and the allocation framing this page supersedes
- `docs/corpus-census.md`: the class definitions this page turns against the plan's premise
- `docs/plan.md` item 4j: closed by this finding
