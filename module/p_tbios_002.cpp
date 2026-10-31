#include "p_tbios_funcs.h"
namespace p_tbios {
void f_0000093d(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00093d  call 0x968
    X86_AT(c, 0x93du);
    push32(c, 0x942u); f_00000968(c); X86_RET(c, 0x942u);
    X86_TICK(c, 7);
    // 000942  jmp 0x955
    X86_AT(c, 0x942u);
    goto L_955;
L_955:
    X86_TICK(c, 13);
    // 000955  mov cl, 6
    X86_AT(c, 0x955u);
    s8(c, 1, 0x6u);
    // 000957  mov bl, 0x11
    X86_AT(c, 0x957u);
    s8(c, 3, 0x11u);
    // 000959  lea edi, [ebp + 0xe2]
    X86_AT(c, 0x959u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 00095f  call 0x658
    X86_AT(c, 0x95fu);
    push32(c, 0x964u); f_00000658(c); X86_RET(c, 0x964u);
    X86_TICK(c, 10);
    // 000964  ret 
    X86_AT(c, 0x964u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x93du, "ran off the end of a function");
}
void f_00000942(X86Cpu& c) {
    X86_TICK(c, 7);
    // 000942  jmp 0x955
    X86_AT(c, 0x942u);
    goto L_955;
L_955:
    X86_TICK(c, 13);
    // 000955  mov cl, 6
    X86_AT(c, 0x955u);
    s8(c, 1, 0x6u);
    // 000957  mov bl, 0x11
    X86_AT(c, 0x957u);
    s8(c, 3, 0x11u);
    // 000959  lea edi, [ebp + 0xe2]
    X86_AT(c, 0x959u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 00095f  call 0x658
    X86_AT(c, 0x95fu);
    push32(c, 0x964u); f_00000658(c); X86_RET(c, 0x964u);
    X86_TICK(c, 10);
    // 000964  ret 
    X86_AT(c, 0x964u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x942u, "ran off the end of a function");
}
void f_00000955(X86Cpu& c) {
    X86_TICK(c, 13);
    // 000955  mov cl, 6
    X86_AT(c, 0x955u);
    s8(c, 1, 0x6u);
    // 000957  mov bl, 0x11
    X86_AT(c, 0x957u);
    s8(c, 3, 0x11u);
    // 000959  lea edi, [ebp + 0xe2]
    X86_AT(c, 0x959u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 00095f  call 0x658
    X86_AT(c, 0x95fu);
    push32(c, 0x964u); f_00000658(c); X86_RET(c, 0x964u);
    X86_TICK(c, 10);
    // 000964  ret 
    X86_AT(c, 0x964u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x955u, "ran off the end of a function");
}
void f_00000957(X86Cpu& c) {
    X86_TICK(c, 11);
    // 000957  mov bl, 0x11
    X86_AT(c, 0x957u);
    s8(c, 3, 0x11u);
    // 000959  lea edi, [ebp + 0xe2]
    X86_AT(c, 0x959u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 00095f  call 0x658
    X86_AT(c, 0x95fu);
    push32(c, 0x964u); f_00000658(c); X86_RET(c, 0x964u);
    X86_TICK(c, 10);
    // 000964  ret 
    X86_AT(c, 0x964u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x957u, "ran off the end of a function");
}
void f_00000959(X86Cpu& c) {
    X86_TICK(c, 9);
    // 000959  lea edi, [ebp + 0xe2]
    X86_AT(c, 0x959u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 00095f  call 0x658
    X86_AT(c, 0x95fu);
    push32(c, 0x964u); f_00000658(c); X86_RET(c, 0x964u);
    X86_TICK(c, 10);
    // 000964  ret 
    X86_AT(c, 0x964u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x959u, "ran off the end of a function");
}
void f_0000095f(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00095f  call 0x658
    X86_AT(c, 0x95fu);
    push32(c, 0x964u); f_00000658(c); X86_RET(c, 0x964u);
    X86_TICK(c, 10);
    // 000964  ret 
    X86_AT(c, 0x964u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x95fu, "ran off the end of a function");
}
void f_00000964(X86Cpu& c) {
    X86_TICK(c, 10);
    // 000964  ret 
    X86_AT(c, 0x964u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x964u, "ran off the end of a function");
}
void f_00000968(X86Cpu& c) {
    X86_TICK(c, 15);
    // 000968  mov cx, word ptr gs:[ebp + 0xf8]
    X86_AT(c, 0x968u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0xF8u))));
    // 000970  mov dx, word ptr gs:[ebp + 0xf6]
    X86_AT(c, 0x970u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u))));
    // 000978  test eax, eax
    X86_AT(c, 0x978u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00097a  jne 0x986
    X86_AT(c, 0x97au);
    if (x86_cc(c, 5)) { goto L_986; }
    X86_TICK(c, 11);
    // 00097c  and cx, 3
    X86_AT(c, 0x97cu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & 0x3u, 2)); }
    // 000980  and dx, 0xf
    X86_AT(c, 0x980u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_logic(c, v & 0xFu, 2)); }
    // 000984  jmp 0x995
    X86_AT(c, 0x984u);
    goto L_995;
L_986:
    X86_TICK(c, 10);
    // 000986  and cx, 0xc
    X86_AT(c, 0x986u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & 0xCu, 2)); }
    // 00098a  shr cx, 2
    X86_AT(c, 0x98au);
    { uint32_t v = (c.r[1] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 2, w); if (w) s16(c, 1, r); }
    // 00098e  and dx, 0xf00
    X86_AT(c, 0x98eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_logic(c, v & 0xF00u, 2)); }
    // 000993  xchg dl, dh
    X86_AT(c, 0x993u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
L_995:
    X86_TICK(c, 143);
    // 000995  mov di, word ptr gs:[ebp + eax*4 + 0xd2]
    X86_AT(c, 0x995u);
    s16(c, 7, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 4 + 0xD2u))));
    // 00099e  mov bx, word ptr gs:[ebp + eax*8 + 0xe8]
    X86_AT(c, 0x99eu);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 8 + 0xE8u))));
    // 0009a7  lea esi, [ebp + eax*8 + 0xe2]
    X86_AT(c, 0x9a7u);
    c.r[6] = (uint32_t)(c.r[5] + c.r[0] * 8 + 0xE2u);
    // 0009ae  mov al, 1
    X86_AT(c, 0x9aeu);
    s8(c, 0, 0x1u);
    // 0009b0  shl al, cl
    X86_AT(c, 0x9b0u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 1, w); if (w) s8(c, 0, r); }
    // 0009b2  mov cl, al
    X86_AT(c, 0x9b2u);
    s8(c, 1, g8(c, 0));
    // 0009b4  mov ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x9b4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))));
    // 0009bc  dec cl
    X86_AT(c, 0x9bcu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 0009be  and al, cl
    X86_AT(c, 0x9beu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 1), 1)); }
    // 0009c0  inc cl
    X86_AT(c, 0x9c0u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_inc(c, v, 1)); }
    // 0009c2  inc dl
    X86_AT(c, 0x9c2u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 0009c4  imul dl
    X86_AT(c, 0x9c4u);
    x86_imul1(c, g8(c, 2), 1);
    // 0009c6  sub di, ax
    X86_AT(c, 0x9c6u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0009c9  mov word ptr gs:[esi + 2], di
    X86_AT(c, 0x9c9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u)), (c.r[7] & 0xFFFFu));
    // 0009ce  mov ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x9ceu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))));
    // 0009d6  cwd 
    X86_AT(c, 0x9d6u);
    s16(c, 2, (c.r[0] & 0x8000u) ? 0xFFFFu : 0u);
    // 0009d8  idiv cx
    X86_AT(c, 0x9d8u);
    x86_idiv(c, (c.r[1] & 0xFFFFu), 2, 0x9d8u);
    // 0009db  mov di, ax
    X86_AT(c, 0x9dbu);
    s16(c, 7, (c.r[0] & 0xFFFFu));
    // 0009de  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x9deu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0009e6  imul bx
    X86_AT(c, 0x9e6u);
    x86_imul1(c, (c.r[3] & 0xFFFFu), 2);
    // 0009e9  add ax, di
    X86_AT(c, 0x9e9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[7] & 0xFFFFu), 0, 2)); }
    // 0009ec  mov word ptr gs:[esi], ax
    X86_AT(c, 0x9ecu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6])), (c.r[0] & 0xFFFFu));
    // 0009f0  ret 
    X86_AT(c, 0x9f0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x968u, "ran off the end of a function");
}
void f_00000970(X86Cpu& c) {
    X86_TICK(c, 11);
    // 000970  mov dx, word ptr gs:[ebp + 0xf6]
    X86_AT(c, 0x970u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u))));
    // 000978  test eax, eax
    X86_AT(c, 0x978u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00097a  jne 0x986
    X86_AT(c, 0x97au);
    if (x86_cc(c, 5)) { goto L_986; }
    X86_TICK(c, 11);
    // 00097c  and cx, 3
    X86_AT(c, 0x97cu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & 0x3u, 2)); }
    // 000980  and dx, 0xf
    X86_AT(c, 0x980u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_logic(c, v & 0xFu, 2)); }
    // 000984  jmp 0x995
    X86_AT(c, 0x984u);
    goto L_995;
L_986:
    X86_TICK(c, 10);
    // 000986  and cx, 0xc
    X86_AT(c, 0x986u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & 0xCu, 2)); }
    // 00098a  shr cx, 2
    X86_AT(c, 0x98au);
    { uint32_t v = (c.r[1] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 2, w); if (w) s16(c, 1, r); }
    // 00098e  and dx, 0xf00
    X86_AT(c, 0x98eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_logic(c, v & 0xF00u, 2)); }
    // 000993  xchg dl, dh
    X86_AT(c, 0x993u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
L_995:
    X86_TICK(c, 143);
    // 000995  mov di, word ptr gs:[ebp + eax*4 + 0xd2]
    X86_AT(c, 0x995u);
    s16(c, 7, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 4 + 0xD2u))));
    // 00099e  mov bx, word ptr gs:[ebp + eax*8 + 0xe8]
    X86_AT(c, 0x99eu);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 8 + 0xE8u))));
    // 0009a7  lea esi, [ebp + eax*8 + 0xe2]
    X86_AT(c, 0x9a7u);
    c.r[6] = (uint32_t)(c.r[5] + c.r[0] * 8 + 0xE2u);
    // 0009ae  mov al, 1
    X86_AT(c, 0x9aeu);
    s8(c, 0, 0x1u);
    // 0009b0  shl al, cl
    X86_AT(c, 0x9b0u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 1, w); if (w) s8(c, 0, r); }
    // 0009b2  mov cl, al
    X86_AT(c, 0x9b2u);
    s8(c, 1, g8(c, 0));
    // 0009b4  mov ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x9b4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))));
    // 0009bc  dec cl
    X86_AT(c, 0x9bcu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 0009be  and al, cl
    X86_AT(c, 0x9beu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 1), 1)); }
    // 0009c0  inc cl
    X86_AT(c, 0x9c0u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_inc(c, v, 1)); }
    // 0009c2  inc dl
    X86_AT(c, 0x9c2u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 0009c4  imul dl
    X86_AT(c, 0x9c4u);
    x86_imul1(c, g8(c, 2), 1);
    // 0009c6  sub di, ax
    X86_AT(c, 0x9c6u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0009c9  mov word ptr gs:[esi + 2], di
    X86_AT(c, 0x9c9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u)), (c.r[7] & 0xFFFFu));
    // 0009ce  mov ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x9ceu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))));
    // 0009d6  cwd 
    X86_AT(c, 0x9d6u);
    s16(c, 2, (c.r[0] & 0x8000u) ? 0xFFFFu : 0u);
    // 0009d8  idiv cx
    X86_AT(c, 0x9d8u);
    x86_idiv(c, (c.r[1] & 0xFFFFu), 2, 0x9d8u);
    // 0009db  mov di, ax
    X86_AT(c, 0x9dbu);
    s16(c, 7, (c.r[0] & 0xFFFFu));
    // 0009de  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x9deu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0009e6  imul bx
    X86_AT(c, 0x9e6u);
    x86_imul1(c, (c.r[3] & 0xFFFFu), 2);
    // 0009e9  add ax, di
    X86_AT(c, 0x9e9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[7] & 0xFFFFu), 0, 2)); }
    // 0009ec  mov word ptr gs:[esi], ax
    X86_AT(c, 0x9ecu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6])), (c.r[0] & 0xFFFFu));
    // 0009f0  ret 
    X86_AT(c, 0x9f0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x970u, "ran off the end of a function");
}
void f_00000978(X86Cpu& c) {
    X86_TICK(c, 7);
    // 000978  test eax, eax
    X86_AT(c, 0x978u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00097a  jne 0x986
    X86_AT(c, 0x97au);
    if (x86_cc(c, 5)) { goto L_986; }
    X86_TICK(c, 11);
    // 00097c  and cx, 3
    X86_AT(c, 0x97cu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & 0x3u, 2)); }
    // 000980  and dx, 0xf
    X86_AT(c, 0x980u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_logic(c, v & 0xFu, 2)); }
    // 000984  jmp 0x995
    X86_AT(c, 0x984u);
    goto L_995;
L_986:
    X86_TICK(c, 10);
    // 000986  and cx, 0xc
    X86_AT(c, 0x986u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & 0xCu, 2)); }
    // 00098a  shr cx, 2
    X86_AT(c, 0x98au);
    { uint32_t v = (c.r[1] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 2, w); if (w) s16(c, 1, r); }
    // 00098e  and dx, 0xf00
    X86_AT(c, 0x98eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_logic(c, v & 0xF00u, 2)); }
    // 000993  xchg dl, dh
    X86_AT(c, 0x993u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
L_995:
    X86_TICK(c, 143);
    // 000995  mov di, word ptr gs:[ebp + eax*4 + 0xd2]
    X86_AT(c, 0x995u);
    s16(c, 7, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 4 + 0xD2u))));
    // 00099e  mov bx, word ptr gs:[ebp + eax*8 + 0xe8]
    X86_AT(c, 0x99eu);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 8 + 0xE8u))));
    // 0009a7  lea esi, [ebp + eax*8 + 0xe2]
    X86_AT(c, 0x9a7u);
    c.r[6] = (uint32_t)(c.r[5] + c.r[0] * 8 + 0xE2u);
    // 0009ae  mov al, 1
    X86_AT(c, 0x9aeu);
    s8(c, 0, 0x1u);
    // 0009b0  shl al, cl
    X86_AT(c, 0x9b0u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 1, w); if (w) s8(c, 0, r); }
    // 0009b2  mov cl, al
    X86_AT(c, 0x9b2u);
    s8(c, 1, g8(c, 0));
    // 0009b4  mov ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x9b4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))));
    // 0009bc  dec cl
    X86_AT(c, 0x9bcu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 0009be  and al, cl
    X86_AT(c, 0x9beu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 1), 1)); }
    // 0009c0  inc cl
    X86_AT(c, 0x9c0u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_inc(c, v, 1)); }
    // 0009c2  inc dl
    X86_AT(c, 0x9c2u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 0009c4  imul dl
    X86_AT(c, 0x9c4u);
    x86_imul1(c, g8(c, 2), 1);
    // 0009c6  sub di, ax
    X86_AT(c, 0x9c6u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0009c9  mov word ptr gs:[esi + 2], di
    X86_AT(c, 0x9c9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u)), (c.r[7] & 0xFFFFu));
    // 0009ce  mov ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x9ceu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))));
    // 0009d6  cwd 
    X86_AT(c, 0x9d6u);
    s16(c, 2, (c.r[0] & 0x8000u) ? 0xFFFFu : 0u);
    // 0009d8  idiv cx
    X86_AT(c, 0x9d8u);
    x86_idiv(c, (c.r[1] & 0xFFFFu), 2, 0x9d8u);
    // 0009db  mov di, ax
    X86_AT(c, 0x9dbu);
    s16(c, 7, (c.r[0] & 0xFFFFu));
    // 0009de  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x9deu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0009e6  imul bx
    X86_AT(c, 0x9e6u);
    x86_imul1(c, (c.r[3] & 0xFFFFu), 2);
    // 0009e9  add ax, di
    X86_AT(c, 0x9e9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[7] & 0xFFFFu), 0, 2)); }
    // 0009ec  mov word ptr gs:[esi], ax
    X86_AT(c, 0x9ecu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6])), (c.r[0] & 0xFFFFu));
    // 0009f0  ret 
    X86_AT(c, 0x9f0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x978u, "ran off the end of a function");
}
void f_0000097a(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00097a  jne 0x986
    X86_AT(c, 0x97au);
    if (x86_cc(c, 5)) { goto L_986; }
    X86_TICK(c, 11);
    // 00097c  and cx, 3
    X86_AT(c, 0x97cu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & 0x3u, 2)); }
    // 000980  and dx, 0xf
    X86_AT(c, 0x980u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_logic(c, v & 0xFu, 2)); }
    // 000984  jmp 0x995
    X86_AT(c, 0x984u);
    goto L_995;
L_986:
    X86_TICK(c, 10);
    // 000986  and cx, 0xc
    X86_AT(c, 0x986u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & 0xCu, 2)); }
    // 00098a  shr cx, 2
    X86_AT(c, 0x98au);
    { uint32_t v = (c.r[1] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 2, w); if (w) s16(c, 1, r); }
    // 00098e  and dx, 0xf00
    X86_AT(c, 0x98eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_logic(c, v & 0xF00u, 2)); }
    // 000993  xchg dl, dh
    X86_AT(c, 0x993u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
L_995:
    X86_TICK(c, 143);
    // 000995  mov di, word ptr gs:[ebp + eax*4 + 0xd2]
    X86_AT(c, 0x995u);
    s16(c, 7, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 4 + 0xD2u))));
    // 00099e  mov bx, word ptr gs:[ebp + eax*8 + 0xe8]
    X86_AT(c, 0x99eu);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 8 + 0xE8u))));
    // 0009a7  lea esi, [ebp + eax*8 + 0xe2]
    X86_AT(c, 0x9a7u);
    c.r[6] = (uint32_t)(c.r[5] + c.r[0] * 8 + 0xE2u);
    // 0009ae  mov al, 1
    X86_AT(c, 0x9aeu);
    s8(c, 0, 0x1u);
    // 0009b0  shl al, cl
    X86_AT(c, 0x9b0u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 1, w); if (w) s8(c, 0, r); }
    // 0009b2  mov cl, al
    X86_AT(c, 0x9b2u);
    s8(c, 1, g8(c, 0));
    // 0009b4  mov ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x9b4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))));
    // 0009bc  dec cl
    X86_AT(c, 0x9bcu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 0009be  and al, cl
    X86_AT(c, 0x9beu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 1), 1)); }
    // 0009c0  inc cl
    X86_AT(c, 0x9c0u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_inc(c, v, 1)); }
    // 0009c2  inc dl
    X86_AT(c, 0x9c2u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 0009c4  imul dl
    X86_AT(c, 0x9c4u);
    x86_imul1(c, g8(c, 2), 1);
    // 0009c6  sub di, ax
    X86_AT(c, 0x9c6u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0009c9  mov word ptr gs:[esi + 2], di
    X86_AT(c, 0x9c9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u)), (c.r[7] & 0xFFFFu));
    // 0009ce  mov ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x9ceu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))));
    // 0009d6  cwd 
    X86_AT(c, 0x9d6u);
    s16(c, 2, (c.r[0] & 0x8000u) ? 0xFFFFu : 0u);
    // 0009d8  idiv cx
    X86_AT(c, 0x9d8u);
    x86_idiv(c, (c.r[1] & 0xFFFFu), 2, 0x9d8u);
    // 0009db  mov di, ax
    X86_AT(c, 0x9dbu);
    s16(c, 7, (c.r[0] & 0xFFFFu));
    // 0009de  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x9deu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0009e6  imul bx
    X86_AT(c, 0x9e6u);
    x86_imul1(c, (c.r[3] & 0xFFFFu), 2);
    // 0009e9  add ax, di
    X86_AT(c, 0x9e9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[7] & 0xFFFFu), 0, 2)); }
    // 0009ec  mov word ptr gs:[esi], ax
    X86_AT(c, 0x9ecu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6])), (c.r[0] & 0xFFFFu));
    // 0009f0  ret 
    X86_AT(c, 0x9f0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x97au, "ran off the end of a function");
}
void f_0000097c(X86Cpu& c) {
    X86_TICK(c, 11);
    // 00097c  and cx, 3
    X86_AT(c, 0x97cu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & 0x3u, 2)); }
    // 000980  and dx, 0xf
    X86_AT(c, 0x980u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_logic(c, v & 0xFu, 2)); }
    // 000984  jmp 0x995
    X86_AT(c, 0x984u);
    goto L_995;
L_995:
    X86_TICK(c, 143);
    // 000995  mov di, word ptr gs:[ebp + eax*4 + 0xd2]
    X86_AT(c, 0x995u);
    s16(c, 7, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 4 + 0xD2u))));
    // 00099e  mov bx, word ptr gs:[ebp + eax*8 + 0xe8]
    X86_AT(c, 0x99eu);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 8 + 0xE8u))));
    // 0009a7  lea esi, [ebp + eax*8 + 0xe2]
    X86_AT(c, 0x9a7u);
    c.r[6] = (uint32_t)(c.r[5] + c.r[0] * 8 + 0xE2u);
    // 0009ae  mov al, 1
    X86_AT(c, 0x9aeu);
    s8(c, 0, 0x1u);
    // 0009b0  shl al, cl
    X86_AT(c, 0x9b0u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 1, w); if (w) s8(c, 0, r); }
    // 0009b2  mov cl, al
    X86_AT(c, 0x9b2u);
    s8(c, 1, g8(c, 0));
    // 0009b4  mov ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x9b4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))));
    // 0009bc  dec cl
    X86_AT(c, 0x9bcu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 0009be  and al, cl
    X86_AT(c, 0x9beu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 1), 1)); }
    // 0009c0  inc cl
    X86_AT(c, 0x9c0u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_inc(c, v, 1)); }
    // 0009c2  inc dl
    X86_AT(c, 0x9c2u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 0009c4  imul dl
    X86_AT(c, 0x9c4u);
    x86_imul1(c, g8(c, 2), 1);
    // 0009c6  sub di, ax
    X86_AT(c, 0x9c6u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0009c9  mov word ptr gs:[esi + 2], di
    X86_AT(c, 0x9c9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u)), (c.r[7] & 0xFFFFu));
    // 0009ce  mov ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x9ceu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))));
    // 0009d6  cwd 
    X86_AT(c, 0x9d6u);
    s16(c, 2, (c.r[0] & 0x8000u) ? 0xFFFFu : 0u);
    // 0009d8  idiv cx
    X86_AT(c, 0x9d8u);
    x86_idiv(c, (c.r[1] & 0xFFFFu), 2, 0x9d8u);
    // 0009db  mov di, ax
    X86_AT(c, 0x9dbu);
    s16(c, 7, (c.r[0] & 0xFFFFu));
    // 0009de  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x9deu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0009e6  imul bx
    X86_AT(c, 0x9e6u);
    x86_imul1(c, (c.r[3] & 0xFFFFu), 2);
    // 0009e9  add ax, di
    X86_AT(c, 0x9e9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[7] & 0xFFFFu), 0, 2)); }
    // 0009ec  mov word ptr gs:[esi], ax
    X86_AT(c, 0x9ecu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6])), (c.r[0] & 0xFFFFu));
    // 0009f0  ret 
    X86_AT(c, 0x9f0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x97cu, "ran off the end of a function");
}
void f_00000980(X86Cpu& c) {
    X86_TICK(c, 9);
    // 000980  and dx, 0xf
    X86_AT(c, 0x980u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_logic(c, v & 0xFu, 2)); }
    // 000984  jmp 0x995
    X86_AT(c, 0x984u);
    goto L_995;
L_995:
    X86_TICK(c, 143);
    // 000995  mov di, word ptr gs:[ebp + eax*4 + 0xd2]
    X86_AT(c, 0x995u);
    s16(c, 7, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 4 + 0xD2u))));
    // 00099e  mov bx, word ptr gs:[ebp + eax*8 + 0xe8]
    X86_AT(c, 0x99eu);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 8 + 0xE8u))));
    // 0009a7  lea esi, [ebp + eax*8 + 0xe2]
    X86_AT(c, 0x9a7u);
    c.r[6] = (uint32_t)(c.r[5] + c.r[0] * 8 + 0xE2u);
    // 0009ae  mov al, 1
    X86_AT(c, 0x9aeu);
    s8(c, 0, 0x1u);
    // 0009b0  shl al, cl
    X86_AT(c, 0x9b0u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 1, w); if (w) s8(c, 0, r); }
    // 0009b2  mov cl, al
    X86_AT(c, 0x9b2u);
    s8(c, 1, g8(c, 0));
    // 0009b4  mov ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x9b4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))));
    // 0009bc  dec cl
    X86_AT(c, 0x9bcu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 0009be  and al, cl
    X86_AT(c, 0x9beu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 1), 1)); }
    // 0009c0  inc cl
    X86_AT(c, 0x9c0u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_inc(c, v, 1)); }
    // 0009c2  inc dl
    X86_AT(c, 0x9c2u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 0009c4  imul dl
    X86_AT(c, 0x9c4u);
    x86_imul1(c, g8(c, 2), 1);
    // 0009c6  sub di, ax
    X86_AT(c, 0x9c6u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0009c9  mov word ptr gs:[esi + 2], di
    X86_AT(c, 0x9c9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u)), (c.r[7] & 0xFFFFu));
    // 0009ce  mov ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x9ceu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))));
    // 0009d6  cwd 
    X86_AT(c, 0x9d6u);
    s16(c, 2, (c.r[0] & 0x8000u) ? 0xFFFFu : 0u);
    // 0009d8  idiv cx
    X86_AT(c, 0x9d8u);
    x86_idiv(c, (c.r[1] & 0xFFFFu), 2, 0x9d8u);
    // 0009db  mov di, ax
    X86_AT(c, 0x9dbu);
    s16(c, 7, (c.r[0] & 0xFFFFu));
    // 0009de  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x9deu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0009e6  imul bx
    X86_AT(c, 0x9e6u);
    x86_imul1(c, (c.r[3] & 0xFFFFu), 2);
    // 0009e9  add ax, di
    X86_AT(c, 0x9e9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[7] & 0xFFFFu), 0, 2)); }
    // 0009ec  mov word ptr gs:[esi], ax
    X86_AT(c, 0x9ecu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6])), (c.r[0] & 0xFFFFu));
    // 0009f0  ret 
    X86_AT(c, 0x9f0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x980u, "ran off the end of a function");
}
void f_00000984(X86Cpu& c) {
    X86_TICK(c, 7);
    // 000984  jmp 0x995
    X86_AT(c, 0x984u);
    goto L_995;
L_995:
    X86_TICK(c, 143);
    // 000995  mov di, word ptr gs:[ebp + eax*4 + 0xd2]
    X86_AT(c, 0x995u);
    s16(c, 7, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 4 + 0xD2u))));
    // 00099e  mov bx, word ptr gs:[ebp + eax*8 + 0xe8]
    X86_AT(c, 0x99eu);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 8 + 0xE8u))));
    // 0009a7  lea esi, [ebp + eax*8 + 0xe2]
    X86_AT(c, 0x9a7u);
    c.r[6] = (uint32_t)(c.r[5] + c.r[0] * 8 + 0xE2u);
    // 0009ae  mov al, 1
    X86_AT(c, 0x9aeu);
    s8(c, 0, 0x1u);
    // 0009b0  shl al, cl
    X86_AT(c, 0x9b0u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 1, w); if (w) s8(c, 0, r); }
    // 0009b2  mov cl, al
    X86_AT(c, 0x9b2u);
    s8(c, 1, g8(c, 0));
    // 0009b4  mov ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x9b4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))));
    // 0009bc  dec cl
    X86_AT(c, 0x9bcu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 0009be  and al, cl
    X86_AT(c, 0x9beu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 1), 1)); }
    // 0009c0  inc cl
    X86_AT(c, 0x9c0u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_inc(c, v, 1)); }
    // 0009c2  inc dl
    X86_AT(c, 0x9c2u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 0009c4  imul dl
    X86_AT(c, 0x9c4u);
    x86_imul1(c, g8(c, 2), 1);
    // 0009c6  sub di, ax
    X86_AT(c, 0x9c6u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0009c9  mov word ptr gs:[esi + 2], di
    X86_AT(c, 0x9c9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u)), (c.r[7] & 0xFFFFu));
    // 0009ce  mov ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x9ceu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))));
    // 0009d6  cwd 
    X86_AT(c, 0x9d6u);
    s16(c, 2, (c.r[0] & 0x8000u) ? 0xFFFFu : 0u);
    // 0009d8  idiv cx
    X86_AT(c, 0x9d8u);
    x86_idiv(c, (c.r[1] & 0xFFFFu), 2, 0x9d8u);
    // 0009db  mov di, ax
    X86_AT(c, 0x9dbu);
    s16(c, 7, (c.r[0] & 0xFFFFu));
    // 0009de  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x9deu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0009e6  imul bx
    X86_AT(c, 0x9e6u);
    x86_imul1(c, (c.r[3] & 0xFFFFu), 2);
    // 0009e9  add ax, di
    X86_AT(c, 0x9e9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[7] & 0xFFFFu), 0, 2)); }
    // 0009ec  mov word ptr gs:[esi], ax
    X86_AT(c, 0x9ecu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6])), (c.r[0] & 0xFFFFu));
    // 0009f0  ret 
    X86_AT(c, 0x9f0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x984u, "ran off the end of a function");
}
void f_00000986(X86Cpu& c) {
    X86_TICK(c, 153);
    // 000986  and cx, 0xc
    X86_AT(c, 0x986u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & 0xCu, 2)); }
    // 00098a  shr cx, 2
    X86_AT(c, 0x98au);
    { uint32_t v = (c.r[1] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 2, w); if (w) s16(c, 1, r); }
    // 00098e  and dx, 0xf00
    X86_AT(c, 0x98eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_logic(c, v & 0xF00u, 2)); }
    // 000993  xchg dl, dh
    X86_AT(c, 0x993u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 000995  mov di, word ptr gs:[ebp + eax*4 + 0xd2]
    X86_AT(c, 0x995u);
    s16(c, 7, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 4 + 0xD2u))));
    // 00099e  mov bx, word ptr gs:[ebp + eax*8 + 0xe8]
    X86_AT(c, 0x99eu);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 8 + 0xE8u))));
    // 0009a7  lea esi, [ebp + eax*8 + 0xe2]
    X86_AT(c, 0x9a7u);
    c.r[6] = (uint32_t)(c.r[5] + c.r[0] * 8 + 0xE2u);
    // 0009ae  mov al, 1
    X86_AT(c, 0x9aeu);
    s8(c, 0, 0x1u);
    // 0009b0  shl al, cl
    X86_AT(c, 0x9b0u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 1, w); if (w) s8(c, 0, r); }
    // 0009b2  mov cl, al
    X86_AT(c, 0x9b2u);
    s8(c, 1, g8(c, 0));
    // 0009b4  mov ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x9b4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))));
    // 0009bc  dec cl
    X86_AT(c, 0x9bcu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 0009be  and al, cl
    X86_AT(c, 0x9beu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 1), 1)); }
    // 0009c0  inc cl
    X86_AT(c, 0x9c0u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_inc(c, v, 1)); }
    // 0009c2  inc dl
    X86_AT(c, 0x9c2u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 0009c4  imul dl
    X86_AT(c, 0x9c4u);
    x86_imul1(c, g8(c, 2), 1);
    // 0009c6  sub di, ax
    X86_AT(c, 0x9c6u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0009c9  mov word ptr gs:[esi + 2], di
    X86_AT(c, 0x9c9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u)), (c.r[7] & 0xFFFFu));
    // 0009ce  mov ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x9ceu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))));
    // 0009d6  cwd 
    X86_AT(c, 0x9d6u);
    s16(c, 2, (c.r[0] & 0x8000u) ? 0xFFFFu : 0u);
    // 0009d8  idiv cx
    X86_AT(c, 0x9d8u);
    x86_idiv(c, (c.r[1] & 0xFFFFu), 2, 0x9d8u);
    // 0009db  mov di, ax
    X86_AT(c, 0x9dbu);
    s16(c, 7, (c.r[0] & 0xFFFFu));
    // 0009de  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x9deu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0009e6  imul bx
    X86_AT(c, 0x9e6u);
    x86_imul1(c, (c.r[3] & 0xFFFFu), 2);
    // 0009e9  add ax, di
    X86_AT(c, 0x9e9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[7] & 0xFFFFu), 0, 2)); }
    // 0009ec  mov word ptr gs:[esi], ax
    X86_AT(c, 0x9ecu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6])), (c.r[0] & 0xFFFFu));
    // 0009f0  ret 
    X86_AT(c, 0x9f0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x986u, "ran off the end of a function");
}
void f_0000098a(X86Cpu& c) {
    X86_TICK(c, 151);
    // 00098a  shr cx, 2
    X86_AT(c, 0x98au);
    { uint32_t v = (c.r[1] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 2, w); if (w) s16(c, 1, r); }
    // 00098e  and dx, 0xf00
    X86_AT(c, 0x98eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_logic(c, v & 0xF00u, 2)); }
    // 000993  xchg dl, dh
    X86_AT(c, 0x993u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 000995  mov di, word ptr gs:[ebp + eax*4 + 0xd2]
    X86_AT(c, 0x995u);
    s16(c, 7, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 4 + 0xD2u))));
    // 00099e  mov bx, word ptr gs:[ebp + eax*8 + 0xe8]
    X86_AT(c, 0x99eu);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 8 + 0xE8u))));
    // 0009a7  lea esi, [ebp + eax*8 + 0xe2]
    X86_AT(c, 0x9a7u);
    c.r[6] = (uint32_t)(c.r[5] + c.r[0] * 8 + 0xE2u);
    // 0009ae  mov al, 1
    X86_AT(c, 0x9aeu);
    s8(c, 0, 0x1u);
    // 0009b0  shl al, cl
    X86_AT(c, 0x9b0u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 1, w); if (w) s8(c, 0, r); }
    // 0009b2  mov cl, al
    X86_AT(c, 0x9b2u);
    s8(c, 1, g8(c, 0));
    // 0009b4  mov ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x9b4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))));
    // 0009bc  dec cl
    X86_AT(c, 0x9bcu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 0009be  and al, cl
    X86_AT(c, 0x9beu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 1), 1)); }
    // 0009c0  inc cl
    X86_AT(c, 0x9c0u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_inc(c, v, 1)); }
    // 0009c2  inc dl
    X86_AT(c, 0x9c2u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 0009c4  imul dl
    X86_AT(c, 0x9c4u);
    x86_imul1(c, g8(c, 2), 1);
    // 0009c6  sub di, ax
    X86_AT(c, 0x9c6u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0009c9  mov word ptr gs:[esi + 2], di
    X86_AT(c, 0x9c9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u)), (c.r[7] & 0xFFFFu));
    // 0009ce  mov ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x9ceu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))));
    // 0009d6  cwd 
    X86_AT(c, 0x9d6u);
    s16(c, 2, (c.r[0] & 0x8000u) ? 0xFFFFu : 0u);
    // 0009d8  idiv cx
    X86_AT(c, 0x9d8u);
    x86_idiv(c, (c.r[1] & 0xFFFFu), 2, 0x9d8u);
    // 0009db  mov di, ax
    X86_AT(c, 0x9dbu);
    s16(c, 7, (c.r[0] & 0xFFFFu));
    // 0009de  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x9deu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0009e6  imul bx
    X86_AT(c, 0x9e6u);
    x86_imul1(c, (c.r[3] & 0xFFFFu), 2);
    // 0009e9  add ax, di
    X86_AT(c, 0x9e9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[7] & 0xFFFFu), 0, 2)); }
    // 0009ec  mov word ptr gs:[esi], ax
    X86_AT(c, 0x9ecu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6])), (c.r[0] & 0xFFFFu));
    // 0009f0  ret 
    X86_AT(c, 0x9f0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x98au, "ran off the end of a function");
}
void f_0000098e(X86Cpu& c) {
    X86_TICK(c, 148);
    // 00098e  and dx, 0xf00
    X86_AT(c, 0x98eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_logic(c, v & 0xF00u, 2)); }
    // 000993  xchg dl, dh
    X86_AT(c, 0x993u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 000995  mov di, word ptr gs:[ebp + eax*4 + 0xd2]
    X86_AT(c, 0x995u);
    s16(c, 7, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 4 + 0xD2u))));
    // 00099e  mov bx, word ptr gs:[ebp + eax*8 + 0xe8]
    X86_AT(c, 0x99eu);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 8 + 0xE8u))));
    // 0009a7  lea esi, [ebp + eax*8 + 0xe2]
    X86_AT(c, 0x9a7u);
    c.r[6] = (uint32_t)(c.r[5] + c.r[0] * 8 + 0xE2u);
    // 0009ae  mov al, 1
    X86_AT(c, 0x9aeu);
    s8(c, 0, 0x1u);
    // 0009b0  shl al, cl
    X86_AT(c, 0x9b0u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 1, w); if (w) s8(c, 0, r); }
    // 0009b2  mov cl, al
    X86_AT(c, 0x9b2u);
    s8(c, 1, g8(c, 0));
    // 0009b4  mov ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x9b4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))));
    // 0009bc  dec cl
    X86_AT(c, 0x9bcu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 0009be  and al, cl
    X86_AT(c, 0x9beu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 1), 1)); }
    // 0009c0  inc cl
    X86_AT(c, 0x9c0u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_inc(c, v, 1)); }
    // 0009c2  inc dl
    X86_AT(c, 0x9c2u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 0009c4  imul dl
    X86_AT(c, 0x9c4u);
    x86_imul1(c, g8(c, 2), 1);
    // 0009c6  sub di, ax
    X86_AT(c, 0x9c6u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0009c9  mov word ptr gs:[esi + 2], di
    X86_AT(c, 0x9c9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u)), (c.r[7] & 0xFFFFu));
    // 0009ce  mov ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x9ceu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))));
    // 0009d6  cwd 
    X86_AT(c, 0x9d6u);
    s16(c, 2, (c.r[0] & 0x8000u) ? 0xFFFFu : 0u);
    // 0009d8  idiv cx
    X86_AT(c, 0x9d8u);
    x86_idiv(c, (c.r[1] & 0xFFFFu), 2, 0x9d8u);
    // 0009db  mov di, ax
    X86_AT(c, 0x9dbu);
    s16(c, 7, (c.r[0] & 0xFFFFu));
    // 0009de  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x9deu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0009e6  imul bx
    X86_AT(c, 0x9e6u);
    x86_imul1(c, (c.r[3] & 0xFFFFu), 2);
    // 0009e9  add ax, di
    X86_AT(c, 0x9e9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[7] & 0xFFFFu), 0, 2)); }
    // 0009ec  mov word ptr gs:[esi], ax
    X86_AT(c, 0x9ecu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6])), (c.r[0] & 0xFFFFu));
    // 0009f0  ret 
    X86_AT(c, 0x9f0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x98eu, "ran off the end of a function");
}
void f_00000993(X86Cpu& c) {
    X86_TICK(c, 146);
    // 000993  xchg dl, dh
    X86_AT(c, 0x993u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 000995  mov di, word ptr gs:[ebp + eax*4 + 0xd2]
    X86_AT(c, 0x995u);
    s16(c, 7, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 4 + 0xD2u))));
    // 00099e  mov bx, word ptr gs:[ebp + eax*8 + 0xe8]
    X86_AT(c, 0x99eu);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 8 + 0xE8u))));
    // 0009a7  lea esi, [ebp + eax*8 + 0xe2]
    X86_AT(c, 0x9a7u);
    c.r[6] = (uint32_t)(c.r[5] + c.r[0] * 8 + 0xE2u);
    // 0009ae  mov al, 1
    X86_AT(c, 0x9aeu);
    s8(c, 0, 0x1u);
    // 0009b0  shl al, cl
    X86_AT(c, 0x9b0u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 1, w); if (w) s8(c, 0, r); }
    // 0009b2  mov cl, al
    X86_AT(c, 0x9b2u);
    s8(c, 1, g8(c, 0));
    // 0009b4  mov ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x9b4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))));
    // 0009bc  dec cl
    X86_AT(c, 0x9bcu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 0009be  and al, cl
    X86_AT(c, 0x9beu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 1), 1)); }
    // 0009c0  inc cl
    X86_AT(c, 0x9c0u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_inc(c, v, 1)); }
    // 0009c2  inc dl
    X86_AT(c, 0x9c2u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 0009c4  imul dl
    X86_AT(c, 0x9c4u);
    x86_imul1(c, g8(c, 2), 1);
    // 0009c6  sub di, ax
    X86_AT(c, 0x9c6u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0009c9  mov word ptr gs:[esi + 2], di
    X86_AT(c, 0x9c9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u)), (c.r[7] & 0xFFFFu));
    // 0009ce  mov ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x9ceu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))));
    // 0009d6  cwd 
    X86_AT(c, 0x9d6u);
    s16(c, 2, (c.r[0] & 0x8000u) ? 0xFFFFu : 0u);
    // 0009d8  idiv cx
    X86_AT(c, 0x9d8u);
    x86_idiv(c, (c.r[1] & 0xFFFFu), 2, 0x9d8u);
    // 0009db  mov di, ax
    X86_AT(c, 0x9dbu);
    s16(c, 7, (c.r[0] & 0xFFFFu));
    // 0009de  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x9deu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0009e6  imul bx
    X86_AT(c, 0x9e6u);
    x86_imul1(c, (c.r[3] & 0xFFFFu), 2);
    // 0009e9  add ax, di
    X86_AT(c, 0x9e9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[7] & 0xFFFFu), 0, 2)); }
    // 0009ec  mov word ptr gs:[esi], ax
    X86_AT(c, 0x9ecu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6])), (c.r[0] & 0xFFFFu));
    // 0009f0  ret 
    X86_AT(c, 0x9f0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x993u, "ran off the end of a function");
}
void f_00000995(X86Cpu& c) {
    X86_TICK(c, 143);
    // 000995  mov di, word ptr gs:[ebp + eax*4 + 0xd2]
    X86_AT(c, 0x995u);
    s16(c, 7, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 4 + 0xD2u))));
    // 00099e  mov bx, word ptr gs:[ebp + eax*8 + 0xe8]
    X86_AT(c, 0x99eu);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 8 + 0xE8u))));
    // 0009a7  lea esi, [ebp + eax*8 + 0xe2]
    X86_AT(c, 0x9a7u);
    c.r[6] = (uint32_t)(c.r[5] + c.r[0] * 8 + 0xE2u);
    // 0009ae  mov al, 1
    X86_AT(c, 0x9aeu);
    s8(c, 0, 0x1u);
    // 0009b0  shl al, cl
    X86_AT(c, 0x9b0u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 1, w); if (w) s8(c, 0, r); }
    // 0009b2  mov cl, al
    X86_AT(c, 0x9b2u);
    s8(c, 1, g8(c, 0));
    // 0009b4  mov ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x9b4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))));
    // 0009bc  dec cl
    X86_AT(c, 0x9bcu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 0009be  and al, cl
    X86_AT(c, 0x9beu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 1), 1)); }
    // 0009c0  inc cl
    X86_AT(c, 0x9c0u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_inc(c, v, 1)); }
    // 0009c2  inc dl
    X86_AT(c, 0x9c2u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 0009c4  imul dl
    X86_AT(c, 0x9c4u);
    x86_imul1(c, g8(c, 2), 1);
    // 0009c6  sub di, ax
    X86_AT(c, 0x9c6u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0009c9  mov word ptr gs:[esi + 2], di
    X86_AT(c, 0x9c9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u)), (c.r[7] & 0xFFFFu));
    // 0009ce  mov ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x9ceu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))));
    // 0009d6  cwd 
    X86_AT(c, 0x9d6u);
    s16(c, 2, (c.r[0] & 0x8000u) ? 0xFFFFu : 0u);
    // 0009d8  idiv cx
    X86_AT(c, 0x9d8u);
    x86_idiv(c, (c.r[1] & 0xFFFFu), 2, 0x9d8u);
    // 0009db  mov di, ax
    X86_AT(c, 0x9dbu);
    s16(c, 7, (c.r[0] & 0xFFFFu));
    // 0009de  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x9deu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0009e6  imul bx
    X86_AT(c, 0x9e6u);
    x86_imul1(c, (c.r[3] & 0xFFFFu), 2);
    // 0009e9  add ax, di
    X86_AT(c, 0x9e9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[7] & 0xFFFFu), 0, 2)); }
    // 0009ec  mov word ptr gs:[esi], ax
    X86_AT(c, 0x9ecu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6])), (c.r[0] & 0xFFFFu));
    // 0009f0  ret 
    X86_AT(c, 0x9f0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x995u, "ran off the end of a function");
}
void f_0000099e(X86Cpu& c) {
    X86_TICK(c, 139);
    // 00099e  mov bx, word ptr gs:[ebp + eax*8 + 0xe8]
    X86_AT(c, 0x99eu);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 8 + 0xE8u))));
    // 0009a7  lea esi, [ebp + eax*8 + 0xe2]
    X86_AT(c, 0x9a7u);
    c.r[6] = (uint32_t)(c.r[5] + c.r[0] * 8 + 0xE2u);
    // 0009ae  mov al, 1
    X86_AT(c, 0x9aeu);
    s8(c, 0, 0x1u);
    // 0009b0  shl al, cl
    X86_AT(c, 0x9b0u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 1, w); if (w) s8(c, 0, r); }
    // 0009b2  mov cl, al
    X86_AT(c, 0x9b2u);
    s8(c, 1, g8(c, 0));
    // 0009b4  mov ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x9b4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))));
    // 0009bc  dec cl
    X86_AT(c, 0x9bcu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 0009be  and al, cl
    X86_AT(c, 0x9beu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 1), 1)); }
    // 0009c0  inc cl
    X86_AT(c, 0x9c0u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_inc(c, v, 1)); }
    // 0009c2  inc dl
    X86_AT(c, 0x9c2u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 0009c4  imul dl
    X86_AT(c, 0x9c4u);
    x86_imul1(c, g8(c, 2), 1);
    // 0009c6  sub di, ax
    X86_AT(c, 0x9c6u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0009c9  mov word ptr gs:[esi + 2], di
    X86_AT(c, 0x9c9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u)), (c.r[7] & 0xFFFFu));
    // 0009ce  mov ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x9ceu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))));
    // 0009d6  cwd 
    X86_AT(c, 0x9d6u);
    s16(c, 2, (c.r[0] & 0x8000u) ? 0xFFFFu : 0u);
    // 0009d8  idiv cx
    X86_AT(c, 0x9d8u);
    x86_idiv(c, (c.r[1] & 0xFFFFu), 2, 0x9d8u);
    // 0009db  mov di, ax
    X86_AT(c, 0x9dbu);
    s16(c, 7, (c.r[0] & 0xFFFFu));
    // 0009de  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x9deu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0009e6  imul bx
    X86_AT(c, 0x9e6u);
    x86_imul1(c, (c.r[3] & 0xFFFFu), 2);
    // 0009e9  add ax, di
    X86_AT(c, 0x9e9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[7] & 0xFFFFu), 0, 2)); }
    // 0009ec  mov word ptr gs:[esi], ax
    X86_AT(c, 0x9ecu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6])), (c.r[0] & 0xFFFFu));
    // 0009f0  ret 
    X86_AT(c, 0x9f0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x99eu, "ran off the end of a function");
}
void f_000009a7(X86Cpu& c) {
    X86_TICK(c, 135);
    // 0009a7  lea esi, [ebp + eax*8 + 0xe2]
    X86_AT(c, 0x9a7u);
    c.r[6] = (uint32_t)(c.r[5] + c.r[0] * 8 + 0xE2u);
    // 0009ae  mov al, 1
    X86_AT(c, 0x9aeu);
    s8(c, 0, 0x1u);
    // 0009b0  shl al, cl
    X86_AT(c, 0x9b0u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 1, w); if (w) s8(c, 0, r); }
    // 0009b2  mov cl, al
    X86_AT(c, 0x9b2u);
    s8(c, 1, g8(c, 0));
    // 0009b4  mov ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x9b4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))));
    // 0009bc  dec cl
    X86_AT(c, 0x9bcu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 0009be  and al, cl
    X86_AT(c, 0x9beu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 1), 1)); }
    // 0009c0  inc cl
    X86_AT(c, 0x9c0u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_inc(c, v, 1)); }
    // 0009c2  inc dl
    X86_AT(c, 0x9c2u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 0009c4  imul dl
    X86_AT(c, 0x9c4u);
    x86_imul1(c, g8(c, 2), 1);
    // 0009c6  sub di, ax
    X86_AT(c, 0x9c6u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0009c9  mov word ptr gs:[esi + 2], di
    X86_AT(c, 0x9c9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u)), (c.r[7] & 0xFFFFu));
    // 0009ce  mov ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x9ceu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))));
    // 0009d6  cwd 
    X86_AT(c, 0x9d6u);
    s16(c, 2, (c.r[0] & 0x8000u) ? 0xFFFFu : 0u);
    // 0009d8  idiv cx
    X86_AT(c, 0x9d8u);
    x86_idiv(c, (c.r[1] & 0xFFFFu), 2, 0x9d8u);
    // 0009db  mov di, ax
    X86_AT(c, 0x9dbu);
    s16(c, 7, (c.r[0] & 0xFFFFu));
    // 0009de  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x9deu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0009e6  imul bx
    X86_AT(c, 0x9e6u);
    x86_imul1(c, (c.r[3] & 0xFFFFu), 2);
    // 0009e9  add ax, di
    X86_AT(c, 0x9e9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[7] & 0xFFFFu), 0, 2)); }
    // 0009ec  mov word ptr gs:[esi], ax
    X86_AT(c, 0x9ecu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6])), (c.r[0] & 0xFFFFu));
    // 0009f0  ret 
    X86_AT(c, 0x9f0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9a7u, "ran off the end of a function");
}
void f_000009ae(X86Cpu& c) {
    X86_TICK(c, 133);
    // 0009ae  mov al, 1
    X86_AT(c, 0x9aeu);
    s8(c, 0, 0x1u);
    // 0009b0  shl al, cl
    X86_AT(c, 0x9b0u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 1, w); if (w) s8(c, 0, r); }
    // 0009b2  mov cl, al
    X86_AT(c, 0x9b2u);
    s8(c, 1, g8(c, 0));
    // 0009b4  mov ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x9b4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))));
    // 0009bc  dec cl
    X86_AT(c, 0x9bcu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 0009be  and al, cl
    X86_AT(c, 0x9beu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 1), 1)); }
    // 0009c0  inc cl
    X86_AT(c, 0x9c0u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_inc(c, v, 1)); }
    // 0009c2  inc dl
    X86_AT(c, 0x9c2u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 0009c4  imul dl
    X86_AT(c, 0x9c4u);
    x86_imul1(c, g8(c, 2), 1);
    // 0009c6  sub di, ax
    X86_AT(c, 0x9c6u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0009c9  mov word ptr gs:[esi + 2], di
    X86_AT(c, 0x9c9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u)), (c.r[7] & 0xFFFFu));
    // 0009ce  mov ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x9ceu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))));
    // 0009d6  cwd 
    X86_AT(c, 0x9d6u);
    s16(c, 2, (c.r[0] & 0x8000u) ? 0xFFFFu : 0u);
    // 0009d8  idiv cx
    X86_AT(c, 0x9d8u);
    x86_idiv(c, (c.r[1] & 0xFFFFu), 2, 0x9d8u);
    // 0009db  mov di, ax
    X86_AT(c, 0x9dbu);
    s16(c, 7, (c.r[0] & 0xFFFFu));
    // 0009de  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x9deu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0009e6  imul bx
    X86_AT(c, 0x9e6u);
    x86_imul1(c, (c.r[3] & 0xFFFFu), 2);
    // 0009e9  add ax, di
    X86_AT(c, 0x9e9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[7] & 0xFFFFu), 0, 2)); }
    // 0009ec  mov word ptr gs:[esi], ax
    X86_AT(c, 0x9ecu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6])), (c.r[0] & 0xFFFFu));
    // 0009f0  ret 
    X86_AT(c, 0x9f0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9aeu, "ran off the end of a function");
}
void f_000009b0(X86Cpu& c) {
    X86_TICK(c, 131);
    // 0009b0  shl al, cl
    X86_AT(c, 0x9b0u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 1, w); if (w) s8(c, 0, r); }
    // 0009b2  mov cl, al
    X86_AT(c, 0x9b2u);
    s8(c, 1, g8(c, 0));
    // 0009b4  mov ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x9b4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))));
    // 0009bc  dec cl
    X86_AT(c, 0x9bcu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 0009be  and al, cl
    X86_AT(c, 0x9beu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 1), 1)); }
    // 0009c0  inc cl
    X86_AT(c, 0x9c0u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_inc(c, v, 1)); }
    // 0009c2  inc dl
    X86_AT(c, 0x9c2u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 0009c4  imul dl
    X86_AT(c, 0x9c4u);
    x86_imul1(c, g8(c, 2), 1);
    // 0009c6  sub di, ax
    X86_AT(c, 0x9c6u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0009c9  mov word ptr gs:[esi + 2], di
    X86_AT(c, 0x9c9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u)), (c.r[7] & 0xFFFFu));
    // 0009ce  mov ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x9ceu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))));
    // 0009d6  cwd 
    X86_AT(c, 0x9d6u);
    s16(c, 2, (c.r[0] & 0x8000u) ? 0xFFFFu : 0u);
    // 0009d8  idiv cx
    X86_AT(c, 0x9d8u);
    x86_idiv(c, (c.r[1] & 0xFFFFu), 2, 0x9d8u);
    // 0009db  mov di, ax
    X86_AT(c, 0x9dbu);
    s16(c, 7, (c.r[0] & 0xFFFFu));
    // 0009de  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x9deu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0009e6  imul bx
    X86_AT(c, 0x9e6u);
    x86_imul1(c, (c.r[3] & 0xFFFFu), 2);
    // 0009e9  add ax, di
    X86_AT(c, 0x9e9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[7] & 0xFFFFu), 0, 2)); }
    // 0009ec  mov word ptr gs:[esi], ax
    X86_AT(c, 0x9ecu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6])), (c.r[0] & 0xFFFFu));
    // 0009f0  ret 
    X86_AT(c, 0x9f0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9b0u, "ran off the end of a function");
}
void f_000009b2(X86Cpu& c) {
    X86_TICK(c, 128);
    // 0009b2  mov cl, al
    X86_AT(c, 0x9b2u);
    s8(c, 1, g8(c, 0));
    // 0009b4  mov ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x9b4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))));
    // 0009bc  dec cl
    X86_AT(c, 0x9bcu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 0009be  and al, cl
    X86_AT(c, 0x9beu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 1), 1)); }
    // 0009c0  inc cl
    X86_AT(c, 0x9c0u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_inc(c, v, 1)); }
    // 0009c2  inc dl
    X86_AT(c, 0x9c2u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 0009c4  imul dl
    X86_AT(c, 0x9c4u);
    x86_imul1(c, g8(c, 2), 1);
    // 0009c6  sub di, ax
    X86_AT(c, 0x9c6u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0009c9  mov word ptr gs:[esi + 2], di
    X86_AT(c, 0x9c9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u)), (c.r[7] & 0xFFFFu));
    // 0009ce  mov ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x9ceu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))));
    // 0009d6  cwd 
    X86_AT(c, 0x9d6u);
    s16(c, 2, (c.r[0] & 0x8000u) ? 0xFFFFu : 0u);
    // 0009d8  idiv cx
    X86_AT(c, 0x9d8u);
    x86_idiv(c, (c.r[1] & 0xFFFFu), 2, 0x9d8u);
    // 0009db  mov di, ax
    X86_AT(c, 0x9dbu);
    s16(c, 7, (c.r[0] & 0xFFFFu));
    // 0009de  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x9deu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0009e6  imul bx
    X86_AT(c, 0x9e6u);
    x86_imul1(c, (c.r[3] & 0xFFFFu), 2);
    // 0009e9  add ax, di
    X86_AT(c, 0x9e9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[7] & 0xFFFFu), 0, 2)); }
    // 0009ec  mov word ptr gs:[esi], ax
    X86_AT(c, 0x9ecu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6])), (c.r[0] & 0xFFFFu));
    // 0009f0  ret 
    X86_AT(c, 0x9f0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9b2u, "ran off the end of a function");
}
void f_000009b4(X86Cpu& c) {
    X86_TICK(c, 126);
    // 0009b4  mov ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x9b4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))));
    // 0009bc  dec cl
    X86_AT(c, 0x9bcu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 0009be  and al, cl
    X86_AT(c, 0x9beu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 1), 1)); }
    // 0009c0  inc cl
    X86_AT(c, 0x9c0u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_inc(c, v, 1)); }
    // 0009c2  inc dl
    X86_AT(c, 0x9c2u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 0009c4  imul dl
    X86_AT(c, 0x9c4u);
    x86_imul1(c, g8(c, 2), 1);
    // 0009c6  sub di, ax
    X86_AT(c, 0x9c6u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0009c9  mov word ptr gs:[esi + 2], di
    X86_AT(c, 0x9c9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u)), (c.r[7] & 0xFFFFu));
    // 0009ce  mov ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x9ceu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))));
    // 0009d6  cwd 
    X86_AT(c, 0x9d6u);
    s16(c, 2, (c.r[0] & 0x8000u) ? 0xFFFFu : 0u);
    // 0009d8  idiv cx
    X86_AT(c, 0x9d8u);
    x86_idiv(c, (c.r[1] & 0xFFFFu), 2, 0x9d8u);
    // 0009db  mov di, ax
    X86_AT(c, 0x9dbu);
    s16(c, 7, (c.r[0] & 0xFFFFu));
    // 0009de  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x9deu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0009e6  imul bx
    X86_AT(c, 0x9e6u);
    x86_imul1(c, (c.r[3] & 0xFFFFu), 2);
    // 0009e9  add ax, di
    X86_AT(c, 0x9e9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[7] & 0xFFFFu), 0, 2)); }
    // 0009ec  mov word ptr gs:[esi], ax
    X86_AT(c, 0x9ecu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6])), (c.r[0] & 0xFFFFu));
    // 0009f0  ret 
    X86_AT(c, 0x9f0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9b4u, "ran off the end of a function");
}
void f_000009bc(X86Cpu& c) {
    X86_TICK(c, 122);
    // 0009bc  dec cl
    X86_AT(c, 0x9bcu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 0009be  and al, cl
    X86_AT(c, 0x9beu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 1), 1)); }
    // 0009c0  inc cl
    X86_AT(c, 0x9c0u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_inc(c, v, 1)); }
    // 0009c2  inc dl
    X86_AT(c, 0x9c2u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 0009c4  imul dl
    X86_AT(c, 0x9c4u);
    x86_imul1(c, g8(c, 2), 1);
    // 0009c6  sub di, ax
    X86_AT(c, 0x9c6u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0009c9  mov word ptr gs:[esi + 2], di
    X86_AT(c, 0x9c9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u)), (c.r[7] & 0xFFFFu));
    // 0009ce  mov ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x9ceu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))));
    // 0009d6  cwd 
    X86_AT(c, 0x9d6u);
    s16(c, 2, (c.r[0] & 0x8000u) ? 0xFFFFu : 0u);
    // 0009d8  idiv cx
    X86_AT(c, 0x9d8u);
    x86_idiv(c, (c.r[1] & 0xFFFFu), 2, 0x9d8u);
    // 0009db  mov di, ax
    X86_AT(c, 0x9dbu);
    s16(c, 7, (c.r[0] & 0xFFFFu));
    // 0009de  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x9deu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0009e6  imul bx
    X86_AT(c, 0x9e6u);
    x86_imul1(c, (c.r[3] & 0xFFFFu), 2);
    // 0009e9  add ax, di
    X86_AT(c, 0x9e9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[7] & 0xFFFFu), 0, 2)); }
    // 0009ec  mov word ptr gs:[esi], ax
    X86_AT(c, 0x9ecu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6])), (c.r[0] & 0xFFFFu));
    // 0009f0  ret 
    X86_AT(c, 0x9f0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9bcu, "ran off the end of a function");
}
void f_000009be(X86Cpu& c) {
    X86_TICK(c, 120);
    // 0009be  and al, cl
    X86_AT(c, 0x9beu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 1), 1)); }
    // 0009c0  inc cl
    X86_AT(c, 0x9c0u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_inc(c, v, 1)); }
    // 0009c2  inc dl
    X86_AT(c, 0x9c2u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 0009c4  imul dl
    X86_AT(c, 0x9c4u);
    x86_imul1(c, g8(c, 2), 1);
    // 0009c6  sub di, ax
    X86_AT(c, 0x9c6u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0009c9  mov word ptr gs:[esi + 2], di
    X86_AT(c, 0x9c9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u)), (c.r[7] & 0xFFFFu));
    // 0009ce  mov ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x9ceu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))));
    // 0009d6  cwd 
    X86_AT(c, 0x9d6u);
    s16(c, 2, (c.r[0] & 0x8000u) ? 0xFFFFu : 0u);
    // 0009d8  idiv cx
    X86_AT(c, 0x9d8u);
    x86_idiv(c, (c.r[1] & 0xFFFFu), 2, 0x9d8u);
    // 0009db  mov di, ax
    X86_AT(c, 0x9dbu);
    s16(c, 7, (c.r[0] & 0xFFFFu));
    // 0009de  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x9deu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0009e6  imul bx
    X86_AT(c, 0x9e6u);
    x86_imul1(c, (c.r[3] & 0xFFFFu), 2);
    // 0009e9  add ax, di
    X86_AT(c, 0x9e9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[7] & 0xFFFFu), 0, 2)); }
    // 0009ec  mov word ptr gs:[esi], ax
    X86_AT(c, 0x9ecu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6])), (c.r[0] & 0xFFFFu));
    // 0009f0  ret 
    X86_AT(c, 0x9f0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9beu, "ran off the end of a function");
}
void f_000009c0(X86Cpu& c) {
    X86_TICK(c, 118);
    // 0009c0  inc cl
    X86_AT(c, 0x9c0u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_inc(c, v, 1)); }
    // 0009c2  inc dl
    X86_AT(c, 0x9c2u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 0009c4  imul dl
    X86_AT(c, 0x9c4u);
    x86_imul1(c, g8(c, 2), 1);
    // 0009c6  sub di, ax
    X86_AT(c, 0x9c6u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0009c9  mov word ptr gs:[esi + 2], di
    X86_AT(c, 0x9c9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u)), (c.r[7] & 0xFFFFu));
    // 0009ce  mov ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x9ceu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))));
    // 0009d6  cwd 
    X86_AT(c, 0x9d6u);
    s16(c, 2, (c.r[0] & 0x8000u) ? 0xFFFFu : 0u);
    // 0009d8  idiv cx
    X86_AT(c, 0x9d8u);
    x86_idiv(c, (c.r[1] & 0xFFFFu), 2, 0x9d8u);
    // 0009db  mov di, ax
    X86_AT(c, 0x9dbu);
    s16(c, 7, (c.r[0] & 0xFFFFu));
    // 0009de  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x9deu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0009e6  imul bx
    X86_AT(c, 0x9e6u);
    x86_imul1(c, (c.r[3] & 0xFFFFu), 2);
    // 0009e9  add ax, di
    X86_AT(c, 0x9e9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[7] & 0xFFFFu), 0, 2)); }
    // 0009ec  mov word ptr gs:[esi], ax
    X86_AT(c, 0x9ecu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6])), (c.r[0] & 0xFFFFu));
    // 0009f0  ret 
    X86_AT(c, 0x9f0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9c0u, "ran off the end of a function");
}
void f_000009c2(X86Cpu& c) {
    X86_TICK(c, 116);
    // 0009c2  inc dl
    X86_AT(c, 0x9c2u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 0009c4  imul dl
    X86_AT(c, 0x9c4u);
    x86_imul1(c, g8(c, 2), 1);
    // 0009c6  sub di, ax
    X86_AT(c, 0x9c6u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0009c9  mov word ptr gs:[esi + 2], di
    X86_AT(c, 0x9c9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u)), (c.r[7] & 0xFFFFu));
    // 0009ce  mov ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x9ceu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))));
    // 0009d6  cwd 
    X86_AT(c, 0x9d6u);
    s16(c, 2, (c.r[0] & 0x8000u) ? 0xFFFFu : 0u);
    // 0009d8  idiv cx
    X86_AT(c, 0x9d8u);
    x86_idiv(c, (c.r[1] & 0xFFFFu), 2, 0x9d8u);
    // 0009db  mov di, ax
    X86_AT(c, 0x9dbu);
    s16(c, 7, (c.r[0] & 0xFFFFu));
    // 0009de  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x9deu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0009e6  imul bx
    X86_AT(c, 0x9e6u);
    x86_imul1(c, (c.r[3] & 0xFFFFu), 2);
    // 0009e9  add ax, di
    X86_AT(c, 0x9e9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[7] & 0xFFFFu), 0, 2)); }
    // 0009ec  mov word ptr gs:[esi], ax
    X86_AT(c, 0x9ecu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6])), (c.r[0] & 0xFFFFu));
    // 0009f0  ret 
    X86_AT(c, 0x9f0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9c2u, "ran off the end of a function");
}
void f_000009c4(X86Cpu& c) {
    X86_TICK(c, 114);
    // 0009c4  imul dl
    X86_AT(c, 0x9c4u);
    x86_imul1(c, g8(c, 2), 1);
    // 0009c6  sub di, ax
    X86_AT(c, 0x9c6u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0009c9  mov word ptr gs:[esi + 2], di
    X86_AT(c, 0x9c9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u)), (c.r[7] & 0xFFFFu));
    // 0009ce  mov ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x9ceu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))));
    // 0009d6  cwd 
    X86_AT(c, 0x9d6u);
    s16(c, 2, (c.r[0] & 0x8000u) ? 0xFFFFu : 0u);
    // 0009d8  idiv cx
    X86_AT(c, 0x9d8u);
    x86_idiv(c, (c.r[1] & 0xFFFFu), 2, 0x9d8u);
    // 0009db  mov di, ax
    X86_AT(c, 0x9dbu);
    s16(c, 7, (c.r[0] & 0xFFFFu));
    // 0009de  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x9deu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0009e6  imul bx
    X86_AT(c, 0x9e6u);
    x86_imul1(c, (c.r[3] & 0xFFFFu), 2);
    // 0009e9  add ax, di
    X86_AT(c, 0x9e9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[7] & 0xFFFFu), 0, 2)); }
    // 0009ec  mov word ptr gs:[esi], ax
    X86_AT(c, 0x9ecu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6])), (c.r[0] & 0xFFFFu));
    // 0009f0  ret 
    X86_AT(c, 0x9f0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9c4u, "ran off the end of a function");
}
void f_000009c6(X86Cpu& c) {
    X86_TICK(c, 92);
    // 0009c6  sub di, ax
    X86_AT(c, 0x9c6u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0009c9  mov word ptr gs:[esi + 2], di
    X86_AT(c, 0x9c9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u)), (c.r[7] & 0xFFFFu));
    // 0009ce  mov ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x9ceu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))));
    // 0009d6  cwd 
    X86_AT(c, 0x9d6u);
    s16(c, 2, (c.r[0] & 0x8000u) ? 0xFFFFu : 0u);
    // 0009d8  idiv cx
    X86_AT(c, 0x9d8u);
    x86_idiv(c, (c.r[1] & 0xFFFFu), 2, 0x9d8u);
    // 0009db  mov di, ax
    X86_AT(c, 0x9dbu);
    s16(c, 7, (c.r[0] & 0xFFFFu));
    // 0009de  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x9deu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0009e6  imul bx
    X86_AT(c, 0x9e6u);
    x86_imul1(c, (c.r[3] & 0xFFFFu), 2);
    // 0009e9  add ax, di
    X86_AT(c, 0x9e9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[7] & 0xFFFFu), 0, 2)); }
    // 0009ec  mov word ptr gs:[esi], ax
    X86_AT(c, 0x9ecu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6])), (c.r[0] & 0xFFFFu));
    // 0009f0  ret 
    X86_AT(c, 0x9f0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9c6u, "ran off the end of a function");
}
void f_000009c9(X86Cpu& c) {
    X86_TICK(c, 90);
    // 0009c9  mov word ptr gs:[esi + 2], di
    X86_AT(c, 0x9c9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u)), (c.r[7] & 0xFFFFu));
    // 0009ce  mov ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x9ceu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))));
    // 0009d6  cwd 
    X86_AT(c, 0x9d6u);
    s16(c, 2, (c.r[0] & 0x8000u) ? 0xFFFFu : 0u);
    // 0009d8  idiv cx
    X86_AT(c, 0x9d8u);
    x86_idiv(c, (c.r[1] & 0xFFFFu), 2, 0x9d8u);
    // 0009db  mov di, ax
    X86_AT(c, 0x9dbu);
    s16(c, 7, (c.r[0] & 0xFFFFu));
    // 0009de  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x9deu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0009e6  imul bx
    X86_AT(c, 0x9e6u);
    x86_imul1(c, (c.r[3] & 0xFFFFu), 2);
    // 0009e9  add ax, di
    X86_AT(c, 0x9e9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[7] & 0xFFFFu), 0, 2)); }
    // 0009ec  mov word ptr gs:[esi], ax
    X86_AT(c, 0x9ecu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6])), (c.r[0] & 0xFFFFu));
    // 0009f0  ret 
    X86_AT(c, 0x9f0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9c9u, "ran off the end of a function");
}
void f_000009ce(X86Cpu& c) {
    X86_TICK(c, 88);
    // 0009ce  mov ax, word ptr gs:[ebp + 0x3a4]
    X86_AT(c, 0x9ceu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))));
    // 0009d6  cwd 
    X86_AT(c, 0x9d6u);
    s16(c, 2, (c.r[0] & 0x8000u) ? 0xFFFFu : 0u);
    // 0009d8  idiv cx
    X86_AT(c, 0x9d8u);
    x86_idiv(c, (c.r[1] & 0xFFFFu), 2, 0x9d8u);
    // 0009db  mov di, ax
    X86_AT(c, 0x9dbu);
    s16(c, 7, (c.r[0] & 0xFFFFu));
    // 0009de  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x9deu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0009e6  imul bx
    X86_AT(c, 0x9e6u);
    x86_imul1(c, (c.r[3] & 0xFFFFu), 2);
    // 0009e9  add ax, di
    X86_AT(c, 0x9e9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[7] & 0xFFFFu), 0, 2)); }
    // 0009ec  mov word ptr gs:[esi], ax
    X86_AT(c, 0x9ecu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6])), (c.r[0] & 0xFFFFu));
    // 0009f0  ret 
    X86_AT(c, 0x9f0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9ceu, "ran off the end of a function");
}
void f_000009d6(X86Cpu& c) {
    X86_TICK(c, 84);
    // 0009d6  cwd 
    X86_AT(c, 0x9d6u);
    s16(c, 2, (c.r[0] & 0x8000u) ? 0xFFFFu : 0u);
    // 0009d8  idiv cx
    X86_AT(c, 0x9d8u);
    x86_idiv(c, (c.r[1] & 0xFFFFu), 2, 0x9d8u);
    // 0009db  mov di, ax
    X86_AT(c, 0x9dbu);
    s16(c, 7, (c.r[0] & 0xFFFFu));
    // 0009de  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x9deu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0009e6  imul bx
    X86_AT(c, 0x9e6u);
    x86_imul1(c, (c.r[3] & 0xFFFFu), 2);
    // 0009e9  add ax, di
    X86_AT(c, 0x9e9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[7] & 0xFFFFu), 0, 2)); }
    // 0009ec  mov word ptr gs:[esi], ax
    X86_AT(c, 0x9ecu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6])), (c.r[0] & 0xFFFFu));
    // 0009f0  ret 
    X86_AT(c, 0x9f0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9d6u, "ran off the end of a function");
}
void f_000009d8(X86Cpu& c) {
    X86_TICK(c, 82);
    // 0009d8  idiv cx
    X86_AT(c, 0x9d8u);
    x86_idiv(c, (c.r[1] & 0xFFFFu), 2, 0x9d8u);
    // 0009db  mov di, ax
    X86_AT(c, 0x9dbu);
    s16(c, 7, (c.r[0] & 0xFFFFu));
    // 0009de  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x9deu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0009e6  imul bx
    X86_AT(c, 0x9e6u);
    x86_imul1(c, (c.r[3] & 0xFFFFu), 2);
    // 0009e9  add ax, di
    X86_AT(c, 0x9e9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[7] & 0xFFFFu), 0, 2)); }
    // 0009ec  mov word ptr gs:[esi], ax
    X86_AT(c, 0x9ecu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6])), (c.r[0] & 0xFFFFu));
    // 0009f0  ret 
    X86_AT(c, 0x9f0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9d8u, "ran off the end of a function");
}
void f_000009db(X86Cpu& c) {
    X86_TICK(c, 42);
    // 0009db  mov di, ax
    X86_AT(c, 0x9dbu);
    s16(c, 7, (c.r[0] & 0xFFFFu));
    // 0009de  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x9deu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0009e6  imul bx
    X86_AT(c, 0x9e6u);
    x86_imul1(c, (c.r[3] & 0xFFFFu), 2);
    // 0009e9  add ax, di
    X86_AT(c, 0x9e9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[7] & 0xFFFFu), 0, 2)); }
    // 0009ec  mov word ptr gs:[esi], ax
    X86_AT(c, 0x9ecu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6])), (c.r[0] & 0xFFFFu));
    // 0009f0  ret 
    X86_AT(c, 0x9f0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9dbu, "ran off the end of a function");
}
void f_000009de(X86Cpu& c) {
    X86_TICK(c, 40);
    // 0009de  mov ax, word ptr gs:[ebp + 0x3a6]
    X86_AT(c, 0x9deu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u))));
    // 0009e6  imul bx
    X86_AT(c, 0x9e6u);
    x86_imul1(c, (c.r[3] & 0xFFFFu), 2);
    // 0009e9  add ax, di
    X86_AT(c, 0x9e9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[7] & 0xFFFFu), 0, 2)); }
    // 0009ec  mov word ptr gs:[esi], ax
    X86_AT(c, 0x9ecu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6])), (c.r[0] & 0xFFFFu));
    // 0009f0  ret 
    X86_AT(c, 0x9f0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9deu, "ran off the end of a function");
}
void f_000009e6(X86Cpu& c) {
    X86_TICK(c, 36);
    // 0009e6  imul bx
    X86_AT(c, 0x9e6u);
    x86_imul1(c, (c.r[3] & 0xFFFFu), 2);
    // 0009e9  add ax, di
    X86_AT(c, 0x9e9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[7] & 0xFFFFu), 0, 2)); }
    // 0009ec  mov word ptr gs:[esi], ax
    X86_AT(c, 0x9ecu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6])), (c.r[0] & 0xFFFFu));
    // 0009f0  ret 
    X86_AT(c, 0x9f0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9e6u, "ran off the end of a function");
}
void f_000009e9(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0009e9  add ax, di
    X86_AT(c, 0x9e9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[7] & 0xFFFFu), 0, 2)); }
    // 0009ec  mov word ptr gs:[esi], ax
    X86_AT(c, 0x9ecu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6])), (c.r[0] & 0xFFFFu));
    // 0009f0  ret 
    X86_AT(c, 0x9f0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9e9u, "ran off the end of a function");
}
void f_000009ec(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0009ec  mov word ptr gs:[esi], ax
    X86_AT(c, 0x9ecu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6])), (c.r[0] & 0xFFFFu));
    // 0009f0  ret 
    X86_AT(c, 0x9f0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9ecu, "ran off the end of a function");
}
void f_000009f0(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0009f0  ret 
    X86_AT(c, 0x9f0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9f0u, "ran off the end of a function");
}
void f_000009f4(X86Cpu& c) {
    goto L_9f4;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_9f4:
    X86_TICK(c, 13);
    // 0009f4  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0x9f4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 0009f9  cmp al, 2
    X86_AT(c, 0x9f9u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0009fb  jae 0x7d7
    X86_AT(c, 0x9fbu);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 11);
    // 000a01  dec dx
    X86_AT(c, 0xa01u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 000a03  dec bx
    X86_AT(c, 0xa03u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 000a05  cmp dx, 0xf
    X86_AT(c, 0xa05u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xFu, 0, 2);
    // 000a09  ja 0x7d7
    X86_AT(c, 0xa09u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 7);
    // 000a0f  cmp bx, 0xf
    X86_AT(c, 0xa0fu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0xFu, 0, 2);
    // 000a13  ja 0x7d7
    X86_AT(c, 0xa13u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 15);
    // 000a19  xor ch, ch
    X86_AT(c, 0xa19u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v ^ g8(c, 5), 1)); }
    // 000a1b  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xa1bu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000a20  test eax, eax
    X86_AT(c, 0xa20u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 000a22  je 0xa2f
    X86_AT(c, 0xa22u);
    if (x86_cc(c, 4)) { goto L_a2f; }
    X86_TICK(c, 12);
    // 000a24  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0xa24u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 000a29  jae 0x7d7
    X86_AT(c, 0xa29u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
L_a2f:
    X86_TICK(c, 12);
    // 000a2f  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0xa2fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 000a34  jb 0xa38
    X86_AT(c, 0xa34u);
    if (x86_cc(c, 2)) { goto L_a38; }
    X86_TICK(c, 2);
    // 000a36  inc ch
    X86_AT(c, 0xa36u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_inc(c, v, 1)); }
L_a38:
    X86_TICK(c, 50);
    // 000a38  mov cl, al
    X86_AT(c, 0xa38u);
    s8(c, 1, g8(c, 0));
    // 000a3a  movzx eax, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0xa3au);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 000a40  movzx eax, word ptr cs:[eax*2 + 0xae4]
    X86_AT(c, 0xa40u);
    c.r[0] = rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0xAE4u)));
    // 000a49  test cl, cl
    X86_AT(c, 0xa49u);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 000a4b  setne cl
    X86_AT(c, 0xa4bu);
    s8(c, 1, x86_cc(c, 5) ? 1u : 0u);
    // 000a4e  shl cl, 3
    X86_AT(c, 0xa4eu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 1, r); }
    // 000a51  shr ax, cl
    X86_AT(c, 0xa51u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 000a54  xor ah, ah
    X86_AT(c, 0xa54u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 000a56  shl ax, 4
    X86_AT(c, 0xa56u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 000a5a  shr al, 4
    X86_AT(c, 0xa5au);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 000a5d  shl eax, 8
    X86_AT(c, 0xa5du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000a60  xchg al, ah
    X86_AT(c, 0xa60u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 000a62  rol eax, 0x10
    X86_AT(c, 0xa62u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a65  cmp bx, ax
    X86_AT(c, 0xa65u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a68  jb 0x7d7
    X86_AT(c, 0xa68u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 10);
    // 000a6e  rol eax, 0x10
    X86_AT(c, 0xa6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a71  cmp dx, ax
    X86_AT(c, 0xa71u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a74  jb 0x7d7
    X86_AT(c, 0xa74u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 24);
    // 000a7a  shl edx, 0xc
    X86_AT(c, 0xa7au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[2] = r; }
    // 000a7d  shrd dx, bx, 4
    X86_AT(c, 0xa7du);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_double(c, false, v, (c.r[3] & 0xFFFFu), 0x4u, 2, w); if (w) s16(c, 2, r); }
    // 000a82  shr dx, 8
    X86_AT(c, 0xa82u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 2, r); }
    // 000a86  mov bx, 0xff00
    X86_AT(c, 0xa86u);
    s16(c, 3, 0xFF00u);
    // 000a8a  shl edx, cl
    X86_AT(c, 0xa8au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 000a8c  shr bx, cl
    X86_AT(c, 0xa8cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 3, r); }
    // 000a8f  test ch, ch
    X86_AT(c, 0xa8fu);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000a91  je 0xa97
    X86_AT(c, 0xa91u);
    if (x86_cc(c, 4)) { goto L_a97; }
    X86_TICK(c, 4);
    // 000a93  mov dh, dl
    X86_AT(c, 0xa93u);
    s8(c, 6, g8(c, 2));
    // 000a95  mov bh, bl
    X86_AT(c, 0xa95u);
    s8(c, 7, g8(c, 3));
L_a97:
    X86_TICK(c, 23);
    // 000a97  and word ptr gs:[ebp + 0xf6], bx
    X86_AT(c, 0xa97u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[3] & 0xFFFFu), 2)); }
    // 000a9f  or word ptr gs:[ebp + 0xf6], dx
    X86_AT(c, 0xa9fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 000aa7  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0xaa7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 000ab2  test ch, ch
    X86_AT(c, 0xab2u);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000ab4  jne 0xac2
    X86_AT(c, 0xab4u);
    if (x86_cc(c, 5)) { goto L_ac2; }
    X86_TICK(c, 13);
    // 000ab6  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xab6u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ac2:
    X86_TICK(c, 9);
    // 000ac2  sub eax, eax
    X86_AT(c, 0xac2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000ac4  call 0x968
    X86_AT(c, 0xac4u);
    push32(c, 0xac9u); f_00000968(c); X86_RET(c, 0xac9u);
    X86_TICK(c, 9);
    // 000ac9  mov eax, 1
    X86_AT(c, 0xac9u);
    c.r[0] = 0x1u;
    // 000ace  call 0x968
    X86_AT(c, 0xaceu);
    push32(c, 0xad3u); f_00000968(c); X86_RET(c, 0xad3u);
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9f4u, "ran off the end of a function");
}
void f_000009f9(X86Cpu& c) {
    goto L_9f9;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_9f9:
    X86_TICK(c, 7);
    // 0009f9  cmp al, 2
    X86_AT(c, 0x9f9u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0009fb  jae 0x7d7
    X86_AT(c, 0x9fbu);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 11);
    // 000a01  dec dx
    X86_AT(c, 0xa01u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 000a03  dec bx
    X86_AT(c, 0xa03u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 000a05  cmp dx, 0xf
    X86_AT(c, 0xa05u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xFu, 0, 2);
    // 000a09  ja 0x7d7
    X86_AT(c, 0xa09u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 7);
    // 000a0f  cmp bx, 0xf
    X86_AT(c, 0xa0fu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0xFu, 0, 2);
    // 000a13  ja 0x7d7
    X86_AT(c, 0xa13u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 15);
    // 000a19  xor ch, ch
    X86_AT(c, 0xa19u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v ^ g8(c, 5), 1)); }
    // 000a1b  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xa1bu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000a20  test eax, eax
    X86_AT(c, 0xa20u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 000a22  je 0xa2f
    X86_AT(c, 0xa22u);
    if (x86_cc(c, 4)) { goto L_a2f; }
    X86_TICK(c, 12);
    // 000a24  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0xa24u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 000a29  jae 0x7d7
    X86_AT(c, 0xa29u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
L_a2f:
    X86_TICK(c, 12);
    // 000a2f  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0xa2fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 000a34  jb 0xa38
    X86_AT(c, 0xa34u);
    if (x86_cc(c, 2)) { goto L_a38; }
    X86_TICK(c, 2);
    // 000a36  inc ch
    X86_AT(c, 0xa36u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_inc(c, v, 1)); }
L_a38:
    X86_TICK(c, 50);
    // 000a38  mov cl, al
    X86_AT(c, 0xa38u);
    s8(c, 1, g8(c, 0));
    // 000a3a  movzx eax, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0xa3au);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 000a40  movzx eax, word ptr cs:[eax*2 + 0xae4]
    X86_AT(c, 0xa40u);
    c.r[0] = rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0xAE4u)));
    // 000a49  test cl, cl
    X86_AT(c, 0xa49u);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 000a4b  setne cl
    X86_AT(c, 0xa4bu);
    s8(c, 1, x86_cc(c, 5) ? 1u : 0u);
    // 000a4e  shl cl, 3
    X86_AT(c, 0xa4eu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 1, r); }
    // 000a51  shr ax, cl
    X86_AT(c, 0xa51u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 000a54  xor ah, ah
    X86_AT(c, 0xa54u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 000a56  shl ax, 4
    X86_AT(c, 0xa56u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 000a5a  shr al, 4
    X86_AT(c, 0xa5au);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 000a5d  shl eax, 8
    X86_AT(c, 0xa5du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000a60  xchg al, ah
    X86_AT(c, 0xa60u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 000a62  rol eax, 0x10
    X86_AT(c, 0xa62u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a65  cmp bx, ax
    X86_AT(c, 0xa65u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a68  jb 0x7d7
    X86_AT(c, 0xa68u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 10);
    // 000a6e  rol eax, 0x10
    X86_AT(c, 0xa6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a71  cmp dx, ax
    X86_AT(c, 0xa71u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a74  jb 0x7d7
    X86_AT(c, 0xa74u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 24);
    // 000a7a  shl edx, 0xc
    X86_AT(c, 0xa7au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[2] = r; }
    // 000a7d  shrd dx, bx, 4
    X86_AT(c, 0xa7du);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_double(c, false, v, (c.r[3] & 0xFFFFu), 0x4u, 2, w); if (w) s16(c, 2, r); }
    // 000a82  shr dx, 8
    X86_AT(c, 0xa82u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 2, r); }
    // 000a86  mov bx, 0xff00
    X86_AT(c, 0xa86u);
    s16(c, 3, 0xFF00u);
    // 000a8a  shl edx, cl
    X86_AT(c, 0xa8au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 000a8c  shr bx, cl
    X86_AT(c, 0xa8cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 3, r); }
    // 000a8f  test ch, ch
    X86_AT(c, 0xa8fu);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000a91  je 0xa97
    X86_AT(c, 0xa91u);
    if (x86_cc(c, 4)) { goto L_a97; }
    X86_TICK(c, 4);
    // 000a93  mov dh, dl
    X86_AT(c, 0xa93u);
    s8(c, 6, g8(c, 2));
    // 000a95  mov bh, bl
    X86_AT(c, 0xa95u);
    s8(c, 7, g8(c, 3));
L_a97:
    X86_TICK(c, 23);
    // 000a97  and word ptr gs:[ebp + 0xf6], bx
    X86_AT(c, 0xa97u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[3] & 0xFFFFu), 2)); }
    // 000a9f  or word ptr gs:[ebp + 0xf6], dx
    X86_AT(c, 0xa9fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 000aa7  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0xaa7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 000ab2  test ch, ch
    X86_AT(c, 0xab2u);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000ab4  jne 0xac2
    X86_AT(c, 0xab4u);
    if (x86_cc(c, 5)) { goto L_ac2; }
    X86_TICK(c, 13);
    // 000ab6  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xab6u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ac2:
    X86_TICK(c, 9);
    // 000ac2  sub eax, eax
    X86_AT(c, 0xac2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000ac4  call 0x968
    X86_AT(c, 0xac4u);
    push32(c, 0xac9u); f_00000968(c); X86_RET(c, 0xac9u);
    X86_TICK(c, 9);
    // 000ac9  mov eax, 1
    X86_AT(c, 0xac9u);
    c.r[0] = 0x1u;
    // 000ace  call 0x968
    X86_AT(c, 0xaceu);
    push32(c, 0xad3u); f_00000968(c); X86_RET(c, 0xad3u);
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9f9u, "ran off the end of a function");
}
void f_000009fb(X86Cpu& c) {
    goto L_9fb;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_9fb:
    X86_TICK(c, 5);
    // 0009fb  jae 0x7d7
    X86_AT(c, 0x9fbu);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 11);
    // 000a01  dec dx
    X86_AT(c, 0xa01u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 000a03  dec bx
    X86_AT(c, 0xa03u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 000a05  cmp dx, 0xf
    X86_AT(c, 0xa05u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xFu, 0, 2);
    // 000a09  ja 0x7d7
    X86_AT(c, 0xa09u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 7);
    // 000a0f  cmp bx, 0xf
    X86_AT(c, 0xa0fu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0xFu, 0, 2);
    // 000a13  ja 0x7d7
    X86_AT(c, 0xa13u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 15);
    // 000a19  xor ch, ch
    X86_AT(c, 0xa19u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v ^ g8(c, 5), 1)); }
    // 000a1b  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xa1bu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000a20  test eax, eax
    X86_AT(c, 0xa20u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 000a22  je 0xa2f
    X86_AT(c, 0xa22u);
    if (x86_cc(c, 4)) { goto L_a2f; }
    X86_TICK(c, 12);
    // 000a24  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0xa24u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 000a29  jae 0x7d7
    X86_AT(c, 0xa29u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
L_a2f:
    X86_TICK(c, 12);
    // 000a2f  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0xa2fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 000a34  jb 0xa38
    X86_AT(c, 0xa34u);
    if (x86_cc(c, 2)) { goto L_a38; }
    X86_TICK(c, 2);
    // 000a36  inc ch
    X86_AT(c, 0xa36u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_inc(c, v, 1)); }
L_a38:
    X86_TICK(c, 50);
    // 000a38  mov cl, al
    X86_AT(c, 0xa38u);
    s8(c, 1, g8(c, 0));
    // 000a3a  movzx eax, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0xa3au);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 000a40  movzx eax, word ptr cs:[eax*2 + 0xae4]
    X86_AT(c, 0xa40u);
    c.r[0] = rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0xAE4u)));
    // 000a49  test cl, cl
    X86_AT(c, 0xa49u);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 000a4b  setne cl
    X86_AT(c, 0xa4bu);
    s8(c, 1, x86_cc(c, 5) ? 1u : 0u);
    // 000a4e  shl cl, 3
    X86_AT(c, 0xa4eu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 1, r); }
    // 000a51  shr ax, cl
    X86_AT(c, 0xa51u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 000a54  xor ah, ah
    X86_AT(c, 0xa54u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 000a56  shl ax, 4
    X86_AT(c, 0xa56u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 000a5a  shr al, 4
    X86_AT(c, 0xa5au);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 000a5d  shl eax, 8
    X86_AT(c, 0xa5du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000a60  xchg al, ah
    X86_AT(c, 0xa60u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 000a62  rol eax, 0x10
    X86_AT(c, 0xa62u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a65  cmp bx, ax
    X86_AT(c, 0xa65u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a68  jb 0x7d7
    X86_AT(c, 0xa68u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 10);
    // 000a6e  rol eax, 0x10
    X86_AT(c, 0xa6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a71  cmp dx, ax
    X86_AT(c, 0xa71u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a74  jb 0x7d7
    X86_AT(c, 0xa74u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 24);
    // 000a7a  shl edx, 0xc
    X86_AT(c, 0xa7au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[2] = r; }
    // 000a7d  shrd dx, bx, 4
    X86_AT(c, 0xa7du);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_double(c, false, v, (c.r[3] & 0xFFFFu), 0x4u, 2, w); if (w) s16(c, 2, r); }
    // 000a82  shr dx, 8
    X86_AT(c, 0xa82u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 2, r); }
    // 000a86  mov bx, 0xff00
    X86_AT(c, 0xa86u);
    s16(c, 3, 0xFF00u);
    // 000a8a  shl edx, cl
    X86_AT(c, 0xa8au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 000a8c  shr bx, cl
    X86_AT(c, 0xa8cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 3, r); }
    // 000a8f  test ch, ch
    X86_AT(c, 0xa8fu);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000a91  je 0xa97
    X86_AT(c, 0xa91u);
    if (x86_cc(c, 4)) { goto L_a97; }
    X86_TICK(c, 4);
    // 000a93  mov dh, dl
    X86_AT(c, 0xa93u);
    s8(c, 6, g8(c, 2));
    // 000a95  mov bh, bl
    X86_AT(c, 0xa95u);
    s8(c, 7, g8(c, 3));
L_a97:
    X86_TICK(c, 23);
    // 000a97  and word ptr gs:[ebp + 0xf6], bx
    X86_AT(c, 0xa97u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[3] & 0xFFFFu), 2)); }
    // 000a9f  or word ptr gs:[ebp + 0xf6], dx
    X86_AT(c, 0xa9fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 000aa7  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0xaa7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 000ab2  test ch, ch
    X86_AT(c, 0xab2u);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000ab4  jne 0xac2
    X86_AT(c, 0xab4u);
    if (x86_cc(c, 5)) { goto L_ac2; }
    X86_TICK(c, 13);
    // 000ab6  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xab6u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ac2:
    X86_TICK(c, 9);
    // 000ac2  sub eax, eax
    X86_AT(c, 0xac2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000ac4  call 0x968
    X86_AT(c, 0xac4u);
    push32(c, 0xac9u); f_00000968(c); X86_RET(c, 0xac9u);
    X86_TICK(c, 9);
    // 000ac9  mov eax, 1
    X86_AT(c, 0xac9u);
    c.r[0] = 0x1u;
    // 000ace  call 0x968
    X86_AT(c, 0xaceu);
    push32(c, 0xad3u); f_00000968(c); X86_RET(c, 0xad3u);
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9fbu, "ran off the end of a function");
}
void f_00000a01(X86Cpu& c) {
    goto L_a01;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_a01:
    X86_TICK(c, 11);
    // 000a01  dec dx
    X86_AT(c, 0xa01u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 000a03  dec bx
    X86_AT(c, 0xa03u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 000a05  cmp dx, 0xf
    X86_AT(c, 0xa05u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xFu, 0, 2);
    // 000a09  ja 0x7d7
    X86_AT(c, 0xa09u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 7);
    // 000a0f  cmp bx, 0xf
    X86_AT(c, 0xa0fu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0xFu, 0, 2);
    // 000a13  ja 0x7d7
    X86_AT(c, 0xa13u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 15);
    // 000a19  xor ch, ch
    X86_AT(c, 0xa19u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v ^ g8(c, 5), 1)); }
    // 000a1b  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xa1bu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000a20  test eax, eax
    X86_AT(c, 0xa20u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 000a22  je 0xa2f
    X86_AT(c, 0xa22u);
    if (x86_cc(c, 4)) { goto L_a2f; }
    X86_TICK(c, 12);
    // 000a24  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0xa24u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 000a29  jae 0x7d7
    X86_AT(c, 0xa29u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
L_a2f:
    X86_TICK(c, 12);
    // 000a2f  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0xa2fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 000a34  jb 0xa38
    X86_AT(c, 0xa34u);
    if (x86_cc(c, 2)) { goto L_a38; }
    X86_TICK(c, 2);
    // 000a36  inc ch
    X86_AT(c, 0xa36u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_inc(c, v, 1)); }
L_a38:
    X86_TICK(c, 50);
    // 000a38  mov cl, al
    X86_AT(c, 0xa38u);
    s8(c, 1, g8(c, 0));
    // 000a3a  movzx eax, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0xa3au);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 000a40  movzx eax, word ptr cs:[eax*2 + 0xae4]
    X86_AT(c, 0xa40u);
    c.r[0] = rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0xAE4u)));
    // 000a49  test cl, cl
    X86_AT(c, 0xa49u);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 000a4b  setne cl
    X86_AT(c, 0xa4bu);
    s8(c, 1, x86_cc(c, 5) ? 1u : 0u);
    // 000a4e  shl cl, 3
    X86_AT(c, 0xa4eu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 1, r); }
    // 000a51  shr ax, cl
    X86_AT(c, 0xa51u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 000a54  xor ah, ah
    X86_AT(c, 0xa54u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 000a56  shl ax, 4
    X86_AT(c, 0xa56u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 000a5a  shr al, 4
    X86_AT(c, 0xa5au);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 000a5d  shl eax, 8
    X86_AT(c, 0xa5du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000a60  xchg al, ah
    X86_AT(c, 0xa60u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 000a62  rol eax, 0x10
    X86_AT(c, 0xa62u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a65  cmp bx, ax
    X86_AT(c, 0xa65u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a68  jb 0x7d7
    X86_AT(c, 0xa68u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 10);
    // 000a6e  rol eax, 0x10
    X86_AT(c, 0xa6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a71  cmp dx, ax
    X86_AT(c, 0xa71u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a74  jb 0x7d7
    X86_AT(c, 0xa74u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 24);
    // 000a7a  shl edx, 0xc
    X86_AT(c, 0xa7au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[2] = r; }
    // 000a7d  shrd dx, bx, 4
    X86_AT(c, 0xa7du);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_double(c, false, v, (c.r[3] & 0xFFFFu), 0x4u, 2, w); if (w) s16(c, 2, r); }
    // 000a82  shr dx, 8
    X86_AT(c, 0xa82u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 2, r); }
    // 000a86  mov bx, 0xff00
    X86_AT(c, 0xa86u);
    s16(c, 3, 0xFF00u);
    // 000a8a  shl edx, cl
    X86_AT(c, 0xa8au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 000a8c  shr bx, cl
    X86_AT(c, 0xa8cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 3, r); }
    // 000a8f  test ch, ch
    X86_AT(c, 0xa8fu);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000a91  je 0xa97
    X86_AT(c, 0xa91u);
    if (x86_cc(c, 4)) { goto L_a97; }
    X86_TICK(c, 4);
    // 000a93  mov dh, dl
    X86_AT(c, 0xa93u);
    s8(c, 6, g8(c, 2));
    // 000a95  mov bh, bl
    X86_AT(c, 0xa95u);
    s8(c, 7, g8(c, 3));
L_a97:
    X86_TICK(c, 23);
    // 000a97  and word ptr gs:[ebp + 0xf6], bx
    X86_AT(c, 0xa97u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[3] & 0xFFFFu), 2)); }
    // 000a9f  or word ptr gs:[ebp + 0xf6], dx
    X86_AT(c, 0xa9fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 000aa7  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0xaa7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 000ab2  test ch, ch
    X86_AT(c, 0xab2u);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000ab4  jne 0xac2
    X86_AT(c, 0xab4u);
    if (x86_cc(c, 5)) { goto L_ac2; }
    X86_TICK(c, 13);
    // 000ab6  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xab6u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ac2:
    X86_TICK(c, 9);
    // 000ac2  sub eax, eax
    X86_AT(c, 0xac2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000ac4  call 0x968
    X86_AT(c, 0xac4u);
    push32(c, 0xac9u); f_00000968(c); X86_RET(c, 0xac9u);
    X86_TICK(c, 9);
    // 000ac9  mov eax, 1
    X86_AT(c, 0xac9u);
    c.r[0] = 0x1u;
    // 000ace  call 0x968
    X86_AT(c, 0xaceu);
    push32(c, 0xad3u); f_00000968(c); X86_RET(c, 0xad3u);
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa01u, "ran off the end of a function");
}
void f_00000a03(X86Cpu& c) {
    goto L_a03;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_a03:
    X86_TICK(c, 9);
    // 000a03  dec bx
    X86_AT(c, 0xa03u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 000a05  cmp dx, 0xf
    X86_AT(c, 0xa05u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xFu, 0, 2);
    // 000a09  ja 0x7d7
    X86_AT(c, 0xa09u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 7);
    // 000a0f  cmp bx, 0xf
    X86_AT(c, 0xa0fu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0xFu, 0, 2);
    // 000a13  ja 0x7d7
    X86_AT(c, 0xa13u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 15);
    // 000a19  xor ch, ch
    X86_AT(c, 0xa19u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v ^ g8(c, 5), 1)); }
    // 000a1b  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xa1bu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000a20  test eax, eax
    X86_AT(c, 0xa20u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 000a22  je 0xa2f
    X86_AT(c, 0xa22u);
    if (x86_cc(c, 4)) { goto L_a2f; }
    X86_TICK(c, 12);
    // 000a24  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0xa24u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 000a29  jae 0x7d7
    X86_AT(c, 0xa29u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
L_a2f:
    X86_TICK(c, 12);
    // 000a2f  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0xa2fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 000a34  jb 0xa38
    X86_AT(c, 0xa34u);
    if (x86_cc(c, 2)) { goto L_a38; }
    X86_TICK(c, 2);
    // 000a36  inc ch
    X86_AT(c, 0xa36u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_inc(c, v, 1)); }
L_a38:
    X86_TICK(c, 50);
    // 000a38  mov cl, al
    X86_AT(c, 0xa38u);
    s8(c, 1, g8(c, 0));
    // 000a3a  movzx eax, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0xa3au);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 000a40  movzx eax, word ptr cs:[eax*2 + 0xae4]
    X86_AT(c, 0xa40u);
    c.r[0] = rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0xAE4u)));
    // 000a49  test cl, cl
    X86_AT(c, 0xa49u);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 000a4b  setne cl
    X86_AT(c, 0xa4bu);
    s8(c, 1, x86_cc(c, 5) ? 1u : 0u);
    // 000a4e  shl cl, 3
    X86_AT(c, 0xa4eu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 1, r); }
    // 000a51  shr ax, cl
    X86_AT(c, 0xa51u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 000a54  xor ah, ah
    X86_AT(c, 0xa54u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 000a56  shl ax, 4
    X86_AT(c, 0xa56u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 000a5a  shr al, 4
    X86_AT(c, 0xa5au);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 000a5d  shl eax, 8
    X86_AT(c, 0xa5du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000a60  xchg al, ah
    X86_AT(c, 0xa60u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 000a62  rol eax, 0x10
    X86_AT(c, 0xa62u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a65  cmp bx, ax
    X86_AT(c, 0xa65u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a68  jb 0x7d7
    X86_AT(c, 0xa68u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 10);
    // 000a6e  rol eax, 0x10
    X86_AT(c, 0xa6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a71  cmp dx, ax
    X86_AT(c, 0xa71u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a74  jb 0x7d7
    X86_AT(c, 0xa74u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 24);
    // 000a7a  shl edx, 0xc
    X86_AT(c, 0xa7au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[2] = r; }
    // 000a7d  shrd dx, bx, 4
    X86_AT(c, 0xa7du);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_double(c, false, v, (c.r[3] & 0xFFFFu), 0x4u, 2, w); if (w) s16(c, 2, r); }
    // 000a82  shr dx, 8
    X86_AT(c, 0xa82u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 2, r); }
    // 000a86  mov bx, 0xff00
    X86_AT(c, 0xa86u);
    s16(c, 3, 0xFF00u);
    // 000a8a  shl edx, cl
    X86_AT(c, 0xa8au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 000a8c  shr bx, cl
    X86_AT(c, 0xa8cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 3, r); }
    // 000a8f  test ch, ch
    X86_AT(c, 0xa8fu);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000a91  je 0xa97
    X86_AT(c, 0xa91u);
    if (x86_cc(c, 4)) { goto L_a97; }
    X86_TICK(c, 4);
    // 000a93  mov dh, dl
    X86_AT(c, 0xa93u);
    s8(c, 6, g8(c, 2));
    // 000a95  mov bh, bl
    X86_AT(c, 0xa95u);
    s8(c, 7, g8(c, 3));
L_a97:
    X86_TICK(c, 23);
    // 000a97  and word ptr gs:[ebp + 0xf6], bx
    X86_AT(c, 0xa97u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[3] & 0xFFFFu), 2)); }
    // 000a9f  or word ptr gs:[ebp + 0xf6], dx
    X86_AT(c, 0xa9fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 000aa7  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0xaa7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 000ab2  test ch, ch
    X86_AT(c, 0xab2u);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000ab4  jne 0xac2
    X86_AT(c, 0xab4u);
    if (x86_cc(c, 5)) { goto L_ac2; }
    X86_TICK(c, 13);
    // 000ab6  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xab6u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ac2:
    X86_TICK(c, 9);
    // 000ac2  sub eax, eax
    X86_AT(c, 0xac2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000ac4  call 0x968
    X86_AT(c, 0xac4u);
    push32(c, 0xac9u); f_00000968(c); X86_RET(c, 0xac9u);
    X86_TICK(c, 9);
    // 000ac9  mov eax, 1
    X86_AT(c, 0xac9u);
    c.r[0] = 0x1u;
    // 000ace  call 0x968
    X86_AT(c, 0xaceu);
    push32(c, 0xad3u); f_00000968(c); X86_RET(c, 0xad3u);
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa03u, "ran off the end of a function");
}
void f_00000a05(X86Cpu& c) {
    goto L_a05;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_a05:
    X86_TICK(c, 7);
    // 000a05  cmp dx, 0xf
    X86_AT(c, 0xa05u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xFu, 0, 2);
    // 000a09  ja 0x7d7
    X86_AT(c, 0xa09u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 7);
    // 000a0f  cmp bx, 0xf
    X86_AT(c, 0xa0fu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0xFu, 0, 2);
    // 000a13  ja 0x7d7
    X86_AT(c, 0xa13u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 15);
    // 000a19  xor ch, ch
    X86_AT(c, 0xa19u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v ^ g8(c, 5), 1)); }
    // 000a1b  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xa1bu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000a20  test eax, eax
    X86_AT(c, 0xa20u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 000a22  je 0xa2f
    X86_AT(c, 0xa22u);
    if (x86_cc(c, 4)) { goto L_a2f; }
    X86_TICK(c, 12);
    // 000a24  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0xa24u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 000a29  jae 0x7d7
    X86_AT(c, 0xa29u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
L_a2f:
    X86_TICK(c, 12);
    // 000a2f  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0xa2fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 000a34  jb 0xa38
    X86_AT(c, 0xa34u);
    if (x86_cc(c, 2)) { goto L_a38; }
    X86_TICK(c, 2);
    // 000a36  inc ch
    X86_AT(c, 0xa36u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_inc(c, v, 1)); }
L_a38:
    X86_TICK(c, 50);
    // 000a38  mov cl, al
    X86_AT(c, 0xa38u);
    s8(c, 1, g8(c, 0));
    // 000a3a  movzx eax, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0xa3au);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 000a40  movzx eax, word ptr cs:[eax*2 + 0xae4]
    X86_AT(c, 0xa40u);
    c.r[0] = rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0xAE4u)));
    // 000a49  test cl, cl
    X86_AT(c, 0xa49u);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 000a4b  setne cl
    X86_AT(c, 0xa4bu);
    s8(c, 1, x86_cc(c, 5) ? 1u : 0u);
    // 000a4e  shl cl, 3
    X86_AT(c, 0xa4eu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 1, r); }
    // 000a51  shr ax, cl
    X86_AT(c, 0xa51u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 000a54  xor ah, ah
    X86_AT(c, 0xa54u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 000a56  shl ax, 4
    X86_AT(c, 0xa56u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 000a5a  shr al, 4
    X86_AT(c, 0xa5au);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 000a5d  shl eax, 8
    X86_AT(c, 0xa5du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000a60  xchg al, ah
    X86_AT(c, 0xa60u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 000a62  rol eax, 0x10
    X86_AT(c, 0xa62u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a65  cmp bx, ax
    X86_AT(c, 0xa65u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a68  jb 0x7d7
    X86_AT(c, 0xa68u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 10);
    // 000a6e  rol eax, 0x10
    X86_AT(c, 0xa6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a71  cmp dx, ax
    X86_AT(c, 0xa71u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a74  jb 0x7d7
    X86_AT(c, 0xa74u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 24);
    // 000a7a  shl edx, 0xc
    X86_AT(c, 0xa7au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[2] = r; }
    // 000a7d  shrd dx, bx, 4
    X86_AT(c, 0xa7du);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_double(c, false, v, (c.r[3] & 0xFFFFu), 0x4u, 2, w); if (w) s16(c, 2, r); }
    // 000a82  shr dx, 8
    X86_AT(c, 0xa82u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 2, r); }
    // 000a86  mov bx, 0xff00
    X86_AT(c, 0xa86u);
    s16(c, 3, 0xFF00u);
    // 000a8a  shl edx, cl
    X86_AT(c, 0xa8au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 000a8c  shr bx, cl
    X86_AT(c, 0xa8cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 3, r); }
    // 000a8f  test ch, ch
    X86_AT(c, 0xa8fu);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000a91  je 0xa97
    X86_AT(c, 0xa91u);
    if (x86_cc(c, 4)) { goto L_a97; }
    X86_TICK(c, 4);
    // 000a93  mov dh, dl
    X86_AT(c, 0xa93u);
    s8(c, 6, g8(c, 2));
    // 000a95  mov bh, bl
    X86_AT(c, 0xa95u);
    s8(c, 7, g8(c, 3));
L_a97:
    X86_TICK(c, 23);
    // 000a97  and word ptr gs:[ebp + 0xf6], bx
    X86_AT(c, 0xa97u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[3] & 0xFFFFu), 2)); }
    // 000a9f  or word ptr gs:[ebp + 0xf6], dx
    X86_AT(c, 0xa9fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 000aa7  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0xaa7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 000ab2  test ch, ch
    X86_AT(c, 0xab2u);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000ab4  jne 0xac2
    X86_AT(c, 0xab4u);
    if (x86_cc(c, 5)) { goto L_ac2; }
    X86_TICK(c, 13);
    // 000ab6  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xab6u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ac2:
    X86_TICK(c, 9);
    // 000ac2  sub eax, eax
    X86_AT(c, 0xac2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000ac4  call 0x968
    X86_AT(c, 0xac4u);
    push32(c, 0xac9u); f_00000968(c); X86_RET(c, 0xac9u);
    X86_TICK(c, 9);
    // 000ac9  mov eax, 1
    X86_AT(c, 0xac9u);
    c.r[0] = 0x1u;
    // 000ace  call 0x968
    X86_AT(c, 0xaceu);
    push32(c, 0xad3u); f_00000968(c); X86_RET(c, 0xad3u);
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa05u, "ran off the end of a function");
}
void f_00000a09(X86Cpu& c) {
    goto L_a09;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_a09:
    X86_TICK(c, 5);
    // 000a09  ja 0x7d7
    X86_AT(c, 0xa09u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 7);
    // 000a0f  cmp bx, 0xf
    X86_AT(c, 0xa0fu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0xFu, 0, 2);
    // 000a13  ja 0x7d7
    X86_AT(c, 0xa13u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 15);
    // 000a19  xor ch, ch
    X86_AT(c, 0xa19u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v ^ g8(c, 5), 1)); }
    // 000a1b  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xa1bu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000a20  test eax, eax
    X86_AT(c, 0xa20u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 000a22  je 0xa2f
    X86_AT(c, 0xa22u);
    if (x86_cc(c, 4)) { goto L_a2f; }
    X86_TICK(c, 12);
    // 000a24  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0xa24u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 000a29  jae 0x7d7
    X86_AT(c, 0xa29u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
L_a2f:
    X86_TICK(c, 12);
    // 000a2f  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0xa2fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 000a34  jb 0xa38
    X86_AT(c, 0xa34u);
    if (x86_cc(c, 2)) { goto L_a38; }
    X86_TICK(c, 2);
    // 000a36  inc ch
    X86_AT(c, 0xa36u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_inc(c, v, 1)); }
L_a38:
    X86_TICK(c, 50);
    // 000a38  mov cl, al
    X86_AT(c, 0xa38u);
    s8(c, 1, g8(c, 0));
    // 000a3a  movzx eax, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0xa3au);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 000a40  movzx eax, word ptr cs:[eax*2 + 0xae4]
    X86_AT(c, 0xa40u);
    c.r[0] = rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0xAE4u)));
    // 000a49  test cl, cl
    X86_AT(c, 0xa49u);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 000a4b  setne cl
    X86_AT(c, 0xa4bu);
    s8(c, 1, x86_cc(c, 5) ? 1u : 0u);
    // 000a4e  shl cl, 3
    X86_AT(c, 0xa4eu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 1, r); }
    // 000a51  shr ax, cl
    X86_AT(c, 0xa51u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 000a54  xor ah, ah
    X86_AT(c, 0xa54u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 000a56  shl ax, 4
    X86_AT(c, 0xa56u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 000a5a  shr al, 4
    X86_AT(c, 0xa5au);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 000a5d  shl eax, 8
    X86_AT(c, 0xa5du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000a60  xchg al, ah
    X86_AT(c, 0xa60u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 000a62  rol eax, 0x10
    X86_AT(c, 0xa62u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a65  cmp bx, ax
    X86_AT(c, 0xa65u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a68  jb 0x7d7
    X86_AT(c, 0xa68u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 10);
    // 000a6e  rol eax, 0x10
    X86_AT(c, 0xa6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a71  cmp dx, ax
    X86_AT(c, 0xa71u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a74  jb 0x7d7
    X86_AT(c, 0xa74u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 24);
    // 000a7a  shl edx, 0xc
    X86_AT(c, 0xa7au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[2] = r; }
    // 000a7d  shrd dx, bx, 4
    X86_AT(c, 0xa7du);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_double(c, false, v, (c.r[3] & 0xFFFFu), 0x4u, 2, w); if (w) s16(c, 2, r); }
    // 000a82  shr dx, 8
    X86_AT(c, 0xa82u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 2, r); }
    // 000a86  mov bx, 0xff00
    X86_AT(c, 0xa86u);
    s16(c, 3, 0xFF00u);
    // 000a8a  shl edx, cl
    X86_AT(c, 0xa8au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 000a8c  shr bx, cl
    X86_AT(c, 0xa8cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 3, r); }
    // 000a8f  test ch, ch
    X86_AT(c, 0xa8fu);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000a91  je 0xa97
    X86_AT(c, 0xa91u);
    if (x86_cc(c, 4)) { goto L_a97; }
    X86_TICK(c, 4);
    // 000a93  mov dh, dl
    X86_AT(c, 0xa93u);
    s8(c, 6, g8(c, 2));
    // 000a95  mov bh, bl
    X86_AT(c, 0xa95u);
    s8(c, 7, g8(c, 3));
L_a97:
    X86_TICK(c, 23);
    // 000a97  and word ptr gs:[ebp + 0xf6], bx
    X86_AT(c, 0xa97u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[3] & 0xFFFFu), 2)); }
    // 000a9f  or word ptr gs:[ebp + 0xf6], dx
    X86_AT(c, 0xa9fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 000aa7  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0xaa7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 000ab2  test ch, ch
    X86_AT(c, 0xab2u);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000ab4  jne 0xac2
    X86_AT(c, 0xab4u);
    if (x86_cc(c, 5)) { goto L_ac2; }
    X86_TICK(c, 13);
    // 000ab6  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xab6u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ac2:
    X86_TICK(c, 9);
    // 000ac2  sub eax, eax
    X86_AT(c, 0xac2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000ac4  call 0x968
    X86_AT(c, 0xac4u);
    push32(c, 0xac9u); f_00000968(c); X86_RET(c, 0xac9u);
    X86_TICK(c, 9);
    // 000ac9  mov eax, 1
    X86_AT(c, 0xac9u);
    c.r[0] = 0x1u;
    // 000ace  call 0x968
    X86_AT(c, 0xaceu);
    push32(c, 0xad3u); f_00000968(c); X86_RET(c, 0xad3u);
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa09u, "ran off the end of a function");
}
void f_00000a0f(X86Cpu& c) {
    goto L_a0f;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_a0f:
    X86_TICK(c, 7);
    // 000a0f  cmp bx, 0xf
    X86_AT(c, 0xa0fu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0xFu, 0, 2);
    // 000a13  ja 0x7d7
    X86_AT(c, 0xa13u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 15);
    // 000a19  xor ch, ch
    X86_AT(c, 0xa19u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v ^ g8(c, 5), 1)); }
    // 000a1b  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xa1bu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000a20  test eax, eax
    X86_AT(c, 0xa20u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 000a22  je 0xa2f
    X86_AT(c, 0xa22u);
    if (x86_cc(c, 4)) { goto L_a2f; }
    X86_TICK(c, 12);
    // 000a24  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0xa24u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 000a29  jae 0x7d7
    X86_AT(c, 0xa29u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
L_a2f:
    X86_TICK(c, 12);
    // 000a2f  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0xa2fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 000a34  jb 0xa38
    X86_AT(c, 0xa34u);
    if (x86_cc(c, 2)) { goto L_a38; }
    X86_TICK(c, 2);
    // 000a36  inc ch
    X86_AT(c, 0xa36u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_inc(c, v, 1)); }
L_a38:
    X86_TICK(c, 50);
    // 000a38  mov cl, al
    X86_AT(c, 0xa38u);
    s8(c, 1, g8(c, 0));
    // 000a3a  movzx eax, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0xa3au);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 000a40  movzx eax, word ptr cs:[eax*2 + 0xae4]
    X86_AT(c, 0xa40u);
    c.r[0] = rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0xAE4u)));
    // 000a49  test cl, cl
    X86_AT(c, 0xa49u);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 000a4b  setne cl
    X86_AT(c, 0xa4bu);
    s8(c, 1, x86_cc(c, 5) ? 1u : 0u);
    // 000a4e  shl cl, 3
    X86_AT(c, 0xa4eu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 1, r); }
    // 000a51  shr ax, cl
    X86_AT(c, 0xa51u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 000a54  xor ah, ah
    X86_AT(c, 0xa54u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 000a56  shl ax, 4
    X86_AT(c, 0xa56u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 000a5a  shr al, 4
    X86_AT(c, 0xa5au);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 000a5d  shl eax, 8
    X86_AT(c, 0xa5du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000a60  xchg al, ah
    X86_AT(c, 0xa60u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 000a62  rol eax, 0x10
    X86_AT(c, 0xa62u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a65  cmp bx, ax
    X86_AT(c, 0xa65u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a68  jb 0x7d7
    X86_AT(c, 0xa68u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 10);
    // 000a6e  rol eax, 0x10
    X86_AT(c, 0xa6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a71  cmp dx, ax
    X86_AT(c, 0xa71u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a74  jb 0x7d7
    X86_AT(c, 0xa74u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 24);
    // 000a7a  shl edx, 0xc
    X86_AT(c, 0xa7au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[2] = r; }
    // 000a7d  shrd dx, bx, 4
    X86_AT(c, 0xa7du);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_double(c, false, v, (c.r[3] & 0xFFFFu), 0x4u, 2, w); if (w) s16(c, 2, r); }
    // 000a82  shr dx, 8
    X86_AT(c, 0xa82u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 2, r); }
    // 000a86  mov bx, 0xff00
    X86_AT(c, 0xa86u);
    s16(c, 3, 0xFF00u);
    // 000a8a  shl edx, cl
    X86_AT(c, 0xa8au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 000a8c  shr bx, cl
    X86_AT(c, 0xa8cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 3, r); }
    // 000a8f  test ch, ch
    X86_AT(c, 0xa8fu);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000a91  je 0xa97
    X86_AT(c, 0xa91u);
    if (x86_cc(c, 4)) { goto L_a97; }
    X86_TICK(c, 4);
    // 000a93  mov dh, dl
    X86_AT(c, 0xa93u);
    s8(c, 6, g8(c, 2));
    // 000a95  mov bh, bl
    X86_AT(c, 0xa95u);
    s8(c, 7, g8(c, 3));
L_a97:
    X86_TICK(c, 23);
    // 000a97  and word ptr gs:[ebp + 0xf6], bx
    X86_AT(c, 0xa97u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[3] & 0xFFFFu), 2)); }
    // 000a9f  or word ptr gs:[ebp + 0xf6], dx
    X86_AT(c, 0xa9fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 000aa7  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0xaa7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 000ab2  test ch, ch
    X86_AT(c, 0xab2u);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000ab4  jne 0xac2
    X86_AT(c, 0xab4u);
    if (x86_cc(c, 5)) { goto L_ac2; }
    X86_TICK(c, 13);
    // 000ab6  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xab6u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ac2:
    X86_TICK(c, 9);
    // 000ac2  sub eax, eax
    X86_AT(c, 0xac2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000ac4  call 0x968
    X86_AT(c, 0xac4u);
    push32(c, 0xac9u); f_00000968(c); X86_RET(c, 0xac9u);
    X86_TICK(c, 9);
    // 000ac9  mov eax, 1
    X86_AT(c, 0xac9u);
    c.r[0] = 0x1u;
    // 000ace  call 0x968
    X86_AT(c, 0xaceu);
    push32(c, 0xad3u); f_00000968(c); X86_RET(c, 0xad3u);
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa0fu, "ran off the end of a function");
}
void f_00000a13(X86Cpu& c) {
    goto L_a13;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_a13:
    X86_TICK(c, 5);
    // 000a13  ja 0x7d7
    X86_AT(c, 0xa13u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 15);
    // 000a19  xor ch, ch
    X86_AT(c, 0xa19u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v ^ g8(c, 5), 1)); }
    // 000a1b  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xa1bu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000a20  test eax, eax
    X86_AT(c, 0xa20u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 000a22  je 0xa2f
    X86_AT(c, 0xa22u);
    if (x86_cc(c, 4)) { goto L_a2f; }
    X86_TICK(c, 12);
    // 000a24  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0xa24u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 000a29  jae 0x7d7
    X86_AT(c, 0xa29u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
L_a2f:
    X86_TICK(c, 12);
    // 000a2f  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0xa2fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 000a34  jb 0xa38
    X86_AT(c, 0xa34u);
    if (x86_cc(c, 2)) { goto L_a38; }
    X86_TICK(c, 2);
    // 000a36  inc ch
    X86_AT(c, 0xa36u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_inc(c, v, 1)); }
L_a38:
    X86_TICK(c, 50);
    // 000a38  mov cl, al
    X86_AT(c, 0xa38u);
    s8(c, 1, g8(c, 0));
    // 000a3a  movzx eax, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0xa3au);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 000a40  movzx eax, word ptr cs:[eax*2 + 0xae4]
    X86_AT(c, 0xa40u);
    c.r[0] = rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0xAE4u)));
    // 000a49  test cl, cl
    X86_AT(c, 0xa49u);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 000a4b  setne cl
    X86_AT(c, 0xa4bu);
    s8(c, 1, x86_cc(c, 5) ? 1u : 0u);
    // 000a4e  shl cl, 3
    X86_AT(c, 0xa4eu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 1, r); }
    // 000a51  shr ax, cl
    X86_AT(c, 0xa51u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 000a54  xor ah, ah
    X86_AT(c, 0xa54u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 000a56  shl ax, 4
    X86_AT(c, 0xa56u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 000a5a  shr al, 4
    X86_AT(c, 0xa5au);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 000a5d  shl eax, 8
    X86_AT(c, 0xa5du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000a60  xchg al, ah
    X86_AT(c, 0xa60u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 000a62  rol eax, 0x10
    X86_AT(c, 0xa62u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a65  cmp bx, ax
    X86_AT(c, 0xa65u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a68  jb 0x7d7
    X86_AT(c, 0xa68u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 10);
    // 000a6e  rol eax, 0x10
    X86_AT(c, 0xa6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a71  cmp dx, ax
    X86_AT(c, 0xa71u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a74  jb 0x7d7
    X86_AT(c, 0xa74u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 24);
    // 000a7a  shl edx, 0xc
    X86_AT(c, 0xa7au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[2] = r; }
    // 000a7d  shrd dx, bx, 4
    X86_AT(c, 0xa7du);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_double(c, false, v, (c.r[3] & 0xFFFFu), 0x4u, 2, w); if (w) s16(c, 2, r); }
    // 000a82  shr dx, 8
    X86_AT(c, 0xa82u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 2, r); }
    // 000a86  mov bx, 0xff00
    X86_AT(c, 0xa86u);
    s16(c, 3, 0xFF00u);
    // 000a8a  shl edx, cl
    X86_AT(c, 0xa8au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 000a8c  shr bx, cl
    X86_AT(c, 0xa8cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 3, r); }
    // 000a8f  test ch, ch
    X86_AT(c, 0xa8fu);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000a91  je 0xa97
    X86_AT(c, 0xa91u);
    if (x86_cc(c, 4)) { goto L_a97; }
    X86_TICK(c, 4);
    // 000a93  mov dh, dl
    X86_AT(c, 0xa93u);
    s8(c, 6, g8(c, 2));
    // 000a95  mov bh, bl
    X86_AT(c, 0xa95u);
    s8(c, 7, g8(c, 3));
L_a97:
    X86_TICK(c, 23);
    // 000a97  and word ptr gs:[ebp + 0xf6], bx
    X86_AT(c, 0xa97u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[3] & 0xFFFFu), 2)); }
    // 000a9f  or word ptr gs:[ebp + 0xf6], dx
    X86_AT(c, 0xa9fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 000aa7  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0xaa7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 000ab2  test ch, ch
    X86_AT(c, 0xab2u);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000ab4  jne 0xac2
    X86_AT(c, 0xab4u);
    if (x86_cc(c, 5)) { goto L_ac2; }
    X86_TICK(c, 13);
    // 000ab6  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xab6u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ac2:
    X86_TICK(c, 9);
    // 000ac2  sub eax, eax
    X86_AT(c, 0xac2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000ac4  call 0x968
    X86_AT(c, 0xac4u);
    push32(c, 0xac9u); f_00000968(c); X86_RET(c, 0xac9u);
    X86_TICK(c, 9);
    // 000ac9  mov eax, 1
    X86_AT(c, 0xac9u);
    c.r[0] = 0x1u;
    // 000ace  call 0x968
    X86_AT(c, 0xaceu);
    push32(c, 0xad3u); f_00000968(c); X86_RET(c, 0xad3u);
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa13u, "ran off the end of a function");
}
void f_00000a19(X86Cpu& c) {
    goto L_a19;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_a19:
    X86_TICK(c, 15);
    // 000a19  xor ch, ch
    X86_AT(c, 0xa19u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v ^ g8(c, 5), 1)); }
    // 000a1b  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xa1bu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000a20  test eax, eax
    X86_AT(c, 0xa20u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 000a22  je 0xa2f
    X86_AT(c, 0xa22u);
    if (x86_cc(c, 4)) { goto L_a2f; }
    X86_TICK(c, 12);
    // 000a24  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0xa24u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 000a29  jae 0x7d7
    X86_AT(c, 0xa29u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
L_a2f:
    X86_TICK(c, 12);
    // 000a2f  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0xa2fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 000a34  jb 0xa38
    X86_AT(c, 0xa34u);
    if (x86_cc(c, 2)) { goto L_a38; }
    X86_TICK(c, 2);
    // 000a36  inc ch
    X86_AT(c, 0xa36u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_inc(c, v, 1)); }
L_a38:
    X86_TICK(c, 50);
    // 000a38  mov cl, al
    X86_AT(c, 0xa38u);
    s8(c, 1, g8(c, 0));
    // 000a3a  movzx eax, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0xa3au);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 000a40  movzx eax, word ptr cs:[eax*2 + 0xae4]
    X86_AT(c, 0xa40u);
    c.r[0] = rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0xAE4u)));
    // 000a49  test cl, cl
    X86_AT(c, 0xa49u);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 000a4b  setne cl
    X86_AT(c, 0xa4bu);
    s8(c, 1, x86_cc(c, 5) ? 1u : 0u);
    // 000a4e  shl cl, 3
    X86_AT(c, 0xa4eu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 1, r); }
    // 000a51  shr ax, cl
    X86_AT(c, 0xa51u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 000a54  xor ah, ah
    X86_AT(c, 0xa54u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 000a56  shl ax, 4
    X86_AT(c, 0xa56u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 000a5a  shr al, 4
    X86_AT(c, 0xa5au);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 000a5d  shl eax, 8
    X86_AT(c, 0xa5du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000a60  xchg al, ah
    X86_AT(c, 0xa60u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 000a62  rol eax, 0x10
    X86_AT(c, 0xa62u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a65  cmp bx, ax
    X86_AT(c, 0xa65u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a68  jb 0x7d7
    X86_AT(c, 0xa68u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 10);
    // 000a6e  rol eax, 0x10
    X86_AT(c, 0xa6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a71  cmp dx, ax
    X86_AT(c, 0xa71u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a74  jb 0x7d7
    X86_AT(c, 0xa74u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 24);
    // 000a7a  shl edx, 0xc
    X86_AT(c, 0xa7au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[2] = r; }
    // 000a7d  shrd dx, bx, 4
    X86_AT(c, 0xa7du);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_double(c, false, v, (c.r[3] & 0xFFFFu), 0x4u, 2, w); if (w) s16(c, 2, r); }
    // 000a82  shr dx, 8
    X86_AT(c, 0xa82u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 2, r); }
    // 000a86  mov bx, 0xff00
    X86_AT(c, 0xa86u);
    s16(c, 3, 0xFF00u);
    // 000a8a  shl edx, cl
    X86_AT(c, 0xa8au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 000a8c  shr bx, cl
    X86_AT(c, 0xa8cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 3, r); }
    // 000a8f  test ch, ch
    X86_AT(c, 0xa8fu);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000a91  je 0xa97
    X86_AT(c, 0xa91u);
    if (x86_cc(c, 4)) { goto L_a97; }
    X86_TICK(c, 4);
    // 000a93  mov dh, dl
    X86_AT(c, 0xa93u);
    s8(c, 6, g8(c, 2));
    // 000a95  mov bh, bl
    X86_AT(c, 0xa95u);
    s8(c, 7, g8(c, 3));
L_a97:
    X86_TICK(c, 23);
    // 000a97  and word ptr gs:[ebp + 0xf6], bx
    X86_AT(c, 0xa97u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[3] & 0xFFFFu), 2)); }
    // 000a9f  or word ptr gs:[ebp + 0xf6], dx
    X86_AT(c, 0xa9fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 000aa7  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0xaa7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 000ab2  test ch, ch
    X86_AT(c, 0xab2u);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000ab4  jne 0xac2
    X86_AT(c, 0xab4u);
    if (x86_cc(c, 5)) { goto L_ac2; }
    X86_TICK(c, 13);
    // 000ab6  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xab6u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ac2:
    X86_TICK(c, 9);
    // 000ac2  sub eax, eax
    X86_AT(c, 0xac2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000ac4  call 0x968
    X86_AT(c, 0xac4u);
    push32(c, 0xac9u); f_00000968(c); X86_RET(c, 0xac9u);
    X86_TICK(c, 9);
    // 000ac9  mov eax, 1
    X86_AT(c, 0xac9u);
    c.r[0] = 0x1u;
    // 000ace  call 0x968
    X86_AT(c, 0xaceu);
    push32(c, 0xad3u); f_00000968(c); X86_RET(c, 0xad3u);
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa19u, "ran off the end of a function");
}
void f_00000a1b(X86Cpu& c) {
    goto L_a1b;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_a1b:
    X86_TICK(c, 13);
    // 000a1b  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xa1bu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000a20  test eax, eax
    X86_AT(c, 0xa20u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 000a22  je 0xa2f
    X86_AT(c, 0xa22u);
    if (x86_cc(c, 4)) { goto L_a2f; }
    X86_TICK(c, 12);
    // 000a24  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0xa24u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 000a29  jae 0x7d7
    X86_AT(c, 0xa29u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
L_a2f:
    X86_TICK(c, 12);
    // 000a2f  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0xa2fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 000a34  jb 0xa38
    X86_AT(c, 0xa34u);
    if (x86_cc(c, 2)) { goto L_a38; }
    X86_TICK(c, 2);
    // 000a36  inc ch
    X86_AT(c, 0xa36u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_inc(c, v, 1)); }
L_a38:
    X86_TICK(c, 50);
    // 000a38  mov cl, al
    X86_AT(c, 0xa38u);
    s8(c, 1, g8(c, 0));
    // 000a3a  movzx eax, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0xa3au);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 000a40  movzx eax, word ptr cs:[eax*2 + 0xae4]
    X86_AT(c, 0xa40u);
    c.r[0] = rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0xAE4u)));
    // 000a49  test cl, cl
    X86_AT(c, 0xa49u);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 000a4b  setne cl
    X86_AT(c, 0xa4bu);
    s8(c, 1, x86_cc(c, 5) ? 1u : 0u);
    // 000a4e  shl cl, 3
    X86_AT(c, 0xa4eu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 1, r); }
    // 000a51  shr ax, cl
    X86_AT(c, 0xa51u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 000a54  xor ah, ah
    X86_AT(c, 0xa54u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 000a56  shl ax, 4
    X86_AT(c, 0xa56u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 000a5a  shr al, 4
    X86_AT(c, 0xa5au);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 000a5d  shl eax, 8
    X86_AT(c, 0xa5du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000a60  xchg al, ah
    X86_AT(c, 0xa60u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 000a62  rol eax, 0x10
    X86_AT(c, 0xa62u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a65  cmp bx, ax
    X86_AT(c, 0xa65u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a68  jb 0x7d7
    X86_AT(c, 0xa68u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 10);
    // 000a6e  rol eax, 0x10
    X86_AT(c, 0xa6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a71  cmp dx, ax
    X86_AT(c, 0xa71u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a74  jb 0x7d7
    X86_AT(c, 0xa74u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 24);
    // 000a7a  shl edx, 0xc
    X86_AT(c, 0xa7au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[2] = r; }
    // 000a7d  shrd dx, bx, 4
    X86_AT(c, 0xa7du);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_double(c, false, v, (c.r[3] & 0xFFFFu), 0x4u, 2, w); if (w) s16(c, 2, r); }
    // 000a82  shr dx, 8
    X86_AT(c, 0xa82u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 2, r); }
    // 000a86  mov bx, 0xff00
    X86_AT(c, 0xa86u);
    s16(c, 3, 0xFF00u);
    // 000a8a  shl edx, cl
    X86_AT(c, 0xa8au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 000a8c  shr bx, cl
    X86_AT(c, 0xa8cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 3, r); }
    // 000a8f  test ch, ch
    X86_AT(c, 0xa8fu);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000a91  je 0xa97
    X86_AT(c, 0xa91u);
    if (x86_cc(c, 4)) { goto L_a97; }
    X86_TICK(c, 4);
    // 000a93  mov dh, dl
    X86_AT(c, 0xa93u);
    s8(c, 6, g8(c, 2));
    // 000a95  mov bh, bl
    X86_AT(c, 0xa95u);
    s8(c, 7, g8(c, 3));
L_a97:
    X86_TICK(c, 23);
    // 000a97  and word ptr gs:[ebp + 0xf6], bx
    X86_AT(c, 0xa97u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[3] & 0xFFFFu), 2)); }
    // 000a9f  or word ptr gs:[ebp + 0xf6], dx
    X86_AT(c, 0xa9fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 000aa7  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0xaa7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 000ab2  test ch, ch
    X86_AT(c, 0xab2u);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000ab4  jne 0xac2
    X86_AT(c, 0xab4u);
    if (x86_cc(c, 5)) { goto L_ac2; }
    X86_TICK(c, 13);
    // 000ab6  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xab6u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ac2:
    X86_TICK(c, 9);
    // 000ac2  sub eax, eax
    X86_AT(c, 0xac2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000ac4  call 0x968
    X86_AT(c, 0xac4u);
    push32(c, 0xac9u); f_00000968(c); X86_RET(c, 0xac9u);
    X86_TICK(c, 9);
    // 000ac9  mov eax, 1
    X86_AT(c, 0xac9u);
    c.r[0] = 0x1u;
    // 000ace  call 0x968
    X86_AT(c, 0xaceu);
    push32(c, 0xad3u); f_00000968(c); X86_RET(c, 0xad3u);
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa1bu, "ran off the end of a function");
}
void f_00000a20(X86Cpu& c) {
    goto L_a20;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_a20:
    X86_TICK(c, 7);
    // 000a20  test eax, eax
    X86_AT(c, 0xa20u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 000a22  je 0xa2f
    X86_AT(c, 0xa22u);
    if (x86_cc(c, 4)) { goto L_a2f; }
    X86_TICK(c, 12);
    // 000a24  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0xa24u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 000a29  jae 0x7d7
    X86_AT(c, 0xa29u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
L_a2f:
    X86_TICK(c, 12);
    // 000a2f  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0xa2fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 000a34  jb 0xa38
    X86_AT(c, 0xa34u);
    if (x86_cc(c, 2)) { goto L_a38; }
    X86_TICK(c, 2);
    // 000a36  inc ch
    X86_AT(c, 0xa36u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_inc(c, v, 1)); }
L_a38:
    X86_TICK(c, 50);
    // 000a38  mov cl, al
    X86_AT(c, 0xa38u);
    s8(c, 1, g8(c, 0));
    // 000a3a  movzx eax, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0xa3au);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 000a40  movzx eax, word ptr cs:[eax*2 + 0xae4]
    X86_AT(c, 0xa40u);
    c.r[0] = rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0xAE4u)));
    // 000a49  test cl, cl
    X86_AT(c, 0xa49u);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 000a4b  setne cl
    X86_AT(c, 0xa4bu);
    s8(c, 1, x86_cc(c, 5) ? 1u : 0u);
    // 000a4e  shl cl, 3
    X86_AT(c, 0xa4eu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 1, r); }
    // 000a51  shr ax, cl
    X86_AT(c, 0xa51u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 000a54  xor ah, ah
    X86_AT(c, 0xa54u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 000a56  shl ax, 4
    X86_AT(c, 0xa56u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 000a5a  shr al, 4
    X86_AT(c, 0xa5au);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 000a5d  shl eax, 8
    X86_AT(c, 0xa5du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000a60  xchg al, ah
    X86_AT(c, 0xa60u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 000a62  rol eax, 0x10
    X86_AT(c, 0xa62u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a65  cmp bx, ax
    X86_AT(c, 0xa65u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a68  jb 0x7d7
    X86_AT(c, 0xa68u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 10);
    // 000a6e  rol eax, 0x10
    X86_AT(c, 0xa6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a71  cmp dx, ax
    X86_AT(c, 0xa71u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a74  jb 0x7d7
    X86_AT(c, 0xa74u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 24);
    // 000a7a  shl edx, 0xc
    X86_AT(c, 0xa7au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[2] = r; }
    // 000a7d  shrd dx, bx, 4
    X86_AT(c, 0xa7du);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_double(c, false, v, (c.r[3] & 0xFFFFu), 0x4u, 2, w); if (w) s16(c, 2, r); }
    // 000a82  shr dx, 8
    X86_AT(c, 0xa82u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 2, r); }
    // 000a86  mov bx, 0xff00
    X86_AT(c, 0xa86u);
    s16(c, 3, 0xFF00u);
    // 000a8a  shl edx, cl
    X86_AT(c, 0xa8au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 000a8c  shr bx, cl
    X86_AT(c, 0xa8cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 3, r); }
    // 000a8f  test ch, ch
    X86_AT(c, 0xa8fu);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000a91  je 0xa97
    X86_AT(c, 0xa91u);
    if (x86_cc(c, 4)) { goto L_a97; }
    X86_TICK(c, 4);
    // 000a93  mov dh, dl
    X86_AT(c, 0xa93u);
    s8(c, 6, g8(c, 2));
    // 000a95  mov bh, bl
    X86_AT(c, 0xa95u);
    s8(c, 7, g8(c, 3));
L_a97:
    X86_TICK(c, 23);
    // 000a97  and word ptr gs:[ebp + 0xf6], bx
    X86_AT(c, 0xa97u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[3] & 0xFFFFu), 2)); }
    // 000a9f  or word ptr gs:[ebp + 0xf6], dx
    X86_AT(c, 0xa9fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 000aa7  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0xaa7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 000ab2  test ch, ch
    X86_AT(c, 0xab2u);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000ab4  jne 0xac2
    X86_AT(c, 0xab4u);
    if (x86_cc(c, 5)) { goto L_ac2; }
    X86_TICK(c, 13);
    // 000ab6  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xab6u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ac2:
    X86_TICK(c, 9);
    // 000ac2  sub eax, eax
    X86_AT(c, 0xac2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000ac4  call 0x968
    X86_AT(c, 0xac4u);
    push32(c, 0xac9u); f_00000968(c); X86_RET(c, 0xac9u);
    X86_TICK(c, 9);
    // 000ac9  mov eax, 1
    X86_AT(c, 0xac9u);
    c.r[0] = 0x1u;
    // 000ace  call 0x968
    X86_AT(c, 0xaceu);
    push32(c, 0xad3u); f_00000968(c); X86_RET(c, 0xad3u);
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa20u, "ran off the end of a function");
}
void f_00000a22(X86Cpu& c) {
    goto L_a22;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_a22:
    X86_TICK(c, 5);
    // 000a22  je 0xa2f
    X86_AT(c, 0xa22u);
    if (x86_cc(c, 4)) { goto L_a2f; }
    X86_TICK(c, 12);
    // 000a24  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0xa24u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 000a29  jae 0x7d7
    X86_AT(c, 0xa29u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
L_a2f:
    X86_TICK(c, 12);
    // 000a2f  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0xa2fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 000a34  jb 0xa38
    X86_AT(c, 0xa34u);
    if (x86_cc(c, 2)) { goto L_a38; }
    X86_TICK(c, 2);
    // 000a36  inc ch
    X86_AT(c, 0xa36u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_inc(c, v, 1)); }
L_a38:
    X86_TICK(c, 50);
    // 000a38  mov cl, al
    X86_AT(c, 0xa38u);
    s8(c, 1, g8(c, 0));
    // 000a3a  movzx eax, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0xa3au);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 000a40  movzx eax, word ptr cs:[eax*2 + 0xae4]
    X86_AT(c, 0xa40u);
    c.r[0] = rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0xAE4u)));
    // 000a49  test cl, cl
    X86_AT(c, 0xa49u);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 000a4b  setne cl
    X86_AT(c, 0xa4bu);
    s8(c, 1, x86_cc(c, 5) ? 1u : 0u);
    // 000a4e  shl cl, 3
    X86_AT(c, 0xa4eu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 1, r); }
    // 000a51  shr ax, cl
    X86_AT(c, 0xa51u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 000a54  xor ah, ah
    X86_AT(c, 0xa54u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 000a56  shl ax, 4
    X86_AT(c, 0xa56u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 000a5a  shr al, 4
    X86_AT(c, 0xa5au);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 000a5d  shl eax, 8
    X86_AT(c, 0xa5du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000a60  xchg al, ah
    X86_AT(c, 0xa60u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 000a62  rol eax, 0x10
    X86_AT(c, 0xa62u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a65  cmp bx, ax
    X86_AT(c, 0xa65u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a68  jb 0x7d7
    X86_AT(c, 0xa68u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 10);
    // 000a6e  rol eax, 0x10
    X86_AT(c, 0xa6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a71  cmp dx, ax
    X86_AT(c, 0xa71u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a74  jb 0x7d7
    X86_AT(c, 0xa74u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 24);
    // 000a7a  shl edx, 0xc
    X86_AT(c, 0xa7au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[2] = r; }
    // 000a7d  shrd dx, bx, 4
    X86_AT(c, 0xa7du);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_double(c, false, v, (c.r[3] & 0xFFFFu), 0x4u, 2, w); if (w) s16(c, 2, r); }
    // 000a82  shr dx, 8
    X86_AT(c, 0xa82u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 2, r); }
    // 000a86  mov bx, 0xff00
    X86_AT(c, 0xa86u);
    s16(c, 3, 0xFF00u);
    // 000a8a  shl edx, cl
    X86_AT(c, 0xa8au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 000a8c  shr bx, cl
    X86_AT(c, 0xa8cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 3, r); }
    // 000a8f  test ch, ch
    X86_AT(c, 0xa8fu);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000a91  je 0xa97
    X86_AT(c, 0xa91u);
    if (x86_cc(c, 4)) { goto L_a97; }
    X86_TICK(c, 4);
    // 000a93  mov dh, dl
    X86_AT(c, 0xa93u);
    s8(c, 6, g8(c, 2));
    // 000a95  mov bh, bl
    X86_AT(c, 0xa95u);
    s8(c, 7, g8(c, 3));
L_a97:
    X86_TICK(c, 23);
    // 000a97  and word ptr gs:[ebp + 0xf6], bx
    X86_AT(c, 0xa97u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[3] & 0xFFFFu), 2)); }
    // 000a9f  or word ptr gs:[ebp + 0xf6], dx
    X86_AT(c, 0xa9fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 000aa7  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0xaa7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 000ab2  test ch, ch
    X86_AT(c, 0xab2u);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000ab4  jne 0xac2
    X86_AT(c, 0xab4u);
    if (x86_cc(c, 5)) { goto L_ac2; }
    X86_TICK(c, 13);
    // 000ab6  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xab6u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ac2:
    X86_TICK(c, 9);
    // 000ac2  sub eax, eax
    X86_AT(c, 0xac2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000ac4  call 0x968
    X86_AT(c, 0xac4u);
    push32(c, 0xac9u); f_00000968(c); X86_RET(c, 0xac9u);
    X86_TICK(c, 9);
    // 000ac9  mov eax, 1
    X86_AT(c, 0xac9u);
    c.r[0] = 0x1u;
    // 000ace  call 0x968
    X86_AT(c, 0xaceu);
    push32(c, 0xad3u); f_00000968(c); X86_RET(c, 0xad3u);
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa22u, "ran off the end of a function");
}
void f_00000a24(X86Cpu& c) {
    goto L_a24;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_a24:
    X86_TICK(c, 12);
    // 000a24  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0xa24u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 000a29  jae 0x7d7
    X86_AT(c, 0xa29u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 12);
    // 000a2f  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0xa2fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 000a34  jb 0xa38
    X86_AT(c, 0xa34u);
    if (x86_cc(c, 2)) { goto L_a38; }
    X86_TICK(c, 2);
    // 000a36  inc ch
    X86_AT(c, 0xa36u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_inc(c, v, 1)); }
L_a38:
    X86_TICK(c, 50);
    // 000a38  mov cl, al
    X86_AT(c, 0xa38u);
    s8(c, 1, g8(c, 0));
    // 000a3a  movzx eax, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0xa3au);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 000a40  movzx eax, word ptr cs:[eax*2 + 0xae4]
    X86_AT(c, 0xa40u);
    c.r[0] = rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0xAE4u)));
    // 000a49  test cl, cl
    X86_AT(c, 0xa49u);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 000a4b  setne cl
    X86_AT(c, 0xa4bu);
    s8(c, 1, x86_cc(c, 5) ? 1u : 0u);
    // 000a4e  shl cl, 3
    X86_AT(c, 0xa4eu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 1, r); }
    // 000a51  shr ax, cl
    X86_AT(c, 0xa51u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 000a54  xor ah, ah
    X86_AT(c, 0xa54u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 000a56  shl ax, 4
    X86_AT(c, 0xa56u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 000a5a  shr al, 4
    X86_AT(c, 0xa5au);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 000a5d  shl eax, 8
    X86_AT(c, 0xa5du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000a60  xchg al, ah
    X86_AT(c, 0xa60u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 000a62  rol eax, 0x10
    X86_AT(c, 0xa62u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a65  cmp bx, ax
    X86_AT(c, 0xa65u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a68  jb 0x7d7
    X86_AT(c, 0xa68u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 10);
    // 000a6e  rol eax, 0x10
    X86_AT(c, 0xa6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a71  cmp dx, ax
    X86_AT(c, 0xa71u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a74  jb 0x7d7
    X86_AT(c, 0xa74u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 24);
    // 000a7a  shl edx, 0xc
    X86_AT(c, 0xa7au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[2] = r; }
    // 000a7d  shrd dx, bx, 4
    X86_AT(c, 0xa7du);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_double(c, false, v, (c.r[3] & 0xFFFFu), 0x4u, 2, w); if (w) s16(c, 2, r); }
    // 000a82  shr dx, 8
    X86_AT(c, 0xa82u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 2, r); }
    // 000a86  mov bx, 0xff00
    X86_AT(c, 0xa86u);
    s16(c, 3, 0xFF00u);
    // 000a8a  shl edx, cl
    X86_AT(c, 0xa8au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 000a8c  shr bx, cl
    X86_AT(c, 0xa8cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 3, r); }
    // 000a8f  test ch, ch
    X86_AT(c, 0xa8fu);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000a91  je 0xa97
    X86_AT(c, 0xa91u);
    if (x86_cc(c, 4)) { goto L_a97; }
    X86_TICK(c, 4);
    // 000a93  mov dh, dl
    X86_AT(c, 0xa93u);
    s8(c, 6, g8(c, 2));
    // 000a95  mov bh, bl
    X86_AT(c, 0xa95u);
    s8(c, 7, g8(c, 3));
L_a97:
    X86_TICK(c, 23);
    // 000a97  and word ptr gs:[ebp + 0xf6], bx
    X86_AT(c, 0xa97u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[3] & 0xFFFFu), 2)); }
    // 000a9f  or word ptr gs:[ebp + 0xf6], dx
    X86_AT(c, 0xa9fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 000aa7  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0xaa7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 000ab2  test ch, ch
    X86_AT(c, 0xab2u);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000ab4  jne 0xac2
    X86_AT(c, 0xab4u);
    if (x86_cc(c, 5)) { goto L_ac2; }
    X86_TICK(c, 13);
    // 000ab6  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xab6u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ac2:
    X86_TICK(c, 9);
    // 000ac2  sub eax, eax
    X86_AT(c, 0xac2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000ac4  call 0x968
    X86_AT(c, 0xac4u);
    push32(c, 0xac9u); f_00000968(c); X86_RET(c, 0xac9u);
    X86_TICK(c, 9);
    // 000ac9  mov eax, 1
    X86_AT(c, 0xac9u);
    c.r[0] = 0x1u;
    // 000ace  call 0x968
    X86_AT(c, 0xaceu);
    push32(c, 0xad3u); f_00000968(c); X86_RET(c, 0xad3u);
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa24u, "ran off the end of a function");
}
void f_00000a29(X86Cpu& c) {
    goto L_a29;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_a29:
    X86_TICK(c, 5);
    // 000a29  jae 0x7d7
    X86_AT(c, 0xa29u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 12);
    // 000a2f  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0xa2fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 000a34  jb 0xa38
    X86_AT(c, 0xa34u);
    if (x86_cc(c, 2)) { goto L_a38; }
    X86_TICK(c, 2);
    // 000a36  inc ch
    X86_AT(c, 0xa36u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_inc(c, v, 1)); }
L_a38:
    X86_TICK(c, 50);
    // 000a38  mov cl, al
    X86_AT(c, 0xa38u);
    s8(c, 1, g8(c, 0));
    // 000a3a  movzx eax, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0xa3au);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 000a40  movzx eax, word ptr cs:[eax*2 + 0xae4]
    X86_AT(c, 0xa40u);
    c.r[0] = rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0xAE4u)));
    // 000a49  test cl, cl
    X86_AT(c, 0xa49u);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 000a4b  setne cl
    X86_AT(c, 0xa4bu);
    s8(c, 1, x86_cc(c, 5) ? 1u : 0u);
    // 000a4e  shl cl, 3
    X86_AT(c, 0xa4eu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 1, r); }
    // 000a51  shr ax, cl
    X86_AT(c, 0xa51u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 000a54  xor ah, ah
    X86_AT(c, 0xa54u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 000a56  shl ax, 4
    X86_AT(c, 0xa56u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 000a5a  shr al, 4
    X86_AT(c, 0xa5au);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 000a5d  shl eax, 8
    X86_AT(c, 0xa5du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000a60  xchg al, ah
    X86_AT(c, 0xa60u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 000a62  rol eax, 0x10
    X86_AT(c, 0xa62u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a65  cmp bx, ax
    X86_AT(c, 0xa65u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a68  jb 0x7d7
    X86_AT(c, 0xa68u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 10);
    // 000a6e  rol eax, 0x10
    X86_AT(c, 0xa6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a71  cmp dx, ax
    X86_AT(c, 0xa71u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a74  jb 0x7d7
    X86_AT(c, 0xa74u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 24);
    // 000a7a  shl edx, 0xc
    X86_AT(c, 0xa7au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[2] = r; }
    // 000a7d  shrd dx, bx, 4
    X86_AT(c, 0xa7du);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_double(c, false, v, (c.r[3] & 0xFFFFu), 0x4u, 2, w); if (w) s16(c, 2, r); }
    // 000a82  shr dx, 8
    X86_AT(c, 0xa82u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 2, r); }
    // 000a86  mov bx, 0xff00
    X86_AT(c, 0xa86u);
    s16(c, 3, 0xFF00u);
    // 000a8a  shl edx, cl
    X86_AT(c, 0xa8au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 000a8c  shr bx, cl
    X86_AT(c, 0xa8cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 3, r); }
    // 000a8f  test ch, ch
    X86_AT(c, 0xa8fu);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000a91  je 0xa97
    X86_AT(c, 0xa91u);
    if (x86_cc(c, 4)) { goto L_a97; }
    X86_TICK(c, 4);
    // 000a93  mov dh, dl
    X86_AT(c, 0xa93u);
    s8(c, 6, g8(c, 2));
    // 000a95  mov bh, bl
    X86_AT(c, 0xa95u);
    s8(c, 7, g8(c, 3));
L_a97:
    X86_TICK(c, 23);
    // 000a97  and word ptr gs:[ebp + 0xf6], bx
    X86_AT(c, 0xa97u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[3] & 0xFFFFu), 2)); }
    // 000a9f  or word ptr gs:[ebp + 0xf6], dx
    X86_AT(c, 0xa9fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 000aa7  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0xaa7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 000ab2  test ch, ch
    X86_AT(c, 0xab2u);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000ab4  jne 0xac2
    X86_AT(c, 0xab4u);
    if (x86_cc(c, 5)) { goto L_ac2; }
    X86_TICK(c, 13);
    // 000ab6  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xab6u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ac2:
    X86_TICK(c, 9);
    // 000ac2  sub eax, eax
    X86_AT(c, 0xac2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000ac4  call 0x968
    X86_AT(c, 0xac4u);
    push32(c, 0xac9u); f_00000968(c); X86_RET(c, 0xac9u);
    X86_TICK(c, 9);
    // 000ac9  mov eax, 1
    X86_AT(c, 0xac9u);
    c.r[0] = 0x1u;
    // 000ace  call 0x968
    X86_AT(c, 0xaceu);
    push32(c, 0xad3u); f_00000968(c); X86_RET(c, 0xad3u);
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa29u, "ran off the end of a function");
}
void f_00000a2f(X86Cpu& c) {
    goto L_a2f;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_a2f:
    X86_TICK(c, 12);
    // 000a2f  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0xa2fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 000a34  jb 0xa38
    X86_AT(c, 0xa34u);
    if (x86_cc(c, 2)) { goto L_a38; }
    X86_TICK(c, 2);
    // 000a36  inc ch
    X86_AT(c, 0xa36u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_inc(c, v, 1)); }
L_a38:
    X86_TICK(c, 50);
    // 000a38  mov cl, al
    X86_AT(c, 0xa38u);
    s8(c, 1, g8(c, 0));
    // 000a3a  movzx eax, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0xa3au);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 000a40  movzx eax, word ptr cs:[eax*2 + 0xae4]
    X86_AT(c, 0xa40u);
    c.r[0] = rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0xAE4u)));
    // 000a49  test cl, cl
    X86_AT(c, 0xa49u);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 000a4b  setne cl
    X86_AT(c, 0xa4bu);
    s8(c, 1, x86_cc(c, 5) ? 1u : 0u);
    // 000a4e  shl cl, 3
    X86_AT(c, 0xa4eu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 1, r); }
    // 000a51  shr ax, cl
    X86_AT(c, 0xa51u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 000a54  xor ah, ah
    X86_AT(c, 0xa54u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 000a56  shl ax, 4
    X86_AT(c, 0xa56u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 000a5a  shr al, 4
    X86_AT(c, 0xa5au);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 000a5d  shl eax, 8
    X86_AT(c, 0xa5du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000a60  xchg al, ah
    X86_AT(c, 0xa60u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 000a62  rol eax, 0x10
    X86_AT(c, 0xa62u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a65  cmp bx, ax
    X86_AT(c, 0xa65u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a68  jb 0x7d7
    X86_AT(c, 0xa68u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 10);
    // 000a6e  rol eax, 0x10
    X86_AT(c, 0xa6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a71  cmp dx, ax
    X86_AT(c, 0xa71u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a74  jb 0x7d7
    X86_AT(c, 0xa74u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 24);
    // 000a7a  shl edx, 0xc
    X86_AT(c, 0xa7au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[2] = r; }
    // 000a7d  shrd dx, bx, 4
    X86_AT(c, 0xa7du);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_double(c, false, v, (c.r[3] & 0xFFFFu), 0x4u, 2, w); if (w) s16(c, 2, r); }
    // 000a82  shr dx, 8
    X86_AT(c, 0xa82u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 2, r); }
    // 000a86  mov bx, 0xff00
    X86_AT(c, 0xa86u);
    s16(c, 3, 0xFF00u);
    // 000a8a  shl edx, cl
    X86_AT(c, 0xa8au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 000a8c  shr bx, cl
    X86_AT(c, 0xa8cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 3, r); }
    // 000a8f  test ch, ch
    X86_AT(c, 0xa8fu);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000a91  je 0xa97
    X86_AT(c, 0xa91u);
    if (x86_cc(c, 4)) { goto L_a97; }
    X86_TICK(c, 4);
    // 000a93  mov dh, dl
    X86_AT(c, 0xa93u);
    s8(c, 6, g8(c, 2));
    // 000a95  mov bh, bl
    X86_AT(c, 0xa95u);
    s8(c, 7, g8(c, 3));
L_a97:
    X86_TICK(c, 23);
    // 000a97  and word ptr gs:[ebp + 0xf6], bx
    X86_AT(c, 0xa97u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[3] & 0xFFFFu), 2)); }
    // 000a9f  or word ptr gs:[ebp + 0xf6], dx
    X86_AT(c, 0xa9fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 000aa7  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0xaa7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 000ab2  test ch, ch
    X86_AT(c, 0xab2u);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000ab4  jne 0xac2
    X86_AT(c, 0xab4u);
    if (x86_cc(c, 5)) { goto L_ac2; }
    X86_TICK(c, 13);
    // 000ab6  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xab6u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ac2:
    X86_TICK(c, 9);
    // 000ac2  sub eax, eax
    X86_AT(c, 0xac2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000ac4  call 0x968
    X86_AT(c, 0xac4u);
    push32(c, 0xac9u); f_00000968(c); X86_RET(c, 0xac9u);
    X86_TICK(c, 9);
    // 000ac9  mov eax, 1
    X86_AT(c, 0xac9u);
    c.r[0] = 0x1u;
    // 000ace  call 0x968
    X86_AT(c, 0xaceu);
    push32(c, 0xad3u); f_00000968(c); X86_RET(c, 0xad3u);
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa2fu, "ran off the end of a function");
}
void f_00000a34(X86Cpu& c) {
    goto L_a34;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_a34:
    X86_TICK(c, 5);
    // 000a34  jb 0xa38
    X86_AT(c, 0xa34u);
    if (x86_cc(c, 2)) { goto L_a38; }
    X86_TICK(c, 2);
    // 000a36  inc ch
    X86_AT(c, 0xa36u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_inc(c, v, 1)); }
L_a38:
    X86_TICK(c, 50);
    // 000a38  mov cl, al
    X86_AT(c, 0xa38u);
    s8(c, 1, g8(c, 0));
    // 000a3a  movzx eax, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0xa3au);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 000a40  movzx eax, word ptr cs:[eax*2 + 0xae4]
    X86_AT(c, 0xa40u);
    c.r[0] = rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0xAE4u)));
    // 000a49  test cl, cl
    X86_AT(c, 0xa49u);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 000a4b  setne cl
    X86_AT(c, 0xa4bu);
    s8(c, 1, x86_cc(c, 5) ? 1u : 0u);
    // 000a4e  shl cl, 3
    X86_AT(c, 0xa4eu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 1, r); }
    // 000a51  shr ax, cl
    X86_AT(c, 0xa51u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 000a54  xor ah, ah
    X86_AT(c, 0xa54u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 000a56  shl ax, 4
    X86_AT(c, 0xa56u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 000a5a  shr al, 4
    X86_AT(c, 0xa5au);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 000a5d  shl eax, 8
    X86_AT(c, 0xa5du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000a60  xchg al, ah
    X86_AT(c, 0xa60u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 000a62  rol eax, 0x10
    X86_AT(c, 0xa62u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a65  cmp bx, ax
    X86_AT(c, 0xa65u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a68  jb 0x7d7
    X86_AT(c, 0xa68u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 10);
    // 000a6e  rol eax, 0x10
    X86_AT(c, 0xa6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a71  cmp dx, ax
    X86_AT(c, 0xa71u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a74  jb 0x7d7
    X86_AT(c, 0xa74u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 24);
    // 000a7a  shl edx, 0xc
    X86_AT(c, 0xa7au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[2] = r; }
    // 000a7d  shrd dx, bx, 4
    X86_AT(c, 0xa7du);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_double(c, false, v, (c.r[3] & 0xFFFFu), 0x4u, 2, w); if (w) s16(c, 2, r); }
    // 000a82  shr dx, 8
    X86_AT(c, 0xa82u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 2, r); }
    // 000a86  mov bx, 0xff00
    X86_AT(c, 0xa86u);
    s16(c, 3, 0xFF00u);
    // 000a8a  shl edx, cl
    X86_AT(c, 0xa8au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 000a8c  shr bx, cl
    X86_AT(c, 0xa8cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 3, r); }
    // 000a8f  test ch, ch
    X86_AT(c, 0xa8fu);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000a91  je 0xa97
    X86_AT(c, 0xa91u);
    if (x86_cc(c, 4)) { goto L_a97; }
    X86_TICK(c, 4);
    // 000a93  mov dh, dl
    X86_AT(c, 0xa93u);
    s8(c, 6, g8(c, 2));
    // 000a95  mov bh, bl
    X86_AT(c, 0xa95u);
    s8(c, 7, g8(c, 3));
L_a97:
    X86_TICK(c, 23);
    // 000a97  and word ptr gs:[ebp + 0xf6], bx
    X86_AT(c, 0xa97u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[3] & 0xFFFFu), 2)); }
    // 000a9f  or word ptr gs:[ebp + 0xf6], dx
    X86_AT(c, 0xa9fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 000aa7  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0xaa7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 000ab2  test ch, ch
    X86_AT(c, 0xab2u);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000ab4  jne 0xac2
    X86_AT(c, 0xab4u);
    if (x86_cc(c, 5)) { goto L_ac2; }
    X86_TICK(c, 13);
    // 000ab6  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xab6u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ac2:
    X86_TICK(c, 9);
    // 000ac2  sub eax, eax
    X86_AT(c, 0xac2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000ac4  call 0x968
    X86_AT(c, 0xac4u);
    push32(c, 0xac9u); f_00000968(c); X86_RET(c, 0xac9u);
    X86_TICK(c, 9);
    // 000ac9  mov eax, 1
    X86_AT(c, 0xac9u);
    c.r[0] = 0x1u;
    // 000ace  call 0x968
    X86_AT(c, 0xaceu);
    push32(c, 0xad3u); f_00000968(c); X86_RET(c, 0xad3u);
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa34u, "ran off the end of a function");
}
void f_00000a38(X86Cpu& c) {
    goto L_a38;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_a38:
    X86_TICK(c, 50);
    // 000a38  mov cl, al
    X86_AT(c, 0xa38u);
    s8(c, 1, g8(c, 0));
    // 000a3a  movzx eax, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0xa3au);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 000a40  movzx eax, word ptr cs:[eax*2 + 0xae4]
    X86_AT(c, 0xa40u);
    c.r[0] = rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0xAE4u)));
    // 000a49  test cl, cl
    X86_AT(c, 0xa49u);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 000a4b  setne cl
    X86_AT(c, 0xa4bu);
    s8(c, 1, x86_cc(c, 5) ? 1u : 0u);
    // 000a4e  shl cl, 3
    X86_AT(c, 0xa4eu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 1, r); }
    // 000a51  shr ax, cl
    X86_AT(c, 0xa51u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 000a54  xor ah, ah
    X86_AT(c, 0xa54u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 000a56  shl ax, 4
    X86_AT(c, 0xa56u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 000a5a  shr al, 4
    X86_AT(c, 0xa5au);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 000a5d  shl eax, 8
    X86_AT(c, 0xa5du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000a60  xchg al, ah
    X86_AT(c, 0xa60u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 000a62  rol eax, 0x10
    X86_AT(c, 0xa62u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a65  cmp bx, ax
    X86_AT(c, 0xa65u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a68  jb 0x7d7
    X86_AT(c, 0xa68u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 10);
    // 000a6e  rol eax, 0x10
    X86_AT(c, 0xa6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a71  cmp dx, ax
    X86_AT(c, 0xa71u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a74  jb 0x7d7
    X86_AT(c, 0xa74u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 24);
    // 000a7a  shl edx, 0xc
    X86_AT(c, 0xa7au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[2] = r; }
    // 000a7d  shrd dx, bx, 4
    X86_AT(c, 0xa7du);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_double(c, false, v, (c.r[3] & 0xFFFFu), 0x4u, 2, w); if (w) s16(c, 2, r); }
    // 000a82  shr dx, 8
    X86_AT(c, 0xa82u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 2, r); }
    // 000a86  mov bx, 0xff00
    X86_AT(c, 0xa86u);
    s16(c, 3, 0xFF00u);
    // 000a8a  shl edx, cl
    X86_AT(c, 0xa8au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 000a8c  shr bx, cl
    X86_AT(c, 0xa8cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 3, r); }
    // 000a8f  test ch, ch
    X86_AT(c, 0xa8fu);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000a91  je 0xa97
    X86_AT(c, 0xa91u);
    if (x86_cc(c, 4)) { goto L_a97; }
    X86_TICK(c, 4);
    // 000a93  mov dh, dl
    X86_AT(c, 0xa93u);
    s8(c, 6, g8(c, 2));
    // 000a95  mov bh, bl
    X86_AT(c, 0xa95u);
    s8(c, 7, g8(c, 3));
L_a97:
    X86_TICK(c, 23);
    // 000a97  and word ptr gs:[ebp + 0xf6], bx
    X86_AT(c, 0xa97u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[3] & 0xFFFFu), 2)); }
    // 000a9f  or word ptr gs:[ebp + 0xf6], dx
    X86_AT(c, 0xa9fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 000aa7  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0xaa7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 000ab2  test ch, ch
    X86_AT(c, 0xab2u);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000ab4  jne 0xac2
    X86_AT(c, 0xab4u);
    if (x86_cc(c, 5)) { goto L_ac2; }
    X86_TICK(c, 13);
    // 000ab6  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xab6u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ac2:
    X86_TICK(c, 9);
    // 000ac2  sub eax, eax
    X86_AT(c, 0xac2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000ac4  call 0x968
    X86_AT(c, 0xac4u);
    push32(c, 0xac9u); f_00000968(c); X86_RET(c, 0xac9u);
    X86_TICK(c, 9);
    // 000ac9  mov eax, 1
    X86_AT(c, 0xac9u);
    c.r[0] = 0x1u;
    // 000ace  call 0x968
    X86_AT(c, 0xaceu);
    push32(c, 0xad3u); f_00000968(c); X86_RET(c, 0xad3u);
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa38u, "ran off the end of a function");
}
void f_00000a3a(X86Cpu& c) {
    goto L_a3a;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_a3a:
    X86_TICK(c, 48);
    // 000a3a  movzx eax, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0xa3au);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 000a40  movzx eax, word ptr cs:[eax*2 + 0xae4]
    X86_AT(c, 0xa40u);
    c.r[0] = rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0xAE4u)));
    // 000a49  test cl, cl
    X86_AT(c, 0xa49u);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 000a4b  setne cl
    X86_AT(c, 0xa4bu);
    s8(c, 1, x86_cc(c, 5) ? 1u : 0u);
    // 000a4e  shl cl, 3
    X86_AT(c, 0xa4eu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 1, r); }
    // 000a51  shr ax, cl
    X86_AT(c, 0xa51u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 000a54  xor ah, ah
    X86_AT(c, 0xa54u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 000a56  shl ax, 4
    X86_AT(c, 0xa56u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 000a5a  shr al, 4
    X86_AT(c, 0xa5au);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 000a5d  shl eax, 8
    X86_AT(c, 0xa5du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000a60  xchg al, ah
    X86_AT(c, 0xa60u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 000a62  rol eax, 0x10
    X86_AT(c, 0xa62u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a65  cmp bx, ax
    X86_AT(c, 0xa65u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a68  jb 0x7d7
    X86_AT(c, 0xa68u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 10);
    // 000a6e  rol eax, 0x10
    X86_AT(c, 0xa6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a71  cmp dx, ax
    X86_AT(c, 0xa71u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a74  jb 0x7d7
    X86_AT(c, 0xa74u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 24);
    // 000a7a  shl edx, 0xc
    X86_AT(c, 0xa7au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[2] = r; }
    // 000a7d  shrd dx, bx, 4
    X86_AT(c, 0xa7du);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_double(c, false, v, (c.r[3] & 0xFFFFu), 0x4u, 2, w); if (w) s16(c, 2, r); }
    // 000a82  shr dx, 8
    X86_AT(c, 0xa82u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 2, r); }
    // 000a86  mov bx, 0xff00
    X86_AT(c, 0xa86u);
    s16(c, 3, 0xFF00u);
    // 000a8a  shl edx, cl
    X86_AT(c, 0xa8au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 000a8c  shr bx, cl
    X86_AT(c, 0xa8cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 3, r); }
    // 000a8f  test ch, ch
    X86_AT(c, 0xa8fu);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000a91  je 0xa97
    X86_AT(c, 0xa91u);
    if (x86_cc(c, 4)) { goto L_a97; }
    X86_TICK(c, 4);
    // 000a93  mov dh, dl
    X86_AT(c, 0xa93u);
    s8(c, 6, g8(c, 2));
    // 000a95  mov bh, bl
    X86_AT(c, 0xa95u);
    s8(c, 7, g8(c, 3));
L_a97:
    X86_TICK(c, 23);
    // 000a97  and word ptr gs:[ebp + 0xf6], bx
    X86_AT(c, 0xa97u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[3] & 0xFFFFu), 2)); }
    // 000a9f  or word ptr gs:[ebp + 0xf6], dx
    X86_AT(c, 0xa9fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 000aa7  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0xaa7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 000ab2  test ch, ch
    X86_AT(c, 0xab2u);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000ab4  jne 0xac2
    X86_AT(c, 0xab4u);
    if (x86_cc(c, 5)) { goto L_ac2; }
    X86_TICK(c, 13);
    // 000ab6  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xab6u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ac2:
    X86_TICK(c, 9);
    // 000ac2  sub eax, eax
    X86_AT(c, 0xac2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000ac4  call 0x968
    X86_AT(c, 0xac4u);
    push32(c, 0xac9u); f_00000968(c); X86_RET(c, 0xac9u);
    X86_TICK(c, 9);
    // 000ac9  mov eax, 1
    X86_AT(c, 0xac9u);
    c.r[0] = 0x1u;
    // 000ace  call 0x968
    X86_AT(c, 0xaceu);
    push32(c, 0xad3u); f_00000968(c); X86_RET(c, 0xad3u);
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa3au, "ran off the end of a function");
}
void f_00000a40(X86Cpu& c) {
    goto L_a40;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_a40:
    X86_TICK(c, 42);
    // 000a40  movzx eax, word ptr cs:[eax*2 + 0xae4]
    X86_AT(c, 0xa40u);
    c.r[0] = rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0xAE4u)));
    // 000a49  test cl, cl
    X86_AT(c, 0xa49u);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 000a4b  setne cl
    X86_AT(c, 0xa4bu);
    s8(c, 1, x86_cc(c, 5) ? 1u : 0u);
    // 000a4e  shl cl, 3
    X86_AT(c, 0xa4eu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 1, r); }
    // 000a51  shr ax, cl
    X86_AT(c, 0xa51u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 000a54  xor ah, ah
    X86_AT(c, 0xa54u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 000a56  shl ax, 4
    X86_AT(c, 0xa56u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 000a5a  shr al, 4
    X86_AT(c, 0xa5au);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 000a5d  shl eax, 8
    X86_AT(c, 0xa5du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000a60  xchg al, ah
    X86_AT(c, 0xa60u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 000a62  rol eax, 0x10
    X86_AT(c, 0xa62u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a65  cmp bx, ax
    X86_AT(c, 0xa65u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a68  jb 0x7d7
    X86_AT(c, 0xa68u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 10);
    // 000a6e  rol eax, 0x10
    X86_AT(c, 0xa6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a71  cmp dx, ax
    X86_AT(c, 0xa71u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a74  jb 0x7d7
    X86_AT(c, 0xa74u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 24);
    // 000a7a  shl edx, 0xc
    X86_AT(c, 0xa7au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[2] = r; }
    // 000a7d  shrd dx, bx, 4
    X86_AT(c, 0xa7du);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_double(c, false, v, (c.r[3] & 0xFFFFu), 0x4u, 2, w); if (w) s16(c, 2, r); }
    // 000a82  shr dx, 8
    X86_AT(c, 0xa82u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 2, r); }
    // 000a86  mov bx, 0xff00
    X86_AT(c, 0xa86u);
    s16(c, 3, 0xFF00u);
    // 000a8a  shl edx, cl
    X86_AT(c, 0xa8au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 000a8c  shr bx, cl
    X86_AT(c, 0xa8cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 3, r); }
    // 000a8f  test ch, ch
    X86_AT(c, 0xa8fu);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000a91  je 0xa97
    X86_AT(c, 0xa91u);
    if (x86_cc(c, 4)) { goto L_a97; }
    X86_TICK(c, 4);
    // 000a93  mov dh, dl
    X86_AT(c, 0xa93u);
    s8(c, 6, g8(c, 2));
    // 000a95  mov bh, bl
    X86_AT(c, 0xa95u);
    s8(c, 7, g8(c, 3));
L_a97:
    X86_TICK(c, 23);
    // 000a97  and word ptr gs:[ebp + 0xf6], bx
    X86_AT(c, 0xa97u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[3] & 0xFFFFu), 2)); }
    // 000a9f  or word ptr gs:[ebp + 0xf6], dx
    X86_AT(c, 0xa9fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 000aa7  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0xaa7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 000ab2  test ch, ch
    X86_AT(c, 0xab2u);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000ab4  jne 0xac2
    X86_AT(c, 0xab4u);
    if (x86_cc(c, 5)) { goto L_ac2; }
    X86_TICK(c, 13);
    // 000ab6  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xab6u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ac2:
    X86_TICK(c, 9);
    // 000ac2  sub eax, eax
    X86_AT(c, 0xac2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000ac4  call 0x968
    X86_AT(c, 0xac4u);
    push32(c, 0xac9u); f_00000968(c); X86_RET(c, 0xac9u);
    X86_TICK(c, 9);
    // 000ac9  mov eax, 1
    X86_AT(c, 0xac9u);
    c.r[0] = 0x1u;
    // 000ace  call 0x968
    X86_AT(c, 0xaceu);
    push32(c, 0xad3u); f_00000968(c); X86_RET(c, 0xad3u);
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa40u, "ran off the end of a function");
}
void f_00000a49(X86Cpu& c) {
    goto L_a49;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_a49:
    X86_TICK(c, 36);
    // 000a49  test cl, cl
    X86_AT(c, 0xa49u);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 000a4b  setne cl
    X86_AT(c, 0xa4bu);
    s8(c, 1, x86_cc(c, 5) ? 1u : 0u);
    // 000a4e  shl cl, 3
    X86_AT(c, 0xa4eu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 1, r); }
    // 000a51  shr ax, cl
    X86_AT(c, 0xa51u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 000a54  xor ah, ah
    X86_AT(c, 0xa54u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 000a56  shl ax, 4
    X86_AT(c, 0xa56u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 000a5a  shr al, 4
    X86_AT(c, 0xa5au);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 000a5d  shl eax, 8
    X86_AT(c, 0xa5du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000a60  xchg al, ah
    X86_AT(c, 0xa60u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 000a62  rol eax, 0x10
    X86_AT(c, 0xa62u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a65  cmp bx, ax
    X86_AT(c, 0xa65u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a68  jb 0x7d7
    X86_AT(c, 0xa68u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 10);
    // 000a6e  rol eax, 0x10
    X86_AT(c, 0xa6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a71  cmp dx, ax
    X86_AT(c, 0xa71u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a74  jb 0x7d7
    X86_AT(c, 0xa74u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 24);
    // 000a7a  shl edx, 0xc
    X86_AT(c, 0xa7au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[2] = r; }
    // 000a7d  shrd dx, bx, 4
    X86_AT(c, 0xa7du);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_double(c, false, v, (c.r[3] & 0xFFFFu), 0x4u, 2, w); if (w) s16(c, 2, r); }
    // 000a82  shr dx, 8
    X86_AT(c, 0xa82u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 2, r); }
    // 000a86  mov bx, 0xff00
    X86_AT(c, 0xa86u);
    s16(c, 3, 0xFF00u);
    // 000a8a  shl edx, cl
    X86_AT(c, 0xa8au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 000a8c  shr bx, cl
    X86_AT(c, 0xa8cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 3, r); }
    // 000a8f  test ch, ch
    X86_AT(c, 0xa8fu);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000a91  je 0xa97
    X86_AT(c, 0xa91u);
    if (x86_cc(c, 4)) { goto L_a97; }
    X86_TICK(c, 4);
    // 000a93  mov dh, dl
    X86_AT(c, 0xa93u);
    s8(c, 6, g8(c, 2));
    // 000a95  mov bh, bl
    X86_AT(c, 0xa95u);
    s8(c, 7, g8(c, 3));
L_a97:
    X86_TICK(c, 23);
    // 000a97  and word ptr gs:[ebp + 0xf6], bx
    X86_AT(c, 0xa97u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[3] & 0xFFFFu), 2)); }
    // 000a9f  or word ptr gs:[ebp + 0xf6], dx
    X86_AT(c, 0xa9fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 000aa7  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0xaa7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 000ab2  test ch, ch
    X86_AT(c, 0xab2u);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000ab4  jne 0xac2
    X86_AT(c, 0xab4u);
    if (x86_cc(c, 5)) { goto L_ac2; }
    X86_TICK(c, 13);
    // 000ab6  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xab6u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ac2:
    X86_TICK(c, 9);
    // 000ac2  sub eax, eax
    X86_AT(c, 0xac2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000ac4  call 0x968
    X86_AT(c, 0xac4u);
    push32(c, 0xac9u); f_00000968(c); X86_RET(c, 0xac9u);
    X86_TICK(c, 9);
    // 000ac9  mov eax, 1
    X86_AT(c, 0xac9u);
    c.r[0] = 0x1u;
    // 000ace  call 0x968
    X86_AT(c, 0xaceu);
    push32(c, 0xad3u); f_00000968(c); X86_RET(c, 0xad3u);
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa49u, "ran off the end of a function");
}
}
