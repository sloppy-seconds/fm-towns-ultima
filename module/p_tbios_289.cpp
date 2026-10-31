#include "p_tbios_funcs.h"
namespace p_tbios {
void f_000119b0(X86Cpu& c) {
    X86_TICK(c, 5);
    // 0119b0  jbe 0x119be
    X86_AT(c, 0x119b0u);
    if (x86_cc(c, 6)) { goto L_119be; }
    X86_TICK(c, 6);
    // 0119b2  add dl, 4
    X86_AT(c, 0x119b2u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x4u, 0, 1)); }
    // 0119b5  add edi, 0xf0
    X86_AT(c, 0x119b5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF0u, 0, 4); }
    // 0119bb  sub bl, 3
    X86_AT(c, 0x119bbu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x3u, 0, 1)); }
L_119be:
    X86_TICK(c, 22);
    // 0119be  movzx esi, bl
    X86_AT(c, 0x119beu);
    c.r[6] = g8(c, 3);
    // 0119c1  mov byte ptr gs:[edi + esi*1 + 0xd0], cl
    X86_AT(c, 0x119c1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u)), g8(c, 1));
    // 0119c9  mov al, byte ptr gs:[edi + esi*1 + 0xb0]
    X86_AT(c, 0x119c9u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xB0u))));
    // 0119d1  and eax, 7
    X86_AT(c, 0x119d1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 0119d6  mov bh, byte ptr cs:[eax + 0x135a8]
    X86_AT(c, 0x119d6u);
    s8(c, 7, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x135A8u))));
    // 0119dd  add bh, bh
    X86_AT(c, 0x119ddu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0119df  jae 0x11a08
    X86_AT(c, 0x119dfu);
    if (x86_cc(c, 3)) { goto L_11a08; }
    X86_TICK(c, 73);
    // 0119e1  mov al, byte ptr gs:[edi + esi*1 + 0xc0]
    X86_AT(c, 0x119e1u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC0u))));
    // 0119e9  xor al, 0x7f
    X86_AT(c, 0x119e9u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0119eb  mul cl
    X86_AT(c, 0x119ebu);
    x86_mul(c, g8(c, 1), 1);
    // 0119ed  shr eax, 7
    X86_AT(c, 0x119edu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0119f0  inc eax
    X86_AT(c, 0x119f0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0119f1  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x119f1u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 0119f9  shr eax, 7
    X86_AT(c, 0x119f9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0119fc  inc eax
    X86_AT(c, 0x119fcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0119fd  xor al, 0x7f
    X86_AT(c, 0x119fdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0119ff  mov ah, 0x40
    X86_AT(c, 0x119ffu);
    s8(c, 4, 0x40u);
    // 011a01  add ah, bl
    X86_AT(c, 0x11a01u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a03  call 0x11bf0
    X86_AT(c, 0x11a03u);
    push32(c, 0x11a08u); f_00011bf0(c); X86_RET(c, 0x11a08u);
L_11a08:
    X86_TICK(c, 7);
    // 011a08  add bh, bh
    X86_AT(c, 0x11a08u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a0a  jae 0x11a33
    X86_AT(c, 0x11a0au);
    if (x86_cc(c, 3)) { goto L_11a33; }
    X86_TICK(c, 73);
    // 011a0c  mov al, byte ptr gs:[edi + esi*1 + 0xc4]
    X86_AT(c, 0x11a0cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC4u))));
    // 011a14  xor al, 0x7f
    X86_AT(c, 0x11a14u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a16  mul cl
    X86_AT(c, 0x11a16u);
    x86_mul(c, g8(c, 1), 1);
    // 011a18  shr eax, 7
    X86_AT(c, 0x11a18u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a1b  inc eax
    X86_AT(c, 0x11a1bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a1c  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a1cu);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a24  shr eax, 7
    X86_AT(c, 0x11a24u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a27  inc eax
    X86_AT(c, 0x11a27u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a28  xor al, 0x7f
    X86_AT(c, 0x11a28u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a2a  mov ah, 0x44
    X86_AT(c, 0x11a2au);
    s8(c, 4, 0x44u);
    // 011a2c  add ah, bl
    X86_AT(c, 0x11a2cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a2e  call 0x11bf0
    X86_AT(c, 0x11a2eu);
    push32(c, 0x11a33u); f_00011bf0(c); X86_RET(c, 0x11a33u);
L_11a33:
    X86_TICK(c, 7);
    // 011a33  add bh, bh
    X86_AT(c, 0x11a33u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a35  jae 0x11a5e
    X86_AT(c, 0x11a35u);
    if (x86_cc(c, 3)) { goto L_11a5e; }
    X86_TICK(c, 73);
    // 011a37  mov al, byte ptr gs:[edi + esi*1 + 0xc8]
    X86_AT(c, 0x11a37u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC8u))));
    // 011a3f  xor al, 0x7f
    X86_AT(c, 0x11a3fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a41  mul cl
    X86_AT(c, 0x11a41u);
    x86_mul(c, g8(c, 1), 1);
    // 011a43  shr eax, 7
    X86_AT(c, 0x11a43u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a46  inc eax
    X86_AT(c, 0x11a46u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a47  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a47u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a4f  shr eax, 7
    X86_AT(c, 0x11a4fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a52  inc eax
    X86_AT(c, 0x11a52u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a53  xor al, 0x7f
    X86_AT(c, 0x11a53u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a55  mov ah, 0x48
    X86_AT(c, 0x11a55u);
    s8(c, 4, 0x48u);
    // 011a57  add ah, bl
    X86_AT(c, 0x11a57u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a59  call 0x11bf0
    X86_AT(c, 0x11a59u);
    push32(c, 0x11a5eu); f_00011bf0(c); X86_RET(c, 0x11a5eu);
L_11a5e:
    X86_TICK(c, 7);
    // 011a5e  add bh, bh
    X86_AT(c, 0x11a5eu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a60  jae 0x11a89
    X86_AT(c, 0x11a60u);
    if (x86_cc(c, 3)) { goto L_11a89; }
    X86_TICK(c, 73);
    // 011a62  mov al, byte ptr gs:[edi + esi*1 + 0xcc]
    X86_AT(c, 0x11a62u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xCCu))));
    // 011a6a  xor al, 0x7f
    X86_AT(c, 0x11a6au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a6c  mul cl
    X86_AT(c, 0x11a6cu);
    x86_mul(c, g8(c, 1), 1);
    // 011a6e  shr eax, 7
    X86_AT(c, 0x11a6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a71  inc eax
    X86_AT(c, 0x11a71u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a72  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a72u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a7a  shr eax, 7
    X86_AT(c, 0x11a7au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a7d  inc eax
    X86_AT(c, 0x11a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a7e  xor al, 0x7f
    X86_AT(c, 0x11a7eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a80  mov ah, 0x4c
    X86_AT(c, 0x11a80u);
    s8(c, 4, 0x4Cu);
    // 011a82  add ah, bl
    X86_AT(c, 0x11a82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a84  call 0x11bf0
    X86_AT(c, 0x11a84u);
    push32(c, 0x11a89u); f_00011bf0(c); X86_RET(c, 0x11a89u);
L_11a89:
    X86_TICK(c, 36);
    // 011a89  popal 
    X86_AT(c, 0x11a89u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011a8a  xor al, al
    X86_AT(c, 0x11a8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011a8c  ret 
    X86_AT(c, 0x11a8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x119b0u, "ran off the end of a function");
}
void f_000119b2(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0119b2  add dl, 4
    X86_AT(c, 0x119b2u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x4u, 0, 1)); }
    // 0119b5  add edi, 0xf0
    X86_AT(c, 0x119b5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF0u, 0, 4); }
    // 0119bb  sub bl, 3
    X86_AT(c, 0x119bbu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x3u, 0, 1)); }
    // 0119be  movzx esi, bl
    X86_AT(c, 0x119beu);
    c.r[6] = g8(c, 3);
    // 0119c1  mov byte ptr gs:[edi + esi*1 + 0xd0], cl
    X86_AT(c, 0x119c1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u)), g8(c, 1));
    // 0119c9  mov al, byte ptr gs:[edi + esi*1 + 0xb0]
    X86_AT(c, 0x119c9u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xB0u))));
    // 0119d1  and eax, 7
    X86_AT(c, 0x119d1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 0119d6  mov bh, byte ptr cs:[eax + 0x135a8]
    X86_AT(c, 0x119d6u);
    s8(c, 7, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x135A8u))));
    // 0119dd  add bh, bh
    X86_AT(c, 0x119ddu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0119df  jae 0x11a08
    X86_AT(c, 0x119dfu);
    if (x86_cc(c, 3)) { goto L_11a08; }
    X86_TICK(c, 73);
    // 0119e1  mov al, byte ptr gs:[edi + esi*1 + 0xc0]
    X86_AT(c, 0x119e1u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC0u))));
    // 0119e9  xor al, 0x7f
    X86_AT(c, 0x119e9u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0119eb  mul cl
    X86_AT(c, 0x119ebu);
    x86_mul(c, g8(c, 1), 1);
    // 0119ed  shr eax, 7
    X86_AT(c, 0x119edu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0119f0  inc eax
    X86_AT(c, 0x119f0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0119f1  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x119f1u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 0119f9  shr eax, 7
    X86_AT(c, 0x119f9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0119fc  inc eax
    X86_AT(c, 0x119fcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0119fd  xor al, 0x7f
    X86_AT(c, 0x119fdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0119ff  mov ah, 0x40
    X86_AT(c, 0x119ffu);
    s8(c, 4, 0x40u);
    // 011a01  add ah, bl
    X86_AT(c, 0x11a01u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a03  call 0x11bf0
    X86_AT(c, 0x11a03u);
    push32(c, 0x11a08u); f_00011bf0(c); X86_RET(c, 0x11a08u);
L_11a08:
    X86_TICK(c, 7);
    // 011a08  add bh, bh
    X86_AT(c, 0x11a08u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a0a  jae 0x11a33
    X86_AT(c, 0x11a0au);
    if (x86_cc(c, 3)) { goto L_11a33; }
    X86_TICK(c, 73);
    // 011a0c  mov al, byte ptr gs:[edi + esi*1 + 0xc4]
    X86_AT(c, 0x11a0cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC4u))));
    // 011a14  xor al, 0x7f
    X86_AT(c, 0x11a14u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a16  mul cl
    X86_AT(c, 0x11a16u);
    x86_mul(c, g8(c, 1), 1);
    // 011a18  shr eax, 7
    X86_AT(c, 0x11a18u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a1b  inc eax
    X86_AT(c, 0x11a1bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a1c  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a1cu);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a24  shr eax, 7
    X86_AT(c, 0x11a24u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a27  inc eax
    X86_AT(c, 0x11a27u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a28  xor al, 0x7f
    X86_AT(c, 0x11a28u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a2a  mov ah, 0x44
    X86_AT(c, 0x11a2au);
    s8(c, 4, 0x44u);
    // 011a2c  add ah, bl
    X86_AT(c, 0x11a2cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a2e  call 0x11bf0
    X86_AT(c, 0x11a2eu);
    push32(c, 0x11a33u); f_00011bf0(c); X86_RET(c, 0x11a33u);
L_11a33:
    X86_TICK(c, 7);
    // 011a33  add bh, bh
    X86_AT(c, 0x11a33u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a35  jae 0x11a5e
    X86_AT(c, 0x11a35u);
    if (x86_cc(c, 3)) { goto L_11a5e; }
    X86_TICK(c, 73);
    // 011a37  mov al, byte ptr gs:[edi + esi*1 + 0xc8]
    X86_AT(c, 0x11a37u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC8u))));
    // 011a3f  xor al, 0x7f
    X86_AT(c, 0x11a3fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a41  mul cl
    X86_AT(c, 0x11a41u);
    x86_mul(c, g8(c, 1), 1);
    // 011a43  shr eax, 7
    X86_AT(c, 0x11a43u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a46  inc eax
    X86_AT(c, 0x11a46u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a47  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a47u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a4f  shr eax, 7
    X86_AT(c, 0x11a4fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a52  inc eax
    X86_AT(c, 0x11a52u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a53  xor al, 0x7f
    X86_AT(c, 0x11a53u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a55  mov ah, 0x48
    X86_AT(c, 0x11a55u);
    s8(c, 4, 0x48u);
    // 011a57  add ah, bl
    X86_AT(c, 0x11a57u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a59  call 0x11bf0
    X86_AT(c, 0x11a59u);
    push32(c, 0x11a5eu); f_00011bf0(c); X86_RET(c, 0x11a5eu);
L_11a5e:
    X86_TICK(c, 7);
    // 011a5e  add bh, bh
    X86_AT(c, 0x11a5eu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a60  jae 0x11a89
    X86_AT(c, 0x11a60u);
    if (x86_cc(c, 3)) { goto L_11a89; }
    X86_TICK(c, 73);
    // 011a62  mov al, byte ptr gs:[edi + esi*1 + 0xcc]
    X86_AT(c, 0x11a62u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xCCu))));
    // 011a6a  xor al, 0x7f
    X86_AT(c, 0x11a6au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a6c  mul cl
    X86_AT(c, 0x11a6cu);
    x86_mul(c, g8(c, 1), 1);
    // 011a6e  shr eax, 7
    X86_AT(c, 0x11a6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a71  inc eax
    X86_AT(c, 0x11a71u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a72  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a72u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a7a  shr eax, 7
    X86_AT(c, 0x11a7au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a7d  inc eax
    X86_AT(c, 0x11a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a7e  xor al, 0x7f
    X86_AT(c, 0x11a7eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a80  mov ah, 0x4c
    X86_AT(c, 0x11a80u);
    s8(c, 4, 0x4Cu);
    // 011a82  add ah, bl
    X86_AT(c, 0x11a82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a84  call 0x11bf0
    X86_AT(c, 0x11a84u);
    push32(c, 0x11a89u); f_00011bf0(c); X86_RET(c, 0x11a89u);
L_11a89:
    X86_TICK(c, 36);
    // 011a89  popal 
    X86_AT(c, 0x11a89u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011a8a  xor al, al
    X86_AT(c, 0x11a8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011a8c  ret 
    X86_AT(c, 0x11a8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x119b2u, "ran off the end of a function");
}
void f_000119b5(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0119b5  add edi, 0xf0
    X86_AT(c, 0x119b5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF0u, 0, 4); }
    // 0119bb  sub bl, 3
    X86_AT(c, 0x119bbu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x3u, 0, 1)); }
    // 0119be  movzx esi, bl
    X86_AT(c, 0x119beu);
    c.r[6] = g8(c, 3);
    // 0119c1  mov byte ptr gs:[edi + esi*1 + 0xd0], cl
    X86_AT(c, 0x119c1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u)), g8(c, 1));
    // 0119c9  mov al, byte ptr gs:[edi + esi*1 + 0xb0]
    X86_AT(c, 0x119c9u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xB0u))));
    // 0119d1  and eax, 7
    X86_AT(c, 0x119d1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 0119d6  mov bh, byte ptr cs:[eax + 0x135a8]
    X86_AT(c, 0x119d6u);
    s8(c, 7, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x135A8u))));
    // 0119dd  add bh, bh
    X86_AT(c, 0x119ddu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0119df  jae 0x11a08
    X86_AT(c, 0x119dfu);
    if (x86_cc(c, 3)) { goto L_11a08; }
    X86_TICK(c, 73);
    // 0119e1  mov al, byte ptr gs:[edi + esi*1 + 0xc0]
    X86_AT(c, 0x119e1u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC0u))));
    // 0119e9  xor al, 0x7f
    X86_AT(c, 0x119e9u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0119eb  mul cl
    X86_AT(c, 0x119ebu);
    x86_mul(c, g8(c, 1), 1);
    // 0119ed  shr eax, 7
    X86_AT(c, 0x119edu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0119f0  inc eax
    X86_AT(c, 0x119f0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0119f1  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x119f1u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 0119f9  shr eax, 7
    X86_AT(c, 0x119f9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0119fc  inc eax
    X86_AT(c, 0x119fcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0119fd  xor al, 0x7f
    X86_AT(c, 0x119fdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0119ff  mov ah, 0x40
    X86_AT(c, 0x119ffu);
    s8(c, 4, 0x40u);
    // 011a01  add ah, bl
    X86_AT(c, 0x11a01u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a03  call 0x11bf0
    X86_AT(c, 0x11a03u);
    push32(c, 0x11a08u); f_00011bf0(c); X86_RET(c, 0x11a08u);
L_11a08:
    X86_TICK(c, 7);
    // 011a08  add bh, bh
    X86_AT(c, 0x11a08u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a0a  jae 0x11a33
    X86_AT(c, 0x11a0au);
    if (x86_cc(c, 3)) { goto L_11a33; }
    X86_TICK(c, 73);
    // 011a0c  mov al, byte ptr gs:[edi + esi*1 + 0xc4]
    X86_AT(c, 0x11a0cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC4u))));
    // 011a14  xor al, 0x7f
    X86_AT(c, 0x11a14u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a16  mul cl
    X86_AT(c, 0x11a16u);
    x86_mul(c, g8(c, 1), 1);
    // 011a18  shr eax, 7
    X86_AT(c, 0x11a18u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a1b  inc eax
    X86_AT(c, 0x11a1bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a1c  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a1cu);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a24  shr eax, 7
    X86_AT(c, 0x11a24u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a27  inc eax
    X86_AT(c, 0x11a27u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a28  xor al, 0x7f
    X86_AT(c, 0x11a28u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a2a  mov ah, 0x44
    X86_AT(c, 0x11a2au);
    s8(c, 4, 0x44u);
    // 011a2c  add ah, bl
    X86_AT(c, 0x11a2cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a2e  call 0x11bf0
    X86_AT(c, 0x11a2eu);
    push32(c, 0x11a33u); f_00011bf0(c); X86_RET(c, 0x11a33u);
L_11a33:
    X86_TICK(c, 7);
    // 011a33  add bh, bh
    X86_AT(c, 0x11a33u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a35  jae 0x11a5e
    X86_AT(c, 0x11a35u);
    if (x86_cc(c, 3)) { goto L_11a5e; }
    X86_TICK(c, 73);
    // 011a37  mov al, byte ptr gs:[edi + esi*1 + 0xc8]
    X86_AT(c, 0x11a37u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC8u))));
    // 011a3f  xor al, 0x7f
    X86_AT(c, 0x11a3fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a41  mul cl
    X86_AT(c, 0x11a41u);
    x86_mul(c, g8(c, 1), 1);
    // 011a43  shr eax, 7
    X86_AT(c, 0x11a43u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a46  inc eax
    X86_AT(c, 0x11a46u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a47  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a47u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a4f  shr eax, 7
    X86_AT(c, 0x11a4fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a52  inc eax
    X86_AT(c, 0x11a52u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a53  xor al, 0x7f
    X86_AT(c, 0x11a53u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a55  mov ah, 0x48
    X86_AT(c, 0x11a55u);
    s8(c, 4, 0x48u);
    // 011a57  add ah, bl
    X86_AT(c, 0x11a57u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a59  call 0x11bf0
    X86_AT(c, 0x11a59u);
    push32(c, 0x11a5eu); f_00011bf0(c); X86_RET(c, 0x11a5eu);
L_11a5e:
    X86_TICK(c, 7);
    // 011a5e  add bh, bh
    X86_AT(c, 0x11a5eu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a60  jae 0x11a89
    X86_AT(c, 0x11a60u);
    if (x86_cc(c, 3)) { goto L_11a89; }
    X86_TICK(c, 73);
    // 011a62  mov al, byte ptr gs:[edi + esi*1 + 0xcc]
    X86_AT(c, 0x11a62u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xCCu))));
    // 011a6a  xor al, 0x7f
    X86_AT(c, 0x11a6au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a6c  mul cl
    X86_AT(c, 0x11a6cu);
    x86_mul(c, g8(c, 1), 1);
    // 011a6e  shr eax, 7
    X86_AT(c, 0x11a6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a71  inc eax
    X86_AT(c, 0x11a71u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a72  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a72u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a7a  shr eax, 7
    X86_AT(c, 0x11a7au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a7d  inc eax
    X86_AT(c, 0x11a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a7e  xor al, 0x7f
    X86_AT(c, 0x11a7eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a80  mov ah, 0x4c
    X86_AT(c, 0x11a80u);
    s8(c, 4, 0x4Cu);
    // 011a82  add ah, bl
    X86_AT(c, 0x11a82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a84  call 0x11bf0
    X86_AT(c, 0x11a84u);
    push32(c, 0x11a89u); f_00011bf0(c); X86_RET(c, 0x11a89u);
L_11a89:
    X86_TICK(c, 36);
    // 011a89  popal 
    X86_AT(c, 0x11a89u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011a8a  xor al, al
    X86_AT(c, 0x11a8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011a8c  ret 
    X86_AT(c, 0x11a8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x119b5u, "ran off the end of a function");
}
void f_000119bb(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0119bb  sub bl, 3
    X86_AT(c, 0x119bbu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x3u, 0, 1)); }
    // 0119be  movzx esi, bl
    X86_AT(c, 0x119beu);
    c.r[6] = g8(c, 3);
    // 0119c1  mov byte ptr gs:[edi + esi*1 + 0xd0], cl
    X86_AT(c, 0x119c1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u)), g8(c, 1));
    // 0119c9  mov al, byte ptr gs:[edi + esi*1 + 0xb0]
    X86_AT(c, 0x119c9u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xB0u))));
    // 0119d1  and eax, 7
    X86_AT(c, 0x119d1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 0119d6  mov bh, byte ptr cs:[eax + 0x135a8]
    X86_AT(c, 0x119d6u);
    s8(c, 7, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x135A8u))));
    // 0119dd  add bh, bh
    X86_AT(c, 0x119ddu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0119df  jae 0x11a08
    X86_AT(c, 0x119dfu);
    if (x86_cc(c, 3)) { goto L_11a08; }
    X86_TICK(c, 73);
    // 0119e1  mov al, byte ptr gs:[edi + esi*1 + 0xc0]
    X86_AT(c, 0x119e1u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC0u))));
    // 0119e9  xor al, 0x7f
    X86_AT(c, 0x119e9u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0119eb  mul cl
    X86_AT(c, 0x119ebu);
    x86_mul(c, g8(c, 1), 1);
    // 0119ed  shr eax, 7
    X86_AT(c, 0x119edu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0119f0  inc eax
    X86_AT(c, 0x119f0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0119f1  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x119f1u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 0119f9  shr eax, 7
    X86_AT(c, 0x119f9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0119fc  inc eax
    X86_AT(c, 0x119fcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0119fd  xor al, 0x7f
    X86_AT(c, 0x119fdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0119ff  mov ah, 0x40
    X86_AT(c, 0x119ffu);
    s8(c, 4, 0x40u);
    // 011a01  add ah, bl
    X86_AT(c, 0x11a01u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a03  call 0x11bf0
    X86_AT(c, 0x11a03u);
    push32(c, 0x11a08u); f_00011bf0(c); X86_RET(c, 0x11a08u);
L_11a08:
    X86_TICK(c, 7);
    // 011a08  add bh, bh
    X86_AT(c, 0x11a08u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a0a  jae 0x11a33
    X86_AT(c, 0x11a0au);
    if (x86_cc(c, 3)) { goto L_11a33; }
    X86_TICK(c, 73);
    // 011a0c  mov al, byte ptr gs:[edi + esi*1 + 0xc4]
    X86_AT(c, 0x11a0cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC4u))));
    // 011a14  xor al, 0x7f
    X86_AT(c, 0x11a14u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a16  mul cl
    X86_AT(c, 0x11a16u);
    x86_mul(c, g8(c, 1), 1);
    // 011a18  shr eax, 7
    X86_AT(c, 0x11a18u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a1b  inc eax
    X86_AT(c, 0x11a1bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a1c  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a1cu);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a24  shr eax, 7
    X86_AT(c, 0x11a24u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a27  inc eax
    X86_AT(c, 0x11a27u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a28  xor al, 0x7f
    X86_AT(c, 0x11a28u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a2a  mov ah, 0x44
    X86_AT(c, 0x11a2au);
    s8(c, 4, 0x44u);
    // 011a2c  add ah, bl
    X86_AT(c, 0x11a2cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a2e  call 0x11bf0
    X86_AT(c, 0x11a2eu);
    push32(c, 0x11a33u); f_00011bf0(c); X86_RET(c, 0x11a33u);
L_11a33:
    X86_TICK(c, 7);
    // 011a33  add bh, bh
    X86_AT(c, 0x11a33u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a35  jae 0x11a5e
    X86_AT(c, 0x11a35u);
    if (x86_cc(c, 3)) { goto L_11a5e; }
    X86_TICK(c, 73);
    // 011a37  mov al, byte ptr gs:[edi + esi*1 + 0xc8]
    X86_AT(c, 0x11a37u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC8u))));
    // 011a3f  xor al, 0x7f
    X86_AT(c, 0x11a3fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a41  mul cl
    X86_AT(c, 0x11a41u);
    x86_mul(c, g8(c, 1), 1);
    // 011a43  shr eax, 7
    X86_AT(c, 0x11a43u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a46  inc eax
    X86_AT(c, 0x11a46u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a47  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a47u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a4f  shr eax, 7
    X86_AT(c, 0x11a4fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a52  inc eax
    X86_AT(c, 0x11a52u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a53  xor al, 0x7f
    X86_AT(c, 0x11a53u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a55  mov ah, 0x48
    X86_AT(c, 0x11a55u);
    s8(c, 4, 0x48u);
    // 011a57  add ah, bl
    X86_AT(c, 0x11a57u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a59  call 0x11bf0
    X86_AT(c, 0x11a59u);
    push32(c, 0x11a5eu); f_00011bf0(c); X86_RET(c, 0x11a5eu);
L_11a5e:
    X86_TICK(c, 7);
    // 011a5e  add bh, bh
    X86_AT(c, 0x11a5eu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a60  jae 0x11a89
    X86_AT(c, 0x11a60u);
    if (x86_cc(c, 3)) { goto L_11a89; }
    X86_TICK(c, 73);
    // 011a62  mov al, byte ptr gs:[edi + esi*1 + 0xcc]
    X86_AT(c, 0x11a62u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xCCu))));
    // 011a6a  xor al, 0x7f
    X86_AT(c, 0x11a6au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a6c  mul cl
    X86_AT(c, 0x11a6cu);
    x86_mul(c, g8(c, 1), 1);
    // 011a6e  shr eax, 7
    X86_AT(c, 0x11a6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a71  inc eax
    X86_AT(c, 0x11a71u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a72  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a72u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a7a  shr eax, 7
    X86_AT(c, 0x11a7au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a7d  inc eax
    X86_AT(c, 0x11a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a7e  xor al, 0x7f
    X86_AT(c, 0x11a7eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a80  mov ah, 0x4c
    X86_AT(c, 0x11a80u);
    s8(c, 4, 0x4Cu);
    // 011a82  add ah, bl
    X86_AT(c, 0x11a82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a84  call 0x11bf0
    X86_AT(c, 0x11a84u);
    push32(c, 0x11a89u); f_00011bf0(c); X86_RET(c, 0x11a89u);
L_11a89:
    X86_TICK(c, 36);
    // 011a89  popal 
    X86_AT(c, 0x11a89u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011a8a  xor al, al
    X86_AT(c, 0x11a8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011a8c  ret 
    X86_AT(c, 0x11a8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x119bbu, "ran off the end of a function");
}
void f_000119be(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0119be  movzx esi, bl
    X86_AT(c, 0x119beu);
    c.r[6] = g8(c, 3);
    // 0119c1  mov byte ptr gs:[edi + esi*1 + 0xd0], cl
    X86_AT(c, 0x119c1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u)), g8(c, 1));
    // 0119c9  mov al, byte ptr gs:[edi + esi*1 + 0xb0]
    X86_AT(c, 0x119c9u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xB0u))));
    // 0119d1  and eax, 7
    X86_AT(c, 0x119d1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 0119d6  mov bh, byte ptr cs:[eax + 0x135a8]
    X86_AT(c, 0x119d6u);
    s8(c, 7, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x135A8u))));
    // 0119dd  add bh, bh
    X86_AT(c, 0x119ddu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0119df  jae 0x11a08
    X86_AT(c, 0x119dfu);
    if (x86_cc(c, 3)) { goto L_11a08; }
    X86_TICK(c, 73);
    // 0119e1  mov al, byte ptr gs:[edi + esi*1 + 0xc0]
    X86_AT(c, 0x119e1u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC0u))));
    // 0119e9  xor al, 0x7f
    X86_AT(c, 0x119e9u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0119eb  mul cl
    X86_AT(c, 0x119ebu);
    x86_mul(c, g8(c, 1), 1);
    // 0119ed  shr eax, 7
    X86_AT(c, 0x119edu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0119f0  inc eax
    X86_AT(c, 0x119f0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0119f1  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x119f1u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 0119f9  shr eax, 7
    X86_AT(c, 0x119f9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0119fc  inc eax
    X86_AT(c, 0x119fcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0119fd  xor al, 0x7f
    X86_AT(c, 0x119fdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0119ff  mov ah, 0x40
    X86_AT(c, 0x119ffu);
    s8(c, 4, 0x40u);
    // 011a01  add ah, bl
    X86_AT(c, 0x11a01u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a03  call 0x11bf0
    X86_AT(c, 0x11a03u);
    push32(c, 0x11a08u); f_00011bf0(c); X86_RET(c, 0x11a08u);
L_11a08:
    X86_TICK(c, 7);
    // 011a08  add bh, bh
    X86_AT(c, 0x11a08u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a0a  jae 0x11a33
    X86_AT(c, 0x11a0au);
    if (x86_cc(c, 3)) { goto L_11a33; }
    X86_TICK(c, 73);
    // 011a0c  mov al, byte ptr gs:[edi + esi*1 + 0xc4]
    X86_AT(c, 0x11a0cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC4u))));
    // 011a14  xor al, 0x7f
    X86_AT(c, 0x11a14u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a16  mul cl
    X86_AT(c, 0x11a16u);
    x86_mul(c, g8(c, 1), 1);
    // 011a18  shr eax, 7
    X86_AT(c, 0x11a18u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a1b  inc eax
    X86_AT(c, 0x11a1bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a1c  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a1cu);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a24  shr eax, 7
    X86_AT(c, 0x11a24u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a27  inc eax
    X86_AT(c, 0x11a27u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a28  xor al, 0x7f
    X86_AT(c, 0x11a28u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a2a  mov ah, 0x44
    X86_AT(c, 0x11a2au);
    s8(c, 4, 0x44u);
    // 011a2c  add ah, bl
    X86_AT(c, 0x11a2cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a2e  call 0x11bf0
    X86_AT(c, 0x11a2eu);
    push32(c, 0x11a33u); f_00011bf0(c); X86_RET(c, 0x11a33u);
L_11a33:
    X86_TICK(c, 7);
    // 011a33  add bh, bh
    X86_AT(c, 0x11a33u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a35  jae 0x11a5e
    X86_AT(c, 0x11a35u);
    if (x86_cc(c, 3)) { goto L_11a5e; }
    X86_TICK(c, 73);
    // 011a37  mov al, byte ptr gs:[edi + esi*1 + 0xc8]
    X86_AT(c, 0x11a37u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC8u))));
    // 011a3f  xor al, 0x7f
    X86_AT(c, 0x11a3fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a41  mul cl
    X86_AT(c, 0x11a41u);
    x86_mul(c, g8(c, 1), 1);
    // 011a43  shr eax, 7
    X86_AT(c, 0x11a43u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a46  inc eax
    X86_AT(c, 0x11a46u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a47  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a47u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a4f  shr eax, 7
    X86_AT(c, 0x11a4fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a52  inc eax
    X86_AT(c, 0x11a52u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a53  xor al, 0x7f
    X86_AT(c, 0x11a53u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a55  mov ah, 0x48
    X86_AT(c, 0x11a55u);
    s8(c, 4, 0x48u);
    // 011a57  add ah, bl
    X86_AT(c, 0x11a57u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a59  call 0x11bf0
    X86_AT(c, 0x11a59u);
    push32(c, 0x11a5eu); f_00011bf0(c); X86_RET(c, 0x11a5eu);
L_11a5e:
    X86_TICK(c, 7);
    // 011a5e  add bh, bh
    X86_AT(c, 0x11a5eu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a60  jae 0x11a89
    X86_AT(c, 0x11a60u);
    if (x86_cc(c, 3)) { goto L_11a89; }
    X86_TICK(c, 73);
    // 011a62  mov al, byte ptr gs:[edi + esi*1 + 0xcc]
    X86_AT(c, 0x11a62u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xCCu))));
    // 011a6a  xor al, 0x7f
    X86_AT(c, 0x11a6au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a6c  mul cl
    X86_AT(c, 0x11a6cu);
    x86_mul(c, g8(c, 1), 1);
    // 011a6e  shr eax, 7
    X86_AT(c, 0x11a6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a71  inc eax
    X86_AT(c, 0x11a71u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a72  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a72u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a7a  shr eax, 7
    X86_AT(c, 0x11a7au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a7d  inc eax
    X86_AT(c, 0x11a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a7e  xor al, 0x7f
    X86_AT(c, 0x11a7eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a80  mov ah, 0x4c
    X86_AT(c, 0x11a80u);
    s8(c, 4, 0x4Cu);
    // 011a82  add ah, bl
    X86_AT(c, 0x11a82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a84  call 0x11bf0
    X86_AT(c, 0x11a84u);
    push32(c, 0x11a89u); f_00011bf0(c); X86_RET(c, 0x11a89u);
L_11a89:
    X86_TICK(c, 36);
    // 011a89  popal 
    X86_AT(c, 0x11a89u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011a8a  xor al, al
    X86_AT(c, 0x11a8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011a8c  ret 
    X86_AT(c, 0x11a8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x119beu, "ran off the end of a function");
}
void f_000119c1(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0119c1  mov byte ptr gs:[edi + esi*1 + 0xd0], cl
    X86_AT(c, 0x119c1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u)), g8(c, 1));
    // 0119c9  mov al, byte ptr gs:[edi + esi*1 + 0xb0]
    X86_AT(c, 0x119c9u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xB0u))));
    // 0119d1  and eax, 7
    X86_AT(c, 0x119d1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 0119d6  mov bh, byte ptr cs:[eax + 0x135a8]
    X86_AT(c, 0x119d6u);
    s8(c, 7, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x135A8u))));
    // 0119dd  add bh, bh
    X86_AT(c, 0x119ddu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0119df  jae 0x11a08
    X86_AT(c, 0x119dfu);
    if (x86_cc(c, 3)) { goto L_11a08; }
    X86_TICK(c, 73);
    // 0119e1  mov al, byte ptr gs:[edi + esi*1 + 0xc0]
    X86_AT(c, 0x119e1u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC0u))));
    // 0119e9  xor al, 0x7f
    X86_AT(c, 0x119e9u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0119eb  mul cl
    X86_AT(c, 0x119ebu);
    x86_mul(c, g8(c, 1), 1);
    // 0119ed  shr eax, 7
    X86_AT(c, 0x119edu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0119f0  inc eax
    X86_AT(c, 0x119f0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0119f1  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x119f1u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 0119f9  shr eax, 7
    X86_AT(c, 0x119f9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0119fc  inc eax
    X86_AT(c, 0x119fcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0119fd  xor al, 0x7f
    X86_AT(c, 0x119fdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0119ff  mov ah, 0x40
    X86_AT(c, 0x119ffu);
    s8(c, 4, 0x40u);
    // 011a01  add ah, bl
    X86_AT(c, 0x11a01u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a03  call 0x11bf0
    X86_AT(c, 0x11a03u);
    push32(c, 0x11a08u); f_00011bf0(c); X86_RET(c, 0x11a08u);
L_11a08:
    X86_TICK(c, 7);
    // 011a08  add bh, bh
    X86_AT(c, 0x11a08u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a0a  jae 0x11a33
    X86_AT(c, 0x11a0au);
    if (x86_cc(c, 3)) { goto L_11a33; }
    X86_TICK(c, 73);
    // 011a0c  mov al, byte ptr gs:[edi + esi*1 + 0xc4]
    X86_AT(c, 0x11a0cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC4u))));
    // 011a14  xor al, 0x7f
    X86_AT(c, 0x11a14u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a16  mul cl
    X86_AT(c, 0x11a16u);
    x86_mul(c, g8(c, 1), 1);
    // 011a18  shr eax, 7
    X86_AT(c, 0x11a18u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a1b  inc eax
    X86_AT(c, 0x11a1bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a1c  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a1cu);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a24  shr eax, 7
    X86_AT(c, 0x11a24u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a27  inc eax
    X86_AT(c, 0x11a27u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a28  xor al, 0x7f
    X86_AT(c, 0x11a28u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a2a  mov ah, 0x44
    X86_AT(c, 0x11a2au);
    s8(c, 4, 0x44u);
    // 011a2c  add ah, bl
    X86_AT(c, 0x11a2cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a2e  call 0x11bf0
    X86_AT(c, 0x11a2eu);
    push32(c, 0x11a33u); f_00011bf0(c); X86_RET(c, 0x11a33u);
L_11a33:
    X86_TICK(c, 7);
    // 011a33  add bh, bh
    X86_AT(c, 0x11a33u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a35  jae 0x11a5e
    X86_AT(c, 0x11a35u);
    if (x86_cc(c, 3)) { goto L_11a5e; }
    X86_TICK(c, 73);
    // 011a37  mov al, byte ptr gs:[edi + esi*1 + 0xc8]
    X86_AT(c, 0x11a37u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC8u))));
    // 011a3f  xor al, 0x7f
    X86_AT(c, 0x11a3fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a41  mul cl
    X86_AT(c, 0x11a41u);
    x86_mul(c, g8(c, 1), 1);
    // 011a43  shr eax, 7
    X86_AT(c, 0x11a43u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a46  inc eax
    X86_AT(c, 0x11a46u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a47  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a47u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a4f  shr eax, 7
    X86_AT(c, 0x11a4fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a52  inc eax
    X86_AT(c, 0x11a52u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a53  xor al, 0x7f
    X86_AT(c, 0x11a53u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a55  mov ah, 0x48
    X86_AT(c, 0x11a55u);
    s8(c, 4, 0x48u);
    // 011a57  add ah, bl
    X86_AT(c, 0x11a57u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a59  call 0x11bf0
    X86_AT(c, 0x11a59u);
    push32(c, 0x11a5eu); f_00011bf0(c); X86_RET(c, 0x11a5eu);
L_11a5e:
    X86_TICK(c, 7);
    // 011a5e  add bh, bh
    X86_AT(c, 0x11a5eu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a60  jae 0x11a89
    X86_AT(c, 0x11a60u);
    if (x86_cc(c, 3)) { goto L_11a89; }
    X86_TICK(c, 73);
    // 011a62  mov al, byte ptr gs:[edi + esi*1 + 0xcc]
    X86_AT(c, 0x11a62u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xCCu))));
    // 011a6a  xor al, 0x7f
    X86_AT(c, 0x11a6au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a6c  mul cl
    X86_AT(c, 0x11a6cu);
    x86_mul(c, g8(c, 1), 1);
    // 011a6e  shr eax, 7
    X86_AT(c, 0x11a6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a71  inc eax
    X86_AT(c, 0x11a71u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a72  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a72u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a7a  shr eax, 7
    X86_AT(c, 0x11a7au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a7d  inc eax
    X86_AT(c, 0x11a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a7e  xor al, 0x7f
    X86_AT(c, 0x11a7eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a80  mov ah, 0x4c
    X86_AT(c, 0x11a80u);
    s8(c, 4, 0x4Cu);
    // 011a82  add ah, bl
    X86_AT(c, 0x11a82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a84  call 0x11bf0
    X86_AT(c, 0x11a84u);
    push32(c, 0x11a89u); f_00011bf0(c); X86_RET(c, 0x11a89u);
L_11a89:
    X86_TICK(c, 36);
    // 011a89  popal 
    X86_AT(c, 0x11a89u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011a8a  xor al, al
    X86_AT(c, 0x11a8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011a8c  ret 
    X86_AT(c, 0x11a8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x119c1u, "ran off the end of a function");
}
void f_000119c9(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0119c9  mov al, byte ptr gs:[edi + esi*1 + 0xb0]
    X86_AT(c, 0x119c9u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xB0u))));
    // 0119d1  and eax, 7
    X86_AT(c, 0x119d1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 0119d6  mov bh, byte ptr cs:[eax + 0x135a8]
    X86_AT(c, 0x119d6u);
    s8(c, 7, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x135A8u))));
    // 0119dd  add bh, bh
    X86_AT(c, 0x119ddu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0119df  jae 0x11a08
    X86_AT(c, 0x119dfu);
    if (x86_cc(c, 3)) { goto L_11a08; }
    X86_TICK(c, 73);
    // 0119e1  mov al, byte ptr gs:[edi + esi*1 + 0xc0]
    X86_AT(c, 0x119e1u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC0u))));
    // 0119e9  xor al, 0x7f
    X86_AT(c, 0x119e9u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0119eb  mul cl
    X86_AT(c, 0x119ebu);
    x86_mul(c, g8(c, 1), 1);
    // 0119ed  shr eax, 7
    X86_AT(c, 0x119edu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0119f0  inc eax
    X86_AT(c, 0x119f0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0119f1  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x119f1u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 0119f9  shr eax, 7
    X86_AT(c, 0x119f9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0119fc  inc eax
    X86_AT(c, 0x119fcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0119fd  xor al, 0x7f
    X86_AT(c, 0x119fdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0119ff  mov ah, 0x40
    X86_AT(c, 0x119ffu);
    s8(c, 4, 0x40u);
    // 011a01  add ah, bl
    X86_AT(c, 0x11a01u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a03  call 0x11bf0
    X86_AT(c, 0x11a03u);
    push32(c, 0x11a08u); f_00011bf0(c); X86_RET(c, 0x11a08u);
L_11a08:
    X86_TICK(c, 7);
    // 011a08  add bh, bh
    X86_AT(c, 0x11a08u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a0a  jae 0x11a33
    X86_AT(c, 0x11a0au);
    if (x86_cc(c, 3)) { goto L_11a33; }
    X86_TICK(c, 73);
    // 011a0c  mov al, byte ptr gs:[edi + esi*1 + 0xc4]
    X86_AT(c, 0x11a0cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC4u))));
    // 011a14  xor al, 0x7f
    X86_AT(c, 0x11a14u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a16  mul cl
    X86_AT(c, 0x11a16u);
    x86_mul(c, g8(c, 1), 1);
    // 011a18  shr eax, 7
    X86_AT(c, 0x11a18u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a1b  inc eax
    X86_AT(c, 0x11a1bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a1c  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a1cu);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a24  shr eax, 7
    X86_AT(c, 0x11a24u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a27  inc eax
    X86_AT(c, 0x11a27u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a28  xor al, 0x7f
    X86_AT(c, 0x11a28u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a2a  mov ah, 0x44
    X86_AT(c, 0x11a2au);
    s8(c, 4, 0x44u);
    // 011a2c  add ah, bl
    X86_AT(c, 0x11a2cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a2e  call 0x11bf0
    X86_AT(c, 0x11a2eu);
    push32(c, 0x11a33u); f_00011bf0(c); X86_RET(c, 0x11a33u);
L_11a33:
    X86_TICK(c, 7);
    // 011a33  add bh, bh
    X86_AT(c, 0x11a33u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a35  jae 0x11a5e
    X86_AT(c, 0x11a35u);
    if (x86_cc(c, 3)) { goto L_11a5e; }
    X86_TICK(c, 73);
    // 011a37  mov al, byte ptr gs:[edi + esi*1 + 0xc8]
    X86_AT(c, 0x11a37u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC8u))));
    // 011a3f  xor al, 0x7f
    X86_AT(c, 0x11a3fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a41  mul cl
    X86_AT(c, 0x11a41u);
    x86_mul(c, g8(c, 1), 1);
    // 011a43  shr eax, 7
    X86_AT(c, 0x11a43u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a46  inc eax
    X86_AT(c, 0x11a46u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a47  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a47u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a4f  shr eax, 7
    X86_AT(c, 0x11a4fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a52  inc eax
    X86_AT(c, 0x11a52u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a53  xor al, 0x7f
    X86_AT(c, 0x11a53u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a55  mov ah, 0x48
    X86_AT(c, 0x11a55u);
    s8(c, 4, 0x48u);
    // 011a57  add ah, bl
    X86_AT(c, 0x11a57u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a59  call 0x11bf0
    X86_AT(c, 0x11a59u);
    push32(c, 0x11a5eu); f_00011bf0(c); X86_RET(c, 0x11a5eu);
L_11a5e:
    X86_TICK(c, 7);
    // 011a5e  add bh, bh
    X86_AT(c, 0x11a5eu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a60  jae 0x11a89
    X86_AT(c, 0x11a60u);
    if (x86_cc(c, 3)) { goto L_11a89; }
    X86_TICK(c, 73);
    // 011a62  mov al, byte ptr gs:[edi + esi*1 + 0xcc]
    X86_AT(c, 0x11a62u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xCCu))));
    // 011a6a  xor al, 0x7f
    X86_AT(c, 0x11a6au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a6c  mul cl
    X86_AT(c, 0x11a6cu);
    x86_mul(c, g8(c, 1), 1);
    // 011a6e  shr eax, 7
    X86_AT(c, 0x11a6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a71  inc eax
    X86_AT(c, 0x11a71u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a72  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a72u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a7a  shr eax, 7
    X86_AT(c, 0x11a7au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a7d  inc eax
    X86_AT(c, 0x11a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a7e  xor al, 0x7f
    X86_AT(c, 0x11a7eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a80  mov ah, 0x4c
    X86_AT(c, 0x11a80u);
    s8(c, 4, 0x4Cu);
    // 011a82  add ah, bl
    X86_AT(c, 0x11a82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a84  call 0x11bf0
    X86_AT(c, 0x11a84u);
    push32(c, 0x11a89u); f_00011bf0(c); X86_RET(c, 0x11a89u);
L_11a89:
    X86_TICK(c, 36);
    // 011a89  popal 
    X86_AT(c, 0x11a89u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011a8a  xor al, al
    X86_AT(c, 0x11a8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011a8c  ret 
    X86_AT(c, 0x11a8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x119c9u, "ran off the end of a function");
}
void f_000119d1(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0119d1  and eax, 7
    X86_AT(c, 0x119d1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 0119d6  mov bh, byte ptr cs:[eax + 0x135a8]
    X86_AT(c, 0x119d6u);
    s8(c, 7, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x135A8u))));
    // 0119dd  add bh, bh
    X86_AT(c, 0x119ddu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0119df  jae 0x11a08
    X86_AT(c, 0x119dfu);
    if (x86_cc(c, 3)) { goto L_11a08; }
    X86_TICK(c, 73);
    // 0119e1  mov al, byte ptr gs:[edi + esi*1 + 0xc0]
    X86_AT(c, 0x119e1u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC0u))));
    // 0119e9  xor al, 0x7f
    X86_AT(c, 0x119e9u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0119eb  mul cl
    X86_AT(c, 0x119ebu);
    x86_mul(c, g8(c, 1), 1);
    // 0119ed  shr eax, 7
    X86_AT(c, 0x119edu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0119f0  inc eax
    X86_AT(c, 0x119f0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0119f1  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x119f1u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 0119f9  shr eax, 7
    X86_AT(c, 0x119f9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0119fc  inc eax
    X86_AT(c, 0x119fcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0119fd  xor al, 0x7f
    X86_AT(c, 0x119fdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0119ff  mov ah, 0x40
    X86_AT(c, 0x119ffu);
    s8(c, 4, 0x40u);
    // 011a01  add ah, bl
    X86_AT(c, 0x11a01u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a03  call 0x11bf0
    X86_AT(c, 0x11a03u);
    push32(c, 0x11a08u); f_00011bf0(c); X86_RET(c, 0x11a08u);
L_11a08:
    X86_TICK(c, 7);
    // 011a08  add bh, bh
    X86_AT(c, 0x11a08u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a0a  jae 0x11a33
    X86_AT(c, 0x11a0au);
    if (x86_cc(c, 3)) { goto L_11a33; }
    X86_TICK(c, 73);
    // 011a0c  mov al, byte ptr gs:[edi + esi*1 + 0xc4]
    X86_AT(c, 0x11a0cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC4u))));
    // 011a14  xor al, 0x7f
    X86_AT(c, 0x11a14u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a16  mul cl
    X86_AT(c, 0x11a16u);
    x86_mul(c, g8(c, 1), 1);
    // 011a18  shr eax, 7
    X86_AT(c, 0x11a18u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a1b  inc eax
    X86_AT(c, 0x11a1bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a1c  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a1cu);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a24  shr eax, 7
    X86_AT(c, 0x11a24u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a27  inc eax
    X86_AT(c, 0x11a27u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a28  xor al, 0x7f
    X86_AT(c, 0x11a28u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a2a  mov ah, 0x44
    X86_AT(c, 0x11a2au);
    s8(c, 4, 0x44u);
    // 011a2c  add ah, bl
    X86_AT(c, 0x11a2cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a2e  call 0x11bf0
    X86_AT(c, 0x11a2eu);
    push32(c, 0x11a33u); f_00011bf0(c); X86_RET(c, 0x11a33u);
L_11a33:
    X86_TICK(c, 7);
    // 011a33  add bh, bh
    X86_AT(c, 0x11a33u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a35  jae 0x11a5e
    X86_AT(c, 0x11a35u);
    if (x86_cc(c, 3)) { goto L_11a5e; }
    X86_TICK(c, 73);
    // 011a37  mov al, byte ptr gs:[edi + esi*1 + 0xc8]
    X86_AT(c, 0x11a37u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC8u))));
    // 011a3f  xor al, 0x7f
    X86_AT(c, 0x11a3fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a41  mul cl
    X86_AT(c, 0x11a41u);
    x86_mul(c, g8(c, 1), 1);
    // 011a43  shr eax, 7
    X86_AT(c, 0x11a43u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a46  inc eax
    X86_AT(c, 0x11a46u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a47  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a47u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a4f  shr eax, 7
    X86_AT(c, 0x11a4fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a52  inc eax
    X86_AT(c, 0x11a52u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a53  xor al, 0x7f
    X86_AT(c, 0x11a53u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a55  mov ah, 0x48
    X86_AT(c, 0x11a55u);
    s8(c, 4, 0x48u);
    // 011a57  add ah, bl
    X86_AT(c, 0x11a57u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a59  call 0x11bf0
    X86_AT(c, 0x11a59u);
    push32(c, 0x11a5eu); f_00011bf0(c); X86_RET(c, 0x11a5eu);
L_11a5e:
    X86_TICK(c, 7);
    // 011a5e  add bh, bh
    X86_AT(c, 0x11a5eu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a60  jae 0x11a89
    X86_AT(c, 0x11a60u);
    if (x86_cc(c, 3)) { goto L_11a89; }
    X86_TICK(c, 73);
    // 011a62  mov al, byte ptr gs:[edi + esi*1 + 0xcc]
    X86_AT(c, 0x11a62u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xCCu))));
    // 011a6a  xor al, 0x7f
    X86_AT(c, 0x11a6au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a6c  mul cl
    X86_AT(c, 0x11a6cu);
    x86_mul(c, g8(c, 1), 1);
    // 011a6e  shr eax, 7
    X86_AT(c, 0x11a6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a71  inc eax
    X86_AT(c, 0x11a71u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a72  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a72u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a7a  shr eax, 7
    X86_AT(c, 0x11a7au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a7d  inc eax
    X86_AT(c, 0x11a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a7e  xor al, 0x7f
    X86_AT(c, 0x11a7eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a80  mov ah, 0x4c
    X86_AT(c, 0x11a80u);
    s8(c, 4, 0x4Cu);
    // 011a82  add ah, bl
    X86_AT(c, 0x11a82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a84  call 0x11bf0
    X86_AT(c, 0x11a84u);
    push32(c, 0x11a89u); f_00011bf0(c); X86_RET(c, 0x11a89u);
L_11a89:
    X86_TICK(c, 36);
    // 011a89  popal 
    X86_AT(c, 0x11a89u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011a8a  xor al, al
    X86_AT(c, 0x11a8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011a8c  ret 
    X86_AT(c, 0x11a8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x119d1u, "ran off the end of a function");
}
void f_000119d6(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0119d6  mov bh, byte ptr cs:[eax + 0x135a8]
    X86_AT(c, 0x119d6u);
    s8(c, 7, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x135A8u))));
    // 0119dd  add bh, bh
    X86_AT(c, 0x119ddu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0119df  jae 0x11a08
    X86_AT(c, 0x119dfu);
    if (x86_cc(c, 3)) { goto L_11a08; }
    X86_TICK(c, 73);
    // 0119e1  mov al, byte ptr gs:[edi + esi*1 + 0xc0]
    X86_AT(c, 0x119e1u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC0u))));
    // 0119e9  xor al, 0x7f
    X86_AT(c, 0x119e9u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0119eb  mul cl
    X86_AT(c, 0x119ebu);
    x86_mul(c, g8(c, 1), 1);
    // 0119ed  shr eax, 7
    X86_AT(c, 0x119edu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0119f0  inc eax
    X86_AT(c, 0x119f0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0119f1  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x119f1u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 0119f9  shr eax, 7
    X86_AT(c, 0x119f9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0119fc  inc eax
    X86_AT(c, 0x119fcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0119fd  xor al, 0x7f
    X86_AT(c, 0x119fdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0119ff  mov ah, 0x40
    X86_AT(c, 0x119ffu);
    s8(c, 4, 0x40u);
    // 011a01  add ah, bl
    X86_AT(c, 0x11a01u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a03  call 0x11bf0
    X86_AT(c, 0x11a03u);
    push32(c, 0x11a08u); f_00011bf0(c); X86_RET(c, 0x11a08u);
L_11a08:
    X86_TICK(c, 7);
    // 011a08  add bh, bh
    X86_AT(c, 0x11a08u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a0a  jae 0x11a33
    X86_AT(c, 0x11a0au);
    if (x86_cc(c, 3)) { goto L_11a33; }
    X86_TICK(c, 73);
    // 011a0c  mov al, byte ptr gs:[edi + esi*1 + 0xc4]
    X86_AT(c, 0x11a0cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC4u))));
    // 011a14  xor al, 0x7f
    X86_AT(c, 0x11a14u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a16  mul cl
    X86_AT(c, 0x11a16u);
    x86_mul(c, g8(c, 1), 1);
    // 011a18  shr eax, 7
    X86_AT(c, 0x11a18u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a1b  inc eax
    X86_AT(c, 0x11a1bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a1c  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a1cu);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a24  shr eax, 7
    X86_AT(c, 0x11a24u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a27  inc eax
    X86_AT(c, 0x11a27u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a28  xor al, 0x7f
    X86_AT(c, 0x11a28u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a2a  mov ah, 0x44
    X86_AT(c, 0x11a2au);
    s8(c, 4, 0x44u);
    // 011a2c  add ah, bl
    X86_AT(c, 0x11a2cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a2e  call 0x11bf0
    X86_AT(c, 0x11a2eu);
    push32(c, 0x11a33u); f_00011bf0(c); X86_RET(c, 0x11a33u);
L_11a33:
    X86_TICK(c, 7);
    // 011a33  add bh, bh
    X86_AT(c, 0x11a33u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a35  jae 0x11a5e
    X86_AT(c, 0x11a35u);
    if (x86_cc(c, 3)) { goto L_11a5e; }
    X86_TICK(c, 73);
    // 011a37  mov al, byte ptr gs:[edi + esi*1 + 0xc8]
    X86_AT(c, 0x11a37u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC8u))));
    // 011a3f  xor al, 0x7f
    X86_AT(c, 0x11a3fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a41  mul cl
    X86_AT(c, 0x11a41u);
    x86_mul(c, g8(c, 1), 1);
    // 011a43  shr eax, 7
    X86_AT(c, 0x11a43u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a46  inc eax
    X86_AT(c, 0x11a46u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a47  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a47u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a4f  shr eax, 7
    X86_AT(c, 0x11a4fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a52  inc eax
    X86_AT(c, 0x11a52u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a53  xor al, 0x7f
    X86_AT(c, 0x11a53u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a55  mov ah, 0x48
    X86_AT(c, 0x11a55u);
    s8(c, 4, 0x48u);
    // 011a57  add ah, bl
    X86_AT(c, 0x11a57u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a59  call 0x11bf0
    X86_AT(c, 0x11a59u);
    push32(c, 0x11a5eu); f_00011bf0(c); X86_RET(c, 0x11a5eu);
L_11a5e:
    X86_TICK(c, 7);
    // 011a5e  add bh, bh
    X86_AT(c, 0x11a5eu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a60  jae 0x11a89
    X86_AT(c, 0x11a60u);
    if (x86_cc(c, 3)) { goto L_11a89; }
    X86_TICK(c, 73);
    // 011a62  mov al, byte ptr gs:[edi + esi*1 + 0xcc]
    X86_AT(c, 0x11a62u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xCCu))));
    // 011a6a  xor al, 0x7f
    X86_AT(c, 0x11a6au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a6c  mul cl
    X86_AT(c, 0x11a6cu);
    x86_mul(c, g8(c, 1), 1);
    // 011a6e  shr eax, 7
    X86_AT(c, 0x11a6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a71  inc eax
    X86_AT(c, 0x11a71u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a72  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a72u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a7a  shr eax, 7
    X86_AT(c, 0x11a7au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a7d  inc eax
    X86_AT(c, 0x11a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a7e  xor al, 0x7f
    X86_AT(c, 0x11a7eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a80  mov ah, 0x4c
    X86_AT(c, 0x11a80u);
    s8(c, 4, 0x4Cu);
    // 011a82  add ah, bl
    X86_AT(c, 0x11a82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a84  call 0x11bf0
    X86_AT(c, 0x11a84u);
    push32(c, 0x11a89u); f_00011bf0(c); X86_RET(c, 0x11a89u);
L_11a89:
    X86_TICK(c, 36);
    // 011a89  popal 
    X86_AT(c, 0x11a89u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011a8a  xor al, al
    X86_AT(c, 0x11a8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011a8c  ret 
    X86_AT(c, 0x11a8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x119d6u, "ran off the end of a function");
}
void f_000119dd(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0119dd  add bh, bh
    X86_AT(c, 0x119ddu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0119df  jae 0x11a08
    X86_AT(c, 0x119dfu);
    if (x86_cc(c, 3)) { goto L_11a08; }
    X86_TICK(c, 73);
    // 0119e1  mov al, byte ptr gs:[edi + esi*1 + 0xc0]
    X86_AT(c, 0x119e1u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC0u))));
    // 0119e9  xor al, 0x7f
    X86_AT(c, 0x119e9u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0119eb  mul cl
    X86_AT(c, 0x119ebu);
    x86_mul(c, g8(c, 1), 1);
    // 0119ed  shr eax, 7
    X86_AT(c, 0x119edu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0119f0  inc eax
    X86_AT(c, 0x119f0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0119f1  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x119f1u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 0119f9  shr eax, 7
    X86_AT(c, 0x119f9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0119fc  inc eax
    X86_AT(c, 0x119fcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0119fd  xor al, 0x7f
    X86_AT(c, 0x119fdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0119ff  mov ah, 0x40
    X86_AT(c, 0x119ffu);
    s8(c, 4, 0x40u);
    // 011a01  add ah, bl
    X86_AT(c, 0x11a01u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a03  call 0x11bf0
    X86_AT(c, 0x11a03u);
    push32(c, 0x11a08u); f_00011bf0(c); X86_RET(c, 0x11a08u);
L_11a08:
    X86_TICK(c, 7);
    // 011a08  add bh, bh
    X86_AT(c, 0x11a08u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a0a  jae 0x11a33
    X86_AT(c, 0x11a0au);
    if (x86_cc(c, 3)) { goto L_11a33; }
    X86_TICK(c, 73);
    // 011a0c  mov al, byte ptr gs:[edi + esi*1 + 0xc4]
    X86_AT(c, 0x11a0cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC4u))));
    // 011a14  xor al, 0x7f
    X86_AT(c, 0x11a14u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a16  mul cl
    X86_AT(c, 0x11a16u);
    x86_mul(c, g8(c, 1), 1);
    // 011a18  shr eax, 7
    X86_AT(c, 0x11a18u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a1b  inc eax
    X86_AT(c, 0x11a1bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a1c  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a1cu);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a24  shr eax, 7
    X86_AT(c, 0x11a24u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a27  inc eax
    X86_AT(c, 0x11a27u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a28  xor al, 0x7f
    X86_AT(c, 0x11a28u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a2a  mov ah, 0x44
    X86_AT(c, 0x11a2au);
    s8(c, 4, 0x44u);
    // 011a2c  add ah, bl
    X86_AT(c, 0x11a2cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a2e  call 0x11bf0
    X86_AT(c, 0x11a2eu);
    push32(c, 0x11a33u); f_00011bf0(c); X86_RET(c, 0x11a33u);
L_11a33:
    X86_TICK(c, 7);
    // 011a33  add bh, bh
    X86_AT(c, 0x11a33u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a35  jae 0x11a5e
    X86_AT(c, 0x11a35u);
    if (x86_cc(c, 3)) { goto L_11a5e; }
    X86_TICK(c, 73);
    // 011a37  mov al, byte ptr gs:[edi + esi*1 + 0xc8]
    X86_AT(c, 0x11a37u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC8u))));
    // 011a3f  xor al, 0x7f
    X86_AT(c, 0x11a3fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a41  mul cl
    X86_AT(c, 0x11a41u);
    x86_mul(c, g8(c, 1), 1);
    // 011a43  shr eax, 7
    X86_AT(c, 0x11a43u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a46  inc eax
    X86_AT(c, 0x11a46u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a47  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a47u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a4f  shr eax, 7
    X86_AT(c, 0x11a4fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a52  inc eax
    X86_AT(c, 0x11a52u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a53  xor al, 0x7f
    X86_AT(c, 0x11a53u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a55  mov ah, 0x48
    X86_AT(c, 0x11a55u);
    s8(c, 4, 0x48u);
    // 011a57  add ah, bl
    X86_AT(c, 0x11a57u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a59  call 0x11bf0
    X86_AT(c, 0x11a59u);
    push32(c, 0x11a5eu); f_00011bf0(c); X86_RET(c, 0x11a5eu);
L_11a5e:
    X86_TICK(c, 7);
    // 011a5e  add bh, bh
    X86_AT(c, 0x11a5eu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a60  jae 0x11a89
    X86_AT(c, 0x11a60u);
    if (x86_cc(c, 3)) { goto L_11a89; }
    X86_TICK(c, 73);
    // 011a62  mov al, byte ptr gs:[edi + esi*1 + 0xcc]
    X86_AT(c, 0x11a62u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xCCu))));
    // 011a6a  xor al, 0x7f
    X86_AT(c, 0x11a6au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a6c  mul cl
    X86_AT(c, 0x11a6cu);
    x86_mul(c, g8(c, 1), 1);
    // 011a6e  shr eax, 7
    X86_AT(c, 0x11a6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a71  inc eax
    X86_AT(c, 0x11a71u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a72  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a72u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a7a  shr eax, 7
    X86_AT(c, 0x11a7au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a7d  inc eax
    X86_AT(c, 0x11a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a7e  xor al, 0x7f
    X86_AT(c, 0x11a7eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a80  mov ah, 0x4c
    X86_AT(c, 0x11a80u);
    s8(c, 4, 0x4Cu);
    // 011a82  add ah, bl
    X86_AT(c, 0x11a82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a84  call 0x11bf0
    X86_AT(c, 0x11a84u);
    push32(c, 0x11a89u); f_00011bf0(c); X86_RET(c, 0x11a89u);
L_11a89:
    X86_TICK(c, 36);
    // 011a89  popal 
    X86_AT(c, 0x11a89u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011a8a  xor al, al
    X86_AT(c, 0x11a8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011a8c  ret 
    X86_AT(c, 0x11a8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x119ddu, "ran off the end of a function");
}
void f_000119df(X86Cpu& c) {
    X86_TICK(c, 5);
    // 0119df  jae 0x11a08
    X86_AT(c, 0x119dfu);
    if (x86_cc(c, 3)) { goto L_11a08; }
    X86_TICK(c, 73);
    // 0119e1  mov al, byte ptr gs:[edi + esi*1 + 0xc0]
    X86_AT(c, 0x119e1u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC0u))));
    // 0119e9  xor al, 0x7f
    X86_AT(c, 0x119e9u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0119eb  mul cl
    X86_AT(c, 0x119ebu);
    x86_mul(c, g8(c, 1), 1);
    // 0119ed  shr eax, 7
    X86_AT(c, 0x119edu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0119f0  inc eax
    X86_AT(c, 0x119f0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0119f1  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x119f1u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 0119f9  shr eax, 7
    X86_AT(c, 0x119f9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0119fc  inc eax
    X86_AT(c, 0x119fcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0119fd  xor al, 0x7f
    X86_AT(c, 0x119fdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0119ff  mov ah, 0x40
    X86_AT(c, 0x119ffu);
    s8(c, 4, 0x40u);
    // 011a01  add ah, bl
    X86_AT(c, 0x11a01u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a03  call 0x11bf0
    X86_AT(c, 0x11a03u);
    push32(c, 0x11a08u); f_00011bf0(c); X86_RET(c, 0x11a08u);
L_11a08:
    X86_TICK(c, 7);
    // 011a08  add bh, bh
    X86_AT(c, 0x11a08u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a0a  jae 0x11a33
    X86_AT(c, 0x11a0au);
    if (x86_cc(c, 3)) { goto L_11a33; }
    X86_TICK(c, 73);
    // 011a0c  mov al, byte ptr gs:[edi + esi*1 + 0xc4]
    X86_AT(c, 0x11a0cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC4u))));
    // 011a14  xor al, 0x7f
    X86_AT(c, 0x11a14u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a16  mul cl
    X86_AT(c, 0x11a16u);
    x86_mul(c, g8(c, 1), 1);
    // 011a18  shr eax, 7
    X86_AT(c, 0x11a18u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a1b  inc eax
    X86_AT(c, 0x11a1bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a1c  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a1cu);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a24  shr eax, 7
    X86_AT(c, 0x11a24u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a27  inc eax
    X86_AT(c, 0x11a27u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a28  xor al, 0x7f
    X86_AT(c, 0x11a28u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a2a  mov ah, 0x44
    X86_AT(c, 0x11a2au);
    s8(c, 4, 0x44u);
    // 011a2c  add ah, bl
    X86_AT(c, 0x11a2cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a2e  call 0x11bf0
    X86_AT(c, 0x11a2eu);
    push32(c, 0x11a33u); f_00011bf0(c); X86_RET(c, 0x11a33u);
L_11a33:
    X86_TICK(c, 7);
    // 011a33  add bh, bh
    X86_AT(c, 0x11a33u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a35  jae 0x11a5e
    X86_AT(c, 0x11a35u);
    if (x86_cc(c, 3)) { goto L_11a5e; }
    X86_TICK(c, 73);
    // 011a37  mov al, byte ptr gs:[edi + esi*1 + 0xc8]
    X86_AT(c, 0x11a37u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC8u))));
    // 011a3f  xor al, 0x7f
    X86_AT(c, 0x11a3fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a41  mul cl
    X86_AT(c, 0x11a41u);
    x86_mul(c, g8(c, 1), 1);
    // 011a43  shr eax, 7
    X86_AT(c, 0x11a43u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a46  inc eax
    X86_AT(c, 0x11a46u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a47  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a47u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a4f  shr eax, 7
    X86_AT(c, 0x11a4fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a52  inc eax
    X86_AT(c, 0x11a52u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a53  xor al, 0x7f
    X86_AT(c, 0x11a53u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a55  mov ah, 0x48
    X86_AT(c, 0x11a55u);
    s8(c, 4, 0x48u);
    // 011a57  add ah, bl
    X86_AT(c, 0x11a57u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a59  call 0x11bf0
    X86_AT(c, 0x11a59u);
    push32(c, 0x11a5eu); f_00011bf0(c); X86_RET(c, 0x11a5eu);
L_11a5e:
    X86_TICK(c, 7);
    // 011a5e  add bh, bh
    X86_AT(c, 0x11a5eu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a60  jae 0x11a89
    X86_AT(c, 0x11a60u);
    if (x86_cc(c, 3)) { goto L_11a89; }
    X86_TICK(c, 73);
    // 011a62  mov al, byte ptr gs:[edi + esi*1 + 0xcc]
    X86_AT(c, 0x11a62u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xCCu))));
    // 011a6a  xor al, 0x7f
    X86_AT(c, 0x11a6au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a6c  mul cl
    X86_AT(c, 0x11a6cu);
    x86_mul(c, g8(c, 1), 1);
    // 011a6e  shr eax, 7
    X86_AT(c, 0x11a6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a71  inc eax
    X86_AT(c, 0x11a71u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a72  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a72u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a7a  shr eax, 7
    X86_AT(c, 0x11a7au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a7d  inc eax
    X86_AT(c, 0x11a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a7e  xor al, 0x7f
    X86_AT(c, 0x11a7eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a80  mov ah, 0x4c
    X86_AT(c, 0x11a80u);
    s8(c, 4, 0x4Cu);
    // 011a82  add ah, bl
    X86_AT(c, 0x11a82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a84  call 0x11bf0
    X86_AT(c, 0x11a84u);
    push32(c, 0x11a89u); f_00011bf0(c); X86_RET(c, 0x11a89u);
L_11a89:
    X86_TICK(c, 36);
    // 011a89  popal 
    X86_AT(c, 0x11a89u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011a8a  xor al, al
    X86_AT(c, 0x11a8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011a8c  ret 
    X86_AT(c, 0x11a8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x119dfu, "ran off the end of a function");
}
void f_00011a08(X86Cpu& c) {
    X86_TICK(c, 7);
    // 011a08  add bh, bh
    X86_AT(c, 0x11a08u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a0a  jae 0x11a33
    X86_AT(c, 0x11a0au);
    if (x86_cc(c, 3)) { goto L_11a33; }
    X86_TICK(c, 73);
    // 011a0c  mov al, byte ptr gs:[edi + esi*1 + 0xc4]
    X86_AT(c, 0x11a0cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC4u))));
    // 011a14  xor al, 0x7f
    X86_AT(c, 0x11a14u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a16  mul cl
    X86_AT(c, 0x11a16u);
    x86_mul(c, g8(c, 1), 1);
    // 011a18  shr eax, 7
    X86_AT(c, 0x11a18u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a1b  inc eax
    X86_AT(c, 0x11a1bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a1c  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a1cu);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a24  shr eax, 7
    X86_AT(c, 0x11a24u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a27  inc eax
    X86_AT(c, 0x11a27u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a28  xor al, 0x7f
    X86_AT(c, 0x11a28u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a2a  mov ah, 0x44
    X86_AT(c, 0x11a2au);
    s8(c, 4, 0x44u);
    // 011a2c  add ah, bl
    X86_AT(c, 0x11a2cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a2e  call 0x11bf0
    X86_AT(c, 0x11a2eu);
    push32(c, 0x11a33u); f_00011bf0(c); X86_RET(c, 0x11a33u);
L_11a33:
    X86_TICK(c, 7);
    // 011a33  add bh, bh
    X86_AT(c, 0x11a33u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a35  jae 0x11a5e
    X86_AT(c, 0x11a35u);
    if (x86_cc(c, 3)) { goto L_11a5e; }
    X86_TICK(c, 73);
    // 011a37  mov al, byte ptr gs:[edi + esi*1 + 0xc8]
    X86_AT(c, 0x11a37u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC8u))));
    // 011a3f  xor al, 0x7f
    X86_AT(c, 0x11a3fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a41  mul cl
    X86_AT(c, 0x11a41u);
    x86_mul(c, g8(c, 1), 1);
    // 011a43  shr eax, 7
    X86_AT(c, 0x11a43u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a46  inc eax
    X86_AT(c, 0x11a46u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a47  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a47u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a4f  shr eax, 7
    X86_AT(c, 0x11a4fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a52  inc eax
    X86_AT(c, 0x11a52u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a53  xor al, 0x7f
    X86_AT(c, 0x11a53u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a55  mov ah, 0x48
    X86_AT(c, 0x11a55u);
    s8(c, 4, 0x48u);
    // 011a57  add ah, bl
    X86_AT(c, 0x11a57u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a59  call 0x11bf0
    X86_AT(c, 0x11a59u);
    push32(c, 0x11a5eu); f_00011bf0(c); X86_RET(c, 0x11a5eu);
L_11a5e:
    X86_TICK(c, 7);
    // 011a5e  add bh, bh
    X86_AT(c, 0x11a5eu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a60  jae 0x11a89
    X86_AT(c, 0x11a60u);
    if (x86_cc(c, 3)) { goto L_11a89; }
    X86_TICK(c, 73);
    // 011a62  mov al, byte ptr gs:[edi + esi*1 + 0xcc]
    X86_AT(c, 0x11a62u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xCCu))));
    // 011a6a  xor al, 0x7f
    X86_AT(c, 0x11a6au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a6c  mul cl
    X86_AT(c, 0x11a6cu);
    x86_mul(c, g8(c, 1), 1);
    // 011a6e  shr eax, 7
    X86_AT(c, 0x11a6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a71  inc eax
    X86_AT(c, 0x11a71u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a72  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a72u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a7a  shr eax, 7
    X86_AT(c, 0x11a7au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a7d  inc eax
    X86_AT(c, 0x11a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a7e  xor al, 0x7f
    X86_AT(c, 0x11a7eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a80  mov ah, 0x4c
    X86_AT(c, 0x11a80u);
    s8(c, 4, 0x4Cu);
    // 011a82  add ah, bl
    X86_AT(c, 0x11a82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a84  call 0x11bf0
    X86_AT(c, 0x11a84u);
    push32(c, 0x11a89u); f_00011bf0(c); X86_RET(c, 0x11a89u);
L_11a89:
    X86_TICK(c, 36);
    // 011a89  popal 
    X86_AT(c, 0x11a89u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011a8a  xor al, al
    X86_AT(c, 0x11a8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011a8c  ret 
    X86_AT(c, 0x11a8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11a08u, "ran off the end of a function");
}
void f_00011a0a(X86Cpu& c) {
    X86_TICK(c, 5);
    // 011a0a  jae 0x11a33
    X86_AT(c, 0x11a0au);
    if (x86_cc(c, 3)) { goto L_11a33; }
    X86_TICK(c, 73);
    // 011a0c  mov al, byte ptr gs:[edi + esi*1 + 0xc4]
    X86_AT(c, 0x11a0cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC4u))));
    // 011a14  xor al, 0x7f
    X86_AT(c, 0x11a14u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a16  mul cl
    X86_AT(c, 0x11a16u);
    x86_mul(c, g8(c, 1), 1);
    // 011a18  shr eax, 7
    X86_AT(c, 0x11a18u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a1b  inc eax
    X86_AT(c, 0x11a1bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a1c  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a1cu);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a24  shr eax, 7
    X86_AT(c, 0x11a24u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a27  inc eax
    X86_AT(c, 0x11a27u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a28  xor al, 0x7f
    X86_AT(c, 0x11a28u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a2a  mov ah, 0x44
    X86_AT(c, 0x11a2au);
    s8(c, 4, 0x44u);
    // 011a2c  add ah, bl
    X86_AT(c, 0x11a2cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a2e  call 0x11bf0
    X86_AT(c, 0x11a2eu);
    push32(c, 0x11a33u); f_00011bf0(c); X86_RET(c, 0x11a33u);
L_11a33:
    X86_TICK(c, 7);
    // 011a33  add bh, bh
    X86_AT(c, 0x11a33u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a35  jae 0x11a5e
    X86_AT(c, 0x11a35u);
    if (x86_cc(c, 3)) { goto L_11a5e; }
    X86_TICK(c, 73);
    // 011a37  mov al, byte ptr gs:[edi + esi*1 + 0xc8]
    X86_AT(c, 0x11a37u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC8u))));
    // 011a3f  xor al, 0x7f
    X86_AT(c, 0x11a3fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a41  mul cl
    X86_AT(c, 0x11a41u);
    x86_mul(c, g8(c, 1), 1);
    // 011a43  shr eax, 7
    X86_AT(c, 0x11a43u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a46  inc eax
    X86_AT(c, 0x11a46u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a47  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a47u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a4f  shr eax, 7
    X86_AT(c, 0x11a4fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a52  inc eax
    X86_AT(c, 0x11a52u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a53  xor al, 0x7f
    X86_AT(c, 0x11a53u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a55  mov ah, 0x48
    X86_AT(c, 0x11a55u);
    s8(c, 4, 0x48u);
    // 011a57  add ah, bl
    X86_AT(c, 0x11a57u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a59  call 0x11bf0
    X86_AT(c, 0x11a59u);
    push32(c, 0x11a5eu); f_00011bf0(c); X86_RET(c, 0x11a5eu);
L_11a5e:
    X86_TICK(c, 7);
    // 011a5e  add bh, bh
    X86_AT(c, 0x11a5eu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a60  jae 0x11a89
    X86_AT(c, 0x11a60u);
    if (x86_cc(c, 3)) { goto L_11a89; }
    X86_TICK(c, 73);
    // 011a62  mov al, byte ptr gs:[edi + esi*1 + 0xcc]
    X86_AT(c, 0x11a62u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xCCu))));
    // 011a6a  xor al, 0x7f
    X86_AT(c, 0x11a6au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a6c  mul cl
    X86_AT(c, 0x11a6cu);
    x86_mul(c, g8(c, 1), 1);
    // 011a6e  shr eax, 7
    X86_AT(c, 0x11a6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a71  inc eax
    X86_AT(c, 0x11a71u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a72  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a72u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a7a  shr eax, 7
    X86_AT(c, 0x11a7au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a7d  inc eax
    X86_AT(c, 0x11a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a7e  xor al, 0x7f
    X86_AT(c, 0x11a7eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a80  mov ah, 0x4c
    X86_AT(c, 0x11a80u);
    s8(c, 4, 0x4Cu);
    // 011a82  add ah, bl
    X86_AT(c, 0x11a82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a84  call 0x11bf0
    X86_AT(c, 0x11a84u);
    push32(c, 0x11a89u); f_00011bf0(c); X86_RET(c, 0x11a89u);
L_11a89:
    X86_TICK(c, 36);
    // 011a89  popal 
    X86_AT(c, 0x11a89u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011a8a  xor al, al
    X86_AT(c, 0x11a8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011a8c  ret 
    X86_AT(c, 0x11a8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11a0au, "ran off the end of a function");
}
void f_00011a33(X86Cpu& c) {
    X86_TICK(c, 7);
    // 011a33  add bh, bh
    X86_AT(c, 0x11a33u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a35  jae 0x11a5e
    X86_AT(c, 0x11a35u);
    if (x86_cc(c, 3)) { goto L_11a5e; }
    X86_TICK(c, 73);
    // 011a37  mov al, byte ptr gs:[edi + esi*1 + 0xc8]
    X86_AT(c, 0x11a37u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC8u))));
    // 011a3f  xor al, 0x7f
    X86_AT(c, 0x11a3fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a41  mul cl
    X86_AT(c, 0x11a41u);
    x86_mul(c, g8(c, 1), 1);
    // 011a43  shr eax, 7
    X86_AT(c, 0x11a43u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a46  inc eax
    X86_AT(c, 0x11a46u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a47  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a47u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a4f  shr eax, 7
    X86_AT(c, 0x11a4fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a52  inc eax
    X86_AT(c, 0x11a52u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a53  xor al, 0x7f
    X86_AT(c, 0x11a53u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a55  mov ah, 0x48
    X86_AT(c, 0x11a55u);
    s8(c, 4, 0x48u);
    // 011a57  add ah, bl
    X86_AT(c, 0x11a57u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a59  call 0x11bf0
    X86_AT(c, 0x11a59u);
    push32(c, 0x11a5eu); f_00011bf0(c); X86_RET(c, 0x11a5eu);
L_11a5e:
    X86_TICK(c, 7);
    // 011a5e  add bh, bh
    X86_AT(c, 0x11a5eu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a60  jae 0x11a89
    X86_AT(c, 0x11a60u);
    if (x86_cc(c, 3)) { goto L_11a89; }
    X86_TICK(c, 73);
    // 011a62  mov al, byte ptr gs:[edi + esi*1 + 0xcc]
    X86_AT(c, 0x11a62u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xCCu))));
    // 011a6a  xor al, 0x7f
    X86_AT(c, 0x11a6au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a6c  mul cl
    X86_AT(c, 0x11a6cu);
    x86_mul(c, g8(c, 1), 1);
    // 011a6e  shr eax, 7
    X86_AT(c, 0x11a6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a71  inc eax
    X86_AT(c, 0x11a71u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a72  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a72u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a7a  shr eax, 7
    X86_AT(c, 0x11a7au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a7d  inc eax
    X86_AT(c, 0x11a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a7e  xor al, 0x7f
    X86_AT(c, 0x11a7eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a80  mov ah, 0x4c
    X86_AT(c, 0x11a80u);
    s8(c, 4, 0x4Cu);
    // 011a82  add ah, bl
    X86_AT(c, 0x11a82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a84  call 0x11bf0
    X86_AT(c, 0x11a84u);
    push32(c, 0x11a89u); f_00011bf0(c); X86_RET(c, 0x11a89u);
L_11a89:
    X86_TICK(c, 36);
    // 011a89  popal 
    X86_AT(c, 0x11a89u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011a8a  xor al, al
    X86_AT(c, 0x11a8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011a8c  ret 
    X86_AT(c, 0x11a8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11a33u, "ran off the end of a function");
}
void f_00011a35(X86Cpu& c) {
    X86_TICK(c, 5);
    // 011a35  jae 0x11a5e
    X86_AT(c, 0x11a35u);
    if (x86_cc(c, 3)) { goto L_11a5e; }
    X86_TICK(c, 73);
    // 011a37  mov al, byte ptr gs:[edi + esi*1 + 0xc8]
    X86_AT(c, 0x11a37u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC8u))));
    // 011a3f  xor al, 0x7f
    X86_AT(c, 0x11a3fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a41  mul cl
    X86_AT(c, 0x11a41u);
    x86_mul(c, g8(c, 1), 1);
    // 011a43  shr eax, 7
    X86_AT(c, 0x11a43u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a46  inc eax
    X86_AT(c, 0x11a46u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a47  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a47u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a4f  shr eax, 7
    X86_AT(c, 0x11a4fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a52  inc eax
    X86_AT(c, 0x11a52u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a53  xor al, 0x7f
    X86_AT(c, 0x11a53u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a55  mov ah, 0x48
    X86_AT(c, 0x11a55u);
    s8(c, 4, 0x48u);
    // 011a57  add ah, bl
    X86_AT(c, 0x11a57u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a59  call 0x11bf0
    X86_AT(c, 0x11a59u);
    push32(c, 0x11a5eu); f_00011bf0(c); X86_RET(c, 0x11a5eu);
L_11a5e:
    X86_TICK(c, 7);
    // 011a5e  add bh, bh
    X86_AT(c, 0x11a5eu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a60  jae 0x11a89
    X86_AT(c, 0x11a60u);
    if (x86_cc(c, 3)) { goto L_11a89; }
    X86_TICK(c, 73);
    // 011a62  mov al, byte ptr gs:[edi + esi*1 + 0xcc]
    X86_AT(c, 0x11a62u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xCCu))));
    // 011a6a  xor al, 0x7f
    X86_AT(c, 0x11a6au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a6c  mul cl
    X86_AT(c, 0x11a6cu);
    x86_mul(c, g8(c, 1), 1);
    // 011a6e  shr eax, 7
    X86_AT(c, 0x11a6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a71  inc eax
    X86_AT(c, 0x11a71u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a72  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a72u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a7a  shr eax, 7
    X86_AT(c, 0x11a7au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a7d  inc eax
    X86_AT(c, 0x11a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a7e  xor al, 0x7f
    X86_AT(c, 0x11a7eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a80  mov ah, 0x4c
    X86_AT(c, 0x11a80u);
    s8(c, 4, 0x4Cu);
    // 011a82  add ah, bl
    X86_AT(c, 0x11a82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a84  call 0x11bf0
    X86_AT(c, 0x11a84u);
    push32(c, 0x11a89u); f_00011bf0(c); X86_RET(c, 0x11a89u);
L_11a89:
    X86_TICK(c, 36);
    // 011a89  popal 
    X86_AT(c, 0x11a89u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011a8a  xor al, al
    X86_AT(c, 0x11a8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011a8c  ret 
    X86_AT(c, 0x11a8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11a35u, "ran off the end of a function");
}
void f_00011a37(X86Cpu& c) {
    X86_TICK(c, 73);
    // 011a37  mov al, byte ptr gs:[edi + esi*1 + 0xc8]
    X86_AT(c, 0x11a37u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC8u))));
    // 011a3f  xor al, 0x7f
    X86_AT(c, 0x11a3fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a41  mul cl
    X86_AT(c, 0x11a41u);
    x86_mul(c, g8(c, 1), 1);
    // 011a43  shr eax, 7
    X86_AT(c, 0x11a43u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a46  inc eax
    X86_AT(c, 0x11a46u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a47  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a47u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a4f  shr eax, 7
    X86_AT(c, 0x11a4fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a52  inc eax
    X86_AT(c, 0x11a52u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a53  xor al, 0x7f
    X86_AT(c, 0x11a53u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a55  mov ah, 0x48
    X86_AT(c, 0x11a55u);
    s8(c, 4, 0x48u);
    // 011a57  add ah, bl
    X86_AT(c, 0x11a57u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a59  call 0x11bf0
    X86_AT(c, 0x11a59u);
    push32(c, 0x11a5eu); f_00011bf0(c); X86_RET(c, 0x11a5eu);
    X86_TICK(c, 7);
    // 011a5e  add bh, bh
    X86_AT(c, 0x11a5eu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a60  jae 0x11a89
    X86_AT(c, 0x11a60u);
    if (x86_cc(c, 3)) { goto L_11a89; }
    X86_TICK(c, 73);
    // 011a62  mov al, byte ptr gs:[edi + esi*1 + 0xcc]
    X86_AT(c, 0x11a62u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xCCu))));
    // 011a6a  xor al, 0x7f
    X86_AT(c, 0x11a6au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a6c  mul cl
    X86_AT(c, 0x11a6cu);
    x86_mul(c, g8(c, 1), 1);
    // 011a6e  shr eax, 7
    X86_AT(c, 0x11a6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a71  inc eax
    X86_AT(c, 0x11a71u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a72  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a72u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a7a  shr eax, 7
    X86_AT(c, 0x11a7au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a7d  inc eax
    X86_AT(c, 0x11a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a7e  xor al, 0x7f
    X86_AT(c, 0x11a7eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a80  mov ah, 0x4c
    X86_AT(c, 0x11a80u);
    s8(c, 4, 0x4Cu);
    // 011a82  add ah, bl
    X86_AT(c, 0x11a82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a84  call 0x11bf0
    X86_AT(c, 0x11a84u);
    push32(c, 0x11a89u); f_00011bf0(c); X86_RET(c, 0x11a89u);
L_11a89:
    X86_TICK(c, 36);
    // 011a89  popal 
    X86_AT(c, 0x11a89u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011a8a  xor al, al
    X86_AT(c, 0x11a8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011a8c  ret 
    X86_AT(c, 0x11a8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11a37u, "ran off the end of a function");
}
void f_00011a3f(X86Cpu& c) {
    X86_TICK(c, 69);
    // 011a3f  xor al, 0x7f
    X86_AT(c, 0x11a3fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a41  mul cl
    X86_AT(c, 0x11a41u);
    x86_mul(c, g8(c, 1), 1);
    // 011a43  shr eax, 7
    X86_AT(c, 0x11a43u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a46  inc eax
    X86_AT(c, 0x11a46u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a47  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a47u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a4f  shr eax, 7
    X86_AT(c, 0x11a4fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a52  inc eax
    X86_AT(c, 0x11a52u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a53  xor al, 0x7f
    X86_AT(c, 0x11a53u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a55  mov ah, 0x48
    X86_AT(c, 0x11a55u);
    s8(c, 4, 0x48u);
    // 011a57  add ah, bl
    X86_AT(c, 0x11a57u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a59  call 0x11bf0
    X86_AT(c, 0x11a59u);
    push32(c, 0x11a5eu); f_00011bf0(c); X86_RET(c, 0x11a5eu);
    X86_TICK(c, 7);
    // 011a5e  add bh, bh
    X86_AT(c, 0x11a5eu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a60  jae 0x11a89
    X86_AT(c, 0x11a60u);
    if (x86_cc(c, 3)) { goto L_11a89; }
    X86_TICK(c, 73);
    // 011a62  mov al, byte ptr gs:[edi + esi*1 + 0xcc]
    X86_AT(c, 0x11a62u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xCCu))));
    // 011a6a  xor al, 0x7f
    X86_AT(c, 0x11a6au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a6c  mul cl
    X86_AT(c, 0x11a6cu);
    x86_mul(c, g8(c, 1), 1);
    // 011a6e  shr eax, 7
    X86_AT(c, 0x11a6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a71  inc eax
    X86_AT(c, 0x11a71u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a72  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a72u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a7a  shr eax, 7
    X86_AT(c, 0x11a7au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a7d  inc eax
    X86_AT(c, 0x11a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a7e  xor al, 0x7f
    X86_AT(c, 0x11a7eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a80  mov ah, 0x4c
    X86_AT(c, 0x11a80u);
    s8(c, 4, 0x4Cu);
    // 011a82  add ah, bl
    X86_AT(c, 0x11a82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a84  call 0x11bf0
    X86_AT(c, 0x11a84u);
    push32(c, 0x11a89u); f_00011bf0(c); X86_RET(c, 0x11a89u);
L_11a89:
    X86_TICK(c, 36);
    // 011a89  popal 
    X86_AT(c, 0x11a89u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011a8a  xor al, al
    X86_AT(c, 0x11a8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011a8c  ret 
    X86_AT(c, 0x11a8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11a3fu, "ran off the end of a function");
}
void f_00011a41(X86Cpu& c) {
    X86_TICK(c, 67);
    // 011a41  mul cl
    X86_AT(c, 0x11a41u);
    x86_mul(c, g8(c, 1), 1);
    // 011a43  shr eax, 7
    X86_AT(c, 0x11a43u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a46  inc eax
    X86_AT(c, 0x11a46u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a47  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a47u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a4f  shr eax, 7
    X86_AT(c, 0x11a4fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a52  inc eax
    X86_AT(c, 0x11a52u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a53  xor al, 0x7f
    X86_AT(c, 0x11a53u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a55  mov ah, 0x48
    X86_AT(c, 0x11a55u);
    s8(c, 4, 0x48u);
    // 011a57  add ah, bl
    X86_AT(c, 0x11a57u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a59  call 0x11bf0
    X86_AT(c, 0x11a59u);
    push32(c, 0x11a5eu); f_00011bf0(c); X86_RET(c, 0x11a5eu);
    X86_TICK(c, 7);
    // 011a5e  add bh, bh
    X86_AT(c, 0x11a5eu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a60  jae 0x11a89
    X86_AT(c, 0x11a60u);
    if (x86_cc(c, 3)) { goto L_11a89; }
    X86_TICK(c, 73);
    // 011a62  mov al, byte ptr gs:[edi + esi*1 + 0xcc]
    X86_AT(c, 0x11a62u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xCCu))));
    // 011a6a  xor al, 0x7f
    X86_AT(c, 0x11a6au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a6c  mul cl
    X86_AT(c, 0x11a6cu);
    x86_mul(c, g8(c, 1), 1);
    // 011a6e  shr eax, 7
    X86_AT(c, 0x11a6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a71  inc eax
    X86_AT(c, 0x11a71u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a72  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a72u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a7a  shr eax, 7
    X86_AT(c, 0x11a7au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a7d  inc eax
    X86_AT(c, 0x11a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a7e  xor al, 0x7f
    X86_AT(c, 0x11a7eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a80  mov ah, 0x4c
    X86_AT(c, 0x11a80u);
    s8(c, 4, 0x4Cu);
    // 011a82  add ah, bl
    X86_AT(c, 0x11a82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a84  call 0x11bf0
    X86_AT(c, 0x11a84u);
    push32(c, 0x11a89u); f_00011bf0(c); X86_RET(c, 0x11a89u);
L_11a89:
    X86_TICK(c, 36);
    // 011a89  popal 
    X86_AT(c, 0x11a89u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011a8a  xor al, al
    X86_AT(c, 0x11a8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011a8c  ret 
    X86_AT(c, 0x11a8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11a41u, "ran off the end of a function");
}
void f_00011a43(X86Cpu& c) {
    X86_TICK(c, 45);
    // 011a43  shr eax, 7
    X86_AT(c, 0x11a43u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a46  inc eax
    X86_AT(c, 0x11a46u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a47  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a47u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a4f  shr eax, 7
    X86_AT(c, 0x11a4fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a52  inc eax
    X86_AT(c, 0x11a52u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a53  xor al, 0x7f
    X86_AT(c, 0x11a53u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a55  mov ah, 0x48
    X86_AT(c, 0x11a55u);
    s8(c, 4, 0x48u);
    // 011a57  add ah, bl
    X86_AT(c, 0x11a57u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a59  call 0x11bf0
    X86_AT(c, 0x11a59u);
    push32(c, 0x11a5eu); f_00011bf0(c); X86_RET(c, 0x11a5eu);
    X86_TICK(c, 7);
    // 011a5e  add bh, bh
    X86_AT(c, 0x11a5eu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a60  jae 0x11a89
    X86_AT(c, 0x11a60u);
    if (x86_cc(c, 3)) { goto L_11a89; }
    X86_TICK(c, 73);
    // 011a62  mov al, byte ptr gs:[edi + esi*1 + 0xcc]
    X86_AT(c, 0x11a62u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xCCu))));
    // 011a6a  xor al, 0x7f
    X86_AT(c, 0x11a6au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a6c  mul cl
    X86_AT(c, 0x11a6cu);
    x86_mul(c, g8(c, 1), 1);
    // 011a6e  shr eax, 7
    X86_AT(c, 0x11a6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a71  inc eax
    X86_AT(c, 0x11a71u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a72  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a72u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a7a  shr eax, 7
    X86_AT(c, 0x11a7au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a7d  inc eax
    X86_AT(c, 0x11a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a7e  xor al, 0x7f
    X86_AT(c, 0x11a7eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a80  mov ah, 0x4c
    X86_AT(c, 0x11a80u);
    s8(c, 4, 0x4Cu);
    // 011a82  add ah, bl
    X86_AT(c, 0x11a82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a84  call 0x11bf0
    X86_AT(c, 0x11a84u);
    push32(c, 0x11a89u); f_00011bf0(c); X86_RET(c, 0x11a89u);
L_11a89:
    X86_TICK(c, 36);
    // 011a89  popal 
    X86_AT(c, 0x11a89u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011a8a  xor al, al
    X86_AT(c, 0x11a8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011a8c  ret 
    X86_AT(c, 0x11a8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11a43u, "ran off the end of a function");
}
void f_00011a46(X86Cpu& c) {
    X86_TICK(c, 42);
    // 011a46  inc eax
    X86_AT(c, 0x11a46u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a47  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a47u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a4f  shr eax, 7
    X86_AT(c, 0x11a4fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a52  inc eax
    X86_AT(c, 0x11a52u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a53  xor al, 0x7f
    X86_AT(c, 0x11a53u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a55  mov ah, 0x48
    X86_AT(c, 0x11a55u);
    s8(c, 4, 0x48u);
    // 011a57  add ah, bl
    X86_AT(c, 0x11a57u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a59  call 0x11bf0
    X86_AT(c, 0x11a59u);
    push32(c, 0x11a5eu); f_00011bf0(c); X86_RET(c, 0x11a5eu);
    X86_TICK(c, 7);
    // 011a5e  add bh, bh
    X86_AT(c, 0x11a5eu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a60  jae 0x11a89
    X86_AT(c, 0x11a60u);
    if (x86_cc(c, 3)) { goto L_11a89; }
    X86_TICK(c, 73);
    // 011a62  mov al, byte ptr gs:[edi + esi*1 + 0xcc]
    X86_AT(c, 0x11a62u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xCCu))));
    // 011a6a  xor al, 0x7f
    X86_AT(c, 0x11a6au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a6c  mul cl
    X86_AT(c, 0x11a6cu);
    x86_mul(c, g8(c, 1), 1);
    // 011a6e  shr eax, 7
    X86_AT(c, 0x11a6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a71  inc eax
    X86_AT(c, 0x11a71u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a72  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a72u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a7a  shr eax, 7
    X86_AT(c, 0x11a7au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a7d  inc eax
    X86_AT(c, 0x11a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a7e  xor al, 0x7f
    X86_AT(c, 0x11a7eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a80  mov ah, 0x4c
    X86_AT(c, 0x11a80u);
    s8(c, 4, 0x4Cu);
    // 011a82  add ah, bl
    X86_AT(c, 0x11a82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a84  call 0x11bf0
    X86_AT(c, 0x11a84u);
    push32(c, 0x11a89u); f_00011bf0(c); X86_RET(c, 0x11a89u);
L_11a89:
    X86_TICK(c, 36);
    // 011a89  popal 
    X86_AT(c, 0x11a89u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011a8a  xor al, al
    X86_AT(c, 0x11a8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011a8c  ret 
    X86_AT(c, 0x11a8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11a46u, "ran off the end of a function");
}
void f_00011a47(X86Cpu& c) {
    X86_TICK(c, 40);
    // 011a47  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a47u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a4f  shr eax, 7
    X86_AT(c, 0x11a4fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a52  inc eax
    X86_AT(c, 0x11a52u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a53  xor al, 0x7f
    X86_AT(c, 0x11a53u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a55  mov ah, 0x48
    X86_AT(c, 0x11a55u);
    s8(c, 4, 0x48u);
    // 011a57  add ah, bl
    X86_AT(c, 0x11a57u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a59  call 0x11bf0
    X86_AT(c, 0x11a59u);
    push32(c, 0x11a5eu); f_00011bf0(c); X86_RET(c, 0x11a5eu);
    X86_TICK(c, 7);
    // 011a5e  add bh, bh
    X86_AT(c, 0x11a5eu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a60  jae 0x11a89
    X86_AT(c, 0x11a60u);
    if (x86_cc(c, 3)) { goto L_11a89; }
    X86_TICK(c, 73);
    // 011a62  mov al, byte ptr gs:[edi + esi*1 + 0xcc]
    X86_AT(c, 0x11a62u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xCCu))));
    // 011a6a  xor al, 0x7f
    X86_AT(c, 0x11a6au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a6c  mul cl
    X86_AT(c, 0x11a6cu);
    x86_mul(c, g8(c, 1), 1);
    // 011a6e  shr eax, 7
    X86_AT(c, 0x11a6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a71  inc eax
    X86_AT(c, 0x11a71u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a72  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a72u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a7a  shr eax, 7
    X86_AT(c, 0x11a7au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a7d  inc eax
    X86_AT(c, 0x11a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a7e  xor al, 0x7f
    X86_AT(c, 0x11a7eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a80  mov ah, 0x4c
    X86_AT(c, 0x11a80u);
    s8(c, 4, 0x4Cu);
    // 011a82  add ah, bl
    X86_AT(c, 0x11a82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a84  call 0x11bf0
    X86_AT(c, 0x11a84u);
    push32(c, 0x11a89u); f_00011bf0(c); X86_RET(c, 0x11a89u);
L_11a89:
    X86_TICK(c, 36);
    // 011a89  popal 
    X86_AT(c, 0x11a89u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011a8a  xor al, al
    X86_AT(c, 0x11a8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011a8c  ret 
    X86_AT(c, 0x11a8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11a47u, "ran off the end of a function");
}
void f_00011a4f(X86Cpu& c) {
    X86_TICK(c, 18);
    // 011a4f  shr eax, 7
    X86_AT(c, 0x11a4fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a52  inc eax
    X86_AT(c, 0x11a52u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a53  xor al, 0x7f
    X86_AT(c, 0x11a53u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a55  mov ah, 0x48
    X86_AT(c, 0x11a55u);
    s8(c, 4, 0x48u);
    // 011a57  add ah, bl
    X86_AT(c, 0x11a57u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a59  call 0x11bf0
    X86_AT(c, 0x11a59u);
    push32(c, 0x11a5eu); f_00011bf0(c); X86_RET(c, 0x11a5eu);
    X86_TICK(c, 7);
    // 011a5e  add bh, bh
    X86_AT(c, 0x11a5eu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a60  jae 0x11a89
    X86_AT(c, 0x11a60u);
    if (x86_cc(c, 3)) { goto L_11a89; }
    X86_TICK(c, 73);
    // 011a62  mov al, byte ptr gs:[edi + esi*1 + 0xcc]
    X86_AT(c, 0x11a62u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xCCu))));
    // 011a6a  xor al, 0x7f
    X86_AT(c, 0x11a6au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a6c  mul cl
    X86_AT(c, 0x11a6cu);
    x86_mul(c, g8(c, 1), 1);
    // 011a6e  shr eax, 7
    X86_AT(c, 0x11a6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a71  inc eax
    X86_AT(c, 0x11a71u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a72  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a72u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a7a  shr eax, 7
    X86_AT(c, 0x11a7au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a7d  inc eax
    X86_AT(c, 0x11a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a7e  xor al, 0x7f
    X86_AT(c, 0x11a7eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a80  mov ah, 0x4c
    X86_AT(c, 0x11a80u);
    s8(c, 4, 0x4Cu);
    // 011a82  add ah, bl
    X86_AT(c, 0x11a82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a84  call 0x11bf0
    X86_AT(c, 0x11a84u);
    push32(c, 0x11a89u); f_00011bf0(c); X86_RET(c, 0x11a89u);
L_11a89:
    X86_TICK(c, 36);
    // 011a89  popal 
    X86_AT(c, 0x11a89u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011a8a  xor al, al
    X86_AT(c, 0x11a8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011a8c  ret 
    X86_AT(c, 0x11a8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11a4fu, "ran off the end of a function");
}
void f_00011a52(X86Cpu& c) {
    X86_TICK(c, 15);
    // 011a52  inc eax
    X86_AT(c, 0x11a52u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a53  xor al, 0x7f
    X86_AT(c, 0x11a53u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a55  mov ah, 0x48
    X86_AT(c, 0x11a55u);
    s8(c, 4, 0x48u);
    // 011a57  add ah, bl
    X86_AT(c, 0x11a57u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a59  call 0x11bf0
    X86_AT(c, 0x11a59u);
    push32(c, 0x11a5eu); f_00011bf0(c); X86_RET(c, 0x11a5eu);
    X86_TICK(c, 7);
    // 011a5e  add bh, bh
    X86_AT(c, 0x11a5eu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a60  jae 0x11a89
    X86_AT(c, 0x11a60u);
    if (x86_cc(c, 3)) { goto L_11a89; }
    X86_TICK(c, 73);
    // 011a62  mov al, byte ptr gs:[edi + esi*1 + 0xcc]
    X86_AT(c, 0x11a62u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xCCu))));
    // 011a6a  xor al, 0x7f
    X86_AT(c, 0x11a6au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a6c  mul cl
    X86_AT(c, 0x11a6cu);
    x86_mul(c, g8(c, 1), 1);
    // 011a6e  shr eax, 7
    X86_AT(c, 0x11a6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a71  inc eax
    X86_AT(c, 0x11a71u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a72  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a72u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a7a  shr eax, 7
    X86_AT(c, 0x11a7au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a7d  inc eax
    X86_AT(c, 0x11a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a7e  xor al, 0x7f
    X86_AT(c, 0x11a7eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a80  mov ah, 0x4c
    X86_AT(c, 0x11a80u);
    s8(c, 4, 0x4Cu);
    // 011a82  add ah, bl
    X86_AT(c, 0x11a82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a84  call 0x11bf0
    X86_AT(c, 0x11a84u);
    push32(c, 0x11a89u); f_00011bf0(c); X86_RET(c, 0x11a89u);
L_11a89:
    X86_TICK(c, 36);
    // 011a89  popal 
    X86_AT(c, 0x11a89u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011a8a  xor al, al
    X86_AT(c, 0x11a8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011a8c  ret 
    X86_AT(c, 0x11a8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11a52u, "ran off the end of a function");
}
void f_00011a53(X86Cpu& c) {
    X86_TICK(c, 13);
    // 011a53  xor al, 0x7f
    X86_AT(c, 0x11a53u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a55  mov ah, 0x48
    X86_AT(c, 0x11a55u);
    s8(c, 4, 0x48u);
    // 011a57  add ah, bl
    X86_AT(c, 0x11a57u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a59  call 0x11bf0
    X86_AT(c, 0x11a59u);
    push32(c, 0x11a5eu); f_00011bf0(c); X86_RET(c, 0x11a5eu);
    X86_TICK(c, 7);
    // 011a5e  add bh, bh
    X86_AT(c, 0x11a5eu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a60  jae 0x11a89
    X86_AT(c, 0x11a60u);
    if (x86_cc(c, 3)) { goto L_11a89; }
    X86_TICK(c, 73);
    // 011a62  mov al, byte ptr gs:[edi + esi*1 + 0xcc]
    X86_AT(c, 0x11a62u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xCCu))));
    // 011a6a  xor al, 0x7f
    X86_AT(c, 0x11a6au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a6c  mul cl
    X86_AT(c, 0x11a6cu);
    x86_mul(c, g8(c, 1), 1);
    // 011a6e  shr eax, 7
    X86_AT(c, 0x11a6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a71  inc eax
    X86_AT(c, 0x11a71u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a72  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a72u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a7a  shr eax, 7
    X86_AT(c, 0x11a7au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a7d  inc eax
    X86_AT(c, 0x11a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a7e  xor al, 0x7f
    X86_AT(c, 0x11a7eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a80  mov ah, 0x4c
    X86_AT(c, 0x11a80u);
    s8(c, 4, 0x4Cu);
    // 011a82  add ah, bl
    X86_AT(c, 0x11a82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a84  call 0x11bf0
    X86_AT(c, 0x11a84u);
    push32(c, 0x11a89u); f_00011bf0(c); X86_RET(c, 0x11a89u);
L_11a89:
    X86_TICK(c, 36);
    // 011a89  popal 
    X86_AT(c, 0x11a89u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011a8a  xor al, al
    X86_AT(c, 0x11a8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011a8c  ret 
    X86_AT(c, 0x11a8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11a53u, "ran off the end of a function");
}
void f_00011a55(X86Cpu& c) {
    X86_TICK(c, 11);
    // 011a55  mov ah, 0x48
    X86_AT(c, 0x11a55u);
    s8(c, 4, 0x48u);
    // 011a57  add ah, bl
    X86_AT(c, 0x11a57u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a59  call 0x11bf0
    X86_AT(c, 0x11a59u);
    push32(c, 0x11a5eu); f_00011bf0(c); X86_RET(c, 0x11a5eu);
    X86_TICK(c, 7);
    // 011a5e  add bh, bh
    X86_AT(c, 0x11a5eu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a60  jae 0x11a89
    X86_AT(c, 0x11a60u);
    if (x86_cc(c, 3)) { goto L_11a89; }
    X86_TICK(c, 73);
    // 011a62  mov al, byte ptr gs:[edi + esi*1 + 0xcc]
    X86_AT(c, 0x11a62u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xCCu))));
    // 011a6a  xor al, 0x7f
    X86_AT(c, 0x11a6au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a6c  mul cl
    X86_AT(c, 0x11a6cu);
    x86_mul(c, g8(c, 1), 1);
    // 011a6e  shr eax, 7
    X86_AT(c, 0x11a6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a71  inc eax
    X86_AT(c, 0x11a71u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a72  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a72u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a7a  shr eax, 7
    X86_AT(c, 0x11a7au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a7d  inc eax
    X86_AT(c, 0x11a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a7e  xor al, 0x7f
    X86_AT(c, 0x11a7eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a80  mov ah, 0x4c
    X86_AT(c, 0x11a80u);
    s8(c, 4, 0x4Cu);
    // 011a82  add ah, bl
    X86_AT(c, 0x11a82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a84  call 0x11bf0
    X86_AT(c, 0x11a84u);
    push32(c, 0x11a89u); f_00011bf0(c); X86_RET(c, 0x11a89u);
L_11a89:
    X86_TICK(c, 36);
    // 011a89  popal 
    X86_AT(c, 0x11a89u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011a8a  xor al, al
    X86_AT(c, 0x11a8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011a8c  ret 
    X86_AT(c, 0x11a8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11a55u, "ran off the end of a function");
}
void f_00011a57(X86Cpu& c) {
    X86_TICK(c, 9);
    // 011a57  add ah, bl
    X86_AT(c, 0x11a57u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a59  call 0x11bf0
    X86_AT(c, 0x11a59u);
    push32(c, 0x11a5eu); f_00011bf0(c); X86_RET(c, 0x11a5eu);
    X86_TICK(c, 7);
    // 011a5e  add bh, bh
    X86_AT(c, 0x11a5eu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a60  jae 0x11a89
    X86_AT(c, 0x11a60u);
    if (x86_cc(c, 3)) { goto L_11a89; }
    X86_TICK(c, 73);
    // 011a62  mov al, byte ptr gs:[edi + esi*1 + 0xcc]
    X86_AT(c, 0x11a62u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xCCu))));
    // 011a6a  xor al, 0x7f
    X86_AT(c, 0x11a6au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a6c  mul cl
    X86_AT(c, 0x11a6cu);
    x86_mul(c, g8(c, 1), 1);
    // 011a6e  shr eax, 7
    X86_AT(c, 0x11a6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a71  inc eax
    X86_AT(c, 0x11a71u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a72  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a72u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a7a  shr eax, 7
    X86_AT(c, 0x11a7au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a7d  inc eax
    X86_AT(c, 0x11a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a7e  xor al, 0x7f
    X86_AT(c, 0x11a7eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a80  mov ah, 0x4c
    X86_AT(c, 0x11a80u);
    s8(c, 4, 0x4Cu);
    // 011a82  add ah, bl
    X86_AT(c, 0x11a82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a84  call 0x11bf0
    X86_AT(c, 0x11a84u);
    push32(c, 0x11a89u); f_00011bf0(c); X86_RET(c, 0x11a89u);
L_11a89:
    X86_TICK(c, 36);
    // 011a89  popal 
    X86_AT(c, 0x11a89u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011a8a  xor al, al
    X86_AT(c, 0x11a8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011a8c  ret 
    X86_AT(c, 0x11a8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11a57u, "ran off the end of a function");
}
void f_00011a59(X86Cpu& c) {
    X86_TICK(c, 7);
    // 011a59  call 0x11bf0
    X86_AT(c, 0x11a59u);
    push32(c, 0x11a5eu); f_00011bf0(c); X86_RET(c, 0x11a5eu);
    X86_TICK(c, 7);
    // 011a5e  add bh, bh
    X86_AT(c, 0x11a5eu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a60  jae 0x11a89
    X86_AT(c, 0x11a60u);
    if (x86_cc(c, 3)) { goto L_11a89; }
    X86_TICK(c, 73);
    // 011a62  mov al, byte ptr gs:[edi + esi*1 + 0xcc]
    X86_AT(c, 0x11a62u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xCCu))));
    // 011a6a  xor al, 0x7f
    X86_AT(c, 0x11a6au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a6c  mul cl
    X86_AT(c, 0x11a6cu);
    x86_mul(c, g8(c, 1), 1);
    // 011a6e  shr eax, 7
    X86_AT(c, 0x11a6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a71  inc eax
    X86_AT(c, 0x11a71u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a72  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a72u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a7a  shr eax, 7
    X86_AT(c, 0x11a7au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a7d  inc eax
    X86_AT(c, 0x11a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a7e  xor al, 0x7f
    X86_AT(c, 0x11a7eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a80  mov ah, 0x4c
    X86_AT(c, 0x11a80u);
    s8(c, 4, 0x4Cu);
    // 011a82  add ah, bl
    X86_AT(c, 0x11a82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a84  call 0x11bf0
    X86_AT(c, 0x11a84u);
    push32(c, 0x11a89u); f_00011bf0(c); X86_RET(c, 0x11a89u);
L_11a89:
    X86_TICK(c, 36);
    // 011a89  popal 
    X86_AT(c, 0x11a89u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011a8a  xor al, al
    X86_AT(c, 0x11a8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011a8c  ret 
    X86_AT(c, 0x11a8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11a59u, "ran off the end of a function");
}
void f_00011a5e(X86Cpu& c) {
    X86_TICK(c, 7);
    // 011a5e  add bh, bh
    X86_AT(c, 0x11a5eu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a60  jae 0x11a89
    X86_AT(c, 0x11a60u);
    if (x86_cc(c, 3)) { goto L_11a89; }
    X86_TICK(c, 73);
    // 011a62  mov al, byte ptr gs:[edi + esi*1 + 0xcc]
    X86_AT(c, 0x11a62u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xCCu))));
    // 011a6a  xor al, 0x7f
    X86_AT(c, 0x11a6au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a6c  mul cl
    X86_AT(c, 0x11a6cu);
    x86_mul(c, g8(c, 1), 1);
    // 011a6e  shr eax, 7
    X86_AT(c, 0x11a6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a71  inc eax
    X86_AT(c, 0x11a71u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a72  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a72u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a7a  shr eax, 7
    X86_AT(c, 0x11a7au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a7d  inc eax
    X86_AT(c, 0x11a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a7e  xor al, 0x7f
    X86_AT(c, 0x11a7eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a80  mov ah, 0x4c
    X86_AT(c, 0x11a80u);
    s8(c, 4, 0x4Cu);
    // 011a82  add ah, bl
    X86_AT(c, 0x11a82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a84  call 0x11bf0
    X86_AT(c, 0x11a84u);
    push32(c, 0x11a89u); f_00011bf0(c); X86_RET(c, 0x11a89u);
L_11a89:
    X86_TICK(c, 36);
    // 011a89  popal 
    X86_AT(c, 0x11a89u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011a8a  xor al, al
    X86_AT(c, 0x11a8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011a8c  ret 
    X86_AT(c, 0x11a8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11a5eu, "ran off the end of a function");
}
void f_00011a60(X86Cpu& c) {
    X86_TICK(c, 5);
    // 011a60  jae 0x11a89
    X86_AT(c, 0x11a60u);
    if (x86_cc(c, 3)) { goto L_11a89; }
    X86_TICK(c, 73);
    // 011a62  mov al, byte ptr gs:[edi + esi*1 + 0xcc]
    X86_AT(c, 0x11a62u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xCCu))));
    // 011a6a  xor al, 0x7f
    X86_AT(c, 0x11a6au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a6c  mul cl
    X86_AT(c, 0x11a6cu);
    x86_mul(c, g8(c, 1), 1);
    // 011a6e  shr eax, 7
    X86_AT(c, 0x11a6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a71  inc eax
    X86_AT(c, 0x11a71u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a72  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a72u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a7a  shr eax, 7
    X86_AT(c, 0x11a7au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a7d  inc eax
    X86_AT(c, 0x11a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a7e  xor al, 0x7f
    X86_AT(c, 0x11a7eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a80  mov ah, 0x4c
    X86_AT(c, 0x11a80u);
    s8(c, 4, 0x4Cu);
    // 011a82  add ah, bl
    X86_AT(c, 0x11a82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a84  call 0x11bf0
    X86_AT(c, 0x11a84u);
    push32(c, 0x11a89u); f_00011bf0(c); X86_RET(c, 0x11a89u);
L_11a89:
    X86_TICK(c, 36);
    // 011a89  popal 
    X86_AT(c, 0x11a89u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011a8a  xor al, al
    X86_AT(c, 0x11a8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011a8c  ret 
    X86_AT(c, 0x11a8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11a60u, "ran off the end of a function");
}
void f_00011a62(X86Cpu& c) {
    X86_TICK(c, 73);
    // 011a62  mov al, byte ptr gs:[edi + esi*1 + 0xcc]
    X86_AT(c, 0x11a62u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xCCu))));
    // 011a6a  xor al, 0x7f
    X86_AT(c, 0x11a6au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a6c  mul cl
    X86_AT(c, 0x11a6cu);
    x86_mul(c, g8(c, 1), 1);
    // 011a6e  shr eax, 7
    X86_AT(c, 0x11a6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a71  inc eax
    X86_AT(c, 0x11a71u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a72  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a72u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a7a  shr eax, 7
    X86_AT(c, 0x11a7au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a7d  inc eax
    X86_AT(c, 0x11a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a7e  xor al, 0x7f
    X86_AT(c, 0x11a7eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a80  mov ah, 0x4c
    X86_AT(c, 0x11a80u);
    s8(c, 4, 0x4Cu);
    // 011a82  add ah, bl
    X86_AT(c, 0x11a82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a84  call 0x11bf0
    X86_AT(c, 0x11a84u);
    push32(c, 0x11a89u); f_00011bf0(c); X86_RET(c, 0x11a89u);
    X86_TICK(c, 36);
    // 011a89  popal 
    X86_AT(c, 0x11a89u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011a8a  xor al, al
    X86_AT(c, 0x11a8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011a8c  ret 
    X86_AT(c, 0x11a8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11a62u, "ran off the end of a function");
}
void f_00011a6a(X86Cpu& c) {
    X86_TICK(c, 69);
    // 011a6a  xor al, 0x7f
    X86_AT(c, 0x11a6au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a6c  mul cl
    X86_AT(c, 0x11a6cu);
    x86_mul(c, g8(c, 1), 1);
    // 011a6e  shr eax, 7
    X86_AT(c, 0x11a6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a71  inc eax
    X86_AT(c, 0x11a71u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a72  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a72u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a7a  shr eax, 7
    X86_AT(c, 0x11a7au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a7d  inc eax
    X86_AT(c, 0x11a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a7e  xor al, 0x7f
    X86_AT(c, 0x11a7eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a80  mov ah, 0x4c
    X86_AT(c, 0x11a80u);
    s8(c, 4, 0x4Cu);
    // 011a82  add ah, bl
    X86_AT(c, 0x11a82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a84  call 0x11bf0
    X86_AT(c, 0x11a84u);
    push32(c, 0x11a89u); f_00011bf0(c); X86_RET(c, 0x11a89u);
    X86_TICK(c, 36);
    // 011a89  popal 
    X86_AT(c, 0x11a89u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011a8a  xor al, al
    X86_AT(c, 0x11a8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011a8c  ret 
    X86_AT(c, 0x11a8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11a6au, "ran off the end of a function");
}
void f_00011a6c(X86Cpu& c) {
    X86_TICK(c, 67);
    // 011a6c  mul cl
    X86_AT(c, 0x11a6cu);
    x86_mul(c, g8(c, 1), 1);
    // 011a6e  shr eax, 7
    X86_AT(c, 0x11a6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a71  inc eax
    X86_AT(c, 0x11a71u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a72  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a72u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a7a  shr eax, 7
    X86_AT(c, 0x11a7au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a7d  inc eax
    X86_AT(c, 0x11a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a7e  xor al, 0x7f
    X86_AT(c, 0x11a7eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a80  mov ah, 0x4c
    X86_AT(c, 0x11a80u);
    s8(c, 4, 0x4Cu);
    // 011a82  add ah, bl
    X86_AT(c, 0x11a82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a84  call 0x11bf0
    X86_AT(c, 0x11a84u);
    push32(c, 0x11a89u); f_00011bf0(c); X86_RET(c, 0x11a89u);
    X86_TICK(c, 36);
    // 011a89  popal 
    X86_AT(c, 0x11a89u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011a8a  xor al, al
    X86_AT(c, 0x11a8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011a8c  ret 
    X86_AT(c, 0x11a8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11a6cu, "ran off the end of a function");
}
void f_00011a6e(X86Cpu& c) {
    X86_TICK(c, 45);
    // 011a6e  shr eax, 7
    X86_AT(c, 0x11a6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a71  inc eax
    X86_AT(c, 0x11a71u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a72  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a72u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a7a  shr eax, 7
    X86_AT(c, 0x11a7au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a7d  inc eax
    X86_AT(c, 0x11a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a7e  xor al, 0x7f
    X86_AT(c, 0x11a7eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a80  mov ah, 0x4c
    X86_AT(c, 0x11a80u);
    s8(c, 4, 0x4Cu);
    // 011a82  add ah, bl
    X86_AT(c, 0x11a82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a84  call 0x11bf0
    X86_AT(c, 0x11a84u);
    push32(c, 0x11a89u); f_00011bf0(c); X86_RET(c, 0x11a89u);
    X86_TICK(c, 36);
    // 011a89  popal 
    X86_AT(c, 0x11a89u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011a8a  xor al, al
    X86_AT(c, 0x11a8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011a8c  ret 
    X86_AT(c, 0x11a8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11a6eu, "ran off the end of a function");
}
void f_00011a71(X86Cpu& c) {
    X86_TICK(c, 42);
    // 011a71  inc eax
    X86_AT(c, 0x11a71u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a72  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a72u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a7a  shr eax, 7
    X86_AT(c, 0x11a7au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a7d  inc eax
    X86_AT(c, 0x11a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a7e  xor al, 0x7f
    X86_AT(c, 0x11a7eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a80  mov ah, 0x4c
    X86_AT(c, 0x11a80u);
    s8(c, 4, 0x4Cu);
    // 011a82  add ah, bl
    X86_AT(c, 0x11a82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a84  call 0x11bf0
    X86_AT(c, 0x11a84u);
    push32(c, 0x11a89u); f_00011bf0(c); X86_RET(c, 0x11a89u);
    X86_TICK(c, 36);
    // 011a89  popal 
    X86_AT(c, 0x11a89u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011a8a  xor al, al
    X86_AT(c, 0x11a8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011a8c  ret 
    X86_AT(c, 0x11a8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11a71u, "ran off the end of a function");
}
void f_00011a72(X86Cpu& c) {
    X86_TICK(c, 40);
    // 011a72  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a72u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a7a  shr eax, 7
    X86_AT(c, 0x11a7au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a7d  inc eax
    X86_AT(c, 0x11a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a7e  xor al, 0x7f
    X86_AT(c, 0x11a7eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a80  mov ah, 0x4c
    X86_AT(c, 0x11a80u);
    s8(c, 4, 0x4Cu);
    // 011a82  add ah, bl
    X86_AT(c, 0x11a82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a84  call 0x11bf0
    X86_AT(c, 0x11a84u);
    push32(c, 0x11a89u); f_00011bf0(c); X86_RET(c, 0x11a89u);
    X86_TICK(c, 36);
    // 011a89  popal 
    X86_AT(c, 0x11a89u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011a8a  xor al, al
    X86_AT(c, 0x11a8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011a8c  ret 
    X86_AT(c, 0x11a8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11a72u, "ran off the end of a function");
}
void f_00011a7a(X86Cpu& c) {
    X86_TICK(c, 18);
    // 011a7a  shr eax, 7
    X86_AT(c, 0x11a7au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a7d  inc eax
    X86_AT(c, 0x11a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a7e  xor al, 0x7f
    X86_AT(c, 0x11a7eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a80  mov ah, 0x4c
    X86_AT(c, 0x11a80u);
    s8(c, 4, 0x4Cu);
    // 011a82  add ah, bl
    X86_AT(c, 0x11a82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a84  call 0x11bf0
    X86_AT(c, 0x11a84u);
    push32(c, 0x11a89u); f_00011bf0(c); X86_RET(c, 0x11a89u);
    X86_TICK(c, 36);
    // 011a89  popal 
    X86_AT(c, 0x11a89u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011a8a  xor al, al
    X86_AT(c, 0x11a8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011a8c  ret 
    X86_AT(c, 0x11a8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11a7au, "ran off the end of a function");
}
void f_00011a7d(X86Cpu& c) {
    X86_TICK(c, 15);
    // 011a7d  inc eax
    X86_AT(c, 0x11a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a7e  xor al, 0x7f
    X86_AT(c, 0x11a7eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a80  mov ah, 0x4c
    X86_AT(c, 0x11a80u);
    s8(c, 4, 0x4Cu);
    // 011a82  add ah, bl
    X86_AT(c, 0x11a82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a84  call 0x11bf0
    X86_AT(c, 0x11a84u);
    push32(c, 0x11a89u); f_00011bf0(c); X86_RET(c, 0x11a89u);
    X86_TICK(c, 36);
    // 011a89  popal 
    X86_AT(c, 0x11a89u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011a8a  xor al, al
    X86_AT(c, 0x11a8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011a8c  ret 
    X86_AT(c, 0x11a8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11a7du, "ran off the end of a function");
}
void f_00011a7e(X86Cpu& c) {
    X86_TICK(c, 13);
    // 011a7e  xor al, 0x7f
    X86_AT(c, 0x11a7eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a80  mov ah, 0x4c
    X86_AT(c, 0x11a80u);
    s8(c, 4, 0x4Cu);
    // 011a82  add ah, bl
    X86_AT(c, 0x11a82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a84  call 0x11bf0
    X86_AT(c, 0x11a84u);
    push32(c, 0x11a89u); f_00011bf0(c); X86_RET(c, 0x11a89u);
    X86_TICK(c, 36);
    // 011a89  popal 
    X86_AT(c, 0x11a89u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011a8a  xor al, al
    X86_AT(c, 0x11a8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011a8c  ret 
    X86_AT(c, 0x11a8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11a7eu, "ran off the end of a function");
}
void f_00011a80(X86Cpu& c) {
    X86_TICK(c, 11);
    // 011a80  mov ah, 0x4c
    X86_AT(c, 0x11a80u);
    s8(c, 4, 0x4Cu);
    // 011a82  add ah, bl
    X86_AT(c, 0x11a82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a84  call 0x11bf0
    X86_AT(c, 0x11a84u);
    push32(c, 0x11a89u); f_00011bf0(c); X86_RET(c, 0x11a89u);
    X86_TICK(c, 36);
    // 011a89  popal 
    X86_AT(c, 0x11a89u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011a8a  xor al, al
    X86_AT(c, 0x11a8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011a8c  ret 
    X86_AT(c, 0x11a8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11a80u, "ran off the end of a function");
}
void f_00011a82(X86Cpu& c) {
    X86_TICK(c, 9);
    // 011a82  add ah, bl
    X86_AT(c, 0x11a82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a84  call 0x11bf0
    X86_AT(c, 0x11a84u);
    push32(c, 0x11a89u); f_00011bf0(c); X86_RET(c, 0x11a89u);
    X86_TICK(c, 36);
    // 011a89  popal 
    X86_AT(c, 0x11a89u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011a8a  xor al, al
    X86_AT(c, 0x11a8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011a8c  ret 
    X86_AT(c, 0x11a8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11a82u, "ran off the end of a function");
}
void f_00011a84(X86Cpu& c) {
    X86_TICK(c, 7);
    // 011a84  call 0x11bf0
    X86_AT(c, 0x11a84u);
    push32(c, 0x11a89u); f_00011bf0(c); X86_RET(c, 0x11a89u);
    X86_TICK(c, 36);
    // 011a89  popal 
    X86_AT(c, 0x11a89u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011a8a  xor al, al
    X86_AT(c, 0x11a8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011a8c  ret 
    X86_AT(c, 0x11a8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11a84u, "ran off the end of a function");
}
void f_00011a89(X86Cpu& c) {
    X86_TICK(c, 36);
    // 011a89  popal 
    X86_AT(c, 0x11a89u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011a8a  xor al, al
    X86_AT(c, 0x11a8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011a8c  ret 
    X86_AT(c, 0x11a8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11a89u, "ran off the end of a function");
}
void f_00011a8a(X86Cpu& c) {
    X86_TICK(c, 12);
    // 011a8a  xor al, al
    X86_AT(c, 0x11a8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011a8c  ret 
    X86_AT(c, 0x11a8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11a8au, "ran off the end of a function");
}
void f_00011a8c(X86Cpu& c) {
    X86_TICK(c, 10);
    // 011a8c  ret 
    X86_AT(c, 0x11a8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11a8cu, "ran off the end of a function");
}
void f_00011a90(X86Cpu& c) {
    X86_TICK(c, 13);
    // 011a90  push eax
    X86_AT(c, 0x11a90u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 011a91  push edx
    X86_AT(c, 0x11a91u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 011a92  mov dx, 0x4d8
    X86_AT(c, 0x11a92u);
    s16(c, 2, 0x4D8u);
    // 011a96  test bl, bl
    X86_AT(c, 0x11a96u);
    (void)x86_logic(c, g8(c, 3) & g8(c, 3), 1);
    // 011a98  je 0x11abb
    X86_AT(c, 0x11a98u);
    if (x86_cc(c, 4)) { goto L_11abb; }
    X86_TICK(c, 13);
    // 011a9a  mov ah, 0x25
    X86_AT(c, 0x11a9au);
    s8(c, 4, 0x25u);
    // 011a9c  mov al, cl
    X86_AT(c, 0x11a9cu);
    s8(c, 0, g8(c, 1));
    // 011a9e  and al, 3
    X86_AT(c, 0x11a9eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x3u, 1)); }
    // 011aa0  call 0x11bf0
    X86_AT(c, 0x11aa0u);
    push32(c, 0x11aa5u); f_00011bf0(c); X86_RET(c, 0x11aa5u);
    X86_TICK(c, 14);
    // 011aa5  mov eax, ecx
    X86_AT(c, 0x11aa5u);
    c.r[0] = c.r[1];
    // 011aa7  shr eax, 2
    X86_AT(c, 0x11aa7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[0] = r; }
    // 011aaa  mov ah, 0x24
    X86_AT(c, 0x11aaau);
    s8(c, 4, 0x24u);
    // 011aac  call 0x11bf0
    X86_AT(c, 0x11aacu);
    push32(c, 0x11ab1u); f_00011bf0(c); X86_RET(c, 0x11ab1u);
    X86_TICK(c, 15);
    // 011ab1  mov al, byte ptr gs:[edi + 0x27]
    X86_AT(c, 0x11ab1u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x27u))));
    // 011ab5  or al, 5
    X86_AT(c, 0x11ab5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x5u, 1)); }
    // 011ab7  mov ah, 0x27
    X86_AT(c, 0x11ab7u);
    s8(c, 4, 0x27u);
    // 011ab9  jmp 0x11ac5
    X86_AT(c, 0x11ab9u);
    goto L_11ac5;
L_11abb:
    X86_TICK(c, 10);
    // 011abb  mov al, byte ptr gs:[edi + 0x27]
    X86_AT(c, 0x11abbu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x27u))));
    // 011abf  and al, 0xfa
    X86_AT(c, 0x11abfu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFAu, 1)); }
    // 011ac1  or al, 0x10
    X86_AT(c, 0x11ac1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x10u, 1)); }
    // 011ac3  mov ah, 0x27
    X86_AT(c, 0x11ac3u);
    s8(c, 4, 0x27u);
L_11ac5:
    X86_TICK(c, 7);
    // 011ac5  call 0x11bf0
    X86_AT(c, 0x11ac5u);
    push32(c, 0x11acau); f_00011bf0(c); X86_RET(c, 0x11acau);
    X86_TICK(c, 20);
    // 011aca  pop edx
    X86_AT(c, 0x11acau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011acb  pop eax
    X86_AT(c, 0x11acbu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011acc  xor al, al
    X86_AT(c, 0x11accu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011ace  ret 
    X86_AT(c, 0x11aceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11a90u, "ran off the end of a function");
}
void f_00011a91(X86Cpu& c) {
    X86_TICK(c, 11);
    // 011a91  push edx
    X86_AT(c, 0x11a91u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 011a92  mov dx, 0x4d8
    X86_AT(c, 0x11a92u);
    s16(c, 2, 0x4D8u);
    // 011a96  test bl, bl
    X86_AT(c, 0x11a96u);
    (void)x86_logic(c, g8(c, 3) & g8(c, 3), 1);
    // 011a98  je 0x11abb
    X86_AT(c, 0x11a98u);
    if (x86_cc(c, 4)) { goto L_11abb; }
    X86_TICK(c, 13);
    // 011a9a  mov ah, 0x25
    X86_AT(c, 0x11a9au);
    s8(c, 4, 0x25u);
    // 011a9c  mov al, cl
    X86_AT(c, 0x11a9cu);
    s8(c, 0, g8(c, 1));
    // 011a9e  and al, 3
    X86_AT(c, 0x11a9eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x3u, 1)); }
    // 011aa0  call 0x11bf0
    X86_AT(c, 0x11aa0u);
    push32(c, 0x11aa5u); f_00011bf0(c); X86_RET(c, 0x11aa5u);
    X86_TICK(c, 14);
    // 011aa5  mov eax, ecx
    X86_AT(c, 0x11aa5u);
    c.r[0] = c.r[1];
    // 011aa7  shr eax, 2
    X86_AT(c, 0x11aa7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[0] = r; }
    // 011aaa  mov ah, 0x24
    X86_AT(c, 0x11aaau);
    s8(c, 4, 0x24u);
    // 011aac  call 0x11bf0
    X86_AT(c, 0x11aacu);
    push32(c, 0x11ab1u); f_00011bf0(c); X86_RET(c, 0x11ab1u);
    X86_TICK(c, 15);
    // 011ab1  mov al, byte ptr gs:[edi + 0x27]
    X86_AT(c, 0x11ab1u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x27u))));
    // 011ab5  or al, 5
    X86_AT(c, 0x11ab5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x5u, 1)); }
    // 011ab7  mov ah, 0x27
    X86_AT(c, 0x11ab7u);
    s8(c, 4, 0x27u);
    // 011ab9  jmp 0x11ac5
    X86_AT(c, 0x11ab9u);
    goto L_11ac5;
L_11abb:
    X86_TICK(c, 10);
    // 011abb  mov al, byte ptr gs:[edi + 0x27]
    X86_AT(c, 0x11abbu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x27u))));
    // 011abf  and al, 0xfa
    X86_AT(c, 0x11abfu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFAu, 1)); }
    // 011ac1  or al, 0x10
    X86_AT(c, 0x11ac1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x10u, 1)); }
    // 011ac3  mov ah, 0x27
    X86_AT(c, 0x11ac3u);
    s8(c, 4, 0x27u);
L_11ac5:
    X86_TICK(c, 7);
    // 011ac5  call 0x11bf0
    X86_AT(c, 0x11ac5u);
    push32(c, 0x11acau); f_00011bf0(c); X86_RET(c, 0x11acau);
    X86_TICK(c, 20);
    // 011aca  pop edx
    X86_AT(c, 0x11acau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011acb  pop eax
    X86_AT(c, 0x11acbu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011acc  xor al, al
    X86_AT(c, 0x11accu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011ace  ret 
    X86_AT(c, 0x11aceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11a91u, "ran off the end of a function");
}
void f_00011a92(X86Cpu& c) {
    X86_TICK(c, 9);
    // 011a92  mov dx, 0x4d8
    X86_AT(c, 0x11a92u);
    s16(c, 2, 0x4D8u);
    // 011a96  test bl, bl
    X86_AT(c, 0x11a96u);
    (void)x86_logic(c, g8(c, 3) & g8(c, 3), 1);
    // 011a98  je 0x11abb
    X86_AT(c, 0x11a98u);
    if (x86_cc(c, 4)) { goto L_11abb; }
    X86_TICK(c, 13);
    // 011a9a  mov ah, 0x25
    X86_AT(c, 0x11a9au);
    s8(c, 4, 0x25u);
    // 011a9c  mov al, cl
    X86_AT(c, 0x11a9cu);
    s8(c, 0, g8(c, 1));
    // 011a9e  and al, 3
    X86_AT(c, 0x11a9eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x3u, 1)); }
    // 011aa0  call 0x11bf0
    X86_AT(c, 0x11aa0u);
    push32(c, 0x11aa5u); f_00011bf0(c); X86_RET(c, 0x11aa5u);
    X86_TICK(c, 14);
    // 011aa5  mov eax, ecx
    X86_AT(c, 0x11aa5u);
    c.r[0] = c.r[1];
    // 011aa7  shr eax, 2
    X86_AT(c, 0x11aa7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[0] = r; }
    // 011aaa  mov ah, 0x24
    X86_AT(c, 0x11aaau);
    s8(c, 4, 0x24u);
    // 011aac  call 0x11bf0
    X86_AT(c, 0x11aacu);
    push32(c, 0x11ab1u); f_00011bf0(c); X86_RET(c, 0x11ab1u);
    X86_TICK(c, 15);
    // 011ab1  mov al, byte ptr gs:[edi + 0x27]
    X86_AT(c, 0x11ab1u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x27u))));
    // 011ab5  or al, 5
    X86_AT(c, 0x11ab5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x5u, 1)); }
    // 011ab7  mov ah, 0x27
    X86_AT(c, 0x11ab7u);
    s8(c, 4, 0x27u);
    // 011ab9  jmp 0x11ac5
    X86_AT(c, 0x11ab9u);
    goto L_11ac5;
L_11abb:
    X86_TICK(c, 10);
    // 011abb  mov al, byte ptr gs:[edi + 0x27]
    X86_AT(c, 0x11abbu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x27u))));
    // 011abf  and al, 0xfa
    X86_AT(c, 0x11abfu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFAu, 1)); }
    // 011ac1  or al, 0x10
    X86_AT(c, 0x11ac1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x10u, 1)); }
    // 011ac3  mov ah, 0x27
    X86_AT(c, 0x11ac3u);
    s8(c, 4, 0x27u);
L_11ac5:
    X86_TICK(c, 7);
    // 011ac5  call 0x11bf0
    X86_AT(c, 0x11ac5u);
    push32(c, 0x11acau); f_00011bf0(c); X86_RET(c, 0x11acau);
    X86_TICK(c, 20);
    // 011aca  pop edx
    X86_AT(c, 0x11acau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011acb  pop eax
    X86_AT(c, 0x11acbu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011acc  xor al, al
    X86_AT(c, 0x11accu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011ace  ret 
    X86_AT(c, 0x11aceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11a92u, "ran off the end of a function");
}
void f_00011a96(X86Cpu& c) {
    X86_TICK(c, 7);
    // 011a96  test bl, bl
    X86_AT(c, 0x11a96u);
    (void)x86_logic(c, g8(c, 3) & g8(c, 3), 1);
    // 011a98  je 0x11abb
    X86_AT(c, 0x11a98u);
    if (x86_cc(c, 4)) { goto L_11abb; }
    X86_TICK(c, 13);
    // 011a9a  mov ah, 0x25
    X86_AT(c, 0x11a9au);
    s8(c, 4, 0x25u);
    // 011a9c  mov al, cl
    X86_AT(c, 0x11a9cu);
    s8(c, 0, g8(c, 1));
    // 011a9e  and al, 3
    X86_AT(c, 0x11a9eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x3u, 1)); }
    // 011aa0  call 0x11bf0
    X86_AT(c, 0x11aa0u);
    push32(c, 0x11aa5u); f_00011bf0(c); X86_RET(c, 0x11aa5u);
    X86_TICK(c, 14);
    // 011aa5  mov eax, ecx
    X86_AT(c, 0x11aa5u);
    c.r[0] = c.r[1];
    // 011aa7  shr eax, 2
    X86_AT(c, 0x11aa7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[0] = r; }
    // 011aaa  mov ah, 0x24
    X86_AT(c, 0x11aaau);
    s8(c, 4, 0x24u);
    // 011aac  call 0x11bf0
    X86_AT(c, 0x11aacu);
    push32(c, 0x11ab1u); f_00011bf0(c); X86_RET(c, 0x11ab1u);
    X86_TICK(c, 15);
    // 011ab1  mov al, byte ptr gs:[edi + 0x27]
    X86_AT(c, 0x11ab1u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x27u))));
    // 011ab5  or al, 5
    X86_AT(c, 0x11ab5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x5u, 1)); }
    // 011ab7  mov ah, 0x27
    X86_AT(c, 0x11ab7u);
    s8(c, 4, 0x27u);
    // 011ab9  jmp 0x11ac5
    X86_AT(c, 0x11ab9u);
    goto L_11ac5;
L_11abb:
    X86_TICK(c, 10);
    // 011abb  mov al, byte ptr gs:[edi + 0x27]
    X86_AT(c, 0x11abbu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x27u))));
    // 011abf  and al, 0xfa
    X86_AT(c, 0x11abfu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFAu, 1)); }
    // 011ac1  or al, 0x10
    X86_AT(c, 0x11ac1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x10u, 1)); }
    // 011ac3  mov ah, 0x27
    X86_AT(c, 0x11ac3u);
    s8(c, 4, 0x27u);
L_11ac5:
    X86_TICK(c, 7);
    // 011ac5  call 0x11bf0
    X86_AT(c, 0x11ac5u);
    push32(c, 0x11acau); f_00011bf0(c); X86_RET(c, 0x11acau);
    X86_TICK(c, 20);
    // 011aca  pop edx
    X86_AT(c, 0x11acau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011acb  pop eax
    X86_AT(c, 0x11acbu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011acc  xor al, al
    X86_AT(c, 0x11accu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011ace  ret 
    X86_AT(c, 0x11aceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11a96u, "ran off the end of a function");
}
void f_00011a98(X86Cpu& c) {
    X86_TICK(c, 5);
    // 011a98  je 0x11abb
    X86_AT(c, 0x11a98u);
    if (x86_cc(c, 4)) { goto L_11abb; }
    X86_TICK(c, 13);
    // 011a9a  mov ah, 0x25
    X86_AT(c, 0x11a9au);
    s8(c, 4, 0x25u);
    // 011a9c  mov al, cl
    X86_AT(c, 0x11a9cu);
    s8(c, 0, g8(c, 1));
    // 011a9e  and al, 3
    X86_AT(c, 0x11a9eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x3u, 1)); }
    // 011aa0  call 0x11bf0
    X86_AT(c, 0x11aa0u);
    push32(c, 0x11aa5u); f_00011bf0(c); X86_RET(c, 0x11aa5u);
    X86_TICK(c, 14);
    // 011aa5  mov eax, ecx
    X86_AT(c, 0x11aa5u);
    c.r[0] = c.r[1];
    // 011aa7  shr eax, 2
    X86_AT(c, 0x11aa7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[0] = r; }
    // 011aaa  mov ah, 0x24
    X86_AT(c, 0x11aaau);
    s8(c, 4, 0x24u);
    // 011aac  call 0x11bf0
    X86_AT(c, 0x11aacu);
    push32(c, 0x11ab1u); f_00011bf0(c); X86_RET(c, 0x11ab1u);
    X86_TICK(c, 15);
    // 011ab1  mov al, byte ptr gs:[edi + 0x27]
    X86_AT(c, 0x11ab1u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x27u))));
    // 011ab5  or al, 5
    X86_AT(c, 0x11ab5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x5u, 1)); }
    // 011ab7  mov ah, 0x27
    X86_AT(c, 0x11ab7u);
    s8(c, 4, 0x27u);
    // 011ab9  jmp 0x11ac5
    X86_AT(c, 0x11ab9u);
    goto L_11ac5;
L_11abb:
    X86_TICK(c, 10);
    // 011abb  mov al, byte ptr gs:[edi + 0x27]
    X86_AT(c, 0x11abbu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x27u))));
    // 011abf  and al, 0xfa
    X86_AT(c, 0x11abfu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFAu, 1)); }
    // 011ac1  or al, 0x10
    X86_AT(c, 0x11ac1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x10u, 1)); }
    // 011ac3  mov ah, 0x27
    X86_AT(c, 0x11ac3u);
    s8(c, 4, 0x27u);
L_11ac5:
    X86_TICK(c, 7);
    // 011ac5  call 0x11bf0
    X86_AT(c, 0x11ac5u);
    push32(c, 0x11acau); f_00011bf0(c); X86_RET(c, 0x11acau);
    X86_TICK(c, 20);
    // 011aca  pop edx
    X86_AT(c, 0x11acau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011acb  pop eax
    X86_AT(c, 0x11acbu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011acc  xor al, al
    X86_AT(c, 0x11accu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011ace  ret 
    X86_AT(c, 0x11aceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11a98u, "ran off the end of a function");
}
void f_00011a9a(X86Cpu& c) {
    X86_TICK(c, 13);
    // 011a9a  mov ah, 0x25
    X86_AT(c, 0x11a9au);
    s8(c, 4, 0x25u);
    // 011a9c  mov al, cl
    X86_AT(c, 0x11a9cu);
    s8(c, 0, g8(c, 1));
    // 011a9e  and al, 3
    X86_AT(c, 0x11a9eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x3u, 1)); }
    // 011aa0  call 0x11bf0
    X86_AT(c, 0x11aa0u);
    push32(c, 0x11aa5u); f_00011bf0(c); X86_RET(c, 0x11aa5u);
    X86_TICK(c, 14);
    // 011aa5  mov eax, ecx
    X86_AT(c, 0x11aa5u);
    c.r[0] = c.r[1];
    // 011aa7  shr eax, 2
    X86_AT(c, 0x11aa7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[0] = r; }
    // 011aaa  mov ah, 0x24
    X86_AT(c, 0x11aaau);
    s8(c, 4, 0x24u);
    // 011aac  call 0x11bf0
    X86_AT(c, 0x11aacu);
    push32(c, 0x11ab1u); f_00011bf0(c); X86_RET(c, 0x11ab1u);
    X86_TICK(c, 15);
    // 011ab1  mov al, byte ptr gs:[edi + 0x27]
    X86_AT(c, 0x11ab1u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x27u))));
    // 011ab5  or al, 5
    X86_AT(c, 0x11ab5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x5u, 1)); }
    // 011ab7  mov ah, 0x27
    X86_AT(c, 0x11ab7u);
    s8(c, 4, 0x27u);
    // 011ab9  jmp 0x11ac5
    X86_AT(c, 0x11ab9u);
    goto L_11ac5;
L_11ac5:
    X86_TICK(c, 7);
    // 011ac5  call 0x11bf0
    X86_AT(c, 0x11ac5u);
    push32(c, 0x11acau); f_00011bf0(c); X86_RET(c, 0x11acau);
    X86_TICK(c, 20);
    // 011aca  pop edx
    X86_AT(c, 0x11acau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011acb  pop eax
    X86_AT(c, 0x11acbu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011acc  xor al, al
    X86_AT(c, 0x11accu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011ace  ret 
    X86_AT(c, 0x11aceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11a9au, "ran off the end of a function");
}
void f_00011a9c(X86Cpu& c) {
    X86_TICK(c, 11);
    // 011a9c  mov al, cl
    X86_AT(c, 0x11a9cu);
    s8(c, 0, g8(c, 1));
    // 011a9e  and al, 3
    X86_AT(c, 0x11a9eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x3u, 1)); }
    // 011aa0  call 0x11bf0
    X86_AT(c, 0x11aa0u);
    push32(c, 0x11aa5u); f_00011bf0(c); X86_RET(c, 0x11aa5u);
    X86_TICK(c, 14);
    // 011aa5  mov eax, ecx
    X86_AT(c, 0x11aa5u);
    c.r[0] = c.r[1];
    // 011aa7  shr eax, 2
    X86_AT(c, 0x11aa7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[0] = r; }
    // 011aaa  mov ah, 0x24
    X86_AT(c, 0x11aaau);
    s8(c, 4, 0x24u);
    // 011aac  call 0x11bf0
    X86_AT(c, 0x11aacu);
    push32(c, 0x11ab1u); f_00011bf0(c); X86_RET(c, 0x11ab1u);
    X86_TICK(c, 15);
    // 011ab1  mov al, byte ptr gs:[edi + 0x27]
    X86_AT(c, 0x11ab1u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x27u))));
    // 011ab5  or al, 5
    X86_AT(c, 0x11ab5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x5u, 1)); }
    // 011ab7  mov ah, 0x27
    X86_AT(c, 0x11ab7u);
    s8(c, 4, 0x27u);
    // 011ab9  jmp 0x11ac5
    X86_AT(c, 0x11ab9u);
    goto L_11ac5;
L_11ac5:
    X86_TICK(c, 7);
    // 011ac5  call 0x11bf0
    X86_AT(c, 0x11ac5u);
    push32(c, 0x11acau); f_00011bf0(c); X86_RET(c, 0x11acau);
    X86_TICK(c, 20);
    // 011aca  pop edx
    X86_AT(c, 0x11acau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011acb  pop eax
    X86_AT(c, 0x11acbu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011acc  xor al, al
    X86_AT(c, 0x11accu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011ace  ret 
    X86_AT(c, 0x11aceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11a9cu, "ran off the end of a function");
}
void f_00011a9e(X86Cpu& c) {
    X86_TICK(c, 9);
    // 011a9e  and al, 3
    X86_AT(c, 0x11a9eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x3u, 1)); }
    // 011aa0  call 0x11bf0
    X86_AT(c, 0x11aa0u);
    push32(c, 0x11aa5u); f_00011bf0(c); X86_RET(c, 0x11aa5u);
    X86_TICK(c, 14);
    // 011aa5  mov eax, ecx
    X86_AT(c, 0x11aa5u);
    c.r[0] = c.r[1];
    // 011aa7  shr eax, 2
    X86_AT(c, 0x11aa7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[0] = r; }
    // 011aaa  mov ah, 0x24
    X86_AT(c, 0x11aaau);
    s8(c, 4, 0x24u);
    // 011aac  call 0x11bf0
    X86_AT(c, 0x11aacu);
    push32(c, 0x11ab1u); f_00011bf0(c); X86_RET(c, 0x11ab1u);
    X86_TICK(c, 15);
    // 011ab1  mov al, byte ptr gs:[edi + 0x27]
    X86_AT(c, 0x11ab1u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x27u))));
    // 011ab5  or al, 5
    X86_AT(c, 0x11ab5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x5u, 1)); }
    // 011ab7  mov ah, 0x27
    X86_AT(c, 0x11ab7u);
    s8(c, 4, 0x27u);
    // 011ab9  jmp 0x11ac5
    X86_AT(c, 0x11ab9u);
    goto L_11ac5;
L_11ac5:
    X86_TICK(c, 7);
    // 011ac5  call 0x11bf0
    X86_AT(c, 0x11ac5u);
    push32(c, 0x11acau); f_00011bf0(c); X86_RET(c, 0x11acau);
    X86_TICK(c, 20);
    // 011aca  pop edx
    X86_AT(c, 0x11acau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011acb  pop eax
    X86_AT(c, 0x11acbu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011acc  xor al, al
    X86_AT(c, 0x11accu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011ace  ret 
    X86_AT(c, 0x11aceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11a9eu, "ran off the end of a function");
}
void f_00011aa0(X86Cpu& c) {
    X86_TICK(c, 7);
    // 011aa0  call 0x11bf0
    X86_AT(c, 0x11aa0u);
    push32(c, 0x11aa5u); f_00011bf0(c); X86_RET(c, 0x11aa5u);
    X86_TICK(c, 14);
    // 011aa5  mov eax, ecx
    X86_AT(c, 0x11aa5u);
    c.r[0] = c.r[1];
    // 011aa7  shr eax, 2
    X86_AT(c, 0x11aa7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[0] = r; }
    // 011aaa  mov ah, 0x24
    X86_AT(c, 0x11aaau);
    s8(c, 4, 0x24u);
    // 011aac  call 0x11bf0
    X86_AT(c, 0x11aacu);
    push32(c, 0x11ab1u); f_00011bf0(c); X86_RET(c, 0x11ab1u);
    X86_TICK(c, 15);
    // 011ab1  mov al, byte ptr gs:[edi + 0x27]
    X86_AT(c, 0x11ab1u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x27u))));
    // 011ab5  or al, 5
    X86_AT(c, 0x11ab5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x5u, 1)); }
    // 011ab7  mov ah, 0x27
    X86_AT(c, 0x11ab7u);
    s8(c, 4, 0x27u);
    // 011ab9  jmp 0x11ac5
    X86_AT(c, 0x11ab9u);
    goto L_11ac5;
L_11ac5:
    X86_TICK(c, 7);
    // 011ac5  call 0x11bf0
    X86_AT(c, 0x11ac5u);
    push32(c, 0x11acau); f_00011bf0(c); X86_RET(c, 0x11acau);
    X86_TICK(c, 20);
    // 011aca  pop edx
    X86_AT(c, 0x11acau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011acb  pop eax
    X86_AT(c, 0x11acbu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011acc  xor al, al
    X86_AT(c, 0x11accu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011ace  ret 
    X86_AT(c, 0x11aceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11aa0u, "ran off the end of a function");
}
void f_00011aa5(X86Cpu& c) {
    X86_TICK(c, 14);
    // 011aa5  mov eax, ecx
    X86_AT(c, 0x11aa5u);
    c.r[0] = c.r[1];
    // 011aa7  shr eax, 2
    X86_AT(c, 0x11aa7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[0] = r; }
    // 011aaa  mov ah, 0x24
    X86_AT(c, 0x11aaau);
    s8(c, 4, 0x24u);
    // 011aac  call 0x11bf0
    X86_AT(c, 0x11aacu);
    push32(c, 0x11ab1u); f_00011bf0(c); X86_RET(c, 0x11ab1u);
    X86_TICK(c, 15);
    // 011ab1  mov al, byte ptr gs:[edi + 0x27]
    X86_AT(c, 0x11ab1u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x27u))));
    // 011ab5  or al, 5
    X86_AT(c, 0x11ab5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x5u, 1)); }
    // 011ab7  mov ah, 0x27
    X86_AT(c, 0x11ab7u);
    s8(c, 4, 0x27u);
    // 011ab9  jmp 0x11ac5
    X86_AT(c, 0x11ab9u);
    goto L_11ac5;
L_11ac5:
    X86_TICK(c, 7);
    // 011ac5  call 0x11bf0
    X86_AT(c, 0x11ac5u);
    push32(c, 0x11acau); f_00011bf0(c); X86_RET(c, 0x11acau);
    X86_TICK(c, 20);
    // 011aca  pop edx
    X86_AT(c, 0x11acau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011acb  pop eax
    X86_AT(c, 0x11acbu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011acc  xor al, al
    X86_AT(c, 0x11accu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011ace  ret 
    X86_AT(c, 0x11aceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11aa5u, "ran off the end of a function");
}
void f_00011aa7(X86Cpu& c) {
    X86_TICK(c, 12);
    // 011aa7  shr eax, 2
    X86_AT(c, 0x11aa7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[0] = r; }
    // 011aaa  mov ah, 0x24
    X86_AT(c, 0x11aaau);
    s8(c, 4, 0x24u);
    // 011aac  call 0x11bf0
    X86_AT(c, 0x11aacu);
    push32(c, 0x11ab1u); f_00011bf0(c); X86_RET(c, 0x11ab1u);
    X86_TICK(c, 15);
    // 011ab1  mov al, byte ptr gs:[edi + 0x27]
    X86_AT(c, 0x11ab1u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x27u))));
    // 011ab5  or al, 5
    X86_AT(c, 0x11ab5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x5u, 1)); }
    // 011ab7  mov ah, 0x27
    X86_AT(c, 0x11ab7u);
    s8(c, 4, 0x27u);
    // 011ab9  jmp 0x11ac5
    X86_AT(c, 0x11ab9u);
    goto L_11ac5;
L_11ac5:
    X86_TICK(c, 7);
    // 011ac5  call 0x11bf0
    X86_AT(c, 0x11ac5u);
    push32(c, 0x11acau); f_00011bf0(c); X86_RET(c, 0x11acau);
    X86_TICK(c, 20);
    // 011aca  pop edx
    X86_AT(c, 0x11acau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011acb  pop eax
    X86_AT(c, 0x11acbu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011acc  xor al, al
    X86_AT(c, 0x11accu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011ace  ret 
    X86_AT(c, 0x11aceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11aa7u, "ran off the end of a function");
}
void f_00011aaa(X86Cpu& c) {
    X86_TICK(c, 9);
    // 011aaa  mov ah, 0x24
    X86_AT(c, 0x11aaau);
    s8(c, 4, 0x24u);
    // 011aac  call 0x11bf0
    X86_AT(c, 0x11aacu);
    push32(c, 0x11ab1u); f_00011bf0(c); X86_RET(c, 0x11ab1u);
    X86_TICK(c, 15);
    // 011ab1  mov al, byte ptr gs:[edi + 0x27]
    X86_AT(c, 0x11ab1u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x27u))));
    // 011ab5  or al, 5
    X86_AT(c, 0x11ab5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x5u, 1)); }
    // 011ab7  mov ah, 0x27
    X86_AT(c, 0x11ab7u);
    s8(c, 4, 0x27u);
    // 011ab9  jmp 0x11ac5
    X86_AT(c, 0x11ab9u);
    goto L_11ac5;
L_11ac5:
    X86_TICK(c, 7);
    // 011ac5  call 0x11bf0
    X86_AT(c, 0x11ac5u);
    push32(c, 0x11acau); f_00011bf0(c); X86_RET(c, 0x11acau);
    X86_TICK(c, 20);
    // 011aca  pop edx
    X86_AT(c, 0x11acau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011acb  pop eax
    X86_AT(c, 0x11acbu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011acc  xor al, al
    X86_AT(c, 0x11accu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011ace  ret 
    X86_AT(c, 0x11aceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11aaau, "ran off the end of a function");
}
void f_00011aac(X86Cpu& c) {
    X86_TICK(c, 7);
    // 011aac  call 0x11bf0
    X86_AT(c, 0x11aacu);
    push32(c, 0x11ab1u); f_00011bf0(c); X86_RET(c, 0x11ab1u);
    X86_TICK(c, 15);
    // 011ab1  mov al, byte ptr gs:[edi + 0x27]
    X86_AT(c, 0x11ab1u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x27u))));
    // 011ab5  or al, 5
    X86_AT(c, 0x11ab5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x5u, 1)); }
    // 011ab7  mov ah, 0x27
    X86_AT(c, 0x11ab7u);
    s8(c, 4, 0x27u);
    // 011ab9  jmp 0x11ac5
    X86_AT(c, 0x11ab9u);
    goto L_11ac5;
L_11ac5:
    X86_TICK(c, 7);
    // 011ac5  call 0x11bf0
    X86_AT(c, 0x11ac5u);
    push32(c, 0x11acau); f_00011bf0(c); X86_RET(c, 0x11acau);
    X86_TICK(c, 20);
    // 011aca  pop edx
    X86_AT(c, 0x11acau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011acb  pop eax
    X86_AT(c, 0x11acbu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011acc  xor al, al
    X86_AT(c, 0x11accu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011ace  ret 
    X86_AT(c, 0x11aceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11aacu, "ran off the end of a function");
}
void f_00011ab1(X86Cpu& c) {
    X86_TICK(c, 15);
    // 011ab1  mov al, byte ptr gs:[edi + 0x27]
    X86_AT(c, 0x11ab1u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x27u))));
    // 011ab5  or al, 5
    X86_AT(c, 0x11ab5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x5u, 1)); }
    // 011ab7  mov ah, 0x27
    X86_AT(c, 0x11ab7u);
    s8(c, 4, 0x27u);
    // 011ab9  jmp 0x11ac5
    X86_AT(c, 0x11ab9u);
    goto L_11ac5;
L_11ac5:
    X86_TICK(c, 7);
    // 011ac5  call 0x11bf0
    X86_AT(c, 0x11ac5u);
    push32(c, 0x11acau); f_00011bf0(c); X86_RET(c, 0x11acau);
    X86_TICK(c, 20);
    // 011aca  pop edx
    X86_AT(c, 0x11acau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011acb  pop eax
    X86_AT(c, 0x11acbu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011acc  xor al, al
    X86_AT(c, 0x11accu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011ace  ret 
    X86_AT(c, 0x11aceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11ab1u, "ran off the end of a function");
}
void f_00011ab5(X86Cpu& c) {
    X86_TICK(c, 11);
    // 011ab5  or al, 5
    X86_AT(c, 0x11ab5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x5u, 1)); }
    // 011ab7  mov ah, 0x27
    X86_AT(c, 0x11ab7u);
    s8(c, 4, 0x27u);
    // 011ab9  jmp 0x11ac5
    X86_AT(c, 0x11ab9u);
    goto L_11ac5;
L_11ac5:
    X86_TICK(c, 7);
    // 011ac5  call 0x11bf0
    X86_AT(c, 0x11ac5u);
    push32(c, 0x11acau); f_00011bf0(c); X86_RET(c, 0x11acau);
    X86_TICK(c, 20);
    // 011aca  pop edx
    X86_AT(c, 0x11acau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011acb  pop eax
    X86_AT(c, 0x11acbu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011acc  xor al, al
    X86_AT(c, 0x11accu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011ace  ret 
    X86_AT(c, 0x11aceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11ab5u, "ran off the end of a function");
}
void f_00011ab7(X86Cpu& c) {
    X86_TICK(c, 9);
    // 011ab7  mov ah, 0x27
    X86_AT(c, 0x11ab7u);
    s8(c, 4, 0x27u);
    // 011ab9  jmp 0x11ac5
    X86_AT(c, 0x11ab9u);
    goto L_11ac5;
L_11ac5:
    X86_TICK(c, 7);
    // 011ac5  call 0x11bf0
    X86_AT(c, 0x11ac5u);
    push32(c, 0x11acau); f_00011bf0(c); X86_RET(c, 0x11acau);
    X86_TICK(c, 20);
    // 011aca  pop edx
    X86_AT(c, 0x11acau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011acb  pop eax
    X86_AT(c, 0x11acbu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011acc  xor al, al
    X86_AT(c, 0x11accu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011ace  ret 
    X86_AT(c, 0x11aceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11ab7u, "ran off the end of a function");
}
void f_00011ab9(X86Cpu& c) {
    X86_TICK(c, 7);
    // 011ab9  jmp 0x11ac5
    X86_AT(c, 0x11ab9u);
    goto L_11ac5;
L_11ac5:
    X86_TICK(c, 7);
    // 011ac5  call 0x11bf0
    X86_AT(c, 0x11ac5u);
    push32(c, 0x11acau); f_00011bf0(c); X86_RET(c, 0x11acau);
    X86_TICK(c, 20);
    // 011aca  pop edx
    X86_AT(c, 0x11acau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011acb  pop eax
    X86_AT(c, 0x11acbu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011acc  xor al, al
    X86_AT(c, 0x11accu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011ace  ret 
    X86_AT(c, 0x11aceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11ab9u, "ran off the end of a function");
}
void f_00011abb(X86Cpu& c) {
    X86_TICK(c, 17);
    // 011abb  mov al, byte ptr gs:[edi + 0x27]
    X86_AT(c, 0x11abbu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x27u))));
    // 011abf  and al, 0xfa
    X86_AT(c, 0x11abfu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFAu, 1)); }
    // 011ac1  or al, 0x10
    X86_AT(c, 0x11ac1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x10u, 1)); }
    // 011ac3  mov ah, 0x27
    X86_AT(c, 0x11ac3u);
    s8(c, 4, 0x27u);
    // 011ac5  call 0x11bf0
    X86_AT(c, 0x11ac5u);
    push32(c, 0x11acau); f_00011bf0(c); X86_RET(c, 0x11acau);
    X86_TICK(c, 20);
    // 011aca  pop edx
    X86_AT(c, 0x11acau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011acb  pop eax
    X86_AT(c, 0x11acbu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011acc  xor al, al
    X86_AT(c, 0x11accu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011ace  ret 
    X86_AT(c, 0x11aceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11abbu, "ran off the end of a function");
}
void f_00011abf(X86Cpu& c) {
    X86_TICK(c, 13);
    // 011abf  and al, 0xfa
    X86_AT(c, 0x11abfu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFAu, 1)); }
    // 011ac1  or al, 0x10
    X86_AT(c, 0x11ac1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x10u, 1)); }
    // 011ac3  mov ah, 0x27
    X86_AT(c, 0x11ac3u);
    s8(c, 4, 0x27u);
    // 011ac5  call 0x11bf0
    X86_AT(c, 0x11ac5u);
    push32(c, 0x11acau); f_00011bf0(c); X86_RET(c, 0x11acau);
    X86_TICK(c, 20);
    // 011aca  pop edx
    X86_AT(c, 0x11acau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011acb  pop eax
    X86_AT(c, 0x11acbu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011acc  xor al, al
    X86_AT(c, 0x11accu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011ace  ret 
    X86_AT(c, 0x11aceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11abfu, "ran off the end of a function");
}
void f_00011ac1(X86Cpu& c) {
    X86_TICK(c, 11);
    // 011ac1  or al, 0x10
    X86_AT(c, 0x11ac1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x10u, 1)); }
    // 011ac3  mov ah, 0x27
    X86_AT(c, 0x11ac3u);
    s8(c, 4, 0x27u);
    // 011ac5  call 0x11bf0
    X86_AT(c, 0x11ac5u);
    push32(c, 0x11acau); f_00011bf0(c); X86_RET(c, 0x11acau);
    X86_TICK(c, 20);
    // 011aca  pop edx
    X86_AT(c, 0x11acau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011acb  pop eax
    X86_AT(c, 0x11acbu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011acc  xor al, al
    X86_AT(c, 0x11accu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011ace  ret 
    X86_AT(c, 0x11aceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11ac1u, "ran off the end of a function");
}
void f_00011ac3(X86Cpu& c) {
    X86_TICK(c, 9);
    // 011ac3  mov ah, 0x27
    X86_AT(c, 0x11ac3u);
    s8(c, 4, 0x27u);
    // 011ac5  call 0x11bf0
    X86_AT(c, 0x11ac5u);
    push32(c, 0x11acau); f_00011bf0(c); X86_RET(c, 0x11acau);
    X86_TICK(c, 20);
    // 011aca  pop edx
    X86_AT(c, 0x11acau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011acb  pop eax
    X86_AT(c, 0x11acbu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011acc  xor al, al
    X86_AT(c, 0x11accu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011ace  ret 
    X86_AT(c, 0x11aceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11ac3u, "ran off the end of a function");
}
void f_00011ac5(X86Cpu& c) {
    X86_TICK(c, 7);
    // 011ac5  call 0x11bf0
    X86_AT(c, 0x11ac5u);
    push32(c, 0x11acau); f_00011bf0(c); X86_RET(c, 0x11acau);
    X86_TICK(c, 20);
    // 011aca  pop edx
    X86_AT(c, 0x11acau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011acb  pop eax
    X86_AT(c, 0x11acbu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011acc  xor al, al
    X86_AT(c, 0x11accu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011ace  ret 
    X86_AT(c, 0x11aceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11ac5u, "ran off the end of a function");
}
void f_00011aca(X86Cpu& c) {
    X86_TICK(c, 20);
    // 011aca  pop edx
    X86_AT(c, 0x11acau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011acb  pop eax
    X86_AT(c, 0x11acbu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011acc  xor al, al
    X86_AT(c, 0x11accu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011ace  ret 
    X86_AT(c, 0x11aceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11acau, "ran off the end of a function");
}
void f_00011acb(X86Cpu& c) {
    X86_TICK(c, 16);
    // 011acb  pop eax
    X86_AT(c, 0x11acbu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011acc  xor al, al
    X86_AT(c, 0x11accu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011ace  ret 
    X86_AT(c, 0x11aceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11acbu, "ran off the end of a function");
}
void f_00011acc(X86Cpu& c) {
    X86_TICK(c, 12);
    // 011acc  xor al, al
    X86_AT(c, 0x11accu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011ace  ret 
    X86_AT(c, 0x11aceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11accu, "ran off the end of a function");
}
void f_00011ace(X86Cpu& c) {
    X86_TICK(c, 10);
    // 011ace  ret 
    X86_AT(c, 0x11aceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11aceu, "ran off the end of a function");
}
void f_00011ad0(X86Cpu& c) {
    X86_TICK(c, 13);
    // 011ad0  push eax
    X86_AT(c, 0x11ad0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 011ad1  push edx
    X86_AT(c, 0x11ad1u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 011ad2  mov dx, 0x4d8
    X86_AT(c, 0x11ad2u);
    s16(c, 2, 0x4D8u);
    // 011ad6  test bl, bl
    X86_AT(c, 0x11ad6u);
    (void)x86_logic(c, g8(c, 3) & g8(c, 3), 1);
    // 011ad8  je 0x11aed
    X86_AT(c, 0x11ad8u);
    if (x86_cc(c, 4)) { goto L_11aed; }
    X86_TICK(c, 11);
    // 011ada  mov ah, 0x26
    X86_AT(c, 0x11adau);
    s8(c, 4, 0x26u);
    // 011adc  mov al, cl
    X86_AT(c, 0x11adcu);
    s8(c, 0, g8(c, 1));
    // 011ade  call 0x11bf0
    X86_AT(c, 0x11adeu);
    push32(c, 0x11ae3u); f_00011bf0(c); X86_RET(c, 0x11ae3u);
    X86_TICK(c, 15);
    // 011ae3  mov al, byte ptr gs:[edi + 0x27]
    X86_AT(c, 0x11ae3u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x27u))));
    // 011ae7  or al, 0xa
    X86_AT(c, 0x11ae7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xAu, 1)); }
    // 011ae9  mov ah, 0x27
    X86_AT(c, 0x11ae9u);
    s8(c, 4, 0x27u);
    // 011aeb  jmp 0x11af7
    X86_AT(c, 0x11aebu);
    goto L_11af7;
L_11aed:
    X86_TICK(c, 10);
    // 011aed  mov al, byte ptr gs:[edi + 0x27]
    X86_AT(c, 0x11aedu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x27u))));
    // 011af1  and al, 0xf5
    X86_AT(c, 0x11af1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF5u, 1)); }
    // 011af3  or al, 0x20
    X86_AT(c, 0x11af3u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x20u, 1)); }
    // 011af5  mov ah, 0x27
    X86_AT(c, 0x11af5u);
    s8(c, 4, 0x27u);
L_11af7:
    X86_TICK(c, 7);
    // 011af7  call 0x11bf0
    X86_AT(c, 0x11af7u);
    push32(c, 0x11afcu); f_00011bf0(c); X86_RET(c, 0x11afcu);
    X86_TICK(c, 20);
    // 011afc  pop edx
    X86_AT(c, 0x11afcu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011afd  pop eax
    X86_AT(c, 0x11afdu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011afe  xor al, al
    X86_AT(c, 0x11afeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011b00  ret 
    X86_AT(c, 0x11b00u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11ad0u, "ran off the end of a function");
}
void f_00011ad1(X86Cpu& c) {
    X86_TICK(c, 11);
    // 011ad1  push edx
    X86_AT(c, 0x11ad1u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 011ad2  mov dx, 0x4d8
    X86_AT(c, 0x11ad2u);
    s16(c, 2, 0x4D8u);
    // 011ad6  test bl, bl
    X86_AT(c, 0x11ad6u);
    (void)x86_logic(c, g8(c, 3) & g8(c, 3), 1);
    // 011ad8  je 0x11aed
    X86_AT(c, 0x11ad8u);
    if (x86_cc(c, 4)) { goto L_11aed; }
    X86_TICK(c, 11);
    // 011ada  mov ah, 0x26
    X86_AT(c, 0x11adau);
    s8(c, 4, 0x26u);
    // 011adc  mov al, cl
    X86_AT(c, 0x11adcu);
    s8(c, 0, g8(c, 1));
    // 011ade  call 0x11bf0
    X86_AT(c, 0x11adeu);
    push32(c, 0x11ae3u); f_00011bf0(c); X86_RET(c, 0x11ae3u);
    X86_TICK(c, 15);
    // 011ae3  mov al, byte ptr gs:[edi + 0x27]
    X86_AT(c, 0x11ae3u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x27u))));
    // 011ae7  or al, 0xa
    X86_AT(c, 0x11ae7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xAu, 1)); }
    // 011ae9  mov ah, 0x27
    X86_AT(c, 0x11ae9u);
    s8(c, 4, 0x27u);
    // 011aeb  jmp 0x11af7
    X86_AT(c, 0x11aebu);
    goto L_11af7;
L_11aed:
    X86_TICK(c, 10);
    // 011aed  mov al, byte ptr gs:[edi + 0x27]
    X86_AT(c, 0x11aedu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x27u))));
    // 011af1  and al, 0xf5
    X86_AT(c, 0x11af1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF5u, 1)); }
    // 011af3  or al, 0x20
    X86_AT(c, 0x11af3u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x20u, 1)); }
    // 011af5  mov ah, 0x27
    X86_AT(c, 0x11af5u);
    s8(c, 4, 0x27u);
L_11af7:
    X86_TICK(c, 7);
    // 011af7  call 0x11bf0
    X86_AT(c, 0x11af7u);
    push32(c, 0x11afcu); f_00011bf0(c); X86_RET(c, 0x11afcu);
    X86_TICK(c, 20);
    // 011afc  pop edx
    X86_AT(c, 0x11afcu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011afd  pop eax
    X86_AT(c, 0x11afdu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011afe  xor al, al
    X86_AT(c, 0x11afeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011b00  ret 
    X86_AT(c, 0x11b00u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11ad1u, "ran off the end of a function");
}
void f_00011ad2(X86Cpu& c) {
    X86_TICK(c, 9);
    // 011ad2  mov dx, 0x4d8
    X86_AT(c, 0x11ad2u);
    s16(c, 2, 0x4D8u);
    // 011ad6  test bl, bl
    X86_AT(c, 0x11ad6u);
    (void)x86_logic(c, g8(c, 3) & g8(c, 3), 1);
    // 011ad8  je 0x11aed
    X86_AT(c, 0x11ad8u);
    if (x86_cc(c, 4)) { goto L_11aed; }
    X86_TICK(c, 11);
    // 011ada  mov ah, 0x26
    X86_AT(c, 0x11adau);
    s8(c, 4, 0x26u);
    // 011adc  mov al, cl
    X86_AT(c, 0x11adcu);
    s8(c, 0, g8(c, 1));
    // 011ade  call 0x11bf0
    X86_AT(c, 0x11adeu);
    push32(c, 0x11ae3u); f_00011bf0(c); X86_RET(c, 0x11ae3u);
    X86_TICK(c, 15);
    // 011ae3  mov al, byte ptr gs:[edi + 0x27]
    X86_AT(c, 0x11ae3u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x27u))));
    // 011ae7  or al, 0xa
    X86_AT(c, 0x11ae7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xAu, 1)); }
    // 011ae9  mov ah, 0x27
    X86_AT(c, 0x11ae9u);
    s8(c, 4, 0x27u);
    // 011aeb  jmp 0x11af7
    X86_AT(c, 0x11aebu);
    goto L_11af7;
L_11aed:
    X86_TICK(c, 10);
    // 011aed  mov al, byte ptr gs:[edi + 0x27]
    X86_AT(c, 0x11aedu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x27u))));
    // 011af1  and al, 0xf5
    X86_AT(c, 0x11af1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF5u, 1)); }
    // 011af3  or al, 0x20
    X86_AT(c, 0x11af3u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x20u, 1)); }
    // 011af5  mov ah, 0x27
    X86_AT(c, 0x11af5u);
    s8(c, 4, 0x27u);
L_11af7:
    X86_TICK(c, 7);
    // 011af7  call 0x11bf0
    X86_AT(c, 0x11af7u);
    push32(c, 0x11afcu); f_00011bf0(c); X86_RET(c, 0x11afcu);
    X86_TICK(c, 20);
    // 011afc  pop edx
    X86_AT(c, 0x11afcu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011afd  pop eax
    X86_AT(c, 0x11afdu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011afe  xor al, al
    X86_AT(c, 0x11afeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011b00  ret 
    X86_AT(c, 0x11b00u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11ad2u, "ran off the end of a function");
}
void f_00011ad6(X86Cpu& c) {
    X86_TICK(c, 7);
    // 011ad6  test bl, bl
    X86_AT(c, 0x11ad6u);
    (void)x86_logic(c, g8(c, 3) & g8(c, 3), 1);
    // 011ad8  je 0x11aed
    X86_AT(c, 0x11ad8u);
    if (x86_cc(c, 4)) { goto L_11aed; }
    X86_TICK(c, 11);
    // 011ada  mov ah, 0x26
    X86_AT(c, 0x11adau);
    s8(c, 4, 0x26u);
    // 011adc  mov al, cl
    X86_AT(c, 0x11adcu);
    s8(c, 0, g8(c, 1));
    // 011ade  call 0x11bf0
    X86_AT(c, 0x11adeu);
    push32(c, 0x11ae3u); f_00011bf0(c); X86_RET(c, 0x11ae3u);
    X86_TICK(c, 15);
    // 011ae3  mov al, byte ptr gs:[edi + 0x27]
    X86_AT(c, 0x11ae3u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x27u))));
    // 011ae7  or al, 0xa
    X86_AT(c, 0x11ae7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xAu, 1)); }
    // 011ae9  mov ah, 0x27
    X86_AT(c, 0x11ae9u);
    s8(c, 4, 0x27u);
    // 011aeb  jmp 0x11af7
    X86_AT(c, 0x11aebu);
    goto L_11af7;
L_11aed:
    X86_TICK(c, 10);
    // 011aed  mov al, byte ptr gs:[edi + 0x27]
    X86_AT(c, 0x11aedu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x27u))));
    // 011af1  and al, 0xf5
    X86_AT(c, 0x11af1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF5u, 1)); }
    // 011af3  or al, 0x20
    X86_AT(c, 0x11af3u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x20u, 1)); }
    // 011af5  mov ah, 0x27
    X86_AT(c, 0x11af5u);
    s8(c, 4, 0x27u);
L_11af7:
    X86_TICK(c, 7);
    // 011af7  call 0x11bf0
    X86_AT(c, 0x11af7u);
    push32(c, 0x11afcu); f_00011bf0(c); X86_RET(c, 0x11afcu);
    X86_TICK(c, 20);
    // 011afc  pop edx
    X86_AT(c, 0x11afcu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011afd  pop eax
    X86_AT(c, 0x11afdu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011afe  xor al, al
    X86_AT(c, 0x11afeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011b00  ret 
    X86_AT(c, 0x11b00u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11ad6u, "ran off the end of a function");
}
void f_00011ad8(X86Cpu& c) {
    X86_TICK(c, 5);
    // 011ad8  je 0x11aed
    X86_AT(c, 0x11ad8u);
    if (x86_cc(c, 4)) { goto L_11aed; }
    X86_TICK(c, 11);
    // 011ada  mov ah, 0x26
    X86_AT(c, 0x11adau);
    s8(c, 4, 0x26u);
    // 011adc  mov al, cl
    X86_AT(c, 0x11adcu);
    s8(c, 0, g8(c, 1));
    // 011ade  call 0x11bf0
    X86_AT(c, 0x11adeu);
    push32(c, 0x11ae3u); f_00011bf0(c); X86_RET(c, 0x11ae3u);
    X86_TICK(c, 15);
    // 011ae3  mov al, byte ptr gs:[edi + 0x27]
    X86_AT(c, 0x11ae3u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x27u))));
    // 011ae7  or al, 0xa
    X86_AT(c, 0x11ae7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xAu, 1)); }
    // 011ae9  mov ah, 0x27
    X86_AT(c, 0x11ae9u);
    s8(c, 4, 0x27u);
    // 011aeb  jmp 0x11af7
    X86_AT(c, 0x11aebu);
    goto L_11af7;
L_11aed:
    X86_TICK(c, 10);
    // 011aed  mov al, byte ptr gs:[edi + 0x27]
    X86_AT(c, 0x11aedu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x27u))));
    // 011af1  and al, 0xf5
    X86_AT(c, 0x11af1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF5u, 1)); }
    // 011af3  or al, 0x20
    X86_AT(c, 0x11af3u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x20u, 1)); }
    // 011af5  mov ah, 0x27
    X86_AT(c, 0x11af5u);
    s8(c, 4, 0x27u);
L_11af7:
    X86_TICK(c, 7);
    // 011af7  call 0x11bf0
    X86_AT(c, 0x11af7u);
    push32(c, 0x11afcu); f_00011bf0(c); X86_RET(c, 0x11afcu);
    X86_TICK(c, 20);
    // 011afc  pop edx
    X86_AT(c, 0x11afcu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011afd  pop eax
    X86_AT(c, 0x11afdu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011afe  xor al, al
    X86_AT(c, 0x11afeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011b00  ret 
    X86_AT(c, 0x11b00u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11ad8u, "ran off the end of a function");
}
void f_00011ada(X86Cpu& c) {
    X86_TICK(c, 11);
    // 011ada  mov ah, 0x26
    X86_AT(c, 0x11adau);
    s8(c, 4, 0x26u);
    // 011adc  mov al, cl
    X86_AT(c, 0x11adcu);
    s8(c, 0, g8(c, 1));
    // 011ade  call 0x11bf0
    X86_AT(c, 0x11adeu);
    push32(c, 0x11ae3u); f_00011bf0(c); X86_RET(c, 0x11ae3u);
    X86_TICK(c, 15);
    // 011ae3  mov al, byte ptr gs:[edi + 0x27]
    X86_AT(c, 0x11ae3u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x27u))));
    // 011ae7  or al, 0xa
    X86_AT(c, 0x11ae7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xAu, 1)); }
    // 011ae9  mov ah, 0x27
    X86_AT(c, 0x11ae9u);
    s8(c, 4, 0x27u);
    // 011aeb  jmp 0x11af7
    X86_AT(c, 0x11aebu);
    goto L_11af7;
L_11af7:
    X86_TICK(c, 7);
    // 011af7  call 0x11bf0
    X86_AT(c, 0x11af7u);
    push32(c, 0x11afcu); f_00011bf0(c); X86_RET(c, 0x11afcu);
    X86_TICK(c, 20);
    // 011afc  pop edx
    X86_AT(c, 0x11afcu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011afd  pop eax
    X86_AT(c, 0x11afdu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011afe  xor al, al
    X86_AT(c, 0x11afeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011b00  ret 
    X86_AT(c, 0x11b00u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11adau, "ran off the end of a function");
}
void f_00011adc(X86Cpu& c) {
    X86_TICK(c, 9);
    // 011adc  mov al, cl
    X86_AT(c, 0x11adcu);
    s8(c, 0, g8(c, 1));
    // 011ade  call 0x11bf0
    X86_AT(c, 0x11adeu);
    push32(c, 0x11ae3u); f_00011bf0(c); X86_RET(c, 0x11ae3u);
    X86_TICK(c, 15);
    // 011ae3  mov al, byte ptr gs:[edi + 0x27]
    X86_AT(c, 0x11ae3u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x27u))));
    // 011ae7  or al, 0xa
    X86_AT(c, 0x11ae7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xAu, 1)); }
    // 011ae9  mov ah, 0x27
    X86_AT(c, 0x11ae9u);
    s8(c, 4, 0x27u);
    // 011aeb  jmp 0x11af7
    X86_AT(c, 0x11aebu);
    goto L_11af7;
L_11af7:
    X86_TICK(c, 7);
    // 011af7  call 0x11bf0
    X86_AT(c, 0x11af7u);
    push32(c, 0x11afcu); f_00011bf0(c); X86_RET(c, 0x11afcu);
    X86_TICK(c, 20);
    // 011afc  pop edx
    X86_AT(c, 0x11afcu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011afd  pop eax
    X86_AT(c, 0x11afdu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011afe  xor al, al
    X86_AT(c, 0x11afeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011b00  ret 
    X86_AT(c, 0x11b00u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11adcu, "ran off the end of a function");
}
void f_00011ade(X86Cpu& c) {
    X86_TICK(c, 7);
    // 011ade  call 0x11bf0
    X86_AT(c, 0x11adeu);
    push32(c, 0x11ae3u); f_00011bf0(c); X86_RET(c, 0x11ae3u);
    X86_TICK(c, 15);
    // 011ae3  mov al, byte ptr gs:[edi + 0x27]
    X86_AT(c, 0x11ae3u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x27u))));
    // 011ae7  or al, 0xa
    X86_AT(c, 0x11ae7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xAu, 1)); }
    // 011ae9  mov ah, 0x27
    X86_AT(c, 0x11ae9u);
    s8(c, 4, 0x27u);
    // 011aeb  jmp 0x11af7
    X86_AT(c, 0x11aebu);
    goto L_11af7;
L_11af7:
    X86_TICK(c, 7);
    // 011af7  call 0x11bf0
    X86_AT(c, 0x11af7u);
    push32(c, 0x11afcu); f_00011bf0(c); X86_RET(c, 0x11afcu);
    X86_TICK(c, 20);
    // 011afc  pop edx
    X86_AT(c, 0x11afcu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011afd  pop eax
    X86_AT(c, 0x11afdu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011afe  xor al, al
    X86_AT(c, 0x11afeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011b00  ret 
    X86_AT(c, 0x11b00u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11adeu, "ran off the end of a function");
}
void f_00011ae3(X86Cpu& c) {
    X86_TICK(c, 15);
    // 011ae3  mov al, byte ptr gs:[edi + 0x27]
    X86_AT(c, 0x11ae3u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x27u))));
    // 011ae7  or al, 0xa
    X86_AT(c, 0x11ae7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xAu, 1)); }
    // 011ae9  mov ah, 0x27
    X86_AT(c, 0x11ae9u);
    s8(c, 4, 0x27u);
    // 011aeb  jmp 0x11af7
    X86_AT(c, 0x11aebu);
    goto L_11af7;
L_11af7:
    X86_TICK(c, 7);
    // 011af7  call 0x11bf0
    X86_AT(c, 0x11af7u);
    push32(c, 0x11afcu); f_00011bf0(c); X86_RET(c, 0x11afcu);
    X86_TICK(c, 20);
    // 011afc  pop edx
    X86_AT(c, 0x11afcu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011afd  pop eax
    X86_AT(c, 0x11afdu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011afe  xor al, al
    X86_AT(c, 0x11afeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011b00  ret 
    X86_AT(c, 0x11b00u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11ae3u, "ran off the end of a function");
}
void f_00011ae7(X86Cpu& c) {
    X86_TICK(c, 11);
    // 011ae7  or al, 0xa
    X86_AT(c, 0x11ae7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xAu, 1)); }
    // 011ae9  mov ah, 0x27
    X86_AT(c, 0x11ae9u);
    s8(c, 4, 0x27u);
    // 011aeb  jmp 0x11af7
    X86_AT(c, 0x11aebu);
    goto L_11af7;
L_11af7:
    X86_TICK(c, 7);
    // 011af7  call 0x11bf0
    X86_AT(c, 0x11af7u);
    push32(c, 0x11afcu); f_00011bf0(c); X86_RET(c, 0x11afcu);
    X86_TICK(c, 20);
    // 011afc  pop edx
    X86_AT(c, 0x11afcu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011afd  pop eax
    X86_AT(c, 0x11afdu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011afe  xor al, al
    X86_AT(c, 0x11afeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011b00  ret 
    X86_AT(c, 0x11b00u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11ae7u, "ran off the end of a function");
}
void f_00011ae9(X86Cpu& c) {
    X86_TICK(c, 9);
    // 011ae9  mov ah, 0x27
    X86_AT(c, 0x11ae9u);
    s8(c, 4, 0x27u);
    // 011aeb  jmp 0x11af7
    X86_AT(c, 0x11aebu);
    goto L_11af7;
L_11af7:
    X86_TICK(c, 7);
    // 011af7  call 0x11bf0
    X86_AT(c, 0x11af7u);
    push32(c, 0x11afcu); f_00011bf0(c); X86_RET(c, 0x11afcu);
    X86_TICK(c, 20);
    // 011afc  pop edx
    X86_AT(c, 0x11afcu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011afd  pop eax
    X86_AT(c, 0x11afdu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011afe  xor al, al
    X86_AT(c, 0x11afeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011b00  ret 
    X86_AT(c, 0x11b00u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11ae9u, "ran off the end of a function");
}
void f_00011aeb(X86Cpu& c) {
    X86_TICK(c, 7);
    // 011aeb  jmp 0x11af7
    X86_AT(c, 0x11aebu);
    goto L_11af7;
L_11af7:
    X86_TICK(c, 7);
    // 011af7  call 0x11bf0
    X86_AT(c, 0x11af7u);
    push32(c, 0x11afcu); f_00011bf0(c); X86_RET(c, 0x11afcu);
    X86_TICK(c, 20);
    // 011afc  pop edx
    X86_AT(c, 0x11afcu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011afd  pop eax
    X86_AT(c, 0x11afdu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011afe  xor al, al
    X86_AT(c, 0x11afeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011b00  ret 
    X86_AT(c, 0x11b00u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11aebu, "ran off the end of a function");
}
void f_00011aed(X86Cpu& c) {
    X86_TICK(c, 17);
    // 011aed  mov al, byte ptr gs:[edi + 0x27]
    X86_AT(c, 0x11aedu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x27u))));
    // 011af1  and al, 0xf5
    X86_AT(c, 0x11af1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF5u, 1)); }
    // 011af3  or al, 0x20
    X86_AT(c, 0x11af3u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x20u, 1)); }
    // 011af5  mov ah, 0x27
    X86_AT(c, 0x11af5u);
    s8(c, 4, 0x27u);
    // 011af7  call 0x11bf0
    X86_AT(c, 0x11af7u);
    push32(c, 0x11afcu); f_00011bf0(c); X86_RET(c, 0x11afcu);
    X86_TICK(c, 20);
    // 011afc  pop edx
    X86_AT(c, 0x11afcu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011afd  pop eax
    X86_AT(c, 0x11afdu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011afe  xor al, al
    X86_AT(c, 0x11afeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011b00  ret 
    X86_AT(c, 0x11b00u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11aedu, "ran off the end of a function");
}
void f_00011af1(X86Cpu& c) {
    X86_TICK(c, 13);
    // 011af1  and al, 0xf5
    X86_AT(c, 0x11af1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF5u, 1)); }
    // 011af3  or al, 0x20
    X86_AT(c, 0x11af3u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x20u, 1)); }
    // 011af5  mov ah, 0x27
    X86_AT(c, 0x11af5u);
    s8(c, 4, 0x27u);
    // 011af7  call 0x11bf0
    X86_AT(c, 0x11af7u);
    push32(c, 0x11afcu); f_00011bf0(c); X86_RET(c, 0x11afcu);
    X86_TICK(c, 20);
    // 011afc  pop edx
    X86_AT(c, 0x11afcu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011afd  pop eax
    X86_AT(c, 0x11afdu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011afe  xor al, al
    X86_AT(c, 0x11afeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011b00  ret 
    X86_AT(c, 0x11b00u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11af1u, "ran off the end of a function");
}
void f_00011af3(X86Cpu& c) {
    X86_TICK(c, 11);
    // 011af3  or al, 0x20
    X86_AT(c, 0x11af3u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x20u, 1)); }
    // 011af5  mov ah, 0x27
    X86_AT(c, 0x11af5u);
    s8(c, 4, 0x27u);
    // 011af7  call 0x11bf0
    X86_AT(c, 0x11af7u);
    push32(c, 0x11afcu); f_00011bf0(c); X86_RET(c, 0x11afcu);
    X86_TICK(c, 20);
    // 011afc  pop edx
    X86_AT(c, 0x11afcu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011afd  pop eax
    X86_AT(c, 0x11afdu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011afe  xor al, al
    X86_AT(c, 0x11afeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011b00  ret 
    X86_AT(c, 0x11b00u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11af3u, "ran off the end of a function");
}
}
