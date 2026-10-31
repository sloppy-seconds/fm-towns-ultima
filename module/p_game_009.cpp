#include "p_game_funcs.h"
namespace p_game {
void f_000ed2ca(X86Cpu& c) {
    goto L_ed2ca;
L_ec3cf:
    X86_TICK(c, 11);
    // 0ec3cf  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xec3cfu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0ec3d2  cmp edx, 0xa
    X86_AT(c, 0xec3d2u);
    (void)x86_sub(c, c.r[2], 0xAu, 0, 4);
    // 0ec3d5  ja 0xec3cf
    X86_AT(c, 0xec3d5u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0xec3cfu); goto L_ec3cf; }
    X86_TICK(c, 7);
    // 0ec3d7  jmp dword ptr cs:[edx*4 + 0xec3df]
    X86_AT(c, 0xec3d7u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xEC3DFu)));
      switch (t) {
      case 0xec40bu: goto L_ec40b;
      case 0xec539u: goto L_ec539;
      case 0xec678u: goto L_ec678;
      case 0xec7b7u: goto L_ec7b7;
      case 0xec8f6u: goto L_ec8f6;
      case 0xeca38u: goto L_eca38;
      case 0xecb77u: goto L_ecb77;
      case 0xece25u: goto L_ece25;
      case 0xed058u: goto L_ed058;
      case 0xed2d2u: goto L_ed2d2;
      case 0xed3a4u: goto L_ed3a4;
      default: x86_jump(c, t); return; } }
L_ec40b:
    X86_TICK(c, 11);
    // 0ec40b  push 0xe
    X86_AT(c, 0xec40bu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0ec40d  push 4
    X86_AT(c, 0xec40du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec40f  call 0xe74d8
    X86_AT(c, 0xec40fu);
    push32(c, 0xec414u); f_000e74d8(c); X86_RET(c, 0xec414u);
    X86_TICK(c, 2);
    // 0ec414  add esp, 8
    X86_AT(c, 0xec414u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_ec417:
    X86_TICK(c, 13);
    // 0ec417  push 5
    X86_AT(c, 0xec417u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ec419  push 0x28
    X86_AT(c, 0xec419u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0ec41b  push 4
    X86_AT(c, 0xec41bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec41d  call 0xe7260
    X86_AT(c, 0xec41du);
    push32(c, 0xec422u); f_000e7260(c); X86_RET(c, 0xec422u);
    X86_TICK(c, 13);
    // 0ec422  push 2
    X86_AT(c, 0xec422u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ec424  push esi
    X86_AT(c, 0xec424u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ec425  push 4
    X86_AT(c, 0xec425u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec427  call 0xe5630
    X86_AT(c, 0xec427u);
    push32(c, 0xec42cu); f_000e5630(c); X86_RET(c, 0xec42cu);
    X86_TICK(c, 13);
    // 0ec42c  push 6
    X86_AT(c, 0xec42cu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ec42e  push 0x34
    X86_AT(c, 0xec42eu);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0ec430  push 4
    X86_AT(c, 0xec430u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec432  call 0xe7260
    X86_AT(c, 0xec432u);
    push32(c, 0xec437u); f_000e7260(c); X86_RET(c, 0xec437u);
    X86_TICK(c, 29);
    // 0ec437  push 2
    X86_AT(c, 0xec437u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ec439  mov eax, edi
    X86_AT(c, 0xec439u);
    c.r[0] = c.r[7];
    // 0ec43b  lea edx, [eax + eax*4]
    X86_AT(c, 0xec43bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ec43e  lea edx, [eax + edx*2]
    X86_AT(c, 0xec43eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ec441  shl edx, 5
    X86_AT(c, 0xec441u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ec444  sub edx, eax
    X86_AT(c, 0xec444u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ec446  push dword ptr [edx + 0xcde62]
    X86_AT(c, 0xec446u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE62u))); push32(c, v); }
    // 0ec44c  push 4
    X86_AT(c, 0xec44cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec44e  mov dword ptr [ebp - 0x4c], edx
    X86_AT(c, 0xec44eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)), c.r[2]);
    // 0ec451  call 0xe5630
    X86_AT(c, 0xec451u);
    push32(c, 0xec456u); f_000e5630(c); X86_RET(c, 0xec456u);
    X86_TICK(c, 9);
    // 0ec456  push 4
    X86_AT(c, 0xec456u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec458  call 0xe4b60
    X86_AT(c, 0xec458u);
    push32(c, 0xec45du); f_000e4b60(c); X86_RET(c, 0xec45du);
    X86_TICK(c, 12);
    // 0ec45d  xchg ebx, eax
    X86_AT(c, 0xec45du);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0ec45e  add esp, 0x34
    X86_AT(c, 0xec45eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
    // 0ec461  cmp bl, 5
    X86_AT(c, 0xec461u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0ec464  je 0xec4d1
    X86_AT(c, 0xec464u);
    if (x86_cc(c, 4)) { goto L_ec4d1; }
    X86_TICK(c, 7);
    // 0ec46a  cmp bl, 6
    X86_AT(c, 0xec46au);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0ec46d  je 0xec4d1
    X86_AT(c, 0xec46du);
    if (x86_cc(c, 4)) { goto L_ec4d1; }
    X86_TICK(c, 7);
    // 0ec46f  cmp bl, 4
    X86_AT(c, 0xec46fu);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0ec472  je 0xec4d1
    X86_AT(c, 0xec472u);
    if (x86_cc(c, 4)) { goto L_ec4d1; }
    X86_TICK(c, 7);
    // 0ec474  cmp bl, 1
    X86_AT(c, 0xec474u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0ec477  je 0xec4d1
    X86_AT(c, 0xec477u);
    if (x86_cc(c, 4)) { goto L_ec4d1; }
    X86_TICK(c, 7);
    // 0ec479  cmp bl, 7
    X86_AT(c, 0xec479u);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0ec47c  jne 0xec497
    X86_AT(c, 0xec47cu);
    if (x86_cc(c, 5)) { goto L_ec497; }
    X86_TICK(c, 15);
    // 0ec47e  mov eax, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xec47eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0ec481  mov edx, dword ptr [eax + 0xcde62]
    X86_AT(c, 0xec481u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xCDE62u)));
    // 0ec487  cmp edx, 0x19
    X86_AT(c, 0xec487u);
    (void)x86_sub(c, c.r[2], 0x19u, 0, 4);
    // 0ec48a  je 0xec417
    X86_AT(c, 0xec48au);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xec417u); goto L_ec417; }
    X86_TICK(c, 7);
    // 0ec48c  and esi, esi
    X86_AT(c, 0xec48cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0ec48e  je 0xec417
    X86_AT(c, 0xec48eu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xec417u); goto L_ec417; }
    X86_TICK(c, 8);
    // 0ec490  inc dword ptr [eax + 0xcde62]
    X86_AT(c, 0xec490u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCDE62u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0ec496  dec esi
    X86_AT(c, 0xec496u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_ec497:
    X86_TICK(c, 7);
    // 0ec497  cmp bl, 3
    X86_AT(c, 0xec497u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0ec49a  jne 0xec417
    X86_AT(c, 0xec49au);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xec417u); goto L_ec417; }
    X86_TICK(c, 22);
    // 0ec4a0  mov eax, edi
    X86_AT(c, 0xec4a0u);
    c.r[0] = c.r[7];
    // 0ec4a2  lea edx, [eax + eax*4]
    X86_AT(c, 0xec4a2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ec4a5  lea edx, [eax + edx*2]
    X86_AT(c, 0xec4a5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ec4a8  shl edx, 5
    X86_AT(c, 0xec4a8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ec4ab  sub edx, eax
    X86_AT(c, 0xec4abu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ec4ad  mov eax, dword ptr [edx + 0xcde62]
    X86_AT(c, 0xec4adu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE62u)));
    // 0ec4b3  cmp eax, 0xa
    X86_AT(c, 0xec4b3u);
    (void)x86_sub(c, c.r[0], 0xAu, 0, 4);
    // 0ec4b6  je 0xec417
    X86_AT(c, 0xec4b6u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xec417u); goto L_ec417; }
    X86_TICK(c, 7);
    // 0ec4bc  cmp esi, 0x1e
    X86_AT(c, 0xec4bcu);
    (void)x86_sub(c, c.r[6], 0x1Eu, 0, 4);
    // 0ec4bf  je 0xec417
    X86_AT(c, 0xec4bfu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xec417u); goto L_ec417; }
    X86_TICK(c, 15);
    // 0ec4c5  dec dword ptr [edx + 0xcde62]
    X86_AT(c, 0xec4c5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE62u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0ec4cb  inc esi
    X86_AT(c, 0xec4cbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0ec4cc  jmp 0xec417
    X86_AT(c, 0xec4ccu);
    X86_POLL(c, 0xec417u); goto L_ec417;
L_ec4d1:
    X86_TICK(c, 11);
    // 0ec4d1  push 0xb
    X86_AT(c, 0xec4d1u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ec4d3  push 4
    X86_AT(c, 0xec4d3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec4d5  call 0xe74d8
    X86_AT(c, 0xec4d5u);
    push32(c, 0xec4dau); f_000e74d8(c); X86_RET(c, 0xec4dau);
    X86_TICK(c, 13);
    // 0ec4da  push 5
    X86_AT(c, 0xec4dau);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ec4dc  push 0x28
    X86_AT(c, 0xec4dcu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0ec4de  push 4
    X86_AT(c, 0xec4deu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec4e0  call 0xe7260
    X86_AT(c, 0xec4e0u);
    push32(c, 0xec4e5u); f_000e7260(c); X86_RET(c, 0xec4e5u);
    X86_TICK(c, 13);
    // 0ec4e5  push 2
    X86_AT(c, 0xec4e5u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ec4e7  push esi
    X86_AT(c, 0xec4e7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ec4e8  push 4
    X86_AT(c, 0xec4e8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec4ea  call 0xe5630
    X86_AT(c, 0xec4eau);
    push32(c, 0xec4efu); f_000e5630(c); X86_RET(c, 0xec4efu);
    X86_TICK(c, 13);
    // 0ec4ef  push 6
    X86_AT(c, 0xec4efu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ec4f1  push 0x34
    X86_AT(c, 0xec4f1u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0ec4f3  push 4
    X86_AT(c, 0xec4f3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec4f5  call 0xe7260
    X86_AT(c, 0xec4f5u);
    push32(c, 0xec4fau); f_000e7260(c); X86_RET(c, 0xec4fau);
    X86_TICK(c, 27);
    // 0ec4fa  push 2
    X86_AT(c, 0xec4fau);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ec4fc  mov eax, edi
    X86_AT(c, 0xec4fcu);
    c.r[0] = c.r[7];
    // 0ec4fe  lea edx, [eax + eax*4]
    X86_AT(c, 0xec4feu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ec501  lea edx, [eax + edx*2]
    X86_AT(c, 0xec501u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ec504  shl edx, 5
    X86_AT(c, 0xec504u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ec507  sub edx, eax
    X86_AT(c, 0xec507u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ec509  push dword ptr [edx + 0xcde62]
    X86_AT(c, 0xec509u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE62u))); push32(c, v); }
    // 0ec50f  push 4
    X86_AT(c, 0xec50fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec511  call 0xe5630
    X86_AT(c, 0xec511u);
    push32(c, 0xec516u); f_000e5630(c); X86_RET(c, 0xec516u);
    X86_TICK(c, 9);
    // 0ec516  add esp, 0x38
    X86_AT(c, 0xec516u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 0ec519  cmp bl, 1
    X86_AT(c, 0xec519u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0ec51c  je 0xed30f
    X86_AT(c, 0xec51cu);
    if (x86_cc(c, 4)) { goto L_ed30f; }
    X86_TICK(c, 7);
    // 0ec522  cmp bl, 6
    X86_AT(c, 0xec522u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0ec525  je 0xec78b
    X86_AT(c, 0xec525u);
    if (x86_cc(c, 4)) { goto L_ec78b; }
    X86_TICK(c, 7);
    // 0ec52b  cmp bl, 4
    X86_AT(c, 0xec52bu);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0ec52e  jne 0xec3cf
    X86_AT(c, 0xec52eu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xec3cfu); goto L_ec3cf; }
    X86_TICK(c, 7);
    // 0ec534  jmp 0xec78b
    X86_AT(c, 0xec534u);
    goto L_ec78b;
L_ec539:
    X86_TICK(c, 11);
    // 0ec539  push 0xe
    X86_AT(c, 0xec539u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0ec53b  push 4
    X86_AT(c, 0xec53bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec53d  call 0xe74d8
    X86_AT(c, 0xec53du);
    push32(c, 0xec542u); f_000e74d8(c); X86_RET(c, 0xec542u);
    X86_TICK(c, 2);
    // 0ec542  add esp, 8
    X86_AT(c, 0xec542u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_ec545:
    X86_TICK(c, 13);
    // 0ec545  push 5
    X86_AT(c, 0xec545u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ec547  push 0x28
    X86_AT(c, 0xec547u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0ec549  push 4
    X86_AT(c, 0xec549u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec54b  call 0xe7260
    X86_AT(c, 0xec54bu);
    push32(c, 0xec550u); f_000e7260(c); X86_RET(c, 0xec550u);
    X86_TICK(c, 13);
    // 0ec550  push 2
    X86_AT(c, 0xec550u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ec552  push esi
    X86_AT(c, 0xec552u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ec553  push 4
    X86_AT(c, 0xec553u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec555  call 0xe5630
    X86_AT(c, 0xec555u);
    push32(c, 0xec55au); f_000e5630(c); X86_RET(c, 0xec55au);
    X86_TICK(c, 13);
    // 0ec55a  push 7
    X86_AT(c, 0xec55au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ec55c  push 0x34
    X86_AT(c, 0xec55cu);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0ec55e  push 4
    X86_AT(c, 0xec55eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec560  call 0xe7260
    X86_AT(c, 0xec560u);
    push32(c, 0xec565u); f_000e7260(c); X86_RET(c, 0xec565u);
    X86_TICK(c, 29);
    // 0ec565  push 2
    X86_AT(c, 0xec565u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ec567  mov eax, edi
    X86_AT(c, 0xec567u);
    c.r[0] = c.r[7];
    // 0ec569  lea edx, [eax + eax*4]
    X86_AT(c, 0xec569u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ec56c  lea edx, [eax + edx*2]
    X86_AT(c, 0xec56cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ec56f  shl edx, 5
    X86_AT(c, 0xec56fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ec572  sub edx, eax
    X86_AT(c, 0xec572u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ec574  push dword ptr [edx + 0xcde66]
    X86_AT(c, 0xec574u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE66u))); push32(c, v); }
    // 0ec57a  push 4
    X86_AT(c, 0xec57au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec57c  mov dword ptr [ebp - 0x4c], edx
    X86_AT(c, 0xec57cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)), c.r[2]);
    // 0ec57f  call 0xe5630
    X86_AT(c, 0xec57fu);
    push32(c, 0xec584u); f_000e5630(c); X86_RET(c, 0xec584u);
    X86_TICK(c, 9);
    // 0ec584  push 4
    X86_AT(c, 0xec584u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec586  call 0xe4b60
    X86_AT(c, 0xec586u);
    push32(c, 0xec58bu); f_000e4b60(c); X86_RET(c, 0xec58bu);
    X86_TICK(c, 12);
    // 0ec58b  xchg ebx, eax
    X86_AT(c, 0xec58bu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0ec58c  add esp, 0x34
    X86_AT(c, 0xec58cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
    // 0ec58f  cmp bl, 5
    X86_AT(c, 0xec58fu);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0ec592  je 0xec5ff
    X86_AT(c, 0xec592u);
    if (x86_cc(c, 4)) { goto L_ec5ff; }
    X86_TICK(c, 7);
    // 0ec598  cmp bl, 6
    X86_AT(c, 0xec598u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0ec59b  je 0xec5ff
    X86_AT(c, 0xec59bu);
    if (x86_cc(c, 4)) { goto L_ec5ff; }
    X86_TICK(c, 7);
    // 0ec59d  cmp bl, 4
    X86_AT(c, 0xec59du);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0ec5a0  je 0xec5ff
    X86_AT(c, 0xec5a0u);
    if (x86_cc(c, 4)) { goto L_ec5ff; }
    X86_TICK(c, 7);
    // 0ec5a2  cmp bl, 1
    X86_AT(c, 0xec5a2u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0ec5a5  je 0xec5ff
    X86_AT(c, 0xec5a5u);
    if (x86_cc(c, 4)) { goto L_ec5ff; }
    X86_TICK(c, 7);
    // 0ec5a7  cmp bl, 7
    X86_AT(c, 0xec5a7u);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0ec5aa  jne 0xec5c5
    X86_AT(c, 0xec5aau);
    if (x86_cc(c, 5)) { goto L_ec5c5; }
    X86_TICK(c, 15);
    // 0ec5ac  mov eax, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xec5acu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0ec5af  mov edx, dword ptr [eax + 0xcde66]
    X86_AT(c, 0xec5afu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xCDE66u)));
    // 0ec5b5  cmp edx, 0x19
    X86_AT(c, 0xec5b5u);
    (void)x86_sub(c, c.r[2], 0x19u, 0, 4);
    // 0ec5b8  je 0xec545
    X86_AT(c, 0xec5b8u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xec545u); goto L_ec545; }
    X86_TICK(c, 7);
    // 0ec5ba  and esi, esi
    X86_AT(c, 0xec5bau);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0ec5bc  je 0xec545
    X86_AT(c, 0xec5bcu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xec545u); goto L_ec545; }
    X86_TICK(c, 8);
    // 0ec5be  inc dword ptr [eax + 0xcde66]
    X86_AT(c, 0xec5beu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCDE66u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0ec5c4  dec esi
    X86_AT(c, 0xec5c4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_ec5c5:
    X86_TICK(c, 7);
    // 0ec5c5  cmp bl, 3
    X86_AT(c, 0xec5c5u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0ec5c8  jne 0xec545
    X86_AT(c, 0xec5c8u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xec545u); goto L_ec545; }
    X86_TICK(c, 22);
    // 0ec5ce  mov eax, edi
    X86_AT(c, 0xec5ceu);
    c.r[0] = c.r[7];
    // 0ec5d0  lea edx, [eax + eax*4]
    X86_AT(c, 0xec5d0u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ec5d3  lea edx, [eax + edx*2]
    X86_AT(c, 0xec5d3u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ec5d6  shl edx, 5
    X86_AT(c, 0xec5d6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ec5d9  sub edx, eax
    X86_AT(c, 0xec5d9u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ec5db  mov eax, dword ptr [edx + 0xcde66]
    X86_AT(c, 0xec5dbu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE66u)));
    // 0ec5e1  cmp eax, 0xa
    X86_AT(c, 0xec5e1u);
    (void)x86_sub(c, c.r[0], 0xAu, 0, 4);
    // 0ec5e4  je 0xec545
    X86_AT(c, 0xec5e4u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xec545u); goto L_ec545; }
    X86_TICK(c, 7);
    // 0ec5ea  cmp esi, 0x1e
    X86_AT(c, 0xec5eau);
    (void)x86_sub(c, c.r[6], 0x1Eu, 0, 4);
    // 0ec5ed  je 0xec545
    X86_AT(c, 0xec5edu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xec545u); goto L_ec545; }
    X86_TICK(c, 15);
    // 0ec5f3  dec dword ptr [edx + 0xcde66]
    X86_AT(c, 0xec5f3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE66u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0ec5f9  inc esi
    X86_AT(c, 0xec5f9u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0ec5fa  jmp 0xec545
    X86_AT(c, 0xec5fau);
    X86_POLL(c, 0xec545u); goto L_ec545;
L_ec5ff:
    X86_TICK(c, 11);
    // 0ec5ff  push 0xb
    X86_AT(c, 0xec5ffu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ec601  push 4
    X86_AT(c, 0xec601u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec603  call 0xe74d8
    X86_AT(c, 0xec603u);
    push32(c, 0xec608u); f_000e74d8(c); X86_RET(c, 0xec608u);
    X86_TICK(c, 13);
    // 0ec608  push 5
    X86_AT(c, 0xec608u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ec60a  push 0x28
    X86_AT(c, 0xec60au);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0ec60c  push 4
    X86_AT(c, 0xec60cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec60e  call 0xe7260
    X86_AT(c, 0xec60eu);
    push32(c, 0xec613u); f_000e7260(c); X86_RET(c, 0xec613u);
    X86_TICK(c, 13);
    // 0ec613  push 2
    X86_AT(c, 0xec613u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ec615  push esi
    X86_AT(c, 0xec615u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ec616  push 4
    X86_AT(c, 0xec616u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec618  call 0xe5630
    X86_AT(c, 0xec618u);
    push32(c, 0xec61du); f_000e5630(c); X86_RET(c, 0xec61du);
    X86_TICK(c, 13);
    // 0ec61d  push 7
    X86_AT(c, 0xec61du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ec61f  push 0x34
    X86_AT(c, 0xec61fu);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0ec621  push 4
    X86_AT(c, 0xec621u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec623  call 0xe7260
    X86_AT(c, 0xec623u);
    push32(c, 0xec628u); f_000e7260(c); X86_RET(c, 0xec628u);
    X86_TICK(c, 27);
    // 0ec628  push 2
    X86_AT(c, 0xec628u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ec62a  mov eax, edi
    X86_AT(c, 0xec62au);
    c.r[0] = c.r[7];
    // 0ec62c  lea edx, [eax + eax*4]
    X86_AT(c, 0xec62cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ec62f  lea edx, [eax + edx*2]
    X86_AT(c, 0xec62fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ec632  shl edx, 5
    X86_AT(c, 0xec632u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ec635  sub edx, eax
    X86_AT(c, 0xec635u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ec637  push dword ptr [edx + 0xcde66]
    X86_AT(c, 0xec637u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE66u))); push32(c, v); }
    // 0ec63d  push 4
    X86_AT(c, 0xec63du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec63f  call 0xe5630
    X86_AT(c, 0xec63fu);
    push32(c, 0xec644u); f_000e5630(c); X86_RET(c, 0xec644u);
    X86_TICK(c, 9);
    // 0ec644  add esp, 0x38
    X86_AT(c, 0xec644u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 0ec647  cmp bl, 5
    X86_AT(c, 0xec647u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0ec64a  jne 0xec658
    X86_AT(c, 0xec64au);
    if (x86_cc(c, 5)) { goto L_ec658; }
    X86_TICK(c, 9);
    // 0ec64c  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xec64cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0ec653  jmp 0xec3cf
    X86_AT(c, 0xec653u);
    X86_POLL(c, 0xec3cfu); goto L_ec3cf;
L_ec658:
    X86_TICK(c, 7);
    // 0ec658  cmp bl, 1
    X86_AT(c, 0xec658u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0ec65b  je 0xed30f
    X86_AT(c, 0xec65bu);
    if (x86_cc(c, 4)) { goto L_ed30f; }
    X86_TICK(c, 7);
    // 0ec661  cmp bl, 6
    X86_AT(c, 0xec661u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0ec664  je 0xec8ca
    X86_AT(c, 0xec664u);
    if (x86_cc(c, 4)) { goto L_ec8ca; }
    X86_TICK(c, 7);
    // 0ec66a  cmp bl, 4
    X86_AT(c, 0xec66au);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0ec66d  jne 0xec3cf
    X86_AT(c, 0xec66du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xec3cfu); goto L_ec3cf; }
    X86_TICK(c, 7);
    // 0ec673  jmp 0xec8ca
    X86_AT(c, 0xec673u);
    goto L_ec8ca;
L_ec678:
    X86_TICK(c, 11);
    // 0ec678  push 0xe
    X86_AT(c, 0xec678u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0ec67a  push 4
    X86_AT(c, 0xec67au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec67c  call 0xe74d8
    X86_AT(c, 0xec67cu);
    push32(c, 0xec681u); f_000e74d8(c); X86_RET(c, 0xec681u);
    X86_TICK(c, 2);
    // 0ec681  add esp, 8
    X86_AT(c, 0xec681u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_ec684:
    X86_TICK(c, 13);
    // 0ec684  push 5
    X86_AT(c, 0xec684u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ec686  push 0x28
    X86_AT(c, 0xec686u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0ec688  push 4
    X86_AT(c, 0xec688u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec68a  call 0xe7260
    X86_AT(c, 0xec68au);
    push32(c, 0xec68fu); f_000e7260(c); X86_RET(c, 0xec68fu);
    X86_TICK(c, 13);
    // 0ec68f  push 2
    X86_AT(c, 0xec68fu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ec691  push esi
    X86_AT(c, 0xec691u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ec692  push 4
    X86_AT(c, 0xec692u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec694  call 0xe5630
    X86_AT(c, 0xec694u);
    push32(c, 0xec699u); f_000e5630(c); X86_RET(c, 0xec699u);
    X86_TICK(c, 13);
    // 0ec699  push 8
    X86_AT(c, 0xec699u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0ec69b  push 0x34
    X86_AT(c, 0xec69bu);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0ec69d  push 4
    X86_AT(c, 0xec69du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec69f  call 0xe7260
    X86_AT(c, 0xec69fu);
    push32(c, 0xec6a4u); f_000e7260(c); X86_RET(c, 0xec6a4u);
    X86_TICK(c, 29);
    // 0ec6a4  push 2
    X86_AT(c, 0xec6a4u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ec6a6  mov eax, edi
    X86_AT(c, 0xec6a6u);
    c.r[0] = c.r[7];
    // 0ec6a8  lea edx, [eax + eax*4]
    X86_AT(c, 0xec6a8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ec6ab  lea edx, [eax + edx*2]
    X86_AT(c, 0xec6abu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ec6ae  shl edx, 5
    X86_AT(c, 0xec6aeu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ec6b1  sub edx, eax
    X86_AT(c, 0xec6b1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ec6b3  push dword ptr [edx + 0xcde6a]
    X86_AT(c, 0xec6b3u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE6Au))); push32(c, v); }
    // 0ec6b9  push 4
    X86_AT(c, 0xec6b9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec6bb  mov dword ptr [ebp - 0x4c], edx
    X86_AT(c, 0xec6bbu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)), c.r[2]);
    // 0ec6be  call 0xe5630
    X86_AT(c, 0xec6beu);
    push32(c, 0xec6c3u); f_000e5630(c); X86_RET(c, 0xec6c3u);
    X86_TICK(c, 9);
    // 0ec6c3  push 4
    X86_AT(c, 0xec6c3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec6c5  call 0xe4b60
    X86_AT(c, 0xec6c5u);
    push32(c, 0xec6cau); f_000e4b60(c); X86_RET(c, 0xec6cau);
    X86_TICK(c, 12);
    // 0ec6ca  xchg ebx, eax
    X86_AT(c, 0xec6cau);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0ec6cb  add esp, 0x34
    X86_AT(c, 0xec6cbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
    // 0ec6ce  cmp bl, 5
    X86_AT(c, 0xec6ceu);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0ec6d1  je 0xec73e
    X86_AT(c, 0xec6d1u);
    if (x86_cc(c, 4)) { goto L_ec73e; }
    X86_TICK(c, 7);
    // 0ec6d7  cmp bl, 6
    X86_AT(c, 0xec6d7u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0ec6da  je 0xec73e
    X86_AT(c, 0xec6dau);
    if (x86_cc(c, 4)) { goto L_ec73e; }
    X86_TICK(c, 7);
    // 0ec6dc  cmp bl, 4
    X86_AT(c, 0xec6dcu);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0ec6df  je 0xec73e
    X86_AT(c, 0xec6dfu);
    if (x86_cc(c, 4)) { goto L_ec73e; }
    X86_TICK(c, 7);
    // 0ec6e1  cmp bl, 1
    X86_AT(c, 0xec6e1u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0ec6e4  je 0xec73e
    X86_AT(c, 0xec6e4u);
    if (x86_cc(c, 4)) { goto L_ec73e; }
    X86_TICK(c, 7);
    // 0ec6e6  cmp bl, 7
    X86_AT(c, 0xec6e6u);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0ec6e9  jne 0xec704
    X86_AT(c, 0xec6e9u);
    if (x86_cc(c, 5)) { goto L_ec704; }
    X86_TICK(c, 15);
    // 0ec6eb  mov eax, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xec6ebu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0ec6ee  mov edx, dword ptr [eax + 0xcde6a]
    X86_AT(c, 0xec6eeu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xCDE6Au)));
    // 0ec6f4  cmp edx, 0x19
    X86_AT(c, 0xec6f4u);
    (void)x86_sub(c, c.r[2], 0x19u, 0, 4);
    // 0ec6f7  je 0xec684
    X86_AT(c, 0xec6f7u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xec684u); goto L_ec684; }
    X86_TICK(c, 7);
    // 0ec6f9  and esi, esi
    X86_AT(c, 0xec6f9u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0ec6fb  je 0xec684
    X86_AT(c, 0xec6fbu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xec684u); goto L_ec684; }
    X86_TICK(c, 8);
    // 0ec6fd  inc dword ptr [eax + 0xcde6a]
    X86_AT(c, 0xec6fdu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCDE6Au)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0ec703  dec esi
    X86_AT(c, 0xec703u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_ec704:
    X86_TICK(c, 7);
    // 0ec704  cmp bl, 3
    X86_AT(c, 0xec704u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0ec707  jne 0xec684
    X86_AT(c, 0xec707u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xec684u); goto L_ec684; }
    X86_TICK(c, 22);
    // 0ec70d  mov eax, edi
    X86_AT(c, 0xec70du);
    c.r[0] = c.r[7];
    // 0ec70f  lea edx, [eax + eax*4]
    X86_AT(c, 0xec70fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ec712  lea edx, [eax + edx*2]
    X86_AT(c, 0xec712u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ec715  shl edx, 5
    X86_AT(c, 0xec715u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ec718  sub edx, eax
    X86_AT(c, 0xec718u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ec71a  mov eax, dword ptr [edx + 0xcde6a]
    X86_AT(c, 0xec71au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE6Au)));
    // 0ec720  cmp eax, 0xa
    X86_AT(c, 0xec720u);
    (void)x86_sub(c, c.r[0], 0xAu, 0, 4);
    // 0ec723  je 0xec684
    X86_AT(c, 0xec723u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xec684u); goto L_ec684; }
    X86_TICK(c, 7);
    // 0ec729  cmp esi, 0x1e
    X86_AT(c, 0xec729u);
    (void)x86_sub(c, c.r[6], 0x1Eu, 0, 4);
    // 0ec72c  je 0xec684
    X86_AT(c, 0xec72cu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xec684u); goto L_ec684; }
    X86_TICK(c, 15);
    // 0ec732  dec dword ptr [edx + 0xcde6a]
    X86_AT(c, 0xec732u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE6Au)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0ec738  inc esi
    X86_AT(c, 0xec738u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0ec739  jmp 0xec684
    X86_AT(c, 0xec739u);
    X86_POLL(c, 0xec684u); goto L_ec684;
L_ec73e:
    X86_TICK(c, 11);
    // 0ec73e  push 0xb
    X86_AT(c, 0xec73eu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ec740  push 4
    X86_AT(c, 0xec740u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec742  call 0xe74d8
    X86_AT(c, 0xec742u);
    push32(c, 0xec747u); f_000e74d8(c); X86_RET(c, 0xec747u);
    X86_TICK(c, 13);
    // 0ec747  push 5
    X86_AT(c, 0xec747u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ec749  push 0x28
    X86_AT(c, 0xec749u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0ec74b  push 4
    X86_AT(c, 0xec74bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec74d  call 0xe7260
    X86_AT(c, 0xec74du);
    push32(c, 0xec752u); f_000e7260(c); X86_RET(c, 0xec752u);
    X86_TICK(c, 13);
    // 0ec752  push 2
    X86_AT(c, 0xec752u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ec754  push esi
    X86_AT(c, 0xec754u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ec755  push 4
    X86_AT(c, 0xec755u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec757  call 0xe5630
    X86_AT(c, 0xec757u);
    push32(c, 0xec75cu); f_000e5630(c); X86_RET(c, 0xec75cu);
    X86_TICK(c, 13);
    // 0ec75c  push 8
    X86_AT(c, 0xec75cu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0ec75e  push 0x34
    X86_AT(c, 0xec75eu);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0ec760  push 4
    X86_AT(c, 0xec760u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec762  call 0xe7260
    X86_AT(c, 0xec762u);
    push32(c, 0xec767u); f_000e7260(c); X86_RET(c, 0xec767u);
    X86_TICK(c, 27);
    // 0ec767  push 2
    X86_AT(c, 0xec767u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ec769  mov eax, edi
    X86_AT(c, 0xec769u);
    c.r[0] = c.r[7];
    // 0ec76b  lea edx, [eax + eax*4]
    X86_AT(c, 0xec76bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ec76e  lea edx, [eax + edx*2]
    X86_AT(c, 0xec76eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ec771  shl edx, 5
    X86_AT(c, 0xec771u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ec774  sub edx, eax
    X86_AT(c, 0xec774u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ec776  push dword ptr [edx + 0xcde6a]
    X86_AT(c, 0xec776u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE6Au))); push32(c, v); }
    // 0ec77c  push 4
    X86_AT(c, 0xec77cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec77e  call 0xe5630
    X86_AT(c, 0xec77eu);
    push32(c, 0xec783u); f_000e5630(c); X86_RET(c, 0xec783u);
    X86_TICK(c, 9);
    // 0ec783  add esp, 0x38
    X86_AT(c, 0xec783u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 0ec786  cmp bl, 5
    X86_AT(c, 0xec786u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0ec789  jne 0xec797
    X86_AT(c, 0xec789u);
    if (x86_cc(c, 5)) { goto L_ec797; }
L_ec78b:
    X86_TICK(c, 9);
    // 0ec78b  mov dword ptr [ebp - 4], 1
    X86_AT(c, 0xec78bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x1u);
    // 0ec792  jmp 0xec3cf
    X86_AT(c, 0xec792u);
    X86_POLL(c, 0xec3cfu); goto L_ec3cf;
L_ec797:
    X86_TICK(c, 7);
    // 0ec797  cmp bl, 1
    X86_AT(c, 0xec797u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0ec79a  je 0xed30f
    X86_AT(c, 0xec79au);
    if (x86_cc(c, 4)) { goto L_ed30f; }
    X86_TICK(c, 7);
    // 0ec7a0  cmp bl, 6
    X86_AT(c, 0xec7a0u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0ec7a3  je 0xeca09
    X86_AT(c, 0xec7a3u);
    if (x86_cc(c, 4)) { goto L_eca09; }
    X86_TICK(c, 7);
    // 0ec7a9  cmp bl, 4
    X86_AT(c, 0xec7a9u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0ec7ac  jne 0xec3cf
    X86_AT(c, 0xec7acu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xec3cfu); goto L_ec3cf; }
    X86_TICK(c, 7);
    // 0ec7b2  jmp 0xeca09
    X86_AT(c, 0xec7b2u);
    goto L_eca09;
L_ec7b7:
    X86_TICK(c, 11);
    // 0ec7b7  push 0xe
    X86_AT(c, 0xec7b7u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0ec7b9  push 4
    X86_AT(c, 0xec7b9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec7bb  call 0xe74d8
    X86_AT(c, 0xec7bbu);
    push32(c, 0xec7c0u); f_000e74d8(c); X86_RET(c, 0xec7c0u);
    X86_TICK(c, 2);
    // 0ec7c0  add esp, 8
    X86_AT(c, 0xec7c0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_ec7c3:
    X86_TICK(c, 13);
    // 0ec7c3  push 5
    X86_AT(c, 0xec7c3u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ec7c5  push 0x28
    X86_AT(c, 0xec7c5u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0ec7c7  push 4
    X86_AT(c, 0xec7c7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec7c9  call 0xe7260
    X86_AT(c, 0xec7c9u);
    push32(c, 0xec7ceu); f_000e7260(c); X86_RET(c, 0xec7ceu);
    X86_TICK(c, 13);
    // 0ec7ce  push 2
    X86_AT(c, 0xec7ceu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ec7d0  push esi
    X86_AT(c, 0xec7d0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ec7d1  push 4
    X86_AT(c, 0xec7d1u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec7d3  call 0xe5630
    X86_AT(c, 0xec7d3u);
    push32(c, 0xec7d8u); f_000e5630(c); X86_RET(c, 0xec7d8u);
    X86_TICK(c, 13);
    // 0ec7d8  push 9
    X86_AT(c, 0xec7d8u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0ec7da  push 0x34
    X86_AT(c, 0xec7dau);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0ec7dc  push 4
    X86_AT(c, 0xec7dcu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec7de  call 0xe7260
    X86_AT(c, 0xec7deu);
    push32(c, 0xec7e3u); f_000e7260(c); X86_RET(c, 0xec7e3u);
    X86_TICK(c, 29);
    // 0ec7e3  push 2
    X86_AT(c, 0xec7e3u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ec7e5  mov eax, edi
    X86_AT(c, 0xec7e5u);
    c.r[0] = c.r[7];
    // 0ec7e7  lea edx, [eax + eax*4]
    X86_AT(c, 0xec7e7u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ec7ea  lea edx, [eax + edx*2]
    X86_AT(c, 0xec7eau);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ec7ed  shl edx, 5
    X86_AT(c, 0xec7edu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ec7f0  sub edx, eax
    X86_AT(c, 0xec7f0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ec7f2  push dword ptr [edx + 0xcde6e]
    X86_AT(c, 0xec7f2u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE6Eu))); push32(c, v); }
    // 0ec7f8  push 4
    X86_AT(c, 0xec7f8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec7fa  mov dword ptr [ebp - 0x4c], edx
    X86_AT(c, 0xec7fau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)), c.r[2]);
    // 0ec7fd  call 0xe5630
    X86_AT(c, 0xec7fdu);
    push32(c, 0xec802u); f_000e5630(c); X86_RET(c, 0xec802u);
    X86_TICK(c, 9);
    // 0ec802  push 4
    X86_AT(c, 0xec802u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec804  call 0xe4b60
    X86_AT(c, 0xec804u);
    push32(c, 0xec809u); f_000e4b60(c); X86_RET(c, 0xec809u);
    X86_TICK(c, 12);
    // 0ec809  xchg ebx, eax
    X86_AT(c, 0xec809u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0ec80a  add esp, 0x34
    X86_AT(c, 0xec80au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
    // 0ec80d  cmp bl, 5
    X86_AT(c, 0xec80du);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0ec810  je 0xec87d
    X86_AT(c, 0xec810u);
    if (x86_cc(c, 4)) { goto L_ec87d; }
    X86_TICK(c, 7);
    // 0ec816  cmp bl, 6
    X86_AT(c, 0xec816u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0ec819  je 0xec87d
    X86_AT(c, 0xec819u);
    if (x86_cc(c, 4)) { goto L_ec87d; }
    X86_TICK(c, 7);
    // 0ec81b  cmp bl, 4
    X86_AT(c, 0xec81bu);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0ec81e  je 0xec87d
    X86_AT(c, 0xec81eu);
    if (x86_cc(c, 4)) { goto L_ec87d; }
    X86_TICK(c, 7);
    // 0ec820  cmp bl, 1
    X86_AT(c, 0xec820u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0ec823  je 0xec87d
    X86_AT(c, 0xec823u);
    if (x86_cc(c, 4)) { goto L_ec87d; }
    X86_TICK(c, 7);
    // 0ec825  cmp bl, 7
    X86_AT(c, 0xec825u);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0ec828  jne 0xec843
    X86_AT(c, 0xec828u);
    if (x86_cc(c, 5)) { goto L_ec843; }
    X86_TICK(c, 15);
    // 0ec82a  mov eax, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xec82au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0ec82d  mov edx, dword ptr [eax + 0xcde6e]
    X86_AT(c, 0xec82du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xCDE6Eu)));
    // 0ec833  cmp edx, 0x19
    X86_AT(c, 0xec833u);
    (void)x86_sub(c, c.r[2], 0x19u, 0, 4);
    // 0ec836  je 0xec7c3
    X86_AT(c, 0xec836u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xec7c3u); goto L_ec7c3; }
    X86_TICK(c, 7);
    // 0ec838  and esi, esi
    X86_AT(c, 0xec838u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0ec83a  je 0xec7c3
    X86_AT(c, 0xec83au);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xec7c3u); goto L_ec7c3; }
    X86_TICK(c, 8);
    // 0ec83c  inc dword ptr [eax + 0xcde6e]
    X86_AT(c, 0xec83cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCDE6Eu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0ec842  dec esi
    X86_AT(c, 0xec842u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_ec843:
    X86_TICK(c, 7);
    // 0ec843  cmp bl, 3
    X86_AT(c, 0xec843u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0ec846  jne 0xec7c3
    X86_AT(c, 0xec846u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xec7c3u); goto L_ec7c3; }
    X86_TICK(c, 22);
    // 0ec84c  mov eax, edi
    X86_AT(c, 0xec84cu);
    c.r[0] = c.r[7];
    // 0ec84e  lea edx, [eax + eax*4]
    X86_AT(c, 0xec84eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ec851  lea edx, [eax + edx*2]
    X86_AT(c, 0xec851u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ec854  shl edx, 5
    X86_AT(c, 0xec854u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ec857  sub edx, eax
    X86_AT(c, 0xec857u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ec859  mov eax, dword ptr [edx + 0xcde6e]
    X86_AT(c, 0xec859u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE6Eu)));
    // 0ec85f  cmp eax, 0xa
    X86_AT(c, 0xec85fu);
    (void)x86_sub(c, c.r[0], 0xAu, 0, 4);
    // 0ec862  je 0xec7c3
    X86_AT(c, 0xec862u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xec7c3u); goto L_ec7c3; }
    X86_TICK(c, 7);
    // 0ec868  cmp esi, 0x1e
    X86_AT(c, 0xec868u);
    (void)x86_sub(c, c.r[6], 0x1Eu, 0, 4);
    // 0ec86b  je 0xec7c3
    X86_AT(c, 0xec86bu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xec7c3u); goto L_ec7c3; }
    X86_TICK(c, 15);
    // 0ec871  dec dword ptr [edx + 0xcde6e]
    X86_AT(c, 0xec871u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE6Eu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0ec877  inc esi
    X86_AT(c, 0xec877u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0ec878  jmp 0xec7c3
    X86_AT(c, 0xec878u);
    X86_POLL(c, 0xec7c3u); goto L_ec7c3;
L_ec87d:
    X86_TICK(c, 11);
    // 0ec87d  push 0xb
    X86_AT(c, 0xec87du);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ec87f  push 4
    X86_AT(c, 0xec87fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec881  call 0xe74d8
    X86_AT(c, 0xec881u);
    push32(c, 0xec886u); f_000e74d8(c); X86_RET(c, 0xec886u);
    X86_TICK(c, 13);
    // 0ec886  push 5
    X86_AT(c, 0xec886u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ec888  push 0x28
    X86_AT(c, 0xec888u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0ec88a  push 4
    X86_AT(c, 0xec88au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec88c  call 0xe7260
    X86_AT(c, 0xec88cu);
    push32(c, 0xec891u); f_000e7260(c); X86_RET(c, 0xec891u);
    X86_TICK(c, 13);
    // 0ec891  push 2
    X86_AT(c, 0xec891u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ec893  push esi
    X86_AT(c, 0xec893u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ec894  push 4
    X86_AT(c, 0xec894u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec896  call 0xe5630
    X86_AT(c, 0xec896u);
    push32(c, 0xec89bu); f_000e5630(c); X86_RET(c, 0xec89bu);
    X86_TICK(c, 13);
    // 0ec89b  push 9
    X86_AT(c, 0xec89bu);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0ec89d  push 0x34
    X86_AT(c, 0xec89du);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0ec89f  push 4
    X86_AT(c, 0xec89fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec8a1  call 0xe7260
    X86_AT(c, 0xec8a1u);
    push32(c, 0xec8a6u); f_000e7260(c); X86_RET(c, 0xec8a6u);
    X86_TICK(c, 27);
    // 0ec8a6  push 2
    X86_AT(c, 0xec8a6u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ec8a8  mov eax, edi
    X86_AT(c, 0xec8a8u);
    c.r[0] = c.r[7];
    // 0ec8aa  lea edx, [eax + eax*4]
    X86_AT(c, 0xec8aau);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ec8ad  lea edx, [eax + edx*2]
    X86_AT(c, 0xec8adu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ec8b0  shl edx, 5
    X86_AT(c, 0xec8b0u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ec8b3  sub edx, eax
    X86_AT(c, 0xec8b3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ec8b5  push dword ptr [edx + 0xcde6e]
    X86_AT(c, 0xec8b5u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE6Eu))); push32(c, v); }
    // 0ec8bb  push 4
    X86_AT(c, 0xec8bbu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec8bd  call 0xe5630
    X86_AT(c, 0xec8bdu);
    push32(c, 0xec8c2u); f_000e5630(c); X86_RET(c, 0xec8c2u);
    X86_TICK(c, 9);
    // 0ec8c2  add esp, 0x38
    X86_AT(c, 0xec8c2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 0ec8c5  cmp bl, 5
    X86_AT(c, 0xec8c5u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0ec8c8  jne 0xec8d6
    X86_AT(c, 0xec8c8u);
    if (x86_cc(c, 5)) { goto L_ec8d6; }
L_ec8ca:
    X86_TICK(c, 9);
    // 0ec8ca  mov dword ptr [ebp - 4], 2
    X86_AT(c, 0xec8cau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x2u);
    // 0ec8d1  jmp 0xec3cf
    X86_AT(c, 0xec8d1u);
    X86_POLL(c, 0xec3cfu); goto L_ec3cf;
L_ec8d6:
    X86_TICK(c, 7);
    // 0ec8d6  cmp bl, 1
    X86_AT(c, 0xec8d6u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0ec8d9  je 0xed30f
    X86_AT(c, 0xec8d9u);
    if (x86_cc(c, 4)) { goto L_ed30f; }
    X86_TICK(c, 7);
    // 0ec8df  cmp bl, 6
    X86_AT(c, 0xec8dfu);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0ec8e2  je 0xecb4b
    X86_AT(c, 0xec8e2u);
    if (x86_cc(c, 4)) { goto L_ecb4b; }
    X86_TICK(c, 7);
    // 0ec8e8  cmp bl, 4
    X86_AT(c, 0xec8e8u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0ec8eb  jne 0xec3cf
    X86_AT(c, 0xec8ebu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xec3cfu); goto L_ec3cf; }
    X86_TICK(c, 7);
    // 0ec8f1  jmp 0xecb4b
    X86_AT(c, 0xec8f1u);
    goto L_ecb4b;
L_ec8f6:
    X86_TICK(c, 11);
    // 0ec8f6  push 0xe
    X86_AT(c, 0xec8f6u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0ec8f8  push 4
    X86_AT(c, 0xec8f8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec8fa  call 0xe74d8
    X86_AT(c, 0xec8fau);
    push32(c, 0xec8ffu); f_000e74d8(c); X86_RET(c, 0xec8ffu);
    X86_TICK(c, 2);
    // 0ec8ff  add esp, 8
    X86_AT(c, 0xec8ffu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_ec902:
    X86_TICK(c, 13);
    // 0ec902  push 5
    X86_AT(c, 0xec902u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ec904  push 0x28
    X86_AT(c, 0xec904u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0ec906  push 4
    X86_AT(c, 0xec906u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec908  call 0xe7260
    X86_AT(c, 0xec908u);
    push32(c, 0xec90du); f_000e7260(c); X86_RET(c, 0xec90du);
    X86_TICK(c, 13);
    // 0ec90d  push 2
    X86_AT(c, 0xec90du);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ec90f  push esi
    X86_AT(c, 0xec90fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ec910  push 4
    X86_AT(c, 0xec910u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec912  call 0xe5630
    X86_AT(c, 0xec912u);
    push32(c, 0xec917u); f_000e5630(c); X86_RET(c, 0xec917u);
    X86_TICK(c, 13);
    // 0ec917  push 0xa
    X86_AT(c, 0xec917u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0ec919  push 0x34
    X86_AT(c, 0xec919u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0ec91b  push 4
    X86_AT(c, 0xec91bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec91d  call 0xe7260
    X86_AT(c, 0xec91du);
    push32(c, 0xec922u); f_000e7260(c); X86_RET(c, 0xec922u);
    X86_TICK(c, 29);
    // 0ec922  push 2
    X86_AT(c, 0xec922u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ec924  mov eax, edi
    X86_AT(c, 0xec924u);
    c.r[0] = c.r[7];
    // 0ec926  lea edx, [eax + eax*4]
    X86_AT(c, 0xec926u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ec929  lea edx, [eax + edx*2]
    X86_AT(c, 0xec929u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ec92c  shl edx, 5
    X86_AT(c, 0xec92cu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ec92f  sub edx, eax
    X86_AT(c, 0xec92fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ec931  push dword ptr [edx + 0xcde72]
    X86_AT(c, 0xec931u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE72u))); push32(c, v); }
    // 0ec937  push 4
    X86_AT(c, 0xec937u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec939  mov dword ptr [ebp - 0x4c], edx
    X86_AT(c, 0xec939u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)), c.r[2]);
    // 0ec93c  call 0xe5630
    X86_AT(c, 0xec93cu);
    push32(c, 0xec941u); f_000e5630(c); X86_RET(c, 0xec941u);
    X86_TICK(c, 9);
    // 0ec941  push 4
    X86_AT(c, 0xec941u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec943  call 0xe4b60
    X86_AT(c, 0xec943u);
    push32(c, 0xec948u); f_000e4b60(c); X86_RET(c, 0xec948u);
    X86_TICK(c, 12);
    // 0ec948  xchg ebx, eax
    X86_AT(c, 0xec948u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0ec949  add esp, 0x34
    X86_AT(c, 0xec949u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
    // 0ec94c  cmp bl, 5
    X86_AT(c, 0xec94cu);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0ec94f  je 0xec9bc
    X86_AT(c, 0xec94fu);
    if (x86_cc(c, 4)) { goto L_ec9bc; }
    X86_TICK(c, 7);
    // 0ec955  cmp bl, 6
    X86_AT(c, 0xec955u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0ec958  je 0xec9bc
    X86_AT(c, 0xec958u);
    if (x86_cc(c, 4)) { goto L_ec9bc; }
    X86_TICK(c, 7);
    // 0ec95a  cmp bl, 4
    X86_AT(c, 0xec95au);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0ec95d  je 0xec9bc
    X86_AT(c, 0xec95du);
    if (x86_cc(c, 4)) { goto L_ec9bc; }
    X86_TICK(c, 7);
    // 0ec95f  cmp bl, 1
    X86_AT(c, 0xec95fu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0ec962  je 0xec9bc
    X86_AT(c, 0xec962u);
    if (x86_cc(c, 4)) { goto L_ec9bc; }
    X86_TICK(c, 7);
    // 0ec964  cmp bl, 7
    X86_AT(c, 0xec964u);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0ec967  jne 0xec982
    X86_AT(c, 0xec967u);
    if (x86_cc(c, 5)) { goto L_ec982; }
    X86_TICK(c, 15);
    // 0ec969  mov eax, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xec969u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0ec96c  mov edx, dword ptr [eax + 0xcde72]
    X86_AT(c, 0xec96cu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xCDE72u)));
    // 0ec972  cmp edx, 0x19
    X86_AT(c, 0xec972u);
    (void)x86_sub(c, c.r[2], 0x19u, 0, 4);
    // 0ec975  je 0xec902
    X86_AT(c, 0xec975u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xec902u); goto L_ec902; }
    X86_TICK(c, 7);
    // 0ec977  and esi, esi
    X86_AT(c, 0xec977u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0ec979  je 0xec902
    X86_AT(c, 0xec979u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xec902u); goto L_ec902; }
    X86_TICK(c, 8);
    // 0ec97b  inc dword ptr [eax + 0xcde72]
    X86_AT(c, 0xec97bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCDE72u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0ec981  dec esi
    X86_AT(c, 0xec981u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_ec982:
    X86_TICK(c, 7);
    // 0ec982  cmp bl, 3
    X86_AT(c, 0xec982u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0ec985  jne 0xec902
    X86_AT(c, 0xec985u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xec902u); goto L_ec902; }
    X86_TICK(c, 22);
    // 0ec98b  mov eax, edi
    X86_AT(c, 0xec98bu);
    c.r[0] = c.r[7];
    // 0ec98d  lea edx, [eax + eax*4]
    X86_AT(c, 0xec98du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ec990  lea edx, [eax + edx*2]
    X86_AT(c, 0xec990u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ec993  shl edx, 5
    X86_AT(c, 0xec993u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ec996  sub edx, eax
    X86_AT(c, 0xec996u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ec998  mov eax, dword ptr [edx + 0xcde72]
    X86_AT(c, 0xec998u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE72u)));
    // 0ec99e  cmp eax, 0xa
    X86_AT(c, 0xec99eu);
    (void)x86_sub(c, c.r[0], 0xAu, 0, 4);
    // 0ec9a1  je 0xec902
    X86_AT(c, 0xec9a1u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xec902u); goto L_ec902; }
    X86_TICK(c, 7);
    // 0ec9a7  cmp esi, 0x1e
    X86_AT(c, 0xec9a7u);
    (void)x86_sub(c, c.r[6], 0x1Eu, 0, 4);
    // 0ec9aa  je 0xec902
    X86_AT(c, 0xec9aau);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xec902u); goto L_ec902; }
    X86_TICK(c, 15);
    // 0ec9b0  dec dword ptr [edx + 0xcde72]
    X86_AT(c, 0xec9b0u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE72u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0ec9b6  inc esi
    X86_AT(c, 0xec9b6u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0ec9b7  jmp 0xec902
    X86_AT(c, 0xec9b7u);
    X86_POLL(c, 0xec902u); goto L_ec902;
L_ec9bc:
    X86_TICK(c, 11);
    // 0ec9bc  push 0xb
    X86_AT(c, 0xec9bcu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ec9be  push 4
    X86_AT(c, 0xec9beu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec9c0  call 0xe74d8
    X86_AT(c, 0xec9c0u);
    push32(c, 0xec9c5u); f_000e74d8(c); X86_RET(c, 0xec9c5u);
    X86_TICK(c, 13);
    // 0ec9c5  push 5
    X86_AT(c, 0xec9c5u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ec9c7  push 0x28
    X86_AT(c, 0xec9c7u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0ec9c9  push 4
    X86_AT(c, 0xec9c9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec9cb  call 0xe7260
    X86_AT(c, 0xec9cbu);
    push32(c, 0xec9d0u); f_000e7260(c); X86_RET(c, 0xec9d0u);
    X86_TICK(c, 13);
    // 0ec9d0  push 2
    X86_AT(c, 0xec9d0u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ec9d2  push esi
    X86_AT(c, 0xec9d2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ec9d3  push 4
    X86_AT(c, 0xec9d3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec9d5  call 0xe5630
    X86_AT(c, 0xec9d5u);
    push32(c, 0xec9dau); f_000e5630(c); X86_RET(c, 0xec9dau);
    X86_TICK(c, 13);
    // 0ec9da  push 0xa
    X86_AT(c, 0xec9dau);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0ec9dc  push 0x34
    X86_AT(c, 0xec9dcu);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0ec9de  push 4
    X86_AT(c, 0xec9deu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec9e0  call 0xe7260
    X86_AT(c, 0xec9e0u);
    push32(c, 0xec9e5u); f_000e7260(c); X86_RET(c, 0xec9e5u);
    X86_TICK(c, 27);
    // 0ec9e5  push 2
    X86_AT(c, 0xec9e5u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ec9e7  mov eax, edi
    X86_AT(c, 0xec9e7u);
    c.r[0] = c.r[7];
    // 0ec9e9  lea edx, [eax + eax*4]
    X86_AT(c, 0xec9e9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ec9ec  lea edx, [eax + edx*2]
    X86_AT(c, 0xec9ecu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ec9ef  shl edx, 5
    X86_AT(c, 0xec9efu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ec9f2  sub edx, eax
    X86_AT(c, 0xec9f2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ec9f4  push dword ptr [edx + 0xcde72]
    X86_AT(c, 0xec9f4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE72u))); push32(c, v); }
    // 0ec9fa  push 4
    X86_AT(c, 0xec9fau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ec9fc  call 0xe5630
    X86_AT(c, 0xec9fcu);
    push32(c, 0xeca01u); f_000e5630(c); X86_RET(c, 0xeca01u);
    X86_TICK(c, 9);
    // 0eca01  add esp, 0x38
    X86_AT(c, 0xeca01u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 0eca04  cmp bl, 5
    X86_AT(c, 0xeca04u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0eca07  jne 0xeca15
    X86_AT(c, 0xeca07u);
    if (x86_cc(c, 5)) { goto L_eca15; }
L_eca09:
    X86_TICK(c, 9);
    // 0eca09  mov dword ptr [ebp - 4], 3
    X86_AT(c, 0xeca09u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x3u);
    // 0eca10  jmp 0xec3cf
    X86_AT(c, 0xeca10u);
    X86_POLL(c, 0xec3cfu); goto L_ec3cf;
L_eca15:
    X86_TICK(c, 7);
    // 0eca15  cmp bl, 1
    X86_AT(c, 0xeca15u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0eca18  je 0xed30f
    X86_AT(c, 0xeca18u);
    if (x86_cc(c, 4)) { goto L_ed30f; }
    X86_TICK(c, 7);
    // 0eca1e  cmp bl, 6
    X86_AT(c, 0xeca1eu);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0eca21  je 0xeca2c
    X86_AT(c, 0xeca21u);
    if (x86_cc(c, 4)) { goto L_eca2c; }
    X86_TICK(c, 7);
    // 0eca23  cmp bl, 4
    X86_AT(c, 0xeca23u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0eca26  jne 0xec3cf
    X86_AT(c, 0xeca26u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xec3cfu); goto L_ec3cf; }
L_eca2c:
    X86_TICK(c, 9);
    // 0eca2c  mov dword ptr [ebp - 4], 5
    X86_AT(c, 0xeca2cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x5u);
    // 0eca33  jmp 0xec3cf
    X86_AT(c, 0xeca33u);
    X86_POLL(c, 0xec3cfu); goto L_ec3cf;
L_eca38:
    X86_TICK(c, 11);
    // 0eca38  push 0xe
    X86_AT(c, 0xeca38u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0eca3a  push 4
    X86_AT(c, 0xeca3au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0eca3c  call 0xe74d8
    X86_AT(c, 0xeca3cu);
    push32(c, 0xeca41u); f_000e74d8(c); X86_RET(c, 0xeca41u);
    X86_TICK(c, 2);
    // 0eca41  add esp, 8
    X86_AT(c, 0xeca41u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_eca44:
    X86_TICK(c, 13);
    // 0eca44  push 5
    X86_AT(c, 0xeca44u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0eca46  push 0x28
    X86_AT(c, 0xeca46u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0eca48  push 4
    X86_AT(c, 0xeca48u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0eca4a  call 0xe7260
    X86_AT(c, 0xeca4au);
    push32(c, 0xeca4fu); f_000e7260(c); X86_RET(c, 0xeca4fu);
    X86_TICK(c, 13);
    // 0eca4f  push 2
    X86_AT(c, 0xeca4fu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0eca51  push esi
    X86_AT(c, 0xeca51u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eca52  push 4
    X86_AT(c, 0xeca52u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0eca54  call 0xe5630
    X86_AT(c, 0xeca54u);
    push32(c, 0xeca59u); f_000e5630(c); X86_RET(c, 0xeca59u);
    X86_TICK(c, 13);
    // 0eca59  push 0xb
    X86_AT(c, 0xeca59u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0eca5b  push 0x34
    X86_AT(c, 0xeca5bu);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0eca5d  push 4
    X86_AT(c, 0xeca5du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0eca5f  call 0xe7260
    X86_AT(c, 0xeca5fu);
    push32(c, 0xeca64u); f_000e7260(c); X86_RET(c, 0xeca64u);
    X86_TICK(c, 29);
    // 0eca64  push 2
    X86_AT(c, 0xeca64u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0eca66  mov eax, edi
    X86_AT(c, 0xeca66u);
    c.r[0] = c.r[7];
    // 0eca68  lea edx, [eax + eax*4]
    X86_AT(c, 0xeca68u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0eca6b  lea edx, [eax + edx*2]
    X86_AT(c, 0xeca6bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0eca6e  shl edx, 5
    X86_AT(c, 0xeca6eu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0eca71  sub edx, eax
    X86_AT(c, 0xeca71u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0eca73  push dword ptr [edx + 0xcde76]
    X86_AT(c, 0xeca73u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE76u))); push32(c, v); }
    // 0eca79  push 4
    X86_AT(c, 0xeca79u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0eca7b  mov dword ptr [ebp - 0x4c], edx
    X86_AT(c, 0xeca7bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)), c.r[2]);
    // 0eca7e  call 0xe5630
    X86_AT(c, 0xeca7eu);
    push32(c, 0xeca83u); f_000e5630(c); X86_RET(c, 0xeca83u);
    X86_TICK(c, 9);
    // 0eca83  push 4
    X86_AT(c, 0xeca83u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0eca85  call 0xe4b60
    X86_AT(c, 0xeca85u);
    push32(c, 0xeca8au); f_000e4b60(c); X86_RET(c, 0xeca8au);
    X86_TICK(c, 12);
    // 0eca8a  xchg ebx, eax
    X86_AT(c, 0xeca8au);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0eca8b  add esp, 0x34
    X86_AT(c, 0xeca8bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
    // 0eca8e  cmp bl, 5
    X86_AT(c, 0xeca8eu);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0eca91  je 0xecafe
    X86_AT(c, 0xeca91u);
    if (x86_cc(c, 4)) { goto L_ecafe; }
    X86_TICK(c, 7);
    // 0eca97  cmp bl, 6
    X86_AT(c, 0xeca97u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0eca9a  je 0xecafe
    X86_AT(c, 0xeca9au);
    if (x86_cc(c, 4)) { goto L_ecafe; }
    X86_TICK(c, 7);
    // 0eca9c  cmp bl, 4
    X86_AT(c, 0xeca9cu);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0eca9f  je 0xecafe
    X86_AT(c, 0xeca9fu);
    if (x86_cc(c, 4)) { goto L_ecafe; }
    X86_TICK(c, 7);
    // 0ecaa1  cmp bl, 1
    X86_AT(c, 0xecaa1u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0ecaa4  je 0xecafe
    X86_AT(c, 0xecaa4u);
    if (x86_cc(c, 4)) { goto L_ecafe; }
    X86_TICK(c, 7);
    // 0ecaa6  cmp bl, 7
    X86_AT(c, 0xecaa6u);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0ecaa9  jne 0xecac4
    X86_AT(c, 0xecaa9u);
    if (x86_cc(c, 5)) { goto L_ecac4; }
    X86_TICK(c, 15);
    // 0ecaab  mov eax, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xecaabu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0ecaae  mov edx, dword ptr [eax + 0xcde76]
    X86_AT(c, 0xecaaeu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xCDE76u)));
    // 0ecab4  cmp edx, 0x19
    X86_AT(c, 0xecab4u);
    (void)x86_sub(c, c.r[2], 0x19u, 0, 4);
    // 0ecab7  je 0xeca44
    X86_AT(c, 0xecab7u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xeca44u); goto L_eca44; }
    X86_TICK(c, 7);
    // 0ecab9  and esi, esi
    X86_AT(c, 0xecab9u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0ecabb  je 0xeca44
    X86_AT(c, 0xecabbu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xeca44u); goto L_eca44; }
    X86_TICK(c, 8);
    // 0ecabd  inc dword ptr [eax + 0xcde76]
    X86_AT(c, 0xecabdu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCDE76u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0ecac3  dec esi
    X86_AT(c, 0xecac3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_ecac4:
    X86_TICK(c, 7);
    // 0ecac4  cmp bl, 3
    X86_AT(c, 0xecac4u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0ecac7  jne 0xeca44
    X86_AT(c, 0xecac7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xeca44u); goto L_eca44; }
    X86_TICK(c, 22);
    // 0ecacd  mov eax, edi
    X86_AT(c, 0xecacdu);
    c.r[0] = c.r[7];
    // 0ecacf  lea edx, [eax + eax*4]
    X86_AT(c, 0xecacfu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ecad2  lea edx, [eax + edx*2]
    X86_AT(c, 0xecad2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ecad5  shl edx, 5
    X86_AT(c, 0xecad5u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ecad8  sub edx, eax
    X86_AT(c, 0xecad8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ecada  mov eax, dword ptr [edx + 0xcde76]
    X86_AT(c, 0xecadau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE76u)));
    // 0ecae0  cmp eax, 0xa
    X86_AT(c, 0xecae0u);
    (void)x86_sub(c, c.r[0], 0xAu, 0, 4);
    // 0ecae3  je 0xeca44
    X86_AT(c, 0xecae3u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xeca44u); goto L_eca44; }
    X86_TICK(c, 7);
    // 0ecae9  cmp esi, 0x1e
    X86_AT(c, 0xecae9u);
    (void)x86_sub(c, c.r[6], 0x1Eu, 0, 4);
    // 0ecaec  je 0xeca44
    X86_AT(c, 0xecaecu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xeca44u); goto L_eca44; }
    X86_TICK(c, 15);
    // 0ecaf2  dec dword ptr [edx + 0xcde76]
    X86_AT(c, 0xecaf2u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE76u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0ecaf8  inc esi
    X86_AT(c, 0xecaf8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0ecaf9  jmp 0xeca44
    X86_AT(c, 0xecaf9u);
    X86_POLL(c, 0xeca44u); goto L_eca44;
L_ecafe:
    X86_TICK(c, 11);
    // 0ecafe  push 0xb
    X86_AT(c, 0xecafeu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ecb00  push 4
    X86_AT(c, 0xecb00u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ecb02  call 0xe74d8
    X86_AT(c, 0xecb02u);
    push32(c, 0xecb07u); f_000e74d8(c); X86_RET(c, 0xecb07u);
    X86_TICK(c, 13);
    // 0ecb07  push 5
    X86_AT(c, 0xecb07u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ecb09  push 0x28
    X86_AT(c, 0xecb09u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0ecb0b  push 4
    X86_AT(c, 0xecb0bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ecb0d  call 0xe7260
    X86_AT(c, 0xecb0du);
    push32(c, 0xecb12u); f_000e7260(c); X86_RET(c, 0xecb12u);
    X86_TICK(c, 13);
    // 0ecb12  push 2
    X86_AT(c, 0xecb12u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ecb14  push esi
    X86_AT(c, 0xecb14u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ecb15  push 4
    X86_AT(c, 0xecb15u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ecb17  call 0xe5630
    X86_AT(c, 0xecb17u);
    push32(c, 0xecb1cu); f_000e5630(c); X86_RET(c, 0xecb1cu);
    X86_TICK(c, 13);
    // 0ecb1c  push 0xb
    X86_AT(c, 0xecb1cu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ecb1e  push 0x34
    X86_AT(c, 0xecb1eu);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0ecb20  push 4
    X86_AT(c, 0xecb20u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ecb22  call 0xe7260
    X86_AT(c, 0xecb22u);
    push32(c, 0xecb27u); f_000e7260(c); X86_RET(c, 0xecb27u);
    X86_TICK(c, 27);
    // 0ecb27  push 2
    X86_AT(c, 0xecb27u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ecb29  mov eax, edi
    X86_AT(c, 0xecb29u);
    c.r[0] = c.r[7];
    // 0ecb2b  lea edx, [eax + eax*4]
    X86_AT(c, 0xecb2bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ecb2e  lea edx, [eax + edx*2]
    X86_AT(c, 0xecb2eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ecb31  shl edx, 5
    X86_AT(c, 0xecb31u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ecb34  sub edx, eax
    X86_AT(c, 0xecb34u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ecb36  push dword ptr [edx + 0xcde76]
    X86_AT(c, 0xecb36u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE76u))); push32(c, v); }
    // 0ecb3c  push 4
    X86_AT(c, 0xecb3cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ecb3e  call 0xe5630
    X86_AT(c, 0xecb3eu);
    push32(c, 0xecb43u); f_000e5630(c); X86_RET(c, 0xecb43u);
    X86_TICK(c, 9);
    // 0ecb43  add esp, 0x38
    X86_AT(c, 0xecb43u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 0ecb46  cmp bl, 5
    X86_AT(c, 0xecb46u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0ecb49  jne 0xecb57
    X86_AT(c, 0xecb49u);
    if (x86_cc(c, 5)) { goto L_ecb57; }
L_ecb4b:
    X86_TICK(c, 9);
    // 0ecb4b  mov dword ptr [ebp - 4], 4
    X86_AT(c, 0xecb4bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x4u);
    // 0ecb52  jmp 0xec3cf
    X86_AT(c, 0xecb52u);
    X86_POLL(c, 0xec3cfu); goto L_ec3cf;
L_ecb57:
    X86_TICK(c, 7);
    // 0ecb57  cmp bl, 1
    X86_AT(c, 0xecb57u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0ecb5a  je 0xed30f
    X86_AT(c, 0xecb5au);
    if (x86_cc(c, 4)) { goto L_ed30f; }
    X86_TICK(c, 7);
    // 0ecb60  cmp bl, 6
    X86_AT(c, 0xecb60u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0ecb63  je 0xed4d4
    X86_AT(c, 0xecb63u);
    if (x86_cc(c, 4)) { goto L_ed4d4; }
    X86_TICK(c, 7);
    // 0ecb69  cmp bl, 4
    X86_AT(c, 0xecb69u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0ecb6c  jne 0xec3cf
    X86_AT(c, 0xecb6cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xec3cfu); goto L_ec3cf; }
    X86_TICK(c, 7);
    // 0ecb72  jmp 0xed4d4
    X86_AT(c, 0xecb72u);
    goto L_ed4d4;
L_ecb77:
    X86_TICK(c, 27);
    // 0ecb77  push 0xa
    X86_AT(c, 0xecb77u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0ecb79  push 0xf
    X86_AT(c, 0xecb79u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0ecb7b  push 0xb
    X86_AT(c, 0xecb7bu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ecb7d  push 5
    X86_AT(c, 0xecb7du);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ecb7f  push 0x19
    X86_AT(c, 0xecb7fu);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0ecb81  push 0x60
    X86_AT(c, 0xecb81u);
    { uint32_t v = 0x60u; push32(c, v); }
    // 0ecb83  push 0xd0
    X86_AT(c, 0xecb83u);
    { uint32_t v = 0xD0u; push32(c, v); }
    // 0ecb88  push 0x128
    X86_AT(c, 0xecb88u);
    { uint32_t v = 0x128u; push32(c, v); }
    // 0ecb8d  push 0xd0
    X86_AT(c, 0xecb8du);
    { uint32_t v = 0xD0u; push32(c, v); }
    // 0ecb92  push 5
    X86_AT(c, 0xecb92u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ecb94  call 0xe6858
    X86_AT(c, 0xecb94u);
    push32(c, 0xecb99u); f_000e6858(c); X86_RET(c, 0xecb99u);
    X86_TICK(c, 9);
    // 0ecb99  push 5
    X86_AT(c, 0xecb99u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ecb9b  call 0xe693c
    X86_AT(c, 0xecb9bu);
    push32(c, 0xecba0u); f_000e693c(c); X86_RET(c, 0xecba0u);
    X86_TICK(c, 9);
    // 0ecba0  push 5
    X86_AT(c, 0xecba0u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ecba2  call 0xe699c
    X86_AT(c, 0xecba2u);
    push32(c, 0xecba7u); f_000e699c(c); X86_RET(c, 0xecba7u);
    X86_TICK(c, 9);
    // 0ecba7  push 5
    X86_AT(c, 0xecba7u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ecba9  call 0xe693c
    X86_AT(c, 0xecba9u);
    push32(c, 0xecbaeu); f_000e693c(c); X86_RET(c, 0xecbaeu);
    X86_TICK(c, 13);
    // 0ecbae  push 0
    X86_AT(c, 0xecbaeu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ecbb0  push 4
    X86_AT(c, 0xecbb0u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ecbb2  push 5
    X86_AT(c, 0xecbb2u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ecbb4  call 0xe7260
    X86_AT(c, 0xecbb4u);
    push32(c, 0xecbb9u); f_000e7260(c); X86_RET(c, 0xecbb9u);
    X86_TICK(c, 13);
    // 0ecbb9  add esp, 0x40
    X86_AT(c, 0xecbb9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0ecbbc  push 0x314c
    X86_AT(c, 0xecbbcu);
    { uint32_t v = 0x314Cu; push32(c, v); }
    // 0ecbc1  push 5
    X86_AT(c, 0xecbc1u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ecbc3  call 0xe5654
    X86_AT(c, 0xecbc3u);
    push32(c, 0xecbc8u); f_000e5654(c); X86_RET(c, 0xecbc8u);
    X86_TICK(c, 13);
    // 0ecbc8  push 1
    X86_AT(c, 0xecbc8u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ecbca  push 6
    X86_AT(c, 0xecbcau);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ecbcc  push 5
    X86_AT(c, 0xecbccu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ecbce  call 0xe7260
    X86_AT(c, 0xecbceu);
    push32(c, 0xecbd3u); f_000e7260(c); X86_RET(c, 0xecbd3u);
    X86_TICK(c, 11);
    // 0ecbd3  push 0x3168
    X86_AT(c, 0xecbd3u);
    { uint32_t v = 0x3168u; push32(c, v); }
    // 0ecbd8  push 5
    X86_AT(c, 0xecbd8u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ecbda  call 0xe5654
    X86_AT(c, 0xecbdau);
    push32(c, 0xecbdfu); f_000e5654(c); X86_RET(c, 0xecbdfu);
    X86_TICK(c, 13);
    // 0ecbdf  push 2
    X86_AT(c, 0xecbdfu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ecbe1  push 6
    X86_AT(c, 0xecbe1u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ecbe3  push 5
    X86_AT(c, 0xecbe3u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ecbe5  call 0xe7260
    X86_AT(c, 0xecbe5u);
    push32(c, 0xecbeau); f_000e7260(c); X86_RET(c, 0xecbeau);
    X86_TICK(c, 11);
    // 0ecbea  push 0x3180
    X86_AT(c, 0xecbeau);
    { uint32_t v = 0x3180u; push32(c, v); }
    // 0ecbef  push 5
    X86_AT(c, 0xecbefu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ecbf1  call 0xe5654
    X86_AT(c, 0xecbf1u);
    push32(c, 0xecbf6u); f_000e5654(c); X86_RET(c, 0xecbf6u);
    X86_TICK(c, 13);
    // 0ecbf6  push 3
    X86_AT(c, 0xecbf6u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ecbf8  push 6
    X86_AT(c, 0xecbf8u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ecbfa  push 5
    X86_AT(c, 0xecbfau);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ecbfc  call 0xe7260
    X86_AT(c, 0xecbfcu);
    push32(c, 0xecc01u); f_000e7260(c); X86_RET(c, 0xecc01u);
    X86_TICK(c, 13);
    // 0ecc01  add esp, 0x3c
    X86_AT(c, 0xecc01u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0ecc04  push 0x3198
    X86_AT(c, 0xecc04u);
    { uint32_t v = 0x3198u; push32(c, v); }
    // 0ecc09  push 5
    X86_AT(c, 0xecc09u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ecc0b  call 0xe5654
    X86_AT(c, 0xecc0bu);
    push32(c, 0xecc10u); f_000e5654(c); X86_RET(c, 0xecc10u);
    X86_TICK(c, 13);
    // 0ecc10  push 4
    X86_AT(c, 0xecc10u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ecc12  push 6
    X86_AT(c, 0xecc12u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ecc14  push 5
    X86_AT(c, 0xecc14u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ecc16  call 0xe7260
    X86_AT(c, 0xecc16u);
    push32(c, 0xecc1bu); f_000e7260(c); X86_RET(c, 0xecc1bu);
    X86_TICK(c, 11);
    // 0ecc1b  push 0x31b4
    X86_AT(c, 0xecc1bu);
    { uint32_t v = 0x31B4u; push32(c, v); }
    // 0ecc20  push 5
    X86_AT(c, 0xecc20u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ecc22  call 0xe5654
    X86_AT(c, 0xecc22u);
    push32(c, 0xecc27u); f_000e5654(c); X86_RET(c, 0xecc27u);
    X86_TICK(c, 13);
    // 0ecc27  push 0xc
    X86_AT(c, 0xecc27u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0ecc29  push 0x28
    X86_AT(c, 0xecc29u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0ecc2b  push 4
    X86_AT(c, 0xecc2bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ecc2d  call 0xe7260
    X86_AT(c, 0xecc2du);
    push32(c, 0xecc32u); f_000e7260(c); X86_RET(c, 0xecc32u);
    X86_TICK(c, 11);
    // 0ecc32  add esp, 0x28
    X86_AT(c, 0xecc32u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0ecc35  push 4
    X86_AT(c, 0xecc35u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ecc37  call 0xe693c
    X86_AT(c, 0xecc37u);
    push32(c, 0xecc3cu); f_000e693c(c); X86_RET(c, 0xecc3cu);
    X86_TICK(c, 11);
    // 0ecc3c  push 0x31d0
    X86_AT(c, 0xecc3cu);
    { uint32_t v = 0x31D0u; push32(c, v); }
    // 0ecc41  push 4
    X86_AT(c, 0xecc41u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ecc43  call 0xe6cb0
    X86_AT(c, 0xecc43u);
    push32(c, 0xecc48u); f_000e6cb0(c); X86_RET(c, 0xecc48u);
    X86_TICK(c, 2);
    // 0ecc48  add esp, 0xc
    X86_AT(c, 0xecc48u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_ecc4b:
    X86_TICK(c, 13);
    // 0ecc4b  push 0xc
    X86_AT(c, 0xecc4bu);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0ecc4d  push 0x28
    X86_AT(c, 0xecc4du);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0ecc4f  push 4
    X86_AT(c, 0xecc4fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ecc51  call 0xe7260
    X86_AT(c, 0xecc51u);
    push32(c, 0xecc56u); f_000e7260(c); X86_RET(c, 0xecc56u);
    X86_TICK(c, 9);
    // 0ecc56  push 4
    X86_AT(c, 0xecc56u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ecc58  call 0xe432c
    X86_AT(c, 0xecc58u);
    push32(c, 0xecc5du); f_000e432c(c); X86_RET(c, 0xecc5du);
    X86_TICK(c, 12);
    // 0ecc5d  xchg ebx, eax
    X86_AT(c, 0xecc5du);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0ecc5e  add esp, 0x10
    X86_AT(c, 0xecc5eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0ecc61  cmp bl, 5
    X86_AT(c, 0xecc61u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0ecc64  je 0xecd73
    X86_AT(c, 0xecc64u);
    if (x86_cc(c, 4)) { goto L_ecd73; }
    X86_TICK(c, 7);
    // 0ecc6a  cmp bl, 6
    X86_AT(c, 0xecc6au);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0ecc6d  je 0xecd73
    X86_AT(c, 0xecc6du);
    if (x86_cc(c, 4)) { goto L_ecd73; }
    X86_TICK(c, 7);
    // 0ecc73  cmp bl, 1
    X86_AT(c, 0xecc73u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0ecc76  je 0xecd73
    X86_AT(c, 0xecc76u);
    if (x86_cc(c, 4)) { goto L_ecd73; }
    X86_TICK(c, 17);
    // 0ecc7c  lea eax, [ebp - 0x35]
    X86_AT(c, 0xecc7cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFCBu);
    // 0ecc7f  push eax
    X86_AT(c, 0xecc7fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ecc80  push ebx
    X86_AT(c, 0xecc80u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ecc81  push 4
    X86_AT(c, 0xecc81u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ecc83  push 0xcf2a0
    X86_AT(c, 0xecc83u);
    { uint32_t v = 0xCF2A0u; push32(c, v); }
    // 0ecc88  call 0xe53e0
    X86_AT(c, 0xecc88u);
    push32(c, 0xecc8du); f_000e53e0(c); X86_RET(c, 0xecc8du);
    X86_TICK(c, 11);
    // 0ecc8d  mov dword ptr [ebp - 0x48], eax
    X86_AT(c, 0xecc8du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB8u)), c.r[0]);
    // 0ecc90  push 4
    X86_AT(c, 0xecc90u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ecc92  call 0xe693c
    X86_AT(c, 0xecc92u);
    push32(c, 0xecc97u); f_000e693c(c); X86_RET(c, 0xecc97u);
    X86_TICK(c, 14);
    // 0ecc97  add esp, 0x14
    X86_AT(c, 0xecc97u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0ecc9a  cmp dword ptr [ebp - 0x48], 0
    X86_AT(c, 0xecc9au);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB8u))), 0x0u, 0, 4);
    // 0ecc9e  je 0xecc4b
    X86_AT(c, 0xecc9eu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xecc4bu); goto L_ecc4b; }
    X86_TICK(c, 13);
    // 0ecca0  push 0xc
    X86_AT(c, 0xecca0u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0ecca2  push 0x28
    X86_AT(c, 0xecca2u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0ecca4  push 4
    X86_AT(c, 0xecca4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ecca6  call 0xe7260
    X86_AT(c, 0xecca6u);
    push32(c, 0xeccabu); f_000e7260(c); X86_RET(c, 0xeccabu);
    X86_TICK(c, 14);
    // 0eccab  push dword ptr [ebp - 0x48]
    X86_AT(c, 0xeccabu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB8u))); push32(c, v); }
    // 0eccae  push 4
    X86_AT(c, 0xeccaeu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0eccb0  call 0xe6cb0
    X86_AT(c, 0xeccb0u);
    push32(c, 0xeccb5u); f_000e6cb0(c); X86_RET(c, 0xeccb5u);
    X86_TICK(c, 27);
    // 0eccb5  sub eax, eax
    X86_AT(c, 0xeccb5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0eccb7  mov dword ptr [ebp - 0x28], eax
    X86_AT(c, 0xeccb7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)), c.r[0]);
    // 0eccba  mov dword ptr [ebp - 0x20], eax
    X86_AT(c, 0xeccbau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)), c.r[0]);
    // 0eccbd  mov dword ptr [ebp - 0x18], eax
    X86_AT(c, 0xeccbdu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), c.r[0]);
    // 0eccc0  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xeccc0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 0eccc3  add esp, 0x14
    X86_AT(c, 0xeccc3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0eccc6  movzx edx, byte ptr [ebp - 0x35]
    X86_AT(c, 0xeccc6u);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFCBu)));
    // 0eccca  sub edx, 0x42
    X86_AT(c, 0xecccau);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x42u, 0, 4); }
    // 0ecccd  cmp edx, 6
    X86_AT(c, 0xecccdu);
    (void)x86_sub(c, c.r[2], 0x6u, 0, 4);
    // 0eccd0  ja 0xecd73
    X86_AT(c, 0xeccd0u);
    if (x86_cc(c, 7)) { goto L_ecd73; }
    X86_TICK(c, 7);
    // 0eccd6  jmp dword ptr cs:[edx*4 + 0xeccde]
    X86_AT(c, 0xeccd6u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xECCDEu)));
      switch (t) {
      case 0xeccfau: goto L_eccfa;
      case 0xecd17u: goto L_ecd17;
      case 0xecd34u: goto L_ecd34;
      case 0xecd51u: goto L_ecd51;
      case 0xecd73u: goto L_ecd73;
      default: x86_jump(c, t); return; } }
L_eccfa:
    X86_TICK(c, 22);
    // 0eccfa  mov eax, edi
    X86_AT(c, 0xeccfau);
    c.r[0] = c.r[7];
    // 0eccfc  lea edx, [eax + eax*4]
    X86_AT(c, 0xeccfcu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0eccff  lea edx, [eax + edx*2]
    X86_AT(c, 0xeccffu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ecd02  shl edx, 5
    X86_AT(c, 0xecd02u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ecd05  sub edx, eax
    X86_AT(c, 0xecd05u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ecd07  mov byte ptr [edx + 0xcde7a], 0x48
    X86_AT(c, 0xecd07u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Au)), 0x48u);
    // 0ecd0e  mov dword ptr [ebp - 0x28], 5
    X86_AT(c, 0xecd0eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)), 0x5u);
    // 0ecd15  jmp 0xecd73
    X86_AT(c, 0xecd15u);
    goto L_ecd73;
L_ecd17:
    X86_TICK(c, 22);
    // 0ecd17  mov eax, edi
    X86_AT(c, 0xecd17u);
    c.r[0] = c.r[7];
    // 0ecd19  lea edx, [eax + eax*4]
    X86_AT(c, 0xecd19u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ecd1c  lea edx, [eax + edx*2]
    X86_AT(c, 0xecd1cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ecd1f  shl edx, 5
    X86_AT(c, 0xecd1fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ecd22  sub edx, eax
    X86_AT(c, 0xecd22u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ecd24  mov byte ptr [edx + 0xcde7a], 0x45
    X86_AT(c, 0xecd24u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Au)), 0x45u);
    // 0ecd2b  mov dword ptr [ebp - 0x18], 5
    X86_AT(c, 0xecd2bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), 0x5u);
    // 0ecd32  jmp 0xecd73
    X86_AT(c, 0xecd32u);
    goto L_ecd73;
L_ecd34:
    X86_TICK(c, 22);
    // 0ecd34  mov eax, edi
    X86_AT(c, 0xecd34u);
    c.r[0] = c.r[7];
    // 0ecd36  lea edx, [eax + eax*4]
    X86_AT(c, 0xecd36u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ecd39  lea edx, [eax + edx*2]
    X86_AT(c, 0xecd39u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ecd3c  shl edx, 5
    X86_AT(c, 0xecd3cu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ecd3f  sub edx, eax
    X86_AT(c, 0xecd3fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ecd41  mov byte ptr [edx + 0xcde7a], 0x44
    X86_AT(c, 0xecd41u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Au)), 0x44u);
    // 0ecd48  mov dword ptr [ebp - 0x10], 5
    X86_AT(c, 0xecd48u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), 0x5u);
    // 0ecd4f  jmp 0xecd73
    X86_AT(c, 0xecd4fu);
    goto L_ecd73;
L_ecd51:
    X86_TICK(c, 17);
    // 0ecd51  mov eax, edi
    X86_AT(c, 0xecd51u);
    c.r[0] = c.r[7];
    // 0ecd53  lea edx, [eax + eax*4]
    X86_AT(c, 0xecd53u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ecd56  lea edx, [eax + edx*2]
    X86_AT(c, 0xecd56u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ecd59  shl edx, 5
    X86_AT(c, 0xecd59u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ecd5c  sub edx, eax
    X86_AT(c, 0xecd5cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ecd5e  mov byte ptr [edx + 0xcde7a], 0x42
    X86_AT(c, 0xecd5eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Au)), 0x42u);
    // 0ecd65  mov dword ptr [ebp - 0x10], 0xfffffffb
    X86_AT(c, 0xecd65u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), 0xFFFFFFFBu);
    // 0ecd6c  mov dword ptr [ebp - 0x20], 0xa
    X86_AT(c, 0xecd6cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)), 0xAu);
L_ecd73:
    X86_TICK(c, 7);
    // 0ecd73  cmp bl, 5
    X86_AT(c, 0xecd73u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0ecd76  jne 0xecdbd
    X86_AT(c, 0xecd76u);
    if (x86_cc(c, 5)) { goto L_ecdbd; }
    X86_TICK(c, 15);
    // 0ecd78  mov eax, 5
    X86_AT(c, 0xecd78u);
    c.r[0] = 0x5u;
    // 0ecd7d  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xecd7du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0ecd80  push 0xd
    X86_AT(c, 0xecd80u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0ecd82  push eax
    X86_AT(c, 0xecd82u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ecd83  call 0xe6b70
    X86_AT(c, 0xecd83u);
    push32(c, 0xecd88u); f_000e6b70(c); X86_RET(c, 0xecd88u);
    X86_TICK(c, 9);
    // 0ecd88  push 4
    X86_AT(c, 0xecd88u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ecd8a  call 0xe693c
    X86_AT(c, 0xecd8au);
    push32(c, 0xecd8fu); f_000e693c(c); X86_RET(c, 0xecd8fu);
    X86_TICK(c, 32);
    // 0ecd8f  lea eax, [ebp - 0x35]
    X86_AT(c, 0xecd8fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFCBu);
    // 0ecd92  push eax
    X86_AT(c, 0xecd92u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ecd93  mov eax, edi
    X86_AT(c, 0xecd93u);
    c.r[0] = c.r[7];
    // 0ecd95  lea edx, [eax + eax*4]
    X86_AT(c, 0xecd95u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ecd98  lea edx, [eax + edx*2]
    X86_AT(c, 0xecd98u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ecd9b  shl edx, 5
    X86_AT(c, 0xecd9bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ecd9e  sub edx, eax
    X86_AT(c, 0xecd9eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ecda0  mov al, byte ptr [edx + 0xcde7a]
    X86_AT(c, 0xecda0u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Au))));
    // 0ecda6  push eax
    X86_AT(c, 0xecda6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ecda7  push 4
    X86_AT(c, 0xecda7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ecda9  push 0xcf2a0
    X86_AT(c, 0xecda9u);
    { uint32_t v = 0xCF2A0u; push32(c, v); }
    // 0ecdae  call 0xe53e0
    X86_AT(c, 0xecdaeu);
    push32(c, 0xecdb3u); f_000e53e0(c); X86_RET(c, 0xecdb3u);
    X86_TICK(c, 11);
    // 0ecdb3  mov dword ptr [ebp - 0x48], eax
    X86_AT(c, 0xecdb3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB8u)), c.r[0]);
    // 0ecdb6  push 0xc
    X86_AT(c, 0xecdb6u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0ecdb8  jmp 0xed276
    X86_AT(c, 0xecdb8u);
    goto L_ed276;
L_ecdbd:
    X86_TICK(c, 7);
    // 0ecdbd  cmp bl, 6
    X86_AT(c, 0xecdbdu);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0ecdc0  jne 0xece07
    X86_AT(c, 0xecdc0u);
    if (x86_cc(c, 5)) { goto L_ece07; }
    X86_TICK(c, 13);
    // 0ecdc2  mov dword ptr [ebp - 4], 7
    X86_AT(c, 0xecdc2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x7u);
    // 0ecdc9  push 0xd
    X86_AT(c, 0xecdc9u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0ecdcb  push 5
    X86_AT(c, 0xecdcbu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ecdcd  call 0xe6b70
    X86_AT(c, 0xecdcdu);
    push32(c, 0xecdd2u); f_000e6b70(c); X86_RET(c, 0xecdd2u);
    X86_TICK(c, 9);
    // 0ecdd2  push 4
    X86_AT(c, 0xecdd2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ecdd4  call 0xe693c
    X86_AT(c, 0xecdd4u);
    push32(c, 0xecdd9u); f_000e693c(c); X86_RET(c, 0xecdd9u);
    X86_TICK(c, 32);
    // 0ecdd9  lea eax, [ebp - 0x35]
    X86_AT(c, 0xecdd9u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFCBu);
    // 0ecddc  push eax
    X86_AT(c, 0xecddcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ecddd  mov eax, edi
    X86_AT(c, 0xecdddu);
    c.r[0] = c.r[7];
    // 0ecddf  lea edx, [eax + eax*4]
    X86_AT(c, 0xecddfu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ecde2  lea edx, [eax + edx*2]
    X86_AT(c, 0xecde2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ecde5  shl edx, 5
    X86_AT(c, 0xecde5u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ecde8  sub edx, eax
    X86_AT(c, 0xecde8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ecdea  mov al, byte ptr [edx + 0xcde7a]
    X86_AT(c, 0xecdeau);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Au))));
    // 0ecdf0  push eax
    X86_AT(c, 0xecdf0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ecdf1  push 4
    X86_AT(c, 0xecdf1u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ecdf3  push 0xcf2a0
    X86_AT(c, 0xecdf3u);
    { uint32_t v = 0xCF2A0u; push32(c, v); }
    // 0ecdf8  call 0xe53e0
    X86_AT(c, 0xecdf8u);
    push32(c, 0xecdfdu); f_000e53e0(c); X86_RET(c, 0xecdfdu);
    X86_TICK(c, 11);
    // 0ecdfd  mov dword ptr [ebp - 0x48], eax
    X86_AT(c, 0xecdfdu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB8u)), c.r[0]);
    // 0ece00  push 0xc
    X86_AT(c, 0xece00u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0ece02  jmp 0xed012
    X86_AT(c, 0xece02u);
    goto L_ed012;
L_ece07:
    X86_TICK(c, 7);
    // 0ece07  cmp bl, 1
    X86_AT(c, 0xece07u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0ece0a  je 0xed2a4
    X86_AT(c, 0xece0au);
    if (x86_cc(c, 4)) { goto L_ed2a4; }
    X86_TICK(c, 11);
    // 0ece10  push 0xd
    X86_AT(c, 0xece10u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0ece12  push 5
    X86_AT(c, 0xece12u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ece14  call 0xe6b70
    X86_AT(c, 0xece14u);
    push32(c, 0xece19u); f_000e6b70(c); X86_RET(c, 0xece19u);
    X86_TICK(c, 9);
    // 0ece19  mov dword ptr [ebp - 4], 7
    X86_AT(c, 0xece19u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x7u);
    // 0ece20  jmp 0xed2ca
    X86_AT(c, 0xece20u);
    goto L_ed2ca;
L_ece25:
    X86_TICK(c, 27);
    // 0ece25  push 0xa
    X86_AT(c, 0xece25u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0ece27  push 0xf
    X86_AT(c, 0xece27u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0ece29  push 0xb
    X86_AT(c, 0xece29u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ece2b  push 2
    X86_AT(c, 0xece2bu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ece2d  push 0x19
    X86_AT(c, 0xece2du);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0ece2f  push 0x40
    X86_AT(c, 0xece2fu);
    { uint32_t v = 0x40u; push32(c, v); }
    // 0ece31  push 0xd0
    X86_AT(c, 0xece31u);
    { uint32_t v = 0xD0u; push32(c, v); }
    // 0ece36  push 0x128
    X86_AT(c, 0xece36u);
    { uint32_t v = 0x128u; push32(c, v); }
    // 0ece3b  push 0xd0
    X86_AT(c, 0xece3bu);
    { uint32_t v = 0xD0u; push32(c, v); }
    // 0ece40  push 5
    X86_AT(c, 0xece40u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ece42  call 0xe6858
    X86_AT(c, 0xece42u);
    push32(c, 0xece47u); f_000e6858(c); X86_RET(c, 0xece47u);
    X86_TICK(c, 9);
    // 0ece47  push 5
    X86_AT(c, 0xece47u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ece49  call 0xe693c
    X86_AT(c, 0xece49u);
    push32(c, 0xece4eu); f_000e693c(c); X86_RET(c, 0xece4eu);
    X86_TICK(c, 9);
    // 0ece4e  push 5
    X86_AT(c, 0xece4eu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ece50  call 0xe699c
    X86_AT(c, 0xece50u);
    push32(c, 0xece55u); f_000e699c(c); X86_RET(c, 0xece55u);
    X86_TICK(c, 9);
    // 0ece55  push 5
    X86_AT(c, 0xece55u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ece57  call 0xe693c
    X86_AT(c, 0xece57u);
    push32(c, 0xece5cu); f_000e693c(c); X86_RET(c, 0xece5cu);
    X86_TICK(c, 13);
    // 0ece5c  push 0
    X86_AT(c, 0xece5cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ece5e  push 4
    X86_AT(c, 0xece5eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ece60  push 5
    X86_AT(c, 0xece60u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ece62  call 0xe7260
    X86_AT(c, 0xece62u);
    push32(c, 0xece67u); f_000e7260(c); X86_RET(c, 0xece67u);
    X86_TICK(c, 13);
    // 0ece67  add esp, 0x40
    X86_AT(c, 0xece67u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0ece6a  push 0x31e4
    X86_AT(c, 0xece6au);
    { uint32_t v = 0x31E4u; push32(c, v); }
    // 0ece6f  push 5
    X86_AT(c, 0xece6fu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ece71  call 0xe5654
    X86_AT(c, 0xece71u);
    push32(c, 0xece76u); f_000e5654(c); X86_RET(c, 0xece76u);
    X86_TICK(c, 13);
    // 0ece76  push 1
    X86_AT(c, 0xece76u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ece78  push 6
    X86_AT(c, 0xece78u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ece7a  push 5
    X86_AT(c, 0xece7au);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ece7c  call 0xe7260
    X86_AT(c, 0xece7cu);
    push32(c, 0xece81u); f_000e7260(c); X86_RET(c, 0xece81u);
    X86_TICK(c, 11);
    // 0ece81  push 0x31fc
    X86_AT(c, 0xece81u);
    { uint32_t v = 0x31FCu; push32(c, v); }
    // 0ece86  push 5
    X86_AT(c, 0xece86u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ece88  call 0xe5654
    X86_AT(c, 0xece88u);
    push32(c, 0xece8du); f_000e5654(c); X86_RET(c, 0xece8du);
    X86_TICK(c, 13);
    // 0ece8d  push 2
    X86_AT(c, 0xece8du);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ece8f  push 6
    X86_AT(c, 0xece8fu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ece91  push 5
    X86_AT(c, 0xece91u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ece93  call 0xe7260
    X86_AT(c, 0xece93u);
    push32(c, 0xece98u); f_000e7260(c); X86_RET(c, 0xece98u);
    X86_TICK(c, 11);
    // 0ece98  push 0x3214
    X86_AT(c, 0xece98u);
    { uint32_t v = 0x3214u; push32(c, v); }
    // 0ece9d  push 5
    X86_AT(c, 0xece9du);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ece9f  call 0xe5654
    X86_AT(c, 0xece9fu);
    push32(c, 0xecea4u); f_000e5654(c); X86_RET(c, 0xecea4u);
    X86_TICK(c, 13);
    // 0ecea4  push 0xd
    X86_AT(c, 0xecea4u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0ecea6  push 0x28
    X86_AT(c, 0xecea6u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0ecea8  push 4
    X86_AT(c, 0xecea8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0eceaa  call 0xe7260
    X86_AT(c, 0xeceaau);
    push32(c, 0xeceafu); f_000e7260(c); X86_RET(c, 0xeceafu);
    X86_TICK(c, 11);
    // 0eceaf  add esp, 0x3c
    X86_AT(c, 0xeceafu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0eceb2  push 4
    X86_AT(c, 0xeceb2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0eceb4  call 0xe693c
    X86_AT(c, 0xeceb4u);
    push32(c, 0xeceb9u); f_000e693c(c); X86_RET(c, 0xeceb9u);
    X86_TICK(c, 11);
    // 0eceb9  push 0x3230
    X86_AT(c, 0xeceb9u);
    { uint32_t v = 0x3230u; push32(c, v); }
    // 0ecebe  push 4
    X86_AT(c, 0xecebeu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ecec0  call 0xe6cb0
    X86_AT(c, 0xecec0u);
    push32(c, 0xecec5u); f_000e6cb0(c); X86_RET(c, 0xecec5u);
    X86_TICK(c, 2);
    // 0ecec5  add esp, 0xc
    X86_AT(c, 0xecec5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_ecec8:
    X86_TICK(c, 13);
    // 0ecec8  push 0xd
    X86_AT(c, 0xecec8u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0ececa  push 0x28
    X86_AT(c, 0xececau);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0ececc  push 4
    X86_AT(c, 0xececcu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ecece  call 0xe7260
    X86_AT(c, 0xececeu);
    push32(c, 0xeced3u); f_000e7260(c); X86_RET(c, 0xeced3u);
    X86_TICK(c, 9);
    // 0eced3  push 4
    X86_AT(c, 0xeced3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0eced5  call 0xe432c
    X86_AT(c, 0xeced5u);
    push32(c, 0xecedau); f_000e432c(c); X86_RET(c, 0xecedau);
    X86_TICK(c, 12);
    // 0eceda  xchg ebx, eax
    X86_AT(c, 0xecedau);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0ecedb  add esp, 0x10
    X86_AT(c, 0xecedbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0ecede  cmp bl, 5
    X86_AT(c, 0xecedeu);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0ecee1  je 0xecf83
    X86_AT(c, 0xecee1u);
    if (x86_cc(c, 4)) { goto L_ecf83; }
    X86_TICK(c, 7);
    // 0ecee7  cmp bl, 6
    X86_AT(c, 0xecee7u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0eceea  je 0xecf83
    X86_AT(c, 0xeceeau);
    if (x86_cc(c, 4)) { goto L_ecf83; }
    X86_TICK(c, 7);
    // 0ecef0  cmp bl, 1
    X86_AT(c, 0xecef0u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0ecef3  je 0xecf83
    X86_AT(c, 0xecef3u);
    if (x86_cc(c, 4)) { goto L_ecf83; }
    X86_TICK(c, 17);
    // 0ecef9  lea eax, [ebp - 0x35]
    X86_AT(c, 0xecef9u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFCBu);
    // 0ecefc  push eax
    X86_AT(c, 0xecefcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ecefd  push ebx
    X86_AT(c, 0xecefdu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ecefe  push 3
    X86_AT(c, 0xecefeu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ecf00  push 0xcf6c0
    X86_AT(c, 0xecf00u);
    { uint32_t v = 0xCF6C0u; push32(c, v); }
    // 0ecf05  call 0xe53e0
    X86_AT(c, 0xecf05u);
    push32(c, 0xecf0au); f_000e53e0(c); X86_RET(c, 0xecf0au);
    X86_TICK(c, 11);
    // 0ecf0a  mov dword ptr [ebp - 0x48], eax
    X86_AT(c, 0xecf0au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB8u)), c.r[0]);
    // 0ecf0d  push 4
    X86_AT(c, 0xecf0du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ecf0f  call 0xe693c
    X86_AT(c, 0xecf0fu);
    push32(c, 0xecf14u); f_000e693c(c); X86_RET(c, 0xecf14u);
    X86_TICK(c, 14);
    // 0ecf14  add esp, 0x14
    X86_AT(c, 0xecf14u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0ecf17  cmp dword ptr [ebp - 0x48], 0
    X86_AT(c, 0xecf17u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB8u))), 0x0u, 0, 4);
    // 0ecf1b  je 0xecec8
    X86_AT(c, 0xecf1bu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xecec8u); goto L_ecec8; }
    X86_TICK(c, 13);
    // 0ecf1d  push 0xd
    X86_AT(c, 0xecf1du);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0ecf1f  push 0x28
    X86_AT(c, 0xecf1fu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0ecf21  push 4
    X86_AT(c, 0xecf21u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ecf23  call 0xe7260
    X86_AT(c, 0xecf23u);
    push32(c, 0xecf28u); f_000e7260(c); X86_RET(c, 0xecf28u);
    X86_TICK(c, 14);
    // 0ecf28  push dword ptr [ebp - 0x48]
    X86_AT(c, 0xecf28u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB8u))); push32(c, v); }
    // 0ecf2b  push 4
    X86_AT(c, 0xecf2bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ecf2d  call 0xe6cb0
    X86_AT(c, 0xecf2du);
    push32(c, 0xecf32u); f_000e6cb0(c); X86_RET(c, 0xecf32u);
    X86_TICK(c, 21);
    // 0ecf32  sub eax, eax
    X86_AT(c, 0xecf32u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ecf34  mov dword ptr [ebp - 0x34], eax
    X86_AT(c, 0xecf34u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFCCu)), c.r[0]);
    // 0ecf37  mov dword ptr [ebp - 0x30], eax
    X86_AT(c, 0xecf37u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD0u)), c.r[0]);
    // 0ecf3a  add esp, 0x14
    X86_AT(c, 0xecf3au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0ecf3d  movzx edx, byte ptr [ebp - 0x35]
    X86_AT(c, 0xecf3du);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFCBu)));
    // 0ecf41  cmp edx, 0x46
    X86_AT(c, 0xecf41u);
    (void)x86_sub(c, c.r[2], 0x46u, 0, 4);
    // 0ecf44  je 0xecf68
    X86_AT(c, 0xecf44u);
    if (x86_cc(c, 4)) { goto L_ecf68; }
    X86_TICK(c, 7);
    // 0ecf46  cmp edx, 0x4d
    X86_AT(c, 0xecf46u);
    (void)x86_sub(c, c.r[2], 0x4Du, 0, 4);
    // 0ecf49  jne 0xecf83
    X86_AT(c, 0xecf49u);
    if (x86_cc(c, 5)) { goto L_ecf83; }
    X86_TICK(c, 22);
    // 0ecf4b  mov eax, edi
    X86_AT(c, 0xecf4bu);
    c.r[0] = c.r[7];
    // 0ecf4d  lea edx, [eax + eax*4]
    X86_AT(c, 0xecf4du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ecf50  lea edx, [eax + edx*2]
    X86_AT(c, 0xecf50u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ecf53  shl edx, 5
    X86_AT(c, 0xecf53u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ecf56  sub edx, eax
    X86_AT(c, 0xecf56u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ecf58  mov byte ptr [edx + 0xcde7c], 0x4d
    X86_AT(c, 0xecf58u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Cu)), 0x4Du);
    // 0ecf5f  mov dword ptr [ebp - 0x30], 0xa
    X86_AT(c, 0xecf5fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD0u)), 0xAu);
    // 0ecf66  jmp 0xecf83
    X86_AT(c, 0xecf66u);
    goto L_ecf83;
L_ecf68:
    X86_TICK(c, 15);
    // 0ecf68  mov eax, edi
    X86_AT(c, 0xecf68u);
    c.r[0] = c.r[7];
    // 0ecf6a  lea edx, [eax + eax*4]
    X86_AT(c, 0xecf6au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ecf6d  lea edx, [eax + edx*2]
    X86_AT(c, 0xecf6du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ecf70  shl edx, 5
    X86_AT(c, 0xecf70u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ecf73  sub edx, eax
    X86_AT(c, 0xecf73u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ecf75  mov byte ptr [edx + 0xcde7c], 0x46
    X86_AT(c, 0xecf75u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Cu)), 0x46u);
    // 0ecf7c  mov dword ptr [ebp - 0x34], 0xa
    X86_AT(c, 0xecf7cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFCCu)), 0xAu);
L_ecf83:
    X86_TICK(c, 7);
    // 0ecf83  cmp bl, 5
    X86_AT(c, 0xecf83u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0ecf86  jne 0xecfcd
    X86_AT(c, 0xecf86u);
    if (x86_cc(c, 5)) { goto L_ecfcd; }
    X86_TICK(c, 13);
    // 0ecf88  mov dword ptr [ebp - 4], 6
    X86_AT(c, 0xecf88u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x6u);
    // 0ecf8f  push 0xd
    X86_AT(c, 0xecf8fu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0ecf91  push 5
    X86_AT(c, 0xecf91u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ecf93  call 0xe6b70
    X86_AT(c, 0xecf93u);
    push32(c, 0xecf98u); f_000e6b70(c); X86_RET(c, 0xecf98u);
    X86_TICK(c, 9);
    // 0ecf98  push 4
    X86_AT(c, 0xecf98u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ecf9a  call 0xe693c
    X86_AT(c, 0xecf9au);
    push32(c, 0xecf9fu); f_000e693c(c); X86_RET(c, 0xecf9fu);
    X86_TICK(c, 32);
    // 0ecf9f  lea eax, [ebp - 0x35]
    X86_AT(c, 0xecf9fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFCBu);
    // 0ecfa2  push eax
    X86_AT(c, 0xecfa2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ecfa3  mov eax, edi
    X86_AT(c, 0xecfa3u);
    c.r[0] = c.r[7];
    // 0ecfa5  lea edx, [eax + eax*4]
    X86_AT(c, 0xecfa5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ecfa8  lea edx, [eax + edx*2]
    X86_AT(c, 0xecfa8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ecfab  shl edx, 5
    X86_AT(c, 0xecfabu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ecfae  sub edx, eax
    X86_AT(c, 0xecfaeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ecfb0  mov al, byte ptr [edx + 0xcde7c]
    X86_AT(c, 0xecfb0u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Cu))));
    // 0ecfb6  push eax
    X86_AT(c, 0xecfb6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ecfb7  push 3
    X86_AT(c, 0xecfb7u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ecfb9  push 0xcf6c0
    X86_AT(c, 0xecfb9u);
    { uint32_t v = 0xCF6C0u; push32(c, v); }
    // 0ecfbe  call 0xe53e0
    X86_AT(c, 0xecfbeu);
    push32(c, 0xecfc3u); f_000e53e0(c); X86_RET(c, 0xecfc3u);
    X86_TICK(c, 11);
    // 0ecfc3  mov dword ptr [ebp - 0x48], eax
    X86_AT(c, 0xecfc3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB8u)), c.r[0]);
    // 0ecfc6  push 0xd
    X86_AT(c, 0xecfc6u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0ecfc8  jmp 0xed276
    X86_AT(c, 0xecfc8u);
    goto L_ed276;
L_ecfcd:
    X86_TICK(c, 7);
    // 0ecfcd  cmp bl, 6
    X86_AT(c, 0xecfcdu);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0ecfd0  jne 0xed03a
    X86_AT(c, 0xecfd0u);
    if (x86_cc(c, 5)) { goto L_ed03a; }
    X86_TICK(c, 13);
    // 0ecfd2  mov dword ptr [ebp - 4], 8
    X86_AT(c, 0xecfd2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x8u);
    // 0ecfd9  push 0xd
    X86_AT(c, 0xecfd9u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0ecfdb  push 5
    X86_AT(c, 0xecfdbu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ecfdd  call 0xe6b70
    X86_AT(c, 0xecfddu);
    push32(c, 0xecfe2u); f_000e6b70(c); X86_RET(c, 0xecfe2u);
    X86_TICK(c, 9);
    // 0ecfe2  push 4
    X86_AT(c, 0xecfe2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ecfe4  call 0xe693c
    X86_AT(c, 0xecfe4u);
    push32(c, 0xecfe9u); f_000e693c(c); X86_RET(c, 0xecfe9u);
    X86_TICK(c, 32);
    // 0ecfe9  lea eax, [ebp - 0x35]
    X86_AT(c, 0xecfe9u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFCBu);
    // 0ecfec  push eax
    X86_AT(c, 0xecfecu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ecfed  mov eax, edi
    X86_AT(c, 0xecfedu);
    c.r[0] = c.r[7];
    // 0ecfef  lea edx, [eax + eax*4]
    X86_AT(c, 0xecfefu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ecff2  lea edx, [eax + edx*2]
    X86_AT(c, 0xecff2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ecff5  shl edx, 5
    X86_AT(c, 0xecff5u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ecff8  sub edx, eax
    X86_AT(c, 0xecff8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ecffa  mov al, byte ptr [edx + 0xcde7c]
    X86_AT(c, 0xecffau);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Cu))));
    // 0ed000  push eax
    X86_AT(c, 0xed000u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ed001  push 3
    X86_AT(c, 0xed001u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ed003  push 0xcf6c0
    X86_AT(c, 0xed003u);
    { uint32_t v = 0xCF6C0u; push32(c, v); }
    // 0ed008  call 0xe53e0
    X86_AT(c, 0xed008u);
    push32(c, 0xed00du); f_000e53e0(c); X86_RET(c, 0xed00du);
    X86_TICK(c, 4);
    // 0ed00d  mov dword ptr [ebp - 0x48], eax
    X86_AT(c, 0xed00du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB8u)), c.r[0]);
    // 0ed010  push 0xd
    X86_AT(c, 0xed010u);
    { uint32_t v = 0xDu; push32(c, v); }
L_ed012:
    X86_TICK(c, 11);
    // 0ed012  push 0x28
    X86_AT(c, 0xed012u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0ed014  push 4
    X86_AT(c, 0xed014u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed016  call 0xe7260
    X86_AT(c, 0xed016u);
    push32(c, 0xed01bu); f_000e7260(c); X86_RET(c, 0xed01bu);
    X86_TICK(c, 14);
    // 0ed01b  add esp, 0x28
    X86_AT(c, 0xed01bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0ed01e  cmp dword ptr [ebp - 0x48], 0
    X86_AT(c, 0xed01eu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB8u))), 0x0u, 0, 4);
    // 0ed022  je 0xed294
    X86_AT(c, 0xed022u);
    if (x86_cc(c, 4)) { goto L_ed294; }
    X86_TICK(c, 14);
    // 0ed028  push dword ptr [ebp - 0x48]
    X86_AT(c, 0xed028u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB8u))); push32(c, v); }
    // 0ed02b  push 4
    X86_AT(c, 0xed02bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed02d  call 0xe6cb0
    X86_AT(c, 0xed02du);
    push32(c, 0xed032u); f_000e6cb0(c); X86_RET(c, 0xed032u);
    X86_TICK(c, 9);
    // 0ed032  add esp, 8
    X86_AT(c, 0xed032u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ed035  jmp 0xed294
    X86_AT(c, 0xed035u);
    goto L_ed294;
L_ed03a:
    X86_TICK(c, 7);
    // 0ed03a  cmp bl, 1
    X86_AT(c, 0xed03au);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0ed03d  je 0xed2a4
    X86_AT(c, 0xed03du);
    if (x86_cc(c, 4)) { goto L_ed2a4; }
    X86_TICK(c, 11);
    // 0ed043  push 0xd
    X86_AT(c, 0xed043u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0ed045  push 5
    X86_AT(c, 0xed045u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ed047  call 0xe6b70
    X86_AT(c, 0xed047u);
    push32(c, 0xed04cu); f_000e6b70(c); X86_RET(c, 0xed04cu);
    X86_TICK(c, 9);
    // 0ed04c  mov dword ptr [ebp - 4], 8
    X86_AT(c, 0xed04cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x8u);
    // 0ed053  jmp 0xed2ca
    X86_AT(c, 0xed053u);
    goto L_ed2ca;
L_ed058:
    X86_TICK(c, 27);
    // 0ed058  push 0xa
    X86_AT(c, 0xed058u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0ed05a  push 0xf
    X86_AT(c, 0xed05au);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0ed05c  push 0xb
    X86_AT(c, 0xed05cu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ed05e  push 7
    X86_AT(c, 0xed05eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ed060  push 0x2f
    X86_AT(c, 0xed060u);
    { uint32_t v = 0x2Fu; push32(c, v); }
    // 0ed062  push 0x60
    X86_AT(c, 0xed062u);
    { uint32_t v = 0x60u; push32(c, v); }
    // 0ed064  push 0xd0
    X86_AT(c, 0xed064u);
    { uint32_t v = 0xD0u; push32(c, v); }
    // 0ed069  push 0x128
    X86_AT(c, 0xed069u);
    { uint32_t v = 0x128u; push32(c, v); }
    // 0ed06e  push 0xd0
    X86_AT(c, 0xed06eu);
    { uint32_t v = 0xD0u; push32(c, v); }
    // 0ed073  push 5
    X86_AT(c, 0xed073u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ed075  call 0xe6858
    X86_AT(c, 0xed075u);
    push32(c, 0xed07au); f_000e6858(c); X86_RET(c, 0xed07au);
    X86_TICK(c, 9);
    // 0ed07a  push 5
    X86_AT(c, 0xed07au);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ed07c  call 0xe693c
    X86_AT(c, 0xed07cu);
    push32(c, 0xed081u); f_000e693c(c); X86_RET(c, 0xed081u);
    X86_TICK(c, 9);
    // 0ed081  push 5
    X86_AT(c, 0xed081u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ed083  call 0xe699c
    X86_AT(c, 0xed083u);
    push32(c, 0xed088u); f_000e699c(c); X86_RET(c, 0xed088u);
    X86_TICK(c, 9);
    // 0ed088  push 5
    X86_AT(c, 0xed088u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ed08a  call 0xe693c
    X86_AT(c, 0xed08au);
    push32(c, 0xed08fu); f_000e693c(c); X86_RET(c, 0xed08fu);
    X86_TICK(c, 13);
    // 0ed08f  push 0
    X86_AT(c, 0xed08fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ed091  push 4
    X86_AT(c, 0xed091u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed093  push 5
    X86_AT(c, 0xed093u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ed095  call 0xe7260
    X86_AT(c, 0xed095u);
    push32(c, 0xed09au); f_000e7260(c); X86_RET(c, 0xed09au);
    X86_TICK(c, 13);
    // 0ed09a  add esp, 0x40
    X86_AT(c, 0xed09au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0ed09d  push 0x3240
    X86_AT(c, 0xed09du);
    { uint32_t v = 0x3240u; push32(c, v); }
    // 0ed0a2  push 5
    X86_AT(c, 0xed0a2u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ed0a4  call 0xe5654
    X86_AT(c, 0xed0a4u);
    push32(c, 0xed0a9u); f_000e5654(c); X86_RET(c, 0xed0a9u);
    X86_TICK(c, 13);
    // 0ed0a9  push 1
    X86_AT(c, 0xed0a9u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ed0ab  push 5
    X86_AT(c, 0xed0abu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ed0ad  push 5
    X86_AT(c, 0xed0adu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ed0af  call 0xe7260
    X86_AT(c, 0xed0afu);
    push32(c, 0xed0b4u); f_000e7260(c); X86_RET(c, 0xed0b4u);
    X86_TICK(c, 11);
    // 0ed0b4  push 0x325c
    X86_AT(c, 0xed0b4u);
    { uint32_t v = 0x325Cu; push32(c, v); }
    // 0ed0b9  push 5
    X86_AT(c, 0xed0b9u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ed0bb  call 0xe5654
    X86_AT(c, 0xed0bbu);
    push32(c, 0xed0c0u); f_000e5654(c); X86_RET(c, 0xed0c0u);
    X86_TICK(c, 13);
    // 0ed0c0  push 2
    X86_AT(c, 0xed0c0u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ed0c2  push 5
    X86_AT(c, 0xed0c2u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ed0c4  push 5
    X86_AT(c, 0xed0c4u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ed0c6  call 0xe7260
    X86_AT(c, 0xed0c6u);
    push32(c, 0xed0cbu); f_000e7260(c); X86_RET(c, 0xed0cbu);
    X86_TICK(c, 11);
    // 0ed0cb  push 0x3284
    X86_AT(c, 0xed0cbu);
    { uint32_t v = 0x3284u; push32(c, v); }
    // 0ed0d0  push 5
    X86_AT(c, 0xed0d0u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ed0d2  call 0xe5654
    X86_AT(c, 0xed0d2u);
    push32(c, 0xed0d7u); f_000e5654(c); X86_RET(c, 0xed0d7u);
    X86_TICK(c, 13);
    // 0ed0d7  push 3
    X86_AT(c, 0xed0d7u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ed0d9  push 5
    X86_AT(c, 0xed0d9u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ed0db  push 5
    X86_AT(c, 0xed0dbu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ed0dd  call 0xe7260
    X86_AT(c, 0xed0ddu);
    push32(c, 0xed0e2u); f_000e7260(c); X86_RET(c, 0xed0e2u);
    X86_TICK(c, 13);
    // 0ed0e2  add esp, 0x3c
    X86_AT(c, 0xed0e2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0ed0e5  push 0x32ac
    X86_AT(c, 0xed0e5u);
    { uint32_t v = 0x32ACu; push32(c, v); }
    // 0ed0ea  push 5
    X86_AT(c, 0xed0eau);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ed0ec  call 0xe5654
    X86_AT(c, 0xed0ecu);
    push32(c, 0xed0f1u); f_000e5654(c); X86_RET(c, 0xed0f1u);
    X86_TICK(c, 13);
    // 0ed0f1  push 4
    X86_AT(c, 0xed0f1u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed0f3  push 5
    X86_AT(c, 0xed0f3u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ed0f5  push 5
    X86_AT(c, 0xed0f5u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ed0f7  call 0xe7260
    X86_AT(c, 0xed0f7u);
    push32(c, 0xed0fcu); f_000e7260(c); X86_RET(c, 0xed0fcu);
    X86_TICK(c, 11);
    // 0ed0fc  push 0x32d4
    X86_AT(c, 0xed0fcu);
    { uint32_t v = 0x32D4u; push32(c, v); }
    // 0ed101  push 5
    X86_AT(c, 0xed101u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ed103  call 0xe5654
    X86_AT(c, 0xed103u);
    push32(c, 0xed108u); f_000e5654(c); X86_RET(c, 0xed108u);
    X86_TICK(c, 13);
    // 0ed108  push 0xe
    X86_AT(c, 0xed108u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0ed10a  push 0x28
    X86_AT(c, 0xed10au);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0ed10c  push 4
    X86_AT(c, 0xed10cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed10e  call 0xe7260
    X86_AT(c, 0xed10eu);
    push32(c, 0xed113u); f_000e7260(c); X86_RET(c, 0xed113u);
    X86_TICK(c, 11);
    // 0ed113  add esp, 0x28
    X86_AT(c, 0xed113u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0ed116  push 4
    X86_AT(c, 0xed116u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed118  call 0xe693c
    X86_AT(c, 0xed118u);
    push32(c, 0xed11du); f_000e693c(c); X86_RET(c, 0xed11du);
    X86_TICK(c, 11);
    // 0ed11d  push 0x32fc
    X86_AT(c, 0xed11du);
    { uint32_t v = 0x32FCu; push32(c, v); }
    // 0ed122  push 4
    X86_AT(c, 0xed122u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed124  call 0xe6cb0
    X86_AT(c, 0xed124u);
    push32(c, 0xed129u); f_000e6cb0(c); X86_RET(c, 0xed129u);
    X86_TICK(c, 2);
    // 0ed129  add esp, 0xc
    X86_AT(c, 0xed129u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_ed12c:
    X86_TICK(c, 13);
    // 0ed12c  push 0xe
    X86_AT(c, 0xed12cu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0ed12e  push 0x28
    X86_AT(c, 0xed12eu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0ed130  push 4
    X86_AT(c, 0xed130u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed132  call 0xe7260
    X86_AT(c, 0xed132u);
    push32(c, 0xed137u); f_000e7260(c); X86_RET(c, 0xed137u);
    X86_TICK(c, 9);
    // 0ed137  push 4
    X86_AT(c, 0xed137u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed139  call 0xe432c
    X86_AT(c, 0xed139u);
    push32(c, 0xed13eu); f_000e432c(c); X86_RET(c, 0xed13eu);
    X86_TICK(c, 12);
    // 0ed13e  xchg ebx, eax
    X86_AT(c, 0xed13eu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0ed13f  add esp, 0x10
    X86_AT(c, 0xed13fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0ed142  cmp bl, 5
    X86_AT(c, 0xed142u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0ed145  je 0xed231
    X86_AT(c, 0xed145u);
    if (x86_cc(c, 4)) { goto L_ed231; }
    X86_TICK(c, 7);
    // 0ed14b  cmp bl, 1
    X86_AT(c, 0xed14bu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0ed14e  je 0xed231
    X86_AT(c, 0xed14eu);
    if (x86_cc(c, 4)) { goto L_ed231; }
    X86_TICK(c, 17);
    // 0ed154  lea eax, [ebp - 0x35]
    X86_AT(c, 0xed154u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFCBu);
    // 0ed157  push eax
    X86_AT(c, 0xed157u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ed158  push ebx
    X86_AT(c, 0xed158u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ed159  push 4
    X86_AT(c, 0xed159u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed15b  push 0xcf4b0
    X86_AT(c, 0xed15bu);
    { uint32_t v = 0xCF4B0u; push32(c, v); }
    // 0ed160  call 0xe53e0
    X86_AT(c, 0xed160u);
    push32(c, 0xed165u); f_000e53e0(c); X86_RET(c, 0xed165u);
    X86_TICK(c, 11);
    // 0ed165  mov dword ptr [ebp - 0x48], eax
    X86_AT(c, 0xed165u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB8u)), c.r[0]);
    // 0ed168  push 4
    X86_AT(c, 0xed168u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed16a  call 0xe693c
    X86_AT(c, 0xed16au);
    push32(c, 0xed16fu); f_000e693c(c); X86_RET(c, 0xed16fu);
    X86_TICK(c, 14);
    // 0ed16f  add esp, 0x14
    X86_AT(c, 0xed16fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0ed172  cmp dword ptr [ebp - 0x48], 0
    X86_AT(c, 0xed172u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB8u))), 0x0u, 0, 4);
    // 0ed176  je 0xed12c
    X86_AT(c, 0xed176u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xed12cu); goto L_ed12c; }
    X86_TICK(c, 13);
    // 0ed178  push 0xe
    X86_AT(c, 0xed178u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0ed17a  push 0x28
    X86_AT(c, 0xed17au);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0ed17c  push 4
    X86_AT(c, 0xed17cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed17e  call 0xe7260
    X86_AT(c, 0xed17eu);
    push32(c, 0xed183u); f_000e7260(c); X86_RET(c, 0xed183u);
    X86_TICK(c, 14);
    // 0ed183  push dword ptr [ebp - 0x48]
    X86_AT(c, 0xed183u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB8u))); push32(c, v); }
    // 0ed186  push 4
    X86_AT(c, 0xed186u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed188  call 0xe6cb0
    X86_AT(c, 0xed188u);
    push32(c, 0xed18du); f_000e6cb0(c); X86_RET(c, 0xed18du);
    X86_TICK(c, 25);
    // 0ed18d  sub eax, eax
    X86_AT(c, 0xed18du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ed18f  mov dword ptr [ebp - 0x2c], eax
    X86_AT(c, 0xed18fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)), c.r[0]);
    // 0ed192  mov dword ptr [ebp - 0x24], eax
    X86_AT(c, 0xed192u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)), c.r[0]);
    // 0ed195  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xed195u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0ed198  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xed198u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0ed19b  add esp, 0x14
    X86_AT(c, 0xed19bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0ed19e  movzx edx, byte ptr [ebp - 0x35]
    X86_AT(c, 0xed19eu);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFCBu)));
    // 0ed1a2  cmp edx, 0x43
    X86_AT(c, 0xed1a2u);
    (void)x86_sub(c, c.r[2], 0x43u, 0, 4);
    // 0ed1a5  je 0xed1dc
    X86_AT(c, 0xed1a5u);
    if (x86_cc(c, 4)) { goto L_ed1dc; }
    X86_TICK(c, 7);
    // 0ed1a7  cmp edx, 0x46
    X86_AT(c, 0xed1a7u);
    (void)x86_sub(c, c.r[2], 0x46u, 0, 4);
    // 0ed1aa  je 0xed1bb
    X86_AT(c, 0xed1aau);
    if (x86_cc(c, 4)) { goto L_ed1bb; }
    X86_TICK(c, 7);
    // 0ed1ac  cmp edx, 0x54
    X86_AT(c, 0xed1acu);
    (void)x86_sub(c, c.r[2], 0x54u, 0, 4);
    // 0ed1af  je 0xed216
    X86_AT(c, 0xed1afu);
    if (x86_cc(c, 4)) { goto L_ed216; }
    X86_TICK(c, 7);
    // 0ed1b1  cmp edx, 0x57
    X86_AT(c, 0xed1b1u);
    (void)x86_sub(c, c.r[2], 0x57u, 0, 4);
    // 0ed1b4  je 0xed1f9
    X86_AT(c, 0xed1b4u);
    if (x86_cc(c, 4)) { goto L_ed1f9; }
    X86_TICK(c, 7);
    // 0ed1b6  jmp 0xed231
    X86_AT(c, 0xed1b6u);
    goto L_ed231;
L_ed1bb:
    X86_TICK(c, 26);
    // 0ed1bb  mov eax, edi
    X86_AT(c, 0xed1bbu);
    c.r[0] = c.r[7];
    // 0ed1bd  lea edx, [eax + eax*4]
    X86_AT(c, 0xed1bdu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ed1c0  lea edx, [eax + edx*2]
    X86_AT(c, 0xed1c0u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ed1c3  shl edx, 5
    X86_AT(c, 0xed1c3u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ed1c6  sub edx, eax
    X86_AT(c, 0xed1c6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ed1c8  mov byte ptr [edx + 0xcde7b], 0x46
    X86_AT(c, 0xed1c8u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Bu)), 0x46u);
    // 0ed1cf  mov eax, 0xa
    X86_AT(c, 0xed1cfu);
    c.r[0] = 0xAu;
    // 0ed1d4  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xed1d4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0ed1d7  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xed1d7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0ed1da  jmp 0xed231
    X86_AT(c, 0xed1dau);
    goto L_ed231;
L_ed1dc:
    X86_TICK(c, 22);
    // 0ed1dc  mov eax, edi
    X86_AT(c, 0xed1dcu);
    c.r[0] = c.r[7];
    // 0ed1de  lea edx, [eax + eax*4]
    X86_AT(c, 0xed1deu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ed1e1  lea edx, [eax + edx*2]
    X86_AT(c, 0xed1e1u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ed1e4  shl edx, 5
    X86_AT(c, 0xed1e4u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ed1e7  sub edx, eax
    X86_AT(c, 0xed1e7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ed1e9  mov byte ptr [edx + 0xcde7b], 0x43
    X86_AT(c, 0xed1e9u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Bu)), 0x43u);
    // 0ed1f0  mov dword ptr [ebp - 0x24], 0xa
    X86_AT(c, 0xed1f0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)), 0xAu);
    // 0ed1f7  jmp 0xed231
    X86_AT(c, 0xed1f7u);
    goto L_ed231;
L_ed1f9:
    X86_TICK(c, 22);
    // 0ed1f9  mov eax, edi
    X86_AT(c, 0xed1f9u);
    c.r[0] = c.r[7];
    // 0ed1fb  lea edx, [eax + eax*4]
    X86_AT(c, 0xed1fbu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ed1fe  lea edx, [eax + edx*2]
    X86_AT(c, 0xed1feu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ed201  shl edx, 5
    X86_AT(c, 0xed201u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ed204  sub edx, eax
    X86_AT(c, 0xed204u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ed206  mov byte ptr [edx + 0xcde7b], 0x57
    X86_AT(c, 0xed206u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Bu)), 0x57u);
    // 0ed20d  mov dword ptr [ebp - 0x2c], 0xa
    X86_AT(c, 0xed20du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)), 0xAu);
    // 0ed214  jmp 0xed231
    X86_AT(c, 0xed214u);
    goto L_ed231;
L_ed216:
    X86_TICK(c, 15);
    // 0ed216  mov eax, edi
    X86_AT(c, 0xed216u);
    c.r[0] = c.r[7];
    // 0ed218  lea edx, [eax + eax*4]
    X86_AT(c, 0xed218u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ed21b  lea edx, [eax + edx*2]
    X86_AT(c, 0xed21bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ed21e  shl edx, 5
    X86_AT(c, 0xed21eu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ed221  sub edx, eax
    X86_AT(c, 0xed221u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ed223  mov byte ptr [edx + 0xcde7b], 0x54
    X86_AT(c, 0xed223u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Bu)), 0x54u);
    // 0ed22a  mov dword ptr [ebp - 0x1c], 0xa
    X86_AT(c, 0xed22au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), 0xAu);
L_ed231:
    X86_TICK(c, 7);
    // 0ed231  cmp bl, 5
    X86_AT(c, 0xed231u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0ed234  jne 0xed29f
    X86_AT(c, 0xed234u);
    if (x86_cc(c, 5)) { goto L_ed29f; }
    X86_TICK(c, 13);
    // 0ed236  mov dword ptr [ebp - 4], 7
    X86_AT(c, 0xed236u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x7u);
    // 0ed23d  push 0xd
    X86_AT(c, 0xed23du);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0ed23f  push 5
    X86_AT(c, 0xed23fu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ed241  call 0xe6b70
    X86_AT(c, 0xed241u);
    push32(c, 0xed246u); f_000e6b70(c); X86_RET(c, 0xed246u);
    X86_TICK(c, 9);
    // 0ed246  push 4
    X86_AT(c, 0xed246u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed248  call 0xe693c
    X86_AT(c, 0xed248u);
    push32(c, 0xed24du); f_000e693c(c); X86_RET(c, 0xed24du);
    X86_TICK(c, 32);
    // 0ed24d  lea eax, [ebp - 0x35]
    X86_AT(c, 0xed24du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFCBu);
    // 0ed250  push eax
    X86_AT(c, 0xed250u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ed251  mov eax, edi
    X86_AT(c, 0xed251u);
    c.r[0] = c.r[7];
    // 0ed253  lea edx, [eax + eax*4]
    X86_AT(c, 0xed253u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ed256  lea edx, [eax + edx*2]
    X86_AT(c, 0xed256u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ed259  shl edx, 5
    X86_AT(c, 0xed259u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ed25c  sub edx, eax
    X86_AT(c, 0xed25cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ed25e  mov al, byte ptr [edx + 0xcde7b]
    X86_AT(c, 0xed25eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Bu))));
    // 0ed264  push eax
    X86_AT(c, 0xed264u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ed265  push 4
    X86_AT(c, 0xed265u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed267  push 0xcf4b0
    X86_AT(c, 0xed267u);
    { uint32_t v = 0xCF4B0u; push32(c, v); }
    // 0ed26c  call 0xe53e0
    X86_AT(c, 0xed26cu);
    push32(c, 0xed271u); f_000e53e0(c); X86_RET(c, 0xed271u);
    X86_TICK(c, 4);
    // 0ed271  mov dword ptr [ebp - 0x48], eax
    X86_AT(c, 0xed271u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB8u)), c.r[0]);
    // 0ed274  push 0xe
    X86_AT(c, 0xed274u);
    { uint32_t v = 0xEu; push32(c, v); }
L_ed276:
    X86_TICK(c, 11);
    // 0ed276  push 0x28
    X86_AT(c, 0xed276u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0ed278  push 4
    X86_AT(c, 0xed278u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed27a  call 0xe7260
    X86_AT(c, 0xed27au);
    push32(c, 0xed27fu); f_000e7260(c); X86_RET(c, 0xed27fu);
    X86_TICK(c, 14);
    // 0ed27f  add esp, 0x28
    X86_AT(c, 0xed27fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0ed282  cmp dword ptr [ebp - 0x48], 0
    X86_AT(c, 0xed282u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB8u))), 0x0u, 0, 4);
    // 0ed286  je 0xed294
    X86_AT(c, 0xed286u);
    if (x86_cc(c, 4)) { goto L_ed294; }
    X86_TICK(c, 14);
    // 0ed288  push dword ptr [ebp - 0x48]
    X86_AT(c, 0xed288u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB8u))); push32(c, v); }
    // 0ed28b  push 4
    X86_AT(c, 0xed28bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed28d  call 0xe6cb0
    X86_AT(c, 0xed28du);
    push32(c, 0xed292u); f_000e6cb0(c); X86_RET(c, 0xed292u);
    X86_TICK(c, 7);
    // 0ed292  jmp 0xed2ca
    X86_AT(c, 0xed292u);
    goto L_ed2ca;
L_ed294:
    X86_TICK(c, 11);
    // 0ed294  push 0x20
    X86_AT(c, 0xed294u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0ed296  push 4
    X86_AT(c, 0xed296u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed298  call 0xe6e28
    X86_AT(c, 0xed298u);
    push32(c, 0xed29du); f_000e6e28(c); X86_RET(c, 0xed29du);
    X86_TICK(c, 7);
    // 0ed29d  jmp 0xed2ca
    X86_AT(c, 0xed29du);
    goto L_ed2ca;
L_ed29f:
    X86_TICK(c, 7);
    // 0ed29f  cmp bl, 1
    X86_AT(c, 0xed29fu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0ed2a2  jne 0xed2ba
    X86_AT(c, 0xed2a2u);
    if (x86_cc(c, 5)) { goto L_ed2ba; }
L_ed2a4:
    X86_TICK(c, 11);
    // 0ed2a4  push 0xd
    X86_AT(c, 0xed2a4u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0ed2a6  push 5
    X86_AT(c, 0xed2a6u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ed2a8  call 0xe6b70
    X86_AT(c, 0xed2a8u);
    push32(c, 0xed2adu); f_000e6b70(c); X86_RET(c, 0xed2adu);
    X86_TICK(c, 11);
    // 0ed2ad  mov eax, 0xffffffff
    X86_AT(c, 0xed2adu);
    c.r[0] = 0xFFFFFFFFu;
    // 0ed2b2  add esp, 8
    X86_AT(c, 0xed2b2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ed2b5  jmp 0xed60a
    X86_AT(c, 0xed2b5u);
    goto L_ed60a;
L_ed2ba:
    X86_TICK(c, 11);
    // 0ed2ba  push 0xd
    X86_AT(c, 0xed2bau);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0ed2bc  push 5
    X86_AT(c, 0xed2bcu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ed2be  call 0xe6b70
    X86_AT(c, 0xed2beu);
    push32(c, 0xed2c3u); f_000e6b70(c); X86_RET(c, 0xed2c3u);
    X86_TICK(c, 2);
    // 0ed2c3  mov dword ptr [ebp - 4], 9
    X86_AT(c, 0xed2c3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x9u);
L_ed2ca:
    X86_TICK(c, 9);
    // 0ed2ca  add esp, 8
    X86_AT(c, 0xed2cau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ed2cd  jmp 0xec3cf
    X86_AT(c, 0xed2cdu);
    X86_POLL(c, 0xec3cfu); goto L_ec3cf;
L_ed2d2:
    X86_TICK(c, 9);
    // 0ed2d2  push 4
    X86_AT(c, 0xed2d2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed2d4  call 0xe693c
    X86_AT(c, 0xed2d4u);
    push32(c, 0xed2d9u); f_000e693c(c); X86_RET(c, 0xed2d9u);
    X86_TICK(c, 13);
    // 0ed2d9  push 0xf
    X86_AT(c, 0xed2d9u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0ed2db  push 0x28
    X86_AT(c, 0xed2dbu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0ed2dd  push 4
    X86_AT(c, 0xed2ddu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed2df  call 0xe7260
    X86_AT(c, 0xed2dfu);
    push32(c, 0xed2e4u); f_000e7260(c); X86_RET(c, 0xed2e4u);
    X86_TICK(c, 11);
    // 0ed2e4  push 0x3314
    X86_AT(c, 0xed2e4u);
    { uint32_t v = 0x3314u; push32(c, v); }
    // 0ed2e9  push 4
    X86_AT(c, 0xed2e9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed2eb  call 0xe6cb0
    X86_AT(c, 0xed2ebu);
    push32(c, 0xed2f0u); f_000e6cb0(c); X86_RET(c, 0xed2f0u);
    X86_TICK(c, 13);
    // 0ed2f0  push 0xf
    X86_AT(c, 0xed2f0u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0ed2f2  push 0x28
    X86_AT(c, 0xed2f2u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0ed2f4  push 4
    X86_AT(c, 0xed2f4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed2f6  call 0xe7260
    X86_AT(c, 0xed2f6u);
    push32(c, 0xed2fbu); f_000e7260(c); X86_RET(c, 0xed2fbu);
    X86_TICK(c, 15);
    // 0ed2fb  push 9
    X86_AT(c, 0xed2fbu);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0ed2fd  lea eax, [ebp - 0x44]
    X86_AT(c, 0xed2fdu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFBCu);
    // 0ed300  push eax
    X86_AT(c, 0xed300u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ed301  push 4
    X86_AT(c, 0xed301u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed303  call 0xe4f5c
    X86_AT(c, 0xed303u);
    push32(c, 0xed308u); f_000e4f5c(c); X86_RET(c, 0xed308u);
    X86_TICK(c, 9);
    // 0ed308  add esp, 0x30
    X86_AT(c, 0xed308u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0ed30b  and eax, eax
    X86_AT(c, 0xed30bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0ed30d  jne 0xed319
    X86_AT(c, 0xed30du);
    if (x86_cc(c, 5)) { goto L_ed319; }
L_ed30f:
    X86_TICK(c, 9);
    // 0ed30f  mov eax, 0xffffffff
    X86_AT(c, 0xed30fu);
    c.r[0] = 0xFFFFFFFFu;
    // 0ed314  jmp 0xed60a
    X86_AT(c, 0xed314u);
    goto L_ed60a;
L_ed319:
    X86_TICK(c, 2);
    // 0ed319  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xed319u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
L_ed320:
    X86_TICK(c, 16);
    // 0ed320  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xed320u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0ed323  cmp byte ptr [ebp + eax*1 - 0x44], 0x20
    X86_AT(c, 0xed323u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFFBCu))), 0x20u, 0, 1);
    // 0ed328  jne 0xed32f
    X86_AT(c, 0xed328u);
    if (x86_cc(c, 5)) { goto L_ed32f; }
    X86_TICK(c, 13);
    // 0ed32a  inc dword ptr [ebp - 8]
    X86_AT(c, 0xed32au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0ed32d  jmp 0xed320
    X86_AT(c, 0xed32du);
    X86_POLL(c, 0xed320u); goto L_ed320;
L_ed32f:
    X86_TICK(c, 2);
    // 0ed32f  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xed32fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
L_ed336:
    X86_TICK(c, 34);
    // 0ed336  mov eax, edi
    X86_AT(c, 0xed336u);
    c.r[0] = c.r[7];
    // 0ed338  lea edx, [eax + eax*4]
    X86_AT(c, 0xed338u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ed33b  lea edx, [eax + edx*2]
    X86_AT(c, 0xed33bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ed33e  shl edx, 5
    X86_AT(c, 0xed33eu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ed341  sub edx, eax
    X86_AT(c, 0xed341u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ed343  add edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xed343u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 4); }
    // 0ed346  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xed346u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0ed349  mov cl, byte ptr [ebp + eax*1 - 0x44]
    X86_AT(c, 0xed349u);
    s8(c, 1, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFFBCu))));
    // 0ed34d  mov byte ptr [edx + 0xcde4d], cl
    X86_AT(c, 0xed34du);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE4Du)), g8(c, 1));
    // 0ed353  and cl, cl
    X86_AT(c, 0xed353u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & g8(c, 1), 1)); }
    // 0ed355  je 0xed35f
    X86_AT(c, 0xed355u);
    if (x86_cc(c, 4)) { goto L_ed35f; }
    X86_TICK(c, 19);
    // 0ed357  inc dword ptr [ebp - 8]
    X86_AT(c, 0xed357u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0ed35a  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0xed35au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0ed35d  jmp 0xed336
    X86_AT(c, 0xed35du);
    X86_POLL(c, 0xed336u); goto L_ed336;
L_ed35f:
    X86_TICK(c, 9);
    // 0ed35f  push 4
    X86_AT(c, 0xed35fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed361  call 0xe693c
    X86_AT(c, 0xed361u);
    push32(c, 0xed366u); f_000e693c(c); X86_RET(c, 0xed366u);
    X86_TICK(c, 13);
    // 0ed366  push 0xf
    X86_AT(c, 0xed366u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0ed368  push 0x28
    X86_AT(c, 0xed368u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0ed36a  push 4
    X86_AT(c, 0xed36au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed36c  call 0xe7260
    X86_AT(c, 0xed36cu);
    push32(c, 0xed371u); f_000e7260(c); X86_RET(c, 0xed371u);
    X86_TICK(c, 24);
    // 0ed371  mov eax, edi
    X86_AT(c, 0xed371u);
    c.r[0] = c.r[7];
    // 0ed373  lea edx, [eax + eax*4]
    X86_AT(c, 0xed373u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ed376  lea edx, [eax + edx*2]
    X86_AT(c, 0xed376u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ed379  shl edx, 5
    X86_AT(c, 0xed379u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ed37c  sub edx, eax
    X86_AT(c, 0xed37cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ed37e  add edx, 0xcde4d
    X86_AT(c, 0xed37eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0xCDE4Du, 0, 4); }
    // 0ed384  push edx
    X86_AT(c, 0xed384u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0ed385  push 4
    X86_AT(c, 0xed385u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed387  call 0xe70ec
    X86_AT(c, 0xed387u);
    push32(c, 0xed38cu); f_000e70ec(c); X86_RET(c, 0xed38cu);
    X86_TICK(c, 9);
    // 0ed38c  add esp, 0x18
    X86_AT(c, 0xed38cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0ed38f  cmp bl, 5
    X86_AT(c, 0xed38fu);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0ed392  je 0xed4d4
    X86_AT(c, 0xed392u);
    if (x86_cc(c, 4)) { goto L_ed4d4; }
    X86_TICK(c, 9);
    // 0ed398  mov dword ptr [ebp - 4], 0xa
    X86_AT(c, 0xed398u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0xAu);
    // 0ed39f  jmp 0xec3cf
    X86_AT(c, 0xed39fu);
    X86_POLL(c, 0xec3cfu); goto L_ec3cf;
L_ed3a4:
    X86_TICK(c, 22);
    // 0ed3a4  mov eax, edi
    X86_AT(c, 0xed3a4u);
    c.r[0] = c.r[7];
    // 0ed3a6  lea edx, [eax + eax*4]
    X86_AT(c, 0xed3a6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ed3a9  lea edx, [eax + edx*2]
    X86_AT(c, 0xed3a9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ed3ac  shl edx, 5
    X86_AT(c, 0xed3acu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ed3af  sub edx, eax
    X86_AT(c, 0xed3afu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ed3b1  mov al, byte ptr [edx + 0xcde7c]
    X86_AT(c, 0xed3b1u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Cu))));
    // 0ed3b7  cmp al, 0x4d
    X86_AT(c, 0xed3b7u);
    (void)x86_sub(c, g8(c, 0), 0x4Du, 0, 1);
    // 0ed3b9  je 0xed3cf
    X86_AT(c, 0xed3b9u);
    if (x86_cc(c, 4)) { goto L_ed3cf; }
    X86_TICK(c, 7);
    // 0ed3bb  cmp al, 0x46
    X86_AT(c, 0xed3bbu);
    (void)x86_sub(c, g8(c, 0), 0x46u, 0, 1);
    // 0ed3bd  je 0xed3cf
    X86_AT(c, 0xed3bdu);
    if (x86_cc(c, 4)) { goto L_ed3cf; }
    X86_TICK(c, 7);
    // 0ed3bf  cmp al, 0x4f
    X86_AT(c, 0xed3bfu);
    (void)x86_sub(c, g8(c, 0), 0x4Fu, 0, 1);
    // 0ed3c1  je 0xed3cf
    X86_AT(c, 0xed3c1u);
    if (x86_cc(c, 4)) { goto L_ed3cf; }
    X86_TICK(c, 9);
    // 0ed3c3  mov dword ptr [ebp - 4], 7
    X86_AT(c, 0xed3c3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x7u);
    // 0ed3ca  jmp 0xec3cf
    X86_AT(c, 0xed3cau);
    X86_POLL(c, 0xec3cfu); goto L_ec3cf;
L_ed3cf:
    X86_TICK(c, 22);
    // 0ed3cf  mov eax, edi
    X86_AT(c, 0xed3cfu);
    c.r[0] = c.r[7];
    // 0ed3d1  lea edx, [eax + eax*4]
    X86_AT(c, 0xed3d1u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ed3d4  lea edx, [eax + edx*2]
    X86_AT(c, 0xed3d4u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ed3d7  shl edx, 5
    X86_AT(c, 0xed3d7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ed3da  sub edx, eax
    X86_AT(c, 0xed3dau);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ed3dc  mov al, byte ptr [edx + 0xcde7a]
    X86_AT(c, 0xed3dcu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Au))));
    // 0ed3e2  cmp al, 0x48
    X86_AT(c, 0xed3e2u);
    (void)x86_sub(c, g8(c, 0), 0x48u, 0, 1);
    // 0ed3e4  je 0xed3f6
    X86_AT(c, 0xed3e4u);
    if (x86_cc(c, 4)) { goto L_ed3f6; }
    X86_TICK(c, 7);
    // 0ed3e6  cmp al, 0x42
    X86_AT(c, 0xed3e6u);
    (void)x86_sub(c, g8(c, 0), 0x42u, 0, 1);
    // 0ed3e8  je 0xed3f6
    X86_AT(c, 0xed3e8u);
    if (x86_cc(c, 4)) { goto L_ed3f6; }
    X86_TICK(c, 7);
    // 0ed3ea  cmp al, 0x45
    X86_AT(c, 0xed3eau);
    (void)x86_sub(c, g8(c, 0), 0x45u, 0, 1);
    // 0ed3ec  je 0xed3f6
    X86_AT(c, 0xed3ecu);
    if (x86_cc(c, 4)) { goto L_ed3f6; }
    X86_TICK(c, 7);
    // 0ed3ee  cmp al, 0x44
    X86_AT(c, 0xed3eeu);
    (void)x86_sub(c, g8(c, 0), 0x44u, 0, 1);
    // 0ed3f0  jne 0xed4d4
    X86_AT(c, 0xed3f0u);
    if (x86_cc(c, 5)) { goto L_ed4d4; }
L_ed3f6:
    X86_TICK(c, 22);
    // 0ed3f6  mov eax, edi
    X86_AT(c, 0xed3f6u);
    c.r[0] = c.r[7];
    // 0ed3f8  lea edx, [eax + eax*4]
    X86_AT(c, 0xed3f8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ed3fb  lea edx, [eax + edx*2]
    X86_AT(c, 0xed3fbu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ed3fe  shl edx, 5
    X86_AT(c, 0xed3feu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ed401  sub edx, eax
    X86_AT(c, 0xed401u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ed403  mov al, byte ptr [edx + 0xcde7b]
    X86_AT(c, 0xed403u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Bu))));
    // 0ed409  cmp al, 0x46
    X86_AT(c, 0xed409u);
    (void)x86_sub(c, g8(c, 0), 0x46u, 0, 1);
    // 0ed40b  je 0xed425
    X86_AT(c, 0xed40bu);
    if (x86_cc(c, 4)) { goto L_ed425; }
    X86_TICK(c, 7);
    // 0ed40d  cmp al, 0x43
    X86_AT(c, 0xed40du);
    (void)x86_sub(c, g8(c, 0), 0x43u, 0, 1);
    // 0ed40f  je 0xed425
    X86_AT(c, 0xed40fu);
    if (x86_cc(c, 4)) { goto L_ed425; }
    X86_TICK(c, 7);
    // 0ed411  cmp al, 0x57
    X86_AT(c, 0xed411u);
    (void)x86_sub(c, g8(c, 0), 0x57u, 0, 1);
    // 0ed413  je 0xed425
    X86_AT(c, 0xed413u);
    if (x86_cc(c, 4)) { goto L_ed425; }
    X86_TICK(c, 7);
    // 0ed415  cmp al, 0x54
    X86_AT(c, 0xed415u);
    (void)x86_sub(c, g8(c, 0), 0x54u, 0, 1);
    // 0ed417  je 0xed425
    X86_AT(c, 0xed417u);
    if (x86_cc(c, 4)) { goto L_ed425; }
    X86_TICK(c, 9);
    // 0ed419  mov dword ptr [ebp - 4], 8
    X86_AT(c, 0xed419u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x8u);
    // 0ed420  jmp 0xec3cf
    X86_AT(c, 0xed420u);
    X86_POLL(c, 0xec3cfu); goto L_ec3cf;
L_ed425:
    X86_TICK(c, 23);
    // 0ed425  mov eax, edi
    X86_AT(c, 0xed425u);
    c.r[0] = c.r[7];
    // 0ed427  lea edx, [eax + eax*4]
    X86_AT(c, 0xed427u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ed42a  lea edx, [eax + edx*2]
    X86_AT(c, 0xed42au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ed42d  shl edx, 5
    X86_AT(c, 0xed42du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ed430  sub edx, eax
    X86_AT(c, 0xed430u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ed432  cmp byte ptr [edx + 0xcde4d], 0
    X86_AT(c, 0xed432u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE4Du))), 0x0u, 0, 1);
    // 0ed439  jne 0xed447
    X86_AT(c, 0xed439u);
    if (x86_cc(c, 5)) { goto L_ed447; }
    X86_TICK(c, 9);
    // 0ed43b  mov dword ptr [ebp - 4], 9
    X86_AT(c, 0xed43bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x9u);
    // 0ed442  jmp 0xec3cf
    X86_AT(c, 0xed442u);
    X86_POLL(c, 0xec3cfu); goto L_ec3cf;
L_ed447:
    X86_TICK(c, 9);
    // 0ed447  push 4
    X86_AT(c, 0xed447u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed449  call 0xe693c
    X86_AT(c, 0xed449u);
    push32(c, 0xed44eu); f_000e693c(c); X86_RET(c, 0xed44eu);
    X86_TICK(c, 13);
    // 0ed44e  push 3
    X86_AT(c, 0xed44eu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ed450  push 0xf
    X86_AT(c, 0xed450u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0ed452  push 4
    X86_AT(c, 0xed452u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed454  call 0xe7260
    X86_AT(c, 0xed454u);
    push32(c, 0xed459u); f_000e7260(c); X86_RET(c, 0xed459u);
    X86_TICK(c, 11);
    // 0ed459  push 0x3334
    X86_AT(c, 0xed459u);
    { uint32_t v = 0x3334u; push32(c, v); }
    // 0ed45e  push 4
    X86_AT(c, 0xed45eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed460  call 0xe6cb0
    X86_AT(c, 0xed460u);
    push32(c, 0xed465u); f_000e6cb0(c); X86_RET(c, 0xed465u);
    X86_TICK(c, 13);
    // 0ed465  push 3
    X86_AT(c, 0xed465u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ed467  push 0xf
    X86_AT(c, 0xed467u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0ed469  push 4
    X86_AT(c, 0xed469u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed46b  call 0xe7260
    X86_AT(c, 0xed46bu);
    push32(c, 0xed470u); f_000e7260(c); X86_RET(c, 0xed470u);
    X86_TICK(c, 24);
    // 0ed470  mov eax, edi
    X86_AT(c, 0xed470u);
    c.r[0] = c.r[7];
    // 0ed472  lea edx, [eax + eax*4]
    X86_AT(c, 0xed472u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ed475  lea edx, [eax + edx*2]
    X86_AT(c, 0xed475u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ed478  shl edx, 5
    X86_AT(c, 0xed478u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ed47b  sub edx, eax
    X86_AT(c, 0xed47bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ed47d  add edx, 0xcde4d
    X86_AT(c, 0xed47du);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0xCDE4Du, 0, 4); }
    // 0ed483  push edx
    X86_AT(c, 0xed483u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0ed484  push 4
    X86_AT(c, 0xed484u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed486  call 0xe70ec
    X86_AT(c, 0xed486u);
    push32(c, 0xed48bu); f_000e70ec(c); X86_RET(c, 0xed48bu);
    X86_TICK(c, 11);
    // 0ed48b  push 0x336c
    X86_AT(c, 0xed48bu);
    { uint32_t v = 0x336Cu; push32(c, v); }
    // 0ed490  push 4
    X86_AT(c, 0xed490u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed492  call 0xe5654
    X86_AT(c, 0xed492u);
    push32(c, 0xed497u); f_000e5654(c); X86_RET(c, 0xed497u);
    X86_TICK(c, 9);
    // 0ed497  push 0x3394
    X86_AT(c, 0xed497u);
    { uint32_t v = 0x3394u; push32(c, v); }
    // 0ed49c  call 0xe75f8
    X86_AT(c, 0xed49cu);
    push32(c, 0xed4a1u); f_000e75f8(c); X86_RET(c, 0xed4a1u);
    X86_TICK(c, 2);
    // 0ed4a1  add esp, 0x38
    X86_AT(c, 0xed4a1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
L_ed4a4:
    X86_TICK(c, 9);
    // 0ed4a4  push 4
    X86_AT(c, 0xed4a4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed4a6  call 0xe4b60
    X86_AT(c, 0xed4a6u);
    push32(c, 0xed4abu); f_000e4b60(c); X86_RET(c, 0xed4abu);
    X86_TICK(c, 11);
    // 0ed4ab  mov byte ptr [ebp - 0x35], al
    X86_AT(c, 0xed4abu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFCBu)), g8(c, 0));
    // 0ed4ae  add esp, 4
    X86_AT(c, 0xed4aeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ed4b1  cmp al, 0x59
    X86_AT(c, 0xed4b1u);
    (void)x86_sub(c, g8(c, 0), 0x59u, 0, 1);
    // 0ed4b3  je 0xed4bd
    X86_AT(c, 0xed4b3u);
    if (x86_cc(c, 4)) { goto L_ed4bd; }
    X86_TICK(c, 7);
    // 0ed4b5  cmp al, 0x4e
    X86_AT(c, 0xed4b5u);
    (void)x86_sub(c, g8(c, 0), 0x4Eu, 0, 1);
    // 0ed4b7  je 0xed4bd
    X86_AT(c, 0xed4b7u);
    if (x86_cc(c, 4)) { goto L_ed4bd; }
    X86_TICK(c, 7);
    // 0ed4b9  dec al
    X86_AT(c, 0xed4b9u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0ed4bb  jne 0xed4a4
    X86_AT(c, 0xed4bbu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xed4a4u); goto L_ed4a4; }
L_ed4bd:
    X86_TICK(c, 9);
    // 0ed4bd  push 2
    X86_AT(c, 0xed4bdu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ed4bf  call 0xe6c68
    X86_AT(c, 0xed4bfu);
    push32(c, 0xed4c4u); f_000e6c68(c); X86_RET(c, 0xed4c4u);
    X86_TICK(c, 9);
    // 0ed4c4  push 4
    X86_AT(c, 0xed4c4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed4c6  call 0xe693c
    X86_AT(c, 0xed4c6u);
    push32(c, 0xed4cbu); f_000e693c(c); X86_RET(c, 0xed4cbu);
    X86_TICK(c, 14);
    // 0ed4cb  add esp, 8
    X86_AT(c, 0xed4cbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ed4ce  cmp byte ptr [ebp - 0x35], 0x59
    X86_AT(c, 0xed4ceu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFCBu))), 0x59u, 0, 1);
    // 0ed4d2  je 0xed4e0
    X86_AT(c, 0xed4d2u);
    if (x86_cc(c, 4)) { goto L_ed4e0; }
L_ed4d4:
    X86_TICK(c, 9);
    // 0ed4d4  mov dword ptr [ebp - 4], 6
    X86_AT(c, 0xed4d4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x6u);
    // 0ed4db  jmp 0xec3cf
    X86_AT(c, 0xed4dbu);
    X86_POLL(c, 0xec3cfu); goto L_ec3cf;
L_ed4e0:
    X86_TICK(c, 116);
    // 0ed4e0  mov eax, edi
    X86_AT(c, 0xed4e0u);
    c.r[0] = c.r[7];
    // 0ed4e2  lea edx, [eax + eax*4]
    X86_AT(c, 0xed4e2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ed4e5  lea edx, [eax + edx*2]
    X86_AT(c, 0xed4e5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ed4e8  shl edx, 5
    X86_AT(c, 0xed4e8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ed4eb  sub edx, eax
    X86_AT(c, 0xed4ebu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ed4ed  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xed4edu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0ed4f0  add eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xed4f0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))), 0, 4); }
    // 0ed4f3  add dword ptr [edx + 0xcde62], eax
    X86_AT(c, 0xed4f3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE62u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0ed4f9  mov eax, dword ptr [ebp - 0x18]
    X86_AT(c, 0xed4f9u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)));
    // 0ed4fc  add eax, dword ptr [ebp - 0x1c]
    X86_AT(c, 0xed4fcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))), 0, 4); }
    // 0ed4ff  add dword ptr [edx + 0xcde66], eax
    X86_AT(c, 0xed4ffu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE66u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0ed505  mov eax, dword ptr [ebp - 0x20]
    X86_AT(c, 0xed505u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)));
    // 0ed508  add eax, dword ptr [ebp - 0x24]
    X86_AT(c, 0xed508u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu))), 0, 4); }
    // 0ed50b  add dword ptr [edx + 0xcde72], eax
    X86_AT(c, 0xed50bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE72u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0ed511  mov eax, dword ptr [ebp - 0x28]
    X86_AT(c, 0xed511u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)));
    // 0ed514  add eax, dword ptr [ebp - 0x2c]
    X86_AT(c, 0xed514u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u))), 0, 4); }
    // 0ed517  add dword ptr [edx + 0xcde76], eax
    X86_AT(c, 0xed517u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE76u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0ed51d  mov eax, dword ptr [ebp - 0x34]
    X86_AT(c, 0xed51du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFCCu)));
    // 0ed520  add dword ptr [edx + 0xcde6e], eax
    X86_AT(c, 0xed520u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE6Eu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0ed526  mov eax, dword ptr [ebp - 0x30]
    X86_AT(c, 0xed526u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD0u)));
    // 0ed529  add dword ptr [edx + 0xcde6a], eax
    X86_AT(c, 0xed529u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE6Au)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0ed52f  push 6
    X86_AT(c, 0xed52fu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ed531  push 0x34
    X86_AT(c, 0xed531u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0ed533  push 4
    X86_AT(c, 0xed533u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed535  mov dword ptr [ebp - 0x4c], edx
    X86_AT(c, 0xed535u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)), c.r[2]);
    // 0ed538  call 0xe7260
    X86_AT(c, 0xed538u);
    push32(c, 0xed53du); f_000e7260(c); X86_RET(c, 0xed53du);
    X86_TICK(c, 20);
    // 0ed53d  push 2
    X86_AT(c, 0xed53du);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ed53f  mov eax, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xed53fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0ed542  push dword ptr [eax + 0xcde62]
    X86_AT(c, 0xed542u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xCDE62u))); push32(c, v); }
    // 0ed548  push 4
    X86_AT(c, 0xed548u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed54a  call 0xe5630
    X86_AT(c, 0xed54au);
    push32(c, 0xed54fu); f_000e5630(c); X86_RET(c, 0xed54fu);
    X86_TICK(c, 13);
    // 0ed54f  push 7
    X86_AT(c, 0xed54fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ed551  push 0x34
    X86_AT(c, 0xed551u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0ed553  push 4
    X86_AT(c, 0xed553u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed555  call 0xe7260
    X86_AT(c, 0xed555u);
    push32(c, 0xed55au); f_000e7260(c); X86_RET(c, 0xed55au);
    X86_TICK(c, 20);
    // 0ed55a  push 2
    X86_AT(c, 0xed55au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ed55c  mov eax, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xed55cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0ed55f  push dword ptr [eax + 0xcde66]
    X86_AT(c, 0xed55fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xCDE66u))); push32(c, v); }
    // 0ed565  push 4
    X86_AT(c, 0xed565u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed567  call 0xe5630
    X86_AT(c, 0xed567u);
    push32(c, 0xed56cu); f_000e5630(c); X86_RET(c, 0xed56cu);
    X86_TICK(c, 13);
    // 0ed56c  push 8
    X86_AT(c, 0xed56cu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0ed56e  push 0x34
    X86_AT(c, 0xed56eu);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0ed570  push 4
    X86_AT(c, 0xed570u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed572  call 0xe7260
    X86_AT(c, 0xed572u);
    push32(c, 0xed577u); f_000e7260(c); X86_RET(c, 0xed577u);
    X86_TICK(c, 22);
    // 0ed577  add esp, 0x3c
    X86_AT(c, 0xed577u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0ed57a  push 2
    X86_AT(c, 0xed57au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ed57c  mov eax, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xed57cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0ed57f  push dword ptr [eax + 0xcde6a]
    X86_AT(c, 0xed57fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xCDE6Au))); push32(c, v); }
    // 0ed585  push 4
    X86_AT(c, 0xed585u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed587  call 0xe5630
    X86_AT(c, 0xed587u);
    push32(c, 0xed58cu); f_000e5630(c); X86_RET(c, 0xed58cu);
    X86_TICK(c, 15);
    // 0ed58c  add esp, 0xc
    X86_AT(c, 0xed58cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0ed58f  push 9
    X86_AT(c, 0xed58fu);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0ed591  push 0x34
    X86_AT(c, 0xed591u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0ed593  push 4
    X86_AT(c, 0xed593u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed595  call 0xe7260
    X86_AT(c, 0xed595u);
    push32(c, 0xed59au); f_000e7260(c); X86_RET(c, 0xed59au);
    X86_TICK(c, 29);
    // 0ed59a  push 2
    X86_AT(c, 0xed59au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ed59c  mov eax, edi
    X86_AT(c, 0xed59cu);
    c.r[0] = c.r[7];
    // 0ed59e  lea edx, [eax + eax*4]
    X86_AT(c, 0xed59eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ed5a1  lea edx, [eax + edx*2]
    X86_AT(c, 0xed5a1u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ed5a4  shl edx, 5
    X86_AT(c, 0xed5a4u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ed5a7  sub edx, eax
    X86_AT(c, 0xed5a7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ed5a9  push dword ptr [edx + 0xcde6e]
    X86_AT(c, 0xed5a9u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE6Eu))); push32(c, v); }
    // 0ed5af  push 4
    X86_AT(c, 0xed5afu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed5b1  mov dword ptr [ebp - 0x4c], edx
    X86_AT(c, 0xed5b1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)), c.r[2]);
    // 0ed5b4  call 0xe5630
    X86_AT(c, 0xed5b4u);
    push32(c, 0xed5b9u); f_000e5630(c); X86_RET(c, 0xed5b9u);
    X86_TICK(c, 13);
    // 0ed5b9  push 0xa
    X86_AT(c, 0xed5b9u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0ed5bb  push 0x34
    X86_AT(c, 0xed5bbu);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0ed5bd  push 4
    X86_AT(c, 0xed5bdu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed5bf  call 0xe7260
    X86_AT(c, 0xed5bfu);
    push32(c, 0xed5c4u); f_000e7260(c); X86_RET(c, 0xed5c4u);
    X86_TICK(c, 20);
    // 0ed5c4  push 2
    X86_AT(c, 0xed5c4u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ed5c6  mov eax, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xed5c6u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0ed5c9  push dword ptr [eax + 0xcde72]
    X86_AT(c, 0xed5c9u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xCDE72u))); push32(c, v); }
    // 0ed5cf  push 4
    X86_AT(c, 0xed5cfu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed5d1  call 0xe5630
    X86_AT(c, 0xed5d1u);
    push32(c, 0xed5d6u); f_000e5630(c); X86_RET(c, 0xed5d6u);
    X86_TICK(c, 13);
    // 0ed5d6  push 0xb
    X86_AT(c, 0xed5d6u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ed5d8  push 0x34
    X86_AT(c, 0xed5d8u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0ed5da  push 4
    X86_AT(c, 0xed5dau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed5dc  call 0xe7260
    X86_AT(c, 0xed5dcu);
    push32(c, 0xed5e1u); f_000e7260(c); X86_RET(c, 0xed5e1u);
    X86_TICK(c, 22);
    // 0ed5e1  add esp, 0x3c
    X86_AT(c, 0xed5e1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0ed5e4  push 2
    X86_AT(c, 0xed5e4u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ed5e6  mov eax, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xed5e6u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0ed5e9  push dword ptr [eax + 0xcde76]
    X86_AT(c, 0xed5e9u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xCDE76u))); push32(c, v); }
    // 0ed5ef  push 4
    X86_AT(c, 0xed5efu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed5f1  call 0xe5630
    X86_AT(c, 0xed5f1u);
    push32(c, 0xed5f6u); f_000e5630(c); X86_RET(c, 0xed5f6u);
    X86_TICK(c, 9);
    // 0ed5f6  push edi
    X86_AT(c, 0xed5f6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ed5f7  call 0xe2cfc
    X86_AT(c, 0xed5f7u);
    push32(c, 0xed5fcu); f_000e2cfc(c); X86_RET(c, 0xed5fcu);
    X86_TICK(c, 10);
    // 0ed5fc  mov edx, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xed5fcu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0ed5ff  mov dword ptr [edx + 0xcde5a], eax
    X86_AT(c, 0xed5ffu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE5Au)), c.r[0]);
    // 0ed605  sub eax, eax
    X86_AT(c, 0xed605u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ed607  add esp, 0x10
    X86_AT(c, 0xed607u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_ed60a:
    X86_TICK(c, 28);
    // 0ed60a  pop edi
    X86_AT(c, 0xed60au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ed60b  pop esi
    X86_AT(c, 0xed60bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ed60c  pop ebx
    X86_AT(c, 0xed60cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ed60d  leave 
    X86_AT(c, 0xed60du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ed60e  ret 
    X86_AT(c, 0xed60eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xed2cau, "ran off the end of a function");
}
void f_000ed60a(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0ed60a  pop edi
    X86_AT(c, 0xed60au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ed60b  pop esi
    X86_AT(c, 0xed60bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ed60c  pop ebx
    X86_AT(c, 0xed60cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ed60d  leave 
    X86_AT(c, 0xed60du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ed60e  ret 
    X86_AT(c, 0xed60eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xed60au, "ran off the end of a function");
}
void f_000ed610(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0ed610  push ebp
    X86_AT(c, 0xed610u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ed611  mov ebp, esp
    X86_AT(c, 0xed611u);
    c.r[5] = c.r[4];
    // 0ed613  sub esp, 0x10
    X86_AT(c, 0xed613u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x10u, 0, 4); }
    // 0ed616  push ebx
    X86_AT(c, 0xed616u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ed617  push esi
    X86_AT(c, 0xed617u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ed618  push edi
    X86_AT(c, 0xed618u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ed619  sub eax, eax
    X86_AT(c, 0xed619u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ed61b  mov byte ptr [ebp - 2], al
    X86_AT(c, 0xed61bu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 0));
    // 0ed61e  mov byte ptr [ebp - 1], al
    X86_AT(c, 0xed61eu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
L_ed621:
    X86_TICK(c, 9);
    // 0ed621  push 4
    X86_AT(c, 0xed621u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed623  call 0xe756c
    X86_AT(c, 0xed623u);
    push32(c, 0xed628u); f_000e756c(c); X86_RET(c, 0xed628u);
    X86_TICK(c, 17);
    // 0ed628  push 0x17
    X86_AT(c, 0xed628u);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0ed62a  push 0x4d
    X86_AT(c, 0xed62au);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0ed62c  push 3
    X86_AT(c, 0xed62cu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ed62e  push 0
    X86_AT(c, 0xed62eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ed630  push 4
    X86_AT(c, 0xed630u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed632  call 0xe739c
    X86_AT(c, 0xed632u);
    push32(c, 0xed637u); f_000e739c(c); X86_RET(c, 0xed637u);
    X86_TICK(c, 2);
    // 0ed637  add esp, 0x18
    X86_AT(c, 0xed637u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_ed63a:
    X86_TICK(c, 13);
    // 0ed63a  push 3
    X86_AT(c, 0xed63au);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ed63c  push 1
    X86_AT(c, 0xed63cu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ed63e  push 4
    X86_AT(c, 0xed63eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed640  call 0xe7260
    X86_AT(c, 0xed640u);
    push32(c, 0xed645u); f_000e7260(c); X86_RET(c, 0xed645u);
    X86_TICK(c, 11);
    // 0ed645  push 0x33c0
    X86_AT(c, 0xed645u);
    { uint32_t v = 0x33C0u; push32(c, v); }
    // 0ed64a  push 4
    X86_AT(c, 0xed64au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed64c  call 0xe5654
    X86_AT(c, 0xed64cu);
    push32(c, 0xed651u); f_000e5654(c); X86_RET(c, 0xed651u);
    X86_TICK(c, 13);
    // 0ed651  push 3
    X86_AT(c, 0xed651u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ed653  push 0x10
    X86_AT(c, 0xed653u);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0ed655  push 4
    X86_AT(c, 0xed655u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed657  call 0xe7260
    X86_AT(c, 0xed657u);
    push32(c, 0xed65cu); f_000e7260(c); X86_RET(c, 0xed65cu);
    X86_TICK(c, 11);
    // 0ed65c  push 0xcf1f4
    X86_AT(c, 0xed65cu);
    { uint32_t v = 0xCF1F4u; push32(c, v); }
    // 0ed661  push 4
    X86_AT(c, 0xed661u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed663  call 0xe5654
    X86_AT(c, 0xed663u);
    push32(c, 0xed668u); f_000e5654(c); X86_RET(c, 0xed668u);
    X86_TICK(c, 11);
    // 0ed668  push 0xe
    X86_AT(c, 0xed668u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0ed66a  push 4
    X86_AT(c, 0xed66au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed66c  call 0xe74d8
    X86_AT(c, 0xed66cu);
    push32(c, 0xed671u); f_000e74d8(c); X86_RET(c, 0xed671u);
    X86_TICK(c, 9);
    // 0ed671  push 4
    X86_AT(c, 0xed671u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed673  call 0xe693c
    X86_AT(c, 0xed673u);
    push32(c, 0xed678u); f_000e693c(c); X86_RET(c, 0xed678u);
    X86_TICK(c, 13);
    // 0ed678  push 3
    X86_AT(c, 0xed678u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ed67a  push 0x27
    X86_AT(c, 0xed67au);
    { uint32_t v = 0x27u; push32(c, v); }
    // 0ed67c  push 4
    X86_AT(c, 0xed67cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed67e  call 0xe7260
    X86_AT(c, 0xed67eu);
    push32(c, 0xed683u); f_000e7260(c); X86_RET(c, 0xed683u);
    X86_TICK(c, 11);
    // 0ed683  add esp, 0x40
    X86_AT(c, 0xed683u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0ed686  push 4
    X86_AT(c, 0xed686u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed688  call 0xe1b10
    X86_AT(c, 0xed688u);
    push32(c, 0xed68du); f_000e1b10(c); X86_RET(c, 0xed68du);
    X86_TICK(c, 14);
    // 0ed68d  xchg edi, eax
    X86_AT(c, 0xed68du);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0ed68e  push 0xb
    X86_AT(c, 0xed68eu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ed690  push 4
    X86_AT(c, 0xed690u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed692  call 0xe74d8
    X86_AT(c, 0xed692u);
    push32(c, 0xed697u); f_000e74d8(c); X86_RET(c, 0xed697u);
    X86_TICK(c, 9);
    // 0ed697  push 4
    X86_AT(c, 0xed697u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed699  call 0xe693c
    X86_AT(c, 0xed699u);
    push32(c, 0xed69eu); f_000e693c(c); X86_RET(c, 0xed69eu);
    X86_TICK(c, 9);
    // 0ed69e  add esp, 0x10
    X86_AT(c, 0xed69eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0ed6a1  cmp edi, 0xffffffff
    X86_AT(c, 0xed6a1u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0ed6a4  je 0xed6aa
    X86_AT(c, 0xed6a4u);
    if (x86_cc(c, 4)) { goto L_ed6aa; }
    X86_TICK(c, 7);
    // 0ed6a6  and edi, edi
    X86_AT(c, 0xed6a6u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0ed6a8  jne 0xed6df
    X86_AT(c, 0xed6a8u);
    if (x86_cc(c, 5)) { goto L_ed6df; }
L_ed6aa:
    X86_TICK(c, 13);
    // 0ed6aa  push 3
    X86_AT(c, 0xed6aau);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ed6ac  push 0x1b
    X86_AT(c, 0xed6acu);
    { uint32_t v = 0x1Bu; push32(c, v); }
    // 0ed6ae  push 4
    X86_AT(c, 0xed6aeu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed6b0  call 0xe7260
    X86_AT(c, 0xed6b0u);
    push32(c, 0xed6b5u); f_000e7260(c); X86_RET(c, 0xed6b5u);
    X86_TICK(c, 11);
    // 0ed6b5  push 0xcf280
    X86_AT(c, 0xed6b5u);
    { uint32_t v = 0xCF280u; push32(c, v); }
    // 0ed6ba  push 4
    X86_AT(c, 0xed6bau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed6bc  call 0xe5654
    X86_AT(c, 0xed6bcu);
    push32(c, 0xed6c1u); f_000e5654(c); X86_RET(c, 0xed6c1u);
    X86_TICK(c, 17);
    // 0ed6c1  push 0x17
    X86_AT(c, 0xed6c1u);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0ed6c3  push 0x4d
    X86_AT(c, 0xed6c3u);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0ed6c5  push 3
    X86_AT(c, 0xed6c5u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ed6c7  push 0
    X86_AT(c, 0xed6c7u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ed6c9  push 4
    X86_AT(c, 0xed6c9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed6cb  call 0xe739c
    X86_AT(c, 0xed6cbu);
    push32(c, 0xed6d0u); f_000e739c(c); X86_RET(c, 0xed6d0u);
    X86_TICK(c, 9);
    // 0ed6d0  push 4
    X86_AT(c, 0xed6d0u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed6d2  call 0xe7584
    X86_AT(c, 0xed6d2u);
    push32(c, 0xed6d7u); f_000e7584(c); X86_RET(c, 0xed6d7u);
    X86_TICK(c, 9);
    // 0ed6d7  add esp, 0x2c
    X86_AT(c, 0xed6d7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0ed6da  jmp 0xedd31
    X86_AT(c, 0xed6dau);
    goto L_edd31;
L_ed6df:
    X86_TICK(c, 7);
    // 0ed6df  cmp edi, 4
    X86_AT(c, 0xed6dfu);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0ed6e2  jg 0xed6e8
    X86_AT(c, 0xed6e2u);
    if (x86_cc(c, 15)) { goto L_ed6e8; }
    X86_TICK(c, 7);
    // 0ed6e4  and edi, edi
    X86_AT(c, 0xed6e4u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0ed6e6  jg 0xed730
    X86_AT(c, 0xed6e6u);
    if (x86_cc(c, 15)) { goto L_ed730; }
L_ed6e8:
    X86_TICK(c, 13);
    // 0ed6e8  push 3
    X86_AT(c, 0xed6e8u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ed6ea  push 0xf
    X86_AT(c, 0xed6eau);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0ed6ec  push 4
    X86_AT(c, 0xed6ecu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed6ee  call 0xe7260
    X86_AT(c, 0xed6eeu);
    push32(c, 0xed6f3u); f_000e7260(c); X86_RET(c, 0xed6f3u);
    X86_TICK(c, 11);
    // 0ed6f3  push 0xcf230
    X86_AT(c, 0xed6f3u);
    { uint32_t v = 0xCF230u; push32(c, v); }
    // 0ed6f8  push 4
    X86_AT(c, 0xed6f8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed6fa  call 0xe5654
    X86_AT(c, 0xed6fau);
    push32(c, 0xed6ffu); f_000e5654(c); X86_RET(c, 0xed6ffu);
    X86_TICK(c, 9);
    // 0ed6ff  push 0x33dc
    X86_AT(c, 0xed6ffu);
    { uint32_t v = 0x33DCu; push32(c, v); }
    // 0ed704  call 0xe75f8
    X86_AT(c, 0xed704u);
    push32(c, 0xed709u); f_000e75f8(c); X86_RET(c, 0xed709u);
    X86_TICK(c, 2);
    // 0ed709  add esp, 0x18
    X86_AT(c, 0xed709u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_ed70c:
    X86_TICK(c, 9);
    // 0ed70c  push 4
    X86_AT(c, 0xed70cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed70e  call 0xe4b60
    X86_AT(c, 0xed70eu);
    push32(c, 0xed713u); f_000e4b60(c); X86_RET(c, 0xed713u);
    X86_TICK(c, 9);
    // 0ed713  add esp, 4
    X86_AT(c, 0xed713u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ed716  and al, al
    X86_AT(c, 0xed716u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0ed718  je 0xed70c
    X86_AT(c, 0xed718u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xed70cu); goto L_ed70c; }
    X86_TICK(c, 9);
    // 0ed71a  push 2
    X86_AT(c, 0xed71au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ed71c  call 0xe6c68
    X86_AT(c, 0xed71cu);
    push32(c, 0xed721u); f_000e6c68(c); X86_RET(c, 0xed721u);
    X86_TICK(c, 9);
    // 0ed721  push 4
    X86_AT(c, 0xed721u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed723  call 0xe693c
    X86_AT(c, 0xed723u);
    push32(c, 0xed728u); f_000e693c(c); X86_RET(c, 0xed728u);
    X86_TICK(c, 9);
    // 0ed728  add esp, 8
    X86_AT(c, 0xed728u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ed72b  jmp 0xed63a
    X86_AT(c, 0xed72bu);
    X86_POLL(c, 0xed63au); goto L_ed63a;
L_ed730:
    X86_TICK(c, 13);
    // 0ed730  push 3
    X86_AT(c, 0xed730u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ed732  push 0x10
    X86_AT(c, 0xed732u);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0ed734  push 4
    X86_AT(c, 0xed734u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed736  call 0xe7260
    X86_AT(c, 0xed736u);
    push32(c, 0xed73bu); f_000e7260(c); X86_RET(c, 0xed73bu);
    X86_TICK(c, 11);
    // 0ed73b  push 0xcf1f4
    X86_AT(c, 0xed73bu);
    { uint32_t v = 0xCF1F4u; push32(c, v); }
    // 0ed740  push 4
    X86_AT(c, 0xed740u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed742  call 0xe5654
    X86_AT(c, 0xed742u);
    push32(c, 0xed747u); f_000e5654(c); X86_RET(c, 0xed747u);
    X86_TICK(c, 13);
    // 0ed747  push 3
    X86_AT(c, 0xed747u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ed749  push 0x27
    X86_AT(c, 0xed749u);
    { uint32_t v = 0x27u; push32(c, v); }
    // 0ed74b  push 4
    X86_AT(c, 0xed74bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed74d  call 0xe7260
    X86_AT(c, 0xed74du);
    push32(c, 0xed752u); f_000e7260(c); X86_RET(c, 0xed752u);
    X86_TICK(c, 13);
    // 0ed752  push 2
    X86_AT(c, 0xed752u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ed754  push edi
    X86_AT(c, 0xed754u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ed755  push 4
    X86_AT(c, 0xed755u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed757  call 0xe5630
    X86_AT(c, 0xed757u);
    push32(c, 0xed75cu); f_000e5630(c); X86_RET(c, 0xed75cu);
    X86_TICK(c, 27);
    // 0ed75c  dec edi
    X86_AT(c, 0xed75cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 0ed75d  mov eax, edi
    X86_AT(c, 0xed75du);
    c.r[0] = c.r[7];
    // 0ed75f  lea edx, [eax + eax*4]
    X86_AT(c, 0xed75fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ed762  lea edx, [eax + edx*2]
    X86_AT(c, 0xed762u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ed765  shl edx, 5
    X86_AT(c, 0xed765u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ed768  sub edx, eax
    X86_AT(c, 0xed768u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ed76a  add esp, 0x2c
    X86_AT(c, 0xed76au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0ed76d  cmp byte ptr [edx + 0xcde4d], 0
    X86_AT(c, 0xed76du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE4Du))), 0x0u, 0, 1);
    // 0ed774  je 0xed7ad
    X86_AT(c, 0xed774u);
    if (x86_cc(c, 4)) { goto L_ed7ad; }
    X86_TICK(c, 13);
    // 0ed776  push 3
    X86_AT(c, 0xed776u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ed778  push 0xf
    X86_AT(c, 0xed778u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0ed77a  push 4
    X86_AT(c, 0xed77au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed77c  call 0xe7260
    X86_AT(c, 0xed77cu);
    push32(c, 0xed781u); f_000e7260(c); X86_RET(c, 0xed781u);
    X86_TICK(c, 11);
    // 0ed781  push 0x3410
    X86_AT(c, 0xed781u);
    { uint32_t v = 0x3410u; push32(c, v); }
    // 0ed786  push 4
    X86_AT(c, 0xed786u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed788  call 0xe5654
    X86_AT(c, 0xed788u);
    push32(c, 0xed78du); f_000e5654(c); X86_RET(c, 0xed78du);
    X86_TICK(c, 9);
    // 0ed78d  push 0x3458
    X86_AT(c, 0xed78du);
    { uint32_t v = 0x3458u; push32(c, v); }
    // 0ed792  call 0xe75f8
    X86_AT(c, 0xed792u);
    push32(c, 0xed797u); f_000e75f8(c); X86_RET(c, 0xed797u);
    X86_TICK(c, 2);
    // 0ed797  add esp, 0x18
    X86_AT(c, 0xed797u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_ed79a:
    X86_TICK(c, 9);
    // 0ed79a  push 4
    X86_AT(c, 0xed79au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed79c  call 0xe4b60
    X86_AT(c, 0xed79cu);
    push32(c, 0xed7a1u); f_000e4b60(c); X86_RET(c, 0xed7a1u);
    X86_TICK(c, 9);
    // 0ed7a1  add esp, 4
    X86_AT(c, 0xed7a1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ed7a4  and al, al
    X86_AT(c, 0xed7a4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0ed7a6  je 0xed79a
    X86_AT(c, 0xed7a6u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xed79au); goto L_ed79a; }
    X86_TICK(c, 7);
    // 0ed7a8  jmp 0xedd1b
    X86_AT(c, 0xed7a8u);
    goto L_edd1b;
L_ed7ad:
    X86_TICK(c, 13);
    // 0ed7ad  push 5
    X86_AT(c, 0xed7adu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ed7af  push 0xe
    X86_AT(c, 0xed7afu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0ed7b1  push 4
    X86_AT(c, 0xed7b1u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed7b3  call 0xe7260
    X86_AT(c, 0xed7b3u);
    push32(c, 0xed7b8u); f_000e7260(c); X86_RET(c, 0xed7b8u);
    X86_TICK(c, 11);
    // 0ed7b8  push 0x348c
    X86_AT(c, 0xed7b8u);
    { uint32_t v = 0x348Cu; push32(c, v); }
    // 0ed7bd  push 4
    X86_AT(c, 0xed7bdu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed7bf  call 0xe5654
    X86_AT(c, 0xed7bfu);
    push32(c, 0xed7c4u); f_000e5654(c); X86_RET(c, 0xed7c4u);
    X86_TICK(c, 13);
    // 0ed7c4  push 6
    X86_AT(c, 0xed7c4u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ed7c6  push 0x14
    X86_AT(c, 0xed7c6u);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0ed7c8  push 4
    X86_AT(c, 0xed7c8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed7ca  call 0xe7260
    X86_AT(c, 0xed7cau);
    push32(c, 0xed7cfu); f_000e7260(c); X86_RET(c, 0xed7cfu);
    X86_TICK(c, 11);
    // 0ed7cf  push 0x34cc
    X86_AT(c, 0xed7cfu);
    { uint32_t v = 0x34CCu; push32(c, v); }
    // 0ed7d4  push 4
    X86_AT(c, 0xed7d4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed7d6  call 0xe5654
    X86_AT(c, 0xed7d6u);
    push32(c, 0xed7dbu); f_000e5654(c); X86_RET(c, 0xed7dbu);
    X86_TICK(c, 13);
    // 0ed7db  push 7
    X86_AT(c, 0xed7dbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ed7dd  push 0x14
    X86_AT(c, 0xed7ddu);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0ed7df  push 4
    X86_AT(c, 0xed7dfu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed7e1  call 0xe7260
    X86_AT(c, 0xed7e1u);
    push32(c, 0xed7e6u); f_000e7260(c); X86_RET(c, 0xed7e6u);
    X86_TICK(c, 11);
    // 0ed7e6  push 0x3514
    X86_AT(c, 0xed7e6u);
    { uint32_t v = 0x3514u; push32(c, v); }
    // 0ed7eb  push 4
    X86_AT(c, 0xed7ebu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed7ed  call 0xe5654
    X86_AT(c, 0xed7edu);
    push32(c, 0xed7f2u); f_000e5654(c); X86_RET(c, 0xed7f2u);
    X86_TICK(c, 15);
    // 0ed7f2  add esp, 0x3c
    X86_AT(c, 0xed7f2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0ed7f5  push 8
    X86_AT(c, 0xed7f5u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0ed7f7  push 0x14
    X86_AT(c, 0xed7f7u);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0ed7f9  push 4
    X86_AT(c, 0xed7f9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed7fb  call 0xe7260
    X86_AT(c, 0xed7fbu);
    push32(c, 0xed800u); f_000e7260(c); X86_RET(c, 0xed800u);
    X86_TICK(c, 11);
    // 0ed800  push 0x355c
    X86_AT(c, 0xed800u);
    { uint32_t v = 0x355Cu; push32(c, v); }
    // 0ed805  push 4
    X86_AT(c, 0xed805u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed807  call 0xe5654
    X86_AT(c, 0xed807u);
    push32(c, 0xed80cu); f_000e5654(c); X86_RET(c, 0xed80cu);
    X86_TICK(c, 13);
    // 0ed80c  push 9
    X86_AT(c, 0xed80cu);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0ed80e  push 0x14
    X86_AT(c, 0xed80eu);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0ed810  push 4
    X86_AT(c, 0xed810u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed812  call 0xe7260
    X86_AT(c, 0xed812u);
    push32(c, 0xed817u); f_000e7260(c); X86_RET(c, 0xed817u);
    X86_TICK(c, 11);
    // 0ed817  push 0x35a4
    X86_AT(c, 0xed817u);
    { uint32_t v = 0x35A4u; push32(c, v); }
    // 0ed81c  push 4
    X86_AT(c, 0xed81cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed81e  call 0xe5654
    X86_AT(c, 0xed81eu);
    push32(c, 0xed823u); f_000e5654(c); X86_RET(c, 0xed823u);
    X86_TICK(c, 13);
    // 0ed823  push 0xa
    X86_AT(c, 0xed823u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0ed825  push 0x14
    X86_AT(c, 0xed825u);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0ed827  push 4
    X86_AT(c, 0xed827u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed829  call 0xe7260
    X86_AT(c, 0xed829u);
    push32(c, 0xed82eu); f_000e7260(c); X86_RET(c, 0xed82eu);
    X86_TICK(c, 11);
    // 0ed82e  push 0x35ec
    X86_AT(c, 0xed82eu);
    { uint32_t v = 0x35ECu; push32(c, v); }
    // 0ed833  push 4
    X86_AT(c, 0xed833u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed835  call 0xe5654
    X86_AT(c, 0xed835u);
    push32(c, 0xed83au); f_000e5654(c); X86_RET(c, 0xed83au);
    X86_TICK(c, 15);
    // 0ed83a  add esp, 0x3c
    X86_AT(c, 0xed83au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0ed83d  push 0xb
    X86_AT(c, 0xed83du);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ed83f  push 0x14
    X86_AT(c, 0xed83fu);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0ed841  push 4
    X86_AT(c, 0xed841u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed843  call 0xe7260
    X86_AT(c, 0xed843u);
    push32(c, 0xed848u); f_000e7260(c); X86_RET(c, 0xed848u);
    X86_TICK(c, 11);
    // 0ed848  push 0x3634
    X86_AT(c, 0xed848u);
    { uint32_t v = 0x3634u; push32(c, v); }
    // 0ed84d  push 4
    X86_AT(c, 0xed84du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed84f  call 0xe5654
    X86_AT(c, 0xed84fu);
    push32(c, 0xed854u); f_000e5654(c); X86_RET(c, 0xed854u);
    X86_TICK(c, 13);
    // 0ed854  push 0xc
    X86_AT(c, 0xed854u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0ed856  push 0xe
    X86_AT(c, 0xed856u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0ed858  push 4
    X86_AT(c, 0xed858u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed85a  call 0xe7260
    X86_AT(c, 0xed85au);
    push32(c, 0xed85fu); f_000e7260(c); X86_RET(c, 0xed85fu);
    X86_TICK(c, 13);
    // 0ed85f  add esp, 0x20
    X86_AT(c, 0xed85fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0ed862  push 0x367c
    X86_AT(c, 0xed862u);
    { uint32_t v = 0x367Cu; push32(c, v); }
    // 0ed867  push 4
    X86_AT(c, 0xed867u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed869  call 0xe5654
    X86_AT(c, 0xed869u);
    push32(c, 0xed86eu); f_000e5654(c); X86_RET(c, 0xed86eu);
    X86_TICK(c, 13);
    // 0ed86e  push 0xd
    X86_AT(c, 0xed86eu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0ed870  push 0xe
    X86_AT(c, 0xed870u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0ed872  push 4
    X86_AT(c, 0xed872u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed874  call 0xe7260
    X86_AT(c, 0xed874u);
    push32(c, 0xed879u); f_000e7260(c); X86_RET(c, 0xed879u);
    X86_TICK(c, 11);
    // 0ed879  push 0x36b4
    X86_AT(c, 0xed879u);
    { uint32_t v = 0x36B4u; push32(c, v); }
    // 0ed87e  push 4
    X86_AT(c, 0xed87eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed880  call 0xe5654
    X86_AT(c, 0xed880u);
    push32(c, 0xed885u); f_000e5654(c); X86_RET(c, 0xed885u);
    X86_TICK(c, 13);
    // 0ed885  push 0xe
    X86_AT(c, 0xed885u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0ed887  push 0xe
    X86_AT(c, 0xed887u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0ed889  push 4
    X86_AT(c, 0xed889u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed88b  call 0xe7260
    X86_AT(c, 0xed88bu);
    push32(c, 0xed890u); f_000e7260(c); X86_RET(c, 0xed890u);
    X86_TICK(c, 11);
    // 0ed890  push 0x36ec
    X86_AT(c, 0xed890u);
    { uint32_t v = 0x36ECu; push32(c, v); }
    // 0ed895  push 4
    X86_AT(c, 0xed895u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed897  call 0xe5654
    X86_AT(c, 0xed897u);
    push32(c, 0xed89cu); f_000e5654(c); X86_RET(c, 0xed89cu);
    X86_TICK(c, 13);
    // 0ed89c  push 0xf
    X86_AT(c, 0xed89cu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0ed89e  push 0xe
    X86_AT(c, 0xed89eu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0ed8a0  push 4
    X86_AT(c, 0xed8a0u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed8a2  call 0xe7260
    X86_AT(c, 0xed8a2u);
    push32(c, 0xed8a7u); f_000e7260(c); X86_RET(c, 0xed8a7u);
    X86_TICK(c, 13);
    // 0ed8a7  add esp, 0x3c
    X86_AT(c, 0xed8a7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0ed8aa  push 0x3724
    X86_AT(c, 0xed8aau);
    { uint32_t v = 0x3724u; push32(c, v); }
    // 0ed8af  push 4
    X86_AT(c, 0xed8afu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ed8b1  call 0xe5654
    X86_AT(c, 0xed8b1u);
    push32(c, 0xed8b6u); f_000e5654(c); X86_RET(c, 0xed8b6u);
    X86_TICK(c, 9);
    // 0ed8b6  push edi
    X86_AT(c, 0xed8b6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ed8b7  call 0xec140
    X86_AT(c, 0xed8b7u);
    push32(c, 0xed8bcu); f_000ec140(c); X86_RET(c, 0xed8bcu);
    X86_TICK(c, 9);
    // 0ed8bc  add esp, 0xc
    X86_AT(c, 0xed8bcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0ed8bf  inc eax
    X86_AT(c, 0xed8bfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0ed8c0  jne 0xedb40
    X86_AT(c, 0xed8c0u);
    if (x86_cc(c, 5)) { goto L_edb40; }
    X86_TICK(c, 2);
    // 0ed8c6  sub esi, esi
    X86_AT(c, 0xed8c6u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_ed8c8:
    X86_TICK(c, 7);
    // 0ed8c8  cmp esi, 9
    X86_AT(c, 0xed8c8u);
    (void)x86_sub(c, c.r[6], 0x9u, 0, 4);
    // 0ed8cb  jge 0xed8e6
    X86_AT(c, 0xed8cbu);
    if (x86_cc(c, 13)) { goto L_ed8e6; }
    X86_TICK(c, 24);
    // 0ed8cd  mov eax, edi
    X86_AT(c, 0xed8cdu);
    c.r[0] = c.r[7];
    // 0ed8cf  lea edx, [eax + eax*4]
    X86_AT(c, 0xed8cfu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ed8d2  lea edx, [eax + edx*2]
    X86_AT(c, 0xed8d2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ed8d5  shl edx, 5
    X86_AT(c, 0xed8d5u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ed8d8  sub edx, eax
    X86_AT(c, 0xed8d8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ed8da  add edx, esi
    X86_AT(c, 0xed8dau);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[6], 0, 4); }
    // 0ed8dc  mov byte ptr [edx + 0xcde4d], 0
    X86_AT(c, 0xed8dcu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE4Du)), 0x0u);
    // 0ed8e3  inc esi
    X86_AT(c, 0xed8e3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0ed8e4  jmp 0xed8c8
    X86_AT(c, 0xed8e4u);
    X86_POLL(c, 0xed8c8u); goto L_ed8c8;
L_ed8e6:
    X86_TICK(c, 226);
    // 0ed8e6  mov eax, edi
    X86_AT(c, 0xed8e6u);
    c.r[0] = c.r[7];
    // 0ed8e8  lea edx, [eax + eax*4]
    X86_AT(c, 0xed8e8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ed8eb  lea edx, [eax + edx*2]
    X86_AT(c, 0xed8ebu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ed8ee  shl edx, 5
    X86_AT(c, 0xed8eeu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ed8f1  sub edx, eax
    X86_AT(c, 0xed8f1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ed8f3  sub eax, eax
    X86_AT(c, 0xed8f3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ed8f5  mov byte ptr [edx + 0xcde4c], al
    X86_AT(c, 0xed8f5u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE4Cu)), g8(c, 0));
    // 0ed8fb  mov ecx, dword ptr [0x7a6b4]
    X86_AT(c, 0xed8fbu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x7A6B4u)));
    // 0ed901  mov dword ptr [edx + 0xcdf83], ecx
    X86_AT(c, 0xed901u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF83u)), c.r[1]);
    // 0ed907  mov dword ptr [edx + 0xcde56], eax
    X86_AT(c, 0xed907u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE56u)), c.r[0]);
    // 0ed90d  mov dword ptr [edx + 0xcde5a], eax
    X86_AT(c, 0xed90du);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE5Au)), c.r[0]);
    // 0ed913  mov dword ptr [edx + 0xcde5e], eax
    X86_AT(c, 0xed913u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE5Eu)), c.r[0]);
    // 0ed919  mov dword ptr [edx + 0xcde62], eax
    X86_AT(c, 0xed919u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE62u)), c.r[0]);
    // 0ed91f  mov dword ptr [edx + 0xcde66], eax
    X86_AT(c, 0xed91fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE66u)), c.r[0]);
    // 0ed925  mov dword ptr [edx + 0xcde6a], eax
    X86_AT(c, 0xed925u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE6Au)), c.r[0]);
    // 0ed92b  mov dword ptr [edx + 0xcde6e], eax
    X86_AT(c, 0xed92bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE6Eu)), c.r[0]);
    // 0ed931  mov dword ptr [edx + 0xcde72], eax
    X86_AT(c, 0xed931u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE72u)), c.r[0]);
    // 0ed937  mov dword ptr [edx + 0xcde76], eax
    X86_AT(c, 0xed937u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE76u)), c.r[0]);
    // 0ed93d  mov byte ptr [edx + 0xcde7a], al
    X86_AT(c, 0xed93du);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Au)), g8(c, 0));
    // 0ed943  mov byte ptr [edx + 0xcde7b], al
    X86_AT(c, 0xed943u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Bu)), g8(c, 0));
    // 0ed949  mov byte ptr [edx + 0xcde7c], al
    X86_AT(c, 0xed949u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Cu)), g8(c, 0));
    // 0ed94f  mov ecx, 0x41
    X86_AT(c, 0xed94fu);
    c.r[1] = 0x41u;
    // 0ed954  mov dword ptr [edx + 0xcde7d], ecx
    X86_AT(c, 0xed954u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Du)), c.r[1]);
    // 0ed95a  mov dword ptr [edx + 0xcde81], eax
    X86_AT(c, 0xed95au);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE81u)), c.r[0]);
    // 0ed960  mov dword ptr [edx + 0xcde85], eax
    X86_AT(c, 0xed960u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE85u)), c.r[0]);
    // 0ed966  mov dword ptr [edx + 0xcde89], eax
    X86_AT(c, 0xed966u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE89u)), c.r[0]);
    // 0ed96c  mov dword ptr [edx + 0xcde8d], eax
    X86_AT(c, 0xed96cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE8Du)), c.r[0]);
    // 0ed972  mov dword ptr [edx + 0xcde91], eax
    X86_AT(c, 0xed972u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE91u)), c.r[0]);
    // 0ed978  mov dword ptr [edx + 0xcde95], eax
    X86_AT(c, 0xed978u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE95u)), c.r[0]);
    // 0ed97e  mov dword ptr [edx + 0xcde99], 2
    X86_AT(c, 0xed97eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u)), 0x2u);
    // 0ed988  mov dword ptr [edx + 0xcde9d], eax
    X86_AT(c, 0xed988u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE9Du)), c.r[0]);
    // 0ed98e  mov byte ptr [edx + 0xcdea1], cl
    X86_AT(c, 0xed98eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEA1u)), g8(c, 1));
    // 0ed994  mov byte ptr [edx + 0xcdebe], cl
    X86_AT(c, 0xed994u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEBEu)), g8(c, 1));
    // 0ed99a  mov dword ptr [edx + 0xcdea2], 1
    X86_AT(c, 0xed99au);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEA2u)), 0x1u);
    // 0ed9a4  mov dword ptr [edx + 0xcdea6], 1
    X86_AT(c, 0xed9a4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEA6u)), 0x1u);
    // 0ed9ae  mov dword ptr [edx + 0xcdeaa], eax
    X86_AT(c, 0xed9aeu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEAAu)), c.r[0]);
    // 0ed9b4  mov dword ptr [edx + 0xcdeae], eax
    X86_AT(c, 0xed9b4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEAEu)), c.r[0]);
    // 0ed9ba  mov dword ptr [edx + 0xcdeb2], eax
    X86_AT(c, 0xed9bau);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEB2u)), c.r[0]);
    // 0ed9c0  mov eax, edi
    X86_AT(c, 0xed9c0u);
    c.r[0] = c.r[7];
    // 0ed9c2  lea edx, [eax + eax*4]
    X86_AT(c, 0xed9c2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ed9c5  lea edx, [eax + edx*2]
    X86_AT(c, 0xed9c5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ed9c8  shl edx, 5
    X86_AT(c, 0xed9c8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ed9cb  sub edx, eax
    X86_AT(c, 0xed9cbu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ed9cd  sub eax, eax
    X86_AT(c, 0xed9cdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ed9cf  mov dword ptr [edx + 0xcdeb6], eax
    X86_AT(c, 0xed9cfu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEB6u)), c.r[0]);
    // 0ed9d5  mov dword ptr [edx + 0xcdeba], eax
    X86_AT(c, 0xed9d5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEBAu)), c.r[0]);
    // 0ed9db  mov dword ptr [edx + 0xcdebf], 1
    X86_AT(c, 0xed9dbu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEBFu)), 0x1u);
    // 0ed9e5  mov dword ptr [edx + 0xcdec3], 1
    X86_AT(c, 0xed9e5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEC3u)), 0x1u);
    // 0ed9ef  mov dword ptr [edx + 0xcdec7], eax
    X86_AT(c, 0xed9efu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEC7u)), c.r[0]);
    // 0ed9f5  mov dword ptr [edx + 0xcdecb], eax
    X86_AT(c, 0xed9f5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDECBu)), c.r[0]);
    // 0ed9fb  mov dword ptr [edx + 0xcdecf], eax
    X86_AT(c, 0xed9fbu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDECFu)), c.r[0]);
    // 0eda01  mov dword ptr [edx + 0xcded3], eax
    X86_AT(c, 0xeda01u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDED3u)), c.r[0]);
    // 0eda07  mov dword ptr [edx + 0xcded7], eax
    X86_AT(c, 0xeda07u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDED7u)), c.r[0]);
    // 0eda0d  mov dword ptr [edx + 0xcdedb], eax
    X86_AT(c, 0xeda0du);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEDBu)), c.r[0]);
    // 0eda13  mov dword ptr [edx + 0xcdedf], eax
    X86_AT(c, 0xeda13u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEDFu)), c.r[0]);
    // 0eda19  mov dword ptr [edx + 0xcdee3], eax
    X86_AT(c, 0xeda19u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEE3u)), c.r[0]);
    // 0eda1f  mov dword ptr [edx + 0xcdee7], eax
    X86_AT(c, 0xeda1fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEE7u)), c.r[0]);
    // 0eda25  mov dword ptr [edx + 0xcdeeb], eax
    X86_AT(c, 0xeda25u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEEBu)), c.r[0]);
    // 0eda2b  mov dword ptr [edx + 0xcdeef], eax
    X86_AT(c, 0xeda2bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEEFu)), c.r[0]);
    // 0eda31  mov dword ptr [edx + 0xcdef3], eax
    X86_AT(c, 0xeda31u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEF3u)), c.r[0]);
    // 0eda37  mov dword ptr [edx + 0xcdef7], eax
    X86_AT(c, 0xeda37u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEF7u)), c.r[0]);
    // 0eda3d  mov dword ptr [edx + 0xcdefb], eax
    X86_AT(c, 0xeda3du);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEFBu)), c.r[0]);
    // 0eda43  mov dword ptr [edx + 0xcdeff], eax
    X86_AT(c, 0xeda43u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEFFu)), c.r[0]);
    // 0eda49  mov dword ptr [edx + 0xcdf03], eax
    X86_AT(c, 0xeda49u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF03u)), c.r[0]);
    // 0eda4f  mov dword ptr [edx + 0xcdf07], eax
    X86_AT(c, 0xeda4fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF07u)), c.r[0]);
    // 0eda55  mov dword ptr [edx + 0xcdf0b], eax
    X86_AT(c, 0xeda55u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF0Bu)), c.r[0]);
    // 0eda5b  mov dword ptr [edx + 0xcdf0f], eax
    X86_AT(c, 0xeda5bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF0Fu)), c.r[0]);
    // 0eda61  mov dword ptr [edx + 0xcdf13], eax
    X86_AT(c, 0xeda61u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF13u)), c.r[0]);
    // 0eda67  mov dword ptr [edx + 0xcdf17], eax
    X86_AT(c, 0xeda67u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF17u)), c.r[0]);
    // 0eda6d  mov dword ptr [edx + 0xcdf1b], eax
    X86_AT(c, 0xeda6du);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF1Bu)), c.r[0]);
    // 0eda73  mov dword ptr [edx + 0xcdf1f], eax
    X86_AT(c, 0xeda73u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF1Fu)), c.r[0]);
    // 0eda79  mov dword ptr [edx + 0xcdf23], eax
    X86_AT(c, 0xeda79u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF23u)), c.r[0]);
    // 0eda7f  mov dword ptr [edx + 0xcdf27], eax
    X86_AT(c, 0xeda7fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF27u)), c.r[0]);
    // 0eda85  mov dword ptr [edx + 0xcdf2b], eax
    X86_AT(c, 0xeda85u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF2Bu)), c.r[0]);
    // 0eda8b  mov dword ptr [edx + 0xcdf2f], eax
    X86_AT(c, 0xeda8bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF2Fu)), c.r[0]);
    // 0eda91  mov dword ptr [edx + 0xcdf33], eax
    X86_AT(c, 0xeda91u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF33u)), c.r[0]);
    // 0eda97  mov eax, edi
    X86_AT(c, 0xeda97u);
    c.r[0] = c.r[7];
    // 0eda99  lea edx, [eax + eax*4]
    X86_AT(c, 0xeda99u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0eda9c  lea edx, [eax + edx*2]
    X86_AT(c, 0xeda9cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0eda9f  shl edx, 5
    X86_AT(c, 0xeda9fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0edaa2  sub edx, eax
    X86_AT(c, 0xedaa2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0edaa4  sub eax, eax
    X86_AT(c, 0xedaa4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0edaa6  mov dword ptr [edx + 0xcdf37], eax
    X86_AT(c, 0xedaa6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF37u)), c.r[0]);
    // 0edaac  mov dword ptr [edx + 0xcdf3b], eax
    X86_AT(c, 0xedaacu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF3Bu)), c.r[0]);
    // 0edab2  mov dword ptr [edx + 0xcdf3f], eax
    X86_AT(c, 0xedab2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF3Fu)), c.r[0]);
    // 0edab8  mov dword ptr [edx + 0xcdf43], eax
    X86_AT(c, 0xedab8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF43u)), c.r[0]);
    // 0edabe  mov dword ptr [edx + 0xcdf47], eax
    X86_AT(c, 0xedabeu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF47u)), c.r[0]);
    // 0edac4  mov dword ptr [edx + 0xcdf4b], eax
    X86_AT(c, 0xedac4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF4Bu)), c.r[0]);
    // 0edaca  mov dword ptr [edx + 0xcdf53], eax
    X86_AT(c, 0xedacau);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF53u)), c.r[0]);
    // 0edad0  mov dword ptr [edx + 0xcdf57], eax
    X86_AT(c, 0xedad0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u)), c.r[0]);
    // 0edad6  mov dword ptr [edx + 0xcdf5b], eax
    X86_AT(c, 0xedad6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF5Bu)), c.r[0]);
    // 0edadc  mov dword ptr [edx + 0xcdf5f], eax
    X86_AT(c, 0xedadcu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF5Fu)), c.r[0]);
    // 0edae2  mov dword ptr [edx + 0xcdf63], eax
    X86_AT(c, 0xedae2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF63u)), c.r[0]);
    // 0edae8  mov dword ptr [edx + 0xcdf67], eax
    X86_AT(c, 0xedae8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF67u)), c.r[0]);
    // 0edaee  mov ecx, 0x14
    X86_AT(c, 0xedaeeu);
    c.r[1] = 0x14u;
    // 0edaf3  mov dword ptr [edx + 0xcdf6b], ecx
    X86_AT(c, 0xedaf3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu)), c.r[1]);
    // 0edaf9  mov dword ptr [edx + 0xcdf6f], ecx
    X86_AT(c, 0xedaf9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu)), c.r[1]);
    // 0edaff  mov dword ptr [edx + 0xcdf73], eax
    X86_AT(c, 0xedaffu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF73u)), c.r[0]);
    // 0edb05  mov dword ptr [edx + 0xcdf77], eax
    X86_AT(c, 0xedb05u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF77u)), c.r[0]);
    // 0edb0b  mov dword ptr [edx + 0xcdf7b], eax
    X86_AT(c, 0xedb0bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF7Bu)), c.r[0]);
    // 0edb11  mov dword ptr [edx + 0xcdf7f], eax
    X86_AT(c, 0xedb11u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF7Fu)), c.r[0]);
    // 0edb17  mov dword ptr [edx + 0xcdf87], eax
    X86_AT(c, 0xedb17u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF87u)), c.r[0]);
    // 0edb1d  mov dword ptr [edx + 0xcdf8b], eax
    X86_AT(c, 0xedb1du);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF8Bu)), c.r[0]);
    // 0edb23  mov dword ptr [edx + 0xcdf8f], eax
    X86_AT(c, 0xedb23u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF8Fu)), c.r[0]);
    // 0edb29  mov dword ptr [edx + 0xcdf93], eax
    X86_AT(c, 0xedb29u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF93u)), c.r[0]);
    // 0edb2f  mov dword ptr [edx + 0xcdf97], eax
    X86_AT(c, 0xedb2fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF97u)), c.r[0]);
    // 0edb35  mov dword ptr [edx + 0xcdf9b], eax
    X86_AT(c, 0xedb35u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF9Bu)), c.r[0]);
    // 0edb3b  jmp 0xed621
    X86_AT(c, 0xedb3bu);
    X86_POLL(c, 0xed621u); goto L_ed621;
L_edb40:
    X86_TICK(c, 9);
    // 0edb40  push 4
    X86_AT(c, 0xedb40u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0edb42  call 0xe7584
    X86_AT(c, 0xedb42u);
    push32(c, 0xedb47u); f_000e7584(c); X86_RET(c, 0xedb47u);
    X86_TICK(c, 9);
    // 0edb47  push 4
    X86_AT(c, 0xedb47u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0edb49  call 0xe693c
    X86_AT(c, 0xedb49u);
    push32(c, 0xedb4eu); f_000e693c(c); X86_RET(c, 0xedb4eu);
    X86_TICK(c, 2);
    // 0edb4e  add esp, 8
    X86_AT(c, 0xedb4eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_edb51:
    X86_TICK(c, 9);
    // 0edb51  push 0
    X86_AT(c, 0xedb51u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0edb53  call 0xe24d8
    X86_AT(c, 0xedb53u);
    push32(c, 0xedb58u); f_000e24d8(c); X86_RET(c, 0xedb58u);
    X86_TICK(c, 12);
    // 0edb58  xchg ebx, eax
    X86_AT(c, 0xedb58u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0edb59  add esp, 4
    X86_AT(c, 0xedb59u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0edb5c  cmp ebx, 0xffffffff
    X86_AT(c, 0xedb5cu);
    (void)x86_sub(c, c.r[3], 0xFFFFFFFFu, 0, 4);
    // 0edb5f  je 0xedb6a
    X86_AT(c, 0xedb5fu);
    if (x86_cc(c, 4)) { goto L_edb6a; }
    X86_TICK(c, 7);
    // 0edb61  and ebx, ebx
    X86_AT(c, 0xedb61u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0edb63  je 0xedb6a
    X86_AT(c, 0xedb63u);
    if (x86_cc(c, 4)) { goto L_edb6a; }
    X86_TICK(c, 7);
    // 0edb65  cmp ebx, 1
    X86_AT(c, 0xedb65u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 0edb68  jne 0xedb51
    X86_AT(c, 0xedb68u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xedb51u); goto L_edb51; }
L_edb6a:
    X86_TICK(c, 9);
    // 0edb6a  push 4
    X86_AT(c, 0xedb6au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0edb6c  call 0xe693c
    X86_AT(c, 0xedb6cu);
    push32(c, 0xedb71u); f_000e693c(c); X86_RET(c, 0xedb71u);
    X86_TICK(c, 9);
    // 0edb71  add esp, 4
    X86_AT(c, 0xedb71u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0edb74  and ebx, ebx
    X86_AT(c, 0xedb74u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0edb76  je 0xedbea
    X86_AT(c, 0xedb76u);
    if (x86_cc(c, 4)) { goto L_edbea; }
    X86_TICK(c, 2);
    // 0edb78  sub esi, esi
    X86_AT(c, 0xedb78u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_edb7a:
    X86_TICK(c, 7);
    // 0edb7a  cmp esi, 9
    X86_AT(c, 0xedb7au);
    (void)x86_sub(c, c.r[6], 0x9u, 0, 4);
    // 0edb7d  jge 0xedb98
    X86_AT(c, 0xedb7du);
    if (x86_cc(c, 13)) { goto L_edb98; }
    X86_TICK(c, 24);
    // 0edb7f  mov eax, edi
    X86_AT(c, 0xedb7fu);
    c.r[0] = c.r[7];
    // 0edb81  lea edx, [eax + eax*4]
    X86_AT(c, 0xedb81u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0edb84  lea edx, [eax + edx*2]
    X86_AT(c, 0xedb84u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0edb87  shl edx, 5
    X86_AT(c, 0xedb87u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0edb8a  sub edx, eax
    X86_AT(c, 0xedb8au);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0edb8c  add edx, esi
    X86_AT(c, 0xedb8cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[6], 0, 4); }
    // 0edb8e  mov byte ptr [edx + 0xcde4d], 0
    X86_AT(c, 0xedb8eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE4Du)), 0x0u);
    // 0edb95  inc esi
    X86_AT(c, 0xedb95u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0edb96  jmp 0xedb7a
    X86_AT(c, 0xedb96u);
    X86_POLL(c, 0xedb7au); goto L_edb7a;
L_edb98:
    X86_TICK(c, 42);
    // 0edb98  mov eax, edi
    X86_AT(c, 0xedb98u);
    c.r[0] = c.r[7];
    // 0edb9a  lea edx, [eax + eax*4]
    X86_AT(c, 0xedb9au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0edb9d  lea edx, [eax + edx*2]
    X86_AT(c, 0xedb9du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0edba0  shl edx, 5
    X86_AT(c, 0xedba0u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0edba3  sub edx, eax
    X86_AT(c, 0xedba3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0edba5  sub eax, eax
    X86_AT(c, 0xedba5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0edba7  mov dword ptr [edx + 0xcde62], eax
    X86_AT(c, 0xedba7u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE62u)), c.r[0]);
    // 0edbad  mov dword ptr [edx + 0xcde66], eax
    X86_AT(c, 0xedbadu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE66u)), c.r[0]);
    // 0edbb3  mov dword ptr [edx + 0xcde6a], eax
    X86_AT(c, 0xedbb3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE6Au)), c.r[0]);
    // 0edbb9  mov dword ptr [edx + 0xcde6e], eax
    X86_AT(c, 0xedbb9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE6Eu)), c.r[0]);
    // 0edbbf  mov dword ptr [edx + 0xcde72], eax
    X86_AT(c, 0xedbbfu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE72u)), c.r[0]);
    // 0edbc5  mov dword ptr [edx + 0xcde76], eax
    X86_AT(c, 0xedbc5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE76u)), c.r[0]);
    // 0edbcb  mov cl, 4
    X86_AT(c, 0xedbcbu);
    s8(c, 1, 0x4u);
    // 0edbcd  mov byte ptr [edx + 0xcde7a], cl
    X86_AT(c, 0xedbcdu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Au)), g8(c, 1));
    // 0edbd3  mov byte ptr [edx + 0xcde7b], cl
    X86_AT(c, 0xedbd3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Bu)), g8(c, 1));
    // 0edbd9  mov byte ptr [edx + 0xcde7c], cl
    X86_AT(c, 0xedbd9u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Cu)), g8(c, 1));
    // 0edbdf  mov dword ptr [edx + 0xcde7d], eax
    X86_AT(c, 0xedbdfu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Du)), c.r[0]);
    // 0edbe5  jmp 0xed621
    X86_AT(c, 0xedbe5u);
    X86_POLL(c, 0xed621u); goto L_ed621;
L_edbea:
    X86_TICK(c, 9);
    // 0edbea  push 0
    X86_AT(c, 0xedbeau);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0edbec  call 0x1017b0
    X86_AT(c, 0xedbecu);
    push32(c, 0xedbf1u); f_001017b0(c); X86_RET(c, 0xedbf1u);
    X86_TICK(c, 29);
    // 0edbf1  mov ecx, edi
    X86_AT(c, 0xedbf1u);
    c.r[1] = c.r[7];
    // 0edbf3  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xedbf3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0edbf6  mov dword ptr [ebp - 8], edx
    X86_AT(c, 0xedbf6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[2]);
    // 0edbf9  lea eax, [ecx + ecx*4]
    X86_AT(c, 0xedbf9u);
    c.r[0] = (uint32_t)(c.r[1] + c.r[1] * 4);
    // 0edbfc  lea eax, [ecx + eax*2]
    X86_AT(c, 0xedbfcu);
    c.r[0] = (uint32_t)(c.r[1] + c.r[0] * 2);
    // 0edbff  shl eax, 5
    X86_AT(c, 0xedbffu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[0] = r; }
    // 0edc02  sub eax, ecx
    X86_AT(c, 0xedc02u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0edc04  push dword ptr [eax + 0xcde72]
    X86_AT(c, 0xedc04u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xCDE72u))); push32(c, v); }
    // 0edc0a  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xedc0au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 0edc0d  call 0x102208
    X86_AT(c, 0xedc0du);
    push32(c, 0xedc12u); f_00102208(c); X86_RET(c, 0xedc12u);
    X86_TICK(c, 17);
    // 0edc12  push dword ptr [ebp - 8]
    X86_AT(c, 0xedc12u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0edc15  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xedc15u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0edc18  call 0x10228c
    X86_AT(c, 0xedc18u);
    push32(c, 0xedc1du); f_0010228c(c); X86_RET(c, 0xedc1du);
    X86_TICK(c, 7);
    // 0edc1d  call 0x101f70
    X86_AT(c, 0xedc1du);
    push32(c, 0xedc22u); f_00101f70(c); X86_RET(c, 0xedc22u);
    X86_TICK(c, 19);
    // 0edc22  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xedc22u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0edc25  movzx edx, byte ptr [eax + 0xcde7b]
    X86_AT(c, 0xedc25u);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xCDE7Bu)));
    // 0edc2c  push edx
    X86_AT(c, 0xedc2cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0edc2d  call 0x102208
    X86_AT(c, 0xedc2du);
    push32(c, 0xedc32u); f_00102208(c); X86_RET(c, 0xedc32u);
    X86_TICK(c, 7);
    // 0edc32  call 0x101f70
    X86_AT(c, 0xedc32u);
    push32(c, 0xedc37u); f_00101f70(c); X86_RET(c, 0xedc37u);
    X86_TICK(c, 7);
    // 0edc37  call 0x102088
    X86_AT(c, 0xedc37u);
    push32(c, 0xedc3cu); f_00102088(c); X86_RET(c, 0xedc3cu);
    X86_TICK(c, 43);
    // 0edc3c  mov edx, dword ptr [ebp - 0x10]
    X86_AT(c, 0xedc3cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0edc3f  mov dword ptr [edx + 0xcdf7f], eax
    X86_AT(c, 0xedc3fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF7Fu)), c.r[0]);
    // 0edc45  mov eax, 0x190
    X86_AT(c, 0xedc45u);
    c.r[0] = 0x190u;
    // 0edc4a  mov dword ptr [edx + 0xcde81], eax
    X86_AT(c, 0xedc4au);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE81u)), c.r[0]);
    // 0edc50  mov dword ptr [edx + 0xcde85], eax
    X86_AT(c, 0xedc50u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE85u)), c.r[0]);
    // 0edc56  mov dword ptr [edx + 0xcde91], eax
    X86_AT(c, 0xedc56u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE91u)), c.r[0]);
    // 0edc5c  mov dword ptr [edx + 0xcde89], 0
    X86_AT(c, 0xedc5cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE89u)), 0x0u);
    // 0edc66  mov dword ptr [edx + 0xcde8d], 0x9c40
    X86_AT(c, 0xedc66u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE8Du)), 0x9C40u);
    // 0edc70  mov al, 0x41
    X86_AT(c, 0xedc70u);
    s8(c, 0, 0x41u);
    // 0edc72  mov byte ptr [edx + 0xcdebe], al
    X86_AT(c, 0xedc72u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEBEu)), g8(c, 0));
    // 0edc78  mov dword ptr [edx + 0xcdf77], 0
    X86_AT(c, 0xedc78u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF77u)), 0x0u);
    // 0edc82  mov byte ptr [edx + 0xcdea1], al
    X86_AT(c, 0xedc82u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEA1u)), g8(c, 0));
    // 0edc88  mov dword ptr [edx + 0xcdf7b], 0
    X86_AT(c, 0xedc88u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF7Bu)), 0x0u);
    // 0edc92  mov eax, 0x14
    X86_AT(c, 0xedc92u);
    c.r[0] = 0x14u;
    // 0edc97  mov dword ptr [edx + 0xcdf6b], eax
    X86_AT(c, 0xedc97u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu)), c.r[0]);
    // 0edc9d  mov dword ptr [edx + 0xcdf6f], eax
    X86_AT(c, 0xedc9du);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu)), c.r[0]);
    // 0edca3  mov dword ptr [0xceca0], edi
    X86_AT(c, 0xedca3u);
    wr32((c.sbase[3] + (uint32_t)(0xCECA0u)), c.r[7]);
    // 0edca9  call 0xeb174
    X86_AT(c, 0xedca9u);
    push32(c, 0xedcaeu); f_000eb174(c); X86_RET(c, 0xedcaeu);
    X86_TICK(c, 7);
    // 0edcae  call 0xe3a20
    X86_AT(c, 0xedcaeu);
    push32(c, 0xedcb3u); f_000e3a20(c); X86_RET(c, 0xedcb3u);
    X86_TICK(c, 7);
    // 0edcb3  call 0xeb990
    X86_AT(c, 0xedcb3u);
    push32(c, 0xedcb8u); f_000eb990(c); X86_RET(c, 0xedcb8u);
    X86_TICK(c, 9);
    // 0edcb8  push 4
    X86_AT(c, 0xedcb8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0edcba  call 0xe693c
    X86_AT(c, 0xedcbau);
    push32(c, 0xedcbfu); f_000e693c(c); X86_RET(c, 0xedcbfu);
    X86_TICK(c, 13);
    // 0edcbf  push 3
    X86_AT(c, 0xedcbfu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0edcc1  push 0xf
    X86_AT(c, 0xedcc1u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0edcc3  push 4
    X86_AT(c, 0xedcc3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0edcc5  call 0xe7260
    X86_AT(c, 0xedcc5u);
    push32(c, 0xedccau); f_000e7260(c); X86_RET(c, 0xedccau);
    X86_TICK(c, 11);
    // 0edcca  push 0x375c
    X86_AT(c, 0xedccau);
    { uint32_t v = 0x375Cu; push32(c, v); }
    // 0edccf  push 4
    X86_AT(c, 0xedccfu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0edcd1  call 0xe6cb0
    X86_AT(c, 0xedcd1u);
    push32(c, 0xedcd6u); f_000e6cb0(c); X86_RET(c, 0xedcd6u);
    X86_TICK(c, 13);
    // 0edcd6  push 3
    X86_AT(c, 0xedcd6u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0edcd8  push 0xf
    X86_AT(c, 0xedcd8u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0edcda  push 4
    X86_AT(c, 0xedcdau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0edcdc  call 0xe7260
    X86_AT(c, 0xedcdcu);
    push32(c, 0xedce1u); f_000e7260(c); X86_RET(c, 0xedce1u);
    X86_TICK(c, 17);
    // 0edce1  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xedce1u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0edce4  add eax, 0xcde4d
    X86_AT(c, 0xedce4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xCDE4Du, 0, 4); }
    // 0edce9  push eax
    X86_AT(c, 0xedce9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0edcea  push 4
    X86_AT(c, 0xedceau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0edcec  call 0xe70ec
    X86_AT(c, 0xedcecu);
    push32(c, 0xedcf1u); f_000e70ec(c); X86_RET(c, 0xedcf1u);
    X86_TICK(c, 13);
    // 0edcf1  add esp, 0x30
    X86_AT(c, 0xedcf1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0edcf4  push 0x3794
    X86_AT(c, 0xedcf4u);
    { uint32_t v = 0x3794u; push32(c, v); }
    // 0edcf9  push 4
    X86_AT(c, 0xedcf9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0edcfb  call 0xe5654
    X86_AT(c, 0xedcfbu);
    push32(c, 0xedd00u); f_000e5654(c); X86_RET(c, 0xedd00u);
    X86_TICK(c, 9);
    // 0edd00  push 0x37c0
    X86_AT(c, 0xedd00u);
    { uint32_t v = 0x37C0u; push32(c, v); }
    // 0edd05  call 0xe75f8
    X86_AT(c, 0xedd05u);
    push32(c, 0xedd0au); f_000e75f8(c); X86_RET(c, 0xedd0au);
    X86_TICK(c, 2);
    // 0edd0a  add esp, 0xc
    X86_AT(c, 0xedd0au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_edd0d:
    X86_TICK(c, 9);
    // 0edd0d  push 4
    X86_AT(c, 0xedd0du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0edd0f  call 0xe4b60
    X86_AT(c, 0xedd0fu);
    push32(c, 0xedd14u); f_000e4b60(c); X86_RET(c, 0xedd14u);
    X86_TICK(c, 9);
    // 0edd14  add esp, 4
    X86_AT(c, 0xedd14u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0edd17  and al, al
    X86_AT(c, 0xedd17u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0edd19  je 0xedd0d
    X86_AT(c, 0xedd19u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xedd0du); goto L_edd0d; }
L_edd1b:
    X86_TICK(c, 9);
    // 0edd1b  push 2
    X86_AT(c, 0xedd1bu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0edd1d  call 0xe6c68
    X86_AT(c, 0xedd1du);
    push32(c, 0xedd22u); f_000e6c68(c); X86_RET(c, 0xedd22u);
    X86_TICK(c, 9);
    // 0edd22  push 4
    X86_AT(c, 0xedd22u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0edd24  call 0xe693c
    X86_AT(c, 0xedd24u);
    push32(c, 0xedd29u); f_000e693c(c); X86_RET(c, 0xedd29u);
    X86_TICK(c, 9);
    // 0edd29  add esp, 8
    X86_AT(c, 0xedd29u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0edd2c  jmp 0xed621
    X86_AT(c, 0xedd2cu);
    X86_POLL(c, 0xed621u); goto L_ed621;
L_edd31:
    X86_TICK(c, 28);
    // 0edd31  pop edi
    X86_AT(c, 0xedd31u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0edd32  pop esi
    X86_AT(c, 0xedd32u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0edd33  pop ebx
    X86_AT(c, 0xedd33u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0edd34  leave 
    X86_AT(c, 0xedd34u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0edd35  ret 
    X86_AT(c, 0xedd35u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xed610u, "ran off the end of a function");
}
}
