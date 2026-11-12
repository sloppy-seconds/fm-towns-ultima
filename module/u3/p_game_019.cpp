#include "p_game_funcs.h"
namespace p_game {
void f_000ceeb8(X86Cpu& c) {
    X86_TICK(c, 35);
    // 0ceeb8  push ebp
    X86_AT(c, 0xceeb8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ceeb9  mov ebp, esp
    X86_AT(c, 0xceeb9u);
    c.r[5] = c.r[4];
    // 0ceebb  sub esp, 0x14
    X86_AT(c, 0xceebbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x14u, 0, 4); }
    // 0ceebe  push ebx
    X86_AT(c, 0xceebeu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ceebf  push esi
    X86_AT(c, 0xceebfu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ceec0  push edi
    X86_AT(c, 0xceec0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ceec1  sub eax, eax
    X86_AT(c, 0xceec1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ceec3  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xceec3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0ceec6  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xceec6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 0ceec9  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xceec9u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0ceecc  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xceeccu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0ceecf  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xceecfu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0ceed2  mov edx, dword ptr [0xabf7c]
    X86_AT(c, 0xceed2u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xABF7Cu)));
    // 0ceed8  cmp eax, edx
    X86_AT(c, 0xceed8u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0ceeda  je 0xceee7
    X86_AT(c, 0xceedau);
    if (x86_cc(c, 4)) { goto L_ceee7; }
    X86_TICK(c, 13);
    // 0ceedc  dec dword ptr [0xabf7c]
    X86_AT(c, 0xceedcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xABF7Cu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0ceee2  jmp 0xcf053
    X86_AT(c, 0xceee2u);
    goto L_cf053;
L_ceee7:
    X86_TICK(c, 2);
    // 0ceee7  sub edi, edi
    X86_AT(c, 0xceee7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_ceee9:
    X86_TICK(c, 7);
    // 0ceee9  cmp edi, 8
    X86_AT(c, 0xceee9u);
    (void)x86_sub(c, c.r[7], 0x8u, 0, 4);
    // 0ceeec  jge 0xcf053
    X86_AT(c, 0xceeecu);
    if (x86_cc(c, 13)) { goto L_cf053; }
    X86_TICK(c, 12);
    // 0ceef2  cmp dword ptr [edi*4 + 0xa49b5], 0
    X86_AT(c, 0xceef2u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA49B5u))), 0x0u, 0, 4);
    // 0ceefa  je 0xcf04d
    X86_AT(c, 0xceefau);
    if (x86_cc(c, 4)) { goto L_cf04d; }
    X86_TICK(c, 29);
    // 0cef00  lea eax, [ebp - 0x14]
    X86_AT(c, 0xcef00u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFECu);
    // 0cef03  push eax
    X86_AT(c, 0xcef03u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cef04  lea eax, [ebp - 0x10]
    X86_AT(c, 0xcef04u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 0cef07  push eax
    X86_AT(c, 0xcef07u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cef08  lea eax, [ebp - 0xc]
    X86_AT(c, 0xcef08u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0cef0b  push eax
    X86_AT(c, 0xcef0bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cef0c  lea eax, [ebp - 8]
    X86_AT(c, 0xcef0cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0cef0f  push eax
    X86_AT(c, 0xcef0fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cef10  lea ebx, [ebp - 4]
    X86_AT(c, 0xcef10u);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0cef13  push ebx
    X86_AT(c, 0xcef13u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cef14  push edi
    X86_AT(c, 0xcef14u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cef15  call 0xcec5c
    X86_AT(c, 0xcef15u);
    push32(c, 0xcef1au); x86_call_known(c, 0xcec5cu, f_000cec5c); X86_RET(c, 0xcef1au);
    X86_TICK(c, 9);
    // 0cef1a  add esp, 0x18
    X86_AT(c, 0xcef1au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0cef1d  and eax, eax
    X86_AT(c, 0xcef1du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cef1f  jne 0xcef2a
    X86_AT(c, 0xcef1fu);
    if (x86_cc(c, 5)) { goto L_cef2a; }
    X86_TICK(c, 14);
    // 0cef21  push dword ptr [ebx]
    X86_AT(c, 0xcef21u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3]))); push32(c, v); }
    // 0cef23  push 0
    X86_AT(c, 0xcef23u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cef25  jmp 0xcf045
    X86_AT(c, 0xcef25u);
    goto L_cf045;
L_cef2a:
    X86_TICK(c, 12);
    // 0cef2a  cmp dword ptr [ebp - 8], 0
    X86_AT(c, 0xcef2au);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x0u, 0, 4);
    // 0cef2e  jne 0xcef3a
    X86_AT(c, 0xcef2eu);
    if (x86_cc(c, 5)) { goto L_cef3a; }
    X86_TICK(c, 12);
    // 0cef30  cmp dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xcef30u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0x0u, 0, 4);
    // 0cef34  je 0xcf04d
    X86_AT(c, 0xcef34u);
    if (x86_cc(c, 4)) { goto L_cf04d; }
L_cef3a:
    X86_TICK(c, 12);
    // 0cef3a  cmp byte ptr [0xa4934], 0x95
    X86_AT(c, 0xcef3au);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xA4934u))), 0x95u, 0, 1);
    // 0cef41  jne 0xcefe4
    X86_AT(c, 0xcef41u);
    if (x86_cc(c, 5)) { goto L_cefe4; }
    X86_TICK(c, 9);
    // 0cef47  push 0xa
    X86_AT(c, 0xcef47u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0cef49  call 0xb61b4
    X86_AT(c, 0xcef49u);
    push32(c, 0xcef4eu); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xcef4eu);
    X86_TICK(c, 9);
    // 0cef4e  add esp, 4
    X86_AT(c, 0xcef4eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cef51  cmp eax, 5
    X86_AT(c, 0xcef51u);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0cef54  jge 0xcefe4
    X86_AT(c, 0xcef54u);
    if (x86_cc(c, 13)) { goto L_cefe4; }
    X86_TICK(c, 14);
    // 0cef5a  mov eax, dword ptr [edi*4 + 0xa4935]
    X86_AT(c, 0xcef5au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4935u)));
    // 0cef61  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xcef61u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 0cef64  mov eax, dword ptr [edi*4 + 0xa4955]
    X86_AT(c, 0xcef64u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4955u)));
    // 0cef6b  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xcef6bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0cef6e  mov esi, 0xffffffff
    X86_AT(c, 0xcef6eu);
    c.r[6] = 0xFFFFFFFFu;
L_cef73:
    X86_TICK(c, 11);
    // 0cef73  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xcef73u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0cef76  and eax, eax
    X86_AT(c, 0xcef76u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cef78  je 0xcefcb
    X86_AT(c, 0xcef78u);
    if (x86_cc(c, 4)) { goto L_cefcb; }
    X86_TICK(c, 7);
    // 0cef7a  cmp eax, 0xa
    X86_AT(c, 0xcef7au);
    (void)x86_sub(c, c.r[0], 0xAu, 0, 4);
    // 0cef7d  je 0xcefcb
    X86_AT(c, 0xcef7du);
    if (x86_cc(c, 4)) { goto L_cefcb; }
    X86_TICK(c, 11);
    // 0cef7f  mov edx, dword ptr [ebp - 0x14]
    X86_AT(c, 0xcef7fu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0cef82  and edx, edx
    X86_AT(c, 0xcef82u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0cef84  je 0xcefcb
    X86_AT(c, 0xcef84u);
    if (x86_cc(c, 4)) { goto L_cefcb; }
    X86_TICK(c, 7);
    // 0cef86  cmp edx, 0xa
    X86_AT(c, 0xcef86u);
    (void)x86_sub(c, c.r[2], 0xAu, 0, 4);
    // 0cef89  je 0xcefcb
    X86_AT(c, 0xcef89u);
    if (x86_cc(c, 4)) { goto L_cefcb; }
    X86_TICK(c, 24);
    // 0cef8b  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xcef8bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0cef8e  add dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xcef8eu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0cef91  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xcef91u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0cef94  add dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xcef94u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0cef97  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xcef97u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_cef9e:
    X86_TICK(c, 11);
    // 0cef9e  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xcef9eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0cefa1  cmp eax, 4
    X86_AT(c, 0xcefa1u);
    (void)x86_sub(c, c.r[0], 0x4u, 0, 4);
    // 0cefa4  jge 0xcefc7
    X86_AT(c, 0xcefa4u);
    if (x86_cc(c, 13)) { goto L_cefc7; }
    X86_TICK(c, 15);
    // 0cefa6  mov edx, dword ptr [ebp - 0x10]
    X86_AT(c, 0xcefa6u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0cefa9  cmp edx, dword ptr [eax*4 + 0xa49f5]
    X86_AT(c, 0xcefa9u);
    (void)x86_sub(c, c.r[2], rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA49F5u))), 0, 4);
    // 0cefb0  jne 0xcefc2
    X86_AT(c, 0xcefb0u);
    if (x86_cc(c, 5)) { goto L_cefc2; }
    X86_TICK(c, 15);
    // 0cefb2  mov edx, dword ptr [ebp - 0x14]
    X86_AT(c, 0xcefb2u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0cefb5  cmp edx, dword ptr [eax*4 + 0xa4a05]
    X86_AT(c, 0xcefb5u);
    (void)x86_sub(c, c.r[2], rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA4A05u))), 0, 4);
    // 0cefbc  jne 0xcefc2
    X86_AT(c, 0xcefbcu);
    if (x86_cc(c, 5)) { goto L_cefc2; }
    X86_TICK(c, 9);
    // 0cefbe  sub esi, esi
    X86_AT(c, 0xcefbeu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0cefc0  jmp 0xcefc7
    X86_AT(c, 0xcefc0u);
    goto L_cefc7;
L_cefc2:
    X86_TICK(c, 13);
    // 0cefc2  inc dword ptr [ebp - 4]
    X86_AT(c, 0xcefc2u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0cefc5  jmp 0xcef9e
    X86_AT(c, 0xcefc5u);
    X86_POLL(c, 0xcef9eu); goto L_cef9e;
L_cefc7:
    X86_TICK(c, 7);
    // 0cefc7  and esi, esi
    X86_AT(c, 0xcefc7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0cefc9  jne 0xcef73
    X86_AT(c, 0xcefc9u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xcef73u); goto L_cef73; }
L_cefcb:
    X86_TICK(c, 7);
    // 0cefcb  and esi, esi
    X86_AT(c, 0xcefcbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0cefcd  jne 0xcf04d
    X86_AT(c, 0xcefcdu);
    if (x86_cc(c, 5)) { goto L_cf04d; }
    X86_TICK(c, 19);
    // 0cefd3  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xcefd3u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0cefd6  push dword ptr [ebp - 8]
    X86_AT(c, 0xcefd6u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0cefd9  push edi
    X86_AT(c, 0xcefd9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cefda  call 0xcedd0
    X86_AT(c, 0xcefdau);
    push32(c, 0xcefdfu); x86_call_known(c, 0xcedd0u, f_000cedd0); X86_RET(c, 0xcefdfu);
    X86_TICK(c, 9);
    // 0cefdf  add esp, 0xc
    X86_AT(c, 0xcefdfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cefe2  jmp 0xcf04d
    X86_AT(c, 0xcefe2u);
    goto L_cf04d;
L_cefe4:
    X86_TICK(c, 12);
    // 0cefe4  cmp byte ptr [0xa4934], 0x8a
    X86_AT(c, 0xcefe4u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xA4934u))), 0x8Au, 0, 1);
    // 0cefeb  je 0xcf02c
    X86_AT(c, 0xcefebu);
    if (x86_cc(c, 4)) { goto L_cf02c; }
    X86_TICK(c, 9);
    // 0cefed  push 0xa
    X86_AT(c, 0xcefedu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0cefef  call 0xb61b4
    X86_AT(c, 0xcefefu);
    push32(c, 0xceff4u); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xceff4u);
    X86_TICK(c, 9);
    // 0ceff4  add esp, 4
    X86_AT(c, 0xceff4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ceff7  cmp eax, 8
    X86_AT(c, 0xceff7u);
    (void)x86_sub(c, c.r[0], 0x8u, 0, 4);
    // 0ceffa  jl 0xcf02c
    X86_AT(c, 0xceffau);
    if (x86_cc(c, 12)) { goto L_cf02c; }
    X86_TICK(c, 9);
    // 0ceffc  push 3
    X86_AT(c, 0xceffcu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ceffe  call 0xb61b4
    X86_AT(c, 0xceffeu);
    push32(c, 0xcf003u); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xcf003u);
    X86_TICK(c, 22);
    // 0cf003  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xcf003u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0cf006  lea eax, [eax + eax*2]
    X86_AT(c, 0xcf006u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cf009  lea edx, [eax*8]
    X86_AT(c, 0xcf009u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0cf010  lea edx, [eax + edx*8]
    X86_AT(c, 0xcf010u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0cf013  add esp, 4
    X86_AT(c, 0xcf013u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cf016  cmp byte ptr [edx + 0xa4abd], 0x47
    X86_AT(c, 0xcf016u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu))), 0x47u, 0, 1);
    // 0cf01d  jne 0xcf02c
    X86_AT(c, 0xcf01du);
    if (x86_cc(c, 5)) { goto L_cf02c; }
    X86_TICK(c, 16);
    // 0cf01f  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xcf01fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0cf022  cmp dword ptr [eax*4 + 0xa4a05], 0
    X86_AT(c, 0xcf022u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA4A05u))), 0x0u, 0, 4);
    // 0cf02a  jge 0xcf040
    X86_AT(c, 0xcf02au);
    if (x86_cc(c, 13)) { goto L_cf040; }
L_cf02c:
    X86_TICK(c, 24);
    // 0cf02c  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xcf02cu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0cf02f  push dword ptr [ebp - 8]
    X86_AT(c, 0xcf02fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0cf032  push dword ptr [ebp - 4]
    X86_AT(c, 0xcf032u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0cf035  push edi
    X86_AT(c, 0xcf035u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cf036  call 0xcf058
    X86_AT(c, 0xcf036u);
    push32(c, 0xcf03bu); x86_call_known(c, 0xcf058u, f_000cf058); X86_RET(c, 0xcf03bu);
    X86_TICK(c, 9);
    // 0cf03b  add esp, 0x10
    X86_AT(c, 0xcf03bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0cf03e  jmp 0xcf04d
    X86_AT(c, 0xcf03eu);
    goto L_cf04d;
L_cf040:
    X86_TICK(c, 7);
    // 0cf040  push dword ptr [ebp - 4]
    X86_AT(c, 0xcf040u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0cf043  push 0xffffffff
    X86_AT(c, 0xcf043u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
L_cf045:
    X86_TICK(c, 7);
    // 0cf045  call 0xcf1a8
    X86_AT(c, 0xcf045u);
    push32(c, 0xcf04au); x86_call_known(c, 0xcf1a8u, f_000cf1a8); X86_RET(c, 0xcf04au);
    X86_TICK(c, 2);
    // 0cf04a  add esp, 8
    X86_AT(c, 0xcf04au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_cf04d:
    X86_TICK(c, 9);
    // 0cf04d  inc edi
    X86_AT(c, 0xcf04du);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cf04e  jmp 0xceee9
    X86_AT(c, 0xcf04eu);
    X86_POLL(c, 0xceee9u); goto L_ceee9;
L_cf053:
    X86_TICK(c, 28);
    // 0cf053  pop edi
    X86_AT(c, 0xcf053u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cf054  pop esi
    X86_AT(c, 0xcf054u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cf055  pop ebx
    X86_AT(c, 0xcf055u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cf056  leave 
    X86_AT(c, 0xcf056u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cf057  ret 
    X86_AT(c, 0xcf057u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xceeb8u, "ran off the end of a function");
}
void f_000cf058(X86Cpu& c) {
    X86_TICK(c, 43);
    // 0cf058  push ebp
    X86_AT(c, 0xcf058u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cf059  mov ebp, esp
    X86_AT(c, 0xcf059u);
    c.r[5] = c.r[4];
    // 0cf05b  push eax
    X86_AT(c, 0xcf05bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cf05c  push ebx
    X86_AT(c, 0xcf05cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cf05d  push esi
    X86_AT(c, 0xcf05du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cf05e  push edi
    X86_AT(c, 0xcf05eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cf05f  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xcf05fu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cf062  mov esi, dword ptr [edi*4 + 0xa4935]
    X86_AT(c, 0xcf062u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4935u)));
    // 0cf069  add esi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xcf069u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 4); }
    // 0cf06c  mov ebx, dword ptr [edi*4 + 0xa4955]
    X86_AT(c, 0xcf06cu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4955u)));
    // 0cf073  add ebx, dword ptr [ebp + 0x14]
    X86_AT(c, 0xcf073u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0, 4); }
    // 0cf076  and esi, esi
    X86_AT(c, 0xcf076u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0cf078  jge 0xcf07c
    X86_AT(c, 0xcf078u);
    if (x86_cc(c, 13)) { goto L_cf07c; }
    X86_TICK(c, 2);
    // 0cf07a  sub esi, esi
    X86_AT(c, 0xcf07au);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_cf07c:
    X86_TICK(c, 7);
    // 0cf07c  cmp esi, 0xa
    X86_AT(c, 0xcf07cu);
    (void)x86_sub(c, c.r[6], 0xAu, 0, 4);
    // 0cf07f  jle 0xcf086
    X86_AT(c, 0xcf07fu);
    if (x86_cc(c, 14)) { goto L_cf086; }
    X86_TICK(c, 2);
    // 0cf081  mov esi, 0xa
    X86_AT(c, 0xcf081u);
    c.r[6] = 0xAu;
L_cf086:
    X86_TICK(c, 7);
    // 0cf086  and ebx, ebx
    X86_AT(c, 0xcf086u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0cf088  jge 0xcf08c
    X86_AT(c, 0xcf088u);
    if (x86_cc(c, 13)) { goto L_cf08c; }
    X86_TICK(c, 2);
    // 0cf08a  sub ebx, ebx
    X86_AT(c, 0xcf08au);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_cf08c:
    X86_TICK(c, 7);
    // 0cf08c  cmp ebx, 0xa
    X86_AT(c, 0xcf08cu);
    (void)x86_sub(c, c.r[3], 0xAu, 0, 4);
    // 0cf08f  jle 0xcf096
    X86_AT(c, 0xcf08fu);
    if (x86_cc(c, 14)) { goto L_cf096; }
    X86_TICK(c, 2);
    // 0cf091  mov ebx, 0xa
    X86_AT(c, 0xcf091u);
    c.r[3] = 0xAu;
L_cf096:
    X86_TICK(c, 15);
    // 0cf096  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xcf096u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0cf099  mov edx, dword ptr [eax*4 + 0xa49f5]
    X86_AT(c, 0xcf099u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA49F5u)));
    // 0cf0a0  cmp esi, edx
    X86_AT(c, 0xcf0a0u);
    (void)x86_sub(c, c.r[6], c.r[2], 0, 4);
    // 0cf0a2  jne 0xcf0d8
    X86_AT(c, 0xcf0a2u);
    if (x86_cc(c, 5)) { goto L_cf0d8; }
    X86_TICK(c, 17);
    // 0cf0a4  mov eax, dword ptr [eax*4 + 0xa4a05]
    X86_AT(c, 0xcf0a4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA4A05u)));
    // 0cf0ab  cmp ebx, eax
    X86_AT(c, 0xcf0abu);
    (void)x86_sub(c, c.r[3], c.r[0], 0, 4);
    // 0cf0ad  sete cl
    X86_AT(c, 0xcf0adu);
    s8(c, 1, x86_cc(c, 4) ? 1u : 0u);
    // 0cf0b0  and cl, cl
    X86_AT(c, 0xcf0b0u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & g8(c, 1), 1)); }
    // 0cf0b2  je 0xcf0d8
    X86_AT(c, 0xcf0b2u);
    if (x86_cc(c, 4)) { goto L_cf0d8; }
    X86_TICK(c, 13);
    // 0cf0b4  mov dword ptr [ebp - 4], esi
    X86_AT(c, 0xcf0b4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[6]);
    // 0cf0b7  mov esi, dword ptr [edi*4 + 0xa4935]
    X86_AT(c, 0xcf0b7u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4935u)));
    // 0cf0be  cmp esi, edx
    X86_AT(c, 0xcf0beu);
    (void)x86_sub(c, c.r[6], c.r[2], 0, 4);
    // 0cf0c0  jne 0xcf0d8
    X86_AT(c, 0xcf0c0u);
    if (x86_cc(c, 5)) { goto L_cf0d8; }
    X86_TICK(c, 7);
    // 0cf0c2  and cl, cl
    X86_AT(c, 0xcf0c2u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & g8(c, 1), 1)); }
    // 0cf0c4  je 0xcf0d8
    X86_AT(c, 0xcf0c4u);
    if (x86_cc(c, 4)) { goto L_cf0d8; }
    X86_TICK(c, 15);
    // 0cf0c6  mov esi, dword ptr [ebp - 4]
    X86_AT(c, 0xcf0c6u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0cf0c9  mov ebx, dword ptr [edi*4 + 0xa4955]
    X86_AT(c, 0xcf0c9u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4955u)));
    // 0cf0d0  cmp esi, edx
    X86_AT(c, 0xcf0d0u);
    (void)x86_sub(c, c.r[6], c.r[2], 0, 4);
    // 0cf0d2  jne 0xcf0d8
    X86_AT(c, 0xcf0d2u);
    if (x86_cc(c, 5)) { goto L_cf0d8; }
    X86_TICK(c, 7);
    // 0cf0d4  cmp ebx, eax
    X86_AT(c, 0xcf0d4u);
    (void)x86_sub(c, c.r[3], c.r[0], 0, 4);
    // 0cf0d6  je 0xcf135
    X86_AT(c, 0xcf0d6u);
    if (x86_cc(c, 4)) { goto L_cf135; }
L_cf0d8:
    X86_TICK(c, 11);
    // 0cf0d8  push ebx
    X86_AT(c, 0xcf0d8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cf0d9  push esi
    X86_AT(c, 0xcf0d9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cf0da  call 0xcf13c
    X86_AT(c, 0xcf0dau);
    push32(c, 0xcf0dfu); x86_call_known(c, 0xcf13cu, f_000cf13c); X86_RET(c, 0xcf0dfu);
    X86_TICK(c, 9);
    // 0cf0df  add esp, 8
    X86_AT(c, 0xcf0dfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cf0e2  and eax, eax
    X86_AT(c, 0xcf0e2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cf0e4  je 0xcf116
    X86_AT(c, 0xcf0e4u);
    if (x86_cc(c, 4)) { goto L_cf116; }
    X86_TICK(c, 17);
    // 0cf0e6  mov dword ptr [ebp - 4], ebx
    X86_AT(c, 0xcf0e6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[3]);
    // 0cf0e9  mov ebx, dword ptr [edi*4 + 0xa4955]
    X86_AT(c, 0xcf0e9u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4955u)));
    // 0cf0f0  push ebx
    X86_AT(c, 0xcf0f0u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cf0f1  push esi
    X86_AT(c, 0xcf0f1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cf0f2  call 0xcf13c
    X86_AT(c, 0xcf0f2u);
    push32(c, 0xcf0f7u); x86_call_known(c, 0xcf13cu, f_000cf13c); X86_RET(c, 0xcf0f7u);
    X86_TICK(c, 9);
    // 0cf0f7  add esp, 8
    X86_AT(c, 0xcf0f7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cf0fa  and eax, eax
    X86_AT(c, 0xcf0fau);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cf0fc  je 0xcf116
    X86_AT(c, 0xcf0fcu);
    if (x86_cc(c, 4)) { goto L_cf116; }
    X86_TICK(c, 19);
    // 0cf0fe  mov ebx, dword ptr [ebp - 4]
    X86_AT(c, 0xcf0feu);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0cf101  mov esi, dword ptr [edi*4 + 0xa4935]
    X86_AT(c, 0xcf101u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4935u)));
    // 0cf108  push ebx
    X86_AT(c, 0xcf108u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cf109  push esi
    X86_AT(c, 0xcf109u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cf10a  call 0xcf13c
    X86_AT(c, 0xcf10au);
    push32(c, 0xcf10fu); x86_call_known(c, 0xcf13cu, f_000cf13c); X86_RET(c, 0xcf10fu);
    X86_TICK(c, 9);
    // 0cf10f  add esp, 8
    X86_AT(c, 0xcf10fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cf112  and eax, eax
    X86_AT(c, 0xcf112u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cf114  jne 0xcf135
    X86_AT(c, 0xcf114u);
    if (x86_cc(c, 5)) { goto L_cf135; }
L_cf116:
    X86_TICK(c, 13);
    // 0cf116  mov dword ptr [edi*4 + 0xa4935], esi
    X86_AT(c, 0xcf116u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4935u)), c.r[6]);
    // 0cf11d  mov dword ptr [edi*4 + 0xa4955], ebx
    X86_AT(c, 0xcf11du);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4955u)), c.r[3]);
    // 0cf124  push 0xffffffff
    X86_AT(c, 0xcf124u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0cf126  call 0xb7f6c
    X86_AT(c, 0xcf126u);
    push32(c, 0xcf12bu); x86_call_known(c, 0xb7f6cu, f_000b7f6c); X86_RET(c, 0xcf12bu);
    X86_TICK(c, 9);
    // 0cf12b  push 0
    X86_AT(c, 0xcf12bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cf12d  call 0xbdea8
    X86_AT(c, 0xcf12du);
    push32(c, 0xcf132u); x86_call_known(c, 0xbdea8u, f_000bdea8); X86_RET(c, 0xcf132u);
    X86_TICK(c, 2);
    // 0cf132  add esp, 8
    X86_AT(c, 0xcf132u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_cf135:
    X86_TICK(c, 28);
    // 0cf135  pop edi
    X86_AT(c, 0xcf135u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cf136  pop esi
    X86_AT(c, 0xcf136u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cf137  pop ebx
    X86_AT(c, 0xcf137u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cf138  leave 
    X86_AT(c, 0xcf138u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cf139  ret 
    X86_AT(c, 0xcf139u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcf058u, "ran off the end of a function");
}
void f_000cf13c(X86Cpu& c) {
    X86_TICK(c, 43);
    // 0cf13c  push ebp
    X86_AT(c, 0xcf13cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cf13d  mov ebp, esp
    X86_AT(c, 0xcf13du);
    c.r[5] = c.r[4];
    // 0cf13f  push ebx
    X86_AT(c, 0xcf13fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cf140  push esi
    X86_AT(c, 0xcf140u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cf141  push edi
    X86_AT(c, 0xcf141u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cf142  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xcf142u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cf145  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xcf145u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0cf148  mov eax, esi
    X86_AT(c, 0xcf148u);
    c.r[0] = c.r[6];
    // 0cf14a  lea edx, [eax + eax*8]
    X86_AT(c, 0xcf14au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0cf14d  lea eax, [edx + eax*2]
    X86_AT(c, 0xcf14du);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0cf150  lea edx, [edi + eax*1]
    X86_AT(c, 0xcf150u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 0cf153  movzx ebx, byte ptr [edx + 0x8cfa8]
    X86_AT(c, 0xcf153u);
    c.r[3] = rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0x8CFA8u)));
    // 0cf15a  mov al, byte ptr [0xa4934]
    X86_AT(c, 0xcf15au);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xA4934u))));
    // 0cf15f  cmp al, 0x84
    X86_AT(c, 0xcf15fu);
    (void)x86_sub(c, g8(c, 0), 0x84u, 0, 1);
    // 0cf161  je 0xcf167
    X86_AT(c, 0xcf161u);
    if (x86_cc(c, 4)) { goto L_cf167; }
    X86_TICK(c, 7);
    // 0cf163  cmp al, 0x85
    X86_AT(c, 0xcf163u);
    (void)x86_sub(c, g8(c, 0), 0x85u, 0, 1);
    // 0cf165  jne 0xcf17d
    X86_AT(c, 0xcf165u);
    if (x86_cc(c, 5)) { goto L_cf17d; }
L_cf167:
    X86_TICK(c, 7);
    // 0cf167  cmp ebx, 1
    X86_AT(c, 0xcf167u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 0cf16a  je 0xcf18c
    X86_AT(c, 0xcf16au);
    if (x86_cc(c, 4)) { goto L_cf18c; }
    X86_TICK(c, 7);
    // 0cf16c  cmp ebx, 0xa
    X86_AT(c, 0xcf16cu);
    (void)x86_sub(c, c.r[3], 0xAu, 0, 4);
    // 0cf16f  je 0xcf18c
    X86_AT(c, 0xcf16fu);
    if (x86_cc(c, 4)) { goto L_cf18c; }
    X86_TICK(c, 7);
    // 0cf171  cmp ebx, 0x12
    X86_AT(c, 0xcf171u);
    (void)x86_sub(c, c.r[3], 0x12u, 0, 4);
    // 0cf174  jl 0xcf19d
    X86_AT(c, 0xcf174u);
    if (x86_cc(c, 12)) { goto L_cf19d; }
    X86_TICK(c, 7);
    // 0cf176  cmp ebx, 0x21
    X86_AT(c, 0xcf176u);
    (void)x86_sub(c, c.r[3], 0x21u, 0, 4);
    // 0cf179  jge 0xcf19d
    X86_AT(c, 0xcf179u);
    if (x86_cc(c, 13)) { goto L_cf19d; }
    X86_TICK(c, 7);
    // 0cf17b  jmp 0xcf18c
    X86_AT(c, 0xcf17bu);
    goto L_cf18c;
L_cf17d:
    X86_TICK(c, 7);
    // 0cf17d  cmp ebx, 2
    X86_AT(c, 0xcf17du);
    (void)x86_sub(c, c.r[3], 0x2u, 0, 4);
    // 0cf180  jl 0xcf187
    X86_AT(c, 0xcf180u);
    if (x86_cc(c, 12)) { goto L_cf187; }
    X86_TICK(c, 7);
    // 0cf182  cmp ebx, 9
    X86_AT(c, 0xcf182u);
    (void)x86_sub(c, c.r[3], 0x9u, 0, 4);
    // 0cf185  jle 0xcf18c
    X86_AT(c, 0xcf185u);
    if (x86_cc(c, 14)) { goto L_cf18c; }
L_cf187:
    X86_TICK(c, 7);
    // 0cf187  cmp ebx, 0x22
    X86_AT(c, 0xcf187u);
    (void)x86_sub(c, c.r[3], 0x22u, 0, 4);
    // 0cf18a  jne 0xcf19d
    X86_AT(c, 0xcf18au);
    if (x86_cc(c, 5)) { goto L_cf19d; }
L_cf18c:
    X86_TICK(c, 11);
    // 0cf18c  push esi
    X86_AT(c, 0xcf18cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cf18d  push edi
    X86_AT(c, 0xcf18du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cf18e  call 0xc80f0
    X86_AT(c, 0xcf18eu);
    push32(c, 0xcf193u); x86_call_known(c, 0xc80f0u, f_000c80f0); X86_RET(c, 0xcf193u);
    X86_TICK(c, 9);
    // 0cf193  add esp, 8
    X86_AT(c, 0xcf193u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cf196  inc eax
    X86_AT(c, 0xcf196u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0cf197  jne 0xcf19d
    X86_AT(c, 0xcf197u);
    if (x86_cc(c, 5)) { goto L_cf19d; }
    X86_TICK(c, 9);
    // 0cf199  sub eax, eax
    X86_AT(c, 0xcf199u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0cf19b  jmp 0xcf1a2
    X86_AT(c, 0xcf19bu);
    goto L_cf1a2;
L_cf19d:
    X86_TICK(c, 2);
    // 0cf19d  mov eax, 0xffffffff
    X86_AT(c, 0xcf19du);
    c.r[0] = 0xFFFFFFFFu;
L_cf1a2:
    X86_TICK(c, 28);
    // 0cf1a2  pop edi
    X86_AT(c, 0xcf1a2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cf1a3  pop esi
    X86_AT(c, 0xcf1a3u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cf1a4  pop ebx
    X86_AT(c, 0xcf1a4u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cf1a5  leave 
    X86_AT(c, 0xcf1a5u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cf1a6  ret 
    X86_AT(c, 0xcf1a6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcf13cu, "ran off the end of a function");
}
void f_000cf1a8(X86Cpu& c) {
    X86_TICK(c, 31);
    // 0cf1a8  push ebp
    X86_AT(c, 0xcf1a8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cf1a9  mov ebp, esp
    X86_AT(c, 0xcf1a9u);
    c.r[5] = c.r[4];
    // 0cf1ab  push eax
    X86_AT(c, 0xcf1abu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cf1ac  push ebx
    X86_AT(c, 0xcf1acu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cf1ad  push esi
    X86_AT(c, 0xcf1adu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cf1ae  push edi
    X86_AT(c, 0xcf1aeu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cf1af  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xcf1afu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cf1b2  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xcf1b2u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0cf1b5  mov bl, byte ptr [0xa4934]
    X86_AT(c, 0xcf1b5u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(0xA4934u))));
    // 0cf1bb  cmp edi, 0xffffffff
    X86_AT(c, 0xcf1bbu);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0cf1be  jne 0xcf1dd
    X86_AT(c, 0xcf1beu);
    if (x86_cc(c, 5)) { goto L_cf1dd; }
    X86_TICK(c, 7);
    // 0cf1c0  cmp bl, 0x8d
    X86_AT(c, 0xcf1c0u);
    (void)x86_sub(c, g8(c, 3), 0x8Du, 0, 1);
    // 0cf1c3  je 0xcf1dd
    X86_AT(c, 0xcf1c3u);
    if (x86_cc(c, 4)) { goto L_cf1dd; }
    X86_TICK(c, 7);
    // 0cf1c5  cmp bl, 0x93
    X86_AT(c, 0xcf1c5u);
    (void)x86_sub(c, g8(c, 3), 0x93u, 0, 1);
    // 0cf1c8  je 0xcf1dd
    X86_AT(c, 0xcf1c8u);
    if (x86_cc(c, 4)) { goto L_cf1dd; }
    X86_TICK(c, 7);
    // 0cf1ca  cmp bl, 0x95
    X86_AT(c, 0xcf1cau);
    (void)x86_sub(c, g8(c, 3), 0x95u, 0, 1);
    // 0cf1cd  je 0xcf1dd
    X86_AT(c, 0xcf1cdu);
    if (x86_cc(c, 4)) { goto L_cf1dd; }
    X86_TICK(c, 7);
    // 0cf1cf  cmp bl, 0x84
    X86_AT(c, 0xcf1cfu);
    (void)x86_sub(c, g8(c, 3), 0x84u, 0, 1);
    // 0cf1d2  je 0xcf1dd
    X86_AT(c, 0xcf1d2u);
    if (x86_cc(c, 4)) { goto L_cf1dd; }
    X86_TICK(c, 7);
    // 0cf1d4  cmp bl, 0x85
    X86_AT(c, 0xcf1d4u);
    (void)x86_sub(c, g8(c, 3), 0x85u, 0, 1);
    // 0cf1d7  jne 0xcf37c
    X86_AT(c, 0xcf1d7u);
    if (x86_cc(c, 5)) { goto L_cf37c; }
L_cf1dd:
    X86_TICK(c, 12);
    // 0cf1dd  movzx edx, bl
    X86_AT(c, 0xcf1ddu);
    c.r[2] = g8(c, 3);
    // 0cf1e0  sub edx, 0x84
    X86_AT(c, 0xcf1e0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x84u, 0, 4); }
    // 0cf1e6  cmp edx, 0x12
    X86_AT(c, 0xcf1e6u);
    (void)x86_sub(c, c.r[2], 0x12u, 0, 4);
    // 0cf1e9  ja 0xcf2ce
    X86_AT(c, 0xcf1e9u);
    if (x86_cc(c, 7)) { goto L_cf2ce; }
    X86_TICK(c, 7);
    // 0cf1ef  jmp dword ptr cs:[edx*4 + 0xcf1f7]
    X86_AT(c, 0xcf1efu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xCF1F7u)));
      switch (t) {
      case 0xcf243u: goto L_cf243;
      case 0xcf24eu: goto L_cf24e;
      case 0xcf276u: goto L_cf276;
      case 0xcf2a6u: goto L_cf2a6;
      case 0xcf2ceu: goto L_cf2ce;
      default: x86_jump(c, t); return; } }
L_cf243:
    X86_TICK(c, 7);
    // 0cf243  cmp edi, 0xffffffff
    X86_AT(c, 0xcf243u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0cf246  jne 0xcf2ce
    X86_AT(c, 0xcf246u);
    if (x86_cc(c, 5)) { goto L_cf2ce; }
    X86_TICK(c, 7);
    // 0cf24c  jmp 0xcf25d
    X86_AT(c, 0xcf24cu);
    goto L_cf25d;
L_cf24e:
    X86_TICK(c, 9);
    // 0cf24e  push 9
    X86_AT(c, 0xcf24eu);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0cf250  call 0xb61b4
    X86_AT(c, 0xcf250u);
    push32(c, 0xcf255u); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xcf255u);
    X86_TICK(c, 9);
    // 0cf255  add esp, 4
    X86_AT(c, 0xcf255u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cf258  cmp eax, 5
    X86_AT(c, 0xcf258u);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0cf25b  jge 0xcf2ce
    X86_AT(c, 0xcf25bu);
    if (x86_cc(c, 13)) { goto L_cf2ce; }
L_cf25d:
    X86_TICK(c, 9);
    // 0cf25d  push 5
    X86_AT(c, 0xcf25du);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0cf25f  call 0xb607c
    X86_AT(c, 0xcf25fu);
    push32(c, 0xcf264u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xcf264u);
    X86_TICK(c, 9);
    // 0cf264  push 2
    X86_AT(c, 0xcf264u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cf266  call 0xbebbc
    X86_AT(c, 0xcf266u);
    push32(c, 0xcf26bu); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xcf26bu);
    X86_TICK(c, 9);
    // 0cf26b  push esi
    X86_AT(c, 0xcf26bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cf26c  call 0xcf610
    X86_AT(c, 0xcf26cu);
    push32(c, 0xcf271u); x86_call_known(c, 0xcf610u, f_000cf610); X86_RET(c, 0xcf271u);
    X86_TICK(c, 7);
    // 0cf271  jmp 0xcf36e
    X86_AT(c, 0xcf271u);
    goto L_cf36e;
L_cf276:
    X86_TICK(c, 7);
    // 0cf276  cmp edi, 0xffffffff
    X86_AT(c, 0xcf276u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0cf279  jne 0xcf2ce
    X86_AT(c, 0xcf279u);
    if (x86_cc(c, 5)) { goto L_cf2ce; }
    X86_TICK(c, 9);
    // 0cf27b  push 5
    X86_AT(c, 0xcf27bu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0cf27d  call 0xb607c
    X86_AT(c, 0xcf27du);
    push32(c, 0xcf282u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xcf282u);
    X86_TICK(c, 7);
    // 0cf282  call 0xcaa9c
    X86_AT(c, 0xcf282u);
    push32(c, 0xcf287u); x86_call_known(c, 0xcaa9cu, f_000caa9c); X86_RET(c, 0xcf287u);
    X86_TICK(c, 9);
    // 0cf287  push 7
    X86_AT(c, 0xcf287u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf289  call 0xbb6b0
    X86_AT(c, 0xcf289u);
    push32(c, 0xcf28eu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xcf28eu);
    X86_TICK(c, 11);
    // 0cf28e  push 0x96fc
    X86_AT(c, 0xcf28eu);
    { uint32_t v = 0x96FCu; push32(c, v); }
    // 0cf293  push 7
    X86_AT(c, 0xcf293u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf295  call 0xba428
    X86_AT(c, 0xcf295u);
    push32(c, 0xcf29au); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcf29au);
    X86_TICK(c, 9);
    // 0cf29a  push 7
    X86_AT(c, 0xcf29au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf29c  call 0xbbb5c
    X86_AT(c, 0xcf29cu);
    push32(c, 0xcf2a1u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcf2a1u);
    X86_TICK(c, 9);
    // 0cf2a1  add esp, 0x14
    X86_AT(c, 0xcf2a1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0cf2a4  jmp 0xcf2ce
    X86_AT(c, 0xcf2a4u);
    goto L_cf2ce;
L_cf2a6:
    X86_TICK(c, 9);
    // 0cf2a6  push 9
    X86_AT(c, 0xcf2a6u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0cf2a8  call 0xb61b4
    X86_AT(c, 0xcf2a8u);
    push32(c, 0xcf2adu); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xcf2adu);
    X86_TICK(c, 9);
    // 0cf2ad  add esp, 4
    X86_AT(c, 0xcf2adu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cf2b0  cmp eax, 5
    X86_AT(c, 0xcf2b0u);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0cf2b3  jge 0xcf2ce
    X86_AT(c, 0xcf2b3u);
    if (x86_cc(c, 13)) { goto L_cf2ce; }
    X86_TICK(c, 9);
    // 0cf2b5  push 5
    X86_AT(c, 0xcf2b5u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0cf2b7  call 0xb607c
    X86_AT(c, 0xcf2b7u);
    push32(c, 0xcf2bcu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xcf2bcu);
    X86_TICK(c, 9);
    // 0cf2bc  push 2
    X86_AT(c, 0xcf2bcu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cf2be  call 0xbebbc
    X86_AT(c, 0xcf2beu);
    push32(c, 0xcf2c3u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xcf2c3u);
    X86_TICK(c, 9);
    // 0cf2c3  push esi
    X86_AT(c, 0xcf2c3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cf2c4  call 0xcf694
    X86_AT(c, 0xcf2c4u);
    push32(c, 0xcf2c9u); x86_call_known(c, 0xcf694u, f_000cf694); X86_RET(c, 0xcf2c9u);
    X86_TICK(c, 7);
    // 0cf2c9  jmp 0xcf36e
    X86_AT(c, 0xcf2c9u);
    goto L_cf36e;
L_cf2ce:
    X86_TICK(c, 9);
    // 0cf2ce  push 7
    X86_AT(c, 0xcf2ceu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf2d0  call 0xb607c
    X86_AT(c, 0xcf2d0u);
    push32(c, 0xcf2d5u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xcf2d5u);
    X86_TICK(c, 9);
    // 0cf2d5  push 3
    X86_AT(c, 0xcf2d5u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0cf2d7  call 0xbebbc
    X86_AT(c, 0xcf2d7u);
    push32(c, 0xcf2dcu); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xcf2dcu);
    X86_TICK(c, 11);
    // 0cf2dc  add esp, 8
    X86_AT(c, 0xcf2dcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cf2df  push esi
    X86_AT(c, 0xcf2dfu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cf2e0  call 0xcf384
    X86_AT(c, 0xcf2e0u);
    push32(c, 0xcf2e5u); x86_call_known(c, 0xcf384u, f_000cf384); X86_RET(c, 0xcf2e5u);
    X86_TICK(c, 9);
    // 0cf2e5  push 7
    X86_AT(c, 0xcf2e5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf2e7  call 0xbb6b0
    X86_AT(c, 0xcf2e7u);
    push32(c, 0xcf2ecu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xcf2ecu);
    X86_TICK(c, 21);
    // 0cf2ec  lea eax, [esi + esi*2]
    X86_AT(c, 0xcf2ecu);
    c.r[0] = (uint32_t)(c.r[6] + c.r[6] * 2);
    // 0cf2ef  lea edx, [eax*8]
    X86_AT(c, 0xcf2efu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0cf2f6  lea edx, [eax + edx*8]
    X86_AT(c, 0xcf2f6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0cf2f9  lea eax, [edx*1 + 0xa4aa0]
    X86_AT(c, 0xcf2f9u);
    c.r[0] = (uint32_t)(c.r[2] + 0xA4AA0u);
    // 0cf300  push eax
    X86_AT(c, 0xcf300u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cf301  push 7
    X86_AT(c, 0xcf301u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf303  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xcf303u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0cf306  call 0xbbfe0
    X86_AT(c, 0xcf306u);
    push32(c, 0xcf30bu); x86_call_known(c, 0xbbfe0u, f_000bbfe0); X86_RET(c, 0xcf30bu);
    X86_TICK(c, 9);
    // 0cf30b  push 7
    X86_AT(c, 0xcf30bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf30d  call 0xbbb5c
    X86_AT(c, 0xcf30du);
    push32(c, 0xcf312u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcf312u);
    X86_TICK(c, 11);
    // 0cf312  push 0x973a
    X86_AT(c, 0xcf312u);
    { uint32_t v = 0x973Au; push32(c, v); }
    // 0cf317  push 7
    X86_AT(c, 0xcf317u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf319  call 0xbbba4
    X86_AT(c, 0xcf319u);
    push32(c, 0xcf31eu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xcf31eu);
    X86_TICK(c, 14);
    // 0cf31e  add esp, 0x1c
    X86_AT(c, 0xcf31eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0cf321  cmp dword ptr [0xa4a5a], 3
    X86_AT(c, 0xcf321u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A5Au))), 0x3u, 0, 4);
    // 0cf328  jne 0xcf333
    X86_AT(c, 0xcf328u);
    if (x86_cc(c, 5)) { goto L_cf333; }
    X86_TICK(c, 16);
    // 0cf32a  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xcf32au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0cf32d  cmp byte ptr [eax + 0x59], 0x48
    X86_AT(c, 0xcf32du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x59u))), 0x48u, 0, 1);
    // 0cf331  jne 0xcf373
    X86_AT(c, 0xcf331u);
    if (x86_cc(c, 5)) { goto L_cf373; }
L_cf333:
    X86_TICK(c, 25);
    // 0cf333  lea eax, [esi + esi*2]
    X86_AT(c, 0xcf333u);
    c.r[0] = (uint32_t)(c.r[6] + c.r[6] * 2);
    // 0cf336  lea edx, [eax*8]
    X86_AT(c, 0xcf336u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0cf33d  lea edx, [eax + edx*8]
    X86_AT(c, 0xcf33du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0cf340  movzx eax, byte ptr [edx + 0xa4af9]
    X86_AT(c, 0xcf340u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AF9u)));
    // 0cf347  sub eax, 0x41
    X86_AT(c, 0xcf347u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x41u, 0, 4); }
    // 0cf34a  add eax, 0x10
    X86_AT(c, 0xcf34au);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x10u, 0, 4); }
    // 0cf34d  push eax
    X86_AT(c, 0xcf34du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cf34e  call 0xb61b4
    X86_AT(c, 0xcf34eu);
    push32(c, 0xcf353u); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xcf353u);
    X86_TICK(c, 9);
    // 0cf353  add esp, 4
    X86_AT(c, 0xcf353u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cf356  cmp eax, 8
    X86_AT(c, 0xcf356u);
    (void)x86_sub(c, c.r[0], 0x8u, 0, 4);
    // 0cf359  jl 0xcf373
    X86_AT(c, 0xcf359u);
    if (x86_cc(c, 12)) { goto L_cf373; }
    X86_TICK(c, 11);
    // 0cf35b  push 0x9740
    X86_AT(c, 0xcf35bu);
    { uint32_t v = 0x9740u; push32(c, v); }
    // 0cf360  push 7
    X86_AT(c, 0xcf360u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf362  call 0xba428
    X86_AT(c, 0xcf362u);
    push32(c, 0xcf367u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcf367u);
    X86_TICK(c, 9);
    // 0cf367  push 7
    X86_AT(c, 0xcf367u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf369  call 0xbbb5c
    X86_AT(c, 0xcf369u);
    push32(c, 0xcf36eu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcf36eu);
L_cf36e:
    X86_TICK(c, 9);
    // 0cf36e  add esp, 0xc
    X86_AT(c, 0xcf36eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cf371  jmp 0xcf37c
    X86_AT(c, 0xcf371u);
    goto L_cf37c;
L_cf373:
    X86_TICK(c, 9);
    // 0cf373  push esi
    X86_AT(c, 0xcf373u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cf374  call 0xcf3fc
    X86_AT(c, 0xcf374u);
    push32(c, 0xcf379u); x86_call_known(c, 0xcf3fcu, f_000cf3fc); X86_RET(c, 0xcf379u);
    X86_TICK(c, 2);
    // 0cf379  add esp, 4
    X86_AT(c, 0xcf379u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_cf37c:
    X86_TICK(c, 28);
    // 0cf37c  pop edi
    X86_AT(c, 0xcf37cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cf37d  pop esi
    X86_AT(c, 0xcf37du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cf37e  pop ebx
    X86_AT(c, 0xcf37eu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cf37f  leave 
    X86_AT(c, 0xcf37fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cf380  ret 
    X86_AT(c, 0xcf380u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcf1a8u, "ran off the end of a function");
}
void f_000cf36e(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0cf36e  add esp, 0xc
    X86_AT(c, 0xcf36eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cf371  jmp 0xcf37c
    X86_AT(c, 0xcf371u);
    goto L_cf37c;
L_cf37c:
    X86_TICK(c, 28);
    // 0cf37c  pop edi
    X86_AT(c, 0xcf37cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cf37d  pop esi
    X86_AT(c, 0xcf37du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cf37e  pop ebx
    X86_AT(c, 0xcf37eu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cf37f  leave 
    X86_AT(c, 0xcf37fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cf380  ret 
    X86_AT(c, 0xcf380u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcf36eu, "ran off the end of a function");
}
void f_000cf384(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0cf384  push ebp
    X86_AT(c, 0xcf384u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cf385  mov ebp, esp
    X86_AT(c, 0xcf385u);
    c.r[5] = c.r[4];
    // 0cf387  push ebx
    X86_AT(c, 0xcf387u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cf388  push esi
    X86_AT(c, 0xcf388u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cf389  push edi
    X86_AT(c, 0xcf389u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cf38a  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xcf38au);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cf38d  push 0xffffffff
    X86_AT(c, 0xcf38du);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0cf38f  call 0xb7f6c
    X86_AT(c, 0xcf38fu);
    push32(c, 0xcf394u); x86_call_known(c, 0xb7f6cu, f_000b7f6c); X86_RET(c, 0xcf394u);
    X86_TICK(c, 37);
    // 0cf394  mov esi, dword ptr [0x458a8]
    X86_AT(c, 0xcf394u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0x458A8u)));
    // 0cf39a  inc dword ptr [0x458a8]
    X86_AT(c, 0xcf39au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x458A8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0cf3a0  lea eax, [esi + esi*2]
    X86_AT(c, 0xcf3a0u);
    c.r[0] = (uint32_t)(c.r[6] + c.r[6] * 2);
    // 0cf3a3  mov edx, dword ptr [edi*4 + 0xa49f5]
    X86_AT(c, 0xcf3a3u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA49F5u)));
    // 0cf3aa  mov dword ptr [eax*4 + 0x458ac], edx
    X86_AT(c, 0xcf3aau);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0x458ACu)), c.r[2]);
    // 0cf3b1  mov edx, dword ptr [edi*4 + 0xa4a05]
    X86_AT(c, 0xcf3b1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4A05u)));
    // 0cf3b8  mov dword ptr [eax*4 + 0x458b0], edx
    X86_AT(c, 0xcf3b8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0x458B0u)), c.r[2]);
    // 0cf3bf  mov dword ptr [eax*4 + 0x458b4], 0x8b
    X86_AT(c, 0xcf3bfu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0x458B4u)), 0x8Bu);
    // 0cf3ca  push 0
    X86_AT(c, 0xcf3cau);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cf3cc  mov ebx, eax
    X86_AT(c, 0xcf3ccu);
    c.r[3] = c.r[0];
    // 0cf3ce  call 0xbdea8
    X86_AT(c, 0xcf3ceu);
    push32(c, 0xcf3d3u); x86_call_known(c, 0xbdea8u, f_000bdea8); X86_RET(c, 0xcf3d3u);
    X86_TICK(c, 11);
    // 0cf3d3  mov dword ptr [ebx*4 + 0x458b4], 0x8c
    X86_AT(c, 0xcf3d3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0x458B4u)), 0x8Cu);
    // 0cf3de  push 0
    X86_AT(c, 0xcf3deu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cf3e0  call 0xbdea8
    X86_AT(c, 0xcf3e0u);
    push32(c, 0xcf3e5u); x86_call_known(c, 0xbdea8u, f_000bdea8); X86_RET(c, 0xcf3e5u);
    X86_TICK(c, 9);
    // 0cf3e5  push 0xffffffff
    X86_AT(c, 0xcf3e5u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0cf3e7  call 0xb7f6c
    X86_AT(c, 0xcf3e7u);
    push32(c, 0xcf3ecu); x86_call_known(c, 0xb7f6cu, f_000b7f6c); X86_RET(c, 0xcf3ecu);
    X86_TICK(c, 9);
    // 0cf3ec  push 0
    X86_AT(c, 0xcf3ecu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cf3ee  call 0xbdea8
    X86_AT(c, 0xcf3eeu);
    push32(c, 0xcf3f3u); x86_call_known(c, 0xbdea8u, f_000bdea8); X86_RET(c, 0xcf3f3u);
    X86_TICK(c, 30);
    // 0cf3f3  add esp, 0x14
    X86_AT(c, 0xcf3f3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0cf3f6  pop edi
    X86_AT(c, 0xcf3f6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cf3f7  pop esi
    X86_AT(c, 0xcf3f7u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cf3f8  pop ebx
    X86_AT(c, 0xcf3f8u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cf3f9  leave 
    X86_AT(c, 0xcf3f9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cf3fa  ret 
    X86_AT(c, 0xcf3fau);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcf384u, "ran off the end of a function");
}
void f_000cf3fc(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0cf3fc  push ebp
    X86_AT(c, 0xcf3fcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cf3fd  mov ebp, esp
    X86_AT(c, 0xcf3fdu);
    c.r[5] = c.r[4];
    // 0cf3ff  sub esp, 8
    X86_AT(c, 0xcf3ffu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0cf402  push ebx
    X86_AT(c, 0xcf402u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cf403  push esi
    X86_AT(c, 0xcf403u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cf404  push edi
    X86_AT(c, 0xcf404u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cf405  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xcf405u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cf408  push edi
    X86_AT(c, 0xcf408u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cf409  call 0xc7f0c
    X86_AT(c, 0xcf409u);
    push32(c, 0xcf40eu); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xcf40eu);
    X86_TICK(c, 9);
    // 0cf40e  push 8
    X86_AT(c, 0xcf40eu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0cf410  call 0xb607c
    X86_AT(c, 0xcf410u);
    push32(c, 0xcf415u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xcf415u);
    X86_TICK(c, 9);
    // 0cf415  push 0xffffffff
    X86_AT(c, 0xcf415u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0cf417  call 0xb7f6c
    X86_AT(c, 0xcf417u);
    push32(c, 0xcf41cu); x86_call_known(c, 0xb7f6cu, f_000b7f6c); X86_RET(c, 0xcf41cu);
    X86_TICK(c, 37);
    // 0cf41c  mov ebx, dword ptr [0x458a8]
    X86_AT(c, 0xcf41cu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0x458A8u)));
    // 0cf422  inc dword ptr [0x458a8]
    X86_AT(c, 0xcf422u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x458A8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0cf428  lea eax, [ebx + ebx*2]
    X86_AT(c, 0xcf428u);
    c.r[0] = (uint32_t)(c.r[3] + c.r[3] * 2);
    // 0cf42b  mov edx, dword ptr [edi*4 + 0xa49f5]
    X86_AT(c, 0xcf42bu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA49F5u)));
    // 0cf432  mov dword ptr [eax*4 + 0x458ac], edx
    X86_AT(c, 0xcf432u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0x458ACu)), c.r[2]);
    // 0cf439  mov edx, dword ptr [edi*4 + 0xa4a05]
    X86_AT(c, 0xcf439u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4A05u)));
    // 0cf440  mov dword ptr [eax*4 + 0x458b0], edx
    X86_AT(c, 0xcf440u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0x458B0u)), c.r[2]);
    // 0cf447  mov dword ptr [eax*4 + 0x458b4], 0x8b
    X86_AT(c, 0xcf447u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0x458B4u)), 0x8Bu);
    // 0cf452  push 0
    X86_AT(c, 0xcf452u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cf454  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xcf454u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0cf457  call 0xbdea8
    X86_AT(c, 0xcf457u);
    push32(c, 0xcf45cu); x86_call_known(c, 0xbdea8u, f_000bdea8); X86_RET(c, 0xcf45cu);
    X86_TICK(c, 15);
    // 0cf45c  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xcf45cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0cf45f  mov dword ptr [eax*4 + 0x458b4], 0x8c
    X86_AT(c, 0xcf45fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0x458B4u)), 0x8Cu);
    // 0cf46a  push 0
    X86_AT(c, 0xcf46au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cf46c  call 0xbdea8
    X86_AT(c, 0xcf46cu);
    push32(c, 0xcf471u); x86_call_known(c, 0xbdea8u, f_000bdea8); X86_RET(c, 0xcf471u);
    X86_TICK(c, 15);
    // 0cf471  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xcf471u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0cf474  mov dword ptr [eax*4 + 0x458b4], 0x8d
    X86_AT(c, 0xcf474u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0x458B4u)), 0x8Du);
    // 0cf47f  push 0
    X86_AT(c, 0xcf47fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cf481  call 0xbdea8
    X86_AT(c, 0xcf481u);
    push32(c, 0xcf486u); x86_call_known(c, 0xbdea8u, f_000bdea8); X86_RET(c, 0xcf486u);
    X86_TICK(c, 15);
    // 0cf486  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xcf486u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0cf489  mov dword ptr [eax*4 + 0x458b4], 0x8e
    X86_AT(c, 0xcf489u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0x458B4u)), 0x8Eu);
    // 0cf494  push 0
    X86_AT(c, 0xcf494u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cf496  call 0xbdea8
    X86_AT(c, 0xcf496u);
    push32(c, 0xcf49bu); x86_call_known(c, 0xbdea8u, f_000bdea8); X86_RET(c, 0xcf49bu);
    X86_TICK(c, 15);
    // 0cf49b  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xcf49bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0cf49e  mov dword ptr [eax*4 + 0x458b4], 0x8f
    X86_AT(c, 0xcf49eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0x458B4u)), 0x8Fu);
    // 0cf4a9  push 0
    X86_AT(c, 0xcf4a9u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cf4ab  call 0xbdea8
    X86_AT(c, 0xcf4abu);
    push32(c, 0xcf4b0u); x86_call_known(c, 0xbdea8u, f_000bdea8); X86_RET(c, 0xcf4b0u);
    X86_TICK(c, 15);
    // 0cf4b0  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xcf4b0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0cf4b3  mov dword ptr [eax*4 + 0x458b4], 0x90
    X86_AT(c, 0xcf4b3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0x458B4u)), 0x90u);
    // 0cf4be  push 0
    X86_AT(c, 0xcf4beu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cf4c0  call 0xbdea8
    X86_AT(c, 0xcf4c0u);
    push32(c, 0xcf4c5u); x86_call_known(c, 0xbdea8u, f_000bdea8); X86_RET(c, 0xcf4c5u);
    X86_TICK(c, 9);
    // 0cf4c5  push 0xffffffff
    X86_AT(c, 0xcf4c5u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0cf4c7  call 0xb7f6c
    X86_AT(c, 0xcf4c7u);
    push32(c, 0xcf4ccu); x86_call_known(c, 0xb7f6cu, f_000b7f6c); X86_RET(c, 0xcf4ccu);
    X86_TICK(c, 9);
    // 0cf4cc  push 0
    X86_AT(c, 0xcf4ccu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cf4ce  call 0xbdea8
    X86_AT(c, 0xcf4ceu);
    push32(c, 0xcf4d3u); x86_call_known(c, 0xbdea8u, f_000bdea8); X86_RET(c, 0xcf4d3u);
    X86_TICK(c, 11);
    // 0cf4d3  add esp, 0x2c
    X86_AT(c, 0xcf4d3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0cf4d6  push edi
    X86_AT(c, 0xcf4d6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cf4d7  call 0xc7f0c
    X86_AT(c, 0xcf4d7u);
    push32(c, 0xcf4dcu); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xcf4dcu);
    X86_TICK(c, 13);
    // 0cf4dc  mov al, byte ptr [0xa4934]
    X86_AT(c, 0xcf4dcu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xA4934u))));
    // 0cf4e1  push eax
    X86_AT(c, 0xcf4e1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cf4e2  call 0xb8938
    X86_AT(c, 0xcf4e2u);
    push32(c, 0xcf4e7u); x86_call_known(c, 0xb8938u, f_000b8938); X86_RET(c, 0xcf4e7u);
    X86_TICK(c, 75);
    // 0cf4e7  lea edx, [edi + edi*2]
    X86_AT(c, 0xcf4e7u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0cf4ea  lea ecx, [edx*8]
    X86_AT(c, 0xcf4eau);
    c.r[1] = (uint32_t)(c.r[2] * 8);
    // 0cf4f1  lea ecx, [edx + ecx*8]
    X86_AT(c, 0xcf4f1u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 8);
    // 0cf4f4  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xcf4f4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0cf4f7  mov eax, dword ptr [ecx + 0xa4ad9]
    X86_AT(c, 0xcf4f7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0xA4AD9u)));
    // 0cf4fd  cdq 
    X86_AT(c, 0xcf4fdu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0cf4fe  mov dword ptr [ebp - 8], ecx
    X86_AT(c, 0xcf4feu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[1]);
    // 0cf501  mov ecx, 0x64
    X86_AT(c, 0xcf501u);
    c.r[1] = 0x64u;
    // 0cf506  idiv ecx
    X86_AT(c, 0xcf506u);
    x86_idiv(c, c.r[1], 4, 0xcf506u);
    // 0cf508  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0xcf508u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0cf50b  inc eax
    X86_AT(c, 0xcf50bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0cf50c  push eax
    X86_AT(c, 0xcf50cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cf50d  call 0xb61b4
    X86_AT(c, 0xcf50du);
    push32(c, 0xcf512u); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xcf512u);
    X86_TICK(c, 14);
    // 0cf512  xchg esi, eax
    X86_AT(c, 0xcf512u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0cf513  inc esi
    X86_AT(c, 0xcf513u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0cf514  push esi
    X86_AT(c, 0xcf514u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cf515  call 0xb61b4
    X86_AT(c, 0xcf515u);
    push32(c, 0xcf51au); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xcf51au);
    X86_TICK(c, 66);
    // 0cf51a  xchg esi, eax
    X86_AT(c, 0xcf51au);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0cf51b  inc esi
    X86_AT(c, 0xcf51bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0cf51c  add esp, 0x10
    X86_AT(c, 0xcf51cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0cf51f  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xcf51fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0cf522  mov eax, dword ptr [eax + 0xa4ad9]
    X86_AT(c, 0xcf522u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4AD9u)));
    // 0cf528  cdq 
    X86_AT(c, 0xcf528u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0cf529  mov ecx, 3
    X86_AT(c, 0xcf529u);
    c.r[1] = 0x3u;
    // 0cf52e  idiv ecx
    X86_AT(c, 0xcf52eu);
    x86_idiv(c, c.r[1], 4, 0xcf52eu);
    // 0cf530  cmp eax, esi
    X86_AT(c, 0xcf530u);
    (void)x86_sub(c, c.r[0], c.r[6], 0, 4);
    // 0cf532  jge 0xcf55b
    X86_AT(c, 0xcf532u);
    if (x86_cc(c, 13)) { goto L_cf55b; }
    X86_TICK(c, 9);
    // 0cf534  push 9
    X86_AT(c, 0xcf534u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0cf536  call 0xb61b4
    X86_AT(c, 0xcf536u);
    push32(c, 0xcf53bu); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xcf53bu);
    X86_TICK(c, 9);
    // 0cf53b  add esp, 4
    X86_AT(c, 0xcf53bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cf53e  and eax, eax
    X86_AT(c, 0xcf53eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cf540  je 0xcf55b
    X86_AT(c, 0xcf540u);
    if (x86_cc(c, 4)) { goto L_cf55b; }
    X86_TICK(c, 104);
    // 0cf542  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xcf542u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0cf545  mov eax, dword ptr [eax + 0xa4ad9]
    X86_AT(c, 0xcf545u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4AD9u)));
    // 0cf54b  cdq 
    X86_AT(c, 0xcf54bu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0cf54c  mov ecx, 3
    X86_AT(c, 0xcf54cu);
    c.r[1] = 0x3u;
    // 0cf551  idiv ecx
    X86_AT(c, 0xcf551u);
    x86_idiv(c, c.r[1], 4, 0xcf551u);
    // 0cf553  xchg ecx, eax
    X86_AT(c, 0xcf553u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
    // 0cf554  xchg esi, eax
    X86_AT(c, 0xcf554u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0cf555  cdq 
    X86_AT(c, 0xcf555u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0cf556  idiv ecx
    X86_AT(c, 0xcf556u);
    x86_idiv(c, c.r[1], 4, 0xcf556u);
    // 0cf558  inc edx
    X86_AT(c, 0xcf558u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0cf559  mov esi, edx
    X86_AT(c, 0xcf559u);
    c.r[6] = c.r[2];
L_cf55b:
    X86_TICK(c, 11);
    // 0cf55b  push esi
    X86_AT(c, 0xcf55bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cf55c  push edi
    X86_AT(c, 0xcf55cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cf55d  call 0xc9b10
    X86_AT(c, 0xcf55du);
    push32(c, 0xcf562u); x86_call_known(c, 0xc9b10u, f_000c9b10); X86_RET(c, 0xcf562u);
    X86_TICK(c, 9);
    // 0cf562  push edi
    X86_AT(c, 0xcf562u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cf563  call 0xc7f0c
    X86_AT(c, 0xcf563u);
    push32(c, 0xcf568u); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xcf568u);
    X86_TICK(c, 9);
    // 0cf568  push edi
    X86_AT(c, 0xcf568u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cf569  call 0xc7f0c
    X86_AT(c, 0xcf569u);
    push32(c, 0xcf56eu); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xcf56eu);
    X86_TICK(c, 14);
    // 0cf56e  add esp, 0x10
    X86_AT(c, 0xcf56eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0cf571  cmp dword ptr [0xa4a5a], 0xff
    X86_AT(c, 0xcf571u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A5Au))), 0xFFu, 0, 4);
    // 0cf57b  jne 0xcf584
    X86_AT(c, 0xcf57bu);
    if (x86_cc(c, 5)) { goto L_cf584; }
    X86_TICK(c, 9);
    // 0cf57d  push 0x80
    X86_AT(c, 0xcf57du);
    { uint32_t v = 0x80u; push32(c, v); }
    // 0cf582  jmp 0xcf58d
    X86_AT(c, 0xcf582u);
    goto L_cf58d;
L_cf584:
    X86_TICK(c, 9);
    // 0cf584  mov eax, dword ptr [0xa4a5a]
    X86_AT(c, 0xcf584u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA4A5Au)));
    // 0cf589  shl eax, 2
    X86_AT(c, 0xcf589u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[0] = r; }
    // 0cf58c  push eax
    X86_AT(c, 0xcf58cu);
    { uint32_t v = c.r[0]; push32(c, v); }
L_cf58d:
    X86_TICK(c, 9);
    // 0cf58d  push edi
    X86_AT(c, 0xcf58du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cf58e  call 0xc9b10
    X86_AT(c, 0xcf58eu);
    push32(c, 0xcf593u); x86_call_known(c, 0xc9b10u, f_000c9b10); X86_RET(c, 0xcf593u);
    X86_TICK(c, 11);
    // 0cf593  add esp, 8
    X86_AT(c, 0xcf593u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cf596  push 0xffffffff
    X86_AT(c, 0xcf596u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0cf598  call 0xb7f6c
    X86_AT(c, 0xcf598u);
    push32(c, 0xcf59du); x86_call_known(c, 0xb7f6cu, f_000b7f6c); X86_RET(c, 0xcf59du);
    X86_TICK(c, 9);
    // 0cf59d  push 0
    X86_AT(c, 0xcf59du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cf59f  call 0xbdea8
    X86_AT(c, 0xcf59fu);
    push32(c, 0xcf5a4u); x86_call_known(c, 0xbdea8u, f_000bdea8); X86_RET(c, 0xcf5a4u);
    X86_TICK(c, 9);
    // 0cf5a4  push 7
    X86_AT(c, 0xcf5a4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf5a6  call 0xbb6b0
    X86_AT(c, 0xcf5a6u);
    push32(c, 0xcf5abu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xcf5abu);
    X86_TICK(c, 11);
    // 0cf5ab  push 0x976c
    X86_AT(c, 0xcf5abu);
    { uint32_t v = 0x976Cu; push32(c, v); }
    // 0cf5b0  push 7
    X86_AT(c, 0xcf5b0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf5b2  call 0xba428
    X86_AT(c, 0xcf5b2u);
    push32(c, 0xcf5b7u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcf5b7u);
    X86_TICK(c, 9);
    // 0cf5b7  push 7
    X86_AT(c, 0xcf5b7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf5b9  call 0xbbb5c
    X86_AT(c, 0xcf5b9u);
    push32(c, 0xcf5beu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcf5beu);
    X86_TICK(c, 20);
    // 0cf5be  lea eax, [edi + edi*2]
    X86_AT(c, 0xcf5beu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0cf5c1  lea edx, [eax*8]
    X86_AT(c, 0xcf5c1u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0cf5c8  lea edx, [eax + edx*8]
    X86_AT(c, 0xcf5c8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0cf5cb  add esp, 0x18
    X86_AT(c, 0xcf5cbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0cf5ce  cmp byte ptr [edx + 0xa4abd], 0x44
    X86_AT(c, 0xcf5ceu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu))), 0x44u, 0, 1);
    // 0cf5d5  jne 0xcf60a
    X86_AT(c, 0xcf5d5u);
    if (x86_cc(c, 5)) { goto L_cf60a; }
    X86_TICK(c, 13);
    // 0cf5d7  mov dword ptr [edi*4 + 0xa49f5], 0xffffffff
    X86_AT(c, 0xcf5d7u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA49F5u)), 0xFFFFFFFFu);
    // 0cf5e2  mov dword ptr [edi*4 + 0xa4a05], 0xffffffff
    X86_AT(c, 0xcf5e2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xA4A05u)), 0xFFFFFFFFu);
    // 0cf5ed  push 0xffffffff
    X86_AT(c, 0xcf5edu);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0cf5ef  call 0xb7f6c
    X86_AT(c, 0xcf5efu);
    push32(c, 0xcf5f4u); x86_call_known(c, 0xb7f6cu, f_000b7f6c); X86_RET(c, 0xcf5f4u);
    X86_TICK(c, 11);
    // 0cf5f4  push 0x9780
    X86_AT(c, 0xcf5f4u);
    { uint32_t v = 0x9780u; push32(c, v); }
    // 0cf5f9  push 7
    X86_AT(c, 0xcf5f9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf5fb  call 0xba428
    X86_AT(c, 0xcf5fbu);
    push32(c, 0xcf600u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcf600u);
    X86_TICK(c, 9);
    // 0cf600  push 7
    X86_AT(c, 0xcf600u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf602  call 0xbbb5c
    X86_AT(c, 0xcf602u);
    push32(c, 0xcf607u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcf607u);
    X86_TICK(c, 2);
    // 0cf607  add esp, 0x10
    X86_AT(c, 0xcf607u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_cf60a:
    X86_TICK(c, 28);
    // 0cf60a  pop edi
    X86_AT(c, 0xcf60au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cf60b  pop esi
    X86_AT(c, 0xcf60bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cf60c  pop ebx
    X86_AT(c, 0xcf60cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cf60d  leave 
    X86_AT(c, 0xcf60du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cf60e  ret 
    X86_AT(c, 0xcf60eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcf3fcu, "ran off the end of a function");
}
void f_000cf610(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0cf610  push ebp
    X86_AT(c, 0xcf610u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cf611  mov ebp, esp
    X86_AT(c, 0xcf611u);
    c.r[5] = c.r[4];
    // 0cf613  push ebx
    X86_AT(c, 0xcf613u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cf614  push edi
    X86_AT(c, 0xcf614u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cf615  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xcf615u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cf618  call 0xcaa9c
    X86_AT(c, 0xcf618u);
    push32(c, 0xcf61du); x86_call_known(c, 0xcaa9cu, f_000caa9c); X86_RET(c, 0xcf61du);
    X86_TICK(c, 9);
    // 0cf61d  push 3
    X86_AT(c, 0xcf61du);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0cf61f  call 0xb61b4
    X86_AT(c, 0xcf61fu);
    push32(c, 0xcf624u); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xcf624u);
    X86_TICK(c, 9);
    // 0cf624  add esp, 4
    X86_AT(c, 0xcf624u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cf627  and eax, eax
    X86_AT(c, 0xcf627u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cf629  jne 0xcf68e
    X86_AT(c, 0xcf629u);
    if (x86_cc(c, 5)) { goto L_cf68e; }
    X86_TICK(c, 18);
    // 0cf62b  lea eax, [edi + edi*2]
    X86_AT(c, 0xcf62bu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0cf62e  lea edx, [eax*8]
    X86_AT(c, 0xcf62eu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0cf635  lea edx, [eax + edx*8]
    X86_AT(c, 0xcf635u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0cf638  cmp byte ptr [edx + 0xa4abd], 0x47
    X86_AT(c, 0xcf638u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu))), 0x47u, 0, 1);
    // 0cf63f  jne 0xcf68e
    X86_AT(c, 0xcf63fu);
    if (x86_cc(c, 5)) { goto L_cf68e; }
    X86_TICK(c, 11);
    // 0cf641  push 7
    X86_AT(c, 0xcf641u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf643  mov ebx, edx
    X86_AT(c, 0xcf643u);
    c.r[3] = c.r[2];
    // 0cf645  call 0xbb6b0
    X86_AT(c, 0xcf645u);
    push32(c, 0xcf64au); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xcf64au);
    X86_TICK(c, 15);
    // 0cf64a  lea eax, [ebx*1 + 0xa4aa0]
    X86_AT(c, 0xcf64au);
    c.r[0] = (uint32_t)(c.r[3] + 0xA4AA0u);
    // 0cf651  push eax
    X86_AT(c, 0xcf651u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cf652  push 7
    X86_AT(c, 0xcf652u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf654  mov ebx, eax
    X86_AT(c, 0xcf654u);
    c.r[3] = c.r[0];
    // 0cf656  call 0xbbfe0
    X86_AT(c, 0xcf656u);
    push32(c, 0xcf65bu); x86_call_known(c, 0xbbfe0u, f_000bbfe0); X86_RET(c, 0xcf65bu);
    X86_TICK(c, 9);
    // 0cf65b  push 7
    X86_AT(c, 0xcf65bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf65d  call 0xbbb5c
    X86_AT(c, 0xcf65du);
    push32(c, 0xcf662u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcf662u);
    X86_TICK(c, 11);
    // 0cf662  push 0x97a8
    X86_AT(c, 0xcf662u);
    { uint32_t v = 0x97A8u; push32(c, v); }
    // 0cf667  push 7
    X86_AT(c, 0xcf667u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf669  call 0xbbba4
    X86_AT(c, 0xcf669u);
    push32(c, 0xcf66eu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xcf66eu);
    X86_TICK(c, 11);
    // 0cf66e  push 0x97ac
    X86_AT(c, 0xcf66eu);
    { uint32_t v = 0x97ACu; push32(c, v); }
    // 0cf673  push 7
    X86_AT(c, 0xcf673u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf675  call 0xba428
    X86_AT(c, 0xcf675u);
    push32(c, 0xcf67au); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcf67au);
    X86_TICK(c, 9);
    // 0cf67a  push 7
    X86_AT(c, 0xcf67au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf67c  call 0xbbb5c
    X86_AT(c, 0xcf67cu);
    push32(c, 0xcf681u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcf681u);
    X86_TICK(c, 11);
    // 0cf681  mov byte ptr [ebx + 0x1d], 0x50
    X86_AT(c, 0xcf681u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Du)), 0x50u);
    // 0cf685  push edi
    X86_AT(c, 0xcf685u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cf686  call 0xbe720
    X86_AT(c, 0xcf686u);
    push32(c, 0xcf68bu); x86_call_known(c, 0xbe720u, f_000be720); X86_RET(c, 0xcf68bu);
    X86_TICK(c, 2);
    // 0cf68b  add esp, 0x28
    X86_AT(c, 0xcf68bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
L_cf68e:
    X86_TICK(c, 24);
    // 0cf68e  pop edi
    X86_AT(c, 0xcf68eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cf68f  pop ebx
    X86_AT(c, 0xcf68fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cf690  leave 
    X86_AT(c, 0xcf690u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cf691  ret 
    X86_AT(c, 0xcf691u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcf610u, "ran off the end of a function");
}
void f_000cf694(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0cf694  push ebp
    X86_AT(c, 0xcf694u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cf695  mov ebp, esp
    X86_AT(c, 0xcf695u);
    c.r[5] = c.r[4];
    // 0cf697  push esi
    X86_AT(c, 0xcf697u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cf698  push edi
    X86_AT(c, 0xcf698u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cf699  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xcf699u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cf69c  call 0xcaa9c
    X86_AT(c, 0xcf69cu);
    push32(c, 0xcf6a1u); x86_call_known(c, 0xcaa9cu, f_000caa9c); X86_RET(c, 0xcf6a1u);
    X86_TICK(c, 9);
    // 0cf6a1  push 9
    X86_AT(c, 0xcf6a1u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0cf6a3  call 0xb61b4
    X86_AT(c, 0xcf6a3u);
    push32(c, 0xcf6a8u); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xcf6a8u);
    X86_TICK(c, 9);
    // 0cf6a8  add esp, 4
    X86_AT(c, 0xcf6a8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cf6ab  cmp eax, 5
    X86_AT(c, 0xcf6abu);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0cf6ae  jge 0xcf711
    X86_AT(c, 0xcf6aeu);
    if (x86_cc(c, 13)) { goto L_cf711; }
    X86_TICK(c, 9);
    // 0cf6b0  push 0x11
    X86_AT(c, 0xcf6b0u);
    { uint32_t v = 0x11u; push32(c, v); }
    // 0cf6b2  call 0xb61b4
    X86_AT(c, 0xcf6b2u);
    push32(c, 0xcf6b7u); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xcf6b7u);
    X86_TICK(c, 12);
    // 0cf6b7  xchg esi, eax
    X86_AT(c, 0xcf6b7u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0cf6b8  add esp, 4
    X86_AT(c, 0xcf6b8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cf6bb  and esi, esi
    X86_AT(c, 0xcf6bbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0cf6bd  je 0xcf7b4
    X86_AT(c, 0xcf6bdu);
    if (x86_cc(c, 4)) { goto L_cf7b4; }
    X86_TICK(c, 21);
    // 0cf6c3  lea eax, [edi + edi*2]
    X86_AT(c, 0xcf6c3u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0cf6c6  lea edx, [eax*8]
    X86_AT(c, 0xcf6c6u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0cf6cd  lea edx, [eax + edx*8]
    X86_AT(c, 0xcf6cdu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0cf6d0  movzx eax, byte ptr [edx + 0xa4b1a]
    X86_AT(c, 0xcf6d0u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4B1Au)));
    // 0cf6d7  sub eax, 0x41
    X86_AT(c, 0xcf6d7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x41u, 0, 4); }
    // 0cf6da  cmp esi, eax
    X86_AT(c, 0xcf6dau);
    (void)x86_sub(c, c.r[6], c.r[0], 0, 4);
    // 0cf6dc  jne 0xcf6ec
    X86_AT(c, 0xcf6dcu);
    if (x86_cc(c, 5)) { goto L_cf6ec; }
    X86_TICK(c, 12);
    // 0cf6de  cmp dword ptr [edx + esi*4 + 0xa4b1b], 1
    X86_AT(c, 0xcf6deu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[6] * 4 + 0xA4B1Bu))), 0x1u, 0, 4);
    // 0cf6e6  jle 0xcf7b4
    X86_AT(c, 0xcf6e6u);
    if (x86_cc(c, 14)) { goto L_cf7b4; }
L_cf6ec:
    X86_TICK(c, 17);
    // 0cf6ec  lea eax, [edi + edi*2]
    X86_AT(c, 0xcf6ecu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0cf6ef  lea edx, [eax*8]
    X86_AT(c, 0xcf6efu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0cf6f6  lea edx, [eax + edx*8]
    X86_AT(c, 0xcf6f6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0cf6f9  mov eax, dword ptr [edx + esi*4 + 0xa4b1b]
    X86_AT(c, 0xcf6f9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[6] * 4 + 0xA4B1Bu)));
    // 0cf700  and eax, eax
    X86_AT(c, 0xcf700u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cf702  jle 0xcf7b4
    X86_AT(c, 0xcf702u);
    if (x86_cc(c, 14)) { goto L_cf7b4; }
    X86_TICK(c, 13);
    // 0cf708  dec dword ptr [edx + esi*4 + 0xa4b1b]
    X86_AT(c, 0xcf708u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + c.r[6] * 4 + 0xA4B1Bu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0cf70f  jmp 0xcf768
    X86_AT(c, 0xcf70fu);
    goto L_cf768;
L_cf711:
    X86_TICK(c, 9);
    // 0cf711  push 7
    X86_AT(c, 0xcf711u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf713  call 0xb61b4
    X86_AT(c, 0xcf713u);
    push32(c, 0xcf718u); x86_call_known(c, 0xb61b4u, f_000b61b4); X86_RET(c, 0xcf718u);
    X86_TICK(c, 12);
    // 0cf718  xchg esi, eax
    X86_AT(c, 0xcf718u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0cf719  add esp, 4
    X86_AT(c, 0xcf719u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cf71c  and esi, esi
    X86_AT(c, 0xcf71cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0cf71e  je 0xcf7b4
    X86_AT(c, 0xcf71eu);
    if (x86_cc(c, 4)) { goto L_cf7b4; }
    X86_TICK(c, 21);
    // 0cf724  lea eax, [edi + edi*2]
    X86_AT(c, 0xcf724u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0cf727  lea edx, [eax*8]
    X86_AT(c, 0xcf727u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0cf72e  lea edx, [eax + edx*8]
    X86_AT(c, 0xcf72eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0cf731  movzx eax, byte ptr [edx + 0xa4af9]
    X86_AT(c, 0xcf731u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AF9u)));
    // 0cf738  sub eax, 0x41
    X86_AT(c, 0xcf738u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x41u, 0, 4); }
    // 0cf73b  cmp esi, eax
    X86_AT(c, 0xcf73bu);
    (void)x86_sub(c, c.r[6], c.r[0], 0, 4);
    // 0cf73d  jne 0xcf749
    X86_AT(c, 0xcf73du);
    if (x86_cc(c, 5)) { goto L_cf749; }
    X86_TICK(c, 12);
    // 0cf73f  cmp dword ptr [edx + esi*4 + 0xa4afa], 1
    X86_AT(c, 0xcf73fu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[6] * 4 + 0xA4AFAu))), 0x1u, 0, 4);
    // 0cf747  jle 0xcf7b4
    X86_AT(c, 0xcf747u);
    if (x86_cc(c, 14)) { goto L_cf7b4; }
L_cf749:
    X86_TICK(c, 22);
    // 0cf749  mov eax, edi
    X86_AT(c, 0xcf749u);
    c.r[0] = c.r[7];
    // 0cf74b  lea edx, [eax + eax*2]
    X86_AT(c, 0xcf74bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cf74e  shl edx, 5
    X86_AT(c, 0xcf74eu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0cf751  add edx, eax
    X86_AT(c, 0xcf751u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cf753  lea edx, [eax + edx*2]
    X86_AT(c, 0xcf753u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0cf756  mov eax, dword ptr [edx + esi*4 + 0xa4afa]
    X86_AT(c, 0xcf756u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[6] * 4 + 0xA4AFAu)));
    // 0cf75d  and eax, eax
    X86_AT(c, 0xcf75du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0cf75f  jle 0xcf7b4
    X86_AT(c, 0xcf75fu);
    if (x86_cc(c, 14)) { goto L_cf7b4; }
    X86_TICK(c, 6);
    // 0cf761  dec dword ptr [edx + esi*4 + 0xa4afa]
    X86_AT(c, 0xcf761u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + c.r[6] * 4 + 0xA4AFAu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_cf768:
    X86_TICK(c, 9);
    // 0cf768  push 7
    X86_AT(c, 0xcf768u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf76a  call 0xbb6b0
    X86_AT(c, 0xcf76au);
    push32(c, 0xcf76fu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xcf76fu);
    X86_TICK(c, 24);
    // 0cf76f  mov eax, edi
    X86_AT(c, 0xcf76fu);
    c.r[0] = c.r[7];
    // 0cf771  lea edx, [eax + eax*2]
    X86_AT(c, 0xcf771u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cf774  shl edx, 5
    X86_AT(c, 0xcf774u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0cf777  add edx, eax
    X86_AT(c, 0xcf777u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cf779  lea edx, [eax + edx*2]
    X86_AT(c, 0xcf779u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0cf77c  lea eax, [edx*1 + 0xa4aa0]
    X86_AT(c, 0xcf77cu);
    c.r[0] = (uint32_t)(c.r[2] + 0xA4AA0u);
    // 0cf783  push eax
    X86_AT(c, 0xcf783u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cf784  push 7
    X86_AT(c, 0xcf784u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf786  call 0xbbfe0
    X86_AT(c, 0xcf786u);
    push32(c, 0xcf78bu); x86_call_known(c, 0xbbfe0u, f_000bbfe0); X86_RET(c, 0xcf78bu);
    X86_TICK(c, 9);
    // 0cf78b  push 7
    X86_AT(c, 0xcf78bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf78d  call 0xbbb5c
    X86_AT(c, 0xcf78du);
    push32(c, 0xcf792u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcf792u);
    X86_TICK(c, 11);
    // 0cf792  push 0x97ce
    X86_AT(c, 0xcf792u);
    { uint32_t v = 0x97CEu; push32(c, v); }
    // 0cf797  push 7
    X86_AT(c, 0xcf797u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf799  call 0xbbba4
    X86_AT(c, 0xcf799u);
    push32(c, 0xcf79eu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xcf79eu);
    X86_TICK(c, 11);
    // 0cf79e  push 0x97d4
    X86_AT(c, 0xcf79eu);
    { uint32_t v = 0x97D4u; push32(c, v); }
    // 0cf7a3  push 7
    X86_AT(c, 0xcf7a3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf7a5  call 0xba428
    X86_AT(c, 0xcf7a5u);
    push32(c, 0xcf7aau); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcf7aau);
    X86_TICK(c, 9);
    // 0cf7aa  push 7
    X86_AT(c, 0xcf7aau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf7ac  call 0xbbb5c
    X86_AT(c, 0xcf7acu);
    push32(c, 0xcf7b1u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcf7b1u);
    X86_TICK(c, 2);
    // 0cf7b1  add esp, 0x24
    X86_AT(c, 0xcf7b1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
L_cf7b4:
    X86_TICK(c, 24);
    // 0cf7b4  pop edi
    X86_AT(c, 0xcf7b4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cf7b5  pop esi
    X86_AT(c, 0xcf7b5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cf7b6  leave 
    X86_AT(c, 0xcf7b6u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cf7b7  ret 
    X86_AT(c, 0xcf7b7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcf694u, "ran off the end of a function");
}
void f_000cf7b8(X86Cpu& c) {
    X86_TICK(c, 4);
    // 0cf7b8  push edi
    X86_AT(c, 0xcf7b8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cf7b9  sub edi, edi
    X86_AT(c, 0xcf7b9u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_cf7bb:
    X86_TICK(c, 7);
    // 0cf7bb  cmp edi, 4
    X86_AT(c, 0xcf7bbu);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0cf7be  jge 0xcf7de
    X86_AT(c, 0xcf7beu);
    if (x86_cc(c, 13)) { goto L_cf7de; }
    X86_TICK(c, 22);
    // 0cf7c0  mov eax, edi
    X86_AT(c, 0xcf7c0u);
    c.r[0] = c.r[7];
    // 0cf7c2  lea edx, [eax + eax*2]
    X86_AT(c, 0xcf7c2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0cf7c5  shl edx, 5
    X86_AT(c, 0xcf7c5u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0cf7c8  add edx, eax
    X86_AT(c, 0xcf7c8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0cf7ca  lea edx, [eax + edx*2]
    X86_AT(c, 0xcf7cau);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0cf7cd  mov al, byte ptr [edx + 0xa4abd]
    X86_AT(c, 0xcf7cdu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu))));
    // 0cf7d3  cmp al, 0x47
    X86_AT(c, 0xcf7d3u);
    (void)x86_sub(c, g8(c, 0), 0x47u, 0, 1);
    // 0cf7d5  je 0xcf7de
    X86_AT(c, 0xcf7d5u);
    if (x86_cc(c, 4)) { goto L_cf7de; }
    X86_TICK(c, 7);
    // 0cf7d7  cmp al, 0x50
    X86_AT(c, 0xcf7d7u);
    (void)x86_sub(c, g8(c, 0), 0x50u, 0, 1);
    // 0cf7d9  je 0xcf7de
    X86_AT(c, 0xcf7d9u);
    if (x86_cc(c, 4)) { goto L_cf7de; }
    X86_TICK(c, 9);
    // 0cf7db  inc edi
    X86_AT(c, 0xcf7dbu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cf7dc  jmp 0xcf7bb
    X86_AT(c, 0xcf7dcu);
    X86_POLL(c, 0xcf7bbu); goto L_cf7bb;
L_cf7de:
    X86_TICK(c, 9);
    // 0cf7de  push 7
    X86_AT(c, 0xcf7deu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf7e0  call 0xbb6b0
    X86_AT(c, 0xcf7e0u);
    push32(c, 0xcf7e5u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xcf7e5u);
    X86_TICK(c, 9);
    // 0cf7e5  add esp, 4
    X86_AT(c, 0xcf7e5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cf7e8  cmp edi, 4
    X86_AT(c, 0xcf7e8u);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0cf7eb  jge 0xcf81f
    X86_AT(c, 0xcf7ebu);
    if (x86_cc(c, 13)) { goto L_cf81f; }
    X86_TICK(c, 9);
    // 0cf7ed  push edi
    X86_AT(c, 0xcf7edu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cf7ee  call 0xc71e4
    X86_AT(c, 0xcf7eeu);
    push32(c, 0xcf7f3u); x86_call_known(c, 0xc71e4u, f_000c71e4); X86_RET(c, 0xcf7f3u);
    X86_TICK(c, 9);
    // 0cf7f3  add esp, 4
    X86_AT(c, 0xcf7f3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cf7f6  inc eax
    X86_AT(c, 0xcf7f6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0cf7f7  jne 0xcf81f
    X86_AT(c, 0xcf7f7u);
    if (x86_cc(c, 5)) { goto L_cf81f; }
    X86_TICK(c, 9);
    // 0cf7f9  push 2
    X86_AT(c, 0xcf7f9u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cf7fb  call 0xb607c
    X86_AT(c, 0xcf7fbu);
    push32(c, 0xcf800u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xcf800u);
    X86_TICK(c, 11);
    // 0cf800  push 0x97f8
    X86_AT(c, 0xcf800u);
    { uint32_t v = 0x97F8u; push32(c, v); }
    // 0cf805  push 7
    X86_AT(c, 0xcf805u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf807  call 0xba428
    X86_AT(c, 0xcf807u);
    push32(c, 0xcf80cu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcf80cu);
    X86_TICK(c, 9);
    // 0cf80c  push 7
    X86_AT(c, 0xcf80cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf80e  call 0xbbb5c
    X86_AT(c, 0xcf80eu);
    push32(c, 0xcf813u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcf813u);
    X86_TICK(c, 9);
    // 0cf813  push 5
    X86_AT(c, 0xcf813u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0cf815  call 0xbebbc
    X86_AT(c, 0xcf815u);
    push32(c, 0xcf81au); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xcf81au);
    X86_TICK(c, 9);
    // 0cf81a  add esp, 0x14
    X86_AT(c, 0xcf81au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0cf81d  jmp 0xcf824
    X86_AT(c, 0xcf81du);
    goto L_cf824;
L_cf81f:
    X86_TICK(c, 7);
    // 0cf81f  call 0xcd64c
    X86_AT(c, 0xcf81fu);
    push32(c, 0xcf824u); x86_call_known(c, 0xcd64cu, f_000cd64c); X86_RET(c, 0xcf824u);
L_cf824:
    X86_TICK(c, 14);
    // 0cf824  pop edi
    X86_AT(c, 0xcf824u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cf825  ret 
    X86_AT(c, 0xcf825u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcf7b8u, "ran off the end of a function");
}
void f_000cf828(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0cf828  push ebp
    X86_AT(c, 0xcf828u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cf829  mov ebp, esp
    X86_AT(c, 0xcf829u);
    c.r[5] = c.r[4];
    // 0cf82b  push edi
    X86_AT(c, 0xcf82bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cf82c  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xcf82cu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cf82f  push edi
    X86_AT(c, 0xcf82fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cf830  call 0xbb6b0
    X86_AT(c, 0xcf830u);
    push32(c, 0xcf835u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xcf835u);
    X86_TICK(c, 16);
    // 0cf835  push 7
    X86_AT(c, 0xcf835u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf837  push dword ptr [0xa4a5e]
    X86_AT(c, 0xcf837u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A5Eu))); push32(c, v); }
    // 0cf83d  push edi
    X86_AT(c, 0xcf83du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cf83e  call 0xba404
    X86_AT(c, 0xcf83eu);
    push32(c, 0xcf843u); x86_call_known(c, 0xba404u, f_000ba404); X86_RET(c, 0xcf843u);
    X86_TICK(c, 11);
    // 0cf843  push 0x9814
    X86_AT(c, 0xcf843u);
    { uint32_t v = 0x9814u; push32(c, v); }
    // 0cf848  push 7
    X86_AT(c, 0xcf848u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf84a  call 0xbbba4
    X86_AT(c, 0xcf84au);
    push32(c, 0xcf84fu); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xcf84fu);
    X86_TICK(c, 22);
    // 0cf84f  add esp, 0x18
    X86_AT(c, 0xcf84fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0cf852  pop edi
    X86_AT(c, 0xcf852u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cf853  leave 
    X86_AT(c, 0xcf853u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cf854  ret 
    X86_AT(c, 0xcf854u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcf828u, "ran off the end of a function");
}
void f_000cf858(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0cf858  push edi
    X86_AT(c, 0xcf858u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cf859  call 0xb8d84
    X86_AT(c, 0xcf859u);
    push32(c, 0xcf85eu); x86_call_known(c, 0xb8d84u, f_000b8d84); X86_RET(c, 0xcf85eu);
    X86_TICK(c, 7);
    // 0cf85e  call 0xb5aac
    X86_AT(c, 0xcf85eu);
    push32(c, 0xcf863u); x86_call_known(c, 0xb5aacu, f_000b5aac); X86_RET(c, 0xcf863u);
    X86_TICK(c, 7);
    // 0cf863  call 0xd438c
    X86_AT(c, 0xcf863u);
    push32(c, 0xcf868u); x86_call_known(c, 0xd438cu, f_000d438c); X86_RET(c, 0xcf868u);
    X86_TICK(c, 7);
    // 0cf868  call 0xbd5d0
    X86_AT(c, 0xcf868u);
    push32(c, 0xcf86du); x86_call_known(c, 0xbd5d0u, f_000bd5d0); X86_RET(c, 0xcf86du);
    X86_TICK(c, 7);
    // 0cf86d  call 0xcfc54
    X86_AT(c, 0xcf86du);
    push32(c, 0xcf872u); x86_call_known(c, 0xcfc54u, f_000cfc54); X86_RET(c, 0xcf872u);
    X86_TICK(c, 7);
    // 0cf872  call 0xb51a8
    X86_AT(c, 0xcf872u);
    push32(c, 0xcf877u); x86_call_known(c, 0xb51a8u, f_000b51a8); X86_RET(c, 0xcf877u);
    X86_TICK(c, 9);
    // 0cf877  push 0xd
    X86_AT(c, 0xcf877u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0cf879  call 0xba54c
    X86_AT(c, 0xcf879u);
    push32(c, 0xcf87eu); x86_call_known(c, 0xba54cu, f_000ba54c); X86_RET(c, 0xcf87eu);
    X86_TICK(c, 9);
    // 0cf87e  push 0xd
    X86_AT(c, 0xcf87eu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0cf880  call 0xba51c
    X86_AT(c, 0xcf880u);
    push32(c, 0xcf885u); x86_call_known(c, 0xba51cu, f_000ba51c); X86_RET(c, 0xcf885u);
    X86_TICK(c, 15);
    // 0cf885  push 0x191
    X86_AT(c, 0xcf885u);
    { uint32_t v = 0x191u; push32(c, v); }
    // 0cf88a  push 0x16c
    X86_AT(c, 0xcf88au);
    { uint32_t v = 0x16Cu; push32(c, v); }
    // 0cf88f  push 0x2d
    X86_AT(c, 0xcf88fu);
    { uint32_t v = 0x2Du; push32(c, v); }
    // 0cf891  push 8
    X86_AT(c, 0xcf891u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0cf893  call 0xbabb4
    X86_AT(c, 0xcf893u);
    push32(c, 0xcf898u); x86_call_known(c, 0xbabb4u, f_000babb4); X86_RET(c, 0xcf898u);
    X86_TICK(c, 9);
    // 0cf898  push 0xf
    X86_AT(c, 0xcf898u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cf89a  call 0xbebbc
    X86_AT(c, 0xcf89au);
    push32(c, 0xcf89fu); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xcf89fu);
    X86_TICK(c, 11);
    // 0cf89f  push 0xd
    X86_AT(c, 0xcf89fu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0cf8a1  push 8
    X86_AT(c, 0xcf8a1u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0cf8a3  call 0xbba64
    X86_AT(c, 0xcf8a3u);
    push32(c, 0xcf8a8u); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xcf8a8u);
    X86_TICK(c, 9);
    // 0cf8a8  push 0xf
    X86_AT(c, 0xcf8a8u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cf8aa  call 0xbebbc
    X86_AT(c, 0xcf8aau);
    push32(c, 0xcf8afu); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xcf8afu);
    X86_TICK(c, 11);
    // 0cf8af  push 0xd
    X86_AT(c, 0xcf8afu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0cf8b1  push 3
    X86_AT(c, 0xcf8b1u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0cf8b3  call 0xbba64
    X86_AT(c, 0xcf8b3u);
    push32(c, 0xcf8b8u); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xcf8b8u);
    X86_TICK(c, 9);
    // 0cf8b8  push 0xf
    X86_AT(c, 0xcf8b8u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cf8ba  call 0xbebbc
    X86_AT(c, 0xcf8bau);
    push32(c, 0xcf8bfu); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xcf8bfu);
    X86_TICK(c, 11);
    // 0cf8bf  push 0xd
    X86_AT(c, 0xcf8bfu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0cf8c1  push 0xa
    X86_AT(c, 0xcf8c1u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0cf8c3  call 0xbba64
    X86_AT(c, 0xcf8c3u);
    push32(c, 0xcf8c8u); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xcf8c8u);
    X86_TICK(c, 11);
    // 0cf8c8  add esp, 0x3c
    X86_AT(c, 0xcf8c8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0cf8cb  push 0xf
    X86_AT(c, 0xcf8cbu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cf8cd  call 0xbebbc
    X86_AT(c, 0xcf8cdu);
    push32(c, 0xcf8d2u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xcf8d2u);
    X86_TICK(c, 11);
    // 0cf8d2  push 0xd
    X86_AT(c, 0xcf8d2u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0cf8d4  push 0xb
    X86_AT(c, 0xcf8d4u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0cf8d6  call 0xbba64
    X86_AT(c, 0xcf8d6u);
    push32(c, 0xcf8dbu); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xcf8dbu);
    X86_TICK(c, 9);
    // 0cf8db  push 0xf
    X86_AT(c, 0xcf8dbu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cf8dd  call 0xbebbc
    X86_AT(c, 0xcf8ddu);
    push32(c, 0xcf8e2u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xcf8e2u);
    X86_TICK(c, 11);
    // 0cf8e2  push 0xd
    X86_AT(c, 0xcf8e2u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0cf8e4  push 0xc
    X86_AT(c, 0xcf8e4u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0cf8e6  call 0xbba64
    X86_AT(c, 0xcf8e6u);
    push32(c, 0xcf8ebu); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xcf8ebu);
    X86_TICK(c, 9);
    // 0cf8eb  push 0xf
    X86_AT(c, 0xcf8ebu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cf8ed  call 0xbebbc
    X86_AT(c, 0xcf8edu);
    push32(c, 0xcf8f2u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xcf8f2u);
    X86_TICK(c, 11);
    // 0cf8f2  push 0xd
    X86_AT(c, 0xcf8f2u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0cf8f4  push 0xd
    X86_AT(c, 0xcf8f4u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0cf8f6  call 0xbba64
    X86_AT(c, 0xcf8f6u);
    push32(c, 0xcf8fbu); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xcf8fbu);
    X86_TICK(c, 9);
    // 0cf8fb  push 0xf
    X86_AT(c, 0xcf8fbu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cf8fd  call 0xbebbc
    X86_AT(c, 0xcf8fdu);
    push32(c, 0xcf902u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xcf902u);
    X86_TICK(c, 13);
    // 0cf902  add esp, 0x28
    X86_AT(c, 0xcf902u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0cf905  push 0xd
    X86_AT(c, 0xcf905u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0cf907  push 7
    X86_AT(c, 0xcf907u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf909  call 0xbba64
    X86_AT(c, 0xcf909u);
    push32(c, 0xcf90eu); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xcf90eu);
    X86_TICK(c, 27);
    // 0cf90e  push 0
    X86_AT(c, 0xcf90eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cf910  push 0xf
    X86_AT(c, 0xcf910u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cf912  push 0xb
    X86_AT(c, 0xcf912u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0cf914  push 0x16
    X86_AT(c, 0xcf914u);
    { uint32_t v = 0x16u; push32(c, v); }
    // 0cf916  push 0x21
    X86_AT(c, 0xcf916u);
    { uint32_t v = 0x21u; push32(c, v); }
    // 0cf918  push 0x178
    X86_AT(c, 0xcf918u);
    { uint32_t v = 0x178u; push32(c, v); }
    // 0cf91d  push 0x107
    X86_AT(c, 0xcf91du);
    { uint32_t v = 0x107u; push32(c, v); }
    // 0cf922  push 0x25
    X86_AT(c, 0xcf922u);
    { uint32_t v = 0x25u; push32(c, v); }
    // 0cf924  push 0x172
    X86_AT(c, 0xcf924u);
    { uint32_t v = 0x172u; push32(c, v); }
    // 0cf929  push 7
    X86_AT(c, 0xcf929u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf92b  call 0xbb5cc
    X86_AT(c, 0xcf92bu);
    push32(c, 0xcf930u); x86_call_known(c, 0xbb5ccu, f_000bb5cc); X86_RET(c, 0xcf930u);
    X86_TICK(c, 27);
    // 0cf930  push 0
    X86_AT(c, 0xcf930u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cf932  push 0xb
    X86_AT(c, 0xcf932u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0cf934  push 0xf
    X86_AT(c, 0xcf934u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cf936  push 0x18
    X86_AT(c, 0xcf936u);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0cf938  push 0x27
    X86_AT(c, 0xcf938u);
    { uint32_t v = 0x27u; push32(c, v); }
    // 0cf93a  push 0x194
    X86_AT(c, 0xcf93au);
    { uint32_t v = 0x194u; push32(c, v); }
    // 0cf93f  push 0x140
    X86_AT(c, 0xcf93fu);
    { uint32_t v = 0x140u; push32(c, v); }
    // 0cf944  push 0x16
    X86_AT(c, 0xcf944u);
    { uint32_t v = 0x16u; push32(c, v); }
    // 0cf946  push 0x1a
    X86_AT(c, 0xcf946u);
    { uint32_t v = 0x1Au; push32(c, v); }
    // 0cf948  push 6
    X86_AT(c, 0xcf948u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0cf94a  call 0xbb5cc
    X86_AT(c, 0xcf94au);
    push32(c, 0xcf94fu); x86_call_known(c, 0xbb5ccu, f_000bb5cc); X86_RET(c, 0xcf94fu);
    X86_TICK(c, 11);
    // 0cf94f  add esp, 0x58
    X86_AT(c, 0xcf94fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x58u, 0, 4); }
    // 0cf952  push 0xf
    X86_AT(c, 0xcf952u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cf954  call 0xbebbc
    X86_AT(c, 0xcf954u);
    push32(c, 0xcf959u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xcf959u);
    X86_TICK(c, 9);
    // 0cf959  push 6
    X86_AT(c, 0xcf959u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0cf95b  call 0xbb710
    X86_AT(c, 0xcf95bu);
    push32(c, 0xcf960u); x86_call_known(c, 0xbb710u, f_000bb710); X86_RET(c, 0xcf960u);
    X86_TICK(c, 9);
    // 0cf960  push 5
    X86_AT(c, 0xcf960u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0cf962  call 0xbebbc
    X86_AT(c, 0xcf962u);
    push32(c, 0xcf967u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xcf967u);
    X86_TICK(c, 9);
    // 0cf967  push 7
    X86_AT(c, 0xcf967u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf969  call 0xbb710
    X86_AT(c, 0xcf969u);
    push32(c, 0xcf96eu); x86_call_known(c, 0xbb710u, f_000bb710); X86_RET(c, 0xcf96eu);
    X86_TICK(c, 9);
    // 0cf96e  push 0xf
    X86_AT(c, 0xcf96eu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cf970  call 0xbebbc
    X86_AT(c, 0xcf970u);
    push32(c, 0xcf975u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xcf975u);
    X86_TICK(c, 7);
    // 0cf975  call 0xb5504
    X86_AT(c, 0xcf975u);
    push32(c, 0xcf97au); x86_call_known(c, 0xb5504u, f_000b5504); X86_RET(c, 0xcf97au);
    X86_TICK(c, 9);
    // 0cf97a  push 7
    X86_AT(c, 0xcf97au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf97c  call 0xb8888
    X86_AT(c, 0xcf97cu);
    push32(c, 0xcf981u); x86_call_known(c, 0xb8888u, f_000b8888); X86_RET(c, 0xcf981u);
    X86_TICK(c, 9);
    // 0cf981  push 7
    X86_AT(c, 0xcf981u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf983  call 0xbb6b0
    X86_AT(c, 0xcf983u);
    push32(c, 0xcf988u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xcf988u);
    X86_TICK(c, 9);
    // 0cf988  push 7
    X86_AT(c, 0xcf988u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf98a  call 0xbbb5c
    X86_AT(c, 0xcf98au);
    push32(c, 0xcf98fu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcf98fu);
    X86_TICK(c, 11);
    // 0cf98f  push 0xe
    X86_AT(c, 0xcf98fu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0cf991  push 7
    X86_AT(c, 0xcf991u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf993  call 0xbc3ec
    X86_AT(c, 0xcf993u);
    push32(c, 0xcf998u); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xcf998u);
    X86_TICK(c, 11);
    // 0cf998  push 0x9824
    X86_AT(c, 0xcf998u);
    { uint32_t v = 0x9824u; push32(c, v); }
    // 0cf99d  push 7
    X86_AT(c, 0xcf99du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf99f  call 0xba428
    X86_AT(c, 0xcf99fu);
    push32(c, 0xcf9a4u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcf9a4u);
    X86_TICK(c, 9);
    // 0cf9a4  push 7
    X86_AT(c, 0xcf9a4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf9a6  call 0xbbb5c
    X86_AT(c, 0xcf9a6u);
    push32(c, 0xcf9abu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcf9abu);
    X86_TICK(c, 9);
    // 0cf9ab  push 7
    X86_AT(c, 0xcf9abu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf9ad  call 0xbbb5c
    X86_AT(c, 0xcf9adu);
    push32(c, 0xcf9b2u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcf9b2u);
    X86_TICK(c, 13);
    // 0cf9b2  add esp, 0x38
    X86_AT(c, 0xcf9b2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 0cf9b5  push 0xb
    X86_AT(c, 0xcf9b5u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0cf9b7  push 7
    X86_AT(c, 0xcf9b7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf9b9  call 0xbc3ec
    X86_AT(c, 0xcf9b9u);
    push32(c, 0xcf9beu); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xcf9beu);
    X86_TICK(c, 9);
    // 0cf9be  push 0
    X86_AT(c, 0xcf9beu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cf9c0  call 0xcfdc8
    X86_AT(c, 0xcf9c0u);
    push32(c, 0xcf9c5u); x86_call_known(c, 0xcfdc8u, f_000cfdc8); X86_RET(c, 0xcf9c5u);
    X86_TICK(c, 11);
    // 0cf9c5  sub edi, edi
    X86_AT(c, 0xcf9c5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0cf9c7  push 7
    X86_AT(c, 0xcf9c7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf9c9  call 0xbb6b0
    X86_AT(c, 0xcf9c9u);
    push32(c, 0xcf9ceu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xcf9ceu);
    X86_TICK(c, 2);
    // 0cf9ce  add esp, 0x10
    X86_AT(c, 0xcf9ceu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_cf9d1:
    X86_TICK(c, 16);
    // 0cf9d1  mov eax, dword ptr [edi*4 + 0xb2f7c]
    X86_AT(c, 0xcf9d1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xB2F7Cu)));
    // 0cf9d8  cmp byte ptr [eax], 0
    X86_AT(c, 0xcf9d8u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x0u, 0, 1);
    // 0cf9db  je 0xcf9f2
    X86_AT(c, 0xcf9dbu);
    if (x86_cc(c, 4)) { goto L_cf9f2; }
    X86_TICK(c, 11);
    // 0cf9dd  push eax
    X86_AT(c, 0xcf9ddu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cf9de  push 7
    X86_AT(c, 0xcf9deu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf9e0  call 0xba428
    X86_AT(c, 0xcf9e0u);
    push32(c, 0xcf9e5u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcf9e5u);
    X86_TICK(c, 9);
    // 0cf9e5  push 7
    X86_AT(c, 0xcf9e5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf9e7  call 0xbbb5c
    X86_AT(c, 0xcf9e7u);
    push32(c, 0xcf9ecu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcf9ecu);
    X86_TICK(c, 11);
    // 0cf9ec  inc edi
    X86_AT(c, 0xcf9ecu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cf9ed  add esp, 0xc
    X86_AT(c, 0xcf9edu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cf9f0  jmp 0xcf9d1
    X86_AT(c, 0xcf9f0u);
    X86_POLL(c, 0xcf9d1u); goto L_cf9d1;
L_cf9f2:
    X86_TICK(c, 11);
    // 0cf9f2  inc edi
    X86_AT(c, 0xcf9f2u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cf9f3  push 7
    X86_AT(c, 0xcf9f3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf9f5  call 0xbbb5c
    X86_AT(c, 0xcf9f5u);
    push32(c, 0xcf9fau); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcf9fau);
    X86_TICK(c, 9);
    // 0cf9fa  push 7
    X86_AT(c, 0xcf9fau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cf9fc  call 0xc9890
    X86_AT(c, 0xcf9fcu);
    push32(c, 0xcfa01u); x86_call_known(c, 0xc9890u, f_000c9890); X86_RET(c, 0xcfa01u);
    X86_TICK(c, 2);
    // 0cfa01  add esp, 8
    X86_AT(c, 0xcfa01u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_cfa04:
    X86_TICK(c, 16);
    // 0cfa04  mov eax, dword ptr [edi*4 + 0xb2f7c]
    X86_AT(c, 0xcfa04u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xB2F7Cu)));
    // 0cfa0b  cmp byte ptr [eax], 0
    X86_AT(c, 0xcfa0bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x0u, 0, 1);
    // 0cfa0e  je 0xcfa25
    X86_AT(c, 0xcfa0eu);
    if (x86_cc(c, 4)) { goto L_cfa25; }
    X86_TICK(c, 11);
    // 0cfa10  push eax
    X86_AT(c, 0xcfa10u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cfa11  push 7
    X86_AT(c, 0xcfa11u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfa13  call 0xba428
    X86_AT(c, 0xcfa13u);
    push32(c, 0xcfa18u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcfa18u);
    X86_TICK(c, 9);
    // 0cfa18  push 7
    X86_AT(c, 0xcfa18u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfa1a  call 0xbbb5c
    X86_AT(c, 0xcfa1au);
    push32(c, 0xcfa1fu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcfa1fu);
    X86_TICK(c, 11);
    // 0cfa1f  inc edi
    X86_AT(c, 0xcfa1fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cfa20  add esp, 0xc
    X86_AT(c, 0xcfa20u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cfa23  jmp 0xcfa04
    X86_AT(c, 0xcfa23u);
    X86_POLL(c, 0xcfa04u); goto L_cfa04;
L_cfa25:
    X86_TICK(c, 11);
    // 0cfa25  inc edi
    X86_AT(c, 0xcfa25u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cfa26  push 7
    X86_AT(c, 0xcfa26u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfa28  call 0xbbb5c
    X86_AT(c, 0xcfa28u);
    push32(c, 0xcfa2du); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcfa2du);
    X86_TICK(c, 9);
    // 0cfa2d  push 7
    X86_AT(c, 0xcfa2du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfa2f  call 0xc9890
    X86_AT(c, 0xcfa2fu);
    push32(c, 0xcfa34u); x86_call_known(c, 0xc9890u, f_000c9890); X86_RET(c, 0xcfa34u);
    X86_TICK(c, 9);
    // 0cfa34  push 1
    X86_AT(c, 0xcfa34u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cfa36  call 0xcfdc8
    X86_AT(c, 0xcfa36u);
    push32(c, 0xcfa3bu); x86_call_known(c, 0xcfdc8u, f_000cfdc8); X86_RET(c, 0xcfa3bu);
L_cfa3b:
    X86_TICK(c, 18);
    // 0cfa3b  add esp, 0xc
    X86_AT(c, 0xcfa3bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cfa3e  mov eax, dword ptr [edi*4 + 0xb2f7c]
    X86_AT(c, 0xcfa3eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xB2F7Cu)));
    // 0cfa45  cmp byte ptr [eax], 0
    X86_AT(c, 0xcfa45u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x0u, 0, 1);
    // 0cfa48  je 0xcfa5c
    X86_AT(c, 0xcfa48u);
    if (x86_cc(c, 4)) { goto L_cfa5c; }
    X86_TICK(c, 11);
    // 0cfa4a  push eax
    X86_AT(c, 0xcfa4au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cfa4b  push 7
    X86_AT(c, 0xcfa4bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfa4d  call 0xba428
    X86_AT(c, 0xcfa4du);
    push32(c, 0xcfa52u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcfa52u);
    X86_TICK(c, 9);
    // 0cfa52  push 7
    X86_AT(c, 0xcfa52u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfa54  call 0xbbb5c
    X86_AT(c, 0xcfa54u);
    push32(c, 0xcfa59u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcfa59u);
    X86_TICK(c, 9);
    // 0cfa59  inc edi
    X86_AT(c, 0xcfa59u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cfa5a  jmp 0xcfa3b
    X86_AT(c, 0xcfa5au);
    X86_POLL(c, 0xcfa3bu); goto L_cfa3b;
L_cfa5c:
    X86_TICK(c, 11);
    // 0cfa5c  inc edi
    X86_AT(c, 0xcfa5cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cfa5d  push 7
    X86_AT(c, 0xcfa5du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfa5f  call 0xbbb5c
    X86_AT(c, 0xcfa5fu);
    push32(c, 0xcfa64u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcfa64u);
    X86_TICK(c, 9);
    // 0cfa64  push 7
    X86_AT(c, 0xcfa64u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfa66  call 0xc9890
    X86_AT(c, 0xcfa66u);
    push32(c, 0xcfa6bu); x86_call_known(c, 0xc9890u, f_000c9890); X86_RET(c, 0xcfa6bu);
    X86_TICK(c, 9);
    // 0cfa6b  push 1
    X86_AT(c, 0xcfa6bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0cfa6d  call 0xcfdc8
    X86_AT(c, 0xcfa6du);
    push32(c, 0xcfa72u); x86_call_known(c, 0xcfdc8u, f_000cfdc8); X86_RET(c, 0xcfa72u);
L_cfa72:
    X86_TICK(c, 18);
    // 0cfa72  add esp, 0xc
    X86_AT(c, 0xcfa72u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cfa75  mov eax, dword ptr [edi*4 + 0xb2f7c]
    X86_AT(c, 0xcfa75u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xB2F7Cu)));
    // 0cfa7c  cmp byte ptr [eax], 0
    X86_AT(c, 0xcfa7cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x0u, 0, 1);
    // 0cfa7f  je 0xcfa93
    X86_AT(c, 0xcfa7fu);
    if (x86_cc(c, 4)) { goto L_cfa93; }
    X86_TICK(c, 11);
    // 0cfa81  push eax
    X86_AT(c, 0xcfa81u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cfa82  push 7
    X86_AT(c, 0xcfa82u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfa84  call 0xba428
    X86_AT(c, 0xcfa84u);
    push32(c, 0xcfa89u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcfa89u);
    X86_TICK(c, 9);
    // 0cfa89  push 7
    X86_AT(c, 0xcfa89u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfa8b  call 0xbbb5c
    X86_AT(c, 0xcfa8bu);
    push32(c, 0xcfa90u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcfa90u);
    X86_TICK(c, 9);
    // 0cfa90  inc edi
    X86_AT(c, 0xcfa90u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cfa91  jmp 0xcfa72
    X86_AT(c, 0xcfa91u);
    X86_POLL(c, 0xcfa72u); goto L_cfa72;
L_cfa93:
    X86_TICK(c, 11);
    // 0cfa93  inc edi
    X86_AT(c, 0xcfa93u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cfa94  push 7
    X86_AT(c, 0xcfa94u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfa96  call 0xbbb5c
    X86_AT(c, 0xcfa96u);
    push32(c, 0xcfa9bu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcfa9bu);
    X86_TICK(c, 9);
    // 0cfa9b  push 7
    X86_AT(c, 0xcfa9bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfa9d  call 0xc9890
    X86_AT(c, 0xcfa9du);
    push32(c, 0xcfaa2u); x86_call_known(c, 0xc9890u, f_000c9890); X86_RET(c, 0xcfaa2u);
    X86_TICK(c, 9);
    // 0cfaa2  push 2
    X86_AT(c, 0xcfaa2u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cfaa4  call 0xcfdc8
    X86_AT(c, 0xcfaa4u);
    push32(c, 0xcfaa9u); x86_call_known(c, 0xcfdc8u, f_000cfdc8); X86_RET(c, 0xcfaa9u);
    X86_TICK(c, 11);
    // 0cfaa9  push 0xf
    X86_AT(c, 0xcfaa9u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cfaab  push 7
    X86_AT(c, 0xcfaabu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfaad  call 0xbc3ec
    X86_AT(c, 0xcfaadu);
    push32(c, 0xcfab2u); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xcfab2u);
    X86_TICK(c, 9);
    // 0cfab2  push 7
    X86_AT(c, 0xcfab2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfab4  call 0xbb6b0
    X86_AT(c, 0xcfab4u);
    push32(c, 0xcfab9u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xcfab9u);
    X86_TICK(c, 2);
    // 0cfab9  add esp, 0x18
    X86_AT(c, 0xcfab9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_cfabc:
    X86_TICK(c, 16);
    // 0cfabc  mov eax, dword ptr [edi*4 + 0xb2f7c]
    X86_AT(c, 0xcfabcu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xB2F7Cu)));
    // 0cfac3  cmp byte ptr [eax], 0
    X86_AT(c, 0xcfac3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x0u, 0, 1);
    // 0cfac6  je 0xcfadd
    X86_AT(c, 0xcfac6u);
    if (x86_cc(c, 4)) { goto L_cfadd; }
    X86_TICK(c, 11);
    // 0cfac8  push eax
    X86_AT(c, 0xcfac8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cfac9  push 7
    X86_AT(c, 0xcfac9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfacb  call 0xba428
    X86_AT(c, 0xcfacbu);
    push32(c, 0xcfad0u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcfad0u);
    X86_TICK(c, 9);
    // 0cfad0  push 7
    X86_AT(c, 0xcfad0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfad2  call 0xbbb5c
    X86_AT(c, 0xcfad2u);
    push32(c, 0xcfad7u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcfad7u);
    X86_TICK(c, 11);
    // 0cfad7  inc edi
    X86_AT(c, 0xcfad7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cfad8  add esp, 0xc
    X86_AT(c, 0xcfad8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cfadb  jmp 0xcfabc
    X86_AT(c, 0xcfadbu);
    X86_POLL(c, 0xcfabcu); goto L_cfabc;
L_cfadd:
    X86_TICK(c, 11);
    // 0cfadd  inc edi
    X86_AT(c, 0xcfaddu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cfade  push 7
    X86_AT(c, 0xcfadeu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfae0  call 0xbbb5c
    X86_AT(c, 0xcfae0u);
    push32(c, 0xcfae5u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcfae5u);
    X86_TICK(c, 9);
    // 0cfae5  push 7
    X86_AT(c, 0xcfae5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfae7  call 0xc9890
    X86_AT(c, 0xcfae7u);
    push32(c, 0xcfaecu); x86_call_known(c, 0xc9890u, f_000c9890); X86_RET(c, 0xcfaecu);
    X86_TICK(c, 11);
    // 0cfaec  push 0xb
    X86_AT(c, 0xcfaecu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0cfaee  push 7
    X86_AT(c, 0xcfaeeu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfaf0  call 0xbc3ec
    X86_AT(c, 0xcfaf0u);
    push32(c, 0xcfaf5u); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xcfaf5u);
    X86_TICK(c, 9);
    // 0cfaf5  push 7
    X86_AT(c, 0xcfaf5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfaf7  call 0xbb6b0
    X86_AT(c, 0xcfaf7u);
    push32(c, 0xcfafcu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xcfafcu);
    X86_TICK(c, 2);
    // 0cfafc  add esp, 0x14
    X86_AT(c, 0xcfafcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_cfaff:
    X86_TICK(c, 16);
    // 0cfaff  mov eax, dword ptr [edi*4 + 0xb2f7c]
    X86_AT(c, 0xcfaffu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xB2F7Cu)));
    // 0cfb06  cmp byte ptr [eax], 0
    X86_AT(c, 0xcfb06u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x0u, 0, 1);
    // 0cfb09  je 0xcfb20
    X86_AT(c, 0xcfb09u);
    if (x86_cc(c, 4)) { goto L_cfb20; }
    X86_TICK(c, 11);
    // 0cfb0b  push eax
    X86_AT(c, 0xcfb0bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cfb0c  push 7
    X86_AT(c, 0xcfb0cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfb0e  call 0xba428
    X86_AT(c, 0xcfb0eu);
    push32(c, 0xcfb13u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcfb13u);
    X86_TICK(c, 9);
    // 0cfb13  push 7
    X86_AT(c, 0xcfb13u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfb15  call 0xbbb5c
    X86_AT(c, 0xcfb15u);
    push32(c, 0xcfb1au); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcfb1au);
    X86_TICK(c, 11);
    // 0cfb1a  inc edi
    X86_AT(c, 0xcfb1au);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cfb1b  add esp, 0xc
    X86_AT(c, 0xcfb1bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cfb1e  jmp 0xcfaff
    X86_AT(c, 0xcfb1eu);
    X86_POLL(c, 0xcfaffu); goto L_cfaff;
L_cfb20:
    X86_TICK(c, 11);
    // 0cfb20  inc edi
    X86_AT(c, 0xcfb20u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cfb21  push 7
    X86_AT(c, 0xcfb21u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfb23  call 0xbbb5c
    X86_AT(c, 0xcfb23u);
    push32(c, 0xcfb28u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcfb28u);
    X86_TICK(c, 9);
    // 0cfb28  push 7
    X86_AT(c, 0xcfb28u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfb2a  call 0xc9890
    X86_AT(c, 0xcfb2au);
    push32(c, 0xcfb2fu); x86_call_known(c, 0xc9890u, f_000c9890); X86_RET(c, 0xcfb2fu);
    X86_TICK(c, 9);
    // 0cfb2f  push 3
    X86_AT(c, 0xcfb2fu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0cfb31  call 0xcfdc8
    X86_AT(c, 0xcfb31u);
    push32(c, 0xcfb36u); x86_call_known(c, 0xcfdc8u, f_000cfdc8); X86_RET(c, 0xcfb36u);
    X86_TICK(c, 11);
    // 0cfb36  push 0xf
    X86_AT(c, 0xcfb36u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0cfb38  push 7
    X86_AT(c, 0xcfb38u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfb3a  call 0xbc3ec
    X86_AT(c, 0xcfb3au);
    push32(c, 0xcfb3fu); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xcfb3fu);
    X86_TICK(c, 9);
    // 0cfb3f  push 7
    X86_AT(c, 0xcfb3fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfb41  call 0xbb6b0
    X86_AT(c, 0xcfb41u);
    push32(c, 0xcfb46u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xcfb46u);
    X86_TICK(c, 2);
    // 0cfb46  add esp, 0x18
    X86_AT(c, 0xcfb46u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_cfb49:
    X86_TICK(c, 16);
    // 0cfb49  mov eax, dword ptr [edi*4 + 0xb2f7c]
    X86_AT(c, 0xcfb49u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xB2F7Cu)));
    // 0cfb50  cmp byte ptr [eax], 0
    X86_AT(c, 0xcfb50u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x0u, 0, 1);
    // 0cfb53  je 0xcfb6a
    X86_AT(c, 0xcfb53u);
    if (x86_cc(c, 4)) { goto L_cfb6a; }
    X86_TICK(c, 11);
    // 0cfb55  push eax
    X86_AT(c, 0xcfb55u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cfb56  push 7
    X86_AT(c, 0xcfb56u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfb58  call 0xba428
    X86_AT(c, 0xcfb58u);
    push32(c, 0xcfb5du); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcfb5du);
    X86_TICK(c, 9);
    // 0cfb5d  push 7
    X86_AT(c, 0xcfb5du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfb5f  call 0xbbb5c
    X86_AT(c, 0xcfb5fu);
    push32(c, 0xcfb64u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcfb64u);
    X86_TICK(c, 11);
    // 0cfb64  inc edi
    X86_AT(c, 0xcfb64u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cfb65  add esp, 0xc
    X86_AT(c, 0xcfb65u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cfb68  jmp 0xcfb49
    X86_AT(c, 0xcfb68u);
    X86_POLL(c, 0xcfb49u); goto L_cfb49;
L_cfb6a:
    X86_TICK(c, 11);
    // 0cfb6a  inc edi
    X86_AT(c, 0xcfb6au);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cfb6b  push 7
    X86_AT(c, 0xcfb6bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfb6d  call 0xbbb5c
    X86_AT(c, 0xcfb6du);
    push32(c, 0xcfb72u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcfb72u);
    X86_TICK(c, 9);
    // 0cfb72  push 7
    X86_AT(c, 0xcfb72u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfb74  call 0xc9890
    X86_AT(c, 0xcfb74u);
    push32(c, 0xcfb79u); x86_call_known(c, 0xc9890u, f_000c9890); X86_RET(c, 0xcfb79u);
    X86_TICK(c, 9);
    // 0cfb79  push 4
    X86_AT(c, 0xcfb79u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0cfb7b  call 0xcfdc8
    X86_AT(c, 0xcfb7bu);
    push32(c, 0xcfb80u); x86_call_known(c, 0xcfdc8u, f_000cfdc8); X86_RET(c, 0xcfb80u);
    X86_TICK(c, 11);
    // 0cfb80  push 0xb
    X86_AT(c, 0xcfb80u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0cfb82  push 7
    X86_AT(c, 0xcfb82u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfb84  call 0xbc3ec
    X86_AT(c, 0xcfb84u);
    push32(c, 0xcfb89u); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xcfb89u);
    X86_TICK(c, 9);
    // 0cfb89  push 7
    X86_AT(c, 0xcfb89u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfb8b  call 0xbb6b0
    X86_AT(c, 0xcfb8bu);
    push32(c, 0xcfb90u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xcfb90u);
    X86_TICK(c, 2);
    // 0cfb90  add esp, 0x18
    X86_AT(c, 0xcfb90u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_cfb93:
    X86_TICK(c, 16);
    // 0cfb93  mov eax, dword ptr [edi*4 + 0xb2f7c]
    X86_AT(c, 0xcfb93u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xB2F7Cu)));
    // 0cfb9a  cmp byte ptr [eax], 0
    X86_AT(c, 0xcfb9au);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x0u, 0, 1);
    // 0cfb9d  je 0xcfbb4
    X86_AT(c, 0xcfb9du);
    if (x86_cc(c, 4)) { goto L_cfbb4; }
    X86_TICK(c, 11);
    // 0cfb9f  push eax
    X86_AT(c, 0xcfb9fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cfba0  push 7
    X86_AT(c, 0xcfba0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfba2  call 0xba428
    X86_AT(c, 0xcfba2u);
    push32(c, 0xcfba7u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcfba7u);
    X86_TICK(c, 9);
    // 0cfba7  push 7
    X86_AT(c, 0xcfba7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfba9  call 0xbbb5c
    X86_AT(c, 0xcfba9u);
    push32(c, 0xcfbaeu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcfbaeu);
    X86_TICK(c, 11);
    // 0cfbae  inc edi
    X86_AT(c, 0xcfbaeu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cfbaf  add esp, 0xc
    X86_AT(c, 0xcfbafu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cfbb2  jmp 0xcfb93
    X86_AT(c, 0xcfbb2u);
    X86_POLL(c, 0xcfb93u); goto L_cfb93;
L_cfbb4:
    X86_TICK(c, 11);
    // 0cfbb4  inc edi
    X86_AT(c, 0xcfbb4u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cfbb5  push 7
    X86_AT(c, 0xcfbb5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfbb7  call 0xbbb5c
    X86_AT(c, 0xcfbb7u);
    push32(c, 0xcfbbcu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcfbbcu);
    X86_TICK(c, 9);
    // 0cfbbc  push 7
    X86_AT(c, 0xcfbbcu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfbbe  call 0xc9890
    X86_AT(c, 0xcfbbeu);
    push32(c, 0xcfbc3u); x86_call_known(c, 0xc9890u, f_000c9890); X86_RET(c, 0xcfbc3u);
    X86_TICK(c, 2);
    // 0cfbc3  add esp, 8
    X86_AT(c, 0xcfbc3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_cfbc6:
    X86_TICK(c, 16);
    // 0cfbc6  mov eax, dword ptr [edi*4 + 0xb2f7c]
    X86_AT(c, 0xcfbc6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xB2F7Cu)));
    // 0cfbcd  cmp byte ptr [eax], 0
    X86_AT(c, 0xcfbcdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x0u, 0, 1);
    // 0cfbd0  je 0xcfbe7
    X86_AT(c, 0xcfbd0u);
    if (x86_cc(c, 4)) { goto L_cfbe7; }
    X86_TICK(c, 11);
    // 0cfbd2  push eax
    X86_AT(c, 0xcfbd2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cfbd3  push 7
    X86_AT(c, 0xcfbd3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfbd5  call 0xba428
    X86_AT(c, 0xcfbd5u);
    push32(c, 0xcfbdau); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcfbdau);
    X86_TICK(c, 9);
    // 0cfbda  push 7
    X86_AT(c, 0xcfbdau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfbdc  call 0xbbb5c
    X86_AT(c, 0xcfbdcu);
    push32(c, 0xcfbe1u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcfbe1u);
    X86_TICK(c, 11);
    // 0cfbe1  inc edi
    X86_AT(c, 0xcfbe1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cfbe2  add esp, 0xc
    X86_AT(c, 0xcfbe2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cfbe5  jmp 0xcfbc6
    X86_AT(c, 0xcfbe5u);
    X86_POLL(c, 0xcfbc6u); goto L_cfbc6;
L_cfbe7:
    X86_TICK(c, 13);
    // 0cfbe7  inc edi
    X86_AT(c, 0xcfbe7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cfbe8  push 0xe
    X86_AT(c, 0xcfbe8u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0cfbea  push 7
    X86_AT(c, 0xcfbeau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfbec  call 0xbc3ec
    X86_AT(c, 0xcfbecu);
    push32(c, 0xcfbf1u); x86_call_known(c, 0xbc3ecu, f_000bc3ec); X86_RET(c, 0xcfbf1u);
    X86_TICK(c, 9);
    // 0cfbf1  push 7
    X86_AT(c, 0xcfbf1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfbf3  call 0xbb6b0
    X86_AT(c, 0xcfbf3u);
    push32(c, 0xcfbf8u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xcfbf8u);
L_cfbf8:
    X86_TICK(c, 18);
    // 0cfbf8  add esp, 0xc
    X86_AT(c, 0xcfbf8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cfbfb  mov eax, dword ptr [edi*4 + 0xb2f7c]
    X86_AT(c, 0xcfbfbu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xB2F7Cu)));
    // 0cfc02  cmp byte ptr [eax], 0
    X86_AT(c, 0xcfc02u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x0u, 0, 1);
    // 0cfc05  je 0xcfc19
    X86_AT(c, 0xcfc05u);
    if (x86_cc(c, 4)) { goto L_cfc19; }
    X86_TICK(c, 11);
    // 0cfc07  push eax
    X86_AT(c, 0xcfc07u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cfc08  push 7
    X86_AT(c, 0xcfc08u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfc0a  call 0xba428
    X86_AT(c, 0xcfc0au);
    push32(c, 0xcfc0fu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcfc0fu);
    X86_TICK(c, 9);
    // 0cfc0f  push 7
    X86_AT(c, 0xcfc0fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfc11  call 0xbbb5c
    X86_AT(c, 0xcfc11u);
    push32(c, 0xcfc16u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcfc16u);
    X86_TICK(c, 9);
    // 0cfc16  inc edi
    X86_AT(c, 0xcfc16u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cfc17  jmp 0xcfbf8
    X86_AT(c, 0xcfc17u);
    X86_POLL(c, 0xcfbf8u); goto L_cfbf8;
L_cfc19:
    X86_TICK(c, 2);
    // 0cfc19  sub edi, edi
    X86_AT(c, 0xcfc19u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_cfc1b:
    X86_TICK(c, 7);
    // 0cfc1b  cmp edi, 9
    X86_AT(c, 0xcfc1bu);
    (void)x86_sub(c, c.r[7], 0x9u, 0, 4);
    // 0cfc1e  jge 0xcfc2d
    X86_AT(c, 0xcfc1eu);
    if (x86_cc(c, 13)) { goto L_cfc2d; }
    X86_TICK(c, 9);
    // 0cfc20  push 7
    X86_AT(c, 0xcfc20u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfc22  call 0xbbb5c
    X86_AT(c, 0xcfc22u);
    push32(c, 0xcfc27u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcfc27u);
    X86_TICK(c, 11);
    // 0cfc27  inc edi
    X86_AT(c, 0xcfc27u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cfc28  add esp, 4
    X86_AT(c, 0xcfc28u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cfc2b  jmp 0xcfc1b
    X86_AT(c, 0xcfc2bu);
    X86_POLL(c, 0xcfc1bu); goto L_cfc1b;
L_cfc2d:
    X86_TICK(c, 9);
    // 0cfc2d  push 2
    X86_AT(c, 0xcfc2du);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0cfc2f  call 0xb8888
    X86_AT(c, 0xcfc2fu);
    push32(c, 0xcfc34u); x86_call_known(c, 0xb8888u, f_000b8888); X86_RET(c, 0xcfc34u);
    X86_TICK(c, 7);
    // 0cfc34  call 0xc5fe0
    X86_AT(c, 0xcfc34u);
    push32(c, 0xcfc39u); x86_call_known(c, 0xc5fe0u, f_000c5fe0); X86_RET(c, 0xcfc39u);
    X86_TICK(c, 9);
    // 0cfc39  push 7
    X86_AT(c, 0xcfc39u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfc3b  call 0xc9890
    X86_AT(c, 0xcfc3bu);
    push32(c, 0xcfc40u); x86_call_known(c, 0xc9890u, f_000c9890); X86_RET(c, 0xcfc40u);
    X86_TICK(c, 7);
    // 0cfc40  call 0xbecf0
    X86_AT(c, 0xcfc40u);
    push32(c, 0xcfc45u); x86_call_known(c, 0xbecf0u, f_000becf0); X86_RET(c, 0xcfc45u);
    X86_TICK(c, 9);
    // 0cfc45  push 0
    X86_AT(c, 0xcfc45u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0cfc47  call 0xd8a74
    X86_AT(c, 0xcfc47u);
    push32(c, 0xcfc4cu); x86_call_known(c, 0xd8a74u, f_000d8a74); X86_RET(c, 0xcfc4cu);
    X86_TICK(c, 16);
    // 0cfc4c  add esp, 0xc
    X86_AT(c, 0xcfc4cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cfc4f  pop edi
    X86_AT(c, 0xcfc4fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cfc50  ret 
    X86_AT(c, 0xcfc50u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcf858u, "ran off the end of a function");
}
void f_000cfc54(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0cfc54  push ebp
    X86_AT(c, 0xcfc54u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cfc55  mov ebp, esp
    X86_AT(c, 0xcfc55u);
    c.r[5] = c.r[4];
    // 0cfc57  sub esp, 0xc
    X86_AT(c, 0xcfc57u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0cfc5a  push edi
    X86_AT(c, 0xcfc5au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cfc5b  sub eax, eax
    X86_AT(c, 0xcfc5bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0cfc5d  mov dword ptr [0xb03f8], eax
    X86_AT(c, 0xcfc5du);
    wr32((c.sbase[3] + (uint32_t)(0xB03F8u)), c.r[0]);
    // 0cfc62  cmp eax, dword ptr [0xa6654]
    X86_AT(c, 0xcfc62u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xA6654u))), 0, 4);
    // 0cfc68  jne 0xcfc83
    X86_AT(c, 0xcfc68u);
    if (x86_cc(c, 5)) { goto L_cfc83; }
    X86_TICK(c, 13);
    // 0cfc6a  mov dword ptr [0xb03f4], eax
    X86_AT(c, 0xcfc6au);
    wr32((c.sbase[3] + (uint32_t)(0xB03F4u)), c.r[0]);
    // 0cfc6f  mov dword ptr [0xb03f8], 0xffffffff
    X86_AT(c, 0xcfc6fu);
    wr32((c.sbase[3] + (uint32_t)(0xB03F8u)), 0xFFFFFFFFu);
    // 0cfc79  push 0x9860
    X86_AT(c, 0xcfc79u);
    { uint32_t v = 0x9860u; push32(c, v); }
    // 0cfc7e  jmp 0xcfdba
    X86_AT(c, 0xcfc7eu);
    goto L_cfdba;
L_cfc83:
    X86_TICK(c, 17);
    // 0cfc83  mov eax, dword ptr [0xa6654]
    X86_AT(c, 0xcfc83u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xA6654u)));
    // 0cfc88  mov dword ptr [0xb03f4], eax
    X86_AT(c, 0xcfc88u);
    wr32((c.sbase[3] + (uint32_t)(0xB03F4u)), c.r[0]);
    // 0cfc8d  xchg edi, eax
    X86_AT(c, 0xcfc8du);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0cfc8e  sub eax, eax
    X86_AT(c, 0xcfc8eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0cfc90  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xcfc90u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0cfc93  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xcfc93u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0cfc96  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xcfc96u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_cfc99:
    X86_TICK(c, 11);
    // 0cfc99  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xcfc99u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0cfc9c  cmp eax, 0xf3c0
    X86_AT(c, 0xcfc9cu);
    (void)x86_sub(c, c.r[0], 0xF3C0u, 0, 4);
    // 0cfca1  jge 0xcfcac
    X86_AT(c, 0xcfca1u);
    if (x86_cc(c, 13)) { goto L_cfcac; }
    X86_TICK(c, 17);
    // 0cfca3  mov byte ptr [edi], 0
    X86_AT(c, 0xcfca3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0x0u);
    // 0cfca6  inc edi
    X86_AT(c, 0xcfca6u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0cfca7  inc dword ptr [ebp - 4]
    X86_AT(c, 0xcfca7u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0cfcaa  jmp 0xcfc99
    X86_AT(c, 0xcfcaau);
    X86_POLL(c, 0xcfc99u); goto L_cfc99;
L_cfcac:
    X86_TICK(c, 31);
    // 0cfcac  mov edi, dword ptr [0xb03f4]
    X86_AT(c, 0xcfcacu);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0xB03F4u)));
    // 0cfcb2  add edi, 0xf3c0
    X86_AT(c, 0xcfcb2u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF3C0u, 0, 4); }
    // 0cfcb8  lea eax, [ebp - 0xc]
    X86_AT(c, 0xcfcb8u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0cfcbb  push eax
    X86_AT(c, 0xcfcbbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cfcbc  lea eax, [ebp - 8]
    X86_AT(c, 0xcfcbcu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0cfcbf  push eax
    X86_AT(c, 0xcfcbfu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cfcc0  lea eax, [ebp - 4]
    X86_AT(c, 0xcfcc0u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0cfcc3  push eax
    X86_AT(c, 0xcfcc3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cfcc4  push 0xf3c0
    X86_AT(c, 0xcfcc4u);
    { uint32_t v = 0xF3C0u; push32(c, v); }
    // 0cfcc9  push edi
    X86_AT(c, 0xcfcc9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cfcca  push 0x9898
    X86_AT(c, 0xcfccau);
    { uint32_t v = 0x9898u; push32(c, v); }
    // 0cfccf  call 0xbb1f0
    X86_AT(c, 0xcfccfu);
    push32(c, 0xcfcd4u); x86_call_known(c, 0xbb1f0u, f_000bb1f0); X86_RET(c, 0xcfcd4u);
    X86_TICK(c, 9);
    // 0cfcd4  add esp, 0x18
    X86_AT(c, 0xcfcd4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0cfcd7  inc eax
    X86_AT(c, 0xcfcd7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0cfcd8  jne 0xcfce4
    X86_AT(c, 0xcfcd8u);
    if (x86_cc(c, 5)) { goto L_cfce4; }
    X86_TICK(c, 2);
    // 0cfcda  mov dword ptr [0xb03f8], 0xffffffff
    X86_AT(c, 0xcfcdau);
    wr32((c.sbase[3] + (uint32_t)(0xB03F8u)), 0xFFFFFFFFu);
L_cfce4:
    X86_TICK(c, 27);
    // 0cfce4  add edi, 0xf3c0
    X86_AT(c, 0xcfce4u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF3C0u, 0, 4); }
    // 0cfcea  lea eax, [ebp - 0xc]
    X86_AT(c, 0xcfceau);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0cfced  push eax
    X86_AT(c, 0xcfcedu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cfcee  lea eax, [ebp - 8]
    X86_AT(c, 0xcfceeu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0cfcf1  push eax
    X86_AT(c, 0xcfcf1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cfcf2  lea eax, [ebp - 4]
    X86_AT(c, 0xcfcf2u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0cfcf5  push eax
    X86_AT(c, 0xcfcf5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cfcf6  push 0xf3c0
    X86_AT(c, 0xcfcf6u);
    { uint32_t v = 0xF3C0u; push32(c, v); }
    // 0cfcfb  push edi
    X86_AT(c, 0xcfcfbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cfcfc  push 0x98ac
    X86_AT(c, 0xcfcfcu);
    { uint32_t v = 0x98ACu; push32(c, v); }
    // 0cfd01  call 0xbb1f0
    X86_AT(c, 0xcfd01u);
    push32(c, 0xcfd06u); x86_call_known(c, 0xbb1f0u, f_000bb1f0); X86_RET(c, 0xcfd06u);
    X86_TICK(c, 9);
    // 0cfd06  add esp, 0x18
    X86_AT(c, 0xcfd06u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0cfd09  inc eax
    X86_AT(c, 0xcfd09u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0cfd0a  jne 0xcfd16
    X86_AT(c, 0xcfd0au);
    if (x86_cc(c, 5)) { goto L_cfd16; }
    X86_TICK(c, 2);
    // 0cfd0c  mov dword ptr [0xb03f8], 0xffffffff
    X86_AT(c, 0xcfd0cu);
    wr32((c.sbase[3] + (uint32_t)(0xB03F8u)), 0xFFFFFFFFu);
L_cfd16:
    X86_TICK(c, 27);
    // 0cfd16  add edi, 0xf3c0
    X86_AT(c, 0xcfd16u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF3C0u, 0, 4); }
    // 0cfd1c  lea eax, [ebp - 0xc]
    X86_AT(c, 0xcfd1cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0cfd1f  push eax
    X86_AT(c, 0xcfd1fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cfd20  lea eax, [ebp - 8]
    X86_AT(c, 0xcfd20u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0cfd23  push eax
    X86_AT(c, 0xcfd23u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cfd24  lea eax, [ebp - 4]
    X86_AT(c, 0xcfd24u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0cfd27  push eax
    X86_AT(c, 0xcfd27u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cfd28  push 0xf3c0
    X86_AT(c, 0xcfd28u);
    { uint32_t v = 0xF3C0u; push32(c, v); }
    // 0cfd2d  push edi
    X86_AT(c, 0xcfd2du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cfd2e  push 0x98c0
    X86_AT(c, 0xcfd2eu);
    { uint32_t v = 0x98C0u; push32(c, v); }
    // 0cfd33  call 0xbb1f0
    X86_AT(c, 0xcfd33u);
    push32(c, 0xcfd38u); x86_call_known(c, 0xbb1f0u, f_000bb1f0); X86_RET(c, 0xcfd38u);
    X86_TICK(c, 9);
    // 0cfd38  add esp, 0x18
    X86_AT(c, 0xcfd38u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0cfd3b  inc eax
    X86_AT(c, 0xcfd3bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0cfd3c  jne 0xcfd48
    X86_AT(c, 0xcfd3cu);
    if (x86_cc(c, 5)) { goto L_cfd48; }
    X86_TICK(c, 2);
    // 0cfd3e  mov dword ptr [0xb03f8], 0xffffffff
    X86_AT(c, 0xcfd3eu);
    wr32((c.sbase[3] + (uint32_t)(0xB03F8u)), 0xFFFFFFFFu);
L_cfd48:
    X86_TICK(c, 27);
    // 0cfd48  add edi, 0xf3c0
    X86_AT(c, 0xcfd48u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF3C0u, 0, 4); }
    // 0cfd4e  lea eax, [ebp - 0xc]
    X86_AT(c, 0xcfd4eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0cfd51  push eax
    X86_AT(c, 0xcfd51u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cfd52  lea eax, [ebp - 8]
    X86_AT(c, 0xcfd52u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0cfd55  push eax
    X86_AT(c, 0xcfd55u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cfd56  lea eax, [ebp - 4]
    X86_AT(c, 0xcfd56u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0cfd59  push eax
    X86_AT(c, 0xcfd59u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cfd5a  push 0xf3c0
    X86_AT(c, 0xcfd5au);
    { uint32_t v = 0xF3C0u; push32(c, v); }
    // 0cfd5f  push edi
    X86_AT(c, 0xcfd5fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cfd60  push 0x98d4
    X86_AT(c, 0xcfd60u);
    { uint32_t v = 0x98D4u; push32(c, v); }
    // 0cfd65  call 0xbb1f0
    X86_AT(c, 0xcfd65u);
    push32(c, 0xcfd6au); x86_call_known(c, 0xbb1f0u, f_000bb1f0); X86_RET(c, 0xcfd6au);
    X86_TICK(c, 9);
    // 0cfd6a  add esp, 0x18
    X86_AT(c, 0xcfd6au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0cfd6d  inc eax
    X86_AT(c, 0xcfd6du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0cfd6e  jne 0xcfd7a
    X86_AT(c, 0xcfd6eu);
    if (x86_cc(c, 5)) { goto L_cfd7a; }
    X86_TICK(c, 2);
    // 0cfd70  mov dword ptr [0xb03f8], 0xffffffff
    X86_AT(c, 0xcfd70u);
    wr32((c.sbase[3] + (uint32_t)(0xB03F8u)), 0xFFFFFFFFu);
L_cfd7a:
    X86_TICK(c, 27);
    // 0cfd7a  add edi, 0xf3c0
    X86_AT(c, 0xcfd7au);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF3C0u, 0, 4); }
    // 0cfd80  lea eax, [ebp - 0xc]
    X86_AT(c, 0xcfd80u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0cfd83  push eax
    X86_AT(c, 0xcfd83u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cfd84  lea eax, [ebp - 8]
    X86_AT(c, 0xcfd84u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0cfd87  push eax
    X86_AT(c, 0xcfd87u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cfd88  lea eax, [ebp - 4]
    X86_AT(c, 0xcfd88u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0cfd8b  push eax
    X86_AT(c, 0xcfd8bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0cfd8c  push 0xf3c0
    X86_AT(c, 0xcfd8cu);
    { uint32_t v = 0xF3C0u; push32(c, v); }
    // 0cfd91  push edi
    X86_AT(c, 0xcfd91u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cfd92  push 0x98e8
    X86_AT(c, 0xcfd92u);
    { uint32_t v = 0x98E8u; push32(c, v); }
    // 0cfd97  call 0xbb1f0
    X86_AT(c, 0xcfd97u);
    push32(c, 0xcfd9cu); x86_call_known(c, 0xbb1f0u, f_000bb1f0); X86_RET(c, 0xcfd9cu);
    X86_TICK(c, 9);
    // 0cfd9c  add esp, 0x18
    X86_AT(c, 0xcfd9cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0cfd9f  inc eax
    X86_AT(c, 0xcfd9fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0cfda0  jne 0xcfdac
    X86_AT(c, 0xcfda0u);
    if (x86_cc(c, 5)) { goto L_cfdac; }
    X86_TICK(c, 2);
    // 0cfda2  mov dword ptr [0xb03f8], 0xffffffff
    X86_AT(c, 0xcfda2u);
    wr32((c.sbase[3] + (uint32_t)(0xB03F8u)), 0xFFFFFFFFu);
L_cfdac:
    X86_TICK(c, 12);
    // 0cfdac  cmp dword ptr [0xb03f8], 0xffffffff
    X86_AT(c, 0xcfdacu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB03F8u))), 0xFFFFFFFFu, 0, 4);
    // 0cfdb3  jne 0xcfdc2
    X86_AT(c, 0xcfdb3u);
    if (x86_cc(c, 5)) { goto L_cfdc2; }
    X86_TICK(c, 2);
    // 0cfdb5  push 0x98fc
    X86_AT(c, 0xcfdb5u);
    { uint32_t v = 0x98FCu; push32(c, v); }
L_cfdba:
    X86_TICK(c, 7);
    // 0cfdba  call 0xbc50c
    X86_AT(c, 0xcfdbau);
    push32(c, 0xcfdbfu); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xcfdbfu);
    X86_TICK(c, 2);
    // 0cfdbf  add esp, 4
    X86_AT(c, 0xcfdbfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_cfdc2:
    X86_TICK(c, 20);
    // 0cfdc2  pop edi
    X86_AT(c, 0xcfdc2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cfdc3  leave 
    X86_AT(c, 0xcfdc3u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cfdc4  ret 
    X86_AT(c, 0xcfdc4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcfc54u, "ran off the end of a function");
}
void f_000cfdc8(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0cfdc8  push ebp
    X86_AT(c, 0xcfdc8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cfdc9  mov ebp, esp
    X86_AT(c, 0xcfdc9u);
    c.r[5] = c.r[4];
    // 0cfdcb  sub esp, 8
    X86_AT(c, 0xcfdcbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0cfdce  push ebx
    X86_AT(c, 0xcfdceu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0cfdcf  push esi
    X86_AT(c, 0xcfdcfu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cfdd0  push edi
    X86_AT(c, 0xcfdd0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cfdd1  cmp dword ptr [0xb03f8], 0xffffffff
    X86_AT(c, 0xcfdd1u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB03F8u))), 0xFFFFFFFFu, 0, 4);
    // 0cfdd8  je 0xcfe82
    X86_AT(c, 0xcfdd8u);
    if (x86_cc(c, 4)) { goto L_cfe82; }
    X86_TICK(c, 37);
    // 0cfdde  inc dword ptr [ebp + 8]
    X86_AT(c, 0xcfddeu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0cfde1  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xcfde1u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cfde4  mov edx, eax
    X86_AT(c, 0xcfde4u);
    c.r[2] = c.r[0];
    // 0cfde6  shl edx, 4
    X86_AT(c, 0xcfde6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0cfde9  sub edx, eax
    X86_AT(c, 0xcfde9u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0cfdeb  lea edx, [eax + edx*4]
    X86_AT(c, 0xcfdebu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0cfdee  shl edx, 4
    X86_AT(c, 0xcfdeeu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0cfdf1  sub edx, eax
    X86_AT(c, 0xcfdf1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0cfdf3  shl edx, 6
    X86_AT(c, 0xcfdf3u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x6u, 4, w); if (w) c.r[2] = r; }
    // 0cfdf6  add edx, dword ptr [0xb03f4]
    X86_AT(c, 0xcfdf6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xB03F4u))), 0, 4); }
    // 0cfdfc  mov dword ptr [ebp - 8], edx
    X86_AT(c, 0xcfdfcu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[2]);
    // 0cfdff  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xcfdffu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_cfe06:
    X86_TICK(c, 12);
    // 0cfe06  cmp dword ptr [ebp - 4], 0x4e0
    X86_AT(c, 0xcfe06u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x4E0u, 0, 4);
    // 0cfe0d  jge 0xcfe82
    X86_AT(c, 0xcfe0du);
    if (x86_cc(c, 13)) { goto L_cfe82; }
    X86_TICK(c, 2);
    // 0cfe13  sub ebx, ebx
    X86_AT(c, 0xcfe13u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_cfe15:
    X86_TICK(c, 7);
    // 0cfe15  cmp ebx, 4
    X86_AT(c, 0xcfe15u);
    (void)x86_sub(c, c.r[3], 0x4u, 0, 4);
    // 0cfe18  jge 0xcfe79
    X86_AT(c, 0xcfe18u);
    if (x86_cc(c, 13)) { goto L_cfe79; }
    X86_TICK(c, 2);
    // 0cfe1a  sub esi, esi
    X86_AT(c, 0xcfe1au);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_cfe1c:
    X86_TICK(c, 7);
    // 0cfe1c  cmp esi, 0xf3c0
    X86_AT(c, 0xcfe1cu);
    (void)x86_sub(c, c.r[6], 0xF3C0u, 0, 4);
    // 0cfe22  jge 0xcfe5a
    X86_AT(c, 0xcfe22u);
    if (x86_cc(c, 13)) { goto L_cfe5a; }
    X86_TICK(c, 2);
    // 0cfe24  sub edi, edi
    X86_AT(c, 0xcfe24u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_cfe26:
    X86_TICK(c, 7);
    // 0cfe26  cmp edi, 0x9c
    X86_AT(c, 0xcfe26u);
    (void)x86_sub(c, c.r[7], 0x9Cu, 0, 4);
    // 0cfe2c  jge 0xcfe52
    X86_AT(c, 0xcfe2cu);
    if (x86_cc(c, 13)) { goto L_cfe52; }
    X86_TICK(c, 39);
    // 0cfe2e  lea eax, [esi + edi*1]
    X86_AT(c, 0xcfe2eu);
    c.r[0] = (uint32_t)(c.r[6] + c.r[7]);
    // 0cfe31  lea edx, [ebx + eax*1]
    X86_AT(c, 0xcfe31u);
    c.r[2] = (uint32_t)(c.r[3] + c.r[0]);
    // 0cfe34  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xcfe34u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0cfe37  add eax, edx
    X86_AT(c, 0xcfe37u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0cfe39  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0xcfe39u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0cfe3c  mov al, byte ptr [eax + ecx*1]
    X86_AT(c, 0xcfe3cu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1]))));
    // 0cfe3f  mov ecx, dword ptr [0xb03f4]
    X86_AT(c, 0xcfe3fu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xB03F4u)));
    // 0cfe45  add edx, ecx
    X86_AT(c, 0xcfe45u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[1], 0, 4); }
    // 0cfe47  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0xcfe47u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0cfe4a  mov byte ptr [edx + ecx*1], al
    X86_AT(c, 0xcfe4au);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + c.r[1])), g8(c, 0));
    // 0cfe4d  add edi, 4
    X86_AT(c, 0xcfe4du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cfe50  jmp 0xcfe26
    X86_AT(c, 0xcfe50u);
    X86_POLL(c, 0xcfe26u); goto L_cfe26;
L_cfe52:
    X86_TICK(c, 9);
    // 0cfe52  add esi, 0x4e0
    X86_AT(c, 0xcfe52u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4E0u, 0, 4); }
    // 0cfe58  jmp 0xcfe1c
    X86_AT(c, 0xcfe58u);
    X86_POLL(c, 0xcfe1cu); goto L_cfe1c;
L_cfe5a:
    X86_TICK(c, 20);
    // 0cfe5a  push 0x190
    X86_AT(c, 0xcfe5au);
    { uint32_t v = 0x190u; push32(c, v); }
    // 0cfe5f  push 0x138
    X86_AT(c, 0xcfe5fu);
    { uint32_t v = 0x138u; push32(c, v); }
    // 0cfe64  push 0x18
    X86_AT(c, 0xcfe64u);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0cfe66  push 0x20
    X86_AT(c, 0xcfe66u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0cfe68  push dword ptr [0xb03f4]
    X86_AT(c, 0xcfe68u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB03F4u))); push32(c, v); }
    // 0cfe6e  call 0xbb018
    X86_AT(c, 0xcfe6eu);
    push32(c, 0xcfe73u); x86_call_known(c, 0xbb018u, f_000bb018); X86_RET(c, 0xcfe73u);
    X86_TICK(c, 11);
    // 0cfe73  inc ebx
    X86_AT(c, 0xcfe73u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0cfe74  add esp, 0x14
    X86_AT(c, 0xcfe74u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0cfe77  jmp 0xcfe15
    X86_AT(c, 0xcfe77u);
    X86_POLL(c, 0xcfe15u); goto L_cfe15;
L_cfe79:
    X86_TICK(c, 14);
    // 0cfe79  add dword ptr [ebp - 4], 0x9c
    X86_AT(c, 0xcfe79u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x9Cu, 0, 4)); }
    // 0cfe80  jmp 0xcfe06
    X86_AT(c, 0xcfe80u);
    X86_POLL(c, 0xcfe06u); goto L_cfe06;
L_cfe82:
    X86_TICK(c, 28);
    // 0cfe82  pop edi
    X86_AT(c, 0xcfe82u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cfe83  pop esi
    X86_AT(c, 0xcfe83u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0cfe84  pop ebx
    X86_AT(c, 0xcfe84u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0cfe85  leave 
    X86_AT(c, 0xcfe85u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cfe86  ret 
    X86_AT(c, 0xcfe86u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcfdc8u, "ran off the end of a function");
}
void f_000cfe88(X86Cpu& c) {
    X86_TICK(c, 31);
    // 0cfe88  push ebp
    X86_AT(c, 0xcfe88u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cfe89  mov ebp, esp
    X86_AT(c, 0xcfe89u);
    c.r[5] = c.r[4];
    // 0cfe8b  push edi
    X86_AT(c, 0xcfe8bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cfe8c  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xcfe8cu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cfe8f  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xcfe8fu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0cfe92  lea eax, [edi + edi*2]
    X86_AT(c, 0xcfe92u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0cfe95  lea edx, [eax*8]
    X86_AT(c, 0xcfe95u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0cfe9c  lea edx, [eax + edx*8]
    X86_AT(c, 0xcfe9cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0cfe9f  cmp ecx, dword ptr [edx + 0xa4ae9]
    X86_AT(c, 0xcfe9fu);
    (void)x86_sub(c, c.r[1], rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AE9u))), 0, 4);
    // 0cfea5  jle 0xcfeae
    X86_AT(c, 0xcfea5u);
    if (x86_cc(c, 14)) { goto L_cfeae; }
    X86_TICK(c, 9);
    // 0cfea7  mov eax, 0xffffffff
    X86_AT(c, 0xcfea7u);
    c.r[0] = 0xFFFFFFFFu;
    // 0cfeac  jmp 0xcfec3
    X86_AT(c, 0xcfeacu);
    goto L_cfec3;
L_cfeae:
    X86_TICK(c, 15);
    // 0cfeae  lea eax, [edi + edi*2]
    X86_AT(c, 0xcfeaeu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0cfeb1  lea edx, [eax*8]
    X86_AT(c, 0xcfeb1u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0cfeb8  lea edx, [eax + edx*8]
    X86_AT(c, 0xcfeb8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0cfebb  sub dword ptr [edx + 0xa4ae9], ecx
    X86_AT(c, 0xcfebbu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AE9u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[1], 0, 4)); }
    // 0cfec1  sub eax, eax
    X86_AT(c, 0xcfec1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_cfec3:
    X86_TICK(c, 20);
    // 0cfec3  pop edi
    X86_AT(c, 0xcfec3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0cfec4  leave 
    X86_AT(c, 0xcfec4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0cfec5  ret 
    X86_AT(c, 0xcfec5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcfe88u, "ran off the end of a function");
}
void f_000cfec8(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0cfec8  push ebp
    X86_AT(c, 0xcfec8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0cfec9  mov ebp, esp
    X86_AT(c, 0xcfec9u);
    c.r[5] = c.r[4];
    // 0cfecb  push esi
    X86_AT(c, 0xcfecbu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cfecc  push edi
    X86_AT(c, 0xcfeccu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cfecd  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xcfecdu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0cfed0  push 7
    X86_AT(c, 0xcfed0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfed2  call 0xbb6b0
    X86_AT(c, 0xcfed2u);
    push32(c, 0xcfed7u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xcfed7u);
    X86_TICK(c, 11);
    // 0cfed7  push 0x9944
    X86_AT(c, 0xcfed7u);
    { uint32_t v = 0x9944u; push32(c, v); }
    // 0cfedc  push 7
    X86_AT(c, 0xcfedcu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfede  call 0xba428
    X86_AT(c, 0xcfedeu);
    push32(c, 0xcfee3u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcfee3u);
    X86_TICK(c, 9);
    // 0cfee3  push 7
    X86_AT(c, 0xcfee3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfee5  call 0xbbb5c
    X86_AT(c, 0xcfee5u);
    push32(c, 0xcfeeau); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcfeeau);
    X86_TICK(c, 11);
    // 0cfeea  push 0x9974
    X86_AT(c, 0xcfeeau);
    { uint32_t v = 0x9974u; push32(c, v); }
    // 0cfeef  push 7
    X86_AT(c, 0xcfeefu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfef1  call 0xba428
    X86_AT(c, 0xcfef1u);
    push32(c, 0xcfef6u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcfef6u);
    X86_TICK(c, 9);
    // 0cfef6  push 7
    X86_AT(c, 0xcfef6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfef8  call 0xbbb5c
    X86_AT(c, 0xcfef8u);
    push32(c, 0xcfefdu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcfefdu);
    X86_TICK(c, 2);
    // 0cfefd  add esp, 0x1c
    X86_AT(c, 0xcfefdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
L_cff00:
    X86_TICK(c, 11);
    // 0cff00  push 0x9a0c
    X86_AT(c, 0xcff00u);
    { uint32_t v = 0x9A0Cu; push32(c, v); }
    // 0cff05  push 7
    X86_AT(c, 0xcff05u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cff07  call 0xba428
    X86_AT(c, 0xcff07u);
    push32(c, 0xcff0cu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcff0cu);
    X86_TICK(c, 9);
    // 0cff0c  push 7
    X86_AT(c, 0xcff0cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cff0e  call 0xb6308
    X86_AT(c, 0xcff0eu);
    push32(c, 0xcff13u); x86_call_known(c, 0xb6308u, f_000b6308); X86_RET(c, 0xcff13u);
    X86_TICK(c, 12);
    // 0cff13  xchg esi, eax
    X86_AT(c, 0xcff13u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0cff14  add esp, 0xc
    X86_AT(c, 0xcff14u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cff17  cmp esi, 0xffffffff
    X86_AT(c, 0xcff17u);
    (void)x86_sub(c, c.r[6], 0xFFFFFFFFu, 0, 4);
    // 0cff1a  je 0xcff20
    X86_AT(c, 0xcff1au);
    if (x86_cc(c, 4)) { goto L_cff20; }
    X86_TICK(c, 7);
    // 0cff1c  and esi, esi
    X86_AT(c, 0xcff1cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0cff1e  jne 0xcff29
    X86_AT(c, 0xcff1eu);
    if (x86_cc(c, 5)) { goto L_cff29; }
L_cff20:
    X86_TICK(c, 11);
    // 0cff20  push 0x9a40
    X86_AT(c, 0xcff20u);
    { uint32_t v = 0x9A40u; push32(c, v); }
    // 0cff25  push 7
    X86_AT(c, 0xcff25u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cff27  jmp 0xcff70
    X86_AT(c, 0xcff27u);
    goto L_cff70;
L_cff29:
    X86_TICK(c, 9);
    // 0cff29  push 7
    X86_AT(c, 0xcff29u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cff2b  call 0xbbb5c
    X86_AT(c, 0xcff2bu);
    push32(c, 0xcff30u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcff30u);
    X86_TICK(c, 11);
    // 0cff30  push esi
    X86_AT(c, 0xcff30u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0cff31  push edi
    X86_AT(c, 0xcff31u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0cff32  call 0xcfe88
    X86_AT(c, 0xcff32u);
    push32(c, 0xcff37u); x86_call_known(c, 0xcfe88u, f_000cfe88); X86_RET(c, 0xcff37u);
    X86_TICK(c, 9);
    // 0cff37  add esp, 0xc
    X86_AT(c, 0xcff37u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cff3a  inc eax
    X86_AT(c, 0xcff3au);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0cff3b  jne 0xcff5c
    X86_AT(c, 0xcff3bu);
    if (x86_cc(c, 5)) { goto L_cff5c; }
    X86_TICK(c, 9);
    // 0cff3d  push 3
    X86_AT(c, 0xcff3du);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0cff3f  call 0xb607c
    X86_AT(c, 0xcff3fu);
    push32(c, 0xcff44u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xcff44u);
    X86_TICK(c, 11);
    // 0cff44  push 0x9a80
    X86_AT(c, 0xcff44u);
    { uint32_t v = 0x9A80u; push32(c, v); }
    // 0cff49  push 7
    X86_AT(c, 0xcff49u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cff4b  call 0xba428
    X86_AT(c, 0xcff4bu);
    push32(c, 0xcff50u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcff50u);
    X86_TICK(c, 9);
    // 0cff50  push 7
    X86_AT(c, 0xcff50u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cff52  call 0xbbb5c
    X86_AT(c, 0xcff52u);
    push32(c, 0xcff57u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcff57u);
    X86_TICK(c, 9);
    // 0cff57  add esp, 0x10
    X86_AT(c, 0xcff57u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0cff5a  jmp 0xcff00
    X86_AT(c, 0xcff5au);
    X86_POLL(c, 0xcff00u); goto L_cff00;
L_cff5c:
    X86_TICK(c, 57);
    // 0cff5c  xchg esi, eax
    X86_AT(c, 0xcff5cu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0cff5d  cdq 
    X86_AT(c, 0xcff5du);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0cff5e  mov ecx, 7
    X86_AT(c, 0xcff5eu);
    c.r[1] = 0x7u;
    // 0cff63  idiv ecx
    X86_AT(c, 0xcff63u);
    x86_idiv(c, c.r[1], 4, 0xcff63u);
    // 0cff65  xchg esi, eax
    X86_AT(c, 0xcff65u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0cff66  and esi, esi
    X86_AT(c, 0xcff66u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0cff68  jne 0xcff84
    X86_AT(c, 0xcff68u);
    if (x86_cc(c, 5)) { goto L_cff84; }
    X86_TICK(c, 4);
    // 0cff6a  push 0x9ac0
    X86_AT(c, 0xcff6au);
    { uint32_t v = 0x9AC0u; push32(c, v); }
    // 0cff6f  push ecx
    X86_AT(c, 0xcff6fu);
    { uint32_t v = c.r[1]; push32(c, v); }
L_cff70:
    X86_TICK(c, 7);
    // 0cff70  call 0xba428
    X86_AT(c, 0xcff70u);
    push32(c, 0xcff75u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcff75u);
    X86_TICK(c, 9);
    // 0cff75  push 7
    X86_AT(c, 0xcff75u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cff77  call 0xbbb5c
    X86_AT(c, 0xcff77u);
    push32(c, 0xcff7cu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcff7cu);
    X86_TICK(c, 9);
    // 0cff7c  add esp, 0xc
    X86_AT(c, 0xcff7cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cff7f  jmp 0xd0027
    X86_AT(c, 0xcff7fu);
    goto L_d0027;
L_cff84:
    X86_TICK(c, 11);
    // 0cff84  push 0x9b50
    X86_AT(c, 0xcff84u);
    { uint32_t v = 0x9B50u; push32(c, v); }
    // 0cff89  push 7
    X86_AT(c, 0xcff89u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cff8b  call 0xba428
    X86_AT(c, 0xcff8bu);
    push32(c, 0xcff90u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcff90u);
    X86_TICK(c, 9);
    // 0cff90  push 7
    X86_AT(c, 0xcff90u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cff92  call 0xbbb5c
    X86_AT(c, 0xcff92u);
    push32(c, 0xcff97u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcff97u);
    X86_TICK(c, 20);
    // 0cff97  lea eax, [edi + edi*2]
    X86_AT(c, 0xcff97u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0cff9a  lea edx, [eax*8]
    X86_AT(c, 0xcff9au);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0cffa1  lea edx, [eax + edx*8]
    X86_AT(c, 0xcffa1u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0cffa4  add esp, 0xc
    X86_AT(c, 0xcffa4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0cffa7  cmp byte ptr [edx + 0xa4ad0], 0x46
    X86_AT(c, 0xcffa7u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD0u))), 0x46u, 0, 1);
    // 0cffae  jne 0xcffb7
    X86_AT(c, 0xcffaeu);
    if (x86_cc(c, 5)) { goto L_cffb7; }
    X86_TICK(c, 9);
    // 0cffb0  push 0x9b98
    X86_AT(c, 0xcffb0u);
    { uint32_t v = 0x9B98u; push32(c, v); }
    // 0cffb5  jmp 0xcffbc
    X86_AT(c, 0xcffb5u);
    goto L_cffbc;
L_cffb7:
    X86_TICK(c, 2);
    // 0cffb7  push 0x9bb8
    X86_AT(c, 0xcffb7u);
    { uint32_t v = 0x9BB8u; push32(c, v); }
L_cffbc:
    X86_TICK(c, 9);
    // 0cffbc  push 7
    X86_AT(c, 0xcffbcu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cffbe  call 0xba428
    X86_AT(c, 0xcffbeu);
    push32(c, 0xcffc3u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcffc3u);
    X86_TICK(c, 11);
    // 0cffc3  add esp, 8
    X86_AT(c, 0xcffc3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0cffc6  push 7
    X86_AT(c, 0xcffc6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cffc8  call 0xbbb5c
    X86_AT(c, 0xcffc8u);
    push32(c, 0xcffcdu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcffcdu);
    X86_TICK(c, 11);
    // 0cffcd  dec esi
    X86_AT(c, 0xcffcdu);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0cffce  add esp, 4
    X86_AT(c, 0xcffceu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0cffd1  cmp esi, 9
    X86_AT(c, 0xcffd1u);
    (void)x86_sub(c, c.r[6], 0x9u, 0, 4);
    // 0cffd4  jle 0xcffdb
    X86_AT(c, 0xcffd4u);
    if (x86_cc(c, 14)) { goto L_cffdb; }
    X86_TICK(c, 2);
    // 0cffd6  mov esi, 9
    X86_AT(c, 0xcffd6u);
    c.r[6] = 0x9u;
L_cffdb:
    X86_TICK(c, 9);
    // 0cffdb  push 0xb
    X86_AT(c, 0xcffdbu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0cffdd  call 0xba51c
    X86_AT(c, 0xcffddu);
    push32(c, 0xcffe2u); x86_call_known(c, 0xba51cu, f_000ba51c); X86_RET(c, 0xcffe2u);
    X86_TICK(c, 14);
    // 0cffe2  push dword ptr [esi*4 + 0xb302c]
    X86_AT(c, 0xcffe2u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xB302Cu))); push32(c, v); }
    // 0cffe9  push 7
    X86_AT(c, 0xcffe9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cffeb  call 0xba428
    X86_AT(c, 0xcffebu);
    push32(c, 0xcfff0u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xcfff0u);
    X86_TICK(c, 9);
    // 0cfff0  push 7
    X86_AT(c, 0xcfff0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfff2  call 0xbbb5c
    X86_AT(c, 0xcfff2u);
    push32(c, 0xcfff7u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xcfff7u);
    X86_TICK(c, 9);
    // 0cfff7  push 7
    X86_AT(c, 0xcfff7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0cfff9  call 0xbb6b0
    X86_AT(c, 0xcfff9u);
    push32(c, 0xcfffeu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xcfffeu);
    X86_TICK(c, 9);
    // 0cfffe  push 7
    X86_AT(c, 0xcfffeu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0000  call 0xc9890
    X86_AT(c, 0xd0000u);
    push32(c, 0xd0005u); x86_call_known(c, 0xc9890u, f_000c9890); X86_RET(c, 0xd0005u);
    X86_TICK(c, 9);
    // 0d0005  push 7
    X86_AT(c, 0xd0005u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0007  call 0xbbb5c
    X86_AT(c, 0xd0007u);
    push32(c, 0xd000cu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd000cu);
    X86_TICK(c, 11);
    // 0d000c  push 0x9be0
    X86_AT(c, 0xd000cu);
    { uint32_t v = 0x9BE0u; push32(c, v); }
    // 0d0011  push 7
    X86_AT(c, 0xd0011u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0013  call 0xba428
    X86_AT(c, 0xd0013u);
    push32(c, 0xd0018u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0018u);
    X86_TICK(c, 9);
    // 0d0018  push 7
    X86_AT(c, 0xd0018u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d001a  call 0xbbb5c
    X86_AT(c, 0xd001au);
    push32(c, 0xd001fu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd001fu);
    X86_TICK(c, 9);
    // 0d001f  add esp, 0x28
    X86_AT(c, 0xd001fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0d0022  jmp 0xcff00
    X86_AT(c, 0xd0022u);
    X86_POLL(c, 0xcff00u); goto L_cff00;
L_d0027:
    X86_TICK(c, 24);
    // 0d0027  pop edi
    X86_AT(c, 0xd0027u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d0028  pop esi
    X86_AT(c, 0xd0028u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d0029  leave 
    X86_AT(c, 0xd0029u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d002a  ret 
    X86_AT(c, 0xd002au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcfec8u, "ran off the end of a function");
}
void f_000d002c(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0d002c  push ebp
    X86_AT(c, 0xd002cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d002d  mov ebp, esp
    X86_AT(c, 0xd002du);
    c.r[5] = c.r[4];
    // 0d002f  push esi
    X86_AT(c, 0xd002fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d0030  push edi
    X86_AT(c, 0xd0030u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d0031  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xd0031u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d0034  push 7
    X86_AT(c, 0xd0034u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0036  call 0xbb6b0
    X86_AT(c, 0xd0036u);
    push32(c, 0xd003bu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd003bu);
    X86_TICK(c, 11);
    // 0d003b  push 0x9c10
    X86_AT(c, 0xd003bu);
    { uint32_t v = 0x9C10u; push32(c, v); }
    // 0d0040  push 7
    X86_AT(c, 0xd0040u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0042  call 0xba428
    X86_AT(c, 0xd0042u);
    push32(c, 0xd0047u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0047u);
    X86_TICK(c, 9);
    // 0d0047  push 7
    X86_AT(c, 0xd0047u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0049  call 0xbbb5c
    X86_AT(c, 0xd0049u);
    push32(c, 0xd004eu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd004eu);
    X86_TICK(c, 11);
    // 0d004e  push 0x9c80
    X86_AT(c, 0xd004eu);
    { uint32_t v = 0x9C80u; push32(c, v); }
    // 0d0053  push 7
    X86_AT(c, 0xd0053u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0055  call 0xba428
    X86_AT(c, 0xd0055u);
    push32(c, 0xd005au); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd005au);
    X86_TICK(c, 9);
    // 0d005a  push 7
    X86_AT(c, 0xd005au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d005c  call 0xbbb5c
    X86_AT(c, 0xd005cu);
    push32(c, 0xd0061u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0061u);
    X86_TICK(c, 2);
    // 0d0061  add esp, 0x1c
    X86_AT(c, 0xd0061u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
L_d0064:
    X86_TICK(c, 11);
    // 0d0064  push 0x9d30
    X86_AT(c, 0xd0064u);
    { uint32_t v = 0x9D30u; push32(c, v); }
    // 0d0069  push 7
    X86_AT(c, 0xd0069u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d006b  call 0xba428
    X86_AT(c, 0xd006bu);
    push32(c, 0xd0070u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0070u);
    X86_TICK(c, 9);
    // 0d0070  push 7
    X86_AT(c, 0xd0070u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0072  call 0xb6404
    X86_AT(c, 0xd0072u);
    push32(c, 0xd0077u); x86_call_known(c, 0xb6404u, f_000b6404); X86_RET(c, 0xd0077u);
    X86_TICK(c, 12);
    // 0d0077  xchg esi, eax
    X86_AT(c, 0xd0077u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0d0078  push 7
    X86_AT(c, 0xd0078u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d007a  call 0xbbb5c
    X86_AT(c, 0xd007au);
    push32(c, 0xd007fu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd007fu);
    X86_TICK(c, 9);
    // 0d007f  add esp, 0x10
    X86_AT(c, 0xd007fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d0082  cmp esi, 0xffffffff
    X86_AT(c, 0xd0082u);
    (void)x86_sub(c, c.r[6], 0xFFFFFFFFu, 0, 4);
    // 0d0085  je 0xd008b
    X86_AT(c, 0xd0085u);
    if (x86_cc(c, 4)) { goto L_d008b; }
    X86_TICK(c, 7);
    // 0d0087  and esi, esi
    X86_AT(c, 0xd0087u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d0089  jne 0xd00a6
    X86_AT(c, 0xd0089u);
    if (x86_cc(c, 5)) { goto L_d00a6; }
L_d008b:
    X86_TICK(c, 11);
    // 0d008b  push 0x9d64
    X86_AT(c, 0xd008bu);
    { uint32_t v = 0x9D64u; push32(c, v); }
    // 0d0090  push 7
    X86_AT(c, 0xd0090u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0092  call 0xba428
    X86_AT(c, 0xd0092u);
    push32(c, 0xd0097u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0097u);
    X86_TICK(c, 9);
    // 0d0097  push 7
    X86_AT(c, 0xd0097u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0099  call 0xbbb5c
    X86_AT(c, 0xd0099u);
    push32(c, 0xd009eu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd009eu);
    X86_TICK(c, 9);
    // 0d009e  add esp, 0xc
    X86_AT(c, 0xd009eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d00a1  jmp 0xd01a8
    X86_AT(c, 0xd00a1u);
    goto L_d01a8;
L_d00a6:
    X86_TICK(c, 11);
    // 0d00a6  push esi
    X86_AT(c, 0xd00a6u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d00a7  push edi
    X86_AT(c, 0xd00a7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d00a8  call 0xcfe88
    X86_AT(c, 0xd00a8u);
    push32(c, 0xd00adu); x86_call_known(c, 0xcfe88u, f_000cfe88); X86_RET(c, 0xd00adu);
    X86_TICK(c, 9);
    // 0d00ad  add esp, 8
    X86_AT(c, 0xd00adu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d00b0  inc eax
    X86_AT(c, 0xd00b0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d00b1  jne 0xd00e8
    X86_AT(c, 0xd00b1u);
    if (x86_cc(c, 5)) { goto L_d00e8; }
    X86_TICK(c, 9);
    // 0d00b3  push 3
    X86_AT(c, 0xd00b3u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d00b5  call 0xb607c
    X86_AT(c, 0xd00b5u);
    push32(c, 0xd00bau); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd00bau);
    X86_TICK(c, 11);
    // 0d00ba  push 0x9db8
    X86_AT(c, 0xd00bau);
    { uint32_t v = 0x9DB8u; push32(c, v); }
    // 0d00bf  push 7
    X86_AT(c, 0xd00bfu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d00c1  call 0xba428
    X86_AT(c, 0xd00c1u);
    push32(c, 0xd00c6u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd00c6u);
    X86_TICK(c, 9);
    // 0d00c6  push 7
    X86_AT(c, 0xd00c6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d00c8  call 0xbbb5c
    X86_AT(c, 0xd00c8u);
    push32(c, 0xd00cdu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd00cdu);
    X86_TICK(c, 11);
    // 0d00cd  push 0x9dec
    X86_AT(c, 0xd00cdu);
    { uint32_t v = 0x9DECu; push32(c, v); }
    // 0d00d2  push 7
    X86_AT(c, 0xd00d2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d00d4  call 0xba428
    X86_AT(c, 0xd00d4u);
    push32(c, 0xd00d9u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd00d9u);
    X86_TICK(c, 9);
    // 0d00d9  push 7
    X86_AT(c, 0xd00d9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d00db  call 0xbbb5c
    X86_AT(c, 0xd00dbu);
    push32(c, 0xd00e0u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd00e0u);
    X86_TICK(c, 9);
    // 0d00e0  add esp, 0x1c
    X86_AT(c, 0xd00e0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0d00e3  jmp 0xd01a8
    X86_AT(c, 0xd00e3u);
    goto L_d01a8;
L_d00e8:
    X86_TICK(c, 57);
    // 0d00e8  xchg esi, eax
    X86_AT(c, 0xd00e8u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0d00e9  cdq 
    X86_AT(c, 0xd00e9u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0d00ea  mov ecx, 0x64
    X86_AT(c, 0xd00eau);
    c.r[1] = 0x64u;
    // 0d00ef  idiv ecx
    X86_AT(c, 0xd00efu);
    x86_idiv(c, c.r[1], 4, 0xd00efu);
    // 0d00f1  xchg esi, eax
    X86_AT(c, 0xd00f1u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0d00f2  and esi, esi
    X86_AT(c, 0xd00f2u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d00f4  jne 0xd0126
    X86_AT(c, 0xd00f4u);
    if (x86_cc(c, 5)) { goto L_d0126; }
    X86_TICK(c, 11);
    // 0d00f6  push 0x9e28
    X86_AT(c, 0xd00f6u);
    { uint32_t v = 0x9E28u; push32(c, v); }
    // 0d00fb  push 7
    X86_AT(c, 0xd00fbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d00fd  call 0xba428
    X86_AT(c, 0xd00fdu);
    push32(c, 0xd0102u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0102u);
    X86_TICK(c, 9);
    // 0d0102  push 7
    X86_AT(c, 0xd0102u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0104  call 0xbbb5c
    X86_AT(c, 0xd0104u);
    push32(c, 0xd0109u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0109u);
    X86_TICK(c, 11);
    // 0d0109  push 0x9e58
    X86_AT(c, 0xd0109u);
    { uint32_t v = 0x9E58u; push32(c, v); }
    // 0d010e  push 7
    X86_AT(c, 0xd010eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0110  call 0xba428
    X86_AT(c, 0xd0110u);
    push32(c, 0xd0115u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0115u);
    X86_TICK(c, 9);
    // 0d0115  push 7
    X86_AT(c, 0xd0115u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0117  call 0xbbb5c
    X86_AT(c, 0xd0117u);
    push32(c, 0xd011cu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd011cu);
    X86_TICK(c, 9);
    // 0d011c  push 7
    X86_AT(c, 0xd011cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d011e  call 0xc9890
    X86_AT(c, 0xd011eu);
    push32(c, 0xd0123u); x86_call_known(c, 0xc9890u, f_000c9890); X86_RET(c, 0xd0123u);
    X86_TICK(c, 2);
    // 0d0123  add esp, 0x1c
    X86_AT(c, 0xd0123u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
L_d0126:
    X86_TICK(c, 11);
    // 0d0126  push 0x9e9c
    X86_AT(c, 0xd0126u);
    { uint32_t v = 0x9E9Cu; push32(c, v); }
    // 0d012b  push 7
    X86_AT(c, 0xd012bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d012d  call 0xba428
    X86_AT(c, 0xd012du);
    push32(c, 0xd0132u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0132u);
    X86_TICK(c, 14);
    // 0d0132  add esp, 8
    X86_AT(c, 0xd0132u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d0135  cmp dword ptr [0x460e4], 0
    X86_AT(c, 0xd0135u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x460E4u))), 0x0u, 0, 4);
    // 0d013c  jne 0xd0148
    X86_AT(c, 0xd013cu);
    if (x86_cc(c, 5)) { goto L_d0148; }
    X86_TICK(c, 9);
    // 0d013e  push 7
    X86_AT(c, 0xd013eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0140  call 0xc9890
    X86_AT(c, 0xd0140u);
    push32(c, 0xd0145u); x86_call_known(c, 0xc9890u, f_000c9890); X86_RET(c, 0xd0145u);
    X86_TICK(c, 2);
    // 0d0145  add esp, 4
    X86_AT(c, 0xd0145u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_d0148:
    X86_TICK(c, 9);
    // 0d0148  push 7
    X86_AT(c, 0xd0148u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d014a  call 0xbbb5c
    X86_AT(c, 0xd014au);
    push32(c, 0xd014fu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd014fu);
    X86_TICK(c, 9);
    // 0d014f  add esp, 4
    X86_AT(c, 0xd014fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d0152  cmp esi, 0xa
    X86_AT(c, 0xd0152u);
    (void)x86_sub(c, c.r[6], 0xAu, 0, 4);
    // 0d0155  jle 0xd015c
    X86_AT(c, 0xd0155u);
    if (x86_cc(c, 14)) { goto L_d015c; }
    X86_TICK(c, 2);
    // 0d0157  mov esi, 0xa
    X86_AT(c, 0xd0157u);
    c.r[6] = 0xAu;
L_d015c:
    X86_TICK(c, 9);
    // 0d015c  push 0xb
    X86_AT(c, 0xd015cu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d015e  call 0xba51c
    X86_AT(c, 0xd015eu);
    push32(c, 0xd0163u); x86_call_known(c, 0xba51cu, f_000ba51c); X86_RET(c, 0xd0163u);
    X86_TICK(c, 14);
    // 0d0163  push dword ptr [esi*4 + 0xb3054]
    X86_AT(c, 0xd0163u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xB3054u))); push32(c, v); }
    // 0d016a  push 7
    X86_AT(c, 0xd016au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d016c  call 0xba428
    X86_AT(c, 0xd016cu);
    push32(c, 0xd0171u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0171u);
    X86_TICK(c, 9);
    // 0d0171  push 7
    X86_AT(c, 0xd0171u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0173  call 0xbbb5c
    X86_AT(c, 0xd0173u);
    push32(c, 0xd0178u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0178u);
    X86_TICK(c, 9);
    // 0d0178  push 7
    X86_AT(c, 0xd0178u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d017a  call 0xbb6b0
    X86_AT(c, 0xd017au);
    push32(c, 0xd017fu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd017fu);
    X86_TICK(c, 9);
    // 0d017f  push 7
    X86_AT(c, 0xd017fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0181  call 0xc9890
    X86_AT(c, 0xd0181u);
    push32(c, 0xd0186u); x86_call_known(c, 0xc9890u, f_000c9890); X86_RET(c, 0xd0186u);
    X86_TICK(c, 9);
    // 0d0186  push 7
    X86_AT(c, 0xd0186u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0188  call 0xbbb5c
    X86_AT(c, 0xd0188u);
    push32(c, 0xd018du); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd018du);
    X86_TICK(c, 11);
    // 0d018d  push 0x9f40
    X86_AT(c, 0xd018du);
    { uint32_t v = 0x9F40u; push32(c, v); }
    // 0d0192  push 7
    X86_AT(c, 0xd0192u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0194  call 0xba428
    X86_AT(c, 0xd0194u);
    push32(c, 0xd0199u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0199u);
    X86_TICK(c, 9);
    // 0d0199  push 7
    X86_AT(c, 0xd0199u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d019b  call 0xbbb5c
    X86_AT(c, 0xd019bu);
    push32(c, 0xd01a0u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd01a0u);
    X86_TICK(c, 9);
    // 0d01a0  add esp, 0x28
    X86_AT(c, 0xd01a0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0d01a3  jmp 0xd0064
    X86_AT(c, 0xd01a3u);
    X86_POLL(c, 0xd0064u); goto L_d0064;
L_d01a8:
    X86_TICK(c, 24);
    // 0d01a8  pop edi
    X86_AT(c, 0xd01a8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d01a9  pop esi
    X86_AT(c, 0xd01a9u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d01aa  leave 
    X86_AT(c, 0xd01aau);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d01ab  ret 
    X86_AT(c, 0xd01abu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd002cu, "ran off the end of a function");
}
void f_000d01a8(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0d01a8  pop edi
    X86_AT(c, 0xd01a8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d01a9  pop esi
    X86_AT(c, 0xd01a9u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d01aa  leave 
    X86_AT(c, 0xd01aau);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d01ab  ret 
    X86_AT(c, 0xd01abu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd01a8u, "ran off the end of a function");
}
void f_000d01ac(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0d01ac  push ebp
    X86_AT(c, 0xd01acu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d01ad  mov ebp, esp
    X86_AT(c, 0xd01adu);
    c.r[5] = c.r[4];
    // 0d01af  push ebx
    X86_AT(c, 0xd01afu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d01b0  push esi
    X86_AT(c, 0xd01b0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d01b1  push edi
    X86_AT(c, 0xd01b1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d01b2  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xd01b2u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d01b5  push 7
    X86_AT(c, 0xd01b5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d01b7  call 0xbb6b0
    X86_AT(c, 0xd01b7u);
    push32(c, 0xd01bcu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd01bcu);
    X86_TICK(c, 11);
    // 0d01bc  push 0x9f58
    X86_AT(c, 0xd01bcu);
    { uint32_t v = 0x9F58u; push32(c, v); }
    // 0d01c1  push 7
    X86_AT(c, 0xd01c1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d01c3  call 0xba428
    X86_AT(c, 0xd01c3u);
    push32(c, 0xd01c8u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd01c8u);
    X86_TICK(c, 9);
    // 0d01c8  push 7
    X86_AT(c, 0xd01c8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d01ca  call 0xbbb5c
    X86_AT(c, 0xd01cau);
    push32(c, 0xd01cfu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd01cfu);
    X86_TICK(c, 11);
    // 0d01cf  push 0x9fcc
    X86_AT(c, 0xd01cfu);
    { uint32_t v = 0x9FCCu; push32(c, v); }
    // 0d01d4  push 7
    X86_AT(c, 0xd01d4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d01d6  call 0xba428
    X86_AT(c, 0xd01d6u);
    push32(c, 0xd01dbu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd01dbu);
    X86_TICK(c, 9);
    // 0d01db  push 7
    X86_AT(c, 0xd01dbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d01dd  call 0xbbb5c
    X86_AT(c, 0xd01ddu);
    push32(c, 0xd01e2u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd01e2u);
    X86_TICK(c, 14);
    // 0d01e2  add esp, 0x1c
    X86_AT(c, 0xd01e2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0d01e5  cmp byte ptr [0xa4a49], 0x81
    X86_AT(c, 0xd01e5u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xA4A49u))), 0x81u, 0, 1);
    // 0d01ec  jne 0xd01f5
    X86_AT(c, 0xd01ecu);
    if (x86_cc(c, 5)) { goto L_d01f5; }
    X86_TICK(c, 9);
    // 0d01ee  push 0xa020
    X86_AT(c, 0xd01eeu);
    { uint32_t v = 0xA020u; push32(c, v); }
    // 0d01f3  jmp 0xd01fa
    X86_AT(c, 0xd01f3u);
    goto L_d01fa;
L_d01f5:
    X86_TICK(c, 2);
    // 0d01f5  push 0xa06c
    X86_AT(c, 0xd01f5u);
    { uint32_t v = 0xA06Cu; push32(c, v); }
L_d01fa:
    X86_TICK(c, 9);
    // 0d01fa  push 7
    X86_AT(c, 0xd01fau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d01fc  call 0xba428
    X86_AT(c, 0xd01fcu);
    push32(c, 0xd0201u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0201u);
    X86_TICK(c, 11);
    // 0d0201  add esp, 8
    X86_AT(c, 0xd0201u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d0204  push 7
    X86_AT(c, 0xd0204u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0206  call 0xb6e88
    X86_AT(c, 0xd0206u);
    push32(c, 0xd020bu); x86_call_known(c, 0xb6e88u, f_000b6e88); X86_RET(c, 0xd020bu);
    X86_TICK(c, 12);
    // 0d020b  xchg ebx, eax
    X86_AT(c, 0xd020bu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d020c  push 7
    X86_AT(c, 0xd020cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d020e  call 0xbbb5c
    X86_AT(c, 0xd020eu);
    push32(c, 0xd0213u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0213u);
    X86_TICK(c, 4);
    // 0d0213  sub esi, esi
    X86_AT(c, 0xd0213u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0d0215  add esp, 8
    X86_AT(c, 0xd0215u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d0218:
    X86_TICK(c, 7);
    // 0d0218  cmp esi, 0x30
    X86_AT(c, 0xd0218u);
    (void)x86_sub(c, c.r[6], 0x30u, 0, 4);
    // 0d021b  jge 0xd0229
    X86_AT(c, 0xd021bu);
    if (x86_cc(c, 13)) { goto L_d0229; }
    X86_TICK(c, 12);
    // 0d021d  cmp byte ptr [esi + 0xa5ce8], 0
    X86_AT(c, 0xd021du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xA5CE8u))), 0x0u, 0, 1);
    // 0d0224  je 0xd0229
    X86_AT(c, 0xd0224u);
    if (x86_cc(c, 4)) { goto L_d0229; }
    X86_TICK(c, 9);
    // 0d0226  inc esi
    X86_AT(c, 0xd0226u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d0227  jmp 0xd0218
    X86_AT(c, 0xd0227u);
    X86_POLL(c, 0xd0218u); goto L_d0218;
L_d0229:
    X86_TICK(c, 7);
    // 0d0229  cmp esi, 0x30
    X86_AT(c, 0xd0229u);
    (void)x86_sub(c, c.r[6], 0x30u, 0, 4);
    // 0d022c  jl 0xd0248
    X86_AT(c, 0xd022cu);
    if (x86_cc(c, 12)) { goto L_d0248; }
    X86_TICK(c, 11);
    // 0d022e  push 0xa0ac
    X86_AT(c, 0xd022eu);
    { uint32_t v = 0xA0ACu; push32(c, v); }
    // 0d0233  push 7
    X86_AT(c, 0xd0233u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0235  call 0xba428
    X86_AT(c, 0xd0235u);
    push32(c, 0xd023au); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd023au);
    X86_TICK(c, 9);
    // 0d023a  push 7
    X86_AT(c, 0xd023au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d023c  call 0xbbb5c
    X86_AT(c, 0xd023cu);
    push32(c, 0xd0241u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0241u);
    X86_TICK(c, 9);
    // 0d0241  push 0xa128
    X86_AT(c, 0xd0241u);
    { uint32_t v = 0xA128u; push32(c, v); }
    // 0d0246  jmp 0xd0265
    X86_AT(c, 0xd0246u);
    goto L_d0265;
L_d0248:
    X86_TICK(c, 7);
    // 0d0248  cmp bl, 0x59
    X86_AT(c, 0xd0248u);
    (void)x86_sub(c, g8(c, 3), 0x59u, 0, 1);
    // 0d024b  je 0xd027b
    X86_AT(c, 0xd024bu);
    if (x86_cc(c, 4)) { goto L_d027b; }
    X86_TICK(c, 11);
    // 0d024d  push 0xa168
    X86_AT(c, 0xd024du);
    { uint32_t v = 0xA168u; push32(c, v); }
    // 0d0252  push 7
    X86_AT(c, 0xd0252u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0254  call 0xba428
    X86_AT(c, 0xd0254u);
    push32(c, 0xd0259u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0259u);
    X86_TICK(c, 9);
    // 0d0259  push 7
    X86_AT(c, 0xd0259u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d025b  call 0xbbb5c
    X86_AT(c, 0xd025bu);
    push32(c, 0xd0260u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0260u);
    X86_TICK(c, 2);
    // 0d0260  push 0xa1f0
    X86_AT(c, 0xd0260u);
    { uint32_t v = 0xA1F0u; push32(c, v); }
L_d0265:
    X86_TICK(c, 9);
    // 0d0265  push 7
    X86_AT(c, 0xd0265u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0267  call 0xba428
    X86_AT(c, 0xd0267u);
    push32(c, 0xd026cu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd026cu);
    X86_TICK(c, 9);
    // 0d026c  push 7
    X86_AT(c, 0xd026cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d026e  call 0xbbb5c
    X86_AT(c, 0xd026eu);
    push32(c, 0xd0273u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0273u);
    X86_TICK(c, 9);
    // 0d0273  add esp, 0x18
    X86_AT(c, 0xd0273u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0d0276  jmp 0xd02ff
    X86_AT(c, 0xd0276u);
    goto L_d02ff;
L_d027b:
    X86_TICK(c, 18);
    // 0d027b  lea eax, [edi + edi*2]
    X86_AT(c, 0xd027bu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0d027e  lea edx, [eax*8]
    X86_AT(c, 0xd027eu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0d0285  lea edx, [eax + edx*8]
    X86_AT(c, 0xd0285u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0d0288  cmp dword ptr [edx + 0xa4ae9], 0x320
    X86_AT(c, 0xd0288u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AE9u))), 0x320u, 0, 4);
    // 0d0292  jge 0xd02c6
    X86_AT(c, 0xd0292u);
    if (x86_cc(c, 13)) { goto L_d02c6; }
    X86_TICK(c, 9);
    // 0d0294  push 3
    X86_AT(c, 0xd0294u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d0296  call 0xb607c
    X86_AT(c, 0xd0296u);
    push32(c, 0xd029bu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd029bu);
    X86_TICK(c, 11);
    // 0d029b  push 0xa230
    X86_AT(c, 0xd029bu);
    { uint32_t v = 0xA230u; push32(c, v); }
    // 0d02a0  push 7
    X86_AT(c, 0xd02a0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d02a2  call 0xba428
    X86_AT(c, 0xd02a2u);
    push32(c, 0xd02a7u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd02a7u);
    X86_TICK(c, 9);
    // 0d02a7  push 7
    X86_AT(c, 0xd02a7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d02a9  call 0xbbb5c
    X86_AT(c, 0xd02a9u);
    push32(c, 0xd02aeu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd02aeu);
    X86_TICK(c, 11);
    // 0d02ae  push 0xa29c
    X86_AT(c, 0xd02aeu);
    { uint32_t v = 0xA29Cu; push32(c, v); }
    // 0d02b3  push 7
    X86_AT(c, 0xd02b3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d02b5  call 0xba428
    X86_AT(c, 0xd02b5u);
    push32(c, 0xd02bau); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd02bau);
    X86_TICK(c, 9);
    // 0d02ba  push 7
    X86_AT(c, 0xd02bau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d02bc  call 0xbbb5c
    X86_AT(c, 0xd02bcu);
    push32(c, 0xd02c1u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd02c1u);
    X86_TICK(c, 9);
    // 0d02c1  add esp, 0x1c
    X86_AT(c, 0xd02c1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0d02c4  jmp 0xd02ff
    X86_AT(c, 0xd02c4u);
    goto L_d02ff;
L_d02c6:
    X86_TICK(c, 24);
    // 0d02c6  lea eax, [edi + edi*2]
    X86_AT(c, 0xd02c6u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0d02c9  lea edx, [eax*8]
    X86_AT(c, 0xd02c9u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0d02d0  lea edx, [eax + edx*8]
    X86_AT(c, 0xd02d0u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0d02d3  sub dword ptr [edx + 0xa4ae9], 0x320
    X86_AT(c, 0xd02d3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AE9u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, 0x320u, 0, 4)); }
    // 0d02dd  push 0xa2dc
    X86_AT(c, 0xd02ddu);
    { uint32_t v = 0xA2DCu; push32(c, v); }
    // 0d02e2  push 7
    X86_AT(c, 0xd02e2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d02e4  call 0xba428
    X86_AT(c, 0xd02e4u);
    push32(c, 0xd02e9u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd02e9u);
    X86_TICK(c, 9);
    // 0d02e9  push 7
    X86_AT(c, 0xd02e9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d02eb  call 0xbbb5c
    X86_AT(c, 0xd02ebu);
    push32(c, 0xd02f0u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd02f0u);
    X86_TICK(c, 9);
    // 0d02f0  mov byte ptr [0xa4a49], 0x81
    X86_AT(c, 0xd02f0u);
    wr8((c.sbase[3] + (uint32_t)(0xA4A49u)), 0x81u);
    // 0d02f7  call 0xb75c0
    X86_AT(c, 0xd02f7u);
    push32(c, 0xd02fcu); x86_call_known(c, 0xb75c0u, f_000b75c0); X86_RET(c, 0xd02fcu);
    X86_TICK(c, 2);
    // 0d02fc  add esp, 0xc
    X86_AT(c, 0xd02fcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_d02ff:
    X86_TICK(c, 28);
    // 0d02ff  pop edi
    X86_AT(c, 0xd02ffu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d0300  pop esi
    X86_AT(c, 0xd0300u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d0301  pop ebx
    X86_AT(c, 0xd0301u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d0302  leave 
    X86_AT(c, 0xd0302u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d0303  ret 
    X86_AT(c, 0xd0303u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd01acu, "ran off the end of a function");
}
void f_000d0304(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0d0304  push ebp
    X86_AT(c, 0xd0304u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d0305  mov ebp, esp
    X86_AT(c, 0xd0305u);
    c.r[5] = c.r[4];
    // 0d0307  push esi
    X86_AT(c, 0xd0307u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d0308  push edi
    X86_AT(c, 0xd0308u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d0309  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xd0309u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d030c  push 7
    X86_AT(c, 0xd030cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d030e  call 0xbb6b0
    X86_AT(c, 0xd030eu);
    push32(c, 0xd0313u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd0313u);
    X86_TICK(c, 11);
    // 0d0313  push 0xa358
    X86_AT(c, 0xd0313u);
    { uint32_t v = 0xA358u; push32(c, v); }
    // 0d0318  push 7
    X86_AT(c, 0xd0318u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d031a  call 0xba428
    X86_AT(c, 0xd031au);
    push32(c, 0xd031fu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd031fu);
    X86_TICK(c, 9);
    // 0d031f  push 7
    X86_AT(c, 0xd031fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0321  call 0xbbb5c
    X86_AT(c, 0xd0321u);
    push32(c, 0xd0326u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0326u);
    X86_TICK(c, 11);
    // 0d0326  push 0xa388
    X86_AT(c, 0xd0326u);
    { uint32_t v = 0xA388u; push32(c, v); }
    // 0d032b  push 7
    X86_AT(c, 0xd032bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d032d  call 0xba428
    X86_AT(c, 0xd032du);
    push32(c, 0xd0332u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0332u);
    X86_TICK(c, 9);
    // 0d0332  push 7
    X86_AT(c, 0xd0332u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0334  call 0xbbb5c
    X86_AT(c, 0xd0334u);
    push32(c, 0xd0339u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0339u);
    X86_TICK(c, 11);
    // 0d0339  push 0xa3c0
    X86_AT(c, 0xd0339u);
    { uint32_t v = 0xA3C0u; push32(c, v); }
    // 0d033e  push 7
    X86_AT(c, 0xd033eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0340  call 0xba428
    X86_AT(c, 0xd0340u);
    push32(c, 0xd0345u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0345u);
    X86_TICK(c, 2);
    // 0d0345  add esp, 0x24
    X86_AT(c, 0xd0345u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
L_d0348:
    X86_TICK(c, 9);
    // 0d0348  push 7
    X86_AT(c, 0xd0348u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d034a  call 0xb6404
    X86_AT(c, 0xd034au);
    push32(c, 0xd034fu); x86_call_known(c, 0xb6404u, f_000b6404); X86_RET(c, 0xd034fu);
    X86_TICK(c, 12);
    // 0d034f  xchg esi, eax
    X86_AT(c, 0xd034fu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0d0350  push 7
    X86_AT(c, 0xd0350u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0352  call 0xbbb5c
    X86_AT(c, 0xd0352u);
    push32(c, 0xd0357u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0357u);
    X86_TICK(c, 9);
    // 0d0357  add esp, 8
    X86_AT(c, 0xd0357u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d035a  cmp esi, 0xffffffff
    X86_AT(c, 0xd035au);
    (void)x86_sub(c, c.r[6], 0xFFFFFFFFu, 0, 4);
    // 0d035d  je 0xd042a
    X86_AT(c, 0xd035du);
    if (x86_cc(c, 4)) { goto L_d042a; }
    X86_TICK(c, 7);
    // 0d0363  and esi, esi
    X86_AT(c, 0xd0363u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d0365  je 0xd042a
    X86_AT(c, 0xd0365u);
    if (x86_cc(c, 4)) { goto L_d042a; }
    X86_TICK(c, 25);
    // 0d036b  lea eax, [edi + edi*2]
    X86_AT(c, 0xd036bu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0d036e  lea edx, [eax*8]
    X86_AT(c, 0xd036eu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0d0375  lea edx, [eax + edx*8]
    X86_AT(c, 0xd0375u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0d0378  lea eax, [esi + esi*4]
    X86_AT(c, 0xd0378u);
    c.r[0] = (uint32_t)(c.r[6] + c.r[6] * 4);
    // 0d037b  lea eax, [eax + eax*4]
    X86_AT(c, 0xd037bu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0d037e  lea eax, [eax*4]
    X86_AT(c, 0xd037eu);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 0d0385  add eax, dword ptr [edx + 0xa4ae5]
    X86_AT(c, 0xd0385u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AE5u))), 0, 4); }
    // 0d038b  cmp eax, 0xf41dc
    X86_AT(c, 0xd038bu);
    (void)x86_sub(c, c.r[0], 0xF41DCu, 0, 4);
    // 0d0390  jle 0xd03bd
    X86_AT(c, 0xd0390u);
    if (x86_cc(c, 14)) { goto L_d03bd; }
    X86_TICK(c, 9);
    // 0d0392  push 0
    X86_AT(c, 0xd0392u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d0394  call 0xb607c
    X86_AT(c, 0xd0394u);
    push32(c, 0xd0399u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd0399u);
    X86_TICK(c, 11);
    // 0d0399  push 0xa468
    X86_AT(c, 0xd0399u);
    { uint32_t v = 0xA468u; push32(c, v); }
    // 0d039e  push 7
    X86_AT(c, 0xd039eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d03a0  call 0xba428
    X86_AT(c, 0xd03a0u);
    push32(c, 0xd03a5u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd03a5u);
    X86_TICK(c, 9);
    // 0d03a5  push 7
    X86_AT(c, 0xd03a5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d03a7  call 0xbbb5c
    X86_AT(c, 0xd03a7u);
    push32(c, 0xd03acu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd03acu);
    X86_TICK(c, 11);
    // 0d03ac  push 0xa494
    X86_AT(c, 0xd03acu);
    { uint32_t v = 0xA494u; push32(c, v); }
    // 0d03b1  push 7
    X86_AT(c, 0xd03b1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d03b3  call 0xba428
    X86_AT(c, 0xd03b3u);
    push32(c, 0xd03b8u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd03b8u);
    X86_TICK(c, 9);
    // 0d03b8  add esp, 0x18
    X86_AT(c, 0xd03b8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0d03bb  jmp 0xd0348
    X86_AT(c, 0xd03bbu);
    X86_POLL(c, 0xd0348u); goto L_d0348;
L_d03bd:
    X86_TICK(c, 11);
    // 0d03bd  push esi
    X86_AT(c, 0xd03bdu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d03be  push edi
    X86_AT(c, 0xd03beu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d03bf  call 0xcfe88
    X86_AT(c, 0xd03bfu);
    push32(c, 0xd03c4u); x86_call_known(c, 0xcfe88u, f_000cfe88); X86_RET(c, 0xd03c4u);
    X86_TICK(c, 9);
    // 0d03c4  add esp, 8
    X86_AT(c, 0xd03c4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d03c7  inc eax
    X86_AT(c, 0xd03c7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d03c8  jne 0xd03e9
    X86_AT(c, 0xd03c8u);
    if (x86_cc(c, 5)) { goto L_d03e9; }
    X86_TICK(c, 9);
    // 0d03ca  push 3
    X86_AT(c, 0xd03cau);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d03cc  call 0xb607c
    X86_AT(c, 0xd03ccu);
    push32(c, 0xd03d1u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd03d1u);
    X86_TICK(c, 11);
    // 0d03d1  push 0xa4c0
    X86_AT(c, 0xd03d1u);
    { uint32_t v = 0xA4C0u; push32(c, v); }
    // 0d03d6  push 7
    X86_AT(c, 0xd03d6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d03d8  call 0xba428
    X86_AT(c, 0xd03d8u);
    push32(c, 0xd03ddu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd03ddu);
    X86_TICK(c, 9);
    // 0d03dd  push 7
    X86_AT(c, 0xd03ddu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d03df  call 0xbbb5c
    X86_AT(c, 0xd03dfu);
    push32(c, 0xd03e4u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd03e4u);
    X86_TICK(c, 9);
    // 0d03e4  add esp, 0x10
    X86_AT(c, 0xd03e4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d03e7  jmp 0xd042a
    X86_AT(c, 0xd03e7u);
    goto L_d042a;
L_d03e9:
    X86_TICK(c, 28);
    // 0d03e9  lea eax, [edi + edi*2]
    X86_AT(c, 0xd03e9u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0d03ec  lea edx, [eax*8]
    X86_AT(c, 0xd03ecu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0d03f3  lea edx, [eax + edx*8]
    X86_AT(c, 0xd03f3u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0d03f6  lea eax, [esi + esi*4]
    X86_AT(c, 0xd03f6u);
    c.r[0] = (uint32_t)(c.r[6] + c.r[6] * 4);
    // 0d03f9  lea eax, [eax + eax*4]
    X86_AT(c, 0xd03f9u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0d03fc  lea eax, [eax*4]
    X86_AT(c, 0xd03fcu);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 0d0403  add dword ptr [edx + 0xa4ae5], eax
    X86_AT(c, 0xd0403u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AE5u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0d0409  push edi
    X86_AT(c, 0xd0409u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d040a  call 0xbe720
    X86_AT(c, 0xd040au);
    push32(c, 0xd040fu); x86_call_known(c, 0xbe720u, f_000be720); X86_RET(c, 0xd040fu);
    X86_TICK(c, 9);
    // 0d040f  push 7
    X86_AT(c, 0xd040fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0411  call 0xbb6b0
    X86_AT(c, 0xd0411u);
    push32(c, 0xd0416u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd0416u);
    X86_TICK(c, 11);
    // 0d0416  push 0xa4fc
    X86_AT(c, 0xd0416u);
    { uint32_t v = 0xA4FCu; push32(c, v); }
    // 0d041b  push 7
    X86_AT(c, 0xd041bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d041d  call 0xba428
    X86_AT(c, 0xd041du);
    push32(c, 0xd0422u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0422u);
    X86_TICK(c, 9);
    // 0d0422  add esp, 0x10
    X86_AT(c, 0xd0422u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d0425  jmp 0xd0348
    X86_AT(c, 0xd0425u);
    X86_POLL(c, 0xd0348u); goto L_d0348;
L_d042a:
    X86_TICK(c, 11);
    // 0d042a  push 0xa53c
    X86_AT(c, 0xd042au);
    { uint32_t v = 0xA53Cu; push32(c, v); }
    // 0d042f  push 7
    X86_AT(c, 0xd042fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0431  call 0xba428
    X86_AT(c, 0xd0431u);
    push32(c, 0xd0436u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0436u);
    X86_TICK(c, 9);
    // 0d0436  push 7
    X86_AT(c, 0xd0436u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0438  call 0xbbb5c
    X86_AT(c, 0xd0438u);
    push32(c, 0xd043du); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd043du);
    X86_TICK(c, 26);
    // 0d043d  add esp, 0xc
    X86_AT(c, 0xd043du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d0440  pop edi
    X86_AT(c, 0xd0440u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d0441  pop esi
    X86_AT(c, 0xd0441u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d0442  leave 
    X86_AT(c, 0xd0442u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d0443  ret 
    X86_AT(c, 0xd0443u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd0304u, "ran off the end of a function");
}
void f_000d0444(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0d0444  push ebp
    X86_AT(c, 0xd0444u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d0445  mov ebp, esp
    X86_AT(c, 0xd0445u);
    c.r[5] = c.r[4];
    // 0d0447  push eax
    X86_AT(c, 0xd0447u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d0448  push ebx
    X86_AT(c, 0xd0448u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d0449  push edi
    X86_AT(c, 0xd0449u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d044a  push 7
    X86_AT(c, 0xd044au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d044c  call 0xbb6b0
    X86_AT(c, 0xd044cu);
    push32(c, 0xd0451u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xd0451u);
    X86_TICK(c, 11);
    // 0d0451  push 0xa57c
    X86_AT(c, 0xd0451u);
    { uint32_t v = 0xA57Cu; push32(c, v); }
    // 0d0456  push 7
    X86_AT(c, 0xd0456u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0458  call 0xba428
    X86_AT(c, 0xd0458u);
    push32(c, 0xd045du); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd045du);
    X86_TICK(c, 9);
    // 0d045d  push 7
    X86_AT(c, 0xd045du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d045f  call 0xbbb5c
    X86_AT(c, 0xd045fu);
    push32(c, 0xd0464u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0464u);
    X86_TICK(c, 11);
    // 0d0464  push 0xa5f8
    X86_AT(c, 0xd0464u);
    { uint32_t v = 0xA5F8u; push32(c, v); }
    // 0d0469  push 7
    X86_AT(c, 0xd0469u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d046b  call 0xba428
    X86_AT(c, 0xd046bu);
    push32(c, 0xd0470u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0470u);
    X86_TICK(c, 9);
    // 0d0470  push 7
    X86_AT(c, 0xd0470u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0472  call 0xbbb5c
    X86_AT(c, 0xd0472u);
    push32(c, 0xd0477u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0477u);
    X86_TICK(c, 9);
    // 0d0477  push 7
    X86_AT(c, 0xd0477u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0479  call 0xc9890
    X86_AT(c, 0xd0479u);
    push32(c, 0xd047eu); x86_call_known(c, 0xc9890u, f_000c9890); X86_RET(c, 0xd047eu);
    X86_TICK(c, 2);
    // 0d047e  add esp, 0x20
    X86_AT(c, 0xd047eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
L_d0481:
    X86_TICK(c, 11);
    // 0d0481  push 0xa630
    X86_AT(c, 0xd0481u);
    { uint32_t v = 0xA630u; push32(c, v); }
    // 0d0486  push 7
    X86_AT(c, 0xd0486u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0488  call 0xba428
    X86_AT(c, 0xd0488u);
    push32(c, 0xd048du); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd048du);
    X86_TICK(c, 9);
    // 0d048d  push 7
    X86_AT(c, 0xd048du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d048f  call 0xbbb5c
    X86_AT(c, 0xd048fu);
    push32(c, 0xd0494u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0494u);
    X86_TICK(c, 11);
    // 0d0494  push 0xa654
    X86_AT(c, 0xd0494u);
    { uint32_t v = 0xA654u; push32(c, v); }
    // 0d0499  push 7
    X86_AT(c, 0xd0499u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d049b  call 0xba428
    X86_AT(c, 0xd049bu);
    push32(c, 0xd04a0u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd04a0u);
    X86_TICK(c, 9);
    // 0d04a0  push 7
    X86_AT(c, 0xd04a0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d04a2  call 0xbbb5c
    X86_AT(c, 0xd04a2u);
    push32(c, 0xd04a7u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd04a7u);
    X86_TICK(c, 11);
    // 0d04a7  push 0xa67c
    X86_AT(c, 0xd04a7u);
    { uint32_t v = 0xA67Cu; push32(c, v); }
    // 0d04ac  push 7
    X86_AT(c, 0xd04acu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d04ae  call 0xba428
    X86_AT(c, 0xd04aeu);
    push32(c, 0xd04b3u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd04b3u);
    X86_TICK(c, 9);
    // 0d04b3  push 7
    X86_AT(c, 0xd04b3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d04b5  call 0xbbb5c
    X86_AT(c, 0xd04b5u);
    push32(c, 0xd04bau); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd04bau);
    X86_TICK(c, 11);
    // 0d04ba  push 0xa6b0
    X86_AT(c, 0xd04bau);
    { uint32_t v = 0xA6B0u; push32(c, v); }
    // 0d04bf  push 7
    X86_AT(c, 0xd04bfu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d04c1  call 0xba428
    X86_AT(c, 0xd04c1u);
    push32(c, 0xd04c6u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd04c6u);
    X86_TICK(c, 9);
    // 0d04c6  push 7
    X86_AT(c, 0xd04c6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d04c8  call 0xbbb5c
    X86_AT(c, 0xd04c8u);
    push32(c, 0xd04cdu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd04cdu);
    X86_TICK(c, 11);
    // 0d04cd  push 0xa6e0
    X86_AT(c, 0xd04cdu);
    { uint32_t v = 0xA6E0u; push32(c, v); }
    // 0d04d2  push 7
    X86_AT(c, 0xd04d2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d04d4  call 0xba428
    X86_AT(c, 0xd04d4u);
    push32(c, 0xd04d9u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd04d9u);
    X86_TICK(c, 9);
    // 0d04d9  push 7
    X86_AT(c, 0xd04d9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d04db  call 0xbbb5c
    X86_AT(c, 0xd04dbu);
    push32(c, 0xd04e0u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd04e0u);
    X86_TICK(c, 13);
    // 0d04e0  add esp, 0x3c
    X86_AT(c, 0xd04e0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d04e3  push 0xa6fc
    X86_AT(c, 0xd04e3u);
    { uint32_t v = 0xA6FCu; push32(c, v); }
    // 0d04e8  push 7
    X86_AT(c, 0xd04e8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d04ea  call 0xba428
    X86_AT(c, 0xd04eau);
    push32(c, 0xd04efu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd04efu);
    X86_TICK(c, 2);
    // 0d04ef  add esp, 8
    X86_AT(c, 0xd04efu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d04f2:
    X86_TICK(c, 9);
    // 0d04f2  push 7
    X86_AT(c, 0xd04f2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d04f4  call 0xb9514
    X86_AT(c, 0xd04f4u);
    push32(c, 0xd04f9u); x86_call_known(c, 0xb9514u, f_000b9514); X86_RET(c, 0xd04f9u);
    X86_TICK(c, 12);
    // 0d04f9  xchg ebx, eax
    X86_AT(c, 0xd04f9u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d04fa  add esp, 4
    X86_AT(c, 0xd04fau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d04fd  cmp bl, 1
    X86_AT(c, 0xd04fdu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d0500  je 0xd052b
    X86_AT(c, 0xd0500u);
    if (x86_cc(c, 4)) { goto L_d052b; }
    X86_TICK(c, 7);
    // 0d0502  cmp bl, 0x51
    X86_AT(c, 0xd0502u);
    (void)x86_sub(c, g8(c, 3), 0x51u, 0, 1);
    // 0d0505  je 0xd052b
    X86_AT(c, 0xd0505u);
    if (x86_cc(c, 4)) { goto L_d052b; }
    X86_TICK(c, 7);
    // 0d0507  cmp bl, 0x41
    X86_AT(c, 0xd0507u);
    (void)x86_sub(c, g8(c, 3), 0x41u, 0, 1);
    // 0d050a  je 0xd052b
    X86_AT(c, 0xd050au);
    if (x86_cc(c, 4)) { goto L_d052b; }
    X86_TICK(c, 7);
    // 0d050c  cmp bl, 0x42
    X86_AT(c, 0xd050cu);
    (void)x86_sub(c, g8(c, 3), 0x42u, 0, 1);
    // 0d050f  je 0xd052b
    X86_AT(c, 0xd050fu);
    if (x86_cc(c, 4)) { goto L_d052b; }
    X86_TICK(c, 7);
    // 0d0511  cmp bl, 0x43
    X86_AT(c, 0xd0511u);
    (void)x86_sub(c, g8(c, 3), 0x43u, 0, 1);
    // 0d0514  je 0xd052b
    X86_AT(c, 0xd0514u);
    if (x86_cc(c, 4)) { goto L_d052b; }
    X86_TICK(c, 7);
    // 0d0516  cmp bl, 0x44
    X86_AT(c, 0xd0516u);
    (void)x86_sub(c, g8(c, 3), 0x44u, 0, 1);
    // 0d0519  je 0xd052b
    X86_AT(c, 0xd0519u);
    if (x86_cc(c, 4)) { goto L_d052b; }
    X86_TICK(c, 7);
    // 0d051b  and bl, bl
    X86_AT(c, 0xd051bu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0d051d  je 0xd04f2
    X86_AT(c, 0xd051du);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd04f2u); goto L_d04f2; }
    X86_TICK(c, 9);
    // 0d051f  push 1
    X86_AT(c, 0xd051fu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d0521  call 0xb607c
    X86_AT(c, 0xd0521u);
    push32(c, 0xd0526u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd0526u);
    X86_TICK(c, 9);
    // 0d0526  add esp, 4
    X86_AT(c, 0xd0526u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d0529  jmp 0xd04f2
    X86_AT(c, 0xd0529u);
    X86_POLL(c, 0xd04f2u); goto L_d04f2;
L_d052b:
    X86_TICK(c, 7);
    // 0d052b  cmp bl, 1
    X86_AT(c, 0xd052bu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d052e  je 0xd0535
    X86_AT(c, 0xd052eu);
    if (x86_cc(c, 4)) { goto L_d0535; }
    X86_TICK(c, 7);
    // 0d0530  cmp bl, 0x51
    X86_AT(c, 0xd0530u);
    (void)x86_sub(c, g8(c, 3), 0x51u, 0, 1);
    // 0d0533  jne 0xd0550
    X86_AT(c, 0xd0533u);
    if (x86_cc(c, 5)) { goto L_d0550; }
L_d0535:
    X86_TICK(c, 11);
    // 0d0535  push 0xa720
    X86_AT(c, 0xd0535u);
    { uint32_t v = 0xA720u; push32(c, v); }
    // 0d053a  push 7
    X86_AT(c, 0xd053au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d053c  call 0xba428
    X86_AT(c, 0xd053cu);
    push32(c, 0xd0541u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0541u);
    X86_TICK(c, 9);
    // 0d0541  push 7
    X86_AT(c, 0xd0541u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0543  call 0xbbb5c
    X86_AT(c, 0xd0543u);
    push32(c, 0xd0548u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0548u);
    X86_TICK(c, 9);
    // 0d0548  add esp, 0xc
    X86_AT(c, 0xd0548u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d054b  jmp 0xd09b5
    X86_AT(c, 0xd054bu);
    goto L_d09b5;
L_d0550:
    X86_TICK(c, 12);
    // 0d0550  movzx edx, bl
    X86_AT(c, 0xd0550u);
    c.r[2] = g8(c, 3);
    // 0d0553  sub edx, 0x41
    X86_AT(c, 0xd0553u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x41u, 0, 4); }
    // 0d0556  cmp edx, 3
    X86_AT(c, 0xd0556u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0d0559  ja 0xd098e
    X86_AT(c, 0xd0559u);
    if (x86_cc(c, 7)) { goto L_d098e; }
    X86_TICK(c, 7);
    // 0d055f  jmp dword ptr cs:[edx*4 + 0xd0567]
    X86_AT(c, 0xd055fu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xD0567u)));
      switch (t) {
      case 0xd0577u: goto L_d0577;
      case 0xd066au: goto L_d066a;
      case 0xd0776u: goto L_d0776;
      case 0xd083eu: goto L_d083e;
      default: x86_jump(c, t); return; } }
L_d0577:
    X86_TICK(c, 11);
    // 0d0577  push 0xa73c
    X86_AT(c, 0xd0577u);
    { uint32_t v = 0xA73Cu; push32(c, v); }
    // 0d057c  push 7
    X86_AT(c, 0xd057cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d057e  call 0xba428
    X86_AT(c, 0xd057eu);
    push32(c, 0xd0583u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0583u);
    X86_TICK(c, 9);
    // 0d0583  push 7
    X86_AT(c, 0xd0583u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0585  call 0xbbb5c
    X86_AT(c, 0xd0585u);
    push32(c, 0xd058au); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd058au);
    X86_TICK(c, 11);
    // 0d058a  push 0xa754
    X86_AT(c, 0xd058au);
    { uint32_t v = 0xA754u; push32(c, v); }
    // 0d058f  push 7
    X86_AT(c, 0xd058fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0591  call 0xba428
    X86_AT(c, 0xd0591u);
    push32(c, 0xd0596u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0596u);
    X86_TICK(c, 11);
    // 0d0596  push 0
    X86_AT(c, 0xd0596u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d0598  push 7
    X86_AT(c, 0xd0598u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d059a  call 0xb6f28
    X86_AT(c, 0xd059au);
    push32(c, 0xd059fu); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xd059fu);
    X86_TICK(c, 12);
    // 0d059f  xchg edi, eax
    X86_AT(c, 0xd059fu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d05a0  push 7
    X86_AT(c, 0xd05a0u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d05a2  call 0xbbb5c
    X86_AT(c, 0xd05a2u);
    push32(c, 0xd05a7u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd05a7u);
    X86_TICK(c, 9);
    // 0d05a7  add esp, 0x20
    X86_AT(c, 0xd05a7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0d05aa  cmp edi, 0xffffffff
    X86_AT(c, 0xd05aau);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0d05ad  jne 0xd05b9
    X86_AT(c, 0xd05adu);
    if (x86_cc(c, 5)) { goto L_d05b9; }
    X86_TICK(c, 9);
    // 0d05af  push 0xa7cc
    X86_AT(c, 0xd05afu);
    { uint32_t v = 0xA7CCu; push32(c, v); }
    // 0d05b4  jmp 0xd08d8
    X86_AT(c, 0xd05b4u);
    goto L_d08d8;
L_d05b9:
    X86_TICK(c, 11);
    // 0d05b9  push 0x64
    X86_AT(c, 0xd05b9u);
    { uint32_t v = 0x64u; push32(c, v); }
    // 0d05bb  push edi
    X86_AT(c, 0xd05bbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d05bc  call 0xcfe88
    X86_AT(c, 0xd05bcu);
    push32(c, 0xd05c1u); x86_call_known(c, 0xcfe88u, f_000cfe88); X86_RET(c, 0xd05c1u);
    X86_TICK(c, 9);
    // 0d05c1  add esp, 8
    X86_AT(c, 0xd05c1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d05c4  inc eax
    X86_AT(c, 0xd05c4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d05c5  jne 0xd05d1
    X86_AT(c, 0xd05c5u);
    if (x86_cc(c, 5)) { goto L_d05d1; }
    X86_TICK(c, 9);
    // 0d05c7  push 0xa858
    X86_AT(c, 0xd05c7u);
    { uint32_t v = 0xA858u; push32(c, v); }
    // 0d05cc  jmp 0xd08d8
    X86_AT(c, 0xd05ccu);
    goto L_d08d8;
L_d05d1:
    X86_TICK(c, 11);
    // 0d05d1  push 0xa8e4
    X86_AT(c, 0xd05d1u);
    { uint32_t v = 0xA8E4u; push32(c, v); }
    // 0d05d6  push 7
    X86_AT(c, 0xd05d6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d05d8  call 0xba428
    X86_AT(c, 0xd05d8u);
    push32(c, 0xd05ddu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd05ddu);
    X86_TICK(c, 11);
    // 0d05dd  push 0
    X86_AT(c, 0xd05ddu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d05df  push 7
    X86_AT(c, 0xd05dfu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d05e1  call 0xb6f28
    X86_AT(c, 0xd05e1u);
    push32(c, 0xd05e6u); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xd05e6u);
    X86_TICK(c, 12);
    // 0d05e6  xchg edi, eax
    X86_AT(c, 0xd05e6u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d05e7  add esp, 0x10
    X86_AT(c, 0xd05e7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d05ea  cmp edi, 0xffffffff
    X86_AT(c, 0xd05eau);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0d05ed  jne 0xd05fe
    X86_AT(c, 0xd05edu);
    if (x86_cc(c, 5)) { goto L_d05fe; }
    X86_TICK(c, 7);
    // 0d05ef  call 0xce2c8
    X86_AT(c, 0xd05efu);
    push32(c, 0xd05f4u); x86_call_known(c, 0xce2c8u, f_000ce2c8); X86_RET(c, 0xd05f4u);
    X86_TICK(c, 9);
    // 0d05f4  push 0xa914
    X86_AT(c, 0xd05f4u);
    { uint32_t v = 0xA914u; push32(c, v); }
    // 0d05f9  jmp 0xd08d8
    X86_AT(c, 0xd05f9u);
    goto L_d08d8;
L_d05fe:
    X86_TICK(c, 18);
    // 0d05fe  lea eax, [edi + edi*2]
    X86_AT(c, 0xd05feu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0d0601  lea edx, [eax*8]
    X86_AT(c, 0xd0601u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0d0608  lea edx, [eax + edx*8]
    X86_AT(c, 0xd0608u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0d060b  cmp byte ptr [edx + 0xa4abd], 0x50
    X86_AT(c, 0xd060bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu))), 0x50u, 0, 1);
    // 0d0612  je 0xd0638
    X86_AT(c, 0xd0612u);
    if (x86_cc(c, 4)) { goto L_d0638; }
    X86_TICK(c, 9);
    // 0d0614  push 3
    X86_AT(c, 0xd0614u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d0616  call 0xb607c
    X86_AT(c, 0xd0616u);
    push32(c, 0xd061bu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd061bu);
    X86_TICK(c, 11);
    // 0d061b  push 0xa954
    X86_AT(c, 0xd061bu);
    { uint32_t v = 0xA954u; push32(c, v); }
    // 0d0620  push 7
    X86_AT(c, 0xd0620u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0622  call 0xba428
    X86_AT(c, 0xd0622u);
    push32(c, 0xd0627u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0627u);
    X86_TICK(c, 9);
    // 0d0627  push 7
    X86_AT(c, 0xd0627u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0629  call 0xbbb5c
    X86_AT(c, 0xd0629u);
    push32(c, 0xd062eu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd062eu);
    X86_TICK(c, 9);
    // 0d062e  push 0xa98c
    X86_AT(c, 0xd062eu);
    { uint32_t v = 0xA98Cu; push32(c, v); }
    // 0d0633  jmp 0xd0923
    X86_AT(c, 0xd0633u);
    goto L_d0923;
L_d0638:
    X86_TICK(c, 9);
    // 0d0638  push 2
    X86_AT(c, 0xd0638u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d063a  call 0xb607c
    X86_AT(c, 0xd063au);
    push32(c, 0xd063fu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd063fu);
    X86_TICK(c, 7);
    // 0d063f  call 0xcaa9c
    X86_AT(c, 0xd063fu);
    push32(c, 0xd0644u); x86_call_known(c, 0xcaa9cu, f_000caa9c); X86_RET(c, 0xd0644u);
    X86_TICK(c, 9);
    // 0d0644  push edi
    X86_AT(c, 0xd0644u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d0645  call 0xc7f0c
    X86_AT(c, 0xd0645u);
    push32(c, 0xd064au); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xd064au);
    X86_TICK(c, 9);
    // 0d064a  push 2
    X86_AT(c, 0xd064au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d064c  call 0xbebbc
    X86_AT(c, 0xd064cu);
    push32(c, 0xd0651u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xd0651u);
    X86_TICK(c, 15);
    // 0d0651  lea eax, [edi + edi*2]
    X86_AT(c, 0xd0651u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0d0654  lea edx, [eax*8]
    X86_AT(c, 0xd0654u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0d065b  lea edx, [eax + edx*8]
    X86_AT(c, 0xd065bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0d065e  mov byte ptr [edx + 0xa4abd], 0x47
    X86_AT(c, 0xd065eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu)), 0x47u);
    // 0d0665  jmp 0xd0765
    X86_AT(c, 0xd0665u);
    goto L_d0765;
L_d066a:
    X86_TICK(c, 11);
    // 0d066a  push 0xa9cc
    X86_AT(c, 0xd066au);
    { uint32_t v = 0xA9CCu; push32(c, v); }
    // 0d066f  push 7
    X86_AT(c, 0xd066fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0671  call 0xba428
    X86_AT(c, 0xd0671u);
    push32(c, 0xd0676u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0676u);
    X86_TICK(c, 9);
    // 0d0676  push 7
    X86_AT(c, 0xd0676u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0678  call 0xbbb5c
    X86_AT(c, 0xd0678u);
    push32(c, 0xd067du); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd067du);
    X86_TICK(c, 11);
    // 0d067d  push 0xa9e4
    X86_AT(c, 0xd067du);
    { uint32_t v = 0xA9E4u; push32(c, v); }
    // 0d0682  push 7
    X86_AT(c, 0xd0682u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0684  call 0xba428
    X86_AT(c, 0xd0684u);
    push32(c, 0xd0689u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0689u);
    X86_TICK(c, 11);
    // 0d0689  push 0
    X86_AT(c, 0xd0689u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d068b  push 7
    X86_AT(c, 0xd068bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d068d  call 0xb6f28
    X86_AT(c, 0xd068du);
    push32(c, 0xd0692u); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xd0692u);
    X86_TICK(c, 12);
    // 0d0692  xchg edi, eax
    X86_AT(c, 0xd0692u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d0693  push 7
    X86_AT(c, 0xd0693u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0695  call 0xbbb5c
    X86_AT(c, 0xd0695u);
    push32(c, 0xd069au); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd069au);
    X86_TICK(c, 9);
    // 0d069a  add esp, 0x20
    X86_AT(c, 0xd069au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0d069d  cmp edi, 0xffffffff
    X86_AT(c, 0xd069du);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0d06a0  jne 0xd06ac
    X86_AT(c, 0xd06a0u);
    if (x86_cc(c, 5)) { goto L_d06ac; }
    X86_TICK(c, 9);
    // 0d06a2  push 0xaa54
    X86_AT(c, 0xd06a2u);
    { uint32_t v = 0xAA54u; push32(c, v); }
    // 0d06a7  jmp 0xd08d8
    X86_AT(c, 0xd06a7u);
    goto L_d08d8;
L_d06ac:
    X86_TICK(c, 11);
    // 0d06ac  push 0xc8
    X86_AT(c, 0xd06acu);
    { uint32_t v = 0xC8u; push32(c, v); }
    // 0d06b1  push edi
    X86_AT(c, 0xd06b1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d06b2  call 0xcfe88
    X86_AT(c, 0xd06b2u);
    push32(c, 0xd06b7u); x86_call_known(c, 0xcfe88u, f_000cfe88); X86_RET(c, 0xd06b7u);
    X86_TICK(c, 9);
    // 0d06b7  add esp, 8
    X86_AT(c, 0xd06b7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d06ba  inc eax
    X86_AT(c, 0xd06bau);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d06bb  jne 0xd06c7
    X86_AT(c, 0xd06bbu);
    if (x86_cc(c, 5)) { goto L_d06c7; }
    X86_TICK(c, 9);
    // 0d06bd  push 0xaae0
    X86_AT(c, 0xd06bdu);
    { uint32_t v = 0xAAE0u; push32(c, v); }
    // 0d06c2  jmp 0xd08d8
    X86_AT(c, 0xd06c2u);
    goto L_d08d8;
L_d06c7:
    X86_TICK(c, 11);
    // 0d06c7  push 0xab6c
    X86_AT(c, 0xd06c7u);
    { uint32_t v = 0xAB6Cu; push32(c, v); }
    // 0d06cc  push 7
    X86_AT(c, 0xd06ccu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d06ce  call 0xba428
    X86_AT(c, 0xd06ceu);
    push32(c, 0xd06d3u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd06d3u);
    X86_TICK(c, 11);
    // 0d06d3  push 0
    X86_AT(c, 0xd06d3u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d06d5  push 7
    X86_AT(c, 0xd06d5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d06d7  call 0xb6f28
    X86_AT(c, 0xd06d7u);
    push32(c, 0xd06dcu); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xd06dcu);
    X86_TICK(c, 12);
    // 0d06dc  xchg edi, eax
    X86_AT(c, 0xd06dcu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d06dd  add esp, 0x10
    X86_AT(c, 0xd06ddu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d06e0  cmp edi, 0xffffffff
    X86_AT(c, 0xd06e0u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0d06e3  jne 0xd06f4
    X86_AT(c, 0xd06e3u);
    if (x86_cc(c, 5)) { goto L_d06f4; }
    X86_TICK(c, 7);
    // 0d06e5  call 0xce2c8
    X86_AT(c, 0xd06e5u);
    push32(c, 0xd06eau); x86_call_known(c, 0xce2c8u, f_000ce2c8); X86_RET(c, 0xd06eau);
    X86_TICK(c, 9);
    // 0d06ea  push 0xab9c
    X86_AT(c, 0xd06eau);
    { uint32_t v = 0xAB9Cu; push32(c, v); }
    // 0d06ef  jmp 0xd08d8
    X86_AT(c, 0xd06efu);
    goto L_d08d8;
L_d06f4:
    X86_TICK(c, 21);
    // 0d06f4  lea eax, [edi + edi*2]
    X86_AT(c, 0xd06f4u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0d06f7  lea edx, [eax*8]
    X86_AT(c, 0xd06f7u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0d06fe  lea edx, [eax + edx*8]
    X86_AT(c, 0xd06feu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0d0701  mov eax, dword ptr [edx + 0xa4ad9]
    X86_AT(c, 0xd0701u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD9u)));
    // 0d0707  cmp eax, dword ptr [edx + 0xa4ad5]
    X86_AT(c, 0xd0707u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD5u))), 0, 4);
    // 0d070d  jne 0xd0733
    X86_AT(c, 0xd070du);
    if (x86_cc(c, 5)) { goto L_d0733; }
    X86_TICK(c, 9);
    // 0d070f  push 3
    X86_AT(c, 0xd070fu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d0711  call 0xb607c
    X86_AT(c, 0xd0711u);
    push32(c, 0xd0716u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd0716u);
    X86_TICK(c, 11);
    // 0d0716  push 0xabdc
    X86_AT(c, 0xd0716u);
    { uint32_t v = 0xABDCu; push32(c, v); }
    // 0d071b  push 7
    X86_AT(c, 0xd071bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d071d  call 0xba428
    X86_AT(c, 0xd071du);
    push32(c, 0xd0722u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0722u);
    X86_TICK(c, 9);
    // 0d0722  push 7
    X86_AT(c, 0xd0722u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0724  call 0xbbb5c
    X86_AT(c, 0xd0724u);
    push32(c, 0xd0729u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0729u);
    X86_TICK(c, 9);
    // 0d0729  push 0xac10
    X86_AT(c, 0xd0729u);
    { uint32_t v = 0xAC10u; push32(c, v); }
    // 0d072e  jmp 0xd0923
    X86_AT(c, 0xd072eu);
    goto L_d0923;
L_d0733:
    X86_TICK(c, 9);
    // 0d0733  push 2
    X86_AT(c, 0xd0733u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d0735  call 0xb607c
    X86_AT(c, 0xd0735u);
    push32(c, 0xd073au); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd073au);
    X86_TICK(c, 7);
    // 0d073a  call 0xcaa9c
    X86_AT(c, 0xd073au);
    push32(c, 0xd073fu); x86_call_known(c, 0xcaa9cu, f_000caa9c); X86_RET(c, 0xd073fu);
    X86_TICK(c, 9);
    // 0d073f  push edi
    X86_AT(c, 0xd073fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d0740  call 0xc7f0c
    X86_AT(c, 0xd0740u);
    push32(c, 0xd0745u); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xd0745u);
    X86_TICK(c, 9);
    // 0d0745  push 2
    X86_AT(c, 0xd0745u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d0747  call 0xbebbc
    X86_AT(c, 0xd0747u);
    push32(c, 0xd074cu); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xd074cu);
    X86_TICK(c, 12);
    // 0d074c  lea eax, [edi + edi*2]
    X86_AT(c, 0xd074cu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0d074f  lea edx, [eax*8]
    X86_AT(c, 0xd074fu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0d0756  lea edx, [eax + edx*8]
    X86_AT(c, 0xd0756u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0d0759  mov eax, dword ptr [edx + 0xa4ad9]
    X86_AT(c, 0xd0759u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD9u)));
    // 0d075f  mov dword ptr [edx + 0xa4ad5], eax
    X86_AT(c, 0xd075fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD5u)), c.r[0]);
L_d0765:
    X86_TICK(c, 9);
    // 0d0765  push edi
    X86_AT(c, 0xd0765u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d0766  call 0xc7f0c
    X86_AT(c, 0xd0766u);
    push32(c, 0xd076bu); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xd076bu);
    X86_TICK(c, 9);
    // 0d076b  push edi
    X86_AT(c, 0xd076bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d076c  call 0xbe720
    X86_AT(c, 0xd076cu);
    push32(c, 0xd0771u); x86_call_known(c, 0xbe720u, f_000be720); X86_RET(c, 0xd0771u);
    X86_TICK(c, 7);
    // 0d0771  jmp 0xd098b
    X86_AT(c, 0xd0771u);
    goto L_d098b;
L_d0776:
    X86_TICK(c, 11);
    // 0d0776  push 0xac50
    X86_AT(c, 0xd0776u);
    { uint32_t v = 0xAC50u; push32(c, v); }
    // 0d077b  push 7
    X86_AT(c, 0xd077bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d077d  call 0xba428
    X86_AT(c, 0xd077du);
    push32(c, 0xd0782u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0782u);
    X86_TICK(c, 9);
    // 0d0782  push 7
    X86_AT(c, 0xd0782u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0784  call 0xbbb5c
    X86_AT(c, 0xd0784u);
    push32(c, 0xd0789u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0789u);
    X86_TICK(c, 11);
    // 0d0789  push 0xac74
    X86_AT(c, 0xd0789u);
    { uint32_t v = 0xAC74u; push32(c, v); }
    // 0d078e  push 7
    X86_AT(c, 0xd078eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0790  call 0xba428
    X86_AT(c, 0xd0790u);
    push32(c, 0xd0795u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0795u);
    X86_TICK(c, 11);
    // 0d0795  push 0
    X86_AT(c, 0xd0795u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d0797  push 7
    X86_AT(c, 0xd0797u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0799  call 0xb6f28
    X86_AT(c, 0xd0799u);
    push32(c, 0xd079eu); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xd079eu);
    X86_TICK(c, 12);
    // 0d079e  xchg edi, eax
    X86_AT(c, 0xd079eu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d079f  push 7
    X86_AT(c, 0xd079fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d07a1  call 0xbbb5c
    X86_AT(c, 0xd07a1u);
    push32(c, 0xd07a6u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd07a6u);
    X86_TICK(c, 9);
    // 0d07a6  add esp, 0x20
    X86_AT(c, 0xd07a6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0d07a9  cmp edi, 0xffffffff
    X86_AT(c, 0xd07a9u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0d07ac  jne 0xd07b8
    X86_AT(c, 0xd07acu);
    if (x86_cc(c, 5)) { goto L_d07b8; }
    X86_TICK(c, 9);
    // 0d07ae  push 0xacf0
    X86_AT(c, 0xd07aeu);
    { uint32_t v = 0xACF0u; push32(c, v); }
    // 0d07b3  jmp 0xd08d8
    X86_AT(c, 0xd07b3u);
    goto L_d08d8;
L_d07b8:
    X86_TICK(c, 11);
    // 0d07b8  push 0x1f4
    X86_AT(c, 0xd07b8u);
    { uint32_t v = 0x1F4u; push32(c, v); }
    // 0d07bd  push edi
    X86_AT(c, 0xd07bdu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d07be  call 0xcfe88
    X86_AT(c, 0xd07beu);
    push32(c, 0xd07c3u); x86_call_known(c, 0xcfe88u, f_000cfe88); X86_RET(c, 0xd07c3u);
    X86_TICK(c, 9);
    // 0d07c3  add esp, 8
    X86_AT(c, 0xd07c3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d07c6  inc eax
    X86_AT(c, 0xd07c6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d07c7  jne 0xd07d3
    X86_AT(c, 0xd07c7u);
    if (x86_cc(c, 5)) { goto L_d07d3; }
    X86_TICK(c, 9);
    // 0d07c9  push 0xad7c
    X86_AT(c, 0xd07c9u);
    { uint32_t v = 0xAD7Cu; push32(c, v); }
    // 0d07ce  jmp 0xd08d8
    X86_AT(c, 0xd07ceu);
    goto L_d08d8;
L_d07d3:
    X86_TICK(c, 11);
    // 0d07d3  push 0xae08
    X86_AT(c, 0xd07d3u);
    { uint32_t v = 0xAE08u; push32(c, v); }
    // 0d07d8  push 7
    X86_AT(c, 0xd07d8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d07da  call 0xba428
    X86_AT(c, 0xd07dau);
    push32(c, 0xd07dfu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd07dfu);
    X86_TICK(c, 11);
    // 0d07df  push 0xffffffff
    X86_AT(c, 0xd07dfu);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0d07e1  push 7
    X86_AT(c, 0xd07e1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d07e3  call 0xb6f28
    X86_AT(c, 0xd07e3u);
    push32(c, 0xd07e8u); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xd07e8u);
    X86_TICK(c, 12);
    // 0d07e8  xchg edi, eax
    X86_AT(c, 0xd07e8u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d07e9  add esp, 0x10
    X86_AT(c, 0xd07e9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d07ec  cmp edi, 0xffffffff
    X86_AT(c, 0xd07ecu);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0d07ef  jne 0xd0800
    X86_AT(c, 0xd07efu);
    if (x86_cc(c, 5)) { goto L_d0800; }
    X86_TICK(c, 7);
    // 0d07f1  call 0xce2c8
    X86_AT(c, 0xd07f1u);
    push32(c, 0xd07f6u); x86_call_known(c, 0xce2c8u, f_000ce2c8); X86_RET(c, 0xd07f6u);
    X86_TICK(c, 9);
    // 0d07f6  push 0xae44
    X86_AT(c, 0xd07f6u);
    { uint32_t v = 0xAE44u; push32(c, v); }
    // 0d07fb  jmp 0xd08d8
    X86_AT(c, 0xd07fbu);
    goto L_d08d8;
L_d0800:
    X86_TICK(c, 18);
    // 0d0800  lea eax, [edi + edi*2]
    X86_AT(c, 0xd0800u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0d0803  lea edx, [eax*8]
    X86_AT(c, 0xd0803u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0d080a  lea edx, [eax + edx*8]
    X86_AT(c, 0xd080au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0d080d  cmp byte ptr [edx + 0xa4abd], 0x44
    X86_AT(c, 0xd080du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu))), 0x44u, 0, 1);
    // 0d0814  je 0xd0936
    X86_AT(c, 0xd0814u);
    if (x86_cc(c, 4)) { goto L_d0936; }
    X86_TICK(c, 9);
    // 0d081a  push 3
    X86_AT(c, 0xd081au);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d081c  call 0xb607c
    X86_AT(c, 0xd081cu);
    push32(c, 0xd0821u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd0821u);
    X86_TICK(c, 11);
    // 0d0821  push 0xae84
    X86_AT(c, 0xd0821u);
    { uint32_t v = 0xAE84u; push32(c, v); }
    // 0d0826  push 7
    X86_AT(c, 0xd0826u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0828  call 0xba428
    X86_AT(c, 0xd0828u);
    push32(c, 0xd082du); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd082du);
    X86_TICK(c, 9);
    // 0d082d  push 7
    X86_AT(c, 0xd082du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d082f  call 0xbbb5c
    X86_AT(c, 0xd082fu);
    push32(c, 0xd0834u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0834u);
    X86_TICK(c, 9);
    // 0d0834  push 0xaeb8
    X86_AT(c, 0xd0834u);
    { uint32_t v = 0xAEB8u; push32(c, v); }
    // 0d0839  jmp 0xd0923
    X86_AT(c, 0xd0839u);
    goto L_d0923;
L_d083e:
    X86_TICK(c, 11);
    // 0d083e  push 0xaef8
    X86_AT(c, 0xd083eu);
    { uint32_t v = 0xAEF8u; push32(c, v); }
    // 0d0843  push 7
    X86_AT(c, 0xd0843u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0845  call 0xba428
    X86_AT(c, 0xd0845u);
    push32(c, 0xd084au); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd084au);
    X86_TICK(c, 9);
    // 0d084a  push 7
    X86_AT(c, 0xd084au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d084c  call 0xbbb5c
    X86_AT(c, 0xd084cu);
    push32(c, 0xd0851u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0851u);
    X86_TICK(c, 11);
    // 0d0851  push 0xaf14
    X86_AT(c, 0xd0851u);
    { uint32_t v = 0xAF14u; push32(c, v); }
    // 0d0856  push 7
    X86_AT(c, 0xd0856u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0858  call 0xba428
    X86_AT(c, 0xd0858u);
    push32(c, 0xd085du); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd085du);
    X86_TICK(c, 11);
    // 0d085d  push 0
    X86_AT(c, 0xd085du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d085f  push 7
    X86_AT(c, 0xd085fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0861  call 0xb6f28
    X86_AT(c, 0xd0861u);
    push32(c, 0xd0866u); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xd0866u);
    X86_TICK(c, 12);
    // 0d0866  xchg edi, eax
    X86_AT(c, 0xd0866u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d0867  push 7
    X86_AT(c, 0xd0867u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0869  call 0xbbb5c
    X86_AT(c, 0xd0869u);
    push32(c, 0xd086eu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd086eu);
    X86_TICK(c, 9);
    // 0d086e  add esp, 0x20
    X86_AT(c, 0xd086eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0d0871  cmp edi, 0xffffffff
    X86_AT(c, 0xd0871u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0d0874  jne 0xd087d
    X86_AT(c, 0xd0874u);
    if (x86_cc(c, 5)) { goto L_d087d; }
    X86_TICK(c, 9);
    // 0d0876  push 0xafa4
    X86_AT(c, 0xd0876u);
    { uint32_t v = 0xAFA4u; push32(c, v); }
    // 0d087b  jmp 0xd08d8
    X86_AT(c, 0xd087bu);
    goto L_d08d8;
L_d087d:
    X86_TICK(c, 11);
    // 0d087d  push 0x384
    X86_AT(c, 0xd087du);
    { uint32_t v = 0x384u; push32(c, v); }
    // 0d0882  push edi
    X86_AT(c, 0xd0882u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d0883  call 0xcfe88
    X86_AT(c, 0xd0883u);
    push32(c, 0xd0888u); x86_call_known(c, 0xcfe88u, f_000cfe88); X86_RET(c, 0xd0888u);
    X86_TICK(c, 9);
    // 0d0888  add esp, 8
    X86_AT(c, 0xd0888u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d088b  inc eax
    X86_AT(c, 0xd088bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d088c  jne 0xd08b0
    X86_AT(c, 0xd088cu);
    if (x86_cc(c, 5)) { goto L_d08b0; }
    X86_TICK(c, 9);
    // 0d088e  push 3
    X86_AT(c, 0xd088eu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d0890  call 0xb607c
    X86_AT(c, 0xd0890u);
    push32(c, 0xd0895u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd0895u);
    X86_TICK(c, 11);
    // 0d0895  push 0xb030
    X86_AT(c, 0xd0895u);
    { uint32_t v = 0xB030u; push32(c, v); }
    // 0d089a  push 7
    X86_AT(c, 0xd089au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d089c  call 0xba428
    X86_AT(c, 0xd089cu);
    push32(c, 0xd08a1u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd08a1u);
    X86_TICK(c, 9);
    // 0d08a1  push 7
    X86_AT(c, 0xd08a1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d08a3  call 0xbbb5c
    X86_AT(c, 0xd08a3u);
    push32(c, 0xd08a8u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd08a8u);
    X86_TICK(c, 9);
    // 0d08a8  add esp, 0x10
    X86_AT(c, 0xd08a8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d08ab  jmp 0xd098e
    X86_AT(c, 0xd08abu);
    goto L_d098e;
L_d08b0:
    X86_TICK(c, 11);
    // 0d08b0  push 0xb0bc
    X86_AT(c, 0xd08b0u);
    { uint32_t v = 0xB0BCu; push32(c, v); }
    // 0d08b5  push 7
    X86_AT(c, 0xd08b5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d08b7  call 0xba428
    X86_AT(c, 0xd08b7u);
    push32(c, 0xd08bcu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd08bcu);
    X86_TICK(c, 11);
    // 0d08bc  push 0xffffffff
    X86_AT(c, 0xd08bcu);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0d08be  push 7
    X86_AT(c, 0xd08beu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d08c0  call 0xb6f28
    X86_AT(c, 0xd08c0u);
    push32(c, 0xd08c5u); x86_call_known(c, 0xb6f28u, f_000b6f28); X86_RET(c, 0xd08c5u);
    X86_TICK(c, 12);
    // 0d08c5  xchg edi, eax
    X86_AT(c, 0xd08c5u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d08c6  add esp, 0x10
    X86_AT(c, 0xd08c6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d08c9  cmp edi, 0xffffffff
    X86_AT(c, 0xd08c9u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0d08cc  jne 0xd08ee
    X86_AT(c, 0xd08ccu);
    if (x86_cc(c, 5)) { goto L_d08ee; }
    X86_TICK(c, 7);
    // 0d08ce  call 0xce2c8
    X86_AT(c, 0xd08ceu);
    push32(c, 0xd08d3u); x86_call_known(c, 0xce2c8u, f_000ce2c8); X86_RET(c, 0xd08d3u);
    X86_TICK(c, 2);
    // 0d08d3  push 0xb0f4
    X86_AT(c, 0xd08d3u);
    { uint32_t v = 0xB0F4u; push32(c, v); }
L_d08d8:
    X86_TICK(c, 9);
    // 0d08d8  push 7
    X86_AT(c, 0xd08d8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d08da  call 0xba428
    X86_AT(c, 0xd08dau);
    push32(c, 0xd08dfu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd08dfu);
    X86_TICK(c, 9);
    // 0d08df  push 7
    X86_AT(c, 0xd08dfu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d08e1  call 0xbbb5c
    X86_AT(c, 0xd08e1u);
    push32(c, 0xd08e6u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd08e6u);
    X86_TICK(c, 9);
    // 0d08e6  add esp, 0xc
    X86_AT(c, 0xd08e6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d08e9  jmp 0xd098e
    X86_AT(c, 0xd08e9u);
    goto L_d098e;
L_d08ee:
    X86_TICK(c, 18);
    // 0d08ee  lea eax, [edi + edi*2]
    X86_AT(c, 0xd08eeu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0d08f1  lea edx, [eax*8]
    X86_AT(c, 0xd08f1u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0d08f8  lea edx, [eax + edx*8]
    X86_AT(c, 0xd08f8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0d08fb  cmp byte ptr [edx + 0xa4abd], 0x41
    X86_AT(c, 0xd08fbu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu))), 0x41u, 0, 1);
    // 0d0902  je 0xd0936
    X86_AT(c, 0xd0902u);
    if (x86_cc(c, 4)) { goto L_d0936; }
    X86_TICK(c, 9);
    // 0d0904  push 3
    X86_AT(c, 0xd0904u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d0906  call 0xb607c
    X86_AT(c, 0xd0906u);
    push32(c, 0xd090bu); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd090bu);
    X86_TICK(c, 11);
    // 0d090b  push 0xb134
    X86_AT(c, 0xd090bu);
    { uint32_t v = 0xB134u; push32(c, v); }
    // 0d0910  push 7
    X86_AT(c, 0xd0910u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0912  call 0xba428
    X86_AT(c, 0xd0912u);
    push32(c, 0xd0917u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd0917u);
    X86_TICK(c, 9);
    // 0d0917  push 7
    X86_AT(c, 0xd0917u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0919  call 0xbbb5c
    X86_AT(c, 0xd0919u);
    push32(c, 0xd091eu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd091eu);
    X86_TICK(c, 2);
    // 0d091e  push 0xb168
    X86_AT(c, 0xd091eu);
    { uint32_t v = 0xB168u; push32(c, v); }
L_d0923:
    X86_TICK(c, 9);
    // 0d0923  push 7
    X86_AT(c, 0xd0923u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d0925  call 0xba428
    X86_AT(c, 0xd0925u);
    push32(c, 0xd092au); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd092au);
    X86_TICK(c, 9);
    // 0d092a  push 7
    X86_AT(c, 0xd092au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d092c  call 0xbbb5c
    X86_AT(c, 0xd092cu);
    push32(c, 0xd0931u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd0931u);
    X86_TICK(c, 9);
    // 0d0931  add esp, 0x1c
    X86_AT(c, 0xd0931u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0d0934  jmp 0xd098e
    X86_AT(c, 0xd0934u);
    goto L_d098e;
L_d0936:
    X86_TICK(c, 9);
    // 0d0936  push 2
    X86_AT(c, 0xd0936u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d0938  call 0xb607c
    X86_AT(c, 0xd0938u);
    push32(c, 0xd093du); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xd093du);
    X86_TICK(c, 7);
    // 0d093d  call 0xcaa9c
    X86_AT(c, 0xd093du);
    push32(c, 0xd0942u); x86_call_known(c, 0xcaa9cu, f_000caa9c); X86_RET(c, 0xd0942u);
    X86_TICK(c, 9);
    // 0d0942  push edi
    X86_AT(c, 0xd0942u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d0943  call 0xc7f0c
    X86_AT(c, 0xd0943u);
    push32(c, 0xd0948u); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xd0948u);
    X86_TICK(c, 9);
    // 0d0948  push 2
    X86_AT(c, 0xd0948u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d094a  call 0xbebbc
    X86_AT(c, 0xd094au);
    push32(c, 0xd094fu); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xd094fu);
    X86_TICK(c, 36);
    // 0d094f  lea eax, [edi + edi*2]
    X86_AT(c, 0xd094fu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0d0952  lea edx, [eax*8]
    X86_AT(c, 0xd0952u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0d0959  lea edx, [eax + edx*8]
    X86_AT(c, 0xd0959u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0d095c  mov byte ptr [edx + 0xa4abd], 0x47
    X86_AT(c, 0xd095cu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ABDu)), 0x47u);
    // 0d0963  mov eax, dword ptr [edx + 0xa4ad9]
    X86_AT(c, 0xd0963u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD9u)));
    // 0d0969  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xd0969u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0d096c  cdq 
    X86_AT(c, 0xd096cu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0d096d  sub eax, edx
    X86_AT(c, 0xd096du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0d096f  sar eax, 1
    X86_AT(c, 0xd096fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0d0971  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xd0971u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d0974  mov dword ptr [edx + 0xa4ad5], eax
    X86_AT(c, 0xd0974u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AD5u)), c.r[0]);
    // 0d097a  push edi
    X86_AT(c, 0xd097au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d097b  call 0xc7f0c
    X86_AT(c, 0xd097bu);
    push32(c, 0xd0980u); x86_call_known(c, 0xc7f0cu, f_000c7f0c); X86_RET(c, 0xd0980u);
    X86_TICK(c, 9);
    // 0d0980  push edi
    X86_AT(c, 0xd0980u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d0981  call 0xbe720
    X86_AT(c, 0xd0981u);
    push32(c, 0xd0986u); x86_call_known(c, 0xbe720u, f_000be720); X86_RET(c, 0xd0986u);
    X86_TICK(c, 7);
    // 0d0986  call 0xb75c0
    X86_AT(c, 0xd0986u);
    push32(c, 0xd098bu); x86_call_known(c, 0xb75c0u, f_000b75c0); X86_RET(c, 0xd098bu);
L_d098b:
    X86_TICK(c, 2);
    // 0d098b  add esp, 0x14
    X86_AT(c, 0xd098bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_d098e:
    X86_TICK(c, 7);
    // 0d098e  cmp edi, 0xffffffff
    X86_AT(c, 0xd098eu);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0d0991  je 0xd09b5
    X86_AT(c, 0xd0991u);
    if (x86_cc(c, 4)) { goto L_d09b5; }
    X86_TICK(c, 11);
    // 0d0993  push 0xb1a8
    X86_AT(c, 0xd0993u);
    { uint32_t v = 0xB1A8u; push32(c, v); }
    // 0d0998  push 7
    X86_AT(c, 0xd0998u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d099a  call 0xba428
    X86_AT(c, 0xd099au);
    push32(c, 0xd099fu); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd099fu);
    X86_TICK(c, 9);
    // 0d099f  push 7
    X86_AT(c, 0xd099fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d09a1  call 0xbbb5c
    X86_AT(c, 0xd09a1u);
    push32(c, 0xd09a6u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd09a6u);
    X86_TICK(c, 9);
    // 0d09a6  push 7
    X86_AT(c, 0xd09a6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d09a8  call 0xc9890
    X86_AT(c, 0xd09a8u);
    push32(c, 0xd09adu); x86_call_known(c, 0xc9890u, f_000c9890); X86_RET(c, 0xd09adu);
    X86_TICK(c, 9);
    // 0d09ad  add esp, 0x10
    X86_AT(c, 0xd09adu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d09b0  jmp 0xd0481
    X86_AT(c, 0xd09b0u);
    X86_POLL(c, 0xd0481u); goto L_d0481;
L_d09b5:
    X86_TICK(c, 11);
    // 0d09b5  push 0xb1e0
    X86_AT(c, 0xd09b5u);
    { uint32_t v = 0xB1E0u; push32(c, v); }
    // 0d09ba  push 7
    X86_AT(c, 0xd09bau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d09bc  call 0xba428
    X86_AT(c, 0xd09bcu);
    push32(c, 0xd09c1u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xd09c1u);
    X86_TICK(c, 9);
    // 0d09c1  push 7
    X86_AT(c, 0xd09c1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d09c3  call 0xbbb5c
    X86_AT(c, 0xd09c3u);
    push32(c, 0xd09c8u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xd09c8u);
    X86_TICK(c, 26);
    // 0d09c8  add esp, 0xc
    X86_AT(c, 0xd09c8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d09cb  pop edi
    X86_AT(c, 0xd09cbu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d09cc  pop ebx
    X86_AT(c, 0xd09ccu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d09cd  leave 
    X86_AT(c, 0xd09cdu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d09ce  ret 
    X86_AT(c, 0xd09ceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd0444u, "ran off the end of a function");
}
}
