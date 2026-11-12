#include "p_tbios_funcs.h"
namespace p_tbios {
void f_00011dcc(X86Cpu& c) {
    X86_TICK(c, 34);
    // 011dcc  mov al, 0xff
    X86_AT(c, 0x11dccu);
    s8(c, 0, 0xFFu);
    // 011dce  out dx, al
    X86_AT(c, 0x11dceu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011dcf  push ds
    X86_AT(c, 0x11dcfu);
    push32(c, c.sreg[3]);
    // 011dd0  pop ds
    X86_AT(c, 0x11dd0u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dd1  push ds
    X86_AT(c, 0x11dd1u);
    push32(c, c.sreg[3]);
    // 011dd2  pop ds
    X86_AT(c, 0x11dd2u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dd3  push 0x140
    X86_AT(c, 0x11dd3u);
    { uint32_t v = 0x140u; push32(c, v); }
    // 011dd8  pop es
    X86_AT(c, 0x11dd8u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011dd9  mov ah, 0x40
    X86_AT(c, 0x11dd9u);
    s8(c, 4, 0x40u);
L_11ddb:
    X86_TICK(c, 233);
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
    x86_fault(c, 0x11dccu, "ran off the end of a function");
}
void f_00011dce(X86Cpu& c) {
    X86_TICK(c, 32);
    // 011dce  out dx, al
    X86_AT(c, 0x11dceu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011dcf  push ds
    X86_AT(c, 0x11dcfu);
    push32(c, c.sreg[3]);
    // 011dd0  pop ds
    X86_AT(c, 0x11dd0u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dd1  push ds
    X86_AT(c, 0x11dd1u);
    push32(c, c.sreg[3]);
    // 011dd2  pop ds
    X86_AT(c, 0x11dd2u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dd3  push 0x140
    X86_AT(c, 0x11dd3u);
    { uint32_t v = 0x140u; push32(c, v); }
    // 011dd8  pop es
    X86_AT(c, 0x11dd8u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011dd9  mov ah, 0x40
    X86_AT(c, 0x11dd9u);
    s8(c, 4, 0x40u);
L_11ddb:
    X86_TICK(c, 233);
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
    x86_fault(c, 0x11dceu, "ran off the end of a function");
}
void f_00011dcf(X86Cpu& c) {
    X86_TICK(c, 20);
    // 011dcf  push ds
    X86_AT(c, 0x11dcfu);
    push32(c, c.sreg[3]);
    // 011dd0  pop ds
    X86_AT(c, 0x11dd0u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dd1  push ds
    X86_AT(c, 0x11dd1u);
    push32(c, c.sreg[3]);
    // 011dd2  pop ds
    X86_AT(c, 0x11dd2u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dd3  push 0x140
    X86_AT(c, 0x11dd3u);
    { uint32_t v = 0x140u; push32(c, v); }
    // 011dd8  pop es
    X86_AT(c, 0x11dd8u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011dd9  mov ah, 0x40
    X86_AT(c, 0x11dd9u);
    s8(c, 4, 0x40u);
L_11ddb:
    X86_TICK(c, 233);
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
    x86_fault(c, 0x11dcfu, "ran off the end of a function");
}
void f_00011dd0(X86Cpu& c) {
    X86_TICK(c, 18);
    // 011dd0  pop ds
    X86_AT(c, 0x11dd0u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dd1  push ds
    X86_AT(c, 0x11dd1u);
    push32(c, c.sreg[3]);
    // 011dd2  pop ds
    X86_AT(c, 0x11dd2u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dd3  push 0x140
    X86_AT(c, 0x11dd3u);
    { uint32_t v = 0x140u; push32(c, v); }
    // 011dd8  pop es
    X86_AT(c, 0x11dd8u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011dd9  mov ah, 0x40
    X86_AT(c, 0x11dd9u);
    s8(c, 4, 0x40u);
L_11ddb:
    X86_TICK(c, 233);
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
    x86_fault(c, 0x11dd0u, "ran off the end of a function");
}
void f_00011dd1(X86Cpu& c) {
    X86_TICK(c, 14);
    // 011dd1  push ds
    X86_AT(c, 0x11dd1u);
    push32(c, c.sreg[3]);
    // 011dd2  pop ds
    X86_AT(c, 0x11dd2u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dd3  push 0x140
    X86_AT(c, 0x11dd3u);
    { uint32_t v = 0x140u; push32(c, v); }
    // 011dd8  pop es
    X86_AT(c, 0x11dd8u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011dd9  mov ah, 0x40
    X86_AT(c, 0x11dd9u);
    s8(c, 4, 0x40u);
L_11ddb:
    X86_TICK(c, 233);
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
    x86_fault(c, 0x11dd1u, "ran off the end of a function");
}
void f_00011dd2(X86Cpu& c) {
    X86_TICK(c, 12);
    // 011dd2  pop ds
    X86_AT(c, 0x11dd2u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dd3  push 0x140
    X86_AT(c, 0x11dd3u);
    { uint32_t v = 0x140u; push32(c, v); }
    // 011dd8  pop es
    X86_AT(c, 0x11dd8u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011dd9  mov ah, 0x40
    X86_AT(c, 0x11dd9u);
    s8(c, 4, 0x40u);
L_11ddb:
    X86_TICK(c, 233);
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
    x86_fault(c, 0x11dd2u, "ran off the end of a function");
}
void f_00011dd3(X86Cpu& c) {
    X86_TICK(c, 8);
    // 011dd3  push 0x140
    X86_AT(c, 0x11dd3u);
    { uint32_t v = 0x140u; push32(c, v); }
    // 011dd8  pop es
    X86_AT(c, 0x11dd8u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011dd9  mov ah, 0x40
    X86_AT(c, 0x11dd9u);
    s8(c, 4, 0x40u);
L_11ddb:
    X86_TICK(c, 233);
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
    x86_fault(c, 0x11dd3u, "ran off the end of a function");
}
void f_00011dd8(X86Cpu& c) {
    X86_TICK(c, 6);
    // 011dd8  pop es
    X86_AT(c, 0x11dd8u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011dd9  mov ah, 0x40
    X86_AT(c, 0x11dd9u);
    s8(c, 4, 0x40u);
L_11ddb:
    X86_TICK(c, 233);
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
    x86_fault(c, 0x11dd8u, "ran off the end of a function");
}
void f_00011dd9(X86Cpu& c) {
    X86_TICK(c, 2);
    // 011dd9  mov ah, 0x40
    X86_AT(c, 0x11dd9u);
    s8(c, 4, 0x40u);
L_11ddb:
    X86_TICK(c, 233);
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
    x86_fault(c, 0x11dd9u, "ran off the end of a function");
}
void f_00011ddb(X86Cpu& c) {
L_11ddb:
    X86_TICK(c, 233);
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
    x86_fault(c, 0x11ddbu, "ran off the end of a function");
}
void f_00011ddd(X86Cpu& c) {
    goto L_11ddd;
L_11ddb:
    X86_TICK(c, 2);
    // 011ddb  mov dl, 0xf7
    X86_AT(c, 0x11ddbu);
    s8(c, 2, 0xF7u);
L_11ddd:
    X86_TICK(c, 231);
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
    x86_fault(c, 0x11dddu, "ran off the end of a function");
}
void f_00011ddf(X86Cpu& c) {
    goto L_11ddf;
L_11ddb:
    X86_TICK(c, 4);
    // 011ddb  mov dl, 0xf7
    X86_AT(c, 0x11ddbu);
    s8(c, 2, 0xF7u);
    // 011ddd  mov al, ah
    X86_AT(c, 0x11dddu);
    s8(c, 0, g8(c, 4));
L_11ddf:
    X86_TICK(c, 229);
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
    x86_fault(c, 0x11ddfu, "ran off the end of a function");
}
void f_00011de6(X86Cpu& c) {
    goto L_11de6;
L_11ddb:
    X86_TICK(c, 6);
    // 011ddb  mov dl, 0xf7
    X86_AT(c, 0x11ddbu);
    s8(c, 2, 0xF7u);
    // 011ddd  mov al, ah
    X86_AT(c, 0x11dddu);
    s8(c, 0, g8(c, 4));
    // 011ddf  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x11ddfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
L_11de6:
    X86_TICK(c, 227);
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
    x86_fault(c, 0x11de6u, "ran off the end of a function");
}
void f_00011de7(X86Cpu& c) {
    goto L_11de7;
L_11ddb:
    X86_TICK(c, 18);
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
L_11de7:
    X86_TICK(c, 215);
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
    x86_fault(c, 0x11de7u, "ran off the end of a function");
}
void f_00011de8(X86Cpu& c) {
    goto L_11de8;
L_11ddb:
    X86_TICK(c, 20);
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
L_11de8:
    X86_TICK(c, 213);
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
    x86_fault(c, 0x11de8u, "ran off the end of a function");
}
void f_00011de9(X86Cpu& c) {
    goto L_11de9;
L_11ddb:
    X86_TICK(c, 24);
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
L_11de9:
    X86_TICK(c, 209);
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
    x86_fault(c, 0x11de9u, "ran off the end of a function");
}
void f_00011dea(X86Cpu& c) {
    goto L_11dea;
L_11ddb:
    X86_TICK(c, 26);
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
L_11dea:
    X86_TICK(c, 207);
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
    x86_fault(c, 0x11deau, "ran off the end of a function");
}
void f_00011deb(X86Cpu& c) {
    goto L_11deb;
L_11ddb:
    X86_TICK(c, 30);
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
L_11deb:
    X86_TICK(c, 203);
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
    x86_fault(c, 0x11debu, "ran off the end of a function");
}
void f_00011ded(X86Cpu& c) {
    goto L_11ded;
L_11ddb:
    X86_TICK(c, 32);
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
L_11ded:
    X86_TICK(c, 201);
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
    x86_fault(c, 0x11dedu, "ran off the end of a function");
}
void f_00011def(X86Cpu& c) {
    goto L_11def;
L_11ddb:
    X86_TICK(c, 34);
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
L_11def:
    X86_TICK(c, 199);
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
    x86_fault(c, 0x11defu, "ran off the end of a function");
}
void f_00011df0(X86Cpu& c) {
    goto L_11df0;
L_11ddb:
    X86_TICK(c, 46);
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
L_11df0:
    X86_TICK(c, 187);
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
    x86_fault(c, 0x11df0u, "ran off the end of a function");
}
void f_00011df1(X86Cpu& c) {
    goto L_11df1;
L_11ddb:
    X86_TICK(c, 48);
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
L_11df1:
    X86_TICK(c, 185);
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
    x86_fault(c, 0x11df1u, "ran off the end of a function");
}
void f_00011df2(X86Cpu& c) {
    goto L_11df2;
L_11ddb:
    X86_TICK(c, 52);
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
L_11df2:
    X86_TICK(c, 181);
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
    x86_fault(c, 0x11df2u, "ran off the end of a function");
}
void f_00011df3(X86Cpu& c) {
    goto L_11df3;
L_11ddb:
    X86_TICK(c, 54);
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
L_11df3:
    X86_TICK(c, 179);
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
    x86_fault(c, 0x11df3u, "ran off the end of a function");
}
}
