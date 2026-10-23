# What `0xdfc5c` is, and what "runtime knowledge" meant

[cfgwalk.md](cfgwalk.md) said following the 144 indirect branches "would need to know what is
stored at `0xdfc5c` at runtime, which is a savestate question, not a static one."

The implied "we would have to play the game" was wrong. Two savestates already existed. Reading
them settled part of it and exposed a bigger problem.

## What the code at `0xdfc5c` is

From the function at `0x104aa4`, disassembled from its real entry:

```asm
0x104BB2  push eax
0x104BB3  push dword 0xe0154
0x104BB8  mov  ecx,[0xdfc60]
0x104BBE  call dword near [0xdfc5c]
```

A format string, an output buffer, a context in `ecx`, and a call through a pointer. **This is the
printf output callback**, and `0xdfc5c` is a function pointer installed at startup.

That much is settled statically. It is not game state and does not depend on how far anyone got.

## What reading it needs, and the problem found while reading it

The pointer lives above `0x0d0000`, so reading it needs the mirror mapping
`state = 0x4392d2 - imageOffset`.

**Reading there gives small integers, not pointers:**

| address | file | title state | death state |
|---|---|---|---|
| `0xdfc50` | 0 | 0x27 | 0x27 |
| `0xdfc5c` | 0 | 0x19 | 0x19 |
| `0xdfc60` | 0 | 0xe | 0xe |
| `0xdfc64` | 0 | 0xe | 0xe |

`0x19` is not a function address. So either the mirror is wrong at that address, or the region is
not resident.

### The mirror is valid, and the region is still not there

A sweep of `0xd0000` to the end of the image shows the mirror holding at every non-zero probe
sampled every `0x2000`, including `0x100000`, `0x102000` and `0x104000`. **The mirror constant is
not the problem.**

What *is* the problem: `0x104aa4` does not match at its mirrored address. Searching the state for
its exact bytes finds them **2,744 bytes away at a different implied constant, `0x43881a`**, and
at the mirrored address there is different code entirely, beginning `ame\n` then a `push ebp`.

Checking both candidates over the whole `0x104000`-to-end range:

| constant | probes matching |
|---|---|
| `0x4392d2` | 2 of 462 |
| `0x43881a` | 0 of 462 |

**Neither is right.** The tail of the image is not resident as a contiguous copy, and its contents
in memory are a mix of things that do not correspond to the file at any single offset.

## What this means

**The 144 unresolved indirect branches cannot be followed by reading a savestate**, at least not
this way. The pointer at `0xdfc5c` is not readable where it should be, because the page containing
it does not match the file.

Two explanations remain, neither tested:

- the region is loaded under a different mapping this project has not derived, most likely a
  segmented one, since the BIOS gateway switches `fs` to segment `0x110`
- the region is relocated by the loader with per-block fixups, so no constant relates file offset
  to memory address

**This is the same class of problem as the earlier "mirror" discovery**, one level deeper: a single
constant described most of the region and the tail does not obey it.

## Does this need gameplay?

**No.** Nothing here needs a character, a map, or progress. It needs a savestate, and two already
exist. The blocker is that this project does not yet have a reliable file-to-memory mapping for the
top of the image, which is a static-analysis problem.

The honest statement is narrower than the original one:

> Following the indirect branches needs the runtime mapping for the top of the image, which is not
> yet derived. It does not need gameplay.

## What the walk still gives

Unchanged and useful. `tools/cfgwalk.js` establishes **79,470 instruction boundaries** from static
reachability alone, rejects 2 of 85 `randMod` sites as provable false positives, and answers
"is this a real instruction boundary" in about two seconds. Everything it does is static and does
not depend on the broken mapping.

The 144 indirect branches are simply outside what static reachability can reach. That is a limit,
not a failure.

---

**[The control-flow walk](cfgwalk.md)** **[The top region is mirrored](mirrored-region.md)** **[The runtime image](runtime-image.md)**
