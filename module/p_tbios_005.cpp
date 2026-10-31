#include "p_tbios_funcs.h"
namespace p_tbios {
void f_00000e77(X86Cpu& c) {
    X86_TICK(c, 62);
    // 000e77  pop eax
    X86_AT(c, 0xe77u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 000e78  shl eax, 6
    X86_AT(c, 0xe78u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x6u, 4, w); if (w) c.r[0] = r; }
    // 000e7b  lea esi, [eax + 0xf70]
    X86_AT(c, 0xe7bu);
    c.r[6] = (uint32_t)(c.r[0] + 0xF70u);
    // 000e81  lea edi, [ebp + 0xc0]
    X86_AT(c, 0xe81u);
    c.r[7] = (uint32_t)(c.r[5] + 0xC0u);
    // 000e87  push gs
    X86_AT(c, 0xe87u);
    push32(c, c.sreg[5]);
    // 000e89  pop es
    X86_AT(c, 0xe89u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 000e8a  mov ecx, 0x10
    X86_AT(c, 0xe8au);
    c.r[1] = 0x10u;
    // 000e8f  movsd dword ptr es:[edi], dword ptr cs:[esi]
    X86_AT(c, 0xe8fu);
    x86_string(c, 0, 4, 243, 4, 1);
    // 000e92  lea esi, [ebp + 0xc0]
    X86_AT(c, 0xe92u);
    c.r[6] = (uint32_t)(c.r[5] + 0xC0u);
    // 000e98  xor bh, bh
    X86_AT(c, 0xe98u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v ^ g8(c, 7), 1)); }
    // 000e9a  mov dx, 0x440
    X86_AT(c, 0xe9au);
    s16(c, 2, 0x440u);
    // 000e9e  mov al, 0x1c
    X86_AT(c, 0xe9eu);
    s8(c, 0, 0x1Cu);
    // 000ea0  out dx, al
    X86_AT(c, 0xea0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ea1  mov dx, 0x442
    X86_AT(c, 0xea1u);
    s16(c, 2, 0x442u);
    // 000ea5  xor ax, ax
    X86_AT(c, 0xea5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ (c.r[0] & 0xFFFFu), 2)); }
    // 000ea8  out dx, ax
    X86_AT(c, 0xea8u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_eaa:
    X86_TICK(c, 19);
    // 000eaa  in ax, dx
    X86_AT(c, 0xeaau);
    s16(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 2));
    // 000eac  test ah, ah
    X86_AT(c, 0xeacu);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
    // 000eae  jl 0xeaa
    X86_AT(c, 0xeaeu);
    if (x86_cc(c, 12)) { X86_POLL(c, 0xeaau); goto L_eaa; }
L_eb0:
    X86_TICK(c, 7);
    // 000eb0  cmp bh, 2
    X86_AT(c, 0xeb0u);
    (void)x86_sub(c, g8(c, 7), 0x2u, 0, 1);
    // 000eb3  je 0xecb
    X86_AT(c, 0xeb3u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 7);
    // 000eb5  cmp bh, 3
    X86_AT(c, 0xeb5u);
    (void)x86_sub(c, g8(c, 7), 0x3u, 0, 1);
    // 000eb8  je 0xecb
    X86_AT(c, 0xeb8u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 34);
    // 000eba  mov dx, 0x440
    X86_AT(c, 0xebau);
    s16(c, 2, 0x440u);
    // 000ebe  mov al, bh
    X86_AT(c, 0xebeu);
    s8(c, 0, g8(c, 7));
    // 000ec0  out dx, al
    X86_AT(c, 0xec0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ec1  mov dx, 0x442
    X86_AT(c, 0xec1u);
    s16(c, 2, 0x442u);
    // 000ec5  mov ax, word ptr gs:[esi]
    X86_AT(c, 0xec5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 000ec9  out dx, ax
    X86_AT(c, 0xec9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_ecb:
    X86_TICK(c, 11);
    // 000ecb  add esi, 2
    X86_AT(c, 0xecbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 000ece  inc bh
    X86_AT(c, 0xeceu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_inc(c, v, 1)); }
    // 000ed0  cmp bh, 0x20
    X86_AT(c, 0xed0u);
    (void)x86_sub(c, g8(c, 7), 0x20u, 0, 1);
    // 000ed3  jb 0xeb0
    X86_AT(c, 0xed3u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xeb0u); goto L_eb0; }
    X86_TICK(c, 48);
    // 000ed5  mov cx, word ptr gs:[esi - 8]
    X86_AT(c, 0xed5u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0xFFFFFFF8u))));
    // 000eda  or cx, 0x8000
    X86_AT(c, 0xedau);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v | 0x8000u, 2)); }
    // 000edf  mov dx, 0x440
    X86_AT(c, 0xedfu);
    s16(c, 2, 0x440u);
    // 000ee3  mov al, 0x1c
    X86_AT(c, 0xee3u);
    s8(c, 0, 0x1Cu);
    // 000ee5  out dx, al
    X86_AT(c, 0xee5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ee6  mov dx, 0x442
    X86_AT(c, 0xee6u);
    s16(c, 2, 0x442u);
    // 000eea  mov ax, cx
    X86_AT(c, 0xeeau);
    s16(c, 0, (c.r[1] & 0xFFFFu));
    // 000eed  out dx, ax
    X86_AT(c, 0xeedu);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 000eef  ret 
    X86_AT(c, 0xeefu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe77u, "ran off the end of a function");
}
void f_00000e78(X86Cpu& c) {
    X86_TICK(c, 58);
    // 000e78  shl eax, 6
    X86_AT(c, 0xe78u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x6u, 4, w); if (w) c.r[0] = r; }
    // 000e7b  lea esi, [eax + 0xf70]
    X86_AT(c, 0xe7bu);
    c.r[6] = (uint32_t)(c.r[0] + 0xF70u);
    // 000e81  lea edi, [ebp + 0xc0]
    X86_AT(c, 0xe81u);
    c.r[7] = (uint32_t)(c.r[5] + 0xC0u);
    // 000e87  push gs
    X86_AT(c, 0xe87u);
    push32(c, c.sreg[5]);
    // 000e89  pop es
    X86_AT(c, 0xe89u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 000e8a  mov ecx, 0x10
    X86_AT(c, 0xe8au);
    c.r[1] = 0x10u;
    // 000e8f  movsd dword ptr es:[edi], dword ptr cs:[esi]
    X86_AT(c, 0xe8fu);
    x86_string(c, 0, 4, 243, 4, 1);
    // 000e92  lea esi, [ebp + 0xc0]
    X86_AT(c, 0xe92u);
    c.r[6] = (uint32_t)(c.r[5] + 0xC0u);
    // 000e98  xor bh, bh
    X86_AT(c, 0xe98u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v ^ g8(c, 7), 1)); }
    // 000e9a  mov dx, 0x440
    X86_AT(c, 0xe9au);
    s16(c, 2, 0x440u);
    // 000e9e  mov al, 0x1c
    X86_AT(c, 0xe9eu);
    s8(c, 0, 0x1Cu);
    // 000ea0  out dx, al
    X86_AT(c, 0xea0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ea1  mov dx, 0x442
    X86_AT(c, 0xea1u);
    s16(c, 2, 0x442u);
    // 000ea5  xor ax, ax
    X86_AT(c, 0xea5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ (c.r[0] & 0xFFFFu), 2)); }
    // 000ea8  out dx, ax
    X86_AT(c, 0xea8u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_eaa:
    X86_TICK(c, 19);
    // 000eaa  in ax, dx
    X86_AT(c, 0xeaau);
    s16(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 2));
    // 000eac  test ah, ah
    X86_AT(c, 0xeacu);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
    // 000eae  jl 0xeaa
    X86_AT(c, 0xeaeu);
    if (x86_cc(c, 12)) { X86_POLL(c, 0xeaau); goto L_eaa; }
L_eb0:
    X86_TICK(c, 7);
    // 000eb0  cmp bh, 2
    X86_AT(c, 0xeb0u);
    (void)x86_sub(c, g8(c, 7), 0x2u, 0, 1);
    // 000eb3  je 0xecb
    X86_AT(c, 0xeb3u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 7);
    // 000eb5  cmp bh, 3
    X86_AT(c, 0xeb5u);
    (void)x86_sub(c, g8(c, 7), 0x3u, 0, 1);
    // 000eb8  je 0xecb
    X86_AT(c, 0xeb8u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 34);
    // 000eba  mov dx, 0x440
    X86_AT(c, 0xebau);
    s16(c, 2, 0x440u);
    // 000ebe  mov al, bh
    X86_AT(c, 0xebeu);
    s8(c, 0, g8(c, 7));
    // 000ec0  out dx, al
    X86_AT(c, 0xec0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ec1  mov dx, 0x442
    X86_AT(c, 0xec1u);
    s16(c, 2, 0x442u);
    // 000ec5  mov ax, word ptr gs:[esi]
    X86_AT(c, 0xec5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 000ec9  out dx, ax
    X86_AT(c, 0xec9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_ecb:
    X86_TICK(c, 11);
    // 000ecb  add esi, 2
    X86_AT(c, 0xecbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 000ece  inc bh
    X86_AT(c, 0xeceu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_inc(c, v, 1)); }
    // 000ed0  cmp bh, 0x20
    X86_AT(c, 0xed0u);
    (void)x86_sub(c, g8(c, 7), 0x20u, 0, 1);
    // 000ed3  jb 0xeb0
    X86_AT(c, 0xed3u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xeb0u); goto L_eb0; }
    X86_TICK(c, 48);
    // 000ed5  mov cx, word ptr gs:[esi - 8]
    X86_AT(c, 0xed5u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0xFFFFFFF8u))));
    // 000eda  or cx, 0x8000
    X86_AT(c, 0xedau);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v | 0x8000u, 2)); }
    // 000edf  mov dx, 0x440
    X86_AT(c, 0xedfu);
    s16(c, 2, 0x440u);
    // 000ee3  mov al, 0x1c
    X86_AT(c, 0xee3u);
    s8(c, 0, 0x1Cu);
    // 000ee5  out dx, al
    X86_AT(c, 0xee5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ee6  mov dx, 0x442
    X86_AT(c, 0xee6u);
    s16(c, 2, 0x442u);
    // 000eea  mov ax, cx
    X86_AT(c, 0xeeau);
    s16(c, 0, (c.r[1] & 0xFFFFu));
    // 000eed  out dx, ax
    X86_AT(c, 0xeedu);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 000eef  ret 
    X86_AT(c, 0xeefu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe78u, "ran off the end of a function");
}
void f_00000e7b(X86Cpu& c) {
    X86_TICK(c, 55);
    // 000e7b  lea esi, [eax + 0xf70]
    X86_AT(c, 0xe7bu);
    c.r[6] = (uint32_t)(c.r[0] + 0xF70u);
    // 000e81  lea edi, [ebp + 0xc0]
    X86_AT(c, 0xe81u);
    c.r[7] = (uint32_t)(c.r[5] + 0xC0u);
    // 000e87  push gs
    X86_AT(c, 0xe87u);
    push32(c, c.sreg[5]);
    // 000e89  pop es
    X86_AT(c, 0xe89u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 000e8a  mov ecx, 0x10
    X86_AT(c, 0xe8au);
    c.r[1] = 0x10u;
    // 000e8f  movsd dword ptr es:[edi], dword ptr cs:[esi]
    X86_AT(c, 0xe8fu);
    x86_string(c, 0, 4, 243, 4, 1);
    // 000e92  lea esi, [ebp + 0xc0]
    X86_AT(c, 0xe92u);
    c.r[6] = (uint32_t)(c.r[5] + 0xC0u);
    // 000e98  xor bh, bh
    X86_AT(c, 0xe98u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v ^ g8(c, 7), 1)); }
    // 000e9a  mov dx, 0x440
    X86_AT(c, 0xe9au);
    s16(c, 2, 0x440u);
    // 000e9e  mov al, 0x1c
    X86_AT(c, 0xe9eu);
    s8(c, 0, 0x1Cu);
    // 000ea0  out dx, al
    X86_AT(c, 0xea0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ea1  mov dx, 0x442
    X86_AT(c, 0xea1u);
    s16(c, 2, 0x442u);
    // 000ea5  xor ax, ax
    X86_AT(c, 0xea5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ (c.r[0] & 0xFFFFu), 2)); }
    // 000ea8  out dx, ax
    X86_AT(c, 0xea8u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_eaa:
    X86_TICK(c, 19);
    // 000eaa  in ax, dx
    X86_AT(c, 0xeaau);
    s16(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 2));
    // 000eac  test ah, ah
    X86_AT(c, 0xeacu);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
    // 000eae  jl 0xeaa
    X86_AT(c, 0xeaeu);
    if (x86_cc(c, 12)) { X86_POLL(c, 0xeaau); goto L_eaa; }
L_eb0:
    X86_TICK(c, 7);
    // 000eb0  cmp bh, 2
    X86_AT(c, 0xeb0u);
    (void)x86_sub(c, g8(c, 7), 0x2u, 0, 1);
    // 000eb3  je 0xecb
    X86_AT(c, 0xeb3u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 7);
    // 000eb5  cmp bh, 3
    X86_AT(c, 0xeb5u);
    (void)x86_sub(c, g8(c, 7), 0x3u, 0, 1);
    // 000eb8  je 0xecb
    X86_AT(c, 0xeb8u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 34);
    // 000eba  mov dx, 0x440
    X86_AT(c, 0xebau);
    s16(c, 2, 0x440u);
    // 000ebe  mov al, bh
    X86_AT(c, 0xebeu);
    s8(c, 0, g8(c, 7));
    // 000ec0  out dx, al
    X86_AT(c, 0xec0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ec1  mov dx, 0x442
    X86_AT(c, 0xec1u);
    s16(c, 2, 0x442u);
    // 000ec5  mov ax, word ptr gs:[esi]
    X86_AT(c, 0xec5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 000ec9  out dx, ax
    X86_AT(c, 0xec9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_ecb:
    X86_TICK(c, 11);
    // 000ecb  add esi, 2
    X86_AT(c, 0xecbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 000ece  inc bh
    X86_AT(c, 0xeceu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_inc(c, v, 1)); }
    // 000ed0  cmp bh, 0x20
    X86_AT(c, 0xed0u);
    (void)x86_sub(c, g8(c, 7), 0x20u, 0, 1);
    // 000ed3  jb 0xeb0
    X86_AT(c, 0xed3u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xeb0u); goto L_eb0; }
    X86_TICK(c, 48);
    // 000ed5  mov cx, word ptr gs:[esi - 8]
    X86_AT(c, 0xed5u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0xFFFFFFF8u))));
    // 000eda  or cx, 0x8000
    X86_AT(c, 0xedau);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v | 0x8000u, 2)); }
    // 000edf  mov dx, 0x440
    X86_AT(c, 0xedfu);
    s16(c, 2, 0x440u);
    // 000ee3  mov al, 0x1c
    X86_AT(c, 0xee3u);
    s8(c, 0, 0x1Cu);
    // 000ee5  out dx, al
    X86_AT(c, 0xee5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ee6  mov dx, 0x442
    X86_AT(c, 0xee6u);
    s16(c, 2, 0x442u);
    // 000eea  mov ax, cx
    X86_AT(c, 0xeeau);
    s16(c, 0, (c.r[1] & 0xFFFFu));
    // 000eed  out dx, ax
    X86_AT(c, 0xeedu);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 000eef  ret 
    X86_AT(c, 0xeefu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe7bu, "ran off the end of a function");
}
void f_00000e81(X86Cpu& c) {
    X86_TICK(c, 53);
    // 000e81  lea edi, [ebp + 0xc0]
    X86_AT(c, 0xe81u);
    c.r[7] = (uint32_t)(c.r[5] + 0xC0u);
    // 000e87  push gs
    X86_AT(c, 0xe87u);
    push32(c, c.sreg[5]);
    // 000e89  pop es
    X86_AT(c, 0xe89u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 000e8a  mov ecx, 0x10
    X86_AT(c, 0xe8au);
    c.r[1] = 0x10u;
    // 000e8f  movsd dword ptr es:[edi], dword ptr cs:[esi]
    X86_AT(c, 0xe8fu);
    x86_string(c, 0, 4, 243, 4, 1);
    // 000e92  lea esi, [ebp + 0xc0]
    X86_AT(c, 0xe92u);
    c.r[6] = (uint32_t)(c.r[5] + 0xC0u);
    // 000e98  xor bh, bh
    X86_AT(c, 0xe98u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v ^ g8(c, 7), 1)); }
    // 000e9a  mov dx, 0x440
    X86_AT(c, 0xe9au);
    s16(c, 2, 0x440u);
    // 000e9e  mov al, 0x1c
    X86_AT(c, 0xe9eu);
    s8(c, 0, 0x1Cu);
    // 000ea0  out dx, al
    X86_AT(c, 0xea0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ea1  mov dx, 0x442
    X86_AT(c, 0xea1u);
    s16(c, 2, 0x442u);
    // 000ea5  xor ax, ax
    X86_AT(c, 0xea5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ (c.r[0] & 0xFFFFu), 2)); }
    // 000ea8  out dx, ax
    X86_AT(c, 0xea8u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_eaa:
    X86_TICK(c, 19);
    // 000eaa  in ax, dx
    X86_AT(c, 0xeaau);
    s16(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 2));
    // 000eac  test ah, ah
    X86_AT(c, 0xeacu);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
    // 000eae  jl 0xeaa
    X86_AT(c, 0xeaeu);
    if (x86_cc(c, 12)) { X86_POLL(c, 0xeaau); goto L_eaa; }
L_eb0:
    X86_TICK(c, 7);
    // 000eb0  cmp bh, 2
    X86_AT(c, 0xeb0u);
    (void)x86_sub(c, g8(c, 7), 0x2u, 0, 1);
    // 000eb3  je 0xecb
    X86_AT(c, 0xeb3u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 7);
    // 000eb5  cmp bh, 3
    X86_AT(c, 0xeb5u);
    (void)x86_sub(c, g8(c, 7), 0x3u, 0, 1);
    // 000eb8  je 0xecb
    X86_AT(c, 0xeb8u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 34);
    // 000eba  mov dx, 0x440
    X86_AT(c, 0xebau);
    s16(c, 2, 0x440u);
    // 000ebe  mov al, bh
    X86_AT(c, 0xebeu);
    s8(c, 0, g8(c, 7));
    // 000ec0  out dx, al
    X86_AT(c, 0xec0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ec1  mov dx, 0x442
    X86_AT(c, 0xec1u);
    s16(c, 2, 0x442u);
    // 000ec5  mov ax, word ptr gs:[esi]
    X86_AT(c, 0xec5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 000ec9  out dx, ax
    X86_AT(c, 0xec9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_ecb:
    X86_TICK(c, 11);
    // 000ecb  add esi, 2
    X86_AT(c, 0xecbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 000ece  inc bh
    X86_AT(c, 0xeceu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_inc(c, v, 1)); }
    // 000ed0  cmp bh, 0x20
    X86_AT(c, 0xed0u);
    (void)x86_sub(c, g8(c, 7), 0x20u, 0, 1);
    // 000ed3  jb 0xeb0
    X86_AT(c, 0xed3u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xeb0u); goto L_eb0; }
    X86_TICK(c, 48);
    // 000ed5  mov cx, word ptr gs:[esi - 8]
    X86_AT(c, 0xed5u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0xFFFFFFF8u))));
    // 000eda  or cx, 0x8000
    X86_AT(c, 0xedau);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v | 0x8000u, 2)); }
    // 000edf  mov dx, 0x440
    X86_AT(c, 0xedfu);
    s16(c, 2, 0x440u);
    // 000ee3  mov al, 0x1c
    X86_AT(c, 0xee3u);
    s8(c, 0, 0x1Cu);
    // 000ee5  out dx, al
    X86_AT(c, 0xee5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ee6  mov dx, 0x442
    X86_AT(c, 0xee6u);
    s16(c, 2, 0x442u);
    // 000eea  mov ax, cx
    X86_AT(c, 0xeeau);
    s16(c, 0, (c.r[1] & 0xFFFFu));
    // 000eed  out dx, ax
    X86_AT(c, 0xeedu);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 000eef  ret 
    X86_AT(c, 0xeefu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe81u, "ran off the end of a function");
}
void f_00000e87(X86Cpu& c) {
    X86_TICK(c, 51);
    // 000e87  push gs
    X86_AT(c, 0xe87u);
    push32(c, c.sreg[5]);
    // 000e89  pop es
    X86_AT(c, 0xe89u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 000e8a  mov ecx, 0x10
    X86_AT(c, 0xe8au);
    c.r[1] = 0x10u;
    // 000e8f  movsd dword ptr es:[edi], dword ptr cs:[esi]
    X86_AT(c, 0xe8fu);
    x86_string(c, 0, 4, 243, 4, 1);
    // 000e92  lea esi, [ebp + 0xc0]
    X86_AT(c, 0xe92u);
    c.r[6] = (uint32_t)(c.r[5] + 0xC0u);
    // 000e98  xor bh, bh
    X86_AT(c, 0xe98u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v ^ g8(c, 7), 1)); }
    // 000e9a  mov dx, 0x440
    X86_AT(c, 0xe9au);
    s16(c, 2, 0x440u);
    // 000e9e  mov al, 0x1c
    X86_AT(c, 0xe9eu);
    s8(c, 0, 0x1Cu);
    // 000ea0  out dx, al
    X86_AT(c, 0xea0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ea1  mov dx, 0x442
    X86_AT(c, 0xea1u);
    s16(c, 2, 0x442u);
    // 000ea5  xor ax, ax
    X86_AT(c, 0xea5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ (c.r[0] & 0xFFFFu), 2)); }
    // 000ea8  out dx, ax
    X86_AT(c, 0xea8u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_eaa:
    X86_TICK(c, 19);
    // 000eaa  in ax, dx
    X86_AT(c, 0xeaau);
    s16(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 2));
    // 000eac  test ah, ah
    X86_AT(c, 0xeacu);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
    // 000eae  jl 0xeaa
    X86_AT(c, 0xeaeu);
    if (x86_cc(c, 12)) { X86_POLL(c, 0xeaau); goto L_eaa; }
L_eb0:
    X86_TICK(c, 7);
    // 000eb0  cmp bh, 2
    X86_AT(c, 0xeb0u);
    (void)x86_sub(c, g8(c, 7), 0x2u, 0, 1);
    // 000eb3  je 0xecb
    X86_AT(c, 0xeb3u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 7);
    // 000eb5  cmp bh, 3
    X86_AT(c, 0xeb5u);
    (void)x86_sub(c, g8(c, 7), 0x3u, 0, 1);
    // 000eb8  je 0xecb
    X86_AT(c, 0xeb8u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 34);
    // 000eba  mov dx, 0x440
    X86_AT(c, 0xebau);
    s16(c, 2, 0x440u);
    // 000ebe  mov al, bh
    X86_AT(c, 0xebeu);
    s8(c, 0, g8(c, 7));
    // 000ec0  out dx, al
    X86_AT(c, 0xec0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ec1  mov dx, 0x442
    X86_AT(c, 0xec1u);
    s16(c, 2, 0x442u);
    // 000ec5  mov ax, word ptr gs:[esi]
    X86_AT(c, 0xec5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 000ec9  out dx, ax
    X86_AT(c, 0xec9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_ecb:
    X86_TICK(c, 11);
    // 000ecb  add esi, 2
    X86_AT(c, 0xecbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 000ece  inc bh
    X86_AT(c, 0xeceu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_inc(c, v, 1)); }
    // 000ed0  cmp bh, 0x20
    X86_AT(c, 0xed0u);
    (void)x86_sub(c, g8(c, 7), 0x20u, 0, 1);
    // 000ed3  jb 0xeb0
    X86_AT(c, 0xed3u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xeb0u); goto L_eb0; }
    X86_TICK(c, 48);
    // 000ed5  mov cx, word ptr gs:[esi - 8]
    X86_AT(c, 0xed5u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0xFFFFFFF8u))));
    // 000eda  or cx, 0x8000
    X86_AT(c, 0xedau);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v | 0x8000u, 2)); }
    // 000edf  mov dx, 0x440
    X86_AT(c, 0xedfu);
    s16(c, 2, 0x440u);
    // 000ee3  mov al, 0x1c
    X86_AT(c, 0xee3u);
    s8(c, 0, 0x1Cu);
    // 000ee5  out dx, al
    X86_AT(c, 0xee5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ee6  mov dx, 0x442
    X86_AT(c, 0xee6u);
    s16(c, 2, 0x442u);
    // 000eea  mov ax, cx
    X86_AT(c, 0xeeau);
    s16(c, 0, (c.r[1] & 0xFFFFu));
    // 000eed  out dx, ax
    X86_AT(c, 0xeedu);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 000eef  ret 
    X86_AT(c, 0xeefu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe87u, "ran off the end of a function");
}
void f_00000e89(X86Cpu& c) {
    X86_TICK(c, 49);
    // 000e89  pop es
    X86_AT(c, 0xe89u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 000e8a  mov ecx, 0x10
    X86_AT(c, 0xe8au);
    c.r[1] = 0x10u;
    // 000e8f  movsd dword ptr es:[edi], dword ptr cs:[esi]
    X86_AT(c, 0xe8fu);
    x86_string(c, 0, 4, 243, 4, 1);
    // 000e92  lea esi, [ebp + 0xc0]
    X86_AT(c, 0xe92u);
    c.r[6] = (uint32_t)(c.r[5] + 0xC0u);
    // 000e98  xor bh, bh
    X86_AT(c, 0xe98u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v ^ g8(c, 7), 1)); }
    // 000e9a  mov dx, 0x440
    X86_AT(c, 0xe9au);
    s16(c, 2, 0x440u);
    // 000e9e  mov al, 0x1c
    X86_AT(c, 0xe9eu);
    s8(c, 0, 0x1Cu);
    // 000ea0  out dx, al
    X86_AT(c, 0xea0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ea1  mov dx, 0x442
    X86_AT(c, 0xea1u);
    s16(c, 2, 0x442u);
    // 000ea5  xor ax, ax
    X86_AT(c, 0xea5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ (c.r[0] & 0xFFFFu), 2)); }
    // 000ea8  out dx, ax
    X86_AT(c, 0xea8u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_eaa:
    X86_TICK(c, 19);
    // 000eaa  in ax, dx
    X86_AT(c, 0xeaau);
    s16(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 2));
    // 000eac  test ah, ah
    X86_AT(c, 0xeacu);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
    // 000eae  jl 0xeaa
    X86_AT(c, 0xeaeu);
    if (x86_cc(c, 12)) { X86_POLL(c, 0xeaau); goto L_eaa; }
L_eb0:
    X86_TICK(c, 7);
    // 000eb0  cmp bh, 2
    X86_AT(c, 0xeb0u);
    (void)x86_sub(c, g8(c, 7), 0x2u, 0, 1);
    // 000eb3  je 0xecb
    X86_AT(c, 0xeb3u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 7);
    // 000eb5  cmp bh, 3
    X86_AT(c, 0xeb5u);
    (void)x86_sub(c, g8(c, 7), 0x3u, 0, 1);
    // 000eb8  je 0xecb
    X86_AT(c, 0xeb8u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 34);
    // 000eba  mov dx, 0x440
    X86_AT(c, 0xebau);
    s16(c, 2, 0x440u);
    // 000ebe  mov al, bh
    X86_AT(c, 0xebeu);
    s8(c, 0, g8(c, 7));
    // 000ec0  out dx, al
    X86_AT(c, 0xec0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ec1  mov dx, 0x442
    X86_AT(c, 0xec1u);
    s16(c, 2, 0x442u);
    // 000ec5  mov ax, word ptr gs:[esi]
    X86_AT(c, 0xec5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 000ec9  out dx, ax
    X86_AT(c, 0xec9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_ecb:
    X86_TICK(c, 11);
    // 000ecb  add esi, 2
    X86_AT(c, 0xecbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 000ece  inc bh
    X86_AT(c, 0xeceu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_inc(c, v, 1)); }
    // 000ed0  cmp bh, 0x20
    X86_AT(c, 0xed0u);
    (void)x86_sub(c, g8(c, 7), 0x20u, 0, 1);
    // 000ed3  jb 0xeb0
    X86_AT(c, 0xed3u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xeb0u); goto L_eb0; }
    X86_TICK(c, 48);
    // 000ed5  mov cx, word ptr gs:[esi - 8]
    X86_AT(c, 0xed5u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0xFFFFFFF8u))));
    // 000eda  or cx, 0x8000
    X86_AT(c, 0xedau);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v | 0x8000u, 2)); }
    // 000edf  mov dx, 0x440
    X86_AT(c, 0xedfu);
    s16(c, 2, 0x440u);
    // 000ee3  mov al, 0x1c
    X86_AT(c, 0xee3u);
    s8(c, 0, 0x1Cu);
    // 000ee5  out dx, al
    X86_AT(c, 0xee5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ee6  mov dx, 0x442
    X86_AT(c, 0xee6u);
    s16(c, 2, 0x442u);
    // 000eea  mov ax, cx
    X86_AT(c, 0xeeau);
    s16(c, 0, (c.r[1] & 0xFFFFu));
    // 000eed  out dx, ax
    X86_AT(c, 0xeedu);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 000eef  ret 
    X86_AT(c, 0xeefu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe89u, "ran off the end of a function");
}
void f_00000e8a(X86Cpu& c) {
    X86_TICK(c, 45);
    // 000e8a  mov ecx, 0x10
    X86_AT(c, 0xe8au);
    c.r[1] = 0x10u;
    // 000e8f  movsd dword ptr es:[edi], dword ptr cs:[esi]
    X86_AT(c, 0xe8fu);
    x86_string(c, 0, 4, 243, 4, 1);
    // 000e92  lea esi, [ebp + 0xc0]
    X86_AT(c, 0xe92u);
    c.r[6] = (uint32_t)(c.r[5] + 0xC0u);
    // 000e98  xor bh, bh
    X86_AT(c, 0xe98u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v ^ g8(c, 7), 1)); }
    // 000e9a  mov dx, 0x440
    X86_AT(c, 0xe9au);
    s16(c, 2, 0x440u);
    // 000e9e  mov al, 0x1c
    X86_AT(c, 0xe9eu);
    s8(c, 0, 0x1Cu);
    // 000ea0  out dx, al
    X86_AT(c, 0xea0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ea1  mov dx, 0x442
    X86_AT(c, 0xea1u);
    s16(c, 2, 0x442u);
    // 000ea5  xor ax, ax
    X86_AT(c, 0xea5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ (c.r[0] & 0xFFFFu), 2)); }
    // 000ea8  out dx, ax
    X86_AT(c, 0xea8u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_eaa:
    X86_TICK(c, 19);
    // 000eaa  in ax, dx
    X86_AT(c, 0xeaau);
    s16(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 2));
    // 000eac  test ah, ah
    X86_AT(c, 0xeacu);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
    // 000eae  jl 0xeaa
    X86_AT(c, 0xeaeu);
    if (x86_cc(c, 12)) { X86_POLL(c, 0xeaau); goto L_eaa; }
L_eb0:
    X86_TICK(c, 7);
    // 000eb0  cmp bh, 2
    X86_AT(c, 0xeb0u);
    (void)x86_sub(c, g8(c, 7), 0x2u, 0, 1);
    // 000eb3  je 0xecb
    X86_AT(c, 0xeb3u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 7);
    // 000eb5  cmp bh, 3
    X86_AT(c, 0xeb5u);
    (void)x86_sub(c, g8(c, 7), 0x3u, 0, 1);
    // 000eb8  je 0xecb
    X86_AT(c, 0xeb8u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 34);
    // 000eba  mov dx, 0x440
    X86_AT(c, 0xebau);
    s16(c, 2, 0x440u);
    // 000ebe  mov al, bh
    X86_AT(c, 0xebeu);
    s8(c, 0, g8(c, 7));
    // 000ec0  out dx, al
    X86_AT(c, 0xec0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ec1  mov dx, 0x442
    X86_AT(c, 0xec1u);
    s16(c, 2, 0x442u);
    // 000ec5  mov ax, word ptr gs:[esi]
    X86_AT(c, 0xec5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 000ec9  out dx, ax
    X86_AT(c, 0xec9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_ecb:
    X86_TICK(c, 11);
    // 000ecb  add esi, 2
    X86_AT(c, 0xecbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 000ece  inc bh
    X86_AT(c, 0xeceu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_inc(c, v, 1)); }
    // 000ed0  cmp bh, 0x20
    X86_AT(c, 0xed0u);
    (void)x86_sub(c, g8(c, 7), 0x20u, 0, 1);
    // 000ed3  jb 0xeb0
    X86_AT(c, 0xed3u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xeb0u); goto L_eb0; }
    X86_TICK(c, 48);
    // 000ed5  mov cx, word ptr gs:[esi - 8]
    X86_AT(c, 0xed5u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0xFFFFFFF8u))));
    // 000eda  or cx, 0x8000
    X86_AT(c, 0xedau);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v | 0x8000u, 2)); }
    // 000edf  mov dx, 0x440
    X86_AT(c, 0xedfu);
    s16(c, 2, 0x440u);
    // 000ee3  mov al, 0x1c
    X86_AT(c, 0xee3u);
    s8(c, 0, 0x1Cu);
    // 000ee5  out dx, al
    X86_AT(c, 0xee5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ee6  mov dx, 0x442
    X86_AT(c, 0xee6u);
    s16(c, 2, 0x442u);
    // 000eea  mov ax, cx
    X86_AT(c, 0xeeau);
    s16(c, 0, (c.r[1] & 0xFFFFu));
    // 000eed  out dx, ax
    X86_AT(c, 0xeedu);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 000eef  ret 
    X86_AT(c, 0xeefu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe8au, "ran off the end of a function");
}
void f_00000e8f(X86Cpu& c) {
    X86_TICK(c, 43);
    // 000e8f  movsd dword ptr es:[edi], dword ptr cs:[esi]
    X86_AT(c, 0xe8fu);
    x86_string(c, 0, 4, 243, 4, 1);
    // 000e92  lea esi, [ebp + 0xc0]
    X86_AT(c, 0xe92u);
    c.r[6] = (uint32_t)(c.r[5] + 0xC0u);
    // 000e98  xor bh, bh
    X86_AT(c, 0xe98u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v ^ g8(c, 7), 1)); }
    // 000e9a  mov dx, 0x440
    X86_AT(c, 0xe9au);
    s16(c, 2, 0x440u);
    // 000e9e  mov al, 0x1c
    X86_AT(c, 0xe9eu);
    s8(c, 0, 0x1Cu);
    // 000ea0  out dx, al
    X86_AT(c, 0xea0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ea1  mov dx, 0x442
    X86_AT(c, 0xea1u);
    s16(c, 2, 0x442u);
    // 000ea5  xor ax, ax
    X86_AT(c, 0xea5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ (c.r[0] & 0xFFFFu), 2)); }
    // 000ea8  out dx, ax
    X86_AT(c, 0xea8u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_eaa:
    X86_TICK(c, 19);
    // 000eaa  in ax, dx
    X86_AT(c, 0xeaau);
    s16(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 2));
    // 000eac  test ah, ah
    X86_AT(c, 0xeacu);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
    // 000eae  jl 0xeaa
    X86_AT(c, 0xeaeu);
    if (x86_cc(c, 12)) { X86_POLL(c, 0xeaau); goto L_eaa; }
L_eb0:
    X86_TICK(c, 7);
    // 000eb0  cmp bh, 2
    X86_AT(c, 0xeb0u);
    (void)x86_sub(c, g8(c, 7), 0x2u, 0, 1);
    // 000eb3  je 0xecb
    X86_AT(c, 0xeb3u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 7);
    // 000eb5  cmp bh, 3
    X86_AT(c, 0xeb5u);
    (void)x86_sub(c, g8(c, 7), 0x3u, 0, 1);
    // 000eb8  je 0xecb
    X86_AT(c, 0xeb8u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 34);
    // 000eba  mov dx, 0x440
    X86_AT(c, 0xebau);
    s16(c, 2, 0x440u);
    // 000ebe  mov al, bh
    X86_AT(c, 0xebeu);
    s8(c, 0, g8(c, 7));
    // 000ec0  out dx, al
    X86_AT(c, 0xec0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ec1  mov dx, 0x442
    X86_AT(c, 0xec1u);
    s16(c, 2, 0x442u);
    // 000ec5  mov ax, word ptr gs:[esi]
    X86_AT(c, 0xec5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 000ec9  out dx, ax
    X86_AT(c, 0xec9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_ecb:
    X86_TICK(c, 11);
    // 000ecb  add esi, 2
    X86_AT(c, 0xecbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 000ece  inc bh
    X86_AT(c, 0xeceu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_inc(c, v, 1)); }
    // 000ed0  cmp bh, 0x20
    X86_AT(c, 0xed0u);
    (void)x86_sub(c, g8(c, 7), 0x20u, 0, 1);
    // 000ed3  jb 0xeb0
    X86_AT(c, 0xed3u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xeb0u); goto L_eb0; }
    X86_TICK(c, 48);
    // 000ed5  mov cx, word ptr gs:[esi - 8]
    X86_AT(c, 0xed5u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0xFFFFFFF8u))));
    // 000eda  or cx, 0x8000
    X86_AT(c, 0xedau);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v | 0x8000u, 2)); }
    // 000edf  mov dx, 0x440
    X86_AT(c, 0xedfu);
    s16(c, 2, 0x440u);
    // 000ee3  mov al, 0x1c
    X86_AT(c, 0xee3u);
    s8(c, 0, 0x1Cu);
    // 000ee5  out dx, al
    X86_AT(c, 0xee5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ee6  mov dx, 0x442
    X86_AT(c, 0xee6u);
    s16(c, 2, 0x442u);
    // 000eea  mov ax, cx
    X86_AT(c, 0xeeau);
    s16(c, 0, (c.r[1] & 0xFFFFu));
    // 000eed  out dx, ax
    X86_AT(c, 0xeedu);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 000eef  ret 
    X86_AT(c, 0xeefu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe8fu, "ran off the end of a function");
}
void f_00000e92(X86Cpu& c) {
    X86_TICK(c, 36);
    // 000e92  lea esi, [ebp + 0xc0]
    X86_AT(c, 0xe92u);
    c.r[6] = (uint32_t)(c.r[5] + 0xC0u);
    // 000e98  xor bh, bh
    X86_AT(c, 0xe98u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v ^ g8(c, 7), 1)); }
    // 000e9a  mov dx, 0x440
    X86_AT(c, 0xe9au);
    s16(c, 2, 0x440u);
    // 000e9e  mov al, 0x1c
    X86_AT(c, 0xe9eu);
    s8(c, 0, 0x1Cu);
    // 000ea0  out dx, al
    X86_AT(c, 0xea0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ea1  mov dx, 0x442
    X86_AT(c, 0xea1u);
    s16(c, 2, 0x442u);
    // 000ea5  xor ax, ax
    X86_AT(c, 0xea5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ (c.r[0] & 0xFFFFu), 2)); }
    // 000ea8  out dx, ax
    X86_AT(c, 0xea8u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_eaa:
    X86_TICK(c, 19);
    // 000eaa  in ax, dx
    X86_AT(c, 0xeaau);
    s16(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 2));
    // 000eac  test ah, ah
    X86_AT(c, 0xeacu);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
    // 000eae  jl 0xeaa
    X86_AT(c, 0xeaeu);
    if (x86_cc(c, 12)) { X86_POLL(c, 0xeaau); goto L_eaa; }
L_eb0:
    X86_TICK(c, 7);
    // 000eb0  cmp bh, 2
    X86_AT(c, 0xeb0u);
    (void)x86_sub(c, g8(c, 7), 0x2u, 0, 1);
    // 000eb3  je 0xecb
    X86_AT(c, 0xeb3u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 7);
    // 000eb5  cmp bh, 3
    X86_AT(c, 0xeb5u);
    (void)x86_sub(c, g8(c, 7), 0x3u, 0, 1);
    // 000eb8  je 0xecb
    X86_AT(c, 0xeb8u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 34);
    // 000eba  mov dx, 0x440
    X86_AT(c, 0xebau);
    s16(c, 2, 0x440u);
    // 000ebe  mov al, bh
    X86_AT(c, 0xebeu);
    s8(c, 0, g8(c, 7));
    // 000ec0  out dx, al
    X86_AT(c, 0xec0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ec1  mov dx, 0x442
    X86_AT(c, 0xec1u);
    s16(c, 2, 0x442u);
    // 000ec5  mov ax, word ptr gs:[esi]
    X86_AT(c, 0xec5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 000ec9  out dx, ax
    X86_AT(c, 0xec9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_ecb:
    X86_TICK(c, 11);
    // 000ecb  add esi, 2
    X86_AT(c, 0xecbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 000ece  inc bh
    X86_AT(c, 0xeceu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_inc(c, v, 1)); }
    // 000ed0  cmp bh, 0x20
    X86_AT(c, 0xed0u);
    (void)x86_sub(c, g8(c, 7), 0x20u, 0, 1);
    // 000ed3  jb 0xeb0
    X86_AT(c, 0xed3u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xeb0u); goto L_eb0; }
    X86_TICK(c, 48);
    // 000ed5  mov cx, word ptr gs:[esi - 8]
    X86_AT(c, 0xed5u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0xFFFFFFF8u))));
    // 000eda  or cx, 0x8000
    X86_AT(c, 0xedau);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v | 0x8000u, 2)); }
    // 000edf  mov dx, 0x440
    X86_AT(c, 0xedfu);
    s16(c, 2, 0x440u);
    // 000ee3  mov al, 0x1c
    X86_AT(c, 0xee3u);
    s8(c, 0, 0x1Cu);
    // 000ee5  out dx, al
    X86_AT(c, 0xee5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ee6  mov dx, 0x442
    X86_AT(c, 0xee6u);
    s16(c, 2, 0x442u);
    // 000eea  mov ax, cx
    X86_AT(c, 0xeeau);
    s16(c, 0, (c.r[1] & 0xFFFFu));
    // 000eed  out dx, ax
    X86_AT(c, 0xeedu);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 000eef  ret 
    X86_AT(c, 0xeefu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe92u, "ran off the end of a function");
}
void f_00000e98(X86Cpu& c) {
    X86_TICK(c, 34);
    // 000e98  xor bh, bh
    X86_AT(c, 0xe98u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v ^ g8(c, 7), 1)); }
    // 000e9a  mov dx, 0x440
    X86_AT(c, 0xe9au);
    s16(c, 2, 0x440u);
    // 000e9e  mov al, 0x1c
    X86_AT(c, 0xe9eu);
    s8(c, 0, 0x1Cu);
    // 000ea0  out dx, al
    X86_AT(c, 0xea0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ea1  mov dx, 0x442
    X86_AT(c, 0xea1u);
    s16(c, 2, 0x442u);
    // 000ea5  xor ax, ax
    X86_AT(c, 0xea5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ (c.r[0] & 0xFFFFu), 2)); }
    // 000ea8  out dx, ax
    X86_AT(c, 0xea8u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_eaa:
    X86_TICK(c, 19);
    // 000eaa  in ax, dx
    X86_AT(c, 0xeaau);
    s16(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 2));
    // 000eac  test ah, ah
    X86_AT(c, 0xeacu);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
    // 000eae  jl 0xeaa
    X86_AT(c, 0xeaeu);
    if (x86_cc(c, 12)) { X86_POLL(c, 0xeaau); goto L_eaa; }
L_eb0:
    X86_TICK(c, 7);
    // 000eb0  cmp bh, 2
    X86_AT(c, 0xeb0u);
    (void)x86_sub(c, g8(c, 7), 0x2u, 0, 1);
    // 000eb3  je 0xecb
    X86_AT(c, 0xeb3u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 7);
    // 000eb5  cmp bh, 3
    X86_AT(c, 0xeb5u);
    (void)x86_sub(c, g8(c, 7), 0x3u, 0, 1);
    // 000eb8  je 0xecb
    X86_AT(c, 0xeb8u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 34);
    // 000eba  mov dx, 0x440
    X86_AT(c, 0xebau);
    s16(c, 2, 0x440u);
    // 000ebe  mov al, bh
    X86_AT(c, 0xebeu);
    s8(c, 0, g8(c, 7));
    // 000ec0  out dx, al
    X86_AT(c, 0xec0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ec1  mov dx, 0x442
    X86_AT(c, 0xec1u);
    s16(c, 2, 0x442u);
    // 000ec5  mov ax, word ptr gs:[esi]
    X86_AT(c, 0xec5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 000ec9  out dx, ax
    X86_AT(c, 0xec9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_ecb:
    X86_TICK(c, 11);
    // 000ecb  add esi, 2
    X86_AT(c, 0xecbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 000ece  inc bh
    X86_AT(c, 0xeceu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_inc(c, v, 1)); }
    // 000ed0  cmp bh, 0x20
    X86_AT(c, 0xed0u);
    (void)x86_sub(c, g8(c, 7), 0x20u, 0, 1);
    // 000ed3  jb 0xeb0
    X86_AT(c, 0xed3u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xeb0u); goto L_eb0; }
    X86_TICK(c, 48);
    // 000ed5  mov cx, word ptr gs:[esi - 8]
    X86_AT(c, 0xed5u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0xFFFFFFF8u))));
    // 000eda  or cx, 0x8000
    X86_AT(c, 0xedau);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v | 0x8000u, 2)); }
    // 000edf  mov dx, 0x440
    X86_AT(c, 0xedfu);
    s16(c, 2, 0x440u);
    // 000ee3  mov al, 0x1c
    X86_AT(c, 0xee3u);
    s8(c, 0, 0x1Cu);
    // 000ee5  out dx, al
    X86_AT(c, 0xee5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ee6  mov dx, 0x442
    X86_AT(c, 0xee6u);
    s16(c, 2, 0x442u);
    // 000eea  mov ax, cx
    X86_AT(c, 0xeeau);
    s16(c, 0, (c.r[1] & 0xFFFFu));
    // 000eed  out dx, ax
    X86_AT(c, 0xeedu);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 000eef  ret 
    X86_AT(c, 0xeefu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe98u, "ran off the end of a function");
}
void f_00000e9a(X86Cpu& c) {
    X86_TICK(c, 32);
    // 000e9a  mov dx, 0x440
    X86_AT(c, 0xe9au);
    s16(c, 2, 0x440u);
    // 000e9e  mov al, 0x1c
    X86_AT(c, 0xe9eu);
    s8(c, 0, 0x1Cu);
    // 000ea0  out dx, al
    X86_AT(c, 0xea0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ea1  mov dx, 0x442
    X86_AT(c, 0xea1u);
    s16(c, 2, 0x442u);
    // 000ea5  xor ax, ax
    X86_AT(c, 0xea5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ (c.r[0] & 0xFFFFu), 2)); }
    // 000ea8  out dx, ax
    X86_AT(c, 0xea8u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_eaa:
    X86_TICK(c, 19);
    // 000eaa  in ax, dx
    X86_AT(c, 0xeaau);
    s16(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 2));
    // 000eac  test ah, ah
    X86_AT(c, 0xeacu);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
    // 000eae  jl 0xeaa
    X86_AT(c, 0xeaeu);
    if (x86_cc(c, 12)) { X86_POLL(c, 0xeaau); goto L_eaa; }
L_eb0:
    X86_TICK(c, 7);
    // 000eb0  cmp bh, 2
    X86_AT(c, 0xeb0u);
    (void)x86_sub(c, g8(c, 7), 0x2u, 0, 1);
    // 000eb3  je 0xecb
    X86_AT(c, 0xeb3u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 7);
    // 000eb5  cmp bh, 3
    X86_AT(c, 0xeb5u);
    (void)x86_sub(c, g8(c, 7), 0x3u, 0, 1);
    // 000eb8  je 0xecb
    X86_AT(c, 0xeb8u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 34);
    // 000eba  mov dx, 0x440
    X86_AT(c, 0xebau);
    s16(c, 2, 0x440u);
    // 000ebe  mov al, bh
    X86_AT(c, 0xebeu);
    s8(c, 0, g8(c, 7));
    // 000ec0  out dx, al
    X86_AT(c, 0xec0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ec1  mov dx, 0x442
    X86_AT(c, 0xec1u);
    s16(c, 2, 0x442u);
    // 000ec5  mov ax, word ptr gs:[esi]
    X86_AT(c, 0xec5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 000ec9  out dx, ax
    X86_AT(c, 0xec9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_ecb:
    X86_TICK(c, 11);
    // 000ecb  add esi, 2
    X86_AT(c, 0xecbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 000ece  inc bh
    X86_AT(c, 0xeceu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_inc(c, v, 1)); }
    // 000ed0  cmp bh, 0x20
    X86_AT(c, 0xed0u);
    (void)x86_sub(c, g8(c, 7), 0x20u, 0, 1);
    // 000ed3  jb 0xeb0
    X86_AT(c, 0xed3u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xeb0u); goto L_eb0; }
    X86_TICK(c, 48);
    // 000ed5  mov cx, word ptr gs:[esi - 8]
    X86_AT(c, 0xed5u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0xFFFFFFF8u))));
    // 000eda  or cx, 0x8000
    X86_AT(c, 0xedau);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v | 0x8000u, 2)); }
    // 000edf  mov dx, 0x440
    X86_AT(c, 0xedfu);
    s16(c, 2, 0x440u);
    // 000ee3  mov al, 0x1c
    X86_AT(c, 0xee3u);
    s8(c, 0, 0x1Cu);
    // 000ee5  out dx, al
    X86_AT(c, 0xee5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ee6  mov dx, 0x442
    X86_AT(c, 0xee6u);
    s16(c, 2, 0x442u);
    // 000eea  mov ax, cx
    X86_AT(c, 0xeeau);
    s16(c, 0, (c.r[1] & 0xFFFFu));
    // 000eed  out dx, ax
    X86_AT(c, 0xeedu);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 000eef  ret 
    X86_AT(c, 0xeefu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe9au, "ran off the end of a function");
}
void f_00000e9e(X86Cpu& c) {
    X86_TICK(c, 30);
    // 000e9e  mov al, 0x1c
    X86_AT(c, 0xe9eu);
    s8(c, 0, 0x1Cu);
    // 000ea0  out dx, al
    X86_AT(c, 0xea0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ea1  mov dx, 0x442
    X86_AT(c, 0xea1u);
    s16(c, 2, 0x442u);
    // 000ea5  xor ax, ax
    X86_AT(c, 0xea5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ (c.r[0] & 0xFFFFu), 2)); }
    // 000ea8  out dx, ax
    X86_AT(c, 0xea8u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_eaa:
    X86_TICK(c, 19);
    // 000eaa  in ax, dx
    X86_AT(c, 0xeaau);
    s16(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 2));
    // 000eac  test ah, ah
    X86_AT(c, 0xeacu);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
    // 000eae  jl 0xeaa
    X86_AT(c, 0xeaeu);
    if (x86_cc(c, 12)) { X86_POLL(c, 0xeaau); goto L_eaa; }
L_eb0:
    X86_TICK(c, 7);
    // 000eb0  cmp bh, 2
    X86_AT(c, 0xeb0u);
    (void)x86_sub(c, g8(c, 7), 0x2u, 0, 1);
    // 000eb3  je 0xecb
    X86_AT(c, 0xeb3u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 7);
    // 000eb5  cmp bh, 3
    X86_AT(c, 0xeb5u);
    (void)x86_sub(c, g8(c, 7), 0x3u, 0, 1);
    // 000eb8  je 0xecb
    X86_AT(c, 0xeb8u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 34);
    // 000eba  mov dx, 0x440
    X86_AT(c, 0xebau);
    s16(c, 2, 0x440u);
    // 000ebe  mov al, bh
    X86_AT(c, 0xebeu);
    s8(c, 0, g8(c, 7));
    // 000ec0  out dx, al
    X86_AT(c, 0xec0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ec1  mov dx, 0x442
    X86_AT(c, 0xec1u);
    s16(c, 2, 0x442u);
    // 000ec5  mov ax, word ptr gs:[esi]
    X86_AT(c, 0xec5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 000ec9  out dx, ax
    X86_AT(c, 0xec9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_ecb:
    X86_TICK(c, 11);
    // 000ecb  add esi, 2
    X86_AT(c, 0xecbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 000ece  inc bh
    X86_AT(c, 0xeceu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_inc(c, v, 1)); }
    // 000ed0  cmp bh, 0x20
    X86_AT(c, 0xed0u);
    (void)x86_sub(c, g8(c, 7), 0x20u, 0, 1);
    // 000ed3  jb 0xeb0
    X86_AT(c, 0xed3u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xeb0u); goto L_eb0; }
    X86_TICK(c, 48);
    // 000ed5  mov cx, word ptr gs:[esi - 8]
    X86_AT(c, 0xed5u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0xFFFFFFF8u))));
    // 000eda  or cx, 0x8000
    X86_AT(c, 0xedau);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v | 0x8000u, 2)); }
    // 000edf  mov dx, 0x440
    X86_AT(c, 0xedfu);
    s16(c, 2, 0x440u);
    // 000ee3  mov al, 0x1c
    X86_AT(c, 0xee3u);
    s8(c, 0, 0x1Cu);
    // 000ee5  out dx, al
    X86_AT(c, 0xee5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ee6  mov dx, 0x442
    X86_AT(c, 0xee6u);
    s16(c, 2, 0x442u);
    // 000eea  mov ax, cx
    X86_AT(c, 0xeeau);
    s16(c, 0, (c.r[1] & 0xFFFFu));
    // 000eed  out dx, ax
    X86_AT(c, 0xeedu);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 000eef  ret 
    X86_AT(c, 0xeefu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe9eu, "ran off the end of a function");
}
void f_00000ea0(X86Cpu& c) {
    X86_TICK(c, 28);
    // 000ea0  out dx, al
    X86_AT(c, 0xea0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ea1  mov dx, 0x442
    X86_AT(c, 0xea1u);
    s16(c, 2, 0x442u);
    // 000ea5  xor ax, ax
    X86_AT(c, 0xea5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ (c.r[0] & 0xFFFFu), 2)); }
    // 000ea8  out dx, ax
    X86_AT(c, 0xea8u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_eaa:
    X86_TICK(c, 19);
    // 000eaa  in ax, dx
    X86_AT(c, 0xeaau);
    s16(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 2));
    // 000eac  test ah, ah
    X86_AT(c, 0xeacu);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
    // 000eae  jl 0xeaa
    X86_AT(c, 0xeaeu);
    if (x86_cc(c, 12)) { X86_POLL(c, 0xeaau); goto L_eaa; }
L_eb0:
    X86_TICK(c, 7);
    // 000eb0  cmp bh, 2
    X86_AT(c, 0xeb0u);
    (void)x86_sub(c, g8(c, 7), 0x2u, 0, 1);
    // 000eb3  je 0xecb
    X86_AT(c, 0xeb3u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 7);
    // 000eb5  cmp bh, 3
    X86_AT(c, 0xeb5u);
    (void)x86_sub(c, g8(c, 7), 0x3u, 0, 1);
    // 000eb8  je 0xecb
    X86_AT(c, 0xeb8u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 34);
    // 000eba  mov dx, 0x440
    X86_AT(c, 0xebau);
    s16(c, 2, 0x440u);
    // 000ebe  mov al, bh
    X86_AT(c, 0xebeu);
    s8(c, 0, g8(c, 7));
    // 000ec0  out dx, al
    X86_AT(c, 0xec0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ec1  mov dx, 0x442
    X86_AT(c, 0xec1u);
    s16(c, 2, 0x442u);
    // 000ec5  mov ax, word ptr gs:[esi]
    X86_AT(c, 0xec5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 000ec9  out dx, ax
    X86_AT(c, 0xec9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_ecb:
    X86_TICK(c, 11);
    // 000ecb  add esi, 2
    X86_AT(c, 0xecbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 000ece  inc bh
    X86_AT(c, 0xeceu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_inc(c, v, 1)); }
    // 000ed0  cmp bh, 0x20
    X86_AT(c, 0xed0u);
    (void)x86_sub(c, g8(c, 7), 0x20u, 0, 1);
    // 000ed3  jb 0xeb0
    X86_AT(c, 0xed3u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xeb0u); goto L_eb0; }
    X86_TICK(c, 48);
    // 000ed5  mov cx, word ptr gs:[esi - 8]
    X86_AT(c, 0xed5u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0xFFFFFFF8u))));
    // 000eda  or cx, 0x8000
    X86_AT(c, 0xedau);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v | 0x8000u, 2)); }
    // 000edf  mov dx, 0x440
    X86_AT(c, 0xedfu);
    s16(c, 2, 0x440u);
    // 000ee3  mov al, 0x1c
    X86_AT(c, 0xee3u);
    s8(c, 0, 0x1Cu);
    // 000ee5  out dx, al
    X86_AT(c, 0xee5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ee6  mov dx, 0x442
    X86_AT(c, 0xee6u);
    s16(c, 2, 0x442u);
    // 000eea  mov ax, cx
    X86_AT(c, 0xeeau);
    s16(c, 0, (c.r[1] & 0xFFFFu));
    // 000eed  out dx, ax
    X86_AT(c, 0xeedu);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 000eef  ret 
    X86_AT(c, 0xeefu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xea0u, "ran off the end of a function");
}
void f_00000ea1(X86Cpu& c) {
    X86_TICK(c, 16);
    // 000ea1  mov dx, 0x442
    X86_AT(c, 0xea1u);
    s16(c, 2, 0x442u);
    // 000ea5  xor ax, ax
    X86_AT(c, 0xea5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ (c.r[0] & 0xFFFFu), 2)); }
    // 000ea8  out dx, ax
    X86_AT(c, 0xea8u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_eaa:
    X86_TICK(c, 19);
    // 000eaa  in ax, dx
    X86_AT(c, 0xeaau);
    s16(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 2));
    // 000eac  test ah, ah
    X86_AT(c, 0xeacu);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
    // 000eae  jl 0xeaa
    X86_AT(c, 0xeaeu);
    if (x86_cc(c, 12)) { X86_POLL(c, 0xeaau); goto L_eaa; }
L_eb0:
    X86_TICK(c, 7);
    // 000eb0  cmp bh, 2
    X86_AT(c, 0xeb0u);
    (void)x86_sub(c, g8(c, 7), 0x2u, 0, 1);
    // 000eb3  je 0xecb
    X86_AT(c, 0xeb3u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 7);
    // 000eb5  cmp bh, 3
    X86_AT(c, 0xeb5u);
    (void)x86_sub(c, g8(c, 7), 0x3u, 0, 1);
    // 000eb8  je 0xecb
    X86_AT(c, 0xeb8u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 34);
    // 000eba  mov dx, 0x440
    X86_AT(c, 0xebau);
    s16(c, 2, 0x440u);
    // 000ebe  mov al, bh
    X86_AT(c, 0xebeu);
    s8(c, 0, g8(c, 7));
    // 000ec0  out dx, al
    X86_AT(c, 0xec0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ec1  mov dx, 0x442
    X86_AT(c, 0xec1u);
    s16(c, 2, 0x442u);
    // 000ec5  mov ax, word ptr gs:[esi]
    X86_AT(c, 0xec5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 000ec9  out dx, ax
    X86_AT(c, 0xec9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_ecb:
    X86_TICK(c, 11);
    // 000ecb  add esi, 2
    X86_AT(c, 0xecbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 000ece  inc bh
    X86_AT(c, 0xeceu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_inc(c, v, 1)); }
    // 000ed0  cmp bh, 0x20
    X86_AT(c, 0xed0u);
    (void)x86_sub(c, g8(c, 7), 0x20u, 0, 1);
    // 000ed3  jb 0xeb0
    X86_AT(c, 0xed3u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xeb0u); goto L_eb0; }
    X86_TICK(c, 48);
    // 000ed5  mov cx, word ptr gs:[esi - 8]
    X86_AT(c, 0xed5u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0xFFFFFFF8u))));
    // 000eda  or cx, 0x8000
    X86_AT(c, 0xedau);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v | 0x8000u, 2)); }
    // 000edf  mov dx, 0x440
    X86_AT(c, 0xedfu);
    s16(c, 2, 0x440u);
    // 000ee3  mov al, 0x1c
    X86_AT(c, 0xee3u);
    s8(c, 0, 0x1Cu);
    // 000ee5  out dx, al
    X86_AT(c, 0xee5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ee6  mov dx, 0x442
    X86_AT(c, 0xee6u);
    s16(c, 2, 0x442u);
    // 000eea  mov ax, cx
    X86_AT(c, 0xeeau);
    s16(c, 0, (c.r[1] & 0xFFFFu));
    // 000eed  out dx, ax
    X86_AT(c, 0xeedu);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 000eef  ret 
    X86_AT(c, 0xeefu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xea1u, "ran off the end of a function");
}
void f_00000ea5(X86Cpu& c) {
    X86_TICK(c, 14);
    // 000ea5  xor ax, ax
    X86_AT(c, 0xea5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ (c.r[0] & 0xFFFFu), 2)); }
    // 000ea8  out dx, ax
    X86_AT(c, 0xea8u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_eaa:
    X86_TICK(c, 19);
    // 000eaa  in ax, dx
    X86_AT(c, 0xeaau);
    s16(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 2));
    // 000eac  test ah, ah
    X86_AT(c, 0xeacu);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
    // 000eae  jl 0xeaa
    X86_AT(c, 0xeaeu);
    if (x86_cc(c, 12)) { X86_POLL(c, 0xeaau); goto L_eaa; }
L_eb0:
    X86_TICK(c, 7);
    // 000eb0  cmp bh, 2
    X86_AT(c, 0xeb0u);
    (void)x86_sub(c, g8(c, 7), 0x2u, 0, 1);
    // 000eb3  je 0xecb
    X86_AT(c, 0xeb3u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 7);
    // 000eb5  cmp bh, 3
    X86_AT(c, 0xeb5u);
    (void)x86_sub(c, g8(c, 7), 0x3u, 0, 1);
    // 000eb8  je 0xecb
    X86_AT(c, 0xeb8u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 34);
    // 000eba  mov dx, 0x440
    X86_AT(c, 0xebau);
    s16(c, 2, 0x440u);
    // 000ebe  mov al, bh
    X86_AT(c, 0xebeu);
    s8(c, 0, g8(c, 7));
    // 000ec0  out dx, al
    X86_AT(c, 0xec0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ec1  mov dx, 0x442
    X86_AT(c, 0xec1u);
    s16(c, 2, 0x442u);
    // 000ec5  mov ax, word ptr gs:[esi]
    X86_AT(c, 0xec5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 000ec9  out dx, ax
    X86_AT(c, 0xec9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_ecb:
    X86_TICK(c, 11);
    // 000ecb  add esi, 2
    X86_AT(c, 0xecbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 000ece  inc bh
    X86_AT(c, 0xeceu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_inc(c, v, 1)); }
    // 000ed0  cmp bh, 0x20
    X86_AT(c, 0xed0u);
    (void)x86_sub(c, g8(c, 7), 0x20u, 0, 1);
    // 000ed3  jb 0xeb0
    X86_AT(c, 0xed3u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xeb0u); goto L_eb0; }
    X86_TICK(c, 48);
    // 000ed5  mov cx, word ptr gs:[esi - 8]
    X86_AT(c, 0xed5u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0xFFFFFFF8u))));
    // 000eda  or cx, 0x8000
    X86_AT(c, 0xedau);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v | 0x8000u, 2)); }
    // 000edf  mov dx, 0x440
    X86_AT(c, 0xedfu);
    s16(c, 2, 0x440u);
    // 000ee3  mov al, 0x1c
    X86_AT(c, 0xee3u);
    s8(c, 0, 0x1Cu);
    // 000ee5  out dx, al
    X86_AT(c, 0xee5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ee6  mov dx, 0x442
    X86_AT(c, 0xee6u);
    s16(c, 2, 0x442u);
    // 000eea  mov ax, cx
    X86_AT(c, 0xeeau);
    s16(c, 0, (c.r[1] & 0xFFFFu));
    // 000eed  out dx, ax
    X86_AT(c, 0xeedu);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 000eef  ret 
    X86_AT(c, 0xeefu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xea5u, "ran off the end of a function");
}
void f_00000ea8(X86Cpu& c) {
    X86_TICK(c, 12);
    // 000ea8  out dx, ax
    X86_AT(c, 0xea8u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_eaa:
    X86_TICK(c, 19);
    // 000eaa  in ax, dx
    X86_AT(c, 0xeaau);
    s16(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 2));
    // 000eac  test ah, ah
    X86_AT(c, 0xeacu);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
    // 000eae  jl 0xeaa
    X86_AT(c, 0xeaeu);
    if (x86_cc(c, 12)) { X86_POLL(c, 0xeaau); goto L_eaa; }
L_eb0:
    X86_TICK(c, 7);
    // 000eb0  cmp bh, 2
    X86_AT(c, 0xeb0u);
    (void)x86_sub(c, g8(c, 7), 0x2u, 0, 1);
    // 000eb3  je 0xecb
    X86_AT(c, 0xeb3u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 7);
    // 000eb5  cmp bh, 3
    X86_AT(c, 0xeb5u);
    (void)x86_sub(c, g8(c, 7), 0x3u, 0, 1);
    // 000eb8  je 0xecb
    X86_AT(c, 0xeb8u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 34);
    // 000eba  mov dx, 0x440
    X86_AT(c, 0xebau);
    s16(c, 2, 0x440u);
    // 000ebe  mov al, bh
    X86_AT(c, 0xebeu);
    s8(c, 0, g8(c, 7));
    // 000ec0  out dx, al
    X86_AT(c, 0xec0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ec1  mov dx, 0x442
    X86_AT(c, 0xec1u);
    s16(c, 2, 0x442u);
    // 000ec5  mov ax, word ptr gs:[esi]
    X86_AT(c, 0xec5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 000ec9  out dx, ax
    X86_AT(c, 0xec9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_ecb:
    X86_TICK(c, 11);
    // 000ecb  add esi, 2
    X86_AT(c, 0xecbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 000ece  inc bh
    X86_AT(c, 0xeceu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_inc(c, v, 1)); }
    // 000ed0  cmp bh, 0x20
    X86_AT(c, 0xed0u);
    (void)x86_sub(c, g8(c, 7), 0x20u, 0, 1);
    // 000ed3  jb 0xeb0
    X86_AT(c, 0xed3u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xeb0u); goto L_eb0; }
    X86_TICK(c, 48);
    // 000ed5  mov cx, word ptr gs:[esi - 8]
    X86_AT(c, 0xed5u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0xFFFFFFF8u))));
    // 000eda  or cx, 0x8000
    X86_AT(c, 0xedau);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v | 0x8000u, 2)); }
    // 000edf  mov dx, 0x440
    X86_AT(c, 0xedfu);
    s16(c, 2, 0x440u);
    // 000ee3  mov al, 0x1c
    X86_AT(c, 0xee3u);
    s8(c, 0, 0x1Cu);
    // 000ee5  out dx, al
    X86_AT(c, 0xee5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ee6  mov dx, 0x442
    X86_AT(c, 0xee6u);
    s16(c, 2, 0x442u);
    // 000eea  mov ax, cx
    X86_AT(c, 0xeeau);
    s16(c, 0, (c.r[1] & 0xFFFFu));
    // 000eed  out dx, ax
    X86_AT(c, 0xeedu);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 000eef  ret 
    X86_AT(c, 0xeefu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xea8u, "ran off the end of a function");
}
void f_00000eaa(X86Cpu& c) {
L_eaa:
    X86_TICK(c, 19);
    // 000eaa  in ax, dx
    X86_AT(c, 0xeaau);
    s16(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 2));
    // 000eac  test ah, ah
    X86_AT(c, 0xeacu);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
    // 000eae  jl 0xeaa
    X86_AT(c, 0xeaeu);
    if (x86_cc(c, 12)) { X86_POLL(c, 0xeaau); goto L_eaa; }
L_eb0:
    X86_TICK(c, 7);
    // 000eb0  cmp bh, 2
    X86_AT(c, 0xeb0u);
    (void)x86_sub(c, g8(c, 7), 0x2u, 0, 1);
    // 000eb3  je 0xecb
    X86_AT(c, 0xeb3u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 7);
    // 000eb5  cmp bh, 3
    X86_AT(c, 0xeb5u);
    (void)x86_sub(c, g8(c, 7), 0x3u, 0, 1);
    // 000eb8  je 0xecb
    X86_AT(c, 0xeb8u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 34);
    // 000eba  mov dx, 0x440
    X86_AT(c, 0xebau);
    s16(c, 2, 0x440u);
    // 000ebe  mov al, bh
    X86_AT(c, 0xebeu);
    s8(c, 0, g8(c, 7));
    // 000ec0  out dx, al
    X86_AT(c, 0xec0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ec1  mov dx, 0x442
    X86_AT(c, 0xec1u);
    s16(c, 2, 0x442u);
    // 000ec5  mov ax, word ptr gs:[esi]
    X86_AT(c, 0xec5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 000ec9  out dx, ax
    X86_AT(c, 0xec9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_ecb:
    X86_TICK(c, 11);
    // 000ecb  add esi, 2
    X86_AT(c, 0xecbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 000ece  inc bh
    X86_AT(c, 0xeceu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_inc(c, v, 1)); }
    // 000ed0  cmp bh, 0x20
    X86_AT(c, 0xed0u);
    (void)x86_sub(c, g8(c, 7), 0x20u, 0, 1);
    // 000ed3  jb 0xeb0
    X86_AT(c, 0xed3u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xeb0u); goto L_eb0; }
    X86_TICK(c, 48);
    // 000ed5  mov cx, word ptr gs:[esi - 8]
    X86_AT(c, 0xed5u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0xFFFFFFF8u))));
    // 000eda  or cx, 0x8000
    X86_AT(c, 0xedau);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v | 0x8000u, 2)); }
    // 000edf  mov dx, 0x440
    X86_AT(c, 0xedfu);
    s16(c, 2, 0x440u);
    // 000ee3  mov al, 0x1c
    X86_AT(c, 0xee3u);
    s8(c, 0, 0x1Cu);
    // 000ee5  out dx, al
    X86_AT(c, 0xee5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ee6  mov dx, 0x442
    X86_AT(c, 0xee6u);
    s16(c, 2, 0x442u);
    // 000eea  mov ax, cx
    X86_AT(c, 0xeeau);
    s16(c, 0, (c.r[1] & 0xFFFFu));
    // 000eed  out dx, ax
    X86_AT(c, 0xeedu);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 000eef  ret 
    X86_AT(c, 0xeefu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xeaau, "ran off the end of a function");
}
void f_00000eac(X86Cpu& c) {
    goto L_eac;
L_eaa:
    X86_TICK(c, 12);
    // 000eaa  in ax, dx
    X86_AT(c, 0xeaau);
    s16(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 2));
L_eac:
    X86_TICK(c, 7);
    // 000eac  test ah, ah
    X86_AT(c, 0xeacu);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
    // 000eae  jl 0xeaa
    X86_AT(c, 0xeaeu);
    if (x86_cc(c, 12)) { X86_POLL(c, 0xeaau); goto L_eaa; }
L_eb0:
    X86_TICK(c, 7);
    // 000eb0  cmp bh, 2
    X86_AT(c, 0xeb0u);
    (void)x86_sub(c, g8(c, 7), 0x2u, 0, 1);
    // 000eb3  je 0xecb
    X86_AT(c, 0xeb3u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 7);
    // 000eb5  cmp bh, 3
    X86_AT(c, 0xeb5u);
    (void)x86_sub(c, g8(c, 7), 0x3u, 0, 1);
    // 000eb8  je 0xecb
    X86_AT(c, 0xeb8u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 34);
    // 000eba  mov dx, 0x440
    X86_AT(c, 0xebau);
    s16(c, 2, 0x440u);
    // 000ebe  mov al, bh
    X86_AT(c, 0xebeu);
    s8(c, 0, g8(c, 7));
    // 000ec0  out dx, al
    X86_AT(c, 0xec0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ec1  mov dx, 0x442
    X86_AT(c, 0xec1u);
    s16(c, 2, 0x442u);
    // 000ec5  mov ax, word ptr gs:[esi]
    X86_AT(c, 0xec5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 000ec9  out dx, ax
    X86_AT(c, 0xec9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_ecb:
    X86_TICK(c, 11);
    // 000ecb  add esi, 2
    X86_AT(c, 0xecbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 000ece  inc bh
    X86_AT(c, 0xeceu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_inc(c, v, 1)); }
    // 000ed0  cmp bh, 0x20
    X86_AT(c, 0xed0u);
    (void)x86_sub(c, g8(c, 7), 0x20u, 0, 1);
    // 000ed3  jb 0xeb0
    X86_AT(c, 0xed3u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xeb0u); goto L_eb0; }
    X86_TICK(c, 48);
    // 000ed5  mov cx, word ptr gs:[esi - 8]
    X86_AT(c, 0xed5u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0xFFFFFFF8u))));
    // 000eda  or cx, 0x8000
    X86_AT(c, 0xedau);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v | 0x8000u, 2)); }
    // 000edf  mov dx, 0x440
    X86_AT(c, 0xedfu);
    s16(c, 2, 0x440u);
    // 000ee3  mov al, 0x1c
    X86_AT(c, 0xee3u);
    s8(c, 0, 0x1Cu);
    // 000ee5  out dx, al
    X86_AT(c, 0xee5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ee6  mov dx, 0x442
    X86_AT(c, 0xee6u);
    s16(c, 2, 0x442u);
    // 000eea  mov ax, cx
    X86_AT(c, 0xeeau);
    s16(c, 0, (c.r[1] & 0xFFFFu));
    // 000eed  out dx, ax
    X86_AT(c, 0xeedu);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 000eef  ret 
    X86_AT(c, 0xeefu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xeacu, "ran off the end of a function");
}
void f_00000eae(X86Cpu& c) {
    goto L_eae;
L_eaa:
    X86_TICK(c, 14);
    // 000eaa  in ax, dx
    X86_AT(c, 0xeaau);
    s16(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 2));
    // 000eac  test ah, ah
    X86_AT(c, 0xeacu);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
L_eae:
    X86_TICK(c, 5);
    // 000eae  jl 0xeaa
    X86_AT(c, 0xeaeu);
    if (x86_cc(c, 12)) { X86_POLL(c, 0xeaau); goto L_eaa; }
L_eb0:
    X86_TICK(c, 7);
    // 000eb0  cmp bh, 2
    X86_AT(c, 0xeb0u);
    (void)x86_sub(c, g8(c, 7), 0x2u, 0, 1);
    // 000eb3  je 0xecb
    X86_AT(c, 0xeb3u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 7);
    // 000eb5  cmp bh, 3
    X86_AT(c, 0xeb5u);
    (void)x86_sub(c, g8(c, 7), 0x3u, 0, 1);
    // 000eb8  je 0xecb
    X86_AT(c, 0xeb8u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 34);
    // 000eba  mov dx, 0x440
    X86_AT(c, 0xebau);
    s16(c, 2, 0x440u);
    // 000ebe  mov al, bh
    X86_AT(c, 0xebeu);
    s8(c, 0, g8(c, 7));
    // 000ec0  out dx, al
    X86_AT(c, 0xec0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ec1  mov dx, 0x442
    X86_AT(c, 0xec1u);
    s16(c, 2, 0x442u);
    // 000ec5  mov ax, word ptr gs:[esi]
    X86_AT(c, 0xec5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 000ec9  out dx, ax
    X86_AT(c, 0xec9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_ecb:
    X86_TICK(c, 11);
    // 000ecb  add esi, 2
    X86_AT(c, 0xecbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 000ece  inc bh
    X86_AT(c, 0xeceu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_inc(c, v, 1)); }
    // 000ed0  cmp bh, 0x20
    X86_AT(c, 0xed0u);
    (void)x86_sub(c, g8(c, 7), 0x20u, 0, 1);
    // 000ed3  jb 0xeb0
    X86_AT(c, 0xed3u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xeb0u); goto L_eb0; }
    X86_TICK(c, 48);
    // 000ed5  mov cx, word ptr gs:[esi - 8]
    X86_AT(c, 0xed5u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0xFFFFFFF8u))));
    // 000eda  or cx, 0x8000
    X86_AT(c, 0xedau);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v | 0x8000u, 2)); }
    // 000edf  mov dx, 0x440
    X86_AT(c, 0xedfu);
    s16(c, 2, 0x440u);
    // 000ee3  mov al, 0x1c
    X86_AT(c, 0xee3u);
    s8(c, 0, 0x1Cu);
    // 000ee5  out dx, al
    X86_AT(c, 0xee5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ee6  mov dx, 0x442
    X86_AT(c, 0xee6u);
    s16(c, 2, 0x442u);
    // 000eea  mov ax, cx
    X86_AT(c, 0xeeau);
    s16(c, 0, (c.r[1] & 0xFFFFu));
    // 000eed  out dx, ax
    X86_AT(c, 0xeedu);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 000eef  ret 
    X86_AT(c, 0xeefu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xeaeu, "ran off the end of a function");
}
void f_00000eb0(X86Cpu& c) {
L_eb0:
    X86_TICK(c, 7);
    // 000eb0  cmp bh, 2
    X86_AT(c, 0xeb0u);
    (void)x86_sub(c, g8(c, 7), 0x2u, 0, 1);
    // 000eb3  je 0xecb
    X86_AT(c, 0xeb3u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 7);
    // 000eb5  cmp bh, 3
    X86_AT(c, 0xeb5u);
    (void)x86_sub(c, g8(c, 7), 0x3u, 0, 1);
    // 000eb8  je 0xecb
    X86_AT(c, 0xeb8u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 34);
    // 000eba  mov dx, 0x440
    X86_AT(c, 0xebau);
    s16(c, 2, 0x440u);
    // 000ebe  mov al, bh
    X86_AT(c, 0xebeu);
    s8(c, 0, g8(c, 7));
    // 000ec0  out dx, al
    X86_AT(c, 0xec0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ec1  mov dx, 0x442
    X86_AT(c, 0xec1u);
    s16(c, 2, 0x442u);
    // 000ec5  mov ax, word ptr gs:[esi]
    X86_AT(c, 0xec5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 000ec9  out dx, ax
    X86_AT(c, 0xec9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_ecb:
    X86_TICK(c, 11);
    // 000ecb  add esi, 2
    X86_AT(c, 0xecbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 000ece  inc bh
    X86_AT(c, 0xeceu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_inc(c, v, 1)); }
    // 000ed0  cmp bh, 0x20
    X86_AT(c, 0xed0u);
    (void)x86_sub(c, g8(c, 7), 0x20u, 0, 1);
    // 000ed3  jb 0xeb0
    X86_AT(c, 0xed3u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xeb0u); goto L_eb0; }
    X86_TICK(c, 48);
    // 000ed5  mov cx, word ptr gs:[esi - 8]
    X86_AT(c, 0xed5u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0xFFFFFFF8u))));
    // 000eda  or cx, 0x8000
    X86_AT(c, 0xedau);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v | 0x8000u, 2)); }
    // 000edf  mov dx, 0x440
    X86_AT(c, 0xedfu);
    s16(c, 2, 0x440u);
    // 000ee3  mov al, 0x1c
    X86_AT(c, 0xee3u);
    s8(c, 0, 0x1Cu);
    // 000ee5  out dx, al
    X86_AT(c, 0xee5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ee6  mov dx, 0x442
    X86_AT(c, 0xee6u);
    s16(c, 2, 0x442u);
    // 000eea  mov ax, cx
    X86_AT(c, 0xeeau);
    s16(c, 0, (c.r[1] & 0xFFFFu));
    // 000eed  out dx, ax
    X86_AT(c, 0xeedu);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 000eef  ret 
    X86_AT(c, 0xeefu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xeb0u, "ran off the end of a function");
}
void f_00000eb3(X86Cpu& c) {
    goto L_eb3;
L_eb0:
    X86_TICK(c, 2);
    // 000eb0  cmp bh, 2
    X86_AT(c, 0xeb0u);
    (void)x86_sub(c, g8(c, 7), 0x2u, 0, 1);
L_eb3:
    X86_TICK(c, 5);
    // 000eb3  je 0xecb
    X86_AT(c, 0xeb3u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 7);
    // 000eb5  cmp bh, 3
    X86_AT(c, 0xeb5u);
    (void)x86_sub(c, g8(c, 7), 0x3u, 0, 1);
    // 000eb8  je 0xecb
    X86_AT(c, 0xeb8u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 34);
    // 000eba  mov dx, 0x440
    X86_AT(c, 0xebau);
    s16(c, 2, 0x440u);
    // 000ebe  mov al, bh
    X86_AT(c, 0xebeu);
    s8(c, 0, g8(c, 7));
    // 000ec0  out dx, al
    X86_AT(c, 0xec0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ec1  mov dx, 0x442
    X86_AT(c, 0xec1u);
    s16(c, 2, 0x442u);
    // 000ec5  mov ax, word ptr gs:[esi]
    X86_AT(c, 0xec5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 000ec9  out dx, ax
    X86_AT(c, 0xec9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_ecb:
    X86_TICK(c, 11);
    // 000ecb  add esi, 2
    X86_AT(c, 0xecbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 000ece  inc bh
    X86_AT(c, 0xeceu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_inc(c, v, 1)); }
    // 000ed0  cmp bh, 0x20
    X86_AT(c, 0xed0u);
    (void)x86_sub(c, g8(c, 7), 0x20u, 0, 1);
    // 000ed3  jb 0xeb0
    X86_AT(c, 0xed3u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xeb0u); goto L_eb0; }
    X86_TICK(c, 48);
    // 000ed5  mov cx, word ptr gs:[esi - 8]
    X86_AT(c, 0xed5u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0xFFFFFFF8u))));
    // 000eda  or cx, 0x8000
    X86_AT(c, 0xedau);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v | 0x8000u, 2)); }
    // 000edf  mov dx, 0x440
    X86_AT(c, 0xedfu);
    s16(c, 2, 0x440u);
    // 000ee3  mov al, 0x1c
    X86_AT(c, 0xee3u);
    s8(c, 0, 0x1Cu);
    // 000ee5  out dx, al
    X86_AT(c, 0xee5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ee6  mov dx, 0x442
    X86_AT(c, 0xee6u);
    s16(c, 2, 0x442u);
    // 000eea  mov ax, cx
    X86_AT(c, 0xeeau);
    s16(c, 0, (c.r[1] & 0xFFFFu));
    // 000eed  out dx, ax
    X86_AT(c, 0xeedu);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 000eef  ret 
    X86_AT(c, 0xeefu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xeb3u, "ran off the end of a function");
}
void f_00000eb5(X86Cpu& c) {
    goto L_eb5;
L_eb0:
    X86_TICK(c, 7);
    // 000eb0  cmp bh, 2
    X86_AT(c, 0xeb0u);
    (void)x86_sub(c, g8(c, 7), 0x2u, 0, 1);
    // 000eb3  je 0xecb
    X86_AT(c, 0xeb3u);
    if (x86_cc(c, 4)) { goto L_ecb; }
L_eb5:
    X86_TICK(c, 7);
    // 000eb5  cmp bh, 3
    X86_AT(c, 0xeb5u);
    (void)x86_sub(c, g8(c, 7), 0x3u, 0, 1);
    // 000eb8  je 0xecb
    X86_AT(c, 0xeb8u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 34);
    // 000eba  mov dx, 0x440
    X86_AT(c, 0xebau);
    s16(c, 2, 0x440u);
    // 000ebe  mov al, bh
    X86_AT(c, 0xebeu);
    s8(c, 0, g8(c, 7));
    // 000ec0  out dx, al
    X86_AT(c, 0xec0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ec1  mov dx, 0x442
    X86_AT(c, 0xec1u);
    s16(c, 2, 0x442u);
    // 000ec5  mov ax, word ptr gs:[esi]
    X86_AT(c, 0xec5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 000ec9  out dx, ax
    X86_AT(c, 0xec9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_ecb:
    X86_TICK(c, 11);
    // 000ecb  add esi, 2
    X86_AT(c, 0xecbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 000ece  inc bh
    X86_AT(c, 0xeceu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_inc(c, v, 1)); }
    // 000ed0  cmp bh, 0x20
    X86_AT(c, 0xed0u);
    (void)x86_sub(c, g8(c, 7), 0x20u, 0, 1);
    // 000ed3  jb 0xeb0
    X86_AT(c, 0xed3u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xeb0u); goto L_eb0; }
    X86_TICK(c, 48);
    // 000ed5  mov cx, word ptr gs:[esi - 8]
    X86_AT(c, 0xed5u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0xFFFFFFF8u))));
    // 000eda  or cx, 0x8000
    X86_AT(c, 0xedau);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v | 0x8000u, 2)); }
    // 000edf  mov dx, 0x440
    X86_AT(c, 0xedfu);
    s16(c, 2, 0x440u);
    // 000ee3  mov al, 0x1c
    X86_AT(c, 0xee3u);
    s8(c, 0, 0x1Cu);
    // 000ee5  out dx, al
    X86_AT(c, 0xee5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ee6  mov dx, 0x442
    X86_AT(c, 0xee6u);
    s16(c, 2, 0x442u);
    // 000eea  mov ax, cx
    X86_AT(c, 0xeeau);
    s16(c, 0, (c.r[1] & 0xFFFFu));
    // 000eed  out dx, ax
    X86_AT(c, 0xeedu);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 000eef  ret 
    X86_AT(c, 0xeefu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xeb5u, "ran off the end of a function");
}
void f_00000eb8(X86Cpu& c) {
    goto L_eb8;
L_eb0:
    X86_TICK(c, 7);
    // 000eb0  cmp bh, 2
    X86_AT(c, 0xeb0u);
    (void)x86_sub(c, g8(c, 7), 0x2u, 0, 1);
    // 000eb3  je 0xecb
    X86_AT(c, 0xeb3u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 2);
    // 000eb5  cmp bh, 3
    X86_AT(c, 0xeb5u);
    (void)x86_sub(c, g8(c, 7), 0x3u, 0, 1);
L_eb8:
    X86_TICK(c, 5);
    // 000eb8  je 0xecb
    X86_AT(c, 0xeb8u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 34);
    // 000eba  mov dx, 0x440
    X86_AT(c, 0xebau);
    s16(c, 2, 0x440u);
    // 000ebe  mov al, bh
    X86_AT(c, 0xebeu);
    s8(c, 0, g8(c, 7));
    // 000ec0  out dx, al
    X86_AT(c, 0xec0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ec1  mov dx, 0x442
    X86_AT(c, 0xec1u);
    s16(c, 2, 0x442u);
    // 000ec5  mov ax, word ptr gs:[esi]
    X86_AT(c, 0xec5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 000ec9  out dx, ax
    X86_AT(c, 0xec9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_ecb:
    X86_TICK(c, 11);
    // 000ecb  add esi, 2
    X86_AT(c, 0xecbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 000ece  inc bh
    X86_AT(c, 0xeceu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_inc(c, v, 1)); }
    // 000ed0  cmp bh, 0x20
    X86_AT(c, 0xed0u);
    (void)x86_sub(c, g8(c, 7), 0x20u, 0, 1);
    // 000ed3  jb 0xeb0
    X86_AT(c, 0xed3u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xeb0u); goto L_eb0; }
    X86_TICK(c, 48);
    // 000ed5  mov cx, word ptr gs:[esi - 8]
    X86_AT(c, 0xed5u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0xFFFFFFF8u))));
    // 000eda  or cx, 0x8000
    X86_AT(c, 0xedau);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v | 0x8000u, 2)); }
    // 000edf  mov dx, 0x440
    X86_AT(c, 0xedfu);
    s16(c, 2, 0x440u);
    // 000ee3  mov al, 0x1c
    X86_AT(c, 0xee3u);
    s8(c, 0, 0x1Cu);
    // 000ee5  out dx, al
    X86_AT(c, 0xee5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ee6  mov dx, 0x442
    X86_AT(c, 0xee6u);
    s16(c, 2, 0x442u);
    // 000eea  mov ax, cx
    X86_AT(c, 0xeeau);
    s16(c, 0, (c.r[1] & 0xFFFFu));
    // 000eed  out dx, ax
    X86_AT(c, 0xeedu);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 000eef  ret 
    X86_AT(c, 0xeefu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xeb8u, "ran off the end of a function");
}
void f_00000eba(X86Cpu& c) {
    goto L_eba;
L_eb0:
    X86_TICK(c, 7);
    // 000eb0  cmp bh, 2
    X86_AT(c, 0xeb0u);
    (void)x86_sub(c, g8(c, 7), 0x2u, 0, 1);
    // 000eb3  je 0xecb
    X86_AT(c, 0xeb3u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 7);
    // 000eb5  cmp bh, 3
    X86_AT(c, 0xeb5u);
    (void)x86_sub(c, g8(c, 7), 0x3u, 0, 1);
    // 000eb8  je 0xecb
    X86_AT(c, 0xeb8u);
    if (x86_cc(c, 4)) { goto L_ecb; }
L_eba:
    X86_TICK(c, 34);
    // 000eba  mov dx, 0x440
    X86_AT(c, 0xebau);
    s16(c, 2, 0x440u);
    // 000ebe  mov al, bh
    X86_AT(c, 0xebeu);
    s8(c, 0, g8(c, 7));
    // 000ec0  out dx, al
    X86_AT(c, 0xec0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ec1  mov dx, 0x442
    X86_AT(c, 0xec1u);
    s16(c, 2, 0x442u);
    // 000ec5  mov ax, word ptr gs:[esi]
    X86_AT(c, 0xec5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 000ec9  out dx, ax
    X86_AT(c, 0xec9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_ecb:
    X86_TICK(c, 11);
    // 000ecb  add esi, 2
    X86_AT(c, 0xecbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 000ece  inc bh
    X86_AT(c, 0xeceu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_inc(c, v, 1)); }
    // 000ed0  cmp bh, 0x20
    X86_AT(c, 0xed0u);
    (void)x86_sub(c, g8(c, 7), 0x20u, 0, 1);
    // 000ed3  jb 0xeb0
    X86_AT(c, 0xed3u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xeb0u); goto L_eb0; }
    X86_TICK(c, 48);
    // 000ed5  mov cx, word ptr gs:[esi - 8]
    X86_AT(c, 0xed5u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0xFFFFFFF8u))));
    // 000eda  or cx, 0x8000
    X86_AT(c, 0xedau);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v | 0x8000u, 2)); }
    // 000edf  mov dx, 0x440
    X86_AT(c, 0xedfu);
    s16(c, 2, 0x440u);
    // 000ee3  mov al, 0x1c
    X86_AT(c, 0xee3u);
    s8(c, 0, 0x1Cu);
    // 000ee5  out dx, al
    X86_AT(c, 0xee5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ee6  mov dx, 0x442
    X86_AT(c, 0xee6u);
    s16(c, 2, 0x442u);
    // 000eea  mov ax, cx
    X86_AT(c, 0xeeau);
    s16(c, 0, (c.r[1] & 0xFFFFu));
    // 000eed  out dx, ax
    X86_AT(c, 0xeedu);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 000eef  ret 
    X86_AT(c, 0xeefu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xebau, "ran off the end of a function");
}
void f_00000ebe(X86Cpu& c) {
    goto L_ebe;
L_eb0:
    X86_TICK(c, 7);
    // 000eb0  cmp bh, 2
    X86_AT(c, 0xeb0u);
    (void)x86_sub(c, g8(c, 7), 0x2u, 0, 1);
    // 000eb3  je 0xecb
    X86_AT(c, 0xeb3u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 7);
    // 000eb5  cmp bh, 3
    X86_AT(c, 0xeb5u);
    (void)x86_sub(c, g8(c, 7), 0x3u, 0, 1);
    // 000eb8  je 0xecb
    X86_AT(c, 0xeb8u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 2);
    // 000eba  mov dx, 0x440
    X86_AT(c, 0xebau);
    s16(c, 2, 0x440u);
L_ebe:
    X86_TICK(c, 32);
    // 000ebe  mov al, bh
    X86_AT(c, 0xebeu);
    s8(c, 0, g8(c, 7));
    // 000ec0  out dx, al
    X86_AT(c, 0xec0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ec1  mov dx, 0x442
    X86_AT(c, 0xec1u);
    s16(c, 2, 0x442u);
    // 000ec5  mov ax, word ptr gs:[esi]
    X86_AT(c, 0xec5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 000ec9  out dx, ax
    X86_AT(c, 0xec9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_ecb:
    X86_TICK(c, 11);
    // 000ecb  add esi, 2
    X86_AT(c, 0xecbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 000ece  inc bh
    X86_AT(c, 0xeceu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_inc(c, v, 1)); }
    // 000ed0  cmp bh, 0x20
    X86_AT(c, 0xed0u);
    (void)x86_sub(c, g8(c, 7), 0x20u, 0, 1);
    // 000ed3  jb 0xeb0
    X86_AT(c, 0xed3u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xeb0u); goto L_eb0; }
    X86_TICK(c, 48);
    // 000ed5  mov cx, word ptr gs:[esi - 8]
    X86_AT(c, 0xed5u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0xFFFFFFF8u))));
    // 000eda  or cx, 0x8000
    X86_AT(c, 0xedau);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v | 0x8000u, 2)); }
    // 000edf  mov dx, 0x440
    X86_AT(c, 0xedfu);
    s16(c, 2, 0x440u);
    // 000ee3  mov al, 0x1c
    X86_AT(c, 0xee3u);
    s8(c, 0, 0x1Cu);
    // 000ee5  out dx, al
    X86_AT(c, 0xee5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ee6  mov dx, 0x442
    X86_AT(c, 0xee6u);
    s16(c, 2, 0x442u);
    // 000eea  mov ax, cx
    X86_AT(c, 0xeeau);
    s16(c, 0, (c.r[1] & 0xFFFFu));
    // 000eed  out dx, ax
    X86_AT(c, 0xeedu);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 000eef  ret 
    X86_AT(c, 0xeefu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xebeu, "ran off the end of a function");
}
void f_00000ec0(X86Cpu& c) {
    goto L_ec0;
L_eb0:
    X86_TICK(c, 7);
    // 000eb0  cmp bh, 2
    X86_AT(c, 0xeb0u);
    (void)x86_sub(c, g8(c, 7), 0x2u, 0, 1);
    // 000eb3  je 0xecb
    X86_AT(c, 0xeb3u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 7);
    // 000eb5  cmp bh, 3
    X86_AT(c, 0xeb5u);
    (void)x86_sub(c, g8(c, 7), 0x3u, 0, 1);
    // 000eb8  je 0xecb
    X86_AT(c, 0xeb8u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 4);
    // 000eba  mov dx, 0x440
    X86_AT(c, 0xebau);
    s16(c, 2, 0x440u);
    // 000ebe  mov al, bh
    X86_AT(c, 0xebeu);
    s8(c, 0, g8(c, 7));
L_ec0:
    X86_TICK(c, 30);
    // 000ec0  out dx, al
    X86_AT(c, 0xec0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ec1  mov dx, 0x442
    X86_AT(c, 0xec1u);
    s16(c, 2, 0x442u);
    // 000ec5  mov ax, word ptr gs:[esi]
    X86_AT(c, 0xec5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 000ec9  out dx, ax
    X86_AT(c, 0xec9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_ecb:
    X86_TICK(c, 11);
    // 000ecb  add esi, 2
    X86_AT(c, 0xecbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 000ece  inc bh
    X86_AT(c, 0xeceu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_inc(c, v, 1)); }
    // 000ed0  cmp bh, 0x20
    X86_AT(c, 0xed0u);
    (void)x86_sub(c, g8(c, 7), 0x20u, 0, 1);
    // 000ed3  jb 0xeb0
    X86_AT(c, 0xed3u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xeb0u); goto L_eb0; }
    X86_TICK(c, 48);
    // 000ed5  mov cx, word ptr gs:[esi - 8]
    X86_AT(c, 0xed5u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0xFFFFFFF8u))));
    // 000eda  or cx, 0x8000
    X86_AT(c, 0xedau);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v | 0x8000u, 2)); }
    // 000edf  mov dx, 0x440
    X86_AT(c, 0xedfu);
    s16(c, 2, 0x440u);
    // 000ee3  mov al, 0x1c
    X86_AT(c, 0xee3u);
    s8(c, 0, 0x1Cu);
    // 000ee5  out dx, al
    X86_AT(c, 0xee5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ee6  mov dx, 0x442
    X86_AT(c, 0xee6u);
    s16(c, 2, 0x442u);
    // 000eea  mov ax, cx
    X86_AT(c, 0xeeau);
    s16(c, 0, (c.r[1] & 0xFFFFu));
    // 000eed  out dx, ax
    X86_AT(c, 0xeedu);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 000eef  ret 
    X86_AT(c, 0xeefu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xec0u, "ran off the end of a function");
}
void f_00000ec1(X86Cpu& c) {
    goto L_ec1;
L_eb0:
    X86_TICK(c, 7);
    // 000eb0  cmp bh, 2
    X86_AT(c, 0xeb0u);
    (void)x86_sub(c, g8(c, 7), 0x2u, 0, 1);
    // 000eb3  je 0xecb
    X86_AT(c, 0xeb3u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 7);
    // 000eb5  cmp bh, 3
    X86_AT(c, 0xeb5u);
    (void)x86_sub(c, g8(c, 7), 0x3u, 0, 1);
    // 000eb8  je 0xecb
    X86_AT(c, 0xeb8u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 16);
    // 000eba  mov dx, 0x440
    X86_AT(c, 0xebau);
    s16(c, 2, 0x440u);
    // 000ebe  mov al, bh
    X86_AT(c, 0xebeu);
    s8(c, 0, g8(c, 7));
    // 000ec0  out dx, al
    X86_AT(c, 0xec0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
L_ec1:
    X86_TICK(c, 18);
    // 000ec1  mov dx, 0x442
    X86_AT(c, 0xec1u);
    s16(c, 2, 0x442u);
    // 000ec5  mov ax, word ptr gs:[esi]
    X86_AT(c, 0xec5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 000ec9  out dx, ax
    X86_AT(c, 0xec9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_ecb:
    X86_TICK(c, 11);
    // 000ecb  add esi, 2
    X86_AT(c, 0xecbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 000ece  inc bh
    X86_AT(c, 0xeceu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_inc(c, v, 1)); }
    // 000ed0  cmp bh, 0x20
    X86_AT(c, 0xed0u);
    (void)x86_sub(c, g8(c, 7), 0x20u, 0, 1);
    // 000ed3  jb 0xeb0
    X86_AT(c, 0xed3u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xeb0u); goto L_eb0; }
    X86_TICK(c, 48);
    // 000ed5  mov cx, word ptr gs:[esi - 8]
    X86_AT(c, 0xed5u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0xFFFFFFF8u))));
    // 000eda  or cx, 0x8000
    X86_AT(c, 0xedau);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v | 0x8000u, 2)); }
    // 000edf  mov dx, 0x440
    X86_AT(c, 0xedfu);
    s16(c, 2, 0x440u);
    // 000ee3  mov al, 0x1c
    X86_AT(c, 0xee3u);
    s8(c, 0, 0x1Cu);
    // 000ee5  out dx, al
    X86_AT(c, 0xee5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ee6  mov dx, 0x442
    X86_AT(c, 0xee6u);
    s16(c, 2, 0x442u);
    // 000eea  mov ax, cx
    X86_AT(c, 0xeeau);
    s16(c, 0, (c.r[1] & 0xFFFFu));
    // 000eed  out dx, ax
    X86_AT(c, 0xeedu);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 000eef  ret 
    X86_AT(c, 0xeefu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xec1u, "ran off the end of a function");
}
void f_00000ec5(X86Cpu& c) {
    goto L_ec5;
L_eb0:
    X86_TICK(c, 7);
    // 000eb0  cmp bh, 2
    X86_AT(c, 0xeb0u);
    (void)x86_sub(c, g8(c, 7), 0x2u, 0, 1);
    // 000eb3  je 0xecb
    X86_AT(c, 0xeb3u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 7);
    // 000eb5  cmp bh, 3
    X86_AT(c, 0xeb5u);
    (void)x86_sub(c, g8(c, 7), 0x3u, 0, 1);
    // 000eb8  je 0xecb
    X86_AT(c, 0xeb8u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 18);
    // 000eba  mov dx, 0x440
    X86_AT(c, 0xebau);
    s16(c, 2, 0x440u);
    // 000ebe  mov al, bh
    X86_AT(c, 0xebeu);
    s8(c, 0, g8(c, 7));
    // 000ec0  out dx, al
    X86_AT(c, 0xec0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ec1  mov dx, 0x442
    X86_AT(c, 0xec1u);
    s16(c, 2, 0x442u);
L_ec5:
    X86_TICK(c, 16);
    // 000ec5  mov ax, word ptr gs:[esi]
    X86_AT(c, 0xec5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 000ec9  out dx, ax
    X86_AT(c, 0xec9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_ecb:
    X86_TICK(c, 11);
    // 000ecb  add esi, 2
    X86_AT(c, 0xecbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 000ece  inc bh
    X86_AT(c, 0xeceu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_inc(c, v, 1)); }
    // 000ed0  cmp bh, 0x20
    X86_AT(c, 0xed0u);
    (void)x86_sub(c, g8(c, 7), 0x20u, 0, 1);
    // 000ed3  jb 0xeb0
    X86_AT(c, 0xed3u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xeb0u); goto L_eb0; }
    X86_TICK(c, 48);
    // 000ed5  mov cx, word ptr gs:[esi - 8]
    X86_AT(c, 0xed5u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0xFFFFFFF8u))));
    // 000eda  or cx, 0x8000
    X86_AT(c, 0xedau);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v | 0x8000u, 2)); }
    // 000edf  mov dx, 0x440
    X86_AT(c, 0xedfu);
    s16(c, 2, 0x440u);
    // 000ee3  mov al, 0x1c
    X86_AT(c, 0xee3u);
    s8(c, 0, 0x1Cu);
    // 000ee5  out dx, al
    X86_AT(c, 0xee5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ee6  mov dx, 0x442
    X86_AT(c, 0xee6u);
    s16(c, 2, 0x442u);
    // 000eea  mov ax, cx
    X86_AT(c, 0xeeau);
    s16(c, 0, (c.r[1] & 0xFFFFu));
    // 000eed  out dx, ax
    X86_AT(c, 0xeedu);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 000eef  ret 
    X86_AT(c, 0xeefu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xec5u, "ran off the end of a function");
}
void f_00000ec9(X86Cpu& c) {
    goto L_ec9;
L_eb0:
    X86_TICK(c, 7);
    // 000eb0  cmp bh, 2
    X86_AT(c, 0xeb0u);
    (void)x86_sub(c, g8(c, 7), 0x2u, 0, 1);
    // 000eb3  je 0xecb
    X86_AT(c, 0xeb3u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 7);
    // 000eb5  cmp bh, 3
    X86_AT(c, 0xeb5u);
    (void)x86_sub(c, g8(c, 7), 0x3u, 0, 1);
    // 000eb8  je 0xecb
    X86_AT(c, 0xeb8u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 22);
    // 000eba  mov dx, 0x440
    X86_AT(c, 0xebau);
    s16(c, 2, 0x440u);
    // 000ebe  mov al, bh
    X86_AT(c, 0xebeu);
    s8(c, 0, g8(c, 7));
    // 000ec0  out dx, al
    X86_AT(c, 0xec0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ec1  mov dx, 0x442
    X86_AT(c, 0xec1u);
    s16(c, 2, 0x442u);
    // 000ec5  mov ax, word ptr gs:[esi]
    X86_AT(c, 0xec5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6]))));
L_ec9:
    X86_TICK(c, 12);
    // 000ec9  out dx, ax
    X86_AT(c, 0xec9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_ecb:
    X86_TICK(c, 11);
    // 000ecb  add esi, 2
    X86_AT(c, 0xecbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 000ece  inc bh
    X86_AT(c, 0xeceu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_inc(c, v, 1)); }
    // 000ed0  cmp bh, 0x20
    X86_AT(c, 0xed0u);
    (void)x86_sub(c, g8(c, 7), 0x20u, 0, 1);
    // 000ed3  jb 0xeb0
    X86_AT(c, 0xed3u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xeb0u); goto L_eb0; }
    X86_TICK(c, 48);
    // 000ed5  mov cx, word ptr gs:[esi - 8]
    X86_AT(c, 0xed5u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0xFFFFFFF8u))));
    // 000eda  or cx, 0x8000
    X86_AT(c, 0xedau);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v | 0x8000u, 2)); }
    // 000edf  mov dx, 0x440
    X86_AT(c, 0xedfu);
    s16(c, 2, 0x440u);
    // 000ee3  mov al, 0x1c
    X86_AT(c, 0xee3u);
    s8(c, 0, 0x1Cu);
    // 000ee5  out dx, al
    X86_AT(c, 0xee5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ee6  mov dx, 0x442
    X86_AT(c, 0xee6u);
    s16(c, 2, 0x442u);
    // 000eea  mov ax, cx
    X86_AT(c, 0xeeau);
    s16(c, 0, (c.r[1] & 0xFFFFu));
    // 000eed  out dx, ax
    X86_AT(c, 0xeedu);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 000eef  ret 
    X86_AT(c, 0xeefu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xec9u, "ran off the end of a function");
}
void f_00000ecb(X86Cpu& c) {
    goto L_ecb;
L_eb0:
    X86_TICK(c, 7);
    // 000eb0  cmp bh, 2
    X86_AT(c, 0xeb0u);
    (void)x86_sub(c, g8(c, 7), 0x2u, 0, 1);
    // 000eb3  je 0xecb
    X86_AT(c, 0xeb3u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 7);
    // 000eb5  cmp bh, 3
    X86_AT(c, 0xeb5u);
    (void)x86_sub(c, g8(c, 7), 0x3u, 0, 1);
    // 000eb8  je 0xecb
    X86_AT(c, 0xeb8u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 34);
    // 000eba  mov dx, 0x440
    X86_AT(c, 0xebau);
    s16(c, 2, 0x440u);
    // 000ebe  mov al, bh
    X86_AT(c, 0xebeu);
    s8(c, 0, g8(c, 7));
    // 000ec0  out dx, al
    X86_AT(c, 0xec0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ec1  mov dx, 0x442
    X86_AT(c, 0xec1u);
    s16(c, 2, 0x442u);
    // 000ec5  mov ax, word ptr gs:[esi]
    X86_AT(c, 0xec5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 000ec9  out dx, ax
    X86_AT(c, 0xec9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_ecb:
    X86_TICK(c, 11);
    // 000ecb  add esi, 2
    X86_AT(c, 0xecbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 000ece  inc bh
    X86_AT(c, 0xeceu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_inc(c, v, 1)); }
    // 000ed0  cmp bh, 0x20
    X86_AT(c, 0xed0u);
    (void)x86_sub(c, g8(c, 7), 0x20u, 0, 1);
    // 000ed3  jb 0xeb0
    X86_AT(c, 0xed3u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xeb0u); goto L_eb0; }
    X86_TICK(c, 48);
    // 000ed5  mov cx, word ptr gs:[esi - 8]
    X86_AT(c, 0xed5u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0xFFFFFFF8u))));
    // 000eda  or cx, 0x8000
    X86_AT(c, 0xedau);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v | 0x8000u, 2)); }
    // 000edf  mov dx, 0x440
    X86_AT(c, 0xedfu);
    s16(c, 2, 0x440u);
    // 000ee3  mov al, 0x1c
    X86_AT(c, 0xee3u);
    s8(c, 0, 0x1Cu);
    // 000ee5  out dx, al
    X86_AT(c, 0xee5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ee6  mov dx, 0x442
    X86_AT(c, 0xee6u);
    s16(c, 2, 0x442u);
    // 000eea  mov ax, cx
    X86_AT(c, 0xeeau);
    s16(c, 0, (c.r[1] & 0xFFFFu));
    // 000eed  out dx, ax
    X86_AT(c, 0xeedu);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 000eef  ret 
    X86_AT(c, 0xeefu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xecbu, "ran off the end of a function");
}
void f_00000ece(X86Cpu& c) {
    goto L_ece;
L_eb0:
    X86_TICK(c, 7);
    // 000eb0  cmp bh, 2
    X86_AT(c, 0xeb0u);
    (void)x86_sub(c, g8(c, 7), 0x2u, 0, 1);
    // 000eb3  je 0xecb
    X86_AT(c, 0xeb3u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 7);
    // 000eb5  cmp bh, 3
    X86_AT(c, 0xeb5u);
    (void)x86_sub(c, g8(c, 7), 0x3u, 0, 1);
    // 000eb8  je 0xecb
    X86_AT(c, 0xeb8u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 34);
    // 000eba  mov dx, 0x440
    X86_AT(c, 0xebau);
    s16(c, 2, 0x440u);
    // 000ebe  mov al, bh
    X86_AT(c, 0xebeu);
    s8(c, 0, g8(c, 7));
    // 000ec0  out dx, al
    X86_AT(c, 0xec0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ec1  mov dx, 0x442
    X86_AT(c, 0xec1u);
    s16(c, 2, 0x442u);
    // 000ec5  mov ax, word ptr gs:[esi]
    X86_AT(c, 0xec5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 000ec9  out dx, ax
    X86_AT(c, 0xec9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_ecb:
    X86_TICK(c, 2);
    // 000ecb  add esi, 2
    X86_AT(c, 0xecbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
L_ece:
    X86_TICK(c, 9);
    // 000ece  inc bh
    X86_AT(c, 0xeceu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_inc(c, v, 1)); }
    // 000ed0  cmp bh, 0x20
    X86_AT(c, 0xed0u);
    (void)x86_sub(c, g8(c, 7), 0x20u, 0, 1);
    // 000ed3  jb 0xeb0
    X86_AT(c, 0xed3u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xeb0u); goto L_eb0; }
    X86_TICK(c, 48);
    // 000ed5  mov cx, word ptr gs:[esi - 8]
    X86_AT(c, 0xed5u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0xFFFFFFF8u))));
    // 000eda  or cx, 0x8000
    X86_AT(c, 0xedau);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v | 0x8000u, 2)); }
    // 000edf  mov dx, 0x440
    X86_AT(c, 0xedfu);
    s16(c, 2, 0x440u);
    // 000ee3  mov al, 0x1c
    X86_AT(c, 0xee3u);
    s8(c, 0, 0x1Cu);
    // 000ee5  out dx, al
    X86_AT(c, 0xee5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ee6  mov dx, 0x442
    X86_AT(c, 0xee6u);
    s16(c, 2, 0x442u);
    // 000eea  mov ax, cx
    X86_AT(c, 0xeeau);
    s16(c, 0, (c.r[1] & 0xFFFFu));
    // 000eed  out dx, ax
    X86_AT(c, 0xeedu);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 000eef  ret 
    X86_AT(c, 0xeefu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xeceu, "ran off the end of a function");
}
void f_00000ed0(X86Cpu& c) {
    goto L_ed0;
L_eb0:
    X86_TICK(c, 7);
    // 000eb0  cmp bh, 2
    X86_AT(c, 0xeb0u);
    (void)x86_sub(c, g8(c, 7), 0x2u, 0, 1);
    // 000eb3  je 0xecb
    X86_AT(c, 0xeb3u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 7);
    // 000eb5  cmp bh, 3
    X86_AT(c, 0xeb5u);
    (void)x86_sub(c, g8(c, 7), 0x3u, 0, 1);
    // 000eb8  je 0xecb
    X86_AT(c, 0xeb8u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 34);
    // 000eba  mov dx, 0x440
    X86_AT(c, 0xebau);
    s16(c, 2, 0x440u);
    // 000ebe  mov al, bh
    X86_AT(c, 0xebeu);
    s8(c, 0, g8(c, 7));
    // 000ec0  out dx, al
    X86_AT(c, 0xec0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ec1  mov dx, 0x442
    X86_AT(c, 0xec1u);
    s16(c, 2, 0x442u);
    // 000ec5  mov ax, word ptr gs:[esi]
    X86_AT(c, 0xec5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 000ec9  out dx, ax
    X86_AT(c, 0xec9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_ecb:
    X86_TICK(c, 4);
    // 000ecb  add esi, 2
    X86_AT(c, 0xecbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 000ece  inc bh
    X86_AT(c, 0xeceu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_inc(c, v, 1)); }
L_ed0:
    X86_TICK(c, 7);
    // 000ed0  cmp bh, 0x20
    X86_AT(c, 0xed0u);
    (void)x86_sub(c, g8(c, 7), 0x20u, 0, 1);
    // 000ed3  jb 0xeb0
    X86_AT(c, 0xed3u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xeb0u); goto L_eb0; }
    X86_TICK(c, 48);
    // 000ed5  mov cx, word ptr gs:[esi - 8]
    X86_AT(c, 0xed5u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0xFFFFFFF8u))));
    // 000eda  or cx, 0x8000
    X86_AT(c, 0xedau);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v | 0x8000u, 2)); }
    // 000edf  mov dx, 0x440
    X86_AT(c, 0xedfu);
    s16(c, 2, 0x440u);
    // 000ee3  mov al, 0x1c
    X86_AT(c, 0xee3u);
    s8(c, 0, 0x1Cu);
    // 000ee5  out dx, al
    X86_AT(c, 0xee5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ee6  mov dx, 0x442
    X86_AT(c, 0xee6u);
    s16(c, 2, 0x442u);
    // 000eea  mov ax, cx
    X86_AT(c, 0xeeau);
    s16(c, 0, (c.r[1] & 0xFFFFu));
    // 000eed  out dx, ax
    X86_AT(c, 0xeedu);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 000eef  ret 
    X86_AT(c, 0xeefu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xed0u, "ran off the end of a function");
}
void f_00000ed3(X86Cpu& c) {
    goto L_ed3;
L_eb0:
    X86_TICK(c, 7);
    // 000eb0  cmp bh, 2
    X86_AT(c, 0xeb0u);
    (void)x86_sub(c, g8(c, 7), 0x2u, 0, 1);
    // 000eb3  je 0xecb
    X86_AT(c, 0xeb3u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 7);
    // 000eb5  cmp bh, 3
    X86_AT(c, 0xeb5u);
    (void)x86_sub(c, g8(c, 7), 0x3u, 0, 1);
    // 000eb8  je 0xecb
    X86_AT(c, 0xeb8u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 34);
    // 000eba  mov dx, 0x440
    X86_AT(c, 0xebau);
    s16(c, 2, 0x440u);
    // 000ebe  mov al, bh
    X86_AT(c, 0xebeu);
    s8(c, 0, g8(c, 7));
    // 000ec0  out dx, al
    X86_AT(c, 0xec0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ec1  mov dx, 0x442
    X86_AT(c, 0xec1u);
    s16(c, 2, 0x442u);
    // 000ec5  mov ax, word ptr gs:[esi]
    X86_AT(c, 0xec5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 000ec9  out dx, ax
    X86_AT(c, 0xec9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_ecb:
    X86_TICK(c, 6);
    // 000ecb  add esi, 2
    X86_AT(c, 0xecbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 000ece  inc bh
    X86_AT(c, 0xeceu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_inc(c, v, 1)); }
    // 000ed0  cmp bh, 0x20
    X86_AT(c, 0xed0u);
    (void)x86_sub(c, g8(c, 7), 0x20u, 0, 1);
L_ed3:
    X86_TICK(c, 5);
    // 000ed3  jb 0xeb0
    X86_AT(c, 0xed3u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xeb0u); goto L_eb0; }
    X86_TICK(c, 48);
    // 000ed5  mov cx, word ptr gs:[esi - 8]
    X86_AT(c, 0xed5u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0xFFFFFFF8u))));
    // 000eda  or cx, 0x8000
    X86_AT(c, 0xedau);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v | 0x8000u, 2)); }
    // 000edf  mov dx, 0x440
    X86_AT(c, 0xedfu);
    s16(c, 2, 0x440u);
    // 000ee3  mov al, 0x1c
    X86_AT(c, 0xee3u);
    s8(c, 0, 0x1Cu);
    // 000ee5  out dx, al
    X86_AT(c, 0xee5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ee6  mov dx, 0x442
    X86_AT(c, 0xee6u);
    s16(c, 2, 0x442u);
    // 000eea  mov ax, cx
    X86_AT(c, 0xeeau);
    s16(c, 0, (c.r[1] & 0xFFFFu));
    // 000eed  out dx, ax
    X86_AT(c, 0xeedu);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 000eef  ret 
    X86_AT(c, 0xeefu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xed3u, "ran off the end of a function");
}
void f_00000ed5(X86Cpu& c) {
    X86_TICK(c, 48);
    // 000ed5  mov cx, word ptr gs:[esi - 8]
    X86_AT(c, 0xed5u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0xFFFFFFF8u))));
    // 000eda  or cx, 0x8000
    X86_AT(c, 0xedau);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v | 0x8000u, 2)); }
    // 000edf  mov dx, 0x440
    X86_AT(c, 0xedfu);
    s16(c, 2, 0x440u);
    // 000ee3  mov al, 0x1c
    X86_AT(c, 0xee3u);
    s8(c, 0, 0x1Cu);
    // 000ee5  out dx, al
    X86_AT(c, 0xee5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ee6  mov dx, 0x442
    X86_AT(c, 0xee6u);
    s16(c, 2, 0x442u);
    // 000eea  mov ax, cx
    X86_AT(c, 0xeeau);
    s16(c, 0, (c.r[1] & 0xFFFFu));
    // 000eed  out dx, ax
    X86_AT(c, 0xeedu);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 000eef  ret 
    X86_AT(c, 0xeefu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xed5u, "ran off the end of a function");
}
void f_00000eda(X86Cpu& c) {
    X86_TICK(c, 44);
    // 000eda  or cx, 0x8000
    X86_AT(c, 0xedau);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v | 0x8000u, 2)); }
    // 000edf  mov dx, 0x440
    X86_AT(c, 0xedfu);
    s16(c, 2, 0x440u);
    // 000ee3  mov al, 0x1c
    X86_AT(c, 0xee3u);
    s8(c, 0, 0x1Cu);
    // 000ee5  out dx, al
    X86_AT(c, 0xee5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ee6  mov dx, 0x442
    X86_AT(c, 0xee6u);
    s16(c, 2, 0x442u);
    // 000eea  mov ax, cx
    X86_AT(c, 0xeeau);
    s16(c, 0, (c.r[1] & 0xFFFFu));
    // 000eed  out dx, ax
    X86_AT(c, 0xeedu);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 000eef  ret 
    X86_AT(c, 0xeefu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xedau, "ran off the end of a function");
}
void f_00000edf(X86Cpu& c) {
    X86_TICK(c, 42);
    // 000edf  mov dx, 0x440
    X86_AT(c, 0xedfu);
    s16(c, 2, 0x440u);
    // 000ee3  mov al, 0x1c
    X86_AT(c, 0xee3u);
    s8(c, 0, 0x1Cu);
    // 000ee5  out dx, al
    X86_AT(c, 0xee5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ee6  mov dx, 0x442
    X86_AT(c, 0xee6u);
    s16(c, 2, 0x442u);
    // 000eea  mov ax, cx
    X86_AT(c, 0xeeau);
    s16(c, 0, (c.r[1] & 0xFFFFu));
    // 000eed  out dx, ax
    X86_AT(c, 0xeedu);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 000eef  ret 
    X86_AT(c, 0xeefu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xedfu, "ran off the end of a function");
}
void f_00000ee3(X86Cpu& c) {
    X86_TICK(c, 40);
    // 000ee3  mov al, 0x1c
    X86_AT(c, 0xee3u);
    s8(c, 0, 0x1Cu);
    // 000ee5  out dx, al
    X86_AT(c, 0xee5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ee6  mov dx, 0x442
    X86_AT(c, 0xee6u);
    s16(c, 2, 0x442u);
    // 000eea  mov ax, cx
    X86_AT(c, 0xeeau);
    s16(c, 0, (c.r[1] & 0xFFFFu));
    // 000eed  out dx, ax
    X86_AT(c, 0xeedu);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 000eef  ret 
    X86_AT(c, 0xeefu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xee3u, "ran off the end of a function");
}
void f_00000ee5(X86Cpu& c) {
    X86_TICK(c, 38);
    // 000ee5  out dx, al
    X86_AT(c, 0xee5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ee6  mov dx, 0x442
    X86_AT(c, 0xee6u);
    s16(c, 2, 0x442u);
    // 000eea  mov ax, cx
    X86_AT(c, 0xeeau);
    s16(c, 0, (c.r[1] & 0xFFFFu));
    // 000eed  out dx, ax
    X86_AT(c, 0xeedu);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 000eef  ret 
    X86_AT(c, 0xeefu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xee5u, "ran off the end of a function");
}
void f_00000ee6(X86Cpu& c) {
    X86_TICK(c, 26);
    // 000ee6  mov dx, 0x442
    X86_AT(c, 0xee6u);
    s16(c, 2, 0x442u);
    // 000eea  mov ax, cx
    X86_AT(c, 0xeeau);
    s16(c, 0, (c.r[1] & 0xFFFFu));
    // 000eed  out dx, ax
    X86_AT(c, 0xeedu);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 000eef  ret 
    X86_AT(c, 0xeefu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xee6u, "ran off the end of a function");
}
void f_00000eea(X86Cpu& c) {
    X86_TICK(c, 24);
    // 000eea  mov ax, cx
    X86_AT(c, 0xeeau);
    s16(c, 0, (c.r[1] & 0xFFFFu));
    // 000eed  out dx, ax
    X86_AT(c, 0xeedu);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 000eef  ret 
    X86_AT(c, 0xeefu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xeeau, "ran off the end of a function");
}
void f_00000eed(X86Cpu& c) {
    X86_TICK(c, 22);
    // 000eed  out dx, ax
    X86_AT(c, 0xeedu);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 000eef  ret 
    X86_AT(c, 0xeefu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xeedu, "ran off the end of a function");
}
void f_00000eef(X86Cpu& c) {
    X86_TICK(c, 10);
    // 000eef  ret 
    X86_AT(c, 0xeefu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xeefu, "ran off the end of a function");
}
void f_000017b0(X86Cpu& c) {
    X86_TICK(c, 79);
    // 0017b0  mov ebx, edx
    X86_AT(c, 0x17b0u);
    c.r[3] = c.r[2];
    // 0017b2  mov dx, 0x458
    X86_AT(c, 0x17b2u);
    s16(c, 2, 0x458u);
    // 0017b6  mov al, 0
    X86_AT(c, 0x17b6u);
    s8(c, 0, 0x0u);
    // 0017b8  out dx, al
    X86_AT(c, 0x17b8u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0017b9  mov dx, 0x45a
    X86_AT(c, 0x17b9u);
    s16(c, 2, 0x45Au);
    // 0017bd  mov ax, bx
    X86_AT(c, 0x17bdu);
    s16(c, 0, (c.r[3] & 0xFFFFu));
    // 0017c0  out dx, ax
    X86_AT(c, 0x17c0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 0017c2  shr ebx, 0x10
    X86_AT(c, 0x17c2u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 0017c5  mov dx, 0x458
    X86_AT(c, 0x17c5u);
    s16(c, 2, 0x458u);
    // 0017c9  mov al, 1
    X86_AT(c, 0x17c9u);
    s8(c, 0, 0x1u);
    // 0017cb  out dx, al
    X86_AT(c, 0x17cbu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0017cc  mov dx, 0x45a
    X86_AT(c, 0x17ccu);
    s16(c, 2, 0x45Au);
    // 0017d0  mov ax, bx
    X86_AT(c, 0x17d0u);
    s16(c, 0, (c.r[3] & 0xFFFFu));
    // 0017d3  out dx, ax
    X86_AT(c, 0x17d3u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 0017d5  ret 
    X86_AT(c, 0x17d5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x17b0u, "ran off the end of a function");
}
void f_000017b2(X86Cpu& c) {
    X86_TICK(c, 77);
    // 0017b2  mov dx, 0x458
    X86_AT(c, 0x17b2u);
    s16(c, 2, 0x458u);
    // 0017b6  mov al, 0
    X86_AT(c, 0x17b6u);
    s8(c, 0, 0x0u);
    // 0017b8  out dx, al
    X86_AT(c, 0x17b8u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0017b9  mov dx, 0x45a
    X86_AT(c, 0x17b9u);
    s16(c, 2, 0x45Au);
    // 0017bd  mov ax, bx
    X86_AT(c, 0x17bdu);
    s16(c, 0, (c.r[3] & 0xFFFFu));
    // 0017c0  out dx, ax
    X86_AT(c, 0x17c0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 0017c2  shr ebx, 0x10
    X86_AT(c, 0x17c2u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 0017c5  mov dx, 0x458
    X86_AT(c, 0x17c5u);
    s16(c, 2, 0x458u);
    // 0017c9  mov al, 1
    X86_AT(c, 0x17c9u);
    s8(c, 0, 0x1u);
    // 0017cb  out dx, al
    X86_AT(c, 0x17cbu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0017cc  mov dx, 0x45a
    X86_AT(c, 0x17ccu);
    s16(c, 2, 0x45Au);
    // 0017d0  mov ax, bx
    X86_AT(c, 0x17d0u);
    s16(c, 0, (c.r[3] & 0xFFFFu));
    // 0017d3  out dx, ax
    X86_AT(c, 0x17d3u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 0017d5  ret 
    X86_AT(c, 0x17d5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x17b2u, "ran off the end of a function");
}
void f_000017b6(X86Cpu& c) {
    X86_TICK(c, 75);
    // 0017b6  mov al, 0
    X86_AT(c, 0x17b6u);
    s8(c, 0, 0x0u);
    // 0017b8  out dx, al
    X86_AT(c, 0x17b8u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0017b9  mov dx, 0x45a
    X86_AT(c, 0x17b9u);
    s16(c, 2, 0x45Au);
    // 0017bd  mov ax, bx
    X86_AT(c, 0x17bdu);
    s16(c, 0, (c.r[3] & 0xFFFFu));
    // 0017c0  out dx, ax
    X86_AT(c, 0x17c0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 0017c2  shr ebx, 0x10
    X86_AT(c, 0x17c2u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 0017c5  mov dx, 0x458
    X86_AT(c, 0x17c5u);
    s16(c, 2, 0x458u);
    // 0017c9  mov al, 1
    X86_AT(c, 0x17c9u);
    s8(c, 0, 0x1u);
    // 0017cb  out dx, al
    X86_AT(c, 0x17cbu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0017cc  mov dx, 0x45a
    X86_AT(c, 0x17ccu);
    s16(c, 2, 0x45Au);
    // 0017d0  mov ax, bx
    X86_AT(c, 0x17d0u);
    s16(c, 0, (c.r[3] & 0xFFFFu));
    // 0017d3  out dx, ax
    X86_AT(c, 0x17d3u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 0017d5  ret 
    X86_AT(c, 0x17d5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x17b6u, "ran off the end of a function");
}
void f_000017b8(X86Cpu& c) {
    X86_TICK(c, 73);
    // 0017b8  out dx, al
    X86_AT(c, 0x17b8u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0017b9  mov dx, 0x45a
    X86_AT(c, 0x17b9u);
    s16(c, 2, 0x45Au);
    // 0017bd  mov ax, bx
    X86_AT(c, 0x17bdu);
    s16(c, 0, (c.r[3] & 0xFFFFu));
    // 0017c0  out dx, ax
    X86_AT(c, 0x17c0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 0017c2  shr ebx, 0x10
    X86_AT(c, 0x17c2u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 0017c5  mov dx, 0x458
    X86_AT(c, 0x17c5u);
    s16(c, 2, 0x458u);
    // 0017c9  mov al, 1
    X86_AT(c, 0x17c9u);
    s8(c, 0, 0x1u);
    // 0017cb  out dx, al
    X86_AT(c, 0x17cbu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0017cc  mov dx, 0x45a
    X86_AT(c, 0x17ccu);
    s16(c, 2, 0x45Au);
    // 0017d0  mov ax, bx
    X86_AT(c, 0x17d0u);
    s16(c, 0, (c.r[3] & 0xFFFFu));
    // 0017d3  out dx, ax
    X86_AT(c, 0x17d3u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 0017d5  ret 
    X86_AT(c, 0x17d5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x17b8u, "ran off the end of a function");
}
void f_000017b9(X86Cpu& c) {
    X86_TICK(c, 61);
    // 0017b9  mov dx, 0x45a
    X86_AT(c, 0x17b9u);
    s16(c, 2, 0x45Au);
    // 0017bd  mov ax, bx
    X86_AT(c, 0x17bdu);
    s16(c, 0, (c.r[3] & 0xFFFFu));
    // 0017c0  out dx, ax
    X86_AT(c, 0x17c0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 0017c2  shr ebx, 0x10
    X86_AT(c, 0x17c2u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 0017c5  mov dx, 0x458
    X86_AT(c, 0x17c5u);
    s16(c, 2, 0x458u);
    // 0017c9  mov al, 1
    X86_AT(c, 0x17c9u);
    s8(c, 0, 0x1u);
    // 0017cb  out dx, al
    X86_AT(c, 0x17cbu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0017cc  mov dx, 0x45a
    X86_AT(c, 0x17ccu);
    s16(c, 2, 0x45Au);
    // 0017d0  mov ax, bx
    X86_AT(c, 0x17d0u);
    s16(c, 0, (c.r[3] & 0xFFFFu));
    // 0017d3  out dx, ax
    X86_AT(c, 0x17d3u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 0017d5  ret 
    X86_AT(c, 0x17d5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x17b9u, "ran off the end of a function");
}
void f_000017bd(X86Cpu& c) {
    X86_TICK(c, 59);
    // 0017bd  mov ax, bx
    X86_AT(c, 0x17bdu);
    s16(c, 0, (c.r[3] & 0xFFFFu));
    // 0017c0  out dx, ax
    X86_AT(c, 0x17c0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 0017c2  shr ebx, 0x10
    X86_AT(c, 0x17c2u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 0017c5  mov dx, 0x458
    X86_AT(c, 0x17c5u);
    s16(c, 2, 0x458u);
    // 0017c9  mov al, 1
    X86_AT(c, 0x17c9u);
    s8(c, 0, 0x1u);
    // 0017cb  out dx, al
    X86_AT(c, 0x17cbu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0017cc  mov dx, 0x45a
    X86_AT(c, 0x17ccu);
    s16(c, 2, 0x45Au);
    // 0017d0  mov ax, bx
    X86_AT(c, 0x17d0u);
    s16(c, 0, (c.r[3] & 0xFFFFu));
    // 0017d3  out dx, ax
    X86_AT(c, 0x17d3u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 0017d5  ret 
    X86_AT(c, 0x17d5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x17bdu, "ran off the end of a function");
}
void f_000017c0(X86Cpu& c) {
    X86_TICK(c, 57);
    // 0017c0  out dx, ax
    X86_AT(c, 0x17c0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 0017c2  shr ebx, 0x10
    X86_AT(c, 0x17c2u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 0017c5  mov dx, 0x458
    X86_AT(c, 0x17c5u);
    s16(c, 2, 0x458u);
    // 0017c9  mov al, 1
    X86_AT(c, 0x17c9u);
    s8(c, 0, 0x1u);
    // 0017cb  out dx, al
    X86_AT(c, 0x17cbu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0017cc  mov dx, 0x45a
    X86_AT(c, 0x17ccu);
    s16(c, 2, 0x45Au);
    // 0017d0  mov ax, bx
    X86_AT(c, 0x17d0u);
    s16(c, 0, (c.r[3] & 0xFFFFu));
    // 0017d3  out dx, ax
    X86_AT(c, 0x17d3u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 0017d5  ret 
    X86_AT(c, 0x17d5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x17c0u, "ran off the end of a function");
}
void f_000017c2(X86Cpu& c) {
    X86_TICK(c, 45);
    // 0017c2  shr ebx, 0x10
    X86_AT(c, 0x17c2u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 0017c5  mov dx, 0x458
    X86_AT(c, 0x17c5u);
    s16(c, 2, 0x458u);
    // 0017c9  mov al, 1
    X86_AT(c, 0x17c9u);
    s8(c, 0, 0x1u);
    // 0017cb  out dx, al
    X86_AT(c, 0x17cbu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0017cc  mov dx, 0x45a
    X86_AT(c, 0x17ccu);
    s16(c, 2, 0x45Au);
    // 0017d0  mov ax, bx
    X86_AT(c, 0x17d0u);
    s16(c, 0, (c.r[3] & 0xFFFFu));
    // 0017d3  out dx, ax
    X86_AT(c, 0x17d3u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 0017d5  ret 
    X86_AT(c, 0x17d5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x17c2u, "ran off the end of a function");
}
void f_000017c5(X86Cpu& c) {
    X86_TICK(c, 42);
    // 0017c5  mov dx, 0x458
    X86_AT(c, 0x17c5u);
    s16(c, 2, 0x458u);
    // 0017c9  mov al, 1
    X86_AT(c, 0x17c9u);
    s8(c, 0, 0x1u);
    // 0017cb  out dx, al
    X86_AT(c, 0x17cbu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0017cc  mov dx, 0x45a
    X86_AT(c, 0x17ccu);
    s16(c, 2, 0x45Au);
    // 0017d0  mov ax, bx
    X86_AT(c, 0x17d0u);
    s16(c, 0, (c.r[3] & 0xFFFFu));
    // 0017d3  out dx, ax
    X86_AT(c, 0x17d3u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 0017d5  ret 
    X86_AT(c, 0x17d5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x17c5u, "ran off the end of a function");
}
void f_000017c9(X86Cpu& c) {
    X86_TICK(c, 40);
    // 0017c9  mov al, 1
    X86_AT(c, 0x17c9u);
    s8(c, 0, 0x1u);
    // 0017cb  out dx, al
    X86_AT(c, 0x17cbu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0017cc  mov dx, 0x45a
    X86_AT(c, 0x17ccu);
    s16(c, 2, 0x45Au);
    // 0017d0  mov ax, bx
    X86_AT(c, 0x17d0u);
    s16(c, 0, (c.r[3] & 0xFFFFu));
    // 0017d3  out dx, ax
    X86_AT(c, 0x17d3u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 0017d5  ret 
    X86_AT(c, 0x17d5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x17c9u, "ran off the end of a function");
}
void f_000017cb(X86Cpu& c) {
    X86_TICK(c, 38);
    // 0017cb  out dx, al
    X86_AT(c, 0x17cbu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0017cc  mov dx, 0x45a
    X86_AT(c, 0x17ccu);
    s16(c, 2, 0x45Au);
    // 0017d0  mov ax, bx
    X86_AT(c, 0x17d0u);
    s16(c, 0, (c.r[3] & 0xFFFFu));
    // 0017d3  out dx, ax
    X86_AT(c, 0x17d3u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 0017d5  ret 
    X86_AT(c, 0x17d5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x17cbu, "ran off the end of a function");
}
void f_000017cc(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0017cc  mov dx, 0x45a
    X86_AT(c, 0x17ccu);
    s16(c, 2, 0x45Au);
    // 0017d0  mov ax, bx
    X86_AT(c, 0x17d0u);
    s16(c, 0, (c.r[3] & 0xFFFFu));
    // 0017d3  out dx, ax
    X86_AT(c, 0x17d3u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 0017d5  ret 
    X86_AT(c, 0x17d5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x17ccu, "ran off the end of a function");
}
void f_000017d0(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0017d0  mov ax, bx
    X86_AT(c, 0x17d0u);
    s16(c, 0, (c.r[3] & 0xFFFFu));
    // 0017d3  out dx, ax
    X86_AT(c, 0x17d3u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 0017d5  ret 
    X86_AT(c, 0x17d5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x17d0u, "ran off the end of a function");
}
void f_000017d3(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0017d3  out dx, ax
    X86_AT(c, 0x17d3u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 0017d5  ret 
    X86_AT(c, 0x17d5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x17d3u, "ran off the end of a function");
}
void f_000017d5(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0017d5  ret 
    X86_AT(c, 0x17d5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x17d5u, "ran off the end of a function");
}
void f_000017d8(X86Cpu& c) {
    X86_TICK(c, 2);
    // 0017d8  mov dx, 0xfda0
    X86_AT(c, 0x17d8u);
    s16(c, 2, 0xFDA0u);
L_17dc:
    X86_TICK(c, 19);
    // 0017dc  in al, dx
    X86_AT(c, 0x17dcu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0017dd  test al, 1
    X86_AT(c, 0x17ddu);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0017df  jne 0x17dc
    X86_AT(c, 0x17dfu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x17dcu); goto L_17dc; }
L_17e1:
    X86_TICK(c, 19);
    // 0017e1  in al, dx
    X86_AT(c, 0x17e1u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0017e2  test al, 1
    X86_AT(c, 0x17e2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0017e4  je 0x17e1
    X86_AT(c, 0x17e4u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x17e1u); goto L_17e1; }
    X86_TICK(c, 10);
    // 0017e6  ret 
    X86_AT(c, 0x17e6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x17d8u, "ran off the end of a function");
}
void f_000017dc(X86Cpu& c) {
L_17dc:
    X86_TICK(c, 19);
    // 0017dc  in al, dx
    X86_AT(c, 0x17dcu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0017dd  test al, 1
    X86_AT(c, 0x17ddu);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0017df  jne 0x17dc
    X86_AT(c, 0x17dfu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x17dcu); goto L_17dc; }
L_17e1:
    X86_TICK(c, 19);
    // 0017e1  in al, dx
    X86_AT(c, 0x17e1u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0017e2  test al, 1
    X86_AT(c, 0x17e2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0017e4  je 0x17e1
    X86_AT(c, 0x17e4u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x17e1u); goto L_17e1; }
    X86_TICK(c, 10);
    // 0017e6  ret 
    X86_AT(c, 0x17e6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x17dcu, "ran off the end of a function");
}
void f_000017dd(X86Cpu& c) {
    goto L_17dd;
L_17dc:
    X86_TICK(c, 12);
    // 0017dc  in al, dx
    X86_AT(c, 0x17dcu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
L_17dd:
    X86_TICK(c, 7);
    // 0017dd  test al, 1
    X86_AT(c, 0x17ddu);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0017df  jne 0x17dc
    X86_AT(c, 0x17dfu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x17dcu); goto L_17dc; }
L_17e1:
    X86_TICK(c, 19);
    // 0017e1  in al, dx
    X86_AT(c, 0x17e1u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0017e2  test al, 1
    X86_AT(c, 0x17e2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0017e4  je 0x17e1
    X86_AT(c, 0x17e4u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x17e1u); goto L_17e1; }
    X86_TICK(c, 10);
    // 0017e6  ret 
    X86_AT(c, 0x17e6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x17ddu, "ran off the end of a function");
}
void f_000017df(X86Cpu& c) {
    goto L_17df;
L_17dc:
    X86_TICK(c, 14);
    // 0017dc  in al, dx
    X86_AT(c, 0x17dcu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0017dd  test al, 1
    X86_AT(c, 0x17ddu);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
L_17df:
    X86_TICK(c, 5);
    // 0017df  jne 0x17dc
    X86_AT(c, 0x17dfu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x17dcu); goto L_17dc; }
L_17e1:
    X86_TICK(c, 19);
    // 0017e1  in al, dx
    X86_AT(c, 0x17e1u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0017e2  test al, 1
    X86_AT(c, 0x17e2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0017e4  je 0x17e1
    X86_AT(c, 0x17e4u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x17e1u); goto L_17e1; }
    X86_TICK(c, 10);
    // 0017e6  ret 
    X86_AT(c, 0x17e6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x17dfu, "ran off the end of a function");
}
void f_000017e1(X86Cpu& c) {
L_17e1:
    X86_TICK(c, 19);
    // 0017e1  in al, dx
    X86_AT(c, 0x17e1u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0017e2  test al, 1
    X86_AT(c, 0x17e2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0017e4  je 0x17e1
    X86_AT(c, 0x17e4u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x17e1u); goto L_17e1; }
    X86_TICK(c, 10);
    // 0017e6  ret 
    X86_AT(c, 0x17e6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x17e1u, "ran off the end of a function");
}
void f_000017e2(X86Cpu& c) {
    goto L_17e2;
L_17e1:
    X86_TICK(c, 12);
    // 0017e1  in al, dx
    X86_AT(c, 0x17e1u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
L_17e2:
    X86_TICK(c, 7);
    // 0017e2  test al, 1
    X86_AT(c, 0x17e2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0017e4  je 0x17e1
    X86_AT(c, 0x17e4u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x17e1u); goto L_17e1; }
    X86_TICK(c, 10);
    // 0017e6  ret 
    X86_AT(c, 0x17e6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x17e2u, "ran off the end of a function");
}
void f_000017e4(X86Cpu& c) {
    goto L_17e4;
L_17e1:
    X86_TICK(c, 14);
    // 0017e1  in al, dx
    X86_AT(c, 0x17e1u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0017e2  test al, 1
    X86_AT(c, 0x17e2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
L_17e4:
    X86_TICK(c, 5);
    // 0017e4  je 0x17e1
    X86_AT(c, 0x17e4u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x17e1u); goto L_17e1; }
    X86_TICK(c, 10);
    // 0017e6  ret 
    X86_AT(c, 0x17e6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x17e4u, "ran off the end of a function");
}
void f_000017e6(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0017e6  ret 
    X86_AT(c, 0x17e6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x17e6u, "ran off the end of a function");
}
void f_000017e8(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0017e8  movzx ecx, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0x17e8u);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 0017ed  cmp cl, 1
    X86_AT(c, 0x17edu);
    (void)x86_sub(c, g8(c, 1), 0x1u, 0, 1);
    // 0017f0  ja 0x182e
    X86_AT(c, 0x17f0u);
    if (x86_cc(c, 7)) { goto L_182e; }
    X86_TICK(c, 18);
    // 0017f2  movzx ebx, byte ptr gs:[ebp + ecx*1 + 0x3c]
    X86_AT(c, 0x17f2u);
    c.r[3] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[1] + 0x3Cu)));
    // 0017f8  test byte ptr cs:[ebx + 0x19a3], 1
    X86_AT(c, 0x17f8u);
    (void)x86_logic(c, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x19A3u))) & 0x1u, 1);
    // 001800  je 0x182e
    X86_AT(c, 0x1800u);
    if (x86_cc(c, 4)) { goto L_182e; }
    X86_TICK(c, 20);
    // 001802  mov ah, byte ptr gs:[ebp + 0x102]
    X86_AT(c, 0x1802u);
    s8(c, 4, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x102u))));
    // 001809  mov bl, al
    X86_AT(c, 0x1809u);
    s8(c, 3, g8(c, 0));
    // 00180b  add ax, ax
    X86_AT(c, 0x180bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00180e  shrd ax, bx, 1
    X86_AT(c, 0x180eu);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_double(c, false, v, (c.r[3] & 0xFFFFu), 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 001813  mov bx, 0xf600
    X86_AT(c, 0x1813u);
    s16(c, 3, 0xF600u);
    // 001817  test al, 0x80
    X86_AT(c, 0x1817u);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 001819  je 0x181d
    X86_AT(c, 0x1819u);
    if (x86_cc(c, 4)) { goto L_181d; }
    X86_TICK(c, 2);
    // 00181b  mov bl, 9
    X86_AT(c, 0x181bu);
    s8(c, 3, 0x9u);
L_181d:
    X86_TICK(c, 13);
    // 00181d  and ah, bh
    X86_AT(c, 0x181du);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v & g8(c, 7), 1)); }
    // 00181f  or ah, bl
    X86_AT(c, 0x181fu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v | g8(c, 3), 1)); }
    // 001821  mov byte ptr gs:[ebp + 0x102], ah
    X86_AT(c, 0x1821u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x102u)), g8(c, 4));
    // 001828  call 0x1894
    X86_AT(c, 0x1828u);
    push32(c, 0x182du); f_00001894(c); X86_RET(c, 0x182du);
    X86_TICK(c, 10);
    // 00182d  ret 
    X86_AT(c, 0x182du);
    c.eip = pop32(c); return;
L_182e:
    X86_TICK(c, 12);
    // 00182e  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x182eu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 001833  ret 
    X86_AT(c, 0x1833u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x17e8u, "ran off the end of a function");
}
void f_00001834(X86Cpu& c) {
    goto L_1834;
L_182e:
    X86_TICK(c, 12);
    // 00182e  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x182eu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 001833  ret 
    X86_AT(c, 0x1833u);
    c.eip = pop32(c); return;
L_1834:
    X86_TICK(c, 13);
    // 001834  movzx ecx, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0x1834u);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 001839  cmp cl, 1
    X86_AT(c, 0x1839u);
    (void)x86_sub(c, g8(c, 1), 0x1u, 0, 1);
    // 00183c  ja 0x188b
    X86_AT(c, 0x183cu);
    if (x86_cc(c, 7)) { goto L_188b; }
    X86_TICK(c, 18);
    // 00183e  movzx ebx, byte ptr gs:[ebp + ecx*1 + 0x3c]
    X86_AT(c, 0x183eu);
    c.r[3] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[1] + 0x3Cu)));
    // 001844  test byte ptr cs:[ebx + 0x19a3], 2
    X86_AT(c, 0x1844u);
    (void)x86_logic(c, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x19A3u))) & 0x2u, 1);
    // 00184c  je 0x182e
    X86_AT(c, 0x184cu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x182eu); goto L_182e; }
    X86_TICK(c, 20);
    // 00184e  mov ah, byte ptr gs:[ebp + 0x102]
    X86_AT(c, 0x184eu);
    s8(c, 4, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x102u))));
    // 001855  and al, 1
    X86_AT(c, 0x1855u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x1u, 1)); }
    // 001857  add al, al
    X86_AT(c, 0x1857u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 001859  test byte ptr cs:[ebx + 0x19a3], 4
    X86_AT(c, 0x1859u);
    (void)x86_logic(c, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x19A3u))) & 0x4u, 1);
    // 001861  je 0x186e
    X86_AT(c, 0x1861u);
    if (x86_cc(c, 4)) { goto L_186e; }
    X86_TICK(c, 16);
    // 001863  mov bl, al
    X86_AT(c, 0x1863u);
    s8(c, 3, g8(c, 0));
    // 001865  shl bl, 3
    X86_AT(c, 0x1865u);
    { uint32_t v = g8(c, 3); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 3, r); }
    // 001868  or al, bl
    X86_AT(c, 0x1868u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | g8(c, 3), 1)); }
    // 00186a  mov bh, 0xc9
    X86_AT(c, 0x186au);
    s8(c, 7, 0xC9u);
    // 00186c  jmp 0x187a
    X86_AT(c, 0x186cu);
    goto L_187a;
L_186e:
    X86_TICK(c, 9);
    // 00186e  mov bh, 0xf9
    X86_AT(c, 0x186eu);
    s8(c, 7, 0xF9u);
    // 001870  test cl, cl
    X86_AT(c, 0x1870u);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 001872  je 0x1876
    X86_AT(c, 0x1872u);
    if (x86_cc(c, 4)) { goto L_1876; }
    X86_TICK(c, 2);
    // 001874  mov cl, 3
    X86_AT(c, 0x1874u);
    s8(c, 1, 0x3u);
L_1876:
    X86_TICK(c, 6);
    // 001876  rol bh, cl
    X86_AT(c, 0x1876u);
    { uint32_t v = g8(c, 7); bool w; uint32_t r = x86_shift(c, 0, v, g8(c, 1), 1, w); if (w) s8(c, 7, r); }
    // 001878  shl al, cl
    X86_AT(c, 0x1878u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 1, w); if (w) s8(c, 0, r); }
L_187a:
    X86_TICK(c, 13);
    // 00187a  and ah, bh
    X86_AT(c, 0x187au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v & g8(c, 7), 1)); }
    // 00187c  or ah, al
    X86_AT(c, 0x187cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v | g8(c, 0), 1)); }
    // 00187e  mov byte ptr gs:[ebp + 0x102], ah
    X86_AT(c, 0x187eu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x102u)), g8(c, 4));
    // 001885  call 0x1894
    X86_AT(c, 0x1885u);
    push32(c, 0x188au); f_00001894(c); X86_RET(c, 0x188au);
    X86_TICK(c, 10);
    // 00188a  ret 
    X86_AT(c, 0x188au);
    c.eip = pop32(c); return;
L_188b:
    X86_TICK(c, 12);
    // 00188b  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x188bu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 001890  ret 
    X86_AT(c, 0x1890u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1834u, "ran off the end of a function");
}
void f_00001894(X86Cpu& c) {
    X86_TICK(c, 7);
    // 001894  test ah, 0x1b
    X86_AT(c, 0x1894u);
    (void)x86_logic(c, g8(c, 4) & 0x1Bu, 1);
    // 001897  jne 0x18a0
    X86_AT(c, 0x1897u);
    if (x86_cc(c, 5)) { goto L_18a0; }
    X86_TICK(c, 9);
    // 001899  mov esi, 0x1962
    X86_AT(c, 0x1899u);
    c.r[6] = 0x1962u;
    // 00189e  jmp 0x18ce
    X86_AT(c, 0x189eu);
    goto L_18ce;
L_18a0:
    X86_TICK(c, 9);
    // 0018a0  sub esi, esi
    X86_AT(c, 0x18a0u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0018a2  test ah, 9
    X86_AT(c, 0x18a2u);
    (void)x86_logic(c, g8(c, 4) & 0x9u, 1);
    // 0018a5  je 0x18ae
    X86_AT(c, 0x18a5u);
    if (x86_cc(c, 4)) { goto L_18ae; }
    X86_TICK(c, 9);
    // 0018a7  inc esi
    X86_AT(c, 0x18a7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0018a8  test ah, 0x80
    X86_AT(c, 0x18a8u);
    (void)x86_logic(c, g8(c, 4) & 0x80u, 1);
    // 0018ab  jne 0x18ae
    X86_AT(c, 0x18abu);
    if (x86_cc(c, 5)) { goto L_18ae; }
    X86_TICK(c, 2);
    // 0018ad  inc esi
    X86_AT(c, 0x18adu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_18ae:
    X86_TICK(c, 11);
    // 0018ae  lea esi, [esi + esi*4]
    X86_AT(c, 0x18aeu);
    c.r[6] = (uint32_t)(c.r[6] + c.r[6] * 4);
    // 0018b1  lea esi, [esi*4]
    X86_AT(c, 0x18b1u);
    c.r[6] = (uint32_t)(c.r[6] * 4);
    // 0018b8  test ah, 2
    X86_AT(c, 0x18b8u);
    (void)x86_logic(c, g8(c, 4) & 0x2u, 1);
    // 0018bb  je 0x18c0
    X86_AT(c, 0x18bbu);
    if (x86_cc(c, 4)) { goto L_18c0; }
    X86_TICK(c, 2);
    // 0018bd  add esi, 0xa
    X86_AT(c, 0x18bdu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0xAu, 0, 4); }
L_18c0:
    X86_TICK(c, 7);
    // 0018c0  test ah, 0x10
    X86_AT(c, 0x18c0u);
    (void)x86_logic(c, g8(c, 4) & 0x10u, 1);
    // 0018c3  je 0x18c8
    X86_AT(c, 0x18c3u);
    if (x86_cc(c, 4)) { goto L_18c8; }
    X86_TICK(c, 2);
    // 0018c5  add esi, 5
    X86_AT(c, 0x18c5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x5u, 0, 4); }
L_18c8:
    X86_TICK(c, 2);
    // 0018c8  add esi, 0x1967
    X86_AT(c, 0x18c8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x1967u, 0, 4); }
L_18ce:
    X86_TICK(c, 51);
    // 0018ce  lea edi, [ebp + 0xf8]
    X86_AT(c, 0x18ceu);
    c.r[7] = (uint32_t)(c.r[5] + 0xF8u);
    // 0018d4  mov bx, word ptr gs:[edi]
    X86_AT(c, 0x18d4u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[7]))));
    // 0018d8  and bx, 0xbf3f
    X86_AT(c, 0x18d8u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xBF3Fu, 2)); }
    // 0018dd  or bx, word ptr cs:[esi]
    X86_AT(c, 0x18ddu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v | rd16((c.sbase[1] + (uint32_t)(c.r[6]))), 2)); }
    // 0018e1  mov word ptr gs:[edi], bx
    X86_AT(c, 0x18e1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7])), (c.r[3] & 0xFFFFu));
    // 0018e5  mov bx, word ptr gs:[edi + 4]
    X86_AT(c, 0x18e5u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x4u))));
    // 0018ea  and bx, 0xfffb
    X86_AT(c, 0x18eau);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFFBu, 2)); }
    // 0018ef  or bx, word ptr cs:[esi + 2]
    X86_AT(c, 0x18efu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v | rd16((c.sbase[1] + (uint32_t)(c.r[6] + 0x2u))), 2)); }
    // 0018f4  mov word ptr gs:[edi + 4], bx
    X86_AT(c, 0x18f4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + 0x4u)), (c.r[3] & 0xFFFFu));
    // 0018f9  mov bl, byte ptr gs:[ebp + 0x101]
    X86_AT(c, 0x18f9u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x101u))));
    // 001900  and bl, 0xf3
    X86_AT(c, 0x1900u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xF3u, 1)); }
    // 001903  or bl, byte ptr cs:[esi + 4]
    X86_AT(c, 0x1903u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | rd8((c.sbase[1] + (uint32_t)(c.r[6] + 0x4u))), 1)); }
    // 001907  mov byte ptr gs:[ebp + 0x101], bl
    X86_AT(c, 0x1907u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x101u)), g8(c, 3));
    // 00190e  call 0x17d8
    X86_AT(c, 0x190eu);
    push32(c, 0x1913u); f_000017d8(c); X86_RET(c, 0x1913u);
    X86_TICK(c, 12);
    // 001913  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0x1913u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 001918  jb 0x1933
    X86_AT(c, 0x1918u);
    if (x86_cc(c, 2)) { goto L_1933; }
    X86_TICK(c, 18);
    // 00191a  mov edx, dword ptr gs:[ebp + 0x38]
    X86_AT(c, 0x191au);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x38u)));
    // 00191e  and dl, 1
    X86_AT(c, 0x191eu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & 0x1u, 1)); }
    // 001921  test byte ptr gs:[ebp + 0x102], 0x12
    X86_AT(c, 0x1921u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x102u))) & 0x12u, 1);
    // 001929  je 0x192e
    X86_AT(c, 0x1929u);
    if (x86_cc(c, 4)) { goto L_192e; }
    X86_TICK(c, 2);
    // 00192b  or dl, 2
    X86_AT(c, 0x192bu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v | 0x2u, 1)); }
L_192e:
    X86_TICK(c, 7);
    // 00192e  call 0xe5b
    X86_AT(c, 0x192eu);
    push32(c, 0x1933u); f_00000e5b(c); X86_RET(c, 0x1933u);
L_1933:
    X86_TICK(c, 7);
    // 001933  call 0xe29
    X86_AT(c, 0x1933u);
    push32(c, 0x1938u); f_00000e29(c); X86_RET(c, 0x1938u);
    X86_TICK(c, 82);
    // 001938  mov dx, 0x440
    X86_AT(c, 0x1938u);
    s16(c, 2, 0x440u);
    // 00193c  mov al, 0x1e
    X86_AT(c, 0x193cu);
    s8(c, 0, 0x1Eu);
    // 00193e  out dx, al
    X86_AT(c, 0x193eu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 00193f  mov dx, 0x442
    X86_AT(c, 0x193fu);
    s16(c, 2, 0x442u);
    // 001943  mov ax, word ptr gs:[edi + 4]
    X86_AT(c, 0x1943u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x4u))));
    // 001948  out dx, ax
    X86_AT(c, 0x1948u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 00194a  mov cx, word ptr gs:[edi]
    X86_AT(c, 0x194au);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[7]))));
    // 00194e  or ch, 0x80
    X86_AT(c, 0x194eu);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v | 0x80u, 1)); }
    // 001951  mov dx, 0x440
    X86_AT(c, 0x1951u);
    s16(c, 2, 0x440u);
    // 001955  mov al, 0x1c
    X86_AT(c, 0x1955u);
    s8(c, 0, 0x1Cu);
    // 001957  out dx, al
    X86_AT(c, 0x1957u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 001958  mov dx, 0x442
    X86_AT(c, 0x1958u);
    s16(c, 2, 0x442u);
    // 00195c  mov ax, cx
    X86_AT(c, 0x195cu);
    s16(c, 0, (c.r[1] & 0xFFFFu));
    // 00195f  out dx, ax
    X86_AT(c, 0x195fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 001961  ret 
    X86_AT(c, 0x1961u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1894u, "ran off the end of a function");
}
void f_000019b8(X86Cpu& c) {
    goto L_19b8;
L_450:
    X86_TICK(c, 7);
    // 000450  cmp al, 0x80
    X86_AT(c, 0x450u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 000452  jae 0x4f8
    X86_AT(c, 0x452u);
    if (x86_cc(c, 3)) { goto L_4f8; }
    X86_TICK(c, 7);
    // 000458  cmp al, 2
    X86_AT(c, 0x458u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 00045a  jae 0x4ef
    X86_AT(c, 0x45au);
    if (x86_cc(c, 3)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 000460  test dx, dx
    X86_AT(c, 0x460u);
    (void)x86_logic(c, (c.r[2] & 0xFFFFu) & (c.r[2] & 0xFFFFu), 2);
    // 000463  je 0x4ef
    X86_AT(c, 0x463u);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 000469  cmp dx, 0x12
    X86_AT(c, 0x469u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x12u, 0, 2);
    // 00046d  ja 0x4a8
    X86_AT(c, 0x46du);
    if (x86_cc(c, 7)) { goto L_4a8; }
    X86_TICK(c, 7);
    // 00046f  test al, al
    X86_AT(c, 0x46fu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 000471  je 0x479
    X86_AT(c, 0x471u);
    if (x86_cc(c, 4)) { goto L_479; }
    X86_TICK(c, 7);
    // 000473  cmp dx, 0xc
    X86_AT(c, 0x473u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 000477  jae 0x4ef
    X86_AT(c, 0x477u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_479:
    X86_TICK(c, 9);
    // 000479  push eax
    X86_AT(c, 0x479u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00047a  call 0x4c2
    X86_AT(c, 0x47au);
    push32(c, 0x47fu); f_000004c2(c); X86_RET(c, 0x47fu);
    X86_TICK(c, 7);
    // 00047f  call 0xdd4
    X86_AT(c, 0x47fu);
    push32(c, 0x484u); f_00000dd4(c); X86_RET(c, 0x484u);
    X86_TICK(c, 15);
    // 000484  push eax
    X86_AT(c, 0x484u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 000485  mov bx, word ptr cs:[eax*2 + 0x176e]
    X86_AT(c, 0x485u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0x176Eu))));
    // 00048e  mov word ptr gs:[ebp + 0x100], bx
    X86_AT(c, 0x48eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u)), (c.r[3] & 0xFFFFu));
    // 000496  call 0xe10
    X86_AT(c, 0x496u);
    push32(c, 0x49bu); f_00000e10(c); X86_RET(c, 0x49bu);
    X86_TICK(c, 15);
    // 00049b  pop eax
    X86_AT(c, 0x49bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00049c  pop edx
    X86_AT(c, 0x49cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00049d  test eax, eax
    X86_AT(c, 0x49du);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00049f  je 0x4ef
    X86_AT(c, 0x49fu);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004a1  call 0xe70
    X86_AT(c, 0x4a1u);
    push32(c, 0x4a6u); f_00000e70(c); X86_RET(c, 0x4a6u);
    X86_TICK(c, 10);
    // 0004a6  ret 
    X86_AT(c, 0x4a6u);
    c.eip = pop32(c); return;
L_4a8:
    X86_TICK(c, 7);
    // 0004a8  cmp dx, 0x41
    X86_AT(c, 0x4a8u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x41u, 0, 2);
    // 0004ac  jb 0x4ef
    X86_AT(c, 0x4acu);
    if (x86_cc(c, 2)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004ae  cmp dx, 0x52
    X86_AT(c, 0x4aeu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x52u, 0, 2);
    // 0004b2  ja 0x4ef
    X86_AT(c, 0x4b2u);
    if (x86_cc(c, 7)) { goto L_4ef; }
    X86_TICK(c, 9);
    // 0004b4  sub dx, 0x40
    X86_AT(c, 0x4b4u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x40u, 0, 2)); }
    // 0004b8  test al, al
    X86_AT(c, 0x4b8u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0004ba  je 0x4c2
    X86_AT(c, 0x4bau);
    if (x86_cc(c, 4)) { goto L_4c2; }
    X86_TICK(c, 7);
    // 0004bc  cmp dx, 0xc
    X86_AT(c, 0x4bcu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 0004c0  jae 0x4ef
    X86_AT(c, 0x4c0u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_4c2:
    X86_TICK(c, 14);
    // 0004c2  movzx eax, al
    X86_AT(c, 0x4c2u);
    c.r[0] = g8(c, 0);
    // 0004c5  mov byte ptr gs:[ebp + eax*1 + 0x3c], dl
    X86_AT(c, 0x4c5u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)), g8(c, 2));
    // 0004ca  mov edi, 0x40
    X86_AT(c, 0x4cau);
    c.r[7] = 0x40u;
    // 0004cf  call 0x53c
    X86_AT(c, 0x4cfu);
    push32(c, 0x4d4u); f_0000053c(c); X86_RET(c, 0x4d4u);
    X86_TICK(c, 12);
    // 0004d4  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x4d4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 0004d8  jne 0x4e9
    X86_AT(c, 0x4d8u);
    if (x86_cc(c, 5)) { goto L_4e9; }
    X86_TICK(c, 6);
    // 0004da  lds esi, fword ptr gs:[ebp + edi*1]
    X86_AT(c, 0x4dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
L_4df:
    X86_TICK(c, 7);
    // 0004df  call 0x1bcc
    X86_AT(c, 0x4dfu);
    push32(c, 0x4e4u); f_00001bcc(c); X86_RET(c, 0x4e4u);
    X86_TICK(c, 7);
    // 0004e4  cmp ah, 0
    X86_AT(c, 0x4e4u);
    (void)x86_sub(c, g8(c, 4), 0x0u, 0, 1);
    // 0004e7  jne 0x4ef
    X86_AT(c, 0x4e7u);
    if (x86_cc(c, 5)) { goto L_4ef; }
L_4e9:
    X86_TICK(c, 7);
    // 0004e9  call 0x1a00
    X86_AT(c, 0x4e9u);
    push32(c, 0x4eeu); f_00001a00(c); X86_RET(c, 0x4eeu);
    X86_TICK(c, 10);
    // 0004ee  ret 
    X86_AT(c, 0x4eeu);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
L_4f8:
    X86_TICK(c, 9);
    // 0004f8  sub al, 0x80
    X86_AT(c, 0x4f8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x80u, 0, 1)); }
    // 0004fa  cmp al, 3
    X86_AT(c, 0x4fau);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 0004fc  ja 0x4ef
    X86_AT(c, 0x4fcu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x4efu); goto L_4ef; }
    X86_TICK(c, 9);
    // 0004fe  mov edi, 0x70
    X86_AT(c, 0x4feu);
    c.r[7] = 0x70u;
    // 000503  call 0x514
    X86_AT(c, 0x503u);
    push32(c, 0x508u); f_00000514(c); X86_RET(c, 0x508u);
    X86_TICK(c, 14);
    // 000508  add al, 0x80
    X86_AT(c, 0x508u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x80u, 0, 1)); }
    // 00050a  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x50au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 00050e  jne 0x4e9
    X86_AT(c, 0x50eu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4e9u); goto L_4e9; }
    X86_TICK(c, 7);
    // 000510  jmp 0x4df
    X86_AT(c, 0x510u);
    X86_POLL(c, 0x4dfu); goto L_4df;
L_19b8:
    X86_TICK(c, 7);
    // 0019b8  cmp ecx, 0x600
    X86_AT(c, 0x19b8u);
    (void)x86_sub(c, c.r[1], 0x600u, 0, 4);
    // 0019be  jb 0x19fa
    X86_AT(c, 0x19beu);
    if (x86_cc(c, 2)) { goto L_19fa; }
    X86_TICK(c, 9);
    // 0019c0  mov edx, 0xffffffff
    X86_AT(c, 0x19c0u);
    c.r[2] = 0xFFFFFFFFu;
    // 0019c5  call 0x17b0
    X86_AT(c, 0x19c5u);
    push32(c, 0x19cau); f_000017b0(c); X86_RET(c, 0x19cau);
    X86_TICK(c, 32);
    // 0019ca  mov ax, 0x128
    X86_AT(c, 0x19cau);
    s16(c, 0, 0x128u);
    // 0019ce  mov es, eax
    X86_AT(c, 0x19ceu);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0019d0  sub edi, edi
    X86_AT(c, 0x19d0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0019d2  mov ecx, 0x20000
    X86_AT(c, 0x19d2u);
    c.r[1] = 0x20000u;
    // 0019d7  sub eax, eax
    X86_AT(c, 0x19d7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0019d9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x19d9u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 0019db  mov byte ptr gs:[ebp + 0x3e], al
    X86_AT(c, 0x19dbu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Eu)), g8(c, 0));
    // 0019df  mov word ptr gs:[ebp + 0x3c], ax
    X86_AT(c, 0x19dfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu)), (c.r[0] & 0xFFFFu));
    // 0019e4  mov al, 1
    X86_AT(c, 0x19e4u);
    s8(c, 0, 0x1u);
    // 0019e6  mov dx, 3
    X86_AT(c, 0x19e6u);
    s16(c, 2, 0x3u);
    // 0019ea  call 0x450
    X86_AT(c, 0x19eau);
    push32(c, 0x19efu); f_00000450(c); X86_RET(c, 0x19efu);
    X86_TICK(c, 11);
    // 0019ef  mov al, 0
    X86_AT(c, 0x19efu);
    s8(c, 0, 0x0u);
    // 0019f1  mov dx, 3
    X86_AT(c, 0x19f1u);
    s16(c, 2, 0x3u);
    // 0019f5  jmp 0x450
    X86_AT(c, 0x19f5u);
    X86_POLL(c, 0x450u); goto L_450;
L_19fa:
    X86_TICK(c, 12);
    // 0019fa  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x19fau);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0019ff  ret 
    X86_AT(c, 0x19ffu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x19b8u, "ran off the end of a function");
}
void f_000019be(X86Cpu& c) {
    goto L_19be;
L_450:
    X86_TICK(c, 7);
    // 000450  cmp al, 0x80
    X86_AT(c, 0x450u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 000452  jae 0x4f8
    X86_AT(c, 0x452u);
    if (x86_cc(c, 3)) { goto L_4f8; }
    X86_TICK(c, 7);
    // 000458  cmp al, 2
    X86_AT(c, 0x458u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 00045a  jae 0x4ef
    X86_AT(c, 0x45au);
    if (x86_cc(c, 3)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 000460  test dx, dx
    X86_AT(c, 0x460u);
    (void)x86_logic(c, (c.r[2] & 0xFFFFu) & (c.r[2] & 0xFFFFu), 2);
    // 000463  je 0x4ef
    X86_AT(c, 0x463u);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 000469  cmp dx, 0x12
    X86_AT(c, 0x469u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x12u, 0, 2);
    // 00046d  ja 0x4a8
    X86_AT(c, 0x46du);
    if (x86_cc(c, 7)) { goto L_4a8; }
    X86_TICK(c, 7);
    // 00046f  test al, al
    X86_AT(c, 0x46fu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 000471  je 0x479
    X86_AT(c, 0x471u);
    if (x86_cc(c, 4)) { goto L_479; }
    X86_TICK(c, 7);
    // 000473  cmp dx, 0xc
    X86_AT(c, 0x473u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 000477  jae 0x4ef
    X86_AT(c, 0x477u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_479:
    X86_TICK(c, 9);
    // 000479  push eax
    X86_AT(c, 0x479u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00047a  call 0x4c2
    X86_AT(c, 0x47au);
    push32(c, 0x47fu); f_000004c2(c); X86_RET(c, 0x47fu);
    X86_TICK(c, 7);
    // 00047f  call 0xdd4
    X86_AT(c, 0x47fu);
    push32(c, 0x484u); f_00000dd4(c); X86_RET(c, 0x484u);
    X86_TICK(c, 15);
    // 000484  push eax
    X86_AT(c, 0x484u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 000485  mov bx, word ptr cs:[eax*2 + 0x176e]
    X86_AT(c, 0x485u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0x176Eu))));
    // 00048e  mov word ptr gs:[ebp + 0x100], bx
    X86_AT(c, 0x48eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u)), (c.r[3] & 0xFFFFu));
    // 000496  call 0xe10
    X86_AT(c, 0x496u);
    push32(c, 0x49bu); f_00000e10(c); X86_RET(c, 0x49bu);
    X86_TICK(c, 15);
    // 00049b  pop eax
    X86_AT(c, 0x49bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00049c  pop edx
    X86_AT(c, 0x49cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00049d  test eax, eax
    X86_AT(c, 0x49du);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00049f  je 0x4ef
    X86_AT(c, 0x49fu);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004a1  call 0xe70
    X86_AT(c, 0x4a1u);
    push32(c, 0x4a6u); f_00000e70(c); X86_RET(c, 0x4a6u);
    X86_TICK(c, 10);
    // 0004a6  ret 
    X86_AT(c, 0x4a6u);
    c.eip = pop32(c); return;
L_4a8:
    X86_TICK(c, 7);
    // 0004a8  cmp dx, 0x41
    X86_AT(c, 0x4a8u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x41u, 0, 2);
    // 0004ac  jb 0x4ef
    X86_AT(c, 0x4acu);
    if (x86_cc(c, 2)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004ae  cmp dx, 0x52
    X86_AT(c, 0x4aeu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x52u, 0, 2);
    // 0004b2  ja 0x4ef
    X86_AT(c, 0x4b2u);
    if (x86_cc(c, 7)) { goto L_4ef; }
    X86_TICK(c, 9);
    // 0004b4  sub dx, 0x40
    X86_AT(c, 0x4b4u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x40u, 0, 2)); }
    // 0004b8  test al, al
    X86_AT(c, 0x4b8u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0004ba  je 0x4c2
    X86_AT(c, 0x4bau);
    if (x86_cc(c, 4)) { goto L_4c2; }
    X86_TICK(c, 7);
    // 0004bc  cmp dx, 0xc
    X86_AT(c, 0x4bcu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 0004c0  jae 0x4ef
    X86_AT(c, 0x4c0u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_4c2:
    X86_TICK(c, 14);
    // 0004c2  movzx eax, al
    X86_AT(c, 0x4c2u);
    c.r[0] = g8(c, 0);
    // 0004c5  mov byte ptr gs:[ebp + eax*1 + 0x3c], dl
    X86_AT(c, 0x4c5u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)), g8(c, 2));
    // 0004ca  mov edi, 0x40
    X86_AT(c, 0x4cau);
    c.r[7] = 0x40u;
    // 0004cf  call 0x53c
    X86_AT(c, 0x4cfu);
    push32(c, 0x4d4u); f_0000053c(c); X86_RET(c, 0x4d4u);
    X86_TICK(c, 12);
    // 0004d4  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x4d4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 0004d8  jne 0x4e9
    X86_AT(c, 0x4d8u);
    if (x86_cc(c, 5)) { goto L_4e9; }
    X86_TICK(c, 6);
    // 0004da  lds esi, fword ptr gs:[ebp + edi*1]
    X86_AT(c, 0x4dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
L_4df:
    X86_TICK(c, 7);
    // 0004df  call 0x1bcc
    X86_AT(c, 0x4dfu);
    push32(c, 0x4e4u); f_00001bcc(c); X86_RET(c, 0x4e4u);
    X86_TICK(c, 7);
    // 0004e4  cmp ah, 0
    X86_AT(c, 0x4e4u);
    (void)x86_sub(c, g8(c, 4), 0x0u, 0, 1);
    // 0004e7  jne 0x4ef
    X86_AT(c, 0x4e7u);
    if (x86_cc(c, 5)) { goto L_4ef; }
L_4e9:
    X86_TICK(c, 7);
    // 0004e9  call 0x1a00
    X86_AT(c, 0x4e9u);
    push32(c, 0x4eeu); f_00001a00(c); X86_RET(c, 0x4eeu);
    X86_TICK(c, 10);
    // 0004ee  ret 
    X86_AT(c, 0x4eeu);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
L_4f8:
    X86_TICK(c, 9);
    // 0004f8  sub al, 0x80
    X86_AT(c, 0x4f8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x80u, 0, 1)); }
    // 0004fa  cmp al, 3
    X86_AT(c, 0x4fau);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 0004fc  ja 0x4ef
    X86_AT(c, 0x4fcu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x4efu); goto L_4ef; }
    X86_TICK(c, 9);
    // 0004fe  mov edi, 0x70
    X86_AT(c, 0x4feu);
    c.r[7] = 0x70u;
    // 000503  call 0x514
    X86_AT(c, 0x503u);
    push32(c, 0x508u); f_00000514(c); X86_RET(c, 0x508u);
    X86_TICK(c, 14);
    // 000508  add al, 0x80
    X86_AT(c, 0x508u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x80u, 0, 1)); }
    // 00050a  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x50au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 00050e  jne 0x4e9
    X86_AT(c, 0x50eu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4e9u); goto L_4e9; }
    X86_TICK(c, 7);
    // 000510  jmp 0x4df
    X86_AT(c, 0x510u);
    X86_POLL(c, 0x4dfu); goto L_4df;
L_19be:
    X86_TICK(c, 5);
    // 0019be  jb 0x19fa
    X86_AT(c, 0x19beu);
    if (x86_cc(c, 2)) { goto L_19fa; }
    X86_TICK(c, 9);
    // 0019c0  mov edx, 0xffffffff
    X86_AT(c, 0x19c0u);
    c.r[2] = 0xFFFFFFFFu;
    // 0019c5  call 0x17b0
    X86_AT(c, 0x19c5u);
    push32(c, 0x19cau); f_000017b0(c); X86_RET(c, 0x19cau);
    X86_TICK(c, 32);
    // 0019ca  mov ax, 0x128
    X86_AT(c, 0x19cau);
    s16(c, 0, 0x128u);
    // 0019ce  mov es, eax
    X86_AT(c, 0x19ceu);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0019d0  sub edi, edi
    X86_AT(c, 0x19d0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0019d2  mov ecx, 0x20000
    X86_AT(c, 0x19d2u);
    c.r[1] = 0x20000u;
    // 0019d7  sub eax, eax
    X86_AT(c, 0x19d7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0019d9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x19d9u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 0019db  mov byte ptr gs:[ebp + 0x3e], al
    X86_AT(c, 0x19dbu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Eu)), g8(c, 0));
    // 0019df  mov word ptr gs:[ebp + 0x3c], ax
    X86_AT(c, 0x19dfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu)), (c.r[0] & 0xFFFFu));
    // 0019e4  mov al, 1
    X86_AT(c, 0x19e4u);
    s8(c, 0, 0x1u);
    // 0019e6  mov dx, 3
    X86_AT(c, 0x19e6u);
    s16(c, 2, 0x3u);
    // 0019ea  call 0x450
    X86_AT(c, 0x19eau);
    push32(c, 0x19efu); f_00000450(c); X86_RET(c, 0x19efu);
    X86_TICK(c, 11);
    // 0019ef  mov al, 0
    X86_AT(c, 0x19efu);
    s8(c, 0, 0x0u);
    // 0019f1  mov dx, 3
    X86_AT(c, 0x19f1u);
    s16(c, 2, 0x3u);
    // 0019f5  jmp 0x450
    X86_AT(c, 0x19f5u);
    X86_POLL(c, 0x450u); goto L_450;
L_19fa:
    X86_TICK(c, 12);
    // 0019fa  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x19fau);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0019ff  ret 
    X86_AT(c, 0x19ffu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x19beu, "ran off the end of a function");
}
void f_000019c0(X86Cpu& c) {
    goto L_19c0;
L_450:
    X86_TICK(c, 7);
    // 000450  cmp al, 0x80
    X86_AT(c, 0x450u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 000452  jae 0x4f8
    X86_AT(c, 0x452u);
    if (x86_cc(c, 3)) { goto L_4f8; }
    X86_TICK(c, 7);
    // 000458  cmp al, 2
    X86_AT(c, 0x458u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 00045a  jae 0x4ef
    X86_AT(c, 0x45au);
    if (x86_cc(c, 3)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 000460  test dx, dx
    X86_AT(c, 0x460u);
    (void)x86_logic(c, (c.r[2] & 0xFFFFu) & (c.r[2] & 0xFFFFu), 2);
    // 000463  je 0x4ef
    X86_AT(c, 0x463u);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 000469  cmp dx, 0x12
    X86_AT(c, 0x469u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x12u, 0, 2);
    // 00046d  ja 0x4a8
    X86_AT(c, 0x46du);
    if (x86_cc(c, 7)) { goto L_4a8; }
    X86_TICK(c, 7);
    // 00046f  test al, al
    X86_AT(c, 0x46fu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 000471  je 0x479
    X86_AT(c, 0x471u);
    if (x86_cc(c, 4)) { goto L_479; }
    X86_TICK(c, 7);
    // 000473  cmp dx, 0xc
    X86_AT(c, 0x473u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 000477  jae 0x4ef
    X86_AT(c, 0x477u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_479:
    X86_TICK(c, 9);
    // 000479  push eax
    X86_AT(c, 0x479u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00047a  call 0x4c2
    X86_AT(c, 0x47au);
    push32(c, 0x47fu); f_000004c2(c); X86_RET(c, 0x47fu);
    X86_TICK(c, 7);
    // 00047f  call 0xdd4
    X86_AT(c, 0x47fu);
    push32(c, 0x484u); f_00000dd4(c); X86_RET(c, 0x484u);
    X86_TICK(c, 15);
    // 000484  push eax
    X86_AT(c, 0x484u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 000485  mov bx, word ptr cs:[eax*2 + 0x176e]
    X86_AT(c, 0x485u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0x176Eu))));
    // 00048e  mov word ptr gs:[ebp + 0x100], bx
    X86_AT(c, 0x48eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u)), (c.r[3] & 0xFFFFu));
    // 000496  call 0xe10
    X86_AT(c, 0x496u);
    push32(c, 0x49bu); f_00000e10(c); X86_RET(c, 0x49bu);
    X86_TICK(c, 15);
    // 00049b  pop eax
    X86_AT(c, 0x49bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00049c  pop edx
    X86_AT(c, 0x49cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00049d  test eax, eax
    X86_AT(c, 0x49du);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00049f  je 0x4ef
    X86_AT(c, 0x49fu);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004a1  call 0xe70
    X86_AT(c, 0x4a1u);
    push32(c, 0x4a6u); f_00000e70(c); X86_RET(c, 0x4a6u);
    X86_TICK(c, 10);
    // 0004a6  ret 
    X86_AT(c, 0x4a6u);
    c.eip = pop32(c); return;
L_4a8:
    X86_TICK(c, 7);
    // 0004a8  cmp dx, 0x41
    X86_AT(c, 0x4a8u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x41u, 0, 2);
    // 0004ac  jb 0x4ef
    X86_AT(c, 0x4acu);
    if (x86_cc(c, 2)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004ae  cmp dx, 0x52
    X86_AT(c, 0x4aeu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x52u, 0, 2);
    // 0004b2  ja 0x4ef
    X86_AT(c, 0x4b2u);
    if (x86_cc(c, 7)) { goto L_4ef; }
    X86_TICK(c, 9);
    // 0004b4  sub dx, 0x40
    X86_AT(c, 0x4b4u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x40u, 0, 2)); }
    // 0004b8  test al, al
    X86_AT(c, 0x4b8u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0004ba  je 0x4c2
    X86_AT(c, 0x4bau);
    if (x86_cc(c, 4)) { goto L_4c2; }
    X86_TICK(c, 7);
    // 0004bc  cmp dx, 0xc
    X86_AT(c, 0x4bcu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 0004c0  jae 0x4ef
    X86_AT(c, 0x4c0u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_4c2:
    X86_TICK(c, 14);
    // 0004c2  movzx eax, al
    X86_AT(c, 0x4c2u);
    c.r[0] = g8(c, 0);
    // 0004c5  mov byte ptr gs:[ebp + eax*1 + 0x3c], dl
    X86_AT(c, 0x4c5u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)), g8(c, 2));
    // 0004ca  mov edi, 0x40
    X86_AT(c, 0x4cau);
    c.r[7] = 0x40u;
    // 0004cf  call 0x53c
    X86_AT(c, 0x4cfu);
    push32(c, 0x4d4u); f_0000053c(c); X86_RET(c, 0x4d4u);
    X86_TICK(c, 12);
    // 0004d4  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x4d4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 0004d8  jne 0x4e9
    X86_AT(c, 0x4d8u);
    if (x86_cc(c, 5)) { goto L_4e9; }
    X86_TICK(c, 6);
    // 0004da  lds esi, fword ptr gs:[ebp + edi*1]
    X86_AT(c, 0x4dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
L_4df:
    X86_TICK(c, 7);
    // 0004df  call 0x1bcc
    X86_AT(c, 0x4dfu);
    push32(c, 0x4e4u); f_00001bcc(c); X86_RET(c, 0x4e4u);
    X86_TICK(c, 7);
    // 0004e4  cmp ah, 0
    X86_AT(c, 0x4e4u);
    (void)x86_sub(c, g8(c, 4), 0x0u, 0, 1);
    // 0004e7  jne 0x4ef
    X86_AT(c, 0x4e7u);
    if (x86_cc(c, 5)) { goto L_4ef; }
L_4e9:
    X86_TICK(c, 7);
    // 0004e9  call 0x1a00
    X86_AT(c, 0x4e9u);
    push32(c, 0x4eeu); f_00001a00(c); X86_RET(c, 0x4eeu);
    X86_TICK(c, 10);
    // 0004ee  ret 
    X86_AT(c, 0x4eeu);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
L_4f8:
    X86_TICK(c, 9);
    // 0004f8  sub al, 0x80
    X86_AT(c, 0x4f8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x80u, 0, 1)); }
    // 0004fa  cmp al, 3
    X86_AT(c, 0x4fau);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 0004fc  ja 0x4ef
    X86_AT(c, 0x4fcu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x4efu); goto L_4ef; }
    X86_TICK(c, 9);
    // 0004fe  mov edi, 0x70
    X86_AT(c, 0x4feu);
    c.r[7] = 0x70u;
    // 000503  call 0x514
    X86_AT(c, 0x503u);
    push32(c, 0x508u); f_00000514(c); X86_RET(c, 0x508u);
    X86_TICK(c, 14);
    // 000508  add al, 0x80
    X86_AT(c, 0x508u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x80u, 0, 1)); }
    // 00050a  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x50au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 00050e  jne 0x4e9
    X86_AT(c, 0x50eu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4e9u); goto L_4e9; }
    X86_TICK(c, 7);
    // 000510  jmp 0x4df
    X86_AT(c, 0x510u);
    X86_POLL(c, 0x4dfu); goto L_4df;
L_19c0:
    X86_TICK(c, 9);
    // 0019c0  mov edx, 0xffffffff
    X86_AT(c, 0x19c0u);
    c.r[2] = 0xFFFFFFFFu;
    // 0019c5  call 0x17b0
    X86_AT(c, 0x19c5u);
    push32(c, 0x19cau); f_000017b0(c); X86_RET(c, 0x19cau);
    X86_TICK(c, 32);
    // 0019ca  mov ax, 0x128
    X86_AT(c, 0x19cau);
    s16(c, 0, 0x128u);
    // 0019ce  mov es, eax
    X86_AT(c, 0x19ceu);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0019d0  sub edi, edi
    X86_AT(c, 0x19d0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0019d2  mov ecx, 0x20000
    X86_AT(c, 0x19d2u);
    c.r[1] = 0x20000u;
    // 0019d7  sub eax, eax
    X86_AT(c, 0x19d7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0019d9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x19d9u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 0019db  mov byte ptr gs:[ebp + 0x3e], al
    X86_AT(c, 0x19dbu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Eu)), g8(c, 0));
    // 0019df  mov word ptr gs:[ebp + 0x3c], ax
    X86_AT(c, 0x19dfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu)), (c.r[0] & 0xFFFFu));
    // 0019e4  mov al, 1
    X86_AT(c, 0x19e4u);
    s8(c, 0, 0x1u);
    // 0019e6  mov dx, 3
    X86_AT(c, 0x19e6u);
    s16(c, 2, 0x3u);
    // 0019ea  call 0x450
    X86_AT(c, 0x19eau);
    push32(c, 0x19efu); f_00000450(c); X86_RET(c, 0x19efu);
    X86_TICK(c, 11);
    // 0019ef  mov al, 0
    X86_AT(c, 0x19efu);
    s8(c, 0, 0x0u);
    // 0019f1  mov dx, 3
    X86_AT(c, 0x19f1u);
    s16(c, 2, 0x3u);
    // 0019f5  jmp 0x450
    X86_AT(c, 0x19f5u);
    X86_POLL(c, 0x450u); goto L_450;
    x86_fault(c, 0x19c0u, "ran off the end of a function");
}
void f_000019c5(X86Cpu& c) {
    goto L_19c5;
L_450:
    X86_TICK(c, 7);
    // 000450  cmp al, 0x80
    X86_AT(c, 0x450u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 000452  jae 0x4f8
    X86_AT(c, 0x452u);
    if (x86_cc(c, 3)) { goto L_4f8; }
    X86_TICK(c, 7);
    // 000458  cmp al, 2
    X86_AT(c, 0x458u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 00045a  jae 0x4ef
    X86_AT(c, 0x45au);
    if (x86_cc(c, 3)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 000460  test dx, dx
    X86_AT(c, 0x460u);
    (void)x86_logic(c, (c.r[2] & 0xFFFFu) & (c.r[2] & 0xFFFFu), 2);
    // 000463  je 0x4ef
    X86_AT(c, 0x463u);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 000469  cmp dx, 0x12
    X86_AT(c, 0x469u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x12u, 0, 2);
    // 00046d  ja 0x4a8
    X86_AT(c, 0x46du);
    if (x86_cc(c, 7)) { goto L_4a8; }
    X86_TICK(c, 7);
    // 00046f  test al, al
    X86_AT(c, 0x46fu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 000471  je 0x479
    X86_AT(c, 0x471u);
    if (x86_cc(c, 4)) { goto L_479; }
    X86_TICK(c, 7);
    // 000473  cmp dx, 0xc
    X86_AT(c, 0x473u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 000477  jae 0x4ef
    X86_AT(c, 0x477u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_479:
    X86_TICK(c, 9);
    // 000479  push eax
    X86_AT(c, 0x479u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00047a  call 0x4c2
    X86_AT(c, 0x47au);
    push32(c, 0x47fu); f_000004c2(c); X86_RET(c, 0x47fu);
    X86_TICK(c, 7);
    // 00047f  call 0xdd4
    X86_AT(c, 0x47fu);
    push32(c, 0x484u); f_00000dd4(c); X86_RET(c, 0x484u);
    X86_TICK(c, 15);
    // 000484  push eax
    X86_AT(c, 0x484u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 000485  mov bx, word ptr cs:[eax*2 + 0x176e]
    X86_AT(c, 0x485u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0x176Eu))));
    // 00048e  mov word ptr gs:[ebp + 0x100], bx
    X86_AT(c, 0x48eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u)), (c.r[3] & 0xFFFFu));
    // 000496  call 0xe10
    X86_AT(c, 0x496u);
    push32(c, 0x49bu); f_00000e10(c); X86_RET(c, 0x49bu);
    X86_TICK(c, 15);
    // 00049b  pop eax
    X86_AT(c, 0x49bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00049c  pop edx
    X86_AT(c, 0x49cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00049d  test eax, eax
    X86_AT(c, 0x49du);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00049f  je 0x4ef
    X86_AT(c, 0x49fu);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004a1  call 0xe70
    X86_AT(c, 0x4a1u);
    push32(c, 0x4a6u); f_00000e70(c); X86_RET(c, 0x4a6u);
    X86_TICK(c, 10);
    // 0004a6  ret 
    X86_AT(c, 0x4a6u);
    c.eip = pop32(c); return;
L_4a8:
    X86_TICK(c, 7);
    // 0004a8  cmp dx, 0x41
    X86_AT(c, 0x4a8u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x41u, 0, 2);
    // 0004ac  jb 0x4ef
    X86_AT(c, 0x4acu);
    if (x86_cc(c, 2)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004ae  cmp dx, 0x52
    X86_AT(c, 0x4aeu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x52u, 0, 2);
    // 0004b2  ja 0x4ef
    X86_AT(c, 0x4b2u);
    if (x86_cc(c, 7)) { goto L_4ef; }
    X86_TICK(c, 9);
    // 0004b4  sub dx, 0x40
    X86_AT(c, 0x4b4u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x40u, 0, 2)); }
    // 0004b8  test al, al
    X86_AT(c, 0x4b8u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0004ba  je 0x4c2
    X86_AT(c, 0x4bau);
    if (x86_cc(c, 4)) { goto L_4c2; }
    X86_TICK(c, 7);
    // 0004bc  cmp dx, 0xc
    X86_AT(c, 0x4bcu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 0004c0  jae 0x4ef
    X86_AT(c, 0x4c0u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_4c2:
    X86_TICK(c, 14);
    // 0004c2  movzx eax, al
    X86_AT(c, 0x4c2u);
    c.r[0] = g8(c, 0);
    // 0004c5  mov byte ptr gs:[ebp + eax*1 + 0x3c], dl
    X86_AT(c, 0x4c5u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)), g8(c, 2));
    // 0004ca  mov edi, 0x40
    X86_AT(c, 0x4cau);
    c.r[7] = 0x40u;
    // 0004cf  call 0x53c
    X86_AT(c, 0x4cfu);
    push32(c, 0x4d4u); f_0000053c(c); X86_RET(c, 0x4d4u);
    X86_TICK(c, 12);
    // 0004d4  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x4d4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 0004d8  jne 0x4e9
    X86_AT(c, 0x4d8u);
    if (x86_cc(c, 5)) { goto L_4e9; }
    X86_TICK(c, 6);
    // 0004da  lds esi, fword ptr gs:[ebp + edi*1]
    X86_AT(c, 0x4dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
L_4df:
    X86_TICK(c, 7);
    // 0004df  call 0x1bcc
    X86_AT(c, 0x4dfu);
    push32(c, 0x4e4u); f_00001bcc(c); X86_RET(c, 0x4e4u);
    X86_TICK(c, 7);
    // 0004e4  cmp ah, 0
    X86_AT(c, 0x4e4u);
    (void)x86_sub(c, g8(c, 4), 0x0u, 0, 1);
    // 0004e7  jne 0x4ef
    X86_AT(c, 0x4e7u);
    if (x86_cc(c, 5)) { goto L_4ef; }
L_4e9:
    X86_TICK(c, 7);
    // 0004e9  call 0x1a00
    X86_AT(c, 0x4e9u);
    push32(c, 0x4eeu); f_00001a00(c); X86_RET(c, 0x4eeu);
    X86_TICK(c, 10);
    // 0004ee  ret 
    X86_AT(c, 0x4eeu);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
L_4f8:
    X86_TICK(c, 9);
    // 0004f8  sub al, 0x80
    X86_AT(c, 0x4f8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x80u, 0, 1)); }
    // 0004fa  cmp al, 3
    X86_AT(c, 0x4fau);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 0004fc  ja 0x4ef
    X86_AT(c, 0x4fcu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x4efu); goto L_4ef; }
    X86_TICK(c, 9);
    // 0004fe  mov edi, 0x70
    X86_AT(c, 0x4feu);
    c.r[7] = 0x70u;
    // 000503  call 0x514
    X86_AT(c, 0x503u);
    push32(c, 0x508u); f_00000514(c); X86_RET(c, 0x508u);
    X86_TICK(c, 14);
    // 000508  add al, 0x80
    X86_AT(c, 0x508u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x80u, 0, 1)); }
    // 00050a  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x50au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 00050e  jne 0x4e9
    X86_AT(c, 0x50eu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4e9u); goto L_4e9; }
    X86_TICK(c, 7);
    // 000510  jmp 0x4df
    X86_AT(c, 0x510u);
    X86_POLL(c, 0x4dfu); goto L_4df;
L_19c5:
    X86_TICK(c, 7);
    // 0019c5  call 0x17b0
    X86_AT(c, 0x19c5u);
    push32(c, 0x19cau); f_000017b0(c); X86_RET(c, 0x19cau);
    X86_TICK(c, 32);
    // 0019ca  mov ax, 0x128
    X86_AT(c, 0x19cau);
    s16(c, 0, 0x128u);
    // 0019ce  mov es, eax
    X86_AT(c, 0x19ceu);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0019d0  sub edi, edi
    X86_AT(c, 0x19d0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0019d2  mov ecx, 0x20000
    X86_AT(c, 0x19d2u);
    c.r[1] = 0x20000u;
    // 0019d7  sub eax, eax
    X86_AT(c, 0x19d7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0019d9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x19d9u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 0019db  mov byte ptr gs:[ebp + 0x3e], al
    X86_AT(c, 0x19dbu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Eu)), g8(c, 0));
    // 0019df  mov word ptr gs:[ebp + 0x3c], ax
    X86_AT(c, 0x19dfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu)), (c.r[0] & 0xFFFFu));
    // 0019e4  mov al, 1
    X86_AT(c, 0x19e4u);
    s8(c, 0, 0x1u);
    // 0019e6  mov dx, 3
    X86_AT(c, 0x19e6u);
    s16(c, 2, 0x3u);
    // 0019ea  call 0x450
    X86_AT(c, 0x19eau);
    push32(c, 0x19efu); f_00000450(c); X86_RET(c, 0x19efu);
    X86_TICK(c, 11);
    // 0019ef  mov al, 0
    X86_AT(c, 0x19efu);
    s8(c, 0, 0x0u);
    // 0019f1  mov dx, 3
    X86_AT(c, 0x19f1u);
    s16(c, 2, 0x3u);
    // 0019f5  jmp 0x450
    X86_AT(c, 0x19f5u);
    X86_POLL(c, 0x450u); goto L_450;
    x86_fault(c, 0x19c5u, "ran off the end of a function");
}
void f_000019ca(X86Cpu& c) {
    goto L_19ca;
L_450:
    X86_TICK(c, 7);
    // 000450  cmp al, 0x80
    X86_AT(c, 0x450u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 000452  jae 0x4f8
    X86_AT(c, 0x452u);
    if (x86_cc(c, 3)) { goto L_4f8; }
    X86_TICK(c, 7);
    // 000458  cmp al, 2
    X86_AT(c, 0x458u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 00045a  jae 0x4ef
    X86_AT(c, 0x45au);
    if (x86_cc(c, 3)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 000460  test dx, dx
    X86_AT(c, 0x460u);
    (void)x86_logic(c, (c.r[2] & 0xFFFFu) & (c.r[2] & 0xFFFFu), 2);
    // 000463  je 0x4ef
    X86_AT(c, 0x463u);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 000469  cmp dx, 0x12
    X86_AT(c, 0x469u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x12u, 0, 2);
    // 00046d  ja 0x4a8
    X86_AT(c, 0x46du);
    if (x86_cc(c, 7)) { goto L_4a8; }
    X86_TICK(c, 7);
    // 00046f  test al, al
    X86_AT(c, 0x46fu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 000471  je 0x479
    X86_AT(c, 0x471u);
    if (x86_cc(c, 4)) { goto L_479; }
    X86_TICK(c, 7);
    // 000473  cmp dx, 0xc
    X86_AT(c, 0x473u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 000477  jae 0x4ef
    X86_AT(c, 0x477u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_479:
    X86_TICK(c, 9);
    // 000479  push eax
    X86_AT(c, 0x479u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00047a  call 0x4c2
    X86_AT(c, 0x47au);
    push32(c, 0x47fu); f_000004c2(c); X86_RET(c, 0x47fu);
    X86_TICK(c, 7);
    // 00047f  call 0xdd4
    X86_AT(c, 0x47fu);
    push32(c, 0x484u); f_00000dd4(c); X86_RET(c, 0x484u);
    X86_TICK(c, 15);
    // 000484  push eax
    X86_AT(c, 0x484u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 000485  mov bx, word ptr cs:[eax*2 + 0x176e]
    X86_AT(c, 0x485u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0x176Eu))));
    // 00048e  mov word ptr gs:[ebp + 0x100], bx
    X86_AT(c, 0x48eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u)), (c.r[3] & 0xFFFFu));
    // 000496  call 0xe10
    X86_AT(c, 0x496u);
    push32(c, 0x49bu); f_00000e10(c); X86_RET(c, 0x49bu);
    X86_TICK(c, 15);
    // 00049b  pop eax
    X86_AT(c, 0x49bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00049c  pop edx
    X86_AT(c, 0x49cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00049d  test eax, eax
    X86_AT(c, 0x49du);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00049f  je 0x4ef
    X86_AT(c, 0x49fu);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004a1  call 0xe70
    X86_AT(c, 0x4a1u);
    push32(c, 0x4a6u); f_00000e70(c); X86_RET(c, 0x4a6u);
    X86_TICK(c, 10);
    // 0004a6  ret 
    X86_AT(c, 0x4a6u);
    c.eip = pop32(c); return;
L_4a8:
    X86_TICK(c, 7);
    // 0004a8  cmp dx, 0x41
    X86_AT(c, 0x4a8u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x41u, 0, 2);
    // 0004ac  jb 0x4ef
    X86_AT(c, 0x4acu);
    if (x86_cc(c, 2)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004ae  cmp dx, 0x52
    X86_AT(c, 0x4aeu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x52u, 0, 2);
    // 0004b2  ja 0x4ef
    X86_AT(c, 0x4b2u);
    if (x86_cc(c, 7)) { goto L_4ef; }
    X86_TICK(c, 9);
    // 0004b4  sub dx, 0x40
    X86_AT(c, 0x4b4u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x40u, 0, 2)); }
    // 0004b8  test al, al
    X86_AT(c, 0x4b8u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0004ba  je 0x4c2
    X86_AT(c, 0x4bau);
    if (x86_cc(c, 4)) { goto L_4c2; }
    X86_TICK(c, 7);
    // 0004bc  cmp dx, 0xc
    X86_AT(c, 0x4bcu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 0004c0  jae 0x4ef
    X86_AT(c, 0x4c0u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_4c2:
    X86_TICK(c, 14);
    // 0004c2  movzx eax, al
    X86_AT(c, 0x4c2u);
    c.r[0] = g8(c, 0);
    // 0004c5  mov byte ptr gs:[ebp + eax*1 + 0x3c], dl
    X86_AT(c, 0x4c5u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)), g8(c, 2));
    // 0004ca  mov edi, 0x40
    X86_AT(c, 0x4cau);
    c.r[7] = 0x40u;
    // 0004cf  call 0x53c
    X86_AT(c, 0x4cfu);
    push32(c, 0x4d4u); f_0000053c(c); X86_RET(c, 0x4d4u);
    X86_TICK(c, 12);
    // 0004d4  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x4d4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 0004d8  jne 0x4e9
    X86_AT(c, 0x4d8u);
    if (x86_cc(c, 5)) { goto L_4e9; }
    X86_TICK(c, 6);
    // 0004da  lds esi, fword ptr gs:[ebp + edi*1]
    X86_AT(c, 0x4dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
L_4df:
    X86_TICK(c, 7);
    // 0004df  call 0x1bcc
    X86_AT(c, 0x4dfu);
    push32(c, 0x4e4u); f_00001bcc(c); X86_RET(c, 0x4e4u);
    X86_TICK(c, 7);
    // 0004e4  cmp ah, 0
    X86_AT(c, 0x4e4u);
    (void)x86_sub(c, g8(c, 4), 0x0u, 0, 1);
    // 0004e7  jne 0x4ef
    X86_AT(c, 0x4e7u);
    if (x86_cc(c, 5)) { goto L_4ef; }
L_4e9:
    X86_TICK(c, 7);
    // 0004e9  call 0x1a00
    X86_AT(c, 0x4e9u);
    push32(c, 0x4eeu); f_00001a00(c); X86_RET(c, 0x4eeu);
    X86_TICK(c, 10);
    // 0004ee  ret 
    X86_AT(c, 0x4eeu);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
L_4f8:
    X86_TICK(c, 9);
    // 0004f8  sub al, 0x80
    X86_AT(c, 0x4f8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x80u, 0, 1)); }
    // 0004fa  cmp al, 3
    X86_AT(c, 0x4fau);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 0004fc  ja 0x4ef
    X86_AT(c, 0x4fcu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x4efu); goto L_4ef; }
    X86_TICK(c, 9);
    // 0004fe  mov edi, 0x70
    X86_AT(c, 0x4feu);
    c.r[7] = 0x70u;
    // 000503  call 0x514
    X86_AT(c, 0x503u);
    push32(c, 0x508u); f_00000514(c); X86_RET(c, 0x508u);
    X86_TICK(c, 14);
    // 000508  add al, 0x80
    X86_AT(c, 0x508u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x80u, 0, 1)); }
    // 00050a  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x50au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 00050e  jne 0x4e9
    X86_AT(c, 0x50eu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4e9u); goto L_4e9; }
    X86_TICK(c, 7);
    // 000510  jmp 0x4df
    X86_AT(c, 0x510u);
    X86_POLL(c, 0x4dfu); goto L_4df;
L_19ca:
    X86_TICK(c, 32);
    // 0019ca  mov ax, 0x128
    X86_AT(c, 0x19cau);
    s16(c, 0, 0x128u);
    // 0019ce  mov es, eax
    X86_AT(c, 0x19ceu);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0019d0  sub edi, edi
    X86_AT(c, 0x19d0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0019d2  mov ecx, 0x20000
    X86_AT(c, 0x19d2u);
    c.r[1] = 0x20000u;
    // 0019d7  sub eax, eax
    X86_AT(c, 0x19d7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0019d9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x19d9u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 0019db  mov byte ptr gs:[ebp + 0x3e], al
    X86_AT(c, 0x19dbu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Eu)), g8(c, 0));
    // 0019df  mov word ptr gs:[ebp + 0x3c], ax
    X86_AT(c, 0x19dfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu)), (c.r[0] & 0xFFFFu));
    // 0019e4  mov al, 1
    X86_AT(c, 0x19e4u);
    s8(c, 0, 0x1u);
    // 0019e6  mov dx, 3
    X86_AT(c, 0x19e6u);
    s16(c, 2, 0x3u);
    // 0019ea  call 0x450
    X86_AT(c, 0x19eau);
    push32(c, 0x19efu); f_00000450(c); X86_RET(c, 0x19efu);
    X86_TICK(c, 11);
    // 0019ef  mov al, 0
    X86_AT(c, 0x19efu);
    s8(c, 0, 0x0u);
    // 0019f1  mov dx, 3
    X86_AT(c, 0x19f1u);
    s16(c, 2, 0x3u);
    // 0019f5  jmp 0x450
    X86_AT(c, 0x19f5u);
    X86_POLL(c, 0x450u); goto L_450;
    x86_fault(c, 0x19cau, "ran off the end of a function");
}
void f_000019ce(X86Cpu& c) {
    goto L_19ce;
L_450:
    X86_TICK(c, 7);
    // 000450  cmp al, 0x80
    X86_AT(c, 0x450u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 000452  jae 0x4f8
    X86_AT(c, 0x452u);
    if (x86_cc(c, 3)) { goto L_4f8; }
    X86_TICK(c, 7);
    // 000458  cmp al, 2
    X86_AT(c, 0x458u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 00045a  jae 0x4ef
    X86_AT(c, 0x45au);
    if (x86_cc(c, 3)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 000460  test dx, dx
    X86_AT(c, 0x460u);
    (void)x86_logic(c, (c.r[2] & 0xFFFFu) & (c.r[2] & 0xFFFFu), 2);
    // 000463  je 0x4ef
    X86_AT(c, 0x463u);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 000469  cmp dx, 0x12
    X86_AT(c, 0x469u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x12u, 0, 2);
    // 00046d  ja 0x4a8
    X86_AT(c, 0x46du);
    if (x86_cc(c, 7)) { goto L_4a8; }
    X86_TICK(c, 7);
    // 00046f  test al, al
    X86_AT(c, 0x46fu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 000471  je 0x479
    X86_AT(c, 0x471u);
    if (x86_cc(c, 4)) { goto L_479; }
    X86_TICK(c, 7);
    // 000473  cmp dx, 0xc
    X86_AT(c, 0x473u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 000477  jae 0x4ef
    X86_AT(c, 0x477u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_479:
    X86_TICK(c, 9);
    // 000479  push eax
    X86_AT(c, 0x479u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00047a  call 0x4c2
    X86_AT(c, 0x47au);
    push32(c, 0x47fu); f_000004c2(c); X86_RET(c, 0x47fu);
    X86_TICK(c, 7);
    // 00047f  call 0xdd4
    X86_AT(c, 0x47fu);
    push32(c, 0x484u); f_00000dd4(c); X86_RET(c, 0x484u);
    X86_TICK(c, 15);
    // 000484  push eax
    X86_AT(c, 0x484u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 000485  mov bx, word ptr cs:[eax*2 + 0x176e]
    X86_AT(c, 0x485u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0x176Eu))));
    // 00048e  mov word ptr gs:[ebp + 0x100], bx
    X86_AT(c, 0x48eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u)), (c.r[3] & 0xFFFFu));
    // 000496  call 0xe10
    X86_AT(c, 0x496u);
    push32(c, 0x49bu); f_00000e10(c); X86_RET(c, 0x49bu);
    X86_TICK(c, 15);
    // 00049b  pop eax
    X86_AT(c, 0x49bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00049c  pop edx
    X86_AT(c, 0x49cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00049d  test eax, eax
    X86_AT(c, 0x49du);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00049f  je 0x4ef
    X86_AT(c, 0x49fu);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004a1  call 0xe70
    X86_AT(c, 0x4a1u);
    push32(c, 0x4a6u); f_00000e70(c); X86_RET(c, 0x4a6u);
    X86_TICK(c, 10);
    // 0004a6  ret 
    X86_AT(c, 0x4a6u);
    c.eip = pop32(c); return;
L_4a8:
    X86_TICK(c, 7);
    // 0004a8  cmp dx, 0x41
    X86_AT(c, 0x4a8u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x41u, 0, 2);
    // 0004ac  jb 0x4ef
    X86_AT(c, 0x4acu);
    if (x86_cc(c, 2)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004ae  cmp dx, 0x52
    X86_AT(c, 0x4aeu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x52u, 0, 2);
    // 0004b2  ja 0x4ef
    X86_AT(c, 0x4b2u);
    if (x86_cc(c, 7)) { goto L_4ef; }
    X86_TICK(c, 9);
    // 0004b4  sub dx, 0x40
    X86_AT(c, 0x4b4u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x40u, 0, 2)); }
    // 0004b8  test al, al
    X86_AT(c, 0x4b8u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0004ba  je 0x4c2
    X86_AT(c, 0x4bau);
    if (x86_cc(c, 4)) { goto L_4c2; }
    X86_TICK(c, 7);
    // 0004bc  cmp dx, 0xc
    X86_AT(c, 0x4bcu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 0004c0  jae 0x4ef
    X86_AT(c, 0x4c0u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_4c2:
    X86_TICK(c, 14);
    // 0004c2  movzx eax, al
    X86_AT(c, 0x4c2u);
    c.r[0] = g8(c, 0);
    // 0004c5  mov byte ptr gs:[ebp + eax*1 + 0x3c], dl
    X86_AT(c, 0x4c5u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)), g8(c, 2));
    // 0004ca  mov edi, 0x40
    X86_AT(c, 0x4cau);
    c.r[7] = 0x40u;
    // 0004cf  call 0x53c
    X86_AT(c, 0x4cfu);
    push32(c, 0x4d4u); f_0000053c(c); X86_RET(c, 0x4d4u);
    X86_TICK(c, 12);
    // 0004d4  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x4d4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 0004d8  jne 0x4e9
    X86_AT(c, 0x4d8u);
    if (x86_cc(c, 5)) { goto L_4e9; }
    X86_TICK(c, 6);
    // 0004da  lds esi, fword ptr gs:[ebp + edi*1]
    X86_AT(c, 0x4dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
L_4df:
    X86_TICK(c, 7);
    // 0004df  call 0x1bcc
    X86_AT(c, 0x4dfu);
    push32(c, 0x4e4u); f_00001bcc(c); X86_RET(c, 0x4e4u);
    X86_TICK(c, 7);
    // 0004e4  cmp ah, 0
    X86_AT(c, 0x4e4u);
    (void)x86_sub(c, g8(c, 4), 0x0u, 0, 1);
    // 0004e7  jne 0x4ef
    X86_AT(c, 0x4e7u);
    if (x86_cc(c, 5)) { goto L_4ef; }
L_4e9:
    X86_TICK(c, 7);
    // 0004e9  call 0x1a00
    X86_AT(c, 0x4e9u);
    push32(c, 0x4eeu); f_00001a00(c); X86_RET(c, 0x4eeu);
    X86_TICK(c, 10);
    // 0004ee  ret 
    X86_AT(c, 0x4eeu);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
L_4f8:
    X86_TICK(c, 9);
    // 0004f8  sub al, 0x80
    X86_AT(c, 0x4f8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x80u, 0, 1)); }
    // 0004fa  cmp al, 3
    X86_AT(c, 0x4fau);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 0004fc  ja 0x4ef
    X86_AT(c, 0x4fcu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x4efu); goto L_4ef; }
    X86_TICK(c, 9);
    // 0004fe  mov edi, 0x70
    X86_AT(c, 0x4feu);
    c.r[7] = 0x70u;
    // 000503  call 0x514
    X86_AT(c, 0x503u);
    push32(c, 0x508u); f_00000514(c); X86_RET(c, 0x508u);
    X86_TICK(c, 14);
    // 000508  add al, 0x80
    X86_AT(c, 0x508u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x80u, 0, 1)); }
    // 00050a  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x50au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 00050e  jne 0x4e9
    X86_AT(c, 0x50eu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4e9u); goto L_4e9; }
    X86_TICK(c, 7);
    // 000510  jmp 0x4df
    X86_AT(c, 0x510u);
    X86_POLL(c, 0x4dfu); goto L_4df;
L_19ce:
    X86_TICK(c, 30);
    // 0019ce  mov es, eax
    X86_AT(c, 0x19ceu);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0019d0  sub edi, edi
    X86_AT(c, 0x19d0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0019d2  mov ecx, 0x20000
    X86_AT(c, 0x19d2u);
    c.r[1] = 0x20000u;
    // 0019d7  sub eax, eax
    X86_AT(c, 0x19d7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0019d9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x19d9u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 0019db  mov byte ptr gs:[ebp + 0x3e], al
    X86_AT(c, 0x19dbu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Eu)), g8(c, 0));
    // 0019df  mov word ptr gs:[ebp + 0x3c], ax
    X86_AT(c, 0x19dfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu)), (c.r[0] & 0xFFFFu));
    // 0019e4  mov al, 1
    X86_AT(c, 0x19e4u);
    s8(c, 0, 0x1u);
    // 0019e6  mov dx, 3
    X86_AT(c, 0x19e6u);
    s16(c, 2, 0x3u);
    // 0019ea  call 0x450
    X86_AT(c, 0x19eau);
    push32(c, 0x19efu); f_00000450(c); X86_RET(c, 0x19efu);
    X86_TICK(c, 11);
    // 0019ef  mov al, 0
    X86_AT(c, 0x19efu);
    s8(c, 0, 0x0u);
    // 0019f1  mov dx, 3
    X86_AT(c, 0x19f1u);
    s16(c, 2, 0x3u);
    // 0019f5  jmp 0x450
    X86_AT(c, 0x19f5u);
    X86_POLL(c, 0x450u); goto L_450;
    x86_fault(c, 0x19ceu, "ran off the end of a function");
}
}
