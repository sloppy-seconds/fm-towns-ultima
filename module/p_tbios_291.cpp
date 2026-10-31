#include "p_tbios_funcs.h"
namespace p_tbios {
void f_00011d51(X86Cpu& c) {
    X86_TICK(c, 17);
    // 011d51  mov ebp, edi
    X86_AT(c, 0x11d51u);
    c.r[5] = c.r[7];
    // 011d53  add edi, 0x19f4
    X86_AT(c, 0x11d53u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x19F4u, 0, 4); }
    // 011d59  xor eax, eax
    X86_AT(c, 0x11d59u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 011d5b  mov ecx, 0x443
    X86_AT(c, 0x11d5bu);
    c.r[1] = 0x443u;
    // 011d60  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d60u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d62  mov dl, 0x20
    X86_AT(c, 0x11d62u);
    s8(c, 2, 0x20u);
L_11d64:
    X86_TICK(c, 36);
    // 011d64  mov eax, 0x44206f4e
    X86_AT(c, 0x11d64u);
    c.r[0] = 0x44206F4Eu;
    // 011d69  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d69u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d6a  mov eax, 0x21617461
    X86_AT(c, 0x11d6au);
    c.r[0] = 0x21617461u;
    // 011d6f  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d6fu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d70  mov cl, 0x1e
    X86_AT(c, 0x11d70u);
    s8(c, 1, 0x1Eu);
    // 011d72  xor eax, eax
    X86_AT(c, 0x11d72u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 011d74  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d74u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d76  dec dl
    X86_AT(c, 0x11d76u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 011d78  jne 0x11d64
    X86_AT(c, 0x11d78u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11d64u); goto L_11d64; }
    X86_TICK(c, 90);
    // 011d7a  dec eax
    X86_AT(c, 0x11d7au);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 011d7b  mov ch, 1
    X86_AT(c, 0x11d7bu);
    s8(c, 5, 0x1u);
    // 011d7d  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d7du);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d7f  mov eax, 0x6b726f57
    X86_AT(c, 0x11d7fu);
    c.r[0] = 0x6B726F57u;
    // 011d84  mov cl, 0x40
    X86_AT(c, 0x11d84u);
    s8(c, 1, 0x40u);
    // 011d86  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d86u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d88  mov eax, 0x40004000
    X86_AT(c, 0x11d88u);
    c.r[0] = 0x40004000u;
    // 011d8d  lea edi, [ebp + 0x110]
    X86_AT(c, 0x11d8du);
    c.r[7] = (uint32_t)(c.r[5] + 0x110u);
    // 011d93  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d93u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d94  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d94u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d95  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d95u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d96  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d96u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d97  lea edi, [ebp + 0x1af0]
    X86_AT(c, 0x11d97u);
    c.r[7] = (uint32_t)(c.r[5] + 0x1AF0u);
    // 011d9d  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9du);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d9e  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9eu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d9f  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9fu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011da0  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11da0u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011da1  mov edi, ebp
    X86_AT(c, 0x11da1u);
    c.r[7] = c.r[5];
    // 011da3  mov bl, 0x40
    X86_AT(c, 0x11da3u);
    s8(c, 3, 0x40u);
    // 011da5  mov dx, 0x7f
    X86_AT(c, 0x11da5u);
    s16(c, 2, 0x7Fu);
L_11da9:
    X86_TICK(c, 7);
    // 011da9  call 0x11e50
    X86_AT(c, 0x11da9u);
    push32(c, 0x11daeu); f_00011e50(c); X86_RET(c, 0x11daeu);
    X86_TICK(c, 7);
    // 011dae  call 0x12180
    X86_AT(c, 0x11daeu);
    push32(c, 0x11db3u); f_00012180(c); X86_RET(c, 0x11db3u);
    X86_TICK(c, 9);
    // 011db3  inc ebx
    X86_AT(c, 0x11db3u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 011db4  cmp bl, 0x48
    X86_AT(c, 0x11db4u);
    (void)x86_sub(c, g8(c, 3), 0x48u, 0, 1);
    // 011db7  jne 0x11da9
    X86_AT(c, 0x11db7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11da9u); goto L_11da9; }
    X86_TICK(c, 30);
    // 011db9  mov dx, 0x4ea
    X86_AT(c, 0x11db9u);
    s16(c, 2, 0x4EAu);
    // 011dbd  xor al, al
    X86_AT(c, 0x11dbdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011dbf  out dx, al
    X86_AT(c, 0x11dbfu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011dc0  push ds
    X86_AT(c, 0x11dc0u);
    push32(c, c.sreg[3]);
    // 011dc1  pop ds
    X86_AT(c, 0x11dc1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dc2  push ds
    X86_AT(c, 0x11dc2u);
    push32(c, c.sreg[3]);
    // 011dc3  pop ds
    X86_AT(c, 0x11dc3u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dc4  inc edx
    X86_AT(c, 0x11dc4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
L_11dc5:
    X86_TICK(c, 19);
    // 011dc5  in al, dx
    X86_AT(c, 0x11dc5u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011dc6  test al, al
    X86_AT(c, 0x11dc6u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 011dc8  jne 0x11dc5
    X86_AT(c, 0x11dc8u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11dc5u); goto L_11dc5; }
    X86_TICK(c, 36);
    // 011dca  mov dl, 0xf8
    X86_AT(c, 0x11dcau);
    s8(c, 2, 0xF8u);
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
    x86_fault(c, 0x11d51u, "ran off the end of a function");
}
void f_00011d53(X86Cpu& c) {
    X86_TICK(c, 15);
    // 011d53  add edi, 0x19f4
    X86_AT(c, 0x11d53u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x19F4u, 0, 4); }
    // 011d59  xor eax, eax
    X86_AT(c, 0x11d59u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 011d5b  mov ecx, 0x443
    X86_AT(c, 0x11d5bu);
    c.r[1] = 0x443u;
    // 011d60  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d60u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d62  mov dl, 0x20
    X86_AT(c, 0x11d62u);
    s8(c, 2, 0x20u);
L_11d64:
    X86_TICK(c, 36);
    // 011d64  mov eax, 0x44206f4e
    X86_AT(c, 0x11d64u);
    c.r[0] = 0x44206F4Eu;
    // 011d69  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d69u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d6a  mov eax, 0x21617461
    X86_AT(c, 0x11d6au);
    c.r[0] = 0x21617461u;
    // 011d6f  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d6fu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d70  mov cl, 0x1e
    X86_AT(c, 0x11d70u);
    s8(c, 1, 0x1Eu);
    // 011d72  xor eax, eax
    X86_AT(c, 0x11d72u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 011d74  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d74u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d76  dec dl
    X86_AT(c, 0x11d76u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 011d78  jne 0x11d64
    X86_AT(c, 0x11d78u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11d64u); goto L_11d64; }
    X86_TICK(c, 90);
    // 011d7a  dec eax
    X86_AT(c, 0x11d7au);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 011d7b  mov ch, 1
    X86_AT(c, 0x11d7bu);
    s8(c, 5, 0x1u);
    // 011d7d  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d7du);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d7f  mov eax, 0x6b726f57
    X86_AT(c, 0x11d7fu);
    c.r[0] = 0x6B726F57u;
    // 011d84  mov cl, 0x40
    X86_AT(c, 0x11d84u);
    s8(c, 1, 0x40u);
    // 011d86  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d86u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d88  mov eax, 0x40004000
    X86_AT(c, 0x11d88u);
    c.r[0] = 0x40004000u;
    // 011d8d  lea edi, [ebp + 0x110]
    X86_AT(c, 0x11d8du);
    c.r[7] = (uint32_t)(c.r[5] + 0x110u);
    // 011d93  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d93u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d94  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d94u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d95  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d95u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d96  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d96u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d97  lea edi, [ebp + 0x1af0]
    X86_AT(c, 0x11d97u);
    c.r[7] = (uint32_t)(c.r[5] + 0x1AF0u);
    // 011d9d  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9du);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d9e  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9eu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d9f  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9fu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011da0  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11da0u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011da1  mov edi, ebp
    X86_AT(c, 0x11da1u);
    c.r[7] = c.r[5];
    // 011da3  mov bl, 0x40
    X86_AT(c, 0x11da3u);
    s8(c, 3, 0x40u);
    // 011da5  mov dx, 0x7f
    X86_AT(c, 0x11da5u);
    s16(c, 2, 0x7Fu);
L_11da9:
    X86_TICK(c, 7);
    // 011da9  call 0x11e50
    X86_AT(c, 0x11da9u);
    push32(c, 0x11daeu); f_00011e50(c); X86_RET(c, 0x11daeu);
    X86_TICK(c, 7);
    // 011dae  call 0x12180
    X86_AT(c, 0x11daeu);
    push32(c, 0x11db3u); f_00012180(c); X86_RET(c, 0x11db3u);
    X86_TICK(c, 9);
    // 011db3  inc ebx
    X86_AT(c, 0x11db3u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 011db4  cmp bl, 0x48
    X86_AT(c, 0x11db4u);
    (void)x86_sub(c, g8(c, 3), 0x48u, 0, 1);
    // 011db7  jne 0x11da9
    X86_AT(c, 0x11db7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11da9u); goto L_11da9; }
    X86_TICK(c, 30);
    // 011db9  mov dx, 0x4ea
    X86_AT(c, 0x11db9u);
    s16(c, 2, 0x4EAu);
    // 011dbd  xor al, al
    X86_AT(c, 0x11dbdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011dbf  out dx, al
    X86_AT(c, 0x11dbfu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011dc0  push ds
    X86_AT(c, 0x11dc0u);
    push32(c, c.sreg[3]);
    // 011dc1  pop ds
    X86_AT(c, 0x11dc1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dc2  push ds
    X86_AT(c, 0x11dc2u);
    push32(c, c.sreg[3]);
    // 011dc3  pop ds
    X86_AT(c, 0x11dc3u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dc4  inc edx
    X86_AT(c, 0x11dc4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
L_11dc5:
    X86_TICK(c, 19);
    // 011dc5  in al, dx
    X86_AT(c, 0x11dc5u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011dc6  test al, al
    X86_AT(c, 0x11dc6u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 011dc8  jne 0x11dc5
    X86_AT(c, 0x11dc8u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11dc5u); goto L_11dc5; }
    X86_TICK(c, 36);
    // 011dca  mov dl, 0xf8
    X86_AT(c, 0x11dcau);
    s8(c, 2, 0xF8u);
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
    x86_fault(c, 0x11d53u, "ran off the end of a function");
}
void f_00011d59(X86Cpu& c) {
    X86_TICK(c, 13);
    // 011d59  xor eax, eax
    X86_AT(c, 0x11d59u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 011d5b  mov ecx, 0x443
    X86_AT(c, 0x11d5bu);
    c.r[1] = 0x443u;
    // 011d60  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d60u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d62  mov dl, 0x20
    X86_AT(c, 0x11d62u);
    s8(c, 2, 0x20u);
L_11d64:
    X86_TICK(c, 36);
    // 011d64  mov eax, 0x44206f4e
    X86_AT(c, 0x11d64u);
    c.r[0] = 0x44206F4Eu;
    // 011d69  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d69u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d6a  mov eax, 0x21617461
    X86_AT(c, 0x11d6au);
    c.r[0] = 0x21617461u;
    // 011d6f  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d6fu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d70  mov cl, 0x1e
    X86_AT(c, 0x11d70u);
    s8(c, 1, 0x1Eu);
    // 011d72  xor eax, eax
    X86_AT(c, 0x11d72u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 011d74  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d74u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d76  dec dl
    X86_AT(c, 0x11d76u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 011d78  jne 0x11d64
    X86_AT(c, 0x11d78u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11d64u); goto L_11d64; }
    X86_TICK(c, 90);
    // 011d7a  dec eax
    X86_AT(c, 0x11d7au);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 011d7b  mov ch, 1
    X86_AT(c, 0x11d7bu);
    s8(c, 5, 0x1u);
    // 011d7d  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d7du);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d7f  mov eax, 0x6b726f57
    X86_AT(c, 0x11d7fu);
    c.r[0] = 0x6B726F57u;
    // 011d84  mov cl, 0x40
    X86_AT(c, 0x11d84u);
    s8(c, 1, 0x40u);
    // 011d86  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d86u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d88  mov eax, 0x40004000
    X86_AT(c, 0x11d88u);
    c.r[0] = 0x40004000u;
    // 011d8d  lea edi, [ebp + 0x110]
    X86_AT(c, 0x11d8du);
    c.r[7] = (uint32_t)(c.r[5] + 0x110u);
    // 011d93  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d93u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d94  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d94u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d95  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d95u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d96  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d96u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d97  lea edi, [ebp + 0x1af0]
    X86_AT(c, 0x11d97u);
    c.r[7] = (uint32_t)(c.r[5] + 0x1AF0u);
    // 011d9d  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9du);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d9e  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9eu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d9f  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9fu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011da0  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11da0u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011da1  mov edi, ebp
    X86_AT(c, 0x11da1u);
    c.r[7] = c.r[5];
    // 011da3  mov bl, 0x40
    X86_AT(c, 0x11da3u);
    s8(c, 3, 0x40u);
    // 011da5  mov dx, 0x7f
    X86_AT(c, 0x11da5u);
    s16(c, 2, 0x7Fu);
L_11da9:
    X86_TICK(c, 7);
    // 011da9  call 0x11e50
    X86_AT(c, 0x11da9u);
    push32(c, 0x11daeu); f_00011e50(c); X86_RET(c, 0x11daeu);
    X86_TICK(c, 7);
    // 011dae  call 0x12180
    X86_AT(c, 0x11daeu);
    push32(c, 0x11db3u); f_00012180(c); X86_RET(c, 0x11db3u);
    X86_TICK(c, 9);
    // 011db3  inc ebx
    X86_AT(c, 0x11db3u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 011db4  cmp bl, 0x48
    X86_AT(c, 0x11db4u);
    (void)x86_sub(c, g8(c, 3), 0x48u, 0, 1);
    // 011db7  jne 0x11da9
    X86_AT(c, 0x11db7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11da9u); goto L_11da9; }
    X86_TICK(c, 30);
    // 011db9  mov dx, 0x4ea
    X86_AT(c, 0x11db9u);
    s16(c, 2, 0x4EAu);
    // 011dbd  xor al, al
    X86_AT(c, 0x11dbdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011dbf  out dx, al
    X86_AT(c, 0x11dbfu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011dc0  push ds
    X86_AT(c, 0x11dc0u);
    push32(c, c.sreg[3]);
    // 011dc1  pop ds
    X86_AT(c, 0x11dc1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dc2  push ds
    X86_AT(c, 0x11dc2u);
    push32(c, c.sreg[3]);
    // 011dc3  pop ds
    X86_AT(c, 0x11dc3u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dc4  inc edx
    X86_AT(c, 0x11dc4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
L_11dc5:
    X86_TICK(c, 19);
    // 011dc5  in al, dx
    X86_AT(c, 0x11dc5u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011dc6  test al, al
    X86_AT(c, 0x11dc6u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 011dc8  jne 0x11dc5
    X86_AT(c, 0x11dc8u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11dc5u); goto L_11dc5; }
    X86_TICK(c, 36);
    // 011dca  mov dl, 0xf8
    X86_AT(c, 0x11dcau);
    s8(c, 2, 0xF8u);
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
    x86_fault(c, 0x11d59u, "ran off the end of a function");
}
void f_00011d5b(X86Cpu& c) {
    X86_TICK(c, 11);
    // 011d5b  mov ecx, 0x443
    X86_AT(c, 0x11d5bu);
    c.r[1] = 0x443u;
    // 011d60  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d60u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d62  mov dl, 0x20
    X86_AT(c, 0x11d62u);
    s8(c, 2, 0x20u);
L_11d64:
    X86_TICK(c, 36);
    // 011d64  mov eax, 0x44206f4e
    X86_AT(c, 0x11d64u);
    c.r[0] = 0x44206F4Eu;
    // 011d69  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d69u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d6a  mov eax, 0x21617461
    X86_AT(c, 0x11d6au);
    c.r[0] = 0x21617461u;
    // 011d6f  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d6fu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d70  mov cl, 0x1e
    X86_AT(c, 0x11d70u);
    s8(c, 1, 0x1Eu);
    // 011d72  xor eax, eax
    X86_AT(c, 0x11d72u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 011d74  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d74u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d76  dec dl
    X86_AT(c, 0x11d76u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 011d78  jne 0x11d64
    X86_AT(c, 0x11d78u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11d64u); goto L_11d64; }
    X86_TICK(c, 90);
    // 011d7a  dec eax
    X86_AT(c, 0x11d7au);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 011d7b  mov ch, 1
    X86_AT(c, 0x11d7bu);
    s8(c, 5, 0x1u);
    // 011d7d  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d7du);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d7f  mov eax, 0x6b726f57
    X86_AT(c, 0x11d7fu);
    c.r[0] = 0x6B726F57u;
    // 011d84  mov cl, 0x40
    X86_AT(c, 0x11d84u);
    s8(c, 1, 0x40u);
    // 011d86  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d86u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d88  mov eax, 0x40004000
    X86_AT(c, 0x11d88u);
    c.r[0] = 0x40004000u;
    // 011d8d  lea edi, [ebp + 0x110]
    X86_AT(c, 0x11d8du);
    c.r[7] = (uint32_t)(c.r[5] + 0x110u);
    // 011d93  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d93u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d94  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d94u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d95  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d95u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d96  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d96u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d97  lea edi, [ebp + 0x1af0]
    X86_AT(c, 0x11d97u);
    c.r[7] = (uint32_t)(c.r[5] + 0x1AF0u);
    // 011d9d  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9du);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d9e  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9eu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d9f  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9fu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011da0  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11da0u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011da1  mov edi, ebp
    X86_AT(c, 0x11da1u);
    c.r[7] = c.r[5];
    // 011da3  mov bl, 0x40
    X86_AT(c, 0x11da3u);
    s8(c, 3, 0x40u);
    // 011da5  mov dx, 0x7f
    X86_AT(c, 0x11da5u);
    s16(c, 2, 0x7Fu);
L_11da9:
    X86_TICK(c, 7);
    // 011da9  call 0x11e50
    X86_AT(c, 0x11da9u);
    push32(c, 0x11daeu); f_00011e50(c); X86_RET(c, 0x11daeu);
    X86_TICK(c, 7);
    // 011dae  call 0x12180
    X86_AT(c, 0x11daeu);
    push32(c, 0x11db3u); f_00012180(c); X86_RET(c, 0x11db3u);
    X86_TICK(c, 9);
    // 011db3  inc ebx
    X86_AT(c, 0x11db3u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 011db4  cmp bl, 0x48
    X86_AT(c, 0x11db4u);
    (void)x86_sub(c, g8(c, 3), 0x48u, 0, 1);
    // 011db7  jne 0x11da9
    X86_AT(c, 0x11db7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11da9u); goto L_11da9; }
    X86_TICK(c, 30);
    // 011db9  mov dx, 0x4ea
    X86_AT(c, 0x11db9u);
    s16(c, 2, 0x4EAu);
    // 011dbd  xor al, al
    X86_AT(c, 0x11dbdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011dbf  out dx, al
    X86_AT(c, 0x11dbfu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011dc0  push ds
    X86_AT(c, 0x11dc0u);
    push32(c, c.sreg[3]);
    // 011dc1  pop ds
    X86_AT(c, 0x11dc1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dc2  push ds
    X86_AT(c, 0x11dc2u);
    push32(c, c.sreg[3]);
    // 011dc3  pop ds
    X86_AT(c, 0x11dc3u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dc4  inc edx
    X86_AT(c, 0x11dc4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
L_11dc5:
    X86_TICK(c, 19);
    // 011dc5  in al, dx
    X86_AT(c, 0x11dc5u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011dc6  test al, al
    X86_AT(c, 0x11dc6u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 011dc8  jne 0x11dc5
    X86_AT(c, 0x11dc8u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11dc5u); goto L_11dc5; }
    X86_TICK(c, 36);
    // 011dca  mov dl, 0xf8
    X86_AT(c, 0x11dcau);
    s8(c, 2, 0xF8u);
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
    x86_fault(c, 0x11d5bu, "ran off the end of a function");
}
void f_00011d60(X86Cpu& c) {
    X86_TICK(c, 9);
    // 011d60  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d60u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d62  mov dl, 0x20
    X86_AT(c, 0x11d62u);
    s8(c, 2, 0x20u);
L_11d64:
    X86_TICK(c, 36);
    // 011d64  mov eax, 0x44206f4e
    X86_AT(c, 0x11d64u);
    c.r[0] = 0x44206F4Eu;
    // 011d69  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d69u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d6a  mov eax, 0x21617461
    X86_AT(c, 0x11d6au);
    c.r[0] = 0x21617461u;
    // 011d6f  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d6fu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d70  mov cl, 0x1e
    X86_AT(c, 0x11d70u);
    s8(c, 1, 0x1Eu);
    // 011d72  xor eax, eax
    X86_AT(c, 0x11d72u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 011d74  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d74u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d76  dec dl
    X86_AT(c, 0x11d76u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 011d78  jne 0x11d64
    X86_AT(c, 0x11d78u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11d64u); goto L_11d64; }
    X86_TICK(c, 90);
    // 011d7a  dec eax
    X86_AT(c, 0x11d7au);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 011d7b  mov ch, 1
    X86_AT(c, 0x11d7bu);
    s8(c, 5, 0x1u);
    // 011d7d  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d7du);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d7f  mov eax, 0x6b726f57
    X86_AT(c, 0x11d7fu);
    c.r[0] = 0x6B726F57u;
    // 011d84  mov cl, 0x40
    X86_AT(c, 0x11d84u);
    s8(c, 1, 0x40u);
    // 011d86  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d86u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d88  mov eax, 0x40004000
    X86_AT(c, 0x11d88u);
    c.r[0] = 0x40004000u;
    // 011d8d  lea edi, [ebp + 0x110]
    X86_AT(c, 0x11d8du);
    c.r[7] = (uint32_t)(c.r[5] + 0x110u);
    // 011d93  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d93u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d94  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d94u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d95  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d95u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d96  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d96u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d97  lea edi, [ebp + 0x1af0]
    X86_AT(c, 0x11d97u);
    c.r[7] = (uint32_t)(c.r[5] + 0x1AF0u);
    // 011d9d  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9du);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d9e  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9eu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d9f  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9fu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011da0  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11da0u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011da1  mov edi, ebp
    X86_AT(c, 0x11da1u);
    c.r[7] = c.r[5];
    // 011da3  mov bl, 0x40
    X86_AT(c, 0x11da3u);
    s8(c, 3, 0x40u);
    // 011da5  mov dx, 0x7f
    X86_AT(c, 0x11da5u);
    s16(c, 2, 0x7Fu);
L_11da9:
    X86_TICK(c, 7);
    // 011da9  call 0x11e50
    X86_AT(c, 0x11da9u);
    push32(c, 0x11daeu); f_00011e50(c); X86_RET(c, 0x11daeu);
    X86_TICK(c, 7);
    // 011dae  call 0x12180
    X86_AT(c, 0x11daeu);
    push32(c, 0x11db3u); f_00012180(c); X86_RET(c, 0x11db3u);
    X86_TICK(c, 9);
    // 011db3  inc ebx
    X86_AT(c, 0x11db3u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 011db4  cmp bl, 0x48
    X86_AT(c, 0x11db4u);
    (void)x86_sub(c, g8(c, 3), 0x48u, 0, 1);
    // 011db7  jne 0x11da9
    X86_AT(c, 0x11db7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11da9u); goto L_11da9; }
    X86_TICK(c, 30);
    // 011db9  mov dx, 0x4ea
    X86_AT(c, 0x11db9u);
    s16(c, 2, 0x4EAu);
    // 011dbd  xor al, al
    X86_AT(c, 0x11dbdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011dbf  out dx, al
    X86_AT(c, 0x11dbfu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011dc0  push ds
    X86_AT(c, 0x11dc0u);
    push32(c, c.sreg[3]);
    // 011dc1  pop ds
    X86_AT(c, 0x11dc1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dc2  push ds
    X86_AT(c, 0x11dc2u);
    push32(c, c.sreg[3]);
    // 011dc3  pop ds
    X86_AT(c, 0x11dc3u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dc4  inc edx
    X86_AT(c, 0x11dc4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
L_11dc5:
    X86_TICK(c, 19);
    // 011dc5  in al, dx
    X86_AT(c, 0x11dc5u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011dc6  test al, al
    X86_AT(c, 0x11dc6u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 011dc8  jne 0x11dc5
    X86_AT(c, 0x11dc8u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11dc5u); goto L_11dc5; }
    X86_TICK(c, 36);
    // 011dca  mov dl, 0xf8
    X86_AT(c, 0x11dcau);
    s8(c, 2, 0xF8u);
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
    x86_fault(c, 0x11d60u, "ran off the end of a function");
}
void f_00011d62(X86Cpu& c) {
    X86_TICK(c, 2);
    // 011d62  mov dl, 0x20
    X86_AT(c, 0x11d62u);
    s8(c, 2, 0x20u);
L_11d64:
    X86_TICK(c, 36);
    // 011d64  mov eax, 0x44206f4e
    X86_AT(c, 0x11d64u);
    c.r[0] = 0x44206F4Eu;
    // 011d69  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d69u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d6a  mov eax, 0x21617461
    X86_AT(c, 0x11d6au);
    c.r[0] = 0x21617461u;
    // 011d6f  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d6fu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d70  mov cl, 0x1e
    X86_AT(c, 0x11d70u);
    s8(c, 1, 0x1Eu);
    // 011d72  xor eax, eax
    X86_AT(c, 0x11d72u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 011d74  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d74u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d76  dec dl
    X86_AT(c, 0x11d76u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 011d78  jne 0x11d64
    X86_AT(c, 0x11d78u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11d64u); goto L_11d64; }
    X86_TICK(c, 90);
    // 011d7a  dec eax
    X86_AT(c, 0x11d7au);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 011d7b  mov ch, 1
    X86_AT(c, 0x11d7bu);
    s8(c, 5, 0x1u);
    // 011d7d  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d7du);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d7f  mov eax, 0x6b726f57
    X86_AT(c, 0x11d7fu);
    c.r[0] = 0x6B726F57u;
    // 011d84  mov cl, 0x40
    X86_AT(c, 0x11d84u);
    s8(c, 1, 0x40u);
    // 011d86  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d86u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d88  mov eax, 0x40004000
    X86_AT(c, 0x11d88u);
    c.r[0] = 0x40004000u;
    // 011d8d  lea edi, [ebp + 0x110]
    X86_AT(c, 0x11d8du);
    c.r[7] = (uint32_t)(c.r[5] + 0x110u);
    // 011d93  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d93u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d94  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d94u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d95  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d95u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d96  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d96u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d97  lea edi, [ebp + 0x1af0]
    X86_AT(c, 0x11d97u);
    c.r[7] = (uint32_t)(c.r[5] + 0x1AF0u);
    // 011d9d  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9du);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d9e  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9eu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d9f  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9fu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011da0  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11da0u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011da1  mov edi, ebp
    X86_AT(c, 0x11da1u);
    c.r[7] = c.r[5];
    // 011da3  mov bl, 0x40
    X86_AT(c, 0x11da3u);
    s8(c, 3, 0x40u);
    // 011da5  mov dx, 0x7f
    X86_AT(c, 0x11da5u);
    s16(c, 2, 0x7Fu);
L_11da9:
    X86_TICK(c, 7);
    // 011da9  call 0x11e50
    X86_AT(c, 0x11da9u);
    push32(c, 0x11daeu); f_00011e50(c); X86_RET(c, 0x11daeu);
    X86_TICK(c, 7);
    // 011dae  call 0x12180
    X86_AT(c, 0x11daeu);
    push32(c, 0x11db3u); f_00012180(c); X86_RET(c, 0x11db3u);
    X86_TICK(c, 9);
    // 011db3  inc ebx
    X86_AT(c, 0x11db3u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 011db4  cmp bl, 0x48
    X86_AT(c, 0x11db4u);
    (void)x86_sub(c, g8(c, 3), 0x48u, 0, 1);
    // 011db7  jne 0x11da9
    X86_AT(c, 0x11db7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11da9u); goto L_11da9; }
    X86_TICK(c, 30);
    // 011db9  mov dx, 0x4ea
    X86_AT(c, 0x11db9u);
    s16(c, 2, 0x4EAu);
    // 011dbd  xor al, al
    X86_AT(c, 0x11dbdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011dbf  out dx, al
    X86_AT(c, 0x11dbfu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011dc0  push ds
    X86_AT(c, 0x11dc0u);
    push32(c, c.sreg[3]);
    // 011dc1  pop ds
    X86_AT(c, 0x11dc1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dc2  push ds
    X86_AT(c, 0x11dc2u);
    push32(c, c.sreg[3]);
    // 011dc3  pop ds
    X86_AT(c, 0x11dc3u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dc4  inc edx
    X86_AT(c, 0x11dc4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
L_11dc5:
    X86_TICK(c, 19);
    // 011dc5  in al, dx
    X86_AT(c, 0x11dc5u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011dc6  test al, al
    X86_AT(c, 0x11dc6u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 011dc8  jne 0x11dc5
    X86_AT(c, 0x11dc8u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11dc5u); goto L_11dc5; }
    X86_TICK(c, 36);
    // 011dca  mov dl, 0xf8
    X86_AT(c, 0x11dcau);
    s8(c, 2, 0xF8u);
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
    x86_fault(c, 0x11d62u, "ran off the end of a function");
}
void f_00011d64(X86Cpu& c) {
L_11d64:
    X86_TICK(c, 36);
    // 011d64  mov eax, 0x44206f4e
    X86_AT(c, 0x11d64u);
    c.r[0] = 0x44206F4Eu;
    // 011d69  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d69u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d6a  mov eax, 0x21617461
    X86_AT(c, 0x11d6au);
    c.r[0] = 0x21617461u;
    // 011d6f  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d6fu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d70  mov cl, 0x1e
    X86_AT(c, 0x11d70u);
    s8(c, 1, 0x1Eu);
    // 011d72  xor eax, eax
    X86_AT(c, 0x11d72u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 011d74  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d74u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d76  dec dl
    X86_AT(c, 0x11d76u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 011d78  jne 0x11d64
    X86_AT(c, 0x11d78u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11d64u); goto L_11d64; }
    X86_TICK(c, 90);
    // 011d7a  dec eax
    X86_AT(c, 0x11d7au);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 011d7b  mov ch, 1
    X86_AT(c, 0x11d7bu);
    s8(c, 5, 0x1u);
    // 011d7d  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d7du);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d7f  mov eax, 0x6b726f57
    X86_AT(c, 0x11d7fu);
    c.r[0] = 0x6B726F57u;
    // 011d84  mov cl, 0x40
    X86_AT(c, 0x11d84u);
    s8(c, 1, 0x40u);
    // 011d86  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d86u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d88  mov eax, 0x40004000
    X86_AT(c, 0x11d88u);
    c.r[0] = 0x40004000u;
    // 011d8d  lea edi, [ebp + 0x110]
    X86_AT(c, 0x11d8du);
    c.r[7] = (uint32_t)(c.r[5] + 0x110u);
    // 011d93  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d93u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d94  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d94u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d95  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d95u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d96  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d96u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d97  lea edi, [ebp + 0x1af0]
    X86_AT(c, 0x11d97u);
    c.r[7] = (uint32_t)(c.r[5] + 0x1AF0u);
    // 011d9d  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9du);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d9e  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9eu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d9f  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9fu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011da0  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11da0u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011da1  mov edi, ebp
    X86_AT(c, 0x11da1u);
    c.r[7] = c.r[5];
    // 011da3  mov bl, 0x40
    X86_AT(c, 0x11da3u);
    s8(c, 3, 0x40u);
    // 011da5  mov dx, 0x7f
    X86_AT(c, 0x11da5u);
    s16(c, 2, 0x7Fu);
L_11da9:
    X86_TICK(c, 7);
    // 011da9  call 0x11e50
    X86_AT(c, 0x11da9u);
    push32(c, 0x11daeu); f_00011e50(c); X86_RET(c, 0x11daeu);
    X86_TICK(c, 7);
    // 011dae  call 0x12180
    X86_AT(c, 0x11daeu);
    push32(c, 0x11db3u); f_00012180(c); X86_RET(c, 0x11db3u);
    X86_TICK(c, 9);
    // 011db3  inc ebx
    X86_AT(c, 0x11db3u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 011db4  cmp bl, 0x48
    X86_AT(c, 0x11db4u);
    (void)x86_sub(c, g8(c, 3), 0x48u, 0, 1);
    // 011db7  jne 0x11da9
    X86_AT(c, 0x11db7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11da9u); goto L_11da9; }
    X86_TICK(c, 30);
    // 011db9  mov dx, 0x4ea
    X86_AT(c, 0x11db9u);
    s16(c, 2, 0x4EAu);
    // 011dbd  xor al, al
    X86_AT(c, 0x11dbdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011dbf  out dx, al
    X86_AT(c, 0x11dbfu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011dc0  push ds
    X86_AT(c, 0x11dc0u);
    push32(c, c.sreg[3]);
    // 011dc1  pop ds
    X86_AT(c, 0x11dc1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dc2  push ds
    X86_AT(c, 0x11dc2u);
    push32(c, c.sreg[3]);
    // 011dc3  pop ds
    X86_AT(c, 0x11dc3u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dc4  inc edx
    X86_AT(c, 0x11dc4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
L_11dc5:
    X86_TICK(c, 19);
    // 011dc5  in al, dx
    X86_AT(c, 0x11dc5u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011dc6  test al, al
    X86_AT(c, 0x11dc6u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 011dc8  jne 0x11dc5
    X86_AT(c, 0x11dc8u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11dc5u); goto L_11dc5; }
    X86_TICK(c, 36);
    // 011dca  mov dl, 0xf8
    X86_AT(c, 0x11dcau);
    s8(c, 2, 0xF8u);
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
    x86_fault(c, 0x11d64u, "ran off the end of a function");
}
void f_00011d69(X86Cpu& c) {
    goto L_11d69;
L_11d64:
    X86_TICK(c, 2);
    // 011d64  mov eax, 0x44206f4e
    X86_AT(c, 0x11d64u);
    c.r[0] = 0x44206F4Eu;
L_11d69:
    X86_TICK(c, 34);
    // 011d69  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d69u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d6a  mov eax, 0x21617461
    X86_AT(c, 0x11d6au);
    c.r[0] = 0x21617461u;
    // 011d6f  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d6fu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d70  mov cl, 0x1e
    X86_AT(c, 0x11d70u);
    s8(c, 1, 0x1Eu);
    // 011d72  xor eax, eax
    X86_AT(c, 0x11d72u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 011d74  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d74u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d76  dec dl
    X86_AT(c, 0x11d76u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 011d78  jne 0x11d64
    X86_AT(c, 0x11d78u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11d64u); goto L_11d64; }
    X86_TICK(c, 90);
    // 011d7a  dec eax
    X86_AT(c, 0x11d7au);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 011d7b  mov ch, 1
    X86_AT(c, 0x11d7bu);
    s8(c, 5, 0x1u);
    // 011d7d  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d7du);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d7f  mov eax, 0x6b726f57
    X86_AT(c, 0x11d7fu);
    c.r[0] = 0x6B726F57u;
    // 011d84  mov cl, 0x40
    X86_AT(c, 0x11d84u);
    s8(c, 1, 0x40u);
    // 011d86  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d86u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d88  mov eax, 0x40004000
    X86_AT(c, 0x11d88u);
    c.r[0] = 0x40004000u;
    // 011d8d  lea edi, [ebp + 0x110]
    X86_AT(c, 0x11d8du);
    c.r[7] = (uint32_t)(c.r[5] + 0x110u);
    // 011d93  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d93u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d94  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d94u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d95  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d95u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d96  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d96u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d97  lea edi, [ebp + 0x1af0]
    X86_AT(c, 0x11d97u);
    c.r[7] = (uint32_t)(c.r[5] + 0x1AF0u);
    // 011d9d  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9du);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d9e  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9eu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d9f  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9fu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011da0  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11da0u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011da1  mov edi, ebp
    X86_AT(c, 0x11da1u);
    c.r[7] = c.r[5];
    // 011da3  mov bl, 0x40
    X86_AT(c, 0x11da3u);
    s8(c, 3, 0x40u);
    // 011da5  mov dx, 0x7f
    X86_AT(c, 0x11da5u);
    s16(c, 2, 0x7Fu);
L_11da9:
    X86_TICK(c, 7);
    // 011da9  call 0x11e50
    X86_AT(c, 0x11da9u);
    push32(c, 0x11daeu); f_00011e50(c); X86_RET(c, 0x11daeu);
    X86_TICK(c, 7);
    // 011dae  call 0x12180
    X86_AT(c, 0x11daeu);
    push32(c, 0x11db3u); f_00012180(c); X86_RET(c, 0x11db3u);
    X86_TICK(c, 9);
    // 011db3  inc ebx
    X86_AT(c, 0x11db3u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 011db4  cmp bl, 0x48
    X86_AT(c, 0x11db4u);
    (void)x86_sub(c, g8(c, 3), 0x48u, 0, 1);
    // 011db7  jne 0x11da9
    X86_AT(c, 0x11db7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11da9u); goto L_11da9; }
    X86_TICK(c, 30);
    // 011db9  mov dx, 0x4ea
    X86_AT(c, 0x11db9u);
    s16(c, 2, 0x4EAu);
    // 011dbd  xor al, al
    X86_AT(c, 0x11dbdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011dbf  out dx, al
    X86_AT(c, 0x11dbfu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011dc0  push ds
    X86_AT(c, 0x11dc0u);
    push32(c, c.sreg[3]);
    // 011dc1  pop ds
    X86_AT(c, 0x11dc1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dc2  push ds
    X86_AT(c, 0x11dc2u);
    push32(c, c.sreg[3]);
    // 011dc3  pop ds
    X86_AT(c, 0x11dc3u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dc4  inc edx
    X86_AT(c, 0x11dc4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
L_11dc5:
    X86_TICK(c, 19);
    // 011dc5  in al, dx
    X86_AT(c, 0x11dc5u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011dc6  test al, al
    X86_AT(c, 0x11dc6u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 011dc8  jne 0x11dc5
    X86_AT(c, 0x11dc8u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11dc5u); goto L_11dc5; }
    X86_TICK(c, 36);
    // 011dca  mov dl, 0xf8
    X86_AT(c, 0x11dcau);
    s8(c, 2, 0xF8u);
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
    x86_fault(c, 0x11d69u, "ran off the end of a function");
}
void f_00011d6a(X86Cpu& c) {
    goto L_11d6a;
L_11d64:
    X86_TICK(c, 9);
    // 011d64  mov eax, 0x44206f4e
    X86_AT(c, 0x11d64u);
    c.r[0] = 0x44206F4Eu;
    // 011d69  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d69u);
    x86_string(c, 2, 4, 0, 4, 3);
L_11d6a:
    X86_TICK(c, 27);
    // 011d6a  mov eax, 0x21617461
    X86_AT(c, 0x11d6au);
    c.r[0] = 0x21617461u;
    // 011d6f  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d6fu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d70  mov cl, 0x1e
    X86_AT(c, 0x11d70u);
    s8(c, 1, 0x1Eu);
    // 011d72  xor eax, eax
    X86_AT(c, 0x11d72u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 011d74  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d74u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d76  dec dl
    X86_AT(c, 0x11d76u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 011d78  jne 0x11d64
    X86_AT(c, 0x11d78u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11d64u); goto L_11d64; }
    X86_TICK(c, 90);
    // 011d7a  dec eax
    X86_AT(c, 0x11d7au);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 011d7b  mov ch, 1
    X86_AT(c, 0x11d7bu);
    s8(c, 5, 0x1u);
    // 011d7d  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d7du);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d7f  mov eax, 0x6b726f57
    X86_AT(c, 0x11d7fu);
    c.r[0] = 0x6B726F57u;
    // 011d84  mov cl, 0x40
    X86_AT(c, 0x11d84u);
    s8(c, 1, 0x40u);
    // 011d86  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d86u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d88  mov eax, 0x40004000
    X86_AT(c, 0x11d88u);
    c.r[0] = 0x40004000u;
    // 011d8d  lea edi, [ebp + 0x110]
    X86_AT(c, 0x11d8du);
    c.r[7] = (uint32_t)(c.r[5] + 0x110u);
    // 011d93  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d93u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d94  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d94u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d95  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d95u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d96  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d96u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d97  lea edi, [ebp + 0x1af0]
    X86_AT(c, 0x11d97u);
    c.r[7] = (uint32_t)(c.r[5] + 0x1AF0u);
    // 011d9d  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9du);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d9e  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9eu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d9f  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9fu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011da0  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11da0u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011da1  mov edi, ebp
    X86_AT(c, 0x11da1u);
    c.r[7] = c.r[5];
    // 011da3  mov bl, 0x40
    X86_AT(c, 0x11da3u);
    s8(c, 3, 0x40u);
    // 011da5  mov dx, 0x7f
    X86_AT(c, 0x11da5u);
    s16(c, 2, 0x7Fu);
L_11da9:
    X86_TICK(c, 7);
    // 011da9  call 0x11e50
    X86_AT(c, 0x11da9u);
    push32(c, 0x11daeu); f_00011e50(c); X86_RET(c, 0x11daeu);
    X86_TICK(c, 7);
    // 011dae  call 0x12180
    X86_AT(c, 0x11daeu);
    push32(c, 0x11db3u); f_00012180(c); X86_RET(c, 0x11db3u);
    X86_TICK(c, 9);
    // 011db3  inc ebx
    X86_AT(c, 0x11db3u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 011db4  cmp bl, 0x48
    X86_AT(c, 0x11db4u);
    (void)x86_sub(c, g8(c, 3), 0x48u, 0, 1);
    // 011db7  jne 0x11da9
    X86_AT(c, 0x11db7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11da9u); goto L_11da9; }
    X86_TICK(c, 30);
    // 011db9  mov dx, 0x4ea
    X86_AT(c, 0x11db9u);
    s16(c, 2, 0x4EAu);
    // 011dbd  xor al, al
    X86_AT(c, 0x11dbdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011dbf  out dx, al
    X86_AT(c, 0x11dbfu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011dc0  push ds
    X86_AT(c, 0x11dc0u);
    push32(c, c.sreg[3]);
    // 011dc1  pop ds
    X86_AT(c, 0x11dc1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dc2  push ds
    X86_AT(c, 0x11dc2u);
    push32(c, c.sreg[3]);
    // 011dc3  pop ds
    X86_AT(c, 0x11dc3u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dc4  inc edx
    X86_AT(c, 0x11dc4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
L_11dc5:
    X86_TICK(c, 19);
    // 011dc5  in al, dx
    X86_AT(c, 0x11dc5u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011dc6  test al, al
    X86_AT(c, 0x11dc6u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 011dc8  jne 0x11dc5
    X86_AT(c, 0x11dc8u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11dc5u); goto L_11dc5; }
    X86_TICK(c, 36);
    // 011dca  mov dl, 0xf8
    X86_AT(c, 0x11dcau);
    s8(c, 2, 0xF8u);
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
    x86_fault(c, 0x11d6au, "ran off the end of a function");
}
void f_00011d6f(X86Cpu& c) {
    goto L_11d6f;
L_11d64:
    X86_TICK(c, 11);
    // 011d64  mov eax, 0x44206f4e
    X86_AT(c, 0x11d64u);
    c.r[0] = 0x44206F4Eu;
    // 011d69  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d69u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d6a  mov eax, 0x21617461
    X86_AT(c, 0x11d6au);
    c.r[0] = 0x21617461u;
L_11d6f:
    X86_TICK(c, 25);
    // 011d6f  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d6fu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d70  mov cl, 0x1e
    X86_AT(c, 0x11d70u);
    s8(c, 1, 0x1Eu);
    // 011d72  xor eax, eax
    X86_AT(c, 0x11d72u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 011d74  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d74u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d76  dec dl
    X86_AT(c, 0x11d76u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 011d78  jne 0x11d64
    X86_AT(c, 0x11d78u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11d64u); goto L_11d64; }
    X86_TICK(c, 90);
    // 011d7a  dec eax
    X86_AT(c, 0x11d7au);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 011d7b  mov ch, 1
    X86_AT(c, 0x11d7bu);
    s8(c, 5, 0x1u);
    // 011d7d  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d7du);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d7f  mov eax, 0x6b726f57
    X86_AT(c, 0x11d7fu);
    c.r[0] = 0x6B726F57u;
    // 011d84  mov cl, 0x40
    X86_AT(c, 0x11d84u);
    s8(c, 1, 0x40u);
    // 011d86  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d86u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d88  mov eax, 0x40004000
    X86_AT(c, 0x11d88u);
    c.r[0] = 0x40004000u;
    // 011d8d  lea edi, [ebp + 0x110]
    X86_AT(c, 0x11d8du);
    c.r[7] = (uint32_t)(c.r[5] + 0x110u);
    // 011d93  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d93u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d94  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d94u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d95  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d95u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d96  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d96u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d97  lea edi, [ebp + 0x1af0]
    X86_AT(c, 0x11d97u);
    c.r[7] = (uint32_t)(c.r[5] + 0x1AF0u);
    // 011d9d  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9du);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d9e  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9eu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d9f  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9fu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011da0  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11da0u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011da1  mov edi, ebp
    X86_AT(c, 0x11da1u);
    c.r[7] = c.r[5];
    // 011da3  mov bl, 0x40
    X86_AT(c, 0x11da3u);
    s8(c, 3, 0x40u);
    // 011da5  mov dx, 0x7f
    X86_AT(c, 0x11da5u);
    s16(c, 2, 0x7Fu);
L_11da9:
    X86_TICK(c, 7);
    // 011da9  call 0x11e50
    X86_AT(c, 0x11da9u);
    push32(c, 0x11daeu); f_00011e50(c); X86_RET(c, 0x11daeu);
    X86_TICK(c, 7);
    // 011dae  call 0x12180
    X86_AT(c, 0x11daeu);
    push32(c, 0x11db3u); f_00012180(c); X86_RET(c, 0x11db3u);
    X86_TICK(c, 9);
    // 011db3  inc ebx
    X86_AT(c, 0x11db3u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 011db4  cmp bl, 0x48
    X86_AT(c, 0x11db4u);
    (void)x86_sub(c, g8(c, 3), 0x48u, 0, 1);
    // 011db7  jne 0x11da9
    X86_AT(c, 0x11db7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11da9u); goto L_11da9; }
    X86_TICK(c, 30);
    // 011db9  mov dx, 0x4ea
    X86_AT(c, 0x11db9u);
    s16(c, 2, 0x4EAu);
    // 011dbd  xor al, al
    X86_AT(c, 0x11dbdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011dbf  out dx, al
    X86_AT(c, 0x11dbfu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011dc0  push ds
    X86_AT(c, 0x11dc0u);
    push32(c, c.sreg[3]);
    // 011dc1  pop ds
    X86_AT(c, 0x11dc1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dc2  push ds
    X86_AT(c, 0x11dc2u);
    push32(c, c.sreg[3]);
    // 011dc3  pop ds
    X86_AT(c, 0x11dc3u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dc4  inc edx
    X86_AT(c, 0x11dc4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
L_11dc5:
    X86_TICK(c, 19);
    // 011dc5  in al, dx
    X86_AT(c, 0x11dc5u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011dc6  test al, al
    X86_AT(c, 0x11dc6u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 011dc8  jne 0x11dc5
    X86_AT(c, 0x11dc8u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11dc5u); goto L_11dc5; }
    X86_TICK(c, 36);
    // 011dca  mov dl, 0xf8
    X86_AT(c, 0x11dcau);
    s8(c, 2, 0xF8u);
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
    x86_fault(c, 0x11d6fu, "ran off the end of a function");
}
void f_00011d70(X86Cpu& c) {
    goto L_11d70;
L_11d64:
    X86_TICK(c, 18);
    // 011d64  mov eax, 0x44206f4e
    X86_AT(c, 0x11d64u);
    c.r[0] = 0x44206F4Eu;
    // 011d69  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d69u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d6a  mov eax, 0x21617461
    X86_AT(c, 0x11d6au);
    c.r[0] = 0x21617461u;
    // 011d6f  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d6fu);
    x86_string(c, 2, 4, 0, 4, 3);
L_11d70:
    X86_TICK(c, 18);
    // 011d70  mov cl, 0x1e
    X86_AT(c, 0x11d70u);
    s8(c, 1, 0x1Eu);
    // 011d72  xor eax, eax
    X86_AT(c, 0x11d72u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 011d74  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d74u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d76  dec dl
    X86_AT(c, 0x11d76u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 011d78  jne 0x11d64
    X86_AT(c, 0x11d78u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11d64u); goto L_11d64; }
    X86_TICK(c, 90);
    // 011d7a  dec eax
    X86_AT(c, 0x11d7au);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 011d7b  mov ch, 1
    X86_AT(c, 0x11d7bu);
    s8(c, 5, 0x1u);
    // 011d7d  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d7du);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d7f  mov eax, 0x6b726f57
    X86_AT(c, 0x11d7fu);
    c.r[0] = 0x6B726F57u;
    // 011d84  mov cl, 0x40
    X86_AT(c, 0x11d84u);
    s8(c, 1, 0x40u);
    // 011d86  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d86u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d88  mov eax, 0x40004000
    X86_AT(c, 0x11d88u);
    c.r[0] = 0x40004000u;
    // 011d8d  lea edi, [ebp + 0x110]
    X86_AT(c, 0x11d8du);
    c.r[7] = (uint32_t)(c.r[5] + 0x110u);
    // 011d93  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d93u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d94  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d94u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d95  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d95u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d96  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d96u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d97  lea edi, [ebp + 0x1af0]
    X86_AT(c, 0x11d97u);
    c.r[7] = (uint32_t)(c.r[5] + 0x1AF0u);
    // 011d9d  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9du);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d9e  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9eu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d9f  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9fu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011da0  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11da0u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011da1  mov edi, ebp
    X86_AT(c, 0x11da1u);
    c.r[7] = c.r[5];
    // 011da3  mov bl, 0x40
    X86_AT(c, 0x11da3u);
    s8(c, 3, 0x40u);
    // 011da5  mov dx, 0x7f
    X86_AT(c, 0x11da5u);
    s16(c, 2, 0x7Fu);
L_11da9:
    X86_TICK(c, 7);
    // 011da9  call 0x11e50
    X86_AT(c, 0x11da9u);
    push32(c, 0x11daeu); f_00011e50(c); X86_RET(c, 0x11daeu);
    X86_TICK(c, 7);
    // 011dae  call 0x12180
    X86_AT(c, 0x11daeu);
    push32(c, 0x11db3u); f_00012180(c); X86_RET(c, 0x11db3u);
    X86_TICK(c, 9);
    // 011db3  inc ebx
    X86_AT(c, 0x11db3u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 011db4  cmp bl, 0x48
    X86_AT(c, 0x11db4u);
    (void)x86_sub(c, g8(c, 3), 0x48u, 0, 1);
    // 011db7  jne 0x11da9
    X86_AT(c, 0x11db7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11da9u); goto L_11da9; }
    X86_TICK(c, 30);
    // 011db9  mov dx, 0x4ea
    X86_AT(c, 0x11db9u);
    s16(c, 2, 0x4EAu);
    // 011dbd  xor al, al
    X86_AT(c, 0x11dbdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011dbf  out dx, al
    X86_AT(c, 0x11dbfu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011dc0  push ds
    X86_AT(c, 0x11dc0u);
    push32(c, c.sreg[3]);
    // 011dc1  pop ds
    X86_AT(c, 0x11dc1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dc2  push ds
    X86_AT(c, 0x11dc2u);
    push32(c, c.sreg[3]);
    // 011dc3  pop ds
    X86_AT(c, 0x11dc3u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dc4  inc edx
    X86_AT(c, 0x11dc4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
L_11dc5:
    X86_TICK(c, 19);
    // 011dc5  in al, dx
    X86_AT(c, 0x11dc5u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011dc6  test al, al
    X86_AT(c, 0x11dc6u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 011dc8  jne 0x11dc5
    X86_AT(c, 0x11dc8u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11dc5u); goto L_11dc5; }
    X86_TICK(c, 36);
    // 011dca  mov dl, 0xf8
    X86_AT(c, 0x11dcau);
    s8(c, 2, 0xF8u);
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
    x86_fault(c, 0x11d70u, "ran off the end of a function");
}
void f_00011d72(X86Cpu& c) {
    goto L_11d72;
L_11d64:
    X86_TICK(c, 20);
    // 011d64  mov eax, 0x44206f4e
    X86_AT(c, 0x11d64u);
    c.r[0] = 0x44206F4Eu;
    // 011d69  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d69u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d6a  mov eax, 0x21617461
    X86_AT(c, 0x11d6au);
    c.r[0] = 0x21617461u;
    // 011d6f  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d6fu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d70  mov cl, 0x1e
    X86_AT(c, 0x11d70u);
    s8(c, 1, 0x1Eu);
L_11d72:
    X86_TICK(c, 16);
    // 011d72  xor eax, eax
    X86_AT(c, 0x11d72u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 011d74  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d74u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d76  dec dl
    X86_AT(c, 0x11d76u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 011d78  jne 0x11d64
    X86_AT(c, 0x11d78u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11d64u); goto L_11d64; }
    X86_TICK(c, 90);
    // 011d7a  dec eax
    X86_AT(c, 0x11d7au);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 011d7b  mov ch, 1
    X86_AT(c, 0x11d7bu);
    s8(c, 5, 0x1u);
    // 011d7d  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d7du);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d7f  mov eax, 0x6b726f57
    X86_AT(c, 0x11d7fu);
    c.r[0] = 0x6B726F57u;
    // 011d84  mov cl, 0x40
    X86_AT(c, 0x11d84u);
    s8(c, 1, 0x40u);
    // 011d86  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d86u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d88  mov eax, 0x40004000
    X86_AT(c, 0x11d88u);
    c.r[0] = 0x40004000u;
    // 011d8d  lea edi, [ebp + 0x110]
    X86_AT(c, 0x11d8du);
    c.r[7] = (uint32_t)(c.r[5] + 0x110u);
    // 011d93  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d93u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d94  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d94u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d95  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d95u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d96  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d96u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d97  lea edi, [ebp + 0x1af0]
    X86_AT(c, 0x11d97u);
    c.r[7] = (uint32_t)(c.r[5] + 0x1AF0u);
    // 011d9d  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9du);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d9e  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9eu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d9f  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9fu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011da0  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11da0u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011da1  mov edi, ebp
    X86_AT(c, 0x11da1u);
    c.r[7] = c.r[5];
    // 011da3  mov bl, 0x40
    X86_AT(c, 0x11da3u);
    s8(c, 3, 0x40u);
    // 011da5  mov dx, 0x7f
    X86_AT(c, 0x11da5u);
    s16(c, 2, 0x7Fu);
L_11da9:
    X86_TICK(c, 7);
    // 011da9  call 0x11e50
    X86_AT(c, 0x11da9u);
    push32(c, 0x11daeu); f_00011e50(c); X86_RET(c, 0x11daeu);
    X86_TICK(c, 7);
    // 011dae  call 0x12180
    X86_AT(c, 0x11daeu);
    push32(c, 0x11db3u); f_00012180(c); X86_RET(c, 0x11db3u);
    X86_TICK(c, 9);
    // 011db3  inc ebx
    X86_AT(c, 0x11db3u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 011db4  cmp bl, 0x48
    X86_AT(c, 0x11db4u);
    (void)x86_sub(c, g8(c, 3), 0x48u, 0, 1);
    // 011db7  jne 0x11da9
    X86_AT(c, 0x11db7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11da9u); goto L_11da9; }
    X86_TICK(c, 30);
    // 011db9  mov dx, 0x4ea
    X86_AT(c, 0x11db9u);
    s16(c, 2, 0x4EAu);
    // 011dbd  xor al, al
    X86_AT(c, 0x11dbdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011dbf  out dx, al
    X86_AT(c, 0x11dbfu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011dc0  push ds
    X86_AT(c, 0x11dc0u);
    push32(c, c.sreg[3]);
    // 011dc1  pop ds
    X86_AT(c, 0x11dc1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dc2  push ds
    X86_AT(c, 0x11dc2u);
    push32(c, c.sreg[3]);
    // 011dc3  pop ds
    X86_AT(c, 0x11dc3u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dc4  inc edx
    X86_AT(c, 0x11dc4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
L_11dc5:
    X86_TICK(c, 19);
    // 011dc5  in al, dx
    X86_AT(c, 0x11dc5u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011dc6  test al, al
    X86_AT(c, 0x11dc6u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 011dc8  jne 0x11dc5
    X86_AT(c, 0x11dc8u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11dc5u); goto L_11dc5; }
    X86_TICK(c, 36);
    // 011dca  mov dl, 0xf8
    X86_AT(c, 0x11dcau);
    s8(c, 2, 0xF8u);
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
    x86_fault(c, 0x11d72u, "ran off the end of a function");
}
void f_00011d74(X86Cpu& c) {
    goto L_11d74;
L_11d64:
    X86_TICK(c, 22);
    // 011d64  mov eax, 0x44206f4e
    X86_AT(c, 0x11d64u);
    c.r[0] = 0x44206F4Eu;
    // 011d69  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d69u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d6a  mov eax, 0x21617461
    X86_AT(c, 0x11d6au);
    c.r[0] = 0x21617461u;
    // 011d6f  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d6fu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d70  mov cl, 0x1e
    X86_AT(c, 0x11d70u);
    s8(c, 1, 0x1Eu);
    // 011d72  xor eax, eax
    X86_AT(c, 0x11d72u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
L_11d74:
    X86_TICK(c, 14);
    // 011d74  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d74u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d76  dec dl
    X86_AT(c, 0x11d76u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 011d78  jne 0x11d64
    X86_AT(c, 0x11d78u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11d64u); goto L_11d64; }
    X86_TICK(c, 90);
    // 011d7a  dec eax
    X86_AT(c, 0x11d7au);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 011d7b  mov ch, 1
    X86_AT(c, 0x11d7bu);
    s8(c, 5, 0x1u);
    // 011d7d  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d7du);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d7f  mov eax, 0x6b726f57
    X86_AT(c, 0x11d7fu);
    c.r[0] = 0x6B726F57u;
    // 011d84  mov cl, 0x40
    X86_AT(c, 0x11d84u);
    s8(c, 1, 0x40u);
    // 011d86  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d86u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d88  mov eax, 0x40004000
    X86_AT(c, 0x11d88u);
    c.r[0] = 0x40004000u;
    // 011d8d  lea edi, [ebp + 0x110]
    X86_AT(c, 0x11d8du);
    c.r[7] = (uint32_t)(c.r[5] + 0x110u);
    // 011d93  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d93u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d94  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d94u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d95  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d95u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d96  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d96u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d97  lea edi, [ebp + 0x1af0]
    X86_AT(c, 0x11d97u);
    c.r[7] = (uint32_t)(c.r[5] + 0x1AF0u);
    // 011d9d  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9du);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d9e  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9eu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d9f  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9fu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011da0  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11da0u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011da1  mov edi, ebp
    X86_AT(c, 0x11da1u);
    c.r[7] = c.r[5];
    // 011da3  mov bl, 0x40
    X86_AT(c, 0x11da3u);
    s8(c, 3, 0x40u);
    // 011da5  mov dx, 0x7f
    X86_AT(c, 0x11da5u);
    s16(c, 2, 0x7Fu);
L_11da9:
    X86_TICK(c, 7);
    // 011da9  call 0x11e50
    X86_AT(c, 0x11da9u);
    push32(c, 0x11daeu); f_00011e50(c); X86_RET(c, 0x11daeu);
    X86_TICK(c, 7);
    // 011dae  call 0x12180
    X86_AT(c, 0x11daeu);
    push32(c, 0x11db3u); f_00012180(c); X86_RET(c, 0x11db3u);
    X86_TICK(c, 9);
    // 011db3  inc ebx
    X86_AT(c, 0x11db3u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 011db4  cmp bl, 0x48
    X86_AT(c, 0x11db4u);
    (void)x86_sub(c, g8(c, 3), 0x48u, 0, 1);
    // 011db7  jne 0x11da9
    X86_AT(c, 0x11db7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11da9u); goto L_11da9; }
    X86_TICK(c, 30);
    // 011db9  mov dx, 0x4ea
    X86_AT(c, 0x11db9u);
    s16(c, 2, 0x4EAu);
    // 011dbd  xor al, al
    X86_AT(c, 0x11dbdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011dbf  out dx, al
    X86_AT(c, 0x11dbfu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011dc0  push ds
    X86_AT(c, 0x11dc0u);
    push32(c, c.sreg[3]);
    // 011dc1  pop ds
    X86_AT(c, 0x11dc1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dc2  push ds
    X86_AT(c, 0x11dc2u);
    push32(c, c.sreg[3]);
    // 011dc3  pop ds
    X86_AT(c, 0x11dc3u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dc4  inc edx
    X86_AT(c, 0x11dc4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
L_11dc5:
    X86_TICK(c, 19);
    // 011dc5  in al, dx
    X86_AT(c, 0x11dc5u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011dc6  test al, al
    X86_AT(c, 0x11dc6u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 011dc8  jne 0x11dc5
    X86_AT(c, 0x11dc8u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11dc5u); goto L_11dc5; }
    X86_TICK(c, 36);
    // 011dca  mov dl, 0xf8
    X86_AT(c, 0x11dcau);
    s8(c, 2, 0xF8u);
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
    x86_fault(c, 0x11d74u, "ran off the end of a function");
}
void f_00011d76(X86Cpu& c) {
    goto L_11d76;
L_11d64:
    X86_TICK(c, 29);
    // 011d64  mov eax, 0x44206f4e
    X86_AT(c, 0x11d64u);
    c.r[0] = 0x44206F4Eu;
    // 011d69  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d69u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d6a  mov eax, 0x21617461
    X86_AT(c, 0x11d6au);
    c.r[0] = 0x21617461u;
    // 011d6f  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d6fu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d70  mov cl, 0x1e
    X86_AT(c, 0x11d70u);
    s8(c, 1, 0x1Eu);
    // 011d72  xor eax, eax
    X86_AT(c, 0x11d72u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 011d74  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d74u);
    x86_string(c, 2, 4, 243, 4, 3);
L_11d76:
    X86_TICK(c, 7);
    // 011d76  dec dl
    X86_AT(c, 0x11d76u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 011d78  jne 0x11d64
    X86_AT(c, 0x11d78u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11d64u); goto L_11d64; }
    X86_TICK(c, 90);
    // 011d7a  dec eax
    X86_AT(c, 0x11d7au);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 011d7b  mov ch, 1
    X86_AT(c, 0x11d7bu);
    s8(c, 5, 0x1u);
    // 011d7d  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d7du);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d7f  mov eax, 0x6b726f57
    X86_AT(c, 0x11d7fu);
    c.r[0] = 0x6B726F57u;
    // 011d84  mov cl, 0x40
    X86_AT(c, 0x11d84u);
    s8(c, 1, 0x40u);
    // 011d86  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d86u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d88  mov eax, 0x40004000
    X86_AT(c, 0x11d88u);
    c.r[0] = 0x40004000u;
    // 011d8d  lea edi, [ebp + 0x110]
    X86_AT(c, 0x11d8du);
    c.r[7] = (uint32_t)(c.r[5] + 0x110u);
    // 011d93  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d93u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d94  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d94u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d95  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d95u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d96  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d96u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d97  lea edi, [ebp + 0x1af0]
    X86_AT(c, 0x11d97u);
    c.r[7] = (uint32_t)(c.r[5] + 0x1AF0u);
    // 011d9d  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9du);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d9e  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9eu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d9f  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9fu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011da0  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11da0u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011da1  mov edi, ebp
    X86_AT(c, 0x11da1u);
    c.r[7] = c.r[5];
    // 011da3  mov bl, 0x40
    X86_AT(c, 0x11da3u);
    s8(c, 3, 0x40u);
    // 011da5  mov dx, 0x7f
    X86_AT(c, 0x11da5u);
    s16(c, 2, 0x7Fu);
L_11da9:
    X86_TICK(c, 7);
    // 011da9  call 0x11e50
    X86_AT(c, 0x11da9u);
    push32(c, 0x11daeu); f_00011e50(c); X86_RET(c, 0x11daeu);
    X86_TICK(c, 7);
    // 011dae  call 0x12180
    X86_AT(c, 0x11daeu);
    push32(c, 0x11db3u); f_00012180(c); X86_RET(c, 0x11db3u);
    X86_TICK(c, 9);
    // 011db3  inc ebx
    X86_AT(c, 0x11db3u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 011db4  cmp bl, 0x48
    X86_AT(c, 0x11db4u);
    (void)x86_sub(c, g8(c, 3), 0x48u, 0, 1);
    // 011db7  jne 0x11da9
    X86_AT(c, 0x11db7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11da9u); goto L_11da9; }
    X86_TICK(c, 30);
    // 011db9  mov dx, 0x4ea
    X86_AT(c, 0x11db9u);
    s16(c, 2, 0x4EAu);
    // 011dbd  xor al, al
    X86_AT(c, 0x11dbdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011dbf  out dx, al
    X86_AT(c, 0x11dbfu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011dc0  push ds
    X86_AT(c, 0x11dc0u);
    push32(c, c.sreg[3]);
    // 011dc1  pop ds
    X86_AT(c, 0x11dc1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dc2  push ds
    X86_AT(c, 0x11dc2u);
    push32(c, c.sreg[3]);
    // 011dc3  pop ds
    X86_AT(c, 0x11dc3u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dc4  inc edx
    X86_AT(c, 0x11dc4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
L_11dc5:
    X86_TICK(c, 19);
    // 011dc5  in al, dx
    X86_AT(c, 0x11dc5u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011dc6  test al, al
    X86_AT(c, 0x11dc6u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 011dc8  jne 0x11dc5
    X86_AT(c, 0x11dc8u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11dc5u); goto L_11dc5; }
    X86_TICK(c, 36);
    // 011dca  mov dl, 0xf8
    X86_AT(c, 0x11dcau);
    s8(c, 2, 0xF8u);
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
    x86_fault(c, 0x11d76u, "ran off the end of a function");
}
void f_00011d78(X86Cpu& c) {
    goto L_11d78;
L_11d64:
    X86_TICK(c, 31);
    // 011d64  mov eax, 0x44206f4e
    X86_AT(c, 0x11d64u);
    c.r[0] = 0x44206F4Eu;
    // 011d69  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d69u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d6a  mov eax, 0x21617461
    X86_AT(c, 0x11d6au);
    c.r[0] = 0x21617461u;
    // 011d6f  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d6fu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d70  mov cl, 0x1e
    X86_AT(c, 0x11d70u);
    s8(c, 1, 0x1Eu);
    // 011d72  xor eax, eax
    X86_AT(c, 0x11d72u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 011d74  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d74u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d76  dec dl
    X86_AT(c, 0x11d76u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
L_11d78:
    X86_TICK(c, 5);
    // 011d78  jne 0x11d64
    X86_AT(c, 0x11d78u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11d64u); goto L_11d64; }
    X86_TICK(c, 90);
    // 011d7a  dec eax
    X86_AT(c, 0x11d7au);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 011d7b  mov ch, 1
    X86_AT(c, 0x11d7bu);
    s8(c, 5, 0x1u);
    // 011d7d  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d7du);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d7f  mov eax, 0x6b726f57
    X86_AT(c, 0x11d7fu);
    c.r[0] = 0x6B726F57u;
    // 011d84  mov cl, 0x40
    X86_AT(c, 0x11d84u);
    s8(c, 1, 0x40u);
    // 011d86  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d86u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 011d88  mov eax, 0x40004000
    X86_AT(c, 0x11d88u);
    c.r[0] = 0x40004000u;
    // 011d8d  lea edi, [ebp + 0x110]
    X86_AT(c, 0x11d8du);
    c.r[7] = (uint32_t)(c.r[5] + 0x110u);
    // 011d93  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d93u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d94  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d94u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d95  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d95u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d96  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d96u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d97  lea edi, [ebp + 0x1af0]
    X86_AT(c, 0x11d97u);
    c.r[7] = (uint32_t)(c.r[5] + 0x1AF0u);
    // 011d9d  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9du);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d9e  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9eu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011d9f  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11d9fu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011da0  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x11da0u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 011da1  mov edi, ebp
    X86_AT(c, 0x11da1u);
    c.r[7] = c.r[5];
    // 011da3  mov bl, 0x40
    X86_AT(c, 0x11da3u);
    s8(c, 3, 0x40u);
    // 011da5  mov dx, 0x7f
    X86_AT(c, 0x11da5u);
    s16(c, 2, 0x7Fu);
L_11da9:
    X86_TICK(c, 7);
    // 011da9  call 0x11e50
    X86_AT(c, 0x11da9u);
    push32(c, 0x11daeu); f_00011e50(c); X86_RET(c, 0x11daeu);
    X86_TICK(c, 7);
    // 011dae  call 0x12180
    X86_AT(c, 0x11daeu);
    push32(c, 0x11db3u); f_00012180(c); X86_RET(c, 0x11db3u);
    X86_TICK(c, 9);
    // 011db3  inc ebx
    X86_AT(c, 0x11db3u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 011db4  cmp bl, 0x48
    X86_AT(c, 0x11db4u);
    (void)x86_sub(c, g8(c, 3), 0x48u, 0, 1);
    // 011db7  jne 0x11da9
    X86_AT(c, 0x11db7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11da9u); goto L_11da9; }
    X86_TICK(c, 30);
    // 011db9  mov dx, 0x4ea
    X86_AT(c, 0x11db9u);
    s16(c, 2, 0x4EAu);
    // 011dbd  xor al, al
    X86_AT(c, 0x11dbdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011dbf  out dx, al
    X86_AT(c, 0x11dbfu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011dc0  push ds
    X86_AT(c, 0x11dc0u);
    push32(c, c.sreg[3]);
    // 011dc1  pop ds
    X86_AT(c, 0x11dc1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dc2  push ds
    X86_AT(c, 0x11dc2u);
    push32(c, c.sreg[3]);
    // 011dc3  pop ds
    X86_AT(c, 0x11dc3u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011dc4  inc edx
    X86_AT(c, 0x11dc4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
L_11dc5:
    X86_TICK(c, 19);
    // 011dc5  in al, dx
    X86_AT(c, 0x11dc5u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 011dc6  test al, al
    X86_AT(c, 0x11dc6u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 011dc8  jne 0x11dc5
    X86_AT(c, 0x11dc8u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11dc5u); goto L_11dc5; }
    X86_TICK(c, 36);
    // 011dca  mov dl, 0xf8
    X86_AT(c, 0x11dcau);
    s8(c, 2, 0xF8u);
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
    x86_fault(c, 0x11d78u, "ran off the end of a function");
}
}
