# A9: re-running the reference searches under the mirror

Plan item A9 assumed that the 66 unresolved asset paths and the debug mode names would turn
up once the correct file-to-memory mapping was applied.

**They do not. The searches are negative, and here is what was actually tested.**

## What was searched

Searching a savestate for a four-byte little-endian value equal to each string address, using
the correct mapping now that both halves are known:

| image region | mapping |
|---|---|
| below `0xd0000` | `state = 0x762d2 + imageOffset` |
| above `0xd0000` | `state = 0x4392d2 - imageOffset` |

## Result for the asset paths

`Q:\GRAPH\MAP2_1.TIF` is at image offset `0x22cc`. Searching the whole 7.6 MB state for the
dword `0x000022cc` finds **two** occurrences, at state `0x5fa5db` and `0x5fa61b`.

Neither is a pointer. Inspecting the surrounding bytes shows colour values:

```
... 00 77 77 00 ff ff 55 00 11 cc 22 00 00 22 ee 00 ff 00 ...
```

That is palette data. `0x22cc` matched because `22 cc` appears inside a colour triple, not
because anything refers to the string.

**Verdict: NEGATIVE.** No reference to the `MAP2_1` path exists as a plain dword in either
mapping.

The same applies to the other unresolved paths and to the debug mode names. Their addresses
are all below `0xd0000`, so the mirror does not change where a reference to them would be
looked for, and none is present.

## What this means

**The mirror fixed one real problem and this is not it.** The two are separate:

- The **mirror** explained why nothing above `0xd0000` resolved as a runtime address. That is
  now solved and documented in [mirrored-region.md](mirrored-region.md).
- The **missing references** are a different phenomenon that persists with the correct
  mapping applied.

So the honest position returns to what `addressing-limits.md` said before the savestate work:
the strings exist, the code that uses them is not referring to them by address in any way a
four-byte scan can see. The loaders build them at runtime.

## The one thing the state did confirm

The **jump table at `0xd8f84`** is real. At its mirrored address the state holds a dense
ascending table of 32-bit code pointers, structurally identical to the file's, with different
values because the code lives at different addresses:

```
file:  40 bb 00 00  a0 bb 00 00  a4 bb 00 00  ec bb 00 00
state: d8 c9 00 00  1c ca 00 00  64 ca 00 00  9c ca 00 00
```

So runtime data tables can be read, once the mapping is right. That is a capability the
project did not have before, even though it did not answer the asset-path question.

## And the switch table is still missing

`0xe4086` reads as instruction bytes both in the file and at its mirrored runtime address. The
mirror is not the explanation for that one either. Still open, recorded in
[core-routines.md](core-routines.md).

## A10 attempted: the image loader is the wrong target

Plan item A10 assumed `0xe9948` was the general asset loader, because it shows
` LOAD ERROR` on failure. That assumption is wrong.

**`0xe9948` is called exactly once in the whole image**, and its path argument is a register,
not a literal. A general asset loader would be called for each of 71 files. So this is a
single-purpose load, not the path resolution mechanism.

The function containing the nearby setup code at `0xe98c1` calls `0xe6d50` repeatedly with
pairs of small integers, which is display or palette setup, not file handling.

**A10 does not resolve.** The asset path mechanism is still unexplained, and the assumption
that a function showing a load-error message is the loader was wrong.

## What would actually resolve the asset paths

Not a scan, and not that function. Two routes remain:

**Read the BIOS file service.** The TownsOS gateway at `0x0c5d` is understood: `ah = 0x60`,
`fs` set to `0x110`, call through `fs:0x20`. File open is one of those services. Finding which
function calls the gateway with the open service number, and what it passes, gives the
lowest layer.

**Or accept it.** The asset inventory is proved complete by other means: every file
`ENCHANT.EXP` opens was extracted, and `verify.js` asserts the set. The path strings are
documented at their offsets. Not knowing which instruction pushes which path costs nothing
for extraction, which is the project's actual goal.

That second option is worth stating plainly, because this has now consumed three work items
and produced negatives.

---

**[The mirrored region](mirrored-region.md)** **[Addressing limits](addressing-limits.md)** **[Plan](plan.md)**
