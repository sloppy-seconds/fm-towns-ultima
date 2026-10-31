#include "p_tbios_funcs.h"
namespace p_tbios {
void f_0000f1b2(X86Cpu& c) {
    goto L_f1b2;
L_f1a3:
    X86_TICK(c, 14);
    // 00f1a3  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1a3u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1a4  cmp al, 0x80
    X86_AT(c, 0xf1a4u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 00f1a6  jbe 0xf1c8
    X86_AT(c, 0xf1a6u);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1a8  cmp al, 0xa0
    X86_AT(c, 0xf1a8u);
    (void)x86_sub(c, g8(c, 0), 0xA0u, 0, 1);
    // 00f1aa  jb 0xf1b4
    X86_AT(c, 0xf1aau);
    if (x86_cc(c, 2)) { goto L_f1b4; }
    X86_TICK(c, 7);
    // 00f1ac  cmp al, 0xdf
    X86_AT(c, 0xf1acu);
    (void)x86_sub(c, g8(c, 0), 0xDFu, 0, 1);
    // 00f1ae  jbe 0xf1c8
    X86_AT(c, 0xf1aeu);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 2);
    // 00f1b0  cmp al, 0xec
    X86_AT(c, 0xf1b0u);
    (void)x86_sub(c, g8(c, 0), 0xECu, 0, 1);
L_f1b2:
    X86_TICK(c, 5);
    // 00f1b2  jae 0xf1c8
    X86_AT(c, 0xf1b2u);
    if (x86_cc(c, 3)) { goto L_f1c8; }
L_f1b4:
    X86_TICK(c, 20);
    // 00f1b4  mov ah, al
    X86_AT(c, 0xf1b4u);
    s8(c, 4, g8(c, 0));
    // 00f1b6  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1b6u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1b7  sub ecx, 2
    X86_AT(c, 0xf1b7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x2u, 0, 4); }
    // 00f1ba  mov edx, 0xf3f8
    X86_AT(c, 0xf1bau);
    c.r[2] = 0xF3F8u;
    // 00f1bf  call 0x101b4
    X86_AT(c, 0xf1bfu);
    push32(c, 0xf1c4u); f_000101b4(c); X86_RET(c, 0xf1c4u);
    X86_TICK(c, 7);
    // 00f1c4  jmp 0xf1d0
    X86_AT(c, 0xf1c4u);
    goto L_f1d0;
L_f1c8:
    X86_TICK(c, 6);
    // 00f1c8  sub ah, ah
    X86_AT(c, 0xf1c8u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f1ca  dec ecx
    X86_AT(c, 0xf1cau);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00f1cb  mov edx, 0xf2d0
    X86_AT(c, 0xf1cbu);
    c.r[2] = 0xF2D0u;
L_f1d0:
    X86_TICK(c, 13);
    // 00f1d0  push ecx
    X86_AT(c, 0xf1d0u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f1d1  push ds
    X86_AT(c, 0xf1d1u);
    push32(c, c.sreg[3]);
    // 00f1d2  push esi
    X86_AT(c, 0xf1d2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f1d3  call edx
    X86_AT(c, 0xf1d3u);
    { uint32_t t = c.r[2]; push32(c, 0xf1d5u); x86_call(c, t); X86_RET(c, 0xf1d5u); }
    X86_TICK(c, 15);
    // 00f1d5  pop esi
    X86_AT(c, 0xf1d5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f1d6  pop ds
    X86_AT(c, 0xf1d6u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f1d7  call 0xf244
    X86_AT(c, 0xf1d7u);
    push32(c, 0xf1dcu); f_0000f244(c); X86_RET(c, 0xf1dcu);
    X86_TICK(c, 11);
    // 00f1dc  pop ecx
    X86_AT(c, 0xf1dcu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f1dd  cmp ecx, 1
    X86_AT(c, 0xf1ddu);
    (void)x86_sub(c, c.r[1], 0x1u, 0, 4);
    // 00f1e0  jge 0xf1a3
    X86_AT(c, 0xf1e0u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xf1a3u); goto L_f1a3; }
    X86_TICK(c, 10);
    // 00f1e2  ret 
    X86_AT(c, 0xf1e2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf1b2u, "ran off the end of a function");
}
void f_0000f1b4(X86Cpu& c) {
    goto L_f1b4;
L_f1a3:
    X86_TICK(c, 14);
    // 00f1a3  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1a3u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1a4  cmp al, 0x80
    X86_AT(c, 0xf1a4u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 00f1a6  jbe 0xf1c8
    X86_AT(c, 0xf1a6u);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1a8  cmp al, 0xa0
    X86_AT(c, 0xf1a8u);
    (void)x86_sub(c, g8(c, 0), 0xA0u, 0, 1);
    // 00f1aa  jb 0xf1b4
    X86_AT(c, 0xf1aau);
    if (x86_cc(c, 2)) { goto L_f1b4; }
    X86_TICK(c, 7);
    // 00f1ac  cmp al, 0xdf
    X86_AT(c, 0xf1acu);
    (void)x86_sub(c, g8(c, 0), 0xDFu, 0, 1);
    // 00f1ae  jbe 0xf1c8
    X86_AT(c, 0xf1aeu);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1b0  cmp al, 0xec
    X86_AT(c, 0xf1b0u);
    (void)x86_sub(c, g8(c, 0), 0xECu, 0, 1);
    // 00f1b2  jae 0xf1c8
    X86_AT(c, 0xf1b2u);
    if (x86_cc(c, 3)) { goto L_f1c8; }
L_f1b4:
    X86_TICK(c, 20);
    // 00f1b4  mov ah, al
    X86_AT(c, 0xf1b4u);
    s8(c, 4, g8(c, 0));
    // 00f1b6  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1b6u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1b7  sub ecx, 2
    X86_AT(c, 0xf1b7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x2u, 0, 4); }
    // 00f1ba  mov edx, 0xf3f8
    X86_AT(c, 0xf1bau);
    c.r[2] = 0xF3F8u;
    // 00f1bf  call 0x101b4
    X86_AT(c, 0xf1bfu);
    push32(c, 0xf1c4u); f_000101b4(c); X86_RET(c, 0xf1c4u);
    X86_TICK(c, 7);
    // 00f1c4  jmp 0xf1d0
    X86_AT(c, 0xf1c4u);
    goto L_f1d0;
L_f1c8:
    X86_TICK(c, 6);
    // 00f1c8  sub ah, ah
    X86_AT(c, 0xf1c8u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f1ca  dec ecx
    X86_AT(c, 0xf1cau);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00f1cb  mov edx, 0xf2d0
    X86_AT(c, 0xf1cbu);
    c.r[2] = 0xF2D0u;
L_f1d0:
    X86_TICK(c, 13);
    // 00f1d0  push ecx
    X86_AT(c, 0xf1d0u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f1d1  push ds
    X86_AT(c, 0xf1d1u);
    push32(c, c.sreg[3]);
    // 00f1d2  push esi
    X86_AT(c, 0xf1d2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f1d3  call edx
    X86_AT(c, 0xf1d3u);
    { uint32_t t = c.r[2]; push32(c, 0xf1d5u); x86_call(c, t); X86_RET(c, 0xf1d5u); }
    X86_TICK(c, 15);
    // 00f1d5  pop esi
    X86_AT(c, 0xf1d5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f1d6  pop ds
    X86_AT(c, 0xf1d6u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f1d7  call 0xf244
    X86_AT(c, 0xf1d7u);
    push32(c, 0xf1dcu); f_0000f244(c); X86_RET(c, 0xf1dcu);
    X86_TICK(c, 11);
    // 00f1dc  pop ecx
    X86_AT(c, 0xf1dcu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f1dd  cmp ecx, 1
    X86_AT(c, 0xf1ddu);
    (void)x86_sub(c, c.r[1], 0x1u, 0, 4);
    // 00f1e0  jge 0xf1a3
    X86_AT(c, 0xf1e0u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xf1a3u); goto L_f1a3; }
    X86_TICK(c, 10);
    // 00f1e2  ret 
    X86_AT(c, 0xf1e2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf1b4u, "ran off the end of a function");
}
void f_0000f1b6(X86Cpu& c) {
    goto L_f1b6;
L_f1a3:
    X86_TICK(c, 14);
    // 00f1a3  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1a3u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1a4  cmp al, 0x80
    X86_AT(c, 0xf1a4u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 00f1a6  jbe 0xf1c8
    X86_AT(c, 0xf1a6u);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1a8  cmp al, 0xa0
    X86_AT(c, 0xf1a8u);
    (void)x86_sub(c, g8(c, 0), 0xA0u, 0, 1);
    // 00f1aa  jb 0xf1b4
    X86_AT(c, 0xf1aau);
    if (x86_cc(c, 2)) { goto L_f1b4; }
    X86_TICK(c, 7);
    // 00f1ac  cmp al, 0xdf
    X86_AT(c, 0xf1acu);
    (void)x86_sub(c, g8(c, 0), 0xDFu, 0, 1);
    // 00f1ae  jbe 0xf1c8
    X86_AT(c, 0xf1aeu);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1b0  cmp al, 0xec
    X86_AT(c, 0xf1b0u);
    (void)x86_sub(c, g8(c, 0), 0xECu, 0, 1);
    // 00f1b2  jae 0xf1c8
    X86_AT(c, 0xf1b2u);
    if (x86_cc(c, 3)) { goto L_f1c8; }
L_f1b4:
    X86_TICK(c, 2);
    // 00f1b4  mov ah, al
    X86_AT(c, 0xf1b4u);
    s8(c, 4, g8(c, 0));
L_f1b6:
    X86_TICK(c, 18);
    // 00f1b6  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1b6u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1b7  sub ecx, 2
    X86_AT(c, 0xf1b7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x2u, 0, 4); }
    // 00f1ba  mov edx, 0xf3f8
    X86_AT(c, 0xf1bau);
    c.r[2] = 0xF3F8u;
    // 00f1bf  call 0x101b4
    X86_AT(c, 0xf1bfu);
    push32(c, 0xf1c4u); f_000101b4(c); X86_RET(c, 0xf1c4u);
    X86_TICK(c, 7);
    // 00f1c4  jmp 0xf1d0
    X86_AT(c, 0xf1c4u);
    goto L_f1d0;
L_f1c8:
    X86_TICK(c, 6);
    // 00f1c8  sub ah, ah
    X86_AT(c, 0xf1c8u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f1ca  dec ecx
    X86_AT(c, 0xf1cau);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00f1cb  mov edx, 0xf2d0
    X86_AT(c, 0xf1cbu);
    c.r[2] = 0xF2D0u;
L_f1d0:
    X86_TICK(c, 13);
    // 00f1d0  push ecx
    X86_AT(c, 0xf1d0u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f1d1  push ds
    X86_AT(c, 0xf1d1u);
    push32(c, c.sreg[3]);
    // 00f1d2  push esi
    X86_AT(c, 0xf1d2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f1d3  call edx
    X86_AT(c, 0xf1d3u);
    { uint32_t t = c.r[2]; push32(c, 0xf1d5u); x86_call(c, t); X86_RET(c, 0xf1d5u); }
    X86_TICK(c, 15);
    // 00f1d5  pop esi
    X86_AT(c, 0xf1d5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f1d6  pop ds
    X86_AT(c, 0xf1d6u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f1d7  call 0xf244
    X86_AT(c, 0xf1d7u);
    push32(c, 0xf1dcu); f_0000f244(c); X86_RET(c, 0xf1dcu);
    X86_TICK(c, 11);
    // 00f1dc  pop ecx
    X86_AT(c, 0xf1dcu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f1dd  cmp ecx, 1
    X86_AT(c, 0xf1ddu);
    (void)x86_sub(c, c.r[1], 0x1u, 0, 4);
    // 00f1e0  jge 0xf1a3
    X86_AT(c, 0xf1e0u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xf1a3u); goto L_f1a3; }
    X86_TICK(c, 10);
    // 00f1e2  ret 
    X86_AT(c, 0xf1e2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf1b6u, "ran off the end of a function");
}
void f_0000f1b7(X86Cpu& c) {
    goto L_f1b7;
L_f1a3:
    X86_TICK(c, 14);
    // 00f1a3  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1a3u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1a4  cmp al, 0x80
    X86_AT(c, 0xf1a4u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 00f1a6  jbe 0xf1c8
    X86_AT(c, 0xf1a6u);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1a8  cmp al, 0xa0
    X86_AT(c, 0xf1a8u);
    (void)x86_sub(c, g8(c, 0), 0xA0u, 0, 1);
    // 00f1aa  jb 0xf1b4
    X86_AT(c, 0xf1aau);
    if (x86_cc(c, 2)) { goto L_f1b4; }
    X86_TICK(c, 7);
    // 00f1ac  cmp al, 0xdf
    X86_AT(c, 0xf1acu);
    (void)x86_sub(c, g8(c, 0), 0xDFu, 0, 1);
    // 00f1ae  jbe 0xf1c8
    X86_AT(c, 0xf1aeu);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1b0  cmp al, 0xec
    X86_AT(c, 0xf1b0u);
    (void)x86_sub(c, g8(c, 0), 0xECu, 0, 1);
    // 00f1b2  jae 0xf1c8
    X86_AT(c, 0xf1b2u);
    if (x86_cc(c, 3)) { goto L_f1c8; }
L_f1b4:
    X86_TICK(c, 9);
    // 00f1b4  mov ah, al
    X86_AT(c, 0xf1b4u);
    s8(c, 4, g8(c, 0));
    // 00f1b6  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1b6u);
    x86_string(c, 3, 1, 0, 4, 3);
L_f1b7:
    X86_TICK(c, 11);
    // 00f1b7  sub ecx, 2
    X86_AT(c, 0xf1b7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x2u, 0, 4); }
    // 00f1ba  mov edx, 0xf3f8
    X86_AT(c, 0xf1bau);
    c.r[2] = 0xF3F8u;
    // 00f1bf  call 0x101b4
    X86_AT(c, 0xf1bfu);
    push32(c, 0xf1c4u); f_000101b4(c); X86_RET(c, 0xf1c4u);
    X86_TICK(c, 7);
    // 00f1c4  jmp 0xf1d0
    X86_AT(c, 0xf1c4u);
    goto L_f1d0;
L_f1c8:
    X86_TICK(c, 6);
    // 00f1c8  sub ah, ah
    X86_AT(c, 0xf1c8u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f1ca  dec ecx
    X86_AT(c, 0xf1cau);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00f1cb  mov edx, 0xf2d0
    X86_AT(c, 0xf1cbu);
    c.r[2] = 0xF2D0u;
L_f1d0:
    X86_TICK(c, 13);
    // 00f1d0  push ecx
    X86_AT(c, 0xf1d0u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f1d1  push ds
    X86_AT(c, 0xf1d1u);
    push32(c, c.sreg[3]);
    // 00f1d2  push esi
    X86_AT(c, 0xf1d2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f1d3  call edx
    X86_AT(c, 0xf1d3u);
    { uint32_t t = c.r[2]; push32(c, 0xf1d5u); x86_call(c, t); X86_RET(c, 0xf1d5u); }
    X86_TICK(c, 15);
    // 00f1d5  pop esi
    X86_AT(c, 0xf1d5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f1d6  pop ds
    X86_AT(c, 0xf1d6u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f1d7  call 0xf244
    X86_AT(c, 0xf1d7u);
    push32(c, 0xf1dcu); f_0000f244(c); X86_RET(c, 0xf1dcu);
    X86_TICK(c, 11);
    // 00f1dc  pop ecx
    X86_AT(c, 0xf1dcu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f1dd  cmp ecx, 1
    X86_AT(c, 0xf1ddu);
    (void)x86_sub(c, c.r[1], 0x1u, 0, 4);
    // 00f1e0  jge 0xf1a3
    X86_AT(c, 0xf1e0u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xf1a3u); goto L_f1a3; }
    X86_TICK(c, 10);
    // 00f1e2  ret 
    X86_AT(c, 0xf1e2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf1b7u, "ran off the end of a function");
}
void f_0000f1ba(X86Cpu& c) {
    goto L_f1ba;
L_f1a3:
    X86_TICK(c, 14);
    // 00f1a3  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1a3u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1a4  cmp al, 0x80
    X86_AT(c, 0xf1a4u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 00f1a6  jbe 0xf1c8
    X86_AT(c, 0xf1a6u);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1a8  cmp al, 0xa0
    X86_AT(c, 0xf1a8u);
    (void)x86_sub(c, g8(c, 0), 0xA0u, 0, 1);
    // 00f1aa  jb 0xf1b4
    X86_AT(c, 0xf1aau);
    if (x86_cc(c, 2)) { goto L_f1b4; }
    X86_TICK(c, 7);
    // 00f1ac  cmp al, 0xdf
    X86_AT(c, 0xf1acu);
    (void)x86_sub(c, g8(c, 0), 0xDFu, 0, 1);
    // 00f1ae  jbe 0xf1c8
    X86_AT(c, 0xf1aeu);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1b0  cmp al, 0xec
    X86_AT(c, 0xf1b0u);
    (void)x86_sub(c, g8(c, 0), 0xECu, 0, 1);
    // 00f1b2  jae 0xf1c8
    X86_AT(c, 0xf1b2u);
    if (x86_cc(c, 3)) { goto L_f1c8; }
L_f1b4:
    X86_TICK(c, 11);
    // 00f1b4  mov ah, al
    X86_AT(c, 0xf1b4u);
    s8(c, 4, g8(c, 0));
    // 00f1b6  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1b6u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1b7  sub ecx, 2
    X86_AT(c, 0xf1b7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x2u, 0, 4); }
L_f1ba:
    X86_TICK(c, 9);
    // 00f1ba  mov edx, 0xf3f8
    X86_AT(c, 0xf1bau);
    c.r[2] = 0xF3F8u;
    // 00f1bf  call 0x101b4
    X86_AT(c, 0xf1bfu);
    push32(c, 0xf1c4u); f_000101b4(c); X86_RET(c, 0xf1c4u);
    X86_TICK(c, 7);
    // 00f1c4  jmp 0xf1d0
    X86_AT(c, 0xf1c4u);
    goto L_f1d0;
L_f1c8:
    X86_TICK(c, 6);
    // 00f1c8  sub ah, ah
    X86_AT(c, 0xf1c8u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f1ca  dec ecx
    X86_AT(c, 0xf1cau);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00f1cb  mov edx, 0xf2d0
    X86_AT(c, 0xf1cbu);
    c.r[2] = 0xF2D0u;
L_f1d0:
    X86_TICK(c, 13);
    // 00f1d0  push ecx
    X86_AT(c, 0xf1d0u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f1d1  push ds
    X86_AT(c, 0xf1d1u);
    push32(c, c.sreg[3]);
    // 00f1d2  push esi
    X86_AT(c, 0xf1d2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f1d3  call edx
    X86_AT(c, 0xf1d3u);
    { uint32_t t = c.r[2]; push32(c, 0xf1d5u); x86_call(c, t); X86_RET(c, 0xf1d5u); }
    X86_TICK(c, 15);
    // 00f1d5  pop esi
    X86_AT(c, 0xf1d5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f1d6  pop ds
    X86_AT(c, 0xf1d6u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f1d7  call 0xf244
    X86_AT(c, 0xf1d7u);
    push32(c, 0xf1dcu); f_0000f244(c); X86_RET(c, 0xf1dcu);
    X86_TICK(c, 11);
    // 00f1dc  pop ecx
    X86_AT(c, 0xf1dcu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f1dd  cmp ecx, 1
    X86_AT(c, 0xf1ddu);
    (void)x86_sub(c, c.r[1], 0x1u, 0, 4);
    // 00f1e0  jge 0xf1a3
    X86_AT(c, 0xf1e0u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xf1a3u); goto L_f1a3; }
    X86_TICK(c, 10);
    // 00f1e2  ret 
    X86_AT(c, 0xf1e2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf1bau, "ran off the end of a function");
}
void f_0000f1bf(X86Cpu& c) {
    goto L_f1bf;
L_f1a3:
    X86_TICK(c, 14);
    // 00f1a3  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1a3u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1a4  cmp al, 0x80
    X86_AT(c, 0xf1a4u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 00f1a6  jbe 0xf1c8
    X86_AT(c, 0xf1a6u);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1a8  cmp al, 0xa0
    X86_AT(c, 0xf1a8u);
    (void)x86_sub(c, g8(c, 0), 0xA0u, 0, 1);
    // 00f1aa  jb 0xf1b4
    X86_AT(c, 0xf1aau);
    if (x86_cc(c, 2)) { goto L_f1b4; }
    X86_TICK(c, 7);
    // 00f1ac  cmp al, 0xdf
    X86_AT(c, 0xf1acu);
    (void)x86_sub(c, g8(c, 0), 0xDFu, 0, 1);
    // 00f1ae  jbe 0xf1c8
    X86_AT(c, 0xf1aeu);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1b0  cmp al, 0xec
    X86_AT(c, 0xf1b0u);
    (void)x86_sub(c, g8(c, 0), 0xECu, 0, 1);
    // 00f1b2  jae 0xf1c8
    X86_AT(c, 0xf1b2u);
    if (x86_cc(c, 3)) { goto L_f1c8; }
L_f1b4:
    X86_TICK(c, 13);
    // 00f1b4  mov ah, al
    X86_AT(c, 0xf1b4u);
    s8(c, 4, g8(c, 0));
    // 00f1b6  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1b6u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1b7  sub ecx, 2
    X86_AT(c, 0xf1b7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x2u, 0, 4); }
    // 00f1ba  mov edx, 0xf3f8
    X86_AT(c, 0xf1bau);
    c.r[2] = 0xF3F8u;
L_f1bf:
    X86_TICK(c, 7);
    // 00f1bf  call 0x101b4
    X86_AT(c, 0xf1bfu);
    push32(c, 0xf1c4u); f_000101b4(c); X86_RET(c, 0xf1c4u);
    X86_TICK(c, 7);
    // 00f1c4  jmp 0xf1d0
    X86_AT(c, 0xf1c4u);
    goto L_f1d0;
L_f1c8:
    X86_TICK(c, 6);
    // 00f1c8  sub ah, ah
    X86_AT(c, 0xf1c8u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f1ca  dec ecx
    X86_AT(c, 0xf1cau);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00f1cb  mov edx, 0xf2d0
    X86_AT(c, 0xf1cbu);
    c.r[2] = 0xF2D0u;
L_f1d0:
    X86_TICK(c, 13);
    // 00f1d0  push ecx
    X86_AT(c, 0xf1d0u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f1d1  push ds
    X86_AT(c, 0xf1d1u);
    push32(c, c.sreg[3]);
    // 00f1d2  push esi
    X86_AT(c, 0xf1d2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f1d3  call edx
    X86_AT(c, 0xf1d3u);
    { uint32_t t = c.r[2]; push32(c, 0xf1d5u); x86_call(c, t); X86_RET(c, 0xf1d5u); }
    X86_TICK(c, 15);
    // 00f1d5  pop esi
    X86_AT(c, 0xf1d5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f1d6  pop ds
    X86_AT(c, 0xf1d6u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f1d7  call 0xf244
    X86_AT(c, 0xf1d7u);
    push32(c, 0xf1dcu); f_0000f244(c); X86_RET(c, 0xf1dcu);
    X86_TICK(c, 11);
    // 00f1dc  pop ecx
    X86_AT(c, 0xf1dcu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f1dd  cmp ecx, 1
    X86_AT(c, 0xf1ddu);
    (void)x86_sub(c, c.r[1], 0x1u, 0, 4);
    // 00f1e0  jge 0xf1a3
    X86_AT(c, 0xf1e0u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xf1a3u); goto L_f1a3; }
    X86_TICK(c, 10);
    // 00f1e2  ret 
    X86_AT(c, 0xf1e2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf1bfu, "ran off the end of a function");
}
void f_0000f1c4(X86Cpu& c) {
    goto L_f1c4;
L_f1a3:
    X86_TICK(c, 14);
    // 00f1a3  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1a3u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1a4  cmp al, 0x80
    X86_AT(c, 0xf1a4u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 00f1a6  jbe 0xf1c8
    X86_AT(c, 0xf1a6u);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1a8  cmp al, 0xa0
    X86_AT(c, 0xf1a8u);
    (void)x86_sub(c, g8(c, 0), 0xA0u, 0, 1);
    // 00f1aa  jb 0xf1b4
    X86_AT(c, 0xf1aau);
    if (x86_cc(c, 2)) { goto L_f1b4; }
    X86_TICK(c, 7);
    // 00f1ac  cmp al, 0xdf
    X86_AT(c, 0xf1acu);
    (void)x86_sub(c, g8(c, 0), 0xDFu, 0, 1);
    // 00f1ae  jbe 0xf1c8
    X86_AT(c, 0xf1aeu);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1b0  cmp al, 0xec
    X86_AT(c, 0xf1b0u);
    (void)x86_sub(c, g8(c, 0), 0xECu, 0, 1);
    // 00f1b2  jae 0xf1c8
    X86_AT(c, 0xf1b2u);
    if (x86_cc(c, 3)) { goto L_f1c8; }
L_f1b4:
    X86_TICK(c, 20);
    // 00f1b4  mov ah, al
    X86_AT(c, 0xf1b4u);
    s8(c, 4, g8(c, 0));
    // 00f1b6  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1b6u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1b7  sub ecx, 2
    X86_AT(c, 0xf1b7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x2u, 0, 4); }
    // 00f1ba  mov edx, 0xf3f8
    X86_AT(c, 0xf1bau);
    c.r[2] = 0xF3F8u;
    // 00f1bf  call 0x101b4
    X86_AT(c, 0xf1bfu);
    push32(c, 0xf1c4u); f_000101b4(c); X86_RET(c, 0xf1c4u);
L_f1c4:
    X86_TICK(c, 7);
    // 00f1c4  jmp 0xf1d0
    X86_AT(c, 0xf1c4u);
    goto L_f1d0;
L_f1c8:
    X86_TICK(c, 6);
    // 00f1c8  sub ah, ah
    X86_AT(c, 0xf1c8u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f1ca  dec ecx
    X86_AT(c, 0xf1cau);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00f1cb  mov edx, 0xf2d0
    X86_AT(c, 0xf1cbu);
    c.r[2] = 0xF2D0u;
L_f1d0:
    X86_TICK(c, 13);
    // 00f1d0  push ecx
    X86_AT(c, 0xf1d0u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f1d1  push ds
    X86_AT(c, 0xf1d1u);
    push32(c, c.sreg[3]);
    // 00f1d2  push esi
    X86_AT(c, 0xf1d2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f1d3  call edx
    X86_AT(c, 0xf1d3u);
    { uint32_t t = c.r[2]; push32(c, 0xf1d5u); x86_call(c, t); X86_RET(c, 0xf1d5u); }
    X86_TICK(c, 15);
    // 00f1d5  pop esi
    X86_AT(c, 0xf1d5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f1d6  pop ds
    X86_AT(c, 0xf1d6u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f1d7  call 0xf244
    X86_AT(c, 0xf1d7u);
    push32(c, 0xf1dcu); f_0000f244(c); X86_RET(c, 0xf1dcu);
    X86_TICK(c, 11);
    // 00f1dc  pop ecx
    X86_AT(c, 0xf1dcu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f1dd  cmp ecx, 1
    X86_AT(c, 0xf1ddu);
    (void)x86_sub(c, c.r[1], 0x1u, 0, 4);
    // 00f1e0  jge 0xf1a3
    X86_AT(c, 0xf1e0u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xf1a3u); goto L_f1a3; }
    X86_TICK(c, 10);
    // 00f1e2  ret 
    X86_AT(c, 0xf1e2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf1c4u, "ran off the end of a function");
}
void f_0000f1c8(X86Cpu& c) {
    goto L_f1c8;
L_f1a3:
    X86_TICK(c, 14);
    // 00f1a3  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1a3u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1a4  cmp al, 0x80
    X86_AT(c, 0xf1a4u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 00f1a6  jbe 0xf1c8
    X86_AT(c, 0xf1a6u);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1a8  cmp al, 0xa0
    X86_AT(c, 0xf1a8u);
    (void)x86_sub(c, g8(c, 0), 0xA0u, 0, 1);
    // 00f1aa  jb 0xf1b4
    X86_AT(c, 0xf1aau);
    if (x86_cc(c, 2)) { goto L_f1b4; }
    X86_TICK(c, 7);
    // 00f1ac  cmp al, 0xdf
    X86_AT(c, 0xf1acu);
    (void)x86_sub(c, g8(c, 0), 0xDFu, 0, 1);
    // 00f1ae  jbe 0xf1c8
    X86_AT(c, 0xf1aeu);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1b0  cmp al, 0xec
    X86_AT(c, 0xf1b0u);
    (void)x86_sub(c, g8(c, 0), 0xECu, 0, 1);
    // 00f1b2  jae 0xf1c8
    X86_AT(c, 0xf1b2u);
    if (x86_cc(c, 3)) { goto L_f1c8; }
L_f1b4:
    X86_TICK(c, 20);
    // 00f1b4  mov ah, al
    X86_AT(c, 0xf1b4u);
    s8(c, 4, g8(c, 0));
    // 00f1b6  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1b6u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1b7  sub ecx, 2
    X86_AT(c, 0xf1b7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x2u, 0, 4); }
    // 00f1ba  mov edx, 0xf3f8
    X86_AT(c, 0xf1bau);
    c.r[2] = 0xF3F8u;
    // 00f1bf  call 0x101b4
    X86_AT(c, 0xf1bfu);
    push32(c, 0xf1c4u); f_000101b4(c); X86_RET(c, 0xf1c4u);
    X86_TICK(c, 7);
    // 00f1c4  jmp 0xf1d0
    X86_AT(c, 0xf1c4u);
    goto L_f1d0;
L_f1c8:
    X86_TICK(c, 6);
    // 00f1c8  sub ah, ah
    X86_AT(c, 0xf1c8u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f1ca  dec ecx
    X86_AT(c, 0xf1cau);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00f1cb  mov edx, 0xf2d0
    X86_AT(c, 0xf1cbu);
    c.r[2] = 0xF2D0u;
L_f1d0:
    X86_TICK(c, 13);
    // 00f1d0  push ecx
    X86_AT(c, 0xf1d0u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f1d1  push ds
    X86_AT(c, 0xf1d1u);
    push32(c, c.sreg[3]);
    // 00f1d2  push esi
    X86_AT(c, 0xf1d2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f1d3  call edx
    X86_AT(c, 0xf1d3u);
    { uint32_t t = c.r[2]; push32(c, 0xf1d5u); x86_call(c, t); X86_RET(c, 0xf1d5u); }
    X86_TICK(c, 15);
    // 00f1d5  pop esi
    X86_AT(c, 0xf1d5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f1d6  pop ds
    X86_AT(c, 0xf1d6u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f1d7  call 0xf244
    X86_AT(c, 0xf1d7u);
    push32(c, 0xf1dcu); f_0000f244(c); X86_RET(c, 0xf1dcu);
    X86_TICK(c, 11);
    // 00f1dc  pop ecx
    X86_AT(c, 0xf1dcu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f1dd  cmp ecx, 1
    X86_AT(c, 0xf1ddu);
    (void)x86_sub(c, c.r[1], 0x1u, 0, 4);
    // 00f1e0  jge 0xf1a3
    X86_AT(c, 0xf1e0u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xf1a3u); goto L_f1a3; }
    X86_TICK(c, 10);
    // 00f1e2  ret 
    X86_AT(c, 0xf1e2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf1c8u, "ran off the end of a function");
}
void f_0000f1ca(X86Cpu& c) {
    goto L_f1ca;
L_f1a3:
    X86_TICK(c, 14);
    // 00f1a3  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1a3u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1a4  cmp al, 0x80
    X86_AT(c, 0xf1a4u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 00f1a6  jbe 0xf1c8
    X86_AT(c, 0xf1a6u);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1a8  cmp al, 0xa0
    X86_AT(c, 0xf1a8u);
    (void)x86_sub(c, g8(c, 0), 0xA0u, 0, 1);
    // 00f1aa  jb 0xf1b4
    X86_AT(c, 0xf1aau);
    if (x86_cc(c, 2)) { goto L_f1b4; }
    X86_TICK(c, 7);
    // 00f1ac  cmp al, 0xdf
    X86_AT(c, 0xf1acu);
    (void)x86_sub(c, g8(c, 0), 0xDFu, 0, 1);
    // 00f1ae  jbe 0xf1c8
    X86_AT(c, 0xf1aeu);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1b0  cmp al, 0xec
    X86_AT(c, 0xf1b0u);
    (void)x86_sub(c, g8(c, 0), 0xECu, 0, 1);
    // 00f1b2  jae 0xf1c8
    X86_AT(c, 0xf1b2u);
    if (x86_cc(c, 3)) { goto L_f1c8; }
L_f1b4:
    X86_TICK(c, 20);
    // 00f1b4  mov ah, al
    X86_AT(c, 0xf1b4u);
    s8(c, 4, g8(c, 0));
    // 00f1b6  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1b6u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1b7  sub ecx, 2
    X86_AT(c, 0xf1b7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x2u, 0, 4); }
    // 00f1ba  mov edx, 0xf3f8
    X86_AT(c, 0xf1bau);
    c.r[2] = 0xF3F8u;
    // 00f1bf  call 0x101b4
    X86_AT(c, 0xf1bfu);
    push32(c, 0xf1c4u); f_000101b4(c); X86_RET(c, 0xf1c4u);
    X86_TICK(c, 7);
    // 00f1c4  jmp 0xf1d0
    X86_AT(c, 0xf1c4u);
    goto L_f1d0;
L_f1c8:
    X86_TICK(c, 2);
    // 00f1c8  sub ah, ah
    X86_AT(c, 0xf1c8u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
L_f1ca:
    X86_TICK(c, 4);
    // 00f1ca  dec ecx
    X86_AT(c, 0xf1cau);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00f1cb  mov edx, 0xf2d0
    X86_AT(c, 0xf1cbu);
    c.r[2] = 0xF2D0u;
L_f1d0:
    X86_TICK(c, 13);
    // 00f1d0  push ecx
    X86_AT(c, 0xf1d0u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f1d1  push ds
    X86_AT(c, 0xf1d1u);
    push32(c, c.sreg[3]);
    // 00f1d2  push esi
    X86_AT(c, 0xf1d2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f1d3  call edx
    X86_AT(c, 0xf1d3u);
    { uint32_t t = c.r[2]; push32(c, 0xf1d5u); x86_call(c, t); X86_RET(c, 0xf1d5u); }
    X86_TICK(c, 15);
    // 00f1d5  pop esi
    X86_AT(c, 0xf1d5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f1d6  pop ds
    X86_AT(c, 0xf1d6u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f1d7  call 0xf244
    X86_AT(c, 0xf1d7u);
    push32(c, 0xf1dcu); f_0000f244(c); X86_RET(c, 0xf1dcu);
    X86_TICK(c, 11);
    // 00f1dc  pop ecx
    X86_AT(c, 0xf1dcu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f1dd  cmp ecx, 1
    X86_AT(c, 0xf1ddu);
    (void)x86_sub(c, c.r[1], 0x1u, 0, 4);
    // 00f1e0  jge 0xf1a3
    X86_AT(c, 0xf1e0u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xf1a3u); goto L_f1a3; }
    X86_TICK(c, 10);
    // 00f1e2  ret 
    X86_AT(c, 0xf1e2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf1cau, "ran off the end of a function");
}
void f_0000f1cb(X86Cpu& c) {
    goto L_f1cb;
L_f1a3:
    X86_TICK(c, 14);
    // 00f1a3  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1a3u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1a4  cmp al, 0x80
    X86_AT(c, 0xf1a4u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 00f1a6  jbe 0xf1c8
    X86_AT(c, 0xf1a6u);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1a8  cmp al, 0xa0
    X86_AT(c, 0xf1a8u);
    (void)x86_sub(c, g8(c, 0), 0xA0u, 0, 1);
    // 00f1aa  jb 0xf1b4
    X86_AT(c, 0xf1aau);
    if (x86_cc(c, 2)) { goto L_f1b4; }
    X86_TICK(c, 7);
    // 00f1ac  cmp al, 0xdf
    X86_AT(c, 0xf1acu);
    (void)x86_sub(c, g8(c, 0), 0xDFu, 0, 1);
    // 00f1ae  jbe 0xf1c8
    X86_AT(c, 0xf1aeu);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1b0  cmp al, 0xec
    X86_AT(c, 0xf1b0u);
    (void)x86_sub(c, g8(c, 0), 0xECu, 0, 1);
    // 00f1b2  jae 0xf1c8
    X86_AT(c, 0xf1b2u);
    if (x86_cc(c, 3)) { goto L_f1c8; }
L_f1b4:
    X86_TICK(c, 20);
    // 00f1b4  mov ah, al
    X86_AT(c, 0xf1b4u);
    s8(c, 4, g8(c, 0));
    // 00f1b6  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1b6u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1b7  sub ecx, 2
    X86_AT(c, 0xf1b7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x2u, 0, 4); }
    // 00f1ba  mov edx, 0xf3f8
    X86_AT(c, 0xf1bau);
    c.r[2] = 0xF3F8u;
    // 00f1bf  call 0x101b4
    X86_AT(c, 0xf1bfu);
    push32(c, 0xf1c4u); f_000101b4(c); X86_RET(c, 0xf1c4u);
    X86_TICK(c, 7);
    // 00f1c4  jmp 0xf1d0
    X86_AT(c, 0xf1c4u);
    goto L_f1d0;
L_f1c8:
    X86_TICK(c, 4);
    // 00f1c8  sub ah, ah
    X86_AT(c, 0xf1c8u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f1ca  dec ecx
    X86_AT(c, 0xf1cau);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
L_f1cb:
    X86_TICK(c, 2);
    // 00f1cb  mov edx, 0xf2d0
    X86_AT(c, 0xf1cbu);
    c.r[2] = 0xF2D0u;
L_f1d0:
    X86_TICK(c, 13);
    // 00f1d0  push ecx
    X86_AT(c, 0xf1d0u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f1d1  push ds
    X86_AT(c, 0xf1d1u);
    push32(c, c.sreg[3]);
    // 00f1d2  push esi
    X86_AT(c, 0xf1d2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f1d3  call edx
    X86_AT(c, 0xf1d3u);
    { uint32_t t = c.r[2]; push32(c, 0xf1d5u); x86_call(c, t); X86_RET(c, 0xf1d5u); }
    X86_TICK(c, 15);
    // 00f1d5  pop esi
    X86_AT(c, 0xf1d5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f1d6  pop ds
    X86_AT(c, 0xf1d6u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f1d7  call 0xf244
    X86_AT(c, 0xf1d7u);
    push32(c, 0xf1dcu); f_0000f244(c); X86_RET(c, 0xf1dcu);
    X86_TICK(c, 11);
    // 00f1dc  pop ecx
    X86_AT(c, 0xf1dcu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f1dd  cmp ecx, 1
    X86_AT(c, 0xf1ddu);
    (void)x86_sub(c, c.r[1], 0x1u, 0, 4);
    // 00f1e0  jge 0xf1a3
    X86_AT(c, 0xf1e0u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xf1a3u); goto L_f1a3; }
    X86_TICK(c, 10);
    // 00f1e2  ret 
    X86_AT(c, 0xf1e2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf1cbu, "ran off the end of a function");
}
void f_0000f1d0(X86Cpu& c) {
    goto L_f1d0;
L_f1a3:
    X86_TICK(c, 14);
    // 00f1a3  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1a3u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1a4  cmp al, 0x80
    X86_AT(c, 0xf1a4u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 00f1a6  jbe 0xf1c8
    X86_AT(c, 0xf1a6u);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1a8  cmp al, 0xa0
    X86_AT(c, 0xf1a8u);
    (void)x86_sub(c, g8(c, 0), 0xA0u, 0, 1);
    // 00f1aa  jb 0xf1b4
    X86_AT(c, 0xf1aau);
    if (x86_cc(c, 2)) { goto L_f1b4; }
    X86_TICK(c, 7);
    // 00f1ac  cmp al, 0xdf
    X86_AT(c, 0xf1acu);
    (void)x86_sub(c, g8(c, 0), 0xDFu, 0, 1);
    // 00f1ae  jbe 0xf1c8
    X86_AT(c, 0xf1aeu);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1b0  cmp al, 0xec
    X86_AT(c, 0xf1b0u);
    (void)x86_sub(c, g8(c, 0), 0xECu, 0, 1);
    // 00f1b2  jae 0xf1c8
    X86_AT(c, 0xf1b2u);
    if (x86_cc(c, 3)) { goto L_f1c8; }
L_f1b4:
    X86_TICK(c, 20);
    // 00f1b4  mov ah, al
    X86_AT(c, 0xf1b4u);
    s8(c, 4, g8(c, 0));
    // 00f1b6  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1b6u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1b7  sub ecx, 2
    X86_AT(c, 0xf1b7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x2u, 0, 4); }
    // 00f1ba  mov edx, 0xf3f8
    X86_AT(c, 0xf1bau);
    c.r[2] = 0xF3F8u;
    // 00f1bf  call 0x101b4
    X86_AT(c, 0xf1bfu);
    push32(c, 0xf1c4u); f_000101b4(c); X86_RET(c, 0xf1c4u);
    X86_TICK(c, 7);
    // 00f1c4  jmp 0xf1d0
    X86_AT(c, 0xf1c4u);
    goto L_f1d0;
L_f1c8:
    X86_TICK(c, 6);
    // 00f1c8  sub ah, ah
    X86_AT(c, 0xf1c8u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f1ca  dec ecx
    X86_AT(c, 0xf1cau);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00f1cb  mov edx, 0xf2d0
    X86_AT(c, 0xf1cbu);
    c.r[2] = 0xF2D0u;
L_f1d0:
    X86_TICK(c, 13);
    // 00f1d0  push ecx
    X86_AT(c, 0xf1d0u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f1d1  push ds
    X86_AT(c, 0xf1d1u);
    push32(c, c.sreg[3]);
    // 00f1d2  push esi
    X86_AT(c, 0xf1d2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f1d3  call edx
    X86_AT(c, 0xf1d3u);
    { uint32_t t = c.r[2]; push32(c, 0xf1d5u); x86_call(c, t); X86_RET(c, 0xf1d5u); }
    X86_TICK(c, 15);
    // 00f1d5  pop esi
    X86_AT(c, 0xf1d5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f1d6  pop ds
    X86_AT(c, 0xf1d6u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f1d7  call 0xf244
    X86_AT(c, 0xf1d7u);
    push32(c, 0xf1dcu); f_0000f244(c); X86_RET(c, 0xf1dcu);
    X86_TICK(c, 11);
    // 00f1dc  pop ecx
    X86_AT(c, 0xf1dcu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f1dd  cmp ecx, 1
    X86_AT(c, 0xf1ddu);
    (void)x86_sub(c, c.r[1], 0x1u, 0, 4);
    // 00f1e0  jge 0xf1a3
    X86_AT(c, 0xf1e0u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xf1a3u); goto L_f1a3; }
    X86_TICK(c, 10);
    // 00f1e2  ret 
    X86_AT(c, 0xf1e2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf1d0u, "ran off the end of a function");
}
void f_0000f1d1(X86Cpu& c) {
    goto L_f1d1;
L_f1a3:
    X86_TICK(c, 14);
    // 00f1a3  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1a3u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1a4  cmp al, 0x80
    X86_AT(c, 0xf1a4u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 00f1a6  jbe 0xf1c8
    X86_AT(c, 0xf1a6u);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1a8  cmp al, 0xa0
    X86_AT(c, 0xf1a8u);
    (void)x86_sub(c, g8(c, 0), 0xA0u, 0, 1);
    // 00f1aa  jb 0xf1b4
    X86_AT(c, 0xf1aau);
    if (x86_cc(c, 2)) { goto L_f1b4; }
    X86_TICK(c, 7);
    // 00f1ac  cmp al, 0xdf
    X86_AT(c, 0xf1acu);
    (void)x86_sub(c, g8(c, 0), 0xDFu, 0, 1);
    // 00f1ae  jbe 0xf1c8
    X86_AT(c, 0xf1aeu);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1b0  cmp al, 0xec
    X86_AT(c, 0xf1b0u);
    (void)x86_sub(c, g8(c, 0), 0xECu, 0, 1);
    // 00f1b2  jae 0xf1c8
    X86_AT(c, 0xf1b2u);
    if (x86_cc(c, 3)) { goto L_f1c8; }
L_f1b4:
    X86_TICK(c, 20);
    // 00f1b4  mov ah, al
    X86_AT(c, 0xf1b4u);
    s8(c, 4, g8(c, 0));
    // 00f1b6  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1b6u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1b7  sub ecx, 2
    X86_AT(c, 0xf1b7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x2u, 0, 4); }
    // 00f1ba  mov edx, 0xf3f8
    X86_AT(c, 0xf1bau);
    c.r[2] = 0xF3F8u;
    // 00f1bf  call 0x101b4
    X86_AT(c, 0xf1bfu);
    push32(c, 0xf1c4u); f_000101b4(c); X86_RET(c, 0xf1c4u);
    X86_TICK(c, 7);
    // 00f1c4  jmp 0xf1d0
    X86_AT(c, 0xf1c4u);
    goto L_f1d0;
L_f1c8:
    X86_TICK(c, 6);
    // 00f1c8  sub ah, ah
    X86_AT(c, 0xf1c8u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f1ca  dec ecx
    X86_AT(c, 0xf1cau);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00f1cb  mov edx, 0xf2d0
    X86_AT(c, 0xf1cbu);
    c.r[2] = 0xF2D0u;
L_f1d0:
    X86_TICK(c, 2);
    // 00f1d0  push ecx
    X86_AT(c, 0xf1d0u);
    { uint32_t v = c.r[1]; push32(c, v); }
L_f1d1:
    X86_TICK(c, 11);
    // 00f1d1  push ds
    X86_AT(c, 0xf1d1u);
    push32(c, c.sreg[3]);
    // 00f1d2  push esi
    X86_AT(c, 0xf1d2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f1d3  call edx
    X86_AT(c, 0xf1d3u);
    { uint32_t t = c.r[2]; push32(c, 0xf1d5u); x86_call(c, t); X86_RET(c, 0xf1d5u); }
    X86_TICK(c, 15);
    // 00f1d5  pop esi
    X86_AT(c, 0xf1d5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f1d6  pop ds
    X86_AT(c, 0xf1d6u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f1d7  call 0xf244
    X86_AT(c, 0xf1d7u);
    push32(c, 0xf1dcu); f_0000f244(c); X86_RET(c, 0xf1dcu);
    X86_TICK(c, 11);
    // 00f1dc  pop ecx
    X86_AT(c, 0xf1dcu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f1dd  cmp ecx, 1
    X86_AT(c, 0xf1ddu);
    (void)x86_sub(c, c.r[1], 0x1u, 0, 4);
    // 00f1e0  jge 0xf1a3
    X86_AT(c, 0xf1e0u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xf1a3u); goto L_f1a3; }
    X86_TICK(c, 10);
    // 00f1e2  ret 
    X86_AT(c, 0xf1e2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf1d1u, "ran off the end of a function");
}
void f_0000f1d2(X86Cpu& c) {
    goto L_f1d2;
L_f1a3:
    X86_TICK(c, 14);
    // 00f1a3  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1a3u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1a4  cmp al, 0x80
    X86_AT(c, 0xf1a4u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 00f1a6  jbe 0xf1c8
    X86_AT(c, 0xf1a6u);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1a8  cmp al, 0xa0
    X86_AT(c, 0xf1a8u);
    (void)x86_sub(c, g8(c, 0), 0xA0u, 0, 1);
    // 00f1aa  jb 0xf1b4
    X86_AT(c, 0xf1aau);
    if (x86_cc(c, 2)) { goto L_f1b4; }
    X86_TICK(c, 7);
    // 00f1ac  cmp al, 0xdf
    X86_AT(c, 0xf1acu);
    (void)x86_sub(c, g8(c, 0), 0xDFu, 0, 1);
    // 00f1ae  jbe 0xf1c8
    X86_AT(c, 0xf1aeu);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1b0  cmp al, 0xec
    X86_AT(c, 0xf1b0u);
    (void)x86_sub(c, g8(c, 0), 0xECu, 0, 1);
    // 00f1b2  jae 0xf1c8
    X86_AT(c, 0xf1b2u);
    if (x86_cc(c, 3)) { goto L_f1c8; }
L_f1b4:
    X86_TICK(c, 20);
    // 00f1b4  mov ah, al
    X86_AT(c, 0xf1b4u);
    s8(c, 4, g8(c, 0));
    // 00f1b6  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1b6u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1b7  sub ecx, 2
    X86_AT(c, 0xf1b7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x2u, 0, 4); }
    // 00f1ba  mov edx, 0xf3f8
    X86_AT(c, 0xf1bau);
    c.r[2] = 0xF3F8u;
    // 00f1bf  call 0x101b4
    X86_AT(c, 0xf1bfu);
    push32(c, 0xf1c4u); f_000101b4(c); X86_RET(c, 0xf1c4u);
    X86_TICK(c, 7);
    // 00f1c4  jmp 0xf1d0
    X86_AT(c, 0xf1c4u);
    goto L_f1d0;
L_f1c8:
    X86_TICK(c, 6);
    // 00f1c8  sub ah, ah
    X86_AT(c, 0xf1c8u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f1ca  dec ecx
    X86_AT(c, 0xf1cau);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00f1cb  mov edx, 0xf2d0
    X86_AT(c, 0xf1cbu);
    c.r[2] = 0xF2D0u;
L_f1d0:
    X86_TICK(c, 4);
    // 00f1d0  push ecx
    X86_AT(c, 0xf1d0u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f1d1  push ds
    X86_AT(c, 0xf1d1u);
    push32(c, c.sreg[3]);
L_f1d2:
    X86_TICK(c, 9);
    // 00f1d2  push esi
    X86_AT(c, 0xf1d2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f1d3  call edx
    X86_AT(c, 0xf1d3u);
    { uint32_t t = c.r[2]; push32(c, 0xf1d5u); x86_call(c, t); X86_RET(c, 0xf1d5u); }
    X86_TICK(c, 15);
    // 00f1d5  pop esi
    X86_AT(c, 0xf1d5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f1d6  pop ds
    X86_AT(c, 0xf1d6u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f1d7  call 0xf244
    X86_AT(c, 0xf1d7u);
    push32(c, 0xf1dcu); f_0000f244(c); X86_RET(c, 0xf1dcu);
    X86_TICK(c, 11);
    // 00f1dc  pop ecx
    X86_AT(c, 0xf1dcu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f1dd  cmp ecx, 1
    X86_AT(c, 0xf1ddu);
    (void)x86_sub(c, c.r[1], 0x1u, 0, 4);
    // 00f1e0  jge 0xf1a3
    X86_AT(c, 0xf1e0u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xf1a3u); goto L_f1a3; }
    X86_TICK(c, 10);
    // 00f1e2  ret 
    X86_AT(c, 0xf1e2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf1d2u, "ran off the end of a function");
}
void f_0000f1d3(X86Cpu& c) {
    goto L_f1d3;
L_f1a3:
    X86_TICK(c, 14);
    // 00f1a3  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1a3u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1a4  cmp al, 0x80
    X86_AT(c, 0xf1a4u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 00f1a6  jbe 0xf1c8
    X86_AT(c, 0xf1a6u);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1a8  cmp al, 0xa0
    X86_AT(c, 0xf1a8u);
    (void)x86_sub(c, g8(c, 0), 0xA0u, 0, 1);
    // 00f1aa  jb 0xf1b4
    X86_AT(c, 0xf1aau);
    if (x86_cc(c, 2)) { goto L_f1b4; }
    X86_TICK(c, 7);
    // 00f1ac  cmp al, 0xdf
    X86_AT(c, 0xf1acu);
    (void)x86_sub(c, g8(c, 0), 0xDFu, 0, 1);
    // 00f1ae  jbe 0xf1c8
    X86_AT(c, 0xf1aeu);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1b0  cmp al, 0xec
    X86_AT(c, 0xf1b0u);
    (void)x86_sub(c, g8(c, 0), 0xECu, 0, 1);
    // 00f1b2  jae 0xf1c8
    X86_AT(c, 0xf1b2u);
    if (x86_cc(c, 3)) { goto L_f1c8; }
L_f1b4:
    X86_TICK(c, 20);
    // 00f1b4  mov ah, al
    X86_AT(c, 0xf1b4u);
    s8(c, 4, g8(c, 0));
    // 00f1b6  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1b6u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1b7  sub ecx, 2
    X86_AT(c, 0xf1b7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x2u, 0, 4); }
    // 00f1ba  mov edx, 0xf3f8
    X86_AT(c, 0xf1bau);
    c.r[2] = 0xF3F8u;
    // 00f1bf  call 0x101b4
    X86_AT(c, 0xf1bfu);
    push32(c, 0xf1c4u); f_000101b4(c); X86_RET(c, 0xf1c4u);
    X86_TICK(c, 7);
    // 00f1c4  jmp 0xf1d0
    X86_AT(c, 0xf1c4u);
    goto L_f1d0;
L_f1c8:
    X86_TICK(c, 6);
    // 00f1c8  sub ah, ah
    X86_AT(c, 0xf1c8u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f1ca  dec ecx
    X86_AT(c, 0xf1cau);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00f1cb  mov edx, 0xf2d0
    X86_AT(c, 0xf1cbu);
    c.r[2] = 0xF2D0u;
L_f1d0:
    X86_TICK(c, 6);
    // 00f1d0  push ecx
    X86_AT(c, 0xf1d0u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f1d1  push ds
    X86_AT(c, 0xf1d1u);
    push32(c, c.sreg[3]);
    // 00f1d2  push esi
    X86_AT(c, 0xf1d2u);
    { uint32_t v = c.r[6]; push32(c, v); }
L_f1d3:
    X86_TICK(c, 7);
    // 00f1d3  call edx
    X86_AT(c, 0xf1d3u);
    { uint32_t t = c.r[2]; push32(c, 0xf1d5u); x86_call(c, t); X86_RET(c, 0xf1d5u); }
    X86_TICK(c, 15);
    // 00f1d5  pop esi
    X86_AT(c, 0xf1d5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f1d6  pop ds
    X86_AT(c, 0xf1d6u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f1d7  call 0xf244
    X86_AT(c, 0xf1d7u);
    push32(c, 0xf1dcu); f_0000f244(c); X86_RET(c, 0xf1dcu);
    X86_TICK(c, 11);
    // 00f1dc  pop ecx
    X86_AT(c, 0xf1dcu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f1dd  cmp ecx, 1
    X86_AT(c, 0xf1ddu);
    (void)x86_sub(c, c.r[1], 0x1u, 0, 4);
    // 00f1e0  jge 0xf1a3
    X86_AT(c, 0xf1e0u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xf1a3u); goto L_f1a3; }
    X86_TICK(c, 10);
    // 00f1e2  ret 
    X86_AT(c, 0xf1e2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf1d3u, "ran off the end of a function");
}
void f_0000f1d5(X86Cpu& c) {
    goto L_f1d5;
L_f1a3:
    X86_TICK(c, 14);
    // 00f1a3  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1a3u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1a4  cmp al, 0x80
    X86_AT(c, 0xf1a4u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 00f1a6  jbe 0xf1c8
    X86_AT(c, 0xf1a6u);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1a8  cmp al, 0xa0
    X86_AT(c, 0xf1a8u);
    (void)x86_sub(c, g8(c, 0), 0xA0u, 0, 1);
    // 00f1aa  jb 0xf1b4
    X86_AT(c, 0xf1aau);
    if (x86_cc(c, 2)) { goto L_f1b4; }
    X86_TICK(c, 7);
    // 00f1ac  cmp al, 0xdf
    X86_AT(c, 0xf1acu);
    (void)x86_sub(c, g8(c, 0), 0xDFu, 0, 1);
    // 00f1ae  jbe 0xf1c8
    X86_AT(c, 0xf1aeu);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1b0  cmp al, 0xec
    X86_AT(c, 0xf1b0u);
    (void)x86_sub(c, g8(c, 0), 0xECu, 0, 1);
    // 00f1b2  jae 0xf1c8
    X86_AT(c, 0xf1b2u);
    if (x86_cc(c, 3)) { goto L_f1c8; }
L_f1b4:
    X86_TICK(c, 20);
    // 00f1b4  mov ah, al
    X86_AT(c, 0xf1b4u);
    s8(c, 4, g8(c, 0));
    // 00f1b6  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1b6u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1b7  sub ecx, 2
    X86_AT(c, 0xf1b7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x2u, 0, 4); }
    // 00f1ba  mov edx, 0xf3f8
    X86_AT(c, 0xf1bau);
    c.r[2] = 0xF3F8u;
    // 00f1bf  call 0x101b4
    X86_AT(c, 0xf1bfu);
    push32(c, 0xf1c4u); f_000101b4(c); X86_RET(c, 0xf1c4u);
    X86_TICK(c, 7);
    // 00f1c4  jmp 0xf1d0
    X86_AT(c, 0xf1c4u);
    goto L_f1d0;
L_f1c8:
    X86_TICK(c, 6);
    // 00f1c8  sub ah, ah
    X86_AT(c, 0xf1c8u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f1ca  dec ecx
    X86_AT(c, 0xf1cau);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00f1cb  mov edx, 0xf2d0
    X86_AT(c, 0xf1cbu);
    c.r[2] = 0xF2D0u;
L_f1d0:
    X86_TICK(c, 13);
    // 00f1d0  push ecx
    X86_AT(c, 0xf1d0u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f1d1  push ds
    X86_AT(c, 0xf1d1u);
    push32(c, c.sreg[3]);
    // 00f1d2  push esi
    X86_AT(c, 0xf1d2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f1d3  call edx
    X86_AT(c, 0xf1d3u);
    { uint32_t t = c.r[2]; push32(c, 0xf1d5u); x86_call(c, t); X86_RET(c, 0xf1d5u); }
L_f1d5:
    X86_TICK(c, 15);
    // 00f1d5  pop esi
    X86_AT(c, 0xf1d5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f1d6  pop ds
    X86_AT(c, 0xf1d6u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f1d7  call 0xf244
    X86_AT(c, 0xf1d7u);
    push32(c, 0xf1dcu); f_0000f244(c); X86_RET(c, 0xf1dcu);
    X86_TICK(c, 11);
    // 00f1dc  pop ecx
    X86_AT(c, 0xf1dcu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f1dd  cmp ecx, 1
    X86_AT(c, 0xf1ddu);
    (void)x86_sub(c, c.r[1], 0x1u, 0, 4);
    // 00f1e0  jge 0xf1a3
    X86_AT(c, 0xf1e0u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xf1a3u); goto L_f1a3; }
    X86_TICK(c, 10);
    // 00f1e2  ret 
    X86_AT(c, 0xf1e2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf1d5u, "ran off the end of a function");
}
void f_0000f1d6(X86Cpu& c) {
    goto L_f1d6;
L_f1a3:
    X86_TICK(c, 14);
    // 00f1a3  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1a3u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1a4  cmp al, 0x80
    X86_AT(c, 0xf1a4u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 00f1a6  jbe 0xf1c8
    X86_AT(c, 0xf1a6u);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1a8  cmp al, 0xa0
    X86_AT(c, 0xf1a8u);
    (void)x86_sub(c, g8(c, 0), 0xA0u, 0, 1);
    // 00f1aa  jb 0xf1b4
    X86_AT(c, 0xf1aau);
    if (x86_cc(c, 2)) { goto L_f1b4; }
    X86_TICK(c, 7);
    // 00f1ac  cmp al, 0xdf
    X86_AT(c, 0xf1acu);
    (void)x86_sub(c, g8(c, 0), 0xDFu, 0, 1);
    // 00f1ae  jbe 0xf1c8
    X86_AT(c, 0xf1aeu);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1b0  cmp al, 0xec
    X86_AT(c, 0xf1b0u);
    (void)x86_sub(c, g8(c, 0), 0xECu, 0, 1);
    // 00f1b2  jae 0xf1c8
    X86_AT(c, 0xf1b2u);
    if (x86_cc(c, 3)) { goto L_f1c8; }
L_f1b4:
    X86_TICK(c, 20);
    // 00f1b4  mov ah, al
    X86_AT(c, 0xf1b4u);
    s8(c, 4, g8(c, 0));
    // 00f1b6  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1b6u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1b7  sub ecx, 2
    X86_AT(c, 0xf1b7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x2u, 0, 4); }
    // 00f1ba  mov edx, 0xf3f8
    X86_AT(c, 0xf1bau);
    c.r[2] = 0xF3F8u;
    // 00f1bf  call 0x101b4
    X86_AT(c, 0xf1bfu);
    push32(c, 0xf1c4u); f_000101b4(c); X86_RET(c, 0xf1c4u);
    X86_TICK(c, 7);
    // 00f1c4  jmp 0xf1d0
    X86_AT(c, 0xf1c4u);
    goto L_f1d0;
L_f1c8:
    X86_TICK(c, 6);
    // 00f1c8  sub ah, ah
    X86_AT(c, 0xf1c8u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f1ca  dec ecx
    X86_AT(c, 0xf1cau);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00f1cb  mov edx, 0xf2d0
    X86_AT(c, 0xf1cbu);
    c.r[2] = 0xF2D0u;
L_f1d0:
    X86_TICK(c, 13);
    // 00f1d0  push ecx
    X86_AT(c, 0xf1d0u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f1d1  push ds
    X86_AT(c, 0xf1d1u);
    push32(c, c.sreg[3]);
    // 00f1d2  push esi
    X86_AT(c, 0xf1d2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f1d3  call edx
    X86_AT(c, 0xf1d3u);
    { uint32_t t = c.r[2]; push32(c, 0xf1d5u); x86_call(c, t); X86_RET(c, 0xf1d5u); }
    X86_TICK(c, 4);
    // 00f1d5  pop esi
    X86_AT(c, 0xf1d5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_f1d6:
    X86_TICK(c, 11);
    // 00f1d6  pop ds
    X86_AT(c, 0xf1d6u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f1d7  call 0xf244
    X86_AT(c, 0xf1d7u);
    push32(c, 0xf1dcu); f_0000f244(c); X86_RET(c, 0xf1dcu);
    X86_TICK(c, 11);
    // 00f1dc  pop ecx
    X86_AT(c, 0xf1dcu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f1dd  cmp ecx, 1
    X86_AT(c, 0xf1ddu);
    (void)x86_sub(c, c.r[1], 0x1u, 0, 4);
    // 00f1e0  jge 0xf1a3
    X86_AT(c, 0xf1e0u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xf1a3u); goto L_f1a3; }
    X86_TICK(c, 10);
    // 00f1e2  ret 
    X86_AT(c, 0xf1e2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf1d6u, "ran off the end of a function");
}
void f_0000f1d7(X86Cpu& c) {
    goto L_f1d7;
L_f1a3:
    X86_TICK(c, 14);
    // 00f1a3  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1a3u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1a4  cmp al, 0x80
    X86_AT(c, 0xf1a4u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 00f1a6  jbe 0xf1c8
    X86_AT(c, 0xf1a6u);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1a8  cmp al, 0xa0
    X86_AT(c, 0xf1a8u);
    (void)x86_sub(c, g8(c, 0), 0xA0u, 0, 1);
    // 00f1aa  jb 0xf1b4
    X86_AT(c, 0xf1aau);
    if (x86_cc(c, 2)) { goto L_f1b4; }
    X86_TICK(c, 7);
    // 00f1ac  cmp al, 0xdf
    X86_AT(c, 0xf1acu);
    (void)x86_sub(c, g8(c, 0), 0xDFu, 0, 1);
    // 00f1ae  jbe 0xf1c8
    X86_AT(c, 0xf1aeu);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1b0  cmp al, 0xec
    X86_AT(c, 0xf1b0u);
    (void)x86_sub(c, g8(c, 0), 0xECu, 0, 1);
    // 00f1b2  jae 0xf1c8
    X86_AT(c, 0xf1b2u);
    if (x86_cc(c, 3)) { goto L_f1c8; }
L_f1b4:
    X86_TICK(c, 20);
    // 00f1b4  mov ah, al
    X86_AT(c, 0xf1b4u);
    s8(c, 4, g8(c, 0));
    // 00f1b6  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1b6u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1b7  sub ecx, 2
    X86_AT(c, 0xf1b7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x2u, 0, 4); }
    // 00f1ba  mov edx, 0xf3f8
    X86_AT(c, 0xf1bau);
    c.r[2] = 0xF3F8u;
    // 00f1bf  call 0x101b4
    X86_AT(c, 0xf1bfu);
    push32(c, 0xf1c4u); f_000101b4(c); X86_RET(c, 0xf1c4u);
    X86_TICK(c, 7);
    // 00f1c4  jmp 0xf1d0
    X86_AT(c, 0xf1c4u);
    goto L_f1d0;
L_f1c8:
    X86_TICK(c, 6);
    // 00f1c8  sub ah, ah
    X86_AT(c, 0xf1c8u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f1ca  dec ecx
    X86_AT(c, 0xf1cau);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00f1cb  mov edx, 0xf2d0
    X86_AT(c, 0xf1cbu);
    c.r[2] = 0xF2D0u;
L_f1d0:
    X86_TICK(c, 13);
    // 00f1d0  push ecx
    X86_AT(c, 0xf1d0u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f1d1  push ds
    X86_AT(c, 0xf1d1u);
    push32(c, c.sreg[3]);
    // 00f1d2  push esi
    X86_AT(c, 0xf1d2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f1d3  call edx
    X86_AT(c, 0xf1d3u);
    { uint32_t t = c.r[2]; push32(c, 0xf1d5u); x86_call(c, t); X86_RET(c, 0xf1d5u); }
    X86_TICK(c, 8);
    // 00f1d5  pop esi
    X86_AT(c, 0xf1d5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f1d6  pop ds
    X86_AT(c, 0xf1d6u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_f1d7:
    X86_TICK(c, 7);
    // 00f1d7  call 0xf244
    X86_AT(c, 0xf1d7u);
    push32(c, 0xf1dcu); f_0000f244(c); X86_RET(c, 0xf1dcu);
    X86_TICK(c, 11);
    // 00f1dc  pop ecx
    X86_AT(c, 0xf1dcu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f1dd  cmp ecx, 1
    X86_AT(c, 0xf1ddu);
    (void)x86_sub(c, c.r[1], 0x1u, 0, 4);
    // 00f1e0  jge 0xf1a3
    X86_AT(c, 0xf1e0u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xf1a3u); goto L_f1a3; }
    X86_TICK(c, 10);
    // 00f1e2  ret 
    X86_AT(c, 0xf1e2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf1d7u, "ran off the end of a function");
}
void f_0000f1dc(X86Cpu& c) {
    goto L_f1dc;
L_f1a3:
    X86_TICK(c, 14);
    // 00f1a3  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1a3u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1a4  cmp al, 0x80
    X86_AT(c, 0xf1a4u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 00f1a6  jbe 0xf1c8
    X86_AT(c, 0xf1a6u);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1a8  cmp al, 0xa0
    X86_AT(c, 0xf1a8u);
    (void)x86_sub(c, g8(c, 0), 0xA0u, 0, 1);
    // 00f1aa  jb 0xf1b4
    X86_AT(c, 0xf1aau);
    if (x86_cc(c, 2)) { goto L_f1b4; }
    X86_TICK(c, 7);
    // 00f1ac  cmp al, 0xdf
    X86_AT(c, 0xf1acu);
    (void)x86_sub(c, g8(c, 0), 0xDFu, 0, 1);
    // 00f1ae  jbe 0xf1c8
    X86_AT(c, 0xf1aeu);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1b0  cmp al, 0xec
    X86_AT(c, 0xf1b0u);
    (void)x86_sub(c, g8(c, 0), 0xECu, 0, 1);
    // 00f1b2  jae 0xf1c8
    X86_AT(c, 0xf1b2u);
    if (x86_cc(c, 3)) { goto L_f1c8; }
L_f1b4:
    X86_TICK(c, 20);
    // 00f1b4  mov ah, al
    X86_AT(c, 0xf1b4u);
    s8(c, 4, g8(c, 0));
    // 00f1b6  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1b6u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1b7  sub ecx, 2
    X86_AT(c, 0xf1b7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x2u, 0, 4); }
    // 00f1ba  mov edx, 0xf3f8
    X86_AT(c, 0xf1bau);
    c.r[2] = 0xF3F8u;
    // 00f1bf  call 0x101b4
    X86_AT(c, 0xf1bfu);
    push32(c, 0xf1c4u); f_000101b4(c); X86_RET(c, 0xf1c4u);
    X86_TICK(c, 7);
    // 00f1c4  jmp 0xf1d0
    X86_AT(c, 0xf1c4u);
    goto L_f1d0;
L_f1c8:
    X86_TICK(c, 6);
    // 00f1c8  sub ah, ah
    X86_AT(c, 0xf1c8u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f1ca  dec ecx
    X86_AT(c, 0xf1cau);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00f1cb  mov edx, 0xf2d0
    X86_AT(c, 0xf1cbu);
    c.r[2] = 0xF2D0u;
L_f1d0:
    X86_TICK(c, 13);
    // 00f1d0  push ecx
    X86_AT(c, 0xf1d0u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f1d1  push ds
    X86_AT(c, 0xf1d1u);
    push32(c, c.sreg[3]);
    // 00f1d2  push esi
    X86_AT(c, 0xf1d2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f1d3  call edx
    X86_AT(c, 0xf1d3u);
    { uint32_t t = c.r[2]; push32(c, 0xf1d5u); x86_call(c, t); X86_RET(c, 0xf1d5u); }
    X86_TICK(c, 15);
    // 00f1d5  pop esi
    X86_AT(c, 0xf1d5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f1d6  pop ds
    X86_AT(c, 0xf1d6u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f1d7  call 0xf244
    X86_AT(c, 0xf1d7u);
    push32(c, 0xf1dcu); f_0000f244(c); X86_RET(c, 0xf1dcu);
L_f1dc:
    X86_TICK(c, 11);
    // 00f1dc  pop ecx
    X86_AT(c, 0xf1dcu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f1dd  cmp ecx, 1
    X86_AT(c, 0xf1ddu);
    (void)x86_sub(c, c.r[1], 0x1u, 0, 4);
    // 00f1e0  jge 0xf1a3
    X86_AT(c, 0xf1e0u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xf1a3u); goto L_f1a3; }
    X86_TICK(c, 10);
    // 00f1e2  ret 
    X86_AT(c, 0xf1e2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf1dcu, "ran off the end of a function");
}
void f_0000f1dd(X86Cpu& c) {
    goto L_f1dd;
L_f1a3:
    X86_TICK(c, 14);
    // 00f1a3  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1a3u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1a4  cmp al, 0x80
    X86_AT(c, 0xf1a4u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 00f1a6  jbe 0xf1c8
    X86_AT(c, 0xf1a6u);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1a8  cmp al, 0xa0
    X86_AT(c, 0xf1a8u);
    (void)x86_sub(c, g8(c, 0), 0xA0u, 0, 1);
    // 00f1aa  jb 0xf1b4
    X86_AT(c, 0xf1aau);
    if (x86_cc(c, 2)) { goto L_f1b4; }
    X86_TICK(c, 7);
    // 00f1ac  cmp al, 0xdf
    X86_AT(c, 0xf1acu);
    (void)x86_sub(c, g8(c, 0), 0xDFu, 0, 1);
    // 00f1ae  jbe 0xf1c8
    X86_AT(c, 0xf1aeu);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1b0  cmp al, 0xec
    X86_AT(c, 0xf1b0u);
    (void)x86_sub(c, g8(c, 0), 0xECu, 0, 1);
    // 00f1b2  jae 0xf1c8
    X86_AT(c, 0xf1b2u);
    if (x86_cc(c, 3)) { goto L_f1c8; }
L_f1b4:
    X86_TICK(c, 20);
    // 00f1b4  mov ah, al
    X86_AT(c, 0xf1b4u);
    s8(c, 4, g8(c, 0));
    // 00f1b6  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1b6u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1b7  sub ecx, 2
    X86_AT(c, 0xf1b7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x2u, 0, 4); }
    // 00f1ba  mov edx, 0xf3f8
    X86_AT(c, 0xf1bau);
    c.r[2] = 0xF3F8u;
    // 00f1bf  call 0x101b4
    X86_AT(c, 0xf1bfu);
    push32(c, 0xf1c4u); f_000101b4(c); X86_RET(c, 0xf1c4u);
    X86_TICK(c, 7);
    // 00f1c4  jmp 0xf1d0
    X86_AT(c, 0xf1c4u);
    goto L_f1d0;
L_f1c8:
    X86_TICK(c, 6);
    // 00f1c8  sub ah, ah
    X86_AT(c, 0xf1c8u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f1ca  dec ecx
    X86_AT(c, 0xf1cau);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00f1cb  mov edx, 0xf2d0
    X86_AT(c, 0xf1cbu);
    c.r[2] = 0xF2D0u;
L_f1d0:
    X86_TICK(c, 13);
    // 00f1d0  push ecx
    X86_AT(c, 0xf1d0u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f1d1  push ds
    X86_AT(c, 0xf1d1u);
    push32(c, c.sreg[3]);
    // 00f1d2  push esi
    X86_AT(c, 0xf1d2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f1d3  call edx
    X86_AT(c, 0xf1d3u);
    { uint32_t t = c.r[2]; push32(c, 0xf1d5u); x86_call(c, t); X86_RET(c, 0xf1d5u); }
    X86_TICK(c, 15);
    // 00f1d5  pop esi
    X86_AT(c, 0xf1d5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f1d6  pop ds
    X86_AT(c, 0xf1d6u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f1d7  call 0xf244
    X86_AT(c, 0xf1d7u);
    push32(c, 0xf1dcu); f_0000f244(c); X86_RET(c, 0xf1dcu);
    X86_TICK(c, 4);
    // 00f1dc  pop ecx
    X86_AT(c, 0xf1dcu);
    { uint32_t v = pop32(c); c.r[1] = v; }
L_f1dd:
    X86_TICK(c, 7);
    // 00f1dd  cmp ecx, 1
    X86_AT(c, 0xf1ddu);
    (void)x86_sub(c, c.r[1], 0x1u, 0, 4);
    // 00f1e0  jge 0xf1a3
    X86_AT(c, 0xf1e0u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xf1a3u); goto L_f1a3; }
    X86_TICK(c, 10);
    // 00f1e2  ret 
    X86_AT(c, 0xf1e2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf1ddu, "ran off the end of a function");
}
void f_0000f1e0(X86Cpu& c) {
    goto L_f1e0;
L_f1a3:
    X86_TICK(c, 14);
    // 00f1a3  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1a3u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1a4  cmp al, 0x80
    X86_AT(c, 0xf1a4u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 00f1a6  jbe 0xf1c8
    X86_AT(c, 0xf1a6u);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1a8  cmp al, 0xa0
    X86_AT(c, 0xf1a8u);
    (void)x86_sub(c, g8(c, 0), 0xA0u, 0, 1);
    // 00f1aa  jb 0xf1b4
    X86_AT(c, 0xf1aau);
    if (x86_cc(c, 2)) { goto L_f1b4; }
    X86_TICK(c, 7);
    // 00f1ac  cmp al, 0xdf
    X86_AT(c, 0xf1acu);
    (void)x86_sub(c, g8(c, 0), 0xDFu, 0, 1);
    // 00f1ae  jbe 0xf1c8
    X86_AT(c, 0xf1aeu);
    if (x86_cc(c, 6)) { goto L_f1c8; }
    X86_TICK(c, 7);
    // 00f1b0  cmp al, 0xec
    X86_AT(c, 0xf1b0u);
    (void)x86_sub(c, g8(c, 0), 0xECu, 0, 1);
    // 00f1b2  jae 0xf1c8
    X86_AT(c, 0xf1b2u);
    if (x86_cc(c, 3)) { goto L_f1c8; }
L_f1b4:
    X86_TICK(c, 20);
    // 00f1b4  mov ah, al
    X86_AT(c, 0xf1b4u);
    s8(c, 4, g8(c, 0));
    // 00f1b6  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1b6u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1b7  sub ecx, 2
    X86_AT(c, 0xf1b7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x2u, 0, 4); }
    // 00f1ba  mov edx, 0xf3f8
    X86_AT(c, 0xf1bau);
    c.r[2] = 0xF3F8u;
    // 00f1bf  call 0x101b4
    X86_AT(c, 0xf1bfu);
    push32(c, 0xf1c4u); f_000101b4(c); X86_RET(c, 0xf1c4u);
    X86_TICK(c, 7);
    // 00f1c4  jmp 0xf1d0
    X86_AT(c, 0xf1c4u);
    goto L_f1d0;
L_f1c8:
    X86_TICK(c, 6);
    // 00f1c8  sub ah, ah
    X86_AT(c, 0xf1c8u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f1ca  dec ecx
    X86_AT(c, 0xf1cau);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00f1cb  mov edx, 0xf2d0
    X86_AT(c, 0xf1cbu);
    c.r[2] = 0xF2D0u;
L_f1d0:
    X86_TICK(c, 13);
    // 00f1d0  push ecx
    X86_AT(c, 0xf1d0u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f1d1  push ds
    X86_AT(c, 0xf1d1u);
    push32(c, c.sreg[3]);
    // 00f1d2  push esi
    X86_AT(c, 0xf1d2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f1d3  call edx
    X86_AT(c, 0xf1d3u);
    { uint32_t t = c.r[2]; push32(c, 0xf1d5u); x86_call(c, t); X86_RET(c, 0xf1d5u); }
    X86_TICK(c, 15);
    // 00f1d5  pop esi
    X86_AT(c, 0xf1d5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f1d6  pop ds
    X86_AT(c, 0xf1d6u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f1d7  call 0xf244
    X86_AT(c, 0xf1d7u);
    push32(c, 0xf1dcu); f_0000f244(c); X86_RET(c, 0xf1dcu);
    X86_TICK(c, 6);
    // 00f1dc  pop ecx
    X86_AT(c, 0xf1dcu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f1dd  cmp ecx, 1
    X86_AT(c, 0xf1ddu);
    (void)x86_sub(c, c.r[1], 0x1u, 0, 4);
L_f1e0:
    X86_TICK(c, 5);
    // 00f1e0  jge 0xf1a3
    X86_AT(c, 0xf1e0u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xf1a3u); goto L_f1a3; }
    X86_TICK(c, 10);
    // 00f1e2  ret 
    X86_AT(c, 0xf1e2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf1e0u, "ran off the end of a function");
}
void f_0000f1e2(X86Cpu& c) {
    X86_TICK(c, 10);
    // 00f1e2  ret 
    X86_AT(c, 0xf1e2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf1e2u, "ran off the end of a function");
}
void f_0000f1e4(X86Cpu& c) {
    X86_TICK(c, 19);
    // 00f1e4  lds esi, fword ptr gs:[ebp + 0x33c]
    X86_AT(c, 0xf1e4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x33Cu)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 00f1eb  movzx ecx, word ptr gs:[ebp + 0x348]
    X86_AT(c, 0xf1ebu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x348u)));
    // 00f1f3  test ecx, ecx
    X86_AT(c, 0xf1f3u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 00f1f5  je 0xf211
    X86_AT(c, 0xf1f5u);
    if (x86_cc(c, 4)) { goto L_f211; }
    X86_TICK(c, 2);
    // 00f1f7  push ecx
    X86_AT(c, 0xf1f7u);
    { uint32_t v = c.r[1]; push32(c, v); }
L_f1f8:
    X86_TICK(c, 20);
    // 00f1f8  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1f8u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1f9  sub ah, ah
    X86_AT(c, 0xf1f9u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f1fb  push ds
    X86_AT(c, 0xf1fbu);
    push32(c, c.sreg[3]);
    // 00f1fc  push esi
    X86_AT(c, 0xf1fcu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f1fd  call 0xf2d0
    X86_AT(c, 0xf1fdu);
    push32(c, 0xf202u); f_0000f2d0(c); X86_RET(c, 0xf202u);
    X86_TICK(c, 15);
    // 00f202  pop esi
    X86_AT(c, 0xf202u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f203  pop ds
    X86_AT(c, 0xf203u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f204  call 0xf244
    X86_AT(c, 0xf204u);
    push32(c, 0xf209u); f_0000f244(c); X86_RET(c, 0xf209u);
    X86_TICK(c, 11);
    // 00f209  dec dword ptr [esp]
    X86_AT(c, 0xf209u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00f20c  jne 0xf1f8
    X86_AT(c, 0xf20cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf1f8u); goto L_f1f8; }
    X86_TICK(c, 2);
    // 00f20e  add esp, 4
    X86_AT(c, 0xf20eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_f211:
    X86_TICK(c, 10);
    // 00f211  ret 
    X86_AT(c, 0xf211u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf1e4u, "ran off the end of a function");
}
void f_0000f1eb(X86Cpu& c) {
    X86_TICK(c, 13);
    // 00f1eb  movzx ecx, word ptr gs:[ebp + 0x348]
    X86_AT(c, 0xf1ebu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x348u)));
    // 00f1f3  test ecx, ecx
    X86_AT(c, 0xf1f3u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 00f1f5  je 0xf211
    X86_AT(c, 0xf1f5u);
    if (x86_cc(c, 4)) { goto L_f211; }
    X86_TICK(c, 2);
    // 00f1f7  push ecx
    X86_AT(c, 0xf1f7u);
    { uint32_t v = c.r[1]; push32(c, v); }
L_f1f8:
    X86_TICK(c, 20);
    // 00f1f8  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1f8u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1f9  sub ah, ah
    X86_AT(c, 0xf1f9u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f1fb  push ds
    X86_AT(c, 0xf1fbu);
    push32(c, c.sreg[3]);
    // 00f1fc  push esi
    X86_AT(c, 0xf1fcu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f1fd  call 0xf2d0
    X86_AT(c, 0xf1fdu);
    push32(c, 0xf202u); f_0000f2d0(c); X86_RET(c, 0xf202u);
    X86_TICK(c, 15);
    // 00f202  pop esi
    X86_AT(c, 0xf202u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f203  pop ds
    X86_AT(c, 0xf203u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f204  call 0xf244
    X86_AT(c, 0xf204u);
    push32(c, 0xf209u); f_0000f244(c); X86_RET(c, 0xf209u);
    X86_TICK(c, 11);
    // 00f209  dec dword ptr [esp]
    X86_AT(c, 0xf209u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00f20c  jne 0xf1f8
    X86_AT(c, 0xf20cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf1f8u); goto L_f1f8; }
    X86_TICK(c, 2);
    // 00f20e  add esp, 4
    X86_AT(c, 0xf20eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_f211:
    X86_TICK(c, 10);
    // 00f211  ret 
    X86_AT(c, 0xf211u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf1ebu, "ran off the end of a function");
}
void f_0000f1f3(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00f1f3  test ecx, ecx
    X86_AT(c, 0xf1f3u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 00f1f5  je 0xf211
    X86_AT(c, 0xf1f5u);
    if (x86_cc(c, 4)) { goto L_f211; }
    X86_TICK(c, 2);
    // 00f1f7  push ecx
    X86_AT(c, 0xf1f7u);
    { uint32_t v = c.r[1]; push32(c, v); }
L_f1f8:
    X86_TICK(c, 20);
    // 00f1f8  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1f8u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1f9  sub ah, ah
    X86_AT(c, 0xf1f9u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f1fb  push ds
    X86_AT(c, 0xf1fbu);
    push32(c, c.sreg[3]);
    // 00f1fc  push esi
    X86_AT(c, 0xf1fcu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f1fd  call 0xf2d0
    X86_AT(c, 0xf1fdu);
    push32(c, 0xf202u); f_0000f2d0(c); X86_RET(c, 0xf202u);
    X86_TICK(c, 15);
    // 00f202  pop esi
    X86_AT(c, 0xf202u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f203  pop ds
    X86_AT(c, 0xf203u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f204  call 0xf244
    X86_AT(c, 0xf204u);
    push32(c, 0xf209u); f_0000f244(c); X86_RET(c, 0xf209u);
    X86_TICK(c, 11);
    // 00f209  dec dword ptr [esp]
    X86_AT(c, 0xf209u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00f20c  jne 0xf1f8
    X86_AT(c, 0xf20cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf1f8u); goto L_f1f8; }
    X86_TICK(c, 2);
    // 00f20e  add esp, 4
    X86_AT(c, 0xf20eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_f211:
    X86_TICK(c, 10);
    // 00f211  ret 
    X86_AT(c, 0xf211u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf1f3u, "ran off the end of a function");
}
void f_0000f1f5(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00f1f5  je 0xf211
    X86_AT(c, 0xf1f5u);
    if (x86_cc(c, 4)) { goto L_f211; }
    X86_TICK(c, 2);
    // 00f1f7  push ecx
    X86_AT(c, 0xf1f7u);
    { uint32_t v = c.r[1]; push32(c, v); }
L_f1f8:
    X86_TICK(c, 20);
    // 00f1f8  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1f8u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1f9  sub ah, ah
    X86_AT(c, 0xf1f9u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f1fb  push ds
    X86_AT(c, 0xf1fbu);
    push32(c, c.sreg[3]);
    // 00f1fc  push esi
    X86_AT(c, 0xf1fcu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f1fd  call 0xf2d0
    X86_AT(c, 0xf1fdu);
    push32(c, 0xf202u); f_0000f2d0(c); X86_RET(c, 0xf202u);
    X86_TICK(c, 15);
    // 00f202  pop esi
    X86_AT(c, 0xf202u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f203  pop ds
    X86_AT(c, 0xf203u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f204  call 0xf244
    X86_AT(c, 0xf204u);
    push32(c, 0xf209u); f_0000f244(c); X86_RET(c, 0xf209u);
    X86_TICK(c, 11);
    // 00f209  dec dword ptr [esp]
    X86_AT(c, 0xf209u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00f20c  jne 0xf1f8
    X86_AT(c, 0xf20cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf1f8u); goto L_f1f8; }
    X86_TICK(c, 2);
    // 00f20e  add esp, 4
    X86_AT(c, 0xf20eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_f211:
    X86_TICK(c, 10);
    // 00f211  ret 
    X86_AT(c, 0xf211u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf1f5u, "ran off the end of a function");
}
void f_0000f1f7(X86Cpu& c) {
    X86_TICK(c, 2);
    // 00f1f7  push ecx
    X86_AT(c, 0xf1f7u);
    { uint32_t v = c.r[1]; push32(c, v); }
L_f1f8:
    X86_TICK(c, 20);
    // 00f1f8  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1f8u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1f9  sub ah, ah
    X86_AT(c, 0xf1f9u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f1fb  push ds
    X86_AT(c, 0xf1fbu);
    push32(c, c.sreg[3]);
    // 00f1fc  push esi
    X86_AT(c, 0xf1fcu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f1fd  call 0xf2d0
    X86_AT(c, 0xf1fdu);
    push32(c, 0xf202u); f_0000f2d0(c); X86_RET(c, 0xf202u);
    X86_TICK(c, 15);
    // 00f202  pop esi
    X86_AT(c, 0xf202u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f203  pop ds
    X86_AT(c, 0xf203u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f204  call 0xf244
    X86_AT(c, 0xf204u);
    push32(c, 0xf209u); f_0000f244(c); X86_RET(c, 0xf209u);
    X86_TICK(c, 11);
    // 00f209  dec dword ptr [esp]
    X86_AT(c, 0xf209u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00f20c  jne 0xf1f8
    X86_AT(c, 0xf20cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf1f8u); goto L_f1f8; }
    X86_TICK(c, 12);
    // 00f20e  add esp, 4
    X86_AT(c, 0xf20eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00f211  ret 
    X86_AT(c, 0xf211u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf1f7u, "ran off the end of a function");
}
void f_0000f1f8(X86Cpu& c) {
L_f1f8:
    X86_TICK(c, 20);
    // 00f1f8  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1f8u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1f9  sub ah, ah
    X86_AT(c, 0xf1f9u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f1fb  push ds
    X86_AT(c, 0xf1fbu);
    push32(c, c.sreg[3]);
    // 00f1fc  push esi
    X86_AT(c, 0xf1fcu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f1fd  call 0xf2d0
    X86_AT(c, 0xf1fdu);
    push32(c, 0xf202u); f_0000f2d0(c); X86_RET(c, 0xf202u);
    X86_TICK(c, 15);
    // 00f202  pop esi
    X86_AT(c, 0xf202u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f203  pop ds
    X86_AT(c, 0xf203u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f204  call 0xf244
    X86_AT(c, 0xf204u);
    push32(c, 0xf209u); f_0000f244(c); X86_RET(c, 0xf209u);
    X86_TICK(c, 11);
    // 00f209  dec dword ptr [esp]
    X86_AT(c, 0xf209u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00f20c  jne 0xf1f8
    X86_AT(c, 0xf20cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf1f8u); goto L_f1f8; }
    X86_TICK(c, 12);
    // 00f20e  add esp, 4
    X86_AT(c, 0xf20eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00f211  ret 
    X86_AT(c, 0xf211u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf1f8u, "ran off the end of a function");
}
void f_0000f1f9(X86Cpu& c) {
    goto L_f1f9;
L_f1f8:
    X86_TICK(c, 7);
    // 00f1f8  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1f8u);
    x86_string(c, 3, 1, 0, 4, 3);
L_f1f9:
    X86_TICK(c, 13);
    // 00f1f9  sub ah, ah
    X86_AT(c, 0xf1f9u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f1fb  push ds
    X86_AT(c, 0xf1fbu);
    push32(c, c.sreg[3]);
    // 00f1fc  push esi
    X86_AT(c, 0xf1fcu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f1fd  call 0xf2d0
    X86_AT(c, 0xf1fdu);
    push32(c, 0xf202u); f_0000f2d0(c); X86_RET(c, 0xf202u);
    X86_TICK(c, 15);
    // 00f202  pop esi
    X86_AT(c, 0xf202u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f203  pop ds
    X86_AT(c, 0xf203u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f204  call 0xf244
    X86_AT(c, 0xf204u);
    push32(c, 0xf209u); f_0000f244(c); X86_RET(c, 0xf209u);
    X86_TICK(c, 11);
    // 00f209  dec dword ptr [esp]
    X86_AT(c, 0xf209u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00f20c  jne 0xf1f8
    X86_AT(c, 0xf20cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf1f8u); goto L_f1f8; }
    X86_TICK(c, 12);
    // 00f20e  add esp, 4
    X86_AT(c, 0xf20eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00f211  ret 
    X86_AT(c, 0xf211u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf1f9u, "ran off the end of a function");
}
void f_0000f1fb(X86Cpu& c) {
    goto L_f1fb;
L_f1f8:
    X86_TICK(c, 9);
    // 00f1f8  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1f8u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1f9  sub ah, ah
    X86_AT(c, 0xf1f9u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
L_f1fb:
    X86_TICK(c, 11);
    // 00f1fb  push ds
    X86_AT(c, 0xf1fbu);
    push32(c, c.sreg[3]);
    // 00f1fc  push esi
    X86_AT(c, 0xf1fcu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f1fd  call 0xf2d0
    X86_AT(c, 0xf1fdu);
    push32(c, 0xf202u); f_0000f2d0(c); X86_RET(c, 0xf202u);
    X86_TICK(c, 15);
    // 00f202  pop esi
    X86_AT(c, 0xf202u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f203  pop ds
    X86_AT(c, 0xf203u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f204  call 0xf244
    X86_AT(c, 0xf204u);
    push32(c, 0xf209u); f_0000f244(c); X86_RET(c, 0xf209u);
    X86_TICK(c, 11);
    // 00f209  dec dword ptr [esp]
    X86_AT(c, 0xf209u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00f20c  jne 0xf1f8
    X86_AT(c, 0xf20cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf1f8u); goto L_f1f8; }
    X86_TICK(c, 12);
    // 00f20e  add esp, 4
    X86_AT(c, 0xf20eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00f211  ret 
    X86_AT(c, 0xf211u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf1fbu, "ran off the end of a function");
}
void f_0000f1fc(X86Cpu& c) {
    goto L_f1fc;
L_f1f8:
    X86_TICK(c, 11);
    // 00f1f8  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1f8u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1f9  sub ah, ah
    X86_AT(c, 0xf1f9u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f1fb  push ds
    X86_AT(c, 0xf1fbu);
    push32(c, c.sreg[3]);
L_f1fc:
    X86_TICK(c, 9);
    // 00f1fc  push esi
    X86_AT(c, 0xf1fcu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f1fd  call 0xf2d0
    X86_AT(c, 0xf1fdu);
    push32(c, 0xf202u); f_0000f2d0(c); X86_RET(c, 0xf202u);
    X86_TICK(c, 15);
    // 00f202  pop esi
    X86_AT(c, 0xf202u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f203  pop ds
    X86_AT(c, 0xf203u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f204  call 0xf244
    X86_AT(c, 0xf204u);
    push32(c, 0xf209u); f_0000f244(c); X86_RET(c, 0xf209u);
    X86_TICK(c, 11);
    // 00f209  dec dword ptr [esp]
    X86_AT(c, 0xf209u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00f20c  jne 0xf1f8
    X86_AT(c, 0xf20cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf1f8u); goto L_f1f8; }
    X86_TICK(c, 12);
    // 00f20e  add esp, 4
    X86_AT(c, 0xf20eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00f211  ret 
    X86_AT(c, 0xf211u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf1fcu, "ran off the end of a function");
}
void f_0000f1fd(X86Cpu& c) {
    goto L_f1fd;
L_f1f8:
    X86_TICK(c, 13);
    // 00f1f8  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1f8u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1f9  sub ah, ah
    X86_AT(c, 0xf1f9u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f1fb  push ds
    X86_AT(c, 0xf1fbu);
    push32(c, c.sreg[3]);
    // 00f1fc  push esi
    X86_AT(c, 0xf1fcu);
    { uint32_t v = c.r[6]; push32(c, v); }
L_f1fd:
    X86_TICK(c, 7);
    // 00f1fd  call 0xf2d0
    X86_AT(c, 0xf1fdu);
    push32(c, 0xf202u); f_0000f2d0(c); X86_RET(c, 0xf202u);
    X86_TICK(c, 15);
    // 00f202  pop esi
    X86_AT(c, 0xf202u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f203  pop ds
    X86_AT(c, 0xf203u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f204  call 0xf244
    X86_AT(c, 0xf204u);
    push32(c, 0xf209u); f_0000f244(c); X86_RET(c, 0xf209u);
    X86_TICK(c, 11);
    // 00f209  dec dword ptr [esp]
    X86_AT(c, 0xf209u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00f20c  jne 0xf1f8
    X86_AT(c, 0xf20cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf1f8u); goto L_f1f8; }
    X86_TICK(c, 12);
    // 00f20e  add esp, 4
    X86_AT(c, 0xf20eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00f211  ret 
    X86_AT(c, 0xf211u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf1fdu, "ran off the end of a function");
}
void f_0000f202(X86Cpu& c) {
    goto L_f202;
L_f1f8:
    X86_TICK(c, 20);
    // 00f1f8  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1f8u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1f9  sub ah, ah
    X86_AT(c, 0xf1f9u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f1fb  push ds
    X86_AT(c, 0xf1fbu);
    push32(c, c.sreg[3]);
    // 00f1fc  push esi
    X86_AT(c, 0xf1fcu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f1fd  call 0xf2d0
    X86_AT(c, 0xf1fdu);
    push32(c, 0xf202u); f_0000f2d0(c); X86_RET(c, 0xf202u);
L_f202:
    X86_TICK(c, 15);
    // 00f202  pop esi
    X86_AT(c, 0xf202u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f203  pop ds
    X86_AT(c, 0xf203u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f204  call 0xf244
    X86_AT(c, 0xf204u);
    push32(c, 0xf209u); f_0000f244(c); X86_RET(c, 0xf209u);
    X86_TICK(c, 11);
    // 00f209  dec dword ptr [esp]
    X86_AT(c, 0xf209u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00f20c  jne 0xf1f8
    X86_AT(c, 0xf20cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf1f8u); goto L_f1f8; }
    X86_TICK(c, 12);
    // 00f20e  add esp, 4
    X86_AT(c, 0xf20eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00f211  ret 
    X86_AT(c, 0xf211u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf202u, "ran off the end of a function");
}
void f_0000f203(X86Cpu& c) {
    goto L_f203;
L_f1f8:
    X86_TICK(c, 20);
    // 00f1f8  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1f8u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1f9  sub ah, ah
    X86_AT(c, 0xf1f9u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f1fb  push ds
    X86_AT(c, 0xf1fbu);
    push32(c, c.sreg[3]);
    // 00f1fc  push esi
    X86_AT(c, 0xf1fcu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f1fd  call 0xf2d0
    X86_AT(c, 0xf1fdu);
    push32(c, 0xf202u); f_0000f2d0(c); X86_RET(c, 0xf202u);
    X86_TICK(c, 4);
    // 00f202  pop esi
    X86_AT(c, 0xf202u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_f203:
    X86_TICK(c, 11);
    // 00f203  pop ds
    X86_AT(c, 0xf203u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f204  call 0xf244
    X86_AT(c, 0xf204u);
    push32(c, 0xf209u); f_0000f244(c); X86_RET(c, 0xf209u);
    X86_TICK(c, 11);
    // 00f209  dec dword ptr [esp]
    X86_AT(c, 0xf209u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00f20c  jne 0xf1f8
    X86_AT(c, 0xf20cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf1f8u); goto L_f1f8; }
    X86_TICK(c, 12);
    // 00f20e  add esp, 4
    X86_AT(c, 0xf20eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00f211  ret 
    X86_AT(c, 0xf211u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf203u, "ran off the end of a function");
}
void f_0000f204(X86Cpu& c) {
    goto L_f204;
L_f1f8:
    X86_TICK(c, 20);
    // 00f1f8  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1f8u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1f9  sub ah, ah
    X86_AT(c, 0xf1f9u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f1fb  push ds
    X86_AT(c, 0xf1fbu);
    push32(c, c.sreg[3]);
    // 00f1fc  push esi
    X86_AT(c, 0xf1fcu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f1fd  call 0xf2d0
    X86_AT(c, 0xf1fdu);
    push32(c, 0xf202u); f_0000f2d0(c); X86_RET(c, 0xf202u);
    X86_TICK(c, 8);
    // 00f202  pop esi
    X86_AT(c, 0xf202u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f203  pop ds
    X86_AT(c, 0xf203u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_f204:
    X86_TICK(c, 7);
    // 00f204  call 0xf244
    X86_AT(c, 0xf204u);
    push32(c, 0xf209u); f_0000f244(c); X86_RET(c, 0xf209u);
    X86_TICK(c, 11);
    // 00f209  dec dword ptr [esp]
    X86_AT(c, 0xf209u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00f20c  jne 0xf1f8
    X86_AT(c, 0xf20cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf1f8u); goto L_f1f8; }
    X86_TICK(c, 12);
    // 00f20e  add esp, 4
    X86_AT(c, 0xf20eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00f211  ret 
    X86_AT(c, 0xf211u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf204u, "ran off the end of a function");
}
void f_0000f209(X86Cpu& c) {
    goto L_f209;
L_f1f8:
    X86_TICK(c, 20);
    // 00f1f8  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1f8u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1f9  sub ah, ah
    X86_AT(c, 0xf1f9u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f1fb  push ds
    X86_AT(c, 0xf1fbu);
    push32(c, c.sreg[3]);
    // 00f1fc  push esi
    X86_AT(c, 0xf1fcu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f1fd  call 0xf2d0
    X86_AT(c, 0xf1fdu);
    push32(c, 0xf202u); f_0000f2d0(c); X86_RET(c, 0xf202u);
    X86_TICK(c, 15);
    // 00f202  pop esi
    X86_AT(c, 0xf202u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f203  pop ds
    X86_AT(c, 0xf203u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f204  call 0xf244
    X86_AT(c, 0xf204u);
    push32(c, 0xf209u); f_0000f244(c); X86_RET(c, 0xf209u);
L_f209:
    X86_TICK(c, 11);
    // 00f209  dec dword ptr [esp]
    X86_AT(c, 0xf209u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00f20c  jne 0xf1f8
    X86_AT(c, 0xf20cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf1f8u); goto L_f1f8; }
    X86_TICK(c, 12);
    // 00f20e  add esp, 4
    X86_AT(c, 0xf20eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00f211  ret 
    X86_AT(c, 0xf211u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf209u, "ran off the end of a function");
}
void f_0000f20c(X86Cpu& c) {
    goto L_f20c;
L_f1f8:
    X86_TICK(c, 20);
    // 00f1f8  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf1f8u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f1f9  sub ah, ah
    X86_AT(c, 0xf1f9u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f1fb  push ds
    X86_AT(c, 0xf1fbu);
    push32(c, c.sreg[3]);
    // 00f1fc  push esi
    X86_AT(c, 0xf1fcu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f1fd  call 0xf2d0
    X86_AT(c, 0xf1fdu);
    push32(c, 0xf202u); f_0000f2d0(c); X86_RET(c, 0xf202u);
    X86_TICK(c, 15);
    // 00f202  pop esi
    X86_AT(c, 0xf202u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f203  pop ds
    X86_AT(c, 0xf203u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f204  call 0xf244
    X86_AT(c, 0xf204u);
    push32(c, 0xf209u); f_0000f244(c); X86_RET(c, 0xf209u);
    X86_TICK(c, 6);
    // 00f209  dec dword ptr [esp]
    X86_AT(c, 0xf209u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_f20c:
    X86_TICK(c, 5);
    // 00f20c  jne 0xf1f8
    X86_AT(c, 0xf20cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf1f8u); goto L_f1f8; }
    X86_TICK(c, 12);
    // 00f20e  add esp, 4
    X86_AT(c, 0xf20eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00f211  ret 
    X86_AT(c, 0xf211u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf20cu, "ran off the end of a function");
}
void f_0000f20e(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00f20e  add esp, 4
    X86_AT(c, 0xf20eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00f211  ret 
    X86_AT(c, 0xf211u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf20eu, "ran off the end of a function");
}
void f_0000f211(X86Cpu& c) {
    X86_TICK(c, 10);
    // 00f211  ret 
    X86_AT(c, 0xf211u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf211u, "ran off the end of a function");
}
void f_0000f214(X86Cpu& c) {
    X86_TICK(c, 19);
    // 00f214  lds esi, fword ptr gs:[ebp + 0x33c]
    X86_AT(c, 0xf214u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x33Cu)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 00f21b  movzx ecx, word ptr gs:[ebp + 0x348]
    X86_AT(c, 0xf21bu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x348u)));
    // 00f223  test ecx, ecx
    X86_AT(c, 0xf223u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 00f225  je 0xf240
    X86_AT(c, 0xf225u);
    if (x86_cc(c, 4)) { goto L_f240; }
    X86_TICK(c, 2);
    // 00f227  push ecx
    X86_AT(c, 0xf227u);
    { uint32_t v = c.r[1]; push32(c, v); }
L_f228:
    X86_TICK(c, 18);
    // 00f228  lodsw ax, word ptr [esi]
    X86_AT(c, 0xf228u);
    x86_string(c, 3, 2, 0, 4, 3);
    // 00f22a  push ds
    X86_AT(c, 0xf22au);
    push32(c, c.sreg[3]);
    // 00f22b  push esi
    X86_AT(c, 0xf22bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f22c  call 0xf3f8
    X86_AT(c, 0xf22cu);
    push32(c, 0xf231u); f_0000f3f8(c); X86_RET(c, 0xf231u);
    X86_TICK(c, 15);
    // 00f231  pop esi
    X86_AT(c, 0xf231u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f232  pop ds
    X86_AT(c, 0xf232u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f233  call 0xf244
    X86_AT(c, 0xf233u);
    push32(c, 0xf238u); f_0000f244(c); X86_RET(c, 0xf238u);
    X86_TICK(c, 11);
    // 00f238  dec dword ptr [esp]
    X86_AT(c, 0xf238u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00f23b  jne 0xf228
    X86_AT(c, 0xf23bu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf228u); goto L_f228; }
    X86_TICK(c, 2);
    // 00f23d  add esp, 4
    X86_AT(c, 0xf23du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_f240:
    X86_TICK(c, 10);
    // 00f240  ret 
    X86_AT(c, 0xf240u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf214u, "ran off the end of a function");
}
void f_0000f244(X86Cpu& c) {
    X86_TICK(c, 37);
    // 00f244  movzx eax, byte ptr gs:[ebp + 0x34d]
    X86_AT(c, 0xf244u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Du)));
    // 00f24c  mov ebx, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf24cu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f253  test byte ptr gs:[ebp + 0x34c], 1
    X86_AT(c, 0xf253u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu))) & 0x1u, 1);
    // 00f25b  setne cl
    X86_AT(c, 0xf25bu);
    s8(c, 1, x86_cc(c, 5) ? 1u : 0u);
    // 00f25e  shl cl, 4
    X86_AT(c, 0xf25eu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 1, r); }
    // 00f261  rol ebx, cl
    X86_AT(c, 0xf261u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 0, v, g8(c, 1), 4, w); if (w) c.r[3] = r; }
    // 00f263  shld ecx, ebx, 0x10
    X86_AT(c, 0xf263u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[1] = r; }
    // 00f267  jmp dword ptr cs:[eax*4 + 0xf270]
    X86_AT(c, 0xf267u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xF270u)));
      switch (t) {
      case 0xf280u: goto L_f280;
      case 0xf294u: goto L_f294;
      case 0xf2a8u: goto L_f2a8;
      case 0xf2bcu: goto L_f2bc;
      default: x86_jump(c, t); return; } }
L_f280:
    X86_TICK(c, 23);
    // 00f280  add bx, word ptr gs:[ebp + 0x34e]
    X86_AT(c, 0xf280u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Eu))), 0, 2)); }
    // 00f288  add word ptr gs:[ebp + 0x344], bx
    X86_AT(c, 0xf288u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f290  ret 
    X86_AT(c, 0xf290u);
    c.eip = pop32(c); return;
L_f294:
    X86_TICK(c, 23);
    // 00f294  add cx, word ptr gs:[ebp + 0x34e]
    X86_AT(c, 0xf294u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Eu))), 0, 2)); }
    // 00f29c  sub word ptr gs:[ebp + 0x346], cx
    X86_AT(c, 0xf29cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x346u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 00f2a4  ret 
    X86_AT(c, 0xf2a4u);
    c.eip = pop32(c); return;
L_f2a8:
    X86_TICK(c, 23);
    // 00f2a8  add bx, word ptr gs:[ebp + 0x34e]
    X86_AT(c, 0xf2a8u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Eu))), 0, 2)); }
    // 00f2b0  sub word ptr gs:[ebp + 0x344], bx
    X86_AT(c, 0xf2b0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f2b8  ret 
    X86_AT(c, 0xf2b8u);
    c.eip = pop32(c); return;
L_f2bc:
    X86_TICK(c, 23);
    // 00f2bc  add cx, word ptr gs:[ebp + 0x34e]
    X86_AT(c, 0xf2bcu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Eu))), 0, 2)); }
    // 00f2c4  add word ptr gs:[ebp + 0x346], cx
    X86_AT(c, 0xf2c4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x346u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 00f2cc  ret 
    X86_AT(c, 0xf2ccu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf244u, "ran off the end of a function");
}
void f_0000f24c(X86Cpu& c) {
    X86_TICK(c, 31);
    // 00f24c  mov ebx, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf24cu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f253  test byte ptr gs:[ebp + 0x34c], 1
    X86_AT(c, 0xf253u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu))) & 0x1u, 1);
    // 00f25b  setne cl
    X86_AT(c, 0xf25bu);
    s8(c, 1, x86_cc(c, 5) ? 1u : 0u);
    // 00f25e  shl cl, 4
    X86_AT(c, 0xf25eu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 1, r); }
    // 00f261  rol ebx, cl
    X86_AT(c, 0xf261u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 0, v, g8(c, 1), 4, w); if (w) c.r[3] = r; }
    // 00f263  shld ecx, ebx, 0x10
    X86_AT(c, 0xf263u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[1] = r; }
    // 00f267  jmp dword ptr cs:[eax*4 + 0xf270]
    X86_AT(c, 0xf267u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xF270u)));
      switch (t) {
      case 0xf280u: goto L_f280;
      case 0xf294u: goto L_f294;
      case 0xf2a8u: goto L_f2a8;
      case 0xf2bcu: goto L_f2bc;
      default: x86_jump(c, t); return; } }
L_f280:
    X86_TICK(c, 23);
    // 00f280  add bx, word ptr gs:[ebp + 0x34e]
    X86_AT(c, 0xf280u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Eu))), 0, 2)); }
    // 00f288  add word ptr gs:[ebp + 0x344], bx
    X86_AT(c, 0xf288u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f290  ret 
    X86_AT(c, 0xf290u);
    c.eip = pop32(c); return;
L_f294:
    X86_TICK(c, 23);
    // 00f294  add cx, word ptr gs:[ebp + 0x34e]
    X86_AT(c, 0xf294u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Eu))), 0, 2)); }
    // 00f29c  sub word ptr gs:[ebp + 0x346], cx
    X86_AT(c, 0xf29cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x346u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 00f2a4  ret 
    X86_AT(c, 0xf2a4u);
    c.eip = pop32(c); return;
L_f2a8:
    X86_TICK(c, 23);
    // 00f2a8  add bx, word ptr gs:[ebp + 0x34e]
    X86_AT(c, 0xf2a8u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Eu))), 0, 2)); }
    // 00f2b0  sub word ptr gs:[ebp + 0x344], bx
    X86_AT(c, 0xf2b0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f2b8  ret 
    X86_AT(c, 0xf2b8u);
    c.eip = pop32(c); return;
L_f2bc:
    X86_TICK(c, 23);
    // 00f2bc  add cx, word ptr gs:[ebp + 0x34e]
    X86_AT(c, 0xf2bcu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Eu))), 0, 2)); }
    // 00f2c4  add word ptr gs:[ebp + 0x346], cx
    X86_AT(c, 0xf2c4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x346u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 00f2cc  ret 
    X86_AT(c, 0xf2ccu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf24cu, "ran off the end of a function");
}
void f_0000f253(X86Cpu& c) {
    X86_TICK(c, 27);
    // 00f253  test byte ptr gs:[ebp + 0x34c], 1
    X86_AT(c, 0xf253u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu))) & 0x1u, 1);
    // 00f25b  setne cl
    X86_AT(c, 0xf25bu);
    s8(c, 1, x86_cc(c, 5) ? 1u : 0u);
    // 00f25e  shl cl, 4
    X86_AT(c, 0xf25eu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 1, r); }
    // 00f261  rol ebx, cl
    X86_AT(c, 0xf261u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 0, v, g8(c, 1), 4, w); if (w) c.r[3] = r; }
    // 00f263  shld ecx, ebx, 0x10
    X86_AT(c, 0xf263u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[1] = r; }
    // 00f267  jmp dword ptr cs:[eax*4 + 0xf270]
    X86_AT(c, 0xf267u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xF270u)));
      switch (t) {
      case 0xf280u: goto L_f280;
      case 0xf294u: goto L_f294;
      case 0xf2a8u: goto L_f2a8;
      case 0xf2bcu: goto L_f2bc;
      default: x86_jump(c, t); return; } }
L_f280:
    X86_TICK(c, 23);
    // 00f280  add bx, word ptr gs:[ebp + 0x34e]
    X86_AT(c, 0xf280u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Eu))), 0, 2)); }
    // 00f288  add word ptr gs:[ebp + 0x344], bx
    X86_AT(c, 0xf288u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f290  ret 
    X86_AT(c, 0xf290u);
    c.eip = pop32(c); return;
L_f294:
    X86_TICK(c, 23);
    // 00f294  add cx, word ptr gs:[ebp + 0x34e]
    X86_AT(c, 0xf294u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Eu))), 0, 2)); }
    // 00f29c  sub word ptr gs:[ebp + 0x346], cx
    X86_AT(c, 0xf29cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x346u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 00f2a4  ret 
    X86_AT(c, 0xf2a4u);
    c.eip = pop32(c); return;
L_f2a8:
    X86_TICK(c, 23);
    // 00f2a8  add bx, word ptr gs:[ebp + 0x34e]
    X86_AT(c, 0xf2a8u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Eu))), 0, 2)); }
    // 00f2b0  sub word ptr gs:[ebp + 0x344], bx
    X86_AT(c, 0xf2b0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f2b8  ret 
    X86_AT(c, 0xf2b8u);
    c.eip = pop32(c); return;
L_f2bc:
    X86_TICK(c, 23);
    // 00f2bc  add cx, word ptr gs:[ebp + 0x34e]
    X86_AT(c, 0xf2bcu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Eu))), 0, 2)); }
    // 00f2c4  add word ptr gs:[ebp + 0x346], cx
    X86_AT(c, 0xf2c4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x346u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 00f2cc  ret 
    X86_AT(c, 0xf2ccu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf253u, "ran off the end of a function");
}
void f_0000f25b(X86Cpu& c) {
    X86_TICK(c, 20);
    // 00f25b  setne cl
    X86_AT(c, 0xf25bu);
    s8(c, 1, x86_cc(c, 5) ? 1u : 0u);
    // 00f25e  shl cl, 4
    X86_AT(c, 0xf25eu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 1, r); }
    // 00f261  rol ebx, cl
    X86_AT(c, 0xf261u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 0, v, g8(c, 1), 4, w); if (w) c.r[3] = r; }
    // 00f263  shld ecx, ebx, 0x10
    X86_AT(c, 0xf263u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[1] = r; }
    // 00f267  jmp dword ptr cs:[eax*4 + 0xf270]
    X86_AT(c, 0xf267u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xF270u)));
      switch (t) {
      case 0xf280u: goto L_f280;
      case 0xf294u: goto L_f294;
      case 0xf2a8u: goto L_f2a8;
      case 0xf2bcu: goto L_f2bc;
      default: x86_jump(c, t); return; } }
L_f280:
    X86_TICK(c, 23);
    // 00f280  add bx, word ptr gs:[ebp + 0x34e]
    X86_AT(c, 0xf280u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Eu))), 0, 2)); }
    // 00f288  add word ptr gs:[ebp + 0x344], bx
    X86_AT(c, 0xf288u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f290  ret 
    X86_AT(c, 0xf290u);
    c.eip = pop32(c); return;
L_f294:
    X86_TICK(c, 23);
    // 00f294  add cx, word ptr gs:[ebp + 0x34e]
    X86_AT(c, 0xf294u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Eu))), 0, 2)); }
    // 00f29c  sub word ptr gs:[ebp + 0x346], cx
    X86_AT(c, 0xf29cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x346u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 00f2a4  ret 
    X86_AT(c, 0xf2a4u);
    c.eip = pop32(c); return;
L_f2a8:
    X86_TICK(c, 23);
    // 00f2a8  add bx, word ptr gs:[ebp + 0x34e]
    X86_AT(c, 0xf2a8u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Eu))), 0, 2)); }
    // 00f2b0  sub word ptr gs:[ebp + 0x344], bx
    X86_AT(c, 0xf2b0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f2b8  ret 
    X86_AT(c, 0xf2b8u);
    c.eip = pop32(c); return;
L_f2bc:
    X86_TICK(c, 23);
    // 00f2bc  add cx, word ptr gs:[ebp + 0x34e]
    X86_AT(c, 0xf2bcu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Eu))), 0, 2)); }
    // 00f2c4  add word ptr gs:[ebp + 0x346], cx
    X86_AT(c, 0xf2c4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x346u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 00f2cc  ret 
    X86_AT(c, 0xf2ccu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf25bu, "ran off the end of a function");
}
void f_0000f25e(X86Cpu& c) {
    X86_TICK(c, 16);
    // 00f25e  shl cl, 4
    X86_AT(c, 0xf25eu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 1, r); }
    // 00f261  rol ebx, cl
    X86_AT(c, 0xf261u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 0, v, g8(c, 1), 4, w); if (w) c.r[3] = r; }
    // 00f263  shld ecx, ebx, 0x10
    X86_AT(c, 0xf263u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[1] = r; }
    // 00f267  jmp dword ptr cs:[eax*4 + 0xf270]
    X86_AT(c, 0xf267u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xF270u)));
      switch (t) {
      case 0xf280u: goto L_f280;
      case 0xf294u: goto L_f294;
      case 0xf2a8u: goto L_f2a8;
      case 0xf2bcu: goto L_f2bc;
      default: x86_jump(c, t); return; } }
L_f280:
    X86_TICK(c, 23);
    // 00f280  add bx, word ptr gs:[ebp + 0x34e]
    X86_AT(c, 0xf280u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Eu))), 0, 2)); }
    // 00f288  add word ptr gs:[ebp + 0x344], bx
    X86_AT(c, 0xf288u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f290  ret 
    X86_AT(c, 0xf290u);
    c.eip = pop32(c); return;
L_f294:
    X86_TICK(c, 23);
    // 00f294  add cx, word ptr gs:[ebp + 0x34e]
    X86_AT(c, 0xf294u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Eu))), 0, 2)); }
    // 00f29c  sub word ptr gs:[ebp + 0x346], cx
    X86_AT(c, 0xf29cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x346u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 00f2a4  ret 
    X86_AT(c, 0xf2a4u);
    c.eip = pop32(c); return;
L_f2a8:
    X86_TICK(c, 23);
    // 00f2a8  add bx, word ptr gs:[ebp + 0x34e]
    X86_AT(c, 0xf2a8u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Eu))), 0, 2)); }
    // 00f2b0  sub word ptr gs:[ebp + 0x344], bx
    X86_AT(c, 0xf2b0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f2b8  ret 
    X86_AT(c, 0xf2b8u);
    c.eip = pop32(c); return;
L_f2bc:
    X86_TICK(c, 23);
    // 00f2bc  add cx, word ptr gs:[ebp + 0x34e]
    X86_AT(c, 0xf2bcu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Eu))), 0, 2)); }
    // 00f2c4  add word ptr gs:[ebp + 0x346], cx
    X86_AT(c, 0xf2c4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x346u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 00f2cc  ret 
    X86_AT(c, 0xf2ccu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf25eu, "ran off the end of a function");
}
void f_0000f261(X86Cpu& c) {
    X86_TICK(c, 13);
    // 00f261  rol ebx, cl
    X86_AT(c, 0xf261u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 0, v, g8(c, 1), 4, w); if (w) c.r[3] = r; }
    // 00f263  shld ecx, ebx, 0x10
    X86_AT(c, 0xf263u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[1] = r; }
    // 00f267  jmp dword ptr cs:[eax*4 + 0xf270]
    X86_AT(c, 0xf267u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xF270u)));
      switch (t) {
      case 0xf280u: goto L_f280;
      case 0xf294u: goto L_f294;
      case 0xf2a8u: goto L_f2a8;
      case 0xf2bcu: goto L_f2bc;
      default: x86_jump(c, t); return; } }
L_f280:
    X86_TICK(c, 23);
    // 00f280  add bx, word ptr gs:[ebp + 0x34e]
    X86_AT(c, 0xf280u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Eu))), 0, 2)); }
    // 00f288  add word ptr gs:[ebp + 0x344], bx
    X86_AT(c, 0xf288u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f290  ret 
    X86_AT(c, 0xf290u);
    c.eip = pop32(c); return;
L_f294:
    X86_TICK(c, 23);
    // 00f294  add cx, word ptr gs:[ebp + 0x34e]
    X86_AT(c, 0xf294u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Eu))), 0, 2)); }
    // 00f29c  sub word ptr gs:[ebp + 0x346], cx
    X86_AT(c, 0xf29cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x346u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 00f2a4  ret 
    X86_AT(c, 0xf2a4u);
    c.eip = pop32(c); return;
L_f2a8:
    X86_TICK(c, 23);
    // 00f2a8  add bx, word ptr gs:[ebp + 0x34e]
    X86_AT(c, 0xf2a8u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Eu))), 0, 2)); }
    // 00f2b0  sub word ptr gs:[ebp + 0x344], bx
    X86_AT(c, 0xf2b0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f2b8  ret 
    X86_AT(c, 0xf2b8u);
    c.eip = pop32(c); return;
L_f2bc:
    X86_TICK(c, 23);
    // 00f2bc  add cx, word ptr gs:[ebp + 0x34e]
    X86_AT(c, 0xf2bcu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Eu))), 0, 2)); }
    // 00f2c4  add word ptr gs:[ebp + 0x346], cx
    X86_AT(c, 0xf2c4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x346u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 00f2cc  ret 
    X86_AT(c, 0xf2ccu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf261u, "ran off the end of a function");
}
void f_0000f263(X86Cpu& c) {
    X86_TICK(c, 10);
    // 00f263  shld ecx, ebx, 0x10
    X86_AT(c, 0xf263u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[1] = r; }
    // 00f267  jmp dword ptr cs:[eax*4 + 0xf270]
    X86_AT(c, 0xf267u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xF270u)));
      switch (t) {
      case 0xf280u: goto L_f280;
      case 0xf294u: goto L_f294;
      case 0xf2a8u: goto L_f2a8;
      case 0xf2bcu: goto L_f2bc;
      default: x86_jump(c, t); return; } }
L_f280:
    X86_TICK(c, 23);
    // 00f280  add bx, word ptr gs:[ebp + 0x34e]
    X86_AT(c, 0xf280u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Eu))), 0, 2)); }
    // 00f288  add word ptr gs:[ebp + 0x344], bx
    X86_AT(c, 0xf288u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f290  ret 
    X86_AT(c, 0xf290u);
    c.eip = pop32(c); return;
L_f294:
    X86_TICK(c, 23);
    // 00f294  add cx, word ptr gs:[ebp + 0x34e]
    X86_AT(c, 0xf294u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Eu))), 0, 2)); }
    // 00f29c  sub word ptr gs:[ebp + 0x346], cx
    X86_AT(c, 0xf29cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x346u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 00f2a4  ret 
    X86_AT(c, 0xf2a4u);
    c.eip = pop32(c); return;
L_f2a8:
    X86_TICK(c, 23);
    // 00f2a8  add bx, word ptr gs:[ebp + 0x34e]
    X86_AT(c, 0xf2a8u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Eu))), 0, 2)); }
    // 00f2b0  sub word ptr gs:[ebp + 0x344], bx
    X86_AT(c, 0xf2b0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f2b8  ret 
    X86_AT(c, 0xf2b8u);
    c.eip = pop32(c); return;
L_f2bc:
    X86_TICK(c, 23);
    // 00f2bc  add cx, word ptr gs:[ebp + 0x34e]
    X86_AT(c, 0xf2bcu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Eu))), 0, 2)); }
    // 00f2c4  add word ptr gs:[ebp + 0x346], cx
    X86_AT(c, 0xf2c4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x346u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 00f2cc  ret 
    X86_AT(c, 0xf2ccu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf263u, "ran off the end of a function");
}
void f_0000f267(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00f267  jmp dword ptr cs:[eax*4 + 0xf270]
    X86_AT(c, 0xf267u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xF270u)));
      switch (t) {
      case 0xf280u: goto L_f280;
      case 0xf294u: goto L_f294;
      case 0xf2a8u: goto L_f2a8;
      case 0xf2bcu: goto L_f2bc;
      default: x86_jump(c, t); return; } }
L_f280:
    X86_TICK(c, 23);
    // 00f280  add bx, word ptr gs:[ebp + 0x34e]
    X86_AT(c, 0xf280u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Eu))), 0, 2)); }
    // 00f288  add word ptr gs:[ebp + 0x344], bx
    X86_AT(c, 0xf288u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f290  ret 
    X86_AT(c, 0xf290u);
    c.eip = pop32(c); return;
L_f294:
    X86_TICK(c, 23);
    // 00f294  add cx, word ptr gs:[ebp + 0x34e]
    X86_AT(c, 0xf294u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Eu))), 0, 2)); }
    // 00f29c  sub word ptr gs:[ebp + 0x346], cx
    X86_AT(c, 0xf29cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x346u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 00f2a4  ret 
    X86_AT(c, 0xf2a4u);
    c.eip = pop32(c); return;
L_f2a8:
    X86_TICK(c, 23);
    // 00f2a8  add bx, word ptr gs:[ebp + 0x34e]
    X86_AT(c, 0xf2a8u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Eu))), 0, 2)); }
    // 00f2b0  sub word ptr gs:[ebp + 0x344], bx
    X86_AT(c, 0xf2b0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f2b8  ret 
    X86_AT(c, 0xf2b8u);
    c.eip = pop32(c); return;
L_f2bc:
    X86_TICK(c, 23);
    // 00f2bc  add cx, word ptr gs:[ebp + 0x34e]
    X86_AT(c, 0xf2bcu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Eu))), 0, 2)); }
    // 00f2c4  add word ptr gs:[ebp + 0x346], cx
    X86_AT(c, 0xf2c4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x346u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 00f2cc  ret 
    X86_AT(c, 0xf2ccu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf267u, "ran off the end of a function");
}
void f_0000f280(X86Cpu& c) {
    X86_TICK(c, 23);
    // 00f280  add bx, word ptr gs:[ebp + 0x34e]
    X86_AT(c, 0xf280u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Eu))), 0, 2)); }
    // 00f288  add word ptr gs:[ebp + 0x344], bx
    X86_AT(c, 0xf288u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f290  ret 
    X86_AT(c, 0xf290u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf280u, "ran off the end of a function");
}
void f_0000f288(X86Cpu& c) {
    X86_TICK(c, 17);
    // 00f288  add word ptr gs:[ebp + 0x344], bx
    X86_AT(c, 0xf288u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f290  ret 
    X86_AT(c, 0xf290u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf288u, "ran off the end of a function");
}
void f_0000f290(X86Cpu& c) {
    X86_TICK(c, 10);
    // 00f290  ret 
    X86_AT(c, 0xf290u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf290u, "ran off the end of a function");
}
void f_0000f2d0(X86Cpu& c) {
    X86_TICK(c, 62);
    // 00f2d0  movzx esi, ax
    X86_AT(c, 0xf2d0u);
    c.r[6] = (c.r[0] & 0xFFFFu);
    // 00f2d3  movzx ecx, byte ptr gs:[ebp + 0x378]
    X86_AT(c, 0xf2d3u);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x378u)));
    // 00f2db  shr ecx, 4
    X86_AT(c, 0xf2dbu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 00f2de  add ecx, 3
    X86_AT(c, 0xf2deu);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x3u, 0, 4); }
    // 00f2e1  shl esi, cl
    X86_AT(c, 0xf2e1u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[6] = r; }
    // 00f2e3  shr ecx, 2
    X86_AT(c, 0xf2e3u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 00f2e6  shl ecx, 0xb
    X86_AT(c, 0xf2e6u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xBu, 4, w); if (w) c.r[1] = r; }
    // 00f2e9  lds eax, fword ptr cs:[0x1e0]
    X86_AT(c, 0xf2e9u);
    { uint32_t ea = (c.sbase[1] + (uint32_t)(0x1E0u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[0] = o; }
    // 00f2f0  lea esi, [eax + esi*1 + 0x3d000]
    X86_AT(c, 0xf2f0u);
    c.r[6] = (uint32_t)(c.r[0] + c.r[6] + 0x3D000u);
    // 00f2f7  add esi, ecx
    X86_AT(c, 0xf2f7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[1], 0, 4); }
    // 00f2f9  mov word ptr gs:[ebp + 0x370], 8
    X86_AT(c, 0xf2f9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)), 0x8u);
    // 00f303  movzx ax, byte ptr gs:[ebp + 0x378]
    X86_AT(c, 0xf303u);
    s16(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x378u))));
    // 00f30c  mov word ptr gs:[ebp + 0x372], ax
    X86_AT(c, 0xf30cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)), (c.r[0] & 0xFFFFu));
    // 00f314  mov eax, dword ptr gs:[ebp + 0x350]
    X86_AT(c, 0xf314u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x350u)));
    // 00f31b  mov dword ptr gs:[ebp + 0x358], eax
    X86_AT(c, 0xf31bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)), c.r[0]);
    // 00f322  mov eax, dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0xf322u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u)));
    // 00f329  mov dword ptr gs:[ebp + 0x32c], eax
    X86_AT(c, 0xf329u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), c.r[0]);
    // 00f330  jmp 0xf470
    X86_AT(c, 0xf330u);
    goto L_f470;
L_f470:
    X86_TICK(c, 105);
    // 00f470  movzx ecx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf470u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f478  add ecx, 7
    X86_AT(c, 0xf478u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f47b  shr ecx, 3
    X86_AT(c, 0xf47bu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 00f47e  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf47eu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f486  imul eax, ecx
    X86_AT(c, 0xf486u);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f489  mov word ptr gs:[ebp + 0x362], ax
    X86_AT(c, 0xf489u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)), (c.r[0] & 0xFFFFu));
    // 00f491  sub esp, eax
    X86_AT(c, 0xf491u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f493  mov dword ptr gs:[ebp + 0x364], esp
    X86_AT(c, 0xf493u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x364u)), c.r[4]);
    // 00f49a  mov word ptr gs:[ebp + 0x368], ss
    X86_AT(c, 0xf49au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x368u)), (uint32_t)c.sreg[2]);
    // 00f4a1  les edi, fword ptr gs:[ebp + 0x364]
    X86_AT(c, 0xf4a1u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x364u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[7] = o; }
    // 00f4a8  movzx ecx, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf4a8u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)));
    // 00f4b0  push edi
    X86_AT(c, 0xf4b0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00f4b1  push es
    X86_AT(c, 0xf4b1u);
    push32(c, c.sreg[0]);
    // 00f4b2  mov edx, ecx
    X86_AT(c, 0xf4b2u);
    c.r[2] = c.r[1];
    // 00f4b4  shr ecx, 2
    X86_AT(c, 0xf4b4u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 00f4b7  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xf4b7u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 00f4b9  mov ecx, edx
    X86_AT(c, 0xf4b9u);
    c.r[1] = c.r[2];
    // 00f4bb  and ecx, 3
    X86_AT(c, 0xf4bbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x3u, 4); }
    // 00f4be  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xf4beu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 00f4c0  pop ds
    X86_AT(c, 0xf4c0u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f4c1  pop esi
    X86_AT(c, 0xf4c1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f4c2  mov dl, byte ptr gs:[ebp + 0x338]
    X86_AT(c, 0xf4c2u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))));
    // 00f4c9  test dl, 0x70
    X86_AT(c, 0xf4c9u);
    (void)x86_logic(c, g8(c, 2) & 0x70u, 1);
    // 00f4cc  je 0xf51f
    X86_AT(c, 0xf4ccu);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 18);
    // 00f4ce  movzx ebx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf4ceu);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f4d6  add ebx, 7
    X86_AT(c, 0xf4d6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f4d9  shr ebx, 3
    X86_AT(c, 0xf4d9u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 00f4dc  test dl, 0x10
    X86_AT(c, 0xf4dcu);
    (void)x86_logic(c, g8(c, 2) & 0x10u, 1);
    // 00f4df  je 0xf4f6
    X86_AT(c, 0xf4dfu);
    if (x86_cc(c, 4)) { goto L_f4f6; }
    X86_TICK(c, 43);
    // 00f4e1  mov ecx, ebx
    X86_AT(c, 0xf4e1u);
    c.r[1] = c.r[3];
    // 00f4e3  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf4e3u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f4eb  dec eax
    X86_AT(c, 0xf4ebu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f4ec  imul eax, ecx
    X86_AT(c, 0xf4ecu);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f4ef  lea edi, [esi + eax*1]
    X86_AT(c, 0xf4efu);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f4f2  mov al, 0xff
    X86_AT(c, 0xf4f2u);
    s8(c, 0, 0xFFu);
    // 00f4f4  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf4f4u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f4f6:
    X86_TICK(c, 7);
    // 00f4f6  test dl, 0x20
    X86_AT(c, 0xf4f6u);
    (void)x86_logic(c, g8(c, 2) & 0x20u, 1);
    // 00f4f9  je 0xf503
    X86_AT(c, 0xf4f9u);
    if (x86_cc(c, 4)) { goto L_f503; }
    X86_TICK(c, 13);
    // 00f4fb  mov ecx, ebx
    X86_AT(c, 0xf4fbu);
    c.r[1] = c.r[3];
    // 00f4fd  mov edi, esi
    X86_AT(c, 0xf4fdu);
    c.r[7] = c.r[6];
    // 00f4ff  mov al, 0xff
    X86_AT(c, 0xf4ffu);
    s8(c, 0, 0xFFu);
    // 00f501  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf501u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f503:
    X86_TICK(c, 7);
    // 00f503  test dl, 0x40
    X86_AT(c, 0xf503u);
    (void)x86_logic(c, g8(c, 2) & 0x40u, 1);
    // 00f506  je 0xf51f
    X86_AT(c, 0xf506u);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 46);
    // 00f508  mov ecx, ebx
    X86_AT(c, 0xf508u);
    c.r[1] = c.r[3];
    // 00f50a  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf50au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f512  shr eax, 1
    X86_AT(c, 0xf512u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00f514  dec eax
    X86_AT(c, 0xf514u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f515  imul eax, ecx
    X86_AT(c, 0xf515u);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f518  lea edi, [esi + eax*1]
    X86_AT(c, 0xf518u);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f51b  mov al, 0xff
    X86_AT(c, 0xf51bu);
    s8(c, 0, 0xFFu);
    // 00f51d  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf51du);
    x86_string(c, 2, 1, 243, 4, 3);
L_f51f:
    X86_TICK(c, 11);
    // 00f51f  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0xf51fu);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 00f523  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0xf523u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0xf52au); x86_call(c, t); X86_RET(c, 0xf52au); }
    X86_TICK(c, 18);
    // 00f52a  movzx eax, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf52au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)));
    // 00f532  add esp, eax
    X86_AT(c, 0xf532u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, c.r[0], 0, 4); }
    // 00f534  ret 
    X86_AT(c, 0xf534u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf2d0u, "ran off the end of a function");
}
void f_0000f2d3(X86Cpu& c) {
    X86_TICK(c, 59);
    // 00f2d3  movzx ecx, byte ptr gs:[ebp + 0x378]
    X86_AT(c, 0xf2d3u);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x378u)));
    // 00f2db  shr ecx, 4
    X86_AT(c, 0xf2dbu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 00f2de  add ecx, 3
    X86_AT(c, 0xf2deu);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x3u, 0, 4); }
    // 00f2e1  shl esi, cl
    X86_AT(c, 0xf2e1u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[6] = r; }
    // 00f2e3  shr ecx, 2
    X86_AT(c, 0xf2e3u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 00f2e6  shl ecx, 0xb
    X86_AT(c, 0xf2e6u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xBu, 4, w); if (w) c.r[1] = r; }
    // 00f2e9  lds eax, fword ptr cs:[0x1e0]
    X86_AT(c, 0xf2e9u);
    { uint32_t ea = (c.sbase[1] + (uint32_t)(0x1E0u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[0] = o; }
    // 00f2f0  lea esi, [eax + esi*1 + 0x3d000]
    X86_AT(c, 0xf2f0u);
    c.r[6] = (uint32_t)(c.r[0] + c.r[6] + 0x3D000u);
    // 00f2f7  add esi, ecx
    X86_AT(c, 0xf2f7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[1], 0, 4); }
    // 00f2f9  mov word ptr gs:[ebp + 0x370], 8
    X86_AT(c, 0xf2f9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)), 0x8u);
    // 00f303  movzx ax, byte ptr gs:[ebp + 0x378]
    X86_AT(c, 0xf303u);
    s16(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x378u))));
    // 00f30c  mov word ptr gs:[ebp + 0x372], ax
    X86_AT(c, 0xf30cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)), (c.r[0] & 0xFFFFu));
    // 00f314  mov eax, dword ptr gs:[ebp + 0x350]
    X86_AT(c, 0xf314u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x350u)));
    // 00f31b  mov dword ptr gs:[ebp + 0x358], eax
    X86_AT(c, 0xf31bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)), c.r[0]);
    // 00f322  mov eax, dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0xf322u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u)));
    // 00f329  mov dword ptr gs:[ebp + 0x32c], eax
    X86_AT(c, 0xf329u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), c.r[0]);
    // 00f330  jmp 0xf470
    X86_AT(c, 0xf330u);
    goto L_f470;
L_f470:
    X86_TICK(c, 105);
    // 00f470  movzx ecx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf470u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f478  add ecx, 7
    X86_AT(c, 0xf478u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f47b  shr ecx, 3
    X86_AT(c, 0xf47bu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 00f47e  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf47eu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f486  imul eax, ecx
    X86_AT(c, 0xf486u);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f489  mov word ptr gs:[ebp + 0x362], ax
    X86_AT(c, 0xf489u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)), (c.r[0] & 0xFFFFu));
    // 00f491  sub esp, eax
    X86_AT(c, 0xf491u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f493  mov dword ptr gs:[ebp + 0x364], esp
    X86_AT(c, 0xf493u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x364u)), c.r[4]);
    // 00f49a  mov word ptr gs:[ebp + 0x368], ss
    X86_AT(c, 0xf49au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x368u)), (uint32_t)c.sreg[2]);
    // 00f4a1  les edi, fword ptr gs:[ebp + 0x364]
    X86_AT(c, 0xf4a1u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x364u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[7] = o; }
    // 00f4a8  movzx ecx, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf4a8u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)));
    // 00f4b0  push edi
    X86_AT(c, 0xf4b0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00f4b1  push es
    X86_AT(c, 0xf4b1u);
    push32(c, c.sreg[0]);
    // 00f4b2  mov edx, ecx
    X86_AT(c, 0xf4b2u);
    c.r[2] = c.r[1];
    // 00f4b4  shr ecx, 2
    X86_AT(c, 0xf4b4u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 00f4b7  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xf4b7u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 00f4b9  mov ecx, edx
    X86_AT(c, 0xf4b9u);
    c.r[1] = c.r[2];
    // 00f4bb  and ecx, 3
    X86_AT(c, 0xf4bbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x3u, 4); }
    // 00f4be  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xf4beu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 00f4c0  pop ds
    X86_AT(c, 0xf4c0u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f4c1  pop esi
    X86_AT(c, 0xf4c1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f4c2  mov dl, byte ptr gs:[ebp + 0x338]
    X86_AT(c, 0xf4c2u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))));
    // 00f4c9  test dl, 0x70
    X86_AT(c, 0xf4c9u);
    (void)x86_logic(c, g8(c, 2) & 0x70u, 1);
    // 00f4cc  je 0xf51f
    X86_AT(c, 0xf4ccu);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 18);
    // 00f4ce  movzx ebx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf4ceu);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f4d6  add ebx, 7
    X86_AT(c, 0xf4d6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f4d9  shr ebx, 3
    X86_AT(c, 0xf4d9u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 00f4dc  test dl, 0x10
    X86_AT(c, 0xf4dcu);
    (void)x86_logic(c, g8(c, 2) & 0x10u, 1);
    // 00f4df  je 0xf4f6
    X86_AT(c, 0xf4dfu);
    if (x86_cc(c, 4)) { goto L_f4f6; }
    X86_TICK(c, 43);
    // 00f4e1  mov ecx, ebx
    X86_AT(c, 0xf4e1u);
    c.r[1] = c.r[3];
    // 00f4e3  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf4e3u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f4eb  dec eax
    X86_AT(c, 0xf4ebu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f4ec  imul eax, ecx
    X86_AT(c, 0xf4ecu);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f4ef  lea edi, [esi + eax*1]
    X86_AT(c, 0xf4efu);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f4f2  mov al, 0xff
    X86_AT(c, 0xf4f2u);
    s8(c, 0, 0xFFu);
    // 00f4f4  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf4f4u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f4f6:
    X86_TICK(c, 7);
    // 00f4f6  test dl, 0x20
    X86_AT(c, 0xf4f6u);
    (void)x86_logic(c, g8(c, 2) & 0x20u, 1);
    // 00f4f9  je 0xf503
    X86_AT(c, 0xf4f9u);
    if (x86_cc(c, 4)) { goto L_f503; }
    X86_TICK(c, 13);
    // 00f4fb  mov ecx, ebx
    X86_AT(c, 0xf4fbu);
    c.r[1] = c.r[3];
    // 00f4fd  mov edi, esi
    X86_AT(c, 0xf4fdu);
    c.r[7] = c.r[6];
    // 00f4ff  mov al, 0xff
    X86_AT(c, 0xf4ffu);
    s8(c, 0, 0xFFu);
    // 00f501  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf501u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f503:
    X86_TICK(c, 7);
    // 00f503  test dl, 0x40
    X86_AT(c, 0xf503u);
    (void)x86_logic(c, g8(c, 2) & 0x40u, 1);
    // 00f506  je 0xf51f
    X86_AT(c, 0xf506u);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 46);
    // 00f508  mov ecx, ebx
    X86_AT(c, 0xf508u);
    c.r[1] = c.r[3];
    // 00f50a  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf50au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f512  shr eax, 1
    X86_AT(c, 0xf512u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00f514  dec eax
    X86_AT(c, 0xf514u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f515  imul eax, ecx
    X86_AT(c, 0xf515u);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f518  lea edi, [esi + eax*1]
    X86_AT(c, 0xf518u);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f51b  mov al, 0xff
    X86_AT(c, 0xf51bu);
    s8(c, 0, 0xFFu);
    // 00f51d  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf51du);
    x86_string(c, 2, 1, 243, 4, 3);
L_f51f:
    X86_TICK(c, 11);
    // 00f51f  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0xf51fu);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 00f523  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0xf523u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0xf52au); x86_call(c, t); X86_RET(c, 0xf52au); }
    X86_TICK(c, 18);
    // 00f52a  movzx eax, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf52au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)));
    // 00f532  add esp, eax
    X86_AT(c, 0xf532u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, c.r[0], 0, 4); }
    // 00f534  ret 
    X86_AT(c, 0xf534u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf2d3u, "ran off the end of a function");
}
void f_0000f2db(X86Cpu& c) {
    X86_TICK(c, 53);
    // 00f2db  shr ecx, 4
    X86_AT(c, 0xf2dbu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 00f2de  add ecx, 3
    X86_AT(c, 0xf2deu);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x3u, 0, 4); }
    // 00f2e1  shl esi, cl
    X86_AT(c, 0xf2e1u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[6] = r; }
    // 00f2e3  shr ecx, 2
    X86_AT(c, 0xf2e3u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 00f2e6  shl ecx, 0xb
    X86_AT(c, 0xf2e6u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xBu, 4, w); if (w) c.r[1] = r; }
    // 00f2e9  lds eax, fword ptr cs:[0x1e0]
    X86_AT(c, 0xf2e9u);
    { uint32_t ea = (c.sbase[1] + (uint32_t)(0x1E0u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[0] = o; }
    // 00f2f0  lea esi, [eax + esi*1 + 0x3d000]
    X86_AT(c, 0xf2f0u);
    c.r[6] = (uint32_t)(c.r[0] + c.r[6] + 0x3D000u);
    // 00f2f7  add esi, ecx
    X86_AT(c, 0xf2f7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[1], 0, 4); }
    // 00f2f9  mov word ptr gs:[ebp + 0x370], 8
    X86_AT(c, 0xf2f9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)), 0x8u);
    // 00f303  movzx ax, byte ptr gs:[ebp + 0x378]
    X86_AT(c, 0xf303u);
    s16(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x378u))));
    // 00f30c  mov word ptr gs:[ebp + 0x372], ax
    X86_AT(c, 0xf30cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)), (c.r[0] & 0xFFFFu));
    // 00f314  mov eax, dword ptr gs:[ebp + 0x350]
    X86_AT(c, 0xf314u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x350u)));
    // 00f31b  mov dword ptr gs:[ebp + 0x358], eax
    X86_AT(c, 0xf31bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)), c.r[0]);
    // 00f322  mov eax, dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0xf322u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u)));
    // 00f329  mov dword ptr gs:[ebp + 0x32c], eax
    X86_AT(c, 0xf329u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), c.r[0]);
    // 00f330  jmp 0xf470
    X86_AT(c, 0xf330u);
    goto L_f470;
L_f470:
    X86_TICK(c, 105);
    // 00f470  movzx ecx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf470u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f478  add ecx, 7
    X86_AT(c, 0xf478u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f47b  shr ecx, 3
    X86_AT(c, 0xf47bu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 00f47e  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf47eu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f486  imul eax, ecx
    X86_AT(c, 0xf486u);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f489  mov word ptr gs:[ebp + 0x362], ax
    X86_AT(c, 0xf489u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)), (c.r[0] & 0xFFFFu));
    // 00f491  sub esp, eax
    X86_AT(c, 0xf491u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f493  mov dword ptr gs:[ebp + 0x364], esp
    X86_AT(c, 0xf493u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x364u)), c.r[4]);
    // 00f49a  mov word ptr gs:[ebp + 0x368], ss
    X86_AT(c, 0xf49au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x368u)), (uint32_t)c.sreg[2]);
    // 00f4a1  les edi, fword ptr gs:[ebp + 0x364]
    X86_AT(c, 0xf4a1u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x364u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[7] = o; }
    // 00f4a8  movzx ecx, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf4a8u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)));
    // 00f4b0  push edi
    X86_AT(c, 0xf4b0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00f4b1  push es
    X86_AT(c, 0xf4b1u);
    push32(c, c.sreg[0]);
    // 00f4b2  mov edx, ecx
    X86_AT(c, 0xf4b2u);
    c.r[2] = c.r[1];
    // 00f4b4  shr ecx, 2
    X86_AT(c, 0xf4b4u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 00f4b7  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xf4b7u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 00f4b9  mov ecx, edx
    X86_AT(c, 0xf4b9u);
    c.r[1] = c.r[2];
    // 00f4bb  and ecx, 3
    X86_AT(c, 0xf4bbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x3u, 4); }
    // 00f4be  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xf4beu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 00f4c0  pop ds
    X86_AT(c, 0xf4c0u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f4c1  pop esi
    X86_AT(c, 0xf4c1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f4c2  mov dl, byte ptr gs:[ebp + 0x338]
    X86_AT(c, 0xf4c2u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))));
    // 00f4c9  test dl, 0x70
    X86_AT(c, 0xf4c9u);
    (void)x86_logic(c, g8(c, 2) & 0x70u, 1);
    // 00f4cc  je 0xf51f
    X86_AT(c, 0xf4ccu);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 18);
    // 00f4ce  movzx ebx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf4ceu);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f4d6  add ebx, 7
    X86_AT(c, 0xf4d6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f4d9  shr ebx, 3
    X86_AT(c, 0xf4d9u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 00f4dc  test dl, 0x10
    X86_AT(c, 0xf4dcu);
    (void)x86_logic(c, g8(c, 2) & 0x10u, 1);
    // 00f4df  je 0xf4f6
    X86_AT(c, 0xf4dfu);
    if (x86_cc(c, 4)) { goto L_f4f6; }
    X86_TICK(c, 43);
    // 00f4e1  mov ecx, ebx
    X86_AT(c, 0xf4e1u);
    c.r[1] = c.r[3];
    // 00f4e3  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf4e3u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f4eb  dec eax
    X86_AT(c, 0xf4ebu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f4ec  imul eax, ecx
    X86_AT(c, 0xf4ecu);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f4ef  lea edi, [esi + eax*1]
    X86_AT(c, 0xf4efu);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f4f2  mov al, 0xff
    X86_AT(c, 0xf4f2u);
    s8(c, 0, 0xFFu);
    // 00f4f4  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf4f4u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f4f6:
    X86_TICK(c, 7);
    // 00f4f6  test dl, 0x20
    X86_AT(c, 0xf4f6u);
    (void)x86_logic(c, g8(c, 2) & 0x20u, 1);
    // 00f4f9  je 0xf503
    X86_AT(c, 0xf4f9u);
    if (x86_cc(c, 4)) { goto L_f503; }
    X86_TICK(c, 13);
    // 00f4fb  mov ecx, ebx
    X86_AT(c, 0xf4fbu);
    c.r[1] = c.r[3];
    // 00f4fd  mov edi, esi
    X86_AT(c, 0xf4fdu);
    c.r[7] = c.r[6];
    // 00f4ff  mov al, 0xff
    X86_AT(c, 0xf4ffu);
    s8(c, 0, 0xFFu);
    // 00f501  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf501u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f503:
    X86_TICK(c, 7);
    // 00f503  test dl, 0x40
    X86_AT(c, 0xf503u);
    (void)x86_logic(c, g8(c, 2) & 0x40u, 1);
    // 00f506  je 0xf51f
    X86_AT(c, 0xf506u);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 46);
    // 00f508  mov ecx, ebx
    X86_AT(c, 0xf508u);
    c.r[1] = c.r[3];
    // 00f50a  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf50au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f512  shr eax, 1
    X86_AT(c, 0xf512u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00f514  dec eax
    X86_AT(c, 0xf514u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f515  imul eax, ecx
    X86_AT(c, 0xf515u);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f518  lea edi, [esi + eax*1]
    X86_AT(c, 0xf518u);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f51b  mov al, 0xff
    X86_AT(c, 0xf51bu);
    s8(c, 0, 0xFFu);
    // 00f51d  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf51du);
    x86_string(c, 2, 1, 243, 4, 3);
L_f51f:
    X86_TICK(c, 11);
    // 00f51f  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0xf51fu);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 00f523  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0xf523u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0xf52au); x86_call(c, t); X86_RET(c, 0xf52au); }
    X86_TICK(c, 18);
    // 00f52a  movzx eax, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf52au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)));
    // 00f532  add esp, eax
    X86_AT(c, 0xf532u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, c.r[0], 0, 4); }
    // 00f534  ret 
    X86_AT(c, 0xf534u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf2dbu, "ran off the end of a function");
}
void f_0000f2de(X86Cpu& c) {
    X86_TICK(c, 50);
    // 00f2de  add ecx, 3
    X86_AT(c, 0xf2deu);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x3u, 0, 4); }
    // 00f2e1  shl esi, cl
    X86_AT(c, 0xf2e1u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[6] = r; }
    // 00f2e3  shr ecx, 2
    X86_AT(c, 0xf2e3u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 00f2e6  shl ecx, 0xb
    X86_AT(c, 0xf2e6u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xBu, 4, w); if (w) c.r[1] = r; }
    // 00f2e9  lds eax, fword ptr cs:[0x1e0]
    X86_AT(c, 0xf2e9u);
    { uint32_t ea = (c.sbase[1] + (uint32_t)(0x1E0u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[0] = o; }
    // 00f2f0  lea esi, [eax + esi*1 + 0x3d000]
    X86_AT(c, 0xf2f0u);
    c.r[6] = (uint32_t)(c.r[0] + c.r[6] + 0x3D000u);
    // 00f2f7  add esi, ecx
    X86_AT(c, 0xf2f7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[1], 0, 4); }
    // 00f2f9  mov word ptr gs:[ebp + 0x370], 8
    X86_AT(c, 0xf2f9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)), 0x8u);
    // 00f303  movzx ax, byte ptr gs:[ebp + 0x378]
    X86_AT(c, 0xf303u);
    s16(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x378u))));
    // 00f30c  mov word ptr gs:[ebp + 0x372], ax
    X86_AT(c, 0xf30cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)), (c.r[0] & 0xFFFFu));
    // 00f314  mov eax, dword ptr gs:[ebp + 0x350]
    X86_AT(c, 0xf314u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x350u)));
    // 00f31b  mov dword ptr gs:[ebp + 0x358], eax
    X86_AT(c, 0xf31bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)), c.r[0]);
    // 00f322  mov eax, dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0xf322u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u)));
    // 00f329  mov dword ptr gs:[ebp + 0x32c], eax
    X86_AT(c, 0xf329u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), c.r[0]);
    // 00f330  jmp 0xf470
    X86_AT(c, 0xf330u);
    goto L_f470;
L_f470:
    X86_TICK(c, 105);
    // 00f470  movzx ecx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf470u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f478  add ecx, 7
    X86_AT(c, 0xf478u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f47b  shr ecx, 3
    X86_AT(c, 0xf47bu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 00f47e  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf47eu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f486  imul eax, ecx
    X86_AT(c, 0xf486u);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f489  mov word ptr gs:[ebp + 0x362], ax
    X86_AT(c, 0xf489u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)), (c.r[0] & 0xFFFFu));
    // 00f491  sub esp, eax
    X86_AT(c, 0xf491u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f493  mov dword ptr gs:[ebp + 0x364], esp
    X86_AT(c, 0xf493u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x364u)), c.r[4]);
    // 00f49a  mov word ptr gs:[ebp + 0x368], ss
    X86_AT(c, 0xf49au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x368u)), (uint32_t)c.sreg[2]);
    // 00f4a1  les edi, fword ptr gs:[ebp + 0x364]
    X86_AT(c, 0xf4a1u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x364u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[7] = o; }
    // 00f4a8  movzx ecx, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf4a8u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)));
    // 00f4b0  push edi
    X86_AT(c, 0xf4b0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00f4b1  push es
    X86_AT(c, 0xf4b1u);
    push32(c, c.sreg[0]);
    // 00f4b2  mov edx, ecx
    X86_AT(c, 0xf4b2u);
    c.r[2] = c.r[1];
    // 00f4b4  shr ecx, 2
    X86_AT(c, 0xf4b4u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 00f4b7  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xf4b7u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 00f4b9  mov ecx, edx
    X86_AT(c, 0xf4b9u);
    c.r[1] = c.r[2];
    // 00f4bb  and ecx, 3
    X86_AT(c, 0xf4bbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x3u, 4); }
    // 00f4be  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xf4beu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 00f4c0  pop ds
    X86_AT(c, 0xf4c0u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f4c1  pop esi
    X86_AT(c, 0xf4c1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f4c2  mov dl, byte ptr gs:[ebp + 0x338]
    X86_AT(c, 0xf4c2u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))));
    // 00f4c9  test dl, 0x70
    X86_AT(c, 0xf4c9u);
    (void)x86_logic(c, g8(c, 2) & 0x70u, 1);
    // 00f4cc  je 0xf51f
    X86_AT(c, 0xf4ccu);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 18);
    // 00f4ce  movzx ebx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf4ceu);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f4d6  add ebx, 7
    X86_AT(c, 0xf4d6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f4d9  shr ebx, 3
    X86_AT(c, 0xf4d9u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 00f4dc  test dl, 0x10
    X86_AT(c, 0xf4dcu);
    (void)x86_logic(c, g8(c, 2) & 0x10u, 1);
    // 00f4df  je 0xf4f6
    X86_AT(c, 0xf4dfu);
    if (x86_cc(c, 4)) { goto L_f4f6; }
    X86_TICK(c, 43);
    // 00f4e1  mov ecx, ebx
    X86_AT(c, 0xf4e1u);
    c.r[1] = c.r[3];
    // 00f4e3  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf4e3u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f4eb  dec eax
    X86_AT(c, 0xf4ebu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f4ec  imul eax, ecx
    X86_AT(c, 0xf4ecu);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f4ef  lea edi, [esi + eax*1]
    X86_AT(c, 0xf4efu);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f4f2  mov al, 0xff
    X86_AT(c, 0xf4f2u);
    s8(c, 0, 0xFFu);
    // 00f4f4  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf4f4u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f4f6:
    X86_TICK(c, 7);
    // 00f4f6  test dl, 0x20
    X86_AT(c, 0xf4f6u);
    (void)x86_logic(c, g8(c, 2) & 0x20u, 1);
    // 00f4f9  je 0xf503
    X86_AT(c, 0xf4f9u);
    if (x86_cc(c, 4)) { goto L_f503; }
    X86_TICK(c, 13);
    // 00f4fb  mov ecx, ebx
    X86_AT(c, 0xf4fbu);
    c.r[1] = c.r[3];
    // 00f4fd  mov edi, esi
    X86_AT(c, 0xf4fdu);
    c.r[7] = c.r[6];
    // 00f4ff  mov al, 0xff
    X86_AT(c, 0xf4ffu);
    s8(c, 0, 0xFFu);
    // 00f501  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf501u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f503:
    X86_TICK(c, 7);
    // 00f503  test dl, 0x40
    X86_AT(c, 0xf503u);
    (void)x86_logic(c, g8(c, 2) & 0x40u, 1);
    // 00f506  je 0xf51f
    X86_AT(c, 0xf506u);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 46);
    // 00f508  mov ecx, ebx
    X86_AT(c, 0xf508u);
    c.r[1] = c.r[3];
    // 00f50a  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf50au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f512  shr eax, 1
    X86_AT(c, 0xf512u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00f514  dec eax
    X86_AT(c, 0xf514u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f515  imul eax, ecx
    X86_AT(c, 0xf515u);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f518  lea edi, [esi + eax*1]
    X86_AT(c, 0xf518u);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f51b  mov al, 0xff
    X86_AT(c, 0xf51bu);
    s8(c, 0, 0xFFu);
    // 00f51d  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf51du);
    x86_string(c, 2, 1, 243, 4, 3);
L_f51f:
    X86_TICK(c, 11);
    // 00f51f  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0xf51fu);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 00f523  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0xf523u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0xf52au); x86_call(c, t); X86_RET(c, 0xf52au); }
    X86_TICK(c, 18);
    // 00f52a  movzx eax, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf52au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)));
    // 00f532  add esp, eax
    X86_AT(c, 0xf532u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, c.r[0], 0, 4); }
    // 00f534  ret 
    X86_AT(c, 0xf534u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf2deu, "ran off the end of a function");
}
void f_0000f2e1(X86Cpu& c) {
    X86_TICK(c, 48);
    // 00f2e1  shl esi, cl
    X86_AT(c, 0xf2e1u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[6] = r; }
    // 00f2e3  shr ecx, 2
    X86_AT(c, 0xf2e3u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 00f2e6  shl ecx, 0xb
    X86_AT(c, 0xf2e6u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xBu, 4, w); if (w) c.r[1] = r; }
    // 00f2e9  lds eax, fword ptr cs:[0x1e0]
    X86_AT(c, 0xf2e9u);
    { uint32_t ea = (c.sbase[1] + (uint32_t)(0x1E0u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[0] = o; }
    // 00f2f0  lea esi, [eax + esi*1 + 0x3d000]
    X86_AT(c, 0xf2f0u);
    c.r[6] = (uint32_t)(c.r[0] + c.r[6] + 0x3D000u);
    // 00f2f7  add esi, ecx
    X86_AT(c, 0xf2f7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[1], 0, 4); }
    // 00f2f9  mov word ptr gs:[ebp + 0x370], 8
    X86_AT(c, 0xf2f9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)), 0x8u);
    // 00f303  movzx ax, byte ptr gs:[ebp + 0x378]
    X86_AT(c, 0xf303u);
    s16(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x378u))));
    // 00f30c  mov word ptr gs:[ebp + 0x372], ax
    X86_AT(c, 0xf30cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)), (c.r[0] & 0xFFFFu));
    // 00f314  mov eax, dword ptr gs:[ebp + 0x350]
    X86_AT(c, 0xf314u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x350u)));
    // 00f31b  mov dword ptr gs:[ebp + 0x358], eax
    X86_AT(c, 0xf31bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)), c.r[0]);
    // 00f322  mov eax, dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0xf322u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u)));
    // 00f329  mov dword ptr gs:[ebp + 0x32c], eax
    X86_AT(c, 0xf329u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), c.r[0]);
    // 00f330  jmp 0xf470
    X86_AT(c, 0xf330u);
    goto L_f470;
L_f470:
    X86_TICK(c, 105);
    // 00f470  movzx ecx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf470u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f478  add ecx, 7
    X86_AT(c, 0xf478u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f47b  shr ecx, 3
    X86_AT(c, 0xf47bu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 00f47e  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf47eu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f486  imul eax, ecx
    X86_AT(c, 0xf486u);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f489  mov word ptr gs:[ebp + 0x362], ax
    X86_AT(c, 0xf489u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)), (c.r[0] & 0xFFFFu));
    // 00f491  sub esp, eax
    X86_AT(c, 0xf491u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f493  mov dword ptr gs:[ebp + 0x364], esp
    X86_AT(c, 0xf493u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x364u)), c.r[4]);
    // 00f49a  mov word ptr gs:[ebp + 0x368], ss
    X86_AT(c, 0xf49au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x368u)), (uint32_t)c.sreg[2]);
    // 00f4a1  les edi, fword ptr gs:[ebp + 0x364]
    X86_AT(c, 0xf4a1u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x364u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[7] = o; }
    // 00f4a8  movzx ecx, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf4a8u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)));
    // 00f4b0  push edi
    X86_AT(c, 0xf4b0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00f4b1  push es
    X86_AT(c, 0xf4b1u);
    push32(c, c.sreg[0]);
    // 00f4b2  mov edx, ecx
    X86_AT(c, 0xf4b2u);
    c.r[2] = c.r[1];
    // 00f4b4  shr ecx, 2
    X86_AT(c, 0xf4b4u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 00f4b7  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xf4b7u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 00f4b9  mov ecx, edx
    X86_AT(c, 0xf4b9u);
    c.r[1] = c.r[2];
    // 00f4bb  and ecx, 3
    X86_AT(c, 0xf4bbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x3u, 4); }
    // 00f4be  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xf4beu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 00f4c0  pop ds
    X86_AT(c, 0xf4c0u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f4c1  pop esi
    X86_AT(c, 0xf4c1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f4c2  mov dl, byte ptr gs:[ebp + 0x338]
    X86_AT(c, 0xf4c2u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))));
    // 00f4c9  test dl, 0x70
    X86_AT(c, 0xf4c9u);
    (void)x86_logic(c, g8(c, 2) & 0x70u, 1);
    // 00f4cc  je 0xf51f
    X86_AT(c, 0xf4ccu);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 18);
    // 00f4ce  movzx ebx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf4ceu);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f4d6  add ebx, 7
    X86_AT(c, 0xf4d6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f4d9  shr ebx, 3
    X86_AT(c, 0xf4d9u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 00f4dc  test dl, 0x10
    X86_AT(c, 0xf4dcu);
    (void)x86_logic(c, g8(c, 2) & 0x10u, 1);
    // 00f4df  je 0xf4f6
    X86_AT(c, 0xf4dfu);
    if (x86_cc(c, 4)) { goto L_f4f6; }
    X86_TICK(c, 43);
    // 00f4e1  mov ecx, ebx
    X86_AT(c, 0xf4e1u);
    c.r[1] = c.r[3];
    // 00f4e3  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf4e3u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f4eb  dec eax
    X86_AT(c, 0xf4ebu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f4ec  imul eax, ecx
    X86_AT(c, 0xf4ecu);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f4ef  lea edi, [esi + eax*1]
    X86_AT(c, 0xf4efu);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f4f2  mov al, 0xff
    X86_AT(c, 0xf4f2u);
    s8(c, 0, 0xFFu);
    // 00f4f4  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf4f4u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f4f6:
    X86_TICK(c, 7);
    // 00f4f6  test dl, 0x20
    X86_AT(c, 0xf4f6u);
    (void)x86_logic(c, g8(c, 2) & 0x20u, 1);
    // 00f4f9  je 0xf503
    X86_AT(c, 0xf4f9u);
    if (x86_cc(c, 4)) { goto L_f503; }
    X86_TICK(c, 13);
    // 00f4fb  mov ecx, ebx
    X86_AT(c, 0xf4fbu);
    c.r[1] = c.r[3];
    // 00f4fd  mov edi, esi
    X86_AT(c, 0xf4fdu);
    c.r[7] = c.r[6];
    // 00f4ff  mov al, 0xff
    X86_AT(c, 0xf4ffu);
    s8(c, 0, 0xFFu);
    // 00f501  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf501u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f503:
    X86_TICK(c, 7);
    // 00f503  test dl, 0x40
    X86_AT(c, 0xf503u);
    (void)x86_logic(c, g8(c, 2) & 0x40u, 1);
    // 00f506  je 0xf51f
    X86_AT(c, 0xf506u);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 46);
    // 00f508  mov ecx, ebx
    X86_AT(c, 0xf508u);
    c.r[1] = c.r[3];
    // 00f50a  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf50au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f512  shr eax, 1
    X86_AT(c, 0xf512u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00f514  dec eax
    X86_AT(c, 0xf514u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f515  imul eax, ecx
    X86_AT(c, 0xf515u);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f518  lea edi, [esi + eax*1]
    X86_AT(c, 0xf518u);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f51b  mov al, 0xff
    X86_AT(c, 0xf51bu);
    s8(c, 0, 0xFFu);
    // 00f51d  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf51du);
    x86_string(c, 2, 1, 243, 4, 3);
L_f51f:
    X86_TICK(c, 11);
    // 00f51f  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0xf51fu);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 00f523  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0xf523u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0xf52au); x86_call(c, t); X86_RET(c, 0xf52au); }
    X86_TICK(c, 18);
    // 00f52a  movzx eax, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf52au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)));
    // 00f532  add esp, eax
    X86_AT(c, 0xf532u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, c.r[0], 0, 4); }
    // 00f534  ret 
    X86_AT(c, 0xf534u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf2e1u, "ran off the end of a function");
}
void f_0000f2e3(X86Cpu& c) {
    X86_TICK(c, 45);
    // 00f2e3  shr ecx, 2
    X86_AT(c, 0xf2e3u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 00f2e6  shl ecx, 0xb
    X86_AT(c, 0xf2e6u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xBu, 4, w); if (w) c.r[1] = r; }
    // 00f2e9  lds eax, fword ptr cs:[0x1e0]
    X86_AT(c, 0xf2e9u);
    { uint32_t ea = (c.sbase[1] + (uint32_t)(0x1E0u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[0] = o; }
    // 00f2f0  lea esi, [eax + esi*1 + 0x3d000]
    X86_AT(c, 0xf2f0u);
    c.r[6] = (uint32_t)(c.r[0] + c.r[6] + 0x3D000u);
    // 00f2f7  add esi, ecx
    X86_AT(c, 0xf2f7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[1], 0, 4); }
    // 00f2f9  mov word ptr gs:[ebp + 0x370], 8
    X86_AT(c, 0xf2f9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)), 0x8u);
    // 00f303  movzx ax, byte ptr gs:[ebp + 0x378]
    X86_AT(c, 0xf303u);
    s16(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x378u))));
    // 00f30c  mov word ptr gs:[ebp + 0x372], ax
    X86_AT(c, 0xf30cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)), (c.r[0] & 0xFFFFu));
    // 00f314  mov eax, dword ptr gs:[ebp + 0x350]
    X86_AT(c, 0xf314u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x350u)));
    // 00f31b  mov dword ptr gs:[ebp + 0x358], eax
    X86_AT(c, 0xf31bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)), c.r[0]);
    // 00f322  mov eax, dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0xf322u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u)));
    // 00f329  mov dword ptr gs:[ebp + 0x32c], eax
    X86_AT(c, 0xf329u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), c.r[0]);
    // 00f330  jmp 0xf470
    X86_AT(c, 0xf330u);
    goto L_f470;
L_f470:
    X86_TICK(c, 105);
    // 00f470  movzx ecx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf470u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f478  add ecx, 7
    X86_AT(c, 0xf478u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f47b  shr ecx, 3
    X86_AT(c, 0xf47bu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 00f47e  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf47eu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f486  imul eax, ecx
    X86_AT(c, 0xf486u);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f489  mov word ptr gs:[ebp + 0x362], ax
    X86_AT(c, 0xf489u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)), (c.r[0] & 0xFFFFu));
    // 00f491  sub esp, eax
    X86_AT(c, 0xf491u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f493  mov dword ptr gs:[ebp + 0x364], esp
    X86_AT(c, 0xf493u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x364u)), c.r[4]);
    // 00f49a  mov word ptr gs:[ebp + 0x368], ss
    X86_AT(c, 0xf49au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x368u)), (uint32_t)c.sreg[2]);
    // 00f4a1  les edi, fword ptr gs:[ebp + 0x364]
    X86_AT(c, 0xf4a1u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x364u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[7] = o; }
    // 00f4a8  movzx ecx, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf4a8u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)));
    // 00f4b0  push edi
    X86_AT(c, 0xf4b0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00f4b1  push es
    X86_AT(c, 0xf4b1u);
    push32(c, c.sreg[0]);
    // 00f4b2  mov edx, ecx
    X86_AT(c, 0xf4b2u);
    c.r[2] = c.r[1];
    // 00f4b4  shr ecx, 2
    X86_AT(c, 0xf4b4u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 00f4b7  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xf4b7u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 00f4b9  mov ecx, edx
    X86_AT(c, 0xf4b9u);
    c.r[1] = c.r[2];
    // 00f4bb  and ecx, 3
    X86_AT(c, 0xf4bbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x3u, 4); }
    // 00f4be  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xf4beu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 00f4c0  pop ds
    X86_AT(c, 0xf4c0u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f4c1  pop esi
    X86_AT(c, 0xf4c1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f4c2  mov dl, byte ptr gs:[ebp + 0x338]
    X86_AT(c, 0xf4c2u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))));
    // 00f4c9  test dl, 0x70
    X86_AT(c, 0xf4c9u);
    (void)x86_logic(c, g8(c, 2) & 0x70u, 1);
    // 00f4cc  je 0xf51f
    X86_AT(c, 0xf4ccu);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 18);
    // 00f4ce  movzx ebx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf4ceu);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f4d6  add ebx, 7
    X86_AT(c, 0xf4d6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f4d9  shr ebx, 3
    X86_AT(c, 0xf4d9u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 00f4dc  test dl, 0x10
    X86_AT(c, 0xf4dcu);
    (void)x86_logic(c, g8(c, 2) & 0x10u, 1);
    // 00f4df  je 0xf4f6
    X86_AT(c, 0xf4dfu);
    if (x86_cc(c, 4)) { goto L_f4f6; }
    X86_TICK(c, 43);
    // 00f4e1  mov ecx, ebx
    X86_AT(c, 0xf4e1u);
    c.r[1] = c.r[3];
    // 00f4e3  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf4e3u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f4eb  dec eax
    X86_AT(c, 0xf4ebu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f4ec  imul eax, ecx
    X86_AT(c, 0xf4ecu);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f4ef  lea edi, [esi + eax*1]
    X86_AT(c, 0xf4efu);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f4f2  mov al, 0xff
    X86_AT(c, 0xf4f2u);
    s8(c, 0, 0xFFu);
    // 00f4f4  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf4f4u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f4f6:
    X86_TICK(c, 7);
    // 00f4f6  test dl, 0x20
    X86_AT(c, 0xf4f6u);
    (void)x86_logic(c, g8(c, 2) & 0x20u, 1);
    // 00f4f9  je 0xf503
    X86_AT(c, 0xf4f9u);
    if (x86_cc(c, 4)) { goto L_f503; }
    X86_TICK(c, 13);
    // 00f4fb  mov ecx, ebx
    X86_AT(c, 0xf4fbu);
    c.r[1] = c.r[3];
    // 00f4fd  mov edi, esi
    X86_AT(c, 0xf4fdu);
    c.r[7] = c.r[6];
    // 00f4ff  mov al, 0xff
    X86_AT(c, 0xf4ffu);
    s8(c, 0, 0xFFu);
    // 00f501  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf501u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f503:
    X86_TICK(c, 7);
    // 00f503  test dl, 0x40
    X86_AT(c, 0xf503u);
    (void)x86_logic(c, g8(c, 2) & 0x40u, 1);
    // 00f506  je 0xf51f
    X86_AT(c, 0xf506u);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 46);
    // 00f508  mov ecx, ebx
    X86_AT(c, 0xf508u);
    c.r[1] = c.r[3];
    // 00f50a  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf50au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f512  shr eax, 1
    X86_AT(c, 0xf512u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00f514  dec eax
    X86_AT(c, 0xf514u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f515  imul eax, ecx
    X86_AT(c, 0xf515u);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f518  lea edi, [esi + eax*1]
    X86_AT(c, 0xf518u);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f51b  mov al, 0xff
    X86_AT(c, 0xf51bu);
    s8(c, 0, 0xFFu);
    // 00f51d  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf51du);
    x86_string(c, 2, 1, 243, 4, 3);
L_f51f:
    X86_TICK(c, 11);
    // 00f51f  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0xf51fu);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 00f523  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0xf523u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0xf52au); x86_call(c, t); X86_RET(c, 0xf52au); }
    X86_TICK(c, 18);
    // 00f52a  movzx eax, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf52au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)));
    // 00f532  add esp, eax
    X86_AT(c, 0xf532u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, c.r[0], 0, 4); }
    // 00f534  ret 
    X86_AT(c, 0xf534u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf2e3u, "ran off the end of a function");
}
void f_0000f2e6(X86Cpu& c) {
    X86_TICK(c, 42);
    // 00f2e6  shl ecx, 0xb
    X86_AT(c, 0xf2e6u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xBu, 4, w); if (w) c.r[1] = r; }
    // 00f2e9  lds eax, fword ptr cs:[0x1e0]
    X86_AT(c, 0xf2e9u);
    { uint32_t ea = (c.sbase[1] + (uint32_t)(0x1E0u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[0] = o; }
    // 00f2f0  lea esi, [eax + esi*1 + 0x3d000]
    X86_AT(c, 0xf2f0u);
    c.r[6] = (uint32_t)(c.r[0] + c.r[6] + 0x3D000u);
    // 00f2f7  add esi, ecx
    X86_AT(c, 0xf2f7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[1], 0, 4); }
    // 00f2f9  mov word ptr gs:[ebp + 0x370], 8
    X86_AT(c, 0xf2f9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)), 0x8u);
    // 00f303  movzx ax, byte ptr gs:[ebp + 0x378]
    X86_AT(c, 0xf303u);
    s16(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x378u))));
    // 00f30c  mov word ptr gs:[ebp + 0x372], ax
    X86_AT(c, 0xf30cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)), (c.r[0] & 0xFFFFu));
    // 00f314  mov eax, dword ptr gs:[ebp + 0x350]
    X86_AT(c, 0xf314u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x350u)));
    // 00f31b  mov dword ptr gs:[ebp + 0x358], eax
    X86_AT(c, 0xf31bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)), c.r[0]);
    // 00f322  mov eax, dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0xf322u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u)));
    // 00f329  mov dword ptr gs:[ebp + 0x32c], eax
    X86_AT(c, 0xf329u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), c.r[0]);
    // 00f330  jmp 0xf470
    X86_AT(c, 0xf330u);
    goto L_f470;
L_f470:
    X86_TICK(c, 105);
    // 00f470  movzx ecx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf470u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f478  add ecx, 7
    X86_AT(c, 0xf478u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f47b  shr ecx, 3
    X86_AT(c, 0xf47bu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 00f47e  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf47eu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f486  imul eax, ecx
    X86_AT(c, 0xf486u);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f489  mov word ptr gs:[ebp + 0x362], ax
    X86_AT(c, 0xf489u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)), (c.r[0] & 0xFFFFu));
    // 00f491  sub esp, eax
    X86_AT(c, 0xf491u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f493  mov dword ptr gs:[ebp + 0x364], esp
    X86_AT(c, 0xf493u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x364u)), c.r[4]);
    // 00f49a  mov word ptr gs:[ebp + 0x368], ss
    X86_AT(c, 0xf49au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x368u)), (uint32_t)c.sreg[2]);
    // 00f4a1  les edi, fword ptr gs:[ebp + 0x364]
    X86_AT(c, 0xf4a1u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x364u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[7] = o; }
    // 00f4a8  movzx ecx, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf4a8u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)));
    // 00f4b0  push edi
    X86_AT(c, 0xf4b0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00f4b1  push es
    X86_AT(c, 0xf4b1u);
    push32(c, c.sreg[0]);
    // 00f4b2  mov edx, ecx
    X86_AT(c, 0xf4b2u);
    c.r[2] = c.r[1];
    // 00f4b4  shr ecx, 2
    X86_AT(c, 0xf4b4u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 00f4b7  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xf4b7u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 00f4b9  mov ecx, edx
    X86_AT(c, 0xf4b9u);
    c.r[1] = c.r[2];
    // 00f4bb  and ecx, 3
    X86_AT(c, 0xf4bbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x3u, 4); }
    // 00f4be  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xf4beu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 00f4c0  pop ds
    X86_AT(c, 0xf4c0u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f4c1  pop esi
    X86_AT(c, 0xf4c1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f4c2  mov dl, byte ptr gs:[ebp + 0x338]
    X86_AT(c, 0xf4c2u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))));
    // 00f4c9  test dl, 0x70
    X86_AT(c, 0xf4c9u);
    (void)x86_logic(c, g8(c, 2) & 0x70u, 1);
    // 00f4cc  je 0xf51f
    X86_AT(c, 0xf4ccu);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 18);
    // 00f4ce  movzx ebx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf4ceu);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f4d6  add ebx, 7
    X86_AT(c, 0xf4d6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f4d9  shr ebx, 3
    X86_AT(c, 0xf4d9u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 00f4dc  test dl, 0x10
    X86_AT(c, 0xf4dcu);
    (void)x86_logic(c, g8(c, 2) & 0x10u, 1);
    // 00f4df  je 0xf4f6
    X86_AT(c, 0xf4dfu);
    if (x86_cc(c, 4)) { goto L_f4f6; }
    X86_TICK(c, 43);
    // 00f4e1  mov ecx, ebx
    X86_AT(c, 0xf4e1u);
    c.r[1] = c.r[3];
    // 00f4e3  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf4e3u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f4eb  dec eax
    X86_AT(c, 0xf4ebu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f4ec  imul eax, ecx
    X86_AT(c, 0xf4ecu);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f4ef  lea edi, [esi + eax*1]
    X86_AT(c, 0xf4efu);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f4f2  mov al, 0xff
    X86_AT(c, 0xf4f2u);
    s8(c, 0, 0xFFu);
    // 00f4f4  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf4f4u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f4f6:
    X86_TICK(c, 7);
    // 00f4f6  test dl, 0x20
    X86_AT(c, 0xf4f6u);
    (void)x86_logic(c, g8(c, 2) & 0x20u, 1);
    // 00f4f9  je 0xf503
    X86_AT(c, 0xf4f9u);
    if (x86_cc(c, 4)) { goto L_f503; }
    X86_TICK(c, 13);
    // 00f4fb  mov ecx, ebx
    X86_AT(c, 0xf4fbu);
    c.r[1] = c.r[3];
    // 00f4fd  mov edi, esi
    X86_AT(c, 0xf4fdu);
    c.r[7] = c.r[6];
    // 00f4ff  mov al, 0xff
    X86_AT(c, 0xf4ffu);
    s8(c, 0, 0xFFu);
    // 00f501  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf501u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f503:
    X86_TICK(c, 7);
    // 00f503  test dl, 0x40
    X86_AT(c, 0xf503u);
    (void)x86_logic(c, g8(c, 2) & 0x40u, 1);
    // 00f506  je 0xf51f
    X86_AT(c, 0xf506u);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 46);
    // 00f508  mov ecx, ebx
    X86_AT(c, 0xf508u);
    c.r[1] = c.r[3];
    // 00f50a  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf50au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f512  shr eax, 1
    X86_AT(c, 0xf512u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00f514  dec eax
    X86_AT(c, 0xf514u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f515  imul eax, ecx
    X86_AT(c, 0xf515u);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f518  lea edi, [esi + eax*1]
    X86_AT(c, 0xf518u);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f51b  mov al, 0xff
    X86_AT(c, 0xf51bu);
    s8(c, 0, 0xFFu);
    // 00f51d  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf51du);
    x86_string(c, 2, 1, 243, 4, 3);
L_f51f:
    X86_TICK(c, 11);
    // 00f51f  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0xf51fu);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 00f523  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0xf523u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0xf52au); x86_call(c, t); X86_RET(c, 0xf52au); }
    X86_TICK(c, 18);
    // 00f52a  movzx eax, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf52au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)));
    // 00f532  add esp, eax
    X86_AT(c, 0xf532u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, c.r[0], 0, 4); }
    // 00f534  ret 
    X86_AT(c, 0xf534u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf2e6u, "ran off the end of a function");
}
void f_0000f2e9(X86Cpu& c) {
    X86_TICK(c, 39);
    // 00f2e9  lds eax, fword ptr cs:[0x1e0]
    X86_AT(c, 0xf2e9u);
    { uint32_t ea = (c.sbase[1] + (uint32_t)(0x1E0u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[0] = o; }
    // 00f2f0  lea esi, [eax + esi*1 + 0x3d000]
    X86_AT(c, 0xf2f0u);
    c.r[6] = (uint32_t)(c.r[0] + c.r[6] + 0x3D000u);
    // 00f2f7  add esi, ecx
    X86_AT(c, 0xf2f7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[1], 0, 4); }
    // 00f2f9  mov word ptr gs:[ebp + 0x370], 8
    X86_AT(c, 0xf2f9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)), 0x8u);
    // 00f303  movzx ax, byte ptr gs:[ebp + 0x378]
    X86_AT(c, 0xf303u);
    s16(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x378u))));
    // 00f30c  mov word ptr gs:[ebp + 0x372], ax
    X86_AT(c, 0xf30cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)), (c.r[0] & 0xFFFFu));
    // 00f314  mov eax, dword ptr gs:[ebp + 0x350]
    X86_AT(c, 0xf314u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x350u)));
    // 00f31b  mov dword ptr gs:[ebp + 0x358], eax
    X86_AT(c, 0xf31bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)), c.r[0]);
    // 00f322  mov eax, dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0xf322u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u)));
    // 00f329  mov dword ptr gs:[ebp + 0x32c], eax
    X86_AT(c, 0xf329u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), c.r[0]);
    // 00f330  jmp 0xf470
    X86_AT(c, 0xf330u);
    goto L_f470;
L_f470:
    X86_TICK(c, 105);
    // 00f470  movzx ecx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf470u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f478  add ecx, 7
    X86_AT(c, 0xf478u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f47b  shr ecx, 3
    X86_AT(c, 0xf47bu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 00f47e  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf47eu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f486  imul eax, ecx
    X86_AT(c, 0xf486u);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f489  mov word ptr gs:[ebp + 0x362], ax
    X86_AT(c, 0xf489u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)), (c.r[0] & 0xFFFFu));
    // 00f491  sub esp, eax
    X86_AT(c, 0xf491u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f493  mov dword ptr gs:[ebp + 0x364], esp
    X86_AT(c, 0xf493u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x364u)), c.r[4]);
    // 00f49a  mov word ptr gs:[ebp + 0x368], ss
    X86_AT(c, 0xf49au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x368u)), (uint32_t)c.sreg[2]);
    // 00f4a1  les edi, fword ptr gs:[ebp + 0x364]
    X86_AT(c, 0xf4a1u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x364u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[7] = o; }
    // 00f4a8  movzx ecx, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf4a8u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)));
    // 00f4b0  push edi
    X86_AT(c, 0xf4b0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00f4b1  push es
    X86_AT(c, 0xf4b1u);
    push32(c, c.sreg[0]);
    // 00f4b2  mov edx, ecx
    X86_AT(c, 0xf4b2u);
    c.r[2] = c.r[1];
    // 00f4b4  shr ecx, 2
    X86_AT(c, 0xf4b4u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 00f4b7  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xf4b7u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 00f4b9  mov ecx, edx
    X86_AT(c, 0xf4b9u);
    c.r[1] = c.r[2];
    // 00f4bb  and ecx, 3
    X86_AT(c, 0xf4bbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x3u, 4); }
    // 00f4be  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xf4beu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 00f4c0  pop ds
    X86_AT(c, 0xf4c0u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f4c1  pop esi
    X86_AT(c, 0xf4c1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f4c2  mov dl, byte ptr gs:[ebp + 0x338]
    X86_AT(c, 0xf4c2u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))));
    // 00f4c9  test dl, 0x70
    X86_AT(c, 0xf4c9u);
    (void)x86_logic(c, g8(c, 2) & 0x70u, 1);
    // 00f4cc  je 0xf51f
    X86_AT(c, 0xf4ccu);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 18);
    // 00f4ce  movzx ebx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf4ceu);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f4d6  add ebx, 7
    X86_AT(c, 0xf4d6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f4d9  shr ebx, 3
    X86_AT(c, 0xf4d9u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 00f4dc  test dl, 0x10
    X86_AT(c, 0xf4dcu);
    (void)x86_logic(c, g8(c, 2) & 0x10u, 1);
    // 00f4df  je 0xf4f6
    X86_AT(c, 0xf4dfu);
    if (x86_cc(c, 4)) { goto L_f4f6; }
    X86_TICK(c, 43);
    // 00f4e1  mov ecx, ebx
    X86_AT(c, 0xf4e1u);
    c.r[1] = c.r[3];
    // 00f4e3  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf4e3u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f4eb  dec eax
    X86_AT(c, 0xf4ebu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f4ec  imul eax, ecx
    X86_AT(c, 0xf4ecu);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f4ef  lea edi, [esi + eax*1]
    X86_AT(c, 0xf4efu);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f4f2  mov al, 0xff
    X86_AT(c, 0xf4f2u);
    s8(c, 0, 0xFFu);
    // 00f4f4  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf4f4u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f4f6:
    X86_TICK(c, 7);
    // 00f4f6  test dl, 0x20
    X86_AT(c, 0xf4f6u);
    (void)x86_logic(c, g8(c, 2) & 0x20u, 1);
    // 00f4f9  je 0xf503
    X86_AT(c, 0xf4f9u);
    if (x86_cc(c, 4)) { goto L_f503; }
    X86_TICK(c, 13);
    // 00f4fb  mov ecx, ebx
    X86_AT(c, 0xf4fbu);
    c.r[1] = c.r[3];
    // 00f4fd  mov edi, esi
    X86_AT(c, 0xf4fdu);
    c.r[7] = c.r[6];
    // 00f4ff  mov al, 0xff
    X86_AT(c, 0xf4ffu);
    s8(c, 0, 0xFFu);
    // 00f501  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf501u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f503:
    X86_TICK(c, 7);
    // 00f503  test dl, 0x40
    X86_AT(c, 0xf503u);
    (void)x86_logic(c, g8(c, 2) & 0x40u, 1);
    // 00f506  je 0xf51f
    X86_AT(c, 0xf506u);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 46);
    // 00f508  mov ecx, ebx
    X86_AT(c, 0xf508u);
    c.r[1] = c.r[3];
    // 00f50a  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf50au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f512  shr eax, 1
    X86_AT(c, 0xf512u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00f514  dec eax
    X86_AT(c, 0xf514u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f515  imul eax, ecx
    X86_AT(c, 0xf515u);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f518  lea edi, [esi + eax*1]
    X86_AT(c, 0xf518u);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f51b  mov al, 0xff
    X86_AT(c, 0xf51bu);
    s8(c, 0, 0xFFu);
    // 00f51d  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf51du);
    x86_string(c, 2, 1, 243, 4, 3);
L_f51f:
    X86_TICK(c, 11);
    // 00f51f  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0xf51fu);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 00f523  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0xf523u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0xf52au); x86_call(c, t); X86_RET(c, 0xf52au); }
    X86_TICK(c, 18);
    // 00f52a  movzx eax, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf52au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)));
    // 00f532  add esp, eax
    X86_AT(c, 0xf532u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, c.r[0], 0, 4); }
    // 00f534  ret 
    X86_AT(c, 0xf534u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf2e9u, "ran off the end of a function");
}
void f_0000f2f0(X86Cpu& c) {
    X86_TICK(c, 33);
    // 00f2f0  lea esi, [eax + esi*1 + 0x3d000]
    X86_AT(c, 0xf2f0u);
    c.r[6] = (uint32_t)(c.r[0] + c.r[6] + 0x3D000u);
    // 00f2f7  add esi, ecx
    X86_AT(c, 0xf2f7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[1], 0, 4); }
    // 00f2f9  mov word ptr gs:[ebp + 0x370], 8
    X86_AT(c, 0xf2f9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)), 0x8u);
    // 00f303  movzx ax, byte ptr gs:[ebp + 0x378]
    X86_AT(c, 0xf303u);
    s16(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x378u))));
    // 00f30c  mov word ptr gs:[ebp + 0x372], ax
    X86_AT(c, 0xf30cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)), (c.r[0] & 0xFFFFu));
    // 00f314  mov eax, dword ptr gs:[ebp + 0x350]
    X86_AT(c, 0xf314u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x350u)));
    // 00f31b  mov dword ptr gs:[ebp + 0x358], eax
    X86_AT(c, 0xf31bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)), c.r[0]);
    // 00f322  mov eax, dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0xf322u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u)));
    // 00f329  mov dword ptr gs:[ebp + 0x32c], eax
    X86_AT(c, 0xf329u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), c.r[0]);
    // 00f330  jmp 0xf470
    X86_AT(c, 0xf330u);
    goto L_f470;
L_f470:
    X86_TICK(c, 105);
    // 00f470  movzx ecx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf470u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f478  add ecx, 7
    X86_AT(c, 0xf478u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f47b  shr ecx, 3
    X86_AT(c, 0xf47bu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 00f47e  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf47eu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f486  imul eax, ecx
    X86_AT(c, 0xf486u);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f489  mov word ptr gs:[ebp + 0x362], ax
    X86_AT(c, 0xf489u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)), (c.r[0] & 0xFFFFu));
    // 00f491  sub esp, eax
    X86_AT(c, 0xf491u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f493  mov dword ptr gs:[ebp + 0x364], esp
    X86_AT(c, 0xf493u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x364u)), c.r[4]);
    // 00f49a  mov word ptr gs:[ebp + 0x368], ss
    X86_AT(c, 0xf49au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x368u)), (uint32_t)c.sreg[2]);
    // 00f4a1  les edi, fword ptr gs:[ebp + 0x364]
    X86_AT(c, 0xf4a1u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x364u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[7] = o; }
    // 00f4a8  movzx ecx, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf4a8u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)));
    // 00f4b0  push edi
    X86_AT(c, 0xf4b0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00f4b1  push es
    X86_AT(c, 0xf4b1u);
    push32(c, c.sreg[0]);
    // 00f4b2  mov edx, ecx
    X86_AT(c, 0xf4b2u);
    c.r[2] = c.r[1];
    // 00f4b4  shr ecx, 2
    X86_AT(c, 0xf4b4u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 00f4b7  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xf4b7u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 00f4b9  mov ecx, edx
    X86_AT(c, 0xf4b9u);
    c.r[1] = c.r[2];
    // 00f4bb  and ecx, 3
    X86_AT(c, 0xf4bbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x3u, 4); }
    // 00f4be  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xf4beu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 00f4c0  pop ds
    X86_AT(c, 0xf4c0u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f4c1  pop esi
    X86_AT(c, 0xf4c1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f4c2  mov dl, byte ptr gs:[ebp + 0x338]
    X86_AT(c, 0xf4c2u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))));
    // 00f4c9  test dl, 0x70
    X86_AT(c, 0xf4c9u);
    (void)x86_logic(c, g8(c, 2) & 0x70u, 1);
    // 00f4cc  je 0xf51f
    X86_AT(c, 0xf4ccu);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 18);
    // 00f4ce  movzx ebx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf4ceu);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f4d6  add ebx, 7
    X86_AT(c, 0xf4d6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f4d9  shr ebx, 3
    X86_AT(c, 0xf4d9u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 00f4dc  test dl, 0x10
    X86_AT(c, 0xf4dcu);
    (void)x86_logic(c, g8(c, 2) & 0x10u, 1);
    // 00f4df  je 0xf4f6
    X86_AT(c, 0xf4dfu);
    if (x86_cc(c, 4)) { goto L_f4f6; }
    X86_TICK(c, 43);
    // 00f4e1  mov ecx, ebx
    X86_AT(c, 0xf4e1u);
    c.r[1] = c.r[3];
    // 00f4e3  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf4e3u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f4eb  dec eax
    X86_AT(c, 0xf4ebu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f4ec  imul eax, ecx
    X86_AT(c, 0xf4ecu);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f4ef  lea edi, [esi + eax*1]
    X86_AT(c, 0xf4efu);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f4f2  mov al, 0xff
    X86_AT(c, 0xf4f2u);
    s8(c, 0, 0xFFu);
    // 00f4f4  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf4f4u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f4f6:
    X86_TICK(c, 7);
    // 00f4f6  test dl, 0x20
    X86_AT(c, 0xf4f6u);
    (void)x86_logic(c, g8(c, 2) & 0x20u, 1);
    // 00f4f9  je 0xf503
    X86_AT(c, 0xf4f9u);
    if (x86_cc(c, 4)) { goto L_f503; }
    X86_TICK(c, 13);
    // 00f4fb  mov ecx, ebx
    X86_AT(c, 0xf4fbu);
    c.r[1] = c.r[3];
    // 00f4fd  mov edi, esi
    X86_AT(c, 0xf4fdu);
    c.r[7] = c.r[6];
    // 00f4ff  mov al, 0xff
    X86_AT(c, 0xf4ffu);
    s8(c, 0, 0xFFu);
    // 00f501  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf501u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f503:
    X86_TICK(c, 7);
    // 00f503  test dl, 0x40
    X86_AT(c, 0xf503u);
    (void)x86_logic(c, g8(c, 2) & 0x40u, 1);
    // 00f506  je 0xf51f
    X86_AT(c, 0xf506u);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 46);
    // 00f508  mov ecx, ebx
    X86_AT(c, 0xf508u);
    c.r[1] = c.r[3];
    // 00f50a  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf50au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f512  shr eax, 1
    X86_AT(c, 0xf512u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00f514  dec eax
    X86_AT(c, 0xf514u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f515  imul eax, ecx
    X86_AT(c, 0xf515u);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f518  lea edi, [esi + eax*1]
    X86_AT(c, 0xf518u);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f51b  mov al, 0xff
    X86_AT(c, 0xf51bu);
    s8(c, 0, 0xFFu);
    // 00f51d  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf51du);
    x86_string(c, 2, 1, 243, 4, 3);
L_f51f:
    X86_TICK(c, 11);
    // 00f51f  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0xf51fu);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 00f523  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0xf523u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0xf52au); x86_call(c, t); X86_RET(c, 0xf52au); }
    X86_TICK(c, 18);
    // 00f52a  movzx eax, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf52au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)));
    // 00f532  add esp, eax
    X86_AT(c, 0xf532u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, c.r[0], 0, 4); }
    // 00f534  ret 
    X86_AT(c, 0xf534u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf2f0u, "ran off the end of a function");
}
void f_0000f2f7(X86Cpu& c) {
    X86_TICK(c, 31);
    // 00f2f7  add esi, ecx
    X86_AT(c, 0xf2f7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[1], 0, 4); }
    // 00f2f9  mov word ptr gs:[ebp + 0x370], 8
    X86_AT(c, 0xf2f9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)), 0x8u);
    // 00f303  movzx ax, byte ptr gs:[ebp + 0x378]
    X86_AT(c, 0xf303u);
    s16(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x378u))));
    // 00f30c  mov word ptr gs:[ebp + 0x372], ax
    X86_AT(c, 0xf30cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)), (c.r[0] & 0xFFFFu));
    // 00f314  mov eax, dword ptr gs:[ebp + 0x350]
    X86_AT(c, 0xf314u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x350u)));
    // 00f31b  mov dword ptr gs:[ebp + 0x358], eax
    X86_AT(c, 0xf31bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)), c.r[0]);
    // 00f322  mov eax, dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0xf322u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u)));
    // 00f329  mov dword ptr gs:[ebp + 0x32c], eax
    X86_AT(c, 0xf329u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), c.r[0]);
    // 00f330  jmp 0xf470
    X86_AT(c, 0xf330u);
    goto L_f470;
L_f470:
    X86_TICK(c, 105);
    // 00f470  movzx ecx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf470u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f478  add ecx, 7
    X86_AT(c, 0xf478u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f47b  shr ecx, 3
    X86_AT(c, 0xf47bu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 00f47e  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf47eu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f486  imul eax, ecx
    X86_AT(c, 0xf486u);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f489  mov word ptr gs:[ebp + 0x362], ax
    X86_AT(c, 0xf489u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)), (c.r[0] & 0xFFFFu));
    // 00f491  sub esp, eax
    X86_AT(c, 0xf491u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f493  mov dword ptr gs:[ebp + 0x364], esp
    X86_AT(c, 0xf493u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x364u)), c.r[4]);
    // 00f49a  mov word ptr gs:[ebp + 0x368], ss
    X86_AT(c, 0xf49au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x368u)), (uint32_t)c.sreg[2]);
    // 00f4a1  les edi, fword ptr gs:[ebp + 0x364]
    X86_AT(c, 0xf4a1u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x364u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[7] = o; }
    // 00f4a8  movzx ecx, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf4a8u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)));
    // 00f4b0  push edi
    X86_AT(c, 0xf4b0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00f4b1  push es
    X86_AT(c, 0xf4b1u);
    push32(c, c.sreg[0]);
    // 00f4b2  mov edx, ecx
    X86_AT(c, 0xf4b2u);
    c.r[2] = c.r[1];
    // 00f4b4  shr ecx, 2
    X86_AT(c, 0xf4b4u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 00f4b7  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xf4b7u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 00f4b9  mov ecx, edx
    X86_AT(c, 0xf4b9u);
    c.r[1] = c.r[2];
    // 00f4bb  and ecx, 3
    X86_AT(c, 0xf4bbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x3u, 4); }
    // 00f4be  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xf4beu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 00f4c0  pop ds
    X86_AT(c, 0xf4c0u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f4c1  pop esi
    X86_AT(c, 0xf4c1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f4c2  mov dl, byte ptr gs:[ebp + 0x338]
    X86_AT(c, 0xf4c2u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))));
    // 00f4c9  test dl, 0x70
    X86_AT(c, 0xf4c9u);
    (void)x86_logic(c, g8(c, 2) & 0x70u, 1);
    // 00f4cc  je 0xf51f
    X86_AT(c, 0xf4ccu);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 18);
    // 00f4ce  movzx ebx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf4ceu);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f4d6  add ebx, 7
    X86_AT(c, 0xf4d6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f4d9  shr ebx, 3
    X86_AT(c, 0xf4d9u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 00f4dc  test dl, 0x10
    X86_AT(c, 0xf4dcu);
    (void)x86_logic(c, g8(c, 2) & 0x10u, 1);
    // 00f4df  je 0xf4f6
    X86_AT(c, 0xf4dfu);
    if (x86_cc(c, 4)) { goto L_f4f6; }
    X86_TICK(c, 43);
    // 00f4e1  mov ecx, ebx
    X86_AT(c, 0xf4e1u);
    c.r[1] = c.r[3];
    // 00f4e3  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf4e3u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f4eb  dec eax
    X86_AT(c, 0xf4ebu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f4ec  imul eax, ecx
    X86_AT(c, 0xf4ecu);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f4ef  lea edi, [esi + eax*1]
    X86_AT(c, 0xf4efu);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f4f2  mov al, 0xff
    X86_AT(c, 0xf4f2u);
    s8(c, 0, 0xFFu);
    // 00f4f4  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf4f4u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f4f6:
    X86_TICK(c, 7);
    // 00f4f6  test dl, 0x20
    X86_AT(c, 0xf4f6u);
    (void)x86_logic(c, g8(c, 2) & 0x20u, 1);
    // 00f4f9  je 0xf503
    X86_AT(c, 0xf4f9u);
    if (x86_cc(c, 4)) { goto L_f503; }
    X86_TICK(c, 13);
    // 00f4fb  mov ecx, ebx
    X86_AT(c, 0xf4fbu);
    c.r[1] = c.r[3];
    // 00f4fd  mov edi, esi
    X86_AT(c, 0xf4fdu);
    c.r[7] = c.r[6];
    // 00f4ff  mov al, 0xff
    X86_AT(c, 0xf4ffu);
    s8(c, 0, 0xFFu);
    // 00f501  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf501u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f503:
    X86_TICK(c, 7);
    // 00f503  test dl, 0x40
    X86_AT(c, 0xf503u);
    (void)x86_logic(c, g8(c, 2) & 0x40u, 1);
    // 00f506  je 0xf51f
    X86_AT(c, 0xf506u);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 46);
    // 00f508  mov ecx, ebx
    X86_AT(c, 0xf508u);
    c.r[1] = c.r[3];
    // 00f50a  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf50au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f512  shr eax, 1
    X86_AT(c, 0xf512u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00f514  dec eax
    X86_AT(c, 0xf514u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f515  imul eax, ecx
    X86_AT(c, 0xf515u);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f518  lea edi, [esi + eax*1]
    X86_AT(c, 0xf518u);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f51b  mov al, 0xff
    X86_AT(c, 0xf51bu);
    s8(c, 0, 0xFFu);
    // 00f51d  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf51du);
    x86_string(c, 2, 1, 243, 4, 3);
L_f51f:
    X86_TICK(c, 11);
    // 00f51f  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0xf51fu);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 00f523  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0xf523u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0xf52au); x86_call(c, t); X86_RET(c, 0xf52au); }
    X86_TICK(c, 18);
    // 00f52a  movzx eax, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf52au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)));
    // 00f532  add esp, eax
    X86_AT(c, 0xf532u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, c.r[0], 0, 4); }
    // 00f534  ret 
    X86_AT(c, 0xf534u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf2f7u, "ran off the end of a function");
}
void f_0000f2f9(X86Cpu& c) {
    X86_TICK(c, 29);
    // 00f2f9  mov word ptr gs:[ebp + 0x370], 8
    X86_AT(c, 0xf2f9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)), 0x8u);
    // 00f303  movzx ax, byte ptr gs:[ebp + 0x378]
    X86_AT(c, 0xf303u);
    s16(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x378u))));
    // 00f30c  mov word ptr gs:[ebp + 0x372], ax
    X86_AT(c, 0xf30cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)), (c.r[0] & 0xFFFFu));
    // 00f314  mov eax, dword ptr gs:[ebp + 0x350]
    X86_AT(c, 0xf314u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x350u)));
    // 00f31b  mov dword ptr gs:[ebp + 0x358], eax
    X86_AT(c, 0xf31bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)), c.r[0]);
    // 00f322  mov eax, dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0xf322u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u)));
    // 00f329  mov dword ptr gs:[ebp + 0x32c], eax
    X86_AT(c, 0xf329u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), c.r[0]);
    // 00f330  jmp 0xf470
    X86_AT(c, 0xf330u);
    goto L_f470;
L_f470:
    X86_TICK(c, 105);
    // 00f470  movzx ecx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf470u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f478  add ecx, 7
    X86_AT(c, 0xf478u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f47b  shr ecx, 3
    X86_AT(c, 0xf47bu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 00f47e  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf47eu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f486  imul eax, ecx
    X86_AT(c, 0xf486u);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f489  mov word ptr gs:[ebp + 0x362], ax
    X86_AT(c, 0xf489u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)), (c.r[0] & 0xFFFFu));
    // 00f491  sub esp, eax
    X86_AT(c, 0xf491u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f493  mov dword ptr gs:[ebp + 0x364], esp
    X86_AT(c, 0xf493u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x364u)), c.r[4]);
    // 00f49a  mov word ptr gs:[ebp + 0x368], ss
    X86_AT(c, 0xf49au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x368u)), (uint32_t)c.sreg[2]);
    // 00f4a1  les edi, fword ptr gs:[ebp + 0x364]
    X86_AT(c, 0xf4a1u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x364u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[7] = o; }
    // 00f4a8  movzx ecx, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf4a8u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)));
    // 00f4b0  push edi
    X86_AT(c, 0xf4b0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00f4b1  push es
    X86_AT(c, 0xf4b1u);
    push32(c, c.sreg[0]);
    // 00f4b2  mov edx, ecx
    X86_AT(c, 0xf4b2u);
    c.r[2] = c.r[1];
    // 00f4b4  shr ecx, 2
    X86_AT(c, 0xf4b4u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 00f4b7  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xf4b7u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 00f4b9  mov ecx, edx
    X86_AT(c, 0xf4b9u);
    c.r[1] = c.r[2];
    // 00f4bb  and ecx, 3
    X86_AT(c, 0xf4bbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x3u, 4); }
    // 00f4be  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xf4beu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 00f4c0  pop ds
    X86_AT(c, 0xf4c0u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f4c1  pop esi
    X86_AT(c, 0xf4c1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f4c2  mov dl, byte ptr gs:[ebp + 0x338]
    X86_AT(c, 0xf4c2u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))));
    // 00f4c9  test dl, 0x70
    X86_AT(c, 0xf4c9u);
    (void)x86_logic(c, g8(c, 2) & 0x70u, 1);
    // 00f4cc  je 0xf51f
    X86_AT(c, 0xf4ccu);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 18);
    // 00f4ce  movzx ebx, word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf4ceu);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f4d6  add ebx, 7
    X86_AT(c, 0xf4d6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 00f4d9  shr ebx, 3
    X86_AT(c, 0xf4d9u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 00f4dc  test dl, 0x10
    X86_AT(c, 0xf4dcu);
    (void)x86_logic(c, g8(c, 2) & 0x10u, 1);
    // 00f4df  je 0xf4f6
    X86_AT(c, 0xf4dfu);
    if (x86_cc(c, 4)) { goto L_f4f6; }
    X86_TICK(c, 43);
    // 00f4e1  mov ecx, ebx
    X86_AT(c, 0xf4e1u);
    c.r[1] = c.r[3];
    // 00f4e3  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf4e3u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f4eb  dec eax
    X86_AT(c, 0xf4ebu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f4ec  imul eax, ecx
    X86_AT(c, 0xf4ecu);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f4ef  lea edi, [esi + eax*1]
    X86_AT(c, 0xf4efu);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f4f2  mov al, 0xff
    X86_AT(c, 0xf4f2u);
    s8(c, 0, 0xFFu);
    // 00f4f4  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf4f4u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f4f6:
    X86_TICK(c, 7);
    // 00f4f6  test dl, 0x20
    X86_AT(c, 0xf4f6u);
    (void)x86_logic(c, g8(c, 2) & 0x20u, 1);
    // 00f4f9  je 0xf503
    X86_AT(c, 0xf4f9u);
    if (x86_cc(c, 4)) { goto L_f503; }
    X86_TICK(c, 13);
    // 00f4fb  mov ecx, ebx
    X86_AT(c, 0xf4fbu);
    c.r[1] = c.r[3];
    // 00f4fd  mov edi, esi
    X86_AT(c, 0xf4fdu);
    c.r[7] = c.r[6];
    // 00f4ff  mov al, 0xff
    X86_AT(c, 0xf4ffu);
    s8(c, 0, 0xFFu);
    // 00f501  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf501u);
    x86_string(c, 2, 1, 243, 4, 3);
L_f503:
    X86_TICK(c, 7);
    // 00f503  test dl, 0x40
    X86_AT(c, 0xf503u);
    (void)x86_logic(c, g8(c, 2) & 0x40u, 1);
    // 00f506  je 0xf51f
    X86_AT(c, 0xf506u);
    if (x86_cc(c, 4)) { goto L_f51f; }
    X86_TICK(c, 46);
    // 00f508  mov ecx, ebx
    X86_AT(c, 0xf508u);
    c.r[1] = c.r[3];
    // 00f50a  movzx eax, word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf50au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u)));
    // 00f512  shr eax, 1
    X86_AT(c, 0xf512u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00f514  dec eax
    X86_AT(c, 0xf514u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 00f515  imul eax, ecx
    X86_AT(c, 0xf515u);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 00f518  lea edi, [esi + eax*1]
    X86_AT(c, 0xf518u);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 00f51b  mov al, 0xff
    X86_AT(c, 0xf51bu);
    s8(c, 0, 0xFFu);
    // 00f51d  stosb byte ptr es:[edi], al
    X86_AT(c, 0xf51du);
    x86_string(c, 2, 1, 243, 4, 3);
L_f51f:
    X86_TICK(c, 11);
    // 00f51f  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0xf51fu);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 00f523  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0xf523u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0xf52au); x86_call(c, t); X86_RET(c, 0xf52au); }
    X86_TICK(c, 18);
    // 00f52a  movzx eax, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf52au);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u)));
    // 00f532  add esp, eax
    X86_AT(c, 0xf532u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, c.r[0], 0, 4); }
    // 00f534  ret 
    X86_AT(c, 0xf534u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf2f9u, "ran off the end of a function");
}
}
