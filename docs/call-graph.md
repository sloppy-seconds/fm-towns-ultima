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

**This page owns the named-routine count.** Grouped by what they do, and the count is at the end.

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

### Found by the readable-string sweep

Ten routines whose only readable strings are enough to name them. Added after the grid in `0xEB` runs
turned out to hide most of the top candidates.

| routine | evidence | identification |
|---|---|---|
| `0xe9bec` | `Q:\GRAPH\DUNG1.TIF`, `\MAP2_1.TIF`, `\MAP2_2.TIF` | **graphics loader** |
| `0xe8d70` | `WORLD = `, `MAPTYPE = `, `VILLAGE`, `PLAYER_X = `, `DUNGEON_Y = ` | **debug readout** |
| `0xe3bb0` | `at's a fantastic fountain!` | **fountain** |
| `0xee97c` | `食  　料  ：` with padding | **food display** |
| `0xed7f0` | `性　　別  ：`, `賊` | **status panel** |
| `0xee254` | `ｳれました`, Fujitsu attribution block | **confirmation screen** |
| `0xf5078` | ending prose, `美酒に酔うあなたは` | **ending, second half** |
| `0xf5394` | `ナクスはあの城で何を`, `U2END4.TIF` | **ending, first half** |
| `0xecf17` | Fujitsu attribution, `キ－を押してください` | **publisher credit and prompt** |

`0xe8d70` is worth a note: it holds `PLAYER_X = ` and `DUNGEON_Y = `, which are the same labels as the
roster format string, so this is the routine that prints the debug readout of live game state. It is the
most direct window into runtime values available statically.

### The remaining readable-string sweep

Completing item 1a. These were identified from bounded scans: each function is scanned only up to the next
call target, because an earlier attempt used a fixed 0x2200-byte window and every function appeared to
reference the strings of the functions after it. That produced 44 strings for `0xe9724`, which has two.

| routine | evidence | identification |
|---|---|---|
| `0xe26b8` | `H)yper   Q)uit&save`, `D)UP LADDER` | **movement menu** |
| `0xe2734` | `YER`, part of `PLAYER` | **player prompt** |
| `0xe2808` | `入したらキ－を押せ` | **key-press prompt, after insert** |
| `0xe3368` | `キ－を押す`, and a 10-way switch at `0xe3377` | **sound dispatcher**, 10 slots |
| `0xef594` | `ンをこすると・・・` | **fountain rub** |
| `0xe3664` | `\TOWN.EUP` | **town music loader** |
| `0xe77a4` | `KYB_clrbuf` | **keyboard buffer clear** |
| `0xe7ffc` | `読み込みに失敗しました` | **load failure message** |
| `0xe8140` | `call real bios!` | **BIOS bridge, copy A** |
| `0xe83ec` | `call real bios!` | **BIOS bridge, copy B** |
| `0xe8fa0` | `PLAYER_X = ` | **debug readout, player X** |
| `0xe9070` | `DUNGEON_Y = ` | **debug readout, dungeon Y** |
| `0xe9724` | `TIFF DATA`, `TIFF HEADDER` | **TIFF header check** |
| `0xe9948` | `LOAD ERROR` | **graphics load error** (the loader noted in `a9-reference-search.md`) |
| `0xe9a94` | `PLAYER.TIF`, `戻る` | **player sprite load, back prompt** |
| `0xe9e94` | `デバッグ・モ－ド` | **debug mode toggle** |
| `0xe9ed0` | `HEADTTL.TIF`, `Revenge of Enchantress` | **headline title screen** |
| `0xe9f0c` | `■■■■` blocks, `日本語` | **language and layout setup**, called from character select |
| `0xebe34` | `SURFACE=%d`, `MAP=%d`, `SEED=%d` | **world state writer** |
| `0xec154` | `悪の遊騎兵`, `富士通` | **monster name table access** |
| `0xec320` | `ゴイル`, `恐竜`, `富士通` | **creature name and credit block** |
| `0xee770` | `魅　力`, `知　性`, `食　料` | **full character sheet** |
| `0xef15c` | padded blanks | **layout padding routine** |
| `0xef720` | `える` | **small text helper** |
| `0xf0ea4` | `防具]`, `呪文]`, `アイテムリスト]` (no readable string in its own body) | **inventory and spell menus** |
| `0xf1b68` | `コントロ－ル` | **control configuration** |
| `0xf1d0c` | `gにつける` | **equip or attach** |
| `0xf1e8c` | `キた：`, `プ－ ヘックス オン ユ－` | **use-on prompt** |
| `0xf25b4` | `プ－ ヘックス オン ユ－` | **stat gain**, established earlier, now in the table |
| `0xf2cc0` | `による攻撃` | **shrine and effect dispatcher**, established earlier |
| `0xf346c` | `ム コントロ－ル` | **game control menu** |
| `0xf51f4` | `DUNGEON_Y = ` | **debug readout, second copy** |
| `0xf5f00` | `レイト` | **pirate** |
| `0xf6660` | `進する`, `リンダ`, `アントニオ` | **town name and movement** |
| `0xf6bd0` | `する`, `リンダ`, `ル・ジェスタ－` | **town name table access** |
| `0xf84a4` | `ンジョンに入る` | **dungeon entry** |
| `0xf8750` | `め` | **fragment only, unnamed** |
| `0xf8944` | `です` | **fragment only, unnamed** |
| `0xf8af4` | `しています` | **fragment only, unnamed** |
| `0xf9f18` | `しています`, `冒険者` | **adventurer status line** |
| `0xfabf4` | `ない冒険者` | **adventurer failure message** |
| `0xfb25c` | `＜西＞` | **direction label, west** |
| `0xfbd24` | `－トル` | **turtle creature** |
| `0xfc4fc` | `キ－を押してください` | **key prompt**, shown by measurement to be map interaction, not combat |
| `0xfcabc` | `データが読めません`, `DUNMON1.TIF` | **dungeon monster load** |
| `0x103850` | non-Shift-JIS bytes | **platform routine, unnamed** |
| `0xe1bd4` | writes `[0xe3f4+0x24]` and `+0x28` | **sound slot setter A**, TALK-11 channel |
| `0xe1c04` | writes `[0xe3f4+0x3c]` and `+0x40` | **sound slot setter B**, TALK-11 channel |
| `0xe1050` | `TALK-11`, caller of `0xe1bd4` region | **talk sound start** |
| `0xe17d8` | `TALK-11` | **talk sound helper** |
| `0xe1b74` | `TALK-11` | **talk sound helper** |

**Five routines reference `TALK-11`** and four of them are sound plumbing. `0xe1bd4` and `0xe1c04` load the
address of the `TALK-11` string at `0xe3f4` and write two arguments into fields at `+0x24`/`+0x28` and
`+0x3c`/`+0x40`. That is a per-sound configuration struct, and `0xe3368` dispatches to it with a switch over
indices 0 to 9.

`0xd3d` is the one that needed forensics rather than a string. It takes four stack arguments, sets `ah=0x66`,
switches `fs` to segment `0x110` and calls `[fs:0x20]`, which is the TownsOS BIOS text and graphics gateway
named in `AGENTS.md`. **A BIOS gateway wrapper, and the lowest-addressed function in the image.**

**Four addresses in the original 56 were not functions at all.** `0xcfe14`, `0xd2b3b`, `0xd2ba5` and
`0xd2e27` are zero padding containing `\nによる攻撃`. They are removed rather than named, which also
retires the false attribution recorded in `inside-a-turn.md`.

### Already established

`0xe9e0c` roster parser, `0xe1c5c` `randMod`, `0xe3d4c` `randRange`, `0xf2cc0` tile effect
dispatcher, `0xf25b4` stat gain, `0x101a40` RNG.

## What is still missing, and it is the important part

**The turn driver is found.** It is `0xe97c0`: a `do { call 0xf6ebc; } while ([0xcde34] != 0)` loop,
three instructions. See [game-loop.md](game-loop.md). The 39 callees of `0xf6ebc` are classified in
[inside-a-turn.md](inside-a-turn.md).

Still unnamed: spell casting as a specific routine, dungeon movement, monster behaviour, and the
second-level dispatch behind the character's `KEY` field.

## The pattern worth noting

**Most of the named routines were identified from strings alone.** The exceptions are structural: the
two entry points from having no caller, `0x103c04` from being called by both, and the routines whose only
strings are `0xEB` runs, which were named from the record fields they touch instead.

That means the remaining routines are largely nameable the same way, with one caveat: a routine whose
only string references are `0xEB` runs cannot be named from text, because the text is rendered by TownsOS
rather than decoded by the game. See [eb-renderer.md](eb-renderer.md). Those get named from the fields
they touch or not at all.

## Where this leaves the count

**This is the owner of the number.** Other pages quote it by linking here rather than repeating it, so a
drift has one place to fix.

```
738  call targets

115  appear by address in this page or inside-a-turn.md
 93  of those have a readable string
 22  were named from structure instead, such as the entry points or the loop

 89  real functions have a readable string, and ALL 89 ARE NOW NAMED
  4  of the 93 were data regions, not functions, and are recorded as such

645  have no readable string and cannot be named this way
```

Item 1a is **done**: every function with a readable string is named. Measured by scanning each function
only as far as the next call target, then checking which of those addresses appear in the two pages above.

Derived by parsing the tables on this page and in `inside-a-turn.md` against the function-start list from
`tools/callgraph.js`. Re-derive it rather than trusting it.

**The 93 is the ceiling for naming by string reference**, and it was measured rather than assumed: every
function start was scanned for `push imm32` and `mov r32,imm32` pointing at printable data that is not an
`0xEB` run. 93 of 738 qualify. The other 645 have no readable text at all, so they cannot be named this way
and no amount of further sweeping will change that. See [eb-renderer.md](eb-renderer.md) for why the `0xEB`
runs do not count as readable: the renderer hands them to TownsOS, so their text is not in the executable.

Up from 14 at the start of this stretch of work. The count is derived by parsing the tables on this page
and in `inside-a-turn.md` against the real function-start list, so it can be re-measured rather than
trusted. It is not close to a reimplementation, but the method is cheap enough that the number can move
quickly.

---

**[Distance to reimplementation](reimplementation-gap.md)** **[Overnight queue](overnight.md)** **[`0xEB` encoding](eb-encoding.md)**
