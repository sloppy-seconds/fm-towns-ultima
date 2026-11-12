#include "p_tbios_funcs.h"
namespace p_tbios {
void f_000058a7(X86Cpu& c) {
    X86_TICK(c, 28);
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
    X86_TICK(c, 15);
    // 005a55  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5a55u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 005a5c  ret 
    X86_AT(c, 0x5a5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x58a7u, "ran off the end of a function");
}
void f_000058aa(X86Cpu& c) {
    X86_TICK(c, 26);
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
    X86_TICK(c, 15);
    // 005a55  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5a55u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 005a5c  ret 
    X86_AT(c, 0x5a5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x58aau, "ran off the end of a function");
}
void f_000058ad(X86Cpu& c) {
    X86_TICK(c, 24);
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
    X86_TICK(c, 15);
    // 005a55  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5a55u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 005a5c  ret 
    X86_AT(c, 0x5a5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x58adu, "ran off the end of a function");
}
void f_000058b1(X86Cpu& c) {
    X86_TICK(c, 21);
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
    X86_TICK(c, 15);
    // 005a55  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5a55u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 005a5c  ret 
    X86_AT(c, 0x5a5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x58b1u, "ran off the end of a function");
}
void f_000058b9(X86Cpu& c) {
    X86_TICK(c, 19);
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
    X86_TICK(c, 15);
    // 005a55  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5a55u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 005a5c  ret 
    X86_AT(c, 0x5a5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x58b9u, "ran off the end of a function");
}
void f_000058bd(X86Cpu& c) {
    X86_TICK(c, 15);
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
    X86_TICK(c, 15);
    // 005a55  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5a55u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 005a5c  ret 
    X86_AT(c, 0x5a5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x58bdu, "ran off the end of a function");
}
void f_000058bf(X86Cpu& c) {
    X86_TICK(c, 13);
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
    X86_TICK(c, 15);
    // 005a55  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5a55u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 005a5c  ret 
    X86_AT(c, 0x5a5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x58bfu, "ran off the end of a function");
}
void f_000058c7(X86Cpu& c) {
    X86_TICK(c, 7);
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
    X86_TICK(c, 15);
    // 005a55  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5a55u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 005a5c  ret 
    X86_AT(c, 0x5a5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x58c7u, "ran off the end of a function");
}
void f_000058c9(X86Cpu& c) {
    X86_TICK(c, 5);
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
    X86_TICK(c, 15);
    // 005a55  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5a55u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 005a5c  ret 
    X86_AT(c, 0x5a5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x58c9u, "ran off the end of a function");
}
void f_000058cb(X86Cpu& c) {
    X86_TICK(c, 35);
    // 0058cb  mov dx, bx
    X86_AT(c, 0x58cbu);
    s16(c, 2, (c.r[3] & 0xFFFFu));
    // 0058ce  neg eax
    X86_AT(c, 0x58ceu);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 0058d0  neg ecx
    X86_AT(c, 0x58d0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_neg(c, v, 4); }
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
    X86_TICK(c, 15);
    // 005a55  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5a55u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 005a5c  ret 
    X86_AT(c, 0x5a5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x58cbu, "ran off the end of a function");
}
void f_000058ce(X86Cpu& c) {
    X86_TICK(c, 33);
    // 0058ce  neg eax
    X86_AT(c, 0x58ceu);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 0058d0  neg ecx
    X86_AT(c, 0x58d0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_neg(c, v, 4); }
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
    X86_TICK(c, 15);
    // 005a55  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5a55u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 005a5c  ret 
    X86_AT(c, 0x5a5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x58ceu, "ran off the end of a function");
}
void f_000058d0(X86Cpu& c) {
    X86_TICK(c, 31);
    // 0058d0  neg ecx
    X86_AT(c, 0x58d0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_neg(c, v, 4); }
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
    X86_TICK(c, 15);
    // 005a55  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5a55u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 005a5c  ret 
    X86_AT(c, 0x5a5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x58d0u, "ran off the end of a function");
}
void f_000058d2(X86Cpu& c) {
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
    X86_TICK(c, 15);
    // 005a55  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5a55u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 005a5c  ret 
    X86_AT(c, 0x5a5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x58d2u, "ran off the end of a function");
}
void f_000058d9(X86Cpu& c) {
    X86_TICK(c, 27);
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
    X86_TICK(c, 15);
    // 005a55  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5a55u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 005a5c  ret 
    X86_AT(c, 0x5a5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x58d9u, "ran off the end of a function");
}
void f_000058e1(X86Cpu& c) {
    X86_TICK(c, 21);
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
    X86_TICK(c, 15);
    // 005a55  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5a55u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 005a5c  ret 
    X86_AT(c, 0x5a5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x58e1u, "ran off the end of a function");
}
void f_000058e9(X86Cpu& c) {
    X86_TICK(c, 19);
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
    X86_TICK(c, 15);
    // 005a55  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5a55u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 005a5c  ret 
    X86_AT(c, 0x5a5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x58e9u, "ran off the end of a function");
}
void f_000058ec(X86Cpu& c) {
    X86_TICK(c, 12);
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
    X86_TICK(c, 15);
    // 005a55  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5a55u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 005a5c  ret 
    X86_AT(c, 0x5a5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x58ecu, "ran off the end of a function");
}
void f_000058f0(X86Cpu& c) {
    X86_TICK(c, 5);
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
    X86_TICK(c, 15);
    // 005a55  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5a55u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 005a5c  ret 
    X86_AT(c, 0x5a5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x58f0u, "ran off the end of a function");
}
void f_00005a22(X86Cpu& c) {
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
    X86_TICK(c, 15);
    // 005a55  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5a55u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 005a5c  ret 
    X86_AT(c, 0x5a5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5a22u, "ran off the end of a function");
}
void f_00005a25(X86Cpu& c) {
    X86_TICK(c, 18);
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
    X86_TICK(c, 15);
    // 005a55  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5a55u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 005a5c  ret 
    X86_AT(c, 0x5a5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5a25u, "ran off the end of a function");
}
void f_00005a2c(X86Cpu& c) {
    X86_TICK(c, 12);
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
    X86_TICK(c, 15);
    // 005a55  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5a55u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 005a5c  ret 
    X86_AT(c, 0x5a5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5a2cu, "ran off the end of a function");
}
void f_00005a34(X86Cpu& c) {
    X86_TICK(c, 5);
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
    X86_TICK(c, 15);
    // 005a55  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5a55u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 005a5c  ret 
    X86_AT(c, 0x5a5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5a34u, "ran off the end of a function");
}
void f_00005a36(X86Cpu& c) {
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
    X86_TICK(c, 15);
    // 005a55  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5a55u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 005a5c  ret 
    X86_AT(c, 0x5a5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5a36u, "ran off the end of a function");
}
void f_00005a3e(X86Cpu& c) {
    X86_TICK(c, 7);
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
    X86_TICK(c, 15);
    // 005a55  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5a55u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 005a5c  ret 
    X86_AT(c, 0x5a5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5a3eu, "ran off the end of a function");
}
void f_00005a43(X86Cpu& c) {
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
    X86_TICK(c, 15);
    // 005a55  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5a55u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 005a5c  ret 
    X86_AT(c, 0x5a5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5a43u, "ran off the end of a function");
}
void f_00005a48(X86Cpu& c) {
    X86_TICK(c, 9);
    // 005a48  mov byte ptr gs:[ebp + 0x220], 0x13
    X86_AT(c, 0x5a48u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x13u);
    // 005a50  call 0x5a60
    X86_AT(c, 0x5a50u);
    push32(c, 0x5a55u); f_00005a60(c); X86_RET(c, 0x5a55u);
    X86_TICK(c, 15);
    // 005a55  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5a55u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 005a5c  ret 
    X86_AT(c, 0x5a5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5a48u, "ran off the end of a function");
}
void f_00005a50(X86Cpu& c) {
    X86_TICK(c, 7);
    // 005a50  call 0x5a60
    X86_AT(c, 0x5a50u);
    push32(c, 0x5a55u); f_00005a60(c); X86_RET(c, 0x5a55u);
    X86_TICK(c, 15);
    // 005a55  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5a55u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 005a5c  ret 
    X86_AT(c, 0x5a5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5a50u, "ran off the end of a function");
}
void f_00005a55(X86Cpu& c) {
    X86_TICK(c, 15);
    // 005a55  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x5a55u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 005a5c  ret 
    X86_AT(c, 0x5a5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5a55u, "ran off the end of a function");
}
void f_00005a5c(X86Cpu& c) {
    X86_TICK(c, 10);
    // 005a5c  ret 
    X86_AT(c, 0x5a5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5a5cu, "ran off the end of a function");
}
void f_00005a60(X86Cpu& c) {
    goto L_5a60;
L_4026:
    X86_TICK(c, 15);
    // 004026  mov eax, dword ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x4026u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)));
    // 00402d  mov ecx, dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x402du);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 004034  cmp ax, cx
    X86_AT(c, 0x4034u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 004037  jle 0x403b
    X86_AT(c, 0x4037u);
    if (x86_cc(c, 14)) { goto L_403b; }
    X86_TICK(c, 3);
    // 004039  xchg cx, ax
    X86_AT(c, 0x4039u);
    { uint32_t t = (c.r[1] & 0xFFFFu); s16(c, 1, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_403b:
    X86_TICK(c, 17);
    // 00403b  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x403bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 004043  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0x4043u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
    // 00404b  shr eax, 0x10
    X86_AT(c, 0x404bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00404e  shr ecx, 0x10
    X86_AT(c, 0x404eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004051  cmp ax, cx
    X86_AT(c, 0x4051u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 004054  jle 0x4057
    X86_AT(c, 0x4054u);
    if (x86_cc(c, 14)) { goto L_4057; }
    X86_TICK(c, 3);
    // 004056  xchg ecx, eax
    X86_AT(c, 0x4056u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
L_4057:
    X86_TICK(c, 60);
    // 004057  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4057u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 00405f  sub cx, ax
    X86_AT(c, 0x405fu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004062  inc ecx
    X86_AT(c, 0x4062u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 004063  push ecx
    X86_AT(c, 0x4063u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 004064  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x4064u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 004068  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4068u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 004070  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4070u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004075  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4075u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004079  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4079u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004080  movzx eax, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x4080u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)));
    // 004088  mov eax, dword ptr cs:[eax*4 + 0x7fec]
    X86_AT(c, 0x4088u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x7FECu)));
    // 004090  mov dword ptr gs:[ebp + 0x324], eax
    X86_AT(c, 0x4090u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), c.r[0]);
L_4097:
    X86_TICK(c, 7);
    // 004097  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x4097u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x409eu); x86_call(c, t); X86_RET(c, 0x409eu); }
    X86_TICK(c, 28);
    // 00409e  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x409eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0040a6  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x40a6u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0040aa  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x40aau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0040b1  dec dword ptr [esp]
    X86_AT(c, 0x40b1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0040b4  jne 0x4097
    X86_AT(c, 0x40b4u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4097u); goto L_4097; }
    X86_TICK(c, 12);
    // 0040b6  add esp, 4
    X86_AT(c, 0x40b6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0040b9  ret 
    X86_AT(c, 0x40b9u);
    c.eip = pop32(c); return;
L_5a60:
    X86_TICK(c, 12);
    // 005a60  cmp word ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0x5a60u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), 0x0u, 0, 2);
    // 005a69  je 0x5ac9
    X86_AT(c, 0x5a69u);
    if (x86_cc(c, 4)) { goto L_5ac9; }
    X86_TICK(c, 5);
    // 005a6b  jl 0x5a9c
    X86_AT(c, 0x5a6bu);
    if (x86_cc(c, 12)) { goto L_5a9c; }
    X86_TICK(c, 26);
    // 005a6d  push dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x5a6du);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u))); push32(c, v); }
    // 005a74  mov ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x5a74u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))));
    // 005a7c  add ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x5a7cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), 0, 2)); }
    // 005a84  dec ax
    X86_AT(c, 0x5a84u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 005a86  mov word ptr gs:[ebp + 0x1c8], ax
    X86_AT(c, 0x5a86u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), (c.r[0] & 0xFFFFu));
    // 005a8e  call 0x4026
    X86_AT(c, 0x5a8eu);
    push32(c, 0x5a93u); f_00004026(c); X86_RET(c, 0x5a93u);
    X86_TICK(c, 12);
    // 005a93  pop dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x5a93u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), v); }
    // 005a9a  jmp 0x5ac9
    X86_AT(c, 0x5a9au);
    goto L_5ac9;
L_5a9c:
    X86_TICK(c, 26);
    // 005a9c  push dword ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x5a9cu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))); push32(c, v); }
    // 005aa3  mov ax, word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x5aa3u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u))));
    // 005aab  add ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x5aabu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), 0, 2)); }
    // 005ab3  inc ax
    X86_AT(c, 0x5ab3u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 005ab5  mov word ptr gs:[ebp + 0x1c4], ax
    X86_AT(c, 0x5ab5u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), (c.r[0] & 0xFFFFu));
    // 005abd  call 0x4026
    X86_AT(c, 0x5abdu);
    push32(c, 0x5ac2u); f_00004026(c); X86_RET(c, 0x5ac2u);
    X86_TICK(c, 5);
    // 005ac2  pop dword ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x5ac2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), v); }
L_5ac9:
    X86_TICK(c, 12);
    // 005ac9  cmp word ptr gs:[ebp + 0x3a6], 0
    X86_AT(c, 0x5ac9u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))), 0x0u, 0, 2);
    // 005ad2  je 0x5b17
    X86_AT(c, 0x5ad2u);
    if (x86_cc(c, 4)) { goto L_5b17; }
    X86_TICK(c, 5);
    // 005ad4  jl 0x5af8
    X86_AT(c, 0x5ad4u);
    if (x86_cc(c, 12)) { goto L_5af8; }
    X86_TICK(c, 21);
    // 005ad6  mov ax, word ptr gs:[ebp + 0x1c6]
    X86_AT(c, 0x5ad6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u))));
    // 005ade  add ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x5adeu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))), 0, 2)); }
    // 005ae6  dec ax
    X86_AT(c, 0x5ae6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 005ae8  mov word ptr gs:[ebp + 0x1ca], ax
    X86_AT(c, 0x5ae8u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[0] & 0xFFFFu));
    // 005af0  jmp 0x4026
    X86_AT(c, 0x5af0u);
    X86_POLL(c, 0x4026u); goto L_4026;
L_5af8:
    X86_TICK(c, 21);
    // 005af8  mov ax, word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0x5af8u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu))));
    // 005b00  add ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x5b00u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))), 0, 2)); }
    // 005b08  inc ax
    X86_AT(c, 0x5b08u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 005b0a  mov word ptr gs:[ebp + 0x1c6], ax
    X86_AT(c, 0x5b0au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u)), (c.r[0] & 0xFFFFu));
    // 005b12  jmp 0x4026
    X86_AT(c, 0x5b12u);
    X86_POLL(c, 0x4026u); goto L_4026;
L_5b17:
    X86_TICK(c, 10);
    // 005b17  ret 
    X86_AT(c, 0x5b17u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5a60u, "ran off the end of a function");
}
void f_00005a69(X86Cpu& c) {
    goto L_5a69;
L_4026:
    X86_TICK(c, 15);
    // 004026  mov eax, dword ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x4026u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)));
    // 00402d  mov ecx, dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x402du);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 004034  cmp ax, cx
    X86_AT(c, 0x4034u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 004037  jle 0x403b
    X86_AT(c, 0x4037u);
    if (x86_cc(c, 14)) { goto L_403b; }
    X86_TICK(c, 3);
    // 004039  xchg cx, ax
    X86_AT(c, 0x4039u);
    { uint32_t t = (c.r[1] & 0xFFFFu); s16(c, 1, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_403b:
    X86_TICK(c, 17);
    // 00403b  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x403bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 004043  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0x4043u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
    // 00404b  shr eax, 0x10
    X86_AT(c, 0x404bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00404e  shr ecx, 0x10
    X86_AT(c, 0x404eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004051  cmp ax, cx
    X86_AT(c, 0x4051u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 004054  jle 0x4057
    X86_AT(c, 0x4054u);
    if (x86_cc(c, 14)) { goto L_4057; }
    X86_TICK(c, 3);
    // 004056  xchg ecx, eax
    X86_AT(c, 0x4056u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
L_4057:
    X86_TICK(c, 60);
    // 004057  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4057u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 00405f  sub cx, ax
    X86_AT(c, 0x405fu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004062  inc ecx
    X86_AT(c, 0x4062u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 004063  push ecx
    X86_AT(c, 0x4063u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 004064  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x4064u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 004068  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4068u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 004070  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4070u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004075  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4075u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004079  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4079u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004080  movzx eax, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x4080u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)));
    // 004088  mov eax, dword ptr cs:[eax*4 + 0x7fec]
    X86_AT(c, 0x4088u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x7FECu)));
    // 004090  mov dword ptr gs:[ebp + 0x324], eax
    X86_AT(c, 0x4090u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), c.r[0]);
L_4097:
    X86_TICK(c, 7);
    // 004097  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x4097u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x409eu); x86_call(c, t); X86_RET(c, 0x409eu); }
    X86_TICK(c, 28);
    // 00409e  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x409eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0040a6  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x40a6u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0040aa  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x40aau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0040b1  dec dword ptr [esp]
    X86_AT(c, 0x40b1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0040b4  jne 0x4097
    X86_AT(c, 0x40b4u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4097u); goto L_4097; }
    X86_TICK(c, 12);
    // 0040b6  add esp, 4
    X86_AT(c, 0x40b6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0040b9  ret 
    X86_AT(c, 0x40b9u);
    c.eip = pop32(c); return;
L_5a69:
    X86_TICK(c, 5);
    // 005a69  je 0x5ac9
    X86_AT(c, 0x5a69u);
    if (x86_cc(c, 4)) { goto L_5ac9; }
    X86_TICK(c, 5);
    // 005a6b  jl 0x5a9c
    X86_AT(c, 0x5a6bu);
    if (x86_cc(c, 12)) { goto L_5a9c; }
    X86_TICK(c, 26);
    // 005a6d  push dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x5a6du);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u))); push32(c, v); }
    // 005a74  mov ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x5a74u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))));
    // 005a7c  add ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x5a7cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), 0, 2)); }
    // 005a84  dec ax
    X86_AT(c, 0x5a84u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 005a86  mov word ptr gs:[ebp + 0x1c8], ax
    X86_AT(c, 0x5a86u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), (c.r[0] & 0xFFFFu));
    // 005a8e  call 0x4026
    X86_AT(c, 0x5a8eu);
    push32(c, 0x5a93u); f_00004026(c); X86_RET(c, 0x5a93u);
    X86_TICK(c, 12);
    // 005a93  pop dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x5a93u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), v); }
    // 005a9a  jmp 0x5ac9
    X86_AT(c, 0x5a9au);
    goto L_5ac9;
L_5a9c:
    X86_TICK(c, 26);
    // 005a9c  push dword ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x5a9cu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))); push32(c, v); }
    // 005aa3  mov ax, word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x5aa3u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u))));
    // 005aab  add ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x5aabu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), 0, 2)); }
    // 005ab3  inc ax
    X86_AT(c, 0x5ab3u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 005ab5  mov word ptr gs:[ebp + 0x1c4], ax
    X86_AT(c, 0x5ab5u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), (c.r[0] & 0xFFFFu));
    // 005abd  call 0x4026
    X86_AT(c, 0x5abdu);
    push32(c, 0x5ac2u); f_00004026(c); X86_RET(c, 0x5ac2u);
    X86_TICK(c, 5);
    // 005ac2  pop dword ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x5ac2u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), v); }
L_5ac9:
    X86_TICK(c, 12);
    // 005ac9  cmp word ptr gs:[ebp + 0x3a6], 0
    X86_AT(c, 0x5ac9u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))), 0x0u, 0, 2);
    // 005ad2  je 0x5b17
    X86_AT(c, 0x5ad2u);
    if (x86_cc(c, 4)) { goto L_5b17; }
    X86_TICK(c, 5);
    // 005ad4  jl 0x5af8
    X86_AT(c, 0x5ad4u);
    if (x86_cc(c, 12)) { goto L_5af8; }
    X86_TICK(c, 21);
    // 005ad6  mov ax, word ptr gs:[ebp + 0x1c6]
    X86_AT(c, 0x5ad6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u))));
    // 005ade  add ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x5adeu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))), 0, 2)); }
    // 005ae6  dec ax
    X86_AT(c, 0x5ae6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 005ae8  mov word ptr gs:[ebp + 0x1ca], ax
    X86_AT(c, 0x5ae8u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[0] & 0xFFFFu));
    // 005af0  jmp 0x4026
    X86_AT(c, 0x5af0u);
    X86_POLL(c, 0x4026u); goto L_4026;
L_5af8:
    X86_TICK(c, 21);
    // 005af8  mov ax, word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0x5af8u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu))));
    // 005b00  add ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x5b00u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))), 0, 2)); }
    // 005b08  inc ax
    X86_AT(c, 0x5b08u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 005b0a  mov word ptr gs:[ebp + 0x1c6], ax
    X86_AT(c, 0x5b0au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u)), (c.r[0] & 0xFFFFu));
    // 005b12  jmp 0x4026
    X86_AT(c, 0x5b12u);
    X86_POLL(c, 0x4026u); goto L_4026;
L_5b17:
    X86_TICK(c, 10);
    // 005b17  ret 
    X86_AT(c, 0x5b17u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5a69u, "ran off the end of a function");
}
void f_00005ac9(X86Cpu& c) {
    goto L_5ac9;
L_4026:
    X86_TICK(c, 15);
    // 004026  mov eax, dword ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x4026u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)));
    // 00402d  mov ecx, dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x402du);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 004034  cmp ax, cx
    X86_AT(c, 0x4034u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 004037  jle 0x403b
    X86_AT(c, 0x4037u);
    if (x86_cc(c, 14)) { goto L_403b; }
    X86_TICK(c, 3);
    // 004039  xchg cx, ax
    X86_AT(c, 0x4039u);
    { uint32_t t = (c.r[1] & 0xFFFFu); s16(c, 1, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_403b:
    X86_TICK(c, 17);
    // 00403b  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x403bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 004043  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0x4043u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
    // 00404b  shr eax, 0x10
    X86_AT(c, 0x404bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00404e  shr ecx, 0x10
    X86_AT(c, 0x404eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004051  cmp ax, cx
    X86_AT(c, 0x4051u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 004054  jle 0x4057
    X86_AT(c, 0x4054u);
    if (x86_cc(c, 14)) { goto L_4057; }
    X86_TICK(c, 3);
    // 004056  xchg ecx, eax
    X86_AT(c, 0x4056u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
L_4057:
    X86_TICK(c, 60);
    // 004057  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4057u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 00405f  sub cx, ax
    X86_AT(c, 0x405fu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004062  inc ecx
    X86_AT(c, 0x4062u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 004063  push ecx
    X86_AT(c, 0x4063u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 004064  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x4064u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 004068  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4068u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 004070  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4070u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004075  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4075u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004079  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4079u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004080  movzx eax, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x4080u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)));
    // 004088  mov eax, dword ptr cs:[eax*4 + 0x7fec]
    X86_AT(c, 0x4088u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x7FECu)));
    // 004090  mov dword ptr gs:[ebp + 0x324], eax
    X86_AT(c, 0x4090u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), c.r[0]);
L_4097:
    X86_TICK(c, 7);
    // 004097  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x4097u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x409eu); x86_call(c, t); X86_RET(c, 0x409eu); }
    X86_TICK(c, 28);
    // 00409e  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x409eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0040a6  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x40a6u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0040aa  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x40aau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0040b1  dec dword ptr [esp]
    X86_AT(c, 0x40b1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0040b4  jne 0x4097
    X86_AT(c, 0x40b4u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4097u); goto L_4097; }
    X86_TICK(c, 12);
    // 0040b6  add esp, 4
    X86_AT(c, 0x40b6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0040b9  ret 
    X86_AT(c, 0x40b9u);
    c.eip = pop32(c); return;
L_5ac9:
    X86_TICK(c, 12);
    // 005ac9  cmp word ptr gs:[ebp + 0x3a6], 0
    X86_AT(c, 0x5ac9u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))), 0x0u, 0, 2);
    // 005ad2  je 0x5b17
    X86_AT(c, 0x5ad2u);
    if (x86_cc(c, 4)) { goto L_5b17; }
    X86_TICK(c, 5);
    // 005ad4  jl 0x5af8
    X86_AT(c, 0x5ad4u);
    if (x86_cc(c, 12)) { goto L_5af8; }
    X86_TICK(c, 21);
    // 005ad6  mov ax, word ptr gs:[ebp + 0x1c6]
    X86_AT(c, 0x5ad6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u))));
    // 005ade  add ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x5adeu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))), 0, 2)); }
    // 005ae6  dec ax
    X86_AT(c, 0x5ae6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 005ae8  mov word ptr gs:[ebp + 0x1ca], ax
    X86_AT(c, 0x5ae8u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[0] & 0xFFFFu));
    // 005af0  jmp 0x4026
    X86_AT(c, 0x5af0u);
    X86_POLL(c, 0x4026u); goto L_4026;
L_5af8:
    X86_TICK(c, 21);
    // 005af8  mov ax, word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0x5af8u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu))));
    // 005b00  add ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x5b00u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))), 0, 2)); }
    // 005b08  inc ax
    X86_AT(c, 0x5b08u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 005b0a  mov word ptr gs:[ebp + 0x1c6], ax
    X86_AT(c, 0x5b0au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u)), (c.r[0] & 0xFFFFu));
    // 005b12  jmp 0x4026
    X86_AT(c, 0x5b12u);
    X86_POLL(c, 0x4026u); goto L_4026;
L_5b17:
    X86_TICK(c, 10);
    // 005b17  ret 
    X86_AT(c, 0x5b17u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5ac9u, "ran off the end of a function");
}
void f_00005ad2(X86Cpu& c) {
    goto L_5ad2;
L_4026:
    X86_TICK(c, 15);
    // 004026  mov eax, dword ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x4026u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)));
    // 00402d  mov ecx, dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x402du);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 004034  cmp ax, cx
    X86_AT(c, 0x4034u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 004037  jle 0x403b
    X86_AT(c, 0x4037u);
    if (x86_cc(c, 14)) { goto L_403b; }
    X86_TICK(c, 3);
    // 004039  xchg cx, ax
    X86_AT(c, 0x4039u);
    { uint32_t t = (c.r[1] & 0xFFFFu); s16(c, 1, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_403b:
    X86_TICK(c, 17);
    // 00403b  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x403bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 004043  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0x4043u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
    // 00404b  shr eax, 0x10
    X86_AT(c, 0x404bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00404e  shr ecx, 0x10
    X86_AT(c, 0x404eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004051  cmp ax, cx
    X86_AT(c, 0x4051u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 004054  jle 0x4057
    X86_AT(c, 0x4054u);
    if (x86_cc(c, 14)) { goto L_4057; }
    X86_TICK(c, 3);
    // 004056  xchg ecx, eax
    X86_AT(c, 0x4056u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
L_4057:
    X86_TICK(c, 60);
    // 004057  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4057u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 00405f  sub cx, ax
    X86_AT(c, 0x405fu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004062  inc ecx
    X86_AT(c, 0x4062u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 004063  push ecx
    X86_AT(c, 0x4063u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 004064  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x4064u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 004068  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4068u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 004070  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4070u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004075  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4075u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004079  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4079u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004080  movzx eax, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x4080u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)));
    // 004088  mov eax, dword ptr cs:[eax*4 + 0x7fec]
    X86_AT(c, 0x4088u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x7FECu)));
    // 004090  mov dword ptr gs:[ebp + 0x324], eax
    X86_AT(c, 0x4090u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), c.r[0]);
L_4097:
    X86_TICK(c, 7);
    // 004097  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x4097u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x409eu); x86_call(c, t); X86_RET(c, 0x409eu); }
    X86_TICK(c, 28);
    // 00409e  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x409eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0040a6  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x40a6u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0040aa  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x40aau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0040b1  dec dword ptr [esp]
    X86_AT(c, 0x40b1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0040b4  jne 0x4097
    X86_AT(c, 0x40b4u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4097u); goto L_4097; }
    X86_TICK(c, 12);
    // 0040b6  add esp, 4
    X86_AT(c, 0x40b6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0040b9  ret 
    X86_AT(c, 0x40b9u);
    c.eip = pop32(c); return;
L_5ad2:
    X86_TICK(c, 5);
    // 005ad2  je 0x5b17
    X86_AT(c, 0x5ad2u);
    if (x86_cc(c, 4)) { goto L_5b17; }
    X86_TICK(c, 5);
    // 005ad4  jl 0x5af8
    X86_AT(c, 0x5ad4u);
    if (x86_cc(c, 12)) { goto L_5af8; }
    X86_TICK(c, 21);
    // 005ad6  mov ax, word ptr gs:[ebp + 0x1c6]
    X86_AT(c, 0x5ad6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u))));
    // 005ade  add ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x5adeu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))), 0, 2)); }
    // 005ae6  dec ax
    X86_AT(c, 0x5ae6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 005ae8  mov word ptr gs:[ebp + 0x1ca], ax
    X86_AT(c, 0x5ae8u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[0] & 0xFFFFu));
    // 005af0  jmp 0x4026
    X86_AT(c, 0x5af0u);
    X86_POLL(c, 0x4026u); goto L_4026;
L_5af8:
    X86_TICK(c, 21);
    // 005af8  mov ax, word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0x5af8u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu))));
    // 005b00  add ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x5b00u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))), 0, 2)); }
    // 005b08  inc ax
    X86_AT(c, 0x5b08u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 005b0a  mov word ptr gs:[ebp + 0x1c6], ax
    X86_AT(c, 0x5b0au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u)), (c.r[0] & 0xFFFFu));
    // 005b12  jmp 0x4026
    X86_AT(c, 0x5b12u);
    X86_POLL(c, 0x4026u); goto L_4026;
L_5b17:
    X86_TICK(c, 10);
    // 005b17  ret 
    X86_AT(c, 0x5b17u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5ad2u, "ran off the end of a function");
}
void f_00005ad4(X86Cpu& c) {
    goto L_5ad4;
L_4026:
    X86_TICK(c, 15);
    // 004026  mov eax, dword ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x4026u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)));
    // 00402d  mov ecx, dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x402du);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 004034  cmp ax, cx
    X86_AT(c, 0x4034u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 004037  jle 0x403b
    X86_AT(c, 0x4037u);
    if (x86_cc(c, 14)) { goto L_403b; }
    X86_TICK(c, 3);
    // 004039  xchg cx, ax
    X86_AT(c, 0x4039u);
    { uint32_t t = (c.r[1] & 0xFFFFu); s16(c, 1, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_403b:
    X86_TICK(c, 17);
    // 00403b  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x403bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 004043  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0x4043u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
    // 00404b  shr eax, 0x10
    X86_AT(c, 0x404bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00404e  shr ecx, 0x10
    X86_AT(c, 0x404eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004051  cmp ax, cx
    X86_AT(c, 0x4051u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 004054  jle 0x4057
    X86_AT(c, 0x4054u);
    if (x86_cc(c, 14)) { goto L_4057; }
    X86_TICK(c, 3);
    // 004056  xchg ecx, eax
    X86_AT(c, 0x4056u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
L_4057:
    X86_TICK(c, 60);
    // 004057  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4057u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 00405f  sub cx, ax
    X86_AT(c, 0x405fu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004062  inc ecx
    X86_AT(c, 0x4062u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 004063  push ecx
    X86_AT(c, 0x4063u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 004064  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x4064u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 004068  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4068u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 004070  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4070u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004075  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4075u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004079  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4079u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004080  movzx eax, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x4080u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)));
    // 004088  mov eax, dword ptr cs:[eax*4 + 0x7fec]
    X86_AT(c, 0x4088u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x7FECu)));
    // 004090  mov dword ptr gs:[ebp + 0x324], eax
    X86_AT(c, 0x4090u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), c.r[0]);
L_4097:
    X86_TICK(c, 7);
    // 004097  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x4097u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x409eu); x86_call(c, t); X86_RET(c, 0x409eu); }
    X86_TICK(c, 28);
    // 00409e  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x409eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0040a6  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x40a6u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0040aa  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x40aau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0040b1  dec dword ptr [esp]
    X86_AT(c, 0x40b1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0040b4  jne 0x4097
    X86_AT(c, 0x40b4u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4097u); goto L_4097; }
    X86_TICK(c, 12);
    // 0040b6  add esp, 4
    X86_AT(c, 0x40b6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0040b9  ret 
    X86_AT(c, 0x40b9u);
    c.eip = pop32(c); return;
L_5ad4:
    X86_TICK(c, 5);
    // 005ad4  jl 0x5af8
    X86_AT(c, 0x5ad4u);
    if (x86_cc(c, 12)) { goto L_5af8; }
    X86_TICK(c, 21);
    // 005ad6  mov ax, word ptr gs:[ebp + 0x1c6]
    X86_AT(c, 0x5ad6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u))));
    // 005ade  add ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x5adeu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))), 0, 2)); }
    // 005ae6  dec ax
    X86_AT(c, 0x5ae6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 005ae8  mov word ptr gs:[ebp + 0x1ca], ax
    X86_AT(c, 0x5ae8u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[0] & 0xFFFFu));
    // 005af0  jmp 0x4026
    X86_AT(c, 0x5af0u);
    X86_POLL(c, 0x4026u); goto L_4026;
L_5af8:
    X86_TICK(c, 21);
    // 005af8  mov ax, word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0x5af8u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu))));
    // 005b00  add ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x5b00u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))), 0, 2)); }
    // 005b08  inc ax
    X86_AT(c, 0x5b08u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 005b0a  mov word ptr gs:[ebp + 0x1c6], ax
    X86_AT(c, 0x5b0au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u)), (c.r[0] & 0xFFFFu));
    // 005b12  jmp 0x4026
    X86_AT(c, 0x5b12u);
    X86_POLL(c, 0x4026u); goto L_4026;
    x86_fault(c, 0x5ad4u, "ran off the end of a function");
}
void f_00005af8(X86Cpu& c) {
    goto L_5af8;
L_4026:
    X86_TICK(c, 15);
    // 004026  mov eax, dword ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x4026u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)));
    // 00402d  mov ecx, dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x402du);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 004034  cmp ax, cx
    X86_AT(c, 0x4034u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 004037  jle 0x403b
    X86_AT(c, 0x4037u);
    if (x86_cc(c, 14)) { goto L_403b; }
    X86_TICK(c, 3);
    // 004039  xchg cx, ax
    X86_AT(c, 0x4039u);
    { uint32_t t = (c.r[1] & 0xFFFFu); s16(c, 1, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_403b:
    X86_TICK(c, 17);
    // 00403b  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x403bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 004043  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0x4043u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
    // 00404b  shr eax, 0x10
    X86_AT(c, 0x404bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00404e  shr ecx, 0x10
    X86_AT(c, 0x404eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004051  cmp ax, cx
    X86_AT(c, 0x4051u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 004054  jle 0x4057
    X86_AT(c, 0x4054u);
    if (x86_cc(c, 14)) { goto L_4057; }
    X86_TICK(c, 3);
    // 004056  xchg ecx, eax
    X86_AT(c, 0x4056u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
L_4057:
    X86_TICK(c, 60);
    // 004057  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4057u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 00405f  sub cx, ax
    X86_AT(c, 0x405fu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004062  inc ecx
    X86_AT(c, 0x4062u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 004063  push ecx
    X86_AT(c, 0x4063u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 004064  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x4064u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 004068  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4068u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 004070  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4070u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004075  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4075u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004079  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4079u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004080  movzx eax, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x4080u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)));
    // 004088  mov eax, dword ptr cs:[eax*4 + 0x7fec]
    X86_AT(c, 0x4088u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x7FECu)));
    // 004090  mov dword ptr gs:[ebp + 0x324], eax
    X86_AT(c, 0x4090u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), c.r[0]);
L_4097:
    X86_TICK(c, 7);
    // 004097  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x4097u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x409eu); x86_call(c, t); X86_RET(c, 0x409eu); }
    X86_TICK(c, 28);
    // 00409e  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x409eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0040a6  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x40a6u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0040aa  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x40aau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0040b1  dec dword ptr [esp]
    X86_AT(c, 0x40b1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0040b4  jne 0x4097
    X86_AT(c, 0x40b4u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4097u); goto L_4097; }
    X86_TICK(c, 12);
    // 0040b6  add esp, 4
    X86_AT(c, 0x40b6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0040b9  ret 
    X86_AT(c, 0x40b9u);
    c.eip = pop32(c); return;
L_5af8:
    X86_TICK(c, 21);
    // 005af8  mov ax, word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0x5af8u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu))));
    // 005b00  add ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x5b00u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))), 0, 2)); }
    // 005b08  inc ax
    X86_AT(c, 0x5b08u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 005b0a  mov word ptr gs:[ebp + 0x1c6], ax
    X86_AT(c, 0x5b0au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u)), (c.r[0] & 0xFFFFu));
    // 005b12  jmp 0x4026
    X86_AT(c, 0x5b12u);
    X86_POLL(c, 0x4026u); goto L_4026;
    x86_fault(c, 0x5af8u, "ran off the end of a function");
}
void f_00005b00(X86Cpu& c) {
    goto L_5b00;
L_4026:
    X86_TICK(c, 15);
    // 004026  mov eax, dword ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x4026u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)));
    // 00402d  mov ecx, dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x402du);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 004034  cmp ax, cx
    X86_AT(c, 0x4034u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 004037  jle 0x403b
    X86_AT(c, 0x4037u);
    if (x86_cc(c, 14)) { goto L_403b; }
    X86_TICK(c, 3);
    // 004039  xchg cx, ax
    X86_AT(c, 0x4039u);
    { uint32_t t = (c.r[1] & 0xFFFFu); s16(c, 1, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_403b:
    X86_TICK(c, 17);
    // 00403b  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x403bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 004043  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0x4043u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
    // 00404b  shr eax, 0x10
    X86_AT(c, 0x404bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00404e  shr ecx, 0x10
    X86_AT(c, 0x404eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004051  cmp ax, cx
    X86_AT(c, 0x4051u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 004054  jle 0x4057
    X86_AT(c, 0x4054u);
    if (x86_cc(c, 14)) { goto L_4057; }
    X86_TICK(c, 3);
    // 004056  xchg ecx, eax
    X86_AT(c, 0x4056u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
L_4057:
    X86_TICK(c, 60);
    // 004057  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4057u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 00405f  sub cx, ax
    X86_AT(c, 0x405fu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004062  inc ecx
    X86_AT(c, 0x4062u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 004063  push ecx
    X86_AT(c, 0x4063u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 004064  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x4064u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 004068  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4068u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 004070  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4070u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004075  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4075u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004079  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4079u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004080  movzx eax, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x4080u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)));
    // 004088  mov eax, dword ptr cs:[eax*4 + 0x7fec]
    X86_AT(c, 0x4088u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x7FECu)));
    // 004090  mov dword ptr gs:[ebp + 0x324], eax
    X86_AT(c, 0x4090u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), c.r[0]);
L_4097:
    X86_TICK(c, 7);
    // 004097  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x4097u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x409eu); x86_call(c, t); X86_RET(c, 0x409eu); }
    X86_TICK(c, 28);
    // 00409e  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x409eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0040a6  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x40a6u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0040aa  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x40aau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0040b1  dec dword ptr [esp]
    X86_AT(c, 0x40b1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0040b4  jne 0x4097
    X86_AT(c, 0x40b4u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4097u); goto L_4097; }
    X86_TICK(c, 12);
    // 0040b6  add esp, 4
    X86_AT(c, 0x40b6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0040b9  ret 
    X86_AT(c, 0x40b9u);
    c.eip = pop32(c); return;
L_5b00:
    X86_TICK(c, 17);
    // 005b00  add ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x5b00u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))), 0, 2)); }
    // 005b08  inc ax
    X86_AT(c, 0x5b08u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 005b0a  mov word ptr gs:[ebp + 0x1c6], ax
    X86_AT(c, 0x5b0au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u)), (c.r[0] & 0xFFFFu));
    // 005b12  jmp 0x4026
    X86_AT(c, 0x5b12u);
    X86_POLL(c, 0x4026u); goto L_4026;
    x86_fault(c, 0x5b00u, "ran off the end of a function");
}
void f_00005b08(X86Cpu& c) {
    goto L_5b08;
L_4026:
    X86_TICK(c, 15);
    // 004026  mov eax, dword ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x4026u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)));
    // 00402d  mov ecx, dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x402du);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 004034  cmp ax, cx
    X86_AT(c, 0x4034u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 004037  jle 0x403b
    X86_AT(c, 0x4037u);
    if (x86_cc(c, 14)) { goto L_403b; }
    X86_TICK(c, 3);
    // 004039  xchg cx, ax
    X86_AT(c, 0x4039u);
    { uint32_t t = (c.r[1] & 0xFFFFu); s16(c, 1, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_403b:
    X86_TICK(c, 17);
    // 00403b  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x403bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 004043  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0x4043u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
    // 00404b  shr eax, 0x10
    X86_AT(c, 0x404bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00404e  shr ecx, 0x10
    X86_AT(c, 0x404eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004051  cmp ax, cx
    X86_AT(c, 0x4051u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 004054  jle 0x4057
    X86_AT(c, 0x4054u);
    if (x86_cc(c, 14)) { goto L_4057; }
    X86_TICK(c, 3);
    // 004056  xchg ecx, eax
    X86_AT(c, 0x4056u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
L_4057:
    X86_TICK(c, 60);
    // 004057  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4057u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 00405f  sub cx, ax
    X86_AT(c, 0x405fu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004062  inc ecx
    X86_AT(c, 0x4062u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 004063  push ecx
    X86_AT(c, 0x4063u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 004064  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x4064u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 004068  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4068u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 004070  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4070u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004075  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4075u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004079  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4079u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004080  movzx eax, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x4080u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)));
    // 004088  mov eax, dword ptr cs:[eax*4 + 0x7fec]
    X86_AT(c, 0x4088u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x7FECu)));
    // 004090  mov dword ptr gs:[ebp + 0x324], eax
    X86_AT(c, 0x4090u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), c.r[0]);
L_4097:
    X86_TICK(c, 7);
    // 004097  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x4097u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x409eu); x86_call(c, t); X86_RET(c, 0x409eu); }
    X86_TICK(c, 28);
    // 00409e  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x409eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0040a6  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x40a6u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0040aa  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x40aau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0040b1  dec dword ptr [esp]
    X86_AT(c, 0x40b1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0040b4  jne 0x4097
    X86_AT(c, 0x40b4u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4097u); goto L_4097; }
    X86_TICK(c, 12);
    // 0040b6  add esp, 4
    X86_AT(c, 0x40b6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0040b9  ret 
    X86_AT(c, 0x40b9u);
    c.eip = pop32(c); return;
L_5b08:
    X86_TICK(c, 11);
    // 005b08  inc ax
    X86_AT(c, 0x5b08u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 005b0a  mov word ptr gs:[ebp + 0x1c6], ax
    X86_AT(c, 0x5b0au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u)), (c.r[0] & 0xFFFFu));
    // 005b12  jmp 0x4026
    X86_AT(c, 0x5b12u);
    X86_POLL(c, 0x4026u); goto L_4026;
    x86_fault(c, 0x5b08u, "ran off the end of a function");
}
void f_00005b0a(X86Cpu& c) {
    goto L_5b0a;
L_4026:
    X86_TICK(c, 15);
    // 004026  mov eax, dword ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x4026u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)));
    // 00402d  mov ecx, dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x402du);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 004034  cmp ax, cx
    X86_AT(c, 0x4034u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 004037  jle 0x403b
    X86_AT(c, 0x4037u);
    if (x86_cc(c, 14)) { goto L_403b; }
    X86_TICK(c, 3);
    // 004039  xchg cx, ax
    X86_AT(c, 0x4039u);
    { uint32_t t = (c.r[1] & 0xFFFFu); s16(c, 1, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_403b:
    X86_TICK(c, 17);
    // 00403b  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x403bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 004043  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0x4043u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
    // 00404b  shr eax, 0x10
    X86_AT(c, 0x404bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00404e  shr ecx, 0x10
    X86_AT(c, 0x404eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004051  cmp ax, cx
    X86_AT(c, 0x4051u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 004054  jle 0x4057
    X86_AT(c, 0x4054u);
    if (x86_cc(c, 14)) { goto L_4057; }
    X86_TICK(c, 3);
    // 004056  xchg ecx, eax
    X86_AT(c, 0x4056u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
L_4057:
    X86_TICK(c, 60);
    // 004057  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4057u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 00405f  sub cx, ax
    X86_AT(c, 0x405fu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004062  inc ecx
    X86_AT(c, 0x4062u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 004063  push ecx
    X86_AT(c, 0x4063u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 004064  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x4064u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 004068  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4068u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 004070  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4070u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004075  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4075u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004079  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4079u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004080  movzx eax, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x4080u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)));
    // 004088  mov eax, dword ptr cs:[eax*4 + 0x7fec]
    X86_AT(c, 0x4088u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x7FECu)));
    // 004090  mov dword ptr gs:[ebp + 0x324], eax
    X86_AT(c, 0x4090u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), c.r[0]);
L_4097:
    X86_TICK(c, 7);
    // 004097  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x4097u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x409eu); x86_call(c, t); X86_RET(c, 0x409eu); }
    X86_TICK(c, 28);
    // 00409e  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x409eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0040a6  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x40a6u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0040aa  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x40aau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0040b1  dec dword ptr [esp]
    X86_AT(c, 0x40b1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0040b4  jne 0x4097
    X86_AT(c, 0x40b4u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4097u); goto L_4097; }
    X86_TICK(c, 12);
    // 0040b6  add esp, 4
    X86_AT(c, 0x40b6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0040b9  ret 
    X86_AT(c, 0x40b9u);
    c.eip = pop32(c); return;
L_5b0a:
    X86_TICK(c, 9);
    // 005b0a  mov word ptr gs:[ebp + 0x1c6], ax
    X86_AT(c, 0x5b0au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u)), (c.r[0] & 0xFFFFu));
    // 005b12  jmp 0x4026
    X86_AT(c, 0x5b12u);
    X86_POLL(c, 0x4026u); goto L_4026;
    x86_fault(c, 0x5b0au, "ran off the end of a function");
}
void f_00005b12(X86Cpu& c) {
    goto L_5b12;
L_4026:
    X86_TICK(c, 15);
    // 004026  mov eax, dword ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x4026u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)));
    // 00402d  mov ecx, dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x402du);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 004034  cmp ax, cx
    X86_AT(c, 0x4034u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 004037  jle 0x403b
    X86_AT(c, 0x4037u);
    if (x86_cc(c, 14)) { goto L_403b; }
    X86_TICK(c, 3);
    // 004039  xchg cx, ax
    X86_AT(c, 0x4039u);
    { uint32_t t = (c.r[1] & 0xFFFFu); s16(c, 1, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_403b:
    X86_TICK(c, 17);
    // 00403b  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x403bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 004043  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0x4043u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
    // 00404b  shr eax, 0x10
    X86_AT(c, 0x404bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00404e  shr ecx, 0x10
    X86_AT(c, 0x404eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004051  cmp ax, cx
    X86_AT(c, 0x4051u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 004054  jle 0x4057
    X86_AT(c, 0x4054u);
    if (x86_cc(c, 14)) { goto L_4057; }
    X86_TICK(c, 3);
    // 004056  xchg ecx, eax
    X86_AT(c, 0x4056u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
L_4057:
    X86_TICK(c, 60);
    // 004057  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4057u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 00405f  sub cx, ax
    X86_AT(c, 0x405fu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004062  inc ecx
    X86_AT(c, 0x4062u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 004063  push ecx
    X86_AT(c, 0x4063u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 004064  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x4064u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 004068  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4068u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 004070  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4070u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004075  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4075u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004079  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4079u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004080  movzx eax, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x4080u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)));
    // 004088  mov eax, dword ptr cs:[eax*4 + 0x7fec]
    X86_AT(c, 0x4088u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x7FECu)));
    // 004090  mov dword ptr gs:[ebp + 0x324], eax
    X86_AT(c, 0x4090u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), c.r[0]);
L_4097:
    X86_TICK(c, 7);
    // 004097  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x4097u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x409eu); x86_call(c, t); X86_RET(c, 0x409eu); }
    X86_TICK(c, 28);
    // 00409e  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x409eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0040a6  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x40a6u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0040aa  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x40aau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0040b1  dec dword ptr [esp]
    X86_AT(c, 0x40b1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0040b4  jne 0x4097
    X86_AT(c, 0x40b4u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4097u); goto L_4097; }
    X86_TICK(c, 12);
    // 0040b6  add esp, 4
    X86_AT(c, 0x40b6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0040b9  ret 
    X86_AT(c, 0x40b9u);
    c.eip = pop32(c); return;
L_5b12:
    X86_TICK(c, 7);
    // 005b12  jmp 0x4026
    X86_AT(c, 0x5b12u);
    X86_POLL(c, 0x4026u); goto L_4026;
    x86_fault(c, 0x5b12u, "ran off the end of a function");
}
void f_00005b18(X86Cpu& c) {
    X86_TICK(c, 12);
    // 005b18  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0x5b18u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 005b20  je 0x5b98
    X86_AT(c, 0x5b20u);
    if (x86_cc(c, 4)) { goto L_5b98; }
    X86_TICK(c, 12);
    // 005b22  cmp byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x5b22u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u))), 0xFFu, 0, 1);
    // 005b2a  je 0x5b70
    X86_AT(c, 0x5b2au);
    if (x86_cc(c, 4)) { goto L_5b70; }
    X86_TICK(c, 21);
    // 005b2c  movzx bx, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0x5b2cu);
    s16(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))));
    // 005b35  mov eax, dword ptr gs:[ebp + 0x1e4]
    X86_AT(c, 0x5b35u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E4u)));
    // 005b3c  sub ax, word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x5b3cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u))), 0, 2)); }
    // 005b44  jae 0x5b49
    X86_AT(c, 0x5b44u);
    if (x86_cc(c, 3)) { goto L_5b49; }
    X86_TICK(c, 2);
    // 005b46  neg ax
    X86_AT(c, 0x5b46u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_5b49:
    X86_TICK(c, 7);
    // 005b49  cmp ax, bx
    X86_AT(c, 0x5b49u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 005b4c  jae 0x5b78
    X86_AT(c, 0x5b4cu);
    if (x86_cc(c, 3)) { goto L_5b78; }
    X86_TICK(c, 14);
    // 005b4e  shr eax, 0x10
    X86_AT(c, 0x5b4eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 005b51  sub ax, word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x5b51u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu))), 0, 2)); }
    // 005b59  jae 0x5b5e
    X86_AT(c, 0x5b59u);
    if (x86_cc(c, 3)) { goto L_5b5e; }
    X86_TICK(c, 2);
    // 005b5b  neg ax
    X86_AT(c, 0x5b5bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_5b5e:
    X86_TICK(c, 7);
    // 005b5e  cmp ax, bx
    X86_AT(c, 0x5b5eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 005b61  jae 0x5b78
    X86_AT(c, 0x5b61u);
    if (x86_cc(c, 3)) { goto L_5b78; }
    X86_TICK(c, 12);
    // 005b63  cmp byte ptr gs:[ebp + 0x1e3], 3
    X86_AT(c, 0x5b63u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u))), 0x3u, 0, 1);
    // 005b6b  je 0x5b8f
    X86_AT(c, 0x5b6bu);
    if (x86_cc(c, 4)) { goto L_5b8f; }
    X86_TICK(c, 10);
    // 005b6d  ret 
    X86_AT(c, 0x5b6du);
    c.eip = pop32(c); return;
L_5b70:
    X86_TICK(c, 2);
    // 005b70  mov byte ptr gs:[ebp + 0x1e2], 0
    X86_AT(c, 0x5b70u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)), 0x0u);
L_5b78:
    X86_TICK(c, 13);
    // 005b78  mov eax, dword ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x5b78u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)));
    // 005b7f  mov dword ptr gs:[ebp + 0x1e4], eax
    X86_AT(c, 0x5b7fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E4u)), c.r[0]);
    // 005b86  call 0x5c68
    X86_AT(c, 0x5b86u);
    push32(c, 0x5b8bu); f_00005c68(c); X86_RET(c, 0x5b8bu);
    X86_TICK(c, 7);
    // 005b8b  test al, 2
    X86_AT(c, 0x5b8bu);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 005b8d  je 0x5b96
    X86_AT(c, 0x5b8du);
    if (x86_cc(c, 4)) { goto L_5b96; }
L_5b8f:
    X86_TICK(c, 7);
    // 005b8f  jmp dword ptr gs:[ebp + 0x310]
    X86_AT(c, 0x5b8fu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)))); return;
L_5b96:
    X86_TICK(c, 10);
    // 005b96  ret 
    X86_AT(c, 0x5b96u);
    c.eip = pop32(c); return;
L_5b98:
    X86_TICK(c, 12);
    // 005b98  cmp byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x5b98u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u))), 0xFFu, 0, 1);
    // 005ba0  je 0x5c04
    X86_AT(c, 0x5ba0u);
    if (x86_cc(c, 4)) { goto L_5c04; }
    X86_TICK(c, 21);
    // 005ba2  movzx bx, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0x5ba2u);
    s16(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))));
    // 005bab  mov eax, dword ptr gs:[ebp + 0x1e4]
    X86_AT(c, 0x5babu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E4u)));
    // 005bb2  sub ax, word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x5bb2u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u))), 0, 2)); }
    // 005bba  jae 0x5bbf
    X86_AT(c, 0x5bbau);
    if (x86_cc(c, 3)) { goto L_5bbf; }
    X86_TICK(c, 2);
    // 005bbc  neg ax
    X86_AT(c, 0x5bbcu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_5bbf:
    X86_TICK(c, 7);
    // 005bbf  cmp ax, bx
    X86_AT(c, 0x5bbfu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 005bc2  jae 0x5c0c
    X86_AT(c, 0x5bc2u);
    if (x86_cc(c, 3)) { goto L_5c0c; }
    X86_TICK(c, 14);
    // 005bc4  shr eax, 0x10
    X86_AT(c, 0x5bc4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 005bc7  sub ax, word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x5bc7u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu))), 0, 2)); }
    // 005bcf  jae 0x5bd4
    X86_AT(c, 0x5bcfu);
    if (x86_cc(c, 3)) { goto L_5bd4; }
    X86_TICK(c, 2);
    // 005bd1  neg ax
    X86_AT(c, 0x5bd1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_5bd4:
    X86_TICK(c, 7);
    // 005bd4  cmp ax, bx
    X86_AT(c, 0x5bd4u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 005bd7  jae 0x5c0c
    X86_AT(c, 0x5bd7u);
    if (x86_cc(c, 3)) { goto L_5c0c; }
    X86_TICK(c, 19);
    // 005bd9  sub eax, eax
    X86_AT(c, 0x5bd9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 005bdb  mov al, byte ptr gs:[ebp + 0x1e3]
    X86_AT(c, 0x5bdbu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u))));
    // 005be2  cmp al, 3
    X86_AT(c, 0x5be2u);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 005be4  setne al
    X86_AT(c, 0x5be4u);
    s8(c, 0, x86_cc(c, 5) ? 1u : 0u);
    // 005be7  call dword ptr cs:[eax*4 + 0x5bfc]
    X86_AT(c, 0x5be7u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x5BFCu))); push32(c, 0x5befu);
      switch (t) {
      case 0x3698u: f_00003698(c); break;
      case 0x36dcu: f_000036dc(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x5befu); }
    X86_TICK(c, 7);
    // 005bef  call 0x6120
    X86_AT(c, 0x5befu);
    push32(c, 0x5bf4u); f_00006120(c); X86_RET(c, 0x5bf4u);
    X86_TICK(c, 7);
    // 005bf4  jmp dword ptr gs:[ebp + 0x310]
    X86_AT(c, 0x5bf4u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)))); return;
L_5c04:
    X86_TICK(c, 2);
    // 005c04  mov byte ptr gs:[ebp + 0x1e2], 0
    X86_AT(c, 0x5c04u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)), 0x0u);
L_5c0c:
    X86_TICK(c, 13);
    // 005c0c  mov eax, dword ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x5c0cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)));
    // 005c13  mov dword ptr gs:[ebp + 0x1e4], eax
    X86_AT(c, 0x5c13u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E4u)), c.r[0]);
    // 005c1a  call 0x5c68
    X86_AT(c, 0x5c1au);
    push32(c, 0x5c1fu); f_00005c68(c); X86_RET(c, 0x5c1fu);
    X86_TICK(c, 7);
    // 005c1f  test al, 2
    X86_AT(c, 0x5c1fu);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 005c21  je 0x5c54
    X86_AT(c, 0x5c21u);
    if (x86_cc(c, 4)) { goto L_5c54; }
    X86_TICK(c, 9);
    // 005c23  push eax
    X86_AT(c, 0x5c23u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 005c24  call 0x36dc
    X86_AT(c, 0x5c24u);
    push32(c, 0x5c29u); f_000036dc(c); X86_RET(c, 0x5c29u);
    X86_TICK(c, 7);
    // 005c29  call 0x6120
    X86_AT(c, 0x5c29u);
    push32(c, 0x5c2eu); f_00006120(c); X86_RET(c, 0x5c2eu);
    X86_TICK(c, 14);
    // 005c2e  push dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x5c2eu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 005c32  mov byte ptr gs:[ebp + 0x10], 2
    X86_AT(c, 0x5c32u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), 0x2u);
    // 005c37  call dword ptr gs:[ebp + 0x310]
    X86_AT(c, 0x5c37u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u))); push32(c, 0x5c3eu); x86_call(c, t); X86_RET(c, 0x5c3eu); }
    X86_TICK(c, 16);
    // 005c3e  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x5c3eu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 005c42  pop eax
    X86_AT(c, 0x5c42u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 005c43  test al, 1
    X86_AT(c, 0x5c43u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 005c45  jne 0x5c51
    X86_AT(c, 0x5c45u);
    if (x86_cc(c, 5)) { goto L_5c51; }
    X86_TICK(c, 7);
    // 005c47  call 0x3698
    X86_AT(c, 0x5c47u);
    push32(c, 0x5c4cu); f_00003698(c); X86_RET(c, 0x5c4cu);
    X86_TICK(c, 7);
    // 005c4c  jmp 0x6120
    X86_AT(c, 0x5c4cu);
    goto L_6120;
L_5c51:
    X86_TICK(c, 10);
    // 005c51  ret 
    X86_AT(c, 0x5c51u);
    c.eip = pop32(c); return;
L_5c54:
    X86_TICK(c, 7);
    // 005c54  call 0x3698
    X86_AT(c, 0x5c54u);
    push32(c, 0x5c59u); f_00003698(c); X86_RET(c, 0x5c59u);
    X86_TICK(c, 7);
    // 005c59  call 0x6120
    X86_AT(c, 0x5c59u);
    push32(c, 0x5c5eu); f_00006120(c); X86_RET(c, 0x5c5eu);
    X86_TICK(c, 7);
    // 005c5e  jmp dword ptr gs:[ebp + 0x310]
    X86_AT(c, 0x5c5eu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)))); return;
L_6120:
    X86_TICK(c, 18);
    // 006120  mov ecx, dword ptr gs:[ebp + 0x14]
    X86_AT(c, 0x6120u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x14u)));
    // 006124  sub eax, eax
    X86_AT(c, 0x6124u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 006126  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0x6126u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 00612e  jne 0x614a
    X86_AT(c, 0x612eu);
    if (x86_cc(c, 5)) { goto L_614a; }
    X86_TICK(c, 14);
    // 006130  inc eax
    X86_AT(c, 0x6130u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 006131  test byte ptr gs:[ebp + 0x10a], 2
    X86_AT(c, 0x6131u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au))) & 0x2u, 1);
    // 006139  jne 0x614a
    X86_AT(c, 0x6139u);
    if (x86_cc(c, 5)) { goto L_614a; }
    X86_TICK(c, 14);
    // 00613b  lea eax, [eax + ecx*2 + 1]
    X86_AT(c, 0x613bu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[1] * 2 + 0x1u);
    // 00613f  test byte ptr gs:[ebp + 0x10a], 1
    X86_AT(c, 0x613fu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au))) & 0x1u, 1);
    // 006147  jne 0x614a
    X86_AT(c, 0x6147u);
    if (x86_cc(c, 5)) { goto L_614a; }
    X86_TICK(c, 2);
    // 006149  inc eax
    X86_AT(c, 0x6149u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
L_614a:
    X86_TICK(c, 21);
    // 00614a  mov edi, dword ptr cs:[eax*4 + 0x61c4]
    X86_AT(c, 0x614au);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x61C4u)));
    // 006152  mov dword ptr gs:[ebp + 0x314], edi
    X86_AT(c, 0x6152u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)), c.r[7]);
    // 006159  mov edi, dword ptr cs:[eax*4 + 0x6a9c]
    X86_AT(c, 0x6159u);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x6A9Cu)));
    // 006161  mov dword ptr gs:[ebp + 0x31c], edi
    X86_AT(c, 0x6161u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)), c.r[7]);
    // 006168  mov edi, 0x81f4
    X86_AT(c, 0x6168u);
    c.r[7] = 0x81F4u;
    // 00616d  test al, 1
    X86_AT(c, 0x616du);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 00616f  je 0x6187
    X86_AT(c, 0x616fu);
    if (x86_cc(c, 4)) { goto L_6187; }
    X86_TICK(c, 7);
    // 006171  cmp al, 2
    X86_AT(c, 0x6171u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 006173  jb 0x6187
    X86_AT(c, 0x6173u);
    if (x86_cc(c, 2)) { goto L_6187; }
    X86_TICK(c, 12);
    // 006175  cmp byte ptr gs:[ebp + 0x104], 2
    X86_AT(c, 0x6175u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x2u, 0, 1);
    // 00617d  jae 0x6187
    X86_AT(c, 0x617du);
    if (x86_cc(c, 3)) { goto L_6187; }
    X86_TICK(c, 4);
    // 00617f  mov edi, dword ptr cs:[ecx*4 + 0x8280]
    X86_AT(c, 0x617fu);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x8280u)));
L_6187:
    X86_TICK(c, 29);
    // 006187  mov dword ptr gs:[ebp + 0x328], edi
    X86_AT(c, 0x6187u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)), c.r[7]);
    // 00618e  shl ecx, 4
    X86_AT(c, 0x618eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 006191  add ecx, dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x6191u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0, 4); }
    // 006198  mov eax, dword ptr cs:[ecx*4 + 0x61ec]
    X86_AT(c, 0x6198u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x61ECu)));
    // 0061a0  mov dword ptr gs:[ebp + 0x318], eax
    X86_AT(c, 0x61a0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x318u)), c.r[0]);
    // 0061a7  test byte ptr gs:[ebp + 0x10a], 1
    X86_AT(c, 0x61a7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au))) & 0x1u, 1);
    // 0061af  je 0x61b4
    X86_AT(c, 0x61afu);
    if (x86_cc(c, 4)) { goto L_61b4; }
    X86_TICK(c, 2);
    // 0061b1  add ecx, 0x40
    X86_AT(c, 0x61b1u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x40u, 0, 4); }
L_61b4:
    X86_TICK(c, 16);
    // 0061b4  mov eax, dword ptr cs:[ecx*4 + 0x6ac4]
    X86_AT(c, 0x61b4u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x6AC4u)));
    // 0061bc  mov dword ptr gs:[ebp + 0x320], eax
    X86_AT(c, 0x61bcu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x320u)), c.r[0]);
    // 0061c3  ret 
    X86_AT(c, 0x61c3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5b18u, "ran off the end of a function");
}
void f_00005b20(X86Cpu& c) {
    X86_TICK(c, 5);
    // 005b20  je 0x5b98
    X86_AT(c, 0x5b20u);
    if (x86_cc(c, 4)) { goto L_5b98; }
    X86_TICK(c, 12);
    // 005b22  cmp byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x5b22u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u))), 0xFFu, 0, 1);
    // 005b2a  je 0x5b70
    X86_AT(c, 0x5b2au);
    if (x86_cc(c, 4)) { goto L_5b70; }
    X86_TICK(c, 21);
    // 005b2c  movzx bx, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0x5b2cu);
    s16(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))));
    // 005b35  mov eax, dword ptr gs:[ebp + 0x1e4]
    X86_AT(c, 0x5b35u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E4u)));
    // 005b3c  sub ax, word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x5b3cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u))), 0, 2)); }
    // 005b44  jae 0x5b49
    X86_AT(c, 0x5b44u);
    if (x86_cc(c, 3)) { goto L_5b49; }
    X86_TICK(c, 2);
    // 005b46  neg ax
    X86_AT(c, 0x5b46u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_5b49:
    X86_TICK(c, 7);
    // 005b49  cmp ax, bx
    X86_AT(c, 0x5b49u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 005b4c  jae 0x5b78
    X86_AT(c, 0x5b4cu);
    if (x86_cc(c, 3)) { goto L_5b78; }
    X86_TICK(c, 14);
    // 005b4e  shr eax, 0x10
    X86_AT(c, 0x5b4eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 005b51  sub ax, word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x5b51u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu))), 0, 2)); }
    // 005b59  jae 0x5b5e
    X86_AT(c, 0x5b59u);
    if (x86_cc(c, 3)) { goto L_5b5e; }
    X86_TICK(c, 2);
    // 005b5b  neg ax
    X86_AT(c, 0x5b5bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_5b5e:
    X86_TICK(c, 7);
    // 005b5e  cmp ax, bx
    X86_AT(c, 0x5b5eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 005b61  jae 0x5b78
    X86_AT(c, 0x5b61u);
    if (x86_cc(c, 3)) { goto L_5b78; }
    X86_TICK(c, 12);
    // 005b63  cmp byte ptr gs:[ebp + 0x1e3], 3
    X86_AT(c, 0x5b63u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u))), 0x3u, 0, 1);
    // 005b6b  je 0x5b8f
    X86_AT(c, 0x5b6bu);
    if (x86_cc(c, 4)) { goto L_5b8f; }
    X86_TICK(c, 10);
    // 005b6d  ret 
    X86_AT(c, 0x5b6du);
    c.eip = pop32(c); return;
L_5b70:
    X86_TICK(c, 2);
    // 005b70  mov byte ptr gs:[ebp + 0x1e2], 0
    X86_AT(c, 0x5b70u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)), 0x0u);
L_5b78:
    X86_TICK(c, 13);
    // 005b78  mov eax, dword ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x5b78u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)));
    // 005b7f  mov dword ptr gs:[ebp + 0x1e4], eax
    X86_AT(c, 0x5b7fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E4u)), c.r[0]);
    // 005b86  call 0x5c68
    X86_AT(c, 0x5b86u);
    push32(c, 0x5b8bu); f_00005c68(c); X86_RET(c, 0x5b8bu);
    X86_TICK(c, 7);
    // 005b8b  test al, 2
    X86_AT(c, 0x5b8bu);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 005b8d  je 0x5b96
    X86_AT(c, 0x5b8du);
    if (x86_cc(c, 4)) { goto L_5b96; }
L_5b8f:
    X86_TICK(c, 7);
    // 005b8f  jmp dword ptr gs:[ebp + 0x310]
    X86_AT(c, 0x5b8fu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)))); return;
L_5b96:
    X86_TICK(c, 10);
    // 005b96  ret 
    X86_AT(c, 0x5b96u);
    c.eip = pop32(c); return;
L_5b98:
    X86_TICK(c, 12);
    // 005b98  cmp byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x5b98u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u))), 0xFFu, 0, 1);
    // 005ba0  je 0x5c04
    X86_AT(c, 0x5ba0u);
    if (x86_cc(c, 4)) { goto L_5c04; }
    X86_TICK(c, 21);
    // 005ba2  movzx bx, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0x5ba2u);
    s16(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))));
    // 005bab  mov eax, dword ptr gs:[ebp + 0x1e4]
    X86_AT(c, 0x5babu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E4u)));
    // 005bb2  sub ax, word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x5bb2u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u))), 0, 2)); }
    // 005bba  jae 0x5bbf
    X86_AT(c, 0x5bbau);
    if (x86_cc(c, 3)) { goto L_5bbf; }
    X86_TICK(c, 2);
    // 005bbc  neg ax
    X86_AT(c, 0x5bbcu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_5bbf:
    X86_TICK(c, 7);
    // 005bbf  cmp ax, bx
    X86_AT(c, 0x5bbfu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 005bc2  jae 0x5c0c
    X86_AT(c, 0x5bc2u);
    if (x86_cc(c, 3)) { goto L_5c0c; }
    X86_TICK(c, 14);
    // 005bc4  shr eax, 0x10
    X86_AT(c, 0x5bc4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 005bc7  sub ax, word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x5bc7u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu))), 0, 2)); }
    // 005bcf  jae 0x5bd4
    X86_AT(c, 0x5bcfu);
    if (x86_cc(c, 3)) { goto L_5bd4; }
    X86_TICK(c, 2);
    // 005bd1  neg ax
    X86_AT(c, 0x5bd1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_5bd4:
    X86_TICK(c, 7);
    // 005bd4  cmp ax, bx
    X86_AT(c, 0x5bd4u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 005bd7  jae 0x5c0c
    X86_AT(c, 0x5bd7u);
    if (x86_cc(c, 3)) { goto L_5c0c; }
    X86_TICK(c, 19);
    // 005bd9  sub eax, eax
    X86_AT(c, 0x5bd9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 005bdb  mov al, byte ptr gs:[ebp + 0x1e3]
    X86_AT(c, 0x5bdbu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u))));
    // 005be2  cmp al, 3
    X86_AT(c, 0x5be2u);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 005be4  setne al
    X86_AT(c, 0x5be4u);
    s8(c, 0, x86_cc(c, 5) ? 1u : 0u);
    // 005be7  call dword ptr cs:[eax*4 + 0x5bfc]
    X86_AT(c, 0x5be7u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x5BFCu))); push32(c, 0x5befu);
      switch (t) {
      case 0x3698u: f_00003698(c); break;
      case 0x36dcu: f_000036dc(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x5befu); }
    X86_TICK(c, 7);
    // 005bef  call 0x6120
    X86_AT(c, 0x5befu);
    push32(c, 0x5bf4u); f_00006120(c); X86_RET(c, 0x5bf4u);
    X86_TICK(c, 7);
    // 005bf4  jmp dword ptr gs:[ebp + 0x310]
    X86_AT(c, 0x5bf4u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)))); return;
L_5c04:
    X86_TICK(c, 2);
    // 005c04  mov byte ptr gs:[ebp + 0x1e2], 0
    X86_AT(c, 0x5c04u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)), 0x0u);
L_5c0c:
    X86_TICK(c, 13);
    // 005c0c  mov eax, dword ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x5c0cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)));
    // 005c13  mov dword ptr gs:[ebp + 0x1e4], eax
    X86_AT(c, 0x5c13u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E4u)), c.r[0]);
    // 005c1a  call 0x5c68
    X86_AT(c, 0x5c1au);
    push32(c, 0x5c1fu); f_00005c68(c); X86_RET(c, 0x5c1fu);
    X86_TICK(c, 7);
    // 005c1f  test al, 2
    X86_AT(c, 0x5c1fu);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 005c21  je 0x5c54
    X86_AT(c, 0x5c21u);
    if (x86_cc(c, 4)) { goto L_5c54; }
    X86_TICK(c, 9);
    // 005c23  push eax
    X86_AT(c, 0x5c23u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 005c24  call 0x36dc
    X86_AT(c, 0x5c24u);
    push32(c, 0x5c29u); f_000036dc(c); X86_RET(c, 0x5c29u);
    X86_TICK(c, 7);
    // 005c29  call 0x6120
    X86_AT(c, 0x5c29u);
    push32(c, 0x5c2eu); f_00006120(c); X86_RET(c, 0x5c2eu);
    X86_TICK(c, 14);
    // 005c2e  push dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x5c2eu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 005c32  mov byte ptr gs:[ebp + 0x10], 2
    X86_AT(c, 0x5c32u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), 0x2u);
    // 005c37  call dword ptr gs:[ebp + 0x310]
    X86_AT(c, 0x5c37u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u))); push32(c, 0x5c3eu); x86_call(c, t); X86_RET(c, 0x5c3eu); }
    X86_TICK(c, 16);
    // 005c3e  pop dword ptr gs:[ebp + 0x10]
    X86_AT(c, 0x5c3eu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), v); }
    // 005c42  pop eax
    X86_AT(c, 0x5c42u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 005c43  test al, 1
    X86_AT(c, 0x5c43u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 005c45  jne 0x5c51
    X86_AT(c, 0x5c45u);
    if (x86_cc(c, 5)) { goto L_5c51; }
    X86_TICK(c, 7);
    // 005c47  call 0x3698
    X86_AT(c, 0x5c47u);
    push32(c, 0x5c4cu); f_00003698(c); X86_RET(c, 0x5c4cu);
    X86_TICK(c, 7);
    // 005c4c  jmp 0x6120
    X86_AT(c, 0x5c4cu);
    goto L_6120;
L_5c51:
    X86_TICK(c, 10);
    // 005c51  ret 
    X86_AT(c, 0x5c51u);
    c.eip = pop32(c); return;
L_5c54:
    X86_TICK(c, 7);
    // 005c54  call 0x3698
    X86_AT(c, 0x5c54u);
    push32(c, 0x5c59u); f_00003698(c); X86_RET(c, 0x5c59u);
    X86_TICK(c, 7);
    // 005c59  call 0x6120
    X86_AT(c, 0x5c59u);
    push32(c, 0x5c5eu); f_00006120(c); X86_RET(c, 0x5c5eu);
    X86_TICK(c, 7);
    // 005c5e  jmp dword ptr gs:[ebp + 0x310]
    X86_AT(c, 0x5c5eu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)))); return;
L_6120:
    X86_TICK(c, 18);
    // 006120  mov ecx, dword ptr gs:[ebp + 0x14]
    X86_AT(c, 0x6120u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x14u)));
    // 006124  sub eax, eax
    X86_AT(c, 0x6124u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 006126  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0x6126u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 00612e  jne 0x614a
    X86_AT(c, 0x612eu);
    if (x86_cc(c, 5)) { goto L_614a; }
    X86_TICK(c, 14);
    // 006130  inc eax
    X86_AT(c, 0x6130u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 006131  test byte ptr gs:[ebp + 0x10a], 2
    X86_AT(c, 0x6131u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au))) & 0x2u, 1);
    // 006139  jne 0x614a
    X86_AT(c, 0x6139u);
    if (x86_cc(c, 5)) { goto L_614a; }
    X86_TICK(c, 14);
    // 00613b  lea eax, [eax + ecx*2 + 1]
    X86_AT(c, 0x613bu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[1] * 2 + 0x1u);
    // 00613f  test byte ptr gs:[ebp + 0x10a], 1
    X86_AT(c, 0x613fu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au))) & 0x1u, 1);
    // 006147  jne 0x614a
    X86_AT(c, 0x6147u);
    if (x86_cc(c, 5)) { goto L_614a; }
    X86_TICK(c, 2);
    // 006149  inc eax
    X86_AT(c, 0x6149u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
L_614a:
    X86_TICK(c, 21);
    // 00614a  mov edi, dword ptr cs:[eax*4 + 0x61c4]
    X86_AT(c, 0x614au);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x61C4u)));
    // 006152  mov dword ptr gs:[ebp + 0x314], edi
    X86_AT(c, 0x6152u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)), c.r[7]);
    // 006159  mov edi, dword ptr cs:[eax*4 + 0x6a9c]
    X86_AT(c, 0x6159u);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x6A9Cu)));
    // 006161  mov dword ptr gs:[ebp + 0x31c], edi
    X86_AT(c, 0x6161u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)), c.r[7]);
    // 006168  mov edi, 0x81f4
    X86_AT(c, 0x6168u);
    c.r[7] = 0x81F4u;
    // 00616d  test al, 1
    X86_AT(c, 0x616du);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 00616f  je 0x6187
    X86_AT(c, 0x616fu);
    if (x86_cc(c, 4)) { goto L_6187; }
    X86_TICK(c, 7);
    // 006171  cmp al, 2
    X86_AT(c, 0x6171u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 006173  jb 0x6187
    X86_AT(c, 0x6173u);
    if (x86_cc(c, 2)) { goto L_6187; }
    X86_TICK(c, 12);
    // 006175  cmp byte ptr gs:[ebp + 0x104], 2
    X86_AT(c, 0x6175u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x2u, 0, 1);
    // 00617d  jae 0x6187
    X86_AT(c, 0x617du);
    if (x86_cc(c, 3)) { goto L_6187; }
    X86_TICK(c, 4);
    // 00617f  mov edi, dword ptr cs:[ecx*4 + 0x8280]
    X86_AT(c, 0x617fu);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x8280u)));
L_6187:
    X86_TICK(c, 29);
    // 006187  mov dword ptr gs:[ebp + 0x328], edi
    X86_AT(c, 0x6187u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)), c.r[7]);
    // 00618e  shl ecx, 4
    X86_AT(c, 0x618eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 006191  add ecx, dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x6191u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0, 4); }
    // 006198  mov eax, dword ptr cs:[ecx*4 + 0x61ec]
    X86_AT(c, 0x6198u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x61ECu)));
    // 0061a0  mov dword ptr gs:[ebp + 0x318], eax
    X86_AT(c, 0x61a0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x318u)), c.r[0]);
    // 0061a7  test byte ptr gs:[ebp + 0x10a], 1
    X86_AT(c, 0x61a7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au))) & 0x1u, 1);
    // 0061af  je 0x61b4
    X86_AT(c, 0x61afu);
    if (x86_cc(c, 4)) { goto L_61b4; }
    X86_TICK(c, 2);
    // 0061b1  add ecx, 0x40
    X86_AT(c, 0x61b1u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x40u, 0, 4); }
L_61b4:
    X86_TICK(c, 16);
    // 0061b4  mov eax, dword ptr cs:[ecx*4 + 0x6ac4]
    X86_AT(c, 0x61b4u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x6AC4u)));
    // 0061bc  mov dword ptr gs:[ebp + 0x320], eax
    X86_AT(c, 0x61bcu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x320u)), c.r[0]);
    // 0061c3  ret 
    X86_AT(c, 0x61c3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5b20u, "ran off the end of a function");
}
}
