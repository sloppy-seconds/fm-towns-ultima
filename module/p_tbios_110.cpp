#include "p_tbios_funcs.h"
namespace p_tbios {
void f_0000b96c(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00b96c  cmp bx, ax
    X86_AT(c, 0xb96cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b96f  jg 0xb980
    X86_AT(c, 0xb96fu);
    if (x86_cc(c, 15)) { goto L_b980; }
    X86_TICK(c, 7);
    // 00b971  cmp cx, ax
    X86_AT(c, 0xb971u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b974  jge 0xb97e
    X86_AT(c, 0xb974u);
    if (x86_cc(c, 13)) { goto L_b97e; }
    X86_TICK(c, 2);
    // 00b976  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0xb976u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
L_b97e:
    X86_TICK(c, 12);
    // 00b97e  clc 
    X86_AT(c, 0xb97eu);
    c.fl &= ~X86_CF;
    // 00b97f  ret 
    X86_AT(c, 0xb97fu);
    c.eip = pop32(c); return;
L_b980:
    X86_TICK(c, 12);
    // 00b980  stc 
    X86_AT(c, 0xb980u);
    c.fl |= X86_CF;
    // 00b981  ret 
    X86_AT(c, 0xb981u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb96cu, "ran off the end of a function");
}
void f_0000b96f(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00b96f  jg 0xb980
    X86_AT(c, 0xb96fu);
    if (x86_cc(c, 15)) { goto L_b980; }
    X86_TICK(c, 7);
    // 00b971  cmp cx, ax
    X86_AT(c, 0xb971u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b974  jge 0xb97e
    X86_AT(c, 0xb974u);
    if (x86_cc(c, 13)) { goto L_b97e; }
    X86_TICK(c, 2);
    // 00b976  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0xb976u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
L_b97e:
    X86_TICK(c, 12);
    // 00b97e  clc 
    X86_AT(c, 0xb97eu);
    c.fl &= ~X86_CF;
    // 00b97f  ret 
    X86_AT(c, 0xb97fu);
    c.eip = pop32(c); return;
L_b980:
    X86_TICK(c, 12);
    // 00b980  stc 
    X86_AT(c, 0xb980u);
    c.fl |= X86_CF;
    // 00b981  ret 
    X86_AT(c, 0xb981u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb96fu, "ran off the end of a function");
}
void f_0000b971(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00b971  cmp cx, ax
    X86_AT(c, 0xb971u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00b974  jge 0xb97e
    X86_AT(c, 0xb974u);
    if (x86_cc(c, 13)) { goto L_b97e; }
    X86_TICK(c, 2);
    // 00b976  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0xb976u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
L_b97e:
    X86_TICK(c, 12);
    // 00b97e  clc 
    X86_AT(c, 0xb97eu);
    c.fl &= ~X86_CF;
    // 00b97f  ret 
    X86_AT(c, 0xb97fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb971u, "ran off the end of a function");
}
void f_0000b974(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00b974  jge 0xb97e
    X86_AT(c, 0xb974u);
    if (x86_cc(c, 13)) { goto L_b97e; }
    X86_TICK(c, 2);
    // 00b976  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0xb976u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
L_b97e:
    X86_TICK(c, 12);
    // 00b97e  clc 
    X86_AT(c, 0xb97eu);
    c.fl &= ~X86_CF;
    // 00b97f  ret 
    X86_AT(c, 0xb97fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb974u, "ran off the end of a function");
}
void f_0000b97e(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00b97e  clc 
    X86_AT(c, 0xb97eu);
    c.fl &= ~X86_CF;
    // 00b97f  ret 
    X86_AT(c, 0xb97fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb97eu, "ran off the end of a function");
}
void f_0000b97f(X86Cpu& c) {
    X86_TICK(c, 10);
    // 00b97f  ret 
    X86_AT(c, 0xb97fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb97fu, "ran off the end of a function");
}
void f_0000b980(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00b980  stc 
    X86_AT(c, 0xb980u);
    c.fl |= X86_CF;
    // 00b981  ret 
    X86_AT(c, 0xb981u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb980u, "ran off the end of a function");
}
void f_0000b981(X86Cpu& c) {
    X86_TICK(c, 10);
    // 00b981  ret 
    X86_AT(c, 0xb981u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb981u, "ran off the end of a function");
}
void f_0000b984(X86Cpu& c) {
    X86_TICK(c, 36);
    // 00b984  lfs esi, fword ptr gs:[ebp]
    X86_AT(c, 0xb984u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 4, s); c.r[6] = o; }
    // 00b989  les edi, fword ptr gs:[ebp + 0x2c4]
    X86_AT(c, 0xb989u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x2C4u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[7] = o; }
    // 00b990  mov ecx, dword ptr gs:[ebp + 0x2cc]
    X86_AT(c, 0xb990u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2CCu)));
    // 00b997  shr ecx, 2
    X86_AT(c, 0xb997u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 00b99a  movsd dword ptr es:[edi], dword ptr fs:[esi]
    X86_AT(c, 0xb99au);
    x86_string(c, 0, 4, 243, 4, 4);
    // 00b99d  ret 
    X86_AT(c, 0xb99du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb984u, "ran off the end of a function");
}
void f_0000b9a0(X86Cpu& c) {
    X86_TICK(c, 29);
    // 00b9a0  mov eax, gs
    X86_AT(c, 0xb9a0u);
    c.r[0] = (uint32_t)c.sreg[5];
    // 00b9a2  mov es, eax
    X86_AT(c, 0xb9a2u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 00b9a4  lea edi, [ebp + 0x234]
    X86_AT(c, 0xb9a4u);
    c.r[7] = (uint32_t)(c.r[5] + 0x234u);
    // 00b9aa  mov ecx, 0x20
    X86_AT(c, 0xb9aau);
    c.r[1] = 0x20u;
    // 00b9af  sub eax, eax
    X86_AT(c, 0xb9afu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00b9b1  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xb9b1u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 00b9b3  test byte ptr gs:[ebp + 0x22a], 1
    X86_AT(c, 0xb9b3u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au))) & 0x1u, 1);
    // 00b9bb  jne 0xbaa0
    X86_AT(c, 0xb9bbu);
    if (x86_cc(c, 5)) { goto L_baa0; }
    X86_TICK(c, 18);
    // 00b9c1  mov cl, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xb9c1u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))));
    // 00b9c8  mov al, cl
    X86_AT(c, 0xb9c8u);
    s8(c, 0, g8(c, 1));
    // 00b9ca  shr al, 1
    X86_AT(c, 0xb9cau);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 00b9cc  mov byte ptr gs:[ebp + 0x229], al
    X86_AT(c, 0xb9ccu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u)), g8(c, 0));
    // 00b9d3  test cl, 1
    X86_AT(c, 0xb9d3u);
    (void)x86_logic(c, g8(c, 1) & 0x1u, 1);
    // 00b9d6  je 0xb9e3
    X86_AT(c, 0xb9d6u);
    if (x86_cc(c, 4)) { goto L_b9e3; }
    X86_TICK(c, 14);
    // 00b9d8  inc cl
    X86_AT(c, 0xb9d8u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_inc(c, v, 1)); }
    // 00b9da  shr cl, 1
    X86_AT(c, 0xb9dau);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 1, r); }
    // 00b9dc  mov ch, 0
    X86_AT(c, 0xb9dcu);
    s8(c, 5, 0x0u);
    // 00b9de  call 0xba34
    X86_AT(c, 0xb9deu);
    push32(c, 0xb9e3u); f_0000ba34(c); X86_RET(c, 0xb9e3u);
L_b9e3:
    X86_TICK(c, 12);
    // 00b9e3  cmp byte ptr gs:[ebp + 0x229], 0
    X86_AT(c, 0xb9e3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))), 0x0u, 0, 1);
    // 00b9eb  je 0xba32
    X86_AT(c, 0xb9ebu);
    if (x86_cc(c, 4)) { goto L_ba32; }
    X86_TICK(c, 2);
    // 00b9ed  mov bx, 2
    X86_AT(c, 0xb9edu);
    s16(c, 3, 0x2u);
L_b9f1:
    X86_TICK(c, 11);
    // 00b9f1  push ebx
    X86_AT(c, 0xb9f1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00b9f2  mov word ptr gs:[ebp + 0x30c], bx
    X86_AT(c, 0xb9f2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x30Cu)), (c.r[3] & 0xFFFFu));
    // 00b9fa  call 0xbbfc
    X86_AT(c, 0xb9fau);
    push32(c, 0xb9ffu); f_0000bbfc(c); X86_RET(c, 0xb9ffu);
    X86_TICK(c, 37);
    // 00b9ff  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xb9ffu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba06  mul ah
    X86_AT(c, 0xba06u);
    x86_mul(c, g8(c, 4), 1);
    // 00ba08  add ax, 0x80
    X86_AT(c, 0xba08u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba0c  mov cl, ah
    X86_AT(c, 0xba0cu);
    s8(c, 1, g8(c, 4));
    // 00ba0e  call 0xbb94
    X86_AT(c, 0xba0eu);
    push32(c, 0xba13u); f_0000bb94(c); X86_RET(c, 0xba13u);
    X86_TICK(c, 37);
    // 00ba13  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xba13u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba1a  mul ah
    X86_AT(c, 0xba1au);
    x86_mul(c, g8(c, 4), 1);
    // 00ba1c  add ax, 0x80
    X86_AT(c, 0xba1cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba20  mov ch, ah
    X86_AT(c, 0xba20u);
    s8(c, 5, g8(c, 4));
    // 00ba22  call 0xba34
    X86_AT(c, 0xba22u);
    push32(c, 0xba27u); f_0000ba34(c); X86_RET(c, 0xba27u);
    X86_TICK(c, 13);
    // 00ba27  pop ebx
    X86_AT(c, 0xba27u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00ba28  add bx, 2
    X86_AT(c, 0xba28u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x2u, 0, 2)); }
    // 00ba2c  cmp bx, 0x5a
    X86_AT(c, 0xba2cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0x5Au, 0, 2);
    // 00ba30  jbe 0xb9f1
    X86_AT(c, 0xba30u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0xb9f1u); goto L_b9f1; }
L_ba32:
    X86_TICK(c, 10);
    // 00ba32  ret 
    X86_AT(c, 0xba32u);
    c.eip = pop32(c); return;
L_baa0:
    X86_TICK(c, 29);
    // 00baa0  sub eax, eax
    X86_AT(c, 0xbaa0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00baa2  mov al, 0x20
    X86_AT(c, 0xbaa2u);
    s8(c, 0, 0x20u);
    // 00baa4  mov bl, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xbaa4u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))));
    // 00baab  sub al, bl
    X86_AT(c, 0xbaabu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, g8(c, 3), 0, 1)); }
    // 00baad  shr al, 1
    X86_AT(c, 0xbaadu);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 00baaf  lea edi, [ebp + eax*4 + 0x234]
    X86_AT(c, 0xbaafu);
    c.r[7] = (uint32_t)(c.r[5] + c.r[0] * 4 + 0x234u);
    // 00bab6  mov al, bl
    X86_AT(c, 0xbab6u);
    s8(c, 0, g8(c, 3));
    // 00bab8  inc eax
    X86_AT(c, 0xbab8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 00bab9  shr eax, 1
    X86_AT(c, 0xbab9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00babb  test bl, 1
    X86_AT(c, 0xbabbu);
    (void)x86_logic(c, g8(c, 3) & 0x1u, 1);
    // 00babe  je 0xbacc
    X86_AT(c, 0xbabeu);
    if (x86_cc(c, 4)) { goto L_bacc; }
    X86_TICK(c, 11);
    // 00bac0  mov eax, dword ptr cs:[eax*4 + 0xbd2c]
    X86_AT(c, 0xbac0u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBD2Cu)));
    // 00bac8  jmp 0xbad4
    X86_AT(c, 0xbac8u);
    goto L_bad4;
L_bacc:
    X86_TICK(c, 4);
    // 00bacc  mov eax, dword ptr cs:[eax*4 + 0xbd70]
    X86_AT(c, 0xbaccu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBD70u)));
L_bad4:
    X86_TICK(c, 23);
    // 00bad4  movzx ecx, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xbad4u);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)));
    // 00badc  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xbadcu);
    x86_string(c, 2, 4, 243, 4, 3);
    // 00bade  ret 
    X86_AT(c, 0xbadeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb9a0u, "ran off the end of a function");
}
void f_0000b9a2(X86Cpu& c) {
    X86_TICK(c, 27);
    // 00b9a2  mov es, eax
    X86_AT(c, 0xb9a2u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 00b9a4  lea edi, [ebp + 0x234]
    X86_AT(c, 0xb9a4u);
    c.r[7] = (uint32_t)(c.r[5] + 0x234u);
    // 00b9aa  mov ecx, 0x20
    X86_AT(c, 0xb9aau);
    c.r[1] = 0x20u;
    // 00b9af  sub eax, eax
    X86_AT(c, 0xb9afu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00b9b1  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xb9b1u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 00b9b3  test byte ptr gs:[ebp + 0x22a], 1
    X86_AT(c, 0xb9b3u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au))) & 0x1u, 1);
    // 00b9bb  jne 0xbaa0
    X86_AT(c, 0xb9bbu);
    if (x86_cc(c, 5)) { goto L_baa0; }
    X86_TICK(c, 18);
    // 00b9c1  mov cl, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xb9c1u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))));
    // 00b9c8  mov al, cl
    X86_AT(c, 0xb9c8u);
    s8(c, 0, g8(c, 1));
    // 00b9ca  shr al, 1
    X86_AT(c, 0xb9cau);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 00b9cc  mov byte ptr gs:[ebp + 0x229], al
    X86_AT(c, 0xb9ccu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u)), g8(c, 0));
    // 00b9d3  test cl, 1
    X86_AT(c, 0xb9d3u);
    (void)x86_logic(c, g8(c, 1) & 0x1u, 1);
    // 00b9d6  je 0xb9e3
    X86_AT(c, 0xb9d6u);
    if (x86_cc(c, 4)) { goto L_b9e3; }
    X86_TICK(c, 14);
    // 00b9d8  inc cl
    X86_AT(c, 0xb9d8u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_inc(c, v, 1)); }
    // 00b9da  shr cl, 1
    X86_AT(c, 0xb9dau);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 1, r); }
    // 00b9dc  mov ch, 0
    X86_AT(c, 0xb9dcu);
    s8(c, 5, 0x0u);
    // 00b9de  call 0xba34
    X86_AT(c, 0xb9deu);
    push32(c, 0xb9e3u); f_0000ba34(c); X86_RET(c, 0xb9e3u);
L_b9e3:
    X86_TICK(c, 12);
    // 00b9e3  cmp byte ptr gs:[ebp + 0x229], 0
    X86_AT(c, 0xb9e3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))), 0x0u, 0, 1);
    // 00b9eb  je 0xba32
    X86_AT(c, 0xb9ebu);
    if (x86_cc(c, 4)) { goto L_ba32; }
    X86_TICK(c, 2);
    // 00b9ed  mov bx, 2
    X86_AT(c, 0xb9edu);
    s16(c, 3, 0x2u);
L_b9f1:
    X86_TICK(c, 11);
    // 00b9f1  push ebx
    X86_AT(c, 0xb9f1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00b9f2  mov word ptr gs:[ebp + 0x30c], bx
    X86_AT(c, 0xb9f2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x30Cu)), (c.r[3] & 0xFFFFu));
    // 00b9fa  call 0xbbfc
    X86_AT(c, 0xb9fau);
    push32(c, 0xb9ffu); f_0000bbfc(c); X86_RET(c, 0xb9ffu);
    X86_TICK(c, 37);
    // 00b9ff  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xb9ffu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba06  mul ah
    X86_AT(c, 0xba06u);
    x86_mul(c, g8(c, 4), 1);
    // 00ba08  add ax, 0x80
    X86_AT(c, 0xba08u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba0c  mov cl, ah
    X86_AT(c, 0xba0cu);
    s8(c, 1, g8(c, 4));
    // 00ba0e  call 0xbb94
    X86_AT(c, 0xba0eu);
    push32(c, 0xba13u); f_0000bb94(c); X86_RET(c, 0xba13u);
    X86_TICK(c, 37);
    // 00ba13  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xba13u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba1a  mul ah
    X86_AT(c, 0xba1au);
    x86_mul(c, g8(c, 4), 1);
    // 00ba1c  add ax, 0x80
    X86_AT(c, 0xba1cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba20  mov ch, ah
    X86_AT(c, 0xba20u);
    s8(c, 5, g8(c, 4));
    // 00ba22  call 0xba34
    X86_AT(c, 0xba22u);
    push32(c, 0xba27u); f_0000ba34(c); X86_RET(c, 0xba27u);
    X86_TICK(c, 13);
    // 00ba27  pop ebx
    X86_AT(c, 0xba27u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00ba28  add bx, 2
    X86_AT(c, 0xba28u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x2u, 0, 2)); }
    // 00ba2c  cmp bx, 0x5a
    X86_AT(c, 0xba2cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0x5Au, 0, 2);
    // 00ba30  jbe 0xb9f1
    X86_AT(c, 0xba30u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0xb9f1u); goto L_b9f1; }
L_ba32:
    X86_TICK(c, 10);
    // 00ba32  ret 
    X86_AT(c, 0xba32u);
    c.eip = pop32(c); return;
L_baa0:
    X86_TICK(c, 29);
    // 00baa0  sub eax, eax
    X86_AT(c, 0xbaa0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00baa2  mov al, 0x20
    X86_AT(c, 0xbaa2u);
    s8(c, 0, 0x20u);
    // 00baa4  mov bl, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xbaa4u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))));
    // 00baab  sub al, bl
    X86_AT(c, 0xbaabu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, g8(c, 3), 0, 1)); }
    // 00baad  shr al, 1
    X86_AT(c, 0xbaadu);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 00baaf  lea edi, [ebp + eax*4 + 0x234]
    X86_AT(c, 0xbaafu);
    c.r[7] = (uint32_t)(c.r[5] + c.r[0] * 4 + 0x234u);
    // 00bab6  mov al, bl
    X86_AT(c, 0xbab6u);
    s8(c, 0, g8(c, 3));
    // 00bab8  inc eax
    X86_AT(c, 0xbab8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 00bab9  shr eax, 1
    X86_AT(c, 0xbab9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00babb  test bl, 1
    X86_AT(c, 0xbabbu);
    (void)x86_logic(c, g8(c, 3) & 0x1u, 1);
    // 00babe  je 0xbacc
    X86_AT(c, 0xbabeu);
    if (x86_cc(c, 4)) { goto L_bacc; }
    X86_TICK(c, 11);
    // 00bac0  mov eax, dword ptr cs:[eax*4 + 0xbd2c]
    X86_AT(c, 0xbac0u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBD2Cu)));
    // 00bac8  jmp 0xbad4
    X86_AT(c, 0xbac8u);
    goto L_bad4;
L_bacc:
    X86_TICK(c, 4);
    // 00bacc  mov eax, dword ptr cs:[eax*4 + 0xbd70]
    X86_AT(c, 0xbaccu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBD70u)));
L_bad4:
    X86_TICK(c, 23);
    // 00bad4  movzx ecx, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xbad4u);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)));
    // 00badc  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xbadcu);
    x86_string(c, 2, 4, 243, 4, 3);
    // 00bade  ret 
    X86_AT(c, 0xbadeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb9a2u, "ran off the end of a function");
}
void f_0000b9a4(X86Cpu& c) {
    X86_TICK(c, 25);
    // 00b9a4  lea edi, [ebp + 0x234]
    X86_AT(c, 0xb9a4u);
    c.r[7] = (uint32_t)(c.r[5] + 0x234u);
    // 00b9aa  mov ecx, 0x20
    X86_AT(c, 0xb9aau);
    c.r[1] = 0x20u;
    // 00b9af  sub eax, eax
    X86_AT(c, 0xb9afu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00b9b1  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xb9b1u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 00b9b3  test byte ptr gs:[ebp + 0x22a], 1
    X86_AT(c, 0xb9b3u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au))) & 0x1u, 1);
    // 00b9bb  jne 0xbaa0
    X86_AT(c, 0xb9bbu);
    if (x86_cc(c, 5)) { goto L_baa0; }
    X86_TICK(c, 18);
    // 00b9c1  mov cl, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xb9c1u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))));
    // 00b9c8  mov al, cl
    X86_AT(c, 0xb9c8u);
    s8(c, 0, g8(c, 1));
    // 00b9ca  shr al, 1
    X86_AT(c, 0xb9cau);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 00b9cc  mov byte ptr gs:[ebp + 0x229], al
    X86_AT(c, 0xb9ccu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u)), g8(c, 0));
    // 00b9d3  test cl, 1
    X86_AT(c, 0xb9d3u);
    (void)x86_logic(c, g8(c, 1) & 0x1u, 1);
    // 00b9d6  je 0xb9e3
    X86_AT(c, 0xb9d6u);
    if (x86_cc(c, 4)) { goto L_b9e3; }
    X86_TICK(c, 14);
    // 00b9d8  inc cl
    X86_AT(c, 0xb9d8u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_inc(c, v, 1)); }
    // 00b9da  shr cl, 1
    X86_AT(c, 0xb9dau);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 1, r); }
    // 00b9dc  mov ch, 0
    X86_AT(c, 0xb9dcu);
    s8(c, 5, 0x0u);
    // 00b9de  call 0xba34
    X86_AT(c, 0xb9deu);
    push32(c, 0xb9e3u); f_0000ba34(c); X86_RET(c, 0xb9e3u);
L_b9e3:
    X86_TICK(c, 12);
    // 00b9e3  cmp byte ptr gs:[ebp + 0x229], 0
    X86_AT(c, 0xb9e3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))), 0x0u, 0, 1);
    // 00b9eb  je 0xba32
    X86_AT(c, 0xb9ebu);
    if (x86_cc(c, 4)) { goto L_ba32; }
    X86_TICK(c, 2);
    // 00b9ed  mov bx, 2
    X86_AT(c, 0xb9edu);
    s16(c, 3, 0x2u);
L_b9f1:
    X86_TICK(c, 11);
    // 00b9f1  push ebx
    X86_AT(c, 0xb9f1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00b9f2  mov word ptr gs:[ebp + 0x30c], bx
    X86_AT(c, 0xb9f2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x30Cu)), (c.r[3] & 0xFFFFu));
    // 00b9fa  call 0xbbfc
    X86_AT(c, 0xb9fau);
    push32(c, 0xb9ffu); f_0000bbfc(c); X86_RET(c, 0xb9ffu);
    X86_TICK(c, 37);
    // 00b9ff  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xb9ffu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba06  mul ah
    X86_AT(c, 0xba06u);
    x86_mul(c, g8(c, 4), 1);
    // 00ba08  add ax, 0x80
    X86_AT(c, 0xba08u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba0c  mov cl, ah
    X86_AT(c, 0xba0cu);
    s8(c, 1, g8(c, 4));
    // 00ba0e  call 0xbb94
    X86_AT(c, 0xba0eu);
    push32(c, 0xba13u); f_0000bb94(c); X86_RET(c, 0xba13u);
    X86_TICK(c, 37);
    // 00ba13  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xba13u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba1a  mul ah
    X86_AT(c, 0xba1au);
    x86_mul(c, g8(c, 4), 1);
    // 00ba1c  add ax, 0x80
    X86_AT(c, 0xba1cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba20  mov ch, ah
    X86_AT(c, 0xba20u);
    s8(c, 5, g8(c, 4));
    // 00ba22  call 0xba34
    X86_AT(c, 0xba22u);
    push32(c, 0xba27u); f_0000ba34(c); X86_RET(c, 0xba27u);
    X86_TICK(c, 13);
    // 00ba27  pop ebx
    X86_AT(c, 0xba27u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00ba28  add bx, 2
    X86_AT(c, 0xba28u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x2u, 0, 2)); }
    // 00ba2c  cmp bx, 0x5a
    X86_AT(c, 0xba2cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0x5Au, 0, 2);
    // 00ba30  jbe 0xb9f1
    X86_AT(c, 0xba30u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0xb9f1u); goto L_b9f1; }
L_ba32:
    X86_TICK(c, 10);
    // 00ba32  ret 
    X86_AT(c, 0xba32u);
    c.eip = pop32(c); return;
L_baa0:
    X86_TICK(c, 29);
    // 00baa0  sub eax, eax
    X86_AT(c, 0xbaa0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00baa2  mov al, 0x20
    X86_AT(c, 0xbaa2u);
    s8(c, 0, 0x20u);
    // 00baa4  mov bl, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xbaa4u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))));
    // 00baab  sub al, bl
    X86_AT(c, 0xbaabu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, g8(c, 3), 0, 1)); }
    // 00baad  shr al, 1
    X86_AT(c, 0xbaadu);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 00baaf  lea edi, [ebp + eax*4 + 0x234]
    X86_AT(c, 0xbaafu);
    c.r[7] = (uint32_t)(c.r[5] + c.r[0] * 4 + 0x234u);
    // 00bab6  mov al, bl
    X86_AT(c, 0xbab6u);
    s8(c, 0, g8(c, 3));
    // 00bab8  inc eax
    X86_AT(c, 0xbab8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 00bab9  shr eax, 1
    X86_AT(c, 0xbab9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00babb  test bl, 1
    X86_AT(c, 0xbabbu);
    (void)x86_logic(c, g8(c, 3) & 0x1u, 1);
    // 00babe  je 0xbacc
    X86_AT(c, 0xbabeu);
    if (x86_cc(c, 4)) { goto L_bacc; }
    X86_TICK(c, 11);
    // 00bac0  mov eax, dword ptr cs:[eax*4 + 0xbd2c]
    X86_AT(c, 0xbac0u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBD2Cu)));
    // 00bac8  jmp 0xbad4
    X86_AT(c, 0xbac8u);
    goto L_bad4;
L_bacc:
    X86_TICK(c, 4);
    // 00bacc  mov eax, dword ptr cs:[eax*4 + 0xbd70]
    X86_AT(c, 0xbaccu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBD70u)));
L_bad4:
    X86_TICK(c, 23);
    // 00bad4  movzx ecx, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xbad4u);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)));
    // 00badc  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xbadcu);
    x86_string(c, 2, 4, 243, 4, 3);
    // 00bade  ret 
    X86_AT(c, 0xbadeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb9a4u, "ran off the end of a function");
}
void f_0000b9aa(X86Cpu& c) {
    X86_TICK(c, 23);
    // 00b9aa  mov ecx, 0x20
    X86_AT(c, 0xb9aau);
    c.r[1] = 0x20u;
    // 00b9af  sub eax, eax
    X86_AT(c, 0xb9afu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00b9b1  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xb9b1u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 00b9b3  test byte ptr gs:[ebp + 0x22a], 1
    X86_AT(c, 0xb9b3u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au))) & 0x1u, 1);
    // 00b9bb  jne 0xbaa0
    X86_AT(c, 0xb9bbu);
    if (x86_cc(c, 5)) { goto L_baa0; }
    X86_TICK(c, 18);
    // 00b9c1  mov cl, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xb9c1u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))));
    // 00b9c8  mov al, cl
    X86_AT(c, 0xb9c8u);
    s8(c, 0, g8(c, 1));
    // 00b9ca  shr al, 1
    X86_AT(c, 0xb9cau);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 00b9cc  mov byte ptr gs:[ebp + 0x229], al
    X86_AT(c, 0xb9ccu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u)), g8(c, 0));
    // 00b9d3  test cl, 1
    X86_AT(c, 0xb9d3u);
    (void)x86_logic(c, g8(c, 1) & 0x1u, 1);
    // 00b9d6  je 0xb9e3
    X86_AT(c, 0xb9d6u);
    if (x86_cc(c, 4)) { goto L_b9e3; }
    X86_TICK(c, 14);
    // 00b9d8  inc cl
    X86_AT(c, 0xb9d8u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_inc(c, v, 1)); }
    // 00b9da  shr cl, 1
    X86_AT(c, 0xb9dau);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 1, r); }
    // 00b9dc  mov ch, 0
    X86_AT(c, 0xb9dcu);
    s8(c, 5, 0x0u);
    // 00b9de  call 0xba34
    X86_AT(c, 0xb9deu);
    push32(c, 0xb9e3u); f_0000ba34(c); X86_RET(c, 0xb9e3u);
L_b9e3:
    X86_TICK(c, 12);
    // 00b9e3  cmp byte ptr gs:[ebp + 0x229], 0
    X86_AT(c, 0xb9e3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))), 0x0u, 0, 1);
    // 00b9eb  je 0xba32
    X86_AT(c, 0xb9ebu);
    if (x86_cc(c, 4)) { goto L_ba32; }
    X86_TICK(c, 2);
    // 00b9ed  mov bx, 2
    X86_AT(c, 0xb9edu);
    s16(c, 3, 0x2u);
L_b9f1:
    X86_TICK(c, 11);
    // 00b9f1  push ebx
    X86_AT(c, 0xb9f1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00b9f2  mov word ptr gs:[ebp + 0x30c], bx
    X86_AT(c, 0xb9f2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x30Cu)), (c.r[3] & 0xFFFFu));
    // 00b9fa  call 0xbbfc
    X86_AT(c, 0xb9fau);
    push32(c, 0xb9ffu); f_0000bbfc(c); X86_RET(c, 0xb9ffu);
    X86_TICK(c, 37);
    // 00b9ff  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xb9ffu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba06  mul ah
    X86_AT(c, 0xba06u);
    x86_mul(c, g8(c, 4), 1);
    // 00ba08  add ax, 0x80
    X86_AT(c, 0xba08u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba0c  mov cl, ah
    X86_AT(c, 0xba0cu);
    s8(c, 1, g8(c, 4));
    // 00ba0e  call 0xbb94
    X86_AT(c, 0xba0eu);
    push32(c, 0xba13u); f_0000bb94(c); X86_RET(c, 0xba13u);
    X86_TICK(c, 37);
    // 00ba13  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xba13u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba1a  mul ah
    X86_AT(c, 0xba1au);
    x86_mul(c, g8(c, 4), 1);
    // 00ba1c  add ax, 0x80
    X86_AT(c, 0xba1cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba20  mov ch, ah
    X86_AT(c, 0xba20u);
    s8(c, 5, g8(c, 4));
    // 00ba22  call 0xba34
    X86_AT(c, 0xba22u);
    push32(c, 0xba27u); f_0000ba34(c); X86_RET(c, 0xba27u);
    X86_TICK(c, 13);
    // 00ba27  pop ebx
    X86_AT(c, 0xba27u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00ba28  add bx, 2
    X86_AT(c, 0xba28u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x2u, 0, 2)); }
    // 00ba2c  cmp bx, 0x5a
    X86_AT(c, 0xba2cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0x5Au, 0, 2);
    // 00ba30  jbe 0xb9f1
    X86_AT(c, 0xba30u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0xb9f1u); goto L_b9f1; }
L_ba32:
    X86_TICK(c, 10);
    // 00ba32  ret 
    X86_AT(c, 0xba32u);
    c.eip = pop32(c); return;
L_baa0:
    X86_TICK(c, 29);
    // 00baa0  sub eax, eax
    X86_AT(c, 0xbaa0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00baa2  mov al, 0x20
    X86_AT(c, 0xbaa2u);
    s8(c, 0, 0x20u);
    // 00baa4  mov bl, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xbaa4u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))));
    // 00baab  sub al, bl
    X86_AT(c, 0xbaabu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, g8(c, 3), 0, 1)); }
    // 00baad  shr al, 1
    X86_AT(c, 0xbaadu);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 00baaf  lea edi, [ebp + eax*4 + 0x234]
    X86_AT(c, 0xbaafu);
    c.r[7] = (uint32_t)(c.r[5] + c.r[0] * 4 + 0x234u);
    // 00bab6  mov al, bl
    X86_AT(c, 0xbab6u);
    s8(c, 0, g8(c, 3));
    // 00bab8  inc eax
    X86_AT(c, 0xbab8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 00bab9  shr eax, 1
    X86_AT(c, 0xbab9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00babb  test bl, 1
    X86_AT(c, 0xbabbu);
    (void)x86_logic(c, g8(c, 3) & 0x1u, 1);
    // 00babe  je 0xbacc
    X86_AT(c, 0xbabeu);
    if (x86_cc(c, 4)) { goto L_bacc; }
    X86_TICK(c, 11);
    // 00bac0  mov eax, dword ptr cs:[eax*4 + 0xbd2c]
    X86_AT(c, 0xbac0u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBD2Cu)));
    // 00bac8  jmp 0xbad4
    X86_AT(c, 0xbac8u);
    goto L_bad4;
L_bacc:
    X86_TICK(c, 4);
    // 00bacc  mov eax, dword ptr cs:[eax*4 + 0xbd70]
    X86_AT(c, 0xbaccu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBD70u)));
L_bad4:
    X86_TICK(c, 23);
    // 00bad4  movzx ecx, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xbad4u);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)));
    // 00badc  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xbadcu);
    x86_string(c, 2, 4, 243, 4, 3);
    // 00bade  ret 
    X86_AT(c, 0xbadeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb9aau, "ran off the end of a function");
}
void f_0000b9af(X86Cpu& c) {
    X86_TICK(c, 21);
    // 00b9af  sub eax, eax
    X86_AT(c, 0xb9afu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00b9b1  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xb9b1u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 00b9b3  test byte ptr gs:[ebp + 0x22a], 1
    X86_AT(c, 0xb9b3u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au))) & 0x1u, 1);
    // 00b9bb  jne 0xbaa0
    X86_AT(c, 0xb9bbu);
    if (x86_cc(c, 5)) { goto L_baa0; }
    X86_TICK(c, 18);
    // 00b9c1  mov cl, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xb9c1u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))));
    // 00b9c8  mov al, cl
    X86_AT(c, 0xb9c8u);
    s8(c, 0, g8(c, 1));
    // 00b9ca  shr al, 1
    X86_AT(c, 0xb9cau);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 00b9cc  mov byte ptr gs:[ebp + 0x229], al
    X86_AT(c, 0xb9ccu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u)), g8(c, 0));
    // 00b9d3  test cl, 1
    X86_AT(c, 0xb9d3u);
    (void)x86_logic(c, g8(c, 1) & 0x1u, 1);
    // 00b9d6  je 0xb9e3
    X86_AT(c, 0xb9d6u);
    if (x86_cc(c, 4)) { goto L_b9e3; }
    X86_TICK(c, 14);
    // 00b9d8  inc cl
    X86_AT(c, 0xb9d8u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_inc(c, v, 1)); }
    // 00b9da  shr cl, 1
    X86_AT(c, 0xb9dau);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 1, r); }
    // 00b9dc  mov ch, 0
    X86_AT(c, 0xb9dcu);
    s8(c, 5, 0x0u);
    // 00b9de  call 0xba34
    X86_AT(c, 0xb9deu);
    push32(c, 0xb9e3u); f_0000ba34(c); X86_RET(c, 0xb9e3u);
L_b9e3:
    X86_TICK(c, 12);
    // 00b9e3  cmp byte ptr gs:[ebp + 0x229], 0
    X86_AT(c, 0xb9e3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))), 0x0u, 0, 1);
    // 00b9eb  je 0xba32
    X86_AT(c, 0xb9ebu);
    if (x86_cc(c, 4)) { goto L_ba32; }
    X86_TICK(c, 2);
    // 00b9ed  mov bx, 2
    X86_AT(c, 0xb9edu);
    s16(c, 3, 0x2u);
L_b9f1:
    X86_TICK(c, 11);
    // 00b9f1  push ebx
    X86_AT(c, 0xb9f1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00b9f2  mov word ptr gs:[ebp + 0x30c], bx
    X86_AT(c, 0xb9f2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x30Cu)), (c.r[3] & 0xFFFFu));
    // 00b9fa  call 0xbbfc
    X86_AT(c, 0xb9fau);
    push32(c, 0xb9ffu); f_0000bbfc(c); X86_RET(c, 0xb9ffu);
    X86_TICK(c, 37);
    // 00b9ff  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xb9ffu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba06  mul ah
    X86_AT(c, 0xba06u);
    x86_mul(c, g8(c, 4), 1);
    // 00ba08  add ax, 0x80
    X86_AT(c, 0xba08u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba0c  mov cl, ah
    X86_AT(c, 0xba0cu);
    s8(c, 1, g8(c, 4));
    // 00ba0e  call 0xbb94
    X86_AT(c, 0xba0eu);
    push32(c, 0xba13u); f_0000bb94(c); X86_RET(c, 0xba13u);
    X86_TICK(c, 37);
    // 00ba13  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xba13u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba1a  mul ah
    X86_AT(c, 0xba1au);
    x86_mul(c, g8(c, 4), 1);
    // 00ba1c  add ax, 0x80
    X86_AT(c, 0xba1cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba20  mov ch, ah
    X86_AT(c, 0xba20u);
    s8(c, 5, g8(c, 4));
    // 00ba22  call 0xba34
    X86_AT(c, 0xba22u);
    push32(c, 0xba27u); f_0000ba34(c); X86_RET(c, 0xba27u);
    X86_TICK(c, 13);
    // 00ba27  pop ebx
    X86_AT(c, 0xba27u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00ba28  add bx, 2
    X86_AT(c, 0xba28u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x2u, 0, 2)); }
    // 00ba2c  cmp bx, 0x5a
    X86_AT(c, 0xba2cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0x5Au, 0, 2);
    // 00ba30  jbe 0xb9f1
    X86_AT(c, 0xba30u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0xb9f1u); goto L_b9f1; }
L_ba32:
    X86_TICK(c, 10);
    // 00ba32  ret 
    X86_AT(c, 0xba32u);
    c.eip = pop32(c); return;
L_baa0:
    X86_TICK(c, 29);
    // 00baa0  sub eax, eax
    X86_AT(c, 0xbaa0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00baa2  mov al, 0x20
    X86_AT(c, 0xbaa2u);
    s8(c, 0, 0x20u);
    // 00baa4  mov bl, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xbaa4u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))));
    // 00baab  sub al, bl
    X86_AT(c, 0xbaabu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, g8(c, 3), 0, 1)); }
    // 00baad  shr al, 1
    X86_AT(c, 0xbaadu);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 00baaf  lea edi, [ebp + eax*4 + 0x234]
    X86_AT(c, 0xbaafu);
    c.r[7] = (uint32_t)(c.r[5] + c.r[0] * 4 + 0x234u);
    // 00bab6  mov al, bl
    X86_AT(c, 0xbab6u);
    s8(c, 0, g8(c, 3));
    // 00bab8  inc eax
    X86_AT(c, 0xbab8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 00bab9  shr eax, 1
    X86_AT(c, 0xbab9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00babb  test bl, 1
    X86_AT(c, 0xbabbu);
    (void)x86_logic(c, g8(c, 3) & 0x1u, 1);
    // 00babe  je 0xbacc
    X86_AT(c, 0xbabeu);
    if (x86_cc(c, 4)) { goto L_bacc; }
    X86_TICK(c, 11);
    // 00bac0  mov eax, dword ptr cs:[eax*4 + 0xbd2c]
    X86_AT(c, 0xbac0u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBD2Cu)));
    // 00bac8  jmp 0xbad4
    X86_AT(c, 0xbac8u);
    goto L_bad4;
L_bacc:
    X86_TICK(c, 4);
    // 00bacc  mov eax, dword ptr cs:[eax*4 + 0xbd70]
    X86_AT(c, 0xbaccu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBD70u)));
L_bad4:
    X86_TICK(c, 23);
    // 00bad4  movzx ecx, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xbad4u);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)));
    // 00badc  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xbadcu);
    x86_string(c, 2, 4, 243, 4, 3);
    // 00bade  ret 
    X86_AT(c, 0xbadeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb9afu, "ran off the end of a function");
}
void f_0000b9b1(X86Cpu& c) {
    X86_TICK(c, 19);
    // 00b9b1  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xb9b1u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 00b9b3  test byte ptr gs:[ebp + 0x22a], 1
    X86_AT(c, 0xb9b3u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au))) & 0x1u, 1);
    // 00b9bb  jne 0xbaa0
    X86_AT(c, 0xb9bbu);
    if (x86_cc(c, 5)) { goto L_baa0; }
    X86_TICK(c, 18);
    // 00b9c1  mov cl, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xb9c1u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))));
    // 00b9c8  mov al, cl
    X86_AT(c, 0xb9c8u);
    s8(c, 0, g8(c, 1));
    // 00b9ca  shr al, 1
    X86_AT(c, 0xb9cau);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 00b9cc  mov byte ptr gs:[ebp + 0x229], al
    X86_AT(c, 0xb9ccu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u)), g8(c, 0));
    // 00b9d3  test cl, 1
    X86_AT(c, 0xb9d3u);
    (void)x86_logic(c, g8(c, 1) & 0x1u, 1);
    // 00b9d6  je 0xb9e3
    X86_AT(c, 0xb9d6u);
    if (x86_cc(c, 4)) { goto L_b9e3; }
    X86_TICK(c, 14);
    // 00b9d8  inc cl
    X86_AT(c, 0xb9d8u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_inc(c, v, 1)); }
    // 00b9da  shr cl, 1
    X86_AT(c, 0xb9dau);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 1, r); }
    // 00b9dc  mov ch, 0
    X86_AT(c, 0xb9dcu);
    s8(c, 5, 0x0u);
    // 00b9de  call 0xba34
    X86_AT(c, 0xb9deu);
    push32(c, 0xb9e3u); f_0000ba34(c); X86_RET(c, 0xb9e3u);
L_b9e3:
    X86_TICK(c, 12);
    // 00b9e3  cmp byte ptr gs:[ebp + 0x229], 0
    X86_AT(c, 0xb9e3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))), 0x0u, 0, 1);
    // 00b9eb  je 0xba32
    X86_AT(c, 0xb9ebu);
    if (x86_cc(c, 4)) { goto L_ba32; }
    X86_TICK(c, 2);
    // 00b9ed  mov bx, 2
    X86_AT(c, 0xb9edu);
    s16(c, 3, 0x2u);
L_b9f1:
    X86_TICK(c, 11);
    // 00b9f1  push ebx
    X86_AT(c, 0xb9f1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00b9f2  mov word ptr gs:[ebp + 0x30c], bx
    X86_AT(c, 0xb9f2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x30Cu)), (c.r[3] & 0xFFFFu));
    // 00b9fa  call 0xbbfc
    X86_AT(c, 0xb9fau);
    push32(c, 0xb9ffu); f_0000bbfc(c); X86_RET(c, 0xb9ffu);
    X86_TICK(c, 37);
    // 00b9ff  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xb9ffu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba06  mul ah
    X86_AT(c, 0xba06u);
    x86_mul(c, g8(c, 4), 1);
    // 00ba08  add ax, 0x80
    X86_AT(c, 0xba08u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba0c  mov cl, ah
    X86_AT(c, 0xba0cu);
    s8(c, 1, g8(c, 4));
    // 00ba0e  call 0xbb94
    X86_AT(c, 0xba0eu);
    push32(c, 0xba13u); f_0000bb94(c); X86_RET(c, 0xba13u);
    X86_TICK(c, 37);
    // 00ba13  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xba13u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba1a  mul ah
    X86_AT(c, 0xba1au);
    x86_mul(c, g8(c, 4), 1);
    // 00ba1c  add ax, 0x80
    X86_AT(c, 0xba1cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba20  mov ch, ah
    X86_AT(c, 0xba20u);
    s8(c, 5, g8(c, 4));
    // 00ba22  call 0xba34
    X86_AT(c, 0xba22u);
    push32(c, 0xba27u); f_0000ba34(c); X86_RET(c, 0xba27u);
    X86_TICK(c, 13);
    // 00ba27  pop ebx
    X86_AT(c, 0xba27u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00ba28  add bx, 2
    X86_AT(c, 0xba28u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x2u, 0, 2)); }
    // 00ba2c  cmp bx, 0x5a
    X86_AT(c, 0xba2cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0x5Au, 0, 2);
    // 00ba30  jbe 0xb9f1
    X86_AT(c, 0xba30u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0xb9f1u); goto L_b9f1; }
L_ba32:
    X86_TICK(c, 10);
    // 00ba32  ret 
    X86_AT(c, 0xba32u);
    c.eip = pop32(c); return;
L_baa0:
    X86_TICK(c, 29);
    // 00baa0  sub eax, eax
    X86_AT(c, 0xbaa0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00baa2  mov al, 0x20
    X86_AT(c, 0xbaa2u);
    s8(c, 0, 0x20u);
    // 00baa4  mov bl, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xbaa4u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))));
    // 00baab  sub al, bl
    X86_AT(c, 0xbaabu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, g8(c, 3), 0, 1)); }
    // 00baad  shr al, 1
    X86_AT(c, 0xbaadu);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 00baaf  lea edi, [ebp + eax*4 + 0x234]
    X86_AT(c, 0xbaafu);
    c.r[7] = (uint32_t)(c.r[5] + c.r[0] * 4 + 0x234u);
    // 00bab6  mov al, bl
    X86_AT(c, 0xbab6u);
    s8(c, 0, g8(c, 3));
    // 00bab8  inc eax
    X86_AT(c, 0xbab8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 00bab9  shr eax, 1
    X86_AT(c, 0xbab9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00babb  test bl, 1
    X86_AT(c, 0xbabbu);
    (void)x86_logic(c, g8(c, 3) & 0x1u, 1);
    // 00babe  je 0xbacc
    X86_AT(c, 0xbabeu);
    if (x86_cc(c, 4)) { goto L_bacc; }
    X86_TICK(c, 11);
    // 00bac0  mov eax, dword ptr cs:[eax*4 + 0xbd2c]
    X86_AT(c, 0xbac0u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBD2Cu)));
    // 00bac8  jmp 0xbad4
    X86_AT(c, 0xbac8u);
    goto L_bad4;
L_bacc:
    X86_TICK(c, 4);
    // 00bacc  mov eax, dword ptr cs:[eax*4 + 0xbd70]
    X86_AT(c, 0xbaccu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBD70u)));
L_bad4:
    X86_TICK(c, 23);
    // 00bad4  movzx ecx, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xbad4u);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)));
    // 00badc  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xbadcu);
    x86_string(c, 2, 4, 243, 4, 3);
    // 00bade  ret 
    X86_AT(c, 0xbadeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb9b1u, "ran off the end of a function");
}
void f_0000b9b3(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00b9b3  test byte ptr gs:[ebp + 0x22a], 1
    X86_AT(c, 0xb9b3u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au))) & 0x1u, 1);
    // 00b9bb  jne 0xbaa0
    X86_AT(c, 0xb9bbu);
    if (x86_cc(c, 5)) { goto L_baa0; }
    X86_TICK(c, 18);
    // 00b9c1  mov cl, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xb9c1u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))));
    // 00b9c8  mov al, cl
    X86_AT(c, 0xb9c8u);
    s8(c, 0, g8(c, 1));
    // 00b9ca  shr al, 1
    X86_AT(c, 0xb9cau);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 00b9cc  mov byte ptr gs:[ebp + 0x229], al
    X86_AT(c, 0xb9ccu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u)), g8(c, 0));
    // 00b9d3  test cl, 1
    X86_AT(c, 0xb9d3u);
    (void)x86_logic(c, g8(c, 1) & 0x1u, 1);
    // 00b9d6  je 0xb9e3
    X86_AT(c, 0xb9d6u);
    if (x86_cc(c, 4)) { goto L_b9e3; }
    X86_TICK(c, 14);
    // 00b9d8  inc cl
    X86_AT(c, 0xb9d8u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_inc(c, v, 1)); }
    // 00b9da  shr cl, 1
    X86_AT(c, 0xb9dau);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 1, r); }
    // 00b9dc  mov ch, 0
    X86_AT(c, 0xb9dcu);
    s8(c, 5, 0x0u);
    // 00b9de  call 0xba34
    X86_AT(c, 0xb9deu);
    push32(c, 0xb9e3u); f_0000ba34(c); X86_RET(c, 0xb9e3u);
L_b9e3:
    X86_TICK(c, 12);
    // 00b9e3  cmp byte ptr gs:[ebp + 0x229], 0
    X86_AT(c, 0xb9e3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))), 0x0u, 0, 1);
    // 00b9eb  je 0xba32
    X86_AT(c, 0xb9ebu);
    if (x86_cc(c, 4)) { goto L_ba32; }
    X86_TICK(c, 2);
    // 00b9ed  mov bx, 2
    X86_AT(c, 0xb9edu);
    s16(c, 3, 0x2u);
L_b9f1:
    X86_TICK(c, 11);
    // 00b9f1  push ebx
    X86_AT(c, 0xb9f1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00b9f2  mov word ptr gs:[ebp + 0x30c], bx
    X86_AT(c, 0xb9f2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x30Cu)), (c.r[3] & 0xFFFFu));
    // 00b9fa  call 0xbbfc
    X86_AT(c, 0xb9fau);
    push32(c, 0xb9ffu); f_0000bbfc(c); X86_RET(c, 0xb9ffu);
    X86_TICK(c, 37);
    // 00b9ff  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xb9ffu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba06  mul ah
    X86_AT(c, 0xba06u);
    x86_mul(c, g8(c, 4), 1);
    // 00ba08  add ax, 0x80
    X86_AT(c, 0xba08u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba0c  mov cl, ah
    X86_AT(c, 0xba0cu);
    s8(c, 1, g8(c, 4));
    // 00ba0e  call 0xbb94
    X86_AT(c, 0xba0eu);
    push32(c, 0xba13u); f_0000bb94(c); X86_RET(c, 0xba13u);
    X86_TICK(c, 37);
    // 00ba13  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xba13u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba1a  mul ah
    X86_AT(c, 0xba1au);
    x86_mul(c, g8(c, 4), 1);
    // 00ba1c  add ax, 0x80
    X86_AT(c, 0xba1cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba20  mov ch, ah
    X86_AT(c, 0xba20u);
    s8(c, 5, g8(c, 4));
    // 00ba22  call 0xba34
    X86_AT(c, 0xba22u);
    push32(c, 0xba27u); f_0000ba34(c); X86_RET(c, 0xba27u);
    X86_TICK(c, 13);
    // 00ba27  pop ebx
    X86_AT(c, 0xba27u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00ba28  add bx, 2
    X86_AT(c, 0xba28u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x2u, 0, 2)); }
    // 00ba2c  cmp bx, 0x5a
    X86_AT(c, 0xba2cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0x5Au, 0, 2);
    // 00ba30  jbe 0xb9f1
    X86_AT(c, 0xba30u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0xb9f1u); goto L_b9f1; }
L_ba32:
    X86_TICK(c, 10);
    // 00ba32  ret 
    X86_AT(c, 0xba32u);
    c.eip = pop32(c); return;
L_baa0:
    X86_TICK(c, 29);
    // 00baa0  sub eax, eax
    X86_AT(c, 0xbaa0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00baa2  mov al, 0x20
    X86_AT(c, 0xbaa2u);
    s8(c, 0, 0x20u);
    // 00baa4  mov bl, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xbaa4u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))));
    // 00baab  sub al, bl
    X86_AT(c, 0xbaabu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, g8(c, 3), 0, 1)); }
    // 00baad  shr al, 1
    X86_AT(c, 0xbaadu);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 00baaf  lea edi, [ebp + eax*4 + 0x234]
    X86_AT(c, 0xbaafu);
    c.r[7] = (uint32_t)(c.r[5] + c.r[0] * 4 + 0x234u);
    // 00bab6  mov al, bl
    X86_AT(c, 0xbab6u);
    s8(c, 0, g8(c, 3));
    // 00bab8  inc eax
    X86_AT(c, 0xbab8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 00bab9  shr eax, 1
    X86_AT(c, 0xbab9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00babb  test bl, 1
    X86_AT(c, 0xbabbu);
    (void)x86_logic(c, g8(c, 3) & 0x1u, 1);
    // 00babe  je 0xbacc
    X86_AT(c, 0xbabeu);
    if (x86_cc(c, 4)) { goto L_bacc; }
    X86_TICK(c, 11);
    // 00bac0  mov eax, dword ptr cs:[eax*4 + 0xbd2c]
    X86_AT(c, 0xbac0u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBD2Cu)));
    // 00bac8  jmp 0xbad4
    X86_AT(c, 0xbac8u);
    goto L_bad4;
L_bacc:
    X86_TICK(c, 4);
    // 00bacc  mov eax, dword ptr cs:[eax*4 + 0xbd70]
    X86_AT(c, 0xbaccu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBD70u)));
L_bad4:
    X86_TICK(c, 23);
    // 00bad4  movzx ecx, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xbad4u);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)));
    // 00badc  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xbadcu);
    x86_string(c, 2, 4, 243, 4, 3);
    // 00bade  ret 
    X86_AT(c, 0xbadeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb9b3u, "ran off the end of a function");
}
void f_0000b9bb(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00b9bb  jne 0xbaa0
    X86_AT(c, 0xb9bbu);
    if (x86_cc(c, 5)) { goto L_baa0; }
    X86_TICK(c, 18);
    // 00b9c1  mov cl, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xb9c1u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))));
    // 00b9c8  mov al, cl
    X86_AT(c, 0xb9c8u);
    s8(c, 0, g8(c, 1));
    // 00b9ca  shr al, 1
    X86_AT(c, 0xb9cau);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 00b9cc  mov byte ptr gs:[ebp + 0x229], al
    X86_AT(c, 0xb9ccu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u)), g8(c, 0));
    // 00b9d3  test cl, 1
    X86_AT(c, 0xb9d3u);
    (void)x86_logic(c, g8(c, 1) & 0x1u, 1);
    // 00b9d6  je 0xb9e3
    X86_AT(c, 0xb9d6u);
    if (x86_cc(c, 4)) { goto L_b9e3; }
    X86_TICK(c, 14);
    // 00b9d8  inc cl
    X86_AT(c, 0xb9d8u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_inc(c, v, 1)); }
    // 00b9da  shr cl, 1
    X86_AT(c, 0xb9dau);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 1, r); }
    // 00b9dc  mov ch, 0
    X86_AT(c, 0xb9dcu);
    s8(c, 5, 0x0u);
    // 00b9de  call 0xba34
    X86_AT(c, 0xb9deu);
    push32(c, 0xb9e3u); f_0000ba34(c); X86_RET(c, 0xb9e3u);
L_b9e3:
    X86_TICK(c, 12);
    // 00b9e3  cmp byte ptr gs:[ebp + 0x229], 0
    X86_AT(c, 0xb9e3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))), 0x0u, 0, 1);
    // 00b9eb  je 0xba32
    X86_AT(c, 0xb9ebu);
    if (x86_cc(c, 4)) { goto L_ba32; }
    X86_TICK(c, 2);
    // 00b9ed  mov bx, 2
    X86_AT(c, 0xb9edu);
    s16(c, 3, 0x2u);
L_b9f1:
    X86_TICK(c, 11);
    // 00b9f1  push ebx
    X86_AT(c, 0xb9f1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00b9f2  mov word ptr gs:[ebp + 0x30c], bx
    X86_AT(c, 0xb9f2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x30Cu)), (c.r[3] & 0xFFFFu));
    // 00b9fa  call 0xbbfc
    X86_AT(c, 0xb9fau);
    push32(c, 0xb9ffu); f_0000bbfc(c); X86_RET(c, 0xb9ffu);
    X86_TICK(c, 37);
    // 00b9ff  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xb9ffu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba06  mul ah
    X86_AT(c, 0xba06u);
    x86_mul(c, g8(c, 4), 1);
    // 00ba08  add ax, 0x80
    X86_AT(c, 0xba08u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba0c  mov cl, ah
    X86_AT(c, 0xba0cu);
    s8(c, 1, g8(c, 4));
    // 00ba0e  call 0xbb94
    X86_AT(c, 0xba0eu);
    push32(c, 0xba13u); f_0000bb94(c); X86_RET(c, 0xba13u);
    X86_TICK(c, 37);
    // 00ba13  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xba13u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba1a  mul ah
    X86_AT(c, 0xba1au);
    x86_mul(c, g8(c, 4), 1);
    // 00ba1c  add ax, 0x80
    X86_AT(c, 0xba1cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba20  mov ch, ah
    X86_AT(c, 0xba20u);
    s8(c, 5, g8(c, 4));
    // 00ba22  call 0xba34
    X86_AT(c, 0xba22u);
    push32(c, 0xba27u); f_0000ba34(c); X86_RET(c, 0xba27u);
    X86_TICK(c, 13);
    // 00ba27  pop ebx
    X86_AT(c, 0xba27u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00ba28  add bx, 2
    X86_AT(c, 0xba28u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x2u, 0, 2)); }
    // 00ba2c  cmp bx, 0x5a
    X86_AT(c, 0xba2cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0x5Au, 0, 2);
    // 00ba30  jbe 0xb9f1
    X86_AT(c, 0xba30u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0xb9f1u); goto L_b9f1; }
L_ba32:
    X86_TICK(c, 10);
    // 00ba32  ret 
    X86_AT(c, 0xba32u);
    c.eip = pop32(c); return;
L_baa0:
    X86_TICK(c, 29);
    // 00baa0  sub eax, eax
    X86_AT(c, 0xbaa0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00baa2  mov al, 0x20
    X86_AT(c, 0xbaa2u);
    s8(c, 0, 0x20u);
    // 00baa4  mov bl, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xbaa4u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))));
    // 00baab  sub al, bl
    X86_AT(c, 0xbaabu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, g8(c, 3), 0, 1)); }
    // 00baad  shr al, 1
    X86_AT(c, 0xbaadu);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 00baaf  lea edi, [ebp + eax*4 + 0x234]
    X86_AT(c, 0xbaafu);
    c.r[7] = (uint32_t)(c.r[5] + c.r[0] * 4 + 0x234u);
    // 00bab6  mov al, bl
    X86_AT(c, 0xbab6u);
    s8(c, 0, g8(c, 3));
    // 00bab8  inc eax
    X86_AT(c, 0xbab8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 00bab9  shr eax, 1
    X86_AT(c, 0xbab9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00babb  test bl, 1
    X86_AT(c, 0xbabbu);
    (void)x86_logic(c, g8(c, 3) & 0x1u, 1);
    // 00babe  je 0xbacc
    X86_AT(c, 0xbabeu);
    if (x86_cc(c, 4)) { goto L_bacc; }
    X86_TICK(c, 11);
    // 00bac0  mov eax, dword ptr cs:[eax*4 + 0xbd2c]
    X86_AT(c, 0xbac0u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBD2Cu)));
    // 00bac8  jmp 0xbad4
    X86_AT(c, 0xbac8u);
    goto L_bad4;
L_bacc:
    X86_TICK(c, 4);
    // 00bacc  mov eax, dword ptr cs:[eax*4 + 0xbd70]
    X86_AT(c, 0xbaccu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBD70u)));
L_bad4:
    X86_TICK(c, 23);
    // 00bad4  movzx ecx, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xbad4u);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)));
    // 00badc  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xbadcu);
    x86_string(c, 2, 4, 243, 4, 3);
    // 00bade  ret 
    X86_AT(c, 0xbadeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb9bbu, "ran off the end of a function");
}
void f_0000b9c1(X86Cpu& c) {
    X86_TICK(c, 18);
    // 00b9c1  mov cl, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xb9c1u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))));
    // 00b9c8  mov al, cl
    X86_AT(c, 0xb9c8u);
    s8(c, 0, g8(c, 1));
    // 00b9ca  shr al, 1
    X86_AT(c, 0xb9cau);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 00b9cc  mov byte ptr gs:[ebp + 0x229], al
    X86_AT(c, 0xb9ccu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u)), g8(c, 0));
    // 00b9d3  test cl, 1
    X86_AT(c, 0xb9d3u);
    (void)x86_logic(c, g8(c, 1) & 0x1u, 1);
    // 00b9d6  je 0xb9e3
    X86_AT(c, 0xb9d6u);
    if (x86_cc(c, 4)) { goto L_b9e3; }
    X86_TICK(c, 14);
    // 00b9d8  inc cl
    X86_AT(c, 0xb9d8u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_inc(c, v, 1)); }
    // 00b9da  shr cl, 1
    X86_AT(c, 0xb9dau);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 1, r); }
    // 00b9dc  mov ch, 0
    X86_AT(c, 0xb9dcu);
    s8(c, 5, 0x0u);
    // 00b9de  call 0xba34
    X86_AT(c, 0xb9deu);
    push32(c, 0xb9e3u); f_0000ba34(c); X86_RET(c, 0xb9e3u);
L_b9e3:
    X86_TICK(c, 12);
    // 00b9e3  cmp byte ptr gs:[ebp + 0x229], 0
    X86_AT(c, 0xb9e3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))), 0x0u, 0, 1);
    // 00b9eb  je 0xba32
    X86_AT(c, 0xb9ebu);
    if (x86_cc(c, 4)) { goto L_ba32; }
    X86_TICK(c, 2);
    // 00b9ed  mov bx, 2
    X86_AT(c, 0xb9edu);
    s16(c, 3, 0x2u);
L_b9f1:
    X86_TICK(c, 11);
    // 00b9f1  push ebx
    X86_AT(c, 0xb9f1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00b9f2  mov word ptr gs:[ebp + 0x30c], bx
    X86_AT(c, 0xb9f2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x30Cu)), (c.r[3] & 0xFFFFu));
    // 00b9fa  call 0xbbfc
    X86_AT(c, 0xb9fau);
    push32(c, 0xb9ffu); f_0000bbfc(c); X86_RET(c, 0xb9ffu);
    X86_TICK(c, 37);
    // 00b9ff  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xb9ffu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba06  mul ah
    X86_AT(c, 0xba06u);
    x86_mul(c, g8(c, 4), 1);
    // 00ba08  add ax, 0x80
    X86_AT(c, 0xba08u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba0c  mov cl, ah
    X86_AT(c, 0xba0cu);
    s8(c, 1, g8(c, 4));
    // 00ba0e  call 0xbb94
    X86_AT(c, 0xba0eu);
    push32(c, 0xba13u); f_0000bb94(c); X86_RET(c, 0xba13u);
    X86_TICK(c, 37);
    // 00ba13  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xba13u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba1a  mul ah
    X86_AT(c, 0xba1au);
    x86_mul(c, g8(c, 4), 1);
    // 00ba1c  add ax, 0x80
    X86_AT(c, 0xba1cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba20  mov ch, ah
    X86_AT(c, 0xba20u);
    s8(c, 5, g8(c, 4));
    // 00ba22  call 0xba34
    X86_AT(c, 0xba22u);
    push32(c, 0xba27u); f_0000ba34(c); X86_RET(c, 0xba27u);
    X86_TICK(c, 13);
    // 00ba27  pop ebx
    X86_AT(c, 0xba27u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00ba28  add bx, 2
    X86_AT(c, 0xba28u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x2u, 0, 2)); }
    // 00ba2c  cmp bx, 0x5a
    X86_AT(c, 0xba2cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0x5Au, 0, 2);
    // 00ba30  jbe 0xb9f1
    X86_AT(c, 0xba30u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0xb9f1u); goto L_b9f1; }
L_ba32:
    X86_TICK(c, 10);
    // 00ba32  ret 
    X86_AT(c, 0xba32u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb9c1u, "ran off the end of a function");
}
void f_0000b9c8(X86Cpu& c) {
    X86_TICK(c, 14);
    // 00b9c8  mov al, cl
    X86_AT(c, 0xb9c8u);
    s8(c, 0, g8(c, 1));
    // 00b9ca  shr al, 1
    X86_AT(c, 0xb9cau);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 00b9cc  mov byte ptr gs:[ebp + 0x229], al
    X86_AT(c, 0xb9ccu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u)), g8(c, 0));
    // 00b9d3  test cl, 1
    X86_AT(c, 0xb9d3u);
    (void)x86_logic(c, g8(c, 1) & 0x1u, 1);
    // 00b9d6  je 0xb9e3
    X86_AT(c, 0xb9d6u);
    if (x86_cc(c, 4)) { goto L_b9e3; }
    X86_TICK(c, 14);
    // 00b9d8  inc cl
    X86_AT(c, 0xb9d8u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_inc(c, v, 1)); }
    // 00b9da  shr cl, 1
    X86_AT(c, 0xb9dau);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 1, r); }
    // 00b9dc  mov ch, 0
    X86_AT(c, 0xb9dcu);
    s8(c, 5, 0x0u);
    // 00b9de  call 0xba34
    X86_AT(c, 0xb9deu);
    push32(c, 0xb9e3u); f_0000ba34(c); X86_RET(c, 0xb9e3u);
L_b9e3:
    X86_TICK(c, 12);
    // 00b9e3  cmp byte ptr gs:[ebp + 0x229], 0
    X86_AT(c, 0xb9e3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))), 0x0u, 0, 1);
    // 00b9eb  je 0xba32
    X86_AT(c, 0xb9ebu);
    if (x86_cc(c, 4)) { goto L_ba32; }
    X86_TICK(c, 2);
    // 00b9ed  mov bx, 2
    X86_AT(c, 0xb9edu);
    s16(c, 3, 0x2u);
L_b9f1:
    X86_TICK(c, 11);
    // 00b9f1  push ebx
    X86_AT(c, 0xb9f1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00b9f2  mov word ptr gs:[ebp + 0x30c], bx
    X86_AT(c, 0xb9f2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x30Cu)), (c.r[3] & 0xFFFFu));
    // 00b9fa  call 0xbbfc
    X86_AT(c, 0xb9fau);
    push32(c, 0xb9ffu); f_0000bbfc(c); X86_RET(c, 0xb9ffu);
    X86_TICK(c, 37);
    // 00b9ff  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xb9ffu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba06  mul ah
    X86_AT(c, 0xba06u);
    x86_mul(c, g8(c, 4), 1);
    // 00ba08  add ax, 0x80
    X86_AT(c, 0xba08u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba0c  mov cl, ah
    X86_AT(c, 0xba0cu);
    s8(c, 1, g8(c, 4));
    // 00ba0e  call 0xbb94
    X86_AT(c, 0xba0eu);
    push32(c, 0xba13u); f_0000bb94(c); X86_RET(c, 0xba13u);
    X86_TICK(c, 37);
    // 00ba13  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xba13u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba1a  mul ah
    X86_AT(c, 0xba1au);
    x86_mul(c, g8(c, 4), 1);
    // 00ba1c  add ax, 0x80
    X86_AT(c, 0xba1cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba20  mov ch, ah
    X86_AT(c, 0xba20u);
    s8(c, 5, g8(c, 4));
    // 00ba22  call 0xba34
    X86_AT(c, 0xba22u);
    push32(c, 0xba27u); f_0000ba34(c); X86_RET(c, 0xba27u);
    X86_TICK(c, 13);
    // 00ba27  pop ebx
    X86_AT(c, 0xba27u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00ba28  add bx, 2
    X86_AT(c, 0xba28u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x2u, 0, 2)); }
    // 00ba2c  cmp bx, 0x5a
    X86_AT(c, 0xba2cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0x5Au, 0, 2);
    // 00ba30  jbe 0xb9f1
    X86_AT(c, 0xba30u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0xb9f1u); goto L_b9f1; }
L_ba32:
    X86_TICK(c, 10);
    // 00ba32  ret 
    X86_AT(c, 0xba32u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb9c8u, "ran off the end of a function");
}
void f_0000b9ca(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00b9ca  shr al, 1
    X86_AT(c, 0xb9cau);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 00b9cc  mov byte ptr gs:[ebp + 0x229], al
    X86_AT(c, 0xb9ccu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u)), g8(c, 0));
    // 00b9d3  test cl, 1
    X86_AT(c, 0xb9d3u);
    (void)x86_logic(c, g8(c, 1) & 0x1u, 1);
    // 00b9d6  je 0xb9e3
    X86_AT(c, 0xb9d6u);
    if (x86_cc(c, 4)) { goto L_b9e3; }
    X86_TICK(c, 14);
    // 00b9d8  inc cl
    X86_AT(c, 0xb9d8u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_inc(c, v, 1)); }
    // 00b9da  shr cl, 1
    X86_AT(c, 0xb9dau);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 1, r); }
    // 00b9dc  mov ch, 0
    X86_AT(c, 0xb9dcu);
    s8(c, 5, 0x0u);
    // 00b9de  call 0xba34
    X86_AT(c, 0xb9deu);
    push32(c, 0xb9e3u); f_0000ba34(c); X86_RET(c, 0xb9e3u);
L_b9e3:
    X86_TICK(c, 12);
    // 00b9e3  cmp byte ptr gs:[ebp + 0x229], 0
    X86_AT(c, 0xb9e3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))), 0x0u, 0, 1);
    // 00b9eb  je 0xba32
    X86_AT(c, 0xb9ebu);
    if (x86_cc(c, 4)) { goto L_ba32; }
    X86_TICK(c, 2);
    // 00b9ed  mov bx, 2
    X86_AT(c, 0xb9edu);
    s16(c, 3, 0x2u);
L_b9f1:
    X86_TICK(c, 11);
    // 00b9f1  push ebx
    X86_AT(c, 0xb9f1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00b9f2  mov word ptr gs:[ebp + 0x30c], bx
    X86_AT(c, 0xb9f2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x30Cu)), (c.r[3] & 0xFFFFu));
    // 00b9fa  call 0xbbfc
    X86_AT(c, 0xb9fau);
    push32(c, 0xb9ffu); f_0000bbfc(c); X86_RET(c, 0xb9ffu);
    X86_TICK(c, 37);
    // 00b9ff  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xb9ffu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba06  mul ah
    X86_AT(c, 0xba06u);
    x86_mul(c, g8(c, 4), 1);
    // 00ba08  add ax, 0x80
    X86_AT(c, 0xba08u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba0c  mov cl, ah
    X86_AT(c, 0xba0cu);
    s8(c, 1, g8(c, 4));
    // 00ba0e  call 0xbb94
    X86_AT(c, 0xba0eu);
    push32(c, 0xba13u); f_0000bb94(c); X86_RET(c, 0xba13u);
    X86_TICK(c, 37);
    // 00ba13  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xba13u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba1a  mul ah
    X86_AT(c, 0xba1au);
    x86_mul(c, g8(c, 4), 1);
    // 00ba1c  add ax, 0x80
    X86_AT(c, 0xba1cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba20  mov ch, ah
    X86_AT(c, 0xba20u);
    s8(c, 5, g8(c, 4));
    // 00ba22  call 0xba34
    X86_AT(c, 0xba22u);
    push32(c, 0xba27u); f_0000ba34(c); X86_RET(c, 0xba27u);
    X86_TICK(c, 13);
    // 00ba27  pop ebx
    X86_AT(c, 0xba27u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00ba28  add bx, 2
    X86_AT(c, 0xba28u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x2u, 0, 2)); }
    // 00ba2c  cmp bx, 0x5a
    X86_AT(c, 0xba2cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0x5Au, 0, 2);
    // 00ba30  jbe 0xb9f1
    X86_AT(c, 0xba30u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0xb9f1u); goto L_b9f1; }
L_ba32:
    X86_TICK(c, 10);
    // 00ba32  ret 
    X86_AT(c, 0xba32u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb9cau, "ran off the end of a function");
}
void f_0000b9cc(X86Cpu& c) {
    X86_TICK(c, 9);
    // 00b9cc  mov byte ptr gs:[ebp + 0x229], al
    X86_AT(c, 0xb9ccu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u)), g8(c, 0));
    // 00b9d3  test cl, 1
    X86_AT(c, 0xb9d3u);
    (void)x86_logic(c, g8(c, 1) & 0x1u, 1);
    // 00b9d6  je 0xb9e3
    X86_AT(c, 0xb9d6u);
    if (x86_cc(c, 4)) { goto L_b9e3; }
    X86_TICK(c, 14);
    // 00b9d8  inc cl
    X86_AT(c, 0xb9d8u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_inc(c, v, 1)); }
    // 00b9da  shr cl, 1
    X86_AT(c, 0xb9dau);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 1, r); }
    // 00b9dc  mov ch, 0
    X86_AT(c, 0xb9dcu);
    s8(c, 5, 0x0u);
    // 00b9de  call 0xba34
    X86_AT(c, 0xb9deu);
    push32(c, 0xb9e3u); f_0000ba34(c); X86_RET(c, 0xb9e3u);
L_b9e3:
    X86_TICK(c, 12);
    // 00b9e3  cmp byte ptr gs:[ebp + 0x229], 0
    X86_AT(c, 0xb9e3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))), 0x0u, 0, 1);
    // 00b9eb  je 0xba32
    X86_AT(c, 0xb9ebu);
    if (x86_cc(c, 4)) { goto L_ba32; }
    X86_TICK(c, 2);
    // 00b9ed  mov bx, 2
    X86_AT(c, 0xb9edu);
    s16(c, 3, 0x2u);
L_b9f1:
    X86_TICK(c, 11);
    // 00b9f1  push ebx
    X86_AT(c, 0xb9f1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00b9f2  mov word ptr gs:[ebp + 0x30c], bx
    X86_AT(c, 0xb9f2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x30Cu)), (c.r[3] & 0xFFFFu));
    // 00b9fa  call 0xbbfc
    X86_AT(c, 0xb9fau);
    push32(c, 0xb9ffu); f_0000bbfc(c); X86_RET(c, 0xb9ffu);
    X86_TICK(c, 37);
    // 00b9ff  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xb9ffu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba06  mul ah
    X86_AT(c, 0xba06u);
    x86_mul(c, g8(c, 4), 1);
    // 00ba08  add ax, 0x80
    X86_AT(c, 0xba08u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba0c  mov cl, ah
    X86_AT(c, 0xba0cu);
    s8(c, 1, g8(c, 4));
    // 00ba0e  call 0xbb94
    X86_AT(c, 0xba0eu);
    push32(c, 0xba13u); f_0000bb94(c); X86_RET(c, 0xba13u);
    X86_TICK(c, 37);
    // 00ba13  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xba13u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba1a  mul ah
    X86_AT(c, 0xba1au);
    x86_mul(c, g8(c, 4), 1);
    // 00ba1c  add ax, 0x80
    X86_AT(c, 0xba1cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba20  mov ch, ah
    X86_AT(c, 0xba20u);
    s8(c, 5, g8(c, 4));
    // 00ba22  call 0xba34
    X86_AT(c, 0xba22u);
    push32(c, 0xba27u); f_0000ba34(c); X86_RET(c, 0xba27u);
    X86_TICK(c, 13);
    // 00ba27  pop ebx
    X86_AT(c, 0xba27u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00ba28  add bx, 2
    X86_AT(c, 0xba28u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x2u, 0, 2)); }
    // 00ba2c  cmp bx, 0x5a
    X86_AT(c, 0xba2cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0x5Au, 0, 2);
    // 00ba30  jbe 0xb9f1
    X86_AT(c, 0xba30u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0xb9f1u); goto L_b9f1; }
L_ba32:
    X86_TICK(c, 10);
    // 00ba32  ret 
    X86_AT(c, 0xba32u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb9ccu, "ran off the end of a function");
}
void f_0000b9d3(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00b9d3  test cl, 1
    X86_AT(c, 0xb9d3u);
    (void)x86_logic(c, g8(c, 1) & 0x1u, 1);
    // 00b9d6  je 0xb9e3
    X86_AT(c, 0xb9d6u);
    if (x86_cc(c, 4)) { goto L_b9e3; }
    X86_TICK(c, 14);
    // 00b9d8  inc cl
    X86_AT(c, 0xb9d8u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_inc(c, v, 1)); }
    // 00b9da  shr cl, 1
    X86_AT(c, 0xb9dau);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 1, r); }
    // 00b9dc  mov ch, 0
    X86_AT(c, 0xb9dcu);
    s8(c, 5, 0x0u);
    // 00b9de  call 0xba34
    X86_AT(c, 0xb9deu);
    push32(c, 0xb9e3u); f_0000ba34(c); X86_RET(c, 0xb9e3u);
L_b9e3:
    X86_TICK(c, 12);
    // 00b9e3  cmp byte ptr gs:[ebp + 0x229], 0
    X86_AT(c, 0xb9e3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))), 0x0u, 0, 1);
    // 00b9eb  je 0xba32
    X86_AT(c, 0xb9ebu);
    if (x86_cc(c, 4)) { goto L_ba32; }
    X86_TICK(c, 2);
    // 00b9ed  mov bx, 2
    X86_AT(c, 0xb9edu);
    s16(c, 3, 0x2u);
L_b9f1:
    X86_TICK(c, 11);
    // 00b9f1  push ebx
    X86_AT(c, 0xb9f1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00b9f2  mov word ptr gs:[ebp + 0x30c], bx
    X86_AT(c, 0xb9f2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x30Cu)), (c.r[3] & 0xFFFFu));
    // 00b9fa  call 0xbbfc
    X86_AT(c, 0xb9fau);
    push32(c, 0xb9ffu); f_0000bbfc(c); X86_RET(c, 0xb9ffu);
    X86_TICK(c, 37);
    // 00b9ff  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xb9ffu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba06  mul ah
    X86_AT(c, 0xba06u);
    x86_mul(c, g8(c, 4), 1);
    // 00ba08  add ax, 0x80
    X86_AT(c, 0xba08u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba0c  mov cl, ah
    X86_AT(c, 0xba0cu);
    s8(c, 1, g8(c, 4));
    // 00ba0e  call 0xbb94
    X86_AT(c, 0xba0eu);
    push32(c, 0xba13u); f_0000bb94(c); X86_RET(c, 0xba13u);
    X86_TICK(c, 37);
    // 00ba13  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xba13u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba1a  mul ah
    X86_AT(c, 0xba1au);
    x86_mul(c, g8(c, 4), 1);
    // 00ba1c  add ax, 0x80
    X86_AT(c, 0xba1cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba20  mov ch, ah
    X86_AT(c, 0xba20u);
    s8(c, 5, g8(c, 4));
    // 00ba22  call 0xba34
    X86_AT(c, 0xba22u);
    push32(c, 0xba27u); f_0000ba34(c); X86_RET(c, 0xba27u);
    X86_TICK(c, 13);
    // 00ba27  pop ebx
    X86_AT(c, 0xba27u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00ba28  add bx, 2
    X86_AT(c, 0xba28u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x2u, 0, 2)); }
    // 00ba2c  cmp bx, 0x5a
    X86_AT(c, 0xba2cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0x5Au, 0, 2);
    // 00ba30  jbe 0xb9f1
    X86_AT(c, 0xba30u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0xb9f1u); goto L_b9f1; }
L_ba32:
    X86_TICK(c, 10);
    // 00ba32  ret 
    X86_AT(c, 0xba32u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb9d3u, "ran off the end of a function");
}
void f_0000b9d6(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00b9d6  je 0xb9e3
    X86_AT(c, 0xb9d6u);
    if (x86_cc(c, 4)) { goto L_b9e3; }
    X86_TICK(c, 14);
    // 00b9d8  inc cl
    X86_AT(c, 0xb9d8u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_inc(c, v, 1)); }
    // 00b9da  shr cl, 1
    X86_AT(c, 0xb9dau);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 1, r); }
    // 00b9dc  mov ch, 0
    X86_AT(c, 0xb9dcu);
    s8(c, 5, 0x0u);
    // 00b9de  call 0xba34
    X86_AT(c, 0xb9deu);
    push32(c, 0xb9e3u); f_0000ba34(c); X86_RET(c, 0xb9e3u);
L_b9e3:
    X86_TICK(c, 12);
    // 00b9e3  cmp byte ptr gs:[ebp + 0x229], 0
    X86_AT(c, 0xb9e3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))), 0x0u, 0, 1);
    // 00b9eb  je 0xba32
    X86_AT(c, 0xb9ebu);
    if (x86_cc(c, 4)) { goto L_ba32; }
    X86_TICK(c, 2);
    // 00b9ed  mov bx, 2
    X86_AT(c, 0xb9edu);
    s16(c, 3, 0x2u);
L_b9f1:
    X86_TICK(c, 11);
    // 00b9f1  push ebx
    X86_AT(c, 0xb9f1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00b9f2  mov word ptr gs:[ebp + 0x30c], bx
    X86_AT(c, 0xb9f2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x30Cu)), (c.r[3] & 0xFFFFu));
    // 00b9fa  call 0xbbfc
    X86_AT(c, 0xb9fau);
    push32(c, 0xb9ffu); f_0000bbfc(c); X86_RET(c, 0xb9ffu);
    X86_TICK(c, 37);
    // 00b9ff  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xb9ffu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba06  mul ah
    X86_AT(c, 0xba06u);
    x86_mul(c, g8(c, 4), 1);
    // 00ba08  add ax, 0x80
    X86_AT(c, 0xba08u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba0c  mov cl, ah
    X86_AT(c, 0xba0cu);
    s8(c, 1, g8(c, 4));
    // 00ba0e  call 0xbb94
    X86_AT(c, 0xba0eu);
    push32(c, 0xba13u); f_0000bb94(c); X86_RET(c, 0xba13u);
    X86_TICK(c, 37);
    // 00ba13  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xba13u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba1a  mul ah
    X86_AT(c, 0xba1au);
    x86_mul(c, g8(c, 4), 1);
    // 00ba1c  add ax, 0x80
    X86_AT(c, 0xba1cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba20  mov ch, ah
    X86_AT(c, 0xba20u);
    s8(c, 5, g8(c, 4));
    // 00ba22  call 0xba34
    X86_AT(c, 0xba22u);
    push32(c, 0xba27u); f_0000ba34(c); X86_RET(c, 0xba27u);
    X86_TICK(c, 13);
    // 00ba27  pop ebx
    X86_AT(c, 0xba27u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00ba28  add bx, 2
    X86_AT(c, 0xba28u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x2u, 0, 2)); }
    // 00ba2c  cmp bx, 0x5a
    X86_AT(c, 0xba2cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0x5Au, 0, 2);
    // 00ba30  jbe 0xb9f1
    X86_AT(c, 0xba30u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0xb9f1u); goto L_b9f1; }
L_ba32:
    X86_TICK(c, 10);
    // 00ba32  ret 
    X86_AT(c, 0xba32u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb9d6u, "ran off the end of a function");
}
void f_0000b9d8(X86Cpu& c) {
    X86_TICK(c, 14);
    // 00b9d8  inc cl
    X86_AT(c, 0xb9d8u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_inc(c, v, 1)); }
    // 00b9da  shr cl, 1
    X86_AT(c, 0xb9dau);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 1, r); }
    // 00b9dc  mov ch, 0
    X86_AT(c, 0xb9dcu);
    s8(c, 5, 0x0u);
    // 00b9de  call 0xba34
    X86_AT(c, 0xb9deu);
    push32(c, 0xb9e3u); f_0000ba34(c); X86_RET(c, 0xb9e3u);
    X86_TICK(c, 12);
    // 00b9e3  cmp byte ptr gs:[ebp + 0x229], 0
    X86_AT(c, 0xb9e3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))), 0x0u, 0, 1);
    // 00b9eb  je 0xba32
    X86_AT(c, 0xb9ebu);
    if (x86_cc(c, 4)) { goto L_ba32; }
    X86_TICK(c, 2);
    // 00b9ed  mov bx, 2
    X86_AT(c, 0xb9edu);
    s16(c, 3, 0x2u);
L_b9f1:
    X86_TICK(c, 11);
    // 00b9f1  push ebx
    X86_AT(c, 0xb9f1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00b9f2  mov word ptr gs:[ebp + 0x30c], bx
    X86_AT(c, 0xb9f2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x30Cu)), (c.r[3] & 0xFFFFu));
    // 00b9fa  call 0xbbfc
    X86_AT(c, 0xb9fau);
    push32(c, 0xb9ffu); f_0000bbfc(c); X86_RET(c, 0xb9ffu);
    X86_TICK(c, 37);
    // 00b9ff  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xb9ffu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba06  mul ah
    X86_AT(c, 0xba06u);
    x86_mul(c, g8(c, 4), 1);
    // 00ba08  add ax, 0x80
    X86_AT(c, 0xba08u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba0c  mov cl, ah
    X86_AT(c, 0xba0cu);
    s8(c, 1, g8(c, 4));
    // 00ba0e  call 0xbb94
    X86_AT(c, 0xba0eu);
    push32(c, 0xba13u); f_0000bb94(c); X86_RET(c, 0xba13u);
    X86_TICK(c, 37);
    // 00ba13  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xba13u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba1a  mul ah
    X86_AT(c, 0xba1au);
    x86_mul(c, g8(c, 4), 1);
    // 00ba1c  add ax, 0x80
    X86_AT(c, 0xba1cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba20  mov ch, ah
    X86_AT(c, 0xba20u);
    s8(c, 5, g8(c, 4));
    // 00ba22  call 0xba34
    X86_AT(c, 0xba22u);
    push32(c, 0xba27u); f_0000ba34(c); X86_RET(c, 0xba27u);
    X86_TICK(c, 13);
    // 00ba27  pop ebx
    X86_AT(c, 0xba27u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00ba28  add bx, 2
    X86_AT(c, 0xba28u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x2u, 0, 2)); }
    // 00ba2c  cmp bx, 0x5a
    X86_AT(c, 0xba2cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0x5Au, 0, 2);
    // 00ba30  jbe 0xb9f1
    X86_AT(c, 0xba30u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0xb9f1u); goto L_b9f1; }
L_ba32:
    X86_TICK(c, 10);
    // 00ba32  ret 
    X86_AT(c, 0xba32u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb9d8u, "ran off the end of a function");
}
void f_0000b9da(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00b9da  shr cl, 1
    X86_AT(c, 0xb9dau);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 1, r); }
    // 00b9dc  mov ch, 0
    X86_AT(c, 0xb9dcu);
    s8(c, 5, 0x0u);
    // 00b9de  call 0xba34
    X86_AT(c, 0xb9deu);
    push32(c, 0xb9e3u); f_0000ba34(c); X86_RET(c, 0xb9e3u);
    X86_TICK(c, 12);
    // 00b9e3  cmp byte ptr gs:[ebp + 0x229], 0
    X86_AT(c, 0xb9e3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))), 0x0u, 0, 1);
    // 00b9eb  je 0xba32
    X86_AT(c, 0xb9ebu);
    if (x86_cc(c, 4)) { goto L_ba32; }
    X86_TICK(c, 2);
    // 00b9ed  mov bx, 2
    X86_AT(c, 0xb9edu);
    s16(c, 3, 0x2u);
L_b9f1:
    X86_TICK(c, 11);
    // 00b9f1  push ebx
    X86_AT(c, 0xb9f1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00b9f2  mov word ptr gs:[ebp + 0x30c], bx
    X86_AT(c, 0xb9f2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x30Cu)), (c.r[3] & 0xFFFFu));
    // 00b9fa  call 0xbbfc
    X86_AT(c, 0xb9fau);
    push32(c, 0xb9ffu); f_0000bbfc(c); X86_RET(c, 0xb9ffu);
    X86_TICK(c, 37);
    // 00b9ff  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xb9ffu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba06  mul ah
    X86_AT(c, 0xba06u);
    x86_mul(c, g8(c, 4), 1);
    // 00ba08  add ax, 0x80
    X86_AT(c, 0xba08u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba0c  mov cl, ah
    X86_AT(c, 0xba0cu);
    s8(c, 1, g8(c, 4));
    // 00ba0e  call 0xbb94
    X86_AT(c, 0xba0eu);
    push32(c, 0xba13u); f_0000bb94(c); X86_RET(c, 0xba13u);
    X86_TICK(c, 37);
    // 00ba13  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xba13u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba1a  mul ah
    X86_AT(c, 0xba1au);
    x86_mul(c, g8(c, 4), 1);
    // 00ba1c  add ax, 0x80
    X86_AT(c, 0xba1cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba20  mov ch, ah
    X86_AT(c, 0xba20u);
    s8(c, 5, g8(c, 4));
    // 00ba22  call 0xba34
    X86_AT(c, 0xba22u);
    push32(c, 0xba27u); f_0000ba34(c); X86_RET(c, 0xba27u);
    X86_TICK(c, 13);
    // 00ba27  pop ebx
    X86_AT(c, 0xba27u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00ba28  add bx, 2
    X86_AT(c, 0xba28u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x2u, 0, 2)); }
    // 00ba2c  cmp bx, 0x5a
    X86_AT(c, 0xba2cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0x5Au, 0, 2);
    // 00ba30  jbe 0xb9f1
    X86_AT(c, 0xba30u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0xb9f1u); goto L_b9f1; }
L_ba32:
    X86_TICK(c, 10);
    // 00ba32  ret 
    X86_AT(c, 0xba32u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb9dau, "ran off the end of a function");
}
void f_0000b9dc(X86Cpu& c) {
    X86_TICK(c, 9);
    // 00b9dc  mov ch, 0
    X86_AT(c, 0xb9dcu);
    s8(c, 5, 0x0u);
    // 00b9de  call 0xba34
    X86_AT(c, 0xb9deu);
    push32(c, 0xb9e3u); f_0000ba34(c); X86_RET(c, 0xb9e3u);
    X86_TICK(c, 12);
    // 00b9e3  cmp byte ptr gs:[ebp + 0x229], 0
    X86_AT(c, 0xb9e3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))), 0x0u, 0, 1);
    // 00b9eb  je 0xba32
    X86_AT(c, 0xb9ebu);
    if (x86_cc(c, 4)) { goto L_ba32; }
    X86_TICK(c, 2);
    // 00b9ed  mov bx, 2
    X86_AT(c, 0xb9edu);
    s16(c, 3, 0x2u);
L_b9f1:
    X86_TICK(c, 11);
    // 00b9f1  push ebx
    X86_AT(c, 0xb9f1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00b9f2  mov word ptr gs:[ebp + 0x30c], bx
    X86_AT(c, 0xb9f2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x30Cu)), (c.r[3] & 0xFFFFu));
    // 00b9fa  call 0xbbfc
    X86_AT(c, 0xb9fau);
    push32(c, 0xb9ffu); f_0000bbfc(c); X86_RET(c, 0xb9ffu);
    X86_TICK(c, 37);
    // 00b9ff  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xb9ffu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba06  mul ah
    X86_AT(c, 0xba06u);
    x86_mul(c, g8(c, 4), 1);
    // 00ba08  add ax, 0x80
    X86_AT(c, 0xba08u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba0c  mov cl, ah
    X86_AT(c, 0xba0cu);
    s8(c, 1, g8(c, 4));
    // 00ba0e  call 0xbb94
    X86_AT(c, 0xba0eu);
    push32(c, 0xba13u); f_0000bb94(c); X86_RET(c, 0xba13u);
    X86_TICK(c, 37);
    // 00ba13  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xba13u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba1a  mul ah
    X86_AT(c, 0xba1au);
    x86_mul(c, g8(c, 4), 1);
    // 00ba1c  add ax, 0x80
    X86_AT(c, 0xba1cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba20  mov ch, ah
    X86_AT(c, 0xba20u);
    s8(c, 5, g8(c, 4));
    // 00ba22  call 0xba34
    X86_AT(c, 0xba22u);
    push32(c, 0xba27u); f_0000ba34(c); X86_RET(c, 0xba27u);
    X86_TICK(c, 13);
    // 00ba27  pop ebx
    X86_AT(c, 0xba27u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00ba28  add bx, 2
    X86_AT(c, 0xba28u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x2u, 0, 2)); }
    // 00ba2c  cmp bx, 0x5a
    X86_AT(c, 0xba2cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0x5Au, 0, 2);
    // 00ba30  jbe 0xb9f1
    X86_AT(c, 0xba30u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0xb9f1u); goto L_b9f1; }
L_ba32:
    X86_TICK(c, 10);
    // 00ba32  ret 
    X86_AT(c, 0xba32u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb9dcu, "ran off the end of a function");
}
void f_0000b9de(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00b9de  call 0xba34
    X86_AT(c, 0xb9deu);
    push32(c, 0xb9e3u); f_0000ba34(c); X86_RET(c, 0xb9e3u);
    X86_TICK(c, 12);
    // 00b9e3  cmp byte ptr gs:[ebp + 0x229], 0
    X86_AT(c, 0xb9e3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))), 0x0u, 0, 1);
    // 00b9eb  je 0xba32
    X86_AT(c, 0xb9ebu);
    if (x86_cc(c, 4)) { goto L_ba32; }
    X86_TICK(c, 2);
    // 00b9ed  mov bx, 2
    X86_AT(c, 0xb9edu);
    s16(c, 3, 0x2u);
L_b9f1:
    X86_TICK(c, 11);
    // 00b9f1  push ebx
    X86_AT(c, 0xb9f1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00b9f2  mov word ptr gs:[ebp + 0x30c], bx
    X86_AT(c, 0xb9f2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x30Cu)), (c.r[3] & 0xFFFFu));
    // 00b9fa  call 0xbbfc
    X86_AT(c, 0xb9fau);
    push32(c, 0xb9ffu); f_0000bbfc(c); X86_RET(c, 0xb9ffu);
    X86_TICK(c, 37);
    // 00b9ff  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xb9ffu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba06  mul ah
    X86_AT(c, 0xba06u);
    x86_mul(c, g8(c, 4), 1);
    // 00ba08  add ax, 0x80
    X86_AT(c, 0xba08u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba0c  mov cl, ah
    X86_AT(c, 0xba0cu);
    s8(c, 1, g8(c, 4));
    // 00ba0e  call 0xbb94
    X86_AT(c, 0xba0eu);
    push32(c, 0xba13u); f_0000bb94(c); X86_RET(c, 0xba13u);
    X86_TICK(c, 37);
    // 00ba13  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xba13u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba1a  mul ah
    X86_AT(c, 0xba1au);
    x86_mul(c, g8(c, 4), 1);
    // 00ba1c  add ax, 0x80
    X86_AT(c, 0xba1cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba20  mov ch, ah
    X86_AT(c, 0xba20u);
    s8(c, 5, g8(c, 4));
    // 00ba22  call 0xba34
    X86_AT(c, 0xba22u);
    push32(c, 0xba27u); f_0000ba34(c); X86_RET(c, 0xba27u);
    X86_TICK(c, 13);
    // 00ba27  pop ebx
    X86_AT(c, 0xba27u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00ba28  add bx, 2
    X86_AT(c, 0xba28u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x2u, 0, 2)); }
    // 00ba2c  cmp bx, 0x5a
    X86_AT(c, 0xba2cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0x5Au, 0, 2);
    // 00ba30  jbe 0xb9f1
    X86_AT(c, 0xba30u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0xb9f1u); goto L_b9f1; }
L_ba32:
    X86_TICK(c, 10);
    // 00ba32  ret 
    X86_AT(c, 0xba32u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb9deu, "ran off the end of a function");
}
void f_0000b9e3(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00b9e3  cmp byte ptr gs:[ebp + 0x229], 0
    X86_AT(c, 0xb9e3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))), 0x0u, 0, 1);
    // 00b9eb  je 0xba32
    X86_AT(c, 0xb9ebu);
    if (x86_cc(c, 4)) { goto L_ba32; }
    X86_TICK(c, 2);
    // 00b9ed  mov bx, 2
    X86_AT(c, 0xb9edu);
    s16(c, 3, 0x2u);
L_b9f1:
    X86_TICK(c, 11);
    // 00b9f1  push ebx
    X86_AT(c, 0xb9f1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00b9f2  mov word ptr gs:[ebp + 0x30c], bx
    X86_AT(c, 0xb9f2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x30Cu)), (c.r[3] & 0xFFFFu));
    // 00b9fa  call 0xbbfc
    X86_AT(c, 0xb9fau);
    push32(c, 0xb9ffu); f_0000bbfc(c); X86_RET(c, 0xb9ffu);
    X86_TICK(c, 37);
    // 00b9ff  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xb9ffu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba06  mul ah
    X86_AT(c, 0xba06u);
    x86_mul(c, g8(c, 4), 1);
    // 00ba08  add ax, 0x80
    X86_AT(c, 0xba08u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba0c  mov cl, ah
    X86_AT(c, 0xba0cu);
    s8(c, 1, g8(c, 4));
    // 00ba0e  call 0xbb94
    X86_AT(c, 0xba0eu);
    push32(c, 0xba13u); f_0000bb94(c); X86_RET(c, 0xba13u);
    X86_TICK(c, 37);
    // 00ba13  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xba13u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba1a  mul ah
    X86_AT(c, 0xba1au);
    x86_mul(c, g8(c, 4), 1);
    // 00ba1c  add ax, 0x80
    X86_AT(c, 0xba1cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba20  mov ch, ah
    X86_AT(c, 0xba20u);
    s8(c, 5, g8(c, 4));
    // 00ba22  call 0xba34
    X86_AT(c, 0xba22u);
    push32(c, 0xba27u); f_0000ba34(c); X86_RET(c, 0xba27u);
    X86_TICK(c, 13);
    // 00ba27  pop ebx
    X86_AT(c, 0xba27u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00ba28  add bx, 2
    X86_AT(c, 0xba28u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x2u, 0, 2)); }
    // 00ba2c  cmp bx, 0x5a
    X86_AT(c, 0xba2cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0x5Au, 0, 2);
    // 00ba30  jbe 0xb9f1
    X86_AT(c, 0xba30u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0xb9f1u); goto L_b9f1; }
L_ba32:
    X86_TICK(c, 10);
    // 00ba32  ret 
    X86_AT(c, 0xba32u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb9e3u, "ran off the end of a function");
}
void f_0000b9eb(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00b9eb  je 0xba32
    X86_AT(c, 0xb9ebu);
    if (x86_cc(c, 4)) { goto L_ba32; }
    X86_TICK(c, 2);
    // 00b9ed  mov bx, 2
    X86_AT(c, 0xb9edu);
    s16(c, 3, 0x2u);
L_b9f1:
    X86_TICK(c, 11);
    // 00b9f1  push ebx
    X86_AT(c, 0xb9f1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00b9f2  mov word ptr gs:[ebp + 0x30c], bx
    X86_AT(c, 0xb9f2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x30Cu)), (c.r[3] & 0xFFFFu));
    // 00b9fa  call 0xbbfc
    X86_AT(c, 0xb9fau);
    push32(c, 0xb9ffu); f_0000bbfc(c); X86_RET(c, 0xb9ffu);
    X86_TICK(c, 37);
    // 00b9ff  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xb9ffu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba06  mul ah
    X86_AT(c, 0xba06u);
    x86_mul(c, g8(c, 4), 1);
    // 00ba08  add ax, 0x80
    X86_AT(c, 0xba08u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba0c  mov cl, ah
    X86_AT(c, 0xba0cu);
    s8(c, 1, g8(c, 4));
    // 00ba0e  call 0xbb94
    X86_AT(c, 0xba0eu);
    push32(c, 0xba13u); f_0000bb94(c); X86_RET(c, 0xba13u);
    X86_TICK(c, 37);
    // 00ba13  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xba13u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba1a  mul ah
    X86_AT(c, 0xba1au);
    x86_mul(c, g8(c, 4), 1);
    // 00ba1c  add ax, 0x80
    X86_AT(c, 0xba1cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba20  mov ch, ah
    X86_AT(c, 0xba20u);
    s8(c, 5, g8(c, 4));
    // 00ba22  call 0xba34
    X86_AT(c, 0xba22u);
    push32(c, 0xba27u); f_0000ba34(c); X86_RET(c, 0xba27u);
    X86_TICK(c, 13);
    // 00ba27  pop ebx
    X86_AT(c, 0xba27u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00ba28  add bx, 2
    X86_AT(c, 0xba28u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x2u, 0, 2)); }
    // 00ba2c  cmp bx, 0x5a
    X86_AT(c, 0xba2cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0x5Au, 0, 2);
    // 00ba30  jbe 0xb9f1
    X86_AT(c, 0xba30u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0xb9f1u); goto L_b9f1; }
L_ba32:
    X86_TICK(c, 10);
    // 00ba32  ret 
    X86_AT(c, 0xba32u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb9ebu, "ran off the end of a function");
}
void f_0000ba32(X86Cpu& c) {
    X86_TICK(c, 10);
    // 00ba32  ret 
    X86_AT(c, 0xba32u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xba32u, "ran off the end of a function");
}
void f_0000ba34(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00ba34  test byte ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0xba34u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))) & 0x1u, 1);
    // 00ba3c  je 0xba70
    X86_AT(c, 0xba3cu);
    if (x86_cc(c, 4)) { goto L_ba70; }
    X86_TICK(c, 42);
    // 00ba3e  movzx ebx, cl
    X86_AT(c, 0xba3eu);
    c.r[3] = g8(c, 1);
    // 00ba41  mov edx, dword ptr cs:[ebx*4 + 0xbd2c]
    X86_AT(c, 0xba41u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xBD2Cu)));
    // 00ba49  movzx eax, ch
    X86_AT(c, 0xba49u);
    c.r[0] = g8(c, 5);
    // 00ba4c  lea eax, [eax*4]
    X86_AT(c, 0xba4cu);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 00ba53  mov ebx, 0x3c
    X86_AT(c, 0xba53u);
    c.r[3] = 0x3Cu;
    // 00ba58  sub ebx, eax
    X86_AT(c, 0xba58u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00ba5a  or dword ptr gs:[ebp + ebx*1 + 0x234], edx
    X86_AT(c, 0xba5au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] + 0x234u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[2], 4)); }
    // 00ba62  lea ebx, [eax + 0x3c]
    X86_AT(c, 0xba62u);
    c.r[3] = (uint32_t)(c.r[0] + 0x3Cu);
    // 00ba65  or dword ptr gs:[ebp + ebx*1 + 0x234], edx
    X86_AT(c, 0xba65u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] + 0x234u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[2], 4)); }
    // 00ba6d  ret 
    X86_AT(c, 0xba6du);
    c.eip = pop32(c); return;
L_ba70:
    X86_TICK(c, 42);
    // 00ba70  movzx ebx, cl
    X86_AT(c, 0xba70u);
    c.r[3] = g8(c, 1);
    // 00ba73  mov edx, dword ptr cs:[ebx*4 + 0xbd70]
    X86_AT(c, 0xba73u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xBD70u)));
    // 00ba7b  movzx eax, ch
    X86_AT(c, 0xba7bu);
    c.r[0] = g8(c, 5);
    // 00ba7e  lea eax, [eax*4]
    X86_AT(c, 0xba7eu);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 00ba85  mov ebx, 0x40
    X86_AT(c, 0xba85u);
    c.r[3] = 0x40u;
    // 00ba8a  sub ebx, eax
    X86_AT(c, 0xba8au);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00ba8c  or dword ptr gs:[ebp + ebx*1 + 0x234], edx
    X86_AT(c, 0xba8cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] + 0x234u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[2], 4)); }
    // 00ba94  lea ebx, [eax + 0x3c]
    X86_AT(c, 0xba94u);
    c.r[3] = (uint32_t)(c.r[0] + 0x3Cu);
    // 00ba97  or dword ptr gs:[ebp + ebx*1 + 0x234], edx
    X86_AT(c, 0xba97u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] + 0x234u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[2], 4)); }
    // 00ba9f  ret 
    X86_AT(c, 0xba9fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xba34u, "ran off the end of a function");
}
void f_0000ba3c(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00ba3c  je 0xba70
    X86_AT(c, 0xba3cu);
    if (x86_cc(c, 4)) { goto L_ba70; }
    X86_TICK(c, 42);
    // 00ba3e  movzx ebx, cl
    X86_AT(c, 0xba3eu);
    c.r[3] = g8(c, 1);
    // 00ba41  mov edx, dword ptr cs:[ebx*4 + 0xbd2c]
    X86_AT(c, 0xba41u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xBD2Cu)));
    // 00ba49  movzx eax, ch
    X86_AT(c, 0xba49u);
    c.r[0] = g8(c, 5);
    // 00ba4c  lea eax, [eax*4]
    X86_AT(c, 0xba4cu);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 00ba53  mov ebx, 0x3c
    X86_AT(c, 0xba53u);
    c.r[3] = 0x3Cu;
    // 00ba58  sub ebx, eax
    X86_AT(c, 0xba58u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00ba5a  or dword ptr gs:[ebp + ebx*1 + 0x234], edx
    X86_AT(c, 0xba5au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] + 0x234u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[2], 4)); }
    // 00ba62  lea ebx, [eax + 0x3c]
    X86_AT(c, 0xba62u);
    c.r[3] = (uint32_t)(c.r[0] + 0x3Cu);
    // 00ba65  or dword ptr gs:[ebp + ebx*1 + 0x234], edx
    X86_AT(c, 0xba65u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] + 0x234u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[2], 4)); }
    // 00ba6d  ret 
    X86_AT(c, 0xba6du);
    c.eip = pop32(c); return;
L_ba70:
    X86_TICK(c, 42);
    // 00ba70  movzx ebx, cl
    X86_AT(c, 0xba70u);
    c.r[3] = g8(c, 1);
    // 00ba73  mov edx, dword ptr cs:[ebx*4 + 0xbd70]
    X86_AT(c, 0xba73u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xBD70u)));
    // 00ba7b  movzx eax, ch
    X86_AT(c, 0xba7bu);
    c.r[0] = g8(c, 5);
    // 00ba7e  lea eax, [eax*4]
    X86_AT(c, 0xba7eu);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 00ba85  mov ebx, 0x40
    X86_AT(c, 0xba85u);
    c.r[3] = 0x40u;
    // 00ba8a  sub ebx, eax
    X86_AT(c, 0xba8au);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00ba8c  or dword ptr gs:[ebp + ebx*1 + 0x234], edx
    X86_AT(c, 0xba8cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] + 0x234u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[2], 4)); }
    // 00ba94  lea ebx, [eax + 0x3c]
    X86_AT(c, 0xba94u);
    c.r[3] = (uint32_t)(c.r[0] + 0x3Cu);
    // 00ba97  or dword ptr gs:[ebp + ebx*1 + 0x234], edx
    X86_AT(c, 0xba97u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] + 0x234u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[2], 4)); }
    // 00ba9f  ret 
    X86_AT(c, 0xba9fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xba3cu, "ran off the end of a function");
}
void f_0000ba3e(X86Cpu& c) {
    X86_TICK(c, 42);
    // 00ba3e  movzx ebx, cl
    X86_AT(c, 0xba3eu);
    c.r[3] = g8(c, 1);
    // 00ba41  mov edx, dword ptr cs:[ebx*4 + 0xbd2c]
    X86_AT(c, 0xba41u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xBD2Cu)));
    // 00ba49  movzx eax, ch
    X86_AT(c, 0xba49u);
    c.r[0] = g8(c, 5);
    // 00ba4c  lea eax, [eax*4]
    X86_AT(c, 0xba4cu);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 00ba53  mov ebx, 0x3c
    X86_AT(c, 0xba53u);
    c.r[3] = 0x3Cu;
    // 00ba58  sub ebx, eax
    X86_AT(c, 0xba58u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00ba5a  or dword ptr gs:[ebp + ebx*1 + 0x234], edx
    X86_AT(c, 0xba5au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] + 0x234u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[2], 4)); }
    // 00ba62  lea ebx, [eax + 0x3c]
    X86_AT(c, 0xba62u);
    c.r[3] = (uint32_t)(c.r[0] + 0x3Cu);
    // 00ba65  or dword ptr gs:[ebp + ebx*1 + 0x234], edx
    X86_AT(c, 0xba65u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] + 0x234u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[2], 4)); }
    // 00ba6d  ret 
    X86_AT(c, 0xba6du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xba3eu, "ran off the end of a function");
}
void f_0000ba41(X86Cpu& c) {
    X86_TICK(c, 39);
    // 00ba41  mov edx, dword ptr cs:[ebx*4 + 0xbd2c]
    X86_AT(c, 0xba41u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xBD2Cu)));
    // 00ba49  movzx eax, ch
    X86_AT(c, 0xba49u);
    c.r[0] = g8(c, 5);
    // 00ba4c  lea eax, [eax*4]
    X86_AT(c, 0xba4cu);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 00ba53  mov ebx, 0x3c
    X86_AT(c, 0xba53u);
    c.r[3] = 0x3Cu;
    // 00ba58  sub ebx, eax
    X86_AT(c, 0xba58u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00ba5a  or dword ptr gs:[ebp + ebx*1 + 0x234], edx
    X86_AT(c, 0xba5au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] + 0x234u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[2], 4)); }
    // 00ba62  lea ebx, [eax + 0x3c]
    X86_AT(c, 0xba62u);
    c.r[3] = (uint32_t)(c.r[0] + 0x3Cu);
    // 00ba65  or dword ptr gs:[ebp + ebx*1 + 0x234], edx
    X86_AT(c, 0xba65u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] + 0x234u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[2], 4)); }
    // 00ba6d  ret 
    X86_AT(c, 0xba6du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xba41u, "ran off the end of a function");
}
void f_0000ba49(X86Cpu& c) {
    X86_TICK(c, 35);
    // 00ba49  movzx eax, ch
    X86_AT(c, 0xba49u);
    c.r[0] = g8(c, 5);
    // 00ba4c  lea eax, [eax*4]
    X86_AT(c, 0xba4cu);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 00ba53  mov ebx, 0x3c
    X86_AT(c, 0xba53u);
    c.r[3] = 0x3Cu;
    // 00ba58  sub ebx, eax
    X86_AT(c, 0xba58u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00ba5a  or dword ptr gs:[ebp + ebx*1 + 0x234], edx
    X86_AT(c, 0xba5au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] + 0x234u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[2], 4)); }
    // 00ba62  lea ebx, [eax + 0x3c]
    X86_AT(c, 0xba62u);
    c.r[3] = (uint32_t)(c.r[0] + 0x3Cu);
    // 00ba65  or dword ptr gs:[ebp + ebx*1 + 0x234], edx
    X86_AT(c, 0xba65u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] + 0x234u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[2], 4)); }
    // 00ba6d  ret 
    X86_AT(c, 0xba6du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xba49u, "ran off the end of a function");
}
void f_0000ba4c(X86Cpu& c) {
    X86_TICK(c, 32);
    // 00ba4c  lea eax, [eax*4]
    X86_AT(c, 0xba4cu);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 00ba53  mov ebx, 0x3c
    X86_AT(c, 0xba53u);
    c.r[3] = 0x3Cu;
    // 00ba58  sub ebx, eax
    X86_AT(c, 0xba58u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00ba5a  or dword ptr gs:[ebp + ebx*1 + 0x234], edx
    X86_AT(c, 0xba5au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] + 0x234u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[2], 4)); }
    // 00ba62  lea ebx, [eax + 0x3c]
    X86_AT(c, 0xba62u);
    c.r[3] = (uint32_t)(c.r[0] + 0x3Cu);
    // 00ba65  or dword ptr gs:[ebp + ebx*1 + 0x234], edx
    X86_AT(c, 0xba65u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] + 0x234u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[2], 4)); }
    // 00ba6d  ret 
    X86_AT(c, 0xba6du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xba4cu, "ran off the end of a function");
}
void f_0000ba53(X86Cpu& c) {
    X86_TICK(c, 30);
    // 00ba53  mov ebx, 0x3c
    X86_AT(c, 0xba53u);
    c.r[3] = 0x3Cu;
    // 00ba58  sub ebx, eax
    X86_AT(c, 0xba58u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00ba5a  or dword ptr gs:[ebp + ebx*1 + 0x234], edx
    X86_AT(c, 0xba5au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] + 0x234u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[2], 4)); }
    // 00ba62  lea ebx, [eax + 0x3c]
    X86_AT(c, 0xba62u);
    c.r[3] = (uint32_t)(c.r[0] + 0x3Cu);
    // 00ba65  or dword ptr gs:[ebp + ebx*1 + 0x234], edx
    X86_AT(c, 0xba65u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] + 0x234u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[2], 4)); }
    // 00ba6d  ret 
    X86_AT(c, 0xba6du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xba53u, "ran off the end of a function");
}
void f_0000ba58(X86Cpu& c) {
    X86_TICK(c, 28);
    // 00ba58  sub ebx, eax
    X86_AT(c, 0xba58u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00ba5a  or dword ptr gs:[ebp + ebx*1 + 0x234], edx
    X86_AT(c, 0xba5au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] + 0x234u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[2], 4)); }
    // 00ba62  lea ebx, [eax + 0x3c]
    X86_AT(c, 0xba62u);
    c.r[3] = (uint32_t)(c.r[0] + 0x3Cu);
    // 00ba65  or dword ptr gs:[ebp + ebx*1 + 0x234], edx
    X86_AT(c, 0xba65u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] + 0x234u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[2], 4)); }
    // 00ba6d  ret 
    X86_AT(c, 0xba6du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xba58u, "ran off the end of a function");
}
void f_0000ba5a(X86Cpu& c) {
    X86_TICK(c, 26);
    // 00ba5a  or dword ptr gs:[ebp + ebx*1 + 0x234], edx
    X86_AT(c, 0xba5au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] + 0x234u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[2], 4)); }
    // 00ba62  lea ebx, [eax + 0x3c]
    X86_AT(c, 0xba62u);
    c.r[3] = (uint32_t)(c.r[0] + 0x3Cu);
    // 00ba65  or dword ptr gs:[ebp + ebx*1 + 0x234], edx
    X86_AT(c, 0xba65u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] + 0x234u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[2], 4)); }
    // 00ba6d  ret 
    X86_AT(c, 0xba6du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xba5au, "ran off the end of a function");
}
void f_0000ba62(X86Cpu& c) {
    X86_TICK(c, 19);
    // 00ba62  lea ebx, [eax + 0x3c]
    X86_AT(c, 0xba62u);
    c.r[3] = (uint32_t)(c.r[0] + 0x3Cu);
    // 00ba65  or dword ptr gs:[ebp + ebx*1 + 0x234], edx
    X86_AT(c, 0xba65u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] + 0x234u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[2], 4)); }
    // 00ba6d  ret 
    X86_AT(c, 0xba6du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xba62u, "ran off the end of a function");
}
void f_0000ba65(X86Cpu& c) {
    X86_TICK(c, 17);
    // 00ba65  or dword ptr gs:[ebp + ebx*1 + 0x234], edx
    X86_AT(c, 0xba65u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[3] + 0x234u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[2], 4)); }
    // 00ba6d  ret 
    X86_AT(c, 0xba6du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xba65u, "ran off the end of a function");
}
void f_0000ba6d(X86Cpu& c) {
    X86_TICK(c, 10);
    // 00ba6d  ret 
    X86_AT(c, 0xba6du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xba6du, "ran off the end of a function");
}
void f_0000bae0(X86Cpu& c) {
    X86_TICK(c, 14);
    // 00bae0  sub eax, eax
    X86_AT(c, 0xbae0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00bae2  cmp word ptr gs:[ebp + 0x18], bx
    X86_AT(c, 0xbae2u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u))), (c.r[3] & 0xFFFFu), 0, 2);
    // 00bae7  jb 0xbb0f
    X86_AT(c, 0xbae7u);
    if (x86_cc(c, 2)) { goto L_bb0f; }
    X86_TICK(c, 12);
    // 00bae9  cmp word ptr gs:[ebp + 0x1a], dx
    X86_AT(c, 0xbae9u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00baee  jb 0xbb0f
    X86_AT(c, 0xbaeeu);
    if (x86_cc(c, 2)) { goto L_bb0f; }
    X86_TICK(c, 49);
    // 00baf0  movzx ebx, bx
    X86_AT(c, 0xbaf0u);
    c.r[3] = (c.r[3] & 0xFFFFu);
    // 00baf3  movzx esi, dx
    X86_AT(c, 0xbaf3u);
    c.r[6] = (c.r[2] & 0xFFFFu);
    // 00baf6  mov ds, word ptr gs:[ebp + 4]
    X86_AT(c, 0xbaf6u);
    x86_load_seg(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 00bafa  imul esi, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0xbafau);
    c.r[6] = x86_imul2(c, c.r[6], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 00baff  add esi, dword ptr gs:[ebp]
    X86_AT(c, 0xbaffu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 00bb03  mov ecx, dword ptr gs:[ebp + 0x14]
    X86_AT(c, 0xbb03u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x14u)));
    // 00bb07  jmp dword ptr cs:[ecx*4 + 0xbb10]
    X86_AT(c, 0xbb07u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBB10u)));
      switch (t) {
      case 0xbb20u: goto L_bb20;
      case 0xbb38u: goto L_bb38;
      case 0xbb50u: goto L_bb50;
      case 0xbb58u: goto L_bb58;
      default: x86_jump(c, t); return; } }
L_bb0f:
    X86_TICK(c, 10);
    // 00bb0f  ret 
    X86_AT(c, 0xbb0fu);
    c.eip = pop32(c); return;
L_bb20:
    X86_TICK(c, 30);
    // 00bb20  mov eax, ebx
    X86_AT(c, 0xbb20u);
    c.r[0] = c.r[3];
    // 00bb22  shr eax, 3
    X86_AT(c, 0xbb22u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 00bb25  mov al, byte ptr [esi + eax*1]
    X86_AT(c, 0xbb25u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[0]))));
    // 00bb28  mov cl, bl
    X86_AT(c, 0xbb28u);
    s8(c, 1, g8(c, 3));
    // 00bb2a  and cl, 7
    X86_AT(c, 0xbb2au);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0x7u, 1)); }
    // 00bb2d  xor cl, 7
    X86_AT(c, 0xbb2du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v ^ 0x7u, 1)); }
    // 00bb30  shr al, cl
    X86_AT(c, 0xbb30u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 1, w); if (w) s8(c, 0, r); }
    // 00bb32  and eax, 1
    X86_AT(c, 0xbb32u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1u, 4); }
    // 00bb37  ret 
    X86_AT(c, 0xbb37u);
    c.eip = pop32(c); return;
L_bb38:
    X86_TICK(c, 10);
    // 00bb38  mov eax, ebx
    X86_AT(c, 0xbb38u);
    c.r[0] = c.r[3];
    // 00bb3a  shr eax, 1
    X86_AT(c, 0xbb3au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00bb3c  jb 0xbb47
    X86_AT(c, 0xbb3cu);
    if (x86_cc(c, 2)) { goto L_bb47; }
    X86_TICK(c, 16);
    // 00bb3e  mov al, byte ptr [esi + eax*1]
    X86_AT(c, 0xbb3eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[0]))));
    // 00bb41  and eax, 0xf
    X86_AT(c, 0xbb41u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFu, 4); }
    // 00bb46  ret 
    X86_AT(c, 0xbb46u);
    c.eip = pop32(c); return;
L_bb47:
    X86_TICK(c, 19);
    // 00bb47  movzx eax, byte ptr [esi + eax*1]
    X86_AT(c, 0xbb47u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[0])));
    // 00bb4b  shr eax, 4
    X86_AT(c, 0xbb4bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00bb4e  ret 
    X86_AT(c, 0xbb4eu);
    c.eip = pop32(c); return;
L_bb50:
    X86_TICK(c, 16);
    // 00bb50  movzx eax, byte ptr [esi + ebx*1]
    X86_AT(c, 0xbb50u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[3])));
    // 00bb54  ret 
    X86_AT(c, 0xbb54u);
    c.eip = pop32(c); return;
L_bb58:
    X86_TICK(c, 16);
    // 00bb58  movzx eax, word ptr [esi + ebx*2]
    X86_AT(c, 0xbb58u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(c.r[6] + c.r[3] * 2)));
    // 00bb5c  ret 
    X86_AT(c, 0xbb5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbae0u, "ran off the end of a function");
}
void f_0000bb60(X86Cpu& c) {
    X86_TICK(c, 30);
    // 00bb60  push ecx
    X86_AT(c, 0xbb60u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00bb61  push edx
    X86_AT(c, 0xbb61u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00bb62  push esi
    X86_AT(c, 0xbb62u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00bb63  push edi
    X86_AT(c, 0xbb63u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00bb64  bsr ecx, eax
    X86_AT(c, 0xbb64u);
    c.r[1] = x86_bsr(c, c.r[0], c.r[1]);
    // 00bb67  inc ecx
    X86_AT(c, 0xbb67u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 00bb68  shr ecx, 1
    X86_AT(c, 0xbb68u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 00bb6a  mov esi, eax
    X86_AT(c, 0xbb6au);
    c.r[6] = c.r[0];
    // 00bb6c  shr esi, cl
    X86_AT(c, 0xbb6cu);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[6] = r; }
    // 00bb6e  mov ecx, eax
    X86_AT(c, 0xbb6eu);
    c.r[1] = c.r[0];
L_bb70:
    X86_TICK(c, 7);
    // 00bb70  or esi, esi
    X86_AT(c, 0xbb70u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v | c.r[6], 4); }
    // 00bb72  je 0xbb8c
    X86_AT(c, 0xbb72u);
    if (x86_cc(c, 4)) { goto L_bb8c; }
    X86_TICK(c, 58);
    // 00bb74  mov edi, esi
    X86_AT(c, 0xbb74u);
    c.r[7] = c.r[6];
    // 00bb76  mov eax, ecx
    X86_AT(c, 0xbb76u);
    c.r[0] = c.r[1];
    // 00bb78  cdq 
    X86_AT(c, 0xbb78u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 00bb79  div esi
    X86_AT(c, 0xbb79u);
    x86_div(c, c.r[6], 4, 0xbb79u);
    // 00bb7b  add esi, eax
    X86_AT(c, 0xbb7bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 00bb7d  shr esi, 1
    X86_AT(c, 0xbb7du);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[6] = r; }
    // 00bb7f  cmp esi, edi
    X86_AT(c, 0xbb7fu);
    (void)x86_sub(c, c.r[6], c.r[7], 0, 4);
    // 00bb81  je 0xbb8c
    X86_AT(c, 0xbb81u);
    if (x86_cc(c, 4)) { goto L_bb8c; }
    X86_TICK(c, 51);
    // 00bb83  mov eax, ecx
    X86_AT(c, 0xbb83u);
    c.r[0] = c.r[1];
    // 00bb85  cdq 
    X86_AT(c, 0xbb85u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 00bb86  div edi
    X86_AT(c, 0xbb86u);
    x86_div(c, c.r[7], 4, 0xbb86u);
    // 00bb88  cmp eax, esi
    X86_AT(c, 0xbb88u);
    (void)x86_sub(c, c.r[0], c.r[6], 0, 4);
    // 00bb8a  jne 0xbb70
    X86_AT(c, 0xbb8au);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xbb70u); goto L_bb70; }
L_bb8c:
    X86_TICK(c, 28);
    // 00bb8c  mov eax, esi
    X86_AT(c, 0xbb8cu);
    c.r[0] = c.r[6];
    // 00bb8e  pop edi
    X86_AT(c, 0xbb8eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00bb8f  pop esi
    X86_AT(c, 0xbb8fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00bb90  pop edx
    X86_AT(c, 0xbb90u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00bb91  pop ecx
    X86_AT(c, 0xbb91u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00bb92  ret 
    X86_AT(c, 0xbb92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbb60u, "ran off the end of a function");
}
void f_0000bb94(X86Cpu& c) {
    X86_TICK(c, 13);
    // 00bb94  movzx ebx, word ptr gs:[ebp + 0x30c]
    X86_AT(c, 0xbb94u);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x30Cu)));
    // 00bb9c  cmp bx, 0x5a
    X86_AT(c, 0xbb9cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0x5Au, 0, 2);
    // 00bba0  jb 0xbbb4
    X86_AT(c, 0xbba0u);
    if (x86_cc(c, 2)) { goto L_bbb4; }
    X86_TICK(c, 7);
    // 00bba2  cmp bx, 0xb4
    X86_AT(c, 0xbba2u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0xB4u, 0, 2);
    // 00bba7  jb 0xbbc0
    X86_AT(c, 0xbba7u);
    if (x86_cc(c, 2)) { goto L_bbc0; }
    X86_TICK(c, 7);
    // 00bba9  cmp bx, 0x10e
    X86_AT(c, 0xbba9u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0x10Eu, 0, 2);
    // 00bbae  jb 0xbbd4
    X86_AT(c, 0xbbaeu);
    if (x86_cc(c, 2)) { goto L_bbd4; }
    X86_TICK(c, 7);
    // 00bbb0  jmp 0xbbe8
    X86_AT(c, 0xbbb0u);
    goto L_bbe8;
L_bbb4:
    X86_TICK(c, 16);
    // 00bbb4  mov dh, 0
    X86_AT(c, 0xbbb4u);
    s8(c, 6, 0x0u);
    // 00bbb6  mov ax, word ptr cs:[ebx*2 + 0xbc62]
    X86_AT(c, 0xbbb6u);
    s16(c, 0, rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0xBC62u))));
    // 00bbbf  ret 
    X86_AT(c, 0xbbbfu);
    c.eip = pop32(c); return;
L_bbc0:
    X86_TICK(c, 20);
    // 00bbc0  sub bx, 0x5a
    X86_AT(c, 0xbbc0u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, 0x5Au, 0, 2)); }
    // 00bbc4  mov dh, 0
    X86_AT(c, 0xbbc4u);
    s8(c, 6, 0x0u);
    // 00bbc6  neg ebx
    X86_AT(c, 0xbbc6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_neg(c, v, 4); }
    // 00bbc8  mov ax, word ptr cs:[ebx*2 + 0xbd16]
    X86_AT(c, 0xbbc8u);
    s16(c, 0, rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0xBD16u))));
    // 00bbd1  ret 
    X86_AT(c, 0xbbd1u);
    c.eip = pop32(c); return;
L_bbd4:
    X86_TICK(c, 18);
    // 00bbd4  sub bx, 0xb4
    X86_AT(c, 0xbbd4u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, 0xB4u, 0, 2)); }
    // 00bbd9  mov dh, 0xff
    X86_AT(c, 0xbbd9u);
    s8(c, 6, 0xFFu);
    // 00bbdb  mov ax, word ptr cs:[ebx*2 + 0xbc62]
    X86_AT(c, 0xbbdbu);
    s16(c, 0, rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0xBC62u))));
    // 00bbe4  ret 
    X86_AT(c, 0xbbe4u);
    c.eip = pop32(c); return;
L_bbe8:
    X86_TICK(c, 20);
    // 00bbe8  sub bx, 0x10e
    X86_AT(c, 0xbbe8u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, 0x10Eu, 0, 2)); }
    // 00bbed  mov dh, 0xff
    X86_AT(c, 0xbbedu);
    s8(c, 6, 0xFFu);
    // 00bbef  neg ebx
    X86_AT(c, 0xbbefu);
    { uint32_t v = c.r[3]; c.r[3] = x86_neg(c, v, 4); }
    // 00bbf1  mov ax, word ptr cs:[ebx*2 + 0xbd16]
    X86_AT(c, 0xbbf1u);
    s16(c, 0, rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0xBD16u))));
    // 00bbfa  ret 
    X86_AT(c, 0xbbfau);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbb94u, "ran off the end of a function");
}
void f_0000bbfc(X86Cpu& c) {
    X86_TICK(c, 13);
    // 00bbfc  movzx ebx, word ptr gs:[ebp + 0x30c]
    X86_AT(c, 0xbbfcu);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x30Cu)));
    // 00bc04  cmp bx, 0x5a
    X86_AT(c, 0xbc04u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0x5Au, 0, 2);
    // 00bc08  jb 0xbc1c
    X86_AT(c, 0xbc08u);
    if (x86_cc(c, 2)) { goto L_bc1c; }
    X86_TICK(c, 7);
    // 00bc0a  cmp bx, 0xb4
    X86_AT(c, 0xbc0au);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0xB4u, 0, 2);
    // 00bc0f  jb 0xbc2c
    X86_AT(c, 0xbc0fu);
    if (x86_cc(c, 2)) { goto L_bc2c; }
    X86_TICK(c, 7);
    // 00bc11  cmp bx, 0x10e
    X86_AT(c, 0xbc11u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0x10Eu, 0, 2);
    // 00bc16  jb 0xbc3c
    X86_AT(c, 0xbc16u);
    if (x86_cc(c, 2)) { goto L_bc3c; }
    X86_TICK(c, 7);
    // 00bc18  jmp 0xbc50
    X86_AT(c, 0xbc18u);
    goto L_bc50;
L_bc1c:
    X86_TICK(c, 18);
    // 00bc1c  mov dh, 0
    X86_AT(c, 0xbc1cu);
    s8(c, 6, 0x0u);
    // 00bc1e  neg ebx
    X86_AT(c, 0xbc1eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_neg(c, v, 4); }
    // 00bc20  mov ax, word ptr cs:[ebx*2 + 0xbd16]
    X86_AT(c, 0xbc20u);
    s16(c, 0, rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0xBD16u))));
    // 00bc29  ret 
    X86_AT(c, 0xbc29u);
    c.eip = pop32(c); return;
L_bc2c:
    X86_TICK(c, 18);
    // 00bc2c  sub bx, 0x5a
    X86_AT(c, 0xbc2cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, 0x5Au, 0, 2)); }
    // 00bc30  mov dh, 0xff
    X86_AT(c, 0xbc30u);
    s8(c, 6, 0xFFu);
    // 00bc32  mov ax, word ptr cs:[ebx*2 + 0xbc62]
    X86_AT(c, 0xbc32u);
    s16(c, 0, rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0xBC62u))));
    // 00bc3b  ret 
    X86_AT(c, 0xbc3bu);
    c.eip = pop32(c); return;
L_bc3c:
    X86_TICK(c, 20);
    // 00bc3c  sub bx, 0xb4
    X86_AT(c, 0xbc3cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, 0xB4u, 0, 2)); }
    // 00bc41  mov dh, 0xff
    X86_AT(c, 0xbc41u);
    s8(c, 6, 0xFFu);
    // 00bc43  neg ebx
    X86_AT(c, 0xbc43u);
    { uint32_t v = c.r[3]; c.r[3] = x86_neg(c, v, 4); }
    // 00bc45  mov ax, word ptr cs:[ebx*2 + 0xbd16]
    X86_AT(c, 0xbc45u);
    s16(c, 0, rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0xBD16u))));
    // 00bc4e  ret 
    X86_AT(c, 0xbc4eu);
    c.eip = pop32(c); return;
L_bc50:
    X86_TICK(c, 18);
    // 00bc50  sub bx, 0x10e
    X86_AT(c, 0xbc50u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, 0x10Eu, 0, 2)); }
    // 00bc55  mov dh, 0
    X86_AT(c, 0xbc55u);
    s8(c, 6, 0x0u);
    // 00bc57  mov ax, word ptr cs:[ebx*2 + 0xbc62]
    X86_AT(c, 0xbc57u);
    s16(c, 0, rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0xBC62u))));
    // 00bc60  ret 
    X86_AT(c, 0xbc60u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xbbfcu, "ran off the end of a function");
}
void f_0000c434(X86Cpu& c) {
    goto L_c434;
L_3064:
    X86_TICK(c, 12);
    // 003064  mov ah, 0xff
    X86_AT(c, 0x3064u);
    s8(c, 4, 0xFFu);
    // 003066  ret 
    X86_AT(c, 0x3066u);
    c.eip = pop32(c); return;
L_c434:
    X86_TICK(c, 14);
    // 00c434  sub eax, eax
    X86_AT(c, 0xc434u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00c436  cmp word ptr [esi + 0xc], ax
    X86_AT(c, 0xc436u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00c43a  jl 0x3064
    X86_AT(c, 0xc43au);
    if (x86_cc(c, 12)) { X86_POLL(c, 0x3064u); goto L_3064; }
    X86_TICK(c, 15);
    // 00c440  mov byte ptr gs:[ebp + 0x41f], al
    X86_AT(c, 0xc440u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu)), g8(c, 0));
    // 00c447  mov byte ptr gs:[ebp + 0x4d4], al
    X86_AT(c, 0xc447u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4D4u)), g8(c, 0));
    // 00c44e  inc eax
    X86_AT(c, 0xc44eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 00c44f  mov byte ptr gs:[ebp + 0x41e], al
    X86_AT(c, 0xc44fu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Eu)), g8(c, 0));
    // 00c456  jmp 0xc47a
    X86_AT(c, 0xc456u);
    goto L_c47a;
L_c47a:
    X86_TICK(c, 41);
    // 00c47a  mov word ptr gs:[ebp + 0x4dc], ds
    X86_AT(c, 0xc47au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4DCu)), (uint32_t)c.sreg[3]);
    // 00c481  mov dword ptr gs:[ebp + 0x4d8], esi
    X86_AT(c, 0xc481u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4D8u)), c.r[6]);
    // 00c488  mov eax, dword ptr [esi]
    X86_AT(c, 0xc488u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00c48a  mov dword ptr gs:[ebp + 0x408], eax
    X86_AT(c, 0xc48au);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)), c.r[0]);
    // 00c491  mov edx, dword ptr [esi + 4]
    X86_AT(c, 0xc491u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)));
    // 00c494  mov ecx, dword ptr [esi + 8]
    X86_AT(c, 0xc494u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)));
    // 00c497  shld ebx, ecx, 0x10
    X86_AT(c, 0xc497u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00c49b  mov ax, word ptr [esi + 0xc]
    X86_AT(c, 0xc49bu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu))));
    // 00c49f  mov word ptr gs:[ebp + 0x40c], ax
    X86_AT(c, 0xc49fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Cu)), (c.r[0] & 0xFFFFu));
    // 00c4a7  mov word ptr gs:[ebp + 0x40e], ax
    X86_AT(c, 0xc4a7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu)), (c.r[0] & 0xFFFFu));
    // 00c4af  mov esi, eax
    X86_AT(c, 0xc4afu);
    c.r[6] = c.r[0];
    // 00c4b1  shld eax, edx, 0x10
    X86_AT(c, 0xc4b1u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00c4b5  or edx, edx
    X86_AT(c, 0xc4b5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | c.r[2], 4); }
    // 00c4b7  jne 0xc4bb
    X86_AT(c, 0xc4b7u);
    if (x86_cc(c, 5)) { goto L_c4bb; }
    X86_TICK(c, 2);
    // 00c4b9  mov edx, esi
    X86_AT(c, 0xc4b9u);
    c.r[2] = c.r[6];
L_c4bb:
    X86_TICK(c, 11);
    // 00c4bb  mov word ptr gs:[ebp + 0x414], dx
    X86_AT(c, 0xc4bbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u)), (c.r[2] & 0xFFFFu));
    // 00c4c3  mov word ptr gs:[ebp + 0x416], ax
    X86_AT(c, 0xc4c3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x416u)), (c.r[0] & 0xFFFFu));
    // 00c4cb  or ecx, ecx
    X86_AT(c, 0xc4cbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v | c.r[1], 4); }
    // 00c4cd  jne 0xc4d1
    X86_AT(c, 0xc4cdu);
    if (x86_cc(c, 5)) { goto L_c4d1; }
    X86_TICK(c, 2);
    // 00c4cf  mov ecx, esi
    X86_AT(c, 0xc4cfu);
    c.r[1] = c.r[6];
L_c4d1:
    X86_TICK(c, 11);
    // 00c4d1  mov word ptr gs:[ebp + 0x418], cx
    X86_AT(c, 0xc4d1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)), (c.r[1] & 0xFFFFu));
    // 00c4d9  mov word ptr gs:[ebp + 0x41a], bx
    X86_AT(c, 0xc4d9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Au)), (c.r[3] & 0xFFFFu));
    // 00c4e1  call 0x3068
    X86_AT(c, 0xc4e1u);
    push32(c, 0xc4e6u); f_00003068(c); X86_RET(c, 0xc4e6u);
    X86_TICK(c, 7);
    // 00c4e6  jmp 0xc5e4
    X86_AT(c, 0xc4e6u);
    goto L_c5e4;
L_c5e4:
    X86_TICK(c, 16);
    // 00c5e4  mov eax, dword ptr gs:[ebp + 0x40c]
    X86_AT(c, 0xc5e4u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Cu)));
    // 00c5eb  shld ebx, eax, 0x10
    X86_AT(c, 0xc5ebu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00c5ef  mov cx, ax
    X86_AT(c, 0xc5efu);
    s16(c, 1, (c.r[0] & 0xFFFFu));
    // 00c5f2  or ax, bx
    X86_AT(c, 0xc5f2u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | (c.r[3] & 0xFFFFu), 2)); }
    // 00c5f5  jne 0xc60f
    X86_AT(c, 0xc5f5u);
    if (x86_cc(c, 5)) { goto L_c60f; }
    X86_TICK(c, 13);
    // 00c5f7  mov eax, dword ptr gs:[ebp + 0x408]
    X86_AT(c, 0xc5f7u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)));
    // 00c5fe  mov dword ptr gs:[ebp + 0x1d8], eax
    X86_AT(c, 0xc5feu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)), c.r[0]);
    // 00c605  call dword ptr gs:[ebp + 0x310]
    X86_AT(c, 0xc605u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u))); push32(c, 0xc60cu); x86_call(c, t); X86_RET(c, 0xc60cu); }
    X86_TICK(c, 12);
    // 00c60c  xor ah, ah
    X86_AT(c, 0xc60cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 00c60e  ret 
    X86_AT(c, 0xc60eu);
    c.eip = pop32(c); return;
L_c60f:
    X86_TICK(c, 7);
    // 00c60f  or cx, cx
    X86_AT(c, 0xc60fu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v | (c.r[1] & 0xFFFFu), 2)); }
    // 00c612  je 0xda7c
    X86_AT(c, 0xc612u);
    if (x86_cc(c, 4)) { goto L_da7c; }
    X86_TICK(c, 7);
    // 00c618  or bx, bx
    X86_AT(c, 0xc618u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v | (c.r[3] & 0xFFFFu), 2)); }
    // 00c61b  je 0xda7c
    X86_AT(c, 0xc61bu);
    if (x86_cc(c, 4)) { goto L_da7c; }
    X86_TICK(c, 12);
    // 00c621  cmp byte ptr gs:[ebp + 0x41e], 0
    X86_AT(c, 0xc621u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Eu))), 0x0u, 0, 1);
    // 00c629  jne 0xc63b
    X86_AT(c, 0xc629u);
    if (x86_cc(c, 5)) { goto L_c63b; }
    X86_TICK(c, 9);
    // 00c62b  mov dword ptr gs:[ebp + 0x494], 0x1010101
    X86_AT(c, 0xc62bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x494u)), 0x1010101u);
    // 00c636  jmp 0xc76e
    X86_AT(c, 0xc636u);
    goto L_c76e;
L_c63b:
    X86_TICK(c, 22);
    // 00c63b  sub eax, eax
    X86_AT(c, 0xc63bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00c63d  mov dword ptr gs:[ebp + 0x494], eax
    X86_AT(c, 0xc63du);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x494u)), c.r[0]);
    // 00c644  mov ebx, eax
    X86_AT(c, 0xc644u);
    c.r[3] = c.r[0];
    // 00c646  mov edi, eax
    X86_AT(c, 0xc646u);
    c.r[7] = c.r[0];
    // 00c648  mov eax, dword ptr gs:[ebp + 0x414]
    X86_AT(c, 0xc648u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u)));
    // 00c64f  shld edx, eax, 0x10
    X86_AT(c, 0xc64fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 00c653  cmp ax, di
    X86_AT(c, 0xc653u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[7] & 0xFFFFu), 0, 2);
    // 00c656  jg 0xc661
    X86_AT(c, 0xc656u);
    if (x86_cc(c, 15)) { goto L_c661; }
    X86_TICK(c, 7);
    // 00c658  cmp dx, di
    X86_AT(c, 0xc658u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[7] & 0xFFFFu), 0, 2);
    // 00c65b  jle 0xc661
    X86_AT(c, 0xc65bu);
    if (x86_cc(c, 14)) { goto L_c661; }
    X86_TICK(c, 9);
    // 00c65d  inc bx
    X86_AT(c, 0xc65du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 00c65f  jmp 0xc67f
    X86_AT(c, 0xc65fu);
    goto L_c67f;
L_c661:
    X86_TICK(c, 7);
    // 00c661  cmp ax, di
    X86_AT(c, 0xc661u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[7] & 0xFFFFu), 0, 2);
    // 00c664  jge 0xc671
    X86_AT(c, 0xc664u);
    if (x86_cc(c, 13)) { goto L_c671; }
    X86_TICK(c, 7);
    // 00c666  cmp dx, di
    X86_AT(c, 0xc666u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[7] & 0xFFFFu), 0, 2);
    // 00c669  jg 0xc671
    X86_AT(c, 0xc669u);
    if (x86_cc(c, 15)) { goto L_c671; }
    X86_TICK(c, 9);
    // 00c66b  add bx, 2
    X86_AT(c, 0xc66bu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x2u, 0, 2)); }
    // 00c66f  jmp 0xc67f
    X86_AT(c, 0xc66fu);
    goto L_c67f;
L_c671:
    X86_TICK(c, 7);
    // 00c671  cmp ax, di
    X86_AT(c, 0xc671u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[7] & 0xFFFFu), 0, 2);
    // 00c674  jl 0xc67f
    X86_AT(c, 0xc674u);
    if (x86_cc(c, 12)) { goto L_c67f; }
    X86_TICK(c, 7);
    // 00c676  cmp dx, di
    X86_AT(c, 0xc676u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[7] & 0xFFFFu), 0, 2);
    // 00c679  jge 0xc67f
    X86_AT(c, 0xc679u);
    if (x86_cc(c, 13)) { goto L_c67f; }
    X86_TICK(c, 2);
    // 00c67b  add bx, 3
    X86_AT(c, 0xc67bu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x3u, 0, 2)); }
L_c67f:
    X86_TICK(c, 20);
    // 00c67f  movzx esi, bx
    X86_AT(c, 0xc67fu);
    c.r[6] = (c.r[3] & 0xFFFFu);
    // 00c682  xchg bl, bh
    X86_AT(c, 0xc682u);
    { uint32_t t = g8(c, 3); s8(c, 3, g8(c, 7)); s8(c, 7, t); }
    // 00c684  mov edx, dword ptr gs:[ebp + 0x418]
    X86_AT(c, 0xc684u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)));
    // 00c68b  shld ecx, edx, 0x10
    X86_AT(c, 0xc68bu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[1] = r; }
    // 00c68f  cmp dx, di
    X86_AT(c, 0xc68fu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[7] & 0xFFFFu), 0, 2);
    // 00c692  jg 0xc69d
    X86_AT(c, 0xc692u);
    if (x86_cc(c, 15)) { goto L_c69d; }
    X86_TICK(c, 7);
    // 00c694  cmp cx, di
    X86_AT(c, 0xc694u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[7] & 0xFFFFu), 0, 2);
    // 00c697  jle 0xc69d
    X86_AT(c, 0xc697u);
    if (x86_cc(c, 14)) { goto L_c69d; }
    X86_TICK(c, 9);
    // 00c699  inc di
    X86_AT(c, 0xc699u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_inc(c, v, 2)); }
    // 00c69b  jmp 0xc6bb
    X86_AT(c, 0xc69bu);
    goto L_c6bb;
L_c69d:
    X86_TICK(c, 7);
    // 00c69d  cmp dx, di
    X86_AT(c, 0xc69du);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[7] & 0xFFFFu), 0, 2);
    // 00c6a0  jge 0xc6ad
    X86_AT(c, 0xc6a0u);
    if (x86_cc(c, 13)) { goto L_c6ad; }
    X86_TICK(c, 7);
    // 00c6a2  cmp cx, di
    X86_AT(c, 0xc6a2u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[7] & 0xFFFFu), 0, 2);
    // 00c6a5  jg 0xc6ad
    X86_AT(c, 0xc6a5u);
    if (x86_cc(c, 15)) { goto L_c6ad; }
    X86_TICK(c, 9);
    // 00c6a7  add di, 2
    X86_AT(c, 0xc6a7u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_add(c, v, 0x2u, 0, 2)); }
    // 00c6ab  jmp 0xc6bb
    X86_AT(c, 0xc6abu);
    goto L_c6bb;
L_c6ad:
    X86_TICK(c, 7);
    // 00c6ad  cmp dx, di
    X86_AT(c, 0xc6adu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[7] & 0xFFFFu), 0, 2);
    // 00c6b0  jl 0xc6bb
    X86_AT(c, 0xc6b0u);
    if (x86_cc(c, 12)) { goto L_c6bb; }
    X86_TICK(c, 7);
    // 00c6b2  cmp cx, di
    X86_AT(c, 0xc6b2u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[7] & 0xFFFFu), 0, 2);
    // 00c6b5  jge 0xc6bb
    X86_AT(c, 0xc6b5u);
    if (x86_cc(c, 13)) { goto L_c6bb; }
    X86_TICK(c, 2);
    // 00c6b7  add di, 3
    X86_AT(c, 0xc6b7u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_add(c, v, 0x3u, 0, 2)); }
L_c6bb:
    X86_TICK(c, 17);
    // 00c6bb  or bx, di
    X86_AT(c, 0xc6bbu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v | (c.r[7] & 0xFFFFu), 2)); }
    // 00c6be  mov word ptr gs:[ebp + 0x488], bx
    X86_AT(c, 0xc6beu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x488u)), (c.r[3] & 0xFFFFu));
    // 00c6c6  mov dword ptr gs:[ebp + 0x48c], esi
    X86_AT(c, 0xc6c6u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x48Cu)), c.r[6]);
    // 00c6cd  mov dword ptr gs:[ebp + 0x490], edi
    X86_AT(c, 0xc6cdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x490u)), c.r[7]);
    // 00c6d4  mov word ptr gs:[ebp + 0x428], 0
    X86_AT(c, 0xc6d4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x428u)), 0x0u);
    // 00c6de  cmp bh, 1
    X86_AT(c, 0xc6deu);
    (void)x86_sub(c, g8(c, 7), 0x1u, 0, 1);
    // 00c6e1  je 0xc6e8
    X86_AT(c, 0xc6e1u);
    if (x86_cc(c, 4)) { goto L_c6e8; }
    X86_TICK(c, 7);
    // 00c6e3  cmp bh, 2
    X86_AT(c, 0xc6e3u);
    (void)x86_sub(c, g8(c, 7), 0x2u, 0, 1);
    // 00c6e6  jne 0xc6f6
    X86_AT(c, 0xc6e6u);
    if (x86_cc(c, 5)) { goto L_c6f6; }
L_c6e8:
    X86_TICK(c, 12);
    // 00c6e8  inc byte ptr gs:[ebp + 0x428]
    X86_AT(c, 0xc6e8u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x428u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 00c6ef  inc byte ptr gs:[ebp + 0x429]
    X86_AT(c, 0xc6efu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x429u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
L_c6f6:
    X86_TICK(c, 7);
    // 00c6f6  cmp bh, bl
    X86_AT(c, 0xc6f6u);
    (void)x86_sub(c, g8(c, 7), g8(c, 3), 0, 1);
    // 00c6f8  jne 0xc73d
    X86_AT(c, 0xc6f8u);
    if (x86_cc(c, 5)) { goto L_c73d; }
    X86_TICK(c, 72);
    // 00c6fa  push edx
    X86_AT(c, 0xc6fau);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00c6fb  imul cx
    X86_AT(c, 0xc6fbu);
    x86_imul1(c, (c.r[1] & 0xFFFFu), 2);
    // 00c6fe  shrd esi, edx, 0x10
    X86_AT(c, 0xc6feu);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], 0x10u, 4, w); if (w) c.r[6] = r; }
    // 00c702  mov si, ax
    X86_AT(c, 0xc702u);
    s16(c, 6, (c.r[0] & 0xFFFFu));
    // 00c705  mov ax, word ptr gs:[ebp + 0x416]
    X86_AT(c, 0xc705u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x416u))));
    // 00c70d  pop ecx
    X86_AT(c, 0xc70du);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00c70e  imul cx
    X86_AT(c, 0xc70eu);
    x86_imul1(c, (c.r[1] & 0xFFFFu), 2);
    // 00c711  shl eax, 0x10
    X86_AT(c, 0xc711u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00c714  shrd eax, edx, 0x10
    X86_AT(c, 0xc714u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00c718  cmp esi, eax
    X86_AT(c, 0xc718u);
    (void)x86_sub(c, c.r[6], c.r[0], 0, 4);
    // 00c71a  jg 0xc76e
    X86_AT(c, 0xc71au);
    if (x86_cc(c, 15)) { goto L_c76e; }
    X86_TICK(c, 9);
    // 00c71c  mov dword ptr gs:[ebp + 0x494], 0x1010101
    X86_AT(c, 0xc71cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x494u)), 0x1010101u);
    // 00c727  cmp esi, eax
    X86_AT(c, 0xc727u);
    (void)x86_sub(c, c.r[6], c.r[0], 0, 4);
    // 00c729  jne 0xc76e
    X86_AT(c, 0xc729u);
    if (x86_cc(c, 5)) { goto L_c76e; }
    X86_TICK(c, 11);
    // 00c72b  mov byte ptr gs:[ebp + 0x41e], 0
    X86_AT(c, 0xc72bu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Eu)), 0x0u);
    // 00c733  mov byte ptr gs:[ebp + 0x41f], 0
    X86_AT(c, 0xc733u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu)), 0x0u);
    // 00c73b  jmp 0xc76e
    X86_AT(c, 0xc73bu);
    goto L_c76e;
L_c73d:
    X86_TICK(c, 7);
    // 00c73d  test bh, 1
    X86_AT(c, 0xc73du);
    (void)x86_logic(c, g8(c, 7) & 0x1u, 1);
    // 00c740  je 0xc74a
    X86_AT(c, 0xc740u);
    if (x86_cc(c, 4)) { goto L_c74a; }
    X86_TICK(c, 6);
    // 00c742  inc byte ptr gs:[ebp + esi*1 + 0x494]
    X86_AT(c, 0xc742u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x494u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
L_c74a:
    X86_TICK(c, 7);
    // 00c74a  test bl, 1
    X86_AT(c, 0xc74au);
    (void)x86_logic(c, g8(c, 3) & 0x1u, 1);
    // 00c74d  jne 0xc757
    X86_AT(c, 0xc74du);
    if (x86_cc(c, 5)) { goto L_c757; }
    X86_TICK(c, 6);
    // 00c74f  inc byte ptr gs:[ebp + edi*1 + 0x494]
    X86_AT(c, 0xc74fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x494u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
L_c757:
    X86_TICK(c, 11);
    // 00c757  inc bh
    X86_AT(c, 0xc757u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_inc(c, v, 1)); }
    // 00c759  and bh, 3
    X86_AT(c, 0xc759u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v & 0x3u, 1)); }
    // 00c75c  cmp bh, bl
    X86_AT(c, 0xc75cu);
    (void)x86_sub(c, g8(c, 7), g8(c, 3), 0, 1);
    // 00c75e  je 0xc76e
    X86_AT(c, 0xc75eu);
    if (x86_cc(c, 4)) { goto L_c76e; }
    X86_TICK(c, 17);
    // 00c760  inc esi
    X86_AT(c, 0xc760u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 00c761  and esi, 3
    X86_AT(c, 0xc761u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0x3u, 4); }
    // 00c764  inc byte ptr gs:[ebp + esi*1 + 0x494]
    X86_AT(c, 0xc764u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x494u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 00c76c  jmp 0xc757
    X86_AT(c, 0xc76cu);
    X86_POLL(c, 0xc757u); goto L_c757;
L_c76e:
    X86_TICK(c, 12);
    // 00c76e  cmp byte ptr gs:[ebp + 0x41e], 1
    X86_AT(c, 0xc76eu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Eu))), 0x1u, 0, 1);
    // 00c776  jne 0xc8a2
    X86_AT(c, 0xc776u);
    if (x86_cc(c, 5)) { goto L_c8a2; }
    X86_TICK(c, 24);
    // 00c77c  sub eax, eax
    X86_AT(c, 0xc77cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00c77e  mov dword ptr gs:[ebp + 0x4b8], eax
    X86_AT(c, 0xc77eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B8u)), c.r[0]);
    // 00c785  mov dword ptr gs:[ebp + 0x4bc], eax
    X86_AT(c, 0xc785u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BCu)), c.r[0]);
    // 00c78c  mov dword ptr gs:[ebp + 0x4c0], eax
    X86_AT(c, 0xc78cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C0u)), c.r[0]);
    // 00c793  mov dword ptr gs:[ebp + 0x4c4], eax
    X86_AT(c, 0xc793u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C4u)), c.r[0]);
    // 00c79a  mov word ptr gs:[ebp + 0x478], ax
    X86_AT(c, 0xc79au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u)), (c.r[0] & 0xFFFFu));
    // 00c7a2  cmp byte ptr gs:[ebp + 0x41f], al
    X86_AT(c, 0xc7a2u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), g8(c, 0), 0, 1);
    // 00c7a9  jne 0xc7b9
    X86_AT(c, 0xc7a9u);
    if (x86_cc(c, 5)) { goto L_c7b9; }
    X86_TICK(c, 12);
    // 00c7ab  inc byte ptr gs:[ebp + 0x4b8]
    X86_AT(c, 0xc7abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x4B8u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 00c7b2  inc byte ptr gs:[ebp + 0x4b9]
    X86_AT(c, 0xc7b2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
L_c7b9:
    X86_TICK(c, 11);
    // 00c7b9  mov dx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0xc7b9u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))));
    // 00c7c1  cmp dx, ax
    X86_AT(c, 0xc7c1u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00c7c4  jge 0xc7d1
    X86_AT(c, 0xc7c4u);
    if (x86_cc(c, 13)) { goto L_c7d1; }
    X86_TICK(c, 4);
    // 00c7c6  neg dx
    X86_AT(c, 0xc7c6u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00c7c9  mov word ptr gs:[ebp + 0x414], dx
    X86_AT(c, 0xc7c9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u)), (c.r[2] & 0xFFFFu));
L_c7d1:
    X86_TICK(c, 14);
    // 00c7d1  mov ecx, dword ptr gs:[ebp + 0x418]
    X86_AT(c, 0xc7d1u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)));
    // 00c7d8  shld ebx, ecx, 0x10
    X86_AT(c, 0xc7d8u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00c7dc  cmp cx, ax
    X86_AT(c, 0xc7dcu);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00c7df  jge 0xc7ec
    X86_AT(c, 0xc7dfu);
    if (x86_cc(c, 13)) { goto L_c7ec; }
    X86_TICK(c, 4);
    // 00c7e1  neg cx
    X86_AT(c, 0xc7e1u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_neg(c, v, 2)); }
    // 00c7e4  mov word ptr gs:[ebp + 0x418], cx
    X86_AT(c, 0xc7e4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)), (c.r[1] & 0xFFFFu));
L_c7ec:
    X86_TICK(c, 7);
    // 00c7ec  cmp bx, ax
    X86_AT(c, 0xc7ecu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00c7ef  jge 0xc7fc
    X86_AT(c, 0xc7efu);
    if (x86_cc(c, 13)) { goto L_c7fc; }
    X86_TICK(c, 4);
    // 00c7f1  neg bx
    X86_AT(c, 0xc7f1u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_neg(c, v, 2)); }
    // 00c7f4  mov word ptr gs:[ebp + 0x41a], bx
    X86_AT(c, 0xc7f4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Au)), (c.r[3] & 0xFFFFu));
L_c7fc:
    X86_TICK(c, 11);
    // 00c7fc  mov ax, word ptr gs:[ebp + 0x416]
    X86_AT(c, 0xc7fcu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x416u))));
    // 00c804  test ax, ax
    X86_AT(c, 0xc804u);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & (c.r[0] & 0xFFFFu), 2);
    // 00c807  jge 0xc814
    X86_AT(c, 0xc807u);
    if (x86_cc(c, 13)) { goto L_c814; }
    X86_TICK(c, 4);
    // 00c809  neg ax
    X86_AT(c, 0xc809u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00c80c  mov word ptr gs:[ebp + 0x416], ax
    X86_AT(c, 0xc80cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x416u)), (c.r[0] & 0xFFFFu));
L_c814:
    X86_TICK(c, 25);
    // 00c814  mov word ptr gs:[ebp + 0x480], dx
    X86_AT(c, 0xc814u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x480u)), (c.r[2] & 0xFFFFu));
    // 00c81c  mov word ptr gs:[ebp + 0x482], ax
    X86_AT(c, 0xc81cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x482u)), (c.r[0] & 0xFFFFu));
    // 00c824  shl word ptr gs:[ebp + 0x480], 1
    X86_AT(c, 0xc824u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x480u)); uint32_t v = rd16(ea); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) wr16(ea, r); }
    // 00c82c  shl word ptr gs:[ebp + 0x482], 1
    X86_AT(c, 0xc82cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x482u)); uint32_t v = rd16(ea); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) wr16(ea, r); }
    // 00c834  cmp dx, ax
    X86_AT(c, 0xc834u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00c837  jbe 0xc84b
    X86_AT(c, 0xc837u);
    if (x86_cc(c, 6)) { goto L_c84b; }
    X86_TICK(c, 11);
    // 00c839  mov word ptr gs:[ebp + 0x47c], dx
    X86_AT(c, 0xc839u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Cu)), (c.r[2] & 0xFFFFu));
    // 00c841  mov byte ptr gs:[ebp + 0x4c8], 0
    X86_AT(c, 0xc841u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C8u)), 0x0u);
    // 00c849  jmp 0xc85b
    X86_AT(c, 0xc849u);
    goto L_c85b;
L_c84b:
    X86_TICK(c, 4);
    // 00c84b  mov word ptr gs:[ebp + 0x47c], ax
    X86_AT(c, 0xc84bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Cu)), (c.r[0] & 0xFFFFu));
    // 00c853  mov byte ptr gs:[ebp + 0x4c8], 1
    X86_AT(c, 0xc853u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C8u)), 0x1u);
L_c85b:
    X86_TICK(c, 25);
    // 00c85b  mov word ptr gs:[ebp + 0x484], cx
    X86_AT(c, 0xc85bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x484u)), (c.r[1] & 0xFFFFu));
    // 00c863  mov word ptr gs:[ebp + 0x486], bx
    X86_AT(c, 0xc863u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x486u)), (c.r[3] & 0xFFFFu));
    // 00c86b  shl word ptr gs:[ebp + 0x484], 1
    X86_AT(c, 0xc86bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x484u)); uint32_t v = rd16(ea); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) wr16(ea, r); }
    // 00c873  shl word ptr gs:[ebp + 0x486], 1
    X86_AT(c, 0xc873u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x486u)); uint32_t v = rd16(ea); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) wr16(ea, r); }
    // 00c87b  cmp cx, bx
    X86_AT(c, 0xc87bu);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00c87e  jbe 0xc892
    X86_AT(c, 0xc87eu);
    if (x86_cc(c, 6)) { goto L_c892; }
    X86_TICK(c, 11);
    // 00c880  mov word ptr gs:[ebp + 0x47e], cx
    X86_AT(c, 0xc880u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Eu)), (c.r[1] & 0xFFFFu));
    // 00c888  mov byte ptr gs:[ebp + 0x4c9], 0
    X86_AT(c, 0xc888u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C9u)), 0x0u);
    // 00c890  jmp 0xc8a2
    X86_AT(c, 0xc890u);
    goto L_c8a2;
L_c892:
    X86_TICK(c, 4);
    // 00c892  mov word ptr gs:[ebp + 0x47e], bx
    X86_AT(c, 0xc892u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Eu)), (c.r[3] & 0xFFFFu));
    // 00c89a  mov byte ptr gs:[ebp + 0x4c9], 1
    X86_AT(c, 0xc89au);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C9u)), 0x1u);
L_c8a2:
    X86_TICK(c, 226);
    // 00c8a2  sub eax, eax
    X86_AT(c, 0xc8a2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00c8a4  mov word ptr gs:[ebp + 0x43a], ax
    X86_AT(c, 0xc8a4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x43Au)), (c.r[0] & 0xFFFFu));
    // 00c8ac  mov dword ptr gs:[ebp + 0x444], eax
    X86_AT(c, 0xc8acu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)), c.r[0]);
    // 00c8b3  mov dword ptr gs:[ebp + 0x448], eax
    X86_AT(c, 0xc8b3u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)), c.r[0]);
    // 00c8ba  mov dword ptr gs:[ebp + 0x440], eax
    X86_AT(c, 0xc8bau);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)), c.r[0]);
    // 00c8c1  sub eax, eax
    X86_AT(c, 0xc8c1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00c8c3  mov ax, word ptr gs:[ebp + 0x40c]
    X86_AT(c, 0xc8c3u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Cu))));
    // 00c8cb  mov word ptr gs:[ebp + 0x438], ax
    X86_AT(c, 0xc8cbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x438u)), (c.r[0] & 0xFFFFu));
    // 00c8d3  mov ebx, eax
    X86_AT(c, 0xc8d3u);
    c.r[3] = c.r[0];
    // 00c8d5  mul eax
    X86_AT(c, 0xc8d5u);
    x86_mul(c, c.r[0], 4);
    // 00c8d7  mov esi, eax
    X86_AT(c, 0xc8d7u);
    c.r[6] = c.r[0];
    // 00c8d9  add eax, eax
    X86_AT(c, 0xc8d9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 00c8db  mov dword ptr gs:[ebp + 0x458], eax
    X86_AT(c, 0xc8dbu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)), c.r[0]);
    // 00c8e2  add eax, eax
    X86_AT(c, 0xc8e2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 00c8e4  mov dword ptr gs:[ebp + 0x468], eax
    X86_AT(c, 0xc8e4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x468u)), c.r[0]);
    // 00c8eb  movzx eax, word ptr gs:[ebp + 0x40e]
    X86_AT(c, 0xc8ebu);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu)));
    // 00c8f3  mul eax
    X86_AT(c, 0xc8f3u);
    x86_mul(c, c.r[0], 4);
    // 00c8f5  mov dword ptr gs:[ebp + 0x454], eax
    X86_AT(c, 0xc8f5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)), c.r[0]);
    // 00c8fc  add eax, eax
    X86_AT(c, 0xc8fcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 00c8fe  mov dword ptr gs:[ebp + 0x45c], eax
    X86_AT(c, 0xc8feu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu)), c.r[0]);
    // 00c905  push eax
    X86_AT(c, 0xc905u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00c906  add eax, eax
    X86_AT(c, 0xc906u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 00c908  mov dword ptr gs:[ebp + 0x46c], eax
    X86_AT(c, 0xc908u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x46Cu)), c.r[0]);
    // 00c90f  pop eax
    X86_AT(c, 0xc90fu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00c910  mul ebx
    X86_AT(c, 0xc910u);
    x86_mul(c, c.r[3], 4);
    // 00c912  push eax
    X86_AT(c, 0xc912u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00c913  push edx
    X86_AT(c, 0xc913u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00c914  add eax, eax
    X86_AT(c, 0xc914u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 00c916  adc edx, edx
    X86_AT(c, 0xc916u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[2], c.fl & 1, 4); }
    // 00c918  mov dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0xc918u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)), c.r[0]);
    // 00c91f  mov dword ptr gs:[ebp + 0x450], edx
    X86_AT(c, 0xc91fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)), c.r[2]);
    // 00c926  shr esi, 1
    X86_AT(c, 0xc926u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[6] = r; }
    // 00c928  add esi, dword ptr gs:[ebp + 0x45c]
    X86_AT(c, 0xc928u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu))), 0, 4); }
    // 00c92f  not edx
    X86_AT(c, 0xc92fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 00c931  not eax
    X86_AT(c, 0xc931u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 00c933  add eax, 1
    X86_AT(c, 0xc933u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x1u, 0, 4); }
    // 00c938  adc edx, 0
    X86_AT(c, 0xc938u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 00c93b  and edx, 0xffff
    X86_AT(c, 0xc93bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0xFFFFu, 4); }
    // 00c941  add eax, esi
    X86_AT(c, 0xc941u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[6], 0, 4); }
    // 00c943  adc edx, 0
    X86_AT(c, 0xc943u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 00c946  mov dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xc946u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)), c.r[0]);
    // 00c94d  mov dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xc94du);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)), c.r[2]);
    // 00c954  mov eax, dword ptr gs:[ebp + 0x454]
    X86_AT(c, 0xc954u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x454u)));
    // 00c95b  shr eax, 1
    X86_AT(c, 0xc95bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00c95d  add eax, dword ptr gs:[ebp + 0x458]
    X86_AT(c, 0xc95du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u))), 0, 4); }
    // 00c964  mov dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xc964u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)), c.r[0]);
    // 00c96b  pop edx
    X86_AT(c, 0xc96bu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00c96c  pop eax
    X86_AT(c, 0xc96cu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00c96d  not edx
    X86_AT(c, 0xc96du);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 00c96f  not eax
    X86_AT(c, 0xc96fu);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 00c971  add eax, 1
    X86_AT(c, 0xc971u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x1u, 0, 4); }
    // 00c976  adc edx, 0
    X86_AT(c, 0xc976u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 00c979  and edx, 0xffff
    X86_AT(c, 0xc979u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0xFFFFu, 4); }
    // 00c97f  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xc97fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00c986  adc dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xc986u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00c98d  mov dx, word ptr gs:[ebp + 0x438]
    X86_AT(c, 0xc98du);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x438u))));
    // 00c995  mov ax, word ptr gs:[ebp + 0x43a]
    X86_AT(c, 0xc995u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x43Au))));
    // 00c99d  mov bx, word ptr gs:[ebp + 0x488]
    X86_AT(c, 0xc99du);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x488u))));
    // 00c9a5  mov word ptr gs:[ebp + 0x47a], 0xffff
    X86_AT(c, 0xc9a5u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au)), 0xFFFFu);
    // 00c9af  mov word ptr gs:[ebp + 0x470], dx
    X86_AT(c, 0xc9afu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)), (c.r[2] & 0xFFFFu));
    // 00c9b7  mov word ptr gs:[ebp + 0x472], dx
    X86_AT(c, 0xc9b7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x472u)), (c.r[2] & 0xFFFFu));
    // 00c9bf  mov word ptr gs:[ebp + 0x474], dx
    X86_AT(c, 0xc9bfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u)), (c.r[2] & 0xFFFFu));
    // 00c9c7  mov word ptr gs:[ebp + 0x476], dx
    X86_AT(c, 0xc9c7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u)), (c.r[2] & 0xFFFFu));
L_c9cf:
    X86_TICK(c, 7);
    // 00c9cf  test dx, dx
    X86_AT(c, 0xc9cfu);
    (void)x86_logic(c, (c.r[2] & 0xFFFFu) & (c.r[2] & 0xFFFFu), 2);
    // 00c9d2  jge 0xca16
    X86_AT(c, 0xc9d2u);
    if (x86_cc(c, 13)) { goto L_ca16; }
    X86_TICK(c, 12);
    // 00c9d4  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xc9d4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00c9dc  jne 0xca13
    X86_AT(c, 0xc9dcu);
    if (x86_cc(c, 5)) { goto L_ca13; }
    X86_TICK(c, 12);
    // 00c9de  cmp word ptr gs:[ebp + 0x40e], ax
    X86_AT(c, 0xc9deu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00c9e6  jne 0xca13
    X86_AT(c, 0xc9e6u);
    if (x86_cc(c, 5)) { goto L_ca13; }
    X86_TICK(c, 12);
    // 00c9e8  cmp word ptr gs:[ebp + 0x472], 0
    X86_AT(c, 0xc9e8u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x472u))), 0x0u, 0, 2);
    // 00c9f1  jl 0xca13
    X86_AT(c, 0xc9f1u);
    if (x86_cc(c, 12)) { goto L_ca13; }
    X86_TICK(c, 17);
    // 00c9f3  mov word ptr gs:[ebp + 0x47a], ax
    X86_AT(c, 0xc9f3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au)), (c.r[0] & 0xFFFFu));
    // 00c9fb  mov esi, dword ptr gs:[ebp + 0x48c]
    X86_AT(c, 0xc9fbu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x48Cu)));
    // 00ca02  mov edi, dword ptr gs:[ebp + 0x490]
    X86_AT(c, 0xca02u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x490u)));
    // 00ca09  call 0xd134
    X86_AT(c, 0xca09u);
    push32(c, 0xca0eu); f_0000d134(c); X86_RET(c, 0xca0eu);
    X86_TICK(c, 7);
    // 00ca0e  call 0xd31c
    X86_AT(c, 0xca0eu);
    push32(c, 0xca13u); f_0000d31c(c); X86_RET(c, 0xca13u);
L_ca13:
    X86_TICK(c, 12);
    // 00ca13  xor ah, ah
    X86_AT(c, 0xca13u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 00ca15  ret 
    X86_AT(c, 0xca15u);
    c.eip = pop32(c); return;
L_ca16:
    X86_TICK(c, 20);
    // 00ca16  mov esi, dword ptr gs:[ebp + 0x48c]
    X86_AT(c, 0xca16u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x48Cu)));
    // 00ca1d  mov edi, dword ptr gs:[ebp + 0x490]
    X86_AT(c, 0xca1du);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x490u)));
    // 00ca24  cmp byte ptr gs:[ebp + 0x41e], 1
    X86_AT(c, 0xca24u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Eu))), 0x1u, 0, 1);
    // 00ca2c  jne 0xcbb0
    X86_AT(c, 0xca2cu);
    if (x86_cc(c, 5)) { goto L_cbb0; }
    X86_TICK(c, 12);
    // 00ca32  cmp word ptr gs:[ebp + 0x47a], ax
    X86_AT(c, 0xca32u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00ca3a  jge 0xcbb0
    X86_AT(c, 0xca3au);
    if (x86_cc(c, 13)) { goto L_cbb0; }
    X86_TICK(c, 15);
    // 00ca40  push eax
    X86_AT(c, 0xca40u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00ca41  mov ax, word ptr gs:[ebp + 0x4bc]
    X86_AT(c, 0xca41u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BCu))));
    // 00ca49  mov word ptr gs:[ebp + 0x4c0], ax
    X86_AT(c, 0xca49u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C0u)), (c.r[0] & 0xFFFFu));
    // 00ca51  cmp ax, dx
    X86_AT(c, 0xca51u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[2] & 0xFFFFu), 0, 2);
    // 00ca54  jbe 0xca7b
    X86_AT(c, 0xca54u);
    if (x86_cc(c, 6)) { goto L_ca7b; }
    X86_TICK(c, 12);
    // 00ca56  test byte ptr gs:[ebp + 0x4ba], 1
    X86_AT(c, 0xca56u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BAu))) & 0x1u, 1);
    // 00ca5e  jne 0xca7b
    X86_AT(c, 0xca5eu);
    if (x86_cc(c, 5)) { goto L_ca7b; }
    X86_TICK(c, 18);
    // 00ca60  mov byte ptr gs:[ebp + 0x4ba], 1
    X86_AT(c, 0xca60u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BAu)), 0x1u);
    // 00ca68  mov byte ptr gs:[ebp + 0x4b8], 1
    X86_AT(c, 0xca68u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B8u)), 0x1u);
    // 00ca70  xor byte ptr gs:[ebp + esi*1 + 0x494], 1
    X86_AT(c, 0xca70u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x494u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x1u, 1)); }
    // 00ca79  jmp 0xcaf8
    X86_AT(c, 0xca79u);
    goto L_caf8;
L_ca7b:
    X86_TICK(c, 16);
    // 00ca7b  mov cx, word ptr gs:[ebp + 0x47c]
    X86_AT(c, 0xca7bu);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Cu))));
    // 00ca83  cmp byte ptr gs:[ebp + 0x4c8], 0
    X86_AT(c, 0xca83u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C8u))), 0x0u, 0, 1);
    // 00ca8b  jne 0xcacc
    X86_AT(c, 0xca8bu);
    if (x86_cc(c, 5)) { goto L_cacc; }
L_ca8d:
    X86_TICK(c, 7);
    // 00ca8d  cmp ax, dx
    X86_AT(c, 0xca8du);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[2] & 0xFFFFu), 0, 2);
    // 00ca90  ja 0xcaba
    X86_AT(c, 0xca90u);
    if (x86_cc(c, 7)) { goto L_caba; }
    X86_TICK(c, 13);
    // 00ca92  inc ax
    X86_AT(c, 0xca92u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 00ca94  sub cx, word ptr gs:[ebp + 0x482]
    X86_AT(c, 0xca94u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x482u))), 0, 2)); }
    // 00ca9c  jae 0xca8d
    X86_AT(c, 0xca9cu);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xca8du); goto L_ca8d; }
    X86_TICK(c, 19);
    // 00ca9e  mov word ptr gs:[ebp + 0x4bc], ax
    X86_AT(c, 0xca9eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BCu)), (c.r[0] & 0xFFFFu));
    // 00caa6  dec ax
    X86_AT(c, 0xcaa6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00caa8  mov word ptr gs:[ebp + 0x4c2], ax
    X86_AT(c, 0xcaa8u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C2u)), (c.r[0] & 0xFFFFu));
    // 00cab0  add cx, word ptr gs:[ebp + 0x480]
    X86_AT(c, 0xcab0u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x480u))), 0, 2)); }
    // 00cab8  jmp 0xcaf0
    X86_AT(c, 0xcab8u);
    goto L_caf0;
L_caba:
    X86_TICK(c, 11);
    // 00caba  mov word ptr gs:[ebp + 0x4bc], ax
    X86_AT(c, 0xcabau);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BCu)), (c.r[0] & 0xFFFFu));
    // 00cac2  mov word ptr gs:[ebp + 0x4c2], dx
    X86_AT(c, 0xcac2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C2u)), (c.r[2] & 0xFFFFu));
    // 00caca  jmp 0xcaf0
    X86_AT(c, 0xcacau);
    goto L_caf0;
L_cacc:
    X86_TICK(c, 13);
    // 00cacc  mov word ptr gs:[ebp + 0x4c2], ax
    X86_AT(c, 0xcaccu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C2u)), (c.r[0] & 0xFFFFu));
    // 00cad4  sub cx, word ptr gs:[ebp + 0x480]
    X86_AT(c, 0xcad4u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x480u))), 0, 2)); }
    // 00cadc  jae 0xcae8
    X86_AT(c, 0xcadcu);
    if (x86_cc(c, 3)) { goto L_cae8; }
    X86_TICK(c, 8);
    // 00cade  inc ax
    X86_AT(c, 0xcadeu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 00cae0  add cx, word ptr gs:[ebp + 0x482]
    X86_AT(c, 0xcae0u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x482u))), 0, 2)); }
L_cae8:
    X86_TICK(c, 2);
    // 00cae8  mov word ptr gs:[ebp + 0x4bc], ax
    X86_AT(c, 0xcae8u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BCu)), (c.r[0] & 0xFFFFu));
L_caf0:
    X86_TICK(c, 2);
    // 00caf0  mov word ptr gs:[ebp + 0x47c], cx
    X86_AT(c, 0xcaf0u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Cu)), (c.r[1] & 0xFFFFu));
L_caf8:
    X86_TICK(c, 13);
    // 00caf8  mov ax, word ptr gs:[ebp + 0x4be]
    X86_AT(c, 0xcaf8u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BEu))));
    // 00cb00  mov word ptr gs:[ebp + 0x4c4], ax
    X86_AT(c, 0xcb00u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C4u)), (c.r[0] & 0xFFFFu));
    // 00cb08  cmp ax, dx
    X86_AT(c, 0xcb08u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[2] & 0xFFFFu), 0, 2);
    // 00cb0b  jbe 0xcb32
    X86_AT(c, 0xcb0bu);
    if (x86_cc(c, 6)) { goto L_cb32; }
    X86_TICK(c, 12);
    // 00cb0d  test byte ptr gs:[ebp + 0x4bb], 1
    X86_AT(c, 0xcb0du);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BBu))) & 0x1u, 1);
    // 00cb15  jne 0xcb32
    X86_AT(c, 0xcb15u);
    if (x86_cc(c, 5)) { goto L_cb32; }
    X86_TICK(c, 18);
    // 00cb17  mov byte ptr gs:[ebp + 0x4bb], 1
    X86_AT(c, 0xcb17u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BBu)), 0x1u);
    // 00cb1f  mov byte ptr gs:[ebp + 0x4b9], 1
    X86_AT(c, 0xcb1fu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u)), 0x1u);
    // 00cb27  xor byte ptr gs:[ebp + edi*1 + 0x494], 1
    X86_AT(c, 0xcb27u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x494u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x1u, 1)); }
    // 00cb30  jmp 0xcbaf
    X86_AT(c, 0xcb30u);
    goto L_cbaf;
L_cb32:
    X86_TICK(c, 16);
    // 00cb32  mov cx, word ptr gs:[ebp + 0x47e]
    X86_AT(c, 0xcb32u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Eu))));
    // 00cb3a  cmp byte ptr gs:[ebp + 0x4c9], 0
    X86_AT(c, 0xcb3au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C9u))), 0x0u, 0, 1);
    // 00cb42  jne 0xcb83
    X86_AT(c, 0xcb42u);
    if (x86_cc(c, 5)) { goto L_cb83; }
L_cb44:
    X86_TICK(c, 7);
    // 00cb44  cmp ax, dx
    X86_AT(c, 0xcb44u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[2] & 0xFFFFu), 0, 2);
    // 00cb47  ja 0xcb71
    X86_AT(c, 0xcb47u);
    if (x86_cc(c, 7)) { goto L_cb71; }
    X86_TICK(c, 13);
    // 00cb49  inc ax
    X86_AT(c, 0xcb49u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 00cb4b  sub cx, word ptr gs:[ebp + 0x486]
    X86_AT(c, 0xcb4bu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x486u))), 0, 2)); }
    // 00cb53  jae 0xcb44
    X86_AT(c, 0xcb53u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xcb44u); goto L_cb44; }
    X86_TICK(c, 19);
    // 00cb55  mov word ptr gs:[ebp + 0x4be], ax
    X86_AT(c, 0xcb55u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BEu)), (c.r[0] & 0xFFFFu));
    // 00cb5d  dec ax
    X86_AT(c, 0xcb5du);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00cb5f  mov word ptr gs:[ebp + 0x4c6], ax
    X86_AT(c, 0xcb5fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C6u)), (c.r[0] & 0xFFFFu));
    // 00cb67  add cx, word ptr gs:[ebp + 0x484]
    X86_AT(c, 0xcb67u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x484u))), 0, 2)); }
    // 00cb6f  jmp 0xcba7
    X86_AT(c, 0xcb6fu);
    goto L_cba7;
L_cb71:
    X86_TICK(c, 11);
    // 00cb71  mov word ptr gs:[ebp + 0x4be], ax
    X86_AT(c, 0xcb71u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BEu)), (c.r[0] & 0xFFFFu));
    // 00cb79  mov word ptr gs:[ebp + 0x4c6], dx
    X86_AT(c, 0xcb79u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C6u)), (c.r[2] & 0xFFFFu));
    // 00cb81  jmp 0xcba7
    X86_AT(c, 0xcb81u);
    goto L_cba7;
L_cb83:
    X86_TICK(c, 13);
    // 00cb83  mov word ptr gs:[ebp + 0x4c6], ax
    X86_AT(c, 0xcb83u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C6u)), (c.r[0] & 0xFFFFu));
    // 00cb8b  sub cx, word ptr gs:[ebp + 0x484]
    X86_AT(c, 0xcb8bu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x484u))), 0, 2)); }
    // 00cb93  jae 0xcb9f
    X86_AT(c, 0xcb93u);
    if (x86_cc(c, 3)) { goto L_cb9f; }
    X86_TICK(c, 8);
    // 00cb95  inc ax
    X86_AT(c, 0xcb95u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 00cb97  add cx, word ptr gs:[ebp + 0x486]
    X86_AT(c, 0xcb97u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x486u))), 0, 2)); }
L_cb9f:
    X86_TICK(c, 2);
    // 00cb9f  mov word ptr gs:[ebp + 0x4be], ax
    X86_AT(c, 0xcb9fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BEu)), (c.r[0] & 0xFFFFu));
L_cba7:
    X86_TICK(c, 2);
    // 00cba7  mov word ptr gs:[ebp + 0x47e], cx
    X86_AT(c, 0xcba7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Eu)), (c.r[1] & 0xFFFFu));
L_cbaf:
    X86_TICK(c, 4);
    // 00cbaf  pop eax
    X86_AT(c, 0xcbafu);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_cbb0:
    X86_TICK(c, 12);
    // 00cbb0  cmp byte ptr gs:[ebp + 0x41e], 1
    X86_AT(c, 0xcbb0u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Eu))), 0x1u, 0, 1);
    // 00cbb8  jne 0xccce
    X86_AT(c, 0xcbb8u);
    if (x86_cc(c, 5)) { goto L_ccce; }
    X86_TICK(c, 12);
    // 00cbbe  test byte ptr gs:[ebp + 0x4ba], 1
    X86_AT(c, 0xcbbeu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BAu))) & 0x1u, 1);
    // 00cbc6  jne 0xcc57
    X86_AT(c, 0xcbc6u);
    if (x86_cc(c, 5)) { goto L_cc57; }
    X86_TICK(c, 11);
    // 00cbcc  mov cx, word ptr gs:[ebp + 0x4c0]
    X86_AT(c, 0xcbccu);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C0u))));
    // 00cbd4  cmp dx, cx
    X86_AT(c, 0xcbd4u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00cbd7  jae 0xcbf4
    X86_AT(c, 0xcbd7u);
    if (x86_cc(c, 3)) { goto L_cbf4; }
    X86_TICK(c, 18);
    // 00cbd9  mov byte ptr gs:[ebp + 0x4b8], 1
    X86_AT(c, 0xcbd9u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B8u)), 0x1u);
    // 00cbe1  mov byte ptr gs:[ebp + 0x4ba], 1
    X86_AT(c, 0xcbe1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BAu)), 0x1u);
    // 00cbe9  xor byte ptr gs:[ebp + esi*1 + 0x494], 1
    X86_AT(c, 0xcbe9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x494u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x1u, 1)); }
    // 00cbf2  jmp 0xcc57
    X86_AT(c, 0xcbf2u);
    goto L_cc57;
L_cbf4:
    X86_TICK(c, 5);
    // 00cbf4  jne 0xcbfe
    X86_AT(c, 0xcbf4u);
    if (x86_cc(c, 5)) { goto L_cbfe; }
    X86_TICK(c, 2);
    // 00cbf6  mov byte ptr gs:[ebp + 0x4b8], 2
    X86_AT(c, 0xcbf6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B8u)), 0x2u);
L_cbfe:
    X86_TICK(c, 11);
    // 00cbfe  mov cx, word ptr gs:[ebp + 0x4c2]
    X86_AT(c, 0xcbfeu);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C2u))));
    // 00cc06  cmp dx, cx
    X86_AT(c, 0xcc06u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00cc09  ja 0xcc3b
    X86_AT(c, 0xcc09u);
    if (x86_cc(c, 7)) { goto L_cc3b; }
    X86_TICK(c, 25);
    // 00cc0b  or byte ptr gs:[ebp + esi*1 + 0x494], 2
    X86_AT(c, 0xcc0bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x494u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00cc14  dec dx
    X86_AT(c, 0xcc14u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 00cc16  mov word ptr gs:[ebp + 0x4c2], dx
    X86_AT(c, 0xcc16u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C2u)), (c.r[2] & 0xFFFFu));
    // 00cc1e  inc dx
    X86_AT(c, 0xcc1eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00cc20  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xcc20u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00cc28  jne 0xcc57
    X86_AT(c, 0xcc28u);
    if (x86_cc(c, 5)) { goto L_cc57; }
    X86_TICK(c, 15);
    // 00cc2a  mov word ptr gs:[ebp + 0x474], dx
    X86_AT(c, 0xcc2au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u)), (c.r[2] & 0xFFFFu));
    // 00cc32  not byte ptr gs:[ebp + 0x478]
    X86_AT(c, 0xcc32u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x478u)); uint32_t v = rd8(ea); wr8(ea, ~v & 0xFFu); }
    // 00cc39  jmp 0xcc57
    X86_AT(c, 0xcc39u);
    goto L_cc57;
L_cc3b:
    X86_TICK(c, 7);
    // 00cc3b  cmp bh, bl
    X86_AT(c, 0xcc3bu);
    (void)x86_sub(c, g8(c, 7), g8(c, 3), 0, 1);
    // 00cc3d  jne 0xcc57
    X86_AT(c, 0xcc3du);
    if (x86_cc(c, 5)) { goto L_cc57; }
    X86_TICK(c, 7);
    // 00cc3f  cmp dx, cx
    X86_AT(c, 0xcc3fu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00cc42  jbe 0xcc57
    X86_AT(c, 0xcc42u);
    if (x86_cc(c, 6)) { goto L_cc57; }
    X86_TICK(c, 12);
    // 00cc44  cmp word ptr gs:[ebp + 0x4bc], dx
    X86_AT(c, 0xcc44u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BCu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00cc4c  jne 0xcc57
    X86_AT(c, 0xcc4cu);
    if (x86_cc(c, 5)) { goto L_cc57; }
    X86_TICK(c, 7);
    // 00cc4e  or byte ptr gs:[ebp + esi*1 + 0x494], 2
    X86_AT(c, 0xcc4eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x494u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
L_cc57:
    X86_TICK(c, 12);
    // 00cc57  test byte ptr gs:[ebp + 0x4bb], 1
    X86_AT(c, 0xcc57u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BBu))) & 0x1u, 1);
    // 00cc5f  jne 0xccce
    X86_AT(c, 0xcc5fu);
    if (x86_cc(c, 5)) { goto L_ccce; }
    X86_TICK(c, 11);
    // 00cc61  mov cx, word ptr gs:[ebp + 0x4c4]
    X86_AT(c, 0xcc61u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C4u))));
    // 00cc69  cmp dx, cx
    X86_AT(c, 0xcc69u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00cc6c  jae 0xcc89
    X86_AT(c, 0xcc6cu);
    if (x86_cc(c, 3)) { goto L_cc89; }
    X86_TICK(c, 18);
    // 00cc6e  mov byte ptr gs:[ebp + 0x4b9], 1
    X86_AT(c, 0xcc6eu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u)), 0x1u);
    // 00cc76  mov byte ptr gs:[ebp + 0x4bb], 1
    X86_AT(c, 0xcc76u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BBu)), 0x1u);
    // 00cc7e  xor byte ptr gs:[ebp + edi*1 + 0x494], 1
    X86_AT(c, 0xcc7eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x494u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x1u, 1)); }
    // 00cc87  jmp 0xccce
    X86_AT(c, 0xcc87u);
    goto L_ccce;
L_cc89:
    X86_TICK(c, 5);
    // 00cc89  jne 0xcc93
    X86_AT(c, 0xcc89u);
    if (x86_cc(c, 5)) { goto L_cc93; }
    X86_TICK(c, 2);
    // 00cc8b  mov byte ptr gs:[ebp + 0x4b9], 2
    X86_AT(c, 0xcc8bu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u)), 0x2u);
L_cc93:
    X86_TICK(c, 11);
    // 00cc93  mov cx, word ptr gs:[ebp + 0x4c6]
    X86_AT(c, 0xcc93u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C6u))));
    // 00cc9b  cmp dx, cx
    X86_AT(c, 0xcc9bu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00cc9e  ja 0xccce
    X86_AT(c, 0xcc9eu);
    if (x86_cc(c, 7)) { goto L_ccce; }
    X86_TICK(c, 25);
    // 00cca0  or byte ptr gs:[ebp + edi*1 + 0x494], 2
    X86_AT(c, 0xcca0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x494u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00cca9  dec dx
    X86_AT(c, 0xcca9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 00ccab  mov word ptr gs:[ebp + 0x4c6], dx
    X86_AT(c, 0xccabu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C6u)), (c.r[2] & 0xFFFFu));
    // 00ccb3  inc dx
    X86_AT(c, 0xccb3u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00ccb5  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xccb5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00ccbd  jne 0xccce
    X86_AT(c, 0xccbdu);
    if (x86_cc(c, 5)) { goto L_ccce; }
    X86_TICK(c, 8);
    // 00ccbf  mov word ptr gs:[ebp + 0x476], dx
    X86_AT(c, 0xccbfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u)), (c.r[2] & 0xFFFFu));
    // 00ccc7  not byte ptr gs:[ebp + 0x479]
    X86_AT(c, 0xccc7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x479u)); uint32_t v = rd8(ea); wr8(ea, ~v & 0xFFu); }
L_ccce:
    X86_TICK(c, 12);
    // 00ccce  cmp byte ptr gs:[ebp + 0x41c], 1
    X86_AT(c, 0xccceu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x1u, 0, 1);
    // 00ccd6  jne 0xcd90
    X86_AT(c, 0xccd6u);
    if (x86_cc(c, 5)) { goto L_cd90; }
    X86_TICK(c, 9);
    // 00ccdc  push ebx
    X86_AT(c, 0xccdcu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00ccdd  or dx, dx
    X86_AT(c, 0xccddu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 00cce0  je 0xcd36
    X86_AT(c, 0xcce0u);
    if (x86_cc(c, 4)) { goto L_cd36; }
    X86_TICK(c, 12);
    // 00cce2  cmp byte ptr gs:[ebp + 0x494], 0
    X86_AT(c, 0xcce2u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x494u))), 0x0u, 0, 1);
    // 00ccea  je 0xcd09
    X86_AT(c, 0xcceau);
    if (x86_cc(c, 4)) { goto L_cd09; }
    X86_TICK(c, 15);
    // 00ccec  push edx
    X86_AT(c, 0xccecu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00cced  push eax
    X86_AT(c, 0xccedu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00ccee  add dx, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xcceeu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))), 0, 2)); }
    // 00ccf6  jo 0xcd07
    X86_AT(c, 0xccf6u);
    if (x86_cc(c, 0)) { goto L_cd07; }
    X86_TICK(c, 11);
    // 00ccf8  add ax, word ptr gs:[ebp + 0x40a]
    X86_AT(c, 0xccf8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Au))), 0, 2)); }
    // 00cd00  jo 0xcd07
    X86_AT(c, 0xcd00u);
    if (x86_cc(c, 0)) { goto L_cd07; }
    X86_TICK(c, 7);
    // 00cd02  call 0x5db0
    X86_AT(c, 0xcd02u);
    push32(c, 0xcd07u); f_00005db0(c); X86_RET(c, 0xcd07u);
L_cd07:
    X86_TICK(c, 8);
    // 00cd07  pop eax
    X86_AT(c, 0xcd07u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00cd08  pop edx
    X86_AT(c, 0xcd08u);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_cd09:
    X86_TICK(c, 12);
    // 00cd09  cmp byte ptr gs:[ebp + 0x496], 0
    X86_AT(c, 0xcd09u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x496u))), 0x0u, 0, 1);
    // 00cd11  je 0xcd36
    X86_AT(c, 0xcd11u);
    if (x86_cc(c, 4)) { goto L_cd36; }
    X86_TICK(c, 19);
    // 00cd13  push edx
    X86_AT(c, 0xcd13u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00cd14  push eax
    X86_AT(c, 0xcd14u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00cd15  neg dx
    X86_AT(c, 0xcd15u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00cd18  neg ax
    X86_AT(c, 0xcd18u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00cd1b  add dx, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xcd1bu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))), 0, 2)); }
    // 00cd23  jo 0xcd34
    X86_AT(c, 0xcd23u);
    if (x86_cc(c, 0)) { goto L_cd34; }
    X86_TICK(c, 11);
    // 00cd25  add ax, word ptr gs:[ebp + 0x40a]
    X86_AT(c, 0xcd25u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Au))), 0, 2)); }
    // 00cd2d  jo 0xcd34
    X86_AT(c, 0xcd2du);
    if (x86_cc(c, 0)) { goto L_cd34; }
    X86_TICK(c, 7);
    // 00cd2f  call 0x5e58
    X86_AT(c, 0xcd2fu);
    push32(c, 0xcd34u); f_00005e58(c); X86_RET(c, 0xcd34u);
L_cd34:
    X86_TICK(c, 8);
    // 00cd34  pop eax
    X86_AT(c, 0xcd34u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00cd35  pop edx
    X86_AT(c, 0xcd35u);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_cd36:
    X86_TICK(c, 7);
    // 00cd36  or ax, ax
    X86_AT(c, 0xcd36u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | (c.r[0] & 0xFFFFu), 2)); }
    // 00cd39  je 0xcd8f
    X86_AT(c, 0xcd39u);
    if (x86_cc(c, 4)) { goto L_cd8f; }
    X86_TICK(c, 12);
    // 00cd3b  cmp byte ptr gs:[ebp + 0x495], 0
    X86_AT(c, 0xcd3bu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x495u))), 0x0u, 0, 1);
    // 00cd43  je 0xcd65
    X86_AT(c, 0xcd43u);
    if (x86_cc(c, 4)) { goto L_cd65; }
    X86_TICK(c, 17);
    // 00cd45  push edx
    X86_AT(c, 0xcd45u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00cd46  push eax
    X86_AT(c, 0xcd46u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00cd47  neg dx
    X86_AT(c, 0xcd47u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00cd4a  add dx, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xcd4au);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))), 0, 2)); }
    // 00cd52  jo 0xcd63
    X86_AT(c, 0xcd52u);
    if (x86_cc(c, 0)) { goto L_cd63; }
    X86_TICK(c, 11);
    // 00cd54  add ax, word ptr gs:[ebp + 0x40a]
    X86_AT(c, 0xcd54u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Au))), 0, 2)); }
    // 00cd5c  jo 0xcd63
    X86_AT(c, 0xcd5cu);
    if (x86_cc(c, 0)) { goto L_cd63; }
    X86_TICK(c, 7);
    // 00cd5e  call 0x5e04
    X86_AT(c, 0xcd5eu);
    push32(c, 0xcd63u); f_00005e04(c); X86_RET(c, 0xcd63u);
L_cd63:
    X86_TICK(c, 8);
    // 00cd63  pop eax
    X86_AT(c, 0xcd63u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00cd64  pop edx
    X86_AT(c, 0xcd64u);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_cd65:
    X86_TICK(c, 12);
    // 00cd65  cmp byte ptr gs:[ebp + 0x497], 0
    X86_AT(c, 0xcd65u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x497u))), 0x0u, 0, 1);
    // 00cd6d  je 0xcd8f
    X86_AT(c, 0xcd6du);
    if (x86_cc(c, 4)) { goto L_cd8f; }
    X86_TICK(c, 17);
    // 00cd6f  push edx
    X86_AT(c, 0xcd6fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00cd70  push eax
    X86_AT(c, 0xcd70u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00cd71  neg ax
    X86_AT(c, 0xcd71u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00cd74  add dx, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xcd74u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))), 0, 2)); }
    // 00cd7c  jo 0xcd8d
    X86_AT(c, 0xcd7cu);
    if (x86_cc(c, 0)) { goto L_cd8d; }
    X86_TICK(c, 11);
    // 00cd7e  add ax, word ptr gs:[ebp + 0x40a]
    X86_AT(c, 0xcd7eu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Au))), 0, 2)); }
    // 00cd86  jo 0xcd8d
    X86_AT(c, 0xcd86u);
    if (x86_cc(c, 0)) { goto L_cd8d; }
    X86_TICK(c, 7);
    // 00cd88  call 0x5eac
    X86_AT(c, 0xcd88u);
    push32(c, 0xcd8du); f_00005eac(c); X86_RET(c, 0xcd8du);
L_cd8d:
    X86_TICK(c, 8);
    // 00cd8d  pop eax
    X86_AT(c, 0xcd8du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00cd8e  pop edx
    X86_AT(c, 0xcd8eu);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_cd8f:
    X86_TICK(c, 4);
    // 00cd8f  pop ebx
    X86_AT(c, 0xcd8fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
L_cd90:
    X86_TICK(c, 27);
    // 00cd90  push eax
    X86_AT(c, 0xcd90u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00cd91  mov eax, dword ptr gs:[ebp + 0x494]
    X86_AT(c, 0xcd91u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x494u)));
    // 00cd98  mov dword ptr gs:[ebp + 0x498], eax
    X86_AT(c, 0xcd98u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x498u)), c.r[0]);
    // 00cd9f  and eax, 0x1010101
    X86_AT(c, 0xcd9fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1010101u, 4); }
    // 00cda4  mov dword ptr gs:[ebp + 0x494], eax
    X86_AT(c, 0xcda4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x494u)), c.r[0]);
    // 00cdab  pop eax
    X86_AT(c, 0xcdabu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00cdac  mov word ptr gs:[ebp + 0x470], dx
    X86_AT(c, 0xcdacu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)), (c.r[2] & 0xFFFFu));
    // 00cdb4  mov word ptr gs:[ebp + 0x47a], ax
    X86_AT(c, 0xcdb4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au)), (c.r[0] & 0xFFFFu));
    // 00cdbc  call 0xd794
    X86_AT(c, 0xcdbcu);
    push32(c, 0xcdc1u); f_0000d794(c); X86_RET(c, 0xcdc1u);
    X86_TICK(c, 12);
    // 00cdc1  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xcdc1u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00cdc9  jne 0xd001
    X86_AT(c, 0xcdc9u);
    if (x86_cc(c, 5)) { goto L_d001; }
    X86_TICK(c, 12);
    // 00cdcf  cmp word ptr gs:[ebp + 0x47a], ax
    X86_AT(c, 0xcdcfu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00cdd7  jae 0xd001
    X86_AT(c, 0xcdd7u);
    if (x86_cc(c, 3)) { goto L_d001; }
    X86_TICK(c, 27);
    // 00cddd  push edx
    X86_AT(c, 0xcdddu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00cdde  push eax
    X86_AT(c, 0xcddeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00cddf  mov esi, dword ptr gs:[ebp + 0x4c0]
    X86_AT(c, 0xcddfu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C0u)));
    // 00cde6  shld edi, esi, 0x10
    X86_AT(c, 0xcde6u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_double(c, true, v, c.r[6], 0x10u, 4, w); if (w) c.r[7] = r; }
    // 00cdea  push esi
    X86_AT(c, 0xcdeau);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00cdeb  push edi
    X86_AT(c, 0xcdebu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00cdec  cmp byte ptr gs:[ebp + 0x41c], 1
    X86_AT(c, 0xcdecu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x1u, 0, 1);
    // 00cdf4  jne 0xce13
    X86_AT(c, 0xcdf4u);
    if (x86_cc(c, 5)) { goto L_ce13; }
    X86_TICK(c, 15);
    // 00cdf6  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xcdf6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00cdfe  mov cx, word ptr gs:[ebp + 0x40a]
    X86_AT(c, 0xcdfeu);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Au))));
    // 00ce06  test bh, 2
    X86_AT(c, 0xce06u);
    (void)x86_logic(c, g8(c, 7) & 0x2u, 1);
    // 00ce09  je 0xce10
    X86_AT(c, 0xce09u);
    if (x86_cc(c, 4)) { goto L_ce10; }
    X86_TICK(c, 9);
    // 00ce0b  sub cx, ax
    X86_AT(c, 0xce0bu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00ce0e  jmp 0xce13
    X86_AT(c, 0xce0eu);
    goto L_ce13;
L_ce10:
    X86_TICK(c, 2);
    // 00ce10  add cx, ax
    X86_AT(c, 0xce10u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_ce13:
    X86_TICK(c, 5);
    // 00ce13  jo 0xce88
    X86_AT(c, 0xce13u);
    if (x86_cc(c, 0)) { goto L_ce88; }
    X86_TICK(c, 18);
    // 00ce15  mov ax, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xce15u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))));
    // 00ce1d  mov dx, ax
    X86_AT(c, 0xce1du);
    s16(c, 2, (c.r[0] & 0xFFFFu));
    // 00ce20  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xce20u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00ce28  jne 0xce3c
    X86_AT(c, 0xce28u);
    if (x86_cc(c, 5)) { goto L_ce3c; }
    X86_TICK(c, 12);
    // 00ce2a  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xce2au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00ce32  je 0xce3c
    X86_AT(c, 0xce32u);
    if (x86_cc(c, 4)) { goto L_ce3c; }
    X86_TICK(c, 4);
    // 00ce34  mov di, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xce34u);
    s16(c, 7, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
L_ce3c:
    X86_TICK(c, 7);
    // 00ce3c  cmp bh, 1
    X86_AT(c, 0xce3cu);
    (void)x86_sub(c, g8(c, 7), 0x1u, 0, 1);
    // 00ce3f  je 0xce46
    X86_AT(c, 0xce3fu);
    if (x86_cc(c, 4)) { goto L_ce46; }
    X86_TICK(c, 7);
    // 00ce41  cmp bh, 2
    X86_AT(c, 0xce41u);
    (void)x86_sub(c, g8(c, 7), 0x2u, 0, 1);
    // 00ce44  jne 0xce4c
    X86_AT(c, 0xce44u);
    if (x86_cc(c, 5)) { goto L_ce4c; }
L_ce46:
    X86_TICK(c, 4);
    // 00ce46  neg si
    X86_AT(c, 0xce46u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_neg(c, v, 2)); }
    // 00ce49  neg di
    X86_AT(c, 0xce49u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_neg(c, v, 2)); }
L_ce4c:
    X86_TICK(c, 7);
    // 00ce4c  cmp si, di
    X86_AT(c, 0xce4cu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), (c.r[7] & 0xFFFFu), 0, 2);
    // 00ce4f  jle 0xce54
    X86_AT(c, 0xce4fu);
    if (x86_cc(c, 14)) { goto L_ce54; }
    X86_TICK(c, 3);
    // 00ce51  xchg di, si
    X86_AT(c, 0xce51u);
    { uint32_t t = (c.r[7] & 0xFFFFu); s16(c, 7, (c.r[6] & 0xFFFFu)); s16(c, 6, t); }
L_ce54:
    X86_TICK(c, 11);
    // 00ce54  mov word ptr gs:[ebp + 0x4b0], si
    X86_AT(c, 0xce54u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B0u)), (c.r[6] & 0xFFFFu));
    // 00ce5c  mov word ptr gs:[ebp + 0x4b2], di
    X86_AT(c, 0xce5cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B2u)), (c.r[7] & 0xFFFFu));
    // 00ce64  add ax, si
    X86_AT(c, 0xce64u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 00ce67  jno 0xce75
    X86_AT(c, 0xce67u);
    if (x86_cc(c, 1)) { goto L_ce75; }
    X86_TICK(c, 9);
    // 00ce69  mov ax, 0x7fff
    X86_AT(c, 0xce69u);
    s16(c, 0, 0x7FFFu);
    // 00ce6d  test si, si
    X86_AT(c, 0xce6du);
    (void)x86_logic(c, (c.r[6] & 0xFFFFu) & (c.r[6] & 0xFFFFu), 2);
    // 00ce70  jge 0xce75
    X86_AT(c, 0xce70u);
    if (x86_cc(c, 13)) { goto L_ce75; }
    X86_TICK(c, 2);
    // 00ce72  neg ax
    X86_AT(c, 0xce72u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_ce75:
    X86_TICK(c, 7);
    // 00ce75  add dx, di
    X86_AT(c, 0xce75u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, (c.r[7] & 0xFFFFu), 0, 2)); }
    // 00ce78  jno 0xce90
    X86_AT(c, 0xce78u);
    if (x86_cc(c, 1)) { goto L_ce90; }
    X86_TICK(c, 9);
    // 00ce7a  mov dx, 0x7fff
    X86_AT(c, 0xce7au);
    s16(c, 2, 0x7FFFu);
    // 00ce7e  test di, di
    X86_AT(c, 0xce7eu);
    (void)x86_logic(c, (c.r[7] & 0xFFFFu) & (c.r[7] & 0xFFFFu), 2);
    // 00ce81  jge 0xce90
    X86_AT(c, 0xce81u);
    if (x86_cc(c, 13)) { goto L_ce90; }
    X86_TICK(c, 9);
    // 00ce83  neg dx
    X86_AT(c, 0xce83u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00ce86  jmp 0xce90
    X86_AT(c, 0xce86u);
    goto L_ce90;
L_ce88:
    X86_TICK(c, 2);
    // 00ce88  mov byte ptr gs:[ebp + 0x4b8], 1
    X86_AT(c, 0xce88u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B8u)), 0x1u);
L_ce90:
    X86_TICK(c, 12);
    // 00ce90  cmp byte ptr gs:[ebp + 0x41c], 1
    X86_AT(c, 0xce90u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x1u, 0, 1);
    // 00ce98  jne 0xcee5
    X86_AT(c, 0xce98u);
    if (x86_cc(c, 5)) { goto L_cee5; }
    X86_TICK(c, 12);
    // 00ce9a  cmp byte ptr gs:[ebp + 0x4b8], 0
    X86_AT(c, 0xce9au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B8u))), 0x0u, 0, 1);
    // 00cea2  jne 0xcee5
    X86_AT(c, 0xcea2u);
    if (x86_cc(c, 5)) { goto L_cee5; }
    X86_TICK(c, 22);
    // 00cea4  push ebx
    X86_AT(c, 0xcea4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00cea5  mov bx, dx
    X86_AT(c, 0xcea5u);
    s16(c, 3, (c.r[2] & 0xFFFFu));
    // 00cea8  sub bx, ax
    X86_AT(c, 0xcea8u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00ceab  mov word ptr gs:[ebp + 0x434], bx
    X86_AT(c, 0xceabu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x434u)), (c.r[3] & 0xFFFFu));
    // 00ceb3  mov bx, 1
    X86_AT(c, 0xceb3u);
    s16(c, 3, 0x1u);
    // 00ceb7  cmp byte ptr gs:[ebp + 0x428], 1
    X86_AT(c, 0xceb7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x428u))), 0x1u, 0, 1);
    // 00cebf  jne 0xcec6
    X86_AT(c, 0xcebfu);
    if (x86_cc(c, 5)) { goto L_cec6; }
    X86_TICK(c, 5);
    // 00cec1  xchg dx, ax
    X86_AT(c, 0xcec1u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00cec3  neg bx
    X86_AT(c, 0xcec3u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_neg(c, v, 2)); }
L_cec6:
    X86_TICK(c, 4);
    // 00cec6  mov dx, ax
    X86_AT(c, 0xcec6u);
    s16(c, 2, (c.r[0] & 0xFFFFu));
    // 00cec9  mov ax, cx
    X86_AT(c, 0xcec9u);
    s16(c, 0, (c.r[1] & 0xFFFFu));
L_cecc:
    X86_TICK(c, 13);
    // 00cecc  push eax
    X86_AT(c, 0xceccu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00cecd  push ebx
    X86_AT(c, 0xcecdu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00cece  push edx
    X86_AT(c, 0xceceu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00cecf  call 0x5f00
    X86_AT(c, 0xcecfu);
    push32(c, 0xced4u); f_00005f00(c); X86_RET(c, 0xced4u);
    X86_TICK(c, 25);
    // 00ced4  pop edx
    X86_AT(c, 0xced4u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00ced5  pop ebx
    X86_AT(c, 0xced5u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00ced6  pop eax
    X86_AT(c, 0xced6u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00ced7  add dx, bx
    X86_AT(c, 0xced7u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00ceda  dec word ptr gs:[ebp + 0x434]
    X86_AT(c, 0xcedau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x434u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 00cee2  jns 0xcecc
    X86_AT(c, 0xcee2u);
    if (x86_cc(c, 9)) { X86_POLL(c, 0xceccu); goto L_cecc; }
    X86_TICK(c, 4);
    // 00cee4  pop ebx
    X86_AT(c, 0xcee4u);
    { uint32_t v = pop32(c); c.r[3] = v; }
L_cee5:
    X86_TICK(c, 20);
    // 00cee5  pop edi
    X86_AT(c, 0xcee5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00cee6  pop esi
    X86_AT(c, 0xcee6u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00cee7  cmp byte ptr gs:[ebp + 0x4bb], 0
    X86_AT(c, 0xcee7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4BBu))), 0x0u, 0, 1);
    // 00ceef  jne 0xcfff
    X86_AT(c, 0xceefu);
    if (x86_cc(c, 5)) { goto L_cfff; }
    X86_TICK(c, 23);
    // 00cef5  mov eax, dword ptr gs:[ebp + 0x4c4]
    X86_AT(c, 0xcef5u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4C4u)));
    // 00cefc  shld edx, eax, 0x10
    X86_AT(c, 0xcefcu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 00cf00  mov si, ax
    X86_AT(c, 0xcf00u);
    s16(c, 6, (c.r[0] & 0xFFFFu));
    // 00cf03  mov di, dx
    X86_AT(c, 0xcf03u);
    s16(c, 7, (c.r[2] & 0xFFFFu));
    // 00cf06  cmp byte ptr gs:[ebp + 0x41c], 1
    X86_AT(c, 0xcf06u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x1u, 0, 1);
    // 00cf0e  jne 0xcf2d
    X86_AT(c, 0xcf0eu);
    if (x86_cc(c, 5)) { goto L_cf2d; }
    X86_TICK(c, 15);
    // 00cf10  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xcf10u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00cf18  mov cx, word ptr gs:[ebp + 0x40a]
    X86_AT(c, 0xcf18u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Au))));
    // 00cf20  test bl, 2
    X86_AT(c, 0xcf20u);
    (void)x86_logic(c, g8(c, 3) & 0x2u, 1);
    // 00cf23  je 0xcf2a
    X86_AT(c, 0xcf23u);
    if (x86_cc(c, 4)) { goto L_cf2a; }
    X86_TICK(c, 9);
    // 00cf25  sub cx, ax
    X86_AT(c, 0xcf25u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00cf28  jmp 0xcf2d
    X86_AT(c, 0xcf28u);
    goto L_cf2d;
L_cf2a:
    X86_TICK(c, 2);
    // 00cf2a  add cx, ax
    X86_AT(c, 0xcf2au);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_cf2d:
    X86_TICK(c, 5);
    // 00cf2d  jo 0xcfa2
    X86_AT(c, 0xcf2du);
    if (x86_cc(c, 0)) { goto L_cfa2; }
    X86_TICK(c, 18);
    // 00cf2f  mov ax, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xcf2fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))));
    // 00cf37  mov dx, ax
    X86_AT(c, 0xcf37u);
    s16(c, 2, (c.r[0] & 0xFFFFu));
    // 00cf3a  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xcf3au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00cf42  jne 0xcf56
    X86_AT(c, 0xcf42u);
    if (x86_cc(c, 5)) { goto L_cf56; }
    X86_TICK(c, 12);
    // 00cf44  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xcf44u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00cf4c  je 0xcf56
    X86_AT(c, 0xcf4cu);
    if (x86_cc(c, 4)) { goto L_cf56; }
    X86_TICK(c, 4);
    // 00cf4e  mov di, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xcf4eu);
    s16(c, 7, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
L_cf56:
    X86_TICK(c, 7);
    // 00cf56  cmp bl, 1
    X86_AT(c, 0xcf56u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 00cf59  je 0xcf60
    X86_AT(c, 0xcf59u);
    if (x86_cc(c, 4)) { goto L_cf60; }
    X86_TICK(c, 7);
    // 00cf5b  cmp bl, 2
    X86_AT(c, 0xcf5bu);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 00cf5e  jne 0xcf66
    X86_AT(c, 0xcf5eu);
    if (x86_cc(c, 5)) { goto L_cf66; }
L_cf60:
    X86_TICK(c, 4);
    // 00cf60  neg si
    X86_AT(c, 0xcf60u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_neg(c, v, 2)); }
    // 00cf63  neg di
    X86_AT(c, 0xcf63u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_neg(c, v, 2)); }
L_cf66:
    X86_TICK(c, 7);
    // 00cf66  cmp si, di
    X86_AT(c, 0xcf66u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), (c.r[7] & 0xFFFFu), 0, 2);
    // 00cf69  jle 0xcf6e
    X86_AT(c, 0xcf69u);
    if (x86_cc(c, 14)) { goto L_cf6e; }
    X86_TICK(c, 3);
    // 00cf6b  xchg di, si
    X86_AT(c, 0xcf6bu);
    { uint32_t t = (c.r[7] & 0xFFFFu); s16(c, 7, (c.r[6] & 0xFFFFu)); s16(c, 6, t); }
L_cf6e:
    X86_TICK(c, 11);
    // 00cf6e  mov word ptr gs:[ebp + 0x4b4], si
    X86_AT(c, 0xcf6eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B4u)), (c.r[6] & 0xFFFFu));
    // 00cf76  mov word ptr gs:[ebp + 0x4b6], di
    X86_AT(c, 0xcf76u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B6u)), (c.r[7] & 0xFFFFu));
    // 00cf7e  add ax, si
    X86_AT(c, 0xcf7eu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 00cf81  jno 0xcf8f
    X86_AT(c, 0xcf81u);
    if (x86_cc(c, 1)) { goto L_cf8f; }
    X86_TICK(c, 9);
    // 00cf83  mov ax, 0x7fff
    X86_AT(c, 0xcf83u);
    s16(c, 0, 0x7FFFu);
    // 00cf87  test si, si
    X86_AT(c, 0xcf87u);
    (void)x86_logic(c, (c.r[6] & 0xFFFFu) & (c.r[6] & 0xFFFFu), 2);
    // 00cf8a  jge 0xcf8f
    X86_AT(c, 0xcf8au);
    if (x86_cc(c, 13)) { goto L_cf8f; }
    X86_TICK(c, 2);
    // 00cf8c  neg ax
    X86_AT(c, 0xcf8cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_cf8f:
    X86_TICK(c, 7);
    // 00cf8f  add dx, di
    X86_AT(c, 0xcf8fu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, (c.r[7] & 0xFFFFu), 0, 2)); }
    // 00cf92  jno 0xcfaa
    X86_AT(c, 0xcf92u);
    if (x86_cc(c, 1)) { goto L_cfaa; }
    X86_TICK(c, 9);
    // 00cf94  mov dx, 0x7fff
    X86_AT(c, 0xcf94u);
    s16(c, 2, 0x7FFFu);
    // 00cf98  test di, di
    X86_AT(c, 0xcf98u);
    (void)x86_logic(c, (c.r[7] & 0xFFFFu) & (c.r[7] & 0xFFFFu), 2);
    // 00cf9b  jge 0xcfaa
    X86_AT(c, 0xcf9bu);
    if (x86_cc(c, 13)) { goto L_cfaa; }
    X86_TICK(c, 9);
    // 00cf9d  neg dx
    X86_AT(c, 0xcf9du);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00cfa0  jmp 0xcfaa
    X86_AT(c, 0xcfa0u);
    goto L_cfaa;
L_cfa2:
    X86_TICK(c, 2);
    // 00cfa2  mov byte ptr gs:[ebp + 0x4b9], 1
    X86_AT(c, 0xcfa2u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u)), 0x1u);
L_cfaa:
    X86_TICK(c, 12);
    // 00cfaa  cmp byte ptr gs:[ebp + 0x41c], 1
    X86_AT(c, 0xcfaau);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x1u, 0, 1);
    // 00cfb2  jne 0xcfff
    X86_AT(c, 0xcfb2u);
    if (x86_cc(c, 5)) { goto L_cfff; }
    X86_TICK(c, 12);
    // 00cfb4  cmp byte ptr gs:[ebp + 0x4b9], 0
    X86_AT(c, 0xcfb4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u))), 0x0u, 0, 1);
    // 00cfbc  jne 0xcfff
    X86_AT(c, 0xcfbcu);
    if (x86_cc(c, 5)) { goto L_cfff; }
    X86_TICK(c, 22);
    // 00cfbe  push ebx
    X86_AT(c, 0xcfbeu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00cfbf  mov bx, dx
    X86_AT(c, 0xcfbfu);
    s16(c, 3, (c.r[2] & 0xFFFFu));
    // 00cfc2  sub bx, ax
    X86_AT(c, 0xcfc2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00cfc5  mov word ptr gs:[ebp + 0x434], bx
    X86_AT(c, 0xcfc5u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x434u)), (c.r[3] & 0xFFFFu));
    // 00cfcd  mov bx, 1
    X86_AT(c, 0xcfcdu);
    s16(c, 3, 0x1u);
    // 00cfd1  cmp byte ptr gs:[ebp + 0x429], 1
    X86_AT(c, 0xcfd1u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x429u))), 0x1u, 0, 1);
    // 00cfd9  jne 0xcfe0
    X86_AT(c, 0xcfd9u);
    if (x86_cc(c, 5)) { goto L_cfe0; }
    X86_TICK(c, 5);
    // 00cfdb  xchg dx, ax
    X86_AT(c, 0xcfdbu);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00cfdd  neg bx
    X86_AT(c, 0xcfddu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_neg(c, v, 2)); }
L_cfe0:
    X86_TICK(c, 4);
    // 00cfe0  mov dx, ax
    X86_AT(c, 0xcfe0u);
    s16(c, 2, (c.r[0] & 0xFFFFu));
    // 00cfe3  mov ax, cx
    X86_AT(c, 0xcfe3u);
    s16(c, 0, (c.r[1] & 0xFFFFu));
L_cfe6:
    X86_TICK(c, 13);
    // 00cfe6  push eax
    X86_AT(c, 0xcfe6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00cfe7  push ebx
    X86_AT(c, 0xcfe7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00cfe8  push edx
    X86_AT(c, 0xcfe8u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00cfe9  call 0x5f54
    X86_AT(c, 0xcfe9u);
    push32(c, 0xcfeeu); f_00005f54(c); X86_RET(c, 0xcfeeu);
    X86_TICK(c, 25);
    // 00cfee  pop edx
    X86_AT(c, 0xcfeeu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00cfef  pop ebx
    X86_AT(c, 0xcfefu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00cff0  pop eax
    X86_AT(c, 0xcff0u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00cff1  add dx, bx
    X86_AT(c, 0xcff1u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00cff4  dec word ptr gs:[ebp + 0x434]
    X86_AT(c, 0xcff4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x434u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 00cffc  jns 0xcfe6
    X86_AT(c, 0xcffcu);
    if (x86_cc(c, 9)) { X86_POLL(c, 0xcfe6u); goto L_cfe6; }
    X86_TICK(c, 4);
    // 00cffe  pop ebx
    X86_AT(c, 0xcffeu);
    { uint32_t v = pop32(c); c.r[3] = v; }
L_cfff:
    X86_TICK(c, 8);
    // 00cfff  pop eax
    X86_AT(c, 0xcfffu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00d000  pop edx
    X86_AT(c, 0xd000u);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_d001:
    X86_TICK(c, 12);
    // 00d001  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd001u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d009  jne 0xd03b
    X86_AT(c, 0xd009u);
    if (x86_cc(c, 5)) { goto L_d03b; }
    X86_TICK(c, 26);
    // 00d00b  push eax
    X86_AT(c, 0xd00bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00d00c  mov al, byte ptr gs:[ebp + 0x4b8]
    X86_AT(c, 0xd00cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B8u))));
    // 00d013  mov byte ptr gs:[ebp + 0x4ca], al
    X86_AT(c, 0xd013u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CAu)), g8(c, 0));
    // 00d01a  and al, 1
    X86_AT(c, 0xd01au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x1u, 1)); }
    // 00d01c  mov byte ptr gs:[ebp + 0x4b8], al
    X86_AT(c, 0xd01cu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B8u)), g8(c, 0));
    // 00d023  mov al, byte ptr gs:[ebp + 0x4b9]
    X86_AT(c, 0xd023u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u))));
    // 00d02a  mov byte ptr gs:[ebp + 0x4cb], al
    X86_AT(c, 0xd02au);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CBu)), g8(c, 0));
    // 00d031  and al, 1
    X86_AT(c, 0xd031u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x1u, 1)); }
    // 00d033  mov byte ptr gs:[ebp + 0x4b9], al
    X86_AT(c, 0xd033u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u)), g8(c, 0));
    // 00d03a  pop eax
    X86_AT(c, 0xd03au);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_d03b:
    X86_TICK(c, 12);
    // 00d03b  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd03bu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d043  jne 0xd0a1
    X86_AT(c, 0xd043u);
    if (x86_cc(c, 5)) { goto L_d0a1; }
    X86_TICK(c, 12);
    // 00d045  cmp word ptr gs:[ebp + 0x47a], ax
    X86_AT(c, 0xd045u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d04d  jae 0xd0a1
    X86_AT(c, 0xd04du);
    if (x86_cc(c, 3)) { goto L_d0a1; }
    X86_TICK(c, 26);
    // 00d04f  push ebx
    X86_AT(c, 0xd04fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00d050  push edx
    X86_AT(c, 0xd050u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00d051  push eax
    X86_AT(c, 0xd051u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00d052  mov esi, dword ptr gs:[ebp + 0x48c]
    X86_AT(c, 0xd052u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x48Cu)));
    // 00d059  mov edi, dword ptr gs:[ebp + 0x490]
    X86_AT(c, 0xd059u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x490u)));
    // 00d060  cmp word ptr gs:[ebp + 0x47a], 0
    X86_AT(c, 0xd060u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))), 0x0u, 0, 2);
    // 00d069  jne 0xd072
    X86_AT(c, 0xd069u);
    if (x86_cc(c, 5)) { goto L_d072; }
    X86_TICK(c, 7);
    // 00d06b  call 0xd0ac
    X86_AT(c, 0xd06bu);
    push32(c, 0xd070u); f_0000d0ac(c); X86_RET(c, 0xd070u);
    X86_TICK(c, 7);
    // 00d070  jmp 0xd07c
    X86_AT(c, 0xd070u);
    goto L_d07c;
L_d072:
    X86_TICK(c, 7);
    // 00d072  call 0xd134
    X86_AT(c, 0xd072u);
    push32(c, 0xd077u); f_0000d134(c); X86_RET(c, 0xd077u);
    X86_TICK(c, 7);
    // 00d077  call 0xd31c
    X86_AT(c, 0xd077u);
    push32(c, 0xd07cu); f_0000d31c(c); X86_RET(c, 0xd07cu);
L_d07c:
    X86_TICK(c, 20);
    // 00d07c  pop eax
    X86_AT(c, 0xd07cu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00d07d  pop edx
    X86_AT(c, 0xd07du);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00d07e  pop ebx
    X86_AT(c, 0xd07eu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00d07f  mov word ptr gs:[ebp + 0x472], dx
    X86_AT(c, 0xd07fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x472u)), (c.r[2] & 0xFFFFu));
    // 00d087  mov word ptr gs:[ebp + 0x474], dx
    X86_AT(c, 0xd087u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u)), (c.r[2] & 0xFFFFu));
    // 00d08f  mov word ptr gs:[ebp + 0x476], dx
    X86_AT(c, 0xd08fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u)), (c.r[2] & 0xFFFFu));
    // 00d097  mov word ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd097u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u)), 0x0u);
L_d0a1:
    X86_TICK(c, 7);
    // 00d0a1  jmp 0xc9cf
    X86_AT(c, 0xd0a1u);
    X86_POLL(c, 0xc9cfu); goto L_c9cf;
L_da7c:
    X86_TICK(c, 14);
    // 00da7c  mov edx, dword ptr gs:[ebp + 0x408]
    X86_AT(c, 0xda7cu);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)));
    // 00da83  shld eax, edx, 0x10
    X86_AT(c, 0xda83u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00da87  or cx, cx
    X86_AT(c, 0xda87u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v | (c.r[1] & 0xFFFFu), 2)); }
    // 00da8a  jne 0xdac3
    X86_AT(c, 0xda8au);
    if (x86_cc(c, 5)) { goto L_dac3; }
    X86_TICK(c, 13);
    // 00da8c  mov word ptr gs:[ebp + 0x420], dx
    X86_AT(c, 0xda8cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x420u)), (c.r[2] & 0xFFFFu));
    // 00da94  mov word ptr gs:[ebp + 0x424], dx
    X86_AT(c, 0xda94u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)), (c.r[2] & 0xFFFFu));
    // 00da9c  mov dx, ax
    X86_AT(c, 0xda9cu);
    s16(c, 2, (c.r[0] & 0xFFFFu));
    // 00da9f  sub ax, bx
    X86_AT(c, 0xda9fu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00daa2  jno 0xdaa8
    X86_AT(c, 0xdaa2u);
    if (x86_cc(c, 1)) { goto L_daa8; }
    X86_TICK(c, 2);
    // 00daa4  mov ax, 0x8001
    X86_AT(c, 0xdaa4u);
    s16(c, 0, 0x8001u);
L_daa8:
    X86_TICK(c, 7);
    // 00daa8  add dx, bx
    X86_AT(c, 0xdaa8u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00daab  jno 0xdab1
    X86_AT(c, 0xdaabu);
    if (x86_cc(c, 1)) { goto L_dab1; }
    X86_TICK(c, 2);
    // 00daad  mov dx, 0x7fff
    X86_AT(c, 0xdaadu);
    s16(c, 2, 0x7FFFu);
L_dab1:
    X86_TICK(c, 11);
    // 00dab1  mov word ptr gs:[ebp + 0x422], ax
    X86_AT(c, 0xdab1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x422u)), (c.r[0] & 0xFFFFu));
    // 00dab9  mov word ptr gs:[ebp + 0x426], dx
    X86_AT(c, 0xdab9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x426u)), (c.r[2] & 0xFFFFu));
    // 00dac1  jmp 0xdaf8
    X86_AT(c, 0xdac1u);
    goto L_daf8;
L_dac3:
    X86_TICK(c, 13);
    // 00dac3  mov word ptr gs:[ebp + 0x422], ax
    X86_AT(c, 0xdac3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x422u)), (c.r[0] & 0xFFFFu));
    // 00dacb  mov word ptr gs:[ebp + 0x426], ax
    X86_AT(c, 0xdacbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x426u)), (c.r[0] & 0xFFFFu));
    // 00dad3  mov ax, dx
    X86_AT(c, 0xdad3u);
    s16(c, 0, (c.r[2] & 0xFFFFu));
    // 00dad6  sub dx, cx
    X86_AT(c, 0xdad6u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 00dad9  jno 0xdadf
    X86_AT(c, 0xdad9u);
    if (x86_cc(c, 1)) { goto L_dadf; }
    X86_TICK(c, 2);
    // 00dadb  mov dx, 0x8001
    X86_AT(c, 0xdadbu);
    s16(c, 2, 0x8001u);
L_dadf:
    X86_TICK(c, 7);
    // 00dadf  add ax, cx
    X86_AT(c, 0xdadfu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 00dae2  jno 0xdae8
    X86_AT(c, 0xdae2u);
    if (x86_cc(c, 1)) { goto L_dae8; }
    X86_TICK(c, 2);
    // 00dae4  mov ax, 0x7fff
    X86_AT(c, 0xdae4u);
    s16(c, 0, 0x7FFFu);
L_dae8:
    X86_TICK(c, 4);
    // 00dae8  mov word ptr gs:[ebp + 0x420], dx
    X86_AT(c, 0xdae8u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x420u)), (c.r[2] & 0xFFFFu));
    // 00daf0  mov word ptr gs:[ebp + 0x424], ax
    X86_AT(c, 0xdaf0u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)), (c.r[0] & 0xFFFFu));
L_daf8:
    X86_TICK(c, 16);
    // 00daf8  sub ebx, ebx
    X86_AT(c, 0xdaf8u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00dafa  mov cx, bx
    X86_AT(c, 0xdafau);
    s16(c, 1, (c.r[3] & 0xFFFFu));
    // 00dafd  cmp byte ptr gs:[ebp + 0x41e], cl
    X86_AT(c, 0xdafdu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Eu))), g8(c, 1), 0, 1);
    // 00db04  je 0xde66
    X86_AT(c, 0xdb04u);
    if (x86_cc(c, 4)) { goto L_de66; }
    X86_TICK(c, 12);
    // 00db0a  cmp word ptr gs:[ebp + 0x414], cx
    X86_AT(c, 0xdb0au);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))), (c.r[1] & 0xFFFFu), 0, 2);
    // 00db12  jg 0xdb23
    X86_AT(c, 0xdb12u);
    if (x86_cc(c, 15)) { goto L_db23; }
    X86_TICK(c, 5);
    // 00db14  jl 0xdb20
    X86_AT(c, 0xdb14u);
    if (x86_cc(c, 12)) { goto L_db20; }
    X86_TICK(c, 12);
    // 00db16  cmp word ptr gs:[ebp + 0x416], cx
    X86_AT(c, 0xdb16u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x416u))), (c.r[1] & 0xFFFFu), 0, 2);
    // 00db1e  jle 0xdb23
    X86_AT(c, 0xdb1eu);
    if (x86_cc(c, 14)) { goto L_db23; }
L_db20:
    X86_TICK(c, 2);
    // 00db20  xor bh, 1
    X86_AT(c, 0xdb20u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v ^ 0x1u, 1)); }
L_db23:
    X86_TICK(c, 12);
    // 00db23  cmp word ptr gs:[ebp + 0x416], cx
    X86_AT(c, 0xdb23u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x416u))), (c.r[1] & 0xFFFFu), 0, 2);
    // 00db2b  jge 0xdb30
    X86_AT(c, 0xdb2bu);
    if (x86_cc(c, 13)) { goto L_db30; }
    X86_TICK(c, 2);
    // 00db2d  xor bh, 3
    X86_AT(c, 0xdb2du);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v ^ 0x3u, 1)); }
L_db30:
    X86_TICK(c, 12);
    // 00db30  cmp word ptr gs:[ebp + 0x418], cx
    X86_AT(c, 0xdb30u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u))), (c.r[1] & 0xFFFFu), 0, 2);
    // 00db38  jg 0xdb49
    X86_AT(c, 0xdb38u);
    if (x86_cc(c, 15)) { goto L_db49; }
    X86_TICK(c, 5);
    // 00db3a  jl 0xdb46
    X86_AT(c, 0xdb3au);
    if (x86_cc(c, 12)) { goto L_db46; }
    X86_TICK(c, 12);
    // 00db3c  cmp word ptr gs:[ebp + 0x41a], cx
    X86_AT(c, 0xdb3cu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Au))), (c.r[1] & 0xFFFFu), 0, 2);
    // 00db44  jle 0xdb49
    X86_AT(c, 0xdb44u);
    if (x86_cc(c, 14)) { goto L_db49; }
L_db46:
    X86_TICK(c, 2);
    // 00db46  xor bl, 1
    X86_AT(c, 0xdb46u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v ^ 0x1u, 1)); }
L_db49:
    X86_TICK(c, 12);
    // 00db49  cmp word ptr gs:[ebp + 0x41a], cx
    X86_AT(c, 0xdb49u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Au))), (c.r[1] & 0xFFFFu), 0, 2);
    // 00db51  jge 0xdb56
    X86_AT(c, 0xdb51u);
    if (x86_cc(c, 13)) { goto L_db56; }
    X86_TICK(c, 2);
    // 00db53  xor bl, 3
    X86_AT(c, 0xdb53u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v ^ 0x3u, 1)); }
L_db56:
    X86_TICK(c, 12);
    // 00db56  cmp byte ptr gs:[ebp + 0x4d4], cl
    X86_AT(c, 0xdb56u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4D4u))), g8(c, 1), 0, 1);
    // 00db5d  jge 0xdbb0
    X86_AT(c, 0xdb5du);
    if (x86_cc(c, 13)) { goto L_dbb0; }
    X86_TICK(c, 17);
    // 00db5f  mov eax, dword ptr gs:[ebp + 0x40c]
    X86_AT(c, 0xdb5fu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Cu)));
    // 00db66  mov dword ptr gs:[ebp + 0x410], eax
    X86_AT(c, 0xdb66u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x410u)), c.r[0]);
    // 00db6d  mov eax, dword ptr gs:[ebp + 0x4cc]
    X86_AT(c, 0xdb6du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CCu)));
    // 00db74  call 0xd994
    X86_AT(c, 0xdb74u);
    push32(c, 0xdb79u); f_0000d994(c); X86_RET(c, 0xdb79u);
    X86_TICK(c, 17);
    // 00db79  mov esi, ebx
    X86_AT(c, 0xdb79u);
    c.r[6] = c.r[3];
    // 00db7b  mov word ptr gs:[ebp + 0x414], dx
    X86_AT(c, 0xdb7bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u)), (c.r[2] & 0xFFFFu));
    // 00db83  mov word ptr gs:[ebp + 0x416], ax
    X86_AT(c, 0xdb83u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x416u)), (c.r[0] & 0xFFFFu));
    // 00db8b  mov eax, dword ptr gs:[ebp + 0x4d0]
    X86_AT(c, 0xdb8bu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4D0u)));
    // 00db92  call 0xd994
    X86_AT(c, 0xdb92u);
    push32(c, 0xdb97u); f_0000d994(c); X86_RET(c, 0xdb97u);
    X86_TICK(c, 13);
    // 00db97  mov edi, ebx
    X86_AT(c, 0xdb97u);
    c.r[7] = c.r[3];
    // 00db99  mov word ptr gs:[ebp + 0x418], dx
    X86_AT(c, 0xdb99u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)), (c.r[2] & 0xFFFFu));
    // 00dba1  mov word ptr gs:[ebp + 0x41a], ax
    X86_AT(c, 0xdba1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Au)), (c.r[0] & 0xFFFFu));
    // 00dba9  mov ebx, esi
    X86_AT(c, 0xdba9u);
    c.r[3] = c.r[6];
    // 00dbab  shl ebx, 8
    X86_AT(c, 0xdbabu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[3] = r; }
    // 00dbae  or ebx, edi
    X86_AT(c, 0xdbaeu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[7], 4); }
L_dbb0:
    X86_TICK(c, 12);
    // 00dbb0  cmp byte ptr gs:[ebp + 0x4d4], cl
    X86_AT(c, 0xdbb0u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4D4u))), g8(c, 1), 0, 1);
    // 00dbb7  jne 0xdc7f
    X86_AT(c, 0xdbb7u);
    if (x86_cc(c, 5)) { goto L_dc7f; }
    X86_TICK(c, 31);
    // 00dbbd  lfs esi, fword ptr gs:[ebp + 0x4d8]
    X86_AT(c, 0xdbbdu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x4D8u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 4, s); c.r[6] = o; }
    // 00dbc5  mov edx, dword ptr fs:[esi + 4]
    X86_AT(c, 0xdbc5u);
    c.r[2] = rd32((c.sbase[4] + (uint32_t)(c.r[6] + 0x4u)));
    // 00dbc9  mov cx, word ptr fs:[esi + 0xc]
    X86_AT(c, 0xdbc9u);
    s16(c, 1, rd16((c.sbase[4] + (uint32_t)(c.r[6] + 0xCu))));
    // 00dbce  mov esi, dword ptr fs:[esi + 8]
    X86_AT(c, 0xdbceu);
    c.r[6] = rd32((c.sbase[4] + (uint32_t)(c.r[6] + 0x8u)));
    // 00dbd2  shld edi, esi, 0x10
    X86_AT(c, 0xdbd2u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_double(c, true, v, c.r[6], 0x10u, 4, w); if (w) c.r[7] = r; }
    // 00dbd6  shld eax, edx, 0x10
    X86_AT(c, 0xdbd6u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00dbda  or edx, edx
    X86_AT(c, 0xdbdau);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | c.r[2], 4); }
    // 00dbdc  jne 0xdbe0
    X86_AT(c, 0xdbdcu);
    if (x86_cc(c, 5)) { goto L_dbe0; }
    X86_TICK(c, 2);
    // 00dbde  mov edx, ecx
    X86_AT(c, 0xdbdeu);
    c.r[2] = c.r[1];
L_dbe0:
    X86_TICK(c, 7);
    // 00dbe0  or esi, esi
    X86_AT(c, 0xdbe0u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v | c.r[6], 4); }
    // 00dbe2  jne 0xdbe6
    X86_AT(c, 0xdbe2u);
    if (x86_cc(c, 5)) { goto L_dbe6; }
    X86_TICK(c, 2);
    // 00dbe4  mov esi, ecx
    X86_AT(c, 0xdbe4u);
    c.r[6] = c.r[1];
L_dbe6:
    X86_TICK(c, 7);
    // 00dbe6  call 0xdeac
    X86_AT(c, 0xdbe6u);
    push32(c, 0xdbebu); f_0000deac(c); X86_RET(c, 0xdbebu);
    X86_TICK(c, 13);
    // 00dbeb  mov word ptr gs:[ebp + 0x414], dx
    X86_AT(c, 0xdbebu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u)), (c.r[2] & 0xFFFFu));
    // 00dbf3  mov word ptr gs:[ebp + 0x416], ax
    X86_AT(c, 0xdbf3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x416u)), (c.r[0] & 0xFFFFu));
    // 00dbfb  sub ebx, ebx
    X86_AT(c, 0xdbfbu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00dbfd  test dx, dx
    X86_AT(c, 0xdbfdu);
    (void)x86_logic(c, (c.r[2] & 0xFFFFu) & (c.r[2] & 0xFFFFu), 2);
    // 00dc00  jge 0xdc05
    X86_AT(c, 0xdc00u);
    if (x86_cc(c, 13)) { goto L_dc05; }
    X86_TICK(c, 2);
    // 00dc02  xor bh, 1
    X86_AT(c, 0xdc02u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v ^ 0x1u, 1)); }
L_dc05:
    X86_TICK(c, 7);
    // 00dc05  test ax, ax
    X86_AT(c, 0xdc05u);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & (c.r[0] & 0xFFFFu), 2);
    // 00dc08  jge 0xdc0d
    X86_AT(c, 0xdc08u);
    if (x86_cc(c, 13)) { goto L_dc0d; }
    X86_TICK(c, 2);
    // 00dc0a  xor bh, 3
    X86_AT(c, 0xdc0au);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v ^ 0x3u, 1)); }
L_dc0d:
    X86_TICK(c, 11);
    // 00dc0d  mov edx, esi
    X86_AT(c, 0xdc0du);
    c.r[2] = c.r[6];
    // 00dc0f  mov eax, edi
    X86_AT(c, 0xdc0fu);
    c.r[0] = c.r[7];
    // 00dc11  call 0xdeac
    X86_AT(c, 0xdc11u);
    push32(c, 0xdc16u); f_0000deac(c); X86_RET(c, 0xdc16u);
    X86_TICK(c, 11);
    // 00dc16  mov word ptr gs:[ebp + 0x418], dx
    X86_AT(c, 0xdc16u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)), (c.r[2] & 0xFFFFu));
    // 00dc1e  mov word ptr gs:[ebp + 0x41a], ax
    X86_AT(c, 0xdc1eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Au)), (c.r[0] & 0xFFFFu));
    // 00dc26  test dx, dx
    X86_AT(c, 0xdc26u);
    (void)x86_logic(c, (c.r[2] & 0xFFFFu) & (c.r[2] & 0xFFFFu), 2);
    // 00dc29  jge 0xdc2e
    X86_AT(c, 0xdc29u);
    if (x86_cc(c, 13)) { goto L_dc2e; }
    X86_TICK(c, 2);
    // 00dc2b  xor bl, 1
    X86_AT(c, 0xdc2bu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v ^ 0x1u, 1)); }
L_dc2e:
    X86_TICK(c, 7);
    // 00dc2e  test ax, ax
    X86_AT(c, 0xdc2eu);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & (c.r[0] & 0xFFFFu), 2);
    // 00dc31  jge 0xdc36
    X86_AT(c, 0xdc31u);
    if (x86_cc(c, 13)) { goto L_dc36; }
    X86_TICK(c, 2);
    // 00dc33  xor bl, 3
    X86_AT(c, 0xdc33u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v ^ 0x3u, 1)); }
L_dc36:
    X86_TICK(c, 9);
    // 00dc36  mov byte ptr gs:[ebp + 0x4d5], 0
    X86_AT(c, 0xdc36u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4D5u)), 0x0u);
    // 00dc3e  cmp bh, bl
    X86_AT(c, 0xdc3eu);
    (void)x86_sub(c, g8(c, 7), g8(c, 3), 0, 1);
    // 00dc40  jne 0xdc7f
    X86_AT(c, 0xdc40u);
    if (x86_cc(c, 5)) { goto L_dc7f; }
    X86_TICK(c, 70);
    // 00dc42  mov ax, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0xdc42u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))));
    // 00dc4a  imul word ptr gs:[ebp + 0x41a]
    X86_AT(c, 0xdc4au);
    x86_imul1(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Au))), 2);
    // 00dc52  shrd esi, edx, 0x10
    X86_AT(c, 0xdc52u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], 0x10u, 4, w); if (w) c.r[6] = r; }
    // 00dc56  mov si, ax
    X86_AT(c, 0xdc56u);
    s16(c, 6, (c.r[0] & 0xFFFFu));
    // 00dc59  mov ax, word ptr gs:[ebp + 0x416]
    X86_AT(c, 0xdc59u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x416u))));
    // 00dc61  imul word ptr gs:[ebp + 0x418]
    X86_AT(c, 0xdc61u);
    x86_imul1(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u))), 2);
    // 00dc69  shl eax, 0x10
    X86_AT(c, 0xdc69u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00dc6c  shrd eax, edx, 0x10
    X86_AT(c, 0xdc6cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00dc70  cmp esi, eax
    X86_AT(c, 0xdc70u);
    (void)x86_sub(c, c.r[6], c.r[0], 0, 4);
    // 00dc72  jle 0xde66
    X86_AT(c, 0xdc72u);
    if (x86_cc(c, 14)) { goto L_de66; }
    X86_TICK(c, 6);
    // 00dc78  not byte ptr gs:[ebp + 0x4d5]
    X86_AT(c, 0xdc78u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x4D5u)); uint32_t v = rd8(ea); wr8(ea, ~v & 0xFFu); }
L_dc7f:
    X86_TICK(c, 12);
    // 00dc7f  cmp word ptr gs:[ebp + 0x40c], 0
    X86_AT(c, 0xdc7fu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Cu))), 0x0u, 0, 2);
    // 00dc88  jne 0xdcc2
    X86_AT(c, 0xdc88u);
    if (x86_cc(c, 5)) { goto L_dcc2; }
    X86_TICK(c, 17);
    // 00dc8a  mov ax, word ptr gs:[ebp + 0x40a]
    X86_AT(c, 0xdc8au);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Au))));
    // 00dc92  mov edx, eax
    X86_AT(c, 0xdc92u);
    c.r[2] = c.r[0];
    // 00dc94  add ax, word ptr gs:[ebp + 0x416]
    X86_AT(c, 0xdc94u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x416u))), 0, 2)); }
    // 00dc9c  jno 0xdcaa
    X86_AT(c, 0xdc9cu);
    if (x86_cc(c, 1)) { goto L_dcaa; }
    X86_TICK(c, 9);
    // 00dc9e  mov ax, 0x7fff
    X86_AT(c, 0xdc9eu);
    s16(c, 0, 0x7FFFu);
    // 00dca2  test bh, 2
    X86_AT(c, 0xdca2u);
    (void)x86_logic(c, g8(c, 7) & 0x2u, 1);
    // 00dca5  je 0xdcaa
    X86_AT(c, 0xdca5u);
    if (x86_cc(c, 4)) { goto L_dcaa; }
    X86_TICK(c, 2);
    // 00dca7  neg ax
    X86_AT(c, 0xdca7u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_dcaa:
    X86_TICK(c, 11);
    // 00dcaa  add dx, word ptr gs:[ebp + 0x41a]
    X86_AT(c, 0xdcaau);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Au))), 0, 2)); }
    // 00dcb2  jno 0xdd02
    X86_AT(c, 0xdcb2u);
    if (x86_cc(c, 1)) { goto L_dd02; }
    X86_TICK(c, 9);
    // 00dcb4  mov dx, 0x7fff
    X86_AT(c, 0xdcb4u);
    s16(c, 2, 0x7FFFu);
    // 00dcb8  test bl, 2
    X86_AT(c, 0xdcb8u);
    (void)x86_logic(c, g8(c, 3) & 0x2u, 1);
    // 00dcbb  je 0xdd02
    X86_AT(c, 0xdcbbu);
    if (x86_cc(c, 4)) { goto L_dd02; }
    X86_TICK(c, 9);
    // 00dcbd  neg dx
    X86_AT(c, 0xdcbdu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00dcc0  jmp 0xdd02
    X86_AT(c, 0xdcc0u);
    goto L_dd02;
L_dcc2:
    X86_TICK(c, 17);
    // 00dcc2  mov ax, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xdcc2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))));
    // 00dcca  mov edx, eax
    X86_AT(c, 0xdccau);
    c.r[2] = c.r[0];
    // 00dccc  add ax, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0xdcccu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))), 0, 2)); }
    // 00dcd4  jno 0xdce7
    X86_AT(c, 0xdcd4u);
    if (x86_cc(c, 1)) { goto L_dce7; }
    X86_TICK(c, 9);
    // 00dcd6  mov ax, 0x7fff
    X86_AT(c, 0xdcd6u);
    s16(c, 0, 0x7FFFu);
    // 00dcda  cmp bh, 1
    X86_AT(c, 0xdcdau);
    (void)x86_sub(c, g8(c, 7), 0x1u, 0, 1);
    // 00dcdd  je 0xdce4
    X86_AT(c, 0xdcddu);
    if (x86_cc(c, 4)) { goto L_dce4; }
    X86_TICK(c, 7);
    // 00dcdf  cmp bh, 2
    X86_AT(c, 0xdcdfu);
    (void)x86_sub(c, g8(c, 7), 0x2u, 0, 1);
    // 00dce2  jne 0xdce7
    X86_AT(c, 0xdce2u);
    if (x86_cc(c, 5)) { goto L_dce7; }
L_dce4:
    X86_TICK(c, 2);
    // 00dce4  neg ax
    X86_AT(c, 0xdce4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_dce7:
    X86_TICK(c, 11);
    // 00dce7  add dx, word ptr gs:[ebp + 0x418]
    X86_AT(c, 0xdce7u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u))), 0, 2)); }
    // 00dcef  jno 0xdd02
    X86_AT(c, 0xdcefu);
    if (x86_cc(c, 1)) { goto L_dd02; }
    X86_TICK(c, 9);
    // 00dcf1  mov dx, 0x7fff
    X86_AT(c, 0xdcf1u);
    s16(c, 2, 0x7FFFu);
    // 00dcf5  cmp bl, 1
    X86_AT(c, 0xdcf5u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 00dcf8  je 0xdcff
    X86_AT(c, 0xdcf8u);
    if (x86_cc(c, 4)) { goto L_dcff; }
    X86_TICK(c, 7);
    // 00dcfa  cmp bl, 2
    X86_AT(c, 0xdcfau);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 00dcfd  jne 0xdd02
    X86_AT(c, 0xdcfdu);
    if (x86_cc(c, 5)) { goto L_dd02; }
L_dcff:
    X86_TICK(c, 2);
    // 00dcff  neg dx
    X86_AT(c, 0xdcffu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
L_dd02:
    X86_TICK(c, 21);
    // 00dd02  push ebx
    X86_AT(c, 0xdd02u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00dd03  shl bh, 2
    X86_AT(c, 0xdd03u);
    { uint32_t v = g8(c, 7); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 1, w); if (w) s8(c, 7, r); }
    // 00dd06  add bl, bh
    X86_AT(c, 0xdd06u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 00dd08  and ebx, 0xff
    X86_AT(c, 0xdd08u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0xFFu, 4); }
    // 00dd0e  cmp word ptr gs:[ebp + 0x40e], 0
    X86_AT(c, 0xdd0eu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), 0x0u, 0, 2);
    // 00dd17  jne 0xdd1d
    X86_AT(c, 0xdd17u);
    if (x86_cc(c, 5)) { goto L_dd1d; }
    X86_TICK(c, 2);
    // 00dd19  add bx, 0x10
    X86_AT(c, 0xdd19u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x10u, 0, 2)); }
L_dd1d:
    X86_TICK(c, 15);
    // 00dd1d  mov cl, byte ptr cs:[ebx + 0xde8a]
    X86_AT(c, 0xdd1du);
    s8(c, 1, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0xDE8Au))));
    // 00dd24  pop ebx
    X86_AT(c, 0xdd24u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00dd25  test cl, 4
    X86_AT(c, 0xdd25u);
    (void)x86_logic(c, g8(c, 1) & 0x4u, 1);
    // 00dd28  je 0xddb1
    X86_AT(c, 0xdd28u);
    if (x86_cc(c, 4)) { goto L_ddb1; }
    X86_TICK(c, 12);
    // 00dd2e  cmp word ptr gs:[ebp + 0x40c], 0
    X86_AT(c, 0xdd2eu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Cu))), 0x0u, 0, 2);
    // 00dd37  jne 0xdd54
    X86_AT(c, 0xdd37u);
    if (x86_cc(c, 5)) { goto L_dd54; }
    X86_TICK(c, 7);
    // 00dd39  or bh, bh
    X86_AT(c, 0xdd39u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v | g8(c, 7), 1)); }
    // 00dd3b  je 0xdd42
    X86_AT(c, 0xdd3bu);
    if (x86_cc(c, 4)) { goto L_dd42; }
    X86_TICK(c, 7);
    // 00dd3d  cmp bh, 3
    X86_AT(c, 0xdd3du);
    (void)x86_sub(c, g8(c, 7), 0x3u, 0, 1);
    // 00dd40  jne 0xdd4b
    X86_AT(c, 0xdd40u);
    if (x86_cc(c, 5)) { goto L_dd4b; }
L_dd42:
    X86_TICK(c, 7);
    // 00dd42  cmp ax, dx
    X86_AT(c, 0xdd42u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[2] & 0xFFFFu), 0, 2);
    // 00dd45  jge 0xdd69
    X86_AT(c, 0xdd45u);
    if (x86_cc(c, 13)) { goto L_dd69; }
    X86_TICK(c, 9);
    // 00dd47  xor cl, cl
    X86_AT(c, 0xdd47u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v ^ g8(c, 1), 1)); }
    // 00dd49  jmp 0xdd69
    X86_AT(c, 0xdd49u);
    goto L_dd69;
L_dd4b:
    X86_TICK(c, 7);
    // 00dd4b  cmp ax, dx
    X86_AT(c, 0xdd4bu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[2] & 0xFFFFu), 0, 2);
    // 00dd4e  jle 0xdd69
    X86_AT(c, 0xdd4eu);
    if (x86_cc(c, 14)) { goto L_dd69; }
    X86_TICK(c, 9);
    // 00dd50  xor cl, cl
    X86_AT(c, 0xdd50u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v ^ g8(c, 1), 1)); }
    // 00dd52  jmp 0xdd69
    X86_AT(c, 0xdd52u);
    goto L_dd69;
L_dd54:
    X86_TICK(c, 7);
    // 00dd54  test bh, 2
    X86_AT(c, 0xdd54u);
    (void)x86_logic(c, g8(c, 7) & 0x2u, 1);
    // 00dd57  je 0xdd62
    X86_AT(c, 0xdd57u);
    if (x86_cc(c, 4)) { goto L_dd62; }
    X86_TICK(c, 7);
    // 00dd59  cmp ax, dx
    X86_AT(c, 0xdd59u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[2] & 0xFFFFu), 0, 2);
    // 00dd5c  jge 0xdd69
    X86_AT(c, 0xdd5cu);
    if (x86_cc(c, 13)) { goto L_dd69; }
    X86_TICK(c, 9);
    // 00dd5e  xor cl, cl
    X86_AT(c, 0xdd5eu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v ^ g8(c, 1), 1)); }
    // 00dd60  jmp 0xdd69
    X86_AT(c, 0xdd60u);
    goto L_dd69;
L_dd62:
    X86_TICK(c, 7);
    // 00dd62  cmp ax, dx
    X86_AT(c, 0xdd62u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[2] & 0xFFFFu), 0, 2);
    // 00dd65  jle 0xdd69
    X86_AT(c, 0xdd65u);
    if (x86_cc(c, 14)) { goto L_dd69; }
    X86_TICK(c, 2);
    // 00dd67  xor cl, cl
    X86_AT(c, 0xdd67u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v ^ g8(c, 1), 1)); }
L_dd69:
    X86_TICK(c, 7);
    // 00dd69  cmp ax, dx
    X86_AT(c, 0xdd69u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[2] & 0xFFFFu), 0, 2);
    // 00dd6c  jne 0xddb1
    X86_AT(c, 0xdd6cu);
    if (x86_cc(c, 5)) { goto L_ddb1; }
    X86_TICK(c, 12);
    // 00dd6e  cmp byte ptr gs:[ebp + 0x4d4], 0
    X86_AT(c, 0xdd6eu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4D4u))), 0x0u, 0, 1);
    // 00dd76  jge 0xdd9b
    X86_AT(c, 0xdd76u);
    if (x86_cc(c, 13)) { goto L_dd9b; }
    X86_TICK(c, 19);
    // 00dd78  mov esi, dword ptr gs:[ebp + 0x4cc]
    X86_AT(c, 0xdd78u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CCu)));
    // 00dd7f  shld edi, esi, 0x10
    X86_AT(c, 0xdd7fu);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_double(c, true, v, c.r[6], 0x10u, 4, w); if (w) c.r[7] = r; }
    // 00dd83  cmp word ptr gs:[ebp + 0x4d0], si
    X86_AT(c, 0xdd83u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4D0u))), (c.r[6] & 0xFFFFu), 0, 2);
    // 00dd8b  jg 0xdd9b
    X86_AT(c, 0xdd8bu);
    if (x86_cc(c, 15)) { goto L_dd9b; }
    X86_TICK(c, 5);
    // 00dd8d  jl 0xdd99
    X86_AT(c, 0xdd8du);
    if (x86_cc(c, 12)) { goto L_dd99; }
    X86_TICK(c, 12);
    // 00dd8f  cmp word ptr gs:[ebp + 0x4d2], di
    X86_AT(c, 0xdd8fu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4D2u))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00dd97  jae 0xdd9b
    X86_AT(c, 0xdd97u);
    if (x86_cc(c, 3)) { goto L_dd9b; }
L_dd99:
    X86_TICK(c, 2);
    // 00dd99  xor cl, cl
    X86_AT(c, 0xdd99u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v ^ g8(c, 1), 1)); }
L_dd9b:
    X86_TICK(c, 12);
    // 00dd9b  cmp byte ptr gs:[ebp + 0x4d4], 0
    X86_AT(c, 0xdd9bu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4D4u))), 0x0u, 0, 1);
    // 00dda3  jne 0xddb1
    X86_AT(c, 0xdda3u);
    if (x86_cc(c, 5)) { goto L_ddb1; }
    X86_TICK(c, 12);
    // 00dda5  cmp byte ptr gs:[ebp + 0x4d5], 0
    X86_AT(c, 0xdda5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4D5u))), 0x0u, 0, 1);
    // 00ddad  jge 0xddb1
    X86_AT(c, 0xddadu);
    if (x86_cc(c, 13)) { goto L_ddb1; }
    X86_TICK(c, 2);
    // 00ddaf  xor cl, cl
    X86_AT(c, 0xddafu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v ^ g8(c, 1), 1)); }
L_ddb1:
    X86_TICK(c, 7);
    // 00ddb1  cmp ax, dx
    X86_AT(c, 0xddb1u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[2] & 0xFFFFu), 0, 2);
    // 00ddb4  jle 0xddb8
    X86_AT(c, 0xddb4u);
    if (x86_cc(c, 14)) { goto L_ddb8; }
    X86_TICK(c, 3);
    // 00ddb6  xchg dx, ax
    X86_AT(c, 0xddb6u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_ddb8:
    X86_TICK(c, 19);
    // 00ddb8  mov esi, dword ptr gs:[ebp + 0x408]
    X86_AT(c, 0xddb8u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)));
    // 00ddbf  shld edi, esi, 0x10
    X86_AT(c, 0xddbfu);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_double(c, true, v, c.r[6], 0x10u, 4, w); if (w) c.r[7] = r; }
    // 00ddc3  cmp word ptr gs:[ebp + 0x40c], 0
    X86_AT(c, 0xddc3u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Cu))), 0x0u, 0, 2);
    // 00ddcc  jne 0xde1c
    X86_AT(c, 0xddccu);
    if (x86_cc(c, 5)) { goto L_de1c; }
    X86_TICK(c, 12);
    // 00ddce  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xddceu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00ddd6  jne 0xdde8
    X86_AT(c, 0xddd6u);
    if (x86_cc(c, 5)) { goto L_dde8; }
    X86_TICK(c, 7);
    // 00ddd8  cmp ax, di
    X86_AT(c, 0xddd8u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[7] & 0xFFFFu), 0, 2);
    // 00dddb  jle 0xdde1
    X86_AT(c, 0xdddbu);
    if (x86_cc(c, 14)) { goto L_dde1; }
    X86_TICK(c, 9);
    // 00dddd  mov eax, edi
    X86_AT(c, 0xddddu);
    c.r[0] = c.r[7];
    // 00dddf  jmp 0xdde8
    X86_AT(c, 0xdddfu);
    goto L_dde8;
L_dde1:
    X86_TICK(c, 7);
    // 00dde1  cmp dx, di
    X86_AT(c, 0xdde1u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[7] & 0xFFFFu), 0, 2);
    // 00dde4  jge 0xdde8
    X86_AT(c, 0xdde4u);
    if (x86_cc(c, 13)) { goto L_dde8; }
    X86_TICK(c, 2);
    // 00dde6  mov edx, edi
    X86_AT(c, 0xdde6u);
    c.r[2] = c.r[7];
L_dde8:
    X86_TICK(c, 7);
    // 00dde8  or cl, cl
    X86_AT(c, 0xdde8u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v | g8(c, 1), 1)); }
    // 00ddea  jne 0xddfe
    X86_AT(c, 0xddeau);
    if (x86_cc(c, 5)) { goto L_ddfe; }
    X86_TICK(c, 11);
    // 00ddec  mov word ptr gs:[ebp + 0x422], ax
    X86_AT(c, 0xddecu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x422u)), (c.r[0] & 0xFFFFu));
    // 00ddf4  mov word ptr gs:[ebp + 0x426], dx
    X86_AT(c, 0xddf4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x426u)), (c.r[2] & 0xFFFFu));
    // 00ddfc  jmp 0xde66
    X86_AT(c, 0xddfcu);
    goto L_de66;
L_ddfe:
    X86_TICK(c, 7);
    // 00ddfe  cmp cl, 1
    X86_AT(c, 0xddfeu);
    (void)x86_sub(c, g8(c, 1), 0x1u, 0, 1);
    // 00de01  jne 0xde0d
    X86_AT(c, 0xde01u);
    if (x86_cc(c, 5)) { goto L_de0d; }
    X86_TICK(c, 9);
    // 00de03  mov word ptr gs:[ebp + 0x426], dx
    X86_AT(c, 0xde03u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x426u)), (c.r[2] & 0xFFFFu));
    // 00de0b  jmp 0xde66
    X86_AT(c, 0xde0bu);
    goto L_de66;
L_de0d:
    X86_TICK(c, 7);
    // 00de0d  cmp cl, 2
    X86_AT(c, 0xde0du);
    (void)x86_sub(c, g8(c, 1), 0x2u, 0, 1);
    // 00de10  jne 0xde66
    X86_AT(c, 0xde10u);
    if (x86_cc(c, 5)) { goto L_de66; }
    X86_TICK(c, 9);
    // 00de12  mov word ptr gs:[ebp + 0x422], ax
    X86_AT(c, 0xde12u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x422u)), (c.r[0] & 0xFFFFu));
    // 00de1a  jmp 0xde66
    X86_AT(c, 0xde1au);
    goto L_de66;
L_de1c:
    X86_TICK(c, 12);
    // 00de1c  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xde1cu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00de24  jne 0xde34
    X86_AT(c, 0xde24u);
    if (x86_cc(c, 5)) { goto L_de34; }
    X86_TICK(c, 7);
    // 00de26  cmp ax, si
    X86_AT(c, 0xde26u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[6] & 0xFFFFu), 0, 2);
    // 00de29  jle 0xde2d
    X86_AT(c, 0xde29u);
    if (x86_cc(c, 14)) { goto L_de2d; }
    X86_TICK(c, 2);
    // 00de2b  mov eax, esi
    X86_AT(c, 0xde2bu);
    c.r[0] = c.r[6];
L_de2d:
    X86_TICK(c, 7);
    // 00de2d  cmp dx, si
    X86_AT(c, 0xde2du);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[6] & 0xFFFFu), 0, 2);
    // 00de30  jge 0xde34
    X86_AT(c, 0xde30u);
    if (x86_cc(c, 13)) { goto L_de34; }
    X86_TICK(c, 2);
    // 00de32  mov edx, esi
    X86_AT(c, 0xde32u);
    c.r[2] = c.r[6];
L_de34:
    X86_TICK(c, 7);
    // 00de34  or cl, cl
    X86_AT(c, 0xde34u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v | g8(c, 1), 1)); }
    // 00de36  jne 0xde4a
    X86_AT(c, 0xde36u);
    if (x86_cc(c, 5)) { goto L_de4a; }
    X86_TICK(c, 11);
    // 00de38  mov word ptr gs:[ebp + 0x420], ax
    X86_AT(c, 0xde38u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x420u)), (c.r[0] & 0xFFFFu));
    // 00de40  mov word ptr gs:[ebp + 0x424], dx
    X86_AT(c, 0xde40u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)), (c.r[2] & 0xFFFFu));
    // 00de48  jmp 0xde66
    X86_AT(c, 0xde48u);
    goto L_de66;
L_de4a:
    X86_TICK(c, 7);
    // 00de4a  cmp cl, 1
    X86_AT(c, 0xde4au);
    (void)x86_sub(c, g8(c, 1), 0x1u, 0, 1);
    // 00de4d  jne 0xde59
    X86_AT(c, 0xde4du);
    if (x86_cc(c, 5)) { goto L_de59; }
    X86_TICK(c, 9);
    // 00de4f  mov word ptr gs:[ebp + 0x424], dx
    X86_AT(c, 0xde4fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)), (c.r[2] & 0xFFFFu));
    // 00de57  jmp 0xde66
    X86_AT(c, 0xde57u);
    goto L_de66;
L_de59:
    X86_TICK(c, 7);
    // 00de59  cmp cl, 2
    X86_AT(c, 0xde59u);
    (void)x86_sub(c, g8(c, 1), 0x2u, 0, 1);
    // 00de5c  jne 0xde66
    X86_AT(c, 0xde5cu);
    if (x86_cc(c, 5)) { goto L_de66; }
    X86_TICK(c, 2);
    // 00de5e  mov word ptr gs:[ebp + 0x420], ax
    X86_AT(c, 0xde5eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x420u)), (c.r[0] & 0xFFFFu));
L_de66:
    X86_TICK(c, 19);
    // 00de66  mov eax, dword ptr gs:[ebp + 0x420]
    X86_AT(c, 0xde66u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x420u)));
    // 00de6d  mov dword ptr gs:[ebp + 0x1c4], eax
    X86_AT(c, 0xde6du);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), c.r[0]);
    // 00de74  mov eax, dword ptr gs:[ebp + 0x424]
    X86_AT(c, 0xde74u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)));
    // 00de7b  mov dword ptr gs:[ebp + 0x1c8], eax
    X86_AT(c, 0xde7bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), c.r[0]);
    // 00de82  call 0x3754
    X86_AT(c, 0xde82u);
    push32(c, 0xde87u); f_00003754(c); X86_RET(c, 0xde87u);
    X86_TICK(c, 12);
    // 00de87  xor ah, ah
    X86_AT(c, 0xde87u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 00de89  ret 
    X86_AT(c, 0xde89u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc434u, "ran off the end of a function");
}
}
