#include "p_tbios_funcs.h"
namespace p_tbios {
void f_0000f65b(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00f65b  je 0xf7a7
    X86_AT(c, 0xf65bu);
    if (x86_cc(c, 4)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f661  call 0x10160
    X86_AT(c, 0xf661u);
    push32(c, 0xf666u); f_00010160(c); X86_RET(c, 0xf666u);
    X86_TICK(c, 11);
    // 00f666  mov dword ptr gs:[ebp + 0x384], 0
    X86_AT(c, 0xf666u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), 0x0u);
    // 00f671  mov dword ptr gs:[ebp + 0x388], 0
    X86_AT(c, 0xf671u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)), 0x0u);
    // 00f67c  test dl, 0xf
    X86_AT(c, 0xf67cu);
    (void)x86_logic(c, g8(c, 2) & 0xFu, 1);
    // 00f67f  je 0xf70f
    X86_AT(c, 0xf67fu);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 119);
    // 00f685  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf685u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f68c  mov ebx, dword ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf68cu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f693  add ax, bx
    X86_AT(c, 0xf693u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f696  dec ax
    X86_AT(c, 0xf696u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f698  div bl
    X86_AT(c, 0xf698u);
    x86_div(c, g8(c, 3), 1, 0xf698u);
    // 00f69a  sub ah, ah
    X86_AT(c, 0xf69au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f69c  mov word ptr gs:[ebp + 0x388], ax
    X86_AT(c, 0xf69cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)), (c.r[0] & 0xFFFFu));
    // 00f6a4  shr eax, 0x10
    X86_AT(c, 0xf6a4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f6a7  shr ebx, 0x10
    X86_AT(c, 0xf6a7u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f6aa  add ax, bx
    X86_AT(c, 0xf6aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6ad  dec ax
    X86_AT(c, 0xf6adu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f6af  div bl
    X86_AT(c, 0xf6afu);
    x86_div(c, g8(c, 3), 1, 0xf6afu);
    // 00f6b1  sub ah, ah
    X86_AT(c, 0xf6b1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f6b3  mov word ptr gs:[ebp + 0x38a], ax
    X86_AT(c, 0xf6b3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au)), (c.r[0] & 0xFFFFu));
    // 00f6bb  mov word ptr gs:[ebp + 0x38c], 0
    X86_AT(c, 0xf6bbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), 0x0u);
    // 00f6c5  test dl, 2
    X86_AT(c, 0xf6c5u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f6c8  je 0xf70f
    X86_AT(c, 0xf6c8u);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 48);
    // 00f6ca  mov bx, word ptr gs:[ebp + 0x38a]
    X86_AT(c, 0xf6cau);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au))));
    // 00f6d2  shr bx, 1
    X86_AT(c, 0xf6d2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f6d5  sub eax, eax
    X86_AT(c, 0xf6d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f6d7  test byte ptr gs:[ebp + 0x34c], 1
    X86_AT(c, 0xf6d7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu))) & 0x1u, 1);
    // 00f6df  sete al
    X86_AT(c, 0xf6dfu);
    s8(c, 0, x86_cc(c, 4) ? 1u : 0u);
    // 00f6e2  mov al, byte ptr gs:[ebp + eax*2 + 0x344]
    X86_AT(c, 0xf6e2u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 2 + 0x344u))));
    // 00f6ea  add al, byte ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf6eau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))), 0, 1)); }
    // 00f6f1  and ax, 1
    X86_AT(c, 0xf6f1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x1u, 2)); }
    // 00f6f5  xor ax, 1
    X86_AT(c, 0xf6f5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ 0x1u, 2)); }
    // 00f6f9  add ax, bx
    X86_AT(c, 0xf6f9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6fc  mov word ptr gs:[ebp + 0x38c], ax
    X86_AT(c, 0xf6fcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), (c.r[0] & 0xFFFFu));
    // 00f704  shl bx, 1
    X86_AT(c, 0xf704u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f707  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0xf707u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_f70f:
    X86_TICK(c, 7);
    // 00f70f  call 0x36e4
    X86_AT(c, 0xf70fu);
    push32(c, 0xf714u); f_000036e4(c); X86_RET(c, 0xf714u);
    X86_TICK(c, 14);
    // 00f714  test dl, 1
    X86_AT(c, 0xf714u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f717  setne byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf717u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)), x86_cc(c, 5) ? 1u : 0u);
    // 00f71f  call 0xf888
    X86_AT(c, 0xf71fu);
    push32(c, 0xf724u); f_0000f888(c); X86_RET(c, 0xf724u);
    X86_TICK(c, 12);
    // 00f724  test byte ptr gs:[ebp + 0x338], 8
    X86_AT(c, 0xf724u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x8u, 1);
    // 00f72c  je 0xf76a
    X86_AT(c, 0xf72cu);
    if (x86_cc(c, 4)) { goto L_f76a; }
    X86_TICK(c, 39);
    // 00f72e  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf72eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f735  sub word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf735u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f73d  mov ax, word ptr gs:[ebp + 0x38c]
    X86_AT(c, 0xf73du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu))));
    // 00f745  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf745u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f74d  shr eax, 0x10
    X86_AT(c, 0xf74du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f750  sub word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf750u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f758  call 0x36a0
    X86_AT(c, 0xf758u);
    push32(c, 0xf75du); f_000036a0(c); X86_RET(c, 0xf75du);
    X86_TICK(c, 14);
    // 00f75d  or byte ptr gs:[ebp + 0x379], 2
    X86_AT(c, 0xf75du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00f765  call 0xf888
    X86_AT(c, 0xf765u);
    push32(c, 0xf76au); f_0000f888(c); X86_RET(c, 0xf76au);
L_f76a:
    X86_TICK(c, 12);
    // 00f76a  test byte ptr gs:[ebp + 0x338], 4
    X86_AT(c, 0xf76au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x4u, 1);
    // 00f772  je 0xf798
    X86_AT(c, 0xf772u);
    if (x86_cc(c, 4)) { goto L_f798; }
    X86_TICK(c, 28);
    // 00f774  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf774u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f77b  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf77bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f783  shr eax, 0x10
    X86_AT(c, 0xf783u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f786  add word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf786u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f78e  call 0x36a0
    X86_AT(c, 0xf78eu);
    push32(c, 0xf793u); f_000036a0(c); X86_RET(c, 0xf793u);
    X86_TICK(c, 7);
    // 00f793  call 0xf888
    X86_AT(c, 0xf793u);
    push32(c, 0xf798u); f_0000f888(c); X86_RET(c, 0xf798u);
L_f798:
    X86_TICK(c, 12);
    // 00f798  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0xf798u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 00f7a0  jne 0xf7a7
    X86_AT(c, 0xf7a0u);
    if (x86_cc(c, 5)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f7a2  call 0xf7b0
    X86_AT(c, 0xf7a2u);
    push32(c, 0xf7a7u); f_0000f7b0(c); X86_RET(c, 0xf7a7u);
L_f7a7:
    X86_TICK(c, 15);
    // 00f7a7  pop dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf7a7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), v); }
    // 00f7ae  ret 
    X86_AT(c, 0xf7aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf65bu, "ran off the end of a function");
}
void f_0000f661(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00f661  call 0x10160
    X86_AT(c, 0xf661u);
    push32(c, 0xf666u); f_00010160(c); X86_RET(c, 0xf666u);
    X86_TICK(c, 11);
    // 00f666  mov dword ptr gs:[ebp + 0x384], 0
    X86_AT(c, 0xf666u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), 0x0u);
    // 00f671  mov dword ptr gs:[ebp + 0x388], 0
    X86_AT(c, 0xf671u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)), 0x0u);
    // 00f67c  test dl, 0xf
    X86_AT(c, 0xf67cu);
    (void)x86_logic(c, g8(c, 2) & 0xFu, 1);
    // 00f67f  je 0xf70f
    X86_AT(c, 0xf67fu);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 119);
    // 00f685  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf685u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f68c  mov ebx, dword ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf68cu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f693  add ax, bx
    X86_AT(c, 0xf693u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f696  dec ax
    X86_AT(c, 0xf696u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f698  div bl
    X86_AT(c, 0xf698u);
    x86_div(c, g8(c, 3), 1, 0xf698u);
    // 00f69a  sub ah, ah
    X86_AT(c, 0xf69au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f69c  mov word ptr gs:[ebp + 0x388], ax
    X86_AT(c, 0xf69cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)), (c.r[0] & 0xFFFFu));
    // 00f6a4  shr eax, 0x10
    X86_AT(c, 0xf6a4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f6a7  shr ebx, 0x10
    X86_AT(c, 0xf6a7u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f6aa  add ax, bx
    X86_AT(c, 0xf6aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6ad  dec ax
    X86_AT(c, 0xf6adu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f6af  div bl
    X86_AT(c, 0xf6afu);
    x86_div(c, g8(c, 3), 1, 0xf6afu);
    // 00f6b1  sub ah, ah
    X86_AT(c, 0xf6b1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f6b3  mov word ptr gs:[ebp + 0x38a], ax
    X86_AT(c, 0xf6b3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au)), (c.r[0] & 0xFFFFu));
    // 00f6bb  mov word ptr gs:[ebp + 0x38c], 0
    X86_AT(c, 0xf6bbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), 0x0u);
    // 00f6c5  test dl, 2
    X86_AT(c, 0xf6c5u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f6c8  je 0xf70f
    X86_AT(c, 0xf6c8u);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 48);
    // 00f6ca  mov bx, word ptr gs:[ebp + 0x38a]
    X86_AT(c, 0xf6cau);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au))));
    // 00f6d2  shr bx, 1
    X86_AT(c, 0xf6d2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f6d5  sub eax, eax
    X86_AT(c, 0xf6d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f6d7  test byte ptr gs:[ebp + 0x34c], 1
    X86_AT(c, 0xf6d7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu))) & 0x1u, 1);
    // 00f6df  sete al
    X86_AT(c, 0xf6dfu);
    s8(c, 0, x86_cc(c, 4) ? 1u : 0u);
    // 00f6e2  mov al, byte ptr gs:[ebp + eax*2 + 0x344]
    X86_AT(c, 0xf6e2u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 2 + 0x344u))));
    // 00f6ea  add al, byte ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf6eau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))), 0, 1)); }
    // 00f6f1  and ax, 1
    X86_AT(c, 0xf6f1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x1u, 2)); }
    // 00f6f5  xor ax, 1
    X86_AT(c, 0xf6f5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ 0x1u, 2)); }
    // 00f6f9  add ax, bx
    X86_AT(c, 0xf6f9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6fc  mov word ptr gs:[ebp + 0x38c], ax
    X86_AT(c, 0xf6fcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), (c.r[0] & 0xFFFFu));
    // 00f704  shl bx, 1
    X86_AT(c, 0xf704u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f707  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0xf707u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_f70f:
    X86_TICK(c, 7);
    // 00f70f  call 0x36e4
    X86_AT(c, 0xf70fu);
    push32(c, 0xf714u); f_000036e4(c); X86_RET(c, 0xf714u);
    X86_TICK(c, 14);
    // 00f714  test dl, 1
    X86_AT(c, 0xf714u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f717  setne byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf717u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)), x86_cc(c, 5) ? 1u : 0u);
    // 00f71f  call 0xf888
    X86_AT(c, 0xf71fu);
    push32(c, 0xf724u); f_0000f888(c); X86_RET(c, 0xf724u);
    X86_TICK(c, 12);
    // 00f724  test byte ptr gs:[ebp + 0x338], 8
    X86_AT(c, 0xf724u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x8u, 1);
    // 00f72c  je 0xf76a
    X86_AT(c, 0xf72cu);
    if (x86_cc(c, 4)) { goto L_f76a; }
    X86_TICK(c, 39);
    // 00f72e  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf72eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f735  sub word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf735u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f73d  mov ax, word ptr gs:[ebp + 0x38c]
    X86_AT(c, 0xf73du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu))));
    // 00f745  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf745u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f74d  shr eax, 0x10
    X86_AT(c, 0xf74du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f750  sub word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf750u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f758  call 0x36a0
    X86_AT(c, 0xf758u);
    push32(c, 0xf75du); f_000036a0(c); X86_RET(c, 0xf75du);
    X86_TICK(c, 14);
    // 00f75d  or byte ptr gs:[ebp + 0x379], 2
    X86_AT(c, 0xf75du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00f765  call 0xf888
    X86_AT(c, 0xf765u);
    push32(c, 0xf76au); f_0000f888(c); X86_RET(c, 0xf76au);
L_f76a:
    X86_TICK(c, 12);
    // 00f76a  test byte ptr gs:[ebp + 0x338], 4
    X86_AT(c, 0xf76au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x4u, 1);
    // 00f772  je 0xf798
    X86_AT(c, 0xf772u);
    if (x86_cc(c, 4)) { goto L_f798; }
    X86_TICK(c, 28);
    // 00f774  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf774u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f77b  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf77bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f783  shr eax, 0x10
    X86_AT(c, 0xf783u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f786  add word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf786u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f78e  call 0x36a0
    X86_AT(c, 0xf78eu);
    push32(c, 0xf793u); f_000036a0(c); X86_RET(c, 0xf793u);
    X86_TICK(c, 7);
    // 00f793  call 0xf888
    X86_AT(c, 0xf793u);
    push32(c, 0xf798u); f_0000f888(c); X86_RET(c, 0xf798u);
L_f798:
    X86_TICK(c, 12);
    // 00f798  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0xf798u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 00f7a0  jne 0xf7a7
    X86_AT(c, 0xf7a0u);
    if (x86_cc(c, 5)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f7a2  call 0xf7b0
    X86_AT(c, 0xf7a2u);
    push32(c, 0xf7a7u); f_0000f7b0(c); X86_RET(c, 0xf7a7u);
L_f7a7:
    X86_TICK(c, 15);
    // 00f7a7  pop dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf7a7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), v); }
    // 00f7ae  ret 
    X86_AT(c, 0xf7aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf661u, "ran off the end of a function");
}
void f_0000f666(X86Cpu& c) {
    X86_TICK(c, 11);
    // 00f666  mov dword ptr gs:[ebp + 0x384], 0
    X86_AT(c, 0xf666u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), 0x0u);
    // 00f671  mov dword ptr gs:[ebp + 0x388], 0
    X86_AT(c, 0xf671u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)), 0x0u);
    // 00f67c  test dl, 0xf
    X86_AT(c, 0xf67cu);
    (void)x86_logic(c, g8(c, 2) & 0xFu, 1);
    // 00f67f  je 0xf70f
    X86_AT(c, 0xf67fu);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 119);
    // 00f685  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf685u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f68c  mov ebx, dword ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf68cu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f693  add ax, bx
    X86_AT(c, 0xf693u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f696  dec ax
    X86_AT(c, 0xf696u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f698  div bl
    X86_AT(c, 0xf698u);
    x86_div(c, g8(c, 3), 1, 0xf698u);
    // 00f69a  sub ah, ah
    X86_AT(c, 0xf69au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f69c  mov word ptr gs:[ebp + 0x388], ax
    X86_AT(c, 0xf69cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)), (c.r[0] & 0xFFFFu));
    // 00f6a4  shr eax, 0x10
    X86_AT(c, 0xf6a4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f6a7  shr ebx, 0x10
    X86_AT(c, 0xf6a7u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f6aa  add ax, bx
    X86_AT(c, 0xf6aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6ad  dec ax
    X86_AT(c, 0xf6adu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f6af  div bl
    X86_AT(c, 0xf6afu);
    x86_div(c, g8(c, 3), 1, 0xf6afu);
    // 00f6b1  sub ah, ah
    X86_AT(c, 0xf6b1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f6b3  mov word ptr gs:[ebp + 0x38a], ax
    X86_AT(c, 0xf6b3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au)), (c.r[0] & 0xFFFFu));
    // 00f6bb  mov word ptr gs:[ebp + 0x38c], 0
    X86_AT(c, 0xf6bbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), 0x0u);
    // 00f6c5  test dl, 2
    X86_AT(c, 0xf6c5u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f6c8  je 0xf70f
    X86_AT(c, 0xf6c8u);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 48);
    // 00f6ca  mov bx, word ptr gs:[ebp + 0x38a]
    X86_AT(c, 0xf6cau);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au))));
    // 00f6d2  shr bx, 1
    X86_AT(c, 0xf6d2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f6d5  sub eax, eax
    X86_AT(c, 0xf6d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f6d7  test byte ptr gs:[ebp + 0x34c], 1
    X86_AT(c, 0xf6d7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu))) & 0x1u, 1);
    // 00f6df  sete al
    X86_AT(c, 0xf6dfu);
    s8(c, 0, x86_cc(c, 4) ? 1u : 0u);
    // 00f6e2  mov al, byte ptr gs:[ebp + eax*2 + 0x344]
    X86_AT(c, 0xf6e2u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 2 + 0x344u))));
    // 00f6ea  add al, byte ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf6eau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))), 0, 1)); }
    // 00f6f1  and ax, 1
    X86_AT(c, 0xf6f1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x1u, 2)); }
    // 00f6f5  xor ax, 1
    X86_AT(c, 0xf6f5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ 0x1u, 2)); }
    // 00f6f9  add ax, bx
    X86_AT(c, 0xf6f9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6fc  mov word ptr gs:[ebp + 0x38c], ax
    X86_AT(c, 0xf6fcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), (c.r[0] & 0xFFFFu));
    // 00f704  shl bx, 1
    X86_AT(c, 0xf704u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f707  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0xf707u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_f70f:
    X86_TICK(c, 7);
    // 00f70f  call 0x36e4
    X86_AT(c, 0xf70fu);
    push32(c, 0xf714u); f_000036e4(c); X86_RET(c, 0xf714u);
    X86_TICK(c, 14);
    // 00f714  test dl, 1
    X86_AT(c, 0xf714u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f717  setne byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf717u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)), x86_cc(c, 5) ? 1u : 0u);
    // 00f71f  call 0xf888
    X86_AT(c, 0xf71fu);
    push32(c, 0xf724u); f_0000f888(c); X86_RET(c, 0xf724u);
    X86_TICK(c, 12);
    // 00f724  test byte ptr gs:[ebp + 0x338], 8
    X86_AT(c, 0xf724u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x8u, 1);
    // 00f72c  je 0xf76a
    X86_AT(c, 0xf72cu);
    if (x86_cc(c, 4)) { goto L_f76a; }
    X86_TICK(c, 39);
    // 00f72e  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf72eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f735  sub word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf735u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f73d  mov ax, word ptr gs:[ebp + 0x38c]
    X86_AT(c, 0xf73du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu))));
    // 00f745  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf745u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f74d  shr eax, 0x10
    X86_AT(c, 0xf74du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f750  sub word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf750u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f758  call 0x36a0
    X86_AT(c, 0xf758u);
    push32(c, 0xf75du); f_000036a0(c); X86_RET(c, 0xf75du);
    X86_TICK(c, 14);
    // 00f75d  or byte ptr gs:[ebp + 0x379], 2
    X86_AT(c, 0xf75du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00f765  call 0xf888
    X86_AT(c, 0xf765u);
    push32(c, 0xf76au); f_0000f888(c); X86_RET(c, 0xf76au);
L_f76a:
    X86_TICK(c, 12);
    // 00f76a  test byte ptr gs:[ebp + 0x338], 4
    X86_AT(c, 0xf76au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x4u, 1);
    // 00f772  je 0xf798
    X86_AT(c, 0xf772u);
    if (x86_cc(c, 4)) { goto L_f798; }
    X86_TICK(c, 28);
    // 00f774  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf774u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f77b  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf77bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f783  shr eax, 0x10
    X86_AT(c, 0xf783u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f786  add word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf786u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f78e  call 0x36a0
    X86_AT(c, 0xf78eu);
    push32(c, 0xf793u); f_000036a0(c); X86_RET(c, 0xf793u);
    X86_TICK(c, 7);
    // 00f793  call 0xf888
    X86_AT(c, 0xf793u);
    push32(c, 0xf798u); f_0000f888(c); X86_RET(c, 0xf798u);
L_f798:
    X86_TICK(c, 12);
    // 00f798  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0xf798u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 00f7a0  jne 0xf7a7
    X86_AT(c, 0xf7a0u);
    if (x86_cc(c, 5)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f7a2  call 0xf7b0
    X86_AT(c, 0xf7a2u);
    push32(c, 0xf7a7u); f_0000f7b0(c); X86_RET(c, 0xf7a7u);
L_f7a7:
    X86_TICK(c, 15);
    // 00f7a7  pop dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf7a7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), v); }
    // 00f7ae  ret 
    X86_AT(c, 0xf7aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf666u, "ran off the end of a function");
}
void f_0000f671(X86Cpu& c) {
    X86_TICK(c, 9);
    // 00f671  mov dword ptr gs:[ebp + 0x388], 0
    X86_AT(c, 0xf671u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)), 0x0u);
    // 00f67c  test dl, 0xf
    X86_AT(c, 0xf67cu);
    (void)x86_logic(c, g8(c, 2) & 0xFu, 1);
    // 00f67f  je 0xf70f
    X86_AT(c, 0xf67fu);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 119);
    // 00f685  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf685u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f68c  mov ebx, dword ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf68cu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f693  add ax, bx
    X86_AT(c, 0xf693u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f696  dec ax
    X86_AT(c, 0xf696u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f698  div bl
    X86_AT(c, 0xf698u);
    x86_div(c, g8(c, 3), 1, 0xf698u);
    // 00f69a  sub ah, ah
    X86_AT(c, 0xf69au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f69c  mov word ptr gs:[ebp + 0x388], ax
    X86_AT(c, 0xf69cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)), (c.r[0] & 0xFFFFu));
    // 00f6a4  shr eax, 0x10
    X86_AT(c, 0xf6a4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f6a7  shr ebx, 0x10
    X86_AT(c, 0xf6a7u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f6aa  add ax, bx
    X86_AT(c, 0xf6aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6ad  dec ax
    X86_AT(c, 0xf6adu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f6af  div bl
    X86_AT(c, 0xf6afu);
    x86_div(c, g8(c, 3), 1, 0xf6afu);
    // 00f6b1  sub ah, ah
    X86_AT(c, 0xf6b1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f6b3  mov word ptr gs:[ebp + 0x38a], ax
    X86_AT(c, 0xf6b3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au)), (c.r[0] & 0xFFFFu));
    // 00f6bb  mov word ptr gs:[ebp + 0x38c], 0
    X86_AT(c, 0xf6bbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), 0x0u);
    // 00f6c5  test dl, 2
    X86_AT(c, 0xf6c5u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f6c8  je 0xf70f
    X86_AT(c, 0xf6c8u);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 48);
    // 00f6ca  mov bx, word ptr gs:[ebp + 0x38a]
    X86_AT(c, 0xf6cau);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au))));
    // 00f6d2  shr bx, 1
    X86_AT(c, 0xf6d2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f6d5  sub eax, eax
    X86_AT(c, 0xf6d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f6d7  test byte ptr gs:[ebp + 0x34c], 1
    X86_AT(c, 0xf6d7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu))) & 0x1u, 1);
    // 00f6df  sete al
    X86_AT(c, 0xf6dfu);
    s8(c, 0, x86_cc(c, 4) ? 1u : 0u);
    // 00f6e2  mov al, byte ptr gs:[ebp + eax*2 + 0x344]
    X86_AT(c, 0xf6e2u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 2 + 0x344u))));
    // 00f6ea  add al, byte ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf6eau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))), 0, 1)); }
    // 00f6f1  and ax, 1
    X86_AT(c, 0xf6f1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x1u, 2)); }
    // 00f6f5  xor ax, 1
    X86_AT(c, 0xf6f5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ 0x1u, 2)); }
    // 00f6f9  add ax, bx
    X86_AT(c, 0xf6f9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6fc  mov word ptr gs:[ebp + 0x38c], ax
    X86_AT(c, 0xf6fcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), (c.r[0] & 0xFFFFu));
    // 00f704  shl bx, 1
    X86_AT(c, 0xf704u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f707  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0xf707u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_f70f:
    X86_TICK(c, 7);
    // 00f70f  call 0x36e4
    X86_AT(c, 0xf70fu);
    push32(c, 0xf714u); f_000036e4(c); X86_RET(c, 0xf714u);
    X86_TICK(c, 14);
    // 00f714  test dl, 1
    X86_AT(c, 0xf714u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f717  setne byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf717u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)), x86_cc(c, 5) ? 1u : 0u);
    // 00f71f  call 0xf888
    X86_AT(c, 0xf71fu);
    push32(c, 0xf724u); f_0000f888(c); X86_RET(c, 0xf724u);
    X86_TICK(c, 12);
    // 00f724  test byte ptr gs:[ebp + 0x338], 8
    X86_AT(c, 0xf724u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x8u, 1);
    // 00f72c  je 0xf76a
    X86_AT(c, 0xf72cu);
    if (x86_cc(c, 4)) { goto L_f76a; }
    X86_TICK(c, 39);
    // 00f72e  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf72eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f735  sub word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf735u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f73d  mov ax, word ptr gs:[ebp + 0x38c]
    X86_AT(c, 0xf73du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu))));
    // 00f745  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf745u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f74d  shr eax, 0x10
    X86_AT(c, 0xf74du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f750  sub word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf750u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f758  call 0x36a0
    X86_AT(c, 0xf758u);
    push32(c, 0xf75du); f_000036a0(c); X86_RET(c, 0xf75du);
    X86_TICK(c, 14);
    // 00f75d  or byte ptr gs:[ebp + 0x379], 2
    X86_AT(c, 0xf75du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00f765  call 0xf888
    X86_AT(c, 0xf765u);
    push32(c, 0xf76au); f_0000f888(c); X86_RET(c, 0xf76au);
L_f76a:
    X86_TICK(c, 12);
    // 00f76a  test byte ptr gs:[ebp + 0x338], 4
    X86_AT(c, 0xf76au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x4u, 1);
    // 00f772  je 0xf798
    X86_AT(c, 0xf772u);
    if (x86_cc(c, 4)) { goto L_f798; }
    X86_TICK(c, 28);
    // 00f774  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf774u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f77b  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf77bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f783  shr eax, 0x10
    X86_AT(c, 0xf783u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f786  add word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf786u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f78e  call 0x36a0
    X86_AT(c, 0xf78eu);
    push32(c, 0xf793u); f_000036a0(c); X86_RET(c, 0xf793u);
    X86_TICK(c, 7);
    // 00f793  call 0xf888
    X86_AT(c, 0xf793u);
    push32(c, 0xf798u); f_0000f888(c); X86_RET(c, 0xf798u);
L_f798:
    X86_TICK(c, 12);
    // 00f798  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0xf798u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 00f7a0  jne 0xf7a7
    X86_AT(c, 0xf7a0u);
    if (x86_cc(c, 5)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f7a2  call 0xf7b0
    X86_AT(c, 0xf7a2u);
    push32(c, 0xf7a7u); f_0000f7b0(c); X86_RET(c, 0xf7a7u);
L_f7a7:
    X86_TICK(c, 15);
    // 00f7a7  pop dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf7a7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), v); }
    // 00f7ae  ret 
    X86_AT(c, 0xf7aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf671u, "ran off the end of a function");
}
void f_0000f67c(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00f67c  test dl, 0xf
    X86_AT(c, 0xf67cu);
    (void)x86_logic(c, g8(c, 2) & 0xFu, 1);
    // 00f67f  je 0xf70f
    X86_AT(c, 0xf67fu);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 119);
    // 00f685  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf685u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f68c  mov ebx, dword ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf68cu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f693  add ax, bx
    X86_AT(c, 0xf693u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f696  dec ax
    X86_AT(c, 0xf696u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f698  div bl
    X86_AT(c, 0xf698u);
    x86_div(c, g8(c, 3), 1, 0xf698u);
    // 00f69a  sub ah, ah
    X86_AT(c, 0xf69au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f69c  mov word ptr gs:[ebp + 0x388], ax
    X86_AT(c, 0xf69cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)), (c.r[0] & 0xFFFFu));
    // 00f6a4  shr eax, 0x10
    X86_AT(c, 0xf6a4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f6a7  shr ebx, 0x10
    X86_AT(c, 0xf6a7u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f6aa  add ax, bx
    X86_AT(c, 0xf6aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6ad  dec ax
    X86_AT(c, 0xf6adu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f6af  div bl
    X86_AT(c, 0xf6afu);
    x86_div(c, g8(c, 3), 1, 0xf6afu);
    // 00f6b1  sub ah, ah
    X86_AT(c, 0xf6b1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f6b3  mov word ptr gs:[ebp + 0x38a], ax
    X86_AT(c, 0xf6b3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au)), (c.r[0] & 0xFFFFu));
    // 00f6bb  mov word ptr gs:[ebp + 0x38c], 0
    X86_AT(c, 0xf6bbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), 0x0u);
    // 00f6c5  test dl, 2
    X86_AT(c, 0xf6c5u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f6c8  je 0xf70f
    X86_AT(c, 0xf6c8u);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 48);
    // 00f6ca  mov bx, word ptr gs:[ebp + 0x38a]
    X86_AT(c, 0xf6cau);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au))));
    // 00f6d2  shr bx, 1
    X86_AT(c, 0xf6d2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f6d5  sub eax, eax
    X86_AT(c, 0xf6d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f6d7  test byte ptr gs:[ebp + 0x34c], 1
    X86_AT(c, 0xf6d7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu))) & 0x1u, 1);
    // 00f6df  sete al
    X86_AT(c, 0xf6dfu);
    s8(c, 0, x86_cc(c, 4) ? 1u : 0u);
    // 00f6e2  mov al, byte ptr gs:[ebp + eax*2 + 0x344]
    X86_AT(c, 0xf6e2u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 2 + 0x344u))));
    // 00f6ea  add al, byte ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf6eau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))), 0, 1)); }
    // 00f6f1  and ax, 1
    X86_AT(c, 0xf6f1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x1u, 2)); }
    // 00f6f5  xor ax, 1
    X86_AT(c, 0xf6f5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ 0x1u, 2)); }
    // 00f6f9  add ax, bx
    X86_AT(c, 0xf6f9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6fc  mov word ptr gs:[ebp + 0x38c], ax
    X86_AT(c, 0xf6fcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), (c.r[0] & 0xFFFFu));
    // 00f704  shl bx, 1
    X86_AT(c, 0xf704u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f707  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0xf707u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_f70f:
    X86_TICK(c, 7);
    // 00f70f  call 0x36e4
    X86_AT(c, 0xf70fu);
    push32(c, 0xf714u); f_000036e4(c); X86_RET(c, 0xf714u);
    X86_TICK(c, 14);
    // 00f714  test dl, 1
    X86_AT(c, 0xf714u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f717  setne byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf717u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)), x86_cc(c, 5) ? 1u : 0u);
    // 00f71f  call 0xf888
    X86_AT(c, 0xf71fu);
    push32(c, 0xf724u); f_0000f888(c); X86_RET(c, 0xf724u);
    X86_TICK(c, 12);
    // 00f724  test byte ptr gs:[ebp + 0x338], 8
    X86_AT(c, 0xf724u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x8u, 1);
    // 00f72c  je 0xf76a
    X86_AT(c, 0xf72cu);
    if (x86_cc(c, 4)) { goto L_f76a; }
    X86_TICK(c, 39);
    // 00f72e  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf72eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f735  sub word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf735u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f73d  mov ax, word ptr gs:[ebp + 0x38c]
    X86_AT(c, 0xf73du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu))));
    // 00f745  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf745u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f74d  shr eax, 0x10
    X86_AT(c, 0xf74du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f750  sub word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf750u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f758  call 0x36a0
    X86_AT(c, 0xf758u);
    push32(c, 0xf75du); f_000036a0(c); X86_RET(c, 0xf75du);
    X86_TICK(c, 14);
    // 00f75d  or byte ptr gs:[ebp + 0x379], 2
    X86_AT(c, 0xf75du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00f765  call 0xf888
    X86_AT(c, 0xf765u);
    push32(c, 0xf76au); f_0000f888(c); X86_RET(c, 0xf76au);
L_f76a:
    X86_TICK(c, 12);
    // 00f76a  test byte ptr gs:[ebp + 0x338], 4
    X86_AT(c, 0xf76au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x4u, 1);
    // 00f772  je 0xf798
    X86_AT(c, 0xf772u);
    if (x86_cc(c, 4)) { goto L_f798; }
    X86_TICK(c, 28);
    // 00f774  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf774u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f77b  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf77bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f783  shr eax, 0x10
    X86_AT(c, 0xf783u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f786  add word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf786u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f78e  call 0x36a0
    X86_AT(c, 0xf78eu);
    push32(c, 0xf793u); f_000036a0(c); X86_RET(c, 0xf793u);
    X86_TICK(c, 7);
    // 00f793  call 0xf888
    X86_AT(c, 0xf793u);
    push32(c, 0xf798u); f_0000f888(c); X86_RET(c, 0xf798u);
L_f798:
    X86_TICK(c, 12);
    // 00f798  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0xf798u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 00f7a0  jne 0xf7a7
    X86_AT(c, 0xf7a0u);
    if (x86_cc(c, 5)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f7a2  call 0xf7b0
    X86_AT(c, 0xf7a2u);
    push32(c, 0xf7a7u); f_0000f7b0(c); X86_RET(c, 0xf7a7u);
L_f7a7:
    X86_TICK(c, 15);
    // 00f7a7  pop dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf7a7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), v); }
    // 00f7ae  ret 
    X86_AT(c, 0xf7aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf67cu, "ran off the end of a function");
}
void f_0000f67f(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00f67f  je 0xf70f
    X86_AT(c, 0xf67fu);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 119);
    // 00f685  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf685u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f68c  mov ebx, dword ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf68cu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f693  add ax, bx
    X86_AT(c, 0xf693u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f696  dec ax
    X86_AT(c, 0xf696u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f698  div bl
    X86_AT(c, 0xf698u);
    x86_div(c, g8(c, 3), 1, 0xf698u);
    // 00f69a  sub ah, ah
    X86_AT(c, 0xf69au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f69c  mov word ptr gs:[ebp + 0x388], ax
    X86_AT(c, 0xf69cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)), (c.r[0] & 0xFFFFu));
    // 00f6a4  shr eax, 0x10
    X86_AT(c, 0xf6a4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f6a7  shr ebx, 0x10
    X86_AT(c, 0xf6a7u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f6aa  add ax, bx
    X86_AT(c, 0xf6aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6ad  dec ax
    X86_AT(c, 0xf6adu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f6af  div bl
    X86_AT(c, 0xf6afu);
    x86_div(c, g8(c, 3), 1, 0xf6afu);
    // 00f6b1  sub ah, ah
    X86_AT(c, 0xf6b1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f6b3  mov word ptr gs:[ebp + 0x38a], ax
    X86_AT(c, 0xf6b3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au)), (c.r[0] & 0xFFFFu));
    // 00f6bb  mov word ptr gs:[ebp + 0x38c], 0
    X86_AT(c, 0xf6bbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), 0x0u);
    // 00f6c5  test dl, 2
    X86_AT(c, 0xf6c5u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f6c8  je 0xf70f
    X86_AT(c, 0xf6c8u);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 48);
    // 00f6ca  mov bx, word ptr gs:[ebp + 0x38a]
    X86_AT(c, 0xf6cau);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au))));
    // 00f6d2  shr bx, 1
    X86_AT(c, 0xf6d2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f6d5  sub eax, eax
    X86_AT(c, 0xf6d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f6d7  test byte ptr gs:[ebp + 0x34c], 1
    X86_AT(c, 0xf6d7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu))) & 0x1u, 1);
    // 00f6df  sete al
    X86_AT(c, 0xf6dfu);
    s8(c, 0, x86_cc(c, 4) ? 1u : 0u);
    // 00f6e2  mov al, byte ptr gs:[ebp + eax*2 + 0x344]
    X86_AT(c, 0xf6e2u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 2 + 0x344u))));
    // 00f6ea  add al, byte ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf6eau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))), 0, 1)); }
    // 00f6f1  and ax, 1
    X86_AT(c, 0xf6f1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x1u, 2)); }
    // 00f6f5  xor ax, 1
    X86_AT(c, 0xf6f5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ 0x1u, 2)); }
    // 00f6f9  add ax, bx
    X86_AT(c, 0xf6f9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6fc  mov word ptr gs:[ebp + 0x38c], ax
    X86_AT(c, 0xf6fcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), (c.r[0] & 0xFFFFu));
    // 00f704  shl bx, 1
    X86_AT(c, 0xf704u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f707  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0xf707u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_f70f:
    X86_TICK(c, 7);
    // 00f70f  call 0x36e4
    X86_AT(c, 0xf70fu);
    push32(c, 0xf714u); f_000036e4(c); X86_RET(c, 0xf714u);
    X86_TICK(c, 14);
    // 00f714  test dl, 1
    X86_AT(c, 0xf714u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f717  setne byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf717u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)), x86_cc(c, 5) ? 1u : 0u);
    // 00f71f  call 0xf888
    X86_AT(c, 0xf71fu);
    push32(c, 0xf724u); f_0000f888(c); X86_RET(c, 0xf724u);
    X86_TICK(c, 12);
    // 00f724  test byte ptr gs:[ebp + 0x338], 8
    X86_AT(c, 0xf724u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x8u, 1);
    // 00f72c  je 0xf76a
    X86_AT(c, 0xf72cu);
    if (x86_cc(c, 4)) { goto L_f76a; }
    X86_TICK(c, 39);
    // 00f72e  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf72eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f735  sub word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf735u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f73d  mov ax, word ptr gs:[ebp + 0x38c]
    X86_AT(c, 0xf73du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu))));
    // 00f745  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf745u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f74d  shr eax, 0x10
    X86_AT(c, 0xf74du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f750  sub word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf750u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f758  call 0x36a0
    X86_AT(c, 0xf758u);
    push32(c, 0xf75du); f_000036a0(c); X86_RET(c, 0xf75du);
    X86_TICK(c, 14);
    // 00f75d  or byte ptr gs:[ebp + 0x379], 2
    X86_AT(c, 0xf75du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00f765  call 0xf888
    X86_AT(c, 0xf765u);
    push32(c, 0xf76au); f_0000f888(c); X86_RET(c, 0xf76au);
L_f76a:
    X86_TICK(c, 12);
    // 00f76a  test byte ptr gs:[ebp + 0x338], 4
    X86_AT(c, 0xf76au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x4u, 1);
    // 00f772  je 0xf798
    X86_AT(c, 0xf772u);
    if (x86_cc(c, 4)) { goto L_f798; }
    X86_TICK(c, 28);
    // 00f774  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf774u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f77b  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf77bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f783  shr eax, 0x10
    X86_AT(c, 0xf783u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f786  add word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf786u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f78e  call 0x36a0
    X86_AT(c, 0xf78eu);
    push32(c, 0xf793u); f_000036a0(c); X86_RET(c, 0xf793u);
    X86_TICK(c, 7);
    // 00f793  call 0xf888
    X86_AT(c, 0xf793u);
    push32(c, 0xf798u); f_0000f888(c); X86_RET(c, 0xf798u);
L_f798:
    X86_TICK(c, 12);
    // 00f798  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0xf798u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 00f7a0  jne 0xf7a7
    X86_AT(c, 0xf7a0u);
    if (x86_cc(c, 5)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f7a2  call 0xf7b0
    X86_AT(c, 0xf7a2u);
    push32(c, 0xf7a7u); f_0000f7b0(c); X86_RET(c, 0xf7a7u);
L_f7a7:
    X86_TICK(c, 15);
    // 00f7a7  pop dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf7a7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), v); }
    // 00f7ae  ret 
    X86_AT(c, 0xf7aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf67fu, "ran off the end of a function");
}
void f_0000f685(X86Cpu& c) {
    X86_TICK(c, 119);
    // 00f685  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf685u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f68c  mov ebx, dword ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf68cu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f693  add ax, bx
    X86_AT(c, 0xf693u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f696  dec ax
    X86_AT(c, 0xf696u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f698  div bl
    X86_AT(c, 0xf698u);
    x86_div(c, g8(c, 3), 1, 0xf698u);
    // 00f69a  sub ah, ah
    X86_AT(c, 0xf69au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f69c  mov word ptr gs:[ebp + 0x388], ax
    X86_AT(c, 0xf69cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)), (c.r[0] & 0xFFFFu));
    // 00f6a4  shr eax, 0x10
    X86_AT(c, 0xf6a4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f6a7  shr ebx, 0x10
    X86_AT(c, 0xf6a7u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f6aa  add ax, bx
    X86_AT(c, 0xf6aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6ad  dec ax
    X86_AT(c, 0xf6adu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f6af  div bl
    X86_AT(c, 0xf6afu);
    x86_div(c, g8(c, 3), 1, 0xf6afu);
    // 00f6b1  sub ah, ah
    X86_AT(c, 0xf6b1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f6b3  mov word ptr gs:[ebp + 0x38a], ax
    X86_AT(c, 0xf6b3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au)), (c.r[0] & 0xFFFFu));
    // 00f6bb  mov word ptr gs:[ebp + 0x38c], 0
    X86_AT(c, 0xf6bbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), 0x0u);
    // 00f6c5  test dl, 2
    X86_AT(c, 0xf6c5u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f6c8  je 0xf70f
    X86_AT(c, 0xf6c8u);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 48);
    // 00f6ca  mov bx, word ptr gs:[ebp + 0x38a]
    X86_AT(c, 0xf6cau);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au))));
    // 00f6d2  shr bx, 1
    X86_AT(c, 0xf6d2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f6d5  sub eax, eax
    X86_AT(c, 0xf6d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f6d7  test byte ptr gs:[ebp + 0x34c], 1
    X86_AT(c, 0xf6d7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu))) & 0x1u, 1);
    // 00f6df  sete al
    X86_AT(c, 0xf6dfu);
    s8(c, 0, x86_cc(c, 4) ? 1u : 0u);
    // 00f6e2  mov al, byte ptr gs:[ebp + eax*2 + 0x344]
    X86_AT(c, 0xf6e2u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 2 + 0x344u))));
    // 00f6ea  add al, byte ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf6eau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))), 0, 1)); }
    // 00f6f1  and ax, 1
    X86_AT(c, 0xf6f1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x1u, 2)); }
    // 00f6f5  xor ax, 1
    X86_AT(c, 0xf6f5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ 0x1u, 2)); }
    // 00f6f9  add ax, bx
    X86_AT(c, 0xf6f9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6fc  mov word ptr gs:[ebp + 0x38c], ax
    X86_AT(c, 0xf6fcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), (c.r[0] & 0xFFFFu));
    // 00f704  shl bx, 1
    X86_AT(c, 0xf704u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f707  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0xf707u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_f70f:
    X86_TICK(c, 7);
    // 00f70f  call 0x36e4
    X86_AT(c, 0xf70fu);
    push32(c, 0xf714u); f_000036e4(c); X86_RET(c, 0xf714u);
    X86_TICK(c, 14);
    // 00f714  test dl, 1
    X86_AT(c, 0xf714u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f717  setne byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf717u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)), x86_cc(c, 5) ? 1u : 0u);
    // 00f71f  call 0xf888
    X86_AT(c, 0xf71fu);
    push32(c, 0xf724u); f_0000f888(c); X86_RET(c, 0xf724u);
    X86_TICK(c, 12);
    // 00f724  test byte ptr gs:[ebp + 0x338], 8
    X86_AT(c, 0xf724u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x8u, 1);
    // 00f72c  je 0xf76a
    X86_AT(c, 0xf72cu);
    if (x86_cc(c, 4)) { goto L_f76a; }
    X86_TICK(c, 39);
    // 00f72e  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf72eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f735  sub word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf735u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f73d  mov ax, word ptr gs:[ebp + 0x38c]
    X86_AT(c, 0xf73du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu))));
    // 00f745  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf745u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f74d  shr eax, 0x10
    X86_AT(c, 0xf74du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f750  sub word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf750u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f758  call 0x36a0
    X86_AT(c, 0xf758u);
    push32(c, 0xf75du); f_000036a0(c); X86_RET(c, 0xf75du);
    X86_TICK(c, 14);
    // 00f75d  or byte ptr gs:[ebp + 0x379], 2
    X86_AT(c, 0xf75du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00f765  call 0xf888
    X86_AT(c, 0xf765u);
    push32(c, 0xf76au); f_0000f888(c); X86_RET(c, 0xf76au);
L_f76a:
    X86_TICK(c, 12);
    // 00f76a  test byte ptr gs:[ebp + 0x338], 4
    X86_AT(c, 0xf76au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x4u, 1);
    // 00f772  je 0xf798
    X86_AT(c, 0xf772u);
    if (x86_cc(c, 4)) { goto L_f798; }
    X86_TICK(c, 28);
    // 00f774  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf774u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f77b  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf77bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f783  shr eax, 0x10
    X86_AT(c, 0xf783u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f786  add word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf786u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f78e  call 0x36a0
    X86_AT(c, 0xf78eu);
    push32(c, 0xf793u); f_000036a0(c); X86_RET(c, 0xf793u);
    X86_TICK(c, 7);
    // 00f793  call 0xf888
    X86_AT(c, 0xf793u);
    push32(c, 0xf798u); f_0000f888(c); X86_RET(c, 0xf798u);
L_f798:
    X86_TICK(c, 12);
    // 00f798  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0xf798u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 00f7a0  jne 0xf7a7
    X86_AT(c, 0xf7a0u);
    if (x86_cc(c, 5)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f7a2  call 0xf7b0
    X86_AT(c, 0xf7a2u);
    push32(c, 0xf7a7u); f_0000f7b0(c); X86_RET(c, 0xf7a7u);
L_f7a7:
    X86_TICK(c, 15);
    // 00f7a7  pop dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf7a7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), v); }
    // 00f7ae  ret 
    X86_AT(c, 0xf7aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf685u, "ran off the end of a function");
}
void f_0000f68c(X86Cpu& c) {
    X86_TICK(c, 115);
    // 00f68c  mov ebx, dword ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf68cu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f693  add ax, bx
    X86_AT(c, 0xf693u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f696  dec ax
    X86_AT(c, 0xf696u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f698  div bl
    X86_AT(c, 0xf698u);
    x86_div(c, g8(c, 3), 1, 0xf698u);
    // 00f69a  sub ah, ah
    X86_AT(c, 0xf69au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f69c  mov word ptr gs:[ebp + 0x388], ax
    X86_AT(c, 0xf69cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)), (c.r[0] & 0xFFFFu));
    // 00f6a4  shr eax, 0x10
    X86_AT(c, 0xf6a4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f6a7  shr ebx, 0x10
    X86_AT(c, 0xf6a7u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f6aa  add ax, bx
    X86_AT(c, 0xf6aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6ad  dec ax
    X86_AT(c, 0xf6adu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f6af  div bl
    X86_AT(c, 0xf6afu);
    x86_div(c, g8(c, 3), 1, 0xf6afu);
    // 00f6b1  sub ah, ah
    X86_AT(c, 0xf6b1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f6b3  mov word ptr gs:[ebp + 0x38a], ax
    X86_AT(c, 0xf6b3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au)), (c.r[0] & 0xFFFFu));
    // 00f6bb  mov word ptr gs:[ebp + 0x38c], 0
    X86_AT(c, 0xf6bbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), 0x0u);
    // 00f6c5  test dl, 2
    X86_AT(c, 0xf6c5u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f6c8  je 0xf70f
    X86_AT(c, 0xf6c8u);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 48);
    // 00f6ca  mov bx, word ptr gs:[ebp + 0x38a]
    X86_AT(c, 0xf6cau);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au))));
    // 00f6d2  shr bx, 1
    X86_AT(c, 0xf6d2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f6d5  sub eax, eax
    X86_AT(c, 0xf6d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f6d7  test byte ptr gs:[ebp + 0x34c], 1
    X86_AT(c, 0xf6d7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu))) & 0x1u, 1);
    // 00f6df  sete al
    X86_AT(c, 0xf6dfu);
    s8(c, 0, x86_cc(c, 4) ? 1u : 0u);
    // 00f6e2  mov al, byte ptr gs:[ebp + eax*2 + 0x344]
    X86_AT(c, 0xf6e2u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 2 + 0x344u))));
    // 00f6ea  add al, byte ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf6eau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))), 0, 1)); }
    // 00f6f1  and ax, 1
    X86_AT(c, 0xf6f1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x1u, 2)); }
    // 00f6f5  xor ax, 1
    X86_AT(c, 0xf6f5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ 0x1u, 2)); }
    // 00f6f9  add ax, bx
    X86_AT(c, 0xf6f9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6fc  mov word ptr gs:[ebp + 0x38c], ax
    X86_AT(c, 0xf6fcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), (c.r[0] & 0xFFFFu));
    // 00f704  shl bx, 1
    X86_AT(c, 0xf704u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f707  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0xf707u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_f70f:
    X86_TICK(c, 7);
    // 00f70f  call 0x36e4
    X86_AT(c, 0xf70fu);
    push32(c, 0xf714u); f_000036e4(c); X86_RET(c, 0xf714u);
    X86_TICK(c, 14);
    // 00f714  test dl, 1
    X86_AT(c, 0xf714u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f717  setne byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf717u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)), x86_cc(c, 5) ? 1u : 0u);
    // 00f71f  call 0xf888
    X86_AT(c, 0xf71fu);
    push32(c, 0xf724u); f_0000f888(c); X86_RET(c, 0xf724u);
    X86_TICK(c, 12);
    // 00f724  test byte ptr gs:[ebp + 0x338], 8
    X86_AT(c, 0xf724u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x8u, 1);
    // 00f72c  je 0xf76a
    X86_AT(c, 0xf72cu);
    if (x86_cc(c, 4)) { goto L_f76a; }
    X86_TICK(c, 39);
    // 00f72e  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf72eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f735  sub word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf735u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f73d  mov ax, word ptr gs:[ebp + 0x38c]
    X86_AT(c, 0xf73du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu))));
    // 00f745  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf745u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f74d  shr eax, 0x10
    X86_AT(c, 0xf74du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f750  sub word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf750u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f758  call 0x36a0
    X86_AT(c, 0xf758u);
    push32(c, 0xf75du); f_000036a0(c); X86_RET(c, 0xf75du);
    X86_TICK(c, 14);
    // 00f75d  or byte ptr gs:[ebp + 0x379], 2
    X86_AT(c, 0xf75du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00f765  call 0xf888
    X86_AT(c, 0xf765u);
    push32(c, 0xf76au); f_0000f888(c); X86_RET(c, 0xf76au);
L_f76a:
    X86_TICK(c, 12);
    // 00f76a  test byte ptr gs:[ebp + 0x338], 4
    X86_AT(c, 0xf76au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x4u, 1);
    // 00f772  je 0xf798
    X86_AT(c, 0xf772u);
    if (x86_cc(c, 4)) { goto L_f798; }
    X86_TICK(c, 28);
    // 00f774  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf774u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f77b  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf77bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f783  shr eax, 0x10
    X86_AT(c, 0xf783u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f786  add word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf786u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f78e  call 0x36a0
    X86_AT(c, 0xf78eu);
    push32(c, 0xf793u); f_000036a0(c); X86_RET(c, 0xf793u);
    X86_TICK(c, 7);
    // 00f793  call 0xf888
    X86_AT(c, 0xf793u);
    push32(c, 0xf798u); f_0000f888(c); X86_RET(c, 0xf798u);
L_f798:
    X86_TICK(c, 12);
    // 00f798  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0xf798u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 00f7a0  jne 0xf7a7
    X86_AT(c, 0xf7a0u);
    if (x86_cc(c, 5)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f7a2  call 0xf7b0
    X86_AT(c, 0xf7a2u);
    push32(c, 0xf7a7u); f_0000f7b0(c); X86_RET(c, 0xf7a7u);
L_f7a7:
    X86_TICK(c, 15);
    // 00f7a7  pop dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf7a7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), v); }
    // 00f7ae  ret 
    X86_AT(c, 0xf7aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf68cu, "ran off the end of a function");
}
void f_0000f693(X86Cpu& c) {
    X86_TICK(c, 111);
    // 00f693  add ax, bx
    X86_AT(c, 0xf693u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f696  dec ax
    X86_AT(c, 0xf696u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f698  div bl
    X86_AT(c, 0xf698u);
    x86_div(c, g8(c, 3), 1, 0xf698u);
    // 00f69a  sub ah, ah
    X86_AT(c, 0xf69au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f69c  mov word ptr gs:[ebp + 0x388], ax
    X86_AT(c, 0xf69cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)), (c.r[0] & 0xFFFFu));
    // 00f6a4  shr eax, 0x10
    X86_AT(c, 0xf6a4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f6a7  shr ebx, 0x10
    X86_AT(c, 0xf6a7u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f6aa  add ax, bx
    X86_AT(c, 0xf6aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6ad  dec ax
    X86_AT(c, 0xf6adu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f6af  div bl
    X86_AT(c, 0xf6afu);
    x86_div(c, g8(c, 3), 1, 0xf6afu);
    // 00f6b1  sub ah, ah
    X86_AT(c, 0xf6b1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f6b3  mov word ptr gs:[ebp + 0x38a], ax
    X86_AT(c, 0xf6b3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au)), (c.r[0] & 0xFFFFu));
    // 00f6bb  mov word ptr gs:[ebp + 0x38c], 0
    X86_AT(c, 0xf6bbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), 0x0u);
    // 00f6c5  test dl, 2
    X86_AT(c, 0xf6c5u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f6c8  je 0xf70f
    X86_AT(c, 0xf6c8u);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 48);
    // 00f6ca  mov bx, word ptr gs:[ebp + 0x38a]
    X86_AT(c, 0xf6cau);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au))));
    // 00f6d2  shr bx, 1
    X86_AT(c, 0xf6d2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f6d5  sub eax, eax
    X86_AT(c, 0xf6d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f6d7  test byte ptr gs:[ebp + 0x34c], 1
    X86_AT(c, 0xf6d7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu))) & 0x1u, 1);
    // 00f6df  sete al
    X86_AT(c, 0xf6dfu);
    s8(c, 0, x86_cc(c, 4) ? 1u : 0u);
    // 00f6e2  mov al, byte ptr gs:[ebp + eax*2 + 0x344]
    X86_AT(c, 0xf6e2u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 2 + 0x344u))));
    // 00f6ea  add al, byte ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf6eau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))), 0, 1)); }
    // 00f6f1  and ax, 1
    X86_AT(c, 0xf6f1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x1u, 2)); }
    // 00f6f5  xor ax, 1
    X86_AT(c, 0xf6f5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ 0x1u, 2)); }
    // 00f6f9  add ax, bx
    X86_AT(c, 0xf6f9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6fc  mov word ptr gs:[ebp + 0x38c], ax
    X86_AT(c, 0xf6fcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), (c.r[0] & 0xFFFFu));
    // 00f704  shl bx, 1
    X86_AT(c, 0xf704u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f707  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0xf707u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_f70f:
    X86_TICK(c, 7);
    // 00f70f  call 0x36e4
    X86_AT(c, 0xf70fu);
    push32(c, 0xf714u); f_000036e4(c); X86_RET(c, 0xf714u);
    X86_TICK(c, 14);
    // 00f714  test dl, 1
    X86_AT(c, 0xf714u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f717  setne byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf717u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)), x86_cc(c, 5) ? 1u : 0u);
    // 00f71f  call 0xf888
    X86_AT(c, 0xf71fu);
    push32(c, 0xf724u); f_0000f888(c); X86_RET(c, 0xf724u);
    X86_TICK(c, 12);
    // 00f724  test byte ptr gs:[ebp + 0x338], 8
    X86_AT(c, 0xf724u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x8u, 1);
    // 00f72c  je 0xf76a
    X86_AT(c, 0xf72cu);
    if (x86_cc(c, 4)) { goto L_f76a; }
    X86_TICK(c, 39);
    // 00f72e  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf72eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f735  sub word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf735u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f73d  mov ax, word ptr gs:[ebp + 0x38c]
    X86_AT(c, 0xf73du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu))));
    // 00f745  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf745u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f74d  shr eax, 0x10
    X86_AT(c, 0xf74du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f750  sub word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf750u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f758  call 0x36a0
    X86_AT(c, 0xf758u);
    push32(c, 0xf75du); f_000036a0(c); X86_RET(c, 0xf75du);
    X86_TICK(c, 14);
    // 00f75d  or byte ptr gs:[ebp + 0x379], 2
    X86_AT(c, 0xf75du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00f765  call 0xf888
    X86_AT(c, 0xf765u);
    push32(c, 0xf76au); f_0000f888(c); X86_RET(c, 0xf76au);
L_f76a:
    X86_TICK(c, 12);
    // 00f76a  test byte ptr gs:[ebp + 0x338], 4
    X86_AT(c, 0xf76au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x4u, 1);
    // 00f772  je 0xf798
    X86_AT(c, 0xf772u);
    if (x86_cc(c, 4)) { goto L_f798; }
    X86_TICK(c, 28);
    // 00f774  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf774u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f77b  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf77bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f783  shr eax, 0x10
    X86_AT(c, 0xf783u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f786  add word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf786u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f78e  call 0x36a0
    X86_AT(c, 0xf78eu);
    push32(c, 0xf793u); f_000036a0(c); X86_RET(c, 0xf793u);
    X86_TICK(c, 7);
    // 00f793  call 0xf888
    X86_AT(c, 0xf793u);
    push32(c, 0xf798u); f_0000f888(c); X86_RET(c, 0xf798u);
L_f798:
    X86_TICK(c, 12);
    // 00f798  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0xf798u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 00f7a0  jne 0xf7a7
    X86_AT(c, 0xf7a0u);
    if (x86_cc(c, 5)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f7a2  call 0xf7b0
    X86_AT(c, 0xf7a2u);
    push32(c, 0xf7a7u); f_0000f7b0(c); X86_RET(c, 0xf7a7u);
L_f7a7:
    X86_TICK(c, 15);
    // 00f7a7  pop dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf7a7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), v); }
    // 00f7ae  ret 
    X86_AT(c, 0xf7aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf693u, "ran off the end of a function");
}
void f_0000f696(X86Cpu& c) {
    X86_TICK(c, 109);
    // 00f696  dec ax
    X86_AT(c, 0xf696u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f698  div bl
    X86_AT(c, 0xf698u);
    x86_div(c, g8(c, 3), 1, 0xf698u);
    // 00f69a  sub ah, ah
    X86_AT(c, 0xf69au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f69c  mov word ptr gs:[ebp + 0x388], ax
    X86_AT(c, 0xf69cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)), (c.r[0] & 0xFFFFu));
    // 00f6a4  shr eax, 0x10
    X86_AT(c, 0xf6a4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f6a7  shr ebx, 0x10
    X86_AT(c, 0xf6a7u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f6aa  add ax, bx
    X86_AT(c, 0xf6aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6ad  dec ax
    X86_AT(c, 0xf6adu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f6af  div bl
    X86_AT(c, 0xf6afu);
    x86_div(c, g8(c, 3), 1, 0xf6afu);
    // 00f6b1  sub ah, ah
    X86_AT(c, 0xf6b1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f6b3  mov word ptr gs:[ebp + 0x38a], ax
    X86_AT(c, 0xf6b3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au)), (c.r[0] & 0xFFFFu));
    // 00f6bb  mov word ptr gs:[ebp + 0x38c], 0
    X86_AT(c, 0xf6bbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), 0x0u);
    // 00f6c5  test dl, 2
    X86_AT(c, 0xf6c5u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f6c8  je 0xf70f
    X86_AT(c, 0xf6c8u);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 48);
    // 00f6ca  mov bx, word ptr gs:[ebp + 0x38a]
    X86_AT(c, 0xf6cau);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au))));
    // 00f6d2  shr bx, 1
    X86_AT(c, 0xf6d2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f6d5  sub eax, eax
    X86_AT(c, 0xf6d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f6d7  test byte ptr gs:[ebp + 0x34c], 1
    X86_AT(c, 0xf6d7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu))) & 0x1u, 1);
    // 00f6df  sete al
    X86_AT(c, 0xf6dfu);
    s8(c, 0, x86_cc(c, 4) ? 1u : 0u);
    // 00f6e2  mov al, byte ptr gs:[ebp + eax*2 + 0x344]
    X86_AT(c, 0xf6e2u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 2 + 0x344u))));
    // 00f6ea  add al, byte ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf6eau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))), 0, 1)); }
    // 00f6f1  and ax, 1
    X86_AT(c, 0xf6f1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x1u, 2)); }
    // 00f6f5  xor ax, 1
    X86_AT(c, 0xf6f5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ 0x1u, 2)); }
    // 00f6f9  add ax, bx
    X86_AT(c, 0xf6f9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6fc  mov word ptr gs:[ebp + 0x38c], ax
    X86_AT(c, 0xf6fcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), (c.r[0] & 0xFFFFu));
    // 00f704  shl bx, 1
    X86_AT(c, 0xf704u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f707  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0xf707u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_f70f:
    X86_TICK(c, 7);
    // 00f70f  call 0x36e4
    X86_AT(c, 0xf70fu);
    push32(c, 0xf714u); f_000036e4(c); X86_RET(c, 0xf714u);
    X86_TICK(c, 14);
    // 00f714  test dl, 1
    X86_AT(c, 0xf714u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f717  setne byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf717u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)), x86_cc(c, 5) ? 1u : 0u);
    // 00f71f  call 0xf888
    X86_AT(c, 0xf71fu);
    push32(c, 0xf724u); f_0000f888(c); X86_RET(c, 0xf724u);
    X86_TICK(c, 12);
    // 00f724  test byte ptr gs:[ebp + 0x338], 8
    X86_AT(c, 0xf724u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x8u, 1);
    // 00f72c  je 0xf76a
    X86_AT(c, 0xf72cu);
    if (x86_cc(c, 4)) { goto L_f76a; }
    X86_TICK(c, 39);
    // 00f72e  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf72eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f735  sub word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf735u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f73d  mov ax, word ptr gs:[ebp + 0x38c]
    X86_AT(c, 0xf73du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu))));
    // 00f745  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf745u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f74d  shr eax, 0x10
    X86_AT(c, 0xf74du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f750  sub word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf750u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f758  call 0x36a0
    X86_AT(c, 0xf758u);
    push32(c, 0xf75du); f_000036a0(c); X86_RET(c, 0xf75du);
    X86_TICK(c, 14);
    // 00f75d  or byte ptr gs:[ebp + 0x379], 2
    X86_AT(c, 0xf75du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00f765  call 0xf888
    X86_AT(c, 0xf765u);
    push32(c, 0xf76au); f_0000f888(c); X86_RET(c, 0xf76au);
L_f76a:
    X86_TICK(c, 12);
    // 00f76a  test byte ptr gs:[ebp + 0x338], 4
    X86_AT(c, 0xf76au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x4u, 1);
    // 00f772  je 0xf798
    X86_AT(c, 0xf772u);
    if (x86_cc(c, 4)) { goto L_f798; }
    X86_TICK(c, 28);
    // 00f774  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf774u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f77b  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf77bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f783  shr eax, 0x10
    X86_AT(c, 0xf783u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f786  add word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf786u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f78e  call 0x36a0
    X86_AT(c, 0xf78eu);
    push32(c, 0xf793u); f_000036a0(c); X86_RET(c, 0xf793u);
    X86_TICK(c, 7);
    // 00f793  call 0xf888
    X86_AT(c, 0xf793u);
    push32(c, 0xf798u); f_0000f888(c); X86_RET(c, 0xf798u);
L_f798:
    X86_TICK(c, 12);
    // 00f798  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0xf798u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 00f7a0  jne 0xf7a7
    X86_AT(c, 0xf7a0u);
    if (x86_cc(c, 5)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f7a2  call 0xf7b0
    X86_AT(c, 0xf7a2u);
    push32(c, 0xf7a7u); f_0000f7b0(c); X86_RET(c, 0xf7a7u);
L_f7a7:
    X86_TICK(c, 15);
    // 00f7a7  pop dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf7a7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), v); }
    // 00f7ae  ret 
    X86_AT(c, 0xf7aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf696u, "ran off the end of a function");
}
void f_0000f698(X86Cpu& c) {
    X86_TICK(c, 107);
    // 00f698  div bl
    X86_AT(c, 0xf698u);
    x86_div(c, g8(c, 3), 1, 0xf698u);
    // 00f69a  sub ah, ah
    X86_AT(c, 0xf69au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f69c  mov word ptr gs:[ebp + 0x388], ax
    X86_AT(c, 0xf69cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)), (c.r[0] & 0xFFFFu));
    // 00f6a4  shr eax, 0x10
    X86_AT(c, 0xf6a4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f6a7  shr ebx, 0x10
    X86_AT(c, 0xf6a7u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f6aa  add ax, bx
    X86_AT(c, 0xf6aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6ad  dec ax
    X86_AT(c, 0xf6adu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f6af  div bl
    X86_AT(c, 0xf6afu);
    x86_div(c, g8(c, 3), 1, 0xf6afu);
    // 00f6b1  sub ah, ah
    X86_AT(c, 0xf6b1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f6b3  mov word ptr gs:[ebp + 0x38a], ax
    X86_AT(c, 0xf6b3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au)), (c.r[0] & 0xFFFFu));
    // 00f6bb  mov word ptr gs:[ebp + 0x38c], 0
    X86_AT(c, 0xf6bbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), 0x0u);
    // 00f6c5  test dl, 2
    X86_AT(c, 0xf6c5u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f6c8  je 0xf70f
    X86_AT(c, 0xf6c8u);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 48);
    // 00f6ca  mov bx, word ptr gs:[ebp + 0x38a]
    X86_AT(c, 0xf6cau);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au))));
    // 00f6d2  shr bx, 1
    X86_AT(c, 0xf6d2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f6d5  sub eax, eax
    X86_AT(c, 0xf6d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f6d7  test byte ptr gs:[ebp + 0x34c], 1
    X86_AT(c, 0xf6d7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu))) & 0x1u, 1);
    // 00f6df  sete al
    X86_AT(c, 0xf6dfu);
    s8(c, 0, x86_cc(c, 4) ? 1u : 0u);
    // 00f6e2  mov al, byte ptr gs:[ebp + eax*2 + 0x344]
    X86_AT(c, 0xf6e2u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 2 + 0x344u))));
    // 00f6ea  add al, byte ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf6eau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))), 0, 1)); }
    // 00f6f1  and ax, 1
    X86_AT(c, 0xf6f1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x1u, 2)); }
    // 00f6f5  xor ax, 1
    X86_AT(c, 0xf6f5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ 0x1u, 2)); }
    // 00f6f9  add ax, bx
    X86_AT(c, 0xf6f9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6fc  mov word ptr gs:[ebp + 0x38c], ax
    X86_AT(c, 0xf6fcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), (c.r[0] & 0xFFFFu));
    // 00f704  shl bx, 1
    X86_AT(c, 0xf704u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f707  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0xf707u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_f70f:
    X86_TICK(c, 7);
    // 00f70f  call 0x36e4
    X86_AT(c, 0xf70fu);
    push32(c, 0xf714u); f_000036e4(c); X86_RET(c, 0xf714u);
    X86_TICK(c, 14);
    // 00f714  test dl, 1
    X86_AT(c, 0xf714u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f717  setne byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf717u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)), x86_cc(c, 5) ? 1u : 0u);
    // 00f71f  call 0xf888
    X86_AT(c, 0xf71fu);
    push32(c, 0xf724u); f_0000f888(c); X86_RET(c, 0xf724u);
    X86_TICK(c, 12);
    // 00f724  test byte ptr gs:[ebp + 0x338], 8
    X86_AT(c, 0xf724u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x8u, 1);
    // 00f72c  je 0xf76a
    X86_AT(c, 0xf72cu);
    if (x86_cc(c, 4)) { goto L_f76a; }
    X86_TICK(c, 39);
    // 00f72e  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf72eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f735  sub word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf735u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f73d  mov ax, word ptr gs:[ebp + 0x38c]
    X86_AT(c, 0xf73du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu))));
    // 00f745  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf745u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f74d  shr eax, 0x10
    X86_AT(c, 0xf74du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f750  sub word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf750u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f758  call 0x36a0
    X86_AT(c, 0xf758u);
    push32(c, 0xf75du); f_000036a0(c); X86_RET(c, 0xf75du);
    X86_TICK(c, 14);
    // 00f75d  or byte ptr gs:[ebp + 0x379], 2
    X86_AT(c, 0xf75du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00f765  call 0xf888
    X86_AT(c, 0xf765u);
    push32(c, 0xf76au); f_0000f888(c); X86_RET(c, 0xf76au);
L_f76a:
    X86_TICK(c, 12);
    // 00f76a  test byte ptr gs:[ebp + 0x338], 4
    X86_AT(c, 0xf76au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x4u, 1);
    // 00f772  je 0xf798
    X86_AT(c, 0xf772u);
    if (x86_cc(c, 4)) { goto L_f798; }
    X86_TICK(c, 28);
    // 00f774  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf774u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f77b  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf77bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f783  shr eax, 0x10
    X86_AT(c, 0xf783u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f786  add word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf786u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f78e  call 0x36a0
    X86_AT(c, 0xf78eu);
    push32(c, 0xf793u); f_000036a0(c); X86_RET(c, 0xf793u);
    X86_TICK(c, 7);
    // 00f793  call 0xf888
    X86_AT(c, 0xf793u);
    push32(c, 0xf798u); f_0000f888(c); X86_RET(c, 0xf798u);
L_f798:
    X86_TICK(c, 12);
    // 00f798  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0xf798u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 00f7a0  jne 0xf7a7
    X86_AT(c, 0xf7a0u);
    if (x86_cc(c, 5)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f7a2  call 0xf7b0
    X86_AT(c, 0xf7a2u);
    push32(c, 0xf7a7u); f_0000f7b0(c); X86_RET(c, 0xf7a7u);
L_f7a7:
    X86_TICK(c, 15);
    // 00f7a7  pop dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf7a7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), v); }
    // 00f7ae  ret 
    X86_AT(c, 0xf7aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf698u, "ran off the end of a function");
}
void f_0000f69a(X86Cpu& c) {
    X86_TICK(c, 67);
    // 00f69a  sub ah, ah
    X86_AT(c, 0xf69au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f69c  mov word ptr gs:[ebp + 0x388], ax
    X86_AT(c, 0xf69cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)), (c.r[0] & 0xFFFFu));
    // 00f6a4  shr eax, 0x10
    X86_AT(c, 0xf6a4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f6a7  shr ebx, 0x10
    X86_AT(c, 0xf6a7u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f6aa  add ax, bx
    X86_AT(c, 0xf6aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6ad  dec ax
    X86_AT(c, 0xf6adu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f6af  div bl
    X86_AT(c, 0xf6afu);
    x86_div(c, g8(c, 3), 1, 0xf6afu);
    // 00f6b1  sub ah, ah
    X86_AT(c, 0xf6b1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f6b3  mov word ptr gs:[ebp + 0x38a], ax
    X86_AT(c, 0xf6b3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au)), (c.r[0] & 0xFFFFu));
    // 00f6bb  mov word ptr gs:[ebp + 0x38c], 0
    X86_AT(c, 0xf6bbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), 0x0u);
    // 00f6c5  test dl, 2
    X86_AT(c, 0xf6c5u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f6c8  je 0xf70f
    X86_AT(c, 0xf6c8u);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 48);
    // 00f6ca  mov bx, word ptr gs:[ebp + 0x38a]
    X86_AT(c, 0xf6cau);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au))));
    // 00f6d2  shr bx, 1
    X86_AT(c, 0xf6d2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f6d5  sub eax, eax
    X86_AT(c, 0xf6d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f6d7  test byte ptr gs:[ebp + 0x34c], 1
    X86_AT(c, 0xf6d7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu))) & 0x1u, 1);
    // 00f6df  sete al
    X86_AT(c, 0xf6dfu);
    s8(c, 0, x86_cc(c, 4) ? 1u : 0u);
    // 00f6e2  mov al, byte ptr gs:[ebp + eax*2 + 0x344]
    X86_AT(c, 0xf6e2u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 2 + 0x344u))));
    // 00f6ea  add al, byte ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf6eau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))), 0, 1)); }
    // 00f6f1  and ax, 1
    X86_AT(c, 0xf6f1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x1u, 2)); }
    // 00f6f5  xor ax, 1
    X86_AT(c, 0xf6f5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ 0x1u, 2)); }
    // 00f6f9  add ax, bx
    X86_AT(c, 0xf6f9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6fc  mov word ptr gs:[ebp + 0x38c], ax
    X86_AT(c, 0xf6fcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), (c.r[0] & 0xFFFFu));
    // 00f704  shl bx, 1
    X86_AT(c, 0xf704u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f707  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0xf707u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_f70f:
    X86_TICK(c, 7);
    // 00f70f  call 0x36e4
    X86_AT(c, 0xf70fu);
    push32(c, 0xf714u); f_000036e4(c); X86_RET(c, 0xf714u);
    X86_TICK(c, 14);
    // 00f714  test dl, 1
    X86_AT(c, 0xf714u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f717  setne byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf717u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)), x86_cc(c, 5) ? 1u : 0u);
    // 00f71f  call 0xf888
    X86_AT(c, 0xf71fu);
    push32(c, 0xf724u); f_0000f888(c); X86_RET(c, 0xf724u);
    X86_TICK(c, 12);
    // 00f724  test byte ptr gs:[ebp + 0x338], 8
    X86_AT(c, 0xf724u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x8u, 1);
    // 00f72c  je 0xf76a
    X86_AT(c, 0xf72cu);
    if (x86_cc(c, 4)) { goto L_f76a; }
    X86_TICK(c, 39);
    // 00f72e  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf72eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f735  sub word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf735u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f73d  mov ax, word ptr gs:[ebp + 0x38c]
    X86_AT(c, 0xf73du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu))));
    // 00f745  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf745u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f74d  shr eax, 0x10
    X86_AT(c, 0xf74du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f750  sub word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf750u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f758  call 0x36a0
    X86_AT(c, 0xf758u);
    push32(c, 0xf75du); f_000036a0(c); X86_RET(c, 0xf75du);
    X86_TICK(c, 14);
    // 00f75d  or byte ptr gs:[ebp + 0x379], 2
    X86_AT(c, 0xf75du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00f765  call 0xf888
    X86_AT(c, 0xf765u);
    push32(c, 0xf76au); f_0000f888(c); X86_RET(c, 0xf76au);
L_f76a:
    X86_TICK(c, 12);
    // 00f76a  test byte ptr gs:[ebp + 0x338], 4
    X86_AT(c, 0xf76au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x4u, 1);
    // 00f772  je 0xf798
    X86_AT(c, 0xf772u);
    if (x86_cc(c, 4)) { goto L_f798; }
    X86_TICK(c, 28);
    // 00f774  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf774u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f77b  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf77bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f783  shr eax, 0x10
    X86_AT(c, 0xf783u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f786  add word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf786u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f78e  call 0x36a0
    X86_AT(c, 0xf78eu);
    push32(c, 0xf793u); f_000036a0(c); X86_RET(c, 0xf793u);
    X86_TICK(c, 7);
    // 00f793  call 0xf888
    X86_AT(c, 0xf793u);
    push32(c, 0xf798u); f_0000f888(c); X86_RET(c, 0xf798u);
L_f798:
    X86_TICK(c, 12);
    // 00f798  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0xf798u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 00f7a0  jne 0xf7a7
    X86_AT(c, 0xf7a0u);
    if (x86_cc(c, 5)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f7a2  call 0xf7b0
    X86_AT(c, 0xf7a2u);
    push32(c, 0xf7a7u); f_0000f7b0(c); X86_RET(c, 0xf7a7u);
L_f7a7:
    X86_TICK(c, 15);
    // 00f7a7  pop dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf7a7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), v); }
    // 00f7ae  ret 
    X86_AT(c, 0xf7aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf69au, "ran off the end of a function");
}
void f_0000f69c(X86Cpu& c) {
    X86_TICK(c, 65);
    // 00f69c  mov word ptr gs:[ebp + 0x388], ax
    X86_AT(c, 0xf69cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)), (c.r[0] & 0xFFFFu));
    // 00f6a4  shr eax, 0x10
    X86_AT(c, 0xf6a4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f6a7  shr ebx, 0x10
    X86_AT(c, 0xf6a7u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f6aa  add ax, bx
    X86_AT(c, 0xf6aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6ad  dec ax
    X86_AT(c, 0xf6adu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f6af  div bl
    X86_AT(c, 0xf6afu);
    x86_div(c, g8(c, 3), 1, 0xf6afu);
    // 00f6b1  sub ah, ah
    X86_AT(c, 0xf6b1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f6b3  mov word ptr gs:[ebp + 0x38a], ax
    X86_AT(c, 0xf6b3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au)), (c.r[0] & 0xFFFFu));
    // 00f6bb  mov word ptr gs:[ebp + 0x38c], 0
    X86_AT(c, 0xf6bbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), 0x0u);
    // 00f6c5  test dl, 2
    X86_AT(c, 0xf6c5u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f6c8  je 0xf70f
    X86_AT(c, 0xf6c8u);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 48);
    // 00f6ca  mov bx, word ptr gs:[ebp + 0x38a]
    X86_AT(c, 0xf6cau);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au))));
    // 00f6d2  shr bx, 1
    X86_AT(c, 0xf6d2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f6d5  sub eax, eax
    X86_AT(c, 0xf6d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f6d7  test byte ptr gs:[ebp + 0x34c], 1
    X86_AT(c, 0xf6d7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu))) & 0x1u, 1);
    // 00f6df  sete al
    X86_AT(c, 0xf6dfu);
    s8(c, 0, x86_cc(c, 4) ? 1u : 0u);
    // 00f6e2  mov al, byte ptr gs:[ebp + eax*2 + 0x344]
    X86_AT(c, 0xf6e2u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 2 + 0x344u))));
    // 00f6ea  add al, byte ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf6eau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))), 0, 1)); }
    // 00f6f1  and ax, 1
    X86_AT(c, 0xf6f1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x1u, 2)); }
    // 00f6f5  xor ax, 1
    X86_AT(c, 0xf6f5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ 0x1u, 2)); }
    // 00f6f9  add ax, bx
    X86_AT(c, 0xf6f9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6fc  mov word ptr gs:[ebp + 0x38c], ax
    X86_AT(c, 0xf6fcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), (c.r[0] & 0xFFFFu));
    // 00f704  shl bx, 1
    X86_AT(c, 0xf704u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f707  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0xf707u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_f70f:
    X86_TICK(c, 7);
    // 00f70f  call 0x36e4
    X86_AT(c, 0xf70fu);
    push32(c, 0xf714u); f_000036e4(c); X86_RET(c, 0xf714u);
    X86_TICK(c, 14);
    // 00f714  test dl, 1
    X86_AT(c, 0xf714u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f717  setne byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf717u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)), x86_cc(c, 5) ? 1u : 0u);
    // 00f71f  call 0xf888
    X86_AT(c, 0xf71fu);
    push32(c, 0xf724u); f_0000f888(c); X86_RET(c, 0xf724u);
    X86_TICK(c, 12);
    // 00f724  test byte ptr gs:[ebp + 0x338], 8
    X86_AT(c, 0xf724u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x8u, 1);
    // 00f72c  je 0xf76a
    X86_AT(c, 0xf72cu);
    if (x86_cc(c, 4)) { goto L_f76a; }
    X86_TICK(c, 39);
    // 00f72e  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf72eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f735  sub word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf735u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f73d  mov ax, word ptr gs:[ebp + 0x38c]
    X86_AT(c, 0xf73du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu))));
    // 00f745  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf745u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f74d  shr eax, 0x10
    X86_AT(c, 0xf74du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f750  sub word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf750u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f758  call 0x36a0
    X86_AT(c, 0xf758u);
    push32(c, 0xf75du); f_000036a0(c); X86_RET(c, 0xf75du);
    X86_TICK(c, 14);
    // 00f75d  or byte ptr gs:[ebp + 0x379], 2
    X86_AT(c, 0xf75du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00f765  call 0xf888
    X86_AT(c, 0xf765u);
    push32(c, 0xf76au); f_0000f888(c); X86_RET(c, 0xf76au);
L_f76a:
    X86_TICK(c, 12);
    // 00f76a  test byte ptr gs:[ebp + 0x338], 4
    X86_AT(c, 0xf76au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x4u, 1);
    // 00f772  je 0xf798
    X86_AT(c, 0xf772u);
    if (x86_cc(c, 4)) { goto L_f798; }
    X86_TICK(c, 28);
    // 00f774  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf774u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f77b  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf77bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f783  shr eax, 0x10
    X86_AT(c, 0xf783u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f786  add word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf786u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f78e  call 0x36a0
    X86_AT(c, 0xf78eu);
    push32(c, 0xf793u); f_000036a0(c); X86_RET(c, 0xf793u);
    X86_TICK(c, 7);
    // 00f793  call 0xf888
    X86_AT(c, 0xf793u);
    push32(c, 0xf798u); f_0000f888(c); X86_RET(c, 0xf798u);
L_f798:
    X86_TICK(c, 12);
    // 00f798  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0xf798u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 00f7a0  jne 0xf7a7
    X86_AT(c, 0xf7a0u);
    if (x86_cc(c, 5)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f7a2  call 0xf7b0
    X86_AT(c, 0xf7a2u);
    push32(c, 0xf7a7u); f_0000f7b0(c); X86_RET(c, 0xf7a7u);
L_f7a7:
    X86_TICK(c, 15);
    // 00f7a7  pop dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf7a7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), v); }
    // 00f7ae  ret 
    X86_AT(c, 0xf7aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf69cu, "ran off the end of a function");
}
void f_0000f6a4(X86Cpu& c) {
    X86_TICK(c, 63);
    // 00f6a4  shr eax, 0x10
    X86_AT(c, 0xf6a4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f6a7  shr ebx, 0x10
    X86_AT(c, 0xf6a7u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f6aa  add ax, bx
    X86_AT(c, 0xf6aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6ad  dec ax
    X86_AT(c, 0xf6adu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f6af  div bl
    X86_AT(c, 0xf6afu);
    x86_div(c, g8(c, 3), 1, 0xf6afu);
    // 00f6b1  sub ah, ah
    X86_AT(c, 0xf6b1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f6b3  mov word ptr gs:[ebp + 0x38a], ax
    X86_AT(c, 0xf6b3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au)), (c.r[0] & 0xFFFFu));
    // 00f6bb  mov word ptr gs:[ebp + 0x38c], 0
    X86_AT(c, 0xf6bbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), 0x0u);
    // 00f6c5  test dl, 2
    X86_AT(c, 0xf6c5u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f6c8  je 0xf70f
    X86_AT(c, 0xf6c8u);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 48);
    // 00f6ca  mov bx, word ptr gs:[ebp + 0x38a]
    X86_AT(c, 0xf6cau);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au))));
    // 00f6d2  shr bx, 1
    X86_AT(c, 0xf6d2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f6d5  sub eax, eax
    X86_AT(c, 0xf6d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f6d7  test byte ptr gs:[ebp + 0x34c], 1
    X86_AT(c, 0xf6d7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu))) & 0x1u, 1);
    // 00f6df  sete al
    X86_AT(c, 0xf6dfu);
    s8(c, 0, x86_cc(c, 4) ? 1u : 0u);
    // 00f6e2  mov al, byte ptr gs:[ebp + eax*2 + 0x344]
    X86_AT(c, 0xf6e2u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 2 + 0x344u))));
    // 00f6ea  add al, byte ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf6eau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))), 0, 1)); }
    // 00f6f1  and ax, 1
    X86_AT(c, 0xf6f1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x1u, 2)); }
    // 00f6f5  xor ax, 1
    X86_AT(c, 0xf6f5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ 0x1u, 2)); }
    // 00f6f9  add ax, bx
    X86_AT(c, 0xf6f9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6fc  mov word ptr gs:[ebp + 0x38c], ax
    X86_AT(c, 0xf6fcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), (c.r[0] & 0xFFFFu));
    // 00f704  shl bx, 1
    X86_AT(c, 0xf704u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f707  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0xf707u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_f70f:
    X86_TICK(c, 7);
    // 00f70f  call 0x36e4
    X86_AT(c, 0xf70fu);
    push32(c, 0xf714u); f_000036e4(c); X86_RET(c, 0xf714u);
    X86_TICK(c, 14);
    // 00f714  test dl, 1
    X86_AT(c, 0xf714u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f717  setne byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf717u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)), x86_cc(c, 5) ? 1u : 0u);
    // 00f71f  call 0xf888
    X86_AT(c, 0xf71fu);
    push32(c, 0xf724u); f_0000f888(c); X86_RET(c, 0xf724u);
    X86_TICK(c, 12);
    // 00f724  test byte ptr gs:[ebp + 0x338], 8
    X86_AT(c, 0xf724u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x8u, 1);
    // 00f72c  je 0xf76a
    X86_AT(c, 0xf72cu);
    if (x86_cc(c, 4)) { goto L_f76a; }
    X86_TICK(c, 39);
    // 00f72e  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf72eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f735  sub word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf735u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f73d  mov ax, word ptr gs:[ebp + 0x38c]
    X86_AT(c, 0xf73du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu))));
    // 00f745  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf745u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f74d  shr eax, 0x10
    X86_AT(c, 0xf74du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f750  sub word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf750u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f758  call 0x36a0
    X86_AT(c, 0xf758u);
    push32(c, 0xf75du); f_000036a0(c); X86_RET(c, 0xf75du);
    X86_TICK(c, 14);
    // 00f75d  or byte ptr gs:[ebp + 0x379], 2
    X86_AT(c, 0xf75du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00f765  call 0xf888
    X86_AT(c, 0xf765u);
    push32(c, 0xf76au); f_0000f888(c); X86_RET(c, 0xf76au);
L_f76a:
    X86_TICK(c, 12);
    // 00f76a  test byte ptr gs:[ebp + 0x338], 4
    X86_AT(c, 0xf76au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x4u, 1);
    // 00f772  je 0xf798
    X86_AT(c, 0xf772u);
    if (x86_cc(c, 4)) { goto L_f798; }
    X86_TICK(c, 28);
    // 00f774  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf774u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f77b  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf77bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f783  shr eax, 0x10
    X86_AT(c, 0xf783u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f786  add word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf786u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f78e  call 0x36a0
    X86_AT(c, 0xf78eu);
    push32(c, 0xf793u); f_000036a0(c); X86_RET(c, 0xf793u);
    X86_TICK(c, 7);
    // 00f793  call 0xf888
    X86_AT(c, 0xf793u);
    push32(c, 0xf798u); f_0000f888(c); X86_RET(c, 0xf798u);
L_f798:
    X86_TICK(c, 12);
    // 00f798  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0xf798u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 00f7a0  jne 0xf7a7
    X86_AT(c, 0xf7a0u);
    if (x86_cc(c, 5)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f7a2  call 0xf7b0
    X86_AT(c, 0xf7a2u);
    push32(c, 0xf7a7u); f_0000f7b0(c); X86_RET(c, 0xf7a7u);
L_f7a7:
    X86_TICK(c, 15);
    // 00f7a7  pop dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf7a7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), v); }
    // 00f7ae  ret 
    X86_AT(c, 0xf7aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf6a4u, "ran off the end of a function");
}
void f_0000f6a7(X86Cpu& c) {
    X86_TICK(c, 60);
    // 00f6a7  shr ebx, 0x10
    X86_AT(c, 0xf6a7u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f6aa  add ax, bx
    X86_AT(c, 0xf6aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6ad  dec ax
    X86_AT(c, 0xf6adu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f6af  div bl
    X86_AT(c, 0xf6afu);
    x86_div(c, g8(c, 3), 1, 0xf6afu);
    // 00f6b1  sub ah, ah
    X86_AT(c, 0xf6b1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f6b3  mov word ptr gs:[ebp + 0x38a], ax
    X86_AT(c, 0xf6b3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au)), (c.r[0] & 0xFFFFu));
    // 00f6bb  mov word ptr gs:[ebp + 0x38c], 0
    X86_AT(c, 0xf6bbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), 0x0u);
    // 00f6c5  test dl, 2
    X86_AT(c, 0xf6c5u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f6c8  je 0xf70f
    X86_AT(c, 0xf6c8u);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 48);
    // 00f6ca  mov bx, word ptr gs:[ebp + 0x38a]
    X86_AT(c, 0xf6cau);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au))));
    // 00f6d2  shr bx, 1
    X86_AT(c, 0xf6d2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f6d5  sub eax, eax
    X86_AT(c, 0xf6d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f6d7  test byte ptr gs:[ebp + 0x34c], 1
    X86_AT(c, 0xf6d7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu))) & 0x1u, 1);
    // 00f6df  sete al
    X86_AT(c, 0xf6dfu);
    s8(c, 0, x86_cc(c, 4) ? 1u : 0u);
    // 00f6e2  mov al, byte ptr gs:[ebp + eax*2 + 0x344]
    X86_AT(c, 0xf6e2u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 2 + 0x344u))));
    // 00f6ea  add al, byte ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf6eau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))), 0, 1)); }
    // 00f6f1  and ax, 1
    X86_AT(c, 0xf6f1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x1u, 2)); }
    // 00f6f5  xor ax, 1
    X86_AT(c, 0xf6f5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ 0x1u, 2)); }
    // 00f6f9  add ax, bx
    X86_AT(c, 0xf6f9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6fc  mov word ptr gs:[ebp + 0x38c], ax
    X86_AT(c, 0xf6fcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), (c.r[0] & 0xFFFFu));
    // 00f704  shl bx, 1
    X86_AT(c, 0xf704u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f707  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0xf707u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_f70f:
    X86_TICK(c, 7);
    // 00f70f  call 0x36e4
    X86_AT(c, 0xf70fu);
    push32(c, 0xf714u); f_000036e4(c); X86_RET(c, 0xf714u);
    X86_TICK(c, 14);
    // 00f714  test dl, 1
    X86_AT(c, 0xf714u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f717  setne byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf717u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)), x86_cc(c, 5) ? 1u : 0u);
    // 00f71f  call 0xf888
    X86_AT(c, 0xf71fu);
    push32(c, 0xf724u); f_0000f888(c); X86_RET(c, 0xf724u);
    X86_TICK(c, 12);
    // 00f724  test byte ptr gs:[ebp + 0x338], 8
    X86_AT(c, 0xf724u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x8u, 1);
    // 00f72c  je 0xf76a
    X86_AT(c, 0xf72cu);
    if (x86_cc(c, 4)) { goto L_f76a; }
    X86_TICK(c, 39);
    // 00f72e  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf72eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f735  sub word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf735u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f73d  mov ax, word ptr gs:[ebp + 0x38c]
    X86_AT(c, 0xf73du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu))));
    // 00f745  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf745u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f74d  shr eax, 0x10
    X86_AT(c, 0xf74du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f750  sub word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf750u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f758  call 0x36a0
    X86_AT(c, 0xf758u);
    push32(c, 0xf75du); f_000036a0(c); X86_RET(c, 0xf75du);
    X86_TICK(c, 14);
    // 00f75d  or byte ptr gs:[ebp + 0x379], 2
    X86_AT(c, 0xf75du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00f765  call 0xf888
    X86_AT(c, 0xf765u);
    push32(c, 0xf76au); f_0000f888(c); X86_RET(c, 0xf76au);
L_f76a:
    X86_TICK(c, 12);
    // 00f76a  test byte ptr gs:[ebp + 0x338], 4
    X86_AT(c, 0xf76au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x4u, 1);
    // 00f772  je 0xf798
    X86_AT(c, 0xf772u);
    if (x86_cc(c, 4)) { goto L_f798; }
    X86_TICK(c, 28);
    // 00f774  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf774u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f77b  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf77bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f783  shr eax, 0x10
    X86_AT(c, 0xf783u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f786  add word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf786u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f78e  call 0x36a0
    X86_AT(c, 0xf78eu);
    push32(c, 0xf793u); f_000036a0(c); X86_RET(c, 0xf793u);
    X86_TICK(c, 7);
    // 00f793  call 0xf888
    X86_AT(c, 0xf793u);
    push32(c, 0xf798u); f_0000f888(c); X86_RET(c, 0xf798u);
L_f798:
    X86_TICK(c, 12);
    // 00f798  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0xf798u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 00f7a0  jne 0xf7a7
    X86_AT(c, 0xf7a0u);
    if (x86_cc(c, 5)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f7a2  call 0xf7b0
    X86_AT(c, 0xf7a2u);
    push32(c, 0xf7a7u); f_0000f7b0(c); X86_RET(c, 0xf7a7u);
L_f7a7:
    X86_TICK(c, 15);
    // 00f7a7  pop dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf7a7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), v); }
    // 00f7ae  ret 
    X86_AT(c, 0xf7aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf6a7u, "ran off the end of a function");
}
void f_0000f6aa(X86Cpu& c) {
    X86_TICK(c, 57);
    // 00f6aa  add ax, bx
    X86_AT(c, 0xf6aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6ad  dec ax
    X86_AT(c, 0xf6adu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f6af  div bl
    X86_AT(c, 0xf6afu);
    x86_div(c, g8(c, 3), 1, 0xf6afu);
    // 00f6b1  sub ah, ah
    X86_AT(c, 0xf6b1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f6b3  mov word ptr gs:[ebp + 0x38a], ax
    X86_AT(c, 0xf6b3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au)), (c.r[0] & 0xFFFFu));
    // 00f6bb  mov word ptr gs:[ebp + 0x38c], 0
    X86_AT(c, 0xf6bbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), 0x0u);
    // 00f6c5  test dl, 2
    X86_AT(c, 0xf6c5u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f6c8  je 0xf70f
    X86_AT(c, 0xf6c8u);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 48);
    // 00f6ca  mov bx, word ptr gs:[ebp + 0x38a]
    X86_AT(c, 0xf6cau);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au))));
    // 00f6d2  shr bx, 1
    X86_AT(c, 0xf6d2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f6d5  sub eax, eax
    X86_AT(c, 0xf6d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f6d7  test byte ptr gs:[ebp + 0x34c], 1
    X86_AT(c, 0xf6d7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu))) & 0x1u, 1);
    // 00f6df  sete al
    X86_AT(c, 0xf6dfu);
    s8(c, 0, x86_cc(c, 4) ? 1u : 0u);
    // 00f6e2  mov al, byte ptr gs:[ebp + eax*2 + 0x344]
    X86_AT(c, 0xf6e2u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 2 + 0x344u))));
    // 00f6ea  add al, byte ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf6eau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))), 0, 1)); }
    // 00f6f1  and ax, 1
    X86_AT(c, 0xf6f1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x1u, 2)); }
    // 00f6f5  xor ax, 1
    X86_AT(c, 0xf6f5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ 0x1u, 2)); }
    // 00f6f9  add ax, bx
    X86_AT(c, 0xf6f9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6fc  mov word ptr gs:[ebp + 0x38c], ax
    X86_AT(c, 0xf6fcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), (c.r[0] & 0xFFFFu));
    // 00f704  shl bx, 1
    X86_AT(c, 0xf704u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f707  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0xf707u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_f70f:
    X86_TICK(c, 7);
    // 00f70f  call 0x36e4
    X86_AT(c, 0xf70fu);
    push32(c, 0xf714u); f_000036e4(c); X86_RET(c, 0xf714u);
    X86_TICK(c, 14);
    // 00f714  test dl, 1
    X86_AT(c, 0xf714u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f717  setne byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf717u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)), x86_cc(c, 5) ? 1u : 0u);
    // 00f71f  call 0xf888
    X86_AT(c, 0xf71fu);
    push32(c, 0xf724u); f_0000f888(c); X86_RET(c, 0xf724u);
    X86_TICK(c, 12);
    // 00f724  test byte ptr gs:[ebp + 0x338], 8
    X86_AT(c, 0xf724u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x8u, 1);
    // 00f72c  je 0xf76a
    X86_AT(c, 0xf72cu);
    if (x86_cc(c, 4)) { goto L_f76a; }
    X86_TICK(c, 39);
    // 00f72e  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf72eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f735  sub word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf735u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f73d  mov ax, word ptr gs:[ebp + 0x38c]
    X86_AT(c, 0xf73du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu))));
    // 00f745  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf745u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f74d  shr eax, 0x10
    X86_AT(c, 0xf74du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f750  sub word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf750u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f758  call 0x36a0
    X86_AT(c, 0xf758u);
    push32(c, 0xf75du); f_000036a0(c); X86_RET(c, 0xf75du);
    X86_TICK(c, 14);
    // 00f75d  or byte ptr gs:[ebp + 0x379], 2
    X86_AT(c, 0xf75du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00f765  call 0xf888
    X86_AT(c, 0xf765u);
    push32(c, 0xf76au); f_0000f888(c); X86_RET(c, 0xf76au);
L_f76a:
    X86_TICK(c, 12);
    // 00f76a  test byte ptr gs:[ebp + 0x338], 4
    X86_AT(c, 0xf76au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x4u, 1);
    // 00f772  je 0xf798
    X86_AT(c, 0xf772u);
    if (x86_cc(c, 4)) { goto L_f798; }
    X86_TICK(c, 28);
    // 00f774  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf774u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f77b  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf77bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f783  shr eax, 0x10
    X86_AT(c, 0xf783u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f786  add word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf786u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f78e  call 0x36a0
    X86_AT(c, 0xf78eu);
    push32(c, 0xf793u); f_000036a0(c); X86_RET(c, 0xf793u);
    X86_TICK(c, 7);
    // 00f793  call 0xf888
    X86_AT(c, 0xf793u);
    push32(c, 0xf798u); f_0000f888(c); X86_RET(c, 0xf798u);
L_f798:
    X86_TICK(c, 12);
    // 00f798  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0xf798u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 00f7a0  jne 0xf7a7
    X86_AT(c, 0xf7a0u);
    if (x86_cc(c, 5)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f7a2  call 0xf7b0
    X86_AT(c, 0xf7a2u);
    push32(c, 0xf7a7u); f_0000f7b0(c); X86_RET(c, 0xf7a7u);
L_f7a7:
    X86_TICK(c, 15);
    // 00f7a7  pop dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf7a7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), v); }
    // 00f7ae  ret 
    X86_AT(c, 0xf7aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf6aau, "ran off the end of a function");
}
void f_0000f6ad(X86Cpu& c) {
    X86_TICK(c, 55);
    // 00f6ad  dec ax
    X86_AT(c, 0xf6adu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f6af  div bl
    X86_AT(c, 0xf6afu);
    x86_div(c, g8(c, 3), 1, 0xf6afu);
    // 00f6b1  sub ah, ah
    X86_AT(c, 0xf6b1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f6b3  mov word ptr gs:[ebp + 0x38a], ax
    X86_AT(c, 0xf6b3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au)), (c.r[0] & 0xFFFFu));
    // 00f6bb  mov word ptr gs:[ebp + 0x38c], 0
    X86_AT(c, 0xf6bbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), 0x0u);
    // 00f6c5  test dl, 2
    X86_AT(c, 0xf6c5u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f6c8  je 0xf70f
    X86_AT(c, 0xf6c8u);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 48);
    // 00f6ca  mov bx, word ptr gs:[ebp + 0x38a]
    X86_AT(c, 0xf6cau);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au))));
    // 00f6d2  shr bx, 1
    X86_AT(c, 0xf6d2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f6d5  sub eax, eax
    X86_AT(c, 0xf6d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f6d7  test byte ptr gs:[ebp + 0x34c], 1
    X86_AT(c, 0xf6d7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu))) & 0x1u, 1);
    // 00f6df  sete al
    X86_AT(c, 0xf6dfu);
    s8(c, 0, x86_cc(c, 4) ? 1u : 0u);
    // 00f6e2  mov al, byte ptr gs:[ebp + eax*2 + 0x344]
    X86_AT(c, 0xf6e2u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 2 + 0x344u))));
    // 00f6ea  add al, byte ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf6eau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))), 0, 1)); }
    // 00f6f1  and ax, 1
    X86_AT(c, 0xf6f1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x1u, 2)); }
    // 00f6f5  xor ax, 1
    X86_AT(c, 0xf6f5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ 0x1u, 2)); }
    // 00f6f9  add ax, bx
    X86_AT(c, 0xf6f9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6fc  mov word ptr gs:[ebp + 0x38c], ax
    X86_AT(c, 0xf6fcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), (c.r[0] & 0xFFFFu));
    // 00f704  shl bx, 1
    X86_AT(c, 0xf704u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f707  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0xf707u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_f70f:
    X86_TICK(c, 7);
    // 00f70f  call 0x36e4
    X86_AT(c, 0xf70fu);
    push32(c, 0xf714u); f_000036e4(c); X86_RET(c, 0xf714u);
    X86_TICK(c, 14);
    // 00f714  test dl, 1
    X86_AT(c, 0xf714u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f717  setne byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf717u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)), x86_cc(c, 5) ? 1u : 0u);
    // 00f71f  call 0xf888
    X86_AT(c, 0xf71fu);
    push32(c, 0xf724u); f_0000f888(c); X86_RET(c, 0xf724u);
    X86_TICK(c, 12);
    // 00f724  test byte ptr gs:[ebp + 0x338], 8
    X86_AT(c, 0xf724u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x8u, 1);
    // 00f72c  je 0xf76a
    X86_AT(c, 0xf72cu);
    if (x86_cc(c, 4)) { goto L_f76a; }
    X86_TICK(c, 39);
    // 00f72e  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf72eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f735  sub word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf735u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f73d  mov ax, word ptr gs:[ebp + 0x38c]
    X86_AT(c, 0xf73du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu))));
    // 00f745  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf745u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f74d  shr eax, 0x10
    X86_AT(c, 0xf74du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f750  sub word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf750u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f758  call 0x36a0
    X86_AT(c, 0xf758u);
    push32(c, 0xf75du); f_000036a0(c); X86_RET(c, 0xf75du);
    X86_TICK(c, 14);
    // 00f75d  or byte ptr gs:[ebp + 0x379], 2
    X86_AT(c, 0xf75du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00f765  call 0xf888
    X86_AT(c, 0xf765u);
    push32(c, 0xf76au); f_0000f888(c); X86_RET(c, 0xf76au);
L_f76a:
    X86_TICK(c, 12);
    // 00f76a  test byte ptr gs:[ebp + 0x338], 4
    X86_AT(c, 0xf76au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x4u, 1);
    // 00f772  je 0xf798
    X86_AT(c, 0xf772u);
    if (x86_cc(c, 4)) { goto L_f798; }
    X86_TICK(c, 28);
    // 00f774  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf774u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f77b  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf77bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f783  shr eax, 0x10
    X86_AT(c, 0xf783u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f786  add word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf786u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f78e  call 0x36a0
    X86_AT(c, 0xf78eu);
    push32(c, 0xf793u); f_000036a0(c); X86_RET(c, 0xf793u);
    X86_TICK(c, 7);
    // 00f793  call 0xf888
    X86_AT(c, 0xf793u);
    push32(c, 0xf798u); f_0000f888(c); X86_RET(c, 0xf798u);
L_f798:
    X86_TICK(c, 12);
    // 00f798  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0xf798u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 00f7a0  jne 0xf7a7
    X86_AT(c, 0xf7a0u);
    if (x86_cc(c, 5)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f7a2  call 0xf7b0
    X86_AT(c, 0xf7a2u);
    push32(c, 0xf7a7u); f_0000f7b0(c); X86_RET(c, 0xf7a7u);
L_f7a7:
    X86_TICK(c, 15);
    // 00f7a7  pop dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf7a7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), v); }
    // 00f7ae  ret 
    X86_AT(c, 0xf7aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf6adu, "ran off the end of a function");
}
void f_0000f6af(X86Cpu& c) {
    X86_TICK(c, 53);
    // 00f6af  div bl
    X86_AT(c, 0xf6afu);
    x86_div(c, g8(c, 3), 1, 0xf6afu);
    // 00f6b1  sub ah, ah
    X86_AT(c, 0xf6b1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f6b3  mov word ptr gs:[ebp + 0x38a], ax
    X86_AT(c, 0xf6b3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au)), (c.r[0] & 0xFFFFu));
    // 00f6bb  mov word ptr gs:[ebp + 0x38c], 0
    X86_AT(c, 0xf6bbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), 0x0u);
    // 00f6c5  test dl, 2
    X86_AT(c, 0xf6c5u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f6c8  je 0xf70f
    X86_AT(c, 0xf6c8u);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 48);
    // 00f6ca  mov bx, word ptr gs:[ebp + 0x38a]
    X86_AT(c, 0xf6cau);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au))));
    // 00f6d2  shr bx, 1
    X86_AT(c, 0xf6d2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f6d5  sub eax, eax
    X86_AT(c, 0xf6d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f6d7  test byte ptr gs:[ebp + 0x34c], 1
    X86_AT(c, 0xf6d7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu))) & 0x1u, 1);
    // 00f6df  sete al
    X86_AT(c, 0xf6dfu);
    s8(c, 0, x86_cc(c, 4) ? 1u : 0u);
    // 00f6e2  mov al, byte ptr gs:[ebp + eax*2 + 0x344]
    X86_AT(c, 0xf6e2u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 2 + 0x344u))));
    // 00f6ea  add al, byte ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf6eau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))), 0, 1)); }
    // 00f6f1  and ax, 1
    X86_AT(c, 0xf6f1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x1u, 2)); }
    // 00f6f5  xor ax, 1
    X86_AT(c, 0xf6f5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ 0x1u, 2)); }
    // 00f6f9  add ax, bx
    X86_AT(c, 0xf6f9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6fc  mov word ptr gs:[ebp + 0x38c], ax
    X86_AT(c, 0xf6fcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), (c.r[0] & 0xFFFFu));
    // 00f704  shl bx, 1
    X86_AT(c, 0xf704u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f707  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0xf707u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_f70f:
    X86_TICK(c, 7);
    // 00f70f  call 0x36e4
    X86_AT(c, 0xf70fu);
    push32(c, 0xf714u); f_000036e4(c); X86_RET(c, 0xf714u);
    X86_TICK(c, 14);
    // 00f714  test dl, 1
    X86_AT(c, 0xf714u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f717  setne byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf717u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)), x86_cc(c, 5) ? 1u : 0u);
    // 00f71f  call 0xf888
    X86_AT(c, 0xf71fu);
    push32(c, 0xf724u); f_0000f888(c); X86_RET(c, 0xf724u);
    X86_TICK(c, 12);
    // 00f724  test byte ptr gs:[ebp + 0x338], 8
    X86_AT(c, 0xf724u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x8u, 1);
    // 00f72c  je 0xf76a
    X86_AT(c, 0xf72cu);
    if (x86_cc(c, 4)) { goto L_f76a; }
    X86_TICK(c, 39);
    // 00f72e  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf72eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f735  sub word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf735u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f73d  mov ax, word ptr gs:[ebp + 0x38c]
    X86_AT(c, 0xf73du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu))));
    // 00f745  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf745u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f74d  shr eax, 0x10
    X86_AT(c, 0xf74du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f750  sub word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf750u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f758  call 0x36a0
    X86_AT(c, 0xf758u);
    push32(c, 0xf75du); f_000036a0(c); X86_RET(c, 0xf75du);
    X86_TICK(c, 14);
    // 00f75d  or byte ptr gs:[ebp + 0x379], 2
    X86_AT(c, 0xf75du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00f765  call 0xf888
    X86_AT(c, 0xf765u);
    push32(c, 0xf76au); f_0000f888(c); X86_RET(c, 0xf76au);
L_f76a:
    X86_TICK(c, 12);
    // 00f76a  test byte ptr gs:[ebp + 0x338], 4
    X86_AT(c, 0xf76au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x4u, 1);
    // 00f772  je 0xf798
    X86_AT(c, 0xf772u);
    if (x86_cc(c, 4)) { goto L_f798; }
    X86_TICK(c, 28);
    // 00f774  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf774u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f77b  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf77bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f783  shr eax, 0x10
    X86_AT(c, 0xf783u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f786  add word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf786u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f78e  call 0x36a0
    X86_AT(c, 0xf78eu);
    push32(c, 0xf793u); f_000036a0(c); X86_RET(c, 0xf793u);
    X86_TICK(c, 7);
    // 00f793  call 0xf888
    X86_AT(c, 0xf793u);
    push32(c, 0xf798u); f_0000f888(c); X86_RET(c, 0xf798u);
L_f798:
    X86_TICK(c, 12);
    // 00f798  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0xf798u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 00f7a0  jne 0xf7a7
    X86_AT(c, 0xf7a0u);
    if (x86_cc(c, 5)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f7a2  call 0xf7b0
    X86_AT(c, 0xf7a2u);
    push32(c, 0xf7a7u); f_0000f7b0(c); X86_RET(c, 0xf7a7u);
L_f7a7:
    X86_TICK(c, 15);
    // 00f7a7  pop dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf7a7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), v); }
    // 00f7ae  ret 
    X86_AT(c, 0xf7aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf6afu, "ran off the end of a function");
}
void f_0000f6b1(X86Cpu& c) {
    X86_TICK(c, 13);
    // 00f6b1  sub ah, ah
    X86_AT(c, 0xf6b1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f6b3  mov word ptr gs:[ebp + 0x38a], ax
    X86_AT(c, 0xf6b3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au)), (c.r[0] & 0xFFFFu));
    // 00f6bb  mov word ptr gs:[ebp + 0x38c], 0
    X86_AT(c, 0xf6bbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), 0x0u);
    // 00f6c5  test dl, 2
    X86_AT(c, 0xf6c5u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f6c8  je 0xf70f
    X86_AT(c, 0xf6c8u);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 48);
    // 00f6ca  mov bx, word ptr gs:[ebp + 0x38a]
    X86_AT(c, 0xf6cau);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au))));
    // 00f6d2  shr bx, 1
    X86_AT(c, 0xf6d2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f6d5  sub eax, eax
    X86_AT(c, 0xf6d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f6d7  test byte ptr gs:[ebp + 0x34c], 1
    X86_AT(c, 0xf6d7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu))) & 0x1u, 1);
    // 00f6df  sete al
    X86_AT(c, 0xf6dfu);
    s8(c, 0, x86_cc(c, 4) ? 1u : 0u);
    // 00f6e2  mov al, byte ptr gs:[ebp + eax*2 + 0x344]
    X86_AT(c, 0xf6e2u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 2 + 0x344u))));
    // 00f6ea  add al, byte ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf6eau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))), 0, 1)); }
    // 00f6f1  and ax, 1
    X86_AT(c, 0xf6f1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x1u, 2)); }
    // 00f6f5  xor ax, 1
    X86_AT(c, 0xf6f5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ 0x1u, 2)); }
    // 00f6f9  add ax, bx
    X86_AT(c, 0xf6f9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6fc  mov word ptr gs:[ebp + 0x38c], ax
    X86_AT(c, 0xf6fcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), (c.r[0] & 0xFFFFu));
    // 00f704  shl bx, 1
    X86_AT(c, 0xf704u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f707  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0xf707u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_f70f:
    X86_TICK(c, 7);
    // 00f70f  call 0x36e4
    X86_AT(c, 0xf70fu);
    push32(c, 0xf714u); f_000036e4(c); X86_RET(c, 0xf714u);
    X86_TICK(c, 14);
    // 00f714  test dl, 1
    X86_AT(c, 0xf714u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f717  setne byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf717u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)), x86_cc(c, 5) ? 1u : 0u);
    // 00f71f  call 0xf888
    X86_AT(c, 0xf71fu);
    push32(c, 0xf724u); f_0000f888(c); X86_RET(c, 0xf724u);
    X86_TICK(c, 12);
    // 00f724  test byte ptr gs:[ebp + 0x338], 8
    X86_AT(c, 0xf724u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x8u, 1);
    // 00f72c  je 0xf76a
    X86_AT(c, 0xf72cu);
    if (x86_cc(c, 4)) { goto L_f76a; }
    X86_TICK(c, 39);
    // 00f72e  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf72eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f735  sub word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf735u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f73d  mov ax, word ptr gs:[ebp + 0x38c]
    X86_AT(c, 0xf73du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu))));
    // 00f745  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf745u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f74d  shr eax, 0x10
    X86_AT(c, 0xf74du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f750  sub word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf750u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f758  call 0x36a0
    X86_AT(c, 0xf758u);
    push32(c, 0xf75du); f_000036a0(c); X86_RET(c, 0xf75du);
    X86_TICK(c, 14);
    // 00f75d  or byte ptr gs:[ebp + 0x379], 2
    X86_AT(c, 0xf75du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00f765  call 0xf888
    X86_AT(c, 0xf765u);
    push32(c, 0xf76au); f_0000f888(c); X86_RET(c, 0xf76au);
L_f76a:
    X86_TICK(c, 12);
    // 00f76a  test byte ptr gs:[ebp + 0x338], 4
    X86_AT(c, 0xf76au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x4u, 1);
    // 00f772  je 0xf798
    X86_AT(c, 0xf772u);
    if (x86_cc(c, 4)) { goto L_f798; }
    X86_TICK(c, 28);
    // 00f774  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf774u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f77b  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf77bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f783  shr eax, 0x10
    X86_AT(c, 0xf783u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f786  add word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf786u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f78e  call 0x36a0
    X86_AT(c, 0xf78eu);
    push32(c, 0xf793u); f_000036a0(c); X86_RET(c, 0xf793u);
    X86_TICK(c, 7);
    // 00f793  call 0xf888
    X86_AT(c, 0xf793u);
    push32(c, 0xf798u); f_0000f888(c); X86_RET(c, 0xf798u);
L_f798:
    X86_TICK(c, 12);
    // 00f798  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0xf798u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 00f7a0  jne 0xf7a7
    X86_AT(c, 0xf7a0u);
    if (x86_cc(c, 5)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f7a2  call 0xf7b0
    X86_AT(c, 0xf7a2u);
    push32(c, 0xf7a7u); f_0000f7b0(c); X86_RET(c, 0xf7a7u);
L_f7a7:
    X86_TICK(c, 15);
    // 00f7a7  pop dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf7a7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), v); }
    // 00f7ae  ret 
    X86_AT(c, 0xf7aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf6b1u, "ran off the end of a function");
}
void f_0000f6b3(X86Cpu& c) {
    X86_TICK(c, 11);
    // 00f6b3  mov word ptr gs:[ebp + 0x38a], ax
    X86_AT(c, 0xf6b3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au)), (c.r[0] & 0xFFFFu));
    // 00f6bb  mov word ptr gs:[ebp + 0x38c], 0
    X86_AT(c, 0xf6bbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), 0x0u);
    // 00f6c5  test dl, 2
    X86_AT(c, 0xf6c5u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f6c8  je 0xf70f
    X86_AT(c, 0xf6c8u);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 48);
    // 00f6ca  mov bx, word ptr gs:[ebp + 0x38a]
    X86_AT(c, 0xf6cau);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au))));
    // 00f6d2  shr bx, 1
    X86_AT(c, 0xf6d2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f6d5  sub eax, eax
    X86_AT(c, 0xf6d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f6d7  test byte ptr gs:[ebp + 0x34c], 1
    X86_AT(c, 0xf6d7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu))) & 0x1u, 1);
    // 00f6df  sete al
    X86_AT(c, 0xf6dfu);
    s8(c, 0, x86_cc(c, 4) ? 1u : 0u);
    // 00f6e2  mov al, byte ptr gs:[ebp + eax*2 + 0x344]
    X86_AT(c, 0xf6e2u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 2 + 0x344u))));
    // 00f6ea  add al, byte ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf6eau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))), 0, 1)); }
    // 00f6f1  and ax, 1
    X86_AT(c, 0xf6f1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x1u, 2)); }
    // 00f6f5  xor ax, 1
    X86_AT(c, 0xf6f5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ 0x1u, 2)); }
    // 00f6f9  add ax, bx
    X86_AT(c, 0xf6f9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6fc  mov word ptr gs:[ebp + 0x38c], ax
    X86_AT(c, 0xf6fcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), (c.r[0] & 0xFFFFu));
    // 00f704  shl bx, 1
    X86_AT(c, 0xf704u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f707  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0xf707u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_f70f:
    X86_TICK(c, 7);
    // 00f70f  call 0x36e4
    X86_AT(c, 0xf70fu);
    push32(c, 0xf714u); f_000036e4(c); X86_RET(c, 0xf714u);
    X86_TICK(c, 14);
    // 00f714  test dl, 1
    X86_AT(c, 0xf714u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f717  setne byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf717u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)), x86_cc(c, 5) ? 1u : 0u);
    // 00f71f  call 0xf888
    X86_AT(c, 0xf71fu);
    push32(c, 0xf724u); f_0000f888(c); X86_RET(c, 0xf724u);
    X86_TICK(c, 12);
    // 00f724  test byte ptr gs:[ebp + 0x338], 8
    X86_AT(c, 0xf724u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x8u, 1);
    // 00f72c  je 0xf76a
    X86_AT(c, 0xf72cu);
    if (x86_cc(c, 4)) { goto L_f76a; }
    X86_TICK(c, 39);
    // 00f72e  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf72eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f735  sub word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf735u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f73d  mov ax, word ptr gs:[ebp + 0x38c]
    X86_AT(c, 0xf73du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu))));
    // 00f745  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf745u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f74d  shr eax, 0x10
    X86_AT(c, 0xf74du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f750  sub word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf750u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f758  call 0x36a0
    X86_AT(c, 0xf758u);
    push32(c, 0xf75du); f_000036a0(c); X86_RET(c, 0xf75du);
    X86_TICK(c, 14);
    // 00f75d  or byte ptr gs:[ebp + 0x379], 2
    X86_AT(c, 0xf75du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00f765  call 0xf888
    X86_AT(c, 0xf765u);
    push32(c, 0xf76au); f_0000f888(c); X86_RET(c, 0xf76au);
L_f76a:
    X86_TICK(c, 12);
    // 00f76a  test byte ptr gs:[ebp + 0x338], 4
    X86_AT(c, 0xf76au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x4u, 1);
    // 00f772  je 0xf798
    X86_AT(c, 0xf772u);
    if (x86_cc(c, 4)) { goto L_f798; }
    X86_TICK(c, 28);
    // 00f774  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf774u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f77b  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf77bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f783  shr eax, 0x10
    X86_AT(c, 0xf783u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f786  add word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf786u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f78e  call 0x36a0
    X86_AT(c, 0xf78eu);
    push32(c, 0xf793u); f_000036a0(c); X86_RET(c, 0xf793u);
    X86_TICK(c, 7);
    // 00f793  call 0xf888
    X86_AT(c, 0xf793u);
    push32(c, 0xf798u); f_0000f888(c); X86_RET(c, 0xf798u);
L_f798:
    X86_TICK(c, 12);
    // 00f798  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0xf798u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 00f7a0  jne 0xf7a7
    X86_AT(c, 0xf7a0u);
    if (x86_cc(c, 5)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f7a2  call 0xf7b0
    X86_AT(c, 0xf7a2u);
    push32(c, 0xf7a7u); f_0000f7b0(c); X86_RET(c, 0xf7a7u);
L_f7a7:
    X86_TICK(c, 15);
    // 00f7a7  pop dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf7a7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), v); }
    // 00f7ae  ret 
    X86_AT(c, 0xf7aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf6b3u, "ran off the end of a function");
}
void f_0000f6bb(X86Cpu& c) {
    X86_TICK(c, 9);
    // 00f6bb  mov word ptr gs:[ebp + 0x38c], 0
    X86_AT(c, 0xf6bbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), 0x0u);
    // 00f6c5  test dl, 2
    X86_AT(c, 0xf6c5u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f6c8  je 0xf70f
    X86_AT(c, 0xf6c8u);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 48);
    // 00f6ca  mov bx, word ptr gs:[ebp + 0x38a]
    X86_AT(c, 0xf6cau);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au))));
    // 00f6d2  shr bx, 1
    X86_AT(c, 0xf6d2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f6d5  sub eax, eax
    X86_AT(c, 0xf6d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f6d7  test byte ptr gs:[ebp + 0x34c], 1
    X86_AT(c, 0xf6d7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu))) & 0x1u, 1);
    // 00f6df  sete al
    X86_AT(c, 0xf6dfu);
    s8(c, 0, x86_cc(c, 4) ? 1u : 0u);
    // 00f6e2  mov al, byte ptr gs:[ebp + eax*2 + 0x344]
    X86_AT(c, 0xf6e2u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 2 + 0x344u))));
    // 00f6ea  add al, byte ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf6eau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))), 0, 1)); }
    // 00f6f1  and ax, 1
    X86_AT(c, 0xf6f1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x1u, 2)); }
    // 00f6f5  xor ax, 1
    X86_AT(c, 0xf6f5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ 0x1u, 2)); }
    // 00f6f9  add ax, bx
    X86_AT(c, 0xf6f9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6fc  mov word ptr gs:[ebp + 0x38c], ax
    X86_AT(c, 0xf6fcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), (c.r[0] & 0xFFFFu));
    // 00f704  shl bx, 1
    X86_AT(c, 0xf704u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f707  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0xf707u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_f70f:
    X86_TICK(c, 7);
    // 00f70f  call 0x36e4
    X86_AT(c, 0xf70fu);
    push32(c, 0xf714u); f_000036e4(c); X86_RET(c, 0xf714u);
    X86_TICK(c, 14);
    // 00f714  test dl, 1
    X86_AT(c, 0xf714u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f717  setne byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf717u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)), x86_cc(c, 5) ? 1u : 0u);
    // 00f71f  call 0xf888
    X86_AT(c, 0xf71fu);
    push32(c, 0xf724u); f_0000f888(c); X86_RET(c, 0xf724u);
    X86_TICK(c, 12);
    // 00f724  test byte ptr gs:[ebp + 0x338], 8
    X86_AT(c, 0xf724u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x8u, 1);
    // 00f72c  je 0xf76a
    X86_AT(c, 0xf72cu);
    if (x86_cc(c, 4)) { goto L_f76a; }
    X86_TICK(c, 39);
    // 00f72e  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf72eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f735  sub word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf735u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f73d  mov ax, word ptr gs:[ebp + 0x38c]
    X86_AT(c, 0xf73du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu))));
    // 00f745  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf745u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f74d  shr eax, 0x10
    X86_AT(c, 0xf74du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f750  sub word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf750u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f758  call 0x36a0
    X86_AT(c, 0xf758u);
    push32(c, 0xf75du); f_000036a0(c); X86_RET(c, 0xf75du);
    X86_TICK(c, 14);
    // 00f75d  or byte ptr gs:[ebp + 0x379], 2
    X86_AT(c, 0xf75du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00f765  call 0xf888
    X86_AT(c, 0xf765u);
    push32(c, 0xf76au); f_0000f888(c); X86_RET(c, 0xf76au);
L_f76a:
    X86_TICK(c, 12);
    // 00f76a  test byte ptr gs:[ebp + 0x338], 4
    X86_AT(c, 0xf76au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x4u, 1);
    // 00f772  je 0xf798
    X86_AT(c, 0xf772u);
    if (x86_cc(c, 4)) { goto L_f798; }
    X86_TICK(c, 28);
    // 00f774  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf774u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f77b  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf77bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f783  shr eax, 0x10
    X86_AT(c, 0xf783u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f786  add word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf786u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f78e  call 0x36a0
    X86_AT(c, 0xf78eu);
    push32(c, 0xf793u); f_000036a0(c); X86_RET(c, 0xf793u);
    X86_TICK(c, 7);
    // 00f793  call 0xf888
    X86_AT(c, 0xf793u);
    push32(c, 0xf798u); f_0000f888(c); X86_RET(c, 0xf798u);
L_f798:
    X86_TICK(c, 12);
    // 00f798  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0xf798u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 00f7a0  jne 0xf7a7
    X86_AT(c, 0xf7a0u);
    if (x86_cc(c, 5)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f7a2  call 0xf7b0
    X86_AT(c, 0xf7a2u);
    push32(c, 0xf7a7u); f_0000f7b0(c); X86_RET(c, 0xf7a7u);
L_f7a7:
    X86_TICK(c, 15);
    // 00f7a7  pop dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf7a7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), v); }
    // 00f7ae  ret 
    X86_AT(c, 0xf7aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf6bbu, "ran off the end of a function");
}
void f_0000f6c5(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00f6c5  test dl, 2
    X86_AT(c, 0xf6c5u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f6c8  je 0xf70f
    X86_AT(c, 0xf6c8u);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 48);
    // 00f6ca  mov bx, word ptr gs:[ebp + 0x38a]
    X86_AT(c, 0xf6cau);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au))));
    // 00f6d2  shr bx, 1
    X86_AT(c, 0xf6d2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f6d5  sub eax, eax
    X86_AT(c, 0xf6d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f6d7  test byte ptr gs:[ebp + 0x34c], 1
    X86_AT(c, 0xf6d7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu))) & 0x1u, 1);
    // 00f6df  sete al
    X86_AT(c, 0xf6dfu);
    s8(c, 0, x86_cc(c, 4) ? 1u : 0u);
    // 00f6e2  mov al, byte ptr gs:[ebp + eax*2 + 0x344]
    X86_AT(c, 0xf6e2u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 2 + 0x344u))));
    // 00f6ea  add al, byte ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf6eau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))), 0, 1)); }
    // 00f6f1  and ax, 1
    X86_AT(c, 0xf6f1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x1u, 2)); }
    // 00f6f5  xor ax, 1
    X86_AT(c, 0xf6f5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ 0x1u, 2)); }
    // 00f6f9  add ax, bx
    X86_AT(c, 0xf6f9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6fc  mov word ptr gs:[ebp + 0x38c], ax
    X86_AT(c, 0xf6fcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), (c.r[0] & 0xFFFFu));
    // 00f704  shl bx, 1
    X86_AT(c, 0xf704u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f707  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0xf707u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_f70f:
    X86_TICK(c, 7);
    // 00f70f  call 0x36e4
    X86_AT(c, 0xf70fu);
    push32(c, 0xf714u); f_000036e4(c); X86_RET(c, 0xf714u);
    X86_TICK(c, 14);
    // 00f714  test dl, 1
    X86_AT(c, 0xf714u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f717  setne byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf717u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)), x86_cc(c, 5) ? 1u : 0u);
    // 00f71f  call 0xf888
    X86_AT(c, 0xf71fu);
    push32(c, 0xf724u); f_0000f888(c); X86_RET(c, 0xf724u);
    X86_TICK(c, 12);
    // 00f724  test byte ptr gs:[ebp + 0x338], 8
    X86_AT(c, 0xf724u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x8u, 1);
    // 00f72c  je 0xf76a
    X86_AT(c, 0xf72cu);
    if (x86_cc(c, 4)) { goto L_f76a; }
    X86_TICK(c, 39);
    // 00f72e  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf72eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f735  sub word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf735u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f73d  mov ax, word ptr gs:[ebp + 0x38c]
    X86_AT(c, 0xf73du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu))));
    // 00f745  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf745u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f74d  shr eax, 0x10
    X86_AT(c, 0xf74du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f750  sub word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf750u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f758  call 0x36a0
    X86_AT(c, 0xf758u);
    push32(c, 0xf75du); f_000036a0(c); X86_RET(c, 0xf75du);
    X86_TICK(c, 14);
    // 00f75d  or byte ptr gs:[ebp + 0x379], 2
    X86_AT(c, 0xf75du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00f765  call 0xf888
    X86_AT(c, 0xf765u);
    push32(c, 0xf76au); f_0000f888(c); X86_RET(c, 0xf76au);
L_f76a:
    X86_TICK(c, 12);
    // 00f76a  test byte ptr gs:[ebp + 0x338], 4
    X86_AT(c, 0xf76au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x4u, 1);
    // 00f772  je 0xf798
    X86_AT(c, 0xf772u);
    if (x86_cc(c, 4)) { goto L_f798; }
    X86_TICK(c, 28);
    // 00f774  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf774u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f77b  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf77bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f783  shr eax, 0x10
    X86_AT(c, 0xf783u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f786  add word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf786u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f78e  call 0x36a0
    X86_AT(c, 0xf78eu);
    push32(c, 0xf793u); f_000036a0(c); X86_RET(c, 0xf793u);
    X86_TICK(c, 7);
    // 00f793  call 0xf888
    X86_AT(c, 0xf793u);
    push32(c, 0xf798u); f_0000f888(c); X86_RET(c, 0xf798u);
L_f798:
    X86_TICK(c, 12);
    // 00f798  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0xf798u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 00f7a0  jne 0xf7a7
    X86_AT(c, 0xf7a0u);
    if (x86_cc(c, 5)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f7a2  call 0xf7b0
    X86_AT(c, 0xf7a2u);
    push32(c, 0xf7a7u); f_0000f7b0(c); X86_RET(c, 0xf7a7u);
L_f7a7:
    X86_TICK(c, 15);
    // 00f7a7  pop dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf7a7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), v); }
    // 00f7ae  ret 
    X86_AT(c, 0xf7aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf6c5u, "ran off the end of a function");
}
void f_0000f6c8(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00f6c8  je 0xf70f
    X86_AT(c, 0xf6c8u);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 48);
    // 00f6ca  mov bx, word ptr gs:[ebp + 0x38a]
    X86_AT(c, 0xf6cau);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au))));
    // 00f6d2  shr bx, 1
    X86_AT(c, 0xf6d2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f6d5  sub eax, eax
    X86_AT(c, 0xf6d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f6d7  test byte ptr gs:[ebp + 0x34c], 1
    X86_AT(c, 0xf6d7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu))) & 0x1u, 1);
    // 00f6df  sete al
    X86_AT(c, 0xf6dfu);
    s8(c, 0, x86_cc(c, 4) ? 1u : 0u);
    // 00f6e2  mov al, byte ptr gs:[ebp + eax*2 + 0x344]
    X86_AT(c, 0xf6e2u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 2 + 0x344u))));
    // 00f6ea  add al, byte ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf6eau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))), 0, 1)); }
    // 00f6f1  and ax, 1
    X86_AT(c, 0xf6f1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x1u, 2)); }
    // 00f6f5  xor ax, 1
    X86_AT(c, 0xf6f5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ 0x1u, 2)); }
    // 00f6f9  add ax, bx
    X86_AT(c, 0xf6f9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6fc  mov word ptr gs:[ebp + 0x38c], ax
    X86_AT(c, 0xf6fcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), (c.r[0] & 0xFFFFu));
    // 00f704  shl bx, 1
    X86_AT(c, 0xf704u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f707  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0xf707u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_f70f:
    X86_TICK(c, 7);
    // 00f70f  call 0x36e4
    X86_AT(c, 0xf70fu);
    push32(c, 0xf714u); f_000036e4(c); X86_RET(c, 0xf714u);
    X86_TICK(c, 14);
    // 00f714  test dl, 1
    X86_AT(c, 0xf714u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f717  setne byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf717u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)), x86_cc(c, 5) ? 1u : 0u);
    // 00f71f  call 0xf888
    X86_AT(c, 0xf71fu);
    push32(c, 0xf724u); f_0000f888(c); X86_RET(c, 0xf724u);
    X86_TICK(c, 12);
    // 00f724  test byte ptr gs:[ebp + 0x338], 8
    X86_AT(c, 0xf724u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x8u, 1);
    // 00f72c  je 0xf76a
    X86_AT(c, 0xf72cu);
    if (x86_cc(c, 4)) { goto L_f76a; }
    X86_TICK(c, 39);
    // 00f72e  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf72eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f735  sub word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf735u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f73d  mov ax, word ptr gs:[ebp + 0x38c]
    X86_AT(c, 0xf73du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu))));
    // 00f745  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf745u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f74d  shr eax, 0x10
    X86_AT(c, 0xf74du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f750  sub word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf750u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f758  call 0x36a0
    X86_AT(c, 0xf758u);
    push32(c, 0xf75du); f_000036a0(c); X86_RET(c, 0xf75du);
    X86_TICK(c, 14);
    // 00f75d  or byte ptr gs:[ebp + 0x379], 2
    X86_AT(c, 0xf75du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00f765  call 0xf888
    X86_AT(c, 0xf765u);
    push32(c, 0xf76au); f_0000f888(c); X86_RET(c, 0xf76au);
L_f76a:
    X86_TICK(c, 12);
    // 00f76a  test byte ptr gs:[ebp + 0x338], 4
    X86_AT(c, 0xf76au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x4u, 1);
    // 00f772  je 0xf798
    X86_AT(c, 0xf772u);
    if (x86_cc(c, 4)) { goto L_f798; }
    X86_TICK(c, 28);
    // 00f774  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf774u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f77b  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf77bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f783  shr eax, 0x10
    X86_AT(c, 0xf783u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f786  add word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf786u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f78e  call 0x36a0
    X86_AT(c, 0xf78eu);
    push32(c, 0xf793u); f_000036a0(c); X86_RET(c, 0xf793u);
    X86_TICK(c, 7);
    // 00f793  call 0xf888
    X86_AT(c, 0xf793u);
    push32(c, 0xf798u); f_0000f888(c); X86_RET(c, 0xf798u);
L_f798:
    X86_TICK(c, 12);
    // 00f798  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0xf798u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 00f7a0  jne 0xf7a7
    X86_AT(c, 0xf7a0u);
    if (x86_cc(c, 5)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f7a2  call 0xf7b0
    X86_AT(c, 0xf7a2u);
    push32(c, 0xf7a7u); f_0000f7b0(c); X86_RET(c, 0xf7a7u);
L_f7a7:
    X86_TICK(c, 15);
    // 00f7a7  pop dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf7a7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), v); }
    // 00f7ae  ret 
    X86_AT(c, 0xf7aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf6c8u, "ran off the end of a function");
}
void f_0000f70f(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00f70f  call 0x36e4
    X86_AT(c, 0xf70fu);
    push32(c, 0xf714u); f_000036e4(c); X86_RET(c, 0xf714u);
    X86_TICK(c, 14);
    // 00f714  test dl, 1
    X86_AT(c, 0xf714u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f717  setne byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf717u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)), x86_cc(c, 5) ? 1u : 0u);
    // 00f71f  call 0xf888
    X86_AT(c, 0xf71fu);
    push32(c, 0xf724u); f_0000f888(c); X86_RET(c, 0xf724u);
    X86_TICK(c, 12);
    // 00f724  test byte ptr gs:[ebp + 0x338], 8
    X86_AT(c, 0xf724u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x8u, 1);
    // 00f72c  je 0xf76a
    X86_AT(c, 0xf72cu);
    if (x86_cc(c, 4)) { goto L_f76a; }
    X86_TICK(c, 39);
    // 00f72e  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf72eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f735  sub word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf735u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f73d  mov ax, word ptr gs:[ebp + 0x38c]
    X86_AT(c, 0xf73du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu))));
    // 00f745  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf745u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f74d  shr eax, 0x10
    X86_AT(c, 0xf74du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f750  sub word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf750u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f758  call 0x36a0
    X86_AT(c, 0xf758u);
    push32(c, 0xf75du); f_000036a0(c); X86_RET(c, 0xf75du);
    X86_TICK(c, 14);
    // 00f75d  or byte ptr gs:[ebp + 0x379], 2
    X86_AT(c, 0xf75du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00f765  call 0xf888
    X86_AT(c, 0xf765u);
    push32(c, 0xf76au); f_0000f888(c); X86_RET(c, 0xf76au);
L_f76a:
    X86_TICK(c, 12);
    // 00f76a  test byte ptr gs:[ebp + 0x338], 4
    X86_AT(c, 0xf76au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x4u, 1);
    // 00f772  je 0xf798
    X86_AT(c, 0xf772u);
    if (x86_cc(c, 4)) { goto L_f798; }
    X86_TICK(c, 28);
    // 00f774  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf774u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f77b  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf77bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f783  shr eax, 0x10
    X86_AT(c, 0xf783u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f786  add word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf786u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f78e  call 0x36a0
    X86_AT(c, 0xf78eu);
    push32(c, 0xf793u); f_000036a0(c); X86_RET(c, 0xf793u);
    X86_TICK(c, 7);
    // 00f793  call 0xf888
    X86_AT(c, 0xf793u);
    push32(c, 0xf798u); f_0000f888(c); X86_RET(c, 0xf798u);
L_f798:
    X86_TICK(c, 12);
    // 00f798  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0xf798u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 00f7a0  jne 0xf7a7
    X86_AT(c, 0xf7a0u);
    if (x86_cc(c, 5)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f7a2  call 0xf7b0
    X86_AT(c, 0xf7a2u);
    push32(c, 0xf7a7u); f_0000f7b0(c); X86_RET(c, 0xf7a7u);
L_f7a7:
    X86_TICK(c, 15);
    // 00f7a7  pop dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf7a7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), v); }
    // 00f7ae  ret 
    X86_AT(c, 0xf7aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf70fu, "ran off the end of a function");
}
void f_0000f714(X86Cpu& c) {
    X86_TICK(c, 14);
    // 00f714  test dl, 1
    X86_AT(c, 0xf714u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f717  setne byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf717u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)), x86_cc(c, 5) ? 1u : 0u);
    // 00f71f  call 0xf888
    X86_AT(c, 0xf71fu);
    push32(c, 0xf724u); f_0000f888(c); X86_RET(c, 0xf724u);
    X86_TICK(c, 12);
    // 00f724  test byte ptr gs:[ebp + 0x338], 8
    X86_AT(c, 0xf724u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x8u, 1);
    // 00f72c  je 0xf76a
    X86_AT(c, 0xf72cu);
    if (x86_cc(c, 4)) { goto L_f76a; }
    X86_TICK(c, 39);
    // 00f72e  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf72eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f735  sub word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf735u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f73d  mov ax, word ptr gs:[ebp + 0x38c]
    X86_AT(c, 0xf73du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu))));
    // 00f745  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf745u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f74d  shr eax, 0x10
    X86_AT(c, 0xf74du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f750  sub word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf750u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f758  call 0x36a0
    X86_AT(c, 0xf758u);
    push32(c, 0xf75du); f_000036a0(c); X86_RET(c, 0xf75du);
    X86_TICK(c, 14);
    // 00f75d  or byte ptr gs:[ebp + 0x379], 2
    X86_AT(c, 0xf75du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00f765  call 0xf888
    X86_AT(c, 0xf765u);
    push32(c, 0xf76au); f_0000f888(c); X86_RET(c, 0xf76au);
L_f76a:
    X86_TICK(c, 12);
    // 00f76a  test byte ptr gs:[ebp + 0x338], 4
    X86_AT(c, 0xf76au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x4u, 1);
    // 00f772  je 0xf798
    X86_AT(c, 0xf772u);
    if (x86_cc(c, 4)) { goto L_f798; }
    X86_TICK(c, 28);
    // 00f774  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf774u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f77b  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf77bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f783  shr eax, 0x10
    X86_AT(c, 0xf783u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f786  add word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf786u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f78e  call 0x36a0
    X86_AT(c, 0xf78eu);
    push32(c, 0xf793u); f_000036a0(c); X86_RET(c, 0xf793u);
    X86_TICK(c, 7);
    // 00f793  call 0xf888
    X86_AT(c, 0xf793u);
    push32(c, 0xf798u); f_0000f888(c); X86_RET(c, 0xf798u);
L_f798:
    X86_TICK(c, 12);
    // 00f798  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0xf798u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 00f7a0  jne 0xf7a7
    X86_AT(c, 0xf7a0u);
    if (x86_cc(c, 5)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f7a2  call 0xf7b0
    X86_AT(c, 0xf7a2u);
    push32(c, 0xf7a7u); f_0000f7b0(c); X86_RET(c, 0xf7a7u);
L_f7a7:
    X86_TICK(c, 15);
    // 00f7a7  pop dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf7a7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), v); }
    // 00f7ae  ret 
    X86_AT(c, 0xf7aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf714u, "ran off the end of a function");
}
void f_0000f717(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00f717  setne byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf717u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)), x86_cc(c, 5) ? 1u : 0u);
    // 00f71f  call 0xf888
    X86_AT(c, 0xf71fu);
    push32(c, 0xf724u); f_0000f888(c); X86_RET(c, 0xf724u);
    X86_TICK(c, 12);
    // 00f724  test byte ptr gs:[ebp + 0x338], 8
    X86_AT(c, 0xf724u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x8u, 1);
    // 00f72c  je 0xf76a
    X86_AT(c, 0xf72cu);
    if (x86_cc(c, 4)) { goto L_f76a; }
    X86_TICK(c, 39);
    // 00f72e  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf72eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f735  sub word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf735u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f73d  mov ax, word ptr gs:[ebp + 0x38c]
    X86_AT(c, 0xf73du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu))));
    // 00f745  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf745u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f74d  shr eax, 0x10
    X86_AT(c, 0xf74du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f750  sub word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf750u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f758  call 0x36a0
    X86_AT(c, 0xf758u);
    push32(c, 0xf75du); f_000036a0(c); X86_RET(c, 0xf75du);
    X86_TICK(c, 14);
    // 00f75d  or byte ptr gs:[ebp + 0x379], 2
    X86_AT(c, 0xf75du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00f765  call 0xf888
    X86_AT(c, 0xf765u);
    push32(c, 0xf76au); f_0000f888(c); X86_RET(c, 0xf76au);
L_f76a:
    X86_TICK(c, 12);
    // 00f76a  test byte ptr gs:[ebp + 0x338], 4
    X86_AT(c, 0xf76au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x4u, 1);
    // 00f772  je 0xf798
    X86_AT(c, 0xf772u);
    if (x86_cc(c, 4)) { goto L_f798; }
    X86_TICK(c, 28);
    // 00f774  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf774u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f77b  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf77bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f783  shr eax, 0x10
    X86_AT(c, 0xf783u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f786  add word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf786u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f78e  call 0x36a0
    X86_AT(c, 0xf78eu);
    push32(c, 0xf793u); f_000036a0(c); X86_RET(c, 0xf793u);
    X86_TICK(c, 7);
    // 00f793  call 0xf888
    X86_AT(c, 0xf793u);
    push32(c, 0xf798u); f_0000f888(c); X86_RET(c, 0xf798u);
L_f798:
    X86_TICK(c, 12);
    // 00f798  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0xf798u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 00f7a0  jne 0xf7a7
    X86_AT(c, 0xf7a0u);
    if (x86_cc(c, 5)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f7a2  call 0xf7b0
    X86_AT(c, 0xf7a2u);
    push32(c, 0xf7a7u); f_0000f7b0(c); X86_RET(c, 0xf7a7u);
L_f7a7:
    X86_TICK(c, 15);
    // 00f7a7  pop dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf7a7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), v); }
    // 00f7ae  ret 
    X86_AT(c, 0xf7aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf717u, "ran off the end of a function");
}
void f_0000f71f(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00f71f  call 0xf888
    X86_AT(c, 0xf71fu);
    push32(c, 0xf724u); f_0000f888(c); X86_RET(c, 0xf724u);
    X86_TICK(c, 12);
    // 00f724  test byte ptr gs:[ebp + 0x338], 8
    X86_AT(c, 0xf724u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x8u, 1);
    // 00f72c  je 0xf76a
    X86_AT(c, 0xf72cu);
    if (x86_cc(c, 4)) { goto L_f76a; }
    X86_TICK(c, 39);
    // 00f72e  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf72eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f735  sub word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf735u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f73d  mov ax, word ptr gs:[ebp + 0x38c]
    X86_AT(c, 0xf73du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu))));
    // 00f745  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf745u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f74d  shr eax, 0x10
    X86_AT(c, 0xf74du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f750  sub word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf750u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f758  call 0x36a0
    X86_AT(c, 0xf758u);
    push32(c, 0xf75du); f_000036a0(c); X86_RET(c, 0xf75du);
    X86_TICK(c, 14);
    // 00f75d  or byte ptr gs:[ebp + 0x379], 2
    X86_AT(c, 0xf75du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00f765  call 0xf888
    X86_AT(c, 0xf765u);
    push32(c, 0xf76au); f_0000f888(c); X86_RET(c, 0xf76au);
L_f76a:
    X86_TICK(c, 12);
    // 00f76a  test byte ptr gs:[ebp + 0x338], 4
    X86_AT(c, 0xf76au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x4u, 1);
    // 00f772  je 0xf798
    X86_AT(c, 0xf772u);
    if (x86_cc(c, 4)) { goto L_f798; }
    X86_TICK(c, 28);
    // 00f774  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf774u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f77b  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf77bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f783  shr eax, 0x10
    X86_AT(c, 0xf783u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f786  add word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf786u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f78e  call 0x36a0
    X86_AT(c, 0xf78eu);
    push32(c, 0xf793u); f_000036a0(c); X86_RET(c, 0xf793u);
    X86_TICK(c, 7);
    // 00f793  call 0xf888
    X86_AT(c, 0xf793u);
    push32(c, 0xf798u); f_0000f888(c); X86_RET(c, 0xf798u);
L_f798:
    X86_TICK(c, 12);
    // 00f798  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0xf798u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 00f7a0  jne 0xf7a7
    X86_AT(c, 0xf7a0u);
    if (x86_cc(c, 5)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f7a2  call 0xf7b0
    X86_AT(c, 0xf7a2u);
    push32(c, 0xf7a7u); f_0000f7b0(c); X86_RET(c, 0xf7a7u);
L_f7a7:
    X86_TICK(c, 15);
    // 00f7a7  pop dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf7a7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), v); }
    // 00f7ae  ret 
    X86_AT(c, 0xf7aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf71fu, "ran off the end of a function");
}
void f_0000f724(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00f724  test byte ptr gs:[ebp + 0x338], 8
    X86_AT(c, 0xf724u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x8u, 1);
    // 00f72c  je 0xf76a
    X86_AT(c, 0xf72cu);
    if (x86_cc(c, 4)) { goto L_f76a; }
    X86_TICK(c, 39);
    // 00f72e  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf72eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f735  sub word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf735u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f73d  mov ax, word ptr gs:[ebp + 0x38c]
    X86_AT(c, 0xf73du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu))));
    // 00f745  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf745u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f74d  shr eax, 0x10
    X86_AT(c, 0xf74du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f750  sub word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf750u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f758  call 0x36a0
    X86_AT(c, 0xf758u);
    push32(c, 0xf75du); f_000036a0(c); X86_RET(c, 0xf75du);
    X86_TICK(c, 14);
    // 00f75d  or byte ptr gs:[ebp + 0x379], 2
    X86_AT(c, 0xf75du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00f765  call 0xf888
    X86_AT(c, 0xf765u);
    push32(c, 0xf76au); f_0000f888(c); X86_RET(c, 0xf76au);
L_f76a:
    X86_TICK(c, 12);
    // 00f76a  test byte ptr gs:[ebp + 0x338], 4
    X86_AT(c, 0xf76au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x4u, 1);
    // 00f772  je 0xf798
    X86_AT(c, 0xf772u);
    if (x86_cc(c, 4)) { goto L_f798; }
    X86_TICK(c, 28);
    // 00f774  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf774u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f77b  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf77bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f783  shr eax, 0x10
    X86_AT(c, 0xf783u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f786  add word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf786u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f78e  call 0x36a0
    X86_AT(c, 0xf78eu);
    push32(c, 0xf793u); f_000036a0(c); X86_RET(c, 0xf793u);
    X86_TICK(c, 7);
    // 00f793  call 0xf888
    X86_AT(c, 0xf793u);
    push32(c, 0xf798u); f_0000f888(c); X86_RET(c, 0xf798u);
L_f798:
    X86_TICK(c, 12);
    // 00f798  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0xf798u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 00f7a0  jne 0xf7a7
    X86_AT(c, 0xf7a0u);
    if (x86_cc(c, 5)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f7a2  call 0xf7b0
    X86_AT(c, 0xf7a2u);
    push32(c, 0xf7a7u); f_0000f7b0(c); X86_RET(c, 0xf7a7u);
L_f7a7:
    X86_TICK(c, 15);
    // 00f7a7  pop dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf7a7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), v); }
    // 00f7ae  ret 
    X86_AT(c, 0xf7aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf724u, "ran off the end of a function");
}
void f_0000f72c(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00f72c  je 0xf76a
    X86_AT(c, 0xf72cu);
    if (x86_cc(c, 4)) { goto L_f76a; }
    X86_TICK(c, 39);
    // 00f72e  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf72eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f735  sub word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf735u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f73d  mov ax, word ptr gs:[ebp + 0x38c]
    X86_AT(c, 0xf73du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu))));
    // 00f745  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf745u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f74d  shr eax, 0x10
    X86_AT(c, 0xf74du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f750  sub word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf750u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f758  call 0x36a0
    X86_AT(c, 0xf758u);
    push32(c, 0xf75du); f_000036a0(c); X86_RET(c, 0xf75du);
    X86_TICK(c, 14);
    // 00f75d  or byte ptr gs:[ebp + 0x379], 2
    X86_AT(c, 0xf75du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00f765  call 0xf888
    X86_AT(c, 0xf765u);
    push32(c, 0xf76au); f_0000f888(c); X86_RET(c, 0xf76au);
L_f76a:
    X86_TICK(c, 12);
    // 00f76a  test byte ptr gs:[ebp + 0x338], 4
    X86_AT(c, 0xf76au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x4u, 1);
    // 00f772  je 0xf798
    X86_AT(c, 0xf772u);
    if (x86_cc(c, 4)) { goto L_f798; }
    X86_TICK(c, 28);
    // 00f774  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf774u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f77b  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf77bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f783  shr eax, 0x10
    X86_AT(c, 0xf783u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f786  add word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf786u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f78e  call 0x36a0
    X86_AT(c, 0xf78eu);
    push32(c, 0xf793u); f_000036a0(c); X86_RET(c, 0xf793u);
    X86_TICK(c, 7);
    // 00f793  call 0xf888
    X86_AT(c, 0xf793u);
    push32(c, 0xf798u); f_0000f888(c); X86_RET(c, 0xf798u);
L_f798:
    X86_TICK(c, 12);
    // 00f798  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0xf798u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 00f7a0  jne 0xf7a7
    X86_AT(c, 0xf7a0u);
    if (x86_cc(c, 5)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f7a2  call 0xf7b0
    X86_AT(c, 0xf7a2u);
    push32(c, 0xf7a7u); f_0000f7b0(c); X86_RET(c, 0xf7a7u);
L_f7a7:
    X86_TICK(c, 15);
    // 00f7a7  pop dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf7a7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), v); }
    // 00f7ae  ret 
    X86_AT(c, 0xf7aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf72cu, "ran off the end of a function");
}
void f_0000f76a(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00f76a  test byte ptr gs:[ebp + 0x338], 4
    X86_AT(c, 0xf76au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x4u, 1);
    // 00f772  je 0xf798
    X86_AT(c, 0xf772u);
    if (x86_cc(c, 4)) { goto L_f798; }
    X86_TICK(c, 28);
    // 00f774  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf774u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f77b  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf77bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f783  shr eax, 0x10
    X86_AT(c, 0xf783u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f786  add word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf786u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f78e  call 0x36a0
    X86_AT(c, 0xf78eu);
    push32(c, 0xf793u); f_000036a0(c); X86_RET(c, 0xf793u);
    X86_TICK(c, 7);
    // 00f793  call 0xf888
    X86_AT(c, 0xf793u);
    push32(c, 0xf798u); f_0000f888(c); X86_RET(c, 0xf798u);
L_f798:
    X86_TICK(c, 12);
    // 00f798  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0xf798u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 00f7a0  jne 0xf7a7
    X86_AT(c, 0xf7a0u);
    if (x86_cc(c, 5)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f7a2  call 0xf7b0
    X86_AT(c, 0xf7a2u);
    push32(c, 0xf7a7u); f_0000f7b0(c); X86_RET(c, 0xf7a7u);
L_f7a7:
    X86_TICK(c, 15);
    // 00f7a7  pop dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf7a7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), v); }
    // 00f7ae  ret 
    X86_AT(c, 0xf7aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf76au, "ran off the end of a function");
}
void f_0000f772(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00f772  je 0xf798
    X86_AT(c, 0xf772u);
    if (x86_cc(c, 4)) { goto L_f798; }
    X86_TICK(c, 28);
    // 00f774  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf774u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f77b  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf77bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f783  shr eax, 0x10
    X86_AT(c, 0xf783u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f786  add word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf786u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f78e  call 0x36a0
    X86_AT(c, 0xf78eu);
    push32(c, 0xf793u); f_000036a0(c); X86_RET(c, 0xf793u);
    X86_TICK(c, 7);
    // 00f793  call 0xf888
    X86_AT(c, 0xf793u);
    push32(c, 0xf798u); f_0000f888(c); X86_RET(c, 0xf798u);
L_f798:
    X86_TICK(c, 12);
    // 00f798  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0xf798u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 00f7a0  jne 0xf7a7
    X86_AT(c, 0xf7a0u);
    if (x86_cc(c, 5)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f7a2  call 0xf7b0
    X86_AT(c, 0xf7a2u);
    push32(c, 0xf7a7u); f_0000f7b0(c); X86_RET(c, 0xf7a7u);
L_f7a7:
    X86_TICK(c, 15);
    // 00f7a7  pop dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf7a7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), v); }
    // 00f7ae  ret 
    X86_AT(c, 0xf7aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf772u, "ran off the end of a function");
}
void f_0000f798(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00f798  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0xf798u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 00f7a0  jne 0xf7a7
    X86_AT(c, 0xf7a0u);
    if (x86_cc(c, 5)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f7a2  call 0xf7b0
    X86_AT(c, 0xf7a2u);
    push32(c, 0xf7a7u); f_0000f7b0(c); X86_RET(c, 0xf7a7u);
L_f7a7:
    X86_TICK(c, 15);
    // 00f7a7  pop dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf7a7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), v); }
    // 00f7ae  ret 
    X86_AT(c, 0xf7aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf798u, "ran off the end of a function");
}
void f_0000f7a0(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00f7a0  jne 0xf7a7
    X86_AT(c, 0xf7a0u);
    if (x86_cc(c, 5)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f7a2  call 0xf7b0
    X86_AT(c, 0xf7a2u);
    push32(c, 0xf7a7u); f_0000f7b0(c); X86_RET(c, 0xf7a7u);
L_f7a7:
    X86_TICK(c, 15);
    // 00f7a7  pop dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf7a7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), v); }
    // 00f7ae  ret 
    X86_AT(c, 0xf7aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf7a0u, "ran off the end of a function");
}
void f_0000f7a2(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00f7a2  call 0xf7b0
    X86_AT(c, 0xf7a2u);
    push32(c, 0xf7a7u); f_0000f7b0(c); X86_RET(c, 0xf7a7u);
    X86_TICK(c, 15);
    // 00f7a7  pop dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf7a7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), v); }
    // 00f7ae  ret 
    X86_AT(c, 0xf7aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf7a2u, "ran off the end of a function");
}
void f_0000f7a7(X86Cpu& c) {
    X86_TICK(c, 15);
    // 00f7a7  pop dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf7a7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), v); }
    // 00f7ae  ret 
    X86_AT(c, 0xf7aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf7a7u, "ran off the end of a function");
}
void f_0000f7ae(X86Cpu& c) {
    X86_TICK(c, 10);
    // 00f7ae  ret 
    X86_AT(c, 0xf7aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf7aeu, "ran off the end of a function");
}
void f_0000f7b0(X86Cpu& c) {
    X86_TICK(c, 13);
    // 00f7b0  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf7b0u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f7b7  mov dword ptr gs:[ebp + 0x36c], eax
    X86_AT(c, 0xf7b7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)), c.r[0]);
    // 00f7be  call 0x36a0
    X86_AT(c, 0xf7beu);
    push32(c, 0xf7c3u); f_000036a0(c); X86_RET(c, 0xf7c3u);
    X86_TICK(c, 7);
    // 00f7c3  call 0x6120
    X86_AT(c, 0xf7c3u);
    push32(c, 0xf7c8u); f_00006120(c); X86_RET(c, 0xf7c8u);
    X86_TICK(c, 11);
    // 00f7c8  mov dl, byte ptr gs:[ebp + 0x338]
    X86_AT(c, 0xf7c8u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))));
    // 00f7cf  test dl, 4
    X86_AT(c, 0xf7cfu);
    (void)x86_logic(c, g8(c, 2) & 0x4u, 1);
    // 00f7d2  je 0xf7fe
    X86_AT(c, 0xf7d2u);
    if (x86_cc(c, 4)) { goto L_f7fe; }
    X86_TICK(c, 35);
    // 00f7d4  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf7d4u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f7db  sub word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf7dbu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f7e3  add word ptr gs:[ebp + 0x36c], ax
    X86_AT(c, 0xf7e3u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f7eb  shr eax, 0x10
    X86_AT(c, 0xf7ebu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f7ee  sub word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf7eeu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f7f6  add word ptr gs:[ebp + 0x36e], ax
    X86_AT(c, 0xf7f6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x36Eu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f7fe:
    X86_TICK(c, 13);
    // 00f7fe  mov eax, dword ptr gs:[ebp + 0x384]
    X86_AT(c, 0xf7feu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)));
    // 00f805  mov dword ptr gs:[ebp + 0x35c], eax
    X86_AT(c, 0xf805u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), c.r[0]);
    // 00f80c  test dl, 2
    X86_AT(c, 0xf80cu);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f80f  je 0xf824
    X86_AT(c, 0xf80fu);
    if (x86_cc(c, 4)) { goto L_f824; }
    X86_TICK(c, 14);
    // 00f811  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf811u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f819  shr ax, 1
    X86_AT(c, 0xf819u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 00f81c  add word ptr gs:[ebp + 0x35c], ax
    X86_AT(c, 0xf81cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f824:
    X86_TICK(c, 23);
    // 00f824  push ds
    X86_AT(c, 0xf824u);
    push32(c, c.sreg[3]);
    // 00f825  push esi
    X86_AT(c, 0xf825u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f826  mov byte ptr gs:[ebp + 0x380], 1
    X86_AT(c, 0xf826u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u)), 0x1u);
    // 00f82e  mov eax, dword ptr gs:[ebp + 0x36c]
    X86_AT(c, 0xf82eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)));
    // 00f835  mov dword ptr gs:[ebp + 0x37c], eax
    X86_AT(c, 0xf835u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)), c.r[0]);
    // 00f83c  mov dl, byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf83cu);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u))));
    // 00f843  test dl, 1
    X86_AT(c, 0xf843u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f846  je 0xf858
    X86_AT(c, 0xf846u);
    if (x86_cc(c, 4)) { goto L_f858; }
    X86_TICK(c, 11);
    // 00f848  mov ax, word ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf848u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u))));
    // 00f850  add word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf850u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f858:
    X86_TICK(c, 7);
    // 00f858  test dl, 2
    X86_AT(c, 0xf858u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f85b  je 0xf87d
    X86_AT(c, 0xf85bu);
    if (x86_cc(c, 4)) { goto L_f87d; }
    X86_TICK(c, 25);
    // 00f85d  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf85du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f864  add ax, ax
    X86_AT(c, 0xf864u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f867  add word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf867u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f86f  shr eax, 0x10
    X86_AT(c, 0xf86fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f872  add ax, ax
    X86_AT(c, 0xf872u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f875  add word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf875u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f87d:
    X86_TICK(c, 7);
    // 00f87d  call 0xfa24
    X86_AT(c, 0xf87du);
    push32(c, 0xf882u); f_0000fa24(c); X86_RET(c, 0xf882u);
    X86_TICK(c, 18);
    // 00f882  pop esi
    X86_AT(c, 0xf882u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f883  pop ds
    X86_AT(c, 0xf883u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f884  ret 
    X86_AT(c, 0xf884u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf7b0u, "ran off the end of a function");
}
void f_0000f7b7(X86Cpu& c) {
    X86_TICK(c, 9);
    // 00f7b7  mov dword ptr gs:[ebp + 0x36c], eax
    X86_AT(c, 0xf7b7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)), c.r[0]);
    // 00f7be  call 0x36a0
    X86_AT(c, 0xf7beu);
    push32(c, 0xf7c3u); f_000036a0(c); X86_RET(c, 0xf7c3u);
    X86_TICK(c, 7);
    // 00f7c3  call 0x6120
    X86_AT(c, 0xf7c3u);
    push32(c, 0xf7c8u); f_00006120(c); X86_RET(c, 0xf7c8u);
    X86_TICK(c, 11);
    // 00f7c8  mov dl, byte ptr gs:[ebp + 0x338]
    X86_AT(c, 0xf7c8u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))));
    // 00f7cf  test dl, 4
    X86_AT(c, 0xf7cfu);
    (void)x86_logic(c, g8(c, 2) & 0x4u, 1);
    // 00f7d2  je 0xf7fe
    X86_AT(c, 0xf7d2u);
    if (x86_cc(c, 4)) { goto L_f7fe; }
    X86_TICK(c, 35);
    // 00f7d4  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf7d4u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f7db  sub word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf7dbu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f7e3  add word ptr gs:[ebp + 0x36c], ax
    X86_AT(c, 0xf7e3u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f7eb  shr eax, 0x10
    X86_AT(c, 0xf7ebu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f7ee  sub word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf7eeu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f7f6  add word ptr gs:[ebp + 0x36e], ax
    X86_AT(c, 0xf7f6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x36Eu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f7fe:
    X86_TICK(c, 13);
    // 00f7fe  mov eax, dword ptr gs:[ebp + 0x384]
    X86_AT(c, 0xf7feu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)));
    // 00f805  mov dword ptr gs:[ebp + 0x35c], eax
    X86_AT(c, 0xf805u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), c.r[0]);
    // 00f80c  test dl, 2
    X86_AT(c, 0xf80cu);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f80f  je 0xf824
    X86_AT(c, 0xf80fu);
    if (x86_cc(c, 4)) { goto L_f824; }
    X86_TICK(c, 14);
    // 00f811  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf811u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f819  shr ax, 1
    X86_AT(c, 0xf819u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 00f81c  add word ptr gs:[ebp + 0x35c], ax
    X86_AT(c, 0xf81cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f824:
    X86_TICK(c, 23);
    // 00f824  push ds
    X86_AT(c, 0xf824u);
    push32(c, c.sreg[3]);
    // 00f825  push esi
    X86_AT(c, 0xf825u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f826  mov byte ptr gs:[ebp + 0x380], 1
    X86_AT(c, 0xf826u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u)), 0x1u);
    // 00f82e  mov eax, dword ptr gs:[ebp + 0x36c]
    X86_AT(c, 0xf82eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)));
    // 00f835  mov dword ptr gs:[ebp + 0x37c], eax
    X86_AT(c, 0xf835u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)), c.r[0]);
    // 00f83c  mov dl, byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf83cu);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u))));
    // 00f843  test dl, 1
    X86_AT(c, 0xf843u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f846  je 0xf858
    X86_AT(c, 0xf846u);
    if (x86_cc(c, 4)) { goto L_f858; }
    X86_TICK(c, 11);
    // 00f848  mov ax, word ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf848u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u))));
    // 00f850  add word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf850u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f858:
    X86_TICK(c, 7);
    // 00f858  test dl, 2
    X86_AT(c, 0xf858u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f85b  je 0xf87d
    X86_AT(c, 0xf85bu);
    if (x86_cc(c, 4)) { goto L_f87d; }
    X86_TICK(c, 25);
    // 00f85d  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf85du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f864  add ax, ax
    X86_AT(c, 0xf864u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f867  add word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf867u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f86f  shr eax, 0x10
    X86_AT(c, 0xf86fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f872  add ax, ax
    X86_AT(c, 0xf872u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f875  add word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf875u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f87d:
    X86_TICK(c, 7);
    // 00f87d  call 0xfa24
    X86_AT(c, 0xf87du);
    push32(c, 0xf882u); f_0000fa24(c); X86_RET(c, 0xf882u);
    X86_TICK(c, 18);
    // 00f882  pop esi
    X86_AT(c, 0xf882u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f883  pop ds
    X86_AT(c, 0xf883u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f884  ret 
    X86_AT(c, 0xf884u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf7b7u, "ran off the end of a function");
}
void f_0000f7be(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00f7be  call 0x36a0
    X86_AT(c, 0xf7beu);
    push32(c, 0xf7c3u); f_000036a0(c); X86_RET(c, 0xf7c3u);
    X86_TICK(c, 7);
    // 00f7c3  call 0x6120
    X86_AT(c, 0xf7c3u);
    push32(c, 0xf7c8u); f_00006120(c); X86_RET(c, 0xf7c8u);
    X86_TICK(c, 11);
    // 00f7c8  mov dl, byte ptr gs:[ebp + 0x338]
    X86_AT(c, 0xf7c8u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))));
    // 00f7cf  test dl, 4
    X86_AT(c, 0xf7cfu);
    (void)x86_logic(c, g8(c, 2) & 0x4u, 1);
    // 00f7d2  je 0xf7fe
    X86_AT(c, 0xf7d2u);
    if (x86_cc(c, 4)) { goto L_f7fe; }
    X86_TICK(c, 35);
    // 00f7d4  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf7d4u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f7db  sub word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf7dbu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f7e3  add word ptr gs:[ebp + 0x36c], ax
    X86_AT(c, 0xf7e3u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f7eb  shr eax, 0x10
    X86_AT(c, 0xf7ebu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f7ee  sub word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf7eeu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f7f6  add word ptr gs:[ebp + 0x36e], ax
    X86_AT(c, 0xf7f6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x36Eu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f7fe:
    X86_TICK(c, 13);
    // 00f7fe  mov eax, dword ptr gs:[ebp + 0x384]
    X86_AT(c, 0xf7feu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)));
    // 00f805  mov dword ptr gs:[ebp + 0x35c], eax
    X86_AT(c, 0xf805u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), c.r[0]);
    // 00f80c  test dl, 2
    X86_AT(c, 0xf80cu);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f80f  je 0xf824
    X86_AT(c, 0xf80fu);
    if (x86_cc(c, 4)) { goto L_f824; }
    X86_TICK(c, 14);
    // 00f811  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf811u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f819  shr ax, 1
    X86_AT(c, 0xf819u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 00f81c  add word ptr gs:[ebp + 0x35c], ax
    X86_AT(c, 0xf81cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f824:
    X86_TICK(c, 23);
    // 00f824  push ds
    X86_AT(c, 0xf824u);
    push32(c, c.sreg[3]);
    // 00f825  push esi
    X86_AT(c, 0xf825u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f826  mov byte ptr gs:[ebp + 0x380], 1
    X86_AT(c, 0xf826u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u)), 0x1u);
    // 00f82e  mov eax, dword ptr gs:[ebp + 0x36c]
    X86_AT(c, 0xf82eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)));
    // 00f835  mov dword ptr gs:[ebp + 0x37c], eax
    X86_AT(c, 0xf835u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)), c.r[0]);
    // 00f83c  mov dl, byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf83cu);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u))));
    // 00f843  test dl, 1
    X86_AT(c, 0xf843u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f846  je 0xf858
    X86_AT(c, 0xf846u);
    if (x86_cc(c, 4)) { goto L_f858; }
    X86_TICK(c, 11);
    // 00f848  mov ax, word ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf848u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u))));
    // 00f850  add word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf850u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f858:
    X86_TICK(c, 7);
    // 00f858  test dl, 2
    X86_AT(c, 0xf858u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f85b  je 0xf87d
    X86_AT(c, 0xf85bu);
    if (x86_cc(c, 4)) { goto L_f87d; }
    X86_TICK(c, 25);
    // 00f85d  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf85du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f864  add ax, ax
    X86_AT(c, 0xf864u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f867  add word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf867u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f86f  shr eax, 0x10
    X86_AT(c, 0xf86fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f872  add ax, ax
    X86_AT(c, 0xf872u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f875  add word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf875u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f87d:
    X86_TICK(c, 7);
    // 00f87d  call 0xfa24
    X86_AT(c, 0xf87du);
    push32(c, 0xf882u); f_0000fa24(c); X86_RET(c, 0xf882u);
    X86_TICK(c, 18);
    // 00f882  pop esi
    X86_AT(c, 0xf882u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f883  pop ds
    X86_AT(c, 0xf883u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f884  ret 
    X86_AT(c, 0xf884u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf7beu, "ran off the end of a function");
}
void f_0000f7c3(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00f7c3  call 0x6120
    X86_AT(c, 0xf7c3u);
    push32(c, 0xf7c8u); f_00006120(c); X86_RET(c, 0xf7c8u);
    X86_TICK(c, 11);
    // 00f7c8  mov dl, byte ptr gs:[ebp + 0x338]
    X86_AT(c, 0xf7c8u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))));
    // 00f7cf  test dl, 4
    X86_AT(c, 0xf7cfu);
    (void)x86_logic(c, g8(c, 2) & 0x4u, 1);
    // 00f7d2  je 0xf7fe
    X86_AT(c, 0xf7d2u);
    if (x86_cc(c, 4)) { goto L_f7fe; }
    X86_TICK(c, 35);
    // 00f7d4  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf7d4u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f7db  sub word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf7dbu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f7e3  add word ptr gs:[ebp + 0x36c], ax
    X86_AT(c, 0xf7e3u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f7eb  shr eax, 0x10
    X86_AT(c, 0xf7ebu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f7ee  sub word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf7eeu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f7f6  add word ptr gs:[ebp + 0x36e], ax
    X86_AT(c, 0xf7f6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x36Eu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f7fe:
    X86_TICK(c, 13);
    // 00f7fe  mov eax, dword ptr gs:[ebp + 0x384]
    X86_AT(c, 0xf7feu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)));
    // 00f805  mov dword ptr gs:[ebp + 0x35c], eax
    X86_AT(c, 0xf805u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), c.r[0]);
    // 00f80c  test dl, 2
    X86_AT(c, 0xf80cu);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f80f  je 0xf824
    X86_AT(c, 0xf80fu);
    if (x86_cc(c, 4)) { goto L_f824; }
    X86_TICK(c, 14);
    // 00f811  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf811u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f819  shr ax, 1
    X86_AT(c, 0xf819u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 00f81c  add word ptr gs:[ebp + 0x35c], ax
    X86_AT(c, 0xf81cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f824:
    X86_TICK(c, 23);
    // 00f824  push ds
    X86_AT(c, 0xf824u);
    push32(c, c.sreg[3]);
    // 00f825  push esi
    X86_AT(c, 0xf825u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f826  mov byte ptr gs:[ebp + 0x380], 1
    X86_AT(c, 0xf826u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u)), 0x1u);
    // 00f82e  mov eax, dword ptr gs:[ebp + 0x36c]
    X86_AT(c, 0xf82eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)));
    // 00f835  mov dword ptr gs:[ebp + 0x37c], eax
    X86_AT(c, 0xf835u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)), c.r[0]);
    // 00f83c  mov dl, byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf83cu);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u))));
    // 00f843  test dl, 1
    X86_AT(c, 0xf843u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f846  je 0xf858
    X86_AT(c, 0xf846u);
    if (x86_cc(c, 4)) { goto L_f858; }
    X86_TICK(c, 11);
    // 00f848  mov ax, word ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf848u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u))));
    // 00f850  add word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf850u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f858:
    X86_TICK(c, 7);
    // 00f858  test dl, 2
    X86_AT(c, 0xf858u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f85b  je 0xf87d
    X86_AT(c, 0xf85bu);
    if (x86_cc(c, 4)) { goto L_f87d; }
    X86_TICK(c, 25);
    // 00f85d  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf85du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f864  add ax, ax
    X86_AT(c, 0xf864u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f867  add word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf867u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f86f  shr eax, 0x10
    X86_AT(c, 0xf86fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f872  add ax, ax
    X86_AT(c, 0xf872u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f875  add word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf875u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f87d:
    X86_TICK(c, 7);
    // 00f87d  call 0xfa24
    X86_AT(c, 0xf87du);
    push32(c, 0xf882u); f_0000fa24(c); X86_RET(c, 0xf882u);
    X86_TICK(c, 18);
    // 00f882  pop esi
    X86_AT(c, 0xf882u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f883  pop ds
    X86_AT(c, 0xf883u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f884  ret 
    X86_AT(c, 0xf884u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf7c3u, "ran off the end of a function");
}
void f_0000f7c8(X86Cpu& c) {
    X86_TICK(c, 11);
    // 00f7c8  mov dl, byte ptr gs:[ebp + 0x338]
    X86_AT(c, 0xf7c8u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))));
    // 00f7cf  test dl, 4
    X86_AT(c, 0xf7cfu);
    (void)x86_logic(c, g8(c, 2) & 0x4u, 1);
    // 00f7d2  je 0xf7fe
    X86_AT(c, 0xf7d2u);
    if (x86_cc(c, 4)) { goto L_f7fe; }
    X86_TICK(c, 35);
    // 00f7d4  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf7d4u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f7db  sub word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf7dbu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f7e3  add word ptr gs:[ebp + 0x36c], ax
    X86_AT(c, 0xf7e3u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f7eb  shr eax, 0x10
    X86_AT(c, 0xf7ebu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f7ee  sub word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf7eeu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f7f6  add word ptr gs:[ebp + 0x36e], ax
    X86_AT(c, 0xf7f6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x36Eu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f7fe:
    X86_TICK(c, 13);
    // 00f7fe  mov eax, dword ptr gs:[ebp + 0x384]
    X86_AT(c, 0xf7feu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)));
    // 00f805  mov dword ptr gs:[ebp + 0x35c], eax
    X86_AT(c, 0xf805u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), c.r[0]);
    // 00f80c  test dl, 2
    X86_AT(c, 0xf80cu);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f80f  je 0xf824
    X86_AT(c, 0xf80fu);
    if (x86_cc(c, 4)) { goto L_f824; }
    X86_TICK(c, 14);
    // 00f811  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf811u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f819  shr ax, 1
    X86_AT(c, 0xf819u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 00f81c  add word ptr gs:[ebp + 0x35c], ax
    X86_AT(c, 0xf81cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f824:
    X86_TICK(c, 23);
    // 00f824  push ds
    X86_AT(c, 0xf824u);
    push32(c, c.sreg[3]);
    // 00f825  push esi
    X86_AT(c, 0xf825u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f826  mov byte ptr gs:[ebp + 0x380], 1
    X86_AT(c, 0xf826u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u)), 0x1u);
    // 00f82e  mov eax, dword ptr gs:[ebp + 0x36c]
    X86_AT(c, 0xf82eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)));
    // 00f835  mov dword ptr gs:[ebp + 0x37c], eax
    X86_AT(c, 0xf835u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)), c.r[0]);
    // 00f83c  mov dl, byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf83cu);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u))));
    // 00f843  test dl, 1
    X86_AT(c, 0xf843u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f846  je 0xf858
    X86_AT(c, 0xf846u);
    if (x86_cc(c, 4)) { goto L_f858; }
    X86_TICK(c, 11);
    // 00f848  mov ax, word ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf848u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u))));
    // 00f850  add word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf850u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f858:
    X86_TICK(c, 7);
    // 00f858  test dl, 2
    X86_AT(c, 0xf858u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f85b  je 0xf87d
    X86_AT(c, 0xf85bu);
    if (x86_cc(c, 4)) { goto L_f87d; }
    X86_TICK(c, 25);
    // 00f85d  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf85du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f864  add ax, ax
    X86_AT(c, 0xf864u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f867  add word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf867u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f86f  shr eax, 0x10
    X86_AT(c, 0xf86fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f872  add ax, ax
    X86_AT(c, 0xf872u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f875  add word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf875u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f87d:
    X86_TICK(c, 7);
    // 00f87d  call 0xfa24
    X86_AT(c, 0xf87du);
    push32(c, 0xf882u); f_0000fa24(c); X86_RET(c, 0xf882u);
    X86_TICK(c, 18);
    // 00f882  pop esi
    X86_AT(c, 0xf882u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f883  pop ds
    X86_AT(c, 0xf883u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f884  ret 
    X86_AT(c, 0xf884u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf7c8u, "ran off the end of a function");
}
void f_0000f7cf(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00f7cf  test dl, 4
    X86_AT(c, 0xf7cfu);
    (void)x86_logic(c, g8(c, 2) & 0x4u, 1);
    // 00f7d2  je 0xf7fe
    X86_AT(c, 0xf7d2u);
    if (x86_cc(c, 4)) { goto L_f7fe; }
    X86_TICK(c, 35);
    // 00f7d4  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf7d4u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f7db  sub word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf7dbu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f7e3  add word ptr gs:[ebp + 0x36c], ax
    X86_AT(c, 0xf7e3u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f7eb  shr eax, 0x10
    X86_AT(c, 0xf7ebu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f7ee  sub word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf7eeu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f7f6  add word ptr gs:[ebp + 0x36e], ax
    X86_AT(c, 0xf7f6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x36Eu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f7fe:
    X86_TICK(c, 13);
    // 00f7fe  mov eax, dword ptr gs:[ebp + 0x384]
    X86_AT(c, 0xf7feu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)));
    // 00f805  mov dword ptr gs:[ebp + 0x35c], eax
    X86_AT(c, 0xf805u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), c.r[0]);
    // 00f80c  test dl, 2
    X86_AT(c, 0xf80cu);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f80f  je 0xf824
    X86_AT(c, 0xf80fu);
    if (x86_cc(c, 4)) { goto L_f824; }
    X86_TICK(c, 14);
    // 00f811  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf811u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f819  shr ax, 1
    X86_AT(c, 0xf819u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 00f81c  add word ptr gs:[ebp + 0x35c], ax
    X86_AT(c, 0xf81cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f824:
    X86_TICK(c, 23);
    // 00f824  push ds
    X86_AT(c, 0xf824u);
    push32(c, c.sreg[3]);
    // 00f825  push esi
    X86_AT(c, 0xf825u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f826  mov byte ptr gs:[ebp + 0x380], 1
    X86_AT(c, 0xf826u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u)), 0x1u);
    // 00f82e  mov eax, dword ptr gs:[ebp + 0x36c]
    X86_AT(c, 0xf82eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)));
    // 00f835  mov dword ptr gs:[ebp + 0x37c], eax
    X86_AT(c, 0xf835u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)), c.r[0]);
    // 00f83c  mov dl, byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf83cu);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u))));
    // 00f843  test dl, 1
    X86_AT(c, 0xf843u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f846  je 0xf858
    X86_AT(c, 0xf846u);
    if (x86_cc(c, 4)) { goto L_f858; }
    X86_TICK(c, 11);
    // 00f848  mov ax, word ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf848u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u))));
    // 00f850  add word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf850u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f858:
    X86_TICK(c, 7);
    // 00f858  test dl, 2
    X86_AT(c, 0xf858u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f85b  je 0xf87d
    X86_AT(c, 0xf85bu);
    if (x86_cc(c, 4)) { goto L_f87d; }
    X86_TICK(c, 25);
    // 00f85d  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf85du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f864  add ax, ax
    X86_AT(c, 0xf864u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f867  add word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf867u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f86f  shr eax, 0x10
    X86_AT(c, 0xf86fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f872  add ax, ax
    X86_AT(c, 0xf872u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f875  add word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf875u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f87d:
    X86_TICK(c, 7);
    // 00f87d  call 0xfa24
    X86_AT(c, 0xf87du);
    push32(c, 0xf882u); f_0000fa24(c); X86_RET(c, 0xf882u);
    X86_TICK(c, 18);
    // 00f882  pop esi
    X86_AT(c, 0xf882u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f883  pop ds
    X86_AT(c, 0xf883u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f884  ret 
    X86_AT(c, 0xf884u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf7cfu, "ran off the end of a function");
}
void f_0000f7d2(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00f7d2  je 0xf7fe
    X86_AT(c, 0xf7d2u);
    if (x86_cc(c, 4)) { goto L_f7fe; }
    X86_TICK(c, 35);
    // 00f7d4  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf7d4u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f7db  sub word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf7dbu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f7e3  add word ptr gs:[ebp + 0x36c], ax
    X86_AT(c, 0xf7e3u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f7eb  shr eax, 0x10
    X86_AT(c, 0xf7ebu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f7ee  sub word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf7eeu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f7f6  add word ptr gs:[ebp + 0x36e], ax
    X86_AT(c, 0xf7f6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x36Eu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f7fe:
    X86_TICK(c, 13);
    // 00f7fe  mov eax, dword ptr gs:[ebp + 0x384]
    X86_AT(c, 0xf7feu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)));
    // 00f805  mov dword ptr gs:[ebp + 0x35c], eax
    X86_AT(c, 0xf805u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), c.r[0]);
    // 00f80c  test dl, 2
    X86_AT(c, 0xf80cu);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f80f  je 0xf824
    X86_AT(c, 0xf80fu);
    if (x86_cc(c, 4)) { goto L_f824; }
    X86_TICK(c, 14);
    // 00f811  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf811u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f819  shr ax, 1
    X86_AT(c, 0xf819u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 00f81c  add word ptr gs:[ebp + 0x35c], ax
    X86_AT(c, 0xf81cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f824:
    X86_TICK(c, 23);
    // 00f824  push ds
    X86_AT(c, 0xf824u);
    push32(c, c.sreg[3]);
    // 00f825  push esi
    X86_AT(c, 0xf825u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f826  mov byte ptr gs:[ebp + 0x380], 1
    X86_AT(c, 0xf826u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u)), 0x1u);
    // 00f82e  mov eax, dword ptr gs:[ebp + 0x36c]
    X86_AT(c, 0xf82eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)));
    // 00f835  mov dword ptr gs:[ebp + 0x37c], eax
    X86_AT(c, 0xf835u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)), c.r[0]);
    // 00f83c  mov dl, byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf83cu);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u))));
    // 00f843  test dl, 1
    X86_AT(c, 0xf843u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f846  je 0xf858
    X86_AT(c, 0xf846u);
    if (x86_cc(c, 4)) { goto L_f858; }
    X86_TICK(c, 11);
    // 00f848  mov ax, word ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf848u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u))));
    // 00f850  add word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf850u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f858:
    X86_TICK(c, 7);
    // 00f858  test dl, 2
    X86_AT(c, 0xf858u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f85b  je 0xf87d
    X86_AT(c, 0xf85bu);
    if (x86_cc(c, 4)) { goto L_f87d; }
    X86_TICK(c, 25);
    // 00f85d  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf85du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f864  add ax, ax
    X86_AT(c, 0xf864u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f867  add word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf867u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f86f  shr eax, 0x10
    X86_AT(c, 0xf86fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f872  add ax, ax
    X86_AT(c, 0xf872u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f875  add word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf875u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f87d:
    X86_TICK(c, 7);
    // 00f87d  call 0xfa24
    X86_AT(c, 0xf87du);
    push32(c, 0xf882u); f_0000fa24(c); X86_RET(c, 0xf882u);
    X86_TICK(c, 18);
    // 00f882  pop esi
    X86_AT(c, 0xf882u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f883  pop ds
    X86_AT(c, 0xf883u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f884  ret 
    X86_AT(c, 0xf884u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf7d2u, "ran off the end of a function");
}
void f_0000f7fe(X86Cpu& c) {
    X86_TICK(c, 13);
    // 00f7fe  mov eax, dword ptr gs:[ebp + 0x384]
    X86_AT(c, 0xf7feu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)));
    // 00f805  mov dword ptr gs:[ebp + 0x35c], eax
    X86_AT(c, 0xf805u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), c.r[0]);
    // 00f80c  test dl, 2
    X86_AT(c, 0xf80cu);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f80f  je 0xf824
    X86_AT(c, 0xf80fu);
    if (x86_cc(c, 4)) { goto L_f824; }
    X86_TICK(c, 14);
    // 00f811  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf811u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f819  shr ax, 1
    X86_AT(c, 0xf819u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 00f81c  add word ptr gs:[ebp + 0x35c], ax
    X86_AT(c, 0xf81cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f824:
    X86_TICK(c, 23);
    // 00f824  push ds
    X86_AT(c, 0xf824u);
    push32(c, c.sreg[3]);
    // 00f825  push esi
    X86_AT(c, 0xf825u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f826  mov byte ptr gs:[ebp + 0x380], 1
    X86_AT(c, 0xf826u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u)), 0x1u);
    // 00f82e  mov eax, dword ptr gs:[ebp + 0x36c]
    X86_AT(c, 0xf82eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)));
    // 00f835  mov dword ptr gs:[ebp + 0x37c], eax
    X86_AT(c, 0xf835u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)), c.r[0]);
    // 00f83c  mov dl, byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf83cu);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u))));
    // 00f843  test dl, 1
    X86_AT(c, 0xf843u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f846  je 0xf858
    X86_AT(c, 0xf846u);
    if (x86_cc(c, 4)) { goto L_f858; }
    X86_TICK(c, 11);
    // 00f848  mov ax, word ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf848u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u))));
    // 00f850  add word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf850u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f858:
    X86_TICK(c, 7);
    // 00f858  test dl, 2
    X86_AT(c, 0xf858u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f85b  je 0xf87d
    X86_AT(c, 0xf85bu);
    if (x86_cc(c, 4)) { goto L_f87d; }
    X86_TICK(c, 25);
    // 00f85d  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf85du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f864  add ax, ax
    X86_AT(c, 0xf864u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f867  add word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf867u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f86f  shr eax, 0x10
    X86_AT(c, 0xf86fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f872  add ax, ax
    X86_AT(c, 0xf872u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f875  add word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf875u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f87d:
    X86_TICK(c, 7);
    // 00f87d  call 0xfa24
    X86_AT(c, 0xf87du);
    push32(c, 0xf882u); f_0000fa24(c); X86_RET(c, 0xf882u);
    X86_TICK(c, 18);
    // 00f882  pop esi
    X86_AT(c, 0xf882u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f883  pop ds
    X86_AT(c, 0xf883u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f884  ret 
    X86_AT(c, 0xf884u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf7feu, "ran off the end of a function");
}
void f_0000f805(X86Cpu& c) {
    X86_TICK(c, 9);
    // 00f805  mov dword ptr gs:[ebp + 0x35c], eax
    X86_AT(c, 0xf805u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), c.r[0]);
    // 00f80c  test dl, 2
    X86_AT(c, 0xf80cu);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f80f  je 0xf824
    X86_AT(c, 0xf80fu);
    if (x86_cc(c, 4)) { goto L_f824; }
    X86_TICK(c, 14);
    // 00f811  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf811u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f819  shr ax, 1
    X86_AT(c, 0xf819u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 00f81c  add word ptr gs:[ebp + 0x35c], ax
    X86_AT(c, 0xf81cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f824:
    X86_TICK(c, 23);
    // 00f824  push ds
    X86_AT(c, 0xf824u);
    push32(c, c.sreg[3]);
    // 00f825  push esi
    X86_AT(c, 0xf825u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f826  mov byte ptr gs:[ebp + 0x380], 1
    X86_AT(c, 0xf826u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u)), 0x1u);
    // 00f82e  mov eax, dword ptr gs:[ebp + 0x36c]
    X86_AT(c, 0xf82eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)));
    // 00f835  mov dword ptr gs:[ebp + 0x37c], eax
    X86_AT(c, 0xf835u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)), c.r[0]);
    // 00f83c  mov dl, byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf83cu);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u))));
    // 00f843  test dl, 1
    X86_AT(c, 0xf843u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f846  je 0xf858
    X86_AT(c, 0xf846u);
    if (x86_cc(c, 4)) { goto L_f858; }
    X86_TICK(c, 11);
    // 00f848  mov ax, word ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf848u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u))));
    // 00f850  add word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf850u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f858:
    X86_TICK(c, 7);
    // 00f858  test dl, 2
    X86_AT(c, 0xf858u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f85b  je 0xf87d
    X86_AT(c, 0xf85bu);
    if (x86_cc(c, 4)) { goto L_f87d; }
    X86_TICK(c, 25);
    // 00f85d  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf85du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f864  add ax, ax
    X86_AT(c, 0xf864u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f867  add word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf867u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f86f  shr eax, 0x10
    X86_AT(c, 0xf86fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f872  add ax, ax
    X86_AT(c, 0xf872u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f875  add word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf875u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f87d:
    X86_TICK(c, 7);
    // 00f87d  call 0xfa24
    X86_AT(c, 0xf87du);
    push32(c, 0xf882u); f_0000fa24(c); X86_RET(c, 0xf882u);
    X86_TICK(c, 18);
    // 00f882  pop esi
    X86_AT(c, 0xf882u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f883  pop ds
    X86_AT(c, 0xf883u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f884  ret 
    X86_AT(c, 0xf884u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf805u, "ran off the end of a function");
}
void f_0000f80c(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00f80c  test dl, 2
    X86_AT(c, 0xf80cu);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f80f  je 0xf824
    X86_AT(c, 0xf80fu);
    if (x86_cc(c, 4)) { goto L_f824; }
    X86_TICK(c, 14);
    // 00f811  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf811u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f819  shr ax, 1
    X86_AT(c, 0xf819u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 00f81c  add word ptr gs:[ebp + 0x35c], ax
    X86_AT(c, 0xf81cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f824:
    X86_TICK(c, 23);
    // 00f824  push ds
    X86_AT(c, 0xf824u);
    push32(c, c.sreg[3]);
    // 00f825  push esi
    X86_AT(c, 0xf825u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f826  mov byte ptr gs:[ebp + 0x380], 1
    X86_AT(c, 0xf826u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u)), 0x1u);
    // 00f82e  mov eax, dword ptr gs:[ebp + 0x36c]
    X86_AT(c, 0xf82eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)));
    // 00f835  mov dword ptr gs:[ebp + 0x37c], eax
    X86_AT(c, 0xf835u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)), c.r[0]);
    // 00f83c  mov dl, byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf83cu);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u))));
    // 00f843  test dl, 1
    X86_AT(c, 0xf843u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f846  je 0xf858
    X86_AT(c, 0xf846u);
    if (x86_cc(c, 4)) { goto L_f858; }
    X86_TICK(c, 11);
    // 00f848  mov ax, word ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf848u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u))));
    // 00f850  add word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf850u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f858:
    X86_TICK(c, 7);
    // 00f858  test dl, 2
    X86_AT(c, 0xf858u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f85b  je 0xf87d
    X86_AT(c, 0xf85bu);
    if (x86_cc(c, 4)) { goto L_f87d; }
    X86_TICK(c, 25);
    // 00f85d  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf85du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f864  add ax, ax
    X86_AT(c, 0xf864u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f867  add word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf867u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f86f  shr eax, 0x10
    X86_AT(c, 0xf86fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f872  add ax, ax
    X86_AT(c, 0xf872u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f875  add word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf875u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f87d:
    X86_TICK(c, 7);
    // 00f87d  call 0xfa24
    X86_AT(c, 0xf87du);
    push32(c, 0xf882u); f_0000fa24(c); X86_RET(c, 0xf882u);
    X86_TICK(c, 18);
    // 00f882  pop esi
    X86_AT(c, 0xf882u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f883  pop ds
    X86_AT(c, 0xf883u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f884  ret 
    X86_AT(c, 0xf884u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf80cu, "ran off the end of a function");
}
}
