#include "p_game_funcs.h"
namespace p_game {
void f_000d6bf4(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0d6bf4  push ax
    X86_AT(c, 0xd6bf4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0d6bf6  mov ax, 0xffff
    X86_AT(c, 0xd6bf6u);
    s16(c, 0, 0xFFFFu);
    // 0d6bfa  call 0xd6931
    X86_AT(c, 0xd6bfau);
    push32(c, 0xd6bffu); x86_call_known(c, 0xd6931u, f_000d6931); X86_RET(c, 0xd6bffu);
    X86_TICK(c, 14);
    // 0d6bff  pop ax
    X86_AT(c, 0xd6bffu);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0d6c01  ret 
    X86_AT(c, 0xd6c01u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd6bf4u, "ran off the end of a function");
}
void f_000d6c02(X86Cpu& c) {
    X86_TICK(c, 31);
    // 0d6c02  mov ax, word ptr [0xb35c7]
    X86_AT(c, 0xd6c02u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xB35C7u))));
    // 0d6c08  add ax, word ptr [0xb35c5]
    X86_AT(c, 0xd6c08u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(0xB35C5u))), 0, 2)); }
    // 0d6c0f  mov cx, ax
    X86_AT(c, 0xd6c0fu);
    s16(c, 1, (c.r[0] & 0xFFFFu));
    // 0d6c12  and cx, 0xf
    X86_AT(c, 0xd6c12u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & 0xFu, 2)); }
    // 0d6c16  mov word ptr [0xb35c5], cx
    X86_AT(c, 0xd6c16u);
    wr16((c.sbase[3] + (uint32_t)(0xB35C5u)), (c.r[1] & 0xFFFFu));
    // 0d6c1d  shr ax, 4
    X86_AT(c, 0xd6c1du);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 0d6c21  sub byte ptr [0xb35c4], al
    X86_AT(c, 0xd6c21u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB35C4u)); uint32_t v = rd8(ea); wr8(ea, x86_sub(c, v, g8(c, 0), 0, 1)); }
    // 0d6c27  jns 0xd6c38
    X86_AT(c, 0xd6c27u);
    if (x86_cc(c, 9)) { goto L_d6c38; }
L_d6c29:
    X86_TICK(c, 18);
    // 0d6c29  inc byte ptr [0xb35c3]
    X86_AT(c, 0xd6c29u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB35C3u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 0d6c2f  add byte ptr [0xb35c4], 4
    X86_AT(c, 0xd6c2fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB35C4u)); uint32_t v = rd8(ea); wr8(ea, x86_add(c, v, 0x4u, 0, 1)); }
    // 0d6c36  jae 0xd6c29
    X86_AT(c, 0xd6c36u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xd6c29u); goto L_d6c29; }
L_d6c38:
    X86_TICK(c, 12);
    // 0d6c38  cmp byte ptr [0xb35b6], 0
    X86_AT(c, 0xd6c38u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB35B6u))), 0x0u, 0, 1);
    // 0d6c3f  je 0xd6c51
    X86_AT(c, 0xd6c3fu);
    if (x86_cc(c, 4)) { goto L_d6c51; }
    X86_TICK(c, 12);
    // 0d6c41  cmp byte ptr [0xb35b8], 0
    X86_AT(c, 0xd6c41u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB35B8u))), 0x0u, 0, 1);
    // 0d6c48  jne 0xd6c51
    X86_AT(c, 0xd6c48u);
    if (x86_cc(c, 5)) { goto L_d6c51; }
    X86_TICK(c, 7);
    // 0d6c4a  add word ptr [0xb35c9], ax
    X86_AT(c, 0xd6c4au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB35C9u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_d6c51:
    X86_TICK(c, 10);
    // 0d6c51  ret 
    X86_AT(c, 0xd6c51u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd6c02u, "ran off the end of a function");
}
void f_000d6c52(X86Cpu& c) {
    X86_TICK(c, 32);
    // 0d6c52  push ax
    X86_AT(c, 0xd6c52u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0d6c54  mov ebx, ecx
    X86_AT(c, 0xd6c54u);
    c.r[3] = c.r[1];
    // 0d6c56  shl ebx, 5
    X86_AT(c, 0xd6c56u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[3] = r; }
    // 0d6c59  lea ebx, [ebx + 0xb3925]
    X86_AT(c, 0xd6c59u);
    c.r[3] = (uint32_t)(c.r[3] + 0xB3925u);
    // 0d6c5f  mov dx, word ptr [ebx + 0x14]
    X86_AT(c, 0xd6c5fu);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x14u))));
    // 0d6c63  in al, dx
    X86_AT(c, 0xd6c63u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0d6c64  test al, 4
    X86_AT(c, 0xd6c64u);
    (void)x86_logic(c, g8(c, 0) & 0x4u, 1);
    // 0d6c66  je 0xd6c80
    X86_AT(c, 0xd6c66u);
    if (x86_cc(c, 4)) { goto L_d6c80; }
    X86_TICK(c, 6);
    // 0d6c68  mov byte ptr [ebx + 0x19], 0x10
    X86_AT(c, 0xd6c68u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), 0x10u);
    // 0d6c6c  mov dx, word ptr [ebx + 0x14]
    X86_AT(c, 0xd6c6cu);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x14u))));
L_d6c70:
    X86_TICK(c, 19);
    // 0d6c70  in al, dx
    X86_AT(c, 0xd6c70u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0d6c71  test al, 1
    X86_AT(c, 0xd6c71u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0d6c73  jne 0xd6c70
    X86_AT(c, 0xd6c73u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd6c70u); goto L_d6c70; }
    X86_TICK(c, 24);
    // 0d6c75  push dx
    X86_AT(c, 0xd6c75u);
    { uint32_t v = (c.r[2] & 0xFFFFu); push16(c, v); }
    // 0d6c77  mov dx, word ptr [ebx + 0x12]
    X86_AT(c, 0xd6c77u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x12u))));
    // 0d6c7b  mov al, 0x37
    X86_AT(c, 0xd6c7bu);
    s8(c, 0, 0x37u);
    // 0d6c7d  out dx, al
    X86_AT(c, 0xd6c7du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0d6c7e  pop dx
    X86_AT(c, 0xd6c7eu);
    { uint32_t v = pop16(c); s16(c, 2, v); }
L_d6c80:
    X86_TICK(c, 19);
    // 0d6c80  in al, dx
    X86_AT(c, 0xd6c80u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0d6c81  test al, 2
    X86_AT(c, 0xd6c81u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0d6c83  jne 0xd6c80
    X86_AT(c, 0xd6c83u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd6c80u); goto L_d6c80; }
    X86_TICK(c, 21);
    // 0d6c85  dec dx
    X86_AT(c, 0xd6c85u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0d6c87  in al, dx
    X86_AT(c, 0xd6c87u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0d6c88  cmp al, 0xf8
    X86_AT(c, 0xd6c88u);
    (void)x86_sub(c, g8(c, 0), 0xF8u, 0, 1);
    // 0d6c8a  jb 0xd6c90
    X86_AT(c, 0xd6c8au);
    if (x86_cc(c, 2)) { goto L_d6c90; }
    X86_TICK(c, 9);
    // 0d6c8c  mov bl, cl
    X86_AT(c, 0xd6c8cu);
    s8(c, 3, g8(c, 1));
    // 0d6c8e  jmp 0xd6caf
    X86_AT(c, 0xd6c8eu);
    goto L_d6caf;
L_d6c90:
    X86_TICK(c, 12);
    // 0d6c90  cmp word ptr [ebx + 0x10], 0x40
    X86_AT(c, 0xd6c90u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0x40u, 0, 2);
    // 0d6c95  jb 0xd6c9d
    X86_AT(c, 0xd6c95u);
    if (x86_cc(c, 2)) { goto L_d6c9d; }
    X86_TICK(c, 9);
    // 0d6c97  mov byte ptr [ebx + 0x19], 0x10
    X86_AT(c, 0xd6c97u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), 0x10u);
    // 0d6c9b  jmp 0xd6caf
    X86_AT(c, 0xd6c9bu);
    goto L_d6caf;
L_d6c9d:
    X86_TICK(c, 28);
    // 0d6c9d  mov edi, dword ptr [ebx + 8]
    X86_AT(c, 0xd6c9du);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0d6ca0  stosb byte ptr es:[edi], al
    X86_AT(c, 0xd6ca0u);
    x86_string(c, 2, 1, 0, 4, 3);
    // 0d6ca1  inc word ptr [ebx + 0x10]
    X86_AT(c, 0xd6ca1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0d6ca5  cmp edi, dword ptr [ebx + 4]
    X86_AT(c, 0xd6ca5u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 0d6ca8  jne 0xd6cac
    X86_AT(c, 0xd6ca8u);
    if (x86_cc(c, 5)) { goto L_d6cac; }
    X86_TICK(c, 4);
    // 0d6caa  mov edi, dword ptr [ebx]
    X86_AT(c, 0xd6caau);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
L_d6cac:
    X86_TICK(c, 2);
    // 0d6cac  mov dword ptr [ebx + 8], edi
    X86_AT(c, 0xd6cacu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)), c.r[7]);
L_d6caf:
    X86_TICK(c, 14);
    // 0d6caf  pop ax
    X86_AT(c, 0xd6cafu);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0d6cb1  ret 
    X86_AT(c, 0xd6cb1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd6c52u, "ran off the end of a function");
}
void f_000d6cb2(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0d6cb2  push ax
    X86_AT(c, 0xd6cb2u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0d6cb4  mov ebx, ecx
    X86_AT(c, 0xd6cb4u);
    c.r[3] = c.r[1];
    // 0d6cb6  shl ebx, 5
    X86_AT(c, 0xd6cb6u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[3] = r; }
    // 0d6cb9  lea ebx, [ebx + 0xb3825]
    X86_AT(c, 0xd6cb9u);
    c.r[3] = (uint32_t)(c.r[3] + 0xB3825u);
    // 0d6cbf  dec word ptr [ebx + 0x10]
    X86_AT(c, 0xd6cbfu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 0d6cc3  js 0xd6d04
    X86_AT(c, 0xd6cc3u);
    if (x86_cc(c, 8)) { goto L_d6d04; }
    X86_TICK(c, 4);
    // 0d6cc9  mov dx, word ptr [ebx + 0x14]
    X86_AT(c, 0xd6cc9u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x14u))));
L_d6ccd:
    X86_TICK(c, 37);
    // 0d6ccd  mov al, 1
    X86_AT(c, 0xd6ccdu);
    s8(c, 0, 0x1u);
    // 0d6ccf  out dx, al
    X86_AT(c, 0xd6ccfu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0d6cd0  nop 
    X86_AT(c, 0xd6cd0u);
    // 0d6cd1  nop 
    X86_AT(c, 0xd6cd1u);
    // 0d6cd2  in al, dx
    X86_AT(c, 0xd6cd2u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0d6cd3  test al, 1
    X86_AT(c, 0xd6cd3u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0d6cd5  jne 0xd6ccd
    X86_AT(c, 0xd6cd5u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd6ccdu); goto L_d6ccd; }
    X86_TICK(c, 35);
    // 0d6cd7  out dx, al
    X86_AT(c, 0xd6cd7u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0d6cd8  nop 
    X86_AT(c, 0xd6cd8u);
    // 0d6cd9  nop 
    X86_AT(c, 0xd6cd9u);
    // 0d6cda  in al, dx
    X86_AT(c, 0xd6cdau);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0d6cdb  test al, 1
    X86_AT(c, 0xd6cdbu);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0d6cdd  jne 0xd6ccd
    X86_AT(c, 0xd6cddu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd6ccdu); goto L_d6ccd; }
    X86_TICK(c, 60);
    // 0d6cdf  push dx
    X86_AT(c, 0xd6cdfu);
    { uint32_t v = (c.r[2] & 0xFFFFu); push16(c, v); }
    // 0d6ce1  mov esi, dword ptr [ebx + 0xc]
    X86_AT(c, 0xd6ce1u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)));
    // 0d6ce4  lodsb al, byte ptr [esi]
    X86_AT(c, 0xd6ce4u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 0d6ce5  mov dx, word ptr [ebx + 0x12]
    X86_AT(c, 0xd6ce5u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x12u))));
    // 0d6ce9  dec dx
    X86_AT(c, 0xd6ce9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0d6ceb  out dx, al
    X86_AT(c, 0xd6cebu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0d6cec  pop dx
    X86_AT(c, 0xd6cecu);
    { uint32_t v = pop16(c); s16(c, 2, v); }
    // 0d6cee  mov al, 1
    X86_AT(c, 0xd6ceeu);
    s8(c, 0, 0x1u);
    // 0d6cf0  out dx, al
    X86_AT(c, 0xd6cf0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0d6cf1  cmp esi, dword ptr [ebx + 4]
    X86_AT(c, 0xd6cf1u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 0d6cf4  jne 0xd6cfc
    X86_AT(c, 0xd6cf4u);
    if (x86_cc(c, 5)) { goto L_d6cfc; }
    X86_TICK(c, 4);
    // 0d6cfa  mov esi, dword ptr [ebx]
    X86_AT(c, 0xd6cfau);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
L_d6cfc:
    X86_TICK(c, 9);
    // 0d6cfc  mov dword ptr [ebx + 0xc], esi
    X86_AT(c, 0xd6cfcu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)), c.r[6]);
    // 0d6cff  jmp 0xd6d1d
    X86_AT(c, 0xd6cffu);
    goto L_d6d1d;
L_d6d04:
    X86_TICK(c, 34);
    // 0d6d04  inc word ptr [ebx + 0x10]
    X86_AT(c, 0xd6d04u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0d6d08  mov al, byte ptr [ebx + 0x1a]
    X86_AT(c, 0xd6d08u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Au))));
    // 0d6d0b  xor al, 0xff
    X86_AT(c, 0xd6d0bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0xFFu, 1)); }
    // 0d6d0d  and al, byte ptr [0xb37f5]
    X86_AT(c, 0xd6d0du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & rd8((c.sbase[3] + (uint32_t)(0xB37F5u))), 1)); }
    // 0d6d13  mov byte ptr [0xb37f5], al
    X86_AT(c, 0xd6d13u);
    wr8((c.sbase[3] + (uint32_t)(0xB37F5u)), g8(c, 0));
    // 0d6d18  mov dx, 0xe70
    X86_AT(c, 0xd6d18u);
    s16(c, 2, 0xE70u);
    // 0d6d1c  out dx, al
    X86_AT(c, 0xd6d1cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
L_d6d1d:
    X86_TICK(c, 14);
    // 0d6d1d  pop ax
    X86_AT(c, 0xd6d1du);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0d6d1f  ret 
    X86_AT(c, 0xd6d1fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd6cb2u, "ran off the end of a function");
}
void f_000d6d20(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0d6d20  cli 
    X86_AT(c, 0xd6d20u);
    c.fl &= ~X86_IF;
    // 0d6d21  cmp byte ptr [0xb3816], 0
    X86_AT(c, 0xd6d21u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB3816u))), 0x0u, 0, 1);
    // 0d6d28  jne 0xd6d80
    X86_AT(c, 0xd6d28u);
    if (x86_cc(c, 5)) { goto L_d6d80; }
    X86_TICK(c, 14);
    // 0d6d2a  mov byte ptr [0xb3816], 0xff
    X86_AT(c, 0xd6d2au);
    wr8((c.sbase[3] + (uint32_t)(0xB3816u)), 0xFFu);
    // 0d6d31  cmp byte ptr [0xb3817], 0
    X86_AT(c, 0xd6d31u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB3817u))), 0x0u, 0, 1);
    // 0d6d38  jne 0xd6d54
    X86_AT(c, 0xd6d38u);
    if (x86_cc(c, 5)) { goto L_d6d54; }
    X86_TICK(c, 10);
    // 0d6d3e  mov dword ptr [0xb3819], esp
    X86_AT(c, 0xd6d3eu);
    wr32((c.sbase[3] + (uint32_t)(0xB3819u)), c.r[4]);
    // 0d6d44  mov word ptr [0xb381d], ss
    X86_AT(c, 0xd6d44u);
    wr16((c.sbase[3] + (uint32_t)(0xB381Du)), (uint32_t)c.sreg[2]);
    // 0d6d4a  mov eax, ds
    X86_AT(c, 0xd6d4au);
    c.r[0] = (uint32_t)c.sreg[3];
    // 0d6d4c  mov ss, eax
    X86_AT(c, 0xd6d4cu);
    x86_load_seg(c, 2, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0d6d4e  lea esp, [0xb3f25]
    X86_AT(c, 0xd6d4eu);
    c.r[4] = (uint32_t)(0xB3F25u);
L_d6d54:
    X86_TICK(c, 15);
    // 0d6d54  inc byte ptr [0xb3817]
    X86_AT(c, 0xd6d54u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB3817u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 0d6d5a  sti 
    X86_AT(c, 0xd6d5au);
    c.fl |= X86_IF;
    // 0d6d5b  call 0xd59ee
    X86_AT(c, 0xd6d5bu);
    push32(c, 0xd6d60u); x86_call_known(c, 0xd59eeu, f_000d59ee); X86_RET(c, 0xd6d60u);
    X86_TICK(c, 13);
    // 0d6d60  cli 
    X86_AT(c, 0xd6d60u);
    c.fl &= ~X86_IF;
    // 0d6d61  dec byte ptr [0xb3817]
    X86_AT(c, 0xd6d61u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB3817u)); uint32_t v = rd8(ea); wr8(ea, x86_dec(c, v, 1)); }
    // 0d6d67  jne 0xd6d79
    X86_AT(c, 0xd6d67u);
    if (x86_cc(c, 5)) { goto L_d6d79; }
    X86_TICK(c, 8);
    // 0d6d6d  mov esp, dword ptr [0xb3819]
    X86_AT(c, 0xd6d6du);
    c.r[4] = rd32((c.sbase[3] + (uint32_t)(0xB3819u)));
    // 0d6d73  mov ss, word ptr [0xb381d]
    X86_AT(c, 0xd6d73u);
    x86_load_seg(c, 2, rd16((c.sbase[3] + (uint32_t)(0xB381Du))) & 0xFFFFu);
L_d6d79:
    X86_TICK(c, 2);
    // 0d6d79  mov byte ptr [0xb3816], 0
    X86_AT(c, 0xd6d79u);
    wr8((c.sbase[3] + (uint32_t)(0xB3816u)), 0x0u);
L_d6d80:
    X86_TICK(c, 10);
    // 0d6d80  ret 
    X86_AT(c, 0xd6d80u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd6d20u, "ran off the end of a function");
}
void f_000d6d90(X86Cpu& c) {
    X86_TICK(c, 70);
    // 0d6d90  push es
    X86_AT(c, 0xd6d90u);
    push32(c, c.sreg[0]);
    // 0d6d91  pushal 
    X86_AT(c, 0xd6d91u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0d6d92  push ds
    X86_AT(c, 0xd6d92u);
    push32(c, c.sreg[3]);
    // 0d6d93  pop es
    X86_AT(c, 0xd6d93u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0d6d94  cld 
    X86_AT(c, 0xd6d94u);
    c.fl &= ~X86_DF;
    // 0d6d95  xor eax, eax
    X86_AT(c, 0xd6d95u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0d6d97  mov byte ptr [0xb4130], al
    X86_AT(c, 0xd6d97u);
    wr8((c.sbase[3] + (uint32_t)(0xB4130u)), g8(c, 0));
    // 0d6d9c  mov byte ptr [0xb4131], al
    X86_AT(c, 0xd6d9cu);
    wr8((c.sbase[3] + (uint32_t)(0xB4131u)), g8(c, 0));
    // 0d6da1  mov byte ptr [0xb4132], al
    X86_AT(c, 0xd6da1u);
    wr8((c.sbase[3] + (uint32_t)(0xB4132u)), g8(c, 0));
    // 0d6da6  mov byte ptr [0xb4133], al
    X86_AT(c, 0xd6da6u);
    wr8((c.sbase[3] + (uint32_t)(0xB4133u)), g8(c, 0));
    // 0d6dab  mov byte ptr [0xb4134], al
    X86_AT(c, 0xd6dabu);
    wr8((c.sbase[3] + (uint32_t)(0xB4134u)), g8(c, 0));
    // 0d6db0  lea edi, [0xb4135]
    X86_AT(c, 0xd6db0u);
    c.r[7] = (uint32_t)(0xB4135u);
    // 0d6db6  mov ecx, 4
    X86_AT(c, 0xd6db6u);
    c.r[1] = 0x4u;
    // 0d6dbb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xd6dbbu);
    x86_string(c, 2, 4, 243, 4, 3);
    // 0d6dbd  not eax
    X86_AT(c, 0xd6dbdu);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 0d6dbf  lea edi, [0xb4145]
    X86_AT(c, 0xd6dbfu);
    c.r[7] = (uint32_t)(0xB4145u);
    // 0d6dc5  mov ecx, 4
    X86_AT(c, 0xd6dc5u);
    c.r[1] = 0x4u;
    // 0d6dca  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xd6dcau);
    x86_string(c, 2, 4, 243, 4, 3);
    // 0d6dcc  xor al, al
    X86_AT(c, 0xd6dccu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0d6dce  mov ecx, 0x80
    X86_AT(c, 0xd6dceu);
    c.r[1] = 0x80u;
    // 0d6dd3  lea edi, [0xb4155]
    X86_AT(c, 0xd6dd3u);
    c.r[7] = (uint32_t)(0xB4155u);
L_d6dd9:
    X86_TICK(c, 21);
    // 0d6dd9  mov byte ptr [edi], ah
    X86_AT(c, 0xd6dd9u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), g8(c, 4));
    // 0d6ddb  mov byte ptr [edi + 1], ah
    X86_AT(c, 0xd6ddbu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)), g8(c, 4));
    // 0d6dde  mov byte ptr [edi + 2], al
    X86_AT(c, 0xd6ddeu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), g8(c, 0));
    // 0d6de1  mov byte ptr [edi + 3], al
    X86_AT(c, 0xd6de1u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x3u)), g8(c, 0));
    // 0d6de4  add edi, 4
    X86_AT(c, 0xd6de4u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d6de7  loop 0xd6dd9
    X86_AT(c, 0xd6de7u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xd6dd9u); goto L_d6dd9; }
    X86_TICK(c, 6);
    // 0d6de9  mov ecx, 6
    X86_AT(c, 0xd6de9u);
    c.r[1] = 0x6u;
    // 0d6dee  xor dl, dl
    X86_AT(c, 0xd6deeu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v ^ g8(c, 2), 1)); }
    // 0d6df0  mov bl, 0
    X86_AT(c, 0xd6df0u);
    s8(c, 3, 0x0u);
L_d6df2:
    X86_TICK(c, 7);
    // 0d6df2  call 0xd6e12
    X86_AT(c, 0xd6df2u);
    push32(c, 0xd6df7u); x86_call_known(c, 0xd6e12u, f_000d6e12); X86_RET(c, 0xd6df7u);
    X86_TICK(c, 15);
    // 0d6df7  inc dl
    X86_AT(c, 0xd6df7u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 0d6df9  inc bl
    X86_AT(c, 0xd6df9u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_inc(c, v, 1)); }
    // 0d6dfb  loop 0xd6df2
    X86_AT(c, 0xd6dfbu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xd6df2u); goto L_d6df2; }
    X86_TICK(c, 4);
    // 0d6dfd  mov ecx, 8
    X86_AT(c, 0xd6dfdu);
    c.r[1] = 0x8u;
    // 0d6e02  mov bl, 0x40
    X86_AT(c, 0xd6e02u);
    s8(c, 3, 0x40u);
L_d6e04:
    X86_TICK(c, 7);
    // 0d6e04  call 0xd6e12
    X86_AT(c, 0xd6e04u);
    push32(c, 0xd6e09u); x86_call_known(c, 0xd6e12u, f_000d6e12); X86_RET(c, 0xd6e09u);
    X86_TICK(c, 15);
    // 0d6e09  inc dl
    X86_AT(c, 0xd6e09u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 0d6e0b  inc bl
    X86_AT(c, 0xd6e0bu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_inc(c, v, 1)); }
    // 0d6e0d  loop 0xd6e04
    X86_AT(c, 0xd6e0du);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xd6e04u); goto L_d6e04; }
    X86_TICK(c, 38);
    // 0d6e0f  popal 
    X86_AT(c, 0xd6e0fu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0d6e10  pop es
    X86_AT(c, 0xd6e10u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0d6e11  ret 
    X86_AT(c, 0xd6e11u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd6d90u, "ran off the end of a function");
}
void f_000d6e12(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0d6e12  pushal 
    X86_AT(c, 0xd6e12u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0d6e13  cmp dl, 0x10
    X86_AT(c, 0xd6e13u);
    (void)x86_sub(c, g8(c, 2), 0x10u, 0, 1);
    // 0d6e16  jae 0xd6eb0
    X86_AT(c, 0xd6e16u);
    if (x86_cc(c, 3)) { goto L_d6eb0; }
    X86_TICK(c, 7);
    // 0d6e1c  cmp bl, 0x80
    X86_AT(c, 0xd6e1cu);
    (void)x86_sub(c, g8(c, 3), 0x80u, 0, 1);
    // 0d6e1f  jae 0xd6eb0
    X86_AT(c, 0xd6e1fu);
    if (x86_cc(c, 3)) { goto L_d6eb0; }
    X86_TICK(c, 16);
    // 0d6e25  movzx ebx, bl
    X86_AT(c, 0xd6e25u);
    c.r[3] = g8(c, 3);
    // 0d6e28  lea edi, [ebx*4 + 0xb4155]
    X86_AT(c, 0xd6e28u);
    c.r[7] = (uint32_t)(c.r[3] * 4 + 0xB4155u);
    // 0d6e2f  mov al, byte ptr [edi]
    X86_AT(c, 0xd6e2fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0d6e31  cmp al, dl
    X86_AT(c, 0xd6e31u);
    (void)x86_sub(c, g8(c, 0), g8(c, 2), 0, 1);
    // 0d6e33  je 0xd6eac
    X86_AT(c, 0xd6e33u);
    if (x86_cc(c, 4)) { goto L_d6eac; }
    X86_TICK(c, 7);
    // 0d6e39  cmp al, 0xff
    X86_AT(c, 0xd6e39u);
    (void)x86_sub(c, g8(c, 0), 0xFFu, 0, 1);
    // 0d6e3b  je 0xd6e8d
    X86_AT(c, 0xd6e3bu);
    if (x86_cc(c, 4)) { goto L_d6e8d; }
    X86_TICK(c, 16);
    // 0d6e41  movzx eax, al
    X86_AT(c, 0xd6e41u);
    c.r[0] = g8(c, 0);
    // 0d6e44  lea esi, [eax + 0xb4145]
    X86_AT(c, 0xd6e44u);
    c.r[6] = (uint32_t)(c.r[0] + 0xB4145u);
    // 0d6e4a  mov al, byte ptr [esi]
    X86_AT(c, 0xd6e4au);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 0d6e4c  cmp al, bl
    X86_AT(c, 0xd6e4cu);
    (void)x86_sub(c, g8(c, 0), g8(c, 3), 0, 1);
    // 0d6e4e  je 0xd6e69
    X86_AT(c, 0xd6e4eu);
    if (x86_cc(c, 4)) { goto L_d6e69; }
L_d6e50:
    X86_TICK(c, 18);
    // 0d6e50  movzx eax, al
    X86_AT(c, 0xd6e50u);
    c.r[0] = g8(c, 0);
    // 0d6e53  lea esi, [eax*4 + 0xb4155]
    X86_AT(c, 0xd6e53u);
    c.r[6] = (uint32_t)(c.r[0] * 4 + 0xB4155u);
    // 0d6e5a  lea esi, [esi + 1]
    X86_AT(c, 0xd6e5au);
    c.r[6] = (uint32_t)(c.r[6] + 0x1u);
    // 0d6e5d  mov al, byte ptr [esi]
    X86_AT(c, 0xd6e5du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 0d6e5f  cmp al, bl
    X86_AT(c, 0xd6e5fu);
    (void)x86_sub(c, g8(c, 0), g8(c, 3), 0, 1);
    // 0d6e61  je 0xd6e69
    X86_AT(c, 0xd6e61u);
    if (x86_cc(c, 4)) { goto L_d6e69; }
    X86_TICK(c, 7);
    // 0d6e63  cmp al, 0xff
    X86_AT(c, 0xd6e63u);
    (void)x86_sub(c, g8(c, 0), 0xFFu, 0, 1);
    // 0d6e65  je 0xd6eb0
    X86_AT(c, 0xd6e65u);
    if (x86_cc(c, 4)) { goto L_d6eb0; }
    X86_TICK(c, 7);
    // 0d6e67  jmp 0xd6e50
    X86_AT(c, 0xd6e67u);
    X86_POLL(c, 0xd6e50u); goto L_d6e50;
L_d6e69:
    X86_TICK(c, 28);
    // 0d6e69  push edx
    X86_AT(c, 0xd6e69u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d6e6a  pushf 
    X86_AT(c, 0xd6e6au);
    push16(c, c.fl & 0xFFFFu);
    // 0d6e6c  cli 
    X86_AT(c, 0xd6e6cu);
    c.fl &= ~X86_IF;
    // 0d6e6d  mov dl, byte ptr [edi + 1]
    X86_AT(c, 0xd6e6du);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 0d6e70  mov byte ptr [esi], dl
    X86_AT(c, 0xd6e70u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6])), g8(c, 2));
    // 0d6e72  cmp byte ptr [edi + 2], 0
    X86_AT(c, 0xd6e72u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))), 0x0u, 0, 1);
    // 0d6e76  je 0xd6e7f
    X86_AT(c, 0xd6e76u);
    if (x86_cc(c, 4)) { goto L_d6e7f; }
    X86_TICK(c, 9);
    // 0d6e78  mov ah, 2
    X86_AT(c, 0xd6e78u);
    s8(c, 4, 0x2u);
    // 0d6e7a  call 0xd4fcc
    X86_AT(c, 0xd6e7au);
    push32(c, 0xd6e7fu); x86_call_known(c, 0xd4fccu, f_000d4fcc); X86_RET(c, 0xd6e7fu);
L_d6e7f:
    X86_TICK(c, 16);
    // 0d6e7f  mov byte ptr [edi], 0xff
    X86_AT(c, 0xd6e7fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0xFFu);
    // 0d6e82  mov byte ptr [edi + 1], 0xff
    X86_AT(c, 0xd6e82u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)), 0xFFu);
    // 0d6e86  mov byte ptr [edi + 2], 0
    X86_AT(c, 0xd6e86u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), 0x0u);
    // 0d6e8a  popf 
    X86_AT(c, 0xd6e8au);
    x86_popfd(c, 2);
    // 0d6e8c  pop edx
    X86_AT(c, 0xd6e8cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_d6e8d:
    X86_TICK(c, 33);
    // 0d6e8d  movzx edx, dl
    X86_AT(c, 0xd6e8du);
    c.r[2] = g8(c, 2);
    // 0d6e90  lea esi, [edx + 0xb4145]
    X86_AT(c, 0xd6e90u);
    c.r[6] = (uint32_t)(c.r[2] + 0xB4145u);
    // 0d6e96  pushf 
    X86_AT(c, 0xd6e96u);
    push16(c, c.fl & 0xFFFFu);
    // 0d6e98  cli 
    X86_AT(c, 0xd6e98u);
    c.fl &= ~X86_IF;
    // 0d6e99  mov al, byte ptr [esi]
    X86_AT(c, 0xd6e99u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 0d6e9b  mov byte ptr [esi], bl
    X86_AT(c, 0xd6e9bu);
    wr8((c.sbase[3] + (uint32_t)(c.r[6])), g8(c, 3));
    // 0d6e9d  mov byte ptr [edi], dl
    X86_AT(c, 0xd6e9du);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), g8(c, 2));
    // 0d6e9f  mov byte ptr [edi + 1], al
    X86_AT(c, 0xd6e9fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)), g8(c, 0));
    // 0d6ea2  mov byte ptr [edi + 2], 0
    X86_AT(c, 0xd6ea2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), 0x0u);
    // 0d6ea6  mov byte ptr [edi + 3], 0
    X86_AT(c, 0xd6ea6u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x3u)), 0x0u);
    // 0d6eaa  popf 
    X86_AT(c, 0xd6eaau);
    x86_popfd(c, 2);
L_d6eac:
    X86_TICK(c, 36);
    // 0d6eac  popal 
    X86_AT(c, 0xd6eacu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0d6ead  xor al, al
    X86_AT(c, 0xd6eadu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0d6eaf  ret 
    X86_AT(c, 0xd6eafu);
    c.eip = pop32(c); return;
L_d6eb0:
    X86_TICK(c, 36);
    // 0d6eb0  popal 
    X86_AT(c, 0xd6eb0u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0d6eb1  mov al, 3
    X86_AT(c, 0xd6eb1u);
    s8(c, 0, 0x3u);
    // 0d6eb3  ret 
    X86_AT(c, 0xd6eb3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd6e12u, "ran off the end of a function");
}
void f_000d6eb4(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0d6eb4  pushal 
    X86_AT(c, 0xd6eb4u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0d6eb5  cmp al, 0x80
    X86_AT(c, 0xd6eb5u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 0d6eb7  jb 0xd6ecb
    X86_AT(c, 0xd6eb7u);
    if (x86_cc(c, 2)) { goto L_d6ecb; }
    X86_TICK(c, 7);
    // 0d6eb9  cmp al, 0xf0
    X86_AT(c, 0xd6eb9u);
    (void)x86_sub(c, g8(c, 0), 0xF0u, 0, 1);
    // 0d6ebb  jae 0xd6ef3
    X86_AT(c, 0xd6ebbu);
    if (x86_cc(c, 3)) { goto L_d6ef3; }
    X86_TICK(c, 11);
    // 0d6ebd  mov byte ptr [0xb4130], al
    X86_AT(c, 0xd6ebdu);
    wr8((c.sbase[3] + (uint32_t)(0xB4130u)), g8(c, 0));
    // 0d6ec2  mov byte ptr [0xb4131], 1
    X86_AT(c, 0xd6ec2u);
    wr8((c.sbase[3] + (uint32_t)(0xB4131u)), 0x1u);
    // 0d6ec9  jmp 0xd6ef1
    X86_AT(c, 0xd6ec9u);
    goto L_d6ef1;
L_d6ecb:
    X86_TICK(c, 13);
    // 0d6ecb  movzx ebx, byte ptr [0xb4130]
    X86_AT(c, 0xd6ecbu);
    c.r[3] = rd8((c.sbase[3] + (uint32_t)(0xB4130u)));
    // 0d6ed2  cmp ebx, 0x80
    X86_AT(c, 0xd6ed2u);
    (void)x86_sub(c, c.r[3], 0x80u, 0, 4);
    // 0d6ed8  jb 0xd6ef1
    X86_AT(c, 0xd6ed8u);
    if (x86_cc(c, 2)) { goto L_d6ef1; }
    X86_TICK(c, 14);
    // 0d6ede  sub ebx, 0x80
    X86_AT(c, 0xd6edeu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, 0x80u, 0, 4); }
    // 0d6ee4  shr ebx, 4
    X86_AT(c, 0xd6ee4u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 0d6ee7  lea ebx, [ebx*4 + 0xd6f03]
    X86_AT(c, 0xd6ee7u);
    c.r[3] = (uint32_t)(c.r[3] * 4 + 0xD6F03u);
    // 0d6eee  call dword ptr cs:[ebx]
    X86_AT(c, 0xd6eeeu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[3]))); push32(c, 0xd6ef1u); x86_call(c, t); X86_RET(c, 0xd6ef1u); }
L_d6ef1:
    X86_TICK(c, 34);
    // 0d6ef1  popal 
    X86_AT(c, 0xd6ef1u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0d6ef2  ret 
    X86_AT(c, 0xd6ef2u);
    c.eip = pop32(c); return;
L_d6ef3:
    X86_TICK(c, 38);
    // 0d6ef3  mov byte ptr [0xb4131], 1
    X86_AT(c, 0xd6ef3u);
    wr8((c.sbase[3] + (uint32_t)(0xB4131u)), 0x1u);
    // 0d6efa  mov byte ptr [0xb4130], 0
    X86_AT(c, 0xd6efau);
    wr8((c.sbase[3] + (uint32_t)(0xB4130u)), 0x0u);
    // 0d6f01  popal 
    X86_AT(c, 0xd6f01u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0d6f02  ret 
    X86_AT(c, 0xd6f02u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd6eb4u, "ran off the end of a function");
}
void f_000d6f4a(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0d6f4a  cmp byte ptr [0xb4131], 2
    X86_AT(c, 0xd6f4au);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB4131u))), 0x2u, 0, 1);
    // 0d6f51  jb 0xd6f6f
    X86_AT(c, 0xd6f51u);
    if (x86_cc(c, 2)) { goto L_d6f6f; }
    X86_TICK(c, 11);
    // 0d6f53  mov byte ptr [0xb4133], al
    X86_AT(c, 0xd6f53u);
    wr8((c.sbase[3] + (uint32_t)(0xB4133u)), g8(c, 0));
    // 0d6f58  mov byte ptr [0xb4131], 1
    X86_AT(c, 0xd6f58u);
    wr8((c.sbase[3] + (uint32_t)(0xB4131u)), 0x1u);
    // 0d6f5f  and al, al
    X86_AT(c, 0xd6f5fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0d6f61  je 0xd6f69
    X86_AT(c, 0xd6f61u);
    if (x86_cc(c, 4)) { goto L_d6f69; }
    X86_TICK(c, 7);
    // 0d6f63  call 0xd708e
    X86_AT(c, 0xd6f63u);
    push32(c, 0xd6f68u); x86_call_known(c, 0xd708eu, f_000d708e); X86_RET(c, 0xd6f68u);
    X86_TICK(c, 10);
    // 0d6f68  ret 
    X86_AT(c, 0xd6f68u);
    c.eip = pop32(c); return;
L_d6f69:
    X86_TICK(c, 7);
    // 0d6f69  call 0xd702b
    X86_AT(c, 0xd6f69u);
    push32(c, 0xd6f6eu); x86_call_known(c, 0xd702bu, f_000d702b); X86_RET(c, 0xd6f6eu);
    X86_TICK(c, 10);
    // 0d6f6e  ret 
    X86_AT(c, 0xd6f6eu);
    c.eip = pop32(c); return;
L_d6f6f:
    X86_TICK(c, 18);
    // 0d6f6f  mov byte ptr [0xb4132], al
    X86_AT(c, 0xd6f6fu);
    wr8((c.sbase[3] + (uint32_t)(0xB4132u)), g8(c, 0));
    // 0d6f74  inc byte ptr [0xb4131]
    X86_AT(c, 0xd6f74u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4131u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 0d6f7a  ret 
    X86_AT(c, 0xd6f7au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd6f4au, "ran off the end of a function");
}
void f_000d702b(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0d702b  mov al, byte ptr [0xb4130]
    X86_AT(c, 0xd702bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xB4130u))));
    // 0d7030  and eax, 0xf
    X86_AT(c, 0xd7030u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFu, 4); }
    // 0d7035  mov bl, byte ptr [eax + 0xb4145]
    X86_AT(c, 0xd7035u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB4145u))));
    // 0d703b  cmp bl, 0xff
    X86_AT(c, 0xd703bu);
    (void)x86_sub(c, g8(c, 3), 0xFFu, 0, 1);
    // 0d703e  je 0xd708c
    X86_AT(c, 0xd703eu);
    if (x86_cc(c, 4)) { goto L_d708c; }
    X86_TICK(c, 4);
    // 0d7044  mov dl, byte ptr [0xb4132]
    X86_AT(c, 0xd7044u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(0xB4132u))));
L_d704a:
    X86_TICK(c, 16);
    // 0d704a  movzx eax, bl
    X86_AT(c, 0xd704au);
    c.r[0] = g8(c, 3);
    // 0d704d  lea esi, [eax*4 + 0xb4155]
    X86_AT(c, 0xd704du);
    c.r[6] = (uint32_t)(c.r[0] * 4 + 0xB4155u);
    // 0d7054  cmp dl, byte ptr [esi + 2]
    X86_AT(c, 0xd7054u);
    (void)x86_sub(c, g8(c, 2), rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x2u))), 0, 1);
    // 0d7057  je 0xd7066
    X86_AT(c, 0xd7057u);
    if (x86_cc(c, 4)) { goto L_d7066; }
    X86_TICK(c, 11);
    // 0d7059  mov bl, byte ptr [esi + 1]
    X86_AT(c, 0xd7059u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x1u))));
    // 0d705c  cmp bl, 0xff
    X86_AT(c, 0xd705cu);
    (void)x86_sub(c, g8(c, 3), 0xFFu, 0, 1);
    // 0d705f  jne 0xd704a
    X86_AT(c, 0xd705fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd704au); goto L_d704a; }
    X86_TICK(c, 7);
    // 0d7061  jmp 0xd708c
    X86_AT(c, 0xd7061u);
    goto L_d708c;
L_d7066:
    X86_TICK(c, 18);
    // 0d7066  mov al, byte ptr [0xb4130]
    X86_AT(c, 0xd7066u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xB4130u))));
    // 0d706b  and eax, 0xf
    X86_AT(c, 0xd706bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFu, 4); }
    // 0d7070  cmp byte ptr [eax + 0xb4135], 0
    X86_AT(c, 0xd7070u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB4135u))), 0x0u, 0, 1);
    // 0d7077  jne 0xd7086
    X86_AT(c, 0xd7077u);
    if (x86_cc(c, 5)) { goto L_d7086; }
    X86_TICK(c, 11);
    // 0d7079  mov byte ptr [esi + 2], 0
    X86_AT(c, 0xd7079u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x2u)), 0x0u);
    // 0d707d  mov ah, 2
    X86_AT(c, 0xd707du);
    s8(c, 4, 0x2u);
    // 0d707f  call 0xd4fcc
    X86_AT(c, 0xd707fu);
    push32(c, 0xd7084u); x86_call_known(c, 0xd4fccu, f_000d4fcc); X86_RET(c, 0xd7084u);
    X86_TICK(c, 12);
    // 0d7084  clc 
    X86_AT(c, 0xd7084u);
    c.fl &= ~X86_CF;
    // 0d7085  ret 
    X86_AT(c, 0xd7085u);
    c.eip = pop32(c); return;
L_d7086:
    X86_TICK(c, 19);
    // 0d7086  or byte ptr [esi + 2], 0x80
    X86_AT(c, 0xd7086u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0x2u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
    // 0d708a  clc 
    X86_AT(c, 0xd708au);
    c.fl &= ~X86_CF;
    // 0d708b  ret 
    X86_AT(c, 0xd708bu);
    c.eip = pop32(c); return;
L_d708c:
    X86_TICK(c, 12);
    // 0d708c  stc 
    X86_AT(c, 0xd708cu);
    c.fl |= X86_CF;
    // 0d708d  ret 
    X86_AT(c, 0xd708du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd702bu, "ran off the end of a function");
}
void f_000d708e(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0d708e  cmp byte ptr [0xb4132], 0
    X86_AT(c, 0xd708eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB4132u))), 0x0u, 0, 1);
    // 0d7095  je 0xd711e
    X86_AT(c, 0xd7095u);
    if (x86_cc(c, 4)) { goto L_d711e; }
    X86_TICK(c, 17);
    // 0d709b  mov al, byte ptr [0xb4130]
    X86_AT(c, 0xd709bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xB4130u))));
    // 0d70a0  and eax, 0xf
    X86_AT(c, 0xd70a0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFu, 4); }
    // 0d70a5  mov bl, byte ptr [eax + 0xb4145]
    X86_AT(c, 0xd70a5u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB4145u))));
    // 0d70ab  cmp bl, 0xff
    X86_AT(c, 0xd70abu);
    (void)x86_sub(c, g8(c, 3), 0xFFu, 0, 1);
    // 0d70ae  je 0xd711e
    X86_AT(c, 0xd70aeu);
    if (x86_cc(c, 4)) { goto L_d711e; }
    X86_TICK(c, 2);
    // 0d70b4  push bx
    X86_AT(c, 0xd70b4u);
    { uint32_t v = (c.r[3] & 0xFFFFu); push16(c, v); }
L_d70b6:
    X86_TICK(c, 22);
    // 0d70b6  movzx eax, bl
    X86_AT(c, 0xd70b6u);
    c.r[0] = g8(c, 3);
    // 0d70b9  lea esi, [eax*4 + 0xb4155]
    X86_AT(c, 0xd70b9u);
    c.r[6] = (uint32_t)(c.r[0] * 4 + 0xB4155u);
    // 0d70c0  inc byte ptr [esi + 3]
    X86_AT(c, 0xd70c0u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0x3u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 0d70c3  mov bl, byte ptr [esi + 1]
    X86_AT(c, 0xd70c3u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x1u))));
    // 0d70c6  cmp bl, 0xff
    X86_AT(c, 0xd70c6u);
    (void)x86_sub(c, g8(c, 3), 0xFFu, 0, 1);
    // 0d70c9  jne 0xd70b6
    X86_AT(c, 0xd70c9u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd70b6u); goto L_d70b6; }
    X86_TICK(c, 6);
    // 0d70cb  pop bx
    X86_AT(c, 0xd70cbu);
    { uint32_t v = pop16(c); s16(c, 3, v); }
    // 0d70cd  xor dl, dl
    X86_AT(c, 0xd70cdu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v ^ g8(c, 2), 1)); }
L_d70cf:
    X86_TICK(c, 17);
    // 0d70cf  movzx eax, bl
    X86_AT(c, 0xd70cfu);
    c.r[0] = g8(c, 3);
    // 0d70d2  lea esi, [eax*4 + 0xb4155]
    X86_AT(c, 0xd70d2u);
    c.r[6] = (uint32_t)(c.r[0] * 4 + 0xB4155u);
    // 0d70d9  cmp byte ptr [esi + 2], 0
    X86_AT(c, 0xd70d9u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x2u))), 0x0u, 0, 1);
    // 0d70dd  je 0xd70fa
    X86_AT(c, 0xd70ddu);
    if (x86_cc(c, 4)) { goto L_d70fa; }
    X86_TICK(c, 11);
    // 0d70df  cmp dl, byte ptr [esi + 3]
    X86_AT(c, 0xd70dfu);
    (void)x86_sub(c, g8(c, 2), rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x3u))), 0, 1);
    // 0d70e2  ja 0xd70e9
    X86_AT(c, 0xd70e2u);
    if (x86_cc(c, 7)) { goto L_d70e9; }
    X86_TICK(c, 6);
    // 0d70e4  mov cl, bl
    X86_AT(c, 0xd70e4u);
    s8(c, 1, g8(c, 3));
    // 0d70e6  mov dl, byte ptr [esi + 3]
    X86_AT(c, 0xd70e6u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x3u))));
L_d70e9:
    X86_TICK(c, 11);
    // 0d70e9  mov bl, byte ptr [esi + 1]
    X86_AT(c, 0xd70e9u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x1u))));
    // 0d70ec  cmp bl, 0xff
    X86_AT(c, 0xd70ecu);
    (void)x86_sub(c, g8(c, 3), 0xFFu, 0, 1);
    // 0d70ef  jne 0xd70cf
    X86_AT(c, 0xd70efu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd70cfu); goto L_d70cf; }
    X86_TICK(c, 11);
    // 0d70f1  mov bl, cl
    X86_AT(c, 0xd70f1u);
    s8(c, 3, g8(c, 1));
    // 0d70f3  mov ah, 2
    X86_AT(c, 0xd70f3u);
    s8(c, 4, 0x2u);
    // 0d70f5  call 0xd4fcc
    X86_AT(c, 0xd70f5u);
    push32(c, 0xd70fau); x86_call_known(c, 0xd4fccu, f_000d4fcc); X86_RET(c, 0xd70fau);
L_d70fa:
    X86_TICK(c, 26);
    // 0d70fa  movzx eax, bl
    X86_AT(c, 0xd70fau);
    c.r[0] = g8(c, 3);
    // 0d70fd  lea esi, [eax*4 + 0xb4155]
    X86_AT(c, 0xd70fdu);
    c.r[6] = (uint32_t)(c.r[0] * 4 + 0xB4155u);
    // 0d7104  mov dh, byte ptr [0xb4132]
    X86_AT(c, 0xd7104u);
    s8(c, 6, rd8((c.sbase[3] + (uint32_t)(0xB4132u))));
    // 0d710a  mov byte ptr [esi + 2], dh
    X86_AT(c, 0xd710au);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x2u)), g8(c, 6));
    // 0d710d  mov byte ptr [esi + 3], 0
    X86_AT(c, 0xd710du);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x3u)), 0x0u);
    // 0d7111  mov dl, byte ptr [0xb4133]
    X86_AT(c, 0xd7111u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(0xB4133u))));
    // 0d7117  mov ah, 1
    X86_AT(c, 0xd7117u);
    s8(c, 4, 0x1u);
    // 0d7119  call 0xd4fcc
    X86_AT(c, 0xd7119u);
    push32(c, 0xd711eu); x86_call_known(c, 0xd4fccu, f_000d4fcc); X86_RET(c, 0xd711eu);
L_d711e:
    X86_TICK(c, 10);
    // 0d711e  ret 
    X86_AT(c, 0xd711eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd708eu, "ran off the end of a function");
}
void f_000d7288(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0d7288  push ebp
    X86_AT(c, 0xd7288u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d7289  mov ebp, esp
    X86_AT(c, 0xd7289u);
    c.r[5] = c.r[4];
    // 0d728b  sub esp, 0xb4
    X86_AT(c, 0xd728bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xB4u, 0, 4); }
    // 0d7291  push ebx
    X86_AT(c, 0xd7291u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d7292  push esi
    X86_AT(c, 0xd7292u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7293  push edi
    X86_AT(c, 0xd7293u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7294  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xd7294u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d7297  cmp byte ptr [eax], 0
    X86_AT(c, 0xd7297u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x0u, 0, 1);
    // 0d729a  je 0xd7339
    X86_AT(c, 0xd729au);
    if (x86_cc(c, 4)) { goto L_d7339; }
    X86_TICK(c, 14);
    // 0d72a0  push 0x12a6c
    X86_AT(c, 0xd72a0u);
    { uint32_t v = 0x12A6Cu; push32(c, v); }
    // 0d72a5  push dword ptr [ebp + 8]
    X86_AT(c, 0xd72a5u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0d72a8  call 0xd7fc4
    X86_AT(c, 0xd72a8u);
    push32(c, 0xd72adu); x86_call_known(c, 0xd7fc4u, f_000d7fc4); X86_RET(c, 0xd72adu);
    X86_TICK(c, 12);
    // 0d72ad  add esp, 8
    X86_AT(c, 0xd72adu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d72b0  xchg edi, eax
    X86_AT(c, 0xd72b0u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d72b1  and edi, edi
    X86_AT(c, 0xd72b1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0d72b3  jne 0xd7340
    X86_AT(c, 0xd72b3u);
    if (x86_cc(c, 5)) { goto L_d7340; }
    X86_TICK(c, 9);
    // 0d72b9  push 0x12a70
    X86_AT(c, 0xd72b9u);
    { uint32_t v = 0x12A70u; push32(c, v); }
    // 0d72be  call 0xd8938
    X86_AT(c, 0xd72beu);
    push32(c, 0xd72c3u); x86_call_known(c, 0xd8938u, f_000d8938); X86_RET(c, 0xd72c3u);
    X86_TICK(c, 11);
    // 0d72c3  add esp, 4
    X86_AT(c, 0xd72c3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d72c6  mov dword ptr [ebp - 0x34], eax
    X86_AT(c, 0xd72c6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFCCu)), c.r[0]);
    // 0d72c9  and eax, eax
    X86_AT(c, 0xd72c9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d72cb  je 0xd7339
    X86_AT(c, 0xd72cbu);
    if (x86_cc(c, 4)) { goto L_d7339; }
    X86_TICK(c, 16);
    // 0d72cd  push dword ptr [ebp - 0x34]
    X86_AT(c, 0xd72cdu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFCCu))); push32(c, v); }
    // 0d72d0  lea eax, [ebp - 0xb4]
    X86_AT(c, 0xd72d0u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF4Cu);
    // 0d72d6  push eax
    X86_AT(c, 0xd72d6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d72d7  call 0xd8a30
    X86_AT(c, 0xd72d7u);
    push32(c, 0xd72dcu); x86_call_known(c, 0xd8a30u, f_000d8a30); X86_RET(c, 0xd72dcu);
    X86_TICK(c, 4);
    // 0d72dc  sub esi, esi
    X86_AT(c, 0xd72dcu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0d72de  add esp, 8
    X86_AT(c, 0xd72deu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d72e1:
    X86_TICK(c, 12);
    // 0d72e1  cmp byte ptr [ebp + esi*1 - 0xb4], 0
    X86_AT(c, 0xd72e1u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFF4Cu))), 0x0u, 0, 1);
    // 0d72e9  je 0xd72ee
    X86_AT(c, 0xd72e9u);
    if (x86_cc(c, 4)) { goto L_d72ee; }
    X86_TICK(c, 9);
    // 0d72eb  inc esi
    X86_AT(c, 0xd72ebu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d72ec  jmp 0xd72e1
    X86_AT(c, 0xd72ecu);
    X86_POLL(c, 0xd72e1u); goto L_d72e1;
L_d72ee:
    X86_TICK(c, 12);
    // 0d72ee  cmp byte ptr [ebp + esi*1 - 0xb5], 0x5c
    X86_AT(c, 0xd72eeu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFF4Bu))), 0x5Cu, 0, 1);
    // 0d72f6  je 0xd7301
    X86_AT(c, 0xd72f6u);
    if (x86_cc(c, 4)) { goto L_d7301; }
    X86_TICK(c, 4);
    // 0d72f8  inc esi
    X86_AT(c, 0xd72f8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d72f9  mov byte ptr [ebp + esi*1 - 0xb5], 0x5c
    X86_AT(c, 0xd72f9u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFF4Bu)), 0x5Cu);
L_d7301:
    X86_TICK(c, 2);
    // 0d7301  sub ebx, ebx
    X86_AT(c, 0xd7301u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_d7303:
    X86_TICK(c, 15);
    // 0d7303  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xd7303u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d7306  mov al, byte ptr [eax + ebx*1]
    X86_AT(c, 0xd7306u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[3]))));
    // 0d7309  and al, al
    X86_AT(c, 0xd7309u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0d730b  je 0xd7318
    X86_AT(c, 0xd730bu);
    if (x86_cc(c, 4)) { goto L_d7318; }
    X86_TICK(c, 13);
    // 0d730d  inc esi
    X86_AT(c, 0xd730du);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d730e  mov byte ptr [ebp + esi*1 - 0xb5], al
    X86_AT(c, 0xd730eu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFF4Bu)), g8(c, 0));
    // 0d7315  inc ebx
    X86_AT(c, 0xd7315u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0d7316  jmp 0xd7303
    X86_AT(c, 0xd7316u);
    X86_POLL(c, 0xd7303u); goto L_d7303;
L_d7318:
    X86_TICK(c, 15);
    // 0d7318  mov byte ptr [ebp + esi*1 - 0xb4], 0
    X86_AT(c, 0xd7318u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFF4Cu)), 0x0u);
    // 0d7320  push 0x12a78
    X86_AT(c, 0xd7320u);
    { uint32_t v = 0x12A78u; push32(c, v); }
    // 0d7325  lea eax, [ebp - 0xb4]
    X86_AT(c, 0xd7325u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF4Cu);
    // 0d732b  push eax
    X86_AT(c, 0xd732bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d732c  call 0xd7fc4
    X86_AT(c, 0xd732cu);
    push32(c, 0xd7331u); x86_call_known(c, 0xd7fc4u, f_000d7fc4); X86_RET(c, 0xd7331u);
    X86_TICK(c, 12);
    // 0d7331  add esp, 8
    X86_AT(c, 0xd7331u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d7334  xchg edi, eax
    X86_AT(c, 0xd7334u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d7335  and edi, edi
    X86_AT(c, 0xd7335u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0d7337  jne 0xd7340
    X86_AT(c, 0xd7337u);
    if (x86_cc(c, 5)) { goto L_d7340; }
L_d7339:
    X86_TICK(c, 9);
    // 0d7339  mov eax, 1
    X86_AT(c, 0xd7339u);
    c.r[0] = 0x1u;
    // 0d733e  jmp 0xd739f
    X86_AT(c, 0xd733eu);
    goto L_d739f;
L_d7340:
    X86_TICK(c, 18);
    // 0d7340  push edi
    X86_AT(c, 0xd7340u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7341  push 8
    X86_AT(c, 0xd7341u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0d7343  push 1
    X86_AT(c, 0xd7343u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d7345  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xd7345u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0d7348  call 0xd7ce8
    X86_AT(c, 0xd7348u);
    push32(c, 0xd734du); x86_call_known(c, 0xd7ce8u, f_000d7ce8); X86_RET(c, 0xd734du);
    X86_TICK(c, 9);
    // 0d734d  add esp, 0x10
    X86_AT(c, 0xd734du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d7350  cmp eax, 8
    X86_AT(c, 0xd7350u);
    (void)x86_sub(c, c.r[0], 0x8u, 0, 4);
    // 0d7353  jl 0xd7375
    X86_AT(c, 0xd7353u);
    if (x86_cc(c, 12)) { goto L_d7375; }
    X86_TICK(c, 2);
    // 0d7355  sub esi, esi
    X86_AT(c, 0xd7355u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_d7357:
    X86_TICK(c, 7);
    // 0d7357  cmp esi, 0x80
    X86_AT(c, 0xd7357u);
    (void)x86_sub(c, c.r[6], 0x80u, 0, 4);
    // 0d735d  jge 0xd7394
    X86_AT(c, 0xd735du);
    if (x86_cc(c, 13)) { goto L_d7394; }
    X86_TICK(c, 17);
    // 0d735f  push edi
    X86_AT(c, 0xd735fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7360  push 0x30
    X86_AT(c, 0xd7360u);
    { uint32_t v = 0x30u; push32(c, v); }
    // 0d7362  push 1
    X86_AT(c, 0xd7362u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d7364  lea eax, [ebp - 0x30]
    X86_AT(c, 0xd7364u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD0u);
    // 0d7367  push eax
    X86_AT(c, 0xd7367u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7368  call 0xd7ce8
    X86_AT(c, 0xd7368u);
    push32(c, 0xd736du); x86_call_known(c, 0xd7ce8u, f_000d7ce8); X86_RET(c, 0xd736du);
    X86_TICK(c, 9);
    // 0d736d  add esp, 0x10
    X86_AT(c, 0xd736du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d7370  cmp eax, 0x30
    X86_AT(c, 0xd7370u);
    (void)x86_sub(c, c.r[0], 0x30u, 0, 4);
    // 0d7373  jge 0xd7382
    X86_AT(c, 0xd7373u);
    if (x86_cc(c, 13)) { goto L_d7382; }
L_d7375:
    X86_TICK(c, 9);
    // 0d7375  push edi
    X86_AT(c, 0xd7375u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7376  call 0xd84c0
    X86_AT(c, 0xd7376u);
    push32(c, 0xd737bu); x86_call_known(c, 0xd84c0u, f_000d84c0); X86_RET(c, 0xd737bu);
    X86_TICK(c, 9);
    // 0d737b  mov eax, 2
    X86_AT(c, 0xd737bu);
    c.r[0] = 0x2u;
    // 0d7380  jmp 0xd739c
    X86_AT(c, 0xd7380u);
    goto L_d739c;
L_d7382:
    X86_TICK(c, 15);
    // 0d7382  lea eax, [ebp - 0x30]
    X86_AT(c, 0xd7382u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD0u);
    // 0d7385  push eax
    X86_AT(c, 0xd7385u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7386  push esi
    X86_AT(c, 0xd7386u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7387  push 0
    X86_AT(c, 0xd7387u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d7389  call 0xd4ab5
    X86_AT(c, 0xd7389u);
    push32(c, 0xd738eu); x86_call_known(c, 0xd4ab5u, f_000d4ab5); X86_RET(c, 0xd738eu);
    X86_TICK(c, 11);
    // 0d738e  inc esi
    X86_AT(c, 0xd738eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d738f  add esp, 0xc
    X86_AT(c, 0xd738fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d7392  jmp 0xd7357
    X86_AT(c, 0xd7392u);
    X86_POLL(c, 0xd7357u); goto L_d7357;
L_d7394:
    X86_TICK(c, 9);
    // 0d7394  push edi
    X86_AT(c, 0xd7394u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7395  call 0xd84c0
    X86_AT(c, 0xd7395u);
    push32(c, 0xd739au); x86_call_known(c, 0xd84c0u, f_000d84c0); X86_RET(c, 0xd739au);
    X86_TICK(c, 2);
    // 0d739a  sub eax, eax
    X86_AT(c, 0xd739au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_d739c:
    X86_TICK(c, 2);
    // 0d739c  add esp, 4
    X86_AT(c, 0xd739cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_d739f:
    X86_TICK(c, 28);
    // 0d739f  pop edi
    X86_AT(c, 0xd739fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d73a0  pop esi
    X86_AT(c, 0xd73a0u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d73a1  pop ebx
    X86_AT(c, 0xd73a1u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d73a2  leave 
    X86_AT(c, 0xd73a2u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d73a3  ret 
    X86_AT(c, 0xd73a3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd7288u, "ran off the end of a function");
}
void f_000d7598(X86Cpu& c) {
    X86_TICK(c, 46);
    // 0d7598  enter 0x14, 0
    X86_AT(c, 0xd7598u);
    x86_enter(c, 0x14u, 0x0u, 4);
    // 0d759c  push ebx
    X86_AT(c, 0xd759cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d759d  push esi
    X86_AT(c, 0xd759du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d759e  push edi
    X86_AT(c, 0xd759eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d759f  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd759fu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d75a2  mov esi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xd75a2u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0d75a5  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0xd75a5u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d75a8  mov ax, word ptr [0xb47e6]
    X86_AT(c, 0xd75a8u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xB47E6u))));
    // 0d75ae  mov word ptr [ebp - 0xa], ax
    X86_AT(c, 0xd75aeu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF6u)), (c.r[0] & 0xFFFFu));
    // 0d75b2  mov word ptr [0xb47e6], 0
    X86_AT(c, 0xd75b2u);
    wr16((c.sbase[3] + (uint32_t)(0xB47E6u)), 0x0u);
    // 0d75bb  mov dword ptr [ebp - 0x10], edi
    X86_AT(c, 0xd75bbu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[7]);
    // 0d75be  test byte ptr [ebx + 0xc], 0x80
    X86_AT(c, 0xd75beu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x80u, 1);
    // 0d75c2  je 0xd75ca
    X86_AT(c, 0xd75c2u);
    if (x86_cc(c, 4)) { goto L_d75ca; }
    X86_TICK(c, 9);
    // 0d75c4  push ebx
    X86_AT(c, 0xd75c4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d75c5  call 0xd93a8
    X86_AT(c, 0xd75c5u);
    push32(c, 0xd75cau); x86_call_known(c, 0xd93a8u, f_000d93a8); X86_RET(c, 0xd75cau);
L_d75ca:
    X86_TICK(c, 12);
    // 0d75ca  test byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0xd75cau);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x10u, 1);
    // 0d75ce  jne 0xd77ad
    X86_AT(c, 0xd75ceu);
    if (x86_cc(c, 5)) { goto L_d77ad; }
    X86_TICK(c, 12);
    // 0d75d4  cmp dword ptr [ebx + 4], 0xffffffff
    X86_AT(c, 0xd75d4u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0xFFFFFFFFu, 0, 4);
    // 0d75d8  jne 0xd75e1
    X86_AT(c, 0xd75d8u);
    if (x86_cc(c, 5)) { goto L_d75e1; }
    X86_TICK(c, 2);
    // 0d75da  mov dword ptr [ebx + 4], 0
    X86_AT(c, 0xd75dau);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0x0u);
L_d75e1:
    X86_TICK(c, 12);
    // 0d75e1  test byte ptr [ebx + 0xc], 1
    X86_AT(c, 0xd75e1u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x1u, 1);
    // 0d75e5  je 0xd7796
    X86_AT(c, 0xd75e5u);
    if (x86_cc(c, 4)) { goto L_d7796; }
    X86_TICK(c, 12);
    // 0d75eb  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0xd75ebu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 0d75ef  jne 0xd763c
    X86_AT(c, 0xd75efu);
    if (x86_cc(c, 5)) { goto L_d763c; }
    X86_TICK(c, 12);
    // 0d75f1  test byte ptr [ebx + 0xc], 0x40
    X86_AT(c, 0xd75f1u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x40u, 1);
    // 0d75f5  je 0xd7613
    X86_AT(c, 0xd75f5u);
    if (x86_cc(c, 4)) { goto L_d7613; }
    X86_TICK(c, 18);
    // 0d75f7  push dword ptr [ebp + 8]
    X86_AT(c, 0xd75f7u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0d75fa  push 1
    X86_AT(c, 0xd75fau);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d75fc  push 1
    X86_AT(c, 0xd75fcu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d75fe  push edi
    X86_AT(c, 0xd75feu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d75ff  call 0xd7ce8
    X86_AT(c, 0xd75ffu);
    push32(c, 0xd7604u); x86_call_known(c, 0xd7ce8u, f_000d7ce8); X86_RET(c, 0xd7604u);
    X86_TICK(c, 11);
    // 0d7604  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xd7604u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0d7607  add esp, 0x10
    X86_AT(c, 0xd7607u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d760a  and eax, eax
    X86_AT(c, 0xd760au);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d760c  jne 0xd767b
    X86_AT(c, 0xd760cu);
    if (x86_cc(c, 5)) { goto L_d767b; }
    X86_TICK(c, 7);
    // 0d760e  jmp 0xd77ad
    X86_AT(c, 0xd760eu);
    goto L_d77ad;
L_d7613:
    X86_TICK(c, 20);
    // 0d7613  push 0x200
    X86_AT(c, 0xd7613u);
    { uint32_t v = 0x200u; push32(c, v); }
    // 0d7618  push dword ptr [ebx + 8]
    X86_AT(c, 0xd7618u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 0d761b  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xd761bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0d761e  push eax
    X86_AT(c, 0xd761eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d761f  call 0xda8a8
    X86_AT(c, 0xd761fu);
    push32(c, 0xd7624u); x86_call_known(c, 0xda8a8u, f_000da8a8); X86_RET(c, 0xd7624u);
    X86_TICK(c, 22);
    // 0d7624  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0xd7624u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
    // 0d7627  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0xd7627u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0d762a  mov dword ptr [ebx], eax
    X86_AT(c, 0xd762au);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 0d762c  mov word ptr [ebx + 0x10], 0xffff
    X86_AT(c, 0xd762cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFFu);
    // 0d7632  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0xd7632u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 0d7636  je 0xd77ad
    X86_AT(c, 0xd7636u);
    if (x86_cc(c, 4)) { goto L_d77ad; }
L_d763c:
    X86_TICK(c, 12);
    // 0d763c  test byte ptr [ebx + 0xc], 0x40
    X86_AT(c, 0xd763cu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x40u, 1);
    // 0d7640  je 0xd76c6
    X86_AT(c, 0xd7640u);
    if (x86_cc(c, 4)) { goto L_d76c6; }
    X86_TICK(c, 11);
    // 0d7646  mov ax, word ptr [ebx + 0x10]
    X86_AT(c, 0xd7646u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))));
    // 0d764a  cmp ax, 0xffff
    X86_AT(c, 0xd764au);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0xFFFFu, 0, 2);
    // 0d764e  je 0xd7660
    X86_AT(c, 0xd764eu);
    if (x86_cc(c, 4)) { goto L_d7660; }
    X86_TICK(c, 20);
    // 0d7650  movsx eax, ax
    X86_AT(c, 0xd7650u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 0d7653  add eax, dword ptr [ebx + 8]
    X86_AT(c, 0xd7653u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 0d7656  cmp eax, dword ptr [ebx]
    X86_AT(c, 0xd7656u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4);
    // 0d7658  jl 0xd7660
    X86_AT(c, 0xd7658u);
    if (x86_cc(c, 12)) { goto L_d7660; }
    X86_TICK(c, 12);
    // 0d765a  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0xd765au);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 0d765e  jne 0xd768c
    X86_AT(c, 0xd765eu);
    if (x86_cc(c, 5)) { goto L_d768c; }
L_d7660:
    X86_TICK(c, 18);
    // 0d7660  push dword ptr [ebp + 8]
    X86_AT(c, 0xd7660u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0d7663  push 1
    X86_AT(c, 0xd7663u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d7665  push 1
    X86_AT(c, 0xd7665u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d7667  push edi
    X86_AT(c, 0xd7667u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7668  call 0xd7ce8
    X86_AT(c, 0xd7668u);
    push32(c, 0xd766du); x86_call_known(c, 0xd7ce8u, f_000d7ce8); X86_RET(c, 0xd766du);
    X86_TICK(c, 11);
    // 0d766d  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xd766du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0d7670  add esp, 0x10
    X86_AT(c, 0xd7670u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d7673  and eax, eax
    X86_AT(c, 0xd7673u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d7675  je 0xd77bb
    X86_AT(c, 0xd7675u);
    if (x86_cc(c, 4)) { goto L_d77bb; }
L_d767b:
    X86_TICK(c, 12);
    // 0d767b  cmp byte ptr [edi], 0xa
    X86_AT(c, 0xd767bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0xAu, 0, 1);
    // 0d767e  je 0xd77d9
    X86_AT(c, 0xd767eu);
    if (x86_cc(c, 4)) { goto L_d77d9; }
    X86_TICK(c, 12);
    // 0d7684  cmp byte ptr [ebp + 0x14], 0
    X86_AT(c, 0xd7684u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0x0u, 0, 1);
    // 0d7688  je 0xd768b
    X86_AT(c, 0xd7688u);
    if (x86_cc(c, 4)) { goto L_d768b; }
    X86_TICK(c, 2);
    // 0d768a  dec esi
    X86_AT(c, 0xd768au);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_d768b:
    X86_TICK(c, 2);
    // 0d768b  inc edi
    X86_AT(c, 0xd768bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
L_d768c:
    X86_TICK(c, 12);
    // 0d768c  cmp word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0xd768cu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0x200u, 0, 2);
    // 0d7692  jne 0xd7699
    X86_AT(c, 0xd7692u);
    if (x86_cc(c, 5)) { goto L_d7699; }
    X86_TICK(c, 11);
    // 0d7694  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0xd7694u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0d7697  jmp 0xd76aa
    X86_AT(c, 0xd7697u);
    goto L_d76aa;
L_d7699:
    X86_TICK(c, 12);
    // 0d7699  cmp word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0xd7699u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0xFFFEu, 0, 2);
    // 0d769e  jne 0xd76b5
    X86_AT(c, 0xd769eu);
    if (x86_cc(c, 5)) { goto L_d76b5; }
    X86_TICK(c, 12);
    // 0d76a0  cmp dword ptr [ebx + 4], 1
    X86_AT(c, 0xd76a0u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x1u, 0, 4);
    // 0d76a4  je 0xd7660
    X86_AT(c, 0xd76a4u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd7660u); goto L_d7660; }
    X86_TICK(c, 6);
    // 0d76a6  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0xd76a6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0d76a9  dec eax
    X86_AT(c, 0xd76a9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
L_d76aa:
    X86_TICK(c, 7);
    // 0d76aa  cmp eax, esi
    X86_AT(c, 0xd76aau);
    (void)x86_sub(c, c.r[0], c.r[6], 0, 4);
    // 0d76ac  jl 0xd76b0
    X86_AT(c, 0xd76acu);
    if (x86_cc(c, 12)) { goto L_d76b0; }
    X86_TICK(c, 2);
    // 0d76ae  mov eax, esi
    X86_AT(c, 0xd76aeu);
    c.r[0] = c.r[6];
L_d76b0:
    X86_TICK(c, 9);
    // 0d76b0  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd76b0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d76b3  jmp 0xd7712
    X86_AT(c, 0xd76b3u);
    goto L_d7712;
L_d76b5:
    X86_TICK(c, 25);
    // 0d76b5  mov eax, dword ptr [ebx]
    X86_AT(c, 0xd76b5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0d76b7  sub eax, dword ptr [ebx + 8]
    X86_AT(c, 0xd76b7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 0d76ba  movsx edx, word ptr [ebx + 0x10]
    X86_AT(c, 0xd76bau);
    c.r[2] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 0d76be  sub edx, eax
    X86_AT(c, 0xd76beu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d76c0  cmp edx, esi
    X86_AT(c, 0xd76c0u);
    (void)x86_sub(c, c.r[2], c.r[6], 0, 4);
    // 0d76c2  jl 0xd770f
    X86_AT(c, 0xd76c2u);
    if (x86_cc(c, 12)) { goto L_d770f; }
    X86_TICK(c, 7);
    // 0d76c4  jmp 0xd770d
    X86_AT(c, 0xd76c4u);
    goto L_d770d;
L_d76c6:
    X86_TICK(c, 12);
    // 0d76c6  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0xd76c6u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 0d76ca  jne 0xd76f5
    X86_AT(c, 0xd76cau);
    if (x86_cc(c, 5)) { goto L_d76f5; }
    X86_TICK(c, 20);
    // 0d76cc  push 0x200
    X86_AT(c, 0xd76ccu);
    { uint32_t v = 0x200u; push32(c, v); }
    // 0d76d1  push dword ptr [ebx + 8]
    X86_AT(c, 0xd76d1u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 0d76d4  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xd76d4u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0d76d7  push eax
    X86_AT(c, 0xd76d7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d76d8  call 0xda8a8
    X86_AT(c, 0xd76d8u);
    push32(c, 0xd76ddu); x86_call_known(c, 0xda8a8u, f_000da8a8); X86_RET(c, 0xd76ddu);
    X86_TICK(c, 22);
    // 0d76dd  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0xd76ddu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
    // 0d76e0  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0xd76e0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0d76e3  mov dword ptr [ebx], eax
    X86_AT(c, 0xd76e3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 0d76e5  mov word ptr [ebx + 0x10], 0xffff
    X86_AT(c, 0xd76e5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFFu);
    // 0d76eb  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0xd76ebu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 0d76ef  je 0xd77bb
    X86_AT(c, 0xd76efu);
    if (x86_cc(c, 4)) { goto L_d77bb; }
L_d76f5:
    X86_TICK(c, 28);
    // 0d76f5  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0xd76f5u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0d76f8  mov al, 0xa
    X86_AT(c, 0xd76f8u);
    s8(c, 0, 0xAu);
    // 0d76fa  mov ecx, dword ptr [ebx]
    X86_AT(c, 0xd76fau);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0d76fc  push edi
    X86_AT(c, 0xd76fcu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d76fd  mov edi, ecx
    X86_AT(c, 0xd76fdu);
    c.r[7] = c.r[1];
    // 0d76ff  mov ecx, edx
    X86_AT(c, 0xd76ffu);
    c.r[1] = c.r[2];
    // 0d7701  scasb al, byte ptr es:[edi]
    X86_AT(c, 0xd7701u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0d7703  jne 0xd7708
    X86_AT(c, 0xd7703u);
    if (x86_cc(c, 5)) { goto L_d7708; }
    X86_TICK(c, 4);
    // 0d7705  inc ecx
    X86_AT(c, 0xd7705u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0d7706  sub edx, ecx
    X86_AT(c, 0xd7706u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_d7708:
    X86_TICK(c, 11);
    // 0d7708  pop edi
    X86_AT(c, 0xd7708u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d7709  cmp edx, esi
    X86_AT(c, 0xd7709u);
    (void)x86_sub(c, c.r[2], c.r[6], 0, 4);
    // 0d770b  jb 0xd770f
    X86_AT(c, 0xd770bu);
    if (x86_cc(c, 2)) { goto L_d770f; }
L_d770d:
    X86_TICK(c, 2);
    // 0d770d  mov edx, esi
    X86_AT(c, 0xd770du);
    c.r[2] = c.r[6];
L_d770f:
    X86_TICK(c, 2);
    // 0d770f  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xd770fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
L_d7712:
    X86_TICK(c, 47);
    // 0d7712  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0xd7712u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d7715  mov eax, dword ptr [ebx]
    X86_AT(c, 0xd7715u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0d7717  push esi
    X86_AT(c, 0xd7717u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7718  push edi
    X86_AT(c, 0xd7718u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7719  mov esi, eax
    X86_AT(c, 0xd7719u);
    c.r[6] = c.r[0];
    // 0d771b  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xd771bu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0d771d  pop edi
    X86_AT(c, 0xd771du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d771e  pop esi
    X86_AT(c, 0xd771eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d771f  add edi, dword ptr [ebp - 4]
    X86_AT(c, 0xd771fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0d7722  cmp byte ptr [ebp + 0x14], 0
    X86_AT(c, 0xd7722u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0x0u, 0, 1);
    // 0d7726  je 0xd772b
    X86_AT(c, 0xd7726u);
    if (x86_cc(c, 4)) { goto L_d772b; }
    X86_TICK(c, 6);
    // 0d7728  sub esi, dword ptr [ebp - 4]
    X86_AT(c, 0xd7728u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
L_d772b:
    X86_TICK(c, 30);
    // 0d772b  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd772bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d772e  sub dword ptr [ebx + 4], eax
    X86_AT(c, 0xd772eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0d7731  add dword ptr [ebx], eax
    X86_AT(c, 0xd7731u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0d7733  test byte ptr [ebx + 0xc], 0x40
    X86_AT(c, 0xd7733u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x40u, 1);
    // 0d7737  je 0xd776f
    X86_AT(c, 0xd7737u);
    if (x86_cc(c, 4)) { goto L_d776f; }
    X86_TICK(c, 17);
    // 0d7739  movzx eax, word ptr [0xb4358]
    X86_AT(c, 0xd7739u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0xB4358u)));
    // 0d7740  cmp eax, dword ptr [ebx + 4]
    X86_AT(c, 0xd7740u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 0d7743  jg 0xd778c
    X86_AT(c, 0xd7743u);
    if (x86_cc(c, 15)) { goto L_d778c; }
    X86_TICK(c, 7);
    // 0d7745  and esi, esi
    X86_AT(c, 0xd7745u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d7747  jbe 0xd778c
    X86_AT(c, 0xd7747u);
    if (x86_cc(c, 6)) { goto L_d778c; }
    X86_TICK(c, 18);
    // 0d7749  push eax
    X86_AT(c, 0xd7749u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d774a  push 0xb435a
    X86_AT(c, 0xd774au);
    { uint32_t v = 0xB435Au; push32(c, v); }
    // 0d774f  push dword ptr [ebx]
    X86_AT(c, 0xd774fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3]))); push32(c, v); }
    // 0d7751  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xd7751u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0d7754  call 0xdabd4
    X86_AT(c, 0xd7754u);
    push32(c, 0xd7759u); x86_call_known(c, 0xdabd4u, f_000dabd4); X86_RET(c, 0xd7759u);
    X86_TICK(c, 7);
    // 0d7759  and ax, ax
    X86_AT(c, 0xd7759u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
    // 0d775c  jne 0xd778c
    X86_AT(c, 0xd775cu);
    if (x86_cc(c, 5)) { goto L_d778c; }
    X86_TICK(c, 31);
    // 0d775e  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xd775eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0d7761  add dword ptr [ebx], eax
    X86_AT(c, 0xd7761u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0d7763  movzx eax, word ptr [0xb4358]
    X86_AT(c, 0xd7763u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0xB4358u)));
    // 0d776a  sub dword ptr [ebx + 4], eax
    X86_AT(c, 0xd776au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0d776d  jmp 0xd7781
    X86_AT(c, 0xd776du);
    goto L_d7781;
L_d776f:
    X86_TICK(c, 12);
    // 0d776f  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0xd776fu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 0d7773  jle 0xd778c
    X86_AT(c, 0xd7773u);
    if (x86_cc(c, 14)) { goto L_d778c; }
    X86_TICK(c, 16);
    // 0d7775  mov eax, dword ptr [ebx]
    X86_AT(c, 0xd7775u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0d7777  cmp byte ptr [eax], 0xa
    X86_AT(c, 0xd7777u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0xAu, 0, 1);
    // 0d777a  jne 0xd778c
    X86_AT(c, 0xd777au);
    if (x86_cc(c, 5)) { goto L_d778c; }
    X86_TICK(c, 12);
    // 0d777c  inc dword ptr [ebx]
    X86_AT(c, 0xd777cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d777e  dec dword ptr [ebx + 4]
    X86_AT(c, 0xd777eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_d7781:
    X86_TICK(c, 12);
    // 0d7781  cmp byte ptr [ebp + 0x14], 0
    X86_AT(c, 0xd7781u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0x0u, 0, 1);
    // 0d7785  je 0xd77df
    X86_AT(c, 0xd7785u);
    if (x86_cc(c, 4)) { goto L_d77df; }
    X86_TICK(c, 9);
    // 0d7787  mov byte ptr [edi], 0xa
    X86_AT(c, 0xd7787u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0xAu);
    // 0d778a  jmp 0xd77e4
    X86_AT(c, 0xd778au);
    goto L_d77e4;
L_d778c:
    X86_TICK(c, 7);
    // 0d778c  and esi, esi
    X86_AT(c, 0xd778cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d778e  jne 0xd763c
    X86_AT(c, 0xd778eu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd763cu); goto L_d763c; }
    X86_TICK(c, 7);
    // 0d7794  jmp 0xd77bb
    X86_AT(c, 0xd7794u);
    goto L_d77bb;
L_d7796:
    X86_TICK(c, 18);
    // 0d7796  push dword ptr [ebp + 8]
    X86_AT(c, 0xd7796u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0d7799  push 1
    X86_AT(c, 0xd7799u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d779b  push 1
    X86_AT(c, 0xd779bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d779d  push edi
    X86_AT(c, 0xd779du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d779e  call 0xd7ce8
    X86_AT(c, 0xd779eu);
    push32(c, 0xd77a3u); x86_call_known(c, 0xd7ce8u, f_000d7ce8); X86_RET(c, 0xd77a3u);
    X86_TICK(c, 11);
    // 0d77a3  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xd77a3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0d77a6  add esp, 0x10
    X86_AT(c, 0xd77a6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d77a9  and eax, eax
    X86_AT(c, 0xd77a9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d77ab  jne 0xd77b1
    X86_AT(c, 0xd77abu);
    if (x86_cc(c, 5)) { goto L_d77b1; }
L_d77ad:
    X86_TICK(c, 9);
    // 0d77ad  sub eax, eax
    X86_AT(c, 0xd77adu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d77af  jmp 0xd780e
    X86_AT(c, 0xd77afu);
    goto L_d780e;
L_d77b1:
    X86_TICK(c, 12);
    // 0d77b1  cmp dword ptr [ebp - 8], 0
    X86_AT(c, 0xd77b1u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x0u, 0, 4);
    // 0d77b5  je 0xd77bb
    X86_AT(c, 0xd77b5u);
    if (x86_cc(c, 4)) { goto L_d77bb; }
    X86_TICK(c, 7);
    // 0d77b7  and esi, esi
    X86_AT(c, 0xd77b7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d77b9  jne 0xd77d4
    X86_AT(c, 0xd77b9u);
    if (x86_cc(c, 5)) { goto L_d77d4; }
L_d77bb:
    X86_TICK(c, 15);
    // 0d77bb  sub eax, eax
    X86_AT(c, 0xd77bbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d77bd  mov byte ptr [edi], al
    X86_AT(c, 0xd77bdu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), g8(c, 0));
    // 0d77bf  cmp ax, word ptr [0xb47e6]
    X86_AT(c, 0xd77bfu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(0xB47E6u))), 0, 2);
    // 0d77c6  jne 0xd780e
    X86_AT(c, 0xd77c6u);
    if (x86_cc(c, 5)) { goto L_d780e; }
    X86_TICK(c, 13);
    // 0d77c8  mov ax, word ptr [ebp - 0xa]
    X86_AT(c, 0xd77c8u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF6u))));
    // 0d77cc  mov word ptr [0xb47e6], ax
    X86_AT(c, 0xd77ccu);
    wr16((c.sbase[3] + (uint32_t)(0xB47E6u)), (c.r[0] & 0xFFFFu));
    // 0d77d2  jmp 0xd77e8
    X86_AT(c, 0xd77d2u);
    goto L_d77e8;
L_d77d4:
    X86_TICK(c, 12);
    // 0d77d4  cmp byte ptr [edi], 0xa
    X86_AT(c, 0xd77d4u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0xAu, 0, 1);
    // 0d77d7  jne 0xd77ed
    X86_AT(c, 0xd77d7u);
    if (x86_cc(c, 5)) { goto L_d77ed; }
L_d77d9:
    X86_TICK(c, 12);
    // 0d77d9  cmp byte ptr [ebp + 0x14], 0
    X86_AT(c, 0xd77d9u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0x0u, 0, 1);
    // 0d77dd  jne 0xd77e4
    X86_AT(c, 0xd77ddu);
    if (x86_cc(c, 5)) { goto L_d77e4; }
L_d77df:
    X86_TICK(c, 9);
    // 0d77df  mov byte ptr [edi], 0
    X86_AT(c, 0xd77dfu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0x0u);
    // 0d77e2  jmp 0xd77e8
    X86_AT(c, 0xd77e2u);
    goto L_d77e8;
L_d77e4:
    X86_TICK(c, 2);
    // 0d77e4  mov byte ptr [edi + 1], 0
    X86_AT(c, 0xd77e4u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)), 0x0u);
L_d77e8:
    X86_TICK(c, 11);
    // 0d77e8  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xd77e8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0d77eb  jmp 0xd780e
    X86_AT(c, 0xd77ebu);
    goto L_d780e;
L_d77ed:
    X86_TICK(c, 14);
    // 0d77ed  inc edi
    X86_AT(c, 0xd77edu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d77ee  cmp byte ptr [ebp + 0x14], 0
    X86_AT(c, 0xd77eeu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0x0u, 0, 1);
    // 0d77f2  je 0xd77f5
    X86_AT(c, 0xd77f2u);
    if (x86_cc(c, 4)) { goto L_d77f5; }
    X86_TICK(c, 2);
    // 0d77f4  dec esi
    X86_AT(c, 0xd77f4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_d77f5:
    X86_TICK(c, 7);
    // 0d77f5  and esi, esi
    X86_AT(c, 0xd77f5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d77f7  jbe 0xd77b1
    X86_AT(c, 0xd77f7u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0xd77b1u); goto L_d77b1; }
    X86_TICK(c, 18);
    // 0d77f9  push dword ptr [ebp + 8]
    X86_AT(c, 0xd77f9u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0d77fc  push 1
    X86_AT(c, 0xd77fcu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d77fe  push 1
    X86_AT(c, 0xd77feu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d7800  push edi
    X86_AT(c, 0xd7800u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7801  call 0xd7ce8
    X86_AT(c, 0xd7801u);
    push32(c, 0xd7806u); x86_call_known(c, 0xd7ce8u, f_000d7ce8); X86_RET(c, 0xd7806u);
    X86_TICK(c, 11);
    // 0d7806  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xd7806u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0d7809  add esp, 0x10
    X86_AT(c, 0xd7809u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d780c  jmp 0xd77b1
    X86_AT(c, 0xd780cu);
    X86_POLL(c, 0xd77b1u); goto L_d77b1;
L_d780e:
    X86_TICK(c, 28);
    // 0d780e  pop edi
    X86_AT(c, 0xd780eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d780f  pop esi
    X86_AT(c, 0xd780fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d7810  pop ebx
    X86_AT(c, 0xd7810u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d7811  leave 
    X86_AT(c, 0xd7811u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d7812  ret 0x10
    X86_AT(c, 0xd7812u);
    c.eip = pop32(c); c.r[4] += 0x10u; return;
    x86_fault(c, 0xd7598u, "ran off the end of a function");
}
void f_000d781c(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0d781c  push ebp
    X86_AT(c, 0xd781cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d781d  mov ebp, esp
    X86_AT(c, 0xd781du);
    c.r[5] = c.r[4];
    // 0d781f  push esi
    X86_AT(c, 0xd781fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7820  push edi
    X86_AT(c, 0xd7820u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7821  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xd7821u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d7824  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd7824u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d7827  cmp esi, 1
    X86_AT(c, 0xd7827u);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 0d782a  jl 0xd7834
    X86_AT(c, 0xd782au);
    if (x86_cc(c, 12)) { goto L_d7834; }
    X86_TICK(c, 7);
    // 0d782c  cmp esi, 1
    X86_AT(c, 0xd782cu);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 0d782f  jne 0xd7838
    X86_AT(c, 0xd782fu);
    if (x86_cc(c, 5)) { goto L_d7838; }
    X86_TICK(c, 2);
    // 0d7831  mov byte ptr [edi], 0
    X86_AT(c, 0xd7831u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0x0u);
L_d7834:
    X86_TICK(c, 9);
    // 0d7834  mov eax, edi
    X86_AT(c, 0xd7834u);
    c.r[0] = c.r[7];
    // 0d7836  jmp 0xd7847
    X86_AT(c, 0xd7836u);
    goto L_d7847;
L_d7838:
    X86_TICK(c, 20);
    // 0d7838  push 1
    X86_AT(c, 0xd7838u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d783a  lea eax, [esi - 1]
    X86_AT(c, 0xd783au);
    c.r[0] = (uint32_t)(c.r[6] + 0xFFFFFFFFu);
    // 0d783d  push eax
    X86_AT(c, 0xd783du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d783e  push edi
    X86_AT(c, 0xd783eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d783f  push dword ptr [ebp + 0x10]
    X86_AT(c, 0xd783fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 0d7842  call 0xd7598
    X86_AT(c, 0xd7842u);
    push32(c, 0xd7847u); x86_call_known(c, 0xd7598u, f_000d7598); X86_RET(c, 0xd7847u);
L_d7847:
    X86_TICK(c, 24);
    // 0d7847  pop edi
    X86_AT(c, 0xd7847u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d7848  pop esi
    X86_AT(c, 0xd7848u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d7849  leave 
    X86_AT(c, 0xd7849u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d784a  ret 
    X86_AT(c, 0xd784au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd781cu, "ran off the end of a function");
}
void f_000d7880(X86Cpu& c) {
    X86_TICK(c, 42);
    // 0d7880  enter 0x14, 0
    X86_AT(c, 0xd7880u);
    x86_enter(c, 0x14u, 0x0u, 4);
    // 0d7884  push ebx
    X86_AT(c, 0xd7884u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d7885  push esi
    X86_AT(c, 0xd7885u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7886  push edi
    X86_AT(c, 0xd7886u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7887  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xd7887u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0d788a  mov ax, word ptr [0xb47e6]
    X86_AT(c, 0xd788au);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xB47E6u))));
    // 0d7890  mov word ptr [ebp - 0xe], ax
    X86_AT(c, 0xd7890u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u)), (c.r[0] & 0xFFFFu));
    // 0d7894  sub eax, eax
    X86_AT(c, 0xd7894u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d7896  mov word ptr [0xb47e6], ax
    X86_AT(c, 0xd7896u);
    wr16((c.sbase[3] + (uint32_t)(0xB47E6u)), (c.r[0] & 0xFFFFu));
    // 0d789c  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0xd789cu);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d789f  test byte ptr [ebx + 0xc], 1
    X86_AT(c, 0xd789fu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x1u, 1);
    // 0d78a3  je 0xd7b95
    X86_AT(c, 0xd78a3u);
    if (x86_cc(c, 4)) { goto L_d7b95; }
    X86_TICK(c, 9);
    // 0d78a9  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd78a9u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d78ac  jmp 0xd7b76
    X86_AT(c, 0xd78acu);
    goto L_d7b76;
L_d78b1:
    X86_TICK(c, 12);
    // 0d78b1  test byte ptr [ebx + 0xc], 0x40
    X86_AT(c, 0xd78b1u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x40u, 1);
    // 0d78b5  je 0xd7aae
    X86_AT(c, 0xd78b5u);
    if (x86_cc(c, 4)) { goto L_d7aae; }
    X86_TICK(c, 12);
    // 0d78bb  cmp dword ptr [ebx + 4], 1
    X86_AT(c, 0xd78bbu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x1u, 0, 4);
    // 0d78bf  jne 0xd7906
    X86_AT(c, 0xd78bfu);
    if (x86_cc(c, 5)) { goto L_d7906; }
    X86_TICK(c, 12);
    // 0d78c1  cmp word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0xd78c1u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0xFFFEu, 0, 2);
    // 0d78c6  jne 0xd7906
    X86_AT(c, 0xd78c6u);
    if (x86_cc(c, 5)) { goto L_d7906; }
    X86_TICK(c, 12);
    // 0d78c8  test byte ptr [ebx + 0xd], 4
    X86_AT(c, 0xd78c8u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x4u, 1);
    // 0d78cc  jne 0xd7b4c
    X86_AT(c, 0xd78ccu);
    if (x86_cc(c, 5)) { goto L_d7b4c; }
    X86_TICK(c, 33);
    // 0d78d2  mov al, byte ptr [0xb435a]
    X86_AT(c, 0xd78d2u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xB435Au))));
    // 0d78d7  mov edx, dword ptr [ebx + 8]
    X86_AT(c, 0xd78d7u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0d78da  mov byte ptr [edx], al
    X86_AT(c, 0xd78dau);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 0d78dc  push 0x1ff
    X86_AT(c, 0xd78dcu);
    { uint32_t v = 0x1FFu; push32(c, v); }
    // 0d78e1  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0xd78e1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0d78e4  inc eax
    X86_AT(c, 0xd78e4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d78e5  push eax
    X86_AT(c, 0xd78e5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d78e6  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xd78e6u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0d78e9  push eax
    X86_AT(c, 0xd78e9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d78ea  call 0xda8a8
    X86_AT(c, 0xd78eau);
    push32(c, 0xd78efu); x86_call_known(c, 0xda8a8u, f_000da8a8); X86_RET(c, 0xd78efu);
    X86_TICK(c, 11);
    // 0d78ef  inc eax
    X86_AT(c, 0xd78efu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d78f0  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0xd78f0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
    // 0d78f3  dec eax
    X86_AT(c, 0xd78f3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0d78f4  jne 0xd793e
    X86_AT(c, 0xd78f4u);
    if (x86_cc(c, 5)) { goto L_d793e; }
    X86_TICK(c, 15);
    // 0d78f6  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0xd78f6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0d78f9  mov dword ptr [ebx], eax
    X86_AT(c, 0xd78f9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 0d78fb  mov word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0xd78fbu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0x200u);
    // 0d7901  jmp 0xd7b4c
    X86_AT(c, 0xd7901u);
    goto L_d7b4c;
L_d7906:
    X86_TICK(c, 12);
    // 0d7906  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0xd7906u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 0d790a  jne 0xd7983
    X86_AT(c, 0xd790au);
    if (x86_cc(c, 5)) { goto L_d7983; }
    X86_TICK(c, 12);
    // 0d7910  test byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0xd7910u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x10u, 1);
    // 0d7914  jne 0xd7b7e
    X86_AT(c, 0xd7914u);
    if (x86_cc(c, 5)) { goto L_d7b7e; }
    X86_TICK(c, 12);
    // 0d791a  test byte ptr [ebx + 0xd], 4
    X86_AT(c, 0xd791au);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x4u, 1);
    // 0d791e  jne 0xd7934
    X86_AT(c, 0xd791eu);
    if (x86_cc(c, 5)) { goto L_d7934; }
    X86_TICK(c, 20);
    // 0d7920  push 0x200
    X86_AT(c, 0xd7920u);
    { uint32_t v = 0x200u; push32(c, v); }
    // 0d7925  push dword ptr [ebx + 8]
    X86_AT(c, 0xd7925u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 0d7928  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xd7928u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0d792b  push eax
    X86_AT(c, 0xd792bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d792c  call 0xda8a8
    X86_AT(c, 0xd792cu);
    push32(c, 0xd7931u); x86_call_known(c, 0xda8a8u, f_000da8a8); X86_RET(c, 0xd7931u);
    X86_TICK(c, 2);
    // 0d7931  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0xd7931u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
L_d7934:
    X86_TICK(c, 12);
    // 0d7934  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0xd7934u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 0d7938  je 0xd7b7e
    X86_AT(c, 0xd7938u);
    if (x86_cc(c, 4)) { goto L_d7b7e; }
L_d793e:
    X86_TICK(c, 28);
    // 0d793e  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0xd793eu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0d7941  mov al, 0x1a
    X86_AT(c, 0xd7941u);
    s8(c, 0, 0x1Au);
    // 0d7943  mov ecx, dword ptr [ebx + 8]
    X86_AT(c, 0xd7943u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0d7946  push edi
    X86_AT(c, 0xd7946u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7947  mov edi, ecx
    X86_AT(c, 0xd7947u);
    c.r[7] = c.r[1];
    // 0d7949  mov ecx, edx
    X86_AT(c, 0xd7949u);
    c.r[1] = c.r[2];
    // 0d794b  scasb al, byte ptr es:[edi]
    X86_AT(c, 0xd794bu);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0d794d  jne 0xd7952
    X86_AT(c, 0xd794du);
    if (x86_cc(c, 5)) { goto L_d7952; }
    X86_TICK(c, 4);
    // 0d794f  inc ecx
    X86_AT(c, 0xd794fu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0d7950  sub edx, ecx
    X86_AT(c, 0xd7950u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_d7952:
    X86_TICK(c, 17);
    // 0d7952  pop edi
    X86_AT(c, 0xd7952u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d7953  mov word ptr [ebp - 0x10], dx
    X86_AT(c, 0xd7953u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), (c.r[2] & 0xFFFFu));
    // 0d7957  cmp edx, dword ptr [ebx + 4]
    X86_AT(c, 0xd7957u);
    (void)x86_sub(c, c.r[2], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 0d795a  je 0xd7978
    X86_AT(c, 0xd795au);
    if (x86_cc(c, 4)) { goto L_d7978; }
    X86_TICK(c, 32);
    // 0d795c  or byte ptr [ebx + 0xd], 4
    X86_AT(c, 0xd795cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x4u, 1)); }
    // 0d7960  push 1
    X86_AT(c, 0xd7960u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d7962  mov dword ptr [ebp - 0x14], edx
    X86_AT(c, 0xd7962u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[2]);
    // 0d7965  sub edx, dword ptr [ebx + 4]
    X86_AT(c, 0xd7965u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4); }
    // 0d7968  push edx
    X86_AT(c, 0xd7968u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d7969  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xd7969u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0d796c  push eax
    X86_AT(c, 0xd796cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d796d  call 0xda980
    X86_AT(c, 0xd796du);
    push32(c, 0xd7972u); x86_call_known(c, 0xda980u, f_000da980); X86_RET(c, 0xd7972u);
    X86_TICK(c, 6);
    // 0d7972  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xd7972u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0d7975  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0xd7975u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
L_d7978:
    X86_TICK(c, 8);
    // 0d7978  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0xd7978u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0d797b  mov dword ptr [ebx], eax
    X86_AT(c, 0xd797bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 0d797d  mov word ptr [ebx + 0x10], 0xffff
    X86_AT(c, 0xd797du);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFFu);
L_d7983:
    X86_TICK(c, 12);
    // 0d7983  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0xd7983u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 0d7987  jle 0xd7b76
    X86_AT(c, 0xd7987u);
    if (x86_cc(c, 14)) { goto L_d7b76; }
    X86_TICK(c, 11);
    // 0d798d  mov ax, word ptr [ebx + 0x10]
    X86_AT(c, 0xd798du);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))));
    // 0d7991  cmp ax, 0xffff
    X86_AT(c, 0xd7991u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0xFFFFu, 0, 2);
    // 0d7995  je 0xd79a5
    X86_AT(c, 0xd7995u);
    if (x86_cc(c, 4)) { goto L_d79a5; }
    X86_TICK(c, 20);
    // 0d7997  movsx eax, ax
    X86_AT(c, 0xd7997u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 0d799a  add eax, dword ptr [ebx + 8]
    X86_AT(c, 0xd799au);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 0d799d  cmp eax, dword ptr [ebx]
    X86_AT(c, 0xd799du);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4);
    // 0d799f  jge 0xd7a3c
    X86_AT(c, 0xd799fu);
    if (x86_cc(c, 13)) { goto L_d7a3c; }
L_d79a5:
    X86_TICK(c, 30);
    // 0d79a5  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0xd79a5u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0d79a8  mov al, byte ptr [0xb435a]
    X86_AT(c, 0xd79a8u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xB435Au))));
    // 0d79ad  mov ecx, dword ptr [ebx]
    X86_AT(c, 0xd79adu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0d79af  push edi
    X86_AT(c, 0xd79afu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d79b0  mov edi, ecx
    X86_AT(c, 0xd79b0u);
    c.r[7] = c.r[1];
    // 0d79b2  mov ecx, edx
    X86_AT(c, 0xd79b2u);
    c.r[1] = c.r[2];
    // 0d79b4  scasb al, byte ptr es:[edi]
    X86_AT(c, 0xd79b4u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0d79b6  jne 0xd79bb
    X86_AT(c, 0xd79b6u);
    if (x86_cc(c, 5)) { goto L_d79bb; }
    X86_TICK(c, 4);
    // 0d79b8  inc ecx
    X86_AT(c, 0xd79b8u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0d79b9  sub edx, ecx
    X86_AT(c, 0xd79b9u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_d79bb:
    X86_TICK(c, 13);
    // 0d79bb  pop edi
    X86_AT(c, 0xd79bbu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d79bc  mov word ptr [ebx + 0x10], dx
    X86_AT(c, 0xd79bcu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), (c.r[2] & 0xFFFFu));
    // 0d79c0  jmp 0xd79f5
    X86_AT(c, 0xd79c0u);
    goto L_d79f5;
L_d79c2:
    X86_TICK(c, 59);
    // 0d79c2  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0xd79c2u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 0d79c6  add eax, dword ptr [ebx]
    X86_AT(c, 0xd79c6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4); }
    // 0d79c8  inc eax
    X86_AT(c, 0xd79c8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d79c9  mov dx, word ptr [ebx + 0x10]
    X86_AT(c, 0xd79c9u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))));
    // 0d79cd  inc edx
    X86_AT(c, 0xd79cdu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0d79ce  movsx edx, dx
    X86_AT(c, 0xd79ceu);
    c.r[2] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 0d79d1  mov ecx, dword ptr [ebx + 4]
    X86_AT(c, 0xd79d1u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0d79d4  sub ecx, edx
    X86_AT(c, 0xd79d4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0d79d6  mov edx, ecx
    X86_AT(c, 0xd79d6u);
    c.r[2] = c.r[1];
    // 0d79d8  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xd79d8u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0d79db  mov al, byte ptr [0xb435a]
    X86_AT(c, 0xd79dbu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xB435Au))));
    // 0d79e0  mov ecx, dword ptr [ebp - 0x14]
    X86_AT(c, 0xd79e0u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0d79e3  push edi
    X86_AT(c, 0xd79e3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d79e4  mov edi, ecx
    X86_AT(c, 0xd79e4u);
    c.r[7] = c.r[1];
    // 0d79e6  mov ecx, edx
    X86_AT(c, 0xd79e6u);
    c.r[1] = c.r[2];
    // 0d79e8  scasb al, byte ptr es:[edi]
    X86_AT(c, 0xd79e8u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0d79ea  jne 0xd79ef
    X86_AT(c, 0xd79eau);
    if (x86_cc(c, 5)) { goto L_d79ef; }
    X86_TICK(c, 4);
    // 0d79ec  inc ecx
    X86_AT(c, 0xd79ecu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0d79ed  sub edx, ecx
    X86_AT(c, 0xd79edu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_d79ef:
    X86_TICK(c, 13);
    // 0d79ef  pop edi
    X86_AT(c, 0xd79efu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d79f0  inc edx
    X86_AT(c, 0xd79f0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0d79f1  add word ptr [ebx + 0x10], dx
    X86_AT(c, 0xd79f1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
L_d79f5:
    X86_TICK(c, 19);
    // 0d79f5  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0xd79f5u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 0d79f9  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0xd79f9u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0d79fc  dec edx
    X86_AT(c, 0xd79fcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0d79fd  cmp edx, eax
    X86_AT(c, 0xd79fdu);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0d79ff  jle 0xd7a0e
    X86_AT(c, 0xd79ffu);
    if (x86_cc(c, 14)) { goto L_d7a0e; }
    X86_TICK(c, 23);
    // 0d7a01  add eax, dword ptr [ebx]
    X86_AT(c, 0xd7a01u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4); }
    // 0d7a03  inc eax
    X86_AT(c, 0xd7a03u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d7a04  mov al, byte ptr [eax]
    X86_AT(c, 0xd7a04u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0d7a06  cmp al, byte ptr [0xb435b]
    X86_AT(c, 0xd7a06u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(0xB435Bu))), 0, 1);
    // 0d7a0c  jne 0xd79c2
    X86_AT(c, 0xd7a0cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd79c2u); goto L_d79c2; }
L_d7a0e:
    X86_TICK(c, 17);
    // 0d7a0e  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0xd7a0eu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 0d7a12  cmp eax, dword ptr [ebx + 4]
    X86_AT(c, 0xd7a12u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 0d7a15  jne 0xd7a1f
    X86_AT(c, 0xd7a15u);
    if (x86_cc(c, 5)) { goto L_d7a1f; }
    X86_TICK(c, 9);
    // 0d7a17  mov word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0xd7a17u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0x200u);
    // 0d7a1d  jmp 0xd7a3c
    X86_AT(c, 0xd7a1du);
    goto L_d7a3c;
L_d7a1f:
    X86_TICK(c, 19);
    // 0d7a1f  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0xd7a1fu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 0d7a23  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0xd7a23u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0d7a26  dec edx
    X86_AT(c, 0xd7a26u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0d7a27  cmp edx, eax
    X86_AT(c, 0xd7a27u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0d7a29  jne 0xd7a33
    X86_AT(c, 0xd7a29u);
    if (x86_cc(c, 5)) { goto L_d7a33; }
    X86_TICK(c, 9);
    // 0d7a2b  mov word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0xd7a2bu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFEu);
    // 0d7a31  jmp 0xd7a3c
    X86_AT(c, 0xd7a31u);
    goto L_d7a3c;
L_d7a33:
    X86_TICK(c, 17);
    // 0d7a33  mov eax, dword ptr [ebx]
    X86_AT(c, 0xd7a33u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0d7a35  sub eax, dword ptr [ebx + 8]
    X86_AT(c, 0xd7a35u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 0d7a38  add word ptr [ebx + 0x10], ax
    X86_AT(c, 0xd7a38u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_d7a3c:
    X86_TICK(c, 12);
    // 0d7a3c  cmp word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0xd7a3cu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0x200u, 0, 2);
    // 0d7a42  je 0xd7b4c
    X86_AT(c, 0xd7a42u);
    if (x86_cc(c, 4)) { goto L_d7b4c; }
    X86_TICK(c, 12);
    // 0d7a48  cmp word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0xd7a48u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0xFFFEu, 0, 2);
    // 0d7a4d  jne 0xd7a5d
    X86_AT(c, 0xd7a4du);
    if (x86_cc(c, 5)) { goto L_d7a5d; }
    X86_TICK(c, 11);
    // 0d7a4f  cmp edi, dword ptr [ebx + 4]
    X86_AT(c, 0xd7a4fu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 0d7a52  jl 0xd7aa7
    X86_AT(c, 0xd7a52u);
    if (x86_cc(c, 12)) { goto L_d7aa7; }
    X86_TICK(c, 13);
    // 0d7a54  mov esi, dword ptr [ebx + 4]
    X86_AT(c, 0xd7a54u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0d7a57  dec esi
    X86_AT(c, 0xd7a57u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0d7a58  jmp 0xd7b58
    X86_AT(c, 0xd7a58u);
    goto L_d7b58;
L_d7a5d:
    X86_TICK(c, 25);
    // 0d7a5d  mov eax, dword ptr [ebx]
    X86_AT(c, 0xd7a5du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0d7a5f  sub eax, dword ptr [ebx + 8]
    X86_AT(c, 0xd7a5fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 0d7a62  movsx esi, word ptr [ebx + 0x10]
    X86_AT(c, 0xd7a62u);
    c.r[6] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 0d7a66  sub esi, eax
    X86_AT(c, 0xd7a66u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d7a68  cmp edi, esi
    X86_AT(c, 0xd7a68u);
    (void)x86_sub(c, c.r[7], c.r[6], 0, 4);
    // 0d7a6a  jbe 0xd7aa7
    X86_AT(c, 0xd7a6au);
    if (x86_cc(c, 6)) { goto L_d7aa7; }
    X86_TICK(c, 87);
    // 0d7a6c  mov ecx, esi
    X86_AT(c, 0xd7a6cu);
    c.r[1] = c.r[6];
    // 0d7a6e  mov eax, dword ptr [ebx]
    X86_AT(c, 0xd7a6eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0d7a70  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd7a70u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d7a73  mov dword ptr [ebp - 0x14], edi
    X86_AT(c, 0xd7a73u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[7]);
    // 0d7a76  mov edi, dword ptr [ebp - 4]
    X86_AT(c, 0xd7a76u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d7a79  lea edx, [edx + edi*1]
    X86_AT(c, 0xd7a79u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[7]);
    // 0d7a7c  push esi
    X86_AT(c, 0xd7a7cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7a7d  push edi
    X86_AT(c, 0xd7a7du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7a7e  mov esi, eax
    X86_AT(c, 0xd7a7eu);
    c.r[6] = c.r[0];
    // 0d7a80  mov edi, edx
    X86_AT(c, 0xd7a80u);
    c.r[7] = c.r[2];
    // 0d7a82  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xd7a82u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0d7a84  pop edi
    X86_AT(c, 0xd7a84u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d7a85  pop esi
    X86_AT(c, 0xd7a85u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d7a86  add edi, esi
    X86_AT(c, 0xd7a86u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[6], 0, 4); }
    // 0d7a88  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd7a88u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d7a8b  mov byte ptr [eax + edi*1], 0xa
    X86_AT(c, 0xd7a8bu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7])), 0xAu);
    // 0d7a8f  lea eax, [esi + 1]
    X86_AT(c, 0xd7a8fu);
    c.r[0] = (uint32_t)(c.r[6] + 0x1u);
    // 0d7a92  add dword ptr [ebp - 4], eax
    X86_AT(c, 0xd7a92u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0d7a95  mov edi, dword ptr [ebp - 0x14]
    X86_AT(c, 0xd7a95u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0d7a98  sub edi, eax
    X86_AT(c, 0xd7a98u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d7a9a  lea eax, [esi + 2]
    X86_AT(c, 0xd7a9au);
    c.r[0] = (uint32_t)(c.r[6] + 0x2u);
    // 0d7a9d  sub dword ptr [ebx + 4], eax
    X86_AT(c, 0xd7a9du);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0d7aa0  add dword ptr [ebx], eax
    X86_AT(c, 0xd7aa0u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0d7aa2  jmp 0xd7b76
    X86_AT(c, 0xd7aa2u);
    goto L_d7b76;
L_d7aa7:
    X86_TICK(c, 9);
    // 0d7aa7  mov esi, edi
    X86_AT(c, 0xd7aa7u);
    c.r[6] = c.r[7];
    // 0d7aa9  jmp 0xd7b58
    X86_AT(c, 0xd7aa9u);
    goto L_d7b58;
L_d7aae:
    X86_TICK(c, 13);
    // 0d7aae  mov word ptr [ebx + 0x10], 0xffff
    X86_AT(c, 0xd7aaeu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFFu);
    // 0d7ab4  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0xd7ab4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0d7ab7  cmp edi, eax
    X86_AT(c, 0xd7ab7u);
    (void)x86_sub(c, c.r[7], c.r[0], 0, 4);
    // 0d7ab9  jl 0xd7adf
    X86_AT(c, 0xd7ab9u);
    if (x86_cc(c, 12)) { goto L_d7adf; }
    X86_TICK(c, 7);
    // 0d7abb  and eax, eax
    X86_AT(c, 0xd7abbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d7abd  jle 0xd7adf
    X86_AT(c, 0xd7abdu);
    if (x86_cc(c, 14)) { goto L_d7adf; }
    X86_TICK(c, 53);
    // 0d7abf  xchg ecx, eax
    X86_AT(c, 0xd7abfu);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
    // 0d7ac0  mov eax, dword ptr [ebx]
    X86_AT(c, 0xd7ac0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0d7ac2  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd7ac2u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d7ac5  push esi
    X86_AT(c, 0xd7ac5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7ac6  push edi
    X86_AT(c, 0xd7ac6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7ac7  mov esi, eax
    X86_AT(c, 0xd7ac7u);
    c.r[6] = c.r[0];
    // 0d7ac9  mov edi, edx
    X86_AT(c, 0xd7ac9u);
    c.r[7] = c.r[2];
    // 0d7acb  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xd7acbu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0d7acd  pop edi
    X86_AT(c, 0xd7acdu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d7ace  pop esi
    X86_AT(c, 0xd7aceu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d7acf  sub edi, dword ptr [ebx + 4]
    X86_AT(c, 0xd7acfu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4); }
    // 0d7ad2  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0xd7ad2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0d7ad5  add dword ptr [ebp - 4], eax
    X86_AT(c, 0xd7ad5u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0d7ad8  mov dword ptr [ebx + 4], 0
    X86_AT(c, 0xd7ad8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0x0u);
L_d7adf:
    X86_TICK(c, 7);
    // 0d7adf  cmp edi, 0x200
    X86_AT(c, 0xd7adfu);
    (void)x86_sub(c, c.r[7], 0x200u, 0, 4);
    // 0d7ae5  jb 0xd7b1d
    X86_AT(c, 0xd7ae5u);
    if (x86_cc(c, 2)) { goto L_d7b1d; }
    X86_TICK(c, 10);
    // 0d7ae7  mov esi, edi
    X86_AT(c, 0xd7ae7u);
    c.r[6] = c.r[7];
    // 0d7ae9  shr esi, 9
    X86_AT(c, 0xd7ae9u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 5, v, 0x9u, 4, w); if (w) c.r[6] = r; }
    // 0d7aec  shl esi, 9
    X86_AT(c, 0xd7aecu);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[6] = r; }
    // 0d7aef  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xd7aefu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
L_d7af6:
    X86_TICK(c, 27);
    // 0d7af6  push esi
    X86_AT(c, 0xd7af6u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7af7  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd7af7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d7afa  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd7afau);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0d7afd  push eax
    X86_AT(c, 0xd7afdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7afe  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xd7afeu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0d7b01  push eax
    X86_AT(c, 0xd7b01u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7b02  call 0xda8a8
    X86_AT(c, 0xd7b02u);
    push32(c, 0xd7b07u); x86_call_known(c, 0xda8a8u, f_000da8a8); X86_RET(c, 0xd7b07u);
    X86_TICK(c, 25);
    // 0d7b07  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xd7b07u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0d7b0a  add dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xd7b0au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0d7b0d  sub esi, eax
    X86_AT(c, 0xd7b0du);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d7b0f  add dword ptr [ebp - 4], eax
    X86_AT(c, 0xd7b0fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0d7b12  and esi, esi
    X86_AT(c, 0xd7b12u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d7b14  je 0xd7b1a
    X86_AT(c, 0xd7b14u);
    if (x86_cc(c, 4)) { goto L_d7b1a; }
    X86_TICK(c, 7);
    // 0d7b16  and eax, eax
    X86_AT(c, 0xd7b16u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d7b18  jne 0xd7af6
    X86_AT(c, 0xd7b18u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd7af6u); goto L_d7af6; }
L_d7b1a:
    X86_TICK(c, 6);
    // 0d7b1a  sub edi, dword ptr [ebp - 0xc]
    X86_AT(c, 0xd7b1au);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 4); }
L_d7b1d:
    X86_TICK(c, 7);
    // 0d7b1d  and edi, edi
    X86_AT(c, 0xd7b1du);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0d7b1f  jbe 0xd7b76
    X86_AT(c, 0xd7b1fu);
    if (x86_cc(c, 6)) { goto L_d7b76; }
    X86_TICK(c, 12);
    // 0d7b21  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0xd7b21u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 0d7b25  jne 0xd7b46
    X86_AT(c, 0xd7b25u);
    if (x86_cc(c, 5)) { goto L_d7b46; }
    X86_TICK(c, 12);
    // 0d7b27  test byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0xd7b27u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x10u, 1);
    // 0d7b2b  jne 0xd7b7e
    X86_AT(c, 0xd7b2bu);
    if (x86_cc(c, 5)) { goto L_d7b7e; }
    X86_TICK(c, 20);
    // 0d7b2d  push 0x200
    X86_AT(c, 0xd7b2du);
    { uint32_t v = 0x200u; push32(c, v); }
    // 0d7b32  push dword ptr [ebx + 8]
    X86_AT(c, 0xd7b32u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 0d7b35  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xd7b35u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0d7b38  push eax
    X86_AT(c, 0xd7b38u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7b39  call 0xda8a8
    X86_AT(c, 0xd7b39u);
    push32(c, 0xd7b3eu); x86_call_known(c, 0xda8a8u, f_000da8a8); X86_RET(c, 0xd7b3eu);
    X86_TICK(c, 8);
    // 0d7b3e  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0xd7b3eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
    // 0d7b41  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0xd7b41u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0d7b44  mov dword ptr [ebx], eax
    X86_AT(c, 0xd7b44u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
L_d7b46:
    X86_TICK(c, 12);
    // 0d7b46  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0xd7b46u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 0d7b4a  jle 0xd7b7e
    X86_AT(c, 0xd7b4au);
    if (x86_cc(c, 14)) { goto L_d7b7e; }
L_d7b4c:
    X86_TICK(c, 13);
    // 0d7b4c  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0xd7b4cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0d7b4f  mov edx, edi
    X86_AT(c, 0xd7b4fu);
    c.r[2] = c.r[7];
    // 0d7b51  cmp edx, eax
    X86_AT(c, 0xd7b51u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0d7b53  jl 0xd7b56
    X86_AT(c, 0xd7b53u);
    if (x86_cc(c, 12)) { goto L_d7b56; }
    X86_TICK(c, 3);
    // 0d7b55  xchg edx, eax
    X86_AT(c, 0xd7b55u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_d7b56:
    X86_TICK(c, 2);
    // 0d7b56  mov esi, edx
    X86_AT(c, 0xd7b56u);
    c.r[6] = c.r[2];
L_d7b58:
    X86_TICK(c, 62);
    // 0d7b58  mov ecx, esi
    X86_AT(c, 0xd7b58u);
    c.r[1] = c.r[6];
    // 0d7b5a  mov eax, dword ptr [ebx]
    X86_AT(c, 0xd7b5au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0d7b5c  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd7b5cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d7b5f  add edx, dword ptr [ebp - 4]
    X86_AT(c, 0xd7b5fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0d7b62  push esi
    X86_AT(c, 0xd7b62u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7b63  push edi
    X86_AT(c, 0xd7b63u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7b64  mov esi, eax
    X86_AT(c, 0xd7b64u);
    c.r[6] = c.r[0];
    // 0d7b66  mov edi, edx
    X86_AT(c, 0xd7b66u);
    c.r[7] = c.r[2];
    // 0d7b68  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xd7b68u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0d7b6a  pop edi
    X86_AT(c, 0xd7b6au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d7b6b  pop esi
    X86_AT(c, 0xd7b6bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d7b6c  add dword ptr [ebp - 4], esi
    X86_AT(c, 0xd7b6cu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 0d7b6f  sub dword ptr [ebx + 4], esi
    X86_AT(c, 0xd7b6fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[6], 0, 4)); }
    // 0d7b72  sub edi, esi
    X86_AT(c, 0xd7b72u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0d7b74  add dword ptr [ebx], esi
    X86_AT(c, 0xd7b74u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
L_d7b76:
    X86_TICK(c, 7);
    // 0d7b76  and edi, edi
    X86_AT(c, 0xd7b76u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0d7b78  ja 0xd78b1
    X86_AT(c, 0xd7b78u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0xd78b1u); goto L_d78b1; }
L_d7b7e:
    X86_TICK(c, 12);
    // 0d7b7e  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0xd7b7eu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 0d7b82  jne 0xd7b88
    X86_AT(c, 0xd7b82u);
    if (x86_cc(c, 5)) { goto L_d7b88; }
    X86_TICK(c, 7);
    // 0d7b84  or byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0xd7b84u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x10u, 1)); }
L_d7b88:
    X86_TICK(c, 13);
    // 0d7b88  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd7b88u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d7b8b  mov dword ptr [0xb4370], eax
    X86_AT(c, 0xd7b8bu);
    wr32((c.sbase[3] + (uint32_t)(0xB4370u)), c.r[0]);
    // 0d7b90  jmp 0xd7cc0
    X86_AT(c, 0xd7b90u);
    goto L_d7cc0;
L_d7b95:
    X86_TICK(c, 14);
    // 0d7b95  mov dword ptr [0xb4370], 0
    X86_AT(c, 0xd7b95u);
    wr32((c.sbase[3] + (uint32_t)(0xB4370u)), 0x0u);
    // 0d7b9f  test byte ptr [ebx + 0xc], 0x40
    X86_AT(c, 0xd7b9fu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x40u, 1);
    // 0d7ba3  je 0xd7cab
    X86_AT(c, 0xd7ba3u);
    if (x86_cc(c, 4)) { goto L_d7cab; }
    X86_TICK(c, 12);
    // 0d7ba9  test byte ptr [ebx + 0xd], 4
    X86_AT(c, 0xd7ba9u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x4u, 1);
    // 0d7bad  jne 0xd7caf
    X86_AT(c, 0xd7badu);
    if (x86_cc(c, 5)) { goto L_d7caf; }
    X86_TICK(c, 7);
    // 0d7bb3  jmp 0xd7c7d
    X86_AT(c, 0xd7bb3u);
    goto L_d7c7d;
L_d7bb8:
    X86_TICK(c, 19);
    // 0d7bb8  push 1
    X86_AT(c, 0xd7bb8u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d7bba  lea eax, [ebp - 0xf]
    X86_AT(c, 0xd7bbau);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF1u);
    // 0d7bbd  push eax
    X86_AT(c, 0xd7bbdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7bbe  mov dl, byte ptr [ebx + 0xe]
    X86_AT(c, 0xd7bbeu);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0d7bc1  push edx
    X86_AT(c, 0xd7bc1u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d7bc2  call 0xda8a8
    X86_AT(c, 0xd7bc2u);
    push32(c, 0xd7bc7u); x86_call_known(c, 0xda8a8u, f_000da8a8); X86_RET(c, 0xd7bc7u);
    X86_TICK(c, 10);
    // 0d7bc7  xchg esi, eax
    X86_AT(c, 0xd7bc7u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0d7bc8  and esi, esi
    X86_AT(c, 0xd7bc8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d7bca  je 0xd7c22
    X86_AT(c, 0xd7bcau);
    if (x86_cc(c, 4)) { goto L_d7c22; }
    X86_TICK(c, 12);
    // 0d7bcc  cmp byte ptr [ebp - 0xf], 0x1a
    X86_AT(c, 0xd7bccu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u))), 0x1Au, 0, 1);
    // 0d7bd0  je 0xd7c22
    X86_AT(c, 0xd7bd0u);
    if (x86_cc(c, 4)) { goto L_d7c22; }
L_d7bd2:
    X86_TICK(c, 15);
    // 0d7bd2  mov al, byte ptr [ebp - 0xf]
    X86_AT(c, 0xd7bd2u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u))));
    // 0d7bd5  cmp al, byte ptr [0xb435a]
    X86_AT(c, 0xd7bd5u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(0xB435Au))), 0, 1);
    // 0d7bdb  jne 0xd7c6c
    X86_AT(c, 0xd7bdbu);
    if (x86_cc(c, 5)) { goto L_d7c6c; }
    X86_TICK(c, 13);
    // 0d7be1  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xd7be1u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0d7be4  push eax
    X86_AT(c, 0xd7be4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7be5  call 0xda938
    X86_AT(c, 0xd7be5u);
    push32(c, 0xd7beau); x86_call_known(c, 0xda938u, f_000da938); X86_RET(c, 0xd7beau);
    X86_TICK(c, 7);
    // 0d7bea  dec al
    X86_AT(c, 0xd7beau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0d7bec  je 0xd7c36
    X86_AT(c, 0xd7becu);
    if (x86_cc(c, 4)) { goto L_d7c36; }
    X86_TICK(c, 19);
    // 0d7bee  push 1
    X86_AT(c, 0xd7beeu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d7bf0  lea eax, [ebp - 0xf]
    X86_AT(c, 0xd7bf0u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF1u);
    // 0d7bf3  push eax
    X86_AT(c, 0xd7bf3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7bf4  mov dl, byte ptr [ebx + 0xe]
    X86_AT(c, 0xd7bf4u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0d7bf7  push edx
    X86_AT(c, 0xd7bf7u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d7bf8  call 0xda8a8
    X86_AT(c, 0xd7bf8u);
    push32(c, 0xd7bfdu); x86_call_known(c, 0xda8a8u, f_000da8a8); X86_RET(c, 0xd7bfdu);
    X86_TICK(c, 10);
    // 0d7bfd  xchg esi, eax
    X86_AT(c, 0xd7bfdu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0d7bfe  and esi, esi
    X86_AT(c, 0xd7bfeu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d7c00  je 0xd7c08
    X86_AT(c, 0xd7c00u);
    if (x86_cc(c, 4)) { goto L_d7c08; }
    X86_TICK(c, 12);
    // 0d7c02  cmp byte ptr [ebp - 0xf], 0x1a
    X86_AT(c, 0xd7c02u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u))), 0x1Au, 0, 1);
    // 0d7c06  jne 0xd7c2b
    X86_AT(c, 0xd7c06u);
    if (x86_cc(c, 5)) { goto L_d7c2b; }
L_d7c08:
    X86_TICK(c, 28);
    // 0d7c08  mov al, byte ptr [0xb435a]
    X86_AT(c, 0xd7c08u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xB435Au))));
    // 0d7c0d  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd7c0du);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d7c10  mov byte ptr [edx], al
    X86_AT(c, 0xd7c10u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 0d7c12  inc dword ptr [0xb4370]
    X86_AT(c, 0xd7c12u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4370u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d7c18  cmp byte ptr [ebp - 0xf], 0x1a
    X86_AT(c, 0xd7c18u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u))), 0x1Au, 0, 1);
    // 0d7c1c  jne 0xd7caf
    X86_AT(c, 0xd7c1cu);
    if (x86_cc(c, 5)) { goto L_d7caf; }
L_d7c22:
    X86_TICK(c, 14);
    // 0d7c22  or byte ptr [ebx + 0xd], 4
    X86_AT(c, 0xd7c22u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x4u, 1)); }
    // 0d7c26  jmp 0xd7caf
    X86_AT(c, 0xd7c26u);
    goto L_d7caf;
L_d7c2b:
    X86_TICK(c, 15);
    // 0d7c2b  mov al, byte ptr [ebp - 0xf]
    X86_AT(c, 0xd7c2bu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u))));
    // 0d7c2e  cmp al, byte ptr [0xb435b]
    X86_AT(c, 0xd7c2eu);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(0xB435Bu))), 0, 1);
    // 0d7c34  jne 0xd7c3e
    X86_AT(c, 0xd7c34u);
    if (x86_cc(c, 5)) { goto L_d7c3e; }
L_d7c36:
    X86_TICK(c, 13);
    // 0d7c36  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd7c36u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d7c39  mov byte ptr [eax], 0xa
    X86_AT(c, 0xd7c39u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), 0xAu);
    // 0d7c3c  jmp 0xd7c74
    X86_AT(c, 0xd7c3cu);
    goto L_d7c74;
L_d7c3e:
    X86_TICK(c, 33);
    // 0d7c3e  mov al, byte ptr [0xb435a]
    X86_AT(c, 0xd7c3eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xB435Au))));
    // 0d7c43  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd7c43u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d7c46  mov byte ptr [edx], al
    X86_AT(c, 0xd7c46u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 0d7c48  inc dword ptr [0xb4370]
    X86_AT(c, 0xd7c48u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4370u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d7c4e  inc dword ptr [ebp + 0xc]
    X86_AT(c, 0xd7c4eu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d7c51  cmp edi, dword ptr [0xb4370]
    X86_AT(c, 0xd7c51u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0xB4370u))), 0, 4);
    // 0d7c57  jne 0xd7bd2
    X86_AT(c, 0xd7c57u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd7bd2u); goto L_d7bd2; }
    X86_TICK(c, 17);
    // 0d7c5d  push 1
    X86_AT(c, 0xd7c5du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d7c5f  push 0xffffffff
    X86_AT(c, 0xd7c5fu);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0d7c61  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xd7c61u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0d7c64  push eax
    X86_AT(c, 0xd7c64u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7c65  call 0xda980
    X86_AT(c, 0xd7c65u);
    push32(c, 0xd7c6au); x86_call_known(c, 0xda980u, f_000da980); X86_RET(c, 0xd7c6au);
    X86_TICK(c, 7);
    // 0d7c6a  jmp 0xd7caf
    X86_AT(c, 0xd7c6au);
    goto L_d7caf;
L_d7c6c:
    X86_TICK(c, 10);
    // 0d7c6c  mov al, byte ptr [ebp - 0xf]
    X86_AT(c, 0xd7c6cu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u))));
    // 0d7c6f  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd7c6fu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d7c72  mov byte ptr [edx], al
    X86_AT(c, 0xd7c72u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
L_d7c74:
    X86_TICK(c, 12);
    // 0d7c74  inc dword ptr [0xb4370]
    X86_AT(c, 0xd7c74u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4370u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d7c7a  inc dword ptr [ebp + 0xc]
    X86_AT(c, 0xd7c7au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_d7c7d:
    X86_TICK(c, 11);
    // 0d7c7d  cmp edi, dword ptr [0xb4370]
    X86_AT(c, 0xd7c7du);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0xB4370u))), 0, 4);
    // 0d7c83  jbe 0xd7caf
    X86_AT(c, 0xd7c83u);
    if (x86_cc(c, 6)) { goto L_d7caf; }
    X86_TICK(c, 7);
    // 0d7c85  jmp 0xd7bb8
    X86_AT(c, 0xd7c85u);
    X86_POLL(c, 0xd7bb8u); goto L_d7bb8;
L_d7c8a:
    X86_TICK(c, 27);
    // 0d7c8a  push edi
    X86_AT(c, 0xd7c8au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7c8b  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd7c8bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d7c8e  add eax, dword ptr [0xb4370]
    X86_AT(c, 0xd7c8eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xB4370u))), 0, 4); }
    // 0d7c94  push eax
    X86_AT(c, 0xd7c94u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7c95  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xd7c95u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0d7c98  push eax
    X86_AT(c, 0xd7c98u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7c99  call 0xda8a8
    X86_AT(c, 0xd7c99u);
    push32(c, 0xd7c9eu); x86_call_known(c, 0xda8a8u, f_000da8a8); X86_RET(c, 0xd7c9eu);
    X86_TICK(c, 10);
    // 0d7c9e  xchg esi, eax
    X86_AT(c, 0xd7c9eu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0d7c9f  and esi, esi
    X86_AT(c, 0xd7c9fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d7ca1  je 0xd7caf
    X86_AT(c, 0xd7ca1u);
    if (x86_cc(c, 4)) { goto L_d7caf; }
    X86_TICK(c, 9);
    // 0d7ca3  add dword ptr [0xb4370], esi
    X86_AT(c, 0xd7ca3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4370u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 0d7ca9  sub edi, esi
    X86_AT(c, 0xd7ca9u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[6], 0, 4); }
L_d7cab:
    X86_TICK(c, 7);
    // 0d7cab  and edi, edi
    X86_AT(c, 0xd7cabu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0d7cad  ja 0xd7c8a
    X86_AT(c, 0xd7cadu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0xd7c8au); goto L_d7c8a; }
L_d7caf:
    X86_TICK(c, 12);
    // 0d7caf  cmp dword ptr [0xb4370], 0
    X86_AT(c, 0xd7cafu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB4370u))), 0x0u, 0, 4);
    // 0d7cb6  jne 0xd7cc0
    X86_AT(c, 0xd7cb6u);
    if (x86_cc(c, 5)) { goto L_d7cc0; }
    X86_TICK(c, 7);
    // 0d7cb8  and edi, edi
    X86_AT(c, 0xd7cb8u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0d7cba  jbe 0xd7cc0
    X86_AT(c, 0xd7cbau);
    if (x86_cc(c, 6)) { goto L_d7cc0; }
    X86_TICK(c, 7);
    // 0d7cbc  or byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0xd7cbcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x10u, 1)); }
L_d7cc0:
    X86_TICK(c, 12);
    // 0d7cc0  cmp word ptr [0xb47e6], 0
    X86_AT(c, 0xd7cc0u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xB47E6u))), 0x0u, 0, 2);
    // 0d7cc8  je 0xd7cd0
    X86_AT(c, 0xd7cc8u);
    if (x86_cc(c, 4)) { goto L_d7cd0; }
    X86_TICK(c, 14);
    // 0d7cca  or byte ptr [ebx + 0xc], 0x20
    X86_AT(c, 0xd7ccau);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
    // 0d7cce  jmp 0xd7cda
    X86_AT(c, 0xd7cceu);
    goto L_d7cda;
L_d7cd0:
    X86_TICK(c, 6);
    // 0d7cd0  mov ax, word ptr [ebp - 0xe]
    X86_AT(c, 0xd7cd0u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))));
    // 0d7cd4  mov word ptr [0xb47e6], ax
    X86_AT(c, 0xd7cd4u);
    wr16((c.sbase[3] + (uint32_t)(0xB47E6u)), (c.r[0] & 0xFFFFu));
L_d7cda:
    X86_TICK(c, 28);
    // 0d7cda  pop edi
    X86_AT(c, 0xd7cdau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d7cdb  pop esi
    X86_AT(c, 0xd7cdbu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d7cdc  pop ebx
    X86_AT(c, 0xd7cdcu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d7cdd  leave 
    X86_AT(c, 0xd7cddu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d7cde  ret 0xc
    X86_AT(c, 0xd7cdeu);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0xd7880u, "ran off the end of a function");
}
void f_000d7b58(X86Cpu& c) {
    goto L_d7b58;
L_d78b1:
    X86_TICK(c, 12);
    // 0d78b1  test byte ptr [ebx + 0xc], 0x40
    X86_AT(c, 0xd78b1u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x40u, 1);
    // 0d78b5  je 0xd7aae
    X86_AT(c, 0xd78b5u);
    if (x86_cc(c, 4)) { goto L_d7aae; }
    X86_TICK(c, 12);
    // 0d78bb  cmp dword ptr [ebx + 4], 1
    X86_AT(c, 0xd78bbu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x1u, 0, 4);
    // 0d78bf  jne 0xd7906
    X86_AT(c, 0xd78bfu);
    if (x86_cc(c, 5)) { goto L_d7906; }
    X86_TICK(c, 12);
    // 0d78c1  cmp word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0xd78c1u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0xFFFEu, 0, 2);
    // 0d78c6  jne 0xd7906
    X86_AT(c, 0xd78c6u);
    if (x86_cc(c, 5)) { goto L_d7906; }
    X86_TICK(c, 12);
    // 0d78c8  test byte ptr [ebx + 0xd], 4
    X86_AT(c, 0xd78c8u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x4u, 1);
    // 0d78cc  jne 0xd7b4c
    X86_AT(c, 0xd78ccu);
    if (x86_cc(c, 5)) { goto L_d7b4c; }
    X86_TICK(c, 33);
    // 0d78d2  mov al, byte ptr [0xb435a]
    X86_AT(c, 0xd78d2u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xB435Au))));
    // 0d78d7  mov edx, dword ptr [ebx + 8]
    X86_AT(c, 0xd78d7u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0d78da  mov byte ptr [edx], al
    X86_AT(c, 0xd78dau);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 0d78dc  push 0x1ff
    X86_AT(c, 0xd78dcu);
    { uint32_t v = 0x1FFu; push32(c, v); }
    // 0d78e1  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0xd78e1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0d78e4  inc eax
    X86_AT(c, 0xd78e4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d78e5  push eax
    X86_AT(c, 0xd78e5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d78e6  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xd78e6u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0d78e9  push eax
    X86_AT(c, 0xd78e9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d78ea  call 0xda8a8
    X86_AT(c, 0xd78eau);
    push32(c, 0xd78efu); x86_call_known(c, 0xda8a8u, f_000da8a8); X86_RET(c, 0xd78efu);
    X86_TICK(c, 11);
    // 0d78ef  inc eax
    X86_AT(c, 0xd78efu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d78f0  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0xd78f0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
    // 0d78f3  dec eax
    X86_AT(c, 0xd78f3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0d78f4  jne 0xd793e
    X86_AT(c, 0xd78f4u);
    if (x86_cc(c, 5)) { goto L_d793e; }
    X86_TICK(c, 15);
    // 0d78f6  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0xd78f6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0d78f9  mov dword ptr [ebx], eax
    X86_AT(c, 0xd78f9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 0d78fb  mov word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0xd78fbu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0x200u);
    // 0d7901  jmp 0xd7b4c
    X86_AT(c, 0xd7901u);
    goto L_d7b4c;
L_d7906:
    X86_TICK(c, 12);
    // 0d7906  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0xd7906u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 0d790a  jne 0xd7983
    X86_AT(c, 0xd790au);
    if (x86_cc(c, 5)) { goto L_d7983; }
    X86_TICK(c, 12);
    // 0d7910  test byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0xd7910u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x10u, 1);
    // 0d7914  jne 0xd7b7e
    X86_AT(c, 0xd7914u);
    if (x86_cc(c, 5)) { goto L_d7b7e; }
    X86_TICK(c, 12);
    // 0d791a  test byte ptr [ebx + 0xd], 4
    X86_AT(c, 0xd791au);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x4u, 1);
    // 0d791e  jne 0xd7934
    X86_AT(c, 0xd791eu);
    if (x86_cc(c, 5)) { goto L_d7934; }
    X86_TICK(c, 20);
    // 0d7920  push 0x200
    X86_AT(c, 0xd7920u);
    { uint32_t v = 0x200u; push32(c, v); }
    // 0d7925  push dword ptr [ebx + 8]
    X86_AT(c, 0xd7925u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 0d7928  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xd7928u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0d792b  push eax
    X86_AT(c, 0xd792bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d792c  call 0xda8a8
    X86_AT(c, 0xd792cu);
    push32(c, 0xd7931u); x86_call_known(c, 0xda8a8u, f_000da8a8); X86_RET(c, 0xd7931u);
    X86_TICK(c, 2);
    // 0d7931  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0xd7931u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
L_d7934:
    X86_TICK(c, 12);
    // 0d7934  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0xd7934u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 0d7938  je 0xd7b7e
    X86_AT(c, 0xd7938u);
    if (x86_cc(c, 4)) { goto L_d7b7e; }
L_d793e:
    X86_TICK(c, 28);
    // 0d793e  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0xd793eu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0d7941  mov al, 0x1a
    X86_AT(c, 0xd7941u);
    s8(c, 0, 0x1Au);
    // 0d7943  mov ecx, dword ptr [ebx + 8]
    X86_AT(c, 0xd7943u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0d7946  push edi
    X86_AT(c, 0xd7946u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7947  mov edi, ecx
    X86_AT(c, 0xd7947u);
    c.r[7] = c.r[1];
    // 0d7949  mov ecx, edx
    X86_AT(c, 0xd7949u);
    c.r[1] = c.r[2];
    // 0d794b  scasb al, byte ptr es:[edi]
    X86_AT(c, 0xd794bu);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0d794d  jne 0xd7952
    X86_AT(c, 0xd794du);
    if (x86_cc(c, 5)) { goto L_d7952; }
    X86_TICK(c, 4);
    // 0d794f  inc ecx
    X86_AT(c, 0xd794fu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0d7950  sub edx, ecx
    X86_AT(c, 0xd7950u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_d7952:
    X86_TICK(c, 17);
    // 0d7952  pop edi
    X86_AT(c, 0xd7952u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d7953  mov word ptr [ebp - 0x10], dx
    X86_AT(c, 0xd7953u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), (c.r[2] & 0xFFFFu));
    // 0d7957  cmp edx, dword ptr [ebx + 4]
    X86_AT(c, 0xd7957u);
    (void)x86_sub(c, c.r[2], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 0d795a  je 0xd7978
    X86_AT(c, 0xd795au);
    if (x86_cc(c, 4)) { goto L_d7978; }
    X86_TICK(c, 32);
    // 0d795c  or byte ptr [ebx + 0xd], 4
    X86_AT(c, 0xd795cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x4u, 1)); }
    // 0d7960  push 1
    X86_AT(c, 0xd7960u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d7962  mov dword ptr [ebp - 0x14], edx
    X86_AT(c, 0xd7962u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[2]);
    // 0d7965  sub edx, dword ptr [ebx + 4]
    X86_AT(c, 0xd7965u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4); }
    // 0d7968  push edx
    X86_AT(c, 0xd7968u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d7969  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xd7969u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0d796c  push eax
    X86_AT(c, 0xd796cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d796d  call 0xda980
    X86_AT(c, 0xd796du);
    push32(c, 0xd7972u); x86_call_known(c, 0xda980u, f_000da980); X86_RET(c, 0xd7972u);
    X86_TICK(c, 6);
    // 0d7972  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xd7972u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0d7975  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0xd7975u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
L_d7978:
    X86_TICK(c, 8);
    // 0d7978  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0xd7978u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0d797b  mov dword ptr [ebx], eax
    X86_AT(c, 0xd797bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 0d797d  mov word ptr [ebx + 0x10], 0xffff
    X86_AT(c, 0xd797du);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFFu);
L_d7983:
    X86_TICK(c, 12);
    // 0d7983  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0xd7983u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 0d7987  jle 0xd7b76
    X86_AT(c, 0xd7987u);
    if (x86_cc(c, 14)) { goto L_d7b76; }
    X86_TICK(c, 11);
    // 0d798d  mov ax, word ptr [ebx + 0x10]
    X86_AT(c, 0xd798du);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))));
    // 0d7991  cmp ax, 0xffff
    X86_AT(c, 0xd7991u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0xFFFFu, 0, 2);
    // 0d7995  je 0xd79a5
    X86_AT(c, 0xd7995u);
    if (x86_cc(c, 4)) { goto L_d79a5; }
    X86_TICK(c, 20);
    // 0d7997  movsx eax, ax
    X86_AT(c, 0xd7997u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 0d799a  add eax, dword ptr [ebx + 8]
    X86_AT(c, 0xd799au);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 0d799d  cmp eax, dword ptr [ebx]
    X86_AT(c, 0xd799du);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4);
    // 0d799f  jge 0xd7a3c
    X86_AT(c, 0xd799fu);
    if (x86_cc(c, 13)) { goto L_d7a3c; }
L_d79a5:
    X86_TICK(c, 30);
    // 0d79a5  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0xd79a5u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0d79a8  mov al, byte ptr [0xb435a]
    X86_AT(c, 0xd79a8u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xB435Au))));
    // 0d79ad  mov ecx, dword ptr [ebx]
    X86_AT(c, 0xd79adu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0d79af  push edi
    X86_AT(c, 0xd79afu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d79b0  mov edi, ecx
    X86_AT(c, 0xd79b0u);
    c.r[7] = c.r[1];
    // 0d79b2  mov ecx, edx
    X86_AT(c, 0xd79b2u);
    c.r[1] = c.r[2];
    // 0d79b4  scasb al, byte ptr es:[edi]
    X86_AT(c, 0xd79b4u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0d79b6  jne 0xd79bb
    X86_AT(c, 0xd79b6u);
    if (x86_cc(c, 5)) { goto L_d79bb; }
    X86_TICK(c, 4);
    // 0d79b8  inc ecx
    X86_AT(c, 0xd79b8u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0d79b9  sub edx, ecx
    X86_AT(c, 0xd79b9u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_d79bb:
    X86_TICK(c, 13);
    // 0d79bb  pop edi
    X86_AT(c, 0xd79bbu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d79bc  mov word ptr [ebx + 0x10], dx
    X86_AT(c, 0xd79bcu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), (c.r[2] & 0xFFFFu));
    // 0d79c0  jmp 0xd79f5
    X86_AT(c, 0xd79c0u);
    goto L_d79f5;
L_d79c2:
    X86_TICK(c, 59);
    // 0d79c2  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0xd79c2u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 0d79c6  add eax, dword ptr [ebx]
    X86_AT(c, 0xd79c6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4); }
    // 0d79c8  inc eax
    X86_AT(c, 0xd79c8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d79c9  mov dx, word ptr [ebx + 0x10]
    X86_AT(c, 0xd79c9u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))));
    // 0d79cd  inc edx
    X86_AT(c, 0xd79cdu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0d79ce  movsx edx, dx
    X86_AT(c, 0xd79ceu);
    c.r[2] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 0d79d1  mov ecx, dword ptr [ebx + 4]
    X86_AT(c, 0xd79d1u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0d79d4  sub ecx, edx
    X86_AT(c, 0xd79d4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0d79d6  mov edx, ecx
    X86_AT(c, 0xd79d6u);
    c.r[2] = c.r[1];
    // 0d79d8  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xd79d8u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0d79db  mov al, byte ptr [0xb435a]
    X86_AT(c, 0xd79dbu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xB435Au))));
    // 0d79e0  mov ecx, dword ptr [ebp - 0x14]
    X86_AT(c, 0xd79e0u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0d79e3  push edi
    X86_AT(c, 0xd79e3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d79e4  mov edi, ecx
    X86_AT(c, 0xd79e4u);
    c.r[7] = c.r[1];
    // 0d79e6  mov ecx, edx
    X86_AT(c, 0xd79e6u);
    c.r[1] = c.r[2];
    // 0d79e8  scasb al, byte ptr es:[edi]
    X86_AT(c, 0xd79e8u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0d79ea  jne 0xd79ef
    X86_AT(c, 0xd79eau);
    if (x86_cc(c, 5)) { goto L_d79ef; }
    X86_TICK(c, 4);
    // 0d79ec  inc ecx
    X86_AT(c, 0xd79ecu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0d79ed  sub edx, ecx
    X86_AT(c, 0xd79edu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_d79ef:
    X86_TICK(c, 13);
    // 0d79ef  pop edi
    X86_AT(c, 0xd79efu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d79f0  inc edx
    X86_AT(c, 0xd79f0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0d79f1  add word ptr [ebx + 0x10], dx
    X86_AT(c, 0xd79f1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
L_d79f5:
    X86_TICK(c, 19);
    // 0d79f5  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0xd79f5u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 0d79f9  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0xd79f9u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0d79fc  dec edx
    X86_AT(c, 0xd79fcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0d79fd  cmp edx, eax
    X86_AT(c, 0xd79fdu);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0d79ff  jle 0xd7a0e
    X86_AT(c, 0xd79ffu);
    if (x86_cc(c, 14)) { goto L_d7a0e; }
    X86_TICK(c, 23);
    // 0d7a01  add eax, dword ptr [ebx]
    X86_AT(c, 0xd7a01u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4); }
    // 0d7a03  inc eax
    X86_AT(c, 0xd7a03u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d7a04  mov al, byte ptr [eax]
    X86_AT(c, 0xd7a04u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0d7a06  cmp al, byte ptr [0xb435b]
    X86_AT(c, 0xd7a06u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(0xB435Bu))), 0, 1);
    // 0d7a0c  jne 0xd79c2
    X86_AT(c, 0xd7a0cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd79c2u); goto L_d79c2; }
L_d7a0e:
    X86_TICK(c, 17);
    // 0d7a0e  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0xd7a0eu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 0d7a12  cmp eax, dword ptr [ebx + 4]
    X86_AT(c, 0xd7a12u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 0d7a15  jne 0xd7a1f
    X86_AT(c, 0xd7a15u);
    if (x86_cc(c, 5)) { goto L_d7a1f; }
    X86_TICK(c, 9);
    // 0d7a17  mov word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0xd7a17u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0x200u);
    // 0d7a1d  jmp 0xd7a3c
    X86_AT(c, 0xd7a1du);
    goto L_d7a3c;
L_d7a1f:
    X86_TICK(c, 19);
    // 0d7a1f  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0xd7a1fu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 0d7a23  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0xd7a23u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0d7a26  dec edx
    X86_AT(c, 0xd7a26u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0d7a27  cmp edx, eax
    X86_AT(c, 0xd7a27u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0d7a29  jne 0xd7a33
    X86_AT(c, 0xd7a29u);
    if (x86_cc(c, 5)) { goto L_d7a33; }
    X86_TICK(c, 9);
    // 0d7a2b  mov word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0xd7a2bu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFEu);
    // 0d7a31  jmp 0xd7a3c
    X86_AT(c, 0xd7a31u);
    goto L_d7a3c;
L_d7a33:
    X86_TICK(c, 17);
    // 0d7a33  mov eax, dword ptr [ebx]
    X86_AT(c, 0xd7a33u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0d7a35  sub eax, dword ptr [ebx + 8]
    X86_AT(c, 0xd7a35u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 0d7a38  add word ptr [ebx + 0x10], ax
    X86_AT(c, 0xd7a38u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_d7a3c:
    X86_TICK(c, 12);
    // 0d7a3c  cmp word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0xd7a3cu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0x200u, 0, 2);
    // 0d7a42  je 0xd7b4c
    X86_AT(c, 0xd7a42u);
    if (x86_cc(c, 4)) { goto L_d7b4c; }
    X86_TICK(c, 12);
    // 0d7a48  cmp word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0xd7a48u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0xFFFEu, 0, 2);
    // 0d7a4d  jne 0xd7a5d
    X86_AT(c, 0xd7a4du);
    if (x86_cc(c, 5)) { goto L_d7a5d; }
    X86_TICK(c, 11);
    // 0d7a4f  cmp edi, dword ptr [ebx + 4]
    X86_AT(c, 0xd7a4fu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 0d7a52  jl 0xd7aa7
    X86_AT(c, 0xd7a52u);
    if (x86_cc(c, 12)) { goto L_d7aa7; }
    X86_TICK(c, 13);
    // 0d7a54  mov esi, dword ptr [ebx + 4]
    X86_AT(c, 0xd7a54u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0d7a57  dec esi
    X86_AT(c, 0xd7a57u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0d7a58  jmp 0xd7b58
    X86_AT(c, 0xd7a58u);
    goto L_d7b58;
L_d7a5d:
    X86_TICK(c, 25);
    // 0d7a5d  mov eax, dword ptr [ebx]
    X86_AT(c, 0xd7a5du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0d7a5f  sub eax, dword ptr [ebx + 8]
    X86_AT(c, 0xd7a5fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 0d7a62  movsx esi, word ptr [ebx + 0x10]
    X86_AT(c, 0xd7a62u);
    c.r[6] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 0d7a66  sub esi, eax
    X86_AT(c, 0xd7a66u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d7a68  cmp edi, esi
    X86_AT(c, 0xd7a68u);
    (void)x86_sub(c, c.r[7], c.r[6], 0, 4);
    // 0d7a6a  jbe 0xd7aa7
    X86_AT(c, 0xd7a6au);
    if (x86_cc(c, 6)) { goto L_d7aa7; }
    X86_TICK(c, 87);
    // 0d7a6c  mov ecx, esi
    X86_AT(c, 0xd7a6cu);
    c.r[1] = c.r[6];
    // 0d7a6e  mov eax, dword ptr [ebx]
    X86_AT(c, 0xd7a6eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0d7a70  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd7a70u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d7a73  mov dword ptr [ebp - 0x14], edi
    X86_AT(c, 0xd7a73u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[7]);
    // 0d7a76  mov edi, dword ptr [ebp - 4]
    X86_AT(c, 0xd7a76u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d7a79  lea edx, [edx + edi*1]
    X86_AT(c, 0xd7a79u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[7]);
    // 0d7a7c  push esi
    X86_AT(c, 0xd7a7cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7a7d  push edi
    X86_AT(c, 0xd7a7du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7a7e  mov esi, eax
    X86_AT(c, 0xd7a7eu);
    c.r[6] = c.r[0];
    // 0d7a80  mov edi, edx
    X86_AT(c, 0xd7a80u);
    c.r[7] = c.r[2];
    // 0d7a82  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xd7a82u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0d7a84  pop edi
    X86_AT(c, 0xd7a84u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d7a85  pop esi
    X86_AT(c, 0xd7a85u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d7a86  add edi, esi
    X86_AT(c, 0xd7a86u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[6], 0, 4); }
    // 0d7a88  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd7a88u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d7a8b  mov byte ptr [eax + edi*1], 0xa
    X86_AT(c, 0xd7a8bu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7])), 0xAu);
    // 0d7a8f  lea eax, [esi + 1]
    X86_AT(c, 0xd7a8fu);
    c.r[0] = (uint32_t)(c.r[6] + 0x1u);
    // 0d7a92  add dword ptr [ebp - 4], eax
    X86_AT(c, 0xd7a92u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0d7a95  mov edi, dword ptr [ebp - 0x14]
    X86_AT(c, 0xd7a95u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0d7a98  sub edi, eax
    X86_AT(c, 0xd7a98u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d7a9a  lea eax, [esi + 2]
    X86_AT(c, 0xd7a9au);
    c.r[0] = (uint32_t)(c.r[6] + 0x2u);
    // 0d7a9d  sub dword ptr [ebx + 4], eax
    X86_AT(c, 0xd7a9du);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0d7aa0  add dword ptr [ebx], eax
    X86_AT(c, 0xd7aa0u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0d7aa2  jmp 0xd7b76
    X86_AT(c, 0xd7aa2u);
    goto L_d7b76;
L_d7aa7:
    X86_TICK(c, 9);
    // 0d7aa7  mov esi, edi
    X86_AT(c, 0xd7aa7u);
    c.r[6] = c.r[7];
    // 0d7aa9  jmp 0xd7b58
    X86_AT(c, 0xd7aa9u);
    goto L_d7b58;
L_d7aae:
    X86_TICK(c, 13);
    // 0d7aae  mov word ptr [ebx + 0x10], 0xffff
    X86_AT(c, 0xd7aaeu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFFu);
    // 0d7ab4  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0xd7ab4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0d7ab7  cmp edi, eax
    X86_AT(c, 0xd7ab7u);
    (void)x86_sub(c, c.r[7], c.r[0], 0, 4);
    // 0d7ab9  jl 0xd7adf
    X86_AT(c, 0xd7ab9u);
    if (x86_cc(c, 12)) { goto L_d7adf; }
    X86_TICK(c, 7);
    // 0d7abb  and eax, eax
    X86_AT(c, 0xd7abbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d7abd  jle 0xd7adf
    X86_AT(c, 0xd7abdu);
    if (x86_cc(c, 14)) { goto L_d7adf; }
    X86_TICK(c, 53);
    // 0d7abf  xchg ecx, eax
    X86_AT(c, 0xd7abfu);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
    // 0d7ac0  mov eax, dword ptr [ebx]
    X86_AT(c, 0xd7ac0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0d7ac2  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd7ac2u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d7ac5  push esi
    X86_AT(c, 0xd7ac5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7ac6  push edi
    X86_AT(c, 0xd7ac6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7ac7  mov esi, eax
    X86_AT(c, 0xd7ac7u);
    c.r[6] = c.r[0];
    // 0d7ac9  mov edi, edx
    X86_AT(c, 0xd7ac9u);
    c.r[7] = c.r[2];
    // 0d7acb  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xd7acbu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0d7acd  pop edi
    X86_AT(c, 0xd7acdu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d7ace  pop esi
    X86_AT(c, 0xd7aceu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d7acf  sub edi, dword ptr [ebx + 4]
    X86_AT(c, 0xd7acfu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4); }
    // 0d7ad2  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0xd7ad2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0d7ad5  add dword ptr [ebp - 4], eax
    X86_AT(c, 0xd7ad5u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0d7ad8  mov dword ptr [ebx + 4], 0
    X86_AT(c, 0xd7ad8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0x0u);
L_d7adf:
    X86_TICK(c, 7);
    // 0d7adf  cmp edi, 0x200
    X86_AT(c, 0xd7adfu);
    (void)x86_sub(c, c.r[7], 0x200u, 0, 4);
    // 0d7ae5  jb 0xd7b1d
    X86_AT(c, 0xd7ae5u);
    if (x86_cc(c, 2)) { goto L_d7b1d; }
    X86_TICK(c, 10);
    // 0d7ae7  mov esi, edi
    X86_AT(c, 0xd7ae7u);
    c.r[6] = c.r[7];
    // 0d7ae9  shr esi, 9
    X86_AT(c, 0xd7ae9u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 5, v, 0x9u, 4, w); if (w) c.r[6] = r; }
    // 0d7aec  shl esi, 9
    X86_AT(c, 0xd7aecu);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[6] = r; }
    // 0d7aef  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xd7aefu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
L_d7af6:
    X86_TICK(c, 27);
    // 0d7af6  push esi
    X86_AT(c, 0xd7af6u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7af7  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd7af7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d7afa  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd7afau);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0d7afd  push eax
    X86_AT(c, 0xd7afdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7afe  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xd7afeu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0d7b01  push eax
    X86_AT(c, 0xd7b01u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7b02  call 0xda8a8
    X86_AT(c, 0xd7b02u);
    push32(c, 0xd7b07u); x86_call_known(c, 0xda8a8u, f_000da8a8); X86_RET(c, 0xd7b07u);
    X86_TICK(c, 25);
    // 0d7b07  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xd7b07u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0d7b0a  add dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xd7b0au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0d7b0d  sub esi, eax
    X86_AT(c, 0xd7b0du);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d7b0f  add dword ptr [ebp - 4], eax
    X86_AT(c, 0xd7b0fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0d7b12  and esi, esi
    X86_AT(c, 0xd7b12u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d7b14  je 0xd7b1a
    X86_AT(c, 0xd7b14u);
    if (x86_cc(c, 4)) { goto L_d7b1a; }
    X86_TICK(c, 7);
    // 0d7b16  and eax, eax
    X86_AT(c, 0xd7b16u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d7b18  jne 0xd7af6
    X86_AT(c, 0xd7b18u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd7af6u); goto L_d7af6; }
L_d7b1a:
    X86_TICK(c, 6);
    // 0d7b1a  sub edi, dword ptr [ebp - 0xc]
    X86_AT(c, 0xd7b1au);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 4); }
L_d7b1d:
    X86_TICK(c, 7);
    // 0d7b1d  and edi, edi
    X86_AT(c, 0xd7b1du);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0d7b1f  jbe 0xd7b76
    X86_AT(c, 0xd7b1fu);
    if (x86_cc(c, 6)) { goto L_d7b76; }
    X86_TICK(c, 12);
    // 0d7b21  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0xd7b21u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 0d7b25  jne 0xd7b46
    X86_AT(c, 0xd7b25u);
    if (x86_cc(c, 5)) { goto L_d7b46; }
    X86_TICK(c, 12);
    // 0d7b27  test byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0xd7b27u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x10u, 1);
    // 0d7b2b  jne 0xd7b7e
    X86_AT(c, 0xd7b2bu);
    if (x86_cc(c, 5)) { goto L_d7b7e; }
    X86_TICK(c, 20);
    // 0d7b2d  push 0x200
    X86_AT(c, 0xd7b2du);
    { uint32_t v = 0x200u; push32(c, v); }
    // 0d7b32  push dword ptr [ebx + 8]
    X86_AT(c, 0xd7b32u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 0d7b35  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xd7b35u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0d7b38  push eax
    X86_AT(c, 0xd7b38u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7b39  call 0xda8a8
    X86_AT(c, 0xd7b39u);
    push32(c, 0xd7b3eu); x86_call_known(c, 0xda8a8u, f_000da8a8); X86_RET(c, 0xd7b3eu);
    X86_TICK(c, 8);
    // 0d7b3e  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0xd7b3eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
    // 0d7b41  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0xd7b41u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0d7b44  mov dword ptr [ebx], eax
    X86_AT(c, 0xd7b44u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
L_d7b46:
    X86_TICK(c, 12);
    // 0d7b46  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0xd7b46u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 0d7b4a  jle 0xd7b7e
    X86_AT(c, 0xd7b4au);
    if (x86_cc(c, 14)) { goto L_d7b7e; }
L_d7b4c:
    X86_TICK(c, 13);
    // 0d7b4c  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0xd7b4cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0d7b4f  mov edx, edi
    X86_AT(c, 0xd7b4fu);
    c.r[2] = c.r[7];
    // 0d7b51  cmp edx, eax
    X86_AT(c, 0xd7b51u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0d7b53  jl 0xd7b56
    X86_AT(c, 0xd7b53u);
    if (x86_cc(c, 12)) { goto L_d7b56; }
    X86_TICK(c, 3);
    // 0d7b55  xchg edx, eax
    X86_AT(c, 0xd7b55u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_d7b56:
    X86_TICK(c, 2);
    // 0d7b56  mov esi, edx
    X86_AT(c, 0xd7b56u);
    c.r[6] = c.r[2];
L_d7b58:
    X86_TICK(c, 62);
    // 0d7b58  mov ecx, esi
    X86_AT(c, 0xd7b58u);
    c.r[1] = c.r[6];
    // 0d7b5a  mov eax, dword ptr [ebx]
    X86_AT(c, 0xd7b5au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0d7b5c  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd7b5cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d7b5f  add edx, dword ptr [ebp - 4]
    X86_AT(c, 0xd7b5fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0d7b62  push esi
    X86_AT(c, 0xd7b62u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7b63  push edi
    X86_AT(c, 0xd7b63u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7b64  mov esi, eax
    X86_AT(c, 0xd7b64u);
    c.r[6] = c.r[0];
    // 0d7b66  mov edi, edx
    X86_AT(c, 0xd7b66u);
    c.r[7] = c.r[2];
    // 0d7b68  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xd7b68u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0d7b6a  pop edi
    X86_AT(c, 0xd7b6au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d7b6b  pop esi
    X86_AT(c, 0xd7b6bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d7b6c  add dword ptr [ebp - 4], esi
    X86_AT(c, 0xd7b6cu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 0d7b6f  sub dword ptr [ebx + 4], esi
    X86_AT(c, 0xd7b6fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[6], 0, 4)); }
    // 0d7b72  sub edi, esi
    X86_AT(c, 0xd7b72u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0d7b74  add dword ptr [ebx], esi
    X86_AT(c, 0xd7b74u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
L_d7b76:
    X86_TICK(c, 7);
    // 0d7b76  and edi, edi
    X86_AT(c, 0xd7b76u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0d7b78  ja 0xd78b1
    X86_AT(c, 0xd7b78u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0xd78b1u); goto L_d78b1; }
L_d7b7e:
    X86_TICK(c, 12);
    // 0d7b7e  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0xd7b7eu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 0d7b82  jne 0xd7b88
    X86_AT(c, 0xd7b82u);
    if (x86_cc(c, 5)) { goto L_d7b88; }
    X86_TICK(c, 7);
    // 0d7b84  or byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0xd7b84u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x10u, 1)); }
L_d7b88:
    X86_TICK(c, 13);
    // 0d7b88  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd7b88u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d7b8b  mov dword ptr [0xb4370], eax
    X86_AT(c, 0xd7b8bu);
    wr32((c.sbase[3] + (uint32_t)(0xB4370u)), c.r[0]);
    // 0d7b90  jmp 0xd7cc0
    X86_AT(c, 0xd7b90u);
    goto L_d7cc0;
L_d7cc0:
    X86_TICK(c, 12);
    // 0d7cc0  cmp word ptr [0xb47e6], 0
    X86_AT(c, 0xd7cc0u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xB47E6u))), 0x0u, 0, 2);
    // 0d7cc8  je 0xd7cd0
    X86_AT(c, 0xd7cc8u);
    if (x86_cc(c, 4)) { goto L_d7cd0; }
    X86_TICK(c, 14);
    // 0d7cca  or byte ptr [ebx + 0xc], 0x20
    X86_AT(c, 0xd7ccau);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
    // 0d7cce  jmp 0xd7cda
    X86_AT(c, 0xd7cceu);
    goto L_d7cda;
L_d7cd0:
    X86_TICK(c, 6);
    // 0d7cd0  mov ax, word ptr [ebp - 0xe]
    X86_AT(c, 0xd7cd0u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))));
    // 0d7cd4  mov word ptr [0xb47e6], ax
    X86_AT(c, 0xd7cd4u);
    wr16((c.sbase[3] + (uint32_t)(0xB47E6u)), (c.r[0] & 0xFFFFu));
L_d7cda:
    X86_TICK(c, 28);
    // 0d7cda  pop edi
    X86_AT(c, 0xd7cdau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d7cdb  pop esi
    X86_AT(c, 0xd7cdbu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d7cdc  pop ebx
    X86_AT(c, 0xd7cdcu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d7cdd  leave 
    X86_AT(c, 0xd7cddu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d7cde  ret 0xc
    X86_AT(c, 0xd7cdeu);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0xd7b58u, "ran off the end of a function");
}
void f_000d7b76(X86Cpu& c) {
    goto L_d7b76;
L_d78b1:
    X86_TICK(c, 12);
    // 0d78b1  test byte ptr [ebx + 0xc], 0x40
    X86_AT(c, 0xd78b1u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x40u, 1);
    // 0d78b5  je 0xd7aae
    X86_AT(c, 0xd78b5u);
    if (x86_cc(c, 4)) { goto L_d7aae; }
    X86_TICK(c, 12);
    // 0d78bb  cmp dword ptr [ebx + 4], 1
    X86_AT(c, 0xd78bbu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x1u, 0, 4);
    // 0d78bf  jne 0xd7906
    X86_AT(c, 0xd78bfu);
    if (x86_cc(c, 5)) { goto L_d7906; }
    X86_TICK(c, 12);
    // 0d78c1  cmp word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0xd78c1u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0xFFFEu, 0, 2);
    // 0d78c6  jne 0xd7906
    X86_AT(c, 0xd78c6u);
    if (x86_cc(c, 5)) { goto L_d7906; }
    X86_TICK(c, 12);
    // 0d78c8  test byte ptr [ebx + 0xd], 4
    X86_AT(c, 0xd78c8u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x4u, 1);
    // 0d78cc  jne 0xd7b4c
    X86_AT(c, 0xd78ccu);
    if (x86_cc(c, 5)) { goto L_d7b4c; }
    X86_TICK(c, 33);
    // 0d78d2  mov al, byte ptr [0xb435a]
    X86_AT(c, 0xd78d2u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xB435Au))));
    // 0d78d7  mov edx, dword ptr [ebx + 8]
    X86_AT(c, 0xd78d7u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0d78da  mov byte ptr [edx], al
    X86_AT(c, 0xd78dau);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 0d78dc  push 0x1ff
    X86_AT(c, 0xd78dcu);
    { uint32_t v = 0x1FFu; push32(c, v); }
    // 0d78e1  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0xd78e1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0d78e4  inc eax
    X86_AT(c, 0xd78e4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d78e5  push eax
    X86_AT(c, 0xd78e5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d78e6  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xd78e6u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0d78e9  push eax
    X86_AT(c, 0xd78e9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d78ea  call 0xda8a8
    X86_AT(c, 0xd78eau);
    push32(c, 0xd78efu); x86_call_known(c, 0xda8a8u, f_000da8a8); X86_RET(c, 0xd78efu);
    X86_TICK(c, 11);
    // 0d78ef  inc eax
    X86_AT(c, 0xd78efu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d78f0  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0xd78f0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
    // 0d78f3  dec eax
    X86_AT(c, 0xd78f3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0d78f4  jne 0xd793e
    X86_AT(c, 0xd78f4u);
    if (x86_cc(c, 5)) { goto L_d793e; }
    X86_TICK(c, 15);
    // 0d78f6  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0xd78f6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0d78f9  mov dword ptr [ebx], eax
    X86_AT(c, 0xd78f9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 0d78fb  mov word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0xd78fbu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0x200u);
    // 0d7901  jmp 0xd7b4c
    X86_AT(c, 0xd7901u);
    goto L_d7b4c;
L_d7906:
    X86_TICK(c, 12);
    // 0d7906  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0xd7906u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 0d790a  jne 0xd7983
    X86_AT(c, 0xd790au);
    if (x86_cc(c, 5)) { goto L_d7983; }
    X86_TICK(c, 12);
    // 0d7910  test byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0xd7910u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x10u, 1);
    // 0d7914  jne 0xd7b7e
    X86_AT(c, 0xd7914u);
    if (x86_cc(c, 5)) { goto L_d7b7e; }
    X86_TICK(c, 12);
    // 0d791a  test byte ptr [ebx + 0xd], 4
    X86_AT(c, 0xd791au);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x4u, 1);
    // 0d791e  jne 0xd7934
    X86_AT(c, 0xd791eu);
    if (x86_cc(c, 5)) { goto L_d7934; }
    X86_TICK(c, 20);
    // 0d7920  push 0x200
    X86_AT(c, 0xd7920u);
    { uint32_t v = 0x200u; push32(c, v); }
    // 0d7925  push dword ptr [ebx + 8]
    X86_AT(c, 0xd7925u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 0d7928  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xd7928u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0d792b  push eax
    X86_AT(c, 0xd792bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d792c  call 0xda8a8
    X86_AT(c, 0xd792cu);
    push32(c, 0xd7931u); x86_call_known(c, 0xda8a8u, f_000da8a8); X86_RET(c, 0xd7931u);
    X86_TICK(c, 2);
    // 0d7931  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0xd7931u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
L_d7934:
    X86_TICK(c, 12);
    // 0d7934  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0xd7934u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 0d7938  je 0xd7b7e
    X86_AT(c, 0xd7938u);
    if (x86_cc(c, 4)) { goto L_d7b7e; }
L_d793e:
    X86_TICK(c, 28);
    // 0d793e  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0xd793eu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0d7941  mov al, 0x1a
    X86_AT(c, 0xd7941u);
    s8(c, 0, 0x1Au);
    // 0d7943  mov ecx, dword ptr [ebx + 8]
    X86_AT(c, 0xd7943u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0d7946  push edi
    X86_AT(c, 0xd7946u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7947  mov edi, ecx
    X86_AT(c, 0xd7947u);
    c.r[7] = c.r[1];
    // 0d7949  mov ecx, edx
    X86_AT(c, 0xd7949u);
    c.r[1] = c.r[2];
    // 0d794b  scasb al, byte ptr es:[edi]
    X86_AT(c, 0xd794bu);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0d794d  jne 0xd7952
    X86_AT(c, 0xd794du);
    if (x86_cc(c, 5)) { goto L_d7952; }
    X86_TICK(c, 4);
    // 0d794f  inc ecx
    X86_AT(c, 0xd794fu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0d7950  sub edx, ecx
    X86_AT(c, 0xd7950u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_d7952:
    X86_TICK(c, 17);
    // 0d7952  pop edi
    X86_AT(c, 0xd7952u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d7953  mov word ptr [ebp - 0x10], dx
    X86_AT(c, 0xd7953u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), (c.r[2] & 0xFFFFu));
    // 0d7957  cmp edx, dword ptr [ebx + 4]
    X86_AT(c, 0xd7957u);
    (void)x86_sub(c, c.r[2], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 0d795a  je 0xd7978
    X86_AT(c, 0xd795au);
    if (x86_cc(c, 4)) { goto L_d7978; }
    X86_TICK(c, 32);
    // 0d795c  or byte ptr [ebx + 0xd], 4
    X86_AT(c, 0xd795cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x4u, 1)); }
    // 0d7960  push 1
    X86_AT(c, 0xd7960u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d7962  mov dword ptr [ebp - 0x14], edx
    X86_AT(c, 0xd7962u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[2]);
    // 0d7965  sub edx, dword ptr [ebx + 4]
    X86_AT(c, 0xd7965u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4); }
    // 0d7968  push edx
    X86_AT(c, 0xd7968u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d7969  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xd7969u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0d796c  push eax
    X86_AT(c, 0xd796cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d796d  call 0xda980
    X86_AT(c, 0xd796du);
    push32(c, 0xd7972u); x86_call_known(c, 0xda980u, f_000da980); X86_RET(c, 0xd7972u);
    X86_TICK(c, 6);
    // 0d7972  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xd7972u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0d7975  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0xd7975u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
L_d7978:
    X86_TICK(c, 8);
    // 0d7978  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0xd7978u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0d797b  mov dword ptr [ebx], eax
    X86_AT(c, 0xd797bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 0d797d  mov word ptr [ebx + 0x10], 0xffff
    X86_AT(c, 0xd797du);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFFu);
L_d7983:
    X86_TICK(c, 12);
    // 0d7983  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0xd7983u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 0d7987  jle 0xd7b76
    X86_AT(c, 0xd7987u);
    if (x86_cc(c, 14)) { goto L_d7b76; }
    X86_TICK(c, 11);
    // 0d798d  mov ax, word ptr [ebx + 0x10]
    X86_AT(c, 0xd798du);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))));
    // 0d7991  cmp ax, 0xffff
    X86_AT(c, 0xd7991u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0xFFFFu, 0, 2);
    // 0d7995  je 0xd79a5
    X86_AT(c, 0xd7995u);
    if (x86_cc(c, 4)) { goto L_d79a5; }
    X86_TICK(c, 20);
    // 0d7997  movsx eax, ax
    X86_AT(c, 0xd7997u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 0d799a  add eax, dword ptr [ebx + 8]
    X86_AT(c, 0xd799au);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 0d799d  cmp eax, dword ptr [ebx]
    X86_AT(c, 0xd799du);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4);
    // 0d799f  jge 0xd7a3c
    X86_AT(c, 0xd799fu);
    if (x86_cc(c, 13)) { goto L_d7a3c; }
L_d79a5:
    X86_TICK(c, 30);
    // 0d79a5  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0xd79a5u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0d79a8  mov al, byte ptr [0xb435a]
    X86_AT(c, 0xd79a8u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xB435Au))));
    // 0d79ad  mov ecx, dword ptr [ebx]
    X86_AT(c, 0xd79adu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0d79af  push edi
    X86_AT(c, 0xd79afu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d79b0  mov edi, ecx
    X86_AT(c, 0xd79b0u);
    c.r[7] = c.r[1];
    // 0d79b2  mov ecx, edx
    X86_AT(c, 0xd79b2u);
    c.r[1] = c.r[2];
    // 0d79b4  scasb al, byte ptr es:[edi]
    X86_AT(c, 0xd79b4u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0d79b6  jne 0xd79bb
    X86_AT(c, 0xd79b6u);
    if (x86_cc(c, 5)) { goto L_d79bb; }
    X86_TICK(c, 4);
    // 0d79b8  inc ecx
    X86_AT(c, 0xd79b8u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0d79b9  sub edx, ecx
    X86_AT(c, 0xd79b9u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_d79bb:
    X86_TICK(c, 13);
    // 0d79bb  pop edi
    X86_AT(c, 0xd79bbu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d79bc  mov word ptr [ebx + 0x10], dx
    X86_AT(c, 0xd79bcu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), (c.r[2] & 0xFFFFu));
    // 0d79c0  jmp 0xd79f5
    X86_AT(c, 0xd79c0u);
    goto L_d79f5;
L_d79c2:
    X86_TICK(c, 59);
    // 0d79c2  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0xd79c2u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 0d79c6  add eax, dword ptr [ebx]
    X86_AT(c, 0xd79c6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4); }
    // 0d79c8  inc eax
    X86_AT(c, 0xd79c8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d79c9  mov dx, word ptr [ebx + 0x10]
    X86_AT(c, 0xd79c9u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))));
    // 0d79cd  inc edx
    X86_AT(c, 0xd79cdu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0d79ce  movsx edx, dx
    X86_AT(c, 0xd79ceu);
    c.r[2] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 0d79d1  mov ecx, dword ptr [ebx + 4]
    X86_AT(c, 0xd79d1u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0d79d4  sub ecx, edx
    X86_AT(c, 0xd79d4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0d79d6  mov edx, ecx
    X86_AT(c, 0xd79d6u);
    c.r[2] = c.r[1];
    // 0d79d8  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xd79d8u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0d79db  mov al, byte ptr [0xb435a]
    X86_AT(c, 0xd79dbu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xB435Au))));
    // 0d79e0  mov ecx, dword ptr [ebp - 0x14]
    X86_AT(c, 0xd79e0u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0d79e3  push edi
    X86_AT(c, 0xd79e3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d79e4  mov edi, ecx
    X86_AT(c, 0xd79e4u);
    c.r[7] = c.r[1];
    // 0d79e6  mov ecx, edx
    X86_AT(c, 0xd79e6u);
    c.r[1] = c.r[2];
    // 0d79e8  scasb al, byte ptr es:[edi]
    X86_AT(c, 0xd79e8u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0d79ea  jne 0xd79ef
    X86_AT(c, 0xd79eau);
    if (x86_cc(c, 5)) { goto L_d79ef; }
    X86_TICK(c, 4);
    // 0d79ec  inc ecx
    X86_AT(c, 0xd79ecu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0d79ed  sub edx, ecx
    X86_AT(c, 0xd79edu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_d79ef:
    X86_TICK(c, 13);
    // 0d79ef  pop edi
    X86_AT(c, 0xd79efu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d79f0  inc edx
    X86_AT(c, 0xd79f0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0d79f1  add word ptr [ebx + 0x10], dx
    X86_AT(c, 0xd79f1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
L_d79f5:
    X86_TICK(c, 19);
    // 0d79f5  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0xd79f5u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 0d79f9  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0xd79f9u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0d79fc  dec edx
    X86_AT(c, 0xd79fcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0d79fd  cmp edx, eax
    X86_AT(c, 0xd79fdu);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0d79ff  jle 0xd7a0e
    X86_AT(c, 0xd79ffu);
    if (x86_cc(c, 14)) { goto L_d7a0e; }
    X86_TICK(c, 23);
    // 0d7a01  add eax, dword ptr [ebx]
    X86_AT(c, 0xd7a01u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4); }
    // 0d7a03  inc eax
    X86_AT(c, 0xd7a03u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d7a04  mov al, byte ptr [eax]
    X86_AT(c, 0xd7a04u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0d7a06  cmp al, byte ptr [0xb435b]
    X86_AT(c, 0xd7a06u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(0xB435Bu))), 0, 1);
    // 0d7a0c  jne 0xd79c2
    X86_AT(c, 0xd7a0cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd79c2u); goto L_d79c2; }
L_d7a0e:
    X86_TICK(c, 17);
    // 0d7a0e  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0xd7a0eu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 0d7a12  cmp eax, dword ptr [ebx + 4]
    X86_AT(c, 0xd7a12u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 0d7a15  jne 0xd7a1f
    X86_AT(c, 0xd7a15u);
    if (x86_cc(c, 5)) { goto L_d7a1f; }
    X86_TICK(c, 9);
    // 0d7a17  mov word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0xd7a17u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0x200u);
    // 0d7a1d  jmp 0xd7a3c
    X86_AT(c, 0xd7a1du);
    goto L_d7a3c;
L_d7a1f:
    X86_TICK(c, 19);
    // 0d7a1f  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0xd7a1fu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 0d7a23  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0xd7a23u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0d7a26  dec edx
    X86_AT(c, 0xd7a26u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0d7a27  cmp edx, eax
    X86_AT(c, 0xd7a27u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0d7a29  jne 0xd7a33
    X86_AT(c, 0xd7a29u);
    if (x86_cc(c, 5)) { goto L_d7a33; }
    X86_TICK(c, 9);
    // 0d7a2b  mov word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0xd7a2bu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFEu);
    // 0d7a31  jmp 0xd7a3c
    X86_AT(c, 0xd7a31u);
    goto L_d7a3c;
L_d7a33:
    X86_TICK(c, 17);
    // 0d7a33  mov eax, dword ptr [ebx]
    X86_AT(c, 0xd7a33u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0d7a35  sub eax, dword ptr [ebx + 8]
    X86_AT(c, 0xd7a35u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 0d7a38  add word ptr [ebx + 0x10], ax
    X86_AT(c, 0xd7a38u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_d7a3c:
    X86_TICK(c, 12);
    // 0d7a3c  cmp word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0xd7a3cu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0x200u, 0, 2);
    // 0d7a42  je 0xd7b4c
    X86_AT(c, 0xd7a42u);
    if (x86_cc(c, 4)) { goto L_d7b4c; }
    X86_TICK(c, 12);
    // 0d7a48  cmp word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0xd7a48u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0xFFFEu, 0, 2);
    // 0d7a4d  jne 0xd7a5d
    X86_AT(c, 0xd7a4du);
    if (x86_cc(c, 5)) { goto L_d7a5d; }
    X86_TICK(c, 11);
    // 0d7a4f  cmp edi, dword ptr [ebx + 4]
    X86_AT(c, 0xd7a4fu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 0d7a52  jl 0xd7aa7
    X86_AT(c, 0xd7a52u);
    if (x86_cc(c, 12)) { goto L_d7aa7; }
    X86_TICK(c, 13);
    // 0d7a54  mov esi, dword ptr [ebx + 4]
    X86_AT(c, 0xd7a54u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0d7a57  dec esi
    X86_AT(c, 0xd7a57u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0d7a58  jmp 0xd7b58
    X86_AT(c, 0xd7a58u);
    goto L_d7b58;
L_d7a5d:
    X86_TICK(c, 25);
    // 0d7a5d  mov eax, dword ptr [ebx]
    X86_AT(c, 0xd7a5du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0d7a5f  sub eax, dword ptr [ebx + 8]
    X86_AT(c, 0xd7a5fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 0d7a62  movsx esi, word ptr [ebx + 0x10]
    X86_AT(c, 0xd7a62u);
    c.r[6] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 0d7a66  sub esi, eax
    X86_AT(c, 0xd7a66u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d7a68  cmp edi, esi
    X86_AT(c, 0xd7a68u);
    (void)x86_sub(c, c.r[7], c.r[6], 0, 4);
    // 0d7a6a  jbe 0xd7aa7
    X86_AT(c, 0xd7a6au);
    if (x86_cc(c, 6)) { goto L_d7aa7; }
    X86_TICK(c, 87);
    // 0d7a6c  mov ecx, esi
    X86_AT(c, 0xd7a6cu);
    c.r[1] = c.r[6];
    // 0d7a6e  mov eax, dword ptr [ebx]
    X86_AT(c, 0xd7a6eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0d7a70  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd7a70u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d7a73  mov dword ptr [ebp - 0x14], edi
    X86_AT(c, 0xd7a73u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[7]);
    // 0d7a76  mov edi, dword ptr [ebp - 4]
    X86_AT(c, 0xd7a76u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d7a79  lea edx, [edx + edi*1]
    X86_AT(c, 0xd7a79u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[7]);
    // 0d7a7c  push esi
    X86_AT(c, 0xd7a7cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7a7d  push edi
    X86_AT(c, 0xd7a7du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7a7e  mov esi, eax
    X86_AT(c, 0xd7a7eu);
    c.r[6] = c.r[0];
    // 0d7a80  mov edi, edx
    X86_AT(c, 0xd7a80u);
    c.r[7] = c.r[2];
    // 0d7a82  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xd7a82u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0d7a84  pop edi
    X86_AT(c, 0xd7a84u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d7a85  pop esi
    X86_AT(c, 0xd7a85u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d7a86  add edi, esi
    X86_AT(c, 0xd7a86u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[6], 0, 4); }
    // 0d7a88  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd7a88u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d7a8b  mov byte ptr [eax + edi*1], 0xa
    X86_AT(c, 0xd7a8bu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7])), 0xAu);
    // 0d7a8f  lea eax, [esi + 1]
    X86_AT(c, 0xd7a8fu);
    c.r[0] = (uint32_t)(c.r[6] + 0x1u);
    // 0d7a92  add dword ptr [ebp - 4], eax
    X86_AT(c, 0xd7a92u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0d7a95  mov edi, dword ptr [ebp - 0x14]
    X86_AT(c, 0xd7a95u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0d7a98  sub edi, eax
    X86_AT(c, 0xd7a98u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d7a9a  lea eax, [esi + 2]
    X86_AT(c, 0xd7a9au);
    c.r[0] = (uint32_t)(c.r[6] + 0x2u);
    // 0d7a9d  sub dword ptr [ebx + 4], eax
    X86_AT(c, 0xd7a9du);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0d7aa0  add dword ptr [ebx], eax
    X86_AT(c, 0xd7aa0u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0d7aa2  jmp 0xd7b76
    X86_AT(c, 0xd7aa2u);
    goto L_d7b76;
L_d7aa7:
    X86_TICK(c, 9);
    // 0d7aa7  mov esi, edi
    X86_AT(c, 0xd7aa7u);
    c.r[6] = c.r[7];
    // 0d7aa9  jmp 0xd7b58
    X86_AT(c, 0xd7aa9u);
    goto L_d7b58;
L_d7aae:
    X86_TICK(c, 13);
    // 0d7aae  mov word ptr [ebx + 0x10], 0xffff
    X86_AT(c, 0xd7aaeu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFFu);
    // 0d7ab4  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0xd7ab4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0d7ab7  cmp edi, eax
    X86_AT(c, 0xd7ab7u);
    (void)x86_sub(c, c.r[7], c.r[0], 0, 4);
    // 0d7ab9  jl 0xd7adf
    X86_AT(c, 0xd7ab9u);
    if (x86_cc(c, 12)) { goto L_d7adf; }
    X86_TICK(c, 7);
    // 0d7abb  and eax, eax
    X86_AT(c, 0xd7abbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d7abd  jle 0xd7adf
    X86_AT(c, 0xd7abdu);
    if (x86_cc(c, 14)) { goto L_d7adf; }
    X86_TICK(c, 53);
    // 0d7abf  xchg ecx, eax
    X86_AT(c, 0xd7abfu);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
    // 0d7ac0  mov eax, dword ptr [ebx]
    X86_AT(c, 0xd7ac0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0d7ac2  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd7ac2u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d7ac5  push esi
    X86_AT(c, 0xd7ac5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7ac6  push edi
    X86_AT(c, 0xd7ac6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7ac7  mov esi, eax
    X86_AT(c, 0xd7ac7u);
    c.r[6] = c.r[0];
    // 0d7ac9  mov edi, edx
    X86_AT(c, 0xd7ac9u);
    c.r[7] = c.r[2];
    // 0d7acb  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xd7acbu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0d7acd  pop edi
    X86_AT(c, 0xd7acdu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d7ace  pop esi
    X86_AT(c, 0xd7aceu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d7acf  sub edi, dword ptr [ebx + 4]
    X86_AT(c, 0xd7acfu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4); }
    // 0d7ad2  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0xd7ad2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0d7ad5  add dword ptr [ebp - 4], eax
    X86_AT(c, 0xd7ad5u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0d7ad8  mov dword ptr [ebx + 4], 0
    X86_AT(c, 0xd7ad8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0x0u);
L_d7adf:
    X86_TICK(c, 7);
    // 0d7adf  cmp edi, 0x200
    X86_AT(c, 0xd7adfu);
    (void)x86_sub(c, c.r[7], 0x200u, 0, 4);
    // 0d7ae5  jb 0xd7b1d
    X86_AT(c, 0xd7ae5u);
    if (x86_cc(c, 2)) { goto L_d7b1d; }
    X86_TICK(c, 10);
    // 0d7ae7  mov esi, edi
    X86_AT(c, 0xd7ae7u);
    c.r[6] = c.r[7];
    // 0d7ae9  shr esi, 9
    X86_AT(c, 0xd7ae9u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 5, v, 0x9u, 4, w); if (w) c.r[6] = r; }
    // 0d7aec  shl esi, 9
    X86_AT(c, 0xd7aecu);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[6] = r; }
    // 0d7aef  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xd7aefu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
L_d7af6:
    X86_TICK(c, 27);
    // 0d7af6  push esi
    X86_AT(c, 0xd7af6u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7af7  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd7af7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d7afa  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd7afau);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0d7afd  push eax
    X86_AT(c, 0xd7afdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7afe  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xd7afeu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0d7b01  push eax
    X86_AT(c, 0xd7b01u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7b02  call 0xda8a8
    X86_AT(c, 0xd7b02u);
    push32(c, 0xd7b07u); x86_call_known(c, 0xda8a8u, f_000da8a8); X86_RET(c, 0xd7b07u);
    X86_TICK(c, 25);
    // 0d7b07  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xd7b07u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0d7b0a  add dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xd7b0au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0d7b0d  sub esi, eax
    X86_AT(c, 0xd7b0du);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d7b0f  add dword ptr [ebp - 4], eax
    X86_AT(c, 0xd7b0fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0d7b12  and esi, esi
    X86_AT(c, 0xd7b12u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d7b14  je 0xd7b1a
    X86_AT(c, 0xd7b14u);
    if (x86_cc(c, 4)) { goto L_d7b1a; }
    X86_TICK(c, 7);
    // 0d7b16  and eax, eax
    X86_AT(c, 0xd7b16u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d7b18  jne 0xd7af6
    X86_AT(c, 0xd7b18u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd7af6u); goto L_d7af6; }
L_d7b1a:
    X86_TICK(c, 6);
    // 0d7b1a  sub edi, dword ptr [ebp - 0xc]
    X86_AT(c, 0xd7b1au);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 4); }
L_d7b1d:
    X86_TICK(c, 7);
    // 0d7b1d  and edi, edi
    X86_AT(c, 0xd7b1du);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0d7b1f  jbe 0xd7b76
    X86_AT(c, 0xd7b1fu);
    if (x86_cc(c, 6)) { goto L_d7b76; }
    X86_TICK(c, 12);
    // 0d7b21  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0xd7b21u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 0d7b25  jne 0xd7b46
    X86_AT(c, 0xd7b25u);
    if (x86_cc(c, 5)) { goto L_d7b46; }
    X86_TICK(c, 12);
    // 0d7b27  test byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0xd7b27u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x10u, 1);
    // 0d7b2b  jne 0xd7b7e
    X86_AT(c, 0xd7b2bu);
    if (x86_cc(c, 5)) { goto L_d7b7e; }
    X86_TICK(c, 20);
    // 0d7b2d  push 0x200
    X86_AT(c, 0xd7b2du);
    { uint32_t v = 0x200u; push32(c, v); }
    // 0d7b32  push dword ptr [ebx + 8]
    X86_AT(c, 0xd7b32u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 0d7b35  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xd7b35u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0d7b38  push eax
    X86_AT(c, 0xd7b38u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7b39  call 0xda8a8
    X86_AT(c, 0xd7b39u);
    push32(c, 0xd7b3eu); x86_call_known(c, 0xda8a8u, f_000da8a8); X86_RET(c, 0xd7b3eu);
    X86_TICK(c, 8);
    // 0d7b3e  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0xd7b3eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
    // 0d7b41  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0xd7b41u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0d7b44  mov dword ptr [ebx], eax
    X86_AT(c, 0xd7b44u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
L_d7b46:
    X86_TICK(c, 12);
    // 0d7b46  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0xd7b46u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 0d7b4a  jle 0xd7b7e
    X86_AT(c, 0xd7b4au);
    if (x86_cc(c, 14)) { goto L_d7b7e; }
L_d7b4c:
    X86_TICK(c, 13);
    // 0d7b4c  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0xd7b4cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0d7b4f  mov edx, edi
    X86_AT(c, 0xd7b4fu);
    c.r[2] = c.r[7];
    // 0d7b51  cmp edx, eax
    X86_AT(c, 0xd7b51u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0d7b53  jl 0xd7b56
    X86_AT(c, 0xd7b53u);
    if (x86_cc(c, 12)) { goto L_d7b56; }
    X86_TICK(c, 3);
    // 0d7b55  xchg edx, eax
    X86_AT(c, 0xd7b55u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_d7b56:
    X86_TICK(c, 2);
    // 0d7b56  mov esi, edx
    X86_AT(c, 0xd7b56u);
    c.r[6] = c.r[2];
L_d7b58:
    X86_TICK(c, 62);
    // 0d7b58  mov ecx, esi
    X86_AT(c, 0xd7b58u);
    c.r[1] = c.r[6];
    // 0d7b5a  mov eax, dword ptr [ebx]
    X86_AT(c, 0xd7b5au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0d7b5c  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd7b5cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d7b5f  add edx, dword ptr [ebp - 4]
    X86_AT(c, 0xd7b5fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0d7b62  push esi
    X86_AT(c, 0xd7b62u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7b63  push edi
    X86_AT(c, 0xd7b63u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7b64  mov esi, eax
    X86_AT(c, 0xd7b64u);
    c.r[6] = c.r[0];
    // 0d7b66  mov edi, edx
    X86_AT(c, 0xd7b66u);
    c.r[7] = c.r[2];
    // 0d7b68  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xd7b68u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0d7b6a  pop edi
    X86_AT(c, 0xd7b6au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d7b6b  pop esi
    X86_AT(c, 0xd7b6bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d7b6c  add dword ptr [ebp - 4], esi
    X86_AT(c, 0xd7b6cu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 0d7b6f  sub dword ptr [ebx + 4], esi
    X86_AT(c, 0xd7b6fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[6], 0, 4)); }
    // 0d7b72  sub edi, esi
    X86_AT(c, 0xd7b72u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0d7b74  add dword ptr [ebx], esi
    X86_AT(c, 0xd7b74u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
L_d7b76:
    X86_TICK(c, 7);
    // 0d7b76  and edi, edi
    X86_AT(c, 0xd7b76u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0d7b78  ja 0xd78b1
    X86_AT(c, 0xd7b78u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0xd78b1u); goto L_d78b1; }
L_d7b7e:
    X86_TICK(c, 12);
    // 0d7b7e  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0xd7b7eu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 0d7b82  jne 0xd7b88
    X86_AT(c, 0xd7b82u);
    if (x86_cc(c, 5)) { goto L_d7b88; }
    X86_TICK(c, 7);
    // 0d7b84  or byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0xd7b84u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x10u, 1)); }
L_d7b88:
    X86_TICK(c, 13);
    // 0d7b88  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd7b88u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d7b8b  mov dword ptr [0xb4370], eax
    X86_AT(c, 0xd7b8bu);
    wr32((c.sbase[3] + (uint32_t)(0xB4370u)), c.r[0]);
    // 0d7b90  jmp 0xd7cc0
    X86_AT(c, 0xd7b90u);
    goto L_d7cc0;
L_d7cc0:
    X86_TICK(c, 12);
    // 0d7cc0  cmp word ptr [0xb47e6], 0
    X86_AT(c, 0xd7cc0u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xB47E6u))), 0x0u, 0, 2);
    // 0d7cc8  je 0xd7cd0
    X86_AT(c, 0xd7cc8u);
    if (x86_cc(c, 4)) { goto L_d7cd0; }
    X86_TICK(c, 14);
    // 0d7cca  or byte ptr [ebx + 0xc], 0x20
    X86_AT(c, 0xd7ccau);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
    // 0d7cce  jmp 0xd7cda
    X86_AT(c, 0xd7cceu);
    goto L_d7cda;
L_d7cd0:
    X86_TICK(c, 6);
    // 0d7cd0  mov ax, word ptr [ebp - 0xe]
    X86_AT(c, 0xd7cd0u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))));
    // 0d7cd4  mov word ptr [0xb47e6], ax
    X86_AT(c, 0xd7cd4u);
    wr16((c.sbase[3] + (uint32_t)(0xB47E6u)), (c.r[0] & 0xFFFFu));
L_d7cda:
    X86_TICK(c, 28);
    // 0d7cda  pop edi
    X86_AT(c, 0xd7cdau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d7cdb  pop esi
    X86_AT(c, 0xd7cdbu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d7cdc  pop ebx
    X86_AT(c, 0xd7cdcu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d7cdd  leave 
    X86_AT(c, 0xd7cddu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d7cde  ret 0xc
    X86_AT(c, 0xd7cdeu);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0xd7b76u, "ran off the end of a function");
}
void f_000d7ce8(X86Cpu& c) {
    X86_TICK(c, 30);
    // 0d7ce8  enter 4, 0
    X86_AT(c, 0xd7ce8u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 0d7cec  push ebx
    X86_AT(c, 0xd7cecu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d7ced  push esi
    X86_AT(c, 0xd7cedu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7cee  push edi
    X86_AT(c, 0xd7ceeu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7cef  mov edi, dword ptr [ebp + 0x14]
    X86_AT(c, 0xd7cefu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0d7cf2  mov ebx, edi
    X86_AT(c, 0xd7cf2u);
    c.r[3] = c.r[7];
    // 0d7cf4  test byte ptr [ebx + 0xc], 2
    X86_AT(c, 0xd7cf4u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x2u, 1);
    // 0d7cf8  jne 0xd7d0a
    X86_AT(c, 0xd7cf8u);
    if (x86_cc(c, 5)) { goto L_d7d0a; }
    X86_TICK(c, 18);
    // 0d7cfa  mov ax, 5
    X86_AT(c, 0xd7cfau);
    s16(c, 0, 0x5u);
    // 0d7cfe  mov word ptr [0xb47e6], ax
    X86_AT(c, 0xd7cfeu);
    wr16((c.sbase[3] + (uint32_t)(0xB47E6u)), (c.r[0] & 0xFFFFu));
    // 0d7d04  or byte ptr [ebx + 0xc], 0x20
    X86_AT(c, 0xd7d04u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
    // 0d7d08  jmp 0xd7d4a
    X86_AT(c, 0xd7d08u);
    goto L_d7d4a;
L_d7d0a:
    X86_TICK(c, 12);
    // 0d7d0a  test byte ptr [ebx + 0xc], 0x80
    X86_AT(c, 0xd7d0au);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x80u, 1);
    // 0d7d0e  je 0xd7d16
    X86_AT(c, 0xd7d0eu);
    if (x86_cc(c, 4)) { goto L_d7d16; }
    X86_TICK(c, 9);
    // 0d7d10  push edi
    X86_AT(c, 0xd7d10u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7d11  call 0xd93a8
    X86_AT(c, 0xd7d11u);
    push32(c, 0xd7d16u); x86_call_known(c, 0xd93a8u, f_000d93a8); X86_RET(c, 0xd7d16u);
L_d7d16:
    X86_TICK(c, 19);
    // 0d7d16  and byte ptr [ebx + 0xd], 0xf7
    X86_AT(c, 0xd7d16u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xF7u, 1)); }
    // 0d7d1a  cmp dword ptr [ebx + 4], 0xffffffff
    X86_AT(c, 0xd7d1au);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0xFFFFFFFFu, 0, 4);
    // 0d7d1e  jne 0xd7d27
    X86_AT(c, 0xd7d1eu);
    if (x86_cc(c, 5)) { goto L_d7d27; }
    X86_TICK(c, 2);
    // 0d7d20  mov dword ptr [ebx + 4], 0
    X86_AT(c, 0xd7d20u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0x0u);
L_d7d27:
    X86_TICK(c, 36);
    // 0d7d27  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd7d27u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d7d2a  imul eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xd7d2au);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 4);
    // 0d7d2e  xchg esi, eax
    X86_AT(c, 0xd7d2eu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0d7d2f  and esi, esi
    X86_AT(c, 0xd7d2fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d7d31  jl 0xd7d3b
    X86_AT(c, 0xd7d31u);
    if (x86_cc(c, 12)) { goto L_d7d3b; }
    X86_TICK(c, 7);
    // 0d7d33  cmp esi, 0x7fffffff
    X86_AT(c, 0xd7d33u);
    (void)x86_sub(c, c.r[6], 0x7FFFFFFFu, 0, 4);
    // 0d7d39  jle 0xd7d46
    X86_AT(c, 0xd7d39u);
    if (x86_cc(c, 14)) { goto L_d7d46; }
L_d7d3b:
    X86_TICK(c, 9);
    // 0d7d3b  mov word ptr [0xb47e6], 1
    X86_AT(c, 0xd7d3bu);
    wr16((c.sbase[3] + (uint32_t)(0xB47E6u)), 0x1u);
    // 0d7d44  jmp 0xd7d4a
    X86_AT(c, 0xd7d44u);
    goto L_d7d4a;
L_d7d46:
    X86_TICK(c, 7);
    // 0d7d46  and esi, esi
    X86_AT(c, 0xd7d46u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d7d48  jne 0xd7d4e
    X86_AT(c, 0xd7d48u);
    if (x86_cc(c, 5)) { goto L_d7d4e; }
L_d7d4a:
    X86_TICK(c, 9);
    // 0d7d4a  sub eax, eax
    X86_AT(c, 0xd7d4au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d7d4c  jmp 0xd7d64
    X86_AT(c, 0xd7d4cu);
    goto L_d7d64;
L_d7d4e:
    X86_TICK(c, 16);
    // 0d7d4e  push esi
    X86_AT(c, 0xd7d4eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7d4f  push dword ptr [ebp + 8]
    X86_AT(c, 0xd7d4fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0d7d52  push edi
    X86_AT(c, 0xd7d52u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7d53  call 0xd7880
    X86_AT(c, 0xd7d53u);
    push32(c, 0xd7d58u); x86_call_known(c, 0xd7880u, f_000d7880); X86_RET(c, 0xd7d58u);
    X86_TICK(c, 48);
    // 0d7d58  mov eax, dword ptr [0xb4370]
    X86_AT(c, 0xd7d58u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4370u)));
    // 0d7d5d  cdq 
    X86_AT(c, 0xd7d5du);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0d7d5e  idiv dword ptr [ebp + 0xc]
    X86_AT(c, 0xd7d5eu);
    x86_idiv(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 4, 0xd7d5eu);
    // 0d7d61  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd7d61u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_d7d64:
    X86_TICK(c, 28);
    // 0d7d64  pop edi
    X86_AT(c, 0xd7d64u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d7d65  pop esi
    X86_AT(c, 0xd7d65u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d7d66  pop ebx
    X86_AT(c, 0xd7d66u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d7d67  leave 
    X86_AT(c, 0xd7d67u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d7d68  ret 
    X86_AT(c, 0xd7d68u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd7ce8u, "ran off the end of a function");
}
void f_000d7d90(X86Cpu& c) {
    X86_TICK(c, 67);
    // 0d7d90  enter 0xc, 0
    X86_AT(c, 0xd7d90u);
    x86_enter(c, 0xCu, 0x0u, 4);
    // 0d7d94  push ebx
    X86_AT(c, 0xd7d94u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d7d95  push esi
    X86_AT(c, 0xd7d95u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7d96  push edi
    X86_AT(c, 0xd7d96u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7d97  mov edi, dword ptr [ebp + 0x14]
    X86_AT(c, 0xd7d97u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0d7d9a  mov esi, dword ptr [ebp + 0x20]
    X86_AT(c, 0xd7d9au);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)));
    // 0d7d9d  mov ax, word ptr [0xb47e6]
    X86_AT(c, 0xd7d9du);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xB47E6u))));
    // 0d7da3  mov word ptr [ebp - 0xc], ax
    X86_AT(c, 0xd7da3u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), (c.r[0] & 0xFFFFu));
    // 0d7da7  sub eax, eax
    X86_AT(c, 0xd7da7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d7da9  mov word ptr [0xb47e6], ax
    X86_AT(c, 0xd7da9u);
    wr16((c.sbase[3] + (uint32_t)(0xB47E6u)), (c.r[0] & 0xFFFFu));
    // 0d7daf  mov ebx, eax
    X86_AT(c, 0xd7dafu);
    c.r[3] = c.r[0];
    // 0d7db1  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xd7db1u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0d7db4  mov byte ptr [edx], 1
    X86_AT(c, 0xd7db4u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), 0x1u);
    // 0d7db7  mov edx, dword ptr [ebp + 0x18]
    X86_AT(c, 0xd7db7u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 0d7dba  mov byte ptr [edx], al
    X86_AT(c, 0xd7dbau);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 0d7dbc  mov byte ptr [ebp - 2], al
    X86_AT(c, 0xd7dbcu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 0));
    // 0d7dbf  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd7dbfu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d7dc2  mov dword ptr [ebp - 8], edx
    X86_AT(c, 0xd7dc2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[2]);
    // 0d7dc5  mov dl, byte ptr [edx]
    X86_AT(c, 0xd7dc5u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[2]))));
    // 0d7dc7  mov byte ptr [ebp - 9], dl
    X86_AT(c, 0xd7dc7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), g8(c, 2));
    // 0d7dca  mov byte ptr [esi], al
    X86_AT(c, 0xd7dcau);
    wr8((c.sbase[3] + (uint32_t)(c.r[6])), g8(c, 0));
    // 0d7dcc  jmp 0xd7e45
    X86_AT(c, 0xd7dccu);
    goto L_d7e45;
L_d7dd1:
    X86_TICK(c, 13);
    // 0d7dd1  movzx edx, byte ptr [ebp - 9]
    X86_AT(c, 0xd7dd1u);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)));
    // 0d7dd5  cmp edx, 0x2b
    X86_AT(c, 0xd7dd5u);
    (void)x86_sub(c, c.r[2], 0x2Bu, 0, 4);
    // 0d7dd8  je 0xd7e1e
    X86_AT(c, 0xd7dd8u);
    if (x86_cc(c, 4)) { goto L_d7e1e; }
    X86_TICK(c, 7);
    // 0d7dda  cmp edx, 0x61
    X86_AT(c, 0xd7ddau);
    (void)x86_sub(c, c.r[2], 0x61u, 0, 4);
    // 0d7ddd  je 0xd7df8
    X86_AT(c, 0xd7dddu);
    if (x86_cc(c, 4)) { goto L_d7df8; }
    X86_TICK(c, 7);
    // 0d7ddf  cmp edx, 0x62
    X86_AT(c, 0xd7ddfu);
    (void)x86_sub(c, c.r[2], 0x62u, 0, 4);
    // 0d7de2  je 0xd7e2c
    X86_AT(c, 0xd7de2u);
    if (x86_cc(c, 4)) { goto L_d7e2c; }
    X86_TICK(c, 7);
    // 0d7de4  cmp edx, 0x72
    X86_AT(c, 0xd7de4u);
    (void)x86_sub(c, c.r[2], 0x72u, 0, 4);
    // 0d7de7  je 0xd7e13
    X86_AT(c, 0xd7de7u);
    if (x86_cc(c, 4)) { goto L_d7e13; }
    X86_TICK(c, 7);
    // 0d7de9  cmp edx, 0x74
    X86_AT(c, 0xd7de9u);
    (void)x86_sub(c, c.r[2], 0x74u, 0, 4);
    // 0d7dec  je 0xd7e34
    X86_AT(c, 0xd7decu);
    if (x86_cc(c, 4)) { goto L_d7e34; }
    X86_TICK(c, 7);
    // 0d7dee  cmp edx, 0x75
    X86_AT(c, 0xd7deeu);
    (void)x86_sub(c, c.r[2], 0x75u, 0, 4);
    // 0d7df1  je 0xd7e27
    X86_AT(c, 0xd7df1u);
    if (x86_cc(c, 4)) { goto L_d7e27; }
    X86_TICK(c, 7);
    // 0d7df3  cmp edx, 0x77
    X86_AT(c, 0xd7df3u);
    (void)x86_sub(c, c.r[2], 0x77u, 0, 4);
    // 0d7df6  jne 0xd7e4f
    X86_AT(c, 0xd7df6u);
    if (x86_cc(c, 5)) { goto L_d7e4f; }
L_d7df8:
    X86_TICK(c, 7);
    // 0d7df8  and bl, bl
    X86_AT(c, 0xd7df8u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0d7dfa  jne 0xd7e4f
    X86_AT(c, 0xd7dfau);
    if (x86_cc(c, 5)) { goto L_d7e4f; }
    X86_TICK(c, 33);
    // 0d7dfc  mov bl, 1
    X86_AT(c, 0xd7dfcu);
    s8(c, 3, 0x1u);
    // 0d7dfe  mov byte ptr [edi], bl
    X86_AT(c, 0xd7dfeu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), g8(c, 3));
    // 0d7e00  mov al, byte ptr [ebp - 9]
    X86_AT(c, 0xd7e00u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u))));
    // 0d7e03  cmp al, 0x61
    X86_AT(c, 0xd7e03u);
    (void)x86_sub(c, g8(c, 0), 0x61u, 0, 1);
    // 0d7e05  mov edx, dword ptr [ebp + 0x18]
    X86_AT(c, 0xd7e05u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 0d7e08  sete byte ptr [edx]
    X86_AT(c, 0xd7e08u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), x86_cc(c, 4) ? 1u : 0u);
    // 0d7e0b  cmp al, 0x77
    X86_AT(c, 0xd7e0bu);
    (void)x86_sub(c, g8(c, 0), 0x77u, 0, 1);
    // 0d7e0d  sete byte ptr [ebp - 2]
    X86_AT(c, 0xd7e0du);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), x86_cc(c, 4) ? 1u : 0u);
    // 0d7e11  jmp 0xd7e3a
    X86_AT(c, 0xd7e11u);
    goto L_d7e3a;
L_d7e13:
    X86_TICK(c, 7);
    // 0d7e13  and bl, bl
    X86_AT(c, 0xd7e13u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0d7e15  jne 0xd7e4f
    X86_AT(c, 0xd7e15u);
    if (x86_cc(c, 5)) { goto L_d7e4f; }
    X86_TICK(c, 11);
    // 0d7e17  mov bl, 1
    X86_AT(c, 0xd7e17u);
    s8(c, 3, 0x1u);
    // 0d7e19  mov byte ptr [edi], 0
    X86_AT(c, 0xd7e19u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0x0u);
    // 0d7e1c  jmp 0xd7e3a
    X86_AT(c, 0xd7e1cu);
    goto L_d7e3a;
L_d7e1e:
    X86_TICK(c, 7);
    // 0d7e1e  and bl, bl
    X86_AT(c, 0xd7e1eu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0d7e20  je 0xd7e4f
    X86_AT(c, 0xd7e20u);
    if (x86_cc(c, 4)) { goto L_d7e4f; }
    X86_TICK(c, 9);
    // 0d7e22  mov byte ptr [edi], 2
    X86_AT(c, 0xd7e22u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0x2u);
    // 0d7e25  jmp 0xd7e3a
    X86_AT(c, 0xd7e25u);
    goto L_d7e3a;
L_d7e27:
    X86_TICK(c, 11);
    // 0d7e27  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xd7e27u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0d7e2a  jmp 0xd7e2f
    X86_AT(c, 0xd7e2au);
    goto L_d7e2f;
L_d7e2c:
    X86_TICK(c, 4);
    // 0d7e2c  mov eax, dword ptr [ebp + 0x1c]
    X86_AT(c, 0xd7e2cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
L_d7e2f:
    X86_TICK(c, 9);
    // 0d7e2f  mov byte ptr [eax], 0
    X86_AT(c, 0xd7e2fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), 0x0u);
    // 0d7e32  jmp 0xd7e3a
    X86_AT(c, 0xd7e32u);
    goto L_d7e3a;
L_d7e34:
    X86_TICK(c, 6);
    // 0d7e34  mov eax, dword ptr [ebp + 0x1c]
    X86_AT(c, 0xd7e34u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 0d7e37  mov byte ptr [eax], 1
    X86_AT(c, 0xd7e37u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), 0x1u);
L_d7e3a:
    X86_TICK(c, 16);
    // 0d7e3a  inc dword ptr [ebp - 8]
    X86_AT(c, 0xd7e3au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d7e3d  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xd7e3du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0d7e40  mov al, byte ptr [eax]
    X86_AT(c, 0xd7e40u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0d7e42  mov byte ptr [ebp - 9], al
    X86_AT(c, 0xd7e42u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), g8(c, 0));
L_d7e45:
    X86_TICK(c, 12);
    // 0d7e45  cmp byte ptr [ebp - 9], 0
    X86_AT(c, 0xd7e45u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 0d7e49  jne 0xd7dd1
    X86_AT(c, 0xd7e49u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd7dd1u); goto L_d7dd1; }
    X86_TICK(c, 7);
    // 0d7e4b  and bl, bl
    X86_AT(c, 0xd7e4bu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0d7e4d  jne 0xd7e5a
    X86_AT(c, 0xd7e4du);
    if (x86_cc(c, 5)) { goto L_d7e5a; }
L_d7e4f:
    X86_TICK(c, 9);
    // 0d7e4f  mov word ptr [0xb47e6], 1
    X86_AT(c, 0xd7e4fu);
    wr16((c.sbase[3] + (uint32_t)(0xB47E6u)), 0x1u);
    // 0d7e58  jmp 0xd7eb6
    X86_AT(c, 0xd7e58u);
    goto L_d7eb6;
L_d7e5a:
    X86_TICK(c, 12);
    // 0d7e5a  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0xd7e5au);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 0d7e5e  jne 0xd7e74
    X86_AT(c, 0xd7e5eu);
    if (x86_cc(c, 5)) { goto L_d7e74; }
    X86_TICK(c, 29);
    // 0d7e60  mov eax, dword ptr [ebp + 0x1c]
    X86_AT(c, 0xd7e60u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 0d7e63  cmp byte ptr [eax], 0
    X86_AT(c, 0xd7e63u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x0u, 0, 1);
    // 0d7e66  mov al, byte ptr [edi]
    X86_AT(c, 0xd7e66u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0d7e68  push eax
    X86_AT(c, 0xd7e68u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7e69  push dword ptr [ebp + 8]
    X86_AT(c, 0xd7e69u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0d7e6c  call 0xda218
    X86_AT(c, 0xd7e6cu);
    push32(c, 0xd7e71u); x86_call_known(c, 0xda218u, f_000da218); X86_RET(c, 0xd7e71u);
    X86_TICK(c, 2);
    // 0d7e71  mov byte ptr [ebp - 1], al
    X86_AT(c, 0xd7e71u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
L_d7e74:
    X86_TICK(c, 16);
    // 0d7e74  mov eax, dword ptr [ebp + 0x18]
    X86_AT(c, 0xd7e74u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 0d7e77  cmp byte ptr [eax], 0
    X86_AT(c, 0xd7e77u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x0u, 0, 1);
    // 0d7e7a  je 0xd7e86
    X86_AT(c, 0xd7e7au);
    if (x86_cc(c, 4)) { goto L_d7e86; }
    X86_TICK(c, 12);
    // 0d7e7c  cmp word ptr [0xb47e6], 2
    X86_AT(c, 0xd7e7cu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xB47E6u))), 0x2u, 0, 2);
    // 0d7e84  je 0xd7e8c
    X86_AT(c, 0xd7e84u);
    if (x86_cc(c, 4)) { goto L_d7e8c; }
L_d7e86:
    X86_TICK(c, 12);
    // 0d7e86  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0xd7e86u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 0d7e8a  je 0xd7eac
    X86_AT(c, 0xd7e8au);
    if (x86_cc(c, 4)) { goto L_d7eac; }
L_d7e8c:
    X86_TICK(c, 20);
    // 0d7e8c  sub eax, eax
    X86_AT(c, 0xd7e8cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d7e8e  mov word ptr [0xb47e6], ax
    X86_AT(c, 0xd7e8eu);
    wr16((c.sbase[3] + (uint32_t)(0xB47E6u)), (c.r[0] & 0xFFFFu));
    // 0d7e94  mov edx, dword ptr [ebp + 0x1c]
    X86_AT(c, 0xd7e94u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 0d7e97  cmp byte ptr [edx], 0
    X86_AT(c, 0xd7e97u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2]))), 0x0u, 0, 1);
    // 0d7e9a  je 0xd7e9f
    X86_AT(c, 0xd7e9au);
    if (x86_cc(c, 4)) { goto L_d7e9f; }
    X86_TICK(c, 9);
    // 0d7e9c  push eax
    X86_AT(c, 0xd7e9cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7e9d  jmp 0xd7ea1
    X86_AT(c, 0xd7e9du);
    goto L_d7ea1;
L_d7e9f:
    X86_TICK(c, 2);
    // 0d7e9f  push 0
    X86_AT(c, 0xd7e9fu);
    { uint32_t v = 0x0u; push32(c, v); }
L_d7ea1:
    X86_TICK(c, 12);
    // 0d7ea1  push dword ptr [ebp + 8]
    X86_AT(c, 0xd7ea1u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0d7ea4  call 0xda1f0
    X86_AT(c, 0xd7ea4u);
    push32(c, 0xd7ea9u); x86_call_known(c, 0xda1f0u, f_000da1f0); X86_RET(c, 0xd7ea9u);
    X86_TICK(c, 2);
    // 0d7ea9  mov byte ptr [ebp - 1], al
    X86_AT(c, 0xd7ea9u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
L_d7eac:
    X86_TICK(c, 12);
    // 0d7eac  cmp word ptr [0xb47e6], 0
    X86_AT(c, 0xd7eacu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xB47E6u))), 0x0u, 0, 2);
    // 0d7eb4  je 0xd7ebb
    X86_AT(c, 0xd7eb4u);
    if (x86_cc(c, 4)) { goto L_d7ebb; }
L_d7eb6:
    X86_TICK(c, 9);
    // 0d7eb6  mov byte ptr [esi], 1
    X86_AT(c, 0xd7eb6u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6])), 0x1u);
    // 0d7eb9  jmp 0xd7ec5
    X86_AT(c, 0xd7eb9u);
    goto L_d7ec5;
L_d7ebb:
    X86_TICK(c, 6);
    // 0d7ebb  mov ax, word ptr [ebp - 0xc]
    X86_AT(c, 0xd7ebbu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))));
    // 0d7ebf  mov word ptr [0xb47e6], ax
    X86_AT(c, 0xd7ebfu);
    wr16((c.sbase[3] + (uint32_t)(0xB47E6u)), (c.r[0] & 0xFFFFu));
L_d7ec5:
    X86_TICK(c, 32);
    // 0d7ec5  mov al, byte ptr [ebp - 1]
    X86_AT(c, 0xd7ec5u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))));
    // 0d7ec8  pop edi
    X86_AT(c, 0xd7ec8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d7ec9  pop esi
    X86_AT(c, 0xd7ec9u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d7eca  pop ebx
    X86_AT(c, 0xd7ecau);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d7ecb  leave 
    X86_AT(c, 0xd7ecbu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d7ecc  ret 0x1c
    X86_AT(c, 0xd7eccu);
    c.eip = pop32(c); c.r[4] += 0x1Cu; return;
    x86_fault(c, 0xd7d90u, "ran off the end of a function");
}
}
