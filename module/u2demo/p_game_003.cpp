#include "p_game_funcs.h"
namespace p_game {
void f_00090fe3(X86Cpu& c) {
    X86_TICK(c, 19);
    // 090fe3  pushfd 
    X86_AT(c, 0x90fe3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 090fe4  cli 
    X86_AT(c, 0x90fe4u);
    c.fl &= ~X86_IF;
    // 090fe5  mov bl, 0
    X86_AT(c, 0x90fe5u);
    s8(c, 3, 0x0u);
    // 090fe7  mov ah, 0x15
    X86_AT(c, 0x90fe7u);
    s8(c, 4, 0x15u);
    // 090fe9  call 0x8f910
    X86_AT(c, 0x90fe9u);
    push32(c, 0x90feeu); x86_call_known(c, 0x8f910u, f_0008f910); X86_RET(c, 0x90feeu);
    X86_TICK(c, 13);
    // 090fee  mov eax, dword ptr [0x89a8e]
    X86_AT(c, 0x90feeu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x89A8Eu)));
    // 090ff3  push eax
    X86_AT(c, 0x90ff3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 090ff4  call 0x8f664
    X86_AT(c, 0x90ff4u);
    push32(c, 0x90ff9u); x86_call_known(c, 0x8f664u, f_0008f664); X86_RET(c, 0x90ff9u);
    X86_TICK(c, 15);
    // 090ff9  add esp, 4
    X86_AT(c, 0x90ff9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 090ffc  mov eax, dword ptr [0x89a92]
    X86_AT(c, 0x90ffcu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x89A92u)));
    // 091001  push eax
    X86_AT(c, 0x91001u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 091002  call 0x8f690
    X86_AT(c, 0x91002u);
    push32(c, 0x91007u); x86_call_known(c, 0x8f690u, f_0008f690); X86_RET(c, 0x91007u);
    X86_TICK(c, 18);
    // 091007  add esp, 4
    X86_AT(c, 0x91007u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 09100a  popfd 
    X86_AT(c, 0x9100au);
    x86_popfd(c, 4);
    // 09100b  ret 
    X86_AT(c, 0x9100bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x90fe3u, "ran off the end of a function");
}
void f_0009100c(X86Cpu& c) {
    X86_TICK(c, 28);
    // 09100c  pushal 
    X86_AT(c, 0x9100cu);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 09100d  lea esi, [0x89aa5]
    X86_AT(c, 0x9100du);
    c.r[6] = (uint32_t)(0x89AA5u);
    // 091013  lea eax, [0x89c25]
    X86_AT(c, 0x91013u);
    c.r[0] = (uint32_t)(0x89C25u);
    // 091019  mov bx, 0xe50
    X86_AT(c, 0x91019u);
    s16(c, 3, 0xE50u);
    // 09101d  mov ecx, 4
    X86_AT(c, 0x9101du);
    c.r[1] = 0x4u;
    // 091022  mov dx, 1
    X86_AT(c, 0x91022u);
    s16(c, 2, 0x1u);
L_91026:
    X86_TICK(c, 82);
    // 091026  mov word ptr [esi + 0x10], 0
    X86_AT(c, 0x91026u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u)), 0x0u);
    // 09102c  mov dword ptr [esi], eax
    X86_AT(c, 0x9102cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 09102e  mov dword ptr [esi + 8], eax
    X86_AT(c, 0x9102eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), c.r[0]);
    // 091031  mov dword ptr [esi + 0xc], eax
    X86_AT(c, 0x91031u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), c.r[0]);
    // 091034  add eax, 0x10
    X86_AT(c, 0x91034u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x10u, 0, 4); }
    // 091039  mov dword ptr [esi + 4], eax
    X86_AT(c, 0x91039u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), c.r[0]);
    // 09103c  mov byte ptr [esi + 0x19], 0
    X86_AT(c, 0x9103cu);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x19u)), 0x0u);
    // 091040  mov byte ptr [esi + 0x1a], dl
    X86_AT(c, 0x91040u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x1Au)), g8(c, 2));
    // 091043  inc bx
    X86_AT(c, 0x91043u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 091045  mov word ptr [esi + 0x12], bx
    X86_AT(c, 0x91045u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x12u)), (c.r[3] & 0xFFFFu));
    // 091049  add bx, 2
    X86_AT(c, 0x91049u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x2u, 0, 2)); }
    // 09104d  mov word ptr [esi + 0x14], bx
    X86_AT(c, 0x9104du);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x14u)), (c.r[3] & 0xFFFFu));
    // 091051  inc bx
    X86_AT(c, 0x91051u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 091053  shl dl, 1
    X86_AT(c, 0x91053u);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 091055  add esi, 0x20
    X86_AT(c, 0x91055u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x20u, 0, 4); }
    // 091058  mov word ptr [esi + 0x10], 0
    X86_AT(c, 0x91058u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u)), 0x0u);
    // 09105e  mov dword ptr [esi], eax
    X86_AT(c, 0x9105eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 091060  mov dword ptr [esi + 8], eax
    X86_AT(c, 0x91060u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), c.r[0]);
    // 091063  mov dword ptr [esi + 0xc], eax
    X86_AT(c, 0x91063u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), c.r[0]);
    // 091066  add eax, 0x10
    X86_AT(c, 0x91066u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x10u, 0, 4); }
    // 09106b  mov dword ptr [esi + 4], eax
    X86_AT(c, 0x9106bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), c.r[0]);
    // 09106e  mov byte ptr [esi + 0x19], 0
    X86_AT(c, 0x9106eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x19u)), 0x0u);
    // 091072  mov byte ptr [esi + 0x1a], dl
    X86_AT(c, 0x91072u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x1Au)), g8(c, 2));
    // 091075  inc bx
    X86_AT(c, 0x91075u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 091077  mov word ptr [esi + 0x12], bx
    X86_AT(c, 0x91077u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x12u)), (c.r[3] & 0xFFFFu));
    // 09107b  inc bx
    X86_AT(c, 0x9107bu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 09107d  inc bx
    X86_AT(c, 0x9107du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 09107f  mov word ptr [esi + 0x14], bx
    X86_AT(c, 0x9107fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x14u)), (c.r[3] & 0xFFFFu));
    // 091083  sub word ptr [esi + 0x14], 4
    X86_AT(c, 0x91083u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0x14u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, 0x4u, 0, 2)); }
    // 091088  inc bx
    X86_AT(c, 0x91088u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 09108a  shl dl, 1
    X86_AT(c, 0x9108au);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 09108c  add esi, 0x20
    X86_AT(c, 0x9108cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x20u, 0, 4); }
    // 09108f  loop 0x91026
    X86_AT(c, 0x9108fu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x91026u); goto L_91026; }
    X86_TICK(c, 34);
    // 091091  popal 
    X86_AT(c, 0x91091u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 091092  ret 
    X86_AT(c, 0x91092u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9100cu, "ran off the end of a function");
}
void f_00091093(X86Cpu& c) {
    X86_TICK(c, 28);
    // 091093  pushal 
    X86_AT(c, 0x91093u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 091094  lea esi, [0x89ba5]
    X86_AT(c, 0x91094u);
    c.r[6] = (uint32_t)(0x89BA5u);
    // 09109a  lea eax, [0x89ca5]
    X86_AT(c, 0x9109au);
    c.r[0] = (uint32_t)(0x89CA5u);
    // 0910a0  mov bx, 0xe50
    X86_AT(c, 0x910a0u);
    s16(c, 3, 0xE50u);
    // 0910a4  mov ecx, 4
    X86_AT(c, 0x910a4u);
    c.r[1] = 0x4u;
    // 0910a9  mov dx, 1
    X86_AT(c, 0x910a9u);
    s16(c, 2, 0x1u);
L_910ad:
    X86_TICK(c, 44);
    // 0910ad  mov word ptr [esi + 0x10], 0
    X86_AT(c, 0x910adu);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u)), 0x0u);
    // 0910b3  mov dword ptr [esi], eax
    X86_AT(c, 0x910b3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 0910b5  mov dword ptr [esi + 8], eax
    X86_AT(c, 0x910b5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), c.r[0]);
    // 0910b8  mov dword ptr [esi + 0xc], eax
    X86_AT(c, 0x910b8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), c.r[0]);
    // 0910bb  add eax, 0x40
    X86_AT(c, 0x910bbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x40u, 0, 4); }
    // 0910c0  mov dword ptr [esi + 4], eax
    X86_AT(c, 0x910c0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), c.r[0]);
    // 0910c3  mov byte ptr [esi + 0x19], 0
    X86_AT(c, 0x910c3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x19u)), 0x0u);
    // 0910c7  mov byte ptr [esi + 0x1a], dl
    X86_AT(c, 0x910c7u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x1Au)), g8(c, 2));
    // 0910ca  inc bx
    X86_AT(c, 0x910cau);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 0910cc  mov word ptr [esi + 0x12], bx
    X86_AT(c, 0x910ccu);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x12u)), (c.r[3] & 0xFFFFu));
    // 0910d0  add bx, 2
    X86_AT(c, 0x910d0u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x2u, 0, 2)); }
    // 0910d4  mov word ptr [esi + 0x14], bx
    X86_AT(c, 0x910d4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x14u)), (c.r[3] & 0xFFFFu));
    // 0910d8  inc bx
    X86_AT(c, 0x910d8u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 0910da  shl dl, 1
    X86_AT(c, 0x910dau);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0910dc  add bx, 4
    X86_AT(c, 0x910dcu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x4u, 0, 2)); }
    // 0910e0  add esi, 0x20
    X86_AT(c, 0x910e0u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x20u, 0, 4); }
    // 0910e3  loop 0x910ad
    X86_AT(c, 0x910e3u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x910adu); goto L_910ad; }
    X86_TICK(c, 34);
    // 0910e5  popal 
    X86_AT(c, 0x910e5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0910e6  ret 
    X86_AT(c, 0x910e6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x91093u, "ran off the end of a function");
}
void f_000910e7(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0910e7  pushal 
    X86_AT(c, 0x910e7u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0910e8  xor cx, cx
    X86_AT(c, 0x910e8u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v ^ (c.r[1] & 0xFFFFu), 2)); }
    // 0910eb  lea esi, [0x89ba5]
    X86_AT(c, 0x910ebu);
    c.r[6] = (uint32_t)(0x89BA5u);
    // 0910f1  lea edi, [0x89aa5]
    X86_AT(c, 0x910f1u);
    c.r[7] = (uint32_t)(0x89AA5u);
L_910f7:
    X86_TICK(c, 16);
    // 0910f7  mov dx, cx
    X86_AT(c, 0x910f7u);
    s16(c, 2, (c.r[1] & 0xFFFFu));
    // 0910fa  shl dx, 3
    X86_AT(c, 0x910fau);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 2, r); }
    // 0910fe  add dx, 0xe51
    X86_AT(c, 0x910feu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0xE51u, 0, 2)); }
    // 091103  mov al, 0
    X86_AT(c, 0x91103u);
    s8(c, 0, 0x0u);
    // 091105  call 0x911ad
    X86_AT(c, 0x91105u);
    push32(c, 0x9110au); x86_call_known(c, 0x911adu, f_000911ad); X86_RET(c, 0x9110au);
    X86_TICK(c, 7);
    // 09110a  call 0x911ad
    X86_AT(c, 0x9110au);
    push32(c, 0x9110fu); x86_call_known(c, 0x911adu, f_000911ad); X86_RET(c, 0x9110fu);
    X86_TICK(c, 7);
    // 09110f  call 0x911ad
    X86_AT(c, 0x9110fu);
    push32(c, 0x91114u); x86_call_known(c, 0x911adu, f_000911ad); X86_RET(c, 0x91114u);
    X86_TICK(c, 9);
    // 091114  mov al, 0x40
    X86_AT(c, 0x91114u);
    s8(c, 0, 0x40u);
    // 091116  call 0x911ad
    X86_AT(c, 0x91116u);
    push32(c, 0x9111bu); x86_call_known(c, 0x911adu, f_000911ad); X86_RET(c, 0x9111bu);
    X86_TICK(c, 9);
    // 09111b  mov al, 0x4e
    X86_AT(c, 0x9111bu);
    s8(c, 0, 0x4Eu);
    // 09111d  call 0x911ad
    X86_AT(c, 0x9111du);
    push32(c, 0x91122u); x86_call_known(c, 0x911adu, f_000911ad); X86_RET(c, 0x91122u);
    X86_TICK(c, 9);
    // 091122  mov al, 0x37
    X86_AT(c, 0x91122u);
    s8(c, 0, 0x37u);
    // 091124  call 0x911ad
    X86_AT(c, 0x91124u);
    push32(c, 0x91129u); x86_call_known(c, 0x911adu, f_000911ad); X86_RET(c, 0x91129u);
    X86_TICK(c, 25);
    // 091129  mov byte ptr [esi + 0x18], 0
    X86_AT(c, 0x91129u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x18u)), 0x0u);
    // 09112d  mov byte ptr [edi + 0x18], 0
    X86_AT(c, 0x9112du);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)), 0x0u);
    // 091131  mov byte ptr [edi + 0x38], 0
    X86_AT(c, 0x91131u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x0u);
    // 091135  in al, dx
    X86_AT(c, 0x91135u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 091136  cmp al, 0xff
    X86_AT(c, 0x91136u);
    (void)x86_sub(c, g8(c, 0), 0xFFu, 0, 1);
    // 091138  je 0x9114a
    X86_AT(c, 0x91138u);
    if (x86_cc(c, 4)) { goto L_9114a; }
    X86_TICK(c, 6);
    // 09113e  mov byte ptr [esi + 0x18], 0xff
    X86_AT(c, 0x9113eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x18u)), 0xFFu);
    // 091142  mov byte ptr [edi + 0x18], 0xff
    X86_AT(c, 0x91142u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)), 0xFFu);
    // 091146  mov byte ptr [edi + 0x38], 0xff
    X86_AT(c, 0x91146u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0xFFu);
L_9114a:
    X86_TICK(c, 31);
    // 09114a  add esi, 0x20
    X86_AT(c, 0x9114au);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x20u, 0, 4); }
    // 09114d  add edi, 0x40
    X86_AT(c, 0x9114du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x40u, 0, 4); }
    // 091150  add dx, 2
    X86_AT(c, 0x91150u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 091154  mov al, 1
    X86_AT(c, 0x91154u);
    s8(c, 0, 0x1u);
    // 091156  out dx, al
    X86_AT(c, 0x91156u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 091157  add dx, 2
    X86_AT(c, 0x91157u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 09115b  mov al, 0
    X86_AT(c, 0x9115bu);
    s8(c, 0, 0x0u);
    // 09115d  call 0x911ad
    X86_AT(c, 0x9115du);
    push32(c, 0x91162u); x86_call_known(c, 0x911adu, f_000911ad); X86_RET(c, 0x91162u);
    X86_TICK(c, 7);
    // 091162  call 0x911ad
    X86_AT(c, 0x91162u);
    push32(c, 0x91167u); x86_call_known(c, 0x911adu, f_000911ad); X86_RET(c, 0x91167u);
    X86_TICK(c, 7);
    // 091167  call 0x911ad
    X86_AT(c, 0x91167u);
    push32(c, 0x9116cu); x86_call_known(c, 0x911adu, f_000911ad); X86_RET(c, 0x9116cu);
    X86_TICK(c, 9);
    // 09116c  mov al, 0x40
    X86_AT(c, 0x9116cu);
    s8(c, 0, 0x40u);
    // 09116e  call 0x911ad
    X86_AT(c, 0x9116eu);
    push32(c, 0x91173u); x86_call_known(c, 0x911adu, f_000911ad); X86_RET(c, 0x91173u);
    X86_TICK(c, 9);
    // 091173  mov al, 0x4e
    X86_AT(c, 0x91173u);
    s8(c, 0, 0x4Eu);
    // 091175  call 0x911ad
    X86_AT(c, 0x91175u);
    push32(c, 0x9117au); x86_call_known(c, 0x911adu, f_000911ad); X86_RET(c, 0x9117au);
    X86_TICK(c, 9);
    // 09117a  mov al, 0x33
    X86_AT(c, 0x9117au);
    s8(c, 0, 0x33u);
    // 09117c  call 0x911ad
    X86_AT(c, 0x9117cu);
    push32(c, 0x91181u); x86_call_known(c, 0x911adu, f_000911ad); X86_RET(c, 0x91181u);
    X86_TICK(c, 9);
    // 091181  inc cx
    X86_AT(c, 0x91181u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_inc(c, v, 2)); }
    // 091183  cmp cx, 4
    X86_AT(c, 0x91183u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x4u, 0, 2);
    // 091187  jb 0x910f7
    X86_AT(c, 0x91187u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x910f7u); goto L_910f7; }
    X86_TICK(c, 16);
    // 09118d  mov byte ptr [0x89a79], 0
    X86_AT(c, 0x9118du);
    wr8((c.sbase[3] + (uint32_t)(0x89A79u)), 0x0u);
    // 091194  lea esi, [0x89ba5]
    X86_AT(c, 0x91194u);
    c.r[6] = (uint32_t)(0x89BA5u);
    // 09119a  cmp byte ptr [esi + 0x18], 0
    X86_AT(c, 0x9119au);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x18u))), 0x0u, 0, 1);
    // 09119e  je 0x911ab
    X86_AT(c, 0x9119eu);
    if (x86_cc(c, 4)) { goto L_911ab; }
    X86_TICK(c, 2);
    // 0911a4  mov byte ptr [0x89a79], 1
    X86_AT(c, 0x911a4u);
    wr8((c.sbase[3] + (uint32_t)(0x89A79u)), 0x1u);
L_911ab:
    X86_TICK(c, 34);
    // 0911ab  popal 
    X86_AT(c, 0x911abu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0911ac  ret 
    X86_AT(c, 0x911acu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x910e7u, "ran off the end of a function");
}
void f_000911ad(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0911ad  jmp 0x911af
    X86_AT(c, 0x911adu);
    goto L_911af;
L_911af:
    X86_TICK(c, 19);
    // 0911af  out dx, al
    X86_AT(c, 0x911afu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0911b0  jmp 0x911b2
    X86_AT(c, 0x911b0u);
    goto L_911b2;
L_911b2:
    X86_TICK(c, 10);
    // 0911b2  ret 
    X86_AT(c, 0x911b2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x911adu, "ran off the end of a function");
}
void f_000911b3(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0911b3  pushal 
    X86_AT(c, 0x911b3u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0911b4  pushf 
    X86_AT(c, 0x911b4u);
    push16(c, c.fl & 0xFFFFu);
    // 0911b6  cli 
    X86_AT(c, 0x911b6u);
    c.fl &= ~X86_IF;
    // 0911b7  mov ecx, 4
    X86_AT(c, 0x911b7u);
    c.r[1] = 0x4u;
L_911bc:
    X86_TICK(c, 34);
    // 0911bc  mov dx, cx
    X86_AT(c, 0x911bcu);
    s16(c, 2, (c.r[1] & 0xFFFFu));
    // 0911bf  dec dx
    X86_AT(c, 0x911bfu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0911c1  shl dx, 3
    X86_AT(c, 0x911c1u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 2, r); }
    // 0911c5  add dx, 0xe53
    X86_AT(c, 0x911c5u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0xE53u, 0, 2)); }
    // 0911ca  mov al, 0
    X86_AT(c, 0x911cau);
    s8(c, 0, 0x0u);
    // 0911cc  out dx, al
    X86_AT(c, 0x911ccu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0911cd  loop 0x911bc
    X86_AT(c, 0x911cdu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x911bcu); goto L_911bc; }
    X86_TICK(c, 40);
    // 0911cf  popf 
    X86_AT(c, 0x911cfu);
    x86_popfd(c, 2);
    // 0911d1  popal 
    X86_AT(c, 0x911d1u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0911d2  ret 
    X86_AT(c, 0x911d2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x911b3u, "ran off the end of a function");
}
void f_000911d3(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0911d3  push ax
    X86_AT(c, 0x911d3u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0911d5  push dx
    X86_AT(c, 0x911d5u);
    { uint32_t v = (c.r[2] & 0xFFFFu); push16(c, v); }
    // 0911d7  pushf 
    X86_AT(c, 0x911d7u);
    push16(c, c.fl & 0xFFFFu);
    // 0911d9  cli 
    X86_AT(c, 0x911d9u);
    c.fl &= ~X86_IF;
    // 0911da  mov ax, word ptr [0x8984e]
    X86_AT(c, 0x911dau);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x8984Eu))));
    // 0911e0  call 0x91242
    X86_AT(c, 0x911e0u);
    push32(c, 0x911e5u); x86_call_known(c, 0x91242u, f_00091242); X86_RET(c, 0x911e5u);
    X86_TICK(c, 46);
    // 0911e5  mov al, byte ptr [0x89a76]
    X86_AT(c, 0x911e5u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x89A76u))));
    // 0911ea  or al, 1
    X86_AT(c, 0x911eau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x1u, 1)); }
    // 0911ec  mov dx, 0xe73
    X86_AT(c, 0x911ecu);
    s16(c, 2, 0xE73u);
    // 0911f0  out dx, al
    X86_AT(c, 0x911f0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0911f1  mov byte ptr [0x89a76], al
    X86_AT(c, 0x911f1u);
    wr8((c.sbase[3] + (uint32_t)(0x89A76u)), g8(c, 0));
    // 0911f6  popf 
    X86_AT(c, 0x911f6u);
    x86_popfd(c, 2);
    // 0911f8  pop dx
    X86_AT(c, 0x911f8u);
    { uint32_t v = pop16(c); s16(c, 2, v); }
    // 0911fa  pop ax
    X86_AT(c, 0x911fau);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0911fc  ret 
    X86_AT(c, 0x911fcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x911d3u, "ran off the end of a function");
}
void f_00091214(X86Cpu& c) {
    X86_TICK(c, 46);
    // 091214  pushf 
    X86_AT(c, 0x91214u);
    push16(c, c.fl & 0xFFFFu);
    // 091216  cli 
    X86_AT(c, 0x91216u);
    c.fl &= ~X86_IF;
    // 091217  mov al, byte ptr [0x89a76]
    X86_AT(c, 0x91217u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x89A76u))));
    // 09121c  and al, 0xfe
    X86_AT(c, 0x9121cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFEu, 1)); }
    // 09121e  mov dx, 0xe73
    X86_AT(c, 0x9121eu);
    s16(c, 2, 0xE73u);
    // 091222  out dx, al
    X86_AT(c, 0x91222u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 091223  mov byte ptr [0x89a76], al
    X86_AT(c, 0x91223u);
    wr8((c.sbase[3] + (uint32_t)(0x89A76u)), g8(c, 0));
    // 091228  popf 
    X86_AT(c, 0x91228u);
    x86_popfd(c, 2);
    // 09122a  ret 
    X86_AT(c, 0x9122au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x91214u, "ran off the end of a function");
}
void f_00091242(X86Cpu& c) {
    X86_TICK(c, 80);
    // 091242  push dx
    X86_AT(c, 0x91242u);
    { uint32_t v = (c.r[2] & 0xFFFFu); push16(c, v); }
    // 091244  pushf 
    X86_AT(c, 0x91244u);
    push16(c, c.fl & 0xFFFFu);
    // 091246  cli 
    X86_AT(c, 0x91246u);
    c.fl &= ~X86_IF;
    // 091247  mov dx, 0xe77
    X86_AT(c, 0x91247u);
    s16(c, 2, 0xE77u);
    // 09124b  push ax
    X86_AT(c, 0x9124bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 09124d  mov al, 0x30
    X86_AT(c, 0x9124du);
    s8(c, 0, 0x30u);
    // 09124f  out dx, al
    X86_AT(c, 0x9124fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 091250  pop ax
    X86_AT(c, 0x91250u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 091252  mov dx, 0xe74
    X86_AT(c, 0x91252u);
    s16(c, 2, 0xE74u);
    // 091256  out dx, al
    X86_AT(c, 0x91256u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 091257  mov al, ah
    X86_AT(c, 0x91257u);
    s8(c, 0, g8(c, 4));
    // 091259  out dx, al
    X86_AT(c, 0x91259u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 09125a  popf 
    X86_AT(c, 0x9125au);
    x86_popfd(c, 2);
    // 09125c  pop dx
    X86_AT(c, 0x9125cu);
    { uint32_t v = pop16(c); s16(c, 2, v); }
    // 09125e  ret 
    X86_AT(c, 0x9125eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x91242u, "ran off the end of a function");
}
void f_0009125f(X86Cpu& c) {
    X86_TICK(c, 57);
    // 09125f  mov dx, 0xe77
    X86_AT(c, 0x9125fu);
    s16(c, 2, 0xE77u);
    // 091263  mov al, 0
    X86_AT(c, 0x91263u);
    s8(c, 0, 0x0u);
    // 091265  out dx, al
    X86_AT(c, 0x91265u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 091266  mov dx, 0xe74
    X86_AT(c, 0x91266u);
    s16(c, 2, 0xE74u);
    // 09126a  in al, dx
    X86_AT(c, 0x9126au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 09126b  mov ah, al
    X86_AT(c, 0x9126bu);
    s8(c, 4, g8(c, 0));
    // 09126d  in al, dx
    X86_AT(c, 0x9126du);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 09126e  xchg ah, al
    X86_AT(c, 0x9126eu);
    { uint32_t t = g8(c, 4); s8(c, 4, g8(c, 0)); s8(c, 0, t); }
    // 091270  ret 
    X86_AT(c, 0x91270u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9125fu, "ran off the end of a function");
}
void f_00091271(X86Cpu& c) {
    X86_TICK(c, 82);
    // 091271  push dx
    X86_AT(c, 0x91271u);
    { uint32_t v = (c.r[2] & 0xFFFFu); push16(c, v); }
    // 091273  mov dx, 0xe77
    X86_AT(c, 0x91273u);
    s16(c, 2, 0xE77u);
    // 091277  pushf 
    X86_AT(c, 0x91277u);
    push16(c, c.fl & 0xFFFFu);
    // 091279  cli 
    X86_AT(c, 0x91279u);
    c.fl &= ~X86_IF;
    // 09127a  push ax
    X86_AT(c, 0x9127au);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 09127c  mov al, 0x70
    X86_AT(c, 0x9127cu);
    s8(c, 0, 0x70u);
    // 09127e  out dx, al
    X86_AT(c, 0x9127eu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 09127f  nop 
    X86_AT(c, 0x9127fu);
    // 091280  mov dx, 0xe75
    X86_AT(c, 0x91280u);
    s16(c, 2, 0xE75u);
    // 091284  pop ax
    X86_AT(c, 0x91284u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 091286  out dx, al
    X86_AT(c, 0x91286u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 091287  mov al, ah
    X86_AT(c, 0x91287u);
    s8(c, 0, g8(c, 4));
    // 091289  out dx, al
    X86_AT(c, 0x91289u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 09128a  popf 
    X86_AT(c, 0x9128au);
    x86_popfd(c, 2);
    // 09128c  pop dx
    X86_AT(c, 0x9128cu);
    { uint32_t v = pop16(c); s16(c, 2, v); }
    // 09128e  ret 
    X86_AT(c, 0x9128eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x91271u, "ran off the end of a function");
}
void f_000912af(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0912af  cmp byte ptr [0x89a79], 0
    X86_AT(c, 0x912afu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x89A79u))), 0x0u, 0, 1);
    // 0912b6  jne 0x91318
    X86_AT(c, 0x912b6u);
    if (x86_cc(c, 5)) { goto L_91318; }
    X86_TICK(c, 13);
    // 0912bc  push eax
    X86_AT(c, 0x912bcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0912bd  push ebx
    X86_AT(c, 0x912bdu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0912be  movzx ebx, al
    X86_AT(c, 0x912beu);
    c.r[3] = g8(c, 0);
    // 0912c1  mov ax, word ptr cs:[ebx*2 + 0x90b24]
    X86_AT(c, 0x912c1u);
    s16(c, 0, rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0x90B24u))));
    // 0912ca  mov bx, 0x10
    X86_AT(c, 0x912cau);
    s16(c, 3, 0x10u);
L_912ce:
    X86_TICK(c, 7);
    // 0912ce  cmp ax, 0x7d
    X86_AT(c, 0x912ceu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x7Du, 0, 2);
    // 0912d2  ja 0x912dc
    X86_AT(c, 0x912d2u);
    if (x86_cc(c, 7)) { goto L_912dc; }
    X86_TICK(c, 13);
    // 0912d4  shl ax, 1
    X86_AT(c, 0x912d4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 0912d7  shl bx, 1
    X86_AT(c, 0x912d7u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 0912da  jmp 0x912ce
    X86_AT(c, 0x912dau);
    X86_POLL(c, 0x912ceu); goto L_912ce;
L_912dc:
    X86_TICK(c, 7);
    // 0912dc  cmp ax, 0x3ff
    X86_AT(c, 0x912dcu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x3FFu, 0, 2);
    // 0912e0  jb 0x912ee
    X86_AT(c, 0x912e0u);
    if (x86_cc(c, 2)) { goto L_912ee; }
    X86_TICK(c, 13);
    // 0912e6  shr ax, 1
    X86_AT(c, 0x912e6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 0912e9  shr bx, 1
    X86_AT(c, 0x912e9u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 0912ec  jmp 0x912dc
    X86_AT(c, 0x912ecu);
    X86_POLL(c, 0x912dcu); goto L_912dc;
L_912ee:
    X86_TICK(c, 31);
    // 0912ee  pushf 
    X86_AT(c, 0x912eeu);
    push16(c, c.fl & 0xFFFFu);
    // 0912f0  cli 
    X86_AT(c, 0x912f0u);
    c.fl &= ~X86_IF;
    // 0912f1  mov word ptr [0x8984e], ax
    X86_AT(c, 0x912f1u);
    wr16((c.sbase[3] + (uint32_t)(0x8984Eu)), (c.r[0] & 0xFFFFu));
    // 0912f7  mov word ptr [0x89847], bx
    X86_AT(c, 0x912f7u);
    wr16((c.sbase[3] + (uint32_t)(0x89847u)), (c.r[3] & 0xFFFFu));
    // 0912fe  mov ecx, eax
    X86_AT(c, 0x912feu);
    c.r[1] = c.r[0];
    // 091300  sub ecx, 2
    X86_AT(c, 0x91300u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x2u, 0, 4); }
    // 091303  neg ecx
    X86_AT(c, 0x91303u);
    { uint32_t v = c.r[1]; c.r[1] = x86_neg(c, v, 4); }
    // 091305  mov bl, 0xff
    X86_AT(c, 0x91305u);
    s8(c, 3, 0xFFu);
    // 091307  push ecx
    X86_AT(c, 0x91307u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 091308  push ebx
    X86_AT(c, 0x91308u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 091309  call 0x8f4e9
    X86_AT(c, 0x91309u);
    push32(c, 0x9130eu); x86_call_known(c, 0x8f4e9u, f_0008f4e9); X86_RET(c, 0x9130eu);
    X86_TICK(c, 15);
    // 09130e  add esp, 8
    X86_AT(c, 0x9130eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 091311  popf 
    X86_AT(c, 0x91311u);
    x86_popfd(c, 2);
    // 091313  jmp 0x9134c
    X86_AT(c, 0x91313u);
    goto L_9134c;
L_91318:
    X86_TICK(c, 13);
    // 091318  push eax
    X86_AT(c, 0x91318u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 091319  push ebx
    X86_AT(c, 0x91319u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 09131a  movzx ebx, al
    X86_AT(c, 0x9131au);
    c.r[3] = g8(c, 0);
    // 09131d  mov ax, word ptr cs:[ebx*2 + 0x90922]
    X86_AT(c, 0x9131du);
    s16(c, 0, rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0x90922u))));
    // 091326  mov bx, 0x10
    X86_AT(c, 0x91326u);
    s16(c, 3, 0x10u);
L_9132a:
    X86_TICK(c, 7);
    // 09132a  cmp ax, 0x450
    X86_AT(c, 0x9132au);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x450u, 0, 2);
    // 09132e  ja 0x9133c
    X86_AT(c, 0x9132eu);
    if (x86_cc(c, 7)) { goto L_9133c; }
    X86_TICK(c, 13);
    // 091334  shl ax, 1
    X86_AT(c, 0x91334u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 091337  shl bx, 1
    X86_AT(c, 0x91337u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 09133a  jmp 0x9132a
    X86_AT(c, 0x9133au);
    X86_POLL(c, 0x9132au); goto L_9132a;
L_9133c:
    X86_TICK(c, 18);
    // 09133c  pushfd 
    X86_AT(c, 0x9133cu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 09133d  cli 
    X86_AT(c, 0x9133du);
    c.fl &= ~X86_IF;
    // 09133e  mov word ptr [0x8984e], ax
    X86_AT(c, 0x9133eu);
    wr16((c.sbase[3] + (uint32_t)(0x8984Eu)), (c.r[0] & 0xFFFFu));
    // 091344  mov word ptr [0x89847], bx
    X86_AT(c, 0x91344u);
    wr16((c.sbase[3] + (uint32_t)(0x89847u)), (c.r[3] & 0xFFFFu));
    // 09134b  popfd 
    X86_AT(c, 0x9134bu);
    x86_popfd(c, 4);
L_9134c:
    X86_TICK(c, 18);
    // 09134c  pop ebx
    X86_AT(c, 0x9134cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 09134d  pop eax
    X86_AT(c, 0x9134du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 09134e  ret 
    X86_AT(c, 0x9134eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x912afu, "ran off the end of a function");
}
void f_0009134f(X86Cpu& c) {
    X86_TICK(c, 26);
    // 09134f  push eax
    X86_AT(c, 0x9134fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 091350  push ds
    X86_AT(c, 0x91350u);
    push32(c, c.sreg[3]);
    // 091351  push es
    X86_AT(c, 0x91351u);
    push32(c, c.sreg[0]);
    // 091352  mov ax, 0x14
    X86_AT(c, 0x91352u);
    s16(c, 0, 0x14u);
    // 091356  mov ds, eax
    X86_AT(c, 0x91356u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 091358  mov es, eax
    X86_AT(c, 0x91358u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 09135a  cld 
    X86_AT(c, 0x9135au);
    c.fl &= ~X86_DF;
    // 09135b  cmp byte ptr [0x89a98], 0
    X86_AT(c, 0x9135bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x89A98u))), 0x0u, 0, 1);
    // 091362  jne 0x9137e
    X86_AT(c, 0x91362u);
    if (x86_cc(c, 5)) { goto L_9137e; }
    X86_TICK(c, 10);
    // 091368  mov dword ptr [0x89a9f], esp
    X86_AT(c, 0x91368u);
    wr32((c.sbase[3] + (uint32_t)(0x89A9Fu)), c.r[4]);
    // 09136e  mov word ptr [0x89aa3], ss
    X86_AT(c, 0x9136eu);
    wr16((c.sbase[3] + (uint32_t)(0x89AA3u)), (uint32_t)c.sreg[2]);
    // 091374  mov eax, ds
    X86_AT(c, 0x91374u);
    c.r[0] = (uint32_t)c.sreg[3];
    // 091376  mov ss, eax
    X86_AT(c, 0x91376u);
    x86_load_seg(c, 2, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 091378  lea esp, [0x8a3a5]
    X86_AT(c, 0x91378u);
    c.r[4] = (uint32_t)(0x8A3A5u);
L_9137e:
    X86_TICK(c, 53);
    // 09137e  inc byte ptr [0x89a98]
    X86_AT(c, 0x9137eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89A98u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 091384  sti 
    X86_AT(c, 0x91384u);
    c.fl |= X86_IF;
    // 091385  push fs
    X86_AT(c, 0x91385u);
    push32(c, c.sreg[4]);
    // 091387  push gs
    X86_AT(c, 0x91387u);
    push32(c, c.sreg[5]);
    // 091389  pushal 
    X86_AT(c, 0x91389u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 09138a  mov dx, 0xe70
    X86_AT(c, 0x9138au);
    s16(c, 2, 0xE70u);
    // 09138e  in ax, dx
    X86_AT(c, 0x9138eu);
    s16(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 2));
    // 091390  xor ax, 0xffff
    X86_AT(c, 0x91390u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ 0xFFFFu, 2)); }
    // 091394  call 0x9145a
    X86_AT(c, 0x91394u);
    push32(c, 0x91399u); x86_call_known(c, 0x9145au, f_0009145a); X86_RET(c, 0x91399u);
    X86_TICK(c, 7);
    // 091399  call 0x91476
    X86_AT(c, 0x91399u);
    push32(c, 0x9139eu); x86_call_known(c, 0x91476u, f_00091476); X86_RET(c, 0x9139eu);
    X86_TICK(c, 7);
    // 09139e  call 0x91496
    X86_AT(c, 0x9139eu);
    push32(c, 0x913a3u); x86_call_known(c, 0x91496u, f_00091496); X86_RET(c, 0x913a3u);
    X86_TICK(c, 7);
    // 0913a3  call 0x8f8c5
    X86_AT(c, 0x913a3u);
    push32(c, 0x913a8u); x86_call_known(c, 0x8f8c5u, f_0008f8c5); X86_RET(c, 0x913a8u);
    X86_TICK(c, 45);
    // 0913a8  popal 
    X86_AT(c, 0x913a8u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0913a9  pop gs
    X86_AT(c, 0x913a9u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0913ab  pop fs
    X86_AT(c, 0x913abu);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0913ad  cli 
    X86_AT(c, 0x913adu);
    c.fl &= ~X86_IF;
    // 0913ae  dec byte ptr [0x89a98]
    X86_AT(c, 0x913aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89A98u)); uint32_t v = rd8(ea); wr8(ea, x86_dec(c, v, 1)); }
    // 0913b4  jne 0x913c6
    X86_AT(c, 0x913b4u);
    if (x86_cc(c, 5)) { goto L_913c6; }
    X86_TICK(c, 8);
    // 0913ba  mov esp, dword ptr [0x89a9f]
    X86_AT(c, 0x913bau);
    c.r[4] = rd32((c.sbase[3] + (uint32_t)(0x89A9Fu)));
    // 0913c0  mov ss, word ptr [0x89aa3]
    X86_AT(c, 0x913c0u);
    x86_load_seg(c, 2, rd16((c.sbase[3] + (uint32_t)(0x89AA3u))) & 0xFFFFu);
L_913c6:
    X86_TICK(c, 18);
    // 0913c6  pop es
    X86_AT(c, 0x913c6u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0913c7  pop ds
    X86_AT(c, 0x913c7u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0913c8  pop eax
    X86_AT(c, 0x913c8u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0913c9  iretd 
    X86_AT(c, 0x913c9u);
    x86_iret(c, 4); return;
    x86_fault(c, 0x9134fu, "ran off the end of a function");
}
void f_000913ca(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0913ca  push eax
    X86_AT(c, 0x913cau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0913cb  push ds
    X86_AT(c, 0x913cbu);
    push32(c, c.sreg[3]);
    // 0913cc  push es
    X86_AT(c, 0x913ccu);
    push32(c, c.sreg[0]);
    // 0913cd  mov ax, 0x14
    X86_AT(c, 0x913cdu);
    s16(c, 0, 0x14u);
    // 0913d1  mov ds, eax
    X86_AT(c, 0x913d1u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0913d3  mov es, eax
    X86_AT(c, 0x913d3u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0913d5  cld 
    X86_AT(c, 0x913d5u);
    c.fl &= ~X86_DF;
    // 0913d6  cmp byte ptr [0x89a97], 0
    X86_AT(c, 0x913d6u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x89A97u))), 0x0u, 0, 1);
    // 0913dd  jne 0x913f9
    X86_AT(c, 0x913ddu);
    if (x86_cc(c, 5)) { goto L_913f9; }
    X86_TICK(c, 10);
    // 0913e3  mov dword ptr [0x89a99], esp
    X86_AT(c, 0x913e3u);
    wr32((c.sbase[3] + (uint32_t)(0x89A99u)), c.r[4]);
    // 0913e9  mov word ptr [0x89a9d], ss
    X86_AT(c, 0x913e9u);
    wr16((c.sbase[3] + (uint32_t)(0x89A9Du)), (uint32_t)c.sreg[2]);
    // 0913ef  mov eax, ds
    X86_AT(c, 0x913efu);
    c.r[0] = (uint32_t)c.sreg[3];
    // 0913f1  mov ss, eax
    X86_AT(c, 0x913f1u);
    x86_load_seg(c, 2, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0913f3  lea esp, [0x8a1a5]
    X86_AT(c, 0x913f3u);
    c.r[4] = (uint32_t)(0x8A1A5u);
L_913f9:
    X86_TICK(c, 51);
    // 0913f9  inc byte ptr [0x89a97]
    X86_AT(c, 0x913f9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89A97u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 0913ff  sti 
    X86_AT(c, 0x913ffu);
    c.fl |= X86_IF;
    // 091400  push fs
    X86_AT(c, 0x91400u);
    push32(c, c.sreg[4]);
    // 091402  push gs
    X86_AT(c, 0x91402u);
    push32(c, c.sreg[5]);
    // 091404  pushal 
    X86_AT(c, 0x91404u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 091405  mov dx, 0xe73
    X86_AT(c, 0x91405u);
    s16(c, 2, 0xE73u);
    // 091409  in al, dx
    X86_AT(c, 0x91409u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 09140a  test al, 1
    X86_AT(c, 0x9140au);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 09140c  je 0x91413
    X86_AT(c, 0x9140cu);
    if (x86_cc(c, 4)) { goto L_91413; }
    X86_TICK(c, 7);
    // 09140e  call 0x914bf
    X86_AT(c, 0x9140eu);
    push32(c, 0x91413u); x86_call_known(c, 0x914bfu, f_000914bf); X86_RET(c, 0x91413u);
L_91413:
    X86_TICK(c, 7);
    // 091413  test al, 2
    X86_AT(c, 0x91413u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 091415  je 0x9141c
    X86_AT(c, 0x91415u);
    if (x86_cc(c, 4)) { goto L_9141c; }
    X86_TICK(c, 7);
    // 091417  call 0x91534
    X86_AT(c, 0x91417u);
    push32(c, 0x9141cu); x86_call_known(c, 0x91534u, f_00091534); X86_RET(c, 0x9141cu);
L_9141c:
    X86_TICK(c, 9);
    // 09141c  cli 
    X86_AT(c, 0x9141cu);
    c.fl &= ~X86_IF;
    // 09141d  call 0x8f8c5
    X86_AT(c, 0x9141du);
    push32(c, 0x91422u); x86_call_known(c, 0x8f8c5u, f_0008f8c5); X86_RET(c, 0x91422u);
    X86_TICK(c, 7);
    // 091422  test al, 1
    X86_AT(c, 0x91422u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 091424  je 0x91438
    X86_AT(c, 0x91424u);
    if (x86_cc(c, 4)) { goto L_91438; }
    X86_TICK(c, 7);
    // 091426  call 0x8f8bf
    X86_AT(c, 0x91426u);
    push32(c, 0x9142bu); x86_call_known(c, 0x8f8bfu, f_0008f8bf); X86_RET(c, 0x9142bu);
    X86_TICK(c, 7);
    // 09142b  or al, al
    X86_AT(c, 0x9142bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | g8(c, 0), 1)); }
    // 09142d  jne 0x91438
    X86_AT(c, 0x9142du);
    if (x86_cc(c, 5)) { goto L_91438; }
    X86_TICK(c, 7);
    // 091433  call 0x91660
    X86_AT(c, 0x91433u);
    push32(c, 0x91438u); x86_call_known(c, 0x91660u, f_00091660); X86_RET(c, 0x91438u);
L_91438:
    X86_TICK(c, 45);
    // 091438  popal 
    X86_AT(c, 0x91438u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 091439  pop gs
    X86_AT(c, 0x91439u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 09143b  pop fs
    X86_AT(c, 0x9143bu);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 09143d  cli 
    X86_AT(c, 0x9143du);
    c.fl &= ~X86_IF;
    // 09143e  dec byte ptr [0x89a97]
    X86_AT(c, 0x9143eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89A97u)); uint32_t v = rd8(ea); wr8(ea, x86_dec(c, v, 1)); }
    // 091444  jne 0x91456
    X86_AT(c, 0x91444u);
    if (x86_cc(c, 5)) { goto L_91456; }
    X86_TICK(c, 8);
    // 09144a  mov esp, dword ptr [0x89a99]
    X86_AT(c, 0x9144au);
    c.r[4] = rd32((c.sbase[3] + (uint32_t)(0x89A99u)));
    // 091450  mov ss, word ptr [0x89a9d]
    X86_AT(c, 0x91450u);
    x86_load_seg(c, 2, rd16((c.sbase[3] + (uint32_t)(0x89A9Du))) & 0xFFFFu);
L_91456:
    X86_TICK(c, 18);
    // 091456  pop es
    X86_AT(c, 0x91456u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 091457  pop ds
    X86_AT(c, 0x91457u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 091458  pop eax
    X86_AT(c, 0x91458u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 091459  iretd 
    X86_AT(c, 0x91459u);
    x86_iret(c, 4); return;
    x86_fault(c, 0x913cau, "ran off the end of a function");
}
void f_0009145a(X86Cpu& c) {
    X86_TICK(c, 11);
    // 09145a  push ax
    X86_AT(c, 0x9145au);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 09145c  mov al, ah
    X86_AT(c, 0x9145cu);
    s8(c, 0, g8(c, 4));
    // 09145e  and al, 0xf
    X86_AT(c, 0x9145eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 091460  je 0x91473
    X86_AT(c, 0x91460u);
    if (x86_cc(c, 4)) { goto L_91473; }
    X86_TICK(c, 2);
    // 091462  xor ecx, ecx
    X86_AT(c, 0x91462u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v ^ c.r[1], 4); }
L_91464:
    X86_TICK(c, 8);
    // 091464  shr al, 1
    X86_AT(c, 0x91464u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 091466  jae 0x9146d
    X86_AT(c, 0x91466u);
    if (x86_cc(c, 3)) { goto L_9146d; }
    X86_TICK(c, 7);
    // 091468  call 0x91592
    X86_AT(c, 0x91468u);
    push32(c, 0x9146du); x86_call_known(c, 0x91592u, f_00091592); X86_RET(c, 0x9146du);
L_9146d:
    X86_TICK(c, 9);
    // 09146d  inc ecx
    X86_AT(c, 0x9146du);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 09146e  cmp ecx, 4
    X86_AT(c, 0x9146eu);
    (void)x86_sub(c, c.r[1], 0x4u, 0, 4);
    // 091471  jb 0x91464
    X86_AT(c, 0x91471u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x91464u); goto L_91464; }
L_91473:
    X86_TICK(c, 14);
    // 091473  pop ax
    X86_AT(c, 0x91473u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 091475  ret 
    X86_AT(c, 0x91475u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9145au, "ran off the end of a function");
}
void f_00091476(X86Cpu& c) {
    X86_TICK(c, 9);
    // 091476  push ax
    X86_AT(c, 0x91476u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 091478  or al, al
    X86_AT(c, 0x91478u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | g8(c, 0), 1)); }
    // 09147a  je 0x91493
    X86_AT(c, 0x9147au);
    if (x86_cc(c, 4)) { goto L_91493; }
    X86_TICK(c, 2);
    // 09147c  xor ecx, ecx
    X86_AT(c, 0x9147cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v ^ c.r[1], 4); }
L_9147e:
    X86_TICK(c, 8);
    // 09147e  shr al, 1
    X86_AT(c, 0x9147eu);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 091480  jae 0x9148b
    X86_AT(c, 0x91480u);
    if (x86_cc(c, 3)) { goto L_9148b; }
    X86_TICK(c, 7);
    // 091486  call 0x915f2
    X86_AT(c, 0x91486u);
    push32(c, 0x9148bu); x86_call_known(c, 0x915f2u, f_000915f2); X86_RET(c, 0x9148bu);
L_9148b:
    X86_TICK(c, 9);
    // 09148b  inc cx
    X86_AT(c, 0x9148bu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_inc(c, v, 2)); }
    // 09148d  cmp cx, 8
    X86_AT(c, 0x9148du);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x8u, 0, 2);
    // 091491  jb 0x9147e
    X86_AT(c, 0x91491u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x9147eu); goto L_9147e; }
L_91493:
    X86_TICK(c, 14);
    // 091493  pop ax
    X86_AT(c, 0x91493u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 091495  ret 
    X86_AT(c, 0x91495u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x91476u, "ran off the end of a function");
}
void f_00091496(X86Cpu& c) {
    X86_TICK(c, 17);
    // 091496  push ax
    X86_AT(c, 0x91496u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 091498  mov al, ah
    X86_AT(c, 0x91498u);
    s8(c, 0, g8(c, 4));
    // 09149a  and al, 0xf0
    X86_AT(c, 0x9149au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 09149c  and al, byte ptr [0x89a77]
    X86_AT(c, 0x9149cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & rd8((c.sbase[3] + (uint32_t)(0x89A77u))), 1)); }
    // 0914a2  je 0x914bc
    X86_AT(c, 0x914a2u);
    if (x86_cc(c, 4)) { goto L_914bc; }
    X86_TICK(c, 31);
    // 0914a4  or byte ptr [0x89a78], al
    X86_AT(c, 0x914a4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89A78u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 0), 1)); }
    // 0914aa  xor al, 0xff
    X86_AT(c, 0x914aau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0xFFu, 1)); }
    // 0914ac  and al, byte ptr [0x89a77]
    X86_AT(c, 0x914acu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & rd8((c.sbase[3] + (uint32_t)(0x89A77u))), 1)); }
    // 0914b2  mov dx, 0xe71
    X86_AT(c, 0x914b2u);
    s16(c, 2, 0xE71u);
    // 0914b6  out dx, al
    X86_AT(c, 0x914b6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0914b7  mov byte ptr [0x89a77], al
    X86_AT(c, 0x914b7u);
    wr8((c.sbase[3] + (uint32_t)(0x89A77u)), g8(c, 0));
L_914bc:
    X86_TICK(c, 14);
    // 0914bc  pop ax
    X86_AT(c, 0x914bcu);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0914be  ret 
    X86_AT(c, 0x914beu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x91496u, "ran off the end of a function");
}
void f_000914bf(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0914bf  push ax
    X86_AT(c, 0x914bfu);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0914c1  call 0x9125f
    X86_AT(c, 0x914c1u);
    push32(c, 0x914c6u); x86_call_known(c, 0x9125fu, f_0009125f); X86_RET(c, 0x914c6u);
    X86_TICK(c, 8);
    // 0914c6  sub ax, 8
    X86_AT(c, 0x914c6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x8u, 0, 2)); }
    // 0914ca  mov dx, word ptr [0x8984e]
    X86_AT(c, 0x914cau);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(0x8984Eu))));
    // 0914d1  xor cx, cx
    X86_AT(c, 0x914d1u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v ^ (c.r[1] & 0xFFFFu), 2)); }
L_914d4:
    X86_TICK(c, 9);
    // 0914d4  inc cx
    X86_AT(c, 0x914d4u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_inc(c, v, 2)); }
    // 0914d6  add ax, dx
    X86_AT(c, 0x914d6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 0914d9  jae 0x914d4
    X86_AT(c, 0x914d9u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x914d4u); goto L_914d4; }
    X86_TICK(c, 7);
    // 0914db  call 0x91242
    X86_AT(c, 0x914dbu);
    push32(c, 0x914e0u); x86_call_known(c, 0x91242u, f_00091242); X86_RET(c, 0x914e0u);
    X86_TICK(c, 53);
    // 0914e0  mov ax, word ptr [0x89847]
    X86_AT(c, 0x914e0u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x89847u))));
    // 0914e6  mul cl
    X86_AT(c, 0x914e6u);
    x86_mul(c, g8(c, 1), 1);
    // 0914e8  add ax, word ptr [0x89845]
    X86_AT(c, 0x914e8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(0x89845u))), 0, 2)); }
    // 0914ef  mov cx, ax
    X86_AT(c, 0x914efu);
    s16(c, 1, (c.r[0] & 0xFFFFu));
    // 0914f2  and cx, 0xf
    X86_AT(c, 0x914f2u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & 0xFu, 2)); }
    // 0914f6  mov word ptr [0x89845], cx
    X86_AT(c, 0x914f6u);
    wr16((c.sbase[3] + (uint32_t)(0x89845u)), (c.r[1] & 0xFFFFu));
    // 0914fd  shr ax, 4
    X86_AT(c, 0x914fdu);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 091501  sub byte ptr [0x89844], al
    X86_AT(c, 0x91501u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89844u)); uint32_t v = rd8(ea); wr8(ea, x86_sub(c, v, g8(c, 0), 0, 1)); }
    // 091507  jns 0x91518
    X86_AT(c, 0x91507u);
    if (x86_cc(c, 9)) { goto L_91518; }
L_91509:
    X86_TICK(c, 18);
    // 091509  inc byte ptr [0x89843]
    X86_AT(c, 0x91509u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89843u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 09150f  add byte ptr [0x89844], 4
    X86_AT(c, 0x9150fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89844u)); uint32_t v = rd8(ea); wr8(ea, x86_add(c, v, 0x4u, 0, 1)); }
    // 091516  jae 0x91509
    X86_AT(c, 0x91516u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x91509u); goto L_91509; }
L_91518:
    X86_TICK(c, 12);
    // 091518  cmp byte ptr [0x89836], 0
    X86_AT(c, 0x91518u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x89836u))), 0x0u, 0, 1);
    // 09151f  je 0x91531
    X86_AT(c, 0x9151fu);
    if (x86_cc(c, 4)) { goto L_91531; }
    X86_TICK(c, 12);
    // 091521  cmp byte ptr [0x89838], 0
    X86_AT(c, 0x91521u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x89838u))), 0x0u, 0, 1);
    // 091528  jne 0x91531
    X86_AT(c, 0x91528u);
    if (x86_cc(c, 5)) { goto L_91531; }
    X86_TICK(c, 7);
    // 09152a  add word ptr [0x89849], ax
    X86_AT(c, 0x9152au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89849u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_91531:
    X86_TICK(c, 14);
    // 091531  pop ax
    X86_AT(c, 0x91531u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 091533  ret 
    X86_AT(c, 0x91533u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x914bfu, "ran off the end of a function");
}
void f_00091534(X86Cpu& c) {
    X86_TICK(c, 11);
    // 091534  push ax
    X86_AT(c, 0x91534u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 091536  mov ax, 0xffff
    X86_AT(c, 0x91536u);
    s16(c, 0, 0xFFFFu);
    // 09153a  call 0x91271
    X86_AT(c, 0x9153au);
    push32(c, 0x9153fu); x86_call_known(c, 0x91271u, f_00091271); X86_RET(c, 0x9153fu);
    X86_TICK(c, 14);
    // 09153f  pop ax
    X86_AT(c, 0x9153fu);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 091541  ret 
    X86_AT(c, 0x91541u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x91534u, "ran off the end of a function");
}
void f_00091542(X86Cpu& c) {
    X86_TICK(c, 31);
    // 091542  mov ax, word ptr [0x89847]
    X86_AT(c, 0x91542u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x89847u))));
    // 091548  add ax, word ptr [0x89845]
    X86_AT(c, 0x91548u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(0x89845u))), 0, 2)); }
    // 09154f  mov cx, ax
    X86_AT(c, 0x9154fu);
    s16(c, 1, (c.r[0] & 0xFFFFu));
    // 091552  and cx, 0xf
    X86_AT(c, 0x91552u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & 0xFu, 2)); }
    // 091556  mov word ptr [0x89845], cx
    X86_AT(c, 0x91556u);
    wr16((c.sbase[3] + (uint32_t)(0x89845u)), (c.r[1] & 0xFFFFu));
    // 09155d  shr ax, 4
    X86_AT(c, 0x9155du);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 091561  sub byte ptr [0x89844], al
    X86_AT(c, 0x91561u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89844u)); uint32_t v = rd8(ea); wr8(ea, x86_sub(c, v, g8(c, 0), 0, 1)); }
    // 091567  jns 0x91578
    X86_AT(c, 0x91567u);
    if (x86_cc(c, 9)) { goto L_91578; }
L_91569:
    X86_TICK(c, 18);
    // 091569  inc byte ptr [0x89843]
    X86_AT(c, 0x91569u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89843u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 09156f  add byte ptr [0x89844], 4
    X86_AT(c, 0x9156fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89844u)); uint32_t v = rd8(ea); wr8(ea, x86_add(c, v, 0x4u, 0, 1)); }
    // 091576  jae 0x91569
    X86_AT(c, 0x91576u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x91569u); goto L_91569; }
L_91578:
    X86_TICK(c, 12);
    // 091578  cmp byte ptr [0x89836], 0
    X86_AT(c, 0x91578u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x89836u))), 0x0u, 0, 1);
    // 09157f  je 0x91591
    X86_AT(c, 0x9157fu);
    if (x86_cc(c, 4)) { goto L_91591; }
    X86_TICK(c, 12);
    // 091581  cmp byte ptr [0x89838], 0
    X86_AT(c, 0x91581u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x89838u))), 0x0u, 0, 1);
    // 091588  jne 0x91591
    X86_AT(c, 0x91588u);
    if (x86_cc(c, 5)) { goto L_91591; }
    X86_TICK(c, 7);
    // 09158a  add word ptr [0x89849], ax
    X86_AT(c, 0x9158au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89849u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_91591:
    X86_TICK(c, 10);
    // 091591  ret 
    X86_AT(c, 0x91591u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x91542u, "ran off the end of a function");
}
void f_00091592(X86Cpu& c) {
    X86_TICK(c, 32);
    // 091592  push ax
    X86_AT(c, 0x91592u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 091594  mov ebx, ecx
    X86_AT(c, 0x91594u);
    c.r[3] = c.r[1];
    // 091596  shl ebx, 5
    X86_AT(c, 0x91596u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[3] = r; }
    // 091599  lea ebx, [ebx + 0x89ba5]
    X86_AT(c, 0x91599u);
    c.r[3] = (uint32_t)(c.r[3] + 0x89BA5u);
    // 09159f  mov dx, word ptr [ebx + 0x14]
    X86_AT(c, 0x9159fu);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x14u))));
    // 0915a3  in al, dx
    X86_AT(c, 0x915a3u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0915a4  test al, 4
    X86_AT(c, 0x915a4u);
    (void)x86_logic(c, g8(c, 0) & 0x4u, 1);
    // 0915a6  je 0x915c0
    X86_AT(c, 0x915a6u);
    if (x86_cc(c, 4)) { goto L_915c0; }
    X86_TICK(c, 6);
    // 0915a8  mov byte ptr [ebx + 0x19], 0x10
    X86_AT(c, 0x915a8u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), 0x10u);
    // 0915ac  mov dx, word ptr [ebx + 0x14]
    X86_AT(c, 0x915acu);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x14u))));
L_915b0:
    X86_TICK(c, 19);
    // 0915b0  in al, dx
    X86_AT(c, 0x915b0u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0915b1  test al, 1
    X86_AT(c, 0x915b1u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0915b3  jne 0x915b0
    X86_AT(c, 0x915b3u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x915b0u); goto L_915b0; }
    X86_TICK(c, 24);
    // 0915b5  push dx
    X86_AT(c, 0x915b5u);
    { uint32_t v = (c.r[2] & 0xFFFFu); push16(c, v); }
    // 0915b7  mov dx, word ptr [ebx + 0x12]
    X86_AT(c, 0x915b7u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x12u))));
    // 0915bb  mov al, 0x37
    X86_AT(c, 0x915bbu);
    s8(c, 0, 0x37u);
    // 0915bd  out dx, al
    X86_AT(c, 0x915bdu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0915be  pop dx
    X86_AT(c, 0x915beu);
    { uint32_t v = pop16(c); s16(c, 2, v); }
L_915c0:
    X86_TICK(c, 19);
    // 0915c0  in al, dx
    X86_AT(c, 0x915c0u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0915c1  test al, 2
    X86_AT(c, 0x915c1u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0915c3  jne 0x915c0
    X86_AT(c, 0x915c3u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x915c0u); goto L_915c0; }
    X86_TICK(c, 21);
    // 0915c5  dec dx
    X86_AT(c, 0x915c5u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0915c7  in al, dx
    X86_AT(c, 0x915c7u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0915c8  cmp al, 0xf8
    X86_AT(c, 0x915c8u);
    (void)x86_sub(c, g8(c, 0), 0xF8u, 0, 1);
    // 0915ca  jb 0x915d0
    X86_AT(c, 0x915cau);
    if (x86_cc(c, 2)) { goto L_915d0; }
    X86_TICK(c, 9);
    // 0915cc  mov bl, cl
    X86_AT(c, 0x915ccu);
    s8(c, 3, g8(c, 1));
    // 0915ce  jmp 0x915ef
    X86_AT(c, 0x915ceu);
    goto L_915ef;
L_915d0:
    X86_TICK(c, 12);
    // 0915d0  cmp word ptr [ebx + 0x10], 0x40
    X86_AT(c, 0x915d0u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0x40u, 0, 2);
    // 0915d5  jb 0x915dd
    X86_AT(c, 0x915d5u);
    if (x86_cc(c, 2)) { goto L_915dd; }
    X86_TICK(c, 9);
    // 0915d7  mov byte ptr [ebx + 0x19], 0x10
    X86_AT(c, 0x915d7u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), 0x10u);
    // 0915db  jmp 0x915ef
    X86_AT(c, 0x915dbu);
    goto L_915ef;
L_915dd:
    X86_TICK(c, 28);
    // 0915dd  mov edi, dword ptr [ebx + 8]
    X86_AT(c, 0x915ddu);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0915e0  stosb byte ptr es:[edi], al
    X86_AT(c, 0x915e0u);
    x86_string(c, 2, 1, 0, 4, 3);
    // 0915e1  inc word ptr [ebx + 0x10]
    X86_AT(c, 0x915e1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0915e5  cmp edi, dword ptr [ebx + 4]
    X86_AT(c, 0x915e5u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 0915e8  jne 0x915ec
    X86_AT(c, 0x915e8u);
    if (x86_cc(c, 5)) { goto L_915ec; }
    X86_TICK(c, 4);
    // 0915ea  mov edi, dword ptr [ebx]
    X86_AT(c, 0x915eau);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
L_915ec:
    X86_TICK(c, 2);
    // 0915ec  mov dword ptr [ebx + 8], edi
    X86_AT(c, 0x915ecu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)), c.r[7]);
L_915ef:
    X86_TICK(c, 14);
    // 0915ef  pop ax
    X86_AT(c, 0x915efu);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0915f1  ret 
    X86_AT(c, 0x915f1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x91592u, "ran off the end of a function");
}
void f_000915f2(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0915f2  push ax
    X86_AT(c, 0x915f2u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0915f4  mov ebx, ecx
    X86_AT(c, 0x915f4u);
    c.r[3] = c.r[1];
    // 0915f6  shl ebx, 5
    X86_AT(c, 0x915f6u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[3] = r; }
    // 0915f9  lea ebx, [ebx + 0x89aa5]
    X86_AT(c, 0x915f9u);
    c.r[3] = (uint32_t)(c.r[3] + 0x89AA5u);
    // 0915ff  dec word ptr [ebx + 0x10]
    X86_AT(c, 0x915ffu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 091603  js 0x91644
    X86_AT(c, 0x91603u);
    if (x86_cc(c, 8)) { goto L_91644; }
    X86_TICK(c, 4);
    // 091609  mov dx, word ptr [ebx + 0x14]
    X86_AT(c, 0x91609u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x14u))));
L_9160d:
    X86_TICK(c, 37);
    // 09160d  mov al, 1
    X86_AT(c, 0x9160du);
    s8(c, 0, 0x1u);
    // 09160f  out dx, al
    X86_AT(c, 0x9160fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 091610  nop 
    X86_AT(c, 0x91610u);
    // 091611  nop 
    X86_AT(c, 0x91611u);
    // 091612  in al, dx
    X86_AT(c, 0x91612u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 091613  test al, 1
    X86_AT(c, 0x91613u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 091615  jne 0x9160d
    X86_AT(c, 0x91615u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x9160du); goto L_9160d; }
    X86_TICK(c, 35);
    // 091617  out dx, al
    X86_AT(c, 0x91617u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 091618  nop 
    X86_AT(c, 0x91618u);
    // 091619  nop 
    X86_AT(c, 0x91619u);
    // 09161a  in al, dx
    X86_AT(c, 0x9161au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 09161b  test al, 1
    X86_AT(c, 0x9161bu);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 09161d  jne 0x9160d
    X86_AT(c, 0x9161du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x9160du); goto L_9160d; }
    X86_TICK(c, 60);
    // 09161f  push dx
    X86_AT(c, 0x9161fu);
    { uint32_t v = (c.r[2] & 0xFFFFu); push16(c, v); }
    // 091621  mov esi, dword ptr [ebx + 0xc]
    X86_AT(c, 0x91621u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)));
    // 091624  lodsb al, byte ptr [esi]
    X86_AT(c, 0x91624u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 091625  mov dx, word ptr [ebx + 0x12]
    X86_AT(c, 0x91625u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x12u))));
    // 091629  dec dx
    X86_AT(c, 0x91629u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 09162b  out dx, al
    X86_AT(c, 0x9162bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 09162c  pop dx
    X86_AT(c, 0x9162cu);
    { uint32_t v = pop16(c); s16(c, 2, v); }
    // 09162e  mov al, 1
    X86_AT(c, 0x9162eu);
    s8(c, 0, 0x1u);
    // 091630  out dx, al
    X86_AT(c, 0x91630u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 091631  cmp esi, dword ptr [ebx + 4]
    X86_AT(c, 0x91631u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 091634  jne 0x9163c
    X86_AT(c, 0x91634u);
    if (x86_cc(c, 5)) { goto L_9163c; }
    X86_TICK(c, 4);
    // 09163a  mov esi, dword ptr [ebx]
    X86_AT(c, 0x9163au);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
L_9163c:
    X86_TICK(c, 9);
    // 09163c  mov dword ptr [ebx + 0xc], esi
    X86_AT(c, 0x9163cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)), c.r[6]);
    // 09163f  jmp 0x9165d
    X86_AT(c, 0x9163fu);
    goto L_9165d;
L_91644:
    X86_TICK(c, 34);
    // 091644  inc word ptr [ebx + 0x10]
    X86_AT(c, 0x91644u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 091648  mov al, byte ptr [ebx + 0x1a]
    X86_AT(c, 0x91648u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Au))));
    // 09164b  xor al, 0xff
    X86_AT(c, 0x9164bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0xFFu, 1)); }
    // 09164d  and al, byte ptr [0x89a75]
    X86_AT(c, 0x9164du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & rd8((c.sbase[3] + (uint32_t)(0x89A75u))), 1)); }
    // 091653  mov byte ptr [0x89a75], al
    X86_AT(c, 0x91653u);
    wr8((c.sbase[3] + (uint32_t)(0x89A75u)), g8(c, 0));
    // 091658  mov dx, 0xe70
    X86_AT(c, 0x91658u);
    s16(c, 2, 0xE70u);
    // 09165c  out dx, al
    X86_AT(c, 0x9165cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
L_9165d:
    X86_TICK(c, 14);
    // 09165d  pop ax
    X86_AT(c, 0x9165du);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 09165f  ret 
    X86_AT(c, 0x9165fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x915f2u, "ran off the end of a function");
}
void f_00091660(X86Cpu& c) {
    X86_TICK(c, 14);
    // 091660  cli 
    X86_AT(c, 0x91660u);
    c.fl &= ~X86_IF;
    // 091661  cmp byte ptr [0x89a96], 0
    X86_AT(c, 0x91661u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x89A96u))), 0x0u, 0, 1);
    // 091668  jne 0x916c0
    X86_AT(c, 0x91668u);
    if (x86_cc(c, 5)) { goto L_916c0; }
    X86_TICK(c, 14);
    // 09166a  mov byte ptr [0x89a96], 0xff
    X86_AT(c, 0x9166au);
    wr8((c.sbase[3] + (uint32_t)(0x89A96u)), 0xFFu);
    // 091671  cmp byte ptr [0x89a97], 0
    X86_AT(c, 0x91671u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x89A97u))), 0x0u, 0, 1);
    // 091678  jne 0x91694
    X86_AT(c, 0x91678u);
    if (x86_cc(c, 5)) { goto L_91694; }
    X86_TICK(c, 10);
    // 09167e  mov dword ptr [0x89a99], esp
    X86_AT(c, 0x9167eu);
    wr32((c.sbase[3] + (uint32_t)(0x89A99u)), c.r[4]);
    // 091684  mov word ptr [0x89a9d], ss
    X86_AT(c, 0x91684u);
    wr16((c.sbase[3] + (uint32_t)(0x89A9Du)), (uint32_t)c.sreg[2]);
    // 09168a  mov eax, ds
    X86_AT(c, 0x9168au);
    c.r[0] = (uint32_t)c.sreg[3];
    // 09168c  mov ss, eax
    X86_AT(c, 0x9168cu);
    x86_load_seg(c, 2, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 09168e  lea esp, [0x8a1a5]
    X86_AT(c, 0x9168eu);
    c.r[4] = (uint32_t)(0x8A1A5u);
L_91694:
    X86_TICK(c, 15);
    // 091694  inc byte ptr [0x89a97]
    X86_AT(c, 0x91694u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89A97u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 09169a  sti 
    X86_AT(c, 0x9169au);
    c.fl |= X86_IF;
    // 09169b  call 0x9032e
    X86_AT(c, 0x9169bu);
    push32(c, 0x916a0u); x86_call_known(c, 0x9032eu, f_0009032e); X86_RET(c, 0x916a0u);
    X86_TICK(c, 13);
    // 0916a0  cli 
    X86_AT(c, 0x916a0u);
    c.fl &= ~X86_IF;
    // 0916a1  dec byte ptr [0x89a97]
    X86_AT(c, 0x916a1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x89A97u)); uint32_t v = rd8(ea); wr8(ea, x86_dec(c, v, 1)); }
    // 0916a7  jne 0x916b9
    X86_AT(c, 0x916a7u);
    if (x86_cc(c, 5)) { goto L_916b9; }
    X86_TICK(c, 8);
    // 0916ad  mov esp, dword ptr [0x89a99]
    X86_AT(c, 0x916adu);
    c.r[4] = rd32((c.sbase[3] + (uint32_t)(0x89A99u)));
    // 0916b3  mov ss, word ptr [0x89a9d]
    X86_AT(c, 0x916b3u);
    x86_load_seg(c, 2, rd16((c.sbase[3] + (uint32_t)(0x89A9Du))) & 0xFFFFu);
L_916b9:
    X86_TICK(c, 2);
    // 0916b9  mov byte ptr [0x89a96], 0
    X86_AT(c, 0x916b9u);
    wr8((c.sbase[3] + (uint32_t)(0x89A96u)), 0x0u);
L_916c0:
    X86_TICK(c, 10);
    // 0916c0  ret 
    X86_AT(c, 0x916c0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x91660u, "ran off the end of a function");
}
void f_000916d0(X86Cpu& c) {
    X86_TICK(c, 70);
    // 0916d0  push es
    X86_AT(c, 0x916d0u);
    push32(c, c.sreg[0]);
    // 0916d1  pushal 
    X86_AT(c, 0x916d1u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0916d2  push ds
    X86_AT(c, 0x916d2u);
    push32(c, c.sreg[3]);
    // 0916d3  pop es
    X86_AT(c, 0x916d3u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0916d4  cld 
    X86_AT(c, 0x916d4u);
    c.fl &= ~X86_DF;
    // 0916d5  xor eax, eax
    X86_AT(c, 0x916d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0916d7  mov byte ptr [0x8a3b0], al
    X86_AT(c, 0x916d7u);
    wr8((c.sbase[3] + (uint32_t)(0x8A3B0u)), g8(c, 0));
    // 0916dc  mov byte ptr [0x8a3b1], al
    X86_AT(c, 0x916dcu);
    wr8((c.sbase[3] + (uint32_t)(0x8A3B1u)), g8(c, 0));
    // 0916e1  mov byte ptr [0x8a3b2], al
    X86_AT(c, 0x916e1u);
    wr8((c.sbase[3] + (uint32_t)(0x8A3B2u)), g8(c, 0));
    // 0916e6  mov byte ptr [0x8a3b3], al
    X86_AT(c, 0x916e6u);
    wr8((c.sbase[3] + (uint32_t)(0x8A3B3u)), g8(c, 0));
    // 0916eb  mov byte ptr [0x8a3b4], al
    X86_AT(c, 0x916ebu);
    wr8((c.sbase[3] + (uint32_t)(0x8A3B4u)), g8(c, 0));
    // 0916f0  lea edi, [0x8a3b5]
    X86_AT(c, 0x916f0u);
    c.r[7] = (uint32_t)(0x8A3B5u);
    // 0916f6  mov ecx, 4
    X86_AT(c, 0x916f6u);
    c.r[1] = 0x4u;
    // 0916fb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x916fbu);
    x86_string(c, 2, 4, 243, 4, 3);
    // 0916fd  not eax
    X86_AT(c, 0x916fdu);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 0916ff  lea edi, [0x8a3c5]
    X86_AT(c, 0x916ffu);
    c.r[7] = (uint32_t)(0x8A3C5u);
    // 091705  mov ecx, 4
    X86_AT(c, 0x91705u);
    c.r[1] = 0x4u;
    // 09170a  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x9170au);
    x86_string(c, 2, 4, 243, 4, 3);
    // 09170c  xor al, al
    X86_AT(c, 0x9170cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 09170e  mov ecx, 0x80
    X86_AT(c, 0x9170eu);
    c.r[1] = 0x80u;
    // 091713  lea edi, [0x8a3d5]
    X86_AT(c, 0x91713u);
    c.r[7] = (uint32_t)(0x8A3D5u);
L_91719:
    X86_TICK(c, 21);
    // 091719  mov byte ptr [edi], ah
    X86_AT(c, 0x91719u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), g8(c, 4));
    // 09171b  mov byte ptr [edi + 1], ah
    X86_AT(c, 0x9171bu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)), g8(c, 4));
    // 09171e  mov byte ptr [edi + 2], al
    X86_AT(c, 0x9171eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), g8(c, 0));
    // 091721  mov byte ptr [edi + 3], al
    X86_AT(c, 0x91721u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x3u)), g8(c, 0));
    // 091724  add edi, 4
    X86_AT(c, 0x91724u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 091727  loop 0x91719
    X86_AT(c, 0x91727u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x91719u); goto L_91719; }
    X86_TICK(c, 6);
    // 091729  mov ecx, 6
    X86_AT(c, 0x91729u);
    c.r[1] = 0x6u;
    // 09172e  xor dl, dl
    X86_AT(c, 0x9172eu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v ^ g8(c, 2), 1)); }
    // 091730  mov bl, 0
    X86_AT(c, 0x91730u);
    s8(c, 3, 0x0u);
L_91732:
    X86_TICK(c, 7);
    // 091732  call 0x91752
    X86_AT(c, 0x91732u);
    push32(c, 0x91737u); x86_call_known(c, 0x91752u, f_00091752); X86_RET(c, 0x91737u);
    X86_TICK(c, 15);
    // 091737  inc dl
    X86_AT(c, 0x91737u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 091739  inc bl
    X86_AT(c, 0x91739u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_inc(c, v, 1)); }
    // 09173b  loop 0x91732
    X86_AT(c, 0x9173bu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x91732u); goto L_91732; }
    X86_TICK(c, 4);
    // 09173d  mov ecx, 8
    X86_AT(c, 0x9173du);
    c.r[1] = 0x8u;
    // 091742  mov bl, 0x40
    X86_AT(c, 0x91742u);
    s8(c, 3, 0x40u);
L_91744:
    X86_TICK(c, 7);
    // 091744  call 0x91752
    X86_AT(c, 0x91744u);
    push32(c, 0x91749u); x86_call_known(c, 0x91752u, f_00091752); X86_RET(c, 0x91749u);
    X86_TICK(c, 15);
    // 091749  inc dl
    X86_AT(c, 0x91749u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 09174b  inc bl
    X86_AT(c, 0x9174bu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_inc(c, v, 1)); }
    // 09174d  loop 0x91744
    X86_AT(c, 0x9174du);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x91744u); goto L_91744; }
    X86_TICK(c, 38);
    // 09174f  popal 
    X86_AT(c, 0x9174fu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 091750  pop es
    X86_AT(c, 0x91750u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 091751  ret 
    X86_AT(c, 0x91751u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x916d0u, "ran off the end of a function");
}
void f_00091752(X86Cpu& c) {
    X86_TICK(c, 25);
    // 091752  pushal 
    X86_AT(c, 0x91752u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 091753  cmp dl, 0x10
    X86_AT(c, 0x91753u);
    (void)x86_sub(c, g8(c, 2), 0x10u, 0, 1);
    // 091756  jae 0x917f0
    X86_AT(c, 0x91756u);
    if (x86_cc(c, 3)) { goto L_917f0; }
    X86_TICK(c, 7);
    // 09175c  cmp bl, 0x80
    X86_AT(c, 0x9175cu);
    (void)x86_sub(c, g8(c, 3), 0x80u, 0, 1);
    // 09175f  jae 0x917f0
    X86_AT(c, 0x9175fu);
    if (x86_cc(c, 3)) { goto L_917f0; }
    X86_TICK(c, 16);
    // 091765  movzx ebx, bl
    X86_AT(c, 0x91765u);
    c.r[3] = g8(c, 3);
    // 091768  lea edi, [ebx*4 + 0x8a3d5]
    X86_AT(c, 0x91768u);
    c.r[7] = (uint32_t)(c.r[3] * 4 + 0x8A3D5u);
    // 09176f  mov al, byte ptr [edi]
    X86_AT(c, 0x9176fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 091771  cmp al, dl
    X86_AT(c, 0x91771u);
    (void)x86_sub(c, g8(c, 0), g8(c, 2), 0, 1);
    // 091773  je 0x917ec
    X86_AT(c, 0x91773u);
    if (x86_cc(c, 4)) { goto L_917ec; }
    X86_TICK(c, 7);
    // 091779  cmp al, 0xff
    X86_AT(c, 0x91779u);
    (void)x86_sub(c, g8(c, 0), 0xFFu, 0, 1);
    // 09177b  je 0x917cd
    X86_AT(c, 0x9177bu);
    if (x86_cc(c, 4)) { goto L_917cd; }
    X86_TICK(c, 16);
    // 091781  movzx eax, al
    X86_AT(c, 0x91781u);
    c.r[0] = g8(c, 0);
    // 091784  lea esi, [eax + 0x8a3c5]
    X86_AT(c, 0x91784u);
    c.r[6] = (uint32_t)(c.r[0] + 0x8A3C5u);
    // 09178a  mov al, byte ptr [esi]
    X86_AT(c, 0x9178au);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 09178c  cmp al, bl
    X86_AT(c, 0x9178cu);
    (void)x86_sub(c, g8(c, 0), g8(c, 3), 0, 1);
    // 09178e  je 0x917a9
    X86_AT(c, 0x9178eu);
    if (x86_cc(c, 4)) { goto L_917a9; }
L_91790:
    X86_TICK(c, 18);
    // 091790  movzx eax, al
    X86_AT(c, 0x91790u);
    c.r[0] = g8(c, 0);
    // 091793  lea esi, [eax*4 + 0x8a3d5]
    X86_AT(c, 0x91793u);
    c.r[6] = (uint32_t)(c.r[0] * 4 + 0x8A3D5u);
    // 09179a  lea esi, [esi + 1]
    X86_AT(c, 0x9179au);
    c.r[6] = (uint32_t)(c.r[6] + 0x1u);
    // 09179d  mov al, byte ptr [esi]
    X86_AT(c, 0x9179du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 09179f  cmp al, bl
    X86_AT(c, 0x9179fu);
    (void)x86_sub(c, g8(c, 0), g8(c, 3), 0, 1);
    // 0917a1  je 0x917a9
    X86_AT(c, 0x917a1u);
    if (x86_cc(c, 4)) { goto L_917a9; }
    X86_TICK(c, 7);
    // 0917a3  cmp al, 0xff
    X86_AT(c, 0x917a3u);
    (void)x86_sub(c, g8(c, 0), 0xFFu, 0, 1);
    // 0917a5  je 0x917f0
    X86_AT(c, 0x917a5u);
    if (x86_cc(c, 4)) { goto L_917f0; }
    X86_TICK(c, 7);
    // 0917a7  jmp 0x91790
    X86_AT(c, 0x917a7u);
    X86_POLL(c, 0x91790u); goto L_91790;
L_917a9:
    X86_TICK(c, 28);
    // 0917a9  push edx
    X86_AT(c, 0x917a9u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0917aa  pushf 
    X86_AT(c, 0x917aau);
    push16(c, c.fl & 0xFFFFu);
    // 0917ac  cli 
    X86_AT(c, 0x917acu);
    c.fl &= ~X86_IF;
    // 0917ad  mov dl, byte ptr [edi + 1]
    X86_AT(c, 0x917adu);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 0917b0  mov byte ptr [esi], dl
    X86_AT(c, 0x917b0u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6])), g8(c, 2));
    // 0917b2  cmp byte ptr [edi + 2], 0
    X86_AT(c, 0x917b2u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))), 0x0u, 0, 1);
    // 0917b6  je 0x917bf
    X86_AT(c, 0x917b6u);
    if (x86_cc(c, 4)) { goto L_917bf; }
    X86_TICK(c, 9);
    // 0917b8  mov ah, 2
    X86_AT(c, 0x917b8u);
    s8(c, 4, 0x2u);
    // 0917ba  call 0x8f910
    X86_AT(c, 0x917bau);
    push32(c, 0x917bfu); x86_call_known(c, 0x8f910u, f_0008f910); X86_RET(c, 0x917bfu);
L_917bf:
    X86_TICK(c, 16);
    // 0917bf  mov byte ptr [edi], 0xff
    X86_AT(c, 0x917bfu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0xFFu);
    // 0917c2  mov byte ptr [edi + 1], 0xff
    X86_AT(c, 0x917c2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)), 0xFFu);
    // 0917c6  mov byte ptr [edi + 2], 0
    X86_AT(c, 0x917c6u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), 0x0u);
    // 0917ca  popf 
    X86_AT(c, 0x917cau);
    x86_popfd(c, 2);
    // 0917cc  pop edx
    X86_AT(c, 0x917ccu);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_917cd:
    X86_TICK(c, 33);
    // 0917cd  movzx edx, dl
    X86_AT(c, 0x917cdu);
    c.r[2] = g8(c, 2);
    // 0917d0  lea esi, [edx + 0x8a3c5]
    X86_AT(c, 0x917d0u);
    c.r[6] = (uint32_t)(c.r[2] + 0x8A3C5u);
    // 0917d6  pushf 
    X86_AT(c, 0x917d6u);
    push16(c, c.fl & 0xFFFFu);
    // 0917d8  cli 
    X86_AT(c, 0x917d8u);
    c.fl &= ~X86_IF;
    // 0917d9  mov al, byte ptr [esi]
    X86_AT(c, 0x917d9u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 0917db  mov byte ptr [esi], bl
    X86_AT(c, 0x917dbu);
    wr8((c.sbase[3] + (uint32_t)(c.r[6])), g8(c, 3));
    // 0917dd  mov byte ptr [edi], dl
    X86_AT(c, 0x917ddu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), g8(c, 2));
    // 0917df  mov byte ptr [edi + 1], al
    X86_AT(c, 0x917dfu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)), g8(c, 0));
    // 0917e2  mov byte ptr [edi + 2], 0
    X86_AT(c, 0x917e2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), 0x0u);
    // 0917e6  mov byte ptr [edi + 3], 0
    X86_AT(c, 0x917e6u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x3u)), 0x0u);
    // 0917ea  popf 
    X86_AT(c, 0x917eau);
    x86_popfd(c, 2);
L_917ec:
    X86_TICK(c, 36);
    // 0917ec  popal 
    X86_AT(c, 0x917ecu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0917ed  xor al, al
    X86_AT(c, 0x917edu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0917ef  ret 
    X86_AT(c, 0x917efu);
    c.eip = pop32(c); return;
L_917f0:
    X86_TICK(c, 36);
    // 0917f0  popal 
    X86_AT(c, 0x917f0u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0917f1  mov al, 3
    X86_AT(c, 0x917f1u);
    s8(c, 0, 0x3u);
    // 0917f3  ret 
    X86_AT(c, 0x917f3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x91752u, "ran off the end of a function");
}
void f_000917f4(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0917f4  pushal 
    X86_AT(c, 0x917f4u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0917f5  cmp al, 0x80
    X86_AT(c, 0x917f5u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 0917f7  jb 0x9180b
    X86_AT(c, 0x917f7u);
    if (x86_cc(c, 2)) { goto L_9180b; }
    X86_TICK(c, 7);
    // 0917f9  cmp al, 0xf0
    X86_AT(c, 0x917f9u);
    (void)x86_sub(c, g8(c, 0), 0xF0u, 0, 1);
    // 0917fb  jae 0x91833
    X86_AT(c, 0x917fbu);
    if (x86_cc(c, 3)) { goto L_91833; }
    X86_TICK(c, 11);
    // 0917fd  mov byte ptr [0x8a3b0], al
    X86_AT(c, 0x917fdu);
    wr8((c.sbase[3] + (uint32_t)(0x8A3B0u)), g8(c, 0));
    // 091802  mov byte ptr [0x8a3b1], 1
    X86_AT(c, 0x91802u);
    wr8((c.sbase[3] + (uint32_t)(0x8A3B1u)), 0x1u);
    // 091809  jmp 0x91831
    X86_AT(c, 0x91809u);
    goto L_91831;
L_9180b:
    X86_TICK(c, 13);
    // 09180b  movzx ebx, byte ptr [0x8a3b0]
    X86_AT(c, 0x9180bu);
    c.r[3] = rd8((c.sbase[3] + (uint32_t)(0x8A3B0u)));
    // 091812  cmp ebx, 0x80
    X86_AT(c, 0x91812u);
    (void)x86_sub(c, c.r[3], 0x80u, 0, 4);
    // 091818  jb 0x91831
    X86_AT(c, 0x91818u);
    if (x86_cc(c, 2)) { goto L_91831; }
    X86_TICK(c, 14);
    // 09181e  sub ebx, 0x80
    X86_AT(c, 0x9181eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, 0x80u, 0, 4); }
    // 091824  shr ebx, 4
    X86_AT(c, 0x91824u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 091827  lea ebx, [ebx*4 + 0x91843]
    X86_AT(c, 0x91827u);
    c.r[3] = (uint32_t)(c.r[3] * 4 + 0x91843u);
    // 09182e  call dword ptr cs:[ebx]
    X86_AT(c, 0x9182eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[3]))); push32(c, 0x91831u); x86_call(c, t); X86_RET(c, 0x91831u); }
L_91831:
    X86_TICK(c, 34);
    // 091831  popal 
    X86_AT(c, 0x91831u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 091832  ret 
    X86_AT(c, 0x91832u);
    c.eip = pop32(c); return;
L_91833:
    X86_TICK(c, 38);
    // 091833  mov byte ptr [0x8a3b1], 1
    X86_AT(c, 0x91833u);
    wr8((c.sbase[3] + (uint32_t)(0x8A3B1u)), 0x1u);
    // 09183a  mov byte ptr [0x8a3b0], 0
    X86_AT(c, 0x9183au);
    wr8((c.sbase[3] + (uint32_t)(0x8A3B0u)), 0x0u);
    // 091841  popal 
    X86_AT(c, 0x91841u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 091842  ret 
    X86_AT(c, 0x91842u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x917f4u, "ran off the end of a function");
}
void f_0009196b(X86Cpu& c) {
    X86_TICK(c, 17);
    // 09196b  mov al, byte ptr [0x8a3b0]
    X86_AT(c, 0x9196bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8A3B0u))));
    // 091970  and eax, 0xf
    X86_AT(c, 0x91970u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFu, 4); }
    // 091975  mov bl, byte ptr [eax + 0x8a3c5]
    X86_AT(c, 0x91975u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x8A3C5u))));
    // 09197b  cmp bl, 0xff
    X86_AT(c, 0x9197bu);
    (void)x86_sub(c, g8(c, 3), 0xFFu, 0, 1);
    // 09197e  je 0x919cc
    X86_AT(c, 0x9197eu);
    if (x86_cc(c, 4)) { goto L_919cc; }
    X86_TICK(c, 4);
    // 091984  mov dl, byte ptr [0x8a3b2]
    X86_AT(c, 0x91984u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(0x8A3B2u))));
L_9198a:
    X86_TICK(c, 16);
    // 09198a  movzx eax, bl
    X86_AT(c, 0x9198au);
    c.r[0] = g8(c, 3);
    // 09198d  lea esi, [eax*4 + 0x8a3d5]
    X86_AT(c, 0x9198du);
    c.r[6] = (uint32_t)(c.r[0] * 4 + 0x8A3D5u);
    // 091994  cmp dl, byte ptr [esi + 2]
    X86_AT(c, 0x91994u);
    (void)x86_sub(c, g8(c, 2), rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x2u))), 0, 1);
    // 091997  je 0x919a6
    X86_AT(c, 0x91997u);
    if (x86_cc(c, 4)) { goto L_919a6; }
    X86_TICK(c, 11);
    // 091999  mov bl, byte ptr [esi + 1]
    X86_AT(c, 0x91999u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x1u))));
    // 09199c  cmp bl, 0xff
    X86_AT(c, 0x9199cu);
    (void)x86_sub(c, g8(c, 3), 0xFFu, 0, 1);
    // 09199f  jne 0x9198a
    X86_AT(c, 0x9199fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x9198au); goto L_9198a; }
    X86_TICK(c, 7);
    // 0919a1  jmp 0x919cc
    X86_AT(c, 0x919a1u);
    goto L_919cc;
L_919a6:
    X86_TICK(c, 18);
    // 0919a6  mov al, byte ptr [0x8a3b0]
    X86_AT(c, 0x919a6u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8A3B0u))));
    // 0919ab  and eax, 0xf
    X86_AT(c, 0x919abu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFu, 4); }
    // 0919b0  cmp byte ptr [eax + 0x8a3b5], 0
    X86_AT(c, 0x919b0u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x8A3B5u))), 0x0u, 0, 1);
    // 0919b7  jne 0x919c6
    X86_AT(c, 0x919b7u);
    if (x86_cc(c, 5)) { goto L_919c6; }
    X86_TICK(c, 11);
    // 0919b9  mov byte ptr [esi + 2], 0
    X86_AT(c, 0x919b9u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x2u)), 0x0u);
    // 0919bd  mov ah, 2
    X86_AT(c, 0x919bdu);
    s8(c, 4, 0x2u);
    // 0919bf  call 0x8f910
    X86_AT(c, 0x919bfu);
    push32(c, 0x919c4u); x86_call_known(c, 0x8f910u, f_0008f910); X86_RET(c, 0x919c4u);
    X86_TICK(c, 12);
    // 0919c4  clc 
    X86_AT(c, 0x919c4u);
    c.fl &= ~X86_CF;
    // 0919c5  ret 
    X86_AT(c, 0x919c5u);
    c.eip = pop32(c); return;
L_919c6:
    X86_TICK(c, 19);
    // 0919c6  or byte ptr [esi + 2], 0x80
    X86_AT(c, 0x919c6u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0x2u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
    // 0919ca  clc 
    X86_AT(c, 0x919cau);
    c.fl &= ~X86_CF;
    // 0919cb  ret 
    X86_AT(c, 0x919cbu);
    c.eip = pop32(c); return;
L_919cc:
    X86_TICK(c, 12);
    // 0919cc  stc 
    X86_AT(c, 0x919ccu);
    c.fl |= X86_CF;
    // 0919cd  ret 
    X86_AT(c, 0x919cdu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9196bu, "ran off the end of a function");
}
void f_00091bc8(X86Cpu& c) {
    X86_TICK(c, 28);
    // 091bc8  push ebp
    X86_AT(c, 0x91bc8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 091bc9  mov ebp, esp
    X86_AT(c, 0x91bc9u);
    c.r[5] = c.r[4];
    // 091bcb  sub esp, 0xb4
    X86_AT(c, 0x91bcbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xB4u, 0, 4); }
    // 091bd1  push ebx
    X86_AT(c, 0x91bd1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 091bd2  push esi
    X86_AT(c, 0x91bd2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 091bd3  push edi
    X86_AT(c, 0x91bd3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 091bd4  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x91bd4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 091bd7  cmp byte ptr [eax], 0
    X86_AT(c, 0x91bd7u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x0u, 0, 1);
    // 091bda  je 0x91c79
    X86_AT(c, 0x91bdau);
    if (x86_cc(c, 4)) { goto L_91c79; }
    X86_TICK(c, 14);
    // 091be0  push 0x1a44
    X86_AT(c, 0x91be0u);
    { uint32_t v = 0x1A44u; push32(c, v); }
    // 091be5  push dword ptr [ebp + 8]
    X86_AT(c, 0x91be5u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 091be8  call 0x9261c
    X86_AT(c, 0x91be8u);
    push32(c, 0x91bedu); x86_call_known(c, 0x9261cu, f_0009261c); X86_RET(c, 0x91bedu);
    X86_TICK(c, 12);
    // 091bed  add esp, 8
    X86_AT(c, 0x91bedu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 091bf0  xchg edi, eax
    X86_AT(c, 0x91bf0u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 091bf1  and edi, edi
    X86_AT(c, 0x91bf1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 091bf3  jne 0x91c80
    X86_AT(c, 0x91bf3u);
    if (x86_cc(c, 5)) { goto L_91c80; }
    X86_TICK(c, 9);
    // 091bf9  push 0x1a48
    X86_AT(c, 0x91bf9u);
    { uint32_t v = 0x1A48u; push32(c, v); }
    // 091bfe  call 0x9305c
    X86_AT(c, 0x91bfeu);
    push32(c, 0x91c03u); x86_call_known(c, 0x9305cu, f_0009305c); X86_RET(c, 0x91c03u);
    X86_TICK(c, 11);
    // 091c03  add esp, 4
    X86_AT(c, 0x91c03u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 091c06  mov dword ptr [ebp - 0x34], eax
    X86_AT(c, 0x91c06u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFCCu)), c.r[0]);
    // 091c09  and eax, eax
    X86_AT(c, 0x91c09u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 091c0b  je 0x91c79
    X86_AT(c, 0x91c0bu);
    if (x86_cc(c, 4)) { goto L_91c79; }
    X86_TICK(c, 16);
    // 091c0d  push dword ptr [ebp - 0x34]
    X86_AT(c, 0x91c0du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFCCu))); push32(c, v); }
    // 091c10  lea eax, [ebp - 0xb4]
    X86_AT(c, 0x91c10u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF4Cu);
    // 091c16  push eax
    X86_AT(c, 0x91c16u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 091c17  call 0x93154
    X86_AT(c, 0x91c17u);
    push32(c, 0x91c1cu); x86_call_known(c, 0x93154u, f_00093154); X86_RET(c, 0x91c1cu);
    X86_TICK(c, 4);
    // 091c1c  sub esi, esi
    X86_AT(c, 0x91c1cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 091c1e  add esp, 8
    X86_AT(c, 0x91c1eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_91c21:
    X86_TICK(c, 12);
    // 091c21  cmp byte ptr [ebp + esi*1 - 0xb4], 0
    X86_AT(c, 0x91c21u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFF4Cu))), 0x0u, 0, 1);
    // 091c29  je 0x91c2e
    X86_AT(c, 0x91c29u);
    if (x86_cc(c, 4)) { goto L_91c2e; }
    X86_TICK(c, 9);
    // 091c2b  inc esi
    X86_AT(c, 0x91c2bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 091c2c  jmp 0x91c21
    X86_AT(c, 0x91c2cu);
    X86_POLL(c, 0x91c21u); goto L_91c21;
L_91c2e:
    X86_TICK(c, 12);
    // 091c2e  cmp byte ptr [ebp + esi*1 - 0xb5], 0x5c
    X86_AT(c, 0x91c2eu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFF4Bu))), 0x5Cu, 0, 1);
    // 091c36  je 0x91c41
    X86_AT(c, 0x91c36u);
    if (x86_cc(c, 4)) { goto L_91c41; }
    X86_TICK(c, 4);
    // 091c38  inc esi
    X86_AT(c, 0x91c38u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 091c39  mov byte ptr [ebp + esi*1 - 0xb5], 0x5c
    X86_AT(c, 0x91c39u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFF4Bu)), 0x5Cu);
L_91c41:
    X86_TICK(c, 2);
    // 091c41  sub ebx, ebx
    X86_AT(c, 0x91c41u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_91c43:
    X86_TICK(c, 15);
    // 091c43  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x91c43u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 091c46  mov al, byte ptr [eax + ebx*1]
    X86_AT(c, 0x91c46u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[3]))));
    // 091c49  and al, al
    X86_AT(c, 0x91c49u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 091c4b  je 0x91c58
    X86_AT(c, 0x91c4bu);
    if (x86_cc(c, 4)) { goto L_91c58; }
    X86_TICK(c, 13);
    // 091c4d  inc esi
    X86_AT(c, 0x91c4du);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 091c4e  mov byte ptr [ebp + esi*1 - 0xb5], al
    X86_AT(c, 0x91c4eu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFF4Bu)), g8(c, 0));
    // 091c55  inc ebx
    X86_AT(c, 0x91c55u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 091c56  jmp 0x91c43
    X86_AT(c, 0x91c56u);
    X86_POLL(c, 0x91c43u); goto L_91c43;
L_91c58:
    X86_TICK(c, 15);
    // 091c58  mov byte ptr [ebp + esi*1 - 0xb4], 0
    X86_AT(c, 0x91c58u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFF4Cu)), 0x0u);
    // 091c60  push 0x1a50
    X86_AT(c, 0x91c60u);
    { uint32_t v = 0x1A50u; push32(c, v); }
    // 091c65  lea eax, [ebp - 0xb4]
    X86_AT(c, 0x91c65u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF4Cu);
    // 091c6b  push eax
    X86_AT(c, 0x91c6bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 091c6c  call 0x9261c
    X86_AT(c, 0x91c6cu);
    push32(c, 0x91c71u); x86_call_known(c, 0x9261cu, f_0009261c); X86_RET(c, 0x91c71u);
    X86_TICK(c, 12);
    // 091c71  add esp, 8
    X86_AT(c, 0x91c71u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 091c74  xchg edi, eax
    X86_AT(c, 0x91c74u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 091c75  and edi, edi
    X86_AT(c, 0x91c75u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 091c77  jne 0x91c80
    X86_AT(c, 0x91c77u);
    if (x86_cc(c, 5)) { goto L_91c80; }
L_91c79:
    X86_TICK(c, 9);
    // 091c79  mov eax, 1
    X86_AT(c, 0x91c79u);
    c.r[0] = 0x1u;
    // 091c7e  jmp 0x91cdf
    X86_AT(c, 0x91c7eu);
    goto L_91cdf;
L_91c80:
    X86_TICK(c, 18);
    // 091c80  push edi
    X86_AT(c, 0x91c80u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 091c81  push 8
    X86_AT(c, 0x91c81u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 091c83  push 1
    X86_AT(c, 0x91c83u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 091c85  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x91c85u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 091c88  call 0x92340
    X86_AT(c, 0x91c88u);
    push32(c, 0x91c8du); x86_call_known(c, 0x92340u, f_00092340); X86_RET(c, 0x91c8du);
    X86_TICK(c, 9);
    // 091c8d  add esp, 0x10
    X86_AT(c, 0x91c8du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 091c90  cmp eax, 8
    X86_AT(c, 0x91c90u);
    (void)x86_sub(c, c.r[0], 0x8u, 0, 4);
    // 091c93  jl 0x91cb5
    X86_AT(c, 0x91c93u);
    if (x86_cc(c, 12)) { goto L_91cb5; }
    X86_TICK(c, 2);
    // 091c95  sub esi, esi
    X86_AT(c, 0x91c95u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_91c97:
    X86_TICK(c, 7);
    // 091c97  cmp esi, 0x80
    X86_AT(c, 0x91c97u);
    (void)x86_sub(c, c.r[6], 0x80u, 0, 4);
    // 091c9d  jge 0x91cd4
    X86_AT(c, 0x91c9du);
    if (x86_cc(c, 13)) { goto L_91cd4; }
    X86_TICK(c, 17);
    // 091c9f  push edi
    X86_AT(c, 0x91c9fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 091ca0  push 0x30
    X86_AT(c, 0x91ca0u);
    { uint32_t v = 0x30u; push32(c, v); }
    // 091ca2  push 1
    X86_AT(c, 0x91ca2u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 091ca4  lea eax, [ebp - 0x30]
    X86_AT(c, 0x91ca4u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD0u);
    // 091ca7  push eax
    X86_AT(c, 0x91ca7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 091ca8  call 0x92340
    X86_AT(c, 0x91ca8u);
    push32(c, 0x91cadu); x86_call_known(c, 0x92340u, f_00092340); X86_RET(c, 0x91cadu);
    X86_TICK(c, 9);
    // 091cad  add esp, 0x10
    X86_AT(c, 0x91cadu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 091cb0  cmp eax, 0x30
    X86_AT(c, 0x91cb0u);
    (void)x86_sub(c, c.r[0], 0x30u, 0, 4);
    // 091cb3  jge 0x91cc2
    X86_AT(c, 0x91cb3u);
    if (x86_cc(c, 13)) { goto L_91cc2; }
L_91cb5:
    X86_TICK(c, 9);
    // 091cb5  push edi
    X86_AT(c, 0x91cb5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 091cb6  call 0x92b18
    X86_AT(c, 0x91cb6u);
    push32(c, 0x91cbbu); x86_call_known(c, 0x92b18u, f_00092b18); X86_RET(c, 0x91cbbu);
    X86_TICK(c, 9);
    // 091cbb  mov eax, 2
    X86_AT(c, 0x91cbbu);
    c.r[0] = 0x2u;
    // 091cc0  jmp 0x91cdc
    X86_AT(c, 0x91cc0u);
    goto L_91cdc;
L_91cc2:
    X86_TICK(c, 15);
    // 091cc2  lea eax, [ebp - 0x30]
    X86_AT(c, 0x91cc2u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD0u);
    // 091cc5  push eax
    X86_AT(c, 0x91cc5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 091cc6  push esi
    X86_AT(c, 0x91cc6u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 091cc7  push 0
    X86_AT(c, 0x91cc7u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 091cc9  call 0x8f3f9
    X86_AT(c, 0x91cc9u);
    push32(c, 0x91cceu); x86_call_known(c, 0x8f3f9u, f_0008f3f9); X86_RET(c, 0x91cceu);
    X86_TICK(c, 11);
    // 091cce  inc esi
    X86_AT(c, 0x91cceu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 091ccf  add esp, 0xc
    X86_AT(c, 0x91ccfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 091cd2  jmp 0x91c97
    X86_AT(c, 0x91cd2u);
    X86_POLL(c, 0x91c97u); goto L_91c97;
L_91cd4:
    X86_TICK(c, 9);
    // 091cd4  push edi
    X86_AT(c, 0x91cd4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 091cd5  call 0x92b18
    X86_AT(c, 0x91cd5u);
    push32(c, 0x91cdau); x86_call_known(c, 0x92b18u, f_00092b18); X86_RET(c, 0x91cdau);
    X86_TICK(c, 2);
    // 091cda  sub eax, eax
    X86_AT(c, 0x91cdau);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_91cdc:
    X86_TICK(c, 2);
    // 091cdc  add esp, 4
    X86_AT(c, 0x91cdcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_91cdf:
    X86_TICK(c, 28);
    // 091cdf  pop edi
    X86_AT(c, 0x91cdfu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 091ce0  pop esi
    X86_AT(c, 0x91ce0u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 091ce1  pop ebx
    X86_AT(c, 0x91ce1u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 091ce2  leave 
    X86_AT(c, 0x91ce2u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 091ce3  ret 
    X86_AT(c, 0x91ce3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x91bc8u, "ran off the end of a function");
}
void f_00091ed8(X86Cpu& c) {
    X86_TICK(c, 42);
    // 091ed8  enter 0x14, 0
    X86_AT(c, 0x91ed8u);
    x86_enter(c, 0x14u, 0x0u, 4);
    // 091edc  push ebx
    X86_AT(c, 0x91edcu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 091edd  push esi
    X86_AT(c, 0x91eddu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 091ede  push edi
    X86_AT(c, 0x91edeu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 091edf  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x91edfu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 091ee2  mov ax, word ptr [0x8a96e]
    X86_AT(c, 0x91ee2u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x8A96Eu))));
    // 091ee8  mov word ptr [ebp - 0xe], ax
    X86_AT(c, 0x91ee8u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u)), (c.r[0] & 0xFFFFu));
    // 091eec  sub eax, eax
    X86_AT(c, 0x91eecu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 091eee  mov word ptr [0x8a96e], ax
    X86_AT(c, 0x91eeeu);
    wr16((c.sbase[3] + (uint32_t)(0x8A96Eu)), (c.r[0] & 0xFFFFu));
    // 091ef4  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0x91ef4u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 091ef7  test byte ptr [ebx + 0xc], 1
    X86_AT(c, 0x91ef7u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x1u, 1);
    // 091efb  je 0x921ed
    X86_AT(c, 0x91efbu);
    if (x86_cc(c, 4)) { goto L_921ed; }
    X86_TICK(c, 9);
    // 091f01  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x91f01u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 091f04  jmp 0x921ce
    X86_AT(c, 0x91f04u);
    goto L_921ce;
L_91f09:
    X86_TICK(c, 12);
    // 091f09  test byte ptr [ebx + 0xc], 0x40
    X86_AT(c, 0x91f09u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x40u, 1);
    // 091f0d  je 0x92106
    X86_AT(c, 0x91f0du);
    if (x86_cc(c, 4)) { goto L_92106; }
    X86_TICK(c, 12);
    // 091f13  cmp dword ptr [ebx + 4], 1
    X86_AT(c, 0x91f13u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x1u, 0, 4);
    // 091f17  jne 0x91f5e
    X86_AT(c, 0x91f17u);
    if (x86_cc(c, 5)) { goto L_91f5e; }
    X86_TICK(c, 12);
    // 091f19  cmp word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0x91f19u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0xFFFEu, 0, 2);
    // 091f1e  jne 0x91f5e
    X86_AT(c, 0x91f1eu);
    if (x86_cc(c, 5)) { goto L_91f5e; }
    X86_TICK(c, 12);
    // 091f20  test byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x91f20u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x4u, 1);
    // 091f24  jne 0x921a4
    X86_AT(c, 0x91f24u);
    if (x86_cc(c, 5)) { goto L_921a4; }
    X86_TICK(c, 33);
    // 091f2a  mov al, byte ptr [0x8a5da]
    X86_AT(c, 0x91f2au);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8A5DAu))));
    // 091f2f  mov edx, dword ptr [ebx + 8]
    X86_AT(c, 0x91f2fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 091f32  mov byte ptr [edx], al
    X86_AT(c, 0x91f32u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 091f34  push 0x1ff
    X86_AT(c, 0x91f34u);
    { uint32_t v = 0x1FFu; push32(c, v); }
    // 091f39  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x91f39u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 091f3c  inc eax
    X86_AT(c, 0x91f3cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 091f3d  push eax
    X86_AT(c, 0x91f3du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 091f3e  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x91f3eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 091f41  push eax
    X86_AT(c, 0x91f41u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 091f42  call 0x94e20
    X86_AT(c, 0x91f42u);
    push32(c, 0x91f47u); x86_call_known(c, 0x94e20u, f_00094e20); X86_RET(c, 0x91f47u);
    X86_TICK(c, 11);
    // 091f47  inc eax
    X86_AT(c, 0x91f47u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 091f48  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x91f48u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
    // 091f4b  dec eax
    X86_AT(c, 0x91f4bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 091f4c  jne 0x91f96
    X86_AT(c, 0x91f4cu);
    if (x86_cc(c, 5)) { goto L_91f96; }
    X86_TICK(c, 15);
    // 091f4e  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x91f4eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 091f51  mov dword ptr [ebx], eax
    X86_AT(c, 0x91f51u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 091f53  mov word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0x91f53u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0x200u);
    // 091f59  jmp 0x921a4
    X86_AT(c, 0x91f59u);
    goto L_921a4;
L_91f5e:
    X86_TICK(c, 12);
    // 091f5e  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x91f5eu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 091f62  jne 0x91fdb
    X86_AT(c, 0x91f62u);
    if (x86_cc(c, 5)) { goto L_91fdb; }
    X86_TICK(c, 12);
    // 091f68  test byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0x91f68u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x10u, 1);
    // 091f6c  jne 0x921d6
    X86_AT(c, 0x91f6cu);
    if (x86_cc(c, 5)) { goto L_921d6; }
    X86_TICK(c, 12);
    // 091f72  test byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x91f72u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x4u, 1);
    // 091f76  jne 0x91f8c
    X86_AT(c, 0x91f76u);
    if (x86_cc(c, 5)) { goto L_91f8c; }
    X86_TICK(c, 20);
    // 091f78  push 0x200
    X86_AT(c, 0x91f78u);
    { uint32_t v = 0x200u; push32(c, v); }
    // 091f7d  push dword ptr [ebx + 8]
    X86_AT(c, 0x91f7du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 091f80  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x91f80u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 091f83  push eax
    X86_AT(c, 0x91f83u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 091f84  call 0x94e20
    X86_AT(c, 0x91f84u);
    push32(c, 0x91f89u); x86_call_known(c, 0x94e20u, f_00094e20); X86_RET(c, 0x91f89u);
    X86_TICK(c, 2);
    // 091f89  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x91f89u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
L_91f8c:
    X86_TICK(c, 12);
    // 091f8c  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x91f8cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 091f90  je 0x921d6
    X86_AT(c, 0x91f90u);
    if (x86_cc(c, 4)) { goto L_921d6; }
L_91f96:
    X86_TICK(c, 28);
    // 091f96  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x91f96u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 091f99  mov al, 0x1a
    X86_AT(c, 0x91f99u);
    s8(c, 0, 0x1Au);
    // 091f9b  mov ecx, dword ptr [ebx + 8]
    X86_AT(c, 0x91f9bu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 091f9e  push edi
    X86_AT(c, 0x91f9eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 091f9f  mov edi, ecx
    X86_AT(c, 0x91f9fu);
    c.r[7] = c.r[1];
    // 091fa1  mov ecx, edx
    X86_AT(c, 0x91fa1u);
    c.r[1] = c.r[2];
    // 091fa3  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x91fa3u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 091fa5  jne 0x91faa
    X86_AT(c, 0x91fa5u);
    if (x86_cc(c, 5)) { goto L_91faa; }
    X86_TICK(c, 4);
    // 091fa7  inc ecx
    X86_AT(c, 0x91fa7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 091fa8  sub edx, ecx
    X86_AT(c, 0x91fa8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_91faa:
    X86_TICK(c, 17);
    // 091faa  pop edi
    X86_AT(c, 0x91faau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 091fab  mov word ptr [ebp - 0x10], dx
    X86_AT(c, 0x91fabu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), (c.r[2] & 0xFFFFu));
    // 091faf  cmp edx, dword ptr [ebx + 4]
    X86_AT(c, 0x91fafu);
    (void)x86_sub(c, c.r[2], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 091fb2  je 0x91fd0
    X86_AT(c, 0x91fb2u);
    if (x86_cc(c, 4)) { goto L_91fd0; }
    X86_TICK(c, 32);
    // 091fb4  or byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x91fb4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x4u, 1)); }
    // 091fb8  push 1
    X86_AT(c, 0x91fb8u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 091fba  mov dword ptr [ebp - 0x14], edx
    X86_AT(c, 0x91fbau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[2]);
    // 091fbd  sub edx, dword ptr [ebx + 4]
    X86_AT(c, 0x91fbdu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4); }
    // 091fc0  push edx
    X86_AT(c, 0x91fc0u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 091fc1  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x91fc1u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 091fc4  push eax
    X86_AT(c, 0x91fc4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 091fc5  call 0x94ef8
    X86_AT(c, 0x91fc5u);
    push32(c, 0x91fcau); x86_call_known(c, 0x94ef8u, f_00094ef8); X86_RET(c, 0x91fcau);
    X86_TICK(c, 6);
    // 091fca  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0x91fcau);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 091fcd  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x91fcdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
L_91fd0:
    X86_TICK(c, 8);
    // 091fd0  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x91fd0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 091fd3  mov dword ptr [ebx], eax
    X86_AT(c, 0x91fd3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 091fd5  mov word ptr [ebx + 0x10], 0xffff
    X86_AT(c, 0x91fd5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFFu);
L_91fdb:
    X86_TICK(c, 12);
    // 091fdb  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x91fdbu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 091fdf  jle 0x921ce
    X86_AT(c, 0x91fdfu);
    if (x86_cc(c, 14)) { goto L_921ce; }
    X86_TICK(c, 11);
    // 091fe5  mov ax, word ptr [ebx + 0x10]
    X86_AT(c, 0x91fe5u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))));
    // 091fe9  cmp ax, 0xffff
    X86_AT(c, 0x91fe9u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0xFFFFu, 0, 2);
    // 091fed  je 0x91ffd
    X86_AT(c, 0x91fedu);
    if (x86_cc(c, 4)) { goto L_91ffd; }
    X86_TICK(c, 20);
    // 091fef  movsx eax, ax
    X86_AT(c, 0x91fefu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 091ff2  add eax, dword ptr [ebx + 8]
    X86_AT(c, 0x91ff2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 091ff5  cmp eax, dword ptr [ebx]
    X86_AT(c, 0x91ff5u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4);
    // 091ff7  jge 0x92094
    X86_AT(c, 0x91ff7u);
    if (x86_cc(c, 13)) { goto L_92094; }
L_91ffd:
    X86_TICK(c, 30);
    // 091ffd  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x91ffdu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 092000  mov al, byte ptr [0x8a5da]
    X86_AT(c, 0x92000u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8A5DAu))));
    // 092005  mov ecx, dword ptr [ebx]
    X86_AT(c, 0x92005u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 092007  push edi
    X86_AT(c, 0x92007u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092008  mov edi, ecx
    X86_AT(c, 0x92008u);
    c.r[7] = c.r[1];
    // 09200a  mov ecx, edx
    X86_AT(c, 0x9200au);
    c.r[1] = c.r[2];
    // 09200c  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x9200cu);
    x86_string(c, 4, 1, 242, 4, 3);
    // 09200e  jne 0x92013
    X86_AT(c, 0x9200eu);
    if (x86_cc(c, 5)) { goto L_92013; }
    X86_TICK(c, 4);
    // 092010  inc ecx
    X86_AT(c, 0x92010u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 092011  sub edx, ecx
    X86_AT(c, 0x92011u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_92013:
    X86_TICK(c, 13);
    // 092013  pop edi
    X86_AT(c, 0x92013u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092014  mov word ptr [ebx + 0x10], dx
    X86_AT(c, 0x92014u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), (c.r[2] & 0xFFFFu));
    // 092018  jmp 0x9204d
    X86_AT(c, 0x92018u);
    goto L_9204d;
L_9201a:
    X86_TICK(c, 59);
    // 09201a  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x9201au);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 09201e  add eax, dword ptr [ebx]
    X86_AT(c, 0x9201eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4); }
    // 092020  inc eax
    X86_AT(c, 0x92020u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 092021  mov dx, word ptr [ebx + 0x10]
    X86_AT(c, 0x92021u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))));
    // 092025  inc edx
    X86_AT(c, 0x92025u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 092026  movsx edx, dx
    X86_AT(c, 0x92026u);
    c.r[2] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 092029  mov ecx, dword ptr [ebx + 4]
    X86_AT(c, 0x92029u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 09202c  sub ecx, edx
    X86_AT(c, 0x9202cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 09202e  mov edx, ecx
    X86_AT(c, 0x9202eu);
    c.r[2] = c.r[1];
    // 092030  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0x92030u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 092033  mov al, byte ptr [0x8a5da]
    X86_AT(c, 0x92033u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8A5DAu))));
    // 092038  mov ecx, dword ptr [ebp - 0x14]
    X86_AT(c, 0x92038u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 09203b  push edi
    X86_AT(c, 0x9203bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09203c  mov edi, ecx
    X86_AT(c, 0x9203cu);
    c.r[7] = c.r[1];
    // 09203e  mov ecx, edx
    X86_AT(c, 0x9203eu);
    c.r[1] = c.r[2];
    // 092040  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x92040u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 092042  jne 0x92047
    X86_AT(c, 0x92042u);
    if (x86_cc(c, 5)) { goto L_92047; }
    X86_TICK(c, 4);
    // 092044  inc ecx
    X86_AT(c, 0x92044u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 092045  sub edx, ecx
    X86_AT(c, 0x92045u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_92047:
    X86_TICK(c, 13);
    // 092047  pop edi
    X86_AT(c, 0x92047u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092048  inc edx
    X86_AT(c, 0x92048u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 092049  add word ptr [ebx + 0x10], dx
    X86_AT(c, 0x92049u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
L_9204d:
    X86_TICK(c, 19);
    // 09204d  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x9204du);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 092051  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x92051u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 092054  dec edx
    X86_AT(c, 0x92054u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 092055  cmp edx, eax
    X86_AT(c, 0x92055u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 092057  jle 0x92066
    X86_AT(c, 0x92057u);
    if (x86_cc(c, 14)) { goto L_92066; }
    X86_TICK(c, 23);
    // 092059  add eax, dword ptr [ebx]
    X86_AT(c, 0x92059u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4); }
    // 09205b  inc eax
    X86_AT(c, 0x9205bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 09205c  mov al, byte ptr [eax]
    X86_AT(c, 0x9205cu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 09205e  cmp al, byte ptr [0x8a5db]
    X86_AT(c, 0x9205eu);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(0x8A5DBu))), 0, 1);
    // 092064  jne 0x9201a
    X86_AT(c, 0x92064u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x9201au); goto L_9201a; }
L_92066:
    X86_TICK(c, 17);
    // 092066  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x92066u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 09206a  cmp eax, dword ptr [ebx + 4]
    X86_AT(c, 0x9206au);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 09206d  jne 0x92077
    X86_AT(c, 0x9206du);
    if (x86_cc(c, 5)) { goto L_92077; }
    X86_TICK(c, 9);
    // 09206f  mov word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0x9206fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0x200u);
    // 092075  jmp 0x92094
    X86_AT(c, 0x92075u);
    goto L_92094;
L_92077:
    X86_TICK(c, 19);
    // 092077  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x92077u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 09207b  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x9207bu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 09207e  dec edx
    X86_AT(c, 0x9207eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 09207f  cmp edx, eax
    X86_AT(c, 0x9207fu);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 092081  jne 0x9208b
    X86_AT(c, 0x92081u);
    if (x86_cc(c, 5)) { goto L_9208b; }
    X86_TICK(c, 9);
    // 092083  mov word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0x92083u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFEu);
    // 092089  jmp 0x92094
    X86_AT(c, 0x92089u);
    goto L_92094;
L_9208b:
    X86_TICK(c, 17);
    // 09208b  mov eax, dword ptr [ebx]
    X86_AT(c, 0x9208bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 09208d  sub eax, dword ptr [ebx + 8]
    X86_AT(c, 0x9208du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 092090  add word ptr [ebx + 0x10], ax
    X86_AT(c, 0x92090u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_92094:
    X86_TICK(c, 12);
    // 092094  cmp word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0x92094u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0x200u, 0, 2);
    // 09209a  je 0x921a4
    X86_AT(c, 0x9209au);
    if (x86_cc(c, 4)) { goto L_921a4; }
    X86_TICK(c, 12);
    // 0920a0  cmp word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0x920a0u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0xFFFEu, 0, 2);
    // 0920a5  jne 0x920b5
    X86_AT(c, 0x920a5u);
    if (x86_cc(c, 5)) { goto L_920b5; }
    X86_TICK(c, 11);
    // 0920a7  cmp edi, dword ptr [ebx + 4]
    X86_AT(c, 0x920a7u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 0920aa  jl 0x920ff
    X86_AT(c, 0x920aau);
    if (x86_cc(c, 12)) { goto L_920ff; }
    X86_TICK(c, 13);
    // 0920ac  mov esi, dword ptr [ebx + 4]
    X86_AT(c, 0x920acu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0920af  dec esi
    X86_AT(c, 0x920afu);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0920b0  jmp 0x921b0
    X86_AT(c, 0x920b0u);
    goto L_921b0;
L_920b5:
    X86_TICK(c, 25);
    // 0920b5  mov eax, dword ptr [ebx]
    X86_AT(c, 0x920b5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0920b7  sub eax, dword ptr [ebx + 8]
    X86_AT(c, 0x920b7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 0920ba  movsx esi, word ptr [ebx + 0x10]
    X86_AT(c, 0x920bau);
    c.r[6] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 0920be  sub esi, eax
    X86_AT(c, 0x920beu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0920c0  cmp edi, esi
    X86_AT(c, 0x920c0u);
    (void)x86_sub(c, c.r[7], c.r[6], 0, 4);
    // 0920c2  jbe 0x920ff
    X86_AT(c, 0x920c2u);
    if (x86_cc(c, 6)) { goto L_920ff; }
    X86_TICK(c, 87);
    // 0920c4  mov ecx, esi
    X86_AT(c, 0x920c4u);
    c.r[1] = c.r[6];
    // 0920c6  mov eax, dword ptr [ebx]
    X86_AT(c, 0x920c6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0920c8  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x920c8u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0920cb  mov dword ptr [ebp - 0x14], edi
    X86_AT(c, 0x920cbu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[7]);
    // 0920ce  mov edi, dword ptr [ebp - 4]
    X86_AT(c, 0x920ceu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0920d1  lea edx, [edx + edi*1]
    X86_AT(c, 0x920d1u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[7]);
    // 0920d4  push esi
    X86_AT(c, 0x920d4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0920d5  push edi
    X86_AT(c, 0x920d5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0920d6  mov esi, eax
    X86_AT(c, 0x920d6u);
    c.r[6] = c.r[0];
    // 0920d8  mov edi, edx
    X86_AT(c, 0x920d8u);
    c.r[7] = c.r[2];
    // 0920da  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x920dau);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0920dc  pop edi
    X86_AT(c, 0x920dcu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0920dd  pop esi
    X86_AT(c, 0x920ddu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0920de  add edi, esi
    X86_AT(c, 0x920deu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[6], 0, 4); }
    // 0920e0  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x920e0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0920e3  mov byte ptr [eax + edi*1], 0xa
    X86_AT(c, 0x920e3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7])), 0xAu);
    // 0920e7  lea eax, [esi + 1]
    X86_AT(c, 0x920e7u);
    c.r[0] = (uint32_t)(c.r[6] + 0x1u);
    // 0920ea  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x920eau);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0920ed  mov edi, dword ptr [ebp - 0x14]
    X86_AT(c, 0x920edu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0920f0  sub edi, eax
    X86_AT(c, 0x920f0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0920f2  lea eax, [esi + 2]
    X86_AT(c, 0x920f2u);
    c.r[0] = (uint32_t)(c.r[6] + 0x2u);
    // 0920f5  sub dword ptr [ebx + 4], eax
    X86_AT(c, 0x920f5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0920f8  add dword ptr [ebx], eax
    X86_AT(c, 0x920f8u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0920fa  jmp 0x921ce
    X86_AT(c, 0x920fau);
    goto L_921ce;
L_920ff:
    X86_TICK(c, 9);
    // 0920ff  mov esi, edi
    X86_AT(c, 0x920ffu);
    c.r[6] = c.r[7];
    // 092101  jmp 0x921b0
    X86_AT(c, 0x92101u);
    goto L_921b0;
L_92106:
    X86_TICK(c, 13);
    // 092106  mov word ptr [ebx + 0x10], 0xffff
    X86_AT(c, 0x92106u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFFu);
    // 09210c  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x9210cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 09210f  cmp edi, eax
    X86_AT(c, 0x9210fu);
    (void)x86_sub(c, c.r[7], c.r[0], 0, 4);
    // 092111  jl 0x92137
    X86_AT(c, 0x92111u);
    if (x86_cc(c, 12)) { goto L_92137; }
    X86_TICK(c, 7);
    // 092113  and eax, eax
    X86_AT(c, 0x92113u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 092115  jle 0x92137
    X86_AT(c, 0x92115u);
    if (x86_cc(c, 14)) { goto L_92137; }
    X86_TICK(c, 53);
    // 092117  xchg ecx, eax
    X86_AT(c, 0x92117u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
    // 092118  mov eax, dword ptr [ebx]
    X86_AT(c, 0x92118u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 09211a  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x9211au);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 09211d  push esi
    X86_AT(c, 0x9211du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 09211e  push edi
    X86_AT(c, 0x9211eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09211f  mov esi, eax
    X86_AT(c, 0x9211fu);
    c.r[6] = c.r[0];
    // 092121  mov edi, edx
    X86_AT(c, 0x92121u);
    c.r[7] = c.r[2];
    // 092123  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x92123u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 092125  pop edi
    X86_AT(c, 0x92125u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092126  pop esi
    X86_AT(c, 0x92126u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 092127  sub edi, dword ptr [ebx + 4]
    X86_AT(c, 0x92127u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4); }
    // 09212a  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x9212au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 09212d  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x9212du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 092130  mov dword ptr [ebx + 4], 0
    X86_AT(c, 0x92130u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0x0u);
L_92137:
    X86_TICK(c, 7);
    // 092137  cmp edi, 0x200
    X86_AT(c, 0x92137u);
    (void)x86_sub(c, c.r[7], 0x200u, 0, 4);
    // 09213d  jb 0x92175
    X86_AT(c, 0x9213du);
    if (x86_cc(c, 2)) { goto L_92175; }
    X86_TICK(c, 10);
    // 09213f  mov esi, edi
    X86_AT(c, 0x9213fu);
    c.r[6] = c.r[7];
    // 092141  shr esi, 9
    X86_AT(c, 0x92141u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 5, v, 0x9u, 4, w); if (w) c.r[6] = r; }
    // 092144  shl esi, 9
    X86_AT(c, 0x92144u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[6] = r; }
    // 092147  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0x92147u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
L_9214e:
    X86_TICK(c, 27);
    // 09214e  push esi
    X86_AT(c, 0x9214eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 09214f  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x9214fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 092152  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0x92152u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 092155  push eax
    X86_AT(c, 0x92155u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092156  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x92156u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 092159  push eax
    X86_AT(c, 0x92159u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09215a  call 0x94e20
    X86_AT(c, 0x9215au);
    push32(c, 0x9215fu); x86_call_known(c, 0x94e20u, f_00094e20); X86_RET(c, 0x9215fu);
    X86_TICK(c, 25);
    // 09215f  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x9215fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 092162  add dword ptr [ebp - 0xc], eax
    X86_AT(c, 0x92162u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 092165  sub esi, eax
    X86_AT(c, 0x92165u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[0], 0, 4); }
    // 092167  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x92167u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 09216a  and esi, esi
    X86_AT(c, 0x9216au);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 09216c  je 0x92172
    X86_AT(c, 0x9216cu);
    if (x86_cc(c, 4)) { goto L_92172; }
    X86_TICK(c, 7);
    // 09216e  and eax, eax
    X86_AT(c, 0x9216eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 092170  jne 0x9214e
    X86_AT(c, 0x92170u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x9214eu); goto L_9214e; }
L_92172:
    X86_TICK(c, 6);
    // 092172  sub edi, dword ptr [ebp - 0xc]
    X86_AT(c, 0x92172u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 4); }
L_92175:
    X86_TICK(c, 7);
    // 092175  and edi, edi
    X86_AT(c, 0x92175u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 092177  jbe 0x921ce
    X86_AT(c, 0x92177u);
    if (x86_cc(c, 6)) { goto L_921ce; }
    X86_TICK(c, 12);
    // 092179  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x92179u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 09217d  jne 0x9219e
    X86_AT(c, 0x9217du);
    if (x86_cc(c, 5)) { goto L_9219e; }
    X86_TICK(c, 12);
    // 09217f  test byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0x9217fu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x10u, 1);
    // 092183  jne 0x921d6
    X86_AT(c, 0x92183u);
    if (x86_cc(c, 5)) { goto L_921d6; }
    X86_TICK(c, 20);
    // 092185  push 0x200
    X86_AT(c, 0x92185u);
    { uint32_t v = 0x200u; push32(c, v); }
    // 09218a  push dword ptr [ebx + 8]
    X86_AT(c, 0x9218au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 09218d  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x9218du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 092190  push eax
    X86_AT(c, 0x92190u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092191  call 0x94e20
    X86_AT(c, 0x92191u);
    push32(c, 0x92196u); x86_call_known(c, 0x94e20u, f_00094e20); X86_RET(c, 0x92196u);
    X86_TICK(c, 8);
    // 092196  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x92196u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
    // 092199  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x92199u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 09219c  mov dword ptr [ebx], eax
    X86_AT(c, 0x9219cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
L_9219e:
    X86_TICK(c, 12);
    // 09219e  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x9219eu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 0921a2  jle 0x921d6
    X86_AT(c, 0x921a2u);
    if (x86_cc(c, 14)) { goto L_921d6; }
L_921a4:
    X86_TICK(c, 13);
    // 0921a4  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x921a4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0921a7  mov edx, edi
    X86_AT(c, 0x921a7u);
    c.r[2] = c.r[7];
    // 0921a9  cmp edx, eax
    X86_AT(c, 0x921a9u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0921ab  jl 0x921ae
    X86_AT(c, 0x921abu);
    if (x86_cc(c, 12)) { goto L_921ae; }
    X86_TICK(c, 3);
    // 0921ad  xchg edx, eax
    X86_AT(c, 0x921adu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_921ae:
    X86_TICK(c, 2);
    // 0921ae  mov esi, edx
    X86_AT(c, 0x921aeu);
    c.r[6] = c.r[2];
L_921b0:
    X86_TICK(c, 62);
    // 0921b0  mov ecx, esi
    X86_AT(c, 0x921b0u);
    c.r[1] = c.r[6];
    // 0921b2  mov eax, dword ptr [ebx]
    X86_AT(c, 0x921b2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0921b4  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x921b4u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0921b7  add edx, dword ptr [ebp - 4]
    X86_AT(c, 0x921b7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0921ba  push esi
    X86_AT(c, 0x921bau);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0921bb  push edi
    X86_AT(c, 0x921bbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0921bc  mov esi, eax
    X86_AT(c, 0x921bcu);
    c.r[6] = c.r[0];
    // 0921be  mov edi, edx
    X86_AT(c, 0x921beu);
    c.r[7] = c.r[2];
    // 0921c0  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x921c0u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0921c2  pop edi
    X86_AT(c, 0x921c2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0921c3  pop esi
    X86_AT(c, 0x921c3u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0921c4  add dword ptr [ebp - 4], esi
    X86_AT(c, 0x921c4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 0921c7  sub dword ptr [ebx + 4], esi
    X86_AT(c, 0x921c7u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[6], 0, 4)); }
    // 0921ca  sub edi, esi
    X86_AT(c, 0x921cau);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0921cc  add dword ptr [ebx], esi
    X86_AT(c, 0x921ccu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
L_921ce:
    X86_TICK(c, 7);
    // 0921ce  and edi, edi
    X86_AT(c, 0x921ceu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0921d0  ja 0x91f09
    X86_AT(c, 0x921d0u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x91f09u); goto L_91f09; }
L_921d6:
    X86_TICK(c, 12);
    // 0921d6  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0x921d6u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 0921da  jne 0x921e0
    X86_AT(c, 0x921dau);
    if (x86_cc(c, 5)) { goto L_921e0; }
    X86_TICK(c, 7);
    // 0921dc  or byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0x921dcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x10u, 1)); }
L_921e0:
    X86_TICK(c, 13);
    // 0921e0  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x921e0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0921e3  mov dword ptr [0x8a5e0], eax
    X86_AT(c, 0x921e3u);
    wr32((c.sbase[3] + (uint32_t)(0x8A5E0u)), c.r[0]);
    // 0921e8  jmp 0x92318
    X86_AT(c, 0x921e8u);
    goto L_92318;
L_921ed:
    X86_TICK(c, 14);
    // 0921ed  mov dword ptr [0x8a5e0], 0
    X86_AT(c, 0x921edu);
    wr32((c.sbase[3] + (uint32_t)(0x8A5E0u)), 0x0u);
    // 0921f7  test byte ptr [ebx + 0xc], 0x40
    X86_AT(c, 0x921f7u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x40u, 1);
    // 0921fb  je 0x92303
    X86_AT(c, 0x921fbu);
    if (x86_cc(c, 4)) { goto L_92303; }
    X86_TICK(c, 12);
    // 092201  test byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x92201u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x4u, 1);
    // 092205  jne 0x92307
    X86_AT(c, 0x92205u);
    if (x86_cc(c, 5)) { goto L_92307; }
    X86_TICK(c, 7);
    // 09220b  jmp 0x922d5
    X86_AT(c, 0x9220bu);
    goto L_922d5;
L_92210:
    X86_TICK(c, 19);
    // 092210  push 1
    X86_AT(c, 0x92210u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 092212  lea eax, [ebp - 0xf]
    X86_AT(c, 0x92212u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF1u);
    // 092215  push eax
    X86_AT(c, 0x92215u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092216  mov dl, byte ptr [ebx + 0xe]
    X86_AT(c, 0x92216u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 092219  push edx
    X86_AT(c, 0x92219u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 09221a  call 0x94e20
    X86_AT(c, 0x9221au);
    push32(c, 0x9221fu); x86_call_known(c, 0x94e20u, f_00094e20); X86_RET(c, 0x9221fu);
    X86_TICK(c, 10);
    // 09221f  xchg esi, eax
    X86_AT(c, 0x9221fu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 092220  and esi, esi
    X86_AT(c, 0x92220u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 092222  je 0x9227a
    X86_AT(c, 0x92222u);
    if (x86_cc(c, 4)) { goto L_9227a; }
    X86_TICK(c, 12);
    // 092224  cmp byte ptr [ebp - 0xf], 0x1a
    X86_AT(c, 0x92224u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u))), 0x1Au, 0, 1);
    // 092228  je 0x9227a
    X86_AT(c, 0x92228u);
    if (x86_cc(c, 4)) { goto L_9227a; }
L_9222a:
    X86_TICK(c, 15);
    // 09222a  mov al, byte ptr [ebp - 0xf]
    X86_AT(c, 0x9222au);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u))));
    // 09222d  cmp al, byte ptr [0x8a5da]
    X86_AT(c, 0x9222du);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(0x8A5DAu))), 0, 1);
    // 092233  jne 0x922c4
    X86_AT(c, 0x92233u);
    if (x86_cc(c, 5)) { goto L_922c4; }
    X86_TICK(c, 13);
    // 092239  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x92239u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 09223c  push eax
    X86_AT(c, 0x9223cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09223d  call 0x94eb0
    X86_AT(c, 0x9223du);
    push32(c, 0x92242u); x86_call_known(c, 0x94eb0u, f_00094eb0); X86_RET(c, 0x92242u);
    X86_TICK(c, 7);
    // 092242  dec al
    X86_AT(c, 0x92242u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 092244  je 0x9228e
    X86_AT(c, 0x92244u);
    if (x86_cc(c, 4)) { goto L_9228e; }
    X86_TICK(c, 19);
    // 092246  push 1
    X86_AT(c, 0x92246u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 092248  lea eax, [ebp - 0xf]
    X86_AT(c, 0x92248u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF1u);
    // 09224b  push eax
    X86_AT(c, 0x9224bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09224c  mov dl, byte ptr [ebx + 0xe]
    X86_AT(c, 0x9224cu);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 09224f  push edx
    X86_AT(c, 0x9224fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 092250  call 0x94e20
    X86_AT(c, 0x92250u);
    push32(c, 0x92255u); x86_call_known(c, 0x94e20u, f_00094e20); X86_RET(c, 0x92255u);
    X86_TICK(c, 10);
    // 092255  xchg esi, eax
    X86_AT(c, 0x92255u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 092256  and esi, esi
    X86_AT(c, 0x92256u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 092258  je 0x92260
    X86_AT(c, 0x92258u);
    if (x86_cc(c, 4)) { goto L_92260; }
    X86_TICK(c, 12);
    // 09225a  cmp byte ptr [ebp - 0xf], 0x1a
    X86_AT(c, 0x9225au);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u))), 0x1Au, 0, 1);
    // 09225e  jne 0x92283
    X86_AT(c, 0x9225eu);
    if (x86_cc(c, 5)) { goto L_92283; }
L_92260:
    X86_TICK(c, 28);
    // 092260  mov al, byte ptr [0x8a5da]
    X86_AT(c, 0x92260u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8A5DAu))));
    // 092265  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x92265u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 092268  mov byte ptr [edx], al
    X86_AT(c, 0x92268u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 09226a  inc dword ptr [0x8a5e0]
    X86_AT(c, 0x9226au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A5E0u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 092270  cmp byte ptr [ebp - 0xf], 0x1a
    X86_AT(c, 0x92270u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u))), 0x1Au, 0, 1);
    // 092274  jne 0x92307
    X86_AT(c, 0x92274u);
    if (x86_cc(c, 5)) { goto L_92307; }
L_9227a:
    X86_TICK(c, 14);
    // 09227a  or byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x9227au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x4u, 1)); }
    // 09227e  jmp 0x92307
    X86_AT(c, 0x9227eu);
    goto L_92307;
L_92283:
    X86_TICK(c, 15);
    // 092283  mov al, byte ptr [ebp - 0xf]
    X86_AT(c, 0x92283u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u))));
    // 092286  cmp al, byte ptr [0x8a5db]
    X86_AT(c, 0x92286u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(0x8A5DBu))), 0, 1);
    // 09228c  jne 0x92296
    X86_AT(c, 0x9228cu);
    if (x86_cc(c, 5)) { goto L_92296; }
L_9228e:
    X86_TICK(c, 13);
    // 09228e  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x9228eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 092291  mov byte ptr [eax], 0xa
    X86_AT(c, 0x92291u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), 0xAu);
    // 092294  jmp 0x922cc
    X86_AT(c, 0x92294u);
    goto L_922cc;
L_92296:
    X86_TICK(c, 33);
    // 092296  mov al, byte ptr [0x8a5da]
    X86_AT(c, 0x92296u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8A5DAu))));
    // 09229b  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x9229bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 09229e  mov byte ptr [edx], al
    X86_AT(c, 0x9229eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 0922a0  inc dword ptr [0x8a5e0]
    X86_AT(c, 0x922a0u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A5E0u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0922a6  inc dword ptr [ebp + 0xc]
    X86_AT(c, 0x922a6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0922a9  cmp edi, dword ptr [0x8a5e0]
    X86_AT(c, 0x922a9u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0x8A5E0u))), 0, 4);
    // 0922af  jne 0x9222a
    X86_AT(c, 0x922afu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x9222au); goto L_9222a; }
    X86_TICK(c, 17);
    // 0922b5  push 1
    X86_AT(c, 0x922b5u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0922b7  push 0xffffffff
    X86_AT(c, 0x922b7u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0922b9  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x922b9u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0922bc  push eax
    X86_AT(c, 0x922bcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0922bd  call 0x94ef8
    X86_AT(c, 0x922bdu);
    push32(c, 0x922c2u); x86_call_known(c, 0x94ef8u, f_00094ef8); X86_RET(c, 0x922c2u);
    X86_TICK(c, 7);
    // 0922c2  jmp 0x92307
    X86_AT(c, 0x922c2u);
    goto L_92307;
L_922c4:
    X86_TICK(c, 10);
    // 0922c4  mov al, byte ptr [ebp - 0xf]
    X86_AT(c, 0x922c4u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u))));
    // 0922c7  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x922c7u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0922ca  mov byte ptr [edx], al
    X86_AT(c, 0x922cau);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
L_922cc:
    X86_TICK(c, 12);
    // 0922cc  inc dword ptr [0x8a5e0]
    X86_AT(c, 0x922ccu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A5E0u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0922d2  inc dword ptr [ebp + 0xc]
    X86_AT(c, 0x922d2u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_922d5:
    X86_TICK(c, 11);
    // 0922d5  cmp edi, dword ptr [0x8a5e0]
    X86_AT(c, 0x922d5u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0x8A5E0u))), 0, 4);
    // 0922db  jbe 0x92307
    X86_AT(c, 0x922dbu);
    if (x86_cc(c, 6)) { goto L_92307; }
    X86_TICK(c, 7);
    // 0922dd  jmp 0x92210
    X86_AT(c, 0x922ddu);
    X86_POLL(c, 0x92210u); goto L_92210;
L_922e2:
    X86_TICK(c, 27);
    // 0922e2  push edi
    X86_AT(c, 0x922e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0922e3  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x922e3u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0922e6  add eax, dword ptr [0x8a5e0]
    X86_AT(c, 0x922e6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0x8A5E0u))), 0, 4); }
    // 0922ec  push eax
    X86_AT(c, 0x922ecu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0922ed  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x922edu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0922f0  push eax
    X86_AT(c, 0x922f0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0922f1  call 0x94e20
    X86_AT(c, 0x922f1u);
    push32(c, 0x922f6u); x86_call_known(c, 0x94e20u, f_00094e20); X86_RET(c, 0x922f6u);
    X86_TICK(c, 10);
    // 0922f6  xchg esi, eax
    X86_AT(c, 0x922f6u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0922f7  and esi, esi
    X86_AT(c, 0x922f7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0922f9  je 0x92307
    X86_AT(c, 0x922f9u);
    if (x86_cc(c, 4)) { goto L_92307; }
    X86_TICK(c, 9);
    // 0922fb  add dword ptr [0x8a5e0], esi
    X86_AT(c, 0x922fbu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A5E0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 092301  sub edi, esi
    X86_AT(c, 0x92301u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[6], 0, 4); }
L_92303:
    X86_TICK(c, 7);
    // 092303  and edi, edi
    X86_AT(c, 0x92303u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 092305  ja 0x922e2
    X86_AT(c, 0x92305u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x922e2u); goto L_922e2; }
L_92307:
    X86_TICK(c, 12);
    // 092307  cmp dword ptr [0x8a5e0], 0
    X86_AT(c, 0x92307u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x8A5E0u))), 0x0u, 0, 4);
    // 09230e  jne 0x92318
    X86_AT(c, 0x9230eu);
    if (x86_cc(c, 5)) { goto L_92318; }
    X86_TICK(c, 7);
    // 092310  and edi, edi
    X86_AT(c, 0x92310u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 092312  jbe 0x92318
    X86_AT(c, 0x92312u);
    if (x86_cc(c, 6)) { goto L_92318; }
    X86_TICK(c, 7);
    // 092314  or byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0x92314u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x10u, 1)); }
L_92318:
    X86_TICK(c, 12);
    // 092318  cmp word ptr [0x8a96e], 0
    X86_AT(c, 0x92318u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x8A96Eu))), 0x0u, 0, 2);
    // 092320  je 0x92328
    X86_AT(c, 0x92320u);
    if (x86_cc(c, 4)) { goto L_92328; }
    X86_TICK(c, 14);
    // 092322  or byte ptr [ebx + 0xc], 0x20
    X86_AT(c, 0x92322u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
    // 092326  jmp 0x92332
    X86_AT(c, 0x92326u);
    goto L_92332;
L_92328:
    X86_TICK(c, 6);
    // 092328  mov ax, word ptr [ebp - 0xe]
    X86_AT(c, 0x92328u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))));
    // 09232c  mov word ptr [0x8a96e], ax
    X86_AT(c, 0x9232cu);
    wr16((c.sbase[3] + (uint32_t)(0x8A96Eu)), (c.r[0] & 0xFFFFu));
L_92332:
    X86_TICK(c, 28);
    // 092332  pop edi
    X86_AT(c, 0x92332u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092333  pop esi
    X86_AT(c, 0x92333u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 092334  pop ebx
    X86_AT(c, 0x92334u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 092335  leave 
    X86_AT(c, 0x92335u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 092336  ret 0xc
    X86_AT(c, 0x92336u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x91ed8u, "ran off the end of a function");
}
void f_000921b0(X86Cpu& c) {
    goto L_921b0;
L_91f09:
    X86_TICK(c, 12);
    // 091f09  test byte ptr [ebx + 0xc], 0x40
    X86_AT(c, 0x91f09u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x40u, 1);
    // 091f0d  je 0x92106
    X86_AT(c, 0x91f0du);
    if (x86_cc(c, 4)) { goto L_92106; }
    X86_TICK(c, 12);
    // 091f13  cmp dword ptr [ebx + 4], 1
    X86_AT(c, 0x91f13u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x1u, 0, 4);
    // 091f17  jne 0x91f5e
    X86_AT(c, 0x91f17u);
    if (x86_cc(c, 5)) { goto L_91f5e; }
    X86_TICK(c, 12);
    // 091f19  cmp word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0x91f19u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0xFFFEu, 0, 2);
    // 091f1e  jne 0x91f5e
    X86_AT(c, 0x91f1eu);
    if (x86_cc(c, 5)) { goto L_91f5e; }
    X86_TICK(c, 12);
    // 091f20  test byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x91f20u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x4u, 1);
    // 091f24  jne 0x921a4
    X86_AT(c, 0x91f24u);
    if (x86_cc(c, 5)) { goto L_921a4; }
    X86_TICK(c, 33);
    // 091f2a  mov al, byte ptr [0x8a5da]
    X86_AT(c, 0x91f2au);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8A5DAu))));
    // 091f2f  mov edx, dword ptr [ebx + 8]
    X86_AT(c, 0x91f2fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 091f32  mov byte ptr [edx], al
    X86_AT(c, 0x91f32u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 091f34  push 0x1ff
    X86_AT(c, 0x91f34u);
    { uint32_t v = 0x1FFu; push32(c, v); }
    // 091f39  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x91f39u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 091f3c  inc eax
    X86_AT(c, 0x91f3cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 091f3d  push eax
    X86_AT(c, 0x91f3du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 091f3e  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x91f3eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 091f41  push eax
    X86_AT(c, 0x91f41u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 091f42  call 0x94e20
    X86_AT(c, 0x91f42u);
    push32(c, 0x91f47u); x86_call_known(c, 0x94e20u, f_00094e20); X86_RET(c, 0x91f47u);
    X86_TICK(c, 11);
    // 091f47  inc eax
    X86_AT(c, 0x91f47u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 091f48  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x91f48u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
    // 091f4b  dec eax
    X86_AT(c, 0x91f4bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 091f4c  jne 0x91f96
    X86_AT(c, 0x91f4cu);
    if (x86_cc(c, 5)) { goto L_91f96; }
    X86_TICK(c, 15);
    // 091f4e  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x91f4eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 091f51  mov dword ptr [ebx], eax
    X86_AT(c, 0x91f51u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 091f53  mov word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0x91f53u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0x200u);
    // 091f59  jmp 0x921a4
    X86_AT(c, 0x91f59u);
    goto L_921a4;
L_91f5e:
    X86_TICK(c, 12);
    // 091f5e  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x91f5eu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 091f62  jne 0x91fdb
    X86_AT(c, 0x91f62u);
    if (x86_cc(c, 5)) { goto L_91fdb; }
    X86_TICK(c, 12);
    // 091f68  test byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0x91f68u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x10u, 1);
    // 091f6c  jne 0x921d6
    X86_AT(c, 0x91f6cu);
    if (x86_cc(c, 5)) { goto L_921d6; }
    X86_TICK(c, 12);
    // 091f72  test byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x91f72u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x4u, 1);
    // 091f76  jne 0x91f8c
    X86_AT(c, 0x91f76u);
    if (x86_cc(c, 5)) { goto L_91f8c; }
    X86_TICK(c, 20);
    // 091f78  push 0x200
    X86_AT(c, 0x91f78u);
    { uint32_t v = 0x200u; push32(c, v); }
    // 091f7d  push dword ptr [ebx + 8]
    X86_AT(c, 0x91f7du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 091f80  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x91f80u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 091f83  push eax
    X86_AT(c, 0x91f83u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 091f84  call 0x94e20
    X86_AT(c, 0x91f84u);
    push32(c, 0x91f89u); x86_call_known(c, 0x94e20u, f_00094e20); X86_RET(c, 0x91f89u);
    X86_TICK(c, 2);
    // 091f89  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x91f89u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
L_91f8c:
    X86_TICK(c, 12);
    // 091f8c  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x91f8cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 091f90  je 0x921d6
    X86_AT(c, 0x91f90u);
    if (x86_cc(c, 4)) { goto L_921d6; }
L_91f96:
    X86_TICK(c, 28);
    // 091f96  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x91f96u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 091f99  mov al, 0x1a
    X86_AT(c, 0x91f99u);
    s8(c, 0, 0x1Au);
    // 091f9b  mov ecx, dword ptr [ebx + 8]
    X86_AT(c, 0x91f9bu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 091f9e  push edi
    X86_AT(c, 0x91f9eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 091f9f  mov edi, ecx
    X86_AT(c, 0x91f9fu);
    c.r[7] = c.r[1];
    // 091fa1  mov ecx, edx
    X86_AT(c, 0x91fa1u);
    c.r[1] = c.r[2];
    // 091fa3  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x91fa3u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 091fa5  jne 0x91faa
    X86_AT(c, 0x91fa5u);
    if (x86_cc(c, 5)) { goto L_91faa; }
    X86_TICK(c, 4);
    // 091fa7  inc ecx
    X86_AT(c, 0x91fa7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 091fa8  sub edx, ecx
    X86_AT(c, 0x91fa8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_91faa:
    X86_TICK(c, 17);
    // 091faa  pop edi
    X86_AT(c, 0x91faau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 091fab  mov word ptr [ebp - 0x10], dx
    X86_AT(c, 0x91fabu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), (c.r[2] & 0xFFFFu));
    // 091faf  cmp edx, dword ptr [ebx + 4]
    X86_AT(c, 0x91fafu);
    (void)x86_sub(c, c.r[2], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 091fb2  je 0x91fd0
    X86_AT(c, 0x91fb2u);
    if (x86_cc(c, 4)) { goto L_91fd0; }
    X86_TICK(c, 32);
    // 091fb4  or byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x91fb4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x4u, 1)); }
    // 091fb8  push 1
    X86_AT(c, 0x91fb8u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 091fba  mov dword ptr [ebp - 0x14], edx
    X86_AT(c, 0x91fbau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[2]);
    // 091fbd  sub edx, dword ptr [ebx + 4]
    X86_AT(c, 0x91fbdu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4); }
    // 091fc0  push edx
    X86_AT(c, 0x91fc0u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 091fc1  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x91fc1u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 091fc4  push eax
    X86_AT(c, 0x91fc4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 091fc5  call 0x94ef8
    X86_AT(c, 0x91fc5u);
    push32(c, 0x91fcau); x86_call_known(c, 0x94ef8u, f_00094ef8); X86_RET(c, 0x91fcau);
    X86_TICK(c, 6);
    // 091fca  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0x91fcau);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 091fcd  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x91fcdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
L_91fd0:
    X86_TICK(c, 8);
    // 091fd0  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x91fd0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 091fd3  mov dword ptr [ebx], eax
    X86_AT(c, 0x91fd3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 091fd5  mov word ptr [ebx + 0x10], 0xffff
    X86_AT(c, 0x91fd5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFFu);
L_91fdb:
    X86_TICK(c, 12);
    // 091fdb  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x91fdbu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 091fdf  jle 0x921ce
    X86_AT(c, 0x91fdfu);
    if (x86_cc(c, 14)) { goto L_921ce; }
    X86_TICK(c, 11);
    // 091fe5  mov ax, word ptr [ebx + 0x10]
    X86_AT(c, 0x91fe5u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))));
    // 091fe9  cmp ax, 0xffff
    X86_AT(c, 0x91fe9u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0xFFFFu, 0, 2);
    // 091fed  je 0x91ffd
    X86_AT(c, 0x91fedu);
    if (x86_cc(c, 4)) { goto L_91ffd; }
    X86_TICK(c, 20);
    // 091fef  movsx eax, ax
    X86_AT(c, 0x91fefu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 091ff2  add eax, dword ptr [ebx + 8]
    X86_AT(c, 0x91ff2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 091ff5  cmp eax, dword ptr [ebx]
    X86_AT(c, 0x91ff5u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4);
    // 091ff7  jge 0x92094
    X86_AT(c, 0x91ff7u);
    if (x86_cc(c, 13)) { goto L_92094; }
L_91ffd:
    X86_TICK(c, 30);
    // 091ffd  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x91ffdu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 092000  mov al, byte ptr [0x8a5da]
    X86_AT(c, 0x92000u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8A5DAu))));
    // 092005  mov ecx, dword ptr [ebx]
    X86_AT(c, 0x92005u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 092007  push edi
    X86_AT(c, 0x92007u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092008  mov edi, ecx
    X86_AT(c, 0x92008u);
    c.r[7] = c.r[1];
    // 09200a  mov ecx, edx
    X86_AT(c, 0x9200au);
    c.r[1] = c.r[2];
    // 09200c  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x9200cu);
    x86_string(c, 4, 1, 242, 4, 3);
    // 09200e  jne 0x92013
    X86_AT(c, 0x9200eu);
    if (x86_cc(c, 5)) { goto L_92013; }
    X86_TICK(c, 4);
    // 092010  inc ecx
    X86_AT(c, 0x92010u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 092011  sub edx, ecx
    X86_AT(c, 0x92011u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_92013:
    X86_TICK(c, 13);
    // 092013  pop edi
    X86_AT(c, 0x92013u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092014  mov word ptr [ebx + 0x10], dx
    X86_AT(c, 0x92014u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), (c.r[2] & 0xFFFFu));
    // 092018  jmp 0x9204d
    X86_AT(c, 0x92018u);
    goto L_9204d;
L_9201a:
    X86_TICK(c, 59);
    // 09201a  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x9201au);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 09201e  add eax, dword ptr [ebx]
    X86_AT(c, 0x9201eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4); }
    // 092020  inc eax
    X86_AT(c, 0x92020u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 092021  mov dx, word ptr [ebx + 0x10]
    X86_AT(c, 0x92021u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))));
    // 092025  inc edx
    X86_AT(c, 0x92025u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 092026  movsx edx, dx
    X86_AT(c, 0x92026u);
    c.r[2] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 092029  mov ecx, dword ptr [ebx + 4]
    X86_AT(c, 0x92029u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 09202c  sub ecx, edx
    X86_AT(c, 0x9202cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 09202e  mov edx, ecx
    X86_AT(c, 0x9202eu);
    c.r[2] = c.r[1];
    // 092030  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0x92030u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 092033  mov al, byte ptr [0x8a5da]
    X86_AT(c, 0x92033u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8A5DAu))));
    // 092038  mov ecx, dword ptr [ebp - 0x14]
    X86_AT(c, 0x92038u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 09203b  push edi
    X86_AT(c, 0x9203bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09203c  mov edi, ecx
    X86_AT(c, 0x9203cu);
    c.r[7] = c.r[1];
    // 09203e  mov ecx, edx
    X86_AT(c, 0x9203eu);
    c.r[1] = c.r[2];
    // 092040  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x92040u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 092042  jne 0x92047
    X86_AT(c, 0x92042u);
    if (x86_cc(c, 5)) { goto L_92047; }
    X86_TICK(c, 4);
    // 092044  inc ecx
    X86_AT(c, 0x92044u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 092045  sub edx, ecx
    X86_AT(c, 0x92045u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_92047:
    X86_TICK(c, 13);
    // 092047  pop edi
    X86_AT(c, 0x92047u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092048  inc edx
    X86_AT(c, 0x92048u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 092049  add word ptr [ebx + 0x10], dx
    X86_AT(c, 0x92049u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
L_9204d:
    X86_TICK(c, 19);
    // 09204d  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x9204du);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 092051  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x92051u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 092054  dec edx
    X86_AT(c, 0x92054u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 092055  cmp edx, eax
    X86_AT(c, 0x92055u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 092057  jle 0x92066
    X86_AT(c, 0x92057u);
    if (x86_cc(c, 14)) { goto L_92066; }
    X86_TICK(c, 23);
    // 092059  add eax, dword ptr [ebx]
    X86_AT(c, 0x92059u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4); }
    // 09205b  inc eax
    X86_AT(c, 0x9205bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 09205c  mov al, byte ptr [eax]
    X86_AT(c, 0x9205cu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 09205e  cmp al, byte ptr [0x8a5db]
    X86_AT(c, 0x9205eu);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(0x8A5DBu))), 0, 1);
    // 092064  jne 0x9201a
    X86_AT(c, 0x92064u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x9201au); goto L_9201a; }
L_92066:
    X86_TICK(c, 17);
    // 092066  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x92066u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 09206a  cmp eax, dword ptr [ebx + 4]
    X86_AT(c, 0x9206au);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 09206d  jne 0x92077
    X86_AT(c, 0x9206du);
    if (x86_cc(c, 5)) { goto L_92077; }
    X86_TICK(c, 9);
    // 09206f  mov word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0x9206fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0x200u);
    // 092075  jmp 0x92094
    X86_AT(c, 0x92075u);
    goto L_92094;
L_92077:
    X86_TICK(c, 19);
    // 092077  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x92077u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 09207b  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x9207bu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 09207e  dec edx
    X86_AT(c, 0x9207eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 09207f  cmp edx, eax
    X86_AT(c, 0x9207fu);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 092081  jne 0x9208b
    X86_AT(c, 0x92081u);
    if (x86_cc(c, 5)) { goto L_9208b; }
    X86_TICK(c, 9);
    // 092083  mov word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0x92083u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFEu);
    // 092089  jmp 0x92094
    X86_AT(c, 0x92089u);
    goto L_92094;
L_9208b:
    X86_TICK(c, 17);
    // 09208b  mov eax, dword ptr [ebx]
    X86_AT(c, 0x9208bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 09208d  sub eax, dword ptr [ebx + 8]
    X86_AT(c, 0x9208du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 092090  add word ptr [ebx + 0x10], ax
    X86_AT(c, 0x92090u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_92094:
    X86_TICK(c, 12);
    // 092094  cmp word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0x92094u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0x200u, 0, 2);
    // 09209a  je 0x921a4
    X86_AT(c, 0x9209au);
    if (x86_cc(c, 4)) { goto L_921a4; }
    X86_TICK(c, 12);
    // 0920a0  cmp word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0x920a0u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0xFFFEu, 0, 2);
    // 0920a5  jne 0x920b5
    X86_AT(c, 0x920a5u);
    if (x86_cc(c, 5)) { goto L_920b5; }
    X86_TICK(c, 11);
    // 0920a7  cmp edi, dword ptr [ebx + 4]
    X86_AT(c, 0x920a7u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 0920aa  jl 0x920ff
    X86_AT(c, 0x920aau);
    if (x86_cc(c, 12)) { goto L_920ff; }
    X86_TICK(c, 13);
    // 0920ac  mov esi, dword ptr [ebx + 4]
    X86_AT(c, 0x920acu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0920af  dec esi
    X86_AT(c, 0x920afu);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0920b0  jmp 0x921b0
    X86_AT(c, 0x920b0u);
    goto L_921b0;
L_920b5:
    X86_TICK(c, 25);
    // 0920b5  mov eax, dword ptr [ebx]
    X86_AT(c, 0x920b5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0920b7  sub eax, dword ptr [ebx + 8]
    X86_AT(c, 0x920b7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 0920ba  movsx esi, word ptr [ebx + 0x10]
    X86_AT(c, 0x920bau);
    c.r[6] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 0920be  sub esi, eax
    X86_AT(c, 0x920beu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0920c0  cmp edi, esi
    X86_AT(c, 0x920c0u);
    (void)x86_sub(c, c.r[7], c.r[6], 0, 4);
    // 0920c2  jbe 0x920ff
    X86_AT(c, 0x920c2u);
    if (x86_cc(c, 6)) { goto L_920ff; }
    X86_TICK(c, 87);
    // 0920c4  mov ecx, esi
    X86_AT(c, 0x920c4u);
    c.r[1] = c.r[6];
    // 0920c6  mov eax, dword ptr [ebx]
    X86_AT(c, 0x920c6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0920c8  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x920c8u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0920cb  mov dword ptr [ebp - 0x14], edi
    X86_AT(c, 0x920cbu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[7]);
    // 0920ce  mov edi, dword ptr [ebp - 4]
    X86_AT(c, 0x920ceu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0920d1  lea edx, [edx + edi*1]
    X86_AT(c, 0x920d1u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[7]);
    // 0920d4  push esi
    X86_AT(c, 0x920d4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0920d5  push edi
    X86_AT(c, 0x920d5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0920d6  mov esi, eax
    X86_AT(c, 0x920d6u);
    c.r[6] = c.r[0];
    // 0920d8  mov edi, edx
    X86_AT(c, 0x920d8u);
    c.r[7] = c.r[2];
    // 0920da  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x920dau);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0920dc  pop edi
    X86_AT(c, 0x920dcu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0920dd  pop esi
    X86_AT(c, 0x920ddu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0920de  add edi, esi
    X86_AT(c, 0x920deu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[6], 0, 4); }
    // 0920e0  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x920e0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0920e3  mov byte ptr [eax + edi*1], 0xa
    X86_AT(c, 0x920e3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7])), 0xAu);
    // 0920e7  lea eax, [esi + 1]
    X86_AT(c, 0x920e7u);
    c.r[0] = (uint32_t)(c.r[6] + 0x1u);
    // 0920ea  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x920eau);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0920ed  mov edi, dword ptr [ebp - 0x14]
    X86_AT(c, 0x920edu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0920f0  sub edi, eax
    X86_AT(c, 0x920f0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0920f2  lea eax, [esi + 2]
    X86_AT(c, 0x920f2u);
    c.r[0] = (uint32_t)(c.r[6] + 0x2u);
    // 0920f5  sub dword ptr [ebx + 4], eax
    X86_AT(c, 0x920f5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0920f8  add dword ptr [ebx], eax
    X86_AT(c, 0x920f8u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0920fa  jmp 0x921ce
    X86_AT(c, 0x920fau);
    goto L_921ce;
L_920ff:
    X86_TICK(c, 9);
    // 0920ff  mov esi, edi
    X86_AT(c, 0x920ffu);
    c.r[6] = c.r[7];
    // 092101  jmp 0x921b0
    X86_AT(c, 0x92101u);
    goto L_921b0;
L_92106:
    X86_TICK(c, 13);
    // 092106  mov word ptr [ebx + 0x10], 0xffff
    X86_AT(c, 0x92106u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFFu);
    // 09210c  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x9210cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 09210f  cmp edi, eax
    X86_AT(c, 0x9210fu);
    (void)x86_sub(c, c.r[7], c.r[0], 0, 4);
    // 092111  jl 0x92137
    X86_AT(c, 0x92111u);
    if (x86_cc(c, 12)) { goto L_92137; }
    X86_TICK(c, 7);
    // 092113  and eax, eax
    X86_AT(c, 0x92113u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 092115  jle 0x92137
    X86_AT(c, 0x92115u);
    if (x86_cc(c, 14)) { goto L_92137; }
    X86_TICK(c, 53);
    // 092117  xchg ecx, eax
    X86_AT(c, 0x92117u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
    // 092118  mov eax, dword ptr [ebx]
    X86_AT(c, 0x92118u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 09211a  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x9211au);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 09211d  push esi
    X86_AT(c, 0x9211du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 09211e  push edi
    X86_AT(c, 0x9211eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09211f  mov esi, eax
    X86_AT(c, 0x9211fu);
    c.r[6] = c.r[0];
    // 092121  mov edi, edx
    X86_AT(c, 0x92121u);
    c.r[7] = c.r[2];
    // 092123  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x92123u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 092125  pop edi
    X86_AT(c, 0x92125u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092126  pop esi
    X86_AT(c, 0x92126u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 092127  sub edi, dword ptr [ebx + 4]
    X86_AT(c, 0x92127u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4); }
    // 09212a  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x9212au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 09212d  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x9212du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 092130  mov dword ptr [ebx + 4], 0
    X86_AT(c, 0x92130u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0x0u);
L_92137:
    X86_TICK(c, 7);
    // 092137  cmp edi, 0x200
    X86_AT(c, 0x92137u);
    (void)x86_sub(c, c.r[7], 0x200u, 0, 4);
    // 09213d  jb 0x92175
    X86_AT(c, 0x9213du);
    if (x86_cc(c, 2)) { goto L_92175; }
    X86_TICK(c, 10);
    // 09213f  mov esi, edi
    X86_AT(c, 0x9213fu);
    c.r[6] = c.r[7];
    // 092141  shr esi, 9
    X86_AT(c, 0x92141u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 5, v, 0x9u, 4, w); if (w) c.r[6] = r; }
    // 092144  shl esi, 9
    X86_AT(c, 0x92144u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[6] = r; }
    // 092147  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0x92147u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
L_9214e:
    X86_TICK(c, 27);
    // 09214e  push esi
    X86_AT(c, 0x9214eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 09214f  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x9214fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 092152  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0x92152u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 092155  push eax
    X86_AT(c, 0x92155u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092156  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x92156u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 092159  push eax
    X86_AT(c, 0x92159u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09215a  call 0x94e20
    X86_AT(c, 0x9215au);
    push32(c, 0x9215fu); x86_call_known(c, 0x94e20u, f_00094e20); X86_RET(c, 0x9215fu);
    X86_TICK(c, 25);
    // 09215f  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x9215fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 092162  add dword ptr [ebp - 0xc], eax
    X86_AT(c, 0x92162u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 092165  sub esi, eax
    X86_AT(c, 0x92165u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[0], 0, 4); }
    // 092167  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x92167u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 09216a  and esi, esi
    X86_AT(c, 0x9216au);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 09216c  je 0x92172
    X86_AT(c, 0x9216cu);
    if (x86_cc(c, 4)) { goto L_92172; }
    X86_TICK(c, 7);
    // 09216e  and eax, eax
    X86_AT(c, 0x9216eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 092170  jne 0x9214e
    X86_AT(c, 0x92170u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x9214eu); goto L_9214e; }
L_92172:
    X86_TICK(c, 6);
    // 092172  sub edi, dword ptr [ebp - 0xc]
    X86_AT(c, 0x92172u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 4); }
L_92175:
    X86_TICK(c, 7);
    // 092175  and edi, edi
    X86_AT(c, 0x92175u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 092177  jbe 0x921ce
    X86_AT(c, 0x92177u);
    if (x86_cc(c, 6)) { goto L_921ce; }
    X86_TICK(c, 12);
    // 092179  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x92179u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 09217d  jne 0x9219e
    X86_AT(c, 0x9217du);
    if (x86_cc(c, 5)) { goto L_9219e; }
    X86_TICK(c, 12);
    // 09217f  test byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0x9217fu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x10u, 1);
    // 092183  jne 0x921d6
    X86_AT(c, 0x92183u);
    if (x86_cc(c, 5)) { goto L_921d6; }
    X86_TICK(c, 20);
    // 092185  push 0x200
    X86_AT(c, 0x92185u);
    { uint32_t v = 0x200u; push32(c, v); }
    // 09218a  push dword ptr [ebx + 8]
    X86_AT(c, 0x9218au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 09218d  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x9218du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 092190  push eax
    X86_AT(c, 0x92190u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092191  call 0x94e20
    X86_AT(c, 0x92191u);
    push32(c, 0x92196u); x86_call_known(c, 0x94e20u, f_00094e20); X86_RET(c, 0x92196u);
    X86_TICK(c, 8);
    // 092196  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x92196u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
    // 092199  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x92199u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 09219c  mov dword ptr [ebx], eax
    X86_AT(c, 0x9219cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
L_9219e:
    X86_TICK(c, 12);
    // 09219e  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x9219eu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 0921a2  jle 0x921d6
    X86_AT(c, 0x921a2u);
    if (x86_cc(c, 14)) { goto L_921d6; }
L_921a4:
    X86_TICK(c, 13);
    // 0921a4  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x921a4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0921a7  mov edx, edi
    X86_AT(c, 0x921a7u);
    c.r[2] = c.r[7];
    // 0921a9  cmp edx, eax
    X86_AT(c, 0x921a9u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0921ab  jl 0x921ae
    X86_AT(c, 0x921abu);
    if (x86_cc(c, 12)) { goto L_921ae; }
    X86_TICK(c, 3);
    // 0921ad  xchg edx, eax
    X86_AT(c, 0x921adu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_921ae:
    X86_TICK(c, 2);
    // 0921ae  mov esi, edx
    X86_AT(c, 0x921aeu);
    c.r[6] = c.r[2];
L_921b0:
    X86_TICK(c, 62);
    // 0921b0  mov ecx, esi
    X86_AT(c, 0x921b0u);
    c.r[1] = c.r[6];
    // 0921b2  mov eax, dword ptr [ebx]
    X86_AT(c, 0x921b2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0921b4  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x921b4u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0921b7  add edx, dword ptr [ebp - 4]
    X86_AT(c, 0x921b7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0921ba  push esi
    X86_AT(c, 0x921bau);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0921bb  push edi
    X86_AT(c, 0x921bbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0921bc  mov esi, eax
    X86_AT(c, 0x921bcu);
    c.r[6] = c.r[0];
    // 0921be  mov edi, edx
    X86_AT(c, 0x921beu);
    c.r[7] = c.r[2];
    // 0921c0  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x921c0u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0921c2  pop edi
    X86_AT(c, 0x921c2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0921c3  pop esi
    X86_AT(c, 0x921c3u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0921c4  add dword ptr [ebp - 4], esi
    X86_AT(c, 0x921c4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 0921c7  sub dword ptr [ebx + 4], esi
    X86_AT(c, 0x921c7u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[6], 0, 4)); }
    // 0921ca  sub edi, esi
    X86_AT(c, 0x921cau);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0921cc  add dword ptr [ebx], esi
    X86_AT(c, 0x921ccu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
L_921ce:
    X86_TICK(c, 7);
    // 0921ce  and edi, edi
    X86_AT(c, 0x921ceu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0921d0  ja 0x91f09
    X86_AT(c, 0x921d0u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x91f09u); goto L_91f09; }
L_921d6:
    X86_TICK(c, 12);
    // 0921d6  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0x921d6u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 0921da  jne 0x921e0
    X86_AT(c, 0x921dau);
    if (x86_cc(c, 5)) { goto L_921e0; }
    X86_TICK(c, 7);
    // 0921dc  or byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0x921dcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x10u, 1)); }
L_921e0:
    X86_TICK(c, 13);
    // 0921e0  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x921e0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0921e3  mov dword ptr [0x8a5e0], eax
    X86_AT(c, 0x921e3u);
    wr32((c.sbase[3] + (uint32_t)(0x8A5E0u)), c.r[0]);
    // 0921e8  jmp 0x92318
    X86_AT(c, 0x921e8u);
    goto L_92318;
L_92318:
    X86_TICK(c, 12);
    // 092318  cmp word ptr [0x8a96e], 0
    X86_AT(c, 0x92318u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x8A96Eu))), 0x0u, 0, 2);
    // 092320  je 0x92328
    X86_AT(c, 0x92320u);
    if (x86_cc(c, 4)) { goto L_92328; }
    X86_TICK(c, 14);
    // 092322  or byte ptr [ebx + 0xc], 0x20
    X86_AT(c, 0x92322u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
    // 092326  jmp 0x92332
    X86_AT(c, 0x92326u);
    goto L_92332;
L_92328:
    X86_TICK(c, 6);
    // 092328  mov ax, word ptr [ebp - 0xe]
    X86_AT(c, 0x92328u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))));
    // 09232c  mov word ptr [0x8a96e], ax
    X86_AT(c, 0x9232cu);
    wr16((c.sbase[3] + (uint32_t)(0x8A96Eu)), (c.r[0] & 0xFFFFu));
L_92332:
    X86_TICK(c, 28);
    // 092332  pop edi
    X86_AT(c, 0x92332u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092333  pop esi
    X86_AT(c, 0x92333u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 092334  pop ebx
    X86_AT(c, 0x92334u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 092335  leave 
    X86_AT(c, 0x92335u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 092336  ret 0xc
    X86_AT(c, 0x92336u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x921b0u, "ran off the end of a function");
}
void f_000921ce(X86Cpu& c) {
    goto L_921ce;
L_91f09:
    X86_TICK(c, 12);
    // 091f09  test byte ptr [ebx + 0xc], 0x40
    X86_AT(c, 0x91f09u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x40u, 1);
    // 091f0d  je 0x92106
    X86_AT(c, 0x91f0du);
    if (x86_cc(c, 4)) { goto L_92106; }
    X86_TICK(c, 12);
    // 091f13  cmp dword ptr [ebx + 4], 1
    X86_AT(c, 0x91f13u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x1u, 0, 4);
    // 091f17  jne 0x91f5e
    X86_AT(c, 0x91f17u);
    if (x86_cc(c, 5)) { goto L_91f5e; }
    X86_TICK(c, 12);
    // 091f19  cmp word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0x91f19u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0xFFFEu, 0, 2);
    // 091f1e  jne 0x91f5e
    X86_AT(c, 0x91f1eu);
    if (x86_cc(c, 5)) { goto L_91f5e; }
    X86_TICK(c, 12);
    // 091f20  test byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x91f20u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x4u, 1);
    // 091f24  jne 0x921a4
    X86_AT(c, 0x91f24u);
    if (x86_cc(c, 5)) { goto L_921a4; }
    X86_TICK(c, 33);
    // 091f2a  mov al, byte ptr [0x8a5da]
    X86_AT(c, 0x91f2au);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8A5DAu))));
    // 091f2f  mov edx, dword ptr [ebx + 8]
    X86_AT(c, 0x91f2fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 091f32  mov byte ptr [edx], al
    X86_AT(c, 0x91f32u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 091f34  push 0x1ff
    X86_AT(c, 0x91f34u);
    { uint32_t v = 0x1FFu; push32(c, v); }
    // 091f39  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x91f39u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 091f3c  inc eax
    X86_AT(c, 0x91f3cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 091f3d  push eax
    X86_AT(c, 0x91f3du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 091f3e  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x91f3eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 091f41  push eax
    X86_AT(c, 0x91f41u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 091f42  call 0x94e20
    X86_AT(c, 0x91f42u);
    push32(c, 0x91f47u); x86_call_known(c, 0x94e20u, f_00094e20); X86_RET(c, 0x91f47u);
    X86_TICK(c, 11);
    // 091f47  inc eax
    X86_AT(c, 0x91f47u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 091f48  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x91f48u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
    // 091f4b  dec eax
    X86_AT(c, 0x91f4bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 091f4c  jne 0x91f96
    X86_AT(c, 0x91f4cu);
    if (x86_cc(c, 5)) { goto L_91f96; }
    X86_TICK(c, 15);
    // 091f4e  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x91f4eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 091f51  mov dword ptr [ebx], eax
    X86_AT(c, 0x91f51u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 091f53  mov word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0x91f53u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0x200u);
    // 091f59  jmp 0x921a4
    X86_AT(c, 0x91f59u);
    goto L_921a4;
L_91f5e:
    X86_TICK(c, 12);
    // 091f5e  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x91f5eu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 091f62  jne 0x91fdb
    X86_AT(c, 0x91f62u);
    if (x86_cc(c, 5)) { goto L_91fdb; }
    X86_TICK(c, 12);
    // 091f68  test byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0x91f68u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x10u, 1);
    // 091f6c  jne 0x921d6
    X86_AT(c, 0x91f6cu);
    if (x86_cc(c, 5)) { goto L_921d6; }
    X86_TICK(c, 12);
    // 091f72  test byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x91f72u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x4u, 1);
    // 091f76  jne 0x91f8c
    X86_AT(c, 0x91f76u);
    if (x86_cc(c, 5)) { goto L_91f8c; }
    X86_TICK(c, 20);
    // 091f78  push 0x200
    X86_AT(c, 0x91f78u);
    { uint32_t v = 0x200u; push32(c, v); }
    // 091f7d  push dword ptr [ebx + 8]
    X86_AT(c, 0x91f7du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 091f80  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x91f80u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 091f83  push eax
    X86_AT(c, 0x91f83u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 091f84  call 0x94e20
    X86_AT(c, 0x91f84u);
    push32(c, 0x91f89u); x86_call_known(c, 0x94e20u, f_00094e20); X86_RET(c, 0x91f89u);
    X86_TICK(c, 2);
    // 091f89  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x91f89u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
L_91f8c:
    X86_TICK(c, 12);
    // 091f8c  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x91f8cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 091f90  je 0x921d6
    X86_AT(c, 0x91f90u);
    if (x86_cc(c, 4)) { goto L_921d6; }
L_91f96:
    X86_TICK(c, 28);
    // 091f96  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x91f96u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 091f99  mov al, 0x1a
    X86_AT(c, 0x91f99u);
    s8(c, 0, 0x1Au);
    // 091f9b  mov ecx, dword ptr [ebx + 8]
    X86_AT(c, 0x91f9bu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 091f9e  push edi
    X86_AT(c, 0x91f9eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 091f9f  mov edi, ecx
    X86_AT(c, 0x91f9fu);
    c.r[7] = c.r[1];
    // 091fa1  mov ecx, edx
    X86_AT(c, 0x91fa1u);
    c.r[1] = c.r[2];
    // 091fa3  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x91fa3u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 091fa5  jne 0x91faa
    X86_AT(c, 0x91fa5u);
    if (x86_cc(c, 5)) { goto L_91faa; }
    X86_TICK(c, 4);
    // 091fa7  inc ecx
    X86_AT(c, 0x91fa7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 091fa8  sub edx, ecx
    X86_AT(c, 0x91fa8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_91faa:
    X86_TICK(c, 17);
    // 091faa  pop edi
    X86_AT(c, 0x91faau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 091fab  mov word ptr [ebp - 0x10], dx
    X86_AT(c, 0x91fabu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), (c.r[2] & 0xFFFFu));
    // 091faf  cmp edx, dword ptr [ebx + 4]
    X86_AT(c, 0x91fafu);
    (void)x86_sub(c, c.r[2], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 091fb2  je 0x91fd0
    X86_AT(c, 0x91fb2u);
    if (x86_cc(c, 4)) { goto L_91fd0; }
    X86_TICK(c, 32);
    // 091fb4  or byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x91fb4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x4u, 1)); }
    // 091fb8  push 1
    X86_AT(c, 0x91fb8u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 091fba  mov dword ptr [ebp - 0x14], edx
    X86_AT(c, 0x91fbau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[2]);
    // 091fbd  sub edx, dword ptr [ebx + 4]
    X86_AT(c, 0x91fbdu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4); }
    // 091fc0  push edx
    X86_AT(c, 0x91fc0u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 091fc1  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x91fc1u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 091fc4  push eax
    X86_AT(c, 0x91fc4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 091fc5  call 0x94ef8
    X86_AT(c, 0x91fc5u);
    push32(c, 0x91fcau); x86_call_known(c, 0x94ef8u, f_00094ef8); X86_RET(c, 0x91fcau);
    X86_TICK(c, 6);
    // 091fca  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0x91fcau);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 091fcd  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x91fcdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
L_91fd0:
    X86_TICK(c, 8);
    // 091fd0  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x91fd0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 091fd3  mov dword ptr [ebx], eax
    X86_AT(c, 0x91fd3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 091fd5  mov word ptr [ebx + 0x10], 0xffff
    X86_AT(c, 0x91fd5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFFu);
L_91fdb:
    X86_TICK(c, 12);
    // 091fdb  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x91fdbu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 091fdf  jle 0x921ce
    X86_AT(c, 0x91fdfu);
    if (x86_cc(c, 14)) { goto L_921ce; }
    X86_TICK(c, 11);
    // 091fe5  mov ax, word ptr [ebx + 0x10]
    X86_AT(c, 0x91fe5u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))));
    // 091fe9  cmp ax, 0xffff
    X86_AT(c, 0x91fe9u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0xFFFFu, 0, 2);
    // 091fed  je 0x91ffd
    X86_AT(c, 0x91fedu);
    if (x86_cc(c, 4)) { goto L_91ffd; }
    X86_TICK(c, 20);
    // 091fef  movsx eax, ax
    X86_AT(c, 0x91fefu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 091ff2  add eax, dword ptr [ebx + 8]
    X86_AT(c, 0x91ff2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 091ff5  cmp eax, dword ptr [ebx]
    X86_AT(c, 0x91ff5u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4);
    // 091ff7  jge 0x92094
    X86_AT(c, 0x91ff7u);
    if (x86_cc(c, 13)) { goto L_92094; }
L_91ffd:
    X86_TICK(c, 30);
    // 091ffd  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x91ffdu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 092000  mov al, byte ptr [0x8a5da]
    X86_AT(c, 0x92000u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8A5DAu))));
    // 092005  mov ecx, dword ptr [ebx]
    X86_AT(c, 0x92005u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 092007  push edi
    X86_AT(c, 0x92007u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092008  mov edi, ecx
    X86_AT(c, 0x92008u);
    c.r[7] = c.r[1];
    // 09200a  mov ecx, edx
    X86_AT(c, 0x9200au);
    c.r[1] = c.r[2];
    // 09200c  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x9200cu);
    x86_string(c, 4, 1, 242, 4, 3);
    // 09200e  jne 0x92013
    X86_AT(c, 0x9200eu);
    if (x86_cc(c, 5)) { goto L_92013; }
    X86_TICK(c, 4);
    // 092010  inc ecx
    X86_AT(c, 0x92010u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 092011  sub edx, ecx
    X86_AT(c, 0x92011u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_92013:
    X86_TICK(c, 13);
    // 092013  pop edi
    X86_AT(c, 0x92013u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092014  mov word ptr [ebx + 0x10], dx
    X86_AT(c, 0x92014u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), (c.r[2] & 0xFFFFu));
    // 092018  jmp 0x9204d
    X86_AT(c, 0x92018u);
    goto L_9204d;
L_9201a:
    X86_TICK(c, 59);
    // 09201a  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x9201au);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 09201e  add eax, dword ptr [ebx]
    X86_AT(c, 0x9201eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4); }
    // 092020  inc eax
    X86_AT(c, 0x92020u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 092021  mov dx, word ptr [ebx + 0x10]
    X86_AT(c, 0x92021u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))));
    // 092025  inc edx
    X86_AT(c, 0x92025u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 092026  movsx edx, dx
    X86_AT(c, 0x92026u);
    c.r[2] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 092029  mov ecx, dword ptr [ebx + 4]
    X86_AT(c, 0x92029u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 09202c  sub ecx, edx
    X86_AT(c, 0x9202cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 09202e  mov edx, ecx
    X86_AT(c, 0x9202eu);
    c.r[2] = c.r[1];
    // 092030  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0x92030u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 092033  mov al, byte ptr [0x8a5da]
    X86_AT(c, 0x92033u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8A5DAu))));
    // 092038  mov ecx, dword ptr [ebp - 0x14]
    X86_AT(c, 0x92038u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 09203b  push edi
    X86_AT(c, 0x9203bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09203c  mov edi, ecx
    X86_AT(c, 0x9203cu);
    c.r[7] = c.r[1];
    // 09203e  mov ecx, edx
    X86_AT(c, 0x9203eu);
    c.r[1] = c.r[2];
    // 092040  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x92040u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 092042  jne 0x92047
    X86_AT(c, 0x92042u);
    if (x86_cc(c, 5)) { goto L_92047; }
    X86_TICK(c, 4);
    // 092044  inc ecx
    X86_AT(c, 0x92044u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 092045  sub edx, ecx
    X86_AT(c, 0x92045u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_92047:
    X86_TICK(c, 13);
    // 092047  pop edi
    X86_AT(c, 0x92047u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092048  inc edx
    X86_AT(c, 0x92048u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 092049  add word ptr [ebx + 0x10], dx
    X86_AT(c, 0x92049u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
L_9204d:
    X86_TICK(c, 19);
    // 09204d  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x9204du);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 092051  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x92051u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 092054  dec edx
    X86_AT(c, 0x92054u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 092055  cmp edx, eax
    X86_AT(c, 0x92055u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 092057  jle 0x92066
    X86_AT(c, 0x92057u);
    if (x86_cc(c, 14)) { goto L_92066; }
    X86_TICK(c, 23);
    // 092059  add eax, dword ptr [ebx]
    X86_AT(c, 0x92059u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4); }
    // 09205b  inc eax
    X86_AT(c, 0x9205bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 09205c  mov al, byte ptr [eax]
    X86_AT(c, 0x9205cu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 09205e  cmp al, byte ptr [0x8a5db]
    X86_AT(c, 0x9205eu);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(0x8A5DBu))), 0, 1);
    // 092064  jne 0x9201a
    X86_AT(c, 0x92064u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x9201au); goto L_9201a; }
L_92066:
    X86_TICK(c, 17);
    // 092066  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x92066u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 09206a  cmp eax, dword ptr [ebx + 4]
    X86_AT(c, 0x9206au);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 09206d  jne 0x92077
    X86_AT(c, 0x9206du);
    if (x86_cc(c, 5)) { goto L_92077; }
    X86_TICK(c, 9);
    // 09206f  mov word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0x9206fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0x200u);
    // 092075  jmp 0x92094
    X86_AT(c, 0x92075u);
    goto L_92094;
L_92077:
    X86_TICK(c, 19);
    // 092077  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x92077u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 09207b  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x9207bu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 09207e  dec edx
    X86_AT(c, 0x9207eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 09207f  cmp edx, eax
    X86_AT(c, 0x9207fu);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 092081  jne 0x9208b
    X86_AT(c, 0x92081u);
    if (x86_cc(c, 5)) { goto L_9208b; }
    X86_TICK(c, 9);
    // 092083  mov word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0x92083u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFEu);
    // 092089  jmp 0x92094
    X86_AT(c, 0x92089u);
    goto L_92094;
L_9208b:
    X86_TICK(c, 17);
    // 09208b  mov eax, dword ptr [ebx]
    X86_AT(c, 0x9208bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 09208d  sub eax, dword ptr [ebx + 8]
    X86_AT(c, 0x9208du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 092090  add word ptr [ebx + 0x10], ax
    X86_AT(c, 0x92090u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_92094:
    X86_TICK(c, 12);
    // 092094  cmp word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0x92094u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0x200u, 0, 2);
    // 09209a  je 0x921a4
    X86_AT(c, 0x9209au);
    if (x86_cc(c, 4)) { goto L_921a4; }
    X86_TICK(c, 12);
    // 0920a0  cmp word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0x920a0u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0xFFFEu, 0, 2);
    // 0920a5  jne 0x920b5
    X86_AT(c, 0x920a5u);
    if (x86_cc(c, 5)) { goto L_920b5; }
    X86_TICK(c, 11);
    // 0920a7  cmp edi, dword ptr [ebx + 4]
    X86_AT(c, 0x920a7u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 0920aa  jl 0x920ff
    X86_AT(c, 0x920aau);
    if (x86_cc(c, 12)) { goto L_920ff; }
    X86_TICK(c, 13);
    // 0920ac  mov esi, dword ptr [ebx + 4]
    X86_AT(c, 0x920acu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0920af  dec esi
    X86_AT(c, 0x920afu);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0920b0  jmp 0x921b0
    X86_AT(c, 0x920b0u);
    goto L_921b0;
L_920b5:
    X86_TICK(c, 25);
    // 0920b5  mov eax, dword ptr [ebx]
    X86_AT(c, 0x920b5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0920b7  sub eax, dword ptr [ebx + 8]
    X86_AT(c, 0x920b7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 0920ba  movsx esi, word ptr [ebx + 0x10]
    X86_AT(c, 0x920bau);
    c.r[6] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 0920be  sub esi, eax
    X86_AT(c, 0x920beu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0920c0  cmp edi, esi
    X86_AT(c, 0x920c0u);
    (void)x86_sub(c, c.r[7], c.r[6], 0, 4);
    // 0920c2  jbe 0x920ff
    X86_AT(c, 0x920c2u);
    if (x86_cc(c, 6)) { goto L_920ff; }
    X86_TICK(c, 87);
    // 0920c4  mov ecx, esi
    X86_AT(c, 0x920c4u);
    c.r[1] = c.r[6];
    // 0920c6  mov eax, dword ptr [ebx]
    X86_AT(c, 0x920c6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0920c8  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x920c8u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0920cb  mov dword ptr [ebp - 0x14], edi
    X86_AT(c, 0x920cbu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[7]);
    // 0920ce  mov edi, dword ptr [ebp - 4]
    X86_AT(c, 0x920ceu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0920d1  lea edx, [edx + edi*1]
    X86_AT(c, 0x920d1u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[7]);
    // 0920d4  push esi
    X86_AT(c, 0x920d4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0920d5  push edi
    X86_AT(c, 0x920d5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0920d6  mov esi, eax
    X86_AT(c, 0x920d6u);
    c.r[6] = c.r[0];
    // 0920d8  mov edi, edx
    X86_AT(c, 0x920d8u);
    c.r[7] = c.r[2];
    // 0920da  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x920dau);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0920dc  pop edi
    X86_AT(c, 0x920dcu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0920dd  pop esi
    X86_AT(c, 0x920ddu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0920de  add edi, esi
    X86_AT(c, 0x920deu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[6], 0, 4); }
    // 0920e0  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x920e0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0920e3  mov byte ptr [eax + edi*1], 0xa
    X86_AT(c, 0x920e3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7])), 0xAu);
    // 0920e7  lea eax, [esi + 1]
    X86_AT(c, 0x920e7u);
    c.r[0] = (uint32_t)(c.r[6] + 0x1u);
    // 0920ea  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x920eau);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0920ed  mov edi, dword ptr [ebp - 0x14]
    X86_AT(c, 0x920edu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0920f0  sub edi, eax
    X86_AT(c, 0x920f0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0920f2  lea eax, [esi + 2]
    X86_AT(c, 0x920f2u);
    c.r[0] = (uint32_t)(c.r[6] + 0x2u);
    // 0920f5  sub dword ptr [ebx + 4], eax
    X86_AT(c, 0x920f5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0920f8  add dword ptr [ebx], eax
    X86_AT(c, 0x920f8u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0920fa  jmp 0x921ce
    X86_AT(c, 0x920fau);
    goto L_921ce;
L_920ff:
    X86_TICK(c, 9);
    // 0920ff  mov esi, edi
    X86_AT(c, 0x920ffu);
    c.r[6] = c.r[7];
    // 092101  jmp 0x921b0
    X86_AT(c, 0x92101u);
    goto L_921b0;
L_92106:
    X86_TICK(c, 13);
    // 092106  mov word ptr [ebx + 0x10], 0xffff
    X86_AT(c, 0x92106u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFFu);
    // 09210c  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x9210cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 09210f  cmp edi, eax
    X86_AT(c, 0x9210fu);
    (void)x86_sub(c, c.r[7], c.r[0], 0, 4);
    // 092111  jl 0x92137
    X86_AT(c, 0x92111u);
    if (x86_cc(c, 12)) { goto L_92137; }
    X86_TICK(c, 7);
    // 092113  and eax, eax
    X86_AT(c, 0x92113u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 092115  jle 0x92137
    X86_AT(c, 0x92115u);
    if (x86_cc(c, 14)) { goto L_92137; }
    X86_TICK(c, 53);
    // 092117  xchg ecx, eax
    X86_AT(c, 0x92117u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
    // 092118  mov eax, dword ptr [ebx]
    X86_AT(c, 0x92118u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 09211a  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x9211au);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 09211d  push esi
    X86_AT(c, 0x9211du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 09211e  push edi
    X86_AT(c, 0x9211eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09211f  mov esi, eax
    X86_AT(c, 0x9211fu);
    c.r[6] = c.r[0];
    // 092121  mov edi, edx
    X86_AT(c, 0x92121u);
    c.r[7] = c.r[2];
    // 092123  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x92123u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 092125  pop edi
    X86_AT(c, 0x92125u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092126  pop esi
    X86_AT(c, 0x92126u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 092127  sub edi, dword ptr [ebx + 4]
    X86_AT(c, 0x92127u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4); }
    // 09212a  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x9212au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 09212d  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x9212du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 092130  mov dword ptr [ebx + 4], 0
    X86_AT(c, 0x92130u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0x0u);
L_92137:
    X86_TICK(c, 7);
    // 092137  cmp edi, 0x200
    X86_AT(c, 0x92137u);
    (void)x86_sub(c, c.r[7], 0x200u, 0, 4);
    // 09213d  jb 0x92175
    X86_AT(c, 0x9213du);
    if (x86_cc(c, 2)) { goto L_92175; }
    X86_TICK(c, 10);
    // 09213f  mov esi, edi
    X86_AT(c, 0x9213fu);
    c.r[6] = c.r[7];
    // 092141  shr esi, 9
    X86_AT(c, 0x92141u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 5, v, 0x9u, 4, w); if (w) c.r[6] = r; }
    // 092144  shl esi, 9
    X86_AT(c, 0x92144u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[6] = r; }
    // 092147  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0x92147u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
L_9214e:
    X86_TICK(c, 27);
    // 09214e  push esi
    X86_AT(c, 0x9214eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 09214f  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x9214fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 092152  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0x92152u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 092155  push eax
    X86_AT(c, 0x92155u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092156  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x92156u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 092159  push eax
    X86_AT(c, 0x92159u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09215a  call 0x94e20
    X86_AT(c, 0x9215au);
    push32(c, 0x9215fu); x86_call_known(c, 0x94e20u, f_00094e20); X86_RET(c, 0x9215fu);
    X86_TICK(c, 25);
    // 09215f  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x9215fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 092162  add dword ptr [ebp - 0xc], eax
    X86_AT(c, 0x92162u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 092165  sub esi, eax
    X86_AT(c, 0x92165u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[0], 0, 4); }
    // 092167  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x92167u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 09216a  and esi, esi
    X86_AT(c, 0x9216au);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 09216c  je 0x92172
    X86_AT(c, 0x9216cu);
    if (x86_cc(c, 4)) { goto L_92172; }
    X86_TICK(c, 7);
    // 09216e  and eax, eax
    X86_AT(c, 0x9216eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 092170  jne 0x9214e
    X86_AT(c, 0x92170u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x9214eu); goto L_9214e; }
L_92172:
    X86_TICK(c, 6);
    // 092172  sub edi, dword ptr [ebp - 0xc]
    X86_AT(c, 0x92172u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 4); }
L_92175:
    X86_TICK(c, 7);
    // 092175  and edi, edi
    X86_AT(c, 0x92175u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 092177  jbe 0x921ce
    X86_AT(c, 0x92177u);
    if (x86_cc(c, 6)) { goto L_921ce; }
    X86_TICK(c, 12);
    // 092179  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x92179u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 09217d  jne 0x9219e
    X86_AT(c, 0x9217du);
    if (x86_cc(c, 5)) { goto L_9219e; }
    X86_TICK(c, 12);
    // 09217f  test byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0x9217fu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x10u, 1);
    // 092183  jne 0x921d6
    X86_AT(c, 0x92183u);
    if (x86_cc(c, 5)) { goto L_921d6; }
    X86_TICK(c, 20);
    // 092185  push 0x200
    X86_AT(c, 0x92185u);
    { uint32_t v = 0x200u; push32(c, v); }
    // 09218a  push dword ptr [ebx + 8]
    X86_AT(c, 0x9218au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 09218d  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x9218du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 092190  push eax
    X86_AT(c, 0x92190u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092191  call 0x94e20
    X86_AT(c, 0x92191u);
    push32(c, 0x92196u); x86_call_known(c, 0x94e20u, f_00094e20); X86_RET(c, 0x92196u);
    X86_TICK(c, 8);
    // 092196  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x92196u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
    // 092199  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x92199u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 09219c  mov dword ptr [ebx], eax
    X86_AT(c, 0x9219cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
L_9219e:
    X86_TICK(c, 12);
    // 09219e  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x9219eu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 0921a2  jle 0x921d6
    X86_AT(c, 0x921a2u);
    if (x86_cc(c, 14)) { goto L_921d6; }
L_921a4:
    X86_TICK(c, 13);
    // 0921a4  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x921a4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0921a7  mov edx, edi
    X86_AT(c, 0x921a7u);
    c.r[2] = c.r[7];
    // 0921a9  cmp edx, eax
    X86_AT(c, 0x921a9u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0921ab  jl 0x921ae
    X86_AT(c, 0x921abu);
    if (x86_cc(c, 12)) { goto L_921ae; }
    X86_TICK(c, 3);
    // 0921ad  xchg edx, eax
    X86_AT(c, 0x921adu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_921ae:
    X86_TICK(c, 2);
    // 0921ae  mov esi, edx
    X86_AT(c, 0x921aeu);
    c.r[6] = c.r[2];
L_921b0:
    X86_TICK(c, 62);
    // 0921b0  mov ecx, esi
    X86_AT(c, 0x921b0u);
    c.r[1] = c.r[6];
    // 0921b2  mov eax, dword ptr [ebx]
    X86_AT(c, 0x921b2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0921b4  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x921b4u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0921b7  add edx, dword ptr [ebp - 4]
    X86_AT(c, 0x921b7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0921ba  push esi
    X86_AT(c, 0x921bau);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0921bb  push edi
    X86_AT(c, 0x921bbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0921bc  mov esi, eax
    X86_AT(c, 0x921bcu);
    c.r[6] = c.r[0];
    // 0921be  mov edi, edx
    X86_AT(c, 0x921beu);
    c.r[7] = c.r[2];
    // 0921c0  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x921c0u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0921c2  pop edi
    X86_AT(c, 0x921c2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0921c3  pop esi
    X86_AT(c, 0x921c3u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0921c4  add dword ptr [ebp - 4], esi
    X86_AT(c, 0x921c4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 0921c7  sub dword ptr [ebx + 4], esi
    X86_AT(c, 0x921c7u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[6], 0, 4)); }
    // 0921ca  sub edi, esi
    X86_AT(c, 0x921cau);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0921cc  add dword ptr [ebx], esi
    X86_AT(c, 0x921ccu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
L_921ce:
    X86_TICK(c, 7);
    // 0921ce  and edi, edi
    X86_AT(c, 0x921ceu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0921d0  ja 0x91f09
    X86_AT(c, 0x921d0u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x91f09u); goto L_91f09; }
L_921d6:
    X86_TICK(c, 12);
    // 0921d6  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0x921d6u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 0921da  jne 0x921e0
    X86_AT(c, 0x921dau);
    if (x86_cc(c, 5)) { goto L_921e0; }
    X86_TICK(c, 7);
    // 0921dc  or byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0x921dcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x10u, 1)); }
L_921e0:
    X86_TICK(c, 13);
    // 0921e0  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x921e0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0921e3  mov dword ptr [0x8a5e0], eax
    X86_AT(c, 0x921e3u);
    wr32((c.sbase[3] + (uint32_t)(0x8A5E0u)), c.r[0]);
    // 0921e8  jmp 0x92318
    X86_AT(c, 0x921e8u);
    goto L_92318;
L_92318:
    X86_TICK(c, 12);
    // 092318  cmp word ptr [0x8a96e], 0
    X86_AT(c, 0x92318u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x8A96Eu))), 0x0u, 0, 2);
    // 092320  je 0x92328
    X86_AT(c, 0x92320u);
    if (x86_cc(c, 4)) { goto L_92328; }
    X86_TICK(c, 14);
    // 092322  or byte ptr [ebx + 0xc], 0x20
    X86_AT(c, 0x92322u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
    // 092326  jmp 0x92332
    X86_AT(c, 0x92326u);
    goto L_92332;
L_92328:
    X86_TICK(c, 6);
    // 092328  mov ax, word ptr [ebp - 0xe]
    X86_AT(c, 0x92328u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))));
    // 09232c  mov word ptr [0x8a96e], ax
    X86_AT(c, 0x9232cu);
    wr16((c.sbase[3] + (uint32_t)(0x8A96Eu)), (c.r[0] & 0xFFFFu));
L_92332:
    X86_TICK(c, 28);
    // 092332  pop edi
    X86_AT(c, 0x92332u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092333  pop esi
    X86_AT(c, 0x92333u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 092334  pop ebx
    X86_AT(c, 0x92334u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 092335  leave 
    X86_AT(c, 0x92335u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 092336  ret 0xc
    X86_AT(c, 0x92336u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x921ceu, "ran off the end of a function");
}
void f_00092340(X86Cpu& c) {
    X86_TICK(c, 30);
    // 092340  enter 4, 0
    X86_AT(c, 0x92340u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 092344  push ebx
    X86_AT(c, 0x92344u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 092345  push esi
    X86_AT(c, 0x92345u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 092346  push edi
    X86_AT(c, 0x92346u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092347  mov edi, dword ptr [ebp + 0x14]
    X86_AT(c, 0x92347u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 09234a  mov ebx, edi
    X86_AT(c, 0x9234au);
    c.r[3] = c.r[7];
    // 09234c  test byte ptr [ebx + 0xc], 2
    X86_AT(c, 0x9234cu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x2u, 1);
    // 092350  jne 0x92362
    X86_AT(c, 0x92350u);
    if (x86_cc(c, 5)) { goto L_92362; }
    X86_TICK(c, 18);
    // 092352  mov ax, 5
    X86_AT(c, 0x92352u);
    s16(c, 0, 0x5u);
    // 092356  mov word ptr [0x8a96e], ax
    X86_AT(c, 0x92356u);
    wr16((c.sbase[3] + (uint32_t)(0x8A96Eu)), (c.r[0] & 0xFFFFu));
    // 09235c  or byte ptr [ebx + 0xc], 0x20
    X86_AT(c, 0x9235cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
    // 092360  jmp 0x923a2
    X86_AT(c, 0x92360u);
    goto L_923a2;
L_92362:
    X86_TICK(c, 12);
    // 092362  test byte ptr [ebx + 0xc], 0x80
    X86_AT(c, 0x92362u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x80u, 1);
    // 092366  je 0x9236e
    X86_AT(c, 0x92366u);
    if (x86_cc(c, 4)) { goto L_9236e; }
    X86_TICK(c, 9);
    // 092368  push edi
    X86_AT(c, 0x92368u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092369  call 0x93920
    X86_AT(c, 0x92369u);
    push32(c, 0x9236eu); x86_call_known(c, 0x93920u, f_00093920); X86_RET(c, 0x9236eu);
L_9236e:
    X86_TICK(c, 19);
    // 09236e  and byte ptr [ebx + 0xd], 0xf7
    X86_AT(c, 0x9236eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xF7u, 1)); }
    // 092372  cmp dword ptr [ebx + 4], 0xffffffff
    X86_AT(c, 0x92372u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0xFFFFFFFFu, 0, 4);
    // 092376  jne 0x9237f
    X86_AT(c, 0x92376u);
    if (x86_cc(c, 5)) { goto L_9237f; }
    X86_TICK(c, 2);
    // 092378  mov dword ptr [ebx + 4], 0
    X86_AT(c, 0x92378u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0x0u);
L_9237f:
    X86_TICK(c, 36);
    // 09237f  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x9237fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 092382  imul eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0x92382u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 4);
    // 092386  xchg esi, eax
    X86_AT(c, 0x92386u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 092387  and esi, esi
    X86_AT(c, 0x92387u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 092389  jl 0x92393
    X86_AT(c, 0x92389u);
    if (x86_cc(c, 12)) { goto L_92393; }
    X86_TICK(c, 7);
    // 09238b  cmp esi, 0x7fffffff
    X86_AT(c, 0x9238bu);
    (void)x86_sub(c, c.r[6], 0x7FFFFFFFu, 0, 4);
    // 092391  jle 0x9239e
    X86_AT(c, 0x92391u);
    if (x86_cc(c, 14)) { goto L_9239e; }
L_92393:
    X86_TICK(c, 9);
    // 092393  mov word ptr [0x8a96e], 1
    X86_AT(c, 0x92393u);
    wr16((c.sbase[3] + (uint32_t)(0x8A96Eu)), 0x1u);
    // 09239c  jmp 0x923a2
    X86_AT(c, 0x9239cu);
    goto L_923a2;
L_9239e:
    X86_TICK(c, 7);
    // 09239e  and esi, esi
    X86_AT(c, 0x9239eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0923a0  jne 0x923a6
    X86_AT(c, 0x923a0u);
    if (x86_cc(c, 5)) { goto L_923a6; }
L_923a2:
    X86_TICK(c, 9);
    // 0923a2  sub eax, eax
    X86_AT(c, 0x923a2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0923a4  jmp 0x923bc
    X86_AT(c, 0x923a4u);
    goto L_923bc;
L_923a6:
    X86_TICK(c, 16);
    // 0923a6  push esi
    X86_AT(c, 0x923a6u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0923a7  push dword ptr [ebp + 8]
    X86_AT(c, 0x923a7u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0923aa  push edi
    X86_AT(c, 0x923aau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0923ab  call 0x91ed8
    X86_AT(c, 0x923abu);
    push32(c, 0x923b0u); x86_call_known(c, 0x91ed8u, f_00091ed8); X86_RET(c, 0x923b0u);
    X86_TICK(c, 48);
    // 0923b0  mov eax, dword ptr [0x8a5e0]
    X86_AT(c, 0x923b0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A5E0u)));
    // 0923b5  cdq 
    X86_AT(c, 0x923b5u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0923b6  idiv dword ptr [ebp + 0xc]
    X86_AT(c, 0x923b6u);
    x86_idiv(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 4, 0x923b6u);
    // 0923b9  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x923b9u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_923bc:
    X86_TICK(c, 28);
    // 0923bc  pop edi
    X86_AT(c, 0x923bcu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0923bd  pop esi
    X86_AT(c, 0x923bdu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0923be  pop ebx
    X86_AT(c, 0x923beu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0923bf  leave 
    X86_AT(c, 0x923bfu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0923c0  ret 
    X86_AT(c, 0x923c0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x92340u, "ran off the end of a function");
}
}
