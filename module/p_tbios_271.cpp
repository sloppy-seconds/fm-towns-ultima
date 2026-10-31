#include "p_tbios_funcs.h"
namespace p_tbios {
void f_000104ae(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0104ae  mov byte ptr [edi + 0x4e], al
    X86_AT(c, 0x104aeu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Eu)), g8(c, 0));
    // 0104b1  cmp al, 0
    X86_AT(c, 0x104b1u);
    (void)x86_sub(c, g8(c, 0), 0x0u, 0, 1);
    // 0104b3  jne 0x104cb
    X86_AT(c, 0x104b3u);
    if (x86_cc(c, 5)) { goto L_104cb; }
    X86_TICK(c, 13);
    // 0104b5  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x104b5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0104bc  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x104bcu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0104c2  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x104c2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0104c9  jmp 0x104fd
    X86_AT(c, 0x104c9u);
    goto L_104fd;
L_104cb:
    X86_TICK(c, 40);
    // 0104cb  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x104cbu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0104ce  mov bx, word ptr [ebp + 0x24]
    X86_AT(c, 0x104ceu);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u))));
    // 0104d2  mov gs, ebx
    X86_AT(c, 0x104d2u);
    x86_load_seg(c, 5, (c.r[3] & 0xFFFFu) & 0xFFFFu);
    // 0104d4  movzx dx, byte ptr gs:[ecx]
    X86_AT(c, 0x104d4u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1]))));
    // 0104d9  shl dx, 3
    X86_AT(c, 0x104d9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 2, r); }
    // 0104dd  dec dx
    X86_AT(c, 0x104ddu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104df  mov word ptr [edi + 0x3a], dx
    X86_AT(c, 0x104dfu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), (c.r[2] & 0xFFFFu));
    // 0104e3  movzx dx, byte ptr gs:[ecx + 1]
    X86_AT(c, 0x104e3u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1] + 0x1u))));
    // 0104e9  dec dx
    X86_AT(c, 0x104e9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104eb  mov word ptr [edi + 0x3c], dx
    X86_AT(c, 0x104ebu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Cu)), (c.r[2] & 0xFFFFu));
    // 0104ef  cmp al, 2
    X86_AT(c, 0x104efu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0104f1  jb 0x104f6
    X86_AT(c, 0x104f1u);
    if (x86_cc(c, 2)) { goto L_104f6; }
    X86_TICK(c, 2);
    // 0104f3  add ecx, 2
    X86_AT(c, 0x104f3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x2u, 0, 4); }
L_104f6:
    X86_TICK(c, 4);
    // 0104f6  mov dword ptr [edi + 0x34], ecx
    X86_AT(c, 0x104f6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), c.r[1]);
    // 0104f9  mov word ptr [edi + 0x38], bx
    X86_AT(c, 0x104f9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), (c.r[3] & 0xFFFFu));
L_104fd:
    X86_TICK(c, 12);
    // 0104fd  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x104fdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010501  je 0x10508
    X86_AT(c, 0x10501u);
    if (x86_cc(c, 4)) { goto L_10508; }
    X86_TICK(c, 7);
    // 010503  call 0x10bd0
    X86_AT(c, 0x10503u);
    push32(c, 0x10508u); f_00010bd0(c); X86_RET(c, 0x10508u);
L_10508:
    X86_TICK(c, 16);
    // 010508  popfd 
    X86_AT(c, 0x10508u);
    x86_popfd(c, 4);
    // 010509  ret 
    X86_AT(c, 0x10509u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x104aeu, "ran off the end of a function");
}
void f_000104b1(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0104b1  cmp al, 0
    X86_AT(c, 0x104b1u);
    (void)x86_sub(c, g8(c, 0), 0x0u, 0, 1);
    // 0104b3  jne 0x104cb
    X86_AT(c, 0x104b3u);
    if (x86_cc(c, 5)) { goto L_104cb; }
    X86_TICK(c, 13);
    // 0104b5  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x104b5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0104bc  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x104bcu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0104c2  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x104c2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0104c9  jmp 0x104fd
    X86_AT(c, 0x104c9u);
    goto L_104fd;
L_104cb:
    X86_TICK(c, 40);
    // 0104cb  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x104cbu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0104ce  mov bx, word ptr [ebp + 0x24]
    X86_AT(c, 0x104ceu);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u))));
    // 0104d2  mov gs, ebx
    X86_AT(c, 0x104d2u);
    x86_load_seg(c, 5, (c.r[3] & 0xFFFFu) & 0xFFFFu);
    // 0104d4  movzx dx, byte ptr gs:[ecx]
    X86_AT(c, 0x104d4u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1]))));
    // 0104d9  shl dx, 3
    X86_AT(c, 0x104d9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 2, r); }
    // 0104dd  dec dx
    X86_AT(c, 0x104ddu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104df  mov word ptr [edi + 0x3a], dx
    X86_AT(c, 0x104dfu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), (c.r[2] & 0xFFFFu));
    // 0104e3  movzx dx, byte ptr gs:[ecx + 1]
    X86_AT(c, 0x104e3u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1] + 0x1u))));
    // 0104e9  dec dx
    X86_AT(c, 0x104e9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104eb  mov word ptr [edi + 0x3c], dx
    X86_AT(c, 0x104ebu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Cu)), (c.r[2] & 0xFFFFu));
    // 0104ef  cmp al, 2
    X86_AT(c, 0x104efu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0104f1  jb 0x104f6
    X86_AT(c, 0x104f1u);
    if (x86_cc(c, 2)) { goto L_104f6; }
    X86_TICK(c, 2);
    // 0104f3  add ecx, 2
    X86_AT(c, 0x104f3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x2u, 0, 4); }
L_104f6:
    X86_TICK(c, 4);
    // 0104f6  mov dword ptr [edi + 0x34], ecx
    X86_AT(c, 0x104f6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), c.r[1]);
    // 0104f9  mov word ptr [edi + 0x38], bx
    X86_AT(c, 0x104f9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), (c.r[3] & 0xFFFFu));
L_104fd:
    X86_TICK(c, 12);
    // 0104fd  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x104fdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010501  je 0x10508
    X86_AT(c, 0x10501u);
    if (x86_cc(c, 4)) { goto L_10508; }
    X86_TICK(c, 7);
    // 010503  call 0x10bd0
    X86_AT(c, 0x10503u);
    push32(c, 0x10508u); f_00010bd0(c); X86_RET(c, 0x10508u);
L_10508:
    X86_TICK(c, 16);
    // 010508  popfd 
    X86_AT(c, 0x10508u);
    x86_popfd(c, 4);
    // 010509  ret 
    X86_AT(c, 0x10509u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x104b1u, "ran off the end of a function");
}
void f_000104b3(X86Cpu& c) {
    X86_TICK(c, 5);
    // 0104b3  jne 0x104cb
    X86_AT(c, 0x104b3u);
    if (x86_cc(c, 5)) { goto L_104cb; }
    X86_TICK(c, 13);
    // 0104b5  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x104b5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0104bc  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x104bcu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0104c2  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x104c2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0104c9  jmp 0x104fd
    X86_AT(c, 0x104c9u);
    goto L_104fd;
L_104cb:
    X86_TICK(c, 40);
    // 0104cb  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x104cbu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0104ce  mov bx, word ptr [ebp + 0x24]
    X86_AT(c, 0x104ceu);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u))));
    // 0104d2  mov gs, ebx
    X86_AT(c, 0x104d2u);
    x86_load_seg(c, 5, (c.r[3] & 0xFFFFu) & 0xFFFFu);
    // 0104d4  movzx dx, byte ptr gs:[ecx]
    X86_AT(c, 0x104d4u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1]))));
    // 0104d9  shl dx, 3
    X86_AT(c, 0x104d9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 2, r); }
    // 0104dd  dec dx
    X86_AT(c, 0x104ddu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104df  mov word ptr [edi + 0x3a], dx
    X86_AT(c, 0x104dfu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), (c.r[2] & 0xFFFFu));
    // 0104e3  movzx dx, byte ptr gs:[ecx + 1]
    X86_AT(c, 0x104e3u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1] + 0x1u))));
    // 0104e9  dec dx
    X86_AT(c, 0x104e9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104eb  mov word ptr [edi + 0x3c], dx
    X86_AT(c, 0x104ebu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Cu)), (c.r[2] & 0xFFFFu));
    // 0104ef  cmp al, 2
    X86_AT(c, 0x104efu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0104f1  jb 0x104f6
    X86_AT(c, 0x104f1u);
    if (x86_cc(c, 2)) { goto L_104f6; }
    X86_TICK(c, 2);
    // 0104f3  add ecx, 2
    X86_AT(c, 0x104f3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x2u, 0, 4); }
L_104f6:
    X86_TICK(c, 4);
    // 0104f6  mov dword ptr [edi + 0x34], ecx
    X86_AT(c, 0x104f6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), c.r[1]);
    // 0104f9  mov word ptr [edi + 0x38], bx
    X86_AT(c, 0x104f9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), (c.r[3] & 0xFFFFu));
L_104fd:
    X86_TICK(c, 12);
    // 0104fd  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x104fdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010501  je 0x10508
    X86_AT(c, 0x10501u);
    if (x86_cc(c, 4)) { goto L_10508; }
    X86_TICK(c, 7);
    // 010503  call 0x10bd0
    X86_AT(c, 0x10503u);
    push32(c, 0x10508u); f_00010bd0(c); X86_RET(c, 0x10508u);
L_10508:
    X86_TICK(c, 16);
    // 010508  popfd 
    X86_AT(c, 0x10508u);
    x86_popfd(c, 4);
    // 010509  ret 
    X86_AT(c, 0x10509u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x104b3u, "ran off the end of a function");
}
void f_000104cb(X86Cpu& c) {
    X86_TICK(c, 40);
    // 0104cb  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x104cbu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0104ce  mov bx, word ptr [ebp + 0x24]
    X86_AT(c, 0x104ceu);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u))));
    // 0104d2  mov gs, ebx
    X86_AT(c, 0x104d2u);
    x86_load_seg(c, 5, (c.r[3] & 0xFFFFu) & 0xFFFFu);
    // 0104d4  movzx dx, byte ptr gs:[ecx]
    X86_AT(c, 0x104d4u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1]))));
    // 0104d9  shl dx, 3
    X86_AT(c, 0x104d9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 2, r); }
    // 0104dd  dec dx
    X86_AT(c, 0x104ddu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104df  mov word ptr [edi + 0x3a], dx
    X86_AT(c, 0x104dfu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), (c.r[2] & 0xFFFFu));
    // 0104e3  movzx dx, byte ptr gs:[ecx + 1]
    X86_AT(c, 0x104e3u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1] + 0x1u))));
    // 0104e9  dec dx
    X86_AT(c, 0x104e9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104eb  mov word ptr [edi + 0x3c], dx
    X86_AT(c, 0x104ebu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Cu)), (c.r[2] & 0xFFFFu));
    // 0104ef  cmp al, 2
    X86_AT(c, 0x104efu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0104f1  jb 0x104f6
    X86_AT(c, 0x104f1u);
    if (x86_cc(c, 2)) { goto L_104f6; }
    X86_TICK(c, 2);
    // 0104f3  add ecx, 2
    X86_AT(c, 0x104f3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x2u, 0, 4); }
L_104f6:
    X86_TICK(c, 16);
    // 0104f6  mov dword ptr [edi + 0x34], ecx
    X86_AT(c, 0x104f6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), c.r[1]);
    // 0104f9  mov word ptr [edi + 0x38], bx
    X86_AT(c, 0x104f9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), (c.r[3] & 0xFFFFu));
    // 0104fd  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x104fdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010501  je 0x10508
    X86_AT(c, 0x10501u);
    if (x86_cc(c, 4)) { goto L_10508; }
    X86_TICK(c, 7);
    // 010503  call 0x10bd0
    X86_AT(c, 0x10503u);
    push32(c, 0x10508u); f_00010bd0(c); X86_RET(c, 0x10508u);
L_10508:
    X86_TICK(c, 16);
    // 010508  popfd 
    X86_AT(c, 0x10508u);
    x86_popfd(c, 4);
    // 010509  ret 
    X86_AT(c, 0x10509u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x104cbu, "ran off the end of a function");
}
void f_000104ce(X86Cpu& c) {
    X86_TICK(c, 36);
    // 0104ce  mov bx, word ptr [ebp + 0x24]
    X86_AT(c, 0x104ceu);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u))));
    // 0104d2  mov gs, ebx
    X86_AT(c, 0x104d2u);
    x86_load_seg(c, 5, (c.r[3] & 0xFFFFu) & 0xFFFFu);
    // 0104d4  movzx dx, byte ptr gs:[ecx]
    X86_AT(c, 0x104d4u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1]))));
    // 0104d9  shl dx, 3
    X86_AT(c, 0x104d9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 2, r); }
    // 0104dd  dec dx
    X86_AT(c, 0x104ddu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104df  mov word ptr [edi + 0x3a], dx
    X86_AT(c, 0x104dfu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), (c.r[2] & 0xFFFFu));
    // 0104e3  movzx dx, byte ptr gs:[ecx + 1]
    X86_AT(c, 0x104e3u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1] + 0x1u))));
    // 0104e9  dec dx
    X86_AT(c, 0x104e9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104eb  mov word ptr [edi + 0x3c], dx
    X86_AT(c, 0x104ebu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Cu)), (c.r[2] & 0xFFFFu));
    // 0104ef  cmp al, 2
    X86_AT(c, 0x104efu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0104f1  jb 0x104f6
    X86_AT(c, 0x104f1u);
    if (x86_cc(c, 2)) { goto L_104f6; }
    X86_TICK(c, 2);
    // 0104f3  add ecx, 2
    X86_AT(c, 0x104f3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x2u, 0, 4); }
L_104f6:
    X86_TICK(c, 16);
    // 0104f6  mov dword ptr [edi + 0x34], ecx
    X86_AT(c, 0x104f6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), c.r[1]);
    // 0104f9  mov word ptr [edi + 0x38], bx
    X86_AT(c, 0x104f9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), (c.r[3] & 0xFFFFu));
    // 0104fd  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x104fdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010501  je 0x10508
    X86_AT(c, 0x10501u);
    if (x86_cc(c, 4)) { goto L_10508; }
    X86_TICK(c, 7);
    // 010503  call 0x10bd0
    X86_AT(c, 0x10503u);
    push32(c, 0x10508u); f_00010bd0(c); X86_RET(c, 0x10508u);
L_10508:
    X86_TICK(c, 16);
    // 010508  popfd 
    X86_AT(c, 0x10508u);
    x86_popfd(c, 4);
    // 010509  ret 
    X86_AT(c, 0x10509u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x104ceu, "ran off the end of a function");
}
void f_000104d2(X86Cpu& c) {
    X86_TICK(c, 32);
    // 0104d2  mov gs, ebx
    X86_AT(c, 0x104d2u);
    x86_load_seg(c, 5, (c.r[3] & 0xFFFFu) & 0xFFFFu);
    // 0104d4  movzx dx, byte ptr gs:[ecx]
    X86_AT(c, 0x104d4u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1]))));
    // 0104d9  shl dx, 3
    X86_AT(c, 0x104d9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 2, r); }
    // 0104dd  dec dx
    X86_AT(c, 0x104ddu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104df  mov word ptr [edi + 0x3a], dx
    X86_AT(c, 0x104dfu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), (c.r[2] & 0xFFFFu));
    // 0104e3  movzx dx, byte ptr gs:[ecx + 1]
    X86_AT(c, 0x104e3u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1] + 0x1u))));
    // 0104e9  dec dx
    X86_AT(c, 0x104e9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104eb  mov word ptr [edi + 0x3c], dx
    X86_AT(c, 0x104ebu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Cu)), (c.r[2] & 0xFFFFu));
    // 0104ef  cmp al, 2
    X86_AT(c, 0x104efu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0104f1  jb 0x104f6
    X86_AT(c, 0x104f1u);
    if (x86_cc(c, 2)) { goto L_104f6; }
    X86_TICK(c, 2);
    // 0104f3  add ecx, 2
    X86_AT(c, 0x104f3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x2u, 0, 4); }
L_104f6:
    X86_TICK(c, 16);
    // 0104f6  mov dword ptr [edi + 0x34], ecx
    X86_AT(c, 0x104f6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), c.r[1]);
    // 0104f9  mov word ptr [edi + 0x38], bx
    X86_AT(c, 0x104f9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), (c.r[3] & 0xFFFFu));
    // 0104fd  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x104fdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010501  je 0x10508
    X86_AT(c, 0x10501u);
    if (x86_cc(c, 4)) { goto L_10508; }
    X86_TICK(c, 7);
    // 010503  call 0x10bd0
    X86_AT(c, 0x10503u);
    push32(c, 0x10508u); f_00010bd0(c); X86_RET(c, 0x10508u);
L_10508:
    X86_TICK(c, 16);
    // 010508  popfd 
    X86_AT(c, 0x10508u);
    x86_popfd(c, 4);
    // 010509  ret 
    X86_AT(c, 0x10509u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x104d2u, "ran off the end of a function");
}
void f_000104d4(X86Cpu& c) {
    X86_TICK(c, 30);
    // 0104d4  movzx dx, byte ptr gs:[ecx]
    X86_AT(c, 0x104d4u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1]))));
    // 0104d9  shl dx, 3
    X86_AT(c, 0x104d9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 2, r); }
    // 0104dd  dec dx
    X86_AT(c, 0x104ddu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104df  mov word ptr [edi + 0x3a], dx
    X86_AT(c, 0x104dfu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), (c.r[2] & 0xFFFFu));
    // 0104e3  movzx dx, byte ptr gs:[ecx + 1]
    X86_AT(c, 0x104e3u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1] + 0x1u))));
    // 0104e9  dec dx
    X86_AT(c, 0x104e9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104eb  mov word ptr [edi + 0x3c], dx
    X86_AT(c, 0x104ebu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Cu)), (c.r[2] & 0xFFFFu));
    // 0104ef  cmp al, 2
    X86_AT(c, 0x104efu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0104f1  jb 0x104f6
    X86_AT(c, 0x104f1u);
    if (x86_cc(c, 2)) { goto L_104f6; }
    X86_TICK(c, 2);
    // 0104f3  add ecx, 2
    X86_AT(c, 0x104f3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x2u, 0, 4); }
L_104f6:
    X86_TICK(c, 16);
    // 0104f6  mov dword ptr [edi + 0x34], ecx
    X86_AT(c, 0x104f6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), c.r[1]);
    // 0104f9  mov word ptr [edi + 0x38], bx
    X86_AT(c, 0x104f9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), (c.r[3] & 0xFFFFu));
    // 0104fd  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x104fdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010501  je 0x10508
    X86_AT(c, 0x10501u);
    if (x86_cc(c, 4)) { goto L_10508; }
    X86_TICK(c, 7);
    // 010503  call 0x10bd0
    X86_AT(c, 0x10503u);
    push32(c, 0x10508u); f_00010bd0(c); X86_RET(c, 0x10508u);
L_10508:
    X86_TICK(c, 16);
    // 010508  popfd 
    X86_AT(c, 0x10508u);
    x86_popfd(c, 4);
    // 010509  ret 
    X86_AT(c, 0x10509u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x104d4u, "ran off the end of a function");
}
void f_000104d9(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0104d9  shl dx, 3
    X86_AT(c, 0x104d9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 2, r); }
    // 0104dd  dec dx
    X86_AT(c, 0x104ddu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104df  mov word ptr [edi + 0x3a], dx
    X86_AT(c, 0x104dfu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), (c.r[2] & 0xFFFFu));
    // 0104e3  movzx dx, byte ptr gs:[ecx + 1]
    X86_AT(c, 0x104e3u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1] + 0x1u))));
    // 0104e9  dec dx
    X86_AT(c, 0x104e9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104eb  mov word ptr [edi + 0x3c], dx
    X86_AT(c, 0x104ebu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Cu)), (c.r[2] & 0xFFFFu));
    // 0104ef  cmp al, 2
    X86_AT(c, 0x104efu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0104f1  jb 0x104f6
    X86_AT(c, 0x104f1u);
    if (x86_cc(c, 2)) { goto L_104f6; }
    X86_TICK(c, 2);
    // 0104f3  add ecx, 2
    X86_AT(c, 0x104f3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x2u, 0, 4); }
L_104f6:
    X86_TICK(c, 16);
    // 0104f6  mov dword ptr [edi + 0x34], ecx
    X86_AT(c, 0x104f6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), c.r[1]);
    // 0104f9  mov word ptr [edi + 0x38], bx
    X86_AT(c, 0x104f9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), (c.r[3] & 0xFFFFu));
    // 0104fd  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x104fdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010501  je 0x10508
    X86_AT(c, 0x10501u);
    if (x86_cc(c, 4)) { goto L_10508; }
    X86_TICK(c, 7);
    // 010503  call 0x10bd0
    X86_AT(c, 0x10503u);
    push32(c, 0x10508u); f_00010bd0(c); X86_RET(c, 0x10508u);
L_10508:
    X86_TICK(c, 16);
    // 010508  popfd 
    X86_AT(c, 0x10508u);
    x86_popfd(c, 4);
    // 010509  ret 
    X86_AT(c, 0x10509u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x104d9u, "ran off the end of a function");
}
void f_000104dd(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0104dd  dec dx
    X86_AT(c, 0x104ddu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104df  mov word ptr [edi + 0x3a], dx
    X86_AT(c, 0x104dfu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), (c.r[2] & 0xFFFFu));
    // 0104e3  movzx dx, byte ptr gs:[ecx + 1]
    X86_AT(c, 0x104e3u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1] + 0x1u))));
    // 0104e9  dec dx
    X86_AT(c, 0x104e9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104eb  mov word ptr [edi + 0x3c], dx
    X86_AT(c, 0x104ebu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Cu)), (c.r[2] & 0xFFFFu));
    // 0104ef  cmp al, 2
    X86_AT(c, 0x104efu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0104f1  jb 0x104f6
    X86_AT(c, 0x104f1u);
    if (x86_cc(c, 2)) { goto L_104f6; }
    X86_TICK(c, 2);
    // 0104f3  add ecx, 2
    X86_AT(c, 0x104f3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x2u, 0, 4); }
L_104f6:
    X86_TICK(c, 16);
    // 0104f6  mov dword ptr [edi + 0x34], ecx
    X86_AT(c, 0x104f6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), c.r[1]);
    // 0104f9  mov word ptr [edi + 0x38], bx
    X86_AT(c, 0x104f9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), (c.r[3] & 0xFFFFu));
    // 0104fd  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x104fdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010501  je 0x10508
    X86_AT(c, 0x10501u);
    if (x86_cc(c, 4)) { goto L_10508; }
    X86_TICK(c, 7);
    // 010503  call 0x10bd0
    X86_AT(c, 0x10503u);
    push32(c, 0x10508u); f_00010bd0(c); X86_RET(c, 0x10508u);
L_10508:
    X86_TICK(c, 16);
    // 010508  popfd 
    X86_AT(c, 0x10508u);
    x86_popfd(c, 4);
    // 010509  ret 
    X86_AT(c, 0x10509u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x104ddu, "ran off the end of a function");
}
void f_000104df(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0104df  mov word ptr [edi + 0x3a], dx
    X86_AT(c, 0x104dfu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), (c.r[2] & 0xFFFFu));
    // 0104e3  movzx dx, byte ptr gs:[ecx + 1]
    X86_AT(c, 0x104e3u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1] + 0x1u))));
    // 0104e9  dec dx
    X86_AT(c, 0x104e9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104eb  mov word ptr [edi + 0x3c], dx
    X86_AT(c, 0x104ebu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Cu)), (c.r[2] & 0xFFFFu));
    // 0104ef  cmp al, 2
    X86_AT(c, 0x104efu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0104f1  jb 0x104f6
    X86_AT(c, 0x104f1u);
    if (x86_cc(c, 2)) { goto L_104f6; }
    X86_TICK(c, 2);
    // 0104f3  add ecx, 2
    X86_AT(c, 0x104f3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x2u, 0, 4); }
L_104f6:
    X86_TICK(c, 16);
    // 0104f6  mov dword ptr [edi + 0x34], ecx
    X86_AT(c, 0x104f6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), c.r[1]);
    // 0104f9  mov word ptr [edi + 0x38], bx
    X86_AT(c, 0x104f9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), (c.r[3] & 0xFFFFu));
    // 0104fd  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x104fdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010501  je 0x10508
    X86_AT(c, 0x10501u);
    if (x86_cc(c, 4)) { goto L_10508; }
    X86_TICK(c, 7);
    // 010503  call 0x10bd0
    X86_AT(c, 0x10503u);
    push32(c, 0x10508u); f_00010bd0(c); X86_RET(c, 0x10508u);
L_10508:
    X86_TICK(c, 16);
    // 010508  popfd 
    X86_AT(c, 0x10508u);
    x86_popfd(c, 4);
    // 010509  ret 
    X86_AT(c, 0x10509u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x104dfu, "ran off the end of a function");
}
void f_000104e3(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0104e3  movzx dx, byte ptr gs:[ecx + 1]
    X86_AT(c, 0x104e3u);
    s16(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[1] + 0x1u))));
    // 0104e9  dec dx
    X86_AT(c, 0x104e9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104eb  mov word ptr [edi + 0x3c], dx
    X86_AT(c, 0x104ebu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Cu)), (c.r[2] & 0xFFFFu));
    // 0104ef  cmp al, 2
    X86_AT(c, 0x104efu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0104f1  jb 0x104f6
    X86_AT(c, 0x104f1u);
    if (x86_cc(c, 2)) { goto L_104f6; }
    X86_TICK(c, 2);
    // 0104f3  add ecx, 2
    X86_AT(c, 0x104f3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x2u, 0, 4); }
L_104f6:
    X86_TICK(c, 16);
    // 0104f6  mov dword ptr [edi + 0x34], ecx
    X86_AT(c, 0x104f6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), c.r[1]);
    // 0104f9  mov word ptr [edi + 0x38], bx
    X86_AT(c, 0x104f9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), (c.r[3] & 0xFFFFu));
    // 0104fd  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x104fdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010501  je 0x10508
    X86_AT(c, 0x10501u);
    if (x86_cc(c, 4)) { goto L_10508; }
    X86_TICK(c, 7);
    // 010503  call 0x10bd0
    X86_AT(c, 0x10503u);
    push32(c, 0x10508u); f_00010bd0(c); X86_RET(c, 0x10508u);
L_10508:
    X86_TICK(c, 16);
    // 010508  popfd 
    X86_AT(c, 0x10508u);
    x86_popfd(c, 4);
    // 010509  ret 
    X86_AT(c, 0x10509u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x104e3u, "ran off the end of a function");
}
void f_000104e9(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0104e9  dec dx
    X86_AT(c, 0x104e9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0104eb  mov word ptr [edi + 0x3c], dx
    X86_AT(c, 0x104ebu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Cu)), (c.r[2] & 0xFFFFu));
    // 0104ef  cmp al, 2
    X86_AT(c, 0x104efu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0104f1  jb 0x104f6
    X86_AT(c, 0x104f1u);
    if (x86_cc(c, 2)) { goto L_104f6; }
    X86_TICK(c, 2);
    // 0104f3  add ecx, 2
    X86_AT(c, 0x104f3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x2u, 0, 4); }
L_104f6:
    X86_TICK(c, 16);
    // 0104f6  mov dword ptr [edi + 0x34], ecx
    X86_AT(c, 0x104f6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), c.r[1]);
    // 0104f9  mov word ptr [edi + 0x38], bx
    X86_AT(c, 0x104f9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), (c.r[3] & 0xFFFFu));
    // 0104fd  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x104fdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010501  je 0x10508
    X86_AT(c, 0x10501u);
    if (x86_cc(c, 4)) { goto L_10508; }
    X86_TICK(c, 7);
    // 010503  call 0x10bd0
    X86_AT(c, 0x10503u);
    push32(c, 0x10508u); f_00010bd0(c); X86_RET(c, 0x10508u);
L_10508:
    X86_TICK(c, 16);
    // 010508  popfd 
    X86_AT(c, 0x10508u);
    x86_popfd(c, 4);
    // 010509  ret 
    X86_AT(c, 0x10509u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x104e9u, "ran off the end of a function");
}
void f_000104eb(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0104eb  mov word ptr [edi + 0x3c], dx
    X86_AT(c, 0x104ebu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Cu)), (c.r[2] & 0xFFFFu));
    // 0104ef  cmp al, 2
    X86_AT(c, 0x104efu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0104f1  jb 0x104f6
    X86_AT(c, 0x104f1u);
    if (x86_cc(c, 2)) { goto L_104f6; }
    X86_TICK(c, 2);
    // 0104f3  add ecx, 2
    X86_AT(c, 0x104f3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x2u, 0, 4); }
L_104f6:
    X86_TICK(c, 16);
    // 0104f6  mov dword ptr [edi + 0x34], ecx
    X86_AT(c, 0x104f6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), c.r[1]);
    // 0104f9  mov word ptr [edi + 0x38], bx
    X86_AT(c, 0x104f9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), (c.r[3] & 0xFFFFu));
    // 0104fd  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x104fdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010501  je 0x10508
    X86_AT(c, 0x10501u);
    if (x86_cc(c, 4)) { goto L_10508; }
    X86_TICK(c, 7);
    // 010503  call 0x10bd0
    X86_AT(c, 0x10503u);
    push32(c, 0x10508u); f_00010bd0(c); X86_RET(c, 0x10508u);
L_10508:
    X86_TICK(c, 16);
    // 010508  popfd 
    X86_AT(c, 0x10508u);
    x86_popfd(c, 4);
    // 010509  ret 
    X86_AT(c, 0x10509u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x104ebu, "ran off the end of a function");
}
void f_000104ef(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0104ef  cmp al, 2
    X86_AT(c, 0x104efu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0104f1  jb 0x104f6
    X86_AT(c, 0x104f1u);
    if (x86_cc(c, 2)) { goto L_104f6; }
    X86_TICK(c, 2);
    // 0104f3  add ecx, 2
    X86_AT(c, 0x104f3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x2u, 0, 4); }
L_104f6:
    X86_TICK(c, 16);
    // 0104f6  mov dword ptr [edi + 0x34], ecx
    X86_AT(c, 0x104f6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), c.r[1]);
    // 0104f9  mov word ptr [edi + 0x38], bx
    X86_AT(c, 0x104f9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), (c.r[3] & 0xFFFFu));
    // 0104fd  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x104fdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010501  je 0x10508
    X86_AT(c, 0x10501u);
    if (x86_cc(c, 4)) { goto L_10508; }
    X86_TICK(c, 7);
    // 010503  call 0x10bd0
    X86_AT(c, 0x10503u);
    push32(c, 0x10508u); f_00010bd0(c); X86_RET(c, 0x10508u);
L_10508:
    X86_TICK(c, 16);
    // 010508  popfd 
    X86_AT(c, 0x10508u);
    x86_popfd(c, 4);
    // 010509  ret 
    X86_AT(c, 0x10509u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x104efu, "ran off the end of a function");
}
void f_000104f1(X86Cpu& c) {
    X86_TICK(c, 5);
    // 0104f1  jb 0x104f6
    X86_AT(c, 0x104f1u);
    if (x86_cc(c, 2)) { goto L_104f6; }
    X86_TICK(c, 2);
    // 0104f3  add ecx, 2
    X86_AT(c, 0x104f3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x2u, 0, 4); }
L_104f6:
    X86_TICK(c, 16);
    // 0104f6  mov dword ptr [edi + 0x34], ecx
    X86_AT(c, 0x104f6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), c.r[1]);
    // 0104f9  mov word ptr [edi + 0x38], bx
    X86_AT(c, 0x104f9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), (c.r[3] & 0xFFFFu));
    // 0104fd  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x104fdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010501  je 0x10508
    X86_AT(c, 0x10501u);
    if (x86_cc(c, 4)) { goto L_10508; }
    X86_TICK(c, 7);
    // 010503  call 0x10bd0
    X86_AT(c, 0x10503u);
    push32(c, 0x10508u); f_00010bd0(c); X86_RET(c, 0x10508u);
L_10508:
    X86_TICK(c, 16);
    // 010508  popfd 
    X86_AT(c, 0x10508u);
    x86_popfd(c, 4);
    // 010509  ret 
    X86_AT(c, 0x10509u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x104f1u, "ran off the end of a function");
}
void f_000104f6(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0104f6  mov dword ptr [edi + 0x34], ecx
    X86_AT(c, 0x104f6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), c.r[1]);
    // 0104f9  mov word ptr [edi + 0x38], bx
    X86_AT(c, 0x104f9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), (c.r[3] & 0xFFFFu));
    // 0104fd  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x104fdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010501  je 0x10508
    X86_AT(c, 0x10501u);
    if (x86_cc(c, 4)) { goto L_10508; }
    X86_TICK(c, 7);
    // 010503  call 0x10bd0
    X86_AT(c, 0x10503u);
    push32(c, 0x10508u); f_00010bd0(c); X86_RET(c, 0x10508u);
L_10508:
    X86_TICK(c, 16);
    // 010508  popfd 
    X86_AT(c, 0x10508u);
    x86_popfd(c, 4);
    // 010509  ret 
    X86_AT(c, 0x10509u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x104f6u, "ran off the end of a function");
}
void f_000104f9(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0104f9  mov word ptr [edi + 0x38], bx
    X86_AT(c, 0x104f9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), (c.r[3] & 0xFFFFu));
    // 0104fd  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x104fdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010501  je 0x10508
    X86_AT(c, 0x10501u);
    if (x86_cc(c, 4)) { goto L_10508; }
    X86_TICK(c, 7);
    // 010503  call 0x10bd0
    X86_AT(c, 0x10503u);
    push32(c, 0x10508u); f_00010bd0(c); X86_RET(c, 0x10508u);
L_10508:
    X86_TICK(c, 16);
    // 010508  popfd 
    X86_AT(c, 0x10508u);
    x86_popfd(c, 4);
    // 010509  ret 
    X86_AT(c, 0x10509u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x104f9u, "ran off the end of a function");
}
void f_000104fd(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0104fd  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x104fdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010501  je 0x10508
    X86_AT(c, 0x10501u);
    if (x86_cc(c, 4)) { goto L_10508; }
    X86_TICK(c, 7);
    // 010503  call 0x10bd0
    X86_AT(c, 0x10503u);
    push32(c, 0x10508u); f_00010bd0(c); X86_RET(c, 0x10508u);
L_10508:
    X86_TICK(c, 16);
    // 010508  popfd 
    X86_AT(c, 0x10508u);
    x86_popfd(c, 4);
    // 010509  ret 
    X86_AT(c, 0x10509u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x104fdu, "ran off the end of a function");
}
void f_00010501(X86Cpu& c) {
    X86_TICK(c, 5);
    // 010501  je 0x10508
    X86_AT(c, 0x10501u);
    if (x86_cc(c, 4)) { goto L_10508; }
    X86_TICK(c, 7);
    // 010503  call 0x10bd0
    X86_AT(c, 0x10503u);
    push32(c, 0x10508u); f_00010bd0(c); X86_RET(c, 0x10508u);
L_10508:
    X86_TICK(c, 16);
    // 010508  popfd 
    X86_AT(c, 0x10508u);
    x86_popfd(c, 4);
    // 010509  ret 
    X86_AT(c, 0x10509u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10501u, "ran off the end of a function");
}
void f_00010508(X86Cpu& c) {
    X86_TICK(c, 16);
    // 010508  popfd 
    X86_AT(c, 0x10508u);
    x86_popfd(c, 4);
    // 010509  ret 
    X86_AT(c, 0x10509u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10508u, "ran off the end of a function");
}
void f_00010509(X86Cpu& c) {
    X86_TICK(c, 10);
    // 010509  ret 
    X86_AT(c, 0x10509u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10509u, "ran off the end of a function");
}
void f_0001050a(X86Cpu& c) {
    X86_TICK(c, 25);
    // 01050a  mov edx, dword ptr [edi + 0x13]
    X86_AT(c, 0x1050au);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x13u)));
    // 01050d  shld ebx, edx, 0x10
    X86_AT(c, 0x1050du);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010511  sub eax, eax
    X86_AT(c, 0x10511u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 010513  mov dword ptr [edi + 0x13], eax
    X86_AT(c, 0x10513u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x13u)), c.r[0]);
    // 010516  mov word ptr [ebp + 0x18], dx
    X86_AT(c, 0x10516u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)), (c.r[2] & 0xFFFFu));
    // 01051a  mov word ptr [ebp + 0x14], bx
    X86_AT(c, 0x1051au);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)), (c.r[3] & 0xFFFFu));
    // 01051e  ret 
    X86_AT(c, 0x1051eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1050au, "ran off the end of a function");
}
void f_0001051f(X86Cpu& c) {
    X86_TICK(c, 34);
    // 01051f  mov ax, word ptr [ebp + 0x24]
    X86_AT(c, 0x1051fu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u))));
    // 010523  pushfd 
    X86_AT(c, 0x10523u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 010524  cli 
    X86_AT(c, 0x10524u);
    c.fl &= ~X86_IF;
    // 010525  mov dword ptr [edi + 0x3e], esi
    X86_AT(c, 0x10525u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)), c.r[6]);
    // 010528  mov word ptr [edi + 0x42], ax
    X86_AT(c, 0x10528u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x42u)), (c.r[0] & 0xFFFFu));
    // 01052c  mov word ptr [edi + 0x32], dx
    X86_AT(c, 0x1052cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u)), (c.r[2] & 0xFFFFu));
    // 010530  popfd 
    X86_AT(c, 0x10530u);
    x86_popfd(c, 4);
    // 010531  ret 
    X86_AT(c, 0x10531u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1051fu, "ran off the end of a function");
}
void f_00010532(X86Cpu& c) {
    X86_TICK(c, 7);
    // 010532  or dh, dh
    X86_AT(c, 0x10532u);
    { uint32_t v = g8(c, 6); s8(c, 6, x86_logic(c, v | g8(c, 6), 1)); }
    // 010534  je 0x1054b
    X86_AT(c, 0x10534u);
    if (x86_cc(c, 4)) { goto L_1054b; }
    X86_TICK(c, 7);
    // 010536  or dl, dl
    X86_AT(c, 0x10536u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v | g8(c, 2), 1)); }
    // 010538  je 0x1054b
    X86_AT(c, 0x10538u);
    if (x86_cc(c, 4)) { goto L_1054b; }
    X86_TICK(c, 25);
    // 01053a  pushfd 
    X86_AT(c, 0x1053au);
    push32(c, c.fl & 0x00FCFFFFu);
    // 01053b  cli 
    X86_AT(c, 0x1053bu);
    c.fl &= ~X86_IF;
    // 01053c  movzx ax, dl
    X86_AT(c, 0x1053cu);
    s16(c, 0, g8(c, 2));
    // 010540  shl eax, 0x10
    X86_AT(c, 0x10540u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 010543  movzx ax, dh
    X86_AT(c, 0x10543u);
    s16(c, 0, g8(c, 6));
    // 010547  mov dword ptr [edi + 0x5e], eax
    X86_AT(c, 0x10547u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Eu)), c.r[0]);
    // 01054a  popfd 
    X86_AT(c, 0x1054au);
    x86_popfd(c, 4);
L_1054b:
    X86_TICK(c, 10);
    // 01054b  ret 
    X86_AT(c, 0x1054bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10532u, "ran off the end of a function");
}
void f_0001054c(X86Cpu& c) {
    goto L_1054c;
L_10338:
    X86_TICK(c, 12);
    // 010338  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x10338u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 01033c  ret 
    X86_AT(c, 0x1033cu);
    c.eip = pop32(c); return;
L_1054c:
    X86_TICK(c, 7);
    // 01054c  cmp dx, 0x12
    X86_AT(c, 0x1054cu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x12u, 0, 2);
    // 010550  ja 0x10338
    X86_AT(c, 0x10550u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x10338u); goto L_10338; }
    X86_TICK(c, 7);
    // 010556  cmp al, 2
    X86_AT(c, 0x10556u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 010558  jae 0x105f2
    X86_AT(c, 0x10558u);
    if (x86_cc(c, 3)) { goto L_105f2; }
    X86_TICK(c, 29);
    // 01055e  movzx eax, al
    X86_AT(c, 0x1055eu);
    c.r[0] = g8(c, 0);
    // 010561  mov byte ptr [edi + eax*1 + 0x4f], dl
    X86_AT(c, 0x10561u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[0] + 0x4Fu)), g8(c, 2));
    // 010565  pushfd 
    X86_AT(c, 0x10565u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 010566  cli 
    X86_AT(c, 0x10566u);
    c.fl &= ~X86_IF;
    // 010567  push eax
    X86_AT(c, 0x10567u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 010568  push edx
    X86_AT(c, 0x10568u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 010569  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10569u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 01056d  je 0x10574
    X86_AT(c, 0x1056du);
    if (x86_cc(c, 4)) { goto L_10574; }
    X86_TICK(c, 7);
    // 01056f  call 0x10b75
    X86_AT(c, 0x1056fu);
    push32(c, 0x10574u); f_00010b75(c); X86_RET(c, 0x10574u);
L_10574:
    X86_TICK(c, 46);
    // 010574  pop edx
    X86_AT(c, 0x10574u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 010575  pop eax
    X86_AT(c, 0x10575u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 010576  movzx edx, dx
    X86_AT(c, 0x10576u);
    c.r[2] = (c.r[2] & 0xFFFFu);
    // 010579  mov ebx, dword ptr cs:[edx*8 + 0x1065c]
    X86_AT(c, 0x10579u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x1065Cu)));
    // 010581  mov dword ptr [edi + 4], ebx
    X86_AT(c, 0x10581u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 010584  mov ebx, dword ptr cs:[edx*8 + 0x10660]
    X86_AT(c, 0x10584u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x10660u)));
    // 01058c  mov dword ptr [edi], ebx
    X86_AT(c, 0x1058cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[3]);
    // 01058e  push edi
    X86_AT(c, 0x1058eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 01058f  push ds
    X86_AT(c, 0x1058fu);
    push32(c, c.sreg[3]);
    // 010590  pop gs
    X86_AT(c, 0x10590u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010592  add edi, 0x62
    X86_AT(c, 0x10592u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010595  mov ah, 1
    X86_AT(c, 0x10595u);
    s8(c, 4, 0x1u);
    // 010597  add dx, 0x40
    X86_AT(c, 0x10597u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x40u, 0, 2)); }
    // 01059b  push cs
    X86_AT(c, 0x1059bu);
    push32(c, c.sreg[1]);
    // 01059c  call 0x280
    X86_AT(c, 0x1059cu);
    push32(c, 0x105a1u); f_00000280(c); X86_RET(c, 0x105a1u);
    X86_TICK(c, 4);
    // 0105a1  pop edi
    X86_AT(c, 0x105a1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
L_105a2:
    X86_TICK(c, 54);
    // 0105a2  mov ax, word ptr [edi + 4]
    X86_AT(c, 0x105a2u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))));
    // 0105a6  dec ax
    X86_AT(c, 0x105a6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105a8  mov word ptr [edi + 0x5a], ax
    X86_AT(c, 0x105a8u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Au)), (c.r[0] & 0xFFFFu));
    // 0105ac  mov ax, word ptr [edi + 6]
    X86_AT(c, 0x105acu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u))));
    // 0105b0  dec ax
    X86_AT(c, 0x105b0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105b2  mov word ptr [edi + 0x5c], ax
    X86_AT(c, 0x105b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[0] & 0xFFFFu));
    // 0105b6  mov dx, word ptr [edi]
    X86_AT(c, 0x105b6u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0105b9  mov word ptr [edi + 0x52], dx
    X86_AT(c, 0x105b9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[2] & 0xFFFFu));
    // 0105bd  mov word ptr [edi + 0x56], dx
    X86_AT(c, 0x105bdu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[2] & 0xFFFFu));
    // 0105c1  mov bx, word ptr [edi + 2]
    X86_AT(c, 0x105c1u);
    s16(c, 3, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 0105c5  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x105c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 0105c9  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x105c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 0105cd  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x105cdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0105d4  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x105d4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0105da  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x105dau);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0105e1  push ebx
    X86_AT(c, 0x105e1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0105e2  push edx
    X86_AT(c, 0x105e2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0105e3  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x105e3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 0105e7  je 0x105ee
    X86_AT(c, 0x105e7u);
    if (x86_cc(c, 4)) { goto L_105ee; }
    X86_TICK(c, 7);
    // 0105e9  call 0x10bd0
    X86_AT(c, 0x105e9u);
    push32(c, 0x105eeu); f_00010bd0(c); X86_RET(c, 0x105eeu);
L_105ee:
    X86_TICK(c, 24);
    // 0105ee  pop edx
    X86_AT(c, 0x105eeu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0105ef  pop ebx
    X86_AT(c, 0x105efu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0105f0  popfd 
    X86_AT(c, 0x105f0u);
    x86_popfd(c, 4);
    // 0105f1  ret 
    X86_AT(c, 0x105f1u);
    c.eip = pop32(c); return;
L_105f2:
    X86_TICK(c, 9);
    // 0105f2  sub al, 0x80
    X86_AT(c, 0x105f2u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x80u, 0, 1)); }
    // 0105f4  cmp al, 3
    X86_AT(c, 0x105f4u);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 0105f6  ja 0x10338
    X86_AT(c, 0x105f6u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x10338u); goto L_10338; }
    X86_TICK(c, 22);
    // 0105fc  pushfd 
    X86_AT(c, 0x105fcu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0105fd  cli 
    X86_AT(c, 0x105fdu);
    c.fl &= ~X86_IF;
    // 0105fe  push eax
    X86_AT(c, 0x105feu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0105ff  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x105ffu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010603  je 0x1060a
    X86_AT(c, 0x10603u);
    if (x86_cc(c, 4)) { goto L_1060a; }
    X86_TICK(c, 7);
    // 010605  call 0x10b75
    X86_AT(c, 0x10605u);
    push32(c, 0x1060au); f_00010b75(c); X86_RET(c, 0x1060au);
L_1060a:
    X86_TICK(c, 71);
    // 01060a  pop eax
    X86_AT(c, 0x1060au);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01060b  mov dx, word ptr [ebp + 0x18]
    X86_AT(c, 0x1060bu);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 01060f  mov bx, word ptr [ebp + 0x14]
    X86_AT(c, 0x1060fu);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 010613  mov word ptr [edi + 4], dx
    X86_AT(c, 0x10613u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), (c.r[2] & 0xFFFFu));
    // 010617  mov word ptr [edi + 6], bx
    X86_AT(c, 0x10617u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u)), (c.r[3] & 0xFFFFu));
    // 01061b  shr dx, 1
    X86_AT(c, 0x1061bu);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 2, r); }
    // 01061e  mov word ptr [edi], dx
    X86_AT(c, 0x1061eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7])), (c.r[2] & 0xFFFFu));
    // 010621  shr bx, 1
    X86_AT(c, 0x10621u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 010624  mov word ptr [edi + 2], bx
    X86_AT(c, 0x10624u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), (c.r[3] & 0xFFFFu));
    // 010628  push edi
    X86_AT(c, 0x10628u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010629  push ds
    X86_AT(c, 0x10629u);
    push32(c, c.sreg[3]);
    // 01062a  mov gs, word ptr [esp]
    X86_AT(c, 0x1062au);
    x86_load_seg(c, 5, rd16((c.sbase[2] + (uint32_t)(c.r[4]))) & 0xFFFFu);
    // 01062d  add edi, 0x62
    X86_AT(c, 0x1062du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010630  mov al, byte ptr [ebp + 0x20]
    X86_AT(c, 0x10630u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u))));
    // 010633  mov cx, word ptr [ebp + 0x1c]
    X86_AT(c, 0x10633u);
    s16(c, 1, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu))));
    // 010637  mov dx, word ptr [ebp + 0x18]
    X86_AT(c, 0x10637u);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 01063b  mov bx, word ptr [ebp + 0x14]
    X86_AT(c, 0x1063bu);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 01063f  mov ds, word ptr [ebp + 0x24]
    X86_AT(c, 0x1063fu);
    x86_load_seg(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u))) & 0xFFFFu);
    // 010642  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0x10642u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 010645  mov ah, 1
    X86_AT(c, 0x10645u);
    s8(c, 4, 0x1u);
    // 010647  push cs
    X86_AT(c, 0x10647u);
    push32(c, c.sreg[1]);
    // 010648  call 0x280
    X86_AT(c, 0x10648u);
    push32(c, 0x1064du); f_00000280(c); X86_RET(c, 0x1064du);
    X86_TICK(c, 11);
    // 01064d  mov ah, 5
    X86_AT(c, 0x1064du);
    s8(c, 4, 0x5u);
    // 01064f  push cs
    X86_AT(c, 0x1064fu);
    push32(c, c.sreg[1]);
    // 010650  call 0x280
    X86_AT(c, 0x10650u);
    push32(c, 0x10655u); f_00000280(c); X86_RET(c, 0x10655u);
    X86_TICK(c, 15);
    // 010655  pop ds
    X86_AT(c, 0x10655u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010656  pop edi
    X86_AT(c, 0x10656u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010657  jmp 0x105a2
    X86_AT(c, 0x10657u);
    X86_POLL(c, 0x105a2u); goto L_105a2;
    x86_fault(c, 0x1054cu, "ran off the end of a function");
}
void f_00010550(X86Cpu& c) {
    goto L_10550;
L_10338:
    X86_TICK(c, 12);
    // 010338  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x10338u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 01033c  ret 
    X86_AT(c, 0x1033cu);
    c.eip = pop32(c); return;
L_10550:
    X86_TICK(c, 5);
    // 010550  ja 0x10338
    X86_AT(c, 0x10550u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x10338u); goto L_10338; }
    X86_TICK(c, 7);
    // 010556  cmp al, 2
    X86_AT(c, 0x10556u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 010558  jae 0x105f2
    X86_AT(c, 0x10558u);
    if (x86_cc(c, 3)) { goto L_105f2; }
    X86_TICK(c, 29);
    // 01055e  movzx eax, al
    X86_AT(c, 0x1055eu);
    c.r[0] = g8(c, 0);
    // 010561  mov byte ptr [edi + eax*1 + 0x4f], dl
    X86_AT(c, 0x10561u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[0] + 0x4Fu)), g8(c, 2));
    // 010565  pushfd 
    X86_AT(c, 0x10565u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 010566  cli 
    X86_AT(c, 0x10566u);
    c.fl &= ~X86_IF;
    // 010567  push eax
    X86_AT(c, 0x10567u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 010568  push edx
    X86_AT(c, 0x10568u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 010569  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10569u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 01056d  je 0x10574
    X86_AT(c, 0x1056du);
    if (x86_cc(c, 4)) { goto L_10574; }
    X86_TICK(c, 7);
    // 01056f  call 0x10b75
    X86_AT(c, 0x1056fu);
    push32(c, 0x10574u); f_00010b75(c); X86_RET(c, 0x10574u);
L_10574:
    X86_TICK(c, 46);
    // 010574  pop edx
    X86_AT(c, 0x10574u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 010575  pop eax
    X86_AT(c, 0x10575u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 010576  movzx edx, dx
    X86_AT(c, 0x10576u);
    c.r[2] = (c.r[2] & 0xFFFFu);
    // 010579  mov ebx, dword ptr cs:[edx*8 + 0x1065c]
    X86_AT(c, 0x10579u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x1065Cu)));
    // 010581  mov dword ptr [edi + 4], ebx
    X86_AT(c, 0x10581u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 010584  mov ebx, dword ptr cs:[edx*8 + 0x10660]
    X86_AT(c, 0x10584u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x10660u)));
    // 01058c  mov dword ptr [edi], ebx
    X86_AT(c, 0x1058cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[3]);
    // 01058e  push edi
    X86_AT(c, 0x1058eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 01058f  push ds
    X86_AT(c, 0x1058fu);
    push32(c, c.sreg[3]);
    // 010590  pop gs
    X86_AT(c, 0x10590u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010592  add edi, 0x62
    X86_AT(c, 0x10592u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010595  mov ah, 1
    X86_AT(c, 0x10595u);
    s8(c, 4, 0x1u);
    // 010597  add dx, 0x40
    X86_AT(c, 0x10597u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x40u, 0, 2)); }
    // 01059b  push cs
    X86_AT(c, 0x1059bu);
    push32(c, c.sreg[1]);
    // 01059c  call 0x280
    X86_AT(c, 0x1059cu);
    push32(c, 0x105a1u); f_00000280(c); X86_RET(c, 0x105a1u);
    X86_TICK(c, 4);
    // 0105a1  pop edi
    X86_AT(c, 0x105a1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
L_105a2:
    X86_TICK(c, 54);
    // 0105a2  mov ax, word ptr [edi + 4]
    X86_AT(c, 0x105a2u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))));
    // 0105a6  dec ax
    X86_AT(c, 0x105a6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105a8  mov word ptr [edi + 0x5a], ax
    X86_AT(c, 0x105a8u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Au)), (c.r[0] & 0xFFFFu));
    // 0105ac  mov ax, word ptr [edi + 6]
    X86_AT(c, 0x105acu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u))));
    // 0105b0  dec ax
    X86_AT(c, 0x105b0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105b2  mov word ptr [edi + 0x5c], ax
    X86_AT(c, 0x105b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[0] & 0xFFFFu));
    // 0105b6  mov dx, word ptr [edi]
    X86_AT(c, 0x105b6u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0105b9  mov word ptr [edi + 0x52], dx
    X86_AT(c, 0x105b9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[2] & 0xFFFFu));
    // 0105bd  mov word ptr [edi + 0x56], dx
    X86_AT(c, 0x105bdu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[2] & 0xFFFFu));
    // 0105c1  mov bx, word ptr [edi + 2]
    X86_AT(c, 0x105c1u);
    s16(c, 3, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 0105c5  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x105c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 0105c9  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x105c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 0105cd  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x105cdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0105d4  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x105d4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0105da  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x105dau);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0105e1  push ebx
    X86_AT(c, 0x105e1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0105e2  push edx
    X86_AT(c, 0x105e2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0105e3  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x105e3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 0105e7  je 0x105ee
    X86_AT(c, 0x105e7u);
    if (x86_cc(c, 4)) { goto L_105ee; }
    X86_TICK(c, 7);
    // 0105e9  call 0x10bd0
    X86_AT(c, 0x105e9u);
    push32(c, 0x105eeu); f_00010bd0(c); X86_RET(c, 0x105eeu);
L_105ee:
    X86_TICK(c, 24);
    // 0105ee  pop edx
    X86_AT(c, 0x105eeu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0105ef  pop ebx
    X86_AT(c, 0x105efu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0105f0  popfd 
    X86_AT(c, 0x105f0u);
    x86_popfd(c, 4);
    // 0105f1  ret 
    X86_AT(c, 0x105f1u);
    c.eip = pop32(c); return;
L_105f2:
    X86_TICK(c, 9);
    // 0105f2  sub al, 0x80
    X86_AT(c, 0x105f2u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x80u, 0, 1)); }
    // 0105f4  cmp al, 3
    X86_AT(c, 0x105f4u);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 0105f6  ja 0x10338
    X86_AT(c, 0x105f6u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x10338u); goto L_10338; }
    X86_TICK(c, 22);
    // 0105fc  pushfd 
    X86_AT(c, 0x105fcu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0105fd  cli 
    X86_AT(c, 0x105fdu);
    c.fl &= ~X86_IF;
    // 0105fe  push eax
    X86_AT(c, 0x105feu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0105ff  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x105ffu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010603  je 0x1060a
    X86_AT(c, 0x10603u);
    if (x86_cc(c, 4)) { goto L_1060a; }
    X86_TICK(c, 7);
    // 010605  call 0x10b75
    X86_AT(c, 0x10605u);
    push32(c, 0x1060au); f_00010b75(c); X86_RET(c, 0x1060au);
L_1060a:
    X86_TICK(c, 71);
    // 01060a  pop eax
    X86_AT(c, 0x1060au);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01060b  mov dx, word ptr [ebp + 0x18]
    X86_AT(c, 0x1060bu);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 01060f  mov bx, word ptr [ebp + 0x14]
    X86_AT(c, 0x1060fu);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 010613  mov word ptr [edi + 4], dx
    X86_AT(c, 0x10613u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), (c.r[2] & 0xFFFFu));
    // 010617  mov word ptr [edi + 6], bx
    X86_AT(c, 0x10617u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u)), (c.r[3] & 0xFFFFu));
    // 01061b  shr dx, 1
    X86_AT(c, 0x1061bu);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 2, r); }
    // 01061e  mov word ptr [edi], dx
    X86_AT(c, 0x1061eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7])), (c.r[2] & 0xFFFFu));
    // 010621  shr bx, 1
    X86_AT(c, 0x10621u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 010624  mov word ptr [edi + 2], bx
    X86_AT(c, 0x10624u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), (c.r[3] & 0xFFFFu));
    // 010628  push edi
    X86_AT(c, 0x10628u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010629  push ds
    X86_AT(c, 0x10629u);
    push32(c, c.sreg[3]);
    // 01062a  mov gs, word ptr [esp]
    X86_AT(c, 0x1062au);
    x86_load_seg(c, 5, rd16((c.sbase[2] + (uint32_t)(c.r[4]))) & 0xFFFFu);
    // 01062d  add edi, 0x62
    X86_AT(c, 0x1062du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010630  mov al, byte ptr [ebp + 0x20]
    X86_AT(c, 0x10630u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u))));
    // 010633  mov cx, word ptr [ebp + 0x1c]
    X86_AT(c, 0x10633u);
    s16(c, 1, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu))));
    // 010637  mov dx, word ptr [ebp + 0x18]
    X86_AT(c, 0x10637u);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 01063b  mov bx, word ptr [ebp + 0x14]
    X86_AT(c, 0x1063bu);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 01063f  mov ds, word ptr [ebp + 0x24]
    X86_AT(c, 0x1063fu);
    x86_load_seg(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u))) & 0xFFFFu);
    // 010642  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0x10642u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 010645  mov ah, 1
    X86_AT(c, 0x10645u);
    s8(c, 4, 0x1u);
    // 010647  push cs
    X86_AT(c, 0x10647u);
    push32(c, c.sreg[1]);
    // 010648  call 0x280
    X86_AT(c, 0x10648u);
    push32(c, 0x1064du); f_00000280(c); X86_RET(c, 0x1064du);
    X86_TICK(c, 11);
    // 01064d  mov ah, 5
    X86_AT(c, 0x1064du);
    s8(c, 4, 0x5u);
    // 01064f  push cs
    X86_AT(c, 0x1064fu);
    push32(c, c.sreg[1]);
    // 010650  call 0x280
    X86_AT(c, 0x10650u);
    push32(c, 0x10655u); f_00000280(c); X86_RET(c, 0x10655u);
    X86_TICK(c, 15);
    // 010655  pop ds
    X86_AT(c, 0x10655u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010656  pop edi
    X86_AT(c, 0x10656u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010657  jmp 0x105a2
    X86_AT(c, 0x10657u);
    X86_POLL(c, 0x105a2u); goto L_105a2;
    x86_fault(c, 0x10550u, "ran off the end of a function");
}
void f_00010556(X86Cpu& c) {
    goto L_10556;
L_10338:
    X86_TICK(c, 12);
    // 010338  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x10338u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 01033c  ret 
    X86_AT(c, 0x1033cu);
    c.eip = pop32(c); return;
L_10556:
    X86_TICK(c, 7);
    // 010556  cmp al, 2
    X86_AT(c, 0x10556u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 010558  jae 0x105f2
    X86_AT(c, 0x10558u);
    if (x86_cc(c, 3)) { goto L_105f2; }
    X86_TICK(c, 29);
    // 01055e  movzx eax, al
    X86_AT(c, 0x1055eu);
    c.r[0] = g8(c, 0);
    // 010561  mov byte ptr [edi + eax*1 + 0x4f], dl
    X86_AT(c, 0x10561u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[0] + 0x4Fu)), g8(c, 2));
    // 010565  pushfd 
    X86_AT(c, 0x10565u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 010566  cli 
    X86_AT(c, 0x10566u);
    c.fl &= ~X86_IF;
    // 010567  push eax
    X86_AT(c, 0x10567u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 010568  push edx
    X86_AT(c, 0x10568u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 010569  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10569u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 01056d  je 0x10574
    X86_AT(c, 0x1056du);
    if (x86_cc(c, 4)) { goto L_10574; }
    X86_TICK(c, 7);
    // 01056f  call 0x10b75
    X86_AT(c, 0x1056fu);
    push32(c, 0x10574u); f_00010b75(c); X86_RET(c, 0x10574u);
L_10574:
    X86_TICK(c, 46);
    // 010574  pop edx
    X86_AT(c, 0x10574u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 010575  pop eax
    X86_AT(c, 0x10575u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 010576  movzx edx, dx
    X86_AT(c, 0x10576u);
    c.r[2] = (c.r[2] & 0xFFFFu);
    // 010579  mov ebx, dword ptr cs:[edx*8 + 0x1065c]
    X86_AT(c, 0x10579u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x1065Cu)));
    // 010581  mov dword ptr [edi + 4], ebx
    X86_AT(c, 0x10581u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 010584  mov ebx, dword ptr cs:[edx*8 + 0x10660]
    X86_AT(c, 0x10584u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x10660u)));
    // 01058c  mov dword ptr [edi], ebx
    X86_AT(c, 0x1058cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[3]);
    // 01058e  push edi
    X86_AT(c, 0x1058eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 01058f  push ds
    X86_AT(c, 0x1058fu);
    push32(c, c.sreg[3]);
    // 010590  pop gs
    X86_AT(c, 0x10590u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010592  add edi, 0x62
    X86_AT(c, 0x10592u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010595  mov ah, 1
    X86_AT(c, 0x10595u);
    s8(c, 4, 0x1u);
    // 010597  add dx, 0x40
    X86_AT(c, 0x10597u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x40u, 0, 2)); }
    // 01059b  push cs
    X86_AT(c, 0x1059bu);
    push32(c, c.sreg[1]);
    // 01059c  call 0x280
    X86_AT(c, 0x1059cu);
    push32(c, 0x105a1u); f_00000280(c); X86_RET(c, 0x105a1u);
    X86_TICK(c, 4);
    // 0105a1  pop edi
    X86_AT(c, 0x105a1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
L_105a2:
    X86_TICK(c, 54);
    // 0105a2  mov ax, word ptr [edi + 4]
    X86_AT(c, 0x105a2u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))));
    // 0105a6  dec ax
    X86_AT(c, 0x105a6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105a8  mov word ptr [edi + 0x5a], ax
    X86_AT(c, 0x105a8u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Au)), (c.r[0] & 0xFFFFu));
    // 0105ac  mov ax, word ptr [edi + 6]
    X86_AT(c, 0x105acu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u))));
    // 0105b0  dec ax
    X86_AT(c, 0x105b0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105b2  mov word ptr [edi + 0x5c], ax
    X86_AT(c, 0x105b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[0] & 0xFFFFu));
    // 0105b6  mov dx, word ptr [edi]
    X86_AT(c, 0x105b6u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0105b9  mov word ptr [edi + 0x52], dx
    X86_AT(c, 0x105b9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[2] & 0xFFFFu));
    // 0105bd  mov word ptr [edi + 0x56], dx
    X86_AT(c, 0x105bdu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[2] & 0xFFFFu));
    // 0105c1  mov bx, word ptr [edi + 2]
    X86_AT(c, 0x105c1u);
    s16(c, 3, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 0105c5  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x105c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 0105c9  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x105c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 0105cd  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x105cdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0105d4  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x105d4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0105da  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x105dau);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0105e1  push ebx
    X86_AT(c, 0x105e1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0105e2  push edx
    X86_AT(c, 0x105e2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0105e3  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x105e3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 0105e7  je 0x105ee
    X86_AT(c, 0x105e7u);
    if (x86_cc(c, 4)) { goto L_105ee; }
    X86_TICK(c, 7);
    // 0105e9  call 0x10bd0
    X86_AT(c, 0x105e9u);
    push32(c, 0x105eeu); f_00010bd0(c); X86_RET(c, 0x105eeu);
L_105ee:
    X86_TICK(c, 24);
    // 0105ee  pop edx
    X86_AT(c, 0x105eeu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0105ef  pop ebx
    X86_AT(c, 0x105efu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0105f0  popfd 
    X86_AT(c, 0x105f0u);
    x86_popfd(c, 4);
    // 0105f1  ret 
    X86_AT(c, 0x105f1u);
    c.eip = pop32(c); return;
L_105f2:
    X86_TICK(c, 9);
    // 0105f2  sub al, 0x80
    X86_AT(c, 0x105f2u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x80u, 0, 1)); }
    // 0105f4  cmp al, 3
    X86_AT(c, 0x105f4u);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 0105f6  ja 0x10338
    X86_AT(c, 0x105f6u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x10338u); goto L_10338; }
    X86_TICK(c, 22);
    // 0105fc  pushfd 
    X86_AT(c, 0x105fcu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0105fd  cli 
    X86_AT(c, 0x105fdu);
    c.fl &= ~X86_IF;
    // 0105fe  push eax
    X86_AT(c, 0x105feu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0105ff  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x105ffu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010603  je 0x1060a
    X86_AT(c, 0x10603u);
    if (x86_cc(c, 4)) { goto L_1060a; }
    X86_TICK(c, 7);
    // 010605  call 0x10b75
    X86_AT(c, 0x10605u);
    push32(c, 0x1060au); f_00010b75(c); X86_RET(c, 0x1060au);
L_1060a:
    X86_TICK(c, 71);
    // 01060a  pop eax
    X86_AT(c, 0x1060au);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01060b  mov dx, word ptr [ebp + 0x18]
    X86_AT(c, 0x1060bu);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 01060f  mov bx, word ptr [ebp + 0x14]
    X86_AT(c, 0x1060fu);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 010613  mov word ptr [edi + 4], dx
    X86_AT(c, 0x10613u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), (c.r[2] & 0xFFFFu));
    // 010617  mov word ptr [edi + 6], bx
    X86_AT(c, 0x10617u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u)), (c.r[3] & 0xFFFFu));
    // 01061b  shr dx, 1
    X86_AT(c, 0x1061bu);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 2, r); }
    // 01061e  mov word ptr [edi], dx
    X86_AT(c, 0x1061eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7])), (c.r[2] & 0xFFFFu));
    // 010621  shr bx, 1
    X86_AT(c, 0x10621u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 010624  mov word ptr [edi + 2], bx
    X86_AT(c, 0x10624u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), (c.r[3] & 0xFFFFu));
    // 010628  push edi
    X86_AT(c, 0x10628u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010629  push ds
    X86_AT(c, 0x10629u);
    push32(c, c.sreg[3]);
    // 01062a  mov gs, word ptr [esp]
    X86_AT(c, 0x1062au);
    x86_load_seg(c, 5, rd16((c.sbase[2] + (uint32_t)(c.r[4]))) & 0xFFFFu);
    // 01062d  add edi, 0x62
    X86_AT(c, 0x1062du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010630  mov al, byte ptr [ebp + 0x20]
    X86_AT(c, 0x10630u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u))));
    // 010633  mov cx, word ptr [ebp + 0x1c]
    X86_AT(c, 0x10633u);
    s16(c, 1, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu))));
    // 010637  mov dx, word ptr [ebp + 0x18]
    X86_AT(c, 0x10637u);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 01063b  mov bx, word ptr [ebp + 0x14]
    X86_AT(c, 0x1063bu);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 01063f  mov ds, word ptr [ebp + 0x24]
    X86_AT(c, 0x1063fu);
    x86_load_seg(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u))) & 0xFFFFu);
    // 010642  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0x10642u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 010645  mov ah, 1
    X86_AT(c, 0x10645u);
    s8(c, 4, 0x1u);
    // 010647  push cs
    X86_AT(c, 0x10647u);
    push32(c, c.sreg[1]);
    // 010648  call 0x280
    X86_AT(c, 0x10648u);
    push32(c, 0x1064du); f_00000280(c); X86_RET(c, 0x1064du);
    X86_TICK(c, 11);
    // 01064d  mov ah, 5
    X86_AT(c, 0x1064du);
    s8(c, 4, 0x5u);
    // 01064f  push cs
    X86_AT(c, 0x1064fu);
    push32(c, c.sreg[1]);
    // 010650  call 0x280
    X86_AT(c, 0x10650u);
    push32(c, 0x10655u); f_00000280(c); X86_RET(c, 0x10655u);
    X86_TICK(c, 15);
    // 010655  pop ds
    X86_AT(c, 0x10655u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010656  pop edi
    X86_AT(c, 0x10656u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010657  jmp 0x105a2
    X86_AT(c, 0x10657u);
    X86_POLL(c, 0x105a2u); goto L_105a2;
    x86_fault(c, 0x10556u, "ran off the end of a function");
}
void f_00010558(X86Cpu& c) {
    goto L_10558;
L_10338:
    X86_TICK(c, 12);
    // 010338  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x10338u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 01033c  ret 
    X86_AT(c, 0x1033cu);
    c.eip = pop32(c); return;
L_10558:
    X86_TICK(c, 5);
    // 010558  jae 0x105f2
    X86_AT(c, 0x10558u);
    if (x86_cc(c, 3)) { goto L_105f2; }
    X86_TICK(c, 29);
    // 01055e  movzx eax, al
    X86_AT(c, 0x1055eu);
    c.r[0] = g8(c, 0);
    // 010561  mov byte ptr [edi + eax*1 + 0x4f], dl
    X86_AT(c, 0x10561u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[0] + 0x4Fu)), g8(c, 2));
    // 010565  pushfd 
    X86_AT(c, 0x10565u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 010566  cli 
    X86_AT(c, 0x10566u);
    c.fl &= ~X86_IF;
    // 010567  push eax
    X86_AT(c, 0x10567u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 010568  push edx
    X86_AT(c, 0x10568u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 010569  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10569u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 01056d  je 0x10574
    X86_AT(c, 0x1056du);
    if (x86_cc(c, 4)) { goto L_10574; }
    X86_TICK(c, 7);
    // 01056f  call 0x10b75
    X86_AT(c, 0x1056fu);
    push32(c, 0x10574u); f_00010b75(c); X86_RET(c, 0x10574u);
L_10574:
    X86_TICK(c, 46);
    // 010574  pop edx
    X86_AT(c, 0x10574u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 010575  pop eax
    X86_AT(c, 0x10575u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 010576  movzx edx, dx
    X86_AT(c, 0x10576u);
    c.r[2] = (c.r[2] & 0xFFFFu);
    // 010579  mov ebx, dword ptr cs:[edx*8 + 0x1065c]
    X86_AT(c, 0x10579u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x1065Cu)));
    // 010581  mov dword ptr [edi + 4], ebx
    X86_AT(c, 0x10581u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 010584  mov ebx, dword ptr cs:[edx*8 + 0x10660]
    X86_AT(c, 0x10584u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x10660u)));
    // 01058c  mov dword ptr [edi], ebx
    X86_AT(c, 0x1058cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[3]);
    // 01058e  push edi
    X86_AT(c, 0x1058eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 01058f  push ds
    X86_AT(c, 0x1058fu);
    push32(c, c.sreg[3]);
    // 010590  pop gs
    X86_AT(c, 0x10590u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010592  add edi, 0x62
    X86_AT(c, 0x10592u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010595  mov ah, 1
    X86_AT(c, 0x10595u);
    s8(c, 4, 0x1u);
    // 010597  add dx, 0x40
    X86_AT(c, 0x10597u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x40u, 0, 2)); }
    // 01059b  push cs
    X86_AT(c, 0x1059bu);
    push32(c, c.sreg[1]);
    // 01059c  call 0x280
    X86_AT(c, 0x1059cu);
    push32(c, 0x105a1u); f_00000280(c); X86_RET(c, 0x105a1u);
    X86_TICK(c, 4);
    // 0105a1  pop edi
    X86_AT(c, 0x105a1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
L_105a2:
    X86_TICK(c, 54);
    // 0105a2  mov ax, word ptr [edi + 4]
    X86_AT(c, 0x105a2u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))));
    // 0105a6  dec ax
    X86_AT(c, 0x105a6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105a8  mov word ptr [edi + 0x5a], ax
    X86_AT(c, 0x105a8u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Au)), (c.r[0] & 0xFFFFu));
    // 0105ac  mov ax, word ptr [edi + 6]
    X86_AT(c, 0x105acu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u))));
    // 0105b0  dec ax
    X86_AT(c, 0x105b0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105b2  mov word ptr [edi + 0x5c], ax
    X86_AT(c, 0x105b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[0] & 0xFFFFu));
    // 0105b6  mov dx, word ptr [edi]
    X86_AT(c, 0x105b6u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0105b9  mov word ptr [edi + 0x52], dx
    X86_AT(c, 0x105b9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[2] & 0xFFFFu));
    // 0105bd  mov word ptr [edi + 0x56], dx
    X86_AT(c, 0x105bdu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[2] & 0xFFFFu));
    // 0105c1  mov bx, word ptr [edi + 2]
    X86_AT(c, 0x105c1u);
    s16(c, 3, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 0105c5  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x105c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 0105c9  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x105c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 0105cd  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x105cdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0105d4  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x105d4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0105da  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x105dau);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0105e1  push ebx
    X86_AT(c, 0x105e1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0105e2  push edx
    X86_AT(c, 0x105e2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0105e3  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x105e3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 0105e7  je 0x105ee
    X86_AT(c, 0x105e7u);
    if (x86_cc(c, 4)) { goto L_105ee; }
    X86_TICK(c, 7);
    // 0105e9  call 0x10bd0
    X86_AT(c, 0x105e9u);
    push32(c, 0x105eeu); f_00010bd0(c); X86_RET(c, 0x105eeu);
L_105ee:
    X86_TICK(c, 24);
    // 0105ee  pop edx
    X86_AT(c, 0x105eeu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0105ef  pop ebx
    X86_AT(c, 0x105efu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0105f0  popfd 
    X86_AT(c, 0x105f0u);
    x86_popfd(c, 4);
    // 0105f1  ret 
    X86_AT(c, 0x105f1u);
    c.eip = pop32(c); return;
L_105f2:
    X86_TICK(c, 9);
    // 0105f2  sub al, 0x80
    X86_AT(c, 0x105f2u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x80u, 0, 1)); }
    // 0105f4  cmp al, 3
    X86_AT(c, 0x105f4u);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 0105f6  ja 0x10338
    X86_AT(c, 0x105f6u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x10338u); goto L_10338; }
    X86_TICK(c, 22);
    // 0105fc  pushfd 
    X86_AT(c, 0x105fcu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0105fd  cli 
    X86_AT(c, 0x105fdu);
    c.fl &= ~X86_IF;
    // 0105fe  push eax
    X86_AT(c, 0x105feu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0105ff  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x105ffu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 010603  je 0x1060a
    X86_AT(c, 0x10603u);
    if (x86_cc(c, 4)) { goto L_1060a; }
    X86_TICK(c, 7);
    // 010605  call 0x10b75
    X86_AT(c, 0x10605u);
    push32(c, 0x1060au); f_00010b75(c); X86_RET(c, 0x1060au);
L_1060a:
    X86_TICK(c, 71);
    // 01060a  pop eax
    X86_AT(c, 0x1060au);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01060b  mov dx, word ptr [ebp + 0x18]
    X86_AT(c, 0x1060bu);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 01060f  mov bx, word ptr [ebp + 0x14]
    X86_AT(c, 0x1060fu);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 010613  mov word ptr [edi + 4], dx
    X86_AT(c, 0x10613u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), (c.r[2] & 0xFFFFu));
    // 010617  mov word ptr [edi + 6], bx
    X86_AT(c, 0x10617u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u)), (c.r[3] & 0xFFFFu));
    // 01061b  shr dx, 1
    X86_AT(c, 0x1061bu);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 2, r); }
    // 01061e  mov word ptr [edi], dx
    X86_AT(c, 0x1061eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7])), (c.r[2] & 0xFFFFu));
    // 010621  shr bx, 1
    X86_AT(c, 0x10621u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 010624  mov word ptr [edi + 2], bx
    X86_AT(c, 0x10624u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), (c.r[3] & 0xFFFFu));
    // 010628  push edi
    X86_AT(c, 0x10628u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010629  push ds
    X86_AT(c, 0x10629u);
    push32(c, c.sreg[3]);
    // 01062a  mov gs, word ptr [esp]
    X86_AT(c, 0x1062au);
    x86_load_seg(c, 5, rd16((c.sbase[2] + (uint32_t)(c.r[4]))) & 0xFFFFu);
    // 01062d  add edi, 0x62
    X86_AT(c, 0x1062du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010630  mov al, byte ptr [ebp + 0x20]
    X86_AT(c, 0x10630u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u))));
    // 010633  mov cx, word ptr [ebp + 0x1c]
    X86_AT(c, 0x10633u);
    s16(c, 1, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu))));
    // 010637  mov dx, word ptr [ebp + 0x18]
    X86_AT(c, 0x10637u);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 01063b  mov bx, word ptr [ebp + 0x14]
    X86_AT(c, 0x1063bu);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 01063f  mov ds, word ptr [ebp + 0x24]
    X86_AT(c, 0x1063fu);
    x86_load_seg(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u))) & 0xFFFFu);
    // 010642  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0x10642u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 010645  mov ah, 1
    X86_AT(c, 0x10645u);
    s8(c, 4, 0x1u);
    // 010647  push cs
    X86_AT(c, 0x10647u);
    push32(c, c.sreg[1]);
    // 010648  call 0x280
    X86_AT(c, 0x10648u);
    push32(c, 0x1064du); f_00000280(c); X86_RET(c, 0x1064du);
    X86_TICK(c, 11);
    // 01064d  mov ah, 5
    X86_AT(c, 0x1064du);
    s8(c, 4, 0x5u);
    // 01064f  push cs
    X86_AT(c, 0x1064fu);
    push32(c, c.sreg[1]);
    // 010650  call 0x280
    X86_AT(c, 0x10650u);
    push32(c, 0x10655u); f_00000280(c); X86_RET(c, 0x10655u);
    X86_TICK(c, 15);
    // 010655  pop ds
    X86_AT(c, 0x10655u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010656  pop edi
    X86_AT(c, 0x10656u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010657  jmp 0x105a2
    X86_AT(c, 0x10657u);
    X86_POLL(c, 0x105a2u); goto L_105a2;
    x86_fault(c, 0x10558u, "ran off the end of a function");
}
void f_0001055e(X86Cpu& c) {
    X86_TICK(c, 29);
    // 01055e  movzx eax, al
    X86_AT(c, 0x1055eu);
    c.r[0] = g8(c, 0);
    // 010561  mov byte ptr [edi + eax*1 + 0x4f], dl
    X86_AT(c, 0x10561u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[0] + 0x4Fu)), g8(c, 2));
    // 010565  pushfd 
    X86_AT(c, 0x10565u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 010566  cli 
    X86_AT(c, 0x10566u);
    c.fl &= ~X86_IF;
    // 010567  push eax
    X86_AT(c, 0x10567u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 010568  push edx
    X86_AT(c, 0x10568u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 010569  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10569u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 01056d  je 0x10574
    X86_AT(c, 0x1056du);
    if (x86_cc(c, 4)) { goto L_10574; }
    X86_TICK(c, 7);
    // 01056f  call 0x10b75
    X86_AT(c, 0x1056fu);
    push32(c, 0x10574u); f_00010b75(c); X86_RET(c, 0x10574u);
L_10574:
    X86_TICK(c, 46);
    // 010574  pop edx
    X86_AT(c, 0x10574u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 010575  pop eax
    X86_AT(c, 0x10575u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 010576  movzx edx, dx
    X86_AT(c, 0x10576u);
    c.r[2] = (c.r[2] & 0xFFFFu);
    // 010579  mov ebx, dword ptr cs:[edx*8 + 0x1065c]
    X86_AT(c, 0x10579u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x1065Cu)));
    // 010581  mov dword ptr [edi + 4], ebx
    X86_AT(c, 0x10581u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 010584  mov ebx, dword ptr cs:[edx*8 + 0x10660]
    X86_AT(c, 0x10584u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x10660u)));
    // 01058c  mov dword ptr [edi], ebx
    X86_AT(c, 0x1058cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[3]);
    // 01058e  push edi
    X86_AT(c, 0x1058eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 01058f  push ds
    X86_AT(c, 0x1058fu);
    push32(c, c.sreg[3]);
    // 010590  pop gs
    X86_AT(c, 0x10590u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010592  add edi, 0x62
    X86_AT(c, 0x10592u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010595  mov ah, 1
    X86_AT(c, 0x10595u);
    s8(c, 4, 0x1u);
    // 010597  add dx, 0x40
    X86_AT(c, 0x10597u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x40u, 0, 2)); }
    // 01059b  push cs
    X86_AT(c, 0x1059bu);
    push32(c, c.sreg[1]);
    // 01059c  call 0x280
    X86_AT(c, 0x1059cu);
    push32(c, 0x105a1u); f_00000280(c); X86_RET(c, 0x105a1u);
    X86_TICK(c, 58);
    // 0105a1  pop edi
    X86_AT(c, 0x105a1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0105a2  mov ax, word ptr [edi + 4]
    X86_AT(c, 0x105a2u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))));
    // 0105a6  dec ax
    X86_AT(c, 0x105a6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105a8  mov word ptr [edi + 0x5a], ax
    X86_AT(c, 0x105a8u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Au)), (c.r[0] & 0xFFFFu));
    // 0105ac  mov ax, word ptr [edi + 6]
    X86_AT(c, 0x105acu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u))));
    // 0105b0  dec ax
    X86_AT(c, 0x105b0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105b2  mov word ptr [edi + 0x5c], ax
    X86_AT(c, 0x105b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[0] & 0xFFFFu));
    // 0105b6  mov dx, word ptr [edi]
    X86_AT(c, 0x105b6u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0105b9  mov word ptr [edi + 0x52], dx
    X86_AT(c, 0x105b9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[2] & 0xFFFFu));
    // 0105bd  mov word ptr [edi + 0x56], dx
    X86_AT(c, 0x105bdu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[2] & 0xFFFFu));
    // 0105c1  mov bx, word ptr [edi + 2]
    X86_AT(c, 0x105c1u);
    s16(c, 3, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 0105c5  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x105c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 0105c9  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x105c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 0105cd  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x105cdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0105d4  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x105d4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0105da  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x105dau);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0105e1  push ebx
    X86_AT(c, 0x105e1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0105e2  push edx
    X86_AT(c, 0x105e2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0105e3  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x105e3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 0105e7  je 0x105ee
    X86_AT(c, 0x105e7u);
    if (x86_cc(c, 4)) { goto L_105ee; }
    X86_TICK(c, 7);
    // 0105e9  call 0x10bd0
    X86_AT(c, 0x105e9u);
    push32(c, 0x105eeu); f_00010bd0(c); X86_RET(c, 0x105eeu);
L_105ee:
    X86_TICK(c, 24);
    // 0105ee  pop edx
    X86_AT(c, 0x105eeu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0105ef  pop ebx
    X86_AT(c, 0x105efu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0105f0  popfd 
    X86_AT(c, 0x105f0u);
    x86_popfd(c, 4);
    // 0105f1  ret 
    X86_AT(c, 0x105f1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1055eu, "ran off the end of a function");
}
void f_00010561(X86Cpu& c) {
    X86_TICK(c, 26);
    // 010561  mov byte ptr [edi + eax*1 + 0x4f], dl
    X86_AT(c, 0x10561u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[0] + 0x4Fu)), g8(c, 2));
    // 010565  pushfd 
    X86_AT(c, 0x10565u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 010566  cli 
    X86_AT(c, 0x10566u);
    c.fl &= ~X86_IF;
    // 010567  push eax
    X86_AT(c, 0x10567u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 010568  push edx
    X86_AT(c, 0x10568u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 010569  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10569u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 01056d  je 0x10574
    X86_AT(c, 0x1056du);
    if (x86_cc(c, 4)) { goto L_10574; }
    X86_TICK(c, 7);
    // 01056f  call 0x10b75
    X86_AT(c, 0x1056fu);
    push32(c, 0x10574u); f_00010b75(c); X86_RET(c, 0x10574u);
L_10574:
    X86_TICK(c, 46);
    // 010574  pop edx
    X86_AT(c, 0x10574u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 010575  pop eax
    X86_AT(c, 0x10575u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 010576  movzx edx, dx
    X86_AT(c, 0x10576u);
    c.r[2] = (c.r[2] & 0xFFFFu);
    // 010579  mov ebx, dword ptr cs:[edx*8 + 0x1065c]
    X86_AT(c, 0x10579u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x1065Cu)));
    // 010581  mov dword ptr [edi + 4], ebx
    X86_AT(c, 0x10581u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 010584  mov ebx, dword ptr cs:[edx*8 + 0x10660]
    X86_AT(c, 0x10584u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x10660u)));
    // 01058c  mov dword ptr [edi], ebx
    X86_AT(c, 0x1058cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[3]);
    // 01058e  push edi
    X86_AT(c, 0x1058eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 01058f  push ds
    X86_AT(c, 0x1058fu);
    push32(c, c.sreg[3]);
    // 010590  pop gs
    X86_AT(c, 0x10590u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010592  add edi, 0x62
    X86_AT(c, 0x10592u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010595  mov ah, 1
    X86_AT(c, 0x10595u);
    s8(c, 4, 0x1u);
    // 010597  add dx, 0x40
    X86_AT(c, 0x10597u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x40u, 0, 2)); }
    // 01059b  push cs
    X86_AT(c, 0x1059bu);
    push32(c, c.sreg[1]);
    // 01059c  call 0x280
    X86_AT(c, 0x1059cu);
    push32(c, 0x105a1u); f_00000280(c); X86_RET(c, 0x105a1u);
    X86_TICK(c, 58);
    // 0105a1  pop edi
    X86_AT(c, 0x105a1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0105a2  mov ax, word ptr [edi + 4]
    X86_AT(c, 0x105a2u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))));
    // 0105a6  dec ax
    X86_AT(c, 0x105a6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105a8  mov word ptr [edi + 0x5a], ax
    X86_AT(c, 0x105a8u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Au)), (c.r[0] & 0xFFFFu));
    // 0105ac  mov ax, word ptr [edi + 6]
    X86_AT(c, 0x105acu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u))));
    // 0105b0  dec ax
    X86_AT(c, 0x105b0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105b2  mov word ptr [edi + 0x5c], ax
    X86_AT(c, 0x105b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[0] & 0xFFFFu));
    // 0105b6  mov dx, word ptr [edi]
    X86_AT(c, 0x105b6u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0105b9  mov word ptr [edi + 0x52], dx
    X86_AT(c, 0x105b9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[2] & 0xFFFFu));
    // 0105bd  mov word ptr [edi + 0x56], dx
    X86_AT(c, 0x105bdu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[2] & 0xFFFFu));
    // 0105c1  mov bx, word ptr [edi + 2]
    X86_AT(c, 0x105c1u);
    s16(c, 3, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 0105c5  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x105c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 0105c9  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x105c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 0105cd  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x105cdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0105d4  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x105d4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0105da  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x105dau);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0105e1  push ebx
    X86_AT(c, 0x105e1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0105e2  push edx
    X86_AT(c, 0x105e2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0105e3  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x105e3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 0105e7  je 0x105ee
    X86_AT(c, 0x105e7u);
    if (x86_cc(c, 4)) { goto L_105ee; }
    X86_TICK(c, 7);
    // 0105e9  call 0x10bd0
    X86_AT(c, 0x105e9u);
    push32(c, 0x105eeu); f_00010bd0(c); X86_RET(c, 0x105eeu);
L_105ee:
    X86_TICK(c, 24);
    // 0105ee  pop edx
    X86_AT(c, 0x105eeu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0105ef  pop ebx
    X86_AT(c, 0x105efu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0105f0  popfd 
    X86_AT(c, 0x105f0u);
    x86_popfd(c, 4);
    // 0105f1  ret 
    X86_AT(c, 0x105f1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10561u, "ran off the end of a function");
}
void f_00010565(X86Cpu& c) {
    X86_TICK(c, 24);
    // 010565  pushfd 
    X86_AT(c, 0x10565u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 010566  cli 
    X86_AT(c, 0x10566u);
    c.fl &= ~X86_IF;
    // 010567  push eax
    X86_AT(c, 0x10567u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 010568  push edx
    X86_AT(c, 0x10568u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 010569  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10569u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 01056d  je 0x10574
    X86_AT(c, 0x1056du);
    if (x86_cc(c, 4)) { goto L_10574; }
    X86_TICK(c, 7);
    // 01056f  call 0x10b75
    X86_AT(c, 0x1056fu);
    push32(c, 0x10574u); f_00010b75(c); X86_RET(c, 0x10574u);
L_10574:
    X86_TICK(c, 46);
    // 010574  pop edx
    X86_AT(c, 0x10574u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 010575  pop eax
    X86_AT(c, 0x10575u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 010576  movzx edx, dx
    X86_AT(c, 0x10576u);
    c.r[2] = (c.r[2] & 0xFFFFu);
    // 010579  mov ebx, dword ptr cs:[edx*8 + 0x1065c]
    X86_AT(c, 0x10579u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x1065Cu)));
    // 010581  mov dword ptr [edi + 4], ebx
    X86_AT(c, 0x10581u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 010584  mov ebx, dword ptr cs:[edx*8 + 0x10660]
    X86_AT(c, 0x10584u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x10660u)));
    // 01058c  mov dword ptr [edi], ebx
    X86_AT(c, 0x1058cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[3]);
    // 01058e  push edi
    X86_AT(c, 0x1058eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 01058f  push ds
    X86_AT(c, 0x1058fu);
    push32(c, c.sreg[3]);
    // 010590  pop gs
    X86_AT(c, 0x10590u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010592  add edi, 0x62
    X86_AT(c, 0x10592u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010595  mov ah, 1
    X86_AT(c, 0x10595u);
    s8(c, 4, 0x1u);
    // 010597  add dx, 0x40
    X86_AT(c, 0x10597u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x40u, 0, 2)); }
    // 01059b  push cs
    X86_AT(c, 0x1059bu);
    push32(c, c.sreg[1]);
    // 01059c  call 0x280
    X86_AT(c, 0x1059cu);
    push32(c, 0x105a1u); f_00000280(c); X86_RET(c, 0x105a1u);
    X86_TICK(c, 58);
    // 0105a1  pop edi
    X86_AT(c, 0x105a1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0105a2  mov ax, word ptr [edi + 4]
    X86_AT(c, 0x105a2u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))));
    // 0105a6  dec ax
    X86_AT(c, 0x105a6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105a8  mov word ptr [edi + 0x5a], ax
    X86_AT(c, 0x105a8u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Au)), (c.r[0] & 0xFFFFu));
    // 0105ac  mov ax, word ptr [edi + 6]
    X86_AT(c, 0x105acu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u))));
    // 0105b0  dec ax
    X86_AT(c, 0x105b0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105b2  mov word ptr [edi + 0x5c], ax
    X86_AT(c, 0x105b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[0] & 0xFFFFu));
    // 0105b6  mov dx, word ptr [edi]
    X86_AT(c, 0x105b6u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0105b9  mov word ptr [edi + 0x52], dx
    X86_AT(c, 0x105b9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[2] & 0xFFFFu));
    // 0105bd  mov word ptr [edi + 0x56], dx
    X86_AT(c, 0x105bdu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[2] & 0xFFFFu));
    // 0105c1  mov bx, word ptr [edi + 2]
    X86_AT(c, 0x105c1u);
    s16(c, 3, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 0105c5  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x105c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 0105c9  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x105c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 0105cd  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x105cdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0105d4  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x105d4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0105da  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x105dau);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0105e1  push ebx
    X86_AT(c, 0x105e1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0105e2  push edx
    X86_AT(c, 0x105e2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0105e3  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x105e3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 0105e7  je 0x105ee
    X86_AT(c, 0x105e7u);
    if (x86_cc(c, 4)) { goto L_105ee; }
    X86_TICK(c, 7);
    // 0105e9  call 0x10bd0
    X86_AT(c, 0x105e9u);
    push32(c, 0x105eeu); f_00010bd0(c); X86_RET(c, 0x105eeu);
L_105ee:
    X86_TICK(c, 24);
    // 0105ee  pop edx
    X86_AT(c, 0x105eeu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0105ef  pop ebx
    X86_AT(c, 0x105efu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0105f0  popfd 
    X86_AT(c, 0x105f0u);
    x86_popfd(c, 4);
    // 0105f1  ret 
    X86_AT(c, 0x105f1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10565u, "ran off the end of a function");
}
void f_00010566(X86Cpu& c) {
    X86_TICK(c, 18);
    // 010566  cli 
    X86_AT(c, 0x10566u);
    c.fl &= ~X86_IF;
    // 010567  push eax
    X86_AT(c, 0x10567u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 010568  push edx
    X86_AT(c, 0x10568u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 010569  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10569u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 01056d  je 0x10574
    X86_AT(c, 0x1056du);
    if (x86_cc(c, 4)) { goto L_10574; }
    X86_TICK(c, 7);
    // 01056f  call 0x10b75
    X86_AT(c, 0x1056fu);
    push32(c, 0x10574u); f_00010b75(c); X86_RET(c, 0x10574u);
L_10574:
    X86_TICK(c, 46);
    // 010574  pop edx
    X86_AT(c, 0x10574u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 010575  pop eax
    X86_AT(c, 0x10575u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 010576  movzx edx, dx
    X86_AT(c, 0x10576u);
    c.r[2] = (c.r[2] & 0xFFFFu);
    // 010579  mov ebx, dword ptr cs:[edx*8 + 0x1065c]
    X86_AT(c, 0x10579u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x1065Cu)));
    // 010581  mov dword ptr [edi + 4], ebx
    X86_AT(c, 0x10581u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 010584  mov ebx, dword ptr cs:[edx*8 + 0x10660]
    X86_AT(c, 0x10584u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x10660u)));
    // 01058c  mov dword ptr [edi], ebx
    X86_AT(c, 0x1058cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[3]);
    // 01058e  push edi
    X86_AT(c, 0x1058eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 01058f  push ds
    X86_AT(c, 0x1058fu);
    push32(c, c.sreg[3]);
    // 010590  pop gs
    X86_AT(c, 0x10590u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010592  add edi, 0x62
    X86_AT(c, 0x10592u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010595  mov ah, 1
    X86_AT(c, 0x10595u);
    s8(c, 4, 0x1u);
    // 010597  add dx, 0x40
    X86_AT(c, 0x10597u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x40u, 0, 2)); }
    // 01059b  push cs
    X86_AT(c, 0x1059bu);
    push32(c, c.sreg[1]);
    // 01059c  call 0x280
    X86_AT(c, 0x1059cu);
    push32(c, 0x105a1u); f_00000280(c); X86_RET(c, 0x105a1u);
    X86_TICK(c, 58);
    // 0105a1  pop edi
    X86_AT(c, 0x105a1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0105a2  mov ax, word ptr [edi + 4]
    X86_AT(c, 0x105a2u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))));
    // 0105a6  dec ax
    X86_AT(c, 0x105a6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105a8  mov word ptr [edi + 0x5a], ax
    X86_AT(c, 0x105a8u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Au)), (c.r[0] & 0xFFFFu));
    // 0105ac  mov ax, word ptr [edi + 6]
    X86_AT(c, 0x105acu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u))));
    // 0105b0  dec ax
    X86_AT(c, 0x105b0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105b2  mov word ptr [edi + 0x5c], ax
    X86_AT(c, 0x105b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[0] & 0xFFFFu));
    // 0105b6  mov dx, word ptr [edi]
    X86_AT(c, 0x105b6u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0105b9  mov word ptr [edi + 0x52], dx
    X86_AT(c, 0x105b9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[2] & 0xFFFFu));
    // 0105bd  mov word ptr [edi + 0x56], dx
    X86_AT(c, 0x105bdu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[2] & 0xFFFFu));
    // 0105c1  mov bx, word ptr [edi + 2]
    X86_AT(c, 0x105c1u);
    s16(c, 3, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 0105c5  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x105c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 0105c9  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x105c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 0105cd  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x105cdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0105d4  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x105d4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0105da  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x105dau);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0105e1  push ebx
    X86_AT(c, 0x105e1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0105e2  push edx
    X86_AT(c, 0x105e2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0105e3  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x105e3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 0105e7  je 0x105ee
    X86_AT(c, 0x105e7u);
    if (x86_cc(c, 4)) { goto L_105ee; }
    X86_TICK(c, 7);
    // 0105e9  call 0x10bd0
    X86_AT(c, 0x105e9u);
    push32(c, 0x105eeu); f_00010bd0(c); X86_RET(c, 0x105eeu);
L_105ee:
    X86_TICK(c, 24);
    // 0105ee  pop edx
    X86_AT(c, 0x105eeu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0105ef  pop ebx
    X86_AT(c, 0x105efu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0105f0  popfd 
    X86_AT(c, 0x105f0u);
    x86_popfd(c, 4);
    // 0105f1  ret 
    X86_AT(c, 0x105f1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10566u, "ran off the end of a function");
}
void f_00010567(X86Cpu& c) {
    X86_TICK(c, 16);
    // 010567  push eax
    X86_AT(c, 0x10567u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 010568  push edx
    X86_AT(c, 0x10568u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 010569  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10569u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 01056d  je 0x10574
    X86_AT(c, 0x1056du);
    if (x86_cc(c, 4)) { goto L_10574; }
    X86_TICK(c, 7);
    // 01056f  call 0x10b75
    X86_AT(c, 0x1056fu);
    push32(c, 0x10574u); f_00010b75(c); X86_RET(c, 0x10574u);
L_10574:
    X86_TICK(c, 46);
    // 010574  pop edx
    X86_AT(c, 0x10574u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 010575  pop eax
    X86_AT(c, 0x10575u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 010576  movzx edx, dx
    X86_AT(c, 0x10576u);
    c.r[2] = (c.r[2] & 0xFFFFu);
    // 010579  mov ebx, dword ptr cs:[edx*8 + 0x1065c]
    X86_AT(c, 0x10579u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x1065Cu)));
    // 010581  mov dword ptr [edi + 4], ebx
    X86_AT(c, 0x10581u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 010584  mov ebx, dword ptr cs:[edx*8 + 0x10660]
    X86_AT(c, 0x10584u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x10660u)));
    // 01058c  mov dword ptr [edi], ebx
    X86_AT(c, 0x1058cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[3]);
    // 01058e  push edi
    X86_AT(c, 0x1058eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 01058f  push ds
    X86_AT(c, 0x1058fu);
    push32(c, c.sreg[3]);
    // 010590  pop gs
    X86_AT(c, 0x10590u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010592  add edi, 0x62
    X86_AT(c, 0x10592u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010595  mov ah, 1
    X86_AT(c, 0x10595u);
    s8(c, 4, 0x1u);
    // 010597  add dx, 0x40
    X86_AT(c, 0x10597u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x40u, 0, 2)); }
    // 01059b  push cs
    X86_AT(c, 0x1059bu);
    push32(c, c.sreg[1]);
    // 01059c  call 0x280
    X86_AT(c, 0x1059cu);
    push32(c, 0x105a1u); f_00000280(c); X86_RET(c, 0x105a1u);
    X86_TICK(c, 58);
    // 0105a1  pop edi
    X86_AT(c, 0x105a1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0105a2  mov ax, word ptr [edi + 4]
    X86_AT(c, 0x105a2u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))));
    // 0105a6  dec ax
    X86_AT(c, 0x105a6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105a8  mov word ptr [edi + 0x5a], ax
    X86_AT(c, 0x105a8u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Au)), (c.r[0] & 0xFFFFu));
    // 0105ac  mov ax, word ptr [edi + 6]
    X86_AT(c, 0x105acu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u))));
    // 0105b0  dec ax
    X86_AT(c, 0x105b0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105b2  mov word ptr [edi + 0x5c], ax
    X86_AT(c, 0x105b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[0] & 0xFFFFu));
    // 0105b6  mov dx, word ptr [edi]
    X86_AT(c, 0x105b6u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0105b9  mov word ptr [edi + 0x52], dx
    X86_AT(c, 0x105b9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[2] & 0xFFFFu));
    // 0105bd  mov word ptr [edi + 0x56], dx
    X86_AT(c, 0x105bdu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[2] & 0xFFFFu));
    // 0105c1  mov bx, word ptr [edi + 2]
    X86_AT(c, 0x105c1u);
    s16(c, 3, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 0105c5  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x105c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 0105c9  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x105c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 0105cd  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x105cdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0105d4  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x105d4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0105da  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x105dau);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0105e1  push ebx
    X86_AT(c, 0x105e1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0105e2  push edx
    X86_AT(c, 0x105e2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0105e3  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x105e3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 0105e7  je 0x105ee
    X86_AT(c, 0x105e7u);
    if (x86_cc(c, 4)) { goto L_105ee; }
    X86_TICK(c, 7);
    // 0105e9  call 0x10bd0
    X86_AT(c, 0x105e9u);
    push32(c, 0x105eeu); f_00010bd0(c); X86_RET(c, 0x105eeu);
L_105ee:
    X86_TICK(c, 24);
    // 0105ee  pop edx
    X86_AT(c, 0x105eeu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0105ef  pop ebx
    X86_AT(c, 0x105efu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0105f0  popfd 
    X86_AT(c, 0x105f0u);
    x86_popfd(c, 4);
    // 0105f1  ret 
    X86_AT(c, 0x105f1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10567u, "ran off the end of a function");
}
void f_00010568(X86Cpu& c) {
    X86_TICK(c, 14);
    // 010568  push edx
    X86_AT(c, 0x10568u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 010569  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10569u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 01056d  je 0x10574
    X86_AT(c, 0x1056du);
    if (x86_cc(c, 4)) { goto L_10574; }
    X86_TICK(c, 7);
    // 01056f  call 0x10b75
    X86_AT(c, 0x1056fu);
    push32(c, 0x10574u); f_00010b75(c); X86_RET(c, 0x10574u);
L_10574:
    X86_TICK(c, 46);
    // 010574  pop edx
    X86_AT(c, 0x10574u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 010575  pop eax
    X86_AT(c, 0x10575u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 010576  movzx edx, dx
    X86_AT(c, 0x10576u);
    c.r[2] = (c.r[2] & 0xFFFFu);
    // 010579  mov ebx, dword ptr cs:[edx*8 + 0x1065c]
    X86_AT(c, 0x10579u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x1065Cu)));
    // 010581  mov dword ptr [edi + 4], ebx
    X86_AT(c, 0x10581u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 010584  mov ebx, dword ptr cs:[edx*8 + 0x10660]
    X86_AT(c, 0x10584u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x10660u)));
    // 01058c  mov dword ptr [edi], ebx
    X86_AT(c, 0x1058cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[3]);
    // 01058e  push edi
    X86_AT(c, 0x1058eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 01058f  push ds
    X86_AT(c, 0x1058fu);
    push32(c, c.sreg[3]);
    // 010590  pop gs
    X86_AT(c, 0x10590u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010592  add edi, 0x62
    X86_AT(c, 0x10592u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010595  mov ah, 1
    X86_AT(c, 0x10595u);
    s8(c, 4, 0x1u);
    // 010597  add dx, 0x40
    X86_AT(c, 0x10597u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x40u, 0, 2)); }
    // 01059b  push cs
    X86_AT(c, 0x1059bu);
    push32(c, c.sreg[1]);
    // 01059c  call 0x280
    X86_AT(c, 0x1059cu);
    push32(c, 0x105a1u); f_00000280(c); X86_RET(c, 0x105a1u);
    X86_TICK(c, 58);
    // 0105a1  pop edi
    X86_AT(c, 0x105a1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0105a2  mov ax, word ptr [edi + 4]
    X86_AT(c, 0x105a2u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))));
    // 0105a6  dec ax
    X86_AT(c, 0x105a6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105a8  mov word ptr [edi + 0x5a], ax
    X86_AT(c, 0x105a8u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Au)), (c.r[0] & 0xFFFFu));
    // 0105ac  mov ax, word ptr [edi + 6]
    X86_AT(c, 0x105acu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u))));
    // 0105b0  dec ax
    X86_AT(c, 0x105b0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105b2  mov word ptr [edi + 0x5c], ax
    X86_AT(c, 0x105b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[0] & 0xFFFFu));
    // 0105b6  mov dx, word ptr [edi]
    X86_AT(c, 0x105b6u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0105b9  mov word ptr [edi + 0x52], dx
    X86_AT(c, 0x105b9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[2] & 0xFFFFu));
    // 0105bd  mov word ptr [edi + 0x56], dx
    X86_AT(c, 0x105bdu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[2] & 0xFFFFu));
    // 0105c1  mov bx, word ptr [edi + 2]
    X86_AT(c, 0x105c1u);
    s16(c, 3, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 0105c5  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x105c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 0105c9  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x105c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 0105cd  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x105cdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0105d4  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x105d4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0105da  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x105dau);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0105e1  push ebx
    X86_AT(c, 0x105e1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0105e2  push edx
    X86_AT(c, 0x105e2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0105e3  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x105e3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 0105e7  je 0x105ee
    X86_AT(c, 0x105e7u);
    if (x86_cc(c, 4)) { goto L_105ee; }
    X86_TICK(c, 7);
    // 0105e9  call 0x10bd0
    X86_AT(c, 0x105e9u);
    push32(c, 0x105eeu); f_00010bd0(c); X86_RET(c, 0x105eeu);
L_105ee:
    X86_TICK(c, 24);
    // 0105ee  pop edx
    X86_AT(c, 0x105eeu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0105ef  pop ebx
    X86_AT(c, 0x105efu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0105f0  popfd 
    X86_AT(c, 0x105f0u);
    x86_popfd(c, 4);
    // 0105f1  ret 
    X86_AT(c, 0x105f1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10568u, "ran off the end of a function");
}
void f_00010569(X86Cpu& c) {
    X86_TICK(c, 12);
    // 010569  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x10569u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 01056d  je 0x10574
    X86_AT(c, 0x1056du);
    if (x86_cc(c, 4)) { goto L_10574; }
    X86_TICK(c, 7);
    // 01056f  call 0x10b75
    X86_AT(c, 0x1056fu);
    push32(c, 0x10574u); f_00010b75(c); X86_RET(c, 0x10574u);
L_10574:
    X86_TICK(c, 46);
    // 010574  pop edx
    X86_AT(c, 0x10574u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 010575  pop eax
    X86_AT(c, 0x10575u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 010576  movzx edx, dx
    X86_AT(c, 0x10576u);
    c.r[2] = (c.r[2] & 0xFFFFu);
    // 010579  mov ebx, dword ptr cs:[edx*8 + 0x1065c]
    X86_AT(c, 0x10579u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x1065Cu)));
    // 010581  mov dword ptr [edi + 4], ebx
    X86_AT(c, 0x10581u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 010584  mov ebx, dword ptr cs:[edx*8 + 0x10660]
    X86_AT(c, 0x10584u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x10660u)));
    // 01058c  mov dword ptr [edi], ebx
    X86_AT(c, 0x1058cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[3]);
    // 01058e  push edi
    X86_AT(c, 0x1058eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 01058f  push ds
    X86_AT(c, 0x1058fu);
    push32(c, c.sreg[3]);
    // 010590  pop gs
    X86_AT(c, 0x10590u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010592  add edi, 0x62
    X86_AT(c, 0x10592u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010595  mov ah, 1
    X86_AT(c, 0x10595u);
    s8(c, 4, 0x1u);
    // 010597  add dx, 0x40
    X86_AT(c, 0x10597u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x40u, 0, 2)); }
    // 01059b  push cs
    X86_AT(c, 0x1059bu);
    push32(c, c.sreg[1]);
    // 01059c  call 0x280
    X86_AT(c, 0x1059cu);
    push32(c, 0x105a1u); f_00000280(c); X86_RET(c, 0x105a1u);
    X86_TICK(c, 58);
    // 0105a1  pop edi
    X86_AT(c, 0x105a1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0105a2  mov ax, word ptr [edi + 4]
    X86_AT(c, 0x105a2u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))));
    // 0105a6  dec ax
    X86_AT(c, 0x105a6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105a8  mov word ptr [edi + 0x5a], ax
    X86_AT(c, 0x105a8u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Au)), (c.r[0] & 0xFFFFu));
    // 0105ac  mov ax, word ptr [edi + 6]
    X86_AT(c, 0x105acu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u))));
    // 0105b0  dec ax
    X86_AT(c, 0x105b0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105b2  mov word ptr [edi + 0x5c], ax
    X86_AT(c, 0x105b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[0] & 0xFFFFu));
    // 0105b6  mov dx, word ptr [edi]
    X86_AT(c, 0x105b6u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0105b9  mov word ptr [edi + 0x52], dx
    X86_AT(c, 0x105b9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[2] & 0xFFFFu));
    // 0105bd  mov word ptr [edi + 0x56], dx
    X86_AT(c, 0x105bdu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[2] & 0xFFFFu));
    // 0105c1  mov bx, word ptr [edi + 2]
    X86_AT(c, 0x105c1u);
    s16(c, 3, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 0105c5  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x105c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 0105c9  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x105c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 0105cd  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x105cdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0105d4  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x105d4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0105da  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x105dau);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0105e1  push ebx
    X86_AT(c, 0x105e1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0105e2  push edx
    X86_AT(c, 0x105e2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0105e3  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x105e3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 0105e7  je 0x105ee
    X86_AT(c, 0x105e7u);
    if (x86_cc(c, 4)) { goto L_105ee; }
    X86_TICK(c, 7);
    // 0105e9  call 0x10bd0
    X86_AT(c, 0x105e9u);
    push32(c, 0x105eeu); f_00010bd0(c); X86_RET(c, 0x105eeu);
L_105ee:
    X86_TICK(c, 24);
    // 0105ee  pop edx
    X86_AT(c, 0x105eeu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0105ef  pop ebx
    X86_AT(c, 0x105efu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0105f0  popfd 
    X86_AT(c, 0x105f0u);
    x86_popfd(c, 4);
    // 0105f1  ret 
    X86_AT(c, 0x105f1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10569u, "ran off the end of a function");
}
void f_0001056d(X86Cpu& c) {
    X86_TICK(c, 5);
    // 01056d  je 0x10574
    X86_AT(c, 0x1056du);
    if (x86_cc(c, 4)) { goto L_10574; }
    X86_TICK(c, 7);
    // 01056f  call 0x10b75
    X86_AT(c, 0x1056fu);
    push32(c, 0x10574u); f_00010b75(c); X86_RET(c, 0x10574u);
L_10574:
    X86_TICK(c, 46);
    // 010574  pop edx
    X86_AT(c, 0x10574u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 010575  pop eax
    X86_AT(c, 0x10575u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 010576  movzx edx, dx
    X86_AT(c, 0x10576u);
    c.r[2] = (c.r[2] & 0xFFFFu);
    // 010579  mov ebx, dword ptr cs:[edx*8 + 0x1065c]
    X86_AT(c, 0x10579u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x1065Cu)));
    // 010581  mov dword ptr [edi + 4], ebx
    X86_AT(c, 0x10581u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 010584  mov ebx, dword ptr cs:[edx*8 + 0x10660]
    X86_AT(c, 0x10584u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x10660u)));
    // 01058c  mov dword ptr [edi], ebx
    X86_AT(c, 0x1058cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[3]);
    // 01058e  push edi
    X86_AT(c, 0x1058eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 01058f  push ds
    X86_AT(c, 0x1058fu);
    push32(c, c.sreg[3]);
    // 010590  pop gs
    X86_AT(c, 0x10590u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010592  add edi, 0x62
    X86_AT(c, 0x10592u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010595  mov ah, 1
    X86_AT(c, 0x10595u);
    s8(c, 4, 0x1u);
    // 010597  add dx, 0x40
    X86_AT(c, 0x10597u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x40u, 0, 2)); }
    // 01059b  push cs
    X86_AT(c, 0x1059bu);
    push32(c, c.sreg[1]);
    // 01059c  call 0x280
    X86_AT(c, 0x1059cu);
    push32(c, 0x105a1u); f_00000280(c); X86_RET(c, 0x105a1u);
    X86_TICK(c, 58);
    // 0105a1  pop edi
    X86_AT(c, 0x105a1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0105a2  mov ax, word ptr [edi + 4]
    X86_AT(c, 0x105a2u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))));
    // 0105a6  dec ax
    X86_AT(c, 0x105a6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105a8  mov word ptr [edi + 0x5a], ax
    X86_AT(c, 0x105a8u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Au)), (c.r[0] & 0xFFFFu));
    // 0105ac  mov ax, word ptr [edi + 6]
    X86_AT(c, 0x105acu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u))));
    // 0105b0  dec ax
    X86_AT(c, 0x105b0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105b2  mov word ptr [edi + 0x5c], ax
    X86_AT(c, 0x105b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[0] & 0xFFFFu));
    // 0105b6  mov dx, word ptr [edi]
    X86_AT(c, 0x105b6u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0105b9  mov word ptr [edi + 0x52], dx
    X86_AT(c, 0x105b9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[2] & 0xFFFFu));
    // 0105bd  mov word ptr [edi + 0x56], dx
    X86_AT(c, 0x105bdu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[2] & 0xFFFFu));
    // 0105c1  mov bx, word ptr [edi + 2]
    X86_AT(c, 0x105c1u);
    s16(c, 3, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 0105c5  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x105c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 0105c9  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x105c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 0105cd  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x105cdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0105d4  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x105d4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0105da  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x105dau);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0105e1  push ebx
    X86_AT(c, 0x105e1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0105e2  push edx
    X86_AT(c, 0x105e2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0105e3  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x105e3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 0105e7  je 0x105ee
    X86_AT(c, 0x105e7u);
    if (x86_cc(c, 4)) { goto L_105ee; }
    X86_TICK(c, 7);
    // 0105e9  call 0x10bd0
    X86_AT(c, 0x105e9u);
    push32(c, 0x105eeu); f_00010bd0(c); X86_RET(c, 0x105eeu);
L_105ee:
    X86_TICK(c, 24);
    // 0105ee  pop edx
    X86_AT(c, 0x105eeu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0105ef  pop ebx
    X86_AT(c, 0x105efu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0105f0  popfd 
    X86_AT(c, 0x105f0u);
    x86_popfd(c, 4);
    // 0105f1  ret 
    X86_AT(c, 0x105f1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1056du, "ran off the end of a function");
}
void f_00010574(X86Cpu& c) {
    X86_TICK(c, 46);
    // 010574  pop edx
    X86_AT(c, 0x10574u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 010575  pop eax
    X86_AT(c, 0x10575u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 010576  movzx edx, dx
    X86_AT(c, 0x10576u);
    c.r[2] = (c.r[2] & 0xFFFFu);
    // 010579  mov ebx, dword ptr cs:[edx*8 + 0x1065c]
    X86_AT(c, 0x10579u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x1065Cu)));
    // 010581  mov dword ptr [edi + 4], ebx
    X86_AT(c, 0x10581u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 010584  mov ebx, dword ptr cs:[edx*8 + 0x10660]
    X86_AT(c, 0x10584u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x10660u)));
    // 01058c  mov dword ptr [edi], ebx
    X86_AT(c, 0x1058cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[3]);
    // 01058e  push edi
    X86_AT(c, 0x1058eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 01058f  push ds
    X86_AT(c, 0x1058fu);
    push32(c, c.sreg[3]);
    // 010590  pop gs
    X86_AT(c, 0x10590u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010592  add edi, 0x62
    X86_AT(c, 0x10592u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010595  mov ah, 1
    X86_AT(c, 0x10595u);
    s8(c, 4, 0x1u);
    // 010597  add dx, 0x40
    X86_AT(c, 0x10597u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x40u, 0, 2)); }
    // 01059b  push cs
    X86_AT(c, 0x1059bu);
    push32(c, c.sreg[1]);
    // 01059c  call 0x280
    X86_AT(c, 0x1059cu);
    push32(c, 0x105a1u); f_00000280(c); X86_RET(c, 0x105a1u);
    X86_TICK(c, 58);
    // 0105a1  pop edi
    X86_AT(c, 0x105a1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0105a2  mov ax, word ptr [edi + 4]
    X86_AT(c, 0x105a2u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))));
    // 0105a6  dec ax
    X86_AT(c, 0x105a6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105a8  mov word ptr [edi + 0x5a], ax
    X86_AT(c, 0x105a8u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Au)), (c.r[0] & 0xFFFFu));
    // 0105ac  mov ax, word ptr [edi + 6]
    X86_AT(c, 0x105acu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u))));
    // 0105b0  dec ax
    X86_AT(c, 0x105b0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105b2  mov word ptr [edi + 0x5c], ax
    X86_AT(c, 0x105b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[0] & 0xFFFFu));
    // 0105b6  mov dx, word ptr [edi]
    X86_AT(c, 0x105b6u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0105b9  mov word ptr [edi + 0x52], dx
    X86_AT(c, 0x105b9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[2] & 0xFFFFu));
    // 0105bd  mov word ptr [edi + 0x56], dx
    X86_AT(c, 0x105bdu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[2] & 0xFFFFu));
    // 0105c1  mov bx, word ptr [edi + 2]
    X86_AT(c, 0x105c1u);
    s16(c, 3, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 0105c5  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x105c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 0105c9  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x105c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 0105cd  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x105cdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0105d4  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x105d4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0105da  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x105dau);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0105e1  push ebx
    X86_AT(c, 0x105e1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0105e2  push edx
    X86_AT(c, 0x105e2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0105e3  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x105e3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 0105e7  je 0x105ee
    X86_AT(c, 0x105e7u);
    if (x86_cc(c, 4)) { goto L_105ee; }
    X86_TICK(c, 7);
    // 0105e9  call 0x10bd0
    X86_AT(c, 0x105e9u);
    push32(c, 0x105eeu); f_00010bd0(c); X86_RET(c, 0x105eeu);
L_105ee:
    X86_TICK(c, 24);
    // 0105ee  pop edx
    X86_AT(c, 0x105eeu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0105ef  pop ebx
    X86_AT(c, 0x105efu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0105f0  popfd 
    X86_AT(c, 0x105f0u);
    x86_popfd(c, 4);
    // 0105f1  ret 
    X86_AT(c, 0x105f1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10574u, "ran off the end of a function");
}
void f_00010575(X86Cpu& c) {
    X86_TICK(c, 42);
    // 010575  pop eax
    X86_AT(c, 0x10575u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 010576  movzx edx, dx
    X86_AT(c, 0x10576u);
    c.r[2] = (c.r[2] & 0xFFFFu);
    // 010579  mov ebx, dword ptr cs:[edx*8 + 0x1065c]
    X86_AT(c, 0x10579u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x1065Cu)));
    // 010581  mov dword ptr [edi + 4], ebx
    X86_AT(c, 0x10581u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 010584  mov ebx, dword ptr cs:[edx*8 + 0x10660]
    X86_AT(c, 0x10584u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x10660u)));
    // 01058c  mov dword ptr [edi], ebx
    X86_AT(c, 0x1058cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[3]);
    // 01058e  push edi
    X86_AT(c, 0x1058eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 01058f  push ds
    X86_AT(c, 0x1058fu);
    push32(c, c.sreg[3]);
    // 010590  pop gs
    X86_AT(c, 0x10590u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010592  add edi, 0x62
    X86_AT(c, 0x10592u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010595  mov ah, 1
    X86_AT(c, 0x10595u);
    s8(c, 4, 0x1u);
    // 010597  add dx, 0x40
    X86_AT(c, 0x10597u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x40u, 0, 2)); }
    // 01059b  push cs
    X86_AT(c, 0x1059bu);
    push32(c, c.sreg[1]);
    // 01059c  call 0x280
    X86_AT(c, 0x1059cu);
    push32(c, 0x105a1u); f_00000280(c); X86_RET(c, 0x105a1u);
    X86_TICK(c, 58);
    // 0105a1  pop edi
    X86_AT(c, 0x105a1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0105a2  mov ax, word ptr [edi + 4]
    X86_AT(c, 0x105a2u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))));
    // 0105a6  dec ax
    X86_AT(c, 0x105a6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105a8  mov word ptr [edi + 0x5a], ax
    X86_AT(c, 0x105a8u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Au)), (c.r[0] & 0xFFFFu));
    // 0105ac  mov ax, word ptr [edi + 6]
    X86_AT(c, 0x105acu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u))));
    // 0105b0  dec ax
    X86_AT(c, 0x105b0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105b2  mov word ptr [edi + 0x5c], ax
    X86_AT(c, 0x105b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[0] & 0xFFFFu));
    // 0105b6  mov dx, word ptr [edi]
    X86_AT(c, 0x105b6u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0105b9  mov word ptr [edi + 0x52], dx
    X86_AT(c, 0x105b9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[2] & 0xFFFFu));
    // 0105bd  mov word ptr [edi + 0x56], dx
    X86_AT(c, 0x105bdu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[2] & 0xFFFFu));
    // 0105c1  mov bx, word ptr [edi + 2]
    X86_AT(c, 0x105c1u);
    s16(c, 3, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 0105c5  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x105c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 0105c9  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x105c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 0105cd  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x105cdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0105d4  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x105d4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0105da  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x105dau);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0105e1  push ebx
    X86_AT(c, 0x105e1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0105e2  push edx
    X86_AT(c, 0x105e2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0105e3  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x105e3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 0105e7  je 0x105ee
    X86_AT(c, 0x105e7u);
    if (x86_cc(c, 4)) { goto L_105ee; }
    X86_TICK(c, 7);
    // 0105e9  call 0x10bd0
    X86_AT(c, 0x105e9u);
    push32(c, 0x105eeu); f_00010bd0(c); X86_RET(c, 0x105eeu);
L_105ee:
    X86_TICK(c, 24);
    // 0105ee  pop edx
    X86_AT(c, 0x105eeu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0105ef  pop ebx
    X86_AT(c, 0x105efu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0105f0  popfd 
    X86_AT(c, 0x105f0u);
    x86_popfd(c, 4);
    // 0105f1  ret 
    X86_AT(c, 0x105f1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10575u, "ran off the end of a function");
}
void f_00010576(X86Cpu& c) {
    X86_TICK(c, 38);
    // 010576  movzx edx, dx
    X86_AT(c, 0x10576u);
    c.r[2] = (c.r[2] & 0xFFFFu);
    // 010579  mov ebx, dword ptr cs:[edx*8 + 0x1065c]
    X86_AT(c, 0x10579u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x1065Cu)));
    // 010581  mov dword ptr [edi + 4], ebx
    X86_AT(c, 0x10581u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 010584  mov ebx, dword ptr cs:[edx*8 + 0x10660]
    X86_AT(c, 0x10584u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x10660u)));
    // 01058c  mov dword ptr [edi], ebx
    X86_AT(c, 0x1058cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[3]);
    // 01058e  push edi
    X86_AT(c, 0x1058eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 01058f  push ds
    X86_AT(c, 0x1058fu);
    push32(c, c.sreg[3]);
    // 010590  pop gs
    X86_AT(c, 0x10590u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010592  add edi, 0x62
    X86_AT(c, 0x10592u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010595  mov ah, 1
    X86_AT(c, 0x10595u);
    s8(c, 4, 0x1u);
    // 010597  add dx, 0x40
    X86_AT(c, 0x10597u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x40u, 0, 2)); }
    // 01059b  push cs
    X86_AT(c, 0x1059bu);
    push32(c, c.sreg[1]);
    // 01059c  call 0x280
    X86_AT(c, 0x1059cu);
    push32(c, 0x105a1u); f_00000280(c); X86_RET(c, 0x105a1u);
    X86_TICK(c, 58);
    // 0105a1  pop edi
    X86_AT(c, 0x105a1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0105a2  mov ax, word ptr [edi + 4]
    X86_AT(c, 0x105a2u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))));
    // 0105a6  dec ax
    X86_AT(c, 0x105a6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105a8  mov word ptr [edi + 0x5a], ax
    X86_AT(c, 0x105a8u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Au)), (c.r[0] & 0xFFFFu));
    // 0105ac  mov ax, word ptr [edi + 6]
    X86_AT(c, 0x105acu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u))));
    // 0105b0  dec ax
    X86_AT(c, 0x105b0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105b2  mov word ptr [edi + 0x5c], ax
    X86_AT(c, 0x105b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[0] & 0xFFFFu));
    // 0105b6  mov dx, word ptr [edi]
    X86_AT(c, 0x105b6u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0105b9  mov word ptr [edi + 0x52], dx
    X86_AT(c, 0x105b9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[2] & 0xFFFFu));
    // 0105bd  mov word ptr [edi + 0x56], dx
    X86_AT(c, 0x105bdu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[2] & 0xFFFFu));
    // 0105c1  mov bx, word ptr [edi + 2]
    X86_AT(c, 0x105c1u);
    s16(c, 3, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 0105c5  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x105c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 0105c9  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x105c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 0105cd  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x105cdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0105d4  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x105d4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0105da  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x105dau);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0105e1  push ebx
    X86_AT(c, 0x105e1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0105e2  push edx
    X86_AT(c, 0x105e2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0105e3  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x105e3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 0105e7  je 0x105ee
    X86_AT(c, 0x105e7u);
    if (x86_cc(c, 4)) { goto L_105ee; }
    X86_TICK(c, 7);
    // 0105e9  call 0x10bd0
    X86_AT(c, 0x105e9u);
    push32(c, 0x105eeu); f_00010bd0(c); X86_RET(c, 0x105eeu);
L_105ee:
    X86_TICK(c, 24);
    // 0105ee  pop edx
    X86_AT(c, 0x105eeu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0105ef  pop ebx
    X86_AT(c, 0x105efu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0105f0  popfd 
    X86_AT(c, 0x105f0u);
    x86_popfd(c, 4);
    // 0105f1  ret 
    X86_AT(c, 0x105f1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10576u, "ran off the end of a function");
}
void f_00010579(X86Cpu& c) {
    X86_TICK(c, 35);
    // 010579  mov ebx, dword ptr cs:[edx*8 + 0x1065c]
    X86_AT(c, 0x10579u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x1065Cu)));
    // 010581  mov dword ptr [edi + 4], ebx
    X86_AT(c, 0x10581u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 010584  mov ebx, dword ptr cs:[edx*8 + 0x10660]
    X86_AT(c, 0x10584u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x10660u)));
    // 01058c  mov dword ptr [edi], ebx
    X86_AT(c, 0x1058cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[3]);
    // 01058e  push edi
    X86_AT(c, 0x1058eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 01058f  push ds
    X86_AT(c, 0x1058fu);
    push32(c, c.sreg[3]);
    // 010590  pop gs
    X86_AT(c, 0x10590u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010592  add edi, 0x62
    X86_AT(c, 0x10592u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010595  mov ah, 1
    X86_AT(c, 0x10595u);
    s8(c, 4, 0x1u);
    // 010597  add dx, 0x40
    X86_AT(c, 0x10597u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x40u, 0, 2)); }
    // 01059b  push cs
    X86_AT(c, 0x1059bu);
    push32(c, c.sreg[1]);
    // 01059c  call 0x280
    X86_AT(c, 0x1059cu);
    push32(c, 0x105a1u); f_00000280(c); X86_RET(c, 0x105a1u);
    X86_TICK(c, 58);
    // 0105a1  pop edi
    X86_AT(c, 0x105a1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0105a2  mov ax, word ptr [edi + 4]
    X86_AT(c, 0x105a2u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))));
    // 0105a6  dec ax
    X86_AT(c, 0x105a6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105a8  mov word ptr [edi + 0x5a], ax
    X86_AT(c, 0x105a8u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Au)), (c.r[0] & 0xFFFFu));
    // 0105ac  mov ax, word ptr [edi + 6]
    X86_AT(c, 0x105acu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u))));
    // 0105b0  dec ax
    X86_AT(c, 0x105b0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105b2  mov word ptr [edi + 0x5c], ax
    X86_AT(c, 0x105b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[0] & 0xFFFFu));
    // 0105b6  mov dx, word ptr [edi]
    X86_AT(c, 0x105b6u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0105b9  mov word ptr [edi + 0x52], dx
    X86_AT(c, 0x105b9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[2] & 0xFFFFu));
    // 0105bd  mov word ptr [edi + 0x56], dx
    X86_AT(c, 0x105bdu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[2] & 0xFFFFu));
    // 0105c1  mov bx, word ptr [edi + 2]
    X86_AT(c, 0x105c1u);
    s16(c, 3, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 0105c5  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x105c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 0105c9  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x105c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 0105cd  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x105cdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0105d4  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x105d4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0105da  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x105dau);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0105e1  push ebx
    X86_AT(c, 0x105e1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0105e2  push edx
    X86_AT(c, 0x105e2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0105e3  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x105e3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 0105e7  je 0x105ee
    X86_AT(c, 0x105e7u);
    if (x86_cc(c, 4)) { goto L_105ee; }
    X86_TICK(c, 7);
    // 0105e9  call 0x10bd0
    X86_AT(c, 0x105e9u);
    push32(c, 0x105eeu); f_00010bd0(c); X86_RET(c, 0x105eeu);
L_105ee:
    X86_TICK(c, 24);
    // 0105ee  pop edx
    X86_AT(c, 0x105eeu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0105ef  pop ebx
    X86_AT(c, 0x105efu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0105f0  popfd 
    X86_AT(c, 0x105f0u);
    x86_popfd(c, 4);
    // 0105f1  ret 
    X86_AT(c, 0x105f1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10579u, "ran off the end of a function");
}
void f_00010581(X86Cpu& c) {
    X86_TICK(c, 31);
    // 010581  mov dword ptr [edi + 4], ebx
    X86_AT(c, 0x10581u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 010584  mov ebx, dword ptr cs:[edx*8 + 0x10660]
    X86_AT(c, 0x10584u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x10660u)));
    // 01058c  mov dword ptr [edi], ebx
    X86_AT(c, 0x1058cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[3]);
    // 01058e  push edi
    X86_AT(c, 0x1058eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 01058f  push ds
    X86_AT(c, 0x1058fu);
    push32(c, c.sreg[3]);
    // 010590  pop gs
    X86_AT(c, 0x10590u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010592  add edi, 0x62
    X86_AT(c, 0x10592u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010595  mov ah, 1
    X86_AT(c, 0x10595u);
    s8(c, 4, 0x1u);
    // 010597  add dx, 0x40
    X86_AT(c, 0x10597u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x40u, 0, 2)); }
    // 01059b  push cs
    X86_AT(c, 0x1059bu);
    push32(c, c.sreg[1]);
    // 01059c  call 0x280
    X86_AT(c, 0x1059cu);
    push32(c, 0x105a1u); f_00000280(c); X86_RET(c, 0x105a1u);
    X86_TICK(c, 58);
    // 0105a1  pop edi
    X86_AT(c, 0x105a1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0105a2  mov ax, word ptr [edi + 4]
    X86_AT(c, 0x105a2u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))));
    // 0105a6  dec ax
    X86_AT(c, 0x105a6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105a8  mov word ptr [edi + 0x5a], ax
    X86_AT(c, 0x105a8u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Au)), (c.r[0] & 0xFFFFu));
    // 0105ac  mov ax, word ptr [edi + 6]
    X86_AT(c, 0x105acu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u))));
    // 0105b0  dec ax
    X86_AT(c, 0x105b0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105b2  mov word ptr [edi + 0x5c], ax
    X86_AT(c, 0x105b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[0] & 0xFFFFu));
    // 0105b6  mov dx, word ptr [edi]
    X86_AT(c, 0x105b6u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0105b9  mov word ptr [edi + 0x52], dx
    X86_AT(c, 0x105b9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[2] & 0xFFFFu));
    // 0105bd  mov word ptr [edi + 0x56], dx
    X86_AT(c, 0x105bdu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[2] & 0xFFFFu));
    // 0105c1  mov bx, word ptr [edi + 2]
    X86_AT(c, 0x105c1u);
    s16(c, 3, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 0105c5  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x105c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 0105c9  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x105c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 0105cd  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x105cdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0105d4  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x105d4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0105da  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x105dau);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0105e1  push ebx
    X86_AT(c, 0x105e1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0105e2  push edx
    X86_AT(c, 0x105e2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0105e3  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x105e3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 0105e7  je 0x105ee
    X86_AT(c, 0x105e7u);
    if (x86_cc(c, 4)) { goto L_105ee; }
    X86_TICK(c, 7);
    // 0105e9  call 0x10bd0
    X86_AT(c, 0x105e9u);
    push32(c, 0x105eeu); f_00010bd0(c); X86_RET(c, 0x105eeu);
L_105ee:
    X86_TICK(c, 24);
    // 0105ee  pop edx
    X86_AT(c, 0x105eeu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0105ef  pop ebx
    X86_AT(c, 0x105efu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0105f0  popfd 
    X86_AT(c, 0x105f0u);
    x86_popfd(c, 4);
    // 0105f1  ret 
    X86_AT(c, 0x105f1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10581u, "ran off the end of a function");
}
void f_00010584(X86Cpu& c) {
    X86_TICK(c, 29);
    // 010584  mov ebx, dword ptr cs:[edx*8 + 0x10660]
    X86_AT(c, 0x10584u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 8 + 0x10660u)));
    // 01058c  mov dword ptr [edi], ebx
    X86_AT(c, 0x1058cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[3]);
    // 01058e  push edi
    X86_AT(c, 0x1058eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 01058f  push ds
    X86_AT(c, 0x1058fu);
    push32(c, c.sreg[3]);
    // 010590  pop gs
    X86_AT(c, 0x10590u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010592  add edi, 0x62
    X86_AT(c, 0x10592u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010595  mov ah, 1
    X86_AT(c, 0x10595u);
    s8(c, 4, 0x1u);
    // 010597  add dx, 0x40
    X86_AT(c, 0x10597u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x40u, 0, 2)); }
    // 01059b  push cs
    X86_AT(c, 0x1059bu);
    push32(c, c.sreg[1]);
    // 01059c  call 0x280
    X86_AT(c, 0x1059cu);
    push32(c, 0x105a1u); f_00000280(c); X86_RET(c, 0x105a1u);
    X86_TICK(c, 58);
    // 0105a1  pop edi
    X86_AT(c, 0x105a1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0105a2  mov ax, word ptr [edi + 4]
    X86_AT(c, 0x105a2u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))));
    // 0105a6  dec ax
    X86_AT(c, 0x105a6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105a8  mov word ptr [edi + 0x5a], ax
    X86_AT(c, 0x105a8u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Au)), (c.r[0] & 0xFFFFu));
    // 0105ac  mov ax, word ptr [edi + 6]
    X86_AT(c, 0x105acu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u))));
    // 0105b0  dec ax
    X86_AT(c, 0x105b0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105b2  mov word ptr [edi + 0x5c], ax
    X86_AT(c, 0x105b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[0] & 0xFFFFu));
    // 0105b6  mov dx, word ptr [edi]
    X86_AT(c, 0x105b6u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0105b9  mov word ptr [edi + 0x52], dx
    X86_AT(c, 0x105b9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[2] & 0xFFFFu));
    // 0105bd  mov word ptr [edi + 0x56], dx
    X86_AT(c, 0x105bdu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[2] & 0xFFFFu));
    // 0105c1  mov bx, word ptr [edi + 2]
    X86_AT(c, 0x105c1u);
    s16(c, 3, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 0105c5  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x105c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 0105c9  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x105c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 0105cd  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x105cdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0105d4  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x105d4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0105da  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x105dau);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0105e1  push ebx
    X86_AT(c, 0x105e1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0105e2  push edx
    X86_AT(c, 0x105e2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0105e3  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x105e3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 0105e7  je 0x105ee
    X86_AT(c, 0x105e7u);
    if (x86_cc(c, 4)) { goto L_105ee; }
    X86_TICK(c, 7);
    // 0105e9  call 0x10bd0
    X86_AT(c, 0x105e9u);
    push32(c, 0x105eeu); f_00010bd0(c); X86_RET(c, 0x105eeu);
L_105ee:
    X86_TICK(c, 24);
    // 0105ee  pop edx
    X86_AT(c, 0x105eeu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0105ef  pop ebx
    X86_AT(c, 0x105efu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0105f0  popfd 
    X86_AT(c, 0x105f0u);
    x86_popfd(c, 4);
    // 0105f1  ret 
    X86_AT(c, 0x105f1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10584u, "ran off the end of a function");
}
void f_0001058c(X86Cpu& c) {
    X86_TICK(c, 25);
    // 01058c  mov dword ptr [edi], ebx
    X86_AT(c, 0x1058cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[3]);
    // 01058e  push edi
    X86_AT(c, 0x1058eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 01058f  push ds
    X86_AT(c, 0x1058fu);
    push32(c, c.sreg[3]);
    // 010590  pop gs
    X86_AT(c, 0x10590u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010592  add edi, 0x62
    X86_AT(c, 0x10592u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010595  mov ah, 1
    X86_AT(c, 0x10595u);
    s8(c, 4, 0x1u);
    // 010597  add dx, 0x40
    X86_AT(c, 0x10597u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x40u, 0, 2)); }
    // 01059b  push cs
    X86_AT(c, 0x1059bu);
    push32(c, c.sreg[1]);
    // 01059c  call 0x280
    X86_AT(c, 0x1059cu);
    push32(c, 0x105a1u); f_00000280(c); X86_RET(c, 0x105a1u);
    X86_TICK(c, 58);
    // 0105a1  pop edi
    X86_AT(c, 0x105a1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0105a2  mov ax, word ptr [edi + 4]
    X86_AT(c, 0x105a2u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))));
    // 0105a6  dec ax
    X86_AT(c, 0x105a6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105a8  mov word ptr [edi + 0x5a], ax
    X86_AT(c, 0x105a8u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Au)), (c.r[0] & 0xFFFFu));
    // 0105ac  mov ax, word ptr [edi + 6]
    X86_AT(c, 0x105acu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u))));
    // 0105b0  dec ax
    X86_AT(c, 0x105b0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105b2  mov word ptr [edi + 0x5c], ax
    X86_AT(c, 0x105b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[0] & 0xFFFFu));
    // 0105b6  mov dx, word ptr [edi]
    X86_AT(c, 0x105b6u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0105b9  mov word ptr [edi + 0x52], dx
    X86_AT(c, 0x105b9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[2] & 0xFFFFu));
    // 0105bd  mov word ptr [edi + 0x56], dx
    X86_AT(c, 0x105bdu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[2] & 0xFFFFu));
    // 0105c1  mov bx, word ptr [edi + 2]
    X86_AT(c, 0x105c1u);
    s16(c, 3, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 0105c5  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x105c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 0105c9  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x105c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 0105cd  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x105cdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0105d4  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x105d4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0105da  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x105dau);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0105e1  push ebx
    X86_AT(c, 0x105e1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0105e2  push edx
    X86_AT(c, 0x105e2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0105e3  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x105e3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 0105e7  je 0x105ee
    X86_AT(c, 0x105e7u);
    if (x86_cc(c, 4)) { goto L_105ee; }
    X86_TICK(c, 7);
    // 0105e9  call 0x10bd0
    X86_AT(c, 0x105e9u);
    push32(c, 0x105eeu); f_00010bd0(c); X86_RET(c, 0x105eeu);
L_105ee:
    X86_TICK(c, 24);
    // 0105ee  pop edx
    X86_AT(c, 0x105eeu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0105ef  pop ebx
    X86_AT(c, 0x105efu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0105f0  popfd 
    X86_AT(c, 0x105f0u);
    x86_popfd(c, 4);
    // 0105f1  ret 
    X86_AT(c, 0x105f1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1058cu, "ran off the end of a function");
}
void f_0001058e(X86Cpu& c) {
    X86_TICK(c, 23);
    // 01058e  push edi
    X86_AT(c, 0x1058eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 01058f  push ds
    X86_AT(c, 0x1058fu);
    push32(c, c.sreg[3]);
    // 010590  pop gs
    X86_AT(c, 0x10590u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010592  add edi, 0x62
    X86_AT(c, 0x10592u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010595  mov ah, 1
    X86_AT(c, 0x10595u);
    s8(c, 4, 0x1u);
    // 010597  add dx, 0x40
    X86_AT(c, 0x10597u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x40u, 0, 2)); }
    // 01059b  push cs
    X86_AT(c, 0x1059bu);
    push32(c, c.sreg[1]);
    // 01059c  call 0x280
    X86_AT(c, 0x1059cu);
    push32(c, 0x105a1u); f_00000280(c); X86_RET(c, 0x105a1u);
    X86_TICK(c, 58);
    // 0105a1  pop edi
    X86_AT(c, 0x105a1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0105a2  mov ax, word ptr [edi + 4]
    X86_AT(c, 0x105a2u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))));
    // 0105a6  dec ax
    X86_AT(c, 0x105a6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105a8  mov word ptr [edi + 0x5a], ax
    X86_AT(c, 0x105a8u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Au)), (c.r[0] & 0xFFFFu));
    // 0105ac  mov ax, word ptr [edi + 6]
    X86_AT(c, 0x105acu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u))));
    // 0105b0  dec ax
    X86_AT(c, 0x105b0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105b2  mov word ptr [edi + 0x5c], ax
    X86_AT(c, 0x105b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[0] & 0xFFFFu));
    // 0105b6  mov dx, word ptr [edi]
    X86_AT(c, 0x105b6u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0105b9  mov word ptr [edi + 0x52], dx
    X86_AT(c, 0x105b9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[2] & 0xFFFFu));
    // 0105bd  mov word ptr [edi + 0x56], dx
    X86_AT(c, 0x105bdu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[2] & 0xFFFFu));
    // 0105c1  mov bx, word ptr [edi + 2]
    X86_AT(c, 0x105c1u);
    s16(c, 3, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 0105c5  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x105c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 0105c9  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x105c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 0105cd  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x105cdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0105d4  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x105d4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0105da  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x105dau);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0105e1  push ebx
    X86_AT(c, 0x105e1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0105e2  push edx
    X86_AT(c, 0x105e2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0105e3  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x105e3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 0105e7  je 0x105ee
    X86_AT(c, 0x105e7u);
    if (x86_cc(c, 4)) { goto L_105ee; }
    X86_TICK(c, 7);
    // 0105e9  call 0x10bd0
    X86_AT(c, 0x105e9u);
    push32(c, 0x105eeu); f_00010bd0(c); X86_RET(c, 0x105eeu);
L_105ee:
    X86_TICK(c, 24);
    // 0105ee  pop edx
    X86_AT(c, 0x105eeu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0105ef  pop ebx
    X86_AT(c, 0x105efu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0105f0  popfd 
    X86_AT(c, 0x105f0u);
    x86_popfd(c, 4);
    // 0105f1  ret 
    X86_AT(c, 0x105f1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1058eu, "ran off the end of a function");
}
void f_0001058f(X86Cpu& c) {
    X86_TICK(c, 21);
    // 01058f  push ds
    X86_AT(c, 0x1058fu);
    push32(c, c.sreg[3]);
    // 010590  pop gs
    X86_AT(c, 0x10590u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010592  add edi, 0x62
    X86_AT(c, 0x10592u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010595  mov ah, 1
    X86_AT(c, 0x10595u);
    s8(c, 4, 0x1u);
    // 010597  add dx, 0x40
    X86_AT(c, 0x10597u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x40u, 0, 2)); }
    // 01059b  push cs
    X86_AT(c, 0x1059bu);
    push32(c, c.sreg[1]);
    // 01059c  call 0x280
    X86_AT(c, 0x1059cu);
    push32(c, 0x105a1u); f_00000280(c); X86_RET(c, 0x105a1u);
    X86_TICK(c, 58);
    // 0105a1  pop edi
    X86_AT(c, 0x105a1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0105a2  mov ax, word ptr [edi + 4]
    X86_AT(c, 0x105a2u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))));
    // 0105a6  dec ax
    X86_AT(c, 0x105a6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105a8  mov word ptr [edi + 0x5a], ax
    X86_AT(c, 0x105a8u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Au)), (c.r[0] & 0xFFFFu));
    // 0105ac  mov ax, word ptr [edi + 6]
    X86_AT(c, 0x105acu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u))));
    // 0105b0  dec ax
    X86_AT(c, 0x105b0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105b2  mov word ptr [edi + 0x5c], ax
    X86_AT(c, 0x105b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[0] & 0xFFFFu));
    // 0105b6  mov dx, word ptr [edi]
    X86_AT(c, 0x105b6u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0105b9  mov word ptr [edi + 0x52], dx
    X86_AT(c, 0x105b9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[2] & 0xFFFFu));
    // 0105bd  mov word ptr [edi + 0x56], dx
    X86_AT(c, 0x105bdu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[2] & 0xFFFFu));
    // 0105c1  mov bx, word ptr [edi + 2]
    X86_AT(c, 0x105c1u);
    s16(c, 3, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 0105c5  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x105c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 0105c9  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x105c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 0105cd  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x105cdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0105d4  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x105d4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0105da  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x105dau);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0105e1  push ebx
    X86_AT(c, 0x105e1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0105e2  push edx
    X86_AT(c, 0x105e2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0105e3  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x105e3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 0105e7  je 0x105ee
    X86_AT(c, 0x105e7u);
    if (x86_cc(c, 4)) { goto L_105ee; }
    X86_TICK(c, 7);
    // 0105e9  call 0x10bd0
    X86_AT(c, 0x105e9u);
    push32(c, 0x105eeu); f_00010bd0(c); X86_RET(c, 0x105eeu);
L_105ee:
    X86_TICK(c, 24);
    // 0105ee  pop edx
    X86_AT(c, 0x105eeu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0105ef  pop ebx
    X86_AT(c, 0x105efu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0105f0  popfd 
    X86_AT(c, 0x105f0u);
    x86_popfd(c, 4);
    // 0105f1  ret 
    X86_AT(c, 0x105f1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1058fu, "ran off the end of a function");
}
void f_00010590(X86Cpu& c) {
    X86_TICK(c, 19);
    // 010590  pop gs
    X86_AT(c, 0x10590u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010592  add edi, 0x62
    X86_AT(c, 0x10592u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010595  mov ah, 1
    X86_AT(c, 0x10595u);
    s8(c, 4, 0x1u);
    // 010597  add dx, 0x40
    X86_AT(c, 0x10597u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x40u, 0, 2)); }
    // 01059b  push cs
    X86_AT(c, 0x1059bu);
    push32(c, c.sreg[1]);
    // 01059c  call 0x280
    X86_AT(c, 0x1059cu);
    push32(c, 0x105a1u); f_00000280(c); X86_RET(c, 0x105a1u);
    X86_TICK(c, 58);
    // 0105a1  pop edi
    X86_AT(c, 0x105a1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0105a2  mov ax, word ptr [edi + 4]
    X86_AT(c, 0x105a2u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))));
    // 0105a6  dec ax
    X86_AT(c, 0x105a6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105a8  mov word ptr [edi + 0x5a], ax
    X86_AT(c, 0x105a8u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Au)), (c.r[0] & 0xFFFFu));
    // 0105ac  mov ax, word ptr [edi + 6]
    X86_AT(c, 0x105acu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u))));
    // 0105b0  dec ax
    X86_AT(c, 0x105b0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105b2  mov word ptr [edi + 0x5c], ax
    X86_AT(c, 0x105b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[0] & 0xFFFFu));
    // 0105b6  mov dx, word ptr [edi]
    X86_AT(c, 0x105b6u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0105b9  mov word ptr [edi + 0x52], dx
    X86_AT(c, 0x105b9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[2] & 0xFFFFu));
    // 0105bd  mov word ptr [edi + 0x56], dx
    X86_AT(c, 0x105bdu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[2] & 0xFFFFu));
    // 0105c1  mov bx, word ptr [edi + 2]
    X86_AT(c, 0x105c1u);
    s16(c, 3, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 0105c5  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x105c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 0105c9  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x105c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 0105cd  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x105cdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0105d4  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x105d4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0105da  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x105dau);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0105e1  push ebx
    X86_AT(c, 0x105e1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0105e2  push edx
    X86_AT(c, 0x105e2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0105e3  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x105e3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 0105e7  je 0x105ee
    X86_AT(c, 0x105e7u);
    if (x86_cc(c, 4)) { goto L_105ee; }
    X86_TICK(c, 7);
    // 0105e9  call 0x10bd0
    X86_AT(c, 0x105e9u);
    push32(c, 0x105eeu); f_00010bd0(c); X86_RET(c, 0x105eeu);
L_105ee:
    X86_TICK(c, 24);
    // 0105ee  pop edx
    X86_AT(c, 0x105eeu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0105ef  pop ebx
    X86_AT(c, 0x105efu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0105f0  popfd 
    X86_AT(c, 0x105f0u);
    x86_popfd(c, 4);
    // 0105f1  ret 
    X86_AT(c, 0x105f1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10590u, "ran off the end of a function");
}
void f_00010592(X86Cpu& c) {
    X86_TICK(c, 15);
    // 010592  add edi, 0x62
    X86_AT(c, 0x10592u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010595  mov ah, 1
    X86_AT(c, 0x10595u);
    s8(c, 4, 0x1u);
    // 010597  add dx, 0x40
    X86_AT(c, 0x10597u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x40u, 0, 2)); }
    // 01059b  push cs
    X86_AT(c, 0x1059bu);
    push32(c, c.sreg[1]);
    // 01059c  call 0x280
    X86_AT(c, 0x1059cu);
    push32(c, 0x105a1u); f_00000280(c); X86_RET(c, 0x105a1u);
    X86_TICK(c, 58);
    // 0105a1  pop edi
    X86_AT(c, 0x105a1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0105a2  mov ax, word ptr [edi + 4]
    X86_AT(c, 0x105a2u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))));
    // 0105a6  dec ax
    X86_AT(c, 0x105a6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105a8  mov word ptr [edi + 0x5a], ax
    X86_AT(c, 0x105a8u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Au)), (c.r[0] & 0xFFFFu));
    // 0105ac  mov ax, word ptr [edi + 6]
    X86_AT(c, 0x105acu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u))));
    // 0105b0  dec ax
    X86_AT(c, 0x105b0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105b2  mov word ptr [edi + 0x5c], ax
    X86_AT(c, 0x105b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[0] & 0xFFFFu));
    // 0105b6  mov dx, word ptr [edi]
    X86_AT(c, 0x105b6u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0105b9  mov word ptr [edi + 0x52], dx
    X86_AT(c, 0x105b9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[2] & 0xFFFFu));
    // 0105bd  mov word ptr [edi + 0x56], dx
    X86_AT(c, 0x105bdu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[2] & 0xFFFFu));
    // 0105c1  mov bx, word ptr [edi + 2]
    X86_AT(c, 0x105c1u);
    s16(c, 3, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 0105c5  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x105c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 0105c9  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x105c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 0105cd  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x105cdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0105d4  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x105d4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0105da  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x105dau);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0105e1  push ebx
    X86_AT(c, 0x105e1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0105e2  push edx
    X86_AT(c, 0x105e2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0105e3  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x105e3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 0105e7  je 0x105ee
    X86_AT(c, 0x105e7u);
    if (x86_cc(c, 4)) { goto L_105ee; }
    X86_TICK(c, 7);
    // 0105e9  call 0x10bd0
    X86_AT(c, 0x105e9u);
    push32(c, 0x105eeu); f_00010bd0(c); X86_RET(c, 0x105eeu);
L_105ee:
    X86_TICK(c, 24);
    // 0105ee  pop edx
    X86_AT(c, 0x105eeu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0105ef  pop ebx
    X86_AT(c, 0x105efu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0105f0  popfd 
    X86_AT(c, 0x105f0u);
    x86_popfd(c, 4);
    // 0105f1  ret 
    X86_AT(c, 0x105f1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10592u, "ran off the end of a function");
}
void f_00010595(X86Cpu& c) {
    X86_TICK(c, 13);
    // 010595  mov ah, 1
    X86_AT(c, 0x10595u);
    s8(c, 4, 0x1u);
    // 010597  add dx, 0x40
    X86_AT(c, 0x10597u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x40u, 0, 2)); }
    // 01059b  push cs
    X86_AT(c, 0x1059bu);
    push32(c, c.sreg[1]);
    // 01059c  call 0x280
    X86_AT(c, 0x1059cu);
    push32(c, 0x105a1u); f_00000280(c); X86_RET(c, 0x105a1u);
    X86_TICK(c, 58);
    // 0105a1  pop edi
    X86_AT(c, 0x105a1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0105a2  mov ax, word ptr [edi + 4]
    X86_AT(c, 0x105a2u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))));
    // 0105a6  dec ax
    X86_AT(c, 0x105a6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105a8  mov word ptr [edi + 0x5a], ax
    X86_AT(c, 0x105a8u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Au)), (c.r[0] & 0xFFFFu));
    // 0105ac  mov ax, word ptr [edi + 6]
    X86_AT(c, 0x105acu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u))));
    // 0105b0  dec ax
    X86_AT(c, 0x105b0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105b2  mov word ptr [edi + 0x5c], ax
    X86_AT(c, 0x105b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[0] & 0xFFFFu));
    // 0105b6  mov dx, word ptr [edi]
    X86_AT(c, 0x105b6u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0105b9  mov word ptr [edi + 0x52], dx
    X86_AT(c, 0x105b9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[2] & 0xFFFFu));
    // 0105bd  mov word ptr [edi + 0x56], dx
    X86_AT(c, 0x105bdu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[2] & 0xFFFFu));
    // 0105c1  mov bx, word ptr [edi + 2]
    X86_AT(c, 0x105c1u);
    s16(c, 3, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 0105c5  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x105c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 0105c9  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x105c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 0105cd  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x105cdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0105d4  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x105d4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0105da  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x105dau);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0105e1  push ebx
    X86_AT(c, 0x105e1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0105e2  push edx
    X86_AT(c, 0x105e2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0105e3  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x105e3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 0105e7  je 0x105ee
    X86_AT(c, 0x105e7u);
    if (x86_cc(c, 4)) { goto L_105ee; }
    X86_TICK(c, 7);
    // 0105e9  call 0x10bd0
    X86_AT(c, 0x105e9u);
    push32(c, 0x105eeu); f_00010bd0(c); X86_RET(c, 0x105eeu);
L_105ee:
    X86_TICK(c, 24);
    // 0105ee  pop edx
    X86_AT(c, 0x105eeu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0105ef  pop ebx
    X86_AT(c, 0x105efu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0105f0  popfd 
    X86_AT(c, 0x105f0u);
    x86_popfd(c, 4);
    // 0105f1  ret 
    X86_AT(c, 0x105f1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10595u, "ran off the end of a function");
}
void f_00010597(X86Cpu& c) {
    X86_TICK(c, 11);
    // 010597  add dx, 0x40
    X86_AT(c, 0x10597u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x40u, 0, 2)); }
    // 01059b  push cs
    X86_AT(c, 0x1059bu);
    push32(c, c.sreg[1]);
    // 01059c  call 0x280
    X86_AT(c, 0x1059cu);
    push32(c, 0x105a1u); f_00000280(c); X86_RET(c, 0x105a1u);
    X86_TICK(c, 58);
    // 0105a1  pop edi
    X86_AT(c, 0x105a1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0105a2  mov ax, word ptr [edi + 4]
    X86_AT(c, 0x105a2u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))));
    // 0105a6  dec ax
    X86_AT(c, 0x105a6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105a8  mov word ptr [edi + 0x5a], ax
    X86_AT(c, 0x105a8u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Au)), (c.r[0] & 0xFFFFu));
    // 0105ac  mov ax, word ptr [edi + 6]
    X86_AT(c, 0x105acu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u))));
    // 0105b0  dec ax
    X86_AT(c, 0x105b0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105b2  mov word ptr [edi + 0x5c], ax
    X86_AT(c, 0x105b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[0] & 0xFFFFu));
    // 0105b6  mov dx, word ptr [edi]
    X86_AT(c, 0x105b6u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0105b9  mov word ptr [edi + 0x52], dx
    X86_AT(c, 0x105b9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[2] & 0xFFFFu));
    // 0105bd  mov word ptr [edi + 0x56], dx
    X86_AT(c, 0x105bdu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[2] & 0xFFFFu));
    // 0105c1  mov bx, word ptr [edi + 2]
    X86_AT(c, 0x105c1u);
    s16(c, 3, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 0105c5  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x105c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 0105c9  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x105c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 0105cd  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x105cdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0105d4  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x105d4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0105da  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x105dau);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0105e1  push ebx
    X86_AT(c, 0x105e1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0105e2  push edx
    X86_AT(c, 0x105e2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0105e3  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x105e3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 0105e7  je 0x105ee
    X86_AT(c, 0x105e7u);
    if (x86_cc(c, 4)) { goto L_105ee; }
    X86_TICK(c, 7);
    // 0105e9  call 0x10bd0
    X86_AT(c, 0x105e9u);
    push32(c, 0x105eeu); f_00010bd0(c); X86_RET(c, 0x105eeu);
L_105ee:
    X86_TICK(c, 24);
    // 0105ee  pop edx
    X86_AT(c, 0x105eeu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0105ef  pop ebx
    X86_AT(c, 0x105efu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0105f0  popfd 
    X86_AT(c, 0x105f0u);
    x86_popfd(c, 4);
    // 0105f1  ret 
    X86_AT(c, 0x105f1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10597u, "ran off the end of a function");
}
void f_0001059b(X86Cpu& c) {
    X86_TICK(c, 9);
    // 01059b  push cs
    X86_AT(c, 0x1059bu);
    push32(c, c.sreg[1]);
    // 01059c  call 0x280
    X86_AT(c, 0x1059cu);
    push32(c, 0x105a1u); f_00000280(c); X86_RET(c, 0x105a1u);
    X86_TICK(c, 58);
    // 0105a1  pop edi
    X86_AT(c, 0x105a1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0105a2  mov ax, word ptr [edi + 4]
    X86_AT(c, 0x105a2u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))));
    // 0105a6  dec ax
    X86_AT(c, 0x105a6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105a8  mov word ptr [edi + 0x5a], ax
    X86_AT(c, 0x105a8u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Au)), (c.r[0] & 0xFFFFu));
    // 0105ac  mov ax, word ptr [edi + 6]
    X86_AT(c, 0x105acu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u))));
    // 0105b0  dec ax
    X86_AT(c, 0x105b0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105b2  mov word ptr [edi + 0x5c], ax
    X86_AT(c, 0x105b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[0] & 0xFFFFu));
    // 0105b6  mov dx, word ptr [edi]
    X86_AT(c, 0x105b6u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0105b9  mov word ptr [edi + 0x52], dx
    X86_AT(c, 0x105b9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[2] & 0xFFFFu));
    // 0105bd  mov word ptr [edi + 0x56], dx
    X86_AT(c, 0x105bdu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[2] & 0xFFFFu));
    // 0105c1  mov bx, word ptr [edi + 2]
    X86_AT(c, 0x105c1u);
    s16(c, 3, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 0105c5  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x105c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 0105c9  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x105c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 0105cd  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x105cdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0105d4  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x105d4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0105da  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x105dau);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0105e1  push ebx
    X86_AT(c, 0x105e1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0105e2  push edx
    X86_AT(c, 0x105e2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0105e3  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x105e3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 0105e7  je 0x105ee
    X86_AT(c, 0x105e7u);
    if (x86_cc(c, 4)) { goto L_105ee; }
    X86_TICK(c, 7);
    // 0105e9  call 0x10bd0
    X86_AT(c, 0x105e9u);
    push32(c, 0x105eeu); f_00010bd0(c); X86_RET(c, 0x105eeu);
L_105ee:
    X86_TICK(c, 24);
    // 0105ee  pop edx
    X86_AT(c, 0x105eeu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0105ef  pop ebx
    X86_AT(c, 0x105efu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0105f0  popfd 
    X86_AT(c, 0x105f0u);
    x86_popfd(c, 4);
    // 0105f1  ret 
    X86_AT(c, 0x105f1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1059bu, "ran off the end of a function");
}
void f_0001059c(X86Cpu& c) {
    X86_TICK(c, 7);
    // 01059c  call 0x280
    X86_AT(c, 0x1059cu);
    push32(c, 0x105a1u); f_00000280(c); X86_RET(c, 0x105a1u);
    X86_TICK(c, 58);
    // 0105a1  pop edi
    X86_AT(c, 0x105a1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0105a2  mov ax, word ptr [edi + 4]
    X86_AT(c, 0x105a2u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))));
    // 0105a6  dec ax
    X86_AT(c, 0x105a6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105a8  mov word ptr [edi + 0x5a], ax
    X86_AT(c, 0x105a8u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Au)), (c.r[0] & 0xFFFFu));
    // 0105ac  mov ax, word ptr [edi + 6]
    X86_AT(c, 0x105acu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u))));
    // 0105b0  dec ax
    X86_AT(c, 0x105b0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105b2  mov word ptr [edi + 0x5c], ax
    X86_AT(c, 0x105b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[0] & 0xFFFFu));
    // 0105b6  mov dx, word ptr [edi]
    X86_AT(c, 0x105b6u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0105b9  mov word ptr [edi + 0x52], dx
    X86_AT(c, 0x105b9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[2] & 0xFFFFu));
    // 0105bd  mov word ptr [edi + 0x56], dx
    X86_AT(c, 0x105bdu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[2] & 0xFFFFu));
    // 0105c1  mov bx, word ptr [edi + 2]
    X86_AT(c, 0x105c1u);
    s16(c, 3, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 0105c5  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x105c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 0105c9  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x105c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 0105cd  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x105cdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0105d4  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x105d4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0105da  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x105dau);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0105e1  push ebx
    X86_AT(c, 0x105e1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0105e2  push edx
    X86_AT(c, 0x105e2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0105e3  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x105e3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 0105e7  je 0x105ee
    X86_AT(c, 0x105e7u);
    if (x86_cc(c, 4)) { goto L_105ee; }
    X86_TICK(c, 7);
    // 0105e9  call 0x10bd0
    X86_AT(c, 0x105e9u);
    push32(c, 0x105eeu); f_00010bd0(c); X86_RET(c, 0x105eeu);
L_105ee:
    X86_TICK(c, 24);
    // 0105ee  pop edx
    X86_AT(c, 0x105eeu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0105ef  pop ebx
    X86_AT(c, 0x105efu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0105f0  popfd 
    X86_AT(c, 0x105f0u);
    x86_popfd(c, 4);
    // 0105f1  ret 
    X86_AT(c, 0x105f1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1059cu, "ran off the end of a function");
}
void f_000105a1(X86Cpu& c) {
    X86_TICK(c, 58);
    // 0105a1  pop edi
    X86_AT(c, 0x105a1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0105a2  mov ax, word ptr [edi + 4]
    X86_AT(c, 0x105a2u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))));
    // 0105a6  dec ax
    X86_AT(c, 0x105a6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105a8  mov word ptr [edi + 0x5a], ax
    X86_AT(c, 0x105a8u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Au)), (c.r[0] & 0xFFFFu));
    // 0105ac  mov ax, word ptr [edi + 6]
    X86_AT(c, 0x105acu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u))));
    // 0105b0  dec ax
    X86_AT(c, 0x105b0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105b2  mov word ptr [edi + 0x5c], ax
    X86_AT(c, 0x105b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[0] & 0xFFFFu));
    // 0105b6  mov dx, word ptr [edi]
    X86_AT(c, 0x105b6u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0105b9  mov word ptr [edi + 0x52], dx
    X86_AT(c, 0x105b9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[2] & 0xFFFFu));
    // 0105bd  mov word ptr [edi + 0x56], dx
    X86_AT(c, 0x105bdu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[2] & 0xFFFFu));
    // 0105c1  mov bx, word ptr [edi + 2]
    X86_AT(c, 0x105c1u);
    s16(c, 3, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 0105c5  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x105c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 0105c9  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x105c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 0105cd  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x105cdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0105d4  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x105d4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0105da  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x105dau);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0105e1  push ebx
    X86_AT(c, 0x105e1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0105e2  push edx
    X86_AT(c, 0x105e2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0105e3  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x105e3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 0105e7  je 0x105ee
    X86_AT(c, 0x105e7u);
    if (x86_cc(c, 4)) { goto L_105ee; }
    X86_TICK(c, 7);
    // 0105e9  call 0x10bd0
    X86_AT(c, 0x105e9u);
    push32(c, 0x105eeu); f_00010bd0(c); X86_RET(c, 0x105eeu);
L_105ee:
    X86_TICK(c, 24);
    // 0105ee  pop edx
    X86_AT(c, 0x105eeu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0105ef  pop ebx
    X86_AT(c, 0x105efu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0105f0  popfd 
    X86_AT(c, 0x105f0u);
    x86_popfd(c, 4);
    // 0105f1  ret 
    X86_AT(c, 0x105f1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x105a1u, "ran off the end of a function");
}
void f_000105a2(X86Cpu& c) {
    X86_TICK(c, 54);
    // 0105a2  mov ax, word ptr [edi + 4]
    X86_AT(c, 0x105a2u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))));
    // 0105a6  dec ax
    X86_AT(c, 0x105a6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105a8  mov word ptr [edi + 0x5a], ax
    X86_AT(c, 0x105a8u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Au)), (c.r[0] & 0xFFFFu));
    // 0105ac  mov ax, word ptr [edi + 6]
    X86_AT(c, 0x105acu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u))));
    // 0105b0  dec ax
    X86_AT(c, 0x105b0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105b2  mov word ptr [edi + 0x5c], ax
    X86_AT(c, 0x105b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[0] & 0xFFFFu));
    // 0105b6  mov dx, word ptr [edi]
    X86_AT(c, 0x105b6u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0105b9  mov word ptr [edi + 0x52], dx
    X86_AT(c, 0x105b9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[2] & 0xFFFFu));
    // 0105bd  mov word ptr [edi + 0x56], dx
    X86_AT(c, 0x105bdu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[2] & 0xFFFFu));
    // 0105c1  mov bx, word ptr [edi + 2]
    X86_AT(c, 0x105c1u);
    s16(c, 3, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 0105c5  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x105c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 0105c9  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x105c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 0105cd  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x105cdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0105d4  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x105d4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0105da  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x105dau);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0105e1  push ebx
    X86_AT(c, 0x105e1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0105e2  push edx
    X86_AT(c, 0x105e2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0105e3  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x105e3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 0105e7  je 0x105ee
    X86_AT(c, 0x105e7u);
    if (x86_cc(c, 4)) { goto L_105ee; }
    X86_TICK(c, 7);
    // 0105e9  call 0x10bd0
    X86_AT(c, 0x105e9u);
    push32(c, 0x105eeu); f_00010bd0(c); X86_RET(c, 0x105eeu);
L_105ee:
    X86_TICK(c, 24);
    // 0105ee  pop edx
    X86_AT(c, 0x105eeu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0105ef  pop ebx
    X86_AT(c, 0x105efu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0105f0  popfd 
    X86_AT(c, 0x105f0u);
    x86_popfd(c, 4);
    // 0105f1  ret 
    X86_AT(c, 0x105f1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x105a2u, "ran off the end of a function");
}
void f_000105a6(X86Cpu& c) {
    X86_TICK(c, 50);
    // 0105a6  dec ax
    X86_AT(c, 0x105a6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105a8  mov word ptr [edi + 0x5a], ax
    X86_AT(c, 0x105a8u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Au)), (c.r[0] & 0xFFFFu));
    // 0105ac  mov ax, word ptr [edi + 6]
    X86_AT(c, 0x105acu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u))));
    // 0105b0  dec ax
    X86_AT(c, 0x105b0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105b2  mov word ptr [edi + 0x5c], ax
    X86_AT(c, 0x105b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[0] & 0xFFFFu));
    // 0105b6  mov dx, word ptr [edi]
    X86_AT(c, 0x105b6u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0105b9  mov word ptr [edi + 0x52], dx
    X86_AT(c, 0x105b9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[2] & 0xFFFFu));
    // 0105bd  mov word ptr [edi + 0x56], dx
    X86_AT(c, 0x105bdu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[2] & 0xFFFFu));
    // 0105c1  mov bx, word ptr [edi + 2]
    X86_AT(c, 0x105c1u);
    s16(c, 3, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 0105c5  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x105c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 0105c9  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x105c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 0105cd  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x105cdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0105d4  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x105d4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0105da  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x105dau);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0105e1  push ebx
    X86_AT(c, 0x105e1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0105e2  push edx
    X86_AT(c, 0x105e2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0105e3  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x105e3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 0105e7  je 0x105ee
    X86_AT(c, 0x105e7u);
    if (x86_cc(c, 4)) { goto L_105ee; }
    X86_TICK(c, 7);
    // 0105e9  call 0x10bd0
    X86_AT(c, 0x105e9u);
    push32(c, 0x105eeu); f_00010bd0(c); X86_RET(c, 0x105eeu);
L_105ee:
    X86_TICK(c, 24);
    // 0105ee  pop edx
    X86_AT(c, 0x105eeu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0105ef  pop ebx
    X86_AT(c, 0x105efu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0105f0  popfd 
    X86_AT(c, 0x105f0u);
    x86_popfd(c, 4);
    // 0105f1  ret 
    X86_AT(c, 0x105f1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x105a6u, "ran off the end of a function");
}
void f_000105a8(X86Cpu& c) {
    X86_TICK(c, 48);
    // 0105a8  mov word ptr [edi + 0x5a], ax
    X86_AT(c, 0x105a8u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Au)), (c.r[0] & 0xFFFFu));
    // 0105ac  mov ax, word ptr [edi + 6]
    X86_AT(c, 0x105acu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u))));
    // 0105b0  dec ax
    X86_AT(c, 0x105b0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105b2  mov word ptr [edi + 0x5c], ax
    X86_AT(c, 0x105b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[0] & 0xFFFFu));
    // 0105b6  mov dx, word ptr [edi]
    X86_AT(c, 0x105b6u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0105b9  mov word ptr [edi + 0x52], dx
    X86_AT(c, 0x105b9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[2] & 0xFFFFu));
    // 0105bd  mov word ptr [edi + 0x56], dx
    X86_AT(c, 0x105bdu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[2] & 0xFFFFu));
    // 0105c1  mov bx, word ptr [edi + 2]
    X86_AT(c, 0x105c1u);
    s16(c, 3, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 0105c5  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x105c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 0105c9  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x105c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 0105cd  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x105cdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0105d4  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x105d4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0105da  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x105dau);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0105e1  push ebx
    X86_AT(c, 0x105e1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0105e2  push edx
    X86_AT(c, 0x105e2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0105e3  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x105e3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 0105e7  je 0x105ee
    X86_AT(c, 0x105e7u);
    if (x86_cc(c, 4)) { goto L_105ee; }
    X86_TICK(c, 7);
    // 0105e9  call 0x10bd0
    X86_AT(c, 0x105e9u);
    push32(c, 0x105eeu); f_00010bd0(c); X86_RET(c, 0x105eeu);
L_105ee:
    X86_TICK(c, 24);
    // 0105ee  pop edx
    X86_AT(c, 0x105eeu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0105ef  pop ebx
    X86_AT(c, 0x105efu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0105f0  popfd 
    X86_AT(c, 0x105f0u);
    x86_popfd(c, 4);
    // 0105f1  ret 
    X86_AT(c, 0x105f1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x105a8u, "ran off the end of a function");
}
void f_000105ac(X86Cpu& c) {
    X86_TICK(c, 46);
    // 0105ac  mov ax, word ptr [edi + 6]
    X86_AT(c, 0x105acu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u))));
    // 0105b0  dec ax
    X86_AT(c, 0x105b0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105b2  mov word ptr [edi + 0x5c], ax
    X86_AT(c, 0x105b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[0] & 0xFFFFu));
    // 0105b6  mov dx, word ptr [edi]
    X86_AT(c, 0x105b6u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0105b9  mov word ptr [edi + 0x52], dx
    X86_AT(c, 0x105b9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[2] & 0xFFFFu));
    // 0105bd  mov word ptr [edi + 0x56], dx
    X86_AT(c, 0x105bdu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[2] & 0xFFFFu));
    // 0105c1  mov bx, word ptr [edi + 2]
    X86_AT(c, 0x105c1u);
    s16(c, 3, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 0105c5  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x105c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 0105c9  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x105c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 0105cd  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x105cdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0105d4  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x105d4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0105da  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x105dau);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0105e1  push ebx
    X86_AT(c, 0x105e1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0105e2  push edx
    X86_AT(c, 0x105e2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0105e3  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x105e3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 0105e7  je 0x105ee
    X86_AT(c, 0x105e7u);
    if (x86_cc(c, 4)) { goto L_105ee; }
    X86_TICK(c, 7);
    // 0105e9  call 0x10bd0
    X86_AT(c, 0x105e9u);
    push32(c, 0x105eeu); f_00010bd0(c); X86_RET(c, 0x105eeu);
L_105ee:
    X86_TICK(c, 24);
    // 0105ee  pop edx
    X86_AT(c, 0x105eeu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0105ef  pop ebx
    X86_AT(c, 0x105efu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0105f0  popfd 
    X86_AT(c, 0x105f0u);
    x86_popfd(c, 4);
    // 0105f1  ret 
    X86_AT(c, 0x105f1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x105acu, "ran off the end of a function");
}
void f_000105b0(X86Cpu& c) {
    X86_TICK(c, 42);
    // 0105b0  dec ax
    X86_AT(c, 0x105b0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0105b2  mov word ptr [edi + 0x5c], ax
    X86_AT(c, 0x105b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[0] & 0xFFFFu));
    // 0105b6  mov dx, word ptr [edi]
    X86_AT(c, 0x105b6u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0105b9  mov word ptr [edi + 0x52], dx
    X86_AT(c, 0x105b9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[2] & 0xFFFFu));
    // 0105bd  mov word ptr [edi + 0x56], dx
    X86_AT(c, 0x105bdu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[2] & 0xFFFFu));
    // 0105c1  mov bx, word ptr [edi + 2]
    X86_AT(c, 0x105c1u);
    s16(c, 3, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 0105c5  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x105c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 0105c9  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x105c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 0105cd  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x105cdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0105d4  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x105d4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0105da  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x105dau);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0105e1  push ebx
    X86_AT(c, 0x105e1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0105e2  push edx
    X86_AT(c, 0x105e2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0105e3  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x105e3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 0105e7  je 0x105ee
    X86_AT(c, 0x105e7u);
    if (x86_cc(c, 4)) { goto L_105ee; }
    X86_TICK(c, 7);
    // 0105e9  call 0x10bd0
    X86_AT(c, 0x105e9u);
    push32(c, 0x105eeu); f_00010bd0(c); X86_RET(c, 0x105eeu);
L_105ee:
    X86_TICK(c, 24);
    // 0105ee  pop edx
    X86_AT(c, 0x105eeu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0105ef  pop ebx
    X86_AT(c, 0x105efu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0105f0  popfd 
    X86_AT(c, 0x105f0u);
    x86_popfd(c, 4);
    // 0105f1  ret 
    X86_AT(c, 0x105f1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x105b0u, "ran off the end of a function");
}
void f_000105b2(X86Cpu& c) {
    X86_TICK(c, 40);
    // 0105b2  mov word ptr [edi + 0x5c], ax
    X86_AT(c, 0x105b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Cu)), (c.r[0] & 0xFFFFu));
    // 0105b6  mov dx, word ptr [edi]
    X86_AT(c, 0x105b6u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0105b9  mov word ptr [edi + 0x52], dx
    X86_AT(c, 0x105b9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[2] & 0xFFFFu));
    // 0105bd  mov word ptr [edi + 0x56], dx
    X86_AT(c, 0x105bdu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[2] & 0xFFFFu));
    // 0105c1  mov bx, word ptr [edi + 2]
    X86_AT(c, 0x105c1u);
    s16(c, 3, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 0105c5  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x105c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 0105c9  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x105c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 0105cd  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x105cdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0105d4  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x105d4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0105da  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x105dau);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0105e1  push ebx
    X86_AT(c, 0x105e1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0105e2  push edx
    X86_AT(c, 0x105e2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0105e3  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x105e3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 0105e7  je 0x105ee
    X86_AT(c, 0x105e7u);
    if (x86_cc(c, 4)) { goto L_105ee; }
    X86_TICK(c, 7);
    // 0105e9  call 0x10bd0
    X86_AT(c, 0x105e9u);
    push32(c, 0x105eeu); f_00010bd0(c); X86_RET(c, 0x105eeu);
L_105ee:
    X86_TICK(c, 24);
    // 0105ee  pop edx
    X86_AT(c, 0x105eeu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0105ef  pop ebx
    X86_AT(c, 0x105efu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0105f0  popfd 
    X86_AT(c, 0x105f0u);
    x86_popfd(c, 4);
    // 0105f1  ret 
    X86_AT(c, 0x105f1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x105b2u, "ran off the end of a function");
}
void f_000105b6(X86Cpu& c) {
    X86_TICK(c, 38);
    // 0105b6  mov dx, word ptr [edi]
    X86_AT(c, 0x105b6u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0105b9  mov word ptr [edi + 0x52], dx
    X86_AT(c, 0x105b9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[2] & 0xFFFFu));
    // 0105bd  mov word ptr [edi + 0x56], dx
    X86_AT(c, 0x105bdu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[2] & 0xFFFFu));
    // 0105c1  mov bx, word ptr [edi + 2]
    X86_AT(c, 0x105c1u);
    s16(c, 3, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 0105c5  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x105c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 0105c9  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x105c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 0105cd  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x105cdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0105d4  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x105d4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0105da  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x105dau);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0105e1  push ebx
    X86_AT(c, 0x105e1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0105e2  push edx
    X86_AT(c, 0x105e2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0105e3  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x105e3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 0105e7  je 0x105ee
    X86_AT(c, 0x105e7u);
    if (x86_cc(c, 4)) { goto L_105ee; }
    X86_TICK(c, 7);
    // 0105e9  call 0x10bd0
    X86_AT(c, 0x105e9u);
    push32(c, 0x105eeu); f_00010bd0(c); X86_RET(c, 0x105eeu);
L_105ee:
    X86_TICK(c, 24);
    // 0105ee  pop edx
    X86_AT(c, 0x105eeu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0105ef  pop ebx
    X86_AT(c, 0x105efu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0105f0  popfd 
    X86_AT(c, 0x105f0u);
    x86_popfd(c, 4);
    // 0105f1  ret 
    X86_AT(c, 0x105f1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x105b6u, "ran off the end of a function");
}
void f_000105b9(X86Cpu& c) {
    X86_TICK(c, 34);
    // 0105b9  mov word ptr [edi + 0x52], dx
    X86_AT(c, 0x105b9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)), (c.r[2] & 0xFFFFu));
    // 0105bd  mov word ptr [edi + 0x56], dx
    X86_AT(c, 0x105bdu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[2] & 0xFFFFu));
    // 0105c1  mov bx, word ptr [edi + 2]
    X86_AT(c, 0x105c1u);
    s16(c, 3, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 0105c5  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x105c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 0105c9  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x105c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 0105cd  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x105cdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0105d4  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x105d4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0105da  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x105dau);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0105e1  push ebx
    X86_AT(c, 0x105e1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0105e2  push edx
    X86_AT(c, 0x105e2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0105e3  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x105e3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 0105e7  je 0x105ee
    X86_AT(c, 0x105e7u);
    if (x86_cc(c, 4)) { goto L_105ee; }
    X86_TICK(c, 7);
    // 0105e9  call 0x10bd0
    X86_AT(c, 0x105e9u);
    push32(c, 0x105eeu); f_00010bd0(c); X86_RET(c, 0x105eeu);
L_105ee:
    X86_TICK(c, 24);
    // 0105ee  pop edx
    X86_AT(c, 0x105eeu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0105ef  pop ebx
    X86_AT(c, 0x105efu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0105f0  popfd 
    X86_AT(c, 0x105f0u);
    x86_popfd(c, 4);
    // 0105f1  ret 
    X86_AT(c, 0x105f1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x105b9u, "ran off the end of a function");
}
void f_000105bd(X86Cpu& c) {
    X86_TICK(c, 32);
    // 0105bd  mov word ptr [edi + 0x56], dx
    X86_AT(c, 0x105bdu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u)), (c.r[2] & 0xFFFFu));
    // 0105c1  mov bx, word ptr [edi + 2]
    X86_AT(c, 0x105c1u);
    s16(c, 3, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 0105c5  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x105c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 0105c9  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x105c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 0105cd  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x105cdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0105d4  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x105d4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0105da  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x105dau);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0105e1  push ebx
    X86_AT(c, 0x105e1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0105e2  push edx
    X86_AT(c, 0x105e2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0105e3  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x105e3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 0105e7  je 0x105ee
    X86_AT(c, 0x105e7u);
    if (x86_cc(c, 4)) { goto L_105ee; }
    X86_TICK(c, 7);
    // 0105e9  call 0x10bd0
    X86_AT(c, 0x105e9u);
    push32(c, 0x105eeu); f_00010bd0(c); X86_RET(c, 0x105eeu);
L_105ee:
    X86_TICK(c, 24);
    // 0105ee  pop edx
    X86_AT(c, 0x105eeu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0105ef  pop ebx
    X86_AT(c, 0x105efu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0105f0  popfd 
    X86_AT(c, 0x105f0u);
    x86_popfd(c, 4);
    // 0105f1  ret 
    X86_AT(c, 0x105f1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x105bdu, "ran off the end of a function");
}
void f_000105c1(X86Cpu& c) {
    X86_TICK(c, 30);
    // 0105c1  mov bx, word ptr [edi + 2]
    X86_AT(c, 0x105c1u);
    s16(c, 3, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 0105c5  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x105c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 0105c9  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x105c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 0105cd  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x105cdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0105d4  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x105d4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0105da  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x105dau);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0105e1  push ebx
    X86_AT(c, 0x105e1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0105e2  push edx
    X86_AT(c, 0x105e2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0105e3  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x105e3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 0105e7  je 0x105ee
    X86_AT(c, 0x105e7u);
    if (x86_cc(c, 4)) { goto L_105ee; }
    X86_TICK(c, 7);
    // 0105e9  call 0x10bd0
    X86_AT(c, 0x105e9u);
    push32(c, 0x105eeu); f_00010bd0(c); X86_RET(c, 0x105eeu);
L_105ee:
    X86_TICK(c, 24);
    // 0105ee  pop edx
    X86_AT(c, 0x105eeu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0105ef  pop ebx
    X86_AT(c, 0x105efu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0105f0  popfd 
    X86_AT(c, 0x105f0u);
    x86_popfd(c, 4);
    // 0105f1  ret 
    X86_AT(c, 0x105f1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x105c1u, "ran off the end of a function");
}
void f_000105c5(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0105c5  mov word ptr [edi + 0x54], bx
    X86_AT(c, 0x105c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u)), (c.r[3] & 0xFFFFu));
    // 0105c9  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x105c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 0105cd  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x105cdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0105d4  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x105d4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0105da  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x105dau);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0105e1  push ebx
    X86_AT(c, 0x105e1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0105e2  push edx
    X86_AT(c, 0x105e2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0105e3  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x105e3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 0105e7  je 0x105ee
    X86_AT(c, 0x105e7u);
    if (x86_cc(c, 4)) { goto L_105ee; }
    X86_TICK(c, 7);
    // 0105e9  call 0x10bd0
    X86_AT(c, 0x105e9u);
    push32(c, 0x105eeu); f_00010bd0(c); X86_RET(c, 0x105eeu);
L_105ee:
    X86_TICK(c, 24);
    // 0105ee  pop edx
    X86_AT(c, 0x105eeu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0105ef  pop ebx
    X86_AT(c, 0x105efu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0105f0  popfd 
    X86_AT(c, 0x105f0u);
    x86_popfd(c, 4);
    // 0105f1  ret 
    X86_AT(c, 0x105f1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x105c5u, "ran off the end of a function");
}
void f_000105c9(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0105c9  mov word ptr [edi + 0x58], bx
    X86_AT(c, 0x105c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 0105cd  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x105cdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0105d4  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x105d4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0105da  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x105dau);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0105e1  push ebx
    X86_AT(c, 0x105e1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0105e2  push edx
    X86_AT(c, 0x105e2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0105e3  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x105e3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 0105e7  je 0x105ee
    X86_AT(c, 0x105e7u);
    if (x86_cc(c, 4)) { goto L_105ee; }
    X86_TICK(c, 7);
    // 0105e9  call 0x10bd0
    X86_AT(c, 0x105e9u);
    push32(c, 0x105eeu); f_00010bd0(c); X86_RET(c, 0x105eeu);
L_105ee:
    X86_TICK(c, 24);
    // 0105ee  pop edx
    X86_AT(c, 0x105eeu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0105ef  pop ebx
    X86_AT(c, 0x105efu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0105f0  popfd 
    X86_AT(c, 0x105f0u);
    x86_popfd(c, 4);
    // 0105f1  ret 
    X86_AT(c, 0x105f1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x105c9u, "ran off the end of a function");
}
void f_000105cd(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0105cd  mov dword ptr [edi + 0x34], 0x109eb
    X86_AT(c, 0x105cdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x34u)), 0x109EBu);
    // 0105d4  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x105d4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0105da  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x105dau);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0105e1  push ebx
    X86_AT(c, 0x105e1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0105e2  push edx
    X86_AT(c, 0x105e2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0105e3  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x105e3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 0105e7  je 0x105ee
    X86_AT(c, 0x105e7u);
    if (x86_cc(c, 4)) { goto L_105ee; }
    X86_TICK(c, 7);
    // 0105e9  call 0x10bd0
    X86_AT(c, 0x105e9u);
    push32(c, 0x105eeu); f_00010bd0(c); X86_RET(c, 0x105eeu);
L_105ee:
    X86_TICK(c, 24);
    // 0105ee  pop edx
    X86_AT(c, 0x105eeu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0105ef  pop ebx
    X86_AT(c, 0x105efu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0105f0  popfd 
    X86_AT(c, 0x105f0u);
    x86_popfd(c, 4);
    // 0105f1  ret 
    X86_AT(c, 0x105f1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x105cdu, "ran off the end of a function");
}
void f_000105d4(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0105d4  mov word ptr [edi + 0x38], 0x110
    X86_AT(c, 0x105d4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x110u);
    // 0105da  mov dword ptr [edi + 0x3a], 0xf000f
    X86_AT(c, 0x105dau);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x3Au)), 0xF000Fu);
    // 0105e1  push ebx
    X86_AT(c, 0x105e1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0105e2  push edx
    X86_AT(c, 0x105e2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0105e3  cmp byte ptr [edi + 0x4d], 0
    X86_AT(c, 0x105e3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4Du))), 0x0u, 0, 1);
    // 0105e7  je 0x105ee
    X86_AT(c, 0x105e7u);
    if (x86_cc(c, 4)) { goto L_105ee; }
    X86_TICK(c, 7);
    // 0105e9  call 0x10bd0
    X86_AT(c, 0x105e9u);
    push32(c, 0x105eeu); f_00010bd0(c); X86_RET(c, 0x105eeu);
L_105ee:
    X86_TICK(c, 24);
    // 0105ee  pop edx
    X86_AT(c, 0x105eeu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0105ef  pop ebx
    X86_AT(c, 0x105efu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0105f0  popfd 
    X86_AT(c, 0x105f0u);
    x86_popfd(c, 4);
    // 0105f1  ret 
    X86_AT(c, 0x105f1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x105d4u, "ran off the end of a function");
}
}
