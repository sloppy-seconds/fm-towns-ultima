#include "p_game_funcs.h"
namespace p_game {
void f_000fc6e8(X86Cpu& c) {
    X86_TICK(c, 55);
    // 0fc6e8  push ebp
    X86_AT(c, 0xfc6e8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0fc6e9  mov ebp, esp
    X86_AT(c, 0xfc6e9u);
    c.r[5] = c.r[4];
    // 0fc6eb  push eax
    X86_AT(c, 0xfc6ebu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0fc6ec  push ebx
    X86_AT(c, 0xfc6ecu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0fc6ed  push esi
    X86_AT(c, 0xfc6edu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0fc6ee  push edi
    X86_AT(c, 0xfc6eeu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0fc6ef  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xfc6efu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0fc6f2  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xfc6f2u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0fc6f5  mov eax, edi
    X86_AT(c, 0xfc6f5u);
    c.r[0] = c.r[7];
    // 0fc6f7  add eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xfc6f7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 4); }
    // 0fc6fa  shl eax, 8
    X86_AT(c, 0xfc6fau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0fc6fd  mov edx, esi
    X86_AT(c, 0xfc6fdu);
    c.r[2] = c.r[6];
    // 0fc6ff  add edx, dword ptr [ebp + 0x14]
    X86_AT(c, 0xfc6ffu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0, 4); }
    // 0fc702  shl edx, 4
    X86_AT(c, 0xfc702u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0fc705  add edx, eax
    X86_AT(c, 0xfc705u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0fc707  mov ebx, dword ptr [edx + 0xd4a74]
    X86_AT(c, 0xfc707u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xD4A74u)));
    // 0fc70d  cmp ebx, 2
    X86_AT(c, 0xfc70du);
    (void)x86_sub(c, c.r[3], 0x2u, 0, 4);
    // 0fc710  je 0xfc76d
    X86_AT(c, 0xfc710u);
    if (x86_cc(c, 4)) { goto L_fc76d; }
    X86_TICK(c, 7);
    // 0fc712  cmp ebx, 3
    X86_AT(c, 0xfc712u);
    (void)x86_sub(c, c.r[3], 0x3u, 0, 4);
    // 0fc715  je 0xfc76d
    X86_AT(c, 0xfc715u);
    if (x86_cc(c, 4)) { goto L_fc76d; }
    X86_TICK(c, 7);
    // 0fc717  cmp ebx, 8
    X86_AT(c, 0xfc717u);
    (void)x86_sub(c, c.r[3], 0x8u, 0, 4);
    // 0fc71a  je 0xfc76d
    X86_AT(c, 0xfc71au);
    if (x86_cc(c, 4)) { goto L_fc76d; }
    X86_TICK(c, 7);
    // 0fc71c  cmp ebx, 1
    X86_AT(c, 0xfc71cu);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 0fc71f  je 0xfc76d
    X86_AT(c, 0xfc71fu);
    if (x86_cc(c, 4)) { goto L_fc76d; }
    X86_TICK(c, 7);
    // 0fc721  cmp ebx, 0xf
    X86_AT(c, 0xfc721u);
    (void)x86_sub(c, c.r[3], 0xFu, 0, 4);
    // 0fc724  je 0xfc76d
    X86_AT(c, 0xfc724u);
    if (x86_cc(c, 4)) { goto L_fc76d; }
    X86_TICK(c, 7);
    // 0fc726  cmp ebx, 0xe
    X86_AT(c, 0xfc726u);
    (void)x86_sub(c, c.r[3], 0xEu, 0, 4);
    // 0fc729  je 0xfc76d
    X86_AT(c, 0xfc729u);
    if (x86_cc(c, 4)) { goto L_fc76d; }
    X86_TICK(c, 7);
    // 0fc72b  cmp ebx, 0xa
    X86_AT(c, 0xfc72bu);
    (void)x86_sub(c, c.r[3], 0xAu, 0, 4);
    // 0fc72e  je 0xfc76d
    X86_AT(c, 0xfc72eu);
    if (x86_cc(c, 4)) { goto L_fc76d; }
    X86_TICK(c, 12);
    // 0fc730  cmp dword ptr [edx + 0xd4a78], 0xffffffff
    X86_AT(c, 0xfc730u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xD4A78u))), 0xFFFFFFFFu, 0, 4);
    // 0fc737  jne 0xfc76d
    X86_AT(c, 0xfc737u);
    if (x86_cc(c, 5)) { goto L_fc76d; }
    X86_TICK(c, 45);
    // 0fc739  mov eax, edi
    X86_AT(c, 0xfc739u);
    c.r[0] = c.r[7];
    // 0fc73b  shl eax, 8
    X86_AT(c, 0xfc73bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0fc73e  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xfc73eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0fc741  mov eax, esi
    X86_AT(c, 0xfc741u);
    c.r[0] = c.r[6];
    // 0fc743  shl eax, 4
    X86_AT(c, 0xfc743u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0fc746  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0xfc746u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0fc749  mov ecx, dword ptr [eax + 0xd4a78]
    X86_AT(c, 0xfc749u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xD4A78u)));
    // 0fc74f  mov dword ptr [edx + 0xd4a78], ecx
    X86_AT(c, 0xfc74fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xD4A78u)), c.r[1]);
    // 0fc755  mov ecx, 0xffffffff
    X86_AT(c, 0xfc755u);
    c.r[1] = 0xFFFFFFFFu;
    // 0fc75a  mov dword ptr [eax + 0xd4a78], ecx
    X86_AT(c, 0xfc75au);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xD4A78u)), c.r[1]);
    // 0fc760  add dword ptr [edx + 0xd4a7c], 0x3e8
    X86_AT(c, 0xfc760u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xD4A7Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x3E8u, 0, 4)); }
    // 0fc76a  xchg ecx, eax
    X86_AT(c, 0xfc76au);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
    // 0fc76b  jmp 0xfc76f
    X86_AT(c, 0xfc76bu);
    goto L_fc76f;
L_fc76d:
    X86_TICK(c, 2);
    // 0fc76d  sub eax, eax
    X86_AT(c, 0xfc76du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_fc76f:
    X86_TICK(c, 28);
    // 0fc76f  pop edi
    X86_AT(c, 0xfc76fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0fc770  pop esi
    X86_AT(c, 0xfc770u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0fc771  pop ebx
    X86_AT(c, 0xfc771u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0fc772  leave 
    X86_AT(c, 0xfc772u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fc773  ret 
    X86_AT(c, 0xfc773u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfc6e8u, "ran off the end of a function");
}
void f_000fc774(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0fc774  push ebp
    X86_AT(c, 0xfc774u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0fc775  mov ebp, esp
    X86_AT(c, 0xfc775u);
    c.r[5] = c.r[4];
    // 0fc777  sub esp, 0x10
    X86_AT(c, 0xfc777u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x10u, 0, 4); }
    // 0fc77a  push ebx
    X86_AT(c, 0xfc77au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0fc77b  push esi
    X86_AT(c, 0xfc77bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0fc77c  push edi
    X86_AT(c, 0xfc77cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0fc77d  sub eax, eax
    X86_AT(c, 0xfc77du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0fc77f  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xfc77fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0fc782  mov edx, dword ptr [0xd1424]
    X86_AT(c, 0xfc782u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xD1424u)));
    // 0fc788  cmp eax, edx
    X86_AT(c, 0xfc788u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0fc78a  jge 0xfc797
    X86_AT(c, 0xfc78au);
    if (x86_cc(c, 13)) { goto L_fc797; }
    X86_TICK(c, 13);
    // 0fc78c  dec dword ptr [0xd1424]
    X86_AT(c, 0xfc78cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xD1424u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0fc792  jmp 0xfc8d7
    X86_AT(c, 0xfc792u);
    goto L_fc8d7;
L_fc797:
    X86_TICK(c, 2);
    // 0fc797  mov edi, 1
    X86_AT(c, 0xfc797u);
    c.r[7] = 0x1u;
L_fc79c:
    X86_TICK(c, 7);
    // 0fc79c  cmp edi, 0x10
    X86_AT(c, 0xfc79cu);
    (void)x86_sub(c, c.r[7], 0x10u, 0, 4);
    // 0fc79f  jge 0xfc89a
    X86_AT(c, 0xfc79fu);
    if (x86_cc(c, 13)) { goto L_fc89a; }
    X86_TICK(c, 2);
    // 0fc7a5  mov esi, 1
    X86_AT(c, 0xfc7a5u);
    c.r[6] = 0x1u;
L_fc7aa:
    X86_TICK(c, 7);
    // 0fc7aa  cmp esi, 0x10
    X86_AT(c, 0xfc7aau);
    (void)x86_sub(c, c.r[6], 0x10u, 0, 4);
    // 0fc7ad  jge 0xfc894
    X86_AT(c, 0xfc7adu);
    if (x86_cc(c, 13)) { goto L_fc894; }
    X86_TICK(c, 24);
    // 0fc7b3  mov eax, edi
    X86_AT(c, 0xfc7b3u);
    c.r[0] = c.r[7];
    // 0fc7b5  shl eax, 8
    X86_AT(c, 0xfc7b5u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0fc7b8  mov edx, esi
    X86_AT(c, 0xfc7b8u);
    c.r[2] = c.r[6];
    // 0fc7ba  shl edx, 4
    X86_AT(c, 0xfc7bau);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0fc7bd  add edx, eax
    X86_AT(c, 0xfc7bdu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0fc7bf  cmp dword ptr [edx + 0xd4a78], 0xffffffff
    X86_AT(c, 0xfc7bfu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xD4A78u))), 0xFFFFFFFFu, 0, 4);
    // 0fc7c6  je 0xfc86c
    X86_AT(c, 0xfc7c6u);
    if (x86_cc(c, 4)) { goto L_fc86c; }
    X86_TICK(c, 12);
    // 0fc7cc  cmp dword ptr [edx + 0xd4a7c], 0x3e7
    X86_AT(c, 0xfc7ccu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xD4A7Cu))), 0x3E7u, 0, 4);
    // 0fc7d6  jge 0xfc86c
    X86_AT(c, 0xfc7d6u);
    if (x86_cc(c, 13)) { goto L_fc86c; }
    X86_TICK(c, 21);
    // 0fc7dc  mov ebx, dword ptr [0xd4a4c]
    X86_AT(c, 0xfc7dcu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0xD4A4Cu)));
    // 0fc7e2  sub ebx, edi
    X86_AT(c, 0xfc7e2u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0fc7e4  mov eax, dword ptr [0xd4a50]
    X86_AT(c, 0xfc7e4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xD4A50u)));
    // 0fc7e9  sub eax, esi
    X86_AT(c, 0xfc7e9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0fc7eb  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xfc7ebu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0fc7ee  and ebx, ebx
    X86_AT(c, 0xfc7eeu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0fc7f0  jl 0xfc7f6
    X86_AT(c, 0xfc7f0u);
    if (x86_cc(c, 12)) { goto L_fc7f6; }
    X86_TICK(c, 9);
    // 0fc7f2  mov eax, ebx
    X86_AT(c, 0xfc7f2u);
    c.r[0] = c.r[3];
    // 0fc7f4  jmp 0xfc7fa
    X86_AT(c, 0xfc7f4u);
    goto L_fc7fa;
L_fc7f6:
    X86_TICK(c, 4);
    // 0fc7f6  mov eax, ebx
    X86_AT(c, 0xfc7f6u);
    c.r[0] = c.r[3];
    // 0fc7f8  neg eax
    X86_AT(c, 0xfc7f8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
L_fc7fa:
    X86_TICK(c, 13);
    // 0fc7fa  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xfc7fau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 0fc7fd  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xfc7fdu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0fc800  and eax, eax
    X86_AT(c, 0xfc800u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0fc802  jge 0xfc809
    X86_AT(c, 0xfc802u);
    if (x86_cc(c, 13)) { goto L_fc809; }
    X86_TICK(c, 6);
    // 0fc804  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xfc804u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0fc807  neg eax
    X86_AT(c, 0xfc807u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
L_fc809:
    X86_TICK(c, 15);
    // 0fc809  add eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xfc809u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0, 4); }
    // 0fc80c  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xfc80cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0fc80f  dec eax
    X86_AT(c, 0xfc80fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0fc810  jne 0xfc820
    X86_AT(c, 0xfc810u);
    if (x86_cc(c, 5)) { goto L_fc820; }
    X86_TICK(c, 14);
    // 0fc812  push dword ptr [ebp - 4]
    X86_AT(c, 0xfc812u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0fc815  push ebx
    X86_AT(c, 0xfc815u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0fc816  call 0xfc31c
    X86_AT(c, 0xfc816u);
    push32(c, 0xfc81bu); f_000fc31c(c); X86_RET(c, 0xfc81bu);
    X86_TICK(c, 9);
    // 0fc81b  add esp, 8
    X86_AT(c, 0xfc81bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0fc81e  jmp 0xfc86c
    X86_AT(c, 0xfc81eu);
    goto L_fc86c;
L_fc820:
    X86_TICK(c, 12);
    // 0fc820  cmp dword ptr [ebp - 0xc], 7
    X86_AT(c, 0xfc820u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0x7u, 0, 4);
    // 0fc824  jge 0xfc86c
    X86_AT(c, 0xfc824u);
    if (x86_cc(c, 13)) { goto L_fc86c; }
    X86_TICK(c, 9);
    // 0fc826  push ebx
    X86_AT(c, 0xfc826u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0fc827  call 0xfceec
    X86_AT(c, 0xfc827u);
    push32(c, 0xfc82cu); f_000fceec(c); X86_RET(c, 0xfc82cu);
    X86_TICK(c, 15);
    // 0fc82c  xchg ebx, eax
    X86_AT(c, 0xfc82cu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0fc82d  push dword ptr [ebp - 4]
    X86_AT(c, 0xfc82du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0fc830  call 0xfceec
    X86_AT(c, 0xfc830u);
    push32(c, 0xfc835u); f_000fceec(c); X86_RET(c, 0xfc835u);
    X86_TICK(c, 11);
    // 0fc835  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xfc835u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0fc838  add esp, 8
    X86_AT(c, 0xfc838u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0fc83b  and ebx, ebx
    X86_AT(c, 0xfc83bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0fc83d  je 0xfc84f
    X86_AT(c, 0xfc83du);
    if (x86_cc(c, 4)) { goto L_fc84f; }
    X86_TICK(c, 15);
    // 0fc83f  push 0
    X86_AT(c, 0xfc83fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0fc841  push ebx
    X86_AT(c, 0xfc841u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0fc842  push esi
    X86_AT(c, 0xfc842u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0fc843  push edi
    X86_AT(c, 0xfc843u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0fc844  call 0xfc6e8
    X86_AT(c, 0xfc844u);
    push32(c, 0xfc849u); f_000fc6e8(c); X86_RET(c, 0xfc849u);
    X86_TICK(c, 4);
    // 0fc849  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xfc849u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0fc84c  add esp, 0x10
    X86_AT(c, 0xfc84cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_fc84f:
    X86_TICK(c, 12);
    // 0fc84f  cmp dword ptr [ebp - 8], 0
    X86_AT(c, 0xfc84fu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x0u, 0, 4);
    // 0fc853  jne 0xfc86c
    X86_AT(c, 0xfc853u);
    if (x86_cc(c, 5)) { goto L_fc86c; }
    X86_TICK(c, 11);
    // 0fc855  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xfc855u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0fc858  and eax, eax
    X86_AT(c, 0xfc858u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0fc85a  je 0xfc86c
    X86_AT(c, 0xfc85au);
    if (x86_cc(c, 4)) { goto L_fc86c; }
    X86_TICK(c, 15);
    // 0fc85c  push eax
    X86_AT(c, 0xfc85cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0fc85d  push 0
    X86_AT(c, 0xfc85du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0fc85f  push esi
    X86_AT(c, 0xfc85fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0fc860  push edi
    X86_AT(c, 0xfc860u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0fc861  call 0xfc6e8
    X86_AT(c, 0xfc861u);
    push32(c, 0xfc866u); f_000fc6e8(c); X86_RET(c, 0xfc866u);
    X86_TICK(c, 4);
    // 0fc866  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xfc866u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0fc869  add esp, 0x10
    X86_AT(c, 0xfc869u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_fc86c:
    X86_TICK(c, 25);
    // 0fc86c  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xfc86cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0fc871  lea edx, [eax + eax*4]
    X86_AT(c, 0xfc871u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0fc874  lea edx, [eax + edx*2]
    X86_AT(c, 0xfc874u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0fc877  shl edx, 5
    X86_AT(c, 0xfc877u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0fc87a  sub edx, eax
    X86_AT(c, 0xfc87au);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0fc87c  cmp dword ptr [edx + 0xcde81], 0
    X86_AT(c, 0xfc87cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE81u))), 0x0u, 0, 4);
    // 0fc883  jle 0xfc894
    X86_AT(c, 0xfc883u);
    if (x86_cc(c, 14)) { goto L_fc894; }
    X86_TICK(c, 12);
    // 0fc885  cmp dword ptr [edx + 0xcde8d], 0
    X86_AT(c, 0xfc885u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE8Du))), 0x0u, 0, 4);
    // 0fc88c  jle 0xfc894
    X86_AT(c, 0xfc88cu);
    if (x86_cc(c, 14)) { goto L_fc894; }
    X86_TICK(c, 9);
    // 0fc88e  inc esi
    X86_AT(c, 0xfc88eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0fc88f  jmp 0xfc7aa
    X86_AT(c, 0xfc88fu);
    X86_POLL(c, 0xfc7aau); goto L_fc7aa;
L_fc894:
    X86_TICK(c, 9);
    // 0fc894  inc edi
    X86_AT(c, 0xfc894u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0fc895  jmp 0xfc79c
    X86_AT(c, 0xfc895u);
    X86_POLL(c, 0xfc79cu); goto L_fc79c;
L_fc89a:
    X86_TICK(c, 2);
    // 0fc89a  mov edi, 1
    X86_AT(c, 0xfc89au);
    c.r[7] = 0x1u;
L_fc89f:
    X86_TICK(c, 7);
    // 0fc89f  cmp edi, 0x10
    X86_AT(c, 0xfc89fu);
    (void)x86_sub(c, c.r[7], 0x10u, 0, 4);
    // 0fc8a2  jge 0xfc8d7
    X86_AT(c, 0xfc8a2u);
    if (x86_cc(c, 13)) { goto L_fc8d7; }
    X86_TICK(c, 2);
    // 0fc8a4  mov esi, 1
    X86_AT(c, 0xfc8a4u);
    c.r[6] = 0x1u;
L_fc8a9:
    X86_TICK(c, 7);
    // 0fc8a9  cmp esi, 0x10
    X86_AT(c, 0xfc8a9u);
    (void)x86_sub(c, c.r[6], 0x10u, 0, 4);
    // 0fc8ac  jge 0xfc8d4
    X86_AT(c, 0xfc8acu);
    if (x86_cc(c, 13)) { goto L_fc8d4; }
    X86_TICK(c, 23);
    // 0fc8ae  mov eax, edi
    X86_AT(c, 0xfc8aeu);
    c.r[0] = c.r[7];
    // 0fc8b0  shl eax, 8
    X86_AT(c, 0xfc8b0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0fc8b3  mov edx, esi
    X86_AT(c, 0xfc8b3u);
    c.r[2] = c.r[6];
    // 0fc8b5  shl edx, 4
    X86_AT(c, 0xfc8b5u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0fc8b8  add edx, eax
    X86_AT(c, 0xfc8b8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0fc8ba  mov eax, dword ptr [edx + 0xd4a7c]
    X86_AT(c, 0xfc8bau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xD4A7Cu)));
    // 0fc8c0  cmp eax, 0x3e7
    X86_AT(c, 0xfc8c0u);
    (void)x86_sub(c, c.r[0], 0x3E7u, 0, 4);
    // 0fc8c5  jle 0xfc8d1
    X86_AT(c, 0xfc8c5u);
    if (x86_cc(c, 14)) { goto L_fc8d1; }
    X86_TICK(c, 7);
    // 0fc8c7  sub dword ptr [edx + 0xd4a7c], 0x3e8
    X86_AT(c, 0xfc8c7u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xD4A7Cu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, 0x3E8u, 0, 4)); }
L_fc8d1:
    X86_TICK(c, 9);
    // 0fc8d1  inc esi
    X86_AT(c, 0xfc8d1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0fc8d2  jmp 0xfc8a9
    X86_AT(c, 0xfc8d2u);
    X86_POLL(c, 0xfc8a9u); goto L_fc8a9;
L_fc8d4:
    X86_TICK(c, 9);
    // 0fc8d4  inc edi
    X86_AT(c, 0xfc8d4u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0fc8d5  jmp 0xfc89f
    X86_AT(c, 0xfc8d5u);
    X86_POLL(c, 0xfc89fu); goto L_fc89f;
L_fc8d7:
    X86_TICK(c, 28);
    // 0fc8d7  pop edi
    X86_AT(c, 0xfc8d7u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0fc8d8  pop esi
    X86_AT(c, 0xfc8d8u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0fc8d9  pop ebx
    X86_AT(c, 0xfc8d9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0fc8da  leave 
    X86_AT(c, 0xfc8dau);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fc8db  ret 
    X86_AT(c, 0xfc8dbu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfc774u, "ran off the end of a function");
}
void f_000fc8dc(X86Cpu& c) {
    X86_TICK(c, 34);
    // 0fc8dc  push ebp
    X86_AT(c, 0xfc8dcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0fc8dd  mov ebp, esp
    X86_AT(c, 0xfc8ddu);
    c.r[5] = c.r[4];
    // 0fc8df  sub esp, 0x14
    X86_AT(c, 0xfc8dfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x14u, 0, 4); }
    // 0fc8e2  push ebx
    X86_AT(c, 0xfc8e2u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0fc8e3  push esi
    X86_AT(c, 0xfc8e3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0fc8e4  push edi
    X86_AT(c, 0xfc8e4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0fc8e5  mov edi, dword ptr [ebp + 0x14]
    X86_AT(c, 0xfc8e5u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0fc8e8  mov esi, dword ptr [ebp + 0x18]
    X86_AT(c, 0xfc8e8u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 0fc8eb  mov dword ptr [ebp - 0xc], 0xffffffff
    X86_AT(c, 0xfc8ebu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0xFFFFFFFFu);
    // 0fc8f2  push dword ptr [ebp + 8]
    X86_AT(c, 0xfc8f2u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0fc8f5  call 0xe1944
    X86_AT(c, 0xfc8f5u);
    push32(c, 0xfc8fau); f_000e1944(c); X86_RET(c, 0xfc8fau);
    X86_TICK(c, 9);
    // 0fc8fa  push 7
    X86_AT(c, 0xfc8fau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fc8fc  call 0xe693c
    X86_AT(c, 0xfc8fcu);
    push32(c, 0xfc901u); f_000e693c(c); X86_RET(c, 0xfc901u);
    X86_TICK(c, 30);
    // 0fc901  mov eax, dword ptr [0xd4a4c]
    X86_AT(c, 0xfc901u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xD4A4Cu)));
    // 0fc906  shl eax, 8
    X86_AT(c, 0xfc906u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0fc909  mov edx, dword ptr [0xd4a50]
    X86_AT(c, 0xfc909u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xD4A50u)));
    // 0fc90f  shl edx, 4
    X86_AT(c, 0xfc90fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0fc912  add edx, eax
    X86_AT(c, 0xfc912u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0fc914  add esp, 8
    X86_AT(c, 0xfc914u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0fc917  cmp dword ptr [edx + 0xd4a74], 1
    X86_AT(c, 0xfc917u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xD4A74u))), 0x1u, 0, 4);
    // 0fc91e  jne 0xfc951
    X86_AT(c, 0xfc91eu);
    if (x86_cc(c, 5)) { goto L_fc951; }
    X86_TICK(c, 23);
    // 0fc920  mov eax, edi
    X86_AT(c, 0xfc920u);
    c.r[0] = c.r[7];
    // 0fc922  shl eax, 8
    X86_AT(c, 0xfc922u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0fc925  mov edx, esi
    X86_AT(c, 0xfc925u);
    c.r[2] = c.r[6];
    // 0fc927  shl edx, 4
    X86_AT(c, 0xfc927u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0fc92a  add edx, eax
    X86_AT(c, 0xfc92au);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0fc92c  mov eax, dword ptr [edx + 0xd4a74]
    X86_AT(c, 0xfc92cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xD4A74u)));
    // 0fc932  and eax, eax
    X86_AT(c, 0xfc932u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0fc934  je 0xfc949
    X86_AT(c, 0xfc934u);
    if (x86_cc(c, 4)) { goto L_fc949; }
    X86_TICK(c, 7);
    // 0fc936  cmp eax, 0xf
    X86_AT(c, 0xfc936u);
    (void)x86_sub(c, c.r[0], 0xFu, 0, 4);
    // 0fc939  je 0xfc949
    X86_AT(c, 0xfc939u);
    if (x86_cc(c, 4)) { goto L_fc949; }
    X86_TICK(c, 7);
    // 0fc93b  cmp eax, 4
    X86_AT(c, 0xfc93bu);
    (void)x86_sub(c, c.r[0], 0x4u, 0, 4);
    // 0fc93e  je 0xfc949
    X86_AT(c, 0xfc93eu);
    if (x86_cc(c, 4)) { goto L_fc949; }
    X86_TICK(c, 7);
    // 0fc940  cmp eax, 0xe
    X86_AT(c, 0xfc940u);
    (void)x86_sub(c, c.r[0], 0xEu, 0, 4);
    // 0fc943  je 0xfc949
    X86_AT(c, 0xfc943u);
    if (x86_cc(c, 4)) { goto L_fc949; }
    X86_TICK(c, 9);
    // 0fc945  sub eax, eax
    X86_AT(c, 0xfc945u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0fc947  jmp 0xfc94b
    X86_AT(c, 0xfc947u);
    goto L_fc94b;
L_fc949:
    X86_TICK(c, 2);
    // 0fc949  mov al, 1
    X86_AT(c, 0xfc949u);
    s8(c, 0, 0x1u);
L_fc94b:
    X86_TICK(c, 5);
    // 0fc94b  movzx eax, al
    X86_AT(c, 0xfc94bu);
    c.r[0] = g8(c, 0);
    // 0fc94e  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xfc94eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
L_fc951:
    X86_TICK(c, 11);
    // 0fc951  push 0x64
    X86_AT(c, 0xfc951u);
    { uint32_t v = 0x64u; push32(c, v); }
    // 0fc953  push 1
    X86_AT(c, 0xfc953u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0fc955  call 0xe3b6c
    X86_AT(c, 0xfc955u);
    push32(c, 0xfc95au); f_000e3b6c(c); X86_RET(c, 0xfc95au);
    X86_TICK(c, 13);
    // 0fc95a  add esp, 8
    X86_AT(c, 0xfc95au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0fc95d  cmp eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xfc95du);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4);
    // 0fc960  jg 0xfc984
    X86_AT(c, 0xfc960u);
    if (x86_cc(c, 15)) { goto L_fc984; }
    X86_TICK(c, 28);
    // 0fc962  mov eax, dword ptr [0xd4a4c]
    X86_AT(c, 0xfc962u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xD4A4Cu)));
    // 0fc967  shl eax, 8
    X86_AT(c, 0xfc967u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0fc96a  mov edx, dword ptr [0xd4a50]
    X86_AT(c, 0xfc96au);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xD4A50u)));
    // 0fc970  shl edx, 4
    X86_AT(c, 0xfc970u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0fc973  add edx, eax
    X86_AT(c, 0xfc973u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0fc975  cmp dword ptr [edx + 0xd4a74], 2
    X86_AT(c, 0xfc975u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xD4A74u))), 0x2u, 0, 4);
    // 0fc97c  je 0xfc984
    X86_AT(c, 0xfc97cu);
    if (x86_cc(c, 4)) { goto L_fc984; }
    X86_TICK(c, 12);
    // 0fc97e  cmp dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xfc97eu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0x0u, 0, 4);
    // 0fc982  jne 0xfc991
    X86_AT(c, 0xfc982u);
    if (x86_cc(c, 5)) { goto L_fc991; }
L_fc984:
    X86_TICK(c, 12);
    // 0fc984  cmp dword ptr [0xcde44], 2
    X86_AT(c, 0xfc984u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xCDE44u))), 0x2u, 0, 4);
    // 0fc98b  jne 0xfcc01
    X86_AT(c, 0xfc98bu);
    if (x86_cc(c, 5)) { goto L_fcc01; }
L_fc991:
    X86_TICK(c, 9);
    // 0fc991  push 0xa
    X86_AT(c, 0xfc991u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0fc993  call 0xe9740
    X86_AT(c, 0xfc993u);
    push32(c, 0xfc998u); f_000e9740(c); X86_RET(c, 0xfc998u);
    X86_TICK(c, 14);
    // 0fc998  add esp, 4
    X86_AT(c, 0xfc998u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0fc99b  cmp dword ptr [ebp + 0x10], 0x2710
    X86_AT(c, 0xfc99bu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0x2710u, 0, 4);
    // 0fc9a2  je 0xfc9c1
    X86_AT(c, 0xfc9a2u);
    if (x86_cc(c, 4)) { goto L_fc9c1; }
    X86_TICK(c, 11);
    // 0fc9a4  push 0xb84c
    X86_AT(c, 0xfc9a4u);
    { uint32_t v = 0xB84Cu; push32(c, v); }
    // 0fc9a9  push 7
    X86_AT(c, 0xfc9a9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fc9ab  call 0xe5654
    X86_AT(c, 0xfc9abu);
    push32(c, 0xfc9b0u); f_000e5654(c); X86_RET(c, 0xfc9b0u);
    X86_TICK(c, 9);
    // 0fc9b0  push 7
    X86_AT(c, 0xfc9b0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fc9b2  call 0xe6c68
    X86_AT(c, 0xfc9b2u);
    push32(c, 0xfc9b7u); f_000e6c68(c); X86_RET(c, 0xfc9b7u);
    X86_TICK(c, 9);
    // 0fc9b7  push 8
    X86_AT(c, 0xfc9b7u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0fc9b9  call 0xe1944
    X86_AT(c, 0xfc9b9u);
    push32(c, 0xfc9beu); f_000e1944(c); X86_RET(c, 0xfc9beu);
    X86_TICK(c, 2);
    // 0fc9be  add esp, 0x10
    X86_AT(c, 0xfc9beu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_fc9c1:
    X86_TICK(c, 27);
    // 0fc9c1  mov eax, edi
    X86_AT(c, 0xfc9c1u);
    c.r[0] = c.r[7];
    // 0fc9c3  shl eax, 8
    X86_AT(c, 0xfc9c3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0fc9c6  mov edx, esi
    X86_AT(c, 0xfc9c6u);
    c.r[2] = c.r[6];
    // 0fc9c8  shl edx, 4
    X86_AT(c, 0xfc9c8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0fc9cb  add edx, eax
    X86_AT(c, 0xfc9cbu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0fc9cd  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xfc9cdu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0fc9d0  cmp eax, dword ptr [edx + 0xd4a80]
    X86_AT(c, 0xfc9d0u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xD4A80u))), 0, 4);
    // 0fc9d6  jge 0xfc9df
    X86_AT(c, 0xfc9d6u);
    if (x86_cc(c, 13)) { goto L_fc9df; }
    X86_TICK(c, 7);
    // 0fc9d8  inc eax
    X86_AT(c, 0xfc9d8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0fc9d9  jg 0xfcbc1
    X86_AT(c, 0xfc9d9u);
    if (x86_cc(c, 15)) { goto L_fcbc1; }
L_fc9df:
    X86_TICK(c, 24);
    // 0fc9df  mov eax, edi
    X86_AT(c, 0xfc9dfu);
    c.r[0] = c.r[7];
    // 0fc9e1  shl eax, 8
    X86_AT(c, 0xfc9e1u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0fc9e4  mov edx, esi
    X86_AT(c, 0xfc9e4u);
    c.r[2] = c.r[6];
    // 0fc9e6  shl edx, 4
    X86_AT(c, 0xfc9e6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0fc9e9  add edx, eax
    X86_AT(c, 0xfc9e9u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0fc9eb  push dword ptr [edx + 0xd4a78]
    X86_AT(c, 0xfc9ebu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xD4A78u))); push32(c, v); }
    // 0fc9f1  call 0xfcec8
    X86_AT(c, 0xfc9f1u);
    push32(c, 0xfc9f6u); f_000fcec8(c); X86_RET(c, 0xfc9f6u);
    X86_TICK(c, 14);
    // 0fc9f6  add esp, 4
    X86_AT(c, 0xfc9f6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0fc9f9  cmp dword ptr [ebp + 0x10], 0x2710
    X86_AT(c, 0xfc9f9u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0x2710u, 0, 4);
    // 0fca00  jne 0xfca09
    X86_AT(c, 0xfca00u);
    if (x86_cc(c, 5)) { goto L_fca09; }
    X86_TICK(c, 9);
    // 0fca02  push 0xb864
    X86_AT(c, 0xfca02u);
    { uint32_t v = 0xB864u; push32(c, v); }
    // 0fca07  jmp 0xfca0e
    X86_AT(c, 0xfca07u);
    goto L_fca0e;
L_fca09:
    X86_TICK(c, 2);
    // 0fca09  push 0xb888
    X86_AT(c, 0xfca09u);
    { uint32_t v = 0xB888u; push32(c, v); }
L_fca0e:
    X86_TICK(c, 9);
    // 0fca0e  push 7
    X86_AT(c, 0xfca0eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fca10  call 0xe5654
    X86_AT(c, 0xfca10u);
    push32(c, 0xfca15u); f_000e5654(c); X86_RET(c, 0xfca15u);
    X86_TICK(c, 11);
    // 0fca15  add esp, 8
    X86_AT(c, 0xfca15u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0fca18  push 7
    X86_AT(c, 0xfca18u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fca1a  call 0xe6c68
    X86_AT(c, 0xfca1au);
    push32(c, 0xfca1fu); f_000e6c68(c); X86_RET(c, 0xfca1fu);
    X86_TICK(c, 32);
    // 0fca1f  dec dword ptr [0xd4a5c]
    X86_AT(c, 0xfca1fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xD4A5Cu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0fca25  mov eax, edi
    X86_AT(c, 0xfca25u);
    c.r[0] = c.r[7];
    // 0fca27  shl eax, 8
    X86_AT(c, 0xfca27u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0fca2a  mov edx, esi
    X86_AT(c, 0xfca2au);
    c.r[2] = c.r[6];
    // 0fca2c  shl edx, 4
    X86_AT(c, 0xfca2cu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0fca2f  add edx, eax
    X86_AT(c, 0xfca2fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0fca31  add esp, 4
    X86_AT(c, 0xfca31u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0fca34  cmp dword ptr [edx + 0xd4a78], 2
    X86_AT(c, 0xfca34u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xD4A78u))), 0x2u, 0, 4);
    // 0fca3b  jne 0xfcb09
    X86_AT(c, 0xfca3bu);
    if (x86_cc(c, 5)) { goto L_fcb09; }
    X86_TICK(c, 9);
    // 0fca41  push 0x80
    X86_AT(c, 0xfca41u);
    { uint32_t v = 0x80u; push32(c, v); }
    // 0fca46  call 0xe1a7c
    X86_AT(c, 0xfca46u);
    push32(c, 0xfca4bu); f_000e1a7c(c); X86_RET(c, 0xfca4bu);
    X86_TICK(c, 9);
    // 0fca4b  add esp, 4
    X86_AT(c, 0xfca4bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0fca4e  cmp eax, 0x20
    X86_AT(c, 0xfca4eu);
    (void)x86_sub(c, c.r[0], 0x20u, 0, 4);
    // 0fca51  jge 0xfcb09
    X86_AT(c, 0xfca51u);
    if (x86_cc(c, 13)) { goto L_fcb09; }
    X86_TICK(c, 9);
    // 0fca57  push 0xf
    X86_AT(c, 0xfca57u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0fca59  call 0xe1a7c
    X86_AT(c, 0xfca59u);
    push32(c, 0xfca5eu); f_000e1a7c(c); X86_RET(c, 0xfca5eu);
    X86_TICK(c, 12);
    // 0fca5e  xchg ebx, eax
    X86_AT(c, 0xfca5eu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0fca5f  add esp, 4
    X86_AT(c, 0xfca5fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0fca62  and ebx, ebx
    X86_AT(c, 0xfca62u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0fca64  je 0xfca6b
    X86_AT(c, 0xfca64u);
    if (x86_cc(c, 4)) { goto L_fca6b; }
    X86_TICK(c, 7);
    // 0fca66  cmp ebx, 0xf
    X86_AT(c, 0xfca66u);
    (void)x86_sub(c, c.r[3], 0xFu, 0, 4);
    // 0fca69  jne 0xfcaa4
    X86_AT(c, 0xfca69u);
    if (x86_cc(c, 5)) { goto L_fcaa4; }
L_fca6b:
    X86_TICK(c, 11);
    // 0fca6b  mov edx, dword ptr [0xd4a44]
    X86_AT(c, 0xfca6bu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xD4A44u)));
    // 0fca71  cmp edx, 3
    X86_AT(c, 0xfca71u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0fca74  je 0xfca82
    X86_AT(c, 0xfca74u);
    if (x86_cc(c, 4)) { goto L_fca82; }
    X86_TICK(c, 7);
    // 0fca76  cmp edx, 4
    X86_AT(c, 0xfca76u);
    (void)x86_sub(c, c.r[2], 0x4u, 0, 4);
    // 0fca79  jne 0xfca9f
    X86_AT(c, 0xfca79u);
    if (x86_cc(c, 5)) { goto L_fca9f; }
    X86_TICK(c, 9);
    // 0fca7b  mov ebx, 7
    X86_AT(c, 0xfca7bu);
    c.r[3] = 0x7u;
    // 0fca80  jmp 0xfcaa4
    X86_AT(c, 0xfca80u);
    goto L_fcaa4;
L_fca82:
    X86_TICK(c, 9);
    // 0fca82  push 9
    X86_AT(c, 0xfca82u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0fca84  call 0xe1a7c
    X86_AT(c, 0xfca84u);
    push32(c, 0xfca89u); f_000e1a7c(c); X86_RET(c, 0xfca89u);
    X86_TICK(c, 9);
    // 0fca89  add esp, 4
    X86_AT(c, 0xfca89u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0fca8c  cmp eax, 5
    X86_AT(c, 0xfca8cu);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0fca8f  jge 0xfca98
    X86_AT(c, 0xfca8fu);
    if (x86_cc(c, 13)) { goto L_fca98; }
    X86_TICK(c, 9);
    // 0fca91  mov ebx, 9
    X86_AT(c, 0xfca91u);
    c.r[3] = 0x9u;
    // 0fca96  jmp 0xfcaa4
    X86_AT(c, 0xfca96u);
    goto L_fcaa4;
L_fca98:
    X86_TICK(c, 9);
    // 0fca98  mov ebx, 0xb
    X86_AT(c, 0xfca98u);
    c.r[3] = 0xBu;
    // 0fca9d  jmp 0xfcaa4
    X86_AT(c, 0xfca9du);
    goto L_fcaa4;
L_fca9f:
    X86_TICK(c, 2);
    // 0fca9f  mov ebx, 0xc
    X86_AT(c, 0xfca9fu);
    c.r[3] = 0xCu;
L_fcaa4:
    X86_TICK(c, 23);
    // 0fcaa4  mov eax, ebx
    X86_AT(c, 0xfcaa4u);
    c.r[0] = c.r[3];
    // 0fcaa6  add al, 0x41
    X86_AT(c, 0xfcaa6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x41u, 0, 1)); }
    // 0fcaa8  mov byte ptr [ebp - 0xd], al
    X86_AT(c, 0xfcaa8u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u)), g8(c, 0));
    // 0fcaab  lea edx, [ebp - 0xe]
    X86_AT(c, 0xfcaabu);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFFF2u);
    // 0fcaae  push edx
    X86_AT(c, 0xfcaaeu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0fcaaf  push eax
    X86_AT(c, 0xfcaafu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0fcab0  push 0x10
    X86_AT(c, 0xfcab0u);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0fcab2  push 0xd0638
    X86_AT(c, 0xfcab2u);
    { uint32_t v = 0xD0638u; push32(c, v); }
    // 0fcab7  call 0xe53e0
    X86_AT(c, 0xfcab7u);
    push32(c, 0xfcabcu); f_000e53e0(c); X86_RET(c, 0xfcabcu);
    X86_TICK(c, 11);
    // 0fcabc  push eax
    X86_AT(c, 0xfcabcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0fcabd  push 7
    X86_AT(c, 0xfcabdu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fcabf  call 0xe6cb0
    X86_AT(c, 0xfcabfu);
    push32(c, 0xfcac4u); f_000e6cb0(c); X86_RET(c, 0xfcac4u);
    X86_TICK(c, 11);
    // 0fcac4  push 0xb8a8
    X86_AT(c, 0xfcac4u);
    { uint32_t v = 0xB8A8u; push32(c, v); }
    // 0fcac9  push 7
    X86_AT(c, 0xfcac9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fcacb  call 0xe5654
    X86_AT(c, 0xfcacbu);
    push32(c, 0xfcad0u); f_000e5654(c); X86_RET(c, 0xfcad0u);
    X86_TICK(c, 33);
    // 0fcad0  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xfcad0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0fcad5  lea edx, [eax + eax*4]
    X86_AT(c, 0xfcad5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0fcad8  lea edx, [eax + edx*2]
    X86_AT(c, 0xfcad8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0fcadb  shl edx, 5
    X86_AT(c, 0xfcadbu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0fcade  sub edx, eax
    X86_AT(c, 0xfcadeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0fcae0  inc dword ptr [edx + ebx*4 + 0xcdee7]
    X86_AT(c, 0xfcae0u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + c.r[3] * 4 + 0xCDEE7u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0fcae7  add esp, 0x20
    X86_AT(c, 0xfcae7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0fcaea  cmp dword ptr [edx + ebx*4 + 0xcdee7], 0x63
    X86_AT(c, 0xfcaeau);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[3] * 4 + 0xCDEE7u))), 0x63u, 0, 4);
    // 0fcaf2  jle 0xfcaff
    X86_AT(c, 0xfcaf2u);
    if (x86_cc(c, 14)) { goto L_fcaff; }
    X86_TICK(c, 2);
    // 0fcaf4  mov dword ptr [edx + ebx*4 + 0xcdee7], 0x63
    X86_AT(c, 0xfcaf4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[3] * 4 + 0xCDEE7u)), 0x63u);
L_fcaff:
    X86_TICK(c, 9);
    // 0fcaff  push 7
    X86_AT(c, 0xfcaffu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fcb01  call 0xe6c68
    X86_AT(c, 0xfcb01u);
    push32(c, 0xfcb06u); f_000e6c68(c); X86_RET(c, 0xfcb06u);
    X86_TICK(c, 2);
    // 0fcb06  add esp, 4
    X86_AT(c, 0xfcb06u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_fcb09:
    X86_TICK(c, 26);
    // 0fcb09  mov eax, edi
    X86_AT(c, 0xfcb09u);
    c.r[0] = c.r[7];
    // 0fcb0b  shl eax, 8
    X86_AT(c, 0xfcb0bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0fcb0e  mov edx, esi
    X86_AT(c, 0xfcb0eu);
    c.r[2] = c.r[6];
    // 0fcb10  shl edx, 4
    X86_AT(c, 0xfcb10u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0fcb13  add edx, eax
    X86_AT(c, 0xfcb13u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0fcb15  push dword ptr [edx + 0xd4a78]
    X86_AT(c, 0xfcb15u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xD4A78u))); push32(c, v); }
    // 0fcb1b  mov dword ptr [ebp - 0x14], edx
    X86_AT(c, 0xfcb1bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[2]);
    // 0fcb1e  call 0xe1a7c
    X86_AT(c, 0xfcb1eu);
    push32(c, 0xfcb23u); f_000e1a7c(c); X86_RET(c, 0xfcb23u);
    X86_TICK(c, 36);
    // 0fcb23  mov edx, dword ptr [0xd4a68]
    X86_AT(c, 0xfcb23u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xD4A68u)));
    // 0fcb29  shl edx, 2
    X86_AT(c, 0xfcb29u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[2] = r; }
    // 0fcb2c  add eax, edx
    X86_AT(c, 0xfcb2cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0fcb2e  add eax, 0x10
    X86_AT(c, 0xfcb2eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x10u, 0, 4); }
    // 0fcb31  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xfcb31u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0fcb34  mov edx, dword ptr [0xd4a68]
    X86_AT(c, 0xfcb34u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xD4A68u)));
    // 0fcb3a  lea edx, [edx + edx*1 + 0xa]
    X86_AT(c, 0xfcb3au);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] + 0xAu);
    // 0fcb3e  push edx
    X86_AT(c, 0xfcb3eu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0fcb3f  mov edx, dword ptr [0xd4a68]
    X86_AT(c, 0xfcb3fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xD4A68u)));
    // 0fcb45  add edx, 2
    X86_AT(c, 0xfcb45u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x2u, 0, 4); }
    // 0fcb48  push edx
    X86_AT(c, 0xfcb48u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0fcb49  call 0xe3b6c
    X86_AT(c, 0xfcb49u);
    push32(c, 0xfcb4eu); f_000e3b6c(c); X86_RET(c, 0xfcb4eu);
    X86_TICK(c, 13);
    // 0fcb4e  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xfcb4eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0fcb51  push 0xb8b8
    X86_AT(c, 0xfcb51u);
    { uint32_t v = 0xB8B8u; push32(c, v); }
    // 0fcb56  push 7
    X86_AT(c, 0xfcb56u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fcb58  call 0xe5654
    X86_AT(c, 0xfcb58u);
    push32(c, 0xfcb5du); f_000e5654(c); X86_RET(c, 0xfcb5du);
    X86_TICK(c, 16);
    // 0fcb5d  push 3
    X86_AT(c, 0xfcb5du);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0fcb5f  push dword ptr [ebp - 8]
    X86_AT(c, 0xfcb5fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0fcb62  push 7
    X86_AT(c, 0xfcb62u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fcb64  call 0xe5630
    X86_AT(c, 0xfcb64u);
    push32(c, 0xfcb69u); f_000e5630(c); X86_RET(c, 0xfcb69u);
    X86_TICK(c, 12);
    // 0fcb69  push dword ptr [ebp - 8]
    X86_AT(c, 0xfcb69u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0fcb6c  call 0xef048
    X86_AT(c, 0xfcb6cu);
    push32(c, 0xfcb71u); f_000ef048(c); X86_RET(c, 0xfcb71u);
    X86_TICK(c, 11);
    // 0fcb71  push 0xb8cc
    X86_AT(c, 0xfcb71u);
    { uint32_t v = 0xB8CCu; push32(c, v); }
    // 0fcb76  push 7
    X86_AT(c, 0xfcb76u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fcb78  call 0xe5654
    X86_AT(c, 0xfcb78u);
    push32(c, 0xfcb7du); f_000e5654(c); X86_RET(c, 0xfcb7du);
    X86_TICK(c, 16);
    // 0fcb7d  push 3
    X86_AT(c, 0xfcb7du);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0fcb7f  push dword ptr [ebp - 4]
    X86_AT(c, 0xfcb7fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0fcb82  push 7
    X86_AT(c, 0xfcb82u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fcb84  call 0xe5630
    X86_AT(c, 0xfcb84u);
    push32(c, 0xfcb89u); f_000e5630(c); X86_RET(c, 0xfcb89u);
    X86_TICK(c, 9);
    // 0fcb89  push 7
    X86_AT(c, 0xfcb89u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fcb8b  call 0xe6c68
    X86_AT(c, 0xfcb8bu);
    push32(c, 0xfcb90u); f_000e6c68(c); X86_RET(c, 0xfcb90u);
    X86_TICK(c, 14);
    // 0fcb90  add esp, 0x3c
    X86_AT(c, 0xfcb90u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0fcb93  push dword ptr [ebp - 4]
    X86_AT(c, 0xfcb93u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0fcb96  call 0xef07c
    X86_AT(c, 0xfcb96u);
    push32(c, 0xfcb9bu); f_000ef07c(c); X86_RET(c, 0xfcb9bu);
    X86_TICK(c, 15);
    // 0fcb9b  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xfcb9bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0fcb9e  mov dword ptr [eax + 0xd4a78], 0xffffffff
    X86_AT(c, 0xfcb9eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xD4A78u)), 0xFFFFFFFFu);
    // 0fcba8  mov dword ptr [eax + 0xd4a80], 0
    X86_AT(c, 0xfcba8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xD4A80u)), 0x0u);
    // 0fcbb2  call 0xe9010
    X86_AT(c, 0xfcbb2u);
    push32(c, 0xfcbb7u); f_000e9010(c); X86_RET(c, 0xfcbb7u);
    X86_TICK(c, 7);
    // 0fcbb7  call 0xfab68
    X86_AT(c, 0xfcbb7u);
    push32(c, 0xfcbbcu); f_000fab68(c); X86_RET(c, 0xfcbbcu);
    X86_TICK(c, 9);
    // 0fcbbc  add esp, 4
    X86_AT(c, 0xfcbbcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0fcbbf  jmp 0xfcc1e
    X86_AT(c, 0xfcbbfu);
    goto L_fcc1e;
L_fcbc1:
    X86_TICK(c, 9);
    // 0fcbc1  push 8
    X86_AT(c, 0xfcbc1u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0fcbc3  call 0xe1944
    X86_AT(c, 0xfcbc3u);
    push32(c, 0xfcbc8u); f_000e1944(c); X86_RET(c, 0xfcbc8u);
    X86_TICK(c, 16);
    // 0fcbc8  push 5
    X86_AT(c, 0xfcbc8u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0fcbca  push dword ptr [ebp + 0x10]
    X86_AT(c, 0xfcbcau);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 0fcbcd  push 7
    X86_AT(c, 0xfcbcdu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fcbcf  call 0xe5630
    X86_AT(c, 0xfcbcfu);
    push32(c, 0xfcbd4u); f_000e5630(c); X86_RET(c, 0xfcbd4u);
    X86_TICK(c, 11);
    // 0fcbd4  push 0xb8e4
    X86_AT(c, 0xfcbd4u);
    { uint32_t v = 0xB8E4u; push32(c, v); }
    // 0fcbd9  push 7
    X86_AT(c, 0xfcbd9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fcbdb  call 0xe6cb0
    X86_AT(c, 0xfcbdbu);
    push32(c, 0xfcbe0u); f_000e6cb0(c); X86_RET(c, 0xfcbe0u);
    X86_TICK(c, 9);
    // 0fcbe0  push 7
    X86_AT(c, 0xfcbe0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fcbe2  call 0xe6c68
    X86_AT(c, 0xfcbe2u);
    push32(c, 0xfcbe7u); f_000e6c68(c); X86_RET(c, 0xfcbe7u);
    X86_TICK(c, 32);
    // 0fcbe7  mov eax, edi
    X86_AT(c, 0xfcbe7u);
    c.r[0] = c.r[7];
    // 0fcbe9  shl eax, 8
    X86_AT(c, 0xfcbe9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0fcbec  mov edx, esi
    X86_AT(c, 0xfcbecu);
    c.r[2] = c.r[6];
    // 0fcbee  shl edx, 4
    X86_AT(c, 0xfcbeeu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0fcbf1  add edx, eax
    X86_AT(c, 0xfcbf1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0fcbf3  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xfcbf3u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0fcbf6  sub dword ptr [edx + 0xd4a80], eax
    X86_AT(c, 0xfcbf6u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xD4A80u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0fcbfc  add esp, 0x1c
    X86_AT(c, 0xfcbfcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0fcbff  jmp 0xfcc1e
    X86_AT(c, 0xfcbffu);
    goto L_fcc1e;
L_fcc01:
    X86_TICK(c, 11);
    // 0fcc01  push 0xb8f0
    X86_AT(c, 0xfcc01u);
    { uint32_t v = 0xB8F0u; push32(c, v); }
    // 0fcc06  push 7
    X86_AT(c, 0xfcc06u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fcc08  call 0xe5654
    X86_AT(c, 0xfcc08u);
    push32(c, 0xfcc0du); f_000e5654(c); X86_RET(c, 0xfcc0du);
    X86_TICK(c, 9);
    // 0fcc0d  push 7
    X86_AT(c, 0xfcc0du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fcc0f  call 0xe6c68
    X86_AT(c, 0xfcc0fu);
    push32(c, 0xfcc14u); f_000e6c68(c); X86_RET(c, 0xfcc14u);
    X86_TICK(c, 9);
    // 0fcc14  push 3
    X86_AT(c, 0xfcc14u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0fcc16  call 0xe1944
    X86_AT(c, 0xfcc16u);
    push32(c, 0xfcc1bu); f_000e1944(c); X86_RET(c, 0xfcc1bu);
    X86_TICK(c, 2);
    // 0fcc1b  add esp, 0x10
    X86_AT(c, 0xfcc1bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_fcc1e:
    X86_TICK(c, 28);
    // 0fcc1e  pop edi
    X86_AT(c, 0xfcc1eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0fcc1f  pop esi
    X86_AT(c, 0xfcc1fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0fcc20  pop ebx
    X86_AT(c, 0xfcc20u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0fcc21  leave 
    X86_AT(c, 0xfcc21u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fcc22  ret 
    X86_AT(c, 0xfcc22u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfc8dcu, "ran off the end of a function");
}
void f_000fcc24(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0fcc24  push ebp
    X86_AT(c, 0xfcc24u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0fcc25  mov ebp, esp
    X86_AT(c, 0xfcc25u);
    c.r[5] = c.r[4];
    // 0fcc27  sub esp, 0x10
    X86_AT(c, 0xfcc27u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x10u, 0, 4); }
    // 0fcc2a  push ebx
    X86_AT(c, 0xfcc2au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0fcc2b  push esi
    X86_AT(c, 0xfcc2bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0fcc2c  push edi
    X86_AT(c, 0xfcc2cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0fcc2d  sub edi, edi
    X86_AT(c, 0xfcc2du);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0fcc2f  call 0xfcf0c
    X86_AT(c, 0xfcc2fu);
    push32(c, 0xfcc34u); f_000fcf0c(c); X86_RET(c, 0xfcc34u);
    X86_TICK(c, 9);
    // 0fcc34  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xfcc34u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0fcc37  call 0xfcf34
    X86_AT(c, 0xfcc37u);
    push32(c, 0xfcc3cu); f_000fcf34(c); X86_RET(c, 0xfcc3cu);
    X86_TICK(c, 2);
    // 0fcc3c  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xfcc3cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
L_fcc3f:
    X86_TICK(c, 97);
    // 0fcc3f  inc edi
    X86_AT(c, 0xfcc3fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0fcc40  mov eax, edi
    X86_AT(c, 0xfcc40u);
    c.r[0] = c.r[7];
    // 0fcc42  imul eax, dword ptr [ebp - 4]
    X86_AT(c, 0xfcc42u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 4);
    // 0fcc46  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xfcc46u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0fcc49  mov edx, edi
    X86_AT(c, 0xfcc49u);
    c.r[2] = c.r[7];
    // 0fcc4b  imul edx, dword ptr [ebp - 8]
    X86_AT(c, 0xfcc4bu);
    c.r[2] = x86_imul2(c, c.r[2], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 4);
    // 0fcc4f  mov esi, edx
    X86_AT(c, 0xfcc4fu);
    c.r[6] = c.r[2];
    // 0fcc51  add eax, dword ptr [0xd4a4c]
    X86_AT(c, 0xfcc51u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xD4A4Cu))), 0, 4); }
    // 0fcc57  shl eax, 8
    X86_AT(c, 0xfcc57u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0fcc5a  mov edx, esi
    X86_AT(c, 0xfcc5au);
    c.r[2] = c.r[6];
    // 0fcc5c  add edx, dword ptr [0xd4a50]
    X86_AT(c, 0xfcc5cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xD4A50u))), 0, 4); }
    // 0fcc62  shl edx, 4
    X86_AT(c, 0xfcc62u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0fcc65  add edx, eax
    X86_AT(c, 0xfcc65u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0fcc67  mov ebx, dword ptr [edx + 0xd4a74]
    X86_AT(c, 0xfcc67u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xD4A74u)));
    // 0fcc6d  mov eax, dword ptr [edx + 0xd4a78]
    X86_AT(c, 0xfcc6du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xD4A78u)));
    // 0fcc73  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xfcc73u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 0fcc76  cmp edi, dword ptr [ebp + 8]
    X86_AT(c, 0xfcc76u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0, 4);
    // 0fcc79  jge 0xfcc92
    X86_AT(c, 0xfcc79u);
    if (x86_cc(c, 13)) { goto L_fcc92; }
    X86_TICK(c, 7);
    // 0fcc7b  inc eax
    X86_AT(c, 0xfcc7bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0fcc7c  jne 0xfcc92
    X86_AT(c, 0xfcc7cu);
    if (x86_cc(c, 5)) { goto L_fcc92; }
    X86_TICK(c, 7);
    // 0fcc7e  cmp ebx, 2
    X86_AT(c, 0xfcc7eu);
    (void)x86_sub(c, c.r[3], 0x2u, 0, 4);
    // 0fcc81  je 0xfcc92
    X86_AT(c, 0xfcc81u);
    if (x86_cc(c, 4)) { goto L_fcc92; }
    X86_TICK(c, 7);
    // 0fcc83  cmp ebx, 3
    X86_AT(c, 0xfcc83u);
    (void)x86_sub(c, c.r[3], 0x3u, 0, 4);
    // 0fcc86  je 0xfcc92
    X86_AT(c, 0xfcc86u);
    if (x86_cc(c, 4)) { goto L_fcc92; }
    X86_TICK(c, 7);
    // 0fcc88  cmp ebx, 8
    X86_AT(c, 0xfcc88u);
    (void)x86_sub(c, c.r[3], 0x8u, 0, 4);
    // 0fcc8b  je 0xfcc92
    X86_AT(c, 0xfcc8bu);
    if (x86_cc(c, 4)) { goto L_fcc92; }
    X86_TICK(c, 7);
    // 0fcc8d  cmp ebx, 1
    X86_AT(c, 0xfcc8du);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 0fcc90  jne 0xfcc3f
    X86_AT(c, 0xfcc90u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xfcc3fu); goto L_fcc3f; }
L_fcc92:
    X86_TICK(c, 12);
    // 0fcc92  cmp dword ptr [ebp - 0x10], 0xffffffff
    X86_AT(c, 0xfcc92u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0xFFFFFFFFu, 0, 4);
    // 0fcc96  je 0xfcca7
    X86_AT(c, 0xfcc96u);
    if (x86_cc(c, 4)) { goto L_fcca7; }
    X86_TICK(c, 7);
    // 0fcc98  cmp ebx, 2
    X86_AT(c, 0xfcc98u);
    (void)x86_sub(c, c.r[3], 0x2u, 0, 4);
    // 0fcc9b  je 0xfcca7
    X86_AT(c, 0xfcc9bu);
    if (x86_cc(c, 4)) { goto L_fcca7; }
    X86_TICK(c, 7);
    // 0fcc9d  cmp ebx, 3
    X86_AT(c, 0xfcc9du);
    (void)x86_sub(c, c.r[3], 0x3u, 0, 4);
    // 0fcca0  je 0xfcca7
    X86_AT(c, 0xfcca0u);
    if (x86_cc(c, 4)) { goto L_fcca7; }
    X86_TICK(c, 7);
    // 0fcca2  cmp ebx, 8
    X86_AT(c, 0xfcca2u);
    (void)x86_sub(c, c.r[3], 0x8u, 0, 4);
    // 0fcca5  jne 0xfccab
    X86_AT(c, 0xfcca5u);
    if (x86_cc(c, 5)) { goto L_fccab; }
L_fcca7:
    X86_TICK(c, 9);
    // 0fcca7  sub eax, eax
    X86_AT(c, 0xfcca7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0fcca9  jmp 0xfccad
    X86_AT(c, 0xfcca9u);
    goto L_fccad;
L_fccab:
    X86_TICK(c, 2);
    // 0fccab  mov eax, edi
    X86_AT(c, 0xfccabu);
    c.r[0] = c.r[7];
L_fccad:
    X86_TICK(c, 28);
    // 0fccad  pop edi
    X86_AT(c, 0xfccadu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0fccae  pop esi
    X86_AT(c, 0xfccaeu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0fccaf  pop ebx
    X86_AT(c, 0xfccafu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0fccb0  leave 
    X86_AT(c, 0xfccb0u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fccb1  ret 
    X86_AT(c, 0xfccb1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfcc24u, "ran off the end of a function");
}
void f_000fccb4(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0fccb4  push ebp
    X86_AT(c, 0xfccb4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0fccb5  mov ebp, esp
    X86_AT(c, 0xfccb5u);
    c.r[5] = c.r[4];
    // 0fccb7  sub esp, 0xc
    X86_AT(c, 0xfccb7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0fccba  push ebx
    X86_AT(c, 0xfccbau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0fccbb  push esi
    X86_AT(c, 0xfccbbu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0fccbc  push edi
    X86_AT(c, 0xfccbcu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0fccbd  call 0xfcf0c
    X86_AT(c, 0xfccbdu);
    push32(c, 0xfccc2u); f_000fcf0c(c); X86_RET(c, 0xfccc2u);
    X86_TICK(c, 9);
    // 0fccc2  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xfccc2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0fccc5  call 0xfcf34
    X86_AT(c, 0xfccc5u);
    push32(c, 0xfcccau); f_000fcf34(c); X86_RET(c, 0xfcccau);
    X86_TICK(c, 36);
    // 0fccca  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xfcccau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0fcccd  sub eax, eax
    X86_AT(c, 0xfcccdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0fcccf  mov dword ptr [0xd5b78], eax
    X86_AT(c, 0xfcccfu);
    wr32((c.sbase[3] + (uint32_t)(0xD5B78u)), c.r[0]);
    // 0fccd4  mov dword ptr [0xd5b74], eax
    X86_AT(c, 0xfccd4u);
    wr32((c.sbase[3] + (uint32_t)(0xD5B74u)), c.r[0]);
    // 0fccd9  mov eax, dword ptr [0xd4a4c]
    X86_AT(c, 0xfccd9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xD4A4Cu)));
    // 0fccde  shl eax, 8
    X86_AT(c, 0xfccdeu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0fcce1  mov edx, dword ptr [0xd4a50]
    X86_AT(c, 0xfcce1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xD4A50u)));
    // 0fcce7  shl edx, 4
    X86_AT(c, 0xfcce7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0fccea  add edx, eax
    X86_AT(c, 0xfcceau);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0fccec  cmp dword ptr [edx + 0xd4a74], 3
    X86_AT(c, 0xfccecu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xD4A74u))), 0x3u, 0, 4);
    // 0fccf3  je 0xfcd86
    X86_AT(c, 0xfccf3u);
    if (x86_cc(c, 4)) { goto L_fcd86; }
    X86_TICK(c, 2);
    // 0fccf9  mov edi, 1
    X86_AT(c, 0xfccf9u);
    c.r[7] = 0x1u;
L_fccfe:
    X86_TICK(c, 7);
    // 0fccfe  cmp edi, 4
    X86_AT(c, 0xfccfeu);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0fcd01  jge 0xfcd86
    X86_AT(c, 0xfcd01u);
    if (x86_cc(c, 13)) { goto L_fcd86; }
    X86_TICK(c, 71);
    // 0fcd07  mov eax, edi
    X86_AT(c, 0xfcd07u);
    c.r[0] = c.r[7];
    // 0fcd09  imul eax, dword ptr [ebp - 4]
    X86_AT(c, 0xfcd09u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 4);
    // 0fcd0d  add eax, dword ptr [0xd4a4c]
    X86_AT(c, 0xfcd0du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xD4A4Cu))), 0, 4); }
    // 0fcd13  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xfcd13u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0fcd16  mov edx, edi
    X86_AT(c, 0xfcd16u);
    c.r[2] = c.r[7];
    // 0fcd18  imul edx, dword ptr [ebp - 8]
    X86_AT(c, 0xfcd18u);
    c.r[2] = x86_imul2(c, c.r[2], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 4);
    // 0fcd1c  mov esi, edx
    X86_AT(c, 0xfcd1cu);
    c.r[6] = c.r[2];
    // 0fcd1e  add esi, dword ptr [0xd4a50]
    X86_AT(c, 0xfcd1eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xD4A50u))), 0, 4); }
    // 0fcd24  and eax, eax
    X86_AT(c, 0xfcd24u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0fcd26  jl 0xfcd86
    X86_AT(c, 0xfcd26u);
    if (x86_cc(c, 12)) { goto L_fcd86; }
    X86_TICK(c, 7);
    // 0fcd28  cmp eax, 0x10
    X86_AT(c, 0xfcd28u);
    (void)x86_sub(c, c.r[0], 0x10u, 0, 4);
    // 0fcd2b  jge 0xfcd86
    X86_AT(c, 0xfcd2bu);
    if (x86_cc(c, 13)) { goto L_fcd86; }
    X86_TICK(c, 7);
    // 0fcd2d  and esi, esi
    X86_AT(c, 0xfcd2du);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0fcd2f  jl 0xfcd86
    X86_AT(c, 0xfcd2fu);
    if (x86_cc(c, 12)) { goto L_fcd86; }
    X86_TICK(c, 7);
    // 0fcd31  cmp esi, 0x10
    X86_AT(c, 0xfcd31u);
    (void)x86_sub(c, c.r[6], 0x10u, 0, 4);
    // 0fcd34  jge 0xfcd86
    X86_AT(c, 0xfcd34u);
    if (x86_cc(c, 13)) { goto L_fcd86; }
    X86_TICK(c, 25);
    // 0fcd36  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xfcd36u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0fcd39  shl eax, 8
    X86_AT(c, 0xfcd39u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0fcd3c  mov edx, esi
    X86_AT(c, 0xfcd3cu);
    c.r[2] = c.r[6];
    // 0fcd3e  shl edx, 4
    X86_AT(c, 0xfcd3eu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0fcd41  add edx, eax
    X86_AT(c, 0xfcd41u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0fcd43  mov ebx, dword ptr [edx + 0xd4a74]
    X86_AT(c, 0xfcd43u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xD4A74u)));
    // 0fcd49  cmp ebx, 2
    X86_AT(c, 0xfcd49u);
    (void)x86_sub(c, c.r[3], 0x2u, 0, 4);
    // 0fcd4c  je 0xfcd86
    X86_AT(c, 0xfcd4cu);
    if (x86_cc(c, 4)) { goto L_fcd86; }
    X86_TICK(c, 7);
    // 0fcd4e  cmp ebx, 3
    X86_AT(c, 0xfcd4eu);
    (void)x86_sub(c, c.r[3], 0x3u, 0, 4);
    // 0fcd51  je 0xfcd86
    X86_AT(c, 0xfcd51u);
    if (x86_cc(c, 4)) { goto L_fcd86; }
    X86_TICK(c, 7);
    // 0fcd53  cmp ebx, 1
    X86_AT(c, 0xfcd53u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 0fcd56  je 0xfcd86
    X86_AT(c, 0xfcd56u);
    if (x86_cc(c, 4)) { goto L_fcd86; }
    X86_TICK(c, 25);
    // 0fcd58  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xfcd58u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0fcd5b  shl eax, 8
    X86_AT(c, 0xfcd5bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0fcd5e  mov edx, esi
    X86_AT(c, 0xfcd5eu);
    c.r[2] = c.r[6];
    // 0fcd60  shl edx, 4
    X86_AT(c, 0xfcd60u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0fcd63  add edx, eax
    X86_AT(c, 0xfcd63u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0fcd65  mov ebx, dword ptr [edx + 0xd4a78]
    X86_AT(c, 0xfcd65u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xD4A78u)));
    // 0fcd6b  cmp ebx, 0xffffffff
    X86_AT(c, 0xfcd6bu);
    (void)x86_sub(c, c.r[3], 0xFFFFFFFFu, 0, 4);
    // 0fcd6e  je 0xfcd80
    X86_AT(c, 0xfcd6eu);
    if (x86_cc(c, 4)) { goto L_fcd80; }
    X86_TICK(c, 13);
    // 0fcd70  mov dword ptr [0xd5b78], edi
    X86_AT(c, 0xfcd70u);
    wr32((c.sbase[3] + (uint32_t)(0xD5B78u)), c.r[7]);
    // 0fcd76  mov dword ptr [0xd5b74], ebx
    X86_AT(c, 0xfcd76u);
    wr32((c.sbase[3] + (uint32_t)(0xD5B74u)), c.r[3]);
    // 0fcd7c  sub eax, eax
    X86_AT(c, 0xfcd7cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0fcd7e  jmp 0xfcd8b
    X86_AT(c, 0xfcd7eu);
    goto L_fcd8b;
L_fcd80:
    X86_TICK(c, 9);
    // 0fcd80  inc edi
    X86_AT(c, 0xfcd80u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0fcd81  jmp 0xfccfe
    X86_AT(c, 0xfcd81u);
    X86_POLL(c, 0xfccfeu); goto L_fccfe;
L_fcd86:
    X86_TICK(c, 2);
    // 0fcd86  mov eax, 0xffffffff
    X86_AT(c, 0xfcd86u);
    c.r[0] = 0xFFFFFFFFu;
L_fcd8b:
    X86_TICK(c, 28);
    // 0fcd8b  pop edi
    X86_AT(c, 0xfcd8bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0fcd8c  pop esi
    X86_AT(c, 0xfcd8cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0fcd8d  pop ebx
    X86_AT(c, 0xfcd8du);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0fcd8e  leave 
    X86_AT(c, 0xfcd8eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fcd8f  ret 
    X86_AT(c, 0xfcd8fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfccb4u, "ran off the end of a function");
}
void f_000fcd90(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0fcd90  push ebp
    X86_AT(c, 0xfcd90u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0fcd91  mov ebp, esp
    X86_AT(c, 0xfcd91u);
    c.r[5] = c.r[4];
    // 0fcd93  push eax
    X86_AT(c, 0xfcd93u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0fcd94  push ebx
    X86_AT(c, 0xfcd94u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0fcd95  push esi
    X86_AT(c, 0xfcd95u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0fcd96  push edi
    X86_AT(c, 0xfcd96u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0fcd97  push 0xa
    X86_AT(c, 0xfcd97u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0fcd99  call 0xe1944
    X86_AT(c, 0xfcd99u);
    push32(c, 0xfcd9eu); f_000e1944(c); X86_RET(c, 0xfcd9eu);
    X86_TICK(c, 9);
    // 0fcd9e  push 5
    X86_AT(c, 0xfcd9eu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0fcda0  call 0xe9740
    X86_AT(c, 0xfcda0u);
    push32(c, 0xfcda5u); f_000e9740(c); X86_RET(c, 0xfcda5u);
    X86_TICK(c, 31);
    // 0fcda5  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xfcda5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0fcdaa  lea edx, [eax + eax*4]
    X86_AT(c, 0xfcdaau);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0fcdad  lea edx, [eax + edx*2]
    X86_AT(c, 0xfcdadu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0fcdb0  shl edx, 5
    X86_AT(c, 0xfcdb0u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0fcdb3  sub edx, eax
    X86_AT(c, 0xfcdb3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0fcdb5  movzx eax, byte ptr [edx + 0xcdebe]
    X86_AT(c, 0xfcdb5u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEBEu)));
    // 0fcdbc  push dword ptr [eax*4 + 0xd129c]
    X86_AT(c, 0xfcdbcu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xD129Cu))); push32(c, v); }
    // 0fcdc3  call 0xfcc24
    X86_AT(c, 0xfcdc3u);
    push32(c, 0xfcdc8u); f_000fcc24(c); X86_RET(c, 0xfcdc8u);
    X86_TICK(c, 12);
    // 0fcdc8  xchg esi, eax
    X86_AT(c, 0xfcdc8u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0fcdc9  add esp, 0xc
    X86_AT(c, 0xfcdc9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0fcdcc  and esi, esi
    X86_AT(c, 0xfcdccu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0fcdce  jne 0xfcdf2
    X86_AT(c, 0xfcdceu);
    if (x86_cc(c, 5)) { goto L_fcdf2; }
    X86_TICK(c, 11);
    // 0fcdd0  push 0xb908
    X86_AT(c, 0xfcdd0u);
    { uint32_t v = 0xB908u; push32(c, v); }
    // 0fcdd5  push 7
    X86_AT(c, 0xfcdd5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fcdd7  call 0xe5654
    X86_AT(c, 0xfcdd7u);
    push32(c, 0xfcddcu); f_000e5654(c); X86_RET(c, 0xfcddcu);
    X86_TICK(c, 9);
    // 0fcddc  push 7
    X86_AT(c, 0xfcddcu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fcdde  call 0xe6c68
    X86_AT(c, 0xfcddeu);
    push32(c, 0xfcde3u); f_000e6c68(c); X86_RET(c, 0xfcde3u);
    X86_TICK(c, 9);
    // 0fcde3  push 3
    X86_AT(c, 0xfcde3u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0fcde5  call 0xe1944
    X86_AT(c, 0xfcde5u);
    push32(c, 0xfcdeau); f_000e1944(c); X86_RET(c, 0xfcdeau);
    X86_TICK(c, 9);
    // 0fcdea  add esp, 0x10
    X86_AT(c, 0xfcdeau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0fcded  jmp 0xfcec0
    X86_AT(c, 0xfcdedu);
    goto L_fcec0;
L_fcdf2:
    X86_TICK(c, 29);
    // 0fcdf2  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xfcdf2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0fcdf7  lea edx, [eax + eax*4]
    X86_AT(c, 0xfcdf7u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0fcdfa  lea edx, [eax + edx*2]
    X86_AT(c, 0xfcdfau);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0fcdfd  shl edx, 5
    X86_AT(c, 0xfcdfdu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0fce00  sub edx, eax
    X86_AT(c, 0xfce00u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0fce02  movzx eax, byte ptr [edx + 0xcdebe]
    X86_AT(c, 0xfce02u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEBEu)));
    // 0fce09  xchg edx, eax
    X86_AT(c, 0xfce09u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0fce0a  cmp edx, 9
    X86_AT(c, 0xfce0au);
    (void)x86_sub(c, c.r[2], 0x9u, 0, 4);
    // 0fce0d  ja 0xfce54
    X86_AT(c, 0xfce0du);
    if (x86_cc(c, 7)) { goto L_fce54; }
    X86_TICK(c, 7);
    // 0fce0f  jmp dword ptr cs:[edx*4 + 0xfce17]
    X86_AT(c, 0xfce0fu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xFCE17u)));
      switch (t) {
      case 0xfce3fu: goto L_fce3f;
      case 0xfce46u: goto L_fce46;
      case 0xfce4du: goto L_fce4d;
      default: x86_jump(c, t); return; } }
L_fce3f:
    X86_TICK(c, 9);
    // 0fce3f  mov ebx, 0xd
    X86_AT(c, 0xfce3fu);
    c.r[3] = 0xDu;
    // 0fce44  jmp 0xfce59
    X86_AT(c, 0xfce44u);
    goto L_fce59;
L_fce46:
    X86_TICK(c, 9);
    // 0fce46  mov ebx, 6
    X86_AT(c, 0xfce46u);
    c.r[3] = 0x6u;
    // 0fce4b  jmp 0xfce59
    X86_AT(c, 0xfce4bu);
    goto L_fce59;
L_fce4d:
    X86_TICK(c, 9);
    // 0fce4d  mov ebx, 2
    X86_AT(c, 0xfce4du);
    c.r[3] = 0x2u;
    // 0fce52  jmp 0xfce59
    X86_AT(c, 0xfce52u);
    goto L_fce59;
L_fce54:
    X86_TICK(c, 2);
    // 0fce54  mov ebx, 0xa
    X86_AT(c, 0xfce54u);
    c.r[3] = 0xAu;
L_fce59:
    X86_TICK(c, 50);
    // 0fce59  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xfce59u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0fce5e  lea edx, [eax + eax*4]
    X86_AT(c, 0xfce5eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0fce61  lea edx, [eax + edx*2]
    X86_AT(c, 0xfce61u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0fce64  shl edx, 5
    X86_AT(c, 0xfce64u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0fce67  sub edx, eax
    X86_AT(c, 0xfce67u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0fce69  mov edi, dword ptr [edx + 0xcde66]
    X86_AT(c, 0xfce69u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE66u)));
    // 0fce6f  add edi, 0x1e
    X86_AT(c, 0xfce6fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x1Eu, 0, 4); }
    // 0fce72  movzx eax, byte ptr [edx + 0xcdebe]
    X86_AT(c, 0xfce72u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEBEu)));
    // 0fce79  shl eax, 3
    X86_AT(c, 0xfce79u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 0fce7c  movzx eax, ax
    X86_AT(c, 0xfce7cu);
    c.r[0] = (c.r[0] & 0xFFFFu);
    // 0fce7f  sub eax, 0x208
    X86_AT(c, 0xfce7fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x208u, 0, 4); }
    // 0fce84  add eax, dword ptr [edx + 0xcde62]
    X86_AT(c, 0xfce84u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE62u))), 0, 4); }
    // 0fce8a  push eax
    X86_AT(c, 0xfce8au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0fce8b  push 2
    X86_AT(c, 0xfce8bu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0fce8d  call 0xe3b6c
    X86_AT(c, 0xfce8du);
    push32(c, 0xfce92u); f_000e3b6c(c); X86_RET(c, 0xfce92u);
    X86_TICK(c, 9);
    // 0fce92  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xfce92u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0fce95  call 0xfcf34
    X86_AT(c, 0xfce95u);
    push32(c, 0xfce9au); f_000fcf34(c); X86_RET(c, 0xfce9au);
    X86_TICK(c, 37);
    // 0fce9a  imul eax, esi
    X86_AT(c, 0xfce9au);
    c.r[0] = x86_imul2(c, c.r[0], c.r[6], 4);
    // 0fce9d  add eax, dword ptr [0xd4a50]
    X86_AT(c, 0xfce9du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xD4A50u))), 0, 4); }
    // 0fcea3  push eax
    X86_AT(c, 0xfcea3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0fcea4  call 0xfcf0c
    X86_AT(c, 0xfcea4u);
    push32(c, 0xfcea9u); f_000fcf0c(c); X86_RET(c, 0xfcea9u);
    X86_TICK(c, 46);
    // 0fcea9  imul eax, esi
    X86_AT(c, 0xfcea9u);
    c.r[0] = x86_imul2(c, c.r[0], c.r[6], 4);
    // 0fceac  add eax, dword ptr [0xd4a4c]
    X86_AT(c, 0xfceacu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xD4A4Cu))), 0, 4); }
    // 0fceb2  push eax
    X86_AT(c, 0xfceb2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0fceb3  push dword ptr [ebp - 4]
    X86_AT(c, 0xfceb3u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0fceb6  push edi
    X86_AT(c, 0xfceb6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0fceb7  push ebx
    X86_AT(c, 0xfceb7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0fceb8  call 0xfc8dc
    X86_AT(c, 0xfceb8u);
    push32(c, 0xfcebdu); f_000fc8dc(c); X86_RET(c, 0xfcebdu);
    X86_TICK(c, 2);
    // 0fcebd  add esp, 0x1c
    X86_AT(c, 0xfcebdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
L_fcec0:
    X86_TICK(c, 28);
    // 0fcec0  pop edi
    X86_AT(c, 0xfcec0u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0fcec1  pop esi
    X86_AT(c, 0xfcec1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0fcec2  pop ebx
    X86_AT(c, 0xfcec2u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0fcec3  leave 
    X86_AT(c, 0xfcec3u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fcec4  ret 
    X86_AT(c, 0xfcec4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfcd90u, "ran off the end of a function");
}
void f_000fcec8(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0fcec8  push ebp
    X86_AT(c, 0xfcec8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0fcec9  mov ebp, esp
    X86_AT(c, 0xfcec9u);
    c.r[5] = c.r[4];
    // 0fcecb  push 7
    X86_AT(c, 0xfcecbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fcecd  call 0xe693c
    X86_AT(c, 0xfcecdu);
    push32(c, 0xfced2u); f_000e693c(c); X86_RET(c, 0xfced2u);
    X86_TICK(c, 18);
    // 0fced2  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xfced2u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0fced5  push dword ptr [eax*4 + 0xd5b7c]
    X86_AT(c, 0xfced5u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xD5B7Cu))); push32(c, v); }
    // 0fcedc  push 7
    X86_AT(c, 0xfcedcu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fcede  call 0xe5654
    X86_AT(c, 0xfcedeu);
    push32(c, 0xfcee3u); f_000e5654(c); X86_RET(c, 0xfcee3u);
    X86_TICK(c, 9);
    // 0fcee3  push 7
    X86_AT(c, 0xfcee3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fcee5  call 0xe6c68
    X86_AT(c, 0xfcee5u);
    push32(c, 0xfceeau); f_000e6c68(c); X86_RET(c, 0xfceeau);
    X86_TICK(c, 16);
    // 0fceea  leave 
    X86_AT(c, 0xfceeau);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fceeb  ret 
    X86_AT(c, 0xfceebu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfcec8u, "ran off the end of a function");
}
void f_000fceec(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0fceec  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0xfceecu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0fcef0  and ecx, ecx
    X86_AT(c, 0xfcef0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[1], 4); }
    // 0fcef2  jge 0xfcefb
    X86_AT(c, 0xfcef2u);
    if (x86_cc(c, 13)) { goto L_fcefb; }
    X86_TICK(c, 9);
    // 0fcef4  mov eax, 0xffffffff
    X86_AT(c, 0xfcef4u);
    c.r[0] = 0xFFFFFFFFu;
    // 0fcef9  jmp 0xfcf08
    X86_AT(c, 0xfcef9u);
    goto L_fcf08;
L_fcefb:
    X86_TICK(c, 7);
    // 0fcefb  and ecx, ecx
    X86_AT(c, 0xfcefbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[1], 4); }
    // 0fcefd  jle 0xfcf06
    X86_AT(c, 0xfcefdu);
    if (x86_cc(c, 14)) { goto L_fcf06; }
    X86_TICK(c, 9);
    // 0fceff  mov eax, 1
    X86_AT(c, 0xfceffu);
    c.r[0] = 0x1u;
    // 0fcf04  jmp 0xfcf08
    X86_AT(c, 0xfcf04u);
    goto L_fcf08;
L_fcf06:
    X86_TICK(c, 2);
    // 0fcf06  sub eax, eax
    X86_AT(c, 0xfcf06u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_fcf08:
    X86_TICK(c, 10);
    // 0fcf08  ret 
    X86_AT(c, 0xfcf08u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfceecu, "ran off the end of a function");
}
void f_000fcf0c(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0fcf0c  sub ecx, ecx
    X86_AT(c, 0xfcf0cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0fcf0e  cmp word ptr [0xd6e68], 2
    X86_AT(c, 0xfcf0eu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xD6E68u))), 0x2u, 0, 2);
    // 0fcf16  jne 0xfcf1f
    X86_AT(c, 0xfcf16u);
    if (x86_cc(c, 5)) { goto L_fcf1f; }
    X86_TICK(c, 9);
    // 0fcf18  mov ecx, 1
    X86_AT(c, 0xfcf18u);
    c.r[1] = 0x1u;
    // 0fcf1d  jmp 0xfcf2e
    X86_AT(c, 0xfcf1du);
    goto L_fcf2e;
L_fcf1f:
    X86_TICK(c, 12);
    // 0fcf1f  cmp word ptr [0xd6e68], 4
    X86_AT(c, 0xfcf1fu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xD6E68u))), 0x4u, 0, 2);
    // 0fcf27  jne 0xfcf2e
    X86_AT(c, 0xfcf27u);
    if (x86_cc(c, 5)) { goto L_fcf2e; }
    X86_TICK(c, 2);
    // 0fcf29  mov ecx, 0xffffffff
    X86_AT(c, 0xfcf29u);
    c.r[1] = 0xFFFFFFFFu;
L_fcf2e:
    X86_TICK(c, 12);
    // 0fcf2e  mov eax, ecx
    X86_AT(c, 0xfcf2eu);
    c.r[0] = c.r[1];
    // 0fcf30  ret 
    X86_AT(c, 0xfcf30u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfcf0cu, "ran off the end of a function");
}
void f_000fcf34(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0fcf34  sub ecx, ecx
    X86_AT(c, 0xfcf34u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0fcf36  cmp word ptr [0xd6e68], 1
    X86_AT(c, 0xfcf36u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xD6E68u))), 0x1u, 0, 2);
    // 0fcf3e  jne 0xfcf47
    X86_AT(c, 0xfcf3eu);
    if (x86_cc(c, 5)) { goto L_fcf47; }
    X86_TICK(c, 9);
    // 0fcf40  mov ecx, 0xffffffff
    X86_AT(c, 0xfcf40u);
    c.r[1] = 0xFFFFFFFFu;
    // 0fcf45  jmp 0xfcf56
    X86_AT(c, 0xfcf45u);
    goto L_fcf56;
L_fcf47:
    X86_TICK(c, 12);
    // 0fcf47  cmp word ptr [0xd6e68], 3
    X86_AT(c, 0xfcf47u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xD6E68u))), 0x3u, 0, 2);
    // 0fcf4f  jne 0xfcf56
    X86_AT(c, 0xfcf4fu);
    if (x86_cc(c, 5)) { goto L_fcf56; }
    X86_TICK(c, 2);
    // 0fcf51  mov ecx, 1
    X86_AT(c, 0xfcf51u);
    c.r[1] = 0x1u;
L_fcf56:
    X86_TICK(c, 12);
    // 0fcf56  mov eax, ecx
    X86_AT(c, 0xfcf56u);
    c.r[0] = c.r[1];
    // 0fcf58  ret 
    X86_AT(c, 0xfcf58u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfcf34u, "ran off the end of a function");
}
void f_000fcf5c(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0fcf5c  push ebp
    X86_AT(c, 0xfcf5cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0fcf5d  mov ebp, esp
    X86_AT(c, 0xfcf5du);
    c.r[5] = c.r[4];
    // 0fcf5f  push esi
    X86_AT(c, 0xfcf5fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0fcf60  push edi
    X86_AT(c, 0xfcf60u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0fcf61  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xfcf61u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0fcf64  sub ecx, ecx
    X86_AT(c, 0xfcf64u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0fcf66  mov esi, ecx
    X86_AT(c, 0xfcf66u);
    c.r[6] = c.r[1];
    // 0fcf68  cmp dword ptr [ebp + 0xc], 1
    X86_AT(c, 0xfcf68u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0x1u, 0, 4);
    // 0fcf6c  jne 0xfd01e
    X86_AT(c, 0xfcf6cu);
    if (x86_cc(c, 5)) { goto L_fd01e; }
    X86_TICK(c, 9);
    // 0fcf72  lea edx, [edi - 1]
    X86_AT(c, 0xfcf72u);
    c.r[2] = (uint32_t)(c.r[7] + 0xFFFFFFFFu);
    // 0fcf75  cmp edx, 7
    X86_AT(c, 0xfcf75u);
    (void)x86_sub(c, c.r[2], 0x7u, 0, 4);
    // 0fcf78  ja 0xfd109
    X86_AT(c, 0xfcf78u);
    if (x86_cc(c, 7)) { goto L_fd109; }
    X86_TICK(c, 7);
    // 0fcf7e  jmp dword ptr cs:[edx*4 + 0xfcf86]
    X86_AT(c, 0xfcf7eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xFCF86u)));
      switch (t) {
      case 0xfcfa6u: goto L_fcfa6;
      case 0xfcfb5u: goto L_fcfb5;
      case 0xfcfc4u: goto L_fcfc4;
      case 0xfcfd3u: goto L_fcfd3;
      case 0xfcfe2u: goto L_fcfe2;
      case 0xfcff1u: goto L_fcff1;
      case 0xfd000u: goto L_fd000;
      case 0xfd00fu: goto L_fd00f;
      default: x86_jump(c, t); return; } }
L_fcfa6:
    X86_TICK(c, 11);
    // 0fcfa6  mov esi, 0xd8d84
    X86_AT(c, 0xfcfa6u);
    c.r[6] = 0xD8D84u;
    // 0fcfab  mov ecx, 0xd8d98
    X86_AT(c, 0xfcfabu);
    c.r[1] = 0xD8D98u;
    // 0fcfb0  jmp 0xfd109
    X86_AT(c, 0xfcfb0u);
    goto L_fd109;
L_fcfb5:
    X86_TICK(c, 11);
    // 0fcfb5  mov esi, 0xd8dac
    X86_AT(c, 0xfcfb5u);
    c.r[6] = 0xD8DACu;
    // 0fcfba  mov ecx, 0xd8dc0
    X86_AT(c, 0xfcfbau);
    c.r[1] = 0xD8DC0u;
    // 0fcfbf  jmp 0xfd109
    X86_AT(c, 0xfcfbfu);
    goto L_fd109;
L_fcfc4:
    X86_TICK(c, 11);
    // 0fcfc4  mov esi, 0xd8dd4
    X86_AT(c, 0xfcfc4u);
    c.r[6] = 0xD8DD4u;
    // 0fcfc9  mov ecx, 0xd8de8
    X86_AT(c, 0xfcfc9u);
    c.r[1] = 0xD8DE8u;
    // 0fcfce  jmp 0xfd109
    X86_AT(c, 0xfcfceu);
    goto L_fd109;
L_fcfd3:
    X86_TICK(c, 11);
    // 0fcfd3  mov esi, 0xd8dfc
    X86_AT(c, 0xfcfd3u);
    c.r[6] = 0xD8DFCu;
    // 0fcfd8  mov ecx, 0xd8e10
    X86_AT(c, 0xfcfd8u);
    c.r[1] = 0xD8E10u;
    // 0fcfdd  jmp 0xfd109
    X86_AT(c, 0xfcfddu);
    goto L_fd109;
L_fcfe2:
    X86_TICK(c, 11);
    // 0fcfe2  mov esi, 0xd8e24
    X86_AT(c, 0xfcfe2u);
    c.r[6] = 0xD8E24u;
    // 0fcfe7  mov ecx, 0xd8e38
    X86_AT(c, 0xfcfe7u);
    c.r[1] = 0xD8E38u;
    // 0fcfec  jmp 0xfd109
    X86_AT(c, 0xfcfecu);
    goto L_fd109;
L_fcff1:
    X86_TICK(c, 11);
    // 0fcff1  mov esi, 0xd8e4c
    X86_AT(c, 0xfcff1u);
    c.r[6] = 0xD8E4Cu;
    // 0fcff6  mov ecx, 0xd8e60
    X86_AT(c, 0xfcff6u);
    c.r[1] = 0xD8E60u;
    // 0fcffb  jmp 0xfd109
    X86_AT(c, 0xfcffbu);
    goto L_fd109;
L_fd000:
    X86_TICK(c, 11);
    // 0fd000  mov esi, 0xd8e74
    X86_AT(c, 0xfd000u);
    c.r[6] = 0xD8E74u;
    // 0fd005  mov ecx, 0xd8e88
    X86_AT(c, 0xfd005u);
    c.r[1] = 0xD8E88u;
    // 0fd00a  jmp 0xfd109
    X86_AT(c, 0xfd00au);
    goto L_fd109;
L_fd00f:
    X86_TICK(c, 11);
    // 0fd00f  mov esi, 0xd8e9c
    X86_AT(c, 0xfd00fu);
    c.r[6] = 0xD8E9Cu;
    // 0fd014  mov ecx, 0xd8eb0
    X86_AT(c, 0xfd014u);
    c.r[1] = 0xD8EB0u;
    // 0fd019  jmp 0xfd109
    X86_AT(c, 0xfd019u);
    goto L_fd109;
L_fd01e:
    X86_TICK(c, 12);
    // 0fd01e  cmp dword ptr [ebp + 0xc], 2
    X86_AT(c, 0xfd01eu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0x2u, 0, 4);
    // 0fd022  jne 0xfd0a4
    X86_AT(c, 0xfd022u);
    if (x86_cc(c, 5)) { goto L_fd0a4; }
    X86_TICK(c, 9);
    // 0fd028  lea edx, [edi - 2]
    X86_AT(c, 0xfd028u);
    c.r[2] = (uint32_t)(c.r[7] + 0xFFFFFFFEu);
    // 0fd02b  cmp edx, 7
    X86_AT(c, 0xfd02bu);
    (void)x86_sub(c, c.r[2], 0x7u, 0, 4);
    // 0fd02e  ja 0xfd109
    X86_AT(c, 0xfd02eu);
    if (x86_cc(c, 7)) { goto L_fd109; }
    X86_TICK(c, 7);
    // 0fd034  jmp dword ptr cs:[edx*4 + 0xfd03c]
    X86_AT(c, 0xfd034u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xFD03Cu)));
      switch (t) {
      case 0xfd05cu: goto L_fd05c;
      case 0xfd06bu: goto L_fd06b;
      case 0xfd07au: goto L_fd07a;
      case 0xfd089u: goto L_fd089;
      case 0xfd098u: goto L_fd098;
      case 0xfd109u: goto L_fd109;
      default: x86_jump(c, t); return; } }
L_fd05c:
    X86_TICK(c, 11);
    // 0fd05c  mov esi, 0xd8ec4
    X86_AT(c, 0xfd05cu);
    c.r[6] = 0xD8EC4u;
    // 0fd061  mov ecx, 0xd8ed8
    X86_AT(c, 0xfd061u);
    c.r[1] = 0xD8ED8u;
    // 0fd066  jmp 0xfd109
    X86_AT(c, 0xfd066u);
    goto L_fd109;
L_fd06b:
    X86_TICK(c, 11);
    // 0fd06b  mov esi, 0xd8eec
    X86_AT(c, 0xfd06bu);
    c.r[6] = 0xD8EECu;
    // 0fd070  mov ecx, 0xd8f00
    X86_AT(c, 0xfd070u);
    c.r[1] = 0xD8F00u;
    // 0fd075  jmp 0xfd109
    X86_AT(c, 0xfd075u);
    goto L_fd109;
L_fd07a:
    X86_TICK(c, 11);
    // 0fd07a  mov esi, 0xd8f14
    X86_AT(c, 0xfd07au);
    c.r[6] = 0xD8F14u;
    // 0fd07f  mov ecx, 0xd8f28
    X86_AT(c, 0xfd07fu);
    c.r[1] = 0xD8F28u;
    // 0fd084  jmp 0xfd109
    X86_AT(c, 0xfd084u);
    goto L_fd109;
L_fd089:
    X86_TICK(c, 11);
    // 0fd089  mov esi, 0xd8f3c
    X86_AT(c, 0xfd089u);
    c.r[6] = 0xD8F3Cu;
    // 0fd08e  mov ecx, 0xd8f50
    X86_AT(c, 0xfd08eu);
    c.r[1] = 0xD8F50u;
    // 0fd093  jmp 0xfd109
    X86_AT(c, 0xfd093u);
    goto L_fd109;
L_fd098:
    X86_TICK(c, 11);
    // 0fd098  mov esi, 0xd8f64
    X86_AT(c, 0xfd098u);
    c.r[6] = 0xD8F64u;
    // 0fd09d  mov ecx, 0xd8f78
    X86_AT(c, 0xfd09du);
    c.r[1] = 0xD8F78u;
    // 0fd0a2  jmp 0xfd109
    X86_AT(c, 0xfd0a2u);
    goto L_fd109;
L_fd0a4:
    X86_TICK(c, 9);
    // 0fd0a4  mov edx, edi
    X86_AT(c, 0xfd0a4u);
    c.r[2] = c.r[7];
    // 0fd0a6  cmp edx, 9
    X86_AT(c, 0xfd0a6u);
    (void)x86_sub(c, c.r[2], 0x9u, 0, 4);
    // 0fd0a9  ja 0xfd109
    X86_AT(c, 0xfd0a9u);
    if (x86_cc(c, 7)) { goto L_fd109; }
    X86_TICK(c, 7);
    // 0fd0ab  jmp dword ptr cs:[edx*4 + 0xfd0b3]
    X86_AT(c, 0xfd0abu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xFD0B3u)));
      switch (t) {
      case 0xfd0dbu: goto L_fd0db;
      case 0xfd0e7u: goto L_fd0e7;
      case 0xfd0f3u: goto L_fd0f3;
      case 0xfd0ffu: goto L_fd0ff;
      case 0xfd109u: goto L_fd109;
      default: x86_jump(c, t); return; } }
L_fd0db:
    X86_TICK(c, 11);
    // 0fd0db  mov esi, 0xd8f8c
    X86_AT(c, 0xfd0dbu);
    c.r[6] = 0xD8F8Cu;
    // 0fd0e0  mov ecx, 0xd8fa0
    X86_AT(c, 0xfd0e0u);
    c.r[1] = 0xD8FA0u;
    // 0fd0e5  jmp 0xfd109
    X86_AT(c, 0xfd0e5u);
    goto L_fd109;
L_fd0e7:
    X86_TICK(c, 11);
    // 0fd0e7  mov esi, 0xd8fb4
    X86_AT(c, 0xfd0e7u);
    c.r[6] = 0xD8FB4u;
    // 0fd0ec  mov ecx, 0xd8fc8
    X86_AT(c, 0xfd0ecu);
    c.r[1] = 0xD8FC8u;
    // 0fd0f1  jmp 0xfd109
    X86_AT(c, 0xfd0f1u);
    goto L_fd109;
L_fd0f3:
    X86_TICK(c, 11);
    // 0fd0f3  mov esi, 0xd8fdc
    X86_AT(c, 0xfd0f3u);
    c.r[6] = 0xD8FDCu;
    // 0fd0f8  mov ecx, 0xd8ff0
    X86_AT(c, 0xfd0f8u);
    c.r[1] = 0xD8FF0u;
    // 0fd0fd  jmp 0xfd109
    X86_AT(c, 0xfd0fdu);
    goto L_fd109;
L_fd0ff:
    X86_TICK(c, 4);
    // 0fd0ff  mov esi, 0xd9004
    X86_AT(c, 0xfd0ffu);
    c.r[6] = 0xD9004u;
    // 0fd104  mov ecx, 0xd9018
    X86_AT(c, 0xfd104u);
    c.r[1] = 0xD9018u;
L_fd109:
    X86_TICK(c, 86);
    // 0fd109  mov eax, 0xd8d5c
    X86_AT(c, 0xfd109u);
    c.r[0] = 0xD8D5Cu;
    // 0fd10e  mov edx, dword ptr [ecx]
    X86_AT(c, 0xfd10eu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[1])));
    // 0fd110  mov dword ptr [eax], edx
    X86_AT(c, 0xfd110u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0])), c.r[2]);
    // 0fd112  mov edx, dword ptr [esi]
    X86_AT(c, 0xfd112u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 0fd114  mov dword ptr [eax + 0x14], edx
    X86_AT(c, 0xfd114u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x14u)), c.r[2]);
    // 0fd117  mov edx, dword ptr [ecx + 4]
    X86_AT(c, 0xfd117u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x4u)));
    // 0fd11a  mov dword ptr [eax + 4], edx
    X86_AT(c, 0xfd11au);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u)), c.r[2]);
    // 0fd11d  mov edx, dword ptr [esi + 4]
    X86_AT(c, 0xfd11du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)));
    // 0fd120  mov dword ptr [eax + 0x18], edx
    X86_AT(c, 0xfd120u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x18u)), c.r[2]);
    // 0fd123  mov edx, dword ptr [ecx + 8]
    X86_AT(c, 0xfd123u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x8u)));
    // 0fd126  mov dword ptr [eax + 8], edx
    X86_AT(c, 0xfd126u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)), c.r[2]);
    // 0fd129  mov edx, dword ptr [esi + 8]
    X86_AT(c, 0xfd129u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)));
    // 0fd12c  mov dword ptr [eax + 0x1c], edx
    X86_AT(c, 0xfd12cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x1Cu)), c.r[2]);
    // 0fd12f  mov edx, dword ptr [ecx + 0xc]
    X86_AT(c, 0xfd12fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCu)));
    // 0fd132  mov dword ptr [eax + 0xc], edx
    X86_AT(c, 0xfd132u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)), c.r[2]);
    // 0fd135  mov edx, dword ptr [esi + 0xc]
    X86_AT(c, 0xfd135u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)));
    // 0fd138  mov dword ptr [eax + 0x20], edx
    X86_AT(c, 0xfd138u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x20u)), c.r[2]);
    // 0fd13b  mov edx, dword ptr [ecx + 0x10]
    X86_AT(c, 0xfd13bu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x10u)));
    // 0fd13e  mov dword ptr [eax + 0x10], edx
    X86_AT(c, 0xfd13eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x10u)), c.r[2]);
    // 0fd141  mov edx, dword ptr [esi + 0x10]
    X86_AT(c, 0xfd141u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u)));
    // 0fd144  mov dword ptr [eax + 0x24], edx
    X86_AT(c, 0xfd144u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x24u)), c.r[2]);
    // 0fd147  pop edi
    X86_AT(c, 0xfd147u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0fd148  pop esi
    X86_AT(c, 0xfd148u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0fd149  leave 
    X86_AT(c, 0xfd149u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fd14a  ret 
    X86_AT(c, 0xfd14au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfcf5cu, "ran off the end of a function");
}
void f_000fd109(X86Cpu& c) {
    X86_TICK(c, 86);
    // 0fd109  mov eax, 0xd8d5c
    X86_AT(c, 0xfd109u);
    c.r[0] = 0xD8D5Cu;
    // 0fd10e  mov edx, dword ptr [ecx]
    X86_AT(c, 0xfd10eu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[1])));
    // 0fd110  mov dword ptr [eax], edx
    X86_AT(c, 0xfd110u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0])), c.r[2]);
    // 0fd112  mov edx, dword ptr [esi]
    X86_AT(c, 0xfd112u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 0fd114  mov dword ptr [eax + 0x14], edx
    X86_AT(c, 0xfd114u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x14u)), c.r[2]);
    // 0fd117  mov edx, dword ptr [ecx + 4]
    X86_AT(c, 0xfd117u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x4u)));
    // 0fd11a  mov dword ptr [eax + 4], edx
    X86_AT(c, 0xfd11au);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u)), c.r[2]);
    // 0fd11d  mov edx, dword ptr [esi + 4]
    X86_AT(c, 0xfd11du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)));
    // 0fd120  mov dword ptr [eax + 0x18], edx
    X86_AT(c, 0xfd120u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x18u)), c.r[2]);
    // 0fd123  mov edx, dword ptr [ecx + 8]
    X86_AT(c, 0xfd123u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x8u)));
    // 0fd126  mov dword ptr [eax + 8], edx
    X86_AT(c, 0xfd126u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)), c.r[2]);
    // 0fd129  mov edx, dword ptr [esi + 8]
    X86_AT(c, 0xfd129u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)));
    // 0fd12c  mov dword ptr [eax + 0x1c], edx
    X86_AT(c, 0xfd12cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x1Cu)), c.r[2]);
    // 0fd12f  mov edx, dword ptr [ecx + 0xc]
    X86_AT(c, 0xfd12fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCu)));
    // 0fd132  mov dword ptr [eax + 0xc], edx
    X86_AT(c, 0xfd132u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)), c.r[2]);
    // 0fd135  mov edx, dword ptr [esi + 0xc]
    X86_AT(c, 0xfd135u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)));
    // 0fd138  mov dword ptr [eax + 0x20], edx
    X86_AT(c, 0xfd138u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x20u)), c.r[2]);
    // 0fd13b  mov edx, dword ptr [ecx + 0x10]
    X86_AT(c, 0xfd13bu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x10u)));
    // 0fd13e  mov dword ptr [eax + 0x10], edx
    X86_AT(c, 0xfd13eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x10u)), c.r[2]);
    // 0fd141  mov edx, dword ptr [esi + 0x10]
    X86_AT(c, 0xfd141u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u)));
    // 0fd144  mov dword ptr [eax + 0x24], edx
    X86_AT(c, 0xfd144u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x24u)), c.r[2]);
    // 0fd147  pop edi
    X86_AT(c, 0xfd147u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0fd148  pop esi
    X86_AT(c, 0xfd148u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0fd149  leave 
    X86_AT(c, 0xfd149u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fd14a  ret 
    X86_AT(c, 0xfd14au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfd109u, "ran off the end of a function");
}
void f_000fd14c(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0fd14c  push ebp
    X86_AT(c, 0xfd14cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0fd14d  mov ebp, esp
    X86_AT(c, 0xfd14du);
    c.r[5] = c.r[4];
    // 0fd14f  push eax
    X86_AT(c, 0xfd14fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0fd150  push ebx
    X86_AT(c, 0xfd150u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0fd151  push esi
    X86_AT(c, 0xfd151u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0fd152  push edi
    X86_AT(c, 0xfd152u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0fd153  push 7
    X86_AT(c, 0xfd153u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd155  call 0xe693c
    X86_AT(c, 0xfd155u);
    push32(c, 0xfd15au); f_000e693c(c); X86_RET(c, 0xfd15au);
    X86_TICK(c, 4);
    // 0fd15a  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xfd15au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0fd161  add esp, 4
    X86_AT(c, 0xfd161u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_fd164:
    X86_TICK(c, 11);
    // 0fd164  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xfd164u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0fd167  cmp eax, 0x11
    X86_AT(c, 0xfd167u);
    (void)x86_sub(c, c.r[0], 0x11u, 0, 4);
    // 0fd16a  jge 0xfd442
    X86_AT(c, 0xfd16au);
    if (x86_cc(c, 13)) { goto L_fd442; }
    X86_TICK(c, 10);
    // 0fd170  xchg edx, eax
    X86_AT(c, 0xfd170u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0fd171  cmp edx, 0x10
    X86_AT(c, 0xfd171u);
    (void)x86_sub(c, c.r[2], 0x10u, 0, 4);
    // 0fd174  ja 0xfd3fd
    X86_AT(c, 0xfd174u);
    if (x86_cc(c, 7)) { goto L_fd3fd; }
    X86_TICK(c, 7);
    // 0fd17a  jmp dword ptr cs:[edx*4 + 0xfd182]
    X86_AT(c, 0xfd17au);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xFD182u)));
      switch (t) {
      case 0xfd1c6u: goto L_fd1c6;
      case 0xfd1e8u: goto L_fd1e8;
      case 0xfd20au: goto L_fd20a;
      case 0xfd22cu: goto L_fd22c;
      case 0xfd24eu: goto L_fd24e;
      case 0xfd270u: goto L_fd270;
      case 0xfd292u: goto L_fd292;
      case 0xfd2b4u: goto L_fd2b4;
      case 0xfd2d6u: goto L_fd2d6;
      case 0xfd2f8u: goto L_fd2f8;
      case 0xfd31au: goto L_fd31a;
      case 0xfd33cu: goto L_fd33c;
      case 0xfd35eu: goto L_fd35e;
      case 0xfd380u: goto L_fd380;
      case 0xfd39fu: goto L_fd39f;
      case 0xfd3beu: goto L_fd3be;
      case 0xfd3ddu: goto L_fd3dd;
      default: x86_jump(c, t); return; } }
L_fd1c6:
    X86_TICK(c, 11);
    // 0fd1c6  push 0xe214
    X86_AT(c, 0xfd1c6u);
    { uint32_t v = 0xE214u; push32(c, v); }
    // 0fd1cb  push 7
    X86_AT(c, 0xfd1cbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd1cd  call 0xe6cb0
    X86_AT(c, 0xfd1cdu);
    push32(c, 0xfd1d2u); f_000e6cb0(c); X86_RET(c, 0xfd1d2u);
    X86_TICK(c, 9);
    // 0fd1d2  push 7
    X86_AT(c, 0xfd1d2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd1d4  call 0xe6c68
    X86_AT(c, 0xfd1d4u);
    push32(c, 0xfd1d9u); f_000e6c68(c); X86_RET(c, 0xfd1d9u);
    X86_TICK(c, 11);
    // 0fd1d9  mov esi, 0xd8d84
    X86_AT(c, 0xfd1d9u);
    c.r[6] = 0xD8D84u;
    // 0fd1de  mov ebx, 0xd8d98
    X86_AT(c, 0xfd1deu);
    c.r[3] = 0xD8D98u;
    // 0fd1e3  jmp 0xfd3fa
    X86_AT(c, 0xfd1e3u);
    goto L_fd3fa;
L_fd1e8:
    X86_TICK(c, 11);
    // 0fd1e8  push 0xe21c
    X86_AT(c, 0xfd1e8u);
    { uint32_t v = 0xE21Cu; push32(c, v); }
    // 0fd1ed  push 7
    X86_AT(c, 0xfd1edu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd1ef  call 0xe6cb0
    X86_AT(c, 0xfd1efu);
    push32(c, 0xfd1f4u); f_000e6cb0(c); X86_RET(c, 0xfd1f4u);
    X86_TICK(c, 9);
    // 0fd1f4  push 7
    X86_AT(c, 0xfd1f4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd1f6  call 0xe6c68
    X86_AT(c, 0xfd1f6u);
    push32(c, 0xfd1fbu); f_000e6c68(c); X86_RET(c, 0xfd1fbu);
    X86_TICK(c, 11);
    // 0fd1fb  mov esi, 0xd8dac
    X86_AT(c, 0xfd1fbu);
    c.r[6] = 0xD8DACu;
    // 0fd200  mov ebx, 0xd8dc0
    X86_AT(c, 0xfd200u);
    c.r[3] = 0xD8DC0u;
    // 0fd205  jmp 0xfd3fa
    X86_AT(c, 0xfd205u);
    goto L_fd3fa;
L_fd20a:
    X86_TICK(c, 11);
    // 0fd20a  push 0xe224
    X86_AT(c, 0xfd20au);
    { uint32_t v = 0xE224u; push32(c, v); }
    // 0fd20f  push 7
    X86_AT(c, 0xfd20fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd211  call 0xe6cb0
    X86_AT(c, 0xfd211u);
    push32(c, 0xfd216u); f_000e6cb0(c); X86_RET(c, 0xfd216u);
    X86_TICK(c, 9);
    // 0fd216  push 7
    X86_AT(c, 0xfd216u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd218  call 0xe6c68
    X86_AT(c, 0xfd218u);
    push32(c, 0xfd21du); f_000e6c68(c); X86_RET(c, 0xfd21du);
    X86_TICK(c, 11);
    // 0fd21d  mov esi, 0xd8dd4
    X86_AT(c, 0xfd21du);
    c.r[6] = 0xD8DD4u;
    // 0fd222  mov ebx, 0xd8de8
    X86_AT(c, 0xfd222u);
    c.r[3] = 0xD8DE8u;
    // 0fd227  jmp 0xfd3fa
    X86_AT(c, 0xfd227u);
    goto L_fd3fa;
L_fd22c:
    X86_TICK(c, 11);
    // 0fd22c  push 0xe22c
    X86_AT(c, 0xfd22cu);
    { uint32_t v = 0xE22Cu; push32(c, v); }
    // 0fd231  push 7
    X86_AT(c, 0xfd231u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd233  call 0xe6cb0
    X86_AT(c, 0xfd233u);
    push32(c, 0xfd238u); f_000e6cb0(c); X86_RET(c, 0xfd238u);
    X86_TICK(c, 9);
    // 0fd238  push 7
    X86_AT(c, 0xfd238u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd23a  call 0xe6c68
    X86_AT(c, 0xfd23au);
    push32(c, 0xfd23fu); f_000e6c68(c); X86_RET(c, 0xfd23fu);
    X86_TICK(c, 11);
    // 0fd23f  mov esi, 0xd8dfc
    X86_AT(c, 0xfd23fu);
    c.r[6] = 0xD8DFCu;
    // 0fd244  mov ebx, 0xd8e10
    X86_AT(c, 0xfd244u);
    c.r[3] = 0xD8E10u;
    // 0fd249  jmp 0xfd3fa
    X86_AT(c, 0xfd249u);
    goto L_fd3fa;
L_fd24e:
    X86_TICK(c, 11);
    // 0fd24e  push 0xe234
    X86_AT(c, 0xfd24eu);
    { uint32_t v = 0xE234u; push32(c, v); }
    // 0fd253  push 7
    X86_AT(c, 0xfd253u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd255  call 0xe6cb0
    X86_AT(c, 0xfd255u);
    push32(c, 0xfd25au); f_000e6cb0(c); X86_RET(c, 0xfd25au);
    X86_TICK(c, 9);
    // 0fd25a  push 7
    X86_AT(c, 0xfd25au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd25c  call 0xe6c68
    X86_AT(c, 0xfd25cu);
    push32(c, 0xfd261u); f_000e6c68(c); X86_RET(c, 0xfd261u);
    X86_TICK(c, 11);
    // 0fd261  mov esi, 0xd8e24
    X86_AT(c, 0xfd261u);
    c.r[6] = 0xD8E24u;
    // 0fd266  mov ebx, 0xd8e38
    X86_AT(c, 0xfd266u);
    c.r[3] = 0xD8E38u;
    // 0fd26b  jmp 0xfd3fa
    X86_AT(c, 0xfd26bu);
    goto L_fd3fa;
L_fd270:
    X86_TICK(c, 11);
    // 0fd270  push 0xe23c
    X86_AT(c, 0xfd270u);
    { uint32_t v = 0xE23Cu; push32(c, v); }
    // 0fd275  push 7
    X86_AT(c, 0xfd275u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd277  call 0xe6cb0
    X86_AT(c, 0xfd277u);
    push32(c, 0xfd27cu); f_000e6cb0(c); X86_RET(c, 0xfd27cu);
    X86_TICK(c, 9);
    // 0fd27c  push 7
    X86_AT(c, 0xfd27cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd27e  call 0xe6c68
    X86_AT(c, 0xfd27eu);
    push32(c, 0xfd283u); f_000e6c68(c); X86_RET(c, 0xfd283u);
    X86_TICK(c, 11);
    // 0fd283  mov esi, 0xd8e4c
    X86_AT(c, 0xfd283u);
    c.r[6] = 0xD8E4Cu;
    // 0fd288  mov ebx, 0xd8e60
    X86_AT(c, 0xfd288u);
    c.r[3] = 0xD8E60u;
    // 0fd28d  jmp 0xfd3fa
    X86_AT(c, 0xfd28du);
    goto L_fd3fa;
L_fd292:
    X86_TICK(c, 11);
    // 0fd292  push 0xe244
    X86_AT(c, 0xfd292u);
    { uint32_t v = 0xE244u; push32(c, v); }
    // 0fd297  push 7
    X86_AT(c, 0xfd297u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd299  call 0xe6cb0
    X86_AT(c, 0xfd299u);
    push32(c, 0xfd29eu); f_000e6cb0(c); X86_RET(c, 0xfd29eu);
    X86_TICK(c, 9);
    // 0fd29e  push 7
    X86_AT(c, 0xfd29eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd2a0  call 0xe6c68
    X86_AT(c, 0xfd2a0u);
    push32(c, 0xfd2a5u); f_000e6c68(c); X86_RET(c, 0xfd2a5u);
    X86_TICK(c, 11);
    // 0fd2a5  mov esi, 0xd8e74
    X86_AT(c, 0xfd2a5u);
    c.r[6] = 0xD8E74u;
    // 0fd2aa  mov ebx, 0xd8e88
    X86_AT(c, 0xfd2aau);
    c.r[3] = 0xD8E88u;
    // 0fd2af  jmp 0xfd3fa
    X86_AT(c, 0xfd2afu);
    goto L_fd3fa;
L_fd2b4:
    X86_TICK(c, 11);
    // 0fd2b4  push 0xe24c
    X86_AT(c, 0xfd2b4u);
    { uint32_t v = 0xE24Cu; push32(c, v); }
    // 0fd2b9  push 7
    X86_AT(c, 0xfd2b9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd2bb  call 0xe6cb0
    X86_AT(c, 0xfd2bbu);
    push32(c, 0xfd2c0u); f_000e6cb0(c); X86_RET(c, 0xfd2c0u);
    X86_TICK(c, 9);
    // 0fd2c0  push 7
    X86_AT(c, 0xfd2c0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd2c2  call 0xe6c68
    X86_AT(c, 0xfd2c2u);
    push32(c, 0xfd2c7u); f_000e6c68(c); X86_RET(c, 0xfd2c7u);
    X86_TICK(c, 11);
    // 0fd2c7  mov esi, 0xd8e9c
    X86_AT(c, 0xfd2c7u);
    c.r[6] = 0xD8E9Cu;
    // 0fd2cc  mov ebx, 0xd8eb0
    X86_AT(c, 0xfd2ccu);
    c.r[3] = 0xD8EB0u;
    // 0fd2d1  jmp 0xfd3fa
    X86_AT(c, 0xfd2d1u);
    goto L_fd3fa;
L_fd2d6:
    X86_TICK(c, 11);
    // 0fd2d6  push 0xe254
    X86_AT(c, 0xfd2d6u);
    { uint32_t v = 0xE254u; push32(c, v); }
    // 0fd2db  push 7
    X86_AT(c, 0xfd2dbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd2dd  call 0xe6cb0
    X86_AT(c, 0xfd2ddu);
    push32(c, 0xfd2e2u); f_000e6cb0(c); X86_RET(c, 0xfd2e2u);
    X86_TICK(c, 9);
    // 0fd2e2  push 7
    X86_AT(c, 0xfd2e2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd2e4  call 0xe6c68
    X86_AT(c, 0xfd2e4u);
    push32(c, 0xfd2e9u); f_000e6c68(c); X86_RET(c, 0xfd2e9u);
    X86_TICK(c, 11);
    // 0fd2e9  mov esi, 0xd8ec4
    X86_AT(c, 0xfd2e9u);
    c.r[6] = 0xD8EC4u;
    // 0fd2ee  mov ebx, 0xd8ed8
    X86_AT(c, 0xfd2eeu);
    c.r[3] = 0xD8ED8u;
    // 0fd2f3  jmp 0xfd3fa
    X86_AT(c, 0xfd2f3u);
    goto L_fd3fa;
L_fd2f8:
    X86_TICK(c, 11);
    // 0fd2f8  push 0xe25c
    X86_AT(c, 0xfd2f8u);
    { uint32_t v = 0xE25Cu; push32(c, v); }
    // 0fd2fd  push 7
    X86_AT(c, 0xfd2fdu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd2ff  call 0xe6cb0
    X86_AT(c, 0xfd2ffu);
    push32(c, 0xfd304u); f_000e6cb0(c); X86_RET(c, 0xfd304u);
    X86_TICK(c, 9);
    // 0fd304  push 7
    X86_AT(c, 0xfd304u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd306  call 0xe6c68
    X86_AT(c, 0xfd306u);
    push32(c, 0xfd30bu); f_000e6c68(c); X86_RET(c, 0xfd30bu);
    X86_TICK(c, 11);
    // 0fd30b  mov esi, 0xd8eec
    X86_AT(c, 0xfd30bu);
    c.r[6] = 0xD8EECu;
    // 0fd310  mov ebx, 0xd8f00
    X86_AT(c, 0xfd310u);
    c.r[3] = 0xD8F00u;
    // 0fd315  jmp 0xfd3fa
    X86_AT(c, 0xfd315u);
    goto L_fd3fa;
L_fd31a:
    X86_TICK(c, 11);
    // 0fd31a  push 0xe264
    X86_AT(c, 0xfd31au);
    { uint32_t v = 0xE264u; push32(c, v); }
    // 0fd31f  push 7
    X86_AT(c, 0xfd31fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd321  call 0xe6cb0
    X86_AT(c, 0xfd321u);
    push32(c, 0xfd326u); f_000e6cb0(c); X86_RET(c, 0xfd326u);
    X86_TICK(c, 9);
    // 0fd326  push 7
    X86_AT(c, 0xfd326u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd328  call 0xe6c68
    X86_AT(c, 0xfd328u);
    push32(c, 0xfd32du); f_000e6c68(c); X86_RET(c, 0xfd32du);
    X86_TICK(c, 11);
    // 0fd32d  mov esi, 0xd8f14
    X86_AT(c, 0xfd32du);
    c.r[6] = 0xD8F14u;
    // 0fd332  mov ebx, 0xd8f28
    X86_AT(c, 0xfd332u);
    c.r[3] = 0xD8F28u;
    // 0fd337  jmp 0xfd3fa
    X86_AT(c, 0xfd337u);
    goto L_fd3fa;
L_fd33c:
    X86_TICK(c, 11);
    // 0fd33c  push 0xe26c
    X86_AT(c, 0xfd33cu);
    { uint32_t v = 0xE26Cu; push32(c, v); }
    // 0fd341  push 7
    X86_AT(c, 0xfd341u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd343  call 0xe6cb0
    X86_AT(c, 0xfd343u);
    push32(c, 0xfd348u); f_000e6cb0(c); X86_RET(c, 0xfd348u);
    X86_TICK(c, 9);
    // 0fd348  push 7
    X86_AT(c, 0xfd348u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd34a  call 0xe6c68
    X86_AT(c, 0xfd34au);
    push32(c, 0xfd34fu); f_000e6c68(c); X86_RET(c, 0xfd34fu);
    X86_TICK(c, 11);
    // 0fd34f  mov esi, 0xd8f3c
    X86_AT(c, 0xfd34fu);
    c.r[6] = 0xD8F3Cu;
    // 0fd354  mov ebx, 0xd8f50
    X86_AT(c, 0xfd354u);
    c.r[3] = 0xD8F50u;
    // 0fd359  jmp 0xfd3fa
    X86_AT(c, 0xfd359u);
    goto L_fd3fa;
L_fd35e:
    X86_TICK(c, 11);
    // 0fd35e  push 0xe274
    X86_AT(c, 0xfd35eu);
    { uint32_t v = 0xE274u; push32(c, v); }
    // 0fd363  push 7
    X86_AT(c, 0xfd363u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd365  call 0xe6cb0
    X86_AT(c, 0xfd365u);
    push32(c, 0xfd36au); f_000e6cb0(c); X86_RET(c, 0xfd36au);
    X86_TICK(c, 9);
    // 0fd36a  push 7
    X86_AT(c, 0xfd36au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd36c  call 0xe6c68
    X86_AT(c, 0xfd36cu);
    push32(c, 0xfd371u); f_000e6c68(c); X86_RET(c, 0xfd371u);
    X86_TICK(c, 11);
    // 0fd371  mov esi, 0xd8f64
    X86_AT(c, 0xfd371u);
    c.r[6] = 0xD8F64u;
    // 0fd376  mov ebx, 0xd8f78
    X86_AT(c, 0xfd376u);
    c.r[3] = 0xD8F78u;
    // 0fd37b  jmp 0xfd3fa
    X86_AT(c, 0xfd37bu);
    goto L_fd3fa;
L_fd380:
    X86_TICK(c, 11);
    // 0fd380  push 0xe27c
    X86_AT(c, 0xfd380u);
    { uint32_t v = 0xE27Cu; push32(c, v); }
    // 0fd385  push 7
    X86_AT(c, 0xfd385u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd387  call 0xe6cb0
    X86_AT(c, 0xfd387u);
    push32(c, 0xfd38cu); f_000e6cb0(c); X86_RET(c, 0xfd38cu);
    X86_TICK(c, 9);
    // 0fd38c  push 7
    X86_AT(c, 0xfd38cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd38e  call 0xe6c68
    X86_AT(c, 0xfd38eu);
    push32(c, 0xfd393u); f_000e6c68(c); X86_RET(c, 0xfd393u);
    X86_TICK(c, 11);
    // 0fd393  mov esi, 0xd8f8c
    X86_AT(c, 0xfd393u);
    c.r[6] = 0xD8F8Cu;
    // 0fd398  mov ebx, 0xd8fa0
    X86_AT(c, 0xfd398u);
    c.r[3] = 0xD8FA0u;
    // 0fd39d  jmp 0xfd3fa
    X86_AT(c, 0xfd39du);
    goto L_fd3fa;
L_fd39f:
    X86_TICK(c, 11);
    // 0fd39f  push 0xe284
    X86_AT(c, 0xfd39fu);
    { uint32_t v = 0xE284u; push32(c, v); }
    // 0fd3a4  push 7
    X86_AT(c, 0xfd3a4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd3a6  call 0xe6cb0
    X86_AT(c, 0xfd3a6u);
    push32(c, 0xfd3abu); f_000e6cb0(c); X86_RET(c, 0xfd3abu);
    X86_TICK(c, 9);
    // 0fd3ab  push 7
    X86_AT(c, 0xfd3abu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd3ad  call 0xe6c68
    X86_AT(c, 0xfd3adu);
    push32(c, 0xfd3b2u); f_000e6c68(c); X86_RET(c, 0xfd3b2u);
    X86_TICK(c, 11);
    // 0fd3b2  mov esi, 0xd8fb4
    X86_AT(c, 0xfd3b2u);
    c.r[6] = 0xD8FB4u;
    // 0fd3b7  mov ebx, 0xd8fc8
    X86_AT(c, 0xfd3b7u);
    c.r[3] = 0xD8FC8u;
    // 0fd3bc  jmp 0xfd3fa
    X86_AT(c, 0xfd3bcu);
    goto L_fd3fa;
L_fd3be:
    X86_TICK(c, 11);
    // 0fd3be  push 0xe28c
    X86_AT(c, 0xfd3beu);
    { uint32_t v = 0xE28Cu; push32(c, v); }
    // 0fd3c3  push 7
    X86_AT(c, 0xfd3c3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd3c5  call 0xe6cb0
    X86_AT(c, 0xfd3c5u);
    push32(c, 0xfd3cau); f_000e6cb0(c); X86_RET(c, 0xfd3cau);
    X86_TICK(c, 9);
    // 0fd3ca  push 7
    X86_AT(c, 0xfd3cau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd3cc  call 0xe6c68
    X86_AT(c, 0xfd3ccu);
    push32(c, 0xfd3d1u); f_000e6c68(c); X86_RET(c, 0xfd3d1u);
    X86_TICK(c, 11);
    // 0fd3d1  mov esi, 0xd8fdc
    X86_AT(c, 0xfd3d1u);
    c.r[6] = 0xD8FDCu;
    // 0fd3d6  mov ebx, 0xd8ff0
    X86_AT(c, 0xfd3d6u);
    c.r[3] = 0xD8FF0u;
    // 0fd3db  jmp 0xfd3fa
    X86_AT(c, 0xfd3dbu);
    goto L_fd3fa;
L_fd3dd:
    X86_TICK(c, 11);
    // 0fd3dd  push 0xe294
    X86_AT(c, 0xfd3ddu);
    { uint32_t v = 0xE294u; push32(c, v); }
    // 0fd3e2  push 7
    X86_AT(c, 0xfd3e2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd3e4  call 0xe6cb0
    X86_AT(c, 0xfd3e4u);
    push32(c, 0xfd3e9u); f_000e6cb0(c); X86_RET(c, 0xfd3e9u);
    X86_TICK(c, 9);
    // 0fd3e9  push 7
    X86_AT(c, 0xfd3e9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd3eb  call 0xe6c68
    X86_AT(c, 0xfd3ebu);
    push32(c, 0xfd3f0u); f_000e6c68(c); X86_RET(c, 0xfd3f0u);
    X86_TICK(c, 4);
    // 0fd3f0  mov esi, 0xd9004
    X86_AT(c, 0xfd3f0u);
    c.r[6] = 0xD9004u;
    // 0fd3f5  mov ebx, 0xd9018
    X86_AT(c, 0xfd3f5u);
    c.r[3] = 0xD9018u;
L_fd3fa:
    X86_TICK(c, 2);
    // 0fd3fa  add esp, 0xc
    X86_AT(c, 0xfd3fau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_fd3fd:
    X86_TICK(c, 2);
    // 0fd3fd  sub edi, edi
    X86_AT(c, 0xfd3fdu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_fd3ff:
    X86_TICK(c, 7);
    // 0fd3ff  cmp edi, 5
    X86_AT(c, 0xfd3ffu);
    (void)x86_sub(c, c.r[7], 0x5u, 0, 4);
    // 0fd402  jge 0xfd43a
    X86_AT(c, 0xfd402u);
    if (x86_cc(c, 13)) { goto L_fd43a; }
    X86_TICK(c, 14);
    // 0fd404  push dword ptr [esi + edi*4]
    X86_AT(c, 0xfd404u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7] * 4))); push32(c, v); }
    // 0fd407  push 7
    X86_AT(c, 0xfd407u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd409  call 0xe6cb0
    X86_AT(c, 0xfd409u);
    push32(c, 0xfd40eu); f_000e6cb0(c); X86_RET(c, 0xfd40eu);
    X86_TICK(c, 9);
    // 0fd40e  push 7
    X86_AT(c, 0xfd40eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd410  call 0xe6c68
    X86_AT(c, 0xfd410u);
    push32(c, 0xfd415u); f_000e6c68(c); X86_RET(c, 0xfd415u);
    X86_TICK(c, 9);
    // 0fd415  push 7
    X86_AT(c, 0xfd415u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd417  call 0xefeb0
    X86_AT(c, 0xfd417u);
    push32(c, 0xfd41cu); f_000efeb0(c); X86_RET(c, 0xfd41cu);
    X86_TICK(c, 14);
    // 0fd41c  push dword ptr [ebx + edi*4]
    X86_AT(c, 0xfd41cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[7] * 4))); push32(c, v); }
    // 0fd41f  push 7
    X86_AT(c, 0xfd41fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd421  call 0xe6cb0
    X86_AT(c, 0xfd421u);
    push32(c, 0xfd426u); f_000e6cb0(c); X86_RET(c, 0xfd426u);
    X86_TICK(c, 9);
    // 0fd426  push 7
    X86_AT(c, 0xfd426u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd428  call 0xe6c68
    X86_AT(c, 0xfd428u);
    push32(c, 0xfd42du); f_000e6c68(c); X86_RET(c, 0xfd42du);
    X86_TICK(c, 9);
    // 0fd42d  push 7
    X86_AT(c, 0xfd42du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd42f  call 0xefeb0
    X86_AT(c, 0xfd42fu);
    push32(c, 0xfd434u); f_000efeb0(c); X86_RET(c, 0xfd434u);
    X86_TICK(c, 11);
    // 0fd434  inc edi
    X86_AT(c, 0xfd434u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0fd435  add esp, 0x20
    X86_AT(c, 0xfd435u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0fd438  jmp 0xfd3ff
    X86_AT(c, 0xfd438u);
    X86_POLL(c, 0xfd3ffu); goto L_fd3ff;
L_fd43a:
    X86_TICK(c, 13);
    // 0fd43a  inc dword ptr [ebp - 4]
    X86_AT(c, 0xfd43au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0fd43d  jmp 0xfd164
    X86_AT(c, 0xfd43du);
    X86_POLL(c, 0xfd164u); goto L_fd164;
L_fd442:
    X86_TICK(c, 28);
    // 0fd442  pop edi
    X86_AT(c, 0xfd442u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0fd443  pop esi
    X86_AT(c, 0xfd443u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0fd444  pop ebx
    X86_AT(c, 0xfd444u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0fd445  leave 
    X86_AT(c, 0xfd445u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fd446  ret 
    X86_AT(c, 0xfd446u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfd14cu, "ran off the end of a function");
}
void f_000fd3fa(X86Cpu& c) {
    goto L_fd3fa;
L_fd164:
    X86_TICK(c, 11);
    // 0fd164  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xfd164u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0fd167  cmp eax, 0x11
    X86_AT(c, 0xfd167u);
    (void)x86_sub(c, c.r[0], 0x11u, 0, 4);
    // 0fd16a  jge 0xfd442
    X86_AT(c, 0xfd16au);
    if (x86_cc(c, 13)) { goto L_fd442; }
    X86_TICK(c, 10);
    // 0fd170  xchg edx, eax
    X86_AT(c, 0xfd170u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0fd171  cmp edx, 0x10
    X86_AT(c, 0xfd171u);
    (void)x86_sub(c, c.r[2], 0x10u, 0, 4);
    // 0fd174  ja 0xfd3fd
    X86_AT(c, 0xfd174u);
    if (x86_cc(c, 7)) { goto L_fd3fd; }
    X86_TICK(c, 7);
    // 0fd17a  jmp dword ptr cs:[edx*4 + 0xfd182]
    X86_AT(c, 0xfd17au);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xFD182u)));
      switch (t) {
      case 0xfd1c6u: goto L_fd1c6;
      case 0xfd1e8u: goto L_fd1e8;
      case 0xfd20au: goto L_fd20a;
      case 0xfd22cu: goto L_fd22c;
      case 0xfd24eu: goto L_fd24e;
      case 0xfd270u: goto L_fd270;
      case 0xfd292u: goto L_fd292;
      case 0xfd2b4u: goto L_fd2b4;
      case 0xfd2d6u: goto L_fd2d6;
      case 0xfd2f8u: goto L_fd2f8;
      case 0xfd31au: goto L_fd31a;
      case 0xfd33cu: goto L_fd33c;
      case 0xfd35eu: goto L_fd35e;
      case 0xfd380u: goto L_fd380;
      case 0xfd39fu: goto L_fd39f;
      case 0xfd3beu: goto L_fd3be;
      case 0xfd3ddu: goto L_fd3dd;
      default: x86_jump(c, t); return; } }
L_fd1c6:
    X86_TICK(c, 11);
    // 0fd1c6  push 0xe214
    X86_AT(c, 0xfd1c6u);
    { uint32_t v = 0xE214u; push32(c, v); }
    // 0fd1cb  push 7
    X86_AT(c, 0xfd1cbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd1cd  call 0xe6cb0
    X86_AT(c, 0xfd1cdu);
    push32(c, 0xfd1d2u); f_000e6cb0(c); X86_RET(c, 0xfd1d2u);
    X86_TICK(c, 9);
    // 0fd1d2  push 7
    X86_AT(c, 0xfd1d2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd1d4  call 0xe6c68
    X86_AT(c, 0xfd1d4u);
    push32(c, 0xfd1d9u); f_000e6c68(c); X86_RET(c, 0xfd1d9u);
    X86_TICK(c, 11);
    // 0fd1d9  mov esi, 0xd8d84
    X86_AT(c, 0xfd1d9u);
    c.r[6] = 0xD8D84u;
    // 0fd1de  mov ebx, 0xd8d98
    X86_AT(c, 0xfd1deu);
    c.r[3] = 0xD8D98u;
    // 0fd1e3  jmp 0xfd3fa
    X86_AT(c, 0xfd1e3u);
    goto L_fd3fa;
L_fd1e8:
    X86_TICK(c, 11);
    // 0fd1e8  push 0xe21c
    X86_AT(c, 0xfd1e8u);
    { uint32_t v = 0xE21Cu; push32(c, v); }
    // 0fd1ed  push 7
    X86_AT(c, 0xfd1edu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd1ef  call 0xe6cb0
    X86_AT(c, 0xfd1efu);
    push32(c, 0xfd1f4u); f_000e6cb0(c); X86_RET(c, 0xfd1f4u);
    X86_TICK(c, 9);
    // 0fd1f4  push 7
    X86_AT(c, 0xfd1f4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd1f6  call 0xe6c68
    X86_AT(c, 0xfd1f6u);
    push32(c, 0xfd1fbu); f_000e6c68(c); X86_RET(c, 0xfd1fbu);
    X86_TICK(c, 11);
    // 0fd1fb  mov esi, 0xd8dac
    X86_AT(c, 0xfd1fbu);
    c.r[6] = 0xD8DACu;
    // 0fd200  mov ebx, 0xd8dc0
    X86_AT(c, 0xfd200u);
    c.r[3] = 0xD8DC0u;
    // 0fd205  jmp 0xfd3fa
    X86_AT(c, 0xfd205u);
    goto L_fd3fa;
L_fd20a:
    X86_TICK(c, 11);
    // 0fd20a  push 0xe224
    X86_AT(c, 0xfd20au);
    { uint32_t v = 0xE224u; push32(c, v); }
    // 0fd20f  push 7
    X86_AT(c, 0xfd20fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd211  call 0xe6cb0
    X86_AT(c, 0xfd211u);
    push32(c, 0xfd216u); f_000e6cb0(c); X86_RET(c, 0xfd216u);
    X86_TICK(c, 9);
    // 0fd216  push 7
    X86_AT(c, 0xfd216u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd218  call 0xe6c68
    X86_AT(c, 0xfd218u);
    push32(c, 0xfd21du); f_000e6c68(c); X86_RET(c, 0xfd21du);
    X86_TICK(c, 11);
    // 0fd21d  mov esi, 0xd8dd4
    X86_AT(c, 0xfd21du);
    c.r[6] = 0xD8DD4u;
    // 0fd222  mov ebx, 0xd8de8
    X86_AT(c, 0xfd222u);
    c.r[3] = 0xD8DE8u;
    // 0fd227  jmp 0xfd3fa
    X86_AT(c, 0xfd227u);
    goto L_fd3fa;
L_fd22c:
    X86_TICK(c, 11);
    // 0fd22c  push 0xe22c
    X86_AT(c, 0xfd22cu);
    { uint32_t v = 0xE22Cu; push32(c, v); }
    // 0fd231  push 7
    X86_AT(c, 0xfd231u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd233  call 0xe6cb0
    X86_AT(c, 0xfd233u);
    push32(c, 0xfd238u); f_000e6cb0(c); X86_RET(c, 0xfd238u);
    X86_TICK(c, 9);
    // 0fd238  push 7
    X86_AT(c, 0xfd238u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd23a  call 0xe6c68
    X86_AT(c, 0xfd23au);
    push32(c, 0xfd23fu); f_000e6c68(c); X86_RET(c, 0xfd23fu);
    X86_TICK(c, 11);
    // 0fd23f  mov esi, 0xd8dfc
    X86_AT(c, 0xfd23fu);
    c.r[6] = 0xD8DFCu;
    // 0fd244  mov ebx, 0xd8e10
    X86_AT(c, 0xfd244u);
    c.r[3] = 0xD8E10u;
    // 0fd249  jmp 0xfd3fa
    X86_AT(c, 0xfd249u);
    goto L_fd3fa;
L_fd24e:
    X86_TICK(c, 11);
    // 0fd24e  push 0xe234
    X86_AT(c, 0xfd24eu);
    { uint32_t v = 0xE234u; push32(c, v); }
    // 0fd253  push 7
    X86_AT(c, 0xfd253u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd255  call 0xe6cb0
    X86_AT(c, 0xfd255u);
    push32(c, 0xfd25au); f_000e6cb0(c); X86_RET(c, 0xfd25au);
    X86_TICK(c, 9);
    // 0fd25a  push 7
    X86_AT(c, 0xfd25au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd25c  call 0xe6c68
    X86_AT(c, 0xfd25cu);
    push32(c, 0xfd261u); f_000e6c68(c); X86_RET(c, 0xfd261u);
    X86_TICK(c, 11);
    // 0fd261  mov esi, 0xd8e24
    X86_AT(c, 0xfd261u);
    c.r[6] = 0xD8E24u;
    // 0fd266  mov ebx, 0xd8e38
    X86_AT(c, 0xfd266u);
    c.r[3] = 0xD8E38u;
    // 0fd26b  jmp 0xfd3fa
    X86_AT(c, 0xfd26bu);
    goto L_fd3fa;
L_fd270:
    X86_TICK(c, 11);
    // 0fd270  push 0xe23c
    X86_AT(c, 0xfd270u);
    { uint32_t v = 0xE23Cu; push32(c, v); }
    // 0fd275  push 7
    X86_AT(c, 0xfd275u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd277  call 0xe6cb0
    X86_AT(c, 0xfd277u);
    push32(c, 0xfd27cu); f_000e6cb0(c); X86_RET(c, 0xfd27cu);
    X86_TICK(c, 9);
    // 0fd27c  push 7
    X86_AT(c, 0xfd27cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd27e  call 0xe6c68
    X86_AT(c, 0xfd27eu);
    push32(c, 0xfd283u); f_000e6c68(c); X86_RET(c, 0xfd283u);
    X86_TICK(c, 11);
    // 0fd283  mov esi, 0xd8e4c
    X86_AT(c, 0xfd283u);
    c.r[6] = 0xD8E4Cu;
    // 0fd288  mov ebx, 0xd8e60
    X86_AT(c, 0xfd288u);
    c.r[3] = 0xD8E60u;
    // 0fd28d  jmp 0xfd3fa
    X86_AT(c, 0xfd28du);
    goto L_fd3fa;
L_fd292:
    X86_TICK(c, 11);
    // 0fd292  push 0xe244
    X86_AT(c, 0xfd292u);
    { uint32_t v = 0xE244u; push32(c, v); }
    // 0fd297  push 7
    X86_AT(c, 0xfd297u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd299  call 0xe6cb0
    X86_AT(c, 0xfd299u);
    push32(c, 0xfd29eu); f_000e6cb0(c); X86_RET(c, 0xfd29eu);
    X86_TICK(c, 9);
    // 0fd29e  push 7
    X86_AT(c, 0xfd29eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd2a0  call 0xe6c68
    X86_AT(c, 0xfd2a0u);
    push32(c, 0xfd2a5u); f_000e6c68(c); X86_RET(c, 0xfd2a5u);
    X86_TICK(c, 11);
    // 0fd2a5  mov esi, 0xd8e74
    X86_AT(c, 0xfd2a5u);
    c.r[6] = 0xD8E74u;
    // 0fd2aa  mov ebx, 0xd8e88
    X86_AT(c, 0xfd2aau);
    c.r[3] = 0xD8E88u;
    // 0fd2af  jmp 0xfd3fa
    X86_AT(c, 0xfd2afu);
    goto L_fd3fa;
L_fd2b4:
    X86_TICK(c, 11);
    // 0fd2b4  push 0xe24c
    X86_AT(c, 0xfd2b4u);
    { uint32_t v = 0xE24Cu; push32(c, v); }
    // 0fd2b9  push 7
    X86_AT(c, 0xfd2b9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd2bb  call 0xe6cb0
    X86_AT(c, 0xfd2bbu);
    push32(c, 0xfd2c0u); f_000e6cb0(c); X86_RET(c, 0xfd2c0u);
    X86_TICK(c, 9);
    // 0fd2c0  push 7
    X86_AT(c, 0xfd2c0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd2c2  call 0xe6c68
    X86_AT(c, 0xfd2c2u);
    push32(c, 0xfd2c7u); f_000e6c68(c); X86_RET(c, 0xfd2c7u);
    X86_TICK(c, 11);
    // 0fd2c7  mov esi, 0xd8e9c
    X86_AT(c, 0xfd2c7u);
    c.r[6] = 0xD8E9Cu;
    // 0fd2cc  mov ebx, 0xd8eb0
    X86_AT(c, 0xfd2ccu);
    c.r[3] = 0xD8EB0u;
    // 0fd2d1  jmp 0xfd3fa
    X86_AT(c, 0xfd2d1u);
    goto L_fd3fa;
L_fd2d6:
    X86_TICK(c, 11);
    // 0fd2d6  push 0xe254
    X86_AT(c, 0xfd2d6u);
    { uint32_t v = 0xE254u; push32(c, v); }
    // 0fd2db  push 7
    X86_AT(c, 0xfd2dbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd2dd  call 0xe6cb0
    X86_AT(c, 0xfd2ddu);
    push32(c, 0xfd2e2u); f_000e6cb0(c); X86_RET(c, 0xfd2e2u);
    X86_TICK(c, 9);
    // 0fd2e2  push 7
    X86_AT(c, 0xfd2e2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd2e4  call 0xe6c68
    X86_AT(c, 0xfd2e4u);
    push32(c, 0xfd2e9u); f_000e6c68(c); X86_RET(c, 0xfd2e9u);
    X86_TICK(c, 11);
    // 0fd2e9  mov esi, 0xd8ec4
    X86_AT(c, 0xfd2e9u);
    c.r[6] = 0xD8EC4u;
    // 0fd2ee  mov ebx, 0xd8ed8
    X86_AT(c, 0xfd2eeu);
    c.r[3] = 0xD8ED8u;
    // 0fd2f3  jmp 0xfd3fa
    X86_AT(c, 0xfd2f3u);
    goto L_fd3fa;
L_fd2f8:
    X86_TICK(c, 11);
    // 0fd2f8  push 0xe25c
    X86_AT(c, 0xfd2f8u);
    { uint32_t v = 0xE25Cu; push32(c, v); }
    // 0fd2fd  push 7
    X86_AT(c, 0xfd2fdu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd2ff  call 0xe6cb0
    X86_AT(c, 0xfd2ffu);
    push32(c, 0xfd304u); f_000e6cb0(c); X86_RET(c, 0xfd304u);
    X86_TICK(c, 9);
    // 0fd304  push 7
    X86_AT(c, 0xfd304u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd306  call 0xe6c68
    X86_AT(c, 0xfd306u);
    push32(c, 0xfd30bu); f_000e6c68(c); X86_RET(c, 0xfd30bu);
    X86_TICK(c, 11);
    // 0fd30b  mov esi, 0xd8eec
    X86_AT(c, 0xfd30bu);
    c.r[6] = 0xD8EECu;
    // 0fd310  mov ebx, 0xd8f00
    X86_AT(c, 0xfd310u);
    c.r[3] = 0xD8F00u;
    // 0fd315  jmp 0xfd3fa
    X86_AT(c, 0xfd315u);
    goto L_fd3fa;
L_fd31a:
    X86_TICK(c, 11);
    // 0fd31a  push 0xe264
    X86_AT(c, 0xfd31au);
    { uint32_t v = 0xE264u; push32(c, v); }
    // 0fd31f  push 7
    X86_AT(c, 0xfd31fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd321  call 0xe6cb0
    X86_AT(c, 0xfd321u);
    push32(c, 0xfd326u); f_000e6cb0(c); X86_RET(c, 0xfd326u);
    X86_TICK(c, 9);
    // 0fd326  push 7
    X86_AT(c, 0xfd326u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd328  call 0xe6c68
    X86_AT(c, 0xfd328u);
    push32(c, 0xfd32du); f_000e6c68(c); X86_RET(c, 0xfd32du);
    X86_TICK(c, 11);
    // 0fd32d  mov esi, 0xd8f14
    X86_AT(c, 0xfd32du);
    c.r[6] = 0xD8F14u;
    // 0fd332  mov ebx, 0xd8f28
    X86_AT(c, 0xfd332u);
    c.r[3] = 0xD8F28u;
    // 0fd337  jmp 0xfd3fa
    X86_AT(c, 0xfd337u);
    goto L_fd3fa;
L_fd33c:
    X86_TICK(c, 11);
    // 0fd33c  push 0xe26c
    X86_AT(c, 0xfd33cu);
    { uint32_t v = 0xE26Cu; push32(c, v); }
    // 0fd341  push 7
    X86_AT(c, 0xfd341u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd343  call 0xe6cb0
    X86_AT(c, 0xfd343u);
    push32(c, 0xfd348u); f_000e6cb0(c); X86_RET(c, 0xfd348u);
    X86_TICK(c, 9);
    // 0fd348  push 7
    X86_AT(c, 0xfd348u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd34a  call 0xe6c68
    X86_AT(c, 0xfd34au);
    push32(c, 0xfd34fu); f_000e6c68(c); X86_RET(c, 0xfd34fu);
    X86_TICK(c, 11);
    // 0fd34f  mov esi, 0xd8f3c
    X86_AT(c, 0xfd34fu);
    c.r[6] = 0xD8F3Cu;
    // 0fd354  mov ebx, 0xd8f50
    X86_AT(c, 0xfd354u);
    c.r[3] = 0xD8F50u;
    // 0fd359  jmp 0xfd3fa
    X86_AT(c, 0xfd359u);
    goto L_fd3fa;
L_fd35e:
    X86_TICK(c, 11);
    // 0fd35e  push 0xe274
    X86_AT(c, 0xfd35eu);
    { uint32_t v = 0xE274u; push32(c, v); }
    // 0fd363  push 7
    X86_AT(c, 0xfd363u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd365  call 0xe6cb0
    X86_AT(c, 0xfd365u);
    push32(c, 0xfd36au); f_000e6cb0(c); X86_RET(c, 0xfd36au);
    X86_TICK(c, 9);
    // 0fd36a  push 7
    X86_AT(c, 0xfd36au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd36c  call 0xe6c68
    X86_AT(c, 0xfd36cu);
    push32(c, 0xfd371u); f_000e6c68(c); X86_RET(c, 0xfd371u);
    X86_TICK(c, 11);
    // 0fd371  mov esi, 0xd8f64
    X86_AT(c, 0xfd371u);
    c.r[6] = 0xD8F64u;
    // 0fd376  mov ebx, 0xd8f78
    X86_AT(c, 0xfd376u);
    c.r[3] = 0xD8F78u;
    // 0fd37b  jmp 0xfd3fa
    X86_AT(c, 0xfd37bu);
    goto L_fd3fa;
L_fd380:
    X86_TICK(c, 11);
    // 0fd380  push 0xe27c
    X86_AT(c, 0xfd380u);
    { uint32_t v = 0xE27Cu; push32(c, v); }
    // 0fd385  push 7
    X86_AT(c, 0xfd385u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd387  call 0xe6cb0
    X86_AT(c, 0xfd387u);
    push32(c, 0xfd38cu); f_000e6cb0(c); X86_RET(c, 0xfd38cu);
    X86_TICK(c, 9);
    // 0fd38c  push 7
    X86_AT(c, 0xfd38cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd38e  call 0xe6c68
    X86_AT(c, 0xfd38eu);
    push32(c, 0xfd393u); f_000e6c68(c); X86_RET(c, 0xfd393u);
    X86_TICK(c, 11);
    // 0fd393  mov esi, 0xd8f8c
    X86_AT(c, 0xfd393u);
    c.r[6] = 0xD8F8Cu;
    // 0fd398  mov ebx, 0xd8fa0
    X86_AT(c, 0xfd398u);
    c.r[3] = 0xD8FA0u;
    // 0fd39d  jmp 0xfd3fa
    X86_AT(c, 0xfd39du);
    goto L_fd3fa;
L_fd39f:
    X86_TICK(c, 11);
    // 0fd39f  push 0xe284
    X86_AT(c, 0xfd39fu);
    { uint32_t v = 0xE284u; push32(c, v); }
    // 0fd3a4  push 7
    X86_AT(c, 0xfd3a4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd3a6  call 0xe6cb0
    X86_AT(c, 0xfd3a6u);
    push32(c, 0xfd3abu); f_000e6cb0(c); X86_RET(c, 0xfd3abu);
    X86_TICK(c, 9);
    // 0fd3ab  push 7
    X86_AT(c, 0xfd3abu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd3ad  call 0xe6c68
    X86_AT(c, 0xfd3adu);
    push32(c, 0xfd3b2u); f_000e6c68(c); X86_RET(c, 0xfd3b2u);
    X86_TICK(c, 11);
    // 0fd3b2  mov esi, 0xd8fb4
    X86_AT(c, 0xfd3b2u);
    c.r[6] = 0xD8FB4u;
    // 0fd3b7  mov ebx, 0xd8fc8
    X86_AT(c, 0xfd3b7u);
    c.r[3] = 0xD8FC8u;
    // 0fd3bc  jmp 0xfd3fa
    X86_AT(c, 0xfd3bcu);
    goto L_fd3fa;
L_fd3be:
    X86_TICK(c, 11);
    // 0fd3be  push 0xe28c
    X86_AT(c, 0xfd3beu);
    { uint32_t v = 0xE28Cu; push32(c, v); }
    // 0fd3c3  push 7
    X86_AT(c, 0xfd3c3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd3c5  call 0xe6cb0
    X86_AT(c, 0xfd3c5u);
    push32(c, 0xfd3cau); f_000e6cb0(c); X86_RET(c, 0xfd3cau);
    X86_TICK(c, 9);
    // 0fd3ca  push 7
    X86_AT(c, 0xfd3cau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd3cc  call 0xe6c68
    X86_AT(c, 0xfd3ccu);
    push32(c, 0xfd3d1u); f_000e6c68(c); X86_RET(c, 0xfd3d1u);
    X86_TICK(c, 11);
    // 0fd3d1  mov esi, 0xd8fdc
    X86_AT(c, 0xfd3d1u);
    c.r[6] = 0xD8FDCu;
    // 0fd3d6  mov ebx, 0xd8ff0
    X86_AT(c, 0xfd3d6u);
    c.r[3] = 0xD8FF0u;
    // 0fd3db  jmp 0xfd3fa
    X86_AT(c, 0xfd3dbu);
    goto L_fd3fa;
L_fd3dd:
    X86_TICK(c, 11);
    // 0fd3dd  push 0xe294
    X86_AT(c, 0xfd3ddu);
    { uint32_t v = 0xE294u; push32(c, v); }
    // 0fd3e2  push 7
    X86_AT(c, 0xfd3e2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd3e4  call 0xe6cb0
    X86_AT(c, 0xfd3e4u);
    push32(c, 0xfd3e9u); f_000e6cb0(c); X86_RET(c, 0xfd3e9u);
    X86_TICK(c, 9);
    // 0fd3e9  push 7
    X86_AT(c, 0xfd3e9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd3eb  call 0xe6c68
    X86_AT(c, 0xfd3ebu);
    push32(c, 0xfd3f0u); f_000e6c68(c); X86_RET(c, 0xfd3f0u);
    X86_TICK(c, 4);
    // 0fd3f0  mov esi, 0xd9004
    X86_AT(c, 0xfd3f0u);
    c.r[6] = 0xD9004u;
    // 0fd3f5  mov ebx, 0xd9018
    X86_AT(c, 0xfd3f5u);
    c.r[3] = 0xD9018u;
L_fd3fa:
    X86_TICK(c, 2);
    // 0fd3fa  add esp, 0xc
    X86_AT(c, 0xfd3fau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_fd3fd:
    X86_TICK(c, 2);
    // 0fd3fd  sub edi, edi
    X86_AT(c, 0xfd3fdu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_fd3ff:
    X86_TICK(c, 7);
    // 0fd3ff  cmp edi, 5
    X86_AT(c, 0xfd3ffu);
    (void)x86_sub(c, c.r[7], 0x5u, 0, 4);
    // 0fd402  jge 0xfd43a
    X86_AT(c, 0xfd402u);
    if (x86_cc(c, 13)) { goto L_fd43a; }
    X86_TICK(c, 14);
    // 0fd404  push dword ptr [esi + edi*4]
    X86_AT(c, 0xfd404u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7] * 4))); push32(c, v); }
    // 0fd407  push 7
    X86_AT(c, 0xfd407u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd409  call 0xe6cb0
    X86_AT(c, 0xfd409u);
    push32(c, 0xfd40eu); f_000e6cb0(c); X86_RET(c, 0xfd40eu);
    X86_TICK(c, 9);
    // 0fd40e  push 7
    X86_AT(c, 0xfd40eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd410  call 0xe6c68
    X86_AT(c, 0xfd410u);
    push32(c, 0xfd415u); f_000e6c68(c); X86_RET(c, 0xfd415u);
    X86_TICK(c, 9);
    // 0fd415  push 7
    X86_AT(c, 0xfd415u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd417  call 0xefeb0
    X86_AT(c, 0xfd417u);
    push32(c, 0xfd41cu); f_000efeb0(c); X86_RET(c, 0xfd41cu);
    X86_TICK(c, 14);
    // 0fd41c  push dword ptr [ebx + edi*4]
    X86_AT(c, 0xfd41cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[7] * 4))); push32(c, v); }
    // 0fd41f  push 7
    X86_AT(c, 0xfd41fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd421  call 0xe6cb0
    X86_AT(c, 0xfd421u);
    push32(c, 0xfd426u); f_000e6cb0(c); X86_RET(c, 0xfd426u);
    X86_TICK(c, 9);
    // 0fd426  push 7
    X86_AT(c, 0xfd426u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd428  call 0xe6c68
    X86_AT(c, 0xfd428u);
    push32(c, 0xfd42du); f_000e6c68(c); X86_RET(c, 0xfd42du);
    X86_TICK(c, 9);
    // 0fd42d  push 7
    X86_AT(c, 0xfd42du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fd42f  call 0xefeb0
    X86_AT(c, 0xfd42fu);
    push32(c, 0xfd434u); f_000efeb0(c); X86_RET(c, 0xfd434u);
    X86_TICK(c, 11);
    // 0fd434  inc edi
    X86_AT(c, 0xfd434u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0fd435  add esp, 0x20
    X86_AT(c, 0xfd435u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0fd438  jmp 0xfd3ff
    X86_AT(c, 0xfd438u);
    X86_POLL(c, 0xfd3ffu); goto L_fd3ff;
L_fd43a:
    X86_TICK(c, 13);
    // 0fd43a  inc dword ptr [ebp - 4]
    X86_AT(c, 0xfd43au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0fd43d  jmp 0xfd164
    X86_AT(c, 0xfd43du);
    X86_POLL(c, 0xfd164u); goto L_fd164;
L_fd442:
    X86_TICK(c, 28);
    // 0fd442  pop edi
    X86_AT(c, 0xfd442u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0fd443  pop esi
    X86_AT(c, 0xfd443u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0fd444  pop ebx
    X86_AT(c, 0xfd444u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0fd445  leave 
    X86_AT(c, 0xfd445u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fd446  ret 
    X86_AT(c, 0xfd446u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfd3fau, "ran off the end of a function");
}
void f_000fd448(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0fd448  push ebp
    X86_AT(c, 0xfd448u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0fd449  mov ebp, esp
    X86_AT(c, 0xfd449u);
    c.r[5] = c.r[4];
    // 0fd44b  push ebx
    X86_AT(c, 0xfd44bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0fd44c  push esi
    X86_AT(c, 0xfd44cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0fd44d  push edi
    X86_AT(c, 0xfd44du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0fd44e  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xfd44eu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0fd451  call 0xfd8ac
    X86_AT(c, 0xfd451u);
    push32(c, 0xfd456u); f_000fd8ac(c); X86_RET(c, 0xfd456u);
    X86_TICK(c, 12);
    // 0fd456  cmp dword ptr [ebp + 0xc], 0
    X86_AT(c, 0xfd456u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0x0u, 0, 4);
    // 0fd45a  jne 0xfd537
    X86_AT(c, 0xfd45au);
    if (x86_cc(c, 5)) { goto L_fd537; }
    X86_TICK(c, 9);
    // 0fd460  mov edx, edi
    X86_AT(c, 0xfd460u);
    c.r[2] = c.r[7];
    // 0fd462  cmp edx, 0xd
    X86_AT(c, 0xfd462u);
    (void)x86_sub(c, c.r[2], 0xDu, 0, 4);
    // 0fd465  ja 0xfd679
    X86_AT(c, 0xfd465u);
    if (x86_cc(c, 7)) { goto L_fd679; }
    X86_TICK(c, 7);
    // 0fd46b  jmp dword ptr cs:[edx*4 + 0xfd473]
    X86_AT(c, 0xfd46bu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xFD473u)));
      switch (t) {
      case 0xfd4abu: goto L_fd4ab;
      case 0xfd4b5u: goto L_fd4b5;
      case 0xfd4bfu: goto L_fd4bf;
      case 0xfd4c9u: goto L_fd4c9;
      case 0xfd4d3u: goto L_fd4d3;
      case 0xfd4ddu: goto L_fd4dd;
      case 0xfd4e7u: goto L_fd4e7;
      case 0xfd4f1u: goto L_fd4f1;
      case 0xfd4fbu: goto L_fd4fb;
      case 0xfd505u: goto L_fd505;
      case 0xfd50fu: goto L_fd50f;
      case 0xfd519u: goto L_fd519;
      case 0xfd523u: goto L_fd523;
      case 0xfd52du: goto L_fd52d;
      default: x86_jump(c, t); return; } }
L_fd4ab:
    X86_TICK(c, 9);
    // 0fd4ab  mov esi, 0xd902c
    X86_AT(c, 0xfd4abu);
    c.r[6] = 0xD902Cu;
    // 0fd4b0  jmp 0xfd679
    X86_AT(c, 0xfd4b0u);
    goto L_fd679;
L_fd4b5:
    X86_TICK(c, 9);
    // 0fd4b5  mov esi, 0xd932c
    X86_AT(c, 0xfd4b5u);
    c.r[6] = 0xD932Cu;
    // 0fd4ba  jmp 0xfd679
    X86_AT(c, 0xfd4bau);
    goto L_fd679;
L_fd4bf:
    X86_TICK(c, 9);
    // 0fd4bf  mov esi, 0xd962c
    X86_AT(c, 0xfd4bfu);
    c.r[6] = 0xD962Cu;
    // 0fd4c4  jmp 0xfd679
    X86_AT(c, 0xfd4c4u);
    goto L_fd679;
L_fd4c9:
    X86_TICK(c, 9);
    // 0fd4c9  mov esi, 0xd992c
    X86_AT(c, 0xfd4c9u);
    c.r[6] = 0xD992Cu;
    // 0fd4ce  jmp 0xfd679
    X86_AT(c, 0xfd4ceu);
    goto L_fd679;
L_fd4d3:
    X86_TICK(c, 9);
    // 0fd4d3  mov esi, 0xd9c2c
    X86_AT(c, 0xfd4d3u);
    c.r[6] = 0xD9C2Cu;
    // 0fd4d8  jmp 0xfd679
    X86_AT(c, 0xfd4d8u);
    goto L_fd679;
L_fd4dd:
    X86_TICK(c, 9);
    // 0fd4dd  mov esi, 0xd9f2c
    X86_AT(c, 0xfd4ddu);
    c.r[6] = 0xD9F2Cu;
    // 0fd4e2  jmp 0xfd679
    X86_AT(c, 0xfd4e2u);
    goto L_fd679;
L_fd4e7:
    X86_TICK(c, 9);
    // 0fd4e7  mov esi, 0xda22c
    X86_AT(c, 0xfd4e7u);
    c.r[6] = 0xDA22Cu;
    // 0fd4ec  jmp 0xfd679
    X86_AT(c, 0xfd4ecu);
    goto L_fd679;
L_fd4f1:
    X86_TICK(c, 9);
    // 0fd4f1  mov esi, 0xda52c
    X86_AT(c, 0xfd4f1u);
    c.r[6] = 0xDA52Cu;
    // 0fd4f6  jmp 0xfd679
    X86_AT(c, 0xfd4f6u);
    goto L_fd679;
L_fd4fb:
    X86_TICK(c, 9);
    // 0fd4fb  mov esi, 0xda82c
    X86_AT(c, 0xfd4fbu);
    c.r[6] = 0xDA82Cu;
    // 0fd500  jmp 0xfd679
    X86_AT(c, 0xfd500u);
    goto L_fd679;
L_fd505:
    X86_TICK(c, 9);
    // 0fd505  mov esi, 0xdab2c
    X86_AT(c, 0xfd505u);
    c.r[6] = 0xDAB2Cu;
    // 0fd50a  jmp 0xfd679
    X86_AT(c, 0xfd50au);
    goto L_fd679;
L_fd50f:
    X86_TICK(c, 9);
    // 0fd50f  mov esi, 0xdae2c
    X86_AT(c, 0xfd50fu);
    c.r[6] = 0xDAE2Cu;
    // 0fd514  jmp 0xfd679
    X86_AT(c, 0xfd514u);
    goto L_fd679;
L_fd519:
    X86_TICK(c, 9);
    // 0fd519  mov esi, 0xdb12c
    X86_AT(c, 0xfd519u);
    c.r[6] = 0xDB12Cu;
    // 0fd51e  jmp 0xfd679
    X86_AT(c, 0xfd51eu);
    goto L_fd679;
L_fd523:
    X86_TICK(c, 9);
    // 0fd523  mov esi, 0xdb42c
    X86_AT(c, 0xfd523u);
    c.r[6] = 0xDB42Cu;
    // 0fd528  jmp 0xfd679
    X86_AT(c, 0xfd528u);
    goto L_fd679;
L_fd52d:
    X86_TICK(c, 9);
    // 0fd52d  mov esi, 0xdb72c
    X86_AT(c, 0xfd52du);
    c.r[6] = 0xDB72Cu;
    // 0fd532  jmp 0xfd679
    X86_AT(c, 0xfd532u);
    goto L_fd679;
L_fd537:
    X86_TICK(c, 12);
    // 0fd537  cmp dword ptr [ebp + 0xc], 1
    X86_AT(c, 0xfd537u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0x1u, 0, 4);
    // 0fd53b  jne 0xfd5c5
    X86_AT(c, 0xfd53bu);
    if (x86_cc(c, 5)) { goto L_fd5c5; }
    X86_TICK(c, 9);
    // 0fd541  lea edx, [edi - 1]
    X86_AT(c, 0xfd541u);
    c.r[2] = (uint32_t)(c.r[7] + 0xFFFFFFFFu);
    // 0fd544  cmp edx, 7
    X86_AT(c, 0xfd544u);
    (void)x86_sub(c, c.r[2], 0x7u, 0, 4);
    // 0fd547  ja 0xfd679
    X86_AT(c, 0xfd547u);
    if (x86_cc(c, 7)) { goto L_fd679; }
    X86_TICK(c, 7);
    // 0fd54d  jmp dword ptr cs:[edx*4 + 0xfd555]
    X86_AT(c, 0xfd54du);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xFD555u)));
      switch (t) {
      case 0xfd575u: goto L_fd575;
      case 0xfd57fu: goto L_fd57f;
      case 0xfd589u: goto L_fd589;
      case 0xfd593u: goto L_fd593;
      case 0xfd59du: goto L_fd59d;
      case 0xfd5a7u: goto L_fd5a7;
      case 0xfd5b1u: goto L_fd5b1;
      case 0xfd5bbu: goto L_fd5bb;
      default: x86_jump(c, t); return; } }
L_fd575:
    X86_TICK(c, 9);
    // 0fd575  mov esi, 0xdba2c
    X86_AT(c, 0xfd575u);
    c.r[6] = 0xDBA2Cu;
    // 0fd57a  jmp 0xfd679
    X86_AT(c, 0xfd57au);
    goto L_fd679;
L_fd57f:
    X86_TICK(c, 9);
    // 0fd57f  mov esi, 0xdbd2c
    X86_AT(c, 0xfd57fu);
    c.r[6] = 0xDBD2Cu;
    // 0fd584  jmp 0xfd679
    X86_AT(c, 0xfd584u);
    goto L_fd679;
L_fd589:
    X86_TICK(c, 9);
    // 0fd589  mov esi, 0xdc02c
    X86_AT(c, 0xfd589u);
    c.r[6] = 0xDC02Cu;
    // 0fd58e  jmp 0xfd679
    X86_AT(c, 0xfd58eu);
    goto L_fd679;
L_fd593:
    X86_TICK(c, 9);
    // 0fd593  mov esi, 0xdc32c
    X86_AT(c, 0xfd593u);
    c.r[6] = 0xDC32Cu;
    // 0fd598  jmp 0xfd679
    X86_AT(c, 0xfd598u);
    goto L_fd679;
L_fd59d:
    X86_TICK(c, 9);
    // 0fd59d  mov esi, 0xdc62c
    X86_AT(c, 0xfd59du);
    c.r[6] = 0xDC62Cu;
    // 0fd5a2  jmp 0xfd679
    X86_AT(c, 0xfd5a2u);
    goto L_fd679;
L_fd5a7:
    X86_TICK(c, 9);
    // 0fd5a7  mov esi, 0xdc92c
    X86_AT(c, 0xfd5a7u);
    c.r[6] = 0xDC92Cu;
    // 0fd5ac  jmp 0xfd679
    X86_AT(c, 0xfd5acu);
    goto L_fd679;
L_fd5b1:
    X86_TICK(c, 9);
    // 0fd5b1  mov esi, 0xdcc2c
    X86_AT(c, 0xfd5b1u);
    c.r[6] = 0xDCC2Cu;
    // 0fd5b6  jmp 0xfd679
    X86_AT(c, 0xfd5b6u);
    goto L_fd679;
L_fd5bb:
    X86_TICK(c, 9);
    // 0fd5bb  mov esi, 0xdcf2c
    X86_AT(c, 0xfd5bbu);
    c.r[6] = 0xDCF2Cu;
    // 0fd5c0  jmp 0xfd679
    X86_AT(c, 0xfd5c0u);
    goto L_fd679;
L_fd5c5:
    X86_TICK(c, 12);
    // 0fd5c5  cmp dword ptr [ebp + 0xc], 2
    X86_AT(c, 0xfd5c5u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0x2u, 0, 4);
    // 0fd5c9  jne 0xfd61e
    X86_AT(c, 0xfd5c9u);
    if (x86_cc(c, 5)) { goto L_fd61e; }
    X86_TICK(c, 9);
    // 0fd5cb  lea edx, [edi - 2]
    X86_AT(c, 0xfd5cbu);
    c.r[2] = (uint32_t)(c.r[7] + 0xFFFFFFFEu);
    // 0fd5ce  cmp edx, 7
    X86_AT(c, 0xfd5ceu);
    (void)x86_sub(c, c.r[2], 0x7u, 0, 4);
    // 0fd5d1  ja 0xfd679
    X86_AT(c, 0xfd5d1u);
    if (x86_cc(c, 7)) { goto L_fd679; }
    X86_TICK(c, 7);
    // 0fd5d7  jmp dword ptr cs:[edx*4 + 0xfd5df]
    X86_AT(c, 0xfd5d7u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xFD5DFu)));
      switch (t) {
      case 0xfd5ffu: goto L_fd5ff;
      case 0xfd609u: goto L_fd609;
      case 0xfd610u: goto L_fd610;
      case 0xfd617u: goto L_fd617;
      case 0xfd679u: goto L_fd679;
      default: x86_jump(c, t); return; } }
L_fd5ff:
    X86_TICK(c, 9);
    // 0fd5ff  mov esi, 0xdd22c
    X86_AT(c, 0xfd5ffu);
    c.r[6] = 0xDD22Cu;
    // 0fd604  jmp 0xfd679
    X86_AT(c, 0xfd604u);
    goto L_fd679;
L_fd609:
    X86_TICK(c, 9);
    // 0fd609  mov esi, 0xdd52c
    X86_AT(c, 0xfd609u);
    c.r[6] = 0xDD52Cu;
    // 0fd60e  jmp 0xfd679
    X86_AT(c, 0xfd60eu);
    goto L_fd679;
L_fd610:
    X86_TICK(c, 9);
    // 0fd610  mov esi, 0xdd82c
    X86_AT(c, 0xfd610u);
    c.r[6] = 0xDD82Cu;
    // 0fd615  jmp 0xfd679
    X86_AT(c, 0xfd615u);
    goto L_fd679;
L_fd617:
    X86_TICK(c, 9);
    // 0fd617  mov esi, 0xddb2c
    X86_AT(c, 0xfd617u);
    c.r[6] = 0xDDB2Cu;
    // 0fd61c  jmp 0xfd679
    X86_AT(c, 0xfd61cu);
    goto L_fd679;
L_fd61e:
    X86_TICK(c, 12);
    // 0fd61e  cmp dword ptr [ebp + 0xc], 3
    X86_AT(c, 0xfd61eu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0x3u, 0, 4);
    // 0fd622  jne 0xfd765
    X86_AT(c, 0xfd622u);
    if (x86_cc(c, 5)) { goto L_fd765; }
    X86_TICK(c, 9);
    // 0fd628  mov edx, edi
    X86_AT(c, 0xfd628u);
    c.r[2] = c.r[7];
    // 0fd62a  cmp edx, 9
    X86_AT(c, 0xfd62au);
    (void)x86_sub(c, c.r[2], 0x9u, 0, 4);
    // 0fd62d  ja 0xfd679
    X86_AT(c, 0xfd62du);
    if (x86_cc(c, 7)) { goto L_fd679; }
    X86_TICK(c, 7);
    // 0fd62f  jmp dword ptr cs:[edx*4 + 0xfd637]
    X86_AT(c, 0xfd62fu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xFD637u)));
      switch (t) {
      case 0xfd65fu: goto L_fd65f;
      case 0xfd666u: goto L_fd666;
      case 0xfd66du: goto L_fd66d;
      case 0xfd674u: goto L_fd674;
      case 0xfd679u: goto L_fd679;
      default: x86_jump(c, t); return; } }
L_fd65f:
    X86_TICK(c, 9);
    // 0fd65f  mov esi, 0xdde2c
    X86_AT(c, 0xfd65fu);
    c.r[6] = 0xDDE2Cu;
    // 0fd664  jmp 0xfd679
    X86_AT(c, 0xfd664u);
    goto L_fd679;
L_fd666:
    X86_TICK(c, 9);
    // 0fd666  mov esi, 0xde12c
    X86_AT(c, 0xfd666u);
    c.r[6] = 0xDE12Cu;
    // 0fd66b  jmp 0xfd679
    X86_AT(c, 0xfd66bu);
    goto L_fd679;
L_fd66d:
    X86_TICK(c, 9);
    // 0fd66d  mov esi, 0xde42c
    X86_AT(c, 0xfd66du);
    c.r[6] = 0xDE42Cu;
    // 0fd672  jmp 0xfd679
    X86_AT(c, 0xfd672u);
    goto L_fd679;
L_fd674:
    X86_TICK(c, 2);
    // 0fd674  mov esi, 0xde72c
    X86_AT(c, 0xfd674u);
    c.r[6] = 0xDE72Cu;
L_fd679:
    X86_TICK(c, 2);
    // 0fd679  sub ebx, ebx
    X86_AT(c, 0xfd679u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_fd67b:
    X86_TICK(c, 7);
    // 0fd67b  cmp ebx, 0x20
    X86_AT(c, 0xfd67bu);
    (void)x86_sub(c, c.r[3], 0x20u, 0, 4);
    // 0fd67e  jge 0xfd765
    X86_AT(c, 0xfd67eu);
    if (x86_cc(c, 13)) { goto L_fd765; }
    X86_TICK(c, 12);
    // 0fd684  cmp dword ptr [esi + ebx*4 + 0x180], 0
    X86_AT(c, 0xfd684u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[3] * 4 + 0x180u))), 0x0u, 0, 4);
    // 0fd68c  jne 0xfd6c9
    X86_AT(c, 0xfd68cu);
    if (x86_cc(c, 5)) { goto L_fd6c9; }
    X86_TICK(c, 25);
    // 0fd68e  sub eax, eax
    X86_AT(c, 0xfd68eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0fd690  mov byte ptr [ebx + 0xce3c8], al
    X86_AT(c, 0xfd690u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCE3C8u)), g8(c, 0));
    // 0fd696  mov byte ptr [ebx + 0xce3e8], al
    X86_AT(c, 0xfd696u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCE3E8u)), g8(c, 0));
    // 0fd69c  mov edx, 0xffffffff
    X86_AT(c, 0xfd69cu);
    c.r[2] = 0xFFFFFFFFu;
    // 0fd6a1  mov dword ptr [ebx*4 + 0xce408], edx
    X86_AT(c, 0xfd6a1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xCE408u)), c.r[2]);
    // 0fd6a8  mov dword ptr [ebx*4 + 0xce488], edx
    X86_AT(c, 0xfd6a8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xCE488u)), c.r[2]);
    // 0fd6af  mov dword ptr [ebx*4 + 0xce508], eax
    X86_AT(c, 0xfd6afu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xCE508u)), c.r[0]);
    // 0fd6b6  mov dword ptr [ebx*4 + 0xce588], eax
    X86_AT(c, 0xfd6b6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xCE588u)), c.r[0]);
    // 0fd6bd  mov dword ptr [ebx*4 + 0xce69c], edx
    X86_AT(c, 0xfd6bdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xCE69Cu)), c.r[2]);
    // 0fd6c4  jmp 0xfd75f
    X86_AT(c, 0xfd6c4u);
    goto L_fd75f;
L_fd6c9:
    X86_TICK(c, 19);
    // 0fd6c9  mov al, byte ptr [esi + ebx*4 + 0x180]
    X86_AT(c, 0xfd6c9u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[3] * 4 + 0x180u))));
    // 0fd6d0  mov byte ptr [ebx + 0xce3c8], al
    X86_AT(c, 0xfd6d0u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCE3C8u)), g8(c, 0));
    // 0fd6d6  mov al, byte ptr [esi + ebx*4 + 0x180]
    X86_AT(c, 0xfd6d6u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[3] * 4 + 0x180u))));
    // 0fd6dd  push eax
    X86_AT(c, 0xfd6ddu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0fd6de  call 0xe3724
    X86_AT(c, 0xfd6deu);
    push32(c, 0xfd6e3u); f_000e3724(c); X86_RET(c, 0xfd6e3u);
    X86_TICK(c, 37);
    // 0fd6e3  mov byte ptr [ebx + 0xce3e8], al
    X86_AT(c, 0xfd6e3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCE3E8u)), g8(c, 0));
    // 0fd6e9  mov eax, dword ptr [esi + ebx*4]
    X86_AT(c, 0xfd6e9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[3] * 4)));
    // 0fd6ec  mov dword ptr [ebx*4 + 0xce408], eax
    X86_AT(c, 0xfd6ecu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xCE408u)), c.r[0]);
    // 0fd6f3  mov eax, dword ptr [esi + ebx*4 + 0x80]
    X86_AT(c, 0xfd6f3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[3] * 4 + 0x80u)));
    // 0fd6fa  mov dword ptr [ebx*4 + 0xce488], eax
    X86_AT(c, 0xfd6fau);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xCE488u)), c.r[0]);
    // 0fd701  mov eax, dword ptr [esi + ebx*4 + 0x280]
    X86_AT(c, 0xfd701u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[3] * 4 + 0x280u)));
    // 0fd708  mov dword ptr [ebx*4 + 0xce508], eax
    X86_AT(c, 0xfd708u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xCE508u)), c.r[0]);
    // 0fd70f  sub eax, eax
    X86_AT(c, 0xfd70fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0fd711  mov dword ptr [ebx*4 + 0xce588], eax
    X86_AT(c, 0xfd711u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xCE588u)), c.r[0]);
    // 0fd718  add esp, 4
    X86_AT(c, 0xfd718u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0fd71b  mov edx, dword ptr [esi + ebx*4 + 0x280]
    X86_AT(c, 0xfd71bu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[3] * 4 + 0x280u)));
    // 0fd722  cmp edx, 0x80
    X86_AT(c, 0xfd722u);
    (void)x86_sub(c, c.r[2], 0x80u, 0, 4);
    // 0fd728  jl 0xfd73e
    X86_AT(c, 0xfd728u);
    if (x86_cc(c, 12)) { goto L_fd73e; }
    X86_TICK(c, 6);
    // 0fd72a  sub edx, 0x80
    X86_AT(c, 0xfd72au);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x80u, 0, 4); }
    // 0fd730  mov dword ptr [ebx*4 + 0xce588], edx
    X86_AT(c, 0xfd730u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xCE588u)), c.r[2]);
    // 0fd737  mov dword ptr [ebx*4 + 0xce508], eax
    X86_AT(c, 0xfd737u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xCE508u)), c.r[0]);
L_fd73e:
    X86_TICK(c, 13);
    // 0fd73e  mov al, byte ptr [ebx + 0xce3c8]
    X86_AT(c, 0xfd73eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCE3C8u))));
    // 0fd744  push eax
    X86_AT(c, 0xfd744u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0fd745  call 0xe35e0
    X86_AT(c, 0xfd745u);
    push32(c, 0xfd74au); f_000e35e0(c); X86_RET(c, 0xfd74au);
    X86_TICK(c, 6);
    // 0fd74a  mov dword ptr [ebx*4 + 0xce608], eax
    X86_AT(c, 0xfd74au);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xCE608u)), c.r[0]);
    // 0fd751  mov dword ptr [ebx*4 + 0xce69c], 0xffffffff
    X86_AT(c, 0xfd751u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xCE69Cu)), 0xFFFFFFFFu);
    // 0fd75c  add esp, 4
    X86_AT(c, 0xfd75cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_fd75f:
    X86_TICK(c, 9);
    // 0fd75f  inc ebx
    X86_AT(c, 0xfd75fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0fd760  jmp 0xfd67b
    X86_AT(c, 0xfd760u);
    X86_POLL(c, 0xfd67bu); goto L_fd67b;
L_fd765:
    X86_TICK(c, 28);
    // 0fd765  pop edi
    X86_AT(c, 0xfd765u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0fd766  pop esi
    X86_AT(c, 0xfd766u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0fd767  pop ebx
    X86_AT(c, 0xfd767u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0fd768  leave 
    X86_AT(c, 0xfd768u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fd769  ret 
    X86_AT(c, 0xfd769u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfd448u, "ran off the end of a function");
}
void f_000fd679(X86Cpu& c) {
    X86_TICK(c, 2);
    // 0fd679  sub ebx, ebx
    X86_AT(c, 0xfd679u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_fd67b:
    X86_TICK(c, 7);
    // 0fd67b  cmp ebx, 0x20
    X86_AT(c, 0xfd67bu);
    (void)x86_sub(c, c.r[3], 0x20u, 0, 4);
    // 0fd67e  jge 0xfd765
    X86_AT(c, 0xfd67eu);
    if (x86_cc(c, 13)) { goto L_fd765; }
    X86_TICK(c, 12);
    // 0fd684  cmp dword ptr [esi + ebx*4 + 0x180], 0
    X86_AT(c, 0xfd684u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[3] * 4 + 0x180u))), 0x0u, 0, 4);
    // 0fd68c  jne 0xfd6c9
    X86_AT(c, 0xfd68cu);
    if (x86_cc(c, 5)) { goto L_fd6c9; }
    X86_TICK(c, 25);
    // 0fd68e  sub eax, eax
    X86_AT(c, 0xfd68eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0fd690  mov byte ptr [ebx + 0xce3c8], al
    X86_AT(c, 0xfd690u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCE3C8u)), g8(c, 0));
    // 0fd696  mov byte ptr [ebx + 0xce3e8], al
    X86_AT(c, 0xfd696u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCE3E8u)), g8(c, 0));
    // 0fd69c  mov edx, 0xffffffff
    X86_AT(c, 0xfd69cu);
    c.r[2] = 0xFFFFFFFFu;
    // 0fd6a1  mov dword ptr [ebx*4 + 0xce408], edx
    X86_AT(c, 0xfd6a1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xCE408u)), c.r[2]);
    // 0fd6a8  mov dword ptr [ebx*4 + 0xce488], edx
    X86_AT(c, 0xfd6a8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xCE488u)), c.r[2]);
    // 0fd6af  mov dword ptr [ebx*4 + 0xce508], eax
    X86_AT(c, 0xfd6afu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xCE508u)), c.r[0]);
    // 0fd6b6  mov dword ptr [ebx*4 + 0xce588], eax
    X86_AT(c, 0xfd6b6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xCE588u)), c.r[0]);
    // 0fd6bd  mov dword ptr [ebx*4 + 0xce69c], edx
    X86_AT(c, 0xfd6bdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xCE69Cu)), c.r[2]);
    // 0fd6c4  jmp 0xfd75f
    X86_AT(c, 0xfd6c4u);
    goto L_fd75f;
L_fd6c9:
    X86_TICK(c, 19);
    // 0fd6c9  mov al, byte ptr [esi + ebx*4 + 0x180]
    X86_AT(c, 0xfd6c9u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[3] * 4 + 0x180u))));
    // 0fd6d0  mov byte ptr [ebx + 0xce3c8], al
    X86_AT(c, 0xfd6d0u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCE3C8u)), g8(c, 0));
    // 0fd6d6  mov al, byte ptr [esi + ebx*4 + 0x180]
    X86_AT(c, 0xfd6d6u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[3] * 4 + 0x180u))));
    // 0fd6dd  push eax
    X86_AT(c, 0xfd6ddu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0fd6de  call 0xe3724
    X86_AT(c, 0xfd6deu);
    push32(c, 0xfd6e3u); f_000e3724(c); X86_RET(c, 0xfd6e3u);
    X86_TICK(c, 37);
    // 0fd6e3  mov byte ptr [ebx + 0xce3e8], al
    X86_AT(c, 0xfd6e3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCE3E8u)), g8(c, 0));
    // 0fd6e9  mov eax, dword ptr [esi + ebx*4]
    X86_AT(c, 0xfd6e9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[3] * 4)));
    // 0fd6ec  mov dword ptr [ebx*4 + 0xce408], eax
    X86_AT(c, 0xfd6ecu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xCE408u)), c.r[0]);
    // 0fd6f3  mov eax, dword ptr [esi + ebx*4 + 0x80]
    X86_AT(c, 0xfd6f3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[3] * 4 + 0x80u)));
    // 0fd6fa  mov dword ptr [ebx*4 + 0xce488], eax
    X86_AT(c, 0xfd6fau);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xCE488u)), c.r[0]);
    // 0fd701  mov eax, dword ptr [esi + ebx*4 + 0x280]
    X86_AT(c, 0xfd701u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[3] * 4 + 0x280u)));
    // 0fd708  mov dword ptr [ebx*4 + 0xce508], eax
    X86_AT(c, 0xfd708u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xCE508u)), c.r[0]);
    // 0fd70f  sub eax, eax
    X86_AT(c, 0xfd70fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0fd711  mov dword ptr [ebx*4 + 0xce588], eax
    X86_AT(c, 0xfd711u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xCE588u)), c.r[0]);
    // 0fd718  add esp, 4
    X86_AT(c, 0xfd718u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0fd71b  mov edx, dword ptr [esi + ebx*4 + 0x280]
    X86_AT(c, 0xfd71bu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[3] * 4 + 0x280u)));
    // 0fd722  cmp edx, 0x80
    X86_AT(c, 0xfd722u);
    (void)x86_sub(c, c.r[2], 0x80u, 0, 4);
    // 0fd728  jl 0xfd73e
    X86_AT(c, 0xfd728u);
    if (x86_cc(c, 12)) { goto L_fd73e; }
    X86_TICK(c, 6);
    // 0fd72a  sub edx, 0x80
    X86_AT(c, 0xfd72au);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x80u, 0, 4); }
    // 0fd730  mov dword ptr [ebx*4 + 0xce588], edx
    X86_AT(c, 0xfd730u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xCE588u)), c.r[2]);
    // 0fd737  mov dword ptr [ebx*4 + 0xce508], eax
    X86_AT(c, 0xfd737u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xCE508u)), c.r[0]);
L_fd73e:
    X86_TICK(c, 13);
    // 0fd73e  mov al, byte ptr [ebx + 0xce3c8]
    X86_AT(c, 0xfd73eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCE3C8u))));
    // 0fd744  push eax
    X86_AT(c, 0xfd744u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0fd745  call 0xe35e0
    X86_AT(c, 0xfd745u);
    push32(c, 0xfd74au); f_000e35e0(c); X86_RET(c, 0xfd74au);
    X86_TICK(c, 6);
    // 0fd74a  mov dword ptr [ebx*4 + 0xce608], eax
    X86_AT(c, 0xfd74au);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xCE608u)), c.r[0]);
    // 0fd751  mov dword ptr [ebx*4 + 0xce69c], 0xffffffff
    X86_AT(c, 0xfd751u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xCE69Cu)), 0xFFFFFFFFu);
    // 0fd75c  add esp, 4
    X86_AT(c, 0xfd75cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_fd75f:
    X86_TICK(c, 9);
    // 0fd75f  inc ebx
    X86_AT(c, 0xfd75fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0fd760  jmp 0xfd67b
    X86_AT(c, 0xfd760u);
    X86_POLL(c, 0xfd67bu); goto L_fd67b;
L_fd765:
    X86_TICK(c, 28);
    // 0fd765  pop edi
    X86_AT(c, 0xfd765u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0fd766  pop esi
    X86_AT(c, 0xfd766u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0fd767  pop ebx
    X86_AT(c, 0xfd767u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0fd768  leave 
    X86_AT(c, 0xfd768u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fd769  ret 
    X86_AT(c, 0xfd769u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfd679u, "ran off the end of a function");
}
void f_000fd76c(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0fd76c  push ebp
    X86_AT(c, 0xfd76cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0fd76d  mov ebp, esp
    X86_AT(c, 0xfd76du);
    c.r[5] = c.r[4];
    // 0fd76f  push edi
    X86_AT(c, 0xfd76fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0fd770  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xfd770u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0fd773  cmp edx, 0xd
    X86_AT(c, 0xfd773u);
    (void)x86_sub(c, c.r[2], 0xDu, 0, 4);
    // 0fd776  ja 0xfd81c
    X86_AT(c, 0xfd776u);
    if (x86_cc(c, 7)) { goto L_fd81c; }
    X86_TICK(c, 7);
    // 0fd77c  jmp dword ptr cs:[edx*4 + 0xfd784]
    X86_AT(c, 0xfd77cu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xFD784u)));
      switch (t) {
      case 0xfd7bcu: goto L_fd7bc;
      case 0xfd7c3u: goto L_fd7c3;
      case 0xfd7cau: goto L_fd7ca;
      case 0xfd7d1u: goto L_fd7d1;
      case 0xfd7d8u: goto L_fd7d8;
      case 0xfd7dfu: goto L_fd7df;
      case 0xfd7e6u: goto L_fd7e6;
      case 0xfd7edu: goto L_fd7ed;
      case 0xfd7f4u: goto L_fd7f4;
      case 0xfd7fbu: goto L_fd7fb;
      case 0xfd802u: goto L_fd802;
      case 0xfd809u: goto L_fd809;
      case 0xfd810u: goto L_fd810;
      case 0xfd817u: goto L_fd817;
      default: x86_jump(c, t); return; } }
L_fd7bc:
    X86_TICK(c, 9);
    // 0fd7bc  mov edi, 0xd902c
    X86_AT(c, 0xfd7bcu);
    c.r[7] = 0xD902Cu;
    // 0fd7c1  jmp 0xfd81c
    X86_AT(c, 0xfd7c1u);
    goto L_fd81c;
L_fd7c3:
    X86_TICK(c, 9);
    // 0fd7c3  mov edi, 0xd932c
    X86_AT(c, 0xfd7c3u);
    c.r[7] = 0xD932Cu;
    // 0fd7c8  jmp 0xfd81c
    X86_AT(c, 0xfd7c8u);
    goto L_fd81c;
L_fd7ca:
    X86_TICK(c, 9);
    // 0fd7ca  mov edi, 0xd962c
    X86_AT(c, 0xfd7cau);
    c.r[7] = 0xD962Cu;
    // 0fd7cf  jmp 0xfd81c
    X86_AT(c, 0xfd7cfu);
    goto L_fd81c;
L_fd7d1:
    X86_TICK(c, 9);
    // 0fd7d1  mov edi, 0xd992c
    X86_AT(c, 0xfd7d1u);
    c.r[7] = 0xD992Cu;
    // 0fd7d6  jmp 0xfd81c
    X86_AT(c, 0xfd7d6u);
    goto L_fd81c;
L_fd7d8:
    X86_TICK(c, 9);
    // 0fd7d8  mov edi, 0xd9c2c
    X86_AT(c, 0xfd7d8u);
    c.r[7] = 0xD9C2Cu;
    // 0fd7dd  jmp 0xfd81c
    X86_AT(c, 0xfd7ddu);
    goto L_fd81c;
L_fd7df:
    X86_TICK(c, 9);
    // 0fd7df  mov edi, 0xd9f2c
    X86_AT(c, 0xfd7dfu);
    c.r[7] = 0xD9F2Cu;
    // 0fd7e4  jmp 0xfd81c
    X86_AT(c, 0xfd7e4u);
    goto L_fd81c;
L_fd7e6:
    X86_TICK(c, 9);
    // 0fd7e6  mov edi, 0xda22c
    X86_AT(c, 0xfd7e6u);
    c.r[7] = 0xDA22Cu;
    // 0fd7eb  jmp 0xfd81c
    X86_AT(c, 0xfd7ebu);
    goto L_fd81c;
L_fd7ed:
    X86_TICK(c, 9);
    // 0fd7ed  mov edi, 0xda52c
    X86_AT(c, 0xfd7edu);
    c.r[7] = 0xDA52Cu;
    // 0fd7f2  jmp 0xfd81c
    X86_AT(c, 0xfd7f2u);
    goto L_fd81c;
L_fd7f4:
    X86_TICK(c, 9);
    // 0fd7f4  mov edi, 0xda82c
    X86_AT(c, 0xfd7f4u);
    c.r[7] = 0xDA82Cu;
    // 0fd7f9  jmp 0xfd81c
    X86_AT(c, 0xfd7f9u);
    goto L_fd81c;
L_fd7fb:
    X86_TICK(c, 9);
    // 0fd7fb  mov edi, 0xdab2c
    X86_AT(c, 0xfd7fbu);
    c.r[7] = 0xDAB2Cu;
    // 0fd800  jmp 0xfd81c
    X86_AT(c, 0xfd800u);
    goto L_fd81c;
L_fd802:
    X86_TICK(c, 9);
    // 0fd802  mov edi, 0xdae2c
    X86_AT(c, 0xfd802u);
    c.r[7] = 0xDAE2Cu;
    // 0fd807  jmp 0xfd81c
    X86_AT(c, 0xfd807u);
    goto L_fd81c;
L_fd809:
    X86_TICK(c, 9);
    // 0fd809  mov edi, 0xdb12c
    X86_AT(c, 0xfd809u);
    c.r[7] = 0xDB12Cu;
    // 0fd80e  jmp 0xfd81c
    X86_AT(c, 0xfd80eu);
    goto L_fd81c;
L_fd810:
    X86_TICK(c, 9);
    // 0fd810  mov edi, 0xdb42c
    X86_AT(c, 0xfd810u);
    c.r[7] = 0xDB42Cu;
    // 0fd815  jmp 0xfd81c
    X86_AT(c, 0xfd815u);
    goto L_fd81c;
L_fd817:
    X86_TICK(c, 2);
    // 0fd817  mov edi, 0xdb72c
    X86_AT(c, 0xfd817u);
    c.r[7] = 0xDB72Cu;
L_fd81c:
    X86_TICK(c, 2);
    // 0fd81c  sub ecx, ecx
    X86_AT(c, 0xfd81cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
L_fd81e:
    X86_TICK(c, 7);
    // 0fd81e  cmp ecx, 0x20
    X86_AT(c, 0xfd81eu);
    (void)x86_sub(c, c.r[1], 0x20u, 0, 4);
    // 0fd821  jge 0xfd8a6
    X86_AT(c, 0xfd821u);
    if (x86_cc(c, 13)) { goto L_fd8a6; }
    X86_TICK(c, 12);
    // 0fd827  cmp byte ptr [ecx + 0xce3c8], 0
    X86_AT(c, 0xfd827u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[1] + 0xCE3C8u))), 0x0u, 0, 1);
    // 0fd82e  jne 0xfd853
    X86_AT(c, 0xfd82eu);
    if (x86_cc(c, 5)) { goto L_fd853; }
    X86_TICK(c, 19);
    // 0fd830  sub eax, eax
    X86_AT(c, 0xfd830u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0fd832  mov dword ptr [edi + ecx*4 + 0x180], eax
    X86_AT(c, 0xfd832u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + c.r[1] * 4 + 0x180u)), c.r[0]);
    // 0fd839  mov dword ptr [edi + ecx*4], eax
    X86_AT(c, 0xfd839u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + c.r[1] * 4)), c.r[0]);
    // 0fd83c  mov dword ptr [edi + ecx*4 + 0x80], eax
    X86_AT(c, 0xfd83cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + c.r[1] * 4 + 0x80u)), c.r[0]);
    // 0fd843  mov dword ptr [edi + ecx*4 + 0x280], eax
    X86_AT(c, 0xfd843u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + c.r[1] * 4 + 0x280u)), c.r[0]);
    // 0fd84a  mov dword ptr [edi + ecx*4 + 0x200], eax
    X86_AT(c, 0xfd84au);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + c.r[1] * 4 + 0x200u)), c.r[0]);
    // 0fd851  jmp 0xfd899
    X86_AT(c, 0xfd851u);
    goto L_fd899;
L_fd853:
    X86_TICK(c, 32);
    // 0fd853  movzx eax, byte ptr [ecx + 0xce3c8]
    X86_AT(c, 0xfd853u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[1] + 0xCE3C8u)));
    // 0fd85a  mov dword ptr [edi + ecx*4 + 0x180], eax
    X86_AT(c, 0xfd85au);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + c.r[1] * 4 + 0x180u)), c.r[0]);
    // 0fd861  mov eax, dword ptr [ecx*4 + 0xce408]
    X86_AT(c, 0xfd861u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] * 4 + 0xCE408u)));
    // 0fd868  mov dword ptr [edi + ecx*4], eax
    X86_AT(c, 0xfd868u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + c.r[1] * 4)), c.r[0]);
    // 0fd86b  mov eax, dword ptr [ecx*4 + 0xce488]
    X86_AT(c, 0xfd86bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] * 4 + 0xCE488u)));
    // 0fd872  mov dword ptr [edi + ecx*4 + 0x80], eax
    X86_AT(c, 0xfd872u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + c.r[1] * 4 + 0x80u)), c.r[0]);
    // 0fd879  mov eax, dword ptr [ecx*4 + 0xce508]
    X86_AT(c, 0xfd879u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] * 4 + 0xCE508u)));
    // 0fd880  mov dword ptr [edi + ecx*4 + 0x280], eax
    X86_AT(c, 0xfd880u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + c.r[1] * 4 + 0x280u)), c.r[0]);
    // 0fd887  mov dword ptr [edi + ecx*4 + 0x200], 0
    X86_AT(c, 0xfd887u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + c.r[1] * 4 + 0x200u)), 0x0u);
    // 0fd892  mov eax, dword ptr [ecx*4 + 0xce608]
    X86_AT(c, 0xfd892u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] * 4 + 0xCE608u)));
L_fd899:
    X86_TICK(c, 11);
    // 0fd899  mov dword ptr [edi + ecx*4 + 0x100], eax
    X86_AT(c, 0xfd899u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + c.r[1] * 4 + 0x100u)), c.r[0]);
    // 0fd8a0  inc ecx
    X86_AT(c, 0xfd8a0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0fd8a1  jmp 0xfd81e
    X86_AT(c, 0xfd8a1u);
    X86_POLL(c, 0xfd81eu); goto L_fd81e;
L_fd8a6:
    X86_TICK(c, 20);
    // 0fd8a6  pop edi
    X86_AT(c, 0xfd8a6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0fd8a7  leave 
    X86_AT(c, 0xfd8a7u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fd8a8  ret 
    X86_AT(c, 0xfd8a8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfd76cu, "ran off the end of a function");
}
void f_000fd8ac(X86Cpu& c) {
    X86_TICK(c, 2);
    // 0fd8ac  sub ecx, ecx
    X86_AT(c, 0xfd8acu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
L_fd8ae:
    X86_TICK(c, 7);
    // 0fd8ae  cmp ecx, 0x20
    X86_AT(c, 0xfd8aeu);
    (void)x86_sub(c, c.r[1], 0x20u, 0, 4);
    // 0fd8b1  jge 0xfd8ec
    X86_AT(c, 0xfd8b1u);
    if (x86_cc(c, 13)) { goto L_fd8ec; }
    X86_TICK(c, 27);
    // 0fd8b3  sub eax, eax
    X86_AT(c, 0xfd8b3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0fd8b5  mov byte ptr [ecx + 0xce3c8], al
    X86_AT(c, 0xfd8b5u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0xCE3C8u)), g8(c, 0));
    // 0fd8bb  mov byte ptr [ecx + 0xce3e8], al
    X86_AT(c, 0xfd8bbu);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0xCE3E8u)), g8(c, 0));
    // 0fd8c1  mov edx, 0xffffffff
    X86_AT(c, 0xfd8c1u);
    c.r[2] = 0xFFFFFFFFu;
    // 0fd8c6  mov dword ptr [ecx*4 + 0xce408], edx
    X86_AT(c, 0xfd8c6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] * 4 + 0xCE408u)), c.r[2]);
    // 0fd8cd  mov dword ptr [ecx*4 + 0xce488], edx
    X86_AT(c, 0xfd8cdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] * 4 + 0xCE488u)), c.r[2]);
    // 0fd8d4  mov dword ptr [ecx*4 + 0xce508], eax
    X86_AT(c, 0xfd8d4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] * 4 + 0xCE508u)), c.r[0]);
    // 0fd8db  mov dword ptr [ecx*4 + 0xce588], eax
    X86_AT(c, 0xfd8dbu);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] * 4 + 0xCE588u)), c.r[0]);
    // 0fd8e2  mov dword ptr [ecx*4 + 0xce69c], edx
    X86_AT(c, 0xfd8e2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] * 4 + 0xCE69Cu)), c.r[2]);
    // 0fd8e9  inc ecx
    X86_AT(c, 0xfd8e9u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0fd8ea  jmp 0xfd8ae
    X86_AT(c, 0xfd8eau);
    X86_POLL(c, 0xfd8aeu); goto L_fd8ae;
L_fd8ec:
    X86_TICK(c, 10);
    // 0fd8ec  ret 
    X86_AT(c, 0xfd8ecu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfd8acu, "ran off the end of a function");
}
void f_000fd933(X86Cpu& c) {
    X86_TICK(c, 51);
    // 0fd933  enter 0, 0
    X86_AT(c, 0xfd933u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0fd937  pushal 
    X86_AT(c, 0xfd937u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0fd938  pushfd 
    X86_AT(c, 0xfd938u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0fd939  cli 
    X86_AT(c, 0xfd939u);
    c.fl &= ~X86_IF;
    // 0fd93a  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xfd93au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0fd93d  mov dword ptr [0xdea2c], eax
    X86_AT(c, 0xfd93du);
    wr32((c.sbase[3] + (uint32_t)(0xDEA2Cu)), c.r[0]);
    // 0fd942  mov word ptr [0xdea30], ds
    X86_AT(c, 0xfd942u);
    wr16((c.sbase[3] + (uint32_t)(0xDEA30u)), (uint32_t)c.sreg[3]);
    // 0fd948  mov bl, 0
    X86_AT(c, 0xfd948u);
    s8(c, 3, 0x0u);
    // 0fd94a  xor ah, ah
    X86_AT(c, 0xfd94au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 0fd94c  call 0xfdf3c
    X86_AT(c, 0xfd94cu);
    push32(c, 0xfd951u); f_000fdf3c(c); X86_RET(c, 0xfd951u);
    X86_TICK(c, 7);
    // 0fd951  and al, al
    X86_AT(c, 0xfd951u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0fd953  jne 0xfd991
    X86_AT(c, 0xfd953u);
    if (x86_cc(c, 5)) { goto L_fd991; }
    X86_TICK(c, 7);
    // 0fd959  call 0xfdce8
    X86_AT(c, 0xfd959u);
    push32(c, 0xfd95eu); f_000fdce8(c); X86_RET(c, 0xfd95eu);
    X86_TICK(c, 7);
    // 0fd95e  and al, al
    X86_AT(c, 0xfd95eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0fd960  jne 0xfd991
    X86_AT(c, 0xfd960u);
    if (x86_cc(c, 5)) { goto L_fd991; }
    X86_TICK(c, 13);
    // 0fd966  mov bl, 0xff
    X86_AT(c, 0xfd966u);
    s8(c, 3, 0xFFu);
    // 0fd968  mov ecx, 1
    X86_AT(c, 0xfd968u);
    c.r[1] = 0x1u;
    // 0fd96d  mov ah, 0x15
    X86_AT(c, 0xfd96du);
    s8(c, 4, 0x15u);
    // 0fd96f  call 0xfdf3c
    X86_AT(c, 0xfd96fu);
    push32(c, 0xfd974u); f_000fdf3c(c); X86_RET(c, 0xfd974u);
    X86_TICK(c, 11);
    // 0fd974  mov bl, 0
    X86_AT(c, 0xfd974u);
    s8(c, 3, 0x0u);
    // 0fd976  mov ah, 0x15
    X86_AT(c, 0xfd976u);
    s8(c, 4, 0x15u);
    // 0fd978  call 0xfdf3c
    X86_AT(c, 0xfd978u);
    push32(c, 0xfd97du); f_000fdf3c(c); X86_RET(c, 0xfd97du);
    X86_TICK(c, 13);
    // 0fd97d  mov bl, 0xff
    X86_AT(c, 0xfd97du);
    s8(c, 3, 0xFFu);
    // 0fd97f  mov ecx, 0xdd
    X86_AT(c, 0xfd97fu);
    c.r[1] = 0xDDu;
    // 0fd984  mov ah, 0x16
    X86_AT(c, 0xfd984u);
    s8(c, 4, 0x16u);
    // 0fd986  call 0xfdf3c
    X86_AT(c, 0xfd986u);
    push32(c, 0xfd98bu); f_000fdf3c(c); X86_RET(c, 0xfd98bu);
    X86_TICK(c, 48);
    // 0fd98b  popfd 
    X86_AT(c, 0xfd98bu);
    x86_popfd(c, 4);
    // 0fd98c  popal 
    X86_AT(c, 0xfd98cu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0fd98d  leave 
    X86_AT(c, 0xfd98du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fd98e  xor eax, eax
    X86_AT(c, 0xfd98eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0fd990  ret 
    X86_AT(c, 0xfd990u);
    c.eip = pop32(c); return;
L_fd991:
    X86_TICK(c, 48);
    // 0fd991  popfd 
    X86_AT(c, 0xfd991u);
    x86_popfd(c, 4);
    // 0fd992  popal 
    X86_AT(c, 0xfd992u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0fd993  leave 
    X86_AT(c, 0xfd993u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fd994  mov eax, 1
    X86_AT(c, 0xfd994u);
    c.r[0] = 0x1u;
    // 0fd999  ret 
    X86_AT(c, 0xfd999u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfd933u, "ran off the end of a function");
}
void f_000fd99a(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0fd99a  enter 0, 0
    X86_AT(c, 0xfd99au);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0fd99e  push ebx
    X86_AT(c, 0xfd99eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0fd99f  mov bl, 0
    X86_AT(c, 0xfd99fu);
    s8(c, 3, 0x0u);
    // 0fd9a1  xor ah, ah
    X86_AT(c, 0xfd9a1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 0fd9a3  call 0xfdf3c
    X86_AT(c, 0xfd9a3u);
    push32(c, 0xfd9a8u); f_000fdf3c(c); X86_RET(c, 0xfd9a8u);
    X86_TICK(c, 13);
    // 0fd9a8  xor bh, bh
    X86_AT(c, 0xfd9a8u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v ^ g8(c, 7), 1)); }
    // 0fd9aa  mov dx, 0x2c00
    X86_AT(c, 0xfd9aau);
    s16(c, 2, 0x2C00u);
    // 0fd9ae  mov ah, 0x11
    X86_AT(c, 0xfd9aeu);
    s8(c, 4, 0x11u);
    // 0fd9b0  call 0xfdf3c
    X86_AT(c, 0xfd9b0u);
    push32(c, 0xfd9b5u); f_000fdf3c(c); X86_RET(c, 0xfd9b5u);
    X86_TICK(c, 7);
    // 0fd9b5  call 0xfdda2
    X86_AT(c, 0xfd9b5u);
    push32(c, 0xfd9bau); f_000fdda2(c); X86_RET(c, 0xfd9bau);
    X86_TICK(c, 22);
    // 0fd9ba  xor eax, eax
    X86_AT(c, 0xfd9bau);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0fd9bc  pop ebx
    X86_AT(c, 0xfd9bcu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0fd9bd  leave 
    X86_AT(c, 0xfd9bdu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fd9be  ret 
    X86_AT(c, 0xfd9beu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfd99au, "ran off the end of a function");
}
void f_000fd9f1(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0fd9f1  enter 0, 0
    X86_AT(c, 0xfd9f1u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0fd9f5  push ebx
    X86_AT(c, 0xfd9f5u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0fd9f6  push edx
    X86_AT(c, 0xfd9f6u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0fd9f7  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0xfd9f7u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0fd9fa  mov dl, byte ptr [ebp + 0xc]
    X86_AT(c, 0xfd9fau);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0fd9fd  mov ah, 3
    X86_AT(c, 0xfd9fdu);
    s8(c, 4, 0x3u);
    // 0fd9ff  call 0xfdf3c
    X86_AT(c, 0xfd9ffu);
    push32(c, 0xfda04u); f_000fdf3c(c); X86_RET(c, 0xfda04u);
    X86_TICK(c, 27);
    // 0fda04  movzx eax, al
    X86_AT(c, 0xfda04u);
    c.r[0] = g8(c, 0);
    // 0fda07  pop edx
    X86_AT(c, 0xfda07u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0fda08  pop ebx
    X86_AT(c, 0xfda08u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0fda09  leave 
    X86_AT(c, 0xfda09u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fda0a  ret 
    X86_AT(c, 0xfda0au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfd9f1u, "ran off the end of a function");
}
void f_000fda0b(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0fda0b  enter 0, 0
    X86_AT(c, 0xfda0bu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0fda0f  push ebx
    X86_AT(c, 0xfda0fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0fda10  push edx
    X86_AT(c, 0xfda10u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0fda11  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0xfda11u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0fda14  mov dh, byte ptr [ebp + 0xc]
    X86_AT(c, 0xfda14u);
    s8(c, 6, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0fda17  mov ah, 4
    X86_AT(c, 0xfda17u);
    s8(c, 4, 0x4u);
    // 0fda19  call 0xfdf3c
    X86_AT(c, 0xfda19u);
    push32(c, 0xfda1eu); f_000fdf3c(c); X86_RET(c, 0xfda1eu);
    X86_TICK(c, 27);
    // 0fda1e  movzx eax, al
    X86_AT(c, 0xfda1eu);
    c.r[0] = g8(c, 0);
    // 0fda21  pop edx
    X86_AT(c, 0xfda21u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0fda22  pop ebx
    X86_AT(c, 0xfda22u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0fda23  leave 
    X86_AT(c, 0xfda23u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fda24  ret 
    X86_AT(c, 0xfda24u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfda0bu, "ran off the end of a function");
}
void f_000fda25(X86Cpu& c) {
    X86_TICK(c, 33);
    // 0fda25  enter 0, 0
    X86_AT(c, 0xfda25u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0fda29  push ebx
    X86_AT(c, 0xfda29u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0fda2a  push edx
    X86_AT(c, 0xfda2au);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0fda2b  push esi
    X86_AT(c, 0xfda2bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0fda2c  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0xfda2cu);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0fda2f  mov dh, byte ptr [ebp + 0xc]
    X86_AT(c, 0xfda2fu);
    s8(c, 6, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0fda32  mov esi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xfda32u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0fda35  mov ah, 5
    X86_AT(c, 0xfda35u);
    s8(c, 4, 0x5u);
    // 0fda37  call 0xfdf3c
    X86_AT(c, 0xfda37u);
    push32(c, 0xfda3cu); f_000fdf3c(c); X86_RET(c, 0xfda3cu);
    X86_TICK(c, 31);
    // 0fda3c  movzx eax, al
    X86_AT(c, 0xfda3cu);
    c.r[0] = g8(c, 0);
    // 0fda3f  pop esi
    X86_AT(c, 0xfda3fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0fda40  pop edx
    X86_AT(c, 0xfda40u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0fda41  pop ebx
    X86_AT(c, 0xfda41u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0fda42  leave 
    X86_AT(c, 0xfda42u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fda43  ret 
    X86_AT(c, 0xfda43u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfda25u, "ran off the end of a function");
}
void f_000fdb15(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0fdb15  enter 0, 0
    X86_AT(c, 0xfdb15u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0fdb19  push ebx
    X86_AT(c, 0xfdb19u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0fdb1a  push ecx
    X86_AT(c, 0xfdb1au);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0fdb1b  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0xfdb1bu);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0fdb1e  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xfdb1eu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0fdb21  mov ah, 0x15
    X86_AT(c, 0xfdb21u);
    s8(c, 4, 0x15u);
    // 0fdb23  call 0xfdf3c
    X86_AT(c, 0xfdb23u);
    push32(c, 0xfdb28u); f_000fdf3c(c); X86_RET(c, 0xfdb28u);
    X86_TICK(c, 27);
    // 0fdb28  movzx eax, al
    X86_AT(c, 0xfdb28u);
    c.r[0] = g8(c, 0);
    // 0fdb2b  pop ecx
    X86_AT(c, 0xfdb2bu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 0fdb2c  pop ebx
    X86_AT(c, 0xfdb2cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0fdb2d  leave 
    X86_AT(c, 0xfdb2du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fdb2e  ret 
    X86_AT(c, 0xfdb2eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfdb15u, "ran off the end of a function");
}
void f_000fdb49(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0fdb49  mov ah, 0x17
    X86_AT(c, 0xfdb49u);
    s8(c, 4, 0x17u);
    // 0fdb4b  call 0xfdf3c
    X86_AT(c, 0xfdb4bu);
    push32(c, 0xfdb50u); f_000fdf3c(c); X86_RET(c, 0xfdb50u);
    X86_TICK(c, 13);
    // 0fdb50  movzx eax, al
    X86_AT(c, 0xfdb50u);
    c.r[0] = g8(c, 0);
    // 0fdb53  ret 
    X86_AT(c, 0xfdb53u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfdb49u, "ran off the end of a function");
}
void f_000fdb93(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0fdb93  enter 0, 0
    X86_AT(c, 0xfdb93u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0fdb97  push ebx
    X86_AT(c, 0xfdb97u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0fdb98  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0xfdb98u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0fdb9b  mov ah, 0x21
    X86_AT(c, 0xfdb9bu);
    s8(c, 4, 0x21u);
    // 0fdb9d  call 0xfdf3c
    X86_AT(c, 0xfdb9du);
    push32(c, 0xfdba2u); f_000fdf3c(c); X86_RET(c, 0xfdba2u);
    X86_TICK(c, 23);
    // 0fdba2  movzx eax, al
    X86_AT(c, 0xfdba2u);
    c.r[0] = g8(c, 0);
    // 0fdba5  pop ebx
    X86_AT(c, 0xfdba5u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0fdba6  leave 
    X86_AT(c, 0xfdba6u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fdba7  ret 
    X86_AT(c, 0xfdba7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfdb93u, "ran off the end of a function");
}
void f_000fdba8(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0fdba8  enter 0, 0
    X86_AT(c, 0xfdba8u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0fdbac  push esi
    X86_AT(c, 0xfdbacu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0fdbad  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0xfdbadu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0fdbb0  mov ah, 0x22
    X86_AT(c, 0xfdbb0u);
    s8(c, 4, 0x22u);
    // 0fdbb2  call 0xfdf3c
    X86_AT(c, 0xfdbb2u);
    push32(c, 0xfdbb7u); f_000fdf3c(c); X86_RET(c, 0xfdbb7u);
    X86_TICK(c, 23);
    // 0fdbb7  movzx eax, al
    X86_AT(c, 0xfdbb7u);
    c.r[0] = g8(c, 0);
    // 0fdbba  pop esi
    X86_AT(c, 0xfdbbau);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0fdbbb  leave 
    X86_AT(c, 0xfdbbbu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fdbbc  ret 
    X86_AT(c, 0xfdbbcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfdba8u, "ran off the end of a function");
}
void f_000fdbbd(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0fdbbd  enter 0, 0
    X86_AT(c, 0xfdbbdu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0fdbc1  push edx
    X86_AT(c, 0xfdbc1u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0fdbc2  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xfdbc2u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0fdbc5  mov ah, 0x23
    X86_AT(c, 0xfdbc5u);
    s8(c, 4, 0x23u);
    // 0fdbc7  call 0xfdf3c
    X86_AT(c, 0xfdbc7u);
    push32(c, 0xfdbccu); f_000fdf3c(c); X86_RET(c, 0xfdbccu);
    X86_TICK(c, 23);
    // 0fdbcc  movzx eax, al
    X86_AT(c, 0xfdbccu);
    c.r[0] = g8(c, 0);
    // 0fdbcf  pop edx
    X86_AT(c, 0xfdbcfu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0fdbd0  leave 
    X86_AT(c, 0xfdbd0u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fdbd1  ret 
    X86_AT(c, 0xfdbd1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfdbbdu, "ran off the end of a function");
}
void f_000fdbd2(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0fdbd2  enter 0, 0
    X86_AT(c, 0xfdbd2u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0fdbd6  push ebx
    X86_AT(c, 0xfdbd6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0fdbd7  push ecx
    X86_AT(c, 0xfdbd7u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0fdbd8  push edx
    X86_AT(c, 0xfdbd8u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0fdbd9  push esi
    X86_AT(c, 0xfdbd9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0fdbda  xor bl, bl
    X86_AT(c, 0xfdbdau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v ^ g8(c, 3), 1)); }
    // 0fdbdc  mov ah, 0x16
    X86_AT(c, 0xfdbdcu);
    s8(c, 4, 0x16u);
    // 0fdbde  call 0xfdf3c
    X86_AT(c, 0xfdbdeu);
    push32(c, 0xfdbe3u); f_000fdf3c(c); X86_RET(c, 0xfdbe3u);
    X86_TICK(c, 25);
    // 0fdbe3  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xfdbe3u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0fdbe6  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xfdbe6u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0fdbe9  mov ecx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xfdbe9u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0fdbec  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0xfdbecu);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 0fdbef  mov ah, 0x24
    X86_AT(c, 0xfdbefu);
    s8(c, 4, 0x24u);
    // 0fdbf1  call 0xfdf3c
    X86_AT(c, 0xfdbf1u);
    push32(c, 0xfdbf6u); f_000fdf3c(c); X86_RET(c, 0xfdbf6u);
    X86_TICK(c, 14);
    // 0fdbf6  movzx eax, al
    X86_AT(c, 0xfdbf6u);
    c.r[0] = g8(c, 0);
    // 0fdbf9  push eax
    X86_AT(c, 0xfdbf9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0fdbfa  mov ah, 0x18
    X86_AT(c, 0xfdbfau);
    s8(c, 4, 0x18u);
    // 0fdbfc  call 0xfdf3c
    X86_AT(c, 0xfdbfcu);
    push32(c, 0xfdc01u); f_000fdf3c(c); X86_RET(c, 0xfdc01u);
    X86_TICK(c, 36);
    // 0fdc01  pop eax
    X86_AT(c, 0xfdc01u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0fdc02  pop esi
    X86_AT(c, 0xfdc02u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0fdc03  pop edx
    X86_AT(c, 0xfdc03u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0fdc04  pop ecx
    X86_AT(c, 0xfdc04u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 0fdc05  pop ebx
    X86_AT(c, 0xfdc05u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0fdc06  leave 
    X86_AT(c, 0xfdc06u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fdc07  ret 
    X86_AT(c, 0xfdc07u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfdbd2u, "ran off the end of a function");
}
void f_000fdc2c(X86Cpu& c) {
    X86_TICK(c, 37);
    // 0fdc2c  enter 0, 0
    X86_AT(c, 0xfdc2cu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0fdc30  push ebx
    X86_AT(c, 0xfdc30u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0fdc31  push edx
    X86_AT(c, 0xfdc31u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0fdc32  push esi
    X86_AT(c, 0xfdc32u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0fdc33  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0xfdc33u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0fdc36  mov dh, byte ptr [ebp + 0xc]
    X86_AT(c, 0xfdc36u);
    s8(c, 6, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0fdc39  mov dl, byte ptr [ebp + 0x10]
    X86_AT(c, 0xfdc39u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 0fdc3c  mov esi, dword ptr [ebp + 0x14]
    X86_AT(c, 0xfdc3cu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0fdc3f  mov ah, 0x25
    X86_AT(c, 0xfdc3fu);
    s8(c, 4, 0x25u);
    // 0fdc41  call 0xfdf3c
    X86_AT(c, 0xfdc41u);
    push32(c, 0xfdc46u); f_000fdf3c(c); X86_RET(c, 0xfdc46u);
    X86_TICK(c, 31);
    // 0fdc46  movzx eax, al
    X86_AT(c, 0xfdc46u);
    c.r[0] = g8(c, 0);
    // 0fdc49  pop esi
    X86_AT(c, 0xfdc49u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0fdc4a  pop edx
    X86_AT(c, 0xfdc4au);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0fdc4b  pop ebx
    X86_AT(c, 0xfdc4bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0fdc4c  leave 
    X86_AT(c, 0xfdc4cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fdc4d  ret 
    X86_AT(c, 0xfdc4du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfdc2cu, "ran off the end of a function");
}
void f_000fdc59(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0fdc59  enter 0, 0
    X86_AT(c, 0xfdc59u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0fdc5d  push ebx
    X86_AT(c, 0xfdc5du);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0fdc5e  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0xfdc5eu);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0fdc61  mov ah, 0x27
    X86_AT(c, 0xfdc61u);
    s8(c, 4, 0x27u);
    // 0fdc63  call 0xfdf3c
    X86_AT(c, 0xfdc63u);
    push32(c, 0xfdc68u); f_000fdf3c(c); X86_RET(c, 0xfdc68u);
    X86_TICK(c, 23);
    // 0fdc68  movzx eax, al
    X86_AT(c, 0xfdc68u);
    c.r[0] = g8(c, 0);
    // 0fdc6b  pop ebx
    X86_AT(c, 0xfdc6bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0fdc6c  leave 
    X86_AT(c, 0xfdc6cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fdc6d  ret 
    X86_AT(c, 0xfdc6du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfdc59u, "ran off the end of a function");
}
void f_000fdc6e(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0fdc6e  enter 0, 0
    X86_AT(c, 0xfdc6eu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0fdc72  push ebx
    X86_AT(c, 0xfdc72u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0fdc73  push edx
    X86_AT(c, 0xfdc73u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0fdc74  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0xfdc74u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0fdc77  mov ah, 0x28
    X86_AT(c, 0xfdc77u);
    s8(c, 4, 0x28u);
    // 0fdc79  call 0xfdf3c
    X86_AT(c, 0xfdc79u);
    push32(c, 0xfdc7eu); f_000fdf3c(c); X86_RET(c, 0xfdc7eu);
    X86_TICK(c, 27);
    // 0fdc7e  movsx eax, dl
    X86_AT(c, 0xfdc7eu);
    c.r[0] = (uint32_t)(int32_t)(int8_t)g8(c, 2);
    // 0fdc81  pop edx
    X86_AT(c, 0xfdc81u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0fdc82  pop ebx
    X86_AT(c, 0xfdc82u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0fdc83  leave 
    X86_AT(c, 0xfdc83u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fdc84  ret 
    X86_AT(c, 0xfdc84u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfdc6eu, "ran off the end of a function");
}
void f_000fdc90(X86Cpu& c) {
    X86_TICK(c, 30);
    // 0fdc90  enter 0, 0
    X86_AT(c, 0xfdc90u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0fdc94  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xfdc94u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0fdc97  mov dword ptr [0xdea3c], eax
    X86_AT(c, 0xfdc97u);
    wr32((c.sbase[3] + (uint32_t)(0xDEA3Cu)), c.r[0]);
    // 0fdc9c  xor eax, eax
    X86_AT(c, 0xfdc9cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0fdc9e  leave 
    X86_AT(c, 0xfdc9eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fdc9f  ret 
    X86_AT(c, 0xfdc9fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfdc90u, "ran off the end of a function");
}
void f_000fdca0(X86Cpu& c) {
    X86_TICK(c, 30);
    // 0fdca0  enter 0, 0
    X86_AT(c, 0xfdca0u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0fdca4  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xfdca4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0fdca7  mov dword ptr [0xdea40], eax
    X86_AT(c, 0xfdca7u);
    wr32((c.sbase[3] + (uint32_t)(0xDEA40u)), c.r[0]);
    // 0fdcac  xor eax, eax
    X86_AT(c, 0xfdcacu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0fdcae  leave 
    X86_AT(c, 0xfdcaeu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fdcaf  ret 
    X86_AT(c, 0xfdcafu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfdca0u, "ran off the end of a function");
}
void f_000fdcb0(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0fdcb0  mov eax, dword ptr [0xdea3c]
    X86_AT(c, 0xfdcb0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDEA3Cu)));
    // 0fdcb5  ret 
    X86_AT(c, 0xfdcb5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfdcb0u, "ran off the end of a function");
}
void f_000fdcb6(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0fdcb6  mov eax, dword ptr [0xdea40]
    X86_AT(c, 0xfdcb6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDEA40u)));
    // 0fdcbb  ret 
    X86_AT(c, 0xfdcbbu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfdcb6u, "ran off the end of a function");
}
void f_000fdcbc(X86Cpu& c) {
    X86_TICK(c, 30);
    // 0fdcbc  enter 0, 0
    X86_AT(c, 0xfdcbcu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0fdcc0  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xfdcc0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0fdcc3  mov dword ptr [0xdea44], eax
    X86_AT(c, 0xfdcc3u);
    wr32((c.sbase[3] + (uint32_t)(0xDEA44u)), c.r[0]);
    // 0fdcc8  xor eax, eax
    X86_AT(c, 0xfdcc8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0fdcca  leave 
    X86_AT(c, 0xfdccau);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fdccb  ret 
    X86_AT(c, 0xfdccbu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfdcbcu, "ran off the end of a function");
}
void f_000fdccc(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0fdccc  mov eax, dword ptr [0xdea44]
    X86_AT(c, 0xfdcccu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDEA44u)));
    // 0fdcd1  ret 
    X86_AT(c, 0xfdcd1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfdcccu, "ran off the end of a function");
}
void f_000fdce8(X86Cpu& c) {
    X86_TICK(c, 87);
    // 0fdce8  push es
    X86_AT(c, 0xfdce8u);
    push32(c, c.sreg[0]);
    // 0fdce9  pushal 
    X86_AT(c, 0xfdce9u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0fdcea  pushfd 
    X86_AT(c, 0xfdceau);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0fdceb  cli 
    X86_AT(c, 0xfdcebu);
    c.fl &= ~X86_IF;
    // 0fdcec  mov word ptr [0xdea4f], 0
    X86_AT(c, 0xfdcecu);
    wr16((c.sbase[3] + (uint32_t)(0xDEA4Fu)), 0x0u);
    // 0fdcf5  mov byte ptr [0xdea4e], 0
    X86_AT(c, 0xfdcf5u);
    wr8((c.sbase[3] + (uint32_t)(0xDEA4Eu)), 0x0u);
    // 0fdcfc  mov byte ptr [0xdea4d], 0
    X86_AT(c, 0xfdcfcu);
    wr8((c.sbase[3] + (uint32_t)(0xDEA4Du)), 0x0u);
    // 0fdd03  lea eax, [0xfdf5f]
    X86_AT(c, 0xfdd03u);
    c.r[0] = (uint32_t)(0xFDF5Fu);
    // 0fdd09  mov dword ptr [0xdea3c], eax
    X86_AT(c, 0xfdd09u);
    wr32((c.sbase[3] + (uint32_t)(0xDEA3Cu)), c.r[0]);
    // 0fdd0e  mov dword ptr [0xdea44], eax
    X86_AT(c, 0xfdd0eu);
    wr32((c.sbase[3] + (uint32_t)(0xDEA44u)), c.r[0]);
    // 0fdd13  mov dword ptr [0xdea40], eax
    X86_AT(c, 0xfdd13u);
    wr32((c.sbase[3] + (uint32_t)(0xDEA40u)), c.r[0]);
    // 0fdd18  mov dword ptr [0xdea48], eax
    X86_AT(c, 0xfdd18u);
    wr32((c.sbase[3] + (uint32_t)(0xDEA48u)), c.r[0]);
    // 0fdd1d  mov byte ptr [0xdea4c], 0
    X86_AT(c, 0xfdd1du);
    wr8((c.sbase[3] + (uint32_t)(0xDEA4Cu)), 0x0u);
    // 0fdd24  mov cl, 0x4d
    X86_AT(c, 0xfdd24u);
    s8(c, 1, 0x4Du);
    // 0fdd26  mov ax, 0x2502
    X86_AT(c, 0xfdd26u);
    s16(c, 0, 0x2502u);
    // 0fdd2a  int 0x21
    X86_AT(c, 0xfdd2au);
    x86_int(c, 0x21, 0xfdd2cu);
    X86_TICK(c, 5);
    // 0fdd2c  jb 0xfdd98
    X86_AT(c, 0xfdd2cu);
    if (x86_cc(c, 2)) { goto L_fdd98; }
    X86_TICK(c, 47);
    // 0fdd32  mov eax, es
    X86_AT(c, 0xfdd32u);
    c.r[0] = (uint32_t)c.sreg[0];
    // 0fdd34  mov dword ptr [0xdea32], ebx
    X86_AT(c, 0xfdd34u);
    wr32((c.sbase[3] + (uint32_t)(0xDEA32u)), c.r[3]);
    // 0fdd3a  mov word ptr [0xdea36], ax
    X86_AT(c, 0xfdd3au);
    wr16((c.sbase[3] + (uint32_t)(0xDEA36u)), (c.r[0] & 0xFFFFu));
    // 0fdd40  mov cl, 0x4d
    X86_AT(c, 0xfdd40u);
    s8(c, 1, 0x4Du);
    // 0fdd42  mov ax, 0x2503
    X86_AT(c, 0xfdd42u);
    s16(c, 0, 0x2503u);
    // 0fdd46  int 0x21
    X86_AT(c, 0xfdd46u);
    x86_int(c, 0x21, 0xfdd48u);
    X86_TICK(c, 5);
    // 0fdd48  jb 0xfdd98
    X86_AT(c, 0xfdd48u);
    if (x86_cc(c, 2)) { goto L_fdd98; }
    X86_TICK(c, 51);
    // 0fdd4e  mov dword ptr [0xdea38], ebx
    X86_AT(c, 0xfdd4eu);
    wr32((c.sbase[3] + (uint32_t)(0xDEA38u)), c.r[3]);
    // 0fdd54  push ds
    X86_AT(c, 0xfdd54u);
    push32(c, c.sreg[3]);
    // 0fdd55  mov eax, cs
    X86_AT(c, 0xfdd55u);
    c.r[0] = (uint32_t)c.sreg[1];
    // 0fdd57  mov ds, eax
    X86_AT(c, 0xfdd57u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0fdd59  mov cl, 0x4d
    X86_AT(c, 0xfdd59u);
    s8(c, 1, 0x4Du);
    // 0fdd5b  lea edx, [0xfdde8]
    X86_AT(c, 0xfdd5bu);
    c.r[2] = (uint32_t)(0xFDDE8u);
    // 0fdd61  mov ax, 0x2506
    X86_AT(c, 0xfdd61u);
    s16(c, 0, 0x2506u);
    // 0fdd65  int 0x21
    X86_AT(c, 0xfdd65u);
    x86_int(c, 0x21, 0xfdd67u);
    X86_TICK(c, 9);
    // 0fdd67  pop ds
    X86_AT(c, 0xfdd67u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0fdd68  jb 0xfdd98
    X86_AT(c, 0xfdd68u);
    if (x86_cc(c, 2)) { goto L_fdd98; }
    X86_TICK(c, 11);
    // 0fdd6e  mov bl, 0
    X86_AT(c, 0xfdd6eu);
    s8(c, 3, 0x0u);
    // 0fdd70  mov ah, 0x15
    X86_AT(c, 0xfdd70u);
    s8(c, 4, 0x15u);
    // 0fdd72  call 0xfdf3c
    X86_AT(c, 0xfdd72u);
    push32(c, 0xfdd77u); f_000fdf3c(c); X86_RET(c, 0xfdd77u);
    X86_TICK(c, 11);
    // 0fdd77  mov bl, 0
    X86_AT(c, 0xfdd77u);
    s8(c, 3, 0x0u);
    // 0fdd79  mov ah, 0x16
    X86_AT(c, 0xfdd79u);
    s8(c, 4, 0x16u);
    // 0fdd7b  call 0xfdf3c
    X86_AT(c, 0xfdd7bu);
    push32(c, 0xfdd80u); f_000fdf3c(c); X86_RET(c, 0xfdd80u);
    X86_TICK(c, 19);
    // 0fdd80  in al, 0x12
    X86_AT(c, 0xfdd80u);
    s8(c, 0, x86_in(c, 0x12u, 1));
    // 0fdd82  jmp 0xfdd84
    X86_AT(c, 0xfdd82u);
    goto L_fdd84;
L_fdd84:
    X86_TICK(c, 7);
    // 0fdd84  jmp 0xfdd86
    X86_AT(c, 0xfdd84u);
    goto L_fdd86;
L_fdd86:
    X86_TICK(c, 7);
    // 0fdd86  jmp 0xfdd88
    X86_AT(c, 0xfdd86u);
    goto L_fdd88;
L_fdd88:
    X86_TICK(c, 66);
    // 0fdd88  mov dl, 0x20
    X86_AT(c, 0xfdd88u);
    s8(c, 2, 0x20u);
    // 0fdd8a  xor dl, 0xff
    X86_AT(c, 0xfdd8au);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v ^ 0xFFu, 1)); }
    // 0fdd8d  and al, dl
    X86_AT(c, 0xfdd8du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 2), 1)); }
    // 0fdd8f  out 0x12, al
    X86_AT(c, 0xfdd8fu);
    x86_out(c, 0x12u, 1, g8(c, 0));
    // 0fdd91  popfd 
    X86_AT(c, 0xfdd91u);
    x86_popfd(c, 4);
    // 0fdd92  popal 
    X86_AT(c, 0xfdd92u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0fdd93  pop es
    X86_AT(c, 0xfdd93u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0fdd94  xor eax, eax
    X86_AT(c, 0xfdd94u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0fdd96  clc 
    X86_AT(c, 0xfdd96u);
    c.fl &= ~X86_CF;
    // 0fdd97  ret 
    X86_AT(c, 0xfdd97u);
    c.eip = pop32(c); return;
L_fdd98:
    X86_TICK(c, 48);
    // 0fdd98  popfd 
    X86_AT(c, 0xfdd98u);
    x86_popfd(c, 4);
    // 0fdd99  popal 
    X86_AT(c, 0xfdd99u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0fdd9a  pop es
    X86_AT(c, 0xfdd9au);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0fdd9b  mov eax, 2
    X86_AT(c, 0xfdd9bu);
    c.r[0] = 0x2u;
    // 0fdda0  stc 
    X86_AT(c, 0xfdda0u);
    c.fl |= X86_CF;
    // 0fdda1  ret 
    X86_AT(c, 0xfdda1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfdce8u, "ran off the end of a function");
}
void f_000fdda2(X86Cpu& c) {
    X86_TICK(c, 37);
    // 0fdda2  pushal 
    X86_AT(c, 0xfdda2u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0fdda3  pushf 
    X86_AT(c, 0xfdda3u);
    push16(c, c.fl & 0xFFFFu);
    // 0fdda5  cli 
    X86_AT(c, 0xfdda5u);
    c.fl &= ~X86_IF;
    // 0fdda6  mov bl, 0
    X86_AT(c, 0xfdda6u);
    s8(c, 3, 0x0u);
    // 0fdda8  mov ah, 0x15
    X86_AT(c, 0xfdda8u);
    s8(c, 4, 0x15u);
    // 0fddaa  call 0xfdf3c
    X86_AT(c, 0xfddaau);
    push32(c, 0xfddafu); f_000fdf3c(c); X86_RET(c, 0xfddafu);
    X86_TICK(c, 11);
    // 0fddaf  mov bl, 0
    X86_AT(c, 0xfddafu);
    s8(c, 3, 0x0u);
    // 0fddb1  mov ah, 0x16
    X86_AT(c, 0xfddb1u);
    s8(c, 4, 0x16u);
    // 0fddb3  call 0xfdf3c
    X86_AT(c, 0xfddb3u);
    push32(c, 0xfddb8u); f_000fdf3c(c); X86_RET(c, 0xfddb8u);
    X86_TICK(c, 19);
    // 0fddb8  in al, 0x12
    X86_AT(c, 0xfddb8u);
    s8(c, 0, x86_in(c, 0x12u, 1));
    // 0fddba  jmp 0xfddbc
    X86_AT(c, 0xfddbau);
    goto L_fddbc;
L_fddbc:
    X86_TICK(c, 7);
    // 0fddbc  jmp 0xfddbe
    X86_AT(c, 0xfddbcu);
    goto L_fddbe;
L_fddbe:
    X86_TICK(c, 7);
    // 0fddbe  jmp 0xfddc0
    X86_AT(c, 0xfddbeu);
    goto L_fddc0;
L_fddc0:
    X86_TICK(c, 71);
    // 0fddc0  or al, 0x20
    X86_AT(c, 0xfddc0u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x20u, 1)); }
    // 0fddc2  out 0x12, al
    X86_AT(c, 0xfddc2u);
    x86_out(c, 0x12u, 1, g8(c, 0));
    // 0fddc4  push ds
    X86_AT(c, 0xfddc4u);
    push32(c, c.sreg[3]);
    // 0fddc5  mov cl, 0x4d
    X86_AT(c, 0xfddc5u);
    s8(c, 1, 0x4Du);
    // 0fddc7  mov edx, dword ptr [0xdea32]
    X86_AT(c, 0xfddc7u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xDEA32u)));
    // 0fddcd  mov ax, word ptr [0xdea36]
    X86_AT(c, 0xfddcdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xDEA36u))));
    // 0fddd3  mov ebx, dword ptr [0xdea38]
    X86_AT(c, 0xfddd3u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0xDEA38u)));
    // 0fddd9  mov ds, eax
    X86_AT(c, 0xfddd9u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0fdddb  mov ax, 0x2507
    X86_AT(c, 0xfdddbu);
    s16(c, 0, 0x2507u);
    // 0fdddf  int 0x21
    X86_AT(c, 0xfdddfu);
    x86_int(c, 0x21, 0xfdde1u);
    X86_TICK(c, 46);
    // 0fdde1  xor eax, eax
    X86_AT(c, 0xfdde1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0fdde3  pop ds
    X86_AT(c, 0xfdde3u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0fdde4  popf 
    X86_AT(c, 0xfdde4u);
    x86_popfd(c, 2);
    // 0fdde6  popal 
    X86_AT(c, 0xfdde6u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0fdde7  ret 
    X86_AT(c, 0xfdde7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfdda2u, "ran off the end of a function");
}
}
