# The call graph, and the named skeleton

The end goal is reimplementation. A reimplementation needs a skeleton: which routine drives a turn,
which handles combat, which enters a town. This page is that skeleton, as far as it is established.

Produced by `tools/callgraph.js` and `tools/fnstrings.js`. Both are committed and both are quick.

## The shape of the game

```
image            1,072,366 bytes
function starts    738
call sites       5,435
self recursion      16
distinct edges   2,476
routines with no caller:  2
```

**Two routines have no caller: `0x101bdc` and `0x1052c8`.** Everything in the game is reachable from
them, so they are the entry points. Both call `0x103c04`, which is therefore shared start-up. That is
exact arithmetic on call instructions, not an inference.

## How a routine gets named

Scan the body for `push imm32` and `mov r32,imm32` whose operand points at printable data. **The
strings name the routine.** `tools/fnstrings.js` does this, bounded by the next function start from the
call graph so a scan cannot attribute a neighbour's strings.

This took most identifications from minutes to seconds, and it is the single most useful tool added
this session.

## Named routines

Twenty-two of 738. Grouped by what they do.

### Entry and start-up

| routine | evidence | identification |
|---|---|---|
| `0x101bdc` | no caller | entry point A |
| `0x1052c8` | no caller | entry point B |
| `0x103c04` | called by both entries | shared start-up |
| `0xe1974` | `Can't call real bios!`, error text | **BIOS bridge / error handler** |

### World and movement

| routine | evidence | identification |
|---|---|---|
| `0xf6ebc` | 39 callees, references `ト・ボニフィス`, `ピタ－・ビレッジ`, `スタ－`, `・キャンプ` | **location dispatch** (Port Boniface, Pita Village, Star, Camp) |
| `0xf6c78` | references `リンダ`, `・アントニオ`, `マクラ－`, `バスコ` | **town name table** (Linda, New San Antonio, Towne Makler, Towne Basko) |
| `0xf38b4` | `航速度で航行中です`, `操縦装置に座標を入れよ` | **ship and sailing** |
| `0xf7bd8` | `シャトルに乗る` | **shuttle** |
| `0xf0fcc` | `防具]`, `呪文]`, `アイテムリスト]` | **menu panels** |

### Combat

| routine | evidence | identification |
|---|---|---|
| `0xcfe14` | `\nによる攻撃` | **attack message** |

### Character and inventory

| routine | evidence | identification |
|---|---|---|
| `0xebb70` | `GREEN_GEM=%d\n`, `BRASS_BUTTON=%d\n` | **roster writer** |
| `0xebefc` | `SURFACE=%d\n`, `MAP=%d\n`, `SEED=%d\n`, `GATE_TIME=%d\n` | **world file writer** |
| `0xeb354` | `WORLD1.UT2`..`WORLD4.UT2`, `FILE DATA` | **save / load** |
| `0xf0fcc` | see menu panels | shop and inventory lists |
| `0xf5a1c` | `食 料 品` with yen signs, `魔術店` | **shop screen** |
| `0xedf18` | `性　　別  ：`, `－登録されました`, `を押してください` | **character creation** |
| `0xf55ac` | `が言った：`, `占い師` | **fortune teller** |

### Text and dialogue

| routine | evidence | identification |
|---|---|---|
| `0xe6e90` | established earlier | **text renderer**, decides Shift-JIS width |
| `0xfd32c` | `アントス卿がお待ちになっています` | **NPC dialogue script** |
| `0xf18a4` | `は言った：` | **speech attribution** |
| `0xf02c8` | `ヤ－の状態を見る`, Fujitsu attribution | **status display** |
| `0xf4b24` | ending prose, 30 calls to the renderer | **ending sequence** |

### Sound and art

| routine | evidence | identification |
|---|---|---|
| `0xe22d4` | `E.SND`, `IC3.SND`, `\MONSTER1.SND`, `\DOOR3.SND` | **sound loader** |
| `0xeafc4` | `\U2TITLE3.TIF`, `Q:\GRAPH\U2TITLE4.TIF` | **title art loader** |
| `0xe3f08` | `Dark field`, `YASURAGI`, `Voyger`, `演奏テスト` | **music playback** |

### Already established

`0xe9e0c` roster parser, `0xe1c5c` `randMod`, `0xe3d4c` `randRange`, `0xf2cc0` tile effect
dispatcher, `0xf25b4` stat gain, `0x101a40` RNG.

## What is still missing, and it is the important part

**The turn driver is not identified.** It will be the routine that calls movement, combat and rendering
from one body. Candidates worth reading next, by fan-out: `0xebefc` (31 callees), `0xf0c60` (26),
`0xfe4a8` (26), `0xed7f0` (24), `0xe97c0` (23), `0xee770` (21), `0xf4b24` (21), `0xfb08c` (21).

Also unnamed: spell casting, dungeon movement, monster behaviour, the main loop itself.

## The pattern worth noting

**19 of the 22 named routines were identified from strings alone.** The three exceptions are structural:
the two entry points from having no caller, and `0x103c04` from being called by both.

That means the remaining 700 routines are mostly nameable the same way, and the ones that are not
named yet are the ones whose strings are `0xEB` runs. See [eb-encoding.md](eb-encoding.md): the runs are
a private double-byte character set, so those routines stay unnamed until the set is understood or a
savestate is taken.

## Where this leaves the count

```
738  routines
 22  named
716  unnamed
```

That is up from 14 named before this session. It is not close to a reimplementation, but the method is
now cheap enough that the number can move quickly.

---

**[Distance to reimplementation](reimplementation-gap.md)** **[Overnight queue](overnight.md)** **[`0xEB` encoding](eb-encoding.md)**
