#include "p_game_funcs.h"
namespace p_game {
void f_000ca47c(X86Cpu& c) {
    X86_TICK(c, 37);
    // 0ca47c  push ebp
    X86_AT(c, 0xca47cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ca47d  mov ebp, esp
    X86_AT(c, 0xca47du);
    c.r[5] = c.r[4];
    // 0ca47f  sub esp, 0x14
    X86_AT(c, 0xca47fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x14u, 0, 4); }
    // 0ca482  push ebx
    X86_AT(c, 0xca482u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ca483  push esi
    X86_AT(c, 0xca483u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ca484  push edi
    X86_AT(c, 0xca484u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ca485  mov byte ptr [ebp - 0xe], 0
    X86_AT(c, 0xca485u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u)), 0x0u);
    // 0ca489  mov byte ptr [ebp - 0xd], 0
    X86_AT(c, 0xca489u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u)), 0x0u);
    // 0ca48d  mov dword ptr [ebp - 4], 3
    X86_AT(c, 0xca48du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x3u);
    // 0ca494  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xca494u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ca497  lea eax, [eax + eax*2]
    X86_AT(c, 0xca497u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0ca49a  lea edx, [eax*8]
    X86_AT(c, 0xca49au);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0ca4a1  lea edx, [eax + edx*8]
    X86_AT(c, 0xca4a1u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0ca4a4  lea ebx, [edx*1 + 0xa4aa0]
    X86_AT(c, 0xca4a4u);
    c.r[3] = (uint32_t)(c.r[2] + 0xA4AA0u);
    // 0ca4ab  call 0xb8d84
    X86_AT(c, 0xca4abu);
    push32(c, 0xca4b0u); x86_call_known(c, 0xb8d84u, f_000b8d84); X86_RET(c, 0xca4b0u);
    X86_TICK(c, 27);
    // 0ca4b0  push 0xa
    X86_AT(c, 0xca4b0u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0ca4b2  push 0xf
    X86_AT(c, 0xca4b2u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0ca4b4  push 0xf
    X86_AT(c, 0xca4b4u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0ca4b6  push 0x12
    X86_AT(c, 0xca4b6u);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0ca4b8  push 0x26
    X86_AT(c, 0xca4b8u);
    { uint32_t v = 0x26u; push32(c, v); }
    // 0ca4ba  push 0x140
    X86_AT(c, 0xca4bau);
    { uint32_t v = 0x140u; push32(c, v); }
    // 0ca4bf  push 0x140
    X86_AT(c, 0xca4bfu);
    { uint32_t v = 0x140u; push32(c, v); }
    // 0ca4c4  push 0x3f
    X86_AT(c, 0xca4c4u);
    { uint32_t v = 0x3Fu; push32(c, v); }
    // 0ca4c6  push 0x1a
    X86_AT(c, 0xca4c6u);
    { uint32_t v = 0x1Au; push32(c, v); }
    // 0ca4c8  push 6
    X86_AT(c, 0xca4c8u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca4ca  call 0xbb5cc
    X86_AT(c, 0xca4cau);
    push32(c, 0xca4cfu); x86_call_known(c, 0xbb5ccu, f_000bb5cc); X86_RET(c, 0xca4cfu);
    X86_TICK(c, 9);
    // 0ca4cf  push 6
    X86_AT(c, 0xca4cfu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca4d1  call 0xbb6b0
    X86_AT(c, 0xca4d1u);
    push32(c, 0xca4d6u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xca4d6u);
    X86_TICK(c, 9);
    // 0ca4d6  push 6
    X86_AT(c, 0xca4d6u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca4d8  call 0xbb710
    X86_AT(c, 0xca4d8u);
    push32(c, 0xca4ddu); x86_call_known(c, 0xbb710u, f_000bb710); X86_RET(c, 0xca4ddu);
    X86_TICK(c, 13);
    // 0ca4dd  push 0
    X86_AT(c, 0xca4ddu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ca4df  push 4
    X86_AT(c, 0xca4dfu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ca4e1  push 6
    X86_AT(c, 0xca4e1u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca4e3  call 0xbc174
    X86_AT(c, 0xca4e3u);
    push32(c, 0xca4e8u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xca4e8u);
    X86_TICK(c, 13);
    // 0ca4e8  add esp, 0x3c
    X86_AT(c, 0xca4e8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0ca4eb  push 0xd
    X86_AT(c, 0xca4ebu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0ca4ed  push 6
    X86_AT(c, 0xca4edu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca4ef  call 0xbc3ec
    X86_AT(c, 0xca4efu);
    push32(c, 0xca4f4u); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xca4f4u);
    X86_TICK(c, 11);
    // 0ca4f4  push 0x71d8
    X86_AT(c, 0xca4f4u);
    { uint32_t v = 0x71D8u; push32(c, v); }
    // 0ca4f9  push 6
    X86_AT(c, 0xca4f9u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca4fb  call 0xbbba4
    X86_AT(c, 0xca4fbu);
    push32(c, 0xca500u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xca500u);
    X86_TICK(c, 11);
    // 0ca500  push 0xb
    X86_AT(c, 0xca500u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ca502  push 6
    X86_AT(c, 0xca502u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca504  call 0xbc3ec
    X86_AT(c, 0xca504u);
    push32(c, 0xca509u); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xca509u);
    X86_TICK(c, 11);
    // 0ca509  push 0x71e0
    X86_AT(c, 0xca509u);
    { uint32_t v = 0x71E0u; push32(c, v); }
    // 0ca50e  push 6
    X86_AT(c, 0xca50eu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca510  call 0xba428
    X86_AT(c, 0xca510u);
    push32(c, 0xca515u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xca515u);
    X86_TICK(c, 11);
    // 0ca515  push 0xd
    X86_AT(c, 0xca515u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0ca517  push 6
    X86_AT(c, 0xca517u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca519  call 0xbc3ec
    X86_AT(c, 0xca519u);
    push32(c, 0xca51eu); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xca51eu);
    X86_TICK(c, 11);
    // 0ca51e  push 0x720c
    X86_AT(c, 0xca51eu);
    { uint32_t v = 0x720Cu; push32(c, v); }
    // 0ca523  push 6
    X86_AT(c, 0xca523u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca525  call 0xbbba4
    X86_AT(c, 0xca525u);
    push32(c, 0xca52au); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xca52au);
    X86_TICK(c, 13);
    // 0ca52a  add esp, 0x30
    X86_AT(c, 0xca52au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0ca52d  push 0xf
    X86_AT(c, 0xca52du);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0ca52f  push 6
    X86_AT(c, 0xca52fu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca531  call 0xbc3ec
    X86_AT(c, 0xca531u);
    push32(c, 0xca536u); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xca536u);
    X86_TICK(c, 9);
    // 0ca536  push 6
    X86_AT(c, 0xca536u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca538  call 0xbb6b0
    X86_AT(c, 0xca538u);
    push32(c, 0xca53du); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xca53du);
    X86_TICK(c, 18);
    // 0ca53d  mov edi, 2
    X86_AT(c, 0xca53du);
    c.r[7] = 0x2u;
    // 0ca542  push edi
    X86_AT(c, 0xca542u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ca543  push dword ptr [ebp - 4]
    X86_AT(c, 0xca543u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0ca546  push 6
    X86_AT(c, 0xca546u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca548  call 0xbc174
    X86_AT(c, 0xca548u);
    push32(c, 0xca54du); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xca54du);
    X86_TICK(c, 11);
    // 0ca54d  push 0x7214
    X86_AT(c, 0xca54du);
    { uint32_t v = 0x7214u; push32(c, v); }
    // 0ca552  push 6
    X86_AT(c, 0xca552u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca554  call 0xba428
    X86_AT(c, 0xca554u);
    push32(c, 0xca559u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xca559u);
    X86_TICK(c, 11);
    // 0ca559  push ebx
    X86_AT(c, 0xca559u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ca55a  push 6
    X86_AT(c, 0xca55au);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca55c  call 0xbbfe0
    X86_AT(c, 0xca55cu);
    push32(c, 0xca561u); x86_call_known(c, 0xbbfe0u, f_000bbfe0); X86_RET(c, 0xca561u);
    X86_TICK(c, 19);
    // 0ca561  mov edi, 3
    X86_AT(c, 0xca561u);
    c.r[7] = 0x3u;
    // 0ca566  mov eax, edi
    X86_AT(c, 0xca566u);
    c.r[0] = c.r[7];
    // 0ca568  inc edi
    X86_AT(c, 0xca568u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0ca569  push eax
    X86_AT(c, 0xca569u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ca56a  push 0
    X86_AT(c, 0xca56au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ca56c  push 6
    X86_AT(c, 0xca56cu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca56e  call 0xbc174
    X86_AT(c, 0xca56eu);
    push32(c, 0xca573u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xca573u);
    X86_TICK(c, 14);
    // 0ca573  add esp, 0x34
    X86_AT(c, 0xca573u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
    // 0ca576  cmp dword ptr [ebp + 0xc], 0
    X86_AT(c, 0xca576u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0x0u, 0, 4);
    // 0ca57a  jne 0xca591
    X86_AT(c, 0xca57au);
    if (x86_cc(c, 5)) { goto L_ca591; }
    X86_TICK(c, 11);
    // 0ca57c  push 0x722c
    X86_AT(c, 0xca57cu);
    { uint32_t v = 0x722Cu; push32(c, v); }
    // 0ca581  push 6
    X86_AT(c, 0xca581u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca583  call 0xba428
    X86_AT(c, 0xca583u);
    push32(c, 0xca588u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xca588u);
    X86_TICK(c, 9);
    // 0ca588  mov dword ptr [ebp - 8], 0x11
    X86_AT(c, 0xca588u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x11u);
    // 0ca58f  jmp 0xca5a4
    X86_AT(c, 0xca58fu);
    goto L_ca5a4;
L_ca591:
    X86_TICK(c, 11);
    // 0ca591  push 0x7258
    X86_AT(c, 0xca591u);
    { uint32_t v = 0x7258u; push32(c, v); }
    // 0ca596  push 6
    X86_AT(c, 0xca596u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca598  call 0xba428
    X86_AT(c, 0xca598u);
    push32(c, 0xca59du); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xca59du);
    X86_TICK(c, 2);
    // 0ca59d  mov dword ptr [ebp - 8], 7
    X86_AT(c, 0xca59du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x7u);
L_ca5a4:
    X86_TICK(c, 11);
    // 0ca5a4  add esp, 8
    X86_AT(c, 0xca5a4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ca5a7  push 6
    X86_AT(c, 0xca5a7u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca5a9  call 0xbbb5c
    X86_AT(c, 0xca5a9u);
    push32(c, 0xca5aeu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xca5aeu);
    X86_TICK(c, 4);
    // 0ca5ae  mov esi, 1
    X86_AT(c, 0xca5aeu);
    c.r[6] = 0x1u;
    // 0ca5b3  add esp, 4
    X86_AT(c, 0xca5b3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_ca5b6:
    X86_TICK(c, 11);
    // 0ca5b6  cmp esi, dword ptr [ebp - 8]
    X86_AT(c, 0xca5b6u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 4);
    // 0ca5b9  jg 0xca6c5
    X86_AT(c, 0xca5b9u);
    if (x86_cc(c, 15)) { goto L_ca6c5; }
    X86_TICK(c, 12);
    // 0ca5bf  cmp dword ptr [ebp + 0xc], 0
    X86_AT(c, 0xca5bfu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0x0u, 0, 4);
    // 0ca5c3  jne 0xca5cb
    X86_AT(c, 0xca5c3u);
    if (x86_cc(c, 5)) { goto L_ca5cb; }
    X86_TICK(c, 11);
    // 0ca5c5  mov eax, dword ptr [ebx + esi*4 + 0x7b]
    X86_AT(c, 0xca5c5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[6] * 4 + 0x7Bu)));
    // 0ca5c9  jmp 0xca5cf
    X86_AT(c, 0xca5c9u);
    goto L_ca5cf;
L_ca5cb:
    X86_TICK(c, 4);
    // 0ca5cb  mov eax, dword ptr [ebx + esi*4 + 0x5a]
    X86_AT(c, 0xca5cbu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[6] * 4 + 0x5Au)));
L_ca5cf:
    X86_TICK(c, 14);
    // 0ca5cf  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xca5cfu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0ca5d2  cmp dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xca5d2u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0x0u, 0, 4);
    // 0ca5d6  je 0xca6bf
    X86_AT(c, 0xca5d6u);
    if (x86_cc(c, 4)) { goto L_ca6bf; }
    X86_TICK(c, 23);
    // 0ca5dc  mov eax, edi
    X86_AT(c, 0xca5dcu);
    c.r[0] = c.r[7];
    // 0ca5de  inc edi
    X86_AT(c, 0xca5deu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0ca5df  push eax
    X86_AT(c, 0xca5dfu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ca5e0  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xca5e0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0ca5e3  add eax, 2
    X86_AT(c, 0xca5e3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0ca5e6  push eax
    X86_AT(c, 0xca5e6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ca5e7  push 6
    X86_AT(c, 0xca5e7u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca5e9  call 0xbc174
    X86_AT(c, 0xca5e9u);
    push32(c, 0xca5eeu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xca5eeu);
    X86_TICK(c, 21);
    // 0ca5ee  mov eax, esi
    X86_AT(c, 0xca5eeu);
    c.r[0] = c.r[6];
    // 0ca5f0  add al, 0x41
    X86_AT(c, 0xca5f0u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x41u, 0, 1)); }
    // 0ca5f2  mov byte ptr [ebp - 0xf], al
    X86_AT(c, 0xca5f2u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u)), g8(c, 0));
    // 0ca5f5  lea edx, [ebp - 0xf]
    X86_AT(c, 0xca5f5u);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFFF1u);
    // 0ca5f8  push edx
    X86_AT(c, 0xca5f8u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0ca5f9  push 6
    X86_AT(c, 0xca5f9u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca5fb  mov byte ptr [ebp - 0x14], al
    X86_AT(c, 0xca5fbu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), g8(c, 0));
    // 0ca5fe  call 0xbbfe0
    X86_AT(c, 0xca5feu);
    push32(c, 0xca603u); x86_call_known(c, 0xbbfe0u, f_000bbfe0); X86_RET(c, 0xca603u);
    X86_TICK(c, 11);
    // 0ca603  push 0x7284
    X86_AT(c, 0xca603u);
    { uint32_t v = 0x7284u; push32(c, v); }
    // 0ca608  push 6
    X86_AT(c, 0xca608u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca60a  call 0xbbba4
    X86_AT(c, 0xca60au);
    push32(c, 0xca60fu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xca60fu);
    X86_TICK(c, 14);
    // 0ca60f  add esp, 0x1c
    X86_AT(c, 0xca60fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0ca612  cmp dword ptr [ebp + 0xc], 0
    X86_AT(c, 0xca612u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0x0u, 0, 4);
    // 0ca616  jne 0xca628
    X86_AT(c, 0xca616u);
    if (x86_cc(c, 5)) { goto L_ca628; }
    X86_TICK(c, 20);
    // 0ca618  lea eax, [ebp - 0xd]
    X86_AT(c, 0xca618u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF3u);
    // 0ca61b  push eax
    X86_AT(c, 0xca61bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ca61c  push dword ptr [ebp - 0x14]
    X86_AT(c, 0xca61cu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0ca61f  push 0x12
    X86_AT(c, 0xca61fu);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0ca621  push 0xa6bac
    X86_AT(c, 0xca621u);
    { uint32_t v = 0xA6BACu; push32(c, v); }
    // 0ca626  jmp 0xca638
    X86_AT(c, 0xca626u);
    goto L_ca638;
L_ca628:
    X86_TICK(c, 14);
    // 0ca628  lea eax, [ebp - 0xd]
    X86_AT(c, 0xca628u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF3u);
    // 0ca62b  push eax
    X86_AT(c, 0xca62bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ca62c  mov eax, esi
    X86_AT(c, 0xca62cu);
    c.r[0] = c.r[6];
    // 0ca62e  add al, 0x41
    X86_AT(c, 0xca62eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x41u, 0, 1)); }
    // 0ca630  push eax
    X86_AT(c, 0xca630u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ca631  push 8
    X86_AT(c, 0xca631u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0ca633  push 0xa74f4
    X86_AT(c, 0xca633u);
    { uint32_t v = 0xA74F4u; push32(c, v); }
L_ca638:
    X86_TICK(c, 7);
    // 0ca638  call 0xba1b4
    X86_AT(c, 0xca638u);
    push32(c, 0xca63du); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xca63du);
    X86_TICK(c, 11);
    // 0ca63d  push eax
    X86_AT(c, 0xca63du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ca63e  push 6
    X86_AT(c, 0xca63eu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca640  call 0xbbba4
    X86_AT(c, 0xca640u);
    push32(c, 0xca645u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xca645u);
    X86_TICK(c, 13);
    // 0ca645  add esp, 0x18
    X86_AT(c, 0xca645u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0ca648  push 0x728c
    X86_AT(c, 0xca648u);
    { uint32_t v = 0x728Cu; push32(c, v); }
    // 0ca64d  push 6
    X86_AT(c, 0xca64du);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca64f  call 0xbbba4
    X86_AT(c, 0xca64fu);
    push32(c, 0xca654u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xca654u);
    X86_TICK(c, 14);
    // 0ca654  add esp, 8
    X86_AT(c, 0xca654u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ca657  cmp dword ptr [ebp + 0xc], 0
    X86_AT(c, 0xca657u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0x0u, 0, 4);
    // 0ca65b  jne 0xca665
    X86_AT(c, 0xca65bu);
    if (x86_cc(c, 5)) { goto L_ca665; }
    X86_TICK(c, 14);
    // 0ca65d  push 2
    X86_AT(c, 0xca65du);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ca65f  push dword ptr [ebx + esi*4 + 0x7b]
    X86_AT(c, 0xca65fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[6] * 4 + 0x7Bu))); push32(c, v); }
    // 0ca663  jmp 0xca66b
    X86_AT(c, 0xca663u);
    goto L_ca66b;
L_ca665:
    X86_TICK(c, 7);
    // 0ca665  push 2
    X86_AT(c, 0xca665u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ca667  push dword ptr [ebx + esi*4 + 0x5a]
    X86_AT(c, 0xca667u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[6] * 4 + 0x5Au))); push32(c, v); }
L_ca66b:
    X86_TICK(c, 9);
    // 0ca66b  push 6
    X86_AT(c, 0xca66bu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca66d  call 0xba404
    X86_AT(c, 0xca66du);
    push32(c, 0xca672u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xca672u);
    X86_TICK(c, 13);
    // 0ca672  add esp, 0xc
    X86_AT(c, 0xca672u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0ca675  push 0x7294
    X86_AT(c, 0xca675u);
    { uint32_t v = 0x7294u; push32(c, v); }
    // 0ca67a  push 6
    X86_AT(c, 0xca67au);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca67c  call 0xbbba4
    X86_AT(c, 0xca67cu);
    push32(c, 0xca681u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xca681u);
    X86_TICK(c, 9);
    // 0ca681  add esp, 8
    X86_AT(c, 0xca681u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ca684  cmp edi, 0xd
    X86_AT(c, 0xca684u);
    (void)x86_sub(c, c.r[7], 0xDu, 0, 4);
    // 0ca687  jle 0xca6bf
    X86_AT(c, 0xca687u);
    if (x86_cc(c, 14)) { goto L_ca6bf; }
    X86_TICK(c, 9);
    // 0ca689  push 6
    X86_AT(c, 0xca689u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca68b  call 0xc9890
    X86_AT(c, 0xca68bu);
    push32(c, 0xca690u); x86_call_known(c, 0xc9890u, f_000c9890); X86_RET(c, 0xca690u);
    X86_TICK(c, 9);
    // 0ca690  add esp, 4
    X86_AT(c, 0xca690u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ca693  dec eax
    X86_AT(c, 0xca693u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0ca694  jne 0xca6a9
    X86_AT(c, 0xca694u);
    if (x86_cc(c, 5)) { goto L_ca6a9; }
    X86_TICK(c, 11);
    // 0ca696  push 0
    X86_AT(c, 0xca696u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ca698  push 6
    X86_AT(c, 0xca698u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca69a  call 0xbba64
    X86_AT(c, 0xca69au);
    push32(c, 0xca69fu); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xca69fu);
    X86_TICK(c, 7);
    // 0ca69f  call 0xb8d78
    X86_AT(c, 0xca69fu);
    push32(c, 0xca6a4u); x86_call_known(c, 0xb8d78u, f_000b8d78); X86_RET(c, 0xca6a4u);
    X86_TICK(c, 9);
    // 0ca6a4  add esp, 8
    X86_AT(c, 0xca6a4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ca6a7  jmp 0xca6ca
    X86_AT(c, 0xca6a7u);
    goto L_ca6ca;
L_ca6a9:
    X86_TICK(c, 19);
    // 0ca6a9  mov edi, 4
    X86_AT(c, 0xca6a9u);
    c.r[7] = 0x4u;
    // 0ca6ae  push 0x12
    X86_AT(c, 0xca6aeu);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0ca6b0  push 0x26
    X86_AT(c, 0xca6b0u);
    { uint32_t v = 0x26u; push32(c, v); }
    // 0ca6b2  push edi
    X86_AT(c, 0xca6b2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ca6b3  push 0
    X86_AT(c, 0xca6b3u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ca6b5  push 6
    X86_AT(c, 0xca6b5u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca6b7  call 0xbc2b0
    X86_AT(c, 0xca6b7u);
    push32(c, 0xca6bcu); x86_call_known(c, 0xbc2b0u, f_000bc2b0); X86_RET(c, 0xca6bcu);
    X86_TICK(c, 2);
    // 0ca6bc  add esp, 0x14
    X86_AT(c, 0xca6bcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_ca6bf:
    X86_TICK(c, 9);
    // 0ca6bf  inc esi
    X86_AT(c, 0xca6bfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0ca6c0  jmp 0xca5b6
    X86_AT(c, 0xca6c0u);
    X86_POLL(c, 0xca5b6u); goto L_ca5b6;
L_ca6c5:
    X86_TICK(c, 7);
    // 0ca6c5  call 0xb8d78
    X86_AT(c, 0xca6c5u);
    push32(c, 0xca6cau); x86_call_known(c, 0xb8d78u, f_000b8d78); X86_RET(c, 0xca6cau);
L_ca6ca:
    X86_TICK(c, 28);
    // 0ca6ca  pop edi
    X86_AT(c, 0xca6cau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ca6cb  pop esi
    X86_AT(c, 0xca6cbu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ca6cc  pop ebx
    X86_AT(c, 0xca6ccu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ca6cd  leave 
    X86_AT(c, 0xca6cdu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ca6ce  ret 
    X86_AT(c, 0xca6ceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xca47cu, "ran off the end of a function");
}
void f_000ca6d0(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0ca6d0  push esi
    X86_AT(c, 0xca6d0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ca6d1  push edi
    X86_AT(c, 0xca6d1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ca6d2  cmp dword ptr [0xa4a56], 0
    X86_AT(c, 0xca6d2u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x0u, 0, 4);
    // 0ca6d9  je 0xca6f2
    X86_AT(c, 0xca6d9u);
    if (x86_cc(c, 4)) { goto L_ca6f2; }
    X86_TICK(c, 20);
    // 0ca6db  mov eax, 0xaef8c
    X86_AT(c, 0xca6dbu);
    c.r[0] = 0xAEF8Cu;
    // 0ca6e0  dec word ptr [eax]
    X86_AT(c, 0xca6e0u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0])); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 0ca6e3  cmp word ptr [eax], 0
    X86_AT(c, 0xca6e3u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[0]))), 0x0u, 0, 2);
    // 0ca6e7  jg 0xca873
    X86_AT(c, 0xca6e7u);
    if (x86_cc(c, 15)) { goto L_ca873; }
    X86_TICK(c, 2);
    // 0ca6ed  mov word ptr [eax], 4
    X86_AT(c, 0xca6edu);
    wr16((c.sbase[3] + (uint32_t)(c.r[0])), 0x4u);
L_ca6f2:
    X86_TICK(c, 20);
    // 0ca6f2  mov eax, 0xaef8c
    X86_AT(c, 0xca6f2u);
    c.r[0] = 0xAEF8Cu;
    // 0ca6f7  dec word ptr [eax + 2]
    X86_AT(c, 0xca6f7u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0x2u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 0ca6fb  cmp word ptr [eax + 2], 0
    X86_AT(c, 0xca6fbu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[0] + 0x2u))), 0x0u, 0, 2);
    // 0ca700  jge 0xca708
    X86_AT(c, 0xca700u);
    if (x86_cc(c, 13)) { goto L_ca708; }
    X86_TICK(c, 2);
    // 0ca702  mov word ptr [eax + 2], 9
    X86_AT(c, 0xca702u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x2u)), 0x9u);
L_ca708:
    X86_TICK(c, 2);
    // 0ca708  sub edi, edi
    X86_AT(c, 0xca708u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_ca70a:
    X86_TICK(c, 7);
    // 0ca70a  cmp edi, 4
    X86_AT(c, 0xca70au);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0ca70d  jge 0xca873
    X86_AT(c, 0xca70du);
    if (x86_cc(c, 13)) { goto L_ca873; }
    X86_TICK(c, 19);
    // 0ca713  lea eax, [edi + edi*2]
    X86_AT(c, 0xca713u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0ca716  lea edx, [eax*8]
    X86_AT(c, 0xca716u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0ca71d  lea edx, [eax + edx*8]
    X86_AT(c, 0xca71du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0ca720  lea esi, [edx*1 + 0xa4aa0]
    X86_AT(c, 0xca720u);
    c.r[6] = (uint32_t)(c.r[2] + 0xA4AA0u);
    // 0ca727  mov al, byte ptr [esi + 0x1d]
    X86_AT(c, 0xca727u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x1Du))));
    // 0ca72a  cmp al, 0x44
    X86_AT(c, 0xca72au);
    (void)x86_sub(c, g8(c, 0), 0x44u, 0, 1);
    // 0ca72c  je 0xca867
    X86_AT(c, 0xca72cu);
    if (x86_cc(c, 4)) { goto L_ca867; }
    X86_TICK(c, 7);
    // 0ca732  cmp al, 0x41
    X86_AT(c, 0xca732u);
    (void)x86_sub(c, g8(c, 0), 0x41u, 0, 1);
    // 0ca734  je 0xca867
    X86_AT(c, 0xca734u);
    if (x86_cc(c, 4)) { goto L_ca867; }
    X86_TICK(c, 15);
    // 0ca73a  movzx edx, byte ptr [esi + 0x2f]
    X86_AT(c, 0xca73au);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x2Fu)));
    // 0ca73e  sub edx, 0x41
    X86_AT(c, 0xca73eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x41u, 0, 4); }
    // 0ca741  cmp edx, 0x16
    X86_AT(c, 0xca741u);
    (void)x86_sub(c, c.r[2], 0x16u, 0, 4);
    // 0ca744  ja 0xca807
    X86_AT(c, 0xca744u);
    if (x86_cc(c, 7)) { goto L_ca807; }
    X86_TICK(c, 7);
    // 0ca74a  jmp dword ptr cs:[edx*4 + 0xca752]
    X86_AT(c, 0xca74au);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xCA752u)));
      switch (t) {
      case 0xca7aeu: goto L_ca7ae;
      case 0xca7b6u: goto L_ca7b6;
      case 0xca7c0u: goto L_ca7c0;
      case 0xca7c5u: goto L_ca7c5;
      case 0xca7d7u: goto L_ca7d7;
      case 0xca7e8u: goto L_ca7e8;
      case 0xca807u: goto L_ca807;
      default: x86_jump(c, t); return; } }
L_ca7ae:
    X86_TICK(c, 17);
    // 0ca7ae  mov eax, dword ptr [esi + 0x31]
    X86_AT(c, 0xca7aeu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x31u)));
    // 0ca7b1  cmp eax, dword ptr [esi + 0x26]
    X86_AT(c, 0xca7b1u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x26u))), 0, 4);
    // 0ca7b4  jmp 0xca7bc
    X86_AT(c, 0xca7b4u);
    goto L_ca7bc;
L_ca7b6:
    X86_TICK(c, 10);
    // 0ca7b6  mov eax, dword ptr [esi + 0x31]
    X86_AT(c, 0xca7b6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x31u)));
    // 0ca7b9  cmp eax, dword ptr [esi + 0x2a]
    X86_AT(c, 0xca7b9u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x2Au))), 0, 4);
L_ca7bc:
    X86_TICK(c, 5);
    // 0ca7bc  jg 0xca807
    X86_AT(c, 0xca7bcu);
    if (x86_cc(c, 15)) { goto L_ca807; }
    X86_TICK(c, 7);
    // 0ca7be  jmp 0xca804
    X86_AT(c, 0xca7beu);
    goto L_ca804;
L_ca7c0:
    X86_TICK(c, 11);
    // 0ca7c0  mov eax, dword ptr [esi + 0x26]
    X86_AT(c, 0xca7c0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x26u)));
    // 0ca7c3  jmp 0xca7da
    X86_AT(c, 0xca7c3u);
    goto L_ca7da;
L_ca7c5:
    X86_TICK(c, 22);
    // 0ca7c5  mov eax, dword ptr [esi + 0x26]
    X86_AT(c, 0xca7c5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x26u)));
    // 0ca7c8  cdq 
    X86_AT(c, 0xca7c8u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0ca7c9  sub eax, edx
    X86_AT(c, 0xca7c9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0ca7cb  sar eax, 1
    X86_AT(c, 0xca7cbu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0ca7cd  mov edx, dword ptr [esi + 0x31]
    X86_AT(c, 0xca7cdu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x31u)));
    // 0ca7d0  cmp eax, edx
    X86_AT(c, 0xca7d0u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0ca7d2  jl 0xca7d7
    X86_AT(c, 0xca7d2u);
    if (x86_cc(c, 12)) { goto L_ca7d7; }
    X86_TICK(c, 6);
    // 0ca7d4  inc dword ptr [esi + 0x31]
    X86_AT(c, 0xca7d4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0x31u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_ca7d7:
    X86_TICK(c, 4);
    // 0ca7d7  mov eax, dword ptr [esi + 0x2a]
    X86_AT(c, 0xca7d7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x2Au)));
L_ca7da:
    X86_TICK(c, 18);
    // 0ca7da  cdq 
    X86_AT(c, 0xca7dau);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0ca7db  sub eax, edx
    X86_AT(c, 0xca7dbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0ca7dd  sar eax, 1
    X86_AT(c, 0xca7ddu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0ca7df  mov edx, dword ptr [esi + 0x31]
    X86_AT(c, 0xca7dfu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x31u)));
    // 0ca7e2  cmp eax, edx
    X86_AT(c, 0xca7e2u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0ca7e4  jl 0xca807
    X86_AT(c, 0xca7e4u);
    if (x86_cc(c, 12)) { goto L_ca807; }
    X86_TICK(c, 7);
    // 0ca7e6  jmp 0xca804
    X86_AT(c, 0xca7e6u);
    goto L_ca804;
L_ca7e8:
    X86_TICK(c, 22);
    // 0ca7e8  mov eax, dword ptr [esi + 0x26]
    X86_AT(c, 0xca7e8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x26u)));
    // 0ca7eb  cdq 
    X86_AT(c, 0xca7ebu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0ca7ec  sub eax, edx
    X86_AT(c, 0xca7ecu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0ca7ee  sar eax, 1
    X86_AT(c, 0xca7eeu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0ca7f0  mov edx, dword ptr [esi + 0x31]
    X86_AT(c, 0xca7f0u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x31u)));
    // 0ca7f3  cmp eax, edx
    X86_AT(c, 0xca7f3u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0ca7f5  jle 0xca807
    X86_AT(c, 0xca7f5u);
    if (x86_cc(c, 14)) { goto L_ca807; }
    X86_TICK(c, 22);
    // 0ca7f7  mov eax, dword ptr [esi + 0x2a]
    X86_AT(c, 0xca7f7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x2Au)));
    // 0ca7fa  cdq 
    X86_AT(c, 0xca7fau);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0ca7fb  sub eax, edx
    X86_AT(c, 0xca7fbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0ca7fd  sar eax, 1
    X86_AT(c, 0xca7fdu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0ca7ff  cmp eax, dword ptr [esi + 0x31]
    X86_AT(c, 0xca7ffu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x31u))), 0, 4);
    // 0ca802  jle 0xca807
    X86_AT(c, 0xca802u);
    if (x86_cc(c, 14)) { goto L_ca807; }
L_ca804:
    X86_TICK(c, 6);
    // 0ca804  inc dword ptr [esi + 0x31]
    X86_AT(c, 0xca804u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0x31u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_ca807:
    X86_TICK(c, 11);
    // 0ca807  push 3
    X86_AT(c, 0xca807u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ca809  push edi
    X86_AT(c, 0xca809u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ca80a  call 0xca878
    X86_AT(c, 0xca80au);
    push32(c, 0xca80fu); x86_call_known(c, 0xca878u, f_000ca878); X86_RET(c, 0xca80fu);
    X86_TICK(c, 14);
    // 0ca80f  add esp, 8
    X86_AT(c, 0xca80fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ca812  cmp byte ptr [esi + 0x1d], 0x50
    X86_AT(c, 0xca812u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x1Du))), 0x50u, 0, 1);
    // 0ca816  jne 0xca849
    X86_AT(c, 0xca816u);
    if (x86_cc(c, 5)) { goto L_ca849; }
    X86_TICK(c, 11);
    // 0ca818  push 1
    X86_AT(c, 0xca818u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ca81a  push edi
    X86_AT(c, 0xca81au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ca81b  call 0xc9b10
    X86_AT(c, 0xca81bu);
    push32(c, 0xca820u); x86_call_known(c, 0xc9b10u, f_000c9b10); X86_RET(c, 0xca820u);
    X86_TICK(c, 9);
    // 0ca820  push edi
    X86_AT(c, 0xca820u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ca821  call 0xc7f0c
    X86_AT(c, 0xca821u);
    push32(c, 0xca826u); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xca826u);
    X86_TICK(c, 9);
    // 0ca826  push 7
    X86_AT(c, 0xca826u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ca828  call 0xbb6b0
    X86_AT(c, 0xca828u);
    push32(c, 0xca82du); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xca82du);
    X86_TICK(c, 11);
    // 0ca82d  push 0x7298
    X86_AT(c, 0xca82du);
    { uint32_t v = 0x7298u; push32(c, v); }
    // 0ca832  push 7
    X86_AT(c, 0xca832u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ca834  call 0xba428
    X86_AT(c, 0xca834u);
    push32(c, 0xca839u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xca839u);
    X86_TICK(c, 9);
    // 0ca839  push 7
    X86_AT(c, 0xca839u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ca83b  call 0xbbb5c
    X86_AT(c, 0xca83bu);
    push32(c, 0xca840u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xca840u);
    X86_TICK(c, 9);
    // 0ca840  push edi
    X86_AT(c, 0xca840u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ca841  call 0xc7f0c
    X86_AT(c, 0xca841u);
    push32(c, 0xca846u); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xca846u);
    X86_TICK(c, 2);
    // 0ca846  add esp, 0x20
    X86_AT(c, 0xca846u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
L_ca849:
    X86_TICK(c, 12);
    // 0ca849  cmp word ptr [0xaef8e], 0
    X86_AT(c, 0xca849u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xAEF8Eu))), 0x0u, 0, 2);
    // 0ca851  jne 0xca85e
    X86_AT(c, 0xca851u);
    if (x86_cc(c, 5)) { goto L_ca85e; }
    X86_TICK(c, 15);
    // 0ca853  mov eax, dword ptr [esi + 0x35]
    X86_AT(c, 0xca853u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x35u)));
    // 0ca856  cmp eax, dword ptr [esi + 0x39]
    X86_AT(c, 0xca856u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x39u))), 0, 4);
    // 0ca859  jge 0xca85e
    X86_AT(c, 0xca859u);
    if (x86_cc(c, 13)) { goto L_ca85e; }
    X86_TICK(c, 6);
    // 0ca85b  inc dword ptr [esi + 0x35]
    X86_AT(c, 0xca85bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0x35u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_ca85e:
    X86_TICK(c, 9);
    // 0ca85e  push edi
    X86_AT(c, 0xca85eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ca85f  call 0xbe720
    X86_AT(c, 0xca85fu);
    push32(c, 0xca864u); x86_call_known(c, 0xbe720u, f_000be720); X86_RET(c, 0xca864u);
    X86_TICK(c, 2);
    // 0ca864  add esp, 4
    X86_AT(c, 0xca864u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_ca867:
    X86_TICK(c, 11);
    // 0ca867  inc edi
    X86_AT(c, 0xca867u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0ca868  add esi, 0xc3
    X86_AT(c, 0xca868u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0xC3u, 0, 4); }
    // 0ca86e  jmp 0xca70a
    X86_AT(c, 0xca86eu);
    X86_POLL(c, 0xca70au); goto L_ca70a;
L_ca873:
    X86_TICK(c, 18);
    // 0ca873  pop edi
    X86_AT(c, 0xca873u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ca874  pop esi
    X86_AT(c, 0xca874u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ca875  ret 
    X86_AT(c, 0xca875u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xca6d0u, "ran off the end of a function");
}
void f_000ca878(X86Cpu& c) {
    X86_TICK(c, 39);
    // 0ca878  push ebp
    X86_AT(c, 0xca878u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ca879  mov ebp, esp
    X86_AT(c, 0xca879u);
    c.r[5] = c.r[4];
    // 0ca87b  push edi
    X86_AT(c, 0xca87bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ca87c  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xca87cu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ca87f  lea eax, [edi + edi*2]
    X86_AT(c, 0xca87fu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0ca882  lea edx, [eax*8]
    X86_AT(c, 0xca882u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0ca889  lea edx, [eax + edx*8]
    X86_AT(c, 0xca889u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0ca88c  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xca88cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0ca88f  sub dword ptr [edx + 0xa4ae5], eax
    X86_AT(c, 0xca88fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AE5u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0ca895  cmp dword ptr [edx + 0xa4ae5], 0
    X86_AT(c, 0xca895u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AE5u))), 0x0u, 0, 4);
    // 0ca89c  jge 0xca8a8
    X86_AT(c, 0xca89cu);
    if (x86_cc(c, 13)) { goto L_ca8a8; }
    X86_TICK(c, 2);
    // 0ca89e  mov dword ptr [edx + 0xa4ae5], 0
    X86_AT(c, 0xca89eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AE5u)), 0x0u);
L_ca8a8:
    X86_TICK(c, 18);
    // 0ca8a8  lea eax, [edi + edi*2]
    X86_AT(c, 0xca8a8u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0ca8ab  lea edx, [eax*8]
    X86_AT(c, 0xca8abu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0ca8b2  lea edx, [eax + edx*8]
    X86_AT(c, 0xca8b2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0ca8b5  cmp dword ptr [edx + 0xa4ae5], 0
    X86_AT(c, 0xca8b5u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AE5u))), 0x0u, 0, 4);
    // 0ca8bc  jne 0xca8fd
    X86_AT(c, 0xca8bcu);
    if (x86_cc(c, 5)) { goto L_ca8fd; }
    X86_TICK(c, 9);
    // 0ca8be  push 8
    X86_AT(c, 0xca8beu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0ca8c0  call 0xb607c
    X86_AT(c, 0xca8c0u);
    push32(c, 0xca8c5u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xca8c5u);
    X86_TICK(c, 9);
    // 0ca8c5  push 2
    X86_AT(c, 0xca8c5u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ca8c7  call 0xbebbc
    X86_AT(c, 0xca8c7u);
    push32(c, 0xca8ccu); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xca8ccu);
    X86_TICK(c, 9);
    // 0ca8cc  push edi
    X86_AT(c, 0xca8ccu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ca8cd  call 0xc7f0c
    X86_AT(c, 0xca8cdu);
    push32(c, 0xca8d2u); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xca8d2u);
    X86_TICK(c, 9);
    // 0ca8d2  push 7
    X86_AT(c, 0xca8d2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ca8d4  call 0xbb6b0
    X86_AT(c, 0xca8d4u);
    push32(c, 0xca8d9u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xca8d9u);
    X86_TICK(c, 11);
    // 0ca8d9  push 0x72c0
    X86_AT(c, 0xca8d9u);
    { uint32_t v = 0x72C0u; push32(c, v); }
    // 0ca8de  push 7
    X86_AT(c, 0xca8deu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ca8e0  call 0xba428
    X86_AT(c, 0xca8e0u);
    push32(c, 0xca8e5u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xca8e5u);
    X86_TICK(c, 9);
    // 0ca8e5  push 7
    X86_AT(c, 0xca8e5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ca8e7  call 0xbbb5c
    X86_AT(c, 0xca8e7u);
    push32(c, 0xca8ecu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xca8ecu);
    X86_TICK(c, 9);
    // 0ca8ec  push edi
    X86_AT(c, 0xca8ecu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ca8ed  call 0xc7f0c
    X86_AT(c, 0xca8edu);
    push32(c, 0xca8f2u); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xca8f2u);
    X86_TICK(c, 11);
    // 0ca8f2  push 5
    X86_AT(c, 0xca8f2u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ca8f4  push edi
    X86_AT(c, 0xca8f4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ca8f5  call 0xc9b10
    X86_AT(c, 0xca8f5u);
    push32(c, 0xca8fau); x86_call_known(c, 0xc9b10u, f_000c9b10); X86_RET(c, 0xca8fau);
    X86_TICK(c, 2);
    // 0ca8fa  add esp, 0x28
    X86_AT(c, 0xca8fau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
L_ca8fd:
    X86_TICK(c, 20);
    // 0ca8fd  pop edi
    X86_AT(c, 0xca8fdu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ca8fe  leave 
    X86_AT(c, 0xca8feu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ca8ff  ret 
    X86_AT(c, 0xca8ffu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xca878u, "ran off the end of a function");
}
void f_000ca900(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0ca900  cmp byte ptr [0xa4a49], 0x82
    X86_AT(c, 0xca900u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xA4A49u))), 0x82u, 0, 1);
    // 0ca907  jne 0xca927
    X86_AT(c, 0xca907u);
    if (x86_cc(c, 5)) { goto L_ca927; }
    X86_TICK(c, 12);
    // 0ca909  cmp word ptr [0x45f20], 0
    X86_AT(c, 0xca909u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x45F20u))), 0x0u, 0, 2);
    // 0ca911  je 0xca927
    X86_AT(c, 0xca911u);
    if (x86_cc(c, 4)) { goto L_ca927; }
    X86_TICK(c, 15);
    // 0ca913  mov ax, word ptr [0x45f20]
    X86_AT(c, 0xca913u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x45F20u))));
    // 0ca919  cmp ax, word ptr [esp + 4]
    X86_AT(c, 0xca919u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), rd16((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u))), 0, 2);
    // 0ca91e  jne 0xca927
    X86_AT(c, 0xca91eu);
    if (x86_cc(c, 5)) { goto L_ca927; }
    X86_TICK(c, 9);
    // 0ca920  mov eax, 0xffffffff
    X86_AT(c, 0xca920u);
    c.r[0] = 0xFFFFFFFFu;
    // 0ca925  jmp 0xca929
    X86_AT(c, 0xca925u);
    goto L_ca929;
L_ca927:
    X86_TICK(c, 2);
    // 0ca927  sub eax, eax
    X86_AT(c, 0xca927u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_ca929:
    X86_TICK(c, 10);
    // 0ca929  ret 
    X86_AT(c, 0xca929u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xca900u, "ran off the end of a function");
}
void f_000ca92c(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0ca92c  push edi
    X86_AT(c, 0xca92cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ca92d  call 0xcaa9c
    X86_AT(c, 0xca92du);
    push32(c, 0xca932u); x86_call_known(c, 0xcaa9cu, f_000caa9c); X86_RET(c, 0xca932u);
    X86_TICK(c, 9);
    // 0ca932  mov word ptr [0x9c544], 0xffff
    X86_AT(c, 0xca932u);
    wr16((c.sbase[3] + (uint32_t)(0x9C544u)), 0xFFFFu);
    // 0ca93b  call 0xb5aac
    X86_AT(c, 0xca93bu);
    push32(c, 0xca940u); x86_call_known(c, 0xb5aacu, f_000b5aac); X86_RET(c, 0xca940u);
    X86_TICK(c, 9);
    // 0ca940  push 1
    X86_AT(c, 0xca940u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ca942  call 0xba6a0
    X86_AT(c, 0xca942u);
    push32(c, 0xca947u); x86_call_known(c, 0xba6a0u, f_000ba6a0); X86_RET(c, 0xca947u);
    X86_TICK(c, 9);
    // 0ca947  push 1
    X86_AT(c, 0xca947u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ca949  call 0xbc724
    X86_AT(c, 0xca949u);
    push32(c, 0xca94eu); x86_call_known(c, 0xbc724u, f_000bc724); X86_RET(c, 0xca94eu);
    X86_TICK(c, 7);
    // 0ca94e  call 0xbd5d0
    X86_AT(c, 0xca94eu);
    push32(c, 0xca953u); x86_call_known(c, 0xbd5d0u, f_000bd5d0); X86_RET(c, 0xca953u);
    X86_TICK(c, 9);
    // 0ca953  push 0
    X86_AT(c, 0xca953u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ca955  call 0xba6b4
    X86_AT(c, 0xca955u);
    push32(c, 0xca95au); x86_call_known(c, 0xba6b4u, f_000ba6b4); X86_RET(c, 0xca95au);
    X86_TICK(c, 9);
    // 0ca95a  push 1
    X86_AT(c, 0xca95au);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ca95c  call 0xba6a0
    X86_AT(c, 0xca95cu);
    push32(c, 0xca961u); x86_call_known(c, 0xba6a0u, f_000ba6a0); X86_RET(c, 0xca961u);
    X86_TICK(c, 13);
    // 0ca961  push 0x40
    X86_AT(c, 0xca961u);
    { uint32_t v = 0x40u; push32(c, v); }
    // 0ca963  push 0x40
    X86_AT(c, 0xca963u);
    { uint32_t v = 0x40u; push32(c, v); }
    // 0ca965  push 0x72e0
    X86_AT(c, 0xca965u);
    { uint32_t v = 0x72E0u; push32(c, v); }
    // 0ca96a  call 0xbb2c4
    X86_AT(c, 0xca96au);
    push32(c, 0xca96fu); x86_call_known(c, 0xbb2c4u, f_000bb2c4); X86_RET(c, 0xca96fu);
    X86_TICK(c, 9);
    // 0ca96f  push 0
    X86_AT(c, 0xca96fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ca971  call 0xba6a0
    X86_AT(c, 0xca971u);
    push32(c, 0xca976u); x86_call_known(c, 0xba6a0u, f_000ba6a0); X86_RET(c, 0xca976u);
    X86_TICK(c, 11);
    // 0ca976  mov edi, dword ptr [0xa6134]
    X86_AT(c, 0xca976u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0xA6134u)));
    // 0ca97c  call 0xbe01c
    X86_AT(c, 0xca97cu);
    push32(c, 0xca981u); x86_call_known(c, 0xbe01cu, f_000be01c); X86_RET(c, 0xca981u);
    X86_TICK(c, 7);
    // 0ca981  call 0xbc86c
    X86_AT(c, 0xca981u);
    push32(c, 0xca986u); x86_call_known(c, 0xbc86cu, f_000bc86c); X86_RET(c, 0xca986u);
    X86_TICK(c, 7);
    // 0ca986  call 0xbfeb4
    X86_AT(c, 0xca986u);
    push32(c, 0xca98bu); x86_call_known(c, 0xbfeb4u, f_000bfeb4); X86_RET(c, 0xca98bu);
    X86_TICK(c, 7);
    // 0ca98b  call 0xc01e8
    X86_AT(c, 0xca98bu);
    push32(c, 0xca990u); x86_call_known(c, 0xc01e8u, f_000c01e8); X86_RET(c, 0xca990u);
    X86_TICK(c, 7);
    // 0ca990  call 0xc0cf4
    X86_AT(c, 0xca990u);
    push32(c, 0xca995u); x86_call_known(c, 0xc0cf4u, f_000c0cf4); X86_RET(c, 0xca995u);
    X86_TICK(c, 9);
    // 0ca995  push 0x72f0
    X86_AT(c, 0xca995u);
    { uint32_t v = 0x72F0u; push32(c, v); }
    // 0ca99a  call 0xbd018
    X86_AT(c, 0xca99au);
    push32(c, 0xca99fu); x86_call_known(c, 0xbd018u, f_000bd018); X86_RET(c, 0xca99fu);
    X86_TICK(c, 31);
    // 0ca99f  mov dword ptr [0x9c53c], 0
    X86_AT(c, 0xca99fu);
    wr32((c.sbase[3] + (uint32_t)(0x9C53Cu)), 0x0u);
    // 0ca9a9  mov dword ptr [0xa6134], edi
    X86_AT(c, 0xca9a9u);
    wr32((c.sbase[3] + (uint32_t)(0xA6134u)), c.r[7]);
    // 0ca9af  push 0
    X86_AT(c, 0xca9afu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ca9b1  push 0xe
    X86_AT(c, 0xca9b1u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0ca9b3  push 0xb
    X86_AT(c, 0xca9b3u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0ca9b5  push 4
    X86_AT(c, 0xca9b5u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ca9b7  push 0x1b
    X86_AT(c, 0xca9b7u);
    { uint32_t v = 0x1Bu; push32(c, v); }
    // 0ca9b9  push 0x20
    X86_AT(c, 0xca9b9u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0ca9bb  push 0xe0
    X86_AT(c, 0xca9bbu);
    { uint32_t v = 0xE0u; push32(c, v); }
    // 0ca9c0  push 0x14f
    X86_AT(c, 0xca9c0u);
    { uint32_t v = 0x14Fu; push32(c, v); }
    // 0ca9c5  push 0x4a
    X86_AT(c, 0xca9c5u);
    { uint32_t v = 0x4Au; push32(c, v); }
    // 0ca9c7  push 6
    X86_AT(c, 0xca9c7u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca9c9  call 0xbb5cc
    X86_AT(c, 0xca9c9u);
    push32(c, 0xca9ceu); x86_call_known(c, 0xbb5ccu, f_000bb5cc); X86_RET(c, 0xca9ceu);
    X86_TICK(c, 11);
    // 0ca9ce  add esp, 0x4c
    X86_AT(c, 0xca9ceu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4Cu, 0, 4); }
    // 0ca9d1  push 6
    X86_AT(c, 0xca9d1u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca9d3  call 0xbb6b0
    X86_AT(c, 0xca9d3u);
    push32(c, 0xca9d8u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xca9d8u);
    X86_TICK(c, 9);
    // 0ca9d8  push 6
    X86_AT(c, 0xca9d8u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca9da  call 0xbb710
    X86_AT(c, 0xca9dau);
    push32(c, 0xca9dfu); x86_call_known(c, 0xbb710u, f_000bb710); X86_RET(c, 0xca9dfu);
    X86_TICK(c, 13);
    // 0ca9df  push 2
    X86_AT(c, 0xca9dfu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ca9e1  push 4
    X86_AT(c, 0xca9e1u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ca9e3  push 6
    X86_AT(c, 0xca9e3u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca9e5  call 0xbc174
    X86_AT(c, 0xca9e5u);
    push32(c, 0xca9eau); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xca9eau);
    X86_TICK(c, 11);
    // 0ca9ea  push 0x7304
    X86_AT(c, 0xca9eau);
    { uint32_t v = 0x7304u; push32(c, v); }
    // 0ca9ef  push 6
    X86_AT(c, 0xca9efu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca9f1  call 0xba428
    X86_AT(c, 0xca9f1u);
    push32(c, 0xca9f6u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xca9f6u);
    X86_TICK(c, 9);
    // 0ca9f6  push 2
    X86_AT(c, 0xca9f6u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ca9f8  call 0xba6b4
    X86_AT(c, 0xca9f8u);
    push32(c, 0xca9fdu); x86_call_known(c, 0xba6b4u, f_000ba6b4); X86_RET(c, 0xca9fdu);
    X86_TICK(c, 7);
    // 0ca9fd  call 0xb90e8
    X86_AT(c, 0xca9fdu);
    push32(c, 0xcaa02u); x86_call_known(c, 0xb90e8u, f_000b90e8); X86_RET(c, 0xcaa02u);
    X86_TICK(c, 9);
    // 0caa02  push 7
    X86_AT(c, 0xcaa02u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0caa04  call 0xc9890
    X86_AT(c, 0xcaa04u);
    push32(c, 0xcaa09u); x86_call_known(c, 0xc9890u, f_000c9890); X86_RET(c, 0xcaa09u);
    X86_TICK(c, 11);
    // 0caa09  push 0
    X86_AT(c, 0xcaa09u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0caa0b  push 6
    X86_AT(c, 0xcaa0bu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0caa0d  call 0xbba64
    X86_AT(c, 0xcaa0du);
    push32(c, 0xcaa12u); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xcaa12u);
    X86_TICK(c, 7);
    // 0caa12  call 0xbd5d0
    X86_AT(c, 0xcaa12u);
    push32(c, 0xcaa17u); x86_call_known(c, 0xbd5d0u, f_000bd5d0); X86_RET(c, 0xcaa17u);
    X86_TICK(c, 9);
    // 0caa17  push 7
    X86_AT(c, 0xcaa17u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0caa19  call 0xbb9e4
    X86_AT(c, 0xcaa19u);
    push32(c, 0xcaa1eu); x86_call_known(c, 0xbb9e4u, f_000bb9e4); X86_RET(c, 0xcaa1eu);
    X86_TICK(c, 9);
    // 0caa1e  push 0
    X86_AT(c, 0xcaa1eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0caa20  call 0xb84e0
    X86_AT(c, 0xcaa20u);
    push32(c, 0xcaa25u); x86_call_known(c, 0xb84e0u, f_000b84e0); X86_RET(c, 0xcaa25u);
    X86_TICK(c, 7);
    // 0caa25  call 0xb62d0
    X86_AT(c, 0xcaa25u);
    push32(c, 0xcaa2au); x86_call_known(c, 0xb62d0u, f_000b62d0); X86_RET(c, 0xcaa2au);
    X86_TICK(c, 9);
    // 0caa2a  push 0
    X86_AT(c, 0xcaa2au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0caa2c  call 0xbe720
    X86_AT(c, 0xcaa2cu);
    push32(c, 0xcaa31u); x86_call_known(c, 0xbe720u, f_000be720); X86_RET(c, 0xcaa31u);
    X86_TICK(c, 9);
    // 0caa31  push 1
    X86_AT(c, 0xcaa31u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0caa33  call 0xbe720
    X86_AT(c, 0xcaa33u);
    push32(c, 0xcaa38u); x86_call_known(c, 0xbe720u, f_000be720); X86_RET(c, 0xcaa38u);
    X86_TICK(c, 11);
    // 0caa38  add esp, 0x3c
    X86_AT(c, 0xcaa38u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0caa3b  push 2
    X86_AT(c, 0xcaa3bu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0caa3d  call 0xbe720
    X86_AT(c, 0xcaa3du);
    push32(c, 0xcaa42u); x86_call_known(c, 0xbe720u, f_000be720); X86_RET(c, 0xcaa42u);
    X86_TICK(c, 9);
    // 0caa42  push 3
    X86_AT(c, 0xcaa42u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0caa44  call 0xbe720
    X86_AT(c, 0xcaa44u);
    push32(c, 0xcaa49u); x86_call_known(c, 0xbe720u, f_000be720); X86_RET(c, 0xcaa49u);
    X86_TICK(c, 9);
    // 0caa49  push 0x45664
    X86_AT(c, 0xcaa49u);
    { uint32_t v = 0x45664u; push32(c, v); }
    // 0caa4e  call 0xbd8a4
    X86_AT(c, 0xcaa4eu);
    push32(c, 0xcaa53u); x86_call_known(c, 0xbd8a4u, f_000bd8a4); X86_RET(c, 0xcaa53u);
    X86_TICK(c, 7);
    // 0caa53  call 0xb8d28
    X86_AT(c, 0xcaa53u);
    push32(c, 0xcaa58u); x86_call_known(c, 0xb8d28u, f_000b8d28); X86_RET(c, 0xcaa58u);
    X86_TICK(c, 9);
    // 0caa58  push 1
    X86_AT(c, 0xcaa58u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0caa5a  call 0xb61d4
    X86_AT(c, 0xcaa5au);
    push32(c, 0xcaa5fu); x86_call_known(c, 0xb61d4u, f_000b61d4); X86_RET(c, 0xcaa5fu);
    X86_TICK(c, 9);
    // 0caa5f  push 8
    X86_AT(c, 0xcaa5fu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0caa61  call 0xbbb5c
    X86_AT(c, 0xcaa61u);
    push32(c, 0xcaa66u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcaa66u);
    X86_TICK(c, 7);
    // 0caa66  call 0xd42e0
    X86_AT(c, 0xcaa66u);
    push32(c, 0xcaa6bu); x86_call_known(c, 0xd42e0u, f_000d42e0); X86_RET(c, 0xcaa6bu);
    X86_TICK(c, 7);
    // 0caa6b  call 0xb90e8
    X86_AT(c, 0xcaa6bu);
    push32(c, 0xcaa70u); x86_call_known(c, 0xb90e8u, f_000b90e8); X86_RET(c, 0xcaa70u);
    X86_TICK(c, 9);
    // 0caa70  push 7
    X86_AT(c, 0xcaa70u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0caa72  call 0xbb6b0
    X86_AT(c, 0xcaa72u);
    push32(c, 0xcaa77u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xcaa77u);
    X86_TICK(c, 11);
    // 0caa77  push 0x7338
    X86_AT(c, 0xcaa77u);
    { uint32_t v = 0x7338u; push32(c, v); }
    // 0caa7c  push 7
    X86_AT(c, 0xcaa7cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0caa7e  call 0xba428
    X86_AT(c, 0xcaa7eu);
    push32(c, 0xcaa83u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcaa83u);
    X86_TICK(c, 11);
    // 0caa83  add esp, 0x20
    X86_AT(c, 0xcaa83u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0caa86  push 7
    X86_AT(c, 0xcaa86u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0caa88  call 0xbbb5c
    X86_AT(c, 0xcaa88u);
    push32(c, 0xcaa8du); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcaa8du);
    X86_TICK(c, 18);
    // 0caa8d  mov word ptr [0xa492c], 0
    X86_AT(c, 0xcaa8du);
    wr16((c.sbase[3] + (uint32_t)(0xA492Cu)), 0x0u);
    // 0caa96  add esp, 4
    X86_AT(c, 0xcaa96u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0caa99  pop edi
    X86_AT(c, 0xcaa99u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0caa9a  ret 
    X86_AT(c, 0xcaa9au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xca92cu, "ran off the end of a function");
}
void f_000caa9c(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0caa9c  call 0xb88a0
    X86_AT(c, 0xcaa9cu);
    push32(c, 0xcaaa1u); x86_call_known(c, 0xb88a0u, f_000b88a0); X86_RET(c, 0xcaaa1u);
    X86_TICK(c, 7);
    // 0caaa1  call 0xb8920
    X86_AT(c, 0xcaaa1u);
    push32(c, 0xcaaa6u); x86_call_known(c, 0xb8920u, f_000b8920); X86_RET(c, 0xcaaa6u);
    X86_TICK(c, 7);
    // 0caaa6  call 0xb88a0
    X86_AT(c, 0xcaaa6u);
    push32(c, 0xcaaabu); x86_call_known(c, 0xb88a0u, f_000b88a0); X86_RET(c, 0xcaaabu);
    X86_TICK(c, 7);
    // 0caaab  call 0xb8920
    X86_AT(c, 0xcaaabu);
    push32(c, 0xcaab0u); x86_call_known(c, 0xb8920u, f_000b8920); X86_RET(c, 0xcaab0u);
    X86_TICK(c, 10);
    // 0caab0  ret 
    X86_AT(c, 0xcaab0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcaa9cu, "ran off the end of a function");
}
void f_000caab4(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0caab4  push ebp
    X86_AT(c, 0xcaab4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0caab5  mov ebp, esp
    X86_AT(c, 0xcaab5u);
    c.r[5] = c.r[4];
    // 0caab7  push eax
    X86_AT(c, 0xcaab7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0caab8  push ebx
    X86_AT(c, 0xcaab8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0caab9  push esi
    X86_AT(c, 0xcaab9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0caaba  push edi
    X86_AT(c, 0xcaabau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0caabb  cmp dword ptr [0xa4a56], 0
    X86_AT(c, 0xcaabbu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x0u, 0, 4);
    // 0caac2  jne 0xcac08
    X86_AT(c, 0xcaac2u);
    if (x86_cc(c, 5)) { goto L_cac08; }
    X86_TICK(c, 12);
    // 0caac8  cmp word ptr [0x9c538], 0
    X86_AT(c, 0xcaac8u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x9C538u))), 0x0u, 0, 2);
    // 0caad0  jne 0xcac08
    X86_AT(c, 0xcaad0u);
    if (x86_cc(c, 5)) { goto L_cac08; }
    X86_TICK(c, 9);
    // 0caad6  push 7
    X86_AT(c, 0xcaad6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0caad8  call 0xb61b4
    X86_AT(c, 0xcaad8u);
    push32(c, 0xcaaddu); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xcaaddu);
    X86_TICK(c, 9);
    // 0caadd  add esp, 4
    X86_AT(c, 0xcaaddu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0caae0  cmp eax, 2
    X86_AT(c, 0xcaae0u);
    (void)x86_sub(c, c.r[0], 0x2u, 0, 4);
    // 0caae3  jge 0xcab0b
    X86_AT(c, 0xcaae3u);
    if (x86_cc(c, 13)) { goto L_cab0b; }
L_caae5:
    X86_TICK(c, 9);
    // 0caae5  push 7
    X86_AT(c, 0xcaae5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0caae7  call 0xb61b4
    X86_AT(c, 0xcaae7u);
    push32(c, 0xcaaecu); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xcaaecu);
    X86_TICK(c, 16);
    // 0caaec  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xcaaecu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0caaef  mov edx, dword ptr [eax*4 + 0xaef94]
    X86_AT(c, 0xcaaefu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xAEF94u)));
    // 0caaf6  mov dword ptr [0xa6050], edx
    X86_AT(c, 0xcaaf6u);
    wr32((c.sbase[3] + (uint32_t)(0xA6050u)), c.r[2]);
    // 0caafc  mov eax, dword ptr [eax*4 + 0xaefb8]
    X86_AT(c, 0xcaafcu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xAEFB8u)));
    // 0cab03  mov dword ptr [0xa6054], eax
    X86_AT(c, 0xcab03u);
    wr32((c.sbase[3] + (uint32_t)(0xA6054u)), c.r[0]);
    // 0cab08  add esp, 4
    X86_AT(c, 0xcab08u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_cab0b:
    X86_TICK(c, 35);
    // 0cab0b  mov edi, dword ptr [0xa6048]
    X86_AT(c, 0xcab0bu);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0xA6048u)));
    // 0cab11  add edi, dword ptr [0xa6050]
    X86_AT(c, 0xcab11u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xA6050u))), 0, 4); }
    // 0cab17  and edi, 0x3f
    X86_AT(c, 0xcab17u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & 0x3Fu, 4); }
    // 0cab1d  mov esi, dword ptr [0xa604c]
    X86_AT(c, 0xcab1du);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xA604Cu)));
    // 0cab23  add esi, dword ptr [0xa6054]
    X86_AT(c, 0xcab23u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xA6054u))), 0, 4); }
    // 0cab29  and esi, 0x3f
    X86_AT(c, 0xcab29u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0x3Fu, 4); }
    // 0cab2f  push esi
    X86_AT(c, 0xcab2fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cab30  push edi
    X86_AT(c, 0xcab30u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cab31  call 0xc8474
    X86_AT(c, 0xcab31u);
    push32(c, 0xcab36u); x86_call_known(c, 0xc8474u, f_000c8474); X86_RET(c, 0xcab36u);
    X86_TICK(c, 12);
    // 0cab36  xchg ebx, eax
    X86_AT(c, 0xcab36u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0cab37  add esp, 8
    X86_AT(c, 0xcab37u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cab3a  cmp bl, 0x9d
    X86_AT(c, 0xcab3au);
    (void)x86_sub(c, g8(c, 3), 0x9Du, 0, 1);
    // 0cab3d  je 0xcaae5
    X86_AT(c, 0xcab3du);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xcaae5u); goto L_caae5; }
    X86_TICK(c, 7);
    // 0cab3f  cmp bl, 1
    X86_AT(c, 0xcab3fu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0cab42  je 0xcab49
    X86_AT(c, 0xcab42u);
    if (x86_cc(c, 4)) { goto L_cab49; }
    X86_TICK(c, 7);
    // 0cab44  cmp bl, 0x82
    X86_AT(c, 0xcab44u);
    (void)x86_sub(c, g8(c, 3), 0x82u, 0, 1);
    // 0cab47  jne 0xcaae5
    X86_AT(c, 0xcab47u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xcaae5u); goto L_caae5; }
L_cab49:
    X86_TICK(c, 21);
    // 0cab49  mov dword ptr [0xa6048], edi
    X86_AT(c, 0xcab49u);
    wr32((c.sbase[3] + (uint32_t)(0xA6048u)), c.r[7]);
    // 0cab4f  mov dword ptr [0xa604c], esi
    X86_AT(c, 0xcab4fu);
    wr32((c.sbase[3] + (uint32_t)(0xA604Cu)), c.r[6]);
    // 0cab55  push dword ptr [0xa4a7a]
    X86_AT(c, 0xcab55u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))); push32(c, v); }
    // 0cab5b  push dword ptr [0xa4a76]
    X86_AT(c, 0xcab5bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A76u))); push32(c, v); }
    // 0cab61  call 0xb7aa0
    X86_AT(c, 0xcab61u);
    push32(c, 0xcab66u); x86_call_known(c, 0xb7aa0u, f_000b7aa0); X86_RET(c, 0xcab66u);
    X86_TICK(c, 19);
    // 0cab66  push 2
    X86_AT(c, 0xcab66u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cab68  push dword ptr [0xa4a7a]
    X86_AT(c, 0xcab68u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))); push32(c, v); }
    // 0cab6e  push dword ptr [0xa4a76]
    X86_AT(c, 0xcab6eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A76u))); push32(c, v); }
    // 0cab74  call 0xbd068
    X86_AT(c, 0xcab74u);
    push32(c, 0xcab79u); x86_call_known(c, 0xbd068u, f_000bd068); X86_RET(c, 0xcab79u);
    X86_TICK(c, 13);
    // 0cab79  add esp, 0x14
    X86_AT(c, 0xcab79u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0cab7c  cmp edi, dword ptr [0xa4a76]
    X86_AT(c, 0xcab7cu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0xA4A76u))), 0, 4);
    // 0cab82  jne 0xcabad
    X86_AT(c, 0xcab82u);
    if (x86_cc(c, 5)) { goto L_cabad; }
    X86_TICK(c, 11);
    // 0cab84  cmp esi, dword ptr [0xa4a7a]
    X86_AT(c, 0xcab84u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))), 0, 4);
    // 0cab8a  jne 0xcabad
    X86_AT(c, 0xcab8au);
    if (x86_cc(c, 5)) { goto L_cabad; }
    X86_TICK(c, 11);
    // 0cab8c  push esi
    X86_AT(c, 0xcab8cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cab8d  push edi
    X86_AT(c, 0xcab8du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cab8e  call 0xc735c
    X86_AT(c, 0xcab8eu);
    push32(c, 0xcab93u); x86_call_known(c, 0xc735cu, f_000c735c); X86_RET(c, 0xcab93u);
    X86_TICK(c, 12);
    // 0cab93  xchg ebx, eax
    X86_AT(c, 0xcab93u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0cab94  add esp, 8
    X86_AT(c, 0xcab94u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cab97  cmp bl, 0x82
    X86_AT(c, 0xcab97u);
    (void)x86_sub(c, g8(c, 3), 0x82u, 0, 1);
    // 0cab9a  jne 0xcaba6
    X86_AT(c, 0xcab9au);
    if (x86_cc(c, 5)) { goto L_caba6; }
    X86_TICK(c, 5);
    // 0cab9c  movzx ebx, bl
    X86_AT(c, 0xcab9cu);
    c.r[3] = g8(c, 3);
    // 0cab9f  mov byte ptr [ebx + 0xa5ce8], 0
    X86_AT(c, 0xcab9fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xA5CE8u)), 0x0u);
L_caba6:
    X86_TICK(c, 7);
    // 0caba6  call 0xd381c
    X86_AT(c, 0xcaba6u);
    push32(c, 0xcababu); x86_call_known(c, 0xd381cu, f_000d381c); X86_RET(c, 0xcababu);
    X86_TICK(c, 7);
    // 0cabab  jmp 0xcac08
    X86_AT(c, 0xcababu);
    goto L_cac08;
L_cabad:
    X86_TICK(c, 7);
    // 0cabad  cmp bl, 0x82
    X86_AT(c, 0xcabadu);
    (void)x86_sub(c, g8(c, 3), 0x82u, 0, 1);
    // 0cabb0  jne 0xcac08
    X86_AT(c, 0xcabb0u);
    if (x86_cc(c, 5)) { goto L_cac08; }
    X86_TICK(c, 11);
    // 0cabb2  push esi
    X86_AT(c, 0xcabb2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cabb3  push edi
    X86_AT(c, 0xcabb3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cabb4  call 0xc735c
    X86_AT(c, 0xcabb4u);
    push32(c, 0xcabb9u); x86_call_known(c, 0xc735cu, f_000c735c); X86_RET(c, 0xcabb9u);
    X86_TICK(c, 11);
    // 0cabb9  mov byte ptr [eax + 0xa5ce8], 0
    X86_AT(c, 0xcabb9u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xA5CE8u)), 0x0u);
    // 0cabc0  push 0xb
    X86_AT(c, 0xcabc0u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0cabc2  call 0xb607c
    X86_AT(c, 0xcabc2u);
    push32(c, 0xcabc7u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xcabc7u);
    X86_TICK(c, 17);
    // 0cabc7  push dword ptr [0xa4a7a]
    X86_AT(c, 0xcabc7u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))); push32(c, v); }
    // 0cabcd  push dword ptr [0xa4a76]
    X86_AT(c, 0xcabcdu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A76u))); push32(c, v); }
    // 0cabd3  call 0xb7aa0
    X86_AT(c, 0xcabd3u);
    push32(c, 0xcabd8u); x86_call_known(c, 0xb7aa0u, f_000b7aa0); X86_RET(c, 0xcabd8u);
    X86_TICK(c, 19);
    // 0cabd8  push 2
    X86_AT(c, 0xcabd8u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cabda  push dword ptr [0xa4a7a]
    X86_AT(c, 0xcabdau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))); push32(c, v); }
    // 0cabe0  push dword ptr [0xa4a76]
    X86_AT(c, 0xcabe0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A76u))); push32(c, v); }
    // 0cabe6  call 0xbd068
    X86_AT(c, 0xcabe6u);
    push32(c, 0xcabebu); x86_call_known(c, 0xbd068u, f_000bd068); X86_RET(c, 0xcabebu);
    X86_TICK(c, 9);
    // 0cabeb  push 5
    X86_AT(c, 0xcabebu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0cabed  call 0xbebbc
    X86_AT(c, 0xcabedu);
    push32(c, 0xcabf2u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xcabf2u);
    X86_TICK(c, 11);
    // 0cabf2  push 0x7380
    X86_AT(c, 0xcabf2u);
    { uint32_t v = 0x7380u; push32(c, v); }
    // 0cabf7  push 7
    X86_AT(c, 0xcabf7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cabf9  call 0xba428
    X86_AT(c, 0xcabf9u);
    push32(c, 0xcabfeu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcabfeu);
    X86_TICK(c, 9);
    // 0cabfe  push 7
    X86_AT(c, 0xcabfeu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cac00  call 0xbbb5c
    X86_AT(c, 0xcac00u);
    push32(c, 0xcac05u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcac05u);
    X86_TICK(c, 2);
    // 0cac05  add esp, 0x30
    X86_AT(c, 0xcac05u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
L_cac08:
    X86_TICK(c, 28);
    // 0cac08  pop edi
    X86_AT(c, 0xcac08u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cac09  pop esi
    X86_AT(c, 0xcac09u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cac0a  pop ebx
    X86_AT(c, 0xcac0au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cac0b  leave 
    X86_AT(c, 0xcac0bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cac0c  ret 
    X86_AT(c, 0xcac0cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcaab4u, "ran off the end of a function");
}
void f_000cac10(X86Cpu& c) {
    X86_TICK(c, 8);
    // 0cac10  mov edx, dword ptr [esp + 4]
    X86_AT(c, 0xcac10u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0cac14  mov ecx, dword ptr [esp + 8]
    X86_AT(c, 0xcac14u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
L_cac18:
    X86_TICK(c, 12);
    // 0cac18  cmp byte ptr [edx], 0x20
    X86_AT(c, 0xcac18u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2]))), 0x20u, 0, 1);
    // 0cac1b  jne 0xcac20
    X86_AT(c, 0xcac1bu);
    if (x86_cc(c, 5)) { goto L_cac20; }
    X86_TICK(c, 9);
    // 0cac1d  inc edx
    X86_AT(c, 0xcac1du);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0cac1e  jmp 0xcac18
    X86_AT(c, 0xcac1eu);
    X86_POLL(c, 0xcac18u); goto L_cac18;
L_cac20:
    X86_TICK(c, 11);
    // 0cac20  mov al, byte ptr [edx]
    X86_AT(c, 0xcac20u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2]))));
    // 0cac22  cmp al, 0x20
    X86_AT(c, 0xcac22u);
    (void)x86_sub(c, g8(c, 0), 0x20u, 0, 1);
    // 0cac24  je 0xcac2a
    X86_AT(c, 0xcac24u);
    if (x86_cc(c, 4)) { goto L_cac2a; }
    X86_TICK(c, 7);
    // 0cac26  and al, al
    X86_AT(c, 0xcac26u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0cac28  jne 0xcac38
    X86_AT(c, 0xcac28u);
    if (x86_cc(c, 5)) { goto L_cac38; }
L_cac2a:
    X86_TICK(c, 11);
    // 0cac2a  mov al, byte ptr [ecx]
    X86_AT(c, 0xcac2au);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[1]))));
    // 0cac2c  cmp al, 0x20
    X86_AT(c, 0xcac2cu);
    (void)x86_sub(c, g8(c, 0), 0x20u, 0, 1);
    // 0cac2e  je 0xcac34
    X86_AT(c, 0xcac2eu);
    if (x86_cc(c, 4)) { goto L_cac34; }
    X86_TICK(c, 7);
    // 0cac30  and al, al
    X86_AT(c, 0xcac30u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0cac32  jne 0xcac3e
    X86_AT(c, 0xcac32u);
    if (x86_cc(c, 5)) { goto L_cac3e; }
L_cac34:
    X86_TICK(c, 9);
    // 0cac34  sub eax, eax
    X86_AT(c, 0xcac34u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0cac36  jmp 0xcac49
    X86_AT(c, 0xcac36u);
    goto L_cac49;
L_cac38:
    X86_TICK(c, 15);
    // 0cac38  mov al, byte ptr [edx]
    X86_AT(c, 0xcac38u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2]))));
    // 0cac3a  cmp al, byte ptr [ecx]
    X86_AT(c, 0xcac3au);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(c.r[1]))), 0, 1);
    // 0cac3c  je 0xcac45
    X86_AT(c, 0xcac3cu);
    if (x86_cc(c, 4)) { goto L_cac45; }
L_cac3e:
    X86_TICK(c, 9);
    // 0cac3e  mov eax, 0xffffffff
    X86_AT(c, 0xcac3eu);
    c.r[0] = 0xFFFFFFFFu;
    // 0cac43  jmp 0xcac49
    X86_AT(c, 0xcac43u);
    goto L_cac49;
L_cac45:
    X86_TICK(c, 11);
    // 0cac45  inc edx
    X86_AT(c, 0xcac45u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0cac46  inc ecx
    X86_AT(c, 0xcac46u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0cac47  jmp 0xcac20
    X86_AT(c, 0xcac47u);
    X86_POLL(c, 0xcac20u); goto L_cac20;
L_cac49:
    X86_TICK(c, 10);
    // 0cac49  ret 
    X86_AT(c, 0xcac49u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcac10u, "ran off the end of a function");
}
void f_000cac4c(X86Cpu& c) {
    X86_TICK(c, 38);
    // 0cac4c  push ebp
    X86_AT(c, 0xcac4cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cac4d  mov ebp, esp
    X86_AT(c, 0xcac4du);
    c.r[5] = c.r[4];
    // 0cac4f  push ebx
    X86_AT(c, 0xcac4fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cac50  push esi
    X86_AT(c, 0xcac50u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cac51  push edi
    X86_AT(c, 0xcac51u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cac52  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xcac52u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cac55  lea eax, [edi + edi*2]
    X86_AT(c, 0xcac55u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0cac58  lea edx, [eax*8]
    X86_AT(c, 0xcac58u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0cac5f  lea edx, [eax + edx*8]
    X86_AT(c, 0xcac5fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0cac62  movzx eax, byte ptr [edx + 0xa4ace]
    X86_AT(c, 0xcac62u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ACEu)));
    // 0cac69  xchg edx, eax
    X86_AT(c, 0xcac69u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0cac6a  sub edx, 0x42
    X86_AT(c, 0xcac6au);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x42u, 0, 4); }
    // 0cac6d  cmp edx, 6
    X86_AT(c, 0xcac6du);
    (void)x86_sub(c, c.r[2], 0x6u, 0, 4);
    // 0cac70  ja 0xcacdf
    X86_AT(c, 0xcac70u);
    if (x86_cc(c, 7)) { goto L_cacdf; }
    X86_TICK(c, 7);
    // 0cac72  jmp dword ptr cs:[edx*4 + 0xcac7a]
    X86_AT(c, 0xcac72u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xCAC7Au)));
      switch (t) {
      case 0xcac96u: goto L_cac96;
      case 0xcacafu: goto L_cacaf;
      case 0xcacc8u: goto L_cacc8;
      case 0xcacdfu: goto L_cacdf;
      default: x86_jump(c, t); return; } }
L_cac96:
    X86_TICK(c, 15);
    // 0cac96  lea eax, [edi + edi*2]
    X86_AT(c, 0xcac96u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0cac99  lea edx, [eax*8]
    X86_AT(c, 0xcac99u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0caca0  lea edx, [eax + edx*8]
    X86_AT(c, 0xcaca0u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0caca3  mov dword ptr [edx + 0xa4ad5], 0x63
    X86_AT(c, 0xcaca3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD5u)), 0x63u);
    // 0cacad  jmp 0xcacdf
    X86_AT(c, 0xcacadu);
    goto L_cacdf;
L_cacaf:
    X86_TICK(c, 15);
    // 0cacaf  lea eax, [edi + edi*2]
    X86_AT(c, 0xcacafu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0cacb2  lea edx, [eax*8]
    X86_AT(c, 0xcacb2u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0cacb9  lea edx, [eax + edx*8]
    X86_AT(c, 0xcacb9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0cacbc  mov dword ptr [edx + 0xa4ad5], 0x4b
    X86_AT(c, 0xcacbcu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD5u)), 0x4Bu);
    // 0cacc6  jmp 0xcacdf
    X86_AT(c, 0xcacc6u);
    goto L_cacdf;
L_cacc8:
    X86_TICK(c, 8);
    // 0cacc8  lea eax, [edi + edi*2]
    X86_AT(c, 0xcacc8u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0caccb  lea edx, [eax*8]
    X86_AT(c, 0xcaccbu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0cacd2  lea edx, [eax + edx*8]
    X86_AT(c, 0xcacd2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0cacd5  mov dword ptr [edx + 0xa4ad5], 0x19
    X86_AT(c, 0xcacd5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD5u)), 0x19u);
L_cacdf:
    X86_TICK(c, 24);
    // 0cacdf  lea eax, [edi + edi*2]
    X86_AT(c, 0xcacdfu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0cace2  lea edx, [eax*8]
    X86_AT(c, 0xcace2u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0cace9  lea edx, [eax + edx*8]
    X86_AT(c, 0xcace9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0cacec  movzx eax, byte ptr [edx + 0xa4acf]
    X86_AT(c, 0xcacecu);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ACFu)));
    // 0cacf3  xchg edx, eax
    X86_AT(c, 0xcacf3u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0cacf4  sub edx, 0x41
    X86_AT(c, 0xcacf4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x41u, 0, 4); }
    // 0cacf7  cmp edx, 0x16
    X86_AT(c, 0xcacf7u);
    (void)x86_sub(c, c.r[2], 0x16u, 0, 4);
    // 0cacfa  ja 0xcae7d
    X86_AT(c, 0xcacfau);
    if (x86_cc(c, 7)) { goto L_cae7d; }
    X86_TICK(c, 7);
    // 0cad00  jmp dword ptr cs:[edx*4 + 0xcad08]
    X86_AT(c, 0xcad00u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xCAD08u)));
      switch (t) {
      case 0xcad64u: goto L_cad64;
      case 0xcad73u: goto L_cad73;
      case 0xcad77u: goto L_cad77;
      case 0xcad99u: goto L_cad99;
      case 0xcadb5u: goto L_cadb5;
      case 0xcadb9u: goto L_cadb9;
      case 0xcae03u: goto L_cae03;
      case 0xcae1du: goto L_cae1d;
      case 0xcae7du: goto L_cae7d;
      default: x86_jump(c, t); return; } }
L_cad64:
    X86_TICK(c, 13);
    // 0cad64  lea eax, [edi + edi*2]
    X86_AT(c, 0xcad64u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0cad67  lea edx, [eax*8]
    X86_AT(c, 0xcad67u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0cad6e  lea edx, [eax + edx*8]
    X86_AT(c, 0xcad6eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0cad71  jmp 0xcada6
    X86_AT(c, 0xcad71u);
    goto L_cada6;
L_cad73:
    X86_TICK(c, 9);
    // 0cad73  push 3
    X86_AT(c, 0xcad73u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0cad75  jmp 0xcad79
    X86_AT(c, 0xcad75u);
    goto L_cad79;
L_cad77:
    X86_TICK(c, 2);
    // 0cad77  push 2
    X86_AT(c, 0xcad77u);
    { uint32_t v = 0x2u; push32(c, v); }
L_cad79:
    X86_TICK(c, 21);
    // 0cad79  lea eax, [edi + edi*2]
    X86_AT(c, 0xcad79u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0cad7c  lea edx, [eax*8]
    X86_AT(c, 0xcad7cu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0cad83  lea edx, [eax + edx*8]
    X86_AT(c, 0xcad83u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0cad86  mov al, byte ptr [edx + 0xa4ace]
    X86_AT(c, 0xcad86u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ACEu))));
    // 0cad8c  push eax
    X86_AT(c, 0xcad8cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cad8d  mov ebx, edx
    X86_AT(c, 0xcad8du);
    c.r[3] = c.r[2];
    // 0cad8f  call 0xc9820
    X86_AT(c, 0xcad8fu);
    push32(c, 0xcad94u); x86_call_known(c, 0xc9820u, f_000c9820); X86_RET(c, 0xcad94u);
    X86_TICK(c, 7);
    // 0cad94  jmp 0xcae74
    X86_AT(c, 0xcad94u);
    goto L_cae74;
L_cad99:
    X86_TICK(c, 11);
    // 0cad99  mov eax, edi
    X86_AT(c, 0xcad99u);
    c.r[0] = c.r[7];
    // 0cad9b  lea edx, [eax + eax*2]
    X86_AT(c, 0xcad9bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cad9e  shl edx, 5
    X86_AT(c, 0xcad9eu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0cada1  add edx, eax
    X86_AT(c, 0xcada1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cada3  lea edx, [eax + edx*2]
    X86_AT(c, 0xcada3u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
L_cada6:
    X86_TICK(c, 9);
    // 0cada6  mov dword ptr [edx + 0xa4ad1], 0
    X86_AT(c, 0xcada6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD1u)), 0x0u);
    // 0cadb0  jmp 0xcae7d
    X86_AT(c, 0xcadb0u);
    goto L_cae7d;
L_cadb5:
    X86_TICK(c, 9);
    // 0cadb5  push 3
    X86_AT(c, 0xcadb5u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0cadb7  jmp 0xcae05
    X86_AT(c, 0xcadb7u);
    goto L_cae05;
L_cadb9:
    X86_TICK(c, 28);
    // 0cadb9  push 3
    X86_AT(c, 0xcadb9u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0cadbb  mov eax, edi
    X86_AT(c, 0xcadbbu);
    c.r[0] = c.r[7];
    // 0cadbd  lea edx, [eax + eax*2]
    X86_AT(c, 0xcadbdu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cadc0  shl edx, 5
    X86_AT(c, 0xcadc0u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0cadc3  add edx, eax
    X86_AT(c, 0xcadc3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cadc5  lea edx, [eax + edx*2]
    X86_AT(c, 0xcadc5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0cadc8  mov al, byte ptr [edx + 0xa4ace]
    X86_AT(c, 0xcadc8u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ACEu))));
    // 0cadce  push eax
    X86_AT(c, 0xcadceu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cadcf  mov ebx, edx
    X86_AT(c, 0xcadcfu);
    c.r[3] = c.r[2];
    // 0cadd1  call 0xc9820
    X86_AT(c, 0xcadd1u);
    push32(c, 0xcadd6u); x86_call_known(c, 0xc9820u, f_000c9820); X86_RET(c, 0xcadd6u);
    X86_TICK(c, 26);
    // 0cadd6  cdq 
    X86_AT(c, 0xcadd6u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0cadd7  sub eax, edx
    X86_AT(c, 0xcadd7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0cadd9  sar eax, 1
    X86_AT(c, 0xcadd9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0caddb  mov dword ptr [ebx + 0xa4ad1], eax
    X86_AT(c, 0xcaddbu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0xA4AD1u)), c.r[0]);
    // 0cade1  push 2
    X86_AT(c, 0xcade1u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cade3  mov dl, byte ptr [ebx + 0xa4ace]
    X86_AT(c, 0xcade3u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xA4ACEu))));
    // 0cade9  push edx
    X86_AT(c, 0xcade9u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0cadea  mov esi, eax
    X86_AT(c, 0xcadeau);
    c.r[6] = c.r[0];
    // 0cadec  call 0xc9820
    X86_AT(c, 0xcadecu);
    push32(c, 0xcadf1u); x86_call_known(c, 0xc9820u, f_000c9820); X86_RET(c, 0xcadf1u);
    X86_TICK(c, 16);
    // 0cadf1  add esp, 0x10
    X86_AT(c, 0xcadf1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0cadf4  cdq 
    X86_AT(c, 0xcadf4u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0cadf5  sub eax, edx
    X86_AT(c, 0xcadf5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0cadf7  sar eax, 1
    X86_AT(c, 0xcadf7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0cadf9  cmp eax, esi
    X86_AT(c, 0xcadf9u);
    (void)x86_sub(c, c.r[0], c.r[6], 0, 4);
    // 0cadfb  jle 0xcae7d
    X86_AT(c, 0xcadfbu);
    if (x86_cc(c, 14)) { goto L_cae7d; }
    X86_TICK(c, 7);
    // 0cae01  jmp 0xcae61
    X86_AT(c, 0xcae01u);
    goto L_cae61;
L_cae03:
    X86_TICK(c, 2);
    // 0cae03  push 2
    X86_AT(c, 0xcae03u);
    { uint32_t v = 0x2u; push32(c, v); }
L_cae05:
    X86_TICK(c, 26);
    // 0cae05  mov eax, edi
    X86_AT(c, 0xcae05u);
    c.r[0] = c.r[7];
    // 0cae07  lea edx, [eax + eax*2]
    X86_AT(c, 0xcae07u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cae0a  shl edx, 5
    X86_AT(c, 0xcae0au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0cae0d  add edx, eax
    X86_AT(c, 0xcae0du);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cae0f  lea edx, [eax + edx*2]
    X86_AT(c, 0xcae0fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0cae12  mov al, byte ptr [edx + 0xa4ace]
    X86_AT(c, 0xcae12u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ACEu))));
    // 0cae18  push eax
    X86_AT(c, 0xcae18u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cae19  mov ebx, edx
    X86_AT(c, 0xcae19u);
    c.r[3] = c.r[2];
    // 0cae1b  jmp 0xcae6a
    X86_AT(c, 0xcae1bu);
    goto L_cae6a;
L_cae1d:
    X86_TICK(c, 28);
    // 0cae1d  push 3
    X86_AT(c, 0xcae1du);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0cae1f  mov eax, edi
    X86_AT(c, 0xcae1fu);
    c.r[0] = c.r[7];
    // 0cae21  lea edx, [eax + eax*2]
    X86_AT(c, 0xcae21u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cae24  shl edx, 5
    X86_AT(c, 0xcae24u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0cae27  add edx, eax
    X86_AT(c, 0xcae27u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cae29  lea edx, [eax + edx*2]
    X86_AT(c, 0xcae29u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0cae2c  mov al, byte ptr [edx + 0xa4ace]
    X86_AT(c, 0xcae2cu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ACEu))));
    // 0cae32  push eax
    X86_AT(c, 0xcae32u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cae33  mov ebx, edx
    X86_AT(c, 0xcae33u);
    c.r[3] = c.r[2];
    // 0cae35  call 0xc9820
    X86_AT(c, 0xcae35u);
    push32(c, 0xcae3au); x86_call_known(c, 0xc9820u, f_000c9820); X86_RET(c, 0xcae3au);
    X86_TICK(c, 26);
    // 0cae3a  cdq 
    X86_AT(c, 0xcae3au);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0cae3b  sub eax, edx
    X86_AT(c, 0xcae3bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0cae3d  sar eax, 1
    X86_AT(c, 0xcae3du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0cae3f  mov dword ptr [ebx + 0xa4ad1], eax
    X86_AT(c, 0xcae3fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0xA4AD1u)), c.r[0]);
    // 0cae45  push 2
    X86_AT(c, 0xcae45u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cae47  mov dl, byte ptr [ebx + 0xa4ace]
    X86_AT(c, 0xcae47u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xA4ACEu))));
    // 0cae4d  push edx
    X86_AT(c, 0xcae4du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0cae4e  mov esi, eax
    X86_AT(c, 0xcae4eu);
    c.r[6] = c.r[0];
    // 0cae50  call 0xc9820
    X86_AT(c, 0xcae50u);
    push32(c, 0xcae55u); x86_call_known(c, 0xc9820u, f_000c9820); X86_RET(c, 0xcae55u);
    X86_TICK(c, 16);
    // 0cae55  add esp, 0x10
    X86_AT(c, 0xcae55u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0cae58  cdq 
    X86_AT(c, 0xcae58u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0cae59  sub eax, edx
    X86_AT(c, 0xcae59u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0cae5b  sar eax, 1
    X86_AT(c, 0xcae5bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0cae5d  cmp eax, esi
    X86_AT(c, 0xcae5du);
    (void)x86_sub(c, c.r[0], c.r[6], 0, 4);
    // 0cae5f  jge 0xcae7d
    X86_AT(c, 0xcae5fu);
    if (x86_cc(c, 13)) { goto L_cae7d; }
L_cae61:
    X86_TICK(c, 8);
    // 0cae61  push 2
    X86_AT(c, 0xcae61u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cae63  mov al, byte ptr [ebx + 0xa4ace]
    X86_AT(c, 0xcae63u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xA4ACEu))));
    // 0cae69  push eax
    X86_AT(c, 0xcae69u);
    { uint32_t v = c.r[0]; push32(c, v); }
L_cae6a:
    X86_TICK(c, 7);
    // 0cae6a  call 0xc9820
    X86_AT(c, 0xcae6au);
    push32(c, 0xcae6fu); x86_call_known(c, 0xc9820u, f_000c9820); X86_RET(c, 0xcae6fu);
    X86_TICK(c, 7);
    // 0cae6f  cdq 
    X86_AT(c, 0xcae6fu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0cae70  sub eax, edx
    X86_AT(c, 0xcae70u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0cae72  sar eax, 1
    X86_AT(c, 0xcae72u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
L_cae74:
    X86_TICK(c, 4);
    // 0cae74  mov dword ptr [ebx + 0xa4ad1], eax
    X86_AT(c, 0xcae74u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0xA4AD1u)), c.r[0]);
    // 0cae7a  add esp, 8
    X86_AT(c, 0xcae7au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_cae7d:
    X86_TICK(c, 11);
    // 0cae7d  mov eax, dword ptr [0xa6134]
    X86_AT(c, 0xcae7du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA6134u)));
    // 0cae82  and eax, eax
    X86_AT(c, 0xcae82u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cae84  je 0xcaef0
    X86_AT(c, 0xcae84u);
    if (x86_cc(c, 4)) { goto L_caef0; }
    X86_TICK(c, 34);
    // 0cae86  mov edx, edi
    X86_AT(c, 0xcae86u);
    c.r[2] = c.r[7];
    // 0cae88  lea ecx, [edx + edx*2]
    X86_AT(c, 0xcae88u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0cae8b  shl ecx, 5
    X86_AT(c, 0xcae8bu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[1] = r; }
    // 0cae8e  add ecx, edx
    X86_AT(c, 0xcae8eu);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[2], 0, 4); }
    // 0cae90  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xcae90u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0cae93  mov byte ptr [ecx + 0xa4abd], 0x47
    X86_AT(c, 0xcae93u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0xA4ABDu)), 0x47u);
    // 0cae9a  mov dword ptr [ecx + 0xa4ae5], 0xf41dc
    X86_AT(c, 0xcae9au);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xA4AE5u)), 0xF41DCu);
    // 0caea4  mov edx, 0x63
    X86_AT(c, 0xcaea4u);
    c.r[2] = 0x63u;
    // 0caea9  mov dword ptr [ecx + 0xa4ab5], edx
    X86_AT(c, 0xcaea9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xA4AB5u)), c.r[2]);
    // 0caeaf  mov dword ptr [ecx + 0xa4af1], edx
    X86_AT(c, 0xcaeafu);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xA4AF1u)), c.r[2]);
    // 0caeb5  mov dword ptr [ecx + 0xa4af5], edx
    X86_AT(c, 0xcaeb5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xA4AF5u)), c.r[2]);
    // 0caebb  mov esi, 0x270f
    X86_AT(c, 0xcaebbu);
    c.r[6] = 0x270Fu;
    // 0caec0  mov dword ptr [ecx + 0xa4ae9], esi
    X86_AT(c, 0xcaec0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xA4AE9u)), c.r[6]);
    // 0caec6  cmp eax, 4
    X86_AT(c, 0xcaec6u);
    (void)x86_sub(c, c.r[0], 0x4u, 0, 4);
    // 0caec9  je 0xcaef0
    X86_AT(c, 0xcaec9u);
    if (x86_cc(c, 4)) { goto L_caef0; }
    X86_TICK(c, 17);
    // 0caecb  mov dword ptr [ecx + 0xa4aed], edx
    X86_AT(c, 0xcaecbu);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xA4AEDu)), c.r[2]);
    // 0caed1  mov dword ptr [ecx + 0xa4ad1], edx
    X86_AT(c, 0xcaed1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xA4AD1u)), c.r[2]);
    // 0caed7  mov dword ptr [ecx + 0xa4ad5], esi
    X86_AT(c, 0xcaed7u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xA4AD5u)), c.r[6]);
    // 0caedd  mov dword ptr [ecx + 0xa4add], 0x9c4
    X86_AT(c, 0xcaeddu);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xA4ADDu)), 0x9C4u);
    // 0caee7  push edi
    X86_AT(c, 0xcaee7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0caee8  call 0xbe720
    X86_AT(c, 0xcaee8u);
    push32(c, 0xcaeedu); x86_call_known(c, 0xbe720u, f_000be720); X86_RET(c, 0xcaeedu);
    X86_TICK(c, 2);
    // 0caeed  add esp, 4
    X86_AT(c, 0xcaeedu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_caef0:
    X86_TICK(c, 28);
    // 0caef0  pop edi
    X86_AT(c, 0xcaef0u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0caef1  pop esi
    X86_AT(c, 0xcaef1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0caef2  pop ebx
    X86_AT(c, 0xcaef2u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0caef3  leave 
    X86_AT(c, 0xcaef3u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0caef4  ret 
    X86_AT(c, 0xcaef4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcac4cu, "ran off the end of a function");
}
void f_000caef8(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0caef8  push ebp
    X86_AT(c, 0xcaef8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0caef9  mov ebp, esp
    X86_AT(c, 0xcaef9u);
    c.r[5] = c.r[4];
    // 0caefb  sub esp, 0xc
    X86_AT(c, 0xcaefbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0caefe  push edi
    X86_AT(c, 0xcaefeu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0caeff  push 7
    X86_AT(c, 0xcaeffu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0caf01  call 0xbb6b0
    X86_AT(c, 0xcaf01u);
    push32(c, 0xcaf06u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xcaf06u);
    X86_TICK(c, 11);
    // 0caf06  push 0x73c0
    X86_AT(c, 0xcaf06u);
    { uint32_t v = 0x73C0u; push32(c, v); }
    // 0caf0b  push 7
    X86_AT(c, 0xcaf0bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0caf0d  call 0xba428
    X86_AT(c, 0xcaf0du);
    push32(c, 0xcaf12u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcaf12u);
    X86_TICK(c, 9);
    // 0caf12  push 7
    X86_AT(c, 0xcaf12u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0caf14  call 0xbbb5c
    X86_AT(c, 0xcaf14u);
    push32(c, 0xcaf19u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcaf19u);
    X86_TICK(c, 11);
    // 0caf19  push 0
    X86_AT(c, 0xcaf19u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0caf1b  push 7
    X86_AT(c, 0xcaf1bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0caf1d  call 0xb6f28
    X86_AT(c, 0xcaf1du);
    push32(c, 0xcaf22u); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xcaf22u);
    X86_TICK(c, 12);
    // 0caf22  xchg edi, eax
    X86_AT(c, 0xcaf22u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0caf23  add esp, 0x18
    X86_AT(c, 0xcaf23u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0caf26  cmp edi, 0xffffffff
    X86_AT(c, 0xcaf26u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0caf29  jne 0xcaf35
    X86_AT(c, 0xcaf29u);
    if (x86_cc(c, 5)) { goto L_caf35; }
    X86_TICK(c, 9);
    // 0caf2b  push 0x73ec
    X86_AT(c, 0xcaf2bu);
    { uint32_t v = 0x73ECu; push32(c, v); }
    // 0caf30  jmp 0xcb39d
    X86_AT(c, 0xcaf30u);
    goto L_cb39d;
L_caf35:
    X86_TICK(c, 11);
    // 0caf35  push 0x7404
    X86_AT(c, 0xcaf35u);
    { uint32_t v = 0x7404u; push32(c, v); }
    // 0caf3a  push 7
    X86_AT(c, 0xcaf3au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0caf3c  call 0xba428
    X86_AT(c, 0xcaf3cu);
    push32(c, 0xcaf41u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcaf41u);
    X86_TICK(c, 15);
    // 0caf41  push 0xa
    X86_AT(c, 0xcaf41u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0caf43  lea eax, [ebp - 0xc]
    X86_AT(c, 0xcaf43u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0caf46  push eax
    X86_AT(c, 0xcaf46u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0caf47  push 7
    X86_AT(c, 0xcaf47u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0caf49  call 0xb9d30
    X86_AT(c, 0xcaf49u);
    push32(c, 0xcaf4eu); x86_call_known(c, 0xb9d30u, f_000b9d30); X86_RET(c, 0xcaf4eu);
    X86_TICK(c, 9);
    // 0caf4e  add esp, 0x14
    X86_AT(c, 0xcaf4eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0caf51  dec eax
    X86_AT(c, 0xcaf51u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0caf52  jge 0xcaf5e
    X86_AT(c, 0xcaf52u);
    if (x86_cc(c, 13)) { goto L_caf5e; }
    X86_TICK(c, 9);
    // 0caf54  push 0x741c
    X86_AT(c, 0xcaf54u);
    { uint32_t v = 0x741Cu; push32(c, v); }
    // 0caf59  jmp 0xcb39d
    X86_AT(c, 0xcaf59u);
    goto L_cb39d;
L_caf5e:
    X86_TICK(c, 9);
    // 0caf5e  push 7
    X86_AT(c, 0xcaf5eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0caf60  call 0xbbb5c
    X86_AT(c, 0xcaf60u);
    push32(c, 0xcaf65u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcaf65u);
    X86_TICK(c, 13);
    // 0caf65  push 0x7434
    X86_AT(c, 0xcaf65u);
    { uint32_t v = 0x7434u; push32(c, v); }
    // 0caf6a  lea eax, [ebp - 0xc]
    X86_AT(c, 0xcaf6au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0caf6d  push eax
    X86_AT(c, 0xcaf6du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0caf6e  call 0xcac10
    X86_AT(c, 0xcaf6eu);
    push32(c, 0xcaf73u); x86_call_known(c, 0xcac10u, f_000cac10); X86_RET(c, 0xcaf73u);
    X86_TICK(c, 9);
    // 0caf73  add esp, 0xc
    X86_AT(c, 0xcaf73u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0caf76  and eax, eax
    X86_AT(c, 0xcaf76u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0caf78  jne 0xcb072
    X86_AT(c, 0xcaf78u);
    if (x86_cc(c, 5)) { goto L_cb072; }
    X86_TICK(c, 23);
    // 0caf7e  mov eax, edi
    X86_AT(c, 0xcaf7eu);
    c.r[0] = c.r[7];
    // 0caf80  lea edx, [eax + eax*2]
    X86_AT(c, 0xcaf80u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0caf83  shl edx, 5
    X86_AT(c, 0xcaf83u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0caf86  add edx, eax
    X86_AT(c, 0xcaf86u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0caf88  lea edx, [eax + edx*2]
    X86_AT(c, 0xcaf88u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0caf8b  cmp byte ptr [edx + 0xa4aae], 0
    X86_AT(c, 0xcaf8bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AAEu))), 0x0u, 0, 1);
    // 0caf92  je 0xcb072
    X86_AT(c, 0xcaf92u);
    if (x86_cc(c, 4)) { goto L_cb072; }
    X86_TICK(c, 12);
    // 0caf98  cmp dword ptr [0xa4a76], 0xa
    X86_AT(c, 0xcaf98u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A76u))), 0xAu, 0, 4);
    // 0caf9f  jne 0xcb072
    X86_AT(c, 0xcaf9fu);
    if (x86_cc(c, 5)) { goto L_cb072; }
    X86_TICK(c, 12);
    // 0cafa5  cmp dword ptr [0xa4a56], 0
    X86_AT(c, 0xcafa5u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x0u, 0, 4);
    // 0cafac  jne 0xcb072
    X86_AT(c, 0xcafacu);
    if (x86_cc(c, 5)) { goto L_cb072; }
    X86_TICK(c, 12);
    // 0cafb2  cmp dword ptr [0xa4a7a], 0x37
    X86_AT(c, 0xcafb2u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))), 0x37u, 0, 4);
    // 0cafb9  jne 0xcb008
    X86_AT(c, 0xcafb9u);
    if (x86_cc(c, 5)) { goto L_cb008; }
    X86_TICK(c, 9);
    // 0cafbb  push 2
    X86_AT(c, 0xcafbbu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cafbd  call 0xb607c
    X86_AT(c, 0xcafbdu);
    push32(c, 0xcafc2u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xcafc2u);
    X86_TICK(c, 14);
    // 0cafc2  add esp, 4
    X86_AT(c, 0xcafc2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cafc5  cmp byte ptr [0xa4a49], 0x82
    X86_AT(c, 0xcafc5u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xA4A49u))), 0x82u, 0, 1);
    // 0cafcc  je 0xcafdc
    X86_AT(c, 0xcafccu);
    if (x86_cc(c, 4)) { goto L_cafdc; }
    X86_TICK(c, 9);
    // 0cafce  push 7
    X86_AT(c, 0xcafceu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cafd0  call 0xbb6b0
    X86_AT(c, 0xcafd0u);
    push32(c, 0xcafd5u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xcafd5u);
    X86_TICK(c, 9);
    // 0cafd5  push 0x743c
    X86_AT(c, 0xcafd5u);
    { uint32_t v = 0x743Cu; push32(c, v); }
    // 0cafda  jmp 0xcb030
    X86_AT(c, 0xcafdau);
    goto L_cb030;
L_cafdc:
    X86_TICK(c, 9);
    // 0cafdc  mov dword ptr [0xa4a7a], 0x3b
    X86_AT(c, 0xcafdcu);
    wr32((c.sbase[3] + (uint32_t)(0xA4A7Au)), 0x3Bu);
    // 0cafe6  call 0xb71c4
    X86_AT(c, 0xcafe6u);
    push32(c, 0xcafebu); x86_call_known(c, 0xb71c4u, f_000b71c4); X86_RET(c, 0xcafebu);
    X86_TICK(c, 7);
    // 0cafeb  call 0xb8d28
    X86_AT(c, 0xcafebu);
    push32(c, 0xcaff0u); x86_call_known(c, 0xb8d28u, f_000b8d28); X86_RET(c, 0xcaff0u);
    X86_TICK(c, 7);
    // 0caff0  call 0xb7818
    X86_AT(c, 0xcaff0u);
    push32(c, 0xcaff5u); x86_call_known(c, 0xb7818u, f_000b7818); X86_RET(c, 0xcaff5u);
    X86_TICK(c, 9);
    // 0caff5  push 1
    X86_AT(c, 0xcaff5u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0caff7  call 0xb61d4
    X86_AT(c, 0xcaff7u);
    push32(c, 0xcaffcu); x86_call_known(c, 0xb61d4u, f_000b61d4); X86_RET(c, 0xcaffcu);
    X86_TICK(c, 9);
    // 0caffc  mov byte ptr [0x8bcf2], 8
    X86_AT(c, 0xcaffcu);
    wr8((c.sbase[3] + (uint32_t)(0x8BCF2u)), 0x8u);
    // 0cb003  jmp 0xcb393
    X86_AT(c, 0xcb003u);
    goto L_cb393;
L_cb008:
    X86_TICK(c, 12);
    // 0cb008  cmp dword ptr [0xa4a7a], 0x3b
    X86_AT(c, 0xcb008u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))), 0x3Bu, 0, 4);
    // 0cb00f  jne 0xcb072
    X86_AT(c, 0xcb00fu);
    if (x86_cc(c, 5)) { goto L_cb072; }
    X86_TICK(c, 9);
    // 0cb011  push 2
    X86_AT(c, 0xcb011u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cb013  call 0xb607c
    X86_AT(c, 0xcb013u);
    push32(c, 0xcb018u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xcb018u);
    X86_TICK(c, 14);
    // 0cb018  add esp, 4
    X86_AT(c, 0xcb018u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cb01b  cmp byte ptr [0xa4a49], 0x82
    X86_AT(c, 0xcb01bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xA4A49u))), 0x82u, 0, 1);
    // 0cb022  je 0xcb046
    X86_AT(c, 0xcb022u);
    if (x86_cc(c, 4)) { goto L_cb046; }
    X86_TICK(c, 9);
    // 0cb024  push 7
    X86_AT(c, 0xcb024u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb026  call 0xbb6b0
    X86_AT(c, 0xcb026u);
    push32(c, 0xcb02bu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xcb02bu);
    X86_TICK(c, 2);
    // 0cb02b  push 0x745c
    X86_AT(c, 0xcb02bu);
    { uint32_t v = 0x745Cu; push32(c, v); }
L_cb030:
    X86_TICK(c, 9);
    // 0cb030  push 7
    X86_AT(c, 0xcb030u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb032  call 0xba428
    X86_AT(c, 0xcb032u);
    push32(c, 0xcb037u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcb037u);
    X86_TICK(c, 9);
    // 0cb037  push 7
    X86_AT(c, 0xcb037u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb039  call 0xbbb5c
    X86_AT(c, 0xcb039u);
    push32(c, 0xcb03eu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcb03eu);
    X86_TICK(c, 9);
    // 0cb03e  add esp, 0x10
    X86_AT(c, 0xcb03eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0cb041  jmp 0xcb3ae
    X86_AT(c, 0xcb041u);
    goto L_cb3ae;
L_cb046:
    X86_TICK(c, 11);
    // 0cb046  mov dword ptr [0xa4a7a], 0x37
    X86_AT(c, 0xcb046u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A7Au)), 0x37u);
    // 0cb050  mov byte ptr [0x8bcf2], 8
    X86_AT(c, 0xcb050u);
    wr8((c.sbase[3] + (uint32_t)(0x8BCF2u)), 0x8u);
    // 0cb057  call 0xb71c4
    X86_AT(c, 0xcb057u);
    push32(c, 0xcb05cu); x86_call_known(c, 0xb71c4u, f_000b71c4); X86_RET(c, 0xcb05cu);
    X86_TICK(c, 7);
    // 0cb05c  call 0xb8d28
    X86_AT(c, 0xcb05cu);
    push32(c, 0xcb061u); x86_call_known(c, 0xb8d28u, f_000b8d28); X86_RET(c, 0xcb061u);
    X86_TICK(c, 7);
    // 0cb061  call 0xb7818
    X86_AT(c, 0xcb061u);
    push32(c, 0xcb066u); x86_call_known(c, 0xb7818u, f_000b7818); X86_RET(c, 0xcb066u);
    X86_TICK(c, 9);
    // 0cb066  push 1
    X86_AT(c, 0xcb066u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cb068  call 0xb61d4
    X86_AT(c, 0xcb068u);
    push32(c, 0xcb06du); x86_call_known(c, 0xb61d4u, f_000b61d4); X86_RET(c, 0xcb06du);
    X86_TICK(c, 7);
    // 0cb06d  jmp 0xcb393
    X86_AT(c, 0xcb06du);
    goto L_cb393;
L_cb072:
    X86_TICK(c, 13);
    // 0cb072  push 0x747c
    X86_AT(c, 0xcb072u);
    { uint32_t v = 0x747Cu; push32(c, v); }
    // 0cb077  lea eax, [ebp - 0xc]
    X86_AT(c, 0xcb077u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0cb07a  push eax
    X86_AT(c, 0xcb07au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cb07b  call 0xcac10
    X86_AT(c, 0xcb07bu);
    push32(c, 0xcb080u); x86_call_known(c, 0xcac10u, f_000cac10); X86_RET(c, 0xcb080u);
    X86_TICK(c, 9);
    // 0cb080  add esp, 8
    X86_AT(c, 0xcb080u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cb083  and eax, eax
    X86_AT(c, 0xcb083u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cb085  jne 0xcb0c5
    X86_AT(c, 0xcb085u);
    if (x86_cc(c, 5)) { goto L_cb0c5; }
    X86_TICK(c, 11);
    // 0cb087  mov eax, dword ptr [0xa6134]
    X86_AT(c, 0xcb087u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA6134u)));
    // 0cb08c  cmp eax, 2
    X86_AT(c, 0xcb08cu);
    (void)x86_sub(c, c.r[0], 0x2u, 0, 4);
    // 0cb08f  je 0xcb096
    X86_AT(c, 0xcb08fu);
    if (x86_cc(c, 4)) { goto L_cb096; }
    X86_TICK(c, 7);
    // 0cb091  cmp eax, 3
    X86_AT(c, 0xcb091u);
    (void)x86_sub(c, c.r[0], 0x3u, 0, 4);
    // 0cb094  jne 0xcb0c5
    X86_AT(c, 0xcb094u);
    if (x86_cc(c, 5)) { goto L_cb0c5; }
L_cb096:
    X86_TICK(c, 2);
    // 0cb096  sub edi, edi
    X86_AT(c, 0xcb096u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_cb098:
    X86_TICK(c, 7);
    // 0cb098  cmp edi, 4
    X86_AT(c, 0xcb098u);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0cb09b  jge 0xcb0af
    X86_AT(c, 0xcb09bu);
    if (x86_cc(c, 13)) { goto L_cb0af; }
    X86_TICK(c, 9);
    // 0cb09d  push edi
    X86_AT(c, 0xcb09du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cb09e  call 0xcac4c
    X86_AT(c, 0xcb09eu);
    push32(c, 0xcb0a3u); x86_call_known(c, 0xcac4cu, f_000cac4c); X86_RET(c, 0xcb0a3u);
    X86_TICK(c, 9);
    // 0cb0a3  push edi
    X86_AT(c, 0xcb0a3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cb0a4  call 0xbe720
    X86_AT(c, 0xcb0a4u);
    push32(c, 0xcb0a9u); x86_call_known(c, 0xbe720u, f_000be720); X86_RET(c, 0xcb0a9u);
    X86_TICK(c, 11);
    // 0cb0a9  inc edi
    X86_AT(c, 0xcb0a9u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cb0aa  add esp, 8
    X86_AT(c, 0xcb0aau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cb0ad  jmp 0xcb098
    X86_AT(c, 0xcb0adu);
    X86_POLL(c, 0xcb098u); goto L_cb098;
L_cb0af:
    X86_TICK(c, 11);
    // 0cb0af  mov dword ptr [0xa6134], 2
    X86_AT(c, 0xcb0afu);
    wr32((c.sbase[3] + (uint32_t)(0xA6134u)), 0x2u);
    // 0cb0b9  mov byte ptr [0x9c2a0], 0
    X86_AT(c, 0xcb0b9u);
    wr8((c.sbase[3] + (uint32_t)(0x9C2A0u)), 0x0u);
    // 0cb0c0  jmp 0xcb3ae
    X86_AT(c, 0xcb0c0u);
    goto L_cb3ae;
L_cb0c5:
    X86_TICK(c, 13);
    // 0cb0c5  push 0x7488
    X86_AT(c, 0xcb0c5u);
    { uint32_t v = 0x7488u; push32(c, v); }
    // 0cb0ca  lea eax, [ebp - 0xc]
    X86_AT(c, 0xcb0cau);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0cb0cd  push eax
    X86_AT(c, 0xcb0cdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cb0ce  call 0xcac10
    X86_AT(c, 0xcb0ceu);
    push32(c, 0xcb0d3u); x86_call_known(c, 0xcac10u, f_000cac10); X86_RET(c, 0xcb0d3u);
    X86_TICK(c, 9);
    // 0cb0d3  add esp, 8
    X86_AT(c, 0xcb0d3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cb0d6  and eax, eax
    X86_AT(c, 0xcb0d6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cb0d8  jne 0xcb10a
    X86_AT(c, 0xcb0d8u);
    if (x86_cc(c, 5)) { goto L_cb10a; }
    X86_TICK(c, 12);
    // 0cb0da  cmp dword ptr [0xa6134], 1
    X86_AT(c, 0xcb0dau);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA6134u))), 0x1u, 0, 4);
    // 0cb0e1  jne 0xcb10a
    X86_AT(c, 0xcb0e1u);
    if (x86_cc(c, 5)) { goto L_cb10a; }
    X86_TICK(c, 9);
    // 0cb0e3  push edi
    X86_AT(c, 0xcb0e3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cb0e4  call 0xcac4c
    X86_AT(c, 0xcb0e4u);
    push32(c, 0xcb0e9u); x86_call_known(c, 0xcac4cu, f_000cac4c); X86_RET(c, 0xcb0e9u);
    X86_TICK(c, 9);
    // 0cb0e9  push edi
    X86_AT(c, 0xcb0e9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cb0ea  call 0xbe720
    X86_AT(c, 0xcb0eau);
    push32(c, 0xcb0efu); x86_call_known(c, 0xbe720u, f_000be720); X86_RET(c, 0xcb0efu);
    X86_TICK(c, 11);
    // 0cb0ef  push 0x7490
    X86_AT(c, 0xcb0efu);
    { uint32_t v = 0x7490u; push32(c, v); }
    // 0cb0f4  push 7
    X86_AT(c, 0xcb0f4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb0f6  call 0xba428
    X86_AT(c, 0xcb0f6u);
    push32(c, 0xcb0fbu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcb0fbu);
    X86_TICK(c, 9);
    // 0cb0fb  push 7
    X86_AT(c, 0xcb0fbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb0fd  call 0xbbb5c
    X86_AT(c, 0xcb0fdu);
    push32(c, 0xcb102u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcb102u);
    X86_TICK(c, 9);
    // 0cb102  add esp, 0x14
    X86_AT(c, 0xcb102u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0cb105  jmp 0xcb3ae
    X86_AT(c, 0xcb105u);
    goto L_cb3ae;
L_cb10a:
    X86_TICK(c, 13);
    // 0cb10a  push 0x74bc
    X86_AT(c, 0xcb10au);
    { uint32_t v = 0x74BCu; push32(c, v); }
    // 0cb10f  lea eax, [ebp - 0xc]
    X86_AT(c, 0xcb10fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0cb112  push eax
    X86_AT(c, 0xcb112u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cb113  call 0xcac10
    X86_AT(c, 0xcb113u);
    push32(c, 0xcb118u); x86_call_known(c, 0xcac10u, f_000cac10); X86_RET(c, 0xcb118u);
    X86_TICK(c, 9);
    // 0cb118  add esp, 8
    X86_AT(c, 0xcb118u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cb11b  and eax, eax
    X86_AT(c, 0xcb11bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cb11d  jne 0xcb153
    X86_AT(c, 0xcb11du);
    if (x86_cc(c, 5)) { goto L_cb153; }
    X86_TICK(c, 12);
    // 0cb11f  cmp dword ptr [0xa6134], 0
    X86_AT(c, 0xcb11fu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA6134u))), 0x0u, 0, 4);
    // 0cb126  je 0xcb153
    X86_AT(c, 0xcb126u);
    if (x86_cc(c, 4)) { goto L_cb153; }
    X86_TICK(c, 24);
    // 0cb128  mov eax, edi
    X86_AT(c, 0xcb128u);
    c.r[0] = c.r[7];
    // 0cb12a  lea edx, [eax + eax*2]
    X86_AT(c, 0xcb12au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cb12d  shl edx, 5
    X86_AT(c, 0xcb12du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0cb130  add edx, eax
    X86_AT(c, 0xcb130u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cb132  lea edx, [eax + edx*2]
    X86_AT(c, 0xcb132u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0cb135  mov dword ptr [edx + 0xa4ae9], 0x270f
    X86_AT(c, 0xcb135u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AE9u)), 0x270Fu);
    // 0cb13f  mov dword ptr [edx + 0xa4ae5], 0xf41dc
    X86_AT(c, 0xcb13fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AE5u)), 0xF41DCu);
    // 0cb149  push 0x74c4
    X86_AT(c, 0xcb149u);
    { uint32_t v = 0x74C4u; push32(c, v); }
    // 0cb14e  jmp 0xcb39d
    X86_AT(c, 0xcb14eu);
    goto L_cb39d;
L_cb153:
    X86_TICK(c, 13);
    // 0cb153  push 0x74e8
    X86_AT(c, 0xcb153u);
    { uint32_t v = 0x74E8u; push32(c, v); }
    // 0cb158  lea eax, [ebp - 0xc]
    X86_AT(c, 0xcb158u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0cb15b  push eax
    X86_AT(c, 0xcb15bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cb15c  call 0xcac10
    X86_AT(c, 0xcb15cu);
    push32(c, 0xcb161u); x86_call_known(c, 0xcac10u, f_000cac10); X86_RET(c, 0xcb161u);
    X86_TICK(c, 9);
    // 0cb161  add esp, 8
    X86_AT(c, 0xcb161u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cb164  and eax, eax
    X86_AT(c, 0xcb164u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cb166  jne 0xcb172
    X86_AT(c, 0xcb166u);
    if (x86_cc(c, 5)) { goto L_cb172; }
    X86_TICK(c, 9);
    // 0cb168  push 0x74f0
    X86_AT(c, 0xcb168u);
    { uint32_t v = 0x74F0u; push32(c, v); }
    // 0cb16d  jmp 0xcb39d
    X86_AT(c, 0xcb16du);
    goto L_cb39d;
L_cb172:
    X86_TICK(c, 13);
    // 0cb172  push 0x751c
    X86_AT(c, 0xcb172u);
    { uint32_t v = 0x751Cu; push32(c, v); }
    // 0cb177  lea eax, [ebp - 0xc]
    X86_AT(c, 0xcb177u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0cb17a  push eax
    X86_AT(c, 0xcb17au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cb17b  call 0xcac10
    X86_AT(c, 0xcb17bu);
    push32(c, 0xcb180u); x86_call_known(c, 0xcac10u, f_000cac10); X86_RET(c, 0xcb180u);
    X86_TICK(c, 9);
    // 0cb180  add esp, 8
    X86_AT(c, 0xcb180u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cb183  and eax, eax
    X86_AT(c, 0xcb183u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cb185  jne 0xcb191
    X86_AT(c, 0xcb185u);
    if (x86_cc(c, 5)) { goto L_cb191; }
    X86_TICK(c, 9);
    // 0cb187  push 0x7524
    X86_AT(c, 0xcb187u);
    { uint32_t v = 0x7524u; push32(c, v); }
    // 0cb18c  jmp 0xcb39d
    X86_AT(c, 0xcb18cu);
    goto L_cb39d;
L_cb191:
    X86_TICK(c, 13);
    // 0cb191  push 0x7540
    X86_AT(c, 0xcb191u);
    { uint32_t v = 0x7540u; push32(c, v); }
    // 0cb196  lea eax, [ebp - 0xc]
    X86_AT(c, 0xcb196u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0cb199  push eax
    X86_AT(c, 0xcb199u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cb19a  call 0xcac10
    X86_AT(c, 0xcb19au);
    push32(c, 0xcb19fu); x86_call_known(c, 0xcac10u, f_000cac10); X86_RET(c, 0xcb19fu);
    X86_TICK(c, 9);
    // 0cb19f  add esp, 8
    X86_AT(c, 0xcb19fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cb1a2  and eax, eax
    X86_AT(c, 0xcb1a2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cb1a4  jne 0xcb235
    X86_AT(c, 0xcb1a4u);
    if (x86_cc(c, 5)) { goto L_cb235; }
    X86_TICK(c, 11);
    // 0cb1aa  push 0x754c
    X86_AT(c, 0xcb1aau);
    { uint32_t v = 0x754Cu; push32(c, v); }
    // 0cb1af  push 7
    X86_AT(c, 0xcb1afu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb1b1  call 0xba428
    X86_AT(c, 0xcb1b1u);
    push32(c, 0xcb1b6u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcb1b6u);
    X86_TICK(c, 14);
    // 0cb1b6  add esp, 8
    X86_AT(c, 0xcb1b6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cb1b9  cmp dword ptr [0xa6134], 0
    X86_AT(c, 0xcb1b9u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA6134u))), 0x0u, 0, 4);
    // 0cb1c0  je 0xcb38c
    X86_AT(c, 0xcb1c0u);
    if (x86_cc(c, 4)) { goto L_cb38c; }
    X86_TICK(c, 34);
    // 0cb1c6  mov eax, edi
    X86_AT(c, 0xcb1c6u);
    c.r[0] = c.r[7];
    // 0cb1c8  lea edx, [eax + eax*2]
    X86_AT(c, 0xcb1c8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cb1cb  shl edx, 5
    X86_AT(c, 0xcb1cbu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0cb1ce  add edx, eax
    X86_AT(c, 0xcb1ceu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cb1d0  lea edx, [eax + edx*2]
    X86_AT(c, 0xcb1d0u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0cb1d3  mov byte ptr [edx + 0xa4abd], 0x47
    X86_AT(c, 0xcb1d3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu)), 0x47u);
    // 0cb1da  mov dword ptr [edx + 0xa4ae5], 0x186a0
    X86_AT(c, 0xcb1dau);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AE5u)), 0x186A0u);
    // 0cb1e4  mov dword ptr [edx + 0xa4ae9], 0x3e8
    X86_AT(c, 0xcb1e4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AE9u)), 0x3E8u);
    // 0cb1ee  mov dword ptr [edx + 0xa4aed], 0xa
    X86_AT(c, 0xcb1eeu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AEDu)), 0xAu);
    // 0cb1f8  mov dword ptr [edx + 0xa4ad1], 0x63
    X86_AT(c, 0xcb1f8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD1u)), 0x63u);
    // 0cb202  mov dword ptr [edx + 0xa4ad5], 0x270f
    X86_AT(c, 0xcb202u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD5u)), 0x270Fu);
    // 0cb20c  mov dword ptr [edx + 0xa4add], 0x9c4
    X86_AT(c, 0xcb20cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ADDu)), 0x9C4u);
    // 0cb216  push edi
    X86_AT(c, 0xcb216u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cb217  call 0xbe720
    X86_AT(c, 0xcb217u);
    push32(c, 0xcb21cu); x86_call_known(c, 0xbe720u, f_000be720); X86_RET(c, 0xcb21cu);
    X86_TICK(c, 13);
    // 0cb21c  mov dword ptr [0xa6134], 3
    X86_AT(c, 0xcb21cu);
    wr32((c.sbase[3] + (uint32_t)(0xA6134u)), 0x3u);
    // 0cb226  mov byte ptr [0x9c2a0], 1
    X86_AT(c, 0xcb226u);
    wr8((c.sbase[3] + (uint32_t)(0x9C2A0u)), 0x1u);
    // 0cb22d  add esp, 4
    X86_AT(c, 0xcb22du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cb230  jmp 0xcb38c
    X86_AT(c, 0xcb230u);
    goto L_cb38c;
L_cb235:
    X86_TICK(c, 13);
    // 0cb235  push 0x7568
    X86_AT(c, 0xcb235u);
    { uint32_t v = 0x7568u; push32(c, v); }
    // 0cb23a  lea eax, [ebp - 0xc]
    X86_AT(c, 0xcb23au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0cb23d  push eax
    X86_AT(c, 0xcb23du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cb23e  call 0xcac10
    X86_AT(c, 0xcb23eu);
    push32(c, 0xcb243u); x86_call_known(c, 0xcac10u, f_000cac10); X86_RET(c, 0xcb243u);
    X86_TICK(c, 9);
    // 0cb243  add esp, 8
    X86_AT(c, 0xcb243u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cb246  and eax, eax
    X86_AT(c, 0xcb246u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cb248  jne 0xcb254
    X86_AT(c, 0xcb248u);
    if (x86_cc(c, 5)) { goto L_cb254; }
    X86_TICK(c, 9);
    // 0cb24a  push 0x756c
    X86_AT(c, 0xcb24au);
    { uint32_t v = 0x756Cu; push32(c, v); }
    // 0cb24f  jmp 0xcb39d
    X86_AT(c, 0xcb24fu);
    goto L_cb39d;
L_cb254:
    X86_TICK(c, 13);
    // 0cb254  push 0x7594
    X86_AT(c, 0xcb254u);
    { uint32_t v = 0x7594u; push32(c, v); }
    // 0cb259  lea eax, [ebp - 0xc]
    X86_AT(c, 0xcb259u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0cb25c  push eax
    X86_AT(c, 0xcb25cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cb25d  call 0xcac10
    X86_AT(c, 0xcb25du);
    push32(c, 0xcb262u); x86_call_known(c, 0xcac10u, f_000cac10); X86_RET(c, 0xcb262u);
    X86_TICK(c, 9);
    // 0cb262  add esp, 8
    X86_AT(c, 0xcb262u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cb265  and eax, eax
    X86_AT(c, 0xcb265u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cb267  jne 0xcb273
    X86_AT(c, 0xcb267u);
    if (x86_cc(c, 5)) { goto L_cb273; }
    X86_TICK(c, 9);
    // 0cb269  push 0x759c
    X86_AT(c, 0xcb269u);
    { uint32_t v = 0x759Cu; push32(c, v); }
    // 0cb26e  jmp 0xcb39d
    X86_AT(c, 0xcb26eu);
    goto L_cb39d;
L_cb273:
    X86_TICK(c, 13);
    // 0cb273  push 0x75cc
    X86_AT(c, 0xcb273u);
    { uint32_t v = 0x75CCu; push32(c, v); }
    // 0cb278  lea eax, [ebp - 0xc]
    X86_AT(c, 0xcb278u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0cb27b  push eax
    X86_AT(c, 0xcb27bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cb27c  call 0xcac10
    X86_AT(c, 0xcb27cu);
    push32(c, 0xcb281u); x86_call_known(c, 0xcac10u, f_000cac10); X86_RET(c, 0xcb281u);
    X86_TICK(c, 9);
    // 0cb281  add esp, 8
    X86_AT(c, 0xcb281u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cb284  and eax, eax
    X86_AT(c, 0xcb284u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cb286  jne 0xcb292
    X86_AT(c, 0xcb286u);
    if (x86_cc(c, 5)) { goto L_cb292; }
    X86_TICK(c, 9);
    // 0cb288  push 0x75d4
    X86_AT(c, 0xcb288u);
    { uint32_t v = 0x75D4u; push32(c, v); }
    // 0cb28d  jmp 0xcb39d
    X86_AT(c, 0xcb28du);
    goto L_cb39d;
L_cb292:
    X86_TICK(c, 13);
    // 0cb292  push 0x7600
    X86_AT(c, 0xcb292u);
    { uint32_t v = 0x7600u; push32(c, v); }
    // 0cb297  lea eax, [ebp - 0xc]
    X86_AT(c, 0xcb297u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0cb29a  push eax
    X86_AT(c, 0xcb29au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cb29b  call 0xcac10
    X86_AT(c, 0xcb29bu);
    push32(c, 0xcb2a0u); x86_call_known(c, 0xcac10u, f_000cac10); X86_RET(c, 0xcb2a0u);
    X86_TICK(c, 9);
    // 0cb2a0  add esp, 8
    X86_AT(c, 0xcb2a0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cb2a3  and eax, eax
    X86_AT(c, 0xcb2a3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cb2a5  jne 0xcb2d0
    X86_AT(c, 0xcb2a5u);
    if (x86_cc(c, 5)) { goto L_cb2d0; }
    X86_TICK(c, 11);
    // 0cb2a7  push 0x7604
    X86_AT(c, 0xcb2a7u);
    { uint32_t v = 0x7604u; push32(c, v); }
    // 0cb2ac  push 7
    X86_AT(c, 0xcb2acu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb2ae  call 0xba428
    X86_AT(c, 0xcb2aeu);
    push32(c, 0xcb2b3u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcb2b3u);
    X86_TICK(c, 9);
    // 0cb2b3  push 7
    X86_AT(c, 0xcb2b3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb2b5  call 0xbbb5c
    X86_AT(c, 0xcb2b5u);
    push32(c, 0xcb2bau); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcb2bau);
    X86_TICK(c, 11);
    // 0cb2ba  mov dword ptr [0xa6134], 0
    X86_AT(c, 0xcb2bau);
    wr32((c.sbase[3] + (uint32_t)(0xA6134u)), 0x0u);
    // 0cb2c4  mov byte ptr [0x9c2a0], 1
    X86_AT(c, 0xcb2c4u);
    wr8((c.sbase[3] + (uint32_t)(0x9C2A0u)), 0x1u);
    // 0cb2cb  jmp 0xcb3ab
    X86_AT(c, 0xcb2cbu);
    goto L_cb3ab;
L_cb2d0:
    X86_TICK(c, 13);
    // 0cb2d0  push 0x7624
    X86_AT(c, 0xcb2d0u);
    { uint32_t v = 0x7624u; push32(c, v); }
    // 0cb2d5  lea eax, [ebp - 0xc]
    X86_AT(c, 0xcb2d5u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0cb2d8  push eax
    X86_AT(c, 0xcb2d8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cb2d9  call 0xcac10
    X86_AT(c, 0xcb2d9u);
    push32(c, 0xcb2deu); x86_call_known(c, 0xcac10u, f_000cac10); X86_RET(c, 0xcb2deu);
    X86_TICK(c, 9);
    // 0cb2de  add esp, 8
    X86_AT(c, 0xcb2deu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cb2e1  and eax, eax
    X86_AT(c, 0xcb2e1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cb2e3  jne 0xcb2ef
    X86_AT(c, 0xcb2e3u);
    if (x86_cc(c, 5)) { goto L_cb2ef; }
    X86_TICK(c, 9);
    // 0cb2e5  push 0x762c
    X86_AT(c, 0xcb2e5u);
    { uint32_t v = 0x762Cu; push32(c, v); }
    // 0cb2ea  jmp 0xcb39d
    X86_AT(c, 0xcb2eau);
    goto L_cb39d;
L_cb2ef:
    X86_TICK(c, 13);
    // 0cb2ef  push 0x7656
    X86_AT(c, 0xcb2efu);
    { uint32_t v = 0x7656u; push32(c, v); }
    // 0cb2f4  lea eax, [ebp - 0xc]
    X86_AT(c, 0xcb2f4u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0cb2f7  push eax
    X86_AT(c, 0xcb2f7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cb2f8  call 0xcac10
    X86_AT(c, 0xcb2f8u);
    push32(c, 0xcb2fdu); x86_call_known(c, 0xcac10u, f_000cac10); X86_RET(c, 0xcb2fdu);
    X86_TICK(c, 9);
    // 0cb2fd  add esp, 8
    X86_AT(c, 0xcb2fdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cb300  and eax, eax
    X86_AT(c, 0xcb300u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cb302  jne 0xcb30e
    X86_AT(c, 0xcb302u);
    if (x86_cc(c, 5)) { goto L_cb30e; }
    X86_TICK(c, 7);
    // 0cb304  call 0xb5218
    X86_AT(c, 0xcb304u);
    push32(c, 0xcb309u); x86_call_known(c, 0xb5218u, f_000b5218); X86_RET(c, 0xcb309u);
    X86_TICK(c, 7);
    // 0cb309  jmp 0xcb3ae
    X86_AT(c, 0xcb309u);
    goto L_cb3ae;
L_cb30e:
    X86_TICK(c, 13);
    // 0cb30e  push 0x765c
    X86_AT(c, 0xcb30eu);
    { uint32_t v = 0x765Cu; push32(c, v); }
    // 0cb313  lea eax, [ebp - 0xc]
    X86_AT(c, 0xcb313u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0cb316  push eax
    X86_AT(c, 0xcb316u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cb317  call 0xcac10
    X86_AT(c, 0xcb317u);
    push32(c, 0xcb31cu); x86_call_known(c, 0xcac10u, f_000cac10); X86_RET(c, 0xcb31cu);
    X86_TICK(c, 9);
    // 0cb31c  add esp, 8
    X86_AT(c, 0xcb31cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cb31f  and eax, eax
    X86_AT(c, 0xcb31fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cb321  jne 0xcb398
    X86_AT(c, 0xcb321u);
    if (x86_cc(c, 5)) { goto L_cb398; }
    X86_TICK(c, 11);
    // 0cb327  push 0x7664
    X86_AT(c, 0xcb327u);
    { uint32_t v = 0x7664u; push32(c, v); }
    // 0cb32c  push 7
    X86_AT(c, 0xcb32cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb32e  call 0xba428
    X86_AT(c, 0xcb32eu);
    push32(c, 0xcb333u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcb333u);
    X86_TICK(c, 9);
    // 0cb333  push 7
    X86_AT(c, 0xcb333u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb335  call 0xbbb5c
    X86_AT(c, 0xcb335u);
    push32(c, 0xcb33au); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcb33au);
    X86_TICK(c, 15);
    // 0cb33a  add esp, 0xc
    X86_AT(c, 0xcb33au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cb33d  mov edx, dword ptr [0xa6134]
    X86_AT(c, 0xcb33du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xA6134u)));
    // 0cb343  dec edx
    X86_AT(c, 0xcb343u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0cb344  cmp edx, 3
    X86_AT(c, 0xcb344u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0cb347  ja 0xcb38c
    X86_AT(c, 0xcb347u);
    if (x86_cc(c, 7)) { goto L_cb38c; }
    X86_TICK(c, 7);
    // 0cb349  jmp dword ptr cs:[edx*4 + 0xcb351]
    X86_AT(c, 0xcb349u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xCB351u)));
      switch (t) {
      case 0xcb361u: goto L_cb361;
      case 0xcb368u: goto L_cb368;
      case 0xcb36fu: goto L_cb36f;
      case 0xcb376u: goto L_cb376;
      default: x86_jump(c, t); return; } }
L_cb361:
    X86_TICK(c, 9);
    // 0cb361  push 0x7690
    X86_AT(c, 0xcb361u);
    { uint32_t v = 0x7690u; push32(c, v); }
    // 0cb366  jmp 0xcb37b
    X86_AT(c, 0xcb366u);
    goto L_cb37b;
L_cb368:
    X86_TICK(c, 9);
    // 0cb368  push 0x76c0
    X86_AT(c, 0xcb368u);
    { uint32_t v = 0x76C0u; push32(c, v); }
    // 0cb36d  jmp 0xcb37b
    X86_AT(c, 0xcb36du);
    goto L_cb37b;
L_cb36f:
    X86_TICK(c, 9);
    // 0cb36f  push 0x76f0
    X86_AT(c, 0xcb36fu);
    { uint32_t v = 0x76F0u; push32(c, v); }
    // 0cb374  jmp 0xcb37b
    X86_AT(c, 0xcb374u);
    goto L_cb37b;
L_cb376:
    X86_TICK(c, 2);
    // 0cb376  push 0x770c
    X86_AT(c, 0xcb376u);
    { uint32_t v = 0x770Cu; push32(c, v); }
L_cb37b:
    X86_TICK(c, 9);
    // 0cb37b  push 7
    X86_AT(c, 0xcb37bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb37d  call 0xba428
    X86_AT(c, 0xcb37du);
    push32(c, 0xcb382u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcb382u);
    X86_TICK(c, 9);
    // 0cb382  push 7
    X86_AT(c, 0xcb382u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb384  call 0xbbb5c
    X86_AT(c, 0xcb384u);
    push32(c, 0xcb389u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcb389u);
    X86_TICK(c, 2);
    // 0cb389  add esp, 0xc
    X86_AT(c, 0xcb389u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_cb38c:
    X86_TICK(c, 9);
    // 0cb38c  push 7
    X86_AT(c, 0xcb38cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb38e  call 0xbbb5c
    X86_AT(c, 0xcb38eu);
    push32(c, 0xcb393u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcb393u);
L_cb393:
    X86_TICK(c, 9);
    // 0cb393  add esp, 4
    X86_AT(c, 0xcb393u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cb396  jmp 0xcb3ae
    X86_AT(c, 0xcb396u);
    goto L_cb3ae;
L_cb398:
    X86_TICK(c, 2);
    // 0cb398  push 0x772c
    X86_AT(c, 0xcb398u);
    { uint32_t v = 0x772Cu; push32(c, v); }
L_cb39d:
    X86_TICK(c, 9);
    // 0cb39d  push 7
    X86_AT(c, 0xcb39du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb39f  call 0xba428
    X86_AT(c, 0xcb39fu);
    push32(c, 0xcb3a4u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcb3a4u);
    X86_TICK(c, 9);
    // 0cb3a4  push 7
    X86_AT(c, 0xcb3a4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb3a6  call 0xbbb5c
    X86_AT(c, 0xcb3a6u);
    push32(c, 0xcb3abu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcb3abu);
L_cb3ab:
    X86_TICK(c, 2);
    // 0cb3ab  add esp, 0xc
    X86_AT(c, 0xcb3abu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_cb3ae:
    X86_TICK(c, 20);
    // 0cb3ae  pop edi
    X86_AT(c, 0xcb3aeu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cb3af  leave 
    X86_AT(c, 0xcb3afu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cb3b0  ret 
    X86_AT(c, 0xcb3b0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcaef8u, "ran off the end of a function");
}
void f_000cb393(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0cb393  add esp, 4
    X86_AT(c, 0xcb393u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cb396  jmp 0xcb3ae
    X86_AT(c, 0xcb396u);
    goto L_cb3ae;
L_cb3ae:
    X86_TICK(c, 20);
    // 0cb3ae  pop edi
    X86_AT(c, 0xcb3aeu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cb3af  leave 
    X86_AT(c, 0xcb3afu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cb3b0  ret 
    X86_AT(c, 0xcb3b0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcb393u, "ran off the end of a function");
}
void f_000cb39d(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0cb39d  push 7
    X86_AT(c, 0xcb39du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb39f  call 0xba428
    X86_AT(c, 0xcb39fu);
    push32(c, 0xcb3a4u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcb3a4u);
    X86_TICK(c, 9);
    // 0cb3a4  push 7
    X86_AT(c, 0xcb3a4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb3a6  call 0xbbb5c
    X86_AT(c, 0xcb3a6u);
    push32(c, 0xcb3abu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcb3abu);
    X86_TICK(c, 22);
    // 0cb3ab  add esp, 0xc
    X86_AT(c, 0xcb3abu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cb3ae  pop edi
    X86_AT(c, 0xcb3aeu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cb3af  leave 
    X86_AT(c, 0xcb3afu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cb3b0  ret 
    X86_AT(c, 0xcb3b0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcb39du, "ran off the end of a function");
}
void f_000cb3ae(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0cb3ae  pop edi
    X86_AT(c, 0xcb3aeu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cb3af  leave 
    X86_AT(c, 0xcb3afu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cb3b0  ret 
    X86_AT(c, 0xcb3b0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcb3aeu, "ran off the end of a function");
}
void f_000cb3b4(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0cb3b4  push ebp
    X86_AT(c, 0xcb3b4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cb3b5  mov ebp, esp
    X86_AT(c, 0xcb3b5u);
    c.r[5] = c.r[4];
    // 0cb3b7  sub esp, 0xc
    X86_AT(c, 0xcb3b7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0cb3ba  push edi
    X86_AT(c, 0xcb3bau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cb3bb  push 7
    X86_AT(c, 0xcb3bbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb3bd  call 0xbb6b0
    X86_AT(c, 0xcb3bdu);
    push32(c, 0xcb3c2u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xcb3c2u);
    X86_TICK(c, 11);
    // 0cb3c2  push 0x7754
    X86_AT(c, 0xcb3c2u);
    { uint32_t v = 0x7754u; push32(c, v); }
    // 0cb3c7  push 7
    X86_AT(c, 0xcb3c7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb3c9  call 0xba428
    X86_AT(c, 0xcb3c9u);
    push32(c, 0xcb3ceu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcb3ceu);
    X86_TICK(c, 9);
    // 0cb3ce  push 7
    X86_AT(c, 0xcb3ceu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb3d0  call 0xbbb5c
    X86_AT(c, 0xcb3d0u);
    push32(c, 0xcb3d5u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcb3d5u);
    X86_TICK(c, 11);
    // 0cb3d5  push 0x7788
    X86_AT(c, 0xcb3d5u);
    { uint32_t v = 0x7788u; push32(c, v); }
    // 0cb3da  push 7
    X86_AT(c, 0xcb3dau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb3dc  call 0xba428
    X86_AT(c, 0xcb3dcu);
    push32(c, 0xcb3e1u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcb3e1u);
    X86_TICK(c, 9);
    // 0cb3e1  push 7
    X86_AT(c, 0xcb3e1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb3e3  call 0xbbb5c
    X86_AT(c, 0xcb3e3u);
    push32(c, 0xcb3e8u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcb3e8u);
    X86_TICK(c, 11);
    // 0cb3e8  push 0
    X86_AT(c, 0xcb3e8u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cb3ea  push 7
    X86_AT(c, 0xcb3eau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb3ec  call 0xb6f28
    X86_AT(c, 0xcb3ecu);
    push32(c, 0xcb3f1u); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xcb3f1u);
    X86_TICK(c, 12);
    // 0cb3f1  xchg edi, eax
    X86_AT(c, 0xcb3f1u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0cb3f2  add esp, 0x24
    X86_AT(c, 0xcb3f2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
    // 0cb3f5  cmp edi, 0xffffffff
    X86_AT(c, 0xcb3f5u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0cb3f8  jne 0xcb404
    X86_AT(c, 0xcb3f8u);
    if (x86_cc(c, 5)) { goto L_cb404; }
    X86_TICK(c, 9);
    // 0cb3fa  push 0x77a0
    X86_AT(c, 0xcb3fau);
    { uint32_t v = 0x77A0u; push32(c, v); }
    // 0cb3ff  jmp 0xcb5fb
    X86_AT(c, 0xcb3ffu);
    goto L_cb5fb;
L_cb404:
    X86_TICK(c, 11);
    // 0cb404  push 0x77b8
    X86_AT(c, 0xcb404u);
    { uint32_t v = 0x77B8u; push32(c, v); }
    // 0cb409  push 7
    X86_AT(c, 0xcb409u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb40b  call 0xba428
    X86_AT(c, 0xcb40bu);
    push32(c, 0xcb410u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcb410u);
    X86_TICK(c, 15);
    // 0cb410  push 0xb
    X86_AT(c, 0xcb410u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0cb412  lea eax, [ebp - 0xc]
    X86_AT(c, 0xcb412u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0cb415  push eax
    X86_AT(c, 0xcb415u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cb416  push 7
    X86_AT(c, 0xcb416u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb418  call 0xb9d30
    X86_AT(c, 0xcb418u);
    push32(c, 0xcb41du); x86_call_known(c, 0xb9d30u, f_000b9d30); X86_RET(c, 0xcb41du);
    X86_TICK(c, 9);
    // 0cb41d  add esp, 0x14
    X86_AT(c, 0xcb41du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0cb420  dec eax
    X86_AT(c, 0xcb420u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0cb421  jge 0xcb42d
    X86_AT(c, 0xcb421u);
    if (x86_cc(c, 13)) { goto L_cb42d; }
    X86_TICK(c, 9);
    // 0cb423  push 0x77d8
    X86_AT(c, 0xcb423u);
    { uint32_t v = 0x77D8u; push32(c, v); }
    // 0cb428  jmp 0xcb5fb
    X86_AT(c, 0xcb428u);
    goto L_cb5fb;
L_cb42d:
    X86_TICK(c, 9);
    // 0cb42d  push 7
    X86_AT(c, 0xcb42du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb42f  call 0xbbb5c
    X86_AT(c, 0xcb42fu);
    push32(c, 0xcb434u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcb434u);
    X86_TICK(c, 13);
    // 0cb434  push 0x77f0
    X86_AT(c, 0xcb434u);
    { uint32_t v = 0x77F0u; push32(c, v); }
    // 0cb439  lea eax, [ebp - 0xc]
    X86_AT(c, 0xcb439u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0cb43c  push eax
    X86_AT(c, 0xcb43cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cb43d  call 0xcac10
    X86_AT(c, 0xcb43du);
    push32(c, 0xcb442u); x86_call_known(c, 0xcac10u, f_000cac10); X86_RET(c, 0xcb442u);
    X86_TICK(c, 9);
    // 0cb442  add esp, 0xc
    X86_AT(c, 0xcb442u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cb445  and eax, eax
    X86_AT(c, 0xcb445u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cb447  jne 0xcb451
    X86_AT(c, 0xcb447u);
    if (x86_cc(c, 5)) { goto L_cb451; }
    X86_TICK(c, 9);
    // 0cb449  push edi
    X86_AT(c, 0xcb449u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cb44a  call 0xcb9cc
    X86_AT(c, 0xcb44au);
    push32(c, 0xcb44fu); x86_call_known(c, 0xcb9ccu, f_000cb9cc); X86_RET(c, 0xcb44fu);
    X86_TICK(c, 7);
    // 0cb44f  jmp 0xcb4a6
    X86_AT(c, 0xcb44fu);
    goto L_cb4a6;
L_cb451:
    X86_TICK(c, 13);
    // 0cb451  push 0x77fc
    X86_AT(c, 0xcb451u);
    { uint32_t v = 0x77FCu; push32(c, v); }
    // 0cb456  lea eax, [ebp - 0xc]
    X86_AT(c, 0xcb456u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0cb459  push eax
    X86_AT(c, 0xcb459u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cb45a  call 0xcac10
    X86_AT(c, 0xcb45au);
    push32(c, 0xcb45fu); x86_call_known(c, 0xcac10u, f_000cac10); X86_RET(c, 0xcb45fu);
    X86_TICK(c, 9);
    // 0cb45f  add esp, 8
    X86_AT(c, 0xcb45fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cb462  and eax, eax
    X86_AT(c, 0xcb462u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cb464  jne 0xcb46e
    X86_AT(c, 0xcb464u);
    if (x86_cc(c, 5)) { goto L_cb46e; }
    X86_TICK(c, 9);
    // 0cb466  push edi
    X86_AT(c, 0xcb466u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cb467  call 0xcb610
    X86_AT(c, 0xcb467u);
    push32(c, 0xcb46cu); x86_call_known(c, 0xcb610u, f_000cb610); X86_RET(c, 0xcb46cu);
    X86_TICK(c, 7);
    // 0cb46c  jmp 0xcb4a6
    X86_AT(c, 0xcb46cu);
    goto L_cb4a6;
L_cb46e:
    X86_TICK(c, 13);
    // 0cb46e  push 0x7808
    X86_AT(c, 0xcb46eu);
    { uint32_t v = 0x7808u; push32(c, v); }
    // 0cb473  lea eax, [ebp - 0xc]
    X86_AT(c, 0xcb473u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0cb476  push eax
    X86_AT(c, 0xcb476u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cb477  call 0xcac10
    X86_AT(c, 0xcb477u);
    push32(c, 0xcb47cu); x86_call_known(c, 0xcac10u, f_000cac10); X86_RET(c, 0xcb47cu);
    X86_TICK(c, 9);
    // 0cb47c  add esp, 8
    X86_AT(c, 0xcb47cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cb47f  and eax, eax
    X86_AT(c, 0xcb47fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cb481  jne 0xcb48b
    X86_AT(c, 0xcb481u);
    if (x86_cc(c, 5)) { goto L_cb48b; }
    X86_TICK(c, 9);
    // 0cb483  push edi
    X86_AT(c, 0xcb483u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cb484  call 0xcb8e0
    X86_AT(c, 0xcb484u);
    push32(c, 0xcb489u); x86_call_known(c, 0xcb8e0u, f_000cb8e0); X86_RET(c, 0xcb489u);
    X86_TICK(c, 7);
    // 0cb489  jmp 0xcb4a6
    X86_AT(c, 0xcb489u);
    goto L_cb4a6;
L_cb48b:
    X86_TICK(c, 13);
    // 0cb48b  push 0x7814
    X86_AT(c, 0xcb48bu);
    { uint32_t v = 0x7814u; push32(c, v); }
    // 0cb490  lea eax, [ebp - 0xc]
    X86_AT(c, 0xcb490u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0cb493  push eax
    X86_AT(c, 0xcb493u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cb494  call 0xcac10
    X86_AT(c, 0xcb494u);
    push32(c, 0xcb499u); x86_call_known(c, 0xcac10u, f_000cac10); X86_RET(c, 0xcb499u);
    X86_TICK(c, 9);
    // 0cb499  add esp, 8
    X86_AT(c, 0xcb499u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cb49c  and eax, eax
    X86_AT(c, 0xcb49cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cb49e  jne 0xcb4ae
    X86_AT(c, 0xcb49eu);
    if (x86_cc(c, 5)) { goto L_cb4ae; }
    X86_TICK(c, 9);
    // 0cb4a0  push edi
    X86_AT(c, 0xcb4a0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cb4a1  call 0xcb7bc
    X86_AT(c, 0xcb4a1u);
    push32(c, 0xcb4a6u); x86_call_known(c, 0xcb7bcu, f_000cb7bc); X86_RET(c, 0xcb4a6u);
L_cb4a6:
    X86_TICK(c, 9);
    // 0cb4a6  add esp, 4
    X86_AT(c, 0xcb4a6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cb4a9  jmp 0xcb60c
    X86_AT(c, 0xcb4a9u);
    goto L_cb60c;
L_cb4ae:
    X86_TICK(c, 13);
    // 0cb4ae  push 0x7820
    X86_AT(c, 0xcb4aeu);
    { uint32_t v = 0x7820u; push32(c, v); }
    // 0cb4b3  lea eax, [ebp - 0xc]
    X86_AT(c, 0xcb4b3u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0cb4b6  push eax
    X86_AT(c, 0xcb4b6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cb4b7  call 0xcac10
    X86_AT(c, 0xcb4b7u);
    push32(c, 0xcb4bcu); x86_call_known(c, 0xcac10u, f_000cac10); X86_RET(c, 0xcb4bcu);
    X86_TICK(c, 9);
    // 0cb4bc  add esp, 8
    X86_AT(c, 0xcb4bcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cb4bf  and eax, eax
    X86_AT(c, 0xcb4bfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cb4c1  jne 0xcb4cd
    X86_AT(c, 0xcb4c1u);
    if (x86_cc(c, 5)) { goto L_cb4cd; }
    X86_TICK(c, 7);
    // 0cb4c3  call 0xcb73c
    X86_AT(c, 0xcb4c3u);
    push32(c, 0xcb4c8u); x86_call_known(c, 0xcb73cu, f_000cb73c); X86_RET(c, 0xcb4c8u);
    X86_TICK(c, 7);
    // 0cb4c8  jmp 0xcb60c
    X86_AT(c, 0xcb4c8u);
    goto L_cb60c;
L_cb4cd:
    X86_TICK(c, 13);
    // 0cb4cd  push 0x782c
    X86_AT(c, 0xcb4cdu);
    { uint32_t v = 0x782Cu; push32(c, v); }
    // 0cb4d2  lea eax, [ebp - 0xc]
    X86_AT(c, 0xcb4d2u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0cb4d5  push eax
    X86_AT(c, 0xcb4d5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cb4d6  call 0xcac10
    X86_AT(c, 0xcb4d6u);
    push32(c, 0xcb4dbu); x86_call_known(c, 0xcac10u, f_000cac10); X86_RET(c, 0xcb4dbu);
    X86_TICK(c, 9);
    // 0cb4db  add esp, 8
    X86_AT(c, 0xcb4dbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cb4de  and eax, eax
    X86_AT(c, 0xcb4deu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cb4e0  jne 0xcb4ec
    X86_AT(c, 0xcb4e0u);
    if (x86_cc(c, 5)) { goto L_cb4ec; }
    X86_TICK(c, 7);
    // 0cb4e2  call 0xcbce8
    X86_AT(c, 0xcb4e2u);
    push32(c, 0xcb4e7u); x86_call_known(c, 0xcbce8u, f_000cbce8); X86_RET(c, 0xcb4e7u);
    X86_TICK(c, 7);
    // 0cb4e7  jmp 0xcb60c
    X86_AT(c, 0xcb4e7u);
    goto L_cb60c;
L_cb4ec:
    X86_TICK(c, 13);
    // 0cb4ec  push 0x7838
    X86_AT(c, 0xcb4ecu);
    { uint32_t v = 0x7838u; push32(c, v); }
    // 0cb4f1  lea eax, [ebp - 0xc]
    X86_AT(c, 0xcb4f1u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0cb4f4  push eax
    X86_AT(c, 0xcb4f4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cb4f5  call 0xcac10
    X86_AT(c, 0xcb4f5u);
    push32(c, 0xcb4fau); x86_call_known(c, 0xcac10u, f_000cac10); X86_RET(c, 0xcb4fau);
    X86_TICK(c, 9);
    // 0cb4fa  add esp, 8
    X86_AT(c, 0xcb4fau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cb4fd  and eax, eax
    X86_AT(c, 0xcb4fdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cb4ff  jne 0xcb50b
    X86_AT(c, 0xcb4ffu);
    if (x86_cc(c, 5)) { goto L_cb50b; }
    X86_TICK(c, 7);
    // 0cb501  call 0xb8730
    X86_AT(c, 0xcb501u);
    push32(c, 0xcb506u); x86_call_known(c, 0xb8730u, f_000b8730); X86_RET(c, 0xcb506u);
    X86_TICK(c, 7);
    // 0cb506  jmp 0xcb60c
    X86_AT(c, 0xcb506u);
    goto L_cb60c;
L_cb50b:
    X86_TICK(c, 13);
    // 0cb50b  push 0x7844
    X86_AT(c, 0xcb50bu);
    { uint32_t v = 0x7844u; push32(c, v); }
    // 0cb510  lea eax, [ebp - 0xc]
    X86_AT(c, 0xcb510u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0cb513  push eax
    X86_AT(c, 0xcb513u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cb514  call 0xcac10
    X86_AT(c, 0xcb514u);
    push32(c, 0xcb519u); x86_call_known(c, 0xcac10u, f_000cac10); X86_RET(c, 0xcb519u);
    X86_TICK(c, 9);
    // 0cb519  add esp, 8
    X86_AT(c, 0xcb519u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cb51c  and eax, eax
    X86_AT(c, 0xcb51cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cb51e  jne 0xcb52a
    X86_AT(c, 0xcb51eu);
    if (x86_cc(c, 5)) { goto L_cb52a; }
    X86_TICK(c, 7);
    // 0cb520  call 0xb87dc
    X86_AT(c, 0xcb520u);
    push32(c, 0xcb525u); x86_call_known(c, 0xb87dcu, f_000b87dc); X86_RET(c, 0xcb525u);
    X86_TICK(c, 7);
    // 0cb525  jmp 0xcb60c
    X86_AT(c, 0xcb525u);
    goto L_cb60c;
L_cb52a:
    X86_TICK(c, 13);
    // 0cb52a  push 0x7850
    X86_AT(c, 0xcb52au);
    { uint32_t v = 0x7850u; push32(c, v); }
    // 0cb52f  lea eax, [ebp - 0xc]
    X86_AT(c, 0xcb52fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0cb532  push eax
    X86_AT(c, 0xcb532u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cb533  call 0xcac10
    X86_AT(c, 0xcb533u);
    push32(c, 0xcb538u); x86_call_known(c, 0xcac10u, f_000cac10); X86_RET(c, 0xcb538u);
    X86_TICK(c, 9);
    // 0cb538  add esp, 8
    X86_AT(c, 0xcb538u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cb53b  and eax, eax
    X86_AT(c, 0xcb53bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cb53d  jne 0xcb549
    X86_AT(c, 0xcb53du);
    if (x86_cc(c, 5)) { goto L_cb549; }
    X86_TICK(c, 7);
    // 0cb53f  call 0xcbda0
    X86_AT(c, 0xcb53fu);
    push32(c, 0xcb544u); x86_call_known(c, 0xcbda0u, f_000cbda0); X86_RET(c, 0xcb544u);
    X86_TICK(c, 7);
    // 0cb544  jmp 0xcb60c
    X86_AT(c, 0xcb544u);
    goto L_cb60c;
L_cb549:
    X86_TICK(c, 13);
    // 0cb549  push 0x785c
    X86_AT(c, 0xcb549u);
    { uint32_t v = 0x785Cu; push32(c, v); }
    // 0cb54e  lea eax, [ebp - 0xc]
    X86_AT(c, 0xcb54eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0cb551  push eax
    X86_AT(c, 0xcb551u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cb552  call 0xcac10
    X86_AT(c, 0xcb552u);
    push32(c, 0xcb557u); x86_call_known(c, 0xcac10u, f_000cac10); X86_RET(c, 0xcb557u);
    X86_TICK(c, 9);
    // 0cb557  add esp, 8
    X86_AT(c, 0xcb557u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cb55a  and eax, eax
    X86_AT(c, 0xcb55au);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cb55c  jne 0xcb5f6
    X86_AT(c, 0xcb55cu);
    if (x86_cc(c, 5)) { goto L_cb5f6; }
    X86_TICK(c, 11);
    // 0cb562  push 0x7868
    X86_AT(c, 0xcb562u);
    { uint32_t v = 0x7868u; push32(c, v); }
    // 0cb567  push 7
    X86_AT(c, 0xcb567u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb569  call 0xbbba4
    X86_AT(c, 0xcb569u);
    push32(c, 0xcb56eu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xcb56eu);
    X86_TICK(c, 9);
    // 0cb56e  push 7
    X86_AT(c, 0xcb56eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb570  call 0xbbb5c
    X86_AT(c, 0xcb570u);
    push32(c, 0xcb575u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcb575u);
    X86_TICK(c, 11);
    // 0cb575  push 0x787c
    X86_AT(c, 0xcb575u);
    { uint32_t v = 0x787Cu; push32(c, v); }
    // 0cb57a  push 7
    X86_AT(c, 0xcb57au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb57c  call 0xbbba4
    X86_AT(c, 0xcb57cu);
    push32(c, 0xcb581u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xcb581u);
    X86_TICK(c, 9);
    // 0cb581  push 7
    X86_AT(c, 0xcb581u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb583  call 0xbbb5c
    X86_AT(c, 0xcb583u);
    push32(c, 0xcb588u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcb588u);
    X86_TICK(c, 11);
    // 0cb588  push 0x7888
    X86_AT(c, 0xcb588u);
    { uint32_t v = 0x7888u; push32(c, v); }
    // 0cb58d  push 7
    X86_AT(c, 0xcb58du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb58f  call 0xbbba4
    X86_AT(c, 0xcb58fu);
    push32(c, 0xcb594u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xcb594u);
    X86_TICK(c, 9);
    // 0cb594  push 7
    X86_AT(c, 0xcb594u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb596  call 0xbbb5c
    X86_AT(c, 0xcb596u);
    push32(c, 0xcb59bu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcb59bu);
    X86_TICK(c, 11);
    // 0cb59b  push 0x789c
    X86_AT(c, 0xcb59bu);
    { uint32_t v = 0x789Cu; push32(c, v); }
    // 0cb5a0  push 7
    X86_AT(c, 0xcb5a0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb5a2  call 0xbbba4
    X86_AT(c, 0xcb5a2u);
    push32(c, 0xcb5a7u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xcb5a7u);
    X86_TICK(c, 9);
    // 0cb5a7  push 7
    X86_AT(c, 0xcb5a7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb5a9  call 0xbbb5c
    X86_AT(c, 0xcb5a9u);
    push32(c, 0xcb5aeu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcb5aeu);
    X86_TICK(c, 11);
    // 0cb5ae  push 0x78ac
    X86_AT(c, 0xcb5aeu);
    { uint32_t v = 0x78ACu; push32(c, v); }
    // 0cb5b3  push 7
    X86_AT(c, 0xcb5b3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb5b5  call 0xbbba4
    X86_AT(c, 0xcb5b5u);
    push32(c, 0xcb5bau); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xcb5bau);
    X86_TICK(c, 9);
    // 0cb5ba  push 7
    X86_AT(c, 0xcb5bau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb5bc  call 0xbbb5c
    X86_AT(c, 0xcb5bcu);
    push32(c, 0xcb5c1u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcb5c1u);
    X86_TICK(c, 13);
    // 0cb5c1  add esp, 0x3c
    X86_AT(c, 0xcb5c1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0cb5c4  push 0x78bc
    X86_AT(c, 0xcb5c4u);
    { uint32_t v = 0x78BCu; push32(c, v); }
    // 0cb5c9  push 7
    X86_AT(c, 0xcb5c9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb5cb  call 0xbbba4
    X86_AT(c, 0xcb5cbu);
    push32(c, 0xcb5d0u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xcb5d0u);
    X86_TICK(c, 9);
    // 0cb5d0  push 7
    X86_AT(c, 0xcb5d0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb5d2  call 0xbbb5c
    X86_AT(c, 0xcb5d2u);
    push32(c, 0xcb5d7u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcb5d7u);
    X86_TICK(c, 9);
    // 0cb5d7  push 7
    X86_AT(c, 0xcb5d7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb5d9  call 0xc9890
    X86_AT(c, 0xcb5d9u);
    push32(c, 0xcb5deu); x86_call_known(c, 0xc9890u, f_000c9890); X86_RET(c, 0xcb5deu);
    X86_TICK(c, 11);
    // 0cb5de  push 0x78cc
    X86_AT(c, 0xcb5deu);
    { uint32_t v = 0x78CCu; push32(c, v); }
    // 0cb5e3  push 7
    X86_AT(c, 0xcb5e3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb5e5  call 0xba428
    X86_AT(c, 0xcb5e5u);
    push32(c, 0xcb5eau); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcb5eau);
    X86_TICK(c, 9);
    // 0cb5ea  push 7
    X86_AT(c, 0xcb5eau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb5ec  call 0xbbb5c
    X86_AT(c, 0xcb5ecu);
    push32(c, 0xcb5f1u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcb5f1u);
    X86_TICK(c, 9);
    // 0cb5f1  add esp, 0x1c
    X86_AT(c, 0xcb5f1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0cb5f4  jmp 0xcb60c
    X86_AT(c, 0xcb5f4u);
    goto L_cb60c;
L_cb5f6:
    X86_TICK(c, 2);
    // 0cb5f6  push 0x7904
    X86_AT(c, 0xcb5f6u);
    { uint32_t v = 0x7904u; push32(c, v); }
L_cb5fb:
    X86_TICK(c, 9);
    // 0cb5fb  push 7
    X86_AT(c, 0xcb5fbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb5fd  call 0xba428
    X86_AT(c, 0xcb5fdu);
    push32(c, 0xcb602u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcb602u);
    X86_TICK(c, 9);
    // 0cb602  push 7
    X86_AT(c, 0xcb602u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb604  call 0xbbb5c
    X86_AT(c, 0xcb604u);
    push32(c, 0xcb609u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcb609u);
    X86_TICK(c, 2);
    // 0cb609  add esp, 0xc
    X86_AT(c, 0xcb609u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_cb60c:
    X86_TICK(c, 20);
    // 0cb60c  pop edi
    X86_AT(c, 0xcb60cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cb60d  leave 
    X86_AT(c, 0xcb60du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cb60e  ret 
    X86_AT(c, 0xcb60eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcb3b4u, "ran off the end of a function");
}
void f_000cb5fb(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0cb5fb  push 7
    X86_AT(c, 0xcb5fbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb5fd  call 0xba428
    X86_AT(c, 0xcb5fdu);
    push32(c, 0xcb602u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcb602u);
    X86_TICK(c, 9);
    // 0cb602  push 7
    X86_AT(c, 0xcb602u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb604  call 0xbbb5c
    X86_AT(c, 0xcb604u);
    push32(c, 0xcb609u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcb609u);
    X86_TICK(c, 22);
    // 0cb609  add esp, 0xc
    X86_AT(c, 0xcb609u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cb60c  pop edi
    X86_AT(c, 0xcb60cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cb60d  leave 
    X86_AT(c, 0xcb60du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cb60e  ret 
    X86_AT(c, 0xcb60eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcb5fbu, "ran off the end of a function");
}
void f_000cb60c(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0cb60c  pop edi
    X86_AT(c, 0xcb60cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cb60d  leave 
    X86_AT(c, 0xcb60du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cb60e  ret 
    X86_AT(c, 0xcb60eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcb60cu, "ran off the end of a function");
}
void f_000cb610(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0cb610  push ebp
    X86_AT(c, 0xcb610u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cb611  mov ebp, esp
    X86_AT(c, 0xcb611u);
    c.r[5] = c.r[4];
    // 0cb613  push ebx
    X86_AT(c, 0xcb613u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cb614  push edi
    X86_AT(c, 0xcb614u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cb615  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xcb615u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cb618  cmp dword ptr [0xa4a56], 0
    X86_AT(c, 0xcb618u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x0u, 0, 4);
    // 0cb61f  je 0xcb62b
    X86_AT(c, 0xcb61fu);
    if (x86_cc(c, 4)) { goto L_cb62b; }
    X86_TICK(c, 9);
    // 0cb621  push 0x792c
    X86_AT(c, 0xcb621u);
    { uint32_t v = 0x792Cu; push32(c, v); }
    // 0cb626  jmp 0xcb724
    X86_AT(c, 0xcb626u);
    goto L_cb724;
L_cb62b:
    X86_TICK(c, 12);
    // 0cb62b  cmp dword ptr [0xa4a76], 0x21
    X86_AT(c, 0xcb62bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A76u))), 0x21u, 0, 4);
    // 0cb632  jne 0xcb690
    X86_AT(c, 0xcb632u);
    if (x86_cc(c, 5)) { goto L_cb690; }
    X86_TICK(c, 12);
    // 0cb634  cmp dword ptr [0xa4a7a], 3
    X86_AT(c, 0xcb634u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))), 0x3u, 0, 4);
    // 0cb63b  jne 0xcb690
    X86_AT(c, 0xcb63bu);
    if (x86_cc(c, 5)) { goto L_cb690; }
    X86_TICK(c, 35);
    // 0cb63d  sub eax, eax
    X86_AT(c, 0xcb63du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0cb63f  mov dword ptr [0xa4a8e], eax
    X86_AT(c, 0xcb63fu);
    wr32((c.sbase[3] + (uint32_t)(0xA4A8Eu)), c.r[0]);
    // 0cb644  mov dword ptr [0xa4a96], eax
    X86_AT(c, 0xcb644u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A96u)), c.r[0]);
    // 0cb649  mov eax, edi
    X86_AT(c, 0xcb649u);
    c.r[0] = c.r[7];
    // 0cb64b  lea edx, [eax + eax*2]
    X86_AT(c, 0xcb64bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cb64e  shl edx, 5
    X86_AT(c, 0xcb64eu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0cb651  add edx, eax
    X86_AT(c, 0xcb651u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cb653  lea edx, [eax + edx*2]
    X86_AT(c, 0xcb653u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0cb656  inc dword ptr [edx + 0xa4b57]
    X86_AT(c, 0xcb656u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4B57u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0cb65c  cmp dword ptr [edx + 0xa4b57], 0x63
    X86_AT(c, 0xcb65cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4B57u))), 0x63u, 0, 4);
    // 0cb663  jle 0xcb67b
    X86_AT(c, 0xcb663u);
    if (x86_cc(c, 14)) { goto L_cb67b; }
    X86_TICK(c, 11);
    // 0cb665  push 3
    X86_AT(c, 0xcb665u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0cb667  mov ebx, edx
    X86_AT(c, 0xcb667u);
    c.r[3] = c.r[2];
    // 0cb669  call 0xb607c
    X86_AT(c, 0xcb669u);
    push32(c, 0xcb66eu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xcb66eu);
    X86_TICK(c, 4);
    // 0cb66e  mov dword ptr [ebx + 0xa4b57], 0x63
    X86_AT(c, 0xcb66eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0xA4B57u)), 0x63u);
    // 0cb678  add esp, 4
    X86_AT(c, 0xcb678u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_cb67b:
    X86_TICK(c, 9);
    // 0cb67b  push 0xb
    X86_AT(c, 0xcb67bu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0cb67d  call 0xb607c
    X86_AT(c, 0xcb67du);
    push32(c, 0xcb682u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xcb682u);
    X86_TICK(c, 9);
    // 0cb682  push 5
    X86_AT(c, 0xcb682u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0cb684  call 0xbebbc
    X86_AT(c, 0xcb684u);
    push32(c, 0xcb689u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xcb689u);
    X86_TICK(c, 9);
    // 0cb689  push 0x7960
    X86_AT(c, 0xcb689u);
    { uint32_t v = 0x7960u; push32(c, v); }
    // 0cb68e  jmp 0xcb6f3
    X86_AT(c, 0xcb68eu);
    goto L_cb6f3;
L_cb690:
    X86_TICK(c, 12);
    // 0cb690  cmp dword ptr [0xa4a76], 0x13
    X86_AT(c, 0xcb690u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A76u))), 0x13u, 0, 4);
    // 0cb697  jne 0xcb706
    X86_AT(c, 0xcb697u);
    if (x86_cc(c, 5)) { goto L_cb706; }
    X86_TICK(c, 12);
    // 0cb699  cmp dword ptr [0xa4a7a], 0x2c
    X86_AT(c, 0xcb699u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))), 0x2Cu, 0, 4);
    // 0cb6a0  jne 0xcb706
    X86_AT(c, 0xcb6a0u);
    if (x86_cc(c, 5)) { goto L_cb706; }
    X86_TICK(c, 35);
    // 0cb6a2  sub eax, eax
    X86_AT(c, 0xcb6a2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0cb6a4  mov dword ptr [0xa4a92], eax
    X86_AT(c, 0xcb6a4u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A92u)), c.r[0]);
    // 0cb6a9  mov dword ptr [0xa4a96], eax
    X86_AT(c, 0xcb6a9u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A96u)), c.r[0]);
    // 0cb6ae  mov eax, edi
    X86_AT(c, 0xcb6aeu);
    c.r[0] = c.r[7];
    // 0cb6b0  lea edx, [eax + eax*2]
    X86_AT(c, 0xcb6b0u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cb6b3  shl edx, 5
    X86_AT(c, 0xcb6b3u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0cb6b6  add edx, eax
    X86_AT(c, 0xcb6b6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cb6b8  lea edx, [eax + edx*2]
    X86_AT(c, 0xcb6b8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0cb6bb  inc dword ptr [edx + 0xa4b16]
    X86_AT(c, 0xcb6bbu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4B16u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0cb6c1  cmp dword ptr [edx + 0xa4b16], 0x63
    X86_AT(c, 0xcb6c1u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4B16u))), 0x63u, 0, 4);
    // 0cb6c8  jle 0xcb6e0
    X86_AT(c, 0xcb6c8u);
    if (x86_cc(c, 14)) { goto L_cb6e0; }
    X86_TICK(c, 11);
    // 0cb6ca  push 3
    X86_AT(c, 0xcb6cau);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0cb6cc  mov ebx, edx
    X86_AT(c, 0xcb6ccu);
    c.r[3] = c.r[2];
    // 0cb6ce  call 0xb607c
    X86_AT(c, 0xcb6ceu);
    push32(c, 0xcb6d3u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xcb6d3u);
    X86_TICK(c, 4);
    // 0cb6d3  mov dword ptr [ebx + 0xa4b16], 0x63
    X86_AT(c, 0xcb6d3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0xA4B16u)), 0x63u);
    // 0cb6dd  add esp, 4
    X86_AT(c, 0xcb6ddu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_cb6e0:
    X86_TICK(c, 9);
    // 0cb6e0  push 0xb
    X86_AT(c, 0xcb6e0u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0cb6e2  call 0xb607c
    X86_AT(c, 0xcb6e2u);
    push32(c, 0xcb6e7u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xcb6e7u);
    X86_TICK(c, 9);
    // 0cb6e7  push 5
    X86_AT(c, 0xcb6e7u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0cb6e9  call 0xbebbc
    X86_AT(c, 0xcb6e9u);
    push32(c, 0xcb6eeu); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xcb6eeu);
    X86_TICK(c, 2);
    // 0cb6ee  push 0x79a8
    X86_AT(c, 0xcb6eeu);
    { uint32_t v = 0x79A8u; push32(c, v); }
L_cb6f3:
    X86_TICK(c, 9);
    // 0cb6f3  push 7
    X86_AT(c, 0xcb6f3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb6f5  call 0xba428
    X86_AT(c, 0xcb6f5u);
    push32(c, 0xcb6fau); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcb6fau);
    X86_TICK(c, 9);
    // 0cb6fa  push 7
    X86_AT(c, 0xcb6fau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb6fc  call 0xbbb5c
    X86_AT(c, 0xcb6fcu);
    push32(c, 0xcb701u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcb701u);
    X86_TICK(c, 9);
    // 0cb701  add esp, 0x14
    X86_AT(c, 0xcb701u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0cb704  jmp 0xcb735
    X86_AT(c, 0xcb704u);
    goto L_cb735;
L_cb706:
    X86_TICK(c, 12);
    // 0cb706  cmp dword ptr [0xa4a76], 0x1d
    X86_AT(c, 0xcb706u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A76u))), 0x1Du, 0, 4);
    // 0cb70d  jne 0xcb71f
    X86_AT(c, 0xcb70du);
    if (x86_cc(c, 5)) { goto L_cb71f; }
    X86_TICK(c, 12);
    // 0cb70f  cmp dword ptr [0xa4a7a], 4
    X86_AT(c, 0xcb70fu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))), 0x4u, 0, 4);
    // 0cb716  jne 0xcb71f
    X86_AT(c, 0xcb716u);
    if (x86_cc(c, 5)) { goto L_cb71f; }
    X86_TICK(c, 7);
    // 0cb718  call 0xcbf98
    X86_AT(c, 0xcb718u);
    push32(c, 0xcb71du); x86_call_known(c, 0xcbf98u, f_000cbf98); X86_RET(c, 0xcb71du);
    X86_TICK(c, 7);
    // 0cb71d  jmp 0xcb735
    X86_AT(c, 0xcb71du);
    goto L_cb735;
L_cb71f:
    X86_TICK(c, 2);
    // 0cb71f  push 0x79f0
    X86_AT(c, 0xcb71fu);
    { uint32_t v = 0x79F0u; push32(c, v); }
L_cb724:
    X86_TICK(c, 9);
    // 0cb724  push 7
    X86_AT(c, 0xcb724u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb726  call 0xba428
    X86_AT(c, 0xcb726u);
    push32(c, 0xcb72bu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcb72bu);
    X86_TICK(c, 9);
    // 0cb72b  push 7
    X86_AT(c, 0xcb72bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb72d  call 0xbbb5c
    X86_AT(c, 0xcb72du);
    push32(c, 0xcb732u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcb732u);
    X86_TICK(c, 2);
    // 0cb732  add esp, 0xc
    X86_AT(c, 0xcb732u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_cb735:
    X86_TICK(c, 24);
    // 0cb735  pop edi
    X86_AT(c, 0xcb735u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cb736  pop ebx
    X86_AT(c, 0xcb736u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cb737  leave 
    X86_AT(c, 0xcb737u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cb738  ret 
    X86_AT(c, 0xcb738u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcb610u, "ran off the end of a function");
}
void f_000cb73c(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0cb73c  push 7
    X86_AT(c, 0xcb73cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb73e  call 0xbb6b0
    X86_AT(c, 0xcb73eu);
    push32(c, 0xcb743u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xcb743u);
    X86_TICK(c, 14);
    // 0cb743  add esp, 4
    X86_AT(c, 0xcb743u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cb746  cmp dword ptr [0xa4a56], 2
    X86_AT(c, 0xcb746u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x2u, 0, 4);
    // 0cb74d  jne 0xcb7a3
    X86_AT(c, 0xcb74du);
    if (x86_cc(c, 5)) { goto L_cb7a3; }
    X86_TICK(c, 12);
    // 0cb74f  cmp dword ptr [0xa4a66], 0x22
    X86_AT(c, 0xcb74fu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A66u))), 0x22u, 0, 4);
    // 0cb756  jne 0xcb7a3
    X86_AT(c, 0xcb756u);
    if (x86_cc(c, 5)) { goto L_cb7a3; }
    X86_TICK(c, 12);
    // 0cb758  cmp dword ptr [0xa4a76], 0x30
    X86_AT(c, 0xcb758u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A76u))), 0x30u, 0, 4);
    // 0cb75f  jne 0xcb7a3
    X86_AT(c, 0xcb75fu);
    if (x86_cc(c, 5)) { goto L_cb7a3; }
    X86_TICK(c, 12);
    // 0cb761  cmp dword ptr [0xa4a7a], 0x30
    X86_AT(c, 0xcb761u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))), 0x30u, 0, 4);
    // 0cb768  jne 0xcb7a3
    X86_AT(c, 0xcb768u);
    if (x86_cc(c, 5)) { goto L_cb7a3; }
    X86_TICK(c, 9);
    // 0cb76a  push 2
    X86_AT(c, 0xcb76au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cb76c  call 0xb607c
    X86_AT(c, 0xcb76cu);
    push32(c, 0xcb771u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xcb771u);
    X86_TICK(c, 9);
    // 0cb771  push 0xa
    X86_AT(c, 0xcb771u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0cb773  call 0xbebbc
    X86_AT(c, 0xcb773u);
    push32(c, 0xcb778u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xcb778u);
    X86_TICK(c, 11);
    // 0cb778  push 0x7a24
    X86_AT(c, 0xcb778u);
    { uint32_t v = 0x7A24u; push32(c, v); }
    // 0cb77d  push 7
    X86_AT(c, 0xcb77du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb77f  call 0xba428
    X86_AT(c, 0xcb77fu);
    push32(c, 0xcb784u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcb784u);
    X86_TICK(c, 9);
    // 0cb784  push 7
    X86_AT(c, 0xcb784u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb786  call 0xbbb5c
    X86_AT(c, 0xcb786u);
    push32(c, 0xcb78bu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcb78bu);
    X86_TICK(c, 11);
    // 0cb78b  push 0x7a5c
    X86_AT(c, 0xcb78bu);
    { uint32_t v = 0x7A5Cu; push32(c, v); }
    // 0cb790  push 7
    X86_AT(c, 0xcb790u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb792  call 0xba428
    X86_AT(c, 0xcb792u);
    push32(c, 0xcb797u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcb797u);
    X86_TICK(c, 9);
    // 0cb797  push 7
    X86_AT(c, 0xcb797u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb799  call 0xbbb5c
    X86_AT(c, 0xcb799u);
    push32(c, 0xcb79eu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcb79eu);
    X86_TICK(c, 9);
    // 0cb79e  add esp, 0x20
    X86_AT(c, 0xcb79eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0cb7a1  jmp 0xcb7b9
    X86_AT(c, 0xcb7a1u);
    goto L_cb7b9;
L_cb7a3:
    X86_TICK(c, 11);
    // 0cb7a3  push 0x7a98
    X86_AT(c, 0xcb7a3u);
    { uint32_t v = 0x7A98u; push32(c, v); }
    // 0cb7a8  push 7
    X86_AT(c, 0xcb7a8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb7aa  call 0xba428
    X86_AT(c, 0xcb7aau);
    push32(c, 0xcb7afu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcb7afu);
    X86_TICK(c, 9);
    // 0cb7af  push 7
    X86_AT(c, 0xcb7afu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb7b1  call 0xbbb5c
    X86_AT(c, 0xcb7b1u);
    push32(c, 0xcb7b6u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcb7b6u);
    X86_TICK(c, 2);
    // 0cb7b6  add esp, 0xc
    X86_AT(c, 0xcb7b6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_cb7b9:
    X86_TICK(c, 10);
    // 0cb7b9  ret 
    X86_AT(c, 0xcb7b9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcb73cu, "ran off the end of a function");
}
void f_000cb7bc(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0cb7bc  push ebp
    X86_AT(c, 0xcb7bcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cb7bd  mov ebp, esp
    X86_AT(c, 0xcb7bdu);
    c.r[5] = c.r[4];
    // 0cb7bf  sub esp, 8
    X86_AT(c, 0xcb7bfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0cb7c2  push ebx
    X86_AT(c, 0xcb7c2u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cb7c3  push esi
    X86_AT(c, 0xcb7c3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cb7c4  push edi
    X86_AT(c, 0xcb7c4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cb7c5  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xcb7c5u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cb7c8  push 7
    X86_AT(c, 0xcb7c8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb7ca  call 0xbb6b0
    X86_AT(c, 0xcb7cau);
    push32(c, 0xcb7cfu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xcb7cfu);
    X86_TICK(c, 11);
    // 0cb7cf  push 0x7ad0
    X86_AT(c, 0xcb7cfu);
    { uint32_t v = 0x7AD0u; push32(c, v); }
    // 0cb7d4  push 7
    X86_AT(c, 0xcb7d4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb7d6  call 0xba428
    X86_AT(c, 0xcb7d6u);
    push32(c, 0xcb7dbu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcb7dbu);
    X86_TICK(c, 9);
    // 0cb7db  push 7
    X86_AT(c, 0xcb7dbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb7dd  call 0xb7068
    X86_AT(c, 0xcb7ddu);
    push32(c, 0xcb7e2u); x86_call_known(c, 0xb7068u, f_000b7068); X86_RET(c, 0xcb7e2u);
    X86_TICK(c, 12);
    // 0cb7e2  xchg esi, eax
    X86_AT(c, 0xcb7e2u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0cb7e3  add esp, 0x10
    X86_AT(c, 0xcb7e3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0cb7e6  cmp esi, 0xffffffff
    X86_AT(c, 0xcb7e6u);
    (void)x86_sub(c, c.r[6], 0xFFFFFFFFu, 0, 4);
    // 0cb7e9  jne 0xcb7f5
    X86_AT(c, 0xcb7e9u);
    if (x86_cc(c, 5)) { goto L_cb7f5; }
    X86_TICK(c, 9);
    // 0cb7eb  push 0x7af8
    X86_AT(c, 0xcb7ebu);
    { uint32_t v = 0x7AF8u; push32(c, v); }
    // 0cb7f0  jmp 0xcb8c7
    X86_AT(c, 0xcb7f0u);
    goto L_cb8c7;
L_cb7f5:
    X86_TICK(c, 31);
    // 0cb7f5  mov eax, dword ptr [0xa4a76]
    X86_AT(c, 0xcb7f5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A76u)));
    // 0cb7fa  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xcb7fau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0cb7fd  mov eax, dword ptr [0xa4a7a]
    X86_AT(c, 0xcb7fdu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au)));
    // 0cb802  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xcb802u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0cb805  push 1
    X86_AT(c, 0xcb805u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cb807  push esi
    X86_AT(c, 0xcb807u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cb808  lea eax, [ebp - 8]
    X86_AT(c, 0xcb808u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0cb80b  push eax
    X86_AT(c, 0xcb80bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cb80c  lea ecx, [ebp - 4]
    X86_AT(c, 0xcb80cu);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0cb80f  push ecx
    X86_AT(c, 0xcb80fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0cb810  call 0xc7248
    X86_AT(c, 0xcb810u);
    push32(c, 0xcb815u); x86_call_known(c, 0xc7248u, f_000c7248); X86_RET(c, 0xcb815u);
    X86_TICK(c, 17);
    // 0cb815  push dword ptr [ebp - 8]
    X86_AT(c, 0xcb815u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0cb818  push dword ptr [ebp - 4]
    X86_AT(c, 0xcb818u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0cb81b  call 0xc735c
    X86_AT(c, 0xcb81bu);
    push32(c, 0xcb820u); x86_call_known(c, 0xc735cu, f_000c735c); X86_RET(c, 0xcb820u);
    X86_TICK(c, 12);
    // 0cb820  xchg ebx, eax
    X86_AT(c, 0xcb820u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0cb821  add esp, 0x18
    X86_AT(c, 0xcb821u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0cb824  cmp ebx, 0xffffffff
    X86_AT(c, 0xcb824u);
    (void)x86_sub(c, c.r[3], 0xFFFFFFFFu, 0, 4);
    // 0cb827  je 0xcb8c2
    X86_AT(c, 0xcb827u);
    if (x86_cc(c, 4)) { goto L_cb8c2; }
    X86_TICK(c, 12);
    // 0cb82d  cmp byte ptr [ebx + 0xa5ce8], 0x89
    X86_AT(c, 0xcb82du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xA5CE8u))), 0x89u, 0, 1);
    // 0cb834  jne 0xcb8c2
    X86_AT(c, 0xcb834u);
    if (x86_cc(c, 5)) { goto L_cb8c2; }
    X86_TICK(c, 23);
    // 0cb83a  mov eax, edi
    X86_AT(c, 0xcb83au);
    c.r[0] = c.r[7];
    // 0cb83c  lea edx, [eax + eax*2]
    X86_AT(c, 0xcb83cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cb83f  shl edx, 5
    X86_AT(c, 0xcb83fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0cb842  add edx, eax
    X86_AT(c, 0xcb842u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cb844  lea edx, [eax + edx*2]
    X86_AT(c, 0xcb844u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0cb847  cmp dword ptr [edx + 0xa4ae9], 0x64
    X86_AT(c, 0xcb847u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AE9u))), 0x64u, 0, 4);
    // 0cb84e  jge 0xcb85e
    X86_AT(c, 0xcb84eu);
    if (x86_cc(c, 13)) { goto L_cb85e; }
    X86_TICK(c, 9);
    // 0cb850  push 0
    X86_AT(c, 0xcb850u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cb852  call 0xb607c
    X86_AT(c, 0xcb852u);
    push32(c, 0xcb857u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xcb857u);
    X86_TICK(c, 9);
    // 0cb857  push 0x7b10
    X86_AT(c, 0xcb857u);
    { uint32_t v = 0x7B10u; push32(c, v); }
    // 0cb85c  jmp 0xcb88c
    X86_AT(c, 0xcb85cu);
    goto L_cb88c;
L_cb85e:
    X86_TICK(c, 27);
    // 0cb85e  mov eax, edi
    X86_AT(c, 0xcb85eu);
    c.r[0] = c.r[7];
    // 0cb860  lea edx, [eax + eax*2]
    X86_AT(c, 0xcb860u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cb863  shl edx, 5
    X86_AT(c, 0xcb863u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0cb866  add edx, eax
    X86_AT(c, 0xcb866u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cb868  lea edx, [eax + edx*2]
    X86_AT(c, 0xcb868u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0cb86b  sub dword ptr [edx + 0xa4ae9], 0x64
    X86_AT(c, 0xcb86bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AE9u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, 0x64u, 0, 4)); }
    // 0cb872  push 9
    X86_AT(c, 0xcb872u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0cb874  call 0xb61b4
    X86_AT(c, 0xcb874u);
    push32(c, 0xcb879u); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xcb879u);
    X86_TICK(c, 9);
    // 0cb879  add esp, 4
    X86_AT(c, 0xcb879u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cb87c  and eax, eax
    X86_AT(c, 0xcb87cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cb87e  jne 0xcb89c
    X86_AT(c, 0xcb87eu);
    if (x86_cc(c, 5)) { goto L_cb89c; }
    X86_TICK(c, 9);
    // 0cb880  push 3
    X86_AT(c, 0xcb880u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0cb882  call 0xb607c
    X86_AT(c, 0xcb882u);
    push32(c, 0xcb887u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xcb887u);
    X86_TICK(c, 2);
    // 0cb887  push 0x7b38
    X86_AT(c, 0xcb887u);
    { uint32_t v = 0x7B38u; push32(c, v); }
L_cb88c:
    X86_TICK(c, 9);
    // 0cb88c  push 7
    X86_AT(c, 0xcb88cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb88e  call 0xba428
    X86_AT(c, 0xcb88eu);
    push32(c, 0xcb893u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcb893u);
    X86_TICK(c, 9);
    // 0cb893  push 7
    X86_AT(c, 0xcb893u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb895  call 0xbbb5c
    X86_AT(c, 0xcb895u);
    push32(c, 0xcb89au); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcb89au);
    X86_TICK(c, 7);
    // 0cb89a  jmp 0xcb8bd
    X86_AT(c, 0xcb89au);
    goto L_cb8bd;
L_cb89c:
    X86_TICK(c, 11);
    // 0cb89c  push 0x7b60
    X86_AT(c, 0xcb89cu);
    { uint32_t v = 0x7B60u; push32(c, v); }
    // 0cb8a1  push 7
    X86_AT(c, 0xcb8a1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb8a3  call 0xba428
    X86_AT(c, 0xcb8a3u);
    push32(c, 0xcb8a8u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcb8a8u);
    X86_TICK(c, 9);
    // 0cb8a8  push 7
    X86_AT(c, 0xcb8a8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb8aa  call 0xbbb5c
    X86_AT(c, 0xcb8aau);
    push32(c, 0xcb8afu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcb8afu);
    X86_TICK(c, 13);
    // 0cb8af  sub eax, eax
    X86_AT(c, 0xcb8afu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0cb8b1  mov byte ptr [ebx + 0xa5ce8], al
    X86_AT(c, 0xcb8b1u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xA5CE8u)), g8(c, 0));
    // 0cb8b7  push eax
    X86_AT(c, 0xcb8b7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cb8b8  call 0xb61d4
    X86_AT(c, 0xcb8b8u);
    push32(c, 0xcb8bdu); x86_call_known(c, 0xb61d4u, f_000b61d4); X86_RET(c, 0xcb8bdu);
L_cb8bd:
    X86_TICK(c, 9);
    // 0cb8bd  add esp, 0x10
    X86_AT(c, 0xcb8bdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0cb8c0  jmp 0xcb8d8
    X86_AT(c, 0xcb8c0u);
    goto L_cb8d8;
L_cb8c2:
    X86_TICK(c, 2);
    // 0cb8c2  push 0x7b94
    X86_AT(c, 0xcb8c2u);
    { uint32_t v = 0x7B94u; push32(c, v); }
L_cb8c7:
    X86_TICK(c, 9);
    // 0cb8c7  push 7
    X86_AT(c, 0xcb8c7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb8c9  call 0xba428
    X86_AT(c, 0xcb8c9u);
    push32(c, 0xcb8ceu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcb8ceu);
    X86_TICK(c, 9);
    // 0cb8ce  push 7
    X86_AT(c, 0xcb8ceu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb8d0  call 0xbbb5c
    X86_AT(c, 0xcb8d0u);
    push32(c, 0xcb8d5u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcb8d5u);
    X86_TICK(c, 2);
    // 0cb8d5  add esp, 0xc
    X86_AT(c, 0xcb8d5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_cb8d8:
    X86_TICK(c, 28);
    // 0cb8d8  pop edi
    X86_AT(c, 0xcb8d8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cb8d9  pop esi
    X86_AT(c, 0xcb8d9u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cb8da  pop ebx
    X86_AT(c, 0xcb8dau);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cb8db  leave 
    X86_AT(c, 0xcb8dbu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cb8dc  ret 
    X86_AT(c, 0xcb8dcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcb7bcu, "ran off the end of a function");
}
void f_000cb8e0(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0cb8e0  push ebp
    X86_AT(c, 0xcb8e0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cb8e1  mov ebp, esp
    X86_AT(c, 0xcb8e1u);
    c.r[5] = c.r[4];
    // 0cb8e3  push edi
    X86_AT(c, 0xcb8e3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cb8e4  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xcb8e4u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cb8e7  push dword ptr [0xa4a7a]
    X86_AT(c, 0xcb8e7u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))); push32(c, v); }
    // 0cb8ed  push dword ptr [0xa4a76]
    X86_AT(c, 0xcb8edu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A76u))); push32(c, v); }
    // 0cb8f3  call 0xc84fc
    X86_AT(c, 0xcb8f3u);
    push32(c, 0xcb8f8u); x86_call_known(c, 0xc84fcu, f_000c84fc); X86_RET(c, 0xcb8f8u);
    X86_TICK(c, 9);
    // 0cb8f8  add esp, 8
    X86_AT(c, 0xcb8f8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cb8fb  and al, al
    X86_AT(c, 0xcb8fbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0cb8fd  je 0xcb91a
    X86_AT(c, 0xcb8fdu);
    if (x86_cc(c, 4)) { goto L_cb91a; }
    X86_TICK(c, 11);
    // 0cb8ff  push 0x7bbc
    X86_AT(c, 0xcb8ffu);
    { uint32_t v = 0x7BBCu; push32(c, v); }
    // 0cb904  push 7
    X86_AT(c, 0xcb904u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb906  call 0xba428
    X86_AT(c, 0xcb906u);
    push32(c, 0xcb90bu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcb90bu);
    X86_TICK(c, 9);
    // 0cb90b  push 7
    X86_AT(c, 0xcb90bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb90d  call 0xbbb5c
    X86_AT(c, 0xcb90du);
    push32(c, 0xcb912u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcb912u);
    X86_TICK(c, 9);
    // 0cb912  add esp, 0xc
    X86_AT(c, 0xcb912u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cb915  jmp 0xcb9c6
    X86_AT(c, 0xcb915u);
    goto L_cb9c6;
L_cb91a:
    X86_TICK(c, 15);
    // 0cb91a  mov edx, dword ptr [0xa4a76]
    X86_AT(c, 0xcb91au);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xA4A76u)));
    // 0cb920  mov eax, edx
    X86_AT(c, 0xcb920u);
    c.r[0] = c.r[2];
    // 0cb922  and edx, 3
    X86_AT(c, 0xcb922u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x3u, 4); }
    // 0cb928  and eax, eax
    X86_AT(c, 0xcb928u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cb92a  jge 0xcb92f
    X86_AT(c, 0xcb92au);
    if (x86_cc(c, 13)) { goto L_cb92f; }
    X86_TICK(c, 2);
    // 0cb92c  sub edx, 4
    X86_AT(c, 0xcb92cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x4u, 0, 4); }
L_cb92f:
    X86_TICK(c, 7);
    // 0cb92f  cmp edx, 3
    X86_AT(c, 0xcb92fu);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0cb932  ja 0xcb9a2
    X86_AT(c, 0xcb932u);
    if (x86_cc(c, 7)) { goto L_cb9a2; }
    X86_TICK(c, 7);
    // 0cb934  jmp dword ptr cs:[edx*4 + 0xcb93c]
    X86_AT(c, 0xcb934u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xCB93Cu)));
      switch (t) {
      case 0xcb94cu: goto L_cb94c;
      case 0xcb962u: goto L_cb962;
      case 0xcb978u: goto L_cb978;
      case 0xcb98eu: goto L_cb98e;
      default: x86_jump(c, t); return; } }
L_cb94c:
    X86_TICK(c, 20);
    // 0cb94c  mov eax, edi
    X86_AT(c, 0xcb94cu);
    c.r[0] = c.r[7];
    // 0cb94e  lea edx, [eax + eax*2]
    X86_AT(c, 0xcb94eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cb951  shl edx, 5
    X86_AT(c, 0xcb951u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0cb954  add edx, eax
    X86_AT(c, 0xcb954u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cb956  lea edx, [eax + edx*2]
    X86_AT(c, 0xcb956u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0cb959  mov byte ptr [edx + 0xa4ab1], 1
    X86_AT(c, 0xcb959u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AB1u)), 0x1u);
    // 0cb960  jmp 0xcb9a2
    X86_AT(c, 0xcb960u);
    goto L_cb9a2;
L_cb962:
    X86_TICK(c, 20);
    // 0cb962  mov eax, edi
    X86_AT(c, 0xcb962u);
    c.r[0] = c.r[7];
    // 0cb964  lea edx, [eax + eax*2]
    X86_AT(c, 0xcb964u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cb967  shl edx, 5
    X86_AT(c, 0xcb967u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0cb96a  add edx, eax
    X86_AT(c, 0xcb96au);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cb96c  lea edx, [eax + edx*2]
    X86_AT(c, 0xcb96cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0cb96f  mov byte ptr [edx + 0xa4ab4], 1
    X86_AT(c, 0xcb96fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AB4u)), 0x1u);
    // 0cb976  jmp 0xcb9a2
    X86_AT(c, 0xcb976u);
    goto L_cb9a2;
L_cb978:
    X86_TICK(c, 20);
    // 0cb978  mov eax, edi
    X86_AT(c, 0xcb978u);
    c.r[0] = c.r[7];
    // 0cb97a  lea edx, [eax + eax*2]
    X86_AT(c, 0xcb97au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cb97d  shl edx, 5
    X86_AT(c, 0xcb97du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0cb980  add edx, eax
    X86_AT(c, 0xcb980u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cb982  lea edx, [eax + edx*2]
    X86_AT(c, 0xcb982u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0cb985  mov byte ptr [edx + 0xa4ab3], 1
    X86_AT(c, 0xcb985u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AB3u)), 0x1u);
    // 0cb98c  jmp 0xcb9a2
    X86_AT(c, 0xcb98cu);
    goto L_cb9a2;
L_cb98e:
    X86_TICK(c, 13);
    // 0cb98e  mov eax, edi
    X86_AT(c, 0xcb98eu);
    c.r[0] = c.r[7];
    // 0cb990  lea edx, [eax + eax*2]
    X86_AT(c, 0xcb990u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cb993  shl edx, 5
    X86_AT(c, 0xcb993u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0cb996  add edx, eax
    X86_AT(c, 0xcb996u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cb998  lea edx, [eax + edx*2]
    X86_AT(c, 0xcb998u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0cb99b  mov byte ptr [edx + 0xa4ab2], 1
    X86_AT(c, 0xcb99bu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AB2u)), 0x1u);
L_cb9a2:
    X86_TICK(c, 9);
    // 0cb9a2  push 0xb
    X86_AT(c, 0xcb9a2u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0cb9a4  call 0xb607c
    X86_AT(c, 0xcb9a4u);
    push32(c, 0xcb9a9u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xcb9a9u);
    X86_TICK(c, 9);
    // 0cb9a9  push 5
    X86_AT(c, 0xcb9a9u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0cb9ab  call 0xbebbc
    X86_AT(c, 0xcb9abu);
    push32(c, 0xcb9b0u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xcb9b0u);
    X86_TICK(c, 11);
    // 0cb9b0  push 0x7be4
    X86_AT(c, 0xcb9b0u);
    { uint32_t v = 0x7BE4u; push32(c, v); }
    // 0cb9b5  push 7
    X86_AT(c, 0xcb9b5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb9b7  call 0xba428
    X86_AT(c, 0xcb9b7u);
    push32(c, 0xcb9bcu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcb9bcu);
    X86_TICK(c, 9);
    // 0cb9bc  push 7
    X86_AT(c, 0xcb9bcu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb9be  call 0xbbb5c
    X86_AT(c, 0xcb9beu);
    push32(c, 0xcb9c3u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcb9c3u);
    X86_TICK(c, 2);
    // 0cb9c3  add esp, 0x14
    X86_AT(c, 0xcb9c3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_cb9c6:
    X86_TICK(c, 20);
    // 0cb9c6  pop edi
    X86_AT(c, 0xcb9c6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cb9c7  leave 
    X86_AT(c, 0xcb9c7u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cb9c8  ret 
    X86_AT(c, 0xcb9c8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcb8e0u, "ran off the end of a function");
}
void f_000cb9cc(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0cb9cc  push ebp
    X86_AT(c, 0xcb9ccu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cb9cd  mov ebp, esp
    X86_AT(c, 0xcb9cdu);
    c.r[5] = c.r[4];
    // 0cb9cf  sub esp, 0xc
    X86_AT(c, 0xcb9cfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0cb9d2  push ebx
    X86_AT(c, 0xcb9d2u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cb9d3  push esi
    X86_AT(c, 0xcb9d3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cb9d4  push edi
    X86_AT(c, 0xcb9d4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cb9d5  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xcb9d5u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cb9d8  push 7
    X86_AT(c, 0xcb9d8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb9da  call 0xbb6b0
    X86_AT(c, 0xcb9dau);
    push32(c, 0xcb9dfu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xcb9dfu);
    X86_TICK(c, 9);
    // 0cb9df  push 7
    X86_AT(c, 0xcb9dfu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cb9e1  call 0xb7068
    X86_AT(c, 0xcb9e1u);
    push32(c, 0xcb9e6u); x86_call_known(c, 0xb7068u, f_000b7068); X86_RET(c, 0xcb9e6u);
    X86_TICK(c, 12);
    // 0cb9e6  xchg esi, eax
    X86_AT(c, 0xcb9e6u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0cb9e7  add esp, 8
    X86_AT(c, 0xcb9e7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cb9ea  cmp esi, 0xffffffff
    X86_AT(c, 0xcb9eau);
    (void)x86_sub(c, c.r[6], 0xFFFFFFFFu, 0, 4);
    // 0cb9ed  jne 0xcb9f9
    X86_AT(c, 0xcb9edu);
    if (x86_cc(c, 5)) { goto L_cb9f9; }
    X86_TICK(c, 9);
    // 0cb9ef  push 0x7c58
    X86_AT(c, 0xcb9efu);
    { uint32_t v = 0x7C58u; push32(c, v); }
    // 0cb9f4  jmp 0xcbaed
    X86_AT(c, 0xcb9f4u);
    goto L_cbaed;
L_cb9f9:
    X86_TICK(c, 31);
    // 0cb9f9  mov eax, dword ptr [0xa4a76]
    X86_AT(c, 0xcb9f9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A76u)));
    // 0cb9fe  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xcb9feu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0cba01  mov eax, dword ptr [0xa4a7a]
    X86_AT(c, 0xcba01u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au)));
    // 0cba06  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xcba06u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0cba09  push 1
    X86_AT(c, 0xcba09u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cba0b  push esi
    X86_AT(c, 0xcba0bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cba0c  lea eax, [ebp - 8]
    X86_AT(c, 0xcba0cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0cba0f  push eax
    X86_AT(c, 0xcba0fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cba10  lea ecx, [ebp - 4]
    X86_AT(c, 0xcba10u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0cba13  push ecx
    X86_AT(c, 0xcba13u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0cba14  call 0xc7248
    X86_AT(c, 0xcba14u);
    push32(c, 0xcba19u); x86_call_known(c, 0xc7248u, f_000c7248); X86_RET(c, 0xcba19u);
    X86_TICK(c, 17);
    // 0cba19  push dword ptr [ebp - 8]
    X86_AT(c, 0xcba19u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0cba1c  push dword ptr [ebp - 4]
    X86_AT(c, 0xcba1cu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0cba1f  call 0xc8474
    X86_AT(c, 0xcba1fu);
    push32(c, 0xcba24u); x86_call_known(c, 0xc8474u, f_000c8474); X86_RET(c, 0xcba24u);
    X86_TICK(c, 14);
    // 0cba24  movzx eax, al
    X86_AT(c, 0xcba24u);
    c.r[0] = g8(c, 0);
    // 0cba27  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xcba27u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0cba2a  add esp, 0x18
    X86_AT(c, 0xcba2au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0cba2d  cmp eax, 0x97
    X86_AT(c, 0xcba2du);
    (void)x86_sub(c, c.r[0], 0x97u, 0, 4);
    // 0cba32  je 0xcba3e
    X86_AT(c, 0xcba32u);
    if (x86_cc(c, 4)) { goto L_cba3e; }
    X86_TICK(c, 9);
    // 0cba34  push 0x7c70
    X86_AT(c, 0xcba34u);
    { uint32_t v = 0x7C70u; push32(c, v); }
    // 0cba39  jmp 0xcbaed
    X86_AT(c, 0xcba39u);
    goto L_cbaed;
L_cba3e:
    X86_TICK(c, 9);
    // 0cba3e  push 7
    X86_AT(c, 0xcba3eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cba40  call 0xbb6b0
    X86_AT(c, 0xcba40u);
    push32(c, 0xcba45u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xcba45u);
    X86_TICK(c, 11);
    // 0cba45  push 0x7c98
    X86_AT(c, 0xcba45u);
    { uint32_t v = 0x7C98u; push32(c, v); }
    // 0cba4a  push 7
    X86_AT(c, 0xcba4au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cba4c  call 0xba428
    X86_AT(c, 0xcba4cu);
    push32(c, 0xcba51u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcba51u);
    X86_TICK(c, 9);
    // 0cba51  push 7
    X86_AT(c, 0xcba51u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cba53  call 0xbbb5c
    X86_AT(c, 0xcba53u);
    push32(c, 0xcba58u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcba58u);
    X86_TICK(c, 11);
    // 0cba58  push 0x7cd0
    X86_AT(c, 0xcba58u);
    { uint32_t v = 0x7CD0u; push32(c, v); }
    // 0cba5d  push 7
    X86_AT(c, 0xcba5du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cba5f  call 0xba428
    X86_AT(c, 0xcba5fu);
    push32(c, 0xcba64u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcba64u);
    X86_TICK(c, 9);
    // 0cba64  push 7
    X86_AT(c, 0xcba64u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cba66  call 0xbbb5c
    X86_AT(c, 0xcba66u);
    push32(c, 0xcba6bu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcba6bu);
    X86_TICK(c, 11);
    // 0cba6b  push 0x7d28
    X86_AT(c, 0xcba6bu);
    { uint32_t v = 0x7D28u; push32(c, v); }
    // 0cba70  push 7
    X86_AT(c, 0xcba70u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cba72  call 0xba428
    X86_AT(c, 0xcba72u);
    push32(c, 0xcba77u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcba77u);
    X86_TICK(c, 9);
    // 0cba77  push 7
    X86_AT(c, 0xcba77u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cba79  call 0xbbb5c
    X86_AT(c, 0xcba79u);
    push32(c, 0xcba7eu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcba7eu);
    X86_TICK(c, 11);
    // 0cba7e  push 0x7d70
    X86_AT(c, 0xcba7eu);
    { uint32_t v = 0x7D70u; push32(c, v); }
    // 0cba83  push 7
    X86_AT(c, 0xcba83u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cba85  call 0xba428
    X86_AT(c, 0xcba85u);
    push32(c, 0xcba8au); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcba8au);
    X86_TICK(c, 9);
    // 0cba8a  push 7
    X86_AT(c, 0xcba8au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cba8c  call 0xbbb5c
    X86_AT(c, 0xcba8cu);
    push32(c, 0xcba91u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcba91u);
    X86_TICK(c, 2);
    // 0cba91  add esp, 0x34
    X86_AT(c, 0xcba91u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
L_cba94:
    X86_TICK(c, 9);
    // 0cba94  push 7
    X86_AT(c, 0xcba94u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cba96  call 0xb9514
    X86_AT(c, 0xcba96u);
    push32(c, 0xcba9bu); x86_call_known(c, 0xb9514u, f_000b9514); X86_RET(c, 0xcba9bu);
    X86_TICK(c, 12);
    // 0cba9b  xchg ebx, eax
    X86_AT(c, 0xcba9bu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0cba9c  add esp, 4
    X86_AT(c, 0xcba9cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cba9f  cmp bl, 1
    X86_AT(c, 0xcba9fu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0cbaa2  je 0xcbacd
    X86_AT(c, 0xcbaa2u);
    if (x86_cc(c, 4)) { goto L_cbacd; }
    X86_TICK(c, 7);
    // 0cbaa4  cmp bl, 0x44
    X86_AT(c, 0xcbaa4u);
    (void)x86_sub(c, g8(c, 3), 0x44u, 0, 1);
    // 0cbaa7  je 0xcbacd
    X86_AT(c, 0xcbaa7u);
    if (x86_cc(c, 4)) { goto L_cbacd; }
    X86_TICK(c, 7);
    // 0cbaa9  cmp bl, 0x53
    X86_AT(c, 0xcbaa9u);
    (void)x86_sub(c, g8(c, 3), 0x53u, 0, 1);
    // 0cbaac  je 0xcbacd
    X86_AT(c, 0xcbaacu);
    if (x86_cc(c, 4)) { goto L_cbacd; }
    X86_TICK(c, 7);
    // 0cbaae  cmp bl, 0x4c
    X86_AT(c, 0xcbaaeu);
    (void)x86_sub(c, g8(c, 3), 0x4Cu, 0, 1);
    // 0cbab1  je 0xcbacd
    X86_AT(c, 0xcbab1u);
    if (x86_cc(c, 4)) { goto L_cbacd; }
    X86_TICK(c, 7);
    // 0cbab3  cmp bl, 0x4d
    X86_AT(c, 0xcbab3u);
    (void)x86_sub(c, g8(c, 3), 0x4Du, 0, 1);
    // 0cbab6  je 0xcbacd
    X86_AT(c, 0xcbab6u);
    if (x86_cc(c, 4)) { goto L_cbacd; }
    X86_TICK(c, 7);
    // 0cbab8  cmp bl, 0x51
    X86_AT(c, 0xcbab8u);
    (void)x86_sub(c, g8(c, 3), 0x51u, 0, 1);
    // 0cbabb  je 0xcbacd
    X86_AT(c, 0xcbabbu);
    if (x86_cc(c, 4)) { goto L_cbacd; }
    X86_TICK(c, 7);
    // 0cbabd  and bl, bl
    X86_AT(c, 0xcbabdu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0cbabf  je 0xcba94
    X86_AT(c, 0xcbabfu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xcba94u); goto L_cba94; }
    X86_TICK(c, 9);
    // 0cbac1  push 3
    X86_AT(c, 0xcbac1u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0cbac3  call 0xb607c
    X86_AT(c, 0xcbac3u);
    push32(c, 0xcbac8u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xcbac8u);
    X86_TICK(c, 9);
    // 0cbac8  add esp, 4
    X86_AT(c, 0xcbac8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cbacb  jmp 0xcba94
    X86_AT(c, 0xcbacbu);
    X86_POLL(c, 0xcba94u); goto L_cba94;
L_cbacd:
    X86_TICK(c, 9);
    // 0cbacd  push 7
    X86_AT(c, 0xcbacdu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbacf  call 0xbbb5c
    X86_AT(c, 0xcbacfu);
    push32(c, 0xcbad4u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcbad4u);
    X86_TICK(c, 9);
    // 0cbad4  push 7
    X86_AT(c, 0xcbad4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbad6  call 0xbb6b0
    X86_AT(c, 0xcbad6u);
    push32(c, 0xcbadbu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xcbadbu);
    X86_TICK(c, 9);
    // 0cbadb  add esp, 8
    X86_AT(c, 0xcbadbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cbade  cmp bl, 1
    X86_AT(c, 0xcbadeu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0cbae1  je 0xcbae8
    X86_AT(c, 0xcbae1u);
    if (x86_cc(c, 4)) { goto L_cbae8; }
    X86_TICK(c, 7);
    // 0cbae3  cmp bl, 0x51
    X86_AT(c, 0xcbae3u);
    (void)x86_sub(c, g8(c, 3), 0x51u, 0, 1);
    // 0cbae6  jne 0xcbb03
    X86_AT(c, 0xcbae6u);
    if (x86_cc(c, 5)) { goto L_cbb03; }
L_cbae8:
    X86_TICK(c, 2);
    // 0cbae8  push 0x7d94
    X86_AT(c, 0xcbae8u);
    { uint32_t v = 0x7D94u; push32(c, v); }
L_cbaed:
    X86_TICK(c, 9);
    // 0cbaed  push 7
    X86_AT(c, 0xcbaedu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbaef  call 0xba428
    X86_AT(c, 0xcbaefu);
    push32(c, 0xcbaf4u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcbaf4u);
    X86_TICK(c, 9);
    // 0cbaf4  push 7
    X86_AT(c, 0xcbaf4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbaf6  call 0xbbb5c
    X86_AT(c, 0xcbaf6u);
    push32(c, 0xcbafbu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcbafbu);
    X86_TICK(c, 9);
    // 0cbafb  add esp, 0xc
    X86_AT(c, 0xcbafbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cbafe  jmp 0xcbce0
    X86_AT(c, 0xcbafeu);
    goto L_cbce0;
L_cbb03:
    X86_TICK(c, 11);
    // 0cbb03  push 0xb
    X86_AT(c, 0xcbb03u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0cbb05  push 7
    X86_AT(c, 0xcbb05u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbb07  call 0xbc3ec
    X86_AT(c, 0xcbb07u);
    push32(c, 0xcbb0cu); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xcbb0cu);
    X86_TICK(c, 16);
    // 0cbb0c  sub esi, esi
    X86_AT(c, 0xcbb0cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0cbb0e  add esp, 8
    X86_AT(c, 0xcbb0eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cbb11  movzx edx, bl
    X86_AT(c, 0xcbb11u);
    c.r[2] = g8(c, 3);
    // 0cbb14  sub edx, 0x44
    X86_AT(c, 0xcbb14u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x44u, 0, 4); }
    // 0cbb17  cmp edx, 0xf
    X86_AT(c, 0xcbb17u);
    (void)x86_sub(c, c.r[2], 0xFu, 0, 4);
    // 0cbb1a  ja 0xcbc47
    X86_AT(c, 0xcbb1au);
    if (x86_cc(c, 7)) { goto L_cbc47; }
    X86_TICK(c, 7);
    // 0cbb20  jmp dword ptr cs:[edx*4 + 0xcbb28]
    X86_AT(c, 0xcbb20u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xCBB28u)));
      switch (t) {
      case 0xcbb68u: goto L_cbb68;
      case 0xcbba1u: goto L_cbba1;
      case 0xcbbdau: goto L_cbbda;
      case 0xcbc0fu: goto L_cbc0f;
      case 0xcbc47u: goto L_cbc47;
      default: x86_jump(c, t); return; } }
L_cbb68:
    X86_TICK(c, 11);
    // 0cbb68  push 0x7dac
    X86_AT(c, 0xcbb68u);
    { uint32_t v = 0x7DACu; push32(c, v); }
    // 0cbb6d  push 7
    X86_AT(c, 0xcbb6du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbb6f  call 0xba428
    X86_AT(c, 0xcbb6fu);
    push32(c, 0xcbb74u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcbb74u);
    X86_TICK(c, 29);
    // 0cbb74  sub eax, eax
    X86_AT(c, 0xcbb74u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0cbb76  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xcbb76u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0cbb79  mov edx, edi
    X86_AT(c, 0xcbb79u);
    c.r[2] = c.r[7];
    // 0cbb7b  lea ecx, [edx + edx*2]
    X86_AT(c, 0xcbb7bu);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0cbb7e  shl ecx, 5
    X86_AT(c, 0xcbb7eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[1] = r; }
    // 0cbb81  add ecx, edx
    X86_AT(c, 0xcbb81u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[2], 0, 4); }
    // 0cbb83  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xcbb83u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0cbb86  add esp, 8
    X86_AT(c, 0xcbb86u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cbb89  cmp byte ptr [ecx + 0xa4ab4], 1
    X86_AT(c, 0xcbb89u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[1] + 0xA4AB4u))), 0x1u, 0, 1);
    // 0cbb90  jne 0xcbc47
    X86_AT(c, 0xcbb90u);
    if (x86_cc(c, 5)) { goto L_cbc47; }
    X86_TICK(c, 9);
    // 0cbb96  mov byte ptr [ecx + 0xa4ab4], al
    X86_AT(c, 0xcbb96u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0xA4AB4u)), g8(c, 0));
    // 0cbb9c  jmp 0xcbc42
    X86_AT(c, 0xcbb9cu);
    goto L_cbc42;
L_cbba1:
    X86_TICK(c, 11);
    // 0cbba1  push 0x7dc8
    X86_AT(c, 0xcbba1u);
    { uint32_t v = 0x7DC8u; push32(c, v); }
    // 0cbba6  push 7
    X86_AT(c, 0xcbba6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbba8  call 0xba428
    X86_AT(c, 0xcbba8u);
    push32(c, 0xcbbadu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcbbadu);
    X86_TICK(c, 27);
    // 0cbbad  mov dword ptr [ebp - 0xc], 1
    X86_AT(c, 0xcbbadu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x1u);
    // 0cbbb4  mov eax, edi
    X86_AT(c, 0xcbbb4u);
    c.r[0] = c.r[7];
    // 0cbbb6  lea edx, [eax + eax*2]
    X86_AT(c, 0xcbbb6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cbbb9  shl edx, 5
    X86_AT(c, 0xcbbb9u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0cbbbc  add edx, eax
    X86_AT(c, 0xcbbbcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cbbbe  lea edx, [eax + edx*2]
    X86_AT(c, 0xcbbbeu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0cbbc1  add esp, 8
    X86_AT(c, 0xcbbc1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cbbc4  cmp byte ptr [edx + 0xa4ab3], 1
    X86_AT(c, 0xcbbc4u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AB3u))), 0x1u, 0, 1);
    // 0cbbcb  jne 0xcbc47
    X86_AT(c, 0xcbbcbu);
    if (x86_cc(c, 5)) { goto L_cbc47; }
    X86_TICK(c, 9);
    // 0cbbd1  mov byte ptr [edx + 0xa4ab3], 0
    X86_AT(c, 0xcbbd1u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AB3u)), 0x0u);
    // 0cbbd8  jmp 0xcbc42
    X86_AT(c, 0xcbbd8u);
    goto L_cbc42;
L_cbbda:
    X86_TICK(c, 11);
    // 0cbbda  push 0x7de4
    X86_AT(c, 0xcbbdau);
    { uint32_t v = 0x7DE4u; push32(c, v); }
    // 0cbbdf  push 7
    X86_AT(c, 0xcbbdfu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbbe1  call 0xba428
    X86_AT(c, 0xcbbe1u);
    push32(c, 0xcbbe6u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcbbe6u);
    X86_TICK(c, 27);
    // 0cbbe6  mov dword ptr [ebp - 0xc], 2
    X86_AT(c, 0xcbbe6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x2u);
    // 0cbbed  mov eax, edi
    X86_AT(c, 0xcbbedu);
    c.r[0] = c.r[7];
    // 0cbbef  lea edx, [eax + eax*2]
    X86_AT(c, 0xcbbefu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cbbf2  shl edx, 5
    X86_AT(c, 0xcbbf2u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0cbbf5  add edx, eax
    X86_AT(c, 0xcbbf5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cbbf7  lea edx, [eax + edx*2]
    X86_AT(c, 0xcbbf7u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0cbbfa  add esp, 8
    X86_AT(c, 0xcbbfau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cbbfd  cmp byte ptr [edx + 0xa4ab2], 1
    X86_AT(c, 0xcbbfdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AB2u))), 0x1u, 0, 1);
    // 0cbc04  jne 0xcbc47
    X86_AT(c, 0xcbc04u);
    if (x86_cc(c, 5)) { goto L_cbc47; }
    X86_TICK(c, 9);
    // 0cbc06  mov byte ptr [edx + 0xa4ab2], 0
    X86_AT(c, 0xcbc06u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AB2u)), 0x0u);
    // 0cbc0d  jmp 0xcbc42
    X86_AT(c, 0xcbc0du);
    goto L_cbc42;
L_cbc0f:
    X86_TICK(c, 11);
    // 0cbc0f  push 0x7e00
    X86_AT(c, 0xcbc0fu);
    { uint32_t v = 0x7E00u; push32(c, v); }
    // 0cbc14  push 7
    X86_AT(c, 0xcbc14u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbc16  call 0xba428
    X86_AT(c, 0xcbc16u);
    push32(c, 0xcbc1bu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcbc1bu);
    X86_TICK(c, 27);
    // 0cbc1b  mov dword ptr [ebp - 0xc], 3
    X86_AT(c, 0xcbc1bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x3u);
    // 0cbc22  mov eax, edi
    X86_AT(c, 0xcbc22u);
    c.r[0] = c.r[7];
    // 0cbc24  lea edx, [eax + eax*2]
    X86_AT(c, 0xcbc24u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cbc27  shl edx, 5
    X86_AT(c, 0xcbc27u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0cbc2a  add edx, eax
    X86_AT(c, 0xcbc2au);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cbc2c  lea edx, [eax + edx*2]
    X86_AT(c, 0xcbc2cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0cbc2f  add esp, 8
    X86_AT(c, 0xcbc2fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cbc32  cmp byte ptr [edx + 0xa4ab1], 1
    X86_AT(c, 0xcbc32u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AB1u))), 0x1u, 0, 1);
    // 0cbc39  jne 0xcbc47
    X86_AT(c, 0xcbc39u);
    if (x86_cc(c, 5)) { goto L_cbc47; }
    X86_TICK(c, 2);
    // 0cbc3b  mov byte ptr [edx + 0xa4ab1], 0
    X86_AT(c, 0xcbc3bu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AB1u)), 0x0u);
L_cbc42:
    X86_TICK(c, 2);
    // 0cbc42  mov esi, 1
    X86_AT(c, 0xcbc42u);
    c.r[6] = 0x1u;
L_cbc47:
    X86_TICK(c, 11);
    // 0cbc47  push 0xf
    X86_AT(c, 0xcbc47u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cbc49  push 7
    X86_AT(c, 0xcbc49u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbc4b  call 0xbc3ec
    X86_AT(c, 0xcbc4bu);
    push32(c, 0xcbc50u); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xcbc50u);
    X86_TICK(c, 9);
    // 0cbc50  push 7
    X86_AT(c, 0xcbc50u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbc52  call 0xbbb5c
    X86_AT(c, 0xcbc52u);
    push32(c, 0xcbc57u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcbc57u);
    X86_TICK(c, 9);
    // 0cbc57  add esp, 0xc
    X86_AT(c, 0xcbc57u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cbc5a  cmp esi, 1
    X86_AT(c, 0xcbc5au);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 0cbc5d  je 0xcbc7e
    X86_AT(c, 0xcbc5du);
    if (x86_cc(c, 4)) { goto L_cbc7e; }
    X86_TICK(c, 9);
    // 0cbc5f  push 0
    X86_AT(c, 0xcbc5fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cbc61  call 0xb607c
    X86_AT(c, 0xcbc61u);
    push32(c, 0xcbc66u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xcbc66u);
    X86_TICK(c, 11);
    // 0cbc66  push 0x7e1c
    X86_AT(c, 0xcbc66u);
    { uint32_t v = 0x7E1Cu; push32(c, v); }
    // 0cbc6b  push 7
    X86_AT(c, 0xcbc6bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbc6d  call 0xba428
    X86_AT(c, 0xcbc6du);
    push32(c, 0xcbc72u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcbc72u);
    X86_TICK(c, 9);
    // 0cbc72  push 7
    X86_AT(c, 0xcbc72u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cbc74  call 0xbbb5c
    X86_AT(c, 0xcbc74u);
    push32(c, 0xcbc79u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcbc79u);
    X86_TICK(c, 9);
    // 0cbc79  add esp, 0x10
    X86_AT(c, 0xcbc79u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0cbc7c  jmp 0xcbce0
    X86_AT(c, 0xcbc7cu);
    goto L_cbce0;
L_cbc7e:
    X86_TICK(c, 19);
    // 0cbc7e  mov eax, 0xaef8c
    X86_AT(c, 0xcbc7eu);
    c.r[0] = 0xAEF8Cu;
    // 0cbc83  movsx edx, word ptr [eax + 4]
    X86_AT(c, 0xcbc83u);
    c.r[2] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u)));
    // 0cbc87  mov ecx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xcbc87u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0cbc8a  cmp edx, ecx
    X86_AT(c, 0xcbc8au);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 0cbc8c  jne 0xcbcaf
    X86_AT(c, 0xcbc8cu);
    if (x86_cc(c, 5)) { goto L_cbcaf; }
    X86_TICK(c, 9);
    // 0cbc8e  push ecx
    X86_AT(c, 0xcbc8eu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0cbc8f  call 0xd4324
    X86_AT(c, 0xcbc8fu);
    push32(c, 0xcbc94u); x86_call_known(c, 0xd4324u, f_000d4324); X86_RET(c, 0xcbc94u);
    X86_TICK(c, 20);
    // 0cbc94  inc word ptr [0xaef90]
    X86_AT(c, 0xcbc94u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xAEF90u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0cbc9b  add esp, 4
    X86_AT(c, 0xcbc9bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cbc9e  cmp word ptr [0xaef90], 4
    X86_AT(c, 0xcbc9eu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xAEF90u))), 0x4u, 0, 2);
    // 0cbca6  jne 0xcbce0
    X86_AT(c, 0xcbca6u);
    if (x86_cc(c, 5)) { goto L_cbce0; }
    X86_TICK(c, 7);
    // 0cbca8  call 0xcf858
    X86_AT(c, 0xcbca8u);
    push32(c, 0xcbcadu); x86_call_known(c, 0xcf858u, f_000cf858); X86_RET(c, 0xcbcadu);
    X86_TICK(c, 7);
    // 0cbcad  jmp 0xcbce0
    X86_AT(c, 0xcbcadu);
    goto L_cbce0;
L_cbcaf:
    X86_TICK(c, 9);
    // 0cbcaf  push 8
    X86_AT(c, 0xcbcafu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0cbcb1  call 0xb607c
    X86_AT(c, 0xcbcb1u);
    push32(c, 0xcbcb6u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xcbcb6u);
    X86_TICK(c, 9);
    // 0cbcb6  push 1
    X86_AT(c, 0xcbcb6u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cbcb8  call 0xbebbc
    X86_AT(c, 0xcbcb8u);
    push32(c, 0xcbcbdu); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xcbcbdu);
    X86_TICK(c, 9);
    // 0cbcbd  push edi
    X86_AT(c, 0xcbcbdu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cbcbe  call 0xc7f0c
    X86_AT(c, 0xcbcbeu);
    push32(c, 0xcbcc3u); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xcbcc3u);
    X86_TICK(c, 9);
    // 0cbcc3  push 2
    X86_AT(c, 0xcbcc3u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cbcc5  call 0xbebbc
    X86_AT(c, 0xcbcc5u);
    push32(c, 0xcbccau); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xcbccau);
    X86_TICK(c, 9);
    // 0cbcca  push edi
    X86_AT(c, 0xcbccau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cbccb  call 0xc7f0c
    X86_AT(c, 0xcbccbu);
    push32(c, 0xcbcd0u); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xcbcd0u);
    X86_TICK(c, 11);
    // 0cbcd0  push 0xffffffff
    X86_AT(c, 0xcbcd0u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0cbcd2  push edi
    X86_AT(c, 0xcbcd2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cbcd3  call 0xc9b10
    X86_AT(c, 0xcbcd3u);
    push32(c, 0xcbcd8u); x86_call_known(c, 0xc9b10u, f_000c9b10); X86_RET(c, 0xcbcd8u);
    X86_TICK(c, 7);
    // 0cbcd8  call 0xb75c0
    X86_AT(c, 0xcbcd8u);
    push32(c, 0xcbcddu); x86_call_known(c, 0xb75c0u, f_000b75c0); X86_RET(c, 0xcbcddu);
    X86_TICK(c, 2);
    // 0cbcdd  add esp, 0x1c
    X86_AT(c, 0xcbcddu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
L_cbce0:
    X86_TICK(c, 28);
    // 0cbce0  pop edi
    X86_AT(c, 0xcbce0u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cbce1  pop esi
    X86_AT(c, 0xcbce1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cbce2  pop ebx
    X86_AT(c, 0xcbce2u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cbce3  leave 
    X86_AT(c, 0xcbce3u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cbce4  ret 
    X86_AT(c, 0xcbce4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcb9ccu, "ran off the end of a function");
}
}
