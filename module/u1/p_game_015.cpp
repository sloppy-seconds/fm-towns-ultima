#include "p_game_funcs.h"
namespace p_game {
void f_000da160(X86Cpu& c) {
    X86_TICK(c, 29);
    // 0da160  push ebp
    X86_AT(c, 0xda160u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0da161  mov ebp, esp
    X86_AT(c, 0xda161u);
    c.r[5] = c.r[4];
    // 0da163  sub esp, 0x23c
    X86_AT(c, 0xda163u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x23Cu, 0, 4); }
    // 0da169  push ebx
    X86_AT(c, 0xda169u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0da16a  push esi
    X86_AT(c, 0xda16au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0da16b  push edi
    X86_AT(c, 0xda16bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0da16c  push 0x17
    X86_AT(c, 0xda16cu);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0da16e  push 0x4d
    X86_AT(c, 0xda16eu);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0da170  push 3
    X86_AT(c, 0xda170u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0da172  push 0
    X86_AT(c, 0xda172u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0da174  push 4
    X86_AT(c, 0xda174u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da176  call 0xcab04
    X86_AT(c, 0xda176u);
    push32(c, 0xda17bu); x86_call_known(c, 0xcab04u, f_000cab04); X86_RET(c, 0xda17bu);
    X86_TICK(c, 11);
    // 0da17b  push 3
    X86_AT(c, 0xda17bu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0da17d  push 2
    X86_AT(c, 0xda17du);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0da17f  call 0xcc814
    X86_AT(c, 0xda17fu);
    push32(c, 0xda184u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda184u);
    X86_TICK(c, 11);
    // 0da184  push 0xe
    X86_AT(c, 0xda184u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0da186  push 4
    X86_AT(c, 0xda186u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da188  call 0xcac40
    X86_AT(c, 0xda188u);
    push32(c, 0xda18du); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xda18du);
    X86_TICK(c, 9);
    // 0da18d  push 4
    X86_AT(c, 0xda18du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da18f  call 0xca0a0
    X86_AT(c, 0xda18fu);
    push32(c, 0xda194u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xda194u);
    X86_TICK(c, 11);
    // 0da194  push 0xbab8
    X86_AT(c, 0xda194u);
    { uint32_t v = 0xBAB8u; push32(c, v); }
    // 0da199  push 4
    X86_AT(c, 0xda199u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da19b  call 0xc8cdc
    X86_AT(c, 0xda19bu);
    push32(c, 0xda1a0u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda1a0u);
    X86_TICK(c, 11);
    // 0da1a0  push 0xb
    X86_AT(c, 0xda1a0u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0da1a2  push 4
    X86_AT(c, 0xda1a2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da1a4  call 0xcac40
    X86_AT(c, 0xda1a4u);
    push32(c, 0xda1a9u); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xda1a9u);
    X86_TICK(c, 9);
    // 0da1a9  push 4
    X86_AT(c, 0xda1a9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da1ab  call 0xca0a0
    X86_AT(c, 0xda1abu);
    push32(c, 0xda1b0u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xda1b0u);
    X86_TICK(c, 13);
    // 0da1b0  add esp, 0x3c
    X86_AT(c, 0xda1b0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0da1b3  push 4
    X86_AT(c, 0xda1b3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da1b5  push 0x12
    X86_AT(c, 0xda1b5u);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0da1b7  call 0xcc814
    X86_AT(c, 0xda1b7u);
    push32(c, 0xda1bcu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda1bcu);
    X86_TICK(c, 11);
    // 0da1bc  push 0xbae0
    X86_AT(c, 0xda1bcu);
    { uint32_t v = 0xBAE0u; push32(c, v); }
    // 0da1c1  push 4
    X86_AT(c, 0xda1c1u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da1c3  call 0xc8cdc
    X86_AT(c, 0xda1c3u);
    push32(c, 0xda1c8u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda1c8u);
    X86_TICK(c, 9);
    // 0da1c8  push 0x14
    X86_AT(c, 0xda1c8u);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0da1ca  call 0xd6660
    X86_AT(c, 0xda1cau);
    push32(c, 0xda1cfu); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xda1cfu);
    X86_TICK(c, 27);
    // 0da1cf  lea eax, [ebp - 0x230]
    X86_AT(c, 0xda1cfu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFDD0u);
    // 0da1d5  push eax
    X86_AT(c, 0xda1d5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0da1d6  push 6
    X86_AT(c, 0xda1d6u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0da1d8  push 8
    X86_AT(c, 0xda1d8u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0da1da  push 1
    X86_AT(c, 0xda1dau);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0da1dc  push 0x1c
    X86_AT(c, 0xda1dcu);
    { uint32_t v = 0x1Cu; push32(c, v); }
    // 0da1de  push 4
    X86_AT(c, 0xda1deu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da1e0  push 4
    X86_AT(c, 0xda1e0u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da1e2  lea eax, [ebp - 0x20]
    X86_AT(c, 0xda1e2u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFE0u);
    // 0da1e5  push eax
    X86_AT(c, 0xda1e5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0da1e6  call 0xc8750
    X86_AT(c, 0xda1e6u);
    push32(c, 0xda1ebu); x86_call_known(c, 0xc8750u, f_000c8750); X86_RET(c, 0xda1ebu);
    X86_TICK(c, 4);
    // 0da1eb  sub edi, edi
    X86_AT(c, 0xda1ebu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0da1ed  add esp, 0x34
    X86_AT(c, 0xda1edu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
L_da1f0:
    X86_TICK(c, 7);
    // 0da1f0  cmp edi, 4
    X86_AT(c, 0xda1f0u);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0da1f3  jge 0xda262
    X86_AT(c, 0xda1f3u);
    if (x86_cc(c, 13)) { goto L_da262; }
    X86_TICK(c, 15);
    // 0da1f5  lea eax, [edi + 6]
    X86_AT(c, 0xda1f5u);
    c.r[0] = (uint32_t)(c.r[7] + 0x6u);
    // 0da1f8  push eax
    X86_AT(c, 0xda1f8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0da1f9  push 1
    X86_AT(c, 0xda1f9u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0da1fb  mov dword ptr [ebp - 0x238], eax
    X86_AT(c, 0xda1fbu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFDC8u)), c.r[0]);
    // 0da201  call 0xcc814
    X86_AT(c, 0xda201u);
    push32(c, 0xda206u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda206u);
    X86_TICK(c, 17);
    // 0da206  push 2
    X86_AT(c, 0xda206u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0da208  lea eax, [edi + 1]
    X86_AT(c, 0xda208u);
    c.r[0] = (uint32_t)(c.r[7] + 0x1u);
    // 0da20b  push eax
    X86_AT(c, 0xda20bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0da20c  push 4
    X86_AT(c, 0xda20cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da20e  mov dword ptr [ebp - 0x23c], eax
    X86_AT(c, 0xda20eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFDC4u)), c.r[0]);
    // 0da214  call 0xc8cb8
    X86_AT(c, 0xda214u);
    push32(c, 0xda219u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xda219u);
    X86_TICK(c, 14);
    // 0da219  push dword ptr [ebp - 0x238]
    X86_AT(c, 0xda219u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFDC8u))); push32(c, v); }
    // 0da21f  push 8
    X86_AT(c, 0xda21fu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0da221  call 0xcc814
    X86_AT(c, 0xda221u);
    push32(c, 0xda226u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda226u);
    X86_TICK(c, 11);
    // 0da226  push 0xbb2a
    X86_AT(c, 0xda226u);
    { uint32_t v = 0xBB2Au; push32(c, v); }
    // 0da22b  push 4
    X86_AT(c, 0xda22bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da22d  call 0xca414
    X86_AT(c, 0xda22du);
    push32(c, 0xda232u); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xda232u);
    X86_TICK(c, 51);
    // 0da232  lea eax, [edi + 0x41]
    X86_AT(c, 0xda232u);
    c.r[0] = (uint32_t)(c.r[7] + 0x41u);
    // 0da235  push eax
    X86_AT(c, 0xda235u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0da236  imul eax, edi, 0x21a
    X86_AT(c, 0xda236u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0da23c  lea edx, [eax*1 + 0xb0508]
    X86_AT(c, 0xda23cu);
    c.r[2] = (uint32_t)(c.r[0] + 0xB0508u);
    // 0da243  push edx
    X86_AT(c, 0xda243u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0da244  push edx
    X86_AT(c, 0xda244u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0da245  mov eax, edi
    X86_AT(c, 0xda245u);
    c.r[0] = c.r[7];
    // 0da247  add al, 0x41
    X86_AT(c, 0xda247u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x41u, 0, 1)); }
    // 0da249  push eax
    X86_AT(c, 0xda249u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0da24a  push edi
    X86_AT(c, 0xda24au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0da24b  lea eax, [ebp - 0x230]
    X86_AT(c, 0xda24bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFDD0u);
    // 0da251  push eax
    X86_AT(c, 0xda251u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0da252  call 0xc878c
    X86_AT(c, 0xda252u);
    push32(c, 0xda257u); x86_call_known(c, 0xc878cu, f_000c878c); X86_RET(c, 0xda257u);
    X86_TICK(c, 13);
    // 0da257  add esp, 0x3c
    X86_AT(c, 0xda257u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0da25a  mov edi, dword ptr [ebp - 0x23c]
    X86_AT(c, 0xda25au);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFDC4u)));
    // 0da260  jmp 0xda1f0
    X86_AT(c, 0xda260u);
    X86_POLL(c, 0xda1f0u); goto L_da1f0;
L_da262:
    X86_TICK(c, 9);
    // 0da262  push 4
    X86_AT(c, 0xda262u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da264  call 0xca0a0
    X86_AT(c, 0xda264u);
    push32(c, 0xda269u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xda269u);
    X86_TICK(c, 11);
    // 0da269  push 3
    X86_AT(c, 0xda269u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0da26b  push 0x18
    X86_AT(c, 0xda26bu);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0da26d  call 0xcc814
    X86_AT(c, 0xda26du);
    push32(c, 0xda272u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda272u);
    X86_TICK(c, 11);
    // 0da272  push 0xbb30
    X86_AT(c, 0xda272u);
    { uint32_t v = 0xBB30u; push32(c, v); }
    // 0da277  push 4
    X86_AT(c, 0xda277u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da279  call 0xc8cdc
    X86_AT(c, 0xda279u);
    push32(c, 0xda27eu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda27eu);
    X86_TICK(c, 11);
    // 0da27e  push 4
    X86_AT(c, 0xda27eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da280  push 0x12
    X86_AT(c, 0xda280u);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0da282  call 0xcc814
    X86_AT(c, 0xda282u);
    push32(c, 0xda287u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda287u);
    X86_TICK(c, 11);
    // 0da287  push 0xbb6c
    X86_AT(c, 0xda287u);
    { uint32_t v = 0xBB6Cu; push32(c, v); }
    // 0da28c  push 4
    X86_AT(c, 0xda28cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da28e  call 0xc8cdc
    X86_AT(c, 0xda28eu);
    push32(c, 0xda293u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda293u);
    X86_TICK(c, 15);
    // 0da293  push 1
    X86_AT(c, 0xda293u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0da295  lea eax, [ebp - 0x20]
    X86_AT(c, 0xda295u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFE0u);
    // 0da298  push eax
    X86_AT(c, 0xda298u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0da299  push 4
    X86_AT(c, 0xda299u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da29b  call 0xc8bc4
    X86_AT(c, 0xda29bu);
    push32(c, 0xda2a0u); x86_call_known(c, 0xc8bc4u, f_000c8bc4); X86_RET(c, 0xda2a0u);
    X86_TICK(c, 11);
    // 0da2a0  mov byte ptr [ebp - 0x231], al
    X86_AT(c, 0xda2a0u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFDCFu)), g8(c, 0));
    // 0da2a6  add esp, 0x30
    X86_AT(c, 0xda2a6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0da2a9  dec al
    X86_AT(c, 0xda2a9u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0da2ab  jne 0xda302
    X86_AT(c, 0xda2abu);
    if (x86_cc(c, 5)) { goto L_da302; }
    X86_TICK(c, 11);
    // 0da2ad  push 4
    X86_AT(c, 0xda2adu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da2af  push 0x12
    X86_AT(c, 0xda2afu);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0da2b1  call 0xcc814
    X86_AT(c, 0xda2b1u);
    push32(c, 0xda2b6u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda2b6u);
    X86_TICK(c, 11);
    // 0da2b6  push 0xbbe0
    X86_AT(c, 0xda2b6u);
    { uint32_t v = 0xBBE0u; push32(c, v); }
    // 0da2bb  push 4
    X86_AT(c, 0xda2bbu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da2bd  call 0xc8cdc
    X86_AT(c, 0xda2bdu);
    push32(c, 0xda2c2u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda2c2u);
    X86_TICK(c, 9);
    // 0da2c2  push 0xbc54
    X86_AT(c, 0xda2c2u);
    { uint32_t v = 0xBC54u; push32(c, v); }
    // 0da2c7  call 0xcad60
    X86_AT(c, 0xda2c7u);
    push32(c, 0xda2ccu); x86_call_known(c, 0xcad60u, f_000cad60); X86_RET(c, 0xda2ccu);
    X86_TICK(c, 2);
    // 0da2cc  add esp, 0x14
    X86_AT(c, 0xda2ccu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_da2cf:
    X86_TICK(c, 9);
    // 0da2cf  push 4
    X86_AT(c, 0xda2cfu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da2d1  call 0xc81e4
    X86_AT(c, 0xda2d1u);
    push32(c, 0xda2d6u); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xda2d6u);
    X86_TICK(c, 9);
    // 0da2d6  add esp, 4
    X86_AT(c, 0xda2d6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0da2d9  and al, al
    X86_AT(c, 0xda2d9u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0da2db  je 0xda2cf
    X86_AT(c, 0xda2dbu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xda2cfu); goto L_da2cf; }
    X86_TICK(c, 9);
    // 0da2dd  push 2
    X86_AT(c, 0xda2ddu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0da2df  call 0xca3cc
    X86_AT(c, 0xda2dfu);
    push32(c, 0xda2e4u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xda2e4u);
    X86_TICK(c, 9);
    // 0da2e4  push 4
    X86_AT(c, 0xda2e4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da2e6  call 0xca0a0
    X86_AT(c, 0xda2e6u);
    push32(c, 0xda2ebu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xda2ebu);
    X86_TICK(c, 17);
    // 0da2eb  push 0x17
    X86_AT(c, 0xda2ebu);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0da2ed  push 0x4d
    X86_AT(c, 0xda2edu);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0da2ef  push 3
    X86_AT(c, 0xda2efu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0da2f1  push 0
    X86_AT(c, 0xda2f1u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0da2f3  push 4
    X86_AT(c, 0xda2f3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da2f5  call 0xcab04
    X86_AT(c, 0xda2f5u);
    push32(c, 0xda2fau); x86_call_known(c, 0xcab04u, f_000cab04); X86_RET(c, 0xda2fau);
    X86_TICK(c, 9);
    // 0da2fa  add esp, 0x1c
    X86_AT(c, 0xda2fau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0da2fd  jmp 0xda4ab
    X86_AT(c, 0xda2fdu);
    goto L_da4ab;
L_da302:
    X86_TICK(c, 11);
    // 0da302  mov al, byte ptr [ebp - 0x231]
    X86_AT(c, 0xda302u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFDCFu))));
    // 0da308  cmp al, 0x41
    X86_AT(c, 0xda308u);
    (void)x86_sub(c, g8(c, 0), 0x41u, 0, 1);
    // 0da30a  jb 0xda262
    X86_AT(c, 0xda30au);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xda262u); goto L_da262; }
    X86_TICK(c, 47);
    // 0da310  sub byte ptr [ebp - 0x231], 0x41
    X86_AT(c, 0xda310u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFDCFu)); uint32_t v = rd8(ea); wr8(ea, x86_sub(c, v, 0x41u, 0, 1)); }
    // 0da317  movzx eax, byte ptr [ebp - 0x231]
    X86_AT(c, 0xda317u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFDCFu)));
    // 0da31e  imul eax, eax, 0x21a
    X86_AT(c, 0xda31eu);
    c.r[0] = x86_imul2(c, c.r[0], 0x21Au, 4);
    // 0da324  cmp byte ptr [eax + 0xb0508], 0
    X86_AT(c, 0xda324u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0508u))), 0x0u, 0, 1);
    // 0da32b  jne 0xda362
    X86_AT(c, 0xda32bu);
    if (x86_cc(c, 5)) { goto L_da362; }
    X86_TICK(c, 11);
    // 0da32d  push 3
    X86_AT(c, 0xda32du);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0da32f  push 0x1f
    X86_AT(c, 0xda32fu);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0da331  call 0xcc814
    X86_AT(c, 0xda331u);
    push32(c, 0xda336u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda336u);
    X86_TICK(c, 11);
    // 0da336  push 0xbc88
    X86_AT(c, 0xda336u);
    { uint32_t v = 0xBC88u; push32(c, v); }
    // 0da33b  push 4
    X86_AT(c, 0xda33bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da33d  call 0xc8cdc
    X86_AT(c, 0xda33du);
    push32(c, 0xda342u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda342u);
    X86_TICK(c, 9);
    // 0da342  push 0xbcd4
    X86_AT(c, 0xda342u);
    { uint32_t v = 0xBCD4u; push32(c, v); }
    // 0da347  call 0xcad60
    X86_AT(c, 0xda347u);
    push32(c, 0xda34cu); x86_call_known(c, 0xcad60u, f_000cad60); X86_RET(c, 0xda34cu);
    X86_TICK(c, 2);
    // 0da34c  add esp, 0x14
    X86_AT(c, 0xda34cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_da34f:
    X86_TICK(c, 9);
    // 0da34f  push 4
    X86_AT(c, 0xda34fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da351  call 0xc81e4
    X86_AT(c, 0xda351u);
    push32(c, 0xda356u); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xda356u);
    X86_TICK(c, 9);
    // 0da356  add esp, 4
    X86_AT(c, 0xda356u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0da359  and al, al
    X86_AT(c, 0xda359u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0da35b  je 0xda34f
    X86_AT(c, 0xda35bu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xda34fu); goto L_da34f; }
    X86_TICK(c, 7);
    // 0da35d  jmp 0xda495
    X86_AT(c, 0xda35du);
    goto L_da495;
L_da362:
    X86_TICK(c, 11);
    // 0da362  push 3
    X86_AT(c, 0xda362u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0da364  push 0x18
    X86_AT(c, 0xda364u);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0da366  call 0xcc814
    X86_AT(c, 0xda366u);
    push32(c, 0xda36bu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda36bu);
    X86_TICK(c, 41);
    // 0da36b  movzx eax, byte ptr [ebp - 0x231]
    X86_AT(c, 0xda36bu);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFDCFu)));
    // 0da372  imul eax, eax, 0x21a
    X86_AT(c, 0xda372u);
    c.r[0] = x86_imul2(c, c.r[0], 0x21Au, 4);
    // 0da378  lea edx, [eax*1 + 0xb0508]
    X86_AT(c, 0xda378u);
    c.r[2] = (uint32_t)(c.r[0] + 0xB0508u);
    // 0da37f  push edx
    X86_AT(c, 0xda37fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0da380  push 4
    X86_AT(c, 0xda380u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da382  call 0xca850
    X86_AT(c, 0xda382u);
    push32(c, 0xda387u); x86_call_known(c, 0xca850u, f_000ca850); X86_RET(c, 0xda387u);
    X86_TICK(c, 11);
    // 0da387  push 4
    X86_AT(c, 0xda387u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da389  push 0x12
    X86_AT(c, 0xda389u);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0da38b  call 0xcc814
    X86_AT(c, 0xda38bu);
    push32(c, 0xda390u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda390u);
    X86_TICK(c, 11);
    // 0da390  push 0xbd08
    X86_AT(c, 0xda390u);
    { uint32_t v = 0xBD08u; push32(c, v); }
    // 0da395  push 4
    X86_AT(c, 0xda395u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da397  call 0xc8cdc
    X86_AT(c, 0xda397u);
    push32(c, 0xda39cu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda39cu);
    X86_TICK(c, 9);
    // 0da39c  push 0xbd5c
    X86_AT(c, 0xda39cu);
    { uint32_t v = 0xBD5Cu; push32(c, v); }
    // 0da3a1  call 0xcad60
    X86_AT(c, 0xda3a1u);
    push32(c, 0xda3a6u); x86_call_known(c, 0xcad60u, f_000cad60); X86_RET(c, 0xda3a6u);
    X86_TICK(c, 2);
    // 0da3a6  add esp, 0x24
    X86_AT(c, 0xda3a6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
L_da3a9:
    X86_TICK(c, 9);
    // 0da3a9  push 4
    X86_AT(c, 0xda3a9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da3ab  call 0xc81e4
    X86_AT(c, 0xda3abu);
    push32(c, 0xda3b0u); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xda3b0u);
    X86_TICK(c, 12);
    // 0da3b0  xchg ebx, eax
    X86_AT(c, 0xda3b0u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0da3b1  add esp, 4
    X86_AT(c, 0xda3b1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0da3b4  cmp bl, 0x59
    X86_AT(c, 0xda3b4u);
    (void)x86_sub(c, g8(c, 3), 0x59u, 0, 1);
    // 0da3b7  je 0xda3c3
    X86_AT(c, 0xda3b7u);
    if (x86_cc(c, 4)) { goto L_da3c3; }
    X86_TICK(c, 7);
    // 0da3b9  cmp bl, 0x4e
    X86_AT(c, 0xda3b9u);
    (void)x86_sub(c, g8(c, 3), 0x4Eu, 0, 1);
    // 0da3bc  je 0xda3c3
    X86_AT(c, 0xda3bcu);
    if (x86_cc(c, 4)) { goto L_da3c3; }
    X86_TICK(c, 7);
    // 0da3be  cmp bl, 1
    X86_AT(c, 0xda3beu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0da3c1  jne 0xda3a9
    X86_AT(c, 0xda3c1u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xda3a9u); goto L_da3a9; }
L_da3c3:
    X86_TICK(c, 9);
    // 0da3c3  push 2
    X86_AT(c, 0xda3c3u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0da3c5  call 0xca3cc
    X86_AT(c, 0xda3c5u);
    push32(c, 0xda3cau); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xda3cau);
    X86_TICK(c, 9);
    // 0da3ca  push 4
    X86_AT(c, 0xda3cau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da3cc  call 0xca0a0
    X86_AT(c, 0xda3ccu);
    push32(c, 0xda3d1u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xda3d1u);
    X86_TICK(c, 9);
    // 0da3d1  add esp, 8
    X86_AT(c, 0xda3d1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0da3d4  cmp bl, 0x59
    X86_AT(c, 0xda3d4u);
    (void)x86_sub(c, g8(c, 3), 0x59u, 0, 1);
    // 0da3d7  jne 0xda262
    X86_AT(c, 0xda3d7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xda262u); goto L_da262; }
L_da3dd:
    X86_TICK(c, 9);
    // 0da3dd  push 0
    X86_AT(c, 0xda3ddu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0da3df  call 0xc6210
    X86_AT(c, 0xda3dfu);
    push32(c, 0xda3e4u); x86_call_known(c, 0xc6210u, f_000c6210); X86_RET(c, 0xda3e4u);
    X86_TICK(c, 12);
    // 0da3e4  xchg esi, eax
    X86_AT(c, 0xda3e4u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0da3e5  push 4
    X86_AT(c, 0xda3e5u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da3e7  call 0xca0a0
    X86_AT(c, 0xda3e7u);
    push32(c, 0xda3ecu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xda3ecu);
    X86_TICK(c, 9);
    // 0da3ec  add esp, 8
    X86_AT(c, 0xda3ecu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0da3ef  cmp esi, 0xffffffff
    X86_AT(c, 0xda3efu);
    (void)x86_sub(c, c.r[6], 0xFFFFFFFFu, 0, 4);
    // 0da3f2  je 0xda3fd
    X86_AT(c, 0xda3f2u);
    if (x86_cc(c, 4)) { goto L_da3fd; }
    X86_TICK(c, 7);
    // 0da3f4  and esi, esi
    X86_AT(c, 0xda3f4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0da3f6  je 0xda3fd
    X86_AT(c, 0xda3f6u);
    if (x86_cc(c, 4)) { goto L_da3fd; }
    X86_TICK(c, 7);
    // 0da3f8  cmp esi, 1
    X86_AT(c, 0xda3f8u);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 0da3fb  jne 0xda3dd
    X86_AT(c, 0xda3fbu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xda3ddu); goto L_da3dd; }
L_da3fd:
    X86_TICK(c, 7);
    // 0da3fd  and esi, esi
    X86_AT(c, 0xda3fdu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0da3ff  jne 0xda262
    X86_AT(c, 0xda3ffu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xda262u); goto L_da262; }
    X86_TICK(c, 39);
    // 0da405  movzx edi, byte ptr [ebp - 0x231]
    X86_AT(c, 0xda405u);
    c.r[7] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFDCFu)));
    // 0da40c  imul eax, edi, 0x21a
    X86_AT(c, 0xda40cu);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0da412  mov byte ptr [eax + 0xb0508], 0
    X86_AT(c, 0xda412u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0508u)), 0x0u);
    // 0da419  mov dword ptr [ebp - 0x238], eax
    X86_AT(c, 0xda419u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFDC8u)), c.r[0]);
    // 0da41f  call 0xd79c8
    X86_AT(c, 0xda41fu);
    push32(c, 0xda424u); x86_call_known(c, 0xd79c8u, f_000d79c8); X86_RET(c, 0xda424u);
    X86_TICK(c, 33);
    // 0da424  lea eax, [edi + 0x41]
    X86_AT(c, 0xda424u);
    c.r[0] = (uint32_t)(c.r[7] + 0x41u);
    // 0da427  push eax
    X86_AT(c, 0xda427u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0da428  mov eax, dword ptr [ebp - 0x238]
    X86_AT(c, 0xda428u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFDC8u)));
    // 0da42e  lea edx, [eax*1 + 0xb0508]
    X86_AT(c, 0xda42eu);
    c.r[2] = (uint32_t)(c.r[0] + 0xB0508u);
    // 0da435  push edx
    X86_AT(c, 0xda435u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0da436  push edx
    X86_AT(c, 0xda436u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0da437  mov eax, edi
    X86_AT(c, 0xda437u);
    c.r[0] = c.r[7];
    // 0da439  add al, 0x41
    X86_AT(c, 0xda439u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x41u, 0, 1)); }
    // 0da43b  push eax
    X86_AT(c, 0xda43bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0da43c  push edi
    X86_AT(c, 0xda43cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0da43d  lea eax, [ebp - 0x230]
    X86_AT(c, 0xda43du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFDD0u);
    // 0da443  push eax
    X86_AT(c, 0xda443u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0da444  call 0xc878c
    X86_AT(c, 0xda444u);
    push32(c, 0xda449u); x86_call_known(c, 0xc878cu, f_000c878c); X86_RET(c, 0xda449u);
    X86_TICK(c, 19);
    // 0da449  lea eax, [edi + 6]
    X86_AT(c, 0xda449u);
    c.r[0] = (uint32_t)(c.r[7] + 0x6u);
    // 0da44c  push eax
    X86_AT(c, 0xda44cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0da44d  push 0x4d
    X86_AT(c, 0xda44du);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0da44f  push eax
    X86_AT(c, 0xda44fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0da450  push 7
    X86_AT(c, 0xda450u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0da452  push 4
    X86_AT(c, 0xda452u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da454  call 0xcab04
    X86_AT(c, 0xda454u);
    push32(c, 0xda459u); x86_call_known(c, 0xcab04u, f_000cab04); X86_RET(c, 0xda459u);
    X86_TICK(c, 11);
    // 0da459  lea eax, [ebp - 0x20]
    X86_AT(c, 0xda459u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFE0u);
    // 0da45c  push eax
    X86_AT(c, 0xda45cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0da45d  call 0xc8930
    X86_AT(c, 0xda45du);
    push32(c, 0xda462u); x86_call_known(c, 0xc8930u, f_000c8930); X86_RET(c, 0xda462u);
    X86_TICK(c, 11);
    // 0da462  push 4
    X86_AT(c, 0xda462u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da464  push 0x12
    X86_AT(c, 0xda464u);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0da466  call 0xcc814
    X86_AT(c, 0xda466u);
    push32(c, 0xda46bu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda46bu);
    X86_TICK(c, 11);
    // 0da46b  push 0xbd8c
    X86_AT(c, 0xda46bu);
    { uint32_t v = 0xBD8Cu; push32(c, v); }
    // 0da470  push 4
    X86_AT(c, 0xda470u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da472  call 0xc8cdc
    X86_AT(c, 0xda472u);
    push32(c, 0xda477u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda477u);
    X86_TICK(c, 11);
    // 0da477  add esp, 0x40
    X86_AT(c, 0xda477u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0da47a  push 0xbdfc
    X86_AT(c, 0xda47au);
    { uint32_t v = 0xBDFCu; push32(c, v); }
    // 0da47f  call 0xcad60
    X86_AT(c, 0xda47fu);
    push32(c, 0xda484u); x86_call_known(c, 0xcad60u, f_000cad60); X86_RET(c, 0xda484u);
    X86_TICK(c, 2);
    // 0da484  add esp, 4
    X86_AT(c, 0xda484u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_da487:
    X86_TICK(c, 9);
    // 0da487  push 4
    X86_AT(c, 0xda487u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da489  call 0xc81e4
    X86_AT(c, 0xda489u);
    push32(c, 0xda48eu); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xda48eu);
    X86_TICK(c, 9);
    // 0da48e  add esp, 4
    X86_AT(c, 0xda48eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0da491  and al, al
    X86_AT(c, 0xda491u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0da493  je 0xda487
    X86_AT(c, 0xda493u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xda487u); goto L_da487; }
L_da495:
    X86_TICK(c, 9);
    // 0da495  push 2
    X86_AT(c, 0xda495u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0da497  call 0xca3cc
    X86_AT(c, 0xda497u);
    push32(c, 0xda49cu); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xda49cu);
    X86_TICK(c, 9);
    // 0da49c  push 4
    X86_AT(c, 0xda49cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da49e  call 0xca0a0
    X86_AT(c, 0xda49eu);
    push32(c, 0xda4a3u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xda4a3u);
    X86_TICK(c, 9);
    // 0da4a3  add esp, 8
    X86_AT(c, 0xda4a3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0da4a6  jmp 0xda262
    X86_AT(c, 0xda4a6u);
    X86_POLL(c, 0xda262u); goto L_da262;
L_da4ab:
    X86_TICK(c, 28);
    // 0da4ab  pop edi
    X86_AT(c, 0xda4abu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0da4ac  pop esi
    X86_AT(c, 0xda4acu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0da4ad  pop ebx
    X86_AT(c, 0xda4adu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0da4ae  leave 
    X86_AT(c, 0xda4aeu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0da4af  ret 
    X86_AT(c, 0xda4afu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xda160u, "ran off the end of a function");
}
void f_000da4b0(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0da4b0  push ebx
    X86_AT(c, 0xda4b0u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0da4b1  push esi
    X86_AT(c, 0xda4b1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0da4b2  push edi
    X86_AT(c, 0xda4b2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0da4b3  push 4
    X86_AT(c, 0xda4b3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da4b5  push 0x4d
    X86_AT(c, 0xda4b5u);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0da4b7  push 3
    X86_AT(c, 0xda4b7u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0da4b9  push 0
    X86_AT(c, 0xda4b9u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0da4bb  push 4
    X86_AT(c, 0xda4bbu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da4bd  call 0xcab04
    X86_AT(c, 0xda4bdu);
    push32(c, 0xda4c2u); x86_call_known(c, 0xcab04u, f_000cab04); X86_RET(c, 0xda4c2u);
    X86_TICK(c, 11);
    // 0da4c2  push 3
    X86_AT(c, 0xda4c2u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0da4c4  push 1
    X86_AT(c, 0xda4c4u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0da4c6  call 0xcc814
    X86_AT(c, 0xda4c6u);
    push32(c, 0xda4cbu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda4cbu);
    X86_TICK(c, 11);
    // 0da4cb  push 0xbe30
    X86_AT(c, 0xda4cbu);
    { uint32_t v = 0xBE30u; push32(c, v); }
    // 0da4d0  push 4
    X86_AT(c, 0xda4d0u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da4d2  call 0xc8cdc
    X86_AT(c, 0xda4d2u);
    push32(c, 0xda4d7u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda4d7u);
    X86_TICK(c, 2);
    // 0da4d7  add esp, 0x24
    X86_AT(c, 0xda4d7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
L_da4da:
    X86_TICK(c, 17);
    // 0da4da  push 0x17
    X86_AT(c, 0xda4dau);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0da4dc  push 0x4d
    X86_AT(c, 0xda4dcu);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0da4de  push 4
    X86_AT(c, 0xda4deu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da4e0  push 0
    X86_AT(c, 0xda4e0u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0da4e2  push 4
    X86_AT(c, 0xda4e2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da4e4  call 0xcab04
    X86_AT(c, 0xda4e4u);
    push32(c, 0xda4e9u); x86_call_known(c, 0xcab04u, f_000cab04); X86_RET(c, 0xda4e9u);
    X86_TICK(c, 11);
    // 0da4e9  push 4
    X86_AT(c, 0xda4e9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da4eb  push 1
    X86_AT(c, 0xda4ebu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0da4ed  call 0xcc814
    X86_AT(c, 0xda4edu);
    push32(c, 0xda4f2u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda4f2u);
    X86_TICK(c, 11);
    // 0da4f2  push 0xb14bc
    X86_AT(c, 0xda4f2u);
    { uint32_t v = 0xB14BCu; push32(c, v); }
    // 0da4f7  push 4
    X86_AT(c, 0xda4f7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da4f9  call 0xc8cdc
    X86_AT(c, 0xda4f9u);
    push32(c, 0xda4feu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda4feu);
    X86_TICK(c, 2);
    // 0da4fe  add esp, 0x24
    X86_AT(c, 0xda4feu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
L_da501:
    X86_TICK(c, 11);
    // 0da501  push 4
    X86_AT(c, 0xda501u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da503  push 0x18
    X86_AT(c, 0xda503u);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0da505  call 0xcc814
    X86_AT(c, 0xda505u);
    push32(c, 0xda50au); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda50au);
    X86_TICK(c, 9);
    // 0da50a  push 4
    X86_AT(c, 0xda50au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da50c  call 0xcacd4
    X86_AT(c, 0xda50cu);
    push32(c, 0xda511u); x86_call_known(c, 0xcacd4u, f_000cacd4); X86_RET(c, 0xda511u);
    X86_TICK(c, 11);
    // 0da511  push 0xe
    X86_AT(c, 0xda511u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0da513  push 4
    X86_AT(c, 0xda513u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da515  call 0xcac40
    X86_AT(c, 0xda515u);
    push32(c, 0xda51au); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xda51au);
    X86_TICK(c, 9);
    // 0da51a  push 4
    X86_AT(c, 0xda51au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da51c  call 0xca0a0
    X86_AT(c, 0xda51cu);
    push32(c, 0xda521u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xda521u);
    X86_TICK(c, 9);
    // 0da521  push 4
    X86_AT(c, 0xda521u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da523  call 0xc5f0c
    X86_AT(c, 0xda523u);
    push32(c, 0xda528u); x86_call_known(c, 0xc5f0cu, f_000c5f0c); X86_RET(c, 0xda528u);
    X86_TICK(c, 14);
    // 0da528  xchg edi, eax
    X86_AT(c, 0xda528u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0da529  push 0xb
    X86_AT(c, 0xda529u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0da52b  push 4
    X86_AT(c, 0xda52bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da52d  call 0xcac40
    X86_AT(c, 0xda52du);
    push32(c, 0xda532u); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xda532u);
    X86_TICK(c, 9);
    // 0da532  push 4
    X86_AT(c, 0xda532u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da534  call 0xca0a0
    X86_AT(c, 0xda534u);
    push32(c, 0xda539u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xda539u);
    X86_TICK(c, 9);
    // 0da539  add esp, 0x28
    X86_AT(c, 0xda539u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0da53c  cmp edi, 0xffffffff
    X86_AT(c, 0xda53cu);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0da53f  je 0xda545
    X86_AT(c, 0xda53fu);
    if (x86_cc(c, 4)) { goto L_da545; }
    X86_TICK(c, 7);
    // 0da541  and edi, edi
    X86_AT(c, 0xda541u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0da543  jne 0xda5a3
    X86_AT(c, 0xda543u);
    if (x86_cc(c, 5)) { goto L_da5a3; }
L_da545:
    X86_TICK(c, 11);
    // 0da545  push 4
    X86_AT(c, 0xda545u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da547  push 1
    X86_AT(c, 0xda547u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0da549  call 0xcc814
    X86_AT(c, 0xda549u);
    push32(c, 0xda54eu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda54eu);
    X86_TICK(c, 11);
    // 0da54e  push 0xb14bc
    X86_AT(c, 0xda54eu);
    { uint32_t v = 0xB14BCu; push32(c, v); }
    // 0da553  push 4
    X86_AT(c, 0xda553u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da555  call 0xc8cdc
    X86_AT(c, 0xda555u);
    push32(c, 0xda55au); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda55au);
    X86_TICK(c, 11);
    // 0da55a  push 4
    X86_AT(c, 0xda55au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da55c  push 0x19
    X86_AT(c, 0xda55cu);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0da55e  call 0xcc814
    X86_AT(c, 0xda55eu);
    push32(c, 0xda563u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda563u);
    X86_TICK(c, 13);
    // 0da563  push 2
    X86_AT(c, 0xda563u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0da565  push edi
    X86_AT(c, 0xda565u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0da566  push 4
    X86_AT(c, 0xda566u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da568  call 0xc8cb8
    X86_AT(c, 0xda568u);
    push32(c, 0xda56du); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xda56du);
    X86_TICK(c, 11);
    // 0da56d  push 4
    X86_AT(c, 0xda56du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da56f  push 0x1d
    X86_AT(c, 0xda56fu);
    { uint32_t v = 0x1Du; push32(c, v); }
    // 0da571  call 0xcc814
    X86_AT(c, 0xda571u);
    push32(c, 0xda576u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda576u);
    X86_TICK(c, 11);
    // 0da576  push 0xb1548
    X86_AT(c, 0xda576u);
    { uint32_t v = 0xB1548u; push32(c, v); }
    // 0da57b  push 4
    X86_AT(c, 0xda57bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da57d  call 0xc8cdc
    X86_AT(c, 0xda57du);
    push32(c, 0xda582u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda582u);
    X86_TICK(c, 17);
    // 0da582  push 0x17
    X86_AT(c, 0xda582u);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0da584  push 0x4d
    X86_AT(c, 0xda584u);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0da586  push 3
    X86_AT(c, 0xda586u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0da588  push 0
    X86_AT(c, 0xda588u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0da58a  push 4
    X86_AT(c, 0xda58au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da58c  call 0xcab04
    X86_AT(c, 0xda58cu);
    push32(c, 0xda591u); x86_call_known(c, 0xcab04u, f_000cab04); X86_RET(c, 0xda591u);
    X86_TICK(c, 11);
    // 0da591  add esp, 0x48
    X86_AT(c, 0xda591u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x48u, 0, 4); }
    // 0da594  push 4
    X86_AT(c, 0xda594u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da596  call 0xcacec
    X86_AT(c, 0xda596u);
    push32(c, 0xda59bu); x86_call_known(c, 0xcacecu, f_000cacec); X86_RET(c, 0xda59bu);
    X86_TICK(c, 9);
    // 0da59b  add esp, 4
    X86_AT(c, 0xda59bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0da59e  jmp 0xda92e
    X86_AT(c, 0xda59eu);
    goto L_da92e;
L_da5a3:
    X86_TICK(c, 7);
    // 0da5a3  cmp edi, 4
    X86_AT(c, 0xda5a3u);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0da5a6  jg 0xda5ac
    X86_AT(c, 0xda5a6u);
    if (x86_cc(c, 15)) { goto L_da5ac; }
    X86_TICK(c, 7);
    // 0da5a8  and edi, edi
    X86_AT(c, 0xda5a8u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0da5aa  jg 0xda5f2
    X86_AT(c, 0xda5aau);
    if (x86_cc(c, 15)) { goto L_da5f2; }
L_da5ac:
    X86_TICK(c, 11);
    // 0da5ac  push 4
    X86_AT(c, 0xda5acu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da5ae  push 0x18
    X86_AT(c, 0xda5aeu);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0da5b0  call 0xcc814
    X86_AT(c, 0xda5b0u);
    push32(c, 0xda5b5u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda5b5u);
    X86_TICK(c, 11);
    // 0da5b5  push 0xb14f8
    X86_AT(c, 0xda5b5u);
    { uint32_t v = 0xB14F8u; push32(c, v); }
    // 0da5ba  push 4
    X86_AT(c, 0xda5bau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da5bc  call 0xc8cdc
    X86_AT(c, 0xda5bcu);
    push32(c, 0xda5c1u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda5c1u);
    X86_TICK(c, 9);
    // 0da5c1  push 0xbe70
    X86_AT(c, 0xda5c1u);
    { uint32_t v = 0xBE70u; push32(c, v); }
    // 0da5c6  call 0xcad60
    X86_AT(c, 0xda5c6u);
    push32(c, 0xda5cbu); x86_call_known(c, 0xcad60u, f_000cad60); X86_RET(c, 0xda5cbu);
    X86_TICK(c, 2);
    // 0da5cb  add esp, 0x14
    X86_AT(c, 0xda5cbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_da5ce:
    X86_TICK(c, 9);
    // 0da5ce  push 4
    X86_AT(c, 0xda5ceu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da5d0  call 0xc81e4
    X86_AT(c, 0xda5d0u);
    push32(c, 0xda5d5u); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xda5d5u);
    X86_TICK(c, 9);
    // 0da5d5  add esp, 4
    X86_AT(c, 0xda5d5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0da5d8  and al, al
    X86_AT(c, 0xda5d8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0da5da  je 0xda5ce
    X86_AT(c, 0xda5dau);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xda5ceu); goto L_da5ce; }
    X86_TICK(c, 9);
    // 0da5dc  push 2
    X86_AT(c, 0xda5dcu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0da5de  call 0xca3cc
    X86_AT(c, 0xda5deu);
    push32(c, 0xda5e3u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xda5e3u);
    X86_TICK(c, 9);
    // 0da5e3  push 4
    X86_AT(c, 0xda5e3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da5e5  call 0xca0a0
    X86_AT(c, 0xda5e5u);
    push32(c, 0xda5eau); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xda5eau);
    X86_TICK(c, 9);
    // 0da5ea  add esp, 8
    X86_AT(c, 0xda5eau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0da5ed  jmp 0xda501
    X86_AT(c, 0xda5edu);
    X86_POLL(c, 0xda501u); goto L_da501;
L_da5f2:
    X86_TICK(c, 11);
    // 0da5f2  push 0xb
    X86_AT(c, 0xda5f2u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0da5f4  push 4
    X86_AT(c, 0xda5f4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da5f6  call 0xcac40
    X86_AT(c, 0xda5f6u);
    push32(c, 0xda5fbu); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xda5fbu);
    X86_TICK(c, 9);
    // 0da5fb  push 4
    X86_AT(c, 0xda5fbu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da5fd  call 0xca0a0
    X86_AT(c, 0xda5fdu);
    push32(c, 0xda602u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xda602u);
    X86_TICK(c, 9);
    // 0da602  push 4
    X86_AT(c, 0xda602u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da604  call 0xcacec
    X86_AT(c, 0xda604u);
    push32(c, 0xda609u); x86_call_known(c, 0xcacecu, f_000cacec); X86_RET(c, 0xda609u);
    X86_TICK(c, 36);
    // 0da609  imul eax, edi, 0x21a
    X86_AT(c, 0xda609u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0da60f  add esp, 0x10
    X86_AT(c, 0xda60fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0da612  cmp byte ptr [eax + 0xb02ee], 0
    X86_AT(c, 0xda612u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB02EEu))), 0x0u, 0, 1);
    // 0da619  jne 0xda676
    X86_AT(c, 0xda619u);
    if (x86_cc(c, 5)) { goto L_da676; }
    X86_TICK(c, 11);
    // 0da61b  push 4
    X86_AT(c, 0xda61bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da61d  push 1
    X86_AT(c, 0xda61du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0da61f  call 0xcc814
    X86_AT(c, 0xda61fu);
    push32(c, 0xda624u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda624u);
    X86_TICK(c, 11);
    // 0da624  push 0xb14bc
    X86_AT(c, 0xda624u);
    { uint32_t v = 0xB14BCu; push32(c, v); }
    // 0da629  push 4
    X86_AT(c, 0xda629u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da62b  call 0xc8cdc
    X86_AT(c, 0xda62bu);
    push32(c, 0xda630u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda630u);
    X86_TICK(c, 11);
    // 0da630  push 4
    X86_AT(c, 0xda630u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da632  push 0x19
    X86_AT(c, 0xda632u);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0da634  call 0xcc814
    X86_AT(c, 0xda634u);
    push32(c, 0xda639u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda639u);
    X86_TICK(c, 11);
    // 0da639  push 0xbea4
    X86_AT(c, 0xda639u);
    { uint32_t v = 0xBEA4u; push32(c, v); }
    // 0da63e  push 4
    X86_AT(c, 0xda63eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da640  call 0xc8cdc
    X86_AT(c, 0xda640u);
    push32(c, 0xda645u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda645u);
    X86_TICK(c, 9);
    // 0da645  push 0xbef0
    X86_AT(c, 0xda645u);
    { uint32_t v = 0xBEF0u; push32(c, v); }
    // 0da64a  call 0xcad60
    X86_AT(c, 0xda64au);
    push32(c, 0xda64fu); x86_call_known(c, 0xcad60u, f_000cad60); X86_RET(c, 0xda64fu);
    X86_TICK(c, 2);
    // 0da64f  add esp, 0x24
    X86_AT(c, 0xda64fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
L_da652:
    X86_TICK(c, 9);
    // 0da652  push 4
    X86_AT(c, 0xda652u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da654  call 0xc81e4
    X86_AT(c, 0xda654u);
    push32(c, 0xda659u); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xda659u);
    X86_TICK(c, 9);
    // 0da659  add esp, 4
    X86_AT(c, 0xda659u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0da65c  and al, al
    X86_AT(c, 0xda65cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0da65e  je 0xda652
    X86_AT(c, 0xda65eu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xda652u); goto L_da652; }
    X86_TICK(c, 9);
    // 0da660  push 2
    X86_AT(c, 0xda660u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0da662  call 0xca3cc
    X86_AT(c, 0xda662u);
    push32(c, 0xda667u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xda667u);
    X86_TICK(c, 9);
    // 0da667  push 4
    X86_AT(c, 0xda667u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da669  call 0xca0a0
    X86_AT(c, 0xda669u);
    push32(c, 0xda66eu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xda66eu);
    X86_TICK(c, 9);
    // 0da66e  add esp, 8
    X86_AT(c, 0xda66eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0da671  jmp 0xda4da
    X86_AT(c, 0xda671u);
    X86_POLL(c, 0xda4dau); goto L_da4da;
L_da676:
    X86_TICK(c, 11);
    // 0da676  push 4
    X86_AT(c, 0xda676u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da678  push 1
    X86_AT(c, 0xda678u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0da67a  call 0xcc814
    X86_AT(c, 0xda67au);
    push32(c, 0xda67fu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda67fu);
    X86_TICK(c, 11);
    // 0da67f  push 0xb14bc
    X86_AT(c, 0xda67fu);
    { uint32_t v = 0xB14BCu; push32(c, v); }
    // 0da684  push 4
    X86_AT(c, 0xda684u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da686  call 0xc8cdc
    X86_AT(c, 0xda686u);
    push32(c, 0xda68bu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda68bu);
    X86_TICK(c, 11);
    // 0da68b  push 4
    X86_AT(c, 0xda68bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da68d  push 0x19
    X86_AT(c, 0xda68du);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0da68f  call 0xcc814
    X86_AT(c, 0xda68fu);
    push32(c, 0xda694u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda694u);
    X86_TICK(c, 13);
    // 0da694  push 2
    X86_AT(c, 0xda694u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0da696  push edi
    X86_AT(c, 0xda696u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0da697  push 4
    X86_AT(c, 0xda697u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da699  call 0xc8cb8
    X86_AT(c, 0xda699u);
    push32(c, 0xda69eu); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xda69eu);
    X86_TICK(c, 39);
    // 0da69e  dec edi
    X86_AT(c, 0xda69eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 0da69f  imul eax, edi, 0x21a
    X86_AT(c, 0xda69fu);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0da6a5  lea esi, [eax*1 + 0xb0508]
    X86_AT(c, 0xda6a5u);
    c.r[6] = (uint32_t)(c.r[0] + 0xB0508u);
    // 0da6ac  sub ebx, ebx
    X86_AT(c, 0xda6acu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0da6ae  push 5
    X86_AT(c, 0xda6aeu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0da6b0  push 0xb
    X86_AT(c, 0xda6b0u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0da6b2  call 0xcc814
    X86_AT(c, 0xda6b2u);
    push32(c, 0xda6b7u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda6b7u);
    X86_TICK(c, 11);
    // 0da6b7  push 0xbf24
    X86_AT(c, 0xda6b7u);
    { uint32_t v = 0xBF24u; push32(c, v); }
    // 0da6bc  push 4
    X86_AT(c, 0xda6bcu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da6be  call 0xc8cdc
    X86_AT(c, 0xda6beu);
    push32(c, 0xda6c3u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda6c3u);
    X86_TICK(c, 11);
    // 0da6c3  push esi
    X86_AT(c, 0xda6c3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0da6c4  push 4
    X86_AT(c, 0xda6c4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da6c6  call 0xca850
    X86_AT(c, 0xda6c6u);
    push32(c, 0xda6cbu); x86_call_known(c, 0xca850u, f_000ca850); X86_RET(c, 0xda6cbu);
    X86_TICK(c, 13);
    // 0da6cb  add esp, 0x3c
    X86_AT(c, 0xda6cbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0da6ce  push 6
    X86_AT(c, 0xda6ceu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0da6d0  push 0xb
    X86_AT(c, 0xda6d0u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0da6d2  call 0xcc814
    X86_AT(c, 0xda6d2u);
    push32(c, 0xda6d7u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda6d7u);
    X86_TICK(c, 11);
    // 0da6d7  push 0xbf5c
    X86_AT(c, 0xda6d7u);
    { uint32_t v = 0xBF5Cu; push32(c, v); }
    // 0da6dc  push 4
    X86_AT(c, 0xda6dcu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da6de  call 0xc8cdc
    X86_AT(c, 0xda6deu);
    push32(c, 0xda6e3u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda6e3u);
    X86_TICK(c, 20);
    // 0da6e3  movzx eax, byte ptr [esi + 0x10]
    X86_AT(c, 0xda6e3u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u)));
    // 0da6e7  push dword ptr [eax*4 + 0xa1ed4]
    X86_AT(c, 0xda6e7u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA1ED4u))); push32(c, v); }
    // 0da6ee  push 4
    X86_AT(c, 0xda6eeu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da6f0  call 0xc8cdc
    X86_AT(c, 0xda6f0u);
    push32(c, 0xda6f5u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda6f5u);
    X86_TICK(c, 11);
    // 0da6f5  push 7
    X86_AT(c, 0xda6f5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0da6f7  push 0xb
    X86_AT(c, 0xda6f7u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0da6f9  call 0xcc814
    X86_AT(c, 0xda6f9u);
    push32(c, 0xda6feu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda6feu);
    X86_TICK(c, 11);
    // 0da6fe  push 0xbf94
    X86_AT(c, 0xda6feu);
    { uint32_t v = 0xBF94u; push32(c, v); }
    // 0da703  push 4
    X86_AT(c, 0xda703u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da705  call 0xc8cdc
    X86_AT(c, 0xda705u);
    push32(c, 0xda70au); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda70au);
    X86_TICK(c, 20);
    // 0da70a  movzx eax, byte ptr [esi + 0x11]
    X86_AT(c, 0xda70au);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x11u)));
    // 0da70e  push dword ptr [eax*4 + 0xa1e28]
    X86_AT(c, 0xda70eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA1E28u))); push32(c, v); }
    // 0da715  push 4
    X86_AT(c, 0xda715u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da717  call 0xc8cdc
    X86_AT(c, 0xda717u);
    push32(c, 0xda71cu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda71cu);
    X86_TICK(c, 13);
    // 0da71c  add esp, 0x30
    X86_AT(c, 0xda71cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0da71f  push 8
    X86_AT(c, 0xda71fu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0da721  push 0xb
    X86_AT(c, 0xda721u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0da723  call 0xcc814
    X86_AT(c, 0xda723u);
    push32(c, 0xda728u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda728u);
    X86_TICK(c, 11);
    // 0da728  push 0xbfcc
    X86_AT(c, 0xda728u);
    { uint32_t v = 0xBFCCu; push32(c, v); }
    // 0da72d  push 4
    X86_AT(c, 0xda72du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da72f  call 0xc8cdc
    X86_AT(c, 0xda72fu);
    push32(c, 0xda734u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda734u);
    X86_TICK(c, 20);
    // 0da734  movzx eax, byte ptr [esi + 0xf]
    X86_AT(c, 0xda734u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xFu)));
    // 0da738  push dword ptr [eax*4 + 0xa1e34]
    X86_AT(c, 0xda738u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA1E34u))); push32(c, v); }
    // 0da73f  push 4
    X86_AT(c, 0xda73fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da741  call 0xc8cdc
    X86_AT(c, 0xda741u);
    push32(c, 0xda746u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda746u);
    X86_TICK(c, 11);
    // 0da746  push 0xa
    X86_AT(c, 0xda746u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0da748  push 0xb
    X86_AT(c, 0xda748u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0da74a  call 0xcc814
    X86_AT(c, 0xda74au);
    push32(c, 0xda74fu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda74fu);
    X86_TICK(c, 11);
    // 0da74f  push 0xc004
    X86_AT(c, 0xda74fu);
    { uint32_t v = 0xC004u; push32(c, v); }
    // 0da754  push 4
    X86_AT(c, 0xda754u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da756  call 0xc8cdc
    X86_AT(c, 0xda756u);
    push32(c, 0xda75bu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda75bu);
    X86_TICK(c, 18);
    // 0da75b  mov eax, dword ptr [esi + 0x3a]
    X86_AT(c, 0xda75bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x3Au)));
    // 0da75e  push dword ptr [eax*4 + 0xa1de8]
    X86_AT(c, 0xda75eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA1DE8u))); push32(c, v); }
    // 0da765  push 4
    X86_AT(c, 0xda765u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da767  call 0xc8cdc
    X86_AT(c, 0xda767u);
    push32(c, 0xda76cu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda76cu);
    X86_TICK(c, 11);
    // 0da76c  push 0xb
    X86_AT(c, 0xda76cu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0da76e  push 0xb
    X86_AT(c, 0xda76eu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0da770  call 0xcc814
    X86_AT(c, 0xda770u);
    push32(c, 0xda775u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda775u);
    X86_TICK(c, 11);
    // 0da775  push 0xc03c
    X86_AT(c, 0xda775u);
    { uint32_t v = 0xC03Cu; push32(c, v); }
    // 0da77a  push 4
    X86_AT(c, 0xda77au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da77c  call 0xc8cdc
    X86_AT(c, 0xda77cu);
    push32(c, 0xda781u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda781u);
    X86_TICK(c, 20);
    // 0da781  add esp, 0x40
    X86_AT(c, 0xda781u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0da784  mov eax, dword ptr [esi + 0x42]
    X86_AT(c, 0xda784u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x42u)));
    // 0da787  push dword ptr [eax*4 + 0xa1e70]
    X86_AT(c, 0xda787u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA1E70u))); push32(c, v); }
    // 0da78e  push 4
    X86_AT(c, 0xda78eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da790  call 0xc8cdc
    X86_AT(c, 0xda790u);
    push32(c, 0xda795u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda795u);
    X86_TICK(c, 11);
    // 0da795  push 0xc
    X86_AT(c, 0xda795u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0da797  push 0xb
    X86_AT(c, 0xda797u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0da799  call 0xcc814
    X86_AT(c, 0xda799u);
    push32(c, 0xda79eu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda79eu);
    X86_TICK(c, 11);
    // 0da79e  push 0xc074
    X86_AT(c, 0xda79eu);
    { uint32_t v = 0xC074u; push32(c, v); }
    // 0da7a3  push 4
    X86_AT(c, 0xda7a3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da7a5  call 0xc8cdc
    X86_AT(c, 0xda7a5u);
    push32(c, 0xda7aau); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda7aau);
    X86_TICK(c, 16);
    // 0da7aa  push 4
    X86_AT(c, 0xda7aau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da7ac  push dword ptr [esi + 0x16]
    X86_AT(c, 0xda7acu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x16u))); push32(c, v); }
    // 0da7af  push 4
    X86_AT(c, 0xda7afu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da7b1  call 0xc8cb8
    X86_AT(c, 0xda7b1u);
    push32(c, 0xda7b6u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xda7b6u);
    X86_TICK(c, 11);
    // 0da7b6  push 0xd
    X86_AT(c, 0xda7b6u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0da7b8  push 0xb
    X86_AT(c, 0xda7b8u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0da7ba  call 0xcc814
    X86_AT(c, 0xda7bau);
    push32(c, 0xda7bfu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda7bfu);
    X86_TICK(c, 11);
    // 0da7bf  push 0xc0ac
    X86_AT(c, 0xda7bfu);
    { uint32_t v = 0xC0ACu; push32(c, v); }
    // 0da7c4  push 4
    X86_AT(c, 0xda7c4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da7c6  call 0xc8cdc
    X86_AT(c, 0xda7c6u);
    push32(c, 0xda7cbu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda7cbu);
    X86_TICK(c, 18);
    // 0da7cb  add esp, 0x34
    X86_AT(c, 0xda7cbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
    // 0da7ce  push 4
    X86_AT(c, 0xda7ceu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da7d0  push dword ptr [esi + 0x1a]
    X86_AT(c, 0xda7d0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x1Au))); push32(c, v); }
    // 0da7d3  push 4
    X86_AT(c, 0xda7d3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da7d5  call 0xc8cb8
    X86_AT(c, 0xda7d5u);
    push32(c, 0xda7dau); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xda7dau);
    X86_TICK(c, 11);
    // 0da7da  push 0xe
    X86_AT(c, 0xda7dau);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0da7dc  push 0xb
    X86_AT(c, 0xda7dcu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0da7de  call 0xcc814
    X86_AT(c, 0xda7deu);
    push32(c, 0xda7e3u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda7e3u);
    X86_TICK(c, 11);
    // 0da7e3  push 0xc0e4
    X86_AT(c, 0xda7e3u);
    { uint32_t v = 0xC0E4u; push32(c, v); }
    // 0da7e8  push 4
    X86_AT(c, 0xda7e8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da7ea  call 0xc8cdc
    X86_AT(c, 0xda7eau);
    push32(c, 0xda7efu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda7efu);
    X86_TICK(c, 16);
    // 0da7ef  push 4
    X86_AT(c, 0xda7efu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da7f1  push dword ptr [esi + 0x1e]
    X86_AT(c, 0xda7f1u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x1Eu))); push32(c, v); }
    // 0da7f4  push 4
    X86_AT(c, 0xda7f4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da7f6  call 0xc8cb8
    X86_AT(c, 0xda7f6u);
    push32(c, 0xda7fbu); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xda7fbu);
    X86_TICK(c, 11);
    // 0da7fb  push 0xf
    X86_AT(c, 0xda7fbu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0da7fd  push 0xb
    X86_AT(c, 0xda7fdu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0da7ff  call 0xcc814
    X86_AT(c, 0xda7ffu);
    push32(c, 0xda804u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda804u);
    X86_TICK(c, 11);
    // 0da804  push 0xc11c
    X86_AT(c, 0xda804u);
    { uint32_t v = 0xC11Cu; push32(c, v); }
    // 0da809  push 4
    X86_AT(c, 0xda809u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da80b  call 0xc8cdc
    X86_AT(c, 0xda80bu);
    push32(c, 0xda810u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda810u);
    X86_TICK(c, 16);
    // 0da810  push 4
    X86_AT(c, 0xda810u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da812  push dword ptr [esi + 0x22]
    X86_AT(c, 0xda812u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x22u))); push32(c, v); }
    // 0da815  push 4
    X86_AT(c, 0xda815u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da817  call 0xc8cb8
    X86_AT(c, 0xda817u);
    push32(c, 0xda81cu); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xda81cu);
    X86_TICK(c, 13);
    // 0da81c  add esp, 0x44
    X86_AT(c, 0xda81cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x44u, 0, 4); }
    // 0da81f  push 0x10
    X86_AT(c, 0xda81fu);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0da821  push 0xb
    X86_AT(c, 0xda821u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0da823  call 0xcc814
    X86_AT(c, 0xda823u);
    push32(c, 0xda828u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda828u);
    X86_TICK(c, 11);
    // 0da828  push 0xc154
    X86_AT(c, 0xda828u);
    { uint32_t v = 0xC154u; push32(c, v); }
    // 0da82d  push 4
    X86_AT(c, 0xda82du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da82f  call 0xc8cdc
    X86_AT(c, 0xda82fu);
    push32(c, 0xda834u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda834u);
    X86_TICK(c, 16);
    // 0da834  push 4
    X86_AT(c, 0xda834u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da836  push dword ptr [esi + 0x26]
    X86_AT(c, 0xda836u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x26u))); push32(c, v); }
    // 0da839  push 4
    X86_AT(c, 0xda839u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da83b  call 0xc8cb8
    X86_AT(c, 0xda83bu);
    push32(c, 0xda840u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xda840u);
    X86_TICK(c, 11);
    // 0da840  push 0x11
    X86_AT(c, 0xda840u);
    { uint32_t v = 0x11u; push32(c, v); }
    // 0da842  push 0xb
    X86_AT(c, 0xda842u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0da844  call 0xcc814
    X86_AT(c, 0xda844u);
    push32(c, 0xda849u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda849u);
    X86_TICK(c, 11);
    // 0da849  push 0xc18c
    X86_AT(c, 0xda849u);
    { uint32_t v = 0xC18Cu; push32(c, v); }
    // 0da84e  push 4
    X86_AT(c, 0xda84eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da850  call 0xc8cdc
    X86_AT(c, 0xda850u);
    push32(c, 0xda855u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda855u);
    X86_TICK(c, 16);
    // 0da855  push 4
    X86_AT(c, 0xda855u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da857  push dword ptr [esi + 0x2a]
    X86_AT(c, 0xda857u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x2Au))); push32(c, v); }
    // 0da85a  push 4
    X86_AT(c, 0xda85au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da85c  call 0xc8cb8
    X86_AT(c, 0xda85cu);
    push32(c, 0xda861u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xda861u);
    X86_TICK(c, 11);
    // 0da861  push 0x12
    X86_AT(c, 0xda861u);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0da863  push 0xb
    X86_AT(c, 0xda863u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0da865  call 0xcc814
    X86_AT(c, 0xda865u);
    push32(c, 0xda86au); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda86au);
    X86_TICK(c, 13);
    // 0da86a  add esp, 0x40
    X86_AT(c, 0xda86au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0da86d  push 0xc1c4
    X86_AT(c, 0xda86du);
    { uint32_t v = 0xC1C4u; push32(c, v); }
    // 0da872  push 4
    X86_AT(c, 0xda872u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da874  call 0xc8cdc
    X86_AT(c, 0xda874u);
    push32(c, 0xda879u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda879u);
    X86_TICK(c, 18);
    // 0da879  add esp, 8
    X86_AT(c, 0xda879u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0da87c  push 4
    X86_AT(c, 0xda87cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da87e  push dword ptr [esi + 0x12]
    X86_AT(c, 0xda87eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x12u))); push32(c, v); }
    // 0da881  push 4
    X86_AT(c, 0xda881u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da883  call 0xc8cb8
    X86_AT(c, 0xda883u);
    push32(c, 0xda888u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xda888u);
    X86_TICK(c, 11);
    // 0da888  push 0x13
    X86_AT(c, 0xda888u);
    { uint32_t v = 0x13u; push32(c, v); }
    // 0da88a  push 0xb
    X86_AT(c, 0xda88au);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0da88c  call 0xcc814
    X86_AT(c, 0xda88cu);
    push32(c, 0xda891u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda891u);
    X86_TICK(c, 11);
    // 0da891  push 0xc1fc
    X86_AT(c, 0xda891u);
    { uint32_t v = 0xC1FCu; push32(c, v); }
    // 0da896  push 4
    X86_AT(c, 0xda896u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da898  call 0xc8cdc
    X86_AT(c, 0xda898u);
    push32(c, 0xda89du); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda89du);
    X86_TICK(c, 16);
    // 0da89d  push 4
    X86_AT(c, 0xda89du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da89f  push dword ptr [esi + 0x32]
    X86_AT(c, 0xda89fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x32u))); push32(c, v); }
    // 0da8a2  push 4
    X86_AT(c, 0xda8a2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da8a4  call 0xc8cb8
    X86_AT(c, 0xda8a4u);
    push32(c, 0xda8a9u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xda8a9u);
    X86_TICK(c, 11);
    // 0da8a9  push 0x14
    X86_AT(c, 0xda8a9u);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0da8ab  push 0xb
    X86_AT(c, 0xda8abu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0da8ad  call 0xcc814
    X86_AT(c, 0xda8adu);
    push32(c, 0xda8b2u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda8b2u);
    X86_TICK(c, 11);
    // 0da8b2  push 0xc234
    X86_AT(c, 0xda8b2u);
    { uint32_t v = 0xC234u; push32(c, v); }
    // 0da8b7  push 4
    X86_AT(c, 0xda8b7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da8b9  call 0xc8cdc
    X86_AT(c, 0xda8b9u);
    push32(c, 0xda8beu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda8beu);
    X86_TICK(c, 16);
    // 0da8be  push 4
    X86_AT(c, 0xda8beu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da8c0  push dword ptr [esi + 0x36]
    X86_AT(c, 0xda8c0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x36u))); push32(c, v); }
    // 0da8c3  push 4
    X86_AT(c, 0xda8c3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da8c5  call 0xc8cb8
    X86_AT(c, 0xda8c5u);
    push32(c, 0xda8cau); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xda8cau);
    X86_TICK(c, 13);
    // 0da8ca  add esp, 0x44
    X86_AT(c, 0xda8cau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x44u, 0, 4); }
    // 0da8cd  push 0x15
    X86_AT(c, 0xda8cdu);
    { uint32_t v = 0x15u; push32(c, v); }
    // 0da8cf  push 0xb
    X86_AT(c, 0xda8cfu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0da8d1  call 0xcc814
    X86_AT(c, 0xda8d1u);
    push32(c, 0xda8d6u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda8d6u);
    X86_TICK(c, 11);
    // 0da8d6  push 0xc26c
    X86_AT(c, 0xda8d6u);
    { uint32_t v = 0xC26Cu; push32(c, v); }
    // 0da8db  push 4
    X86_AT(c, 0xda8dbu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da8dd  call 0xc8cdc
    X86_AT(c, 0xda8ddu);
    push32(c, 0xda8e2u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda8e2u);
    X86_TICK(c, 16);
    // 0da8e2  push 4
    X86_AT(c, 0xda8e2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da8e4  push dword ptr [esi + 0x2e]
    X86_AT(c, 0xda8e4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x2Eu))); push32(c, v); }
    // 0da8e7  push 4
    X86_AT(c, 0xda8e7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da8e9  call 0xc8cb8
    X86_AT(c, 0xda8e9u);
    push32(c, 0xda8eeu); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xda8eeu);
    X86_TICK(c, 9);
    // 0da8ee  push 0xc2a4
    X86_AT(c, 0xda8eeu);
    { uint32_t v = 0xC2A4u; push32(c, v); }
    // 0da8f3  call 0xcad60
    X86_AT(c, 0xda8f3u);
    push32(c, 0xda8f8u); x86_call_known(c, 0xcad60u, f_000cad60); X86_RET(c, 0xda8f8u);
    X86_TICK(c, 2);
    // 0da8f8  add esp, 0x20
    X86_AT(c, 0xda8f8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
L_da8fb:
    X86_TICK(c, 9);
    // 0da8fb  push 4
    X86_AT(c, 0xda8fbu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da8fd  call 0xc81e4
    X86_AT(c, 0xda8fdu);
    push32(c, 0xda902u); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xda902u);
    X86_TICK(c, 9);
    // 0da902  add esp, 4
    X86_AT(c, 0xda902u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0da905  and al, al
    X86_AT(c, 0xda905u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0da907  je 0xda8fb
    X86_AT(c, 0xda907u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xda8fbu); goto L_da8fb; }
    X86_TICK(c, 9);
    // 0da909  push 2
    X86_AT(c, 0xda909u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0da90b  call 0xca3cc
    X86_AT(c, 0xda90bu);
    push32(c, 0xda910u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xda910u);
    X86_TICK(c, 9);
    // 0da910  push 4
    X86_AT(c, 0xda910u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da912  call 0xca0a0
    X86_AT(c, 0xda912u);
    push32(c, 0xda917u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xda917u);
    X86_TICK(c, 17);
    // 0da917  push 0x17
    X86_AT(c, 0xda917u);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0da919  push 0x4d
    X86_AT(c, 0xda919u);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0da91b  push 4
    X86_AT(c, 0xda91bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da91d  push 0
    X86_AT(c, 0xda91du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0da91f  push 4
    X86_AT(c, 0xda91fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da921  call 0xcab04
    X86_AT(c, 0xda921u);
    push32(c, 0xda926u); x86_call_known(c, 0xcab04u, f_000cab04); X86_RET(c, 0xda926u);
    X86_TICK(c, 9);
    // 0da926  add esp, 0x1c
    X86_AT(c, 0xda926u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0da929  jmp 0xda4da
    X86_AT(c, 0xda929u);
    X86_POLL(c, 0xda4dau); goto L_da4da;
L_da92e:
    X86_TICK(c, 22);
    // 0da92e  pop edi
    X86_AT(c, 0xda92eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0da92f  pop esi
    X86_AT(c, 0xda92fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0da930  pop ebx
    X86_AT(c, 0xda930u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0da931  ret 
    X86_AT(c, 0xda931u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xda4b0u, "ran off the end of a function");
}
void f_000da4da(X86Cpu& c) {
L_da4da:
    X86_TICK(c, 17);
    // 0da4da  push 0x17
    X86_AT(c, 0xda4dau);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0da4dc  push 0x4d
    X86_AT(c, 0xda4dcu);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0da4de  push 4
    X86_AT(c, 0xda4deu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da4e0  push 0
    X86_AT(c, 0xda4e0u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0da4e2  push 4
    X86_AT(c, 0xda4e2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da4e4  call 0xcab04
    X86_AT(c, 0xda4e4u);
    push32(c, 0xda4e9u); x86_call_known(c, 0xcab04u, f_000cab04); X86_RET(c, 0xda4e9u);
    X86_TICK(c, 11);
    // 0da4e9  push 4
    X86_AT(c, 0xda4e9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da4eb  push 1
    X86_AT(c, 0xda4ebu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0da4ed  call 0xcc814
    X86_AT(c, 0xda4edu);
    push32(c, 0xda4f2u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda4f2u);
    X86_TICK(c, 11);
    // 0da4f2  push 0xb14bc
    X86_AT(c, 0xda4f2u);
    { uint32_t v = 0xB14BCu; push32(c, v); }
    // 0da4f7  push 4
    X86_AT(c, 0xda4f7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da4f9  call 0xc8cdc
    X86_AT(c, 0xda4f9u);
    push32(c, 0xda4feu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda4feu);
    X86_TICK(c, 2);
    // 0da4fe  add esp, 0x24
    X86_AT(c, 0xda4feu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
L_da501:
    X86_TICK(c, 11);
    // 0da501  push 4
    X86_AT(c, 0xda501u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da503  push 0x18
    X86_AT(c, 0xda503u);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0da505  call 0xcc814
    X86_AT(c, 0xda505u);
    push32(c, 0xda50au); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda50au);
    X86_TICK(c, 9);
    // 0da50a  push 4
    X86_AT(c, 0xda50au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da50c  call 0xcacd4
    X86_AT(c, 0xda50cu);
    push32(c, 0xda511u); x86_call_known(c, 0xcacd4u, f_000cacd4); X86_RET(c, 0xda511u);
    X86_TICK(c, 11);
    // 0da511  push 0xe
    X86_AT(c, 0xda511u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0da513  push 4
    X86_AT(c, 0xda513u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da515  call 0xcac40
    X86_AT(c, 0xda515u);
    push32(c, 0xda51au); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xda51au);
    X86_TICK(c, 9);
    // 0da51a  push 4
    X86_AT(c, 0xda51au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da51c  call 0xca0a0
    X86_AT(c, 0xda51cu);
    push32(c, 0xda521u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xda521u);
    X86_TICK(c, 9);
    // 0da521  push 4
    X86_AT(c, 0xda521u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da523  call 0xc5f0c
    X86_AT(c, 0xda523u);
    push32(c, 0xda528u); x86_call_known(c, 0xc5f0cu, f_000c5f0c); X86_RET(c, 0xda528u);
    X86_TICK(c, 14);
    // 0da528  xchg edi, eax
    X86_AT(c, 0xda528u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0da529  push 0xb
    X86_AT(c, 0xda529u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0da52b  push 4
    X86_AT(c, 0xda52bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da52d  call 0xcac40
    X86_AT(c, 0xda52du);
    push32(c, 0xda532u); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xda532u);
    X86_TICK(c, 9);
    // 0da532  push 4
    X86_AT(c, 0xda532u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da534  call 0xca0a0
    X86_AT(c, 0xda534u);
    push32(c, 0xda539u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xda539u);
    X86_TICK(c, 9);
    // 0da539  add esp, 0x28
    X86_AT(c, 0xda539u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0da53c  cmp edi, 0xffffffff
    X86_AT(c, 0xda53cu);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0da53f  je 0xda545
    X86_AT(c, 0xda53fu);
    if (x86_cc(c, 4)) { goto L_da545; }
    X86_TICK(c, 7);
    // 0da541  and edi, edi
    X86_AT(c, 0xda541u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0da543  jne 0xda5a3
    X86_AT(c, 0xda543u);
    if (x86_cc(c, 5)) { goto L_da5a3; }
L_da545:
    X86_TICK(c, 11);
    // 0da545  push 4
    X86_AT(c, 0xda545u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da547  push 1
    X86_AT(c, 0xda547u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0da549  call 0xcc814
    X86_AT(c, 0xda549u);
    push32(c, 0xda54eu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda54eu);
    X86_TICK(c, 11);
    // 0da54e  push 0xb14bc
    X86_AT(c, 0xda54eu);
    { uint32_t v = 0xB14BCu; push32(c, v); }
    // 0da553  push 4
    X86_AT(c, 0xda553u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da555  call 0xc8cdc
    X86_AT(c, 0xda555u);
    push32(c, 0xda55au); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda55au);
    X86_TICK(c, 11);
    // 0da55a  push 4
    X86_AT(c, 0xda55au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da55c  push 0x19
    X86_AT(c, 0xda55cu);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0da55e  call 0xcc814
    X86_AT(c, 0xda55eu);
    push32(c, 0xda563u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda563u);
    X86_TICK(c, 13);
    // 0da563  push 2
    X86_AT(c, 0xda563u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0da565  push edi
    X86_AT(c, 0xda565u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0da566  push 4
    X86_AT(c, 0xda566u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da568  call 0xc8cb8
    X86_AT(c, 0xda568u);
    push32(c, 0xda56du); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xda56du);
    X86_TICK(c, 11);
    // 0da56d  push 4
    X86_AT(c, 0xda56du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da56f  push 0x1d
    X86_AT(c, 0xda56fu);
    { uint32_t v = 0x1Du; push32(c, v); }
    // 0da571  call 0xcc814
    X86_AT(c, 0xda571u);
    push32(c, 0xda576u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda576u);
    X86_TICK(c, 11);
    // 0da576  push 0xb1548
    X86_AT(c, 0xda576u);
    { uint32_t v = 0xB1548u; push32(c, v); }
    // 0da57b  push 4
    X86_AT(c, 0xda57bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da57d  call 0xc8cdc
    X86_AT(c, 0xda57du);
    push32(c, 0xda582u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda582u);
    X86_TICK(c, 17);
    // 0da582  push 0x17
    X86_AT(c, 0xda582u);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0da584  push 0x4d
    X86_AT(c, 0xda584u);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0da586  push 3
    X86_AT(c, 0xda586u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0da588  push 0
    X86_AT(c, 0xda588u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0da58a  push 4
    X86_AT(c, 0xda58au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da58c  call 0xcab04
    X86_AT(c, 0xda58cu);
    push32(c, 0xda591u); x86_call_known(c, 0xcab04u, f_000cab04); X86_RET(c, 0xda591u);
    X86_TICK(c, 11);
    // 0da591  add esp, 0x48
    X86_AT(c, 0xda591u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x48u, 0, 4); }
    // 0da594  push 4
    X86_AT(c, 0xda594u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da596  call 0xcacec
    X86_AT(c, 0xda596u);
    push32(c, 0xda59bu); x86_call_known(c, 0xcacecu, f_000cacec); X86_RET(c, 0xda59bu);
    X86_TICK(c, 9);
    // 0da59b  add esp, 4
    X86_AT(c, 0xda59bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0da59e  jmp 0xda92e
    X86_AT(c, 0xda59eu);
    goto L_da92e;
L_da5a3:
    X86_TICK(c, 7);
    // 0da5a3  cmp edi, 4
    X86_AT(c, 0xda5a3u);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0da5a6  jg 0xda5ac
    X86_AT(c, 0xda5a6u);
    if (x86_cc(c, 15)) { goto L_da5ac; }
    X86_TICK(c, 7);
    // 0da5a8  and edi, edi
    X86_AT(c, 0xda5a8u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0da5aa  jg 0xda5f2
    X86_AT(c, 0xda5aau);
    if (x86_cc(c, 15)) { goto L_da5f2; }
L_da5ac:
    X86_TICK(c, 11);
    // 0da5ac  push 4
    X86_AT(c, 0xda5acu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da5ae  push 0x18
    X86_AT(c, 0xda5aeu);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0da5b0  call 0xcc814
    X86_AT(c, 0xda5b0u);
    push32(c, 0xda5b5u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda5b5u);
    X86_TICK(c, 11);
    // 0da5b5  push 0xb14f8
    X86_AT(c, 0xda5b5u);
    { uint32_t v = 0xB14F8u; push32(c, v); }
    // 0da5ba  push 4
    X86_AT(c, 0xda5bau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da5bc  call 0xc8cdc
    X86_AT(c, 0xda5bcu);
    push32(c, 0xda5c1u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda5c1u);
    X86_TICK(c, 9);
    // 0da5c1  push 0xbe70
    X86_AT(c, 0xda5c1u);
    { uint32_t v = 0xBE70u; push32(c, v); }
    // 0da5c6  call 0xcad60
    X86_AT(c, 0xda5c6u);
    push32(c, 0xda5cbu); x86_call_known(c, 0xcad60u, f_000cad60); X86_RET(c, 0xda5cbu);
    X86_TICK(c, 2);
    // 0da5cb  add esp, 0x14
    X86_AT(c, 0xda5cbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_da5ce:
    X86_TICK(c, 9);
    // 0da5ce  push 4
    X86_AT(c, 0xda5ceu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da5d0  call 0xc81e4
    X86_AT(c, 0xda5d0u);
    push32(c, 0xda5d5u); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xda5d5u);
    X86_TICK(c, 9);
    // 0da5d5  add esp, 4
    X86_AT(c, 0xda5d5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0da5d8  and al, al
    X86_AT(c, 0xda5d8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0da5da  je 0xda5ce
    X86_AT(c, 0xda5dau);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xda5ceu); goto L_da5ce; }
    X86_TICK(c, 9);
    // 0da5dc  push 2
    X86_AT(c, 0xda5dcu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0da5de  call 0xca3cc
    X86_AT(c, 0xda5deu);
    push32(c, 0xda5e3u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xda5e3u);
    X86_TICK(c, 9);
    // 0da5e3  push 4
    X86_AT(c, 0xda5e3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da5e5  call 0xca0a0
    X86_AT(c, 0xda5e5u);
    push32(c, 0xda5eau); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xda5eau);
    X86_TICK(c, 9);
    // 0da5ea  add esp, 8
    X86_AT(c, 0xda5eau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0da5ed  jmp 0xda501
    X86_AT(c, 0xda5edu);
    X86_POLL(c, 0xda501u); goto L_da501;
L_da5f2:
    X86_TICK(c, 11);
    // 0da5f2  push 0xb
    X86_AT(c, 0xda5f2u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0da5f4  push 4
    X86_AT(c, 0xda5f4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da5f6  call 0xcac40
    X86_AT(c, 0xda5f6u);
    push32(c, 0xda5fbu); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xda5fbu);
    X86_TICK(c, 9);
    // 0da5fb  push 4
    X86_AT(c, 0xda5fbu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da5fd  call 0xca0a0
    X86_AT(c, 0xda5fdu);
    push32(c, 0xda602u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xda602u);
    X86_TICK(c, 9);
    // 0da602  push 4
    X86_AT(c, 0xda602u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da604  call 0xcacec
    X86_AT(c, 0xda604u);
    push32(c, 0xda609u); x86_call_known(c, 0xcacecu, f_000cacec); X86_RET(c, 0xda609u);
    X86_TICK(c, 36);
    // 0da609  imul eax, edi, 0x21a
    X86_AT(c, 0xda609u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0da60f  add esp, 0x10
    X86_AT(c, 0xda60fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0da612  cmp byte ptr [eax + 0xb02ee], 0
    X86_AT(c, 0xda612u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB02EEu))), 0x0u, 0, 1);
    // 0da619  jne 0xda676
    X86_AT(c, 0xda619u);
    if (x86_cc(c, 5)) { goto L_da676; }
    X86_TICK(c, 11);
    // 0da61b  push 4
    X86_AT(c, 0xda61bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da61d  push 1
    X86_AT(c, 0xda61du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0da61f  call 0xcc814
    X86_AT(c, 0xda61fu);
    push32(c, 0xda624u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda624u);
    X86_TICK(c, 11);
    // 0da624  push 0xb14bc
    X86_AT(c, 0xda624u);
    { uint32_t v = 0xB14BCu; push32(c, v); }
    // 0da629  push 4
    X86_AT(c, 0xda629u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da62b  call 0xc8cdc
    X86_AT(c, 0xda62bu);
    push32(c, 0xda630u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda630u);
    X86_TICK(c, 11);
    // 0da630  push 4
    X86_AT(c, 0xda630u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da632  push 0x19
    X86_AT(c, 0xda632u);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0da634  call 0xcc814
    X86_AT(c, 0xda634u);
    push32(c, 0xda639u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda639u);
    X86_TICK(c, 11);
    // 0da639  push 0xbea4
    X86_AT(c, 0xda639u);
    { uint32_t v = 0xBEA4u; push32(c, v); }
    // 0da63e  push 4
    X86_AT(c, 0xda63eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da640  call 0xc8cdc
    X86_AT(c, 0xda640u);
    push32(c, 0xda645u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda645u);
    X86_TICK(c, 9);
    // 0da645  push 0xbef0
    X86_AT(c, 0xda645u);
    { uint32_t v = 0xBEF0u; push32(c, v); }
    // 0da64a  call 0xcad60
    X86_AT(c, 0xda64au);
    push32(c, 0xda64fu); x86_call_known(c, 0xcad60u, f_000cad60); X86_RET(c, 0xda64fu);
    X86_TICK(c, 2);
    // 0da64f  add esp, 0x24
    X86_AT(c, 0xda64fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
L_da652:
    X86_TICK(c, 9);
    // 0da652  push 4
    X86_AT(c, 0xda652u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da654  call 0xc81e4
    X86_AT(c, 0xda654u);
    push32(c, 0xda659u); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xda659u);
    X86_TICK(c, 9);
    // 0da659  add esp, 4
    X86_AT(c, 0xda659u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0da65c  and al, al
    X86_AT(c, 0xda65cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0da65e  je 0xda652
    X86_AT(c, 0xda65eu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xda652u); goto L_da652; }
    X86_TICK(c, 9);
    // 0da660  push 2
    X86_AT(c, 0xda660u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0da662  call 0xca3cc
    X86_AT(c, 0xda662u);
    push32(c, 0xda667u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xda667u);
    X86_TICK(c, 9);
    // 0da667  push 4
    X86_AT(c, 0xda667u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da669  call 0xca0a0
    X86_AT(c, 0xda669u);
    push32(c, 0xda66eu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xda66eu);
    X86_TICK(c, 9);
    // 0da66e  add esp, 8
    X86_AT(c, 0xda66eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0da671  jmp 0xda4da
    X86_AT(c, 0xda671u);
    X86_POLL(c, 0xda4dau); goto L_da4da;
L_da676:
    X86_TICK(c, 11);
    // 0da676  push 4
    X86_AT(c, 0xda676u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da678  push 1
    X86_AT(c, 0xda678u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0da67a  call 0xcc814
    X86_AT(c, 0xda67au);
    push32(c, 0xda67fu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda67fu);
    X86_TICK(c, 11);
    // 0da67f  push 0xb14bc
    X86_AT(c, 0xda67fu);
    { uint32_t v = 0xB14BCu; push32(c, v); }
    // 0da684  push 4
    X86_AT(c, 0xda684u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da686  call 0xc8cdc
    X86_AT(c, 0xda686u);
    push32(c, 0xda68bu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda68bu);
    X86_TICK(c, 11);
    // 0da68b  push 4
    X86_AT(c, 0xda68bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da68d  push 0x19
    X86_AT(c, 0xda68du);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0da68f  call 0xcc814
    X86_AT(c, 0xda68fu);
    push32(c, 0xda694u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda694u);
    X86_TICK(c, 13);
    // 0da694  push 2
    X86_AT(c, 0xda694u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0da696  push edi
    X86_AT(c, 0xda696u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0da697  push 4
    X86_AT(c, 0xda697u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da699  call 0xc8cb8
    X86_AT(c, 0xda699u);
    push32(c, 0xda69eu); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xda69eu);
    X86_TICK(c, 39);
    // 0da69e  dec edi
    X86_AT(c, 0xda69eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 0da69f  imul eax, edi, 0x21a
    X86_AT(c, 0xda69fu);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0da6a5  lea esi, [eax*1 + 0xb0508]
    X86_AT(c, 0xda6a5u);
    c.r[6] = (uint32_t)(c.r[0] + 0xB0508u);
    // 0da6ac  sub ebx, ebx
    X86_AT(c, 0xda6acu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0da6ae  push 5
    X86_AT(c, 0xda6aeu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0da6b0  push 0xb
    X86_AT(c, 0xda6b0u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0da6b2  call 0xcc814
    X86_AT(c, 0xda6b2u);
    push32(c, 0xda6b7u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda6b7u);
    X86_TICK(c, 11);
    // 0da6b7  push 0xbf24
    X86_AT(c, 0xda6b7u);
    { uint32_t v = 0xBF24u; push32(c, v); }
    // 0da6bc  push 4
    X86_AT(c, 0xda6bcu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da6be  call 0xc8cdc
    X86_AT(c, 0xda6beu);
    push32(c, 0xda6c3u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda6c3u);
    X86_TICK(c, 11);
    // 0da6c3  push esi
    X86_AT(c, 0xda6c3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0da6c4  push 4
    X86_AT(c, 0xda6c4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da6c6  call 0xca850
    X86_AT(c, 0xda6c6u);
    push32(c, 0xda6cbu); x86_call_known(c, 0xca850u, f_000ca850); X86_RET(c, 0xda6cbu);
    X86_TICK(c, 13);
    // 0da6cb  add esp, 0x3c
    X86_AT(c, 0xda6cbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0da6ce  push 6
    X86_AT(c, 0xda6ceu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0da6d0  push 0xb
    X86_AT(c, 0xda6d0u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0da6d2  call 0xcc814
    X86_AT(c, 0xda6d2u);
    push32(c, 0xda6d7u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda6d7u);
    X86_TICK(c, 11);
    // 0da6d7  push 0xbf5c
    X86_AT(c, 0xda6d7u);
    { uint32_t v = 0xBF5Cu; push32(c, v); }
    // 0da6dc  push 4
    X86_AT(c, 0xda6dcu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da6de  call 0xc8cdc
    X86_AT(c, 0xda6deu);
    push32(c, 0xda6e3u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda6e3u);
    X86_TICK(c, 20);
    // 0da6e3  movzx eax, byte ptr [esi + 0x10]
    X86_AT(c, 0xda6e3u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u)));
    // 0da6e7  push dword ptr [eax*4 + 0xa1ed4]
    X86_AT(c, 0xda6e7u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA1ED4u))); push32(c, v); }
    // 0da6ee  push 4
    X86_AT(c, 0xda6eeu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da6f0  call 0xc8cdc
    X86_AT(c, 0xda6f0u);
    push32(c, 0xda6f5u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda6f5u);
    X86_TICK(c, 11);
    // 0da6f5  push 7
    X86_AT(c, 0xda6f5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0da6f7  push 0xb
    X86_AT(c, 0xda6f7u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0da6f9  call 0xcc814
    X86_AT(c, 0xda6f9u);
    push32(c, 0xda6feu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda6feu);
    X86_TICK(c, 11);
    // 0da6fe  push 0xbf94
    X86_AT(c, 0xda6feu);
    { uint32_t v = 0xBF94u; push32(c, v); }
    // 0da703  push 4
    X86_AT(c, 0xda703u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da705  call 0xc8cdc
    X86_AT(c, 0xda705u);
    push32(c, 0xda70au); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda70au);
    X86_TICK(c, 20);
    // 0da70a  movzx eax, byte ptr [esi + 0x11]
    X86_AT(c, 0xda70au);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x11u)));
    // 0da70e  push dword ptr [eax*4 + 0xa1e28]
    X86_AT(c, 0xda70eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA1E28u))); push32(c, v); }
    // 0da715  push 4
    X86_AT(c, 0xda715u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da717  call 0xc8cdc
    X86_AT(c, 0xda717u);
    push32(c, 0xda71cu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda71cu);
    X86_TICK(c, 13);
    // 0da71c  add esp, 0x30
    X86_AT(c, 0xda71cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0da71f  push 8
    X86_AT(c, 0xda71fu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0da721  push 0xb
    X86_AT(c, 0xda721u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0da723  call 0xcc814
    X86_AT(c, 0xda723u);
    push32(c, 0xda728u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda728u);
    X86_TICK(c, 11);
    // 0da728  push 0xbfcc
    X86_AT(c, 0xda728u);
    { uint32_t v = 0xBFCCu; push32(c, v); }
    // 0da72d  push 4
    X86_AT(c, 0xda72du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da72f  call 0xc8cdc
    X86_AT(c, 0xda72fu);
    push32(c, 0xda734u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda734u);
    X86_TICK(c, 20);
    // 0da734  movzx eax, byte ptr [esi + 0xf]
    X86_AT(c, 0xda734u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xFu)));
    // 0da738  push dword ptr [eax*4 + 0xa1e34]
    X86_AT(c, 0xda738u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA1E34u))); push32(c, v); }
    // 0da73f  push 4
    X86_AT(c, 0xda73fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da741  call 0xc8cdc
    X86_AT(c, 0xda741u);
    push32(c, 0xda746u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda746u);
    X86_TICK(c, 11);
    // 0da746  push 0xa
    X86_AT(c, 0xda746u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0da748  push 0xb
    X86_AT(c, 0xda748u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0da74a  call 0xcc814
    X86_AT(c, 0xda74au);
    push32(c, 0xda74fu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda74fu);
    X86_TICK(c, 11);
    // 0da74f  push 0xc004
    X86_AT(c, 0xda74fu);
    { uint32_t v = 0xC004u; push32(c, v); }
    // 0da754  push 4
    X86_AT(c, 0xda754u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da756  call 0xc8cdc
    X86_AT(c, 0xda756u);
    push32(c, 0xda75bu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda75bu);
    X86_TICK(c, 18);
    // 0da75b  mov eax, dword ptr [esi + 0x3a]
    X86_AT(c, 0xda75bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x3Au)));
    // 0da75e  push dword ptr [eax*4 + 0xa1de8]
    X86_AT(c, 0xda75eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA1DE8u))); push32(c, v); }
    // 0da765  push 4
    X86_AT(c, 0xda765u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da767  call 0xc8cdc
    X86_AT(c, 0xda767u);
    push32(c, 0xda76cu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda76cu);
    X86_TICK(c, 11);
    // 0da76c  push 0xb
    X86_AT(c, 0xda76cu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0da76e  push 0xb
    X86_AT(c, 0xda76eu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0da770  call 0xcc814
    X86_AT(c, 0xda770u);
    push32(c, 0xda775u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda775u);
    X86_TICK(c, 11);
    // 0da775  push 0xc03c
    X86_AT(c, 0xda775u);
    { uint32_t v = 0xC03Cu; push32(c, v); }
    // 0da77a  push 4
    X86_AT(c, 0xda77au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da77c  call 0xc8cdc
    X86_AT(c, 0xda77cu);
    push32(c, 0xda781u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda781u);
    X86_TICK(c, 20);
    // 0da781  add esp, 0x40
    X86_AT(c, 0xda781u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0da784  mov eax, dword ptr [esi + 0x42]
    X86_AT(c, 0xda784u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x42u)));
    // 0da787  push dword ptr [eax*4 + 0xa1e70]
    X86_AT(c, 0xda787u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA1E70u))); push32(c, v); }
    // 0da78e  push 4
    X86_AT(c, 0xda78eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da790  call 0xc8cdc
    X86_AT(c, 0xda790u);
    push32(c, 0xda795u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda795u);
    X86_TICK(c, 11);
    // 0da795  push 0xc
    X86_AT(c, 0xda795u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0da797  push 0xb
    X86_AT(c, 0xda797u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0da799  call 0xcc814
    X86_AT(c, 0xda799u);
    push32(c, 0xda79eu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda79eu);
    X86_TICK(c, 11);
    // 0da79e  push 0xc074
    X86_AT(c, 0xda79eu);
    { uint32_t v = 0xC074u; push32(c, v); }
    // 0da7a3  push 4
    X86_AT(c, 0xda7a3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da7a5  call 0xc8cdc
    X86_AT(c, 0xda7a5u);
    push32(c, 0xda7aau); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda7aau);
    X86_TICK(c, 16);
    // 0da7aa  push 4
    X86_AT(c, 0xda7aau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da7ac  push dword ptr [esi + 0x16]
    X86_AT(c, 0xda7acu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x16u))); push32(c, v); }
    // 0da7af  push 4
    X86_AT(c, 0xda7afu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da7b1  call 0xc8cb8
    X86_AT(c, 0xda7b1u);
    push32(c, 0xda7b6u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xda7b6u);
    X86_TICK(c, 11);
    // 0da7b6  push 0xd
    X86_AT(c, 0xda7b6u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0da7b8  push 0xb
    X86_AT(c, 0xda7b8u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0da7ba  call 0xcc814
    X86_AT(c, 0xda7bau);
    push32(c, 0xda7bfu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda7bfu);
    X86_TICK(c, 11);
    // 0da7bf  push 0xc0ac
    X86_AT(c, 0xda7bfu);
    { uint32_t v = 0xC0ACu; push32(c, v); }
    // 0da7c4  push 4
    X86_AT(c, 0xda7c4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da7c6  call 0xc8cdc
    X86_AT(c, 0xda7c6u);
    push32(c, 0xda7cbu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda7cbu);
    X86_TICK(c, 18);
    // 0da7cb  add esp, 0x34
    X86_AT(c, 0xda7cbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
    // 0da7ce  push 4
    X86_AT(c, 0xda7ceu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da7d0  push dword ptr [esi + 0x1a]
    X86_AT(c, 0xda7d0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x1Au))); push32(c, v); }
    // 0da7d3  push 4
    X86_AT(c, 0xda7d3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da7d5  call 0xc8cb8
    X86_AT(c, 0xda7d5u);
    push32(c, 0xda7dau); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xda7dau);
    X86_TICK(c, 11);
    // 0da7da  push 0xe
    X86_AT(c, 0xda7dau);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0da7dc  push 0xb
    X86_AT(c, 0xda7dcu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0da7de  call 0xcc814
    X86_AT(c, 0xda7deu);
    push32(c, 0xda7e3u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda7e3u);
    X86_TICK(c, 11);
    // 0da7e3  push 0xc0e4
    X86_AT(c, 0xda7e3u);
    { uint32_t v = 0xC0E4u; push32(c, v); }
    // 0da7e8  push 4
    X86_AT(c, 0xda7e8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da7ea  call 0xc8cdc
    X86_AT(c, 0xda7eau);
    push32(c, 0xda7efu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda7efu);
    X86_TICK(c, 16);
    // 0da7ef  push 4
    X86_AT(c, 0xda7efu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da7f1  push dword ptr [esi + 0x1e]
    X86_AT(c, 0xda7f1u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x1Eu))); push32(c, v); }
    // 0da7f4  push 4
    X86_AT(c, 0xda7f4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da7f6  call 0xc8cb8
    X86_AT(c, 0xda7f6u);
    push32(c, 0xda7fbu); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xda7fbu);
    X86_TICK(c, 11);
    // 0da7fb  push 0xf
    X86_AT(c, 0xda7fbu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0da7fd  push 0xb
    X86_AT(c, 0xda7fdu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0da7ff  call 0xcc814
    X86_AT(c, 0xda7ffu);
    push32(c, 0xda804u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda804u);
    X86_TICK(c, 11);
    // 0da804  push 0xc11c
    X86_AT(c, 0xda804u);
    { uint32_t v = 0xC11Cu; push32(c, v); }
    // 0da809  push 4
    X86_AT(c, 0xda809u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da80b  call 0xc8cdc
    X86_AT(c, 0xda80bu);
    push32(c, 0xda810u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda810u);
    X86_TICK(c, 16);
    // 0da810  push 4
    X86_AT(c, 0xda810u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da812  push dword ptr [esi + 0x22]
    X86_AT(c, 0xda812u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x22u))); push32(c, v); }
    // 0da815  push 4
    X86_AT(c, 0xda815u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da817  call 0xc8cb8
    X86_AT(c, 0xda817u);
    push32(c, 0xda81cu); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xda81cu);
    X86_TICK(c, 13);
    // 0da81c  add esp, 0x44
    X86_AT(c, 0xda81cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x44u, 0, 4); }
    // 0da81f  push 0x10
    X86_AT(c, 0xda81fu);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0da821  push 0xb
    X86_AT(c, 0xda821u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0da823  call 0xcc814
    X86_AT(c, 0xda823u);
    push32(c, 0xda828u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda828u);
    X86_TICK(c, 11);
    // 0da828  push 0xc154
    X86_AT(c, 0xda828u);
    { uint32_t v = 0xC154u; push32(c, v); }
    // 0da82d  push 4
    X86_AT(c, 0xda82du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da82f  call 0xc8cdc
    X86_AT(c, 0xda82fu);
    push32(c, 0xda834u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda834u);
    X86_TICK(c, 16);
    // 0da834  push 4
    X86_AT(c, 0xda834u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da836  push dword ptr [esi + 0x26]
    X86_AT(c, 0xda836u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x26u))); push32(c, v); }
    // 0da839  push 4
    X86_AT(c, 0xda839u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da83b  call 0xc8cb8
    X86_AT(c, 0xda83bu);
    push32(c, 0xda840u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xda840u);
    X86_TICK(c, 11);
    // 0da840  push 0x11
    X86_AT(c, 0xda840u);
    { uint32_t v = 0x11u; push32(c, v); }
    // 0da842  push 0xb
    X86_AT(c, 0xda842u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0da844  call 0xcc814
    X86_AT(c, 0xda844u);
    push32(c, 0xda849u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda849u);
    X86_TICK(c, 11);
    // 0da849  push 0xc18c
    X86_AT(c, 0xda849u);
    { uint32_t v = 0xC18Cu; push32(c, v); }
    // 0da84e  push 4
    X86_AT(c, 0xda84eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da850  call 0xc8cdc
    X86_AT(c, 0xda850u);
    push32(c, 0xda855u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda855u);
    X86_TICK(c, 16);
    // 0da855  push 4
    X86_AT(c, 0xda855u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da857  push dword ptr [esi + 0x2a]
    X86_AT(c, 0xda857u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x2Au))); push32(c, v); }
    // 0da85a  push 4
    X86_AT(c, 0xda85au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da85c  call 0xc8cb8
    X86_AT(c, 0xda85cu);
    push32(c, 0xda861u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xda861u);
    X86_TICK(c, 11);
    // 0da861  push 0x12
    X86_AT(c, 0xda861u);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0da863  push 0xb
    X86_AT(c, 0xda863u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0da865  call 0xcc814
    X86_AT(c, 0xda865u);
    push32(c, 0xda86au); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda86au);
    X86_TICK(c, 13);
    // 0da86a  add esp, 0x40
    X86_AT(c, 0xda86au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0da86d  push 0xc1c4
    X86_AT(c, 0xda86du);
    { uint32_t v = 0xC1C4u; push32(c, v); }
    // 0da872  push 4
    X86_AT(c, 0xda872u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da874  call 0xc8cdc
    X86_AT(c, 0xda874u);
    push32(c, 0xda879u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda879u);
    X86_TICK(c, 18);
    // 0da879  add esp, 8
    X86_AT(c, 0xda879u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0da87c  push 4
    X86_AT(c, 0xda87cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da87e  push dword ptr [esi + 0x12]
    X86_AT(c, 0xda87eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x12u))); push32(c, v); }
    // 0da881  push 4
    X86_AT(c, 0xda881u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da883  call 0xc8cb8
    X86_AT(c, 0xda883u);
    push32(c, 0xda888u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xda888u);
    X86_TICK(c, 11);
    // 0da888  push 0x13
    X86_AT(c, 0xda888u);
    { uint32_t v = 0x13u; push32(c, v); }
    // 0da88a  push 0xb
    X86_AT(c, 0xda88au);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0da88c  call 0xcc814
    X86_AT(c, 0xda88cu);
    push32(c, 0xda891u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda891u);
    X86_TICK(c, 11);
    // 0da891  push 0xc1fc
    X86_AT(c, 0xda891u);
    { uint32_t v = 0xC1FCu; push32(c, v); }
    // 0da896  push 4
    X86_AT(c, 0xda896u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da898  call 0xc8cdc
    X86_AT(c, 0xda898u);
    push32(c, 0xda89du); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda89du);
    X86_TICK(c, 16);
    // 0da89d  push 4
    X86_AT(c, 0xda89du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da89f  push dword ptr [esi + 0x32]
    X86_AT(c, 0xda89fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x32u))); push32(c, v); }
    // 0da8a2  push 4
    X86_AT(c, 0xda8a2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da8a4  call 0xc8cb8
    X86_AT(c, 0xda8a4u);
    push32(c, 0xda8a9u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xda8a9u);
    X86_TICK(c, 11);
    // 0da8a9  push 0x14
    X86_AT(c, 0xda8a9u);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0da8ab  push 0xb
    X86_AT(c, 0xda8abu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0da8ad  call 0xcc814
    X86_AT(c, 0xda8adu);
    push32(c, 0xda8b2u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda8b2u);
    X86_TICK(c, 11);
    // 0da8b2  push 0xc234
    X86_AT(c, 0xda8b2u);
    { uint32_t v = 0xC234u; push32(c, v); }
    // 0da8b7  push 4
    X86_AT(c, 0xda8b7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da8b9  call 0xc8cdc
    X86_AT(c, 0xda8b9u);
    push32(c, 0xda8beu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda8beu);
    X86_TICK(c, 16);
    // 0da8be  push 4
    X86_AT(c, 0xda8beu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da8c0  push dword ptr [esi + 0x36]
    X86_AT(c, 0xda8c0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x36u))); push32(c, v); }
    // 0da8c3  push 4
    X86_AT(c, 0xda8c3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da8c5  call 0xc8cb8
    X86_AT(c, 0xda8c5u);
    push32(c, 0xda8cau); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xda8cau);
    X86_TICK(c, 13);
    // 0da8ca  add esp, 0x44
    X86_AT(c, 0xda8cau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x44u, 0, 4); }
    // 0da8cd  push 0x15
    X86_AT(c, 0xda8cdu);
    { uint32_t v = 0x15u; push32(c, v); }
    // 0da8cf  push 0xb
    X86_AT(c, 0xda8cfu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0da8d1  call 0xcc814
    X86_AT(c, 0xda8d1u);
    push32(c, 0xda8d6u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda8d6u);
    X86_TICK(c, 11);
    // 0da8d6  push 0xc26c
    X86_AT(c, 0xda8d6u);
    { uint32_t v = 0xC26Cu; push32(c, v); }
    // 0da8db  push 4
    X86_AT(c, 0xda8dbu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da8dd  call 0xc8cdc
    X86_AT(c, 0xda8ddu);
    push32(c, 0xda8e2u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda8e2u);
    X86_TICK(c, 16);
    // 0da8e2  push 4
    X86_AT(c, 0xda8e2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da8e4  push dword ptr [esi + 0x2e]
    X86_AT(c, 0xda8e4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x2Eu))); push32(c, v); }
    // 0da8e7  push 4
    X86_AT(c, 0xda8e7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da8e9  call 0xc8cb8
    X86_AT(c, 0xda8e9u);
    push32(c, 0xda8eeu); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xda8eeu);
    X86_TICK(c, 9);
    // 0da8ee  push 0xc2a4
    X86_AT(c, 0xda8eeu);
    { uint32_t v = 0xC2A4u; push32(c, v); }
    // 0da8f3  call 0xcad60
    X86_AT(c, 0xda8f3u);
    push32(c, 0xda8f8u); x86_call_known(c, 0xcad60u, f_000cad60); X86_RET(c, 0xda8f8u);
    X86_TICK(c, 2);
    // 0da8f8  add esp, 0x20
    X86_AT(c, 0xda8f8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
L_da8fb:
    X86_TICK(c, 9);
    // 0da8fb  push 4
    X86_AT(c, 0xda8fbu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da8fd  call 0xc81e4
    X86_AT(c, 0xda8fdu);
    push32(c, 0xda902u); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xda902u);
    X86_TICK(c, 9);
    // 0da902  add esp, 4
    X86_AT(c, 0xda902u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0da905  and al, al
    X86_AT(c, 0xda905u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0da907  je 0xda8fb
    X86_AT(c, 0xda907u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xda8fbu); goto L_da8fb; }
    X86_TICK(c, 9);
    // 0da909  push 2
    X86_AT(c, 0xda909u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0da90b  call 0xca3cc
    X86_AT(c, 0xda90bu);
    push32(c, 0xda910u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xda910u);
    X86_TICK(c, 9);
    // 0da910  push 4
    X86_AT(c, 0xda910u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da912  call 0xca0a0
    X86_AT(c, 0xda912u);
    push32(c, 0xda917u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xda917u);
    X86_TICK(c, 17);
    // 0da917  push 0x17
    X86_AT(c, 0xda917u);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0da919  push 0x4d
    X86_AT(c, 0xda919u);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0da91b  push 4
    X86_AT(c, 0xda91bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da91d  push 0
    X86_AT(c, 0xda91du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0da91f  push 4
    X86_AT(c, 0xda91fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da921  call 0xcab04
    X86_AT(c, 0xda921u);
    push32(c, 0xda926u); x86_call_known(c, 0xcab04u, f_000cab04); X86_RET(c, 0xda926u);
    X86_TICK(c, 9);
    // 0da926  add esp, 0x1c
    X86_AT(c, 0xda926u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0da929  jmp 0xda4da
    X86_AT(c, 0xda929u);
    X86_POLL(c, 0xda4dau); goto L_da4da;
L_da92e:
    X86_TICK(c, 22);
    // 0da92e  pop edi
    X86_AT(c, 0xda92eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0da92f  pop esi
    X86_AT(c, 0xda92fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0da930  pop ebx
    X86_AT(c, 0xda930u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0da931  ret 
    X86_AT(c, 0xda931u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xda4dau, "ran off the end of a function");
}
void f_000da934(X86Cpu& c) {
    X86_TICK(c, 39);
    // 0da934  push ebp
    X86_AT(c, 0xda934u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0da935  mov ebp, esp
    X86_AT(c, 0xda935u);
    c.r[5] = c.r[4];
    // 0da937  sub esp, 0x24
    X86_AT(c, 0xda937u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x24u, 0, 4); }
    // 0da93a  push ebx
    X86_AT(c, 0xda93au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0da93b  push esi
    X86_AT(c, 0xda93bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0da93c  push edi
    X86_AT(c, 0xda93cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0da93d  push 0xd
    X86_AT(c, 0xda93du);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0da93f  push 0xf
    X86_AT(c, 0xda93fu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0da941  push 0xb
    X86_AT(c, 0xda941u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0da943  push 0x17
    X86_AT(c, 0xda943u);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0da945  push 0x4d
    X86_AT(c, 0xda945u);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0da947  push 0x186
    X86_AT(c, 0xda947u);
    { uint32_t v = 0x186u; push32(c, v); }
    // 0da94c  push 0x276
    X86_AT(c, 0xda94cu);
    { uint32_t v = 0x276u; push32(c, v); }
    // 0da951  push 0x1c
    X86_AT(c, 0xda951u);
    { uint32_t v = 0x1Cu; push32(c, v); }
    // 0da953  push 5
    X86_AT(c, 0xda953u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0da955  push 4
    X86_AT(c, 0xda955u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da957  call 0xc9fbc
    X86_AT(c, 0xda957u);
    push32(c, 0xda95cu); x86_call_known(c, 0xc9fbcu, f_000c9fbc); X86_RET(c, 0xda95cu);
    X86_TICK(c, 9);
    // 0da95c  push 4
    X86_AT(c, 0xda95cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da95e  call 0xca100
    X86_AT(c, 0xda95eu);
    push32(c, 0xda963u); x86_call_known(c, 0xca100u, f_000ca100); X86_RET(c, 0xda963u);
    X86_TICK(c, 11);
    // 0da963  push 0xe
    X86_AT(c, 0xda963u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0da965  push 4
    X86_AT(c, 0xda965u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da967  call 0xcac40
    X86_AT(c, 0xda967u);
    push32(c, 0xda96cu); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xda96cu);
    X86_TICK(c, 9);
    // 0da96c  push 4
    X86_AT(c, 0xda96cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da96e  call 0xca0a0
    X86_AT(c, 0xda96eu);
    push32(c, 0xda973u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xda973u);
    X86_TICK(c, 11);
    // 0da973  push 0
    X86_AT(c, 0xda973u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0da975  push 0xf
    X86_AT(c, 0xda975u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0da977  call 0xcc814
    X86_AT(c, 0xda977u);
    push32(c, 0xda97cu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda97cu);
    X86_TICK(c, 13);
    // 0da97c  add esp, 0x40
    X86_AT(c, 0xda97cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0da97f  push 0xc2d8
    X86_AT(c, 0xda97fu);
    { uint32_t v = 0xC2D8u; push32(c, v); }
    // 0da984  push 4
    X86_AT(c, 0xda984u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da986  call 0xc8cdc
    X86_AT(c, 0xda986u);
    push32(c, 0xda98bu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda98bu);
    X86_TICK(c, 11);
    // 0da98b  push 0xb
    X86_AT(c, 0xda98bu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0da98d  push 4
    X86_AT(c, 0xda98du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da98f  call 0xcac40
    X86_AT(c, 0xda98fu);
    push32(c, 0xda994u); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xda994u);
    X86_TICK(c, 9);
    // 0da994  push 4
    X86_AT(c, 0xda994u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da996  call 0xca0a0
    X86_AT(c, 0xda996u);
    push32(c, 0xda99bu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xda99bu);
    X86_TICK(c, 11);
    // 0da99b  push 2
    X86_AT(c, 0xda99bu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0da99d  push 5
    X86_AT(c, 0xda99du);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0da99f  call 0xcc814
    X86_AT(c, 0xda99fu);
    push32(c, 0xda9a4u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda9a4u);
    X86_TICK(c, 11);
    // 0da9a4  push 0xc320
    X86_AT(c, 0xda9a4u);
    { uint32_t v = 0xC320u; push32(c, v); }
    // 0da9a9  push 4
    X86_AT(c, 0xda9a9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da9ab  call 0xc8cdc
    X86_AT(c, 0xda9abu);
    push32(c, 0xda9b0u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda9b0u);
    X86_TICK(c, 2);
    // 0da9b0  add esp, 0x24
    X86_AT(c, 0xda9b0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
L_da9b3:
    X86_TICK(c, 9);
    // 0da9b3  push 0
    X86_AT(c, 0xda9b3u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0da9b5  call 0xc6210
    X86_AT(c, 0xda9b5u);
    push32(c, 0xda9bau); x86_call_known(c, 0xc6210u, f_000c6210); X86_RET(c, 0xda9bau);
    X86_TICK(c, 12);
    // 0da9ba  xchg edi, eax
    X86_AT(c, 0xda9bau);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0da9bb  push 4
    X86_AT(c, 0xda9bbu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da9bd  call 0xca0a0
    X86_AT(c, 0xda9bdu);
    push32(c, 0xda9c2u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xda9c2u);
    X86_TICK(c, 9);
    // 0da9c2  add esp, 8
    X86_AT(c, 0xda9c2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0da9c5  cmp edi, 0xffffffff
    X86_AT(c, 0xda9c5u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0da9c8  je 0xda9d3
    X86_AT(c, 0xda9c8u);
    if (x86_cc(c, 4)) { goto L_da9d3; }
    X86_TICK(c, 7);
    // 0da9ca  and edi, edi
    X86_AT(c, 0xda9cau);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0da9cc  je 0xda9d3
    X86_AT(c, 0xda9ccu);
    if (x86_cc(c, 4)) { goto L_da9d3; }
    X86_TICK(c, 7);
    // 0da9ce  cmp edi, 1
    X86_AT(c, 0xda9ceu);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0da9d1  jne 0xda9b3
    X86_AT(c, 0xda9d1u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xda9b3u); goto L_da9b3; }
L_da9d3:
    X86_TICK(c, 7);
    // 0da9d3  and edi, edi
    X86_AT(c, 0xda9d3u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0da9d5  je 0xda9fd
    X86_AT(c, 0xda9d5u);
    if (x86_cc(c, 4)) { goto L_da9fd; }
    X86_TICK(c, 11);
    // 0da9d7  push 4
    X86_AT(c, 0xda9d7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da9d9  push 0
    X86_AT(c, 0xda9d9u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0da9db  call 0xcc814
    X86_AT(c, 0xda9dbu);
    push32(c, 0xda9e0u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xda9e0u);
    X86_TICK(c, 11);
    // 0da9e0  push 0xc340
    X86_AT(c, 0xda9e0u);
    { uint32_t v = 0xC340u; push32(c, v); }
    // 0da9e5  push 4
    X86_AT(c, 0xda9e5u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da9e7  call 0xc8cdc
    X86_AT(c, 0xda9e7u);
    push32(c, 0xda9ecu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xda9ecu);
    X86_TICK(c, 11);
    // 0da9ec  push 0
    X86_AT(c, 0xda9ecu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0da9ee  push 4
    X86_AT(c, 0xda9eeu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0da9f0  call 0xca2d4
    X86_AT(c, 0xda9f0u);
    push32(c, 0xda9f5u); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xda9f5u);
    X86_TICK(c, 9);
    // 0da9f5  add esp, 0x18
    X86_AT(c, 0xda9f5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0da9f8  jmp 0xdab08
    X86_AT(c, 0xda9f8u);
    goto L_dab08;
L_da9fd:
    X86_TICK(c, 25);
    // 0da9fd  push 0xb1d24
    X86_AT(c, 0xda9fdu);
    { uint32_t v = 0xB1D24u; push32(c, v); }
    // 0daa02  push 3
    X86_AT(c, 0xdaa02u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0daa04  push 8
    X86_AT(c, 0xdaa04u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0daa06  push 1
    X86_AT(c, 0xdaa06u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0daa08  push 0x2c
    X86_AT(c, 0xdaa08u);
    { uint32_t v = 0x2Cu; push32(c, v); }
    // 0daa0a  push 5
    X86_AT(c, 0xdaa0au);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0daa0c  push 4
    X86_AT(c, 0xdaa0cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0daa0e  lea eax, [ebp - 0x24]
    X86_AT(c, 0xdaa0eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFDCu);
    // 0daa11  push eax
    X86_AT(c, 0xdaa11u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0daa12  call 0xc8750
    X86_AT(c, 0xdaa12u);
    push32(c, 0xdaa17u); x86_call_known(c, 0xc8750u, f_000c8750); X86_RET(c, 0xdaa17u);
    X86_TICK(c, 2);
    // 0daa17  add esp, 0x20
    X86_AT(c, 0xdaa17u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
L_daa1a:
    X86_TICK(c, 9);
    // 0daa1a  push 4
    X86_AT(c, 0xdaa1au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0daa1c  call 0xca0a0
    X86_AT(c, 0xdaa1cu);
    push32(c, 0xdaa21u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xdaa21u);
    X86_TICK(c, 11);
    // 0daa21  push 2
    X86_AT(c, 0xdaa21u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0daa23  push 0x13
    X86_AT(c, 0xdaa23u);
    { uint32_t v = 0x13u; push32(c, v); }
    // 0daa25  call 0xcc814
    X86_AT(c, 0xdaa25u);
    push32(c, 0xdaa2au); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xdaa2au);
    X86_TICK(c, 11);
    // 0daa2a  push 0xc380
    X86_AT(c, 0xdaa2au);
    { uint32_t v = 0xC380u; push32(c, v); }
    // 0daa2f  push 4
    X86_AT(c, 0xdaa2fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0daa31  call 0xca414
    X86_AT(c, 0xdaa31u);
    push32(c, 0xdaa36u); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xdaa36u);
    X86_TICK(c, 15);
    // 0daa36  push 0x4d
    X86_AT(c, 0xdaa36u);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0daa38  lea eax, [ebp - 0x24]
    X86_AT(c, 0xdaa38u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFDCu);
    // 0daa3b  push eax
    X86_AT(c, 0xdaa3bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0daa3c  push 4
    X86_AT(c, 0xdaa3cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0daa3e  call 0xc8ad0
    X86_AT(c, 0xdaa3eu);
    push32(c, 0xdaa43u); x86_call_known(c, 0xc8ad0u, f_000c8ad0); X86_RET(c, 0xdaa43u);
    X86_TICK(c, 14);
    // 0daa43  xchg ebx, eax
    X86_AT(c, 0xdaa43u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0daa44  push 2
    X86_AT(c, 0xdaa44u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0daa46  push 0x13
    X86_AT(c, 0xdaa46u);
    { uint32_t v = 0x13u; push32(c, v); }
    // 0daa48  call 0xcc814
    X86_AT(c, 0xdaa48u);
    push32(c, 0xdaa4du); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xdaa4du);
    X86_TICK(c, 19);
    // 0daa4d  mov byte ptr [ebp - 1], 0
    X86_AT(c, 0xdaa4du);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x0u);
    // 0daa51  lea esi, [ebp - 1]
    X86_AT(c, 0xdaa51u);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0daa54  push esi
    X86_AT(c, 0xdaa54u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0daa55  push ebx
    X86_AT(c, 0xdaa55u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0daa56  push 5
    X86_AT(c, 0xdaa56u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0daa58  push 0xb1fb8
    X86_AT(c, 0xdaa58u);
    { uint32_t v = 0xB1FB8u; push32(c, v); }
    // 0daa5d  call 0xc8a68
    X86_AT(c, 0xdaa5du);
    push32(c, 0xdaa62u); x86_call_known(c, 0xc8a68u, f_000c8a68); X86_RET(c, 0xdaa62u);
    X86_TICK(c, 11);
    // 0daa62  push eax
    X86_AT(c, 0xdaa62u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0daa63  push 4
    X86_AT(c, 0xdaa63u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0daa65  call 0xca414
    X86_AT(c, 0xdaa65u);
    push32(c, 0xdaa6au); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xdaa6au);
    X86_TICK(c, 11);
    // 0daa6a  add esp, 0x40
    X86_AT(c, 0xdaa6au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0daa6d  push 0x14
    X86_AT(c, 0xdaa6du);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0daa6f  call 0xd6660
    X86_AT(c, 0xdaa6fu);
    push32(c, 0xdaa74u); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xdaa74u);
    X86_TICK(c, 17);
    // 0daa74  add esp, 4
    X86_AT(c, 0xdaa74u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0daa77  movzx edx, byte ptr [esi]
    X86_AT(c, 0xdaa77u);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[6])));
    // 0daa7a  sub edx, 0x43
    X86_AT(c, 0xdaa7au);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x43u, 0, 4); }
    // 0daa7d  cmp edx, 0x11
    X86_AT(c, 0xdaa7du);
    (void)x86_sub(c, c.r[2], 0x11u, 0, 4);
    // 0daa80  ja 0xdaa1a
    X86_AT(c, 0xdaa80u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0xdaa1au); goto L_daa1a; }
    X86_TICK(c, 7);
    // 0daa82  jmp dword ptr cs:[edx*4 + 0xdaa8a]
    X86_AT(c, 0xdaa82u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xDAA8Au)));
      switch (t) {
      case 0xdaa1au: X86_POLL(c, 0xdaa1au); goto L_daa1a;
      case 0xdaad2u: goto L_daad2;
      case 0xdaae0u: goto L_daae0;
      case 0xdaaeau: goto L_daaea;
      case 0xdaaf4u: goto L_daaf4;
      case 0xdaafeu: goto L_daafe;
      default: x86_jump(c, t); return; } }
L_daad2:
    X86_TICK(c, 11);
    // 0daad2  push 0
    X86_AT(c, 0xdaad2u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0daad4  push 4
    X86_AT(c, 0xdaad4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0daad6  call 0xca2d4
    X86_AT(c, 0xdaad6u);
    push32(c, 0xdaadbu); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xdaadbu);
    X86_TICK(c, 9);
    // 0daadb  add esp, 8
    X86_AT(c, 0xdaadbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0daade  jmp 0xdab08
    X86_AT(c, 0xdaadeu);
    goto L_dab08;
L_daae0:
    X86_TICK(c, 7);
    // 0daae0  call 0xd87d4
    X86_AT(c, 0xdaae0u);
    push32(c, 0xdaae5u); x86_call_known(c, 0xd87d4u, f_000d87d4); X86_RET(c, 0xdaae5u);
    X86_TICK(c, 7);
    // 0daae5  jmp 0xdaa1a
    X86_AT(c, 0xdaae5u);
    X86_POLL(c, 0xdaa1au); goto L_daa1a;
L_daaea:
    X86_TICK(c, 7);
    // 0daaea  call 0xd9a20
    X86_AT(c, 0xdaaeau);
    push32(c, 0xdaaefu); x86_call_known(c, 0xd9a20u, f_000d9a20); X86_RET(c, 0xdaaefu);
    X86_TICK(c, 7);
    // 0daaef  jmp 0xdaa1a
    X86_AT(c, 0xdaaefu);
    X86_POLL(c, 0xdaa1au); goto L_daa1a;
L_daaf4:
    X86_TICK(c, 7);
    // 0daaf4  call 0xda160
    X86_AT(c, 0xdaaf4u);
    push32(c, 0xdaaf9u); x86_call_known(c, 0xda160u, f_000da160); X86_RET(c, 0xdaaf9u);
    X86_TICK(c, 7);
    // 0daaf9  jmp 0xdaa1a
    X86_AT(c, 0xdaaf9u);
    X86_POLL(c, 0xdaa1au); goto L_daa1a;
L_daafe:
    X86_TICK(c, 7);
    // 0daafe  call 0xda4b0
    X86_AT(c, 0xdaafeu);
    push32(c, 0xdab03u); x86_call_known(c, 0xda4b0u, f_000da4b0); X86_RET(c, 0xdab03u);
    X86_TICK(c, 7);
    // 0dab03  jmp 0xdaa1a
    X86_AT(c, 0xdab03u);
    X86_POLL(c, 0xdaa1au); goto L_daa1a;
L_dab08:
    X86_TICK(c, 28);
    // 0dab08  pop edi
    X86_AT(c, 0xdab08u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dab09  pop esi
    X86_AT(c, 0xdab09u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0dab0a  pop ebx
    X86_AT(c, 0xdab0au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0dab0b  leave 
    X86_AT(c, 0xdab0bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0dab0c  ret 
    X86_AT(c, 0xdab0cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xda934u, "ran off the end of a function");
}
void f_000daa1a(X86Cpu& c) {
L_daa1a:
    X86_TICK(c, 9);
    // 0daa1a  push 4
    X86_AT(c, 0xdaa1au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0daa1c  call 0xca0a0
    X86_AT(c, 0xdaa1cu);
    push32(c, 0xdaa21u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xdaa21u);
    X86_TICK(c, 11);
    // 0daa21  push 2
    X86_AT(c, 0xdaa21u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0daa23  push 0x13
    X86_AT(c, 0xdaa23u);
    { uint32_t v = 0x13u; push32(c, v); }
    // 0daa25  call 0xcc814
    X86_AT(c, 0xdaa25u);
    push32(c, 0xdaa2au); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xdaa2au);
    X86_TICK(c, 11);
    // 0daa2a  push 0xc380
    X86_AT(c, 0xdaa2au);
    { uint32_t v = 0xC380u; push32(c, v); }
    // 0daa2f  push 4
    X86_AT(c, 0xdaa2fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0daa31  call 0xca414
    X86_AT(c, 0xdaa31u);
    push32(c, 0xdaa36u); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xdaa36u);
    X86_TICK(c, 15);
    // 0daa36  push 0x4d
    X86_AT(c, 0xdaa36u);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0daa38  lea eax, [ebp - 0x24]
    X86_AT(c, 0xdaa38u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFDCu);
    // 0daa3b  push eax
    X86_AT(c, 0xdaa3bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0daa3c  push 4
    X86_AT(c, 0xdaa3cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0daa3e  call 0xc8ad0
    X86_AT(c, 0xdaa3eu);
    push32(c, 0xdaa43u); x86_call_known(c, 0xc8ad0u, f_000c8ad0); X86_RET(c, 0xdaa43u);
    X86_TICK(c, 14);
    // 0daa43  xchg ebx, eax
    X86_AT(c, 0xdaa43u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0daa44  push 2
    X86_AT(c, 0xdaa44u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0daa46  push 0x13
    X86_AT(c, 0xdaa46u);
    { uint32_t v = 0x13u; push32(c, v); }
    // 0daa48  call 0xcc814
    X86_AT(c, 0xdaa48u);
    push32(c, 0xdaa4du); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xdaa4du);
    X86_TICK(c, 19);
    // 0daa4d  mov byte ptr [ebp - 1], 0
    X86_AT(c, 0xdaa4du);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x0u);
    // 0daa51  lea esi, [ebp - 1]
    X86_AT(c, 0xdaa51u);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0daa54  push esi
    X86_AT(c, 0xdaa54u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0daa55  push ebx
    X86_AT(c, 0xdaa55u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0daa56  push 5
    X86_AT(c, 0xdaa56u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0daa58  push 0xb1fb8
    X86_AT(c, 0xdaa58u);
    { uint32_t v = 0xB1FB8u; push32(c, v); }
    // 0daa5d  call 0xc8a68
    X86_AT(c, 0xdaa5du);
    push32(c, 0xdaa62u); x86_call_known(c, 0xc8a68u, f_000c8a68); X86_RET(c, 0xdaa62u);
    X86_TICK(c, 11);
    // 0daa62  push eax
    X86_AT(c, 0xdaa62u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0daa63  push 4
    X86_AT(c, 0xdaa63u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0daa65  call 0xca414
    X86_AT(c, 0xdaa65u);
    push32(c, 0xdaa6au); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xdaa6au);
    X86_TICK(c, 11);
    // 0daa6a  add esp, 0x40
    X86_AT(c, 0xdaa6au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0daa6d  push 0x14
    X86_AT(c, 0xdaa6du);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0daa6f  call 0xd6660
    X86_AT(c, 0xdaa6fu);
    push32(c, 0xdaa74u); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xdaa74u);
    X86_TICK(c, 17);
    // 0daa74  add esp, 4
    X86_AT(c, 0xdaa74u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0daa77  movzx edx, byte ptr [esi]
    X86_AT(c, 0xdaa77u);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[6])));
    // 0daa7a  sub edx, 0x43
    X86_AT(c, 0xdaa7au);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x43u, 0, 4); }
    // 0daa7d  cmp edx, 0x11
    X86_AT(c, 0xdaa7du);
    (void)x86_sub(c, c.r[2], 0x11u, 0, 4);
    // 0daa80  ja 0xdaa1a
    X86_AT(c, 0xdaa80u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0xdaa1au); goto L_daa1a; }
    X86_TICK(c, 7);
    // 0daa82  jmp dword ptr cs:[edx*4 + 0xdaa8a]
    X86_AT(c, 0xdaa82u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xDAA8Au)));
      switch (t) {
      case 0xdaa1au: X86_POLL(c, 0xdaa1au); goto L_daa1a;
      case 0xdaad2u: goto L_daad2;
      case 0xdaae0u: goto L_daae0;
      case 0xdaaeau: goto L_daaea;
      case 0xdaaf4u: goto L_daaf4;
      case 0xdaafeu: goto L_daafe;
      default: x86_jump(c, t); return; } }
L_daad2:
    X86_TICK(c, 11);
    // 0daad2  push 0
    X86_AT(c, 0xdaad2u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0daad4  push 4
    X86_AT(c, 0xdaad4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0daad6  call 0xca2d4
    X86_AT(c, 0xdaad6u);
    push32(c, 0xdaadbu); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xdaadbu);
    X86_TICK(c, 9);
    // 0daadb  add esp, 8
    X86_AT(c, 0xdaadbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0daade  jmp 0xdab08
    X86_AT(c, 0xdaadeu);
    goto L_dab08;
L_daae0:
    X86_TICK(c, 7);
    // 0daae0  call 0xd87d4
    X86_AT(c, 0xdaae0u);
    push32(c, 0xdaae5u); x86_call_known(c, 0xd87d4u, f_000d87d4); X86_RET(c, 0xdaae5u);
    X86_TICK(c, 7);
    // 0daae5  jmp 0xdaa1a
    X86_AT(c, 0xdaae5u);
    X86_POLL(c, 0xdaa1au); goto L_daa1a;
L_daaea:
    X86_TICK(c, 7);
    // 0daaea  call 0xd9a20
    X86_AT(c, 0xdaaeau);
    push32(c, 0xdaaefu); x86_call_known(c, 0xd9a20u, f_000d9a20); X86_RET(c, 0xdaaefu);
    X86_TICK(c, 7);
    // 0daaef  jmp 0xdaa1a
    X86_AT(c, 0xdaaefu);
    X86_POLL(c, 0xdaa1au); goto L_daa1a;
L_daaf4:
    X86_TICK(c, 7);
    // 0daaf4  call 0xda160
    X86_AT(c, 0xdaaf4u);
    push32(c, 0xdaaf9u); x86_call_known(c, 0xda160u, f_000da160); X86_RET(c, 0xdaaf9u);
    X86_TICK(c, 7);
    // 0daaf9  jmp 0xdaa1a
    X86_AT(c, 0xdaaf9u);
    X86_POLL(c, 0xdaa1au); goto L_daa1a;
L_daafe:
    X86_TICK(c, 7);
    // 0daafe  call 0xda4b0
    X86_AT(c, 0xdaafeu);
    push32(c, 0xdab03u); x86_call_known(c, 0xda4b0u, f_000da4b0); X86_RET(c, 0xdab03u);
    X86_TICK(c, 7);
    // 0dab03  jmp 0xdaa1a
    X86_AT(c, 0xdab03u);
    X86_POLL(c, 0xdaa1au); goto L_daa1a;
L_dab08:
    X86_TICK(c, 28);
    // 0dab08  pop edi
    X86_AT(c, 0xdab08u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dab09  pop esi
    X86_AT(c, 0xdab09u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0dab0a  pop ebx
    X86_AT(c, 0xdab0au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0dab0b  leave 
    X86_AT(c, 0xdab0bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0dab0c  ret 
    X86_AT(c, 0xdab0cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdaa1au, "ran off the end of a function");
}
void f_000dab10(X86Cpu& c) {
    X86_TICK(c, 39);
    // 0dab10  push ebp
    X86_AT(c, 0xdab10u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0dab11  mov ebp, esp
    X86_AT(c, 0xdab11u);
    c.r[5] = c.r[4];
    // 0dab13  sub esp, 0x234
    X86_AT(c, 0xdab13u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x234u, 0, 4); }
    // 0dab19  push ebx
    X86_AT(c, 0xdab19u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0dab1a  push esi
    X86_AT(c, 0xdab1au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dab1b  push edi
    X86_AT(c, 0xdab1bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dab1c  push 0xd
    X86_AT(c, 0xdab1cu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0dab1e  push 0xf
    X86_AT(c, 0xdab1eu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0dab20  push 0xb
    X86_AT(c, 0xdab20u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0dab22  push 0x17
    X86_AT(c, 0xdab22u);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0dab24  push 0x4d
    X86_AT(c, 0xdab24u);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0dab26  push 0xc0
    X86_AT(c, 0xdab26u);
    { uint32_t v = 0xC0u; push32(c, v); }
    // 0dab2b  push 0x270
    X86_AT(c, 0xdab2bu);
    { uint32_t v = 0x270u; push32(c, v); }
    // 0dab30  push 0xb8
    X86_AT(c, 0xdab30u);
    { uint32_t v = 0xB8u; push32(c, v); }
    // 0dab35  push 8
    X86_AT(c, 0xdab35u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0dab37  push 4
    X86_AT(c, 0xdab37u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0dab39  call 0xc9fbc
    X86_AT(c, 0xdab39u);
    push32(c, 0xdab3eu); x86_call_known(c, 0xc9fbcu, f_000c9fbc); X86_RET(c, 0xdab3eu);
    X86_TICK(c, 9);
    // 0dab3e  push 4
    X86_AT(c, 0xdab3eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0dab40  call 0xca100
    X86_AT(c, 0xdab40u);
    push32(c, 0xdab45u); x86_call_known(c, 0xca100u, f_000ca100); X86_RET(c, 0xdab45u);
    X86_TICK(c, 11);
    // 0dab45  push 1
    X86_AT(c, 0xdab45u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0dab47  push 0x18
    X86_AT(c, 0xdab47u);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0dab49  call 0xcc814
    X86_AT(c, 0xdab49u);
    push32(c, 0xdab4eu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xdab4eu);
    X86_TICK(c, 11);
    // 0dab4e  push 0xc39c
    X86_AT(c, 0xdab4eu);
    { uint32_t v = 0xC39Cu; push32(c, v); }
    // 0dab53  push 4
    X86_AT(c, 0xdab53u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0dab55  call 0xc8cdc
    X86_AT(c, 0xdab55u);
    push32(c, 0xdab5au); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xdab5au);
    X86_TICK(c, 29);
    // 0dab5a  add esp, 0x3c
    X86_AT(c, 0xdab5au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0dab5d  lea eax, [ebp - 0x234]
    X86_AT(c, 0xdab5du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFDCCu);
    // 0dab63  push eax
    X86_AT(c, 0xdab63u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dab64  push 4
    X86_AT(c, 0xdab64u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0dab66  push 0x1c
    X86_AT(c, 0xdab66u);
    { uint32_t v = 0x1Cu; push32(c, v); }
    // 0dab68  push 1
    X86_AT(c, 0xdab68u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0dab6a  push 0x1c
    X86_AT(c, 0xdab6au);
    { uint32_t v = 0x1Cu; push32(c, v); }
    // 0dab6c  push 4
    X86_AT(c, 0xdab6cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0dab6e  push 4
    X86_AT(c, 0xdab6eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0dab70  lea eax, [ebp - 0x24]
    X86_AT(c, 0xdab70u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFDCu);
    // 0dab73  push eax
    X86_AT(c, 0xdab73u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dab74  call 0xc8750
    X86_AT(c, 0xdab74u);
    push32(c, 0xdab79u); x86_call_known(c, 0xc8750u, f_000c8750); X86_RET(c, 0xdab79u);
    X86_TICK(c, 4);
    // 0dab79  sub edi, edi
    X86_AT(c, 0xdab79u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0dab7b  add esp, 0x20
    X86_AT(c, 0xdab7bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
L_dab7e:
    X86_TICK(c, 7);
    // 0dab7e  cmp edi, 4
    X86_AT(c, 0xdab7eu);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0dab81  jge 0xdabd5
    X86_AT(c, 0xdab81u);
    if (x86_cc(c, 13)) { goto L_dabd5; }
    X86_TICK(c, 13);
    // 0dab83  lea eax, [edi + 4]
    X86_AT(c, 0xdab83u);
    c.r[0] = (uint32_t)(c.r[7] + 0x4u);
    // 0dab86  push eax
    X86_AT(c, 0xdab86u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dab87  push 0x16
    X86_AT(c, 0xdab87u);
    { uint32_t v = 0x16u; push32(c, v); }
    // 0dab89  call 0xcc814
    X86_AT(c, 0xdab89u);
    push32(c, 0xdab8eu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xdab8eu);
    X86_TICK(c, 17);
    // 0dab8e  push 2
    X86_AT(c, 0xdab8eu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0dab90  lea eax, [edi + 1]
    X86_AT(c, 0xdab90u);
    c.r[0] = (uint32_t)(c.r[7] + 0x1u);
    // 0dab93  push eax
    X86_AT(c, 0xdab93u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dab94  push 4
    X86_AT(c, 0xdab94u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0dab96  mov esi, eax
    X86_AT(c, 0xdab96u);
    c.r[6] = c.r[0];
    // 0dab98  call 0xc8cb8
    X86_AT(c, 0xdab98u);
    push32(c, 0xdab9du); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xdab9du);
    X86_TICK(c, 11);
    // 0dab9d  push 0xc3d6
    X86_AT(c, 0xdab9du);
    { uint32_t v = 0xC3D6u; push32(c, v); }
    // 0daba2  push 4
    X86_AT(c, 0xdaba2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0daba4  call 0xca414
    X86_AT(c, 0xdaba4u);
    push32(c, 0xdaba9u); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xdaba9u);
    X86_TICK(c, 51);
    // 0daba9  lea eax, [edi + 0x41]
    X86_AT(c, 0xdaba9u);
    c.r[0] = (uint32_t)(c.r[7] + 0x41u);
    // 0dabac  push eax
    X86_AT(c, 0xdabacu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dabad  imul eax, edi, 0x21a
    X86_AT(c, 0xdabadu);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0dabb3  lea edx, [eax*1 + 0xb0508]
    X86_AT(c, 0xdabb3u);
    c.r[2] = (uint32_t)(c.r[0] + 0xB0508u);
    // 0dabba  push edx
    X86_AT(c, 0xdabbau);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0dabbb  push edx
    X86_AT(c, 0xdabbbu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0dabbc  mov eax, edi
    X86_AT(c, 0xdabbcu);
    c.r[0] = c.r[7];
    // 0dabbe  add al, 0x41
    X86_AT(c, 0xdabbeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x41u, 0, 1)); }
    // 0dabc0  push eax
    X86_AT(c, 0xdabc0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dabc1  push edi
    X86_AT(c, 0xdabc1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dabc2  lea eax, [ebp - 0x234]
    X86_AT(c, 0xdabc2u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFDCCu);
    // 0dabc8  push eax
    X86_AT(c, 0xdabc8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dabc9  call 0xc878c
    X86_AT(c, 0xdabc9u);
    push32(c, 0xdabceu); x86_call_known(c, 0xc878cu, f_000c878c); X86_RET(c, 0xdabceu);
    X86_TICK(c, 11);
    // 0dabce  mov edi, esi
    X86_AT(c, 0xdabceu);
    c.r[7] = c.r[6];
    // 0dabd0  add esp, 0x34
    X86_AT(c, 0xdabd0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
    // 0dabd3  jmp 0xdab7e
    X86_AT(c, 0xdabd3u);
    X86_POLL(c, 0xdab7eu); goto L_dab7e;
L_dabd5:
    X86_TICK(c, 9);
    // 0dabd5  push 4
    X86_AT(c, 0xdabd5u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0dabd7  call 0xca0a0
    X86_AT(c, 0xdabd7u);
    push32(c, 0xdabdcu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xdabdcu);
    X86_TICK(c, 11);
    // 0dabdc  push 9
    X86_AT(c, 0xdabdcu);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0dabde  push 0x18
    X86_AT(c, 0xdabdeu);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0dabe0  call 0xcc814
    X86_AT(c, 0xdabe0u);
    push32(c, 0xdabe5u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xdabe5u);
    X86_TICK(c, 11);
    // 0dabe5  push 0xc3dc
    X86_AT(c, 0xdabe5u);
    { uint32_t v = 0xC3DCu; push32(c, v); }
    // 0dabea  push 4
    X86_AT(c, 0xdabeau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0dabec  call 0xc8cdc
    X86_AT(c, 0xdabecu);
    push32(c, 0xdabf1u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xdabf1u);
    X86_TICK(c, 11);
    // 0dabf1  push 0xa
    X86_AT(c, 0xdabf1u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0dabf3  push 0x1c
    X86_AT(c, 0xdabf3u);
    { uint32_t v = 0x1Cu; push32(c, v); }
    // 0dabf5  call 0xcc814
    X86_AT(c, 0xdabf5u);
    push32(c, 0xdabfau); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xdabfau);
    X86_TICK(c, 11);
    // 0dabfa  push 0xc418
    X86_AT(c, 0xdabfau);
    { uint32_t v = 0xC418u; push32(c, v); }
    // 0dabff  push 4
    X86_AT(c, 0xdabffu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0dac01  call 0xc8cdc
    X86_AT(c, 0xdac01u);
    push32(c, 0xdac06u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xdac06u);
    X86_TICK(c, 15);
    // 0dac06  push 1
    X86_AT(c, 0xdac06u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0dac08  lea eax, [ebp - 0x24]
    X86_AT(c, 0xdac08u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFDCu);
    // 0dac0b  push eax
    X86_AT(c, 0xdac0bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dac0c  push 4
    X86_AT(c, 0xdac0cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0dac0e  call 0xc8bc4
    X86_AT(c, 0xdac0eu);
    push32(c, 0xdac13u); x86_call_known(c, 0xc8bc4u, f_000c8bc4); X86_RET(c, 0xdac13u);
    X86_TICK(c, 11);
    // 0dac13  mov byte ptr [ebp - 1], al
    X86_AT(c, 0xdac13u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 0dac16  add esp, 0x30
    X86_AT(c, 0xdac16u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0dac19  dec al
    X86_AT(c, 0xdac19u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0dac1b  jne 0xdac83
    X86_AT(c, 0xdac1bu);
    if (x86_cc(c, 5)) { goto L_dac83; }
    X86_TICK(c, 11);
    // 0dac1d  push 9
    X86_AT(c, 0xdac1du);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0dac1f  push 0x1c
    X86_AT(c, 0xdac1fu);
    { uint32_t v = 0x1Cu; push32(c, v); }
    // 0dac21  call 0xcc814
    X86_AT(c, 0xdac21u);
    push32(c, 0xdac26u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xdac26u);
    X86_TICK(c, 11);
    // 0dac26  push 0xc474
    X86_AT(c, 0xdac26u);
    { uint32_t v = 0xC474u; push32(c, v); }
    // 0dac2b  push 4
    X86_AT(c, 0xdac2bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0dac2d  call 0xc8cdc
    X86_AT(c, 0xdac2du);
    push32(c, 0xdac32u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xdac32u);
    X86_TICK(c, 11);
    // 0dac32  push 0xa
    X86_AT(c, 0xdac32u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0dac34  push 0x1c
    X86_AT(c, 0xdac34u);
    { uint32_t v = 0x1Cu; push32(c, v); }
    // 0dac36  call 0xcc814
    X86_AT(c, 0xdac36u);
    push32(c, 0xdac3bu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xdac3bu);
    X86_TICK(c, 11);
    // 0dac3b  push 0xc4ac
    X86_AT(c, 0xdac3bu);
    { uint32_t v = 0xC4ACu; push32(c, v); }
    // 0dac40  push 4
    X86_AT(c, 0xdac40u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0dac42  call 0xc8cdc
    X86_AT(c, 0xdac42u);
    push32(c, 0xdac47u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xdac47u);
    X86_TICK(c, 9);
    // 0dac47  push 0xc504
    X86_AT(c, 0xdac47u);
    { uint32_t v = 0xC504u; push32(c, v); }
    // 0dac4c  call 0xcad60
    X86_AT(c, 0xdac4cu);
    push32(c, 0xdac51u); x86_call_known(c, 0xcad60u, f_000cad60); X86_RET(c, 0xdac51u);
    X86_TICK(c, 2);
    // 0dac51  add esp, 0x24
    X86_AT(c, 0xdac51u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
L_dac54:
    X86_TICK(c, 9);
    // 0dac54  push 4
    X86_AT(c, 0xdac54u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0dac56  call 0xc81e4
    X86_AT(c, 0xdac56u);
    push32(c, 0xdac5bu); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xdac5bu);
    X86_TICK(c, 9);
    // 0dac5b  add esp, 4
    X86_AT(c, 0xdac5bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0dac5e  and al, al
    X86_AT(c, 0xdac5eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0dac60  je 0xdac54
    X86_AT(c, 0xdac60u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xdac54u); goto L_dac54; }
    X86_TICK(c, 9);
    // 0dac62  push 2
    X86_AT(c, 0xdac62u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0dac64  call 0xca3cc
    X86_AT(c, 0xdac64u);
    push32(c, 0xdac69u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xdac69u);
    X86_TICK(c, 9);
    // 0dac69  push 4
    X86_AT(c, 0xdac69u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0dac6b  call 0xca0a0
    X86_AT(c, 0xdac6bu);
    push32(c, 0xdac70u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xdac70u);
    X86_TICK(c, 11);
    // 0dac70  push 0
    X86_AT(c, 0xdac70u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0dac72  push 4
    X86_AT(c, 0xdac72u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0dac74  call 0xca2d4
    X86_AT(c, 0xdac74u);
    push32(c, 0xdac79u); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xdac79u);
    X86_TICK(c, 9);
    // 0dac79  mov eax, 0xffffffff
    X86_AT(c, 0xdac79u);
    c.r[0] = 0xFFFFFFFFu;
    // 0dac7e  jmp 0xdadc4
    X86_AT(c, 0xdac7eu);
    goto L_dadc4;
L_dac83:
    X86_TICK(c, 11);
    // 0dac83  mov al, byte ptr [ebp - 1]
    X86_AT(c, 0xdac83u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))));
    // 0dac86  cmp al, 0x41
    X86_AT(c, 0xdac86u);
    (void)x86_sub(c, g8(c, 0), 0x41u, 0, 1);
    // 0dac88  jb 0xdabd5
    X86_AT(c, 0xdac88u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xdabd5u); goto L_dabd5; }
    X86_TICK(c, 47);
    // 0dac8e  sub byte ptr [ebp - 1], 0x41
    X86_AT(c, 0xdac8eu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)); uint32_t v = rd8(ea); wr8(ea, x86_sub(c, v, 0x41u, 0, 1)); }
    // 0dac92  movzx eax, byte ptr [ebp - 1]
    X86_AT(c, 0xdac92u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)));
    // 0dac96  imul eax, eax, 0x21a
    X86_AT(c, 0xdac96u);
    c.r[0] = x86_imul2(c, c.r[0], 0x21Au, 4);
    // 0dac9c  cmp byte ptr [eax + 0xb0508], 0
    X86_AT(c, 0xdac9cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0508u))), 0x0u, 0, 1);
    // 0daca3  jne 0xdaceb
    X86_AT(c, 0xdaca3u);
    if (x86_cc(c, 5)) { goto L_daceb; }
    X86_TICK(c, 11);
    // 0daca5  push 0xc
    X86_AT(c, 0xdaca5u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0daca7  push 0x1f
    X86_AT(c, 0xdaca7u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0daca9  call 0xcc814
    X86_AT(c, 0xdaca9u);
    push32(c, 0xdacaeu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xdacaeu);
    X86_TICK(c, 11);
    // 0dacae  push 0xc538
    X86_AT(c, 0xdacaeu);
    { uint32_t v = 0xC538u; push32(c, v); }
    // 0dacb3  push 4
    X86_AT(c, 0xdacb3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0dacb5  call 0xc8cdc
    X86_AT(c, 0xdacb5u);
    push32(c, 0xdacbau); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xdacbau);
    X86_TICK(c, 9);
    // 0dacba  push 0xc584
    X86_AT(c, 0xdacbau);
    { uint32_t v = 0xC584u; push32(c, v); }
    // 0dacbf  call 0xcad60
    X86_AT(c, 0xdacbfu);
    push32(c, 0xdacc4u); x86_call_known(c, 0xcad60u, f_000cad60); X86_RET(c, 0xdacc4u);
    X86_TICK(c, 2);
    // 0dacc4  add esp, 0x14
    X86_AT(c, 0xdacc4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_dacc7:
    X86_TICK(c, 9);
    // 0dacc7  push 4
    X86_AT(c, 0xdacc7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0dacc9  call 0xc81e4
    X86_AT(c, 0xdacc9u);
    push32(c, 0xdacceu); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xdacceu);
    X86_TICK(c, 9);
    // 0dacce  add esp, 4
    X86_AT(c, 0xdacceu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0dacd1  and al, al
    X86_AT(c, 0xdacd1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0dacd3  je 0xdacc7
    X86_AT(c, 0xdacd3u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xdacc7u); goto L_dacc7; }
    X86_TICK(c, 9);
    // 0dacd5  push 2
    X86_AT(c, 0xdacd5u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0dacd7  call 0xca3cc
    X86_AT(c, 0xdacd7u);
    push32(c, 0xdacdcu); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xdacdcu);
    X86_TICK(c, 9);
    // 0dacdc  push 4
    X86_AT(c, 0xdacdcu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0dacde  call 0xca0a0
    X86_AT(c, 0xdacdeu);
    push32(c, 0xdace3u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xdace3u);
    X86_TICK(c, 9);
    // 0dace3  add esp, 8
    X86_AT(c, 0xdace3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0dace6  jmp 0xdabd5
    X86_AT(c, 0xdace6u);
    X86_POLL(c, 0xdabd5u); goto L_dabd5;
L_daceb:
    X86_TICK(c, 11);
    // 0daceb  push 9
    X86_AT(c, 0xdacebu);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0daced  push 0x18
    X86_AT(c, 0xdacedu);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0dacef  call 0xcc814
    X86_AT(c, 0xdacefu);
    push32(c, 0xdacf4u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xdacf4u);
    X86_TICK(c, 41);
    // 0dacf4  movzx eax, byte ptr [ebp - 1]
    X86_AT(c, 0xdacf4u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)));
    // 0dacf8  imul eax, eax, 0x21a
    X86_AT(c, 0xdacf8u);
    c.r[0] = x86_imul2(c, c.r[0], 0x21Au, 4);
    // 0dacfe  lea edx, [eax*1 + 0xb0508]
    X86_AT(c, 0xdacfeu);
    c.r[2] = (uint32_t)(c.r[0] + 0xB0508u);
    // 0dad05  push edx
    X86_AT(c, 0xdad05u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0dad06  push 4
    X86_AT(c, 0xdad06u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0dad08  call 0xca850
    X86_AT(c, 0xdad08u);
    push32(c, 0xdad0du); x86_call_known(c, 0xca850u, f_000ca850); X86_RET(c, 0xdad0du);
    X86_TICK(c, 11);
    // 0dad0d  push 0xa
    X86_AT(c, 0xdad0du);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0dad0f  push 0x1c
    X86_AT(c, 0xdad0fu);
    { uint32_t v = 0x1Cu; push32(c, v); }
    // 0dad11  call 0xcc814
    X86_AT(c, 0xdad11u);
    push32(c, 0xdad16u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xdad16u);
    X86_TICK(c, 11);
    // 0dad16  push 0xc5b8
    X86_AT(c, 0xdad16u);
    { uint32_t v = 0xC5B8u; push32(c, v); }
    // 0dad1b  push 4
    X86_AT(c, 0xdad1bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0dad1d  call 0xc8cdc
    X86_AT(c, 0xdad1du);
    push32(c, 0xdad22u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xdad22u);
    X86_TICK(c, 9);
    // 0dad22  push 0xc614
    X86_AT(c, 0xdad22u);
    { uint32_t v = 0xC614u; push32(c, v); }
    // 0dad27  call 0xcad60
    X86_AT(c, 0xdad27u);
    push32(c, 0xdad2cu); x86_call_known(c, 0xcad60u, f_000cad60); X86_RET(c, 0xdad2cu);
    X86_TICK(c, 2);
    // 0dad2c  add esp, 0x24
    X86_AT(c, 0xdad2cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
L_dad2f:
    X86_TICK(c, 9);
    // 0dad2f  push 4
    X86_AT(c, 0xdad2fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0dad31  call 0xc81e4
    X86_AT(c, 0xdad31u);
    push32(c, 0xdad36u); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xdad36u);
    X86_TICK(c, 12);
    // 0dad36  xchg ebx, eax
    X86_AT(c, 0xdad36u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0dad37  add esp, 4
    X86_AT(c, 0xdad37u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0dad3a  cmp bl, 0x59
    X86_AT(c, 0xdad3au);
    (void)x86_sub(c, g8(c, 3), 0x59u, 0, 1);
    // 0dad3d  je 0xdad49
    X86_AT(c, 0xdad3du);
    if (x86_cc(c, 4)) { goto L_dad49; }
    X86_TICK(c, 7);
    // 0dad3f  cmp bl, 0x4e
    X86_AT(c, 0xdad3fu);
    (void)x86_sub(c, g8(c, 3), 0x4Eu, 0, 1);
    // 0dad42  je 0xdad49
    X86_AT(c, 0xdad42u);
    if (x86_cc(c, 4)) { goto L_dad49; }
    X86_TICK(c, 7);
    // 0dad44  cmp bl, 1
    X86_AT(c, 0xdad44u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0dad47  jne 0xdad2f
    X86_AT(c, 0xdad47u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xdad2fu); goto L_dad2f; }
L_dad49:
    X86_TICK(c, 9);
    // 0dad49  push 2
    X86_AT(c, 0xdad49u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0dad4b  call 0xca3cc
    X86_AT(c, 0xdad4bu);
    push32(c, 0xdad50u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xdad50u);
    X86_TICK(c, 9);
    // 0dad50  push 4
    X86_AT(c, 0xdad50u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0dad52  call 0xca0a0
    X86_AT(c, 0xdad52u);
    push32(c, 0xdad57u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xdad57u);
    X86_TICK(c, 9);
    // 0dad57  add esp, 8
    X86_AT(c, 0xdad57u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0dad5a  cmp bl, 0x59
    X86_AT(c, 0xdad5au);
    (void)x86_sub(c, g8(c, 3), 0x59u, 0, 1);
    // 0dad5d  jne 0xdabd5
    X86_AT(c, 0xdad5du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xdabd5u); goto L_dabd5; }
    X86_TICK(c, 17);
    // 0dad63  push 8
    X86_AT(c, 0xdad63u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0dad65  push 0x3c
    X86_AT(c, 0xdad65u);
    { uint32_t v = 0x3Cu; push32(c, v); }
    // 0dad67  push 4
    X86_AT(c, 0xdad67u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0dad69  push 0x14
    X86_AT(c, 0xdad69u);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0dad6b  push 4
    X86_AT(c, 0xdad6bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0dad6d  call 0xcab04
    X86_AT(c, 0xdad6du);
    push32(c, 0xdad72u); x86_call_known(c, 0xcab04u, f_000cab04); X86_RET(c, 0xdad72u);
    X86_TICK(c, 11);
    // 0dad72  push 0xa
    X86_AT(c, 0xdad72u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0dad74  push 0x1c
    X86_AT(c, 0xdad74u);
    { uint32_t v = 0x1Cu; push32(c, v); }
    // 0dad76  call 0xcc814
    X86_AT(c, 0xdad76u);
    push32(c, 0xdad7bu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xdad7bu);
    X86_TICK(c, 11);
    // 0dad7b  push 0xc644
    X86_AT(c, 0xdad7bu);
    { uint32_t v = 0xC644u; push32(c, v); }
    // 0dad80  push 4
    X86_AT(c, 0xdad80u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0dad82  call 0xc8cdc
    X86_AT(c, 0xdad82u);
    push32(c, 0xdad87u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xdad87u);
    X86_TICK(c, 9);
    // 0dad87  push 4
    X86_AT(c, 0xdad87u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0dad89  call 0xcacec
    X86_AT(c, 0xdad89u);
    push32(c, 0xdad8eu); x86_call_known(c, 0xcacecu, f_000cacec); X86_RET(c, 0xdad8eu);
    X86_TICK(c, 9);
    // 0dad8e  push 0xc6a0
    X86_AT(c, 0xdad8eu);
    { uint32_t v = 0xC6A0u; push32(c, v); }
    // 0dad93  call 0xcad60
    X86_AT(c, 0xdad93u);
    push32(c, 0xdad98u); x86_call_known(c, 0xcad60u, f_000cad60); X86_RET(c, 0xdad98u);
    X86_TICK(c, 2);
    // 0dad98  add esp, 0x2c
    X86_AT(c, 0xdad98u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
L_dad9b:
    X86_TICK(c, 9);
    // 0dad9b  push 4
    X86_AT(c, 0xdad9bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0dad9d  call 0xc81e4
    X86_AT(c, 0xdad9du);
    push32(c, 0xdada2u); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xdada2u);
    X86_TICK(c, 9);
    // 0dada2  add esp, 4
    X86_AT(c, 0xdada2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0dada5  and al, al
    X86_AT(c, 0xdada5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0dada7  je 0xdad9b
    X86_AT(c, 0xdada7u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xdad9bu); goto L_dad9b; }
    X86_TICK(c, 9);
    // 0dada9  push 2
    X86_AT(c, 0xdada9u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0dadab  call 0xca3cc
    X86_AT(c, 0xdadabu);
    push32(c, 0xdadb0u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xdadb0u);
    X86_TICK(c, 9);
    // 0dadb0  push 4
    X86_AT(c, 0xdadb0u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0dadb2  call 0xca0a0
    X86_AT(c, 0xdadb2u);
    push32(c, 0xdadb7u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xdadb7u);
    X86_TICK(c, 11);
    // 0dadb7  push 0
    X86_AT(c, 0xdadb7u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0dadb9  push 4
    X86_AT(c, 0xdadb9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0dadbb  call 0xca2d4
    X86_AT(c, 0xdadbbu);
    push32(c, 0xdadc0u); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xdadc0u);
    X86_TICK(c, 6);
    // 0dadc0  movzx eax, byte ptr [ebp - 1]
    X86_AT(c, 0xdadc0u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)));
L_dadc4:
    X86_TICK(c, 30);
    // 0dadc4  add esp, 0x10
    X86_AT(c, 0xdadc4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0dadc7  pop edi
    X86_AT(c, 0xdadc7u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dadc8  pop esi
    X86_AT(c, 0xdadc8u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0dadc9  pop ebx
    X86_AT(c, 0xdadc9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0dadca  leave 
    X86_AT(c, 0xdadcau);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0dadcb  ret 
    X86_AT(c, 0xdadcbu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdab10u, "ran off the end of a function");
}
void f_000dadcc(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0dadcc  push ebp
    X86_AT(c, 0xdadccu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0dadcd  mov ebp, esp
    X86_AT(c, 0xdadcdu);
    c.r[5] = c.r[4];
    // 0dadcf  sub esp, 0xc
    X86_AT(c, 0xdadcfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0dadd2  push ebx
    X86_AT(c, 0xdadd2u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0dadd3  push esi
    X86_AT(c, 0xdadd3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dadd4  push edi
    X86_AT(c, 0xdadd4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dadd5  mov dword ptr [ebp - 4], 0xb3830
    X86_AT(c, 0xdadd5u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0xB3830u);
    // 0daddc  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xdaddcu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0daddf  dec edx
    X86_AT(c, 0xdaddfu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0dade0  cmp edx, 3
    X86_AT(c, 0xdade0u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0dade3  ja 0xdaefa
    X86_AT(c, 0xdade3u);
    if (x86_cc(c, 7)) { goto L_daefa; }
    X86_TICK(c, 7);
    // 0dade9  jmp dword ptr cs:[edx*4 + 0xdadf1]
    X86_AT(c, 0xdade9u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xDADF1u)));
      switch (t) {
      case 0xdae01u: goto L_dae01;
      case 0xdae22u: goto L_dae22;
      case 0xdae6cu: goto L_dae6c;
      case 0xdaeb5u: goto L_daeb5;
      default: x86_jump(c, t); return; } }
L_dae01:
    X86_TICK(c, 2);
    // 0dae01  sub edi, edi
    X86_AT(c, 0xdae01u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_dae03:
    X86_TICK(c, 7);
    // 0dae03  cmp edi, 0x100
    X86_AT(c, 0xdae03u);
    (void)x86_sub(c, c.r[7], 0x100u, 0, 4);
    // 0dae09  jge 0xdaefa
    X86_AT(c, 0xdae09u);
    if (x86_cc(c, 13)) { goto L_daefa; }
    X86_TICK(c, 35);
    // 0dae0f  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xdae0fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0dae12  inc dword ptr [ebp + 8]
    X86_AT(c, 0xdae12u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0dae15  mov al, byte ptr [eax]
    X86_AT(c, 0xdae15u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0dae17  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xdae17u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0dae1a  inc dword ptr [ebp - 4]
    X86_AT(c, 0xdae1au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0dae1d  mov byte ptr [edx], al
    X86_AT(c, 0xdae1du);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 0dae1f  inc edi
    X86_AT(c, 0xdae1fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0dae20  jmp 0xdae03
    X86_AT(c, 0xdae20u);
    X86_POLL(c, 0xdae03u); goto L_dae03;
L_dae22:
    X86_TICK(c, 4);
    // 0dae22  mov edi, 0xf0
    X86_AT(c, 0xdae22u);
    c.r[7] = 0xF0u;
    // 0dae27  sub ebx, ebx
    X86_AT(c, 0xdae27u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_dae29:
    X86_TICK(c, 7);
    // 0dae29  cmp ebx, 0x10
    X86_AT(c, 0xdae29u);
    (void)x86_sub(c, c.r[3], 0x10u, 0, 4);
    // 0dae2c  jge 0xdae54
    X86_AT(c, 0xdae2cu);
    if (x86_cc(c, 13)) { goto L_dae54; }
    X86_TICK(c, 2);
    // 0dae2e  sub esi, esi
    X86_AT(c, 0xdae2eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_dae30:
    X86_TICK(c, 7);
    // 0dae30  cmp esi, 0x10
    X86_AT(c, 0xdae30u);
    (void)x86_sub(c, c.r[6], 0x10u, 0, 4);
    // 0dae33  jge 0xdae50
    X86_AT(c, 0xdae33u);
    if (x86_cc(c, 13)) { goto L_dae50; }
    X86_TICK(c, 38);
    // 0dae35  mov eax, esi
    X86_AT(c, 0xdae35u);
    c.r[0] = c.r[6];
    // 0dae37  shl eax, 4
    X86_AT(c, 0xdae37u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0dae3a  neg eax
    X86_AT(c, 0xdae3au);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 0dae3c  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xdae3cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0dae3f  lea ecx, [edi + edx*1]
    X86_AT(c, 0xdae3fu);
    c.r[1] = (uint32_t)(c.r[7] + c.r[2]);
    // 0dae42  mov al, byte ptr [ecx + eax*1]
    X86_AT(c, 0xdae42u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[1] + c.r[0]))));
    // 0dae45  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xdae45u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0dae48  inc dword ptr [ebp - 4]
    X86_AT(c, 0xdae48u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0dae4b  mov byte ptr [edx], al
    X86_AT(c, 0xdae4bu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 0dae4d  inc esi
    X86_AT(c, 0xdae4du);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0dae4e  jmp 0xdae30
    X86_AT(c, 0xdae4eu);
    X86_POLL(c, 0xdae30u); goto L_dae30;
L_dae50:
    X86_TICK(c, 11);
    // 0dae50  inc edi
    X86_AT(c, 0xdae50u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0dae51  inc ebx
    X86_AT(c, 0xdae51u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0dae52  jmp 0xdae29
    X86_AT(c, 0xdae52u);
    X86_POLL(c, 0xdae29u); goto L_dae29;
L_dae54:
    X86_TICK(c, 31);
    // 0dae54  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xdae54u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0dae57  mov esi, dword ptr [eax]
    X86_AT(c, 0xdae57u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0dae59  mov edx, 0xf
    X86_AT(c, 0xdae59u);
    c.r[2] = 0xFu;
    // 0dae5e  mov ecx, dword ptr [ebp + 0x14]
    X86_AT(c, 0xdae5eu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0dae61  sub edx, dword ptr [ecx]
    X86_AT(c, 0xdae61u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[1]))), 0, 4); }
    // 0dae63  mov dword ptr [eax], edx
    X86_AT(c, 0xdae63u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0])), c.r[2]);
    // 0dae65  mov dword ptr [ecx], esi
    X86_AT(c, 0xdae65u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1])), c.r[6]);
    // 0dae67  jmp 0xdaefa
    X86_AT(c, 0xdae67u);
    goto L_daefa;
L_dae6c:
    X86_TICK(c, 4);
    // 0dae6c  mov edi, 0xff
    X86_AT(c, 0xdae6cu);
    c.r[7] = 0xFFu;
    // 0dae71  sub ebx, ebx
    X86_AT(c, 0xdae71u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_dae73:
    X86_TICK(c, 7);
    // 0dae73  cmp ebx, 0x10
    X86_AT(c, 0xdae73u);
    (void)x86_sub(c, c.r[3], 0x10u, 0, 4);
    // 0dae76  jge 0xdae9d
    X86_AT(c, 0xdae76u);
    if (x86_cc(c, 13)) { goto L_dae9d; }
    X86_TICK(c, 2);
    // 0dae78  sub esi, esi
    X86_AT(c, 0xdae78u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_dae7a:
    X86_TICK(c, 7);
    // 0dae7a  cmp esi, 0x10
    X86_AT(c, 0xdae7au);
    (void)x86_sub(c, c.r[6], 0x10u, 0, 4);
    // 0dae7d  jge 0xdae97
    X86_AT(c, 0xdae7du);
    if (x86_cc(c, 13)) { goto L_dae97; }
    X86_TICK(c, 35);
    // 0dae7f  mov eax, esi
    X86_AT(c, 0xdae7fu);
    c.r[0] = c.r[6];
    // 0dae81  neg eax
    X86_AT(c, 0xdae81u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 0dae83  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xdae83u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0dae86  lea ecx, [edi + edx*1]
    X86_AT(c, 0xdae86u);
    c.r[1] = (uint32_t)(c.r[7] + c.r[2]);
    // 0dae89  mov al, byte ptr [ecx + eax*1]
    X86_AT(c, 0xdae89u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[1] + c.r[0]))));
    // 0dae8c  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xdae8cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0dae8f  inc dword ptr [ebp - 4]
    X86_AT(c, 0xdae8fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0dae92  mov byte ptr [edx], al
    X86_AT(c, 0xdae92u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 0dae94  inc esi
    X86_AT(c, 0xdae94u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0dae95  jmp 0xdae7a
    X86_AT(c, 0xdae95u);
    X86_POLL(c, 0xdae7au); goto L_dae7a;
L_dae97:
    X86_TICK(c, 11);
    // 0dae97  sub edi, 0x10
    X86_AT(c, 0xdae97u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, 0x10u, 0, 4); }
    // 0dae9a  inc ebx
    X86_AT(c, 0xdae9au);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0dae9b  jmp 0xdae73
    X86_AT(c, 0xdae9bu);
    X86_POLL(c, 0xdae73u); goto L_dae73;
L_dae9d:
    X86_TICK(c, 33);
    // 0dae9d  mov eax, 0xf
    X86_AT(c, 0xdae9du);
    c.r[0] = 0xFu;
    // 0daea2  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xdaea2u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0daea5  sub eax, dword ptr [edx]
    X86_AT(c, 0xdaea5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[2]))), 0, 4); }
    // 0daea7  mov dword ptr [edx], eax
    X86_AT(c, 0xdaea7u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 0daea9  mov eax, 0xf
    X86_AT(c, 0xdaea9u);
    c.r[0] = 0xFu;
    // 0daeae  mov edx, dword ptr [ebp + 0x14]
    X86_AT(c, 0xdaeaeu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0daeb1  sub eax, dword ptr [edx]
    X86_AT(c, 0xdaeb1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[2]))), 0, 4); }
    // 0daeb3  jmp 0xdaef8
    X86_AT(c, 0xdaeb3u);
    goto L_daef8;
L_daeb5:
    X86_TICK(c, 4);
    // 0daeb5  mov edi, 0xf
    X86_AT(c, 0xdaeb5u);
    c.r[7] = 0xFu;
    // 0daeba  sub ebx, ebx
    X86_AT(c, 0xdaebau);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_daebc:
    X86_TICK(c, 7);
    // 0daebc  cmp ebx, 0x10
    X86_AT(c, 0xdaebcu);
    (void)x86_sub(c, c.r[3], 0x10u, 0, 4);
    // 0daebf  jge 0xdaee5
    X86_AT(c, 0xdaebfu);
    if (x86_cc(c, 13)) { goto L_daee5; }
    X86_TICK(c, 2);
    // 0daec1  sub esi, esi
    X86_AT(c, 0xdaec1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_daec3:
    X86_TICK(c, 7);
    // 0daec3  cmp esi, 0x10
    X86_AT(c, 0xdaec3u);
    (void)x86_sub(c, c.r[6], 0x10u, 0, 4);
    // 0daec6  jge 0xdaee1
    X86_AT(c, 0xdaec6u);
    if (x86_cc(c, 13)) { goto L_daee1; }
    X86_TICK(c, 36);
    // 0daec8  mov eax, esi
    X86_AT(c, 0xdaec8u);
    c.r[0] = c.r[6];
    // 0daeca  shl eax, 4
    X86_AT(c, 0xdaecau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0daecd  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xdaecdu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0daed0  lea ecx, [edi + edx*1]
    X86_AT(c, 0xdaed0u);
    c.r[1] = (uint32_t)(c.r[7] + c.r[2]);
    // 0daed3  mov al, byte ptr [ecx + eax*1]
    X86_AT(c, 0xdaed3u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[1] + c.r[0]))));
    // 0daed6  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xdaed6u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0daed9  inc dword ptr [ebp - 4]
    X86_AT(c, 0xdaed9u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0daedc  mov byte ptr [edx], al
    X86_AT(c, 0xdaedcu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 0daede  inc esi
    X86_AT(c, 0xdaedeu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0daedf  jmp 0xdaec3
    X86_AT(c, 0xdaedfu);
    X86_POLL(c, 0xdaec3u); goto L_daec3;
L_daee1:
    X86_TICK(c, 11);
    // 0daee1  dec edi
    X86_AT(c, 0xdaee1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 0daee2  inc ebx
    X86_AT(c, 0xdaee2u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0daee3  jmp 0xdaebc
    X86_AT(c, 0xdaee3u);
    X86_POLL(c, 0xdaebcu); goto L_daebc;
L_daee5:
    X86_TICK(c, 22);
    // 0daee5  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xdaee5u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0daee8  mov esi, dword ptr [eax]
    X86_AT(c, 0xdaee8u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0daeea  mov edx, dword ptr [ebp + 0x14]
    X86_AT(c, 0xdaeeau);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0daeed  mov ecx, dword ptr [edx]
    X86_AT(c, 0xdaeedu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2])));
    // 0daeef  mov dword ptr [eax], ecx
    X86_AT(c, 0xdaeefu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0])), c.r[1]);
    // 0daef1  mov eax, 0xf
    X86_AT(c, 0xdaef1u);
    c.r[0] = 0xFu;
    // 0daef6  sub eax, esi
    X86_AT(c, 0xdaef6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[6], 0, 4); }
L_daef8:
    X86_TICK(c, 2);
    // 0daef8  mov dword ptr [edx], eax
    X86_AT(c, 0xdaef8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
L_daefa:
    X86_TICK(c, 19);
    // 0daefa  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xdaefau);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0daefd  mov eax, dword ptr [eax]
    X86_AT(c, 0xdaefdu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0daeff  sub eax, 2
    X86_AT(c, 0xdaeffu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
    // 0daf02  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xdaf02u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0daf05  and eax, eax
    X86_AT(c, 0xdaf05u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0daf07  jge 0xdaf0d
    X86_AT(c, 0xdaf07u);
    if (x86_cc(c, 13)) { goto L_daf0d; }
    X86_TICK(c, 7);
    // 0daf09  add dword ptr [ebp - 0xc], 0x10
    X86_AT(c, 0xdaf09u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x10u, 0, 4)); }
L_daf0d:
    X86_TICK(c, 19);
    // 0daf0d  mov eax, dword ptr [ebp + 0x14]
    X86_AT(c, 0xdaf0du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0daf10  mov eax, dword ptr [eax]
    X86_AT(c, 0xdaf10u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0daf12  sub eax, 3
    X86_AT(c, 0xdaf12u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x3u, 0, 4); }
    // 0daf15  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xdaf15u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0daf18  and eax, eax
    X86_AT(c, 0xdaf18u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0daf1a  jge 0xdaf20
    X86_AT(c, 0xdaf1au);
    if (x86_cc(c, 13)) { goto L_daf20; }
    X86_TICK(c, 7);
    // 0daf1c  add dword ptr [ebp - 8], 0x10
    X86_AT(c, 0xdaf1cu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x10u, 0, 4)); }
L_daf20:
    X86_TICK(c, 2);
    // 0daf20  sub ebx, ebx
    X86_AT(c, 0xdaf20u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_daf22:
    X86_TICK(c, 7);
    // 0daf22  cmp ebx, 5
    X86_AT(c, 0xdaf22u);
    (void)x86_sub(c, c.r[3], 0x5u, 0, 4);
    // 0daf25  jge 0xdaf69
    X86_AT(c, 0xdaf25u);
    if (x86_cc(c, 13)) { goto L_daf69; }
    X86_TICK(c, 6);
    // 0daf27  mov edi, dword ptr [ebp - 0xc]
    X86_AT(c, 0xdaf27u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0daf2a  sub esi, esi
    X86_AT(c, 0xdaf2au);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_daf2c:
    X86_TICK(c, 7);
    // 0daf2c  cmp esi, 5
    X86_AT(c, 0xdaf2cu);
    (void)x86_sub(c, c.r[6], 0x5u, 0, 4);
    // 0daf2f  jge 0xdaf56
    X86_AT(c, 0xdaf2fu);
    if (x86_cc(c, 13)) { goto L_daf56; }
    X86_TICK(c, 28);
    // 0daf31  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xdaf31u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0daf34  shl eax, 4
    X86_AT(c, 0xdaf34u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0daf37  add eax, edi
    X86_AT(c, 0xdaf37u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[7], 0, 4); }
    // 0daf39  lea edx, [ebx + ebx*4]
    X86_AT(c, 0xdaf39u);
    c.r[2] = (uint32_t)(c.r[3] + c.r[3] * 4);
    // 0daf3c  lea ecx, [esi + edx*1]
    X86_AT(c, 0xdaf3cu);
    c.r[1] = (uint32_t)(c.r[6] + c.r[2]);
    // 0daf3f  mov al, byte ptr [eax + 0xb3830]
    X86_AT(c, 0xdaf3fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB3830u))));
    // 0daf45  mov byte ptr [ecx + 0xb35a4], al
    X86_AT(c, 0xdaf45u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0xB35A4u)), g8(c, 0));
    // 0daf4b  inc edi
    X86_AT(c, 0xdaf4bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0daf4c  cmp edi, 0x10
    X86_AT(c, 0xdaf4cu);
    (void)x86_sub(c, c.r[7], 0x10u, 0, 4);
    // 0daf4f  jne 0xdaf53
    X86_AT(c, 0xdaf4fu);
    if (x86_cc(c, 5)) { goto L_daf53; }
    X86_TICK(c, 2);
    // 0daf51  sub edi, edi
    X86_AT(c, 0xdaf51u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_daf53:
    X86_TICK(c, 9);
    // 0daf53  inc esi
    X86_AT(c, 0xdaf53u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0daf54  jmp 0xdaf2c
    X86_AT(c, 0xdaf54u);
    X86_POLL(c, 0xdaf2cu); goto L_daf2c;
L_daf56:
    X86_TICK(c, 18);
    // 0daf56  inc dword ptr [ebp - 8]
    X86_AT(c, 0xdaf56u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0daf59  cmp dword ptr [ebp - 8], 0x10
    X86_AT(c, 0xdaf59u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x10u, 0, 4);
    // 0daf5d  jne 0xdaf66
    X86_AT(c, 0xdaf5du);
    if (x86_cc(c, 5)) { goto L_daf66; }
    X86_TICK(c, 2);
    // 0daf5f  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xdaf5fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
L_daf66:
    X86_TICK(c, 9);
    // 0daf66  inc ebx
    X86_AT(c, 0xdaf66u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0daf67  jmp 0xdaf22
    X86_AT(c, 0xdaf67u);
    X86_POLL(c, 0xdaf22u); goto L_daf22;
L_daf69:
    X86_TICK(c, 30);
    // 0daf69  mov eax, 0xb3830
    X86_AT(c, 0xdaf69u);
    c.r[0] = 0xB3830u;
    // 0daf6e  pop edi
    X86_AT(c, 0xdaf6eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0daf6f  pop esi
    X86_AT(c, 0xdaf6fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0daf70  pop ebx
    X86_AT(c, 0xdaf70u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0daf71  leave 
    X86_AT(c, 0xdaf71u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0daf72  ret 
    X86_AT(c, 0xdaf72u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdadccu, "ran off the end of a function");
}
void f_000daf74(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0daf74  push ebp
    X86_AT(c, 0xdaf74u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0daf75  mov ebp, esp
    X86_AT(c, 0xdaf75u);
    c.r[5] = c.r[4];
    // 0daf77  push ebx
    X86_AT(c, 0xdaf77u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0daf78  push esi
    X86_AT(c, 0xdaf78u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0daf79  push edi
    X86_AT(c, 0xdaf79u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0daf7a  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xdaf7au);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0daf7d  cmp word ptr [0xb224c], 0
    X86_AT(c, 0xdaf7du);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xB224Cu))), 0x0u, 0, 2);
    // 0daf85  jne 0xdb00a
    X86_AT(c, 0xdaf85u);
    if (x86_cc(c, 5)) { goto L_db00a; }
    X86_TICK(c, 2);
    // 0daf8b  sub esi, esi
    X86_AT(c, 0xdaf8bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_daf8d:
    X86_TICK(c, 7);
    // 0daf8d  cmp esi, 0x10
    X86_AT(c, 0xdaf8du);
    (void)x86_sub(c, c.r[6], 0x10u, 0, 4);
    // 0daf90  jge 0xdafe0
    X86_AT(c, 0xdaf90u);
    if (x86_cc(c, 13)) { goto L_dafe0; }
    X86_TICK(c, 2);
    // 0daf92  sub ebx, ebx
    X86_AT(c, 0xdaf92u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_daf94:
    X86_TICK(c, 7);
    // 0daf94  cmp ebx, 0x10
    X86_AT(c, 0xdaf94u);
    (void)x86_sub(c, c.r[3], 0x10u, 0, 4);
    // 0daf97  jge 0xdafdd
    X86_AT(c, 0xdaf97u);
    if (x86_cc(c, 13)) { goto L_dafdd; }
    X86_TICK(c, 48);
    // 0daf99  push 6
    X86_AT(c, 0xdaf99u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0daf9b  push 6
    X86_AT(c, 0xdaf9bu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0daf9d  lea eax, [esi + esi*2]
    X86_AT(c, 0xdaf9du);
    c.r[0] = (uint32_t)(c.r[6] + c.r[6] * 2);
    // 0dafa0  lea eax, [eax + eax*1 + 0x40]
    X86_AT(c, 0xdafa0u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] + 0x40u);
    // 0dafa4  push eax
    X86_AT(c, 0xdafa4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dafa5  lea eax, [ebx + ebx*2]
    X86_AT(c, 0xdafa5u);
    c.r[0] = (uint32_t)(c.r[3] + c.r[3] * 2);
    // 0dafa8  lea eax, [eax*2 + 0xfa]
    X86_AT(c, 0xdafa8u);
    c.r[0] = (uint32_t)(c.r[0] * 2 + 0xFAu);
    // 0dafaf  push eax
    X86_AT(c, 0xdafafu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dafb0  mov eax, esi
    X86_AT(c, 0xdafb0u);
    c.r[0] = c.r[6];
    // 0dafb2  shl eax, 4
    X86_AT(c, 0xdafb2u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0dafb5  add eax, edi
    X86_AT(c, 0xdafb5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[7], 0, 4); }
    // 0dafb7  movzx eax, byte ptr [eax + ebx*1]
    X86_AT(c, 0xdafb7u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[3])));
    // 0dafbb  mov eax, dword ptr [eax*4 + 0xb3930]
    X86_AT(c, 0xdafbbu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xB3930u)));
    // 0dafc2  lea eax, [eax*8]
    X86_AT(c, 0xdafc2u);
    c.r[0] = (uint32_t)(c.r[0] * 8);
    // 0dafc9  lea eax, [eax + eax*2]
    X86_AT(c, 0xdafc9u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0dafcc  add eax, 0xb3974
    X86_AT(c, 0xdafccu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xB3974u, 0, 4); }
    // 0dafd1  push eax
    X86_AT(c, 0xdafd1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dafd2  call 0xc99ec
    X86_AT(c, 0xdafd2u);
    push32(c, 0xdafd7u); x86_call_known(c, 0xc99ecu, f_000c99ec); X86_RET(c, 0xdafd7u);
    X86_TICK(c, 11);
    // 0dafd7  inc ebx
    X86_AT(c, 0xdafd7u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0dafd8  add esp, 0x14
    X86_AT(c, 0xdafd8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0dafdb  jmp 0xdaf94
    X86_AT(c, 0xdafdbu);
    X86_POLL(c, 0xdaf94u); goto L_daf94;
L_dafdd:
    X86_TICK(c, 9);
    // 0dafdd  inc esi
    X86_AT(c, 0xdafddu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0dafde  jmp 0xdaf8d
    X86_AT(c, 0xdafdeu);
    X86_POLL(c, 0xdaf8du); goto L_daf8d;
L_dafe0:
    X86_TICK(c, 33);
    // 0dafe0  push 6
    X86_AT(c, 0xdafe0u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0dafe2  push 6
    X86_AT(c, 0xdafe2u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0dafe4  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xdafe4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0dafe7  lea eax, [eax + eax*2]
    X86_AT(c, 0xdafe7u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0dafea  lea eax, [eax + eax*1 + 0x40]
    X86_AT(c, 0xdafeau);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] + 0x40u);
    // 0dafee  push eax
    X86_AT(c, 0xdafeeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dafef  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xdafefu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0daff2  lea eax, [eax + eax*2]
    X86_AT(c, 0xdaff2u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0daff5  lea eax, [eax*2 + 0xfa]
    X86_AT(c, 0xdaff5u);
    c.r[0] = (uint32_t)(c.r[0] * 2 + 0xFAu);
    // 0daffc  push eax
    X86_AT(c, 0xdaffcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0daffd  push 0xb3a1c
    X86_AT(c, 0xdaffdu);
    { uint32_t v = 0xB3A1Cu; push32(c, v); }
    // 0db002  call 0xc99ec
    X86_AT(c, 0xdb002u);
    push32(c, 0xdb007u); x86_call_known(c, 0xc99ecu, f_000c99ec); X86_RET(c, 0xdb007u);
    X86_TICK(c, 2);
    // 0db007  add esp, 0x14
    X86_AT(c, 0xdb007u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_db00a:
    X86_TICK(c, 28);
    // 0db00a  pop edi
    X86_AT(c, 0xdb00au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0db00b  pop esi
    X86_AT(c, 0xdb00bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0db00c  pop ebx
    X86_AT(c, 0xdb00cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0db00d  leave 
    X86_AT(c, 0xdb00du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0db00e  ret 
    X86_AT(c, 0xdb00eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdaf74u, "ran off the end of a function");
}
void f_000db1f4(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0db1f4  push ebp
    X86_AT(c, 0xdb1f4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0db1f5  mov ebp, esp
    X86_AT(c, 0xdb1f5u);
    c.r[5] = c.r[4];
    // 0db1f7  push edi
    X86_AT(c, 0xdb1f7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0db1f8  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xdb1f8u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0db1fb  cmp edi, 0xb
    X86_AT(c, 0xdb1fbu);
    (void)x86_sub(c, c.r[7], 0xBu, 0, 4);
    // 0db1fe  je 0xdb209
    X86_AT(c, 0xdb1feu);
    if (x86_cc(c, 4)) { goto L_db209; }
    X86_TICK(c, 12);
    // 0db200  push dword ptr [edi*4 + 0xb343c]
    X86_AT(c, 0xdb200u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xB343Cu))); push32(c, v); }
    // 0db207  jmp 0xdb20e
    X86_AT(c, 0xdb207u);
    goto L_db20e;
L_db209:
    X86_TICK(c, 2);
    // 0db209  push 0xca44
    X86_AT(c, 0xdb209u);
    { uint32_t v = 0xCA44u; push32(c, v); }
L_db20e:
    X86_TICK(c, 9);
    // 0db20e  push 7
    X86_AT(c, 0xdb20eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0db210  call 0xc8cdc
    X86_AT(c, 0xdb210u);
    push32(c, 0xdb215u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xdb215u);
    X86_TICK(c, 22);
    // 0db215  add esp, 8
    X86_AT(c, 0xdb215u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0db218  pop edi
    X86_AT(c, 0xdb218u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0db219  leave 
    X86_AT(c, 0xdb219u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0db21a  ret 
    X86_AT(c, 0xdb21au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdb1f4u, "ran off the end of a function");
}
void f_000db23c(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0db23c  sub ecx, ecx
    X86_AT(c, 0xdb23cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0db23e  cmp dword ptr [0xb232c], 2
    X86_AT(c, 0xdb23eu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB232Cu))), 0x2u, 0, 4);
    // 0db245  jne 0xdb24e
    X86_AT(c, 0xdb245u);
    if (x86_cc(c, 5)) { goto L_db24e; }
    X86_TICK(c, 9);
    // 0db247  mov ecx, 1
    X86_AT(c, 0xdb247u);
    c.r[1] = 0x1u;
    // 0db24c  jmp 0xdb25c
    X86_AT(c, 0xdb24cu);
    goto L_db25c;
L_db24e:
    X86_TICK(c, 12);
    // 0db24e  cmp dword ptr [0xb232c], 4
    X86_AT(c, 0xdb24eu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB232Cu))), 0x4u, 0, 4);
    // 0db255  jne 0xdb25c
    X86_AT(c, 0xdb255u);
    if (x86_cc(c, 5)) { goto L_db25c; }
    X86_TICK(c, 2);
    // 0db257  mov ecx, 0xffffffff
    X86_AT(c, 0xdb257u);
    c.r[1] = 0xFFFFFFFFu;
L_db25c:
    X86_TICK(c, 12);
    // 0db25c  mov eax, ecx
    X86_AT(c, 0xdb25cu);
    c.r[0] = c.r[1];
    // 0db25e  ret 
    X86_AT(c, 0xdb25eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdb23cu, "ran off the end of a function");
}
void f_000db260(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0db260  sub ecx, ecx
    X86_AT(c, 0xdb260u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0db262  cmp dword ptr [0xb232c], 1
    X86_AT(c, 0xdb262u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB232Cu))), 0x1u, 0, 4);
    // 0db269  jne 0xdb272
    X86_AT(c, 0xdb269u);
    if (x86_cc(c, 5)) { goto L_db272; }
    X86_TICK(c, 9);
    // 0db26b  mov ecx, 0xffffffff
    X86_AT(c, 0xdb26bu);
    c.r[1] = 0xFFFFFFFFu;
    // 0db270  jmp 0xdb280
    X86_AT(c, 0xdb270u);
    goto L_db280;
L_db272:
    X86_TICK(c, 12);
    // 0db272  cmp dword ptr [0xb232c], 3
    X86_AT(c, 0xdb272u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB232Cu))), 0x3u, 0, 4);
    // 0db279  jne 0xdb280
    X86_AT(c, 0xdb279u);
    if (x86_cc(c, 5)) { goto L_db280; }
    X86_TICK(c, 2);
    // 0db27b  mov ecx, 1
    X86_AT(c, 0xdb27bu);
    c.r[1] = 0x1u;
L_db280:
    X86_TICK(c, 12);
    // 0db280  mov eax, ecx
    X86_AT(c, 0xdb280u);
    c.r[0] = c.r[1];
    // 0db282  ret 
    X86_AT(c, 0xdb282u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdb260u, "ran off the end of a function");
}
void f_000db284(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0db284  push 3
    X86_AT(c, 0xdb284u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0db286  call 0xca0a0
    X86_AT(c, 0xdb286u);
    push32(c, 0xdb28bu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xdb28bu);
    X86_TICK(c, 13);
    // 0db28b  push 0
    X86_AT(c, 0xdb28bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0db28d  push 4
    X86_AT(c, 0xdb28du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0db28f  push 3
    X86_AT(c, 0xdb28fu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0db291  call 0xca9c8
    X86_AT(c, 0xdb291u);
    push32(c, 0xdb296u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xdb296u);
    X86_TICK(c, 11);
    // 0db296  push 0xca58
    X86_AT(c, 0xdb296u);
    { uint32_t v = 0xCA58u; push32(c, v); }
    // 0db29b  push 3
    X86_AT(c, 0xdb29bu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0db29d  call 0xc8cdc
    X86_AT(c, 0xdb29du);
    push32(c, 0xdb2a2u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xdb2a2u);
    X86_TICK(c, 13);
    // 0db2a2  push 0
    X86_AT(c, 0xdb2a2u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0db2a4  push 0xe
    X86_AT(c, 0xdb2a4u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0db2a6  push 3
    X86_AT(c, 0xdb2a6u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0db2a8  call 0xca9c8
    X86_AT(c, 0xdb2a8u);
    push32(c, 0xdb2adu); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xdb2adu);
    X86_TICK(c, 15);
    // 0db2ad  add esp, 0x24
    X86_AT(c, 0xdb2adu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
    // 0db2b0  mov edx, dword ptr [0xb232c]
    X86_AT(c, 0xdb2b0u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB232Cu)));
    // 0db2b6  dec edx
    X86_AT(c, 0xdb2b6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0db2b7  cmp edx, 3
    X86_AT(c, 0xdb2b7u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0db2ba  ja 0xdb2f8
    X86_AT(c, 0xdb2bau);
    if (x86_cc(c, 7)) { goto L_db2f8; }
    X86_TICK(c, 7);
    // 0db2bc  jmp dword ptr cs:[edx*4 + 0xdb2c4]
    X86_AT(c, 0xdb2bcu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xDB2C4u)));
      switch (t) {
      case 0xdb2d4u: goto L_db2d4;
      case 0xdb2dbu: goto L_db2db;
      case 0xdb2e2u: goto L_db2e2;
      case 0xdb2e9u: goto L_db2e9;
      default: x86_jump(c, t); return; } }
L_db2d4:
    X86_TICK(c, 9);
    // 0db2d4  push 0xca74
    X86_AT(c, 0xdb2d4u);
    { uint32_t v = 0xCA74u; push32(c, v); }
    // 0db2d9  jmp 0xdb2ee
    X86_AT(c, 0xdb2d9u);
    goto L_db2ee;
L_db2db:
    X86_TICK(c, 9);
    // 0db2db  push 0xca8c
    X86_AT(c, 0xdb2dbu);
    { uint32_t v = 0xCA8Cu; push32(c, v); }
    // 0db2e0  jmp 0xdb2ee
    X86_AT(c, 0xdb2e0u);
    goto L_db2ee;
L_db2e2:
    X86_TICK(c, 9);
    // 0db2e2  push 0xcaa4
    X86_AT(c, 0xdb2e2u);
    { uint32_t v = 0xCAA4u; push32(c, v); }
    // 0db2e7  jmp 0xdb2ee
    X86_AT(c, 0xdb2e7u);
    goto L_db2ee;
L_db2e9:
    X86_TICK(c, 2);
    // 0db2e9  push 0xcabc
    X86_AT(c, 0xdb2e9u);
    { uint32_t v = 0xCABCu; push32(c, v); }
L_db2ee:
    X86_TICK(c, 9);
    // 0db2ee  push 3
    X86_AT(c, 0xdb2eeu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0db2f0  call 0xc8cdc
    X86_AT(c, 0xdb2f0u);
    push32(c, 0xdb2f5u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xdb2f5u);
    X86_TICK(c, 2);
    // 0db2f5  add esp, 8
    X86_AT(c, 0xdb2f5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_db2f8:
    X86_TICK(c, 10);
    // 0db2f8  ret 
    X86_AT(c, 0xdb2f8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdb284u, "ran off the end of a function");
}
void f_000db32c(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0db32c  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0xdb32cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0db330  shl eax, 8
    X86_AT(c, 0xdb330u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0db333  mov edx, dword ptr [esp + 8]
    X86_AT(c, 0xdb333u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 0db337  shl edx, 4
    X86_AT(c, 0xdb337u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0db33a  add edx, eax
    X86_AT(c, 0xdb33au);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0db33c  cmp dword ptr [edx + 0xb2338], 0xffffffff
    X86_AT(c, 0xdb33cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB2338u))), 0xFFFFFFFFu, 0, 4);
    // 0db343  jne 0xdb349
    X86_AT(c, 0xdb343u);
    if (x86_cc(c, 5)) { goto L_db349; }
    X86_TICK(c, 9);
    // 0db345  sub eax, eax
    X86_AT(c, 0xdb345u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0db347  jmp 0xdb34e
    X86_AT(c, 0xdb347u);
    goto L_db34e;
L_db349:
    X86_TICK(c, 2);
    // 0db349  mov eax, 1
    X86_AT(c, 0xdb349u);
    c.r[0] = 0x1u;
L_db34e:
    X86_TICK(c, 10);
    // 0db34e  ret 
    X86_AT(c, 0xdb34eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdb32cu, "ran off the end of a function");
}
void f_000db350(X86Cpu& c) {
    X86_TICK(c, 37);
    // 0db350  push ebp
    X86_AT(c, 0xdb350u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0db351  mov ebp, esp
    X86_AT(c, 0xdb351u);
    c.r[5] = c.r[4];
    // 0db353  push edi
    X86_AT(c, 0xdb353u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0db354  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xdb354u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0db357  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xdb357u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0db35a  mov eax, edi
    X86_AT(c, 0xdb35au);
    c.r[0] = c.r[7];
    // 0db35c  shl eax, 8
    X86_AT(c, 0xdb35cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0db35f  mov edx, ecx
    X86_AT(c, 0xdb35fu);
    c.r[2] = c.r[1];
    // 0db361  shl edx, 4
    X86_AT(c, 0xdb361u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0db364  add edx, eax
    X86_AT(c, 0xdb364u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0db366  mov eax, dword ptr [edx + 0xb2338]
    X86_AT(c, 0xdb366u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB2338u)));
    // 0db36c  cmp eax, 0xffffffff
    X86_AT(c, 0xdb36cu);
    (void)x86_sub(c, c.r[0], 0xFFFFFFFFu, 0, 4);
    // 0db36f  je 0xdb380
    X86_AT(c, 0xdb36fu);
    if (x86_cc(c, 4)) { goto L_db380; }
    X86_TICK(c, 7);
    // 0db371  cmp eax, 0x14
    X86_AT(c, 0xdb371u);
    (void)x86_sub(c, c.r[0], 0x14u, 0, 4);
    // 0db374  je 0xdb380
    X86_AT(c, 0xdb374u);
    if (x86_cc(c, 4)) { goto L_db380; }
    X86_TICK(c, 7);
    // 0db376  cmp eax, 0xb
    X86_AT(c, 0xdb376u);
    (void)x86_sub(c, c.r[0], 0xBu, 0, 4);
    // 0db379  je 0xdb380
    X86_AT(c, 0xdb379u);
    if (x86_cc(c, 4)) { goto L_db380; }
    X86_TICK(c, 7);
    // 0db37b  cmp eax, 9
    X86_AT(c, 0xdb37bu);
    (void)x86_sub(c, c.r[0], 0x9u, 0, 4);
    // 0db37e  jne 0xdb384
    X86_AT(c, 0xdb37eu);
    if (x86_cc(c, 5)) { goto L_db384; }
L_db380:
    X86_TICK(c, 9);
    // 0db380  sub eax, eax
    X86_AT(c, 0xdb380u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0db382  jmp 0xdb389
    X86_AT(c, 0xdb382u);
    goto L_db389;
L_db384:
    X86_TICK(c, 2);
    // 0db384  mov eax, 1
    X86_AT(c, 0xdb384u);
    c.r[0] = 0x1u;
L_db389:
    X86_TICK(c, 20);
    // 0db389  pop edi
    X86_AT(c, 0xdb389u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0db38a  leave 
    X86_AT(c, 0xdb38au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0db38b  ret 
    X86_AT(c, 0xdb38bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdb350u, "ran off the end of a function");
}
void f_000db38c(X86Cpu& c) {
    X86_TICK(c, 53);
    // 0db38c  push ebp
    X86_AT(c, 0xdb38cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0db38d  mov ebp, esp
    X86_AT(c, 0xdb38du);
    c.r[5] = c.r[4];
    // 0db38f  push ebx
    X86_AT(c, 0xdb38fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0db390  push esi
    X86_AT(c, 0xdb390u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0db391  push edi
    X86_AT(c, 0xdb391u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0db392  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xdb392u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0db395  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xdb395u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0db398  mov eax, edi
    X86_AT(c, 0xdb398u);
    c.r[0] = c.r[7];
    // 0db39a  add eax, dword ptr [0xb2304]
    X86_AT(c, 0xdb39au);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xB2304u))), 0, 4); }
    // 0db3a0  shl eax, 8
    X86_AT(c, 0xdb3a0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0db3a3  mov edx, esi
    X86_AT(c, 0xdb3a3u);
    c.r[2] = c.r[6];
    // 0db3a5  add edx, dword ptr [0xb2308]
    X86_AT(c, 0xdb3a5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xB2308u))), 0, 4); }
    // 0db3ab  shl edx, 4
    X86_AT(c, 0xdb3abu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0db3ae  add edx, eax
    X86_AT(c, 0xdb3aeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0db3b0  mov ebx, dword ptr [edx + 0xb2334]
    X86_AT(c, 0xdb3b0u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB2334u)));
    // 0db3b6  cmp ebx, 2
    X86_AT(c, 0xdb3b6u);
    (void)x86_sub(c, c.r[3], 0x2u, 0, 4);
    // 0db3b9  je 0xdb3c5
    X86_AT(c, 0xdb3b9u);
    if (x86_cc(c, 4)) { goto L_db3c5; }
    X86_TICK(c, 7);
    // 0db3bb  cmp ebx, 3
    X86_AT(c, 0xdb3bbu);
    (void)x86_sub(c, c.r[3], 0x3u, 0, 4);
    // 0db3be  je 0xdb3c5
    X86_AT(c, 0xdb3beu);
    if (x86_cc(c, 4)) { goto L_db3c5; }
    X86_TICK(c, 7);
    // 0db3c0  cmp ebx, 1
    X86_AT(c, 0xdb3c0u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 0db3c3  jne 0xdb3cc
    X86_AT(c, 0xdb3c3u);
    if (x86_cc(c, 5)) { goto L_db3cc; }
L_db3c5:
    X86_TICK(c, 9);
    // 0db3c5  mov eax, 1
    X86_AT(c, 0xdb3c5u);
    c.r[0] = 0x1u;
    // 0db3ca  jmp 0xdb3e6
    X86_AT(c, 0xdb3cau);
    goto L_db3e6;
L_db3cc:
    X86_TICK(c, 27);
    // 0db3cc  mov eax, esi
    X86_AT(c, 0xdb3ccu);
    c.r[0] = c.r[6];
    // 0db3ce  add eax, dword ptr [0xb2308]
    X86_AT(c, 0xdb3ceu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xB2308u))), 0, 4); }
    // 0db3d4  push eax
    X86_AT(c, 0xdb3d4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0db3d5  mov eax, edi
    X86_AT(c, 0xdb3d5u);
    c.r[0] = c.r[7];
    // 0db3d7  add eax, dword ptr [0xb2304]
    X86_AT(c, 0xdb3d7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xB2304u))), 0, 4); }
    // 0db3dd  push eax
    X86_AT(c, 0xdb3ddu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0db3de  call 0xdb350
    X86_AT(c, 0xdb3deu);
    push32(c, 0xdb3e3u); x86_call_known(c, 0xdb350u, f_000db350); X86_RET(c, 0xdb3e3u);
    X86_TICK(c, 2);
    // 0db3e3  add esp, 8
    X86_AT(c, 0xdb3e3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_db3e6:
    X86_TICK(c, 28);
    // 0db3e6  pop edi
    X86_AT(c, 0xdb3e6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0db3e7  pop esi
    X86_AT(c, 0xdb3e7u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0db3e8  pop ebx
    X86_AT(c, 0xdb3e8u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0db3e9  leave 
    X86_AT(c, 0xdb3e9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0db3ea  ret 
    X86_AT(c, 0xdb3eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdb38cu, "ran off the end of a function");
}
void f_000db454(X86Cpu& c) {
    X86_TICK(c, 4);
    // 0db454  push edi
    X86_AT(c, 0xdb454u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0db455  sub ecx, ecx
    X86_AT(c, 0xdb455u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
L_db457:
    X86_TICK(c, 7);
    // 0db457  cmp ecx, 0x10
    X86_AT(c, 0xdb457u);
    (void)x86_sub(c, c.r[1], 0x10u, 0, 4);
    // 0db45a  jge 0xdb483
    X86_AT(c, 0xdb45au);
    if (x86_cc(c, 13)) { goto L_db483; }
    X86_TICK(c, 2);
    // 0db45c  sub edi, edi
    X86_AT(c, 0xdb45cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_db45e:
    X86_TICK(c, 7);
    // 0db45e  cmp edi, 0x10
    X86_AT(c, 0xdb45eu);
    (void)x86_sub(c, c.r[7], 0x10u, 0, 4);
    // 0db461  jge 0xdb480
    X86_AT(c, 0xdb461u);
    if (x86_cc(c, 13)) { goto L_db480; }
    X86_TICK(c, 29);
    // 0db463  mov eax, ecx
    X86_AT(c, 0xdb463u);
    c.r[0] = c.r[1];
    // 0db465  shl eax, 4
    X86_AT(c, 0xdb465u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0db468  mov edx, edi
    X86_AT(c, 0xdb468u);
    c.r[2] = c.r[7];
    // 0db46a  shl edx, 8
    X86_AT(c, 0xdb46au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[2] = r; }
    // 0db46d  add edx, eax
    X86_AT(c, 0xdb46du);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0db46f  add eax, edi
    X86_AT(c, 0xdb46fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[7], 0, 4); }
    // 0db471  mov dl, byte ptr [edx + 0xb2334]
    X86_AT(c, 0xdb471u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xB2334u))));
    // 0db477  mov byte ptr [eax + 0xb333c], dl
    X86_AT(c, 0xdb477u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB333Cu)), g8(c, 2));
    // 0db47d  inc edi
    X86_AT(c, 0xdb47du);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0db47e  jmp 0xdb45e
    X86_AT(c, 0xdb47eu);
    X86_POLL(c, 0xdb45eu); goto L_db45e;
L_db480:
    X86_TICK(c, 9);
    // 0db480  inc ecx
    X86_AT(c, 0xdb480u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0db481  jmp 0xdb457
    X86_AT(c, 0xdb481u);
    X86_POLL(c, 0xdb457u); goto L_db457;
L_db483:
    X86_TICK(c, 2);
    // 0db483  sub ecx, ecx
    X86_AT(c, 0xdb483u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
L_db485:
    X86_TICK(c, 7);
    // 0db485  cmp ecx, 0x10
    X86_AT(c, 0xdb485u);
    (void)x86_sub(c, c.r[1], 0x10u, 0, 4);
    // 0db488  jge 0xdb4aa
    X86_AT(c, 0xdb488u);
    if (x86_cc(c, 13)) { goto L_db4aa; }
    X86_TICK(c, 2);
    // 0db48a  sub edi, edi
    X86_AT(c, 0xdb48au);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_db48c:
    X86_TICK(c, 7);
    // 0db48c  cmp edi, 0x10
    X86_AT(c, 0xdb48cu);
    (void)x86_sub(c, c.r[7], 0x10u, 0, 4);
    // 0db48f  jge 0xdb4a7
    X86_AT(c, 0xdb48fu);
    if (x86_cc(c, 13)) { goto L_db4a7; }
    X86_TICK(c, 22);
    // 0db491  mov eax, ecx
    X86_AT(c, 0xdb491u);
    c.r[0] = c.r[1];
    // 0db493  shl eax, 4
    X86_AT(c, 0xdb493u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0db496  add eax, edi
    X86_AT(c, 0xdb496u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[7], 0, 4); }
    // 0db498  mov dl, byte ptr [eax + 0xb333c]
    X86_AT(c, 0xdb498u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB333Cu))));
    // 0db49e  mov byte ptr [eax + 0xb34a4], dl
    X86_AT(c, 0xdb49eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB34A4u)), g8(c, 2));
    // 0db4a4  inc edi
    X86_AT(c, 0xdb4a4u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0db4a5  jmp 0xdb48c
    X86_AT(c, 0xdb4a5u);
    X86_POLL(c, 0xdb48cu); goto L_db48c;
L_db4a7:
    X86_TICK(c, 9);
    // 0db4a7  inc ecx
    X86_AT(c, 0xdb4a7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0db4a8  jmp 0xdb485
    X86_AT(c, 0xdb4a8u);
    X86_POLL(c, 0xdb485u); goto L_db485;
L_db4aa:
    X86_TICK(c, 14);
    // 0db4aa  pop edi
    X86_AT(c, 0xdb4aau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0db4ab  ret 
    X86_AT(c, 0xdb4abu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdb454u, "ran off the end of a function");
}
void f_000db4ac(X86Cpu& c) {
    X86_TICK(c, 41);
    // 0db4ac  push ebp
    X86_AT(c, 0xdb4acu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0db4ad  mov ebp, esp
    X86_AT(c, 0xdb4adu);
    c.r[5] = c.r[4];
    // 0db4af  sub esp, 0xc
    X86_AT(c, 0xdb4afu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0db4b2  push ebx
    X86_AT(c, 0xdb4b2u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0db4b3  push esi
    X86_AT(c, 0xdb4b3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0db4b4  push edi
    X86_AT(c, 0xdb4b4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0db4b5  mov ebx, 1
    X86_AT(c, 0xdb4b5u);
    c.r[3] = 0x1u;
    // 0db4ba  mov eax, dword ptr [0xb2304]
    X86_AT(c, 0xdb4bau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB2304u)));
    // 0db4bf  shl eax, 8
    X86_AT(c, 0xdb4bfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0db4c2  mov edx, dword ptr [0xb2308]
    X86_AT(c, 0xdb4c2u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB2308u)));
    // 0db4c8  shl edx, 4
    X86_AT(c, 0xdb4c8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0db4cb  add edx, eax
    X86_AT(c, 0xdb4cbu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0db4cd  mov eax, dword ptr [edx + 0xb2334]
    X86_AT(c, 0xdb4cdu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB2334u)));
    // 0db4d3  cmp eax, 8
    X86_AT(c, 0xdb4d3u);
    (void)x86_sub(c, c.r[0], 0x8u, 0, 4);
    // 0db4d6  je 0xdb770
    X86_AT(c, 0xdb4d6u);
    if (x86_cc(c, 4)) { goto L_db770; }
    X86_TICK(c, 44);
    // 0db4dc  mov edx, dword ptr [0xb2304]
    X86_AT(c, 0xdb4dcu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB2304u)));
    // 0db4e2  sub edx, dword ptr [ebp + 8]
    X86_AT(c, 0xdb4e2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0, 4); }
    // 0db4e5  shl edx, 8
    X86_AT(c, 0xdb4e5u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[2] = r; }
    // 0db4e8  mov ecx, dword ptr [0xb2308]
    X86_AT(c, 0xdb4e8u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xB2308u)));
    // 0db4ee  sub ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xdb4eeu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4); }
    // 0db4f1  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xdb4f1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0db4f4  xchg ecx, eax
    X86_AT(c, 0xdb4f4u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
    // 0db4f5  shl eax, 4
    X86_AT(c, 0xdb4f5u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0db4f8  add eax, edx
    X86_AT(c, 0xdb4f8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0db4fa  cmp ebx, dword ptr [eax + 0xb2334]
    X86_AT(c, 0xdb4fau);
    (void)x86_sub(c, c.r[3], rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB2334u))), 0, 4);
    // 0db500  jne 0xdb51f
    X86_AT(c, 0xdb500u);
    if (x86_cc(c, 5)) { goto L_db51f; }
    X86_TICK(c, 11);
    // 0db502  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xdb502u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0db505  cmp ebx, eax
    X86_AT(c, 0xdb505u);
    (void)x86_sub(c, c.r[3], c.r[0], 0, 4);
    // 0db507  je 0xdb770
    X86_AT(c, 0xdb507u);
    if (x86_cc(c, 4)) { goto L_db770; }
    X86_TICK(c, 7);
    // 0db50d  cmp eax, 2
    X86_AT(c, 0xdb50du);
    (void)x86_sub(c, c.r[0], 0x2u, 0, 4);
    // 0db510  je 0xdb770
    X86_AT(c, 0xdb510u);
    if (x86_cc(c, 4)) { goto L_db770; }
    X86_TICK(c, 7);
    // 0db516  cmp eax, 3
    X86_AT(c, 0xdb516u);
    (void)x86_sub(c, c.r[0], 0x3u, 0, 4);
    // 0db519  je 0xdb770
    X86_AT(c, 0xdb519u);
    if (x86_cc(c, 4)) { goto L_db770; }
L_db51f:
    X86_TICK(c, 43);
    // 0db51f  mov eax, dword ptr [0xb2304]
    X86_AT(c, 0xdb51fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB2304u)));
    // 0db524  sub eax, dword ptr [ebp + 8]
    X86_AT(c, 0xdb524u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0, 4); }
    // 0db527  shl eax, 8
    X86_AT(c, 0xdb527u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0db52a  mov edx, dword ptr [0xb2308]
    X86_AT(c, 0xdb52au);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB2308u)));
    // 0db530  sub edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xdb530u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4); }
    // 0db533  shl edx, 4
    X86_AT(c, 0xdb533u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0db536  add edx, eax
    X86_AT(c, 0xdb536u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0db538  mov edi, dword ptr [edx + 0xb2338]
    X86_AT(c, 0xdb538u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB2338u)));
    // 0db53e  push 0xf
    X86_AT(c, 0xdb53eu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0db540  push 0xcad4
    X86_AT(c, 0xdb540u);
    { uint32_t v = 0xCAD4u; push32(c, v); }
    // 0db545  call 0xcc830
    X86_AT(c, 0xdb545u);
    push32(c, 0xdb54au); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xdb54au);
    X86_TICK(c, 9);
    // 0db54a  push edi
    X86_AT(c, 0xdb54au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0db54b  call 0xdb1f4
    X86_AT(c, 0xdb54bu);
    push32(c, 0xdb550u); x86_call_known(c, 0xdb1f4u, f_000db1f4); X86_RET(c, 0xdb550u);
    X86_TICK(c, 9);
    // 0db550  push 0xcaf0
    X86_AT(c, 0xdb550u);
    { uint32_t v = 0xCAF0u; push32(c, v); }
    // 0db555  call 0xcc7bc
    X86_AT(c, 0xdb555u);
    push32(c, 0xdb55au); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xdb55au);
    X86_TICK(c, 9);
    // 0db55a  push 7
    X86_AT(c, 0xdb55au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0db55c  call 0xc5ca4
    X86_AT(c, 0xdb55cu);
    push32(c, 0xdb561u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xdb561u);
    X86_TICK(c, 35);
    // 0db561  mov eax, dword ptr [0xb030a]
    X86_AT(c, 0xdb561u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB030Au)));
    // 0db566  cdq 
    X86_AT(c, 0xdb566u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0db567  sub eax, edx
    X86_AT(c, 0xdb567u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0db569  sar eax, 1
    X86_AT(c, 0xdb569u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0db56b  mov edx, dword ptr [0xb032e]
    X86_AT(c, 0xdb56bu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB032Eu)));
    // 0db571  shl edx, 3
    X86_AT(c, 0xdb571u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 0db574  add edx, eax
    X86_AT(c, 0xdb574u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0db576  add edx, 0x38
    X86_AT(c, 0xdb576u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x38u, 0, 4); }
    // 0db579  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xdb579u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0db57c  push 0xff
    X86_AT(c, 0xdb57cu);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0db581  push 1
    X86_AT(c, 0xdb581u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0db583  call 0xc5df0
    X86_AT(c, 0xdb583u);
    push32(c, 0xdb588u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xdb588u);
    X86_TICK(c, 13);
    // 0db588  add esp, 0x1c
    X86_AT(c, 0xdb588u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0db58b  cmp eax, dword ptr [ebp - 4]
    X86_AT(c, 0xdb58bu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4);
    // 0db58e  jg 0xdb5a4
    X86_AT(c, 0xdb58eu);
    if (x86_cc(c, 15)) { goto L_db5a4; }
    X86_TICK(c, 9);
    // 0db590  push 0xcafc
    X86_AT(c, 0xdb590u);
    { uint32_t v = 0xCAFCu; push32(c, v); }
    // 0db595  call 0xcc7bc
    X86_AT(c, 0xdb595u);
    push32(c, 0xdb59au); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xdb59au);
    X86_TICK(c, 11);
    // 0db59a  sub ebx, ebx
    X86_AT(c, 0xdb59au);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0db59c  add esp, 4
    X86_AT(c, 0xdb59cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0db59f  jmp 0xdb732
    X86_AT(c, 0xdb59fu);
    goto L_db732;
L_db5a4:
    X86_TICK(c, 11);
    // 0db5a4  push 0xff
    X86_AT(c, 0xdb5a4u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0db5a9  push 1
    X86_AT(c, 0xdb5a9u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0db5ab  call 0xc5df0
    X86_AT(c, 0xdb5abu);
    push32(c, 0xdb5b0u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xdb5b0u);
    X86_TICK(c, 43);
    // 0db5b0  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xdb5b0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0db5b3  mov eax, edi
    X86_AT(c, 0xdb5b3u);
    c.r[0] = c.r[7];
    // 0db5b5  mul eax
    X86_AT(c, 0xdb5b5u);
    x86_mul(c, c.r[0], 4);
    // 0db5b7  add eax, dword ptr [0xb2328]
    X86_AT(c, 0xdb5b7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xB2328u))), 0, 4); }
    // 0db5bd  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xdb5bdu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0db5c0  add esp, 8
    X86_AT(c, 0xdb5c0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0db5c3  cmp eax, 0xff
    X86_AT(c, 0xdb5c3u);
    (void)x86_sub(c, c.r[0], 0xFFu, 0, 4);
    // 0db5c8  jle 0xdb5de
    X86_AT(c, 0xdb5c8u);
    if (x86_cc(c, 14)) { goto L_db5de; }
    X86_TICK(c, 13);
    // 0db5ca  push 0xff
    X86_AT(c, 0xdb5cau);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0db5cf  lea eax, [edi + 1]
    X86_AT(c, 0xdb5cfu);
    c.r[0] = (uint32_t)(c.r[7] + 0x1u);
    // 0db5d2  push eax
    X86_AT(c, 0xdb5d2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0db5d3  call 0xc5df0
    X86_AT(c, 0xdb5d3u);
    push32(c, 0xdb5d8u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xdb5d8u);
    X86_TICK(c, 4);
    // 0db5d8  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xdb5d8u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0db5db  add esp, 8
    X86_AT(c, 0xdb5dbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_db5de:
    X86_TICK(c, 7);
    // 0db5de  cmp edi, 9
    X86_AT(c, 0xdb5deu);
    (void)x86_sub(c, c.r[7], 0x9u, 0, 4);
    // 0db5e1  jne 0xdb60e
    X86_AT(c, 0xdb5e1u);
    if (x86_cc(c, 5)) { goto L_db60e; }
    X86_TICK(c, 12);
    // 0db5e3  cmp dword ptr [0xb032e], 0
    X86_AT(c, 0xdb5e3u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB032Eu))), 0x0u, 0, 4);
    // 0db5ea  je 0xdb60e
    X86_AT(c, 0xdb5eau);
    if (x86_cc(c, 4)) { goto L_db60e; }
    X86_TICK(c, 9);
    // 0db5ec  push 0xcb14
    X86_AT(c, 0xdb5ecu);
    { uint32_t v = 0xCB14u; push32(c, v); }
    // 0db5f1  call 0xcc7bc
    X86_AT(c, 0xdb5f1u);
    push32(c, 0xdb5f6u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xdb5f6u);
    X86_TICK(c, 19);
    // 0db5f6  mov eax, dword ptr [0xb032e]
    X86_AT(c, 0xdb5f6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB032Eu)));
    // 0db5fb  dec dword ptr [eax*4 + 0xb037a]
    X86_AT(c, 0xdb5fbu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xB037Au)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0db602  mov dword ptr [0xb032e], 0
    X86_AT(c, 0xdb602u);
    wr32((c.sbase[3] + (uint32_t)(0xB032Eu)), 0x0u);
    // 0db60c  jmp 0xdb663
    X86_AT(c, 0xdb60cu);
    goto L_db663;
L_db60e:
    X86_TICK(c, 7);
    // 0db60e  cmp edi, 0x10
    X86_AT(c, 0xdb60eu);
    (void)x86_sub(c, c.r[7], 0x10u, 0, 4);
    // 0db611  jne 0xdb635
    X86_AT(c, 0xdb611u);
    if (x86_cc(c, 5)) { goto L_db635; }
    X86_TICK(c, 9);
    // 0db613  push 0xcb48
    X86_AT(c, 0xdb613u);
    { uint32_t v = 0xCB48u; push32(c, v); }
    // 0db618  call 0xcc7bc
    X86_AT(c, 0xdb618u);
    push32(c, 0xdb61du); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xdb61du);
    X86_TICK(c, 20);
    // 0db61d  mov eax, dword ptr [0xb0322]
    X86_AT(c, 0xdb61du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB0322u)));
    // 0db622  cdq 
    X86_AT(c, 0xdb622u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0db623  sub eax, edx
    X86_AT(c, 0xdb623u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0db625  sar eax, 1
    X86_AT(c, 0xdb625u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0db627  mov dword ptr [0xb0322], eax
    X86_AT(c, 0xdb627u);
    wr32((c.sbase[3] + (uint32_t)(0xB0322u)), c.r[0]);
    // 0db62c  call 0xcc66c
    X86_AT(c, 0xdb62cu);
    push32(c, 0xdb631u); x86_call_known(c, 0xcc66cu, f_000cc66c); X86_RET(c, 0xdb631u);
    X86_TICK(c, 9);
    // 0db631  sub ebx, ebx
    X86_AT(c, 0xdb631u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0db633  jmp 0xdb66a
    X86_AT(c, 0xdb633u);
    goto L_db66a;
L_db635:
    X86_TICK(c, 7);
    // 0db635  cmp edi, 0x15
    X86_AT(c, 0xdb635u);
    (void)x86_sub(c, c.r[7], 0x15u, 0, 4);
    // 0db638  jne 0xdb66d
    X86_AT(c, 0xdb638u);
    if (x86_cc(c, 5)) { goto L_db66d; }
    X86_TICK(c, 12);
    // 0db63a  cmp dword ptr [ebp - 4], 0x80
    X86_AT(c, 0xdb63au);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x80u, 0, 4);
    // 0db641  jge 0xdb66d
    X86_AT(c, 0xdb641u);
    if (x86_cc(c, 13)) { goto L_db66d; }
    X86_TICK(c, 9);
    // 0db643  push 0xcb9c
    X86_AT(c, 0xdb643u);
    { uint32_t v = 0xCB9Cu; push32(c, v); }
    // 0db648  call 0xcc7bc
    X86_AT(c, 0xdb648u);
    push32(c, 0xdb64du); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xdb64du);
    X86_TICK(c, 20);
    // 0db64d  mov eax, dword ptr [0xb0316]
    X86_AT(c, 0xdb64du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB0316u)));
    // 0db652  cdq 
    X86_AT(c, 0xdb652u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0db653  sub eax, edx
    X86_AT(c, 0xdb653u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0db655  sar eax, 1
    X86_AT(c, 0xdb655u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0db657  mov dword ptr [0xb0316], eax
    X86_AT(c, 0xdb657u);
    wr32((c.sbase[3] + (uint32_t)(0xB0316u)), c.r[0]);
    // 0db65c  add dword ptr [0xb0316], 5
    X86_AT(c, 0xdb65cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB0316u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x5u, 0, 4)); }
L_db663:
    X86_TICK(c, 9);
    // 0db663  sub ebx, ebx
    X86_AT(c, 0xdb663u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0db665  call 0xcc700
    X86_AT(c, 0xdb665u);
    push32(c, 0xdb66au); x86_call_known(c, 0xcc700u, f_000cc700); X86_RET(c, 0xdb66au);
L_db66a:
    X86_TICK(c, 2);
    // 0db66a  add esp, 4
    X86_AT(c, 0xdb66au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_db66d:
    X86_TICK(c, 7);
    // 0db66d  cmp edi, 2
    X86_AT(c, 0xdb66du);
    (void)x86_sub(c, c.r[7], 0x2u, 0, 4);
    // 0db670  jne 0xdb732
    X86_AT(c, 0xdb670u);
    if (x86_cc(c, 5)) { goto L_db732; }
    X86_TICK(c, 2);
    // 0db676  mov esi, 1
    X86_AT(c, 0xdb676u);
    c.r[6] = 0x1u;
L_db67b:
    X86_TICK(c, 7);
    // 0db67b  cmp esi, 0xf
    X86_AT(c, 0xdb67bu);
    (void)x86_sub(c, c.r[6], 0xFu, 0, 4);
    // 0db67e  jg 0xdb732
    X86_AT(c, 0xdb67eu);
    if (x86_cc(c, 15)) { goto L_db732; }
    X86_TICK(c, 12);
    // 0db684  cmp dword ptr [esi*4 + 0xb0392], 0
    X86_AT(c, 0xdb684u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xB0392u))), 0x0u, 0, 4);
    // 0db68c  je 0xdb72c
    X86_AT(c, 0xdb68cu);
    if (x86_cc(c, 4)) { goto L_db72c; }
    X86_TICK(c, 11);
    // 0db692  cmp esi, dword ptr [0xb0326]
    X86_AT(c, 0xdb692u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0xB0326u))), 0, 4);
    // 0db698  je 0xdb72c
    X86_AT(c, 0xdb698u);
    if (x86_cc(c, 4)) { goto L_db72c; }
    X86_TICK(c, 11);
    // 0db69e  push 0xcbc4
    X86_AT(c, 0xdb69eu);
    { uint32_t v = 0xCBC4u; push32(c, v); }
    // 0db6a3  push 7
    X86_AT(c, 0xdb6a3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0db6a5  call 0xc8cdc
    X86_AT(c, 0xdb6a5u);
    push32(c, 0xdb6aau); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xdb6aau);
    X86_TICK(c, 17);
    // 0db6aa  mov eax, dword ptr [esi*4 + 0xa1de8]
    X86_AT(c, 0xdb6aau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xA1DE8u)));
    // 0db6b1  mov al, byte ptr [eax]
    X86_AT(c, 0xdb6b1u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0db6b3  push eax
    X86_AT(c, 0xdb6b3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0db6b4  call 0xcf864
    X86_AT(c, 0xdb6b4u);
    push32(c, 0xdb6b9u); x86_call_known(c, 0xcf864u, f_000cf864); X86_RET(c, 0xdb6b9u);
    X86_TICK(c, 9);
    // 0db6b9  add esp, 0xc
    X86_AT(c, 0xdb6b9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0db6bc  and eax, eax
    X86_AT(c, 0xdb6bcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0db6be  je 0xdb6d1
    X86_AT(c, 0xdb6beu);
    if (x86_cc(c, 4)) { goto L_db6d1; }
    X86_TICK(c, 11);
    // 0db6c0  push 0xf
    X86_AT(c, 0xdb6c0u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0db6c2  push 0xcbe8
    X86_AT(c, 0xdb6c2u);
    { uint32_t v = 0xCBE8u; push32(c, v); }
    // 0db6c7  call 0xcc830
    X86_AT(c, 0xdb6c7u);
    push32(c, 0xdb6ccu); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xdb6ccu);
    X86_TICK(c, 9);
    // 0db6cc  add esp, 8
    X86_AT(c, 0xdb6ccu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0db6cf  jmp 0xdb6df
    X86_AT(c, 0xdb6cfu);
    goto L_db6df;
L_db6d1:
    X86_TICK(c, 13);
    // 0db6d1  push 0xf
    X86_AT(c, 0xdb6d1u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0db6d3  push 0x20
    X86_AT(c, 0xdb6d3u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0db6d5  push 7
    X86_AT(c, 0xdb6d5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0db6d7  call 0xcc7dc
    X86_AT(c, 0xdb6d7u);
    push32(c, 0xdb6dcu); x86_call_known(c, 0xcc7dcu, f_000cc7dc); X86_RET(c, 0xdb6dcu);
    X86_TICK(c, 2);
    // 0db6dc  add esp, 0xc
    X86_AT(c, 0xdb6dcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_db6df:
    X86_TICK(c, 12);
    // 0db6df  push dword ptr [esi*4 + 0xa1de8]
    X86_AT(c, 0xdb6dfu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xA1DE8u))); push32(c, v); }
    // 0db6e6  call 0xcc884
    X86_AT(c, 0xdb6e6u);
    push32(c, 0xdb6ebu); x86_call_known(c, 0xcc884u, f_000cc884); X86_RET(c, 0xdb6ebu);
    X86_TICK(c, 9);
    // 0db6eb  add esp, 4
    X86_AT(c, 0xdb6ebu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0db6ee  cmp eax, 0xb
    X86_AT(c, 0xdb6eeu);
    (void)x86_sub(c, c.r[0], 0xBu, 0, 4);
    // 0db6f1  jle 0xdb700
    X86_AT(c, 0xdb6f1u);
    if (x86_cc(c, 14)) { goto L_db700; }
    X86_TICK(c, 9);
    // 0db6f3  push 0xcbec
    X86_AT(c, 0xdb6f3u);
    { uint32_t v = 0xCBECu; push32(c, v); }
    // 0db6f8  call 0xcc7bc
    X86_AT(c, 0xdb6f8u);
    push32(c, 0xdb6fdu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xdb6fdu);
    X86_TICK(c, 2);
    // 0db6fd  add esp, 4
    X86_AT(c, 0xdb6fdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_db700:
    X86_TICK(c, 14);
    // 0db700  push dword ptr [esi*4 + 0xa1de8]
    X86_AT(c, 0xdb700u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xA1DE8u))); push32(c, v); }
    // 0db707  push 7
    X86_AT(c, 0xdb707u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0db709  call 0xc8cdc
    X86_AT(c, 0xdb709u);
    push32(c, 0xdb70eu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xdb70eu);
    X86_TICK(c, 9);
    // 0db70e  push 0xcbf0
    X86_AT(c, 0xdb70eu);
    { uint32_t v = 0xCBF0u; push32(c, v); }
    // 0db713  call 0xcc7bc
    X86_AT(c, 0xdb713u);
    push32(c, 0xdb718u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xdb718u);
    X86_TICK(c, 15);
    // 0db718  dec dword ptr [esi*4 + 0xb0392]
    X86_AT(c, 0xdb718u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xB0392u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0db71f  mov esi, 0x10
    X86_AT(c, 0xdb71fu);
    c.r[6] = 0x10u;
    // 0db724  call 0xcc700
    X86_AT(c, 0xdb724u);
    push32(c, 0xdb729u); x86_call_known(c, 0xcc700u, f_000cc700); X86_RET(c, 0xdb729u);
    X86_TICK(c, 2);
    // 0db729  add esp, 0xc
    X86_AT(c, 0xdb729u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_db72c:
    X86_TICK(c, 9);
    // 0db72c  inc esi
    X86_AT(c, 0xdb72cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0db72d  jmp 0xdb67b
    X86_AT(c, 0xdb72du);
    X86_POLL(c, 0xdb67bu); goto L_db67b;
L_db732:
    X86_TICK(c, 7);
    // 0db732  and ebx, ebx
    X86_AT(c, 0xdb732u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0db734  je 0xdb770
    X86_AT(c, 0xdb734u);
    if (x86_cc(c, 4)) { goto L_db770; }
    X86_TICK(c, 9);
    // 0db736  push 8
    X86_AT(c, 0xdb736u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0db738  call 0xc5ca4
    X86_AT(c, 0xdb738u);
    push32(c, 0xdb73du); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xdb73du);
    X86_TICK(c, 11);
    // 0db73d  push 0xe
    X86_AT(c, 0xdb73du);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0db73f  push 0xcbfc
    X86_AT(c, 0xdb73fu);
    { uint32_t v = 0xCBFCu; push32(c, v); }
    // 0db744  call 0xcc830
    X86_AT(c, 0xdb744u);
    push32(c, 0xdb749u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xdb749u);
    X86_TICK(c, 16);
    // 0db749  push 3
    X86_AT(c, 0xdb749u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0db74b  push dword ptr [ebp - 8]
    X86_AT(c, 0xdb74bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0db74e  push 7
    X86_AT(c, 0xdb74eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0db750  call 0xc8cb8
    X86_AT(c, 0xdb750u);
    push32(c, 0xdb755u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xdb755u);
    X86_TICK(c, 9);
    // 0db755  push 0xcc10
    X86_AT(c, 0xdb755u);
    { uint32_t v = 0xCC10u; push32(c, v); }
    // 0db75a  call 0xcc7bc
    X86_AT(c, 0xdb75au);
    push32(c, 0xdb75fu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xdb75fu);
    X86_TICK(c, 18);
    // 0db75f  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xdb75fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0db762  sub dword ptr [0xb02fe], eax
    X86_AT(c, 0xdb762u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB02FEu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0db768  call 0xcc628
    X86_AT(c, 0xdb768u);
    push32(c, 0xdb76du); x86_call_known(c, 0xcc628u, f_000cc628); X86_RET(c, 0xdb76du);
    X86_TICK(c, 2);
    // 0db76d  add esp, 0x1c
    X86_AT(c, 0xdb76du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
L_db770:
    X86_TICK(c, 28);
    // 0db770  pop edi
    X86_AT(c, 0xdb770u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0db771  pop esi
    X86_AT(c, 0xdb771u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0db772  pop ebx
    X86_AT(c, 0xdb772u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0db773  leave 
    X86_AT(c, 0xdb773u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0db774  ret 
    X86_AT(c, 0xdb774u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdb4acu, "ran off the end of a function");
}
}
