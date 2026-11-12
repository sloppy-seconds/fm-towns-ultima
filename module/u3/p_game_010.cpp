#include "p_game_funcs.h"
namespace p_game {
void f_000c2f8f(X86Cpu& c) {
    goto L_c2f8f;
L_c27a0:
    X86_TICK(c, 11);
    // 0c27a0  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xc27a0u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c27a3  cmp edx, 8
    X86_AT(c, 0xc27a3u);
    (void)x86_sub(c, c.r[2], 0x8u, 0, 4);
    // 0c27a6  ja 0xc27a0
    X86_AT(c, 0xc27a6u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0xc27a0u); goto L_c27a0; }
    X86_TICK(c, 7);
    // 0c27a8  jmp dword ptr cs:[edx*4 + 0xc27b0]
    X86_AT(c, 0xc27a8u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC27B0u)));
      switch (t) {
      case 0xc27d4u: goto L_c27d4;
      case 0xc2891u: goto L_c2891;
      case 0xc2a5bu: goto L_c2a5b;
      case 0xc2c9bu: goto L_c2c9b;
      case 0xc2f97u: goto L_c2f97;
      case 0xc3134u: goto L_c3134;
      case 0xc328fu: goto L_c328f;
      case 0xc33eau: goto L_c33ea;
      case 0xc354bu: goto L_c354b;
      default: x86_jump(c, t); return; } }
L_c27d4:
    X86_TICK(c, 13);
    // 0c27d4  push 6
    X86_AT(c, 0xc27d4u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c27d6  push 0x28
    X86_AT(c, 0xc27d6u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c27d8  push 4
    X86_AT(c, 0xc27d8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c27da  call 0xbc174
    X86_AT(c, 0xc27dau);
    push32(c, 0xc27dfu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc27dfu);
    X86_TICK(c, 11);
    // 0c27df  push 0x339c
    X86_AT(c, 0xc27dfu);
    { uint32_t v = 0x339Cu; push32(c, v); }
    // 0c27e4  push 4
    X86_AT(c, 0xc27e4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c27e6  call 0xbbba4
    X86_AT(c, 0xc27e6u);
    push32(c, 0xc27ebu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc27ebu);
    X86_TICK(c, 13);
    // 0c27eb  push 6
    X86_AT(c, 0xc27ebu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c27ed  push 0x28
    X86_AT(c, 0xc27edu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c27ef  push 4
    X86_AT(c, 0xc27efu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c27f1  call 0xbc174
    X86_AT(c, 0xc27f1u);
    push32(c, 0xc27f6u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc27f6u);
    X86_TICK(c, 15);
    // 0c27f6  push 9
    X86_AT(c, 0xc27f6u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0c27f8  lea eax, [ebp - 0x18]
    X86_AT(c, 0xc27f8u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFE8u);
    // 0c27fb  push eax
    X86_AT(c, 0xc27fbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c27fc  push 4
    X86_AT(c, 0xc27fcu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c27fe  call 0xb9d30
    X86_AT(c, 0xc27feu);
    push32(c, 0xc2803u); x86_call_known(c, 0xb9d30u, f_000b9d30); X86_RET(c, 0xc2803u);
    X86_TICK(c, 9);
    // 0c2803  add esp, 0x2c
    X86_AT(c, 0xc2803u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0c2806  and eax, eax
    X86_AT(c, 0xc2806u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c2808  je 0xc350e
    X86_AT(c, 0xc2808u);
    if (x86_cc(c, 4)) { goto L_c350e; }
    X86_TICK(c, 2);
    // 0c280e  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xc280eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
L_c2815:
    X86_TICK(c, 16);
    // 0c2815  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xc2815u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0c2818  cmp byte ptr [ebp + eax*1 - 0x18], 0x20
    X86_AT(c, 0xc2818u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFFE8u))), 0x20u, 0, 1);
    // 0c281d  jne 0xc2824
    X86_AT(c, 0xc281du);
    if (x86_cc(c, 5)) { goto L_c2824; }
    X86_TICK(c, 13);
    // 0c281f  inc dword ptr [ebp - 8]
    X86_AT(c, 0xc281fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0c2822  jmp 0xc2815
    X86_AT(c, 0xc2822u);
    X86_POLL(c, 0xc2815u); goto L_c2815;
L_c2824:
    X86_TICK(c, 2);
    // 0c2824  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xc2824u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
L_c282b:
    X86_TICK(c, 29);
    // 0c282b  lea eax, [edi + edi*2]
    X86_AT(c, 0xc282bu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c282e  lea edx, [eax*8]
    X86_AT(c, 0xc282eu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c2835  lea edx, [eax + edx*8]
    X86_AT(c, 0xc2835u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c2838  add edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xc2838u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 4); }
    // 0c283b  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xc283bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0c283e  mov cl, byte ptr [ebp + eax*1 - 0x18]
    X86_AT(c, 0xc283eu);
    s8(c, 1, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFFE8u))));
    // 0c2842  mov byte ptr [edx + 0xa4dac], cl
    X86_AT(c, 0xc2842u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DACu)), g8(c, 1));
    // 0c2848  and cl, cl
    X86_AT(c, 0xc2848u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & g8(c, 1), 1)); }
    // 0c284a  je 0xc2854
    X86_AT(c, 0xc284au);
    if (x86_cc(c, 4)) { goto L_c2854; }
    X86_TICK(c, 19);
    // 0c284c  inc dword ptr [ebp - 8]
    X86_AT(c, 0xc284cu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0c284f  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0xc284fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0c2852  jmp 0xc282b
    X86_AT(c, 0xc2852u);
    X86_POLL(c, 0xc282bu); goto L_c282b;
L_c2854:
    X86_TICK(c, 9);
    // 0c2854  push 4
    X86_AT(c, 0xc2854u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2856  call 0xbb6b0
    X86_AT(c, 0xc2856u);
    push32(c, 0xc285bu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc285bu);
    X86_TICK(c, 13);
    // 0c285b  push 6
    X86_AT(c, 0xc285bu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c285d  push 0x28
    X86_AT(c, 0xc285du);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c285f  push 4
    X86_AT(c, 0xc285fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2861  call 0xbc174
    X86_AT(c, 0xc2861u);
    push32(c, 0xc2866u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2866u);
    X86_TICK(c, 19);
    // 0c2866  lea eax, [edi + edi*2]
    X86_AT(c, 0xc2866u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c2869  lea edx, [eax*8]
    X86_AT(c, 0xc2869u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c2870  lea edx, [eax + edx*8]
    X86_AT(c, 0xc2870u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c2873  lea eax, [edx*1 + 0xa4dac]
    X86_AT(c, 0xc2873u);
    c.r[0] = (uint32_t)(c.r[2] + 0xA4DACu);
    // 0c287a  push eax
    X86_AT(c, 0xc287au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c287b  push 4
    X86_AT(c, 0xc287bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c287d  call 0xbbfe0
    X86_AT(c, 0xc287du);
    push32(c, 0xc2882u); x86_call_known(c, 0xbbfe0u, f_000bbfe0); X86_RET(c, 0xc2882u);
    X86_TICK(c, 11);
    // 0c2882  mov dword ptr [ebp - 4], 1
    X86_AT(c, 0xc2882u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x1u);
    // 0c2889  add esp, 0x18
    X86_AT(c, 0xc2889u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0c288c  jmp 0xc27a0
    X86_AT(c, 0xc288cu);
    X86_POLL(c, 0xc27a0u); goto L_c27a0;
L_c2891:
    X86_TICK(c, 27);
    // 0c2891  push 0xa
    X86_AT(c, 0xc2891u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0c2893  push 0xf
    X86_AT(c, 0xc2893u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0c2895  push 0xb
    X86_AT(c, 0xc2895u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c2897  push 2
    X86_AT(c, 0xc2897u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c2899  push 0x19
    X86_AT(c, 0xc2899u);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0c289b  push 0x34
    X86_AT(c, 0xc289bu);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0c289d  push 0xd6
    X86_AT(c, 0xc289du);
    { uint32_t v = 0xD6u; push32(c, v); }
    // 0c28a2  push 0x12c
    X86_AT(c, 0xc28a2u);
    { uint32_t v = 0x12Cu; push32(c, v); }
    // 0c28a7  push 0xd2
    X86_AT(c, 0xc28a7u);
    { uint32_t v = 0xD2u; push32(c, v); }
    // 0c28ac  push 5
    X86_AT(c, 0xc28acu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c28ae  call 0xbb5cc
    X86_AT(c, 0xc28aeu);
    push32(c, 0xc28b3u); x86_call_known(c, 0xbb5ccu, f_000bb5cc); X86_RET(c, 0xc28b3u);
    X86_TICK(c, 9);
    // 0c28b3  push 5
    X86_AT(c, 0xc28b3u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c28b5  call 0xbb6b0
    X86_AT(c, 0xc28b5u);
    push32(c, 0xc28bau); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc28bau);
    X86_TICK(c, 9);
    // 0c28ba  push 5
    X86_AT(c, 0xc28bau);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c28bc  call 0xbb710
    X86_AT(c, 0xc28bcu);
    push32(c, 0xc28c1u); x86_call_known(c, 0xbb710u, f_000bb710); X86_RET(c, 0xc28c1u);
    X86_TICK(c, 9);
    // 0c28c1  push 5
    X86_AT(c, 0xc28c1u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c28c3  call 0xbb6b0
    X86_AT(c, 0xc28c3u);
    push32(c, 0xc28c8u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc28c8u);
    X86_TICK(c, 13);
    // 0c28c8  push 0
    X86_AT(c, 0xc28c8u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c28ca  push 4
    X86_AT(c, 0xc28cau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c28cc  push 5
    X86_AT(c, 0xc28ccu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c28ce  call 0xbc174
    X86_AT(c, 0xc28ceu);
    push32(c, 0xc28d3u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc28d3u);
    X86_TICK(c, 13);
    // 0c28d3  add esp, 0x40
    X86_AT(c, 0xc28d3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0c28d6  push 0x33b4
    X86_AT(c, 0xc28d6u);
    { uint32_t v = 0x33B4u; push32(c, v); }
    // 0c28db  push 5
    X86_AT(c, 0xc28dbu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c28dd  call 0xba428
    X86_AT(c, 0xc28ddu);
    push32(c, 0xc28e2u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc28e2u);
    X86_TICK(c, 13);
    // 0c28e2  push 1
    X86_AT(c, 0xc28e2u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c28e4  push 6
    X86_AT(c, 0xc28e4u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c28e6  push 5
    X86_AT(c, 0xc28e6u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c28e8  call 0xbc174
    X86_AT(c, 0xc28e8u);
    push32(c, 0xc28edu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc28edu);
    X86_TICK(c, 11);
    // 0c28ed  push 0x33c8
    X86_AT(c, 0xc28edu);
    { uint32_t v = 0x33C8u; push32(c, v); }
    // 0c28f2  push 5
    X86_AT(c, 0xc28f2u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c28f4  call 0xba428
    X86_AT(c, 0xc28f4u);
    push32(c, 0xc28f9u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc28f9u);
    X86_TICK(c, 13);
    // 0c28f9  push 2
    X86_AT(c, 0xc28f9u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c28fb  push 6
    X86_AT(c, 0xc28fbu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c28fd  push 5
    X86_AT(c, 0xc28fdu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c28ff  call 0xbc174
    X86_AT(c, 0xc28ffu);
    push32(c, 0xc2904u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2904u);
    X86_TICK(c, 11);
    // 0c2904  push 0x33dc
    X86_AT(c, 0xc2904u);
    { uint32_t v = 0x33DCu; push32(c, v); }
    // 0c2909  push 5
    X86_AT(c, 0xc2909u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c290b  call 0xba428
    X86_AT(c, 0xc290bu);
    push32(c, 0xc2910u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc2910u);
    X86_TICK(c, 9);
    // 0c2910  push 4
    X86_AT(c, 0xc2910u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2912  call 0xbb6b0
    X86_AT(c, 0xc2912u);
    push32(c, 0xc2917u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc2917u);
    X86_TICK(c, 13);
    // 0c2917  push 7
    X86_AT(c, 0xc2917u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c2919  push 0x28
    X86_AT(c, 0xc2919u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c291b  push 4
    X86_AT(c, 0xc291bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c291d  call 0xbc174
    X86_AT(c, 0xc291du);
    push32(c, 0xc2922u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2922u);
    X86_TICK(c, 13);
    // 0c2922  add esp, 0x40
    X86_AT(c, 0xc2922u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0c2925  push 0x33f4
    X86_AT(c, 0xc2925u);
    { uint32_t v = 0x33F4u; push32(c, v); }
    // 0c292a  push 4
    X86_AT(c, 0xc292au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c292c  call 0xbbba4
    X86_AT(c, 0xc292cu);
    push32(c, 0xc2931u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc2931u);
    X86_TICK(c, 2);
    // 0c2931  add esp, 8
    X86_AT(c, 0xc2931u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c2934:
    X86_TICK(c, 13);
    // 0c2934  push 7
    X86_AT(c, 0xc2934u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c2936  push 0x28
    X86_AT(c, 0xc2936u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c2938  push 4
    X86_AT(c, 0xc2938u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c293a  call 0xbc174
    X86_AT(c, 0xc293au);
    push32(c, 0xc293fu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc293fu);
    X86_TICK(c, 9);
    // 0c293f  push 4
    X86_AT(c, 0xc293fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2941  call 0xb90f0
    X86_AT(c, 0xc2941u);
    push32(c, 0xc2946u); x86_call_known(c, 0xb90f0u, f_000b90f0); X86_RET(c, 0xc2946u);
    X86_TICK(c, 12);
    // 0c2946  xchg ebx, eax
    X86_AT(c, 0xc2946u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c2947  add esp, 0x10
    X86_AT(c, 0xc2947u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c294a  cmp bl, 5
    X86_AT(c, 0xc294au);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0c294d  je 0xc29a9
    X86_AT(c, 0xc294du);
    if (x86_cc(c, 4)) { goto L_c29a9; }
    X86_TICK(c, 7);
    // 0c294f  cmp bl, 6
    X86_AT(c, 0xc294fu);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0c2952  je 0xc29a9
    X86_AT(c, 0xc2952u);
    if (x86_cc(c, 4)) { goto L_c29a9; }
    X86_TICK(c, 7);
    // 0c2954  cmp bl, 1
    X86_AT(c, 0xc2954u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c2957  je 0xc29a9
    X86_AT(c, 0xc2957u);
    if (x86_cc(c, 4)) { goto L_c29a9; }
    X86_TICK(c, 17);
    // 0c2959  lea eax, [ebp - 0xd]
    X86_AT(c, 0xc2959u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF3u);
    // 0c295c  push eax
    X86_AT(c, 0xc295cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c295d  push ebx
    X86_AT(c, 0xc295du);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c295e  push 3
    X86_AT(c, 0xc295eu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c2960  push 0xa804c
    X86_AT(c, 0xc2960u);
    { uint32_t v = 0xA804Cu; push32(c, v); }
    // 0c2965  call 0xba1b4
    X86_AT(c, 0xc2965u);
    push32(c, 0xc296au); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc296au);
    X86_TICK(c, 11);
    // 0c296a  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xc296au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0c296d  add esp, 0x10
    X86_AT(c, 0xc296du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c2970  and eax, eax
    X86_AT(c, 0xc2970u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c2972  je 0xc2934
    X86_AT(c, 0xc2972u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc2934u); goto L_c2934; }
    X86_TICK(c, 9);
    // 0c2974  push 4
    X86_AT(c, 0xc2974u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2976  call 0xbb6b0
    X86_AT(c, 0xc2976u);
    push32(c, 0xc297bu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc297bu);
    X86_TICK(c, 13);
    // 0c297b  push 7
    X86_AT(c, 0xc297bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c297d  push 0x28
    X86_AT(c, 0xc297du);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c297f  push 4
    X86_AT(c, 0xc297fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2981  call 0xbc174
    X86_AT(c, 0xc2981u);
    push32(c, 0xc2986u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2986u);
    X86_TICK(c, 14);
    // 0c2986  push dword ptr [ebp - 0x1c]
    X86_AT(c, 0xc2986u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))); push32(c, v); }
    // 0c2989  push 4
    X86_AT(c, 0xc2989u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c298b  call 0xbbba4
    X86_AT(c, 0xc298bu);
    push32(c, 0xc2990u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc2990u);
    X86_TICK(c, 14);
    // 0c2990  lea eax, [edi + edi*2]
    X86_AT(c, 0xc2990u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c2993  lea edx, [eax*8]
    X86_AT(c, 0xc2993u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c299a  lea edx, [eax + edx*8]
    X86_AT(c, 0xc299au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c299d  mov al, byte ptr [ebp - 0xd]
    X86_AT(c, 0xc299du);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))));
    // 0c29a0  mov byte ptr [edx + 0xa4ddc], al
    X86_AT(c, 0xc29a0u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDCu)), g8(c, 0));
    // 0c29a6  add esp, 0x18
    X86_AT(c, 0xc29a6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_c29a9:
    X86_TICK(c, 7);
    // 0c29a9  cmp bl, 5
    X86_AT(c, 0xc29a9u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0c29ac  jne 0xc29f3
    X86_AT(c, 0xc29acu);
    if (x86_cc(c, 5)) { goto L_c29f3; }
    X86_TICK(c, 13);
    // 0c29ae  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xc29aeu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0c29b5  push 0xd
    X86_AT(c, 0xc29b5u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0c29b7  push 5
    X86_AT(c, 0xc29b7u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c29b9  call 0xbba64
    X86_AT(c, 0xc29b9u);
    push32(c, 0xc29beu); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xc29beu);
    X86_TICK(c, 27);
    // 0c29be  lea eax, [ebp - 0xd]
    X86_AT(c, 0xc29beu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF3u);
    // 0c29c1  push eax
    X86_AT(c, 0xc29c1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c29c2  lea eax, [edi + edi*2]
    X86_AT(c, 0xc29c2u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c29c5  lea edx, [eax*8]
    X86_AT(c, 0xc29c5u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c29cc  lea edx, [eax + edx*8]
    X86_AT(c, 0xc29ccu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c29cf  mov al, byte ptr [edx + 0xa4ddc]
    X86_AT(c, 0xc29cfu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDCu))));
    // 0c29d5  push eax
    X86_AT(c, 0xc29d5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c29d6  push 3
    X86_AT(c, 0xc29d6u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c29d8  push 0xa804c
    X86_AT(c, 0xc29d8u);
    { uint32_t v = 0xA804Cu; push32(c, v); }
    // 0c29dd  call 0xba1b4
    X86_AT(c, 0xc29ddu);
    push32(c, 0xc29e2u); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc29e2u);
    X86_TICK(c, 11);
    // 0c29e2  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xc29e2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0c29e5  push 4
    X86_AT(c, 0xc29e5u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c29e7  call 0xbb6b0
    X86_AT(c, 0xc29e7u);
    push32(c, 0xc29ecu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc29ecu);
    X86_TICK(c, 9);
    // 0c29ec  push 7
    X86_AT(c, 0xc29ecu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c29ee  jmp 0xc2c02
    X86_AT(c, 0xc29eeu);
    goto L_c2c02;
L_c29f3:
    X86_TICK(c, 7);
    // 0c29f3  cmp bl, 6
    X86_AT(c, 0xc29f3u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0c29f6  jne 0xc2a3d
    X86_AT(c, 0xc29f6u);
    if (x86_cc(c, 5)) { goto L_c2a3d; }
    X86_TICK(c, 13);
    // 0c29f8  mov dword ptr [ebp - 4], 2
    X86_AT(c, 0xc29f8u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x2u);
    // 0c29ff  push 0xd
    X86_AT(c, 0xc29ffu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0c2a01  push 5
    X86_AT(c, 0xc2a01u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2a03  call 0xbba64
    X86_AT(c, 0xc2a03u);
    push32(c, 0xc2a08u); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xc2a08u);
    X86_TICK(c, 27);
    // 0c2a08  lea eax, [ebp - 0xd]
    X86_AT(c, 0xc2a08u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF3u);
    // 0c2a0b  push eax
    X86_AT(c, 0xc2a0bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c2a0c  lea eax, [edi + edi*2]
    X86_AT(c, 0xc2a0cu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c2a0f  lea edx, [eax*8]
    X86_AT(c, 0xc2a0fu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c2a16  lea edx, [eax + edx*8]
    X86_AT(c, 0xc2a16u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c2a19  mov al, byte ptr [edx + 0xa4ddc]
    X86_AT(c, 0xc2a19u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDCu))));
    // 0c2a1f  push eax
    X86_AT(c, 0xc2a1fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c2a20  push 3
    X86_AT(c, 0xc2a20u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c2a22  push 0xa804c
    X86_AT(c, 0xc2a22u);
    { uint32_t v = 0xA804Cu; push32(c, v); }
    // 0c2a27  call 0xba1b4
    X86_AT(c, 0xc2a27u);
    push32(c, 0xc2a2cu); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc2a2cu);
    X86_TICK(c, 11);
    // 0c2a2c  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xc2a2cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0c2a2f  push 4
    X86_AT(c, 0xc2a2fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2a31  call 0xbb6b0
    X86_AT(c, 0xc2a31u);
    push32(c, 0xc2a36u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc2a36u);
    X86_TICK(c, 9);
    // 0c2a36  push 7
    X86_AT(c, 0xc2a36u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c2a38  jmp 0xc2c55
    X86_AT(c, 0xc2a38u);
    goto L_c2c55;
L_c2a3d:
    X86_TICK(c, 7);
    // 0c2a3d  cmp bl, 1
    X86_AT(c, 0xc2a3du);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c2a40  je 0xc2f2f
    X86_AT(c, 0xc2a40u);
    if (x86_cc(c, 4)) { goto L_c2f2f; }
    X86_TICK(c, 11);
    // 0c2a46  push 0xd
    X86_AT(c, 0xc2a46u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0c2a48  push 5
    X86_AT(c, 0xc2a48u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2a4a  call 0xbba64
    X86_AT(c, 0xc2a4au);
    push32(c, 0xc2a4fu); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xc2a4fu);
    X86_TICK(c, 9);
    // 0c2a4f  mov dword ptr [ebp - 4], 2
    X86_AT(c, 0xc2a4fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x2u);
    // 0c2a56  jmp 0xc2f8f
    X86_AT(c, 0xc2a56u);
    goto L_c2f8f;
L_c2a5b:
    X86_TICK(c, 27);
    // 0c2a5b  push 0xa
    X86_AT(c, 0xc2a5bu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0c2a5d  push 0xf
    X86_AT(c, 0xc2a5du);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0c2a5f  push 0xb
    X86_AT(c, 0xc2a5fu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c2a61  push 5
    X86_AT(c, 0xc2a61u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2a63  push 0x19
    X86_AT(c, 0xc2a63u);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0c2a65  push 0x66
    X86_AT(c, 0xc2a65u);
    { uint32_t v = 0x66u; push32(c, v); }
    // 0c2a67  push 0xd6
    X86_AT(c, 0xc2a67u);
    { uint32_t v = 0xD6u; push32(c, v); }
    // 0c2a6c  push 0x12c
    X86_AT(c, 0xc2a6cu);
    { uint32_t v = 0x12Cu; push32(c, v); }
    // 0c2a71  push 0xc8
    X86_AT(c, 0xc2a71u);
    { uint32_t v = 0xC8u; push32(c, v); }
    // 0c2a76  push 5
    X86_AT(c, 0xc2a76u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2a78  call 0xbb5cc
    X86_AT(c, 0xc2a78u);
    push32(c, 0xc2a7du); x86_call_known(c, 0xbb5ccu, f_000bb5cc); X86_RET(c, 0xc2a7du);
    X86_TICK(c, 9);
    // 0c2a7d  push 5
    X86_AT(c, 0xc2a7du);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2a7f  call 0xbb6b0
    X86_AT(c, 0xc2a7fu);
    push32(c, 0xc2a84u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc2a84u);
    X86_TICK(c, 9);
    // 0c2a84  push 5
    X86_AT(c, 0xc2a84u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2a86  call 0xbb710
    X86_AT(c, 0xc2a86u);
    push32(c, 0xc2a8bu); x86_call_known(c, 0xbb710u, f_000bb710); X86_RET(c, 0xc2a8bu);
    X86_TICK(c, 9);
    // 0c2a8b  push 5
    X86_AT(c, 0xc2a8bu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2a8d  call 0xbb6b0
    X86_AT(c, 0xc2a8du);
    push32(c, 0xc2a92u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc2a92u);
    X86_TICK(c, 13);
    // 0c2a92  push 0
    X86_AT(c, 0xc2a92u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c2a94  push 4
    X86_AT(c, 0xc2a94u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2a96  push 5
    X86_AT(c, 0xc2a96u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2a98  call 0xbc174
    X86_AT(c, 0xc2a98u);
    push32(c, 0xc2a9du); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2a9du);
    X86_TICK(c, 13);
    // 0c2a9d  add esp, 0x40
    X86_AT(c, 0xc2a9du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0c2aa0  push 0x3404
    X86_AT(c, 0xc2aa0u);
    { uint32_t v = 0x3404u; push32(c, v); }
    // 0c2aa5  push 5
    X86_AT(c, 0xc2aa5u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2aa7  call 0xba428
    X86_AT(c, 0xc2aa7u);
    push32(c, 0xc2aacu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc2aacu);
    X86_TICK(c, 13);
    // 0c2aac  push 1
    X86_AT(c, 0xc2aacu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c2aae  push 6
    X86_AT(c, 0xc2aaeu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c2ab0  push 5
    X86_AT(c, 0xc2ab0u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2ab2  call 0xbc174
    X86_AT(c, 0xc2ab2u);
    push32(c, 0xc2ab7u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2ab7u);
    X86_TICK(c, 11);
    // 0c2ab7  push 0x341c
    X86_AT(c, 0xc2ab7u);
    { uint32_t v = 0x341Cu; push32(c, v); }
    // 0c2abc  push 5
    X86_AT(c, 0xc2abcu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2abe  call 0xba428
    X86_AT(c, 0xc2abeu);
    push32(c, 0xc2ac3u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc2ac3u);
    X86_TICK(c, 13);
    // 0c2ac3  push 2
    X86_AT(c, 0xc2ac3u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c2ac5  push 6
    X86_AT(c, 0xc2ac5u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c2ac7  push 5
    X86_AT(c, 0xc2ac7u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2ac9  call 0xbc174
    X86_AT(c, 0xc2ac9u);
    push32(c, 0xc2aceu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2aceu);
    X86_TICK(c, 11);
    // 0c2ace  push 0x3434
    X86_AT(c, 0xc2aceu);
    { uint32_t v = 0x3434u; push32(c, v); }
    // 0c2ad3  push 5
    X86_AT(c, 0xc2ad3u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2ad5  call 0xba428
    X86_AT(c, 0xc2ad5u);
    push32(c, 0xc2adau); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc2adau);
    X86_TICK(c, 13);
    // 0c2ada  push 3
    X86_AT(c, 0xc2adau);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c2adc  push 6
    X86_AT(c, 0xc2adcu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c2ade  push 5
    X86_AT(c, 0xc2adeu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2ae0  call 0xbc174
    X86_AT(c, 0xc2ae0u);
    push32(c, 0xc2ae5u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2ae5u);
    X86_TICK(c, 13);
    // 0c2ae5  add esp, 0x3c
    X86_AT(c, 0xc2ae5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c2ae8  push 0x3448
    X86_AT(c, 0xc2ae8u);
    { uint32_t v = 0x3448u; push32(c, v); }
    // 0c2aed  push 5
    X86_AT(c, 0xc2aedu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2aef  call 0xba428
    X86_AT(c, 0xc2aefu);
    push32(c, 0xc2af4u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc2af4u);
    X86_TICK(c, 13);
    // 0c2af4  push 4
    X86_AT(c, 0xc2af4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2af6  push 6
    X86_AT(c, 0xc2af6u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c2af8  push 5
    X86_AT(c, 0xc2af8u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2afa  call 0xbc174
    X86_AT(c, 0xc2afau);
    push32(c, 0xc2affu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2affu);
    X86_TICK(c, 11);
    // 0c2aff  push 0x3464
    X86_AT(c, 0xc2affu);
    { uint32_t v = 0x3464u; push32(c, v); }
    // 0c2b04  push 5
    X86_AT(c, 0xc2b04u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2b06  call 0xba428
    X86_AT(c, 0xc2b06u);
    push32(c, 0xc2b0bu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc2b0bu);
    X86_TICK(c, 13);
    // 0c2b0b  push 5
    X86_AT(c, 0xc2b0bu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2b0d  push 6
    X86_AT(c, 0xc2b0du);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c2b0f  push 5
    X86_AT(c, 0xc2b0fu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2b11  call 0xbc174
    X86_AT(c, 0xc2b11u);
    push32(c, 0xc2b16u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2b16u);
    X86_TICK(c, 13);
    // 0c2b16  add esp, 0x28
    X86_AT(c, 0xc2b16u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0c2b19  push 0x3480
    X86_AT(c, 0xc2b19u);
    { uint32_t v = 0x3480u; push32(c, v); }
    // 0c2b1e  push 5
    X86_AT(c, 0xc2b1eu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2b20  call 0xba428
    X86_AT(c, 0xc2b20u);
    push32(c, 0xc2b25u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc2b25u);
    X86_TICK(c, 9);
    // 0c2b25  push 4
    X86_AT(c, 0xc2b25u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2b27  call 0xbb6b0
    X86_AT(c, 0xc2b27u);
    push32(c, 0xc2b2cu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc2b2cu);
    X86_TICK(c, 13);
    // 0c2b2c  push 8
    X86_AT(c, 0xc2b2cu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0c2b2e  push 0x28
    X86_AT(c, 0xc2b2eu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c2b30  push 4
    X86_AT(c, 0xc2b30u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2b32  call 0xbc174
    X86_AT(c, 0xc2b32u);
    push32(c, 0xc2b37u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2b37u);
    X86_TICK(c, 11);
    // 0c2b37  push 0x349c
    X86_AT(c, 0xc2b37u);
    { uint32_t v = 0x349Cu; push32(c, v); }
    // 0c2b3c  push 4
    X86_AT(c, 0xc2b3cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2b3e  call 0xbbba4
    X86_AT(c, 0xc2b3eu);
    push32(c, 0xc2b43u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc2b43u);
    X86_TICK(c, 2);
    // 0c2b43  add esp, 0x20
    X86_AT(c, 0xc2b43u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
L_c2b46:
    X86_TICK(c, 13);
    // 0c2b46  push 8
    X86_AT(c, 0xc2b46u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0c2b48  push 0x28
    X86_AT(c, 0xc2b48u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c2b4a  push 4
    X86_AT(c, 0xc2b4au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2b4c  call 0xbc174
    X86_AT(c, 0xc2b4cu);
    push32(c, 0xc2b51u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2b51u);
    X86_TICK(c, 9);
    // 0c2b51  push 4
    X86_AT(c, 0xc2b51u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2b53  call 0xb90f0
    X86_AT(c, 0xc2b53u);
    push32(c, 0xc2b58u); x86_call_known(c, 0xb90f0u, f_000b90f0); X86_RET(c, 0xc2b58u);
    X86_TICK(c, 12);
    // 0c2b58  xchg ebx, eax
    X86_AT(c, 0xc2b58u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c2b59  add esp, 0x10
    X86_AT(c, 0xc2b59u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c2b5c  cmp bl, 5
    X86_AT(c, 0xc2b5cu);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0c2b5f  je 0xc2bbd
    X86_AT(c, 0xc2b5fu);
    if (x86_cc(c, 4)) { goto L_c2bbd; }
    X86_TICK(c, 7);
    // 0c2b61  cmp bl, 6
    X86_AT(c, 0xc2b61u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0c2b64  je 0xc2bbd
    X86_AT(c, 0xc2b64u);
    if (x86_cc(c, 4)) { goto L_c2bbd; }
    X86_TICK(c, 7);
    // 0c2b66  cmp bl, 1
    X86_AT(c, 0xc2b66u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c2b69  je 0xc2bbd
    X86_AT(c, 0xc2b69u);
    if (x86_cc(c, 4)) { goto L_c2bbd; }
    X86_TICK(c, 17);
    // 0c2b6b  lea eax, [ebp - 0xd]
    X86_AT(c, 0xc2b6bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF3u);
    // 0c2b6e  push eax
    X86_AT(c, 0xc2b6eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c2b6f  push ebx
    X86_AT(c, 0xc2b6fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c2b70  push 5
    X86_AT(c, 0xc2b70u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2b72  push 0xa81d8
    X86_AT(c, 0xc2b72u);
    { uint32_t v = 0xA81D8u; push32(c, v); }
    // 0c2b77  call 0xba1b4
    X86_AT(c, 0xc2b77u);
    push32(c, 0xc2b7cu); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc2b7cu);
    X86_TICK(c, 11);
    // 0c2b7c  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xc2b7cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0c2b7f  push 4
    X86_AT(c, 0xc2b7fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2b81  call 0xbb6b0
    X86_AT(c, 0xc2b81u);
    push32(c, 0xc2b86u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc2b86u);
    X86_TICK(c, 14);
    // 0c2b86  add esp, 0x14
    X86_AT(c, 0xc2b86u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0c2b89  cmp dword ptr [ebp - 0x1c], 0
    X86_AT(c, 0xc2b89u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))), 0x0u, 0, 4);
    // 0c2b8d  je 0xc2b46
    X86_AT(c, 0xc2b8du);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc2b46u); goto L_c2b46; }
    X86_TICK(c, 13);
    // 0c2b8f  push 8
    X86_AT(c, 0xc2b8fu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0c2b91  push 0x28
    X86_AT(c, 0xc2b91u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c2b93  push 4
    X86_AT(c, 0xc2b93u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2b95  call 0xbc174
    X86_AT(c, 0xc2b95u);
    push32(c, 0xc2b9au); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2b9au);
    X86_TICK(c, 14);
    // 0c2b9a  push dword ptr [ebp - 0x1c]
    X86_AT(c, 0xc2b9au);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))); push32(c, v); }
    // 0c2b9d  push 4
    X86_AT(c, 0xc2b9du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2b9f  call 0xbbba4
    X86_AT(c, 0xc2b9fu);
    push32(c, 0xc2ba4u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc2ba4u);
    X86_TICK(c, 14);
    // 0c2ba4  lea eax, [edi + edi*2]
    X86_AT(c, 0xc2ba4u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c2ba7  lea edx, [eax*8]
    X86_AT(c, 0xc2ba7u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c2bae  lea edx, [eax + edx*8]
    X86_AT(c, 0xc2baeu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c2bb1  mov al, byte ptr [ebp - 0xd]
    X86_AT(c, 0xc2bb1u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))));
    // 0c2bb4  mov byte ptr [edx + 0xa4dda], al
    X86_AT(c, 0xc2bb4u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDAu)), g8(c, 0));
    // 0c2bba  add esp, 0x14
    X86_AT(c, 0xc2bbau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_c2bbd:
    X86_TICK(c, 7);
    // 0c2bbd  cmp bl, 5
    X86_AT(c, 0xc2bbdu);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0c2bc0  jne 0xc2c10
    X86_AT(c, 0xc2bc0u);
    if (x86_cc(c, 5)) { goto L_c2c10; }
    X86_TICK(c, 13);
    // 0c2bc2  mov dword ptr [ebp - 4], 1
    X86_AT(c, 0xc2bc2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x1u);
    // 0c2bc9  push 0xd
    X86_AT(c, 0xc2bc9u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0c2bcb  push 5
    X86_AT(c, 0xc2bcbu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2bcd  call 0xbba64
    X86_AT(c, 0xc2bcdu);
    push32(c, 0xc2bd2u); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xc2bd2u);
    X86_TICK(c, 27);
    // 0c2bd2  lea eax, [ebp - 0xd]
    X86_AT(c, 0xc2bd2u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF3u);
    // 0c2bd5  push eax
    X86_AT(c, 0xc2bd5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c2bd6  lea eax, [edi + edi*2]
    X86_AT(c, 0xc2bd6u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c2bd9  lea edx, [eax*8]
    X86_AT(c, 0xc2bd9u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c2be0  lea edx, [eax + edx*8]
    X86_AT(c, 0xc2be0u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c2be3  mov al, byte ptr [edx + 0xa4dda]
    X86_AT(c, 0xc2be3u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDAu))));
    // 0c2be9  push eax
    X86_AT(c, 0xc2be9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c2bea  push 5
    X86_AT(c, 0xc2beau);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2bec  push 0xa81d8
    X86_AT(c, 0xc2becu);
    { uint32_t v = 0xA81D8u; push32(c, v); }
    // 0c2bf1  call 0xba1b4
    X86_AT(c, 0xc2bf1u);
    push32(c, 0xc2bf6u); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc2bf6u);
    X86_TICK(c, 11);
    // 0c2bf6  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xc2bf6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0c2bf9  push 4
    X86_AT(c, 0xc2bf9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2bfb  call 0xbb6b0
    X86_AT(c, 0xc2bfbu);
    push32(c, 0xc2c00u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc2c00u);
    X86_TICK(c, 2);
    // 0c2c00  push 8
    X86_AT(c, 0xc2c00u);
    { uint32_t v = 0x8u; push32(c, v); }
L_c2c02:
    X86_TICK(c, 11);
    // 0c2c02  push 0x28
    X86_AT(c, 0xc2c02u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c2c04  push 4
    X86_AT(c, 0xc2c04u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2c06  call 0xbc174
    X86_AT(c, 0xc2c06u);
    push32(c, 0xc2c0bu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2c0bu);
    X86_TICK(c, 7);
    // 0c2c0b  jmp 0xc2e62
    X86_AT(c, 0xc2c0bu);
    goto L_c2e62;
L_c2c10:
    X86_TICK(c, 7);
    // 0c2c10  cmp bl, 6
    X86_AT(c, 0xc2c10u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0c2c13  jne 0xc2c7d
    X86_AT(c, 0xc2c13u);
    if (x86_cc(c, 5)) { goto L_c2c7d; }
    X86_TICK(c, 13);
    // 0c2c15  mov dword ptr [ebp - 4], 3
    X86_AT(c, 0xc2c15u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x3u);
    // 0c2c1c  push 0xd
    X86_AT(c, 0xc2c1cu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0c2c1e  push 5
    X86_AT(c, 0xc2c1eu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2c20  call 0xbba64
    X86_AT(c, 0xc2c20u);
    push32(c, 0xc2c25u); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xc2c25u);
    X86_TICK(c, 27);
    // 0c2c25  lea eax, [ebp - 0xd]
    X86_AT(c, 0xc2c25u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF3u);
    // 0c2c28  push eax
    X86_AT(c, 0xc2c28u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c2c29  lea eax, [edi + edi*2]
    X86_AT(c, 0xc2c29u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c2c2c  lea edx, [eax*8]
    X86_AT(c, 0xc2c2cu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c2c33  lea edx, [eax + edx*8]
    X86_AT(c, 0xc2c33u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c2c36  mov al, byte ptr [edx + 0xa4dda]
    X86_AT(c, 0xc2c36u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDAu))));
    // 0c2c3c  push eax
    X86_AT(c, 0xc2c3cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c2c3d  push 5
    X86_AT(c, 0xc2c3du);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2c3f  push 0xa81d8
    X86_AT(c, 0xc2c3fu);
    { uint32_t v = 0xA81D8u; push32(c, v); }
    // 0c2c44  call 0xba1b4
    X86_AT(c, 0xc2c44u);
    push32(c, 0xc2c49u); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc2c49u);
    X86_TICK(c, 11);
    // 0c2c49  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xc2c49u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0c2c4c  push 4
    X86_AT(c, 0xc2c4cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2c4e  call 0xbb6b0
    X86_AT(c, 0xc2c4eu);
    push32(c, 0xc2c53u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc2c53u);
    X86_TICK(c, 2);
    // 0c2c53  push 8
    X86_AT(c, 0xc2c53u);
    { uint32_t v = 0x8u; push32(c, v); }
L_c2c55:
    X86_TICK(c, 11);
    // 0c2c55  push 0x28
    X86_AT(c, 0xc2c55u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c2c57  push 4
    X86_AT(c, 0xc2c57u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2c59  call 0xbc174
    X86_AT(c, 0xc2c59u);
    push32(c, 0xc2c5eu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2c5eu);
    X86_TICK(c, 14);
    // 0c2c5e  add esp, 0x28
    X86_AT(c, 0xc2c5eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0c2c61  cmp dword ptr [ebp - 0x1c], 0
    X86_AT(c, 0xc2c61u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))), 0x0u, 0, 4);
    // 0c2c65  je 0xc2e7a
    X86_AT(c, 0xc2c65u);
    if (x86_cc(c, 4)) { goto L_c2e7a; }
    X86_TICK(c, 14);
    // 0c2c6b  push dword ptr [ebp - 0x1c]
    X86_AT(c, 0xc2c6bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))); push32(c, v); }
    // 0c2c6e  push 4
    X86_AT(c, 0xc2c6eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2c70  call 0xbbba4
    X86_AT(c, 0xc2c70u);
    push32(c, 0xc2c75u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc2c75u);
    X86_TICK(c, 9);
    // 0c2c75  add esp, 8
    X86_AT(c, 0xc2c75u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c2c78  jmp 0xc2e7a
    X86_AT(c, 0xc2c78u);
    goto L_c2e7a;
L_c2c7d:
    X86_TICK(c, 7);
    // 0c2c7d  cmp bl, 1
    X86_AT(c, 0xc2c7du);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c2c80  je 0xc2f2f
    X86_AT(c, 0xc2c80u);
    if (x86_cc(c, 4)) { goto L_c2f2f; }
    X86_TICK(c, 11);
    // 0c2c86  push 0xd
    X86_AT(c, 0xc2c86u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0c2c88  push 5
    X86_AT(c, 0xc2c88u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2c8a  call 0xbba64
    X86_AT(c, 0xc2c8au);
    push32(c, 0xc2c8fu); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xc2c8fu);
    X86_TICK(c, 9);
    // 0c2c8f  mov dword ptr [ebp - 4], 3
    X86_AT(c, 0xc2c8fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x3u);
    // 0c2c96  jmp 0xc2f8f
    X86_AT(c, 0xc2c96u);
    goto L_c2f8f;
L_c2c9b:
    X86_TICK(c, 27);
    // 0c2c9b  push 0xa
    X86_AT(c, 0xc2c9bu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0c2c9d  push 0xf
    X86_AT(c, 0xc2c9du);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0c2c9f  push 0xb
    X86_AT(c, 0xc2c9fu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c2ca1  push 6
    X86_AT(c, 0xc2ca1u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c2ca3  push 0x2f
    X86_AT(c, 0xc2ca3u);
    { uint32_t v = 0x2Fu; push32(c, v); }
    // 0c2ca5  push 0x76
    X86_AT(c, 0xc2ca5u);
    { uint32_t v = 0x76u; push32(c, v); }
    // 0c2ca7  push 0x178
    X86_AT(c, 0xc2ca7u);
    { uint32_t v = 0x178u; push32(c, v); }
    // 0c2cac  push 0x10c
    X86_AT(c, 0xc2cacu);
    { uint32_t v = 0x10Cu; push32(c, v); }
    // 0c2cb1  push 0x83
    X86_AT(c, 0xc2cb1u);
    { uint32_t v = 0x83u; push32(c, v); }
    // 0c2cb6  push 5
    X86_AT(c, 0xc2cb6u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2cb8  call 0xbb5cc
    X86_AT(c, 0xc2cb8u);
    push32(c, 0xc2cbdu); x86_call_known(c, 0xbb5ccu, f_000bb5cc); X86_RET(c, 0xc2cbdu);
    X86_TICK(c, 9);
    // 0c2cbd  push 5
    X86_AT(c, 0xc2cbdu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2cbf  call 0xbb6b0
    X86_AT(c, 0xc2cbfu);
    push32(c, 0xc2cc4u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc2cc4u);
    X86_TICK(c, 9);
    // 0c2cc4  push 5
    X86_AT(c, 0xc2cc4u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2cc6  call 0xbb710
    X86_AT(c, 0xc2cc6u);
    push32(c, 0xc2ccbu); x86_call_known(c, 0xbb710u, f_000bb710); X86_RET(c, 0xc2ccbu);
    X86_TICK(c, 9);
    // 0c2ccb  push 5
    X86_AT(c, 0xc2ccbu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2ccd  call 0xbb6b0
    X86_AT(c, 0xc2ccdu);
    push32(c, 0xc2cd2u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc2cd2u);
    X86_TICK(c, 13);
    // 0c2cd2  push 0
    X86_AT(c, 0xc2cd2u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c2cd4  push 2
    X86_AT(c, 0xc2cd4u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c2cd6  push 5
    X86_AT(c, 0xc2cd6u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2cd8  call 0xbc174
    X86_AT(c, 0xc2cd8u);
    push32(c, 0xc2cddu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2cddu);
    X86_TICK(c, 13);
    // 0c2cdd  add esp, 0x40
    X86_AT(c, 0xc2cddu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0c2ce0  push 0x34b0
    X86_AT(c, 0xc2ce0u);
    { uint32_t v = 0x34B0u; push32(c, v); }
    // 0c2ce5  push 5
    X86_AT(c, 0xc2ce5u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2ce7  call 0xba428
    X86_AT(c, 0xc2ce7u);
    push32(c, 0xc2cecu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc2cecu);
    X86_TICK(c, 13);
    // 0c2cec  push 1
    X86_AT(c, 0xc2cecu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c2cee  push 1
    X86_AT(c, 0xc2ceeu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c2cf0  push 5
    X86_AT(c, 0xc2cf0u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2cf2  call 0xbc174
    X86_AT(c, 0xc2cf2u);
    push32(c, 0xc2cf7u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2cf7u);
    X86_TICK(c, 11);
    // 0c2cf7  push 0x34c8
    X86_AT(c, 0xc2cf7u);
    { uint32_t v = 0x34C8u; push32(c, v); }
    // 0c2cfc  push 5
    X86_AT(c, 0xc2cfcu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2cfe  call 0xba428
    X86_AT(c, 0xc2cfeu);
    push32(c, 0xc2d03u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc2d03u);
    X86_TICK(c, 13);
    // 0c2d03  push 2
    X86_AT(c, 0xc2d03u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c2d05  push 1
    X86_AT(c, 0xc2d05u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c2d07  push 5
    X86_AT(c, 0xc2d07u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2d09  call 0xbc174
    X86_AT(c, 0xc2d09u);
    push32(c, 0xc2d0eu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2d0eu);
    X86_TICK(c, 11);
    // 0c2d0e  push 0x3524
    X86_AT(c, 0xc2d0eu);
    { uint32_t v = 0x3524u; push32(c, v); }
    // 0c2d13  push 5
    X86_AT(c, 0xc2d13u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2d15  call 0xba428
    X86_AT(c, 0xc2d15u);
    push32(c, 0xc2d1au); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc2d1au);
    X86_TICK(c, 13);
    // 0c2d1a  push 3
    X86_AT(c, 0xc2d1au);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c2d1c  push 1
    X86_AT(c, 0xc2d1cu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c2d1e  push 5
    X86_AT(c, 0xc2d1eu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2d20  call 0xbc174
    X86_AT(c, 0xc2d20u);
    push32(c, 0xc2d25u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2d25u);
    X86_TICK(c, 13);
    // 0c2d25  add esp, 0x3c
    X86_AT(c, 0xc2d25u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c2d28  push 0x3580
    X86_AT(c, 0xc2d28u);
    { uint32_t v = 0x3580u; push32(c, v); }
    // 0c2d2d  push 5
    X86_AT(c, 0xc2d2du);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2d2f  call 0xba428
    X86_AT(c, 0xc2d2fu);
    push32(c, 0xc2d34u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc2d34u);
    X86_TICK(c, 13);
    // 0c2d34  push 4
    X86_AT(c, 0xc2d34u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2d36  push 1
    X86_AT(c, 0xc2d36u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c2d38  push 5
    X86_AT(c, 0xc2d38u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2d3a  call 0xbc174
    X86_AT(c, 0xc2d3au);
    push32(c, 0xc2d3fu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2d3fu);
    X86_TICK(c, 11);
    // 0c2d3f  push 0x35cc
    X86_AT(c, 0xc2d3fu);
    { uint32_t v = 0x35CCu; push32(c, v); }
    // 0c2d44  push 5
    X86_AT(c, 0xc2d44u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2d46  call 0xba428
    X86_AT(c, 0xc2d46u);
    push32(c, 0xc2d4bu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc2d4bu);
    X86_TICK(c, 13);
    // 0c2d4b  push 5
    X86_AT(c, 0xc2d4bu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2d4d  push 1
    X86_AT(c, 0xc2d4du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c2d4f  push 5
    X86_AT(c, 0xc2d4fu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2d51  call 0xbc174
    X86_AT(c, 0xc2d51u);
    push32(c, 0xc2d56u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2d56u);
    X86_TICK(c, 13);
    // 0c2d56  add esp, 0x28
    X86_AT(c, 0xc2d56u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0c2d59  push 0x3628
    X86_AT(c, 0xc2d59u);
    { uint32_t v = 0x3628u; push32(c, v); }
    // 0c2d5e  push 5
    X86_AT(c, 0xc2d5eu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2d60  call 0xba428
    X86_AT(c, 0xc2d60u);
    push32(c, 0xc2d65u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc2d65u);
    X86_TICK(c, 13);
    // 0c2d65  push 6
    X86_AT(c, 0xc2d65u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c2d67  push 1
    X86_AT(c, 0xc2d67u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c2d69  push 5
    X86_AT(c, 0xc2d69u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2d6b  call 0xbc174
    X86_AT(c, 0xc2d6bu);
    push32(c, 0xc2d70u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2d70u);
    X86_TICK(c, 11);
    // 0c2d70  push 0x3684
    X86_AT(c, 0xc2d70u);
    { uint32_t v = 0x3684u; push32(c, v); }
    // 0c2d75  push 5
    X86_AT(c, 0xc2d75u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2d77  call 0xba428
    X86_AT(c, 0xc2d77u);
    push32(c, 0xc2d7cu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc2d7cu);
    X86_TICK(c, 9);
    // 0c2d7c  push 4
    X86_AT(c, 0xc2d7cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2d7e  call 0xbb6b0
    X86_AT(c, 0xc2d7eu);
    push32(c, 0xc2d83u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc2d83u);
    X86_TICK(c, 13);
    // 0c2d83  push 9
    X86_AT(c, 0xc2d83u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0c2d85  push 0x28
    X86_AT(c, 0xc2d85u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c2d87  push 4
    X86_AT(c, 0xc2d87u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2d89  call 0xbc174
    X86_AT(c, 0xc2d89u);
    push32(c, 0xc2d8eu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2d8eu);
    X86_TICK(c, 11);
    // 0c2d8e  push 0x369c
    X86_AT(c, 0xc2d8eu);
    { uint32_t v = 0x369Cu; push32(c, v); }
    // 0c2d93  push 4
    X86_AT(c, 0xc2d93u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2d95  call 0xbbba4
    X86_AT(c, 0xc2d95u);
    push32(c, 0xc2d9au); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc2d9au);
    X86_TICK(c, 2);
    // 0c2d9a  add esp, 0x34
    X86_AT(c, 0xc2d9au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
L_c2d9d:
    X86_TICK(c, 13);
    // 0c2d9d  push 9
    X86_AT(c, 0xc2d9du);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0c2d9f  push 0x28
    X86_AT(c, 0xc2d9fu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c2da1  push 4
    X86_AT(c, 0xc2da1u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2da3  call 0xbc174
    X86_AT(c, 0xc2da3u);
    push32(c, 0xc2da8u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2da8u);
    X86_TICK(c, 9);
    // 0c2da8  push 4
    X86_AT(c, 0xc2da8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2daa  call 0xb90f0
    X86_AT(c, 0xc2daau);
    push32(c, 0xc2dafu); x86_call_known(c, 0xb90f0u, f_000b90f0); X86_RET(c, 0xc2dafu);
    X86_TICK(c, 12);
    // 0c2daf  xchg ebx, eax
    X86_AT(c, 0xc2dafu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c2db0  add esp, 0x10
    X86_AT(c, 0xc2db0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c2db3  cmp bl, 5
    X86_AT(c, 0xc2db3u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0c2db6  je 0xc2e14
    X86_AT(c, 0xc2db6u);
    if (x86_cc(c, 4)) { goto L_c2e14; }
    X86_TICK(c, 7);
    // 0c2db8  cmp bl, 6
    X86_AT(c, 0xc2db8u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0c2dbb  je 0xc2e14
    X86_AT(c, 0xc2dbbu);
    if (x86_cc(c, 4)) { goto L_c2e14; }
    X86_TICK(c, 7);
    // 0c2dbd  cmp bl, 1
    X86_AT(c, 0xc2dbdu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c2dc0  je 0xc2e14
    X86_AT(c, 0xc2dc0u);
    if (x86_cc(c, 4)) { goto L_c2e14; }
    X86_TICK(c, 17);
    // 0c2dc2  lea eax, [ebp - 0xd]
    X86_AT(c, 0xc2dc2u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF3u);
    // 0c2dc5  push eax
    X86_AT(c, 0xc2dc5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c2dc6  push ebx
    X86_AT(c, 0xc2dc6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c2dc7  push 0xb
    X86_AT(c, 0xc2dc7u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c2dc9  push 0xa846c
    X86_AT(c, 0xc2dc9u);
    { uint32_t v = 0xA846Cu; push32(c, v); }
    // 0c2dce  call 0xba1b4
    X86_AT(c, 0xc2dceu);
    push32(c, 0xc2dd3u); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc2dd3u);
    X86_TICK(c, 11);
    // 0c2dd3  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xc2dd3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0c2dd6  push 4
    X86_AT(c, 0xc2dd6u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2dd8  call 0xbb6b0
    X86_AT(c, 0xc2dd8u);
    push32(c, 0xc2dddu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc2dddu);
    X86_TICK(c, 14);
    // 0c2ddd  add esp, 0x14
    X86_AT(c, 0xc2dddu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0c2de0  cmp dword ptr [ebp - 0x1c], 0
    X86_AT(c, 0xc2de0u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))), 0x0u, 0, 4);
    // 0c2de4  je 0xc2d9d
    X86_AT(c, 0xc2de4u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc2d9du); goto L_c2d9d; }
    X86_TICK(c, 13);
    // 0c2de6  push 9
    X86_AT(c, 0xc2de6u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0c2de8  push 0x28
    X86_AT(c, 0xc2de8u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c2dea  push 4
    X86_AT(c, 0xc2deau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2dec  call 0xbc174
    X86_AT(c, 0xc2decu);
    push32(c, 0xc2df1u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2df1u);
    X86_TICK(c, 14);
    // 0c2df1  push dword ptr [ebp - 0x1c]
    X86_AT(c, 0xc2df1u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))); push32(c, v); }
    // 0c2df4  push 4
    X86_AT(c, 0xc2df4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2df6  call 0xbbba4
    X86_AT(c, 0xc2df6u);
    push32(c, 0xc2dfbu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc2dfbu);
    X86_TICK(c, 14);
    // 0c2dfb  lea eax, [edi + edi*2]
    X86_AT(c, 0xc2dfbu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c2dfe  lea edx, [eax*8]
    X86_AT(c, 0xc2dfeu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c2e05  lea edx, [eax + edx*8]
    X86_AT(c, 0xc2e05u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c2e08  mov al, byte ptr [ebp - 0xd]
    X86_AT(c, 0xc2e08u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))));
    // 0c2e0b  mov byte ptr [edx + 0xa4ddb], al
    X86_AT(c, 0xc2e0bu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDBu)), g8(c, 0));
    // 0c2e11  add esp, 0x14
    X86_AT(c, 0xc2e11u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_c2e14:
    X86_TICK(c, 7);
    // 0c2e14  cmp bl, 5
    X86_AT(c, 0xc2e14u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0c2e17  jne 0xc2e88
    X86_AT(c, 0xc2e17u);
    if (x86_cc(c, 5)) { goto L_c2e88; }
    X86_TICK(c, 13);
    // 0c2e19  mov dword ptr [ebp - 4], 2
    X86_AT(c, 0xc2e19u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x2u);
    // 0c2e20  push 0xd
    X86_AT(c, 0xc2e20u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0c2e22  push 5
    X86_AT(c, 0xc2e22u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2e24  call 0xbba64
    X86_AT(c, 0xc2e24u);
    push32(c, 0xc2e29u); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xc2e29u);
    X86_TICK(c, 27);
    // 0c2e29  lea eax, [ebp - 0xd]
    X86_AT(c, 0xc2e29u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF3u);
    // 0c2e2c  push eax
    X86_AT(c, 0xc2e2cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c2e2d  lea eax, [edi + edi*2]
    X86_AT(c, 0xc2e2du);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c2e30  lea edx, [eax*8]
    X86_AT(c, 0xc2e30u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c2e37  lea edx, [eax + edx*8]
    X86_AT(c, 0xc2e37u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c2e3a  mov al, byte ptr [edx + 0xa4ddb]
    X86_AT(c, 0xc2e3au);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDBu))));
    // 0c2e40  push eax
    X86_AT(c, 0xc2e40u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c2e41  push 0xb
    X86_AT(c, 0xc2e41u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c2e43  push 0xa846c
    X86_AT(c, 0xc2e43u);
    { uint32_t v = 0xA846Cu; push32(c, v); }
    // 0c2e48  call 0xba1b4
    X86_AT(c, 0xc2e48u);
    push32(c, 0xc2e4du); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc2e4du);
    X86_TICK(c, 15);
    // 0c2e4d  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xc2e4du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0c2e50  push 9
    X86_AT(c, 0xc2e50u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0c2e52  push 0x28
    X86_AT(c, 0xc2e52u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c2e54  push 4
    X86_AT(c, 0xc2e54u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2e56  call 0xbc174
    X86_AT(c, 0xc2e56u);
    push32(c, 0xc2e5bu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2e5bu);
    X86_TICK(c, 9);
    // 0c2e5b  push 4
    X86_AT(c, 0xc2e5bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2e5d  call 0xbb6b0
    X86_AT(c, 0xc2e5du);
    push32(c, 0xc2e62u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc2e62u);
L_c2e62:
    X86_TICK(c, 14);
    // 0c2e62  add esp, 0x28
    X86_AT(c, 0xc2e62u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0c2e65  cmp dword ptr [ebp - 0x1c], 0
    X86_AT(c, 0xc2e65u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))), 0x0u, 0, 4);
    // 0c2e69  je 0xc2e7a
    X86_AT(c, 0xc2e69u);
    if (x86_cc(c, 4)) { goto L_c2e7a; }
    X86_TICK(c, 14);
    // 0c2e6b  push dword ptr [ebp - 0x1c]
    X86_AT(c, 0xc2e6bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))); push32(c, v); }
    // 0c2e6e  push 4
    X86_AT(c, 0xc2e6eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2e70  call 0xbbba4
    X86_AT(c, 0xc2e70u);
    push32(c, 0xc2e75u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc2e75u);
    X86_TICK(c, 7);
    // 0c2e75  jmp 0xc2f8f
    X86_AT(c, 0xc2e75u);
    goto L_c2f8f;
L_c2e7a:
    X86_TICK(c, 11);
    // 0c2e7a  push 0x20
    X86_AT(c, 0xc2e7au);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0c2e7c  push 4
    X86_AT(c, 0xc2e7cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2e7e  call 0xbbd1c
    X86_AT(c, 0xc2e7eu);
    push32(c, 0xc2e83u); x86_call_known(c, 0xbbd1cu, f_000bbd1c); X86_RET(c, 0xc2e83u);
    X86_TICK(c, 7);
    // 0c2e83  jmp 0xc2f8f
    X86_AT(c, 0xc2e83u);
    goto L_c2f8f;
L_c2e88:
    X86_TICK(c, 7);
    // 0c2e88  cmp bl, 6
    X86_AT(c, 0xc2e88u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0c2e8b  jne 0xc2f2a
    X86_AT(c, 0xc2e8bu);
    if (x86_cc(c, 5)) { goto L_c2f2a; }
    X86_TICK(c, 13);
    // 0c2e91  mov dword ptr [ebp - 4], 4
    X86_AT(c, 0xc2e91u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x4u);
    // 0c2e98  push 0xd
    X86_AT(c, 0xc2e98u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0c2e9a  push 5
    X86_AT(c, 0xc2e9au);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2e9c  call 0xbba64
    X86_AT(c, 0xc2e9cu);
    push32(c, 0xc2ea1u); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xc2ea1u);
    X86_TICK(c, 27);
    // 0c2ea1  lea eax, [ebp - 0xd]
    X86_AT(c, 0xc2ea1u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF3u);
    // 0c2ea4  push eax
    X86_AT(c, 0xc2ea4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c2ea5  lea eax, [edi + edi*2]
    X86_AT(c, 0xc2ea5u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c2ea8  lea edx, [eax*8]
    X86_AT(c, 0xc2ea8u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c2eaf  lea edx, [eax + edx*8]
    X86_AT(c, 0xc2eafu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c2eb2  mov al, byte ptr [edx + 0xa4ddb]
    X86_AT(c, 0xc2eb2u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDBu))));
    // 0c2eb8  push eax
    X86_AT(c, 0xc2eb8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c2eb9  push 0xb
    X86_AT(c, 0xc2eb9u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c2ebb  push 0xa846c
    X86_AT(c, 0xc2ebbu);
    { uint32_t v = 0xA846Cu; push32(c, v); }
    // 0c2ec0  call 0xba1b4
    X86_AT(c, 0xc2ec0u);
    push32(c, 0xc2ec5u); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc2ec5u);
    X86_TICK(c, 15);
    // 0c2ec5  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xc2ec5u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0c2ec8  push 9
    X86_AT(c, 0xc2ec8u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0c2eca  push 0x28
    X86_AT(c, 0xc2ecau);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c2ecc  push 4
    X86_AT(c, 0xc2eccu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2ece  call 0xbc174
    X86_AT(c, 0xc2eceu);
    push32(c, 0xc2ed3u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2ed3u);
    X86_TICK(c, 9);
    // 0c2ed3  push 4
    X86_AT(c, 0xc2ed3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2ed5  call 0xbb6b0
    X86_AT(c, 0xc2ed5u);
    push32(c, 0xc2edau); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc2edau);
    X86_TICK(c, 14);
    // 0c2eda  add esp, 0x28
    X86_AT(c, 0xc2edau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0c2edd  cmp dword ptr [ebp - 0x1c], 0
    X86_AT(c, 0xc2eddu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))), 0x0u, 0, 4);
    // 0c2ee1  je 0xc2ef0
    X86_AT(c, 0xc2ee1u);
    if (x86_cc(c, 4)) { goto L_c2ef0; }
    X86_TICK(c, 14);
    // 0c2ee3  push dword ptr [ebp - 0x1c]
    X86_AT(c, 0xc2ee3u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))); push32(c, v); }
    // 0c2ee6  push 4
    X86_AT(c, 0xc2ee6u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2ee8  call 0xbbba4
    X86_AT(c, 0xc2ee8u);
    push32(c, 0xc2eedu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc2eedu);
    X86_TICK(c, 2);
    // 0c2eed  add esp, 8
    X86_AT(c, 0xc2eedu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c2ef0:
    X86_TICK(c, 11);
    // 0c2ef0  push 0x20
    X86_AT(c, 0xc2ef0u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0c2ef2  push 4
    X86_AT(c, 0xc2ef2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2ef4  call 0xbbd1c
    X86_AT(c, 0xc2ef4u);
    push32(c, 0xc2ef9u); x86_call_known(c, 0xbbd1cu, f_000bbd1c); X86_RET(c, 0xc2ef9u);
    X86_TICK(c, 25);
    // 0c2ef9  mov esi, 0x1e
    X86_AT(c, 0xc2ef9u);
    c.r[6] = 0x1Eu;
    // 0c2efe  lea eax, [edi + edi*2]
    X86_AT(c, 0xc2efeu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c2f01  lea edx, [eax*8]
    X86_AT(c, 0xc2f01u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c2f08  lea edx, [eax + edx*8]
    X86_AT(c, 0xc2f08u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c2f0b  mov eax, 5
    X86_AT(c, 0xc2f0bu);
    c.r[0] = 0x5u;
    // 0c2f10  mov dword ptr [edx + 0xa4dd6], eax
    X86_AT(c, 0xc2f10u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD6u)), c.r[0]);
    // 0c2f16  mov dword ptr [edx + 0xa4dd2], eax
    X86_AT(c, 0xc2f16u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD2u)), c.r[0]);
    // 0c2f1c  mov dword ptr [edx + 0xa4dce], eax
    X86_AT(c, 0xc2f1cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DCEu)), c.r[0]);
    // 0c2f22  mov dword ptr [edx + 0xa4dca], eax
    X86_AT(c, 0xc2f22u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DCAu)), c.r[0]);
    // 0c2f28  jmp 0xc2f8f
    X86_AT(c, 0xc2f28u);
    goto L_c2f8f;
L_c2f2a:
    X86_TICK(c, 7);
    // 0c2f2a  cmp bl, 1
    X86_AT(c, 0xc2f2au);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c2f2d  jne 0xc2f45
    X86_AT(c, 0xc2f2du);
    if (x86_cc(c, 5)) { goto L_c2f45; }
L_c2f2f:
    X86_TICK(c, 11);
    // 0c2f2f  push 0xd
    X86_AT(c, 0xc2f2fu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0c2f31  push 5
    X86_AT(c, 0xc2f31u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2f33  call 0xbba64
    X86_AT(c, 0xc2f33u);
    push32(c, 0xc2f38u); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xc2f38u);
    X86_TICK(c, 11);
    // 0c2f38  mov eax, 0xffffffff
    X86_AT(c, 0xc2f38u);
    c.r[0] = 0xFFFFFFFFu;
    // 0c2f3d  add esp, 8
    X86_AT(c, 0xc2f3du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c2f40  jmp 0xc35c9
    X86_AT(c, 0xc2f40u);
    goto L_c35c9;
L_c2f45:
    X86_TICK(c, 11);
    // 0c2f45  push 0xd
    X86_AT(c, 0xc2f45u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0c2f47  push 5
    X86_AT(c, 0xc2f47u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2f49  call 0xbba64
    X86_AT(c, 0xc2f49u);
    push32(c, 0xc2f4eu); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xc2f4eu);
    X86_TICK(c, 18);
    // 0c2f4e  mov dword ptr [ebp - 4], 4
    X86_AT(c, 0xc2f4eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x4u);
    // 0c2f55  mov esi, 0x1e
    X86_AT(c, 0xc2f55u);
    c.r[6] = 0x1Eu;
    // 0c2f5a  lea eax, [edi + edi*2]
    X86_AT(c, 0xc2f5au);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c2f5d  lea edx, [eax*8]
    X86_AT(c, 0xc2f5du);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c2f64  lea edx, [eax + edx*8]
    X86_AT(c, 0xc2f64u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c2f67  mov dword ptr [edx + 0xa4dd6], 5
    X86_AT(c, 0xc2f67u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD6u)), 0x5u);
    // 0c2f71  mov dword ptr [edx + 0xa4dd2], 5
    X86_AT(c, 0xc2f71u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD2u)), 0x5u);
    // 0c2f7b  mov dword ptr [edx + 0xa4dce], 5
    X86_AT(c, 0xc2f7bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DCEu)), 0x5u);
    // 0c2f85  mov dword ptr [edx + 0xa4dca], 5
    X86_AT(c, 0xc2f85u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DCAu)), 0x5u);
L_c2f8f:
    X86_TICK(c, 9);
    // 0c2f8f  add esp, 8
    X86_AT(c, 0xc2f8fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c2f92  jmp 0xc27a0
    X86_AT(c, 0xc2f92u);
    X86_POLL(c, 0xc27a0u); goto L_c27a0;
L_c2f97:
    X86_TICK(c, 18);
    // 0c2f97  lea eax, [edi + edi*2]
    X86_AT(c, 0xc2f97u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c2f9a  lea edx, [eax*8]
    X86_AT(c, 0xc2f9au);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c2fa1  lea edx, [eax + edx*8]
    X86_AT(c, 0xc2fa1u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c2fa4  cmp byte ptr [edx + 0xa4ddc], 0
    X86_AT(c, 0xc2fa4u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDCu))), 0x0u, 0, 1);
    // 0c2fab  jne 0xc2fb9
    X86_AT(c, 0xc2fabu);
    if (x86_cc(c, 5)) { goto L_c2fb9; }
    X86_TICK(c, 9);
    // 0c2fad  mov dword ptr [ebp - 4], 1
    X86_AT(c, 0xc2fadu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x1u);
    // 0c2fb4  jmp 0xc27a0
    X86_AT(c, 0xc2fb4u);
    X86_POLL(c, 0xc27a0u); goto L_c27a0;
L_c2fb9:
    X86_TICK(c, 18);
    // 0c2fb9  lea eax, [edi + edi*2]
    X86_AT(c, 0xc2fb9u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c2fbc  lea edx, [eax*8]
    X86_AT(c, 0xc2fbcu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c2fc3  lea edx, [eax + edx*8]
    X86_AT(c, 0xc2fc3u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c2fc6  cmp byte ptr [edx + 0xa4dda], 0
    X86_AT(c, 0xc2fc6u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDAu))), 0x0u, 0, 1);
    // 0c2fcd  jne 0xc2fdb
    X86_AT(c, 0xc2fcdu);
    if (x86_cc(c, 5)) { goto L_c2fdb; }
    X86_TICK(c, 9);
    // 0c2fcf  mov dword ptr [ebp - 4], 2
    X86_AT(c, 0xc2fcfu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x2u);
    // 0c2fd6  jmp 0xc27a0
    X86_AT(c, 0xc2fd6u);
    X86_POLL(c, 0xc27a0u); goto L_c27a0;
L_c2fdb:
    X86_TICK(c, 23);
    // 0c2fdb  mov eax, edi
    X86_AT(c, 0xc2fdbu);
    c.r[0] = c.r[7];
    // 0c2fdd  lea edx, [eax + eax*2]
    X86_AT(c, 0xc2fddu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c2fe0  shl edx, 5
    X86_AT(c, 0xc2fe0u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c2fe3  add edx, eax
    X86_AT(c, 0xc2fe3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c2fe5  lea edx, [eax + edx*2]
    X86_AT(c, 0xc2fe5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c2fe8  cmp byte ptr [edx + 0xa4ddb], 0
    X86_AT(c, 0xc2fe8u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDBu))), 0x0u, 0, 1);
    // 0c2fef  je 0xc3108
    X86_AT(c, 0xc2fefu);
    if (x86_cc(c, 4)) { goto L_c3108; }
    X86_TICK(c, 11);
    // 0c2ff5  push 0xe
    X86_AT(c, 0xc2ff5u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0c2ff7  push 4
    X86_AT(c, 0xc2ff7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2ff9  call 0xbc3ec
    X86_AT(c, 0xc2ff9u);
    push32(c, 0xc2ffeu); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xc2ffeu);
    X86_TICK(c, 2);
    // 0c2ffe  add esp, 8
    X86_AT(c, 0xc2ffeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c3001:
    X86_TICK(c, 13);
    // 0c3001  push 5
    X86_AT(c, 0xc3001u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c3003  push 0x28
    X86_AT(c, 0xc3003u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c3005  push 4
    X86_AT(c, 0xc3005u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3007  call 0xbc174
    X86_AT(c, 0xc3007u);
    push32(c, 0xc300cu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc300cu);
    X86_TICK(c, 13);
    // 0c300c  push 2
    X86_AT(c, 0xc300cu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c300e  push esi
    X86_AT(c, 0xc300eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c300f  push 4
    X86_AT(c, 0xc300fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3011  call 0xba404
    X86_AT(c, 0xc3011u);
    push32(c, 0xc3016u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc3016u);
    X86_TICK(c, 13);
    // 0c3016  push 0xa
    X86_AT(c, 0xc3016u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0c3018  push 0x34
    X86_AT(c, 0xc3018u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0c301a  push 4
    X86_AT(c, 0xc301au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c301c  call 0xbc174
    X86_AT(c, 0xc301cu);
    push32(c, 0xc3021u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3021u);
    X86_TICK(c, 29);
    // 0c3021  push 2
    X86_AT(c, 0xc3021u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c3023  mov eax, edi
    X86_AT(c, 0xc3023u);
    c.r[0] = c.r[7];
    // 0c3025  lea edx, [eax + eax*2]
    X86_AT(c, 0xc3025u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c3028  shl edx, 5
    X86_AT(c, 0xc3028u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c302b  add edx, eax
    X86_AT(c, 0xc302bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c302d  lea edx, [eax + edx*2]
    X86_AT(c, 0xc302du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c3030  push dword ptr [edx + 0xa4dca]
    X86_AT(c, 0xc3030u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DCAu))); push32(c, v); }
    // 0c3036  push 4
    X86_AT(c, 0xc3036u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3038  mov dword ptr [ebp - 0x20], edx
    X86_AT(c, 0xc3038u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)), c.r[2]);
    // 0c303b  call 0xba404
    X86_AT(c, 0xc303bu);
    push32(c, 0xc3040u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc3040u);
    X86_TICK(c, 9);
    // 0c3040  push 4
    X86_AT(c, 0xc3040u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3042  call 0xb9930
    X86_AT(c, 0xc3042u);
    push32(c, 0xc3047u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc3047u);
    X86_TICK(c, 12);
    // 0c3047  xchg ebx, eax
    X86_AT(c, 0xc3047u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c3048  add esp, 0x34
    X86_AT(c, 0xc3048u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
    // 0c304b  cmp bl, 5
    X86_AT(c, 0xc304bu);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0c304e  je 0xc30bb
    X86_AT(c, 0xc304eu);
    if (x86_cc(c, 4)) { goto L_c30bb; }
    X86_TICK(c, 7);
    // 0c3054  cmp bl, 6
    X86_AT(c, 0xc3054u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0c3057  je 0xc30bb
    X86_AT(c, 0xc3057u);
    if (x86_cc(c, 4)) { goto L_c30bb; }
    X86_TICK(c, 7);
    // 0c3059  cmp bl, 4
    X86_AT(c, 0xc3059u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0c305c  je 0xc30bb
    X86_AT(c, 0xc305cu);
    if (x86_cc(c, 4)) { goto L_c30bb; }
    X86_TICK(c, 7);
    // 0c305e  cmp bl, 1
    X86_AT(c, 0xc305eu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c3061  je 0xc30bb
    X86_AT(c, 0xc3061u);
    if (x86_cc(c, 4)) { goto L_c30bb; }
    X86_TICK(c, 7);
    // 0c3063  cmp bl, 7
    X86_AT(c, 0xc3063u);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0c3066  jne 0xc3081
    X86_AT(c, 0xc3066u);
    if (x86_cc(c, 5)) { goto L_c3081; }
    X86_TICK(c, 15);
    // 0c3068  mov eax, dword ptr [ebp - 0x20]
    X86_AT(c, 0xc3068u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)));
    // 0c306b  mov edx, dword ptr [eax + 0xa4dca]
    X86_AT(c, 0xc306bu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4DCAu)));
    // 0c3071  cmp edx, 0x19
    X86_AT(c, 0xc3071u);
    (void)x86_sub(c, c.r[2], 0x19u, 0, 4);
    // 0c3074  je 0xc3001
    X86_AT(c, 0xc3074u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc3001u); goto L_c3001; }
    X86_TICK(c, 7);
    // 0c3076  and esi, esi
    X86_AT(c, 0xc3076u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0c3078  je 0xc3001
    X86_AT(c, 0xc3078u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc3001u); goto L_c3001; }
    X86_TICK(c, 8);
    // 0c307a  inc dword ptr [eax + 0xa4dca]
    X86_AT(c, 0xc307au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xA4DCAu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0c3080  dec esi
    X86_AT(c, 0xc3080u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_c3081:
    X86_TICK(c, 7);
    // 0c3081  cmp bl, 3
    X86_AT(c, 0xc3081u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0c3084  jne 0xc3001
    X86_AT(c, 0xc3084u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc3001u); goto L_c3001; }
    X86_TICK(c, 22);
    // 0c308a  mov eax, edi
    X86_AT(c, 0xc308au);
    c.r[0] = c.r[7];
    // 0c308c  lea edx, [eax + eax*2]
    X86_AT(c, 0xc308cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c308f  shl edx, 5
    X86_AT(c, 0xc308fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c3092  add edx, eax
    X86_AT(c, 0xc3092u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c3094  lea edx, [eax + edx*2]
    X86_AT(c, 0xc3094u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c3097  mov eax, dword ptr [edx + 0xa4dca]
    X86_AT(c, 0xc3097u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DCAu)));
    // 0c309d  cmp eax, 5
    X86_AT(c, 0xc309du);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0c30a0  je 0xc3001
    X86_AT(c, 0xc30a0u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc3001u); goto L_c3001; }
    X86_TICK(c, 7);
    // 0c30a6  cmp esi, 0x1e
    X86_AT(c, 0xc30a6u);
    (void)x86_sub(c, c.r[6], 0x1Eu, 0, 4);
    // 0c30a9  je 0xc3001
    X86_AT(c, 0xc30a9u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc3001u); goto L_c3001; }
    X86_TICK(c, 15);
    // 0c30af  dec dword ptr [edx + 0xa4dca]
    X86_AT(c, 0xc30afu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DCAu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0c30b5  inc esi
    X86_AT(c, 0xc30b5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c30b6  jmp 0xc3001
    X86_AT(c, 0xc30b6u);
    X86_POLL(c, 0xc3001u); goto L_c3001;
L_c30bb:
    X86_TICK(c, 11);
    // 0c30bb  push 0xb
    X86_AT(c, 0xc30bbu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c30bd  push 4
    X86_AT(c, 0xc30bdu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c30bf  call 0xbc3ec
    X86_AT(c, 0xc30bfu);
    push32(c, 0xc30c4u); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xc30c4u);
    X86_TICK(c, 13);
    // 0c30c4  push 5
    X86_AT(c, 0xc30c4u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c30c6  push 0x28
    X86_AT(c, 0xc30c6u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c30c8  push 4
    X86_AT(c, 0xc30c8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c30ca  call 0xbc174
    X86_AT(c, 0xc30cau);
    push32(c, 0xc30cfu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc30cfu);
    X86_TICK(c, 13);
    // 0c30cf  push 2
    X86_AT(c, 0xc30cfu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c30d1  push esi
    X86_AT(c, 0xc30d1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c30d2  push 4
    X86_AT(c, 0xc30d2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c30d4  call 0xba404
    X86_AT(c, 0xc30d4u);
    push32(c, 0xc30d9u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc30d9u);
    X86_TICK(c, 13);
    // 0c30d9  push 0xa
    X86_AT(c, 0xc30d9u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0c30db  push 0x34
    X86_AT(c, 0xc30dbu);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0c30dd  push 4
    X86_AT(c, 0xc30ddu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c30df  call 0xbc174
    X86_AT(c, 0xc30dfu);
    push32(c, 0xc30e4u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc30e4u);
    X86_TICK(c, 27);
    // 0c30e4  push 2
    X86_AT(c, 0xc30e4u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c30e6  mov eax, edi
    X86_AT(c, 0xc30e6u);
    c.r[0] = c.r[7];
    // 0c30e8  lea edx, [eax + eax*2]
    X86_AT(c, 0xc30e8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c30eb  shl edx, 5
    X86_AT(c, 0xc30ebu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c30ee  add edx, eax
    X86_AT(c, 0xc30eeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c30f0  lea edx, [eax + edx*2]
    X86_AT(c, 0xc30f0u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c30f3  push dword ptr [edx + 0xa4dca]
    X86_AT(c, 0xc30f3u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DCAu))); push32(c, v); }
    // 0c30f9  push 4
    X86_AT(c, 0xc30f9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c30fb  call 0xba404
    X86_AT(c, 0xc30fbu);
    push32(c, 0xc3100u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc3100u);
    X86_TICK(c, 9);
    // 0c3100  add esp, 0x38
    X86_AT(c, 0xc3100u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 0c3103  cmp bl, 5
    X86_AT(c, 0xc3103u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0c3106  jne 0xc3114
    X86_AT(c, 0xc3106u);
    if (x86_cc(c, 5)) { goto L_c3114; }
L_c3108:
    X86_TICK(c, 9);
    // 0c3108  mov dword ptr [ebp - 4], 3
    X86_AT(c, 0xc3108u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x3u);
    // 0c310f  jmp 0xc27a0
    X86_AT(c, 0xc310fu);
    X86_POLL(c, 0xc27a0u); goto L_c27a0;
L_c3114:
    X86_TICK(c, 7);
    // 0c3114  cmp bl, 1
    X86_AT(c, 0xc3114u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c3117  je 0xc350e
    X86_AT(c, 0xc3117u);
    if (x86_cc(c, 4)) { goto L_c350e; }
    X86_TICK(c, 7);
    // 0c311d  cmp bl, 6
    X86_AT(c, 0xc311du);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0c3120  je 0xc33a2
    X86_AT(c, 0xc3120u);
    if (x86_cc(c, 4)) { goto L_c33a2; }
    X86_TICK(c, 7);
    // 0c3126  cmp bl, 4
    X86_AT(c, 0xc3126u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0c3129  jne 0xc27a0
    X86_AT(c, 0xc3129u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc27a0u); goto L_c27a0; }
    X86_TICK(c, 7);
    // 0c312f  jmp 0xc33a2
    X86_AT(c, 0xc312fu);
    goto L_c33a2;
L_c3134:
    X86_TICK(c, 11);
    // 0c3134  push 0xe
    X86_AT(c, 0xc3134u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0c3136  push 4
    X86_AT(c, 0xc3136u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3138  call 0xbc3ec
    X86_AT(c, 0xc3138u);
    push32(c, 0xc313du); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xc313du);
    X86_TICK(c, 2);
    // 0c313d  add esp, 8
    X86_AT(c, 0xc313du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c3140:
    X86_TICK(c, 13);
    // 0c3140  push 5
    X86_AT(c, 0xc3140u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c3142  push 0x28
    X86_AT(c, 0xc3142u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c3144  push 4
    X86_AT(c, 0xc3144u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3146  call 0xbc174
    X86_AT(c, 0xc3146u);
    push32(c, 0xc314bu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc314bu);
    X86_TICK(c, 13);
    // 0c314b  push 2
    X86_AT(c, 0xc314bu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c314d  push esi
    X86_AT(c, 0xc314du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c314e  push 4
    X86_AT(c, 0xc314eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3150  call 0xba404
    X86_AT(c, 0xc3150u);
    push32(c, 0xc3155u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc3155u);
    X86_TICK(c, 13);
    // 0c3155  push 0xb
    X86_AT(c, 0xc3155u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c3157  push 0x34
    X86_AT(c, 0xc3157u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0c3159  push 4
    X86_AT(c, 0xc3159u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c315b  call 0xbc174
    X86_AT(c, 0xc315bu);
    push32(c, 0xc3160u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3160u);
    X86_TICK(c, 29);
    // 0c3160  push 2
    X86_AT(c, 0xc3160u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c3162  mov eax, edi
    X86_AT(c, 0xc3162u);
    c.r[0] = c.r[7];
    // 0c3164  lea edx, [eax + eax*2]
    X86_AT(c, 0xc3164u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c3167  shl edx, 5
    X86_AT(c, 0xc3167u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c316a  add edx, eax
    X86_AT(c, 0xc316au);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c316c  lea edx, [eax + edx*2]
    X86_AT(c, 0xc316cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c316f  push dword ptr [edx + 0xa4dce]
    X86_AT(c, 0xc316fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DCEu))); push32(c, v); }
    // 0c3175  push 4
    X86_AT(c, 0xc3175u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3177  mov dword ptr [ebp - 0x20], edx
    X86_AT(c, 0xc3177u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)), c.r[2]);
    // 0c317a  call 0xba404
    X86_AT(c, 0xc317au);
    push32(c, 0xc317fu); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc317fu);
    X86_TICK(c, 9);
    // 0c317f  push 4
    X86_AT(c, 0xc317fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3181  call 0xb9930
    X86_AT(c, 0xc3181u);
    push32(c, 0xc3186u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc3186u);
    X86_TICK(c, 12);
    // 0c3186  xchg ebx, eax
    X86_AT(c, 0xc3186u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c3187  add esp, 0x34
    X86_AT(c, 0xc3187u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
    // 0c318a  cmp bl, 5
    X86_AT(c, 0xc318au);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0c318d  je 0xc31fa
    X86_AT(c, 0xc318du);
    if (x86_cc(c, 4)) { goto L_c31fa; }
    X86_TICK(c, 7);
    // 0c3193  cmp bl, 6
    X86_AT(c, 0xc3193u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0c3196  je 0xc31fa
    X86_AT(c, 0xc3196u);
    if (x86_cc(c, 4)) { goto L_c31fa; }
    X86_TICK(c, 7);
    // 0c3198  cmp bl, 4
    X86_AT(c, 0xc3198u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0c319b  je 0xc31fa
    X86_AT(c, 0xc319bu);
    if (x86_cc(c, 4)) { goto L_c31fa; }
    X86_TICK(c, 7);
    // 0c319d  cmp bl, 1
    X86_AT(c, 0xc319du);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c31a0  je 0xc31fa
    X86_AT(c, 0xc31a0u);
    if (x86_cc(c, 4)) { goto L_c31fa; }
    X86_TICK(c, 7);
    // 0c31a2  cmp bl, 7
    X86_AT(c, 0xc31a2u);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0c31a5  jne 0xc31c0
    X86_AT(c, 0xc31a5u);
    if (x86_cc(c, 5)) { goto L_c31c0; }
    X86_TICK(c, 15);
    // 0c31a7  mov eax, dword ptr [ebp - 0x20]
    X86_AT(c, 0xc31a7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)));
    // 0c31aa  mov edx, dword ptr [eax + 0xa4dce]
    X86_AT(c, 0xc31aau);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4DCEu)));
    // 0c31b0  cmp edx, 0x19
    X86_AT(c, 0xc31b0u);
    (void)x86_sub(c, c.r[2], 0x19u, 0, 4);
    // 0c31b3  je 0xc3140
    X86_AT(c, 0xc31b3u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc3140u); goto L_c3140; }
    X86_TICK(c, 7);
    // 0c31b5  and esi, esi
    X86_AT(c, 0xc31b5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0c31b7  je 0xc3140
    X86_AT(c, 0xc31b7u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc3140u); goto L_c3140; }
    X86_TICK(c, 8);
    // 0c31b9  inc dword ptr [eax + 0xa4dce]
    X86_AT(c, 0xc31b9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xA4DCEu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0c31bf  dec esi
    X86_AT(c, 0xc31bfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_c31c0:
    X86_TICK(c, 7);
    // 0c31c0  cmp bl, 3
    X86_AT(c, 0xc31c0u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0c31c3  jne 0xc3140
    X86_AT(c, 0xc31c3u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc3140u); goto L_c3140; }
    X86_TICK(c, 22);
    // 0c31c9  mov eax, edi
    X86_AT(c, 0xc31c9u);
    c.r[0] = c.r[7];
    // 0c31cb  lea edx, [eax + eax*2]
    X86_AT(c, 0xc31cbu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c31ce  shl edx, 5
    X86_AT(c, 0xc31ceu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c31d1  add edx, eax
    X86_AT(c, 0xc31d1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c31d3  lea edx, [eax + edx*2]
    X86_AT(c, 0xc31d3u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c31d6  mov eax, dword ptr [edx + 0xa4dce]
    X86_AT(c, 0xc31d6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DCEu)));
    // 0c31dc  cmp eax, 5
    X86_AT(c, 0xc31dcu);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0c31df  je 0xc3140
    X86_AT(c, 0xc31dfu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc3140u); goto L_c3140; }
    X86_TICK(c, 7);
    // 0c31e5  cmp esi, 0x1e
    X86_AT(c, 0xc31e5u);
    (void)x86_sub(c, c.r[6], 0x1Eu, 0, 4);
    // 0c31e8  je 0xc3140
    X86_AT(c, 0xc31e8u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc3140u); goto L_c3140; }
    X86_TICK(c, 15);
    // 0c31ee  dec dword ptr [edx + 0xa4dce]
    X86_AT(c, 0xc31eeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DCEu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0c31f4  inc esi
    X86_AT(c, 0xc31f4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c31f5  jmp 0xc3140
    X86_AT(c, 0xc31f5u);
    X86_POLL(c, 0xc3140u); goto L_c3140;
L_c31fa:
    X86_TICK(c, 11);
    // 0c31fa  push 0xb
    X86_AT(c, 0xc31fau);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c31fc  push 4
    X86_AT(c, 0xc31fcu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c31fe  call 0xbc3ec
    X86_AT(c, 0xc31feu);
    push32(c, 0xc3203u); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xc3203u);
    X86_TICK(c, 13);
    // 0c3203  push 5
    X86_AT(c, 0xc3203u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c3205  push 0x28
    X86_AT(c, 0xc3205u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c3207  push 4
    X86_AT(c, 0xc3207u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3209  call 0xbc174
    X86_AT(c, 0xc3209u);
    push32(c, 0xc320eu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc320eu);
    X86_TICK(c, 13);
    // 0c320e  push 2
    X86_AT(c, 0xc320eu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c3210  push esi
    X86_AT(c, 0xc3210u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c3211  push 4
    X86_AT(c, 0xc3211u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3213  call 0xba404
    X86_AT(c, 0xc3213u);
    push32(c, 0xc3218u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc3218u);
    X86_TICK(c, 13);
    // 0c3218  push 0xb
    X86_AT(c, 0xc3218u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c321a  push 0x34
    X86_AT(c, 0xc321au);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0c321c  push 4
    X86_AT(c, 0xc321cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c321e  call 0xbc174
    X86_AT(c, 0xc321eu);
    push32(c, 0xc3223u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3223u);
    X86_TICK(c, 27);
    // 0c3223  push 2
    X86_AT(c, 0xc3223u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c3225  mov eax, edi
    X86_AT(c, 0xc3225u);
    c.r[0] = c.r[7];
    // 0c3227  lea edx, [eax + eax*2]
    X86_AT(c, 0xc3227u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c322a  shl edx, 5
    X86_AT(c, 0xc322au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c322d  add edx, eax
    X86_AT(c, 0xc322du);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c322f  lea edx, [eax + edx*2]
    X86_AT(c, 0xc322fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c3232  push dword ptr [edx + 0xa4dce]
    X86_AT(c, 0xc3232u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DCEu))); push32(c, v); }
    // 0c3238  push 4
    X86_AT(c, 0xc3238u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c323a  call 0xba404
    X86_AT(c, 0xc323au);
    push32(c, 0xc323fu); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc323fu);
    X86_TICK(c, 9);
    // 0c323f  add esp, 0x38
    X86_AT(c, 0xc323fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 0c3242  cmp bl, 5
    X86_AT(c, 0xc3242u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0c3245  jne 0xc3253
    X86_AT(c, 0xc3245u);
    if (x86_cc(c, 5)) { goto L_c3253; }
    X86_TICK(c, 9);
    // 0c3247  mov dword ptr [ebp - 4], 4
    X86_AT(c, 0xc3247u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x4u);
    // 0c324e  jmp 0xc27a0
    X86_AT(c, 0xc324eu);
    X86_POLL(c, 0xc27a0u); goto L_c27a0;
L_c3253:
    X86_TICK(c, 7);
    // 0c3253  cmp bl, 1
    X86_AT(c, 0xc3253u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c3256  je 0xc350e
    X86_AT(c, 0xc3256u);
    if (x86_cc(c, 4)) { goto L_c350e; }
    X86_TICK(c, 7);
    // 0c325c  cmp bl, 6
    X86_AT(c, 0xc325cu);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0c325f  je 0xc326a
    X86_AT(c, 0xc325fu);
    if (x86_cc(c, 4)) { goto L_c326a; }
    X86_TICK(c, 7);
    // 0c3261  cmp bl, 4
    X86_AT(c, 0xc3261u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0c3264  jne 0xc27a0
    X86_AT(c, 0xc3264u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc27a0u); goto L_c27a0; }
L_c326a:
    X86_TICK(c, 26);
    // 0c326a  mov dword ptr [ebp - 4], 6
    X86_AT(c, 0xc326au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x6u);
    // 0c3271  mov eax, edi
    X86_AT(c, 0xc3271u);
    c.r[0] = c.r[7];
    // 0c3273  lea edx, [eax + eax*2]
    X86_AT(c, 0xc3273u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c3276  shl edx, 5
    X86_AT(c, 0xc3276u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c3279  add edx, eax
    X86_AT(c, 0xc3279u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c327b  lea edx, [eax + edx*2]
    X86_AT(c, 0xc327bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c327e  mov eax, dword ptr [edx + 0xa4dce]
    X86_AT(c, 0xc327eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DCEu)));
    // 0c3284  mov dword ptr [edx + 0xa4dce], eax
    X86_AT(c, 0xc3284u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DCEu)), c.r[0]);
    // 0c328a  jmp 0xc27a0
    X86_AT(c, 0xc328au);
    X86_POLL(c, 0xc27a0u); goto L_c27a0;
L_c328f:
    X86_TICK(c, 11);
    // 0c328f  push 0xe
    X86_AT(c, 0xc328fu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0c3291  push 4
    X86_AT(c, 0xc3291u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3293  call 0xbc3ec
    X86_AT(c, 0xc3293u);
    push32(c, 0xc3298u); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xc3298u);
    X86_TICK(c, 2);
    // 0c3298  add esp, 8
    X86_AT(c, 0xc3298u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c329b:
    X86_TICK(c, 13);
    // 0c329b  push 5
    X86_AT(c, 0xc329bu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c329d  push 0x28
    X86_AT(c, 0xc329du);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c329f  push 4
    X86_AT(c, 0xc329fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c32a1  call 0xbc174
    X86_AT(c, 0xc32a1u);
    push32(c, 0xc32a6u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc32a6u);
    X86_TICK(c, 13);
    // 0c32a6  push 2
    X86_AT(c, 0xc32a6u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c32a8  push esi
    X86_AT(c, 0xc32a8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c32a9  push 4
    X86_AT(c, 0xc32a9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c32ab  call 0xba404
    X86_AT(c, 0xc32abu);
    push32(c, 0xc32b0u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc32b0u);
    X86_TICK(c, 13);
    // 0c32b0  push 0xc
    X86_AT(c, 0xc32b0u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0c32b2  push 0x34
    X86_AT(c, 0xc32b2u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0c32b4  push 4
    X86_AT(c, 0xc32b4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c32b6  call 0xbc174
    X86_AT(c, 0xc32b6u);
    push32(c, 0xc32bbu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc32bbu);
    X86_TICK(c, 29);
    // 0c32bb  push 2
    X86_AT(c, 0xc32bbu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c32bd  mov eax, edi
    X86_AT(c, 0xc32bdu);
    c.r[0] = c.r[7];
    // 0c32bf  lea edx, [eax + eax*2]
    X86_AT(c, 0xc32bfu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c32c2  shl edx, 5
    X86_AT(c, 0xc32c2u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c32c5  add edx, eax
    X86_AT(c, 0xc32c5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c32c7  lea edx, [eax + edx*2]
    X86_AT(c, 0xc32c7u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c32ca  push dword ptr [edx + 0xa4dd2]
    X86_AT(c, 0xc32cau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD2u))); push32(c, v); }
    // 0c32d0  push 4
    X86_AT(c, 0xc32d0u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c32d2  mov dword ptr [ebp - 0x20], edx
    X86_AT(c, 0xc32d2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)), c.r[2]);
    // 0c32d5  call 0xba404
    X86_AT(c, 0xc32d5u);
    push32(c, 0xc32dau); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc32dau);
    X86_TICK(c, 9);
    // 0c32da  push 4
    X86_AT(c, 0xc32dau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c32dc  call 0xb9930
    X86_AT(c, 0xc32dcu);
    push32(c, 0xc32e1u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc32e1u);
    X86_TICK(c, 12);
    // 0c32e1  xchg ebx, eax
    X86_AT(c, 0xc32e1u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c32e2  add esp, 0x34
    X86_AT(c, 0xc32e2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
    // 0c32e5  cmp bl, 5
    X86_AT(c, 0xc32e5u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0c32e8  je 0xc3355
    X86_AT(c, 0xc32e8u);
    if (x86_cc(c, 4)) { goto L_c3355; }
    X86_TICK(c, 7);
    // 0c32ee  cmp bl, 6
    X86_AT(c, 0xc32eeu);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0c32f1  je 0xc3355
    X86_AT(c, 0xc32f1u);
    if (x86_cc(c, 4)) { goto L_c3355; }
    X86_TICK(c, 7);
    // 0c32f3  cmp bl, 4
    X86_AT(c, 0xc32f3u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0c32f6  je 0xc3355
    X86_AT(c, 0xc32f6u);
    if (x86_cc(c, 4)) { goto L_c3355; }
    X86_TICK(c, 7);
    // 0c32f8  cmp bl, 1
    X86_AT(c, 0xc32f8u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c32fb  je 0xc3355
    X86_AT(c, 0xc32fbu);
    if (x86_cc(c, 4)) { goto L_c3355; }
    X86_TICK(c, 7);
    // 0c32fd  cmp bl, 7
    X86_AT(c, 0xc32fdu);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0c3300  jne 0xc331b
    X86_AT(c, 0xc3300u);
    if (x86_cc(c, 5)) { goto L_c331b; }
    X86_TICK(c, 15);
    // 0c3302  mov eax, dword ptr [ebp - 0x20]
    X86_AT(c, 0xc3302u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)));
    // 0c3305  mov edx, dword ptr [eax + 0xa4dd2]
    X86_AT(c, 0xc3305u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4DD2u)));
    // 0c330b  cmp edx, 0x19
    X86_AT(c, 0xc330bu);
    (void)x86_sub(c, c.r[2], 0x19u, 0, 4);
    // 0c330e  je 0xc329b
    X86_AT(c, 0xc330eu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc329bu); goto L_c329b; }
    X86_TICK(c, 7);
    // 0c3310  and esi, esi
    X86_AT(c, 0xc3310u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0c3312  je 0xc329b
    X86_AT(c, 0xc3312u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc329bu); goto L_c329b; }
    X86_TICK(c, 8);
    // 0c3314  inc dword ptr [eax + 0xa4dd2]
    X86_AT(c, 0xc3314u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xA4DD2u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0c331a  dec esi
    X86_AT(c, 0xc331au);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_c331b:
    X86_TICK(c, 7);
    // 0c331b  cmp bl, 3
    X86_AT(c, 0xc331bu);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0c331e  jne 0xc329b
    X86_AT(c, 0xc331eu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc329bu); goto L_c329b; }
    X86_TICK(c, 22);
    // 0c3324  mov eax, edi
    X86_AT(c, 0xc3324u);
    c.r[0] = c.r[7];
    // 0c3326  lea edx, [eax + eax*2]
    X86_AT(c, 0xc3326u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c3329  shl edx, 5
    X86_AT(c, 0xc3329u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c332c  add edx, eax
    X86_AT(c, 0xc332cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c332e  lea edx, [eax + edx*2]
    X86_AT(c, 0xc332eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c3331  mov eax, dword ptr [edx + 0xa4dd2]
    X86_AT(c, 0xc3331u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD2u)));
    // 0c3337  cmp eax, 5
    X86_AT(c, 0xc3337u);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0c333a  je 0xc329b
    X86_AT(c, 0xc333au);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc329bu); goto L_c329b; }
    X86_TICK(c, 7);
    // 0c3340  cmp esi, 0x1e
    X86_AT(c, 0xc3340u);
    (void)x86_sub(c, c.r[6], 0x1Eu, 0, 4);
    // 0c3343  je 0xc329b
    X86_AT(c, 0xc3343u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc329bu); goto L_c329b; }
    X86_TICK(c, 15);
    // 0c3349  dec dword ptr [edx + 0xa4dd2]
    X86_AT(c, 0xc3349u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD2u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0c334f  inc esi
    X86_AT(c, 0xc334fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c3350  jmp 0xc329b
    X86_AT(c, 0xc3350u);
    X86_POLL(c, 0xc329bu); goto L_c329b;
L_c3355:
    X86_TICK(c, 11);
    // 0c3355  push 0xb
    X86_AT(c, 0xc3355u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c3357  push 4
    X86_AT(c, 0xc3357u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3359  call 0xbc3ec
    X86_AT(c, 0xc3359u);
    push32(c, 0xc335eu); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xc335eu);
    X86_TICK(c, 13);
    // 0c335e  push 5
    X86_AT(c, 0xc335eu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c3360  push 0x28
    X86_AT(c, 0xc3360u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c3362  push 4
    X86_AT(c, 0xc3362u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3364  call 0xbc174
    X86_AT(c, 0xc3364u);
    push32(c, 0xc3369u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3369u);
    X86_TICK(c, 13);
    // 0c3369  push 2
    X86_AT(c, 0xc3369u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c336b  push esi
    X86_AT(c, 0xc336bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c336c  push 4
    X86_AT(c, 0xc336cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c336e  call 0xba404
    X86_AT(c, 0xc336eu);
    push32(c, 0xc3373u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc3373u);
    X86_TICK(c, 13);
    // 0c3373  push 0xc
    X86_AT(c, 0xc3373u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0c3375  push 0x34
    X86_AT(c, 0xc3375u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0c3377  push 4
    X86_AT(c, 0xc3377u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3379  call 0xbc174
    X86_AT(c, 0xc3379u);
    push32(c, 0xc337eu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc337eu);
    X86_TICK(c, 27);
    // 0c337e  push 2
    X86_AT(c, 0xc337eu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c3380  mov eax, edi
    X86_AT(c, 0xc3380u);
    c.r[0] = c.r[7];
    // 0c3382  lea edx, [eax + eax*2]
    X86_AT(c, 0xc3382u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c3385  shl edx, 5
    X86_AT(c, 0xc3385u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c3388  add edx, eax
    X86_AT(c, 0xc3388u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c338a  lea edx, [eax + edx*2]
    X86_AT(c, 0xc338au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c338d  push dword ptr [edx + 0xa4dd2]
    X86_AT(c, 0xc338du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD2u))); push32(c, v); }
    // 0c3393  push 4
    X86_AT(c, 0xc3393u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3395  call 0xba404
    X86_AT(c, 0xc3395u);
    push32(c, 0xc339au); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc339au);
    X86_TICK(c, 9);
    // 0c339a  add esp, 0x38
    X86_AT(c, 0xc339au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 0c339d  cmp bl, 5
    X86_AT(c, 0xc339du);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0c33a0  jne 0xc33ae
    X86_AT(c, 0xc33a0u);
    if (x86_cc(c, 5)) { goto L_c33ae; }
L_c33a2:
    X86_TICK(c, 9);
    // 0c33a2  mov dword ptr [ebp - 4], 5
    X86_AT(c, 0xc33a2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x5u);
    // 0c33a9  jmp 0xc27a0
    X86_AT(c, 0xc33a9u);
    X86_POLL(c, 0xc27a0u); goto L_c27a0;
L_c33ae:
    X86_TICK(c, 7);
    // 0c33ae  cmp bl, 1
    X86_AT(c, 0xc33aeu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c33b1  je 0xc350e
    X86_AT(c, 0xc33b1u);
    if (x86_cc(c, 4)) { goto L_c350e; }
    X86_TICK(c, 7);
    // 0c33b7  cmp bl, 6
    X86_AT(c, 0xc33b7u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0c33ba  je 0xc33c5
    X86_AT(c, 0xc33bau);
    if (x86_cc(c, 4)) { goto L_c33c5; }
    X86_TICK(c, 7);
    // 0c33bc  cmp bl, 4
    X86_AT(c, 0xc33bcu);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0c33bf  jne 0xc27a0
    X86_AT(c, 0xc33bfu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc27a0u); goto L_c27a0; }
L_c33c5:
    X86_TICK(c, 26);
    // 0c33c5  mov dword ptr [ebp - 4], 7
    X86_AT(c, 0xc33c5u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x7u);
    // 0c33cc  mov eax, edi
    X86_AT(c, 0xc33ccu);
    c.r[0] = c.r[7];
    // 0c33ce  lea edx, [eax + eax*2]
    X86_AT(c, 0xc33ceu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c33d1  shl edx, 5
    X86_AT(c, 0xc33d1u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c33d4  add edx, eax
    X86_AT(c, 0xc33d4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c33d6  lea edx, [eax + edx*2]
    X86_AT(c, 0xc33d6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c33d9  mov eax, dword ptr [edx + 0xa4dd2]
    X86_AT(c, 0xc33d9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD2u)));
    // 0c33df  mov dword ptr [edx + 0xa4dd2], eax
    X86_AT(c, 0xc33dfu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD2u)), c.r[0]);
    // 0c33e5  jmp 0xc27a0
    X86_AT(c, 0xc33e5u);
    X86_POLL(c, 0xc27a0u); goto L_c27a0;
L_c33ea:
    X86_TICK(c, 11);
    // 0c33ea  push 0xe
    X86_AT(c, 0xc33eau);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0c33ec  push 4
    X86_AT(c, 0xc33ecu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c33ee  call 0xbc3ec
    X86_AT(c, 0xc33eeu);
    push32(c, 0xc33f3u); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xc33f3u);
    X86_TICK(c, 2);
    // 0c33f3  add esp, 8
    X86_AT(c, 0xc33f3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c33f6:
    X86_TICK(c, 13);
    // 0c33f6  push 5
    X86_AT(c, 0xc33f6u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c33f8  push 0x28
    X86_AT(c, 0xc33f8u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c33fa  push 4
    X86_AT(c, 0xc33fau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c33fc  call 0xbc174
    X86_AT(c, 0xc33fcu);
    push32(c, 0xc3401u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3401u);
    X86_TICK(c, 13);
    // 0c3401  push 2
    X86_AT(c, 0xc3401u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c3403  push esi
    X86_AT(c, 0xc3403u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c3404  push 4
    X86_AT(c, 0xc3404u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3406  call 0xba404
    X86_AT(c, 0xc3406u);
    push32(c, 0xc340bu); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc340bu);
    X86_TICK(c, 13);
    // 0c340b  push 0xd
    X86_AT(c, 0xc340bu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0c340d  push 0x34
    X86_AT(c, 0xc340du);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0c340f  push 4
    X86_AT(c, 0xc340fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3411  call 0xbc174
    X86_AT(c, 0xc3411u);
    push32(c, 0xc3416u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3416u);
    X86_TICK(c, 29);
    // 0c3416  push 2
    X86_AT(c, 0xc3416u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c3418  mov eax, edi
    X86_AT(c, 0xc3418u);
    c.r[0] = c.r[7];
    // 0c341a  lea edx, [eax + eax*2]
    X86_AT(c, 0xc341au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c341d  shl edx, 5
    X86_AT(c, 0xc341du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c3420  add edx, eax
    X86_AT(c, 0xc3420u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c3422  lea edx, [eax + edx*2]
    X86_AT(c, 0xc3422u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c3425  push dword ptr [edx + 0xa4dd6]
    X86_AT(c, 0xc3425u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD6u))); push32(c, v); }
    // 0c342b  push 4
    X86_AT(c, 0xc342bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c342d  mov dword ptr [ebp - 0x20], edx
    X86_AT(c, 0xc342du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)), c.r[2]);
    // 0c3430  call 0xba404
    X86_AT(c, 0xc3430u);
    push32(c, 0xc3435u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc3435u);
    X86_TICK(c, 9);
    // 0c3435  push 4
    X86_AT(c, 0xc3435u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3437  call 0xb9930
    X86_AT(c, 0xc3437u);
    push32(c, 0xc343cu); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc343cu);
    X86_TICK(c, 12);
    // 0c343c  xchg ebx, eax
    X86_AT(c, 0xc343cu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c343d  add esp, 0x34
    X86_AT(c, 0xc343du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
    // 0c3440  cmp bl, 5
    X86_AT(c, 0xc3440u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0c3443  je 0xc34b0
    X86_AT(c, 0xc3443u);
    if (x86_cc(c, 4)) { goto L_c34b0; }
    X86_TICK(c, 7);
    // 0c3449  cmp bl, 6
    X86_AT(c, 0xc3449u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0c344c  je 0xc34b0
    X86_AT(c, 0xc344cu);
    if (x86_cc(c, 4)) { goto L_c34b0; }
    X86_TICK(c, 7);
    // 0c344e  cmp bl, 4
    X86_AT(c, 0xc344eu);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0c3451  je 0xc34b0
    X86_AT(c, 0xc3451u);
    if (x86_cc(c, 4)) { goto L_c34b0; }
    X86_TICK(c, 7);
    // 0c3453  cmp bl, 1
    X86_AT(c, 0xc3453u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c3456  je 0xc34b0
    X86_AT(c, 0xc3456u);
    if (x86_cc(c, 4)) { goto L_c34b0; }
    X86_TICK(c, 7);
    // 0c3458  cmp bl, 7
    X86_AT(c, 0xc3458u);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0c345b  jne 0xc3476
    X86_AT(c, 0xc345bu);
    if (x86_cc(c, 5)) { goto L_c3476; }
    X86_TICK(c, 15);
    // 0c345d  mov eax, dword ptr [ebp - 0x20]
    X86_AT(c, 0xc345du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)));
    // 0c3460  mov edx, dword ptr [eax + 0xa4dd6]
    X86_AT(c, 0xc3460u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4DD6u)));
    // 0c3466  cmp edx, 0x19
    X86_AT(c, 0xc3466u);
    (void)x86_sub(c, c.r[2], 0x19u, 0, 4);
    // 0c3469  je 0xc33f6
    X86_AT(c, 0xc3469u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc33f6u); goto L_c33f6; }
    X86_TICK(c, 7);
    // 0c346b  and esi, esi
    X86_AT(c, 0xc346bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0c346d  je 0xc33f6
    X86_AT(c, 0xc346du);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc33f6u); goto L_c33f6; }
    X86_TICK(c, 8);
    // 0c346f  inc dword ptr [eax + 0xa4dd6]
    X86_AT(c, 0xc346fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xA4DD6u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0c3475  dec esi
    X86_AT(c, 0xc3475u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_c3476:
    X86_TICK(c, 7);
    // 0c3476  cmp bl, 3
    X86_AT(c, 0xc3476u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0c3479  jne 0xc33f6
    X86_AT(c, 0xc3479u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc33f6u); goto L_c33f6; }
    X86_TICK(c, 22);
    // 0c347f  mov eax, edi
    X86_AT(c, 0xc347fu);
    c.r[0] = c.r[7];
    // 0c3481  lea edx, [eax + eax*2]
    X86_AT(c, 0xc3481u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c3484  shl edx, 5
    X86_AT(c, 0xc3484u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c3487  add edx, eax
    X86_AT(c, 0xc3487u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c3489  lea edx, [eax + edx*2]
    X86_AT(c, 0xc3489u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c348c  mov eax, dword ptr [edx + 0xa4dd6]
    X86_AT(c, 0xc348cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD6u)));
    // 0c3492  cmp eax, 5
    X86_AT(c, 0xc3492u);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0c3495  je 0xc33f6
    X86_AT(c, 0xc3495u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc33f6u); goto L_c33f6; }
    X86_TICK(c, 7);
    // 0c349b  cmp esi, 0x1e
    X86_AT(c, 0xc349bu);
    (void)x86_sub(c, c.r[6], 0x1Eu, 0, 4);
    // 0c349e  je 0xc33f6
    X86_AT(c, 0xc349eu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc33f6u); goto L_c33f6; }
    X86_TICK(c, 15);
    // 0c34a4  dec dword ptr [edx + 0xa4dd6]
    X86_AT(c, 0xc34a4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD6u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0c34aa  inc esi
    X86_AT(c, 0xc34aau);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c34ab  jmp 0xc33f6
    X86_AT(c, 0xc34abu);
    X86_POLL(c, 0xc33f6u); goto L_c33f6;
L_c34b0:
    X86_TICK(c, 11);
    // 0c34b0  push 0xb
    X86_AT(c, 0xc34b0u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c34b2  push 4
    X86_AT(c, 0xc34b2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c34b4  call 0xbc3ec
    X86_AT(c, 0xc34b4u);
    push32(c, 0xc34b9u); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xc34b9u);
    X86_TICK(c, 13);
    // 0c34b9  push 5
    X86_AT(c, 0xc34b9u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c34bb  push 0x28
    X86_AT(c, 0xc34bbu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0c34bd  push 4
    X86_AT(c, 0xc34bdu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c34bf  call 0xbc174
    X86_AT(c, 0xc34bfu);
    push32(c, 0xc34c4u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc34c4u);
    X86_TICK(c, 13);
    // 0c34c4  push 2
    X86_AT(c, 0xc34c4u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c34c6  push esi
    X86_AT(c, 0xc34c6u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c34c7  push 4
    X86_AT(c, 0xc34c7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c34c9  call 0xba404
    X86_AT(c, 0xc34c9u);
    push32(c, 0xc34ceu); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc34ceu);
    X86_TICK(c, 13);
    // 0c34ce  push 0xd
    X86_AT(c, 0xc34ceu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0c34d0  push 0x34
    X86_AT(c, 0xc34d0u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0c34d2  push 4
    X86_AT(c, 0xc34d2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c34d4  call 0xbc174
    X86_AT(c, 0xc34d4u);
    push32(c, 0xc34d9u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc34d9u);
    X86_TICK(c, 27);
    // 0c34d9  push 2
    X86_AT(c, 0xc34d9u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c34db  mov eax, edi
    X86_AT(c, 0xc34dbu);
    c.r[0] = c.r[7];
    // 0c34dd  lea edx, [eax + eax*2]
    X86_AT(c, 0xc34ddu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c34e0  shl edx, 5
    X86_AT(c, 0xc34e0u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c34e3  add edx, eax
    X86_AT(c, 0xc34e3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c34e5  lea edx, [eax + edx*2]
    X86_AT(c, 0xc34e5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c34e8  push dword ptr [edx + 0xa4dd6]
    X86_AT(c, 0xc34e8u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD6u))); push32(c, v); }
    // 0c34ee  push 4
    X86_AT(c, 0xc34eeu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c34f0  call 0xba404
    X86_AT(c, 0xc34f0u);
    push32(c, 0xc34f5u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc34f5u);
    X86_TICK(c, 9);
    // 0c34f5  add esp, 0x38
    X86_AT(c, 0xc34f5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 0c34f8  cmp bl, 5
    X86_AT(c, 0xc34f8u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0c34fb  jne 0xc3509
    X86_AT(c, 0xc34fbu);
    if (x86_cc(c, 5)) { goto L_c3509; }
    X86_TICK(c, 9);
    // 0c34fd  mov dword ptr [ebp - 4], 6
    X86_AT(c, 0xc34fdu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x6u);
    // 0c3504  jmp 0xc27a0
    X86_AT(c, 0xc3504u);
    X86_POLL(c, 0xc27a0u); goto L_c27a0;
L_c3509:
    X86_TICK(c, 7);
    // 0c3509  cmp bl, 1
    X86_AT(c, 0xc3509u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c350c  jne 0xc3518
    X86_AT(c, 0xc350cu);
    if (x86_cc(c, 5)) { goto L_c3518; }
L_c350e:
    X86_TICK(c, 9);
    // 0c350e  mov eax, 0xffffffff
    X86_AT(c, 0xc350eu);
    c.r[0] = 0xFFFFFFFFu;
    // 0c3513  jmp 0xc35c9
    X86_AT(c, 0xc3513u);
    goto L_c35c9;
L_c3518:
    X86_TICK(c, 7);
    // 0c3518  cmp bl, 6
    X86_AT(c, 0xc3518u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0c351b  je 0xc3526
    X86_AT(c, 0xc351bu);
    if (x86_cc(c, 4)) { goto L_c3526; }
    X86_TICK(c, 7);
    // 0c351d  cmp bl, 4
    X86_AT(c, 0xc351du);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0c3520  jne 0xc27a0
    X86_AT(c, 0xc3520u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc27a0u); goto L_c27a0; }
L_c3526:
    X86_TICK(c, 26);
    // 0c3526  mov dword ptr [ebp - 4], 8
    X86_AT(c, 0xc3526u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x8u);
    // 0c352d  mov eax, edi
    X86_AT(c, 0xc352du);
    c.r[0] = c.r[7];
    // 0c352f  lea edx, [eax + eax*2]
    X86_AT(c, 0xc352fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c3532  shl edx, 5
    X86_AT(c, 0xc3532u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c3535  add edx, eax
    X86_AT(c, 0xc3535u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c3537  lea edx, [eax + edx*2]
    X86_AT(c, 0xc3537u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c353a  mov eax, dword ptr [edx + 0xa4dd6]
    X86_AT(c, 0xc353au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD6u)));
    // 0c3540  mov dword ptr [edx + 0xa4dd6], eax
    X86_AT(c, 0xc3540u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD6u)), c.r[0]);
    // 0c3546  jmp 0xc27a0
    X86_AT(c, 0xc3546u);
    X86_POLL(c, 0xc27a0u); goto L_c27a0;
L_c354b:
    X86_TICK(c, 13);
    // 0c354b  push 3
    X86_AT(c, 0xc354bu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c354d  push 0xf
    X86_AT(c, 0xc354du);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0c354f  push 4
    X86_AT(c, 0xc354fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3551  call 0xbc174
    X86_AT(c, 0xc3551u);
    push32(c, 0xc3556u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3556u);
    X86_TICK(c, 24);
    // 0c3556  mov eax, edi
    X86_AT(c, 0xc3556u);
    c.r[0] = c.r[7];
    // 0c3558  lea edx, [eax + eax*2]
    X86_AT(c, 0xc3558u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c355b  shl edx, 5
    X86_AT(c, 0xc355bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c355e  add edx, eax
    X86_AT(c, 0xc355eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c3560  lea edx, [eax + edx*2]
    X86_AT(c, 0xc3560u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c3563  lea eax, [edx*1 + 0xa4dac]
    X86_AT(c, 0xc3563u);
    c.r[0] = (uint32_t)(c.r[2] + 0xA4DACu);
    // 0c356a  push eax
    X86_AT(c, 0xc356au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c356b  push 4
    X86_AT(c, 0xc356bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c356d  call 0xbbfe0
    X86_AT(c, 0xc356du);
    push32(c, 0xc3572u); x86_call_known(c, 0xbbfe0u, f_000bbfe0); X86_RET(c, 0xc3572u);
    X86_TICK(c, 11);
    // 0c3572  push 0x36b4
    X86_AT(c, 0xc3572u);
    { uint32_t v = 0x36B4u; push32(c, v); }
    // 0c3577  push 4
    X86_AT(c, 0xc3577u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3579  call 0xba428
    X86_AT(c, 0xc3579u);
    push32(c, 0xc357eu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc357eu);
    X86_TICK(c, 9);
    // 0c357e  push 0x36f4
    X86_AT(c, 0xc357eu);
    { uint32_t v = 0x36F4u; push32(c, v); }
    // 0c3583  call 0xbc50c
    X86_AT(c, 0xc3583u);
    push32(c, 0xc3588u); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc3588u);
    X86_TICK(c, 2);
    // 0c3588  add esp, 0x20
    X86_AT(c, 0xc3588u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
L_c358b:
    X86_TICK(c, 9);
    // 0c358b  push 4
    X86_AT(c, 0xc358bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c358d  call 0xb9930
    X86_AT(c, 0xc358du);
    push32(c, 0xc3592u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc3592u);
    X86_TICK(c, 11);
    // 0c3592  mov byte ptr [ebp - 0xd], al
    X86_AT(c, 0xc3592u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u)), g8(c, 0));
    // 0c3595  add esp, 4
    X86_AT(c, 0xc3595u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c3598  cmp al, 0x59
    X86_AT(c, 0xc3598u);
    (void)x86_sub(c, g8(c, 0), 0x59u, 0, 1);
    // 0c359a  je 0xc35a4
    X86_AT(c, 0xc359au);
    if (x86_cc(c, 4)) { goto L_c35a4; }
    X86_TICK(c, 7);
    // 0c359c  cmp al, 0x4e
    X86_AT(c, 0xc359cu);
    (void)x86_sub(c, g8(c, 0), 0x4Eu, 0, 1);
    // 0c359e  je 0xc35a4
    X86_AT(c, 0xc359eu);
    if (x86_cc(c, 4)) { goto L_c35a4; }
    X86_TICK(c, 7);
    // 0c35a0  dec al
    X86_AT(c, 0xc35a0u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0c35a2  jne 0xc358b
    X86_AT(c, 0xc35a2u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc358bu); goto L_c358b; }
L_c35a4:
    X86_TICK(c, 9);
    // 0c35a4  push 2
    X86_AT(c, 0xc35a4u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c35a6  call 0xbbb5c
    X86_AT(c, 0xc35a6u);
    push32(c, 0xc35abu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc35abu);
    X86_TICK(c, 9);
    // 0c35ab  push 4
    X86_AT(c, 0xc35abu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c35ad  call 0xbb6b0
    X86_AT(c, 0xc35adu);
    push32(c, 0xc35b2u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc35b2u);
    X86_TICK(c, 14);
    // 0c35b2  add esp, 8
    X86_AT(c, 0xc35b2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c35b5  cmp byte ptr [ebp - 0xd], 0x59
    X86_AT(c, 0xc35b5u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))), 0x59u, 0, 1);
    // 0c35b9  je 0xc35c7
    X86_AT(c, 0xc35b9u);
    if (x86_cc(c, 4)) { goto L_c35c7; }
    X86_TICK(c, 9);
    // 0c35bb  mov dword ptr [ebp - 4], 7
    X86_AT(c, 0xc35bbu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x7u);
    // 0c35c2  jmp 0xc27a0
    X86_AT(c, 0xc35c2u);
    X86_POLL(c, 0xc27a0u); goto L_c27a0;
L_c35c7:
    X86_TICK(c, 2);
    // 0c35c7  sub eax, eax
    X86_AT(c, 0xc35c7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_c35c9:
    X86_TICK(c, 28);
    // 0c35c9  pop edi
    X86_AT(c, 0xc35c9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c35ca  pop esi
    X86_AT(c, 0xc35cau);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c35cb  pop ebx
    X86_AT(c, 0xc35cbu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c35cc  leave 
    X86_AT(c, 0xc35ccu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c35cd  ret 
    X86_AT(c, 0xc35cdu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc2f8fu, "ran off the end of a function");
}
void f_000c35c9(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0c35c9  pop edi
    X86_AT(c, 0xc35c9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c35ca  pop esi
    X86_AT(c, 0xc35cau);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c35cb  pop ebx
    X86_AT(c, 0xc35cbu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c35cc  leave 
    X86_AT(c, 0xc35ccu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c35cd  ret 
    X86_AT(c, 0xc35cdu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc35c9u, "ran off the end of a function");
}
void f_000c35d0(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0c35d0  push ebp
    X86_AT(c, 0xc35d0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c35d1  mov ebp, esp
    X86_AT(c, 0xc35d1u);
    c.r[5] = c.r[4];
    // 0c35d3  sub esp, 8
    X86_AT(c, 0xc35d3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0c35d6  push ebx
    X86_AT(c, 0xc35d6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c35d7  push esi
    X86_AT(c, 0xc35d7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c35d8  push edi
    X86_AT(c, 0xc35d8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c35d9  sub eax, eax
    X86_AT(c, 0xc35d9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c35db  mov byte ptr [ebp - 2], al
    X86_AT(c, 0xc35dbu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 0));
    // 0c35de  mov byte ptr [ebp - 1], al
    X86_AT(c, 0xc35deu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
L_c35e1:
    X86_TICK(c, 9);
    // 0c35e1  push 4
    X86_AT(c, 0xc35e1u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c35e3  call 0xbc480
    X86_AT(c, 0xc35e3u);
    push32(c, 0xc35e8u); x86_call_known(c, 0xbc480u, f_000bc480); X86_RET(c, 0xc35e8u);
    X86_TICK(c, 17);
    // 0c35e8  push 0x17
    X86_AT(c, 0xc35e8u);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0c35ea  push 0x4d
    X86_AT(c, 0xc35eau);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0c35ec  push 3
    X86_AT(c, 0xc35ecu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c35ee  push 0
    X86_AT(c, 0xc35eeu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c35f0  push 4
    X86_AT(c, 0xc35f0u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c35f2  call 0xbc2b0
    X86_AT(c, 0xc35f2u);
    push32(c, 0xc35f7u); x86_call_known(c, 0xbc2b0u, f_000bc2b0); X86_RET(c, 0xc35f7u);
    X86_TICK(c, 2);
    // 0c35f7  add esp, 0x18
    X86_AT(c, 0xc35f7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_c35fa:
    X86_TICK(c, 13);
    // 0c35fa  push 3
    X86_AT(c, 0xc35fau);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c35fc  push 0
    X86_AT(c, 0xc35fcu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c35fe  push 4
    X86_AT(c, 0xc35feu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3600  call 0xbc174
    X86_AT(c, 0xc3600u);
    push32(c, 0xc3605u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3605u);
    X86_TICK(c, 11);
    // 0c3605  push 0x3720
    X86_AT(c, 0xc3605u);
    { uint32_t v = 0x3720u; push32(c, v); }
    // 0c360a  push 4
    X86_AT(c, 0xc360au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c360c  call 0xba428
    X86_AT(c, 0xc360cu);
    push32(c, 0xc3611u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc3611u);
    X86_TICK(c, 13);
    // 0c3611  push 3
    X86_AT(c, 0xc3611u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c3613  push 0xf
    X86_AT(c, 0xc3613u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0c3615  push 4
    X86_AT(c, 0xc3615u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3617  call 0xbc174
    X86_AT(c, 0xc3617u);
    push32(c, 0xc361cu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc361cu);
    X86_TICK(c, 11);
    // 0c361c  push 0xa68e8
    X86_AT(c, 0xc361cu);
    { uint32_t v = 0xA68E8u; push32(c, v); }
    // 0c3621  push 4
    X86_AT(c, 0xc3621u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3623  call 0xba428
    X86_AT(c, 0xc3623u);
    push32(c, 0xc3628u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc3628u);
    X86_TICK(c, 11);
    // 0c3628  push 0xe
    X86_AT(c, 0xc3628u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0c362a  push 4
    X86_AT(c, 0xc362au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c362c  call 0xbc3ec
    X86_AT(c, 0xc362cu);
    push32(c, 0xc3631u); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xc3631u);
    X86_TICK(c, 9);
    // 0c3631  push 4
    X86_AT(c, 0xc3631u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3633  call 0xbb6b0
    X86_AT(c, 0xc3633u);
    push32(c, 0xc3638u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc3638u);
    X86_TICK(c, 13);
    // 0c3638  push 3
    X86_AT(c, 0xc3638u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c363a  push 0x27
    X86_AT(c, 0xc363au);
    { uint32_t v = 0x27u; push32(c, v); }
    // 0c363c  push 4
    X86_AT(c, 0xc363cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c363e  call 0xbc174
    X86_AT(c, 0xc363eu);
    push32(c, 0xc3643u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3643u);
    X86_TICK(c, 11);
    // 0c3643  add esp, 0x40
    X86_AT(c, 0xc3643u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0c3646  push 4
    X86_AT(c, 0xc3646u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3648  call 0xb6308
    X86_AT(c, 0xc3648u);
    push32(c, 0xc364du); x86_call_known(c, 0xb6308u, f_000b6308); X86_RET(c, 0xc364du);
    X86_TICK(c, 14);
    // 0c364d  xchg edi, eax
    X86_AT(c, 0xc364du);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0c364e  push 0xb
    X86_AT(c, 0xc364eu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c3650  push 4
    X86_AT(c, 0xc3650u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3652  call 0xbc3ec
    X86_AT(c, 0xc3652u);
    push32(c, 0xc3657u); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xc3657u);
    X86_TICK(c, 9);
    // 0c3657  push 4
    X86_AT(c, 0xc3657u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3659  call 0xbb6b0
    X86_AT(c, 0xc3659u);
    push32(c, 0xc365eu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc365eu);
    X86_TICK(c, 9);
    // 0c365e  add esp, 0x10
    X86_AT(c, 0xc365eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c3661  cmp edi, 0xffffffff
    X86_AT(c, 0xc3661u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0c3664  je 0xc366a
    X86_AT(c, 0xc3664u);
    if (x86_cc(c, 4)) { goto L_c366a; }
    X86_TICK(c, 7);
    // 0c3666  and edi, edi
    X86_AT(c, 0xc3666u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0c3668  jne 0xc369f
    X86_AT(c, 0xc3668u);
    if (x86_cc(c, 5)) { goto L_c369f; }
L_c366a:
    X86_TICK(c, 13);
    // 0c366a  push 3
    X86_AT(c, 0xc366au);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c366c  push 0x1b
    X86_AT(c, 0xc366cu);
    { uint32_t v = 0x1Bu; push32(c, v); }
    // 0c366e  push 4
    X86_AT(c, 0xc366eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3670  call 0xbc174
    X86_AT(c, 0xc3670u);
    push32(c, 0xc3675u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3675u);
    X86_TICK(c, 11);
    // 0c3675  push 0xa697c
    X86_AT(c, 0xc3675u);
    { uint32_t v = 0xA697Cu; push32(c, v); }
    // 0c367a  push 4
    X86_AT(c, 0xc367au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c367c  call 0xba428
    X86_AT(c, 0xc367cu);
    push32(c, 0xc3681u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc3681u);
    X86_TICK(c, 17);
    // 0c3681  push 0x17
    X86_AT(c, 0xc3681u);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0c3683  push 0x4d
    X86_AT(c, 0xc3683u);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0c3685  push 3
    X86_AT(c, 0xc3685u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c3687  push 0
    X86_AT(c, 0xc3687u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c3689  push 4
    X86_AT(c, 0xc3689u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c368b  call 0xbc2b0
    X86_AT(c, 0xc368bu);
    push32(c, 0xc3690u); x86_call_known(c, 0xbc2b0u, f_000bc2b0); X86_RET(c, 0xc3690u);
    X86_TICK(c, 9);
    // 0c3690  push 4
    X86_AT(c, 0xc3690u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3692  call 0xbc498
    X86_AT(c, 0xc3692u);
    push32(c, 0xc3697u); x86_call_known(c, 0xbc498u, f_000bc498); X86_RET(c, 0xc3697u);
    X86_TICK(c, 9);
    // 0c3697  add esp, 0x2c
    X86_AT(c, 0xc3697u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0c369a  jmp 0xc3b3d
    X86_AT(c, 0xc369au);
    goto L_c3b3d;
L_c369f:
    X86_TICK(c, 7);
    // 0c369f  cmp edi, 0x14
    X86_AT(c, 0xc369fu);
    (void)x86_sub(c, c.r[7], 0x14u, 0, 4);
    // 0c36a2  jg 0xc36a8
    X86_AT(c, 0xc36a2u);
    if (x86_cc(c, 15)) { goto L_c36a8; }
    X86_TICK(c, 7);
    // 0c36a4  and edi, edi
    X86_AT(c, 0xc36a4u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0c36a6  jg 0xc36f0
    X86_AT(c, 0xc36a6u);
    if (x86_cc(c, 15)) { goto L_c36f0; }
L_c36a8:
    X86_TICK(c, 13);
    // 0c36a8  push 3
    X86_AT(c, 0xc36a8u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c36aa  push 0xf
    X86_AT(c, 0xc36aau);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0c36ac  push 4
    X86_AT(c, 0xc36acu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c36ae  call 0xbc174
    X86_AT(c, 0xc36aeu);
    push32(c, 0xc36b3u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc36b3u);
    X86_TICK(c, 11);
    // 0c36b3  push 0xa6928
    X86_AT(c, 0xc36b3u);
    { uint32_t v = 0xA6928u; push32(c, v); }
    // 0c36b8  push 4
    X86_AT(c, 0xc36b8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c36ba  call 0xba428
    X86_AT(c, 0xc36bau);
    push32(c, 0xc36bfu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc36bfu);
    X86_TICK(c, 9);
    // 0c36bf  push 0x373c
    X86_AT(c, 0xc36bfu);
    { uint32_t v = 0x373Cu; push32(c, v); }
    // 0c36c4  call 0xbc50c
    X86_AT(c, 0xc36c4u);
    push32(c, 0xc36c9u); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc36c9u);
    X86_TICK(c, 2);
    // 0c36c9  add esp, 0x18
    X86_AT(c, 0xc36c9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_c36cc:
    X86_TICK(c, 9);
    // 0c36cc  push 4
    X86_AT(c, 0xc36ccu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c36ce  call 0xb9930
    X86_AT(c, 0xc36ceu);
    push32(c, 0xc36d3u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc36d3u);
    X86_TICK(c, 9);
    // 0c36d3  add esp, 4
    X86_AT(c, 0xc36d3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c36d6  and al, al
    X86_AT(c, 0xc36d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c36d8  je 0xc36cc
    X86_AT(c, 0xc36d8u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc36ccu); goto L_c36cc; }
    X86_TICK(c, 9);
    // 0c36da  push 2
    X86_AT(c, 0xc36dau);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c36dc  call 0xbbb5c
    X86_AT(c, 0xc36dcu);
    push32(c, 0xc36e1u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc36e1u);
    X86_TICK(c, 9);
    // 0c36e1  push 4
    X86_AT(c, 0xc36e1u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c36e3  call 0xbb6b0
    X86_AT(c, 0xc36e3u);
    push32(c, 0xc36e8u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc36e8u);
    X86_TICK(c, 9);
    // 0c36e8  add esp, 8
    X86_AT(c, 0xc36e8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c36eb  jmp 0xc35fa
    X86_AT(c, 0xc36ebu);
    X86_POLL(c, 0xc35fau); goto L_c35fa;
L_c36f0:
    X86_TICK(c, 13);
    // 0c36f0  push 3
    X86_AT(c, 0xc36f0u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c36f2  push 0xf
    X86_AT(c, 0xc36f2u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0c36f4  push 4
    X86_AT(c, 0xc36f4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c36f6  call 0xbc174
    X86_AT(c, 0xc36f6u);
    push32(c, 0xc36fbu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc36fbu);
    X86_TICK(c, 11);
    // 0c36fb  push 0xa68e8
    X86_AT(c, 0xc36fbu);
    { uint32_t v = 0xA68E8u; push32(c, v); }
    // 0c3700  push 4
    X86_AT(c, 0xc3700u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3702  call 0xba428
    X86_AT(c, 0xc3702u);
    push32(c, 0xc3707u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc3707u);
    X86_TICK(c, 13);
    // 0c3707  push 3
    X86_AT(c, 0xc3707u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c3709  push 0x27
    X86_AT(c, 0xc3709u);
    { uint32_t v = 0x27u; push32(c, v); }
    // 0c370b  push 4
    X86_AT(c, 0xc370bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c370d  call 0xbc174
    X86_AT(c, 0xc370du);
    push32(c, 0xc3712u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3712u);
    X86_TICK(c, 13);
    // 0c3712  push 2
    X86_AT(c, 0xc3712u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c3714  push edi
    X86_AT(c, 0xc3714u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c3715  push 4
    X86_AT(c, 0xc3715u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3717  call 0xba404
    X86_AT(c, 0xc3717u);
    push32(c, 0xc371cu); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc371cu);
    X86_TICK(c, 27);
    // 0c371c  dec edi
    X86_AT(c, 0xc371cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 0c371d  mov eax, edi
    X86_AT(c, 0xc371du);
    c.r[0] = c.r[7];
    // 0c371f  lea edx, [eax + eax*2]
    X86_AT(c, 0xc371fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c3722  shl edx, 5
    X86_AT(c, 0xc3722u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c3725  add edx, eax
    X86_AT(c, 0xc3725u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c3727  lea edx, [eax + edx*2]
    X86_AT(c, 0xc3727u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c372a  add esp, 0x2c
    X86_AT(c, 0xc372au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0c372d  cmp byte ptr [edx + 0xa4dac], 0
    X86_AT(c, 0xc372du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DACu))), 0x0u, 0, 1);
    // 0c3734  je 0xc376d
    X86_AT(c, 0xc3734u);
    if (x86_cc(c, 4)) { goto L_c376d; }
    X86_TICK(c, 13);
    // 0c3736  push 3
    X86_AT(c, 0xc3736u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c3738  push 0xf
    X86_AT(c, 0xc3738u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0c373a  push 4
    X86_AT(c, 0xc373au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c373c  call 0xbc174
    X86_AT(c, 0xc373cu);
    push32(c, 0xc3741u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3741u);
    X86_TICK(c, 11);
    // 0c3741  push 0x3770
    X86_AT(c, 0xc3741u);
    { uint32_t v = 0x3770u; push32(c, v); }
    // 0c3746  push 4
    X86_AT(c, 0xc3746u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3748  call 0xba428
    X86_AT(c, 0xc3748u);
    push32(c, 0xc374du); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc374du);
    X86_TICK(c, 9);
    // 0c374d  push 0x37b4
    X86_AT(c, 0xc374du);
    { uint32_t v = 0x37B4u; push32(c, v); }
    // 0c3752  call 0xbc50c
    X86_AT(c, 0xc3752u);
    push32(c, 0xc3757u); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc3757u);
    X86_TICK(c, 2);
    // 0c3757  add esp, 0x18
    X86_AT(c, 0xc3757u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_c375a:
    X86_TICK(c, 9);
    // 0c375a  push 4
    X86_AT(c, 0xc375au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c375c  call 0xb9930
    X86_AT(c, 0xc375cu);
    push32(c, 0xc3761u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc3761u);
    X86_TICK(c, 9);
    // 0c3761  add esp, 4
    X86_AT(c, 0xc3761u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c3764  and al, al
    X86_AT(c, 0xc3764u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c3766  je 0xc375a
    X86_AT(c, 0xc3766u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc375au); goto L_c375a; }
    X86_TICK(c, 7);
    // 0c3768  jmp 0xc3b27
    X86_AT(c, 0xc3768u);
    goto L_c3b27;
L_c376d:
    X86_TICK(c, 13);
    // 0c376d  push 5
    X86_AT(c, 0xc376du);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c376f  push 0xe
    X86_AT(c, 0xc376fu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0c3771  push 4
    X86_AT(c, 0xc3771u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3773  call 0xbc174
    X86_AT(c, 0xc3773u);
    push32(c, 0xc3778u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3778u);
    X86_TICK(c, 11);
    // 0c3778  push 0x37e8
    X86_AT(c, 0xc3778u);
    { uint32_t v = 0x37E8u; push32(c, v); }
    // 0c377d  push 4
    X86_AT(c, 0xc377du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c377f  call 0xba428
    X86_AT(c, 0xc377fu);
    push32(c, 0xc3784u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc3784u);
    X86_TICK(c, 13);
    // 0c3784  push 6
    X86_AT(c, 0xc3784u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c3786  push 0xe
    X86_AT(c, 0xc3786u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0c3788  push 4
    X86_AT(c, 0xc3788u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c378a  call 0xbc174
    X86_AT(c, 0xc378au);
    push32(c, 0xc378fu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc378fu);
    X86_TICK(c, 11);
    // 0c378f  push 0x3828
    X86_AT(c, 0xc378fu);
    { uint32_t v = 0x3828u; push32(c, v); }
    // 0c3794  push 4
    X86_AT(c, 0xc3794u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3796  call 0xba428
    X86_AT(c, 0xc3796u);
    push32(c, 0xc379bu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc379bu);
    X86_TICK(c, 13);
    // 0c379b  push 7
    X86_AT(c, 0xc379bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c379d  push 0xe
    X86_AT(c, 0xc379du);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0c379f  push 4
    X86_AT(c, 0xc379fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c37a1  call 0xbc174
    X86_AT(c, 0xc37a1u);
    push32(c, 0xc37a6u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc37a6u);
    X86_TICK(c, 11);
    // 0c37a6  push 0x3860
    X86_AT(c, 0xc37a6u);
    { uint32_t v = 0x3860u; push32(c, v); }
    // 0c37ab  push 4
    X86_AT(c, 0xc37abu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c37ad  call 0xba428
    X86_AT(c, 0xc37adu);
    push32(c, 0xc37b2u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc37b2u);
    X86_TICK(c, 15);
    // 0c37b2  add esp, 0x3c
    X86_AT(c, 0xc37b2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c37b5  push 8
    X86_AT(c, 0xc37b5u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0c37b7  push 0xe
    X86_AT(c, 0xc37b7u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0c37b9  push 4
    X86_AT(c, 0xc37b9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c37bb  call 0xbc174
    X86_AT(c, 0xc37bbu);
    push32(c, 0xc37c0u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc37c0u);
    X86_TICK(c, 11);
    // 0c37c0  push 0x3898
    X86_AT(c, 0xc37c0u);
    { uint32_t v = 0x3898u; push32(c, v); }
    // 0c37c5  push 4
    X86_AT(c, 0xc37c5u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c37c7  call 0xba428
    X86_AT(c, 0xc37c7u);
    push32(c, 0xc37ccu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc37ccu);
    X86_TICK(c, 13);
    // 0c37cc  push 9
    X86_AT(c, 0xc37ccu);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0c37ce  push 0xe
    X86_AT(c, 0xc37ceu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0c37d0  push 4
    X86_AT(c, 0xc37d0u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c37d2  call 0xbc174
    X86_AT(c, 0xc37d2u);
    push32(c, 0xc37d7u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc37d7u);
    X86_TICK(c, 11);
    // 0c37d7  push 0x38d0
    X86_AT(c, 0xc37d7u);
    { uint32_t v = 0x38D0u; push32(c, v); }
    // 0c37dc  push 4
    X86_AT(c, 0xc37dcu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c37de  call 0xba428
    X86_AT(c, 0xc37deu);
    push32(c, 0xc37e3u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc37e3u);
    X86_TICK(c, 13);
    // 0c37e3  push 0xa
    X86_AT(c, 0xc37e3u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0c37e5  push 0x14
    X86_AT(c, 0xc37e5u);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0c37e7  push 4
    X86_AT(c, 0xc37e7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c37e9  call 0xbc174
    X86_AT(c, 0xc37e9u);
    push32(c, 0xc37eeu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc37eeu);
    X86_TICK(c, 11);
    // 0c37ee  push 0x3908
    X86_AT(c, 0xc37eeu);
    { uint32_t v = 0x3908u; push32(c, v); }
    // 0c37f3  push 4
    X86_AT(c, 0xc37f3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c37f5  call 0xba428
    X86_AT(c, 0xc37f5u);
    push32(c, 0xc37fau); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc37fau);
    X86_TICK(c, 15);
    // 0c37fa  add esp, 0x3c
    X86_AT(c, 0xc37fau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c37fd  push 0xb
    X86_AT(c, 0xc37fdu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c37ff  push 0x14
    X86_AT(c, 0xc37ffu);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0c3801  push 4
    X86_AT(c, 0xc3801u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3803  call 0xbc174
    X86_AT(c, 0xc3803u);
    push32(c, 0xc3808u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3808u);
    X86_TICK(c, 11);
    // 0c3808  push 0x3950
    X86_AT(c, 0xc3808u);
    { uint32_t v = 0x3950u; push32(c, v); }
    // 0c380d  push 4
    X86_AT(c, 0xc380du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c380f  call 0xba428
    X86_AT(c, 0xc380fu);
    push32(c, 0xc3814u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc3814u);
    X86_TICK(c, 13);
    // 0c3814  push 0xc
    X86_AT(c, 0xc3814u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0c3816  push 0x14
    X86_AT(c, 0xc3816u);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0c3818  push 4
    X86_AT(c, 0xc3818u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c381a  call 0xbc174
    X86_AT(c, 0xc381au);
    push32(c, 0xc381fu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc381fu);
    X86_TICK(c, 13);
    // 0c381f  add esp, 0x20
    X86_AT(c, 0xc381fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0c3822  push 0x3998
    X86_AT(c, 0xc3822u);
    { uint32_t v = 0x3998u; push32(c, v); }
    // 0c3827  push 4
    X86_AT(c, 0xc3827u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3829  call 0xba428
    X86_AT(c, 0xc3829u);
    push32(c, 0xc382eu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc382eu);
    X86_TICK(c, 13);
    // 0c382e  push 0xd
    X86_AT(c, 0xc382eu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0c3830  push 0x14
    X86_AT(c, 0xc3830u);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0c3832  push 4
    X86_AT(c, 0xc3832u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3834  call 0xbc174
    X86_AT(c, 0xc3834u);
    push32(c, 0xc3839u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3839u);
    X86_TICK(c, 11);
    // 0c3839  push 0x39e0
    X86_AT(c, 0xc3839u);
    { uint32_t v = 0x39E0u; push32(c, v); }
    // 0c383e  push 4
    X86_AT(c, 0xc383eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3840  call 0xba428
    X86_AT(c, 0xc3840u);
    push32(c, 0xc3845u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc3845u);
    X86_TICK(c, 9);
    // 0c3845  push edi
    X86_AT(c, 0xc3845u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c3846  call 0xc2734
    X86_AT(c, 0xc3846u);
    push32(c, 0xc384bu); x86_call_known(c, 0xc2734u, f_000c2734); X86_RET(c, 0xc384bu);
    X86_TICK(c, 9);
    // 0c384b  add esp, 0x20
    X86_AT(c, 0xc384bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0c384e  inc eax
    X86_AT(c, 0xc384eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0c384f  jne 0xc3871
    X86_AT(c, 0xc384fu);
    if (x86_cc(c, 5)) { goto L_c3871; }
    X86_TICK(c, 2);
    // 0c3851  sub esi, esi
    X86_AT(c, 0xc3851u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_c3853:
    X86_TICK(c, 7);
    // 0c3853  cmp esi, 9
    X86_AT(c, 0xc3853u);
    (void)x86_sub(c, c.r[6], 0x9u, 0, 4);
    // 0c3856  jge 0xc38bf
    X86_AT(c, 0xc3856u);
    if (x86_cc(c, 13)) { goto L_c38bf; }
    X86_TICK(c, 24);
    // 0c3858  mov eax, edi
    X86_AT(c, 0xc3858u);
    c.r[0] = c.r[7];
    // 0c385a  lea edx, [eax + eax*2]
    X86_AT(c, 0xc385au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c385d  shl edx, 5
    X86_AT(c, 0xc385du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c3860  add edx, eax
    X86_AT(c, 0xc3860u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c3862  lea edx, [eax + edx*2]
    X86_AT(c, 0xc3862u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c3865  add edx, esi
    X86_AT(c, 0xc3865u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[6], 0, 4); }
    // 0c3867  mov byte ptr [edx + 0xa4dac], 0
    X86_AT(c, 0xc3867u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DACu)), 0x0u);
    // 0c386e  inc esi
    X86_AT(c, 0xc386eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c386f  jmp 0xc3853
    X86_AT(c, 0xc386fu);
    X86_POLL(c, 0xc3853u); goto L_c3853;
L_c3871:
    X86_TICK(c, 9);
    // 0c3871  push 4
    X86_AT(c, 0xc3871u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3873  call 0xbc498
    X86_AT(c, 0xc3873u);
    push32(c, 0xc3878u); x86_call_known(c, 0xbc498u, f_000bc498); X86_RET(c, 0xc3878u);
    X86_TICK(c, 2);
    // 0c3878  add esp, 4
    X86_AT(c, 0xc3878u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_c387b:
    X86_TICK(c, 9);
    // 0c387b  push 0
    X86_AT(c, 0xc387bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c387d  call 0xb6d38
    X86_AT(c, 0xc387du);
    push32(c, 0xc3882u); x86_call_known(c, 0xb6d38u, f_000b6d38); X86_RET(c, 0xc3882u);
    X86_TICK(c, 12);
    // 0c3882  xchg ebx, eax
    X86_AT(c, 0xc3882u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c3883  push 4
    X86_AT(c, 0xc3883u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3885  call 0xbb6b0
    X86_AT(c, 0xc3885u);
    push32(c, 0xc388au); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc388au);
    X86_TICK(c, 9);
    // 0c388a  add esp, 8
    X86_AT(c, 0xc388au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c388d  cmp ebx, 0xffffffff
    X86_AT(c, 0xc388du);
    (void)x86_sub(c, c.r[3], 0xFFFFFFFFu, 0, 4);
    // 0c3890  je 0xc389b
    X86_AT(c, 0xc3890u);
    if (x86_cc(c, 4)) { goto L_c389b; }
    X86_TICK(c, 7);
    // 0c3892  and ebx, ebx
    X86_AT(c, 0xc3892u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0c3894  je 0xc389b
    X86_AT(c, 0xc3894u);
    if (x86_cc(c, 4)) { goto L_c389b; }
    X86_TICK(c, 7);
    // 0c3896  cmp ebx, 1
    X86_AT(c, 0xc3896u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 0c3899  jne 0xc387b
    X86_AT(c, 0xc3899u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc387bu); goto L_c387b; }
L_c389b:
    X86_TICK(c, 7);
    // 0c389b  and ebx, ebx
    X86_AT(c, 0xc389bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0c389d  je 0xc3903
    X86_AT(c, 0xc389du);
    if (x86_cc(c, 4)) { goto L_c3903; }
    X86_TICK(c, 2);
    // 0c389f  sub esi, esi
    X86_AT(c, 0xc389fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_c38a1:
    X86_TICK(c, 7);
    // 0c38a1  cmp esi, 9
    X86_AT(c, 0xc38a1u);
    (void)x86_sub(c, c.r[6], 0x9u, 0, 4);
    // 0c38a4  jge 0xc38bf
    X86_AT(c, 0xc38a4u);
    if (x86_cc(c, 13)) { goto L_c38bf; }
    X86_TICK(c, 24);
    // 0c38a6  mov eax, edi
    X86_AT(c, 0xc38a6u);
    c.r[0] = c.r[7];
    // 0c38a8  lea edx, [eax + eax*2]
    X86_AT(c, 0xc38a8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c38ab  shl edx, 5
    X86_AT(c, 0xc38abu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c38ae  add edx, eax
    X86_AT(c, 0xc38aeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c38b0  lea edx, [eax + edx*2]
    X86_AT(c, 0xc38b0u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c38b3  add edx, esi
    X86_AT(c, 0xc38b3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[6], 0, 4); }
    // 0c38b5  mov byte ptr [edx + 0xa4dac], 0
    X86_AT(c, 0xc38b5u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DACu)), 0x0u);
    // 0c38bc  inc esi
    X86_AT(c, 0xc38bcu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c38bd  jmp 0xc38a1
    X86_AT(c, 0xc38bdu);
    X86_POLL(c, 0xc38a1u); goto L_c38a1;
L_c38bf:
    X86_TICK(c, 36);
    // 0c38bf  mov eax, edi
    X86_AT(c, 0xc38bfu);
    c.r[0] = c.r[7];
    // 0c38c1  lea edx, [eax + eax*2]
    X86_AT(c, 0xc38c1u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c38c4  shl edx, 5
    X86_AT(c, 0xc38c4u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c38c7  add edx, eax
    X86_AT(c, 0xc38c7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c38c9  lea edx, [eax + edx*2]
    X86_AT(c, 0xc38c9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c38cc  sub eax, eax
    X86_AT(c, 0xc38ccu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c38ce  mov dword ptr [edx + 0xa4dca], eax
    X86_AT(c, 0xc38ceu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DCAu)), c.r[0]);
    // 0c38d4  mov dword ptr [edx + 0xa4dce], eax
    X86_AT(c, 0xc38d4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DCEu)), c.r[0]);
    // 0c38da  mov dword ptr [edx + 0xa4dd2], eax
    X86_AT(c, 0xc38dau);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD2u)), c.r[0]);
    // 0c38e0  mov dword ptr [edx + 0xa4dd6], eax
    X86_AT(c, 0xc38e0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD6u)), c.r[0]);
    // 0c38e6  mov byte ptr [edx + 0xa4dda], al
    X86_AT(c, 0xc38e6u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDAu)), g8(c, 0));
    // 0c38ec  mov byte ptr [edx + 0xa4ddb], al
    X86_AT(c, 0xc38ecu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDBu)), g8(c, 0));
    // 0c38f2  mov byte ptr [edx + 0xa4ddc], al
    X86_AT(c, 0xc38f2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDCu)), g8(c, 0));
    // 0c38f8  mov dword ptr [edx + 0xa4ddd], eax
    X86_AT(c, 0xc38f8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDDu)), c.r[0]);
    // 0c38fe  jmp 0xc35e1
    X86_AT(c, 0xc38feu);
    X86_POLL(c, 0xc35e1u); goto L_c35e1;
L_c3903:
    X86_TICK(c, 64);
    // 0c3903  mov eax, edi
    X86_AT(c, 0xc3903u);
    c.r[0] = c.r[7];
    // 0c3905  lea edx, [eax + eax*2]
    X86_AT(c, 0xc3905u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c3908  shl edx, 5
    X86_AT(c, 0xc3908u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c390b  add edx, eax
    X86_AT(c, 0xc390bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c390d  lea edx, [eax + edx*2]
    X86_AT(c, 0xc390du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c3910  mov byte ptr [edx + 0xa4dc9], 0x47
    X86_AT(c, 0xc3910u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DC9u)), 0x47u);
    // 0c3917  mov byte ptr [edx + 0xa4db9], 0
    X86_AT(c, 0xc3917u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DB9u)), 0x0u);
    // 0c391e  mov byte ptr [edx + 0xa4dba], 0
    X86_AT(c, 0xc391eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DBAu)), 0x0u);
    // 0c3925  mov byte ptr [edx + 0xa4dbb], 0
    X86_AT(c, 0xc3925u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DBBu)), 0x0u);
    // 0c392c  mov byte ptr [edx + 0xa4dbc], 0
    X86_AT(c, 0xc392cu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DBCu)), 0x0u);
    // 0c3933  mov byte ptr [edx + 0xa4dbd], 0
    X86_AT(c, 0xc3933u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DBDu)), 0x0u);
    // 0c393a  mov byte ptr [edx + 0xa4dbe], 0
    X86_AT(c, 0xc393au);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DBEu)), 0x0u);
    // 0c3941  mov byte ptr [edx + 0xa4dbf], 0
    X86_AT(c, 0xc3941u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DBFu)), 0x0u);
    // 0c3948  mov byte ptr [edx + 0xa4dc0], 0
    X86_AT(c, 0xc3948u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DC0u)), 0x0u);
    // 0c394f  mov dword ptr [edx + 0xa4dc1], 0
    X86_AT(c, 0xc394fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DC1u)), 0x0u);
    // 0c3959  mov dword ptr [edx + 0xa4dc5], 0xffffffff
    X86_AT(c, 0xc3959u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DC5u)), 0xFFFFFFFFu);
    // 0c3963  mov dword ptr [edx + 0xa4de1], 0x96
    X86_AT(c, 0xc3963u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DE1u)), 0x96u);
    // 0c396d  mov dword ptr [edx + 0xa4de5], 0x96
    X86_AT(c, 0xc396du);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DE5u)), 0x96u);
    // 0c3977  mov dword ptr [edx + 0xa4de9], 0
    X86_AT(c, 0xc3977u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DE9u)), 0x0u);
    // 0c3981  push dword ptr [edx + 0xa4dd2]
    X86_AT(c, 0xc3981u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD2u))); push32(c, v); }
    // 0c3987  push dword ptr [edx + 0xa4dd6]
    X86_AT(c, 0xc3987u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD6u))); push32(c, v); }
    // 0c398d  mov al, byte ptr [edx + 0xa4ddb]
    X86_AT(c, 0xc398du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDBu))));
    // 0c3993  push eax
    X86_AT(c, 0xc3993u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c3994  mov dword ptr [ebp - 8], edx
    X86_AT(c, 0xc3994u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[2]);
    // 0c3997  call 0xcbcfc
    X86_AT(c, 0xc3997u);
    push32(c, 0xc399cu); x86_call_known(c, 0xcbcfcu, f_000cbcfc); X86_RET(c, 0xc399cu);
    X86_TICK(c, 24);
    // 0c399c  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0xc399cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0c399f  mov dword ptr [edx + 0xa4ddd], eax
    X86_AT(c, 0xc399fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDDu)), c.r[0]);
    // 0c39a5  mov dword ptr [edx + 0xa4ded], 0
    X86_AT(c, 0xc39a5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DEDu)), 0x0u);
    // 0c39af  mov dword ptr [edx + 0xa4df1], 0x3a98
    X86_AT(c, 0xc39afu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DF1u)), 0x3A98u);
    // 0c39b9  mov dword ptr [edx + 0xa4df5], 0x96
    X86_AT(c, 0xc39b9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DF5u)), 0x96u);
    // 0c39c3  mov dword ptr [edx + 0xa4df9], 0
    X86_AT(c, 0xc39c3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DF9u)), 0x0u);
    // 0c39cd  mov dword ptr [edx + 0xa4dfd], 0
    X86_AT(c, 0xc39cdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DFDu)), 0x0u);
    // 0c39d7  mov dword ptr [edx + 0xa4e01], 0
    X86_AT(c, 0xc39d7u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4E01u)), 0x0u);
    // 0c39e1  mov byte ptr [edx + 0xa4e05], 0x41
    X86_AT(c, 0xc39e1u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4E05u)), 0x41u);
    // 0c39e8  mov esi, 2
    X86_AT(c, 0xc39e8u);
    c.r[6] = 0x2u;
    // 0c39ed  add esp, 0xc
    X86_AT(c, 0xc39edu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_c39f0:
    X86_TICK(c, 7);
    // 0c39f0  cmp esi, 8
    X86_AT(c, 0xc39f0u);
    (void)x86_sub(c, c.r[6], 0x8u, 0, 4);
    // 0c39f3  jge 0xc3a10
    X86_AT(c, 0xc39f3u);
    if (x86_cc(c, 13)) { goto L_c3a10; }
    X86_TICK(c, 22);
    // 0c39f5  mov eax, edi
    X86_AT(c, 0xc39f5u);
    c.r[0] = c.r[7];
    // 0c39f7  lea edx, [eax + eax*2]
    X86_AT(c, 0xc39f7u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c39fa  shl edx, 5
    X86_AT(c, 0xc39fau);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c39fd  add edx, eax
    X86_AT(c, 0xc39fdu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c39ff  lea edx, [eax + edx*2]
    X86_AT(c, 0xc39ffu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c3a02  mov dword ptr [edx + esi*4 + 0xa4e06], 0
    X86_AT(c, 0xc3a02u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[6] * 4 + 0xA4E06u)), 0x0u);
    // 0c3a0d  inc esi
    X86_AT(c, 0xc3a0du);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c3a0e  jmp 0xc39f0
    X86_AT(c, 0xc3a0eu);
    X86_POLL(c, 0xc39f0u); goto L_c39f0;
L_c3a10:
    X86_TICK(c, 19);
    // 0c3a10  mov eax, edi
    X86_AT(c, 0xc3a10u);
    c.r[0] = c.r[7];
    // 0c3a12  lea edx, [eax + eax*2]
    X86_AT(c, 0xc3a12u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c3a15  shl edx, 5
    X86_AT(c, 0xc3a15u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c3a18  add edx, eax
    X86_AT(c, 0xc3a18u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c3a1a  lea edx, [eax + edx*2]
    X86_AT(c, 0xc3a1au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c3a1d  mov dword ptr [edx + 0xa4e06], 1
    X86_AT(c, 0xc3a1du);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4E06u)), 0x1u);
    // 0c3a27  mov dword ptr [edx + 0xa4e0a], 1
    X86_AT(c, 0xc3a27u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4E0Au)), 0x1u);
    // 0c3a31  mov byte ptr [edx + 0xa4e26], 0x41
    X86_AT(c, 0xc3a31u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4E26u)), 0x41u);
    // 0c3a38  mov esi, 2
    X86_AT(c, 0xc3a38u);
    c.r[6] = 0x2u;
L_c3a3d:
    X86_TICK(c, 7);
    // 0c3a3d  cmp esi, 0x12
    X86_AT(c, 0xc3a3du);
    (void)x86_sub(c, c.r[6], 0x12u, 0, 4);
    // 0c3a40  jge 0xc3a5d
    X86_AT(c, 0xc3a40u);
    if (x86_cc(c, 13)) { goto L_c3a5d; }
    X86_TICK(c, 22);
    // 0c3a42  mov eax, edi
    X86_AT(c, 0xc3a42u);
    c.r[0] = c.r[7];
    // 0c3a44  lea edx, [eax + eax*2]
    X86_AT(c, 0xc3a44u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c3a47  shl edx, 5
    X86_AT(c, 0xc3a47u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c3a4a  add edx, eax
    X86_AT(c, 0xc3a4au);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c3a4c  lea edx, [eax + edx*2]
    X86_AT(c, 0xc3a4cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c3a4f  mov dword ptr [edx + esi*4 + 0xa4e27], 0
    X86_AT(c, 0xc3a4fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[6] * 4 + 0xA4E27u)), 0x0u);
    // 0c3a5a  inc esi
    X86_AT(c, 0xc3a5au);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c3a5b  jmp 0xc3a3d
    X86_AT(c, 0xc3a5bu);
    X86_POLL(c, 0xc3a3du); goto L_c3a3d;
L_c3a5d:
    X86_TICK(c, 26);
    // 0c3a5d  mov eax, edi
    X86_AT(c, 0xc3a5du);
    c.r[0] = c.r[7];
    // 0c3a5f  lea edx, [eax + eax*2]
    X86_AT(c, 0xc3a5fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c3a62  shl edx, 5
    X86_AT(c, 0xc3a62u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c3a65  add edx, eax
    X86_AT(c, 0xc3a65u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c3a67  lea edx, [eax + edx*2]
    X86_AT(c, 0xc3a67u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c3a6a  mov dword ptr [edx + 0xa4e27], 1
    X86_AT(c, 0xc3a6au);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4E27u)), 0x1u);
    // 0c3a74  mov dword ptr [edx + 0xa4e2b], 1
    X86_AT(c, 0xc3a74u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4E2Bu)), 0x1u);
    // 0c3a7e  mov al, byte ptr [edx + 0xa4dac]
    X86_AT(c, 0xc3a7eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DACu))));
    // 0c3a84  cmp al, 0x54
    X86_AT(c, 0xc3a84u);
    (void)x86_sub(c, g8(c, 0), 0x54u, 0, 1);
    // 0c3a86  jne 0xc3ad4
    X86_AT(c, 0xc3a86u);
    if (x86_cc(c, 5)) { goto L_c3ad4; }
    X86_TICK(c, 12);
    // 0c3a88  cmp byte ptr [edx + 0xa4dad], 0x4f
    X86_AT(c, 0xc3a88u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DADu))), 0x4Fu, 0, 1);
    // 0c3a8f  jne 0xc3ad4
    X86_AT(c, 0xc3a8fu);
    if (x86_cc(c, 5)) { goto L_c3ad4; }
    X86_TICK(c, 7);
    // 0c3a91  cmp al, 0x59
    X86_AT(c, 0xc3a91u);
    (void)x86_sub(c, g8(c, 0), 0x59u, 0, 1);
    // 0c3a93  jne 0xc3ad4
    X86_AT(c, 0xc3a93u);
    if (x86_cc(c, 5)) { goto L_c3ad4; }
    X86_TICK(c, 16);
    // 0c3a95  mov dword ptr [edx + 0xa4df1], 0xea60
    X86_AT(c, 0xc3a95u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DF1u)), 0xEA60u);
    // 0c3a9f  mov dword ptr [edx + 0xa4df5], 0x258
    X86_AT(c, 0xc3a9fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DF5u)), 0x258u);
    // 0c3aa9  mov eax, 5
    X86_AT(c, 0xc3aa9u);
    c.r[0] = 0x5u;
    // 0c3aae  mov dword ptr [edx + 0xa4df9], eax
    X86_AT(c, 0xc3aaeu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DF9u)), c.r[0]);
    // 0c3ab4  mov dword ptr [edx + 0xa4dfd], eax
    X86_AT(c, 0xc3ab4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DFDu)), c.r[0]);
    // 0c3aba  mov dword ptr [edx + 0xa4e01], eax
    X86_AT(c, 0xc3abau);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4E01u)), c.r[0]);
    // 0c3ac0  mov dword ptr [edx + 0xa4e0e], 1
    X86_AT(c, 0xc3ac0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4E0Eu)), 0x1u);
    // 0c3aca  mov dword ptr [edx + 0xa4e2f], 1
    X86_AT(c, 0xc3acau);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4E2Fu)), 0x1u);
L_c3ad4:
    X86_TICK(c, 7);
    // 0c3ad4  call 0xc1060
    X86_AT(c, 0xc3ad4u);
    push32(c, 0xc3ad9u); x86_call_known(c, 0xc1060u, f_000c1060); X86_RET(c, 0xc3ad9u);
    X86_TICK(c, 13);
    // 0c3ad9  push 3
    X86_AT(c, 0xc3ad9u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c3adb  push 0xf
    X86_AT(c, 0xc3adbu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0c3add  push 4
    X86_AT(c, 0xc3addu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3adf  call 0xbc174
    X86_AT(c, 0xc3adfu);
    push32(c, 0xc3ae4u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3ae4u);
    X86_TICK(c, 24);
    // 0c3ae4  mov eax, edi
    X86_AT(c, 0xc3ae4u);
    c.r[0] = c.r[7];
    // 0c3ae6  lea edx, [eax + eax*2]
    X86_AT(c, 0xc3ae6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c3ae9  shl edx, 5
    X86_AT(c, 0xc3ae9u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c3aec  add edx, eax
    X86_AT(c, 0xc3aecu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c3aee  lea edx, [eax + edx*2]
    X86_AT(c, 0xc3aeeu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c3af1  lea eax, [edx*1 + 0xa4dac]
    X86_AT(c, 0xc3af1u);
    c.r[0] = (uint32_t)(c.r[2] + 0xA4DACu);
    // 0c3af8  push eax
    X86_AT(c, 0xc3af8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c3af9  push 4
    X86_AT(c, 0xc3af9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3afb  call 0xbbfe0
    X86_AT(c, 0xc3afbu);
    push32(c, 0xc3b00u); x86_call_known(c, 0xbbfe0u, f_000bbfe0); X86_RET(c, 0xc3b00u);
    X86_TICK(c, 11);
    // 0c3b00  push 0x3a28
    X86_AT(c, 0xc3b00u);
    { uint32_t v = 0x3A28u; push32(c, v); }
    // 0c3b05  push 4
    X86_AT(c, 0xc3b05u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3b07  call 0xba428
    X86_AT(c, 0xc3b07u);
    push32(c, 0xc3b0cu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc3b0cu);
    X86_TICK(c, 9);
    // 0c3b0c  push 0x3a68
    X86_AT(c, 0xc3b0cu);
    { uint32_t v = 0x3A68u; push32(c, v); }
    // 0c3b11  call 0xbc50c
    X86_AT(c, 0xc3b11u);
    push32(c, 0xc3b16u); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc3b16u);
    X86_TICK(c, 2);
    // 0c3b16  add esp, 0x20
    X86_AT(c, 0xc3b16u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
L_c3b19:
    X86_TICK(c, 9);
    // 0c3b19  push 4
    X86_AT(c, 0xc3b19u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3b1b  call 0xb9930
    X86_AT(c, 0xc3b1bu);
    push32(c, 0xc3b20u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc3b20u);
    X86_TICK(c, 9);
    // 0c3b20  add esp, 4
    X86_AT(c, 0xc3b20u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c3b23  and al, al
    X86_AT(c, 0xc3b23u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c3b25  je 0xc3b19
    X86_AT(c, 0xc3b25u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc3b19u); goto L_c3b19; }
L_c3b27:
    X86_TICK(c, 9);
    // 0c3b27  push 2
    X86_AT(c, 0xc3b27u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c3b29  call 0xbbb5c
    X86_AT(c, 0xc3b29u);
    push32(c, 0xc3b2eu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc3b2eu);
    X86_TICK(c, 9);
    // 0c3b2e  push 4
    X86_AT(c, 0xc3b2eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3b30  call 0xbb6b0
    X86_AT(c, 0xc3b30u);
    push32(c, 0xc3b35u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc3b35u);
    X86_TICK(c, 9);
    // 0c3b35  add esp, 8
    X86_AT(c, 0xc3b35u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c3b38  jmp 0xc35e1
    X86_AT(c, 0xc3b38u);
    X86_POLL(c, 0xc35e1u); goto L_c35e1;
L_c3b3d:
    X86_TICK(c, 28);
    // 0c3b3d  pop edi
    X86_AT(c, 0xc3b3du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c3b3e  pop esi
    X86_AT(c, 0xc3b3eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c3b3f  pop ebx
    X86_AT(c, 0xc3b3fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c3b40  leave 
    X86_AT(c, 0xc3b40u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c3b41  ret 
    X86_AT(c, 0xc3b41u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc35d0u, "ran off the end of a function");
}
void f_000c35e1(X86Cpu& c) {
L_c35e1:
    X86_TICK(c, 9);
    // 0c35e1  push 4
    X86_AT(c, 0xc35e1u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c35e3  call 0xbc480
    X86_AT(c, 0xc35e3u);
    push32(c, 0xc35e8u); x86_call_known(c, 0xbc480u, f_000bc480); X86_RET(c, 0xc35e8u);
    X86_TICK(c, 17);
    // 0c35e8  push 0x17
    X86_AT(c, 0xc35e8u);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0c35ea  push 0x4d
    X86_AT(c, 0xc35eau);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0c35ec  push 3
    X86_AT(c, 0xc35ecu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c35ee  push 0
    X86_AT(c, 0xc35eeu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c35f0  push 4
    X86_AT(c, 0xc35f0u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c35f2  call 0xbc2b0
    X86_AT(c, 0xc35f2u);
    push32(c, 0xc35f7u); x86_call_known(c, 0xbc2b0u, f_000bc2b0); X86_RET(c, 0xc35f7u);
    X86_TICK(c, 2);
    // 0c35f7  add esp, 0x18
    X86_AT(c, 0xc35f7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_c35fa:
    X86_TICK(c, 13);
    // 0c35fa  push 3
    X86_AT(c, 0xc35fau);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c35fc  push 0
    X86_AT(c, 0xc35fcu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c35fe  push 4
    X86_AT(c, 0xc35feu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3600  call 0xbc174
    X86_AT(c, 0xc3600u);
    push32(c, 0xc3605u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3605u);
    X86_TICK(c, 11);
    // 0c3605  push 0x3720
    X86_AT(c, 0xc3605u);
    { uint32_t v = 0x3720u; push32(c, v); }
    // 0c360a  push 4
    X86_AT(c, 0xc360au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c360c  call 0xba428
    X86_AT(c, 0xc360cu);
    push32(c, 0xc3611u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc3611u);
    X86_TICK(c, 13);
    // 0c3611  push 3
    X86_AT(c, 0xc3611u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c3613  push 0xf
    X86_AT(c, 0xc3613u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0c3615  push 4
    X86_AT(c, 0xc3615u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3617  call 0xbc174
    X86_AT(c, 0xc3617u);
    push32(c, 0xc361cu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc361cu);
    X86_TICK(c, 11);
    // 0c361c  push 0xa68e8
    X86_AT(c, 0xc361cu);
    { uint32_t v = 0xA68E8u; push32(c, v); }
    // 0c3621  push 4
    X86_AT(c, 0xc3621u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3623  call 0xba428
    X86_AT(c, 0xc3623u);
    push32(c, 0xc3628u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc3628u);
    X86_TICK(c, 11);
    // 0c3628  push 0xe
    X86_AT(c, 0xc3628u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0c362a  push 4
    X86_AT(c, 0xc362au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c362c  call 0xbc3ec
    X86_AT(c, 0xc362cu);
    push32(c, 0xc3631u); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xc3631u);
    X86_TICK(c, 9);
    // 0c3631  push 4
    X86_AT(c, 0xc3631u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3633  call 0xbb6b0
    X86_AT(c, 0xc3633u);
    push32(c, 0xc3638u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc3638u);
    X86_TICK(c, 13);
    // 0c3638  push 3
    X86_AT(c, 0xc3638u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c363a  push 0x27
    X86_AT(c, 0xc363au);
    { uint32_t v = 0x27u; push32(c, v); }
    // 0c363c  push 4
    X86_AT(c, 0xc363cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c363e  call 0xbc174
    X86_AT(c, 0xc363eu);
    push32(c, 0xc3643u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3643u);
    X86_TICK(c, 11);
    // 0c3643  add esp, 0x40
    X86_AT(c, 0xc3643u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0c3646  push 4
    X86_AT(c, 0xc3646u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3648  call 0xb6308
    X86_AT(c, 0xc3648u);
    push32(c, 0xc364du); x86_call_known(c, 0xb6308u, f_000b6308); X86_RET(c, 0xc364du);
    X86_TICK(c, 14);
    // 0c364d  xchg edi, eax
    X86_AT(c, 0xc364du);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0c364e  push 0xb
    X86_AT(c, 0xc364eu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c3650  push 4
    X86_AT(c, 0xc3650u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3652  call 0xbc3ec
    X86_AT(c, 0xc3652u);
    push32(c, 0xc3657u); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xc3657u);
    X86_TICK(c, 9);
    // 0c3657  push 4
    X86_AT(c, 0xc3657u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3659  call 0xbb6b0
    X86_AT(c, 0xc3659u);
    push32(c, 0xc365eu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc365eu);
    X86_TICK(c, 9);
    // 0c365e  add esp, 0x10
    X86_AT(c, 0xc365eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c3661  cmp edi, 0xffffffff
    X86_AT(c, 0xc3661u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0c3664  je 0xc366a
    X86_AT(c, 0xc3664u);
    if (x86_cc(c, 4)) { goto L_c366a; }
    X86_TICK(c, 7);
    // 0c3666  and edi, edi
    X86_AT(c, 0xc3666u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0c3668  jne 0xc369f
    X86_AT(c, 0xc3668u);
    if (x86_cc(c, 5)) { goto L_c369f; }
L_c366a:
    X86_TICK(c, 13);
    // 0c366a  push 3
    X86_AT(c, 0xc366au);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c366c  push 0x1b
    X86_AT(c, 0xc366cu);
    { uint32_t v = 0x1Bu; push32(c, v); }
    // 0c366e  push 4
    X86_AT(c, 0xc366eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3670  call 0xbc174
    X86_AT(c, 0xc3670u);
    push32(c, 0xc3675u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3675u);
    X86_TICK(c, 11);
    // 0c3675  push 0xa697c
    X86_AT(c, 0xc3675u);
    { uint32_t v = 0xA697Cu; push32(c, v); }
    // 0c367a  push 4
    X86_AT(c, 0xc367au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c367c  call 0xba428
    X86_AT(c, 0xc367cu);
    push32(c, 0xc3681u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc3681u);
    X86_TICK(c, 17);
    // 0c3681  push 0x17
    X86_AT(c, 0xc3681u);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0c3683  push 0x4d
    X86_AT(c, 0xc3683u);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0c3685  push 3
    X86_AT(c, 0xc3685u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c3687  push 0
    X86_AT(c, 0xc3687u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c3689  push 4
    X86_AT(c, 0xc3689u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c368b  call 0xbc2b0
    X86_AT(c, 0xc368bu);
    push32(c, 0xc3690u); x86_call_known(c, 0xbc2b0u, f_000bc2b0); X86_RET(c, 0xc3690u);
    X86_TICK(c, 9);
    // 0c3690  push 4
    X86_AT(c, 0xc3690u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3692  call 0xbc498
    X86_AT(c, 0xc3692u);
    push32(c, 0xc3697u); x86_call_known(c, 0xbc498u, f_000bc498); X86_RET(c, 0xc3697u);
    X86_TICK(c, 9);
    // 0c3697  add esp, 0x2c
    X86_AT(c, 0xc3697u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0c369a  jmp 0xc3b3d
    X86_AT(c, 0xc369au);
    goto L_c3b3d;
L_c369f:
    X86_TICK(c, 7);
    // 0c369f  cmp edi, 0x14
    X86_AT(c, 0xc369fu);
    (void)x86_sub(c, c.r[7], 0x14u, 0, 4);
    // 0c36a2  jg 0xc36a8
    X86_AT(c, 0xc36a2u);
    if (x86_cc(c, 15)) { goto L_c36a8; }
    X86_TICK(c, 7);
    // 0c36a4  and edi, edi
    X86_AT(c, 0xc36a4u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0c36a6  jg 0xc36f0
    X86_AT(c, 0xc36a6u);
    if (x86_cc(c, 15)) { goto L_c36f0; }
L_c36a8:
    X86_TICK(c, 13);
    // 0c36a8  push 3
    X86_AT(c, 0xc36a8u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c36aa  push 0xf
    X86_AT(c, 0xc36aau);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0c36ac  push 4
    X86_AT(c, 0xc36acu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c36ae  call 0xbc174
    X86_AT(c, 0xc36aeu);
    push32(c, 0xc36b3u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc36b3u);
    X86_TICK(c, 11);
    // 0c36b3  push 0xa6928
    X86_AT(c, 0xc36b3u);
    { uint32_t v = 0xA6928u; push32(c, v); }
    // 0c36b8  push 4
    X86_AT(c, 0xc36b8u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c36ba  call 0xba428
    X86_AT(c, 0xc36bau);
    push32(c, 0xc36bfu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc36bfu);
    X86_TICK(c, 9);
    // 0c36bf  push 0x373c
    X86_AT(c, 0xc36bfu);
    { uint32_t v = 0x373Cu; push32(c, v); }
    // 0c36c4  call 0xbc50c
    X86_AT(c, 0xc36c4u);
    push32(c, 0xc36c9u); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc36c9u);
    X86_TICK(c, 2);
    // 0c36c9  add esp, 0x18
    X86_AT(c, 0xc36c9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_c36cc:
    X86_TICK(c, 9);
    // 0c36cc  push 4
    X86_AT(c, 0xc36ccu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c36ce  call 0xb9930
    X86_AT(c, 0xc36ceu);
    push32(c, 0xc36d3u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc36d3u);
    X86_TICK(c, 9);
    // 0c36d3  add esp, 4
    X86_AT(c, 0xc36d3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c36d6  and al, al
    X86_AT(c, 0xc36d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c36d8  je 0xc36cc
    X86_AT(c, 0xc36d8u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc36ccu); goto L_c36cc; }
    X86_TICK(c, 9);
    // 0c36da  push 2
    X86_AT(c, 0xc36dau);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c36dc  call 0xbbb5c
    X86_AT(c, 0xc36dcu);
    push32(c, 0xc36e1u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc36e1u);
    X86_TICK(c, 9);
    // 0c36e1  push 4
    X86_AT(c, 0xc36e1u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c36e3  call 0xbb6b0
    X86_AT(c, 0xc36e3u);
    push32(c, 0xc36e8u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc36e8u);
    X86_TICK(c, 9);
    // 0c36e8  add esp, 8
    X86_AT(c, 0xc36e8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c36eb  jmp 0xc35fa
    X86_AT(c, 0xc36ebu);
    X86_POLL(c, 0xc35fau); goto L_c35fa;
L_c36f0:
    X86_TICK(c, 13);
    // 0c36f0  push 3
    X86_AT(c, 0xc36f0u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c36f2  push 0xf
    X86_AT(c, 0xc36f2u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0c36f4  push 4
    X86_AT(c, 0xc36f4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c36f6  call 0xbc174
    X86_AT(c, 0xc36f6u);
    push32(c, 0xc36fbu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc36fbu);
    X86_TICK(c, 11);
    // 0c36fb  push 0xa68e8
    X86_AT(c, 0xc36fbu);
    { uint32_t v = 0xA68E8u; push32(c, v); }
    // 0c3700  push 4
    X86_AT(c, 0xc3700u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3702  call 0xba428
    X86_AT(c, 0xc3702u);
    push32(c, 0xc3707u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc3707u);
    X86_TICK(c, 13);
    // 0c3707  push 3
    X86_AT(c, 0xc3707u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c3709  push 0x27
    X86_AT(c, 0xc3709u);
    { uint32_t v = 0x27u; push32(c, v); }
    // 0c370b  push 4
    X86_AT(c, 0xc370bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c370d  call 0xbc174
    X86_AT(c, 0xc370du);
    push32(c, 0xc3712u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3712u);
    X86_TICK(c, 13);
    // 0c3712  push 2
    X86_AT(c, 0xc3712u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c3714  push edi
    X86_AT(c, 0xc3714u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c3715  push 4
    X86_AT(c, 0xc3715u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3717  call 0xba404
    X86_AT(c, 0xc3717u);
    push32(c, 0xc371cu); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc371cu);
    X86_TICK(c, 27);
    // 0c371c  dec edi
    X86_AT(c, 0xc371cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 0c371d  mov eax, edi
    X86_AT(c, 0xc371du);
    c.r[0] = c.r[7];
    // 0c371f  lea edx, [eax + eax*2]
    X86_AT(c, 0xc371fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c3722  shl edx, 5
    X86_AT(c, 0xc3722u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c3725  add edx, eax
    X86_AT(c, 0xc3725u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c3727  lea edx, [eax + edx*2]
    X86_AT(c, 0xc3727u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c372a  add esp, 0x2c
    X86_AT(c, 0xc372au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0c372d  cmp byte ptr [edx + 0xa4dac], 0
    X86_AT(c, 0xc372du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DACu))), 0x0u, 0, 1);
    // 0c3734  je 0xc376d
    X86_AT(c, 0xc3734u);
    if (x86_cc(c, 4)) { goto L_c376d; }
    X86_TICK(c, 13);
    // 0c3736  push 3
    X86_AT(c, 0xc3736u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c3738  push 0xf
    X86_AT(c, 0xc3738u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0c373a  push 4
    X86_AT(c, 0xc373au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c373c  call 0xbc174
    X86_AT(c, 0xc373cu);
    push32(c, 0xc3741u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3741u);
    X86_TICK(c, 11);
    // 0c3741  push 0x3770
    X86_AT(c, 0xc3741u);
    { uint32_t v = 0x3770u; push32(c, v); }
    // 0c3746  push 4
    X86_AT(c, 0xc3746u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3748  call 0xba428
    X86_AT(c, 0xc3748u);
    push32(c, 0xc374du); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc374du);
    X86_TICK(c, 9);
    // 0c374d  push 0x37b4
    X86_AT(c, 0xc374du);
    { uint32_t v = 0x37B4u; push32(c, v); }
    // 0c3752  call 0xbc50c
    X86_AT(c, 0xc3752u);
    push32(c, 0xc3757u); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc3757u);
    X86_TICK(c, 2);
    // 0c3757  add esp, 0x18
    X86_AT(c, 0xc3757u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_c375a:
    X86_TICK(c, 9);
    // 0c375a  push 4
    X86_AT(c, 0xc375au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c375c  call 0xb9930
    X86_AT(c, 0xc375cu);
    push32(c, 0xc3761u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc3761u);
    X86_TICK(c, 9);
    // 0c3761  add esp, 4
    X86_AT(c, 0xc3761u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c3764  and al, al
    X86_AT(c, 0xc3764u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c3766  je 0xc375a
    X86_AT(c, 0xc3766u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc375au); goto L_c375a; }
    X86_TICK(c, 7);
    // 0c3768  jmp 0xc3b27
    X86_AT(c, 0xc3768u);
    goto L_c3b27;
L_c376d:
    X86_TICK(c, 13);
    // 0c376d  push 5
    X86_AT(c, 0xc376du);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c376f  push 0xe
    X86_AT(c, 0xc376fu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0c3771  push 4
    X86_AT(c, 0xc3771u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3773  call 0xbc174
    X86_AT(c, 0xc3773u);
    push32(c, 0xc3778u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3778u);
    X86_TICK(c, 11);
    // 0c3778  push 0x37e8
    X86_AT(c, 0xc3778u);
    { uint32_t v = 0x37E8u; push32(c, v); }
    // 0c377d  push 4
    X86_AT(c, 0xc377du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c377f  call 0xba428
    X86_AT(c, 0xc377fu);
    push32(c, 0xc3784u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc3784u);
    X86_TICK(c, 13);
    // 0c3784  push 6
    X86_AT(c, 0xc3784u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c3786  push 0xe
    X86_AT(c, 0xc3786u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0c3788  push 4
    X86_AT(c, 0xc3788u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c378a  call 0xbc174
    X86_AT(c, 0xc378au);
    push32(c, 0xc378fu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc378fu);
    X86_TICK(c, 11);
    // 0c378f  push 0x3828
    X86_AT(c, 0xc378fu);
    { uint32_t v = 0x3828u; push32(c, v); }
    // 0c3794  push 4
    X86_AT(c, 0xc3794u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3796  call 0xba428
    X86_AT(c, 0xc3796u);
    push32(c, 0xc379bu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc379bu);
    X86_TICK(c, 13);
    // 0c379b  push 7
    X86_AT(c, 0xc379bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c379d  push 0xe
    X86_AT(c, 0xc379du);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0c379f  push 4
    X86_AT(c, 0xc379fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c37a1  call 0xbc174
    X86_AT(c, 0xc37a1u);
    push32(c, 0xc37a6u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc37a6u);
    X86_TICK(c, 11);
    // 0c37a6  push 0x3860
    X86_AT(c, 0xc37a6u);
    { uint32_t v = 0x3860u; push32(c, v); }
    // 0c37ab  push 4
    X86_AT(c, 0xc37abu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c37ad  call 0xba428
    X86_AT(c, 0xc37adu);
    push32(c, 0xc37b2u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc37b2u);
    X86_TICK(c, 15);
    // 0c37b2  add esp, 0x3c
    X86_AT(c, 0xc37b2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c37b5  push 8
    X86_AT(c, 0xc37b5u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0c37b7  push 0xe
    X86_AT(c, 0xc37b7u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0c37b9  push 4
    X86_AT(c, 0xc37b9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c37bb  call 0xbc174
    X86_AT(c, 0xc37bbu);
    push32(c, 0xc37c0u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc37c0u);
    X86_TICK(c, 11);
    // 0c37c0  push 0x3898
    X86_AT(c, 0xc37c0u);
    { uint32_t v = 0x3898u; push32(c, v); }
    // 0c37c5  push 4
    X86_AT(c, 0xc37c5u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c37c7  call 0xba428
    X86_AT(c, 0xc37c7u);
    push32(c, 0xc37ccu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc37ccu);
    X86_TICK(c, 13);
    // 0c37cc  push 9
    X86_AT(c, 0xc37ccu);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0c37ce  push 0xe
    X86_AT(c, 0xc37ceu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0c37d0  push 4
    X86_AT(c, 0xc37d0u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c37d2  call 0xbc174
    X86_AT(c, 0xc37d2u);
    push32(c, 0xc37d7u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc37d7u);
    X86_TICK(c, 11);
    // 0c37d7  push 0x38d0
    X86_AT(c, 0xc37d7u);
    { uint32_t v = 0x38D0u; push32(c, v); }
    // 0c37dc  push 4
    X86_AT(c, 0xc37dcu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c37de  call 0xba428
    X86_AT(c, 0xc37deu);
    push32(c, 0xc37e3u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc37e3u);
    X86_TICK(c, 13);
    // 0c37e3  push 0xa
    X86_AT(c, 0xc37e3u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0c37e5  push 0x14
    X86_AT(c, 0xc37e5u);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0c37e7  push 4
    X86_AT(c, 0xc37e7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c37e9  call 0xbc174
    X86_AT(c, 0xc37e9u);
    push32(c, 0xc37eeu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc37eeu);
    X86_TICK(c, 11);
    // 0c37ee  push 0x3908
    X86_AT(c, 0xc37eeu);
    { uint32_t v = 0x3908u; push32(c, v); }
    // 0c37f3  push 4
    X86_AT(c, 0xc37f3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c37f5  call 0xba428
    X86_AT(c, 0xc37f5u);
    push32(c, 0xc37fau); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc37fau);
    X86_TICK(c, 15);
    // 0c37fa  add esp, 0x3c
    X86_AT(c, 0xc37fau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c37fd  push 0xb
    X86_AT(c, 0xc37fdu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c37ff  push 0x14
    X86_AT(c, 0xc37ffu);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0c3801  push 4
    X86_AT(c, 0xc3801u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3803  call 0xbc174
    X86_AT(c, 0xc3803u);
    push32(c, 0xc3808u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3808u);
    X86_TICK(c, 11);
    // 0c3808  push 0x3950
    X86_AT(c, 0xc3808u);
    { uint32_t v = 0x3950u; push32(c, v); }
    // 0c380d  push 4
    X86_AT(c, 0xc380du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c380f  call 0xba428
    X86_AT(c, 0xc380fu);
    push32(c, 0xc3814u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc3814u);
    X86_TICK(c, 13);
    // 0c3814  push 0xc
    X86_AT(c, 0xc3814u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0c3816  push 0x14
    X86_AT(c, 0xc3816u);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0c3818  push 4
    X86_AT(c, 0xc3818u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c381a  call 0xbc174
    X86_AT(c, 0xc381au);
    push32(c, 0xc381fu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc381fu);
    X86_TICK(c, 13);
    // 0c381f  add esp, 0x20
    X86_AT(c, 0xc381fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0c3822  push 0x3998
    X86_AT(c, 0xc3822u);
    { uint32_t v = 0x3998u; push32(c, v); }
    // 0c3827  push 4
    X86_AT(c, 0xc3827u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3829  call 0xba428
    X86_AT(c, 0xc3829u);
    push32(c, 0xc382eu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc382eu);
    X86_TICK(c, 13);
    // 0c382e  push 0xd
    X86_AT(c, 0xc382eu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0c3830  push 0x14
    X86_AT(c, 0xc3830u);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0c3832  push 4
    X86_AT(c, 0xc3832u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3834  call 0xbc174
    X86_AT(c, 0xc3834u);
    push32(c, 0xc3839u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3839u);
    X86_TICK(c, 11);
    // 0c3839  push 0x39e0
    X86_AT(c, 0xc3839u);
    { uint32_t v = 0x39E0u; push32(c, v); }
    // 0c383e  push 4
    X86_AT(c, 0xc383eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3840  call 0xba428
    X86_AT(c, 0xc3840u);
    push32(c, 0xc3845u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc3845u);
    X86_TICK(c, 9);
    // 0c3845  push edi
    X86_AT(c, 0xc3845u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c3846  call 0xc2734
    X86_AT(c, 0xc3846u);
    push32(c, 0xc384bu); x86_call_known(c, 0xc2734u, f_000c2734); X86_RET(c, 0xc384bu);
    X86_TICK(c, 9);
    // 0c384b  add esp, 0x20
    X86_AT(c, 0xc384bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0c384e  inc eax
    X86_AT(c, 0xc384eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0c384f  jne 0xc3871
    X86_AT(c, 0xc384fu);
    if (x86_cc(c, 5)) { goto L_c3871; }
    X86_TICK(c, 2);
    // 0c3851  sub esi, esi
    X86_AT(c, 0xc3851u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_c3853:
    X86_TICK(c, 7);
    // 0c3853  cmp esi, 9
    X86_AT(c, 0xc3853u);
    (void)x86_sub(c, c.r[6], 0x9u, 0, 4);
    // 0c3856  jge 0xc38bf
    X86_AT(c, 0xc3856u);
    if (x86_cc(c, 13)) { goto L_c38bf; }
    X86_TICK(c, 24);
    // 0c3858  mov eax, edi
    X86_AT(c, 0xc3858u);
    c.r[0] = c.r[7];
    // 0c385a  lea edx, [eax + eax*2]
    X86_AT(c, 0xc385au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c385d  shl edx, 5
    X86_AT(c, 0xc385du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c3860  add edx, eax
    X86_AT(c, 0xc3860u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c3862  lea edx, [eax + edx*2]
    X86_AT(c, 0xc3862u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c3865  add edx, esi
    X86_AT(c, 0xc3865u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[6], 0, 4); }
    // 0c3867  mov byte ptr [edx + 0xa4dac], 0
    X86_AT(c, 0xc3867u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DACu)), 0x0u);
    // 0c386e  inc esi
    X86_AT(c, 0xc386eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c386f  jmp 0xc3853
    X86_AT(c, 0xc386fu);
    X86_POLL(c, 0xc3853u); goto L_c3853;
L_c3871:
    X86_TICK(c, 9);
    // 0c3871  push 4
    X86_AT(c, 0xc3871u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3873  call 0xbc498
    X86_AT(c, 0xc3873u);
    push32(c, 0xc3878u); x86_call_known(c, 0xbc498u, f_000bc498); X86_RET(c, 0xc3878u);
    X86_TICK(c, 2);
    // 0c3878  add esp, 4
    X86_AT(c, 0xc3878u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_c387b:
    X86_TICK(c, 9);
    // 0c387b  push 0
    X86_AT(c, 0xc387bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c387d  call 0xb6d38
    X86_AT(c, 0xc387du);
    push32(c, 0xc3882u); x86_call_known(c, 0xb6d38u, f_000b6d38); X86_RET(c, 0xc3882u);
    X86_TICK(c, 12);
    // 0c3882  xchg ebx, eax
    X86_AT(c, 0xc3882u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c3883  push 4
    X86_AT(c, 0xc3883u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3885  call 0xbb6b0
    X86_AT(c, 0xc3885u);
    push32(c, 0xc388au); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc388au);
    X86_TICK(c, 9);
    // 0c388a  add esp, 8
    X86_AT(c, 0xc388au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c388d  cmp ebx, 0xffffffff
    X86_AT(c, 0xc388du);
    (void)x86_sub(c, c.r[3], 0xFFFFFFFFu, 0, 4);
    // 0c3890  je 0xc389b
    X86_AT(c, 0xc3890u);
    if (x86_cc(c, 4)) { goto L_c389b; }
    X86_TICK(c, 7);
    // 0c3892  and ebx, ebx
    X86_AT(c, 0xc3892u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0c3894  je 0xc389b
    X86_AT(c, 0xc3894u);
    if (x86_cc(c, 4)) { goto L_c389b; }
    X86_TICK(c, 7);
    // 0c3896  cmp ebx, 1
    X86_AT(c, 0xc3896u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 0c3899  jne 0xc387b
    X86_AT(c, 0xc3899u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc387bu); goto L_c387b; }
L_c389b:
    X86_TICK(c, 7);
    // 0c389b  and ebx, ebx
    X86_AT(c, 0xc389bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0c389d  je 0xc3903
    X86_AT(c, 0xc389du);
    if (x86_cc(c, 4)) { goto L_c3903; }
    X86_TICK(c, 2);
    // 0c389f  sub esi, esi
    X86_AT(c, 0xc389fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_c38a1:
    X86_TICK(c, 7);
    // 0c38a1  cmp esi, 9
    X86_AT(c, 0xc38a1u);
    (void)x86_sub(c, c.r[6], 0x9u, 0, 4);
    // 0c38a4  jge 0xc38bf
    X86_AT(c, 0xc38a4u);
    if (x86_cc(c, 13)) { goto L_c38bf; }
    X86_TICK(c, 24);
    // 0c38a6  mov eax, edi
    X86_AT(c, 0xc38a6u);
    c.r[0] = c.r[7];
    // 0c38a8  lea edx, [eax + eax*2]
    X86_AT(c, 0xc38a8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c38ab  shl edx, 5
    X86_AT(c, 0xc38abu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c38ae  add edx, eax
    X86_AT(c, 0xc38aeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c38b0  lea edx, [eax + edx*2]
    X86_AT(c, 0xc38b0u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c38b3  add edx, esi
    X86_AT(c, 0xc38b3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[6], 0, 4); }
    // 0c38b5  mov byte ptr [edx + 0xa4dac], 0
    X86_AT(c, 0xc38b5u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DACu)), 0x0u);
    // 0c38bc  inc esi
    X86_AT(c, 0xc38bcu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c38bd  jmp 0xc38a1
    X86_AT(c, 0xc38bdu);
    X86_POLL(c, 0xc38a1u); goto L_c38a1;
L_c38bf:
    X86_TICK(c, 36);
    // 0c38bf  mov eax, edi
    X86_AT(c, 0xc38bfu);
    c.r[0] = c.r[7];
    // 0c38c1  lea edx, [eax + eax*2]
    X86_AT(c, 0xc38c1u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c38c4  shl edx, 5
    X86_AT(c, 0xc38c4u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c38c7  add edx, eax
    X86_AT(c, 0xc38c7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c38c9  lea edx, [eax + edx*2]
    X86_AT(c, 0xc38c9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c38cc  sub eax, eax
    X86_AT(c, 0xc38ccu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c38ce  mov dword ptr [edx + 0xa4dca], eax
    X86_AT(c, 0xc38ceu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DCAu)), c.r[0]);
    // 0c38d4  mov dword ptr [edx + 0xa4dce], eax
    X86_AT(c, 0xc38d4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DCEu)), c.r[0]);
    // 0c38da  mov dword ptr [edx + 0xa4dd2], eax
    X86_AT(c, 0xc38dau);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD2u)), c.r[0]);
    // 0c38e0  mov dword ptr [edx + 0xa4dd6], eax
    X86_AT(c, 0xc38e0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD6u)), c.r[0]);
    // 0c38e6  mov byte ptr [edx + 0xa4dda], al
    X86_AT(c, 0xc38e6u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDAu)), g8(c, 0));
    // 0c38ec  mov byte ptr [edx + 0xa4ddb], al
    X86_AT(c, 0xc38ecu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDBu)), g8(c, 0));
    // 0c38f2  mov byte ptr [edx + 0xa4ddc], al
    X86_AT(c, 0xc38f2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDCu)), g8(c, 0));
    // 0c38f8  mov dword ptr [edx + 0xa4ddd], eax
    X86_AT(c, 0xc38f8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDDu)), c.r[0]);
    // 0c38fe  jmp 0xc35e1
    X86_AT(c, 0xc38feu);
    X86_POLL(c, 0xc35e1u); goto L_c35e1;
L_c3903:
    X86_TICK(c, 64);
    // 0c3903  mov eax, edi
    X86_AT(c, 0xc3903u);
    c.r[0] = c.r[7];
    // 0c3905  lea edx, [eax + eax*2]
    X86_AT(c, 0xc3905u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c3908  shl edx, 5
    X86_AT(c, 0xc3908u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c390b  add edx, eax
    X86_AT(c, 0xc390bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c390d  lea edx, [eax + edx*2]
    X86_AT(c, 0xc390du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c3910  mov byte ptr [edx + 0xa4dc9], 0x47
    X86_AT(c, 0xc3910u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DC9u)), 0x47u);
    // 0c3917  mov byte ptr [edx + 0xa4db9], 0
    X86_AT(c, 0xc3917u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DB9u)), 0x0u);
    // 0c391e  mov byte ptr [edx + 0xa4dba], 0
    X86_AT(c, 0xc391eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DBAu)), 0x0u);
    // 0c3925  mov byte ptr [edx + 0xa4dbb], 0
    X86_AT(c, 0xc3925u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DBBu)), 0x0u);
    // 0c392c  mov byte ptr [edx + 0xa4dbc], 0
    X86_AT(c, 0xc392cu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DBCu)), 0x0u);
    // 0c3933  mov byte ptr [edx + 0xa4dbd], 0
    X86_AT(c, 0xc3933u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DBDu)), 0x0u);
    // 0c393a  mov byte ptr [edx + 0xa4dbe], 0
    X86_AT(c, 0xc393au);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DBEu)), 0x0u);
    // 0c3941  mov byte ptr [edx + 0xa4dbf], 0
    X86_AT(c, 0xc3941u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DBFu)), 0x0u);
    // 0c3948  mov byte ptr [edx + 0xa4dc0], 0
    X86_AT(c, 0xc3948u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DC0u)), 0x0u);
    // 0c394f  mov dword ptr [edx + 0xa4dc1], 0
    X86_AT(c, 0xc394fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DC1u)), 0x0u);
    // 0c3959  mov dword ptr [edx + 0xa4dc5], 0xffffffff
    X86_AT(c, 0xc3959u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DC5u)), 0xFFFFFFFFu);
    // 0c3963  mov dword ptr [edx + 0xa4de1], 0x96
    X86_AT(c, 0xc3963u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DE1u)), 0x96u);
    // 0c396d  mov dword ptr [edx + 0xa4de5], 0x96
    X86_AT(c, 0xc396du);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DE5u)), 0x96u);
    // 0c3977  mov dword ptr [edx + 0xa4de9], 0
    X86_AT(c, 0xc3977u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DE9u)), 0x0u);
    // 0c3981  push dword ptr [edx + 0xa4dd2]
    X86_AT(c, 0xc3981u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD2u))); push32(c, v); }
    // 0c3987  push dword ptr [edx + 0xa4dd6]
    X86_AT(c, 0xc3987u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DD6u))); push32(c, v); }
    // 0c398d  mov al, byte ptr [edx + 0xa4ddb]
    X86_AT(c, 0xc398du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDBu))));
    // 0c3993  push eax
    X86_AT(c, 0xc3993u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c3994  mov dword ptr [ebp - 8], edx
    X86_AT(c, 0xc3994u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[2]);
    // 0c3997  call 0xcbcfc
    X86_AT(c, 0xc3997u);
    push32(c, 0xc399cu); x86_call_known(c, 0xcbcfcu, f_000cbcfc); X86_RET(c, 0xc399cu);
    X86_TICK(c, 24);
    // 0c399c  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0xc399cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0c399f  mov dword ptr [edx + 0xa4ddd], eax
    X86_AT(c, 0xc399fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDDu)), c.r[0]);
    // 0c39a5  mov dword ptr [edx + 0xa4ded], 0
    X86_AT(c, 0xc39a5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DEDu)), 0x0u);
    // 0c39af  mov dword ptr [edx + 0xa4df1], 0x3a98
    X86_AT(c, 0xc39afu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DF1u)), 0x3A98u);
    // 0c39b9  mov dword ptr [edx + 0xa4df5], 0x96
    X86_AT(c, 0xc39b9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DF5u)), 0x96u);
    // 0c39c3  mov dword ptr [edx + 0xa4df9], 0
    X86_AT(c, 0xc39c3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DF9u)), 0x0u);
    // 0c39cd  mov dword ptr [edx + 0xa4dfd], 0
    X86_AT(c, 0xc39cdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DFDu)), 0x0u);
    // 0c39d7  mov dword ptr [edx + 0xa4e01], 0
    X86_AT(c, 0xc39d7u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4E01u)), 0x0u);
    // 0c39e1  mov byte ptr [edx + 0xa4e05], 0x41
    X86_AT(c, 0xc39e1u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4E05u)), 0x41u);
    // 0c39e8  mov esi, 2
    X86_AT(c, 0xc39e8u);
    c.r[6] = 0x2u;
    // 0c39ed  add esp, 0xc
    X86_AT(c, 0xc39edu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_c39f0:
    X86_TICK(c, 7);
    // 0c39f0  cmp esi, 8
    X86_AT(c, 0xc39f0u);
    (void)x86_sub(c, c.r[6], 0x8u, 0, 4);
    // 0c39f3  jge 0xc3a10
    X86_AT(c, 0xc39f3u);
    if (x86_cc(c, 13)) { goto L_c3a10; }
    X86_TICK(c, 22);
    // 0c39f5  mov eax, edi
    X86_AT(c, 0xc39f5u);
    c.r[0] = c.r[7];
    // 0c39f7  lea edx, [eax + eax*2]
    X86_AT(c, 0xc39f7u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c39fa  shl edx, 5
    X86_AT(c, 0xc39fau);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c39fd  add edx, eax
    X86_AT(c, 0xc39fdu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c39ff  lea edx, [eax + edx*2]
    X86_AT(c, 0xc39ffu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c3a02  mov dword ptr [edx + esi*4 + 0xa4e06], 0
    X86_AT(c, 0xc3a02u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[6] * 4 + 0xA4E06u)), 0x0u);
    // 0c3a0d  inc esi
    X86_AT(c, 0xc3a0du);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c3a0e  jmp 0xc39f0
    X86_AT(c, 0xc3a0eu);
    X86_POLL(c, 0xc39f0u); goto L_c39f0;
L_c3a10:
    X86_TICK(c, 19);
    // 0c3a10  mov eax, edi
    X86_AT(c, 0xc3a10u);
    c.r[0] = c.r[7];
    // 0c3a12  lea edx, [eax + eax*2]
    X86_AT(c, 0xc3a12u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c3a15  shl edx, 5
    X86_AT(c, 0xc3a15u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c3a18  add edx, eax
    X86_AT(c, 0xc3a18u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c3a1a  lea edx, [eax + edx*2]
    X86_AT(c, 0xc3a1au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c3a1d  mov dword ptr [edx + 0xa4e06], 1
    X86_AT(c, 0xc3a1du);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4E06u)), 0x1u);
    // 0c3a27  mov dword ptr [edx + 0xa4e0a], 1
    X86_AT(c, 0xc3a27u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4E0Au)), 0x1u);
    // 0c3a31  mov byte ptr [edx + 0xa4e26], 0x41
    X86_AT(c, 0xc3a31u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4E26u)), 0x41u);
    // 0c3a38  mov esi, 2
    X86_AT(c, 0xc3a38u);
    c.r[6] = 0x2u;
L_c3a3d:
    X86_TICK(c, 7);
    // 0c3a3d  cmp esi, 0x12
    X86_AT(c, 0xc3a3du);
    (void)x86_sub(c, c.r[6], 0x12u, 0, 4);
    // 0c3a40  jge 0xc3a5d
    X86_AT(c, 0xc3a40u);
    if (x86_cc(c, 13)) { goto L_c3a5d; }
    X86_TICK(c, 22);
    // 0c3a42  mov eax, edi
    X86_AT(c, 0xc3a42u);
    c.r[0] = c.r[7];
    // 0c3a44  lea edx, [eax + eax*2]
    X86_AT(c, 0xc3a44u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c3a47  shl edx, 5
    X86_AT(c, 0xc3a47u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c3a4a  add edx, eax
    X86_AT(c, 0xc3a4au);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c3a4c  lea edx, [eax + edx*2]
    X86_AT(c, 0xc3a4cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c3a4f  mov dword ptr [edx + esi*4 + 0xa4e27], 0
    X86_AT(c, 0xc3a4fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[6] * 4 + 0xA4E27u)), 0x0u);
    // 0c3a5a  inc esi
    X86_AT(c, 0xc3a5au);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c3a5b  jmp 0xc3a3d
    X86_AT(c, 0xc3a5bu);
    X86_POLL(c, 0xc3a3du); goto L_c3a3d;
L_c3a5d:
    X86_TICK(c, 26);
    // 0c3a5d  mov eax, edi
    X86_AT(c, 0xc3a5du);
    c.r[0] = c.r[7];
    // 0c3a5f  lea edx, [eax + eax*2]
    X86_AT(c, 0xc3a5fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c3a62  shl edx, 5
    X86_AT(c, 0xc3a62u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c3a65  add edx, eax
    X86_AT(c, 0xc3a65u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c3a67  lea edx, [eax + edx*2]
    X86_AT(c, 0xc3a67u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c3a6a  mov dword ptr [edx + 0xa4e27], 1
    X86_AT(c, 0xc3a6au);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4E27u)), 0x1u);
    // 0c3a74  mov dword ptr [edx + 0xa4e2b], 1
    X86_AT(c, 0xc3a74u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4E2Bu)), 0x1u);
    // 0c3a7e  mov al, byte ptr [edx + 0xa4dac]
    X86_AT(c, 0xc3a7eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DACu))));
    // 0c3a84  cmp al, 0x54
    X86_AT(c, 0xc3a84u);
    (void)x86_sub(c, g8(c, 0), 0x54u, 0, 1);
    // 0c3a86  jne 0xc3ad4
    X86_AT(c, 0xc3a86u);
    if (x86_cc(c, 5)) { goto L_c3ad4; }
    X86_TICK(c, 12);
    // 0c3a88  cmp byte ptr [edx + 0xa4dad], 0x4f
    X86_AT(c, 0xc3a88u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DADu))), 0x4Fu, 0, 1);
    // 0c3a8f  jne 0xc3ad4
    X86_AT(c, 0xc3a8fu);
    if (x86_cc(c, 5)) { goto L_c3ad4; }
    X86_TICK(c, 7);
    // 0c3a91  cmp al, 0x59
    X86_AT(c, 0xc3a91u);
    (void)x86_sub(c, g8(c, 0), 0x59u, 0, 1);
    // 0c3a93  jne 0xc3ad4
    X86_AT(c, 0xc3a93u);
    if (x86_cc(c, 5)) { goto L_c3ad4; }
    X86_TICK(c, 16);
    // 0c3a95  mov dword ptr [edx + 0xa4df1], 0xea60
    X86_AT(c, 0xc3a95u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DF1u)), 0xEA60u);
    // 0c3a9f  mov dword ptr [edx + 0xa4df5], 0x258
    X86_AT(c, 0xc3a9fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DF5u)), 0x258u);
    // 0c3aa9  mov eax, 5
    X86_AT(c, 0xc3aa9u);
    c.r[0] = 0x5u;
    // 0c3aae  mov dword ptr [edx + 0xa4df9], eax
    X86_AT(c, 0xc3aaeu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DF9u)), c.r[0]);
    // 0c3ab4  mov dword ptr [edx + 0xa4dfd], eax
    X86_AT(c, 0xc3ab4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DFDu)), c.r[0]);
    // 0c3aba  mov dword ptr [edx + 0xa4e01], eax
    X86_AT(c, 0xc3abau);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4E01u)), c.r[0]);
    // 0c3ac0  mov dword ptr [edx + 0xa4e0e], 1
    X86_AT(c, 0xc3ac0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4E0Eu)), 0x1u);
    // 0c3aca  mov dword ptr [edx + 0xa4e2f], 1
    X86_AT(c, 0xc3acau);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4E2Fu)), 0x1u);
L_c3ad4:
    X86_TICK(c, 7);
    // 0c3ad4  call 0xc1060
    X86_AT(c, 0xc3ad4u);
    push32(c, 0xc3ad9u); x86_call_known(c, 0xc1060u, f_000c1060); X86_RET(c, 0xc3ad9u);
    X86_TICK(c, 13);
    // 0c3ad9  push 3
    X86_AT(c, 0xc3ad9u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c3adb  push 0xf
    X86_AT(c, 0xc3adbu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0c3add  push 4
    X86_AT(c, 0xc3addu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3adf  call 0xbc174
    X86_AT(c, 0xc3adfu);
    push32(c, 0xc3ae4u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc3ae4u);
    X86_TICK(c, 24);
    // 0c3ae4  mov eax, edi
    X86_AT(c, 0xc3ae4u);
    c.r[0] = c.r[7];
    // 0c3ae6  lea edx, [eax + eax*2]
    X86_AT(c, 0xc3ae6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c3ae9  shl edx, 5
    X86_AT(c, 0xc3ae9u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c3aec  add edx, eax
    X86_AT(c, 0xc3aecu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c3aee  lea edx, [eax + edx*2]
    X86_AT(c, 0xc3aeeu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c3af1  lea eax, [edx*1 + 0xa4dac]
    X86_AT(c, 0xc3af1u);
    c.r[0] = (uint32_t)(c.r[2] + 0xA4DACu);
    // 0c3af8  push eax
    X86_AT(c, 0xc3af8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c3af9  push 4
    X86_AT(c, 0xc3af9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3afb  call 0xbbfe0
    X86_AT(c, 0xc3afbu);
    push32(c, 0xc3b00u); x86_call_known(c, 0xbbfe0u, f_000bbfe0); X86_RET(c, 0xc3b00u);
    X86_TICK(c, 11);
    // 0c3b00  push 0x3a28
    X86_AT(c, 0xc3b00u);
    { uint32_t v = 0x3A28u; push32(c, v); }
    // 0c3b05  push 4
    X86_AT(c, 0xc3b05u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3b07  call 0xba428
    X86_AT(c, 0xc3b07u);
    push32(c, 0xc3b0cu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc3b0cu);
    X86_TICK(c, 9);
    // 0c3b0c  push 0x3a68
    X86_AT(c, 0xc3b0cu);
    { uint32_t v = 0x3A68u; push32(c, v); }
    // 0c3b11  call 0xbc50c
    X86_AT(c, 0xc3b11u);
    push32(c, 0xc3b16u); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc3b16u);
    X86_TICK(c, 2);
    // 0c3b16  add esp, 0x20
    X86_AT(c, 0xc3b16u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
L_c3b19:
    X86_TICK(c, 9);
    // 0c3b19  push 4
    X86_AT(c, 0xc3b19u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3b1b  call 0xb9930
    X86_AT(c, 0xc3b1bu);
    push32(c, 0xc3b20u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc3b20u);
    X86_TICK(c, 9);
    // 0c3b20  add esp, 4
    X86_AT(c, 0xc3b20u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c3b23  and al, al
    X86_AT(c, 0xc3b23u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c3b25  je 0xc3b19
    X86_AT(c, 0xc3b25u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc3b19u); goto L_c3b19; }
L_c3b27:
    X86_TICK(c, 9);
    // 0c3b27  push 2
    X86_AT(c, 0xc3b27u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c3b29  call 0xbbb5c
    X86_AT(c, 0xc3b29u);
    push32(c, 0xc3b2eu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc3b2eu);
    X86_TICK(c, 9);
    // 0c3b2e  push 4
    X86_AT(c, 0xc3b2eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c3b30  call 0xbb6b0
    X86_AT(c, 0xc3b30u);
    push32(c, 0xc3b35u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc3b35u);
    X86_TICK(c, 9);
    // 0c3b35  add esp, 8
    X86_AT(c, 0xc3b35u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c3b38  jmp 0xc35e1
    X86_AT(c, 0xc3b38u);
    X86_POLL(c, 0xc35e1u); goto L_c35e1;
L_c3b3d:
    X86_TICK(c, 28);
    // 0c3b3d  pop edi
    X86_AT(c, 0xc3b3du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c3b3e  pop esi
    X86_AT(c, 0xc3b3eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c3b3f  pop ebx
    X86_AT(c, 0xc3b3fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c3b40  leave 
    X86_AT(c, 0xc3b40u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c3b41  ret 
    X86_AT(c, 0xc3b41u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc35e1u, "ran off the end of a function");
}
}
