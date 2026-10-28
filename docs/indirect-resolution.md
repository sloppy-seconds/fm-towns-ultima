# What the runtime captures give the recompiler

The question: do the CFG captures improve `fmtownskit`'s ability to decompile or recompile the game,
as distinct from widening the static seed set.

**Short answer: the mechanism works, the yield is 1 of 21 in the captures taken so far, and eight of
the remaining twenty are resolvable in one command that has not been run.**

## The interface already expects this

`references/vs-sr-dev/fmtownskit/recomp/discover.py` records indirect transfers and says what they
are for, in its own words at the point the walker refuses to guess:

> Returning None is the correct answer: the transfer is indirect and unresolved, which is what
> `indirect` means and what the runtime is for.

So the runtime is the designed answer to these sites, not a workaround.

## The measured position

Running `discover.load('ENCHANT.EXP')` with the current 532 seeds:

```
698 functions, 547923 instructions, 1138645 bytes of code
72 jump tables (68 bounded), 21 indirect transfers unresolved, 851 refused, 334300 conflicts
```

The documentation said 24 unresolved. The current tool says **21**, so that figure has moved and the
older count is stale rather than wrong-at-the-time.

## How many the captures resolve

Taking every edge from every capture and asking which indirect sites appear as their source:

| | |
|---|---|
| indirect sites | 21 |
| resolved by the captures | **1** |

The one: image `0x10005E` calls, at runtime, `0x0FFEC1`. The walker could not know that and the
capture states it.

**One of twenty-one is not a result.** It is a demonstration that the mechanism is correct, taken on
four short gameplay captures that between them reached 4,169 of the image's instructions.

## Why the others did not resolve

Two different reasons, and they need different fixes.

### Eight are a call through a pointer that is zero in the file

Eight sites are `ff 15 5c fc 0d 00`, which is `call [0xdfc5c]`. That global is **zero in
`ENCHANT.EXP`** and is filled at run time. Confirmed by matching a unique 28-byte sequence from a live
`MD` read back into the file: `file offset = DS offset + 0x200`, the same offset as everywhere else, and
the file genuinely holds eight zero bytes followed by the ASCII string `00000000`.

Reading that dword from a running game answers all eight at once. It is one `MD` command. It has not
been run yet, and it is the cheapest remaining win in this area.

A `MD 14:dfc5c` returned zeros in the current state, which says the pointer is not yet set at that
moment rather than that it is never set. The read needs to happen while the game is actually calling
through it, which means during play rather than while idle.

### The rest need coverage, not a trick

The other twelve are `call [ebp+8]`, `call [ebp+0c]`, `call [ebp+0x10]`, `call eax` and
`call [0xdfc5c]` variants in code the captures never reached. Resolving those needs captures of the
code paths that execute them, which is the same experiment-per-action work as before.

## What this does and does not change for the recompiler

**Does:** a resolved indirect site turns an `x86_fault` stub in the emitted C into a real call. That is
one function body recovered per site, and the fault text in the output names the site, so the gain is
visible in the generated source.

**Does not:** move the 851 refusals or the 334,300 conflicts, which are decode and overlap problems
rather than unknown targets. The recompilation page already records that even a clean run is not a
playable port, and these are a separate gap.

**Does not:** matter for the seed count. The seeds are about which code gets swept. Indirect
resolution is about which edges the sweep can follow. They are independent, and the seed work measured
separately gained 0.7 percent coverage.

## What to do next, in order

1. **Read `[0xdfc5c]` during play.** One `MD` while the game is running a turn, not idle. Eight sites
   resolve together if it is non-zero.
2. **Mine every capture for indirect-site edges as a standing step**, rather than by hand. The check
   above is twenty lines and belongs in a tool, since every future capture should be asked the same
   question.
3. **Target captures at the twelve remaining sites** by finding what calls into the functions that
   contain them, and exercising those paths.

**[CFG findings](cfg-findings.md)** **[Recompilation](recompilation-clean.md)** **[Plan](plan.md)**
