#include "p_tbios_funcs.h"
namespace p_tbios {
void f_00001a56(X86Cpu& c) {
    X86_TICK(c, 31);
    // 001a56  mov dword ptr gs:[ebp + 0x344], eax
    X86_AT(c, 0x1a56u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), c.r[0]);
    // 001a5d  mov byte ptr gs:[ebp + 0x378], 0x10
    X86_AT(c, 0x1a5du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x378u)), 0x10u);
    // 001a65  mov word ptr gs:[ebp + 0x108], 2
    X86_AT(c, 0x1a65u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u)), 0x2u);
    // 001a6f  mov dword ptr gs:[ebp + 0x104], eax
    X86_AT(c, 0x1a6fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), c.r[0]);
    // 001a76  mov byte ptr gs:[ebp + 0x102], al
    X86_AT(c, 0x1a76u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x102u)), g8(c, 0));
    // 001a7d  mov dword ptr gs:[ebp + 0xa0], eax
    X86_AT(c, 0x1a7du);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xA0u)), c.r[0]);
    // 001a84  mov dword ptr gs:[ebp + 0xa4], eax
    X86_AT(c, 0x1a84u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xA4u)), c.r[0]);
    // 001a8b  mov word ptr gs:[ebp + 0x338], ax
    X86_AT(c, 0x1a8bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u)), (c.r[0] & 0xFFFFu));
    // 001a93  mov dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x1a93u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), 0xFFFFFFFFu);
    // 001a9e  mov byte ptr gs:[ebp + 0x1e0], al
    X86_AT(c, 0x1a9eu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u)), g8(c, 0));
    // 001aa5  mov dword ptr gs:[ebp + 0x300], eax
    X86_AT(c, 0x1aa5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), c.r[0]);
    // 001aac  mov dword ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x1aacu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 001ab7  jmp 0xb9a0
    X86_AT(c, 0x1ab7u);
    goto L_b9a0;
L_b9a0:
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
    x86_fault(c, 0x1a56u, "ran off the end of a function");
}
void f_00001a5d(X86Cpu& c) {
    X86_TICK(c, 29);
    // 001a5d  mov byte ptr gs:[ebp + 0x378], 0x10
    X86_AT(c, 0x1a5du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x378u)), 0x10u);
    // 001a65  mov word ptr gs:[ebp + 0x108], 2
    X86_AT(c, 0x1a65u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u)), 0x2u);
    // 001a6f  mov dword ptr gs:[ebp + 0x104], eax
    X86_AT(c, 0x1a6fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), c.r[0]);
    // 001a76  mov byte ptr gs:[ebp + 0x102], al
    X86_AT(c, 0x1a76u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x102u)), g8(c, 0));
    // 001a7d  mov dword ptr gs:[ebp + 0xa0], eax
    X86_AT(c, 0x1a7du);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xA0u)), c.r[0]);
    // 001a84  mov dword ptr gs:[ebp + 0xa4], eax
    X86_AT(c, 0x1a84u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xA4u)), c.r[0]);
    // 001a8b  mov word ptr gs:[ebp + 0x338], ax
    X86_AT(c, 0x1a8bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u)), (c.r[0] & 0xFFFFu));
    // 001a93  mov dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x1a93u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), 0xFFFFFFFFu);
    // 001a9e  mov byte ptr gs:[ebp + 0x1e0], al
    X86_AT(c, 0x1a9eu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u)), g8(c, 0));
    // 001aa5  mov dword ptr gs:[ebp + 0x300], eax
    X86_AT(c, 0x1aa5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), c.r[0]);
    // 001aac  mov dword ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x1aacu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 001ab7  jmp 0xb9a0
    X86_AT(c, 0x1ab7u);
    goto L_b9a0;
L_b9a0:
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
    x86_fault(c, 0x1a5du, "ran off the end of a function");
}
void f_00001a65(X86Cpu& c) {
    X86_TICK(c, 27);
    // 001a65  mov word ptr gs:[ebp + 0x108], 2
    X86_AT(c, 0x1a65u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u)), 0x2u);
    // 001a6f  mov dword ptr gs:[ebp + 0x104], eax
    X86_AT(c, 0x1a6fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), c.r[0]);
    // 001a76  mov byte ptr gs:[ebp + 0x102], al
    X86_AT(c, 0x1a76u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x102u)), g8(c, 0));
    // 001a7d  mov dword ptr gs:[ebp + 0xa0], eax
    X86_AT(c, 0x1a7du);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xA0u)), c.r[0]);
    // 001a84  mov dword ptr gs:[ebp + 0xa4], eax
    X86_AT(c, 0x1a84u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xA4u)), c.r[0]);
    // 001a8b  mov word ptr gs:[ebp + 0x338], ax
    X86_AT(c, 0x1a8bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u)), (c.r[0] & 0xFFFFu));
    // 001a93  mov dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x1a93u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), 0xFFFFFFFFu);
    // 001a9e  mov byte ptr gs:[ebp + 0x1e0], al
    X86_AT(c, 0x1a9eu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u)), g8(c, 0));
    // 001aa5  mov dword ptr gs:[ebp + 0x300], eax
    X86_AT(c, 0x1aa5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), c.r[0]);
    // 001aac  mov dword ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x1aacu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 001ab7  jmp 0xb9a0
    X86_AT(c, 0x1ab7u);
    goto L_b9a0;
L_b9a0:
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
    x86_fault(c, 0x1a65u, "ran off the end of a function");
}
void f_00001a6f(X86Cpu& c) {
    X86_TICK(c, 25);
    // 001a6f  mov dword ptr gs:[ebp + 0x104], eax
    X86_AT(c, 0x1a6fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), c.r[0]);
    // 001a76  mov byte ptr gs:[ebp + 0x102], al
    X86_AT(c, 0x1a76u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x102u)), g8(c, 0));
    // 001a7d  mov dword ptr gs:[ebp + 0xa0], eax
    X86_AT(c, 0x1a7du);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xA0u)), c.r[0]);
    // 001a84  mov dword ptr gs:[ebp + 0xa4], eax
    X86_AT(c, 0x1a84u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xA4u)), c.r[0]);
    // 001a8b  mov word ptr gs:[ebp + 0x338], ax
    X86_AT(c, 0x1a8bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u)), (c.r[0] & 0xFFFFu));
    // 001a93  mov dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x1a93u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), 0xFFFFFFFFu);
    // 001a9e  mov byte ptr gs:[ebp + 0x1e0], al
    X86_AT(c, 0x1a9eu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u)), g8(c, 0));
    // 001aa5  mov dword ptr gs:[ebp + 0x300], eax
    X86_AT(c, 0x1aa5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), c.r[0]);
    // 001aac  mov dword ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x1aacu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 001ab7  jmp 0xb9a0
    X86_AT(c, 0x1ab7u);
    goto L_b9a0;
L_b9a0:
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
    x86_fault(c, 0x1a6fu, "ran off the end of a function");
}
void f_00001a76(X86Cpu& c) {
    X86_TICK(c, 23);
    // 001a76  mov byte ptr gs:[ebp + 0x102], al
    X86_AT(c, 0x1a76u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x102u)), g8(c, 0));
    // 001a7d  mov dword ptr gs:[ebp + 0xa0], eax
    X86_AT(c, 0x1a7du);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xA0u)), c.r[0]);
    // 001a84  mov dword ptr gs:[ebp + 0xa4], eax
    X86_AT(c, 0x1a84u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xA4u)), c.r[0]);
    // 001a8b  mov word ptr gs:[ebp + 0x338], ax
    X86_AT(c, 0x1a8bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u)), (c.r[0] & 0xFFFFu));
    // 001a93  mov dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x1a93u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), 0xFFFFFFFFu);
    // 001a9e  mov byte ptr gs:[ebp + 0x1e0], al
    X86_AT(c, 0x1a9eu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u)), g8(c, 0));
    // 001aa5  mov dword ptr gs:[ebp + 0x300], eax
    X86_AT(c, 0x1aa5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), c.r[0]);
    // 001aac  mov dword ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x1aacu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 001ab7  jmp 0xb9a0
    X86_AT(c, 0x1ab7u);
    goto L_b9a0;
L_b9a0:
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
    x86_fault(c, 0x1a76u, "ran off the end of a function");
}
void f_00001a7d(X86Cpu& c) {
    X86_TICK(c, 21);
    // 001a7d  mov dword ptr gs:[ebp + 0xa0], eax
    X86_AT(c, 0x1a7du);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xA0u)), c.r[0]);
    // 001a84  mov dword ptr gs:[ebp + 0xa4], eax
    X86_AT(c, 0x1a84u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xA4u)), c.r[0]);
    // 001a8b  mov word ptr gs:[ebp + 0x338], ax
    X86_AT(c, 0x1a8bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u)), (c.r[0] & 0xFFFFu));
    // 001a93  mov dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x1a93u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), 0xFFFFFFFFu);
    // 001a9e  mov byte ptr gs:[ebp + 0x1e0], al
    X86_AT(c, 0x1a9eu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u)), g8(c, 0));
    // 001aa5  mov dword ptr gs:[ebp + 0x300], eax
    X86_AT(c, 0x1aa5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), c.r[0]);
    // 001aac  mov dword ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x1aacu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 001ab7  jmp 0xb9a0
    X86_AT(c, 0x1ab7u);
    goto L_b9a0;
L_b9a0:
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
    x86_fault(c, 0x1a7du, "ran off the end of a function");
}
void f_00001a84(X86Cpu& c) {
    X86_TICK(c, 19);
    // 001a84  mov dword ptr gs:[ebp + 0xa4], eax
    X86_AT(c, 0x1a84u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xA4u)), c.r[0]);
    // 001a8b  mov word ptr gs:[ebp + 0x338], ax
    X86_AT(c, 0x1a8bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u)), (c.r[0] & 0xFFFFu));
    // 001a93  mov dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x1a93u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), 0xFFFFFFFFu);
    // 001a9e  mov byte ptr gs:[ebp + 0x1e0], al
    X86_AT(c, 0x1a9eu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u)), g8(c, 0));
    // 001aa5  mov dword ptr gs:[ebp + 0x300], eax
    X86_AT(c, 0x1aa5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), c.r[0]);
    // 001aac  mov dword ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x1aacu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 001ab7  jmp 0xb9a0
    X86_AT(c, 0x1ab7u);
    goto L_b9a0;
L_b9a0:
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
    x86_fault(c, 0x1a84u, "ran off the end of a function");
}
void f_00001a8b(X86Cpu& c) {
    X86_TICK(c, 17);
    // 001a8b  mov word ptr gs:[ebp + 0x338], ax
    X86_AT(c, 0x1a8bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u)), (c.r[0] & 0xFFFFu));
    // 001a93  mov dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x1a93u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), 0xFFFFFFFFu);
    // 001a9e  mov byte ptr gs:[ebp + 0x1e0], al
    X86_AT(c, 0x1a9eu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u)), g8(c, 0));
    // 001aa5  mov dword ptr gs:[ebp + 0x300], eax
    X86_AT(c, 0x1aa5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), c.r[0]);
    // 001aac  mov dword ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x1aacu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 001ab7  jmp 0xb9a0
    X86_AT(c, 0x1ab7u);
    goto L_b9a0;
L_b9a0:
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
    x86_fault(c, 0x1a8bu, "ran off the end of a function");
}
void f_00001a93(X86Cpu& c) {
    X86_TICK(c, 15);
    // 001a93  mov dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x1a93u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), 0xFFFFFFFFu);
    // 001a9e  mov byte ptr gs:[ebp + 0x1e0], al
    X86_AT(c, 0x1a9eu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u)), g8(c, 0));
    // 001aa5  mov dword ptr gs:[ebp + 0x300], eax
    X86_AT(c, 0x1aa5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), c.r[0]);
    // 001aac  mov dword ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x1aacu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 001ab7  jmp 0xb9a0
    X86_AT(c, 0x1ab7u);
    goto L_b9a0;
L_b9a0:
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
    x86_fault(c, 0x1a93u, "ran off the end of a function");
}
void f_00001a9e(X86Cpu& c) {
    X86_TICK(c, 13);
    // 001a9e  mov byte ptr gs:[ebp + 0x1e0], al
    X86_AT(c, 0x1a9eu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u)), g8(c, 0));
    // 001aa5  mov dword ptr gs:[ebp + 0x300], eax
    X86_AT(c, 0x1aa5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), c.r[0]);
    // 001aac  mov dword ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x1aacu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 001ab7  jmp 0xb9a0
    X86_AT(c, 0x1ab7u);
    goto L_b9a0;
L_b9a0:
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
    x86_fault(c, 0x1a9eu, "ran off the end of a function");
}
void f_00001aa5(X86Cpu& c) {
    X86_TICK(c, 11);
    // 001aa5  mov dword ptr gs:[ebp + 0x300], eax
    X86_AT(c, 0x1aa5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), c.r[0]);
    // 001aac  mov dword ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x1aacu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 001ab7  jmp 0xb9a0
    X86_AT(c, 0x1ab7u);
    goto L_b9a0;
L_b9a0:
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
    x86_fault(c, 0x1aa5u, "ran off the end of a function");
}
void f_00001aac(X86Cpu& c) {
    X86_TICK(c, 9);
    // 001aac  mov dword ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x1aacu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 001ab7  jmp 0xb9a0
    X86_AT(c, 0x1ab7u);
    goto L_b9a0;
L_b9a0:
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
    x86_fault(c, 0x1aacu, "ran off the end of a function");
}
void f_00001ab7(X86Cpu& c) {
    X86_TICK(c, 7);
    // 001ab7  jmp 0xb9a0
    X86_AT(c, 0x1ab7u);
    goto L_b9a0;
L_b9a0:
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
    x86_fault(c, 0x1ab7u, "ran off the end of a function");
}
void f_00001abc(X86Cpu& c) {
    X86_TICK(c, 19);
    // 001abc  mov eax, dword ptr [esi]
    X86_AT(c, 0x1abcu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 001abe  mov ebx, dword ptr [esi + 4]
    X86_AT(c, 0x1abeu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)));
    // 001ac1  mov ecx, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x1ac1u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 001ac5  cmp ax, bx
    X86_AT(c, 0x1ac5u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001ac8  jle 0x1acc
    X86_AT(c, 0x1ac8u);
    if (x86_cc(c, 14)) { goto L_1acc; }
    X86_TICK(c, 3);
    // 001aca  xchg bx, ax
    X86_AT(c, 0x1acau);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_1acc:
    X86_TICK(c, 7);
    // 001acc  test ah, ah
    X86_AT(c, 0x1accu);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
    // 001ace  jge 0x1ad3
    X86_AT(c, 0x1aceu);
    if (x86_cc(c, 13)) { goto L_1ad3; }
    X86_TICK(c, 2);
    // 001ad0  sub ax, ax
    X86_AT(c, 0x1ad0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_1ad3:
    X86_TICK(c, 7);
    // 001ad3  cmp cx, ax
    X86_AT(c, 0x1ad3u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 001ad6  jge 0x1adb
    X86_AT(c, 0x1ad6u);
    if (x86_cc(c, 13)) { goto L_1adb; }
    X86_TICK(c, 2);
    // 001ad8  mov ax, cx
    X86_AT(c, 0x1ad8u);
    s16(c, 0, (c.r[1] & 0xFFFFu));
L_1adb:
    X86_TICK(c, 9);
    // 001adb  mov word ptr gs:[ebp + 0x28], ax
    X86_AT(c, 0x1adbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), (c.r[0] & 0xFFFFu));
    // 001ae0  test bh, bh
    X86_AT(c, 0x1ae0u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 001ae2  jge 0x1ae7
    X86_AT(c, 0x1ae2u);
    if (x86_cc(c, 13)) { goto L_1ae7; }
    X86_TICK(c, 2);
    // 001ae4  sub bx, bx
    X86_AT(c, 0x1ae4u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_1ae7:
    X86_TICK(c, 7);
    // 001ae7  cmp cx, bx
    X86_AT(c, 0x1ae7u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001aea  jge 0x1aef
    X86_AT(c, 0x1aeau);
    if (x86_cc(c, 13)) { goto L_1aef; }
    X86_TICK(c, 2);
    // 001aec  mov bx, cx
    X86_AT(c, 0x1aecu);
    s16(c, 3, (c.r[1] & 0xFFFFu));
L_1aef:
    X86_TICK(c, 18);
    // 001aef  mov word ptr gs:[ebp + 0x2c], bx
    X86_AT(c, 0x1aefu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), (c.r[3] & 0xFFFFu));
    // 001af4  shr eax, 0x10
    X86_AT(c, 0x1af4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 001af7  shr ebx, 0x10
    X86_AT(c, 0x1af7u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 001afa  shr ecx, 0x10
    X86_AT(c, 0x1afau);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 001afd  cmp ax, bx
    X86_AT(c, 0x1afdu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001b00  jle 0x1b04
    X86_AT(c, 0x1b00u);
    if (x86_cc(c, 14)) { goto L_1b04; }
    X86_TICK(c, 3);
    // 001b02  xchg bx, ax
    X86_AT(c, 0x1b02u);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_1b04:
    X86_TICK(c, 7);
    // 001b04  test ah, ah
    X86_AT(c, 0x1b04u);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
    // 001b06  jge 0x1b0a
    X86_AT(c, 0x1b06u);
    if (x86_cc(c, 13)) { goto L_1b0a; }
    X86_TICK(c, 2);
    // 001b08  sub eax, eax
    X86_AT(c, 0x1b08u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_1b0a:
    X86_TICK(c, 7);
    // 001b0a  cmp cx, ax
    X86_AT(c, 0x1b0au);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 001b0d  jge 0x1b12
    X86_AT(c, 0x1b0du);
    if (x86_cc(c, 13)) { goto L_1b12; }
    X86_TICK(c, 2);
    // 001b0f  mov ax, cx
    X86_AT(c, 0x1b0fu);
    s16(c, 0, (c.r[1] & 0xFFFFu));
L_1b12:
    X86_TICK(c, 9);
    // 001b12  mov word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x1b12u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au)), (c.r[0] & 0xFFFFu));
    // 001b17  test bh, bh
    X86_AT(c, 0x1b17u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 001b19  jge 0x1b1d
    X86_AT(c, 0x1b19u);
    if (x86_cc(c, 13)) { goto L_1b1d; }
    X86_TICK(c, 2);
    // 001b1b  sub ebx, ebx
    X86_AT(c, 0x1b1bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_1b1d:
    X86_TICK(c, 7);
    // 001b1d  cmp cx, bx
    X86_AT(c, 0x1b1du);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001b20  jge 0x1b25
    X86_AT(c, 0x1b20u);
    if (x86_cc(c, 13)) { goto L_1b25; }
    X86_TICK(c, 2);
    // 001b22  mov bx, cx
    X86_AT(c, 0x1b22u);
    s16(c, 3, (c.r[1] & 0xFFFFu));
L_1b25:
    X86_TICK(c, 12);
    // 001b25  mov word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0x1b25u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu)), (c.r[3] & 0xFFFFu));
    // 001b2a  ret 
    X86_AT(c, 0x1b2au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1abcu, "ran off the end of a function");
}
void f_00001abe(X86Cpu& c) {
    X86_TICK(c, 15);
    // 001abe  mov ebx, dword ptr [esi + 4]
    X86_AT(c, 0x1abeu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)));
    // 001ac1  mov ecx, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x1ac1u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 001ac5  cmp ax, bx
    X86_AT(c, 0x1ac5u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001ac8  jle 0x1acc
    X86_AT(c, 0x1ac8u);
    if (x86_cc(c, 14)) { goto L_1acc; }
    X86_TICK(c, 3);
    // 001aca  xchg bx, ax
    X86_AT(c, 0x1acau);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_1acc:
    X86_TICK(c, 7);
    // 001acc  test ah, ah
    X86_AT(c, 0x1accu);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
    // 001ace  jge 0x1ad3
    X86_AT(c, 0x1aceu);
    if (x86_cc(c, 13)) { goto L_1ad3; }
    X86_TICK(c, 2);
    // 001ad0  sub ax, ax
    X86_AT(c, 0x1ad0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_1ad3:
    X86_TICK(c, 7);
    // 001ad3  cmp cx, ax
    X86_AT(c, 0x1ad3u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 001ad6  jge 0x1adb
    X86_AT(c, 0x1ad6u);
    if (x86_cc(c, 13)) { goto L_1adb; }
    X86_TICK(c, 2);
    // 001ad8  mov ax, cx
    X86_AT(c, 0x1ad8u);
    s16(c, 0, (c.r[1] & 0xFFFFu));
L_1adb:
    X86_TICK(c, 9);
    // 001adb  mov word ptr gs:[ebp + 0x28], ax
    X86_AT(c, 0x1adbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), (c.r[0] & 0xFFFFu));
    // 001ae0  test bh, bh
    X86_AT(c, 0x1ae0u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 001ae2  jge 0x1ae7
    X86_AT(c, 0x1ae2u);
    if (x86_cc(c, 13)) { goto L_1ae7; }
    X86_TICK(c, 2);
    // 001ae4  sub bx, bx
    X86_AT(c, 0x1ae4u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_1ae7:
    X86_TICK(c, 7);
    // 001ae7  cmp cx, bx
    X86_AT(c, 0x1ae7u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001aea  jge 0x1aef
    X86_AT(c, 0x1aeau);
    if (x86_cc(c, 13)) { goto L_1aef; }
    X86_TICK(c, 2);
    // 001aec  mov bx, cx
    X86_AT(c, 0x1aecu);
    s16(c, 3, (c.r[1] & 0xFFFFu));
L_1aef:
    X86_TICK(c, 18);
    // 001aef  mov word ptr gs:[ebp + 0x2c], bx
    X86_AT(c, 0x1aefu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), (c.r[3] & 0xFFFFu));
    // 001af4  shr eax, 0x10
    X86_AT(c, 0x1af4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 001af7  shr ebx, 0x10
    X86_AT(c, 0x1af7u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 001afa  shr ecx, 0x10
    X86_AT(c, 0x1afau);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 001afd  cmp ax, bx
    X86_AT(c, 0x1afdu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001b00  jle 0x1b04
    X86_AT(c, 0x1b00u);
    if (x86_cc(c, 14)) { goto L_1b04; }
    X86_TICK(c, 3);
    // 001b02  xchg bx, ax
    X86_AT(c, 0x1b02u);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_1b04:
    X86_TICK(c, 7);
    // 001b04  test ah, ah
    X86_AT(c, 0x1b04u);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
    // 001b06  jge 0x1b0a
    X86_AT(c, 0x1b06u);
    if (x86_cc(c, 13)) { goto L_1b0a; }
    X86_TICK(c, 2);
    // 001b08  sub eax, eax
    X86_AT(c, 0x1b08u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_1b0a:
    X86_TICK(c, 7);
    // 001b0a  cmp cx, ax
    X86_AT(c, 0x1b0au);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 001b0d  jge 0x1b12
    X86_AT(c, 0x1b0du);
    if (x86_cc(c, 13)) { goto L_1b12; }
    X86_TICK(c, 2);
    // 001b0f  mov ax, cx
    X86_AT(c, 0x1b0fu);
    s16(c, 0, (c.r[1] & 0xFFFFu));
L_1b12:
    X86_TICK(c, 9);
    // 001b12  mov word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x1b12u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au)), (c.r[0] & 0xFFFFu));
    // 001b17  test bh, bh
    X86_AT(c, 0x1b17u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 001b19  jge 0x1b1d
    X86_AT(c, 0x1b19u);
    if (x86_cc(c, 13)) { goto L_1b1d; }
    X86_TICK(c, 2);
    // 001b1b  sub ebx, ebx
    X86_AT(c, 0x1b1bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_1b1d:
    X86_TICK(c, 7);
    // 001b1d  cmp cx, bx
    X86_AT(c, 0x1b1du);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001b20  jge 0x1b25
    X86_AT(c, 0x1b20u);
    if (x86_cc(c, 13)) { goto L_1b25; }
    X86_TICK(c, 2);
    // 001b22  mov bx, cx
    X86_AT(c, 0x1b22u);
    s16(c, 3, (c.r[1] & 0xFFFFu));
L_1b25:
    X86_TICK(c, 12);
    // 001b25  mov word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0x1b25u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu)), (c.r[3] & 0xFFFFu));
    // 001b2a  ret 
    X86_AT(c, 0x1b2au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1abeu, "ran off the end of a function");
}
void f_00001ac1(X86Cpu& c) {
    X86_TICK(c, 11);
    // 001ac1  mov ecx, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x1ac1u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 001ac5  cmp ax, bx
    X86_AT(c, 0x1ac5u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001ac8  jle 0x1acc
    X86_AT(c, 0x1ac8u);
    if (x86_cc(c, 14)) { goto L_1acc; }
    X86_TICK(c, 3);
    // 001aca  xchg bx, ax
    X86_AT(c, 0x1acau);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_1acc:
    X86_TICK(c, 7);
    // 001acc  test ah, ah
    X86_AT(c, 0x1accu);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
    // 001ace  jge 0x1ad3
    X86_AT(c, 0x1aceu);
    if (x86_cc(c, 13)) { goto L_1ad3; }
    X86_TICK(c, 2);
    // 001ad0  sub ax, ax
    X86_AT(c, 0x1ad0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_1ad3:
    X86_TICK(c, 7);
    // 001ad3  cmp cx, ax
    X86_AT(c, 0x1ad3u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 001ad6  jge 0x1adb
    X86_AT(c, 0x1ad6u);
    if (x86_cc(c, 13)) { goto L_1adb; }
    X86_TICK(c, 2);
    // 001ad8  mov ax, cx
    X86_AT(c, 0x1ad8u);
    s16(c, 0, (c.r[1] & 0xFFFFu));
L_1adb:
    X86_TICK(c, 9);
    // 001adb  mov word ptr gs:[ebp + 0x28], ax
    X86_AT(c, 0x1adbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), (c.r[0] & 0xFFFFu));
    // 001ae0  test bh, bh
    X86_AT(c, 0x1ae0u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 001ae2  jge 0x1ae7
    X86_AT(c, 0x1ae2u);
    if (x86_cc(c, 13)) { goto L_1ae7; }
    X86_TICK(c, 2);
    // 001ae4  sub bx, bx
    X86_AT(c, 0x1ae4u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_1ae7:
    X86_TICK(c, 7);
    // 001ae7  cmp cx, bx
    X86_AT(c, 0x1ae7u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001aea  jge 0x1aef
    X86_AT(c, 0x1aeau);
    if (x86_cc(c, 13)) { goto L_1aef; }
    X86_TICK(c, 2);
    // 001aec  mov bx, cx
    X86_AT(c, 0x1aecu);
    s16(c, 3, (c.r[1] & 0xFFFFu));
L_1aef:
    X86_TICK(c, 18);
    // 001aef  mov word ptr gs:[ebp + 0x2c], bx
    X86_AT(c, 0x1aefu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), (c.r[3] & 0xFFFFu));
    // 001af4  shr eax, 0x10
    X86_AT(c, 0x1af4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 001af7  shr ebx, 0x10
    X86_AT(c, 0x1af7u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 001afa  shr ecx, 0x10
    X86_AT(c, 0x1afau);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 001afd  cmp ax, bx
    X86_AT(c, 0x1afdu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001b00  jle 0x1b04
    X86_AT(c, 0x1b00u);
    if (x86_cc(c, 14)) { goto L_1b04; }
    X86_TICK(c, 3);
    // 001b02  xchg bx, ax
    X86_AT(c, 0x1b02u);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_1b04:
    X86_TICK(c, 7);
    // 001b04  test ah, ah
    X86_AT(c, 0x1b04u);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
    // 001b06  jge 0x1b0a
    X86_AT(c, 0x1b06u);
    if (x86_cc(c, 13)) { goto L_1b0a; }
    X86_TICK(c, 2);
    // 001b08  sub eax, eax
    X86_AT(c, 0x1b08u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_1b0a:
    X86_TICK(c, 7);
    // 001b0a  cmp cx, ax
    X86_AT(c, 0x1b0au);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 001b0d  jge 0x1b12
    X86_AT(c, 0x1b0du);
    if (x86_cc(c, 13)) { goto L_1b12; }
    X86_TICK(c, 2);
    // 001b0f  mov ax, cx
    X86_AT(c, 0x1b0fu);
    s16(c, 0, (c.r[1] & 0xFFFFu));
L_1b12:
    X86_TICK(c, 9);
    // 001b12  mov word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x1b12u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au)), (c.r[0] & 0xFFFFu));
    // 001b17  test bh, bh
    X86_AT(c, 0x1b17u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 001b19  jge 0x1b1d
    X86_AT(c, 0x1b19u);
    if (x86_cc(c, 13)) { goto L_1b1d; }
    X86_TICK(c, 2);
    // 001b1b  sub ebx, ebx
    X86_AT(c, 0x1b1bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_1b1d:
    X86_TICK(c, 7);
    // 001b1d  cmp cx, bx
    X86_AT(c, 0x1b1du);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001b20  jge 0x1b25
    X86_AT(c, 0x1b20u);
    if (x86_cc(c, 13)) { goto L_1b25; }
    X86_TICK(c, 2);
    // 001b22  mov bx, cx
    X86_AT(c, 0x1b22u);
    s16(c, 3, (c.r[1] & 0xFFFFu));
L_1b25:
    X86_TICK(c, 12);
    // 001b25  mov word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0x1b25u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu)), (c.r[3] & 0xFFFFu));
    // 001b2a  ret 
    X86_AT(c, 0x1b2au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1ac1u, "ran off the end of a function");
}
void f_00001ac5(X86Cpu& c) {
    X86_TICK(c, 7);
    // 001ac5  cmp ax, bx
    X86_AT(c, 0x1ac5u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001ac8  jle 0x1acc
    X86_AT(c, 0x1ac8u);
    if (x86_cc(c, 14)) { goto L_1acc; }
    X86_TICK(c, 3);
    // 001aca  xchg bx, ax
    X86_AT(c, 0x1acau);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_1acc:
    X86_TICK(c, 7);
    // 001acc  test ah, ah
    X86_AT(c, 0x1accu);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
    // 001ace  jge 0x1ad3
    X86_AT(c, 0x1aceu);
    if (x86_cc(c, 13)) { goto L_1ad3; }
    X86_TICK(c, 2);
    // 001ad0  sub ax, ax
    X86_AT(c, 0x1ad0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_1ad3:
    X86_TICK(c, 7);
    // 001ad3  cmp cx, ax
    X86_AT(c, 0x1ad3u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 001ad6  jge 0x1adb
    X86_AT(c, 0x1ad6u);
    if (x86_cc(c, 13)) { goto L_1adb; }
    X86_TICK(c, 2);
    // 001ad8  mov ax, cx
    X86_AT(c, 0x1ad8u);
    s16(c, 0, (c.r[1] & 0xFFFFu));
L_1adb:
    X86_TICK(c, 9);
    // 001adb  mov word ptr gs:[ebp + 0x28], ax
    X86_AT(c, 0x1adbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), (c.r[0] & 0xFFFFu));
    // 001ae0  test bh, bh
    X86_AT(c, 0x1ae0u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 001ae2  jge 0x1ae7
    X86_AT(c, 0x1ae2u);
    if (x86_cc(c, 13)) { goto L_1ae7; }
    X86_TICK(c, 2);
    // 001ae4  sub bx, bx
    X86_AT(c, 0x1ae4u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_1ae7:
    X86_TICK(c, 7);
    // 001ae7  cmp cx, bx
    X86_AT(c, 0x1ae7u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001aea  jge 0x1aef
    X86_AT(c, 0x1aeau);
    if (x86_cc(c, 13)) { goto L_1aef; }
    X86_TICK(c, 2);
    // 001aec  mov bx, cx
    X86_AT(c, 0x1aecu);
    s16(c, 3, (c.r[1] & 0xFFFFu));
L_1aef:
    X86_TICK(c, 18);
    // 001aef  mov word ptr gs:[ebp + 0x2c], bx
    X86_AT(c, 0x1aefu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), (c.r[3] & 0xFFFFu));
    // 001af4  shr eax, 0x10
    X86_AT(c, 0x1af4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 001af7  shr ebx, 0x10
    X86_AT(c, 0x1af7u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 001afa  shr ecx, 0x10
    X86_AT(c, 0x1afau);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 001afd  cmp ax, bx
    X86_AT(c, 0x1afdu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001b00  jle 0x1b04
    X86_AT(c, 0x1b00u);
    if (x86_cc(c, 14)) { goto L_1b04; }
    X86_TICK(c, 3);
    // 001b02  xchg bx, ax
    X86_AT(c, 0x1b02u);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_1b04:
    X86_TICK(c, 7);
    // 001b04  test ah, ah
    X86_AT(c, 0x1b04u);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
    // 001b06  jge 0x1b0a
    X86_AT(c, 0x1b06u);
    if (x86_cc(c, 13)) { goto L_1b0a; }
    X86_TICK(c, 2);
    // 001b08  sub eax, eax
    X86_AT(c, 0x1b08u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_1b0a:
    X86_TICK(c, 7);
    // 001b0a  cmp cx, ax
    X86_AT(c, 0x1b0au);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 001b0d  jge 0x1b12
    X86_AT(c, 0x1b0du);
    if (x86_cc(c, 13)) { goto L_1b12; }
    X86_TICK(c, 2);
    // 001b0f  mov ax, cx
    X86_AT(c, 0x1b0fu);
    s16(c, 0, (c.r[1] & 0xFFFFu));
L_1b12:
    X86_TICK(c, 9);
    // 001b12  mov word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x1b12u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au)), (c.r[0] & 0xFFFFu));
    // 001b17  test bh, bh
    X86_AT(c, 0x1b17u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 001b19  jge 0x1b1d
    X86_AT(c, 0x1b19u);
    if (x86_cc(c, 13)) { goto L_1b1d; }
    X86_TICK(c, 2);
    // 001b1b  sub ebx, ebx
    X86_AT(c, 0x1b1bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_1b1d:
    X86_TICK(c, 7);
    // 001b1d  cmp cx, bx
    X86_AT(c, 0x1b1du);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001b20  jge 0x1b25
    X86_AT(c, 0x1b20u);
    if (x86_cc(c, 13)) { goto L_1b25; }
    X86_TICK(c, 2);
    // 001b22  mov bx, cx
    X86_AT(c, 0x1b22u);
    s16(c, 3, (c.r[1] & 0xFFFFu));
L_1b25:
    X86_TICK(c, 12);
    // 001b25  mov word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0x1b25u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu)), (c.r[3] & 0xFFFFu));
    // 001b2a  ret 
    X86_AT(c, 0x1b2au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1ac5u, "ran off the end of a function");
}
void f_00001ac8(X86Cpu& c) {
    X86_TICK(c, 5);
    // 001ac8  jle 0x1acc
    X86_AT(c, 0x1ac8u);
    if (x86_cc(c, 14)) { goto L_1acc; }
    X86_TICK(c, 3);
    // 001aca  xchg bx, ax
    X86_AT(c, 0x1acau);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_1acc:
    X86_TICK(c, 7);
    // 001acc  test ah, ah
    X86_AT(c, 0x1accu);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
    // 001ace  jge 0x1ad3
    X86_AT(c, 0x1aceu);
    if (x86_cc(c, 13)) { goto L_1ad3; }
    X86_TICK(c, 2);
    // 001ad0  sub ax, ax
    X86_AT(c, 0x1ad0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_1ad3:
    X86_TICK(c, 7);
    // 001ad3  cmp cx, ax
    X86_AT(c, 0x1ad3u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 001ad6  jge 0x1adb
    X86_AT(c, 0x1ad6u);
    if (x86_cc(c, 13)) { goto L_1adb; }
    X86_TICK(c, 2);
    // 001ad8  mov ax, cx
    X86_AT(c, 0x1ad8u);
    s16(c, 0, (c.r[1] & 0xFFFFu));
L_1adb:
    X86_TICK(c, 9);
    // 001adb  mov word ptr gs:[ebp + 0x28], ax
    X86_AT(c, 0x1adbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), (c.r[0] & 0xFFFFu));
    // 001ae0  test bh, bh
    X86_AT(c, 0x1ae0u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 001ae2  jge 0x1ae7
    X86_AT(c, 0x1ae2u);
    if (x86_cc(c, 13)) { goto L_1ae7; }
    X86_TICK(c, 2);
    // 001ae4  sub bx, bx
    X86_AT(c, 0x1ae4u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_1ae7:
    X86_TICK(c, 7);
    // 001ae7  cmp cx, bx
    X86_AT(c, 0x1ae7u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001aea  jge 0x1aef
    X86_AT(c, 0x1aeau);
    if (x86_cc(c, 13)) { goto L_1aef; }
    X86_TICK(c, 2);
    // 001aec  mov bx, cx
    X86_AT(c, 0x1aecu);
    s16(c, 3, (c.r[1] & 0xFFFFu));
L_1aef:
    X86_TICK(c, 18);
    // 001aef  mov word ptr gs:[ebp + 0x2c], bx
    X86_AT(c, 0x1aefu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), (c.r[3] & 0xFFFFu));
    // 001af4  shr eax, 0x10
    X86_AT(c, 0x1af4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 001af7  shr ebx, 0x10
    X86_AT(c, 0x1af7u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 001afa  shr ecx, 0x10
    X86_AT(c, 0x1afau);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 001afd  cmp ax, bx
    X86_AT(c, 0x1afdu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001b00  jle 0x1b04
    X86_AT(c, 0x1b00u);
    if (x86_cc(c, 14)) { goto L_1b04; }
    X86_TICK(c, 3);
    // 001b02  xchg bx, ax
    X86_AT(c, 0x1b02u);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_1b04:
    X86_TICK(c, 7);
    // 001b04  test ah, ah
    X86_AT(c, 0x1b04u);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
    // 001b06  jge 0x1b0a
    X86_AT(c, 0x1b06u);
    if (x86_cc(c, 13)) { goto L_1b0a; }
    X86_TICK(c, 2);
    // 001b08  sub eax, eax
    X86_AT(c, 0x1b08u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_1b0a:
    X86_TICK(c, 7);
    // 001b0a  cmp cx, ax
    X86_AT(c, 0x1b0au);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 001b0d  jge 0x1b12
    X86_AT(c, 0x1b0du);
    if (x86_cc(c, 13)) { goto L_1b12; }
    X86_TICK(c, 2);
    // 001b0f  mov ax, cx
    X86_AT(c, 0x1b0fu);
    s16(c, 0, (c.r[1] & 0xFFFFu));
L_1b12:
    X86_TICK(c, 9);
    // 001b12  mov word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x1b12u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au)), (c.r[0] & 0xFFFFu));
    // 001b17  test bh, bh
    X86_AT(c, 0x1b17u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 001b19  jge 0x1b1d
    X86_AT(c, 0x1b19u);
    if (x86_cc(c, 13)) { goto L_1b1d; }
    X86_TICK(c, 2);
    // 001b1b  sub ebx, ebx
    X86_AT(c, 0x1b1bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_1b1d:
    X86_TICK(c, 7);
    // 001b1d  cmp cx, bx
    X86_AT(c, 0x1b1du);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001b20  jge 0x1b25
    X86_AT(c, 0x1b20u);
    if (x86_cc(c, 13)) { goto L_1b25; }
    X86_TICK(c, 2);
    // 001b22  mov bx, cx
    X86_AT(c, 0x1b22u);
    s16(c, 3, (c.r[1] & 0xFFFFu));
L_1b25:
    X86_TICK(c, 12);
    // 001b25  mov word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0x1b25u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu)), (c.r[3] & 0xFFFFu));
    // 001b2a  ret 
    X86_AT(c, 0x1b2au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1ac8u, "ran off the end of a function");
}
void f_00001acc(X86Cpu& c) {
    X86_TICK(c, 7);
    // 001acc  test ah, ah
    X86_AT(c, 0x1accu);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
    // 001ace  jge 0x1ad3
    X86_AT(c, 0x1aceu);
    if (x86_cc(c, 13)) { goto L_1ad3; }
    X86_TICK(c, 2);
    // 001ad0  sub ax, ax
    X86_AT(c, 0x1ad0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_1ad3:
    X86_TICK(c, 7);
    // 001ad3  cmp cx, ax
    X86_AT(c, 0x1ad3u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 001ad6  jge 0x1adb
    X86_AT(c, 0x1ad6u);
    if (x86_cc(c, 13)) { goto L_1adb; }
    X86_TICK(c, 2);
    // 001ad8  mov ax, cx
    X86_AT(c, 0x1ad8u);
    s16(c, 0, (c.r[1] & 0xFFFFu));
L_1adb:
    X86_TICK(c, 9);
    // 001adb  mov word ptr gs:[ebp + 0x28], ax
    X86_AT(c, 0x1adbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), (c.r[0] & 0xFFFFu));
    // 001ae0  test bh, bh
    X86_AT(c, 0x1ae0u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 001ae2  jge 0x1ae7
    X86_AT(c, 0x1ae2u);
    if (x86_cc(c, 13)) { goto L_1ae7; }
    X86_TICK(c, 2);
    // 001ae4  sub bx, bx
    X86_AT(c, 0x1ae4u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_1ae7:
    X86_TICK(c, 7);
    // 001ae7  cmp cx, bx
    X86_AT(c, 0x1ae7u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001aea  jge 0x1aef
    X86_AT(c, 0x1aeau);
    if (x86_cc(c, 13)) { goto L_1aef; }
    X86_TICK(c, 2);
    // 001aec  mov bx, cx
    X86_AT(c, 0x1aecu);
    s16(c, 3, (c.r[1] & 0xFFFFu));
L_1aef:
    X86_TICK(c, 18);
    // 001aef  mov word ptr gs:[ebp + 0x2c], bx
    X86_AT(c, 0x1aefu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), (c.r[3] & 0xFFFFu));
    // 001af4  shr eax, 0x10
    X86_AT(c, 0x1af4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 001af7  shr ebx, 0x10
    X86_AT(c, 0x1af7u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 001afa  shr ecx, 0x10
    X86_AT(c, 0x1afau);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 001afd  cmp ax, bx
    X86_AT(c, 0x1afdu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001b00  jle 0x1b04
    X86_AT(c, 0x1b00u);
    if (x86_cc(c, 14)) { goto L_1b04; }
    X86_TICK(c, 3);
    // 001b02  xchg bx, ax
    X86_AT(c, 0x1b02u);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_1b04:
    X86_TICK(c, 7);
    // 001b04  test ah, ah
    X86_AT(c, 0x1b04u);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
    // 001b06  jge 0x1b0a
    X86_AT(c, 0x1b06u);
    if (x86_cc(c, 13)) { goto L_1b0a; }
    X86_TICK(c, 2);
    // 001b08  sub eax, eax
    X86_AT(c, 0x1b08u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_1b0a:
    X86_TICK(c, 7);
    // 001b0a  cmp cx, ax
    X86_AT(c, 0x1b0au);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 001b0d  jge 0x1b12
    X86_AT(c, 0x1b0du);
    if (x86_cc(c, 13)) { goto L_1b12; }
    X86_TICK(c, 2);
    // 001b0f  mov ax, cx
    X86_AT(c, 0x1b0fu);
    s16(c, 0, (c.r[1] & 0xFFFFu));
L_1b12:
    X86_TICK(c, 9);
    // 001b12  mov word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x1b12u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au)), (c.r[0] & 0xFFFFu));
    // 001b17  test bh, bh
    X86_AT(c, 0x1b17u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 001b19  jge 0x1b1d
    X86_AT(c, 0x1b19u);
    if (x86_cc(c, 13)) { goto L_1b1d; }
    X86_TICK(c, 2);
    // 001b1b  sub ebx, ebx
    X86_AT(c, 0x1b1bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_1b1d:
    X86_TICK(c, 7);
    // 001b1d  cmp cx, bx
    X86_AT(c, 0x1b1du);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001b20  jge 0x1b25
    X86_AT(c, 0x1b20u);
    if (x86_cc(c, 13)) { goto L_1b25; }
    X86_TICK(c, 2);
    // 001b22  mov bx, cx
    X86_AT(c, 0x1b22u);
    s16(c, 3, (c.r[1] & 0xFFFFu));
L_1b25:
    X86_TICK(c, 12);
    // 001b25  mov word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0x1b25u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu)), (c.r[3] & 0xFFFFu));
    // 001b2a  ret 
    X86_AT(c, 0x1b2au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1accu, "ran off the end of a function");
}
void f_00001ace(X86Cpu& c) {
    X86_TICK(c, 5);
    // 001ace  jge 0x1ad3
    X86_AT(c, 0x1aceu);
    if (x86_cc(c, 13)) { goto L_1ad3; }
    X86_TICK(c, 2);
    // 001ad0  sub ax, ax
    X86_AT(c, 0x1ad0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_1ad3:
    X86_TICK(c, 7);
    // 001ad3  cmp cx, ax
    X86_AT(c, 0x1ad3u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 001ad6  jge 0x1adb
    X86_AT(c, 0x1ad6u);
    if (x86_cc(c, 13)) { goto L_1adb; }
    X86_TICK(c, 2);
    // 001ad8  mov ax, cx
    X86_AT(c, 0x1ad8u);
    s16(c, 0, (c.r[1] & 0xFFFFu));
L_1adb:
    X86_TICK(c, 9);
    // 001adb  mov word ptr gs:[ebp + 0x28], ax
    X86_AT(c, 0x1adbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), (c.r[0] & 0xFFFFu));
    // 001ae0  test bh, bh
    X86_AT(c, 0x1ae0u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 001ae2  jge 0x1ae7
    X86_AT(c, 0x1ae2u);
    if (x86_cc(c, 13)) { goto L_1ae7; }
    X86_TICK(c, 2);
    // 001ae4  sub bx, bx
    X86_AT(c, 0x1ae4u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_1ae7:
    X86_TICK(c, 7);
    // 001ae7  cmp cx, bx
    X86_AT(c, 0x1ae7u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001aea  jge 0x1aef
    X86_AT(c, 0x1aeau);
    if (x86_cc(c, 13)) { goto L_1aef; }
    X86_TICK(c, 2);
    // 001aec  mov bx, cx
    X86_AT(c, 0x1aecu);
    s16(c, 3, (c.r[1] & 0xFFFFu));
L_1aef:
    X86_TICK(c, 18);
    // 001aef  mov word ptr gs:[ebp + 0x2c], bx
    X86_AT(c, 0x1aefu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), (c.r[3] & 0xFFFFu));
    // 001af4  shr eax, 0x10
    X86_AT(c, 0x1af4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 001af7  shr ebx, 0x10
    X86_AT(c, 0x1af7u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 001afa  shr ecx, 0x10
    X86_AT(c, 0x1afau);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 001afd  cmp ax, bx
    X86_AT(c, 0x1afdu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001b00  jle 0x1b04
    X86_AT(c, 0x1b00u);
    if (x86_cc(c, 14)) { goto L_1b04; }
    X86_TICK(c, 3);
    // 001b02  xchg bx, ax
    X86_AT(c, 0x1b02u);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_1b04:
    X86_TICK(c, 7);
    // 001b04  test ah, ah
    X86_AT(c, 0x1b04u);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
    // 001b06  jge 0x1b0a
    X86_AT(c, 0x1b06u);
    if (x86_cc(c, 13)) { goto L_1b0a; }
    X86_TICK(c, 2);
    // 001b08  sub eax, eax
    X86_AT(c, 0x1b08u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_1b0a:
    X86_TICK(c, 7);
    // 001b0a  cmp cx, ax
    X86_AT(c, 0x1b0au);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 001b0d  jge 0x1b12
    X86_AT(c, 0x1b0du);
    if (x86_cc(c, 13)) { goto L_1b12; }
    X86_TICK(c, 2);
    // 001b0f  mov ax, cx
    X86_AT(c, 0x1b0fu);
    s16(c, 0, (c.r[1] & 0xFFFFu));
L_1b12:
    X86_TICK(c, 9);
    // 001b12  mov word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x1b12u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au)), (c.r[0] & 0xFFFFu));
    // 001b17  test bh, bh
    X86_AT(c, 0x1b17u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 001b19  jge 0x1b1d
    X86_AT(c, 0x1b19u);
    if (x86_cc(c, 13)) { goto L_1b1d; }
    X86_TICK(c, 2);
    // 001b1b  sub ebx, ebx
    X86_AT(c, 0x1b1bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_1b1d:
    X86_TICK(c, 7);
    // 001b1d  cmp cx, bx
    X86_AT(c, 0x1b1du);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001b20  jge 0x1b25
    X86_AT(c, 0x1b20u);
    if (x86_cc(c, 13)) { goto L_1b25; }
    X86_TICK(c, 2);
    // 001b22  mov bx, cx
    X86_AT(c, 0x1b22u);
    s16(c, 3, (c.r[1] & 0xFFFFu));
L_1b25:
    X86_TICK(c, 12);
    // 001b25  mov word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0x1b25u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu)), (c.r[3] & 0xFFFFu));
    // 001b2a  ret 
    X86_AT(c, 0x1b2au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1aceu, "ran off the end of a function");
}
void f_00001ad3(X86Cpu& c) {
    X86_TICK(c, 7);
    // 001ad3  cmp cx, ax
    X86_AT(c, 0x1ad3u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 001ad6  jge 0x1adb
    X86_AT(c, 0x1ad6u);
    if (x86_cc(c, 13)) { goto L_1adb; }
    X86_TICK(c, 2);
    // 001ad8  mov ax, cx
    X86_AT(c, 0x1ad8u);
    s16(c, 0, (c.r[1] & 0xFFFFu));
L_1adb:
    X86_TICK(c, 9);
    // 001adb  mov word ptr gs:[ebp + 0x28], ax
    X86_AT(c, 0x1adbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), (c.r[0] & 0xFFFFu));
    // 001ae0  test bh, bh
    X86_AT(c, 0x1ae0u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 001ae2  jge 0x1ae7
    X86_AT(c, 0x1ae2u);
    if (x86_cc(c, 13)) { goto L_1ae7; }
    X86_TICK(c, 2);
    // 001ae4  sub bx, bx
    X86_AT(c, 0x1ae4u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_1ae7:
    X86_TICK(c, 7);
    // 001ae7  cmp cx, bx
    X86_AT(c, 0x1ae7u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001aea  jge 0x1aef
    X86_AT(c, 0x1aeau);
    if (x86_cc(c, 13)) { goto L_1aef; }
    X86_TICK(c, 2);
    // 001aec  mov bx, cx
    X86_AT(c, 0x1aecu);
    s16(c, 3, (c.r[1] & 0xFFFFu));
L_1aef:
    X86_TICK(c, 18);
    // 001aef  mov word ptr gs:[ebp + 0x2c], bx
    X86_AT(c, 0x1aefu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), (c.r[3] & 0xFFFFu));
    // 001af4  shr eax, 0x10
    X86_AT(c, 0x1af4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 001af7  shr ebx, 0x10
    X86_AT(c, 0x1af7u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 001afa  shr ecx, 0x10
    X86_AT(c, 0x1afau);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 001afd  cmp ax, bx
    X86_AT(c, 0x1afdu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001b00  jle 0x1b04
    X86_AT(c, 0x1b00u);
    if (x86_cc(c, 14)) { goto L_1b04; }
    X86_TICK(c, 3);
    // 001b02  xchg bx, ax
    X86_AT(c, 0x1b02u);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_1b04:
    X86_TICK(c, 7);
    // 001b04  test ah, ah
    X86_AT(c, 0x1b04u);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
    // 001b06  jge 0x1b0a
    X86_AT(c, 0x1b06u);
    if (x86_cc(c, 13)) { goto L_1b0a; }
    X86_TICK(c, 2);
    // 001b08  sub eax, eax
    X86_AT(c, 0x1b08u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_1b0a:
    X86_TICK(c, 7);
    // 001b0a  cmp cx, ax
    X86_AT(c, 0x1b0au);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 001b0d  jge 0x1b12
    X86_AT(c, 0x1b0du);
    if (x86_cc(c, 13)) { goto L_1b12; }
    X86_TICK(c, 2);
    // 001b0f  mov ax, cx
    X86_AT(c, 0x1b0fu);
    s16(c, 0, (c.r[1] & 0xFFFFu));
L_1b12:
    X86_TICK(c, 9);
    // 001b12  mov word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x1b12u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au)), (c.r[0] & 0xFFFFu));
    // 001b17  test bh, bh
    X86_AT(c, 0x1b17u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 001b19  jge 0x1b1d
    X86_AT(c, 0x1b19u);
    if (x86_cc(c, 13)) { goto L_1b1d; }
    X86_TICK(c, 2);
    // 001b1b  sub ebx, ebx
    X86_AT(c, 0x1b1bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_1b1d:
    X86_TICK(c, 7);
    // 001b1d  cmp cx, bx
    X86_AT(c, 0x1b1du);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001b20  jge 0x1b25
    X86_AT(c, 0x1b20u);
    if (x86_cc(c, 13)) { goto L_1b25; }
    X86_TICK(c, 2);
    // 001b22  mov bx, cx
    X86_AT(c, 0x1b22u);
    s16(c, 3, (c.r[1] & 0xFFFFu));
L_1b25:
    X86_TICK(c, 12);
    // 001b25  mov word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0x1b25u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu)), (c.r[3] & 0xFFFFu));
    // 001b2a  ret 
    X86_AT(c, 0x1b2au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1ad3u, "ran off the end of a function");
}
void f_00001ad6(X86Cpu& c) {
    X86_TICK(c, 5);
    // 001ad6  jge 0x1adb
    X86_AT(c, 0x1ad6u);
    if (x86_cc(c, 13)) { goto L_1adb; }
    X86_TICK(c, 2);
    // 001ad8  mov ax, cx
    X86_AT(c, 0x1ad8u);
    s16(c, 0, (c.r[1] & 0xFFFFu));
L_1adb:
    X86_TICK(c, 9);
    // 001adb  mov word ptr gs:[ebp + 0x28], ax
    X86_AT(c, 0x1adbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), (c.r[0] & 0xFFFFu));
    // 001ae0  test bh, bh
    X86_AT(c, 0x1ae0u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 001ae2  jge 0x1ae7
    X86_AT(c, 0x1ae2u);
    if (x86_cc(c, 13)) { goto L_1ae7; }
    X86_TICK(c, 2);
    // 001ae4  sub bx, bx
    X86_AT(c, 0x1ae4u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_1ae7:
    X86_TICK(c, 7);
    // 001ae7  cmp cx, bx
    X86_AT(c, 0x1ae7u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001aea  jge 0x1aef
    X86_AT(c, 0x1aeau);
    if (x86_cc(c, 13)) { goto L_1aef; }
    X86_TICK(c, 2);
    // 001aec  mov bx, cx
    X86_AT(c, 0x1aecu);
    s16(c, 3, (c.r[1] & 0xFFFFu));
L_1aef:
    X86_TICK(c, 18);
    // 001aef  mov word ptr gs:[ebp + 0x2c], bx
    X86_AT(c, 0x1aefu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), (c.r[3] & 0xFFFFu));
    // 001af4  shr eax, 0x10
    X86_AT(c, 0x1af4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 001af7  shr ebx, 0x10
    X86_AT(c, 0x1af7u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 001afa  shr ecx, 0x10
    X86_AT(c, 0x1afau);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 001afd  cmp ax, bx
    X86_AT(c, 0x1afdu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001b00  jle 0x1b04
    X86_AT(c, 0x1b00u);
    if (x86_cc(c, 14)) { goto L_1b04; }
    X86_TICK(c, 3);
    // 001b02  xchg bx, ax
    X86_AT(c, 0x1b02u);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_1b04:
    X86_TICK(c, 7);
    // 001b04  test ah, ah
    X86_AT(c, 0x1b04u);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
    // 001b06  jge 0x1b0a
    X86_AT(c, 0x1b06u);
    if (x86_cc(c, 13)) { goto L_1b0a; }
    X86_TICK(c, 2);
    // 001b08  sub eax, eax
    X86_AT(c, 0x1b08u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_1b0a:
    X86_TICK(c, 7);
    // 001b0a  cmp cx, ax
    X86_AT(c, 0x1b0au);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 001b0d  jge 0x1b12
    X86_AT(c, 0x1b0du);
    if (x86_cc(c, 13)) { goto L_1b12; }
    X86_TICK(c, 2);
    // 001b0f  mov ax, cx
    X86_AT(c, 0x1b0fu);
    s16(c, 0, (c.r[1] & 0xFFFFu));
L_1b12:
    X86_TICK(c, 9);
    // 001b12  mov word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x1b12u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au)), (c.r[0] & 0xFFFFu));
    // 001b17  test bh, bh
    X86_AT(c, 0x1b17u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 001b19  jge 0x1b1d
    X86_AT(c, 0x1b19u);
    if (x86_cc(c, 13)) { goto L_1b1d; }
    X86_TICK(c, 2);
    // 001b1b  sub ebx, ebx
    X86_AT(c, 0x1b1bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_1b1d:
    X86_TICK(c, 7);
    // 001b1d  cmp cx, bx
    X86_AT(c, 0x1b1du);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001b20  jge 0x1b25
    X86_AT(c, 0x1b20u);
    if (x86_cc(c, 13)) { goto L_1b25; }
    X86_TICK(c, 2);
    // 001b22  mov bx, cx
    X86_AT(c, 0x1b22u);
    s16(c, 3, (c.r[1] & 0xFFFFu));
L_1b25:
    X86_TICK(c, 12);
    // 001b25  mov word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0x1b25u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu)), (c.r[3] & 0xFFFFu));
    // 001b2a  ret 
    X86_AT(c, 0x1b2au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1ad6u, "ran off the end of a function");
}
void f_00001adb(X86Cpu& c) {
    X86_TICK(c, 9);
    // 001adb  mov word ptr gs:[ebp + 0x28], ax
    X86_AT(c, 0x1adbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), (c.r[0] & 0xFFFFu));
    // 001ae0  test bh, bh
    X86_AT(c, 0x1ae0u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 001ae2  jge 0x1ae7
    X86_AT(c, 0x1ae2u);
    if (x86_cc(c, 13)) { goto L_1ae7; }
    X86_TICK(c, 2);
    // 001ae4  sub bx, bx
    X86_AT(c, 0x1ae4u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_1ae7:
    X86_TICK(c, 7);
    // 001ae7  cmp cx, bx
    X86_AT(c, 0x1ae7u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001aea  jge 0x1aef
    X86_AT(c, 0x1aeau);
    if (x86_cc(c, 13)) { goto L_1aef; }
    X86_TICK(c, 2);
    // 001aec  mov bx, cx
    X86_AT(c, 0x1aecu);
    s16(c, 3, (c.r[1] & 0xFFFFu));
L_1aef:
    X86_TICK(c, 18);
    // 001aef  mov word ptr gs:[ebp + 0x2c], bx
    X86_AT(c, 0x1aefu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), (c.r[3] & 0xFFFFu));
    // 001af4  shr eax, 0x10
    X86_AT(c, 0x1af4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 001af7  shr ebx, 0x10
    X86_AT(c, 0x1af7u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 001afa  shr ecx, 0x10
    X86_AT(c, 0x1afau);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 001afd  cmp ax, bx
    X86_AT(c, 0x1afdu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001b00  jle 0x1b04
    X86_AT(c, 0x1b00u);
    if (x86_cc(c, 14)) { goto L_1b04; }
    X86_TICK(c, 3);
    // 001b02  xchg bx, ax
    X86_AT(c, 0x1b02u);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_1b04:
    X86_TICK(c, 7);
    // 001b04  test ah, ah
    X86_AT(c, 0x1b04u);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
    // 001b06  jge 0x1b0a
    X86_AT(c, 0x1b06u);
    if (x86_cc(c, 13)) { goto L_1b0a; }
    X86_TICK(c, 2);
    // 001b08  sub eax, eax
    X86_AT(c, 0x1b08u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_1b0a:
    X86_TICK(c, 7);
    // 001b0a  cmp cx, ax
    X86_AT(c, 0x1b0au);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 001b0d  jge 0x1b12
    X86_AT(c, 0x1b0du);
    if (x86_cc(c, 13)) { goto L_1b12; }
    X86_TICK(c, 2);
    // 001b0f  mov ax, cx
    X86_AT(c, 0x1b0fu);
    s16(c, 0, (c.r[1] & 0xFFFFu));
L_1b12:
    X86_TICK(c, 9);
    // 001b12  mov word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x1b12u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au)), (c.r[0] & 0xFFFFu));
    // 001b17  test bh, bh
    X86_AT(c, 0x1b17u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 001b19  jge 0x1b1d
    X86_AT(c, 0x1b19u);
    if (x86_cc(c, 13)) { goto L_1b1d; }
    X86_TICK(c, 2);
    // 001b1b  sub ebx, ebx
    X86_AT(c, 0x1b1bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_1b1d:
    X86_TICK(c, 7);
    // 001b1d  cmp cx, bx
    X86_AT(c, 0x1b1du);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001b20  jge 0x1b25
    X86_AT(c, 0x1b20u);
    if (x86_cc(c, 13)) { goto L_1b25; }
    X86_TICK(c, 2);
    // 001b22  mov bx, cx
    X86_AT(c, 0x1b22u);
    s16(c, 3, (c.r[1] & 0xFFFFu));
L_1b25:
    X86_TICK(c, 12);
    // 001b25  mov word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0x1b25u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu)), (c.r[3] & 0xFFFFu));
    // 001b2a  ret 
    X86_AT(c, 0x1b2au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1adbu, "ran off the end of a function");
}
void f_00001ae0(X86Cpu& c) {
    X86_TICK(c, 7);
    // 001ae0  test bh, bh
    X86_AT(c, 0x1ae0u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 001ae2  jge 0x1ae7
    X86_AT(c, 0x1ae2u);
    if (x86_cc(c, 13)) { goto L_1ae7; }
    X86_TICK(c, 2);
    // 001ae4  sub bx, bx
    X86_AT(c, 0x1ae4u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_1ae7:
    X86_TICK(c, 7);
    // 001ae7  cmp cx, bx
    X86_AT(c, 0x1ae7u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001aea  jge 0x1aef
    X86_AT(c, 0x1aeau);
    if (x86_cc(c, 13)) { goto L_1aef; }
    X86_TICK(c, 2);
    // 001aec  mov bx, cx
    X86_AT(c, 0x1aecu);
    s16(c, 3, (c.r[1] & 0xFFFFu));
L_1aef:
    X86_TICK(c, 18);
    // 001aef  mov word ptr gs:[ebp + 0x2c], bx
    X86_AT(c, 0x1aefu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), (c.r[3] & 0xFFFFu));
    // 001af4  shr eax, 0x10
    X86_AT(c, 0x1af4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 001af7  shr ebx, 0x10
    X86_AT(c, 0x1af7u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 001afa  shr ecx, 0x10
    X86_AT(c, 0x1afau);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 001afd  cmp ax, bx
    X86_AT(c, 0x1afdu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001b00  jle 0x1b04
    X86_AT(c, 0x1b00u);
    if (x86_cc(c, 14)) { goto L_1b04; }
    X86_TICK(c, 3);
    // 001b02  xchg bx, ax
    X86_AT(c, 0x1b02u);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_1b04:
    X86_TICK(c, 7);
    // 001b04  test ah, ah
    X86_AT(c, 0x1b04u);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
    // 001b06  jge 0x1b0a
    X86_AT(c, 0x1b06u);
    if (x86_cc(c, 13)) { goto L_1b0a; }
    X86_TICK(c, 2);
    // 001b08  sub eax, eax
    X86_AT(c, 0x1b08u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_1b0a:
    X86_TICK(c, 7);
    // 001b0a  cmp cx, ax
    X86_AT(c, 0x1b0au);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 001b0d  jge 0x1b12
    X86_AT(c, 0x1b0du);
    if (x86_cc(c, 13)) { goto L_1b12; }
    X86_TICK(c, 2);
    // 001b0f  mov ax, cx
    X86_AT(c, 0x1b0fu);
    s16(c, 0, (c.r[1] & 0xFFFFu));
L_1b12:
    X86_TICK(c, 9);
    // 001b12  mov word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x1b12u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au)), (c.r[0] & 0xFFFFu));
    // 001b17  test bh, bh
    X86_AT(c, 0x1b17u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 001b19  jge 0x1b1d
    X86_AT(c, 0x1b19u);
    if (x86_cc(c, 13)) { goto L_1b1d; }
    X86_TICK(c, 2);
    // 001b1b  sub ebx, ebx
    X86_AT(c, 0x1b1bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_1b1d:
    X86_TICK(c, 7);
    // 001b1d  cmp cx, bx
    X86_AT(c, 0x1b1du);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001b20  jge 0x1b25
    X86_AT(c, 0x1b20u);
    if (x86_cc(c, 13)) { goto L_1b25; }
    X86_TICK(c, 2);
    // 001b22  mov bx, cx
    X86_AT(c, 0x1b22u);
    s16(c, 3, (c.r[1] & 0xFFFFu));
L_1b25:
    X86_TICK(c, 12);
    // 001b25  mov word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0x1b25u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu)), (c.r[3] & 0xFFFFu));
    // 001b2a  ret 
    X86_AT(c, 0x1b2au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1ae0u, "ran off the end of a function");
}
void f_00001ae2(X86Cpu& c) {
    X86_TICK(c, 5);
    // 001ae2  jge 0x1ae7
    X86_AT(c, 0x1ae2u);
    if (x86_cc(c, 13)) { goto L_1ae7; }
    X86_TICK(c, 2);
    // 001ae4  sub bx, bx
    X86_AT(c, 0x1ae4u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_1ae7:
    X86_TICK(c, 7);
    // 001ae7  cmp cx, bx
    X86_AT(c, 0x1ae7u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001aea  jge 0x1aef
    X86_AT(c, 0x1aeau);
    if (x86_cc(c, 13)) { goto L_1aef; }
    X86_TICK(c, 2);
    // 001aec  mov bx, cx
    X86_AT(c, 0x1aecu);
    s16(c, 3, (c.r[1] & 0xFFFFu));
L_1aef:
    X86_TICK(c, 18);
    // 001aef  mov word ptr gs:[ebp + 0x2c], bx
    X86_AT(c, 0x1aefu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), (c.r[3] & 0xFFFFu));
    // 001af4  shr eax, 0x10
    X86_AT(c, 0x1af4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 001af7  shr ebx, 0x10
    X86_AT(c, 0x1af7u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 001afa  shr ecx, 0x10
    X86_AT(c, 0x1afau);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 001afd  cmp ax, bx
    X86_AT(c, 0x1afdu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001b00  jle 0x1b04
    X86_AT(c, 0x1b00u);
    if (x86_cc(c, 14)) { goto L_1b04; }
    X86_TICK(c, 3);
    // 001b02  xchg bx, ax
    X86_AT(c, 0x1b02u);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_1b04:
    X86_TICK(c, 7);
    // 001b04  test ah, ah
    X86_AT(c, 0x1b04u);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
    // 001b06  jge 0x1b0a
    X86_AT(c, 0x1b06u);
    if (x86_cc(c, 13)) { goto L_1b0a; }
    X86_TICK(c, 2);
    // 001b08  sub eax, eax
    X86_AT(c, 0x1b08u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_1b0a:
    X86_TICK(c, 7);
    // 001b0a  cmp cx, ax
    X86_AT(c, 0x1b0au);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 001b0d  jge 0x1b12
    X86_AT(c, 0x1b0du);
    if (x86_cc(c, 13)) { goto L_1b12; }
    X86_TICK(c, 2);
    // 001b0f  mov ax, cx
    X86_AT(c, 0x1b0fu);
    s16(c, 0, (c.r[1] & 0xFFFFu));
L_1b12:
    X86_TICK(c, 9);
    // 001b12  mov word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x1b12u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au)), (c.r[0] & 0xFFFFu));
    // 001b17  test bh, bh
    X86_AT(c, 0x1b17u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 001b19  jge 0x1b1d
    X86_AT(c, 0x1b19u);
    if (x86_cc(c, 13)) { goto L_1b1d; }
    X86_TICK(c, 2);
    // 001b1b  sub ebx, ebx
    X86_AT(c, 0x1b1bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_1b1d:
    X86_TICK(c, 7);
    // 001b1d  cmp cx, bx
    X86_AT(c, 0x1b1du);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001b20  jge 0x1b25
    X86_AT(c, 0x1b20u);
    if (x86_cc(c, 13)) { goto L_1b25; }
    X86_TICK(c, 2);
    // 001b22  mov bx, cx
    X86_AT(c, 0x1b22u);
    s16(c, 3, (c.r[1] & 0xFFFFu));
L_1b25:
    X86_TICK(c, 12);
    // 001b25  mov word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0x1b25u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu)), (c.r[3] & 0xFFFFu));
    // 001b2a  ret 
    X86_AT(c, 0x1b2au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1ae2u, "ran off the end of a function");
}
void f_00001ae7(X86Cpu& c) {
    X86_TICK(c, 7);
    // 001ae7  cmp cx, bx
    X86_AT(c, 0x1ae7u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001aea  jge 0x1aef
    X86_AT(c, 0x1aeau);
    if (x86_cc(c, 13)) { goto L_1aef; }
    X86_TICK(c, 2);
    // 001aec  mov bx, cx
    X86_AT(c, 0x1aecu);
    s16(c, 3, (c.r[1] & 0xFFFFu));
L_1aef:
    X86_TICK(c, 18);
    // 001aef  mov word ptr gs:[ebp + 0x2c], bx
    X86_AT(c, 0x1aefu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), (c.r[3] & 0xFFFFu));
    // 001af4  shr eax, 0x10
    X86_AT(c, 0x1af4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 001af7  shr ebx, 0x10
    X86_AT(c, 0x1af7u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 001afa  shr ecx, 0x10
    X86_AT(c, 0x1afau);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 001afd  cmp ax, bx
    X86_AT(c, 0x1afdu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001b00  jle 0x1b04
    X86_AT(c, 0x1b00u);
    if (x86_cc(c, 14)) { goto L_1b04; }
    X86_TICK(c, 3);
    // 001b02  xchg bx, ax
    X86_AT(c, 0x1b02u);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_1b04:
    X86_TICK(c, 7);
    // 001b04  test ah, ah
    X86_AT(c, 0x1b04u);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
    // 001b06  jge 0x1b0a
    X86_AT(c, 0x1b06u);
    if (x86_cc(c, 13)) { goto L_1b0a; }
    X86_TICK(c, 2);
    // 001b08  sub eax, eax
    X86_AT(c, 0x1b08u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_1b0a:
    X86_TICK(c, 7);
    // 001b0a  cmp cx, ax
    X86_AT(c, 0x1b0au);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 001b0d  jge 0x1b12
    X86_AT(c, 0x1b0du);
    if (x86_cc(c, 13)) { goto L_1b12; }
    X86_TICK(c, 2);
    // 001b0f  mov ax, cx
    X86_AT(c, 0x1b0fu);
    s16(c, 0, (c.r[1] & 0xFFFFu));
L_1b12:
    X86_TICK(c, 9);
    // 001b12  mov word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x1b12u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au)), (c.r[0] & 0xFFFFu));
    // 001b17  test bh, bh
    X86_AT(c, 0x1b17u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 001b19  jge 0x1b1d
    X86_AT(c, 0x1b19u);
    if (x86_cc(c, 13)) { goto L_1b1d; }
    X86_TICK(c, 2);
    // 001b1b  sub ebx, ebx
    X86_AT(c, 0x1b1bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_1b1d:
    X86_TICK(c, 7);
    // 001b1d  cmp cx, bx
    X86_AT(c, 0x1b1du);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001b20  jge 0x1b25
    X86_AT(c, 0x1b20u);
    if (x86_cc(c, 13)) { goto L_1b25; }
    X86_TICK(c, 2);
    // 001b22  mov bx, cx
    X86_AT(c, 0x1b22u);
    s16(c, 3, (c.r[1] & 0xFFFFu));
L_1b25:
    X86_TICK(c, 12);
    // 001b25  mov word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0x1b25u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu)), (c.r[3] & 0xFFFFu));
    // 001b2a  ret 
    X86_AT(c, 0x1b2au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1ae7u, "ran off the end of a function");
}
void f_00001aea(X86Cpu& c) {
    X86_TICK(c, 5);
    // 001aea  jge 0x1aef
    X86_AT(c, 0x1aeau);
    if (x86_cc(c, 13)) { goto L_1aef; }
    X86_TICK(c, 2);
    // 001aec  mov bx, cx
    X86_AT(c, 0x1aecu);
    s16(c, 3, (c.r[1] & 0xFFFFu));
L_1aef:
    X86_TICK(c, 18);
    // 001aef  mov word ptr gs:[ebp + 0x2c], bx
    X86_AT(c, 0x1aefu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), (c.r[3] & 0xFFFFu));
    // 001af4  shr eax, 0x10
    X86_AT(c, 0x1af4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 001af7  shr ebx, 0x10
    X86_AT(c, 0x1af7u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 001afa  shr ecx, 0x10
    X86_AT(c, 0x1afau);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 001afd  cmp ax, bx
    X86_AT(c, 0x1afdu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001b00  jle 0x1b04
    X86_AT(c, 0x1b00u);
    if (x86_cc(c, 14)) { goto L_1b04; }
    X86_TICK(c, 3);
    // 001b02  xchg bx, ax
    X86_AT(c, 0x1b02u);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_1b04:
    X86_TICK(c, 7);
    // 001b04  test ah, ah
    X86_AT(c, 0x1b04u);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
    // 001b06  jge 0x1b0a
    X86_AT(c, 0x1b06u);
    if (x86_cc(c, 13)) { goto L_1b0a; }
    X86_TICK(c, 2);
    // 001b08  sub eax, eax
    X86_AT(c, 0x1b08u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_1b0a:
    X86_TICK(c, 7);
    // 001b0a  cmp cx, ax
    X86_AT(c, 0x1b0au);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 001b0d  jge 0x1b12
    X86_AT(c, 0x1b0du);
    if (x86_cc(c, 13)) { goto L_1b12; }
    X86_TICK(c, 2);
    // 001b0f  mov ax, cx
    X86_AT(c, 0x1b0fu);
    s16(c, 0, (c.r[1] & 0xFFFFu));
L_1b12:
    X86_TICK(c, 9);
    // 001b12  mov word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x1b12u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au)), (c.r[0] & 0xFFFFu));
    // 001b17  test bh, bh
    X86_AT(c, 0x1b17u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 001b19  jge 0x1b1d
    X86_AT(c, 0x1b19u);
    if (x86_cc(c, 13)) { goto L_1b1d; }
    X86_TICK(c, 2);
    // 001b1b  sub ebx, ebx
    X86_AT(c, 0x1b1bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_1b1d:
    X86_TICK(c, 7);
    // 001b1d  cmp cx, bx
    X86_AT(c, 0x1b1du);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001b20  jge 0x1b25
    X86_AT(c, 0x1b20u);
    if (x86_cc(c, 13)) { goto L_1b25; }
    X86_TICK(c, 2);
    // 001b22  mov bx, cx
    X86_AT(c, 0x1b22u);
    s16(c, 3, (c.r[1] & 0xFFFFu));
L_1b25:
    X86_TICK(c, 12);
    // 001b25  mov word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0x1b25u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu)), (c.r[3] & 0xFFFFu));
    // 001b2a  ret 
    X86_AT(c, 0x1b2au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1aeau, "ran off the end of a function");
}
void f_00001aec(X86Cpu& c) {
    X86_TICK(c, 20);
    // 001aec  mov bx, cx
    X86_AT(c, 0x1aecu);
    s16(c, 3, (c.r[1] & 0xFFFFu));
    // 001aef  mov word ptr gs:[ebp + 0x2c], bx
    X86_AT(c, 0x1aefu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), (c.r[3] & 0xFFFFu));
    // 001af4  shr eax, 0x10
    X86_AT(c, 0x1af4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 001af7  shr ebx, 0x10
    X86_AT(c, 0x1af7u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 001afa  shr ecx, 0x10
    X86_AT(c, 0x1afau);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 001afd  cmp ax, bx
    X86_AT(c, 0x1afdu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001b00  jle 0x1b04
    X86_AT(c, 0x1b00u);
    if (x86_cc(c, 14)) { goto L_1b04; }
    X86_TICK(c, 3);
    // 001b02  xchg bx, ax
    X86_AT(c, 0x1b02u);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_1b04:
    X86_TICK(c, 7);
    // 001b04  test ah, ah
    X86_AT(c, 0x1b04u);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
    // 001b06  jge 0x1b0a
    X86_AT(c, 0x1b06u);
    if (x86_cc(c, 13)) { goto L_1b0a; }
    X86_TICK(c, 2);
    // 001b08  sub eax, eax
    X86_AT(c, 0x1b08u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_1b0a:
    X86_TICK(c, 7);
    // 001b0a  cmp cx, ax
    X86_AT(c, 0x1b0au);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 001b0d  jge 0x1b12
    X86_AT(c, 0x1b0du);
    if (x86_cc(c, 13)) { goto L_1b12; }
    X86_TICK(c, 2);
    // 001b0f  mov ax, cx
    X86_AT(c, 0x1b0fu);
    s16(c, 0, (c.r[1] & 0xFFFFu));
L_1b12:
    X86_TICK(c, 9);
    // 001b12  mov word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x1b12u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au)), (c.r[0] & 0xFFFFu));
    // 001b17  test bh, bh
    X86_AT(c, 0x1b17u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 001b19  jge 0x1b1d
    X86_AT(c, 0x1b19u);
    if (x86_cc(c, 13)) { goto L_1b1d; }
    X86_TICK(c, 2);
    // 001b1b  sub ebx, ebx
    X86_AT(c, 0x1b1bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_1b1d:
    X86_TICK(c, 7);
    // 001b1d  cmp cx, bx
    X86_AT(c, 0x1b1du);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001b20  jge 0x1b25
    X86_AT(c, 0x1b20u);
    if (x86_cc(c, 13)) { goto L_1b25; }
    X86_TICK(c, 2);
    // 001b22  mov bx, cx
    X86_AT(c, 0x1b22u);
    s16(c, 3, (c.r[1] & 0xFFFFu));
L_1b25:
    X86_TICK(c, 12);
    // 001b25  mov word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0x1b25u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu)), (c.r[3] & 0xFFFFu));
    // 001b2a  ret 
    X86_AT(c, 0x1b2au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1aecu, "ran off the end of a function");
}
void f_00001aef(X86Cpu& c) {
    X86_TICK(c, 18);
    // 001aef  mov word ptr gs:[ebp + 0x2c], bx
    X86_AT(c, 0x1aefu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), (c.r[3] & 0xFFFFu));
    // 001af4  shr eax, 0x10
    X86_AT(c, 0x1af4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 001af7  shr ebx, 0x10
    X86_AT(c, 0x1af7u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 001afa  shr ecx, 0x10
    X86_AT(c, 0x1afau);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 001afd  cmp ax, bx
    X86_AT(c, 0x1afdu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001b00  jle 0x1b04
    X86_AT(c, 0x1b00u);
    if (x86_cc(c, 14)) { goto L_1b04; }
    X86_TICK(c, 3);
    // 001b02  xchg bx, ax
    X86_AT(c, 0x1b02u);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_1b04:
    X86_TICK(c, 7);
    // 001b04  test ah, ah
    X86_AT(c, 0x1b04u);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
    // 001b06  jge 0x1b0a
    X86_AT(c, 0x1b06u);
    if (x86_cc(c, 13)) { goto L_1b0a; }
    X86_TICK(c, 2);
    // 001b08  sub eax, eax
    X86_AT(c, 0x1b08u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_1b0a:
    X86_TICK(c, 7);
    // 001b0a  cmp cx, ax
    X86_AT(c, 0x1b0au);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 001b0d  jge 0x1b12
    X86_AT(c, 0x1b0du);
    if (x86_cc(c, 13)) { goto L_1b12; }
    X86_TICK(c, 2);
    // 001b0f  mov ax, cx
    X86_AT(c, 0x1b0fu);
    s16(c, 0, (c.r[1] & 0xFFFFu));
L_1b12:
    X86_TICK(c, 9);
    // 001b12  mov word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x1b12u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au)), (c.r[0] & 0xFFFFu));
    // 001b17  test bh, bh
    X86_AT(c, 0x1b17u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 001b19  jge 0x1b1d
    X86_AT(c, 0x1b19u);
    if (x86_cc(c, 13)) { goto L_1b1d; }
    X86_TICK(c, 2);
    // 001b1b  sub ebx, ebx
    X86_AT(c, 0x1b1bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_1b1d:
    X86_TICK(c, 7);
    // 001b1d  cmp cx, bx
    X86_AT(c, 0x1b1du);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001b20  jge 0x1b25
    X86_AT(c, 0x1b20u);
    if (x86_cc(c, 13)) { goto L_1b25; }
    X86_TICK(c, 2);
    // 001b22  mov bx, cx
    X86_AT(c, 0x1b22u);
    s16(c, 3, (c.r[1] & 0xFFFFu));
L_1b25:
    X86_TICK(c, 12);
    // 001b25  mov word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0x1b25u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu)), (c.r[3] & 0xFFFFu));
    // 001b2a  ret 
    X86_AT(c, 0x1b2au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1aefu, "ran off the end of a function");
}
void f_00001af4(X86Cpu& c) {
    X86_TICK(c, 16);
    // 001af4  shr eax, 0x10
    X86_AT(c, 0x1af4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 001af7  shr ebx, 0x10
    X86_AT(c, 0x1af7u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 001afa  shr ecx, 0x10
    X86_AT(c, 0x1afau);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 001afd  cmp ax, bx
    X86_AT(c, 0x1afdu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001b00  jle 0x1b04
    X86_AT(c, 0x1b00u);
    if (x86_cc(c, 14)) { goto L_1b04; }
    X86_TICK(c, 3);
    // 001b02  xchg bx, ax
    X86_AT(c, 0x1b02u);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_1b04:
    X86_TICK(c, 7);
    // 001b04  test ah, ah
    X86_AT(c, 0x1b04u);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
    // 001b06  jge 0x1b0a
    X86_AT(c, 0x1b06u);
    if (x86_cc(c, 13)) { goto L_1b0a; }
    X86_TICK(c, 2);
    // 001b08  sub eax, eax
    X86_AT(c, 0x1b08u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_1b0a:
    X86_TICK(c, 7);
    // 001b0a  cmp cx, ax
    X86_AT(c, 0x1b0au);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 001b0d  jge 0x1b12
    X86_AT(c, 0x1b0du);
    if (x86_cc(c, 13)) { goto L_1b12; }
    X86_TICK(c, 2);
    // 001b0f  mov ax, cx
    X86_AT(c, 0x1b0fu);
    s16(c, 0, (c.r[1] & 0xFFFFu));
L_1b12:
    X86_TICK(c, 9);
    // 001b12  mov word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x1b12u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au)), (c.r[0] & 0xFFFFu));
    // 001b17  test bh, bh
    X86_AT(c, 0x1b17u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 001b19  jge 0x1b1d
    X86_AT(c, 0x1b19u);
    if (x86_cc(c, 13)) { goto L_1b1d; }
    X86_TICK(c, 2);
    // 001b1b  sub ebx, ebx
    X86_AT(c, 0x1b1bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_1b1d:
    X86_TICK(c, 7);
    // 001b1d  cmp cx, bx
    X86_AT(c, 0x1b1du);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001b20  jge 0x1b25
    X86_AT(c, 0x1b20u);
    if (x86_cc(c, 13)) { goto L_1b25; }
    X86_TICK(c, 2);
    // 001b22  mov bx, cx
    X86_AT(c, 0x1b22u);
    s16(c, 3, (c.r[1] & 0xFFFFu));
L_1b25:
    X86_TICK(c, 12);
    // 001b25  mov word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0x1b25u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu)), (c.r[3] & 0xFFFFu));
    // 001b2a  ret 
    X86_AT(c, 0x1b2au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1af4u, "ran off the end of a function");
}
void f_00001af7(X86Cpu& c) {
    X86_TICK(c, 13);
    // 001af7  shr ebx, 0x10
    X86_AT(c, 0x1af7u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 001afa  shr ecx, 0x10
    X86_AT(c, 0x1afau);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 001afd  cmp ax, bx
    X86_AT(c, 0x1afdu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001b00  jle 0x1b04
    X86_AT(c, 0x1b00u);
    if (x86_cc(c, 14)) { goto L_1b04; }
    X86_TICK(c, 3);
    // 001b02  xchg bx, ax
    X86_AT(c, 0x1b02u);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_1b04:
    X86_TICK(c, 7);
    // 001b04  test ah, ah
    X86_AT(c, 0x1b04u);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
    // 001b06  jge 0x1b0a
    X86_AT(c, 0x1b06u);
    if (x86_cc(c, 13)) { goto L_1b0a; }
    X86_TICK(c, 2);
    // 001b08  sub eax, eax
    X86_AT(c, 0x1b08u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_1b0a:
    X86_TICK(c, 7);
    // 001b0a  cmp cx, ax
    X86_AT(c, 0x1b0au);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 001b0d  jge 0x1b12
    X86_AT(c, 0x1b0du);
    if (x86_cc(c, 13)) { goto L_1b12; }
    X86_TICK(c, 2);
    // 001b0f  mov ax, cx
    X86_AT(c, 0x1b0fu);
    s16(c, 0, (c.r[1] & 0xFFFFu));
L_1b12:
    X86_TICK(c, 9);
    // 001b12  mov word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x1b12u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au)), (c.r[0] & 0xFFFFu));
    // 001b17  test bh, bh
    X86_AT(c, 0x1b17u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 001b19  jge 0x1b1d
    X86_AT(c, 0x1b19u);
    if (x86_cc(c, 13)) { goto L_1b1d; }
    X86_TICK(c, 2);
    // 001b1b  sub ebx, ebx
    X86_AT(c, 0x1b1bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_1b1d:
    X86_TICK(c, 7);
    // 001b1d  cmp cx, bx
    X86_AT(c, 0x1b1du);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001b20  jge 0x1b25
    X86_AT(c, 0x1b20u);
    if (x86_cc(c, 13)) { goto L_1b25; }
    X86_TICK(c, 2);
    // 001b22  mov bx, cx
    X86_AT(c, 0x1b22u);
    s16(c, 3, (c.r[1] & 0xFFFFu));
L_1b25:
    X86_TICK(c, 12);
    // 001b25  mov word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0x1b25u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu)), (c.r[3] & 0xFFFFu));
    // 001b2a  ret 
    X86_AT(c, 0x1b2au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1af7u, "ran off the end of a function");
}
void f_00001afa(X86Cpu& c) {
    X86_TICK(c, 10);
    // 001afa  shr ecx, 0x10
    X86_AT(c, 0x1afau);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 001afd  cmp ax, bx
    X86_AT(c, 0x1afdu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001b00  jle 0x1b04
    X86_AT(c, 0x1b00u);
    if (x86_cc(c, 14)) { goto L_1b04; }
    X86_TICK(c, 3);
    // 001b02  xchg bx, ax
    X86_AT(c, 0x1b02u);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_1b04:
    X86_TICK(c, 7);
    // 001b04  test ah, ah
    X86_AT(c, 0x1b04u);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
    // 001b06  jge 0x1b0a
    X86_AT(c, 0x1b06u);
    if (x86_cc(c, 13)) { goto L_1b0a; }
    X86_TICK(c, 2);
    // 001b08  sub eax, eax
    X86_AT(c, 0x1b08u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_1b0a:
    X86_TICK(c, 7);
    // 001b0a  cmp cx, ax
    X86_AT(c, 0x1b0au);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 001b0d  jge 0x1b12
    X86_AT(c, 0x1b0du);
    if (x86_cc(c, 13)) { goto L_1b12; }
    X86_TICK(c, 2);
    // 001b0f  mov ax, cx
    X86_AT(c, 0x1b0fu);
    s16(c, 0, (c.r[1] & 0xFFFFu));
L_1b12:
    X86_TICK(c, 9);
    // 001b12  mov word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x1b12u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au)), (c.r[0] & 0xFFFFu));
    // 001b17  test bh, bh
    X86_AT(c, 0x1b17u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 001b19  jge 0x1b1d
    X86_AT(c, 0x1b19u);
    if (x86_cc(c, 13)) { goto L_1b1d; }
    X86_TICK(c, 2);
    // 001b1b  sub ebx, ebx
    X86_AT(c, 0x1b1bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_1b1d:
    X86_TICK(c, 7);
    // 001b1d  cmp cx, bx
    X86_AT(c, 0x1b1du);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001b20  jge 0x1b25
    X86_AT(c, 0x1b20u);
    if (x86_cc(c, 13)) { goto L_1b25; }
    X86_TICK(c, 2);
    // 001b22  mov bx, cx
    X86_AT(c, 0x1b22u);
    s16(c, 3, (c.r[1] & 0xFFFFu));
L_1b25:
    X86_TICK(c, 12);
    // 001b25  mov word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0x1b25u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu)), (c.r[3] & 0xFFFFu));
    // 001b2a  ret 
    X86_AT(c, 0x1b2au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1afau, "ran off the end of a function");
}
void f_00001afd(X86Cpu& c) {
    X86_TICK(c, 7);
    // 001afd  cmp ax, bx
    X86_AT(c, 0x1afdu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001b00  jle 0x1b04
    X86_AT(c, 0x1b00u);
    if (x86_cc(c, 14)) { goto L_1b04; }
    X86_TICK(c, 3);
    // 001b02  xchg bx, ax
    X86_AT(c, 0x1b02u);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_1b04:
    X86_TICK(c, 7);
    // 001b04  test ah, ah
    X86_AT(c, 0x1b04u);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
    // 001b06  jge 0x1b0a
    X86_AT(c, 0x1b06u);
    if (x86_cc(c, 13)) { goto L_1b0a; }
    X86_TICK(c, 2);
    // 001b08  sub eax, eax
    X86_AT(c, 0x1b08u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_1b0a:
    X86_TICK(c, 7);
    // 001b0a  cmp cx, ax
    X86_AT(c, 0x1b0au);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 001b0d  jge 0x1b12
    X86_AT(c, 0x1b0du);
    if (x86_cc(c, 13)) { goto L_1b12; }
    X86_TICK(c, 2);
    // 001b0f  mov ax, cx
    X86_AT(c, 0x1b0fu);
    s16(c, 0, (c.r[1] & 0xFFFFu));
L_1b12:
    X86_TICK(c, 9);
    // 001b12  mov word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x1b12u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au)), (c.r[0] & 0xFFFFu));
    // 001b17  test bh, bh
    X86_AT(c, 0x1b17u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 001b19  jge 0x1b1d
    X86_AT(c, 0x1b19u);
    if (x86_cc(c, 13)) { goto L_1b1d; }
    X86_TICK(c, 2);
    // 001b1b  sub ebx, ebx
    X86_AT(c, 0x1b1bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_1b1d:
    X86_TICK(c, 7);
    // 001b1d  cmp cx, bx
    X86_AT(c, 0x1b1du);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001b20  jge 0x1b25
    X86_AT(c, 0x1b20u);
    if (x86_cc(c, 13)) { goto L_1b25; }
    X86_TICK(c, 2);
    // 001b22  mov bx, cx
    X86_AT(c, 0x1b22u);
    s16(c, 3, (c.r[1] & 0xFFFFu));
L_1b25:
    X86_TICK(c, 12);
    // 001b25  mov word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0x1b25u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu)), (c.r[3] & 0xFFFFu));
    // 001b2a  ret 
    X86_AT(c, 0x1b2au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1afdu, "ran off the end of a function");
}
void f_00001b00(X86Cpu& c) {
    X86_TICK(c, 5);
    // 001b00  jle 0x1b04
    X86_AT(c, 0x1b00u);
    if (x86_cc(c, 14)) { goto L_1b04; }
    X86_TICK(c, 3);
    // 001b02  xchg bx, ax
    X86_AT(c, 0x1b02u);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_1b04:
    X86_TICK(c, 7);
    // 001b04  test ah, ah
    X86_AT(c, 0x1b04u);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
    // 001b06  jge 0x1b0a
    X86_AT(c, 0x1b06u);
    if (x86_cc(c, 13)) { goto L_1b0a; }
    X86_TICK(c, 2);
    // 001b08  sub eax, eax
    X86_AT(c, 0x1b08u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_1b0a:
    X86_TICK(c, 7);
    // 001b0a  cmp cx, ax
    X86_AT(c, 0x1b0au);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 001b0d  jge 0x1b12
    X86_AT(c, 0x1b0du);
    if (x86_cc(c, 13)) { goto L_1b12; }
    X86_TICK(c, 2);
    // 001b0f  mov ax, cx
    X86_AT(c, 0x1b0fu);
    s16(c, 0, (c.r[1] & 0xFFFFu));
L_1b12:
    X86_TICK(c, 9);
    // 001b12  mov word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x1b12u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au)), (c.r[0] & 0xFFFFu));
    // 001b17  test bh, bh
    X86_AT(c, 0x1b17u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 001b19  jge 0x1b1d
    X86_AT(c, 0x1b19u);
    if (x86_cc(c, 13)) { goto L_1b1d; }
    X86_TICK(c, 2);
    // 001b1b  sub ebx, ebx
    X86_AT(c, 0x1b1bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_1b1d:
    X86_TICK(c, 7);
    // 001b1d  cmp cx, bx
    X86_AT(c, 0x1b1du);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001b20  jge 0x1b25
    X86_AT(c, 0x1b20u);
    if (x86_cc(c, 13)) { goto L_1b25; }
    X86_TICK(c, 2);
    // 001b22  mov bx, cx
    X86_AT(c, 0x1b22u);
    s16(c, 3, (c.r[1] & 0xFFFFu));
L_1b25:
    X86_TICK(c, 12);
    // 001b25  mov word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0x1b25u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu)), (c.r[3] & 0xFFFFu));
    // 001b2a  ret 
    X86_AT(c, 0x1b2au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1b00u, "ran off the end of a function");
}
void f_00001b04(X86Cpu& c) {
    X86_TICK(c, 7);
    // 001b04  test ah, ah
    X86_AT(c, 0x1b04u);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
    // 001b06  jge 0x1b0a
    X86_AT(c, 0x1b06u);
    if (x86_cc(c, 13)) { goto L_1b0a; }
    X86_TICK(c, 2);
    // 001b08  sub eax, eax
    X86_AT(c, 0x1b08u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_1b0a:
    X86_TICK(c, 7);
    // 001b0a  cmp cx, ax
    X86_AT(c, 0x1b0au);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 001b0d  jge 0x1b12
    X86_AT(c, 0x1b0du);
    if (x86_cc(c, 13)) { goto L_1b12; }
    X86_TICK(c, 2);
    // 001b0f  mov ax, cx
    X86_AT(c, 0x1b0fu);
    s16(c, 0, (c.r[1] & 0xFFFFu));
L_1b12:
    X86_TICK(c, 9);
    // 001b12  mov word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x1b12u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au)), (c.r[0] & 0xFFFFu));
    // 001b17  test bh, bh
    X86_AT(c, 0x1b17u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 001b19  jge 0x1b1d
    X86_AT(c, 0x1b19u);
    if (x86_cc(c, 13)) { goto L_1b1d; }
    X86_TICK(c, 2);
    // 001b1b  sub ebx, ebx
    X86_AT(c, 0x1b1bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_1b1d:
    X86_TICK(c, 7);
    // 001b1d  cmp cx, bx
    X86_AT(c, 0x1b1du);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001b20  jge 0x1b25
    X86_AT(c, 0x1b20u);
    if (x86_cc(c, 13)) { goto L_1b25; }
    X86_TICK(c, 2);
    // 001b22  mov bx, cx
    X86_AT(c, 0x1b22u);
    s16(c, 3, (c.r[1] & 0xFFFFu));
L_1b25:
    X86_TICK(c, 12);
    // 001b25  mov word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0x1b25u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu)), (c.r[3] & 0xFFFFu));
    // 001b2a  ret 
    X86_AT(c, 0x1b2au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1b04u, "ran off the end of a function");
}
void f_00001b06(X86Cpu& c) {
    X86_TICK(c, 5);
    // 001b06  jge 0x1b0a
    X86_AT(c, 0x1b06u);
    if (x86_cc(c, 13)) { goto L_1b0a; }
    X86_TICK(c, 2);
    // 001b08  sub eax, eax
    X86_AT(c, 0x1b08u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_1b0a:
    X86_TICK(c, 7);
    // 001b0a  cmp cx, ax
    X86_AT(c, 0x1b0au);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 001b0d  jge 0x1b12
    X86_AT(c, 0x1b0du);
    if (x86_cc(c, 13)) { goto L_1b12; }
    X86_TICK(c, 2);
    // 001b0f  mov ax, cx
    X86_AT(c, 0x1b0fu);
    s16(c, 0, (c.r[1] & 0xFFFFu));
L_1b12:
    X86_TICK(c, 9);
    // 001b12  mov word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x1b12u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au)), (c.r[0] & 0xFFFFu));
    // 001b17  test bh, bh
    X86_AT(c, 0x1b17u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 001b19  jge 0x1b1d
    X86_AT(c, 0x1b19u);
    if (x86_cc(c, 13)) { goto L_1b1d; }
    X86_TICK(c, 2);
    // 001b1b  sub ebx, ebx
    X86_AT(c, 0x1b1bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_1b1d:
    X86_TICK(c, 7);
    // 001b1d  cmp cx, bx
    X86_AT(c, 0x1b1du);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001b20  jge 0x1b25
    X86_AT(c, 0x1b20u);
    if (x86_cc(c, 13)) { goto L_1b25; }
    X86_TICK(c, 2);
    // 001b22  mov bx, cx
    X86_AT(c, 0x1b22u);
    s16(c, 3, (c.r[1] & 0xFFFFu));
L_1b25:
    X86_TICK(c, 12);
    // 001b25  mov word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0x1b25u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu)), (c.r[3] & 0xFFFFu));
    // 001b2a  ret 
    X86_AT(c, 0x1b2au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1b06u, "ran off the end of a function");
}
void f_00001b0a(X86Cpu& c) {
    X86_TICK(c, 7);
    // 001b0a  cmp cx, ax
    X86_AT(c, 0x1b0au);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 001b0d  jge 0x1b12
    X86_AT(c, 0x1b0du);
    if (x86_cc(c, 13)) { goto L_1b12; }
    X86_TICK(c, 2);
    // 001b0f  mov ax, cx
    X86_AT(c, 0x1b0fu);
    s16(c, 0, (c.r[1] & 0xFFFFu));
L_1b12:
    X86_TICK(c, 9);
    // 001b12  mov word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x1b12u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au)), (c.r[0] & 0xFFFFu));
    // 001b17  test bh, bh
    X86_AT(c, 0x1b17u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 001b19  jge 0x1b1d
    X86_AT(c, 0x1b19u);
    if (x86_cc(c, 13)) { goto L_1b1d; }
    X86_TICK(c, 2);
    // 001b1b  sub ebx, ebx
    X86_AT(c, 0x1b1bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_1b1d:
    X86_TICK(c, 7);
    // 001b1d  cmp cx, bx
    X86_AT(c, 0x1b1du);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001b20  jge 0x1b25
    X86_AT(c, 0x1b20u);
    if (x86_cc(c, 13)) { goto L_1b25; }
    X86_TICK(c, 2);
    // 001b22  mov bx, cx
    X86_AT(c, 0x1b22u);
    s16(c, 3, (c.r[1] & 0xFFFFu));
L_1b25:
    X86_TICK(c, 12);
    // 001b25  mov word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0x1b25u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu)), (c.r[3] & 0xFFFFu));
    // 001b2a  ret 
    X86_AT(c, 0x1b2au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1b0au, "ran off the end of a function");
}
void f_00001b0d(X86Cpu& c) {
    X86_TICK(c, 5);
    // 001b0d  jge 0x1b12
    X86_AT(c, 0x1b0du);
    if (x86_cc(c, 13)) { goto L_1b12; }
    X86_TICK(c, 2);
    // 001b0f  mov ax, cx
    X86_AT(c, 0x1b0fu);
    s16(c, 0, (c.r[1] & 0xFFFFu));
L_1b12:
    X86_TICK(c, 9);
    // 001b12  mov word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x1b12u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au)), (c.r[0] & 0xFFFFu));
    // 001b17  test bh, bh
    X86_AT(c, 0x1b17u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 001b19  jge 0x1b1d
    X86_AT(c, 0x1b19u);
    if (x86_cc(c, 13)) { goto L_1b1d; }
    X86_TICK(c, 2);
    // 001b1b  sub ebx, ebx
    X86_AT(c, 0x1b1bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_1b1d:
    X86_TICK(c, 7);
    // 001b1d  cmp cx, bx
    X86_AT(c, 0x1b1du);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001b20  jge 0x1b25
    X86_AT(c, 0x1b20u);
    if (x86_cc(c, 13)) { goto L_1b25; }
    X86_TICK(c, 2);
    // 001b22  mov bx, cx
    X86_AT(c, 0x1b22u);
    s16(c, 3, (c.r[1] & 0xFFFFu));
L_1b25:
    X86_TICK(c, 12);
    // 001b25  mov word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0x1b25u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu)), (c.r[3] & 0xFFFFu));
    // 001b2a  ret 
    X86_AT(c, 0x1b2au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1b0du, "ran off the end of a function");
}
void f_00001b12(X86Cpu& c) {
    X86_TICK(c, 9);
    // 001b12  mov word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x1b12u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au)), (c.r[0] & 0xFFFFu));
    // 001b17  test bh, bh
    X86_AT(c, 0x1b17u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 001b19  jge 0x1b1d
    X86_AT(c, 0x1b19u);
    if (x86_cc(c, 13)) { goto L_1b1d; }
    X86_TICK(c, 2);
    // 001b1b  sub ebx, ebx
    X86_AT(c, 0x1b1bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_1b1d:
    X86_TICK(c, 7);
    // 001b1d  cmp cx, bx
    X86_AT(c, 0x1b1du);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001b20  jge 0x1b25
    X86_AT(c, 0x1b20u);
    if (x86_cc(c, 13)) { goto L_1b25; }
    X86_TICK(c, 2);
    // 001b22  mov bx, cx
    X86_AT(c, 0x1b22u);
    s16(c, 3, (c.r[1] & 0xFFFFu));
L_1b25:
    X86_TICK(c, 12);
    // 001b25  mov word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0x1b25u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu)), (c.r[3] & 0xFFFFu));
    // 001b2a  ret 
    X86_AT(c, 0x1b2au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1b12u, "ran off the end of a function");
}
void f_00001b17(X86Cpu& c) {
    X86_TICK(c, 7);
    // 001b17  test bh, bh
    X86_AT(c, 0x1b17u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 001b19  jge 0x1b1d
    X86_AT(c, 0x1b19u);
    if (x86_cc(c, 13)) { goto L_1b1d; }
    X86_TICK(c, 2);
    // 001b1b  sub ebx, ebx
    X86_AT(c, 0x1b1bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_1b1d:
    X86_TICK(c, 7);
    // 001b1d  cmp cx, bx
    X86_AT(c, 0x1b1du);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001b20  jge 0x1b25
    X86_AT(c, 0x1b20u);
    if (x86_cc(c, 13)) { goto L_1b25; }
    X86_TICK(c, 2);
    // 001b22  mov bx, cx
    X86_AT(c, 0x1b22u);
    s16(c, 3, (c.r[1] & 0xFFFFu));
L_1b25:
    X86_TICK(c, 12);
    // 001b25  mov word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0x1b25u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu)), (c.r[3] & 0xFFFFu));
    // 001b2a  ret 
    X86_AT(c, 0x1b2au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1b17u, "ran off the end of a function");
}
void f_00001b19(X86Cpu& c) {
    X86_TICK(c, 5);
    // 001b19  jge 0x1b1d
    X86_AT(c, 0x1b19u);
    if (x86_cc(c, 13)) { goto L_1b1d; }
    X86_TICK(c, 2);
    // 001b1b  sub ebx, ebx
    X86_AT(c, 0x1b1bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_1b1d:
    X86_TICK(c, 7);
    // 001b1d  cmp cx, bx
    X86_AT(c, 0x1b1du);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001b20  jge 0x1b25
    X86_AT(c, 0x1b20u);
    if (x86_cc(c, 13)) { goto L_1b25; }
    X86_TICK(c, 2);
    // 001b22  mov bx, cx
    X86_AT(c, 0x1b22u);
    s16(c, 3, (c.r[1] & 0xFFFFu));
L_1b25:
    X86_TICK(c, 12);
    // 001b25  mov word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0x1b25u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu)), (c.r[3] & 0xFFFFu));
    // 001b2a  ret 
    X86_AT(c, 0x1b2au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1b19u, "ran off the end of a function");
}
void f_00001b1d(X86Cpu& c) {
    X86_TICK(c, 7);
    // 001b1d  cmp cx, bx
    X86_AT(c, 0x1b1du);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 001b20  jge 0x1b25
    X86_AT(c, 0x1b20u);
    if (x86_cc(c, 13)) { goto L_1b25; }
    X86_TICK(c, 2);
    // 001b22  mov bx, cx
    X86_AT(c, 0x1b22u);
    s16(c, 3, (c.r[1] & 0xFFFFu));
L_1b25:
    X86_TICK(c, 12);
    // 001b25  mov word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0x1b25u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu)), (c.r[3] & 0xFFFFu));
    // 001b2a  ret 
    X86_AT(c, 0x1b2au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1b1du, "ran off the end of a function");
}
void f_00001b20(X86Cpu& c) {
    X86_TICK(c, 5);
    // 001b20  jge 0x1b25
    X86_AT(c, 0x1b20u);
    if (x86_cc(c, 13)) { goto L_1b25; }
    X86_TICK(c, 2);
    // 001b22  mov bx, cx
    X86_AT(c, 0x1b22u);
    s16(c, 3, (c.r[1] & 0xFFFFu));
L_1b25:
    X86_TICK(c, 12);
    // 001b25  mov word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0x1b25u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu)), (c.r[3] & 0xFFFFu));
    // 001b2a  ret 
    X86_AT(c, 0x1b2au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1b20u, "ran off the end of a function");
}
void f_00001b25(X86Cpu& c) {
    X86_TICK(c, 12);
    // 001b25  mov word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0x1b25u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu)), (c.r[3] & 0xFFFFu));
    // 001b2a  ret 
    X86_AT(c, 0x1b2au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1b25u, "ran off the end of a function");
}
void f_00001b2a(X86Cpu& c) {
    X86_TICK(c, 10);
    // 001b2a  ret 
    X86_AT(c, 0x1b2au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1b2au, "ran off the end of a function");
}
void f_00001b2c(X86Cpu& c) {
    X86_TICK(c, 7);
    // 001b2c  call 0x1b36
    X86_AT(c, 0x1b2cu);
    push32(c, 0x1b31u); f_00001b36(c); X86_RET(c, 0x1b31u);
    X86_TICK(c, 12);
    // 001b31  mov byte ptr [esp + 0x21], ah
    X86_AT(c, 0x1b31u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), g8(c, 4));
    // 001b35  ret 
    X86_AT(c, 0x1b35u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1b2cu, "ran off the end of a function");
}
void f_00001b31(X86Cpu& c) {
    X86_TICK(c, 12);
    // 001b31  mov byte ptr [esp + 0x21], ah
    X86_AT(c, 0x1b31u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), g8(c, 4));
    // 001b35  ret 
    X86_AT(c, 0x1b35u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1b31u, "ran off the end of a function");
}
void f_00001b35(X86Cpu& c) {
    X86_TICK(c, 10);
    // 001b35  ret 
    X86_AT(c, 0x1b35u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1b35u, "ran off the end of a function");
}
void f_00001b36(X86Cpu& c) {
    X86_TICK(c, 13);
    // 001b36  test al, 0x40
    X86_AT(c, 0x1b36u);
    (void)x86_logic(c, g8(c, 0) & 0x40u, 1);
    // 001b38  setne bl
    X86_AT(c, 0x1b38u);
    s8(c, 3, x86_cc(c, 5) ? 1u : 0u);
    // 001b3b  and al, 0xbf
    X86_AT(c, 0x1b3bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xBFu, 1)); }
    // 001b3d  jl 0x1b98
    X86_AT(c, 0x1b3du);
    if (x86_cc(c, 12)) { goto L_1b98; }
    X86_TICK(c, 7);
    // 001b3f  cmp al, 1
    X86_AT(c, 0x1b3fu);
    (void)x86_sub(c, g8(c, 0), 0x1u, 0, 1);
    // 001b41  ja 0x1b93
    X86_AT(c, 0x1b41u);
    if (x86_cc(c, 7)) { goto L_1b93; }
    X86_TICK(c, 5);
    // 001b43  jb 0x1b4c
    X86_AT(c, 0x1b43u);
    if (x86_cc(c, 2)) { goto L_1b4c; }
    X86_TICK(c, 12);
    // 001b45  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0x1b45u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 001b4a  jae 0x1b93
    X86_AT(c, 0x1b4au);
    if (x86_cc(c, 3)) { goto L_1b93; }
L_1b4c:
    X86_TICK(c, 7);
    // 001b4c  test bl, bl
    X86_AT(c, 0x1b4cu);
    (void)x86_logic(c, g8(c, 3) & g8(c, 3), 1);
    // 001b4e  jne 0x1b69
    X86_AT(c, 0x1b4eu);
    if (x86_cc(c, 5)) { goto L_1b69; }
    X86_TICK(c, 26);
    // 001b50  push eax
    X86_AT(c, 0x1b50u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 001b51  shl al, 5
    X86_AT(c, 0x1b51u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 1, w); if (w) s8(c, 0, r); }
    // 001b54  and byte ptr gs:[ebp + 0x101], 0xdf
    X86_AT(c, 0x1b54u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x101u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xDFu, 1)); }
    // 001b5c  or byte ptr gs:[ebp + 0x101], al
    X86_AT(c, 0x1b5cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x101u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 0), 1)); }
    // 001b63  call 0xe29
    X86_AT(c, 0x1b63u);
    push32(c, 0x1b68u); f_00000e29(c); X86_RET(c, 0x1b68u);
    X86_TICK(c, 4);
    // 001b68  pop eax
    X86_AT(c, 0x1b68u);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_1b69:
    X86_TICK(c, 4);
    // 001b69  mov byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x1b69u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)), g8(c, 0));
    // 001b6d  mov edi, 0x40
    X86_AT(c, 0x1b6du);
    c.r[7] = 0x40u;
L_1b72:
    X86_TICK(c, 7);
    // 001b72  call 0x1bac
    X86_AT(c, 0x1b72u);
    push32(c, 0x1b77u); f_00001bac(c); X86_RET(c, 0x1b77u);
    X86_TICK(c, 7);
    // 001b77  call 0x1bcc
    X86_AT(c, 0x1b77u);
    push32(c, 0x1b7cu); f_00001bcc(c); X86_RET(c, 0x1b7cu);
    X86_TICK(c, 7);
    // 001b7c  test esi, esi
    X86_AT(c, 0x1b7cu);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 001b7e  je 0x1b90
    X86_AT(c, 0x1b7eu);
    if (x86_cc(c, 4)) { goto L_1b90; }
    X86_TICK(c, 8);
    // 001b80  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x1b80u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 001b88  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x1b88u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 001b8c  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x1b8cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
L_1b90:
    X86_TICK(c, 12);
    // 001b90  mov ah, 0
    X86_AT(c, 0x1b90u);
    s8(c, 4, 0x0u);
    // 001b92  ret 
    X86_AT(c, 0x1b92u);
    c.eip = pop32(c); return;
L_1b93:
    X86_TICK(c, 12);
    // 001b93  mov ah, 0xff
    X86_AT(c, 0x1b93u);
    s8(c, 4, 0xFFu);
    // 001b95  ret 
    X86_AT(c, 0x1b95u);
    c.eip = pop32(c); return;
L_1b98:
    X86_TICK(c, 11);
    // 001b98  mov bl, al
    X86_AT(c, 0x1b98u);
    s8(c, 3, g8(c, 0));
    // 001b9a  sub al, 0x80
    X86_AT(c, 0x1b9au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x80u, 0, 1)); }
    // 001b9c  cmp al, 3
    X86_AT(c, 0x1b9cu);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 001b9e  ja 0x1b93
    X86_AT(c, 0x1b9eu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x1b93u); goto L_1b93; }
    X86_TICK(c, 11);
    // 001ba0  mov byte ptr gs:[ebp + 0x30], bl
    X86_AT(c, 0x1ba0u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)), g8(c, 3));
    // 001ba4  mov edi, 0x70
    X86_AT(c, 0x1ba4u);
    c.r[7] = 0x70u;
    // 001ba9  jmp 0x1b72
    X86_AT(c, 0x1ba9u);
    X86_POLL(c, 0x1b72u); goto L_1b72;
    x86_fault(c, 0x1b36u, "ran off the end of a function");
}
void f_00001b38(X86Cpu& c) {
    X86_TICK(c, 11);
    // 001b38  setne bl
    X86_AT(c, 0x1b38u);
    s8(c, 3, x86_cc(c, 5) ? 1u : 0u);
    // 001b3b  and al, 0xbf
    X86_AT(c, 0x1b3bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xBFu, 1)); }
    // 001b3d  jl 0x1b98
    X86_AT(c, 0x1b3du);
    if (x86_cc(c, 12)) { goto L_1b98; }
    X86_TICK(c, 7);
    // 001b3f  cmp al, 1
    X86_AT(c, 0x1b3fu);
    (void)x86_sub(c, g8(c, 0), 0x1u, 0, 1);
    // 001b41  ja 0x1b93
    X86_AT(c, 0x1b41u);
    if (x86_cc(c, 7)) { goto L_1b93; }
    X86_TICK(c, 5);
    // 001b43  jb 0x1b4c
    X86_AT(c, 0x1b43u);
    if (x86_cc(c, 2)) { goto L_1b4c; }
    X86_TICK(c, 12);
    // 001b45  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0x1b45u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 001b4a  jae 0x1b93
    X86_AT(c, 0x1b4au);
    if (x86_cc(c, 3)) { goto L_1b93; }
L_1b4c:
    X86_TICK(c, 7);
    // 001b4c  test bl, bl
    X86_AT(c, 0x1b4cu);
    (void)x86_logic(c, g8(c, 3) & g8(c, 3), 1);
    // 001b4e  jne 0x1b69
    X86_AT(c, 0x1b4eu);
    if (x86_cc(c, 5)) { goto L_1b69; }
    X86_TICK(c, 26);
    // 001b50  push eax
    X86_AT(c, 0x1b50u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 001b51  shl al, 5
    X86_AT(c, 0x1b51u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 1, w); if (w) s8(c, 0, r); }
    // 001b54  and byte ptr gs:[ebp + 0x101], 0xdf
    X86_AT(c, 0x1b54u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x101u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xDFu, 1)); }
    // 001b5c  or byte ptr gs:[ebp + 0x101], al
    X86_AT(c, 0x1b5cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x101u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 0), 1)); }
    // 001b63  call 0xe29
    X86_AT(c, 0x1b63u);
    push32(c, 0x1b68u); f_00000e29(c); X86_RET(c, 0x1b68u);
    X86_TICK(c, 4);
    // 001b68  pop eax
    X86_AT(c, 0x1b68u);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_1b69:
    X86_TICK(c, 4);
    // 001b69  mov byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x1b69u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)), g8(c, 0));
    // 001b6d  mov edi, 0x40
    X86_AT(c, 0x1b6du);
    c.r[7] = 0x40u;
L_1b72:
    X86_TICK(c, 7);
    // 001b72  call 0x1bac
    X86_AT(c, 0x1b72u);
    push32(c, 0x1b77u); f_00001bac(c); X86_RET(c, 0x1b77u);
    X86_TICK(c, 7);
    // 001b77  call 0x1bcc
    X86_AT(c, 0x1b77u);
    push32(c, 0x1b7cu); f_00001bcc(c); X86_RET(c, 0x1b7cu);
    X86_TICK(c, 7);
    // 001b7c  test esi, esi
    X86_AT(c, 0x1b7cu);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 001b7e  je 0x1b90
    X86_AT(c, 0x1b7eu);
    if (x86_cc(c, 4)) { goto L_1b90; }
    X86_TICK(c, 8);
    // 001b80  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x1b80u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 001b88  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x1b88u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 001b8c  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x1b8cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
L_1b90:
    X86_TICK(c, 12);
    // 001b90  mov ah, 0
    X86_AT(c, 0x1b90u);
    s8(c, 4, 0x0u);
    // 001b92  ret 
    X86_AT(c, 0x1b92u);
    c.eip = pop32(c); return;
L_1b93:
    X86_TICK(c, 12);
    // 001b93  mov ah, 0xff
    X86_AT(c, 0x1b93u);
    s8(c, 4, 0xFFu);
    // 001b95  ret 
    X86_AT(c, 0x1b95u);
    c.eip = pop32(c); return;
L_1b98:
    X86_TICK(c, 11);
    // 001b98  mov bl, al
    X86_AT(c, 0x1b98u);
    s8(c, 3, g8(c, 0));
    // 001b9a  sub al, 0x80
    X86_AT(c, 0x1b9au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x80u, 0, 1)); }
    // 001b9c  cmp al, 3
    X86_AT(c, 0x1b9cu);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 001b9e  ja 0x1b93
    X86_AT(c, 0x1b9eu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x1b93u); goto L_1b93; }
    X86_TICK(c, 11);
    // 001ba0  mov byte ptr gs:[ebp + 0x30], bl
    X86_AT(c, 0x1ba0u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)), g8(c, 3));
    // 001ba4  mov edi, 0x70
    X86_AT(c, 0x1ba4u);
    c.r[7] = 0x70u;
    // 001ba9  jmp 0x1b72
    X86_AT(c, 0x1ba9u);
    X86_POLL(c, 0x1b72u); goto L_1b72;
    x86_fault(c, 0x1b38u, "ran off the end of a function");
}
void f_00001b3b(X86Cpu& c) {
    X86_TICK(c, 7);
    // 001b3b  and al, 0xbf
    X86_AT(c, 0x1b3bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xBFu, 1)); }
    // 001b3d  jl 0x1b98
    X86_AT(c, 0x1b3du);
    if (x86_cc(c, 12)) { goto L_1b98; }
    X86_TICK(c, 7);
    // 001b3f  cmp al, 1
    X86_AT(c, 0x1b3fu);
    (void)x86_sub(c, g8(c, 0), 0x1u, 0, 1);
    // 001b41  ja 0x1b93
    X86_AT(c, 0x1b41u);
    if (x86_cc(c, 7)) { goto L_1b93; }
    X86_TICK(c, 5);
    // 001b43  jb 0x1b4c
    X86_AT(c, 0x1b43u);
    if (x86_cc(c, 2)) { goto L_1b4c; }
    X86_TICK(c, 12);
    // 001b45  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0x1b45u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 001b4a  jae 0x1b93
    X86_AT(c, 0x1b4au);
    if (x86_cc(c, 3)) { goto L_1b93; }
L_1b4c:
    X86_TICK(c, 7);
    // 001b4c  test bl, bl
    X86_AT(c, 0x1b4cu);
    (void)x86_logic(c, g8(c, 3) & g8(c, 3), 1);
    // 001b4e  jne 0x1b69
    X86_AT(c, 0x1b4eu);
    if (x86_cc(c, 5)) { goto L_1b69; }
    X86_TICK(c, 26);
    // 001b50  push eax
    X86_AT(c, 0x1b50u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 001b51  shl al, 5
    X86_AT(c, 0x1b51u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 1, w); if (w) s8(c, 0, r); }
    // 001b54  and byte ptr gs:[ebp + 0x101], 0xdf
    X86_AT(c, 0x1b54u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x101u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xDFu, 1)); }
    // 001b5c  or byte ptr gs:[ebp + 0x101], al
    X86_AT(c, 0x1b5cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x101u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 0), 1)); }
    // 001b63  call 0xe29
    X86_AT(c, 0x1b63u);
    push32(c, 0x1b68u); f_00000e29(c); X86_RET(c, 0x1b68u);
    X86_TICK(c, 4);
    // 001b68  pop eax
    X86_AT(c, 0x1b68u);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_1b69:
    X86_TICK(c, 4);
    // 001b69  mov byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x1b69u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)), g8(c, 0));
    // 001b6d  mov edi, 0x40
    X86_AT(c, 0x1b6du);
    c.r[7] = 0x40u;
L_1b72:
    X86_TICK(c, 7);
    // 001b72  call 0x1bac
    X86_AT(c, 0x1b72u);
    push32(c, 0x1b77u); f_00001bac(c); X86_RET(c, 0x1b77u);
    X86_TICK(c, 7);
    // 001b77  call 0x1bcc
    X86_AT(c, 0x1b77u);
    push32(c, 0x1b7cu); f_00001bcc(c); X86_RET(c, 0x1b7cu);
    X86_TICK(c, 7);
    // 001b7c  test esi, esi
    X86_AT(c, 0x1b7cu);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 001b7e  je 0x1b90
    X86_AT(c, 0x1b7eu);
    if (x86_cc(c, 4)) { goto L_1b90; }
    X86_TICK(c, 8);
    // 001b80  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x1b80u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 001b88  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x1b88u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 001b8c  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x1b8cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
L_1b90:
    X86_TICK(c, 12);
    // 001b90  mov ah, 0
    X86_AT(c, 0x1b90u);
    s8(c, 4, 0x0u);
    // 001b92  ret 
    X86_AT(c, 0x1b92u);
    c.eip = pop32(c); return;
L_1b93:
    X86_TICK(c, 12);
    // 001b93  mov ah, 0xff
    X86_AT(c, 0x1b93u);
    s8(c, 4, 0xFFu);
    // 001b95  ret 
    X86_AT(c, 0x1b95u);
    c.eip = pop32(c); return;
L_1b98:
    X86_TICK(c, 11);
    // 001b98  mov bl, al
    X86_AT(c, 0x1b98u);
    s8(c, 3, g8(c, 0));
    // 001b9a  sub al, 0x80
    X86_AT(c, 0x1b9au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x80u, 0, 1)); }
    // 001b9c  cmp al, 3
    X86_AT(c, 0x1b9cu);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 001b9e  ja 0x1b93
    X86_AT(c, 0x1b9eu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x1b93u); goto L_1b93; }
    X86_TICK(c, 11);
    // 001ba0  mov byte ptr gs:[ebp + 0x30], bl
    X86_AT(c, 0x1ba0u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)), g8(c, 3));
    // 001ba4  mov edi, 0x70
    X86_AT(c, 0x1ba4u);
    c.r[7] = 0x70u;
    // 001ba9  jmp 0x1b72
    X86_AT(c, 0x1ba9u);
    X86_POLL(c, 0x1b72u); goto L_1b72;
    x86_fault(c, 0x1b3bu, "ran off the end of a function");
}
void f_00001b3d(X86Cpu& c) {
    X86_TICK(c, 5);
    // 001b3d  jl 0x1b98
    X86_AT(c, 0x1b3du);
    if (x86_cc(c, 12)) { goto L_1b98; }
    X86_TICK(c, 7);
    // 001b3f  cmp al, 1
    X86_AT(c, 0x1b3fu);
    (void)x86_sub(c, g8(c, 0), 0x1u, 0, 1);
    // 001b41  ja 0x1b93
    X86_AT(c, 0x1b41u);
    if (x86_cc(c, 7)) { goto L_1b93; }
    X86_TICK(c, 5);
    // 001b43  jb 0x1b4c
    X86_AT(c, 0x1b43u);
    if (x86_cc(c, 2)) { goto L_1b4c; }
    X86_TICK(c, 12);
    // 001b45  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0x1b45u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 001b4a  jae 0x1b93
    X86_AT(c, 0x1b4au);
    if (x86_cc(c, 3)) { goto L_1b93; }
L_1b4c:
    X86_TICK(c, 7);
    // 001b4c  test bl, bl
    X86_AT(c, 0x1b4cu);
    (void)x86_logic(c, g8(c, 3) & g8(c, 3), 1);
    // 001b4e  jne 0x1b69
    X86_AT(c, 0x1b4eu);
    if (x86_cc(c, 5)) { goto L_1b69; }
    X86_TICK(c, 26);
    // 001b50  push eax
    X86_AT(c, 0x1b50u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 001b51  shl al, 5
    X86_AT(c, 0x1b51u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 1, w); if (w) s8(c, 0, r); }
    // 001b54  and byte ptr gs:[ebp + 0x101], 0xdf
    X86_AT(c, 0x1b54u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x101u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xDFu, 1)); }
    // 001b5c  or byte ptr gs:[ebp + 0x101], al
    X86_AT(c, 0x1b5cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x101u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 0), 1)); }
    // 001b63  call 0xe29
    X86_AT(c, 0x1b63u);
    push32(c, 0x1b68u); f_00000e29(c); X86_RET(c, 0x1b68u);
    X86_TICK(c, 4);
    // 001b68  pop eax
    X86_AT(c, 0x1b68u);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_1b69:
    X86_TICK(c, 4);
    // 001b69  mov byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x1b69u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)), g8(c, 0));
    // 001b6d  mov edi, 0x40
    X86_AT(c, 0x1b6du);
    c.r[7] = 0x40u;
L_1b72:
    X86_TICK(c, 7);
    // 001b72  call 0x1bac
    X86_AT(c, 0x1b72u);
    push32(c, 0x1b77u); f_00001bac(c); X86_RET(c, 0x1b77u);
    X86_TICK(c, 7);
    // 001b77  call 0x1bcc
    X86_AT(c, 0x1b77u);
    push32(c, 0x1b7cu); f_00001bcc(c); X86_RET(c, 0x1b7cu);
    X86_TICK(c, 7);
    // 001b7c  test esi, esi
    X86_AT(c, 0x1b7cu);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 001b7e  je 0x1b90
    X86_AT(c, 0x1b7eu);
    if (x86_cc(c, 4)) { goto L_1b90; }
    X86_TICK(c, 8);
    // 001b80  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x1b80u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 001b88  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x1b88u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 001b8c  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x1b8cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
L_1b90:
    X86_TICK(c, 12);
    // 001b90  mov ah, 0
    X86_AT(c, 0x1b90u);
    s8(c, 4, 0x0u);
    // 001b92  ret 
    X86_AT(c, 0x1b92u);
    c.eip = pop32(c); return;
L_1b93:
    X86_TICK(c, 12);
    // 001b93  mov ah, 0xff
    X86_AT(c, 0x1b93u);
    s8(c, 4, 0xFFu);
    // 001b95  ret 
    X86_AT(c, 0x1b95u);
    c.eip = pop32(c); return;
L_1b98:
    X86_TICK(c, 11);
    // 001b98  mov bl, al
    X86_AT(c, 0x1b98u);
    s8(c, 3, g8(c, 0));
    // 001b9a  sub al, 0x80
    X86_AT(c, 0x1b9au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x80u, 0, 1)); }
    // 001b9c  cmp al, 3
    X86_AT(c, 0x1b9cu);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 001b9e  ja 0x1b93
    X86_AT(c, 0x1b9eu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x1b93u); goto L_1b93; }
    X86_TICK(c, 11);
    // 001ba0  mov byte ptr gs:[ebp + 0x30], bl
    X86_AT(c, 0x1ba0u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)), g8(c, 3));
    // 001ba4  mov edi, 0x70
    X86_AT(c, 0x1ba4u);
    c.r[7] = 0x70u;
    // 001ba9  jmp 0x1b72
    X86_AT(c, 0x1ba9u);
    X86_POLL(c, 0x1b72u); goto L_1b72;
    x86_fault(c, 0x1b3du, "ran off the end of a function");
}
}
