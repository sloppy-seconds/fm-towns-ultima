#include "p_game_funcs.h"
namespace p_game {
void f_000c87c7(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0c87c7  push 7
    X86_AT(c, 0xc87c7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c87c9  call 0xba428
    X86_AT(c, 0xc87c9u);
    push32(c, 0xc87ceu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc87ceu);
    X86_TICK(c, 11);
    // 0c87ce  add esp, 8
    X86_AT(c, 0xc87ceu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c87d1  push 7
    X86_AT(c, 0xc87d1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c87d3  call 0xbbb5c
    X86_AT(c, 0xc87d3u);
    push32(c, 0xc87d8u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc87d8u);
    X86_TICK(c, 11);
    // 0c87d8  mov eax, 0xffffffff
    X86_AT(c, 0xc87d8u);
    c.r[0] = 0xFFFFFFFFu;
    // 0c87dd  add esp, 4
    X86_AT(c, 0xc87ddu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c87e0  jmp 0xc896c
    X86_AT(c, 0xc87e0u);
    goto L_c896c;
L_c896c:
    X86_TICK(c, 28);
    // 0c896c  pop edi
    X86_AT(c, 0xc896cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c896d  pop esi
    X86_AT(c, 0xc896du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c896e  pop ebx
    X86_AT(c, 0xc896eu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c896f  leave 
    X86_AT(c, 0xc896fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c8970  ret 
    X86_AT(c, 0xc8970u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc87c7u, "ran off the end of a function");
}
void f_000c896c(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0c896c  pop edi
    X86_AT(c, 0xc896cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c896d  pop esi
    X86_AT(c, 0xc896du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c896e  pop ebx
    X86_AT(c, 0xc896eu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c896f  leave 
    X86_AT(c, 0xc896fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c8970  ret 
    X86_AT(c, 0xc8970u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc896cu, "ran off the end of a function");
}
void f_000c8974(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0c8974  cmp dword ptr [0xa4a56], 0x80
    X86_AT(c, 0xc8974u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x80u, 0, 4);
    // 0c897e  je 0xc899f
    X86_AT(c, 0xc897eu);
    if (x86_cc(c, 4)) { goto L_c899f; }
    X86_TICK(c, 9);
    // 0c8980  push 3
    X86_AT(c, 0xc8980u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c8982  call 0xb607c
    X86_AT(c, 0xc8982u);
    push32(c, 0xc8987u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc8987u);
    X86_TICK(c, 11);
    // 0c8987  push 0x6250
    X86_AT(c, 0xc8987u);
    { uint32_t v = 0x6250u; push32(c, v); }
    // 0c898c  push 7
    X86_AT(c, 0xc898cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c898e  call 0xba428
    X86_AT(c, 0xc898eu);
    push32(c, 0xc8993u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc8993u);
    X86_TICK(c, 9);
    // 0c8993  push 7
    X86_AT(c, 0xc8993u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8995  call 0xbbb5c
    X86_AT(c, 0xc8995u);
    push32(c, 0xc899au); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc899au);
    X86_TICK(c, 9);
    // 0c899a  add esp, 0x10
    X86_AT(c, 0xc899au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c899d  jmp 0xc89c9
    X86_AT(c, 0xc899du);
    goto L_c89c9;
L_c899f:
    X86_TICK(c, 9);
    // 0c899f  push 0xa
    X86_AT(c, 0xc899fu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0c89a1  call 0xb607c
    X86_AT(c, 0xc89a1u);
    push32(c, 0xc89a6u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc89a6u);
    X86_TICK(c, 25);
    // 0c89a6  mov eax, dword ptr [0xa4930]
    X86_AT(c, 0xc89a6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4930u)));
    // 0c89ab  lea eax, [eax + eax*2]
    X86_AT(c, 0xc89abu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c89ae  lea edx, [eax*8]
    X86_AT(c, 0xc89aeu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c89b5  lea edx, [eax + edx*8]
    X86_AT(c, 0xc89b5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c89b8  mov eax, dword ptr [edx + 0xa4ac6]
    X86_AT(c, 0xc89b8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AC6u)));
    // 0c89be  add eax, eax
    X86_AT(c, 0xc89beu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c89c0  push eax
    X86_AT(c, 0xc89c0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c89c1  call 0xc7f60
    X86_AT(c, 0xc89c1u);
    push32(c, 0xc89c6u); x86_call_known(c, 0xc7f60u, f_000c7f60); X86_RET(c, 0xc89c6u);
    X86_TICK(c, 2);
    // 0c89c6  add esp, 8
    X86_AT(c, 0xc89c6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c89c9:
    X86_TICK(c, 10);
    // 0c89c9  ret 
    X86_AT(c, 0xc89c9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc8974u, "ran off the end of a function");
}
void f_000c89cc(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0c89cc  cmp dword ptr [0xa4a56], 1
    X86_AT(c, 0xc89ccu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x1u, 0, 4);
    // 0c89d3  je 0xc89f4
    X86_AT(c, 0xc89d3u);
    if (x86_cc(c, 4)) { goto L_c89f4; }
    X86_TICK(c, 9);
    // 0c89d5  push 3
    X86_AT(c, 0xc89d5u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c89d7  call 0xb607c
    X86_AT(c, 0xc89d7u);
    push32(c, 0xc89dcu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc89dcu);
    X86_TICK(c, 11);
    // 0c89dc  push 0x6274
    X86_AT(c, 0xc89dcu);
    { uint32_t v = 0x6274u; push32(c, v); }
    // 0c89e1  push 7
    X86_AT(c, 0xc89e1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c89e3  call 0xba428
    X86_AT(c, 0xc89e3u);
    push32(c, 0xc89e8u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc89e8u);
    X86_TICK(c, 9);
    // 0c89e8  push 7
    X86_AT(c, 0xc89e8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c89ea  call 0xbbb5c
    X86_AT(c, 0xc89eau);
    push32(c, 0xc89efu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc89efu);
    X86_TICK(c, 9);
    // 0c89ef  add esp, 0x10
    X86_AT(c, 0xc89efu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c89f2  jmp 0xc8a0f
    X86_AT(c, 0xc89f2u);
    goto L_c8a0f;
L_c89f4:
    X86_TICK(c, 9);
    // 0c89f4  push 5
    X86_AT(c, 0xc89f4u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c89f6  call 0xb607c
    X86_AT(c, 0xc89f6u);
    push32(c, 0xc89fbu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc89fbu);
    X86_TICK(c, 9);
    // 0c89fb  push 5
    X86_AT(c, 0xc89fbu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c89fd  call 0xbebbc
    X86_AT(c, 0xc89fdu);
    push32(c, 0xc8a02u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xc8a02u);
    X86_TICK(c, 4);
    // 0c8a02  mov dword ptr [0xa4a9a], 0xf0
    X86_AT(c, 0xc8a02u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A9Au)), 0xF0u);
    // 0c8a0c  add esp, 8
    X86_AT(c, 0xc8a0cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c8a0f:
    X86_TICK(c, 10);
    // 0c8a0f  ret 
    X86_AT(c, 0xc8a0fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc89ccu, "ran off the end of a function");
}
void f_000c8a10(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0c8a10  push ebp
    X86_AT(c, 0xc8a10u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c8a11  mov ebp, esp
    X86_AT(c, 0xc8a11u);
    c.r[5] = c.r[4];
    // 0c8a13  sub esp, 8
    X86_AT(c, 0xc8a13u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0c8a16  push ebx
    X86_AT(c, 0xc8a16u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c8a17  push esi
    X86_AT(c, 0xc8a17u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c8a18  push edi
    X86_AT(c, 0xc8a18u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8a19  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc8a19u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c8a1c  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xc8a1cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
    // 0c8a23  push 5
    X86_AT(c, 0xc8a23u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c8a25  call 0xb607c
    X86_AT(c, 0xc8a25u);
    push32(c, 0xc8a2au); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc8a2au);
    X86_TICK(c, 9);
    // 0c8a2a  push 5
    X86_AT(c, 0xc8a2au);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c8a2c  call 0xbebbc
    X86_AT(c, 0xc8a2cu);
    push32(c, 0xc8a31u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xc8a31u);
    X86_TICK(c, 11);
    // 0c8a31  push 0x6298
    X86_AT(c, 0xc8a31u);
    { uint32_t v = 0x6298u; push32(c, v); }
    // 0c8a36  push 7
    X86_AT(c, 0xc8a36u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8a38  call 0xba428
    X86_AT(c, 0xc8a38u);
    push32(c, 0xc8a3du); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc8a3du);
    X86_TICK(c, 11);
    // 0c8a3d  mov dword ptr [ebp - 8], 2
    X86_AT(c, 0xc8a3du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x2u);
    // 0c8a44  push 7
    X86_AT(c, 0xc8a44u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8a46  call 0xbbb5c
    X86_AT(c, 0xc8a46u);
    push32(c, 0xc8a4bu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc8a4bu);
    X86_TICK(c, 9);
    // 0c8a4b  push 0x62c0
    X86_AT(c, 0xc8a4bu);
    { uint32_t v = 0x62C0u; push32(c, v); }
    // 0c8a50  call 0xbc50c
    X86_AT(c, 0xc8a50u);
    push32(c, 0xc8a55u); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc8a55u);
    X86_TICK(c, 9);
    // 0c8a55  push 7
    X86_AT(c, 0xc8a55u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8a57  call 0xbb6b0
    X86_AT(c, 0xc8a57u);
    push32(c, 0xc8a5cu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc8a5cu);
    X86_TICK(c, 2);
    // 0c8a5c  add esp, 0x1c
    X86_AT(c, 0xc8a5cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
L_c8a5f:
    X86_TICK(c, 9);
    // 0c8a5f  push 7
    X86_AT(c, 0xc8a5fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8a61  call 0xb9514
    X86_AT(c, 0xc8a61u);
    push32(c, 0xc8a66u); x86_call_known(c, 0xb9514u, f_000b9514); X86_RET(c, 0xc8a66u);
    X86_TICK(c, 12);
    // 0c8a66  xchg ebx, eax
    X86_AT(c, 0xc8a66u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c8a67  add esp, 4
    X86_AT(c, 0xc8a67u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c8a6a  cmp bl, 1
    X86_AT(c, 0xc8a6au);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c8a6d  je 0xc8a89
    X86_AT(c, 0xc8a6du);
    if (x86_cc(c, 4)) { goto L_c8a89; }
    X86_TICK(c, 7);
    // 0c8a6f  cmp bl, 0x41
    X86_AT(c, 0xc8a6fu);
    (void)x86_sub(c, g8(c, 3), 0x41u, 0, 1);
    // 0c8a72  jb 0xc8a79
    X86_AT(c, 0xc8a72u);
    if (x86_cc(c, 2)) { goto L_c8a79; }
    X86_TICK(c, 7);
    // 0c8a74  cmp bl, 0x4f
    X86_AT(c, 0xc8a74u);
    (void)x86_sub(c, g8(c, 3), 0x4Fu, 0, 1);
    // 0c8a77  jbe 0xc8a89
    X86_AT(c, 0xc8a77u);
    if (x86_cc(c, 6)) { goto L_c8a89; }
L_c8a79:
    X86_TICK(c, 7);
    // 0c8a79  and bl, bl
    X86_AT(c, 0xc8a79u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0c8a7b  je 0xc8a5f
    X86_AT(c, 0xc8a7bu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc8a5fu); goto L_c8a5f; }
    X86_TICK(c, 9);
    // 0c8a7d  push 3
    X86_AT(c, 0xc8a7du);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c8a7f  call 0xb607c
    X86_AT(c, 0xc8a7fu);
    push32(c, 0xc8a84u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc8a84u);
    X86_TICK(c, 9);
    // 0c8a84  add esp, 4
    X86_AT(c, 0xc8a84u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c8a87  jmp 0xc8a5f
    X86_AT(c, 0xc8a87u);
    X86_POLL(c, 0xc8a5fu); goto L_c8a5f;
L_c8a89:
    X86_TICK(c, 9);
    // 0c8a89  push 2
    X86_AT(c, 0xc8a89u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c8a8b  call 0xbbb5c
    X86_AT(c, 0xc8a8bu);
    push32(c, 0xc8a90u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc8a90u);
    X86_TICK(c, 9);
    // 0c8a90  push 7
    X86_AT(c, 0xc8a90u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8a92  call 0xbb6b0
    X86_AT(c, 0xc8a92u);
    push32(c, 0xc8a97u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc8a97u);
    X86_TICK(c, 9);
    // 0c8a97  add esp, 8
    X86_AT(c, 0xc8a97u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c8a9a  cmp bl, 1
    X86_AT(c, 0xc8a9au);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c8a9d  jne 0xc8aba
    X86_AT(c, 0xc8a9du);
    if (x86_cc(c, 5)) { goto L_c8aba; }
    X86_TICK(c, 11);
    // 0c8a9f  push 0x62e6
    X86_AT(c, 0xc8a9fu);
    { uint32_t v = 0x62E6u; push32(c, v); }
    // 0c8aa4  push 7
    X86_AT(c, 0xc8aa4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8aa6  call 0xba428
    X86_AT(c, 0xc8aa6u);
    push32(c, 0xc8aabu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc8aabu);
    X86_TICK(c, 9);
    // 0c8aab  push 7
    X86_AT(c, 0xc8aabu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8aad  call 0xbbb5c
    X86_AT(c, 0xc8aadu);
    push32(c, 0xc8ab2u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc8ab2u);
    X86_TICK(c, 9);
    // 0c8ab2  add esp, 0xc
    X86_AT(c, 0xc8ab2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c8ab5  jmp 0xc8b58
    X86_AT(c, 0xc8ab5u);
    goto L_c8b58;
L_c8aba:
    X86_TICK(c, 29);
    // 0c8aba  movzx esi, bl
    X86_AT(c, 0xc8abau);
    c.r[6] = g8(c, 3);
    // 0c8abd  sub esi, 0x41
    X86_AT(c, 0xc8abdu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x41u, 0, 4); }
    // 0c8ac0  lea esi, [esi + esi*4]
    X86_AT(c, 0xc8ac0u);
    c.r[6] = (uint32_t)(c.r[6] + c.r[6] * 4);
    // 0c8ac3  mov eax, edi
    X86_AT(c, 0xc8ac3u);
    c.r[0] = c.r[7];
    // 0c8ac5  lea edx, [eax + eax*2]
    X86_AT(c, 0xc8ac5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c8ac8  shl edx, 5
    X86_AT(c, 0xc8ac8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c8acb  add edx, eax
    X86_AT(c, 0xc8acbu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c8acd  lea edx, [eax + edx*2]
    X86_AT(c, 0xc8acdu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c8ad0  cmp esi, dword ptr [edx + 0xa4ad1]
    X86_AT(c, 0xc8ad0u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD1u))), 0, 4);
    // 0c8ad6  jle 0xc8afd
    X86_AT(c, 0xc8ad6u);
    if (x86_cc(c, 14)) { goto L_c8afd; }
    X86_TICK(c, 12);
    // 0c8ad8  cmp dword ptr [0xa6134], 2
    X86_AT(c, 0xc8ad8u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA6134u))), 0x2u, 0, 4);
    // 0c8adf  je 0xc8afd
    X86_AT(c, 0xc8adfu);
    if (x86_cc(c, 4)) { goto L_c8afd; }
    X86_TICK(c, 9);
    // 0c8ae1  push 0
    X86_AT(c, 0xc8ae1u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c8ae3  call 0xb607c
    X86_AT(c, 0xc8ae3u);
    push32(c, 0xc8ae8u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc8ae8u);
    X86_TICK(c, 11);
    // 0c8ae8  push 0x62e8
    X86_AT(c, 0xc8ae8u);
    { uint32_t v = 0x62E8u; push32(c, v); }
    // 0c8aed  push 7
    X86_AT(c, 0xc8aedu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8aef  call 0xba428
    X86_AT(c, 0xc8aefu);
    push32(c, 0xc8af4u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc8af4u);
    X86_TICK(c, 9);
    // 0c8af4  push 7
    X86_AT(c, 0xc8af4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8af6  call 0xbbb5c
    X86_AT(c, 0xc8af6u);
    push32(c, 0xc8afbu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc8afbu);
    X86_TICK(c, 7);
    // 0c8afb  jmp 0xc8b55
    X86_AT(c, 0xc8afbu);
    goto L_c8b55;
L_c8afd:
    X86_TICK(c, 32);
    // 0c8afd  mov eax, edi
    X86_AT(c, 0xc8afdu);
    c.r[0] = c.r[7];
    // 0c8aff  lea edx, [eax + eax*2]
    X86_AT(c, 0xc8affu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c8b02  shl edx, 5
    X86_AT(c, 0xc8b02u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c8b05  add edx, eax
    X86_AT(c, 0xc8b05u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c8b07  lea edx, [eax + edx*2]
    X86_AT(c, 0xc8b07u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c8b0a  sub dword ptr [edx + 0xa4ad1], esi
    X86_AT(c, 0xc8b0au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD1u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[6], 0, 4)); }
    // 0c8b10  mov byte ptr [ebp - 1], 0
    X86_AT(c, 0xc8b10u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x0u);
    // 0c8b14  cmp dword ptr [ebp - 8], 1
    X86_AT(c, 0xc8b14u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x1u, 0, 4);
    // 0c8b18  jne 0xc8b28
    X86_AT(c, 0xc8b18u);
    if (x86_cc(c, 5)) { goto L_c8b28; }
    X86_TICK(c, 17);
    // 0c8b1a  lea eax, [ebp - 1]
    X86_AT(c, 0xc8b1au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0c8b1d  push eax
    X86_AT(c, 0xc8b1du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c8b1e  push ebx
    X86_AT(c, 0xc8b1eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c8b1f  push 0x10
    X86_AT(c, 0xc8b1fu);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0c8b21  push 0xabfdc
    X86_AT(c, 0xc8b21u);
    { uint32_t v = 0xABFDCu; push32(c, v); }
    // 0c8b26  jmp 0xc8b34
    X86_AT(c, 0xc8b26u);
    goto L_c8b34;
L_c8b28:
    X86_TICK(c, 10);
    // 0c8b28  lea eax, [ebp - 1]
    X86_AT(c, 0xc8b28u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0c8b2b  push eax
    X86_AT(c, 0xc8b2bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c8b2c  push ebx
    X86_AT(c, 0xc8b2cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c8b2d  push 0x10
    X86_AT(c, 0xc8b2du);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0c8b2f  push 0xac81c
    X86_AT(c, 0xc8b2fu);
    { uint32_t v = 0xAC81Cu; push32(c, v); }
L_c8b34:
    X86_TICK(c, 7);
    // 0c8b34  call 0xba1b4
    X86_AT(c, 0xc8b34u);
    push32(c, 0xc8b39u); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc8b39u);
    X86_TICK(c, 11);
    // 0c8b39  push eax
    X86_AT(c, 0xc8b39u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c8b3a  push 7
    X86_AT(c, 0xc8b3au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8b3c  call 0xbbba4
    X86_AT(c, 0xc8b3cu);
    push32(c, 0xc8b41u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc8b41u);
    X86_TICK(c, 11);
    // 0c8b41  add esp, 0x18
    X86_AT(c, 0xc8b41u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0c8b44  push 7
    X86_AT(c, 0xc8b44u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8b46  call 0xbbb5c
    X86_AT(c, 0xc8b46u);
    push32(c, 0xc8b4bu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc8b4bu);
    X86_TICK(c, 16);
    // 0c8b4b  push ebx
    X86_AT(c, 0xc8b4bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c8b4c  push dword ptr [ebp - 8]
    X86_AT(c, 0xc8b4cu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0c8b4f  push edi
    X86_AT(c, 0xc8b4fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8b50  call 0xc9940
    X86_AT(c, 0xc8b50u);
    push32(c, 0xc8b55u); x86_call_known(c, 0xc9940u, f_000c9940); X86_RET(c, 0xc8b55u);
L_c8b55:
    X86_TICK(c, 2);
    // 0c8b55  add esp, 0x10
    X86_AT(c, 0xc8b55u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_c8b58:
    X86_TICK(c, 28);
    // 0c8b58  pop edi
    X86_AT(c, 0xc8b58u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c8b59  pop esi
    X86_AT(c, 0xc8b59u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c8b5a  pop ebx
    X86_AT(c, 0xc8b5au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c8b5b  leave 
    X86_AT(c, 0xc8b5bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c8b5c  ret 
    X86_AT(c, 0xc8b5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc8a10u, "ran off the end of a function");
}
void f_000c8b60(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0c8b60  cmp dword ptr [0xa4a56], 0x80
    X86_AT(c, 0xc8b60u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x80u, 0, 4);
    // 0c8b6a  je 0xc8b8b
    X86_AT(c, 0xc8b6au);
    if (x86_cc(c, 4)) { goto L_c8b8b; }
    X86_TICK(c, 9);
    // 0c8b6c  push 3
    X86_AT(c, 0xc8b6cu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c8b6e  call 0xb607c
    X86_AT(c, 0xc8b6eu);
    push32(c, 0xc8b73u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc8b73u);
    X86_TICK(c, 11);
    // 0c8b73  push 0x6318
    X86_AT(c, 0xc8b73u);
    { uint32_t v = 0x6318u; push32(c, v); }
    // 0c8b78  push 7
    X86_AT(c, 0xc8b78u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8b7a  call 0xba428
    X86_AT(c, 0xc8b7au);
    push32(c, 0xc8b7fu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc8b7fu);
    X86_TICK(c, 9);
    // 0c8b7f  push 7
    X86_AT(c, 0xc8b7fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8b81  call 0xbbb5c
    X86_AT(c, 0xc8b81u);
    push32(c, 0xc8b86u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc8b86u);
    X86_TICK(c, 9);
    // 0c8b86  add esp, 0x10
    X86_AT(c, 0xc8b86u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c8b89  jmp 0xc8ba3
    X86_AT(c, 0xc8b89u);
    goto L_c8ba3;
L_c8b8b:
    X86_TICK(c, 9);
    // 0c8b8b  push 5
    X86_AT(c, 0xc8b8bu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c8b8d  call 0xb607c
    X86_AT(c, 0xc8b8du);
    push32(c, 0xc8b92u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc8b92u);
    X86_TICK(c, 9);
    // 0c8b92  push 6
    X86_AT(c, 0xc8b92u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c8b94  call 0xbebbc
    X86_AT(c, 0xc8b94u);
    push32(c, 0xc8b99u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xc8b99u);
    X86_TICK(c, 9);
    // 0c8b99  push 0x4b
    X86_AT(c, 0xc8b99u);
    { uint32_t v = 0x4Bu; push32(c, v); }
    // 0c8b9b  call 0xc7cdc
    X86_AT(c, 0xc8b9bu);
    push32(c, 0xc8ba0u); x86_call_known(c, 0xc7cdcu, f_000c7cdc); X86_RET(c, 0xc8ba0u);
    X86_TICK(c, 2);
    // 0c8ba0  add esp, 0xc
    X86_AT(c, 0xc8ba0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_c8ba3:
    X86_TICK(c, 10);
    // 0c8ba3  ret 
    X86_AT(c, 0xc8ba3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc8b60u, "ran off the end of a function");
}
void f_000c8ba4(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0c8ba4  cmp dword ptr [0xa4a56], 0x80
    X86_AT(c, 0xc8ba4u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x80u, 0, 4);
    // 0c8bae  je 0xc8bcf
    X86_AT(c, 0xc8baeu);
    if (x86_cc(c, 4)) { goto L_c8bcf; }
    X86_TICK(c, 9);
    // 0c8bb0  push 3
    X86_AT(c, 0xc8bb0u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c8bb2  call 0xb607c
    X86_AT(c, 0xc8bb2u);
    push32(c, 0xc8bb7u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc8bb7u);
    X86_TICK(c, 11);
    // 0c8bb7  push 0x633c
    X86_AT(c, 0xc8bb7u);
    { uint32_t v = 0x633Cu; push32(c, v); }
    // 0c8bbc  push 7
    X86_AT(c, 0xc8bbcu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8bbe  call 0xba428
    X86_AT(c, 0xc8bbeu);
    push32(c, 0xc8bc3u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc8bc3u);
    X86_TICK(c, 9);
    // 0c8bc3  push 7
    X86_AT(c, 0xc8bc3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8bc5  call 0xbbb5c
    X86_AT(c, 0xc8bc5u);
    push32(c, 0xc8bcau); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc8bcau);
    X86_TICK(c, 9);
    // 0c8bca  add esp, 0x10
    X86_AT(c, 0xc8bcau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c8bcd  jmp 0xc8be7
    X86_AT(c, 0xc8bcdu);
    goto L_c8be7;
L_c8bcf:
    X86_TICK(c, 9);
    // 0c8bcf  push 0xa
    X86_AT(c, 0xc8bcfu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0c8bd1  call 0xb607c
    X86_AT(c, 0xc8bd1u);
    push32(c, 0xc8bd6u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc8bd6u);
    X86_TICK(c, 9);
    // 0c8bd6  push 3
    X86_AT(c, 0xc8bd6u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c8bd8  call 0xbebbc
    X86_AT(c, 0xc8bd8u);
    push32(c, 0xc8bddu); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xc8bddu);
    X86_TICK(c, 9);
    // 0c8bdd  push 0xffffffff
    X86_AT(c, 0xc8bddu);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0c8bdf  call 0xc7f60
    X86_AT(c, 0xc8bdfu);
    push32(c, 0xc8be4u); x86_call_known(c, 0xc7f60u, f_000c7f60); X86_RET(c, 0xc8be4u);
    X86_TICK(c, 2);
    // 0c8be4  add esp, 0xc
    X86_AT(c, 0xc8be4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_c8be7:
    X86_TICK(c, 10);
    // 0c8be7  ret 
    X86_AT(c, 0xc8be7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc8ba4u, "ran off the end of a function");
}
void f_000c8be8(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0c8be8  push 5
    X86_AT(c, 0xc8be8u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c8bea  call 0xb607c
    X86_AT(c, 0xc8beau);
    push32(c, 0xc8befu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc8befu);
    X86_TICK(c, 9);
    // 0c8bef  push 5
    X86_AT(c, 0xc8befu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c8bf1  call 0xbebbc
    X86_AT(c, 0xc8bf1u);
    push32(c, 0xc8bf6u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xc8bf6u);
    X86_TICK(c, 14);
    // 0c8bf6  mov dword ptr [0xabf7c], 0xa
    X86_AT(c, 0xc8bf6u);
    wr32((c.sbase[3] + (uint32_t)(0xABF7Cu)), 0xAu);
    // 0c8c00  add esp, 8
    X86_AT(c, 0xc8c00u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c8c03  ret 
    X86_AT(c, 0xc8c03u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc8be8u, "ran off the end of a function");
}
void f_000c8c04(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0c8c04  cmp dword ptr [0xa4a56], 0x80
    X86_AT(c, 0xc8c04u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x80u, 0, 4);
    // 0c8c0e  je 0xc8c2f
    X86_AT(c, 0xc8c0eu);
    if (x86_cc(c, 4)) { goto L_c8c2f; }
    X86_TICK(c, 9);
    // 0c8c10  push 3
    X86_AT(c, 0xc8c10u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c8c12  call 0xb607c
    X86_AT(c, 0xc8c12u);
    push32(c, 0xc8c17u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc8c17u);
    X86_TICK(c, 11);
    // 0c8c17  push 0x6360
    X86_AT(c, 0xc8c17u);
    { uint32_t v = 0x6360u; push32(c, v); }
    // 0c8c1c  push 7
    X86_AT(c, 0xc8c1cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8c1e  call 0xba428
    X86_AT(c, 0xc8c1eu);
    push32(c, 0xc8c23u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc8c23u);
    X86_TICK(c, 9);
    // 0c8c23  push 7
    X86_AT(c, 0xc8c23u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8c25  call 0xbbb5c
    X86_AT(c, 0xc8c25u);
    push32(c, 0xc8c2au); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc8c2au);
    X86_TICK(c, 9);
    // 0c8c2a  add esp, 0x10
    X86_AT(c, 0xc8c2au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c8c2d  jmp 0xc8c5e
    X86_AT(c, 0xc8c2du);
    goto L_c8c5e;
L_c8c2f:
    X86_TICK(c, 9);
    // 0c8c2f  push 5
    X86_AT(c, 0xc8c2fu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c8c31  call 0xb607c
    X86_AT(c, 0xc8c31u);
    push32(c, 0xc8c36u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc8c36u);
    X86_TICK(c, 9);
    // 0c8c36  push 6
    X86_AT(c, 0xc8c36u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c8c38  call 0xbebbc
    X86_AT(c, 0xc8c38u);
    push32(c, 0xc8c3du); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xc8c3du);
    X86_TICK(c, 28);
    // 0c8c3d  mov eax, dword ptr [0xa4930]
    X86_AT(c, 0xc8c3du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4930u)));
    // 0c8c42  lea edx, [eax + eax*2]
    X86_AT(c, 0xc8c42u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c8c45  shl edx, 5
    X86_AT(c, 0xc8c45u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c8c48  add edx, eax
    X86_AT(c, 0xc8c48u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c8c4a  lea edx, [eax + edx*2]
    X86_AT(c, 0xc8c4au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c8c4d  mov eax, dword ptr [edx + 0xa4ac6]
    X86_AT(c, 0xc8c4du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AC6u)));
    // 0c8c53  add eax, eax
    X86_AT(c, 0xc8c53u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c8c55  push eax
    X86_AT(c, 0xc8c55u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c8c56  call 0xc7cdc
    X86_AT(c, 0xc8c56u);
    push32(c, 0xc8c5bu); x86_call_known(c, 0xc7cdcu, f_000c7cdc); X86_RET(c, 0xc8c5bu);
    X86_TICK(c, 2);
    // 0c8c5b  add esp, 0xc
    X86_AT(c, 0xc8c5bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_c8c5e:
    X86_TICK(c, 10);
    // 0c8c5e  ret 
    X86_AT(c, 0xc8c5eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc8c04u, "ran off the end of a function");
}
void f_000c8c60(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0c8c60  push edi
    X86_AT(c, 0xc8c60u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8c61  cmp dword ptr [0xa4a56], 0x80
    X86_AT(c, 0xc8c61u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x80u, 0, 4);
    // 0c8c6b  je 0xc8c8c
    X86_AT(c, 0xc8c6bu);
    if (x86_cc(c, 4)) { goto L_c8c8c; }
    X86_TICK(c, 9);
    // 0c8c6d  push 3
    X86_AT(c, 0xc8c6du);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c8c6f  call 0xb607c
    X86_AT(c, 0xc8c6fu);
    push32(c, 0xc8c74u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc8c74u);
    X86_TICK(c, 11);
    // 0c8c74  push 0x6384
    X86_AT(c, 0xc8c74u);
    { uint32_t v = 0x6384u; push32(c, v); }
    // 0c8c79  push 7
    X86_AT(c, 0xc8c79u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8c7b  call 0xba428
    X86_AT(c, 0xc8c7bu);
    push32(c, 0xc8c80u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc8c80u);
    X86_TICK(c, 9);
    // 0c8c80  push 7
    X86_AT(c, 0xc8c80u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8c82  call 0xbbb5c
    X86_AT(c, 0xc8c82u);
    push32(c, 0xc8c87u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc8c87u);
    X86_TICK(c, 9);
    // 0c8c87  add esp, 0x10
    X86_AT(c, 0xc8c87u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c8c8a  jmp 0xc8ccf
    X86_AT(c, 0xc8c8au);
    goto L_c8ccf;
L_c8c8c:
    X86_TICK(c, 9);
    // 0c8c8c  push 5
    X86_AT(c, 0xc8c8cu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c8c8e  call 0xb607c
    X86_AT(c, 0xc8c8eu);
    push32(c, 0xc8c93u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc8c93u);
    X86_TICK(c, 9);
    // 0c8c93  push 3
    X86_AT(c, 0xc8c93u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c8c95  call 0xbebbc
    X86_AT(c, 0xc8c95u);
    push32(c, 0xc8c9au); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xc8c9au);
    X86_TICK(c, 14);
    // 0c8c9a  add esp, 8
    X86_AT(c, 0xc8c9au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c8c9d  cmp byte ptr [0xa4934], 0x8a
    X86_AT(c, 0xc8c9du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xA4934u))), 0x8Au, 0, 1);
    // 0c8ca4  je 0xc8ccf
    X86_AT(c, 0xc8ca4u);
    if (x86_cc(c, 4)) { goto L_c8ccf; }
    X86_TICK(c, 2);
    // 0c8ca6  sub edi, edi
    X86_AT(c, 0xc8ca6u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_c8ca8:
    X86_TICK(c, 7);
    // 0c8ca8  cmp edi, 8
    X86_AT(c, 0xc8ca8u);
    (void)x86_sub(c, c.r[7], 0x8u, 0, 4);
    // 0c8cab  jge 0xc8ccf
    X86_AT(c, 0xc8cabu);
    if (x86_cc(c, 13)) { goto L_c8ccf; }
    X86_TICK(c, 12);
    // 0c8cad  cmp dword ptr [edi*4 + 0xa49b5], 0
    X86_AT(c, 0xc8cadu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA49B5u))), 0x0u, 0, 4);
    // 0c8cb5  je 0xc8ccc
    X86_AT(c, 0xc8cb5u);
    if (x86_cc(c, 4)) { goto L_c8ccc; }
    X86_TICK(c, 11);
    // 0c8cb7  mov dword ptr [edi*4 + 0xa49b5], 5
    X86_AT(c, 0xc8cb7u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA49B5u)), 0x5u);
    // 0c8cc2  push 8
    X86_AT(c, 0xc8cc2u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0c8cc4  call 0xb607c
    X86_AT(c, 0xc8cc4u);
    push32(c, 0xc8cc9u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc8cc9u);
    X86_TICK(c, 2);
    // 0c8cc9  add esp, 4
    X86_AT(c, 0xc8cc9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_c8ccc:
    X86_TICK(c, 9);
    // 0c8ccc  inc edi
    X86_AT(c, 0xc8cccu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c8ccd  jmp 0xc8ca8
    X86_AT(c, 0xc8ccdu);
    X86_POLL(c, 0xc8ca8u); goto L_c8ca8;
L_c8ccf:
    X86_TICK(c, 14);
    // 0c8ccf  pop edi
    X86_AT(c, 0xc8ccfu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c8cd0  ret 
    X86_AT(c, 0xc8cd0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc8c60u, "ran off the end of a function");
}
void f_000c8cd4(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0c8cd4  cmp dword ptr [0xa4a56], 0x80
    X86_AT(c, 0xc8cd4u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x80u, 0, 4);
    // 0c8cde  je 0xc8cff
    X86_AT(c, 0xc8cdeu);
    if (x86_cc(c, 4)) { goto L_c8cff; }
    X86_TICK(c, 9);
    // 0c8ce0  push 3
    X86_AT(c, 0xc8ce0u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c8ce2  call 0xb607c
    X86_AT(c, 0xc8ce2u);
    push32(c, 0xc8ce7u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc8ce7u);
    X86_TICK(c, 11);
    // 0c8ce7  push 0x63a8
    X86_AT(c, 0xc8ce7u);
    { uint32_t v = 0x63A8u; push32(c, v); }
    // 0c8cec  push 7
    X86_AT(c, 0xc8cecu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8cee  call 0xba428
    X86_AT(c, 0xc8ceeu);
    push32(c, 0xc8cf3u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc8cf3u);
    X86_TICK(c, 9);
    // 0c8cf3  push 7
    X86_AT(c, 0xc8cf3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8cf5  call 0xbbb5c
    X86_AT(c, 0xc8cf5u);
    push32(c, 0xc8cfau); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc8cfau);
    X86_TICK(c, 9);
    // 0c8cfa  add esp, 0x10
    X86_AT(c, 0xc8cfau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c8cfd  jmp 0xc8d17
    X86_AT(c, 0xc8cfdu);
    goto L_c8d17;
L_c8cff:
    X86_TICK(c, 9);
    // 0c8cff  push 5
    X86_AT(c, 0xc8cffu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c8d01  call 0xb607c
    X86_AT(c, 0xc8d01u);
    push32(c, 0xc8d06u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc8d06u);
    X86_TICK(c, 9);
    // 0c8d06  push 6
    X86_AT(c, 0xc8d06u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c8d08  call 0xbebbc
    X86_AT(c, 0xc8d08u);
    push32(c, 0xc8d0du); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xc8d0du);
    X86_TICK(c, 9);
    // 0c8d0d  push 0xffffffff
    X86_AT(c, 0xc8d0du);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0c8d0f  call 0xc7cdc
    X86_AT(c, 0xc8d0fu);
    push32(c, 0xc8d14u); x86_call_known(c, 0xc7cdcu, f_000c7cdc); X86_RET(c, 0xc8d14u);
    X86_TICK(c, 2);
    // 0c8d14  add esp, 0xc
    X86_AT(c, 0xc8d14u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_c8d17:
    X86_TICK(c, 10);
    // 0c8d17  ret 
    X86_AT(c, 0xc8d17u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc8cd4u, "ran off the end of a function");
}
void f_000c8d18(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0c8d18  push 7
    X86_AT(c, 0xc8d18u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8d1a  call 0xbb6b0
    X86_AT(c, 0xc8d1au);
    push32(c, 0xc8d1fu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc8d1fu);
    X86_TICK(c, 14);
    // 0c8d1f  add esp, 4
    X86_AT(c, 0xc8d1fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c8d22  cmp dword ptr [0xa4a56], 0x80
    X86_AT(c, 0xc8d22u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x80u, 0, 4);
    // 0c8d2c  je 0xc8d3c
    X86_AT(c, 0xc8d2cu);
    if (x86_cc(c, 4)) { goto L_c8d3c; }
    X86_TICK(c, 9);
    // 0c8d2e  push 3
    X86_AT(c, 0xc8d2eu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c8d30  call 0xb607c
    X86_AT(c, 0xc8d30u);
    push32(c, 0xc8d35u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc8d35u);
    X86_TICK(c, 9);
    // 0c8d35  push 0x63cc
    X86_AT(c, 0xc8d35u);
    { uint32_t v = 0x63CCu; push32(c, v); }
    // 0c8d3a  jmp 0xc8d96
    X86_AT(c, 0xc8d3au);
    goto L_c8d96;
L_c8d3c:
    X86_TICK(c, 12);
    // 0c8d3c  cmp word ptr [0xabf80], 0
    X86_AT(c, 0xc8d3cu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xABF80u))), 0x0u, 0, 2);
    // 0c8d44  jne 0xc8d5b
    X86_AT(c, 0xc8d44u);
    if (x86_cc(c, 5)) { goto L_c8d5b; }
    X86_TICK(c, 11);
    // 0c8d46  push 0x63f0
    X86_AT(c, 0xc8d46u);
    { uint32_t v = 0x63F0u; push32(c, v); }
    // 0c8d4b  push 7
    X86_AT(c, 0xc8d4bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8d4d  call 0xba428
    X86_AT(c, 0xc8d4du);
    push32(c, 0xc8d52u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc8d52u);
    X86_TICK(c, 9);
    // 0c8d52  push 7
    X86_AT(c, 0xc8d52u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8d54  call 0xbbb5c
    X86_AT(c, 0xc8d54u);
    push32(c, 0xc8d59u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc8d59u);
    X86_TICK(c, 7);
    // 0c8d59  jmp 0xc8dbe
    X86_AT(c, 0xc8d59u);
    goto L_c8dbe;
L_c8d5b:
    X86_TICK(c, 12);
    // 0c8d5b  cmp byte ptr [0xa4934], 0x91
    X86_AT(c, 0xc8d5bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xA4934u))), 0x91u, 0, 1);
    // 0c8d62  je 0xc8d72
    X86_AT(c, 0xc8d62u);
    if (x86_cc(c, 4)) { goto L_c8d72; }
    X86_TICK(c, 9);
    // 0c8d64  push 3
    X86_AT(c, 0xc8d64u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c8d66  call 0xb607c
    X86_AT(c, 0xc8d66u);
    push32(c, 0xc8d6bu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc8d6bu);
    X86_TICK(c, 9);
    // 0c8d6b  push 0x6418
    X86_AT(c, 0xc8d6bu);
    { uint32_t v = 0x6418u; push32(c, v); }
    // 0c8d70  jmp 0xc8d96
    X86_AT(c, 0xc8d70u);
    goto L_c8d96;
L_c8d72:
    X86_TICK(c, 11);
    // 0c8d72  mov word ptr [0xabf80], 0
    X86_AT(c, 0xc8d72u);
    wr16((c.sbase[3] + (uint32_t)(0xABF80u)), 0x0u);
    // 0c8d7b  push 0xa
    X86_AT(c, 0xc8d7bu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0c8d7d  call 0xb61b4
    X86_AT(c, 0xc8d7du);
    push32(c, 0xc8d82u); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xc8d82u);
    X86_TICK(c, 9);
    // 0c8d82  add esp, 4
    X86_AT(c, 0xc8d82u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c8d85  cmp eax, 5
    X86_AT(c, 0xc8d85u);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0c8d88  jge 0xc8da9
    X86_AT(c, 0xc8d88u);
    if (x86_cc(c, 13)) { goto L_c8da9; }
    X86_TICK(c, 9);
    // 0c8d8a  push 3
    X86_AT(c, 0xc8d8au);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c8d8c  call 0xb607c
    X86_AT(c, 0xc8d8cu);
    push32(c, 0xc8d91u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc8d91u);
    X86_TICK(c, 2);
    // 0c8d91  push 0x6438
    X86_AT(c, 0xc8d91u);
    { uint32_t v = 0x6438u; push32(c, v); }
L_c8d96:
    X86_TICK(c, 9);
    // 0c8d96  push 7
    X86_AT(c, 0xc8d96u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8d98  call 0xba428
    X86_AT(c, 0xc8d98u);
    push32(c, 0xc8d9du); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc8d9du);
    X86_TICK(c, 9);
    // 0c8d9d  push 7
    X86_AT(c, 0xc8d9du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8d9f  call 0xbbb5c
    X86_AT(c, 0xc8d9fu);
    push32(c, 0xc8da4u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc8da4u);
    X86_TICK(c, 9);
    // 0c8da4  add esp, 0x10
    X86_AT(c, 0xc8da4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c8da7  jmp 0xc8dc1
    X86_AT(c, 0xc8da7u);
    goto L_c8dc1;
L_c8da9:
    X86_TICK(c, 9);
    // 0c8da9  push 5
    X86_AT(c, 0xc8da9u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c8dab  call 0xb607c
    X86_AT(c, 0xc8dabu);
    push32(c, 0xc8db0u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc8db0u);
    X86_TICK(c, 9);
    // 0c8db0  push 5
    X86_AT(c, 0xc8db0u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c8db2  call 0xbebbc
    X86_AT(c, 0xc8db2u);
    push32(c, 0xc8db7u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xc8db7u);
    X86_TICK(c, 9);
    // 0c8db7  push 0xffffffff
    X86_AT(c, 0xc8db7u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0c8db9  call 0xc7cdc
    X86_AT(c, 0xc8db9u);
    push32(c, 0xc8dbeu); x86_call_known(c, 0xc7cdcu, f_000c7cdc); X86_RET(c, 0xc8dbeu);
L_c8dbe:
    X86_TICK(c, 2);
    // 0c8dbe  add esp, 0xc
    X86_AT(c, 0xc8dbeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_c8dc1:
    X86_TICK(c, 10);
    // 0c8dc1  ret 
    X86_AT(c, 0xc8dc1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc8d18u, "ran off the end of a function");
}
void f_000c8dc4(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0c8dc4  push ebp
    X86_AT(c, 0xc8dc4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c8dc5  mov ebp, esp
    X86_AT(c, 0xc8dc5u);
    c.r[5] = c.r[4];
    // 0c8dc7  push esi
    X86_AT(c, 0xc8dc7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c8dc8  push edi
    X86_AT(c, 0xc8dc8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8dc9  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc8dc9u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c8dcc  push 5
    X86_AT(c, 0xc8dccu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c8dce  call 0xb607c
    X86_AT(c, 0xc8dceu);
    push32(c, 0xc8dd3u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc8dd3u);
    X86_TICK(c, 9);
    // 0c8dd3  push 5
    X86_AT(c, 0xc8dd3u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c8dd5  call 0xbebbc
    X86_AT(c, 0xc8dd5u);
    push32(c, 0xc8ddau); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xc8ddau);
    X86_TICK(c, 9);
    // 0c8dda  push 7
    X86_AT(c, 0xc8ddau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8ddc  call 0xbb6b0
    X86_AT(c, 0xc8ddcu);
    push32(c, 0xc8de1u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc8de1u);
    X86_TICK(c, 9);
    // 0c8de1  push 3
    X86_AT(c, 0xc8de1u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c8de3  call 0xb61b4
    X86_AT(c, 0xc8de3u);
    push32(c, 0xc8de8u); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xc8de8u);
    X86_TICK(c, 9);
    // 0c8de8  add esp, 0x10
    X86_AT(c, 0xc8de8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c8deb  and eax, eax
    X86_AT(c, 0xc8debu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c8ded  jne 0xc8e0a
    X86_AT(c, 0xc8dedu);
    if (x86_cc(c, 5)) { goto L_c8e0a; }
    X86_TICK(c, 11);
    // 0c8def  push 0x6468
    X86_AT(c, 0xc8defu);
    { uint32_t v = 0x6468u; push32(c, v); }
    // 0c8df4  push 7
    X86_AT(c, 0xc8df4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8df6  call 0xba428
    X86_AT(c, 0xc8df6u);
    push32(c, 0xc8dfbu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc8dfbu);
    X86_TICK(c, 9);
    // 0c8dfb  push 7
    X86_AT(c, 0xc8dfbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8dfd  call 0xbbb5c
    X86_AT(c, 0xc8dfdu);
    push32(c, 0xc8e02u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc8e02u);
    X86_TICK(c, 9);
    // 0c8e02  add esp, 0xc
    X86_AT(c, 0xc8e02u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c8e05  jmp 0xc8ebf
    X86_AT(c, 0xc8e05u);
    goto L_c8ebf;
L_c8e0a:
    X86_TICK(c, 12);
    // 0c8e0a  cmp dword ptr [0xa4a56], 1
    X86_AT(c, 0xc8e0au);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x1u, 0, 4);
    // 0c8e11  je 0xc8e5e
    X86_AT(c, 0xc8e11u);
    if (x86_cc(c, 4)) { goto L_c8e5e; }
    X86_TICK(c, 17);
    // 0c8e13  push dword ptr [0xa4a7a]
    X86_AT(c, 0xc8e13u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au))); push32(c, v); }
    // 0c8e19  push dword ptr [0xa4a76]
    X86_AT(c, 0xc8e19u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A76u))); push32(c, v); }
    // 0c8e1f  call 0xc735c
    X86_AT(c, 0xc8e1fu);
    push32(c, 0xc8e24u); x86_call_known(c, 0xc735cu, f_000c735c); X86_RET(c, 0xc8e24u);
    X86_TICK(c, 12);
    // 0c8e24  xchg esi, eax
    X86_AT(c, 0xc8e24u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0c8e25  add esp, 8
    X86_AT(c, 0xc8e25u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c8e28  cmp esi, 0xffffffff
    X86_AT(c, 0xc8e28u);
    (void)x86_sub(c, c.r[6], 0xFFFFFFFFu, 0, 4);
    // 0c8e2b  je 0xc8e36
    X86_AT(c, 0xc8e2bu);
    if (x86_cc(c, 4)) { goto L_c8e36; }
    X86_TICK(c, 12);
    // 0c8e2d  cmp byte ptr [esi + 0xa5ce8], 0x80
    X86_AT(c, 0xc8e2du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xA5CE8u))), 0x80u, 0, 1);
    // 0c8e34  je 0xc8e44
    X86_AT(c, 0xc8e34u);
    if (x86_cc(c, 4)) { goto L_c8e44; }
L_c8e36:
    X86_TICK(c, 9);
    // 0c8e36  push 3
    X86_AT(c, 0xc8e36u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c8e38  call 0xb607c
    X86_AT(c, 0xc8e38u);
    push32(c, 0xc8e3du); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc8e3du);
    X86_TICK(c, 9);
    // 0c8e3d  push 0x648c
    X86_AT(c, 0xc8e3du);
    { uint32_t v = 0x648Cu; push32(c, v); }
    // 0c8e42  jmp 0xc8e8a
    X86_AT(c, 0xc8e42u);
    goto L_c8e8a;
L_c8e44:
    X86_TICK(c, 15);
    // 0c8e44  sub eax, eax
    X86_AT(c, 0xc8e44u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c8e46  mov byte ptr [esi + 0xa5ce8], al
    X86_AT(c, 0xc8e46u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0xA5CE8u)), g8(c, 0));
    // 0c8e4c  mov dword ptr [esi*4 + 0xa6074], eax
    X86_AT(c, 0xc8e4cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xA6074u)), c.r[0]);
    // 0c8e53  push edi
    X86_AT(c, 0xc8e53u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8e54  call 0xcd148
    X86_AT(c, 0xc8e54u);
    push32(c, 0xc8e59u); x86_call_known(c, 0xcd148u, f_000cd148); X86_RET(c, 0xc8e59u);
    X86_TICK(c, 9);
    // 0c8e59  add esp, 4
    X86_AT(c, 0xc8e59u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c8e5c  jmp 0xc8ebf
    X86_AT(c, 0xc8e5cu);
    goto L_c8ebf;
L_c8e5e:
    X86_TICK(c, 22);
    // 0c8e5e  push dword ptr [0xa4a72]
    X86_AT(c, 0xc8e5eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A72u))); push32(c, v); }
    // 0c8e64  push dword ptr [0xa4a6e]
    X86_AT(c, 0xc8e64u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A6Eu))); push32(c, v); }
    // 0c8e6a  push dword ptr [0xa4a52]
    X86_AT(c, 0xc8e6au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A52u))); push32(c, v); }
    // 0c8e70  call 0xc6038
    X86_AT(c, 0xc8e70u);
    push32(c, 0xc8e75u); x86_call_known(c, 0xc6038u, f_000c6038); X86_RET(c, 0xc8e75u);
    X86_TICK(c, 12);
    // 0c8e75  xchg esi, eax
    X86_AT(c, 0xc8e75u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0c8e76  add esp, 0xc
    X86_AT(c, 0xc8e76u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c8e79  cmp esi, 4
    X86_AT(c, 0xc8e79u);
    (void)x86_sub(c, c.r[6], 0x4u, 0, 4);
    // 0c8e7c  je 0xc8e9d
    X86_AT(c, 0xc8e7cu);
    if (x86_cc(c, 4)) { goto L_c8e9d; }
    X86_TICK(c, 9);
    // 0c8e7e  push 3
    X86_AT(c, 0xc8e7eu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c8e80  call 0xb607c
    X86_AT(c, 0xc8e80u);
    push32(c, 0xc8e85u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc8e85u);
    X86_TICK(c, 2);
    // 0c8e85  push 0x64b4
    X86_AT(c, 0xc8e85u);
    { uint32_t v = 0x64B4u; push32(c, v); }
L_c8e8a:
    X86_TICK(c, 9);
    // 0c8e8a  push 7
    X86_AT(c, 0xc8e8au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8e8c  call 0xba428
    X86_AT(c, 0xc8e8cu);
    push32(c, 0xc8e91u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc8e91u);
    X86_TICK(c, 9);
    // 0c8e91  push 7
    X86_AT(c, 0xc8e91u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8e93  call 0xbbb5c
    X86_AT(c, 0xc8e93u);
    push32(c, 0xc8e98u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc8e98u);
    X86_TICK(c, 9);
    // 0c8e98  add esp, 0x10
    X86_AT(c, 0xc8e98u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c8e9b  jmp 0xc8ebf
    X86_AT(c, 0xc8e9bu);
    goto L_c8ebf;
L_c8e9d:
    X86_TICK(c, 24);
    // 0c8e9d  push dword ptr [0xa4a72]
    X86_AT(c, 0xc8e9du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A72u))); push32(c, v); }
    // 0c8ea3  push dword ptr [0xa4a6e]
    X86_AT(c, 0xc8ea3u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A6Eu))); push32(c, v); }
    // 0c8ea9  push dword ptr [0xa4a52]
    X86_AT(c, 0xc8ea9u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A52u))); push32(c, v); }
    // 0c8eaf  push 0
    X86_AT(c, 0xc8eafu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c8eb1  call 0xc604c
    X86_AT(c, 0xc8eb1u);
    push32(c, 0xc8eb6u); x86_call_known(c, 0xc604cu, f_000c604c); X86_RET(c, 0xc8eb6u);
    X86_TICK(c, 9);
    // 0c8eb6  push edi
    X86_AT(c, 0xc8eb6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8eb7  call 0xcd148
    X86_AT(c, 0xc8eb7u);
    push32(c, 0xc8ebcu); x86_call_known(c, 0xcd148u, f_000cd148); X86_RET(c, 0xc8ebcu);
    X86_TICK(c, 2);
    // 0c8ebc  add esp, 0x14
    X86_AT(c, 0xc8ebcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_c8ebf:
    X86_TICK(c, 24);
    // 0c8ebf  pop edi
    X86_AT(c, 0xc8ebfu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c8ec0  pop esi
    X86_AT(c, 0xc8ec0u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c8ec1  leave 
    X86_AT(c, 0xc8ec1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c8ec2  ret 
    X86_AT(c, 0xc8ec2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc8dc4u, "ran off the end of a function");
}
void f_000c8ec4(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0c8ec4  push 5
    X86_AT(c, 0xc8ec4u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c8ec6  call 0xb607c
    X86_AT(c, 0xc8ec6u);
    push32(c, 0xc8ecbu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc8ecbu);
    X86_TICK(c, 9);
    // 0c8ecb  push 2
    X86_AT(c, 0xc8ecbu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c8ecd  call 0xbebbc
    X86_AT(c, 0xc8ecdu);
    push32(c, 0xc8ed2u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xc8ed2u);
    X86_TICK(c, 9);
    // 0c8ed2  push 0x14
    X86_AT(c, 0xc8ed2u);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0c8ed4  call 0xb61b4
    X86_AT(c, 0xc8ed4u);
    push32(c, 0xc8ed9u); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xc8ed9u);
    X86_TICK(c, 11);
    // 0c8ed9  add eax, 0xa
    X86_AT(c, 0xc8ed9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xAu, 0, 4); }
    // 0c8edc  push eax
    X86_AT(c, 0xc8edcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c8edd  call 0xc7e94
    X86_AT(c, 0xc8eddu);
    push32(c, 0xc8ee2u); x86_call_known(c, 0xc7e94u, f_000c7e94); X86_RET(c, 0xc8ee2u);
    X86_TICK(c, 12);
    // 0c8ee2  add esp, 0x10
    X86_AT(c, 0xc8ee2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c8ee5  ret 
    X86_AT(c, 0xc8ee5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc8ec4u, "ran off the end of a function");
}
void f_000c8ee8(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0c8ee8  cmp dword ptr [0xa4a56], 1
    X86_AT(c, 0xc8ee8u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x1u, 0, 4);
    // 0c8eef  je 0xc8f10
    X86_AT(c, 0xc8eefu);
    if (x86_cc(c, 4)) { goto L_c8f10; }
    X86_TICK(c, 9);
    // 0c8ef1  push 3
    X86_AT(c, 0xc8ef1u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c8ef3  call 0xb607c
    X86_AT(c, 0xc8ef3u);
    push32(c, 0xc8ef8u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc8ef8u);
    X86_TICK(c, 11);
    // 0c8ef8  push 0x64dc
    X86_AT(c, 0xc8ef8u);
    { uint32_t v = 0x64DCu; push32(c, v); }
    // 0c8efd  push 7
    X86_AT(c, 0xc8efdu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8eff  call 0xba428
    X86_AT(c, 0xc8effu);
    push32(c, 0xc8f04u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc8f04u);
    X86_TICK(c, 9);
    // 0c8f04  push 7
    X86_AT(c, 0xc8f04u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8f06  call 0xbbb5c
    X86_AT(c, 0xc8f06u);
    push32(c, 0xc8f0bu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc8f0bu);
    X86_TICK(c, 9);
    // 0c8f0b  add esp, 0x10
    X86_AT(c, 0xc8f0bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c8f0e  jmp 0xc8f26
    X86_AT(c, 0xc8f0eu);
    goto L_c8f26;
L_c8f10:
    X86_TICK(c, 9);
    // 0c8f10  push 5
    X86_AT(c, 0xc8f10u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c8f12  call 0xb607c
    X86_AT(c, 0xc8f12u);
    push32(c, 0xc8f17u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc8f17u);
    X86_TICK(c, 9);
    // 0c8f17  push 5
    X86_AT(c, 0xc8f17u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c8f19  call 0xbebbc
    X86_AT(c, 0xc8f19u);
    push32(c, 0xc8f1eu); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xc8f1eu);
    X86_TICK(c, 7);
    // 0c8f1e  call 0xc812c
    X86_AT(c, 0xc8f1eu);
    push32(c, 0xc8f23u); x86_call_known(c, 0xc812cu, f_000c812c); X86_RET(c, 0xc8f23u);
    X86_TICK(c, 2);
    // 0c8f23  add esp, 8
    X86_AT(c, 0xc8f23u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c8f26:
    X86_TICK(c, 10);
    // 0c8f26  ret 
    X86_AT(c, 0xc8f26u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc8ee8u, "ran off the end of a function");
}
void f_000c8f28(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0c8f28  push ebp
    X86_AT(c, 0xc8f28u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c8f29  mov ebp, esp
    X86_AT(c, 0xc8f29u);
    c.r[5] = c.r[4];
    // 0c8f2b  push esi
    X86_AT(c, 0xc8f2bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c8f2c  push edi
    X86_AT(c, 0xc8f2cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8f2d  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc8f2du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c8f30  push 7
    X86_AT(c, 0xc8f30u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8f32  call 0xbb6b0
    X86_AT(c, 0xc8f32u);
    push32(c, 0xc8f37u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc8f37u);
    X86_TICK(c, 11);
    // 0c8f37  push 0x6500
    X86_AT(c, 0xc8f37u);
    { uint32_t v = 0x6500u; push32(c, v); }
    // 0c8f3c  push 7
    X86_AT(c, 0xc8f3cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8f3e  call 0xba428
    X86_AT(c, 0xc8f3eu);
    push32(c, 0xc8f43u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc8f43u);
    X86_TICK(c, 9);
    // 0c8f43  push 7
    X86_AT(c, 0xc8f43u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8f45  call 0xbbb5c
    X86_AT(c, 0xc8f45u);
    push32(c, 0xc8f4au); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc8f4au);
    X86_TICK(c, 11);
    // 0c8f4a  push 0
    X86_AT(c, 0xc8f4au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c8f4c  push 7
    X86_AT(c, 0xc8f4cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8f4e  call 0xb6f28
    X86_AT(c, 0xc8f4eu);
    push32(c, 0xc8f53u); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xc8f53u);
    X86_TICK(c, 12);
    // 0c8f53  xchg esi, eax
    X86_AT(c, 0xc8f53u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0c8f54  add esp, 0x18
    X86_AT(c, 0xc8f54u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0c8f57  cmp esi, 0xffffffff
    X86_AT(c, 0xc8f57u);
    (void)x86_sub(c, c.r[6], 0xFFFFFFFFu, 0, 4);
    // 0c8f5a  jne 0xc8f88
    X86_AT(c, 0xc8f5au);
    if (x86_cc(c, 5)) { goto L_c8f88; }
    X86_TICK(c, 11);
    // 0c8f5c  push 0x6528
    X86_AT(c, 0xc8f5cu);
    { uint32_t v = 0x6528u; push32(c, v); }
    // 0c8f61  push 7
    X86_AT(c, 0xc8f61u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8f63  call 0xba428
    X86_AT(c, 0xc8f63u);
    push32(c, 0xc8f68u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc8f68u);
    X86_TICK(c, 9);
    // 0c8f68  push 7
    X86_AT(c, 0xc8f68u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8f6a  call 0xbbb5c
    X86_AT(c, 0xc8f6au);
    push32(c, 0xc8f6fu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc8f6fu);
    X86_TICK(c, 27);
    // 0c8f6f  mov eax, edi
    X86_AT(c, 0xc8f6fu);
    c.r[0] = c.r[7];
    // 0c8f71  lea edx, [eax + eax*2]
    X86_AT(c, 0xc8f71u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c8f74  shl edx, 5
    X86_AT(c, 0xc8f74u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c8f77  add edx, eax
    X86_AT(c, 0xc8f77u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c8f79  lea edx, [eax + edx*2]
    X86_AT(c, 0xc8f79u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c8f7c  add dword ptr [edx + 0xa4ad1], 0x23
    X86_AT(c, 0xc8f7cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD1u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x23u, 0, 4)); }
    // 0c8f83  add esp, 0xc
    X86_AT(c, 0xc8f83u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c8f86  jmp 0xc8ff2
    X86_AT(c, 0xc8f86u);
    goto L_c8ff2;
L_c8f88:
    X86_TICK(c, 23);
    // 0c8f88  mov eax, esi
    X86_AT(c, 0xc8f88u);
    c.r[0] = c.r[6];
    // 0c8f8a  lea edx, [eax + eax*2]
    X86_AT(c, 0xc8f8au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c8f8d  shl edx, 5
    X86_AT(c, 0xc8f8du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c8f90  add edx, eax
    X86_AT(c, 0xc8f90u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c8f92  lea edx, [eax + edx*2]
    X86_AT(c, 0xc8f92u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c8f95  cmp byte ptr [edx + 0xa4abd], 0x50
    X86_AT(c, 0xc8f95u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu))), 0x50u, 0, 1);
    // 0c8f9c  je 0xc8fbb
    X86_AT(c, 0xc8f9cu);
    if (x86_cc(c, 4)) { goto L_c8fbb; }
    X86_TICK(c, 9);
    // 0c8f9e  push 0
    X86_AT(c, 0xc8f9eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c8fa0  call 0xb607c
    X86_AT(c, 0xc8fa0u);
    push32(c, 0xc8fa5u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc8fa5u);
    X86_TICK(c, 11);
    // 0c8fa5  push 0x6540
    X86_AT(c, 0xc8fa5u);
    { uint32_t v = 0x6540u; push32(c, v); }
    // 0c8faa  push 7
    X86_AT(c, 0xc8faau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8fac  call 0xba428
    X86_AT(c, 0xc8facu);
    push32(c, 0xc8fb1u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc8fb1u);
    X86_TICK(c, 9);
    // 0c8fb1  push 7
    X86_AT(c, 0xc8fb1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c8fb3  call 0xbbb5c
    X86_AT(c, 0xc8fb3u);
    push32(c, 0xc8fb8u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc8fb8u);
    X86_TICK(c, 2);
    // 0c8fb8  add esp, 0x10
    X86_AT(c, 0xc8fb8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_c8fbb:
    X86_TICK(c, 22);
    // 0c8fbb  mov eax, esi
    X86_AT(c, 0xc8fbbu);
    c.r[0] = c.r[6];
    // 0c8fbd  lea edx, [eax + eax*2]
    X86_AT(c, 0xc8fbdu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c8fc0  shl edx, 5
    X86_AT(c, 0xc8fc0u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c8fc3  add edx, eax
    X86_AT(c, 0xc8fc3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c8fc5  lea edx, [eax + edx*2]
    X86_AT(c, 0xc8fc5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c8fc8  mov byte ptr [edx + 0xa4abd], 0x47
    X86_AT(c, 0xc8fc8u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu)), 0x47u);
    // 0c8fcf  push 5
    X86_AT(c, 0xc8fcfu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c8fd1  call 0xb607c
    X86_AT(c, 0xc8fd1u);
    push32(c, 0xc8fd6u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc8fd6u);
    X86_TICK(c, 9);
    // 0c8fd6  push esi
    X86_AT(c, 0xc8fd6u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c8fd7  call 0xc7f0c
    X86_AT(c, 0xc8fd7u);
    push32(c, 0xc8fdcu); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xc8fdcu);
    X86_TICK(c, 9);
    // 0c8fdc  push 5
    X86_AT(c, 0xc8fdcu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c8fde  call 0xbebbc
    X86_AT(c, 0xc8fdeu);
    push32(c, 0xc8fe3u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xc8fe3u);
    X86_TICK(c, 9);
    // 0c8fe3  push esi
    X86_AT(c, 0xc8fe3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c8fe4  call 0xc7f0c
    X86_AT(c, 0xc8fe4u);
    push32(c, 0xc8fe9u); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xc8fe9u);
    X86_TICK(c, 9);
    // 0c8fe9  push esi
    X86_AT(c, 0xc8fe9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c8fea  call 0xbe720
    X86_AT(c, 0xc8feau);
    push32(c, 0xc8fefu); x86_call_known(c, 0xbe720u, f_000be720); X86_RET(c, 0xc8fefu);
    X86_TICK(c, 2);
    // 0c8fef  add esp, 0x14
    X86_AT(c, 0xc8fefu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_c8ff2:
    X86_TICK(c, 24);
    // 0c8ff2  pop edi
    X86_AT(c, 0xc8ff2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c8ff3  pop esi
    X86_AT(c, 0xc8ff3u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c8ff4  leave 
    X86_AT(c, 0xc8ff4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c8ff5  ret 
    X86_AT(c, 0xc8ff5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc8f28u, "ran off the end of a function");
}
void f_000c8ff8(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0c8ff8  cmp dword ptr [0xa4a56], 1
    X86_AT(c, 0xc8ff8u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x1u, 0, 4);
    // 0c8fff  je 0xc9020
    X86_AT(c, 0xc8fffu);
    if (x86_cc(c, 4)) { goto L_c9020; }
    X86_TICK(c, 9);
    // 0c9001  push 3
    X86_AT(c, 0xc9001u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c9003  call 0xb607c
    X86_AT(c, 0xc9003u);
    push32(c, 0xc9008u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc9008u);
    X86_TICK(c, 11);
    // 0c9008  push 0x6560
    X86_AT(c, 0xc9008u);
    { uint32_t v = 0x6560u; push32(c, v); }
    // 0c900d  push 7
    X86_AT(c, 0xc900du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c900f  call 0xba428
    X86_AT(c, 0xc900fu);
    push32(c, 0xc9014u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc9014u);
    X86_TICK(c, 9);
    // 0c9014  push 7
    X86_AT(c, 0xc9014u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c9016  call 0xbbb5c
    X86_AT(c, 0xc9016u);
    push32(c, 0xc901bu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc901bu);
    X86_TICK(c, 9);
    // 0c901b  add esp, 0x10
    X86_AT(c, 0xc901bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c901e  jmp 0xc903a
    X86_AT(c, 0xc901eu);
    goto L_c903a;
L_c9020:
    X86_TICK(c, 9);
    // 0c9020  push 5
    X86_AT(c, 0xc9020u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c9022  call 0xb607c
    X86_AT(c, 0xc9022u);
    push32(c, 0xc9027u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc9027u);
    X86_TICK(c, 9);
    // 0c9027  push 5
    X86_AT(c, 0xc9027u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c9029  call 0xbebbc
    X86_AT(c, 0xc9029u);
    push32(c, 0xc902eu); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xc902eu);
    X86_TICK(c, 4);
    // 0c902e  mov word ptr [0xa8a18], 0
    X86_AT(c, 0xc902eu);
    wr16((c.sbase[3] + (uint32_t)(0xA8A18u)), 0x0u);
    // 0c9037  add esp, 8
    X86_AT(c, 0xc9037u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c903a:
    X86_TICK(c, 10);
    // 0c903a  ret 
    X86_AT(c, 0xc903au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc8ff8u, "ran off the end of a function");
}
void f_000c903c(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0c903c  push 5
    X86_AT(c, 0xc903cu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c903e  call 0xb607c
    X86_AT(c, 0xc903eu);
    push32(c, 0xc9043u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc9043u);
    X86_TICK(c, 9);
    // 0c9043  push 5
    X86_AT(c, 0xc9043u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c9045  call 0xbebbc
    X86_AT(c, 0xc9045u);
    push32(c, 0xc904au); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xc904au);
    X86_TICK(c, 9);
    // 0c904a  push 0x50
    X86_AT(c, 0xc904au);
    { uint32_t v = 0x50u; push32(c, v); }
    // 0c904c  call 0xb61b4
    X86_AT(c, 0xc904cu);
    push32(c, 0xc9051u); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xc9051u);
    X86_TICK(c, 11);
    // 0c9051  add eax, 0x14
    X86_AT(c, 0xc9051u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x14u, 0, 4); }
    // 0c9054  push eax
    X86_AT(c, 0xc9054u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c9055  call 0xc7e94
    X86_AT(c, 0xc9055u);
    push32(c, 0xc905au); x86_call_known(c, 0xc7e94u, f_000c7e94); X86_RET(c, 0xc905au);
    X86_TICK(c, 12);
    // 0c905a  add esp, 0x10
    X86_AT(c, 0xc905au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c905d  ret 
    X86_AT(c, 0xc905du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc903cu, "ran off the end of a function");
}
void f_000c9060(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0c9060  push 7
    X86_AT(c, 0xc9060u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c9062  call 0xbb6b0
    X86_AT(c, 0xc9062u);
    push32(c, 0xc9067u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc9067u);
    X86_TICK(c, 9);
    // 0c9067  push 5
    X86_AT(c, 0xc9067u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c9069  call 0xb607c
    X86_AT(c, 0xc9069u);
    push32(c, 0xc906eu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc906eu);
    X86_TICK(c, 9);
    // 0c906e  push 5
    X86_AT(c, 0xc906eu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c9070  call 0xbebbc
    X86_AT(c, 0xc9070u);
    push32(c, 0xc9075u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xc9075u);
    X86_TICK(c, 14);
    // 0c9075  add esp, 0xc
    X86_AT(c, 0xc9075u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c9078  cmp dword ptr [0xa4a56], 0x80
    X86_AT(c, 0xc9078u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x80u, 0, 4);
    // 0c9082  jne 0xc90a3
    X86_AT(c, 0xc9082u);
    if (x86_cc(c, 5)) { goto L_c90a3; }
    X86_TICK(c, 9);
    // 0c9084  push 3
    X86_AT(c, 0xc9084u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c9086  call 0xb607c
    X86_AT(c, 0xc9086u);
    push32(c, 0xc908bu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc908bu);
    X86_TICK(c, 11);
    // 0c908b  push 0x6584
    X86_AT(c, 0xc908bu);
    { uint32_t v = 0x6584u; push32(c, v); }
    // 0c9090  push 7
    X86_AT(c, 0xc9090u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c9092  call 0xba428
    X86_AT(c, 0xc9092u);
    push32(c, 0xc9097u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc9097u);
    X86_TICK(c, 9);
    // 0c9097  push 7
    X86_AT(c, 0xc9097u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c9099  call 0xbbb5c
    X86_AT(c, 0xc9099u);
    push32(c, 0xc909eu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc909eu);
    X86_TICK(c, 9);
    // 0c909e  add esp, 0x10
    X86_AT(c, 0xc909eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c90a1  jmp 0xc90c5
    X86_AT(c, 0xc90a1u);
    goto L_c90c5;
L_c90a3:
    X86_TICK(c, 12);
    // 0c90a3  cmp dword ptr [0xa4a56], 1
    X86_AT(c, 0xc90a3u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x1u, 0, 4);
    // 0c90aa  jne 0xc90b8
    X86_AT(c, 0xc90aau);
    if (x86_cc(c, 5)) { goto L_c90b8; }
    X86_TICK(c, 9);
    // 0c90ac  push 0x65b4
    X86_AT(c, 0xc90acu);
    { uint32_t v = 0x65B4u; push32(c, v); }
    // 0c90b1  call 0xc6064
    X86_AT(c, 0xc90b1u);
    push32(c, 0xc90b6u); x86_call_known(c, 0xc6064u, f_000c6064); X86_RET(c, 0xc90b6u);
    X86_TICK(c, 7);
    // 0c90b6  jmp 0xc90c2
    X86_AT(c, 0xc90b6u);
    goto L_c90c2;
L_c90b8:
    X86_TICK(c, 9);
    // 0c90b8  push 0x65e4
    X86_AT(c, 0xc90b8u);
    { uint32_t v = 0x65E4u; push32(c, v); }
    // 0c90bd  call 0xc5488
    X86_AT(c, 0xc90bdu);
    push32(c, 0xc90c2u); x86_call_known(c, 0xc5488u, f_000c5488); X86_RET(c, 0xc90c2u);
L_c90c2:
    X86_TICK(c, 2);
    // 0c90c2  add esp, 4
    X86_AT(c, 0xc90c2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_c90c5:
    X86_TICK(c, 10);
    // 0c90c5  ret 
    X86_AT(c, 0xc90c5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc9060u, "ran off the end of a function");
}
void f_000c90c8(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0c90c8  push ebp
    X86_AT(c, 0xc90c8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c90c9  mov ebp, esp
    X86_AT(c, 0xc90c9u);
    c.r[5] = c.r[4];
    // 0c90cb  push edi
    X86_AT(c, 0xc90cbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c90cc  push 7
    X86_AT(c, 0xc90ccu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c90ce  call 0xbb6b0
    X86_AT(c, 0xc90ceu);
    push32(c, 0xc90d3u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc90d3u);
    X86_TICK(c, 9);
    // 0c90d3  push 5
    X86_AT(c, 0xc90d3u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c90d5  call 0xb607c
    X86_AT(c, 0xc90d5u);
    push32(c, 0xc90dau); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc90dau);
    X86_TICK(c, 9);
    // 0c90da  push 5
    X86_AT(c, 0xc90dau);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c90dc  call 0xbebbc
    X86_AT(c, 0xc90dcu);
    push32(c, 0xc90e1u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xc90e1u);
    X86_TICK(c, 14);
    // 0c90e1  add esp, 0xc
    X86_AT(c, 0xc90e1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c90e4  cmp dword ptr [0xa4a56], 0x80
    X86_AT(c, 0xc90e4u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x80u, 0, 4);
    // 0c90ee  jne 0xc9112
    X86_AT(c, 0xc90eeu);
    if (x86_cc(c, 5)) { goto L_c9112; }
    X86_TICK(c, 9);
    // 0c90f0  push 3
    X86_AT(c, 0xc90f0u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c90f2  call 0xb607c
    X86_AT(c, 0xc90f2u);
    push32(c, 0xc90f7u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc90f7u);
    X86_TICK(c, 11);
    // 0c90f7  push 0x660c
    X86_AT(c, 0xc90f7u);
    { uint32_t v = 0x660Cu; push32(c, v); }
    // 0c90fc  push 7
    X86_AT(c, 0xc90fcu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c90fe  call 0xba428
    X86_AT(c, 0xc90feu);
    push32(c, 0xc9103u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc9103u);
    X86_TICK(c, 9);
    // 0c9103  push 7
    X86_AT(c, 0xc9103u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c9105  call 0xbbb5c
    X86_AT(c, 0xc9105u);
    push32(c, 0xc910au); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc910au);
    X86_TICK(c, 9);
    // 0c910a  add esp, 0x10
    X86_AT(c, 0xc910au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c910d  jmp 0xc9235
    X86_AT(c, 0xc910du);
    goto L_c9235;
L_c9112:
    X86_TICK(c, 11);
    // 0c9112  push 0x663c
    X86_AT(c, 0xc9112u);
    { uint32_t v = 0x663Cu; push32(c, v); }
    // 0c9117  push 7
    X86_AT(c, 0xc9117u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c9119  call 0xba428
    X86_AT(c, 0xc9119u);
    push32(c, 0xc911eu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc911eu);
    X86_TICK(c, 9);
    // 0c911e  push 7
    X86_AT(c, 0xc911eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c9120  call 0xbbb5c
    X86_AT(c, 0xc9120u);
    push32(c, 0xc9125u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc9125u);
    X86_TICK(c, 11);
    // 0c9125  push 0xffffffff
    X86_AT(c, 0xc9125u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0c9127  push 7
    X86_AT(c, 0xc9127u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c9129  call 0xb6f28
    X86_AT(c, 0xc9129u);
    push32(c, 0xc912eu); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xc912eu);
    X86_TICK(c, 12);
    // 0c912e  xchg edi, eax
    X86_AT(c, 0xc912eu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0c912f  add esp, 0x14
    X86_AT(c, 0xc912fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0c9132  cmp edi, 0xffffffff
    X86_AT(c, 0xc9132u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0c9135  jne 0xc913e
    X86_AT(c, 0xc9135u);
    if (x86_cc(c, 5)) { goto L_c913e; }
    X86_TICK(c, 9);
    // 0c9137  push 0x666c
    X86_AT(c, 0xc9137u);
    { uint32_t v = 0x666Cu; push32(c, v); }
    // 0c913c  jmp 0xc9159
    X86_AT(c, 0xc913cu);
    goto L_c9159;
L_c913e:
    X86_TICK(c, 23);
    // 0c913e  mov eax, edi
    X86_AT(c, 0xc913eu);
    c.r[0] = c.r[7];
    // 0c9140  lea edx, [eax + eax*2]
    X86_AT(c, 0xc9140u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c9143  shl edx, 5
    X86_AT(c, 0xc9143u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c9146  add edx, eax
    X86_AT(c, 0xc9146u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c9148  lea edx, [eax + edx*2]
    X86_AT(c, 0xc9148u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c914b  cmp byte ptr [edx + 0xa4abd], 0x44
    X86_AT(c, 0xc914bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu))), 0x44u, 0, 1);
    // 0c9152  je 0xc916f
    X86_AT(c, 0xc9152u);
    if (x86_cc(c, 4)) { goto L_c916f; }
    X86_TICK(c, 2);
    // 0c9154  push 0x6684
    X86_AT(c, 0xc9154u);
    { uint32_t v = 0x6684u; push32(c, v); }
L_c9159:
    X86_TICK(c, 9);
    // 0c9159  push 7
    X86_AT(c, 0xc9159u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c915b  call 0xba428
    X86_AT(c, 0xc915bu);
    push32(c, 0xc9160u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc9160u);
    X86_TICK(c, 9);
    // 0c9160  push 7
    X86_AT(c, 0xc9160u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c9162  call 0xbbb5c
    X86_AT(c, 0xc9162u);
    push32(c, 0xc9167u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc9167u);
    X86_TICK(c, 9);
    // 0c9167  add esp, 0xc
    X86_AT(c, 0xc9167u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c916a  jmp 0xc9235
    X86_AT(c, 0xc916au);
    goto L_c9235;
L_c916f:
    X86_TICK(c, 25);
    // 0c916f  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xc916fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c9172  lea edx, [eax + eax*2]
    X86_AT(c, 0xc9172u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c9175  shl edx, 5
    X86_AT(c, 0xc9175u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c9178  add edx, eax
    X86_AT(c, 0xc9178u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c917a  lea edx, [eax + edx*2]
    X86_AT(c, 0xc917au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c917d  cmp dword ptr [edx + 0xa4aca], 0x32
    X86_AT(c, 0xc917du);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ACAu))), 0x32u, 0, 4);
    // 0c9184  jle 0xc918a
    X86_AT(c, 0xc9184u);
    if (x86_cc(c, 14)) { goto L_c918a; }
    X86_TICK(c, 9);
    // 0c9186  push 6
    X86_AT(c, 0xc9186u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c9188  jmp 0xc918c
    X86_AT(c, 0xc9188u);
    goto L_c918c;
L_c918a:
    X86_TICK(c, 2);
    // 0c918a  push 3
    X86_AT(c, 0xc918au);
    { uint32_t v = 0x3u; push32(c, v); }
L_c918c:
    X86_TICK(c, 7);
    // 0c918c  call 0xb61b4
    X86_AT(c, 0xc918cu);
    push32(c, 0xc9191u); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xc9191u);
    X86_TICK(c, 9);
    // 0c9191  add esp, 4
    X86_AT(c, 0xc9191u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c9194  and eax, eax
    X86_AT(c, 0xc9194u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c9196  jne 0xc91ae
    X86_AT(c, 0xc9196u);
    if (x86_cc(c, 5)) { goto L_c91ae; }
    X86_TICK(c, 20);
    // 0c9198  mov eax, edi
    X86_AT(c, 0xc9198u);
    c.r[0] = c.r[7];
    // 0c919a  lea edx, [eax + eax*2]
    X86_AT(c, 0xc919au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c919d  shl edx, 5
    X86_AT(c, 0xc919du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c91a0  add edx, eax
    X86_AT(c, 0xc91a0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c91a2  lea edx, [eax + edx*2]
    X86_AT(c, 0xc91a2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c91a5  mov byte ptr [edx + 0xa4abd], 0x41
    X86_AT(c, 0xc91a5u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu)), 0x41u);
    // 0c91ac  jmp 0xc91c2
    X86_AT(c, 0xc91acu);
    goto L_c91c2;
L_c91ae:
    X86_TICK(c, 13);
    // 0c91ae  mov eax, edi
    X86_AT(c, 0xc91aeu);
    c.r[0] = c.r[7];
    // 0c91b0  lea edx, [eax + eax*2]
    X86_AT(c, 0xc91b0u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c91b3  shl edx, 5
    X86_AT(c, 0xc91b3u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c91b6  add edx, eax
    X86_AT(c, 0xc91b6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c91b8  lea edx, [eax + edx*2]
    X86_AT(c, 0xc91b8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c91bb  mov byte ptr [edx + 0xa4abd], 0x47
    X86_AT(c, 0xc91bbu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu)), 0x47u);
L_c91c2:
    X86_TICK(c, 9);
    // 0c91c2  push 5
    X86_AT(c, 0xc91c2u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c91c4  call 0xb607c
    X86_AT(c, 0xc91c4u);
    push32(c, 0xc91c9u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc91c9u);
    X86_TICK(c, 9);
    // 0c91c9  push edi
    X86_AT(c, 0xc91c9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c91ca  call 0xc7f0c
    X86_AT(c, 0xc91cau);
    push32(c, 0xc91cfu); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xc91cfu);
    X86_TICK(c, 9);
    // 0c91cf  push 5
    X86_AT(c, 0xc91cfu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c91d1  call 0xbebbc
    X86_AT(c, 0xc91d1u);
    push32(c, 0xc91d6u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xc91d6u);
    X86_TICK(c, 25);
    // 0c91d6  mov eax, edi
    X86_AT(c, 0xc91d6u);
    c.r[0] = c.r[7];
    // 0c91d8  lea edx, [eax + eax*2]
    X86_AT(c, 0xc91d8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c91db  shl edx, 5
    X86_AT(c, 0xc91dbu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c91de  add edx, eax
    X86_AT(c, 0xc91deu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c91e0  lea edx, [eax + edx*2]
    X86_AT(c, 0xc91e0u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c91e3  add esp, 0xc
    X86_AT(c, 0xc91e3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c91e6  cmp byte ptr [edx + 0xa4abd], 0x41
    X86_AT(c, 0xc91e6u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu))), 0x41u, 0, 1);
    // 0c91ed  jne 0xc921c
    X86_AT(c, 0xc91edu);
    if (x86_cc(c, 5)) { goto L_c921c; }
    X86_TICK(c, 9);
    // 0c91ef  push 3
    X86_AT(c, 0xc91efu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c91f1  call 0xb607c
    X86_AT(c, 0xc91f1u);
    push32(c, 0xc91f6u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc91f6u);
    X86_TICK(c, 9);
    // 0c91f6  push 2
    X86_AT(c, 0xc91f6u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c91f8  call 0xbebbc
    X86_AT(c, 0xc91f8u);
    push32(c, 0xc91fdu); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xc91fdu);
    X86_TICK(c, 9);
    // 0c91fd  push 7
    X86_AT(c, 0xc91fdu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c91ff  call 0xbb6b0
    X86_AT(c, 0xc91ffu);
    push32(c, 0xc9204u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc9204u);
    X86_TICK(c, 11);
    // 0c9204  push 0x66a4
    X86_AT(c, 0xc9204u);
    { uint32_t v = 0x66A4u; push32(c, v); }
    // 0c9209  push 7
    X86_AT(c, 0xc9209u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c920b  call 0xba428
    X86_AT(c, 0xc920bu);
    push32(c, 0xc9210u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc9210u);
    X86_TICK(c, 9);
    // 0c9210  push 7
    X86_AT(c, 0xc9210u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c9212  call 0xbbb5c
    X86_AT(c, 0xc9212u);
    push32(c, 0xc9217u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc9217u);
    X86_TICK(c, 9);
    // 0c9217  add esp, 0x18
    X86_AT(c, 0xc9217u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0c921a  jmp 0xc9226
    X86_AT(c, 0xc921au);
    goto L_c9226;
L_c921c:
    X86_TICK(c, 9);
    // 0c921c  push 2
    X86_AT(c, 0xc921cu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c921e  call 0xbebbc
    X86_AT(c, 0xc921eu);
    push32(c, 0xc9223u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xc9223u);
    X86_TICK(c, 2);
    // 0c9223  add esp, 4
    X86_AT(c, 0xc9223u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_c9226:
    X86_TICK(c, 9);
    // 0c9226  push edi
    X86_AT(c, 0xc9226u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c9227  call 0xc7f0c
    X86_AT(c, 0xc9227u);
    push32(c, 0xc922cu); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xc922cu);
    X86_TICK(c, 9);
    // 0c922c  push edi
    X86_AT(c, 0xc922cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c922d  call 0xbe720
    X86_AT(c, 0xc922du);
    push32(c, 0xc9232u); x86_call_known(c, 0xbe720u, f_000be720); X86_RET(c, 0xc9232u);
    X86_TICK(c, 2);
    // 0c9232  add esp, 8
    X86_AT(c, 0xc9232u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c9235:
    X86_TICK(c, 20);
    // 0c9235  pop edi
    X86_AT(c, 0xc9235u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c9236  leave 
    X86_AT(c, 0xc9236u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c9237  ret 
    X86_AT(c, 0xc9237u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc90c8u, "ran off the end of a function");
}
void f_000c9235(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0c9235  pop edi
    X86_AT(c, 0xc9235u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c9236  leave 
    X86_AT(c, 0xc9236u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c9237  ret 
    X86_AT(c, 0xc9237u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc9235u, "ran off the end of a function");
}
void f_000c9238(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0c9238  push ebp
    X86_AT(c, 0xc9238u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c9239  mov ebp, esp
    X86_AT(c, 0xc9239u);
    c.r[5] = c.r[4];
    // 0c923b  push esi
    X86_AT(c, 0xc923bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c923c  push edi
    X86_AT(c, 0xc923cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c923d  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc923du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c9240  push 5
    X86_AT(c, 0xc9240u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c9242  call 0xb607c
    X86_AT(c, 0xc9242u);
    push32(c, 0xc9247u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc9247u);
    X86_TICK(c, 9);
    // 0c9247  push 5
    X86_AT(c, 0xc9247u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c9249  call 0xbebbc
    X86_AT(c, 0xc9249u);
    push32(c, 0xc924eu); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xc924eu);
    X86_TICK(c, 9);
    // 0c924e  push 7
    X86_AT(c, 0xc924eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c9250  call 0xbb6b0
    X86_AT(c, 0xc9250u);
    push32(c, 0xc9255u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc9255u);
    X86_TICK(c, 14);
    // 0c9255  add esp, 0xc
    X86_AT(c, 0xc9255u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c9258  cmp dword ptr [0xa4a56], 0x80
    X86_AT(c, 0xc9258u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A56u))), 0x80u, 0, 4);
    // 0c9262  jne 0xc9286
    X86_AT(c, 0xc9262u);
    if (x86_cc(c, 5)) { goto L_c9286; }
    X86_TICK(c, 9);
    // 0c9264  push 3
    X86_AT(c, 0xc9264u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c9266  call 0xb607c
    X86_AT(c, 0xc9266u);
    push32(c, 0xc926bu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc926bu);
    X86_TICK(c, 11);
    // 0c926b  push 0x66d8
    X86_AT(c, 0xc926bu);
    { uint32_t v = 0x66D8u; push32(c, v); }
    // 0c9270  push 7
    X86_AT(c, 0xc9270u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c9272  call 0xba428
    X86_AT(c, 0xc9272u);
    push32(c, 0xc9277u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc9277u);
    X86_TICK(c, 9);
    // 0c9277  push 7
    X86_AT(c, 0xc9277u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c9279  call 0xbbb5c
    X86_AT(c, 0xc9279u);
    push32(c, 0xc927eu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc927eu);
    X86_TICK(c, 9);
    // 0c927e  add esp, 0x10
    X86_AT(c, 0xc927eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c9281  jmp 0xc933d
    X86_AT(c, 0xc9281u);
    goto L_c933d;
L_c9286:
    X86_TICK(c, 11);
    // 0c9286  push 0x6708
    X86_AT(c, 0xc9286u);
    { uint32_t v = 0x6708u; push32(c, v); }
    // 0c928b  push 7
    X86_AT(c, 0xc928bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c928d  call 0xba428
    X86_AT(c, 0xc928du);
    push32(c, 0xc9292u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc9292u);
    X86_TICK(c, 9);
    // 0c9292  push 7
    X86_AT(c, 0xc9292u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c9294  call 0xbbb5c
    X86_AT(c, 0xc9294u);
    push32(c, 0xc9299u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc9299u);
    X86_TICK(c, 11);
    // 0c9299  push 0xffffffff
    X86_AT(c, 0xc9299u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0c929b  push 7
    X86_AT(c, 0xc929bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c929d  call 0xb6f28
    X86_AT(c, 0xc929du);
    push32(c, 0xc92a2u); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xc92a2u);
    X86_TICK(c, 12);
    // 0c92a2  xchg esi, eax
    X86_AT(c, 0xc92a2u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0c92a3  add esp, 0x14
    X86_AT(c, 0xc92a3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0c92a6  cmp esi, 0xffffffff
    X86_AT(c, 0xc92a6u);
    (void)x86_sub(c, c.r[6], 0xFFFFFFFFu, 0, 4);
    // 0c92a9  jne 0xc92b2
    X86_AT(c, 0xc92a9u);
    if (x86_cc(c, 5)) { goto L_c92b2; }
    X86_TICK(c, 9);
    // 0c92ab  push 0x6738
    X86_AT(c, 0xc92abu);
    { uint32_t v = 0x6738u; push32(c, v); }
    // 0c92b0  jmp 0xc92cd
    X86_AT(c, 0xc92b0u);
    goto L_c92cd;
L_c92b2:
    X86_TICK(c, 23);
    // 0c92b2  mov eax, esi
    X86_AT(c, 0xc92b2u);
    c.r[0] = c.r[6];
    // 0c92b4  lea edx, [eax + eax*2]
    X86_AT(c, 0xc92b4u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c92b7  shl edx, 5
    X86_AT(c, 0xc92b7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c92ba  add edx, eax
    X86_AT(c, 0xc92bau);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c92bc  lea edx, [eax + edx*2]
    X86_AT(c, 0xc92bcu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c92bf  cmp byte ptr [edx + 0xa4abd], 0x41
    X86_AT(c, 0xc92bfu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu))), 0x41u, 0, 1);
    // 0c92c6  je 0xc92e0
    X86_AT(c, 0xc92c6u);
    if (x86_cc(c, 4)) { goto L_c92e0; }
    X86_TICK(c, 2);
    // 0c92c8  push 0x6750
    X86_AT(c, 0xc92c8u);
    { uint32_t v = 0x6750u; push32(c, v); }
L_c92cd:
    X86_TICK(c, 9);
    // 0c92cd  push 7
    X86_AT(c, 0xc92cdu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c92cf  call 0xba428
    X86_AT(c, 0xc92cfu);
    push32(c, 0xc92d4u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc92d4u);
    X86_TICK(c, 9);
    // 0c92d4  push 7
    X86_AT(c, 0xc92d4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c92d6  call 0xbbb5c
    X86_AT(c, 0xc92d6u);
    push32(c, 0xc92dbu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc92dbu);
    X86_TICK(c, 9);
    // 0c92db  add esp, 0xc
    X86_AT(c, 0xc92dbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c92de  jmp 0xc933d
    X86_AT(c, 0xc92deu);
    goto L_c933d;
L_c92e0:
    X86_TICK(c, 40);
    // 0c92e0  mov eax, edi
    X86_AT(c, 0xc92e0u);
    c.r[0] = c.r[7];
    // 0c92e2  lea edx, [eax + eax*2]
    X86_AT(c, 0xc92e2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c92e5  shl edx, 5
    X86_AT(c, 0xc92e5u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c92e8  add edx, eax
    X86_AT(c, 0xc92e8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c92ea  lea edx, [eax + edx*2]
    X86_AT(c, 0xc92eau);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c92ed  sub dword ptr [edx + 0xa4aca], 5
    X86_AT(c, 0xc92edu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ACAu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, 0x5u, 0, 4)); }
    // 0c92f4  mov eax, esi
    X86_AT(c, 0xc92f4u);
    c.r[0] = c.r[6];
    // 0c92f6  lea edx, [eax + eax*2]
    X86_AT(c, 0xc92f6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c92f9  shl edx, 5
    X86_AT(c, 0xc92f9u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c92fc  add edx, eax
    X86_AT(c, 0xc92fcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c92fe  lea edx, [eax + edx*2]
    X86_AT(c, 0xc92feu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c9301  mov byte ptr [edx + 0xa4abd], 0x47
    X86_AT(c, 0xc9301u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu)), 0x47u);
    // 0c9308  push 8
    X86_AT(c, 0xc9308u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0c930a  call 0xb607c
    X86_AT(c, 0xc930au);
    push32(c, 0xc930fu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc930fu);
    X86_TICK(c, 9);
    // 0c930f  push esi
    X86_AT(c, 0xc930fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c9310  call 0xc7f0c
    X86_AT(c, 0xc9310u);
    push32(c, 0xc9315u); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xc9315u);
    X86_TICK(c, 9);
    // 0c9315  push edi
    X86_AT(c, 0xc9315u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c9316  call 0xc7f0c
    X86_AT(c, 0xc9316u);
    push32(c, 0xc931bu); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xc931bu);
    X86_TICK(c, 9);
    // 0c931b  push 4
    X86_AT(c, 0xc931bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c931d  call 0xbebbc
    X86_AT(c, 0xc931du);
    push32(c, 0xc9322u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xc9322u);
    X86_TICK(c, 9);
    // 0c9322  push esi
    X86_AT(c, 0xc9322u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c9323  call 0xc7f0c
    X86_AT(c, 0xc9323u);
    push32(c, 0xc9328u); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xc9328u);
    X86_TICK(c, 9);
    // 0c9328  push edi
    X86_AT(c, 0xc9328u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c9329  call 0xc7f0c
    X86_AT(c, 0xc9329u);
    push32(c, 0xc932eu); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xc932eu);
    X86_TICK(c, 9);
    // 0c932e  push esi
    X86_AT(c, 0xc932eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c932f  call 0xbe720
    X86_AT(c, 0xc932fu);
    push32(c, 0xc9334u); x86_call_known(c, 0xbe720u, f_000be720); X86_RET(c, 0xc9334u);
    X86_TICK(c, 9);
    // 0c9334  push edi
    X86_AT(c, 0xc9334u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c9335  call 0xbe720
    X86_AT(c, 0xc9335u);
    push32(c, 0xc933au); x86_call_known(c, 0xbe720u, f_000be720); X86_RET(c, 0xc933au);
    X86_TICK(c, 2);
    // 0c933a  add esp, 0x20
    X86_AT(c, 0xc933au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
L_c933d:
    X86_TICK(c, 24);
    // 0c933d  pop edi
    X86_AT(c, 0xc933du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c933e  pop esi
    X86_AT(c, 0xc933eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c933f  leave 
    X86_AT(c, 0xc933fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c9340  ret 
    X86_AT(c, 0xc9340u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc9238u, "ran off the end of a function");
}
void f_000c9344(X86Cpu& c) {
    X86_TICK(c, 35);
    // 0c9344  push ebp
    X86_AT(c, 0xc9344u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c9345  mov ebp, esp
    X86_AT(c, 0xc9345u);
    c.r[5] = c.r[4];
    // 0c9347  push esi
    X86_AT(c, 0xc9347u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c9348  push edi
    X86_AT(c, 0xc9348u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c9349  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc9349u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c934c  mov esi, dword ptr [ebp + 0x14]
    X86_AT(c, 0xc934cu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0c934f  mov ecx, dword ptr [ebp + 0x18]
    X86_AT(c, 0xc934fu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 0c9352  mov eax, dword ptr [0xa4a76]
    X86_AT(c, 0xc9352u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A76u)));
    // 0c9357  cmp eax, dword ptr [edi*4 + 0xa5d48]
    X86_AT(c, 0xc9357u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5D48u))), 0, 4);
    // 0c935e  jge 0xc9367
    X86_AT(c, 0xc935eu);
    if (x86_cc(c, 13)) { goto L_c9367; }
    X86_TICK(c, 9);
    // 0c9360  mov eax, 0xffffffff
    X86_AT(c, 0xc9360u);
    c.r[0] = 0xFFFFFFFFu;
    // 0c9365  jmp 0xc936c
    X86_AT(c, 0xc9365u);
    goto L_c936c;
L_c9367:
    X86_TICK(c, 2);
    // 0c9367  mov eax, 1
    X86_AT(c, 0xc9367u);
    c.r[0] = 0x1u;
L_c936c:
    X86_TICK(c, 17);
    // 0c936c  mov dword ptr [esi], eax
    X86_AT(c, 0xc936cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 0c936e  mov eax, dword ptr [0xa4a76]
    X86_AT(c, 0xc936eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A76u)));
    // 0c9373  cmp eax, dword ptr [edi*4 + 0xa5d48]
    X86_AT(c, 0xc9373u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5D48u))), 0, 4);
    // 0c937a  jne 0xc9382
    X86_AT(c, 0xc937au);
    if (x86_cc(c, 5)) { goto L_c9382; }
    X86_TICK(c, 2);
    // 0c937c  mov dword ptr [esi], 0
    X86_AT(c, 0xc937cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), 0x0u);
L_c9382:
    X86_TICK(c, 15);
    // 0c9382  mov eax, dword ptr [0xa4a7a]
    X86_AT(c, 0xc9382u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au)));
    // 0c9387  cmp eax, dword ptr [edi*4 + 0xa5e08]
    X86_AT(c, 0xc9387u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5E08u))), 0, 4);
    // 0c938e  jge 0xc9397
    X86_AT(c, 0xc938eu);
    if (x86_cc(c, 13)) { goto L_c9397; }
    X86_TICK(c, 9);
    // 0c9390  mov eax, 0xffffffff
    X86_AT(c, 0xc9390u);
    c.r[0] = 0xFFFFFFFFu;
    // 0c9395  jmp 0xc939c
    X86_AT(c, 0xc9395u);
    goto L_c939c;
L_c9397:
    X86_TICK(c, 2);
    // 0c9397  mov eax, 1
    X86_AT(c, 0xc9397u);
    c.r[0] = 0x1u;
L_c939c:
    X86_TICK(c, 17);
    // 0c939c  mov dword ptr [ecx], eax
    X86_AT(c, 0xc939cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[1])), c.r[0]);
    // 0c939e  mov eax, dword ptr [0xa4a7a]
    X86_AT(c, 0xc939eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au)));
    // 0c93a3  cmp eax, dword ptr [edi*4 + 0xa5e08]
    X86_AT(c, 0xc93a3u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5E08u))), 0, 4);
    // 0c93aa  jne 0xc93b2
    X86_AT(c, 0xc93aau);
    if (x86_cc(c, 5)) { goto L_c93b2; }
    X86_TICK(c, 2);
    // 0c93ac  mov dword ptr [ecx], 0
    X86_AT(c, 0xc93acu);
    wr32((c.sbase[3] + (uint32_t)(c.r[1])), 0x0u);
L_c93b2:
    X86_TICK(c, 56);
    // 0c93b2  mov eax, dword ptr [esi]
    X86_AT(c, 0xc93b2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 0c93b4  add eax, dword ptr [edi*4 + 0xa5d48]
    X86_AT(c, 0xc93b4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5D48u))), 0, 4); }
    // 0c93bb  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc93bbu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0c93be  mov dword ptr [edx], eax
    X86_AT(c, 0xc93beu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 0c93c0  mov eax, dword ptr [ecx]
    X86_AT(c, 0xc93c0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1])));
    // 0c93c2  add eax, dword ptr [edi*4 + 0xa5e08]
    X86_AT(c, 0xc93c2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA5E08u))), 0, 4); }
    // 0c93c9  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xc93c9u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0c93cc  mov dword ptr [edx], eax
    X86_AT(c, 0xc93ccu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 0c93ce  pop edi
    X86_AT(c, 0xc93ceu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c93cf  pop esi
    X86_AT(c, 0xc93cfu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c93d0  leave 
    X86_AT(c, 0xc93d0u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c93d1  ret 
    X86_AT(c, 0xc93d1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc9344u, "ran off the end of a function");
}
void f_000c93d4(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0c93d4  push ebp
    X86_AT(c, 0xc93d4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c93d5  mov ebp, esp
    X86_AT(c, 0xc93d5u);
    c.r[5] = c.r[4];
    // 0c93d7  sub esp, 0xc
    X86_AT(c, 0xc93d7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0c93da  push ebx
    X86_AT(c, 0xc93dau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c93db  push esi
    X86_AT(c, 0xc93dbu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c93dc  push edi
    X86_AT(c, 0xc93dcu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c93dd  push 7
    X86_AT(c, 0xc93ddu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c93df  call 0xbb6b0
    X86_AT(c, 0xc93dfu);
    push32(c, 0xc93e4u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc93e4u);
    X86_TICK(c, 11);
    // 0c93e4  push 0x6770
    X86_AT(c, 0xc93e4u);
    { uint32_t v = 0x6770u; push32(c, v); }
    // 0c93e9  push 7
    X86_AT(c, 0xc93e9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c93eb  call 0xba428
    X86_AT(c, 0xc93ebu);
    push32(c, 0xc93f0u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc93f0u);
    X86_TICK(c, 9);
    // 0c93f0  push 7
    X86_AT(c, 0xc93f0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c93f2  call 0xbbb5c
    X86_AT(c, 0xc93f2u);
    push32(c, 0xc93f7u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc93f7u);
    X86_TICK(c, 11);
    // 0c93f7  push 0
    X86_AT(c, 0xc93f7u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c93f9  push 7
    X86_AT(c, 0xc93f9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c93fb  call 0xb6f28
    X86_AT(c, 0xc93fbu);
    push32(c, 0xc9400u); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xc9400u);
    X86_TICK(c, 12);
    // 0c9400  xchg edi, eax
    X86_AT(c, 0xc9400u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0c9401  add esp, 0x18
    X86_AT(c, 0xc9401u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0c9404  cmp edi, 0xffffffff
    X86_AT(c, 0xc9404u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0c9407  jne 0xc9424
    X86_AT(c, 0xc9407u);
    if (x86_cc(c, 5)) { goto L_c9424; }
    X86_TICK(c, 11);
    // 0c9409  push 0x67b8
    X86_AT(c, 0xc9409u);
    { uint32_t v = 0x67B8u; push32(c, v); }
    // 0c940e  push 7
    X86_AT(c, 0xc940eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c9410  call 0xba428
    X86_AT(c, 0xc9410u);
    push32(c, 0xc9415u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc9415u);
    X86_TICK(c, 9);
    // 0c9415  push 7
    X86_AT(c, 0xc9415u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c9417  call 0xbbb5c
    X86_AT(c, 0xc9417u);
    push32(c, 0xc941cu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc941cu);
    X86_TICK(c, 9);
    // 0c941c  add esp, 0xc
    X86_AT(c, 0xc941cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c941f  jmp 0xc9819
    X86_AT(c, 0xc941fu);
    goto L_c9819;
L_c9424:
    X86_TICK(c, 19);
    // 0c9424  mov eax, dword ptr [0xa4a56]
    X86_AT(c, 0xc9424u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A56u)));
    // 0c9429  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xc9429u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0c942c  mov dword ptr [0xa4a56], 4
    X86_AT(c, 0xc942cu);
    wr32((c.sbase[3] + (uint32_t)(0xA4A56u)), 0x4u);
    // 0c9436  mov word ptr [0x9c544], 0xffff
    X86_AT(c, 0xc9436u);
    wr16((c.sbase[3] + (uint32_t)(0x9C544u)), 0xFFFFu);
    // 0c943f  push 0xb
    X86_AT(c, 0xc943fu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c9441  call 0xb607c
    X86_AT(c, 0xc9441u);
    push32(c, 0xc9446u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc9446u);
    X86_TICK(c, 9);
    // 0c9446  push 7
    X86_AT(c, 0xc9446u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c9448  call 0xb84e0
    X86_AT(c, 0xc9448u);
    push32(c, 0xc944du); x86_call_known(c, 0xb84e0u, f_000b84e0); X86_RET(c, 0xc944du);
    X86_TICK(c, 12);
    // 0c944d  push dword ptr [0xa8a28]
    X86_AT(c, 0xc944du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA8A28u))); push32(c, v); }
    // 0c9453  call 0xc5ff4
    X86_AT(c, 0xc9453u);
    push32(c, 0xc9458u); x86_call_known(c, 0xc5ff4u, f_000c5ff4); X86_RET(c, 0xc9458u);
    X86_TICK(c, 11);
    // 0c9458  push 0x67d0
    X86_AT(c, 0xc9458u);
    { uint32_t v = 0x67D0u; push32(c, v); }
    // 0c945d  push 7
    X86_AT(c, 0xc945du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c945f  call 0xba428
    X86_AT(c, 0xc945fu);
    push32(c, 0xc9464u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc9464u);
    X86_TICK(c, 9);
    // 0c9464  push 7
    X86_AT(c, 0xc9464u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c9466  call 0xbbb5c
    X86_AT(c, 0xc9466u);
    push32(c, 0xc946bu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc946bu);
    X86_TICK(c, 11);
    // 0c946b  push 0x680c
    X86_AT(c, 0xc946bu);
    { uint32_t v = 0x680Cu; push32(c, v); }
    // 0c9470  push 7
    X86_AT(c, 0xc9470u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c9472  call 0xba428
    X86_AT(c, 0xc9472u);
    push32(c, 0xc9477u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc9477u);
    X86_TICK(c, 9);
    // 0c9477  push 7
    X86_AT(c, 0xc9477u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c9479  call 0xbbb5c
    X86_AT(c, 0xc9479u);
    push32(c, 0xc947eu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc947eu);
    X86_TICK(c, 11);
    // 0c947e  push 0x684c
    X86_AT(c, 0xc947eu);
    { uint32_t v = 0x684Cu; push32(c, v); }
    // 0c9483  push 7
    X86_AT(c, 0xc9483u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c9485  call 0xba428
    X86_AT(c, 0xc9485u);
    push32(c, 0xc948au); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc948au);
    X86_TICK(c, 9);
    // 0c948a  push 7
    X86_AT(c, 0xc948au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c948c  call 0xbbb5c
    X86_AT(c, 0xc948cu);
    push32(c, 0xc9491u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc9491u);
    X86_TICK(c, 11);
    // 0c9491  push 0x6878
    X86_AT(c, 0xc9491u);
    { uint32_t v = 0x6878u; push32(c, v); }
    // 0c9496  push 7
    X86_AT(c, 0xc9496u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c9498  call 0xba428
    X86_AT(c, 0xc9498u);
    push32(c, 0xc949du); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc949du);
    X86_TICK(c, 9);
    // 0c949d  push 7
    X86_AT(c, 0xc949du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c949f  call 0xbbb5c
    X86_AT(c, 0xc949fu);
    push32(c, 0xc94a4u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc94a4u);
    X86_TICK(c, 13);
    // 0c94a4  add esp, 0x3c
    X86_AT(c, 0xc94a4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c94a7  push 0x68b0
    X86_AT(c, 0xc94a7u);
    { uint32_t v = 0x68B0u; push32(c, v); }
    // 0c94ac  push 7
    X86_AT(c, 0xc94acu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c94ae  call 0xba428
    X86_AT(c, 0xc94aeu);
    push32(c, 0xc94b3u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc94b3u);
    X86_TICK(c, 9);
    // 0c94b3  push 7
    X86_AT(c, 0xc94b3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c94b5  call 0xbbb5c
    X86_AT(c, 0xc94b5u);
    push32(c, 0xc94bau); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc94bau);
    X86_TICK(c, 9);
    // 0c94ba  push 7
    X86_AT(c, 0xc94bau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c94bc  call 0xc9890
    X86_AT(c, 0xc94bcu);
    push32(c, 0xc94c1u); x86_call_known(c, 0xc9890u, f_000c9890); X86_RET(c, 0xc94c1u);
    X86_TICK(c, 11);
    // 0c94c1  push 0x68dc
    X86_AT(c, 0xc94c1u);
    { uint32_t v = 0x68DCu; push32(c, v); }
    // 0c94c6  push 7
    X86_AT(c, 0xc94c6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c94c8  call 0xba428
    X86_AT(c, 0xc94c8u);
    push32(c, 0xc94cdu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc94cdu);
    X86_TICK(c, 9);
    // 0c94cd  push 7
    X86_AT(c, 0xc94cdu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c94cf  call 0xbbb5c
    X86_AT(c, 0xc94cfu);
    push32(c, 0xc94d4u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc94d4u);
    X86_TICK(c, 17);
    // 0c94d4  add esp, 0x1c
    X86_AT(c, 0xc94d4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0c94d7  mov edx, dword ptr [0xa4a76]
    X86_AT(c, 0xc94d7u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xA4A76u)));
    // 0c94dd  mov eax, edx
    X86_AT(c, 0xc94ddu);
    c.r[0] = c.r[2];
    // 0c94df  and edx, 3
    X86_AT(c, 0xc94dfu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x3u, 4); }
    // 0c94e5  and eax, eax
    X86_AT(c, 0xc94e5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c94e7  jge 0xc94ec
    X86_AT(c, 0xc94e7u);
    if (x86_cc(c, 13)) { goto L_c94ec; }
    X86_TICK(c, 2);
    // 0c94e9  sub edx, 4
    X86_AT(c, 0xc94e9u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x4u, 0, 4); }
L_c94ec:
    X86_TICK(c, 7);
    // 0c94ec  cmp edx, 3
    X86_AT(c, 0xc94ecu);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0c94ef  ja 0xc9549
    X86_AT(c, 0xc94efu);
    if (x86_cc(c, 7)) { goto L_c9549; }
    X86_TICK(c, 7);
    // 0c94f1  jmp dword ptr cs:[edx*4 + 0xc94f9]
    X86_AT(c, 0xc94f1u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC94F9u)));
      switch (t) {
      case 0xc9509u: goto L_c9509;
      case 0xc9517u: goto L_c9517;
      case 0xc9525u: goto L_c9525;
      case 0xc9533u: goto L_c9533;
      default: x86_jump(c, t); return; } }
L_c9509:
    X86_TICK(c, 11);
    // 0c9509  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xc9509u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
    // 0c9510  push 0x6928
    X86_AT(c, 0xc9510u);
    { uint32_t v = 0x6928u; push32(c, v); }
    // 0c9515  jmp 0xc953f
    X86_AT(c, 0xc9515u);
    goto L_c953f;
L_c9517:
    X86_TICK(c, 11);
    // 0c9517  mov dword ptr [ebp - 8], 1
    X86_AT(c, 0xc9517u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x1u);
    // 0c951e  push 0x695c
    X86_AT(c, 0xc951eu);
    { uint32_t v = 0x695Cu; push32(c, v); }
    // 0c9523  jmp 0xc953f
    X86_AT(c, 0xc9523u);
    goto L_c953f;
L_c9525:
    X86_TICK(c, 11);
    // 0c9525  mov dword ptr [ebp - 8], 2
    X86_AT(c, 0xc9525u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x2u);
    // 0c952c  push 0x6994
    X86_AT(c, 0xc952cu);
    { uint32_t v = 0x6994u; push32(c, v); }
    // 0c9531  jmp 0xc953f
    X86_AT(c, 0xc9531u);
    goto L_c953f;
L_c9533:
    X86_TICK(c, 4);
    // 0c9533  mov dword ptr [ebp - 8], 3
    X86_AT(c, 0xc9533u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x3u);
    // 0c953a  push 0x69cc
    X86_AT(c, 0xc953au);
    { uint32_t v = 0x69CCu; push32(c, v); }
L_c953f:
    X86_TICK(c, 9);
    // 0c953f  push 7
    X86_AT(c, 0xc953fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c9541  call 0xba428
    X86_AT(c, 0xc9541u);
    push32(c, 0xc9546u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc9546u);
    X86_TICK(c, 2);
    // 0c9546  add esp, 8
    X86_AT(c, 0xc9546u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c9549:
    X86_TICK(c, 9);
    // 0c9549  push 7
    X86_AT(c, 0xc9549u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c954b  call 0xbbb5c
    X86_AT(c, 0xc954bu);
    push32(c, 0xc9550u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc9550u);
    X86_TICK(c, 9);
    // 0c9550  push 7
    X86_AT(c, 0xc9550u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c9552  call 0xc9890
    X86_AT(c, 0xc9552u);
    push32(c, 0xc9557u); x86_call_known(c, 0xc9890u, f_000c9890); X86_RET(c, 0xc9557u);
    X86_TICK(c, 11);
    // 0c9557  push 0x69fc
    X86_AT(c, 0xc9557u);
    { uint32_t v = 0x69FCu; push32(c, v); }
    // 0c955c  push 7
    X86_AT(c, 0xc955cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c955e  call 0xba428
    X86_AT(c, 0xc955eu);
    push32(c, 0xc9563u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc9563u);
    X86_TICK(c, 9);
    // 0c9563  push 7
    X86_AT(c, 0xc9563u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c9565  call 0xbbb5c
    X86_AT(c, 0xc9565u);
    push32(c, 0xc956au); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc956au);
    X86_TICK(c, 11);
    // 0c956a  push 0x6a3c
    X86_AT(c, 0xc956au);
    { uint32_t v = 0x6A3Cu; push32(c, v); }
    // 0c956f  push 7
    X86_AT(c, 0xc956fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c9571  call 0xba428
    X86_AT(c, 0xc9571u);
    push32(c, 0xc9576u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc9576u);
    X86_TICK(c, 9);
    // 0c9576  push 7
    X86_AT(c, 0xc9576u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c9578  call 0xbbb5c
    X86_AT(c, 0xc9578u);
    push32(c, 0xc957du); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc957du);
    X86_TICK(c, 11);
    // 0c957d  push 0x6a70
    X86_AT(c, 0xc957du);
    { uint32_t v = 0x6A70u; push32(c, v); }
    // 0c9582  push 7
    X86_AT(c, 0xc9582u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c9584  call 0xba428
    X86_AT(c, 0xc9584u);
    push32(c, 0xc9589u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc9589u);
    X86_TICK(c, 9);
    // 0c9589  push 7
    X86_AT(c, 0xc9589u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c958b  call 0xbbb5c
    X86_AT(c, 0xc958bu);
    push32(c, 0xc9590u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc9590u);
    X86_TICK(c, 11);
    // 0c9590  push 0x6ab0
    X86_AT(c, 0xc9590u);
    { uint32_t v = 0x6AB0u; push32(c, v); }
    // 0c9595  push 7
    X86_AT(c, 0xc9595u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c9597  call 0xba428
    X86_AT(c, 0xc9597u);
    push32(c, 0xc959cu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc959cu);
    X86_TICK(c, 9);
    // 0c959c  push 7
    X86_AT(c, 0xc959cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c959e  call 0xbbb5c
    X86_AT(c, 0xc959eu);
    push32(c, 0xc95a3u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc95a3u);
    X86_TICK(c, 11);
    // 0c95a3  push 0x6ae8
    X86_AT(c, 0xc95a3u);
    { uint32_t v = 0x6AE8u; push32(c, v); }
    // 0c95a8  push 7
    X86_AT(c, 0xc95a8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c95aa  call 0xba428
    X86_AT(c, 0xc95aau);
    push32(c, 0xc95afu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc95afu);
    X86_TICK(c, 11);
    // 0c95af  add esp, 0x40
    X86_AT(c, 0xc95afu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0c95b2  push 7
    X86_AT(c, 0xc95b2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c95b4  call 0xb6404
    X86_AT(c, 0xc95b4u);
    push32(c, 0xc95b9u); x86_call_known(c, 0xb6404u, f_000b6404); X86_RET(c, 0xc95b9u);
    X86_TICK(c, 12);
    // 0c95b9  xchg esi, eax
    X86_AT(c, 0xc95b9u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0c95ba  push 7
    X86_AT(c, 0xc95bau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c95bc  call 0xbbb5c
    X86_AT(c, 0xc95bcu);
    push32(c, 0xc95c1u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc95c1u);
    X86_TICK(c, 9);
    // 0c95c1  add esp, 8
    X86_AT(c, 0xc95c1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c95c4  and esi, esi
    X86_AT(c, 0xc95c4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0c95c6  je 0xc95cd
    X86_AT(c, 0xc95c6u);
    if (x86_cc(c, 4)) { goto L_c95cd; }
    X86_TICK(c, 7);
    // 0c95c8  cmp esi, 0xffffffff
    X86_AT(c, 0xc95c8u);
    (void)x86_sub(c, c.r[6], 0xFFFFFFFFu, 0, 4);
    // 0c95cb  jne 0xc9600
    X86_AT(c, 0xc95cbu);
    if (x86_cc(c, 5)) { goto L_c9600; }
L_c95cd:
    X86_TICK(c, 9);
    // 0c95cd  push 3
    X86_AT(c, 0xc95cdu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c95cf  call 0xb607c
    X86_AT(c, 0xc95cfu);
    push32(c, 0xc95d4u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc95d4u);
    X86_TICK(c, 11);
    // 0c95d4  push 0x6b14
    X86_AT(c, 0xc95d4u);
    { uint32_t v = 0x6B14u; push32(c, v); }
    // 0c95d9  push 7
    X86_AT(c, 0xc95d9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c95db  call 0xba428
    X86_AT(c, 0xc95dbu);
    push32(c, 0xc95e0u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc95e0u);
    X86_TICK(c, 9);
    // 0c95e0  push 7
    X86_AT(c, 0xc95e0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c95e2  call 0xbbb5c
    X86_AT(c, 0xc95e2u);
    push32(c, 0xc95e7u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc95e7u);
    X86_TICK(c, 17);
    // 0c95e7  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc95e7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c95ea  mov dword ptr [0xa4a56], eax
    X86_AT(c, 0xc95eau);
    wr32((c.sbase[3] + (uint32_t)(0xA4A56u)), c.r[0]);
    // 0c95ef  mov word ptr [0x9c544], 0
    X86_AT(c, 0xc95efu);
    wr16((c.sbase[3] + (uint32_t)(0x9C544u)), 0x0u);
    // 0c95f8  add esp, 0x10
    X86_AT(c, 0xc95f8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c95fb  jmp 0xc9819
    X86_AT(c, 0xc95fbu);
    goto L_c9819;
L_c9600:
    X86_TICK(c, 22);
    // 0c9600  mov eax, edi
    X86_AT(c, 0xc9600u);
    c.r[0] = c.r[7];
    // 0c9602  lea edx, [eax + eax*2]
    X86_AT(c, 0xc9602u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c9605  shl edx, 5
    X86_AT(c, 0xc9605u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c9608  add edx, eax
    X86_AT(c, 0xc9608u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c960a  lea edx, [eax + edx*2]
    X86_AT(c, 0xc960au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c960d  cmp esi, dword ptr [edx + 0xa4ae9]
    X86_AT(c, 0xc960du);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AE9u))), 0, 4);
    // 0c9613  jle 0xc964f
    X86_AT(c, 0xc9613u);
    if (x86_cc(c, 14)) { goto L_c964f; }
    X86_TICK(c, 9);
    // 0c9615  push 3
    X86_AT(c, 0xc9615u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c9617  call 0xb607c
    X86_AT(c, 0xc9617u);
    push32(c, 0xc961cu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc961cu);
    X86_TICK(c, 11);
    // 0c961c  push 0x6b3c
    X86_AT(c, 0xc961cu);
    { uint32_t v = 0x6B3Cu; push32(c, v); }
    // 0c9621  push 7
    X86_AT(c, 0xc9621u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c9623  call 0xba428
    X86_AT(c, 0xc9623u);
    push32(c, 0xc9628u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc9628u);
    X86_TICK(c, 9);
    // 0c9628  push 7
    X86_AT(c, 0xc9628u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c962a  call 0xbbb5c
    X86_AT(c, 0xc962au);
    push32(c, 0xc962fu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc962fu);
    X86_TICK(c, 17);
    // 0c962f  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc962fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c9632  mov dword ptr [0xa4a56], eax
    X86_AT(c, 0xc9632u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A56u)), c.r[0]);
    // 0c9637  mov word ptr [0x9c544], 0
    X86_AT(c, 0xc9637u);
    wr16((c.sbase[3] + (uint32_t)(0x9C544u)), 0x0u);
    // 0c9640  push 4
    X86_AT(c, 0xc9640u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c9642  call 0xb61d4
    X86_AT(c, 0xc9642u);
    push32(c, 0xc9647u); x86_call_known(c, 0xb61d4u, f_000b61d4); X86_RET(c, 0xc9647u);
    X86_TICK(c, 9);
    // 0c9647  add esp, 0x14
    X86_AT(c, 0xc9647u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0c964a  jmp 0xc9819
    X86_AT(c, 0xc964au);
    goto L_c9819;
L_c964f:
    X86_TICK(c, 29);
    // 0c964f  mov eax, edi
    X86_AT(c, 0xc964fu);
    c.r[0] = c.r[7];
    // 0c9651  lea edx, [eax + eax*2]
    X86_AT(c, 0xc9651u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c9654  shl edx, 5
    X86_AT(c, 0xc9654u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c9657  add edx, eax
    X86_AT(c, 0xc9657u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c9659  lea edx, [eax + edx*2]
    X86_AT(c, 0xc9659u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c965c  sub dword ptr [edx + 0xa4ae9], esi
    X86_AT(c, 0xc965cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AE9u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[6], 0, 4)); }
    // 0c9662  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0xc9662u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0c9665  cmp edx, 3
    X86_AT(c, 0xc9665u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0c9668  ja 0xc97b2
    X86_AT(c, 0xc9668u);
    if (x86_cc(c, 7)) { goto L_c97b2; }
    X86_TICK(c, 7);
    // 0c966e  jmp dword ptr cs:[edx*4 + 0xc9676]
    X86_AT(c, 0xc966eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC9676u)));
      switch (t) {
      case 0xc9686u: goto L_c9686;
      case 0xc96d5u: goto L_c96d5;
      case 0xc9724u: goto L_c9724;
      case 0xc976cu: goto L_c976c;
      default: x86_jump(c, t); return; } }
L_c9686:
    X86_TICK(c, 85);
    // 0c9686  mov eax, edi
    X86_AT(c, 0xc9686u);
    c.r[0] = c.r[7];
    // 0c9688  lea edx, [eax + eax*2]
    X86_AT(c, 0xc9688u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c968b  shl edx, 5
    X86_AT(c, 0xc968bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c968e  add edx, eax
    X86_AT(c, 0xc968eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c9690  lea edx, [eax + edx*2]
    X86_AT(c, 0xc9690u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c9693  mov eax, esi
    X86_AT(c, 0xc9693u);
    c.r[0] = c.r[6];
    // 0c9695  mov dword ptr [ebp - 0xc], edx
    X86_AT(c, 0xc9695u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[2]);
    // 0c9698  cdq 
    X86_AT(c, 0xc9698u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0c9699  mov ecx, 0x64
    X86_AT(c, 0xc9699u);
    c.r[1] = 0x64u;
    // 0c969e  idiv ecx
    X86_AT(c, 0xc969eu);
    x86_idiv(c, c.r[1], 4, 0xc969eu);
    // 0c96a0  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xc96a0u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0c96a3  add dword ptr [edx + 0xa4abe], eax
    X86_AT(c, 0xc96a3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABEu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0c96a9  push 0
    X86_AT(c, 0xc96a9u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c96ab  mov al, byte ptr [edx + 0xa4ace]
    X86_AT(c, 0xc96abu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ACEu))));
    // 0c96b1  push eax
    X86_AT(c, 0xc96b1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c96b2  call 0xc9820
    X86_AT(c, 0xc96b2u);
    push32(c, 0xc96b7u); x86_call_known(c, 0xc9820u, f_000c9820); X86_RET(c, 0xc96b7u);
    X86_TICK(c, 20);
    // 0c96b7  xchg ebx, eax
    X86_AT(c, 0xc96b7u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c96b8  add esp, 8
    X86_AT(c, 0xc96b8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c96bb  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xc96bbu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0c96be  cmp ebx, dword ptr [eax + 0xa4abe]
    X86_AT(c, 0xc96beu);
    (void)x86_sub(c, c.r[3], rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4ABEu))), 0, 4);
    // 0c96c4  jge 0xc97b2
    X86_AT(c, 0xc96c4u);
    if (x86_cc(c, 13)) { goto L_c97b2; }
    X86_TICK(c, 9);
    // 0c96ca  mov dword ptr [eax + 0xa4abe], ebx
    X86_AT(c, 0xc96cau);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4ABEu)), c.r[3]);
    // 0c96d0  jmp 0xc97b2
    X86_AT(c, 0xc96d0u);
    goto L_c97b2;
L_c96d5:
    X86_TICK(c, 85);
    // 0c96d5  mov eax, edi
    X86_AT(c, 0xc96d5u);
    c.r[0] = c.r[7];
    // 0c96d7  lea edx, [eax + eax*2]
    X86_AT(c, 0xc96d7u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c96da  shl edx, 5
    X86_AT(c, 0xc96dau);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c96dd  add edx, eax
    X86_AT(c, 0xc96ddu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c96df  lea edx, [eax + edx*2]
    X86_AT(c, 0xc96dfu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c96e2  mov eax, esi
    X86_AT(c, 0xc96e2u);
    c.r[0] = c.r[6];
    // 0c96e4  mov dword ptr [ebp - 0xc], edx
    X86_AT(c, 0xc96e4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[2]);
    // 0c96e7  cdq 
    X86_AT(c, 0xc96e7u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0c96e8  mov ecx, 0x64
    X86_AT(c, 0xc96e8u);
    c.r[1] = 0x64u;
    // 0c96ed  idiv ecx
    X86_AT(c, 0xc96edu);
    x86_idiv(c, c.r[1], 4, 0xc96edu);
    // 0c96ef  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xc96efu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0c96f2  add dword ptr [edx + 0xa4ac2], eax
    X86_AT(c, 0xc96f2u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AC2u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0c96f8  push 1
    X86_AT(c, 0xc96f8u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c96fa  mov al, byte ptr [edx + 0xa4ace]
    X86_AT(c, 0xc96fau);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ACEu))));
    // 0c9700  push eax
    X86_AT(c, 0xc9700u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c9701  call 0xc9820
    X86_AT(c, 0xc9701u);
    push32(c, 0xc9706u); x86_call_known(c, 0xc9820u, f_000c9820); X86_RET(c, 0xc9706u);
    X86_TICK(c, 20);
    // 0c9706  xchg ebx, eax
    X86_AT(c, 0xc9706u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c9707  add esp, 8
    X86_AT(c, 0xc9707u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c970a  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xc970au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0c970d  cmp ebx, dword ptr [eax + 0xa4ac2]
    X86_AT(c, 0xc970du);
    (void)x86_sub(c, c.r[3], rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4AC2u))), 0, 4);
    // 0c9713  jge 0xc97b2
    X86_AT(c, 0xc9713u);
    if (x86_cc(c, 13)) { goto L_c97b2; }
    X86_TICK(c, 9);
    // 0c9719  mov dword ptr [eax + 0xa4ac2], ebx
    X86_AT(c, 0xc9719u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4AC2u)), c.r[3]);
    // 0c971f  jmp 0xc97b2
    X86_AT(c, 0xc971fu);
    goto L_c97b2;
L_c9724:
    X86_TICK(c, 85);
    // 0c9724  mov eax, edi
    X86_AT(c, 0xc9724u);
    c.r[0] = c.r[7];
    // 0c9726  lea edx, [eax + eax*2]
    X86_AT(c, 0xc9726u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c9729  shl edx, 5
    X86_AT(c, 0xc9729u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c972c  add edx, eax
    X86_AT(c, 0xc972cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c972e  lea edx, [eax + edx*2]
    X86_AT(c, 0xc972eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c9731  mov eax, esi
    X86_AT(c, 0xc9731u);
    c.r[0] = c.r[6];
    // 0c9733  mov dword ptr [ebp - 0xc], edx
    X86_AT(c, 0xc9733u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[2]);
    // 0c9736  cdq 
    X86_AT(c, 0xc9736u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0c9737  mov ecx, 0x64
    X86_AT(c, 0xc9737u);
    c.r[1] = 0x64u;
    // 0c973c  idiv ecx
    X86_AT(c, 0xc973cu);
    x86_idiv(c, c.r[1], 4, 0xc973cu);
    // 0c973e  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xc973eu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0c9741  add dword ptr [edx + 0xa4ac6], eax
    X86_AT(c, 0xc9741u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AC6u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0c9747  push 2
    X86_AT(c, 0xc9747u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c9749  mov al, byte ptr [edx + 0xa4ace]
    X86_AT(c, 0xc9749u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ACEu))));
    // 0c974f  push eax
    X86_AT(c, 0xc974fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c9750  call 0xc9820
    X86_AT(c, 0xc9750u);
    push32(c, 0xc9755u); x86_call_known(c, 0xc9820u, f_000c9820); X86_RET(c, 0xc9755u);
    X86_TICK(c, 20);
    // 0c9755  xchg ebx, eax
    X86_AT(c, 0xc9755u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c9756  add esp, 8
    X86_AT(c, 0xc9756u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c9759  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xc9759u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0c975c  cmp ebx, dword ptr [eax + 0xa4ac6]
    X86_AT(c, 0xc975cu);
    (void)x86_sub(c, c.r[3], rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4AC6u))), 0, 4);
    // 0c9762  jge 0xc97b2
    X86_AT(c, 0xc9762u);
    if (x86_cc(c, 13)) { goto L_c97b2; }
    X86_TICK(c, 9);
    // 0c9764  mov dword ptr [eax + 0xa4ac6], ebx
    X86_AT(c, 0xc9764u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4AC6u)), c.r[3]);
    // 0c976a  jmp 0xc97b2
    X86_AT(c, 0xc976au);
    goto L_c97b2;
L_c976c:
    X86_TICK(c, 85);
    // 0c976c  mov eax, edi
    X86_AT(c, 0xc976cu);
    c.r[0] = c.r[7];
    // 0c976e  lea edx, [eax + eax*2]
    X86_AT(c, 0xc976eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c9771  shl edx, 5
    X86_AT(c, 0xc9771u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c9774  add edx, eax
    X86_AT(c, 0xc9774u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c9776  lea edx, [eax + edx*2]
    X86_AT(c, 0xc9776u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c9779  mov eax, esi
    X86_AT(c, 0xc9779u);
    c.r[0] = c.r[6];
    // 0c977b  mov dword ptr [ebp - 0xc], edx
    X86_AT(c, 0xc977bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[2]);
    // 0c977e  cdq 
    X86_AT(c, 0xc977eu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0c977f  mov ecx, 0x64
    X86_AT(c, 0xc977fu);
    c.r[1] = 0x64u;
    // 0c9784  idiv ecx
    X86_AT(c, 0xc9784u);
    x86_idiv(c, c.r[1], 4, 0xc9784u);
    // 0c9786  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xc9786u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0c9789  add dword ptr [edx + 0xa4aca], eax
    X86_AT(c, 0xc9789u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ACAu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0c978f  push 3
    X86_AT(c, 0xc978fu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c9791  mov al, byte ptr [edx + 0xa4ace]
    X86_AT(c, 0xc9791u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ACEu))));
    // 0c9797  push eax
    X86_AT(c, 0xc9797u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c9798  call 0xc9820
    X86_AT(c, 0xc9798u);
    push32(c, 0xc979du); x86_call_known(c, 0xc9820u, f_000c9820); X86_RET(c, 0xc979du);
    X86_TICK(c, 20);
    // 0c979d  xchg ebx, eax
    X86_AT(c, 0xc979du);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c979e  add esp, 8
    X86_AT(c, 0xc979eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c97a1  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xc97a1u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0c97a4  cmp ebx, dword ptr [eax + 0xa4aca]
    X86_AT(c, 0xc97a4u);
    (void)x86_sub(c, c.r[3], rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4ACAu))), 0, 4);
    // 0c97aa  jge 0xc97b2
    X86_AT(c, 0xc97aau);
    if (x86_cc(c, 13)) { goto L_c97b2; }
    X86_TICK(c, 2);
    // 0c97ac  mov dword ptr [eax + 0xa4aca], ebx
    X86_AT(c, 0xc97acu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4ACAu)), c.r[3]);
L_c97b2:
    X86_TICK(c, 11);
    // 0c97b2  push 0x6b88
    X86_AT(c, 0xc97b2u);
    { uint32_t v = 0x6B88u; push32(c, v); }
    // 0c97b7  push 7
    X86_AT(c, 0xc97b7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c97b9  call 0xba428
    X86_AT(c, 0xc97b9u);
    push32(c, 0xc97beu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc97beu);
    X86_TICK(c, 9);
    // 0c97be  push 7
    X86_AT(c, 0xc97beu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c97c0  call 0xbbb5c
    X86_AT(c, 0xc97c0u);
    push32(c, 0xc97c5u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc97c5u);
    X86_TICK(c, 9);
    // 0c97c5  push 5
    X86_AT(c, 0xc97c5u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c97c7  call 0xb607c
    X86_AT(c, 0xc97c7u);
    push32(c, 0xc97ccu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc97ccu);
    X86_TICK(c, 9);
    // 0c97cc  push edi
    X86_AT(c, 0xc97ccu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c97cd  call 0xc7f0c
    X86_AT(c, 0xc97cdu);
    push32(c, 0xc97d2u); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xc97d2u);
    X86_TICK(c, 9);
    // 0c97d2  push 2
    X86_AT(c, 0xc97d2u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c97d4  call 0xbebbc
    X86_AT(c, 0xc97d4u);
    push32(c, 0xc97d9u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xc97d9u);
    X86_TICK(c, 9);
    // 0c97d9  push edi
    X86_AT(c, 0xc97d9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c97da  call 0xc7f0c
    X86_AT(c, 0xc97dau);
    push32(c, 0xc97dfu); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xc97dfu);
    X86_TICK(c, 9);
    // 0c97df  push 2
    X86_AT(c, 0xc97dfu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c97e1  call 0xbebbc
    X86_AT(c, 0xc97e1u);
    push32(c, 0xc97e6u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xc97e6u);
    X86_TICK(c, 9);
    // 0c97e6  push edi
    X86_AT(c, 0xc97e6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c97e7  call 0xc7f0c
    X86_AT(c, 0xc97e7u);
    push32(c, 0xc97ecu); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xc97ecu);
    X86_TICK(c, 9);
    // 0c97ec  push 2
    X86_AT(c, 0xc97ecu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c97ee  call 0xbebbc
    X86_AT(c, 0xc97eeu);
    push32(c, 0xc97f3u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xc97f3u);
    X86_TICK(c, 9);
    // 0c97f3  push edi
    X86_AT(c, 0xc97f3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c97f4  call 0xc7f0c
    X86_AT(c, 0xc97f4u);
    push32(c, 0xc97f9u); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xc97f9u);
    X86_TICK(c, 7);
    // 0c97f9  call 0xb71c4
    X86_AT(c, 0xc97f9u);
    push32(c, 0xc97feu); x86_call_known(c, 0xb71c4u, f_000b71c4); X86_RET(c, 0xc97feu);
    X86_TICK(c, 17);
    // 0c97fe  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc97feu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c9801  mov dword ptr [0xa4a56], eax
    X86_AT(c, 0xc9801u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A56u)), c.r[0]);
    // 0c9806  mov word ptr [0x9c544], 0
    X86_AT(c, 0xc9806u);
    wr16((c.sbase[3] + (uint32_t)(0x9C544u)), 0x0u);
    // 0c980f  push 4
    X86_AT(c, 0xc980fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c9811  call 0xb61d4
    X86_AT(c, 0xc9811u);
    push32(c, 0xc9816u); x86_call_known(c, 0xb61d4u, f_000b61d4); X86_RET(c, 0xc9816u);
    X86_TICK(c, 2);
    // 0c9816  add esp, 0x30
    X86_AT(c, 0xc9816u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
L_c9819:
    X86_TICK(c, 28);
    // 0c9819  pop edi
    X86_AT(c, 0xc9819u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c981a  pop esi
    X86_AT(c, 0xc981au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c981b  pop ebx
    X86_AT(c, 0xc981bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c981c  leave 
    X86_AT(c, 0xc981cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c981d  ret 
    X86_AT(c, 0xc981du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc93d4u, "ran off the end of a function");
}
void f_000c97b2(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0c97b2  push 0x6b88
    X86_AT(c, 0xc97b2u);
    { uint32_t v = 0x6B88u; push32(c, v); }
    // 0c97b7  push 7
    X86_AT(c, 0xc97b7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c97b9  call 0xba428
    X86_AT(c, 0xc97b9u);
    push32(c, 0xc97beu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc97beu);
    X86_TICK(c, 9);
    // 0c97be  push 7
    X86_AT(c, 0xc97beu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0c97c0  call 0xbbb5c
    X86_AT(c, 0xc97c0u);
    push32(c, 0xc97c5u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc97c5u);
    X86_TICK(c, 9);
    // 0c97c5  push 5
    X86_AT(c, 0xc97c5u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c97c7  call 0xb607c
    X86_AT(c, 0xc97c7u);
    push32(c, 0xc97ccu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc97ccu);
    X86_TICK(c, 9);
    // 0c97cc  push edi
    X86_AT(c, 0xc97ccu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c97cd  call 0xc7f0c
    X86_AT(c, 0xc97cdu);
    push32(c, 0xc97d2u); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xc97d2u);
    X86_TICK(c, 9);
    // 0c97d2  push 2
    X86_AT(c, 0xc97d2u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c97d4  call 0xbebbc
    X86_AT(c, 0xc97d4u);
    push32(c, 0xc97d9u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xc97d9u);
    X86_TICK(c, 9);
    // 0c97d9  push edi
    X86_AT(c, 0xc97d9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c97da  call 0xc7f0c
    X86_AT(c, 0xc97dau);
    push32(c, 0xc97dfu); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xc97dfu);
    X86_TICK(c, 9);
    // 0c97df  push 2
    X86_AT(c, 0xc97dfu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c97e1  call 0xbebbc
    X86_AT(c, 0xc97e1u);
    push32(c, 0xc97e6u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xc97e6u);
    X86_TICK(c, 9);
    // 0c97e6  push edi
    X86_AT(c, 0xc97e6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c97e7  call 0xc7f0c
    X86_AT(c, 0xc97e7u);
    push32(c, 0xc97ecu); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xc97ecu);
    X86_TICK(c, 9);
    // 0c97ec  push 2
    X86_AT(c, 0xc97ecu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c97ee  call 0xbebbc
    X86_AT(c, 0xc97eeu);
    push32(c, 0xc97f3u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xc97f3u);
    X86_TICK(c, 9);
    // 0c97f3  push edi
    X86_AT(c, 0xc97f3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c97f4  call 0xc7f0c
    X86_AT(c, 0xc97f4u);
    push32(c, 0xc97f9u); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xc97f9u);
    X86_TICK(c, 7);
    // 0c97f9  call 0xb71c4
    X86_AT(c, 0xc97f9u);
    push32(c, 0xc97feu); x86_call_known(c, 0xb71c4u, f_000b71c4); X86_RET(c, 0xc97feu);
    X86_TICK(c, 17);
    // 0c97fe  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc97feu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c9801  mov dword ptr [0xa4a56], eax
    X86_AT(c, 0xc9801u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A56u)), c.r[0]);
    // 0c9806  mov word ptr [0x9c544], 0
    X86_AT(c, 0xc9806u);
    wr16((c.sbase[3] + (uint32_t)(0x9C544u)), 0x0u);
    // 0c980f  push 4
    X86_AT(c, 0xc980fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c9811  call 0xb61d4
    X86_AT(c, 0xc9811u);
    push32(c, 0xc9816u); x86_call_known(c, 0xb61d4u, f_000b61d4); X86_RET(c, 0xc9816u);
    X86_TICK(c, 30);
    // 0c9816  add esp, 0x30
    X86_AT(c, 0xc9816u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0c9819  pop edi
    X86_AT(c, 0xc9819u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c981a  pop esi
    X86_AT(c, 0xc981au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c981b  pop ebx
    X86_AT(c, 0xc981bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c981c  leave 
    X86_AT(c, 0xc981cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c981d  ret 
    X86_AT(c, 0xc981du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc97b2u, "ran off the end of a function");
}
void f_000c9819(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0c9819  pop edi
    X86_AT(c, 0xc9819u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c981a  pop esi
    X86_AT(c, 0xc981au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c981b  pop ebx
    X86_AT(c, 0xc981bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c981c  leave 
    X86_AT(c, 0xc981cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c981d  ret 
    X86_AT(c, 0xc981du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc9819u, "ran off the end of a function");
}
void f_000c9820(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0c9820  push ebp
    X86_AT(c, 0xc9820u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c9821  mov ebp, esp
    X86_AT(c, 0xc9821u);
    c.r[5] = c.r[4];
    // 0c9823  push edi
    X86_AT(c, 0xc9823u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c9824  mov cl, byte ptr [ebp + 8]
    X86_AT(c, 0xc9824u);
    s8(c, 1, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0c9827  sub edi, edi
    X86_AT(c, 0xc9827u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_c9829:
    X86_TICK(c, 7);
    // 0c9829  cmp edi, 5
    X86_AT(c, 0xc9829u);
    (void)x86_sub(c, c.r[7], 0x5u, 0, 4);
    // 0c982c  jge 0xc9841
    X86_AT(c, 0xc982cu);
    if (x86_cc(c, 13)) { goto L_c9841; }
    X86_TICK(c, 17);
    // 0c982e  mov eax, edi
    X86_AT(c, 0xc982eu);
    c.r[0] = c.r[7];
    // 0c9830  lea edx, [eax + eax*8]
    X86_AT(c, 0xc9830u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0c9833  lea eax, [edx + eax*8]
    X86_AT(c, 0xc9833u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 8);
    // 0c9836  cmp cl, byte ptr [eax + 0xabf84]
    X86_AT(c, 0xc9836u);
    (void)x86_sub(c, g8(c, 1), rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xABF84u))), 0, 1);
    // 0c983c  je 0xc9841
    X86_AT(c, 0xc983cu);
    if (x86_cc(c, 4)) { goto L_c9841; }
    X86_TICK(c, 9);
    // 0c983e  inc edi
    X86_AT(c, 0xc983eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c983f  jmp 0xc9829
    X86_AT(c, 0xc983fu);
    X86_POLL(c, 0xc9829u); goto L_c9829;
L_c9841:
    X86_TICK(c, 11);
    // 0c9841  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc9841u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0c9844  and edx, edx
    X86_AT(c, 0xc9844u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0c9846  je 0xc9854
    X86_AT(c, 0xc9846u);
    if (x86_cc(c, 4)) { goto L_c9854; }
    X86_TICK(c, 7);
    // 0c9848  cmp edx, 1
    X86_AT(c, 0xc9848u);
    (void)x86_sub(c, c.r[2], 0x1u, 0, 4);
    // 0c984b  je 0xc9862
    X86_AT(c, 0xc984bu);
    if (x86_cc(c, 4)) { goto L_c9862; }
    X86_TICK(c, 7);
    // 0c984d  cmp edx, 2
    X86_AT(c, 0xc984du);
    (void)x86_sub(c, c.r[2], 0x2u, 0, 4);
    // 0c9850  je 0xc9870
    X86_AT(c, 0xc9850u);
    if (x86_cc(c, 4)) { goto L_c9870; }
    X86_TICK(c, 7);
    // 0c9852  jmp 0xc987e
    X86_AT(c, 0xc9852u);
    goto L_c987e;
L_c9854:
    X86_TICK(c, 15);
    // 0c9854  mov eax, edi
    X86_AT(c, 0xc9854u);
    c.r[0] = c.r[7];
    // 0c9856  lea edx, [eax + eax*8]
    X86_AT(c, 0xc9856u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0c9859  mov eax, dword ptr [edx + eax*8 + 0xabf85]
    X86_AT(c, 0xc9859u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[0] * 8 + 0xABF85u)));
    // 0c9860  jmp 0xc988a
    X86_AT(c, 0xc9860u);
    goto L_c988a;
L_c9862:
    X86_TICK(c, 15);
    // 0c9862  mov eax, edi
    X86_AT(c, 0xc9862u);
    c.r[0] = c.r[7];
    // 0c9864  lea edx, [eax + eax*8]
    X86_AT(c, 0xc9864u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0c9867  mov eax, dword ptr [edx + eax*8 + 0xabf89]
    X86_AT(c, 0xc9867u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[0] * 8 + 0xABF89u)));
    // 0c986e  jmp 0xc988a
    X86_AT(c, 0xc986eu);
    goto L_c988a;
L_c9870:
    X86_TICK(c, 15);
    // 0c9870  mov eax, edi
    X86_AT(c, 0xc9870u);
    c.r[0] = c.r[7];
    // 0c9872  lea edx, [eax + eax*8]
    X86_AT(c, 0xc9872u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0c9875  mov eax, dword ptr [edx + eax*8 + 0xabf8d]
    X86_AT(c, 0xc9875u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[0] * 8 + 0xABF8Du)));
    // 0c987c  jmp 0xc988a
    X86_AT(c, 0xc987cu);
    goto L_c988a;
L_c987e:
    X86_TICK(c, 8);
    // 0c987e  mov eax, edi
    X86_AT(c, 0xc987eu);
    c.r[0] = c.r[7];
    // 0c9880  lea edx, [eax + eax*8]
    X86_AT(c, 0xc9880u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0c9883  mov eax, dword ptr [edx + eax*8 + 0xabf91]
    X86_AT(c, 0xc9883u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[0] * 8 + 0xABF91u)));
L_c988a:
    X86_TICK(c, 20);
    // 0c988a  pop edi
    X86_AT(c, 0xc988au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c988b  leave 
    X86_AT(c, 0xc988bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c988c  ret 
    X86_AT(c, 0xc988cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc9820u, "ran off the end of a function");
}
void f_000c9890(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0c9890  push ebp
    X86_AT(c, 0xc9890u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c9891  mov ebp, esp
    X86_AT(c, 0xc9891u);
    c.r[5] = c.r[4];
    // 0c9893  push ebx
    X86_AT(c, 0xc9893u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c9894  push edi
    X86_AT(c, 0xc9894u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c9895  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc9895u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c9898  push 0x6ba4
    X86_AT(c, 0xc9898u);
    { uint32_t v = 0x6BA4u; push32(c, v); }
    // 0c989d  call 0xbc50c
    X86_AT(c, 0xc989du);
    push32(c, 0xc98a2u); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc98a2u);
    X86_TICK(c, 2);
    // 0c98a2  add esp, 4
    X86_AT(c, 0xc98a2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_c98a5:
    X86_TICK(c, 9);
    // 0c98a5  push edi
    X86_AT(c, 0xc98a5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c98a6  call 0xb9930
    X86_AT(c, 0xc98a6u);
    push32(c, 0xc98abu); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc98abu);
    X86_TICK(c, 12);
    // 0c98ab  add esp, 4
    X86_AT(c, 0xc98abu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c98ae  xchg ebx, eax
    X86_AT(c, 0xc98aeu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c98af  and bl, bl
    X86_AT(c, 0xc98afu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0c98b1  je 0xc98a5
    X86_AT(c, 0xc98b1u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc98a5u); goto L_c98a5; }
    X86_TICK(c, 9);
    // 0c98b3  push 2
    X86_AT(c, 0xc98b3u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c98b5  call 0xbbb5c
    X86_AT(c, 0xc98b5u);
    push32(c, 0xc98bau); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc98bau);
    X86_TICK(c, 9);
    // 0c98ba  push edi
    X86_AT(c, 0xc98bau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c98bb  call 0xbb6b0
    X86_AT(c, 0xc98bbu);
    push32(c, 0xc98c0u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc98c0u);
    X86_TICK(c, 9);
    // 0c98c0  add esp, 8
    X86_AT(c, 0xc98c0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c98c3  cmp bl, 1
    X86_AT(c, 0xc98c3u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c98c6  jne 0xc98cf
    X86_AT(c, 0xc98c6u);
    if (x86_cc(c, 5)) { goto L_c98cf; }
    X86_TICK(c, 9);
    // 0c98c8  mov eax, 1
    X86_AT(c, 0xc98c8u);
    c.r[0] = 0x1u;
    // 0c98cd  jmp 0xc98d1
    X86_AT(c, 0xc98cdu);
    goto L_c98d1;
L_c98cf:
    X86_TICK(c, 2);
    // 0c98cf  sub eax, eax
    X86_AT(c, 0xc98cfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_c98d1:
    X86_TICK(c, 24);
    // 0c98d1  pop edi
    X86_AT(c, 0xc98d1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c98d2  pop ebx
    X86_AT(c, 0xc98d2u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c98d3  leave 
    X86_AT(c, 0xc98d3u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c98d4  ret 
    X86_AT(c, 0xc98d4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc9890u, "ran off the end of a function");
}
void f_000c98d8(X86Cpu& c) {
    X86_TICK(c, 33);
    // 0c98d8  push ebp
    X86_AT(c, 0xc98d8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c98d9  mov ebp, esp
    X86_AT(c, 0xc98d9u);
    c.r[5] = c.r[4];
    // 0c98db  push eax
    X86_AT(c, 0xc98dbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c98dc  push ebx
    X86_AT(c, 0xc98dcu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c98dd  push esi
    X86_AT(c, 0xc98ddu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c98de  push edi
    X86_AT(c, 0xc98deu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c98df  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0xc98dfu);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0c98e2  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc98e2u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0c98e5  sub eax, eax
    X86_AT(c, 0xc98e5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c98e7  mov byte ptr [ebp - 1], al
    X86_AT(c, 0xc98e7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 0c98ea  mov dword ptr [edi], eax
    X86_AT(c, 0xc98eau);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[0]);
    // 0c98ec  cmp bl, 0x25
    X86_AT(c, 0xc98ecu);
    (void)x86_sub(c, g8(c, 3), 0x25u, 0, 1);
    // 0c98ef  jb 0xc990c
    X86_AT(c, 0xc98efu);
    if (x86_cc(c, 2)) { goto L_c990c; }
    X86_TICK(c, 7);
    // 0c98f1  cmp bl, 0x3f
    X86_AT(c, 0xc98f1u);
    (void)x86_sub(c, g8(c, 3), 0x3Fu, 0, 1);
    // 0c98f4  ja 0xc990c
    X86_AT(c, 0xc98f4u);
    if (x86_cc(c, 7)) { goto L_c990c; }
    X86_TICK(c, 11);
    // 0c98f6  cmp eax, dword ptr [0x460e4]
    X86_AT(c, 0xc98f6u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0x460E4u))), 0, 4);
    // 0c98fc  jne 0xc9905
    X86_AT(c, 0xc98fcu);
    if (x86_cc(c, 5)) { goto L_c9905; }
    X86_TICK(c, 9);
    // 0c98fe  mov eax, 0x6bf0
    X86_AT(c, 0xc98feu);
    c.r[0] = 0x6BF0u;
    // 0c9903  jmp 0xc993a
    X86_AT(c, 0xc9903u);
    goto L_c993a;
L_c9905:
    X86_TICK(c, 9);
    // 0c9905  mov eax, 0x6c00
    X86_AT(c, 0xc9905u);
    c.r[0] = 0x6C00u;
    // 0c990a  jmp 0xc993a
    X86_AT(c, 0xc990au);
    goto L_c993a;
L_c990c:
    X86_TICK(c, 17);
    // 0c990c  lea eax, [ebp - 1]
    X86_AT(c, 0xc990cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0c990f  push eax
    X86_AT(c, 0xc990fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c9910  push ebx
    X86_AT(c, 0xc9910u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c9911  push 0x3c
    X86_AT(c, 0xc9911u);
    { uint32_t v = 0x3Cu; push32(c, v); }
    // 0c9913  push 0xad05c
    X86_AT(c, 0xc9913u);
    { uint32_t v = 0xAD05Cu; push32(c, v); }
    // 0c9918  call 0xba1b4
    X86_AT(c, 0xc9918u);
    push32(c, 0xc991du); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc991du);
    X86_TICK(c, 12);
    // 0c991d  xchg esi, eax
    X86_AT(c, 0xc991du);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0c991e  add esp, 0x10
    X86_AT(c, 0xc991eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c9921  and esi, esi
    X86_AT(c, 0xc9921u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0c9923  jne 0xc992c
    X86_AT(c, 0xc9923u);
    if (x86_cc(c, 5)) { goto L_c992c; }
    X86_TICK(c, 9);
    // 0c9925  mov eax, 0x6c0c
    X86_AT(c, 0xc9925u);
    c.r[0] = 0x6C0Cu;
    // 0c992a  jmp 0xc993a
    X86_AT(c, 0xc992au);
    goto L_c993a;
L_c992c:
    X86_TICK(c, 12);
    // 0c992c  cmp byte ptr [ebp - 1], 1
    X86_AT(c, 0xc992cu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))), 0x1u, 0, 1);
    // 0c9930  jne 0xc9938
    X86_AT(c, 0xc9930u);
    if (x86_cc(c, 5)) { goto L_c9938; }
    X86_TICK(c, 2);
    // 0c9932  mov dword ptr [edi], 1
    X86_AT(c, 0xc9932u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), 0x1u);
L_c9938:
    X86_TICK(c, 2);
    // 0c9938  mov eax, esi
    X86_AT(c, 0xc9938u);
    c.r[0] = c.r[6];
L_c993a:
    X86_TICK(c, 28);
    // 0c993a  pop edi
    X86_AT(c, 0xc993au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c993b  pop esi
    X86_AT(c, 0xc993bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c993c  pop ebx
    X86_AT(c, 0xc993cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c993d  leave 
    X86_AT(c, 0xc993du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c993e  ret 
    X86_AT(c, 0xc993eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc98d8u, "ran off the end of a function");
}
void f_000c9940(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0c9940  push ebp
    X86_AT(c, 0xc9940u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c9941  mov ebp, esp
    X86_AT(c, 0xc9941u);
    c.r[5] = c.r[4];
    // 0c9943  push ebx
    X86_AT(c, 0xc9943u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c9944  push edi
    X86_AT(c, 0xc9944u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c9945  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc9945u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c9948  mov bl, byte ptr [ebp + 0x10]
    X86_AT(c, 0xc9948u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 0c994b  cmp dword ptr [ebp + 0xc], 1
    X86_AT(c, 0xc994bu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0x1u, 0, 4);
    // 0c994f  jne 0xc9a11
    X86_AT(c, 0xc994fu);
    if (x86_cc(c, 5)) { goto L_c9a11; }
    X86_TICK(c, 12);
    // 0c9955  movzx edx, bl
    X86_AT(c, 0xc9955u);
    c.r[2] = g8(c, 3);
    // 0c9958  sub edx, 0x41
    X86_AT(c, 0xc9958u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x41u, 0, 4); }
    // 0c995b  cmp edx, 0xf
    X86_AT(c, 0xc995bu);
    (void)x86_sub(c, c.r[2], 0xFu, 0, 4);
    // 0c995e  ja 0xc9ae6
    X86_AT(c, 0xc995eu);
    if (x86_cc(c, 7)) { goto L_c9ae6; }
    X86_TICK(c, 7);
    // 0c9964  jmp dword ptr cs:[edx*4 + 0xc996c]
    X86_AT(c, 0xc9964u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC996Cu)));
      switch (t) {
      case 0xc99acu: goto L_c99ac;
      case 0xc99b6u: goto L_c99b6;
      case 0xc99c0u: goto L_c99c0;
      case 0xc99cau: goto L_c99ca;
      case 0xc99d4u: goto L_c99d4;
      case 0xc99deu: goto L_c99de;
      case 0xc99e9u: goto L_c99e9;
      case 0xc99f3u: goto L_c99f3;
      case 0xc99fdu: goto L_c99fd;
      case 0xc9a07u: goto L_c9a07;
      case 0xc9a87u: goto L_c9a87;
      case 0xc9a8eu: goto L_c9a8e;
      case 0xc9a95u: goto L_c9a95;
      case 0xc9ab2u: goto L_c9ab2;
      case 0xc9ac7u: goto L_c9ac7;
      case 0xc9ad6u: goto L_c9ad6;
      default: x86_jump(c, t); return; } }
L_c99ac:
    X86_TICK(c, 7);
    // 0c99ac  call 0xc81a8
    X86_AT(c, 0xc99acu);
    push32(c, 0xc99b1u); x86_call_known(c, 0xc81a8u, f_000c81a8); X86_RET(c, 0xc99b1u);
    X86_TICK(c, 7);
    // 0c99b1  jmp 0xc9ae6
    X86_AT(c, 0xc99b1u);
    goto L_c9ae6;
L_c99b6:
    X86_TICK(c, 7);
    // 0c99b6  call 0xc824c
    X86_AT(c, 0xc99b6u);
    push32(c, 0xc99bbu); x86_call_known(c, 0xc824cu, f_000c824c); X86_RET(c, 0xc99bbu);
    X86_TICK(c, 7);
    // 0c99bb  jmp 0xc9ae6
    X86_AT(c, 0xc99bbu);
    goto L_c9ae6;
L_c99c0:
    X86_TICK(c, 7);
    // 0c99c0  call 0xc839c
    X86_AT(c, 0xc99c0u);
    push32(c, 0xc99c5u); x86_call_known(c, 0xc839cu, f_000c839c); X86_RET(c, 0xc99c5u);
    X86_TICK(c, 7);
    // 0c99c5  jmp 0xc9ae6
    X86_AT(c, 0xc99c5u);
    goto L_c9ae6;
L_c99ca:
    X86_TICK(c, 7);
    // 0c99ca  call 0xc83dc
    X86_AT(c, 0xc99cau);
    push32(c, 0xc99cfu); x86_call_known(c, 0xc83dcu, f_000c83dc); X86_RET(c, 0xc99cfu);
    X86_TICK(c, 7);
    // 0c99cf  jmp 0xc9ae6
    X86_AT(c, 0xc99cfu);
    goto L_c9ae6;
L_c99d4:
    X86_TICK(c, 7);
    // 0c99d4  call 0xc8974
    X86_AT(c, 0xc99d4u);
    push32(c, 0xc99d9u); x86_call_known(c, 0xc8974u, f_000c8974); X86_RET(c, 0xc99d9u);
    X86_TICK(c, 7);
    // 0c99d9  jmp 0xc9ae6
    X86_AT(c, 0xc99d9u);
    goto L_c9ae6;
L_c99de:
    X86_TICK(c, 9);
    // 0c99de  push edi
    X86_AT(c, 0xc99deu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c99df  call 0xc8a10
    X86_AT(c, 0xc99dfu);
    push32(c, 0xc99e4u); x86_call_known(c, 0xc8a10u, f_000c8a10); X86_RET(c, 0xc99e4u);
    X86_TICK(c, 7);
    // 0c99e4  jmp 0xc9ae3
    X86_AT(c, 0xc99e4u);
    goto L_c9ae3;
L_c99e9:
    X86_TICK(c, 7);
    // 0c99e9  call 0xc8b60
    X86_AT(c, 0xc99e9u);
    push32(c, 0xc99eeu); x86_call_known(c, 0xc8b60u, f_000c8b60); X86_RET(c, 0xc99eeu);
    X86_TICK(c, 7);
    // 0c99ee  jmp 0xc9ae6
    X86_AT(c, 0xc99eeu);
    goto L_c9ae6;
L_c99f3:
    X86_TICK(c, 7);
    // 0c99f3  call 0xc8be8
    X86_AT(c, 0xc99f3u);
    push32(c, 0xc99f8u); x86_call_known(c, 0xc8be8u, f_000c8be8); X86_RET(c, 0xc99f8u);
    X86_TICK(c, 7);
    // 0c99f8  jmp 0xc9ae6
    X86_AT(c, 0xc99f8u);
    goto L_c9ae6;
L_c99fd:
    X86_TICK(c, 7);
    // 0c99fd  call 0xc8c04
    X86_AT(c, 0xc99fdu);
    push32(c, 0xc9a02u); x86_call_known(c, 0xc8c04u, f_000c8c04); X86_RET(c, 0xc9a02u);
    X86_TICK(c, 7);
    // 0c9a02  jmp 0xc9ae6
    X86_AT(c, 0xc9a02u);
    goto L_c9ae6;
L_c9a07:
    X86_TICK(c, 7);
    // 0c9a07  call 0xc8c60
    X86_AT(c, 0xc9a07u);
    push32(c, 0xc9a0cu); x86_call_known(c, 0xc8c60u, f_000c8c60); X86_RET(c, 0xc9a0cu);
    X86_TICK(c, 7);
    // 0c9a0c  jmp 0xc9ae6
    X86_AT(c, 0xc9a0cu);
    goto L_c9ae6;
L_c9a11:
    X86_TICK(c, 12);
    // 0c9a11  movzx edx, bl
    X86_AT(c, 0xc9a11u);
    c.r[2] = g8(c, 3);
    // 0c9a14  sub edx, 0x41
    X86_AT(c, 0xc9a14u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x41u, 0, 4); }
    // 0c9a17  cmp edx, 0xf
    X86_AT(c, 0xc9a17u);
    (void)x86_sub(c, c.r[2], 0xFu, 0, 4);
    // 0c9a1a  ja 0xc9ae6
    X86_AT(c, 0xc9a1au);
    if (x86_cc(c, 7)) { goto L_c9ae6; }
    X86_TICK(c, 7);
    // 0c9a20  jmp dword ptr cs:[edx*4 + 0xc9a28]
    X86_AT(c, 0xc9a20u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC9A28u)));
      switch (t) {
      case 0xc9a68u: goto L_c9a68;
      case 0xc9a72u: goto L_c9a72;
      case 0xc9a7du: goto L_c9a7d;
      case 0xc9a87u: goto L_c9a87;
      case 0xc9a8eu: goto L_c9a8e;
      case 0xc9a95u: goto L_c9a95;
      case 0xc9a9cu: goto L_c9a9c;
      case 0xc9aa3u: goto L_c9aa3;
      case 0xc9aabu: goto L_c9aab;
      case 0xc9ab2u: goto L_c9ab2;
      case 0xc9ab9u: goto L_c9ab9;
      case 0xc9ac0u: goto L_c9ac0;
      case 0xc9ac7u: goto L_c9ac7;
      case 0xc9aceu: goto L_c9ace;
      case 0xc9ad6u: goto L_c9ad6;
      case 0xc9addu: goto L_c9add;
      default: x86_jump(c, t); return; } }
L_c9a68:
    X86_TICK(c, 7);
    // 0c9a68  call 0xc8d18
    X86_AT(c, 0xc9a68u);
    push32(c, 0xc9a6du); x86_call_known(c, 0xc8d18u, f_000c8d18); X86_RET(c, 0xc9a6du);
    X86_TICK(c, 7);
    // 0c9a6d  jmp 0xc9ae6
    X86_AT(c, 0xc9a6du);
    goto L_c9ae6;
L_c9a72:
    X86_TICK(c, 9);
    // 0c9a72  push edi
    X86_AT(c, 0xc9a72u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c9a73  call 0xc8dc4
    X86_AT(c, 0xc9a73u);
    push32(c, 0xc9a78u); x86_call_known(c, 0xc8dc4u, f_000c8dc4); X86_RET(c, 0xc9a78u);
    X86_TICK(c, 7);
    // 0c9a78  jmp 0xc9ae3
    X86_AT(c, 0xc9a78u);
    goto L_c9ae3;
L_c9a7d:
    X86_TICK(c, 7);
    // 0c9a7d  call 0xc8ec4
    X86_AT(c, 0xc9a7du);
    push32(c, 0xc9a82u); x86_call_known(c, 0xc8ec4u, f_000c8ec4); X86_RET(c, 0xc9a82u);
    X86_TICK(c, 7);
    // 0c9a82  jmp 0xc9ae6
    X86_AT(c, 0xc9a82u);
    goto L_c9ae6;
L_c9a87:
    X86_TICK(c, 7);
    // 0c9a87  call 0xc82a0
    X86_AT(c, 0xc9a87u);
    push32(c, 0xc9a8cu); x86_call_known(c, 0xc82a0u, f_000c82a0); X86_RET(c, 0xc9a8cu);
    X86_TICK(c, 7);
    // 0c9a8c  jmp 0xc9ae6
    X86_AT(c, 0xc9a8cu);
    goto L_c9ae6;
L_c9a8e:
    X86_TICK(c, 7);
    // 0c9a8e  call 0xc8340
    X86_AT(c, 0xc9a8eu);
    push32(c, 0xc9a93u); x86_call_known(c, 0xc8340u, f_000c8340); X86_RET(c, 0xc9a93u);
    X86_TICK(c, 7);
    // 0c9a93  jmp 0xc9ae6
    X86_AT(c, 0xc9a93u);
    goto L_c9ae6;
L_c9a95:
    X86_TICK(c, 7);
    // 0c9a95  call 0xc82e4
    X86_AT(c, 0xc9a95u);
    push32(c, 0xc9a9au); x86_call_known(c, 0xc82e4u, f_000c82e4); X86_RET(c, 0xc9a9au);
    X86_TICK(c, 7);
    // 0c9a9a  jmp 0xc9ae6
    X86_AT(c, 0xc9a9au);
    goto L_c9ae6;
L_c9a9c:
    X86_TICK(c, 7);
    // 0c9a9c  call 0xc8ee8
    X86_AT(c, 0xc9a9cu);
    push32(c, 0xc9aa1u); x86_call_known(c, 0xc8ee8u, f_000c8ee8); X86_RET(c, 0xc9aa1u);
    X86_TICK(c, 7);
    // 0c9aa1  jmp 0xc9ae6
    X86_AT(c, 0xc9aa1u);
    goto L_c9ae6;
L_c9aa3:
    X86_TICK(c, 9);
    // 0c9aa3  push edi
    X86_AT(c, 0xc9aa3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c9aa4  call 0xc8f28
    X86_AT(c, 0xc9aa4u);
    push32(c, 0xc9aa9u); x86_call_known(c, 0xc8f28u, f_000c8f28); X86_RET(c, 0xc9aa9u);
    X86_TICK(c, 7);
    // 0c9aa9  jmp 0xc9ae3
    X86_AT(c, 0xc9aa9u);
    goto L_c9ae3;
L_c9aab:
    X86_TICK(c, 7);
    // 0c9aab  call 0xc8ff8
    X86_AT(c, 0xc9aabu);
    push32(c, 0xc9ab0u); x86_call_known(c, 0xc8ff8u, f_000c8ff8); X86_RET(c, 0xc9ab0u);
    X86_TICK(c, 7);
    // 0c9ab0  jmp 0xc9ae6
    X86_AT(c, 0xc9ab0u);
    goto L_c9ae6;
L_c9ab2:
    X86_TICK(c, 7);
    // 0c9ab2  call 0xc89cc
    X86_AT(c, 0xc9ab2u);
    push32(c, 0xc9ab7u); x86_call_known(c, 0xc89ccu, f_000c89cc); X86_RET(c, 0xc9ab7u);
    X86_TICK(c, 7);
    // 0c9ab7  jmp 0xc9ae6
    X86_AT(c, 0xc9ab7u);
    goto L_c9ae6;
L_c9ab9:
    X86_TICK(c, 7);
    // 0c9ab9  call 0xc903c
    X86_AT(c, 0xc9ab9u);
    push32(c, 0xc9abeu); x86_call_known(c, 0xc903cu, f_000c903c); X86_RET(c, 0xc9abeu);
    X86_TICK(c, 7);
    // 0c9abe  jmp 0xc9ae6
    X86_AT(c, 0xc9abeu);
    goto L_c9ae6;
L_c9ac0:
    X86_TICK(c, 7);
    // 0c9ac0  call 0xc9060
    X86_AT(c, 0xc9ac0u);
    push32(c, 0xc9ac5u); x86_call_known(c, 0xc9060u, f_000c9060); X86_RET(c, 0xc9ac5u);
    X86_TICK(c, 7);
    // 0c9ac5  jmp 0xc9ae6
    X86_AT(c, 0xc9ac5u);
    goto L_c9ae6;
L_c9ac7:
    X86_TICK(c, 7);
    // 0c9ac7  call 0xc8ba4
    X86_AT(c, 0xc9ac7u);
    push32(c, 0xc9accu); x86_call_known(c, 0xc8ba4u, f_000c8ba4); X86_RET(c, 0xc9accu);
    X86_TICK(c, 7);
    // 0c9acc  jmp 0xc9ae6
    X86_AT(c, 0xc9accu);
    goto L_c9ae6;
L_c9ace:
    X86_TICK(c, 9);
    // 0c9ace  push edi
    X86_AT(c, 0xc9aceu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c9acf  call 0xc90c8
    X86_AT(c, 0xc9acfu);
    push32(c, 0xc9ad4u); x86_call_known(c, 0xc90c8u, f_000c90c8); X86_RET(c, 0xc9ad4u);
    X86_TICK(c, 7);
    // 0c9ad4  jmp 0xc9ae3
    X86_AT(c, 0xc9ad4u);
    goto L_c9ae3;
L_c9ad6:
    X86_TICK(c, 7);
    // 0c9ad6  call 0xc8cd4
    X86_AT(c, 0xc9ad6u);
    push32(c, 0xc9adbu); x86_call_known(c, 0xc8cd4u, f_000c8cd4); X86_RET(c, 0xc9adbu);
    X86_TICK(c, 7);
    // 0c9adb  jmp 0xc9ae6
    X86_AT(c, 0xc9adbu);
    goto L_c9ae6;
L_c9add:
    X86_TICK(c, 9);
    // 0c9add  push edi
    X86_AT(c, 0xc9addu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c9ade  call 0xc9238
    X86_AT(c, 0xc9adeu);
    push32(c, 0xc9ae3u); x86_call_known(c, 0xc9238u, f_000c9238); X86_RET(c, 0xc9ae3u);
L_c9ae3:
    X86_TICK(c, 2);
    // 0c9ae3  add esp, 4
    X86_AT(c, 0xc9ae3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_c9ae6:
    X86_TICK(c, 24);
    // 0c9ae6  pop edi
    X86_AT(c, 0xc9ae6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c9ae7  pop ebx
    X86_AT(c, 0xc9ae7u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c9ae8  leave 
    X86_AT(c, 0xc9ae8u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c9ae9  ret 
    X86_AT(c, 0xc9ae9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc9940u, "ran off the end of a function");
}
void f_000c9ae3(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0c9ae3  add esp, 4
    X86_AT(c, 0xc9ae3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c9ae6  pop edi
    X86_AT(c, 0xc9ae6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c9ae7  pop ebx
    X86_AT(c, 0xc9ae7u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c9ae8  leave 
    X86_AT(c, 0xc9ae8u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c9ae9  ret 
    X86_AT(c, 0xc9ae9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc9ae3u, "ran off the end of a function");
}
void f_000c9ae6(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0c9ae6  pop edi
    X86_AT(c, 0xc9ae6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c9ae7  pop ebx
    X86_AT(c, 0xc9ae7u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c9ae8  leave 
    X86_AT(c, 0xc9ae8u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c9ae9  ret 
    X86_AT(c, 0xc9ae9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc9ae6u, "ran off the end of a function");
}
void f_000c9aec(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0c9aec  mov eax, dword ptr [0xa4a76]
    X86_AT(c, 0xc9aecu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A76u)));
    // 0c9af1  mov dword ptr [0xa4a66], eax
    X86_AT(c, 0xc9af1u);
    wr32((c.sbase[3] + (uint32_t)(0xA4A66u)), c.r[0]);
    // 0c9af6  mov eax, dword ptr [0xa4a7a]
    X86_AT(c, 0xc9af6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A7Au)));
    // 0c9afb  mov dword ptr [0xa4a6a], eax
    X86_AT(c, 0xc9afbu);
    wr32((c.sbase[3] + (uint32_t)(0xA4A6Au)), c.r[0]);
    // 0c9b00  call 0xc1eb0
    X86_AT(c, 0xc9b00u);
    push32(c, 0xc9b05u); x86_call_known(c, 0xc1eb0u, f_000c1eb0); X86_RET(c, 0xc9b05u);
    X86_TICK(c, 7);
    // 0c9b05  call 0xc1694
    X86_AT(c, 0xc9b05u);
    push32(c, 0xc9b0au); x86_call_known(c, 0xc1694u, f_000c1694); X86_RET(c, 0xc9b0au);
    X86_TICK(c, 7);
    // 0c9b0a  call 0xc1864
    X86_AT(c, 0xc9b0au);
    push32(c, 0xc9b0fu); x86_call_known(c, 0xc1864u, f_000c1864); X86_RET(c, 0xc9b0fu);
    X86_TICK(c, 10);
    // 0c9b0f  ret 
    X86_AT(c, 0xc9b0fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc9aecu, "ran off the end of a function");
}
void f_000c9b10(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0c9b10  push ebp
    X86_AT(c, 0xc9b10u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c9b11  mov ebp, esp
    X86_AT(c, 0xc9b11u);
    c.r[5] = c.r[4];
    // 0c9b13  push ebx
    X86_AT(c, 0xc9b13u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c9b14  push esi
    X86_AT(c, 0xc9b14u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c9b15  push edi
    X86_AT(c, 0xc9b15u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c9b16  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc9b16u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c9b19  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc9b19u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0c9b1c  and esi, esi
    X86_AT(c, 0xc9b1cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0c9b1e  jge 0xc9b4b
    X86_AT(c, 0xc9b1eu);
    if (x86_cc(c, 13)) { goto L_c9b4b; }
    X86_TICK(c, 12);
    // 0c9b20  cmp dword ptr [0xa6134], 1
    X86_AT(c, 0xc9b20u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA6134u))), 0x1u, 0, 4);
    // 0c9b27  jne 0xc9b8f
    X86_AT(c, 0xc9b27u);
    if (x86_cc(c, 5)) { goto L_c9b8f; }
    X86_TICK(c, 9);
    // 0c9b29  push edi
    X86_AT(c, 0xc9b29u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c9b2a  call 0xcac4c
    X86_AT(c, 0xc9b2au);
    push32(c, 0xc9b2fu); x86_call_known(c, 0xcac4cu, f_000cac4c); X86_RET(c, 0xc9b2fu);
    X86_TICK(c, 9);
    // 0c9b2f  push edi
    X86_AT(c, 0xc9b2fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c9b30  call 0xbe720
    X86_AT(c, 0xc9b30u);
    push32(c, 0xc9b35u); x86_call_known(c, 0xbe720u, f_000be720); X86_RET(c, 0xc9b35u);
    X86_TICK(c, 15);
    // 0c9b35  lea eax, [edi + edi*2]
    X86_AT(c, 0xc9b35u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c9b38  lea edx, [eax*8]
    X86_AT(c, 0xc9b38u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c9b3f  lea edx, [eax + edx*8]
    X86_AT(c, 0xc9b3fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c9b42  mov byte ptr [edx + 0xa4abd], 0x50
    X86_AT(c, 0xc9b42u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu)), 0x50u);
    // 0c9b49  jmp 0xc9b85
    X86_AT(c, 0xc9b49u);
    goto L_c9b85;
L_c9b4b:
    X86_TICK(c, 25);
    // 0c9b4b  lea eax, [edi + edi*2]
    X86_AT(c, 0xc9b4bu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c9b4e  lea edx, [eax*8]
    X86_AT(c, 0xc9b4eu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c9b55  lea edx, [eax + edx*8]
    X86_AT(c, 0xc9b55u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c9b58  sub dword ptr [edx + 0xa4ad5], esi
    X86_AT(c, 0xc9b58u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD5u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[6], 0, 4)); }
    // 0c9b5e  cmp dword ptr [edx + 0xa4ad5], 0
    X86_AT(c, 0xc9b5eu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD5u))), 0x0u, 0, 4);
    // 0c9b65  jge 0xc9bb7
    X86_AT(c, 0xc9b65u);
    if (x86_cc(c, 13)) { goto L_c9bb7; }
    X86_TICK(c, 12);
    // 0c9b67  cmp dword ptr [0xa6134], 1
    X86_AT(c, 0xc9b67u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA6134u))), 0x1u, 0, 4);
    // 0c9b6e  jne 0xc9b8f
    X86_AT(c, 0xc9b6eu);
    if (x86_cc(c, 5)) { goto L_c9b8f; }
    X86_TICK(c, 11);
    // 0c9b70  push edi
    X86_AT(c, 0xc9b70u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c9b71  mov ebx, edx
    X86_AT(c, 0xc9b71u);
    c.r[3] = c.r[2];
    // 0c9b73  call 0xcac4c
    X86_AT(c, 0xc9b73u);
    push32(c, 0xc9b78u); x86_call_known(c, 0xcac4cu, f_000cac4c); X86_RET(c, 0xc9b78u);
    X86_TICK(c, 9);
    // 0c9b78  push edi
    X86_AT(c, 0xc9b78u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c9b79  call 0xbe720
    X86_AT(c, 0xc9b79u);
    push32(c, 0xc9b7eu); x86_call_known(c, 0xbe720u, f_000be720); X86_RET(c, 0xc9b7eu);
    X86_TICK(c, 2);
    // 0c9b7e  mov byte ptr [ebx + 0xa4abd], 0x50
    X86_AT(c, 0xc9b7eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xA4ABDu)), 0x50u);
L_c9b85:
    X86_TICK(c, 11);
    // 0c9b85  mov eax, 0xffffffff
    X86_AT(c, 0xc9b85u);
    c.r[0] = 0xFFFFFFFFu;
    // 0c9b8a  add esp, 8
    X86_AT(c, 0xc9b8au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c9b8d  jmp 0xc9bc5
    X86_AT(c, 0xc9b8du);
    goto L_c9bc5;
L_c9b8f:
    X86_TICK(c, 19);
    // 0c9b8f  lea eax, [edi + edi*2]
    X86_AT(c, 0xc9b8fu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c9b92  lea edx, [eax*8]
    X86_AT(c, 0xc9b92u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c9b99  lea edx, [eax + edx*8]
    X86_AT(c, 0xc9b99u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c9b9c  mov dword ptr [edx + 0xa4ad5], 0
    X86_AT(c, 0xc9b9cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD5u)), 0x0u);
    // 0c9ba6  mov byte ptr [edx + 0xa4abd], 0x44
    X86_AT(c, 0xc9ba6u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu)), 0x44u);
    // 0c9bad  push edi
    X86_AT(c, 0xc9badu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c9bae  call 0xbe720
    X86_AT(c, 0xc9baeu);
    push32(c, 0xc9bb3u); x86_call_known(c, 0xbe720u, f_000be720); X86_RET(c, 0xc9bb3u);
    X86_TICK(c, 9);
    // 0c9bb3  sub eax, eax
    X86_AT(c, 0xc9bb3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c9bb5  jmp 0xc9bc2
    X86_AT(c, 0xc9bb5u);
    goto L_c9bc2;
L_c9bb7:
    X86_TICK(c, 9);
    // 0c9bb7  push edi
    X86_AT(c, 0xc9bb7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c9bb8  call 0xbe720
    X86_AT(c, 0xc9bb8u);
    push32(c, 0xc9bbdu); x86_call_known(c, 0xbe720u, f_000be720); X86_RET(c, 0xc9bbdu);
    X86_TICK(c, 2);
    // 0c9bbd  mov eax, 0xffffffff
    X86_AT(c, 0xc9bbdu);
    c.r[0] = 0xFFFFFFFFu;
L_c9bc2:
    X86_TICK(c, 2);
    // 0c9bc2  add esp, 4
    X86_AT(c, 0xc9bc2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_c9bc5:
    X86_TICK(c, 28);
    // 0c9bc5  pop edi
    X86_AT(c, 0xc9bc5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c9bc6  pop esi
    X86_AT(c, 0xc9bc6u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c9bc7  pop ebx
    X86_AT(c, 0xc9bc7u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c9bc8  leave 
    X86_AT(c, 0xc9bc8u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c9bc9  ret 
    X86_AT(c, 0xc9bc9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc9b10u, "ran off the end of a function");
}
void f_000c9bcc(X86Cpu& c) {
    X86_TICK(c, 8);
    // 0c9bcc  push esi
    X86_AT(c, 0xc9bccu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c9bcd  push edi
    X86_AT(c, 0xc9bcdu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c9bce  sub esi, esi
    X86_AT(c, 0xc9bceu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0c9bd0  mov edi, esi
    X86_AT(c, 0xc9bd0u);
    c.r[7] = c.r[6];
L_c9bd2:
    X86_TICK(c, 7);
    // 0c9bd2  cmp edi, 4
    X86_AT(c, 0xc9bd2u);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0c9bd5  jge 0xc9bfa
    X86_AT(c, 0xc9bd5u);
    if (x86_cc(c, 13)) { goto L_c9bfa; }
    X86_TICK(c, 17);
    // 0c9bd7  lea eax, [edi + edi*2]
    X86_AT(c, 0xc9bd7u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0c9bda  lea edx, [eax*8]
    X86_AT(c, 0xc9bdau);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c9be1  lea edx, [eax + edx*8]
    X86_AT(c, 0xc9be1u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c9be4  mov al, byte ptr [edx + 0xa4abd]
    X86_AT(c, 0xc9be4u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu))));
    // 0c9bea  cmp al, 0x47
    X86_AT(c, 0xc9beau);
    (void)x86_sub(c, g8(c, 0), 0x47u, 0, 1);
    // 0c9bec  je 0xc9bf2
    X86_AT(c, 0xc9becu);
    if (x86_cc(c, 4)) { goto L_c9bf2; }
    X86_TICK(c, 7);
    // 0c9bee  cmp al, 0x50
    X86_AT(c, 0xc9beeu);
    (void)x86_sub(c, g8(c, 0), 0x50u, 0, 1);
    // 0c9bf0  jne 0xc9bf7
    X86_AT(c, 0xc9bf0u);
    if (x86_cc(c, 5)) { goto L_c9bf7; }
L_c9bf2:
    X86_TICK(c, 2);
    // 0c9bf2  mov esi, 0xffffffff
    X86_AT(c, 0xc9bf2u);
    c.r[6] = 0xFFFFFFFFu;
L_c9bf7:
    X86_TICK(c, 9);
    // 0c9bf7  inc edi
    X86_AT(c, 0xc9bf7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c9bf8  jmp 0xc9bd2
    X86_AT(c, 0xc9bf8u);
    X86_POLL(c, 0xc9bd2u); goto L_c9bd2;
L_c9bfa:
    X86_TICK(c, 7);
    // 0c9bfa  cmp esi, 0xffffffff
    X86_AT(c, 0xc9bfau);
    (void)x86_sub(c, c.r[6], 0xFFFFFFFFu, 0, 4);
    // 0c9bfd  jne 0xc9c03
    X86_AT(c, 0xc9bfdu);
    if (x86_cc(c, 5)) { goto L_c9c03; }
    X86_TICK(c, 9);
    // 0c9bff  sub eax, eax
    X86_AT(c, 0xc9bffu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c9c01  jmp 0xc9c20
    X86_AT(c, 0xc9c01u);
    goto L_c9c20;
L_c9c03:
    X86_TICK(c, 2);
    // 0c9c03  sub edi, edi
    X86_AT(c, 0xc9c03u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_c9c05:
    X86_TICK(c, 7);
    // 0c9c05  cmp edi, 4
    X86_AT(c, 0xc9c05u);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0c9c08  jge 0xc9c16
    X86_AT(c, 0xc9c08u);
    if (x86_cc(c, 13)) { goto L_c9c16; }
    X86_TICK(c, 9);
    // 0c9c0a  push edi
    X86_AT(c, 0xc9c0au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c9c0b  call 0xbe720
    X86_AT(c, 0xc9c0bu);
    push32(c, 0xc9c10u); x86_call_known(c, 0xbe720u, f_000be720); X86_RET(c, 0xc9c10u);
    X86_TICK(c, 11);
    // 0c9c10  inc edi
    X86_AT(c, 0xc9c10u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c9c11  add esp, 4
    X86_AT(c, 0xc9c11u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c9c14  jmp 0xc9c05
    X86_AT(c, 0xc9c14u);
    X86_POLL(c, 0xc9c05u); goto L_c9c05;
L_c9c16:
    X86_TICK(c, 7);
    // 0c9c16  call 0xca92c
    X86_AT(c, 0xc9c16u);
    push32(c, 0xc9c1bu); x86_call_known(c, 0xca92cu, f_000ca92c); X86_RET(c, 0xc9c1bu);
    X86_TICK(c, 2);
    // 0c9c1b  mov eax, 0xffffffff
    X86_AT(c, 0xc9c1bu);
    c.r[0] = 0xFFFFFFFFu;
L_c9c20:
    X86_TICK(c, 18);
    // 0c9c20  pop edi
    X86_AT(c, 0xc9c20u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c9c21  pop esi
    X86_AT(c, 0xc9c21u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c9c22  ret 
    X86_AT(c, 0xc9c22u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc9bccu, "ran off the end of a function");
}
void f_000c9d1c(X86Cpu& c) {
    X86_TICK(c, 41);
    // 0c9d1c  push ebp
    X86_AT(c, 0xc9d1cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c9d1d  mov ebp, esp
    X86_AT(c, 0xc9d1du);
    c.r[5] = c.r[4];
    // 0c9d1f  sub esp, 0xc
    X86_AT(c, 0xc9d1fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0c9d22  push ebx
    X86_AT(c, 0xc9d22u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c9d23  push esi
    X86_AT(c, 0xc9d23u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c9d24  push edi
    X86_AT(c, 0xc9d24u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c9d25  sub eax, eax
    X86_AT(c, 0xc9d25u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c9d27  mov byte ptr [ebp - 6], al
    X86_AT(c, 0xc9d27u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)), g8(c, 0));
    // 0c9d2a  mov byte ptr [ebp - 5], al
    X86_AT(c, 0xc9d2au);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu)), g8(c, 0));
    // 0c9d2d  mov dword ptr [ebp - 4], 3
    X86_AT(c, 0xc9d2du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x3u);
    // 0c9d34  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xc9d34u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c9d37  lea eax, [eax + eax*2]
    X86_AT(c, 0xc9d37u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c9d3a  lea edx, [eax*8]
    X86_AT(c, 0xc9d3au);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c9d41  lea edx, [eax + edx*8]
    X86_AT(c, 0xc9d41u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0c9d44  lea ebx, [edx*1 + 0xa4aa0]
    X86_AT(c, 0xc9d44u);
    c.r[3] = (uint32_t)(c.r[2] + 0xA4AA0u);
    // 0c9d4b  push 2
    X86_AT(c, 0xc9d4bu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c9d4d  call 0xbbb5c
    X86_AT(c, 0xc9d4du);
    push32(c, 0xc9d52u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc9d52u);
    X86_TICK(c, 9);
    // 0c9d52  push 6
    X86_AT(c, 0xc9d52u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c9d54  call 0xbb6b0
    X86_AT(c, 0xc9d54u);
    push32(c, 0xc9d59u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc9d59u);
    X86_TICK(c, 15);
    // 0c9d59  mov edi, 2
    X86_AT(c, 0xc9d59u);
    c.r[7] = 0x2u;
    // 0c9d5e  push edi
    X86_AT(c, 0xc9d5eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c9d5f  push 3
    X86_AT(c, 0xc9d5fu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c9d61  push 6
    X86_AT(c, 0xc9d61u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c9d63  call 0xbc174
    X86_AT(c, 0xc9d63u);
    push32(c, 0xc9d68u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc9d68u);
    X86_TICK(c, 11);
    // 0c9d68  push 0x6c84
    X86_AT(c, 0xc9d68u);
    { uint32_t v = 0x6C84u; push32(c, v); }
    // 0c9d6d  push 6
    X86_AT(c, 0xc9d6du);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c9d6f  call 0xba428
    X86_AT(c, 0xc9d6fu);
    push32(c, 0xc9d74u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc9d74u);
    X86_TICK(c, 17);
    // 0c9d74  add esp, 0x1c
    X86_AT(c, 0xc9d74u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0c9d77  movzx edx, byte ptr [ebx + 0x1d]
    X86_AT(c, 0xc9d77u);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Du)));
    // 0c9d7b  sub edx, 0x41
    X86_AT(c, 0xc9d7bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x41u, 0, 4); }
    // 0c9d7e  cmp edx, 0xf
    X86_AT(c, 0xc9d7eu);
    (void)x86_sub(c, c.r[2], 0xFu, 0, 4);
    // 0c9d81  ja 0xc9de3
    X86_AT(c, 0xc9d81u);
    if (x86_cc(c, 7)) { goto L_c9de3; }
    X86_TICK(c, 7);
    // 0c9d83  jmp dword ptr cs:[edx*4 + 0xc9d8b]
    X86_AT(c, 0xc9d83u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC9D8Bu)));
      switch (t) {
      case 0xc9dcbu: goto L_c9dcb;
      case 0xc9dcfu: goto L_c9dcf;
      case 0xc9dd3u: goto L_c9dd3;
      case 0xc9dd7u: goto L_c9dd7;
      case 0xc9de3u: goto L_c9de3;
      default: x86_jump(c, t); return; } }
L_c9dcb:
    X86_TICK(c, 9);
    // 0c9dcb  push 0xc
    X86_AT(c, 0xc9dcbu);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0c9dcd  jmp 0xc9dd9
    X86_AT(c, 0xc9dcdu);
    goto L_c9dd9;
L_c9dcf:
    X86_TICK(c, 9);
    // 0c9dcf  push 0xd
    X86_AT(c, 0xc9dcfu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0c9dd1  jmp 0xc9dd9
    X86_AT(c, 0xc9dd1u);
    goto L_c9dd9;
L_c9dd3:
    X86_TICK(c, 9);
    // 0c9dd3  push 0xe
    X86_AT(c, 0xc9dd3u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0c9dd5  jmp 0xc9dd9
    X86_AT(c, 0xc9dd5u);
    goto L_c9dd9;
L_c9dd7:
    X86_TICK(c, 2);
    // 0c9dd7  push 9
    X86_AT(c, 0xc9dd7u);
    { uint32_t v = 0x9u; push32(c, v); }
L_c9dd9:
    X86_TICK(c, 9);
    // 0c9dd9  push 6
    X86_AT(c, 0xc9dd9u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c9ddb  call 0xbc3ec
    X86_AT(c, 0xc9ddbu);
    push32(c, 0xc9de0u); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xc9de0u);
    X86_TICK(c, 2);
    // 0c9de0  add esp, 8
    X86_AT(c, 0xc9de0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c9de3:
    X86_TICK(c, 11);
    // 0c9de3  push ebx
    X86_AT(c, 0xc9de3u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c9de4  push 6
    X86_AT(c, 0xc9de4u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c9de6  call 0xbbfe0
    X86_AT(c, 0xc9de6u);
    push32(c, 0xc9debu); x86_call_known(c, 0xbbfe0u, f_000bbfe0); X86_RET(c, 0xc9debu);
    X86_TICK(c, 11);
    // 0c9deb  push 0x6c9a
    X86_AT(c, 0xc9debu);
    { uint32_t v = 0x6C9Au; push32(c, v); }
    // 0c9df0  push 6
    X86_AT(c, 0xc9df0u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c9df2  call 0xbbba4
    X86_AT(c, 0xc9df2u);
    push32(c, 0xc9df7u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc9df7u);
    X86_TICK(c, 21);
    // 0c9df7  lea eax, [ebp - 5]
    X86_AT(c, 0xc9df7u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFBu);
    // 0c9dfa  push eax
    X86_AT(c, 0xc9dfau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c9dfb  mov al, byte ptr [ebx + 0x1d]
    X86_AT(c, 0xc9dfbu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Du))));
    // 0c9dfe  push eax
    X86_AT(c, 0xc9dfeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c9dff  push 4
    X86_AT(c, 0xc9dffu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c9e01  push 0xa699c
    X86_AT(c, 0xc9e01u);
    { uint32_t v = 0xA699Cu; push32(c, v); }
    // 0c9e06  call 0xba1b4
    X86_AT(c, 0xc9e06u);
    push32(c, 0xc9e0bu); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc9e0bu);
    X86_TICK(c, 11);
    // 0c9e0b  push eax
    X86_AT(c, 0xc9e0bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c9e0c  push 6
    X86_AT(c, 0xc9e0cu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c9e0e  call 0xbbba4
    X86_AT(c, 0xc9e0eu);
    push32(c, 0xc9e13u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc9e13u);
    X86_TICK(c, 9);
    // 0c9e13  push 6
    X86_AT(c, 0xc9e13u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c9e15  call 0xbb6b0
    X86_AT(c, 0xc9e15u);
    push32(c, 0xc9e1au); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc9e1au);
    X86_TICK(c, 11);
    // 0c9e1a  push 0xf
    X86_AT(c, 0xc9e1au);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0c9e1c  push 6
    X86_AT(c, 0xc9e1cu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c9e1e  call 0xbc3ec
    X86_AT(c, 0xc9e1eu);
    push32(c, 0xc9e23u); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xc9e23u);
    X86_TICK(c, 9);
    // 0c9e23  push 6
    X86_AT(c, 0xc9e23u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c9e25  call 0xbb6b0
    X86_AT(c, 0xc9e25u);
    push32(c, 0xc9e2au); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc9e2au);
    X86_TICK(c, 15);
    // 0c9e2a  mov edi, 3
    X86_AT(c, 0xc9e2au);
    c.r[7] = 0x3u;
    // 0c9e2f  push edi
    X86_AT(c, 0xc9e2fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c9e30  push 0
    X86_AT(c, 0xc9e30u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c9e32  push 6
    X86_AT(c, 0xc9e32u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c9e34  call 0xbc174
    X86_AT(c, 0xc9e34u);
    push32(c, 0xc9e39u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc9e39u);
    X86_TICK(c, 13);
    // 0c9e39  add esp, 0x44
    X86_AT(c, 0xc9e39u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x44u, 0, 4); }
    // 0c9e3c  push 0x6ca0
    X86_AT(c, 0xc9e3cu);
    { uint32_t v = 0x6CA0u; push32(c, v); }
    // 0c9e41  push 6
    X86_AT(c, 0xc9e41u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c9e43  call 0xba428
    X86_AT(c, 0xc9e43u);
    push32(c, 0xc9e48u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc9e48u);
    X86_TICK(c, 9);
    // 0c9e48  push 6
    X86_AT(c, 0xc9e48u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c9e4a  call 0xbbb5c
    X86_AT(c, 0xc9e4au);
    push32(c, 0xc9e4fu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc9e4fu);
    X86_TICK(c, 18);
    // 0c9e4f  inc edi
    X86_AT(c, 0xc9e4fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c9e50  push edi
    X86_AT(c, 0xc9e50u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c9e51  push dword ptr [ebp - 4]
    X86_AT(c, 0xc9e51u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0c9e54  push 6
    X86_AT(c, 0xc9e54u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c9e56  call 0xbc174
    X86_AT(c, 0xc9e56u);
    push32(c, 0xc9e5bu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc9e5bu);
    X86_TICK(c, 11);
    // 0c9e5b  push 0x6ccc
    X86_AT(c, 0xc9e5bu);
    { uint32_t v = 0x6CCCu; push32(c, v); }
    // 0c9e60  push 6
    X86_AT(c, 0xc9e60u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c9e62  call 0xba428
    X86_AT(c, 0xc9e62u);
    push32(c, 0xc9e67u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc9e67u);
    X86_TICK(c, 11);
    // 0c9e67  push 0x6cf8
    X86_AT(c, 0xc9e67u);
    { uint32_t v = 0x6CF8u; push32(c, v); }
    // 0c9e6c  push 6
    X86_AT(c, 0xc9e6cu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c9e6e  call 0xbbba4
    X86_AT(c, 0xc9e6eu);
    push32(c, 0xc9e73u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc9e73u);
    X86_TICK(c, 16);
    // 0c9e73  push 3
    X86_AT(c, 0xc9e73u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c9e75  push dword ptr [ebx + 0x1e]
    X86_AT(c, 0xc9e75u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Eu))); push32(c, v); }
    // 0c9e78  push 6
    X86_AT(c, 0xc9e78u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c9e7a  call 0xba404
    X86_AT(c, 0xc9e7au);
    push32(c, 0xc9e7fu); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc9e7fu);
    X86_TICK(c, 18);
    // 0c9e7f  inc edi
    X86_AT(c, 0xc9e7fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c9e80  push edi
    X86_AT(c, 0xc9e80u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c9e81  push dword ptr [ebp - 4]
    X86_AT(c, 0xc9e81u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0c9e84  push 6
    X86_AT(c, 0xc9e84u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c9e86  call 0xbc174
    X86_AT(c, 0xc9e86u);
    push32(c, 0xc9e8bu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc9e8bu);
    X86_TICK(c, 13);
    // 0c9e8b  add esp, 0x40
    X86_AT(c, 0xc9e8bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0c9e8e  push 0x6d00
    X86_AT(c, 0xc9e8eu);
    { uint32_t v = 0x6D00u; push32(c, v); }
    // 0c9e93  push 6
    X86_AT(c, 0xc9e93u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c9e95  call 0xba428
    X86_AT(c, 0xc9e95u);
    push32(c, 0xc9e9au); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc9e9au);
    X86_TICK(c, 11);
    // 0c9e9a  push 0x6d2c
    X86_AT(c, 0xc9e9au);
    { uint32_t v = 0x6D2Cu; push32(c, v); }
    // 0c9e9f  push 6
    X86_AT(c, 0xc9e9fu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c9ea1  call 0xbbba4
    X86_AT(c, 0xc9ea1u);
    push32(c, 0xc9ea6u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc9ea6u);
    X86_TICK(c, 16);
    // 0c9ea6  push 3
    X86_AT(c, 0xc9ea6u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c9ea8  push dword ptr [ebx + 0x22]
    X86_AT(c, 0xc9ea8u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x22u))); push32(c, v); }
    // 0c9eab  push 6
    X86_AT(c, 0xc9eabu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c9ead  call 0xba404
    X86_AT(c, 0xc9eadu);
    push32(c, 0xc9eb2u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc9eb2u);
    X86_TICK(c, 18);
    // 0c9eb2  inc edi
    X86_AT(c, 0xc9eb2u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c9eb3  push edi
    X86_AT(c, 0xc9eb3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c9eb4  push dword ptr [ebp - 4]
    X86_AT(c, 0xc9eb4u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0c9eb7  push 6
    X86_AT(c, 0xc9eb7u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c9eb9  call 0xbc174
    X86_AT(c, 0xc9eb9u);
    push32(c, 0xc9ebeu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc9ebeu);
    X86_TICK(c, 11);
    // 0c9ebe  push 0x6d34
    X86_AT(c, 0xc9ebeu);
    { uint32_t v = 0x6D34u; push32(c, v); }
    // 0c9ec3  push 6
    X86_AT(c, 0xc9ec3u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c9ec5  call 0xba428
    X86_AT(c, 0xc9ec5u);
    push32(c, 0xc9ecau); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc9ecau);
    X86_TICK(c, 11);
    // 0c9eca  push 0x6d60
    X86_AT(c, 0xc9ecau);
    { uint32_t v = 0x6D60u; push32(c, v); }
    // 0c9ecf  push 6
    X86_AT(c, 0xc9ecfu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c9ed1  call 0xbbba4
    X86_AT(c, 0xc9ed1u);
    push32(c, 0xc9ed6u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc9ed6u);
    X86_TICK(c, 16);
    // 0c9ed6  push 3
    X86_AT(c, 0xc9ed6u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c9ed8  push dword ptr [ebx + 0x26]
    X86_AT(c, 0xc9ed8u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x26u))); push32(c, v); }
    // 0c9edb  push 6
    X86_AT(c, 0xc9edbu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c9edd  call 0xba404
    X86_AT(c, 0xc9eddu);
    push32(c, 0xc9ee2u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc9ee2u);
    X86_TICK(c, 20);
    // 0c9ee2  add esp, 0x44
    X86_AT(c, 0xc9ee2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x44u, 0, 4); }
    // 0c9ee5  inc edi
    X86_AT(c, 0xc9ee5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c9ee6  push edi
    X86_AT(c, 0xc9ee6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c9ee7  push dword ptr [ebp - 4]
    X86_AT(c, 0xc9ee7u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0c9eea  push 6
    X86_AT(c, 0xc9eeau);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c9eec  call 0xbc174
    X86_AT(c, 0xc9eecu);
    push32(c, 0xc9ef1u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc9ef1u);
    X86_TICK(c, 11);
    // 0c9ef1  push 0x6d68
    X86_AT(c, 0xc9ef1u);
    { uint32_t v = 0x6D68u; push32(c, v); }
    // 0c9ef6  push 6
    X86_AT(c, 0xc9ef6u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c9ef8  call 0xba428
    X86_AT(c, 0xc9ef8u);
    push32(c, 0xc9efdu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc9efdu);
    X86_TICK(c, 11);
    // 0c9efd  push 0x6d94
    X86_AT(c, 0xc9efdu);
    { uint32_t v = 0x6D94u; push32(c, v); }
    // 0c9f02  push 6
    X86_AT(c, 0xc9f02u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c9f04  call 0xbbba4
    X86_AT(c, 0xc9f04u);
    push32(c, 0xc9f09u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc9f09u);
    X86_TICK(c, 16);
    // 0c9f09  push 3
    X86_AT(c, 0xc9f09u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c9f0b  push dword ptr [ebx + 0x2a]
    X86_AT(c, 0xc9f0bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x2Au))); push32(c, v); }
    // 0c9f0e  push 6
    X86_AT(c, 0xc9f0eu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c9f10  call 0xba404
    X86_AT(c, 0xc9f10u);
    push32(c, 0xc9f15u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc9f15u);
    X86_TICK(c, 18);
    // 0c9f15  inc edi
    X86_AT(c, 0xc9f15u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c9f16  push edi
    X86_AT(c, 0xc9f16u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c9f17  push dword ptr [ebp - 4]
    X86_AT(c, 0xc9f17u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0c9f1a  push 6
    X86_AT(c, 0xc9f1au);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c9f1c  call 0xbc174
    X86_AT(c, 0xc9f1cu);
    push32(c, 0xc9f21u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc9f21u);
    X86_TICK(c, 11);
    // 0c9f21  push 0x6d9c
    X86_AT(c, 0xc9f21u);
    { uint32_t v = 0x6D9Cu; push32(c, v); }
    // 0c9f26  push 6
    X86_AT(c, 0xc9f26u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c9f28  call 0xba428
    X86_AT(c, 0xc9f28u);
    push32(c, 0xc9f2du); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc9f2du);
    X86_TICK(c, 13);
    // 0c9f2d  add esp, 0x3c
    X86_AT(c, 0xc9f2du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c9f30  push 0x6dc8
    X86_AT(c, 0xc9f30u);
    { uint32_t v = 0x6DC8u; push32(c, v); }
    // 0c9f35  push 6
    X86_AT(c, 0xc9f35u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c9f37  call 0xbbba4
    X86_AT(c, 0xc9f37u);
    push32(c, 0xc9f3cu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc9f3cu);
    X86_TICK(c, 18);
    // 0c9f3c  add esp, 8
    X86_AT(c, 0xc9f3cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c9f3f  push 3
    X86_AT(c, 0xc9f3fu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c9f41  push dword ptr [ebx + 0x31]
    X86_AT(c, 0xc9f41u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x31u))); push32(c, v); }
    // 0c9f44  push 6
    X86_AT(c, 0xc9f44u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c9f46  call 0xba404
    X86_AT(c, 0xc9f46u);
    push32(c, 0xc9f4bu); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc9f4bu);
    X86_TICK(c, 18);
    // 0c9f4b  inc edi
    X86_AT(c, 0xc9f4bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c9f4c  push edi
    X86_AT(c, 0xc9f4cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c9f4d  push dword ptr [ebp - 4]
    X86_AT(c, 0xc9f4du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0c9f50  push 6
    X86_AT(c, 0xc9f50u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c9f52  call 0xbc174
    X86_AT(c, 0xc9f52u);
    push32(c, 0xc9f57u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc9f57u);
    X86_TICK(c, 11);
    // 0c9f57  push 0x6dd0
    X86_AT(c, 0xc9f57u);
    { uint32_t v = 0x6DD0u; push32(c, v); }
    // 0c9f5c  push 6
    X86_AT(c, 0xc9f5cu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c9f5e  call 0xba428
    X86_AT(c, 0xc9f5eu);
    push32(c, 0xc9f63u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc9f63u);
    X86_TICK(c, 11);
    // 0c9f63  push 0x6dfa
    X86_AT(c, 0xc9f63u);
    { uint32_t v = 0x6DFAu; push32(c, v); }
    // 0c9f68  push 6
    X86_AT(c, 0xc9f68u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c9f6a  call 0xbbba4
    X86_AT(c, 0xc9f6au);
    push32(c, 0xc9f6fu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc9f6fu);
    X86_TICK(c, 16);
    // 0c9f6f  push 4
    X86_AT(c, 0xc9f6fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c9f71  push dword ptr [ebx + 0x35]
    X86_AT(c, 0xc9f71u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x35u))); push32(c, v); }
    // 0c9f74  push 6
    X86_AT(c, 0xc9f74u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c9f76  call 0xba404
    X86_AT(c, 0xc9f76u);
    push32(c, 0xc9f7bu); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc9f7bu);
    X86_TICK(c, 18);
    // 0c9f7b  inc edi
    X86_AT(c, 0xc9f7bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c9f7c  push edi
    X86_AT(c, 0xc9f7cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c9f7d  push dword ptr [ebp - 4]
    X86_AT(c, 0xc9f7du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0c9f80  push 6
    X86_AT(c, 0xc9f80u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c9f82  call 0xbc174
    X86_AT(c, 0xc9f82u);
    push32(c, 0xc9f87u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc9f87u);
    X86_TICK(c, 13);
    // 0c9f87  add esp, 0x40
    X86_AT(c, 0xc9f87u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0c9f8a  push 0x6e00
    X86_AT(c, 0xc9f8au);
    { uint32_t v = 0x6E00u; push32(c, v); }
    // 0c9f8f  push 6
    X86_AT(c, 0xc9f8fu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c9f91  call 0xba428
    X86_AT(c, 0xc9f91u);
    push32(c, 0xc9f96u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc9f96u);
    X86_TICK(c, 11);
    // 0c9f96  push 0x6e2a
    X86_AT(c, 0xc9f96u);
    { uint32_t v = 0x6E2Au; push32(c, v); }
    // 0c9f9b  push 6
    X86_AT(c, 0xc9f9bu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c9f9d  call 0xbbba4
    X86_AT(c, 0xc9f9du);
    push32(c, 0xc9fa2u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc9fa2u);
    X86_TICK(c, 16);
    // 0c9fa2  push 4
    X86_AT(c, 0xc9fa2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c9fa4  push dword ptr [ebx + 0x39]
    X86_AT(c, 0xc9fa4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x39u))); push32(c, v); }
    // 0c9fa7  push 6
    X86_AT(c, 0xc9fa7u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c9fa9  call 0xba404
    X86_AT(c, 0xc9fa9u);
    push32(c, 0xc9faeu); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc9faeu);
    X86_TICK(c, 18);
    // 0c9fae  inc edi
    X86_AT(c, 0xc9faeu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c9faf  push edi
    X86_AT(c, 0xc9fafu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c9fb0  push dword ptr [ebp - 4]
    X86_AT(c, 0xc9fb0u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0c9fb3  push 6
    X86_AT(c, 0xc9fb3u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c9fb5  call 0xbc174
    X86_AT(c, 0xc9fb5u);
    push32(c, 0xc9fbau); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc9fbau);
    X86_TICK(c, 11);
    // 0c9fba  push 0x6e30
    X86_AT(c, 0xc9fbau);
    { uint32_t v = 0x6E30u; push32(c, v); }
    // 0c9fbf  push 6
    X86_AT(c, 0xc9fbfu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c9fc1  call 0xba428
    X86_AT(c, 0xc9fc1u);
    push32(c, 0xc9fc6u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc9fc6u);
    X86_TICK(c, 16);
    // 0c9fc6  push 5
    X86_AT(c, 0xc9fc6u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c9fc8  push dword ptr [ebx + 0x3d]
    X86_AT(c, 0xc9fc8u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x3Du))); push32(c, v); }
    // 0c9fcb  push 6
    X86_AT(c, 0xc9fcbu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c9fcd  call 0xba404
    X86_AT(c, 0xc9fcdu);
    push32(c, 0xc9fd2u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xc9fd2u);
    X86_TICK(c, 11);
    // 0c9fd2  add esp, 0x3c
    X86_AT(c, 0xc9fd2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c9fd5  push 6
    X86_AT(c, 0xc9fd5u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c9fd7  call 0xc9890
    X86_AT(c, 0xc9fd7u);
    push32(c, 0xc9fdcu); x86_call_known(c, 0xc9890u, f_000c9890); X86_RET(c, 0xc9fdcu);
    X86_TICK(c, 9);
    // 0c9fdc  add esp, 4
    X86_AT(c, 0xc9fdcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c9fdf  dec eax
    X86_AT(c, 0xc9fdfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0c9fe0  je 0xca457
    X86_AT(c, 0xc9fe0u);
    if (x86_cc(c, 4)) { goto L_ca457; }
    X86_TICK(c, 17);
    // 0c9fe6  push 0x12
    X86_AT(c, 0xc9fe6u);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0c9fe8  push 0x26
    X86_AT(c, 0xc9fe8u);
    { uint32_t v = 0x26u; push32(c, v); }
    // 0c9fea  push 3
    X86_AT(c, 0xc9feau);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c9fec  push 0
    X86_AT(c, 0xc9fecu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c9fee  push 6
    X86_AT(c, 0xc9feeu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c9ff0  call 0xbc2b0
    X86_AT(c, 0xc9ff0u);
    push32(c, 0xc9ff5u); x86_call_known(c, 0xbc2b0u, f_000bc2b0); X86_RET(c, 0xc9ff5u);
    X86_TICK(c, 15);
    // 0c9ff5  mov edi, 3
    X86_AT(c, 0xc9ff5u);
    c.r[7] = 0x3u;
    // 0c9ffa  push edi
    X86_AT(c, 0xc9ffau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c9ffb  push 0
    X86_AT(c, 0xc9ffbu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c9ffd  push 6
    X86_AT(c, 0xc9ffdu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0c9fff  call 0xbc174
    X86_AT(c, 0xc9fffu);
    push32(c, 0xca004u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xca004u);
    X86_TICK(c, 11);
    // 0ca004  push 0x6e5c
    X86_AT(c, 0xca004u);
    { uint32_t v = 0x6E5Cu; push32(c, v); }
    // 0ca009  push 6
    X86_AT(c, 0xca009u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca00b  call 0xba428
    X86_AT(c, 0xca00bu);
    push32(c, 0xca010u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xca010u);
    X86_TICK(c, 9);
    // 0ca010  push 6
    X86_AT(c, 0xca010u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca012  call 0xbbb5c
    X86_AT(c, 0xca012u);
    push32(c, 0xca017u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xca017u);
    X86_TICK(c, 18);
    // 0ca017  inc edi
    X86_AT(c, 0xca017u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0ca018  push edi
    X86_AT(c, 0xca018u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ca019  push dword ptr [ebp - 4]
    X86_AT(c, 0xca019u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0ca01c  push 6
    X86_AT(c, 0xca01cu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca01e  call 0xbc174
    X86_AT(c, 0xca01eu);
    push32(c, 0xca023u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xca023u);
    X86_TICK(c, 11);
    // 0ca023  push 0x6e84
    X86_AT(c, 0xca023u);
    { uint32_t v = 0x6E84u; push32(c, v); }
    // 0ca028  push 6
    X86_AT(c, 0xca028u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca02a  call 0xba428
    X86_AT(c, 0xca02au);
    push32(c, 0xca02fu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xca02fu);
    X86_TICK(c, 18);
    // 0ca02f  add esp, 0x40
    X86_AT(c, 0xca02fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0ca032  push 5
    X86_AT(c, 0xca032u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ca034  push dword ptr [ebx + 0x49]
    X86_AT(c, 0xca034u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x49u))); push32(c, v); }
    // 0ca037  push 6
    X86_AT(c, 0xca037u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca039  call 0xba404
    X86_AT(c, 0xca039u);
    push32(c, 0xca03eu); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xca03eu);
    X86_TICK(c, 18);
    // 0ca03e  inc edi
    X86_AT(c, 0xca03eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0ca03f  push edi
    X86_AT(c, 0xca03fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ca040  push dword ptr [ebp - 4]
    X86_AT(c, 0xca040u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0ca043  push 6
    X86_AT(c, 0xca043u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca045  call 0xbc174
    X86_AT(c, 0xca045u);
    push32(c, 0xca04au); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xca04au);
    X86_TICK(c, 11);
    // 0ca04a  push 0x6eb0
    X86_AT(c, 0xca04au);
    { uint32_t v = 0x6EB0u; push32(c, v); }
    // 0ca04f  push 6
    X86_AT(c, 0xca04fu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca051  call 0xba428
    X86_AT(c, 0xca051u);
    push32(c, 0xca056u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xca056u);
    X86_TICK(c, 16);
    // 0ca056  push 5
    X86_AT(c, 0xca056u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ca058  push dword ptr [ebx + 0x4d]
    X86_AT(c, 0xca058u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4Du))); push32(c, v); }
    // 0ca05b  push 6
    X86_AT(c, 0xca05bu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca05d  call 0xba404
    X86_AT(c, 0xca05du);
    push32(c, 0xca062u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xca062u);
    X86_TICK(c, 18);
    // 0ca062  inc edi
    X86_AT(c, 0xca062u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0ca063  push edi
    X86_AT(c, 0xca063u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ca064  push dword ptr [ebp - 4]
    X86_AT(c, 0xca064u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0ca067  push 6
    X86_AT(c, 0xca067u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca069  call 0xbc174
    X86_AT(c, 0xca069u);
    push32(c, 0xca06eu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xca06eu);
    X86_TICK(c, 11);
    // 0ca06e  push 0x6edc
    X86_AT(c, 0xca06eu);
    { uint32_t v = 0x6EDCu; push32(c, v); }
    // 0ca073  push 6
    X86_AT(c, 0xca073u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca075  call 0xba428
    X86_AT(c, 0xca075u);
    push32(c, 0xca07au); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xca07au);
    X86_TICK(c, 18);
    // 0ca07a  add esp, 0x40
    X86_AT(c, 0xca07au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0ca07d  push 5
    X86_AT(c, 0xca07du);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ca07f  push dword ptr [ebx + 0x51]
    X86_AT(c, 0xca07fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x51u))); push32(c, v); }
    // 0ca082  push 6
    X86_AT(c, 0xca082u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca084  call 0xba404
    X86_AT(c, 0xca084u);
    push32(c, 0xca089u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xca089u);
    X86_TICK(c, 20);
    // 0ca089  add esp, 0xc
    X86_AT(c, 0xca089u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0ca08c  inc edi
    X86_AT(c, 0xca08cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0ca08d  push edi
    X86_AT(c, 0xca08du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ca08e  push dword ptr [ebp - 4]
    X86_AT(c, 0xca08eu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0ca091  push 6
    X86_AT(c, 0xca091u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca093  call 0xbc174
    X86_AT(c, 0xca093u);
    push32(c, 0xca098u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xca098u);
    X86_TICK(c, 11);
    // 0ca098  push 0x6f08
    X86_AT(c, 0xca098u);
    { uint32_t v = 0x6F08u; push32(c, v); }
    // 0ca09d  push 6
    X86_AT(c, 0xca09du);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca09f  call 0xba428
    X86_AT(c, 0xca09fu);
    push32(c, 0xca0a4u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xca0a4u);
    X86_TICK(c, 16);
    // 0ca0a4  push 5
    X86_AT(c, 0xca0a4u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ca0a6  push dword ptr [ebx + 0x55]
    X86_AT(c, 0xca0a6u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x55u))); push32(c, v); }
    // 0ca0a9  push 6
    X86_AT(c, 0xca0a9u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca0ab  call 0xba404
    X86_AT(c, 0xca0abu);
    push32(c, 0xca0b0u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xca0b0u);
    X86_TICK(c, 18);
    // 0ca0b0  inc edi
    X86_AT(c, 0xca0b0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0ca0b1  push edi
    X86_AT(c, 0xca0b1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ca0b2  push dword ptr [ebp - 4]
    X86_AT(c, 0xca0b2u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0ca0b5  push 6
    X86_AT(c, 0xca0b5u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca0b7  call 0xbc174
    X86_AT(c, 0xca0b7u);
    push32(c, 0xca0bcu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xca0bcu);
    X86_TICK(c, 11);
    // 0ca0bc  push 0x6f34
    X86_AT(c, 0xca0bcu);
    { uint32_t v = 0x6F34u; push32(c, v); }
    // 0ca0c1  push 6
    X86_AT(c, 0xca0c1u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca0c3  call 0xba428
    X86_AT(c, 0xca0c3u);
    push32(c, 0xca0c8u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xca0c8u);
    X86_TICK(c, 16);
    // 0ca0c8  push 5
    X86_AT(c, 0xca0c8u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ca0ca  push dword ptr [ebx + 0x15]
    X86_AT(c, 0xca0cau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x15u))); push32(c, v); }
    // 0ca0cd  push 6
    X86_AT(c, 0xca0cdu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca0cf  call 0xba404
    X86_AT(c, 0xca0cfu);
    push32(c, 0xca0d4u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xca0d4u);
    X86_TICK(c, 20);
    // 0ca0d4  add esp, 0x40
    X86_AT(c, 0xca0d4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0ca0d7  inc edi
    X86_AT(c, 0xca0d7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0ca0d8  push edi
    X86_AT(c, 0xca0d8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ca0d9  push dword ptr [ebp - 4]
    X86_AT(c, 0xca0d9u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0ca0dc  push 6
    X86_AT(c, 0xca0dcu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca0de  call 0xbc174
    X86_AT(c, 0xca0deu);
    push32(c, 0xca0e3u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xca0e3u);
    X86_TICK(c, 14);
    // 0ca0e3  add esp, 0xc
    X86_AT(c, 0xca0e3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0ca0e6  cmp byte ptr [ebx + 0x11], 0
    X86_AT(c, 0xca0e6u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x11u))), 0x0u, 0, 1);
    // 0ca0ea  je 0xca0fb
    X86_AT(c, 0xca0eau);
    if (x86_cc(c, 4)) { goto L_ca0fb; }
    X86_TICK(c, 11);
    // 0ca0ec  push 0x6f60
    X86_AT(c, 0xca0ecu);
    { uint32_t v = 0x6F60u; push32(c, v); }
    // 0ca0f1  push 6
    X86_AT(c, 0xca0f1u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca0f3  call 0xba428
    X86_AT(c, 0xca0f3u);
    push32(c, 0xca0f8u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xca0f8u);
    X86_TICK(c, 2);
    // 0ca0f8  add esp, 8
    X86_AT(c, 0xca0f8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_ca0fb:
    X86_TICK(c, 18);
    // 0ca0fb  inc edi
    X86_AT(c, 0xca0fbu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0ca0fc  push edi
    X86_AT(c, 0xca0fcu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ca0fd  push dword ptr [ebp - 4]
    X86_AT(c, 0xca0fdu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0ca100  push 6
    X86_AT(c, 0xca100u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca102  call 0xbc174
    X86_AT(c, 0xca102u);
    push32(c, 0xca107u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xca107u);
    X86_TICK(c, 14);
    // 0ca107  add esp, 0xc
    X86_AT(c, 0xca107u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0ca10a  cmp byte ptr [ebx + 0x13], 0
    X86_AT(c, 0xca10au);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x13u))), 0x0u, 0, 1);
    // 0ca10e  je 0xca11f
    X86_AT(c, 0xca10eu);
    if (x86_cc(c, 4)) { goto L_ca11f; }
    X86_TICK(c, 11);
    // 0ca110  push 0x6f94
    X86_AT(c, 0xca110u);
    { uint32_t v = 0x6F94u; push32(c, v); }
    // 0ca115  push 6
    X86_AT(c, 0xca115u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca117  call 0xba428
    X86_AT(c, 0xca117u);
    push32(c, 0xca11cu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xca11cu);
    X86_TICK(c, 2);
    // 0ca11c  add esp, 8
    X86_AT(c, 0xca11cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_ca11f:
    X86_TICK(c, 18);
    // 0ca11f  inc edi
    X86_AT(c, 0xca11fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0ca120  push edi
    X86_AT(c, 0xca120u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ca121  push dword ptr [ebp - 4]
    X86_AT(c, 0xca121u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0ca124  push 6
    X86_AT(c, 0xca124u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca126  call 0xbc174
    X86_AT(c, 0xca126u);
    push32(c, 0xca12bu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xca12bu);
    X86_TICK(c, 14);
    // 0ca12b  add esp, 0xc
    X86_AT(c, 0xca12bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0ca12e  cmp byte ptr [ebx + 0x14], 0
    X86_AT(c, 0xca12eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x14u))), 0x0u, 0, 1);
    // 0ca132  je 0xca143
    X86_AT(c, 0xca132u);
    if (x86_cc(c, 4)) { goto L_ca143; }
    X86_TICK(c, 11);
    // 0ca134  push 0x6fc8
    X86_AT(c, 0xca134u);
    { uint32_t v = 0x6FC8u; push32(c, v); }
    // 0ca139  push 6
    X86_AT(c, 0xca139u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca13b  call 0xba428
    X86_AT(c, 0xca13bu);
    push32(c, 0xca140u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xca140u);
    X86_TICK(c, 2);
    // 0ca140  add esp, 8
    X86_AT(c, 0xca140u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_ca143:
    X86_TICK(c, 18);
    // 0ca143  inc edi
    X86_AT(c, 0xca143u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0ca144  push edi
    X86_AT(c, 0xca144u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ca145  push dword ptr [ebp - 4]
    X86_AT(c, 0xca145u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0ca148  push 6
    X86_AT(c, 0xca148u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca14a  call 0xbc174
    X86_AT(c, 0xca14au);
    push32(c, 0xca14fu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xca14fu);
    X86_TICK(c, 14);
    // 0ca14f  add esp, 0xc
    X86_AT(c, 0xca14fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0ca152  cmp byte ptr [ebx + 0x12], 0
    X86_AT(c, 0xca152u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x12u))), 0x0u, 0, 1);
    // 0ca156  je 0xca167
    X86_AT(c, 0xca156u);
    if (x86_cc(c, 4)) { goto L_ca167; }
    X86_TICK(c, 11);
    // 0ca158  push 0x6ffc
    X86_AT(c, 0xca158u);
    { uint32_t v = 0x6FFCu; push32(c, v); }
    // 0ca15d  push 6
    X86_AT(c, 0xca15du);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca15f  call 0xba428
    X86_AT(c, 0xca15fu);
    push32(c, 0xca164u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xca164u);
    X86_TICK(c, 2);
    // 0ca164  add esp, 8
    X86_AT(c, 0xca164u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_ca167:
    X86_TICK(c, 18);
    // 0ca167  inc edi
    X86_AT(c, 0xca167u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0ca168  push edi
    X86_AT(c, 0xca168u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ca169  push dword ptr [ebp - 4]
    X86_AT(c, 0xca169u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0ca16c  push 6
    X86_AT(c, 0xca16cu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca16e  call 0xbc174
    X86_AT(c, 0xca16eu);
    push32(c, 0xca173u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xca173u);
    X86_TICK(c, 14);
    // 0ca173  add esp, 0xc
    X86_AT(c, 0xca173u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0ca176  cmp byte ptr [ebx + 0x10], 0
    X86_AT(c, 0xca176u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0x0u, 0, 1);
    // 0ca17a  je 0xca18b
    X86_AT(c, 0xca17au);
    if (x86_cc(c, 4)) { goto L_ca18b; }
    X86_TICK(c, 11);
    // 0ca17c  push 0x7030
    X86_AT(c, 0xca17cu);
    { uint32_t v = 0x7030u; push32(c, v); }
    // 0ca181  push 6
    X86_AT(c, 0xca181u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca183  call 0xba428
    X86_AT(c, 0xca183u);
    push32(c, 0xca188u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xca188u);
    X86_TICK(c, 2);
    // 0ca188  add esp, 8
    X86_AT(c, 0xca188u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_ca18b:
    X86_TICK(c, 18);
    // 0ca18b  inc edi
    X86_AT(c, 0xca18bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0ca18c  push edi
    X86_AT(c, 0xca18cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ca18d  push dword ptr [ebp - 4]
    X86_AT(c, 0xca18du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0ca190  push 6
    X86_AT(c, 0xca190u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca192  call 0xbc174
    X86_AT(c, 0xca192u);
    push32(c, 0xca197u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xca197u);
    X86_TICK(c, 14);
    // 0ca197  add esp, 0xc
    X86_AT(c, 0xca197u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0ca19a  cmp byte ptr [ebx + 0xf], 0
    X86_AT(c, 0xca19au);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xFu))), 0x0u, 0, 1);
    // 0ca19e  je 0xca1af
    X86_AT(c, 0xca19eu);
    if (x86_cc(c, 4)) { goto L_ca1af; }
    X86_TICK(c, 11);
    // 0ca1a0  push 0x7064
    X86_AT(c, 0xca1a0u);
    { uint32_t v = 0x7064u; push32(c, v); }
    // 0ca1a5  push 6
    X86_AT(c, 0xca1a5u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca1a7  call 0xba428
    X86_AT(c, 0xca1a7u);
    push32(c, 0xca1acu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xca1acu);
    X86_TICK(c, 2);
    // 0ca1ac  add esp, 8
    X86_AT(c, 0xca1acu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_ca1af:
    X86_TICK(c, 18);
    // 0ca1af  inc edi
    X86_AT(c, 0xca1afu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0ca1b0  push edi
    X86_AT(c, 0xca1b0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ca1b1  push dword ptr [ebp - 4]
    X86_AT(c, 0xca1b1u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0ca1b4  push 6
    X86_AT(c, 0xca1b4u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca1b6  call 0xbc174
    X86_AT(c, 0xca1b6u);
    push32(c, 0xca1bbu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xca1bbu);
    X86_TICK(c, 14);
    // 0ca1bb  add esp, 0xc
    X86_AT(c, 0xca1bbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0ca1be  cmp byte ptr [ebx + 0xe], 0
    X86_AT(c, 0xca1beu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))), 0x0u, 0, 1);
    // 0ca1c2  je 0xca1d3
    X86_AT(c, 0xca1c2u);
    if (x86_cc(c, 4)) { goto L_ca1d3; }
    X86_TICK(c, 11);
    // 0ca1c4  push 0x7098
    X86_AT(c, 0xca1c4u);
    { uint32_t v = 0x7098u; push32(c, v); }
    // 0ca1c9  push 6
    X86_AT(c, 0xca1c9u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca1cb  call 0xba428
    X86_AT(c, 0xca1cbu);
    push32(c, 0xca1d0u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xca1d0u);
    X86_TICK(c, 2);
    // 0ca1d0  add esp, 8
    X86_AT(c, 0xca1d0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_ca1d3:
    X86_TICK(c, 18);
    // 0ca1d3  inc edi
    X86_AT(c, 0xca1d3u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0ca1d4  push edi
    X86_AT(c, 0xca1d4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ca1d5  push dword ptr [ebp - 4]
    X86_AT(c, 0xca1d5u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0ca1d8  push 6
    X86_AT(c, 0xca1d8u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca1da  call 0xbc174
    X86_AT(c, 0xca1dau);
    push32(c, 0xca1dfu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xca1dfu);
    X86_TICK(c, 14);
    // 0ca1df  add esp, 0xc
    X86_AT(c, 0xca1dfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0ca1e2  cmp byte ptr [ebx + 0xd], 0
    X86_AT(c, 0xca1e2u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))), 0x0u, 0, 1);
    // 0ca1e6  je 0xca1f7
    X86_AT(c, 0xca1e6u);
    if (x86_cc(c, 4)) { goto L_ca1f7; }
    X86_TICK(c, 11);
    // 0ca1e8  push 0x70cc
    X86_AT(c, 0xca1e8u);
    { uint32_t v = 0x70CCu; push32(c, v); }
    // 0ca1ed  push 6
    X86_AT(c, 0xca1edu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca1ef  call 0xba428
    X86_AT(c, 0xca1efu);
    push32(c, 0xca1f4u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xca1f4u);
    X86_TICK(c, 2);
    // 0ca1f4  add esp, 8
    X86_AT(c, 0xca1f4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_ca1f7:
    X86_TICK(c, 18);
    // 0ca1f7  inc edi
    X86_AT(c, 0xca1f7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0ca1f8  push edi
    X86_AT(c, 0xca1f8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ca1f9  push dword ptr [ebp - 4]
    X86_AT(c, 0xca1f9u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0ca1fc  push 6
    X86_AT(c, 0xca1fcu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca1fe  call 0xbc174
    X86_AT(c, 0xca1feu);
    push32(c, 0xca203u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xca203u);
    X86_TICK(c, 11);
    // 0ca203  push 0x7100
    X86_AT(c, 0xca203u);
    { uint32_t v = 0x7100u; push32(c, v); }
    // 0ca208  push 6
    X86_AT(c, 0xca208u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca20a  call 0xba428
    X86_AT(c, 0xca20au);
    push32(c, 0xca20fu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xca20fu);
    X86_TICK(c, 21);
    // 0ca20f  lea eax, [ebp - 5]
    X86_AT(c, 0xca20fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFBu);
    // 0ca212  push eax
    X86_AT(c, 0xca212u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ca213  mov dl, byte ptr [ebx + 0x7a]
    X86_AT(c, 0xca213u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x7Au))));
    // 0ca216  push edx
    X86_AT(c, 0xca216u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0ca217  push 0x12
    X86_AT(c, 0xca217u);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0ca219  push 0xa6bac
    X86_AT(c, 0xca219u);
    { uint32_t v = 0xA6BACu; push32(c, v); }
    // 0ca21e  call 0xba1b4
    X86_AT(c, 0xca21eu);
    push32(c, 0xca223u); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xca223u);
    X86_TICK(c, 11);
    // 0ca223  push eax
    X86_AT(c, 0xca223u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ca224  push 6
    X86_AT(c, 0xca224u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca226  call 0xbbba4
    X86_AT(c, 0xca226u);
    push32(c, 0xca22bu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xca22bu);
    X86_TICK(c, 18);
    // 0ca22b  inc edi
    X86_AT(c, 0xca22bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0ca22c  push edi
    X86_AT(c, 0xca22cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ca22d  push dword ptr [ebp - 4]
    X86_AT(c, 0xca22du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0ca230  push 6
    X86_AT(c, 0xca230u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca232  call 0xbc174
    X86_AT(c, 0xca232u);
    push32(c, 0xca237u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xca237u);
    X86_TICK(c, 11);
    // 0ca237  push 0x712c
    X86_AT(c, 0xca237u);
    { uint32_t v = 0x712Cu; push32(c, v); }
    // 0ca23c  push 6
    X86_AT(c, 0xca23cu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca23e  call 0xba428
    X86_AT(c, 0xca23eu);
    push32(c, 0xca243u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xca243u);
    X86_TICK(c, 23);
    // 0ca243  add esp, 0x40
    X86_AT(c, 0xca243u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0ca246  lea eax, [ebp - 5]
    X86_AT(c, 0xca246u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFBu);
    // 0ca249  push eax
    X86_AT(c, 0xca249u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ca24a  mov al, byte ptr [ebx + 0x59]
    X86_AT(c, 0xca24au);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x59u))));
    // 0ca24d  push eax
    X86_AT(c, 0xca24du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ca24e  push 8
    X86_AT(c, 0xca24eu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0ca250  push 0xa74f4
    X86_AT(c, 0xca250u);
    { uint32_t v = 0xA74F4u; push32(c, v); }
    // 0ca255  call 0xba1b4
    X86_AT(c, 0xca255u);
    push32(c, 0xca25au); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xca25au);
    X86_TICK(c, 11);
    // 0ca25a  push eax
    X86_AT(c, 0xca25au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ca25b  push 6
    X86_AT(c, 0xca25bu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca25d  call 0xbbba4
    X86_AT(c, 0xca25du);
    push32(c, 0xca262u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xca262u);
    X86_TICK(c, 9);
    // 0ca262  push 6
    X86_AT(c, 0xca262u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca264  call 0xc9890
    X86_AT(c, 0xca264u);
    push32(c, 0xca269u); x86_call_known(c, 0xc9890u, f_000c9890); X86_RET(c, 0xca269u);
    X86_TICK(c, 9);
    // 0ca269  add esp, 0x1c
    X86_AT(c, 0xca269u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0ca26c  dec eax
    X86_AT(c, 0xca26cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0ca26d  je 0xca457
    X86_AT(c, 0xca26du);
    if (x86_cc(c, 4)) { goto L_ca457; }
    X86_TICK(c, 17);
    // 0ca273  push 0x12
    X86_AT(c, 0xca273u);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0ca275  push 0x26
    X86_AT(c, 0xca275u);
    { uint32_t v = 0x26u; push32(c, v); }
    // 0ca277  push 3
    X86_AT(c, 0xca277u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ca279  push 0
    X86_AT(c, 0xca279u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ca27b  push 6
    X86_AT(c, 0xca27bu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca27d  call 0xbc2b0
    X86_AT(c, 0xca27du);
    push32(c, 0xca282u); x86_call_known(c, 0xbc2b0u, f_000bc2b0); X86_RET(c, 0xca282u);
    X86_TICK(c, 19);
    // 0ca282  mov edi, 3
    X86_AT(c, 0xca282u);
    c.r[7] = 0x3u;
    // 0ca287  mov eax, edi
    X86_AT(c, 0xca287u);
    c.r[0] = c.r[7];
    // 0ca289  inc edi
    X86_AT(c, 0xca289u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0ca28a  push eax
    X86_AT(c, 0xca28au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ca28b  push 0
    X86_AT(c, 0xca28bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ca28d  push 6
    X86_AT(c, 0xca28du);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca28f  call 0xbc174
    X86_AT(c, 0xca28fu);
    push32(c, 0xca294u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xca294u);
    X86_TICK(c, 11);
    // 0ca294  push 0x7158
    X86_AT(c, 0xca294u);
    { uint32_t v = 0x7158u; push32(c, v); }
    // 0ca299  push 6
    X86_AT(c, 0xca299u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca29b  call 0xba428
    X86_AT(c, 0xca29bu);
    push32(c, 0xca2a0u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xca2a0u);
    X86_TICK(c, 9);
    // 0ca2a0  push 6
    X86_AT(c, 0xca2a0u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca2a2  call 0xbbb5c
    X86_AT(c, 0xca2a2u);
    push32(c, 0xca2a7u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xca2a7u);
    X86_TICK(c, 4);
    // 0ca2a7  mov esi, 1
    X86_AT(c, 0xca2a7u);
    c.r[6] = 0x1u;
    // 0ca2ac  add esp, 0x2c
    X86_AT(c, 0xca2acu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
L_ca2af:
    X86_TICK(c, 7);
    // 0ca2af  cmp esi, 0x12
    X86_AT(c, 0xca2afu);
    (void)x86_sub(c, c.r[6], 0x12u, 0, 4);
    // 0ca2b2  jge 0xca36e
    X86_AT(c, 0xca2b2u);
    if (x86_cc(c, 13)) { goto L_ca36e; }
    X86_TICK(c, 12);
    // 0ca2b8  cmp dword ptr [ebx + esi*4 + 0x7b], 0
    X86_AT(c, 0xca2b8u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[6] * 4 + 0x7Bu))), 0x0u, 0, 4);
    // 0ca2bd  je 0xca368
    X86_AT(c, 0xca2bdu);
    if (x86_cc(c, 4)) { goto L_ca368; }
    X86_TICK(c, 23);
    // 0ca2c3  mov eax, edi
    X86_AT(c, 0xca2c3u);
    c.r[0] = c.r[7];
    // 0ca2c5  inc edi
    X86_AT(c, 0xca2c5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0ca2c6  push eax
    X86_AT(c, 0xca2c6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ca2c7  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xca2c7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0ca2ca  add eax, 2
    X86_AT(c, 0xca2cau);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0ca2cd  push eax
    X86_AT(c, 0xca2cdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ca2ce  push 6
    X86_AT(c, 0xca2ceu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca2d0  call 0xbc174
    X86_AT(c, 0xca2d0u);
    push32(c, 0xca2d5u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xca2d5u);
    X86_TICK(c, 21);
    // 0ca2d5  mov eax, esi
    X86_AT(c, 0xca2d5u);
    c.r[0] = c.r[6];
    // 0ca2d7  add al, 0x41
    X86_AT(c, 0xca2d7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x41u, 0, 1)); }
    // 0ca2d9  mov byte ptr [ebp - 7], al
    X86_AT(c, 0xca2d9u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF9u)), g8(c, 0));
    // 0ca2dc  lea edx, [ebp - 7]
    X86_AT(c, 0xca2dcu);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFFF9u);
    // 0ca2df  push edx
    X86_AT(c, 0xca2dfu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0ca2e0  push 6
    X86_AT(c, 0xca2e0u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca2e2  mov byte ptr [ebp - 0xc], al
    X86_AT(c, 0xca2e2u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), g8(c, 0));
    // 0ca2e5  call 0xbbfe0
    X86_AT(c, 0xca2e5u);
    push32(c, 0xca2eau); x86_call_known(c, 0xbbfe0u, f_000bbfe0); X86_RET(c, 0xca2eau);
    X86_TICK(c, 11);
    // 0ca2ea  push 0x7184
    X86_AT(c, 0xca2eau);
    { uint32_t v = 0x7184u; push32(c, v); }
    // 0ca2ef  push 6
    X86_AT(c, 0xca2efu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca2f1  call 0xbbba4
    X86_AT(c, 0xca2f1u);
    push32(c, 0xca2f6u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xca2f6u);
    X86_TICK(c, 20);
    // 0ca2f6  lea eax, [ebp - 5]
    X86_AT(c, 0xca2f6u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFBu);
    // 0ca2f9  push eax
    X86_AT(c, 0xca2f9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ca2fa  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xca2fau);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0ca2fd  push 0x12
    X86_AT(c, 0xca2fdu);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0ca2ff  push 0xa6bac
    X86_AT(c, 0xca2ffu);
    { uint32_t v = 0xA6BACu; push32(c, v); }
    // 0ca304  call 0xba1b4
    X86_AT(c, 0xca304u);
    push32(c, 0xca309u); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xca309u);
    X86_TICK(c, 11);
    // 0ca309  push eax
    X86_AT(c, 0xca309u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ca30a  push 6
    X86_AT(c, 0xca30au);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca30c  call 0xbbba4
    X86_AT(c, 0xca30cu);
    push32(c, 0xca311u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xca311u);
    X86_TICK(c, 11);
    // 0ca311  push 0x718c
    X86_AT(c, 0xca311u);
    { uint32_t v = 0x718Cu; push32(c, v); }
    // 0ca316  push 6
    X86_AT(c, 0xca316u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca318  call 0xbbba4
    X86_AT(c, 0xca318u);
    push32(c, 0xca31du); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xca31du);
    X86_TICK(c, 18);
    // 0ca31d  add esp, 0x3c
    X86_AT(c, 0xca31du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0ca320  push 2
    X86_AT(c, 0xca320u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ca322  push dword ptr [ebx + esi*4 + 0x7b]
    X86_AT(c, 0xca322u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[6] * 4 + 0x7Bu))); push32(c, v); }
    // 0ca326  push 6
    X86_AT(c, 0xca326u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca328  call 0xba404
    X86_AT(c, 0xca328u);
    push32(c, 0xca32du); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xca32du);
    X86_TICK(c, 11);
    // 0ca32d  push 0x7194
    X86_AT(c, 0xca32du);
    { uint32_t v = 0x7194u; push32(c, v); }
    // 0ca332  push 6
    X86_AT(c, 0xca332u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca334  call 0xbbba4
    X86_AT(c, 0xca334u);
    push32(c, 0xca339u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xca339u);
    X86_TICK(c, 9);
    // 0ca339  add esp, 0x14
    X86_AT(c, 0xca339u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0ca33c  cmp edi, 0xd
    X86_AT(c, 0xca33cu);
    (void)x86_sub(c, c.r[7], 0xDu, 0, 4);
    // 0ca33f  jle 0xca368
    X86_AT(c, 0xca33fu);
    if (x86_cc(c, 14)) { goto L_ca368; }
    X86_TICK(c, 9);
    // 0ca341  push 6
    X86_AT(c, 0xca341u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca343  call 0xc9890
    X86_AT(c, 0xca343u);
    push32(c, 0xca348u); x86_call_known(c, 0xc9890u, f_000c9890); X86_RET(c, 0xca348u);
    X86_TICK(c, 9);
    // 0ca348  add esp, 4
    X86_AT(c, 0xca348u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ca34b  dec eax
    X86_AT(c, 0xca34bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0ca34c  je 0xca457
    X86_AT(c, 0xca34cu);
    if (x86_cc(c, 4)) { goto L_ca457; }
    X86_TICK(c, 19);
    // 0ca352  mov edi, 4
    X86_AT(c, 0xca352u);
    c.r[7] = 0x4u;
    // 0ca357  push 0x12
    X86_AT(c, 0xca357u);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0ca359  push 0x26
    X86_AT(c, 0xca359u);
    { uint32_t v = 0x26u; push32(c, v); }
    // 0ca35b  push edi
    X86_AT(c, 0xca35bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ca35c  push 0
    X86_AT(c, 0xca35cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ca35e  push 6
    X86_AT(c, 0xca35eu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca360  call 0xbc2b0
    X86_AT(c, 0xca360u);
    push32(c, 0xca365u); x86_call_known(c, 0xbc2b0u, f_000bc2b0); X86_RET(c, 0xca365u);
    X86_TICK(c, 2);
    // 0ca365  add esp, 0x14
    X86_AT(c, 0xca365u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_ca368:
    X86_TICK(c, 9);
    // 0ca368  inc esi
    X86_AT(c, 0xca368u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0ca369  jmp 0xca2af
    X86_AT(c, 0xca369u);
    X86_POLL(c, 0xca2afu); goto L_ca2af;
L_ca36e:
    X86_TICK(c, 9);
    // 0ca36e  push 6
    X86_AT(c, 0xca36eu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca370  call 0xc9890
    X86_AT(c, 0xca370u);
    push32(c, 0xca375u); x86_call_known(c, 0xc9890u, f_000c9890); X86_RET(c, 0xca375u);
    X86_TICK(c, 9);
    // 0ca375  add esp, 4
    X86_AT(c, 0xca375u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ca378  dec eax
    X86_AT(c, 0xca378u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0ca379  je 0xca457
    X86_AT(c, 0xca379u);
    if (x86_cc(c, 4)) { goto L_ca457; }
    X86_TICK(c, 17);
    // 0ca37f  push 0x12
    X86_AT(c, 0xca37fu);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0ca381  push 0x26
    X86_AT(c, 0xca381u);
    { uint32_t v = 0x26u; push32(c, v); }
    // 0ca383  push 3
    X86_AT(c, 0xca383u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ca385  push 0
    X86_AT(c, 0xca385u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ca387  push 6
    X86_AT(c, 0xca387u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca389  call 0xbc2b0
    X86_AT(c, 0xca389u);
    push32(c, 0xca38eu); x86_call_known(c, 0xbc2b0u, f_000bc2b0); X86_RET(c, 0xca38eu);
    X86_TICK(c, 19);
    // 0ca38e  mov edi, 3
    X86_AT(c, 0xca38eu);
    c.r[7] = 0x3u;
    // 0ca393  mov eax, edi
    X86_AT(c, 0xca393u);
    c.r[0] = c.r[7];
    // 0ca395  inc edi
    X86_AT(c, 0xca395u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0ca396  push eax
    X86_AT(c, 0xca396u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ca397  push 0
    X86_AT(c, 0xca397u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ca399  push 6
    X86_AT(c, 0xca399u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca39b  call 0xbc174
    X86_AT(c, 0xca39bu);
    push32(c, 0xca3a0u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xca3a0u);
    X86_TICK(c, 11);
    // 0ca3a0  push 0x7198
    X86_AT(c, 0xca3a0u);
    { uint32_t v = 0x7198u; push32(c, v); }
    // 0ca3a5  push 6
    X86_AT(c, 0xca3a5u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca3a7  call 0xba428
    X86_AT(c, 0xca3a7u);
    push32(c, 0xca3acu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xca3acu);
    X86_TICK(c, 9);
    // 0ca3ac  push 6
    X86_AT(c, 0xca3acu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca3ae  call 0xbbb5c
    X86_AT(c, 0xca3aeu);
    push32(c, 0xca3b3u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xca3b3u);
    X86_TICK(c, 4);
    // 0ca3b3  mov esi, 1
    X86_AT(c, 0xca3b3u);
    c.r[6] = 0x1u;
    // 0ca3b8  add esp, 0x2c
    X86_AT(c, 0xca3b8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
L_ca3bb:
    X86_TICK(c, 7);
    // 0ca3bb  cmp esi, 7
    X86_AT(c, 0xca3bbu);
    (void)x86_sub(c, c.r[6], 0x7u, 0, 4);
    // 0ca3be  jg 0xca44a
    X86_AT(c, 0xca3beu);
    if (x86_cc(c, 15)) { goto L_ca44a; }
    X86_TICK(c, 12);
    // 0ca3c4  cmp dword ptr [ebx + esi*4 + 0x5a], 0
    X86_AT(c, 0xca3c4u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[6] * 4 + 0x5Au))), 0x0u, 0, 4);
    // 0ca3c9  jle 0xca444
    X86_AT(c, 0xca3c9u);
    if (x86_cc(c, 14)) { goto L_ca444; }
    X86_TICK(c, 23);
    // 0ca3cb  mov eax, edi
    X86_AT(c, 0xca3cbu);
    c.r[0] = c.r[7];
    // 0ca3cd  inc edi
    X86_AT(c, 0xca3cdu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0ca3ce  push eax
    X86_AT(c, 0xca3ceu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ca3cf  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xca3cfu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0ca3d2  add eax, 2
    X86_AT(c, 0xca3d2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0ca3d5  push eax
    X86_AT(c, 0xca3d5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ca3d6  push 6
    X86_AT(c, 0xca3d6u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca3d8  call 0xbc174
    X86_AT(c, 0xca3d8u);
    push32(c, 0xca3ddu); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xca3ddu);
    X86_TICK(c, 21);
    // 0ca3dd  mov eax, esi
    X86_AT(c, 0xca3ddu);
    c.r[0] = c.r[6];
    // 0ca3df  add al, 0x41
    X86_AT(c, 0xca3dfu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x41u, 0, 1)); }
    // 0ca3e1  mov byte ptr [ebp - 7], al
    X86_AT(c, 0xca3e1u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF9u)), g8(c, 0));
    // 0ca3e4  lea edx, [ebp - 7]
    X86_AT(c, 0xca3e4u);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFFF9u);
    // 0ca3e7  push edx
    X86_AT(c, 0xca3e7u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0ca3e8  push 6
    X86_AT(c, 0xca3e8u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca3ea  mov byte ptr [ebp - 0xc], al
    X86_AT(c, 0xca3eau);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), g8(c, 0));
    // 0ca3ed  call 0xbbfe0
    X86_AT(c, 0xca3edu);
    push32(c, 0xca3f2u); x86_call_known(c, 0xbbfe0u, f_000bbfe0); X86_RET(c, 0xca3f2u);
    X86_TICK(c, 11);
    // 0ca3f2  push 0x71c4
    X86_AT(c, 0xca3f2u);
    { uint32_t v = 0x71C4u; push32(c, v); }
    // 0ca3f7  push 6
    X86_AT(c, 0xca3f7u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca3f9  call 0xbbba4
    X86_AT(c, 0xca3f9u);
    push32(c, 0xca3feu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xca3feu);
    X86_TICK(c, 20);
    // 0ca3fe  lea eax, [ebp - 5]
    X86_AT(c, 0xca3feu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFBu);
    // 0ca401  push eax
    X86_AT(c, 0xca401u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ca402  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xca402u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0ca405  push 8
    X86_AT(c, 0xca405u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0ca407  push 0xa74f4
    X86_AT(c, 0xca407u);
    { uint32_t v = 0xA74F4u; push32(c, v); }
    // 0ca40c  call 0xba1b4
    X86_AT(c, 0xca40cu);
    push32(c, 0xca411u); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xca411u);
    X86_TICK(c, 11);
    // 0ca411  push eax
    X86_AT(c, 0xca411u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ca412  push 6
    X86_AT(c, 0xca412u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca414  call 0xbbba4
    X86_AT(c, 0xca414u);
    push32(c, 0xca419u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xca419u);
    X86_TICK(c, 11);
    // 0ca419  push 0x71cc
    X86_AT(c, 0xca419u);
    { uint32_t v = 0x71CCu; push32(c, v); }
    // 0ca41e  push 6
    X86_AT(c, 0xca41eu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca420  call 0xbbba4
    X86_AT(c, 0xca420u);
    push32(c, 0xca425u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xca425u);
    X86_TICK(c, 18);
    // 0ca425  add esp, 0x3c
    X86_AT(c, 0xca425u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0ca428  push 2
    X86_AT(c, 0xca428u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ca42a  push dword ptr [ebx + esi*4 + 0x5a]
    X86_AT(c, 0xca42au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[6] * 4 + 0x5Au))); push32(c, v); }
    // 0ca42e  push 6
    X86_AT(c, 0xca42eu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca430  call 0xba404
    X86_AT(c, 0xca430u);
    push32(c, 0xca435u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xca435u);
    X86_TICK(c, 11);
    // 0ca435  push 0x71d4
    X86_AT(c, 0xca435u);
    { uint32_t v = 0x71D4u; push32(c, v); }
    // 0ca43a  push 6
    X86_AT(c, 0xca43au);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca43c  call 0xbbba4
    X86_AT(c, 0xca43cu);
    push32(c, 0xca441u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xca441u);
    X86_TICK(c, 2);
    // 0ca441  add esp, 0x14
    X86_AT(c, 0xca441u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_ca444:
    X86_TICK(c, 9);
    // 0ca444  inc esi
    X86_AT(c, 0xca444u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0ca445  jmp 0xca3bb
    X86_AT(c, 0xca445u);
    X86_POLL(c, 0xca3bbu); goto L_ca3bb;
L_ca44a:
    X86_TICK(c, 9);
    // 0ca44a  push 6
    X86_AT(c, 0xca44au);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca44c  call 0xc9890
    X86_AT(c, 0xca44cu);
    push32(c, 0xca451u); x86_call_known(c, 0xc9890u, f_000c9890); X86_RET(c, 0xca451u);
    X86_TICK(c, 9);
    // 0ca451  add esp, 4
    X86_AT(c, 0xca451u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ca454  dec eax
    X86_AT(c, 0xca454u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0ca455  jne 0xca465
    X86_AT(c, 0xca455u);
    if (x86_cc(c, 5)) { goto L_ca465; }
L_ca457:
    X86_TICK(c, 11);
    // 0ca457  push 0
    X86_AT(c, 0xca457u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ca459  push 6
    X86_AT(c, 0xca459u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca45b  call 0xbba64
    X86_AT(c, 0xca45bu);
    push32(c, 0xca460u); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xca460u);
    X86_TICK(c, 9);
    // 0ca460  add esp, 8
    X86_AT(c, 0xca460u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ca463  jmp 0xca477
    X86_AT(c, 0xca463u);
    goto L_ca477;
L_ca465:
    X86_TICK(c, 17);
    // 0ca465  push 0x12
    X86_AT(c, 0xca465u);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0ca467  push 0x26
    X86_AT(c, 0xca467u);
    { uint32_t v = 0x26u; push32(c, v); }
    // 0ca469  push 1
    X86_AT(c, 0xca469u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ca46b  push 0
    X86_AT(c, 0xca46bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ca46d  push 6
    X86_AT(c, 0xca46du);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0ca46f  call 0xbc2b0
    X86_AT(c, 0xca46fu);
    push32(c, 0xca474u); x86_call_known(c, 0xbc2b0u, f_000bc2b0); X86_RET(c, 0xca474u);
    X86_TICK(c, 2);
    // 0ca474  add esp, 0x14
    X86_AT(c, 0xca474u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_ca477:
    X86_TICK(c, 28);
    // 0ca477  pop edi
    X86_AT(c, 0xca477u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ca478  pop esi
    X86_AT(c, 0xca478u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ca479  pop ebx
    X86_AT(c, 0xca479u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ca47a  leave 
    X86_AT(c, 0xca47au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ca47b  ret 
    X86_AT(c, 0xca47bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc9d1cu, "ran off the end of a function");
}
}
