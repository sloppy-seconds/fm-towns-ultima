# Transport: one field, five values

The character record has a single field that says what the player is currently travelling in. It is at
record offset **`+0xcde56`**, and the game reads it in **twenty places** and writes it in six.

## The values

Measured by finding every `mov dword [edx+0xcde56], imm` in the image. Four values come from the
transport menu, and a fifth means "in a town".

| value | store site | what it is | string that identifies it |
|---|---|---|---|
| **1** | `0xf7840` | frigate | `Board a frigate` at `0xf77c8` |
| **2** | `0xf7795` | horse | `B)Mount a horse` at `0xf7772` |
| **3** | `0xf799d` | shuttle | `Board a shuttle` at `0xf7879` |
| **4** | `0xf78f1` | plane | `Board a plane` at `0xf7914` |
| **0xec** | `0xe2cb8`, `0xf8b29`, `0xf8b90`, `0xf8bed`, `0xf8c2b` | in a town | see below |

The four transport stores are in one cluster, `0xf77xx` to `0xf79xx`, and each is preceded by the same
record-index arithmetic (`[0xceca0]`, then `*351`). The menu strings sit immediately above each store.

`0xec` is **236**, and it is stored from five places rather than one, which is consistent with "entering
a town" being reachable several ways rather than being one function.

## The horse is bought, and buying it mounts it

The transport shop at `0xf5560` sells the horse. The sequence measured:

```
0xf5571  push 0x81b0    "Transport shop!"
0xf5584  push 0x81ec    "Welcome,to the transport shoppe... I sell you horse!"
0xf5599  call 0xf5644   ; the price, 136 gold in the observed transaction
0xf55a9  push 0x8280    " Gold,deal? Ok?"
0xf55b7  call 0xe2628   ; yes/no
0xf55c0  cmp bl, 0x59   ; 'Y'
0xf55c5  push 0x82bc    "I'm sorry!"          (declined)
0xf55e6  push 0x82f8    "I'm sorry, you don't have enough money"  (too poor)
0xf5605  push 0x8374    "Thank you! Ride swiftly!!"
0xf5618  call 0xe9010   ; the per-turn food charge
0xf562d  mov [edx+0xcde56], 2   ; MOUNTED
0xf5637  call 0xe2c18
```

So there is no separate "mount" step after buying: **the purchase sets the field to 2.** That matches
what was reported from play, that buying the horse mounted the player automatically.

The reported prices are 136 gold in one transaction and 5 gold in another for the barkeeper's item, and
both were observed as changes in the `GOLD` field rather than read from the code.

## The `Exit first!` gate

`0xf7711` compares the transport field against `0xec`:

```
0xf7711  cmp [edx+0xcde56], 0xec
0xf771b  je  0xf7741            ; in a town -> allow the Board menu
0xf771d  push "Board"
0xf7737  push "Exit first!"
```

So the Board menu is refused while the field is `0xec`, that is, while the player is in a town. That is a
measured rule with a measured constant.

## Two reported behaviours, and what is established

**Reported: buying the horse mounts you automatically.** Established. `0xf562d` sets the field to 2 as
part of the purchase, with no separate step.

**Reported: you can leave a town while riding, but cannot enter one while riding.** **Not established.**
The mechanism would be a place that checks for 2 on town entry and refuses, or that clears the field on
entering. Twenty comparisons against the field exist and `0xf8af5` and `0xe3946` test specifically for 2
(horse), but which of them runs at a town boundary has not been read. The claim is plausible and it is
recorded as unverified.

## What is not established

- which of the twenty comparisons runs at a town entrance
- whether entering a town sets `0xec` while a transport is active, or refuses instead, or both differ by
  transport kind
- the numeric value of every other constant. Only 1, 2, 3, 4 and `0xec` were found as stores
- whether `0xec` is really "in town" rather than a related state. It is inferred from the `Exit first!`
  test, which is strong but is one comparison

## Quest-item drops: the test that could not be run

Claimed from play: quest items drop from creatures. Three `BRASS_BUTTON` were reported after fighting on
the way to a town, and a separate claim was that `BLUE_TASSLE` comes from thieves.

**The mechanism to test it now exists.** `tools/peek.js` reads the quest-item dwords, derived from the
roster field order in `save-files.md` anchored at `HP` as field 18, so `offset = 0xcde81 + 4*(field-18)`.
Checked against live memory before use: `maxhp` read 400 and `era` read 2 at the computed addresses.

`BRASS_BUTTON` is field 56, so `0xcdf19`.

**The test was not completed, and the reason is worth recording.** By the time the field was read, the
character had died, and a death clears the record: every quest-item address returned `0xFFFFFFFF` fill.
The three brass buttons went with the character. The read showed `brass: 0` against a report of 3, and
neither reading is wrong: the record had been cleared between the kill and the measurement.

So the drop claim remains **unverified**, and the specific failure was ordering. The field should have
been read **immediately after the fight and before anything else happened**, which is the same lesson as
the lost moongate capture: an observation is only measurable while the state that produced it still
exists.

## A discovery from the death screen

A screenshot of the death screen read by `qwen3.8-flash-new` showed the combat log still visible:

> `Dagger. Direct? West Miss! Attacked! 34 points damaged!`

That named the combat message set, which is in the image:

| address | text |
|---|---|
| `0x04598` | `Miss!` |
| `0x067ec` | `Attack with` |
| `0x04070` | `Hit points:` |
| `0x04b88` | `Field causes damage!` |
| `0x01670` | `A)ttack  J)ump   S)teal ` |

So the attacks available to the player are `A)ttack`, `J)ump` and `S)teal`, and the log strings for a hit,
a miss and field damage are all present. None of them has been traced to its caller yet.

**[Inside a turn](inside-a-turn.md)** **[Movement and wrap](movement-and-wrap.md)** **[Plan](plan.md)**
