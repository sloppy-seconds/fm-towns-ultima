# The game loop

The single most important structural finding for reimplementation, and it is seven bytes.

## The loop

```
0xe97c0   the kernel entry, called from the character select loop
  0xe988b   call 0xf6ebc          ; dispatch the current location
  0xe9890   cmp dword [0xcde34],0x0
  0xe9897   jnz 0xe988b           ; loop while the running flag is non-zero
  0xe9899   mov word [0xcda74],0xffff    ; clean up on exit
```

**The game is a `do { location(); } while (running);` loop.** `0xcde34` is the running flag, initialised
to `-1` at the top of `0xe97c0`, which means "running" rather than zero.

That is the skeleton a reimplementation needs at the top: one loop, one dispatch per iteration, one
flag. Everything else hangs off `0xf6ebc`.

## The call chain from power-on

```
0x101bdc                      entry point A (no caller)
  0xebefc                     character select
    loop at 0xebf6f
      0xebe34                 read the roster selection
      dispatch on the selection:
        0                         -> 0xe9a54, then 0x101bc4
        1                         -> 0xee770   character sheet (魅力, 力, etc)
        2                         -> game
      path 2:
        0xec118  call 0xeafc4   title art
        0xec11d  call 0xe97c0   the kernel below
        0xec127  jmp  0xebf6f   back to character select when the game exits
  0x101c11, 0x103528, 0x103c04  start-up

0xe97c0                       kernel
  loop at 0xe988b
    0xf6ebc                   location dispatch
```

So **the outer loop is character select and the inner loop is the game.** Exiting the game returns to
select, which is exactly how Ultima II behaves.

## The location dispatcher

`0xf6ebc` is called once per turn. It is small, ending at `0xf71f0`, and its callees are the per-location
handlers. Its string references name the overworld towns: `ト・ボニフィス`, `ピタ－・ビレッジ`, `スタ－`,
`・キャンプ`.

It sets `0xcde34` to zero to end the game, which is why the loop tests that flag.

## Why this matters more than it looks

**A turn is one call to `0xf6ebc`.** That makes every remaining question measurable against a known
unit:

- what moves the player: inside `0xf6ebc`
- what a combat round is: a callee of `0xf6ebc`, or inside it
- what advances time: inside `0xf6ebc`
- how a location change happens: `0xf6ebc` returns and the next iteration dispatches elsewhere

For reimplementation, the whole game is now describable as "call this once per turn, and here is what it
does". Before this, there was no unit to describe.

## What is inside `0xf6ebc` and not yet read

`0xf6ebc` calls 39 routines. Reading those 39 covers every per-turn behaviour in the game, which makes
it the highest-value reading target in the project. It supersedes the 33 unread `randMod` functions as
a priority, because those are scattered while these are the turn itself.

In order of call count within `0xf6ebc`: `0xe6e48` (2), then 37 single calls including `0xf0c60`,
`0xe77f8`, `0xf0b08`, `0xe4928`, `0xf746c`, `0xf7394`, `0xf71f4`, `0xf72c4`, `0xf29f0`, `0xf78d4`,
`0xf7bd0`, `0xf7bd8`, `0xeed88`, `0xf23a4`, `0xf7544`, `0xef0ac`, `0xf756c`.

Several are already named: `0xf7bd8` is the shuttle, `0xf29f0` appears in the shrine cluster.

## Confidence

**High.** The loop is three instructions and the flag is initialised in the same function that contains
it. There is no interpretation here, only bytes:

```
0xe97c0    mov dword [0xcde34],0xffffffff    ; running = -1
0xe988b    call 0xf6ebc                      ; turn
0xe9890    cmp  dword [0xcde34],0x0
0xe9897    jnz  0xe988b                      ; while running
```

The one thing not proven is that `0xf6ebc` is reached exactly once per player-visible turn. It is
called once per loop iteration, and the loop iterates while running. Whether a "turn" as the player
perceives it spans one or more iterations needs one runtime check, which is Track B work.

---

**[The call graph](call-graph.md)** **[Distance to reimplementation](reimplementation-gap.md)** **[Overnight queue](overnight.md)**
