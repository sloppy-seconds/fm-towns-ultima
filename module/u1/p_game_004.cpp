#include "p_game_funcs.h"
namespace p_game {
void f_000cb370(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0cb370  push ebp
    X86_AT(c, 0xcb370u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cb371  mov ebp, esp
    X86_AT(c, 0xcb371u);
    c.r[5] = c.r[4];
    // 0cb373  push esi
    X86_AT(c, 0xcb373u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cb374  push edi
    X86_AT(c, 0xcb374u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cb375  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xcb375u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cb378  mov dword ptr [0x4c5d8], 7
    X86_AT(c, 0xcb378u);
    wr32((c.sbase[3] + (uint32_t)(0x4C5D8u)), 0x7u);
    // 0cb382  mov esi, 0xf
    X86_AT(c, 0xcb382u);
    c.r[6] = 0xFu;
L_cb387:
    X86_TICK(c, 7);
    // 0cb387  and esi, esi
    X86_AT(c, 0xcb387u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0cb389  jle 0xcb4a4
    X86_AT(c, 0xcb389u);
    if (x86_cc(c, 14)) { goto L_cb4a4; }
    X86_TICK(c, 101);
    // 0cb38f  mov dword ptr [0x4c5dc], 1
    X86_AT(c, 0xcb38fu);
    wr32((c.sbase[3] + (uint32_t)(0x4C5DCu)), 0x1u);
    // 0cb399  mov eax, esi
    X86_AT(c, 0xcb399u);
    c.r[0] = c.r[6];
    // 0cb39b  shl eax, 4
    X86_AT(c, 0xcb39bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0cb39e  dec eax
    X86_AT(c, 0xcb39eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0cb39f  mov byte ptr [0x4c5e0], al
    X86_AT(c, 0xcb39fu);
    wr8((c.sbase[3] + (uint32_t)(0x4C5E0u)), g8(c, 0));
    // 0cb3a4  sub edx, edx
    X86_AT(c, 0xcb3a4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0cb3a6  mov byte ptr [0x4c5e1], dl
    X86_AT(c, 0xcb3a6u);
    wr8((c.sbase[3] + (uint32_t)(0x4C5E1u)), g8(c, 2));
    // 0cb3ac  mov byte ptr [0x4c5e2], dl
    X86_AT(c, 0xcb3acu);
    wr8((c.sbase[3] + (uint32_t)(0x4C5E2u)), g8(c, 2));
    // 0cb3b2  mov byte ptr [0x4c5e3], dl
    X86_AT(c, 0xcb3b2u);
    wr8((c.sbase[3] + (uint32_t)(0x4C5E3u)), g8(c, 2));
    // 0cb3b8  mov dword ptr [0x4c5e4], 2
    X86_AT(c, 0xcb3b8u);
    wr32((c.sbase[3] + (uint32_t)(0x4C5E4u)), 0x2u);
    // 0cb3c2  mov byte ptr [0x4c5e8], dl
    X86_AT(c, 0xcb3c2u);
    wr8((c.sbase[3] + (uint32_t)(0x4C5E8u)), g8(c, 2));
    // 0cb3c8  mov byte ptr [0x4c5e9], al
    X86_AT(c, 0xcb3c8u);
    wr8((c.sbase[3] + (uint32_t)(0x4C5E9u)), g8(c, 0));
    // 0cb3cd  mov byte ptr [0x4c5ea], dl
    X86_AT(c, 0xcb3cdu);
    wr8((c.sbase[3] + (uint32_t)(0x4C5EAu)), g8(c, 2));
    // 0cb3d3  mov byte ptr [0x4c5eb], dl
    X86_AT(c, 0xcb3d3u);
    wr8((c.sbase[3] + (uint32_t)(0x4C5EBu)), g8(c, 2));
    // 0cb3d9  mov dword ptr [0x4c5ec], 3
    X86_AT(c, 0xcb3d9u);
    wr32((c.sbase[3] + (uint32_t)(0x4C5ECu)), 0x3u);
    // 0cb3e3  mov byte ptr [0x4c5f0], dl
    X86_AT(c, 0xcb3e3u);
    wr8((c.sbase[3] + (uint32_t)(0x4C5F0u)), g8(c, 2));
    // 0cb3e9  mov byte ptr [0x4c5f1], dl
    X86_AT(c, 0xcb3e9u);
    wr8((c.sbase[3] + (uint32_t)(0x4C5F1u)), g8(c, 2));
    // 0cb3ef  mov byte ptr [0x4c5f2], dl
    X86_AT(c, 0xcb3efu);
    wr8((c.sbase[3] + (uint32_t)(0x4C5F2u)), g8(c, 2));
    // 0cb3f5  mov byte ptr [0x4c5f3], dl
    X86_AT(c, 0xcb3f5u);
    wr8((c.sbase[3] + (uint32_t)(0x4C5F3u)), g8(c, 2));
    // 0cb3fb  mov dword ptr [0x4c5f4], 4
    X86_AT(c, 0xcb3fbu);
    wr32((c.sbase[3] + (uint32_t)(0x4C5F4u)), 0x4u);
    // 0cb405  mov byte ptr [0x4c5f8], dl
    X86_AT(c, 0xcb405u);
    wr8((c.sbase[3] + (uint32_t)(0x4C5F8u)), g8(c, 2));
    // 0cb40b  mov byte ptr [0x4c5f9], dl
    X86_AT(c, 0xcb40bu);
    wr8((c.sbase[3] + (uint32_t)(0x4C5F9u)), g8(c, 2));
    // 0cb411  mov byte ptr [0x4c5fa], al
    X86_AT(c, 0xcb411u);
    wr8((c.sbase[3] + (uint32_t)(0x4C5FAu)), g8(c, 0));
    // 0cb416  mov byte ptr [0x4c5fb], dl
    X86_AT(c, 0xcb416u);
    wr8((c.sbase[3] + (uint32_t)(0x4C5FBu)), g8(c, 2));
    // 0cb41c  mov dword ptr [0x4c5fc], 5
    X86_AT(c, 0xcb41cu);
    wr32((c.sbase[3] + (uint32_t)(0x4C5FCu)), 0x5u);
    // 0cb426  mov byte ptr [0x4c600], al
    X86_AT(c, 0xcb426u);
    wr8((c.sbase[3] + (uint32_t)(0x4C600u)), g8(c, 0));
    // 0cb42b  mov byte ptr [0x4c601], dl
    X86_AT(c, 0xcb42bu);
    wr8((c.sbase[3] + (uint32_t)(0x4C601u)), g8(c, 2));
    // 0cb431  mov byte ptr [0x4c602], al
    X86_AT(c, 0xcb431u);
    wr8((c.sbase[3] + (uint32_t)(0x4C602u)), g8(c, 0));
    // 0cb436  mov byte ptr [0x4c603], dl
    X86_AT(c, 0xcb436u);
    wr8((c.sbase[3] + (uint32_t)(0x4C603u)), g8(c, 2));
    // 0cb43c  mov dword ptr [0x4c604], 6
    X86_AT(c, 0xcb43cu);
    wr32((c.sbase[3] + (uint32_t)(0x4C604u)), 0x6u);
    // 0cb446  mov byte ptr [0x4c608], dl
    X86_AT(c, 0xcb446u);
    wr8((c.sbase[3] + (uint32_t)(0x4C608u)), g8(c, 2));
    // 0cb44c  mov byte ptr [0x4c609], al
    X86_AT(c, 0xcb44cu);
    wr8((c.sbase[3] + (uint32_t)(0x4C609u)), g8(c, 0));
    // 0cb451  mov byte ptr [0x4c60a], al
    X86_AT(c, 0xcb451u);
    wr8((c.sbase[3] + (uint32_t)(0x4C60Au)), g8(c, 0));
    // 0cb456  sub eax, eax
    X86_AT(c, 0xcb456u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0cb458  mov byte ptr [0x4c60b], al
    X86_AT(c, 0xcb458u);
    wr8((c.sbase[3] + (uint32_t)(0x4C60Bu)), g8(c, 0));
    // 0cb45d  mov dword ptr [0x4c60c], 7
    X86_AT(c, 0xcb45du);
    wr32((c.sbase[3] + (uint32_t)(0x4C60Cu)), 0x7u);
    // 0cb467  mov edx, esi
    X86_AT(c, 0xcb467u);
    c.r[2] = c.r[6];
    // 0cb469  shl edx, 4
    X86_AT(c, 0xcb469u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0cb46c  dec edx
    X86_AT(c, 0xcb46cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0cb46d  mov byte ptr [0x4c610], dl
    X86_AT(c, 0xcb46du);
    wr8((c.sbase[3] + (uint32_t)(0x4C610u)), g8(c, 2));
    // 0cb473  mov byte ptr [0x4c611], dl
    X86_AT(c, 0xcb473u);
    wr8((c.sbase[3] + (uint32_t)(0x4C611u)), g8(c, 2));
    // 0cb479  mov byte ptr [0x4c612], dl
    X86_AT(c, 0xcb479u);
    wr8((c.sbase[3] + (uint32_t)(0x4C612u)), g8(c, 2));
    // 0cb47f  mov byte ptr [0x4c613], al
    X86_AT(c, 0xcb47fu);
    wr8((c.sbase[3] + (uint32_t)(0x4C613u)), g8(c, 0));
    // 0cb484  push 0x4c5d8
    X86_AT(c, 0xcb484u);
    { uint32_t v = 0x4C5D8u; push32(c, v); }
    // 0cb489  push 1
    X86_AT(c, 0xcb489u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cb48b  push 0x4bfd8
    X86_AT(c, 0xcb48bu);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0cb490  call 0x19c
    X86_AT(c, 0xcb490u);
    push32(c, 0xcb495u); x86_call_known(c, 0x19cu, f_0000019c); X86_RET(c, 0xcb495u);
    X86_TICK(c, 9);
    // 0cb495  push edi
    X86_AT(c, 0xcb495u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cb496  call 0xd6660
    X86_AT(c, 0xcb496u);
    push32(c, 0xcb49bu); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xcb49bu);
    X86_TICK(c, 11);
    // 0cb49b  dec esi
    X86_AT(c, 0xcb49bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0cb49c  add esp, 0x10
    X86_AT(c, 0xcb49cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0cb49f  jmp 0xcb387
    X86_AT(c, 0xcb49fu);
    X86_POLL(c, 0xcb387u); goto L_cb387;
L_cb4a4:
    X86_TICK(c, 9);
    // 0cb4a4  push 0
    X86_AT(c, 0xcb4a4u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cb4a6  call 0xc92e0
    X86_AT(c, 0xcb4a6u);
    push32(c, 0xcb4abu); x86_call_known(c, 0xc92e0u, f_000c92e0); X86_RET(c, 0xcb4abu);
    X86_TICK(c, 7);
    // 0cb4ab  call 0xc8d18
    X86_AT(c, 0xcb4abu);
    push32(c, 0xcb4b0u); x86_call_known(c, 0xc8d18u, f_000c8d18); X86_RET(c, 0xcb4b0u);
    X86_TICK(c, 26);
    // 0cb4b0  add esp, 4
    X86_AT(c, 0xcb4b0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cb4b3  pop edi
    X86_AT(c, 0xcb4b3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cb4b4  pop esi
    X86_AT(c, 0xcb4b4u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cb4b5  leave 
    X86_AT(c, 0xcb4b5u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cb4b6  ret 
    X86_AT(c, 0xcb4b6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcb370u, "ran off the end of a function");
}
void f_000cb4b8(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0cb4b8  push ebp
    X86_AT(c, 0xcb4b8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cb4b9  mov ebp, esp
    X86_AT(c, 0xcb4b9u);
    c.r[5] = c.r[4];
    // 0cb4bb  sub esp, 0x30
    X86_AT(c, 0xcb4bbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x30u, 0, 4); }
    // 0cb4be  push esi
    X86_AT(c, 0xcb4beu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cb4bf  push edi
    X86_AT(c, 0xcb4bfu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cb4c0  mov dword ptr [ebp - 0x24], 0
    X86_AT(c, 0xcb4c0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)), 0x0u);
L_cb4c7:
    X86_TICK(c, 12);
    // 0cb4c7  cmp dword ptr [ebp - 0x24], 0x10
    X86_AT(c, 0xcb4c7u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu))), 0x10u, 0, 4);
    // 0cb4cb  jge 0xcb602
    X86_AT(c, 0xcb4cbu);
    if (x86_cc(c, 13)) { goto L_cb602; }
    X86_TICK(c, 4);
    // 0cb4d1  mov esi, 0x4cdf8
    X86_AT(c, 0xcb4d1u);
    c.r[6] = 0x4CDF8u;
    // 0cb4d6  sub edi, edi
    X86_AT(c, 0xcb4d6u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_cb4d8:
    X86_TICK(c, 7);
    // 0cb4d8  cmp edi, 8
    X86_AT(c, 0xcb4d8u);
    (void)x86_sub(c, c.r[7], 0x8u, 0, 4);
    // 0cb4db  jge 0xcb4eb
    X86_AT(c, 0xcb4dbu);
    if (x86_cc(c, 13)) { goto L_cb4eb; }
    X86_TICK(c, 15);
    // 0cb4dd  mov eax, dword ptr [esi + edi*4 + 0x1e0]
    X86_AT(c, 0xcb4ddu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7] * 4 + 0x1E0u)));
    // 0cb4e4  mov dword ptr [ebp + edi*4 - 0x20], eax
    X86_AT(c, 0xcb4e4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + c.r[7] * 4 + 0xFFFFFFE0u)), c.r[0]);
    // 0cb4e8  inc edi
    X86_AT(c, 0xcb4e8u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cb4e9  jmp 0xcb4d8
    X86_AT(c, 0xcb4e9u);
    X86_POLL(c, 0xcb4d8u); goto L_cb4d8;
L_cb4eb:
    X86_TICK(c, 2);
    // 0cb4eb  mov edi, 0x77
    X86_AT(c, 0xcb4ebu);
    c.r[7] = 0x77u;
L_cb4f0:
    X86_TICK(c, 7);
    // 0cb4f0  and edi, edi
    X86_AT(c, 0xcb4f0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0cb4f2  jl 0xcb4fe
    X86_AT(c, 0xcb4f2u);
    if (x86_cc(c, 12)) { goto L_cb4fe; }
    X86_TICK(c, 15);
    // 0cb4f4  mov eax, dword ptr [esi + edi*4]
    X86_AT(c, 0xcb4f4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7] * 4)));
    // 0cb4f7  mov dword ptr [esi + edi*4 + 0x20], eax
    X86_AT(c, 0xcb4f7u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7] * 4 + 0x20u)), c.r[0]);
    // 0cb4fb  dec edi
    X86_AT(c, 0xcb4fbu);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 0cb4fc  jmp 0xcb4f0
    X86_AT(c, 0xcb4fcu);
    X86_POLL(c, 0xcb4f0u); goto L_cb4f0;
L_cb4fe:
    X86_TICK(c, 2);
    // 0cb4fe  sub edi, edi
    X86_AT(c, 0xcb4feu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_cb500:
    X86_TICK(c, 7);
    // 0cb500  cmp edi, 8
    X86_AT(c, 0xcb500u);
    (void)x86_sub(c, c.r[7], 0x8u, 0, 4);
    // 0cb503  jge 0xcb50f
    X86_AT(c, 0xcb503u);
    if (x86_cc(c, 13)) { goto L_cb50f; }
    X86_TICK(c, 15);
    // 0cb505  mov eax, dword ptr [ebp + edi*4 - 0x20]
    X86_AT(c, 0xcb505u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + c.r[7] * 4 + 0xFFFFFFE0u)));
    // 0cb509  mov dword ptr [esi + edi*4], eax
    X86_AT(c, 0xcb509u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7] * 4)), c.r[0]);
    // 0cb50c  inc edi
    X86_AT(c, 0xcb50cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cb50d  jmp 0xcb500
    X86_AT(c, 0xcb50du);
    X86_POLL(c, 0xcb500u); goto L_cb500;
L_cb50f:
    X86_TICK(c, 13);
    // 0cb50f  mov eax, dword ptr [ebp - 0x24]
    X86_AT(c, 0xcb50fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)));
    // 0cb512  shl eax, 9
    X86_AT(c, 0xcb512u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0cb515  add eax, 0x80df8
    X86_AT(c, 0xcb515u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x80DF8u, 0, 4); }
    // 0cb51a  mov dword ptr [ebp - 0x28], eax
    X86_AT(c, 0xcb51au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)), c.r[0]);
    // 0cb51d  sub edi, edi
    X86_AT(c, 0xcb51du);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_cb51f:
    X86_TICK(c, 7);
    // 0cb51f  cmp edi, 0x80
    X86_AT(c, 0xcb51fu);
    (void)x86_sub(c, c.r[7], 0x80u, 0, 4);
    // 0cb525  jge 0xcb534
    X86_AT(c, 0xcb525u);
    if (x86_cc(c, 13)) { goto L_cb534; }
    X86_TICK(c, 29);
    // 0cb527  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xcb527u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 0cb528  mov edx, dword ptr [ebp - 0x28]
    X86_AT(c, 0xcb528u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)));
    // 0cb52b  add dword ptr [ebp - 0x28], 4
    X86_AT(c, 0xcb52bu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0cb52f  mov dword ptr [edx], eax
    X86_AT(c, 0xcb52fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 0cb531  inc edi
    X86_AT(c, 0xcb531u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cb532  jmp 0xcb51f
    X86_AT(c, 0xcb532u);
    X86_POLL(c, 0xcb51fu); goto L_cb51f;
L_cb534:
    X86_TICK(c, 4);
    // 0cb534  mov esi, 0x4dff8
    X86_AT(c, 0xcb534u);
    c.r[6] = 0x4DFF8u;
    // 0cb539  sub edi, edi
    X86_AT(c, 0xcb539u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_cb53b:
    X86_TICK(c, 7);
    // 0cb53b  cmp edi, 8
    X86_AT(c, 0xcb53bu);
    (void)x86_sub(c, c.r[7], 0x8u, 0, 4);
    // 0cb53e  jge 0xcb54e
    X86_AT(c, 0xcb53eu);
    if (x86_cc(c, 13)) { goto L_cb54e; }
    X86_TICK(c, 15);
    // 0cb540  mov eax, dword ptr [esi + edi*4 + 0x1e0]
    X86_AT(c, 0xcb540u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7] * 4 + 0x1E0u)));
    // 0cb547  mov dword ptr [ebp + edi*4 - 0x20], eax
    X86_AT(c, 0xcb547u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + c.r[7] * 4 + 0xFFFFFFE0u)), c.r[0]);
    // 0cb54b  inc edi
    X86_AT(c, 0xcb54bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cb54c  jmp 0xcb53b
    X86_AT(c, 0xcb54cu);
    X86_POLL(c, 0xcb53bu); goto L_cb53b;
L_cb54e:
    X86_TICK(c, 2);
    // 0cb54e  mov edi, 0x77
    X86_AT(c, 0xcb54eu);
    c.r[7] = 0x77u;
L_cb553:
    X86_TICK(c, 7);
    // 0cb553  and edi, edi
    X86_AT(c, 0xcb553u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0cb555  jl 0xcb561
    X86_AT(c, 0xcb555u);
    if (x86_cc(c, 12)) { goto L_cb561; }
    X86_TICK(c, 15);
    // 0cb557  mov eax, dword ptr [esi + edi*4]
    X86_AT(c, 0xcb557u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7] * 4)));
    // 0cb55a  mov dword ptr [esi + edi*4 + 0x20], eax
    X86_AT(c, 0xcb55au);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7] * 4 + 0x20u)), c.r[0]);
    // 0cb55e  dec edi
    X86_AT(c, 0xcb55eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 0cb55f  jmp 0xcb553
    X86_AT(c, 0xcb55fu);
    X86_POLL(c, 0xcb553u); goto L_cb553;
L_cb561:
    X86_TICK(c, 2);
    // 0cb561  sub edi, edi
    X86_AT(c, 0xcb561u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_cb563:
    X86_TICK(c, 7);
    // 0cb563  cmp edi, 8
    X86_AT(c, 0xcb563u);
    (void)x86_sub(c, c.r[7], 0x8u, 0, 4);
    // 0cb566  jge 0xcb572
    X86_AT(c, 0xcb566u);
    if (x86_cc(c, 13)) { goto L_cb572; }
    X86_TICK(c, 15);
    // 0cb568  mov eax, dword ptr [ebp + edi*4 - 0x20]
    X86_AT(c, 0xcb568u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + c.r[7] * 4 + 0xFFFFFFE0u)));
    // 0cb56c  mov dword ptr [esi + edi*4], eax
    X86_AT(c, 0xcb56cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7] * 4)), c.r[0]);
    // 0cb56f  inc edi
    X86_AT(c, 0xcb56fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cb570  jmp 0xcb563
    X86_AT(c, 0xcb570u);
    X86_POLL(c, 0xcb563u); goto L_cb563;
L_cb572:
    X86_TICK(c, 13);
    // 0cb572  mov eax, dword ptr [ebp - 0x24]
    X86_AT(c, 0xcb572u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)));
    // 0cb575  shl eax, 9
    X86_AT(c, 0xcb575u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0cb578  add eax, 0x82df8
    X86_AT(c, 0xcb578u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x82DF8u, 0, 4); }
    // 0cb57d  mov dword ptr [ebp - 0x28], eax
    X86_AT(c, 0xcb57du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)), c.r[0]);
    // 0cb580  sub edi, edi
    X86_AT(c, 0xcb580u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_cb582:
    X86_TICK(c, 7);
    // 0cb582  cmp edi, 0x80
    X86_AT(c, 0xcb582u);
    (void)x86_sub(c, c.r[7], 0x80u, 0, 4);
    // 0cb588  jge 0xcb597
    X86_AT(c, 0xcb588u);
    if (x86_cc(c, 13)) { goto L_cb597; }
    X86_TICK(c, 29);
    // 0cb58a  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xcb58au);
    x86_string(c, 3, 4, 0, 4, 3);
    // 0cb58b  mov edx, dword ptr [ebp - 0x28]
    X86_AT(c, 0xcb58bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)));
    // 0cb58e  add dword ptr [ebp - 0x28], 4
    X86_AT(c, 0xcb58eu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0cb592  mov dword ptr [edx], eax
    X86_AT(c, 0xcb592u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 0cb594  inc edi
    X86_AT(c, 0xcb594u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cb595  jmp 0xcb582
    X86_AT(c, 0xcb595u);
    X86_POLL(c, 0xcb582u); goto L_cb582;
L_cb597:
    X86_TICK(c, 4);
    // 0cb597  mov esi, 0x511f8
    X86_AT(c, 0xcb597u);
    c.r[6] = 0x511F8u;
    // 0cb59c  sub edi, edi
    X86_AT(c, 0xcb59cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_cb59e:
    X86_TICK(c, 7);
    // 0cb59e  cmp edi, 8
    X86_AT(c, 0xcb59eu);
    (void)x86_sub(c, c.r[7], 0x8u, 0, 4);
    // 0cb5a1  jge 0xcb5b1
    X86_AT(c, 0xcb5a1u);
    if (x86_cc(c, 13)) { goto L_cb5b1; }
    X86_TICK(c, 15);
    // 0cb5a3  mov eax, dword ptr [esi + edi*4 + 0x1e0]
    X86_AT(c, 0xcb5a3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7] * 4 + 0x1E0u)));
    // 0cb5aa  mov dword ptr [ebp + edi*4 - 0x20], eax
    X86_AT(c, 0xcb5aau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + c.r[7] * 4 + 0xFFFFFFE0u)), c.r[0]);
    // 0cb5ae  inc edi
    X86_AT(c, 0xcb5aeu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cb5af  jmp 0xcb59e
    X86_AT(c, 0xcb5afu);
    X86_POLL(c, 0xcb59eu); goto L_cb59e;
L_cb5b1:
    X86_TICK(c, 2);
    // 0cb5b1  mov edi, 0x77
    X86_AT(c, 0xcb5b1u);
    c.r[7] = 0x77u;
L_cb5b6:
    X86_TICK(c, 7);
    // 0cb5b6  and edi, edi
    X86_AT(c, 0xcb5b6u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0cb5b8  jl 0xcb5c4
    X86_AT(c, 0xcb5b8u);
    if (x86_cc(c, 12)) { goto L_cb5c4; }
    X86_TICK(c, 15);
    // 0cb5ba  mov eax, dword ptr [esi + edi*4]
    X86_AT(c, 0xcb5bau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7] * 4)));
    // 0cb5bd  mov dword ptr [esi + edi*4 + 0x20], eax
    X86_AT(c, 0xcb5bdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7] * 4 + 0x20u)), c.r[0]);
    // 0cb5c1  dec edi
    X86_AT(c, 0xcb5c1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 0cb5c2  jmp 0xcb5b6
    X86_AT(c, 0xcb5c2u);
    X86_POLL(c, 0xcb5b6u); goto L_cb5b6;
L_cb5c4:
    X86_TICK(c, 2);
    // 0cb5c4  sub edi, edi
    X86_AT(c, 0xcb5c4u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_cb5c6:
    X86_TICK(c, 7);
    // 0cb5c6  cmp edi, 8
    X86_AT(c, 0xcb5c6u);
    (void)x86_sub(c, c.r[7], 0x8u, 0, 4);
    // 0cb5c9  jge 0xcb5d5
    X86_AT(c, 0xcb5c9u);
    if (x86_cc(c, 13)) { goto L_cb5d5; }
    X86_TICK(c, 15);
    // 0cb5cb  mov eax, dword ptr [ebp + edi*4 - 0x20]
    X86_AT(c, 0xcb5cbu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + c.r[7] * 4 + 0xFFFFFFE0u)));
    // 0cb5cf  mov dword ptr [esi + edi*4], eax
    X86_AT(c, 0xcb5cfu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7] * 4)), c.r[0]);
    // 0cb5d2  inc edi
    X86_AT(c, 0xcb5d2u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cb5d3  jmp 0xcb5c6
    X86_AT(c, 0xcb5d3u);
    X86_POLL(c, 0xcb5c6u); goto L_cb5c6;
L_cb5d5:
    X86_TICK(c, 13);
    // 0cb5d5  mov eax, dword ptr [ebp - 0x24]
    X86_AT(c, 0xcb5d5u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)));
    // 0cb5d8  shl eax, 9
    X86_AT(c, 0xcb5d8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0cb5db  add eax, 0x88df8
    X86_AT(c, 0xcb5dbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x88DF8u, 0, 4); }
    // 0cb5e0  mov dword ptr [ebp - 0x28], eax
    X86_AT(c, 0xcb5e0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)), c.r[0]);
    // 0cb5e3  sub edi, edi
    X86_AT(c, 0xcb5e3u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_cb5e5:
    X86_TICK(c, 7);
    // 0cb5e5  cmp edi, 0x80
    X86_AT(c, 0xcb5e5u);
    (void)x86_sub(c, c.r[7], 0x80u, 0, 4);
    // 0cb5eb  jge 0xcb5fa
    X86_AT(c, 0xcb5ebu);
    if (x86_cc(c, 13)) { goto L_cb5fa; }
    X86_TICK(c, 29);
    // 0cb5ed  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xcb5edu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 0cb5ee  mov edx, dword ptr [ebp - 0x28]
    X86_AT(c, 0xcb5eeu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)));
    // 0cb5f1  add dword ptr [ebp - 0x28], 4
    X86_AT(c, 0xcb5f1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0cb5f5  mov dword ptr [edx], eax
    X86_AT(c, 0xcb5f5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 0cb5f7  inc edi
    X86_AT(c, 0xcb5f7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cb5f8  jmp 0xcb5e5
    X86_AT(c, 0xcb5f8u);
    X86_POLL(c, 0xcb5e5u); goto L_cb5e5;
L_cb5fa:
    X86_TICK(c, 13);
    // 0cb5fa  inc dword ptr [ebp - 0x24]
    X86_AT(c, 0xcb5fau);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0cb5fd  jmp 0xcb4c7
    X86_AT(c, 0xcb5fdu);
    X86_POLL(c, 0xcb4c7u); goto L_cb4c7;
L_cb602:
    X86_TICK(c, 6);
    // 0cb602  mov ecx, 0x5fff8
    X86_AT(c, 0xcb602u);
    c.r[1] = 0x5FFF8u;
    // 0cb607  mov dword ptr [ebp - 0x2c], 0x4cff8
    X86_AT(c, 0xcb607u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)), 0x4CFF8u);
    // 0cb60e  sub edi, edi
    X86_AT(c, 0xcb60eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_cb610:
    X86_TICK(c, 7);
    // 0cb610  cmp edi, 0x20
    X86_AT(c, 0xcb610u);
    (void)x86_sub(c, c.r[7], 0x20u, 0, 4);
    // 0cb613  jge 0xcb660
    X86_AT(c, 0xcb613u);
    if (x86_cc(c, 13)) { goto L_cb660; }
    X86_TICK(c, 2);
    // 0cb615  mov dword ptr [ebp - 0x24], 0
    X86_AT(c, 0xcb615u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)), 0x0u);
L_cb61c:
    X86_TICK(c, 12);
    // 0cb61c  cmp dword ptr [ebp - 0x24], 0x10
    X86_AT(c, 0xcb61cu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu))), 0x10u, 0, 4);
    // 0cb620  jge 0xcb65d
    X86_AT(c, 0xcb620u);
    if (x86_cc(c, 13)) { goto L_cb65d; }
    X86_TICK(c, 15);
    // 0cb622  mov al, byte ptr [ecx]
    X86_AT(c, 0xcb622u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[1]))));
    // 0cb624  and al, 0xf
    X86_AT(c, 0xcb624u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0cb626  mov byte ptr [ebp - 0x2d], al
    X86_AT(c, 0xcb626u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u)), g8(c, 0));
    // 0cb629  and al, al
    X86_AT(c, 0xcb629u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0cb62b  jne 0xcb637
    X86_AT(c, 0xcb62bu);
    if (x86_cc(c, 5)) { goto L_cb637; }
    X86_TICK(c, 12);
    // 0cb62d  mov eax, dword ptr [ebp - 0x2c]
    X86_AT(c, 0xcb62du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)));
    // 0cb630  mov al, byte ptr [eax]
    X86_AT(c, 0xcb630u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0cb632  and al, 0xf
    X86_AT(c, 0xcb632u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0cb634  mov byte ptr [ebp - 0x2d], al
    X86_AT(c, 0xcb634u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u)), g8(c, 0));
L_cb637:
    X86_TICK(c, 15);
    // 0cb637  mov al, byte ptr [ecx]
    X86_AT(c, 0xcb637u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[1]))));
    // 0cb639  and al, 0xf0
    X86_AT(c, 0xcb639u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0cb63b  mov byte ptr [ebp - 0x2e], al
    X86_AT(c, 0xcb63bu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD2u)), g8(c, 0));
    // 0cb63e  and al, al
    X86_AT(c, 0xcb63eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0cb640  jne 0xcb64c
    X86_AT(c, 0xcb640u);
    if (x86_cc(c, 5)) { goto L_cb64c; }
    X86_TICK(c, 12);
    // 0cb642  mov eax, dword ptr [ebp - 0x2c]
    X86_AT(c, 0xcb642u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)));
    // 0cb645  mov al, byte ptr [eax]
    X86_AT(c, 0xcb645u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0cb647  and al, 0xf0
    X86_AT(c, 0xcb647u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0cb649  mov byte ptr [ebp - 0x2e], al
    X86_AT(c, 0xcb649u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD2u)), g8(c, 0));
L_cb64c:
    X86_TICK(c, 33);
    // 0cb64c  mov al, byte ptr [ebp - 0x2d]
    X86_AT(c, 0xcb64cu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u))));
    // 0cb64f  add al, byte ptr [ebp - 0x2e]
    X86_AT(c, 0xcb64fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD2u))), 0, 1)); }
    // 0cb652  mov byte ptr [ecx], al
    X86_AT(c, 0xcb652u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1])), g8(c, 0));
    // 0cb654  inc ecx
    X86_AT(c, 0xcb654u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0cb655  inc dword ptr [ebp - 0x2c]
    X86_AT(c, 0xcb655u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0cb658  inc dword ptr [ebp - 0x24]
    X86_AT(c, 0xcb658u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0cb65b  jmp 0xcb61c
    X86_AT(c, 0xcb65bu);
    X86_POLL(c, 0xcb61cu); goto L_cb61c;
L_cb65d:
    X86_TICK(c, 9);
    // 0cb65d  inc edi
    X86_AT(c, 0xcb65du);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cb65e  jmp 0xcb610
    X86_AT(c, 0xcb65eu);
    X86_POLL(c, 0xcb610u); goto L_cb610;
L_cb660:
    X86_TICK(c, 6);
    // 0cb660  mov ecx, 0x601f8
    X86_AT(c, 0xcb660u);
    c.r[1] = 0x601F8u;
    // 0cb665  mov dword ptr [ebp - 0x2c], 0x4cff8
    X86_AT(c, 0xcb665u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)), 0x4CFF8u);
    // 0cb66c  sub edi, edi
    X86_AT(c, 0xcb66cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_cb66e:
    X86_TICK(c, 7);
    // 0cb66e  cmp edi, 0x20
    X86_AT(c, 0xcb66eu);
    (void)x86_sub(c, c.r[7], 0x20u, 0, 4);
    // 0cb671  jge 0xcb6be
    X86_AT(c, 0xcb671u);
    if (x86_cc(c, 13)) { goto L_cb6be; }
    X86_TICK(c, 2);
    // 0cb673  mov dword ptr [ebp - 0x24], 0
    X86_AT(c, 0xcb673u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)), 0x0u);
L_cb67a:
    X86_TICK(c, 12);
    // 0cb67a  cmp dword ptr [ebp - 0x24], 0x10
    X86_AT(c, 0xcb67au);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu))), 0x10u, 0, 4);
    // 0cb67e  jge 0xcb6bb
    X86_AT(c, 0xcb67eu);
    if (x86_cc(c, 13)) { goto L_cb6bb; }
    X86_TICK(c, 15);
    // 0cb680  mov al, byte ptr [ecx]
    X86_AT(c, 0xcb680u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[1]))));
    // 0cb682  and al, 0xf
    X86_AT(c, 0xcb682u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0cb684  mov byte ptr [ebp - 0x2d], al
    X86_AT(c, 0xcb684u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u)), g8(c, 0));
    // 0cb687  and al, al
    X86_AT(c, 0xcb687u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0cb689  jne 0xcb695
    X86_AT(c, 0xcb689u);
    if (x86_cc(c, 5)) { goto L_cb695; }
    X86_TICK(c, 12);
    // 0cb68b  mov eax, dword ptr [ebp - 0x2c]
    X86_AT(c, 0xcb68bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)));
    // 0cb68e  mov al, byte ptr [eax]
    X86_AT(c, 0xcb68eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0cb690  and al, 0xf
    X86_AT(c, 0xcb690u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0cb692  mov byte ptr [ebp - 0x2d], al
    X86_AT(c, 0xcb692u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u)), g8(c, 0));
L_cb695:
    X86_TICK(c, 15);
    // 0cb695  mov al, byte ptr [ecx]
    X86_AT(c, 0xcb695u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[1]))));
    // 0cb697  and al, 0xf0
    X86_AT(c, 0xcb697u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0cb699  mov byte ptr [ebp - 0x2e], al
    X86_AT(c, 0xcb699u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD2u)), g8(c, 0));
    // 0cb69c  and al, al
    X86_AT(c, 0xcb69cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0cb69e  jne 0xcb6aa
    X86_AT(c, 0xcb69eu);
    if (x86_cc(c, 5)) { goto L_cb6aa; }
    X86_TICK(c, 12);
    // 0cb6a0  mov eax, dword ptr [ebp - 0x2c]
    X86_AT(c, 0xcb6a0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)));
    // 0cb6a3  mov al, byte ptr [eax]
    X86_AT(c, 0xcb6a3u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0cb6a5  and al, 0xf0
    X86_AT(c, 0xcb6a5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0cb6a7  mov byte ptr [ebp - 0x2e], al
    X86_AT(c, 0xcb6a7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD2u)), g8(c, 0));
L_cb6aa:
    X86_TICK(c, 33);
    // 0cb6aa  mov al, byte ptr [ebp - 0x2d]
    X86_AT(c, 0xcb6aau);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u))));
    // 0cb6ad  add al, byte ptr [ebp - 0x2e]
    X86_AT(c, 0xcb6adu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD2u))), 0, 1)); }
    // 0cb6b0  mov byte ptr [ecx], al
    X86_AT(c, 0xcb6b0u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1])), g8(c, 0));
    // 0cb6b2  inc ecx
    X86_AT(c, 0xcb6b2u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0cb6b3  inc dword ptr [ebp - 0x2c]
    X86_AT(c, 0xcb6b3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0cb6b6  inc dword ptr [ebp - 0x24]
    X86_AT(c, 0xcb6b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0cb6b9  jmp 0xcb67a
    X86_AT(c, 0xcb6b9u);
    X86_POLL(c, 0xcb67au); goto L_cb67a;
L_cb6bb:
    X86_TICK(c, 9);
    // 0cb6bb  inc edi
    X86_AT(c, 0xcb6bbu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cb6bc  jmp 0xcb66e
    X86_AT(c, 0xcb6bcu);
    X86_POLL(c, 0xcb66eu); goto L_cb66e;
L_cb6be:
    X86_TICK(c, 6);
    // 0cb6be  mov ecx, 0x5fbf8
    X86_AT(c, 0xcb6beu);
    c.r[1] = 0x5FBF8u;
    // 0cb6c3  mov dword ptr [ebp - 0x2c], 0x4cff8
    X86_AT(c, 0xcb6c3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)), 0x4CFF8u);
    // 0cb6ca  sub edi, edi
    X86_AT(c, 0xcb6cau);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_cb6cc:
    X86_TICK(c, 7);
    // 0cb6cc  cmp edi, 0x20
    X86_AT(c, 0xcb6ccu);
    (void)x86_sub(c, c.r[7], 0x20u, 0, 4);
    // 0cb6cf  jge 0xcb71c
    X86_AT(c, 0xcb6cfu);
    if (x86_cc(c, 13)) { goto L_cb71c; }
    X86_TICK(c, 2);
    // 0cb6d1  mov dword ptr [ebp - 0x24], 0
    X86_AT(c, 0xcb6d1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)), 0x0u);
L_cb6d8:
    X86_TICK(c, 12);
    // 0cb6d8  cmp dword ptr [ebp - 0x24], 0x10
    X86_AT(c, 0xcb6d8u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu))), 0x10u, 0, 4);
    // 0cb6dc  jge 0xcb719
    X86_AT(c, 0xcb6dcu);
    if (x86_cc(c, 13)) { goto L_cb719; }
    X86_TICK(c, 15);
    // 0cb6de  mov al, byte ptr [ecx]
    X86_AT(c, 0xcb6deu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[1]))));
    // 0cb6e0  and al, 0xf
    X86_AT(c, 0xcb6e0u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0cb6e2  mov byte ptr [ebp - 0x2d], al
    X86_AT(c, 0xcb6e2u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u)), g8(c, 0));
    // 0cb6e5  and al, al
    X86_AT(c, 0xcb6e5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0cb6e7  jne 0xcb6f3
    X86_AT(c, 0xcb6e7u);
    if (x86_cc(c, 5)) { goto L_cb6f3; }
    X86_TICK(c, 12);
    // 0cb6e9  mov eax, dword ptr [ebp - 0x2c]
    X86_AT(c, 0xcb6e9u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)));
    // 0cb6ec  mov al, byte ptr [eax]
    X86_AT(c, 0xcb6ecu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0cb6ee  and al, 0xf
    X86_AT(c, 0xcb6eeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0cb6f0  mov byte ptr [ebp - 0x2d], al
    X86_AT(c, 0xcb6f0u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u)), g8(c, 0));
L_cb6f3:
    X86_TICK(c, 15);
    // 0cb6f3  mov al, byte ptr [ecx]
    X86_AT(c, 0xcb6f3u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[1]))));
    // 0cb6f5  and al, 0xf0
    X86_AT(c, 0xcb6f5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0cb6f7  mov byte ptr [ebp - 0x2e], al
    X86_AT(c, 0xcb6f7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD2u)), g8(c, 0));
    // 0cb6fa  and al, al
    X86_AT(c, 0xcb6fau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0cb6fc  jne 0xcb708
    X86_AT(c, 0xcb6fcu);
    if (x86_cc(c, 5)) { goto L_cb708; }
    X86_TICK(c, 12);
    // 0cb6fe  mov eax, dword ptr [ebp - 0x2c]
    X86_AT(c, 0xcb6feu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)));
    // 0cb701  mov al, byte ptr [eax]
    X86_AT(c, 0xcb701u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0cb703  and al, 0xf0
    X86_AT(c, 0xcb703u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0cb705  mov byte ptr [ebp - 0x2e], al
    X86_AT(c, 0xcb705u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD2u)), g8(c, 0));
L_cb708:
    X86_TICK(c, 33);
    // 0cb708  mov al, byte ptr [ebp - 0x2d]
    X86_AT(c, 0xcb708u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u))));
    // 0cb70b  add al, byte ptr [ebp - 0x2e]
    X86_AT(c, 0xcb70bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD2u))), 0, 1)); }
    // 0cb70e  mov byte ptr [ecx], al
    X86_AT(c, 0xcb70eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[1])), g8(c, 0));
    // 0cb710  inc ecx
    X86_AT(c, 0xcb710u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0cb711  inc dword ptr [ebp - 0x2c]
    X86_AT(c, 0xcb711u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0cb714  inc dword ptr [ebp - 0x24]
    X86_AT(c, 0xcb714u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0cb717  jmp 0xcb6d8
    X86_AT(c, 0xcb717u);
    X86_POLL(c, 0xcb6d8u); goto L_cb6d8;
L_cb719:
    X86_TICK(c, 9);
    // 0cb719  inc edi
    X86_AT(c, 0xcb719u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cb71a  jmp 0xcb6cc
    X86_AT(c, 0xcb71au);
    X86_POLL(c, 0xcb6ccu); goto L_cb6cc;
L_cb71c:
    X86_TICK(c, 6);
    // 0cb71c  mov ecx, 0x5fdf8
    X86_AT(c, 0xcb71cu);
    c.r[1] = 0x5FDF8u;
    // 0cb721  mov dword ptr [ebp - 0x2c], 0x4cff8
    X86_AT(c, 0xcb721u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)), 0x4CFF8u);
    // 0cb728  sub edi, edi
    X86_AT(c, 0xcb728u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_cb72a:
    X86_TICK(c, 7);
    // 0cb72a  cmp edi, 0x20
    X86_AT(c, 0xcb72au);
    (void)x86_sub(c, c.r[7], 0x20u, 0, 4);
    // 0cb72d  jge 0xcb77a
    X86_AT(c, 0xcb72du);
    if (x86_cc(c, 13)) { goto L_cb77a; }
    X86_TICK(c, 2);
    // 0cb72f  mov dword ptr [ebp - 0x24], 0
    X86_AT(c, 0xcb72fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)), 0x0u);
L_cb736:
    X86_TICK(c, 12);
    // 0cb736  cmp dword ptr [ebp - 0x24], 0x10
    X86_AT(c, 0xcb736u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu))), 0x10u, 0, 4);
    // 0cb73a  jge 0xcb777
    X86_AT(c, 0xcb73au);
    if (x86_cc(c, 13)) { goto L_cb777; }
    X86_TICK(c, 15);
    // 0cb73c  mov al, byte ptr [ecx]
    X86_AT(c, 0xcb73cu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[1]))));
    // 0cb73e  and al, 0xf
    X86_AT(c, 0xcb73eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0cb740  mov byte ptr [ebp - 0x2d], al
    X86_AT(c, 0xcb740u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u)), g8(c, 0));
    // 0cb743  and al, al
    X86_AT(c, 0xcb743u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0cb745  jne 0xcb751
    X86_AT(c, 0xcb745u);
    if (x86_cc(c, 5)) { goto L_cb751; }
    X86_TICK(c, 12);
    // 0cb747  mov eax, dword ptr [ebp - 0x2c]
    X86_AT(c, 0xcb747u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)));
    // 0cb74a  mov al, byte ptr [eax]
    X86_AT(c, 0xcb74au);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0cb74c  and al, 0xf
    X86_AT(c, 0xcb74cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0cb74e  mov byte ptr [ebp - 0x2d], al
    X86_AT(c, 0xcb74eu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u)), g8(c, 0));
L_cb751:
    X86_TICK(c, 15);
    // 0cb751  mov al, byte ptr [ecx]
    X86_AT(c, 0xcb751u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[1]))));
    // 0cb753  and al, 0xf0
    X86_AT(c, 0xcb753u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0cb755  mov byte ptr [ebp - 0x2e], al
    X86_AT(c, 0xcb755u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD2u)), g8(c, 0));
    // 0cb758  and al, al
    X86_AT(c, 0xcb758u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0cb75a  jne 0xcb766
    X86_AT(c, 0xcb75au);
    if (x86_cc(c, 5)) { goto L_cb766; }
    X86_TICK(c, 12);
    // 0cb75c  mov eax, dword ptr [ebp - 0x2c]
    X86_AT(c, 0xcb75cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)));
    // 0cb75f  mov al, byte ptr [eax]
    X86_AT(c, 0xcb75fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0cb761  and al, 0xf0
    X86_AT(c, 0xcb761u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0cb763  mov byte ptr [ebp - 0x2e], al
    X86_AT(c, 0xcb763u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD2u)), g8(c, 0));
L_cb766:
    X86_TICK(c, 33);
    // 0cb766  mov al, byte ptr [ebp - 0x2d]
    X86_AT(c, 0xcb766u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u))));
    // 0cb769  add al, byte ptr [ebp - 0x2e]
    X86_AT(c, 0xcb769u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD2u))), 0, 1)); }
    // 0cb76c  mov byte ptr [ecx], al
    X86_AT(c, 0xcb76cu);
    wr8((c.sbase[3] + (uint32_t)(c.r[1])), g8(c, 0));
    // 0cb76e  inc ecx
    X86_AT(c, 0xcb76eu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0cb76f  inc dword ptr [ebp - 0x2c]
    X86_AT(c, 0xcb76fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0cb772  inc dword ptr [ebp - 0x24]
    X86_AT(c, 0xcb772u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0cb775  jmp 0xcb736
    X86_AT(c, 0xcb775u);
    X86_POLL(c, 0xcb736u); goto L_cb736;
L_cb777:
    X86_TICK(c, 9);
    // 0cb777  inc edi
    X86_AT(c, 0xcb777u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cb778  jmp 0xcb72a
    X86_AT(c, 0xcb778u);
    X86_POLL(c, 0xcb72au); goto L_cb72a;
L_cb77a:
    X86_TICK(c, 24);
    // 0cb77a  pop edi
    X86_AT(c, 0xcb77au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cb77b  pop esi
    X86_AT(c, 0xcb77bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cb77c  leave 
    X86_AT(c, 0xcb77cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cb77d  ret 
    X86_AT(c, 0xcb77du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcb4b8u, "ran off the end of a function");
}
void f_000cb780(X86Cpu& c) {
    X86_TICK(c, 128);
    // 0cb780  push ebp
    X86_AT(c, 0xcb780u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cb781  mov ebp, esp
    X86_AT(c, 0xcb781u);
    c.r[5] = c.r[4];
    // 0cb783  sub esp, 8
    X86_AT(c, 0xcb783u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0cb786  push ebx
    X86_AT(c, 0xcb786u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cb787  push esi
    X86_AT(c, 0xcb787u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cb788  push edi
    X86_AT(c, 0xcb788u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cb789  mov dword ptr [ebp - 8], 0x4cdf8
    X86_AT(c, 0xcb789u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x4CDF8u);
    // 0cb790  mov eax, 0x43fd4
    X86_AT(c, 0xcb790u);
    c.r[0] = 0x43FD4u;
    // 0cb795  mov edx, dword ptr [0xa1ca0]
    X86_AT(c, 0xcb795u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xA1CA0u)));
    // 0cb79b  shl edx, 9
    X86_AT(c, 0xcb79bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[2] = r; }
    // 0cb79e  lea esi, [eax + edx*1 + 0x3ce24]
    X86_AT(c, 0xcb79eu);
    c.r[6] = (uint32_t)(c.r[0] + c.r[2] + 0x3CE24u);
    // 0cb7a5  mov ecx, dword ptr [ebp - 8]
    X86_AT(c, 0xcb7a5u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0cb7a8  push esi
    X86_AT(c, 0xcb7a8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cb7a9  push edi
    X86_AT(c, 0xcb7a9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cb7aa  mov edi, ecx
    X86_AT(c, 0xcb7aau);
    c.r[7] = c.r[1];
    // 0cb7ac  mov ecx, 0x80
    X86_AT(c, 0xcb7acu);
    c.r[1] = 0x80u;
    // 0cb7b1  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xcb7b1u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0cb7b3  pop edi
    X86_AT(c, 0xcb7b3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cb7b4  pop esi
    X86_AT(c, 0xcb7b4u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cb7b5  lea ecx, [eax + 0xa024]
    X86_AT(c, 0xcb7b5u);
    c.r[1] = (uint32_t)(c.r[0] + 0xA024u);
    // 0cb7bb  mov dword ptr [ebp - 8], ecx
    X86_AT(c, 0xcb7bbu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[1]);
    // 0cb7be  lea esi, [eax + edx*1 + 0x3ee24]
    X86_AT(c, 0xcb7beu);
    c.r[6] = (uint32_t)(c.r[0] + c.r[2] + 0x3EE24u);
    // 0cb7c5  push esi
    X86_AT(c, 0xcb7c5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cb7c6  push edi
    X86_AT(c, 0xcb7c6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cb7c7  mov edi, ecx
    X86_AT(c, 0xcb7c7u);
    c.r[7] = c.r[1];
    // 0cb7c9  mov ecx, 0x80
    X86_AT(c, 0xcb7c9u);
    c.r[1] = 0x80u;
    // 0cb7ce  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xcb7ceu);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0cb7d0  pop edi
    X86_AT(c, 0xcb7d0u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cb7d1  pop esi
    X86_AT(c, 0xcb7d1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cb7d2  lea ecx, [eax + 0xd224]
    X86_AT(c, 0xcb7d2u);
    c.r[1] = (uint32_t)(c.r[0] + 0xD224u);
    // 0cb7d8  mov dword ptr [ebp - 8], ecx
    X86_AT(c, 0xcb7d8u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[1]);
    // 0cb7db  lea esi, [eax + edx*1 + 0x44e24]
    X86_AT(c, 0xcb7dbu);
    c.r[6] = (uint32_t)(c.r[0] + c.r[2] + 0x44E24u);
    // 0cb7e2  push esi
    X86_AT(c, 0xcb7e2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cb7e3  push edi
    X86_AT(c, 0xcb7e3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cb7e4  mov edi, ecx
    X86_AT(c, 0xcb7e4u);
    c.r[7] = c.r[1];
    // 0cb7e6  mov ecx, 0x80
    X86_AT(c, 0xcb7e6u);
    c.r[1] = 0x80u;
    // 0cb7eb  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xcb7ebu);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0cb7ed  pop edi
    X86_AT(c, 0xcb7edu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cb7ee  pop esi
    X86_AT(c, 0xcb7eeu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cb7ef  inc dword ptr [0xa1ca0]
    X86_AT(c, 0xcb7efu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xA1CA0u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0cb7f5  cmp dword ptr [0xa1ca0], 0x10
    X86_AT(c, 0xcb7f5u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA1CA0u))), 0x10u, 0, 4);
    // 0cb7fc  jne 0xcb808
    X86_AT(c, 0xcb7fcu);
    if (x86_cc(c, 5)) { goto L_cb808; }
    X86_TICK(c, 2);
    // 0cb7fe  mov dword ptr [0xa1ca0], 0
    X86_AT(c, 0xcb7feu);
    wr32((c.sbase[3] + (uint32_t)(0xA1CA0u)), 0x0u);
L_cb808:
    X86_TICK(c, 6);
    // 0cb808  mov dword ptr [ebp - 8], 0x4eff8
    X86_AT(c, 0xcb808u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x4EFF8u);
    // 0cb80f  mov esi, 0x7ebf8
    X86_AT(c, 0xcb80fu);
    c.r[6] = 0x7EBF8u;
    // 0cb814  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xcb814u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_cb81b:
    X86_TICK(c, 12);
    // 0cb81b  cmp dword ptr [ebp - 4], 0xf
    X86_AT(c, 0xcb81bu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0xFu, 0, 4);
    // 0cb81f  jge 0xcb84b
    X86_AT(c, 0xcb81fu);
    if (x86_cc(c, 13)) { goto L_cb84b; }
    X86_TICK(c, 4);
    // 0cb821  mov ebx, 0x4dff8
    X86_AT(c, 0xcb821u);
    c.r[3] = 0x4DFF8u;
    // 0cb826  sub edi, edi
    X86_AT(c, 0xcb826u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_cb828:
    X86_TICK(c, 7);
    // 0cb828  cmp edi, 0x80
    X86_AT(c, 0xcb828u);
    (void)x86_sub(c, c.r[7], 0x80u, 0, 4);
    // 0cb82e  jge 0xcb846
    X86_AT(c, 0xcb82eu);
    if (x86_cc(c, 13)) { goto L_cb846; }
    X86_TICK(c, 36);
    // 0cb830  mov eax, dword ptr [esi]
    X86_AT(c, 0xcb830u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 0cb832  or eax, dword ptr [ebx]
    X86_AT(c, 0xcb832u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 4); }
    // 0cb834  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0xcb834u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0cb837  mov dword ptr [edx], eax
    X86_AT(c, 0xcb837u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 0cb839  add dword ptr [ebp - 8], 4
    X86_AT(c, 0xcb839u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0cb83d  add esi, 4
    X86_AT(c, 0xcb83du);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cb840  add ebx, 4
    X86_AT(c, 0xcb840u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cb843  inc edi
    X86_AT(c, 0xcb843u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cb844  jmp 0xcb828
    X86_AT(c, 0xcb844u);
    X86_POLL(c, 0xcb828u); goto L_cb828;
L_cb846:
    X86_TICK(c, 13);
    // 0cb846  inc dword ptr [ebp - 4]
    X86_AT(c, 0xcb846u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0cb849  jmp 0xcb81b
    X86_AT(c, 0xcb849u);
    X86_POLL(c, 0xcb81bu); goto L_cb81b;
L_cb84b:
    X86_TICK(c, 12);
    // 0cb84b  cmp word ptr [0xa1b66], 0
    X86_AT(c, 0xcb84bu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xA1B66u))), 0x0u, 0, 2);
    // 0cb853  jne 0xcb878
    X86_AT(c, 0xcb853u);
    if (x86_cc(c, 5)) { goto L_cb878; }
    X86_TICK(c, 13);
    // 0cb855  mov eax, 0x5fff8
    X86_AT(c, 0xcb855u);
    c.r[0] = 0x5FFF8u;
    // 0cb85a  cmp eax, dword ptr [0xa18bc]
    X86_AT(c, 0xcb85au);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xA18BCu))), 0, 4);
    // 0cb860  jne 0xcb86e
    X86_AT(c, 0xcb860u);
    if (x86_cc(c, 5)) { goto L_cb86e; }
    X86_TICK(c, 9);
    // 0cb862  mov dword ptr [0xa18bc], 0x601f8
    X86_AT(c, 0xcb862u);
    wr32((c.sbase[3] + (uint32_t)(0xA18BCu)), 0x601F8u);
    // 0cb86c  jmp 0xcb878
    X86_AT(c, 0xcb86cu);
    goto L_cb878;
L_cb86e:
    X86_TICK(c, 2);
    // 0cb86e  mov dword ptr [0xa18bc], 0x5fff8
    X86_AT(c, 0xcb86eu);
    wr32((c.sbase[3] + (uint32_t)(0xA18BCu)), 0x5FFF8u);
L_cb878:
    X86_TICK(c, 12);
    // 0cb878  cmp word ptr [0xa1b68], 0
    X86_AT(c, 0xcb878u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xA1B68u))), 0x0u, 0, 2);
    // 0cb880  jne 0xcb8a5
    X86_AT(c, 0xcb880u);
    if (x86_cc(c, 5)) { goto L_cb8a5; }
    X86_TICK(c, 13);
    // 0cb882  mov eax, 0x5fbf8
    X86_AT(c, 0xcb882u);
    c.r[0] = 0x5FBF8u;
    // 0cb887  cmp eax, dword ptr [0xa18b4]
    X86_AT(c, 0xcb887u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xA18B4u))), 0, 4);
    // 0cb88d  jne 0xcb89b
    X86_AT(c, 0xcb88du);
    if (x86_cc(c, 5)) { goto L_cb89b; }
    X86_TICK(c, 9);
    // 0cb88f  mov dword ptr [0xa18b4], 0x5fdf8
    X86_AT(c, 0xcb88fu);
    wr32((c.sbase[3] + (uint32_t)(0xA18B4u)), 0x5FDF8u);
    // 0cb899  jmp 0xcb8a5
    X86_AT(c, 0xcb899u);
    goto L_cb8a5;
L_cb89b:
    X86_TICK(c, 2);
    // 0cb89b  mov dword ptr [0xa18b4], 0x5fbf8
    X86_AT(c, 0xcb89bu);
    wr32((c.sbase[3] + (uint32_t)(0xA18B4u)), 0x5FBF8u);
L_cb8a5:
    X86_TICK(c, 18);
    // 0cb8a5  dec word ptr [0xa1b66]
    X86_AT(c, 0xcb8a5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xA1B66u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 0cb8ac  cmp word ptr [0xa1b66], 0xffff
    X86_AT(c, 0xcb8acu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xA1B66u))), 0xFFFFu, 0, 2);
    // 0cb8b4  jne 0xcb8bf
    X86_AT(c, 0xcb8b4u);
    if (x86_cc(c, 5)) { goto L_cb8bf; }
    X86_TICK(c, 2);
    // 0cb8b6  mov word ptr [0xa1b66], 4
    X86_AT(c, 0xcb8b6u);
    wr16((c.sbase[3] + (uint32_t)(0xA1B66u)), 0x4u);
L_cb8bf:
    X86_TICK(c, 18);
    // 0cb8bf  dec word ptr [0xa1b68]
    X86_AT(c, 0xcb8bfu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xA1B68u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 0cb8c6  cmp word ptr [0xa1b68], 0xffff
    X86_AT(c, 0xcb8c6u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xA1B68u))), 0xFFFFu, 0, 2);
    // 0cb8ce  jne 0xcb8d9
    X86_AT(c, 0xcb8ceu);
    if (x86_cc(c, 5)) { goto L_cb8d9; }
    X86_TICK(c, 2);
    // 0cb8d0  mov word ptr [0xa1b68], 3
    X86_AT(c, 0xcb8d0u);
    wr16((c.sbase[3] + (uint32_t)(0xA1B68u)), 0x3u);
L_cb8d9:
    X86_TICK(c, 18);
    // 0cb8d9  dec word ptr [0xa1b6a]
    X86_AT(c, 0xcb8d9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xA1B6Au)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 0cb8e0  cmp word ptr [0xa1b6a], 0xffff
    X86_AT(c, 0xcb8e0u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xA1B6Au))), 0xFFFFu, 0, 2);
    // 0cb8e8  jne 0xcb8f3
    X86_AT(c, 0xcb8e8u);
    if (x86_cc(c, 5)) { goto L_cb8f3; }
    X86_TICK(c, 2);
    // 0cb8ea  mov word ptr [0xa1b6a], 2
    X86_AT(c, 0xcb8eau);
    wr16((c.sbase[3] + (uint32_t)(0xA1B6Au)), 0x2u);
L_cb8f3:
    X86_TICK(c, 18);
    // 0cb8f3  dec word ptr [0xa1b6c]
    X86_AT(c, 0xcb8f3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xA1B6Cu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 0cb8fa  cmp word ptr [0xa1b6c], 0xffff
    X86_AT(c, 0xcb8fau);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xA1B6Cu))), 0xFFFFu, 0, 2);
    // 0cb902  jne 0xcb90d
    X86_AT(c, 0xcb902u);
    if (x86_cc(c, 5)) { goto L_cb90d; }
    X86_TICK(c, 2);
    // 0cb904  mov word ptr [0xa1b6c], 3
    X86_AT(c, 0xcb904u);
    wr16((c.sbase[3] + (uint32_t)(0xA1B6Cu)), 0x3u);
L_cb90d:
    X86_TICK(c, 28);
    // 0cb90d  pop edi
    X86_AT(c, 0xcb90du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cb90e  pop esi
    X86_AT(c, 0xcb90eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cb90f  pop ebx
    X86_AT(c, 0xcb90fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cb910  leave 
    X86_AT(c, 0xcb910u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cb911  ret 
    X86_AT(c, 0xcb911u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcb780u, "ran off the end of a function");
}
void f_000cb914(X86Cpu& c) {
    X86_TICK(c, 37);
    // 0cb914  push ebp
    X86_AT(c, 0xcb914u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cb915  mov ebp, esp
    X86_AT(c, 0xcb915u);
    c.r[5] = c.r[4];
    // 0cb917  sub esp, 0xc
    X86_AT(c, 0xcb917u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0cb91a  push ebx
    X86_AT(c, 0xcb91au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cb91b  push esi
    X86_AT(c, 0xcb91bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cb91c  push edi
    X86_AT(c, 0xcb91cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cb91d  lea eax, [ebp - 0xc]
    X86_AT(c, 0xcb91du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0cb920  push eax
    X86_AT(c, 0xcb920u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cb921  lea eax, [ebp - 8]
    X86_AT(c, 0xcb921u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0cb924  push eax
    X86_AT(c, 0xcb924u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cb925  lea eax, [ebp - 4]
    X86_AT(c, 0xcb925u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0cb928  push eax
    X86_AT(c, 0xcb928u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cb929  push 0x8000
    X86_AT(c, 0xcb929u);
    { uint32_t v = 0x8000u; push32(c, v); }
    // 0cb92e  push 0x4cbf8
    X86_AT(c, 0xcb92eu);
    { uint32_t v = 0x4CBF8u; push32(c, v); }
    // 0cb933  push 0x20e0
    X86_AT(c, 0xcb933u);
    { uint32_t v = 0x20E0u; push32(c, v); }
    // 0cb938  call 0xc9bc4
    X86_AT(c, 0xcb938u);
    push32(c, 0xcb93du); x86_call_known(c, 0xc9bc4u, f_000c9bc4); X86_RET(c, 0xcb93du);
    X86_TICK(c, 8);
    // 0cb93d  mov esi, 0x7ebf8
    X86_AT(c, 0xcb93du);
    c.r[6] = 0x7EBF8u;
    // 0cb942  mov ebx, 0x4eff8
    X86_AT(c, 0xcb942u);
    c.r[3] = 0x4EFF8u;
    // 0cb947  sub edi, edi
    X86_AT(c, 0xcb947u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0cb949  add esp, 0x18
    X86_AT(c, 0xcb949u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_cb94c:
    X86_TICK(c, 7);
    // 0cb94c  cmp edi, 0x780
    X86_AT(c, 0xcb94cu);
    (void)x86_sub(c, c.r[7], 0x780u, 0, 4);
    // 0cb952  jge 0xcb95d
    X86_AT(c, 0xcb952u);
    if (x86_cc(c, 13)) { goto L_cb95d; }
    X86_TICK(c, 15);
    // 0cb954  mov eax, dword ptr [ebx + edi*4]
    X86_AT(c, 0xcb954u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[7] * 4)));
    // 0cb957  mov dword ptr [esi + edi*4], eax
    X86_AT(c, 0xcb957u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7] * 4)), c.r[0]);
    // 0cb95a  inc edi
    X86_AT(c, 0xcb95au);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cb95b  jmp 0xcb94c
    X86_AT(c, 0xcb95bu);
    X86_POLL(c, 0xcb94cu); goto L_cb94c;
L_cb95d:
    X86_TICK(c, 25);
    // 0cb95d  lea eax, [ebp - 0xc]
    X86_AT(c, 0xcb95du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0cb960  push eax
    X86_AT(c, 0xcb960u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cb961  lea ecx, [ebp - 8]
    X86_AT(c, 0xcb961u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0cb964  push ecx
    X86_AT(c, 0xcb964u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0cb965  lea edx, [ebp - 4]
    X86_AT(c, 0xcb965u);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0cb968  push edx
    X86_AT(c, 0xcb968u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0cb969  push 0x8000
    X86_AT(c, 0xcb969u);
    { uint32_t v = 0x8000u; push32(c, v); }
    // 0cb96e  push 0x54bf8
    X86_AT(c, 0xcb96eu);
    { uint32_t v = 0x54BF8u; push32(c, v); }
    // 0cb973  push 0x20f4
    X86_AT(c, 0xcb973u);
    { uint32_t v = 0x20F4u; push32(c, v); }
    // 0cb978  call 0xc9bc4
    X86_AT(c, 0xcb978u);
    push32(c, 0xcb97du); x86_call_known(c, 0xc9bc4u, f_000c9bc4); X86_RET(c, 0xcb97du);
    X86_TICK(c, 25);
    // 0cb97d  lea eax, [ebp - 0xc]
    X86_AT(c, 0xcb97du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0cb980  push eax
    X86_AT(c, 0xcb980u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cb981  lea ecx, [ebp - 8]
    X86_AT(c, 0xcb981u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0cb984  push ecx
    X86_AT(c, 0xcb984u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0cb985  lea edx, [ebp - 4]
    X86_AT(c, 0xcb985u);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0cb988  push edx
    X86_AT(c, 0xcb988u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0cb989  push 0x8000
    X86_AT(c, 0xcb989u);
    { uint32_t v = 0x8000u; push32(c, v); }
    // 0cb98e  push 0x5cbf8
    X86_AT(c, 0xcb98eu);
    { uint32_t v = 0x5CBF8u; push32(c, v); }
    // 0cb993  push 0x2108
    X86_AT(c, 0xcb993u);
    { uint32_t v = 0x2108u; push32(c, v); }
    // 0cb998  call 0xc9bc4
    X86_AT(c, 0xcb998u);
    push32(c, 0xcb99du); x86_call_known(c, 0xc9bc4u, f_000c9bc4); X86_RET(c, 0xcb99du);
    X86_TICK(c, 25);
    // 0cb99d  lea eax, [ebp - 0xc]
    X86_AT(c, 0xcb99du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0cb9a0  push eax
    X86_AT(c, 0xcb9a0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cb9a1  lea ecx, [ebp - 8]
    X86_AT(c, 0xcb9a1u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0cb9a4  push ecx
    X86_AT(c, 0xcb9a4u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0cb9a5  lea edx, [ebp - 4]
    X86_AT(c, 0xcb9a5u);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0cb9a8  push edx
    X86_AT(c, 0xcb9a8u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0cb9a9  push 0x8000
    X86_AT(c, 0xcb9a9u);
    { uint32_t v = 0x8000u; push32(c, v); }
    // 0cb9ae  push 0x43fd8
    X86_AT(c, 0xcb9aeu);
    { uint32_t v = 0x43FD8u; push32(c, v); }
    // 0cb9b3  push 0x211c
    X86_AT(c, 0xcb9b3u);
    { uint32_t v = 0x211Cu; push32(c, v); }
    // 0cb9b8  call 0xc9bc4
    X86_AT(c, 0xcb9b8u);
    push32(c, 0xcb9bdu); x86_call_known(c, 0xc9bc4u, f_000c9bc4); X86_RET(c, 0xcb9bdu);
    X86_TICK(c, 27);
    // 0cb9bd  add esp, 0x48
    X86_AT(c, 0xcb9bdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x48u, 0, 4); }
    // 0cb9c0  lea eax, [ebp - 0xc]
    X86_AT(c, 0xcb9c0u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0cb9c3  push eax
    X86_AT(c, 0xcb9c3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cb9c4  lea ecx, [ebp - 8]
    X86_AT(c, 0xcb9c4u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0cb9c7  push ecx
    X86_AT(c, 0xcb9c7u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0cb9c8  lea edx, [ebp - 4]
    X86_AT(c, 0xcb9c8u);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0cb9cb  push edx
    X86_AT(c, 0xcb9cbu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0cb9cc  push 0x8000
    X86_AT(c, 0xcb9ccu);
    { uint32_t v = 0x8000u; push32(c, v); }
    // 0cb9d1  push 0x66bf8
    X86_AT(c, 0xcb9d1u);
    { uint32_t v = 0x66BF8u; push32(c, v); }
    // 0cb9d6  push 0x2130
    X86_AT(c, 0xcb9d6u);
    { uint32_t v = 0x2130u; push32(c, v); }
    // 0cb9db  call 0xc9bc4
    X86_AT(c, 0xcb9dbu);
    push32(c, 0xcb9e0u); x86_call_known(c, 0xc9bc4u, f_000c9bc4); X86_RET(c, 0xcb9e0u);
    X86_TICK(c, 25);
    // 0cb9e0  lea eax, [ebp - 0xc]
    X86_AT(c, 0xcb9e0u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0cb9e3  push eax
    X86_AT(c, 0xcb9e3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cb9e4  lea ecx, [ebp - 8]
    X86_AT(c, 0xcb9e4u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0cb9e7  push ecx
    X86_AT(c, 0xcb9e7u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0cb9e8  lea edx, [ebp - 4]
    X86_AT(c, 0xcb9e8u);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0cb9eb  push edx
    X86_AT(c, 0xcb9ebu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0cb9ec  push 0x8000
    X86_AT(c, 0xcb9ecu);
    { uint32_t v = 0x8000u; push32(c, v); }
    // 0cb9f1  push 0x6ebf8
    X86_AT(c, 0xcb9f1u);
    { uint32_t v = 0x6EBF8u; push32(c, v); }
    // 0cb9f6  push 0x2144
    X86_AT(c, 0xcb9f6u);
    { uint32_t v = 0x2144u; push32(c, v); }
    // 0cb9fb  call 0xc9bc4
    X86_AT(c, 0xcb9fbu);
    push32(c, 0xcba00u); x86_call_known(c, 0xc9bc4u, f_000c9bc4); X86_RET(c, 0xcba00u);
    X86_TICK(c, 25);
    // 0cba00  lea eax, [ebp - 0xc]
    X86_AT(c, 0xcba00u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0cba03  push eax
    X86_AT(c, 0xcba03u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cba04  lea eax, [ebp - 8]
    X86_AT(c, 0xcba04u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0cba07  push eax
    X86_AT(c, 0xcba07u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cba08  lea eax, [ebp - 4]
    X86_AT(c, 0xcba08u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0cba0b  push eax
    X86_AT(c, 0xcba0bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cba0c  push 0x8000
    X86_AT(c, 0xcba0cu);
    { uint32_t v = 0x8000u; push32(c, v); }
    // 0cba11  push 0x76bf8
    X86_AT(c, 0xcba11u);
    { uint32_t v = 0x76BF8u; push32(c, v); }
    // 0cba16  push 0x2158
    X86_AT(c, 0xcba16u);
    { uint32_t v = 0x2158u; push32(c, v); }
    // 0cba1b  call 0xc9bc4
    X86_AT(c, 0xcba1bu);
    push32(c, 0xcba20u); x86_call_known(c, 0xc9bc4u, f_000c9bc4); X86_RET(c, 0xcba20u);
    X86_TICK(c, 4);
    // 0cba20  add esp, 0x48
    X86_AT(c, 0xcba20u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x48u, 0, 4); }
    // 0cba23  sub edi, edi
    X86_AT(c, 0xcba23u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_cba25:
    X86_TICK(c, 7);
    // 0cba25  cmp edi, 0x200
    X86_AT(c, 0xcba25u);
    (void)x86_sub(c, c.r[7], 0x200u, 0, 4);
    // 0cba2b  jge 0xcba37
    X86_AT(c, 0xcba2bu);
    if (x86_cc(c, 13)) { goto L_cba37; }
    X86_TICK(c, 11);
    // 0cba2d  mov byte ptr [edi + 0x809f8], 0x99
    X86_AT(c, 0xcba2du);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x809F8u)), 0x99u);
    // 0cba34  inc edi
    X86_AT(c, 0xcba34u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cba35  jmp 0xcba25
    X86_AT(c, 0xcba35u);
    X86_POLL(c, 0xcba25u); goto L_cba25;
L_cba37:
    X86_TICK(c, 2);
    // 0cba37  sub edi, edi
    X86_AT(c, 0xcba37u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_cba39:
    X86_TICK(c, 7);
    // 0cba39  cmp edi, 0x200
    X86_AT(c, 0xcba39u);
    (void)x86_sub(c, c.r[7], 0x200u, 0, 4);
    // 0cba3f  jge 0xcba4b
    X86_AT(c, 0xcba3fu);
    if (x86_cc(c, 13)) { goto L_cba4b; }
    X86_TICK(c, 11);
    // 0cba41  mov byte ptr [edi + 0x80bf8], 0
    X86_AT(c, 0xcba41u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x80BF8u)), 0x0u);
    // 0cba48  inc edi
    X86_AT(c, 0xcba48u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cba49  jmp 0xcba39
    X86_AT(c, 0xcba49u);
    X86_POLL(c, 0xcba39u); goto L_cba39;
L_cba4b:
    X86_TICK(c, 7);
    // 0cba4b  call 0xcc240
    X86_AT(c, 0xcba4bu);
    push32(c, 0xcba50u); x86_call_known(c, 0xcc240u, f_000cc240); X86_RET(c, 0xcba50u);
    X86_TICK(c, 7);
    // 0cba50  call 0xcb4b8
    X86_AT(c, 0xcba50u);
    push32(c, 0xcba55u); x86_call_known(c, 0xcb4b8u, f_000cb4b8); X86_RET(c, 0xcba55u);
    X86_TICK(c, 28);
    // 0cba55  pop edi
    X86_AT(c, 0xcba55u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cba56  pop esi
    X86_AT(c, 0xcba56u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cba57  pop ebx
    X86_AT(c, 0xcba57u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cba58  leave 
    X86_AT(c, 0xcba58u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cba59  ret 
    X86_AT(c, 0xcba59u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcb914u, "ran off the end of a function");
}
void f_000cba5c(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0cba5c  push ebp
    X86_AT(c, 0xcba5cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cba5d  mov ebp, esp
    X86_AT(c, 0xcba5du);
    c.r[5] = c.r[4];
    // 0cba5f  push edi
    X86_AT(c, 0xcba5fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cba60  push 0x216a
    X86_AT(c, 0xcba60u);
    { uint32_t v = 0x216Au; push32(c, v); }
    // 0cba65  push dword ptr [ebp + 8]
    X86_AT(c, 0xcba65u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0cba68  call 0xe6e04
    X86_AT(c, 0xcba68u);
    push32(c, 0xcba6du); x86_call_known(c, 0xe6e04u, f_000e6e04); X86_RET(c, 0xcba6du);
    X86_TICK(c, 18);
    // 0cba6d  xchg edi, eax
    X86_AT(c, 0xcba6du);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0cba6e  push edi
    X86_AT(c, 0xcba6eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cba6f  push 1
    X86_AT(c, 0xcba6fu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cba71  push 0x6660
    X86_AT(c, 0xcba71u);
    { uint32_t v = 0x6660u; push32(c, v); }
    // 0cba76  push 0x8bdf8
    X86_AT(c, 0xcba76u);
    { uint32_t v = 0x8BDF8u; push32(c, v); }
    // 0cba7b  call 0xe6b28
    X86_AT(c, 0xcba7bu);
    push32(c, 0xcba80u); x86_call_known(c, 0xe6b28u, f_000e6b28); X86_RET(c, 0xcba80u);
    X86_TICK(c, 9);
    // 0cba80  push edi
    X86_AT(c, 0xcba80u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cba81  call 0xe7300
    X86_AT(c, 0xcba81u);
    push32(c, 0xcba86u); x86_call_known(c, 0xe7300u, f_000e7300); X86_RET(c, 0xcba86u);
    X86_TICK(c, 22);
    // 0cba86  add esp, 0x1c
    X86_AT(c, 0xcba86u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0cba89  pop edi
    X86_AT(c, 0xcba89u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cba8a  leave 
    X86_AT(c, 0xcba8au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cba8b  ret 
    X86_AT(c, 0xcba8bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcba5cu, "ran off the end of a function");
}
void f_000cba8c(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0cba8c  push ebp
    X86_AT(c, 0xcba8cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cba8d  mov ebp, esp
    X86_AT(c, 0xcba8du);
    c.r[5] = c.r[4];
    // 0cba8f  sub esp, 0x18
    X86_AT(c, 0xcba8fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x18u, 0, 4); }
    // 0cba92  push ebx
    X86_AT(c, 0xcba92u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cba93  push esi
    X86_AT(c, 0xcba93u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cba94  push edi
    X86_AT(c, 0xcba94u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cba95  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xcba95u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0cba98  cmp eax, 1
    X86_AT(c, 0xcba98u);
    (void)x86_sub(c, c.r[0], 0x1u, 0, 4);
    // 0cba9b  je 0xcbaa6
    X86_AT(c, 0xcba9bu);
    if (x86_cc(c, 4)) { goto L_cbaa6; }
    X86_TICK(c, 7);
    // 0cba9d  cmp eax, 4
    X86_AT(c, 0xcba9du);
    (void)x86_sub(c, c.r[0], 0x4u, 0, 4);
    // 0cbaa0  jne 0xcbb52
    X86_AT(c, 0xcbaa0u);
    if (x86_cc(c, 5)) { goto L_cbb52; }
L_cbaa6:
    X86_TICK(c, 22);
    // 0cbaa6  sub eax, eax
    X86_AT(c, 0xcbaa6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0cbaa8  mov word ptr [0xa1b74], ax
    X86_AT(c, 0xcbaa8u);
    wr16((c.sbase[3] + (uint32_t)(0xA1B74u)), (c.r[0] & 0xFFFFu));
    // 0cbaae  sub dword ptr [ebp + 8], 5
    X86_AT(c, 0xcbaaeu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, 0x5u, 0, 4)); }
    // 0cbab2  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xcbab2u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cbab5  cmp eax, edx
    X86_AT(c, 0xcbab5u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0cbab7  jle 0xcbac0
    X86_AT(c, 0xcbab7u);
    if (x86_cc(c, 14)) { goto L_cbac0; }
    X86_TICK(c, 7);
    // 0cbab9  add dword ptr [ebp + 8], 0xa8
    X86_AT(c, 0xcbab9u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xA8u, 0, 4)); }
L_cbac0:
    X86_TICK(c, 18);
    // 0cbac0  sub dword ptr [ebp + 0xc], 5
    X86_AT(c, 0xcbac0u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, 0x5u, 0, 4)); }
    // 0cbac4  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xcbac4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0cbac7  and eax, eax
    X86_AT(c, 0xcbac7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cbac9  jge 0xcbad2
    X86_AT(c, 0xcbac9u);
    if (x86_cc(c, 13)) { goto L_cbad2; }
    X86_TICK(c, 7);
    // 0cbacb  add dword ptr [ebp + 0xc], 0x9c
    X86_AT(c, 0xcbacbu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x9Cu, 0, 4)); }
L_cbad2:
    X86_TICK(c, 2);
    // 0cbad2  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xcbad2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_cbad9:
    X86_TICK(c, 12);
    // 0cbad9  cmp dword ptr [ebp - 4], 0xb
    X86_AT(c, 0xcbad9u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0xBu, 0, 4);
    // 0cbadd  jge 0xcbb4d
    X86_AT(c, 0xcbaddu);
    if (x86_cc(c, 13)) { goto L_cbb4d; }
    X86_TICK(c, 8);
    // 0cbae3  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xcbae3u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cbae6  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xcbae6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0cbae9  sub edi, edi
    X86_AT(c, 0xcbae9u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_cbaeb:
    X86_TICK(c, 7);
    // 0cbaeb  cmp edi, 0xb
    X86_AT(c, 0xcbaebu);
    (void)x86_sub(c, c.r[7], 0xBu, 0, 4);
    // 0cbaee  jge 0xcbb33
    X86_AT(c, 0xcbaeeu);
    if (x86_cc(c, 13)) { goto L_cbb33; }
    X86_TICK(c, 44);
    // 0cbaf0  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xcbaf0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0cbaf3  lea eax, [eax*8]
    X86_AT(c, 0xcbaf3u);
    c.r[0] = (uint32_t)(c.r[0] * 8);
    // 0cbafa  lea edx, [eax + eax*4]
    X86_AT(c, 0xcbafau);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0cbafd  lea edx, [eax + edx*4]
    X86_AT(c, 0xcbafdu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0cbb00  add edx, dword ptr [ebp - 8]
    X86_AT(c, 0xcbb00u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 4); }
    // 0cbb03  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xcbb03u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0cbb06  lea ecx, [eax + eax*8]
    X86_AT(c, 0xcbb06u);
    c.r[1] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0cbb09  lea eax, [ecx + eax*2]
    X86_AT(c, 0xcbb09u);
    c.r[0] = (uint32_t)(c.r[1] + c.r[0] * 2);
    // 0cbb0c  lea ecx, [edi + eax*1]
    X86_AT(c, 0xcbb0cu);
    c.r[1] = (uint32_t)(c.r[7] + c.r[0]);
    // 0cbb0f  mov al, byte ptr [edx + 0x8bdf8]
    X86_AT(c, 0xcbb0fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0x8BDF8u))));
    // 0cbb15  mov byte ptr [ecx + 0x92458], al
    X86_AT(c, 0xcbb15u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0x92458u)), g8(c, 0));
    // 0cbb1b  cmp dword ptr [ebp - 8], 0xa7
    X86_AT(c, 0xcbb1bu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0xA7u, 0, 4);
    // 0cbb22  jne 0xcbb2d
    X86_AT(c, 0xcbb22u);
    if (x86_cc(c, 5)) { goto L_cbb2d; }
    X86_TICK(c, 9);
    // 0cbb24  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xcbb24u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
    // 0cbb2b  jmp 0xcbb30
    X86_AT(c, 0xcbb2bu);
    goto L_cbb30;
L_cbb2d:
    X86_TICK(c, 6);
    // 0cbb2d  inc dword ptr [ebp - 8]
    X86_AT(c, 0xcbb2du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_cbb30:
    X86_TICK(c, 9);
    // 0cbb30  inc edi
    X86_AT(c, 0xcbb30u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cbb31  jmp 0xcbaeb
    X86_AT(c, 0xcbb31u);
    X86_POLL(c, 0xcbaebu); goto L_cbaeb;
L_cbb33:
    X86_TICK(c, 12);
    // 0cbb33  cmp dword ptr [ebp + 0xc], 0x9b
    X86_AT(c, 0xcbb33u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0x9Bu, 0, 4);
    // 0cbb3a  jne 0xcbb45
    X86_AT(c, 0xcbb3au);
    if (x86_cc(c, 5)) { goto L_cbb45; }
    X86_TICK(c, 9);
    // 0cbb3c  mov dword ptr [ebp + 0xc], 0
    X86_AT(c, 0xcbb3cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)), 0x0u);
    // 0cbb43  jmp 0xcbb48
    X86_AT(c, 0xcbb43u);
    goto L_cbb48;
L_cbb45:
    X86_TICK(c, 6);
    // 0cbb45  inc dword ptr [ebp + 0xc]
    X86_AT(c, 0xcbb45u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_cbb48:
    X86_TICK(c, 13);
    // 0cbb48  inc dword ptr [ebp - 4]
    X86_AT(c, 0xcbb48u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0cbb4b  jmp 0xcbad9
    X86_AT(c, 0xcbb4bu);
    X86_POLL(c, 0xcbad9u); goto L_cbad9;
L_cbb4d:
    X86_TICK(c, 7);
    // 0cbb4d  call 0xcbed4
    X86_AT(c, 0xcbb4du);
    push32(c, 0xcbb52u); x86_call_known(c, 0xcbed4u, f_000cbed4); X86_RET(c, 0xcbb52u);
L_cbb52:
    X86_TICK(c, 12);
    // 0cbb52  cmp dword ptr [ebp + 0x10], 2
    X86_AT(c, 0xcbb52u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0x2u, 0, 4);
    // 0cbb56  je 0xcbb5d
    X86_AT(c, 0xcbb56u);
    if (x86_cc(c, 4)) { goto L_cbb5d; }
    X86_TICK(c, 7);
    // 0cbb58  call 0xcb780
    X86_AT(c, 0xcbb58u);
    push32(c, 0xcbb5du); x86_call_known(c, 0xcb780u, f_000cb780); X86_RET(c, 0xcbb5du);
L_cbb5d:
    X86_TICK(c, 2);
    // 0cbb5d  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xcbb5du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_cbb64:
    X86_TICK(c, 12);
    // 0cbb64  cmp dword ptr [ebp - 4], 0xb
    X86_AT(c, 0xcbb64u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0xBu, 0, 4);
    // 0cbb68  jge 0xcbc2a
    X86_AT(c, 0xcbb68u);
    if (x86_cc(c, 13)) { goto L_cbc2a; }
    X86_TICK(c, 2);
    // 0cbb6e  sub edi, edi
    X86_AT(c, 0xcbb6eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_cbb70:
    X86_TICK(c, 7);
    // 0cbb70  cmp edi, 0xb
    X86_AT(c, 0xcbb70u);
    (void)x86_sub(c, c.r[7], 0xBu, 0, 4);
    // 0cbb73  jge 0xcbc22
    X86_AT(c, 0xcbb73u);
    if (x86_cc(c, 13)) { goto L_cbc22; }
    X86_TICK(c, 72);
    // 0cbb79  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xcbb79u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0cbb7c  lea edx, [eax + eax*8]
    X86_AT(c, 0xcbb7cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0cbb7f  lea eax, [edx + eax*2]
    X86_AT(c, 0xcbb7fu);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0cbb82  add eax, edi
    X86_AT(c, 0xcbb82u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[7], 0, 4); }
    // 0cbb84  mov al, byte ptr [eax + 0x92458]
    X86_AT(c, 0xcbb84u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x92458u))));
    // 0cbb8a  mov byte ptr [ebp - 0x11], al
    X86_AT(c, 0xcbb8au);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFEFu)), g8(c, 0));
    // 0cbb8d  mov edx, edi
    X86_AT(c, 0xcbb8du);
    c.r[2] = c.r[7];
    // 0cbb8f  shl edx, 5
    X86_AT(c, 0xcbb8fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0cbb92  xchg edx, eax
    X86_AT(c, 0xcbb92u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0cbb93  cdq 
    X86_AT(c, 0xcbb93u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0cbb94  sub eax, edx
    X86_AT(c, 0xcbb94u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0cbb96  sar eax, 1
    X86_AT(c, 0xcbb96u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0cbb98  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xcbb98u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0cbb9b  mov dword ptr [ebp - 0x18], eax
    X86_AT(c, 0xcbb9bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), c.r[0]);
    // 0cbb9e  lea eax, [edx + edx*4]
    X86_AT(c, 0xcbb9eu);
    c.r[0] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0cbba1  lea eax, [edx + eax*2]
    X86_AT(c, 0xcbba1u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0cbba4  shl eax, 0xa
    X86_AT(c, 0xcbba4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[0] = r; }
    // 0cbba7  cdq 
    X86_AT(c, 0xcbba7u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0cbba8  sub eax, edx
    X86_AT(c, 0xcbba8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0cbbaa  sar eax, 1
    X86_AT(c, 0xcbbaau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0cbbac  add eax, dword ptr [ebp - 0x18]
    X86_AT(c, 0xcbbacu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))), 0, 4); }
    // 0cbbaf  lea ebx, [eax + 0x92550]
    X86_AT(c, 0xcbbafu);
    c.r[3] = (uint32_t)(c.r[0] + 0x92550u);
    // 0cbbb5  movzx edx, byte ptr [ebp - 0x11]
    X86_AT(c, 0xcbbb5u);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFEFu)));
    // 0cbbb9  cmp edx, 7
    X86_AT(c, 0xcbbb9u);
    (void)x86_sub(c, c.r[2], 0x7u, 0, 4);
    // 0cbbbc  je 0xcbbcb
    X86_AT(c, 0xcbbbcu);
    if (x86_cc(c, 4)) { goto L_cbbcb; }
    X86_TICK(c, 7);
    // 0cbbbe  cmp edx, 8
    X86_AT(c, 0xcbbbeu);
    (void)x86_sub(c, c.r[2], 0x8u, 0, 4);
    // 0cbbc1  jne 0xcbbd3
    X86_AT(c, 0xcbbc1u);
    if (x86_cc(c, 5)) { goto L_cbbd3; }
    X86_TICK(c, 11);
    // 0cbbc3  mov esi, dword ptr [0xa18bc]
    X86_AT(c, 0xcbbc3u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xA18BCu)));
    // 0cbbc9  jmp 0xcbbf2
    X86_AT(c, 0xcbbc9u);
    goto L_cbbf2;
L_cbbcb:
    X86_TICK(c, 11);
    // 0cbbcb  mov esi, dword ptr [0xa18b4]
    X86_AT(c, 0xcbbcbu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xA18B4u)));
    // 0cbbd1  jmp 0xcbbf2
    X86_AT(c, 0xcbbd1u);
    goto L_cbbf2;
L_cbbd3:
    X86_TICK(c, 11);
    // 0cbbd3  mov al, byte ptr [ebp - 0x11]
    X86_AT(c, 0xcbbd3u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFEFu))));
    // 0cbbd6  cmp al, 0x3f
    X86_AT(c, 0xcbbd6u);
    (void)x86_sub(c, g8(c, 0), 0x3Fu, 0, 1);
    // 0cbbd8  jbe 0xcbbe5
    X86_AT(c, 0xcbbd8u);
    if (x86_cc(c, 6)) { goto L_cbbe5; }
    X86_TICK(c, 7);
    // 0cbbda  cmp al, 0x4f
    X86_AT(c, 0xcbbdau);
    (void)x86_sub(c, g8(c, 0), 0x4Fu, 0, 1);
    // 0cbbdc  jae 0xcbbe5
    X86_AT(c, 0xcbbdcu);
    if (x86_cc(c, 3)) { goto L_cbbe5; }
    X86_TICK(c, 9);
    // 0cbbde  mov esi, 0x4ddf8
    X86_AT(c, 0xcbbdeu);
    c.r[6] = 0x4DDF8u;
    // 0cbbe3  jmp 0xcbbf2
    X86_AT(c, 0xcbbe3u);
    goto L_cbbf2;
L_cbbe5:
    X86_TICK(c, 11);
    // 0cbbe5  movzx eax, byte ptr [ebp - 0x11]
    X86_AT(c, 0xcbbe5u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFEFu)));
    // 0cbbe9  shl eax, 9
    X86_AT(c, 0xcbbe9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0cbbec  lea esi, [eax + 0x4cbf8]
    X86_AT(c, 0xcbbecu);
    c.r[6] = (uint32_t)(c.r[0] + 0x4CBF8u);
L_cbbf2:
    X86_TICK(c, 2);
    // 0cbbf2  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xcbbf2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
L_cbbf9:
    X86_TICK(c, 11);
    // 0cbbf9  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xcbbf9u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0cbbfc  cmp eax, 0x20
    X86_AT(c, 0xcbbfcu);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 0cbbff  jge 0xcbc1c
    X86_AT(c, 0xcbbffu);
    if (x86_cc(c, 13)) { goto L_cbc1c; }
    X86_TICK(c, 40);
    // 0cbc01  push esi
    X86_AT(c, 0xcbc01u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cbc02  push edi
    X86_AT(c, 0xcbc02u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cbc03  mov edi, ebx
    X86_AT(c, 0xcbc03u);
    c.r[7] = c.r[3];
    // 0cbc05  mov ecx, 4
    X86_AT(c, 0xcbc05u);
    c.r[1] = 0x4u;
    // 0cbc0a  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xcbc0au);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0cbc0c  pop edi
    X86_AT(c, 0xcbc0cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cbc0d  pop esi
    X86_AT(c, 0xcbc0du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cbc0e  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0xcbc0eu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0cbc11  add ebx, 0xb0
    X86_AT(c, 0xcbc11u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0xB0u, 0, 4); }
    // 0cbc17  add esi, 0x10
    X86_AT(c, 0xcbc17u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x10u, 0, 4); }
    // 0cbc1a  jmp 0xcbbf9
    X86_AT(c, 0xcbc1au);
    X86_POLL(c, 0xcbbf9u); goto L_cbbf9;
L_cbc1c:
    X86_TICK(c, 9);
    // 0cbc1c  inc edi
    X86_AT(c, 0xcbc1cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cbc1d  jmp 0xcbb70
    X86_AT(c, 0xcbc1du);
    X86_POLL(c, 0xcbb70u); goto L_cbb70;
L_cbc22:
    X86_TICK(c, 13);
    // 0cbc22  inc dword ptr [ebp - 4]
    X86_AT(c, 0xcbc22u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0cbc25  jmp 0xcbb64
    X86_AT(c, 0xcbc25u);
    X86_POLL(c, 0xcbb64u); goto L_cbb64;
L_cbc2a:
    X86_TICK(c, 7);
    // 0cbc2a  call 0xcbf60
    X86_AT(c, 0xcbc2au);
    push32(c, 0xcbc2fu); x86_call_known(c, 0xcbf60u, f_000cbf60); X86_RET(c, 0xcbc2fu);
    X86_TICK(c, 9);
    // 0cbc2f  push 1
    X86_AT(c, 0xcbc2fu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cbc31  call 0xc8f40
    X86_AT(c, 0xcbc31u);
    push32(c, 0xcbc36u); x86_call_known(c, 0xc8f40u, f_000c8f40); X86_RET(c, 0xcbc36u);
    X86_TICK(c, 14);
    // 0cbc36  add esp, 4
    X86_AT(c, 0xcbc36u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cbc39  cmp dword ptr [ebp + 0x10], 1
    X86_AT(c, 0xcbc39u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 4);
    // 0cbc3d  jne 0xcbced
    X86_AT(c, 0xcbc3du);
    if (x86_cc(c, 5)) { goto L_cbced; }
    X86_TICK(c, 6);
    // 0cbc43  mov dword ptr [0x4c5d8], 1
    X86_AT(c, 0xcbc43u);
    wr32((c.sbase[3] + (uint32_t)(0x4C5D8u)), 0x1u);
    // 0cbc4d  mov byte ptr [0x4c5e3], 0
    X86_AT(c, 0xcbc4du);
    wr8((c.sbase[3] + (uint32_t)(0x4C5E3u)), 0x0u);
    // 0cbc54  mov dword ptr [ebp - 0x10], 1
    X86_AT(c, 0xcbc54u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), 0x1u);
L_cbc5b:
    X86_TICK(c, 12);
    // 0cbc5b  cmp dword ptr [ebp - 0x10], 8
    X86_AT(c, 0xcbc5bu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0x8u, 0, 4);
    // 0cbc5f  jge 0xcbc96
    X86_AT(c, 0xcbc5fu);
    if (x86_cc(c, 13)) { goto L_cbc96; }
    X86_TICK(c, 27);
    // 0cbc61  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xcbc61u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0cbc64  mov dword ptr [0x4c5dc], eax
    X86_AT(c, 0xcbc64u);
    wr32((c.sbase[3] + (uint32_t)(0x4C5DCu)), c.r[0]);
    // 0cbc69  sub edx, edx
    X86_AT(c, 0xcbc69u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0cbc6b  mov byte ptr [0x4c5e0], dl
    X86_AT(c, 0xcbc6bu);
    wr8((c.sbase[3] + (uint32_t)(0x4C5E0u)), g8(c, 2));
    // 0cbc71  mov byte ptr [0x4c5e1], dl
    X86_AT(c, 0xcbc71u);
    wr8((c.sbase[3] + (uint32_t)(0x4C5E1u)), g8(c, 2));
    // 0cbc77  mov byte ptr [0x4c5e2], dl
    X86_AT(c, 0xcbc77u);
    wr8((c.sbase[3] + (uint32_t)(0x4C5E2u)), g8(c, 2));
    // 0cbc7d  push 0x4c5d8
    X86_AT(c, 0xcbc7du);
    { uint32_t v = 0x4C5D8u; push32(c, v); }
    // 0cbc82  push 1
    X86_AT(c, 0xcbc82u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cbc84  push 0x4bfd8
    X86_AT(c, 0xcbc84u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0cbc89  call 0x19c
    X86_AT(c, 0xcbc89u);
    push32(c, 0xcbc8eu); x86_call_known(c, 0x19cu, f_0000019c); X86_RET(c, 0xcbc8eu);
    X86_TICK(c, 15);
    // 0cbc8e  inc dword ptr [ebp - 0x10]
    X86_AT(c, 0xcbc8eu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0cbc91  add esp, 0xc
    X86_AT(c, 0xcbc91u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cbc94  jmp 0xcbc5b
    X86_AT(c, 0xcbc94u);
    X86_POLL(c, 0xcbc5bu); goto L_cbc5b;
L_cbc96:
    X86_TICK(c, 25);
    // 0cbc96  mov dword ptr [0x4c5d8], 0x92550
    X86_AT(c, 0xcbc96u);
    wr32((c.sbase[3] + (uint32_t)(0x4C5D8u)), 0x92550u);
    // 0cbca0  mov word ptr [0x4c5dc], 0x14
    X86_AT(c, 0xcbca0u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DCu)), 0x14u);
    // 0cbca9  mov word ptr [0x4c5de], 0x40
    X86_AT(c, 0xcbca9u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DEu)), 0x40u);
    // 0cbcb2  mov word ptr [0x4c5e0], 0x60
    X86_AT(c, 0xcbcb2u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5E0u)), 0x60u);
    // 0cbcbb  mov word ptr [0x4c5e2], 0x19f
    X86_AT(c, 0xcbcbbu);
    wr16((c.sbase[3] + (uint32_t)(0x4C5E2u)), 0x19Fu);
    // 0cbcc4  mov word ptr [0x4c5e4], 0x1bf
    X86_AT(c, 0xcbcc4u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5E4u)), 0x1BFu);
    // 0cbccd  push 0x4c5d8
    X86_AT(c, 0xcbccdu);
    { uint32_t v = 0x4C5D8u; push32(c, v); }
    // 0cbcd2  push 0
    X86_AT(c, 0xcbcd2u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cbcd4  push 0x4bfd8
    X86_AT(c, 0xcbcd4u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0cbcd9  call 0x5c4
    X86_AT(c, 0xcbcd9u);
    push32(c, 0xcbcdeu); x86_call_known(c, 0x5c4u, f_000005c4); X86_RET(c, 0xcbcdeu);
    X86_TICK(c, 9);
    // 0cbcde  push 0x1194
    X86_AT(c, 0xcbcdeu);
    { uint32_t v = 0x1194u; push32(c, v); }
    // 0cbce3  call 0xcb22c
    X86_AT(c, 0xcbce3u);
    push32(c, 0xcbce8u); x86_call_known(c, 0xcb22cu, f_000cb22c); X86_RET(c, 0xcbce8u);
    X86_TICK(c, 9);
    // 0cbce8  add esp, 0x10
    X86_AT(c, 0xcbce8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0cbceb  jmp 0xcbd38
    X86_AT(c, 0xcbcebu);
    goto L_cbd38;
L_cbced:
    X86_TICK(c, 25);
    // 0cbced  mov dword ptr [0x4c5d8], 0x92550
    X86_AT(c, 0xcbcedu);
    wr32((c.sbase[3] + (uint32_t)(0x4C5D8u)), 0x92550u);
    // 0cbcf7  mov word ptr [0x4c5dc], 0x14
    X86_AT(c, 0xcbcf7u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DCu)), 0x14u);
    // 0cbd00  mov word ptr [0x4c5de], 0x40
    X86_AT(c, 0xcbd00u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DEu)), 0x40u);
    // 0cbd09  mov word ptr [0x4c5e0], 0x60
    X86_AT(c, 0xcbd09u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5E0u)), 0x60u);
    // 0cbd12  mov word ptr [0x4c5e2], 0x19f
    X86_AT(c, 0xcbd12u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5E2u)), 0x19Fu);
    // 0cbd1b  mov word ptr [0x4c5e4], 0x1bf
    X86_AT(c, 0xcbd1bu);
    wr16((c.sbase[3] + (uint32_t)(0x4C5E4u)), 0x1BFu);
    // 0cbd24  push 0x4c5d8
    X86_AT(c, 0xcbd24u);
    { uint32_t v = 0x4C5D8u; push32(c, v); }
    // 0cbd29  push 0
    X86_AT(c, 0xcbd29u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cbd2b  push 0x4bfd8
    X86_AT(c, 0xcbd2bu);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0cbd30  call 0x5c4
    X86_AT(c, 0xcbd30u);
    push32(c, 0xcbd35u); x86_call_known(c, 0x5c4u, f_000005c4); X86_RET(c, 0xcbd35u);
    X86_TICK(c, 2);
    // 0cbd35  add esp, 0xc
    X86_AT(c, 0xcbd35u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_cbd38:
    X86_TICK(c, 9);
    // 0cbd38  push 0
    X86_AT(c, 0xcbd38u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cbd3a  call 0xc8f40
    X86_AT(c, 0xcbd3au);
    push32(c, 0xcbd3fu); x86_call_known(c, 0xc8f40u, f_000c8f40); X86_RET(c, 0xcbd3fu);
    X86_TICK(c, 30);
    // 0cbd3f  add esp, 4
    X86_AT(c, 0xcbd3fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cbd42  pop edi
    X86_AT(c, 0xcbd42u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cbd43  pop esi
    X86_AT(c, 0xcbd43u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cbd44  pop ebx
    X86_AT(c, 0xcbd44u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cbd45  leave 
    X86_AT(c, 0xcbd45u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cbd46  ret 
    X86_AT(c, 0xcbd46u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcba8cu, "ran off the end of a function");
}
void f_000cbd48(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0cbd48  mov word ptr [0xa1b74], 0xffff
    X86_AT(c, 0xcbd48u);
    wr16((c.sbase[3] + (uint32_t)(0xA1B74u)), 0xFFFFu);
    // 0cbd51  push 0
    X86_AT(c, 0xcbd51u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cbd53  push 0x18d
    X86_AT(c, 0xcbd53u);
    { uint32_t v = 0x18Du; push32(c, v); }
    // 0cbd58  push 0x168
    X86_AT(c, 0xcbd58u);
    { uint32_t v = 0x168u; push32(c, v); }
    // 0cbd5d  push 0x30
    X86_AT(c, 0xcbd5du);
    { uint32_t v = 0x30u; push32(c, v); }
    // 0cbd5f  push 0xb
    X86_AT(c, 0xcbd5fu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0cbd61  call 0xc95ec
    X86_AT(c, 0xcbd61u);
    push32(c, 0xcbd66u); x86_call_known(c, 0xc95ecu, f_000c95ec); X86_RET(c, 0xcbd66u);
    X86_TICK(c, 9);
    // 0cbd66  push 0
    X86_AT(c, 0xcbd66u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cbd68  call 0xc8f54
    X86_AT(c, 0xcbd68u);
    push32(c, 0xcbd6du); x86_call_known(c, 0xc8f54u, f_000c8f54); X86_RET(c, 0xcbd6du);
    X86_TICK(c, 9);
    // 0cbd6d  push 1
    X86_AT(c, 0xcbd6du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cbd6f  call 0xc8f40
    X86_AT(c, 0xcbd6fu);
    push32(c, 0xcbd74u); x86_call_known(c, 0xc8f40u, f_000c8f40); X86_RET(c, 0xcbd74u);
    X86_TICK(c, 17);
    // 0cbd74  push 0
    X86_AT(c, 0xcbd74u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cbd76  push 0x1bf
    X86_AT(c, 0xcbd76u);
    { uint32_t v = 0x1BFu; push32(c, v); }
    // 0cbd7b  push 0x19f
    X86_AT(c, 0xcbd7bu);
    { uint32_t v = 0x19Fu; push32(c, v); }
    // 0cbd80  push 0x60
    X86_AT(c, 0xcbd80u);
    { uint32_t v = 0x60u; push32(c, v); }
    // 0cbd82  push 0x40
    X86_AT(c, 0xcbd82u);
    { uint32_t v = 0x40u; push32(c, v); }
    // 0cbd84  call 0xc95ec
    X86_AT(c, 0xcbd84u);
    push32(c, 0xcbd89u); x86_call_known(c, 0xc95ecu, f_000c95ec); X86_RET(c, 0xcbd89u);
    X86_TICK(c, 9);
    // 0cbd89  push 0
    X86_AT(c, 0xcbd89u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cbd8b  call 0xc8f40
    X86_AT(c, 0xcbd8bu);
    push32(c, 0xcbd90u); x86_call_known(c, 0xc8f40u, f_000c8f40); X86_RET(c, 0xcbd90u);
    X86_TICK(c, 9);
    // 0cbd90  push 2
    X86_AT(c, 0xcbd90u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cbd92  call 0xc8f54
    X86_AT(c, 0xcbd92u);
    push32(c, 0xcbd97u); x86_call_known(c, 0xc8f54u, f_000c8f54); X86_RET(c, 0xcbd97u);
    X86_TICK(c, 7);
    // 0cbd97  call 0xc6094
    X86_AT(c, 0xcbd97u);
    push32(c, 0xcbd9cu); x86_call_known(c, 0xc6094u, f_000c6094); X86_RET(c, 0xcbd9cu);
    X86_TICK(c, 12);
    // 0cbd9c  add esp, 0x38
    X86_AT(c, 0xcbd9cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 0cbd9f  ret 
    X86_AT(c, 0xcbd9fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcbd48u, "ran off the end of a function");
}
void f_000cbda0(X86Cpu& c) {
    X86_TICK(c, 41);
    // 0cbda0  push ebp
    X86_AT(c, 0xcbda0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cbda1  mov ebp, esp
    X86_AT(c, 0xcbda1u);
    c.r[5] = c.r[4];
    // 0cbda3  push ebx
    X86_AT(c, 0xcbda3u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cbda4  push esi
    X86_AT(c, 0xcbda4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cbda5  push edi
    X86_AT(c, 0xcbda5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cbda6  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xcbda6u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cbda9  mov esi, dword ptr [edi]
    X86_AT(c, 0xcbda9u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[7])));
    // 0cbdab  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xcbdabu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0cbdae  mov ebx, dword ptr [eax]
    X86_AT(c, 0xcbdaeu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0cbdb0  movzx edx, byte ptr [ebp + 0x10]
    X86_AT(c, 0xcbdb0u);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0cbdb4  sub edx, 3
    X86_AT(c, 0xcbdb4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x3u, 0, 4); }
    // 0cbdb7  cmp edx, 4
    X86_AT(c, 0xcbdb7u);
    (void)x86_sub(c, c.r[2], 0x4u, 0, 4);
    // 0cbdba  ja 0xcbe12
    X86_AT(c, 0xcbdbau);
    if (x86_cc(c, 7)) { goto L_cbe12; }
    X86_TICK(c, 7);
    // 0cbdbc  jmp dword ptr cs:[edx*4 + 0xcbdc4]
    X86_AT(c, 0xcbdbcu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xCBDC4u)));
      switch (t) {
      case 0xcbdd8u: goto L_cbdd8;
      case 0xcbde5u: goto L_cbde5;
      case 0xcbdf6u: goto L_cbdf6;
      case 0xcbe07u: goto L_cbe07;
      case 0xcbe12u: goto L_cbe12;
      default: x86_jump(c, t); return; } }
L_cbdd8:
    X86_TICK(c, 9);
    // 0cbdd8  dec ebx
    X86_AT(c, 0xcbdd8u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 0cbdd9  and ebx, ebx
    X86_AT(c, 0xcbdd9u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0cbddb  jge 0xcbe12
    X86_AT(c, 0xcbddbu);
    if (x86_cc(c, 13)) { goto L_cbe12; }
    X86_TICK(c, 9);
    // 0cbddd  add ebx, 0x9c
    X86_AT(c, 0xcbdddu);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x9Cu, 0, 4); }
    // 0cbde3  jmp 0xcbe12
    X86_AT(c, 0xcbde3u);
    goto L_cbe12;
L_cbde5:
    X86_TICK(c, 9);
    // 0cbde5  inc ebx
    X86_AT(c, 0xcbde5u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0cbde6  cmp ebx, 0x9b
    X86_AT(c, 0xcbde6u);
    (void)x86_sub(c, c.r[3], 0x9Bu, 0, 4);
    // 0cbdec  jle 0xcbe12
    X86_AT(c, 0xcbdecu);
    if (x86_cc(c, 14)) { goto L_cbe12; }
    X86_TICK(c, 9);
    // 0cbdee  sub ebx, 0x9c
    X86_AT(c, 0xcbdeeu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, 0x9Cu, 0, 4); }
    // 0cbdf4  jmp 0xcbe12
    X86_AT(c, 0xcbdf4u);
    goto L_cbe12;
L_cbdf6:
    X86_TICK(c, 9);
    // 0cbdf6  inc esi
    X86_AT(c, 0xcbdf6u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0cbdf7  cmp esi, 0xa7
    X86_AT(c, 0xcbdf7u);
    (void)x86_sub(c, c.r[6], 0xA7u, 0, 4);
    // 0cbdfd  jle 0xcbe12
    X86_AT(c, 0xcbdfdu);
    if (x86_cc(c, 14)) { goto L_cbe12; }
    X86_TICK(c, 9);
    // 0cbdff  sub esi, 0xa8
    X86_AT(c, 0xcbdffu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0xA8u, 0, 4); }
    // 0cbe05  jmp 0xcbe12
    X86_AT(c, 0xcbe05u);
    goto L_cbe12;
L_cbe07:
    X86_TICK(c, 9);
    // 0cbe07  dec esi
    X86_AT(c, 0xcbe07u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0cbe08  and esi, esi
    X86_AT(c, 0xcbe08u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0cbe0a  jge 0xcbe12
    X86_AT(c, 0xcbe0au);
    if (x86_cc(c, 13)) { goto L_cbe12; }
    X86_TICK(c, 2);
    // 0cbe0c  add esi, 0xa8
    X86_AT(c, 0xcbe0cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0xA8u, 0, 4); }
L_cbe12:
    X86_TICK(c, 11);
    // 0cbe12  push ebx
    X86_AT(c, 0xcbe12u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cbe13  push esi
    X86_AT(c, 0xcbe13u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cbe14  call 0xcbe44
    X86_AT(c, 0xcbe14u);
    push32(c, 0xcbe19u); x86_call_known(c, 0xcbe44u, f_000cbe44); X86_RET(c, 0xcbe19u);
    X86_TICK(c, 7);
    // 0cbe19  call 0xcbed4
    X86_AT(c, 0xcbe19u);
    push32(c, 0xcbe1eu); x86_call_known(c, 0xcbed4u, f_000cbed4); X86_RET(c, 0xcbe1eu);
    X86_TICK(c, 11);
    // 0cbe1e  push ebx
    X86_AT(c, 0xcbe1eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cbe1f  push esi
    X86_AT(c, 0xcbe1fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cbe20  call 0xc6fe0
    X86_AT(c, 0xcbe20u);
    push32(c, 0xcbe25u); x86_call_known(c, 0xc6fe0u, f_000c6fe0); X86_RET(c, 0xcbe25u);
    X86_TICK(c, 11);
    // 0cbe25  push ebx
    X86_AT(c, 0xcbe25u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cbe26  push esi
    X86_AT(c, 0xcbe26u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cbe27  call 0xc6e14
    X86_AT(c, 0xcbe27u);
    push32(c, 0xcbe2cu); x86_call_known(c, 0xc6e14u, f_000c6e14); X86_RET(c, 0xcbe2cu);
    X86_TICK(c, 13);
    // 0cbe2c  push 0
    X86_AT(c, 0xcbe2cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cbe2e  push ebx
    X86_AT(c, 0xcbe2eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cbe2f  push esi
    X86_AT(c, 0xcbe2fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cbe30  call 0xcba8c
    X86_AT(c, 0xcbe30u);
    push32(c, 0xcbe35u); x86_call_known(c, 0xcba8cu, f_000cba8c); X86_RET(c, 0xcbe35u);
    X86_TICK(c, 38);
    // 0cbe35  mov dword ptr [edi], esi
    X86_AT(c, 0xcbe35u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[6]);
    // 0cbe37  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xcbe37u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0cbe3a  mov dword ptr [eax], ebx
    X86_AT(c, 0xcbe3au);
    wr32((c.sbase[3] + (uint32_t)(c.r[0])), c.r[3]);
    // 0cbe3c  add esp, 0x24
    X86_AT(c, 0xcbe3cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
    // 0cbe3f  pop edi
    X86_AT(c, 0xcbe3fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cbe40  pop esi
    X86_AT(c, 0xcbe40u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cbe41  pop ebx
    X86_AT(c, 0xcbe41u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cbe42  leave 
    X86_AT(c, 0xcbe42u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cbe43  ret 
    X86_AT(c, 0xcbe43u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcbda0u, "ran off the end of a function");
}
void f_000cbe44(X86Cpu& c) {
    X86_TICK(c, 34);
    // 0cbe44  push ebp
    X86_AT(c, 0xcbe44u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cbe45  mov ebp, esp
    X86_AT(c, 0xcbe45u);
    c.r[5] = c.r[4];
    // 0cbe47  push eax
    X86_AT(c, 0xcbe47u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cbe48  push ebx
    X86_AT(c, 0xcbe48u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cbe49  push esi
    X86_AT(c, 0xcbe49u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cbe4a  push edi
    X86_AT(c, 0xcbe4au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cbe4b  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xcbe4bu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0cbe4e  sub dword ptr [ebp + 8], 5
    X86_AT(c, 0xcbe4eu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, 0x5u, 0, 4)); }
    // 0cbe52  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xcbe52u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cbe55  and eax, eax
    X86_AT(c, 0xcbe55u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cbe57  jge 0xcbe60
    X86_AT(c, 0xcbe57u);
    if (x86_cc(c, 13)) { goto L_cbe60; }
    X86_TICK(c, 7);
    // 0cbe59  add dword ptr [ebp + 8], 0xa8
    X86_AT(c, 0xcbe59u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xA8u, 0, 4)); }
L_cbe60:
    X86_TICK(c, 9);
    // 0cbe60  sub edi, 5
    X86_AT(c, 0xcbe60u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, 0x5u, 0, 4); }
    // 0cbe63  and edi, edi
    X86_AT(c, 0xcbe63u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0cbe65  jge 0xcbe6d
    X86_AT(c, 0xcbe65u);
    if (x86_cc(c, 13)) { goto L_cbe6d; }
    X86_TICK(c, 2);
    // 0cbe67  add edi, 0x9c
    X86_AT(c, 0xcbe67u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x9Cu, 0, 4); }
L_cbe6d:
    X86_TICK(c, 2);
    // 0cbe6d  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xcbe6du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_cbe74:
    X86_TICK(c, 12);
    // 0cbe74  cmp dword ptr [ebp - 4], 0xb
    X86_AT(c, 0xcbe74u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0xBu, 0, 4);
    // 0cbe78  jge 0xcbecd
    X86_AT(c, 0xcbe78u);
    if (x86_cc(c, 13)) { goto L_cbecd; }
    X86_TICK(c, 6);
    // 0cbe7a  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0xcbe7au);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cbe7d  sub esi, esi
    X86_AT(c, 0xcbe7du);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_cbe7f:
    X86_TICK(c, 7);
    // 0cbe7f  cmp esi, 0xb
    X86_AT(c, 0xcbe7fu);
    (void)x86_sub(c, c.r[6], 0xBu, 0, 4);
    // 0cbe82  jge 0xcbebb
    X86_AT(c, 0xcbe82u);
    if (x86_cc(c, 13)) { goto L_cbebb; }
    X86_TICK(c, 31);
    // 0cbe84  lea eax, [edi*8]
    X86_AT(c, 0xcbe84u);
    c.r[0] = (uint32_t)(c.r[7] * 8);
    // 0cbe8b  lea edx, [eax + eax*4]
    X86_AT(c, 0xcbe8bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0cbe8e  lea edx, [eax + edx*4]
    X86_AT(c, 0xcbe8eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0cbe91  add edx, ebx
    X86_AT(c, 0xcbe91u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[3], 0, 4); }
    // 0cbe93  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xcbe93u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0cbe96  lea ecx, [eax + eax*8]
    X86_AT(c, 0xcbe96u);
    c.r[1] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0cbe99  lea eax, [ecx + eax*2]
    X86_AT(c, 0xcbe99u);
    c.r[0] = (uint32_t)(c.r[1] + c.r[0] * 2);
    // 0cbe9c  lea ecx, [esi + eax*1]
    X86_AT(c, 0xcbe9cu);
    c.r[1] = (uint32_t)(c.r[6] + c.r[0]);
    // 0cbe9f  mov al, byte ptr [edx + 0x8bdf8]
    X86_AT(c, 0xcbe9fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0x8BDF8u))));
    // 0cbea5  mov byte ptr [ecx + 0x92458], al
    X86_AT(c, 0xcbea5u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0x92458u)), g8(c, 0));
    // 0cbeab  cmp ebx, 0xa7
    X86_AT(c, 0xcbeabu);
    (void)x86_sub(c, c.r[3], 0xA7u, 0, 4);
    // 0cbeb1  jne 0xcbeb7
    X86_AT(c, 0xcbeb1u);
    if (x86_cc(c, 5)) { goto L_cbeb7; }
    X86_TICK(c, 9);
    // 0cbeb3  sub ebx, ebx
    X86_AT(c, 0xcbeb3u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0cbeb5  jmp 0xcbeb8
    X86_AT(c, 0xcbeb5u);
    goto L_cbeb8;
L_cbeb7:
    X86_TICK(c, 2);
    // 0cbeb7  inc ebx
    X86_AT(c, 0xcbeb7u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
L_cbeb8:
    X86_TICK(c, 9);
    // 0cbeb8  inc esi
    X86_AT(c, 0xcbeb8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0cbeb9  jmp 0xcbe7f
    X86_AT(c, 0xcbeb9u);
    X86_POLL(c, 0xcbe7fu); goto L_cbe7f;
L_cbebb:
    X86_TICK(c, 7);
    // 0cbebb  cmp edi, 0x9b
    X86_AT(c, 0xcbebbu);
    (void)x86_sub(c, c.r[7], 0x9Bu, 0, 4);
    // 0cbec1  jne 0xcbec7
    X86_AT(c, 0xcbec1u);
    if (x86_cc(c, 5)) { goto L_cbec7; }
    X86_TICK(c, 9);
    // 0cbec3  sub edi, edi
    X86_AT(c, 0xcbec3u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0cbec5  jmp 0xcbec8
    X86_AT(c, 0xcbec5u);
    goto L_cbec8;
L_cbec7:
    X86_TICK(c, 2);
    // 0cbec7  inc edi
    X86_AT(c, 0xcbec7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
L_cbec8:
    X86_TICK(c, 13);
    // 0cbec8  inc dword ptr [ebp - 4]
    X86_AT(c, 0xcbec8u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0cbecb  jmp 0xcbe74
    X86_AT(c, 0xcbecbu);
    X86_POLL(c, 0xcbe74u); goto L_cbe74;
L_cbecd:
    X86_TICK(c, 28);
    // 0cbecd  pop edi
    X86_AT(c, 0xcbecdu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cbece  pop esi
    X86_AT(c, 0xcbeceu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cbecf  pop ebx
    X86_AT(c, 0xcbecfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cbed0  leave 
    X86_AT(c, 0xcbed0u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cbed1  ret 
    X86_AT(c, 0xcbed1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcbe44u, "ran off the end of a function");
}
void f_000cbed4(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0cbed4  push ebp
    X86_AT(c, 0xcbed4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cbed5  mov ebp, esp
    X86_AT(c, 0xcbed5u);
    c.r[5] = c.r[4];
    // 0cbed7  sub esp, 8
    X86_AT(c, 0xcbed7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0cbeda  push ebx
    X86_AT(c, 0xcbedau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cbedb  push esi
    X86_AT(c, 0xcbedbu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cbedc  push edi
    X86_AT(c, 0xcbedcu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cbedd  mov word ptr [ebp - 2], 0
    X86_AT(c, 0xcbeddu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), 0x0u);
L_cbee3:
    X86_TICK(c, 12);
    // 0cbee3  cmp word ptr [ebp - 2], 0xb
    X86_AT(c, 0xcbee3u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0xBu, 0, 2);
    // 0cbee8  jge 0xcbf4c
    X86_AT(c, 0xcbee8u);
    if (x86_cc(c, 13)) { goto L_cbf4c; }
    X86_TICK(c, 2);
    // 0cbeea  sub ebx, ebx
    X86_AT(c, 0xcbeeau);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_cbeec:
    X86_TICK(c, 7);
    // 0cbeec  cmp bx, 0xb
    X86_AT(c, 0xcbeecu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0xBu, 0, 2);
    // 0cbef0  jge 0xcbf46
    X86_AT(c, 0xcbef0u);
    if (x86_cc(c, 13)) { goto L_cbf46; }
    X86_TICK(c, 8);
    // 0cbef2  mov edi, ebx
    X86_AT(c, 0xcbef2u);
    c.r[7] = c.r[3];
    // 0cbef4  mov si, word ptr [ebp - 2]
    X86_AT(c, 0xcbef4u);
    s16(c, 6, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))));
    // 0cbef8  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xcbef8u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
L_cbeff:
    X86_TICK(c, 12);
    // 0cbeff  cmp dword ptr [ebp - 8], 0
    X86_AT(c, 0xcbeffu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x0u, 0, 4);
    // 0cbf03  jne 0xcbf43
    X86_AT(c, 0xcbf03u);
    if (x86_cc(c, 5)) { goto L_cbf43; }
    X86_TICK(c, 27);
    // 0cbf05  mov eax, 0x43fd4
    X86_AT(c, 0xcbf05u);
    c.r[0] = 0x43FD4u;
    // 0cbf0a  movsx edx, di
    X86_AT(c, 0xcbf0au);
    c.r[2] = (uint32_t)(int32_t)(int16_t)(c.r[7] & 0xFFFFu);
    // 0cbf0d  add di, word ptr [eax + edx*2 + 0x5dcd0]
    X86_AT(c, 0xcbf0du);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] * 2 + 0x5DCD0u))), 0, 2)); }
    // 0cbf15  movsx edx, si
    X86_AT(c, 0xcbf15u);
    c.r[2] = (uint32_t)(int32_t)(int16_t)(c.r[6] & 0xFFFFu);
    // 0cbf18  add si, word ptr [eax + edx*2 + 0x5dcd0]
    X86_AT(c, 0xcbf18u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] * 2 + 0x5DCD0u))), 0, 2)); }
    // 0cbf20  cmp di, 5
    X86_AT(c, 0xcbf20u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x5u, 0, 2);
    // 0cbf24  jne 0xcbeff
    X86_AT(c, 0xcbf24u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xcbeffu); goto L_cbeff; }
    X86_TICK(c, 7);
    // 0cbf26  cmp si, 5
    X86_AT(c, 0xcbf26u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x5u, 0, 2);
    // 0cbf2a  jne 0xcbeff
    X86_AT(c, 0xcbf2au);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xcbeffu); goto L_cbeff; }
    X86_TICK(c, 17);
    // 0cbf2c  movsx edx, word ptr [ebp - 2]
    X86_AT(c, 0xcbf2cu);
    c.r[2] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)));
    // 0cbf30  lea ecx, [edx + edx*8]
    X86_AT(c, 0xcbf30u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 0cbf33  lea edx, [ecx + edx*2]
    X86_AT(c, 0xcbf33u);
    c.r[2] = (uint32_t)(c.r[1] + c.r[2] * 2);
    // 0cbf36  movsx ecx, bx
    X86_AT(c, 0xcbf36u);
    c.r[1] = (uint32_t)(int32_t)(int16_t)(c.r[3] & 0xFFFFu);
    // 0cbf39  add ecx, edx
    X86_AT(c, 0xcbf39u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[2], 0, 4); }
    // 0cbf3b  mov byte ptr [eax + ecx*1 + 0x4e500], 0
    X86_AT(c, 0xcbf3bu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x4E500u)), 0x0u);
L_cbf43:
    X86_TICK(c, 9);
    // 0cbf43  inc ebx
    X86_AT(c, 0xcbf43u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0cbf44  jmp 0xcbeec
    X86_AT(c, 0xcbf44u);
    X86_POLL(c, 0xcbeecu); goto L_cbeec;
L_cbf46:
    X86_TICK(c, 13);
    // 0cbf46  inc word ptr [ebp - 2]
    X86_AT(c, 0xcbf46u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0cbf4a  jmp 0xcbee3
    X86_AT(c, 0xcbf4au);
    X86_POLL(c, 0xcbee3u); goto L_cbee3;
L_cbf4c:
    X86_TICK(c, 28);
    // 0cbf4c  pop edi
    X86_AT(c, 0xcbf4cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cbf4d  pop esi
    X86_AT(c, 0xcbf4du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cbf4e  pop ebx
    X86_AT(c, 0xcbf4eu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cbf4f  leave 
    X86_AT(c, 0xcbf4fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cbf50  ret 
    X86_AT(c, 0xcbf50u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcbed4u, "ran off the end of a function");
}
void f_000cbf54(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0cbf54  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0xcbf54u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0cbf58  mov dword ptr [0xa1b70], eax
    X86_AT(c, 0xcbf58u);
    wr32((c.sbase[3] + (uint32_t)(0xA1B70u)), c.r[0]);
    // 0cbf5d  ret 
    X86_AT(c, 0xcbf5du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcbf54u, "ran off the end of a function");
}
void f_000cbf60(X86Cpu& c) {
    X86_TICK(c, 82);
    // 0cbf60  push ebp
    X86_AT(c, 0xcbf60u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cbf61  mov ebp, esp
    X86_AT(c, 0xcbf61u);
    c.r[5] = c.r[4];
    // 0cbf63  sub esp, 0x30
    X86_AT(c, 0xcbf63u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x30u, 0, 4); }
    // 0cbf66  push ebx
    X86_AT(c, 0xcbf66u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cbf67  push esi
    X86_AT(c, 0xcbf67u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cbf68  push edi
    X86_AT(c, 0xcbf68u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cbf69  mov eax, dword ptr [0xa1b70]
    X86_AT(c, 0xcbf69u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA1B70u)));
    // 0cbf6e  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xcbf6eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0cbf71  add dword ptr [ebp - 0x14], 4
    X86_AT(c, 0xcbf71u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0cbf75  mov eax, dword ptr [eax]
    X86_AT(c, 0xcbf75u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0cbf77  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xcbf77u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0cbf7a  mov edx, dword ptr [ebp - 0x14]
    X86_AT(c, 0xcbf7au);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0cbf7d  add dword ptr [ebp - 0x14], 4
    X86_AT(c, 0xcbf7du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0cbf81  mov edx, dword ptr [edx]
    X86_AT(c, 0xcbf81u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[2])));
    // 0cbf83  mov dword ptr [ebp - 0x18], edx
    X86_AT(c, 0xcbf83u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), c.r[2]);
    // 0cbf86  mov edx, dword ptr [ebp - 0x14]
    X86_AT(c, 0xcbf86u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0cbf89  add dword ptr [ebp - 0x14], 4
    X86_AT(c, 0xcbf89u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0cbf8d  mov edx, dword ptr [edx]
    X86_AT(c, 0xcbf8du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[2])));
    // 0cbf8f  mov dword ptr [ebp - 0x1c], edx
    X86_AT(c, 0xcbf8fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[2]);
    // 0cbf92  mov edx, dword ptr [ebp - 0x14]
    X86_AT(c, 0xcbf92u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0cbf95  add dword ptr [ebp - 0x14], 4
    X86_AT(c, 0xcbf95u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0cbf99  mov edx, dword ptr [edx]
    X86_AT(c, 0xcbf99u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[2])));
    // 0cbf9b  mov dword ptr [ebp - 0x20], edx
    X86_AT(c, 0xcbf9bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)), c.r[2]);
L_cbf9e:
    X86_TICK(c, 18);
    // 0cbf9e  dec dword ptr [ebp - 4]
    X86_AT(c, 0xcbf9eu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0cbfa1  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0xcbfa1u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 0cbfa5  jle 0xcc0da
    X86_AT(c, 0xcbfa5u);
    if (x86_cc(c, 14)) { goto L_cc0da; }
    X86_TICK(c, 18);
    // 0cbfab  mov dword ptr [ebp - 0x2c], 0xffffffff
    X86_AT(c, 0xcbfabu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)), 0xFFFFFFFFu);
    // 0cbfb2  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xcbfb2u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0cbfb5  cmp dword ptr [eax], 0
    X86_AT(c, 0xcbfb5u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0]))), 0x0u, 0, 4);
    // 0cbfb8  jge 0xcbfce
    X86_AT(c, 0xcbfb8u);
    if (x86_cc(c, 13)) { goto L_cbfce; }
    X86_TICK(c, 9);
    // 0cbfba  push 0x2170
    X86_AT(c, 0xcbfbau);
    { uint32_t v = 0x2170u; push32(c, v); }
    // 0cbfbf  call 0xcc7bc
    X86_AT(c, 0xcbfbfu);
    push32(c, 0xcbfc4u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcbfc4u);
    X86_TICK(c, 4);
    // 0cbfc4  mov dword ptr [ebp - 0x2c], 0
    X86_AT(c, 0xcbfc4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)), 0x0u);
    // 0cbfcb  add esp, 4
    X86_AT(c, 0xcbfcbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_cbfce:
    X86_TICK(c, 33);
    // 0cbfce  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xcbfceu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0cbfd1  add dword ptr [ebp - 0x14], 4
    X86_AT(c, 0xcbfd1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0cbfd5  mov eax, dword ptr [eax]
    X86_AT(c, 0xcbfd5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0cbfd7  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xcbfd7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0cbfda  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xcbfdau);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0cbfdd  cmp dword ptr [eax], 0
    X86_AT(c, 0xcbfddu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0]))), 0x0u, 0, 4);
    // 0cbfe0  jge 0xcbff5
    X86_AT(c, 0xcbfe0u);
    if (x86_cc(c, 13)) { goto L_cbff5; }
    X86_TICK(c, 9);
    // 0cbfe2  push 0x2178
    X86_AT(c, 0xcbfe2u);
    { uint32_t v = 0x2178u; push32(c, v); }
    // 0cbfe7  call 0xcc7bc
    X86_AT(c, 0xcbfe7u);
    push32(c, 0xcbfecu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcbfecu);
    X86_TICK(c, 9);
    // 0cbfec  mov dword ptr [ebp - 0x2c], 0
    X86_AT(c, 0xcbfecu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)), 0x0u);
    // 0cbff3  jmp 0xcc005
    X86_AT(c, 0xcbff3u);
    goto L_cc005;
L_cbff5:
    X86_TICK(c, 12);
    // 0cbff5  cmp dword ptr [ebp - 0x2c], 0
    X86_AT(c, 0xcbff5u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u))), 0x0u, 0, 4);
    // 0cbff9  jne 0xcc008
    X86_AT(c, 0xcbff9u);
    if (x86_cc(c, 5)) { goto L_cc008; }
    X86_TICK(c, 9);
    // 0cbffb  push 0x2180
    X86_AT(c, 0xcbffbu);
    { uint32_t v = 0x2180u; push32(c, v); }
    // 0cc000  call 0xcc7bc
    X86_AT(c, 0xcc000u);
    push32(c, 0xcc005u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcc005u);
L_cc005:
    X86_TICK(c, 2);
    // 0cc005  add esp, 4
    X86_AT(c, 0xcc005u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_cc008:
    X86_TICK(c, 33);
    // 0cc008  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xcc008u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0cc00b  add dword ptr [ebp - 0x14], 4
    X86_AT(c, 0xcc00bu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0cc00f  mov eax, dword ptr [eax]
    X86_AT(c, 0xcc00fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0cc011  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xcc011u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 0cc014  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xcc014u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0cc017  cmp dword ptr [eax], 0
    X86_AT(c, 0xcc017u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0]))), 0x0u, 0, 4);
    // 0cc01a  jge 0xcc029
    X86_AT(c, 0xcc01au);
    if (x86_cc(c, 13)) { goto L_cc029; }
    X86_TICK(c, 16);
    // 0cc01c  mov dword ptr [ebp - 0x2c], 0
    X86_AT(c, 0xcc01cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)), 0x0u);
    // 0cc023  add dword ptr [ebp - 0x14], 4
    X86_AT(c, 0xcc023u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0cc027  jmp 0xcc03c
    X86_AT(c, 0xcc027u);
    goto L_cc03c;
L_cc029:
    X86_TICK(c, 12);
    // 0cc029  cmp dword ptr [ebp - 0x2c], 0
    X86_AT(c, 0xcc029u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u))), 0x0u, 0, 4);
    // 0cc02d  jne 0xcc03c
    X86_AT(c, 0xcc02du);
    if (x86_cc(c, 5)) { goto L_cc03c; }
    X86_TICK(c, 9);
    // 0cc02f  push 0x2188
    X86_AT(c, 0xcc02fu);
    { uint32_t v = 0x2188u; push32(c, v); }
    // 0cc034  call 0xcc7bc
    X86_AT(c, 0xcc034u);
    push32(c, 0xcc039u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcc039u);
    X86_TICK(c, 2);
    // 0cc039  add esp, 4
    X86_AT(c, 0xcc039u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_cc03c:
    X86_TICK(c, 12);
    // 0cc03c  cmp dword ptr [ebp - 0x2c], 0
    X86_AT(c, 0xcc03cu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u))), 0x0u, 0, 4);
    // 0cc040  je 0xcbf9e
    X86_AT(c, 0xcc040u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xcbf9eu); goto L_cbf9e; }
    X86_TICK(c, 65);
    // 0cc046  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xcc046u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0cc049  shl eax, 5
    X86_AT(c, 0xcc049u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[0] = r; }
    // 0cc04c  cdq 
    X86_AT(c, 0xcc04cu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0cc04d  sub eax, edx
    X86_AT(c, 0xcc04du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0cc04f  sar eax, 1
    X86_AT(c, 0xcc04fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0cc051  mov edx, dword ptr [ebp - 0x10]
    X86_AT(c, 0xcc051u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0cc054  mov dword ptr [ebp - 0x30], eax
    X86_AT(c, 0xcc054u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD0u)), c.r[0]);
    // 0cc057  lea eax, [edx + edx*4]
    X86_AT(c, 0xcc057u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0cc05a  lea eax, [edx + eax*2]
    X86_AT(c, 0xcc05au);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0cc05d  shl eax, 0xa
    X86_AT(c, 0xcc05du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[0] = r; }
    // 0cc060  cdq 
    X86_AT(c, 0xcc060u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0cc061  sub eax, edx
    X86_AT(c, 0xcc061u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0cc063  sar eax, 1
    X86_AT(c, 0xcc063u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0cc065  add eax, dword ptr [ebp - 0x30]
    X86_AT(c, 0xcc065u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD0u))), 0, 4); }
    // 0cc068  lea esi, [eax + 0x92550]
    X86_AT(c, 0xcc068u);
    c.r[6] = (uint32_t)(c.r[0] + 0x92550u);
    // 0cc06e  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xcc06eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0cc071  add dword ptr [ebp - 0x14], 4
    X86_AT(c, 0xcc071u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0cc075  mov eax, dword ptr [eax]
    X86_AT(c, 0xcc075u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0cc077  mov eax, dword ptr [eax*4 + 0xa1754]
    X86_AT(c, 0xcc077u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA1754u)));
    // 0cc07e  mov dword ptr [ebp - 0x28], eax
    X86_AT(c, 0xcc07eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)), c.r[0]);
    // 0cc081  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xcc081u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
L_cc088:
    X86_TICK(c, 12);
    // 0cc088  cmp dword ptr [ebp - 8], 0x20
    X86_AT(c, 0xcc088u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x20u, 0, 4);
    // 0cc08c  jge 0xcbf9e
    X86_AT(c, 0xcc08cu);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xcbf9eu); goto L_cbf9e; }
    X86_TICK(c, 2);
    // 0cc092  sub edi, edi
    X86_AT(c, 0xcc092u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_cc094:
    X86_TICK(c, 7);
    // 0cc094  cmp edi, 0x10
    X86_AT(c, 0xcc094u);
    (void)x86_sub(c, c.r[7], 0x10u, 0, 4);
    // 0cc097  jge 0xcc0cf
    X86_AT(c, 0xcc097u);
    if (x86_cc(c, 13)) { goto L_cc0cf; }
    X86_TICK(c, 17);
    // 0cc099  mov eax, dword ptr [ebp - 0x28]
    X86_AT(c, 0xcc099u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)));
    // 0cc09c  mov bl, byte ptr [eax]
    X86_AT(c, 0xcc09cu);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0cc09e  and bl, 0xf
    X86_AT(c, 0xcc09eu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xFu, 1)); }
    // 0cc0a1  and bl, bl
    X86_AT(c, 0xcc0a1u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0cc0a3  jne 0xcc0ab
    X86_AT(c, 0xcc0a3u);
    if (x86_cc(c, 5)) { goto L_cc0ab; }
    X86_TICK(c, 6);
    // 0cc0a5  mov bl, byte ptr [esi + edi*1]
    X86_AT(c, 0xcc0a5u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7]))));
    // 0cc0a8  and bl, 0xf
    X86_AT(c, 0xcc0a8u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xFu, 1)); }
L_cc0ab:
    X86_TICK(c, 25);
    // 0cc0ab  mov eax, dword ptr [ebp - 0x28]
    X86_AT(c, 0xcc0abu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)));
    // 0cc0ae  inc dword ptr [ebp - 0x28]
    X86_AT(c, 0xcc0aeu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0cc0b1  mov al, byte ptr [eax]
    X86_AT(c, 0xcc0b1u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0cc0b3  and al, 0xf0
    X86_AT(c, 0xcc0b3u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0cc0b5  mov byte ptr [ebp - 0x21], al
    X86_AT(c, 0xcc0b5u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDFu)), g8(c, 0));
    // 0cc0b8  and al, al
    X86_AT(c, 0xcc0b8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0cc0ba  jne 0xcc0c4
    X86_AT(c, 0xcc0bau);
    if (x86_cc(c, 5)) { goto L_cc0c4; }
    X86_TICK(c, 8);
    // 0cc0bc  mov al, byte ptr [esi + edi*1]
    X86_AT(c, 0xcc0bcu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7]))));
    // 0cc0bf  and al, 0xf0
    X86_AT(c, 0xcc0bfu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0cc0c1  mov byte ptr [ebp - 0x21], al
    X86_AT(c, 0xcc0c1u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDFu)), g8(c, 0));
L_cc0c4:
    X86_TICK(c, 19);
    // 0cc0c4  mov eax, ebx
    X86_AT(c, 0xcc0c4u);
    c.r[0] = c.r[3];
    // 0cc0c6  add al, byte ptr [ebp - 0x21]
    X86_AT(c, 0xcc0c6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDFu))), 0, 1)); }
    // 0cc0c9  mov byte ptr [esi + edi*1], al
    X86_AT(c, 0xcc0c9u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7])), g8(c, 0));
    // 0cc0cc  inc edi
    X86_AT(c, 0xcc0ccu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cc0cd  jmp 0xcc094
    X86_AT(c, 0xcc0cdu);
    X86_POLL(c, 0xcc094u); goto L_cc094;
L_cc0cf:
    X86_TICK(c, 15);
    // 0cc0cf  inc dword ptr [ebp - 8]
    X86_AT(c, 0xcc0cfu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0cc0d2  add esi, 0xb0
    X86_AT(c, 0xcc0d2u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0xB0u, 0, 4); }
    // 0cc0d8  jmp 0xcc088
    X86_AT(c, 0xcc0d8u);
    X86_POLL(c, 0xcc088u); goto L_cc088;
L_cc0da:
    X86_TICK(c, 54);
    // 0cc0da  mov eax, dword ptr [ebp - 0x18]
    X86_AT(c, 0xcc0dau);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)));
    // 0cc0dd  shl eax, 5
    X86_AT(c, 0xcc0ddu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[0] = r; }
    // 0cc0e0  cdq 
    X86_AT(c, 0xcc0e0u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0cc0e1  sub eax, edx
    X86_AT(c, 0xcc0e1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0cc0e3  sar eax, 1
    X86_AT(c, 0xcc0e3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0cc0e5  mov edx, dword ptr [ebp - 0x1c]
    X86_AT(c, 0xcc0e5u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)));
    // 0cc0e8  mov dword ptr [ebp - 0x30], eax
    X86_AT(c, 0xcc0e8u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD0u)), c.r[0]);
    // 0cc0eb  lea eax, [edx + edx*4]
    X86_AT(c, 0xcc0ebu);
    c.r[0] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0cc0ee  lea eax, [edx + eax*2]
    X86_AT(c, 0xcc0eeu);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0cc0f1  shl eax, 0xa
    X86_AT(c, 0xcc0f1u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[0] = r; }
    // 0cc0f4  cdq 
    X86_AT(c, 0xcc0f4u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0cc0f5  sub eax, edx
    X86_AT(c, 0xcc0f5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0cc0f7  sar eax, 1
    X86_AT(c, 0xcc0f7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0cc0f9  add eax, dword ptr [ebp - 0x30]
    X86_AT(c, 0xcc0f9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD0u))), 0, 4); }
    // 0cc0fc  lea esi, [eax + 0x92550]
    X86_AT(c, 0xcc0fcu);
    c.r[6] = (uint32_t)(c.r[0] + 0x92550u);
    // 0cc102  mov eax, dword ptr [ebp - 0x20]
    X86_AT(c, 0xcc102u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)));
    // 0cc105  mov eax, dword ptr [eax*4 + 0xa1754]
    X86_AT(c, 0xcc105u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA1754u)));
    // 0cc10c  mov dword ptr [ebp - 0x28], eax
    X86_AT(c, 0xcc10cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)), c.r[0]);
    // 0cc10f  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xcc10fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
L_cc116:
    X86_TICK(c, 12);
    // 0cc116  cmp dword ptr [ebp - 8], 0x20
    X86_AT(c, 0xcc116u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x20u, 0, 4);
    // 0cc11a  jge 0xcc164
    X86_AT(c, 0xcc11au);
    if (x86_cc(c, 13)) { goto L_cc164; }
    X86_TICK(c, 2);
    // 0cc11c  sub edi, edi
    X86_AT(c, 0xcc11cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_cc11e:
    X86_TICK(c, 7);
    // 0cc11e  cmp edi, 0x10
    X86_AT(c, 0xcc11eu);
    (void)x86_sub(c, c.r[7], 0x10u, 0, 4);
    // 0cc121  jge 0xcc159
    X86_AT(c, 0xcc121u);
    if (x86_cc(c, 13)) { goto L_cc159; }
    X86_TICK(c, 17);
    // 0cc123  mov eax, dword ptr [ebp - 0x28]
    X86_AT(c, 0xcc123u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)));
    // 0cc126  mov bl, byte ptr [eax]
    X86_AT(c, 0xcc126u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0cc128  and bl, 0xf
    X86_AT(c, 0xcc128u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xFu, 1)); }
    // 0cc12b  and bl, bl
    X86_AT(c, 0xcc12bu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0cc12d  jne 0xcc135
    X86_AT(c, 0xcc12du);
    if (x86_cc(c, 5)) { goto L_cc135; }
    X86_TICK(c, 6);
    // 0cc12f  mov bl, byte ptr [esi + edi*1]
    X86_AT(c, 0xcc12fu);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7]))));
    // 0cc132  and bl, 0xf
    X86_AT(c, 0xcc132u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xFu, 1)); }
L_cc135:
    X86_TICK(c, 25);
    // 0cc135  mov eax, dword ptr [ebp - 0x28]
    X86_AT(c, 0xcc135u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)));
    // 0cc138  inc dword ptr [ebp - 0x28]
    X86_AT(c, 0xcc138u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0cc13b  mov al, byte ptr [eax]
    X86_AT(c, 0xcc13bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0cc13d  and al, 0xf0
    X86_AT(c, 0xcc13du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0cc13f  mov byte ptr [ebp - 0x21], al
    X86_AT(c, 0xcc13fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDFu)), g8(c, 0));
    // 0cc142  and al, al
    X86_AT(c, 0xcc142u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0cc144  jne 0xcc14e
    X86_AT(c, 0xcc144u);
    if (x86_cc(c, 5)) { goto L_cc14e; }
    X86_TICK(c, 8);
    // 0cc146  mov al, byte ptr [esi + edi*1]
    X86_AT(c, 0xcc146u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7]))));
    // 0cc149  and al, 0xf0
    X86_AT(c, 0xcc149u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0cc14b  mov byte ptr [ebp - 0x21], al
    X86_AT(c, 0xcc14bu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDFu)), g8(c, 0));
L_cc14e:
    X86_TICK(c, 19);
    // 0cc14e  mov eax, ebx
    X86_AT(c, 0xcc14eu);
    c.r[0] = c.r[3];
    // 0cc150  add al, byte ptr [ebp - 0x21]
    X86_AT(c, 0xcc150u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDFu))), 0, 1)); }
    // 0cc153  mov byte ptr [esi + edi*1], al
    X86_AT(c, 0xcc153u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7])), g8(c, 0));
    // 0cc156  inc edi
    X86_AT(c, 0xcc156u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cc157  jmp 0xcc11e
    X86_AT(c, 0xcc157u);
    X86_POLL(c, 0xcc11eu); goto L_cc11e;
L_cc159:
    X86_TICK(c, 15);
    // 0cc159  inc dword ptr [ebp - 8]
    X86_AT(c, 0xcc159u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0cc15c  add esi, 0xb0
    X86_AT(c, 0xcc15cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0xB0u, 0, 4); }
    // 0cc162  jmp 0xcc116
    X86_AT(c, 0xcc162u);
    X86_POLL(c, 0xcc116u); goto L_cc116;
L_cc164:
    X86_TICK(c, 28);
    // 0cc164  pop edi
    X86_AT(c, 0xcc164u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cc165  pop esi
    X86_AT(c, 0xcc165u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cc166  pop ebx
    X86_AT(c, 0xcc166u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cc167  leave 
    X86_AT(c, 0xcc167u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cc168  ret 
    X86_AT(c, 0xcc168u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcbf60u, "ran off the end of a function");
}
void f_000cc240(X86Cpu& c) {
    X86_TICK(c, 4);
    // 0cc240  sub edx, edx
    X86_AT(c, 0xcc240u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0cc242  mov ecx, edx
    X86_AT(c, 0xcc242u);
    c.r[1] = c.r[2];
L_cc244:
    X86_TICK(c, 7);
    // 0cc244  cmp edx, 0x3f
    X86_AT(c, 0xcc244u);
    (void)x86_sub(c, c.r[2], 0x3Fu, 0, 4);
    // 0cc247  jg 0xcc25e
    X86_AT(c, 0xcc247u);
    if (x86_cc(c, 15)) { goto L_cc25e; }
    X86_TICK(c, 20);
    // 0cc249  mov eax, ecx
    X86_AT(c, 0xcc249u);
    c.r[0] = c.r[1];
    // 0cc24b  shl eax, 9
    X86_AT(c, 0xcc24bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0cc24e  add eax, 0x54bf8
    X86_AT(c, 0xcc24eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x54BF8u, 0, 4); }
    // 0cc253  mov dword ptr [edx*4 + 0xa1754], eax
    X86_AT(c, 0xcc253u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] * 4 + 0xA1754u)), c.r[0]);
    // 0cc25a  inc edx
    X86_AT(c, 0xcc25au);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0cc25b  inc ecx
    X86_AT(c, 0xcc25bu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0cc25c  jmp 0xcc244
    X86_AT(c, 0xcc25cu);
    X86_POLL(c, 0xcc244u); goto L_cc244;
L_cc25e:
    X86_TICK(c, 90);
    // 0cc25e  mov dword ptr [0xa18b4], 0x5fbf8
    X86_AT(c, 0xcc25eu);
    wr32((c.sbase[3] + (uint32_t)(0xA18B4u)), 0x5FBF8u);
    // 0cc268  mov dword ptr [0xa18bc], 0x5fff8
    X86_AT(c, 0xcc268u);
    wr32((c.sbase[3] + (uint32_t)(0xA18BCu)), 0x5FFF8u);
    // 0cc272  mov dword ptr [0xa18c4], 0x603f8
    X86_AT(c, 0xcc272u);
    wr32((c.sbase[3] + (uint32_t)(0xA18C4u)), 0x603F8u);
    // 0cc27c  mov dword ptr [0xa18c8], 0x605f8
    X86_AT(c, 0xcc27cu);
    wr32((c.sbase[3] + (uint32_t)(0xA18C8u)), 0x605F8u);
    // 0cc286  mov dword ptr [0xa18cc], 0x607f8
    X86_AT(c, 0xcc286u);
    wr32((c.sbase[3] + (uint32_t)(0xA18CCu)), 0x607F8u);
    // 0cc290  mov dword ptr [0xa18d0], 0x609f8
    X86_AT(c, 0xcc290u);
    wr32((c.sbase[3] + (uint32_t)(0xA18D0u)), 0x609F8u);
    // 0cc29a  mov dword ptr [0xa18e4], 0x613f8
    X86_AT(c, 0xcc29au);
    wr32((c.sbase[3] + (uint32_t)(0xA18E4u)), 0x613F8u);
    // 0cc2a4  mov dword ptr [0xa18e8], 0x615f8
    X86_AT(c, 0xcc2a4u);
    wr32((c.sbase[3] + (uint32_t)(0xA18E8u)), 0x615F8u);
    // 0cc2ae  mov dword ptr [0xa18ec], 0x617f8
    X86_AT(c, 0xcc2aeu);
    wr32((c.sbase[3] + (uint32_t)(0xA18ECu)), 0x617F8u);
    // 0cc2b8  mov dword ptr [0xa18f0], 0x619f8
    X86_AT(c, 0xcc2b8u);
    wr32((c.sbase[3] + (uint32_t)(0xA18F0u)), 0x619F8u);
    // 0cc2c2  mov dword ptr [0xa18f4], 0x61bf8
    X86_AT(c, 0xcc2c2u);
    wr32((c.sbase[3] + (uint32_t)(0xA18F4u)), 0x61BF8u);
    // 0cc2cc  mov dword ptr [0xa18f8], 0x61df8
    X86_AT(c, 0xcc2ccu);
    wr32((c.sbase[3] + (uint32_t)(0xA18F8u)), 0x61DF8u);
    // 0cc2d6  mov dword ptr [0xa18fc], 0x61ff8
    X86_AT(c, 0xcc2d6u);
    wr32((c.sbase[3] + (uint32_t)(0xA18FCu)), 0x61FF8u);
    // 0cc2e0  mov dword ptr [0xa1900], 0x621f8
    X86_AT(c, 0xcc2e0u);
    wr32((c.sbase[3] + (uint32_t)(0xA1900u)), 0x621F8u);
    // 0cc2ea  mov dword ptr [0xa1904], 0x623f8
    X86_AT(c, 0xcc2eau);
    wr32((c.sbase[3] + (uint32_t)(0xA1904u)), 0x623F8u);
    // 0cc2f4  mov dword ptr [0xa1908], 0x625f8
    X86_AT(c, 0xcc2f4u);
    wr32((c.sbase[3] + (uint32_t)(0xA1908u)), 0x625F8u);
    // 0cc2fe  mov dword ptr [0xa190c], 0x627f8
    X86_AT(c, 0xcc2feu);
    wr32((c.sbase[3] + (uint32_t)(0xA190Cu)), 0x627F8u);
    // 0cc308  mov dword ptr [0xa1910], 0x629f8
    X86_AT(c, 0xcc308u);
    wr32((c.sbase[3] + (uint32_t)(0xA1910u)), 0x629F8u);
    // 0cc312  mov dword ptr [0xa18d4], 0x60bf8
    X86_AT(c, 0xcc312u);
    wr32((c.sbase[3] + (uint32_t)(0xA18D4u)), 0x60BF8u);
    // 0cc31c  mov dword ptr [0xa18d8], 0x60df8
    X86_AT(c, 0xcc31cu);
    wr32((c.sbase[3] + (uint32_t)(0xA18D8u)), 0x60DF8u);
    // 0cc326  mov dword ptr [0xa18dc], 0x60ff8
    X86_AT(c, 0xcc326u);
    wr32((c.sbase[3] + (uint32_t)(0xA18DCu)), 0x60FF8u);
    // 0cc330  mov dword ptr [0xa18e0], 0x611f8
    X86_AT(c, 0xcc330u);
    wr32((c.sbase[3] + (uint32_t)(0xA18E0u)), 0x611F8u);
    // 0cc33a  mov dword ptr [0xa1914], 0x62bf8
    X86_AT(c, 0xcc33au);
    wr32((c.sbase[3] + (uint32_t)(0xA1914u)), 0x62BF8u);
    // 0cc344  mov dword ptr [0xa1918], 0x62df8
    X86_AT(c, 0xcc344u);
    wr32((c.sbase[3] + (uint32_t)(0xA1918u)), 0x62DF8u);
    // 0cc34e  mov dword ptr [0xa1924], 0x633f8
    X86_AT(c, 0xcc34eu);
    wr32((c.sbase[3] + (uint32_t)(0xA1924u)), 0x633F8u);
    // 0cc358  mov dword ptr [0xa1928], 0x635f8
    X86_AT(c, 0xcc358u);
    wr32((c.sbase[3] + (uint32_t)(0xA1928u)), 0x635F8u);
    // 0cc362  mov dword ptr [0xa1854], 0x5cbf8
    X86_AT(c, 0xcc362u);
    wr32((c.sbase[3] + (uint32_t)(0xA1854u)), 0x5CBF8u);
    // 0cc36c  mov dword ptr [0xa1858], 0x5cdf8
    X86_AT(c, 0xcc36cu);
    wr32((c.sbase[3] + (uint32_t)(0xA1858u)), 0x5CDF8u);
    // 0cc376  mov dword ptr [0xa185c], 0x5cff8
    X86_AT(c, 0xcc376u);
    wr32((c.sbase[3] + (uint32_t)(0xA185Cu)), 0x5CFF8u);
    // 0cc380  mov dword ptr [0xa1860], 0x5d1f8
    X86_AT(c, 0xcc380u);
    wr32((c.sbase[3] + (uint32_t)(0xA1860u)), 0x5D1F8u);
    // 0cc38a  mov dword ptr [0xa1864], 0x5d3f8
    X86_AT(c, 0xcc38au);
    wr32((c.sbase[3] + (uint32_t)(0xA1864u)), 0x5D3F8u);
    // 0cc394  mov dword ptr [0xa1868], 0x5d5f8
    X86_AT(c, 0xcc394u);
    wr32((c.sbase[3] + (uint32_t)(0xA1868u)), 0x5D5F8u);
    // 0cc39e  mov dword ptr [0xa186c], 0x5d7f8
    X86_AT(c, 0xcc39eu);
    wr32((c.sbase[3] + (uint32_t)(0xA186Cu)), 0x5D7F8u);
    // 0cc3a8  mov dword ptr [0xa1870], 0x5d9f8
    X86_AT(c, 0xcc3a8u);
    wr32((c.sbase[3] + (uint32_t)(0xA1870u)), 0x5D9F8u);
    // 0cc3b2  mov dword ptr [0xa1874], 0x5dbf8
    X86_AT(c, 0xcc3b2u);
    wr32((c.sbase[3] + (uint32_t)(0xA1874u)), 0x5DBF8u);
    // 0cc3bc  mov dword ptr [0xa1878], 0x5ddf8
    X86_AT(c, 0xcc3bcu);
    wr32((c.sbase[3] + (uint32_t)(0xA1878u)), 0x5DDF8u);
    // 0cc3c6  mov dword ptr [0xa187c], 0x5dff8
    X86_AT(c, 0xcc3c6u);
    wr32((c.sbase[3] + (uint32_t)(0xA187Cu)), 0x5DFF8u);
    // 0cc3d0  mov dword ptr [0xa1880], 0x5e1f8
    X86_AT(c, 0xcc3d0u);
    wr32((c.sbase[3] + (uint32_t)(0xA1880u)), 0x5E1F8u);
    // 0cc3da  mov dword ptr [0xa1884], 0x5e3f8
    X86_AT(c, 0xcc3dau);
    wr32((c.sbase[3] + (uint32_t)(0xA1884u)), 0x5E3F8u);
    // 0cc3e4  mov dword ptr [0xa1888], 0x5e5f8
    X86_AT(c, 0xcc3e4u);
    wr32((c.sbase[3] + (uint32_t)(0xA1888u)), 0x5E5F8u);
    // 0cc3ee  ret 
    X86_AT(c, 0xcc3eeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcc240u, "ran off the end of a function");
}
void f_000cc3f0(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0cc3f0  push ebp
    X86_AT(c, 0xcc3f0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cc3f1  mov ebp, esp
    X86_AT(c, 0xcc3f1u);
    c.r[5] = c.r[4];
    // 0cc3f3  sub esp, 0x10
    X86_AT(c, 0xcc3f3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x10u, 0, 4); }
    // 0cc3f6  push ebx
    X86_AT(c, 0xcc3f6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cc3f7  push esi
    X86_AT(c, 0xcc3f7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cc3f8  push edi
    X86_AT(c, 0xcc3f8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cc3f9  cmp word ptr [0xa1b74], 0
    X86_AT(c, 0xcc3f9u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xA1B74u))), 0x0u, 0, 2);
    // 0cc401  je 0xcc511
    X86_AT(c, 0xcc401u);
    if (x86_cc(c, 4)) { goto L_cc511; }
    X86_TICK(c, 7);
    // 0cc407  call 0xdc848
    X86_AT(c, 0xcc407u);
    push32(c, 0xcc40cu); x86_call_known(c, 0xdc848u, f_000dc848); X86_RET(c, 0xcc40cu);
    X86_TICK(c, 7);
    // 0cc40c  call 0xdce98
    X86_AT(c, 0xcc40cu);
    push32(c, 0xcc411u); x86_call_known(c, 0xdce98u, f_000dce98); X86_RET(c, 0xcc411u);
    X86_TICK(c, 2);
    // 0cc411  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xcc411u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_cc418:
    X86_TICK(c, 12);
    // 0cc418  cmp dword ptr [ebp - 4], 0xb
    X86_AT(c, 0xcc418u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0xBu, 0, 4);
    // 0cc41c  jge 0xcc4b3
    X86_AT(c, 0xcc41cu);
    if (x86_cc(c, 13)) { goto L_cc4b3; }
    X86_TICK(c, 2);
    // 0cc422  sub edi, edi
    X86_AT(c, 0xcc422u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_cc424:
    X86_TICK(c, 7);
    // 0cc424  cmp edi, 0xb
    X86_AT(c, 0xcc424u);
    (void)x86_sub(c, c.r[7], 0xBu, 0, 4);
    // 0cc427  jge 0xcc4ab
    X86_AT(c, 0xcc427u);
    if (x86_cc(c, 13)) { goto L_cc4ab; }
    X86_TICK(c, 67);
    // 0cc42d  mov eax, 0x43fd4
    X86_AT(c, 0xcc42du);
    c.r[0] = 0x43FD4u;
    // 0cc432  mov eax, edi
    X86_AT(c, 0xcc432u);
    c.r[0] = c.r[7];
    // 0cc434  shl eax, 5
    X86_AT(c, 0xcc434u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[0] = r; }
    // 0cc437  cdq 
    X86_AT(c, 0xcc437u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0cc438  sub eax, edx
    X86_AT(c, 0xcc438u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0cc43a  sar eax, 1
    X86_AT(c, 0xcc43au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0cc43c  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xcc43cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0cc43f  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xcc43fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 0cc442  lea eax, [edx + edx*4]
    X86_AT(c, 0xcc442u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0cc445  lea eax, [edx + eax*2]
    X86_AT(c, 0xcc445u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0cc448  shl eax, 0xa
    X86_AT(c, 0xcc448u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[0] = r; }
    // 0cc44b  cdq 
    X86_AT(c, 0xcc44bu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0cc44c  sub eax, edx
    X86_AT(c, 0xcc44cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0cc44e  sar eax, 1
    X86_AT(c, 0xcc44eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0cc450  add eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xcc450u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0, 4); }
    // 0cc453  lea esi, [eax + 0x92550]
    X86_AT(c, 0xcc453u);
    c.r[6] = (uint32_t)(c.r[0] + 0x92550u);
    // 0cc459  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xcc459u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0cc45c  lea edx, [eax + eax*8]
    X86_AT(c, 0xcc45cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0cc45f  lea eax, [edx + eax*2]
    X86_AT(c, 0xcc45fu);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0cc462  lea edx, [edi + eax*1]
    X86_AT(c, 0xcc462u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 0cc465  movzx eax, byte ptr [edx + 0x92458]
    X86_AT(c, 0xcc465u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0x92458u)));
    // 0cc46c  shl eax, 9
    X86_AT(c, 0xcc46cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0cc46f  add eax, 0x66bf8
    X86_AT(c, 0xcc46fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x66BF8u, 0, 4); }
    // 0cc474  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xcc474u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0cc477  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xcc477u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
L_cc47e:
    X86_TICK(c, 12);
    // 0cc47e  cmp dword ptr [ebp - 0xc], 0x20
    X86_AT(c, 0xcc47eu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0x20u, 0, 4);
    // 0cc482  jge 0xcc4a5
    X86_AT(c, 0xcc482u);
    if (x86_cc(c, 13)) { goto L_cc4a5; }
    X86_TICK(c, 2);
    // 0cc484  sub ebx, ebx
    X86_AT(c, 0xcc484u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_cc486:
    X86_TICK(c, 7);
    // 0cc486  cmp ebx, 4
    X86_AT(c, 0xcc486u);
    (void)x86_sub(c, c.r[3], 0x4u, 0, 4);
    // 0cc489  jge 0xcc49a
    X86_AT(c, 0xcc489u);
    if (x86_cc(c, 13)) { goto L_cc49a; }
    X86_TICK(c, 26);
    // 0cc48b  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xcc48bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0cc48e  add dword ptr [ebp - 8], 4
    X86_AT(c, 0xcc48eu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0cc492  mov eax, dword ptr [eax]
    X86_AT(c, 0xcc492u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0cc494  mov dword ptr [esi + ebx*4], eax
    X86_AT(c, 0xcc494u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[3] * 4)), c.r[0]);
    // 0cc497  inc ebx
    X86_AT(c, 0xcc497u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0cc498  jmp 0xcc486
    X86_AT(c, 0xcc498u);
    X86_POLL(c, 0xcc486u); goto L_cc486;
L_cc49a:
    X86_TICK(c, 15);
    // 0cc49a  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0xcc49au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0cc49d  add esi, 0xb0
    X86_AT(c, 0xcc49du);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0xB0u, 0, 4); }
    // 0cc4a3  jmp 0xcc47e
    X86_AT(c, 0xcc4a3u);
    X86_POLL(c, 0xcc47eu); goto L_cc47e;
L_cc4a5:
    X86_TICK(c, 9);
    // 0cc4a5  inc edi
    X86_AT(c, 0xcc4a5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cc4a6  jmp 0xcc424
    X86_AT(c, 0xcc4a6u);
    X86_POLL(c, 0xcc424u); goto L_cc424;
L_cc4ab:
    X86_TICK(c, 13);
    // 0cc4ab  inc dword ptr [ebp - 4]
    X86_AT(c, 0xcc4abu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0cc4ae  jmp 0xcc418
    X86_AT(c, 0xcc4aeu);
    X86_POLL(c, 0xcc418u); goto L_cc418;
L_cc4b3:
    X86_TICK(c, 7);
    // 0cc4b3  call 0xdca78
    X86_AT(c, 0xcc4b3u);
    push32(c, 0xcc4b8u); x86_call_known(c, 0xdca78u, f_000dca78); X86_RET(c, 0xcc4b8u);
    X86_TICK(c, 9);
    // 0cc4b8  push 1
    X86_AT(c, 0xcc4b8u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cc4ba  call 0xc8f40
    X86_AT(c, 0xcc4bau);
    push32(c, 0xcc4bfu); x86_call_known(c, 0xc8f40u, f_000c8f40); X86_RET(c, 0xcc4bfu);
    X86_TICK(c, 25);
    // 0cc4bf  mov dword ptr [0x4c5d8], 0x92550
    X86_AT(c, 0xcc4bfu);
    wr32((c.sbase[3] + (uint32_t)(0x4C5D8u)), 0x92550u);
    // 0cc4c9  mov word ptr [0x4c5dc], 0x14
    X86_AT(c, 0xcc4c9u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DCu)), 0x14u);
    // 0cc4d2  mov word ptr [0x4c5de], 0x40
    X86_AT(c, 0xcc4d2u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DEu)), 0x40u);
    // 0cc4db  mov word ptr [0x4c5e0], 0x60
    X86_AT(c, 0xcc4dbu);
    wr16((c.sbase[3] + (uint32_t)(0x4C5E0u)), 0x60u);
    // 0cc4e4  mov word ptr [0x4c5e2], 0x19f
    X86_AT(c, 0xcc4e4u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5E2u)), 0x19Fu);
    // 0cc4ed  mov word ptr [0x4c5e4], 0x1bf
    X86_AT(c, 0xcc4edu);
    wr16((c.sbase[3] + (uint32_t)(0x4C5E4u)), 0x1BFu);
    // 0cc4f6  push 0x4c5d8
    X86_AT(c, 0xcc4f6u);
    { uint32_t v = 0x4C5D8u; push32(c, v); }
    // 0cc4fb  push 0
    X86_AT(c, 0xcc4fbu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cc4fd  push 0x4bfd8
    X86_AT(c, 0xcc4fdu);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0cc502  call 0x5c4
    X86_AT(c, 0xcc502u);
    push32(c, 0xcc507u); x86_call_known(c, 0x5c4u, f_000005c4); X86_RET(c, 0xcc507u);
    X86_TICK(c, 9);
    // 0cc507  push 0
    X86_AT(c, 0xcc507u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cc509  call 0xc8f40
    X86_AT(c, 0xcc509u);
    push32(c, 0xcc50eu); x86_call_known(c, 0xc8f40u, f_000c8f40); X86_RET(c, 0xcc50eu);
    X86_TICK(c, 2);
    // 0cc50e  add esp, 0x14
    X86_AT(c, 0xcc50eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_cc511:
    X86_TICK(c, 28);
    // 0cc511  pop edi
    X86_AT(c, 0xcc511u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cc512  pop esi
    X86_AT(c, 0xcc512u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cc513  pop ebx
    X86_AT(c, 0xcc513u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cc514  leave 
    X86_AT(c, 0xcc514u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cc515  ret 
    X86_AT(c, 0xcc515u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcc3f0u, "ran off the end of a function");
}
void f_000cc518(X86Cpu& c) {
    X86_TICK(c, 34);
    // 0cc518  mov eax, dword ptr [esp + 8]
    X86_AT(c, 0xcc518u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 0cc51c  lea eax, [eax*8]
    X86_AT(c, 0xcc51cu);
    c.r[0] = (uint32_t)(c.r[0] * 8);
    // 0cc523  lea edx, [eax + eax*4]
    X86_AT(c, 0xcc523u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0cc526  lea edx, [eax + edx*4]
    X86_AT(c, 0xcc526u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0cc529  add edx, dword ptr [esp + 4]
    X86_AT(c, 0xcc529u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u))), 0, 4); }
    // 0cc52d  movzx ecx, byte ptr [edx + 0x8bdf8]
    X86_AT(c, 0xcc52du);
    c.r[1] = rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0x8BDF8u)));
    // 0cc534  mov eax, ecx
    X86_AT(c, 0xcc534u);
    c.r[0] = c.r[1];
    // 0cc536  ret 
    X86_AT(c, 0xcc536u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcc518u, "ran off the end of a function");
}
void f_000cc538(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0cc538  push ebp
    X86_AT(c, 0xcc538u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cc539  mov ebp, esp
    X86_AT(c, 0xcc539u);
    c.r[5] = c.r[4];
    // 0cc53b  push ebx
    X86_AT(c, 0xcc53bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cc53c  push esi
    X86_AT(c, 0xcc53cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cc53d  push edi
    X86_AT(c, 0xcc53du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cc53e  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xcc53eu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cc541  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xcc541u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0cc544  sub ebx, ebx
    X86_AT(c, 0xcc544u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0cc546  cmp ebx, edi
    X86_AT(c, 0xcc546u);
    (void)x86_sub(c, c.r[3], c.r[7], 0, 4);
    // 0cc548  jle 0xcc550
    X86_AT(c, 0xcc548u);
    if (x86_cc(c, 14)) { goto L_cc550; }
    X86_TICK(c, 2);
    // 0cc54a  add edi, 0xa8
    X86_AT(c, 0xcc54au);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xA8u, 0, 4); }
L_cc550:
    X86_TICK(c, 7);
    // 0cc550  cmp edi, 0xa7
    X86_AT(c, 0xcc550u);
    (void)x86_sub(c, c.r[7], 0xA7u, 0, 4);
    // 0cc556  jle 0xcc55e
    X86_AT(c, 0xcc556u);
    if (x86_cc(c, 14)) { goto L_cc55e; }
    X86_TICK(c, 2);
    // 0cc558  sub edi, 0xa8
    X86_AT(c, 0xcc558u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, 0xA8u, 0, 4); }
L_cc55e:
    X86_TICK(c, 7);
    // 0cc55e  and esi, esi
    X86_AT(c, 0xcc55eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0cc560  jge 0xcc568
    X86_AT(c, 0xcc560u);
    if (x86_cc(c, 13)) { goto L_cc568; }
    X86_TICK(c, 2);
    // 0cc562  add esi, 0x9c
    X86_AT(c, 0xcc562u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x9Cu, 0, 4); }
L_cc568:
    X86_TICK(c, 7);
    // 0cc568  cmp esi, 0x9b
    X86_AT(c, 0xcc568u);
    (void)x86_sub(c, c.r[6], 0x9Bu, 0, 4);
    // 0cc56e  jle 0xcc576
    X86_AT(c, 0xcc56eu);
    if (x86_cc(c, 14)) { goto L_cc576; }
    X86_TICK(c, 2);
    // 0cc570  sub esi, 0x9c
    X86_AT(c, 0xcc570u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x9Cu, 0, 4); }
L_cc576:
    X86_TICK(c, 16);
    // 0cc576  push dword ptr [ebp + 0x10]
    X86_AT(c, 0xcc576u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 0cc579  push esi
    X86_AT(c, 0xcc579u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cc57a  push edi
    X86_AT(c, 0xcc57au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cc57b  call 0xcf714
    X86_AT(c, 0xcc57bu);
    push32(c, 0xcc580u); x86_call_known(c, 0xcf714u, f_000cf714); X86_RET(c, 0xcc580u);
    X86_TICK(c, 12);
    // 0cc580  xchg ebx, eax
    X86_AT(c, 0xcc580u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0cc581  add esp, 0xc
    X86_AT(c, 0xcc581u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cc584  cmp ebx, 0xffffffff
    X86_AT(c, 0xcc584u);
    (void)x86_sub(c, c.r[3], 0xFFFFFFFFu, 0, 4);
    // 0cc587  jle 0xcc599
    X86_AT(c, 0xcc587u);
    if (x86_cc(c, 14)) { goto L_cc599; }
    X86_TICK(c, 13);
    // 0cc589  lea eax, [ebx*8]
    X86_AT(c, 0xcc589u);
    c.r[0] = (uint32_t)(c.r[3] * 8);
    // 0cc590  mov eax, dword ptr [eax + eax*4 + 0xbefcc]
    X86_AT(c, 0xcc590u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[0] * 4 + 0xBEFCCu)));
    // 0cc597  jmp 0xcc5a6
    X86_AT(c, 0xcc597u);
    goto L_cc5a6;
L_cc599:
    X86_TICK(c, 11);
    // 0cc599  push esi
    X86_AT(c, 0xcc599u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cc59a  push edi
    X86_AT(c, 0xcc59au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cc59b  call 0xcc518
    X86_AT(c, 0xcc59bu);
    push32(c, 0xcc5a0u); x86_call_known(c, 0xcc518u, f_000cc518); X86_RET(c, 0xcc5a0u);
    X86_TICK(c, 5);
    // 0cc5a0  movzx eax, al
    X86_AT(c, 0xcc5a0u);
    c.r[0] = g8(c, 0);
    // 0cc5a3  add esp, 8
    X86_AT(c, 0xcc5a3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_cc5a6:
    X86_TICK(c, 28);
    // 0cc5a6  pop edi
    X86_AT(c, 0xcc5a6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cc5a7  pop esi
    X86_AT(c, 0xcc5a7u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cc5a8  pop ebx
    X86_AT(c, 0xcc5a8u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cc5a9  leave 
    X86_AT(c, 0xcc5a9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cc5aa  ret 
    X86_AT(c, 0xcc5aau);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcc538u, "ran off the end of a function");
}
void f_000cc5ac(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0cc5ac  mov ecx, dword ptr [0xb033a]
    X86_AT(c, 0xcc5acu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xB033Au)));
    // 0cc5b2  sub ecx, 5
    X86_AT(c, 0xcc5b2u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x5u, 0, 4); }
    // 0cc5b5  add ecx, dword ptr [esp + 4]
    X86_AT(c, 0xcc5b5u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u))), 0, 4); }
    // 0cc5b9  and ecx, ecx
    X86_AT(c, 0xcc5b9u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[1], 4); }
    // 0cc5bb  jge 0xcc5c5
    X86_AT(c, 0xcc5bbu);
    if (x86_cc(c, 13)) { goto L_cc5c5; }
    X86_TICK(c, 9);
    // 0cc5bd  add ecx, 0xa8
    X86_AT(c, 0xcc5bdu);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0xA8u, 0, 4); }
    // 0cc5c3  jmp 0xcc5d3
    X86_AT(c, 0xcc5c3u);
    goto L_cc5d3;
L_cc5c5:
    X86_TICK(c, 7);
    // 0cc5c5  cmp ecx, 0xa7
    X86_AT(c, 0xcc5c5u);
    (void)x86_sub(c, c.r[1], 0xA7u, 0, 4);
    // 0cc5cb  jle 0xcc5d3
    X86_AT(c, 0xcc5cbu);
    if (x86_cc(c, 14)) { goto L_cc5d3; }
    X86_TICK(c, 2);
    // 0cc5cd  sub ecx, 0xa8
    X86_AT(c, 0xcc5cdu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0xA8u, 0, 4); }
L_cc5d3:
    X86_TICK(c, 12);
    // 0cc5d3  mov eax, ecx
    X86_AT(c, 0xcc5d3u);
    c.r[0] = c.r[1];
    // 0cc5d5  ret 
    X86_AT(c, 0xcc5d5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcc5acu, "ran off the end of a function");
}
void f_000cc5d8(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0cc5d8  mov ecx, dword ptr [0xb033e]
    X86_AT(c, 0xcc5d8u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xB033Eu)));
    // 0cc5de  sub ecx, 5
    X86_AT(c, 0xcc5deu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x5u, 0, 4); }
    // 0cc5e1  add ecx, dword ptr [esp + 4]
    X86_AT(c, 0xcc5e1u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u))), 0, 4); }
    // 0cc5e5  and ecx, ecx
    X86_AT(c, 0xcc5e5u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[1], 4); }
    // 0cc5e7  jge 0xcc5f1
    X86_AT(c, 0xcc5e7u);
    if (x86_cc(c, 13)) { goto L_cc5f1; }
    X86_TICK(c, 9);
    // 0cc5e9  add ecx, 0x9c
    X86_AT(c, 0xcc5e9u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x9Cu, 0, 4); }
    // 0cc5ef  jmp 0xcc5ff
    X86_AT(c, 0xcc5efu);
    goto L_cc5ff;
L_cc5f1:
    X86_TICK(c, 7);
    // 0cc5f1  cmp ecx, 0x9b
    X86_AT(c, 0xcc5f1u);
    (void)x86_sub(c, c.r[1], 0x9Bu, 0, 4);
    // 0cc5f7  jle 0xcc5ff
    X86_AT(c, 0xcc5f7u);
    if (x86_cc(c, 14)) { goto L_cc5ff; }
    X86_TICK(c, 2);
    // 0cc5f9  sub ecx, 0x9c
    X86_AT(c, 0xcc5f9u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x9Cu, 0, 4); }
L_cc5ff:
    X86_TICK(c, 12);
    // 0cc5ff  mov eax, ecx
    X86_AT(c, 0xcc5ffu);
    c.r[0] = c.r[1];
    // 0cc601  ret 
    X86_AT(c, 0xcc601u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcc5d8u, "ran off the end of a function");
}
void f_000cc628(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0cc628  push edi
    X86_AT(c, 0xcc628u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cc629  mov eax, dword ptr [0xb02fe]
    X86_AT(c, 0xcc629u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB02FEu)));
    // 0cc62e  cmp eax, 0x64
    X86_AT(c, 0xcc62eu);
    (void)x86_sub(c, c.r[0], 0x64u, 0, 4);
    // 0cc631  jge 0xcc647
    X86_AT(c, 0xcc631u);
    if (x86_cc(c, 13)) { goto L_cc647; }
    X86_TICK(c, 9);
    // 0cc633  mov edi, 0xb
    X86_AT(c, 0xcc633u);
    c.r[7] = 0xBu;
    // 0cc638  inc eax
    X86_AT(c, 0xcc638u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0cc639  jg 0xcc662
    X86_AT(c, 0xcc639u);
    if (x86_cc(c, 15)) { goto L_cc662; }
    X86_TICK(c, 9);
    // 0cc63b  mov dword ptr [0xb02fe], 0
    X86_AT(c, 0xcc63bu);
    wr32((c.sbase[3] + (uint32_t)(0xB02FEu)), 0x0u);
    // 0cc645  jmp 0xcc662
    X86_AT(c, 0xcc645u);
    goto L_cc662;
L_cc647:
    X86_TICK(c, 14);
    // 0cc647  mov edi, 0xf
    X86_AT(c, 0xcc647u);
    c.r[7] = 0xFu;
    // 0cc64c  cmp dword ptr [0xb02fe], 0x270f
    X86_AT(c, 0xcc64cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB02FEu))), 0x270Fu, 0, 4);
    // 0cc656  jle 0xcc662
    X86_AT(c, 0xcc656u);
    if (x86_cc(c, 14)) { goto L_cc662; }
    X86_TICK(c, 2);
    // 0cc658  mov dword ptr [0xb02fe], 0x270f
    X86_AT(c, 0xcc658u);
    wr32((c.sbase[3] + (uint32_t)(0xB02FEu)), 0x270Fu);
L_cc662:
    X86_TICK(c, 7);
    // 0cc662  call 0xd351c
    X86_AT(c, 0xcc662u);
    push32(c, 0xcc667u); x86_call_known(c, 0xd351cu, f_000d351c); X86_RET(c, 0xcc667u);
    X86_TICK(c, 14);
    // 0cc667  pop edi
    X86_AT(c, 0xcc667u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cc668  ret 
    X86_AT(c, 0xcc668u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcc628u, "ran off the end of a function");
}
void f_000cc66c(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0cc66c  push edi
    X86_AT(c, 0xcc66cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cc66d  mov eax, dword ptr [0xb0322]
    X86_AT(c, 0xcc66du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB0322u)));
    // 0cc672  cmp eax, 0x64
    X86_AT(c, 0xcc672u);
    (void)x86_sub(c, c.r[0], 0x64u, 0, 4);
    // 0cc675  jge 0xcc68b
    X86_AT(c, 0xcc675u);
    if (x86_cc(c, 13)) { goto L_cc68b; }
    X86_TICK(c, 9);
    // 0cc677  mov edi, 0xb
    X86_AT(c, 0xcc677u);
    c.r[7] = 0xBu;
    // 0cc67c  inc eax
    X86_AT(c, 0xcc67cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0cc67d  jg 0xcc6a6
    X86_AT(c, 0xcc67du);
    if (x86_cc(c, 15)) { goto L_cc6a6; }
    X86_TICK(c, 9);
    // 0cc67f  mov dword ptr [0xb0322], 0
    X86_AT(c, 0xcc67fu);
    wr32((c.sbase[3] + (uint32_t)(0xB0322u)), 0x0u);
    // 0cc689  jmp 0xcc6a6
    X86_AT(c, 0xcc689u);
    goto L_cc6a6;
L_cc68b:
    X86_TICK(c, 14);
    // 0cc68b  mov edi, 0xf
    X86_AT(c, 0xcc68bu);
    c.r[7] = 0xFu;
    // 0cc690  cmp dword ptr [0xb0322], 0x270f
    X86_AT(c, 0xcc690u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB0322u))), 0x270Fu, 0, 4);
    // 0cc69a  jle 0xcc6a6
    X86_AT(c, 0xcc69au);
    if (x86_cc(c, 14)) { goto L_cc6a6; }
    X86_TICK(c, 2);
    // 0cc69c  mov dword ptr [0xb0322], 0x270f
    X86_AT(c, 0xcc69cu);
    wr32((c.sbase[3] + (uint32_t)(0xB0322u)), 0x270Fu);
L_cc6a6:
    X86_TICK(c, 7);
    // 0cc6a6  call 0xd351c
    X86_AT(c, 0xcc6a6u);
    push32(c, 0xcc6abu); x86_call_known(c, 0xd351cu, f_000d351c); X86_RET(c, 0xcc6abu);
    X86_TICK(c, 14);
    // 0cc6ab  pop edi
    X86_AT(c, 0xcc6abu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cc6ac  ret 
    X86_AT(c, 0xcc6acu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcc66cu, "ran off the end of a function");
}
void f_000cc6b0(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0cc6b0  cmp dword ptr [0xb031e], 0x270f
    X86_AT(c, 0xcc6b0u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB031Eu))), 0x270Fu, 0, 4);
    // 0cc6ba  jle 0xcc6c6
    X86_AT(c, 0xcc6bau);
    if (x86_cc(c, 14)) { goto L_cc6c6; }
    X86_TICK(c, 2);
    // 0cc6bc  mov dword ptr [0xb031e], 0x270f
    X86_AT(c, 0xcc6bcu);
    wr32((c.sbase[3] + (uint32_t)(0xB031Eu)), 0x270Fu);
L_cc6c6:
    X86_TICK(c, 7);
    // 0cc6c6  call 0xd351c
    X86_AT(c, 0xcc6c6u);
    push32(c, 0xcc6cbu); x86_call_known(c, 0xd351cu, f_000d351c); X86_RET(c, 0xcc6cbu);
    X86_TICK(c, 10);
    // 0cc6cb  ret 
    X86_AT(c, 0xcc6cbu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcc6b0u, "ran off the end of a function");
}
void f_000cc6cc(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0cc6cc  cmp dword ptr [0xb031a], 0x270f
    X86_AT(c, 0xcc6ccu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB031Au))), 0x270Fu, 0, 4);
    // 0cc6d6  jle 0xcc6e2
    X86_AT(c, 0xcc6d6u);
    if (x86_cc(c, 14)) { goto L_cc6e2; }
    X86_TICK(c, 2);
    // 0cc6d8  mov dword ptr [0xb031a], 0x270f
    X86_AT(c, 0xcc6d8u);
    wr32((c.sbase[3] + (uint32_t)(0xB031Au)), 0x270Fu);
L_cc6e2:
    X86_TICK(c, 7);
    // 0cc6e2  call 0xd351c
    X86_AT(c, 0xcc6e2u);
    push32(c, 0xcc6e7u); x86_call_known(c, 0xd351cu, f_000d351c); X86_RET(c, 0xcc6e7u);
    X86_TICK(c, 10);
    // 0cc6e7  ret 
    X86_AT(c, 0xcc6e7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcc6ccu, "ran off the end of a function");
}
void f_000cc6e8(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0cc6e8  call 0xcc628
    X86_AT(c, 0xcc6e8u);
    push32(c, 0xcc6edu); x86_call_known(c, 0xcc628u, f_000cc628); X86_RET(c, 0xcc6edu);
    X86_TICK(c, 7);
    // 0cc6ed  call 0xcc66c
    X86_AT(c, 0xcc6edu);
    push32(c, 0xcc6f2u); x86_call_known(c, 0xcc66cu, f_000cc66c); X86_RET(c, 0xcc6f2u);
    X86_TICK(c, 7);
    // 0cc6f2  call 0xcc6b0
    X86_AT(c, 0xcc6f2u);
    push32(c, 0xcc6f7u); x86_call_known(c, 0xcc6b0u, f_000cc6b0); X86_RET(c, 0xcc6f7u);
    X86_TICK(c, 7);
    // 0cc6f7  call 0xcc6cc
    X86_AT(c, 0xcc6f7u);
    push32(c, 0xcc6fcu); x86_call_known(c, 0xcc6ccu, f_000cc6cc); X86_RET(c, 0xcc6fcu);
    X86_TICK(c, 10);
    // 0cc6fc  ret 
    X86_AT(c, 0xcc6fcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcc6e8u, "ran off the end of a function");
}
void f_000cc700(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0cc700  push edi
    X86_AT(c, 0xcc700u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cc701  push 0xb
    X86_AT(c, 0xcc701u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0cc703  call 0xca0a0
    X86_AT(c, 0xcc703u);
    push32(c, 0xcc708u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xcc708u);
    X86_TICK(c, 9);
    // 0cc708  push 0xc
    X86_AT(c, 0xcc708u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0cc70a  call 0xc8dd4
    X86_AT(c, 0xcc70au);
    push32(c, 0xcc70fu); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xcc70fu);
    X86_TICK(c, 4);
    // 0cc70f  mov edi, 1
    X86_AT(c, 0xcc70fu);
    c.r[7] = 0x1u;
    // 0cc714  add esp, 8
    X86_AT(c, 0xcc714u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_cc717:
    X86_TICK(c, 7);
    // 0cc717  cmp edi, 6
    X86_AT(c, 0xcc717u);
    (void)x86_sub(c, c.r[7], 0x6u, 0, 4);
    // 0cc71a  jg 0xcc73c
    X86_AT(c, 0xcc71au);
    if (x86_cc(c, 15)) { goto L_cc73c; }
    X86_TICK(c, 13);
    // 0cc71c  push edi
    X86_AT(c, 0xcc71cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cc71d  push 0x18
    X86_AT(c, 0xcc71du);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0cc71f  push 0xb
    X86_AT(c, 0xcc71fu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0cc721  call 0xca9c8
    X86_AT(c, 0xcc721u);
    push32(c, 0xcc726u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xcc726u);
    X86_TICK(c, 16);
    // 0cc726  push 3
    X86_AT(c, 0xcc726u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0cc728  push dword ptr [edi*4 + 0xb02fe]
    X86_AT(c, 0xcc728u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xB02FEu))); push32(c, v); }
    // 0cc72f  push 0xb
    X86_AT(c, 0xcc72fu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0cc731  call 0xc8cb8
    X86_AT(c, 0xcc731u);
    push32(c, 0xcc736u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xcc736u);
    X86_TICK(c, 11);
    // 0cc736  inc edi
    X86_AT(c, 0xcc736u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cc737  add esp, 0x18
    X86_AT(c, 0xcc737u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0cc73a  jmp 0xcc717
    X86_AT(c, 0xcc73au);
    X86_POLL(c, 0xcc717u); goto L_cc717;
L_cc73c:
    X86_TICK(c, 9);
    // 0cc73c  push 0xb
    X86_AT(c, 0xcc73cu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0cc73e  call 0xc8dd4
    X86_AT(c, 0xcc73eu);
    push32(c, 0xcc743u); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xcc743u);
    X86_TICK(c, 13);
    // 0cc743  push 8
    X86_AT(c, 0xcc743u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0cc745  push 0xc
    X86_AT(c, 0xcc745u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0cc747  push 0xb
    X86_AT(c, 0xcc747u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0cc749  call 0xca9c8
    X86_AT(c, 0xcc749u);
    push32(c, 0xcc74eu); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xcc74eu);
    X86_TICK(c, 11);
    // 0cc74e  push 0x2190
    X86_AT(c, 0xcc74eu);
    { uint32_t v = 0x2190u; push32(c, v); }
    // 0cc753  push 0xb
    X86_AT(c, 0xcc753u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0cc755  call 0xc8cdc
    X86_AT(c, 0xcc755u);
    push32(c, 0xcc75au); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xcc75au);
    X86_TICK(c, 13);
    // 0cc75a  push 8
    X86_AT(c, 0xcc75au);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0cc75c  push 0xc
    X86_AT(c, 0xcc75cu);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0cc75e  push 0xb
    X86_AT(c, 0xcc75eu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0cc760  call 0xca9c8
    X86_AT(c, 0xcc760u);
    push32(c, 0xcc765u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xcc765u);
    X86_TICK(c, 18);
    // 0cc765  mov eax, dword ptr [0xb0326]
    X86_AT(c, 0xcc765u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB0326u)));
    // 0cc76a  push dword ptr [eax*4 + 0xab054]
    X86_AT(c, 0xcc76au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xAB054u))); push32(c, v); }
    // 0cc771  push 0xb
    X86_AT(c, 0xcc771u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0cc773  call 0xc8cdc
    X86_AT(c, 0xcc773u);
    push32(c, 0xcc778u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xcc778u);
    X86_TICK(c, 13);
    // 0cc778  push 9
    X86_AT(c, 0xcc778u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0cc77a  push 0xc
    X86_AT(c, 0xcc77au);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0cc77c  push 0xb
    X86_AT(c, 0xcc77cu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0cc77e  call 0xca9c8
    X86_AT(c, 0xcc77eu);
    push32(c, 0xcc783u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xcc783u);
    X86_TICK(c, 11);
    // 0cc783  push 0x21bc
    X86_AT(c, 0xcc783u);
    { uint32_t v = 0x21BCu; push32(c, v); }
    // 0cc788  push 0xb
    X86_AT(c, 0xcc788u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0cc78a  call 0xc8cdc
    X86_AT(c, 0xcc78au);
    push32(c, 0xcc78fu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xcc78fu);
    X86_TICK(c, 15);
    // 0cc78f  add esp, 0x40
    X86_AT(c, 0xcc78fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0cc792  push 9
    X86_AT(c, 0xcc792u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0cc794  push 0xc
    X86_AT(c, 0xcc794u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0cc796  push 0xb
    X86_AT(c, 0xcc796u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0cc798  call 0xca9c8
    X86_AT(c, 0xcc798u);
    push32(c, 0xcc79du); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xcc79du);
    X86_TICK(c, 18);
    // 0cc79d  mov eax, dword ptr [0xb032e]
    X86_AT(c, 0xcc79du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB032Eu)));
    // 0cc7a2  push dword ptr [eax*4 + 0xab0c0]
    X86_AT(c, 0xcc7a2u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xAB0C0u))); push32(c, v); }
    // 0cc7a9  push 0xb
    X86_AT(c, 0xcc7a9u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0cc7ab  call 0xc8cdc
    X86_AT(c, 0xcc7abu);
    push32(c, 0xcc7b0u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xcc7b0u);
    X86_TICK(c, 9);
    // 0cc7b0  push 0xf
    X86_AT(c, 0xcc7b0u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cc7b2  call 0xc8dd4
    X86_AT(c, 0xcc7b2u);
    push32(c, 0xcc7b7u); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xcc7b7u);
    X86_TICK(c, 16);
    // 0cc7b7  add esp, 0x18
    X86_AT(c, 0xcc7b7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0cc7ba  pop edi
    X86_AT(c, 0xcc7bau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cc7bb  ret 
    X86_AT(c, 0xcc7bbu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcc700u, "ran off the end of a function");
}
void f_000cc7bc(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0cc7bc  push ebp
    X86_AT(c, 0xcc7bcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cc7bd  mov ebp, esp
    X86_AT(c, 0xcc7bdu);
    c.r[5] = c.r[4];
    // 0cc7bf  push 7
    X86_AT(c, 0xcc7bfu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc7c1  call 0xca0a0
    X86_AT(c, 0xcc7c1u);
    push32(c, 0xcc7c6u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xcc7c6u);
    X86_TICK(c, 14);
    // 0cc7c6  push dword ptr [ebp + 8]
    X86_AT(c, 0xcc7c6u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0cc7c9  push 7
    X86_AT(c, 0xcc7c9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc7cb  call 0xc8cdc
    X86_AT(c, 0xcc7cbu);
    push32(c, 0xcc7d0u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xcc7d0u);
    X86_TICK(c, 9);
    // 0cc7d0  push 7
    X86_AT(c, 0xcc7d0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc7d2  call 0xca3cc
    X86_AT(c, 0xcc7d2u);
    push32(c, 0xcc7d7u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xcc7d7u);
    X86_TICK(c, 16);
    // 0cc7d7  leave 
    X86_AT(c, 0xcc7d7u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cc7d8  ret 
    X86_AT(c, 0xcc7d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcc7bcu, "ran off the end of a function");
}
void f_000cc7dc(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0cc7dc  push ebp
    X86_AT(c, 0xcc7dcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cc7dd  mov ebp, esp
    X86_AT(c, 0xcc7ddu);
    c.r[5] = c.r[4];
    // 0cc7df  push eax
    X86_AT(c, 0xcc7dfu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cc7e0  push edi
    X86_AT(c, 0xcc7e0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cc7e1  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xcc7e1u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cc7e4  push edi
    X86_AT(c, 0xcc7e4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cc7e5  call 0xca0a0
    X86_AT(c, 0xcc7e5u);
    push32(c, 0xcc7eau); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xcc7eau);
    X86_TICK(c, 12);
    // 0cc7ea  push dword ptr [ebp + 0x10]
    X86_AT(c, 0xcc7eau);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 0cc7ed  call 0xc8dd4
    X86_AT(c, 0xcc7edu);
    push32(c, 0xcc7f2u); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xcc7f2u);
    X86_TICK(c, 21);
    // 0cc7f2  mov al, byte ptr [ebp + 0xc]
    X86_AT(c, 0xcc7f2u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0cc7f5  mov byte ptr [ebp - 2], al
    X86_AT(c, 0xcc7f5u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 0));
    // 0cc7f8  mov byte ptr [ebp - 1], 0
    X86_AT(c, 0xcc7f8u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x0u);
    // 0cc7fc  lea eax, [ebp - 2]
    X86_AT(c, 0xcc7fcu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFEu);
    // 0cc7ff  push eax
    X86_AT(c, 0xcc7ffu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cc800  push edi
    X86_AT(c, 0xcc800u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cc801  call 0xca850
    X86_AT(c, 0xcc801u);
    push32(c, 0xcc806u); x86_call_known(c, 0xca850u, f_000ca850); X86_RET(c, 0xcc806u);
    X86_TICK(c, 9);
    // 0cc806  push 0xf
    X86_AT(c, 0xcc806u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cc808  call 0xc8dd4
    X86_AT(c, 0xcc808u);
    push32(c, 0xcc80du); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xcc80du);
    X86_TICK(c, 22);
    // 0cc80d  add esp, 0x14
    X86_AT(c, 0xcc80du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0cc810  pop edi
    X86_AT(c, 0xcc810u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cc811  leave 
    X86_AT(c, 0xcc811u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cc812  ret 
    X86_AT(c, 0xcc812u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcc7dcu, "ran off the end of a function");
}
void f_000cc814(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0cc814  push ebp
    X86_AT(c, 0xcc814u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cc815  mov ebp, esp
    X86_AT(c, 0xcc815u);
    c.r[5] = c.r[4];
    // 0cc817  push 4
    X86_AT(c, 0xcc817u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0cc819  call 0xca0a0
    X86_AT(c, 0xcc819u);
    push32(c, 0xcc81eu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xcc81eu);
    X86_TICK(c, 19);
    // 0cc81e  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xcc81eu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0cc821  push dword ptr [ebp + 8]
    X86_AT(c, 0xcc821u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0cc824  push 4
    X86_AT(c, 0xcc824u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0cc826  call 0xca9c8
    X86_AT(c, 0xcc826u);
    push32(c, 0xcc82bu); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xcc82bu);
    X86_TICK(c, 16);
    // 0cc82b  leave 
    X86_AT(c, 0xcc82bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cc82c  ret 
    X86_AT(c, 0xcc82cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcc814u, "ran off the end of a function");
}
void f_000cc830(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0cc830  push ebp
    X86_AT(c, 0xcc830u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cc831  mov ebp, esp
    X86_AT(c, 0xcc831u);
    c.r[5] = c.r[4];
    // 0cc833  push 7
    X86_AT(c, 0xcc833u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc835  call 0xca0a0
    X86_AT(c, 0xcc835u);
    push32(c, 0xcc83au); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xcc83au);
    X86_TICK(c, 12);
    // 0cc83a  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xcc83au);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0cc83d  call 0xc8dd4
    X86_AT(c, 0xcc83du);
    push32(c, 0xcc842u); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xcc842u);
    X86_TICK(c, 14);
    // 0cc842  push dword ptr [ebp + 8]
    X86_AT(c, 0xcc842u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0cc845  push 7
    X86_AT(c, 0xcc845u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc847  call 0xc8cdc
    X86_AT(c, 0xcc847u);
    push32(c, 0xcc84cu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xcc84cu);
    X86_TICK(c, 9);
    // 0cc84c  push 7
    X86_AT(c, 0xcc84cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc84e  call 0xca3cc
    X86_AT(c, 0xcc84eu);
    push32(c, 0xcc853u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xcc853u);
    X86_TICK(c, 9);
    // 0cc853  push 0xf
    X86_AT(c, 0xcc853u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cc855  call 0xc8dd4
    X86_AT(c, 0xcc855u);
    push32(c, 0xcc85au); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xcc85au);
    X86_TICK(c, 16);
    // 0cc85a  leave 
    X86_AT(c, 0xcc85au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cc85b  ret 
    X86_AT(c, 0xcc85bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcc830u, "ran off the end of a function");
}
void f_000cc85c(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0cc85c  push 0x21e8
    X86_AT(c, 0xcc85cu);
    { uint32_t v = 0x21E8u; push32(c, v); }
    // 0cc861  call 0xcad60
    X86_AT(c, 0xcc861u);
    push32(c, 0xcc866u); x86_call_known(c, 0xcad60u, f_000cad60); X86_RET(c, 0xcc866u);
    X86_TICK(c, 2);
    // 0cc866  add esp, 4
    X86_AT(c, 0xcc866u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_cc869:
    X86_TICK(c, 9);
    // 0cc869  push 7
    X86_AT(c, 0xcc869u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc86b  call 0xc81e4
    X86_AT(c, 0xcc86bu);
    push32(c, 0xcc870u); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xcc870u);
    X86_TICK(c, 9);
    // 0cc870  add esp, 4
    X86_AT(c, 0xcc870u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cc873  and al, al
    X86_AT(c, 0xcc873u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0cc875  je 0xcc869
    X86_AT(c, 0xcc875u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xcc869u); goto L_cc869; }
    X86_TICK(c, 9);
    // 0cc877  push 2
    X86_AT(c, 0xcc877u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cc879  call 0xca3cc
    X86_AT(c, 0xcc879u);
    push32(c, 0xcc87eu); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xcc87eu);
    X86_TICK(c, 12);
    // 0cc87e  add esp, 4
    X86_AT(c, 0xcc87eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cc881  ret 
    X86_AT(c, 0xcc881u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcc85cu, "ran off the end of a function");
}
void f_000cc884(X86Cpu& c) {
    X86_TICK(c, 6);
    // 0cc884  mov edx, dword ptr [esp + 4]
    X86_AT(c, 0xcc884u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0cc888  sub ecx, ecx
    X86_AT(c, 0xcc888u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
L_cc88a:
    X86_TICK(c, 12);
    // 0cc88a  cmp byte ptr [edx], 0
    X86_AT(c, 0xcc88au);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2]))), 0x0u, 0, 1);
    // 0cc88d  je 0xcc893
    X86_AT(c, 0xcc88du);
    if (x86_cc(c, 4)) { goto L_cc893; }
    X86_TICK(c, 11);
    // 0cc88f  inc ecx
    X86_AT(c, 0xcc88fu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0cc890  inc edx
    X86_AT(c, 0xcc890u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0cc891  jmp 0xcc88a
    X86_AT(c, 0xcc891u);
    X86_POLL(c, 0xcc88au); goto L_cc88a;
L_cc893:
    X86_TICK(c, 12);
    // 0cc893  mov eax, ecx
    X86_AT(c, 0xcc893u);
    c.r[0] = c.r[1];
    // 0cc895  ret 
    X86_AT(c, 0xcc895u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcc884u, "ran off the end of a function");
}
void f_000cc898(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0cc898  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0xcc898u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0cc89c  cmp ecx, 0x9e
    X86_AT(c, 0xcc89cu);
    (void)x86_sub(c, c.r[1], 0x9Eu, 0, 4);
    // 0cc8a2  jg 0xcc8ad
    X86_AT(c, 0xcc8a2u);
    if (x86_cc(c, 15)) { goto L_cc8ad; }
    X86_TICK(c, 11);
    // 0cc8a4  mov eax, dword ptr [ecx*4 + 0xaaedc]
    X86_AT(c, 0xcc8a4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] * 4 + 0xAAEDCu)));
    // 0cc8ab  jmp 0xcc8b4
    X86_AT(c, 0xcc8abu);
    goto L_cc8b4;
L_cc8ad:
    X86_TICK(c, 4);
    // 0cc8ad  mov eax, dword ptr [ecx*4 + 0xa1bf8]
    X86_AT(c, 0xcc8adu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] * 4 + 0xA1BF8u)));
L_cc8b4:
    X86_TICK(c, 10);
    // 0cc8b4  ret 
    X86_AT(c, 0xcc8b4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcc898u, "ran off the end of a function");
}
void f_000cc8b8(X86Cpu& c) {
    X86_TICK(c, 33);
    // 0cc8b8  push ebp
    X86_AT(c, 0xcc8b8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cc8b9  mov ebp, esp
    X86_AT(c, 0xcc8b9u);
    c.r[5] = c.r[4];
    // 0cc8bb  sub esp, 0xc
    X86_AT(c, 0xcc8bbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0cc8be  push ebx
    X86_AT(c, 0xcc8beu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cc8bf  push esi
    X86_AT(c, 0xcc8bfu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cc8c0  push edi
    X86_AT(c, 0xcc8c0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cc8c1  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xcc8c1u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cc8c4  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xcc8c4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
    // 0cc8cb  mov eax, edi
    X86_AT(c, 0xcc8cbu);
    c.r[0] = c.r[7];
    // 0cc8cd  add eax, dword ptr [0xb031a]
    X86_AT(c, 0xcc8cdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xB031Au))), 0, 4); }
    // 0cc8d3  cmp eax, 0x270f
    X86_AT(c, 0xcc8d3u);
    (void)x86_sub(c, c.r[0], 0x270Fu, 0, 4);
    // 0cc8d8  jle 0xcc8f7
    X86_AT(c, 0xcc8d8u);
    if (x86_cc(c, 14)) { goto L_cc8f7; }
    X86_TICK(c, 15);
    // 0cc8da  mov edi, 0x270f
    X86_AT(c, 0xcc8dau);
    c.r[7] = 0x270Fu;
    // 0cc8df  sub edi, dword ptr [0xb031a]
    X86_AT(c, 0xcc8dfu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(0xB031Au))), 0, 4); }
    // 0cc8e5  call 0xcc6cc
    X86_AT(c, 0xcc8e5u);
    push32(c, 0xcc8eau); x86_call_known(c, 0xcc6ccu, f_000cc6cc); X86_RET(c, 0xcc8eau);
    X86_TICK(c, 9);
    // 0cc8ea  push 0x2238
    X86_AT(c, 0xcc8eau);
    { uint32_t v = 0x2238u; push32(c, v); }
    // 0cc8ef  call 0xcc7bc
    X86_AT(c, 0xcc8efu);
    push32(c, 0xcc8f4u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcc8f4u);
    X86_TICK(c, 2);
    // 0cc8f4  add esp, 4
    X86_AT(c, 0xcc8f4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_cc8f7:
    X86_TICK(c, 12);
    // 0cc8f7  cmp dword ptr [ebp + 0xc], 0
    X86_AT(c, 0xcc8f7u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0x0u, 0, 4);
    // 0cc8fb  jne 0xcc90b
    X86_AT(c, 0xcc8fbu);
    if (x86_cc(c, 5)) { goto L_cc90b; }
    X86_TICK(c, 4);
    // 0cc8fd  mov dword ptr [ebp + 0xc], 8
    X86_AT(c, 0xcc8fdu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)), 0x8u);
    // 0cc904  mov dword ptr [ebp - 0xc], 1
    X86_AT(c, 0xcc904u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x1u);
L_cc90b:
    X86_TICK(c, 7);
    // 0cc90b  and edi, edi
    X86_AT(c, 0xcc90bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0cc90d  je 0xcc9d8
    X86_AT(c, 0xcc90du);
    if (x86_cc(c, 4)) { goto L_cc9d8; }
    X86_TICK(c, 206);
    // 0cc913  mov eax, edi
    X86_AT(c, 0xcc913u);
    c.r[0] = c.r[7];
    // 0cc915  cdq 
    X86_AT(c, 0xcc915u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0cc916  mov ecx, 0xa
    X86_AT(c, 0xcc916u);
    c.r[1] = 0xAu;
    // 0cc91b  idiv ecx
    X86_AT(c, 0xcc91bu);
    x86_idiv(c, c.r[1], 4, 0xcc91bu);
    // 0cc91d  mov esi, edx
    X86_AT(c, 0xcc91du);
    c.r[6] = c.r[2];
    // 0cc91f  mov eax, edi
    X86_AT(c, 0xcc91fu);
    c.r[0] = c.r[7];
    // 0cc921  cdq 
    X86_AT(c, 0xcc921u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0cc922  mov ecx, 0x64
    X86_AT(c, 0xcc922u);
    c.r[1] = 0x64u;
    // 0cc927  idiv ecx
    X86_AT(c, 0xcc927u);
    x86_idiv(c, c.r[1], 4, 0xcc927u);
    // 0cc929  xchg edx, eax
    X86_AT(c, 0xcc929u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0cc92a  sub eax, esi
    X86_AT(c, 0xcc92au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0cc92c  cdq 
    X86_AT(c, 0xcc92cu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0cc92d  mov ecx, 0xa
    X86_AT(c, 0xcc92du);
    c.r[1] = 0xAu;
    // 0cc932  idiv ecx
    X86_AT(c, 0xcc932u);
    x86_idiv(c, c.r[1], 4, 0xcc932u);
    // 0cc934  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xcc934u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0cc937  mov eax, edi
    X86_AT(c, 0xcc937u);
    c.r[0] = c.r[7];
    // 0cc939  cdq 
    X86_AT(c, 0xcc939u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0cc93a  mov ecx, 0x3e8
    X86_AT(c, 0xcc93au);
    c.r[1] = 0x3E8u;
    // 0cc93f  idiv ecx
    X86_AT(c, 0xcc93fu);
    x86_idiv(c, c.r[1], 4, 0xcc93fu);
    // 0cc941  xchg ebx, eax
    X86_AT(c, 0xcc941u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0cc942  cmp dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xcc942u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0x0u, 0, 4);
    // 0cc946  je 0xcc94f
    X86_AT(c, 0xcc946u);
    if (x86_cc(c, 4)) { goto L_cc94f; }
    X86_TICK(c, 2);
    // 0cc948  mov dword ptr [ebp - 8], 1
    X86_AT(c, 0xcc948u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x1u);
L_cc94f:
    X86_TICK(c, 7);
    // 0cc94f  and esi, esi
    X86_AT(c, 0xcc94fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0cc951  je 0xcc96c
    X86_AT(c, 0xcc951u);
    if (x86_cc(c, 4)) { goto L_cc96c; }
    X86_TICK(c, 13);
    // 0cc953  push 3
    X86_AT(c, 0xcc953u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0cc955  push esi
    X86_AT(c, 0xcc955u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cc956  push 7
    X86_AT(c, 0xcc956u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc958  call 0xc8cb8
    X86_AT(c, 0xcc958u);
    push32(c, 0xcc95du); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xcc95du);
    X86_TICK(c, 11);
    // 0cc95d  push 0xf
    X86_AT(c, 0xcc95du);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cc95f  push 0x2274
    X86_AT(c, 0xcc95fu);
    { uint32_t v = 0x2274u; push32(c, v); }
    // 0cc964  call 0xcc830
    X86_AT(c, 0xcc964u);
    push32(c, 0xcc969u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xcc969u);
    X86_TICK(c, 2);
    // 0cc969  add esp, 0x14
    X86_AT(c, 0xcc969u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_cc96c:
    X86_TICK(c, 11);
    // 0cc96c  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xcc96cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0cc96f  and eax, eax
    X86_AT(c, 0xcc96fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cc971  je 0xcc98c
    X86_AT(c, 0xcc971u);
    if (x86_cc(c, 4)) { goto L_cc98c; }
    X86_TICK(c, 13);
    // 0cc973  push 3
    X86_AT(c, 0xcc973u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0cc975  push eax
    X86_AT(c, 0xcc975u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cc976  push 7
    X86_AT(c, 0xcc976u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc978  call 0xc8cb8
    X86_AT(c, 0xcc978u);
    push32(c, 0xcc97du); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xcc97du);
    X86_TICK(c, 11);
    // 0cc97d  push 0xf
    X86_AT(c, 0xcc97du);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cc97f  push 0x2294
    X86_AT(c, 0xcc97fu);
    { uint32_t v = 0x2294u; push32(c, v); }
    // 0cc984  call 0xcc830
    X86_AT(c, 0xcc984u);
    push32(c, 0xcc989u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xcc989u);
    X86_TICK(c, 2);
    // 0cc989  add esp, 0x14
    X86_AT(c, 0xcc989u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_cc98c:
    X86_TICK(c, 7);
    // 0cc98c  and ebx, ebx
    X86_AT(c, 0xcc98cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0cc98e  je 0xcc9a9
    X86_AT(c, 0xcc98eu);
    if (x86_cc(c, 4)) { goto L_cc9a9; }
    X86_TICK(c, 13);
    // 0cc990  push 3
    X86_AT(c, 0xcc990u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0cc992  push ebx
    X86_AT(c, 0xcc992u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cc993  push 7
    X86_AT(c, 0xcc993u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cc995  call 0xc8cb8
    X86_AT(c, 0xcc995u);
    push32(c, 0xcc99au); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xcc99au);
    X86_TICK(c, 11);
    // 0cc99a  push 0xf
    X86_AT(c, 0xcc99au);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cc99c  push 0x22b4
    X86_AT(c, 0xcc99cu);
    { uint32_t v = 0x22B4u; push32(c, v); }
    // 0cc9a1  call 0xcc830
    X86_AT(c, 0xcc9a1u);
    push32(c, 0xcc9a6u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xcc9a6u);
    X86_TICK(c, 2);
    // 0cc9a6  add esp, 0x14
    X86_AT(c, 0xcc9a6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_cc9a9:
    X86_TICK(c, 7);
    // 0cc9a9  and esi, esi
    X86_AT(c, 0xcc9a9u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0cc9ab  jne 0xcc9b7
    X86_AT(c, 0xcc9abu);
    if (x86_cc(c, 5)) { goto L_cc9b7; }
    X86_TICK(c, 12);
    // 0cc9ad  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0xcc9adu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 0cc9b1  jne 0xcc9b7
    X86_AT(c, 0xcc9b1u);
    if (x86_cc(c, 5)) { goto L_cc9b7; }
    X86_TICK(c, 7);
    // 0cc9b3  and ebx, ebx
    X86_AT(c, 0xcc9b3u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0cc9b5  je 0xcc9cd
    X86_AT(c, 0xcc9b5u);
    if (x86_cc(c, 4)) { goto L_cc9cd; }
L_cc9b7:
    X86_TICK(c, 12);
    // 0cc9b7  cmp dword ptr [0x43eb8], 0xffffffff
    X86_AT(c, 0xcc9b7u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x43EB8u))), 0xFFFFFFFFu, 0, 4);
    // 0cc9be  jne 0xcc9cd
    X86_AT(c, 0xcc9beu);
    if (x86_cc(c, 5)) { goto L_cc9cd; }
    X86_TICK(c, 9);
    // 0cc9c0  push 0x22cc
    X86_AT(c, 0xcc9c0u);
    { uint32_t v = 0x22CCu; push32(c, v); }
    // 0cc9c5  call 0xcc7bc
    X86_AT(c, 0xcc9c5u);
    push32(c, 0xcc9cau); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcc9cau);
    X86_TICK(c, 2);
    // 0cc9ca  add esp, 4
    X86_AT(c, 0xcc9cau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_cc9cd:
    X86_TICK(c, 14);
    // 0cc9cd  add dword ptr [0xb031a], edi
    X86_AT(c, 0xcc9cdu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB031Au)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[7], 0, 4)); }
    // 0cc9d3  call 0xcc6cc
    X86_AT(c, 0xcc9d3u);
    push32(c, 0xcc9d8u); x86_call_known(c, 0xcc6ccu, f_000cc6cc); X86_RET(c, 0xcc9d8u);
L_cc9d8:
    X86_TICK(c, 28);
    // 0cc9d8  pop edi
    X86_AT(c, 0xcc9d8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cc9d9  pop esi
    X86_AT(c, 0xcc9d9u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cc9da  pop ebx
    X86_AT(c, 0xcc9dau);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cc9db  leave 
    X86_AT(c, 0xcc9dbu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cc9dc  ret 
    X86_AT(c, 0xcc9dcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcc8b8u, "ran off the end of a function");
}
void f_000cc9e0(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0cc9e0  push esi
    X86_AT(c, 0xcc9e0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cc9e1  push edi
    X86_AT(c, 0xcc9e1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cc9e2  mov esi, 4
    X86_AT(c, 0xcc9e2u);
    c.r[6] = 0x4u;
    // 0cc9e7  cmp dword ptr [0xb52f8], 0
    X86_AT(c, 0xcc9e7u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB52F8u))), 0x0u, 0, 4);
    // 0cc9ee  je 0xcc9f7
    X86_AT(c, 0xcc9eeu);
    if (x86_cc(c, 4)) { goto L_cc9f7; }
    X86_TICK(c, 9);
    // 0cc9f0  push 0x22e4
    X86_AT(c, 0xcc9f0u);
    { uint32_t v = 0x22E4u; push32(c, v); }
    // 0cc9f5  jmp 0xcca33
    X86_AT(c, 0xcc9f5u);
    goto L_cca33;
L_cc9f7:
    X86_TICK(c, 12);
    // 0cc9f7  cmp dword ptr [0xb0332], 0
    X86_AT(c, 0xcc9f7u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB0332u))), 0x0u, 0, 4);
    // 0cc9fe  je 0xcca07
    X86_AT(c, 0xcc9feu);
    if (x86_cc(c, 4)) { goto L_cca07; }
    X86_TICK(c, 9);
    // 0cca00  push 0x22f8
    X86_AT(c, 0xcca00u);
    { uint32_t v = 0x22F8u; push32(c, v); }
    // 0cca05  jmp 0xcca33
    X86_AT(c, 0xcca05u);
    goto L_cca33;
L_cca07:
    X86_TICK(c, 19);
    // 0cca07  push 1
    X86_AT(c, 0xcca07u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cca09  push dword ptr [0xb033e]
    X86_AT(c, 0xcca09u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Eu))); push32(c, v); }
    // 0cca0f  push dword ptr [0xb033a]
    X86_AT(c, 0xcca0fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Au))); push32(c, v); }
    // 0cca15  call 0xcc538
    X86_AT(c, 0xcca15u);
    push32(c, 0xcca1au); x86_call_known(c, 0xcc538u, f_000cc538); X86_RET(c, 0xcca1au);
    X86_TICK(c, 12);
    // 0cca1a  xchg edi, eax
    X86_AT(c, 0xcca1au);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0cca1b  add esp, 0xc
    X86_AT(c, 0xcca1bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cca1e  cmp edi, 0xa5
    X86_AT(c, 0xcca1eu);
    (void)x86_sub(c, c.r[7], 0xA5u, 0, 4);
    // 0cca24  jl 0xcca2e
    X86_AT(c, 0xcca24u);
    if (x86_cc(c, 12)) { goto L_cca2e; }
    X86_TICK(c, 7);
    // 0cca26  cmp edi, 0xab
    X86_AT(c, 0xcca26u);
    (void)x86_sub(c, c.r[7], 0xABu, 0, 4);
    // 0cca2c  jle 0xcca47
    X86_AT(c, 0xcca2cu);
    if (x86_cc(c, 14)) { goto L_cca47; }
L_cca2e:
    X86_TICK(c, 2);
    // 0cca2e  push 0x2340
    X86_AT(c, 0xcca2eu);
    { uint32_t v = 0x2340u; push32(c, v); }
L_cca33:
    X86_TICK(c, 7);
    // 0cca33  call 0xcc7bc
    X86_AT(c, 0xcca33u);
    push32(c, 0xcca38u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xcca38u);
    X86_TICK(c, 9);
    // 0cca38  push 1
    X86_AT(c, 0xcca38u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cca3a  call 0xc5ca4
    X86_AT(c, 0xcca3au);
    push32(c, 0xcca3fu); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xcca3fu);
    X86_TICK(c, 9);
    // 0cca3f  add esp, 8
    X86_AT(c, 0xcca3fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cca42  jmp 0xccbd6
    X86_AT(c, 0xcca42u);
    goto L_ccbd6;
L_cca47:
    X86_TICK(c, 25);
    // 0cca47  mov dword ptr [0xbefcc], edi
    X86_AT(c, 0xcca47u);
    wr32((c.sbase[3] + (uint32_t)(0xBEFCCu)), c.r[7]);
    // 0cca4d  lea eax, [edi*4 - 0x238]
    X86_AT(c, 0xcca4du);
    c.r[0] = (uint32_t)(c.r[7] * 4 + 0xFFFFFDC8u);
    // 0cca54  mov dword ptr [0xbefe0], eax
    X86_AT(c, 0xcca54u);
    wr32((c.sbase[3] + (uint32_t)(0xBEFE0u)), c.r[0]);
    // 0cca59  mov dword ptr [0x4319c], eax
    X86_AT(c, 0xcca59u);
    wr32((c.sbase[3] + (uint32_t)(0x4319Cu)), c.r[0]);
    // 0cca5e  push dword ptr [0xb033e]
    X86_AT(c, 0xcca5eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Eu))); push32(c, v); }
    // 0cca64  push dword ptr [0xb033a]
    X86_AT(c, 0xcca64u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Au))); push32(c, v); }
    // 0cca6a  call 0xcf758
    X86_AT(c, 0xcca6au);
    push32(c, 0xcca6fu); x86_call_known(c, 0xcf758u, f_000cf758); X86_RET(c, 0xcca6fu);
    X86_TICK(c, 13);
    // 0cca6f  lea eax, [edi - 0xa4]
    X86_AT(c, 0xcca6fu);
    c.r[0] = (uint32_t)(c.r[7] + 0xFFFFFF5Cu);
    // 0cca75  mov dword ptr [0xb0332], eax
    X86_AT(c, 0xcca75u);
    wr32((c.sbase[3] + (uint32_t)(0xB0332u)), c.r[0]);
    // 0cca7a  add esp, 8
    X86_AT(c, 0xcca7au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cca7d  cmp edi, 0xa5
    X86_AT(c, 0xcca7du);
    (void)x86_sub(c, c.r[7], 0xA5u, 0, 4);
    // 0cca83  je 0xcca8d
    X86_AT(c, 0xcca83u);
    if (x86_cc(c, 4)) { goto L_cca8d; }
    X86_TICK(c, 7);
    // 0cca85  cmp edi, 0xa6
    X86_AT(c, 0xcca85u);
    (void)x86_sub(c, c.r[7], 0xA6u, 0, 4);
    // 0cca8b  jne 0xcca96
    X86_AT(c, 0xcca8bu);
    if (x86_cc(c, 5)) { goto L_cca96; }
L_cca8d:
    X86_TICK(c, 11);
    // 0cca8d  push 0xf
    X86_AT(c, 0xcca8du);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cca8f  push 0x236c
    X86_AT(c, 0xcca8fu);
    { uint32_t v = 0x236Cu; push32(c, v); }
    // 0cca94  jmp 0xcca9d
    X86_AT(c, 0xcca94u);
    goto L_cca9d;
L_cca96:
    X86_TICK(c, 4);
    // 0cca96  push 0xf
    X86_AT(c, 0xcca96u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cca98  push 0x2384
    X86_AT(c, 0xcca98u);
    { uint32_t v = 0x2384u; push32(c, v); }
L_cca9d:
    X86_TICK(c, 7);
    // 0cca9d  call 0xcc830
    X86_AT(c, 0xcca9du);
    push32(c, 0xccaa2u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xccaa2u);
    X86_TICK(c, 20);
    // 0ccaa2  add esp, 8
    X86_AT(c, 0xccaa2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ccaa5  mov eax, dword ptr [0xb0332]
    X86_AT(c, 0xccaa5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB0332u)));
    // 0ccaaa  push dword ptr [eax*4 + 0xa1e88]
    X86_AT(c, 0xccaaau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA1E88u))); push32(c, v); }
    // 0ccab1  push 7
    X86_AT(c, 0xccab1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ccab3  call 0xc8cdc
    X86_AT(c, 0xccab3u);
    push32(c, 0xccab8u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xccab8u);
    X86_TICK(c, 11);
    // 0ccab8  push 0xf
    X86_AT(c, 0xccab8u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0ccaba  push 0x239c
    X86_AT(c, 0xccabau);
    { uint32_t v = 0x239Cu; push32(c, v); }
    // 0ccabf  call 0xcc830
    X86_AT(c, 0xccabfu);
    push32(c, 0xccac4u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xccac4u);
    X86_TICK(c, 11);
    // 0ccac4  mov dword ptr [0xaa13c], 1
    X86_AT(c, 0xccac4u);
    wr32((c.sbase[3] + (uint32_t)(0xAA13Cu)), 0x1u);
    // 0ccace  add esp, 0x10
    X86_AT(c, 0xccaceu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0ccad1  cmp edi, 0xaa
    X86_AT(c, 0xccad1u);
    (void)x86_sub(c, c.r[7], 0xAAu, 0, 4);
    // 0ccad7  jne 0xccae3
    X86_AT(c, 0xccad7u);
    if (x86_cc(c, 5)) { goto L_ccae3; }
    X86_TICK(c, 7);
    // 0ccad9  call 0xe0c0c
    X86_AT(c, 0xccad9u);
    push32(c, 0xccadeu); x86_call_known(c, 0xe0c0cu, f_000e0c0c); X86_RET(c, 0xccadeu);
    X86_TICK(c, 7);
    // 0ccade  jmp 0xccbd6
    X86_AT(c, 0xccadeu);
    goto L_ccbd6;
L_ccae3:
    X86_TICK(c, 7);
    // 0ccae3  cmp edi, 0xab
    X86_AT(c, 0xccae3u);
    (void)x86_sub(c, c.r[7], 0xABu, 0, 4);
    // 0ccae9  jne 0xccbd6
    X86_AT(c, 0xccae9u);
    if (x86_cc(c, 5)) { goto L_ccbd6; }
    X86_TICK(c, 12);
    // 0ccaef  cmp dword ptr [0xb036a], 0
    X86_AT(c, 0xccaefu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB036Au))), 0x0u, 0, 4);
    // 0ccaf6  je 0xccb50
    X86_AT(c, 0xccaf6u);
    if (x86_cc(c, 4)) { goto L_ccb50; }
    X86_TICK(c, 12);
    // 0ccaf8  cmp dword ptr [0xb0376], 0
    X86_AT(c, 0xccaf8u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB0376u))), 0x0u, 0, 4);
    // 0ccaff  je 0xccb50
    X86_AT(c, 0xccaffu);
    if (x86_cc(c, 4)) { goto L_ccb50; }
    X86_TICK(c, 12);
    // 0ccb01  cmp dword ptr [0xb0372], 0
    X86_AT(c, 0xccb01u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB0372u))), 0x0u, 0, 4);
    // 0ccb08  je 0xccb50
    X86_AT(c, 0xccb08u);
    if (x86_cc(c, 4)) { goto L_ccb50; }
    X86_TICK(c, 12);
    // 0ccb0a  cmp dword ptr [0xb036e], 0
    X86_AT(c, 0xccb0au);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB036Eu))), 0x0u, 0, 4);
    // 0ccb11  je 0xccb50
    X86_AT(c, 0xccb11u);
    if (x86_cc(c, 4)) { goto L_ccb50; }
    X86_TICK(c, 9);
    // 0ccb13  push 0x1e
    X86_AT(c, 0xccb13u);
    { uint32_t v = 0x1Eu; push32(c, v); }
    // 0ccb15  call 0xd6660
    X86_AT(c, 0xccb15u);
    push32(c, 0xccb1au); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xccb1au);
    X86_TICK(c, 7);
    // 0ccb1a  call 0xe32c8
    X86_AT(c, 0xccb1au);
    push32(c, 0xccb1fu); x86_call_known(c, 0xe32c8u, f_000e32c8); X86_RET(c, 0xccb1fu);
    X86_TICK(c, 14);
    // 0ccb1f  add esp, 4
    X86_AT(c, 0xccb1fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ccb22  cmp dword ptr [0xb02fe], 0
    X86_AT(c, 0xccb22u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB02FEu))), 0x0u, 0, 4);
    // 0ccb29  je 0xccbd6
    X86_AT(c, 0xccb29u);
    if (x86_cc(c, 4)) { goto L_ccbd6; }
    X86_TICK(c, 12);
    // 0ccb2f  cmp dword ptr [0xb0322], 0
    X86_AT(c, 0xccb2fu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB0322u))), 0x0u, 0, 4);
    // 0ccb36  je 0xccbd6
    X86_AT(c, 0xccb36u);
    if (x86_cc(c, 4)) { goto L_ccbd6; }
    X86_TICK(c, 7);
    // 0ccb3c  call 0xd6790
    X86_AT(c, 0xccb3cu);
    push32(c, 0xccb41u); x86_call_known(c, 0xd6790u, f_000d6790); X86_RET(c, 0xccb41u);
    X86_TICK(c, 9);
    // 0ccb41  push 0
    X86_AT(c, 0xccb41u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ccb43  call 0xe7a38
    X86_AT(c, 0xccb43u);
    push32(c, 0xccb48u); x86_call_known(c, 0xe7a38u, f_000e7a38); X86_RET(c, 0xccb48u);
    X86_TICK(c, 9);
    // 0ccb48  add esp, 4
    X86_AT(c, 0xccb48u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ccb4b  jmp 0xccbd6
    X86_AT(c, 0xccb4bu);
    goto L_ccbd6;
L_ccb50:
    X86_TICK(c, 27);
    // 0ccb50  push 0xa
    X86_AT(c, 0xccb50u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0ccb52  push 0xf
    X86_AT(c, 0xccb52u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0ccb54  push 0xf
    X86_AT(c, 0xccb54u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0ccb56  push 0xa
    X86_AT(c, 0xccb56u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0ccb58  push 0x1f
    X86_AT(c, 0xccb58u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0ccb5a  push 0xb6
    X86_AT(c, 0xccb5au);
    { uint32_t v = 0xB6u; push32(c, v); }
    // 0ccb5f  push 0x107
    X86_AT(c, 0xccb5fu);
    { uint32_t v = 0x107u; push32(c, v); }
    // 0ccb64  push 0x6f
    X86_AT(c, 0xccb64u);
    { uint32_t v = 0x6Fu; push32(c, v); }
    // 0ccb66  push 0x172
    X86_AT(c, 0xccb66u);
    { uint32_t v = 0x172u; push32(c, v); }
    // 0ccb6b  push esi
    X86_AT(c, 0xccb6bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ccb6c  call 0xc9fbc
    X86_AT(c, 0xccb6cu);
    push32(c, 0xccb71u); x86_call_known(c, 0xc9fbcu, f_000c9fbc); X86_RET(c, 0xccb71u);
    X86_TICK(c, 9);
    // 0ccb71  push esi
    X86_AT(c, 0xccb71u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ccb72  call 0xca100
    X86_AT(c, 0xccb72u);
    push32(c, 0xccb77u); x86_call_known(c, 0xca100u, f_000ca100); X86_RET(c, 0xccb77u);
    X86_TICK(c, 11);
    // 0ccb77  push 2
    X86_AT(c, 0xccb77u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ccb79  push 0
    X86_AT(c, 0xccb79u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ccb7b  call 0xcc814
    X86_AT(c, 0xccb7bu);
    push32(c, 0xccb80u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xccb80u);
    X86_TICK(c, 11);
    // 0ccb80  push 0x23a8
    X86_AT(c, 0xccb80u);
    { uint32_t v = 0x23A8u; push32(c, v); }
    // 0ccb85  push esi
    X86_AT(c, 0xccb85u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ccb86  call 0xc8cdc
    X86_AT(c, 0xccb86u);
    push32(c, 0xccb8bu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xccb8bu);
    X86_TICK(c, 13);
    // 0ccb8b  add esp, 0x3c
    X86_AT(c, 0xccb8bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0ccb8e  push 0x23cc
    X86_AT(c, 0xccb8eu);
    { uint32_t v = 0x23CCu; push32(c, v); }
    // 0ccb93  push esi
    X86_AT(c, 0xccb93u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ccb94  call 0xc8cdc
    X86_AT(c, 0xccb94u);
    push32(c, 0xccb99u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xccb99u);
    X86_TICK(c, 11);
    // 0ccb99  push 0x2410
    X86_AT(c, 0xccb99u);
    { uint32_t v = 0x2410u; push32(c, v); }
    // 0ccb9e  push esi
    X86_AT(c, 0xccb9eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ccb9f  call 0xc8cdc
    X86_AT(c, 0xccb9fu);
    push32(c, 0xccba4u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xccba4u);
    X86_TICK(c, 11);
    // 0ccba4  push 0x2440
    X86_AT(c, 0xccba4u);
    { uint32_t v = 0x2440u; push32(c, v); }
    // 0ccba9  push esi
    X86_AT(c, 0xccba9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ccbaa  call 0xc8cdc
    X86_AT(c, 0xccbaau);
    push32(c, 0xccbafu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xccbafu);
    X86_TICK(c, 7);
    // 0ccbaf  call 0xcf604
    X86_AT(c, 0xccbafu);
    push32(c, 0xccbb4u); x86_call_known(c, 0xcf604u, f_000cf604); X86_RET(c, 0xccbb4u);
    X86_TICK(c, 11);
    // 0ccbb4  push 0
    X86_AT(c, 0xccbb4u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ccbb6  push 4
    X86_AT(c, 0xccbb6u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0ccbb8  call 0xca2d4
    X86_AT(c, 0xccbb8u);
    push32(c, 0xccbbdu); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xccbbdu);
    X86_TICK(c, 7);
    // 0ccbbd  call 0xd3370
    X86_AT(c, 0xccbbdu);
    push32(c, 0xccbc2u); x86_call_known(c, 0xd3370u, f_000d3370); X86_RET(c, 0xccbc2u);
    X86_TICK(c, 7);
    // 0ccbc2  call 0xd351c
    X86_AT(c, 0xccbc2u);
    push32(c, 0xccbc7u); x86_call_known(c, 0xd351cu, f_000d351c); X86_RET(c, 0xccbc7u);
    X86_TICK(c, 9);
    // 0ccbc7  push 7
    X86_AT(c, 0xccbc7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ccbc9  call 0xca0a0
    X86_AT(c, 0xccbc9u);
    push32(c, 0xccbceu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xccbceu);
    X86_TICK(c, 7);
    // 0ccbce  call 0xcc700
    X86_AT(c, 0xccbceu);
    push32(c, 0xccbd3u); x86_call_known(c, 0xcc700u, f_000cc700); X86_RET(c, 0xccbd3u);
    X86_TICK(c, 2);
    // 0ccbd3  add esp, 0x24
    X86_AT(c, 0xccbd3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
L_ccbd6:
    X86_TICK(c, 18);
    // 0ccbd6  pop edi
    X86_AT(c, 0xccbd6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ccbd7  pop esi
    X86_AT(c, 0xccbd7u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ccbd8  ret 
    X86_AT(c, 0xccbd8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcc9e0u, "ran off the end of a function");
}
void f_000ccbd6(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0ccbd6  pop edi
    X86_AT(c, 0xccbd6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ccbd7  pop esi
    X86_AT(c, 0xccbd7u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ccbd8  ret 
    X86_AT(c, 0xccbd8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xccbd6u, "ran off the end of a function");
}
void f_000ccbdc(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0ccbdc  push edi
    X86_AT(c, 0xccbdcu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ccbdd  push dword ptr [0xb0316]
    X86_AT(c, 0xccbddu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB0316u))); push32(c, v); }
    // 0ccbe3  push 1
    X86_AT(c, 0xccbe3u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ccbe5  call 0xc5df0
    X86_AT(c, 0xccbe5u);
    push32(c, 0xccbeau); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xccbeau);
    X86_TICK(c, 17);
    // 0ccbea  xchg edi, eax
    X86_AT(c, 0xccbeau);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0ccbeb  add esp, 8
    X86_AT(c, 0xccbebu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ccbee  cmp dword ptr [0xb0326], 9
    X86_AT(c, 0xccbeeu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB0326u))), 0x9u, 0, 4);
    // 0ccbf5  jne 0xccbfb
    X86_AT(c, 0xccbf5u);
    if (x86_cc(c, 5)) { goto L_ccbfb; }
    X86_TICK(c, 9);
    // 0ccbf7  add edi, edi
    X86_AT(c, 0xccbf7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[7], 0, 4); }
    // 0ccbf9  jmp 0xccc22
    X86_AT(c, 0xccbf9u);
    goto L_ccc22;
L_ccbfb:
    X86_TICK(c, 12);
    // 0ccbfb  cmp dword ptr [0xb0326], 8
    X86_AT(c, 0xccbfbu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB0326u))), 0x8u, 0, 4);
    // 0ccc02  jne 0xccc10
    X86_AT(c, 0xccc02u);
    if (x86_cc(c, 5)) { goto L_ccc10; }
    X86_TICK(c, 22);
    // 0ccc04  lea edi, [edi + edi*2]
    X86_AT(c, 0xccc04u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0ccc07  xchg edi, eax
    X86_AT(c, 0xccc07u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0ccc08  cdq 
    X86_AT(c, 0xccc08u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0ccc09  sub eax, edx
    X86_AT(c, 0xccc09u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0ccc0b  sar eax, 1
    X86_AT(c, 0xccc0bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0ccc0d  xchg edi, eax
    X86_AT(c, 0xccc0du);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0ccc0e  jmp 0xccc22
    X86_AT(c, 0xccc0eu);
    goto L_ccc22;
L_ccc10:
    X86_TICK(c, 11);
    // 0ccc10  mov eax, dword ptr [0xb0326]
    X86_AT(c, 0xccc10u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB0326u)));
    // 0ccc15  cmp eax, 0xa
    X86_AT(c, 0xccc15u);
    (void)x86_sub(c, c.r[0], 0xAu, 0, 4);
    // 0ccc18  je 0xccc1f
    X86_AT(c, 0xccc18u);
    if (x86_cc(c, 4)) { goto L_ccc1f; }
    X86_TICK(c, 7);
    // 0ccc1a  cmp eax, 0xb
    X86_AT(c, 0xccc1au);
    (void)x86_sub(c, c.r[0], 0xBu, 0, 4);
    // 0ccc1d  jne 0xccc22
    X86_AT(c, 0xccc1du);
    if (x86_cc(c, 5)) { goto L_ccc22; }
L_ccc1f:
    X86_TICK(c, 2);
    // 0ccc1f  lea edi, [edi + edi*2]
    X86_AT(c, 0xccc1fu);
    c.r[7] = (uint32_t)(c.r[7] + c.r[7] * 2);
L_ccc22:
    X86_TICK(c, 16);
    // 0ccc22  mov eax, edi
    X86_AT(c, 0xccc22u);
    c.r[0] = c.r[7];
    // 0ccc24  pop edi
    X86_AT(c, 0xccc24u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ccc25  ret 
    X86_AT(c, 0xccc25u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xccbdcu, "ran off the end of a function");
}
}
