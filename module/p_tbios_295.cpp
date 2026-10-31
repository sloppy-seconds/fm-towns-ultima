#include "p_tbios_funcs.h"
namespace p_tbios {
void f_00011df4(X86Cpu& c) {
    goto L_11df4;
L_11ddb:
    X86_TICK(c, 58);
    // 011ddb  mov dl, 0xf7
    X86_AT(c, 0x11ddbu);
    s8(c, 2, 0xF7u);
    // 011ddd  mov al, ah
    X86_AT(c, 0x11dddu);
    s8(c, 0, g8(c, 4));
    // 011ddf  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11ddfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011de6  out dx, al
    X86_AT(c, 0x11de6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011de7  push ds
    X86_AT(c, 0x11de7u);
    push32(c, c.sreg[3]);
    // 011de8  pop ds
    X86_AT(c, 0x11de8u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011de9  push ds
    X86_AT(c, 0x11de9u);
    push32(c, c.sreg[3]);
    // 011dea  pop ds
    X86_AT(c, 0x11deau);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011deb  mov dl, 0xf0
    X86_AT(c, 0x11debu);
    s8(c, 2, 0xF0u);
    // 011ded  xor al, al
    X86_AT(c, 0x11dedu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011def  out dx, al
    X86_AT(c, 0x11defu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df0  push ds
    X86_AT(c, 0x11df0u);
    push32(c, c.sreg[3]);
    // 011df1  pop ds
    X86_AT(c, 0x11df1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df2  push ds
    X86_AT(c, 0x11df2u);
    push32(c, c.sreg[3]);
    // 011df3  pop ds
    X86_AT(c, 0x11df3u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_11df4:
    X86_TICK(c, 175);
    // 011df4  inc edx
    X86_AT(c, 0x11df4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011df5  mov al, 0x77
    X86_AT(c, 0x11df5u);
    s8(c, 0, 0x77u);
    // 011df7  out dx, al
    X86_AT(c, 0x11df7u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df8  push ds
    X86_AT(c, 0x11df8u);
    push32(c, c.sreg[3]);
    // 011df9  pop ds
    X86_AT(c, 0x11df9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfa  push ds
    X86_AT(c, 0x11dfau);
    push32(c, c.sreg[3]);
    // 011dfb  pop ds
    X86_AT(c, 0x11dfbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfc  inc edx
    X86_AT(c, 0x11dfcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011dfd  mov al, 0x5a
    X86_AT(c, 0x11dfdu);
    s8(c, 0, 0x5Au);
    // 011dff  out dx, al
    X86_AT(c, 0x11dffu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e00  push ds
    X86_AT(c, 0x11e00u);
    push32(c, c.sreg[3]);
    // 011e01  pop ds
    X86_AT(c, 0x11e01u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e02  push ds
    X86_AT(c, 0x11e02u);
    push32(c, c.sreg[3]);
    // 011e03  pop ds
    X86_AT(c, 0x11e03u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e04  inc edx
    X86_AT(c, 0x11e04u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e05  mov al, 7
    X86_AT(c, 0x11e05u);
    s8(c, 0, 0x7u);
    // 011e07  out dx, al
    X86_AT(c, 0x11e07u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e08  push ds
    X86_AT(c, 0x11e08u);
    push32(c, c.sreg[3]);
    // 011e09  pop ds
    X86_AT(c, 0x11e09u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0a  push ds
    X86_AT(c, 0x11e0au);
    push32(c, c.sreg[3]);
    // 011e0b  pop ds
    X86_AT(c, 0x11e0bu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0c  inc edx
    X86_AT(c, 0x11e0cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e0d  xor al, al
    X86_AT(c, 0x11e0du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e0f  out dx, al
    X86_AT(c, 0x11e0fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e10  push ds
    X86_AT(c, 0x11e10u);
    push32(c, c.sreg[3]);
    // 011e11  pop ds
    X86_AT(c, 0x11e11u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e12  push ds
    X86_AT(c, 0x11e12u);
    push32(c, c.sreg[3]);
    // 011e13  pop ds
    X86_AT(c, 0x11e13u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e14  inc edx
    X86_AT(c, 0x11e14u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e15  out dx, al
    X86_AT(c, 0x11e15u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e16  push ds
    X86_AT(c, 0x11e16u);
    push32(c, c.sreg[3]);
    // 011e17  pop ds
    X86_AT(c, 0x11e17u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e18  push ds
    X86_AT(c, 0x11e18u);
    push32(c, c.sreg[3]);
    // 011e19  pop ds
    X86_AT(c, 0x11e19u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e1a  inc edx
    X86_AT(c, 0x11e1au);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e1b  xor al, al
    X86_AT(c, 0x11e1bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e1d  out dx, al
    X86_AT(c, 0x11e1du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e1e  push ds
    X86_AT(c, 0x11e1eu);
    push32(c, c.sreg[3]);
    // 011e1f  pop ds
    X86_AT(c, 0x11e1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e20  push ds
    X86_AT(c, 0x11e20u);
    push32(c, c.sreg[3]);
    // 011e21  pop ds
    X86_AT(c, 0x11e21u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e22  inc ah
    X86_AT(c, 0x11e22u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e24  cmp ah, 0x48
    X86_AT(c, 0x11e24u);
    (void)x86_sub(c, g8(c, 4), 0x48u, 0, 1);
    // 011e27  jne 0x11ddb
    X86_AT(c, 0x11e27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11ddbu); goto L_11ddb; }
    X86_TICK(c, 2);
    // 011e29  xor ah, ah
    X86_AT(c, 0x11e29u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
L_11e2b:
    X86_TICK(c, 52);
    // 011e2b  mov dl, 0xf7
    X86_AT(c, 0x11e2bu);
    s8(c, 2, 0xF7u);
    // 011e2d  mov al, ah
    X86_AT(c, 0x11e2du);
    s8(c, 0, g8(c, 4));
    // 011e2f  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11e2fu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011e36  out dx, al
    X86_AT(c, 0x11e36u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e37  push ds
    X86_AT(c, 0x11e37u);
    push32(c, c.sreg[3]);
    // 011e38  pop ds
    X86_AT(c, 0x11e38u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e39  push ds
    X86_AT(c, 0x11e39u);
    push32(c, c.sreg[3]);
    // 011e3a  pop ds
    X86_AT(c, 0x11e3au);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e3b  mov al, 0xff
    X86_AT(c, 0x11e3bu);
    s8(c, 0, 0xFFu);
    // 011e3d  xor edi, edi
    X86_AT(c, 0x11e3du);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v ^ c.r[7], 4); }
    // 011e3f  mov ch, 0x10
    X86_AT(c, 0x11e3fu);
    s8(c, 5, 0x10u);
    // 011e41  stosb byte ptr es:[edi], al
    X86_AT(c, 0x11e41u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 011e43  inc ah
    X86_AT(c, 0x11e43u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e45  cmp ah, 0x10
    X86_AT(c, 0x11e45u);
    (void)x86_sub(c, g8(c, 4), 0x10u, 0, 1);
    // 011e48  jne 0x11e2b
    X86_AT(c, 0x11e48u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11e2bu); goto L_11e2b; }
    X86_TICK(c, 40);
    // 011e4a  pop es
    X86_AT(c, 0x11e4au);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011e4b  popal 
    X86_AT(c, 0x11e4bu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011e4c  xor al, al
    X86_AT(c, 0x11e4cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e4e  ret 
    X86_AT(c, 0x11e4eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11df4u, "ran off the end of a function");
}
void f_00011df5(X86Cpu& c) {
    goto L_11df5;
L_11ddb:
    X86_TICK(c, 60);
    // 011ddb  mov dl, 0xf7
    X86_AT(c, 0x11ddbu);
    s8(c, 2, 0xF7u);
    // 011ddd  mov al, ah
    X86_AT(c, 0x11dddu);
    s8(c, 0, g8(c, 4));
    // 011ddf  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11ddfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011de6  out dx, al
    X86_AT(c, 0x11de6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011de7  push ds
    X86_AT(c, 0x11de7u);
    push32(c, c.sreg[3]);
    // 011de8  pop ds
    X86_AT(c, 0x11de8u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011de9  push ds
    X86_AT(c, 0x11de9u);
    push32(c, c.sreg[3]);
    // 011dea  pop ds
    X86_AT(c, 0x11deau);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011deb  mov dl, 0xf0
    X86_AT(c, 0x11debu);
    s8(c, 2, 0xF0u);
    // 011ded  xor al, al
    X86_AT(c, 0x11dedu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011def  out dx, al
    X86_AT(c, 0x11defu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df0  push ds
    X86_AT(c, 0x11df0u);
    push32(c, c.sreg[3]);
    // 011df1  pop ds
    X86_AT(c, 0x11df1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df2  push ds
    X86_AT(c, 0x11df2u);
    push32(c, c.sreg[3]);
    // 011df3  pop ds
    X86_AT(c, 0x11df3u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df4  inc edx
    X86_AT(c, 0x11df4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
L_11df5:
    X86_TICK(c, 173);
    // 011df5  mov al, 0x77
    X86_AT(c, 0x11df5u);
    s8(c, 0, 0x77u);
    // 011df7  out dx, al
    X86_AT(c, 0x11df7u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df8  push ds
    X86_AT(c, 0x11df8u);
    push32(c, c.sreg[3]);
    // 011df9  pop ds
    X86_AT(c, 0x11df9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfa  push ds
    X86_AT(c, 0x11dfau);
    push32(c, c.sreg[3]);
    // 011dfb  pop ds
    X86_AT(c, 0x11dfbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfc  inc edx
    X86_AT(c, 0x11dfcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011dfd  mov al, 0x5a
    X86_AT(c, 0x11dfdu);
    s8(c, 0, 0x5Au);
    // 011dff  out dx, al
    X86_AT(c, 0x11dffu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e00  push ds
    X86_AT(c, 0x11e00u);
    push32(c, c.sreg[3]);
    // 011e01  pop ds
    X86_AT(c, 0x11e01u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e02  push ds
    X86_AT(c, 0x11e02u);
    push32(c, c.sreg[3]);
    // 011e03  pop ds
    X86_AT(c, 0x11e03u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e04  inc edx
    X86_AT(c, 0x11e04u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e05  mov al, 7
    X86_AT(c, 0x11e05u);
    s8(c, 0, 0x7u);
    // 011e07  out dx, al
    X86_AT(c, 0x11e07u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e08  push ds
    X86_AT(c, 0x11e08u);
    push32(c, c.sreg[3]);
    // 011e09  pop ds
    X86_AT(c, 0x11e09u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0a  push ds
    X86_AT(c, 0x11e0au);
    push32(c, c.sreg[3]);
    // 011e0b  pop ds
    X86_AT(c, 0x11e0bu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0c  inc edx
    X86_AT(c, 0x11e0cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e0d  xor al, al
    X86_AT(c, 0x11e0du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e0f  out dx, al
    X86_AT(c, 0x11e0fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e10  push ds
    X86_AT(c, 0x11e10u);
    push32(c, c.sreg[3]);
    // 011e11  pop ds
    X86_AT(c, 0x11e11u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e12  push ds
    X86_AT(c, 0x11e12u);
    push32(c, c.sreg[3]);
    // 011e13  pop ds
    X86_AT(c, 0x11e13u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e14  inc edx
    X86_AT(c, 0x11e14u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e15  out dx, al
    X86_AT(c, 0x11e15u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e16  push ds
    X86_AT(c, 0x11e16u);
    push32(c, c.sreg[3]);
    // 011e17  pop ds
    X86_AT(c, 0x11e17u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e18  push ds
    X86_AT(c, 0x11e18u);
    push32(c, c.sreg[3]);
    // 011e19  pop ds
    X86_AT(c, 0x11e19u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e1a  inc edx
    X86_AT(c, 0x11e1au);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e1b  xor al, al
    X86_AT(c, 0x11e1bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e1d  out dx, al
    X86_AT(c, 0x11e1du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e1e  push ds
    X86_AT(c, 0x11e1eu);
    push32(c, c.sreg[3]);
    // 011e1f  pop ds
    X86_AT(c, 0x11e1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e20  push ds
    X86_AT(c, 0x11e20u);
    push32(c, c.sreg[3]);
    // 011e21  pop ds
    X86_AT(c, 0x11e21u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e22  inc ah
    X86_AT(c, 0x11e22u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e24  cmp ah, 0x48
    X86_AT(c, 0x11e24u);
    (void)x86_sub(c, g8(c, 4), 0x48u, 0, 1);
    // 011e27  jne 0x11ddb
    X86_AT(c, 0x11e27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11ddbu); goto L_11ddb; }
    X86_TICK(c, 2);
    // 011e29  xor ah, ah
    X86_AT(c, 0x11e29u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
L_11e2b:
    X86_TICK(c, 52);
    // 011e2b  mov dl, 0xf7
    X86_AT(c, 0x11e2bu);
    s8(c, 2, 0xF7u);
    // 011e2d  mov al, ah
    X86_AT(c, 0x11e2du);
    s8(c, 0, g8(c, 4));
    // 011e2f  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11e2fu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011e36  out dx, al
    X86_AT(c, 0x11e36u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e37  push ds
    X86_AT(c, 0x11e37u);
    push32(c, c.sreg[3]);
    // 011e38  pop ds
    X86_AT(c, 0x11e38u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e39  push ds
    X86_AT(c, 0x11e39u);
    push32(c, c.sreg[3]);
    // 011e3a  pop ds
    X86_AT(c, 0x11e3au);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e3b  mov al, 0xff
    X86_AT(c, 0x11e3bu);
    s8(c, 0, 0xFFu);
    // 011e3d  xor edi, edi
    X86_AT(c, 0x11e3du);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v ^ c.r[7], 4); }
    // 011e3f  mov ch, 0x10
    X86_AT(c, 0x11e3fu);
    s8(c, 5, 0x10u);
    // 011e41  stosb byte ptr es:[edi], al
    X86_AT(c, 0x11e41u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 011e43  inc ah
    X86_AT(c, 0x11e43u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e45  cmp ah, 0x10
    X86_AT(c, 0x11e45u);
    (void)x86_sub(c, g8(c, 4), 0x10u, 0, 1);
    // 011e48  jne 0x11e2b
    X86_AT(c, 0x11e48u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11e2bu); goto L_11e2b; }
    X86_TICK(c, 40);
    // 011e4a  pop es
    X86_AT(c, 0x11e4au);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011e4b  popal 
    X86_AT(c, 0x11e4bu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011e4c  xor al, al
    X86_AT(c, 0x11e4cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e4e  ret 
    X86_AT(c, 0x11e4eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11df5u, "ran off the end of a function");
}
void f_00011df7(X86Cpu& c) {
    goto L_11df7;
L_11ddb:
    X86_TICK(c, 62);
    // 011ddb  mov dl, 0xf7
    X86_AT(c, 0x11ddbu);
    s8(c, 2, 0xF7u);
    // 011ddd  mov al, ah
    X86_AT(c, 0x11dddu);
    s8(c, 0, g8(c, 4));
    // 011ddf  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11ddfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011de6  out dx, al
    X86_AT(c, 0x11de6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011de7  push ds
    X86_AT(c, 0x11de7u);
    push32(c, c.sreg[3]);
    // 011de8  pop ds
    X86_AT(c, 0x11de8u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011de9  push ds
    X86_AT(c, 0x11de9u);
    push32(c, c.sreg[3]);
    // 011dea  pop ds
    X86_AT(c, 0x11deau);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011deb  mov dl, 0xf0
    X86_AT(c, 0x11debu);
    s8(c, 2, 0xF0u);
    // 011ded  xor al, al
    X86_AT(c, 0x11dedu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011def  out dx, al
    X86_AT(c, 0x11defu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df0  push ds
    X86_AT(c, 0x11df0u);
    push32(c, c.sreg[3]);
    // 011df1  pop ds
    X86_AT(c, 0x11df1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df2  push ds
    X86_AT(c, 0x11df2u);
    push32(c, c.sreg[3]);
    // 011df3  pop ds
    X86_AT(c, 0x11df3u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df4  inc edx
    X86_AT(c, 0x11df4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011df5  mov al, 0x77
    X86_AT(c, 0x11df5u);
    s8(c, 0, 0x77u);
L_11df7:
    X86_TICK(c, 171);
    // 011df7  out dx, al
    X86_AT(c, 0x11df7u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df8  push ds
    X86_AT(c, 0x11df8u);
    push32(c, c.sreg[3]);
    // 011df9  pop ds
    X86_AT(c, 0x11df9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfa  push ds
    X86_AT(c, 0x11dfau);
    push32(c, c.sreg[3]);
    // 011dfb  pop ds
    X86_AT(c, 0x11dfbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfc  inc edx
    X86_AT(c, 0x11dfcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011dfd  mov al, 0x5a
    X86_AT(c, 0x11dfdu);
    s8(c, 0, 0x5Au);
    // 011dff  out dx, al
    X86_AT(c, 0x11dffu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e00  push ds
    X86_AT(c, 0x11e00u);
    push32(c, c.sreg[3]);
    // 011e01  pop ds
    X86_AT(c, 0x11e01u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e02  push ds
    X86_AT(c, 0x11e02u);
    push32(c, c.sreg[3]);
    // 011e03  pop ds
    X86_AT(c, 0x11e03u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e04  inc edx
    X86_AT(c, 0x11e04u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e05  mov al, 7
    X86_AT(c, 0x11e05u);
    s8(c, 0, 0x7u);
    // 011e07  out dx, al
    X86_AT(c, 0x11e07u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e08  push ds
    X86_AT(c, 0x11e08u);
    push32(c, c.sreg[3]);
    // 011e09  pop ds
    X86_AT(c, 0x11e09u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0a  push ds
    X86_AT(c, 0x11e0au);
    push32(c, c.sreg[3]);
    // 011e0b  pop ds
    X86_AT(c, 0x11e0bu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0c  inc edx
    X86_AT(c, 0x11e0cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e0d  xor al, al
    X86_AT(c, 0x11e0du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e0f  out dx, al
    X86_AT(c, 0x11e0fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e10  push ds
    X86_AT(c, 0x11e10u);
    push32(c, c.sreg[3]);
    // 011e11  pop ds
    X86_AT(c, 0x11e11u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e12  push ds
    X86_AT(c, 0x11e12u);
    push32(c, c.sreg[3]);
    // 011e13  pop ds
    X86_AT(c, 0x11e13u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e14  inc edx
    X86_AT(c, 0x11e14u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e15  out dx, al
    X86_AT(c, 0x11e15u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e16  push ds
    X86_AT(c, 0x11e16u);
    push32(c, c.sreg[3]);
    // 011e17  pop ds
    X86_AT(c, 0x11e17u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e18  push ds
    X86_AT(c, 0x11e18u);
    push32(c, c.sreg[3]);
    // 011e19  pop ds
    X86_AT(c, 0x11e19u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e1a  inc edx
    X86_AT(c, 0x11e1au);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e1b  xor al, al
    X86_AT(c, 0x11e1bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e1d  out dx, al
    X86_AT(c, 0x11e1du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e1e  push ds
    X86_AT(c, 0x11e1eu);
    push32(c, c.sreg[3]);
    // 011e1f  pop ds
    X86_AT(c, 0x11e1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e20  push ds
    X86_AT(c, 0x11e20u);
    push32(c, c.sreg[3]);
    // 011e21  pop ds
    X86_AT(c, 0x11e21u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e22  inc ah
    X86_AT(c, 0x11e22u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e24  cmp ah, 0x48
    X86_AT(c, 0x11e24u);
    (void)x86_sub(c, g8(c, 4), 0x48u, 0, 1);
    // 011e27  jne 0x11ddb
    X86_AT(c, 0x11e27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11ddbu); goto L_11ddb; }
    X86_TICK(c, 2);
    // 011e29  xor ah, ah
    X86_AT(c, 0x11e29u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
L_11e2b:
    X86_TICK(c, 52);
    // 011e2b  mov dl, 0xf7
    X86_AT(c, 0x11e2bu);
    s8(c, 2, 0xF7u);
    // 011e2d  mov al, ah
    X86_AT(c, 0x11e2du);
    s8(c, 0, g8(c, 4));
    // 011e2f  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11e2fu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011e36  out dx, al
    X86_AT(c, 0x11e36u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e37  push ds
    X86_AT(c, 0x11e37u);
    push32(c, c.sreg[3]);
    // 011e38  pop ds
    X86_AT(c, 0x11e38u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e39  push ds
    X86_AT(c, 0x11e39u);
    push32(c, c.sreg[3]);
    // 011e3a  pop ds
    X86_AT(c, 0x11e3au);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e3b  mov al, 0xff
    X86_AT(c, 0x11e3bu);
    s8(c, 0, 0xFFu);
    // 011e3d  xor edi, edi
    X86_AT(c, 0x11e3du);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v ^ c.r[7], 4); }
    // 011e3f  mov ch, 0x10
    X86_AT(c, 0x11e3fu);
    s8(c, 5, 0x10u);
    // 011e41  stosb byte ptr es:[edi], al
    X86_AT(c, 0x11e41u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 011e43  inc ah
    X86_AT(c, 0x11e43u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e45  cmp ah, 0x10
    X86_AT(c, 0x11e45u);
    (void)x86_sub(c, g8(c, 4), 0x10u, 0, 1);
    // 011e48  jne 0x11e2b
    X86_AT(c, 0x11e48u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11e2bu); goto L_11e2b; }
    X86_TICK(c, 40);
    // 011e4a  pop es
    X86_AT(c, 0x11e4au);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011e4b  popal 
    X86_AT(c, 0x11e4bu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011e4c  xor al, al
    X86_AT(c, 0x11e4cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e4e  ret 
    X86_AT(c, 0x11e4eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11df7u, "ran off the end of a function");
}
void f_00011df8(X86Cpu& c) {
    goto L_11df8;
L_11ddb:
    X86_TICK(c, 74);
    // 011ddb  mov dl, 0xf7
    X86_AT(c, 0x11ddbu);
    s8(c, 2, 0xF7u);
    // 011ddd  mov al, ah
    X86_AT(c, 0x11dddu);
    s8(c, 0, g8(c, 4));
    // 011ddf  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11ddfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011de6  out dx, al
    X86_AT(c, 0x11de6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011de7  push ds
    X86_AT(c, 0x11de7u);
    push32(c, c.sreg[3]);
    // 011de8  pop ds
    X86_AT(c, 0x11de8u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011de9  push ds
    X86_AT(c, 0x11de9u);
    push32(c, c.sreg[3]);
    // 011dea  pop ds
    X86_AT(c, 0x11deau);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011deb  mov dl, 0xf0
    X86_AT(c, 0x11debu);
    s8(c, 2, 0xF0u);
    // 011ded  xor al, al
    X86_AT(c, 0x11dedu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011def  out dx, al
    X86_AT(c, 0x11defu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df0  push ds
    X86_AT(c, 0x11df0u);
    push32(c, c.sreg[3]);
    // 011df1  pop ds
    X86_AT(c, 0x11df1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df2  push ds
    X86_AT(c, 0x11df2u);
    push32(c, c.sreg[3]);
    // 011df3  pop ds
    X86_AT(c, 0x11df3u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df4  inc edx
    X86_AT(c, 0x11df4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011df5  mov al, 0x77
    X86_AT(c, 0x11df5u);
    s8(c, 0, 0x77u);
    // 011df7  out dx, al
    X86_AT(c, 0x11df7u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
L_11df8:
    X86_TICK(c, 159);
    // 011df8  push ds
    X86_AT(c, 0x11df8u);
    push32(c, c.sreg[3]);
    // 011df9  pop ds
    X86_AT(c, 0x11df9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfa  push ds
    X86_AT(c, 0x11dfau);
    push32(c, c.sreg[3]);
    // 011dfb  pop ds
    X86_AT(c, 0x11dfbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfc  inc edx
    X86_AT(c, 0x11dfcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011dfd  mov al, 0x5a
    X86_AT(c, 0x11dfdu);
    s8(c, 0, 0x5Au);
    // 011dff  out dx, al
    X86_AT(c, 0x11dffu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e00  push ds
    X86_AT(c, 0x11e00u);
    push32(c, c.sreg[3]);
    // 011e01  pop ds
    X86_AT(c, 0x11e01u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e02  push ds
    X86_AT(c, 0x11e02u);
    push32(c, c.sreg[3]);
    // 011e03  pop ds
    X86_AT(c, 0x11e03u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e04  inc edx
    X86_AT(c, 0x11e04u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e05  mov al, 7
    X86_AT(c, 0x11e05u);
    s8(c, 0, 0x7u);
    // 011e07  out dx, al
    X86_AT(c, 0x11e07u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e08  push ds
    X86_AT(c, 0x11e08u);
    push32(c, c.sreg[3]);
    // 011e09  pop ds
    X86_AT(c, 0x11e09u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0a  push ds
    X86_AT(c, 0x11e0au);
    push32(c, c.sreg[3]);
    // 011e0b  pop ds
    X86_AT(c, 0x11e0bu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0c  inc edx
    X86_AT(c, 0x11e0cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e0d  xor al, al
    X86_AT(c, 0x11e0du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e0f  out dx, al
    X86_AT(c, 0x11e0fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e10  push ds
    X86_AT(c, 0x11e10u);
    push32(c, c.sreg[3]);
    // 011e11  pop ds
    X86_AT(c, 0x11e11u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e12  push ds
    X86_AT(c, 0x11e12u);
    push32(c, c.sreg[3]);
    // 011e13  pop ds
    X86_AT(c, 0x11e13u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e14  inc edx
    X86_AT(c, 0x11e14u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e15  out dx, al
    X86_AT(c, 0x11e15u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e16  push ds
    X86_AT(c, 0x11e16u);
    push32(c, c.sreg[3]);
    // 011e17  pop ds
    X86_AT(c, 0x11e17u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e18  push ds
    X86_AT(c, 0x11e18u);
    push32(c, c.sreg[3]);
    // 011e19  pop ds
    X86_AT(c, 0x11e19u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e1a  inc edx
    X86_AT(c, 0x11e1au);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e1b  xor al, al
    X86_AT(c, 0x11e1bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e1d  out dx, al
    X86_AT(c, 0x11e1du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e1e  push ds
    X86_AT(c, 0x11e1eu);
    push32(c, c.sreg[3]);
    // 011e1f  pop ds
    X86_AT(c, 0x11e1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e20  push ds
    X86_AT(c, 0x11e20u);
    push32(c, c.sreg[3]);
    // 011e21  pop ds
    X86_AT(c, 0x11e21u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e22  inc ah
    X86_AT(c, 0x11e22u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e24  cmp ah, 0x48
    X86_AT(c, 0x11e24u);
    (void)x86_sub(c, g8(c, 4), 0x48u, 0, 1);
    // 011e27  jne 0x11ddb
    X86_AT(c, 0x11e27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11ddbu); goto L_11ddb; }
    X86_TICK(c, 2);
    // 011e29  xor ah, ah
    X86_AT(c, 0x11e29u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
L_11e2b:
    X86_TICK(c, 52);
    // 011e2b  mov dl, 0xf7
    X86_AT(c, 0x11e2bu);
    s8(c, 2, 0xF7u);
    // 011e2d  mov al, ah
    X86_AT(c, 0x11e2du);
    s8(c, 0, g8(c, 4));
    // 011e2f  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11e2fu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011e36  out dx, al
    X86_AT(c, 0x11e36u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e37  push ds
    X86_AT(c, 0x11e37u);
    push32(c, c.sreg[3]);
    // 011e38  pop ds
    X86_AT(c, 0x11e38u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e39  push ds
    X86_AT(c, 0x11e39u);
    push32(c, c.sreg[3]);
    // 011e3a  pop ds
    X86_AT(c, 0x11e3au);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e3b  mov al, 0xff
    X86_AT(c, 0x11e3bu);
    s8(c, 0, 0xFFu);
    // 011e3d  xor edi, edi
    X86_AT(c, 0x11e3du);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v ^ c.r[7], 4); }
    // 011e3f  mov ch, 0x10
    X86_AT(c, 0x11e3fu);
    s8(c, 5, 0x10u);
    // 011e41  stosb byte ptr es:[edi], al
    X86_AT(c, 0x11e41u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 011e43  inc ah
    X86_AT(c, 0x11e43u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e45  cmp ah, 0x10
    X86_AT(c, 0x11e45u);
    (void)x86_sub(c, g8(c, 4), 0x10u, 0, 1);
    // 011e48  jne 0x11e2b
    X86_AT(c, 0x11e48u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11e2bu); goto L_11e2b; }
    X86_TICK(c, 40);
    // 011e4a  pop es
    X86_AT(c, 0x11e4au);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011e4b  popal 
    X86_AT(c, 0x11e4bu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011e4c  xor al, al
    X86_AT(c, 0x11e4cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e4e  ret 
    X86_AT(c, 0x11e4eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11df8u, "ran off the end of a function");
}
void f_00011df9(X86Cpu& c) {
    goto L_11df9;
L_11ddb:
    X86_TICK(c, 76);
    // 011ddb  mov dl, 0xf7
    X86_AT(c, 0x11ddbu);
    s8(c, 2, 0xF7u);
    // 011ddd  mov al, ah
    X86_AT(c, 0x11dddu);
    s8(c, 0, g8(c, 4));
    // 011ddf  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11ddfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011de6  out dx, al
    X86_AT(c, 0x11de6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011de7  push ds
    X86_AT(c, 0x11de7u);
    push32(c, c.sreg[3]);
    // 011de8  pop ds
    X86_AT(c, 0x11de8u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011de9  push ds
    X86_AT(c, 0x11de9u);
    push32(c, c.sreg[3]);
    // 011dea  pop ds
    X86_AT(c, 0x11deau);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011deb  mov dl, 0xf0
    X86_AT(c, 0x11debu);
    s8(c, 2, 0xF0u);
    // 011ded  xor al, al
    X86_AT(c, 0x11dedu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011def  out dx, al
    X86_AT(c, 0x11defu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df0  push ds
    X86_AT(c, 0x11df0u);
    push32(c, c.sreg[3]);
    // 011df1  pop ds
    X86_AT(c, 0x11df1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df2  push ds
    X86_AT(c, 0x11df2u);
    push32(c, c.sreg[3]);
    // 011df3  pop ds
    X86_AT(c, 0x11df3u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df4  inc edx
    X86_AT(c, 0x11df4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011df5  mov al, 0x77
    X86_AT(c, 0x11df5u);
    s8(c, 0, 0x77u);
    // 011df7  out dx, al
    X86_AT(c, 0x11df7u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df8  push ds
    X86_AT(c, 0x11df8u);
    push32(c, c.sreg[3]);
L_11df9:
    X86_TICK(c, 157);
    // 011df9  pop ds
    X86_AT(c, 0x11df9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfa  push ds
    X86_AT(c, 0x11dfau);
    push32(c, c.sreg[3]);
    // 011dfb  pop ds
    X86_AT(c, 0x11dfbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfc  inc edx
    X86_AT(c, 0x11dfcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011dfd  mov al, 0x5a
    X86_AT(c, 0x11dfdu);
    s8(c, 0, 0x5Au);
    // 011dff  out dx, al
    X86_AT(c, 0x11dffu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e00  push ds
    X86_AT(c, 0x11e00u);
    push32(c, c.sreg[3]);
    // 011e01  pop ds
    X86_AT(c, 0x11e01u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e02  push ds
    X86_AT(c, 0x11e02u);
    push32(c, c.sreg[3]);
    // 011e03  pop ds
    X86_AT(c, 0x11e03u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e04  inc edx
    X86_AT(c, 0x11e04u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e05  mov al, 7
    X86_AT(c, 0x11e05u);
    s8(c, 0, 0x7u);
    // 011e07  out dx, al
    X86_AT(c, 0x11e07u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e08  push ds
    X86_AT(c, 0x11e08u);
    push32(c, c.sreg[3]);
    // 011e09  pop ds
    X86_AT(c, 0x11e09u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0a  push ds
    X86_AT(c, 0x11e0au);
    push32(c, c.sreg[3]);
    // 011e0b  pop ds
    X86_AT(c, 0x11e0bu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0c  inc edx
    X86_AT(c, 0x11e0cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e0d  xor al, al
    X86_AT(c, 0x11e0du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e0f  out dx, al
    X86_AT(c, 0x11e0fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e10  push ds
    X86_AT(c, 0x11e10u);
    push32(c, c.sreg[3]);
    // 011e11  pop ds
    X86_AT(c, 0x11e11u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e12  push ds
    X86_AT(c, 0x11e12u);
    push32(c, c.sreg[3]);
    // 011e13  pop ds
    X86_AT(c, 0x11e13u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e14  inc edx
    X86_AT(c, 0x11e14u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e15  out dx, al
    X86_AT(c, 0x11e15u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e16  push ds
    X86_AT(c, 0x11e16u);
    push32(c, c.sreg[3]);
    // 011e17  pop ds
    X86_AT(c, 0x11e17u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e18  push ds
    X86_AT(c, 0x11e18u);
    push32(c, c.sreg[3]);
    // 011e19  pop ds
    X86_AT(c, 0x11e19u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e1a  inc edx
    X86_AT(c, 0x11e1au);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e1b  xor al, al
    X86_AT(c, 0x11e1bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e1d  out dx, al
    X86_AT(c, 0x11e1du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e1e  push ds
    X86_AT(c, 0x11e1eu);
    push32(c, c.sreg[3]);
    // 011e1f  pop ds
    X86_AT(c, 0x11e1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e20  push ds
    X86_AT(c, 0x11e20u);
    push32(c, c.sreg[3]);
    // 011e21  pop ds
    X86_AT(c, 0x11e21u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e22  inc ah
    X86_AT(c, 0x11e22u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e24  cmp ah, 0x48
    X86_AT(c, 0x11e24u);
    (void)x86_sub(c, g8(c, 4), 0x48u, 0, 1);
    // 011e27  jne 0x11ddb
    X86_AT(c, 0x11e27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11ddbu); goto L_11ddb; }
    X86_TICK(c, 2);
    // 011e29  xor ah, ah
    X86_AT(c, 0x11e29u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
L_11e2b:
    X86_TICK(c, 52);
    // 011e2b  mov dl, 0xf7
    X86_AT(c, 0x11e2bu);
    s8(c, 2, 0xF7u);
    // 011e2d  mov al, ah
    X86_AT(c, 0x11e2du);
    s8(c, 0, g8(c, 4));
    // 011e2f  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11e2fu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011e36  out dx, al
    X86_AT(c, 0x11e36u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e37  push ds
    X86_AT(c, 0x11e37u);
    push32(c, c.sreg[3]);
    // 011e38  pop ds
    X86_AT(c, 0x11e38u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e39  push ds
    X86_AT(c, 0x11e39u);
    push32(c, c.sreg[3]);
    // 011e3a  pop ds
    X86_AT(c, 0x11e3au);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e3b  mov al, 0xff
    X86_AT(c, 0x11e3bu);
    s8(c, 0, 0xFFu);
    // 011e3d  xor edi, edi
    X86_AT(c, 0x11e3du);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v ^ c.r[7], 4); }
    // 011e3f  mov ch, 0x10
    X86_AT(c, 0x11e3fu);
    s8(c, 5, 0x10u);
    // 011e41  stosb byte ptr es:[edi], al
    X86_AT(c, 0x11e41u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 011e43  inc ah
    X86_AT(c, 0x11e43u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e45  cmp ah, 0x10
    X86_AT(c, 0x11e45u);
    (void)x86_sub(c, g8(c, 4), 0x10u, 0, 1);
    // 011e48  jne 0x11e2b
    X86_AT(c, 0x11e48u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11e2bu); goto L_11e2b; }
    X86_TICK(c, 40);
    // 011e4a  pop es
    X86_AT(c, 0x11e4au);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011e4b  popal 
    X86_AT(c, 0x11e4bu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011e4c  xor al, al
    X86_AT(c, 0x11e4cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e4e  ret 
    X86_AT(c, 0x11e4eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11df9u, "ran off the end of a function");
}
void f_00011dfa(X86Cpu& c) {
    goto L_11dfa;
L_11ddb:
    X86_TICK(c, 80);
    // 011ddb  mov dl, 0xf7
    X86_AT(c, 0x11ddbu);
    s8(c, 2, 0xF7u);
    // 011ddd  mov al, ah
    X86_AT(c, 0x11dddu);
    s8(c, 0, g8(c, 4));
    // 011ddf  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11ddfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011de6  out dx, al
    X86_AT(c, 0x11de6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011de7  push ds
    X86_AT(c, 0x11de7u);
    push32(c, c.sreg[3]);
    // 011de8  pop ds
    X86_AT(c, 0x11de8u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011de9  push ds
    X86_AT(c, 0x11de9u);
    push32(c, c.sreg[3]);
    // 011dea  pop ds
    X86_AT(c, 0x11deau);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011deb  mov dl, 0xf0
    X86_AT(c, 0x11debu);
    s8(c, 2, 0xF0u);
    // 011ded  xor al, al
    X86_AT(c, 0x11dedu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011def  out dx, al
    X86_AT(c, 0x11defu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df0  push ds
    X86_AT(c, 0x11df0u);
    push32(c, c.sreg[3]);
    // 011df1  pop ds
    X86_AT(c, 0x11df1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df2  push ds
    X86_AT(c, 0x11df2u);
    push32(c, c.sreg[3]);
    // 011df3  pop ds
    X86_AT(c, 0x11df3u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df4  inc edx
    X86_AT(c, 0x11df4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011df5  mov al, 0x77
    X86_AT(c, 0x11df5u);
    s8(c, 0, 0x77u);
    // 011df7  out dx, al
    X86_AT(c, 0x11df7u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df8  push ds
    X86_AT(c, 0x11df8u);
    push32(c, c.sreg[3]);
    // 011df9  pop ds
    X86_AT(c, 0x11df9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_11dfa:
    X86_TICK(c, 153);
    // 011dfa  push ds
    X86_AT(c, 0x11dfau);
    push32(c, c.sreg[3]);
    // 011dfb  pop ds
    X86_AT(c, 0x11dfbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfc  inc edx
    X86_AT(c, 0x11dfcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011dfd  mov al, 0x5a
    X86_AT(c, 0x11dfdu);
    s8(c, 0, 0x5Au);
    // 011dff  out dx, al
    X86_AT(c, 0x11dffu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e00  push ds
    X86_AT(c, 0x11e00u);
    push32(c, c.sreg[3]);
    // 011e01  pop ds
    X86_AT(c, 0x11e01u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e02  push ds
    X86_AT(c, 0x11e02u);
    push32(c, c.sreg[3]);
    // 011e03  pop ds
    X86_AT(c, 0x11e03u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e04  inc edx
    X86_AT(c, 0x11e04u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e05  mov al, 7
    X86_AT(c, 0x11e05u);
    s8(c, 0, 0x7u);
    // 011e07  out dx, al
    X86_AT(c, 0x11e07u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e08  push ds
    X86_AT(c, 0x11e08u);
    push32(c, c.sreg[3]);
    // 011e09  pop ds
    X86_AT(c, 0x11e09u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0a  push ds
    X86_AT(c, 0x11e0au);
    push32(c, c.sreg[3]);
    // 011e0b  pop ds
    X86_AT(c, 0x11e0bu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0c  inc edx
    X86_AT(c, 0x11e0cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e0d  xor al, al
    X86_AT(c, 0x11e0du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e0f  out dx, al
    X86_AT(c, 0x11e0fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e10  push ds
    X86_AT(c, 0x11e10u);
    push32(c, c.sreg[3]);
    // 011e11  pop ds
    X86_AT(c, 0x11e11u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e12  push ds
    X86_AT(c, 0x11e12u);
    push32(c, c.sreg[3]);
    // 011e13  pop ds
    X86_AT(c, 0x11e13u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e14  inc edx
    X86_AT(c, 0x11e14u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e15  out dx, al
    X86_AT(c, 0x11e15u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e16  push ds
    X86_AT(c, 0x11e16u);
    push32(c, c.sreg[3]);
    // 011e17  pop ds
    X86_AT(c, 0x11e17u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e18  push ds
    X86_AT(c, 0x11e18u);
    push32(c, c.sreg[3]);
    // 011e19  pop ds
    X86_AT(c, 0x11e19u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e1a  inc edx
    X86_AT(c, 0x11e1au);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e1b  xor al, al
    X86_AT(c, 0x11e1bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e1d  out dx, al
    X86_AT(c, 0x11e1du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e1e  push ds
    X86_AT(c, 0x11e1eu);
    push32(c, c.sreg[3]);
    // 011e1f  pop ds
    X86_AT(c, 0x11e1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e20  push ds
    X86_AT(c, 0x11e20u);
    push32(c, c.sreg[3]);
    // 011e21  pop ds
    X86_AT(c, 0x11e21u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e22  inc ah
    X86_AT(c, 0x11e22u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e24  cmp ah, 0x48
    X86_AT(c, 0x11e24u);
    (void)x86_sub(c, g8(c, 4), 0x48u, 0, 1);
    // 011e27  jne 0x11ddb
    X86_AT(c, 0x11e27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11ddbu); goto L_11ddb; }
    X86_TICK(c, 2);
    // 011e29  xor ah, ah
    X86_AT(c, 0x11e29u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
L_11e2b:
    X86_TICK(c, 52);
    // 011e2b  mov dl, 0xf7
    X86_AT(c, 0x11e2bu);
    s8(c, 2, 0xF7u);
    // 011e2d  mov al, ah
    X86_AT(c, 0x11e2du);
    s8(c, 0, g8(c, 4));
    // 011e2f  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11e2fu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011e36  out dx, al
    X86_AT(c, 0x11e36u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e37  push ds
    X86_AT(c, 0x11e37u);
    push32(c, c.sreg[3]);
    // 011e38  pop ds
    X86_AT(c, 0x11e38u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e39  push ds
    X86_AT(c, 0x11e39u);
    push32(c, c.sreg[3]);
    // 011e3a  pop ds
    X86_AT(c, 0x11e3au);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e3b  mov al, 0xff
    X86_AT(c, 0x11e3bu);
    s8(c, 0, 0xFFu);
    // 011e3d  xor edi, edi
    X86_AT(c, 0x11e3du);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v ^ c.r[7], 4); }
    // 011e3f  mov ch, 0x10
    X86_AT(c, 0x11e3fu);
    s8(c, 5, 0x10u);
    // 011e41  stosb byte ptr es:[edi], al
    X86_AT(c, 0x11e41u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 011e43  inc ah
    X86_AT(c, 0x11e43u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e45  cmp ah, 0x10
    X86_AT(c, 0x11e45u);
    (void)x86_sub(c, g8(c, 4), 0x10u, 0, 1);
    // 011e48  jne 0x11e2b
    X86_AT(c, 0x11e48u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11e2bu); goto L_11e2b; }
    X86_TICK(c, 40);
    // 011e4a  pop es
    X86_AT(c, 0x11e4au);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011e4b  popal 
    X86_AT(c, 0x11e4bu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011e4c  xor al, al
    X86_AT(c, 0x11e4cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e4e  ret 
    X86_AT(c, 0x11e4eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11dfau, "ran off the end of a function");
}
void f_00011dfb(X86Cpu& c) {
    goto L_11dfb;
L_11ddb:
    X86_TICK(c, 82);
    // 011ddb  mov dl, 0xf7
    X86_AT(c, 0x11ddbu);
    s8(c, 2, 0xF7u);
    // 011ddd  mov al, ah
    X86_AT(c, 0x11dddu);
    s8(c, 0, g8(c, 4));
    // 011ddf  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11ddfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011de6  out dx, al
    X86_AT(c, 0x11de6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011de7  push ds
    X86_AT(c, 0x11de7u);
    push32(c, c.sreg[3]);
    // 011de8  pop ds
    X86_AT(c, 0x11de8u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011de9  push ds
    X86_AT(c, 0x11de9u);
    push32(c, c.sreg[3]);
    // 011dea  pop ds
    X86_AT(c, 0x11deau);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011deb  mov dl, 0xf0
    X86_AT(c, 0x11debu);
    s8(c, 2, 0xF0u);
    // 011ded  xor al, al
    X86_AT(c, 0x11dedu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011def  out dx, al
    X86_AT(c, 0x11defu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df0  push ds
    X86_AT(c, 0x11df0u);
    push32(c, c.sreg[3]);
    // 011df1  pop ds
    X86_AT(c, 0x11df1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df2  push ds
    X86_AT(c, 0x11df2u);
    push32(c, c.sreg[3]);
    // 011df3  pop ds
    X86_AT(c, 0x11df3u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df4  inc edx
    X86_AT(c, 0x11df4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011df5  mov al, 0x77
    X86_AT(c, 0x11df5u);
    s8(c, 0, 0x77u);
    // 011df7  out dx, al
    X86_AT(c, 0x11df7u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df8  push ds
    X86_AT(c, 0x11df8u);
    push32(c, c.sreg[3]);
    // 011df9  pop ds
    X86_AT(c, 0x11df9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfa  push ds
    X86_AT(c, 0x11dfau);
    push32(c, c.sreg[3]);
L_11dfb:
    X86_TICK(c, 151);
    // 011dfb  pop ds
    X86_AT(c, 0x11dfbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfc  inc edx
    X86_AT(c, 0x11dfcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011dfd  mov al, 0x5a
    X86_AT(c, 0x11dfdu);
    s8(c, 0, 0x5Au);
    // 011dff  out dx, al
    X86_AT(c, 0x11dffu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e00  push ds
    X86_AT(c, 0x11e00u);
    push32(c, c.sreg[3]);
    // 011e01  pop ds
    X86_AT(c, 0x11e01u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e02  push ds
    X86_AT(c, 0x11e02u);
    push32(c, c.sreg[3]);
    // 011e03  pop ds
    X86_AT(c, 0x11e03u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e04  inc edx
    X86_AT(c, 0x11e04u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e05  mov al, 7
    X86_AT(c, 0x11e05u);
    s8(c, 0, 0x7u);
    // 011e07  out dx, al
    X86_AT(c, 0x11e07u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e08  push ds
    X86_AT(c, 0x11e08u);
    push32(c, c.sreg[3]);
    // 011e09  pop ds
    X86_AT(c, 0x11e09u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0a  push ds
    X86_AT(c, 0x11e0au);
    push32(c, c.sreg[3]);
    // 011e0b  pop ds
    X86_AT(c, 0x11e0bu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0c  inc edx
    X86_AT(c, 0x11e0cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e0d  xor al, al
    X86_AT(c, 0x11e0du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e0f  out dx, al
    X86_AT(c, 0x11e0fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e10  push ds
    X86_AT(c, 0x11e10u);
    push32(c, c.sreg[3]);
    // 011e11  pop ds
    X86_AT(c, 0x11e11u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e12  push ds
    X86_AT(c, 0x11e12u);
    push32(c, c.sreg[3]);
    // 011e13  pop ds
    X86_AT(c, 0x11e13u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e14  inc edx
    X86_AT(c, 0x11e14u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e15  out dx, al
    X86_AT(c, 0x11e15u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e16  push ds
    X86_AT(c, 0x11e16u);
    push32(c, c.sreg[3]);
    // 011e17  pop ds
    X86_AT(c, 0x11e17u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e18  push ds
    X86_AT(c, 0x11e18u);
    push32(c, c.sreg[3]);
    // 011e19  pop ds
    X86_AT(c, 0x11e19u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e1a  inc edx
    X86_AT(c, 0x11e1au);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e1b  xor al, al
    X86_AT(c, 0x11e1bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e1d  out dx, al
    X86_AT(c, 0x11e1du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e1e  push ds
    X86_AT(c, 0x11e1eu);
    push32(c, c.sreg[3]);
    // 011e1f  pop ds
    X86_AT(c, 0x11e1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e20  push ds
    X86_AT(c, 0x11e20u);
    push32(c, c.sreg[3]);
    // 011e21  pop ds
    X86_AT(c, 0x11e21u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e22  inc ah
    X86_AT(c, 0x11e22u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e24  cmp ah, 0x48
    X86_AT(c, 0x11e24u);
    (void)x86_sub(c, g8(c, 4), 0x48u, 0, 1);
    // 011e27  jne 0x11ddb
    X86_AT(c, 0x11e27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11ddbu); goto L_11ddb; }
    X86_TICK(c, 2);
    // 011e29  xor ah, ah
    X86_AT(c, 0x11e29u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
L_11e2b:
    X86_TICK(c, 52);
    // 011e2b  mov dl, 0xf7
    X86_AT(c, 0x11e2bu);
    s8(c, 2, 0xF7u);
    // 011e2d  mov al, ah
    X86_AT(c, 0x11e2du);
    s8(c, 0, g8(c, 4));
    // 011e2f  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11e2fu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011e36  out dx, al
    X86_AT(c, 0x11e36u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e37  push ds
    X86_AT(c, 0x11e37u);
    push32(c, c.sreg[3]);
    // 011e38  pop ds
    X86_AT(c, 0x11e38u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e39  push ds
    X86_AT(c, 0x11e39u);
    push32(c, c.sreg[3]);
    // 011e3a  pop ds
    X86_AT(c, 0x11e3au);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e3b  mov al, 0xff
    X86_AT(c, 0x11e3bu);
    s8(c, 0, 0xFFu);
    // 011e3d  xor edi, edi
    X86_AT(c, 0x11e3du);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v ^ c.r[7], 4); }
    // 011e3f  mov ch, 0x10
    X86_AT(c, 0x11e3fu);
    s8(c, 5, 0x10u);
    // 011e41  stosb byte ptr es:[edi], al
    X86_AT(c, 0x11e41u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 011e43  inc ah
    X86_AT(c, 0x11e43u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e45  cmp ah, 0x10
    X86_AT(c, 0x11e45u);
    (void)x86_sub(c, g8(c, 4), 0x10u, 0, 1);
    // 011e48  jne 0x11e2b
    X86_AT(c, 0x11e48u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11e2bu); goto L_11e2b; }
    X86_TICK(c, 40);
    // 011e4a  pop es
    X86_AT(c, 0x11e4au);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011e4b  popal 
    X86_AT(c, 0x11e4bu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011e4c  xor al, al
    X86_AT(c, 0x11e4cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e4e  ret 
    X86_AT(c, 0x11e4eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11dfbu, "ran off the end of a function");
}
void f_00011dfc(X86Cpu& c) {
    goto L_11dfc;
L_11ddb:
    X86_TICK(c, 86);
    // 011ddb  mov dl, 0xf7
    X86_AT(c, 0x11ddbu);
    s8(c, 2, 0xF7u);
    // 011ddd  mov al, ah
    X86_AT(c, 0x11dddu);
    s8(c, 0, g8(c, 4));
    // 011ddf  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11ddfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011de6  out dx, al
    X86_AT(c, 0x11de6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011de7  push ds
    X86_AT(c, 0x11de7u);
    push32(c, c.sreg[3]);
    // 011de8  pop ds
    X86_AT(c, 0x11de8u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011de9  push ds
    X86_AT(c, 0x11de9u);
    push32(c, c.sreg[3]);
    // 011dea  pop ds
    X86_AT(c, 0x11deau);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011deb  mov dl, 0xf0
    X86_AT(c, 0x11debu);
    s8(c, 2, 0xF0u);
    // 011ded  xor al, al
    X86_AT(c, 0x11dedu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011def  out dx, al
    X86_AT(c, 0x11defu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df0  push ds
    X86_AT(c, 0x11df0u);
    push32(c, c.sreg[3]);
    // 011df1  pop ds
    X86_AT(c, 0x11df1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df2  push ds
    X86_AT(c, 0x11df2u);
    push32(c, c.sreg[3]);
    // 011df3  pop ds
    X86_AT(c, 0x11df3u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df4  inc edx
    X86_AT(c, 0x11df4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011df5  mov al, 0x77
    X86_AT(c, 0x11df5u);
    s8(c, 0, 0x77u);
    // 011df7  out dx, al
    X86_AT(c, 0x11df7u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df8  push ds
    X86_AT(c, 0x11df8u);
    push32(c, c.sreg[3]);
    // 011df9  pop ds
    X86_AT(c, 0x11df9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfa  push ds
    X86_AT(c, 0x11dfau);
    push32(c, c.sreg[3]);
    // 011dfb  pop ds
    X86_AT(c, 0x11dfbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_11dfc:
    X86_TICK(c, 147);
    // 011dfc  inc edx
    X86_AT(c, 0x11dfcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011dfd  mov al, 0x5a
    X86_AT(c, 0x11dfdu);
    s8(c, 0, 0x5Au);
    // 011dff  out dx, al
    X86_AT(c, 0x11dffu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e00  push ds
    X86_AT(c, 0x11e00u);
    push32(c, c.sreg[3]);
    // 011e01  pop ds
    X86_AT(c, 0x11e01u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e02  push ds
    X86_AT(c, 0x11e02u);
    push32(c, c.sreg[3]);
    // 011e03  pop ds
    X86_AT(c, 0x11e03u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e04  inc edx
    X86_AT(c, 0x11e04u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e05  mov al, 7
    X86_AT(c, 0x11e05u);
    s8(c, 0, 0x7u);
    // 011e07  out dx, al
    X86_AT(c, 0x11e07u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e08  push ds
    X86_AT(c, 0x11e08u);
    push32(c, c.sreg[3]);
    // 011e09  pop ds
    X86_AT(c, 0x11e09u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0a  push ds
    X86_AT(c, 0x11e0au);
    push32(c, c.sreg[3]);
    // 011e0b  pop ds
    X86_AT(c, 0x11e0bu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0c  inc edx
    X86_AT(c, 0x11e0cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e0d  xor al, al
    X86_AT(c, 0x11e0du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e0f  out dx, al
    X86_AT(c, 0x11e0fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e10  push ds
    X86_AT(c, 0x11e10u);
    push32(c, c.sreg[3]);
    // 011e11  pop ds
    X86_AT(c, 0x11e11u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e12  push ds
    X86_AT(c, 0x11e12u);
    push32(c, c.sreg[3]);
    // 011e13  pop ds
    X86_AT(c, 0x11e13u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e14  inc edx
    X86_AT(c, 0x11e14u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e15  out dx, al
    X86_AT(c, 0x11e15u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e16  push ds
    X86_AT(c, 0x11e16u);
    push32(c, c.sreg[3]);
    // 011e17  pop ds
    X86_AT(c, 0x11e17u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e18  push ds
    X86_AT(c, 0x11e18u);
    push32(c, c.sreg[3]);
    // 011e19  pop ds
    X86_AT(c, 0x11e19u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e1a  inc edx
    X86_AT(c, 0x11e1au);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e1b  xor al, al
    X86_AT(c, 0x11e1bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e1d  out dx, al
    X86_AT(c, 0x11e1du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e1e  push ds
    X86_AT(c, 0x11e1eu);
    push32(c, c.sreg[3]);
    // 011e1f  pop ds
    X86_AT(c, 0x11e1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e20  push ds
    X86_AT(c, 0x11e20u);
    push32(c, c.sreg[3]);
    // 011e21  pop ds
    X86_AT(c, 0x11e21u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e22  inc ah
    X86_AT(c, 0x11e22u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e24  cmp ah, 0x48
    X86_AT(c, 0x11e24u);
    (void)x86_sub(c, g8(c, 4), 0x48u, 0, 1);
    // 011e27  jne 0x11ddb
    X86_AT(c, 0x11e27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11ddbu); goto L_11ddb; }
    X86_TICK(c, 2);
    // 011e29  xor ah, ah
    X86_AT(c, 0x11e29u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
L_11e2b:
    X86_TICK(c, 52);
    // 011e2b  mov dl, 0xf7
    X86_AT(c, 0x11e2bu);
    s8(c, 2, 0xF7u);
    // 011e2d  mov al, ah
    X86_AT(c, 0x11e2du);
    s8(c, 0, g8(c, 4));
    // 011e2f  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11e2fu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011e36  out dx, al
    X86_AT(c, 0x11e36u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e37  push ds
    X86_AT(c, 0x11e37u);
    push32(c, c.sreg[3]);
    // 011e38  pop ds
    X86_AT(c, 0x11e38u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e39  push ds
    X86_AT(c, 0x11e39u);
    push32(c, c.sreg[3]);
    // 011e3a  pop ds
    X86_AT(c, 0x11e3au);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e3b  mov al, 0xff
    X86_AT(c, 0x11e3bu);
    s8(c, 0, 0xFFu);
    // 011e3d  xor edi, edi
    X86_AT(c, 0x11e3du);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v ^ c.r[7], 4); }
    // 011e3f  mov ch, 0x10
    X86_AT(c, 0x11e3fu);
    s8(c, 5, 0x10u);
    // 011e41  stosb byte ptr es:[edi], al
    X86_AT(c, 0x11e41u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 011e43  inc ah
    X86_AT(c, 0x11e43u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e45  cmp ah, 0x10
    X86_AT(c, 0x11e45u);
    (void)x86_sub(c, g8(c, 4), 0x10u, 0, 1);
    // 011e48  jne 0x11e2b
    X86_AT(c, 0x11e48u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11e2bu); goto L_11e2b; }
    X86_TICK(c, 40);
    // 011e4a  pop es
    X86_AT(c, 0x11e4au);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011e4b  popal 
    X86_AT(c, 0x11e4bu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011e4c  xor al, al
    X86_AT(c, 0x11e4cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e4e  ret 
    X86_AT(c, 0x11e4eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11dfcu, "ran off the end of a function");
}
void f_00011dfd(X86Cpu& c) {
    goto L_11dfd;
L_11ddb:
    X86_TICK(c, 88);
    // 011ddb  mov dl, 0xf7
    X86_AT(c, 0x11ddbu);
    s8(c, 2, 0xF7u);
    // 011ddd  mov al, ah
    X86_AT(c, 0x11dddu);
    s8(c, 0, g8(c, 4));
    // 011ddf  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11ddfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011de6  out dx, al
    X86_AT(c, 0x11de6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011de7  push ds
    X86_AT(c, 0x11de7u);
    push32(c, c.sreg[3]);
    // 011de8  pop ds
    X86_AT(c, 0x11de8u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011de9  push ds
    X86_AT(c, 0x11de9u);
    push32(c, c.sreg[3]);
    // 011dea  pop ds
    X86_AT(c, 0x11deau);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011deb  mov dl, 0xf0
    X86_AT(c, 0x11debu);
    s8(c, 2, 0xF0u);
    // 011ded  xor al, al
    X86_AT(c, 0x11dedu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011def  out dx, al
    X86_AT(c, 0x11defu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df0  push ds
    X86_AT(c, 0x11df0u);
    push32(c, c.sreg[3]);
    // 011df1  pop ds
    X86_AT(c, 0x11df1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df2  push ds
    X86_AT(c, 0x11df2u);
    push32(c, c.sreg[3]);
    // 011df3  pop ds
    X86_AT(c, 0x11df3u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df4  inc edx
    X86_AT(c, 0x11df4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011df5  mov al, 0x77
    X86_AT(c, 0x11df5u);
    s8(c, 0, 0x77u);
    // 011df7  out dx, al
    X86_AT(c, 0x11df7u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df8  push ds
    X86_AT(c, 0x11df8u);
    push32(c, c.sreg[3]);
    // 011df9  pop ds
    X86_AT(c, 0x11df9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfa  push ds
    X86_AT(c, 0x11dfau);
    push32(c, c.sreg[3]);
    // 011dfb  pop ds
    X86_AT(c, 0x11dfbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfc  inc edx
    X86_AT(c, 0x11dfcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
L_11dfd:
    X86_TICK(c, 145);
    // 011dfd  mov al, 0x5a
    X86_AT(c, 0x11dfdu);
    s8(c, 0, 0x5Au);
    // 011dff  out dx, al
    X86_AT(c, 0x11dffu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e00  push ds
    X86_AT(c, 0x11e00u);
    push32(c, c.sreg[3]);
    // 011e01  pop ds
    X86_AT(c, 0x11e01u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e02  push ds
    X86_AT(c, 0x11e02u);
    push32(c, c.sreg[3]);
    // 011e03  pop ds
    X86_AT(c, 0x11e03u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e04  inc edx
    X86_AT(c, 0x11e04u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e05  mov al, 7
    X86_AT(c, 0x11e05u);
    s8(c, 0, 0x7u);
    // 011e07  out dx, al
    X86_AT(c, 0x11e07u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e08  push ds
    X86_AT(c, 0x11e08u);
    push32(c, c.sreg[3]);
    // 011e09  pop ds
    X86_AT(c, 0x11e09u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0a  push ds
    X86_AT(c, 0x11e0au);
    push32(c, c.sreg[3]);
    // 011e0b  pop ds
    X86_AT(c, 0x11e0bu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0c  inc edx
    X86_AT(c, 0x11e0cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e0d  xor al, al
    X86_AT(c, 0x11e0du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e0f  out dx, al
    X86_AT(c, 0x11e0fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e10  push ds
    X86_AT(c, 0x11e10u);
    push32(c, c.sreg[3]);
    // 011e11  pop ds
    X86_AT(c, 0x11e11u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e12  push ds
    X86_AT(c, 0x11e12u);
    push32(c, c.sreg[3]);
    // 011e13  pop ds
    X86_AT(c, 0x11e13u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e14  inc edx
    X86_AT(c, 0x11e14u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e15  out dx, al
    X86_AT(c, 0x11e15u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e16  push ds
    X86_AT(c, 0x11e16u);
    push32(c, c.sreg[3]);
    // 011e17  pop ds
    X86_AT(c, 0x11e17u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e18  push ds
    X86_AT(c, 0x11e18u);
    push32(c, c.sreg[3]);
    // 011e19  pop ds
    X86_AT(c, 0x11e19u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e1a  inc edx
    X86_AT(c, 0x11e1au);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e1b  xor al, al
    X86_AT(c, 0x11e1bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e1d  out dx, al
    X86_AT(c, 0x11e1du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e1e  push ds
    X86_AT(c, 0x11e1eu);
    push32(c, c.sreg[3]);
    // 011e1f  pop ds
    X86_AT(c, 0x11e1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e20  push ds
    X86_AT(c, 0x11e20u);
    push32(c, c.sreg[3]);
    // 011e21  pop ds
    X86_AT(c, 0x11e21u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e22  inc ah
    X86_AT(c, 0x11e22u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e24  cmp ah, 0x48
    X86_AT(c, 0x11e24u);
    (void)x86_sub(c, g8(c, 4), 0x48u, 0, 1);
    // 011e27  jne 0x11ddb
    X86_AT(c, 0x11e27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11ddbu); goto L_11ddb; }
    X86_TICK(c, 2);
    // 011e29  xor ah, ah
    X86_AT(c, 0x11e29u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
L_11e2b:
    X86_TICK(c, 52);
    // 011e2b  mov dl, 0xf7
    X86_AT(c, 0x11e2bu);
    s8(c, 2, 0xF7u);
    // 011e2d  mov al, ah
    X86_AT(c, 0x11e2du);
    s8(c, 0, g8(c, 4));
    // 011e2f  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11e2fu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011e36  out dx, al
    X86_AT(c, 0x11e36u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e37  push ds
    X86_AT(c, 0x11e37u);
    push32(c, c.sreg[3]);
    // 011e38  pop ds
    X86_AT(c, 0x11e38u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e39  push ds
    X86_AT(c, 0x11e39u);
    push32(c, c.sreg[3]);
    // 011e3a  pop ds
    X86_AT(c, 0x11e3au);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e3b  mov al, 0xff
    X86_AT(c, 0x11e3bu);
    s8(c, 0, 0xFFu);
    // 011e3d  xor edi, edi
    X86_AT(c, 0x11e3du);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v ^ c.r[7], 4); }
    // 011e3f  mov ch, 0x10
    X86_AT(c, 0x11e3fu);
    s8(c, 5, 0x10u);
    // 011e41  stosb byte ptr es:[edi], al
    X86_AT(c, 0x11e41u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 011e43  inc ah
    X86_AT(c, 0x11e43u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e45  cmp ah, 0x10
    X86_AT(c, 0x11e45u);
    (void)x86_sub(c, g8(c, 4), 0x10u, 0, 1);
    // 011e48  jne 0x11e2b
    X86_AT(c, 0x11e48u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11e2bu); goto L_11e2b; }
    X86_TICK(c, 40);
    // 011e4a  pop es
    X86_AT(c, 0x11e4au);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011e4b  popal 
    X86_AT(c, 0x11e4bu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011e4c  xor al, al
    X86_AT(c, 0x11e4cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e4e  ret 
    X86_AT(c, 0x11e4eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11dfdu, "ran off the end of a function");
}
void f_00011dff(X86Cpu& c) {
    goto L_11dff;
L_11ddb:
    X86_TICK(c, 90);
    // 011ddb  mov dl, 0xf7
    X86_AT(c, 0x11ddbu);
    s8(c, 2, 0xF7u);
    // 011ddd  mov al, ah
    X86_AT(c, 0x11dddu);
    s8(c, 0, g8(c, 4));
    // 011ddf  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11ddfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011de6  out dx, al
    X86_AT(c, 0x11de6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011de7  push ds
    X86_AT(c, 0x11de7u);
    push32(c, c.sreg[3]);
    // 011de8  pop ds
    X86_AT(c, 0x11de8u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011de9  push ds
    X86_AT(c, 0x11de9u);
    push32(c, c.sreg[3]);
    // 011dea  pop ds
    X86_AT(c, 0x11deau);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011deb  mov dl, 0xf0
    X86_AT(c, 0x11debu);
    s8(c, 2, 0xF0u);
    // 011ded  xor al, al
    X86_AT(c, 0x11dedu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011def  out dx, al
    X86_AT(c, 0x11defu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df0  push ds
    X86_AT(c, 0x11df0u);
    push32(c, c.sreg[3]);
    // 011df1  pop ds
    X86_AT(c, 0x11df1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df2  push ds
    X86_AT(c, 0x11df2u);
    push32(c, c.sreg[3]);
    // 011df3  pop ds
    X86_AT(c, 0x11df3u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df4  inc edx
    X86_AT(c, 0x11df4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011df5  mov al, 0x77
    X86_AT(c, 0x11df5u);
    s8(c, 0, 0x77u);
    // 011df7  out dx, al
    X86_AT(c, 0x11df7u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df8  push ds
    X86_AT(c, 0x11df8u);
    push32(c, c.sreg[3]);
    // 011df9  pop ds
    X86_AT(c, 0x11df9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfa  push ds
    X86_AT(c, 0x11dfau);
    push32(c, c.sreg[3]);
    // 011dfb  pop ds
    X86_AT(c, 0x11dfbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfc  inc edx
    X86_AT(c, 0x11dfcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011dfd  mov al, 0x5a
    X86_AT(c, 0x11dfdu);
    s8(c, 0, 0x5Au);
L_11dff:
    X86_TICK(c, 143);
    // 011dff  out dx, al
    X86_AT(c, 0x11dffu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e00  push ds
    X86_AT(c, 0x11e00u);
    push32(c, c.sreg[3]);
    // 011e01  pop ds
    X86_AT(c, 0x11e01u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e02  push ds
    X86_AT(c, 0x11e02u);
    push32(c, c.sreg[3]);
    // 011e03  pop ds
    X86_AT(c, 0x11e03u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e04  inc edx
    X86_AT(c, 0x11e04u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e05  mov al, 7
    X86_AT(c, 0x11e05u);
    s8(c, 0, 0x7u);
    // 011e07  out dx, al
    X86_AT(c, 0x11e07u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e08  push ds
    X86_AT(c, 0x11e08u);
    push32(c, c.sreg[3]);
    // 011e09  pop ds
    X86_AT(c, 0x11e09u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0a  push ds
    X86_AT(c, 0x11e0au);
    push32(c, c.sreg[3]);
    // 011e0b  pop ds
    X86_AT(c, 0x11e0bu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0c  inc edx
    X86_AT(c, 0x11e0cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e0d  xor al, al
    X86_AT(c, 0x11e0du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e0f  out dx, al
    X86_AT(c, 0x11e0fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e10  push ds
    X86_AT(c, 0x11e10u);
    push32(c, c.sreg[3]);
    // 011e11  pop ds
    X86_AT(c, 0x11e11u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e12  push ds
    X86_AT(c, 0x11e12u);
    push32(c, c.sreg[3]);
    // 011e13  pop ds
    X86_AT(c, 0x11e13u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e14  inc edx
    X86_AT(c, 0x11e14u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e15  out dx, al
    X86_AT(c, 0x11e15u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e16  push ds
    X86_AT(c, 0x11e16u);
    push32(c, c.sreg[3]);
    // 011e17  pop ds
    X86_AT(c, 0x11e17u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e18  push ds
    X86_AT(c, 0x11e18u);
    push32(c, c.sreg[3]);
    // 011e19  pop ds
    X86_AT(c, 0x11e19u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e1a  inc edx
    X86_AT(c, 0x11e1au);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e1b  xor al, al
    X86_AT(c, 0x11e1bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e1d  out dx, al
    X86_AT(c, 0x11e1du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e1e  push ds
    X86_AT(c, 0x11e1eu);
    push32(c, c.sreg[3]);
    // 011e1f  pop ds
    X86_AT(c, 0x11e1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e20  push ds
    X86_AT(c, 0x11e20u);
    push32(c, c.sreg[3]);
    // 011e21  pop ds
    X86_AT(c, 0x11e21u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e22  inc ah
    X86_AT(c, 0x11e22u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e24  cmp ah, 0x48
    X86_AT(c, 0x11e24u);
    (void)x86_sub(c, g8(c, 4), 0x48u, 0, 1);
    // 011e27  jne 0x11ddb
    X86_AT(c, 0x11e27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11ddbu); goto L_11ddb; }
    X86_TICK(c, 2);
    // 011e29  xor ah, ah
    X86_AT(c, 0x11e29u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
L_11e2b:
    X86_TICK(c, 52);
    // 011e2b  mov dl, 0xf7
    X86_AT(c, 0x11e2bu);
    s8(c, 2, 0xF7u);
    // 011e2d  mov al, ah
    X86_AT(c, 0x11e2du);
    s8(c, 0, g8(c, 4));
    // 011e2f  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11e2fu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011e36  out dx, al
    X86_AT(c, 0x11e36u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e37  push ds
    X86_AT(c, 0x11e37u);
    push32(c, c.sreg[3]);
    // 011e38  pop ds
    X86_AT(c, 0x11e38u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e39  push ds
    X86_AT(c, 0x11e39u);
    push32(c, c.sreg[3]);
    // 011e3a  pop ds
    X86_AT(c, 0x11e3au);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e3b  mov al, 0xff
    X86_AT(c, 0x11e3bu);
    s8(c, 0, 0xFFu);
    // 011e3d  xor edi, edi
    X86_AT(c, 0x11e3du);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v ^ c.r[7], 4); }
    // 011e3f  mov ch, 0x10
    X86_AT(c, 0x11e3fu);
    s8(c, 5, 0x10u);
    // 011e41  stosb byte ptr es:[edi], al
    X86_AT(c, 0x11e41u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 011e43  inc ah
    X86_AT(c, 0x11e43u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e45  cmp ah, 0x10
    X86_AT(c, 0x11e45u);
    (void)x86_sub(c, g8(c, 4), 0x10u, 0, 1);
    // 011e48  jne 0x11e2b
    X86_AT(c, 0x11e48u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11e2bu); goto L_11e2b; }
    X86_TICK(c, 40);
    // 011e4a  pop es
    X86_AT(c, 0x11e4au);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011e4b  popal 
    X86_AT(c, 0x11e4bu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011e4c  xor al, al
    X86_AT(c, 0x11e4cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e4e  ret 
    X86_AT(c, 0x11e4eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11dffu, "ran off the end of a function");
}
void f_00011e00(X86Cpu& c) {
    goto L_11e00;
L_11ddb:
    X86_TICK(c, 102);
    // 011ddb  mov dl, 0xf7
    X86_AT(c, 0x11ddbu);
    s8(c, 2, 0xF7u);
    // 011ddd  mov al, ah
    X86_AT(c, 0x11dddu);
    s8(c, 0, g8(c, 4));
    // 011ddf  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11ddfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011de6  out dx, al
    X86_AT(c, 0x11de6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011de7  push ds
    X86_AT(c, 0x11de7u);
    push32(c, c.sreg[3]);
    // 011de8  pop ds
    X86_AT(c, 0x11de8u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011de9  push ds
    X86_AT(c, 0x11de9u);
    push32(c, c.sreg[3]);
    // 011dea  pop ds
    X86_AT(c, 0x11deau);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011deb  mov dl, 0xf0
    X86_AT(c, 0x11debu);
    s8(c, 2, 0xF0u);
    // 011ded  xor al, al
    X86_AT(c, 0x11dedu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011def  out dx, al
    X86_AT(c, 0x11defu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df0  push ds
    X86_AT(c, 0x11df0u);
    push32(c, c.sreg[3]);
    // 011df1  pop ds
    X86_AT(c, 0x11df1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df2  push ds
    X86_AT(c, 0x11df2u);
    push32(c, c.sreg[3]);
    // 011df3  pop ds
    X86_AT(c, 0x11df3u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df4  inc edx
    X86_AT(c, 0x11df4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011df5  mov al, 0x77
    X86_AT(c, 0x11df5u);
    s8(c, 0, 0x77u);
    // 011df7  out dx, al
    X86_AT(c, 0x11df7u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df8  push ds
    X86_AT(c, 0x11df8u);
    push32(c, c.sreg[3]);
    // 011df9  pop ds
    X86_AT(c, 0x11df9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfa  push ds
    X86_AT(c, 0x11dfau);
    push32(c, c.sreg[3]);
    // 011dfb  pop ds
    X86_AT(c, 0x11dfbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfc  inc edx
    X86_AT(c, 0x11dfcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011dfd  mov al, 0x5a
    X86_AT(c, 0x11dfdu);
    s8(c, 0, 0x5Au);
    // 011dff  out dx, al
    X86_AT(c, 0x11dffu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
L_11e00:
    X86_TICK(c, 131);
    // 011e00  push ds
    X86_AT(c, 0x11e00u);
    push32(c, c.sreg[3]);
    // 011e01  pop ds
    X86_AT(c, 0x11e01u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e02  push ds
    X86_AT(c, 0x11e02u);
    push32(c, c.sreg[3]);
    // 011e03  pop ds
    X86_AT(c, 0x11e03u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e04  inc edx
    X86_AT(c, 0x11e04u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e05  mov al, 7
    X86_AT(c, 0x11e05u);
    s8(c, 0, 0x7u);
    // 011e07  out dx, al
    X86_AT(c, 0x11e07u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e08  push ds
    X86_AT(c, 0x11e08u);
    push32(c, c.sreg[3]);
    // 011e09  pop ds
    X86_AT(c, 0x11e09u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0a  push ds
    X86_AT(c, 0x11e0au);
    push32(c, c.sreg[3]);
    // 011e0b  pop ds
    X86_AT(c, 0x11e0bu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0c  inc edx
    X86_AT(c, 0x11e0cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e0d  xor al, al
    X86_AT(c, 0x11e0du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e0f  out dx, al
    X86_AT(c, 0x11e0fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e10  push ds
    X86_AT(c, 0x11e10u);
    push32(c, c.sreg[3]);
    // 011e11  pop ds
    X86_AT(c, 0x11e11u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e12  push ds
    X86_AT(c, 0x11e12u);
    push32(c, c.sreg[3]);
    // 011e13  pop ds
    X86_AT(c, 0x11e13u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e14  inc edx
    X86_AT(c, 0x11e14u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e15  out dx, al
    X86_AT(c, 0x11e15u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e16  push ds
    X86_AT(c, 0x11e16u);
    push32(c, c.sreg[3]);
    // 011e17  pop ds
    X86_AT(c, 0x11e17u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e18  push ds
    X86_AT(c, 0x11e18u);
    push32(c, c.sreg[3]);
    // 011e19  pop ds
    X86_AT(c, 0x11e19u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e1a  inc edx
    X86_AT(c, 0x11e1au);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e1b  xor al, al
    X86_AT(c, 0x11e1bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e1d  out dx, al
    X86_AT(c, 0x11e1du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e1e  push ds
    X86_AT(c, 0x11e1eu);
    push32(c, c.sreg[3]);
    // 011e1f  pop ds
    X86_AT(c, 0x11e1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e20  push ds
    X86_AT(c, 0x11e20u);
    push32(c, c.sreg[3]);
    // 011e21  pop ds
    X86_AT(c, 0x11e21u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e22  inc ah
    X86_AT(c, 0x11e22u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e24  cmp ah, 0x48
    X86_AT(c, 0x11e24u);
    (void)x86_sub(c, g8(c, 4), 0x48u, 0, 1);
    // 011e27  jne 0x11ddb
    X86_AT(c, 0x11e27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11ddbu); goto L_11ddb; }
    X86_TICK(c, 2);
    // 011e29  xor ah, ah
    X86_AT(c, 0x11e29u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
L_11e2b:
    X86_TICK(c, 52);
    // 011e2b  mov dl, 0xf7
    X86_AT(c, 0x11e2bu);
    s8(c, 2, 0xF7u);
    // 011e2d  mov al, ah
    X86_AT(c, 0x11e2du);
    s8(c, 0, g8(c, 4));
    // 011e2f  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11e2fu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011e36  out dx, al
    X86_AT(c, 0x11e36u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e37  push ds
    X86_AT(c, 0x11e37u);
    push32(c, c.sreg[3]);
    // 011e38  pop ds
    X86_AT(c, 0x11e38u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e39  push ds
    X86_AT(c, 0x11e39u);
    push32(c, c.sreg[3]);
    // 011e3a  pop ds
    X86_AT(c, 0x11e3au);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e3b  mov al, 0xff
    X86_AT(c, 0x11e3bu);
    s8(c, 0, 0xFFu);
    // 011e3d  xor edi, edi
    X86_AT(c, 0x11e3du);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v ^ c.r[7], 4); }
    // 011e3f  mov ch, 0x10
    X86_AT(c, 0x11e3fu);
    s8(c, 5, 0x10u);
    // 011e41  stosb byte ptr es:[edi], al
    X86_AT(c, 0x11e41u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 011e43  inc ah
    X86_AT(c, 0x11e43u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e45  cmp ah, 0x10
    X86_AT(c, 0x11e45u);
    (void)x86_sub(c, g8(c, 4), 0x10u, 0, 1);
    // 011e48  jne 0x11e2b
    X86_AT(c, 0x11e48u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11e2bu); goto L_11e2b; }
    X86_TICK(c, 40);
    // 011e4a  pop es
    X86_AT(c, 0x11e4au);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011e4b  popal 
    X86_AT(c, 0x11e4bu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011e4c  xor al, al
    X86_AT(c, 0x11e4cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e4e  ret 
    X86_AT(c, 0x11e4eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11e00u, "ran off the end of a function");
}
void f_00011e01(X86Cpu& c) {
    goto L_11e01;
L_11ddb:
    X86_TICK(c, 104);
    // 011ddb  mov dl, 0xf7
    X86_AT(c, 0x11ddbu);
    s8(c, 2, 0xF7u);
    // 011ddd  mov al, ah
    X86_AT(c, 0x11dddu);
    s8(c, 0, g8(c, 4));
    // 011ddf  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11ddfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011de6  out dx, al
    X86_AT(c, 0x11de6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011de7  push ds
    X86_AT(c, 0x11de7u);
    push32(c, c.sreg[3]);
    // 011de8  pop ds
    X86_AT(c, 0x11de8u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011de9  push ds
    X86_AT(c, 0x11de9u);
    push32(c, c.sreg[3]);
    // 011dea  pop ds
    X86_AT(c, 0x11deau);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011deb  mov dl, 0xf0
    X86_AT(c, 0x11debu);
    s8(c, 2, 0xF0u);
    // 011ded  xor al, al
    X86_AT(c, 0x11dedu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011def  out dx, al
    X86_AT(c, 0x11defu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df0  push ds
    X86_AT(c, 0x11df0u);
    push32(c, c.sreg[3]);
    // 011df1  pop ds
    X86_AT(c, 0x11df1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df2  push ds
    X86_AT(c, 0x11df2u);
    push32(c, c.sreg[3]);
    // 011df3  pop ds
    X86_AT(c, 0x11df3u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df4  inc edx
    X86_AT(c, 0x11df4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011df5  mov al, 0x77
    X86_AT(c, 0x11df5u);
    s8(c, 0, 0x77u);
    // 011df7  out dx, al
    X86_AT(c, 0x11df7u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df8  push ds
    X86_AT(c, 0x11df8u);
    push32(c, c.sreg[3]);
    // 011df9  pop ds
    X86_AT(c, 0x11df9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfa  push ds
    X86_AT(c, 0x11dfau);
    push32(c, c.sreg[3]);
    // 011dfb  pop ds
    X86_AT(c, 0x11dfbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfc  inc edx
    X86_AT(c, 0x11dfcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011dfd  mov al, 0x5a
    X86_AT(c, 0x11dfdu);
    s8(c, 0, 0x5Au);
    // 011dff  out dx, al
    X86_AT(c, 0x11dffu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e00  push ds
    X86_AT(c, 0x11e00u);
    push32(c, c.sreg[3]);
L_11e01:
    X86_TICK(c, 129);
    // 011e01  pop ds
    X86_AT(c, 0x11e01u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e02  push ds
    X86_AT(c, 0x11e02u);
    push32(c, c.sreg[3]);
    // 011e03  pop ds
    X86_AT(c, 0x11e03u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e04  inc edx
    X86_AT(c, 0x11e04u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e05  mov al, 7
    X86_AT(c, 0x11e05u);
    s8(c, 0, 0x7u);
    // 011e07  out dx, al
    X86_AT(c, 0x11e07u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e08  push ds
    X86_AT(c, 0x11e08u);
    push32(c, c.sreg[3]);
    // 011e09  pop ds
    X86_AT(c, 0x11e09u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0a  push ds
    X86_AT(c, 0x11e0au);
    push32(c, c.sreg[3]);
    // 011e0b  pop ds
    X86_AT(c, 0x11e0bu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0c  inc edx
    X86_AT(c, 0x11e0cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e0d  xor al, al
    X86_AT(c, 0x11e0du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e0f  out dx, al
    X86_AT(c, 0x11e0fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e10  push ds
    X86_AT(c, 0x11e10u);
    push32(c, c.sreg[3]);
    // 011e11  pop ds
    X86_AT(c, 0x11e11u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e12  push ds
    X86_AT(c, 0x11e12u);
    push32(c, c.sreg[3]);
    // 011e13  pop ds
    X86_AT(c, 0x11e13u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e14  inc edx
    X86_AT(c, 0x11e14u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e15  out dx, al
    X86_AT(c, 0x11e15u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e16  push ds
    X86_AT(c, 0x11e16u);
    push32(c, c.sreg[3]);
    // 011e17  pop ds
    X86_AT(c, 0x11e17u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e18  push ds
    X86_AT(c, 0x11e18u);
    push32(c, c.sreg[3]);
    // 011e19  pop ds
    X86_AT(c, 0x11e19u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e1a  inc edx
    X86_AT(c, 0x11e1au);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e1b  xor al, al
    X86_AT(c, 0x11e1bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e1d  out dx, al
    X86_AT(c, 0x11e1du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e1e  push ds
    X86_AT(c, 0x11e1eu);
    push32(c, c.sreg[3]);
    // 011e1f  pop ds
    X86_AT(c, 0x11e1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e20  push ds
    X86_AT(c, 0x11e20u);
    push32(c, c.sreg[3]);
    // 011e21  pop ds
    X86_AT(c, 0x11e21u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e22  inc ah
    X86_AT(c, 0x11e22u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e24  cmp ah, 0x48
    X86_AT(c, 0x11e24u);
    (void)x86_sub(c, g8(c, 4), 0x48u, 0, 1);
    // 011e27  jne 0x11ddb
    X86_AT(c, 0x11e27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11ddbu); goto L_11ddb; }
    X86_TICK(c, 2);
    // 011e29  xor ah, ah
    X86_AT(c, 0x11e29u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
L_11e2b:
    X86_TICK(c, 52);
    // 011e2b  mov dl, 0xf7
    X86_AT(c, 0x11e2bu);
    s8(c, 2, 0xF7u);
    // 011e2d  mov al, ah
    X86_AT(c, 0x11e2du);
    s8(c, 0, g8(c, 4));
    // 011e2f  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11e2fu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011e36  out dx, al
    X86_AT(c, 0x11e36u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e37  push ds
    X86_AT(c, 0x11e37u);
    push32(c, c.sreg[3]);
    // 011e38  pop ds
    X86_AT(c, 0x11e38u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e39  push ds
    X86_AT(c, 0x11e39u);
    push32(c, c.sreg[3]);
    // 011e3a  pop ds
    X86_AT(c, 0x11e3au);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e3b  mov al, 0xff
    X86_AT(c, 0x11e3bu);
    s8(c, 0, 0xFFu);
    // 011e3d  xor edi, edi
    X86_AT(c, 0x11e3du);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v ^ c.r[7], 4); }
    // 011e3f  mov ch, 0x10
    X86_AT(c, 0x11e3fu);
    s8(c, 5, 0x10u);
    // 011e41  stosb byte ptr es:[edi], al
    X86_AT(c, 0x11e41u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 011e43  inc ah
    X86_AT(c, 0x11e43u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e45  cmp ah, 0x10
    X86_AT(c, 0x11e45u);
    (void)x86_sub(c, g8(c, 4), 0x10u, 0, 1);
    // 011e48  jne 0x11e2b
    X86_AT(c, 0x11e48u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11e2bu); goto L_11e2b; }
    X86_TICK(c, 40);
    // 011e4a  pop es
    X86_AT(c, 0x11e4au);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011e4b  popal 
    X86_AT(c, 0x11e4bu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011e4c  xor al, al
    X86_AT(c, 0x11e4cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e4e  ret 
    X86_AT(c, 0x11e4eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11e01u, "ran off the end of a function");
}
void f_00011e02(X86Cpu& c) {
    goto L_11e02;
L_11ddb:
    X86_TICK(c, 108);
    // 011ddb  mov dl, 0xf7
    X86_AT(c, 0x11ddbu);
    s8(c, 2, 0xF7u);
    // 011ddd  mov al, ah
    X86_AT(c, 0x11dddu);
    s8(c, 0, g8(c, 4));
    // 011ddf  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11ddfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011de6  out dx, al
    X86_AT(c, 0x11de6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011de7  push ds
    X86_AT(c, 0x11de7u);
    push32(c, c.sreg[3]);
    // 011de8  pop ds
    X86_AT(c, 0x11de8u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011de9  push ds
    X86_AT(c, 0x11de9u);
    push32(c, c.sreg[3]);
    // 011dea  pop ds
    X86_AT(c, 0x11deau);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011deb  mov dl, 0xf0
    X86_AT(c, 0x11debu);
    s8(c, 2, 0xF0u);
    // 011ded  xor al, al
    X86_AT(c, 0x11dedu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011def  out dx, al
    X86_AT(c, 0x11defu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df0  push ds
    X86_AT(c, 0x11df0u);
    push32(c, c.sreg[3]);
    // 011df1  pop ds
    X86_AT(c, 0x11df1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df2  push ds
    X86_AT(c, 0x11df2u);
    push32(c, c.sreg[3]);
    // 011df3  pop ds
    X86_AT(c, 0x11df3u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df4  inc edx
    X86_AT(c, 0x11df4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011df5  mov al, 0x77
    X86_AT(c, 0x11df5u);
    s8(c, 0, 0x77u);
    // 011df7  out dx, al
    X86_AT(c, 0x11df7u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df8  push ds
    X86_AT(c, 0x11df8u);
    push32(c, c.sreg[3]);
    // 011df9  pop ds
    X86_AT(c, 0x11df9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfa  push ds
    X86_AT(c, 0x11dfau);
    push32(c, c.sreg[3]);
    // 011dfb  pop ds
    X86_AT(c, 0x11dfbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfc  inc edx
    X86_AT(c, 0x11dfcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011dfd  mov al, 0x5a
    X86_AT(c, 0x11dfdu);
    s8(c, 0, 0x5Au);
    // 011dff  out dx, al
    X86_AT(c, 0x11dffu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e00  push ds
    X86_AT(c, 0x11e00u);
    push32(c, c.sreg[3]);
    // 011e01  pop ds
    X86_AT(c, 0x11e01u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_11e02:
    X86_TICK(c, 125);
    // 011e02  push ds
    X86_AT(c, 0x11e02u);
    push32(c, c.sreg[3]);
    // 011e03  pop ds
    X86_AT(c, 0x11e03u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e04  inc edx
    X86_AT(c, 0x11e04u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e05  mov al, 7
    X86_AT(c, 0x11e05u);
    s8(c, 0, 0x7u);
    // 011e07  out dx, al
    X86_AT(c, 0x11e07u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e08  push ds
    X86_AT(c, 0x11e08u);
    push32(c, c.sreg[3]);
    // 011e09  pop ds
    X86_AT(c, 0x11e09u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0a  push ds
    X86_AT(c, 0x11e0au);
    push32(c, c.sreg[3]);
    // 011e0b  pop ds
    X86_AT(c, 0x11e0bu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0c  inc edx
    X86_AT(c, 0x11e0cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e0d  xor al, al
    X86_AT(c, 0x11e0du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e0f  out dx, al
    X86_AT(c, 0x11e0fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e10  push ds
    X86_AT(c, 0x11e10u);
    push32(c, c.sreg[3]);
    // 011e11  pop ds
    X86_AT(c, 0x11e11u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e12  push ds
    X86_AT(c, 0x11e12u);
    push32(c, c.sreg[3]);
    // 011e13  pop ds
    X86_AT(c, 0x11e13u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e14  inc edx
    X86_AT(c, 0x11e14u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e15  out dx, al
    X86_AT(c, 0x11e15u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e16  push ds
    X86_AT(c, 0x11e16u);
    push32(c, c.sreg[3]);
    // 011e17  pop ds
    X86_AT(c, 0x11e17u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e18  push ds
    X86_AT(c, 0x11e18u);
    push32(c, c.sreg[3]);
    // 011e19  pop ds
    X86_AT(c, 0x11e19u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e1a  inc edx
    X86_AT(c, 0x11e1au);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e1b  xor al, al
    X86_AT(c, 0x11e1bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e1d  out dx, al
    X86_AT(c, 0x11e1du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e1e  push ds
    X86_AT(c, 0x11e1eu);
    push32(c, c.sreg[3]);
    // 011e1f  pop ds
    X86_AT(c, 0x11e1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e20  push ds
    X86_AT(c, 0x11e20u);
    push32(c, c.sreg[3]);
    // 011e21  pop ds
    X86_AT(c, 0x11e21u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e22  inc ah
    X86_AT(c, 0x11e22u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e24  cmp ah, 0x48
    X86_AT(c, 0x11e24u);
    (void)x86_sub(c, g8(c, 4), 0x48u, 0, 1);
    // 011e27  jne 0x11ddb
    X86_AT(c, 0x11e27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11ddbu); goto L_11ddb; }
    X86_TICK(c, 2);
    // 011e29  xor ah, ah
    X86_AT(c, 0x11e29u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
L_11e2b:
    X86_TICK(c, 52);
    // 011e2b  mov dl, 0xf7
    X86_AT(c, 0x11e2bu);
    s8(c, 2, 0xF7u);
    // 011e2d  mov al, ah
    X86_AT(c, 0x11e2du);
    s8(c, 0, g8(c, 4));
    // 011e2f  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11e2fu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011e36  out dx, al
    X86_AT(c, 0x11e36u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e37  push ds
    X86_AT(c, 0x11e37u);
    push32(c, c.sreg[3]);
    // 011e38  pop ds
    X86_AT(c, 0x11e38u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e39  push ds
    X86_AT(c, 0x11e39u);
    push32(c, c.sreg[3]);
    // 011e3a  pop ds
    X86_AT(c, 0x11e3au);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e3b  mov al, 0xff
    X86_AT(c, 0x11e3bu);
    s8(c, 0, 0xFFu);
    // 011e3d  xor edi, edi
    X86_AT(c, 0x11e3du);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v ^ c.r[7], 4); }
    // 011e3f  mov ch, 0x10
    X86_AT(c, 0x11e3fu);
    s8(c, 5, 0x10u);
    // 011e41  stosb byte ptr es:[edi], al
    X86_AT(c, 0x11e41u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 011e43  inc ah
    X86_AT(c, 0x11e43u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e45  cmp ah, 0x10
    X86_AT(c, 0x11e45u);
    (void)x86_sub(c, g8(c, 4), 0x10u, 0, 1);
    // 011e48  jne 0x11e2b
    X86_AT(c, 0x11e48u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11e2bu); goto L_11e2b; }
    X86_TICK(c, 40);
    // 011e4a  pop es
    X86_AT(c, 0x11e4au);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011e4b  popal 
    X86_AT(c, 0x11e4bu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011e4c  xor al, al
    X86_AT(c, 0x11e4cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e4e  ret 
    X86_AT(c, 0x11e4eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11e02u, "ran off the end of a function");
}
void f_00011e03(X86Cpu& c) {
    goto L_11e03;
L_11ddb:
    X86_TICK(c, 110);
    // 011ddb  mov dl, 0xf7
    X86_AT(c, 0x11ddbu);
    s8(c, 2, 0xF7u);
    // 011ddd  mov al, ah
    X86_AT(c, 0x11dddu);
    s8(c, 0, g8(c, 4));
    // 011ddf  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11ddfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011de6  out dx, al
    X86_AT(c, 0x11de6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011de7  push ds
    X86_AT(c, 0x11de7u);
    push32(c, c.sreg[3]);
    // 011de8  pop ds
    X86_AT(c, 0x11de8u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011de9  push ds
    X86_AT(c, 0x11de9u);
    push32(c, c.sreg[3]);
    // 011dea  pop ds
    X86_AT(c, 0x11deau);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011deb  mov dl, 0xf0
    X86_AT(c, 0x11debu);
    s8(c, 2, 0xF0u);
    // 011ded  xor al, al
    X86_AT(c, 0x11dedu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011def  out dx, al
    X86_AT(c, 0x11defu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df0  push ds
    X86_AT(c, 0x11df0u);
    push32(c, c.sreg[3]);
    // 011df1  pop ds
    X86_AT(c, 0x11df1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df2  push ds
    X86_AT(c, 0x11df2u);
    push32(c, c.sreg[3]);
    // 011df3  pop ds
    X86_AT(c, 0x11df3u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df4  inc edx
    X86_AT(c, 0x11df4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011df5  mov al, 0x77
    X86_AT(c, 0x11df5u);
    s8(c, 0, 0x77u);
    // 011df7  out dx, al
    X86_AT(c, 0x11df7u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df8  push ds
    X86_AT(c, 0x11df8u);
    push32(c, c.sreg[3]);
    // 011df9  pop ds
    X86_AT(c, 0x11df9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfa  push ds
    X86_AT(c, 0x11dfau);
    push32(c, c.sreg[3]);
    // 011dfb  pop ds
    X86_AT(c, 0x11dfbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfc  inc edx
    X86_AT(c, 0x11dfcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011dfd  mov al, 0x5a
    X86_AT(c, 0x11dfdu);
    s8(c, 0, 0x5Au);
    // 011dff  out dx, al
    X86_AT(c, 0x11dffu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e00  push ds
    X86_AT(c, 0x11e00u);
    push32(c, c.sreg[3]);
    // 011e01  pop ds
    X86_AT(c, 0x11e01u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e02  push ds
    X86_AT(c, 0x11e02u);
    push32(c, c.sreg[3]);
L_11e03:
    X86_TICK(c, 123);
    // 011e03  pop ds
    X86_AT(c, 0x11e03u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e04  inc edx
    X86_AT(c, 0x11e04u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e05  mov al, 7
    X86_AT(c, 0x11e05u);
    s8(c, 0, 0x7u);
    // 011e07  out dx, al
    X86_AT(c, 0x11e07u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e08  push ds
    X86_AT(c, 0x11e08u);
    push32(c, c.sreg[3]);
    // 011e09  pop ds
    X86_AT(c, 0x11e09u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0a  push ds
    X86_AT(c, 0x11e0au);
    push32(c, c.sreg[3]);
    // 011e0b  pop ds
    X86_AT(c, 0x11e0bu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0c  inc edx
    X86_AT(c, 0x11e0cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e0d  xor al, al
    X86_AT(c, 0x11e0du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e0f  out dx, al
    X86_AT(c, 0x11e0fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e10  push ds
    X86_AT(c, 0x11e10u);
    push32(c, c.sreg[3]);
    // 011e11  pop ds
    X86_AT(c, 0x11e11u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e12  push ds
    X86_AT(c, 0x11e12u);
    push32(c, c.sreg[3]);
    // 011e13  pop ds
    X86_AT(c, 0x11e13u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e14  inc edx
    X86_AT(c, 0x11e14u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e15  out dx, al
    X86_AT(c, 0x11e15u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e16  push ds
    X86_AT(c, 0x11e16u);
    push32(c, c.sreg[3]);
    // 011e17  pop ds
    X86_AT(c, 0x11e17u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e18  push ds
    X86_AT(c, 0x11e18u);
    push32(c, c.sreg[3]);
    // 011e19  pop ds
    X86_AT(c, 0x11e19u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e1a  inc edx
    X86_AT(c, 0x11e1au);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e1b  xor al, al
    X86_AT(c, 0x11e1bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e1d  out dx, al
    X86_AT(c, 0x11e1du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e1e  push ds
    X86_AT(c, 0x11e1eu);
    push32(c, c.sreg[3]);
    // 011e1f  pop ds
    X86_AT(c, 0x11e1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e20  push ds
    X86_AT(c, 0x11e20u);
    push32(c, c.sreg[3]);
    // 011e21  pop ds
    X86_AT(c, 0x11e21u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e22  inc ah
    X86_AT(c, 0x11e22u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e24  cmp ah, 0x48
    X86_AT(c, 0x11e24u);
    (void)x86_sub(c, g8(c, 4), 0x48u, 0, 1);
    // 011e27  jne 0x11ddb
    X86_AT(c, 0x11e27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11ddbu); goto L_11ddb; }
    X86_TICK(c, 2);
    // 011e29  xor ah, ah
    X86_AT(c, 0x11e29u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
L_11e2b:
    X86_TICK(c, 52);
    // 011e2b  mov dl, 0xf7
    X86_AT(c, 0x11e2bu);
    s8(c, 2, 0xF7u);
    // 011e2d  mov al, ah
    X86_AT(c, 0x11e2du);
    s8(c, 0, g8(c, 4));
    // 011e2f  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11e2fu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011e36  out dx, al
    X86_AT(c, 0x11e36u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e37  push ds
    X86_AT(c, 0x11e37u);
    push32(c, c.sreg[3]);
    // 011e38  pop ds
    X86_AT(c, 0x11e38u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e39  push ds
    X86_AT(c, 0x11e39u);
    push32(c, c.sreg[3]);
    // 011e3a  pop ds
    X86_AT(c, 0x11e3au);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e3b  mov al, 0xff
    X86_AT(c, 0x11e3bu);
    s8(c, 0, 0xFFu);
    // 011e3d  xor edi, edi
    X86_AT(c, 0x11e3du);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v ^ c.r[7], 4); }
    // 011e3f  mov ch, 0x10
    X86_AT(c, 0x11e3fu);
    s8(c, 5, 0x10u);
    // 011e41  stosb byte ptr es:[edi], al
    X86_AT(c, 0x11e41u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 011e43  inc ah
    X86_AT(c, 0x11e43u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e45  cmp ah, 0x10
    X86_AT(c, 0x11e45u);
    (void)x86_sub(c, g8(c, 4), 0x10u, 0, 1);
    // 011e48  jne 0x11e2b
    X86_AT(c, 0x11e48u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11e2bu); goto L_11e2b; }
    X86_TICK(c, 40);
    // 011e4a  pop es
    X86_AT(c, 0x11e4au);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011e4b  popal 
    X86_AT(c, 0x11e4bu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011e4c  xor al, al
    X86_AT(c, 0x11e4cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e4e  ret 
    X86_AT(c, 0x11e4eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11e03u, "ran off the end of a function");
}
void f_00011e04(X86Cpu& c) {
    goto L_11e04;
L_11ddb:
    X86_TICK(c, 114);
    // 011ddb  mov dl, 0xf7
    X86_AT(c, 0x11ddbu);
    s8(c, 2, 0xF7u);
    // 011ddd  mov al, ah
    X86_AT(c, 0x11dddu);
    s8(c, 0, g8(c, 4));
    // 011ddf  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11ddfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011de6  out dx, al
    X86_AT(c, 0x11de6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011de7  push ds
    X86_AT(c, 0x11de7u);
    push32(c, c.sreg[3]);
    // 011de8  pop ds
    X86_AT(c, 0x11de8u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011de9  push ds
    X86_AT(c, 0x11de9u);
    push32(c, c.sreg[3]);
    // 011dea  pop ds
    X86_AT(c, 0x11deau);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011deb  mov dl, 0xf0
    X86_AT(c, 0x11debu);
    s8(c, 2, 0xF0u);
    // 011ded  xor al, al
    X86_AT(c, 0x11dedu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011def  out dx, al
    X86_AT(c, 0x11defu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df0  push ds
    X86_AT(c, 0x11df0u);
    push32(c, c.sreg[3]);
    // 011df1  pop ds
    X86_AT(c, 0x11df1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df2  push ds
    X86_AT(c, 0x11df2u);
    push32(c, c.sreg[3]);
    // 011df3  pop ds
    X86_AT(c, 0x11df3u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df4  inc edx
    X86_AT(c, 0x11df4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011df5  mov al, 0x77
    X86_AT(c, 0x11df5u);
    s8(c, 0, 0x77u);
    // 011df7  out dx, al
    X86_AT(c, 0x11df7u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df8  push ds
    X86_AT(c, 0x11df8u);
    push32(c, c.sreg[3]);
    // 011df9  pop ds
    X86_AT(c, 0x11df9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfa  push ds
    X86_AT(c, 0x11dfau);
    push32(c, c.sreg[3]);
    // 011dfb  pop ds
    X86_AT(c, 0x11dfbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfc  inc edx
    X86_AT(c, 0x11dfcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011dfd  mov al, 0x5a
    X86_AT(c, 0x11dfdu);
    s8(c, 0, 0x5Au);
    // 011dff  out dx, al
    X86_AT(c, 0x11dffu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e00  push ds
    X86_AT(c, 0x11e00u);
    push32(c, c.sreg[3]);
    // 011e01  pop ds
    X86_AT(c, 0x11e01u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e02  push ds
    X86_AT(c, 0x11e02u);
    push32(c, c.sreg[3]);
    // 011e03  pop ds
    X86_AT(c, 0x11e03u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_11e04:
    X86_TICK(c, 119);
    // 011e04  inc edx
    X86_AT(c, 0x11e04u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e05  mov al, 7
    X86_AT(c, 0x11e05u);
    s8(c, 0, 0x7u);
    // 011e07  out dx, al
    X86_AT(c, 0x11e07u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e08  push ds
    X86_AT(c, 0x11e08u);
    push32(c, c.sreg[3]);
    // 011e09  pop ds
    X86_AT(c, 0x11e09u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0a  push ds
    X86_AT(c, 0x11e0au);
    push32(c, c.sreg[3]);
    // 011e0b  pop ds
    X86_AT(c, 0x11e0bu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0c  inc edx
    X86_AT(c, 0x11e0cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e0d  xor al, al
    X86_AT(c, 0x11e0du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e0f  out dx, al
    X86_AT(c, 0x11e0fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e10  push ds
    X86_AT(c, 0x11e10u);
    push32(c, c.sreg[3]);
    // 011e11  pop ds
    X86_AT(c, 0x11e11u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e12  push ds
    X86_AT(c, 0x11e12u);
    push32(c, c.sreg[3]);
    // 011e13  pop ds
    X86_AT(c, 0x11e13u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e14  inc edx
    X86_AT(c, 0x11e14u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e15  out dx, al
    X86_AT(c, 0x11e15u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e16  push ds
    X86_AT(c, 0x11e16u);
    push32(c, c.sreg[3]);
    // 011e17  pop ds
    X86_AT(c, 0x11e17u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e18  push ds
    X86_AT(c, 0x11e18u);
    push32(c, c.sreg[3]);
    // 011e19  pop ds
    X86_AT(c, 0x11e19u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e1a  inc edx
    X86_AT(c, 0x11e1au);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e1b  xor al, al
    X86_AT(c, 0x11e1bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e1d  out dx, al
    X86_AT(c, 0x11e1du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e1e  push ds
    X86_AT(c, 0x11e1eu);
    push32(c, c.sreg[3]);
    // 011e1f  pop ds
    X86_AT(c, 0x11e1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e20  push ds
    X86_AT(c, 0x11e20u);
    push32(c, c.sreg[3]);
    // 011e21  pop ds
    X86_AT(c, 0x11e21u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e22  inc ah
    X86_AT(c, 0x11e22u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e24  cmp ah, 0x48
    X86_AT(c, 0x11e24u);
    (void)x86_sub(c, g8(c, 4), 0x48u, 0, 1);
    // 011e27  jne 0x11ddb
    X86_AT(c, 0x11e27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11ddbu); goto L_11ddb; }
    X86_TICK(c, 2);
    // 011e29  xor ah, ah
    X86_AT(c, 0x11e29u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
L_11e2b:
    X86_TICK(c, 52);
    // 011e2b  mov dl, 0xf7
    X86_AT(c, 0x11e2bu);
    s8(c, 2, 0xF7u);
    // 011e2d  mov al, ah
    X86_AT(c, 0x11e2du);
    s8(c, 0, g8(c, 4));
    // 011e2f  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11e2fu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011e36  out dx, al
    X86_AT(c, 0x11e36u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e37  push ds
    X86_AT(c, 0x11e37u);
    push32(c, c.sreg[3]);
    // 011e38  pop ds
    X86_AT(c, 0x11e38u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e39  push ds
    X86_AT(c, 0x11e39u);
    push32(c, c.sreg[3]);
    // 011e3a  pop ds
    X86_AT(c, 0x11e3au);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e3b  mov al, 0xff
    X86_AT(c, 0x11e3bu);
    s8(c, 0, 0xFFu);
    // 011e3d  xor edi, edi
    X86_AT(c, 0x11e3du);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v ^ c.r[7], 4); }
    // 011e3f  mov ch, 0x10
    X86_AT(c, 0x11e3fu);
    s8(c, 5, 0x10u);
    // 011e41  stosb byte ptr es:[edi], al
    X86_AT(c, 0x11e41u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 011e43  inc ah
    X86_AT(c, 0x11e43u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e45  cmp ah, 0x10
    X86_AT(c, 0x11e45u);
    (void)x86_sub(c, g8(c, 4), 0x10u, 0, 1);
    // 011e48  jne 0x11e2b
    X86_AT(c, 0x11e48u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11e2bu); goto L_11e2b; }
    X86_TICK(c, 40);
    // 011e4a  pop es
    X86_AT(c, 0x11e4au);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011e4b  popal 
    X86_AT(c, 0x11e4bu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011e4c  xor al, al
    X86_AT(c, 0x11e4cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e4e  ret 
    X86_AT(c, 0x11e4eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11e04u, "ran off the end of a function");
}
void f_00011e05(X86Cpu& c) {
    goto L_11e05;
L_11ddb:
    X86_TICK(c, 116);
    // 011ddb  mov dl, 0xf7
    X86_AT(c, 0x11ddbu);
    s8(c, 2, 0xF7u);
    // 011ddd  mov al, ah
    X86_AT(c, 0x11dddu);
    s8(c, 0, g8(c, 4));
    // 011ddf  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11ddfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011de6  out dx, al
    X86_AT(c, 0x11de6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011de7  push ds
    X86_AT(c, 0x11de7u);
    push32(c, c.sreg[3]);
    // 011de8  pop ds
    X86_AT(c, 0x11de8u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011de9  push ds
    X86_AT(c, 0x11de9u);
    push32(c, c.sreg[3]);
    // 011dea  pop ds
    X86_AT(c, 0x11deau);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011deb  mov dl, 0xf0
    X86_AT(c, 0x11debu);
    s8(c, 2, 0xF0u);
    // 011ded  xor al, al
    X86_AT(c, 0x11dedu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011def  out dx, al
    X86_AT(c, 0x11defu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df0  push ds
    X86_AT(c, 0x11df0u);
    push32(c, c.sreg[3]);
    // 011df1  pop ds
    X86_AT(c, 0x11df1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df2  push ds
    X86_AT(c, 0x11df2u);
    push32(c, c.sreg[3]);
    // 011df3  pop ds
    X86_AT(c, 0x11df3u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df4  inc edx
    X86_AT(c, 0x11df4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011df5  mov al, 0x77
    X86_AT(c, 0x11df5u);
    s8(c, 0, 0x77u);
    // 011df7  out dx, al
    X86_AT(c, 0x11df7u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df8  push ds
    X86_AT(c, 0x11df8u);
    push32(c, c.sreg[3]);
    // 011df9  pop ds
    X86_AT(c, 0x11df9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfa  push ds
    X86_AT(c, 0x11dfau);
    push32(c, c.sreg[3]);
    // 011dfb  pop ds
    X86_AT(c, 0x11dfbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfc  inc edx
    X86_AT(c, 0x11dfcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011dfd  mov al, 0x5a
    X86_AT(c, 0x11dfdu);
    s8(c, 0, 0x5Au);
    // 011dff  out dx, al
    X86_AT(c, 0x11dffu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e00  push ds
    X86_AT(c, 0x11e00u);
    push32(c, c.sreg[3]);
    // 011e01  pop ds
    X86_AT(c, 0x11e01u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e02  push ds
    X86_AT(c, 0x11e02u);
    push32(c, c.sreg[3]);
    // 011e03  pop ds
    X86_AT(c, 0x11e03u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e04  inc edx
    X86_AT(c, 0x11e04u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
L_11e05:
    X86_TICK(c, 117);
    // 011e05  mov al, 7
    X86_AT(c, 0x11e05u);
    s8(c, 0, 0x7u);
    // 011e07  out dx, al
    X86_AT(c, 0x11e07u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e08  push ds
    X86_AT(c, 0x11e08u);
    push32(c, c.sreg[3]);
    // 011e09  pop ds
    X86_AT(c, 0x11e09u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0a  push ds
    X86_AT(c, 0x11e0au);
    push32(c, c.sreg[3]);
    // 011e0b  pop ds
    X86_AT(c, 0x11e0bu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0c  inc edx
    X86_AT(c, 0x11e0cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e0d  xor al, al
    X86_AT(c, 0x11e0du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e0f  out dx, al
    X86_AT(c, 0x11e0fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e10  push ds
    X86_AT(c, 0x11e10u);
    push32(c, c.sreg[3]);
    // 011e11  pop ds
    X86_AT(c, 0x11e11u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e12  push ds
    X86_AT(c, 0x11e12u);
    push32(c, c.sreg[3]);
    // 011e13  pop ds
    X86_AT(c, 0x11e13u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e14  inc edx
    X86_AT(c, 0x11e14u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e15  out dx, al
    X86_AT(c, 0x11e15u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e16  push ds
    X86_AT(c, 0x11e16u);
    push32(c, c.sreg[3]);
    // 011e17  pop ds
    X86_AT(c, 0x11e17u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e18  push ds
    X86_AT(c, 0x11e18u);
    push32(c, c.sreg[3]);
    // 011e19  pop ds
    X86_AT(c, 0x11e19u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e1a  inc edx
    X86_AT(c, 0x11e1au);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e1b  xor al, al
    X86_AT(c, 0x11e1bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e1d  out dx, al
    X86_AT(c, 0x11e1du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e1e  push ds
    X86_AT(c, 0x11e1eu);
    push32(c, c.sreg[3]);
    // 011e1f  pop ds
    X86_AT(c, 0x11e1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e20  push ds
    X86_AT(c, 0x11e20u);
    push32(c, c.sreg[3]);
    // 011e21  pop ds
    X86_AT(c, 0x11e21u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e22  inc ah
    X86_AT(c, 0x11e22u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e24  cmp ah, 0x48
    X86_AT(c, 0x11e24u);
    (void)x86_sub(c, g8(c, 4), 0x48u, 0, 1);
    // 011e27  jne 0x11ddb
    X86_AT(c, 0x11e27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11ddbu); goto L_11ddb; }
    X86_TICK(c, 2);
    // 011e29  xor ah, ah
    X86_AT(c, 0x11e29u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
L_11e2b:
    X86_TICK(c, 52);
    // 011e2b  mov dl, 0xf7
    X86_AT(c, 0x11e2bu);
    s8(c, 2, 0xF7u);
    // 011e2d  mov al, ah
    X86_AT(c, 0x11e2du);
    s8(c, 0, g8(c, 4));
    // 011e2f  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11e2fu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011e36  out dx, al
    X86_AT(c, 0x11e36u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e37  push ds
    X86_AT(c, 0x11e37u);
    push32(c, c.sreg[3]);
    // 011e38  pop ds
    X86_AT(c, 0x11e38u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e39  push ds
    X86_AT(c, 0x11e39u);
    push32(c, c.sreg[3]);
    // 011e3a  pop ds
    X86_AT(c, 0x11e3au);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e3b  mov al, 0xff
    X86_AT(c, 0x11e3bu);
    s8(c, 0, 0xFFu);
    // 011e3d  xor edi, edi
    X86_AT(c, 0x11e3du);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v ^ c.r[7], 4); }
    // 011e3f  mov ch, 0x10
    X86_AT(c, 0x11e3fu);
    s8(c, 5, 0x10u);
    // 011e41  stosb byte ptr es:[edi], al
    X86_AT(c, 0x11e41u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 011e43  inc ah
    X86_AT(c, 0x11e43u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e45  cmp ah, 0x10
    X86_AT(c, 0x11e45u);
    (void)x86_sub(c, g8(c, 4), 0x10u, 0, 1);
    // 011e48  jne 0x11e2b
    X86_AT(c, 0x11e48u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11e2bu); goto L_11e2b; }
    X86_TICK(c, 40);
    // 011e4a  pop es
    X86_AT(c, 0x11e4au);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011e4b  popal 
    X86_AT(c, 0x11e4bu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011e4c  xor al, al
    X86_AT(c, 0x11e4cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e4e  ret 
    X86_AT(c, 0x11e4eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11e05u, "ran off the end of a function");
}
void f_00011e07(X86Cpu& c) {
    goto L_11e07;
L_11ddb:
    X86_TICK(c, 118);
    // 011ddb  mov dl, 0xf7
    X86_AT(c, 0x11ddbu);
    s8(c, 2, 0xF7u);
    // 011ddd  mov al, ah
    X86_AT(c, 0x11dddu);
    s8(c, 0, g8(c, 4));
    // 011ddf  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11ddfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011de6  out dx, al
    X86_AT(c, 0x11de6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011de7  push ds
    X86_AT(c, 0x11de7u);
    push32(c, c.sreg[3]);
    // 011de8  pop ds
    X86_AT(c, 0x11de8u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011de9  push ds
    X86_AT(c, 0x11de9u);
    push32(c, c.sreg[3]);
    // 011dea  pop ds
    X86_AT(c, 0x11deau);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011deb  mov dl, 0xf0
    X86_AT(c, 0x11debu);
    s8(c, 2, 0xF0u);
    // 011ded  xor al, al
    X86_AT(c, 0x11dedu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011def  out dx, al
    X86_AT(c, 0x11defu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df0  push ds
    X86_AT(c, 0x11df0u);
    push32(c, c.sreg[3]);
    // 011df1  pop ds
    X86_AT(c, 0x11df1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df2  push ds
    X86_AT(c, 0x11df2u);
    push32(c, c.sreg[3]);
    // 011df3  pop ds
    X86_AT(c, 0x11df3u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df4  inc edx
    X86_AT(c, 0x11df4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011df5  mov al, 0x77
    X86_AT(c, 0x11df5u);
    s8(c, 0, 0x77u);
    // 011df7  out dx, al
    X86_AT(c, 0x11df7u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df8  push ds
    X86_AT(c, 0x11df8u);
    push32(c, c.sreg[3]);
    // 011df9  pop ds
    X86_AT(c, 0x11df9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfa  push ds
    X86_AT(c, 0x11dfau);
    push32(c, c.sreg[3]);
    // 011dfb  pop ds
    X86_AT(c, 0x11dfbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfc  inc edx
    X86_AT(c, 0x11dfcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011dfd  mov al, 0x5a
    X86_AT(c, 0x11dfdu);
    s8(c, 0, 0x5Au);
    // 011dff  out dx, al
    X86_AT(c, 0x11dffu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e00  push ds
    X86_AT(c, 0x11e00u);
    push32(c, c.sreg[3]);
    // 011e01  pop ds
    X86_AT(c, 0x11e01u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e02  push ds
    X86_AT(c, 0x11e02u);
    push32(c, c.sreg[3]);
    // 011e03  pop ds
    X86_AT(c, 0x11e03u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e04  inc edx
    X86_AT(c, 0x11e04u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e05  mov al, 7
    X86_AT(c, 0x11e05u);
    s8(c, 0, 0x7u);
L_11e07:
    X86_TICK(c, 115);
    // 011e07  out dx, al
    X86_AT(c, 0x11e07u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e08  push ds
    X86_AT(c, 0x11e08u);
    push32(c, c.sreg[3]);
    // 011e09  pop ds
    X86_AT(c, 0x11e09u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0a  push ds
    X86_AT(c, 0x11e0au);
    push32(c, c.sreg[3]);
    // 011e0b  pop ds
    X86_AT(c, 0x11e0bu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0c  inc edx
    X86_AT(c, 0x11e0cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e0d  xor al, al
    X86_AT(c, 0x11e0du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e0f  out dx, al
    X86_AT(c, 0x11e0fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e10  push ds
    X86_AT(c, 0x11e10u);
    push32(c, c.sreg[3]);
    // 011e11  pop ds
    X86_AT(c, 0x11e11u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e12  push ds
    X86_AT(c, 0x11e12u);
    push32(c, c.sreg[3]);
    // 011e13  pop ds
    X86_AT(c, 0x11e13u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e14  inc edx
    X86_AT(c, 0x11e14u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e15  out dx, al
    X86_AT(c, 0x11e15u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e16  push ds
    X86_AT(c, 0x11e16u);
    push32(c, c.sreg[3]);
    // 011e17  pop ds
    X86_AT(c, 0x11e17u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e18  push ds
    X86_AT(c, 0x11e18u);
    push32(c, c.sreg[3]);
    // 011e19  pop ds
    X86_AT(c, 0x11e19u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e1a  inc edx
    X86_AT(c, 0x11e1au);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e1b  xor al, al
    X86_AT(c, 0x11e1bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e1d  out dx, al
    X86_AT(c, 0x11e1du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e1e  push ds
    X86_AT(c, 0x11e1eu);
    push32(c, c.sreg[3]);
    // 011e1f  pop ds
    X86_AT(c, 0x11e1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e20  push ds
    X86_AT(c, 0x11e20u);
    push32(c, c.sreg[3]);
    // 011e21  pop ds
    X86_AT(c, 0x11e21u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e22  inc ah
    X86_AT(c, 0x11e22u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e24  cmp ah, 0x48
    X86_AT(c, 0x11e24u);
    (void)x86_sub(c, g8(c, 4), 0x48u, 0, 1);
    // 011e27  jne 0x11ddb
    X86_AT(c, 0x11e27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11ddbu); goto L_11ddb; }
    X86_TICK(c, 2);
    // 011e29  xor ah, ah
    X86_AT(c, 0x11e29u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
L_11e2b:
    X86_TICK(c, 52);
    // 011e2b  mov dl, 0xf7
    X86_AT(c, 0x11e2bu);
    s8(c, 2, 0xF7u);
    // 011e2d  mov al, ah
    X86_AT(c, 0x11e2du);
    s8(c, 0, g8(c, 4));
    // 011e2f  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11e2fu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011e36  out dx, al
    X86_AT(c, 0x11e36u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e37  push ds
    X86_AT(c, 0x11e37u);
    push32(c, c.sreg[3]);
    // 011e38  pop ds
    X86_AT(c, 0x11e38u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e39  push ds
    X86_AT(c, 0x11e39u);
    push32(c, c.sreg[3]);
    // 011e3a  pop ds
    X86_AT(c, 0x11e3au);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e3b  mov al, 0xff
    X86_AT(c, 0x11e3bu);
    s8(c, 0, 0xFFu);
    // 011e3d  xor edi, edi
    X86_AT(c, 0x11e3du);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v ^ c.r[7], 4); }
    // 011e3f  mov ch, 0x10
    X86_AT(c, 0x11e3fu);
    s8(c, 5, 0x10u);
    // 011e41  stosb byte ptr es:[edi], al
    X86_AT(c, 0x11e41u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 011e43  inc ah
    X86_AT(c, 0x11e43u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e45  cmp ah, 0x10
    X86_AT(c, 0x11e45u);
    (void)x86_sub(c, g8(c, 4), 0x10u, 0, 1);
    // 011e48  jne 0x11e2b
    X86_AT(c, 0x11e48u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11e2bu); goto L_11e2b; }
    X86_TICK(c, 40);
    // 011e4a  pop es
    X86_AT(c, 0x11e4au);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011e4b  popal 
    X86_AT(c, 0x11e4bu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011e4c  xor al, al
    X86_AT(c, 0x11e4cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e4e  ret 
    X86_AT(c, 0x11e4eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11e07u, "ran off the end of a function");
}
void f_00011e08(X86Cpu& c) {
    goto L_11e08;
L_11ddb:
    X86_TICK(c, 130);
    // 011ddb  mov dl, 0xf7
    X86_AT(c, 0x11ddbu);
    s8(c, 2, 0xF7u);
    // 011ddd  mov al, ah
    X86_AT(c, 0x11dddu);
    s8(c, 0, g8(c, 4));
    // 011ddf  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11ddfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011de6  out dx, al
    X86_AT(c, 0x11de6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011de7  push ds
    X86_AT(c, 0x11de7u);
    push32(c, c.sreg[3]);
    // 011de8  pop ds
    X86_AT(c, 0x11de8u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011de9  push ds
    X86_AT(c, 0x11de9u);
    push32(c, c.sreg[3]);
    // 011dea  pop ds
    X86_AT(c, 0x11deau);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011deb  mov dl, 0xf0
    X86_AT(c, 0x11debu);
    s8(c, 2, 0xF0u);
    // 011ded  xor al, al
    X86_AT(c, 0x11dedu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011def  out dx, al
    X86_AT(c, 0x11defu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df0  push ds
    X86_AT(c, 0x11df0u);
    push32(c, c.sreg[3]);
    // 011df1  pop ds
    X86_AT(c, 0x11df1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df2  push ds
    X86_AT(c, 0x11df2u);
    push32(c, c.sreg[3]);
    // 011df3  pop ds
    X86_AT(c, 0x11df3u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df4  inc edx
    X86_AT(c, 0x11df4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011df5  mov al, 0x77
    X86_AT(c, 0x11df5u);
    s8(c, 0, 0x77u);
    // 011df7  out dx, al
    X86_AT(c, 0x11df7u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df8  push ds
    X86_AT(c, 0x11df8u);
    push32(c, c.sreg[3]);
    // 011df9  pop ds
    X86_AT(c, 0x11df9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfa  push ds
    X86_AT(c, 0x11dfau);
    push32(c, c.sreg[3]);
    // 011dfb  pop ds
    X86_AT(c, 0x11dfbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfc  inc edx
    X86_AT(c, 0x11dfcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011dfd  mov al, 0x5a
    X86_AT(c, 0x11dfdu);
    s8(c, 0, 0x5Au);
    // 011dff  out dx, al
    X86_AT(c, 0x11dffu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e00  push ds
    X86_AT(c, 0x11e00u);
    push32(c, c.sreg[3]);
    // 011e01  pop ds
    X86_AT(c, 0x11e01u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e02  push ds
    X86_AT(c, 0x11e02u);
    push32(c, c.sreg[3]);
    // 011e03  pop ds
    X86_AT(c, 0x11e03u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e04  inc edx
    X86_AT(c, 0x11e04u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e05  mov al, 7
    X86_AT(c, 0x11e05u);
    s8(c, 0, 0x7u);
    // 011e07  out dx, al
    X86_AT(c, 0x11e07u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
L_11e08:
    X86_TICK(c, 103);
    // 011e08  push ds
    X86_AT(c, 0x11e08u);
    push32(c, c.sreg[3]);
    // 011e09  pop ds
    X86_AT(c, 0x11e09u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0a  push ds
    X86_AT(c, 0x11e0au);
    push32(c, c.sreg[3]);
    // 011e0b  pop ds
    X86_AT(c, 0x11e0bu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0c  inc edx
    X86_AT(c, 0x11e0cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e0d  xor al, al
    X86_AT(c, 0x11e0du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e0f  out dx, al
    X86_AT(c, 0x11e0fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e10  push ds
    X86_AT(c, 0x11e10u);
    push32(c, c.sreg[3]);
    // 011e11  pop ds
    X86_AT(c, 0x11e11u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e12  push ds
    X86_AT(c, 0x11e12u);
    push32(c, c.sreg[3]);
    // 011e13  pop ds
    X86_AT(c, 0x11e13u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e14  inc edx
    X86_AT(c, 0x11e14u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e15  out dx, al
    X86_AT(c, 0x11e15u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e16  push ds
    X86_AT(c, 0x11e16u);
    push32(c, c.sreg[3]);
    // 011e17  pop ds
    X86_AT(c, 0x11e17u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e18  push ds
    X86_AT(c, 0x11e18u);
    push32(c, c.sreg[3]);
    // 011e19  pop ds
    X86_AT(c, 0x11e19u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e1a  inc edx
    X86_AT(c, 0x11e1au);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e1b  xor al, al
    X86_AT(c, 0x11e1bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e1d  out dx, al
    X86_AT(c, 0x11e1du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e1e  push ds
    X86_AT(c, 0x11e1eu);
    push32(c, c.sreg[3]);
    // 011e1f  pop ds
    X86_AT(c, 0x11e1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e20  push ds
    X86_AT(c, 0x11e20u);
    push32(c, c.sreg[3]);
    // 011e21  pop ds
    X86_AT(c, 0x11e21u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e22  inc ah
    X86_AT(c, 0x11e22u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e24  cmp ah, 0x48
    X86_AT(c, 0x11e24u);
    (void)x86_sub(c, g8(c, 4), 0x48u, 0, 1);
    // 011e27  jne 0x11ddb
    X86_AT(c, 0x11e27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11ddbu); goto L_11ddb; }
    X86_TICK(c, 2);
    // 011e29  xor ah, ah
    X86_AT(c, 0x11e29u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
L_11e2b:
    X86_TICK(c, 52);
    // 011e2b  mov dl, 0xf7
    X86_AT(c, 0x11e2bu);
    s8(c, 2, 0xF7u);
    // 011e2d  mov al, ah
    X86_AT(c, 0x11e2du);
    s8(c, 0, g8(c, 4));
    // 011e2f  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11e2fu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011e36  out dx, al
    X86_AT(c, 0x11e36u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e37  push ds
    X86_AT(c, 0x11e37u);
    push32(c, c.sreg[3]);
    // 011e38  pop ds
    X86_AT(c, 0x11e38u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e39  push ds
    X86_AT(c, 0x11e39u);
    push32(c, c.sreg[3]);
    // 011e3a  pop ds
    X86_AT(c, 0x11e3au);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e3b  mov al, 0xff
    X86_AT(c, 0x11e3bu);
    s8(c, 0, 0xFFu);
    // 011e3d  xor edi, edi
    X86_AT(c, 0x11e3du);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v ^ c.r[7], 4); }
    // 011e3f  mov ch, 0x10
    X86_AT(c, 0x11e3fu);
    s8(c, 5, 0x10u);
    // 011e41  stosb byte ptr es:[edi], al
    X86_AT(c, 0x11e41u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 011e43  inc ah
    X86_AT(c, 0x11e43u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e45  cmp ah, 0x10
    X86_AT(c, 0x11e45u);
    (void)x86_sub(c, g8(c, 4), 0x10u, 0, 1);
    // 011e48  jne 0x11e2b
    X86_AT(c, 0x11e48u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11e2bu); goto L_11e2b; }
    X86_TICK(c, 40);
    // 011e4a  pop es
    X86_AT(c, 0x11e4au);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011e4b  popal 
    X86_AT(c, 0x11e4bu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011e4c  xor al, al
    X86_AT(c, 0x11e4cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e4e  ret 
    X86_AT(c, 0x11e4eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11e08u, "ran off the end of a function");
}
void f_00011e09(X86Cpu& c) {
    goto L_11e09;
L_11ddb:
    X86_TICK(c, 132);
    // 011ddb  mov dl, 0xf7
    X86_AT(c, 0x11ddbu);
    s8(c, 2, 0xF7u);
    // 011ddd  mov al, ah
    X86_AT(c, 0x11dddu);
    s8(c, 0, g8(c, 4));
    // 011ddf  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11ddfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011de6  out dx, al
    X86_AT(c, 0x11de6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011de7  push ds
    X86_AT(c, 0x11de7u);
    push32(c, c.sreg[3]);
    // 011de8  pop ds
    X86_AT(c, 0x11de8u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011de9  push ds
    X86_AT(c, 0x11de9u);
    push32(c, c.sreg[3]);
    // 011dea  pop ds
    X86_AT(c, 0x11deau);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011deb  mov dl, 0xf0
    X86_AT(c, 0x11debu);
    s8(c, 2, 0xF0u);
    // 011ded  xor al, al
    X86_AT(c, 0x11dedu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011def  out dx, al
    X86_AT(c, 0x11defu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df0  push ds
    X86_AT(c, 0x11df0u);
    push32(c, c.sreg[3]);
    // 011df1  pop ds
    X86_AT(c, 0x11df1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df2  push ds
    X86_AT(c, 0x11df2u);
    push32(c, c.sreg[3]);
    // 011df3  pop ds
    X86_AT(c, 0x11df3u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df4  inc edx
    X86_AT(c, 0x11df4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011df5  mov al, 0x77
    X86_AT(c, 0x11df5u);
    s8(c, 0, 0x77u);
    // 011df7  out dx, al
    X86_AT(c, 0x11df7u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df8  push ds
    X86_AT(c, 0x11df8u);
    push32(c, c.sreg[3]);
    // 011df9  pop ds
    X86_AT(c, 0x11df9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfa  push ds
    X86_AT(c, 0x11dfau);
    push32(c, c.sreg[3]);
    // 011dfb  pop ds
    X86_AT(c, 0x11dfbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfc  inc edx
    X86_AT(c, 0x11dfcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011dfd  mov al, 0x5a
    X86_AT(c, 0x11dfdu);
    s8(c, 0, 0x5Au);
    // 011dff  out dx, al
    X86_AT(c, 0x11dffu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e00  push ds
    X86_AT(c, 0x11e00u);
    push32(c, c.sreg[3]);
    // 011e01  pop ds
    X86_AT(c, 0x11e01u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e02  push ds
    X86_AT(c, 0x11e02u);
    push32(c, c.sreg[3]);
    // 011e03  pop ds
    X86_AT(c, 0x11e03u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e04  inc edx
    X86_AT(c, 0x11e04u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e05  mov al, 7
    X86_AT(c, 0x11e05u);
    s8(c, 0, 0x7u);
    // 011e07  out dx, al
    X86_AT(c, 0x11e07u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e08  push ds
    X86_AT(c, 0x11e08u);
    push32(c, c.sreg[3]);
L_11e09:
    X86_TICK(c, 101);
    // 011e09  pop ds
    X86_AT(c, 0x11e09u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0a  push ds
    X86_AT(c, 0x11e0au);
    push32(c, c.sreg[3]);
    // 011e0b  pop ds
    X86_AT(c, 0x11e0bu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0c  inc edx
    X86_AT(c, 0x11e0cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e0d  xor al, al
    X86_AT(c, 0x11e0du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e0f  out dx, al
    X86_AT(c, 0x11e0fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e10  push ds
    X86_AT(c, 0x11e10u);
    push32(c, c.sreg[3]);
    // 011e11  pop ds
    X86_AT(c, 0x11e11u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e12  push ds
    X86_AT(c, 0x11e12u);
    push32(c, c.sreg[3]);
    // 011e13  pop ds
    X86_AT(c, 0x11e13u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e14  inc edx
    X86_AT(c, 0x11e14u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e15  out dx, al
    X86_AT(c, 0x11e15u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e16  push ds
    X86_AT(c, 0x11e16u);
    push32(c, c.sreg[3]);
    // 011e17  pop ds
    X86_AT(c, 0x11e17u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e18  push ds
    X86_AT(c, 0x11e18u);
    push32(c, c.sreg[3]);
    // 011e19  pop ds
    X86_AT(c, 0x11e19u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e1a  inc edx
    X86_AT(c, 0x11e1au);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e1b  xor al, al
    X86_AT(c, 0x11e1bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e1d  out dx, al
    X86_AT(c, 0x11e1du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e1e  push ds
    X86_AT(c, 0x11e1eu);
    push32(c, c.sreg[3]);
    // 011e1f  pop ds
    X86_AT(c, 0x11e1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e20  push ds
    X86_AT(c, 0x11e20u);
    push32(c, c.sreg[3]);
    // 011e21  pop ds
    X86_AT(c, 0x11e21u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e22  inc ah
    X86_AT(c, 0x11e22u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e24  cmp ah, 0x48
    X86_AT(c, 0x11e24u);
    (void)x86_sub(c, g8(c, 4), 0x48u, 0, 1);
    // 011e27  jne 0x11ddb
    X86_AT(c, 0x11e27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11ddbu); goto L_11ddb; }
    X86_TICK(c, 2);
    // 011e29  xor ah, ah
    X86_AT(c, 0x11e29u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
L_11e2b:
    X86_TICK(c, 52);
    // 011e2b  mov dl, 0xf7
    X86_AT(c, 0x11e2bu);
    s8(c, 2, 0xF7u);
    // 011e2d  mov al, ah
    X86_AT(c, 0x11e2du);
    s8(c, 0, g8(c, 4));
    // 011e2f  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11e2fu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011e36  out dx, al
    X86_AT(c, 0x11e36u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e37  push ds
    X86_AT(c, 0x11e37u);
    push32(c, c.sreg[3]);
    // 011e38  pop ds
    X86_AT(c, 0x11e38u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e39  push ds
    X86_AT(c, 0x11e39u);
    push32(c, c.sreg[3]);
    // 011e3a  pop ds
    X86_AT(c, 0x11e3au);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e3b  mov al, 0xff
    X86_AT(c, 0x11e3bu);
    s8(c, 0, 0xFFu);
    // 011e3d  xor edi, edi
    X86_AT(c, 0x11e3du);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v ^ c.r[7], 4); }
    // 011e3f  mov ch, 0x10
    X86_AT(c, 0x11e3fu);
    s8(c, 5, 0x10u);
    // 011e41  stosb byte ptr es:[edi], al
    X86_AT(c, 0x11e41u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 011e43  inc ah
    X86_AT(c, 0x11e43u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e45  cmp ah, 0x10
    X86_AT(c, 0x11e45u);
    (void)x86_sub(c, g8(c, 4), 0x10u, 0, 1);
    // 011e48  jne 0x11e2b
    X86_AT(c, 0x11e48u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11e2bu); goto L_11e2b; }
    X86_TICK(c, 40);
    // 011e4a  pop es
    X86_AT(c, 0x11e4au);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011e4b  popal 
    X86_AT(c, 0x11e4bu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011e4c  xor al, al
    X86_AT(c, 0x11e4cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e4e  ret 
    X86_AT(c, 0x11e4eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11e09u, "ran off the end of a function");
}
void f_00011e0a(X86Cpu& c) {
    goto L_11e0a;
L_11ddb:
    X86_TICK(c, 136);
    // 011ddb  mov dl, 0xf7
    X86_AT(c, 0x11ddbu);
    s8(c, 2, 0xF7u);
    // 011ddd  mov al, ah
    X86_AT(c, 0x11dddu);
    s8(c, 0, g8(c, 4));
    // 011ddf  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11ddfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011de6  out dx, al
    X86_AT(c, 0x11de6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011de7  push ds
    X86_AT(c, 0x11de7u);
    push32(c, c.sreg[3]);
    // 011de8  pop ds
    X86_AT(c, 0x11de8u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011de9  push ds
    X86_AT(c, 0x11de9u);
    push32(c, c.sreg[3]);
    // 011dea  pop ds
    X86_AT(c, 0x11deau);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011deb  mov dl, 0xf0
    X86_AT(c, 0x11debu);
    s8(c, 2, 0xF0u);
    // 011ded  xor al, al
    X86_AT(c, 0x11dedu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011def  out dx, al
    X86_AT(c, 0x11defu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df0  push ds
    X86_AT(c, 0x11df0u);
    push32(c, c.sreg[3]);
    // 011df1  pop ds
    X86_AT(c, 0x11df1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df2  push ds
    X86_AT(c, 0x11df2u);
    push32(c, c.sreg[3]);
    // 011df3  pop ds
    X86_AT(c, 0x11df3u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df4  inc edx
    X86_AT(c, 0x11df4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011df5  mov al, 0x77
    X86_AT(c, 0x11df5u);
    s8(c, 0, 0x77u);
    // 011df7  out dx, al
    X86_AT(c, 0x11df7u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df8  push ds
    X86_AT(c, 0x11df8u);
    push32(c, c.sreg[3]);
    // 011df9  pop ds
    X86_AT(c, 0x11df9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfa  push ds
    X86_AT(c, 0x11dfau);
    push32(c, c.sreg[3]);
    // 011dfb  pop ds
    X86_AT(c, 0x11dfbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfc  inc edx
    X86_AT(c, 0x11dfcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011dfd  mov al, 0x5a
    X86_AT(c, 0x11dfdu);
    s8(c, 0, 0x5Au);
    // 011dff  out dx, al
    X86_AT(c, 0x11dffu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e00  push ds
    X86_AT(c, 0x11e00u);
    push32(c, c.sreg[3]);
    // 011e01  pop ds
    X86_AT(c, 0x11e01u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e02  push ds
    X86_AT(c, 0x11e02u);
    push32(c, c.sreg[3]);
    // 011e03  pop ds
    X86_AT(c, 0x11e03u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e04  inc edx
    X86_AT(c, 0x11e04u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e05  mov al, 7
    X86_AT(c, 0x11e05u);
    s8(c, 0, 0x7u);
    // 011e07  out dx, al
    X86_AT(c, 0x11e07u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e08  push ds
    X86_AT(c, 0x11e08u);
    push32(c, c.sreg[3]);
    // 011e09  pop ds
    X86_AT(c, 0x11e09u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_11e0a:
    X86_TICK(c, 97);
    // 011e0a  push ds
    X86_AT(c, 0x11e0au);
    push32(c, c.sreg[3]);
    // 011e0b  pop ds
    X86_AT(c, 0x11e0bu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0c  inc edx
    X86_AT(c, 0x11e0cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e0d  xor al, al
    X86_AT(c, 0x11e0du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e0f  out dx, al
    X86_AT(c, 0x11e0fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e10  push ds
    X86_AT(c, 0x11e10u);
    push32(c, c.sreg[3]);
    // 011e11  pop ds
    X86_AT(c, 0x11e11u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e12  push ds
    X86_AT(c, 0x11e12u);
    push32(c, c.sreg[3]);
    // 011e13  pop ds
    X86_AT(c, 0x11e13u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e14  inc edx
    X86_AT(c, 0x11e14u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e15  out dx, al
    X86_AT(c, 0x11e15u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e16  push ds
    X86_AT(c, 0x11e16u);
    push32(c, c.sreg[3]);
    // 011e17  pop ds
    X86_AT(c, 0x11e17u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e18  push ds
    X86_AT(c, 0x11e18u);
    push32(c, c.sreg[3]);
    // 011e19  pop ds
    X86_AT(c, 0x11e19u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e1a  inc edx
    X86_AT(c, 0x11e1au);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e1b  xor al, al
    X86_AT(c, 0x11e1bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e1d  out dx, al
    X86_AT(c, 0x11e1du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e1e  push ds
    X86_AT(c, 0x11e1eu);
    push32(c, c.sreg[3]);
    // 011e1f  pop ds
    X86_AT(c, 0x11e1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e20  push ds
    X86_AT(c, 0x11e20u);
    push32(c, c.sreg[3]);
    // 011e21  pop ds
    X86_AT(c, 0x11e21u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e22  inc ah
    X86_AT(c, 0x11e22u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e24  cmp ah, 0x48
    X86_AT(c, 0x11e24u);
    (void)x86_sub(c, g8(c, 4), 0x48u, 0, 1);
    // 011e27  jne 0x11ddb
    X86_AT(c, 0x11e27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11ddbu); goto L_11ddb; }
    X86_TICK(c, 2);
    // 011e29  xor ah, ah
    X86_AT(c, 0x11e29u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
L_11e2b:
    X86_TICK(c, 52);
    // 011e2b  mov dl, 0xf7
    X86_AT(c, 0x11e2bu);
    s8(c, 2, 0xF7u);
    // 011e2d  mov al, ah
    X86_AT(c, 0x11e2du);
    s8(c, 0, g8(c, 4));
    // 011e2f  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11e2fu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011e36  out dx, al
    X86_AT(c, 0x11e36u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e37  push ds
    X86_AT(c, 0x11e37u);
    push32(c, c.sreg[3]);
    // 011e38  pop ds
    X86_AT(c, 0x11e38u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e39  push ds
    X86_AT(c, 0x11e39u);
    push32(c, c.sreg[3]);
    // 011e3a  pop ds
    X86_AT(c, 0x11e3au);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e3b  mov al, 0xff
    X86_AT(c, 0x11e3bu);
    s8(c, 0, 0xFFu);
    // 011e3d  xor edi, edi
    X86_AT(c, 0x11e3du);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v ^ c.r[7], 4); }
    // 011e3f  mov ch, 0x10
    X86_AT(c, 0x11e3fu);
    s8(c, 5, 0x10u);
    // 011e41  stosb byte ptr es:[edi], al
    X86_AT(c, 0x11e41u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 011e43  inc ah
    X86_AT(c, 0x11e43u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e45  cmp ah, 0x10
    X86_AT(c, 0x11e45u);
    (void)x86_sub(c, g8(c, 4), 0x10u, 0, 1);
    // 011e48  jne 0x11e2b
    X86_AT(c, 0x11e48u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11e2bu); goto L_11e2b; }
    X86_TICK(c, 40);
    // 011e4a  pop es
    X86_AT(c, 0x11e4au);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011e4b  popal 
    X86_AT(c, 0x11e4bu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011e4c  xor al, al
    X86_AT(c, 0x11e4cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e4e  ret 
    X86_AT(c, 0x11e4eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11e0au, "ran off the end of a function");
}
void f_00011e0b(X86Cpu& c) {
    goto L_11e0b;
L_11ddb:
    X86_TICK(c, 138);
    // 011ddb  mov dl, 0xf7
    X86_AT(c, 0x11ddbu);
    s8(c, 2, 0xF7u);
    // 011ddd  mov al, ah
    X86_AT(c, 0x11dddu);
    s8(c, 0, g8(c, 4));
    // 011ddf  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11ddfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011de6  out dx, al
    X86_AT(c, 0x11de6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011de7  push ds
    X86_AT(c, 0x11de7u);
    push32(c, c.sreg[3]);
    // 011de8  pop ds
    X86_AT(c, 0x11de8u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011de9  push ds
    X86_AT(c, 0x11de9u);
    push32(c, c.sreg[3]);
    // 011dea  pop ds
    X86_AT(c, 0x11deau);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011deb  mov dl, 0xf0
    X86_AT(c, 0x11debu);
    s8(c, 2, 0xF0u);
    // 011ded  xor al, al
    X86_AT(c, 0x11dedu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011def  out dx, al
    X86_AT(c, 0x11defu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df0  push ds
    X86_AT(c, 0x11df0u);
    push32(c, c.sreg[3]);
    // 011df1  pop ds
    X86_AT(c, 0x11df1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df2  push ds
    X86_AT(c, 0x11df2u);
    push32(c, c.sreg[3]);
    // 011df3  pop ds
    X86_AT(c, 0x11df3u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df4  inc edx
    X86_AT(c, 0x11df4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011df5  mov al, 0x77
    X86_AT(c, 0x11df5u);
    s8(c, 0, 0x77u);
    // 011df7  out dx, al
    X86_AT(c, 0x11df7u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df8  push ds
    X86_AT(c, 0x11df8u);
    push32(c, c.sreg[3]);
    // 011df9  pop ds
    X86_AT(c, 0x11df9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfa  push ds
    X86_AT(c, 0x11dfau);
    push32(c, c.sreg[3]);
    // 011dfb  pop ds
    X86_AT(c, 0x11dfbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfc  inc edx
    X86_AT(c, 0x11dfcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011dfd  mov al, 0x5a
    X86_AT(c, 0x11dfdu);
    s8(c, 0, 0x5Au);
    // 011dff  out dx, al
    X86_AT(c, 0x11dffu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e00  push ds
    X86_AT(c, 0x11e00u);
    push32(c, c.sreg[3]);
    // 011e01  pop ds
    X86_AT(c, 0x11e01u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e02  push ds
    X86_AT(c, 0x11e02u);
    push32(c, c.sreg[3]);
    // 011e03  pop ds
    X86_AT(c, 0x11e03u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e04  inc edx
    X86_AT(c, 0x11e04u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e05  mov al, 7
    X86_AT(c, 0x11e05u);
    s8(c, 0, 0x7u);
    // 011e07  out dx, al
    X86_AT(c, 0x11e07u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e08  push ds
    X86_AT(c, 0x11e08u);
    push32(c, c.sreg[3]);
    // 011e09  pop ds
    X86_AT(c, 0x11e09u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0a  push ds
    X86_AT(c, 0x11e0au);
    push32(c, c.sreg[3]);
L_11e0b:
    X86_TICK(c, 95);
    // 011e0b  pop ds
    X86_AT(c, 0x11e0bu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0c  inc edx
    X86_AT(c, 0x11e0cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e0d  xor al, al
    X86_AT(c, 0x11e0du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e0f  out dx, al
    X86_AT(c, 0x11e0fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e10  push ds
    X86_AT(c, 0x11e10u);
    push32(c, c.sreg[3]);
    // 011e11  pop ds
    X86_AT(c, 0x11e11u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e12  push ds
    X86_AT(c, 0x11e12u);
    push32(c, c.sreg[3]);
    // 011e13  pop ds
    X86_AT(c, 0x11e13u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e14  inc edx
    X86_AT(c, 0x11e14u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e15  out dx, al
    X86_AT(c, 0x11e15u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e16  push ds
    X86_AT(c, 0x11e16u);
    push32(c, c.sreg[3]);
    // 011e17  pop ds
    X86_AT(c, 0x11e17u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e18  push ds
    X86_AT(c, 0x11e18u);
    push32(c, c.sreg[3]);
    // 011e19  pop ds
    X86_AT(c, 0x11e19u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e1a  inc edx
    X86_AT(c, 0x11e1au);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e1b  xor al, al
    X86_AT(c, 0x11e1bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e1d  out dx, al
    X86_AT(c, 0x11e1du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e1e  push ds
    X86_AT(c, 0x11e1eu);
    push32(c, c.sreg[3]);
    // 011e1f  pop ds
    X86_AT(c, 0x11e1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e20  push ds
    X86_AT(c, 0x11e20u);
    push32(c, c.sreg[3]);
    // 011e21  pop ds
    X86_AT(c, 0x11e21u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e22  inc ah
    X86_AT(c, 0x11e22u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e24  cmp ah, 0x48
    X86_AT(c, 0x11e24u);
    (void)x86_sub(c, g8(c, 4), 0x48u, 0, 1);
    // 011e27  jne 0x11ddb
    X86_AT(c, 0x11e27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11ddbu); goto L_11ddb; }
    X86_TICK(c, 2);
    // 011e29  xor ah, ah
    X86_AT(c, 0x11e29u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
L_11e2b:
    X86_TICK(c, 52);
    // 011e2b  mov dl, 0xf7
    X86_AT(c, 0x11e2bu);
    s8(c, 2, 0xF7u);
    // 011e2d  mov al, ah
    X86_AT(c, 0x11e2du);
    s8(c, 0, g8(c, 4));
    // 011e2f  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11e2fu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011e36  out dx, al
    X86_AT(c, 0x11e36u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e37  push ds
    X86_AT(c, 0x11e37u);
    push32(c, c.sreg[3]);
    // 011e38  pop ds
    X86_AT(c, 0x11e38u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e39  push ds
    X86_AT(c, 0x11e39u);
    push32(c, c.sreg[3]);
    // 011e3a  pop ds
    X86_AT(c, 0x11e3au);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e3b  mov al, 0xff
    X86_AT(c, 0x11e3bu);
    s8(c, 0, 0xFFu);
    // 011e3d  xor edi, edi
    X86_AT(c, 0x11e3du);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v ^ c.r[7], 4); }
    // 011e3f  mov ch, 0x10
    X86_AT(c, 0x11e3fu);
    s8(c, 5, 0x10u);
    // 011e41  stosb byte ptr es:[edi], al
    X86_AT(c, 0x11e41u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 011e43  inc ah
    X86_AT(c, 0x11e43u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e45  cmp ah, 0x10
    X86_AT(c, 0x11e45u);
    (void)x86_sub(c, g8(c, 4), 0x10u, 0, 1);
    // 011e48  jne 0x11e2b
    X86_AT(c, 0x11e48u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11e2bu); goto L_11e2b; }
    X86_TICK(c, 40);
    // 011e4a  pop es
    X86_AT(c, 0x11e4au);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011e4b  popal 
    X86_AT(c, 0x11e4bu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011e4c  xor al, al
    X86_AT(c, 0x11e4cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e4e  ret 
    X86_AT(c, 0x11e4eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11e0bu, "ran off the end of a function");
}
void f_00011e0c(X86Cpu& c) {
    goto L_11e0c;
L_11ddb:
    X86_TICK(c, 142);
    // 011ddb  mov dl, 0xf7
    X86_AT(c, 0x11ddbu);
    s8(c, 2, 0xF7u);
    // 011ddd  mov al, ah
    X86_AT(c, 0x11dddu);
    s8(c, 0, g8(c, 4));
    // 011ddf  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11ddfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011de6  out dx, al
    X86_AT(c, 0x11de6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011de7  push ds
    X86_AT(c, 0x11de7u);
    push32(c, c.sreg[3]);
    // 011de8  pop ds
    X86_AT(c, 0x11de8u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011de9  push ds
    X86_AT(c, 0x11de9u);
    push32(c, c.sreg[3]);
    // 011dea  pop ds
    X86_AT(c, 0x11deau);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011deb  mov dl, 0xf0
    X86_AT(c, 0x11debu);
    s8(c, 2, 0xF0u);
    // 011ded  xor al, al
    X86_AT(c, 0x11dedu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011def  out dx, al
    X86_AT(c, 0x11defu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df0  push ds
    X86_AT(c, 0x11df0u);
    push32(c, c.sreg[3]);
    // 011df1  pop ds
    X86_AT(c, 0x11df1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df2  push ds
    X86_AT(c, 0x11df2u);
    push32(c, c.sreg[3]);
    // 011df3  pop ds
    X86_AT(c, 0x11df3u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df4  inc edx
    X86_AT(c, 0x11df4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011df5  mov al, 0x77
    X86_AT(c, 0x11df5u);
    s8(c, 0, 0x77u);
    // 011df7  out dx, al
    X86_AT(c, 0x11df7u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df8  push ds
    X86_AT(c, 0x11df8u);
    push32(c, c.sreg[3]);
    // 011df9  pop ds
    X86_AT(c, 0x11df9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfa  push ds
    X86_AT(c, 0x11dfau);
    push32(c, c.sreg[3]);
    // 011dfb  pop ds
    X86_AT(c, 0x11dfbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfc  inc edx
    X86_AT(c, 0x11dfcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011dfd  mov al, 0x5a
    X86_AT(c, 0x11dfdu);
    s8(c, 0, 0x5Au);
    // 011dff  out dx, al
    X86_AT(c, 0x11dffu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e00  push ds
    X86_AT(c, 0x11e00u);
    push32(c, c.sreg[3]);
    // 011e01  pop ds
    X86_AT(c, 0x11e01u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e02  push ds
    X86_AT(c, 0x11e02u);
    push32(c, c.sreg[3]);
    // 011e03  pop ds
    X86_AT(c, 0x11e03u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e04  inc edx
    X86_AT(c, 0x11e04u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e05  mov al, 7
    X86_AT(c, 0x11e05u);
    s8(c, 0, 0x7u);
    // 011e07  out dx, al
    X86_AT(c, 0x11e07u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e08  push ds
    X86_AT(c, 0x11e08u);
    push32(c, c.sreg[3]);
    // 011e09  pop ds
    X86_AT(c, 0x11e09u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0a  push ds
    X86_AT(c, 0x11e0au);
    push32(c, c.sreg[3]);
    // 011e0b  pop ds
    X86_AT(c, 0x11e0bu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_11e0c:
    X86_TICK(c, 91);
    // 011e0c  inc edx
    X86_AT(c, 0x11e0cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e0d  xor al, al
    X86_AT(c, 0x11e0du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e0f  out dx, al
    X86_AT(c, 0x11e0fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e10  push ds
    X86_AT(c, 0x11e10u);
    push32(c, c.sreg[3]);
    // 011e11  pop ds
    X86_AT(c, 0x11e11u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e12  push ds
    X86_AT(c, 0x11e12u);
    push32(c, c.sreg[3]);
    // 011e13  pop ds
    X86_AT(c, 0x11e13u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e14  inc edx
    X86_AT(c, 0x11e14u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e15  out dx, al
    X86_AT(c, 0x11e15u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e16  push ds
    X86_AT(c, 0x11e16u);
    push32(c, c.sreg[3]);
    // 011e17  pop ds
    X86_AT(c, 0x11e17u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e18  push ds
    X86_AT(c, 0x11e18u);
    push32(c, c.sreg[3]);
    // 011e19  pop ds
    X86_AT(c, 0x11e19u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e1a  inc edx
    X86_AT(c, 0x11e1au);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e1b  xor al, al
    X86_AT(c, 0x11e1bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e1d  out dx, al
    X86_AT(c, 0x11e1du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e1e  push ds
    X86_AT(c, 0x11e1eu);
    push32(c, c.sreg[3]);
    // 011e1f  pop ds
    X86_AT(c, 0x11e1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e20  push ds
    X86_AT(c, 0x11e20u);
    push32(c, c.sreg[3]);
    // 011e21  pop ds
    X86_AT(c, 0x11e21u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e22  inc ah
    X86_AT(c, 0x11e22u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e24  cmp ah, 0x48
    X86_AT(c, 0x11e24u);
    (void)x86_sub(c, g8(c, 4), 0x48u, 0, 1);
    // 011e27  jne 0x11ddb
    X86_AT(c, 0x11e27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11ddbu); goto L_11ddb; }
    X86_TICK(c, 2);
    // 011e29  xor ah, ah
    X86_AT(c, 0x11e29u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
L_11e2b:
    X86_TICK(c, 52);
    // 011e2b  mov dl, 0xf7
    X86_AT(c, 0x11e2bu);
    s8(c, 2, 0xF7u);
    // 011e2d  mov al, ah
    X86_AT(c, 0x11e2du);
    s8(c, 0, g8(c, 4));
    // 011e2f  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11e2fu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011e36  out dx, al
    X86_AT(c, 0x11e36u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e37  push ds
    X86_AT(c, 0x11e37u);
    push32(c, c.sreg[3]);
    // 011e38  pop ds
    X86_AT(c, 0x11e38u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e39  push ds
    X86_AT(c, 0x11e39u);
    push32(c, c.sreg[3]);
    // 011e3a  pop ds
    X86_AT(c, 0x11e3au);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e3b  mov al, 0xff
    X86_AT(c, 0x11e3bu);
    s8(c, 0, 0xFFu);
    // 011e3d  xor edi, edi
    X86_AT(c, 0x11e3du);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v ^ c.r[7], 4); }
    // 011e3f  mov ch, 0x10
    X86_AT(c, 0x11e3fu);
    s8(c, 5, 0x10u);
    // 011e41  stosb byte ptr es:[edi], al
    X86_AT(c, 0x11e41u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 011e43  inc ah
    X86_AT(c, 0x11e43u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e45  cmp ah, 0x10
    X86_AT(c, 0x11e45u);
    (void)x86_sub(c, g8(c, 4), 0x10u, 0, 1);
    // 011e48  jne 0x11e2b
    X86_AT(c, 0x11e48u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11e2bu); goto L_11e2b; }
    X86_TICK(c, 40);
    // 011e4a  pop es
    X86_AT(c, 0x11e4au);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011e4b  popal 
    X86_AT(c, 0x11e4bu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011e4c  xor al, al
    X86_AT(c, 0x11e4cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e4e  ret 
    X86_AT(c, 0x11e4eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11e0cu, "ran off the end of a function");
}
void f_00011e0d(X86Cpu& c) {
    goto L_11e0d;
L_11ddb:
    X86_TICK(c, 144);
    // 011ddb  mov dl, 0xf7
    X86_AT(c, 0x11ddbu);
    s8(c, 2, 0xF7u);
    // 011ddd  mov al, ah
    X86_AT(c, 0x11dddu);
    s8(c, 0, g8(c, 4));
    // 011ddf  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11ddfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011de6  out dx, al
    X86_AT(c, 0x11de6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011de7  push ds
    X86_AT(c, 0x11de7u);
    push32(c, c.sreg[3]);
    // 011de8  pop ds
    X86_AT(c, 0x11de8u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011de9  push ds
    X86_AT(c, 0x11de9u);
    push32(c, c.sreg[3]);
    // 011dea  pop ds
    X86_AT(c, 0x11deau);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011deb  mov dl, 0xf0
    X86_AT(c, 0x11debu);
    s8(c, 2, 0xF0u);
    // 011ded  xor al, al
    X86_AT(c, 0x11dedu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011def  out dx, al
    X86_AT(c, 0x11defu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df0  push ds
    X86_AT(c, 0x11df0u);
    push32(c, c.sreg[3]);
    // 011df1  pop ds
    X86_AT(c, 0x11df1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df2  push ds
    X86_AT(c, 0x11df2u);
    push32(c, c.sreg[3]);
    // 011df3  pop ds
    X86_AT(c, 0x11df3u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df4  inc edx
    X86_AT(c, 0x11df4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011df5  mov al, 0x77
    X86_AT(c, 0x11df5u);
    s8(c, 0, 0x77u);
    // 011df7  out dx, al
    X86_AT(c, 0x11df7u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df8  push ds
    X86_AT(c, 0x11df8u);
    push32(c, c.sreg[3]);
    // 011df9  pop ds
    X86_AT(c, 0x11df9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfa  push ds
    X86_AT(c, 0x11dfau);
    push32(c, c.sreg[3]);
    // 011dfb  pop ds
    X86_AT(c, 0x11dfbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfc  inc edx
    X86_AT(c, 0x11dfcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011dfd  mov al, 0x5a
    X86_AT(c, 0x11dfdu);
    s8(c, 0, 0x5Au);
    // 011dff  out dx, al
    X86_AT(c, 0x11dffu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e00  push ds
    X86_AT(c, 0x11e00u);
    push32(c, c.sreg[3]);
    // 011e01  pop ds
    X86_AT(c, 0x11e01u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e02  push ds
    X86_AT(c, 0x11e02u);
    push32(c, c.sreg[3]);
    // 011e03  pop ds
    X86_AT(c, 0x11e03u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e04  inc edx
    X86_AT(c, 0x11e04u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e05  mov al, 7
    X86_AT(c, 0x11e05u);
    s8(c, 0, 0x7u);
    // 011e07  out dx, al
    X86_AT(c, 0x11e07u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e08  push ds
    X86_AT(c, 0x11e08u);
    push32(c, c.sreg[3]);
    // 011e09  pop ds
    X86_AT(c, 0x11e09u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0a  push ds
    X86_AT(c, 0x11e0au);
    push32(c, c.sreg[3]);
    // 011e0b  pop ds
    X86_AT(c, 0x11e0bu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0c  inc edx
    X86_AT(c, 0x11e0cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
L_11e0d:
    X86_TICK(c, 89);
    // 011e0d  xor al, al
    X86_AT(c, 0x11e0du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e0f  out dx, al
    X86_AT(c, 0x11e0fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e10  push ds
    X86_AT(c, 0x11e10u);
    push32(c, c.sreg[3]);
    // 011e11  pop ds
    X86_AT(c, 0x11e11u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e12  push ds
    X86_AT(c, 0x11e12u);
    push32(c, c.sreg[3]);
    // 011e13  pop ds
    X86_AT(c, 0x11e13u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e14  inc edx
    X86_AT(c, 0x11e14u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e15  out dx, al
    X86_AT(c, 0x11e15u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e16  push ds
    X86_AT(c, 0x11e16u);
    push32(c, c.sreg[3]);
    // 011e17  pop ds
    X86_AT(c, 0x11e17u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e18  push ds
    X86_AT(c, 0x11e18u);
    push32(c, c.sreg[3]);
    // 011e19  pop ds
    X86_AT(c, 0x11e19u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e1a  inc edx
    X86_AT(c, 0x11e1au);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e1b  xor al, al
    X86_AT(c, 0x11e1bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e1d  out dx, al
    X86_AT(c, 0x11e1du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e1e  push ds
    X86_AT(c, 0x11e1eu);
    push32(c, c.sreg[3]);
    // 011e1f  pop ds
    X86_AT(c, 0x11e1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e20  push ds
    X86_AT(c, 0x11e20u);
    push32(c, c.sreg[3]);
    // 011e21  pop ds
    X86_AT(c, 0x11e21u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e22  inc ah
    X86_AT(c, 0x11e22u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e24  cmp ah, 0x48
    X86_AT(c, 0x11e24u);
    (void)x86_sub(c, g8(c, 4), 0x48u, 0, 1);
    // 011e27  jne 0x11ddb
    X86_AT(c, 0x11e27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11ddbu); goto L_11ddb; }
    X86_TICK(c, 2);
    // 011e29  xor ah, ah
    X86_AT(c, 0x11e29u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
L_11e2b:
    X86_TICK(c, 52);
    // 011e2b  mov dl, 0xf7
    X86_AT(c, 0x11e2bu);
    s8(c, 2, 0xF7u);
    // 011e2d  mov al, ah
    X86_AT(c, 0x11e2du);
    s8(c, 0, g8(c, 4));
    // 011e2f  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11e2fu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011e36  out dx, al
    X86_AT(c, 0x11e36u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e37  push ds
    X86_AT(c, 0x11e37u);
    push32(c, c.sreg[3]);
    // 011e38  pop ds
    X86_AT(c, 0x11e38u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e39  push ds
    X86_AT(c, 0x11e39u);
    push32(c, c.sreg[3]);
    // 011e3a  pop ds
    X86_AT(c, 0x11e3au);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e3b  mov al, 0xff
    X86_AT(c, 0x11e3bu);
    s8(c, 0, 0xFFu);
    // 011e3d  xor edi, edi
    X86_AT(c, 0x11e3du);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v ^ c.r[7], 4); }
    // 011e3f  mov ch, 0x10
    X86_AT(c, 0x11e3fu);
    s8(c, 5, 0x10u);
    // 011e41  stosb byte ptr es:[edi], al
    X86_AT(c, 0x11e41u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 011e43  inc ah
    X86_AT(c, 0x11e43u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e45  cmp ah, 0x10
    X86_AT(c, 0x11e45u);
    (void)x86_sub(c, g8(c, 4), 0x10u, 0, 1);
    // 011e48  jne 0x11e2b
    X86_AT(c, 0x11e48u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11e2bu); goto L_11e2b; }
    X86_TICK(c, 40);
    // 011e4a  pop es
    X86_AT(c, 0x11e4au);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011e4b  popal 
    X86_AT(c, 0x11e4bu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011e4c  xor al, al
    X86_AT(c, 0x11e4cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e4e  ret 
    X86_AT(c, 0x11e4eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11e0du, "ran off the end of a function");
}
void f_00011e0f(X86Cpu& c) {
    goto L_11e0f;
L_11ddb:
    X86_TICK(c, 146);
    // 011ddb  mov dl, 0xf7
    X86_AT(c, 0x11ddbu);
    s8(c, 2, 0xF7u);
    // 011ddd  mov al, ah
    X86_AT(c, 0x11dddu);
    s8(c, 0, g8(c, 4));
    // 011ddf  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11ddfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011de6  out dx, al
    X86_AT(c, 0x11de6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011de7  push ds
    X86_AT(c, 0x11de7u);
    push32(c, c.sreg[3]);
    // 011de8  pop ds
    X86_AT(c, 0x11de8u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011de9  push ds
    X86_AT(c, 0x11de9u);
    push32(c, c.sreg[3]);
    // 011dea  pop ds
    X86_AT(c, 0x11deau);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011deb  mov dl, 0xf0
    X86_AT(c, 0x11debu);
    s8(c, 2, 0xF0u);
    // 011ded  xor al, al
    X86_AT(c, 0x11dedu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011def  out dx, al
    X86_AT(c, 0x11defu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df0  push ds
    X86_AT(c, 0x11df0u);
    push32(c, c.sreg[3]);
    // 011df1  pop ds
    X86_AT(c, 0x11df1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df2  push ds
    X86_AT(c, 0x11df2u);
    push32(c, c.sreg[3]);
    // 011df3  pop ds
    X86_AT(c, 0x11df3u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df4  inc edx
    X86_AT(c, 0x11df4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011df5  mov al, 0x77
    X86_AT(c, 0x11df5u);
    s8(c, 0, 0x77u);
    // 011df7  out dx, al
    X86_AT(c, 0x11df7u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df8  push ds
    X86_AT(c, 0x11df8u);
    push32(c, c.sreg[3]);
    // 011df9  pop ds
    X86_AT(c, 0x11df9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfa  push ds
    X86_AT(c, 0x11dfau);
    push32(c, c.sreg[3]);
    // 011dfb  pop ds
    X86_AT(c, 0x11dfbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfc  inc edx
    X86_AT(c, 0x11dfcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011dfd  mov al, 0x5a
    X86_AT(c, 0x11dfdu);
    s8(c, 0, 0x5Au);
    // 011dff  out dx, al
    X86_AT(c, 0x11dffu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e00  push ds
    X86_AT(c, 0x11e00u);
    push32(c, c.sreg[3]);
    // 011e01  pop ds
    X86_AT(c, 0x11e01u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e02  push ds
    X86_AT(c, 0x11e02u);
    push32(c, c.sreg[3]);
    // 011e03  pop ds
    X86_AT(c, 0x11e03u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e04  inc edx
    X86_AT(c, 0x11e04u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e05  mov al, 7
    X86_AT(c, 0x11e05u);
    s8(c, 0, 0x7u);
    // 011e07  out dx, al
    X86_AT(c, 0x11e07u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e08  push ds
    X86_AT(c, 0x11e08u);
    push32(c, c.sreg[3]);
    // 011e09  pop ds
    X86_AT(c, 0x11e09u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0a  push ds
    X86_AT(c, 0x11e0au);
    push32(c, c.sreg[3]);
    // 011e0b  pop ds
    X86_AT(c, 0x11e0bu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0c  inc edx
    X86_AT(c, 0x11e0cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e0d  xor al, al
    X86_AT(c, 0x11e0du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
L_11e0f:
    X86_TICK(c, 87);
    // 011e0f  out dx, al
    X86_AT(c, 0x11e0fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e10  push ds
    X86_AT(c, 0x11e10u);
    push32(c, c.sreg[3]);
    // 011e11  pop ds
    X86_AT(c, 0x11e11u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e12  push ds
    X86_AT(c, 0x11e12u);
    push32(c, c.sreg[3]);
    // 011e13  pop ds
    X86_AT(c, 0x11e13u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e14  inc edx
    X86_AT(c, 0x11e14u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e15  out dx, al
    X86_AT(c, 0x11e15u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e16  push ds
    X86_AT(c, 0x11e16u);
    push32(c, c.sreg[3]);
    // 011e17  pop ds
    X86_AT(c, 0x11e17u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e18  push ds
    X86_AT(c, 0x11e18u);
    push32(c, c.sreg[3]);
    // 011e19  pop ds
    X86_AT(c, 0x11e19u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e1a  inc edx
    X86_AT(c, 0x11e1au);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e1b  xor al, al
    X86_AT(c, 0x11e1bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e1d  out dx, al
    X86_AT(c, 0x11e1du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e1e  push ds
    X86_AT(c, 0x11e1eu);
    push32(c, c.sreg[3]);
    // 011e1f  pop ds
    X86_AT(c, 0x11e1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e20  push ds
    X86_AT(c, 0x11e20u);
    push32(c, c.sreg[3]);
    // 011e21  pop ds
    X86_AT(c, 0x11e21u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e22  inc ah
    X86_AT(c, 0x11e22u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e24  cmp ah, 0x48
    X86_AT(c, 0x11e24u);
    (void)x86_sub(c, g8(c, 4), 0x48u, 0, 1);
    // 011e27  jne 0x11ddb
    X86_AT(c, 0x11e27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11ddbu); goto L_11ddb; }
    X86_TICK(c, 2);
    // 011e29  xor ah, ah
    X86_AT(c, 0x11e29u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
L_11e2b:
    X86_TICK(c, 52);
    // 011e2b  mov dl, 0xf7
    X86_AT(c, 0x11e2bu);
    s8(c, 2, 0xF7u);
    // 011e2d  mov al, ah
    X86_AT(c, 0x11e2du);
    s8(c, 0, g8(c, 4));
    // 011e2f  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11e2fu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011e36  out dx, al
    X86_AT(c, 0x11e36u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e37  push ds
    X86_AT(c, 0x11e37u);
    push32(c, c.sreg[3]);
    // 011e38  pop ds
    X86_AT(c, 0x11e38u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e39  push ds
    X86_AT(c, 0x11e39u);
    push32(c, c.sreg[3]);
    // 011e3a  pop ds
    X86_AT(c, 0x11e3au);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e3b  mov al, 0xff
    X86_AT(c, 0x11e3bu);
    s8(c, 0, 0xFFu);
    // 011e3d  xor edi, edi
    X86_AT(c, 0x11e3du);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v ^ c.r[7], 4); }
    // 011e3f  mov ch, 0x10
    X86_AT(c, 0x11e3fu);
    s8(c, 5, 0x10u);
    // 011e41  stosb byte ptr es:[edi], al
    X86_AT(c, 0x11e41u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 011e43  inc ah
    X86_AT(c, 0x11e43u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e45  cmp ah, 0x10
    X86_AT(c, 0x11e45u);
    (void)x86_sub(c, g8(c, 4), 0x10u, 0, 1);
    // 011e48  jne 0x11e2b
    X86_AT(c, 0x11e48u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11e2bu); goto L_11e2b; }
    X86_TICK(c, 40);
    // 011e4a  pop es
    X86_AT(c, 0x11e4au);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011e4b  popal 
    X86_AT(c, 0x11e4bu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011e4c  xor al, al
    X86_AT(c, 0x11e4cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e4e  ret 
    X86_AT(c, 0x11e4eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11e0fu, "ran off the end of a function");
}
void f_00011e10(X86Cpu& c) {
    goto L_11e10;
L_11ddb:
    X86_TICK(c, 158);
    // 011ddb  mov dl, 0xf7
    X86_AT(c, 0x11ddbu);
    s8(c, 2, 0xF7u);
    // 011ddd  mov al, ah
    X86_AT(c, 0x11dddu);
    s8(c, 0, g8(c, 4));
    // 011ddf  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11ddfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011de6  out dx, al
    X86_AT(c, 0x11de6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011de7  push ds
    X86_AT(c, 0x11de7u);
    push32(c, c.sreg[3]);
    // 011de8  pop ds
    X86_AT(c, 0x11de8u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011de9  push ds
    X86_AT(c, 0x11de9u);
    push32(c, c.sreg[3]);
    // 011dea  pop ds
    X86_AT(c, 0x11deau);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011deb  mov dl, 0xf0
    X86_AT(c, 0x11debu);
    s8(c, 2, 0xF0u);
    // 011ded  xor al, al
    X86_AT(c, 0x11dedu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011def  out dx, al
    X86_AT(c, 0x11defu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df0  push ds
    X86_AT(c, 0x11df0u);
    push32(c, c.sreg[3]);
    // 011df1  pop ds
    X86_AT(c, 0x11df1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df2  push ds
    X86_AT(c, 0x11df2u);
    push32(c, c.sreg[3]);
    // 011df3  pop ds
    X86_AT(c, 0x11df3u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011df4  inc edx
    X86_AT(c, 0x11df4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011df5  mov al, 0x77
    X86_AT(c, 0x11df5u);
    s8(c, 0, 0x77u);
    // 011df7  out dx, al
    X86_AT(c, 0x11df7u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011df8  push ds
    X86_AT(c, 0x11df8u);
    push32(c, c.sreg[3]);
    // 011df9  pop ds
    X86_AT(c, 0x11df9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfa  push ds
    X86_AT(c, 0x11dfau);
    push32(c, c.sreg[3]);
    // 011dfb  pop ds
    X86_AT(c, 0x11dfbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dfc  inc edx
    X86_AT(c, 0x11dfcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011dfd  mov al, 0x5a
    X86_AT(c, 0x11dfdu);
    s8(c, 0, 0x5Au);
    // 011dff  out dx, al
    X86_AT(c, 0x11dffu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e00  push ds
    X86_AT(c, 0x11e00u);
    push32(c, c.sreg[3]);
    // 011e01  pop ds
    X86_AT(c, 0x11e01u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e02  push ds
    X86_AT(c, 0x11e02u);
    push32(c, c.sreg[3]);
    // 011e03  pop ds
    X86_AT(c, 0x11e03u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e04  inc edx
    X86_AT(c, 0x11e04u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e05  mov al, 7
    X86_AT(c, 0x11e05u);
    s8(c, 0, 0x7u);
    // 011e07  out dx, al
    X86_AT(c, 0x11e07u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e08  push ds
    X86_AT(c, 0x11e08u);
    push32(c, c.sreg[3]);
    // 011e09  pop ds
    X86_AT(c, 0x11e09u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0a  push ds
    X86_AT(c, 0x11e0au);
    push32(c, c.sreg[3]);
    // 011e0b  pop ds
    X86_AT(c, 0x11e0bu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e0c  inc edx
    X86_AT(c, 0x11e0cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e0d  xor al, al
    X86_AT(c, 0x11e0du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e0f  out dx, al
    X86_AT(c, 0x11e0fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
L_11e10:
    X86_TICK(c, 75);
    // 011e10  push ds
    X86_AT(c, 0x11e10u);
    push32(c, c.sreg[3]);
    // 011e11  pop ds
    X86_AT(c, 0x11e11u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e12  push ds
    X86_AT(c, 0x11e12u);
    push32(c, c.sreg[3]);
    // 011e13  pop ds
    X86_AT(c, 0x11e13u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e14  inc edx
    X86_AT(c, 0x11e14u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e15  out dx, al
    X86_AT(c, 0x11e15u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e16  push ds
    X86_AT(c, 0x11e16u);
    push32(c, c.sreg[3]);
    // 011e17  pop ds
    X86_AT(c, 0x11e17u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e18  push ds
    X86_AT(c, 0x11e18u);
    push32(c, c.sreg[3]);
    // 011e19  pop ds
    X86_AT(c, 0x11e19u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e1a  inc edx
    X86_AT(c, 0x11e1au);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 011e1b  xor al, al
    X86_AT(c, 0x11e1bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e1d  out dx, al
    X86_AT(c, 0x11e1du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e1e  push ds
    X86_AT(c, 0x11e1eu);
    push32(c, c.sreg[3]);
    // 011e1f  pop ds
    X86_AT(c, 0x11e1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e20  push ds
    X86_AT(c, 0x11e20u);
    push32(c, c.sreg[3]);
    // 011e21  pop ds
    X86_AT(c, 0x11e21u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e22  inc ah
    X86_AT(c, 0x11e22u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e24  cmp ah, 0x48
    X86_AT(c, 0x11e24u);
    (void)x86_sub(c, g8(c, 4), 0x48u, 0, 1);
    // 011e27  jne 0x11ddb
    X86_AT(c, 0x11e27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11ddbu); goto L_11ddb; }
    X86_TICK(c, 2);
    // 011e29  xor ah, ah
    X86_AT(c, 0x11e29u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
L_11e2b:
    X86_TICK(c, 52);
    // 011e2b  mov dl, 0xf7
    X86_AT(c, 0x11e2bu);
    s8(c, 2, 0xF7u);
    // 011e2d  mov al, ah
    X86_AT(c, 0x11e2du);
    s8(c, 0, g8(c, 4));
    // 011e2f  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11e2fu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 011e36  out dx, al
    X86_AT(c, 0x11e36u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011e37  push ds
    X86_AT(c, 0x11e37u);
    push32(c, c.sreg[3]);
    // 011e38  pop ds
    X86_AT(c, 0x11e38u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e39  push ds
    X86_AT(c, 0x11e39u);
    push32(c, c.sreg[3]);
    // 011e3a  pop ds
    X86_AT(c, 0x11e3au);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e3b  mov al, 0xff
    X86_AT(c, 0x11e3bu);
    s8(c, 0, 0xFFu);
    // 011e3d  xor edi, edi
    X86_AT(c, 0x11e3du);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v ^ c.r[7], 4); }
    // 011e3f  mov ch, 0x10
    X86_AT(c, 0x11e3fu);
    s8(c, 5, 0x10u);
    // 011e41  stosb byte ptr es:[edi], al
    X86_AT(c, 0x11e41u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 011e43  inc ah
    X86_AT(c, 0x11e43u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 011e45  cmp ah, 0x10
    X86_AT(c, 0x11e45u);
    (void)x86_sub(c, g8(c, 4), 0x10u, 0, 1);
    // 011e48  jne 0x11e2b
    X86_AT(c, 0x11e48u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11e2bu); goto L_11e2b; }
    X86_TICK(c, 40);
    // 011e4a  pop es
    X86_AT(c, 0x11e4au);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011e4b  popal 
    X86_AT(c, 0x11e4bu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011e4c  xor al, al
    X86_AT(c, 0x11e4cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e4e  ret 
    X86_AT(c, 0x11e4eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11e10u, "ran off the end of a function");
}
}
