# Inside a turn: the 39 callees of the location dispatcher

The game loop is one call to `0xf6ebc` per iteration ([game-loop.md](game-loop.md)). So these 39
routines **are** the per-turn behaviour of the game. Reading them is the highest-value work available,
and this page is what naming them produced.

## What a turn does, in order

From `0xf6ebc` itself, before it reads a key:

```
0xf6ebc   mov word [0xcde48],0xffff        ; clear a two-byte field
0xf6ec5   push 7 / call 0xe6b1c           ; select display pane 7
0xf6edc   cmp dword [rec+0xcde81],0x0     ; HP, the death check
0xf6ee8   call 0xf0c60                    ; if HP is 0, run its handler
0xf6eed   push 7 / call 0xe77f8
0xf6ef4   call 0xf0b08
0xf6f0c   cmp dword [rec+0xcdf9b],0x0     ; GATE_X
0xf6f13   jg  0xf71dc                     ; a gate is active, take that branch
0xf6f19   call 0xe4928 (readKey) in a loop until non-zero
0xf6f3d   jmp  [edx*4+0xf6d65]            ; command table, key - 1
```

**Correction.** This block was annotated `MAGIC` at `0xcde81`. It is **HP**, verified against the
game's own display in `docs/hp-and-damage.md`, where the screen read 385 and memory read 385. So
the line is the **death check**: if current HP is zero, run the handler at `0xf0c60`.

There is also **no magic or mana field in this game.** The record around HP is HP, maximum HP,
experience, food and gold, with nothing between them for a spell pool, and the player reports no
mana counter on screen. Spells appear to be learned or carried rather than paid for out of a pool.
That reading is the player's and is not yet confirmed from the code.

## The 39, classified

Every routine below calls pane select and print, so the field it touches is what distinguishes it.

| routine | record fields touched | identification |
|---|---|---|
| `0xf29f0` | `STRENGTH`, `TORCHES`, `+0xcdebe` | **open a chest**, string `宝箱を開けてみると：` ("opening the chest:") |
| `0xf7bd8` | `KEY`, `+0xcde56` | **shuttle**, string `シャトルに乗る` ("board the shuttle") |
| `0xf78d4` | `+0xcde56` | **pixel-writing sub-screen**, calls `0xf3e04` |
| `0xf0c60` | `MAGIC`, `EXPERIENCE`, `FOOD`, `KEY`, `INTELLIGENCE` | **magic / spell book** |
| `0xf0b08` | `EXPERIENCE`, `MAGIC`, `FOOD`, `+0xcde4c` | **status panel**, calls the text renderer |
| `0xf75cc` | `KEY` | **key-gated action prompt**, reads a key inside |
| `0xf63a4` | `KEY`, `+0xcde56` | **key-gated sub-screen** |
| `0xf8564` | `KEY`, `+0xcde7b` | **key-gated dialogue** |
| `0xef0ac` | `SPID`, `MAGIC`, `HP`, `MHP`, `FOOD`, `RING`, `WAND` | **combat or character action**, the widest field set |
| `0xeed88` | `+0xcde56` | sub-screen, string `ﾄください。` ("please do ...\") |
| `0xf71f4` | - | **town handler**, `ト・ボニフィス` (Port Boniface) |
| `0xf72c4` | - | **town handler**, `ピタ－・ビレッジ`, `スタ－` (Pita Village, Star) |
| `0xf7394` | - | **camp**, `・キャンプ` |
| `0xf746c` | `+0xcde56` | **overworld sub-screen**, calls `0xefb48` |
| `0xf1474` | - | **music**, `BRITISH`, `MUSIC`, `ルティママスタ－` |

### Named elsewhere and confirmed here

`0xe6e90` text renderer, `0xe6e48` pane clear, `0xe6b1c` pane select, `0xe5834` print, `0xe1c5c`
`randMod`, `0xe3d4c` `randRange`, `0xe4928` read key, `0xe9920` pixel writer, `0xf3e04` pixel writer,
`0xe77f8` pane-7 helper.

> **CORRECTION: this page listed `0xcfe14` as the attack message** on the strength of its reference to
> `\nによる攻撃`. **It is not a function.** It is inside 59 bytes of zero padding from `0xcfe10` to
> `0xcfe4b`, which disassembles as `add [eax],al` repeated and fails the boundary oracle.
>
> The string is real but attributing it to a nearby address is the same error as pairing `0xEB` runs with
> whatever text follows them, which cost twelve probes. Both rows are removed.
>
> See [combat-formulas.md](combat-formulas.md): no routine that touches `HP` calls the RNG, so U2's combat
> arithmetic is not reachable from the fields it operates on.

## What this establishes for a reimplementation

**A turn is now describable.** It is:

1. clear `0xcde48`, select pane 7
2. if `MAGIC` is zero, run the magic handler
3. if `GATE_X` is greater than zero, take the gate branch
4. otherwise read a key until one arrives
5. dispatch on the key through a ten-entry table
6. whatever the handler does, then return to the loop

That is a skeleton a reimplementation can be built against, and it did not exist before this session.

## The unresolved part, stated plainly

**The key to command mapping is not known.** Table 1 gives seven handlers for keys 1 to 10, and the keys
are control codes, not the `A` to `Z` movement commands. Which control code the keyboard produces for
`J` is a runtime question.

**Furthermore there are only ten entries where a full command set needs more.** Either movement is
handled before the dispatch (in the `GATE_X` branch or inside `0xf0b08`), or the table at `0xf6d65` is
not the main command table. Reading `0xf6f19` to `0xf6f3d` again shows no other dispatch, so movement
being handled above the key read is the more likely reading.

## What is not established

- Which control code maps to which command. Needs a runtime keypress.
- What `+0xcde56` is. It appears in five routines and is not in the format string, so it is an internal
  field, not a persisted one.
- What `+0xcde7b` and `+0xcdebe` are, for the same reason.
- Whether all 39 are reached in a normal turn, or only some of them per location type.

---

**[The game loop](game-loop.md)** **[The call graph](call-graph.md)** **[Command dispatch](command-dispatch.md)**
