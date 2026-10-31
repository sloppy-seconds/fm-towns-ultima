#include "p_tbios_funcs.h"
namespace p_tbios {
void f_0000579c(X86Cpu& c) {
    X86_TICK(c, 15);
    // 00579c  mov eax, dword ptr [esi]
    X86_AT(c, 0x579cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00579e  mov edx, dword ptr [esi + 4]
    X86_AT(c, 0x579eu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)));
    // 0057a1  cmp dx, ax
    X86_AT(c, 0x57a1u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0057a4  jge 0x57a8
    X86_AT(c, 0x57a4u);
    if (x86_cc(c, 13)) { goto L_57a8; }
    X86_TICK(c, 3);
    // 0057a6  xchg dx, ax
    X86_AT(c, 0x57a6u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_57a8:
    X86_TICK(c, 12);
    // 0057a8  cmp word ptr gs:[ebp + 0x28], dx
    X86_AT(c, 0x57a8u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[2] & 0xFFFFu), 0, 2);
    // 0057ad  jg 0x5a5c
    X86_AT(c, 0x57adu);
    if (x86_cc(c, 15)) { goto L_5a5c; }
    X86_TICK(c, 12);
    // 0057b3  cmp word ptr gs:[ebp + 0x2c], ax
    X86_AT(c, 0x57b3u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 0057b8  jl 0x5a5c
    X86_AT(c, 0x57b8u);
    if (x86_cc(c, 12)) { goto L_5a5c; }
    X86_TICK(c, 17);
    // 0057be  mov word ptr gs:[ebp + 0x1c4], ax
    X86_AT(c, 0x57beu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), (c.r[0] & 0xFFFFu));
    // 0057c6  mov word ptr gs:[ebp + 0x1c8], dx
    X86_AT(c, 0x57c6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), (c.r[2] & 0xFFFFu));
    // 0057ce  shr eax, 0x10
    X86_AT(c, 0x57ceu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0057d1  shr edx, 0x10
    X86_AT(c, 0x57d1u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0057d4  cmp dx, ax
    X86_AT(c, 0x57d4u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0057d7  jge 0x57db
    X86_AT(c, 0x57d7u);
    if (x86_cc(c, 13)) { goto L_57db; }
    X86_TICK(c, 3);
    // 0057d9  xchg dx, ax
    X86_AT(c, 0x57d9u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_57db:
    X86_TICK(c, 12);
    // 0057db  cmp word ptr gs:[ebp + 0x2a], dx
    X86_AT(c, 0x57dbu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[2] & 0xFFFFu), 0, 2);
    // 0057e0  jg 0x5a5c
    X86_AT(c, 0x57e0u);
    if (x86_cc(c, 15)) { goto L_5a5c; }
    X86_TICK(c, 12);
    // 0057e6  cmp word ptr gs:[ebp + 0x2e], ax
    X86_AT(c, 0x57e6u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 0057eb  jl 0x5a5c
    X86_AT(c, 0x57ebu);
    if (x86_cc(c, 12)) { goto L_5a5c; }
    X86_TICK(c, 20);
    // 0057f1  mov word ptr gs:[ebp + 0x1c6], ax
    X86_AT(c, 0x57f1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u)), (c.r[0] & 0xFFFFu));
    // 0057f9  mov word ptr gs:[ebp + 0x1ca], dx
    X86_AT(c, 0x57f9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[2] & 0xFFFFu));
    // 005801  mov eax, dword ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x5801u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)));
    // 005808  cmp word ptr gs:[ebp + 0x28], ax
    X86_AT(c, 0x5808u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00580d  jge 0x5814
    X86_AT(c, 0x580du);
    if (x86_cc(c, 13)) { goto L_5814; }
    X86_TICK(c, 2);
    // 00580f  mov word ptr gs:[ebp + 0x28], ax
    X86_AT(c, 0x580fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), (c.r[0] & 0xFFFFu));
L_5814:
    X86_TICK(c, 15);
    // 005814  shr eax, 0x10
    X86_AT(c, 0x5814u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 005817  cmp word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x5817u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00581c  jge 0x5823
    X86_AT(c, 0x581cu);
    if (x86_cc(c, 13)) { goto L_5823; }
    X86_TICK(c, 2);
    // 00581e  mov word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x581eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au)), (c.r[0] & 0xFFFFu));
L_5823:
    X86_TICK(c, 16);
    // 005823  mov eax, dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x5823u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 00582a  cmp word ptr gs:[ebp + 0x2c], ax
    X86_AT(c, 0x582au);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00582f  jle 0x5836
    X86_AT(c, 0x582fu);
    if (x86_cc(c, 14)) { goto L_5836; }
    X86_TICK(c, 2);
    // 005831  mov word ptr gs:[ebp + 0x2c], ax
    X86_AT(c, 0x5831u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), (c.r[0] & 0xFFFFu));
L_5836:
    X86_TICK(c, 15);
    // 005836  shr eax, 0x10
    X86_AT(c, 0x5836u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 005839  cmp word ptr gs:[ebp + 0x2e], ax
    X86_AT(c, 0x5839u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00583e  jle 0x5845
    X86_AT(c, 0x583eu);
    if (x86_cc(c, 14)) { goto L_5845; }
    X86_TICK(c, 2);
    // 005840  mov word ptr gs:[ebp + 0x2e], ax
    X86_AT(c, 0x5840u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu)), (c.r[0] & 0xFFFFu));
L_5845:
    X86_TICK(c, 105);
    // 005845  push dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5845u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))); push32(c, v); }
    // 00584c  mov dword ptr gs:[ebp + 0x104], 0
    X86_AT(c, 0x584cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), 0x0u);
    // 005857  movzx eax, word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x5857u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 00585f  sub ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x585fu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))), 0, 2)); }
    // 005867  inc eax
    X86_AT(c, 0x5867u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 005868  shr eax, 3
    X86_AT(c, 0x5868u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 00586b  inc eax
    X86_AT(c, 0x586bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 00586c  mul dword ptr gs:[ebp + 0x24]
    X86_AT(c, 0x586cu);
    x86_mul(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u))), 4);
    // 005870  mov dword ptr gs:[ebp + 0x3a0], eax
    X86_AT(c, 0x5870u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A0u)), c.r[0]);
    // 005877  sub esp, eax
    X86_AT(c, 0x5877u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[0], 0, 4); }
    // 005879  mov dword ptr gs:[ebp + 0x398], esp
    X86_AT(c, 0x5879u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x398u)), c.r[4]);
    // 005880  mov word ptr gs:[ebp + 0x39c], ss
    X86_AT(c, 0x5880u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x39Cu)), (uint32_t)c.sreg[2]);
    // 005887  mov bx, word ptr gs:[ebp + 0x1c6]
    X86_AT(c, 0x5887u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u))));
    // 00588f  mov dx, word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0x588fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu))));
    // 005897  movzx ecx, dx
    X86_AT(c, 0x5897u);
    c.r[1] = (c.r[2] & 0xFFFFu);
    // 00589a  sub cx, bx
    X86_AT(c, 0x589au);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00589d  inc ecx
    X86_AT(c, 0x589du);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 00589e  push ecx
    X86_AT(c, 0x589eu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00589f  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x589fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0058a7  neg ax
    X86_AT(c, 0x58a7u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 0058aa  or ah, 0x40
    X86_AT(c, 0x58aau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v | 0x40u, 1)); }
    // 0058ad  sar ax, 0xe
    X86_AT(c, 0x58adu);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 7, v, 0xEu, 2, w); if (w) s16(c, 0, r); }
    // 0058b1  mov word ptr gs:[ebp + 0x45c], ax
    X86_AT(c, 0x58b1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu)), (c.r[0] & 0xFFFFu));
    // 0058b9  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x58b9u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0058bd  neg eax
    X86_AT(c, 0x58bdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 0058bf  movsx ecx, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x58bfu);
    c.r[1] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u)));
    // 0058c7  test ecx, ecx
    X86_AT(c, 0x58c7u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0058c9  jg 0x58d2
    X86_AT(c, 0x58c9u);
    if (x86_cc(c, 15)) { goto L_58d2; }
    X86_TICK(c, 6);
    // 0058cb  mov dx, bx
    X86_AT(c, 0x58cbu);
    s16(c, 2, (c.r[3] & 0xFFFFu));
    // 0058ce  neg eax
    X86_AT(c, 0x58ceu);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 0058d0  neg ecx
    X86_AT(c, 0x58d0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_neg(c, v, 4); }
L_58d2:
    X86_TICK(c, 29);
    // 0058d2  mov dword ptr gs:[ebp + 0x458], eax
    X86_AT(c, 0x58d2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)), c.r[0]);
    // 0058d9  sub dx, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x58d9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))), 0, 2)); }
    // 0058e1  mov word ptr gs:[ebp + 0x226], dx
    X86_AT(c, 0x58e1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[2] & 0xFFFFu));
    // 0058e9  sub dword ptr [esp], ecx
    X86_AT(c, 0x58e9u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[1], 0, 4)); }
    // 0058ec  cmp dword ptr [esp], 0
    X86_AT(c, 0x58ecu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x0u, 0, 4);
    // 0058f0  jle 0x5a22
    X86_AT(c, 0x58f0u);
    if (x86_cc(c, 14)) { goto L_5a22; }
    X86_TICK(c, 102);
    // 0058f6  mov ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x58f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))));
    // 0058fe  add ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x58feu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), 0, 2)); }
    // 005906  mov word ptr gs:[ebp + 0x450], ax
    X86_AT(c, 0x5906u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)), (c.r[0] & 0xFFFFu));
    // 00590e  mov ax, word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x590eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u))));
    // 005916  add ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x5916u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), 0, 2)); }
    // 00591e  mov word ptr gs:[ebp + 0x452], ax
    X86_AT(c, 0x591eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x452u)), (c.r[0] & 0xFFFFu));
    // 005926  movzx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x5926u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00592e  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x592eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 005933  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x5933u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 005937  mov dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0x5937u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)), c.r[0]);
    // 00593e  movzx eax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x593eu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u)));
    // 005946  add ax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x5946u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))), 0, 2)); }
    // 00594e  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x594eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 005953  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x5953u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 005957  mov dword ptr gs:[ebp + 0x454], eax
    X86_AT(c, 0x5957u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)), c.r[0]);
L_595e:
    X86_TICK(c, 35);
    // 00595e  mov ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x595eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))));
    // 005966  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x5966u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 00596e  mov ax, word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x596eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u))));
    // 005976  mov word ptr gs:[ebp + 0x224], ax
    X86_AT(c, 0x5976u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[0] & 0xFFFFu));
    // 00597e  mov eax, dword ptr gs:[ebp + 0x44c]
    X86_AT(c, 0x597eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)));
    // 005985  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x5985u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00598c  mov ds, word ptr gs:[ebp + 4]
    X86_AT(c, 0x598cu);
    x86_load_seg(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 005990  les edi, fword ptr gs:[ebp + 0x398]
    X86_AT(c, 0x5990u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x398u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[7] = o; }
    // 005997  call 0x8b54
    X86_AT(c, 0x5997u);
    push32(c, 0x599cu); f_00008b54(c); X86_RET(c, 0x599cu);
    X86_TICK(c, 50);
    // 00599c  push word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x599cu);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))); push16(c, v); }
    // 0059a4  mov eax, dword ptr gs:[ebp + 0x450]
    X86_AT(c, 0x59a4u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)));
    // 0059ab  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x59abu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 0059b3  shr eax, 0x10
    X86_AT(c, 0x59b3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0059b6  mov word ptr gs:[ebp + 0x224], ax
    X86_AT(c, 0x59b6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[0] & 0xFFFFu));
    // 0059be  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x59beu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0059c6  add word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x59c6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0059ce  mov eax, dword ptr gs:[ebp + 0x454]
    X86_AT(c, 0x59ceu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)));
    // 0059d5  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x59d5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 0059dc  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x59dcu);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 0059e0  lds esi, fword ptr gs:[ebp + 0x398]
    X86_AT(c, 0x59e0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x398u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 0059e7  call 0x8f10
    X86_AT(c, 0x59e7u);
    push32(c, 0x59ecu); f_00008f10(c); X86_RET(c, 0x59ecu);
    X86_TICK(c, 45);
    // 0059ec  pop word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x59ecu);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), v); }
    // 0059f4  mov ax, word ptr gs:[ebp + 0x45c]
    X86_AT(c, 0x59f4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu))));
    // 0059fc  add word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x59fcu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 005a04  mov eax, dword ptr gs:[ebp + 0x458]
    X86_AT(c, 0x5a04u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)));
    // 005a0b  add dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0x5a0bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 005a12  add dword ptr gs:[ebp + 0x454], eax
    X86_AT(c, 0x5a12u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 005a19  dec dword ptr [esp]
    X86_AT(c, 0x5a19u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 005a1c  jne 0x595e
    X86_AT(c, 0x5a1cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x595eu); goto L_595e; }
L_5a22:
    X86_TICK(c, 20);
    // 005a22  add esp, 4
    X86_AT(c, 0x5a22u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 005a25  add esp, dword ptr gs:[ebp + 0x3a0]
    X86_AT(c, 0x5a25u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A0u))), 0, 4); }
    // 005a2c  cmp byte ptr gs:[ebp + 0x3a9], 1
    X86_AT(c, 0x5a2cu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A9u))), 0x1u, 0, 1);
    // 005a34  jne 0x5a55
    X86_AT(c, 0x5a34u);
    if (x86_cc(c, 5)) { goto L_5a55; }
    X86_TICK(c, 9);
    // 005a36  mov byte ptr gs:[ebp + 0x104], 1
    X86_AT(c, 0x5a36u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), 0x1u);
    // 005a3e  call 0x36a0
    X86_AT(c, 0x5a3eu);
    push32(c, 0x5a43u); f_000036a0(c); X86_RET(c, 0x5a43u);
    X86_TICK(c, 7);
    // 005a43  call 0x6120
    X86_AT(c, 0x5a43u);
    push32(c, 0x5a48u); f_00006120(c); X86_RET(c, 0x5a48u);
    X86_TICK(c, 9);
    // 005a48  mov byte ptr gs:[ebp + 0x220], 0x13
    X86_AT(c, 0x5a48u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x13u);
    // 005a50  call 0x5a60
    X86_AT(c, 0x5a50u);
    push32(c, 0x5a55u); f_00005a60(c); X86_RET(c, 0x5a55u);
L_5a55:
    X86_TICK(c, 5);
    // 005a55  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5a55u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
L_5a5c:
    X86_TICK(c, 10);
    // 005a5c  ret 
    X86_AT(c, 0x5a5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x579cu, "ran off the end of a function");
}
void f_0000579e(X86Cpu& c) {
    X86_TICK(c, 11);
    // 00579e  mov edx, dword ptr [esi + 4]
    X86_AT(c, 0x579eu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)));
    // 0057a1  cmp dx, ax
    X86_AT(c, 0x57a1u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0057a4  jge 0x57a8
    X86_AT(c, 0x57a4u);
    if (x86_cc(c, 13)) { goto L_57a8; }
    X86_TICK(c, 3);
    // 0057a6  xchg dx, ax
    X86_AT(c, 0x57a6u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_57a8:
    X86_TICK(c, 12);
    // 0057a8  cmp word ptr gs:[ebp + 0x28], dx
    X86_AT(c, 0x57a8u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[2] & 0xFFFFu), 0, 2);
    // 0057ad  jg 0x5a5c
    X86_AT(c, 0x57adu);
    if (x86_cc(c, 15)) { goto L_5a5c; }
    X86_TICK(c, 12);
    // 0057b3  cmp word ptr gs:[ebp + 0x2c], ax
    X86_AT(c, 0x57b3u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 0057b8  jl 0x5a5c
    X86_AT(c, 0x57b8u);
    if (x86_cc(c, 12)) { goto L_5a5c; }
    X86_TICK(c, 17);
    // 0057be  mov word ptr gs:[ebp + 0x1c4], ax
    X86_AT(c, 0x57beu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), (c.r[0] & 0xFFFFu));
    // 0057c6  mov word ptr gs:[ebp + 0x1c8], dx
    X86_AT(c, 0x57c6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), (c.r[2] & 0xFFFFu));
    // 0057ce  shr eax, 0x10
    X86_AT(c, 0x57ceu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0057d1  shr edx, 0x10
    X86_AT(c, 0x57d1u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0057d4  cmp dx, ax
    X86_AT(c, 0x57d4u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0057d7  jge 0x57db
    X86_AT(c, 0x57d7u);
    if (x86_cc(c, 13)) { goto L_57db; }
    X86_TICK(c, 3);
    // 0057d9  xchg dx, ax
    X86_AT(c, 0x57d9u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_57db:
    X86_TICK(c, 12);
    // 0057db  cmp word ptr gs:[ebp + 0x2a], dx
    X86_AT(c, 0x57dbu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[2] & 0xFFFFu), 0, 2);
    // 0057e0  jg 0x5a5c
    X86_AT(c, 0x57e0u);
    if (x86_cc(c, 15)) { goto L_5a5c; }
    X86_TICK(c, 12);
    // 0057e6  cmp word ptr gs:[ebp + 0x2e], ax
    X86_AT(c, 0x57e6u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 0057eb  jl 0x5a5c
    X86_AT(c, 0x57ebu);
    if (x86_cc(c, 12)) { goto L_5a5c; }
    X86_TICK(c, 20);
    // 0057f1  mov word ptr gs:[ebp + 0x1c6], ax
    X86_AT(c, 0x57f1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u)), (c.r[0] & 0xFFFFu));
    // 0057f9  mov word ptr gs:[ebp + 0x1ca], dx
    X86_AT(c, 0x57f9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[2] & 0xFFFFu));
    // 005801  mov eax, dword ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x5801u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)));
    // 005808  cmp word ptr gs:[ebp + 0x28], ax
    X86_AT(c, 0x5808u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00580d  jge 0x5814
    X86_AT(c, 0x580du);
    if (x86_cc(c, 13)) { goto L_5814; }
    X86_TICK(c, 2);
    // 00580f  mov word ptr gs:[ebp + 0x28], ax
    X86_AT(c, 0x580fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), (c.r[0] & 0xFFFFu));
L_5814:
    X86_TICK(c, 15);
    // 005814  shr eax, 0x10
    X86_AT(c, 0x5814u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 005817  cmp word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x5817u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00581c  jge 0x5823
    X86_AT(c, 0x581cu);
    if (x86_cc(c, 13)) { goto L_5823; }
    X86_TICK(c, 2);
    // 00581e  mov word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x581eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au)), (c.r[0] & 0xFFFFu));
L_5823:
    X86_TICK(c, 16);
    // 005823  mov eax, dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x5823u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 00582a  cmp word ptr gs:[ebp + 0x2c], ax
    X86_AT(c, 0x582au);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00582f  jle 0x5836
    X86_AT(c, 0x582fu);
    if (x86_cc(c, 14)) { goto L_5836; }
    X86_TICK(c, 2);
    // 005831  mov word ptr gs:[ebp + 0x2c], ax
    X86_AT(c, 0x5831u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), (c.r[0] & 0xFFFFu));
L_5836:
    X86_TICK(c, 15);
    // 005836  shr eax, 0x10
    X86_AT(c, 0x5836u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 005839  cmp word ptr gs:[ebp + 0x2e], ax
    X86_AT(c, 0x5839u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00583e  jle 0x5845
    X86_AT(c, 0x583eu);
    if (x86_cc(c, 14)) { goto L_5845; }
    X86_TICK(c, 2);
    // 005840  mov word ptr gs:[ebp + 0x2e], ax
    X86_AT(c, 0x5840u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu)), (c.r[0] & 0xFFFFu));
L_5845:
    X86_TICK(c, 105);
    // 005845  push dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5845u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))); push32(c, v); }
    // 00584c  mov dword ptr gs:[ebp + 0x104], 0
    X86_AT(c, 0x584cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), 0x0u);
    // 005857  movzx eax, word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x5857u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 00585f  sub ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x585fu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))), 0, 2)); }
    // 005867  inc eax
    X86_AT(c, 0x5867u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 005868  shr eax, 3
    X86_AT(c, 0x5868u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 00586b  inc eax
    X86_AT(c, 0x586bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 00586c  mul dword ptr gs:[ebp + 0x24]
    X86_AT(c, 0x586cu);
    x86_mul(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u))), 4);
    // 005870  mov dword ptr gs:[ebp + 0x3a0], eax
    X86_AT(c, 0x5870u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A0u)), c.r[0]);
    // 005877  sub esp, eax
    X86_AT(c, 0x5877u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[0], 0, 4); }
    // 005879  mov dword ptr gs:[ebp + 0x398], esp
    X86_AT(c, 0x5879u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x398u)), c.r[4]);
    // 005880  mov word ptr gs:[ebp + 0x39c], ss
    X86_AT(c, 0x5880u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x39Cu)), (uint32_t)c.sreg[2]);
    // 005887  mov bx, word ptr gs:[ebp + 0x1c6]
    X86_AT(c, 0x5887u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u))));
    // 00588f  mov dx, word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0x588fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu))));
    // 005897  movzx ecx, dx
    X86_AT(c, 0x5897u);
    c.r[1] = (c.r[2] & 0xFFFFu);
    // 00589a  sub cx, bx
    X86_AT(c, 0x589au);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00589d  inc ecx
    X86_AT(c, 0x589du);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 00589e  push ecx
    X86_AT(c, 0x589eu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00589f  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x589fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0058a7  neg ax
    X86_AT(c, 0x58a7u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 0058aa  or ah, 0x40
    X86_AT(c, 0x58aau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v | 0x40u, 1)); }
    // 0058ad  sar ax, 0xe
    X86_AT(c, 0x58adu);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 7, v, 0xEu, 2, w); if (w) s16(c, 0, r); }
    // 0058b1  mov word ptr gs:[ebp + 0x45c], ax
    X86_AT(c, 0x58b1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu)), (c.r[0] & 0xFFFFu));
    // 0058b9  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x58b9u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0058bd  neg eax
    X86_AT(c, 0x58bdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 0058bf  movsx ecx, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x58bfu);
    c.r[1] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u)));
    // 0058c7  test ecx, ecx
    X86_AT(c, 0x58c7u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0058c9  jg 0x58d2
    X86_AT(c, 0x58c9u);
    if (x86_cc(c, 15)) { goto L_58d2; }
    X86_TICK(c, 6);
    // 0058cb  mov dx, bx
    X86_AT(c, 0x58cbu);
    s16(c, 2, (c.r[3] & 0xFFFFu));
    // 0058ce  neg eax
    X86_AT(c, 0x58ceu);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 0058d0  neg ecx
    X86_AT(c, 0x58d0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_neg(c, v, 4); }
L_58d2:
    X86_TICK(c, 29);
    // 0058d2  mov dword ptr gs:[ebp + 0x458], eax
    X86_AT(c, 0x58d2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)), c.r[0]);
    // 0058d9  sub dx, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x58d9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))), 0, 2)); }
    // 0058e1  mov word ptr gs:[ebp + 0x226], dx
    X86_AT(c, 0x58e1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[2] & 0xFFFFu));
    // 0058e9  sub dword ptr [esp], ecx
    X86_AT(c, 0x58e9u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[1], 0, 4)); }
    // 0058ec  cmp dword ptr [esp], 0
    X86_AT(c, 0x58ecu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x0u, 0, 4);
    // 0058f0  jle 0x5a22
    X86_AT(c, 0x58f0u);
    if (x86_cc(c, 14)) { goto L_5a22; }
    X86_TICK(c, 102);
    // 0058f6  mov ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x58f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))));
    // 0058fe  add ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x58feu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), 0, 2)); }
    // 005906  mov word ptr gs:[ebp + 0x450], ax
    X86_AT(c, 0x5906u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)), (c.r[0] & 0xFFFFu));
    // 00590e  mov ax, word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x590eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u))));
    // 005916  add ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x5916u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), 0, 2)); }
    // 00591e  mov word ptr gs:[ebp + 0x452], ax
    X86_AT(c, 0x591eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x452u)), (c.r[0] & 0xFFFFu));
    // 005926  movzx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x5926u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00592e  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x592eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 005933  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x5933u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 005937  mov dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0x5937u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)), c.r[0]);
    // 00593e  movzx eax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x593eu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u)));
    // 005946  add ax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x5946u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))), 0, 2)); }
    // 00594e  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x594eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 005953  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x5953u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 005957  mov dword ptr gs:[ebp + 0x454], eax
    X86_AT(c, 0x5957u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)), c.r[0]);
L_595e:
    X86_TICK(c, 35);
    // 00595e  mov ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x595eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))));
    // 005966  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x5966u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 00596e  mov ax, word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x596eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u))));
    // 005976  mov word ptr gs:[ebp + 0x224], ax
    X86_AT(c, 0x5976u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[0] & 0xFFFFu));
    // 00597e  mov eax, dword ptr gs:[ebp + 0x44c]
    X86_AT(c, 0x597eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)));
    // 005985  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x5985u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00598c  mov ds, word ptr gs:[ebp + 4]
    X86_AT(c, 0x598cu);
    x86_load_seg(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 005990  les edi, fword ptr gs:[ebp + 0x398]
    X86_AT(c, 0x5990u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x398u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[7] = o; }
    // 005997  call 0x8b54
    X86_AT(c, 0x5997u);
    push32(c, 0x599cu); f_00008b54(c); X86_RET(c, 0x599cu);
    X86_TICK(c, 50);
    // 00599c  push word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x599cu);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))); push16(c, v); }
    // 0059a4  mov eax, dword ptr gs:[ebp + 0x450]
    X86_AT(c, 0x59a4u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)));
    // 0059ab  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x59abu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 0059b3  shr eax, 0x10
    X86_AT(c, 0x59b3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0059b6  mov word ptr gs:[ebp + 0x224], ax
    X86_AT(c, 0x59b6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[0] & 0xFFFFu));
    // 0059be  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x59beu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0059c6  add word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x59c6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0059ce  mov eax, dword ptr gs:[ebp + 0x454]
    X86_AT(c, 0x59ceu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)));
    // 0059d5  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x59d5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 0059dc  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x59dcu);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 0059e0  lds esi, fword ptr gs:[ebp + 0x398]
    X86_AT(c, 0x59e0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x398u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 0059e7  call 0x8f10
    X86_AT(c, 0x59e7u);
    push32(c, 0x59ecu); f_00008f10(c); X86_RET(c, 0x59ecu);
    X86_TICK(c, 45);
    // 0059ec  pop word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x59ecu);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), v); }
    // 0059f4  mov ax, word ptr gs:[ebp + 0x45c]
    X86_AT(c, 0x59f4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu))));
    // 0059fc  add word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x59fcu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 005a04  mov eax, dword ptr gs:[ebp + 0x458]
    X86_AT(c, 0x5a04u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)));
    // 005a0b  add dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0x5a0bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 005a12  add dword ptr gs:[ebp + 0x454], eax
    X86_AT(c, 0x5a12u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 005a19  dec dword ptr [esp]
    X86_AT(c, 0x5a19u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 005a1c  jne 0x595e
    X86_AT(c, 0x5a1cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x595eu); goto L_595e; }
L_5a22:
    X86_TICK(c, 20);
    // 005a22  add esp, 4
    X86_AT(c, 0x5a22u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 005a25  add esp, dword ptr gs:[ebp + 0x3a0]
    X86_AT(c, 0x5a25u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A0u))), 0, 4); }
    // 005a2c  cmp byte ptr gs:[ebp + 0x3a9], 1
    X86_AT(c, 0x5a2cu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A9u))), 0x1u, 0, 1);
    // 005a34  jne 0x5a55
    X86_AT(c, 0x5a34u);
    if (x86_cc(c, 5)) { goto L_5a55; }
    X86_TICK(c, 9);
    // 005a36  mov byte ptr gs:[ebp + 0x104], 1
    X86_AT(c, 0x5a36u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), 0x1u);
    // 005a3e  call 0x36a0
    X86_AT(c, 0x5a3eu);
    push32(c, 0x5a43u); f_000036a0(c); X86_RET(c, 0x5a43u);
    X86_TICK(c, 7);
    // 005a43  call 0x6120
    X86_AT(c, 0x5a43u);
    push32(c, 0x5a48u); f_00006120(c); X86_RET(c, 0x5a48u);
    X86_TICK(c, 9);
    // 005a48  mov byte ptr gs:[ebp + 0x220], 0x13
    X86_AT(c, 0x5a48u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x13u);
    // 005a50  call 0x5a60
    X86_AT(c, 0x5a50u);
    push32(c, 0x5a55u); f_00005a60(c); X86_RET(c, 0x5a55u);
L_5a55:
    X86_TICK(c, 5);
    // 005a55  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5a55u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
L_5a5c:
    X86_TICK(c, 10);
    // 005a5c  ret 
    X86_AT(c, 0x5a5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x579eu, "ran off the end of a function");
}
void f_000057a1(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0057a1  cmp dx, ax
    X86_AT(c, 0x57a1u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0057a4  jge 0x57a8
    X86_AT(c, 0x57a4u);
    if (x86_cc(c, 13)) { goto L_57a8; }
    X86_TICK(c, 3);
    // 0057a6  xchg dx, ax
    X86_AT(c, 0x57a6u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_57a8:
    X86_TICK(c, 12);
    // 0057a8  cmp word ptr gs:[ebp + 0x28], dx
    X86_AT(c, 0x57a8u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[2] & 0xFFFFu), 0, 2);
    // 0057ad  jg 0x5a5c
    X86_AT(c, 0x57adu);
    if (x86_cc(c, 15)) { goto L_5a5c; }
    X86_TICK(c, 12);
    // 0057b3  cmp word ptr gs:[ebp + 0x2c], ax
    X86_AT(c, 0x57b3u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 0057b8  jl 0x5a5c
    X86_AT(c, 0x57b8u);
    if (x86_cc(c, 12)) { goto L_5a5c; }
    X86_TICK(c, 17);
    // 0057be  mov word ptr gs:[ebp + 0x1c4], ax
    X86_AT(c, 0x57beu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), (c.r[0] & 0xFFFFu));
    // 0057c6  mov word ptr gs:[ebp + 0x1c8], dx
    X86_AT(c, 0x57c6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), (c.r[2] & 0xFFFFu));
    // 0057ce  shr eax, 0x10
    X86_AT(c, 0x57ceu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0057d1  shr edx, 0x10
    X86_AT(c, 0x57d1u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0057d4  cmp dx, ax
    X86_AT(c, 0x57d4u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0057d7  jge 0x57db
    X86_AT(c, 0x57d7u);
    if (x86_cc(c, 13)) { goto L_57db; }
    X86_TICK(c, 3);
    // 0057d9  xchg dx, ax
    X86_AT(c, 0x57d9u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_57db:
    X86_TICK(c, 12);
    // 0057db  cmp word ptr gs:[ebp + 0x2a], dx
    X86_AT(c, 0x57dbu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[2] & 0xFFFFu), 0, 2);
    // 0057e0  jg 0x5a5c
    X86_AT(c, 0x57e0u);
    if (x86_cc(c, 15)) { goto L_5a5c; }
    X86_TICK(c, 12);
    // 0057e6  cmp word ptr gs:[ebp + 0x2e], ax
    X86_AT(c, 0x57e6u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 0057eb  jl 0x5a5c
    X86_AT(c, 0x57ebu);
    if (x86_cc(c, 12)) { goto L_5a5c; }
    X86_TICK(c, 20);
    // 0057f1  mov word ptr gs:[ebp + 0x1c6], ax
    X86_AT(c, 0x57f1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u)), (c.r[0] & 0xFFFFu));
    // 0057f9  mov word ptr gs:[ebp + 0x1ca], dx
    X86_AT(c, 0x57f9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[2] & 0xFFFFu));
    // 005801  mov eax, dword ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x5801u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)));
    // 005808  cmp word ptr gs:[ebp + 0x28], ax
    X86_AT(c, 0x5808u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00580d  jge 0x5814
    X86_AT(c, 0x580du);
    if (x86_cc(c, 13)) { goto L_5814; }
    X86_TICK(c, 2);
    // 00580f  mov word ptr gs:[ebp + 0x28], ax
    X86_AT(c, 0x580fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), (c.r[0] & 0xFFFFu));
L_5814:
    X86_TICK(c, 15);
    // 005814  shr eax, 0x10
    X86_AT(c, 0x5814u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 005817  cmp word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x5817u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00581c  jge 0x5823
    X86_AT(c, 0x581cu);
    if (x86_cc(c, 13)) { goto L_5823; }
    X86_TICK(c, 2);
    // 00581e  mov word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x581eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au)), (c.r[0] & 0xFFFFu));
L_5823:
    X86_TICK(c, 16);
    // 005823  mov eax, dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x5823u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 00582a  cmp word ptr gs:[ebp + 0x2c], ax
    X86_AT(c, 0x582au);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00582f  jle 0x5836
    X86_AT(c, 0x582fu);
    if (x86_cc(c, 14)) { goto L_5836; }
    X86_TICK(c, 2);
    // 005831  mov word ptr gs:[ebp + 0x2c], ax
    X86_AT(c, 0x5831u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), (c.r[0] & 0xFFFFu));
L_5836:
    X86_TICK(c, 15);
    // 005836  shr eax, 0x10
    X86_AT(c, 0x5836u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 005839  cmp word ptr gs:[ebp + 0x2e], ax
    X86_AT(c, 0x5839u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00583e  jle 0x5845
    X86_AT(c, 0x583eu);
    if (x86_cc(c, 14)) { goto L_5845; }
    X86_TICK(c, 2);
    // 005840  mov word ptr gs:[ebp + 0x2e], ax
    X86_AT(c, 0x5840u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu)), (c.r[0] & 0xFFFFu));
L_5845:
    X86_TICK(c, 105);
    // 005845  push dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5845u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))); push32(c, v); }
    // 00584c  mov dword ptr gs:[ebp + 0x104], 0
    X86_AT(c, 0x584cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), 0x0u);
    // 005857  movzx eax, word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x5857u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 00585f  sub ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x585fu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))), 0, 2)); }
    // 005867  inc eax
    X86_AT(c, 0x5867u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 005868  shr eax, 3
    X86_AT(c, 0x5868u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 00586b  inc eax
    X86_AT(c, 0x586bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 00586c  mul dword ptr gs:[ebp + 0x24]
    X86_AT(c, 0x586cu);
    x86_mul(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u))), 4);
    // 005870  mov dword ptr gs:[ebp + 0x3a0], eax
    X86_AT(c, 0x5870u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A0u)), c.r[0]);
    // 005877  sub esp, eax
    X86_AT(c, 0x5877u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[0], 0, 4); }
    // 005879  mov dword ptr gs:[ebp + 0x398], esp
    X86_AT(c, 0x5879u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x398u)), c.r[4]);
    // 005880  mov word ptr gs:[ebp + 0x39c], ss
    X86_AT(c, 0x5880u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x39Cu)), (uint32_t)c.sreg[2]);
    // 005887  mov bx, word ptr gs:[ebp + 0x1c6]
    X86_AT(c, 0x5887u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u))));
    // 00588f  mov dx, word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0x588fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu))));
    // 005897  movzx ecx, dx
    X86_AT(c, 0x5897u);
    c.r[1] = (c.r[2] & 0xFFFFu);
    // 00589a  sub cx, bx
    X86_AT(c, 0x589au);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00589d  inc ecx
    X86_AT(c, 0x589du);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 00589e  push ecx
    X86_AT(c, 0x589eu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00589f  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x589fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0058a7  neg ax
    X86_AT(c, 0x58a7u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 0058aa  or ah, 0x40
    X86_AT(c, 0x58aau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v | 0x40u, 1)); }
    // 0058ad  sar ax, 0xe
    X86_AT(c, 0x58adu);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 7, v, 0xEu, 2, w); if (w) s16(c, 0, r); }
    // 0058b1  mov word ptr gs:[ebp + 0x45c], ax
    X86_AT(c, 0x58b1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu)), (c.r[0] & 0xFFFFu));
    // 0058b9  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x58b9u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0058bd  neg eax
    X86_AT(c, 0x58bdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 0058bf  movsx ecx, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x58bfu);
    c.r[1] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u)));
    // 0058c7  test ecx, ecx
    X86_AT(c, 0x58c7u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0058c9  jg 0x58d2
    X86_AT(c, 0x58c9u);
    if (x86_cc(c, 15)) { goto L_58d2; }
    X86_TICK(c, 6);
    // 0058cb  mov dx, bx
    X86_AT(c, 0x58cbu);
    s16(c, 2, (c.r[3] & 0xFFFFu));
    // 0058ce  neg eax
    X86_AT(c, 0x58ceu);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 0058d0  neg ecx
    X86_AT(c, 0x58d0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_neg(c, v, 4); }
L_58d2:
    X86_TICK(c, 29);
    // 0058d2  mov dword ptr gs:[ebp + 0x458], eax
    X86_AT(c, 0x58d2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)), c.r[0]);
    // 0058d9  sub dx, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x58d9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))), 0, 2)); }
    // 0058e1  mov word ptr gs:[ebp + 0x226], dx
    X86_AT(c, 0x58e1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[2] & 0xFFFFu));
    // 0058e9  sub dword ptr [esp], ecx
    X86_AT(c, 0x58e9u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[1], 0, 4)); }
    // 0058ec  cmp dword ptr [esp], 0
    X86_AT(c, 0x58ecu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x0u, 0, 4);
    // 0058f0  jle 0x5a22
    X86_AT(c, 0x58f0u);
    if (x86_cc(c, 14)) { goto L_5a22; }
    X86_TICK(c, 102);
    // 0058f6  mov ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x58f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))));
    // 0058fe  add ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x58feu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), 0, 2)); }
    // 005906  mov word ptr gs:[ebp + 0x450], ax
    X86_AT(c, 0x5906u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)), (c.r[0] & 0xFFFFu));
    // 00590e  mov ax, word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x590eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u))));
    // 005916  add ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x5916u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), 0, 2)); }
    // 00591e  mov word ptr gs:[ebp + 0x452], ax
    X86_AT(c, 0x591eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x452u)), (c.r[0] & 0xFFFFu));
    // 005926  movzx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x5926u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00592e  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x592eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 005933  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x5933u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 005937  mov dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0x5937u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)), c.r[0]);
    // 00593e  movzx eax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x593eu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u)));
    // 005946  add ax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x5946u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))), 0, 2)); }
    // 00594e  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x594eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 005953  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x5953u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 005957  mov dword ptr gs:[ebp + 0x454], eax
    X86_AT(c, 0x5957u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)), c.r[0]);
L_595e:
    X86_TICK(c, 35);
    // 00595e  mov ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x595eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))));
    // 005966  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x5966u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 00596e  mov ax, word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x596eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u))));
    // 005976  mov word ptr gs:[ebp + 0x224], ax
    X86_AT(c, 0x5976u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[0] & 0xFFFFu));
    // 00597e  mov eax, dword ptr gs:[ebp + 0x44c]
    X86_AT(c, 0x597eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)));
    // 005985  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x5985u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00598c  mov ds, word ptr gs:[ebp + 4]
    X86_AT(c, 0x598cu);
    x86_load_seg(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 005990  les edi, fword ptr gs:[ebp + 0x398]
    X86_AT(c, 0x5990u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x398u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[7] = o; }
    // 005997  call 0x8b54
    X86_AT(c, 0x5997u);
    push32(c, 0x599cu); f_00008b54(c); X86_RET(c, 0x599cu);
    X86_TICK(c, 50);
    // 00599c  push word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x599cu);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))); push16(c, v); }
    // 0059a4  mov eax, dword ptr gs:[ebp + 0x450]
    X86_AT(c, 0x59a4u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)));
    // 0059ab  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x59abu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 0059b3  shr eax, 0x10
    X86_AT(c, 0x59b3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0059b6  mov word ptr gs:[ebp + 0x224], ax
    X86_AT(c, 0x59b6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[0] & 0xFFFFu));
    // 0059be  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x59beu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0059c6  add word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x59c6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0059ce  mov eax, dword ptr gs:[ebp + 0x454]
    X86_AT(c, 0x59ceu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)));
    // 0059d5  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x59d5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 0059dc  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x59dcu);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 0059e0  lds esi, fword ptr gs:[ebp + 0x398]
    X86_AT(c, 0x59e0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x398u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 0059e7  call 0x8f10
    X86_AT(c, 0x59e7u);
    push32(c, 0x59ecu); f_00008f10(c); X86_RET(c, 0x59ecu);
    X86_TICK(c, 45);
    // 0059ec  pop word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x59ecu);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), v); }
    // 0059f4  mov ax, word ptr gs:[ebp + 0x45c]
    X86_AT(c, 0x59f4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu))));
    // 0059fc  add word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x59fcu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 005a04  mov eax, dword ptr gs:[ebp + 0x458]
    X86_AT(c, 0x5a04u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)));
    // 005a0b  add dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0x5a0bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 005a12  add dword ptr gs:[ebp + 0x454], eax
    X86_AT(c, 0x5a12u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 005a19  dec dword ptr [esp]
    X86_AT(c, 0x5a19u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 005a1c  jne 0x595e
    X86_AT(c, 0x5a1cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x595eu); goto L_595e; }
L_5a22:
    X86_TICK(c, 20);
    // 005a22  add esp, 4
    X86_AT(c, 0x5a22u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 005a25  add esp, dword ptr gs:[ebp + 0x3a0]
    X86_AT(c, 0x5a25u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A0u))), 0, 4); }
    // 005a2c  cmp byte ptr gs:[ebp + 0x3a9], 1
    X86_AT(c, 0x5a2cu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A9u))), 0x1u, 0, 1);
    // 005a34  jne 0x5a55
    X86_AT(c, 0x5a34u);
    if (x86_cc(c, 5)) { goto L_5a55; }
    X86_TICK(c, 9);
    // 005a36  mov byte ptr gs:[ebp + 0x104], 1
    X86_AT(c, 0x5a36u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), 0x1u);
    // 005a3e  call 0x36a0
    X86_AT(c, 0x5a3eu);
    push32(c, 0x5a43u); f_000036a0(c); X86_RET(c, 0x5a43u);
    X86_TICK(c, 7);
    // 005a43  call 0x6120
    X86_AT(c, 0x5a43u);
    push32(c, 0x5a48u); f_00006120(c); X86_RET(c, 0x5a48u);
    X86_TICK(c, 9);
    // 005a48  mov byte ptr gs:[ebp + 0x220], 0x13
    X86_AT(c, 0x5a48u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x13u);
    // 005a50  call 0x5a60
    X86_AT(c, 0x5a50u);
    push32(c, 0x5a55u); f_00005a60(c); X86_RET(c, 0x5a55u);
L_5a55:
    X86_TICK(c, 5);
    // 005a55  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5a55u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
L_5a5c:
    X86_TICK(c, 10);
    // 005a5c  ret 
    X86_AT(c, 0x5a5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x57a1u, "ran off the end of a function");
}
void f_000057a4(X86Cpu& c) {
    X86_TICK(c, 5);
    // 0057a4  jge 0x57a8
    X86_AT(c, 0x57a4u);
    if (x86_cc(c, 13)) { goto L_57a8; }
    X86_TICK(c, 3);
    // 0057a6  xchg dx, ax
    X86_AT(c, 0x57a6u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_57a8:
    X86_TICK(c, 12);
    // 0057a8  cmp word ptr gs:[ebp + 0x28], dx
    X86_AT(c, 0x57a8u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[2] & 0xFFFFu), 0, 2);
    // 0057ad  jg 0x5a5c
    X86_AT(c, 0x57adu);
    if (x86_cc(c, 15)) { goto L_5a5c; }
    X86_TICK(c, 12);
    // 0057b3  cmp word ptr gs:[ebp + 0x2c], ax
    X86_AT(c, 0x57b3u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 0057b8  jl 0x5a5c
    X86_AT(c, 0x57b8u);
    if (x86_cc(c, 12)) { goto L_5a5c; }
    X86_TICK(c, 17);
    // 0057be  mov word ptr gs:[ebp + 0x1c4], ax
    X86_AT(c, 0x57beu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), (c.r[0] & 0xFFFFu));
    // 0057c6  mov word ptr gs:[ebp + 0x1c8], dx
    X86_AT(c, 0x57c6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), (c.r[2] & 0xFFFFu));
    // 0057ce  shr eax, 0x10
    X86_AT(c, 0x57ceu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0057d1  shr edx, 0x10
    X86_AT(c, 0x57d1u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0057d4  cmp dx, ax
    X86_AT(c, 0x57d4u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0057d7  jge 0x57db
    X86_AT(c, 0x57d7u);
    if (x86_cc(c, 13)) { goto L_57db; }
    X86_TICK(c, 3);
    // 0057d9  xchg dx, ax
    X86_AT(c, 0x57d9u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_57db:
    X86_TICK(c, 12);
    // 0057db  cmp word ptr gs:[ebp + 0x2a], dx
    X86_AT(c, 0x57dbu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[2] & 0xFFFFu), 0, 2);
    // 0057e0  jg 0x5a5c
    X86_AT(c, 0x57e0u);
    if (x86_cc(c, 15)) { goto L_5a5c; }
    X86_TICK(c, 12);
    // 0057e6  cmp word ptr gs:[ebp + 0x2e], ax
    X86_AT(c, 0x57e6u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 0057eb  jl 0x5a5c
    X86_AT(c, 0x57ebu);
    if (x86_cc(c, 12)) { goto L_5a5c; }
    X86_TICK(c, 20);
    // 0057f1  mov word ptr gs:[ebp + 0x1c6], ax
    X86_AT(c, 0x57f1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u)), (c.r[0] & 0xFFFFu));
    // 0057f9  mov word ptr gs:[ebp + 0x1ca], dx
    X86_AT(c, 0x57f9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[2] & 0xFFFFu));
    // 005801  mov eax, dword ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x5801u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)));
    // 005808  cmp word ptr gs:[ebp + 0x28], ax
    X86_AT(c, 0x5808u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00580d  jge 0x5814
    X86_AT(c, 0x580du);
    if (x86_cc(c, 13)) { goto L_5814; }
    X86_TICK(c, 2);
    // 00580f  mov word ptr gs:[ebp + 0x28], ax
    X86_AT(c, 0x580fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), (c.r[0] & 0xFFFFu));
L_5814:
    X86_TICK(c, 15);
    // 005814  shr eax, 0x10
    X86_AT(c, 0x5814u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 005817  cmp word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x5817u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00581c  jge 0x5823
    X86_AT(c, 0x581cu);
    if (x86_cc(c, 13)) { goto L_5823; }
    X86_TICK(c, 2);
    // 00581e  mov word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x581eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au)), (c.r[0] & 0xFFFFu));
L_5823:
    X86_TICK(c, 16);
    // 005823  mov eax, dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x5823u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 00582a  cmp word ptr gs:[ebp + 0x2c], ax
    X86_AT(c, 0x582au);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00582f  jle 0x5836
    X86_AT(c, 0x582fu);
    if (x86_cc(c, 14)) { goto L_5836; }
    X86_TICK(c, 2);
    // 005831  mov word ptr gs:[ebp + 0x2c], ax
    X86_AT(c, 0x5831u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), (c.r[0] & 0xFFFFu));
L_5836:
    X86_TICK(c, 15);
    // 005836  shr eax, 0x10
    X86_AT(c, 0x5836u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 005839  cmp word ptr gs:[ebp + 0x2e], ax
    X86_AT(c, 0x5839u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00583e  jle 0x5845
    X86_AT(c, 0x583eu);
    if (x86_cc(c, 14)) { goto L_5845; }
    X86_TICK(c, 2);
    // 005840  mov word ptr gs:[ebp + 0x2e], ax
    X86_AT(c, 0x5840u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu)), (c.r[0] & 0xFFFFu));
L_5845:
    X86_TICK(c, 105);
    // 005845  push dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5845u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))); push32(c, v); }
    // 00584c  mov dword ptr gs:[ebp + 0x104], 0
    X86_AT(c, 0x584cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), 0x0u);
    // 005857  movzx eax, word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x5857u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 00585f  sub ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x585fu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))), 0, 2)); }
    // 005867  inc eax
    X86_AT(c, 0x5867u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 005868  shr eax, 3
    X86_AT(c, 0x5868u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 00586b  inc eax
    X86_AT(c, 0x586bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 00586c  mul dword ptr gs:[ebp + 0x24]
    X86_AT(c, 0x586cu);
    x86_mul(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u))), 4);
    // 005870  mov dword ptr gs:[ebp + 0x3a0], eax
    X86_AT(c, 0x5870u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A0u)), c.r[0]);
    // 005877  sub esp, eax
    X86_AT(c, 0x5877u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[0], 0, 4); }
    // 005879  mov dword ptr gs:[ebp + 0x398], esp
    X86_AT(c, 0x5879u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x398u)), c.r[4]);
    // 005880  mov word ptr gs:[ebp + 0x39c], ss
    X86_AT(c, 0x5880u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x39Cu)), (uint32_t)c.sreg[2]);
    // 005887  mov bx, word ptr gs:[ebp + 0x1c6]
    X86_AT(c, 0x5887u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u))));
    // 00588f  mov dx, word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0x588fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu))));
    // 005897  movzx ecx, dx
    X86_AT(c, 0x5897u);
    c.r[1] = (c.r[2] & 0xFFFFu);
    // 00589a  sub cx, bx
    X86_AT(c, 0x589au);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00589d  inc ecx
    X86_AT(c, 0x589du);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 00589e  push ecx
    X86_AT(c, 0x589eu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00589f  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x589fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0058a7  neg ax
    X86_AT(c, 0x58a7u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 0058aa  or ah, 0x40
    X86_AT(c, 0x58aau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v | 0x40u, 1)); }
    // 0058ad  sar ax, 0xe
    X86_AT(c, 0x58adu);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 7, v, 0xEu, 2, w); if (w) s16(c, 0, r); }
    // 0058b1  mov word ptr gs:[ebp + 0x45c], ax
    X86_AT(c, 0x58b1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu)), (c.r[0] & 0xFFFFu));
    // 0058b9  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x58b9u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0058bd  neg eax
    X86_AT(c, 0x58bdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 0058bf  movsx ecx, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x58bfu);
    c.r[1] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u)));
    // 0058c7  test ecx, ecx
    X86_AT(c, 0x58c7u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0058c9  jg 0x58d2
    X86_AT(c, 0x58c9u);
    if (x86_cc(c, 15)) { goto L_58d2; }
    X86_TICK(c, 6);
    // 0058cb  mov dx, bx
    X86_AT(c, 0x58cbu);
    s16(c, 2, (c.r[3] & 0xFFFFu));
    // 0058ce  neg eax
    X86_AT(c, 0x58ceu);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 0058d0  neg ecx
    X86_AT(c, 0x58d0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_neg(c, v, 4); }
L_58d2:
    X86_TICK(c, 29);
    // 0058d2  mov dword ptr gs:[ebp + 0x458], eax
    X86_AT(c, 0x58d2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)), c.r[0]);
    // 0058d9  sub dx, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x58d9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))), 0, 2)); }
    // 0058e1  mov word ptr gs:[ebp + 0x226], dx
    X86_AT(c, 0x58e1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[2] & 0xFFFFu));
    // 0058e9  sub dword ptr [esp], ecx
    X86_AT(c, 0x58e9u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[1], 0, 4)); }
    // 0058ec  cmp dword ptr [esp], 0
    X86_AT(c, 0x58ecu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x0u, 0, 4);
    // 0058f0  jle 0x5a22
    X86_AT(c, 0x58f0u);
    if (x86_cc(c, 14)) { goto L_5a22; }
    X86_TICK(c, 102);
    // 0058f6  mov ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x58f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))));
    // 0058fe  add ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x58feu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), 0, 2)); }
    // 005906  mov word ptr gs:[ebp + 0x450], ax
    X86_AT(c, 0x5906u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)), (c.r[0] & 0xFFFFu));
    // 00590e  mov ax, word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x590eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u))));
    // 005916  add ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x5916u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), 0, 2)); }
    // 00591e  mov word ptr gs:[ebp + 0x452], ax
    X86_AT(c, 0x591eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x452u)), (c.r[0] & 0xFFFFu));
    // 005926  movzx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x5926u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00592e  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x592eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 005933  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x5933u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 005937  mov dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0x5937u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)), c.r[0]);
    // 00593e  movzx eax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x593eu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u)));
    // 005946  add ax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x5946u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))), 0, 2)); }
    // 00594e  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x594eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 005953  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x5953u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 005957  mov dword ptr gs:[ebp + 0x454], eax
    X86_AT(c, 0x5957u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)), c.r[0]);
L_595e:
    X86_TICK(c, 35);
    // 00595e  mov ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x595eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))));
    // 005966  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x5966u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 00596e  mov ax, word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x596eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u))));
    // 005976  mov word ptr gs:[ebp + 0x224], ax
    X86_AT(c, 0x5976u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[0] & 0xFFFFu));
    // 00597e  mov eax, dword ptr gs:[ebp + 0x44c]
    X86_AT(c, 0x597eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)));
    // 005985  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x5985u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00598c  mov ds, word ptr gs:[ebp + 4]
    X86_AT(c, 0x598cu);
    x86_load_seg(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 005990  les edi, fword ptr gs:[ebp + 0x398]
    X86_AT(c, 0x5990u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x398u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[7] = o; }
    // 005997  call 0x8b54
    X86_AT(c, 0x5997u);
    push32(c, 0x599cu); f_00008b54(c); X86_RET(c, 0x599cu);
    X86_TICK(c, 50);
    // 00599c  push word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x599cu);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))); push16(c, v); }
    // 0059a4  mov eax, dword ptr gs:[ebp + 0x450]
    X86_AT(c, 0x59a4u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)));
    // 0059ab  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x59abu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 0059b3  shr eax, 0x10
    X86_AT(c, 0x59b3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0059b6  mov word ptr gs:[ebp + 0x224], ax
    X86_AT(c, 0x59b6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[0] & 0xFFFFu));
    // 0059be  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x59beu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0059c6  add word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x59c6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0059ce  mov eax, dword ptr gs:[ebp + 0x454]
    X86_AT(c, 0x59ceu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)));
    // 0059d5  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x59d5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 0059dc  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x59dcu);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 0059e0  lds esi, fword ptr gs:[ebp + 0x398]
    X86_AT(c, 0x59e0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x398u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 0059e7  call 0x8f10
    X86_AT(c, 0x59e7u);
    push32(c, 0x59ecu); f_00008f10(c); X86_RET(c, 0x59ecu);
    X86_TICK(c, 45);
    // 0059ec  pop word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x59ecu);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), v); }
    // 0059f4  mov ax, word ptr gs:[ebp + 0x45c]
    X86_AT(c, 0x59f4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu))));
    // 0059fc  add word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x59fcu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 005a04  mov eax, dword ptr gs:[ebp + 0x458]
    X86_AT(c, 0x5a04u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)));
    // 005a0b  add dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0x5a0bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 005a12  add dword ptr gs:[ebp + 0x454], eax
    X86_AT(c, 0x5a12u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 005a19  dec dword ptr [esp]
    X86_AT(c, 0x5a19u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 005a1c  jne 0x595e
    X86_AT(c, 0x5a1cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x595eu); goto L_595e; }
L_5a22:
    X86_TICK(c, 20);
    // 005a22  add esp, 4
    X86_AT(c, 0x5a22u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 005a25  add esp, dword ptr gs:[ebp + 0x3a0]
    X86_AT(c, 0x5a25u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A0u))), 0, 4); }
    // 005a2c  cmp byte ptr gs:[ebp + 0x3a9], 1
    X86_AT(c, 0x5a2cu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A9u))), 0x1u, 0, 1);
    // 005a34  jne 0x5a55
    X86_AT(c, 0x5a34u);
    if (x86_cc(c, 5)) { goto L_5a55; }
    X86_TICK(c, 9);
    // 005a36  mov byte ptr gs:[ebp + 0x104], 1
    X86_AT(c, 0x5a36u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), 0x1u);
    // 005a3e  call 0x36a0
    X86_AT(c, 0x5a3eu);
    push32(c, 0x5a43u); f_000036a0(c); X86_RET(c, 0x5a43u);
    X86_TICK(c, 7);
    // 005a43  call 0x6120
    X86_AT(c, 0x5a43u);
    push32(c, 0x5a48u); f_00006120(c); X86_RET(c, 0x5a48u);
    X86_TICK(c, 9);
    // 005a48  mov byte ptr gs:[ebp + 0x220], 0x13
    X86_AT(c, 0x5a48u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x13u);
    // 005a50  call 0x5a60
    X86_AT(c, 0x5a50u);
    push32(c, 0x5a55u); f_00005a60(c); X86_RET(c, 0x5a55u);
L_5a55:
    X86_TICK(c, 5);
    // 005a55  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5a55u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
L_5a5c:
    X86_TICK(c, 10);
    // 005a5c  ret 
    X86_AT(c, 0x5a5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x57a4u, "ran off the end of a function");
}
void f_000057a8(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0057a8  cmp word ptr gs:[ebp + 0x28], dx
    X86_AT(c, 0x57a8u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[2] & 0xFFFFu), 0, 2);
    // 0057ad  jg 0x5a5c
    X86_AT(c, 0x57adu);
    if (x86_cc(c, 15)) { goto L_5a5c; }
    X86_TICK(c, 12);
    // 0057b3  cmp word ptr gs:[ebp + 0x2c], ax
    X86_AT(c, 0x57b3u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 0057b8  jl 0x5a5c
    X86_AT(c, 0x57b8u);
    if (x86_cc(c, 12)) { goto L_5a5c; }
    X86_TICK(c, 17);
    // 0057be  mov word ptr gs:[ebp + 0x1c4], ax
    X86_AT(c, 0x57beu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), (c.r[0] & 0xFFFFu));
    // 0057c6  mov word ptr gs:[ebp + 0x1c8], dx
    X86_AT(c, 0x57c6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), (c.r[2] & 0xFFFFu));
    // 0057ce  shr eax, 0x10
    X86_AT(c, 0x57ceu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0057d1  shr edx, 0x10
    X86_AT(c, 0x57d1u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0057d4  cmp dx, ax
    X86_AT(c, 0x57d4u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0057d7  jge 0x57db
    X86_AT(c, 0x57d7u);
    if (x86_cc(c, 13)) { goto L_57db; }
    X86_TICK(c, 3);
    // 0057d9  xchg dx, ax
    X86_AT(c, 0x57d9u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_57db:
    X86_TICK(c, 12);
    // 0057db  cmp word ptr gs:[ebp + 0x2a], dx
    X86_AT(c, 0x57dbu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[2] & 0xFFFFu), 0, 2);
    // 0057e0  jg 0x5a5c
    X86_AT(c, 0x57e0u);
    if (x86_cc(c, 15)) { goto L_5a5c; }
    X86_TICK(c, 12);
    // 0057e6  cmp word ptr gs:[ebp + 0x2e], ax
    X86_AT(c, 0x57e6u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 0057eb  jl 0x5a5c
    X86_AT(c, 0x57ebu);
    if (x86_cc(c, 12)) { goto L_5a5c; }
    X86_TICK(c, 20);
    // 0057f1  mov word ptr gs:[ebp + 0x1c6], ax
    X86_AT(c, 0x57f1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u)), (c.r[0] & 0xFFFFu));
    // 0057f9  mov word ptr gs:[ebp + 0x1ca], dx
    X86_AT(c, 0x57f9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[2] & 0xFFFFu));
    // 005801  mov eax, dword ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x5801u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)));
    // 005808  cmp word ptr gs:[ebp + 0x28], ax
    X86_AT(c, 0x5808u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00580d  jge 0x5814
    X86_AT(c, 0x580du);
    if (x86_cc(c, 13)) { goto L_5814; }
    X86_TICK(c, 2);
    // 00580f  mov word ptr gs:[ebp + 0x28], ax
    X86_AT(c, 0x580fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), (c.r[0] & 0xFFFFu));
L_5814:
    X86_TICK(c, 15);
    // 005814  shr eax, 0x10
    X86_AT(c, 0x5814u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 005817  cmp word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x5817u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00581c  jge 0x5823
    X86_AT(c, 0x581cu);
    if (x86_cc(c, 13)) { goto L_5823; }
    X86_TICK(c, 2);
    // 00581e  mov word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x581eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au)), (c.r[0] & 0xFFFFu));
L_5823:
    X86_TICK(c, 16);
    // 005823  mov eax, dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x5823u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 00582a  cmp word ptr gs:[ebp + 0x2c], ax
    X86_AT(c, 0x582au);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00582f  jle 0x5836
    X86_AT(c, 0x582fu);
    if (x86_cc(c, 14)) { goto L_5836; }
    X86_TICK(c, 2);
    // 005831  mov word ptr gs:[ebp + 0x2c], ax
    X86_AT(c, 0x5831u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), (c.r[0] & 0xFFFFu));
L_5836:
    X86_TICK(c, 15);
    // 005836  shr eax, 0x10
    X86_AT(c, 0x5836u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 005839  cmp word ptr gs:[ebp + 0x2e], ax
    X86_AT(c, 0x5839u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00583e  jle 0x5845
    X86_AT(c, 0x583eu);
    if (x86_cc(c, 14)) { goto L_5845; }
    X86_TICK(c, 2);
    // 005840  mov word ptr gs:[ebp + 0x2e], ax
    X86_AT(c, 0x5840u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu)), (c.r[0] & 0xFFFFu));
L_5845:
    X86_TICK(c, 105);
    // 005845  push dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5845u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))); push32(c, v); }
    // 00584c  mov dword ptr gs:[ebp + 0x104], 0
    X86_AT(c, 0x584cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), 0x0u);
    // 005857  movzx eax, word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x5857u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 00585f  sub ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x585fu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))), 0, 2)); }
    // 005867  inc eax
    X86_AT(c, 0x5867u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 005868  shr eax, 3
    X86_AT(c, 0x5868u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 00586b  inc eax
    X86_AT(c, 0x586bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 00586c  mul dword ptr gs:[ebp + 0x24]
    X86_AT(c, 0x586cu);
    x86_mul(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u))), 4);
    // 005870  mov dword ptr gs:[ebp + 0x3a0], eax
    X86_AT(c, 0x5870u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A0u)), c.r[0]);
    // 005877  sub esp, eax
    X86_AT(c, 0x5877u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[0], 0, 4); }
    // 005879  mov dword ptr gs:[ebp + 0x398], esp
    X86_AT(c, 0x5879u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x398u)), c.r[4]);
    // 005880  mov word ptr gs:[ebp + 0x39c], ss
    X86_AT(c, 0x5880u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x39Cu)), (uint32_t)c.sreg[2]);
    // 005887  mov bx, word ptr gs:[ebp + 0x1c6]
    X86_AT(c, 0x5887u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u))));
    // 00588f  mov dx, word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0x588fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu))));
    // 005897  movzx ecx, dx
    X86_AT(c, 0x5897u);
    c.r[1] = (c.r[2] & 0xFFFFu);
    // 00589a  sub cx, bx
    X86_AT(c, 0x589au);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00589d  inc ecx
    X86_AT(c, 0x589du);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 00589e  push ecx
    X86_AT(c, 0x589eu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00589f  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x589fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0058a7  neg ax
    X86_AT(c, 0x58a7u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 0058aa  or ah, 0x40
    X86_AT(c, 0x58aau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v | 0x40u, 1)); }
    // 0058ad  sar ax, 0xe
    X86_AT(c, 0x58adu);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 7, v, 0xEu, 2, w); if (w) s16(c, 0, r); }
    // 0058b1  mov word ptr gs:[ebp + 0x45c], ax
    X86_AT(c, 0x58b1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu)), (c.r[0] & 0xFFFFu));
    // 0058b9  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x58b9u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0058bd  neg eax
    X86_AT(c, 0x58bdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 0058bf  movsx ecx, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x58bfu);
    c.r[1] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u)));
    // 0058c7  test ecx, ecx
    X86_AT(c, 0x58c7u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0058c9  jg 0x58d2
    X86_AT(c, 0x58c9u);
    if (x86_cc(c, 15)) { goto L_58d2; }
    X86_TICK(c, 6);
    // 0058cb  mov dx, bx
    X86_AT(c, 0x58cbu);
    s16(c, 2, (c.r[3] & 0xFFFFu));
    // 0058ce  neg eax
    X86_AT(c, 0x58ceu);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 0058d0  neg ecx
    X86_AT(c, 0x58d0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_neg(c, v, 4); }
L_58d2:
    X86_TICK(c, 29);
    // 0058d2  mov dword ptr gs:[ebp + 0x458], eax
    X86_AT(c, 0x58d2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)), c.r[0]);
    // 0058d9  sub dx, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x58d9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))), 0, 2)); }
    // 0058e1  mov word ptr gs:[ebp + 0x226], dx
    X86_AT(c, 0x58e1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[2] & 0xFFFFu));
    // 0058e9  sub dword ptr [esp], ecx
    X86_AT(c, 0x58e9u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[1], 0, 4)); }
    // 0058ec  cmp dword ptr [esp], 0
    X86_AT(c, 0x58ecu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x0u, 0, 4);
    // 0058f0  jle 0x5a22
    X86_AT(c, 0x58f0u);
    if (x86_cc(c, 14)) { goto L_5a22; }
    X86_TICK(c, 102);
    // 0058f6  mov ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x58f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))));
    // 0058fe  add ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x58feu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), 0, 2)); }
    // 005906  mov word ptr gs:[ebp + 0x450], ax
    X86_AT(c, 0x5906u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)), (c.r[0] & 0xFFFFu));
    // 00590e  mov ax, word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x590eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u))));
    // 005916  add ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x5916u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), 0, 2)); }
    // 00591e  mov word ptr gs:[ebp + 0x452], ax
    X86_AT(c, 0x591eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x452u)), (c.r[0] & 0xFFFFu));
    // 005926  movzx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x5926u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00592e  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x592eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 005933  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x5933u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 005937  mov dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0x5937u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)), c.r[0]);
    // 00593e  movzx eax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x593eu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u)));
    // 005946  add ax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x5946u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))), 0, 2)); }
    // 00594e  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x594eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 005953  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x5953u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 005957  mov dword ptr gs:[ebp + 0x454], eax
    X86_AT(c, 0x5957u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)), c.r[0]);
L_595e:
    X86_TICK(c, 35);
    // 00595e  mov ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x595eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))));
    // 005966  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x5966u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 00596e  mov ax, word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x596eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u))));
    // 005976  mov word ptr gs:[ebp + 0x224], ax
    X86_AT(c, 0x5976u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[0] & 0xFFFFu));
    // 00597e  mov eax, dword ptr gs:[ebp + 0x44c]
    X86_AT(c, 0x597eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)));
    // 005985  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x5985u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00598c  mov ds, word ptr gs:[ebp + 4]
    X86_AT(c, 0x598cu);
    x86_load_seg(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 005990  les edi, fword ptr gs:[ebp + 0x398]
    X86_AT(c, 0x5990u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x398u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[7] = o; }
    // 005997  call 0x8b54
    X86_AT(c, 0x5997u);
    push32(c, 0x599cu); f_00008b54(c); X86_RET(c, 0x599cu);
    X86_TICK(c, 50);
    // 00599c  push word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x599cu);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))); push16(c, v); }
    // 0059a4  mov eax, dword ptr gs:[ebp + 0x450]
    X86_AT(c, 0x59a4u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)));
    // 0059ab  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x59abu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 0059b3  shr eax, 0x10
    X86_AT(c, 0x59b3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0059b6  mov word ptr gs:[ebp + 0x224], ax
    X86_AT(c, 0x59b6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[0] & 0xFFFFu));
    // 0059be  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x59beu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0059c6  add word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x59c6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0059ce  mov eax, dword ptr gs:[ebp + 0x454]
    X86_AT(c, 0x59ceu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)));
    // 0059d5  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x59d5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 0059dc  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x59dcu);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 0059e0  lds esi, fword ptr gs:[ebp + 0x398]
    X86_AT(c, 0x59e0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x398u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 0059e7  call 0x8f10
    X86_AT(c, 0x59e7u);
    push32(c, 0x59ecu); f_00008f10(c); X86_RET(c, 0x59ecu);
    X86_TICK(c, 45);
    // 0059ec  pop word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x59ecu);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), v); }
    // 0059f4  mov ax, word ptr gs:[ebp + 0x45c]
    X86_AT(c, 0x59f4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu))));
    // 0059fc  add word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x59fcu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 005a04  mov eax, dword ptr gs:[ebp + 0x458]
    X86_AT(c, 0x5a04u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)));
    // 005a0b  add dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0x5a0bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 005a12  add dword ptr gs:[ebp + 0x454], eax
    X86_AT(c, 0x5a12u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 005a19  dec dword ptr [esp]
    X86_AT(c, 0x5a19u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 005a1c  jne 0x595e
    X86_AT(c, 0x5a1cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x595eu); goto L_595e; }
L_5a22:
    X86_TICK(c, 20);
    // 005a22  add esp, 4
    X86_AT(c, 0x5a22u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 005a25  add esp, dword ptr gs:[ebp + 0x3a0]
    X86_AT(c, 0x5a25u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A0u))), 0, 4); }
    // 005a2c  cmp byte ptr gs:[ebp + 0x3a9], 1
    X86_AT(c, 0x5a2cu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A9u))), 0x1u, 0, 1);
    // 005a34  jne 0x5a55
    X86_AT(c, 0x5a34u);
    if (x86_cc(c, 5)) { goto L_5a55; }
    X86_TICK(c, 9);
    // 005a36  mov byte ptr gs:[ebp + 0x104], 1
    X86_AT(c, 0x5a36u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), 0x1u);
    // 005a3e  call 0x36a0
    X86_AT(c, 0x5a3eu);
    push32(c, 0x5a43u); f_000036a0(c); X86_RET(c, 0x5a43u);
    X86_TICK(c, 7);
    // 005a43  call 0x6120
    X86_AT(c, 0x5a43u);
    push32(c, 0x5a48u); f_00006120(c); X86_RET(c, 0x5a48u);
    X86_TICK(c, 9);
    // 005a48  mov byte ptr gs:[ebp + 0x220], 0x13
    X86_AT(c, 0x5a48u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x13u);
    // 005a50  call 0x5a60
    X86_AT(c, 0x5a50u);
    push32(c, 0x5a55u); f_00005a60(c); X86_RET(c, 0x5a55u);
L_5a55:
    X86_TICK(c, 5);
    // 005a55  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5a55u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
L_5a5c:
    X86_TICK(c, 10);
    // 005a5c  ret 
    X86_AT(c, 0x5a5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x57a8u, "ran off the end of a function");
}
void f_000057ad(X86Cpu& c) {
    X86_TICK(c, 5);
    // 0057ad  jg 0x5a5c
    X86_AT(c, 0x57adu);
    if (x86_cc(c, 15)) { goto L_5a5c; }
    X86_TICK(c, 12);
    // 0057b3  cmp word ptr gs:[ebp + 0x2c], ax
    X86_AT(c, 0x57b3u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 0057b8  jl 0x5a5c
    X86_AT(c, 0x57b8u);
    if (x86_cc(c, 12)) { goto L_5a5c; }
    X86_TICK(c, 17);
    // 0057be  mov word ptr gs:[ebp + 0x1c4], ax
    X86_AT(c, 0x57beu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), (c.r[0] & 0xFFFFu));
    // 0057c6  mov word ptr gs:[ebp + 0x1c8], dx
    X86_AT(c, 0x57c6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), (c.r[2] & 0xFFFFu));
    // 0057ce  shr eax, 0x10
    X86_AT(c, 0x57ceu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0057d1  shr edx, 0x10
    X86_AT(c, 0x57d1u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0057d4  cmp dx, ax
    X86_AT(c, 0x57d4u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0057d7  jge 0x57db
    X86_AT(c, 0x57d7u);
    if (x86_cc(c, 13)) { goto L_57db; }
    X86_TICK(c, 3);
    // 0057d9  xchg dx, ax
    X86_AT(c, 0x57d9u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_57db:
    X86_TICK(c, 12);
    // 0057db  cmp word ptr gs:[ebp + 0x2a], dx
    X86_AT(c, 0x57dbu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[2] & 0xFFFFu), 0, 2);
    // 0057e0  jg 0x5a5c
    X86_AT(c, 0x57e0u);
    if (x86_cc(c, 15)) { goto L_5a5c; }
    X86_TICK(c, 12);
    // 0057e6  cmp word ptr gs:[ebp + 0x2e], ax
    X86_AT(c, 0x57e6u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 0057eb  jl 0x5a5c
    X86_AT(c, 0x57ebu);
    if (x86_cc(c, 12)) { goto L_5a5c; }
    X86_TICK(c, 20);
    // 0057f1  mov word ptr gs:[ebp + 0x1c6], ax
    X86_AT(c, 0x57f1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u)), (c.r[0] & 0xFFFFu));
    // 0057f9  mov word ptr gs:[ebp + 0x1ca], dx
    X86_AT(c, 0x57f9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[2] & 0xFFFFu));
    // 005801  mov eax, dword ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x5801u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)));
    // 005808  cmp word ptr gs:[ebp + 0x28], ax
    X86_AT(c, 0x5808u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00580d  jge 0x5814
    X86_AT(c, 0x580du);
    if (x86_cc(c, 13)) { goto L_5814; }
    X86_TICK(c, 2);
    // 00580f  mov word ptr gs:[ebp + 0x28], ax
    X86_AT(c, 0x580fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), (c.r[0] & 0xFFFFu));
L_5814:
    X86_TICK(c, 15);
    // 005814  shr eax, 0x10
    X86_AT(c, 0x5814u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 005817  cmp word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x5817u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00581c  jge 0x5823
    X86_AT(c, 0x581cu);
    if (x86_cc(c, 13)) { goto L_5823; }
    X86_TICK(c, 2);
    // 00581e  mov word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x581eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au)), (c.r[0] & 0xFFFFu));
L_5823:
    X86_TICK(c, 16);
    // 005823  mov eax, dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x5823u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 00582a  cmp word ptr gs:[ebp + 0x2c], ax
    X86_AT(c, 0x582au);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00582f  jle 0x5836
    X86_AT(c, 0x582fu);
    if (x86_cc(c, 14)) { goto L_5836; }
    X86_TICK(c, 2);
    // 005831  mov word ptr gs:[ebp + 0x2c], ax
    X86_AT(c, 0x5831u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), (c.r[0] & 0xFFFFu));
L_5836:
    X86_TICK(c, 15);
    // 005836  shr eax, 0x10
    X86_AT(c, 0x5836u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 005839  cmp word ptr gs:[ebp + 0x2e], ax
    X86_AT(c, 0x5839u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00583e  jle 0x5845
    X86_AT(c, 0x583eu);
    if (x86_cc(c, 14)) { goto L_5845; }
    X86_TICK(c, 2);
    // 005840  mov word ptr gs:[ebp + 0x2e], ax
    X86_AT(c, 0x5840u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu)), (c.r[0] & 0xFFFFu));
L_5845:
    X86_TICK(c, 105);
    // 005845  push dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5845u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))); push32(c, v); }
    // 00584c  mov dword ptr gs:[ebp + 0x104], 0
    X86_AT(c, 0x584cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), 0x0u);
    // 005857  movzx eax, word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x5857u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 00585f  sub ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x585fu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))), 0, 2)); }
    // 005867  inc eax
    X86_AT(c, 0x5867u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 005868  shr eax, 3
    X86_AT(c, 0x5868u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 00586b  inc eax
    X86_AT(c, 0x586bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 00586c  mul dword ptr gs:[ebp + 0x24]
    X86_AT(c, 0x586cu);
    x86_mul(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u))), 4);
    // 005870  mov dword ptr gs:[ebp + 0x3a0], eax
    X86_AT(c, 0x5870u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A0u)), c.r[0]);
    // 005877  sub esp, eax
    X86_AT(c, 0x5877u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[0], 0, 4); }
    // 005879  mov dword ptr gs:[ebp + 0x398], esp
    X86_AT(c, 0x5879u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x398u)), c.r[4]);
    // 005880  mov word ptr gs:[ebp + 0x39c], ss
    X86_AT(c, 0x5880u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x39Cu)), (uint32_t)c.sreg[2]);
    // 005887  mov bx, word ptr gs:[ebp + 0x1c6]
    X86_AT(c, 0x5887u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u))));
    // 00588f  mov dx, word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0x588fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu))));
    // 005897  movzx ecx, dx
    X86_AT(c, 0x5897u);
    c.r[1] = (c.r[2] & 0xFFFFu);
    // 00589a  sub cx, bx
    X86_AT(c, 0x589au);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00589d  inc ecx
    X86_AT(c, 0x589du);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 00589e  push ecx
    X86_AT(c, 0x589eu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00589f  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x589fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0058a7  neg ax
    X86_AT(c, 0x58a7u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 0058aa  or ah, 0x40
    X86_AT(c, 0x58aau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v | 0x40u, 1)); }
    // 0058ad  sar ax, 0xe
    X86_AT(c, 0x58adu);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 7, v, 0xEu, 2, w); if (w) s16(c, 0, r); }
    // 0058b1  mov word ptr gs:[ebp + 0x45c], ax
    X86_AT(c, 0x58b1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu)), (c.r[0] & 0xFFFFu));
    // 0058b9  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x58b9u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0058bd  neg eax
    X86_AT(c, 0x58bdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 0058bf  movsx ecx, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x58bfu);
    c.r[1] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u)));
    // 0058c7  test ecx, ecx
    X86_AT(c, 0x58c7u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0058c9  jg 0x58d2
    X86_AT(c, 0x58c9u);
    if (x86_cc(c, 15)) { goto L_58d2; }
    X86_TICK(c, 6);
    // 0058cb  mov dx, bx
    X86_AT(c, 0x58cbu);
    s16(c, 2, (c.r[3] & 0xFFFFu));
    // 0058ce  neg eax
    X86_AT(c, 0x58ceu);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 0058d0  neg ecx
    X86_AT(c, 0x58d0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_neg(c, v, 4); }
L_58d2:
    X86_TICK(c, 29);
    // 0058d2  mov dword ptr gs:[ebp + 0x458], eax
    X86_AT(c, 0x58d2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)), c.r[0]);
    // 0058d9  sub dx, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x58d9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))), 0, 2)); }
    // 0058e1  mov word ptr gs:[ebp + 0x226], dx
    X86_AT(c, 0x58e1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[2] & 0xFFFFu));
    // 0058e9  sub dword ptr [esp], ecx
    X86_AT(c, 0x58e9u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[1], 0, 4)); }
    // 0058ec  cmp dword ptr [esp], 0
    X86_AT(c, 0x58ecu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x0u, 0, 4);
    // 0058f0  jle 0x5a22
    X86_AT(c, 0x58f0u);
    if (x86_cc(c, 14)) { goto L_5a22; }
    X86_TICK(c, 102);
    // 0058f6  mov ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x58f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))));
    // 0058fe  add ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x58feu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), 0, 2)); }
    // 005906  mov word ptr gs:[ebp + 0x450], ax
    X86_AT(c, 0x5906u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)), (c.r[0] & 0xFFFFu));
    // 00590e  mov ax, word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x590eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u))));
    // 005916  add ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x5916u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), 0, 2)); }
    // 00591e  mov word ptr gs:[ebp + 0x452], ax
    X86_AT(c, 0x591eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x452u)), (c.r[0] & 0xFFFFu));
    // 005926  movzx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x5926u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00592e  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x592eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 005933  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x5933u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 005937  mov dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0x5937u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)), c.r[0]);
    // 00593e  movzx eax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x593eu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u)));
    // 005946  add ax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x5946u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))), 0, 2)); }
    // 00594e  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x594eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 005953  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x5953u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 005957  mov dword ptr gs:[ebp + 0x454], eax
    X86_AT(c, 0x5957u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)), c.r[0]);
L_595e:
    X86_TICK(c, 35);
    // 00595e  mov ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x595eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))));
    // 005966  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x5966u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 00596e  mov ax, word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x596eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u))));
    // 005976  mov word ptr gs:[ebp + 0x224], ax
    X86_AT(c, 0x5976u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[0] & 0xFFFFu));
    // 00597e  mov eax, dword ptr gs:[ebp + 0x44c]
    X86_AT(c, 0x597eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)));
    // 005985  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x5985u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00598c  mov ds, word ptr gs:[ebp + 4]
    X86_AT(c, 0x598cu);
    x86_load_seg(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 005990  les edi, fword ptr gs:[ebp + 0x398]
    X86_AT(c, 0x5990u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x398u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[7] = o; }
    // 005997  call 0x8b54
    X86_AT(c, 0x5997u);
    push32(c, 0x599cu); f_00008b54(c); X86_RET(c, 0x599cu);
    X86_TICK(c, 50);
    // 00599c  push word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x599cu);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))); push16(c, v); }
    // 0059a4  mov eax, dword ptr gs:[ebp + 0x450]
    X86_AT(c, 0x59a4u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)));
    // 0059ab  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x59abu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 0059b3  shr eax, 0x10
    X86_AT(c, 0x59b3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0059b6  mov word ptr gs:[ebp + 0x224], ax
    X86_AT(c, 0x59b6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[0] & 0xFFFFu));
    // 0059be  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x59beu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0059c6  add word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x59c6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0059ce  mov eax, dword ptr gs:[ebp + 0x454]
    X86_AT(c, 0x59ceu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)));
    // 0059d5  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x59d5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 0059dc  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x59dcu);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 0059e0  lds esi, fword ptr gs:[ebp + 0x398]
    X86_AT(c, 0x59e0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x398u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 0059e7  call 0x8f10
    X86_AT(c, 0x59e7u);
    push32(c, 0x59ecu); f_00008f10(c); X86_RET(c, 0x59ecu);
    X86_TICK(c, 45);
    // 0059ec  pop word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x59ecu);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), v); }
    // 0059f4  mov ax, word ptr gs:[ebp + 0x45c]
    X86_AT(c, 0x59f4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu))));
    // 0059fc  add word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x59fcu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 005a04  mov eax, dword ptr gs:[ebp + 0x458]
    X86_AT(c, 0x5a04u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)));
    // 005a0b  add dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0x5a0bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 005a12  add dword ptr gs:[ebp + 0x454], eax
    X86_AT(c, 0x5a12u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 005a19  dec dword ptr [esp]
    X86_AT(c, 0x5a19u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 005a1c  jne 0x595e
    X86_AT(c, 0x5a1cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x595eu); goto L_595e; }
L_5a22:
    X86_TICK(c, 20);
    // 005a22  add esp, 4
    X86_AT(c, 0x5a22u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 005a25  add esp, dword ptr gs:[ebp + 0x3a0]
    X86_AT(c, 0x5a25u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A0u))), 0, 4); }
    // 005a2c  cmp byte ptr gs:[ebp + 0x3a9], 1
    X86_AT(c, 0x5a2cu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A9u))), 0x1u, 0, 1);
    // 005a34  jne 0x5a55
    X86_AT(c, 0x5a34u);
    if (x86_cc(c, 5)) { goto L_5a55; }
    X86_TICK(c, 9);
    // 005a36  mov byte ptr gs:[ebp + 0x104], 1
    X86_AT(c, 0x5a36u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), 0x1u);
    // 005a3e  call 0x36a0
    X86_AT(c, 0x5a3eu);
    push32(c, 0x5a43u); f_000036a0(c); X86_RET(c, 0x5a43u);
    X86_TICK(c, 7);
    // 005a43  call 0x6120
    X86_AT(c, 0x5a43u);
    push32(c, 0x5a48u); f_00006120(c); X86_RET(c, 0x5a48u);
    X86_TICK(c, 9);
    // 005a48  mov byte ptr gs:[ebp + 0x220], 0x13
    X86_AT(c, 0x5a48u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x13u);
    // 005a50  call 0x5a60
    X86_AT(c, 0x5a50u);
    push32(c, 0x5a55u); f_00005a60(c); X86_RET(c, 0x5a55u);
L_5a55:
    X86_TICK(c, 5);
    // 005a55  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5a55u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
L_5a5c:
    X86_TICK(c, 10);
    // 005a5c  ret 
    X86_AT(c, 0x5a5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x57adu, "ran off the end of a function");
}
void f_000057b3(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0057b3  cmp word ptr gs:[ebp + 0x2c], ax
    X86_AT(c, 0x57b3u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 0057b8  jl 0x5a5c
    X86_AT(c, 0x57b8u);
    if (x86_cc(c, 12)) { goto L_5a5c; }
    X86_TICK(c, 17);
    // 0057be  mov word ptr gs:[ebp + 0x1c4], ax
    X86_AT(c, 0x57beu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), (c.r[0] & 0xFFFFu));
    // 0057c6  mov word ptr gs:[ebp + 0x1c8], dx
    X86_AT(c, 0x57c6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), (c.r[2] & 0xFFFFu));
    // 0057ce  shr eax, 0x10
    X86_AT(c, 0x57ceu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0057d1  shr edx, 0x10
    X86_AT(c, 0x57d1u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0057d4  cmp dx, ax
    X86_AT(c, 0x57d4u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0057d7  jge 0x57db
    X86_AT(c, 0x57d7u);
    if (x86_cc(c, 13)) { goto L_57db; }
    X86_TICK(c, 3);
    // 0057d9  xchg dx, ax
    X86_AT(c, 0x57d9u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_57db:
    X86_TICK(c, 12);
    // 0057db  cmp word ptr gs:[ebp + 0x2a], dx
    X86_AT(c, 0x57dbu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[2] & 0xFFFFu), 0, 2);
    // 0057e0  jg 0x5a5c
    X86_AT(c, 0x57e0u);
    if (x86_cc(c, 15)) { goto L_5a5c; }
    X86_TICK(c, 12);
    // 0057e6  cmp word ptr gs:[ebp + 0x2e], ax
    X86_AT(c, 0x57e6u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 0057eb  jl 0x5a5c
    X86_AT(c, 0x57ebu);
    if (x86_cc(c, 12)) { goto L_5a5c; }
    X86_TICK(c, 20);
    // 0057f1  mov word ptr gs:[ebp + 0x1c6], ax
    X86_AT(c, 0x57f1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u)), (c.r[0] & 0xFFFFu));
    // 0057f9  mov word ptr gs:[ebp + 0x1ca], dx
    X86_AT(c, 0x57f9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[2] & 0xFFFFu));
    // 005801  mov eax, dword ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x5801u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)));
    // 005808  cmp word ptr gs:[ebp + 0x28], ax
    X86_AT(c, 0x5808u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00580d  jge 0x5814
    X86_AT(c, 0x580du);
    if (x86_cc(c, 13)) { goto L_5814; }
    X86_TICK(c, 2);
    // 00580f  mov word ptr gs:[ebp + 0x28], ax
    X86_AT(c, 0x580fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), (c.r[0] & 0xFFFFu));
L_5814:
    X86_TICK(c, 15);
    // 005814  shr eax, 0x10
    X86_AT(c, 0x5814u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 005817  cmp word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x5817u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00581c  jge 0x5823
    X86_AT(c, 0x581cu);
    if (x86_cc(c, 13)) { goto L_5823; }
    X86_TICK(c, 2);
    // 00581e  mov word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x581eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au)), (c.r[0] & 0xFFFFu));
L_5823:
    X86_TICK(c, 16);
    // 005823  mov eax, dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x5823u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 00582a  cmp word ptr gs:[ebp + 0x2c], ax
    X86_AT(c, 0x582au);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00582f  jle 0x5836
    X86_AT(c, 0x582fu);
    if (x86_cc(c, 14)) { goto L_5836; }
    X86_TICK(c, 2);
    // 005831  mov word ptr gs:[ebp + 0x2c], ax
    X86_AT(c, 0x5831u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), (c.r[0] & 0xFFFFu));
L_5836:
    X86_TICK(c, 15);
    // 005836  shr eax, 0x10
    X86_AT(c, 0x5836u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 005839  cmp word ptr gs:[ebp + 0x2e], ax
    X86_AT(c, 0x5839u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00583e  jle 0x5845
    X86_AT(c, 0x583eu);
    if (x86_cc(c, 14)) { goto L_5845; }
    X86_TICK(c, 2);
    // 005840  mov word ptr gs:[ebp + 0x2e], ax
    X86_AT(c, 0x5840u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu)), (c.r[0] & 0xFFFFu));
L_5845:
    X86_TICK(c, 105);
    // 005845  push dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5845u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))); push32(c, v); }
    // 00584c  mov dword ptr gs:[ebp + 0x104], 0
    X86_AT(c, 0x584cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), 0x0u);
    // 005857  movzx eax, word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x5857u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 00585f  sub ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x585fu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))), 0, 2)); }
    // 005867  inc eax
    X86_AT(c, 0x5867u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 005868  shr eax, 3
    X86_AT(c, 0x5868u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 00586b  inc eax
    X86_AT(c, 0x586bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 00586c  mul dword ptr gs:[ebp + 0x24]
    X86_AT(c, 0x586cu);
    x86_mul(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u))), 4);
    // 005870  mov dword ptr gs:[ebp + 0x3a0], eax
    X86_AT(c, 0x5870u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A0u)), c.r[0]);
    // 005877  sub esp, eax
    X86_AT(c, 0x5877u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[0], 0, 4); }
    // 005879  mov dword ptr gs:[ebp + 0x398], esp
    X86_AT(c, 0x5879u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x398u)), c.r[4]);
    // 005880  mov word ptr gs:[ebp + 0x39c], ss
    X86_AT(c, 0x5880u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x39Cu)), (uint32_t)c.sreg[2]);
    // 005887  mov bx, word ptr gs:[ebp + 0x1c6]
    X86_AT(c, 0x5887u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u))));
    // 00588f  mov dx, word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0x588fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu))));
    // 005897  movzx ecx, dx
    X86_AT(c, 0x5897u);
    c.r[1] = (c.r[2] & 0xFFFFu);
    // 00589a  sub cx, bx
    X86_AT(c, 0x589au);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00589d  inc ecx
    X86_AT(c, 0x589du);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 00589e  push ecx
    X86_AT(c, 0x589eu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00589f  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x589fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0058a7  neg ax
    X86_AT(c, 0x58a7u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 0058aa  or ah, 0x40
    X86_AT(c, 0x58aau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v | 0x40u, 1)); }
    // 0058ad  sar ax, 0xe
    X86_AT(c, 0x58adu);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 7, v, 0xEu, 2, w); if (w) s16(c, 0, r); }
    // 0058b1  mov word ptr gs:[ebp + 0x45c], ax
    X86_AT(c, 0x58b1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu)), (c.r[0] & 0xFFFFu));
    // 0058b9  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x58b9u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0058bd  neg eax
    X86_AT(c, 0x58bdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 0058bf  movsx ecx, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x58bfu);
    c.r[1] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u)));
    // 0058c7  test ecx, ecx
    X86_AT(c, 0x58c7u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0058c9  jg 0x58d2
    X86_AT(c, 0x58c9u);
    if (x86_cc(c, 15)) { goto L_58d2; }
    X86_TICK(c, 6);
    // 0058cb  mov dx, bx
    X86_AT(c, 0x58cbu);
    s16(c, 2, (c.r[3] & 0xFFFFu));
    // 0058ce  neg eax
    X86_AT(c, 0x58ceu);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 0058d0  neg ecx
    X86_AT(c, 0x58d0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_neg(c, v, 4); }
L_58d2:
    X86_TICK(c, 29);
    // 0058d2  mov dword ptr gs:[ebp + 0x458], eax
    X86_AT(c, 0x58d2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)), c.r[0]);
    // 0058d9  sub dx, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x58d9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))), 0, 2)); }
    // 0058e1  mov word ptr gs:[ebp + 0x226], dx
    X86_AT(c, 0x58e1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[2] & 0xFFFFu));
    // 0058e9  sub dword ptr [esp], ecx
    X86_AT(c, 0x58e9u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[1], 0, 4)); }
    // 0058ec  cmp dword ptr [esp], 0
    X86_AT(c, 0x58ecu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x0u, 0, 4);
    // 0058f0  jle 0x5a22
    X86_AT(c, 0x58f0u);
    if (x86_cc(c, 14)) { goto L_5a22; }
    X86_TICK(c, 102);
    // 0058f6  mov ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x58f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))));
    // 0058fe  add ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x58feu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), 0, 2)); }
    // 005906  mov word ptr gs:[ebp + 0x450], ax
    X86_AT(c, 0x5906u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)), (c.r[0] & 0xFFFFu));
    // 00590e  mov ax, word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x590eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u))));
    // 005916  add ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x5916u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), 0, 2)); }
    // 00591e  mov word ptr gs:[ebp + 0x452], ax
    X86_AT(c, 0x591eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x452u)), (c.r[0] & 0xFFFFu));
    // 005926  movzx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x5926u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00592e  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x592eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 005933  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x5933u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 005937  mov dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0x5937u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)), c.r[0]);
    // 00593e  movzx eax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x593eu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u)));
    // 005946  add ax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x5946u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))), 0, 2)); }
    // 00594e  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x594eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 005953  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x5953u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 005957  mov dword ptr gs:[ebp + 0x454], eax
    X86_AT(c, 0x5957u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)), c.r[0]);
L_595e:
    X86_TICK(c, 35);
    // 00595e  mov ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x595eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))));
    // 005966  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x5966u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 00596e  mov ax, word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x596eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u))));
    // 005976  mov word ptr gs:[ebp + 0x224], ax
    X86_AT(c, 0x5976u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[0] & 0xFFFFu));
    // 00597e  mov eax, dword ptr gs:[ebp + 0x44c]
    X86_AT(c, 0x597eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)));
    // 005985  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x5985u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00598c  mov ds, word ptr gs:[ebp + 4]
    X86_AT(c, 0x598cu);
    x86_load_seg(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 005990  les edi, fword ptr gs:[ebp + 0x398]
    X86_AT(c, 0x5990u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x398u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[7] = o; }
    // 005997  call 0x8b54
    X86_AT(c, 0x5997u);
    push32(c, 0x599cu); f_00008b54(c); X86_RET(c, 0x599cu);
    X86_TICK(c, 50);
    // 00599c  push word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x599cu);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))); push16(c, v); }
    // 0059a4  mov eax, dword ptr gs:[ebp + 0x450]
    X86_AT(c, 0x59a4u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)));
    // 0059ab  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x59abu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 0059b3  shr eax, 0x10
    X86_AT(c, 0x59b3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0059b6  mov word ptr gs:[ebp + 0x224], ax
    X86_AT(c, 0x59b6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[0] & 0xFFFFu));
    // 0059be  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x59beu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0059c6  add word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x59c6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0059ce  mov eax, dword ptr gs:[ebp + 0x454]
    X86_AT(c, 0x59ceu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)));
    // 0059d5  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x59d5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 0059dc  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x59dcu);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 0059e0  lds esi, fword ptr gs:[ebp + 0x398]
    X86_AT(c, 0x59e0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x398u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 0059e7  call 0x8f10
    X86_AT(c, 0x59e7u);
    push32(c, 0x59ecu); f_00008f10(c); X86_RET(c, 0x59ecu);
    X86_TICK(c, 45);
    // 0059ec  pop word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x59ecu);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), v); }
    // 0059f4  mov ax, word ptr gs:[ebp + 0x45c]
    X86_AT(c, 0x59f4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu))));
    // 0059fc  add word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x59fcu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 005a04  mov eax, dword ptr gs:[ebp + 0x458]
    X86_AT(c, 0x5a04u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)));
    // 005a0b  add dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0x5a0bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 005a12  add dword ptr gs:[ebp + 0x454], eax
    X86_AT(c, 0x5a12u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 005a19  dec dword ptr [esp]
    X86_AT(c, 0x5a19u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 005a1c  jne 0x595e
    X86_AT(c, 0x5a1cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x595eu); goto L_595e; }
L_5a22:
    X86_TICK(c, 20);
    // 005a22  add esp, 4
    X86_AT(c, 0x5a22u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 005a25  add esp, dword ptr gs:[ebp + 0x3a0]
    X86_AT(c, 0x5a25u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A0u))), 0, 4); }
    // 005a2c  cmp byte ptr gs:[ebp + 0x3a9], 1
    X86_AT(c, 0x5a2cu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A9u))), 0x1u, 0, 1);
    // 005a34  jne 0x5a55
    X86_AT(c, 0x5a34u);
    if (x86_cc(c, 5)) { goto L_5a55; }
    X86_TICK(c, 9);
    // 005a36  mov byte ptr gs:[ebp + 0x104], 1
    X86_AT(c, 0x5a36u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), 0x1u);
    // 005a3e  call 0x36a0
    X86_AT(c, 0x5a3eu);
    push32(c, 0x5a43u); f_000036a0(c); X86_RET(c, 0x5a43u);
    X86_TICK(c, 7);
    // 005a43  call 0x6120
    X86_AT(c, 0x5a43u);
    push32(c, 0x5a48u); f_00006120(c); X86_RET(c, 0x5a48u);
    X86_TICK(c, 9);
    // 005a48  mov byte ptr gs:[ebp + 0x220], 0x13
    X86_AT(c, 0x5a48u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x13u);
    // 005a50  call 0x5a60
    X86_AT(c, 0x5a50u);
    push32(c, 0x5a55u); f_00005a60(c); X86_RET(c, 0x5a55u);
L_5a55:
    X86_TICK(c, 5);
    // 005a55  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5a55u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
L_5a5c:
    X86_TICK(c, 10);
    // 005a5c  ret 
    X86_AT(c, 0x5a5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x57b3u, "ran off the end of a function");
}
void f_000057b8(X86Cpu& c) {
    X86_TICK(c, 5);
    // 0057b8  jl 0x5a5c
    X86_AT(c, 0x57b8u);
    if (x86_cc(c, 12)) { goto L_5a5c; }
    X86_TICK(c, 17);
    // 0057be  mov word ptr gs:[ebp + 0x1c4], ax
    X86_AT(c, 0x57beu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), (c.r[0] & 0xFFFFu));
    // 0057c6  mov word ptr gs:[ebp + 0x1c8], dx
    X86_AT(c, 0x57c6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), (c.r[2] & 0xFFFFu));
    // 0057ce  shr eax, 0x10
    X86_AT(c, 0x57ceu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0057d1  shr edx, 0x10
    X86_AT(c, 0x57d1u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0057d4  cmp dx, ax
    X86_AT(c, 0x57d4u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0057d7  jge 0x57db
    X86_AT(c, 0x57d7u);
    if (x86_cc(c, 13)) { goto L_57db; }
    X86_TICK(c, 3);
    // 0057d9  xchg dx, ax
    X86_AT(c, 0x57d9u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_57db:
    X86_TICK(c, 12);
    // 0057db  cmp word ptr gs:[ebp + 0x2a], dx
    X86_AT(c, 0x57dbu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[2] & 0xFFFFu), 0, 2);
    // 0057e0  jg 0x5a5c
    X86_AT(c, 0x57e0u);
    if (x86_cc(c, 15)) { goto L_5a5c; }
    X86_TICK(c, 12);
    // 0057e6  cmp word ptr gs:[ebp + 0x2e], ax
    X86_AT(c, 0x57e6u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 0057eb  jl 0x5a5c
    X86_AT(c, 0x57ebu);
    if (x86_cc(c, 12)) { goto L_5a5c; }
    X86_TICK(c, 20);
    // 0057f1  mov word ptr gs:[ebp + 0x1c6], ax
    X86_AT(c, 0x57f1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u)), (c.r[0] & 0xFFFFu));
    // 0057f9  mov word ptr gs:[ebp + 0x1ca], dx
    X86_AT(c, 0x57f9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[2] & 0xFFFFu));
    // 005801  mov eax, dword ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x5801u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)));
    // 005808  cmp word ptr gs:[ebp + 0x28], ax
    X86_AT(c, 0x5808u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00580d  jge 0x5814
    X86_AT(c, 0x580du);
    if (x86_cc(c, 13)) { goto L_5814; }
    X86_TICK(c, 2);
    // 00580f  mov word ptr gs:[ebp + 0x28], ax
    X86_AT(c, 0x580fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), (c.r[0] & 0xFFFFu));
L_5814:
    X86_TICK(c, 15);
    // 005814  shr eax, 0x10
    X86_AT(c, 0x5814u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 005817  cmp word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x5817u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00581c  jge 0x5823
    X86_AT(c, 0x581cu);
    if (x86_cc(c, 13)) { goto L_5823; }
    X86_TICK(c, 2);
    // 00581e  mov word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x581eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au)), (c.r[0] & 0xFFFFu));
L_5823:
    X86_TICK(c, 16);
    // 005823  mov eax, dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x5823u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 00582a  cmp word ptr gs:[ebp + 0x2c], ax
    X86_AT(c, 0x582au);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00582f  jle 0x5836
    X86_AT(c, 0x582fu);
    if (x86_cc(c, 14)) { goto L_5836; }
    X86_TICK(c, 2);
    // 005831  mov word ptr gs:[ebp + 0x2c], ax
    X86_AT(c, 0x5831u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), (c.r[0] & 0xFFFFu));
L_5836:
    X86_TICK(c, 15);
    // 005836  shr eax, 0x10
    X86_AT(c, 0x5836u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 005839  cmp word ptr gs:[ebp + 0x2e], ax
    X86_AT(c, 0x5839u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00583e  jle 0x5845
    X86_AT(c, 0x583eu);
    if (x86_cc(c, 14)) { goto L_5845; }
    X86_TICK(c, 2);
    // 005840  mov word ptr gs:[ebp + 0x2e], ax
    X86_AT(c, 0x5840u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu)), (c.r[0] & 0xFFFFu));
L_5845:
    X86_TICK(c, 105);
    // 005845  push dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5845u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))); push32(c, v); }
    // 00584c  mov dword ptr gs:[ebp + 0x104], 0
    X86_AT(c, 0x584cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), 0x0u);
    // 005857  movzx eax, word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x5857u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 00585f  sub ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x585fu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))), 0, 2)); }
    // 005867  inc eax
    X86_AT(c, 0x5867u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 005868  shr eax, 3
    X86_AT(c, 0x5868u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 00586b  inc eax
    X86_AT(c, 0x586bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 00586c  mul dword ptr gs:[ebp + 0x24]
    X86_AT(c, 0x586cu);
    x86_mul(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u))), 4);
    // 005870  mov dword ptr gs:[ebp + 0x3a0], eax
    X86_AT(c, 0x5870u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A0u)), c.r[0]);
    // 005877  sub esp, eax
    X86_AT(c, 0x5877u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[0], 0, 4); }
    // 005879  mov dword ptr gs:[ebp + 0x398], esp
    X86_AT(c, 0x5879u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x398u)), c.r[4]);
    // 005880  mov word ptr gs:[ebp + 0x39c], ss
    X86_AT(c, 0x5880u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x39Cu)), (uint32_t)c.sreg[2]);
    // 005887  mov bx, word ptr gs:[ebp + 0x1c6]
    X86_AT(c, 0x5887u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u))));
    // 00588f  mov dx, word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0x588fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu))));
    // 005897  movzx ecx, dx
    X86_AT(c, 0x5897u);
    c.r[1] = (c.r[2] & 0xFFFFu);
    // 00589a  sub cx, bx
    X86_AT(c, 0x589au);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00589d  inc ecx
    X86_AT(c, 0x589du);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 00589e  push ecx
    X86_AT(c, 0x589eu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00589f  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x589fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0058a7  neg ax
    X86_AT(c, 0x58a7u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 0058aa  or ah, 0x40
    X86_AT(c, 0x58aau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v | 0x40u, 1)); }
    // 0058ad  sar ax, 0xe
    X86_AT(c, 0x58adu);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 7, v, 0xEu, 2, w); if (w) s16(c, 0, r); }
    // 0058b1  mov word ptr gs:[ebp + 0x45c], ax
    X86_AT(c, 0x58b1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu)), (c.r[0] & 0xFFFFu));
    // 0058b9  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x58b9u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0058bd  neg eax
    X86_AT(c, 0x58bdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 0058bf  movsx ecx, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x58bfu);
    c.r[1] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u)));
    // 0058c7  test ecx, ecx
    X86_AT(c, 0x58c7u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0058c9  jg 0x58d2
    X86_AT(c, 0x58c9u);
    if (x86_cc(c, 15)) { goto L_58d2; }
    X86_TICK(c, 6);
    // 0058cb  mov dx, bx
    X86_AT(c, 0x58cbu);
    s16(c, 2, (c.r[3] & 0xFFFFu));
    // 0058ce  neg eax
    X86_AT(c, 0x58ceu);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 0058d0  neg ecx
    X86_AT(c, 0x58d0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_neg(c, v, 4); }
L_58d2:
    X86_TICK(c, 29);
    // 0058d2  mov dword ptr gs:[ebp + 0x458], eax
    X86_AT(c, 0x58d2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)), c.r[0]);
    // 0058d9  sub dx, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x58d9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))), 0, 2)); }
    // 0058e1  mov word ptr gs:[ebp + 0x226], dx
    X86_AT(c, 0x58e1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[2] & 0xFFFFu));
    // 0058e9  sub dword ptr [esp], ecx
    X86_AT(c, 0x58e9u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[1], 0, 4)); }
    // 0058ec  cmp dword ptr [esp], 0
    X86_AT(c, 0x58ecu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x0u, 0, 4);
    // 0058f0  jle 0x5a22
    X86_AT(c, 0x58f0u);
    if (x86_cc(c, 14)) { goto L_5a22; }
    X86_TICK(c, 102);
    // 0058f6  mov ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x58f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))));
    // 0058fe  add ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x58feu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), 0, 2)); }
    // 005906  mov word ptr gs:[ebp + 0x450], ax
    X86_AT(c, 0x5906u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)), (c.r[0] & 0xFFFFu));
    // 00590e  mov ax, word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x590eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u))));
    // 005916  add ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x5916u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), 0, 2)); }
    // 00591e  mov word ptr gs:[ebp + 0x452], ax
    X86_AT(c, 0x591eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x452u)), (c.r[0] & 0xFFFFu));
    // 005926  movzx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x5926u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00592e  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x592eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 005933  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x5933u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 005937  mov dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0x5937u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)), c.r[0]);
    // 00593e  movzx eax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x593eu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u)));
    // 005946  add ax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x5946u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))), 0, 2)); }
    // 00594e  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x594eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 005953  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x5953u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 005957  mov dword ptr gs:[ebp + 0x454], eax
    X86_AT(c, 0x5957u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)), c.r[0]);
L_595e:
    X86_TICK(c, 35);
    // 00595e  mov ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x595eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))));
    // 005966  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x5966u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 00596e  mov ax, word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x596eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u))));
    // 005976  mov word ptr gs:[ebp + 0x224], ax
    X86_AT(c, 0x5976u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[0] & 0xFFFFu));
    // 00597e  mov eax, dword ptr gs:[ebp + 0x44c]
    X86_AT(c, 0x597eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)));
    // 005985  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x5985u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00598c  mov ds, word ptr gs:[ebp + 4]
    X86_AT(c, 0x598cu);
    x86_load_seg(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 005990  les edi, fword ptr gs:[ebp + 0x398]
    X86_AT(c, 0x5990u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x398u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[7] = o; }
    // 005997  call 0x8b54
    X86_AT(c, 0x5997u);
    push32(c, 0x599cu); f_00008b54(c); X86_RET(c, 0x599cu);
    X86_TICK(c, 50);
    // 00599c  push word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x599cu);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))); push16(c, v); }
    // 0059a4  mov eax, dword ptr gs:[ebp + 0x450]
    X86_AT(c, 0x59a4u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)));
    // 0059ab  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x59abu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 0059b3  shr eax, 0x10
    X86_AT(c, 0x59b3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0059b6  mov word ptr gs:[ebp + 0x224], ax
    X86_AT(c, 0x59b6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[0] & 0xFFFFu));
    // 0059be  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x59beu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0059c6  add word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x59c6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0059ce  mov eax, dword ptr gs:[ebp + 0x454]
    X86_AT(c, 0x59ceu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)));
    // 0059d5  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x59d5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 0059dc  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x59dcu);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 0059e0  lds esi, fword ptr gs:[ebp + 0x398]
    X86_AT(c, 0x59e0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x398u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 0059e7  call 0x8f10
    X86_AT(c, 0x59e7u);
    push32(c, 0x59ecu); f_00008f10(c); X86_RET(c, 0x59ecu);
    X86_TICK(c, 45);
    // 0059ec  pop word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x59ecu);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), v); }
    // 0059f4  mov ax, word ptr gs:[ebp + 0x45c]
    X86_AT(c, 0x59f4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu))));
    // 0059fc  add word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x59fcu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 005a04  mov eax, dword ptr gs:[ebp + 0x458]
    X86_AT(c, 0x5a04u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)));
    // 005a0b  add dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0x5a0bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 005a12  add dword ptr gs:[ebp + 0x454], eax
    X86_AT(c, 0x5a12u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 005a19  dec dword ptr [esp]
    X86_AT(c, 0x5a19u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 005a1c  jne 0x595e
    X86_AT(c, 0x5a1cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x595eu); goto L_595e; }
L_5a22:
    X86_TICK(c, 20);
    // 005a22  add esp, 4
    X86_AT(c, 0x5a22u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 005a25  add esp, dword ptr gs:[ebp + 0x3a0]
    X86_AT(c, 0x5a25u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A0u))), 0, 4); }
    // 005a2c  cmp byte ptr gs:[ebp + 0x3a9], 1
    X86_AT(c, 0x5a2cu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A9u))), 0x1u, 0, 1);
    // 005a34  jne 0x5a55
    X86_AT(c, 0x5a34u);
    if (x86_cc(c, 5)) { goto L_5a55; }
    X86_TICK(c, 9);
    // 005a36  mov byte ptr gs:[ebp + 0x104], 1
    X86_AT(c, 0x5a36u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), 0x1u);
    // 005a3e  call 0x36a0
    X86_AT(c, 0x5a3eu);
    push32(c, 0x5a43u); f_000036a0(c); X86_RET(c, 0x5a43u);
    X86_TICK(c, 7);
    // 005a43  call 0x6120
    X86_AT(c, 0x5a43u);
    push32(c, 0x5a48u); f_00006120(c); X86_RET(c, 0x5a48u);
    X86_TICK(c, 9);
    // 005a48  mov byte ptr gs:[ebp + 0x220], 0x13
    X86_AT(c, 0x5a48u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x13u);
    // 005a50  call 0x5a60
    X86_AT(c, 0x5a50u);
    push32(c, 0x5a55u); f_00005a60(c); X86_RET(c, 0x5a55u);
L_5a55:
    X86_TICK(c, 5);
    // 005a55  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5a55u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
L_5a5c:
    X86_TICK(c, 10);
    // 005a5c  ret 
    X86_AT(c, 0x5a5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x57b8u, "ran off the end of a function");
}
void f_000057be(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0057be  mov word ptr gs:[ebp + 0x1c4], ax
    X86_AT(c, 0x57beu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), (c.r[0] & 0xFFFFu));
    // 0057c6  mov word ptr gs:[ebp + 0x1c8], dx
    X86_AT(c, 0x57c6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), (c.r[2] & 0xFFFFu));
    // 0057ce  shr eax, 0x10
    X86_AT(c, 0x57ceu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0057d1  shr edx, 0x10
    X86_AT(c, 0x57d1u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0057d4  cmp dx, ax
    X86_AT(c, 0x57d4u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0057d7  jge 0x57db
    X86_AT(c, 0x57d7u);
    if (x86_cc(c, 13)) { goto L_57db; }
    X86_TICK(c, 3);
    // 0057d9  xchg dx, ax
    X86_AT(c, 0x57d9u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_57db:
    X86_TICK(c, 12);
    // 0057db  cmp word ptr gs:[ebp + 0x2a], dx
    X86_AT(c, 0x57dbu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[2] & 0xFFFFu), 0, 2);
    // 0057e0  jg 0x5a5c
    X86_AT(c, 0x57e0u);
    if (x86_cc(c, 15)) { goto L_5a5c; }
    X86_TICK(c, 12);
    // 0057e6  cmp word ptr gs:[ebp + 0x2e], ax
    X86_AT(c, 0x57e6u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 0057eb  jl 0x5a5c
    X86_AT(c, 0x57ebu);
    if (x86_cc(c, 12)) { goto L_5a5c; }
    X86_TICK(c, 20);
    // 0057f1  mov word ptr gs:[ebp + 0x1c6], ax
    X86_AT(c, 0x57f1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u)), (c.r[0] & 0xFFFFu));
    // 0057f9  mov word ptr gs:[ebp + 0x1ca], dx
    X86_AT(c, 0x57f9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[2] & 0xFFFFu));
    // 005801  mov eax, dword ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x5801u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)));
    // 005808  cmp word ptr gs:[ebp + 0x28], ax
    X86_AT(c, 0x5808u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00580d  jge 0x5814
    X86_AT(c, 0x580du);
    if (x86_cc(c, 13)) { goto L_5814; }
    X86_TICK(c, 2);
    // 00580f  mov word ptr gs:[ebp + 0x28], ax
    X86_AT(c, 0x580fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), (c.r[0] & 0xFFFFu));
L_5814:
    X86_TICK(c, 15);
    // 005814  shr eax, 0x10
    X86_AT(c, 0x5814u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 005817  cmp word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x5817u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00581c  jge 0x5823
    X86_AT(c, 0x581cu);
    if (x86_cc(c, 13)) { goto L_5823; }
    X86_TICK(c, 2);
    // 00581e  mov word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x581eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au)), (c.r[0] & 0xFFFFu));
L_5823:
    X86_TICK(c, 16);
    // 005823  mov eax, dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x5823u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 00582a  cmp word ptr gs:[ebp + 0x2c], ax
    X86_AT(c, 0x582au);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00582f  jle 0x5836
    X86_AT(c, 0x582fu);
    if (x86_cc(c, 14)) { goto L_5836; }
    X86_TICK(c, 2);
    // 005831  mov word ptr gs:[ebp + 0x2c], ax
    X86_AT(c, 0x5831u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), (c.r[0] & 0xFFFFu));
L_5836:
    X86_TICK(c, 15);
    // 005836  shr eax, 0x10
    X86_AT(c, 0x5836u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 005839  cmp word ptr gs:[ebp + 0x2e], ax
    X86_AT(c, 0x5839u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00583e  jle 0x5845
    X86_AT(c, 0x583eu);
    if (x86_cc(c, 14)) { goto L_5845; }
    X86_TICK(c, 2);
    // 005840  mov word ptr gs:[ebp + 0x2e], ax
    X86_AT(c, 0x5840u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu)), (c.r[0] & 0xFFFFu));
L_5845:
    X86_TICK(c, 105);
    // 005845  push dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5845u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))); push32(c, v); }
    // 00584c  mov dword ptr gs:[ebp + 0x104], 0
    X86_AT(c, 0x584cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), 0x0u);
    // 005857  movzx eax, word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x5857u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 00585f  sub ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x585fu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))), 0, 2)); }
    // 005867  inc eax
    X86_AT(c, 0x5867u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 005868  shr eax, 3
    X86_AT(c, 0x5868u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 00586b  inc eax
    X86_AT(c, 0x586bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 00586c  mul dword ptr gs:[ebp + 0x24]
    X86_AT(c, 0x586cu);
    x86_mul(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u))), 4);
    // 005870  mov dword ptr gs:[ebp + 0x3a0], eax
    X86_AT(c, 0x5870u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A0u)), c.r[0]);
    // 005877  sub esp, eax
    X86_AT(c, 0x5877u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[0], 0, 4); }
    // 005879  mov dword ptr gs:[ebp + 0x398], esp
    X86_AT(c, 0x5879u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x398u)), c.r[4]);
    // 005880  mov word ptr gs:[ebp + 0x39c], ss
    X86_AT(c, 0x5880u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x39Cu)), (uint32_t)c.sreg[2]);
    // 005887  mov bx, word ptr gs:[ebp + 0x1c6]
    X86_AT(c, 0x5887u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u))));
    // 00588f  mov dx, word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0x588fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu))));
    // 005897  movzx ecx, dx
    X86_AT(c, 0x5897u);
    c.r[1] = (c.r[2] & 0xFFFFu);
    // 00589a  sub cx, bx
    X86_AT(c, 0x589au);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00589d  inc ecx
    X86_AT(c, 0x589du);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 00589e  push ecx
    X86_AT(c, 0x589eu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00589f  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x589fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0058a7  neg ax
    X86_AT(c, 0x58a7u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 0058aa  or ah, 0x40
    X86_AT(c, 0x58aau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v | 0x40u, 1)); }
    // 0058ad  sar ax, 0xe
    X86_AT(c, 0x58adu);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 7, v, 0xEu, 2, w); if (w) s16(c, 0, r); }
    // 0058b1  mov word ptr gs:[ebp + 0x45c], ax
    X86_AT(c, 0x58b1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu)), (c.r[0] & 0xFFFFu));
    // 0058b9  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x58b9u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0058bd  neg eax
    X86_AT(c, 0x58bdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 0058bf  movsx ecx, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x58bfu);
    c.r[1] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u)));
    // 0058c7  test ecx, ecx
    X86_AT(c, 0x58c7u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0058c9  jg 0x58d2
    X86_AT(c, 0x58c9u);
    if (x86_cc(c, 15)) { goto L_58d2; }
    X86_TICK(c, 6);
    // 0058cb  mov dx, bx
    X86_AT(c, 0x58cbu);
    s16(c, 2, (c.r[3] & 0xFFFFu));
    // 0058ce  neg eax
    X86_AT(c, 0x58ceu);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 0058d0  neg ecx
    X86_AT(c, 0x58d0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_neg(c, v, 4); }
L_58d2:
    X86_TICK(c, 29);
    // 0058d2  mov dword ptr gs:[ebp + 0x458], eax
    X86_AT(c, 0x58d2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)), c.r[0]);
    // 0058d9  sub dx, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x58d9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))), 0, 2)); }
    // 0058e1  mov word ptr gs:[ebp + 0x226], dx
    X86_AT(c, 0x58e1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[2] & 0xFFFFu));
    // 0058e9  sub dword ptr [esp], ecx
    X86_AT(c, 0x58e9u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[1], 0, 4)); }
    // 0058ec  cmp dword ptr [esp], 0
    X86_AT(c, 0x58ecu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x0u, 0, 4);
    // 0058f0  jle 0x5a22
    X86_AT(c, 0x58f0u);
    if (x86_cc(c, 14)) { goto L_5a22; }
    X86_TICK(c, 102);
    // 0058f6  mov ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x58f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))));
    // 0058fe  add ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x58feu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), 0, 2)); }
    // 005906  mov word ptr gs:[ebp + 0x450], ax
    X86_AT(c, 0x5906u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)), (c.r[0] & 0xFFFFu));
    // 00590e  mov ax, word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x590eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u))));
    // 005916  add ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x5916u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), 0, 2)); }
    // 00591e  mov word ptr gs:[ebp + 0x452], ax
    X86_AT(c, 0x591eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x452u)), (c.r[0] & 0xFFFFu));
    // 005926  movzx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x5926u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00592e  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x592eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 005933  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x5933u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 005937  mov dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0x5937u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)), c.r[0]);
    // 00593e  movzx eax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x593eu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u)));
    // 005946  add ax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x5946u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))), 0, 2)); }
    // 00594e  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x594eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 005953  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x5953u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 005957  mov dword ptr gs:[ebp + 0x454], eax
    X86_AT(c, 0x5957u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)), c.r[0]);
L_595e:
    X86_TICK(c, 35);
    // 00595e  mov ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x595eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))));
    // 005966  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x5966u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 00596e  mov ax, word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x596eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u))));
    // 005976  mov word ptr gs:[ebp + 0x224], ax
    X86_AT(c, 0x5976u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[0] & 0xFFFFu));
    // 00597e  mov eax, dword ptr gs:[ebp + 0x44c]
    X86_AT(c, 0x597eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)));
    // 005985  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x5985u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00598c  mov ds, word ptr gs:[ebp + 4]
    X86_AT(c, 0x598cu);
    x86_load_seg(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 005990  les edi, fword ptr gs:[ebp + 0x398]
    X86_AT(c, 0x5990u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x398u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[7] = o; }
    // 005997  call 0x8b54
    X86_AT(c, 0x5997u);
    push32(c, 0x599cu); f_00008b54(c); X86_RET(c, 0x599cu);
    X86_TICK(c, 50);
    // 00599c  push word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x599cu);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))); push16(c, v); }
    // 0059a4  mov eax, dword ptr gs:[ebp + 0x450]
    X86_AT(c, 0x59a4u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)));
    // 0059ab  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x59abu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 0059b3  shr eax, 0x10
    X86_AT(c, 0x59b3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0059b6  mov word ptr gs:[ebp + 0x224], ax
    X86_AT(c, 0x59b6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[0] & 0xFFFFu));
    // 0059be  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x59beu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0059c6  add word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x59c6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0059ce  mov eax, dword ptr gs:[ebp + 0x454]
    X86_AT(c, 0x59ceu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)));
    // 0059d5  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x59d5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 0059dc  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x59dcu);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 0059e0  lds esi, fword ptr gs:[ebp + 0x398]
    X86_AT(c, 0x59e0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x398u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 0059e7  call 0x8f10
    X86_AT(c, 0x59e7u);
    push32(c, 0x59ecu); f_00008f10(c); X86_RET(c, 0x59ecu);
    X86_TICK(c, 45);
    // 0059ec  pop word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x59ecu);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), v); }
    // 0059f4  mov ax, word ptr gs:[ebp + 0x45c]
    X86_AT(c, 0x59f4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu))));
    // 0059fc  add word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x59fcu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 005a04  mov eax, dword ptr gs:[ebp + 0x458]
    X86_AT(c, 0x5a04u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)));
    // 005a0b  add dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0x5a0bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 005a12  add dword ptr gs:[ebp + 0x454], eax
    X86_AT(c, 0x5a12u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 005a19  dec dword ptr [esp]
    X86_AT(c, 0x5a19u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 005a1c  jne 0x595e
    X86_AT(c, 0x5a1cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x595eu); goto L_595e; }
L_5a22:
    X86_TICK(c, 20);
    // 005a22  add esp, 4
    X86_AT(c, 0x5a22u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 005a25  add esp, dword ptr gs:[ebp + 0x3a0]
    X86_AT(c, 0x5a25u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A0u))), 0, 4); }
    // 005a2c  cmp byte ptr gs:[ebp + 0x3a9], 1
    X86_AT(c, 0x5a2cu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A9u))), 0x1u, 0, 1);
    // 005a34  jne 0x5a55
    X86_AT(c, 0x5a34u);
    if (x86_cc(c, 5)) { goto L_5a55; }
    X86_TICK(c, 9);
    // 005a36  mov byte ptr gs:[ebp + 0x104], 1
    X86_AT(c, 0x5a36u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), 0x1u);
    // 005a3e  call 0x36a0
    X86_AT(c, 0x5a3eu);
    push32(c, 0x5a43u); f_000036a0(c); X86_RET(c, 0x5a43u);
    X86_TICK(c, 7);
    // 005a43  call 0x6120
    X86_AT(c, 0x5a43u);
    push32(c, 0x5a48u); f_00006120(c); X86_RET(c, 0x5a48u);
    X86_TICK(c, 9);
    // 005a48  mov byte ptr gs:[ebp + 0x220], 0x13
    X86_AT(c, 0x5a48u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x13u);
    // 005a50  call 0x5a60
    X86_AT(c, 0x5a50u);
    push32(c, 0x5a55u); f_00005a60(c); X86_RET(c, 0x5a55u);
L_5a55:
    X86_TICK(c, 5);
    // 005a55  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5a55u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
L_5a5c:
    X86_TICK(c, 10);
    // 005a5c  ret 
    X86_AT(c, 0x5a5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x57beu, "ran off the end of a function");
}
void f_000057c6(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0057c6  mov word ptr gs:[ebp + 0x1c8], dx
    X86_AT(c, 0x57c6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), (c.r[2] & 0xFFFFu));
    // 0057ce  shr eax, 0x10
    X86_AT(c, 0x57ceu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0057d1  shr edx, 0x10
    X86_AT(c, 0x57d1u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0057d4  cmp dx, ax
    X86_AT(c, 0x57d4u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0057d7  jge 0x57db
    X86_AT(c, 0x57d7u);
    if (x86_cc(c, 13)) { goto L_57db; }
    X86_TICK(c, 3);
    // 0057d9  xchg dx, ax
    X86_AT(c, 0x57d9u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_57db:
    X86_TICK(c, 12);
    // 0057db  cmp word ptr gs:[ebp + 0x2a], dx
    X86_AT(c, 0x57dbu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[2] & 0xFFFFu), 0, 2);
    // 0057e0  jg 0x5a5c
    X86_AT(c, 0x57e0u);
    if (x86_cc(c, 15)) { goto L_5a5c; }
    X86_TICK(c, 12);
    // 0057e6  cmp word ptr gs:[ebp + 0x2e], ax
    X86_AT(c, 0x57e6u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 0057eb  jl 0x5a5c
    X86_AT(c, 0x57ebu);
    if (x86_cc(c, 12)) { goto L_5a5c; }
    X86_TICK(c, 20);
    // 0057f1  mov word ptr gs:[ebp + 0x1c6], ax
    X86_AT(c, 0x57f1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u)), (c.r[0] & 0xFFFFu));
    // 0057f9  mov word ptr gs:[ebp + 0x1ca], dx
    X86_AT(c, 0x57f9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[2] & 0xFFFFu));
    // 005801  mov eax, dword ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x5801u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)));
    // 005808  cmp word ptr gs:[ebp + 0x28], ax
    X86_AT(c, 0x5808u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00580d  jge 0x5814
    X86_AT(c, 0x580du);
    if (x86_cc(c, 13)) { goto L_5814; }
    X86_TICK(c, 2);
    // 00580f  mov word ptr gs:[ebp + 0x28], ax
    X86_AT(c, 0x580fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), (c.r[0] & 0xFFFFu));
L_5814:
    X86_TICK(c, 15);
    // 005814  shr eax, 0x10
    X86_AT(c, 0x5814u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 005817  cmp word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x5817u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00581c  jge 0x5823
    X86_AT(c, 0x581cu);
    if (x86_cc(c, 13)) { goto L_5823; }
    X86_TICK(c, 2);
    // 00581e  mov word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x581eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au)), (c.r[0] & 0xFFFFu));
L_5823:
    X86_TICK(c, 16);
    // 005823  mov eax, dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x5823u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 00582a  cmp word ptr gs:[ebp + 0x2c], ax
    X86_AT(c, 0x582au);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00582f  jle 0x5836
    X86_AT(c, 0x582fu);
    if (x86_cc(c, 14)) { goto L_5836; }
    X86_TICK(c, 2);
    // 005831  mov word ptr gs:[ebp + 0x2c], ax
    X86_AT(c, 0x5831u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), (c.r[0] & 0xFFFFu));
L_5836:
    X86_TICK(c, 15);
    // 005836  shr eax, 0x10
    X86_AT(c, 0x5836u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 005839  cmp word ptr gs:[ebp + 0x2e], ax
    X86_AT(c, 0x5839u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00583e  jle 0x5845
    X86_AT(c, 0x583eu);
    if (x86_cc(c, 14)) { goto L_5845; }
    X86_TICK(c, 2);
    // 005840  mov word ptr gs:[ebp + 0x2e], ax
    X86_AT(c, 0x5840u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu)), (c.r[0] & 0xFFFFu));
L_5845:
    X86_TICK(c, 105);
    // 005845  push dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5845u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))); push32(c, v); }
    // 00584c  mov dword ptr gs:[ebp + 0x104], 0
    X86_AT(c, 0x584cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), 0x0u);
    // 005857  movzx eax, word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x5857u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 00585f  sub ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x585fu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))), 0, 2)); }
    // 005867  inc eax
    X86_AT(c, 0x5867u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 005868  shr eax, 3
    X86_AT(c, 0x5868u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 00586b  inc eax
    X86_AT(c, 0x586bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 00586c  mul dword ptr gs:[ebp + 0x24]
    X86_AT(c, 0x586cu);
    x86_mul(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u))), 4);
    // 005870  mov dword ptr gs:[ebp + 0x3a0], eax
    X86_AT(c, 0x5870u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A0u)), c.r[0]);
    // 005877  sub esp, eax
    X86_AT(c, 0x5877u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[0], 0, 4); }
    // 005879  mov dword ptr gs:[ebp + 0x398], esp
    X86_AT(c, 0x5879u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x398u)), c.r[4]);
    // 005880  mov word ptr gs:[ebp + 0x39c], ss
    X86_AT(c, 0x5880u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x39Cu)), (uint32_t)c.sreg[2]);
    // 005887  mov bx, word ptr gs:[ebp + 0x1c6]
    X86_AT(c, 0x5887u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u))));
    // 00588f  mov dx, word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0x588fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu))));
    // 005897  movzx ecx, dx
    X86_AT(c, 0x5897u);
    c.r[1] = (c.r[2] & 0xFFFFu);
    // 00589a  sub cx, bx
    X86_AT(c, 0x589au);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00589d  inc ecx
    X86_AT(c, 0x589du);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 00589e  push ecx
    X86_AT(c, 0x589eu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00589f  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x589fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0058a7  neg ax
    X86_AT(c, 0x58a7u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 0058aa  or ah, 0x40
    X86_AT(c, 0x58aau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v | 0x40u, 1)); }
    // 0058ad  sar ax, 0xe
    X86_AT(c, 0x58adu);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 7, v, 0xEu, 2, w); if (w) s16(c, 0, r); }
    // 0058b1  mov word ptr gs:[ebp + 0x45c], ax
    X86_AT(c, 0x58b1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu)), (c.r[0] & 0xFFFFu));
    // 0058b9  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x58b9u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0058bd  neg eax
    X86_AT(c, 0x58bdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 0058bf  movsx ecx, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x58bfu);
    c.r[1] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u)));
    // 0058c7  test ecx, ecx
    X86_AT(c, 0x58c7u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0058c9  jg 0x58d2
    X86_AT(c, 0x58c9u);
    if (x86_cc(c, 15)) { goto L_58d2; }
    X86_TICK(c, 6);
    // 0058cb  mov dx, bx
    X86_AT(c, 0x58cbu);
    s16(c, 2, (c.r[3] & 0xFFFFu));
    // 0058ce  neg eax
    X86_AT(c, 0x58ceu);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 0058d0  neg ecx
    X86_AT(c, 0x58d0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_neg(c, v, 4); }
L_58d2:
    X86_TICK(c, 29);
    // 0058d2  mov dword ptr gs:[ebp + 0x458], eax
    X86_AT(c, 0x58d2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)), c.r[0]);
    // 0058d9  sub dx, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x58d9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))), 0, 2)); }
    // 0058e1  mov word ptr gs:[ebp + 0x226], dx
    X86_AT(c, 0x58e1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[2] & 0xFFFFu));
    // 0058e9  sub dword ptr [esp], ecx
    X86_AT(c, 0x58e9u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[1], 0, 4)); }
    // 0058ec  cmp dword ptr [esp], 0
    X86_AT(c, 0x58ecu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x0u, 0, 4);
    // 0058f0  jle 0x5a22
    X86_AT(c, 0x58f0u);
    if (x86_cc(c, 14)) { goto L_5a22; }
    X86_TICK(c, 102);
    // 0058f6  mov ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x58f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))));
    // 0058fe  add ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x58feu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), 0, 2)); }
    // 005906  mov word ptr gs:[ebp + 0x450], ax
    X86_AT(c, 0x5906u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)), (c.r[0] & 0xFFFFu));
    // 00590e  mov ax, word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x590eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u))));
    // 005916  add ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x5916u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), 0, 2)); }
    // 00591e  mov word ptr gs:[ebp + 0x452], ax
    X86_AT(c, 0x591eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x452u)), (c.r[0] & 0xFFFFu));
    // 005926  movzx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x5926u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00592e  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x592eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 005933  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x5933u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 005937  mov dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0x5937u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)), c.r[0]);
    // 00593e  movzx eax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x593eu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u)));
    // 005946  add ax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x5946u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))), 0, 2)); }
    // 00594e  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x594eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 005953  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x5953u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 005957  mov dword ptr gs:[ebp + 0x454], eax
    X86_AT(c, 0x5957u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)), c.r[0]);
L_595e:
    X86_TICK(c, 35);
    // 00595e  mov ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x595eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))));
    // 005966  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x5966u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 00596e  mov ax, word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x596eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u))));
    // 005976  mov word ptr gs:[ebp + 0x224], ax
    X86_AT(c, 0x5976u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[0] & 0xFFFFu));
    // 00597e  mov eax, dword ptr gs:[ebp + 0x44c]
    X86_AT(c, 0x597eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)));
    // 005985  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x5985u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00598c  mov ds, word ptr gs:[ebp + 4]
    X86_AT(c, 0x598cu);
    x86_load_seg(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 005990  les edi, fword ptr gs:[ebp + 0x398]
    X86_AT(c, 0x5990u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x398u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[7] = o; }
    // 005997  call 0x8b54
    X86_AT(c, 0x5997u);
    push32(c, 0x599cu); f_00008b54(c); X86_RET(c, 0x599cu);
    X86_TICK(c, 50);
    // 00599c  push word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x599cu);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))); push16(c, v); }
    // 0059a4  mov eax, dword ptr gs:[ebp + 0x450]
    X86_AT(c, 0x59a4u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)));
    // 0059ab  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x59abu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 0059b3  shr eax, 0x10
    X86_AT(c, 0x59b3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0059b6  mov word ptr gs:[ebp + 0x224], ax
    X86_AT(c, 0x59b6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[0] & 0xFFFFu));
    // 0059be  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x59beu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0059c6  add word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x59c6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0059ce  mov eax, dword ptr gs:[ebp + 0x454]
    X86_AT(c, 0x59ceu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)));
    // 0059d5  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x59d5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 0059dc  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x59dcu);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 0059e0  lds esi, fword ptr gs:[ebp + 0x398]
    X86_AT(c, 0x59e0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x398u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 0059e7  call 0x8f10
    X86_AT(c, 0x59e7u);
    push32(c, 0x59ecu); f_00008f10(c); X86_RET(c, 0x59ecu);
    X86_TICK(c, 45);
    // 0059ec  pop word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x59ecu);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), v); }
    // 0059f4  mov ax, word ptr gs:[ebp + 0x45c]
    X86_AT(c, 0x59f4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu))));
    // 0059fc  add word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x59fcu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 005a04  mov eax, dword ptr gs:[ebp + 0x458]
    X86_AT(c, 0x5a04u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)));
    // 005a0b  add dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0x5a0bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 005a12  add dword ptr gs:[ebp + 0x454], eax
    X86_AT(c, 0x5a12u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 005a19  dec dword ptr [esp]
    X86_AT(c, 0x5a19u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 005a1c  jne 0x595e
    X86_AT(c, 0x5a1cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x595eu); goto L_595e; }
L_5a22:
    X86_TICK(c, 20);
    // 005a22  add esp, 4
    X86_AT(c, 0x5a22u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 005a25  add esp, dword ptr gs:[ebp + 0x3a0]
    X86_AT(c, 0x5a25u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A0u))), 0, 4); }
    // 005a2c  cmp byte ptr gs:[ebp + 0x3a9], 1
    X86_AT(c, 0x5a2cu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A9u))), 0x1u, 0, 1);
    // 005a34  jne 0x5a55
    X86_AT(c, 0x5a34u);
    if (x86_cc(c, 5)) { goto L_5a55; }
    X86_TICK(c, 9);
    // 005a36  mov byte ptr gs:[ebp + 0x104], 1
    X86_AT(c, 0x5a36u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), 0x1u);
    // 005a3e  call 0x36a0
    X86_AT(c, 0x5a3eu);
    push32(c, 0x5a43u); f_000036a0(c); X86_RET(c, 0x5a43u);
    X86_TICK(c, 7);
    // 005a43  call 0x6120
    X86_AT(c, 0x5a43u);
    push32(c, 0x5a48u); f_00006120(c); X86_RET(c, 0x5a48u);
    X86_TICK(c, 9);
    // 005a48  mov byte ptr gs:[ebp + 0x220], 0x13
    X86_AT(c, 0x5a48u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x13u);
    // 005a50  call 0x5a60
    X86_AT(c, 0x5a50u);
    push32(c, 0x5a55u); f_00005a60(c); X86_RET(c, 0x5a55u);
L_5a55:
    X86_TICK(c, 5);
    // 005a55  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5a55u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
L_5a5c:
    X86_TICK(c, 10);
    // 005a5c  ret 
    X86_AT(c, 0x5a5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x57c6u, "ran off the end of a function");
}
void f_000057ce(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0057ce  shr eax, 0x10
    X86_AT(c, 0x57ceu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0057d1  shr edx, 0x10
    X86_AT(c, 0x57d1u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0057d4  cmp dx, ax
    X86_AT(c, 0x57d4u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0057d7  jge 0x57db
    X86_AT(c, 0x57d7u);
    if (x86_cc(c, 13)) { goto L_57db; }
    X86_TICK(c, 3);
    // 0057d9  xchg dx, ax
    X86_AT(c, 0x57d9u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_57db:
    X86_TICK(c, 12);
    // 0057db  cmp word ptr gs:[ebp + 0x2a], dx
    X86_AT(c, 0x57dbu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[2] & 0xFFFFu), 0, 2);
    // 0057e0  jg 0x5a5c
    X86_AT(c, 0x57e0u);
    if (x86_cc(c, 15)) { goto L_5a5c; }
    X86_TICK(c, 12);
    // 0057e6  cmp word ptr gs:[ebp + 0x2e], ax
    X86_AT(c, 0x57e6u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 0057eb  jl 0x5a5c
    X86_AT(c, 0x57ebu);
    if (x86_cc(c, 12)) { goto L_5a5c; }
    X86_TICK(c, 20);
    // 0057f1  mov word ptr gs:[ebp + 0x1c6], ax
    X86_AT(c, 0x57f1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u)), (c.r[0] & 0xFFFFu));
    // 0057f9  mov word ptr gs:[ebp + 0x1ca], dx
    X86_AT(c, 0x57f9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[2] & 0xFFFFu));
    // 005801  mov eax, dword ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x5801u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)));
    // 005808  cmp word ptr gs:[ebp + 0x28], ax
    X86_AT(c, 0x5808u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00580d  jge 0x5814
    X86_AT(c, 0x580du);
    if (x86_cc(c, 13)) { goto L_5814; }
    X86_TICK(c, 2);
    // 00580f  mov word ptr gs:[ebp + 0x28], ax
    X86_AT(c, 0x580fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), (c.r[0] & 0xFFFFu));
L_5814:
    X86_TICK(c, 15);
    // 005814  shr eax, 0x10
    X86_AT(c, 0x5814u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 005817  cmp word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x5817u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00581c  jge 0x5823
    X86_AT(c, 0x581cu);
    if (x86_cc(c, 13)) { goto L_5823; }
    X86_TICK(c, 2);
    // 00581e  mov word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x581eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au)), (c.r[0] & 0xFFFFu));
L_5823:
    X86_TICK(c, 16);
    // 005823  mov eax, dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x5823u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 00582a  cmp word ptr gs:[ebp + 0x2c], ax
    X86_AT(c, 0x582au);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00582f  jle 0x5836
    X86_AT(c, 0x582fu);
    if (x86_cc(c, 14)) { goto L_5836; }
    X86_TICK(c, 2);
    // 005831  mov word ptr gs:[ebp + 0x2c], ax
    X86_AT(c, 0x5831u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), (c.r[0] & 0xFFFFu));
L_5836:
    X86_TICK(c, 15);
    // 005836  shr eax, 0x10
    X86_AT(c, 0x5836u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 005839  cmp word ptr gs:[ebp + 0x2e], ax
    X86_AT(c, 0x5839u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00583e  jle 0x5845
    X86_AT(c, 0x583eu);
    if (x86_cc(c, 14)) { goto L_5845; }
    X86_TICK(c, 2);
    // 005840  mov word ptr gs:[ebp + 0x2e], ax
    X86_AT(c, 0x5840u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu)), (c.r[0] & 0xFFFFu));
L_5845:
    X86_TICK(c, 105);
    // 005845  push dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5845u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))); push32(c, v); }
    // 00584c  mov dword ptr gs:[ebp + 0x104], 0
    X86_AT(c, 0x584cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), 0x0u);
    // 005857  movzx eax, word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x5857u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 00585f  sub ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x585fu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))), 0, 2)); }
    // 005867  inc eax
    X86_AT(c, 0x5867u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 005868  shr eax, 3
    X86_AT(c, 0x5868u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 00586b  inc eax
    X86_AT(c, 0x586bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 00586c  mul dword ptr gs:[ebp + 0x24]
    X86_AT(c, 0x586cu);
    x86_mul(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u))), 4);
    // 005870  mov dword ptr gs:[ebp + 0x3a0], eax
    X86_AT(c, 0x5870u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A0u)), c.r[0]);
    // 005877  sub esp, eax
    X86_AT(c, 0x5877u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[0], 0, 4); }
    // 005879  mov dword ptr gs:[ebp + 0x398], esp
    X86_AT(c, 0x5879u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x398u)), c.r[4]);
    // 005880  mov word ptr gs:[ebp + 0x39c], ss
    X86_AT(c, 0x5880u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x39Cu)), (uint32_t)c.sreg[2]);
    // 005887  mov bx, word ptr gs:[ebp + 0x1c6]
    X86_AT(c, 0x5887u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u))));
    // 00588f  mov dx, word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0x588fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu))));
    // 005897  movzx ecx, dx
    X86_AT(c, 0x5897u);
    c.r[1] = (c.r[2] & 0xFFFFu);
    // 00589a  sub cx, bx
    X86_AT(c, 0x589au);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00589d  inc ecx
    X86_AT(c, 0x589du);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 00589e  push ecx
    X86_AT(c, 0x589eu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00589f  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x589fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0058a7  neg ax
    X86_AT(c, 0x58a7u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 0058aa  or ah, 0x40
    X86_AT(c, 0x58aau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v | 0x40u, 1)); }
    // 0058ad  sar ax, 0xe
    X86_AT(c, 0x58adu);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 7, v, 0xEu, 2, w); if (w) s16(c, 0, r); }
    // 0058b1  mov word ptr gs:[ebp + 0x45c], ax
    X86_AT(c, 0x58b1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu)), (c.r[0] & 0xFFFFu));
    // 0058b9  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x58b9u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0058bd  neg eax
    X86_AT(c, 0x58bdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 0058bf  movsx ecx, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x58bfu);
    c.r[1] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u)));
    // 0058c7  test ecx, ecx
    X86_AT(c, 0x58c7u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0058c9  jg 0x58d2
    X86_AT(c, 0x58c9u);
    if (x86_cc(c, 15)) { goto L_58d2; }
    X86_TICK(c, 6);
    // 0058cb  mov dx, bx
    X86_AT(c, 0x58cbu);
    s16(c, 2, (c.r[3] & 0xFFFFu));
    // 0058ce  neg eax
    X86_AT(c, 0x58ceu);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 0058d0  neg ecx
    X86_AT(c, 0x58d0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_neg(c, v, 4); }
L_58d2:
    X86_TICK(c, 29);
    // 0058d2  mov dword ptr gs:[ebp + 0x458], eax
    X86_AT(c, 0x58d2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)), c.r[0]);
    // 0058d9  sub dx, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x58d9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))), 0, 2)); }
    // 0058e1  mov word ptr gs:[ebp + 0x226], dx
    X86_AT(c, 0x58e1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[2] & 0xFFFFu));
    // 0058e9  sub dword ptr [esp], ecx
    X86_AT(c, 0x58e9u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[1], 0, 4)); }
    // 0058ec  cmp dword ptr [esp], 0
    X86_AT(c, 0x58ecu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x0u, 0, 4);
    // 0058f0  jle 0x5a22
    X86_AT(c, 0x58f0u);
    if (x86_cc(c, 14)) { goto L_5a22; }
    X86_TICK(c, 102);
    // 0058f6  mov ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x58f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))));
    // 0058fe  add ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x58feu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), 0, 2)); }
    // 005906  mov word ptr gs:[ebp + 0x450], ax
    X86_AT(c, 0x5906u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)), (c.r[0] & 0xFFFFu));
    // 00590e  mov ax, word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x590eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u))));
    // 005916  add ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x5916u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), 0, 2)); }
    // 00591e  mov word ptr gs:[ebp + 0x452], ax
    X86_AT(c, 0x591eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x452u)), (c.r[0] & 0xFFFFu));
    // 005926  movzx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x5926u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00592e  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x592eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 005933  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x5933u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 005937  mov dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0x5937u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)), c.r[0]);
    // 00593e  movzx eax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x593eu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u)));
    // 005946  add ax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x5946u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))), 0, 2)); }
    // 00594e  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x594eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 005953  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x5953u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 005957  mov dword ptr gs:[ebp + 0x454], eax
    X86_AT(c, 0x5957u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)), c.r[0]);
L_595e:
    X86_TICK(c, 35);
    // 00595e  mov ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x595eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))));
    // 005966  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x5966u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 00596e  mov ax, word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x596eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u))));
    // 005976  mov word ptr gs:[ebp + 0x224], ax
    X86_AT(c, 0x5976u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[0] & 0xFFFFu));
    // 00597e  mov eax, dword ptr gs:[ebp + 0x44c]
    X86_AT(c, 0x597eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)));
    // 005985  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x5985u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00598c  mov ds, word ptr gs:[ebp + 4]
    X86_AT(c, 0x598cu);
    x86_load_seg(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 005990  les edi, fword ptr gs:[ebp + 0x398]
    X86_AT(c, 0x5990u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x398u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[7] = o; }
    // 005997  call 0x8b54
    X86_AT(c, 0x5997u);
    push32(c, 0x599cu); f_00008b54(c); X86_RET(c, 0x599cu);
    X86_TICK(c, 50);
    // 00599c  push word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x599cu);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))); push16(c, v); }
    // 0059a4  mov eax, dword ptr gs:[ebp + 0x450]
    X86_AT(c, 0x59a4u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)));
    // 0059ab  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x59abu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 0059b3  shr eax, 0x10
    X86_AT(c, 0x59b3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0059b6  mov word ptr gs:[ebp + 0x224], ax
    X86_AT(c, 0x59b6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[0] & 0xFFFFu));
    // 0059be  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x59beu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0059c6  add word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x59c6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0059ce  mov eax, dword ptr gs:[ebp + 0x454]
    X86_AT(c, 0x59ceu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)));
    // 0059d5  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x59d5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 0059dc  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x59dcu);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 0059e0  lds esi, fword ptr gs:[ebp + 0x398]
    X86_AT(c, 0x59e0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x398u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 0059e7  call 0x8f10
    X86_AT(c, 0x59e7u);
    push32(c, 0x59ecu); f_00008f10(c); X86_RET(c, 0x59ecu);
    X86_TICK(c, 45);
    // 0059ec  pop word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x59ecu);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), v); }
    // 0059f4  mov ax, word ptr gs:[ebp + 0x45c]
    X86_AT(c, 0x59f4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu))));
    // 0059fc  add word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x59fcu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 005a04  mov eax, dword ptr gs:[ebp + 0x458]
    X86_AT(c, 0x5a04u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)));
    // 005a0b  add dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0x5a0bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 005a12  add dword ptr gs:[ebp + 0x454], eax
    X86_AT(c, 0x5a12u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 005a19  dec dword ptr [esp]
    X86_AT(c, 0x5a19u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 005a1c  jne 0x595e
    X86_AT(c, 0x5a1cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x595eu); goto L_595e; }
L_5a22:
    X86_TICK(c, 20);
    // 005a22  add esp, 4
    X86_AT(c, 0x5a22u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 005a25  add esp, dword ptr gs:[ebp + 0x3a0]
    X86_AT(c, 0x5a25u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A0u))), 0, 4); }
    // 005a2c  cmp byte ptr gs:[ebp + 0x3a9], 1
    X86_AT(c, 0x5a2cu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A9u))), 0x1u, 0, 1);
    // 005a34  jne 0x5a55
    X86_AT(c, 0x5a34u);
    if (x86_cc(c, 5)) { goto L_5a55; }
    X86_TICK(c, 9);
    // 005a36  mov byte ptr gs:[ebp + 0x104], 1
    X86_AT(c, 0x5a36u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), 0x1u);
    // 005a3e  call 0x36a0
    X86_AT(c, 0x5a3eu);
    push32(c, 0x5a43u); f_000036a0(c); X86_RET(c, 0x5a43u);
    X86_TICK(c, 7);
    // 005a43  call 0x6120
    X86_AT(c, 0x5a43u);
    push32(c, 0x5a48u); f_00006120(c); X86_RET(c, 0x5a48u);
    X86_TICK(c, 9);
    // 005a48  mov byte ptr gs:[ebp + 0x220], 0x13
    X86_AT(c, 0x5a48u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x13u);
    // 005a50  call 0x5a60
    X86_AT(c, 0x5a50u);
    push32(c, 0x5a55u); f_00005a60(c); X86_RET(c, 0x5a55u);
L_5a55:
    X86_TICK(c, 5);
    // 005a55  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5a55u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
L_5a5c:
    X86_TICK(c, 10);
    // 005a5c  ret 
    X86_AT(c, 0x5a5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x57ceu, "ran off the end of a function");
}
void f_000057d1(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0057d1  shr edx, 0x10
    X86_AT(c, 0x57d1u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0057d4  cmp dx, ax
    X86_AT(c, 0x57d4u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0057d7  jge 0x57db
    X86_AT(c, 0x57d7u);
    if (x86_cc(c, 13)) { goto L_57db; }
    X86_TICK(c, 3);
    // 0057d9  xchg dx, ax
    X86_AT(c, 0x57d9u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_57db:
    X86_TICK(c, 12);
    // 0057db  cmp word ptr gs:[ebp + 0x2a], dx
    X86_AT(c, 0x57dbu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[2] & 0xFFFFu), 0, 2);
    // 0057e0  jg 0x5a5c
    X86_AT(c, 0x57e0u);
    if (x86_cc(c, 15)) { goto L_5a5c; }
    X86_TICK(c, 12);
    // 0057e6  cmp word ptr gs:[ebp + 0x2e], ax
    X86_AT(c, 0x57e6u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 0057eb  jl 0x5a5c
    X86_AT(c, 0x57ebu);
    if (x86_cc(c, 12)) { goto L_5a5c; }
    X86_TICK(c, 20);
    // 0057f1  mov word ptr gs:[ebp + 0x1c6], ax
    X86_AT(c, 0x57f1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u)), (c.r[0] & 0xFFFFu));
    // 0057f9  mov word ptr gs:[ebp + 0x1ca], dx
    X86_AT(c, 0x57f9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[2] & 0xFFFFu));
    // 005801  mov eax, dword ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x5801u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)));
    // 005808  cmp word ptr gs:[ebp + 0x28], ax
    X86_AT(c, 0x5808u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00580d  jge 0x5814
    X86_AT(c, 0x580du);
    if (x86_cc(c, 13)) { goto L_5814; }
    X86_TICK(c, 2);
    // 00580f  mov word ptr gs:[ebp + 0x28], ax
    X86_AT(c, 0x580fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), (c.r[0] & 0xFFFFu));
L_5814:
    X86_TICK(c, 15);
    // 005814  shr eax, 0x10
    X86_AT(c, 0x5814u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 005817  cmp word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x5817u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00581c  jge 0x5823
    X86_AT(c, 0x581cu);
    if (x86_cc(c, 13)) { goto L_5823; }
    X86_TICK(c, 2);
    // 00581e  mov word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x581eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au)), (c.r[0] & 0xFFFFu));
L_5823:
    X86_TICK(c, 16);
    // 005823  mov eax, dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x5823u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 00582a  cmp word ptr gs:[ebp + 0x2c], ax
    X86_AT(c, 0x582au);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00582f  jle 0x5836
    X86_AT(c, 0x582fu);
    if (x86_cc(c, 14)) { goto L_5836; }
    X86_TICK(c, 2);
    // 005831  mov word ptr gs:[ebp + 0x2c], ax
    X86_AT(c, 0x5831u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), (c.r[0] & 0xFFFFu));
L_5836:
    X86_TICK(c, 15);
    // 005836  shr eax, 0x10
    X86_AT(c, 0x5836u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 005839  cmp word ptr gs:[ebp + 0x2e], ax
    X86_AT(c, 0x5839u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00583e  jle 0x5845
    X86_AT(c, 0x583eu);
    if (x86_cc(c, 14)) { goto L_5845; }
    X86_TICK(c, 2);
    // 005840  mov word ptr gs:[ebp + 0x2e], ax
    X86_AT(c, 0x5840u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu)), (c.r[0] & 0xFFFFu));
L_5845:
    X86_TICK(c, 105);
    // 005845  push dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5845u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))); push32(c, v); }
    // 00584c  mov dword ptr gs:[ebp + 0x104], 0
    X86_AT(c, 0x584cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), 0x0u);
    // 005857  movzx eax, word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x5857u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 00585f  sub ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x585fu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))), 0, 2)); }
    // 005867  inc eax
    X86_AT(c, 0x5867u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 005868  shr eax, 3
    X86_AT(c, 0x5868u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 00586b  inc eax
    X86_AT(c, 0x586bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 00586c  mul dword ptr gs:[ebp + 0x24]
    X86_AT(c, 0x586cu);
    x86_mul(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u))), 4);
    // 005870  mov dword ptr gs:[ebp + 0x3a0], eax
    X86_AT(c, 0x5870u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A0u)), c.r[0]);
    // 005877  sub esp, eax
    X86_AT(c, 0x5877u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[0], 0, 4); }
    // 005879  mov dword ptr gs:[ebp + 0x398], esp
    X86_AT(c, 0x5879u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x398u)), c.r[4]);
    // 005880  mov word ptr gs:[ebp + 0x39c], ss
    X86_AT(c, 0x5880u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x39Cu)), (uint32_t)c.sreg[2]);
    // 005887  mov bx, word ptr gs:[ebp + 0x1c6]
    X86_AT(c, 0x5887u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u))));
    // 00588f  mov dx, word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0x588fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu))));
    // 005897  movzx ecx, dx
    X86_AT(c, 0x5897u);
    c.r[1] = (c.r[2] & 0xFFFFu);
    // 00589a  sub cx, bx
    X86_AT(c, 0x589au);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00589d  inc ecx
    X86_AT(c, 0x589du);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 00589e  push ecx
    X86_AT(c, 0x589eu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00589f  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x589fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0058a7  neg ax
    X86_AT(c, 0x58a7u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 0058aa  or ah, 0x40
    X86_AT(c, 0x58aau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v | 0x40u, 1)); }
    // 0058ad  sar ax, 0xe
    X86_AT(c, 0x58adu);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 7, v, 0xEu, 2, w); if (w) s16(c, 0, r); }
    // 0058b1  mov word ptr gs:[ebp + 0x45c], ax
    X86_AT(c, 0x58b1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu)), (c.r[0] & 0xFFFFu));
    // 0058b9  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x58b9u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0058bd  neg eax
    X86_AT(c, 0x58bdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 0058bf  movsx ecx, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x58bfu);
    c.r[1] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u)));
    // 0058c7  test ecx, ecx
    X86_AT(c, 0x58c7u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0058c9  jg 0x58d2
    X86_AT(c, 0x58c9u);
    if (x86_cc(c, 15)) { goto L_58d2; }
    X86_TICK(c, 6);
    // 0058cb  mov dx, bx
    X86_AT(c, 0x58cbu);
    s16(c, 2, (c.r[3] & 0xFFFFu));
    // 0058ce  neg eax
    X86_AT(c, 0x58ceu);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 0058d0  neg ecx
    X86_AT(c, 0x58d0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_neg(c, v, 4); }
L_58d2:
    X86_TICK(c, 29);
    // 0058d2  mov dword ptr gs:[ebp + 0x458], eax
    X86_AT(c, 0x58d2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)), c.r[0]);
    // 0058d9  sub dx, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x58d9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))), 0, 2)); }
    // 0058e1  mov word ptr gs:[ebp + 0x226], dx
    X86_AT(c, 0x58e1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[2] & 0xFFFFu));
    // 0058e9  sub dword ptr [esp], ecx
    X86_AT(c, 0x58e9u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[1], 0, 4)); }
    // 0058ec  cmp dword ptr [esp], 0
    X86_AT(c, 0x58ecu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x0u, 0, 4);
    // 0058f0  jle 0x5a22
    X86_AT(c, 0x58f0u);
    if (x86_cc(c, 14)) { goto L_5a22; }
    X86_TICK(c, 102);
    // 0058f6  mov ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x58f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))));
    // 0058fe  add ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x58feu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), 0, 2)); }
    // 005906  mov word ptr gs:[ebp + 0x450], ax
    X86_AT(c, 0x5906u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)), (c.r[0] & 0xFFFFu));
    // 00590e  mov ax, word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x590eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u))));
    // 005916  add ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x5916u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), 0, 2)); }
    // 00591e  mov word ptr gs:[ebp + 0x452], ax
    X86_AT(c, 0x591eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x452u)), (c.r[0] & 0xFFFFu));
    // 005926  movzx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x5926u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00592e  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x592eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 005933  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x5933u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 005937  mov dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0x5937u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)), c.r[0]);
    // 00593e  movzx eax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x593eu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u)));
    // 005946  add ax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x5946u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))), 0, 2)); }
    // 00594e  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x594eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 005953  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x5953u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 005957  mov dword ptr gs:[ebp + 0x454], eax
    X86_AT(c, 0x5957u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)), c.r[0]);
L_595e:
    X86_TICK(c, 35);
    // 00595e  mov ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x595eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))));
    // 005966  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x5966u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 00596e  mov ax, word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x596eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u))));
    // 005976  mov word ptr gs:[ebp + 0x224], ax
    X86_AT(c, 0x5976u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[0] & 0xFFFFu));
    // 00597e  mov eax, dword ptr gs:[ebp + 0x44c]
    X86_AT(c, 0x597eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)));
    // 005985  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x5985u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00598c  mov ds, word ptr gs:[ebp + 4]
    X86_AT(c, 0x598cu);
    x86_load_seg(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 005990  les edi, fword ptr gs:[ebp + 0x398]
    X86_AT(c, 0x5990u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x398u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[7] = o; }
    // 005997  call 0x8b54
    X86_AT(c, 0x5997u);
    push32(c, 0x599cu); f_00008b54(c); X86_RET(c, 0x599cu);
    X86_TICK(c, 50);
    // 00599c  push word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x599cu);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))); push16(c, v); }
    // 0059a4  mov eax, dword ptr gs:[ebp + 0x450]
    X86_AT(c, 0x59a4u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)));
    // 0059ab  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x59abu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 0059b3  shr eax, 0x10
    X86_AT(c, 0x59b3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0059b6  mov word ptr gs:[ebp + 0x224], ax
    X86_AT(c, 0x59b6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[0] & 0xFFFFu));
    // 0059be  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x59beu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0059c6  add word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x59c6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0059ce  mov eax, dword ptr gs:[ebp + 0x454]
    X86_AT(c, 0x59ceu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)));
    // 0059d5  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x59d5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 0059dc  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x59dcu);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 0059e0  lds esi, fword ptr gs:[ebp + 0x398]
    X86_AT(c, 0x59e0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x398u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 0059e7  call 0x8f10
    X86_AT(c, 0x59e7u);
    push32(c, 0x59ecu); f_00008f10(c); X86_RET(c, 0x59ecu);
    X86_TICK(c, 45);
    // 0059ec  pop word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x59ecu);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), v); }
    // 0059f4  mov ax, word ptr gs:[ebp + 0x45c]
    X86_AT(c, 0x59f4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu))));
    // 0059fc  add word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x59fcu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 005a04  mov eax, dword ptr gs:[ebp + 0x458]
    X86_AT(c, 0x5a04u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)));
    // 005a0b  add dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0x5a0bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 005a12  add dword ptr gs:[ebp + 0x454], eax
    X86_AT(c, 0x5a12u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 005a19  dec dword ptr [esp]
    X86_AT(c, 0x5a19u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 005a1c  jne 0x595e
    X86_AT(c, 0x5a1cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x595eu); goto L_595e; }
L_5a22:
    X86_TICK(c, 20);
    // 005a22  add esp, 4
    X86_AT(c, 0x5a22u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 005a25  add esp, dword ptr gs:[ebp + 0x3a0]
    X86_AT(c, 0x5a25u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A0u))), 0, 4); }
    // 005a2c  cmp byte ptr gs:[ebp + 0x3a9], 1
    X86_AT(c, 0x5a2cu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A9u))), 0x1u, 0, 1);
    // 005a34  jne 0x5a55
    X86_AT(c, 0x5a34u);
    if (x86_cc(c, 5)) { goto L_5a55; }
    X86_TICK(c, 9);
    // 005a36  mov byte ptr gs:[ebp + 0x104], 1
    X86_AT(c, 0x5a36u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), 0x1u);
    // 005a3e  call 0x36a0
    X86_AT(c, 0x5a3eu);
    push32(c, 0x5a43u); f_000036a0(c); X86_RET(c, 0x5a43u);
    X86_TICK(c, 7);
    // 005a43  call 0x6120
    X86_AT(c, 0x5a43u);
    push32(c, 0x5a48u); f_00006120(c); X86_RET(c, 0x5a48u);
    X86_TICK(c, 9);
    // 005a48  mov byte ptr gs:[ebp + 0x220], 0x13
    X86_AT(c, 0x5a48u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x13u);
    // 005a50  call 0x5a60
    X86_AT(c, 0x5a50u);
    push32(c, 0x5a55u); f_00005a60(c); X86_RET(c, 0x5a55u);
L_5a55:
    X86_TICK(c, 5);
    // 005a55  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5a55u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
L_5a5c:
    X86_TICK(c, 10);
    // 005a5c  ret 
    X86_AT(c, 0x5a5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x57d1u, "ran off the end of a function");
}
void f_000057d4(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0057d4  cmp dx, ax
    X86_AT(c, 0x57d4u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0057d7  jge 0x57db
    X86_AT(c, 0x57d7u);
    if (x86_cc(c, 13)) { goto L_57db; }
    X86_TICK(c, 3);
    // 0057d9  xchg dx, ax
    X86_AT(c, 0x57d9u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_57db:
    X86_TICK(c, 12);
    // 0057db  cmp word ptr gs:[ebp + 0x2a], dx
    X86_AT(c, 0x57dbu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[2] & 0xFFFFu), 0, 2);
    // 0057e0  jg 0x5a5c
    X86_AT(c, 0x57e0u);
    if (x86_cc(c, 15)) { goto L_5a5c; }
    X86_TICK(c, 12);
    // 0057e6  cmp word ptr gs:[ebp + 0x2e], ax
    X86_AT(c, 0x57e6u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 0057eb  jl 0x5a5c
    X86_AT(c, 0x57ebu);
    if (x86_cc(c, 12)) { goto L_5a5c; }
    X86_TICK(c, 20);
    // 0057f1  mov word ptr gs:[ebp + 0x1c6], ax
    X86_AT(c, 0x57f1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u)), (c.r[0] & 0xFFFFu));
    // 0057f9  mov word ptr gs:[ebp + 0x1ca], dx
    X86_AT(c, 0x57f9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[2] & 0xFFFFu));
    // 005801  mov eax, dword ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x5801u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)));
    // 005808  cmp word ptr gs:[ebp + 0x28], ax
    X86_AT(c, 0x5808u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00580d  jge 0x5814
    X86_AT(c, 0x580du);
    if (x86_cc(c, 13)) { goto L_5814; }
    X86_TICK(c, 2);
    // 00580f  mov word ptr gs:[ebp + 0x28], ax
    X86_AT(c, 0x580fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), (c.r[0] & 0xFFFFu));
L_5814:
    X86_TICK(c, 15);
    // 005814  shr eax, 0x10
    X86_AT(c, 0x5814u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 005817  cmp word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x5817u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00581c  jge 0x5823
    X86_AT(c, 0x581cu);
    if (x86_cc(c, 13)) { goto L_5823; }
    X86_TICK(c, 2);
    // 00581e  mov word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x581eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au)), (c.r[0] & 0xFFFFu));
L_5823:
    X86_TICK(c, 16);
    // 005823  mov eax, dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x5823u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 00582a  cmp word ptr gs:[ebp + 0x2c], ax
    X86_AT(c, 0x582au);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00582f  jle 0x5836
    X86_AT(c, 0x582fu);
    if (x86_cc(c, 14)) { goto L_5836; }
    X86_TICK(c, 2);
    // 005831  mov word ptr gs:[ebp + 0x2c], ax
    X86_AT(c, 0x5831u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), (c.r[0] & 0xFFFFu));
L_5836:
    X86_TICK(c, 15);
    // 005836  shr eax, 0x10
    X86_AT(c, 0x5836u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 005839  cmp word ptr gs:[ebp + 0x2e], ax
    X86_AT(c, 0x5839u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00583e  jle 0x5845
    X86_AT(c, 0x583eu);
    if (x86_cc(c, 14)) { goto L_5845; }
    X86_TICK(c, 2);
    // 005840  mov word ptr gs:[ebp + 0x2e], ax
    X86_AT(c, 0x5840u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu)), (c.r[0] & 0xFFFFu));
L_5845:
    X86_TICK(c, 105);
    // 005845  push dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5845u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))); push32(c, v); }
    // 00584c  mov dword ptr gs:[ebp + 0x104], 0
    X86_AT(c, 0x584cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), 0x0u);
    // 005857  movzx eax, word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x5857u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 00585f  sub ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x585fu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))), 0, 2)); }
    // 005867  inc eax
    X86_AT(c, 0x5867u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 005868  shr eax, 3
    X86_AT(c, 0x5868u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 00586b  inc eax
    X86_AT(c, 0x586bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 00586c  mul dword ptr gs:[ebp + 0x24]
    X86_AT(c, 0x586cu);
    x86_mul(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u))), 4);
    // 005870  mov dword ptr gs:[ebp + 0x3a0], eax
    X86_AT(c, 0x5870u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A0u)), c.r[0]);
    // 005877  sub esp, eax
    X86_AT(c, 0x5877u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[0], 0, 4); }
    // 005879  mov dword ptr gs:[ebp + 0x398], esp
    X86_AT(c, 0x5879u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x398u)), c.r[4]);
    // 005880  mov word ptr gs:[ebp + 0x39c], ss
    X86_AT(c, 0x5880u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x39Cu)), (uint32_t)c.sreg[2]);
    // 005887  mov bx, word ptr gs:[ebp + 0x1c6]
    X86_AT(c, 0x5887u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u))));
    // 00588f  mov dx, word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0x588fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu))));
    // 005897  movzx ecx, dx
    X86_AT(c, 0x5897u);
    c.r[1] = (c.r[2] & 0xFFFFu);
    // 00589a  sub cx, bx
    X86_AT(c, 0x589au);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00589d  inc ecx
    X86_AT(c, 0x589du);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 00589e  push ecx
    X86_AT(c, 0x589eu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00589f  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x589fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0058a7  neg ax
    X86_AT(c, 0x58a7u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 0058aa  or ah, 0x40
    X86_AT(c, 0x58aau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v | 0x40u, 1)); }
    // 0058ad  sar ax, 0xe
    X86_AT(c, 0x58adu);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 7, v, 0xEu, 2, w); if (w) s16(c, 0, r); }
    // 0058b1  mov word ptr gs:[ebp + 0x45c], ax
    X86_AT(c, 0x58b1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu)), (c.r[0] & 0xFFFFu));
    // 0058b9  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x58b9u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0058bd  neg eax
    X86_AT(c, 0x58bdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 0058bf  movsx ecx, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x58bfu);
    c.r[1] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u)));
    // 0058c7  test ecx, ecx
    X86_AT(c, 0x58c7u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0058c9  jg 0x58d2
    X86_AT(c, 0x58c9u);
    if (x86_cc(c, 15)) { goto L_58d2; }
    X86_TICK(c, 6);
    // 0058cb  mov dx, bx
    X86_AT(c, 0x58cbu);
    s16(c, 2, (c.r[3] & 0xFFFFu));
    // 0058ce  neg eax
    X86_AT(c, 0x58ceu);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 0058d0  neg ecx
    X86_AT(c, 0x58d0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_neg(c, v, 4); }
L_58d2:
    X86_TICK(c, 29);
    // 0058d2  mov dword ptr gs:[ebp + 0x458], eax
    X86_AT(c, 0x58d2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)), c.r[0]);
    // 0058d9  sub dx, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x58d9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))), 0, 2)); }
    // 0058e1  mov word ptr gs:[ebp + 0x226], dx
    X86_AT(c, 0x58e1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[2] & 0xFFFFu));
    // 0058e9  sub dword ptr [esp], ecx
    X86_AT(c, 0x58e9u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[1], 0, 4)); }
    // 0058ec  cmp dword ptr [esp], 0
    X86_AT(c, 0x58ecu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x0u, 0, 4);
    // 0058f0  jle 0x5a22
    X86_AT(c, 0x58f0u);
    if (x86_cc(c, 14)) { goto L_5a22; }
    X86_TICK(c, 102);
    // 0058f6  mov ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x58f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))));
    // 0058fe  add ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x58feu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), 0, 2)); }
    // 005906  mov word ptr gs:[ebp + 0x450], ax
    X86_AT(c, 0x5906u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)), (c.r[0] & 0xFFFFu));
    // 00590e  mov ax, word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x590eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u))));
    // 005916  add ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x5916u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), 0, 2)); }
    // 00591e  mov word ptr gs:[ebp + 0x452], ax
    X86_AT(c, 0x591eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x452u)), (c.r[0] & 0xFFFFu));
    // 005926  movzx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x5926u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00592e  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x592eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 005933  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x5933u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 005937  mov dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0x5937u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)), c.r[0]);
    // 00593e  movzx eax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x593eu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u)));
    // 005946  add ax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x5946u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))), 0, 2)); }
    // 00594e  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x594eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 005953  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x5953u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 005957  mov dword ptr gs:[ebp + 0x454], eax
    X86_AT(c, 0x5957u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)), c.r[0]);
L_595e:
    X86_TICK(c, 35);
    // 00595e  mov ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x595eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))));
    // 005966  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x5966u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 00596e  mov ax, word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x596eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u))));
    // 005976  mov word ptr gs:[ebp + 0x224], ax
    X86_AT(c, 0x5976u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[0] & 0xFFFFu));
    // 00597e  mov eax, dword ptr gs:[ebp + 0x44c]
    X86_AT(c, 0x597eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)));
    // 005985  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x5985u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00598c  mov ds, word ptr gs:[ebp + 4]
    X86_AT(c, 0x598cu);
    x86_load_seg(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 005990  les edi, fword ptr gs:[ebp + 0x398]
    X86_AT(c, 0x5990u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x398u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[7] = o; }
    // 005997  call 0x8b54
    X86_AT(c, 0x5997u);
    push32(c, 0x599cu); f_00008b54(c); X86_RET(c, 0x599cu);
    X86_TICK(c, 50);
    // 00599c  push word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x599cu);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))); push16(c, v); }
    // 0059a4  mov eax, dword ptr gs:[ebp + 0x450]
    X86_AT(c, 0x59a4u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)));
    // 0059ab  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x59abu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 0059b3  shr eax, 0x10
    X86_AT(c, 0x59b3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0059b6  mov word ptr gs:[ebp + 0x224], ax
    X86_AT(c, 0x59b6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[0] & 0xFFFFu));
    // 0059be  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x59beu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0059c6  add word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x59c6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0059ce  mov eax, dword ptr gs:[ebp + 0x454]
    X86_AT(c, 0x59ceu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)));
    // 0059d5  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x59d5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 0059dc  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x59dcu);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 0059e0  lds esi, fword ptr gs:[ebp + 0x398]
    X86_AT(c, 0x59e0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x398u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 0059e7  call 0x8f10
    X86_AT(c, 0x59e7u);
    push32(c, 0x59ecu); f_00008f10(c); X86_RET(c, 0x59ecu);
    X86_TICK(c, 45);
    // 0059ec  pop word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x59ecu);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), v); }
    // 0059f4  mov ax, word ptr gs:[ebp + 0x45c]
    X86_AT(c, 0x59f4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu))));
    // 0059fc  add word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x59fcu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 005a04  mov eax, dword ptr gs:[ebp + 0x458]
    X86_AT(c, 0x5a04u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)));
    // 005a0b  add dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0x5a0bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 005a12  add dword ptr gs:[ebp + 0x454], eax
    X86_AT(c, 0x5a12u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 005a19  dec dword ptr [esp]
    X86_AT(c, 0x5a19u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 005a1c  jne 0x595e
    X86_AT(c, 0x5a1cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x595eu); goto L_595e; }
L_5a22:
    X86_TICK(c, 20);
    // 005a22  add esp, 4
    X86_AT(c, 0x5a22u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 005a25  add esp, dword ptr gs:[ebp + 0x3a0]
    X86_AT(c, 0x5a25u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A0u))), 0, 4); }
    // 005a2c  cmp byte ptr gs:[ebp + 0x3a9], 1
    X86_AT(c, 0x5a2cu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A9u))), 0x1u, 0, 1);
    // 005a34  jne 0x5a55
    X86_AT(c, 0x5a34u);
    if (x86_cc(c, 5)) { goto L_5a55; }
    X86_TICK(c, 9);
    // 005a36  mov byte ptr gs:[ebp + 0x104], 1
    X86_AT(c, 0x5a36u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), 0x1u);
    // 005a3e  call 0x36a0
    X86_AT(c, 0x5a3eu);
    push32(c, 0x5a43u); f_000036a0(c); X86_RET(c, 0x5a43u);
    X86_TICK(c, 7);
    // 005a43  call 0x6120
    X86_AT(c, 0x5a43u);
    push32(c, 0x5a48u); f_00006120(c); X86_RET(c, 0x5a48u);
    X86_TICK(c, 9);
    // 005a48  mov byte ptr gs:[ebp + 0x220], 0x13
    X86_AT(c, 0x5a48u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x13u);
    // 005a50  call 0x5a60
    X86_AT(c, 0x5a50u);
    push32(c, 0x5a55u); f_00005a60(c); X86_RET(c, 0x5a55u);
L_5a55:
    X86_TICK(c, 5);
    // 005a55  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5a55u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
L_5a5c:
    X86_TICK(c, 10);
    // 005a5c  ret 
    X86_AT(c, 0x5a5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x57d4u, "ran off the end of a function");
}
void f_000057d7(X86Cpu& c) {
    X86_TICK(c, 5);
    // 0057d7  jge 0x57db
    X86_AT(c, 0x57d7u);
    if (x86_cc(c, 13)) { goto L_57db; }
    X86_TICK(c, 3);
    // 0057d9  xchg dx, ax
    X86_AT(c, 0x57d9u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_57db:
    X86_TICK(c, 12);
    // 0057db  cmp word ptr gs:[ebp + 0x2a], dx
    X86_AT(c, 0x57dbu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[2] & 0xFFFFu), 0, 2);
    // 0057e0  jg 0x5a5c
    X86_AT(c, 0x57e0u);
    if (x86_cc(c, 15)) { goto L_5a5c; }
    X86_TICK(c, 12);
    // 0057e6  cmp word ptr gs:[ebp + 0x2e], ax
    X86_AT(c, 0x57e6u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 0057eb  jl 0x5a5c
    X86_AT(c, 0x57ebu);
    if (x86_cc(c, 12)) { goto L_5a5c; }
    X86_TICK(c, 20);
    // 0057f1  mov word ptr gs:[ebp + 0x1c6], ax
    X86_AT(c, 0x57f1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u)), (c.r[0] & 0xFFFFu));
    // 0057f9  mov word ptr gs:[ebp + 0x1ca], dx
    X86_AT(c, 0x57f9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[2] & 0xFFFFu));
    // 005801  mov eax, dword ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x5801u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)));
    // 005808  cmp word ptr gs:[ebp + 0x28], ax
    X86_AT(c, 0x5808u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00580d  jge 0x5814
    X86_AT(c, 0x580du);
    if (x86_cc(c, 13)) { goto L_5814; }
    X86_TICK(c, 2);
    // 00580f  mov word ptr gs:[ebp + 0x28], ax
    X86_AT(c, 0x580fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), (c.r[0] & 0xFFFFu));
L_5814:
    X86_TICK(c, 15);
    // 005814  shr eax, 0x10
    X86_AT(c, 0x5814u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 005817  cmp word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x5817u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00581c  jge 0x5823
    X86_AT(c, 0x581cu);
    if (x86_cc(c, 13)) { goto L_5823; }
    X86_TICK(c, 2);
    // 00581e  mov word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x581eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au)), (c.r[0] & 0xFFFFu));
L_5823:
    X86_TICK(c, 16);
    // 005823  mov eax, dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x5823u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 00582a  cmp word ptr gs:[ebp + 0x2c], ax
    X86_AT(c, 0x582au);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00582f  jle 0x5836
    X86_AT(c, 0x582fu);
    if (x86_cc(c, 14)) { goto L_5836; }
    X86_TICK(c, 2);
    // 005831  mov word ptr gs:[ebp + 0x2c], ax
    X86_AT(c, 0x5831u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), (c.r[0] & 0xFFFFu));
L_5836:
    X86_TICK(c, 15);
    // 005836  shr eax, 0x10
    X86_AT(c, 0x5836u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 005839  cmp word ptr gs:[ebp + 0x2e], ax
    X86_AT(c, 0x5839u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00583e  jle 0x5845
    X86_AT(c, 0x583eu);
    if (x86_cc(c, 14)) { goto L_5845; }
    X86_TICK(c, 2);
    // 005840  mov word ptr gs:[ebp + 0x2e], ax
    X86_AT(c, 0x5840u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu)), (c.r[0] & 0xFFFFu));
L_5845:
    X86_TICK(c, 105);
    // 005845  push dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5845u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))); push32(c, v); }
    // 00584c  mov dword ptr gs:[ebp + 0x104], 0
    X86_AT(c, 0x584cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), 0x0u);
    // 005857  movzx eax, word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x5857u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 00585f  sub ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x585fu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))), 0, 2)); }
    // 005867  inc eax
    X86_AT(c, 0x5867u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 005868  shr eax, 3
    X86_AT(c, 0x5868u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 00586b  inc eax
    X86_AT(c, 0x586bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 00586c  mul dword ptr gs:[ebp + 0x24]
    X86_AT(c, 0x586cu);
    x86_mul(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u))), 4);
    // 005870  mov dword ptr gs:[ebp + 0x3a0], eax
    X86_AT(c, 0x5870u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A0u)), c.r[0]);
    // 005877  sub esp, eax
    X86_AT(c, 0x5877u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[0], 0, 4); }
    // 005879  mov dword ptr gs:[ebp + 0x398], esp
    X86_AT(c, 0x5879u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x398u)), c.r[4]);
    // 005880  mov word ptr gs:[ebp + 0x39c], ss
    X86_AT(c, 0x5880u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x39Cu)), (uint32_t)c.sreg[2]);
    // 005887  mov bx, word ptr gs:[ebp + 0x1c6]
    X86_AT(c, 0x5887u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u))));
    // 00588f  mov dx, word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0x588fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu))));
    // 005897  movzx ecx, dx
    X86_AT(c, 0x5897u);
    c.r[1] = (c.r[2] & 0xFFFFu);
    // 00589a  sub cx, bx
    X86_AT(c, 0x589au);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00589d  inc ecx
    X86_AT(c, 0x589du);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 00589e  push ecx
    X86_AT(c, 0x589eu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00589f  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x589fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0058a7  neg ax
    X86_AT(c, 0x58a7u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 0058aa  or ah, 0x40
    X86_AT(c, 0x58aau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v | 0x40u, 1)); }
    // 0058ad  sar ax, 0xe
    X86_AT(c, 0x58adu);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 7, v, 0xEu, 2, w); if (w) s16(c, 0, r); }
    // 0058b1  mov word ptr gs:[ebp + 0x45c], ax
    X86_AT(c, 0x58b1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu)), (c.r[0] & 0xFFFFu));
    // 0058b9  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x58b9u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0058bd  neg eax
    X86_AT(c, 0x58bdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 0058bf  movsx ecx, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x58bfu);
    c.r[1] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u)));
    // 0058c7  test ecx, ecx
    X86_AT(c, 0x58c7u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0058c9  jg 0x58d2
    X86_AT(c, 0x58c9u);
    if (x86_cc(c, 15)) { goto L_58d2; }
    X86_TICK(c, 6);
    // 0058cb  mov dx, bx
    X86_AT(c, 0x58cbu);
    s16(c, 2, (c.r[3] & 0xFFFFu));
    // 0058ce  neg eax
    X86_AT(c, 0x58ceu);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 0058d0  neg ecx
    X86_AT(c, 0x58d0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_neg(c, v, 4); }
L_58d2:
    X86_TICK(c, 29);
    // 0058d2  mov dword ptr gs:[ebp + 0x458], eax
    X86_AT(c, 0x58d2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)), c.r[0]);
    // 0058d9  sub dx, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x58d9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))), 0, 2)); }
    // 0058e1  mov word ptr gs:[ebp + 0x226], dx
    X86_AT(c, 0x58e1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[2] & 0xFFFFu));
    // 0058e9  sub dword ptr [esp], ecx
    X86_AT(c, 0x58e9u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[1], 0, 4)); }
    // 0058ec  cmp dword ptr [esp], 0
    X86_AT(c, 0x58ecu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x0u, 0, 4);
    // 0058f0  jle 0x5a22
    X86_AT(c, 0x58f0u);
    if (x86_cc(c, 14)) { goto L_5a22; }
    X86_TICK(c, 102);
    // 0058f6  mov ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x58f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))));
    // 0058fe  add ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x58feu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), 0, 2)); }
    // 005906  mov word ptr gs:[ebp + 0x450], ax
    X86_AT(c, 0x5906u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)), (c.r[0] & 0xFFFFu));
    // 00590e  mov ax, word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x590eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u))));
    // 005916  add ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x5916u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), 0, 2)); }
    // 00591e  mov word ptr gs:[ebp + 0x452], ax
    X86_AT(c, 0x591eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x452u)), (c.r[0] & 0xFFFFu));
    // 005926  movzx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x5926u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00592e  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x592eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 005933  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x5933u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 005937  mov dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0x5937u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)), c.r[0]);
    // 00593e  movzx eax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x593eu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u)));
    // 005946  add ax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x5946u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))), 0, 2)); }
    // 00594e  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x594eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 005953  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x5953u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 005957  mov dword ptr gs:[ebp + 0x454], eax
    X86_AT(c, 0x5957u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)), c.r[0]);
L_595e:
    X86_TICK(c, 35);
    // 00595e  mov ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x595eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))));
    // 005966  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x5966u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 00596e  mov ax, word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x596eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u))));
    // 005976  mov word ptr gs:[ebp + 0x224], ax
    X86_AT(c, 0x5976u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[0] & 0xFFFFu));
    // 00597e  mov eax, dword ptr gs:[ebp + 0x44c]
    X86_AT(c, 0x597eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)));
    // 005985  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x5985u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00598c  mov ds, word ptr gs:[ebp + 4]
    X86_AT(c, 0x598cu);
    x86_load_seg(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 005990  les edi, fword ptr gs:[ebp + 0x398]
    X86_AT(c, 0x5990u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x398u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[7] = o; }
    // 005997  call 0x8b54
    X86_AT(c, 0x5997u);
    push32(c, 0x599cu); f_00008b54(c); X86_RET(c, 0x599cu);
    X86_TICK(c, 50);
    // 00599c  push word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x599cu);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))); push16(c, v); }
    // 0059a4  mov eax, dword ptr gs:[ebp + 0x450]
    X86_AT(c, 0x59a4u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)));
    // 0059ab  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x59abu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 0059b3  shr eax, 0x10
    X86_AT(c, 0x59b3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0059b6  mov word ptr gs:[ebp + 0x224], ax
    X86_AT(c, 0x59b6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[0] & 0xFFFFu));
    // 0059be  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x59beu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0059c6  add word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x59c6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0059ce  mov eax, dword ptr gs:[ebp + 0x454]
    X86_AT(c, 0x59ceu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)));
    // 0059d5  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x59d5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 0059dc  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x59dcu);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 0059e0  lds esi, fword ptr gs:[ebp + 0x398]
    X86_AT(c, 0x59e0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x398u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 0059e7  call 0x8f10
    X86_AT(c, 0x59e7u);
    push32(c, 0x59ecu); f_00008f10(c); X86_RET(c, 0x59ecu);
    X86_TICK(c, 45);
    // 0059ec  pop word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x59ecu);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), v); }
    // 0059f4  mov ax, word ptr gs:[ebp + 0x45c]
    X86_AT(c, 0x59f4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu))));
    // 0059fc  add word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x59fcu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 005a04  mov eax, dword ptr gs:[ebp + 0x458]
    X86_AT(c, 0x5a04u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)));
    // 005a0b  add dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0x5a0bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 005a12  add dword ptr gs:[ebp + 0x454], eax
    X86_AT(c, 0x5a12u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 005a19  dec dword ptr [esp]
    X86_AT(c, 0x5a19u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 005a1c  jne 0x595e
    X86_AT(c, 0x5a1cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x595eu); goto L_595e; }
L_5a22:
    X86_TICK(c, 20);
    // 005a22  add esp, 4
    X86_AT(c, 0x5a22u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 005a25  add esp, dword ptr gs:[ebp + 0x3a0]
    X86_AT(c, 0x5a25u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A0u))), 0, 4); }
    // 005a2c  cmp byte ptr gs:[ebp + 0x3a9], 1
    X86_AT(c, 0x5a2cu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A9u))), 0x1u, 0, 1);
    // 005a34  jne 0x5a55
    X86_AT(c, 0x5a34u);
    if (x86_cc(c, 5)) { goto L_5a55; }
    X86_TICK(c, 9);
    // 005a36  mov byte ptr gs:[ebp + 0x104], 1
    X86_AT(c, 0x5a36u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), 0x1u);
    // 005a3e  call 0x36a0
    X86_AT(c, 0x5a3eu);
    push32(c, 0x5a43u); f_000036a0(c); X86_RET(c, 0x5a43u);
    X86_TICK(c, 7);
    // 005a43  call 0x6120
    X86_AT(c, 0x5a43u);
    push32(c, 0x5a48u); f_00006120(c); X86_RET(c, 0x5a48u);
    X86_TICK(c, 9);
    // 005a48  mov byte ptr gs:[ebp + 0x220], 0x13
    X86_AT(c, 0x5a48u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x13u);
    // 005a50  call 0x5a60
    X86_AT(c, 0x5a50u);
    push32(c, 0x5a55u); f_00005a60(c); X86_RET(c, 0x5a55u);
L_5a55:
    X86_TICK(c, 5);
    // 005a55  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5a55u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
L_5a5c:
    X86_TICK(c, 10);
    // 005a5c  ret 
    X86_AT(c, 0x5a5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x57d7u, "ran off the end of a function");
}
void f_000057db(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0057db  cmp word ptr gs:[ebp + 0x2a], dx
    X86_AT(c, 0x57dbu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[2] & 0xFFFFu), 0, 2);
    // 0057e0  jg 0x5a5c
    X86_AT(c, 0x57e0u);
    if (x86_cc(c, 15)) { goto L_5a5c; }
    X86_TICK(c, 12);
    // 0057e6  cmp word ptr gs:[ebp + 0x2e], ax
    X86_AT(c, 0x57e6u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 0057eb  jl 0x5a5c
    X86_AT(c, 0x57ebu);
    if (x86_cc(c, 12)) { goto L_5a5c; }
    X86_TICK(c, 20);
    // 0057f1  mov word ptr gs:[ebp + 0x1c6], ax
    X86_AT(c, 0x57f1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u)), (c.r[0] & 0xFFFFu));
    // 0057f9  mov word ptr gs:[ebp + 0x1ca], dx
    X86_AT(c, 0x57f9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[2] & 0xFFFFu));
    // 005801  mov eax, dword ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x5801u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)));
    // 005808  cmp word ptr gs:[ebp + 0x28], ax
    X86_AT(c, 0x5808u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00580d  jge 0x5814
    X86_AT(c, 0x580du);
    if (x86_cc(c, 13)) { goto L_5814; }
    X86_TICK(c, 2);
    // 00580f  mov word ptr gs:[ebp + 0x28], ax
    X86_AT(c, 0x580fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), (c.r[0] & 0xFFFFu));
L_5814:
    X86_TICK(c, 15);
    // 005814  shr eax, 0x10
    X86_AT(c, 0x5814u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 005817  cmp word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x5817u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00581c  jge 0x5823
    X86_AT(c, 0x581cu);
    if (x86_cc(c, 13)) { goto L_5823; }
    X86_TICK(c, 2);
    // 00581e  mov word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x581eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au)), (c.r[0] & 0xFFFFu));
L_5823:
    X86_TICK(c, 16);
    // 005823  mov eax, dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x5823u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 00582a  cmp word ptr gs:[ebp + 0x2c], ax
    X86_AT(c, 0x582au);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00582f  jle 0x5836
    X86_AT(c, 0x582fu);
    if (x86_cc(c, 14)) { goto L_5836; }
    X86_TICK(c, 2);
    // 005831  mov word ptr gs:[ebp + 0x2c], ax
    X86_AT(c, 0x5831u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), (c.r[0] & 0xFFFFu));
L_5836:
    X86_TICK(c, 15);
    // 005836  shr eax, 0x10
    X86_AT(c, 0x5836u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 005839  cmp word ptr gs:[ebp + 0x2e], ax
    X86_AT(c, 0x5839u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00583e  jle 0x5845
    X86_AT(c, 0x583eu);
    if (x86_cc(c, 14)) { goto L_5845; }
    X86_TICK(c, 2);
    // 005840  mov word ptr gs:[ebp + 0x2e], ax
    X86_AT(c, 0x5840u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu)), (c.r[0] & 0xFFFFu));
L_5845:
    X86_TICK(c, 105);
    // 005845  push dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5845u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))); push32(c, v); }
    // 00584c  mov dword ptr gs:[ebp + 0x104], 0
    X86_AT(c, 0x584cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), 0x0u);
    // 005857  movzx eax, word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x5857u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 00585f  sub ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x585fu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))), 0, 2)); }
    // 005867  inc eax
    X86_AT(c, 0x5867u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 005868  shr eax, 3
    X86_AT(c, 0x5868u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 00586b  inc eax
    X86_AT(c, 0x586bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 00586c  mul dword ptr gs:[ebp + 0x24]
    X86_AT(c, 0x586cu);
    x86_mul(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u))), 4);
    // 005870  mov dword ptr gs:[ebp + 0x3a0], eax
    X86_AT(c, 0x5870u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A0u)), c.r[0]);
    // 005877  sub esp, eax
    X86_AT(c, 0x5877u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[0], 0, 4); }
    // 005879  mov dword ptr gs:[ebp + 0x398], esp
    X86_AT(c, 0x5879u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x398u)), c.r[4]);
    // 005880  mov word ptr gs:[ebp + 0x39c], ss
    X86_AT(c, 0x5880u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x39Cu)), (uint32_t)c.sreg[2]);
    // 005887  mov bx, word ptr gs:[ebp + 0x1c6]
    X86_AT(c, 0x5887u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u))));
    // 00588f  mov dx, word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0x588fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu))));
    // 005897  movzx ecx, dx
    X86_AT(c, 0x5897u);
    c.r[1] = (c.r[2] & 0xFFFFu);
    // 00589a  sub cx, bx
    X86_AT(c, 0x589au);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00589d  inc ecx
    X86_AT(c, 0x589du);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 00589e  push ecx
    X86_AT(c, 0x589eu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00589f  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x589fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0058a7  neg ax
    X86_AT(c, 0x58a7u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 0058aa  or ah, 0x40
    X86_AT(c, 0x58aau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v | 0x40u, 1)); }
    // 0058ad  sar ax, 0xe
    X86_AT(c, 0x58adu);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 7, v, 0xEu, 2, w); if (w) s16(c, 0, r); }
    // 0058b1  mov word ptr gs:[ebp + 0x45c], ax
    X86_AT(c, 0x58b1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu)), (c.r[0] & 0xFFFFu));
    // 0058b9  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x58b9u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0058bd  neg eax
    X86_AT(c, 0x58bdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 0058bf  movsx ecx, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x58bfu);
    c.r[1] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u)));
    // 0058c7  test ecx, ecx
    X86_AT(c, 0x58c7u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0058c9  jg 0x58d2
    X86_AT(c, 0x58c9u);
    if (x86_cc(c, 15)) { goto L_58d2; }
    X86_TICK(c, 6);
    // 0058cb  mov dx, bx
    X86_AT(c, 0x58cbu);
    s16(c, 2, (c.r[3] & 0xFFFFu));
    // 0058ce  neg eax
    X86_AT(c, 0x58ceu);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 0058d0  neg ecx
    X86_AT(c, 0x58d0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_neg(c, v, 4); }
L_58d2:
    X86_TICK(c, 29);
    // 0058d2  mov dword ptr gs:[ebp + 0x458], eax
    X86_AT(c, 0x58d2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)), c.r[0]);
    // 0058d9  sub dx, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x58d9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))), 0, 2)); }
    // 0058e1  mov word ptr gs:[ebp + 0x226], dx
    X86_AT(c, 0x58e1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[2] & 0xFFFFu));
    // 0058e9  sub dword ptr [esp], ecx
    X86_AT(c, 0x58e9u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[1], 0, 4)); }
    // 0058ec  cmp dword ptr [esp], 0
    X86_AT(c, 0x58ecu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x0u, 0, 4);
    // 0058f0  jle 0x5a22
    X86_AT(c, 0x58f0u);
    if (x86_cc(c, 14)) { goto L_5a22; }
    X86_TICK(c, 102);
    // 0058f6  mov ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x58f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))));
    // 0058fe  add ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x58feu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), 0, 2)); }
    // 005906  mov word ptr gs:[ebp + 0x450], ax
    X86_AT(c, 0x5906u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)), (c.r[0] & 0xFFFFu));
    // 00590e  mov ax, word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x590eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u))));
    // 005916  add ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x5916u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), 0, 2)); }
    // 00591e  mov word ptr gs:[ebp + 0x452], ax
    X86_AT(c, 0x591eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x452u)), (c.r[0] & 0xFFFFu));
    // 005926  movzx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x5926u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00592e  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x592eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 005933  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x5933u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 005937  mov dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0x5937u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)), c.r[0]);
    // 00593e  movzx eax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x593eu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u)));
    // 005946  add ax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x5946u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))), 0, 2)); }
    // 00594e  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x594eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 005953  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x5953u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 005957  mov dword ptr gs:[ebp + 0x454], eax
    X86_AT(c, 0x5957u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)), c.r[0]);
L_595e:
    X86_TICK(c, 35);
    // 00595e  mov ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x595eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))));
    // 005966  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x5966u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 00596e  mov ax, word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x596eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u))));
    // 005976  mov word ptr gs:[ebp + 0x224], ax
    X86_AT(c, 0x5976u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[0] & 0xFFFFu));
    // 00597e  mov eax, dword ptr gs:[ebp + 0x44c]
    X86_AT(c, 0x597eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)));
    // 005985  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x5985u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00598c  mov ds, word ptr gs:[ebp + 4]
    X86_AT(c, 0x598cu);
    x86_load_seg(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 005990  les edi, fword ptr gs:[ebp + 0x398]
    X86_AT(c, 0x5990u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x398u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[7] = o; }
    // 005997  call 0x8b54
    X86_AT(c, 0x5997u);
    push32(c, 0x599cu); f_00008b54(c); X86_RET(c, 0x599cu);
    X86_TICK(c, 50);
    // 00599c  push word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x599cu);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))); push16(c, v); }
    // 0059a4  mov eax, dword ptr gs:[ebp + 0x450]
    X86_AT(c, 0x59a4u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)));
    // 0059ab  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x59abu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 0059b3  shr eax, 0x10
    X86_AT(c, 0x59b3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0059b6  mov word ptr gs:[ebp + 0x224], ax
    X86_AT(c, 0x59b6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[0] & 0xFFFFu));
    // 0059be  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x59beu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0059c6  add word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x59c6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0059ce  mov eax, dword ptr gs:[ebp + 0x454]
    X86_AT(c, 0x59ceu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)));
    // 0059d5  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x59d5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 0059dc  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x59dcu);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 0059e0  lds esi, fword ptr gs:[ebp + 0x398]
    X86_AT(c, 0x59e0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x398u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 0059e7  call 0x8f10
    X86_AT(c, 0x59e7u);
    push32(c, 0x59ecu); f_00008f10(c); X86_RET(c, 0x59ecu);
    X86_TICK(c, 45);
    // 0059ec  pop word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x59ecu);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), v); }
    // 0059f4  mov ax, word ptr gs:[ebp + 0x45c]
    X86_AT(c, 0x59f4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu))));
    // 0059fc  add word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x59fcu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 005a04  mov eax, dword ptr gs:[ebp + 0x458]
    X86_AT(c, 0x5a04u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)));
    // 005a0b  add dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0x5a0bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 005a12  add dword ptr gs:[ebp + 0x454], eax
    X86_AT(c, 0x5a12u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 005a19  dec dword ptr [esp]
    X86_AT(c, 0x5a19u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 005a1c  jne 0x595e
    X86_AT(c, 0x5a1cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x595eu); goto L_595e; }
L_5a22:
    X86_TICK(c, 20);
    // 005a22  add esp, 4
    X86_AT(c, 0x5a22u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 005a25  add esp, dword ptr gs:[ebp + 0x3a0]
    X86_AT(c, 0x5a25u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A0u))), 0, 4); }
    // 005a2c  cmp byte ptr gs:[ebp + 0x3a9], 1
    X86_AT(c, 0x5a2cu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A9u))), 0x1u, 0, 1);
    // 005a34  jne 0x5a55
    X86_AT(c, 0x5a34u);
    if (x86_cc(c, 5)) { goto L_5a55; }
    X86_TICK(c, 9);
    // 005a36  mov byte ptr gs:[ebp + 0x104], 1
    X86_AT(c, 0x5a36u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), 0x1u);
    // 005a3e  call 0x36a0
    X86_AT(c, 0x5a3eu);
    push32(c, 0x5a43u); f_000036a0(c); X86_RET(c, 0x5a43u);
    X86_TICK(c, 7);
    // 005a43  call 0x6120
    X86_AT(c, 0x5a43u);
    push32(c, 0x5a48u); f_00006120(c); X86_RET(c, 0x5a48u);
    X86_TICK(c, 9);
    // 005a48  mov byte ptr gs:[ebp + 0x220], 0x13
    X86_AT(c, 0x5a48u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x13u);
    // 005a50  call 0x5a60
    X86_AT(c, 0x5a50u);
    push32(c, 0x5a55u); f_00005a60(c); X86_RET(c, 0x5a55u);
L_5a55:
    X86_TICK(c, 5);
    // 005a55  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5a55u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
L_5a5c:
    X86_TICK(c, 10);
    // 005a5c  ret 
    X86_AT(c, 0x5a5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x57dbu, "ran off the end of a function");
}
}
