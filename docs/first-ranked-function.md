# The first function read from the ranking: `0xe5d90`, a graphics mode initialiser

**`0xe5d90` makes six TBIOS calls, creates a 1,536-byte context, and writes eleven fields into it.
That is a display-mode setup, and every one of those statements came from a command rather than a
guess about what a 1990 RPG does.**

## How it was found

`tools/funtriage.js` ranked 700 functions by what is already known about them, and `0xe5d90` came
first with six TBIOS calls and no named globals. The ranking exists because 738 corpus rows have
zero names and reading one routine at a time cannot close that.

## The six calls, resolved

Each call goes through a stub at a low address, and `tools/tbios.js` maps the stub's AH value to a
handler in `TBIOS.BIN`:

| AH | handler in `TBIOS.BIN` | called at |
|---|---|---|
| `0x00` | `0x19b8` | `0xe5d9a` |
| `0x01` | `0x450` | `0xe5dc6`, `0xe5de2` |
| `0x0c` | `0x1e04` | `0xe5e11` |
| `0x15` | `0x1f1c` | `0xe5e45` |
| `0x16` | `0x1f30` | `0xe5e54` |
| `0x17` | `0x1f44` | `0xe5e60` |

## The body

```
0xe5d90  push 0x600
0xe5d95  push 0x7a7d8
0xe5d9a  call 0x2c8                  AH 0x00: create a context, 0x600 bytes at 0x7a7d8
0xe5d9f  add  esp, 8
0xe5da2  and  eax, eax
0xe5da4  je   0xe5db0
0xe5da6  mov  eax, -1                if it fails, return -1
0xe5dab  jmp  0xe5e6a

0xe5db0  mov  word [0x7aed8], 3
0xe5db9  mov  eax, 3
0xe5dbf  push 0
0xe5dc1  push 0x7a7d8
0xe5dc6  call 0x2ea                  AH 0x01, with (context, 0, 3)
0xe5dcb  mov  ax, 3
0xe5dcf  mov  word [0x7aeda], ax
0xe5dd5  mov  eax, 3
0xe5ddb  push 1
0xe5ddd  push 0x7a7d8
0xe5de2  call 0x2ea                  AH 0x01 again, with (context, 1, 3)

0xe5de7  mov  ax, 9
0xe5deb  mov  word [0x7a7d4], ax
0xe5df7  call 0xe5ab8                a local helper, argument 9
0xe5dfc  mov  ax, 0x22              34
0xe5e00  mov  word [0x7aedc], ax
0xe5e0b  push 0x22
0xe5e0c  push 0x7a7d8
0xe5e11  call 0x4c5                  AH 0x0c, with (context, 0x22)

0xe5e18  call 0xe5acc                three local helpers, all with argument 0
0xe5e1f  call 0xe5ae0
0xe5e24  call 0xe5890
0xe5e2b  call 0xe5948                with argument 0xf
0xe5e32  call 0xe5960
0xe5e39  call 0xe5978                with argument 0xd

0xe5e45  call 0x61c                  AH 0x15, with (context, 0)
0xe5e54  call 0x63e                  AH 0x16, with (context, 0)
0xe5e60  call 0x660                  AH 0x17, with (context, 0)
0xe5e65  sub  eax, eax               return 0
0xe5e6a  ret
```

## What is established, and in what terms

**A context is created and its address is a constant.** `0x7a7d8` is pushed before five of the six
calls and is the first argument to `AH 0x00`, which is passed `0x600` (1,536) as a size. The
function returns `-1` when the call fails and `0` when it succeeds, so the caller treats it as a
fallible initialiser.

**Eleven words are written into a block, and three of the values are reused as arguments.** `3` is
stored at `0x7aed8` and also passed to `AH 0x01` twice with indices 0 and 1. `0x22` is stored at
`0x7aedc` and passed to `AH 0x0c`. So `0x7aed8`, `0x7aedc`, `0x7a7d4` and the block at `0x7a7d8` are
one object.

**What the values mean is not established.** `0x22` is 34, `9` is 9, `3` is 3. Calling `0x22` "the
row count" would be a guess, and this page does not make it.

## The six AH values bound the search, and that is the real result

Before this, the routine was one of 700 unnamed functions. Now it is known to call exactly six TBIOS
handlers, at `0x19b8`, `0x450`, `0x1e04`, `0x1f1c`, `0x1f30` and `0x1f44` in `TBIOS.BIN`. Two of
those chain to more unread code, and reading them is a bounded job rather than an open one.

**What would name this function is the meaning of AH `0x00`, `0x01`, `0x0c`, `0x15`, `0x16` and
`0x17`.** Six numbers, each resolvable by reading one handler, or from Fujitsu's documentation if it
survives. That is the concrete next step and it is much smaller than the problem this started from.

## A correction to the tool, and a correction to me

`funtriage` first credited this routine with five AH values and, after a fix, six. My hand-decode
of the tail stopped at the first `ret` and I concluded the `0x15`/`0x16`/`0x17` calls belonged to a
different function. Checking the stub callers directly refuted that: `0x61c`, `0x63e` and `0x660`
are called from `0xe5e45`, `0xe5e54` and `0xe5e60`, all inside this body.

The tool was right and the manual reading was wrong, which is worth recording because it is the
opposite of the usual direction of error in this project.
