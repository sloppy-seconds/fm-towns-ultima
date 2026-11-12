#include "p_tbios_funcs.h"
namespace p_tbios {
void f_00011e11(X86Cpu& c) {
    goto L_11e11;
L_11ddb:
    X86_TICK(c, 160);
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
    // 011e10  push ds
    X86_AT(c, 0x11e10u);
    push32(c, c.sreg[3]);
L_11e11:
    X86_TICK(c, 73);
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
    x86_fault(c, 0x11e11u, "ran off the end of a function");
}
void f_00011e12(X86Cpu& c) {
    goto L_11e12;
L_11ddb:
    X86_TICK(c, 164);
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
    // 011e10  push ds
    X86_AT(c, 0x11e10u);
    push32(c, c.sreg[3]);
    // 011e11  pop ds
    X86_AT(c, 0x11e11u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_11e12:
    X86_TICK(c, 69);
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
    x86_fault(c, 0x11e12u, "ran off the end of a function");
}
void f_00011e13(X86Cpu& c) {
    goto L_11e13;
L_11ddb:
    X86_TICK(c, 166);
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
    // 011e10  push ds
    X86_AT(c, 0x11e10u);
    push32(c, c.sreg[3]);
    // 011e11  pop ds
    X86_AT(c, 0x11e11u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011e12  push ds
    X86_AT(c, 0x11e12u);
    push32(c, c.sreg[3]);
L_11e13:
    X86_TICK(c, 67);
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
    x86_fault(c, 0x11e13u, "ran off the end of a function");
}
void f_00011e14(X86Cpu& c) {
    goto L_11e14;
L_11ddb:
    X86_TICK(c, 170);
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
L_11e14:
    X86_TICK(c, 63);
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
    x86_fault(c, 0x11e14u, "ran off the end of a function");
}
void f_00011e15(X86Cpu& c) {
    goto L_11e15;
L_11ddb:
    X86_TICK(c, 172);
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
L_11e15:
    X86_TICK(c, 61);
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
    x86_fault(c, 0x11e15u, "ran off the end of a function");
}
void f_00011e16(X86Cpu& c) {
    goto L_11e16;
L_11ddb:
    X86_TICK(c, 184);
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
L_11e16:
    X86_TICK(c, 49);
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
    x86_fault(c, 0x11e16u, "ran off the end of a function");
}
void f_00011e17(X86Cpu& c) {
    goto L_11e17;
L_11ddb:
    X86_TICK(c, 186);
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
L_11e17:
    X86_TICK(c, 47);
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
    x86_fault(c, 0x11e17u, "ran off the end of a function");
}
void f_00011e18(X86Cpu& c) {
    goto L_11e18;
L_11ddb:
    X86_TICK(c, 190);
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
L_11e18:
    X86_TICK(c, 43);
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
    x86_fault(c, 0x11e18u, "ran off the end of a function");
}
void f_00011e19(X86Cpu& c) {
    goto L_11e19;
L_11ddb:
    X86_TICK(c, 192);
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
L_11e19:
    X86_TICK(c, 41);
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
    x86_fault(c, 0x11e19u, "ran off the end of a function");
}
void f_00011e1a(X86Cpu& c) {
    goto L_11e1a;
L_11ddb:
    X86_TICK(c, 196);
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
L_11e1a:
    X86_TICK(c, 37);
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
    x86_fault(c, 0x11e1au, "ran off the end of a function");
}
void f_00011e1b(X86Cpu& c) {
    goto L_11e1b;
L_11ddb:
    X86_TICK(c, 198);
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
L_11e1b:
    X86_TICK(c, 35);
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
    x86_fault(c, 0x11e1bu, "ran off the end of a function");
}
void f_00011e1d(X86Cpu& c) {
    goto L_11e1d;
L_11ddb:
    X86_TICK(c, 200);
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
L_11e1d:
    X86_TICK(c, 33);
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
    x86_fault(c, 0x11e1du, "ran off the end of a function");
}
void f_00011e1e(X86Cpu& c) {
    goto L_11e1e;
L_11ddb:
    X86_TICK(c, 212);
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
L_11e1e:
    X86_TICK(c, 21);
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
    x86_fault(c, 0x11e1eu, "ran off the end of a function");
}
void f_00011e1f(X86Cpu& c) {
    goto L_11e1f;
L_11ddb:
    X86_TICK(c, 214);
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
L_11e1f:
    X86_TICK(c, 19);
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
    x86_fault(c, 0x11e1fu, "ran off the end of a function");
}
void f_00011e20(X86Cpu& c) {
    goto L_11e20;
L_11ddb:
    X86_TICK(c, 218);
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
L_11e20:
    X86_TICK(c, 15);
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
    x86_fault(c, 0x11e20u, "ran off the end of a function");
}
void f_00011e21(X86Cpu& c) {
    goto L_11e21;
L_11ddb:
    X86_TICK(c, 220);
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
L_11e21:
    X86_TICK(c, 13);
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
    x86_fault(c, 0x11e21u, "ran off the end of a function");
}
void f_00011e22(X86Cpu& c) {
    goto L_11e22;
L_11ddb:
    X86_TICK(c, 224);
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
L_11e22:
    X86_TICK(c, 9);
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
    x86_fault(c, 0x11e22u, "ran off the end of a function");
}
void f_00011e24(X86Cpu& c) {
    goto L_11e24;
L_11ddb:
    X86_TICK(c, 226);
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
L_11e24:
    X86_TICK(c, 7);
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
    x86_fault(c, 0x11e24u, "ran off the end of a function");
}
void f_00011e27(X86Cpu& c) {
    goto L_11e27;
L_11ddb:
    X86_TICK(c, 228);
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
L_11e27:
    X86_TICK(c, 5);
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
    x86_fault(c, 0x11e27u, "ran off the end of a function");
}
void f_00011e29(X86Cpu& c) {
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
    x86_fault(c, 0x11e29u, "ran off the end of a function");
}
void f_00011e2b(X86Cpu& c) {
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
    x86_fault(c, 0x11e2bu, "ran off the end of a function");
}
void f_00011e2d(X86Cpu& c) {
    goto L_11e2d;
L_11e2b:
    X86_TICK(c, 2);
    // 011e2b  mov dl, 0xf7
    X86_AT(c, 0x11e2bu);
    s8(c, 2, 0xF7u);
L_11e2d:
    X86_TICK(c, 50);
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
    x86_fault(c, 0x11e2du, "ran off the end of a function");
}
void f_00011e2f(X86Cpu& c) {
    goto L_11e2f;
L_11e2b:
    X86_TICK(c, 4);
    // 011e2b  mov dl, 0xf7
    X86_AT(c, 0x11e2bu);
    s8(c, 2, 0xF7u);
    // 011e2d  mov al, ah
    X86_AT(c, 0x11e2du);
    s8(c, 0, g8(c, 4));
L_11e2f:
    X86_TICK(c, 48);
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
    x86_fault(c, 0x11e2fu, "ran off the end of a function");
}
void f_00011e36(X86Cpu& c) {
    goto L_11e36;
L_11e2b:
    X86_TICK(c, 6);
    // 011e2b  mov dl, 0xf7
    X86_AT(c, 0x11e2bu);
    s8(c, 2, 0xF7u);
    // 011e2d  mov al, ah
    X86_AT(c, 0x11e2du);
    s8(c, 0, g8(c, 4));
    // 011e2f  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11e2fu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
L_11e36:
    X86_TICK(c, 46);
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
    x86_fault(c, 0x11e36u, "ran off the end of a function");
}
void f_00011e37(X86Cpu& c) {
    goto L_11e37;
L_11e2b:
    X86_TICK(c, 18);
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
L_11e37:
    X86_TICK(c, 34);
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
    x86_fault(c, 0x11e37u, "ran off the end of a function");
}
void f_00011e38(X86Cpu& c) {
    goto L_11e38;
L_11e2b:
    X86_TICK(c, 20);
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
L_11e38:
    X86_TICK(c, 32);
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
    x86_fault(c, 0x11e38u, "ran off the end of a function");
}
void f_00011e39(X86Cpu& c) {
    goto L_11e39;
L_11e2b:
    X86_TICK(c, 24);
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
L_11e39:
    X86_TICK(c, 28);
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
    x86_fault(c, 0x11e39u, "ran off the end of a function");
}
void f_00011e3a(X86Cpu& c) {
    goto L_11e3a;
L_11e2b:
    X86_TICK(c, 26);
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
L_11e3a:
    X86_TICK(c, 26);
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
    x86_fault(c, 0x11e3au, "ran off the end of a function");
}
void f_00011e3b(X86Cpu& c) {
    goto L_11e3b;
L_11e2b:
    X86_TICK(c, 30);
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
L_11e3b:
    X86_TICK(c, 22);
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
    x86_fault(c, 0x11e3bu, "ran off the end of a function");
}
void f_00011e3d(X86Cpu& c) {
    goto L_11e3d;
L_11e2b:
    X86_TICK(c, 32);
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
L_11e3d:
    X86_TICK(c, 20);
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
    x86_fault(c, 0x11e3du, "ran off the end of a function");
}
void f_00011e3f(X86Cpu& c) {
    goto L_11e3f;
L_11e2b:
    X86_TICK(c, 34);
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
L_11e3f:
    X86_TICK(c, 18);
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
    x86_fault(c, 0x11e3fu, "ran off the end of a function");
}
void f_00011e41(X86Cpu& c) {
    goto L_11e41;
L_11e2b:
    X86_TICK(c, 36);
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
L_11e41:
    X86_TICK(c, 16);
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
    x86_fault(c, 0x11e41u, "ran off the end of a function");
}
void f_00011e43(X86Cpu& c) {
    goto L_11e43;
L_11e2b:
    X86_TICK(c, 43);
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
L_11e43:
    X86_TICK(c, 9);
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
    x86_fault(c, 0x11e43u, "ran off the end of a function");
}
void f_00011e45(X86Cpu& c) {
    goto L_11e45;
L_11e2b:
    X86_TICK(c, 45);
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
L_11e45:
    X86_TICK(c, 7);
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
    x86_fault(c, 0x11e45u, "ran off the end of a function");
}
void f_00011e48(X86Cpu& c) {
    goto L_11e48;
L_11e2b:
    X86_TICK(c, 47);
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
L_11e48:
    X86_TICK(c, 5);
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
    x86_fault(c, 0x11e48u, "ran off the end of a function");
}
void f_00011e4a(X86Cpu& c) {
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
    x86_fault(c, 0x11e4au, "ran off the end of a function");
}
void f_00011e4b(X86Cpu& c) {
    X86_TICK(c, 36);
    // 011e4b  popal 
    X86_AT(c, 0x11e4bu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011e4c  xor al, al
    X86_AT(c, 0x11e4cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e4e  ret 
    X86_AT(c, 0x11e4eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11e4bu, "ran off the end of a function");
}
void f_00011e4c(X86Cpu& c) {
    X86_TICK(c, 12);
    // 011e4c  xor al, al
    X86_AT(c, 0x11e4cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e4e  ret 
    X86_AT(c, 0x11e4eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11e4cu, "ran off the end of a function");
}
void f_00011e4e(X86Cpu& c) {
    X86_TICK(c, 10);
    // 011e4e  ret 
    X86_AT(c, 0x11e4eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11e4eu, "ran off the end of a function");
}
void f_00011e50(X86Cpu& c) {
    X86_TICK(c, 7);
    // 011e50  cmp bl, 0x47
    X86_AT(c, 0x11e50u);
    (void)x86_sub(c, g8(c, 3), 0x47u, 0, 1);
    // 011e53  ja 0x1354c
    X86_AT(c, 0x11e53u);
    if (x86_cc(c, 7)) { goto L_1354c; }
    X86_TICK(c, 7);
    // 011e59  cmp dh, 0x1f
    X86_AT(c, 0x11e59u);
    (void)x86_sub(c, g8(c, 6), 0x1Fu, 0, 1);
    // 011e5c  ja 0x13557
    X86_AT(c, 0x11e5cu);
    if (x86_cc(c, 7)) { goto L_13557; }
    X86_TICK(c, 39);
    // 011e62  push ebx
    X86_AT(c, 0x11e62u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 011e63  push edx
    X86_AT(c, 0x11e63u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 011e64  sub bl, 0x40
    X86_AT(c, 0x11e64u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x40u, 0, 1)); }
    // 011e67  movzx ebx, bl
    X86_AT(c, 0x11e67u);
    c.r[3] = g8(c, 3);
    // 011e6a  movzx edx, dh
    X86_AT(c, 0x11e6au);
    c.r[2] = g8(c, 6);
    // 011e6d  shl edx, 7
    X86_AT(c, 0x11e6du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x7u, 4, w); if (w) c.r[2] = r; }
    // 011e70  lea edx, [edi + edx*1 + 0x2b00]
    X86_AT(c, 0x11e70u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[2] + 0x2B00u);
    // 011e77  mov dword ptr gs:[edi + ebx*4 + 0x1a10], edx
    X86_AT(c, 0x11e77u);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] * 4 + 0x1A10u)), c.r[2]);
    // 011e7f  pop edx
    X86_AT(c, 0x11e7fu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011e80  pop ebx
    X86_AT(c, 0x11e80u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011e81  xor al, al
    X86_AT(c, 0x11e81u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e83  ret 
    X86_AT(c, 0x11e83u);
    c.eip = pop32(c); return;
L_1354c:
    X86_TICK(c, 12);
    // 01354c  mov al, 1
    X86_AT(c, 0x1354cu);
    s8(c, 0, 0x1u);
    // 01354e  ret 
    X86_AT(c, 0x1354eu);
    c.eip = pop32(c); return;
L_13557:
    X86_TICK(c, 12);
    // 013557  mov al, 3
    X86_AT(c, 0x13557u);
    s8(c, 0, 0x3u);
    // 013559  ret 
    X86_AT(c, 0x13559u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11e50u, "ran off the end of a function");
}
void f_00011e53(X86Cpu& c) {
    X86_TICK(c, 5);
    // 011e53  ja 0x1354c
    X86_AT(c, 0x11e53u);
    if (x86_cc(c, 7)) { goto L_1354c; }
    X86_TICK(c, 7);
    // 011e59  cmp dh, 0x1f
    X86_AT(c, 0x11e59u);
    (void)x86_sub(c, g8(c, 6), 0x1Fu, 0, 1);
    // 011e5c  ja 0x13557
    X86_AT(c, 0x11e5cu);
    if (x86_cc(c, 7)) { goto L_13557; }
    X86_TICK(c, 39);
    // 011e62  push ebx
    X86_AT(c, 0x11e62u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 011e63  push edx
    X86_AT(c, 0x11e63u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 011e64  sub bl, 0x40
    X86_AT(c, 0x11e64u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x40u, 0, 1)); }
    // 011e67  movzx ebx, bl
    X86_AT(c, 0x11e67u);
    c.r[3] = g8(c, 3);
    // 011e6a  movzx edx, dh
    X86_AT(c, 0x11e6au);
    c.r[2] = g8(c, 6);
    // 011e6d  shl edx, 7
    X86_AT(c, 0x11e6du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x7u, 4, w); if (w) c.r[2] = r; }
    // 011e70  lea edx, [edi + edx*1 + 0x2b00]
    X86_AT(c, 0x11e70u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[2] + 0x2B00u);
    // 011e77  mov dword ptr gs:[edi + ebx*4 + 0x1a10], edx
    X86_AT(c, 0x11e77u);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] * 4 + 0x1A10u)), c.r[2]);
    // 011e7f  pop edx
    X86_AT(c, 0x11e7fu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011e80  pop ebx
    X86_AT(c, 0x11e80u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011e81  xor al, al
    X86_AT(c, 0x11e81u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e83  ret 
    X86_AT(c, 0x11e83u);
    c.eip = pop32(c); return;
L_1354c:
    X86_TICK(c, 12);
    // 01354c  mov al, 1
    X86_AT(c, 0x1354cu);
    s8(c, 0, 0x1u);
    // 01354e  ret 
    X86_AT(c, 0x1354eu);
    c.eip = pop32(c); return;
L_13557:
    X86_TICK(c, 12);
    // 013557  mov al, 3
    X86_AT(c, 0x13557u);
    s8(c, 0, 0x3u);
    // 013559  ret 
    X86_AT(c, 0x13559u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11e53u, "ran off the end of a function");
}
void f_00011e59(X86Cpu& c) {
    X86_TICK(c, 7);
    // 011e59  cmp dh, 0x1f
    X86_AT(c, 0x11e59u);
    (void)x86_sub(c, g8(c, 6), 0x1Fu, 0, 1);
    // 011e5c  ja 0x13557
    X86_AT(c, 0x11e5cu);
    if (x86_cc(c, 7)) { goto L_13557; }
    X86_TICK(c, 39);
    // 011e62  push ebx
    X86_AT(c, 0x11e62u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 011e63  push edx
    X86_AT(c, 0x11e63u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 011e64  sub bl, 0x40
    X86_AT(c, 0x11e64u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x40u, 0, 1)); }
    // 011e67  movzx ebx, bl
    X86_AT(c, 0x11e67u);
    c.r[3] = g8(c, 3);
    // 011e6a  movzx edx, dh
    X86_AT(c, 0x11e6au);
    c.r[2] = g8(c, 6);
    // 011e6d  shl edx, 7
    X86_AT(c, 0x11e6du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x7u, 4, w); if (w) c.r[2] = r; }
    // 011e70  lea edx, [edi + edx*1 + 0x2b00]
    X86_AT(c, 0x11e70u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[2] + 0x2B00u);
    // 011e77  mov dword ptr gs:[edi + ebx*4 + 0x1a10], edx
    X86_AT(c, 0x11e77u);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] * 4 + 0x1A10u)), c.r[2]);
    // 011e7f  pop edx
    X86_AT(c, 0x11e7fu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011e80  pop ebx
    X86_AT(c, 0x11e80u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011e81  xor al, al
    X86_AT(c, 0x11e81u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e83  ret 
    X86_AT(c, 0x11e83u);
    c.eip = pop32(c); return;
L_13557:
    X86_TICK(c, 12);
    // 013557  mov al, 3
    X86_AT(c, 0x13557u);
    s8(c, 0, 0x3u);
    // 013559  ret 
    X86_AT(c, 0x13559u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11e59u, "ran off the end of a function");
}
}
