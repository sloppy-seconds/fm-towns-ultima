#include "p_game_funcs.h"
namespace p_game {
void f_000ff97f(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0ff97f  push eax
    X86_AT(c, 0xff97fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ff980  push ds
    X86_AT(c, 0xff980u);
    push32(c, c.sreg[3]);
    // 0ff981  push es
    X86_AT(c, 0xff981u);
    push32(c, c.sreg[0]);
    // 0ff982  mov ax, 0x14
    X86_AT(c, 0xff982u);
    s16(c, 0, 0x14u);
    // 0ff986  mov ds, eax
    X86_AT(c, 0xff986u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0ff988  mov es, eax
    X86_AT(c, 0xff988u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0ff98a  cld 
    X86_AT(c, 0xff98au);
    c.fl &= ~X86_DF;
    // 0ff98b  cmp byte ptr [0xdf0e8], 0
    X86_AT(c, 0xff98bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDF0E8u))), 0x0u, 0, 1);
    // 0ff992  jne 0xff9ae
    X86_AT(c, 0xff992u);
    if (x86_cc(c, 5)) { goto L_ff9ae; }
    X86_TICK(c, 10);
    // 0ff998  mov dword ptr [0xdf0ef], esp
    X86_AT(c, 0xff998u);
    wr32((c.sbase[3] + (uint32_t)(0xDF0EFu)), c.r[4]);
    // 0ff99e  mov word ptr [0xdf0f3], ss
    X86_AT(c, 0xff99eu);
    wr16((c.sbase[3] + (uint32_t)(0xDF0F3u)), (uint32_t)c.sreg[2]);
    // 0ff9a4  mov eax, ds
    X86_AT(c, 0xff9a4u);
    c.r[0] = (uint32_t)c.sreg[3];
    // 0ff9a6  mov ss, eax
    X86_AT(c, 0xff9a6u);
    x86_load_seg(c, 2, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0ff9a8  lea esp, [0xdf9f5]
    X86_AT(c, 0xff9a8u);
    c.r[4] = (uint32_t)(0xDF9F5u);
L_ff9ae:
    X86_TICK(c, 53);
    // 0ff9ae  inc byte ptr [0xdf0e8]
    X86_AT(c, 0xff9aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDF0E8u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 0ff9b4  sti 
    X86_AT(c, 0xff9b4u);
    c.fl |= X86_IF;
    // 0ff9b5  push fs
    X86_AT(c, 0xff9b5u);
    push32(c, c.sreg[4]);
    // 0ff9b7  push gs
    X86_AT(c, 0xff9b7u);
    push32(c, c.sreg[5]);
    // 0ff9b9  pushal 
    X86_AT(c, 0xff9b9u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0ff9ba  mov dx, 0xe70
    X86_AT(c, 0xff9bau);
    s16(c, 2, 0xE70u);
    // 0ff9be  in ax, dx
    X86_AT(c, 0xff9beu);
    s16(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 2));
    // 0ff9c0  xor ax, 0xffff
    X86_AT(c, 0xff9c0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ 0xFFFFu, 2)); }
    // 0ff9c4  call 0xffa8a
    X86_AT(c, 0xff9c4u);
    push32(c, 0xff9c9u); f_000ffa8a(c); X86_RET(c, 0xff9c9u);
    X86_TICK(c, 7);
    // 0ff9c9  call 0xffaa6
    X86_AT(c, 0xff9c9u);
    push32(c, 0xff9ceu); f_000ffaa6(c); X86_RET(c, 0xff9ceu);
    X86_TICK(c, 7);
    // 0ff9ce  call 0xffac6
    X86_AT(c, 0xff9ceu);
    push32(c, 0xff9d3u); f_000ffac6(c); X86_RET(c, 0xff9d3u);
    X86_TICK(c, 7);
    // 0ff9d3  call 0xfdef1
    X86_AT(c, 0xff9d3u);
    push32(c, 0xff9d8u); f_000fdef1(c); X86_RET(c, 0xff9d8u);
    X86_TICK(c, 45);
    // 0ff9d8  popal 
    X86_AT(c, 0xff9d8u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0ff9d9  pop gs
    X86_AT(c, 0xff9d9u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0ff9db  pop fs
    X86_AT(c, 0xff9dbu);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0ff9dd  cli 
    X86_AT(c, 0xff9ddu);
    c.fl &= ~X86_IF;
    // 0ff9de  dec byte ptr [0xdf0e8]
    X86_AT(c, 0xff9deu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDF0E8u)); uint32_t v = rd8(ea); wr8(ea, x86_dec(c, v, 1)); }
    // 0ff9e4  jne 0xff9f6
    X86_AT(c, 0xff9e4u);
    if (x86_cc(c, 5)) { goto L_ff9f6; }
    X86_TICK(c, 8);
    // 0ff9ea  mov esp, dword ptr [0xdf0ef]
    X86_AT(c, 0xff9eau);
    c.r[4] = rd32((c.sbase[3] + (uint32_t)(0xDF0EFu)));
    // 0ff9f0  mov ss, word ptr [0xdf0f3]
    X86_AT(c, 0xff9f0u);
    x86_load_seg(c, 2, rd16((c.sbase[3] + (uint32_t)(0xDF0F3u))) & 0xFFFFu);
L_ff9f6:
    X86_TICK(c, 18);
    // 0ff9f6  pop es
    X86_AT(c, 0xff9f6u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0ff9f7  pop ds
    X86_AT(c, 0xff9f7u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0ff9f8  pop eax
    X86_AT(c, 0xff9f8u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0ff9f9  iretd 
    X86_AT(c, 0xff9f9u);
    x86_iret(c, 4); return;
    x86_fault(c, 0xff97fu, "ran off the end of a function");
}
void f_000ff9fa(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0ff9fa  push eax
    X86_AT(c, 0xff9fau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ff9fb  push ds
    X86_AT(c, 0xff9fbu);
    push32(c, c.sreg[3]);
    // 0ff9fc  push es
    X86_AT(c, 0xff9fcu);
    push32(c, c.sreg[0]);
    // 0ff9fd  mov ax, 0x14
    X86_AT(c, 0xff9fdu);
    s16(c, 0, 0x14u);
    // 0ffa01  mov ds, eax
    X86_AT(c, 0xffa01u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0ffa03  mov es, eax
    X86_AT(c, 0xffa03u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0ffa05  cld 
    X86_AT(c, 0xffa05u);
    c.fl &= ~X86_DF;
    // 0ffa06  cmp byte ptr [0xdf0e7], 0
    X86_AT(c, 0xffa06u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDF0E7u))), 0x0u, 0, 1);
    // 0ffa0d  jne 0xffa29
    X86_AT(c, 0xffa0du);
    if (x86_cc(c, 5)) { goto L_ffa29; }
    X86_TICK(c, 10);
    // 0ffa13  mov dword ptr [0xdf0e9], esp
    X86_AT(c, 0xffa13u);
    wr32((c.sbase[3] + (uint32_t)(0xDF0E9u)), c.r[4]);
    // 0ffa19  mov word ptr [0xdf0ed], ss
    X86_AT(c, 0xffa19u);
    wr16((c.sbase[3] + (uint32_t)(0xDF0EDu)), (uint32_t)c.sreg[2]);
    // 0ffa1f  mov eax, ds
    X86_AT(c, 0xffa1fu);
    c.r[0] = (uint32_t)c.sreg[3];
    // 0ffa21  mov ss, eax
    X86_AT(c, 0xffa21u);
    x86_load_seg(c, 2, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0ffa23  lea esp, [0xdf7f5]
    X86_AT(c, 0xffa23u);
    c.r[4] = (uint32_t)(0xDF7F5u);
L_ffa29:
    X86_TICK(c, 51);
    // 0ffa29  inc byte ptr [0xdf0e7]
    X86_AT(c, 0xffa29u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDF0E7u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 0ffa2f  sti 
    X86_AT(c, 0xffa2fu);
    c.fl |= X86_IF;
    // 0ffa30  push fs
    X86_AT(c, 0xffa30u);
    push32(c, c.sreg[4]);
    // 0ffa32  push gs
    X86_AT(c, 0xffa32u);
    push32(c, c.sreg[5]);
    // 0ffa34  pushal 
    X86_AT(c, 0xffa34u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0ffa35  mov dx, 0xe73
    X86_AT(c, 0xffa35u);
    s16(c, 2, 0xE73u);
    // 0ffa39  in al, dx
    X86_AT(c, 0xffa39u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0ffa3a  test al, 1
    X86_AT(c, 0xffa3au);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0ffa3c  je 0xffa43
    X86_AT(c, 0xffa3cu);
    if (x86_cc(c, 4)) { goto L_ffa43; }
    X86_TICK(c, 7);
    // 0ffa3e  call 0xffaef
    X86_AT(c, 0xffa3eu);
    push32(c, 0xffa43u); f_000ffaef(c); X86_RET(c, 0xffa43u);
L_ffa43:
    X86_TICK(c, 7);
    // 0ffa43  test al, 2
    X86_AT(c, 0xffa43u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0ffa45  je 0xffa4c
    X86_AT(c, 0xffa45u);
    if (x86_cc(c, 4)) { goto L_ffa4c; }
    X86_TICK(c, 7);
    // 0ffa47  call 0xffb64
    X86_AT(c, 0xffa47u);
    push32(c, 0xffa4cu); f_000ffb64(c); X86_RET(c, 0xffa4cu);
L_ffa4c:
    X86_TICK(c, 9);
    // 0ffa4c  cli 
    X86_AT(c, 0xffa4cu);
    c.fl &= ~X86_IF;
    // 0ffa4d  call 0xfdef1
    X86_AT(c, 0xffa4du);
    push32(c, 0xffa52u); f_000fdef1(c); X86_RET(c, 0xffa52u);
    X86_TICK(c, 7);
    // 0ffa52  test al, 1
    X86_AT(c, 0xffa52u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0ffa54  je 0xffa68
    X86_AT(c, 0xffa54u);
    if (x86_cc(c, 4)) { goto L_ffa68; }
    X86_TICK(c, 7);
    // 0ffa56  call 0xfdeeb
    X86_AT(c, 0xffa56u);
    push32(c, 0xffa5bu); f_000fdeeb(c); X86_RET(c, 0xffa5bu);
    X86_TICK(c, 7);
    // 0ffa5b  or al, al
    X86_AT(c, 0xffa5bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | g8(c, 0), 1)); }
    // 0ffa5d  jne 0xffa68
    X86_AT(c, 0xffa5du);
    if (x86_cc(c, 5)) { goto L_ffa68; }
    X86_TICK(c, 7);
    // 0ffa63  call 0xffc90
    X86_AT(c, 0xffa63u);
    push32(c, 0xffa68u); f_000ffc90(c); X86_RET(c, 0xffa68u);
L_ffa68:
    X86_TICK(c, 45);
    // 0ffa68  popal 
    X86_AT(c, 0xffa68u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0ffa69  pop gs
    X86_AT(c, 0xffa69u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0ffa6b  pop fs
    X86_AT(c, 0xffa6bu);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0ffa6d  cli 
    X86_AT(c, 0xffa6du);
    c.fl &= ~X86_IF;
    // 0ffa6e  dec byte ptr [0xdf0e7]
    X86_AT(c, 0xffa6eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDF0E7u)); uint32_t v = rd8(ea); wr8(ea, x86_dec(c, v, 1)); }
    // 0ffa74  jne 0xffa86
    X86_AT(c, 0xffa74u);
    if (x86_cc(c, 5)) { goto L_ffa86; }
    X86_TICK(c, 8);
    // 0ffa7a  mov esp, dword ptr [0xdf0e9]
    X86_AT(c, 0xffa7au);
    c.r[4] = rd32((c.sbase[3] + (uint32_t)(0xDF0E9u)));
    // 0ffa80  mov ss, word ptr [0xdf0ed]
    X86_AT(c, 0xffa80u);
    x86_load_seg(c, 2, rd16((c.sbase[3] + (uint32_t)(0xDF0EDu))) & 0xFFFFu);
L_ffa86:
    X86_TICK(c, 18);
    // 0ffa86  pop es
    X86_AT(c, 0xffa86u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0ffa87  pop ds
    X86_AT(c, 0xffa87u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0ffa88  pop eax
    X86_AT(c, 0xffa88u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0ffa89  iretd 
    X86_AT(c, 0xffa89u);
    x86_iret(c, 4); return;
    x86_fault(c, 0xff9fau, "ran off the end of a function");
}
void f_000ffa8a(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0ffa8a  push ax
    X86_AT(c, 0xffa8au);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0ffa8c  mov al, ah
    X86_AT(c, 0xffa8cu);
    s8(c, 0, g8(c, 4));
    // 0ffa8e  and al, 0xf
    X86_AT(c, 0xffa8eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0ffa90  je 0xffaa3
    X86_AT(c, 0xffa90u);
    if (x86_cc(c, 4)) { goto L_ffaa3; }
    X86_TICK(c, 2);
    // 0ffa92  xor ecx, ecx
    X86_AT(c, 0xffa92u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v ^ c.r[1], 4); }
L_ffa94:
    X86_TICK(c, 8);
    // 0ffa94  shr al, 1
    X86_AT(c, 0xffa94u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 0ffa96  jae 0xffa9d
    X86_AT(c, 0xffa96u);
    if (x86_cc(c, 3)) { goto L_ffa9d; }
    X86_TICK(c, 7);
    // 0ffa98  call 0xffbc2
    X86_AT(c, 0xffa98u);
    push32(c, 0xffa9du); f_000ffbc2(c); X86_RET(c, 0xffa9du);
L_ffa9d:
    X86_TICK(c, 9);
    // 0ffa9d  inc ecx
    X86_AT(c, 0xffa9du);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0ffa9e  cmp ecx, 4
    X86_AT(c, 0xffa9eu);
    (void)x86_sub(c, c.r[1], 0x4u, 0, 4);
    // 0ffaa1  jb 0xffa94
    X86_AT(c, 0xffaa1u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xffa94u); goto L_ffa94; }
L_ffaa3:
    X86_TICK(c, 14);
    // 0ffaa3  pop ax
    X86_AT(c, 0xffaa3u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0ffaa5  ret 
    X86_AT(c, 0xffaa5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xffa8au, "ran off the end of a function");
}
void f_000ffaa6(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0ffaa6  push ax
    X86_AT(c, 0xffaa6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0ffaa8  or al, al
    X86_AT(c, 0xffaa8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | g8(c, 0), 1)); }
    // 0ffaaa  je 0xffac3
    X86_AT(c, 0xffaaau);
    if (x86_cc(c, 4)) { goto L_ffac3; }
    X86_TICK(c, 2);
    // 0ffaac  xor ecx, ecx
    X86_AT(c, 0xffaacu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v ^ c.r[1], 4); }
L_ffaae:
    X86_TICK(c, 8);
    // 0ffaae  shr al, 1
    X86_AT(c, 0xffaaeu);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 0ffab0  jae 0xffabb
    X86_AT(c, 0xffab0u);
    if (x86_cc(c, 3)) { goto L_ffabb; }
    X86_TICK(c, 7);
    // 0ffab6  call 0xffc22
    X86_AT(c, 0xffab6u);
    push32(c, 0xffabbu); f_000ffc22(c); X86_RET(c, 0xffabbu);
L_ffabb:
    X86_TICK(c, 9);
    // 0ffabb  inc cx
    X86_AT(c, 0xffabbu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_inc(c, v, 2)); }
    // 0ffabd  cmp cx, 8
    X86_AT(c, 0xffabdu);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x8u, 0, 2);
    // 0ffac1  jb 0xffaae
    X86_AT(c, 0xffac1u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xffaaeu); goto L_ffaae; }
L_ffac3:
    X86_TICK(c, 14);
    // 0ffac3  pop ax
    X86_AT(c, 0xffac3u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0ffac5  ret 
    X86_AT(c, 0xffac5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xffaa6u, "ran off the end of a function");
}
void f_000ffac6(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0ffac6  push ax
    X86_AT(c, 0xffac6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0ffac8  mov al, ah
    X86_AT(c, 0xffac8u);
    s8(c, 0, g8(c, 4));
    // 0ffaca  and al, 0xf0
    X86_AT(c, 0xffacau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0ffacc  and al, byte ptr [0xdf0c7]
    X86_AT(c, 0xffaccu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & rd8((c.sbase[3] + (uint32_t)(0xDF0C7u))), 1)); }
    // 0ffad2  je 0xffaec
    X86_AT(c, 0xffad2u);
    if (x86_cc(c, 4)) { goto L_ffaec; }
    X86_TICK(c, 31);
    // 0ffad4  or byte ptr [0xdf0c8], al
    X86_AT(c, 0xffad4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDF0C8u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 0), 1)); }
    // 0ffada  xor al, 0xff
    X86_AT(c, 0xffadau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0xFFu, 1)); }
    // 0ffadc  and al, byte ptr [0xdf0c7]
    X86_AT(c, 0xffadcu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & rd8((c.sbase[3] + (uint32_t)(0xDF0C7u))), 1)); }
    // 0ffae2  mov dx, 0xe71
    X86_AT(c, 0xffae2u);
    s16(c, 2, 0xE71u);
    // 0ffae6  out dx, al
    X86_AT(c, 0xffae6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0ffae7  mov byte ptr [0xdf0c7], al
    X86_AT(c, 0xffae7u);
    wr8((c.sbase[3] + (uint32_t)(0xDF0C7u)), g8(c, 0));
L_ffaec:
    X86_TICK(c, 14);
    // 0ffaec  pop ax
    X86_AT(c, 0xffaecu);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0ffaee  ret 
    X86_AT(c, 0xffaeeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xffac6u, "ran off the end of a function");
}
void f_000ffaef(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0ffaef  push ax
    X86_AT(c, 0xffaefu);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0ffaf1  call 0xff88f
    X86_AT(c, 0xffaf1u);
    push32(c, 0xffaf6u); f_000ff88f(c); X86_RET(c, 0xffaf6u);
    X86_TICK(c, 8);
    // 0ffaf6  sub ax, 8
    X86_AT(c, 0xffaf6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x8u, 0, 2)); }
    // 0ffafa  mov dx, word ptr [0xdee9e]
    X86_AT(c, 0xffafau);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(0xDEE9Eu))));
    // 0ffb01  xor cx, cx
    X86_AT(c, 0xffb01u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v ^ (c.r[1] & 0xFFFFu), 2)); }
L_ffb04:
    X86_TICK(c, 9);
    // 0ffb04  inc cx
    X86_AT(c, 0xffb04u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_inc(c, v, 2)); }
    // 0ffb06  add ax, dx
    X86_AT(c, 0xffb06u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 0ffb09  jae 0xffb04
    X86_AT(c, 0xffb09u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xffb04u); goto L_ffb04; }
    X86_TICK(c, 7);
    // 0ffb0b  call 0xff872
    X86_AT(c, 0xffb0bu);
    push32(c, 0xffb10u); f_000ff872(c); X86_RET(c, 0xffb10u);
    X86_TICK(c, 53);
    // 0ffb10  mov ax, word ptr [0xdee97]
    X86_AT(c, 0xffb10u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xDEE97u))));
    // 0ffb16  mul cl
    X86_AT(c, 0xffb16u);
    x86_mul(c, g8(c, 1), 1);
    // 0ffb18  add ax, word ptr [0xdee95]
    X86_AT(c, 0xffb18u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(0xDEE95u))), 0, 2)); }
    // 0ffb1f  mov cx, ax
    X86_AT(c, 0xffb1fu);
    s16(c, 1, (c.r[0] & 0xFFFFu));
    // 0ffb22  and cx, 0xf
    X86_AT(c, 0xffb22u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & 0xFu, 2)); }
    // 0ffb26  mov word ptr [0xdee95], cx
    X86_AT(c, 0xffb26u);
    wr16((c.sbase[3] + (uint32_t)(0xDEE95u)), (c.r[1] & 0xFFFFu));
    // 0ffb2d  shr ax, 4
    X86_AT(c, 0xffb2du);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 0ffb31  sub byte ptr [0xdee94], al
    X86_AT(c, 0xffb31u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDEE94u)); uint32_t v = rd8(ea); wr8(ea, x86_sub(c, v, g8(c, 0), 0, 1)); }
    // 0ffb37  jns 0xffb48
    X86_AT(c, 0xffb37u);
    if (x86_cc(c, 9)) { goto L_ffb48; }
L_ffb39:
    X86_TICK(c, 18);
    // 0ffb39  inc byte ptr [0xdee93]
    X86_AT(c, 0xffb39u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDEE93u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 0ffb3f  add byte ptr [0xdee94], 4
    X86_AT(c, 0xffb3fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDEE94u)); uint32_t v = rd8(ea); wr8(ea, x86_add(c, v, 0x4u, 0, 1)); }
    // 0ffb46  jae 0xffb39
    X86_AT(c, 0xffb46u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xffb39u); goto L_ffb39; }
L_ffb48:
    X86_TICK(c, 12);
    // 0ffb48  cmp byte ptr [0xdee86], 0
    X86_AT(c, 0xffb48u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDEE86u))), 0x0u, 0, 1);
    // 0ffb4f  je 0xffb61
    X86_AT(c, 0xffb4fu);
    if (x86_cc(c, 4)) { goto L_ffb61; }
    X86_TICK(c, 12);
    // 0ffb51  cmp byte ptr [0xdee88], 0
    X86_AT(c, 0xffb51u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDEE88u))), 0x0u, 0, 1);
    // 0ffb58  jne 0xffb61
    X86_AT(c, 0xffb58u);
    if (x86_cc(c, 5)) { goto L_ffb61; }
    X86_TICK(c, 7);
    // 0ffb5a  add word ptr [0xdee99], ax
    X86_AT(c, 0xffb5au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDEE99u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_ffb61:
    X86_TICK(c, 14);
    // 0ffb61  pop ax
    X86_AT(c, 0xffb61u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0ffb63  ret 
    X86_AT(c, 0xffb63u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xffaefu, "ran off the end of a function");
}
void f_000ffb64(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0ffb64  push ax
    X86_AT(c, 0xffb64u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0ffb66  mov ax, 0xffff
    X86_AT(c, 0xffb66u);
    s16(c, 0, 0xFFFFu);
    // 0ffb6a  call 0xff8a1
    X86_AT(c, 0xffb6au);
    push32(c, 0xffb6fu); f_000ff8a1(c); X86_RET(c, 0xffb6fu);
    X86_TICK(c, 14);
    // 0ffb6f  pop ax
    X86_AT(c, 0xffb6fu);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0ffb71  ret 
    X86_AT(c, 0xffb71u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xffb64u, "ran off the end of a function");
}
void f_000ffb72(X86Cpu& c) {
    X86_TICK(c, 31);
    // 0ffb72  mov ax, word ptr [0xdee97]
    X86_AT(c, 0xffb72u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xDEE97u))));
    // 0ffb78  add ax, word ptr [0xdee95]
    X86_AT(c, 0xffb78u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(0xDEE95u))), 0, 2)); }
    // 0ffb7f  mov cx, ax
    X86_AT(c, 0xffb7fu);
    s16(c, 1, (c.r[0] & 0xFFFFu));
    // 0ffb82  and cx, 0xf
    X86_AT(c, 0xffb82u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & 0xFu, 2)); }
    // 0ffb86  mov word ptr [0xdee95], cx
    X86_AT(c, 0xffb86u);
    wr16((c.sbase[3] + (uint32_t)(0xDEE95u)), (c.r[1] & 0xFFFFu));
    // 0ffb8d  shr ax, 4
    X86_AT(c, 0xffb8du);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 0ffb91  sub byte ptr [0xdee94], al
    X86_AT(c, 0xffb91u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDEE94u)); uint32_t v = rd8(ea); wr8(ea, x86_sub(c, v, g8(c, 0), 0, 1)); }
    // 0ffb97  jns 0xffba8
    X86_AT(c, 0xffb97u);
    if (x86_cc(c, 9)) { goto L_ffba8; }
L_ffb99:
    X86_TICK(c, 18);
    // 0ffb99  inc byte ptr [0xdee93]
    X86_AT(c, 0xffb99u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDEE93u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 0ffb9f  add byte ptr [0xdee94], 4
    X86_AT(c, 0xffb9fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDEE94u)); uint32_t v = rd8(ea); wr8(ea, x86_add(c, v, 0x4u, 0, 1)); }
    // 0ffba6  jae 0xffb99
    X86_AT(c, 0xffba6u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xffb99u); goto L_ffb99; }
L_ffba8:
    X86_TICK(c, 12);
    // 0ffba8  cmp byte ptr [0xdee86], 0
    X86_AT(c, 0xffba8u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDEE86u))), 0x0u, 0, 1);
    // 0ffbaf  je 0xffbc1
    X86_AT(c, 0xffbafu);
    if (x86_cc(c, 4)) { goto L_ffbc1; }
    X86_TICK(c, 12);
    // 0ffbb1  cmp byte ptr [0xdee88], 0
    X86_AT(c, 0xffbb1u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDEE88u))), 0x0u, 0, 1);
    // 0ffbb8  jne 0xffbc1
    X86_AT(c, 0xffbb8u);
    if (x86_cc(c, 5)) { goto L_ffbc1; }
    X86_TICK(c, 7);
    // 0ffbba  add word ptr [0xdee99], ax
    X86_AT(c, 0xffbbau);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDEE99u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_ffbc1:
    X86_TICK(c, 10);
    // 0ffbc1  ret 
    X86_AT(c, 0xffbc1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xffb72u, "ran off the end of a function");
}
void f_000ffbc2(X86Cpu& c) {
    X86_TICK(c, 32);
    // 0ffbc2  push ax
    X86_AT(c, 0xffbc2u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0ffbc4  mov ebx, ecx
    X86_AT(c, 0xffbc4u);
    c.r[3] = c.r[1];
    // 0ffbc6  shl ebx, 5
    X86_AT(c, 0xffbc6u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[3] = r; }
    // 0ffbc9  lea ebx, [ebx + 0xdf1f5]
    X86_AT(c, 0xffbc9u);
    c.r[3] = (uint32_t)(c.r[3] + 0xDF1F5u);
    // 0ffbcf  mov dx, word ptr [ebx + 0x14]
    X86_AT(c, 0xffbcfu);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x14u))));
    // 0ffbd3  in al, dx
    X86_AT(c, 0xffbd3u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0ffbd4  test al, 4
    X86_AT(c, 0xffbd4u);
    (void)x86_logic(c, g8(c, 0) & 0x4u, 1);
    // 0ffbd6  je 0xffbf0
    X86_AT(c, 0xffbd6u);
    if (x86_cc(c, 4)) { goto L_ffbf0; }
    X86_TICK(c, 6);
    // 0ffbd8  mov byte ptr [ebx + 0x19], 0x10
    X86_AT(c, 0xffbd8u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), 0x10u);
    // 0ffbdc  mov dx, word ptr [ebx + 0x14]
    X86_AT(c, 0xffbdcu);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x14u))));
L_ffbe0:
    X86_TICK(c, 19);
    // 0ffbe0  in al, dx
    X86_AT(c, 0xffbe0u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0ffbe1  test al, 1
    X86_AT(c, 0xffbe1u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0ffbe3  jne 0xffbe0
    X86_AT(c, 0xffbe3u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xffbe0u); goto L_ffbe0; }
    X86_TICK(c, 24);
    // 0ffbe5  push dx
    X86_AT(c, 0xffbe5u);
    { uint32_t v = (c.r[2] & 0xFFFFu); push16(c, v); }
    // 0ffbe7  mov dx, word ptr [ebx + 0x12]
    X86_AT(c, 0xffbe7u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x12u))));
    // 0ffbeb  mov al, 0x37
    X86_AT(c, 0xffbebu);
    s8(c, 0, 0x37u);
    // 0ffbed  out dx, al
    X86_AT(c, 0xffbedu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0ffbee  pop dx
    X86_AT(c, 0xffbeeu);
    { uint32_t v = pop16(c); s16(c, 2, v); }
L_ffbf0:
    X86_TICK(c, 19);
    // 0ffbf0  in al, dx
    X86_AT(c, 0xffbf0u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0ffbf1  test al, 2
    X86_AT(c, 0xffbf1u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0ffbf3  jne 0xffbf0
    X86_AT(c, 0xffbf3u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xffbf0u); goto L_ffbf0; }
    X86_TICK(c, 21);
    // 0ffbf5  dec dx
    X86_AT(c, 0xffbf5u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0ffbf7  in al, dx
    X86_AT(c, 0xffbf7u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0ffbf8  cmp al, 0xf8
    X86_AT(c, 0xffbf8u);
    (void)x86_sub(c, g8(c, 0), 0xF8u, 0, 1);
    // 0ffbfa  jb 0xffc00
    X86_AT(c, 0xffbfau);
    if (x86_cc(c, 2)) { goto L_ffc00; }
    X86_TICK(c, 9);
    // 0ffbfc  mov bl, cl
    X86_AT(c, 0xffbfcu);
    s8(c, 3, g8(c, 1));
    // 0ffbfe  jmp 0xffc1f
    X86_AT(c, 0xffbfeu);
    goto L_ffc1f;
L_ffc00:
    X86_TICK(c, 12);
    // 0ffc00  cmp word ptr [ebx + 0x10], 0x40
    X86_AT(c, 0xffc00u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0x40u, 0, 2);
    // 0ffc05  jb 0xffc0d
    X86_AT(c, 0xffc05u);
    if (x86_cc(c, 2)) { goto L_ffc0d; }
    X86_TICK(c, 9);
    // 0ffc07  mov byte ptr [ebx + 0x19], 0x10
    X86_AT(c, 0xffc07u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), 0x10u);
    // 0ffc0b  jmp 0xffc1f
    X86_AT(c, 0xffc0bu);
    goto L_ffc1f;
L_ffc0d:
    X86_TICK(c, 28);
    // 0ffc0d  mov edi, dword ptr [ebx + 8]
    X86_AT(c, 0xffc0du);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0ffc10  stosb byte ptr es:[edi], al
    X86_AT(c, 0xffc10u);
    x86_string(c, 2, 1, 0, 4, 3);
    // 0ffc11  inc word ptr [ebx + 0x10]
    X86_AT(c, 0xffc11u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0ffc15  cmp edi, dword ptr [ebx + 4]
    X86_AT(c, 0xffc15u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 0ffc18  jne 0xffc1c
    X86_AT(c, 0xffc18u);
    if (x86_cc(c, 5)) { goto L_ffc1c; }
    X86_TICK(c, 4);
    // 0ffc1a  mov edi, dword ptr [ebx]
    X86_AT(c, 0xffc1au);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
L_ffc1c:
    X86_TICK(c, 2);
    // 0ffc1c  mov dword ptr [ebx + 8], edi
    X86_AT(c, 0xffc1cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)), c.r[7]);
L_ffc1f:
    X86_TICK(c, 14);
    // 0ffc1f  pop ax
    X86_AT(c, 0xffc1fu);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0ffc21  ret 
    X86_AT(c, 0xffc21u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xffbc2u, "ran off the end of a function");
}
void f_000ffc22(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0ffc22  push ax
    X86_AT(c, 0xffc22u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0ffc24  mov ebx, ecx
    X86_AT(c, 0xffc24u);
    c.r[3] = c.r[1];
    // 0ffc26  shl ebx, 5
    X86_AT(c, 0xffc26u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[3] = r; }
    // 0ffc29  lea ebx, [ebx + 0xdf0f5]
    X86_AT(c, 0xffc29u);
    c.r[3] = (uint32_t)(c.r[3] + 0xDF0F5u);
    // 0ffc2f  dec word ptr [ebx + 0x10]
    X86_AT(c, 0xffc2fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 0ffc33  js 0xffc74
    X86_AT(c, 0xffc33u);
    if (x86_cc(c, 8)) { goto L_ffc74; }
    X86_TICK(c, 4);
    // 0ffc39  mov dx, word ptr [ebx + 0x14]
    X86_AT(c, 0xffc39u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x14u))));
L_ffc3d:
    X86_TICK(c, 37);
    // 0ffc3d  mov al, 1
    X86_AT(c, 0xffc3du);
    s8(c, 0, 0x1u);
    // 0ffc3f  out dx, al
    X86_AT(c, 0xffc3fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0ffc40  nop 
    X86_AT(c, 0xffc40u);
    // 0ffc41  nop 
    X86_AT(c, 0xffc41u);
    // 0ffc42  in al, dx
    X86_AT(c, 0xffc42u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0ffc43  test al, 1
    X86_AT(c, 0xffc43u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0ffc45  jne 0xffc3d
    X86_AT(c, 0xffc45u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xffc3du); goto L_ffc3d; }
    X86_TICK(c, 35);
    // 0ffc47  out dx, al
    X86_AT(c, 0xffc47u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0ffc48  nop 
    X86_AT(c, 0xffc48u);
    // 0ffc49  nop 
    X86_AT(c, 0xffc49u);
    // 0ffc4a  in al, dx
    X86_AT(c, 0xffc4au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0ffc4b  test al, 1
    X86_AT(c, 0xffc4bu);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0ffc4d  jne 0xffc3d
    X86_AT(c, 0xffc4du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xffc3du); goto L_ffc3d; }
    X86_TICK(c, 60);
    // 0ffc4f  push dx
    X86_AT(c, 0xffc4fu);
    { uint32_t v = (c.r[2] & 0xFFFFu); push16(c, v); }
    // 0ffc51  mov esi, dword ptr [ebx + 0xc]
    X86_AT(c, 0xffc51u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)));
    // 0ffc54  lodsb al, byte ptr [esi]
    X86_AT(c, 0xffc54u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 0ffc55  mov dx, word ptr [ebx + 0x12]
    X86_AT(c, 0xffc55u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x12u))));
    // 0ffc59  dec dx
    X86_AT(c, 0xffc59u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0ffc5b  out dx, al
    X86_AT(c, 0xffc5bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0ffc5c  pop dx
    X86_AT(c, 0xffc5cu);
    { uint32_t v = pop16(c); s16(c, 2, v); }
    // 0ffc5e  mov al, 1
    X86_AT(c, 0xffc5eu);
    s8(c, 0, 0x1u);
    // 0ffc60  out dx, al
    X86_AT(c, 0xffc60u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0ffc61  cmp esi, dword ptr [ebx + 4]
    X86_AT(c, 0xffc61u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 0ffc64  jne 0xffc6c
    X86_AT(c, 0xffc64u);
    if (x86_cc(c, 5)) { goto L_ffc6c; }
    X86_TICK(c, 4);
    // 0ffc6a  mov esi, dword ptr [ebx]
    X86_AT(c, 0xffc6au);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
L_ffc6c:
    X86_TICK(c, 9);
    // 0ffc6c  mov dword ptr [ebx + 0xc], esi
    X86_AT(c, 0xffc6cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)), c.r[6]);
    // 0ffc6f  jmp 0xffc8d
    X86_AT(c, 0xffc6fu);
    goto L_ffc8d;
L_ffc74:
    X86_TICK(c, 34);
    // 0ffc74  inc word ptr [ebx + 0x10]
    X86_AT(c, 0xffc74u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0ffc78  mov al, byte ptr [ebx + 0x1a]
    X86_AT(c, 0xffc78u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Au))));
    // 0ffc7b  xor al, 0xff
    X86_AT(c, 0xffc7bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0xFFu, 1)); }
    // 0ffc7d  and al, byte ptr [0xdf0c5]
    X86_AT(c, 0xffc7du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & rd8((c.sbase[3] + (uint32_t)(0xDF0C5u))), 1)); }
    // 0ffc83  mov byte ptr [0xdf0c5], al
    X86_AT(c, 0xffc83u);
    wr8((c.sbase[3] + (uint32_t)(0xDF0C5u)), g8(c, 0));
    // 0ffc88  mov dx, 0xe70
    X86_AT(c, 0xffc88u);
    s16(c, 2, 0xE70u);
    // 0ffc8c  out dx, al
    X86_AT(c, 0xffc8cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
L_ffc8d:
    X86_TICK(c, 14);
    // 0ffc8d  pop ax
    X86_AT(c, 0xffc8du);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0ffc8f  ret 
    X86_AT(c, 0xffc8fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xffc22u, "ran off the end of a function");
}
void f_000ffc90(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0ffc90  cli 
    X86_AT(c, 0xffc90u);
    c.fl &= ~X86_IF;
    // 0ffc91  cmp byte ptr [0xdf0e6], 0
    X86_AT(c, 0xffc91u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDF0E6u))), 0x0u, 0, 1);
    // 0ffc98  jne 0xffcf0
    X86_AT(c, 0xffc98u);
    if (x86_cc(c, 5)) { goto L_ffcf0; }
    X86_TICK(c, 14);
    // 0ffc9a  mov byte ptr [0xdf0e6], 0xff
    X86_AT(c, 0xffc9au);
    wr8((c.sbase[3] + (uint32_t)(0xDF0E6u)), 0xFFu);
    // 0ffca1  cmp byte ptr [0xdf0e7], 0
    X86_AT(c, 0xffca1u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDF0E7u))), 0x0u, 0, 1);
    // 0ffca8  jne 0xffcc4
    X86_AT(c, 0xffca8u);
    if (x86_cc(c, 5)) { goto L_ffcc4; }
    X86_TICK(c, 10);
    // 0ffcae  mov dword ptr [0xdf0e9], esp
    X86_AT(c, 0xffcaeu);
    wr32((c.sbase[3] + (uint32_t)(0xDF0E9u)), c.r[4]);
    // 0ffcb4  mov word ptr [0xdf0ed], ss
    X86_AT(c, 0xffcb4u);
    wr16((c.sbase[3] + (uint32_t)(0xDF0EDu)), (uint32_t)c.sreg[2]);
    // 0ffcba  mov eax, ds
    X86_AT(c, 0xffcbau);
    c.r[0] = (uint32_t)c.sreg[3];
    // 0ffcbc  mov ss, eax
    X86_AT(c, 0xffcbcu);
    x86_load_seg(c, 2, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0ffcbe  lea esp, [0xdf7f5]
    X86_AT(c, 0xffcbeu);
    c.r[4] = (uint32_t)(0xDF7F5u);
L_ffcc4:
    X86_TICK(c, 15);
    // 0ffcc4  inc byte ptr [0xdf0e7]
    X86_AT(c, 0xffcc4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDF0E7u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 0ffcca  sti 
    X86_AT(c, 0xffccau);
    c.fl |= X86_IF;
    // 0ffccb  call 0xfe95e
    X86_AT(c, 0xffccbu);
    push32(c, 0xffcd0u); f_000fe95e(c); X86_RET(c, 0xffcd0u);
    X86_TICK(c, 13);
    // 0ffcd0  cli 
    X86_AT(c, 0xffcd0u);
    c.fl &= ~X86_IF;
    // 0ffcd1  dec byte ptr [0xdf0e7]
    X86_AT(c, 0xffcd1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDF0E7u)); uint32_t v = rd8(ea); wr8(ea, x86_dec(c, v, 1)); }
    // 0ffcd7  jne 0xffce9
    X86_AT(c, 0xffcd7u);
    if (x86_cc(c, 5)) { goto L_ffce9; }
    X86_TICK(c, 8);
    // 0ffcdd  mov esp, dword ptr [0xdf0e9]
    X86_AT(c, 0xffcddu);
    c.r[4] = rd32((c.sbase[3] + (uint32_t)(0xDF0E9u)));
    // 0ffce3  mov ss, word ptr [0xdf0ed]
    X86_AT(c, 0xffce3u);
    x86_load_seg(c, 2, rd16((c.sbase[3] + (uint32_t)(0xDF0EDu))) & 0xFFFFu);
L_ffce9:
    X86_TICK(c, 2);
    // 0ffce9  mov byte ptr [0xdf0e6], 0
    X86_AT(c, 0xffce9u);
    wr8((c.sbase[3] + (uint32_t)(0xDF0E6u)), 0x0u);
L_ffcf0:
    X86_TICK(c, 10);
    // 0ffcf0  ret 
    X86_AT(c, 0xffcf0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xffc90u, "ran off the end of a function");
}
void f_000ffd00(X86Cpu& c) {
    X86_TICK(c, 70);
    // 0ffd00  push es
    X86_AT(c, 0xffd00u);
    push32(c, c.sreg[0]);
    // 0ffd01  pushal 
    X86_AT(c, 0xffd01u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0ffd02  push ds
    X86_AT(c, 0xffd02u);
    push32(c, c.sreg[3]);
    // 0ffd03  pop es
    X86_AT(c, 0xffd03u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0ffd04  cld 
    X86_AT(c, 0xffd04u);
    c.fl &= ~X86_DF;
    // 0ffd05  xor eax, eax
    X86_AT(c, 0xffd05u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0ffd07  mov byte ptr [0xdfa00], al
    X86_AT(c, 0xffd07u);
    wr8((c.sbase[3] + (uint32_t)(0xDFA00u)), g8(c, 0));
    // 0ffd0c  mov byte ptr [0xdfa01], al
    X86_AT(c, 0xffd0cu);
    wr8((c.sbase[3] + (uint32_t)(0xDFA01u)), g8(c, 0));
    // 0ffd11  mov byte ptr [0xdfa02], al
    X86_AT(c, 0xffd11u);
    wr8((c.sbase[3] + (uint32_t)(0xDFA02u)), g8(c, 0));
    // 0ffd16  mov byte ptr [0xdfa03], al
    X86_AT(c, 0xffd16u);
    wr8((c.sbase[3] + (uint32_t)(0xDFA03u)), g8(c, 0));
    // 0ffd1b  mov byte ptr [0xdfa04], al
    X86_AT(c, 0xffd1bu);
    wr8((c.sbase[3] + (uint32_t)(0xDFA04u)), g8(c, 0));
    // 0ffd20  lea edi, [0xdfa05]
    X86_AT(c, 0xffd20u);
    c.r[7] = (uint32_t)(0xDFA05u);
    // 0ffd26  mov ecx, 4
    X86_AT(c, 0xffd26u);
    c.r[1] = 0x4u;
    // 0ffd2b  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xffd2bu);
    x86_string(c, 2, 4, 243, 4, 3);
    // 0ffd2d  not eax
    X86_AT(c, 0xffd2du);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 0ffd2f  lea edi, [0xdfa15]
    X86_AT(c, 0xffd2fu);
    c.r[7] = (uint32_t)(0xDFA15u);
    // 0ffd35  mov ecx, 4
    X86_AT(c, 0xffd35u);
    c.r[1] = 0x4u;
    // 0ffd3a  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xffd3au);
    x86_string(c, 2, 4, 243, 4, 3);
    // 0ffd3c  xor al, al
    X86_AT(c, 0xffd3cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0ffd3e  mov ecx, 0x80
    X86_AT(c, 0xffd3eu);
    c.r[1] = 0x80u;
    // 0ffd43  lea edi, [0xdfa25]
    X86_AT(c, 0xffd43u);
    c.r[7] = (uint32_t)(0xDFA25u);
L_ffd49:
    X86_TICK(c, 21);
    // 0ffd49  mov byte ptr [edi], ah
    X86_AT(c, 0xffd49u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), g8(c, 4));
    // 0ffd4b  mov byte ptr [edi + 1], ah
    X86_AT(c, 0xffd4bu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)), g8(c, 4));
    // 0ffd4e  mov byte ptr [edi + 2], al
    X86_AT(c, 0xffd4eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), g8(c, 0));
    // 0ffd51  mov byte ptr [edi + 3], al
    X86_AT(c, 0xffd51u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x3u)), g8(c, 0));
    // 0ffd54  add edi, 4
    X86_AT(c, 0xffd54u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ffd57  loop 0xffd49
    X86_AT(c, 0xffd57u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xffd49u); goto L_ffd49; }
    X86_TICK(c, 6);
    // 0ffd59  mov ecx, 6
    X86_AT(c, 0xffd59u);
    c.r[1] = 0x6u;
    // 0ffd5e  xor dl, dl
    X86_AT(c, 0xffd5eu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v ^ g8(c, 2), 1)); }
    // 0ffd60  mov bl, 0
    X86_AT(c, 0xffd60u);
    s8(c, 3, 0x0u);
L_ffd62:
    X86_TICK(c, 7);
    // 0ffd62  call 0xffd82
    X86_AT(c, 0xffd62u);
    push32(c, 0xffd67u); f_000ffd82(c); X86_RET(c, 0xffd67u);
    X86_TICK(c, 15);
    // 0ffd67  inc dl
    X86_AT(c, 0xffd67u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 0ffd69  inc bl
    X86_AT(c, 0xffd69u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_inc(c, v, 1)); }
    // 0ffd6b  loop 0xffd62
    X86_AT(c, 0xffd6bu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xffd62u); goto L_ffd62; }
    X86_TICK(c, 4);
    // 0ffd6d  mov ecx, 8
    X86_AT(c, 0xffd6du);
    c.r[1] = 0x8u;
    // 0ffd72  mov bl, 0x40
    X86_AT(c, 0xffd72u);
    s8(c, 3, 0x40u);
L_ffd74:
    X86_TICK(c, 7);
    // 0ffd74  call 0xffd82
    X86_AT(c, 0xffd74u);
    push32(c, 0xffd79u); f_000ffd82(c); X86_RET(c, 0xffd79u);
    X86_TICK(c, 15);
    // 0ffd79  inc dl
    X86_AT(c, 0xffd79u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 0ffd7b  inc bl
    X86_AT(c, 0xffd7bu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_inc(c, v, 1)); }
    // 0ffd7d  loop 0xffd74
    X86_AT(c, 0xffd7du);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xffd74u); goto L_ffd74; }
    X86_TICK(c, 38);
    // 0ffd7f  popal 
    X86_AT(c, 0xffd7fu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0ffd80  pop es
    X86_AT(c, 0xffd80u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0ffd81  ret 
    X86_AT(c, 0xffd81u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xffd00u, "ran off the end of a function");
}
void f_000ffd82(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0ffd82  pushal 
    X86_AT(c, 0xffd82u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0ffd83  cmp dl, 0x10
    X86_AT(c, 0xffd83u);
    (void)x86_sub(c, g8(c, 2), 0x10u, 0, 1);
    // 0ffd86  jae 0xffe20
    X86_AT(c, 0xffd86u);
    if (x86_cc(c, 3)) { goto L_ffe20; }
    X86_TICK(c, 7);
    // 0ffd8c  cmp bl, 0x80
    X86_AT(c, 0xffd8cu);
    (void)x86_sub(c, g8(c, 3), 0x80u, 0, 1);
    // 0ffd8f  jae 0xffe20
    X86_AT(c, 0xffd8fu);
    if (x86_cc(c, 3)) { goto L_ffe20; }
    X86_TICK(c, 16);
    // 0ffd95  movzx ebx, bl
    X86_AT(c, 0xffd95u);
    c.r[3] = g8(c, 3);
    // 0ffd98  lea edi, [ebx*4 + 0xdfa25]
    X86_AT(c, 0xffd98u);
    c.r[7] = (uint32_t)(c.r[3] * 4 + 0xDFA25u);
    // 0ffd9f  mov al, byte ptr [edi]
    X86_AT(c, 0xffd9fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0ffda1  cmp al, dl
    X86_AT(c, 0xffda1u);
    (void)x86_sub(c, g8(c, 0), g8(c, 2), 0, 1);
    // 0ffda3  je 0xffe1c
    X86_AT(c, 0xffda3u);
    if (x86_cc(c, 4)) { goto L_ffe1c; }
    X86_TICK(c, 7);
    // 0ffda9  cmp al, 0xff
    X86_AT(c, 0xffda9u);
    (void)x86_sub(c, g8(c, 0), 0xFFu, 0, 1);
    // 0ffdab  je 0xffdfd
    X86_AT(c, 0xffdabu);
    if (x86_cc(c, 4)) { goto L_ffdfd; }
    X86_TICK(c, 16);
    // 0ffdb1  movzx eax, al
    X86_AT(c, 0xffdb1u);
    c.r[0] = g8(c, 0);
    // 0ffdb4  lea esi, [eax + 0xdfa15]
    X86_AT(c, 0xffdb4u);
    c.r[6] = (uint32_t)(c.r[0] + 0xDFA15u);
    // 0ffdba  mov al, byte ptr [esi]
    X86_AT(c, 0xffdbau);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 0ffdbc  cmp al, bl
    X86_AT(c, 0xffdbcu);
    (void)x86_sub(c, g8(c, 0), g8(c, 3), 0, 1);
    // 0ffdbe  je 0xffdd9
    X86_AT(c, 0xffdbeu);
    if (x86_cc(c, 4)) { goto L_ffdd9; }
L_ffdc0:
    X86_TICK(c, 18);
    // 0ffdc0  movzx eax, al
    X86_AT(c, 0xffdc0u);
    c.r[0] = g8(c, 0);
    // 0ffdc3  lea esi, [eax*4 + 0xdfa25]
    X86_AT(c, 0xffdc3u);
    c.r[6] = (uint32_t)(c.r[0] * 4 + 0xDFA25u);
    // 0ffdca  lea esi, [esi + 1]
    X86_AT(c, 0xffdcau);
    c.r[6] = (uint32_t)(c.r[6] + 0x1u);
    // 0ffdcd  mov al, byte ptr [esi]
    X86_AT(c, 0xffdcdu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 0ffdcf  cmp al, bl
    X86_AT(c, 0xffdcfu);
    (void)x86_sub(c, g8(c, 0), g8(c, 3), 0, 1);
    // 0ffdd1  je 0xffdd9
    X86_AT(c, 0xffdd1u);
    if (x86_cc(c, 4)) { goto L_ffdd9; }
    X86_TICK(c, 7);
    // 0ffdd3  cmp al, 0xff
    X86_AT(c, 0xffdd3u);
    (void)x86_sub(c, g8(c, 0), 0xFFu, 0, 1);
    // 0ffdd5  je 0xffe20
    X86_AT(c, 0xffdd5u);
    if (x86_cc(c, 4)) { goto L_ffe20; }
    X86_TICK(c, 7);
    // 0ffdd7  jmp 0xffdc0
    X86_AT(c, 0xffdd7u);
    X86_POLL(c, 0xffdc0u); goto L_ffdc0;
L_ffdd9:
    X86_TICK(c, 28);
    // 0ffdd9  push edx
    X86_AT(c, 0xffdd9u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0ffdda  pushf 
    X86_AT(c, 0xffddau);
    push16(c, c.fl & 0xFFFFu);
    // 0ffddc  cli 
    X86_AT(c, 0xffddcu);
    c.fl &= ~X86_IF;
    // 0ffddd  mov dl, byte ptr [edi + 1]
    X86_AT(c, 0xffdddu);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 0ffde0  mov byte ptr [esi], dl
    X86_AT(c, 0xffde0u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6])), g8(c, 2));
    // 0ffde2  cmp byte ptr [edi + 2], 0
    X86_AT(c, 0xffde2u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))), 0x0u, 0, 1);
    // 0ffde6  je 0xffdef
    X86_AT(c, 0xffde6u);
    if (x86_cc(c, 4)) { goto L_ffdef; }
    X86_TICK(c, 9);
    // 0ffde8  mov ah, 2
    X86_AT(c, 0xffde8u);
    s8(c, 4, 0x2u);
    // 0ffdea  call 0xfdf3c
    X86_AT(c, 0xffdeau);
    push32(c, 0xffdefu); f_000fdf3c(c); X86_RET(c, 0xffdefu);
L_ffdef:
    X86_TICK(c, 16);
    // 0ffdef  mov byte ptr [edi], 0xff
    X86_AT(c, 0xffdefu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0xFFu);
    // 0ffdf2  mov byte ptr [edi + 1], 0xff
    X86_AT(c, 0xffdf2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)), 0xFFu);
    // 0ffdf6  mov byte ptr [edi + 2], 0
    X86_AT(c, 0xffdf6u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), 0x0u);
    // 0ffdfa  popf 
    X86_AT(c, 0xffdfau);
    x86_popfd(c, 2);
    // 0ffdfc  pop edx
    X86_AT(c, 0xffdfcu);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_ffdfd:
    X86_TICK(c, 33);
    // 0ffdfd  movzx edx, dl
    X86_AT(c, 0xffdfdu);
    c.r[2] = g8(c, 2);
    // 0ffe00  lea esi, [edx + 0xdfa15]
    X86_AT(c, 0xffe00u);
    c.r[6] = (uint32_t)(c.r[2] + 0xDFA15u);
    // 0ffe06  pushf 
    X86_AT(c, 0xffe06u);
    push16(c, c.fl & 0xFFFFu);
    // 0ffe08  cli 
    X86_AT(c, 0xffe08u);
    c.fl &= ~X86_IF;
    // 0ffe09  mov al, byte ptr [esi]
    X86_AT(c, 0xffe09u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 0ffe0b  mov byte ptr [esi], bl
    X86_AT(c, 0xffe0bu);
    wr8((c.sbase[3] + (uint32_t)(c.r[6])), g8(c, 3));
    // 0ffe0d  mov byte ptr [edi], dl
    X86_AT(c, 0xffe0du);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), g8(c, 2));
    // 0ffe0f  mov byte ptr [edi + 1], al
    X86_AT(c, 0xffe0fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)), g8(c, 0));
    // 0ffe12  mov byte ptr [edi + 2], 0
    X86_AT(c, 0xffe12u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), 0x0u);
    // 0ffe16  mov byte ptr [edi + 3], 0
    X86_AT(c, 0xffe16u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x3u)), 0x0u);
    // 0ffe1a  popf 
    X86_AT(c, 0xffe1au);
    x86_popfd(c, 2);
L_ffe1c:
    X86_TICK(c, 36);
    // 0ffe1c  popal 
    X86_AT(c, 0xffe1cu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0ffe1d  xor al, al
    X86_AT(c, 0xffe1du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0ffe1f  ret 
    X86_AT(c, 0xffe1fu);
    c.eip = pop32(c); return;
L_ffe20:
    X86_TICK(c, 36);
    // 0ffe20  popal 
    X86_AT(c, 0xffe20u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0ffe21  mov al, 3
    X86_AT(c, 0xffe21u);
    s8(c, 0, 0x3u);
    // 0ffe23  ret 
    X86_AT(c, 0xffe23u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xffd82u, "ran off the end of a function");
}
void f_000ffe24(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0ffe24  pushal 
    X86_AT(c, 0xffe24u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0ffe25  cmp al, 0x80
    X86_AT(c, 0xffe25u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 0ffe27  jb 0xffe3b
    X86_AT(c, 0xffe27u);
    if (x86_cc(c, 2)) { goto L_ffe3b; }
    X86_TICK(c, 7);
    // 0ffe29  cmp al, 0xf0
    X86_AT(c, 0xffe29u);
    (void)x86_sub(c, g8(c, 0), 0xF0u, 0, 1);
    // 0ffe2b  jae 0xffe63
    X86_AT(c, 0xffe2bu);
    if (x86_cc(c, 3)) { goto L_ffe63; }
    X86_TICK(c, 11);
    // 0ffe2d  mov byte ptr [0xdfa00], al
    X86_AT(c, 0xffe2du);
    wr8((c.sbase[3] + (uint32_t)(0xDFA00u)), g8(c, 0));
    // 0ffe32  mov byte ptr [0xdfa01], 1
    X86_AT(c, 0xffe32u);
    wr8((c.sbase[3] + (uint32_t)(0xDFA01u)), 0x1u);
    // 0ffe39  jmp 0xffe61
    X86_AT(c, 0xffe39u);
    goto L_ffe61;
L_ffe3b:
    X86_TICK(c, 13);
    // 0ffe3b  movzx ebx, byte ptr [0xdfa00]
    X86_AT(c, 0xffe3bu);
    c.r[3] = rd8((c.sbase[3] + (uint32_t)(0xDFA00u)));
    // 0ffe42  cmp ebx, 0x80
    X86_AT(c, 0xffe42u);
    (void)x86_sub(c, c.r[3], 0x80u, 0, 4);
    // 0ffe48  jb 0xffe61
    X86_AT(c, 0xffe48u);
    if (x86_cc(c, 2)) { goto L_ffe61; }
    X86_TICK(c, 14);
    // 0ffe4e  sub ebx, 0x80
    X86_AT(c, 0xffe4eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, 0x80u, 0, 4); }
    // 0ffe54  shr ebx, 4
    X86_AT(c, 0xffe54u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 0ffe57  lea ebx, [ebx*4 + 0xffe73]
    X86_AT(c, 0xffe57u);
    c.r[3] = (uint32_t)(c.r[3] * 4 + 0xFFE73u);
    // 0ffe5e  call dword ptr cs:[ebx]
    X86_AT(c, 0xffe5eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[3]))); push32(c, 0xffe61u); x86_call(c, t); X86_RET(c, 0xffe61u); }
L_ffe61:
    X86_TICK(c, 34);
    // 0ffe61  popal 
    X86_AT(c, 0xffe61u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0ffe62  ret 
    X86_AT(c, 0xffe62u);
    c.eip = pop32(c); return;
L_ffe63:
    X86_TICK(c, 38);
    // 0ffe63  mov byte ptr [0xdfa01], 1
    X86_AT(c, 0xffe63u);
    wr8((c.sbase[3] + (uint32_t)(0xDFA01u)), 0x1u);
    // 0ffe6a  mov byte ptr [0xdfa00], 0
    X86_AT(c, 0xffe6au);
    wr8((c.sbase[3] + (uint32_t)(0xDFA00u)), 0x0u);
    // 0ffe71  popal 
    X86_AT(c, 0xffe71u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0ffe72  ret 
    X86_AT(c, 0xffe72u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xffe24u, "ran off the end of a function");
}
void f_000fff9b(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0fff9b  mov al, byte ptr [0xdfa00]
    X86_AT(c, 0xfff9bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xDFA00u))));
    // 0fffa0  and eax, 0xf
    X86_AT(c, 0xfffa0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFu, 4); }
    // 0fffa5  mov bl, byte ptr [eax + 0xdfa15]
    X86_AT(c, 0xfffa5u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xDFA15u))));
    // 0fffab  cmp bl, 0xff
    X86_AT(c, 0xfffabu);
    (void)x86_sub(c, g8(c, 3), 0xFFu, 0, 1);
    // 0fffae  je 0xffffc
    X86_AT(c, 0xfffaeu);
    if (x86_cc(c, 4)) { goto L_ffffc; }
    X86_TICK(c, 4);
    // 0fffb4  mov dl, byte ptr [0xdfa02]
    X86_AT(c, 0xfffb4u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(0xDFA02u))));
L_fffba:
    X86_TICK(c, 16);
    // 0fffba  movzx eax, bl
    X86_AT(c, 0xfffbau);
    c.r[0] = g8(c, 3);
    // 0fffbd  lea esi, [eax*4 + 0xdfa25]
    X86_AT(c, 0xfffbdu);
    c.r[6] = (uint32_t)(c.r[0] * 4 + 0xDFA25u);
    // 0fffc4  cmp dl, byte ptr [esi + 2]
    X86_AT(c, 0xfffc4u);
    (void)x86_sub(c, g8(c, 2), rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x2u))), 0, 1);
    // 0fffc7  je 0xfffd6
    X86_AT(c, 0xfffc7u);
    if (x86_cc(c, 4)) { goto L_fffd6; }
    X86_TICK(c, 11);
    // 0fffc9  mov bl, byte ptr [esi + 1]
    X86_AT(c, 0xfffc9u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x1u))));
    // 0fffcc  cmp bl, 0xff
    X86_AT(c, 0xfffccu);
    (void)x86_sub(c, g8(c, 3), 0xFFu, 0, 1);
    // 0fffcf  jne 0xfffba
    X86_AT(c, 0xfffcfu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xfffbau); goto L_fffba; }
    X86_TICK(c, 7);
    // 0fffd1  jmp 0xffffc
    X86_AT(c, 0xfffd1u);
    goto L_ffffc;
L_fffd6:
    X86_TICK(c, 18);
    // 0fffd6  mov al, byte ptr [0xdfa00]
    X86_AT(c, 0xfffd6u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xDFA00u))));
    // 0fffdb  and eax, 0xf
    X86_AT(c, 0xfffdbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFu, 4); }
    // 0fffe0  cmp byte ptr [eax + 0xdfa05], 0
    X86_AT(c, 0xfffe0u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xDFA05u))), 0x0u, 0, 1);
    // 0fffe7  jne 0xffff6
    X86_AT(c, 0xfffe7u);
    if (x86_cc(c, 5)) { goto L_ffff6; }
    X86_TICK(c, 11);
    // 0fffe9  mov byte ptr [esi + 2], 0
    X86_AT(c, 0xfffe9u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x2u)), 0x0u);
    // 0fffed  mov ah, 2
    X86_AT(c, 0xfffedu);
    s8(c, 4, 0x2u);
    // 0fffef  call 0xfdf3c
    X86_AT(c, 0xfffefu);
    push32(c, 0xffff4u); f_000fdf3c(c); X86_RET(c, 0xffff4u);
    X86_TICK(c, 12);
    // 0ffff4  clc 
    X86_AT(c, 0xffff4u);
    c.fl &= ~X86_CF;
    // 0ffff5  ret 
    X86_AT(c, 0xffff5u);
    c.eip = pop32(c); return;
L_ffff6:
    X86_TICK(c, 19);
    // 0ffff6  or byte ptr [esi + 2], 0x80
    X86_AT(c, 0xffff6u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0x2u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
    // 0ffffa  clc 
    X86_AT(c, 0xffffau);
    c.fl &= ~X86_CF;
    // 0ffffb  ret 
    X86_AT(c, 0xffffbu);
    c.eip = pop32(c); return;
L_ffffc:
    X86_TICK(c, 12);
    // 0ffffc  stc 
    X86_AT(c, 0xffffcu);
    c.fl |= X86_CF;
    // 0ffffd  ret 
    X86_AT(c, 0xffffdu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfff9bu, "ran off the end of a function");
}
void f_000ffffe(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0ffffe  cmp byte ptr [0xdfa02], 0
    X86_AT(c, 0xffffeu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDFA02u))), 0x0u, 0, 1);
    // 100005  je 0x10008e
    X86_AT(c, 0x100005u);
    if (x86_cc(c, 4)) { goto L_10008e; }
    X86_TICK(c, 17);
    // 10000b  mov al, byte ptr [0xdfa00]
    X86_AT(c, 0x10000bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xDFA00u))));
    // 100010  and eax, 0xf
    X86_AT(c, 0x100010u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFu, 4); }
    // 100015  mov bl, byte ptr [eax + 0xdfa15]
    X86_AT(c, 0x100015u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xDFA15u))));
    // 10001b  cmp bl, 0xff
    X86_AT(c, 0x10001bu);
    (void)x86_sub(c, g8(c, 3), 0xFFu, 0, 1);
    // 10001e  je 0x10008e
    X86_AT(c, 0x10001eu);
    if (x86_cc(c, 4)) { goto L_10008e; }
    X86_TICK(c, 2);
    // 100024  push bx
    X86_AT(c, 0x100024u);
    { uint32_t v = (c.r[3] & 0xFFFFu); push16(c, v); }
L_100026:
    X86_TICK(c, 22);
    // 100026  movzx eax, bl
    X86_AT(c, 0x100026u);
    c.r[0] = g8(c, 3);
    // 100029  lea esi, [eax*4 + 0xdfa25]
    X86_AT(c, 0x100029u);
    c.r[6] = (uint32_t)(c.r[0] * 4 + 0xDFA25u);
    // 100030  inc byte ptr [esi + 3]
    X86_AT(c, 0x100030u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0x3u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 100033  mov bl, byte ptr [esi + 1]
    X86_AT(c, 0x100033u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x1u))));
    // 100036  cmp bl, 0xff
    X86_AT(c, 0x100036u);
    (void)x86_sub(c, g8(c, 3), 0xFFu, 0, 1);
    // 100039  jne 0x100026
    X86_AT(c, 0x100039u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x100026u); goto L_100026; }
    X86_TICK(c, 6);
    // 10003b  pop bx
    X86_AT(c, 0x10003bu);
    { uint32_t v = pop16(c); s16(c, 3, v); }
    // 10003d  xor dl, dl
    X86_AT(c, 0x10003du);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v ^ g8(c, 2), 1)); }
L_10003f:
    X86_TICK(c, 17);
    // 10003f  movzx eax, bl
    X86_AT(c, 0x10003fu);
    c.r[0] = g8(c, 3);
    // 100042  lea esi, [eax*4 + 0xdfa25]
    X86_AT(c, 0x100042u);
    c.r[6] = (uint32_t)(c.r[0] * 4 + 0xDFA25u);
    // 100049  cmp byte ptr [esi + 2], 0
    X86_AT(c, 0x100049u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x2u))), 0x0u, 0, 1);
    // 10004d  je 0x10006a
    X86_AT(c, 0x10004du);
    if (x86_cc(c, 4)) { goto L_10006a; }
    X86_TICK(c, 11);
    // 10004f  cmp dl, byte ptr [esi + 3]
    X86_AT(c, 0x10004fu);
    (void)x86_sub(c, g8(c, 2), rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x3u))), 0, 1);
    // 100052  ja 0x100059
    X86_AT(c, 0x100052u);
    if (x86_cc(c, 7)) { goto L_100059; }
    X86_TICK(c, 6);
    // 100054  mov cl, bl
    X86_AT(c, 0x100054u);
    s8(c, 1, g8(c, 3));
    // 100056  mov dl, byte ptr [esi + 3]
    X86_AT(c, 0x100056u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x3u))));
L_100059:
    X86_TICK(c, 11);
    // 100059  mov bl, byte ptr [esi + 1]
    X86_AT(c, 0x100059u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x1u))));
    // 10005c  cmp bl, 0xff
    X86_AT(c, 0x10005cu);
    (void)x86_sub(c, g8(c, 3), 0xFFu, 0, 1);
    // 10005f  jne 0x10003f
    X86_AT(c, 0x10005fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x10003fu); goto L_10003f; }
    X86_TICK(c, 11);
    // 100061  mov bl, cl
    X86_AT(c, 0x100061u);
    s8(c, 3, g8(c, 1));
    // 100063  mov ah, 2
    X86_AT(c, 0x100063u);
    s8(c, 4, 0x2u);
    // 100065  call 0xfdf3c
    X86_AT(c, 0x100065u);
    push32(c, 0x10006au); f_000fdf3c(c); X86_RET(c, 0x10006au);
L_10006a:
    X86_TICK(c, 26);
    // 10006a  movzx eax, bl
    X86_AT(c, 0x10006au);
    c.r[0] = g8(c, 3);
    // 10006d  lea esi, [eax*4 + 0xdfa25]
    X86_AT(c, 0x10006du);
    c.r[6] = (uint32_t)(c.r[0] * 4 + 0xDFA25u);
    // 100074  mov dh, byte ptr [0xdfa02]
    X86_AT(c, 0x100074u);
    s8(c, 6, rd8((c.sbase[3] + (uint32_t)(0xDFA02u))));
    // 10007a  mov byte ptr [esi + 2], dh
    X86_AT(c, 0x10007au);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x2u)), g8(c, 6));
    // 10007d  mov byte ptr [esi + 3], 0
    X86_AT(c, 0x10007du);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x3u)), 0x0u);
    // 100081  mov dl, byte ptr [0xdfa03]
    X86_AT(c, 0x100081u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(0xDFA03u))));
    // 100087  mov ah, 1
    X86_AT(c, 0x100087u);
    s8(c, 4, 0x1u);
    // 100089  call 0xfdf3c
    X86_AT(c, 0x100089u);
    push32(c, 0x10008eu); f_000fdf3c(c); X86_RET(c, 0x10008eu);
L_10008e:
    X86_TICK(c, 10);
    // 10008e  ret 
    X86_AT(c, 0x10008eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xffffeu, "ran off the end of a function");
}
void f_0010008f(X86Cpu& c) {
    X86_TICK(c, 17);
    // 10008f  mov al, byte ptr [0xdfa00]
    X86_AT(c, 0x10008fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xDFA00u))));
    // 100094  and eax, 0xf
    X86_AT(c, 0x100094u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFu, 4); }
    // 100099  mov bl, byte ptr [eax + 0xdfa15]
    X86_AT(c, 0x100099u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xDFA15u))));
    // 10009f  cmp bl, 0xff
    X86_AT(c, 0x10009fu);
    (void)x86_sub(c, g8(c, 3), 0xFFu, 0, 1);
    // 1000a2  je 0x1000ca
    X86_AT(c, 0x1000a2u);
    if (x86_cc(c, 4)) { goto L_1000ca; }
L_1000a8:
    X86_TICK(c, 15);
    // 1000a8  mov dl, byte ptr [0xdfa03]
    X86_AT(c, 0x1000a8u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(0xDFA03u))));
    // 1000ae  and dl, 0x7f
    X86_AT(c, 0x1000aeu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & 0x7Fu, 1)); }
    // 1000b1  mov ah, 8
    X86_AT(c, 0x1000b1u);
    s8(c, 4, 0x8u);
    // 1000b3  call 0xfdf3c
    X86_AT(c, 0x1000b3u);
    push32(c, 0x1000b8u); f_000fdf3c(c); X86_RET(c, 0x1000b8u);
    X86_TICK(c, 16);
    // 1000b8  movzx eax, bl
    X86_AT(c, 0x1000b8u);
    c.r[0] = g8(c, 3);
    // 1000bb  lea esi, [eax*4 + 0xdfa25]
    X86_AT(c, 0x1000bbu);
    c.r[6] = (uint32_t)(c.r[0] * 4 + 0xDFA25u);
    // 1000c2  mov bl, byte ptr [esi + 1]
    X86_AT(c, 0x1000c2u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x1u))));
    // 1000c5  cmp bl, 0xff
    X86_AT(c, 0x1000c5u);
    (void)x86_sub(c, g8(c, 3), 0xFFu, 0, 1);
    // 1000c8  jne 0x1000a8
    X86_AT(c, 0x1000c8u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1000a8u); goto L_1000a8; }
L_1000ca:
    X86_TICK(c, 10);
    // 1000ca  ret 
    X86_AT(c, 0x1000cau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10008fu, "ran off the end of a function");
}
void f_001000cb(X86Cpu& c) {
    X86_TICK(c, 17);
    // 1000cb  mov al, byte ptr [0xdfa00]
    X86_AT(c, 0x1000cbu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xDFA00u))));
    // 1000d0  and eax, 0xf
    X86_AT(c, 0x1000d0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFu, 4); }
    // 1000d5  mov bl, byte ptr [eax + 0xdfa15]
    X86_AT(c, 0x1000d5u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xDFA15u))));
    // 1000db  cmp bl, 0xff
    X86_AT(c, 0x1000dbu);
    (void)x86_sub(c, g8(c, 3), 0xFFu, 0, 1);
    // 1000de  je 0x100106
    X86_AT(c, 0x1000deu);
    if (x86_cc(c, 4)) { goto L_100106; }
L_1000e4:
    X86_TICK(c, 15);
    // 1000e4  mov dl, byte ptr [0xdfa03]
    X86_AT(c, 0x1000e4u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(0xDFA03u))));
    // 1000ea  and dl, 0x7f
    X86_AT(c, 0x1000eau);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & 0x7Fu, 1)); }
    // 1000ed  mov ah, 3
    X86_AT(c, 0x1000edu);
    s8(c, 4, 0x3u);
    // 1000ef  call 0xfdf3c
    X86_AT(c, 0x1000efu);
    push32(c, 0x1000f4u); f_000fdf3c(c); X86_RET(c, 0x1000f4u);
    X86_TICK(c, 16);
    // 1000f4  movzx eax, bl
    X86_AT(c, 0x1000f4u);
    c.r[0] = g8(c, 3);
    // 1000f7  lea esi, [eax*4 + 0xdfa25]
    X86_AT(c, 0x1000f7u);
    c.r[6] = (uint32_t)(c.r[0] * 4 + 0xDFA25u);
    // 1000fe  mov bl, byte ptr [esi + 1]
    X86_AT(c, 0x1000feu);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x1u))));
    // 100101  cmp bl, 0xff
    X86_AT(c, 0x100101u);
    (void)x86_sub(c, g8(c, 3), 0xFFu, 0, 1);
    // 100104  jne 0x1000e4
    X86_AT(c, 0x100104u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1000e4u); goto L_1000e4; }
L_100106:
    X86_TICK(c, 10);
    // 100106  ret 
    X86_AT(c, 0x100106u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1000cbu, "ran off the end of a function");
}
void f_00100107(X86Cpu& c) {
    X86_TICK(c, 11);
    // 100107  mov al, byte ptr [0xdfa03]
    X86_AT(c, 0x100107u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xDFA03u))));
    // 10010c  cmp al, 0x40
    X86_AT(c, 0x10010cu);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 10010e  jb 0x100123
    X86_AT(c, 0x10010eu);
    if (x86_cc(c, 2)) { goto L_100123; }
    X86_TICK(c, 20);
    // 100110  mov al, byte ptr [0xdfa00]
    X86_AT(c, 0x100110u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xDFA00u))));
    // 100115  and eax, 0xf
    X86_AT(c, 0x100115u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFu, 4); }
    // 10011a  mov byte ptr [eax + 0xdfa05], 0xff
    X86_AT(c, 0x10011au);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xDFA05u)), 0xFFu);
    // 100121  clc 
    X86_AT(c, 0x100121u);
    c.fl &= ~X86_CF;
    // 100122  ret 
    X86_AT(c, 0x100122u);
    c.eip = pop32(c); return;
L_100123:
    X86_TICK(c, 19);
    // 100123  mov al, byte ptr [0xdfa00]
    X86_AT(c, 0x100123u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xDFA00u))));
    // 100128  and eax, 0xf
    X86_AT(c, 0x100128u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFu, 4); }
    // 10012d  mov byte ptr [eax + 0xdfa05], 0
    X86_AT(c, 0x10012du);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xDFA05u)), 0x0u);
    // 100134  mov bl, byte ptr [eax + 0xdfa15]
    X86_AT(c, 0x100134u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xDFA15u))));
    // 10013a  cmp bl, 0xff
    X86_AT(c, 0x10013au);
    (void)x86_sub(c, g8(c, 3), 0xFFu, 0, 1);
    // 10013d  je 0x10016c
    X86_AT(c, 0x10013du);
    if (x86_cc(c, 4)) { goto L_10016c; }
L_100143:
    X86_TICK(c, 17);
    // 100143  movzx eax, bl
    X86_AT(c, 0x100143u);
    c.r[0] = g8(c, 3);
    // 100146  lea esi, [eax*4 + 0xdfa25]
    X86_AT(c, 0x100146u);
    c.r[6] = (uint32_t)(c.r[0] * 4 + 0xDFA25u);
    // 10014d  test byte ptr [esi + 2], 0x80
    X86_AT(c, 0x10014du);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x2u))) & 0x80u, 1);
    // 100151  je 0x100162
    X86_AT(c, 0x100151u);
    if (x86_cc(c, 4)) { goto L_100162; }
    X86_TICK(c, 11);
    // 100157  mov byte ptr [esi + 2], 0
    X86_AT(c, 0x100157u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x2u)), 0x0u);
    // 10015b  mov ah, 2
    X86_AT(c, 0x10015bu);
    s8(c, 4, 0x2u);
    // 10015d  call 0xfdf3c
    X86_AT(c, 0x10015du);
    push32(c, 0x100162u); f_000fdf3c(c); X86_RET(c, 0x100162u);
L_100162:
    X86_TICK(c, 11);
    // 100162  mov bl, byte ptr [esi + 1]
    X86_AT(c, 0x100162u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x1u))));
    // 100165  cmp bl, 0xff
    X86_AT(c, 0x100165u);
    (void)x86_sub(c, g8(c, 3), 0xFFu, 0, 1);
    // 100168  jne 0x100143
    X86_AT(c, 0x100168u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x100143u); goto L_100143; }
    X86_TICK(c, 12);
    // 10016a  clc 
    X86_AT(c, 0x10016au);
    c.fl &= ~X86_CF;
    // 10016b  ret 
    X86_AT(c, 0x10016bu);
    c.eip = pop32(c); return;
L_10016c:
    X86_TICK(c, 12);
    // 10016c  stc 
    X86_AT(c, 0x10016cu);
    c.fl |= X86_CF;
    // 10016d  ret 
    X86_AT(c, 0x10016du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x100107u, "ran off the end of a function");
}
void f_001001f8(X86Cpu& c) {
    X86_TICK(c, 28);
    // 1001f8  push ebp
    X86_AT(c, 0x1001f8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 1001f9  mov ebp, esp
    X86_AT(c, 0x1001f9u);
    c.r[5] = c.r[4];
    // 1001fb  sub esp, 0xb4
    X86_AT(c, 0x1001fbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xB4u, 0, 4); }
    // 100201  push ebx
    X86_AT(c, 0x100201u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 100202  push esi
    X86_AT(c, 0x100202u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 100203  push edi
    X86_AT(c, 0x100203u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 100204  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x100204u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 100207  cmp byte ptr [eax], 0
    X86_AT(c, 0x100207u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x0u, 0, 1);
    // 10020a  je 0x1002a9
    X86_AT(c, 0x10020au);
    if (x86_cc(c, 4)) { goto L_1002a9; }
    X86_TICK(c, 14);
    // 100210  push 0xe29c
    X86_AT(c, 0x100210u);
    { uint32_t v = 0xE29Cu; push32(c, v); }
    // 100215  push dword ptr [ebp + 8]
    X86_AT(c, 0x100215u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 100218  call 0x100f34
    X86_AT(c, 0x100218u);
    push32(c, 0x10021du); f_00100f34(c); X86_RET(c, 0x10021du);
    X86_TICK(c, 12);
    // 10021d  add esp, 8
    X86_AT(c, 0x10021du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 100220  xchg edi, eax
    X86_AT(c, 0x100220u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 100221  and edi, edi
    X86_AT(c, 0x100221u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 100223  jne 0x1002b0
    X86_AT(c, 0x100223u);
    if (x86_cc(c, 5)) { goto L_1002b0; }
    X86_TICK(c, 9);
    // 100229  push 0xe2a0
    X86_AT(c, 0x100229u);
    { uint32_t v = 0xE2A0u; push32(c, v); }
    // 10022e  call 0x1018a8
    X86_AT(c, 0x10022eu);
    push32(c, 0x100233u); f_001018a8(c); X86_RET(c, 0x100233u);
    X86_TICK(c, 11);
    // 100233  add esp, 4
    X86_AT(c, 0x100233u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 100236  mov dword ptr [ebp - 0x34], eax
    X86_AT(c, 0x100236u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFCCu)), c.r[0]);
    // 100239  and eax, eax
    X86_AT(c, 0x100239u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 10023b  je 0x1002a9
    X86_AT(c, 0x10023bu);
    if (x86_cc(c, 4)) { goto L_1002a9; }
    X86_TICK(c, 16);
    // 10023d  push dword ptr [ebp - 0x34]
    X86_AT(c, 0x10023du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFCCu))); push32(c, v); }
    // 100240  lea eax, [ebp - 0xb4]
    X86_AT(c, 0x100240u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF4Cu);
    // 100246  push eax
    X86_AT(c, 0x100246u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 100247  call 0x1019a0
    X86_AT(c, 0x100247u);
    push32(c, 0x10024cu); f_001019a0(c); X86_RET(c, 0x10024cu);
    X86_TICK(c, 4);
    // 10024c  sub esi, esi
    X86_AT(c, 0x10024cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 10024e  add esp, 8
    X86_AT(c, 0x10024eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_100251:
    X86_TICK(c, 12);
    // 100251  cmp byte ptr [ebp + esi*1 - 0xb4], 0
    X86_AT(c, 0x100251u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFF4Cu))), 0x0u, 0, 1);
    // 100259  je 0x10025e
    X86_AT(c, 0x100259u);
    if (x86_cc(c, 4)) { goto L_10025e; }
    X86_TICK(c, 9);
    // 10025b  inc esi
    X86_AT(c, 0x10025bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 10025c  jmp 0x100251
    X86_AT(c, 0x10025cu);
    X86_POLL(c, 0x100251u); goto L_100251;
L_10025e:
    X86_TICK(c, 12);
    // 10025e  cmp byte ptr [ebp + esi*1 - 0xb5], 0x5c
    X86_AT(c, 0x10025eu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFF4Bu))), 0x5Cu, 0, 1);
    // 100266  je 0x100271
    X86_AT(c, 0x100266u);
    if (x86_cc(c, 4)) { goto L_100271; }
    X86_TICK(c, 4);
    // 100268  inc esi
    X86_AT(c, 0x100268u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 100269  mov byte ptr [ebp + esi*1 - 0xb5], 0x5c
    X86_AT(c, 0x100269u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFF4Bu)), 0x5Cu);
L_100271:
    X86_TICK(c, 2);
    // 100271  sub ebx, ebx
    X86_AT(c, 0x100271u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_100273:
    X86_TICK(c, 15);
    // 100273  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x100273u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 100276  mov al, byte ptr [eax + ebx*1]
    X86_AT(c, 0x100276u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[3]))));
    // 100279  and al, al
    X86_AT(c, 0x100279u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 10027b  je 0x100288
    X86_AT(c, 0x10027bu);
    if (x86_cc(c, 4)) { goto L_100288; }
    X86_TICK(c, 13);
    // 10027d  inc esi
    X86_AT(c, 0x10027du);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 10027e  mov byte ptr [ebp + esi*1 - 0xb5], al
    X86_AT(c, 0x10027eu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFF4Bu)), g8(c, 0));
    // 100285  inc ebx
    X86_AT(c, 0x100285u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 100286  jmp 0x100273
    X86_AT(c, 0x100286u);
    X86_POLL(c, 0x100273u); goto L_100273;
L_100288:
    X86_TICK(c, 15);
    // 100288  mov byte ptr [ebp + esi*1 - 0xb4], 0
    X86_AT(c, 0x100288u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFF4Cu)), 0x0u);
    // 100290  push 0xe2a8
    X86_AT(c, 0x100290u);
    { uint32_t v = 0xE2A8u; push32(c, v); }
    // 100295  lea eax, [ebp - 0xb4]
    X86_AT(c, 0x100295u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFF4Cu);
    // 10029b  push eax
    X86_AT(c, 0x10029bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 10029c  call 0x100f34
    X86_AT(c, 0x10029cu);
    push32(c, 0x1002a1u); f_00100f34(c); X86_RET(c, 0x1002a1u);
    X86_TICK(c, 12);
    // 1002a1  add esp, 8
    X86_AT(c, 0x1002a1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 1002a4  xchg edi, eax
    X86_AT(c, 0x1002a4u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 1002a5  and edi, edi
    X86_AT(c, 0x1002a5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 1002a7  jne 0x1002b0
    X86_AT(c, 0x1002a7u);
    if (x86_cc(c, 5)) { goto L_1002b0; }
L_1002a9:
    X86_TICK(c, 9);
    // 1002a9  mov eax, 1
    X86_AT(c, 0x1002a9u);
    c.r[0] = 0x1u;
    // 1002ae  jmp 0x10030f
    X86_AT(c, 0x1002aeu);
    goto L_10030f;
L_1002b0:
    X86_TICK(c, 18);
    // 1002b0  push edi
    X86_AT(c, 0x1002b0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1002b1  push 8
    X86_AT(c, 0x1002b1u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 1002b3  push 1
    X86_AT(c, 0x1002b3u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 1002b5  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x1002b5u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 1002b8  call 0x100c58
    X86_AT(c, 0x1002b8u);
    push32(c, 0x1002bdu); f_00100c58(c); X86_RET(c, 0x1002bdu);
    X86_TICK(c, 9);
    // 1002bd  add esp, 0x10
    X86_AT(c, 0x1002bdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 1002c0  cmp eax, 8
    X86_AT(c, 0x1002c0u);
    (void)x86_sub(c, c.r[0], 0x8u, 0, 4);
    // 1002c3  jl 0x1002e5
    X86_AT(c, 0x1002c3u);
    if (x86_cc(c, 12)) { goto L_1002e5; }
    X86_TICK(c, 2);
    // 1002c5  sub esi, esi
    X86_AT(c, 0x1002c5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_1002c7:
    X86_TICK(c, 7);
    // 1002c7  cmp esi, 0x80
    X86_AT(c, 0x1002c7u);
    (void)x86_sub(c, c.r[6], 0x80u, 0, 4);
    // 1002cd  jge 0x100304
    X86_AT(c, 0x1002cdu);
    if (x86_cc(c, 13)) { goto L_100304; }
    X86_TICK(c, 17);
    // 1002cf  push edi
    X86_AT(c, 0x1002cfu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1002d0  push 0x30
    X86_AT(c, 0x1002d0u);
    { uint32_t v = 0x30u; push32(c, v); }
    // 1002d2  push 1
    X86_AT(c, 0x1002d2u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 1002d4  lea eax, [ebp - 0x30]
    X86_AT(c, 0x1002d4u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD0u);
    // 1002d7  push eax
    X86_AT(c, 0x1002d7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 1002d8  call 0x100c58
    X86_AT(c, 0x1002d8u);
    push32(c, 0x1002ddu); f_00100c58(c); X86_RET(c, 0x1002ddu);
    X86_TICK(c, 9);
    // 1002dd  add esp, 0x10
    X86_AT(c, 0x1002ddu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 1002e0  cmp eax, 0x30
    X86_AT(c, 0x1002e0u);
    (void)x86_sub(c, c.r[0], 0x30u, 0, 4);
    // 1002e3  jge 0x1002f2
    X86_AT(c, 0x1002e3u);
    if (x86_cc(c, 13)) { goto L_1002f2; }
L_1002e5:
    X86_TICK(c, 9);
    // 1002e5  push edi
    X86_AT(c, 0x1002e5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1002e6  call 0x101430
    X86_AT(c, 0x1002e6u);
    push32(c, 0x1002ebu); f_00101430(c); X86_RET(c, 0x1002ebu);
    X86_TICK(c, 9);
    // 1002eb  mov eax, 2
    X86_AT(c, 0x1002ebu);
    c.r[0] = 0x2u;
    // 1002f0  jmp 0x10030c
    X86_AT(c, 0x1002f0u);
    goto L_10030c;
L_1002f2:
    X86_TICK(c, 15);
    // 1002f2  lea eax, [ebp - 0x30]
    X86_AT(c, 0x1002f2u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD0u);
    // 1002f5  push eax
    X86_AT(c, 0x1002f5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 1002f6  push esi
    X86_AT(c, 0x1002f6u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 1002f7  push 0
    X86_AT(c, 0x1002f7u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 1002f9  call 0xfda25
    X86_AT(c, 0x1002f9u);
    push32(c, 0x1002feu); f_000fda25(c); X86_RET(c, 0x1002feu);
    X86_TICK(c, 11);
    // 1002fe  inc esi
    X86_AT(c, 0x1002feu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 1002ff  add esp, 0xc
    X86_AT(c, 0x1002ffu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 100302  jmp 0x1002c7
    X86_AT(c, 0x100302u);
    X86_POLL(c, 0x1002c7u); goto L_1002c7;
L_100304:
    X86_TICK(c, 9);
    // 100304  push edi
    X86_AT(c, 0x100304u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 100305  call 0x101430
    X86_AT(c, 0x100305u);
    push32(c, 0x10030au); f_00101430(c); X86_RET(c, 0x10030au);
    X86_TICK(c, 2);
    // 10030a  sub eax, eax
    X86_AT(c, 0x10030au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_10030c:
    X86_TICK(c, 2);
    // 10030c  add esp, 4
    X86_AT(c, 0x10030cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_10030f:
    X86_TICK(c, 28);
    // 10030f  pop edi
    X86_AT(c, 0x10030fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 100310  pop esi
    X86_AT(c, 0x100310u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 100311  pop ebx
    X86_AT(c, 0x100311u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 100312  leave 
    X86_AT(c, 0x100312u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 100313  ret 
    X86_AT(c, 0x100313u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1001f8u, "ran off the end of a function");
}
void f_00100508(X86Cpu& c) {
    X86_TICK(c, 46);
    // 100508  enter 0x14, 0
    X86_AT(c, 0x100508u);
    x86_enter(c, 0x14u, 0x0u, 4);
    // 10050c  push ebx
    X86_AT(c, 0x10050cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 10050d  push esi
    X86_AT(c, 0x10050du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 10050e  push edi
    X86_AT(c, 0x10050eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 10050f  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x10050fu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 100512  mov esi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x100512u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 100515  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0x100515u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 100518  mov ax, word ptr [0xe00b6]
    X86_AT(c, 0x100518u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xE00B6u))));
    // 10051e  mov word ptr [ebp - 0xa], ax
    X86_AT(c, 0x10051eu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF6u)), (c.r[0] & 0xFFFFu));
    // 100522  mov word ptr [0xe00b6], 0
    X86_AT(c, 0x100522u);
    wr16((c.sbase[3] + (uint32_t)(0xE00B6u)), 0x0u);
    // 10052b  mov dword ptr [ebp - 0x10], edi
    X86_AT(c, 0x10052bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[7]);
    // 10052e  test byte ptr [ebx + 0xc], 0x80
    X86_AT(c, 0x10052eu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x80u, 1);
    // 100532  je 0x10053a
    X86_AT(c, 0x100532u);
    if (x86_cc(c, 4)) { goto L_10053a; }
    X86_TICK(c, 9);
    // 100534  push ebx
    X86_AT(c, 0x100534u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 100535  call 0x102558
    X86_AT(c, 0x100535u);
    push32(c, 0x10053au); f_00102558(c); X86_RET(c, 0x10053au);
L_10053a:
    X86_TICK(c, 12);
    // 10053a  test byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0x10053au);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x10u, 1);
    // 10053e  jne 0x10071d
    X86_AT(c, 0x10053eu);
    if (x86_cc(c, 5)) { goto L_10071d; }
    X86_TICK(c, 12);
    // 100544  cmp dword ptr [ebx + 4], 0xffffffff
    X86_AT(c, 0x100544u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0xFFFFFFFFu, 0, 4);
    // 100548  jne 0x100551
    X86_AT(c, 0x100548u);
    if (x86_cc(c, 5)) { goto L_100551; }
    X86_TICK(c, 2);
    // 10054a  mov dword ptr [ebx + 4], 0
    X86_AT(c, 0x10054au);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0x0u);
L_100551:
    X86_TICK(c, 12);
    // 100551  test byte ptr [ebx + 0xc], 1
    X86_AT(c, 0x100551u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x1u, 1);
    // 100555  je 0x100706
    X86_AT(c, 0x100555u);
    if (x86_cc(c, 4)) { goto L_100706; }
    X86_TICK(c, 12);
    // 10055b  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x10055bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 10055f  jne 0x1005ac
    X86_AT(c, 0x10055fu);
    if (x86_cc(c, 5)) { goto L_1005ac; }
    X86_TICK(c, 12);
    // 100561  test byte ptr [ebx + 0xc], 0x40
    X86_AT(c, 0x100561u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x40u, 1);
    // 100565  je 0x100583
    X86_AT(c, 0x100565u);
    if (x86_cc(c, 4)) { goto L_100583; }
    X86_TICK(c, 18);
    // 100567  push dword ptr [ebp + 8]
    X86_AT(c, 0x100567u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 10056a  push 1
    X86_AT(c, 0x10056au);
    { uint32_t v = 0x1u; push32(c, v); }
    // 10056c  push 1
    X86_AT(c, 0x10056cu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 10056e  push edi
    X86_AT(c, 0x10056eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 10056f  call 0x100c58
    X86_AT(c, 0x10056fu);
    push32(c, 0x100574u); f_00100c58(c); X86_RET(c, 0x100574u);
    X86_TICK(c, 11);
    // 100574  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x100574u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 100577  add esp, 0x10
    X86_AT(c, 0x100577u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 10057a  and eax, eax
    X86_AT(c, 0x10057au);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 10057c  jne 0x1005eb
    X86_AT(c, 0x10057cu);
    if (x86_cc(c, 5)) { goto L_1005eb; }
    X86_TICK(c, 7);
    // 10057e  jmp 0x10071d
    X86_AT(c, 0x10057eu);
    goto L_10071d;
L_100583:
    X86_TICK(c, 20);
    // 100583  push 0x200
    X86_AT(c, 0x100583u);
    { uint32_t v = 0x200u; push32(c, v); }
    // 100588  push dword ptr [ebx + 8]
    X86_AT(c, 0x100588u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 10058b  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x10058bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 10058e  push eax
    X86_AT(c, 0x10058eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 10058f  call 0x103a58
    X86_AT(c, 0x10058fu);
    push32(c, 0x100594u); f_00103a58(c); X86_RET(c, 0x100594u);
    X86_TICK(c, 22);
    // 100594  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x100594u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
    // 100597  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x100597u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 10059a  mov dword ptr [ebx], eax
    X86_AT(c, 0x10059au);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 10059c  mov word ptr [ebx + 0x10], 0xffff
    X86_AT(c, 0x10059cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFFu);
    // 1005a2  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x1005a2u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 1005a6  je 0x10071d
    X86_AT(c, 0x1005a6u);
    if (x86_cc(c, 4)) { goto L_10071d; }
L_1005ac:
    X86_TICK(c, 12);
    // 1005ac  test byte ptr [ebx + 0xc], 0x40
    X86_AT(c, 0x1005acu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x40u, 1);
    // 1005b0  je 0x100636
    X86_AT(c, 0x1005b0u);
    if (x86_cc(c, 4)) { goto L_100636; }
    X86_TICK(c, 11);
    // 1005b6  mov ax, word ptr [ebx + 0x10]
    X86_AT(c, 0x1005b6u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))));
    // 1005ba  cmp ax, 0xffff
    X86_AT(c, 0x1005bau);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0xFFFFu, 0, 2);
    // 1005be  je 0x1005d0
    X86_AT(c, 0x1005beu);
    if (x86_cc(c, 4)) { goto L_1005d0; }
    X86_TICK(c, 20);
    // 1005c0  movsx eax, ax
    X86_AT(c, 0x1005c0u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 1005c3  add eax, dword ptr [ebx + 8]
    X86_AT(c, 0x1005c3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 1005c6  cmp eax, dword ptr [ebx]
    X86_AT(c, 0x1005c6u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4);
    // 1005c8  jl 0x1005d0
    X86_AT(c, 0x1005c8u);
    if (x86_cc(c, 12)) { goto L_1005d0; }
    X86_TICK(c, 12);
    // 1005ca  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x1005cau);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 1005ce  jne 0x1005fc
    X86_AT(c, 0x1005ceu);
    if (x86_cc(c, 5)) { goto L_1005fc; }
L_1005d0:
    X86_TICK(c, 18);
    // 1005d0  push dword ptr [ebp + 8]
    X86_AT(c, 0x1005d0u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 1005d3  push 1
    X86_AT(c, 0x1005d3u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 1005d5  push 1
    X86_AT(c, 0x1005d5u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 1005d7  push edi
    X86_AT(c, 0x1005d7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1005d8  call 0x100c58
    X86_AT(c, 0x1005d8u);
    push32(c, 0x1005ddu); f_00100c58(c); X86_RET(c, 0x1005ddu);
    X86_TICK(c, 11);
    // 1005dd  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x1005ddu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 1005e0  add esp, 0x10
    X86_AT(c, 0x1005e0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 1005e3  and eax, eax
    X86_AT(c, 0x1005e3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 1005e5  je 0x10072b
    X86_AT(c, 0x1005e5u);
    if (x86_cc(c, 4)) { goto L_10072b; }
L_1005eb:
    X86_TICK(c, 12);
    // 1005eb  cmp byte ptr [edi], 0xa
    X86_AT(c, 0x1005ebu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0xAu, 0, 1);
    // 1005ee  je 0x100749
    X86_AT(c, 0x1005eeu);
    if (x86_cc(c, 4)) { goto L_100749; }
    X86_TICK(c, 12);
    // 1005f4  cmp byte ptr [ebp + 0x14], 0
    X86_AT(c, 0x1005f4u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0x0u, 0, 1);
    // 1005f8  je 0x1005fb
    X86_AT(c, 0x1005f8u);
    if (x86_cc(c, 4)) { goto L_1005fb; }
    X86_TICK(c, 2);
    // 1005fa  dec esi
    X86_AT(c, 0x1005fau);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_1005fb:
    X86_TICK(c, 2);
    // 1005fb  inc edi
    X86_AT(c, 0x1005fbu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
L_1005fc:
    X86_TICK(c, 12);
    // 1005fc  cmp word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0x1005fcu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0x200u, 0, 2);
    // 100602  jne 0x100609
    X86_AT(c, 0x100602u);
    if (x86_cc(c, 5)) { goto L_100609; }
    X86_TICK(c, 11);
    // 100604  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x100604u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 100607  jmp 0x10061a
    X86_AT(c, 0x100607u);
    goto L_10061a;
L_100609:
    X86_TICK(c, 12);
    // 100609  cmp word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0x100609u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0xFFFEu, 0, 2);
    // 10060e  jne 0x100625
    X86_AT(c, 0x10060eu);
    if (x86_cc(c, 5)) { goto L_100625; }
    X86_TICK(c, 12);
    // 100610  cmp dword ptr [ebx + 4], 1
    X86_AT(c, 0x100610u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x1u, 0, 4);
    // 100614  je 0x1005d0
    X86_AT(c, 0x100614u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x1005d0u); goto L_1005d0; }
    X86_TICK(c, 6);
    // 100616  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x100616u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 100619  dec eax
    X86_AT(c, 0x100619u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
L_10061a:
    X86_TICK(c, 7);
    // 10061a  cmp eax, esi
    X86_AT(c, 0x10061au);
    (void)x86_sub(c, c.r[0], c.r[6], 0, 4);
    // 10061c  jl 0x100620
    X86_AT(c, 0x10061cu);
    if (x86_cc(c, 12)) { goto L_100620; }
    X86_TICK(c, 2);
    // 10061e  mov eax, esi
    X86_AT(c, 0x10061eu);
    c.r[0] = c.r[6];
L_100620:
    X86_TICK(c, 9);
    // 100620  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x100620u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 100623  jmp 0x100682
    X86_AT(c, 0x100623u);
    goto L_100682;
L_100625:
    X86_TICK(c, 25);
    // 100625  mov eax, dword ptr [ebx]
    X86_AT(c, 0x100625u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 100627  sub eax, dword ptr [ebx + 8]
    X86_AT(c, 0x100627u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 10062a  movsx edx, word ptr [ebx + 0x10]
    X86_AT(c, 0x10062au);
    c.r[2] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 10062e  sub edx, eax
    X86_AT(c, 0x10062eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 100630  cmp edx, esi
    X86_AT(c, 0x100630u);
    (void)x86_sub(c, c.r[2], c.r[6], 0, 4);
    // 100632  jl 0x10067f
    X86_AT(c, 0x100632u);
    if (x86_cc(c, 12)) { goto L_10067f; }
    X86_TICK(c, 7);
    // 100634  jmp 0x10067d
    X86_AT(c, 0x100634u);
    goto L_10067d;
L_100636:
    X86_TICK(c, 12);
    // 100636  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x100636u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 10063a  jne 0x100665
    X86_AT(c, 0x10063au);
    if (x86_cc(c, 5)) { goto L_100665; }
    X86_TICK(c, 20);
    // 10063c  push 0x200
    X86_AT(c, 0x10063cu);
    { uint32_t v = 0x200u; push32(c, v); }
    // 100641  push dword ptr [ebx + 8]
    X86_AT(c, 0x100641u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 100644  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x100644u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 100647  push eax
    X86_AT(c, 0x100647u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 100648  call 0x103a58
    X86_AT(c, 0x100648u);
    push32(c, 0x10064du); f_00103a58(c); X86_RET(c, 0x10064du);
    X86_TICK(c, 22);
    // 10064d  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x10064du);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
    // 100650  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x100650u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 100653  mov dword ptr [ebx], eax
    X86_AT(c, 0x100653u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 100655  mov word ptr [ebx + 0x10], 0xffff
    X86_AT(c, 0x100655u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFFu);
    // 10065b  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x10065bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 10065f  je 0x10072b
    X86_AT(c, 0x10065fu);
    if (x86_cc(c, 4)) { goto L_10072b; }
L_100665:
    X86_TICK(c, 28);
    // 100665  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x100665u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 100668  mov al, 0xa
    X86_AT(c, 0x100668u);
    s8(c, 0, 0xAu);
    // 10066a  mov ecx, dword ptr [ebx]
    X86_AT(c, 0x10066au);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 10066c  push edi
    X86_AT(c, 0x10066cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 10066d  mov edi, ecx
    X86_AT(c, 0x10066du);
    c.r[7] = c.r[1];
    // 10066f  mov ecx, edx
    X86_AT(c, 0x10066fu);
    c.r[1] = c.r[2];
    // 100671  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x100671u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 100673  jne 0x100678
    X86_AT(c, 0x100673u);
    if (x86_cc(c, 5)) { goto L_100678; }
    X86_TICK(c, 4);
    // 100675  inc ecx
    X86_AT(c, 0x100675u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 100676  sub edx, ecx
    X86_AT(c, 0x100676u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_100678:
    X86_TICK(c, 11);
    // 100678  pop edi
    X86_AT(c, 0x100678u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 100679  cmp edx, esi
    X86_AT(c, 0x100679u);
    (void)x86_sub(c, c.r[2], c.r[6], 0, 4);
    // 10067b  jb 0x10067f
    X86_AT(c, 0x10067bu);
    if (x86_cc(c, 2)) { goto L_10067f; }
L_10067d:
    X86_TICK(c, 2);
    // 10067d  mov edx, esi
    X86_AT(c, 0x10067du);
    c.r[2] = c.r[6];
L_10067f:
    X86_TICK(c, 2);
    // 10067f  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0x10067fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
L_100682:
    X86_TICK(c, 47);
    // 100682  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0x100682u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 100685  mov eax, dword ptr [ebx]
    X86_AT(c, 0x100685u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 100687  push esi
    X86_AT(c, 0x100687u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 100688  push edi
    X86_AT(c, 0x100688u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 100689  mov esi, eax
    X86_AT(c, 0x100689u);
    c.r[6] = c.r[0];
    // 10068b  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x10068bu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 10068d  pop edi
    X86_AT(c, 0x10068du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 10068e  pop esi
    X86_AT(c, 0x10068eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 10068f  add edi, dword ptr [ebp - 4]
    X86_AT(c, 0x10068fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 100692  cmp byte ptr [ebp + 0x14], 0
    X86_AT(c, 0x100692u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0x0u, 0, 1);
    // 100696  je 0x10069b
    X86_AT(c, 0x100696u);
    if (x86_cc(c, 4)) { goto L_10069b; }
    X86_TICK(c, 6);
    // 100698  sub esi, dword ptr [ebp - 4]
    X86_AT(c, 0x100698u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
L_10069b:
    X86_TICK(c, 30);
    // 10069b  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x10069bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 10069e  sub dword ptr [ebx + 4], eax
    X86_AT(c, 0x10069eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 1006a1  add dword ptr [ebx], eax
    X86_AT(c, 0x1006a1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 1006a3  test byte ptr [ebx + 0xc], 0x40
    X86_AT(c, 0x1006a3u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x40u, 1);
    // 1006a7  je 0x1006df
    X86_AT(c, 0x1006a7u);
    if (x86_cc(c, 4)) { goto L_1006df; }
    X86_TICK(c, 17);
    // 1006a9  movzx eax, word ptr [0xdfc28]
    X86_AT(c, 0x1006a9u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0xDFC28u)));
    // 1006b0  cmp eax, dword ptr [ebx + 4]
    X86_AT(c, 0x1006b0u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 1006b3  jg 0x1006fc
    X86_AT(c, 0x1006b3u);
    if (x86_cc(c, 15)) { goto L_1006fc; }
    X86_TICK(c, 7);
    // 1006b5  and esi, esi
    X86_AT(c, 0x1006b5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 1006b7  jbe 0x1006fc
    X86_AT(c, 0x1006b7u);
    if (x86_cc(c, 6)) { goto L_1006fc; }
    X86_TICK(c, 18);
    // 1006b9  push eax
    X86_AT(c, 0x1006b9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 1006ba  push 0xdfc2a
    X86_AT(c, 0x1006bau);
    { uint32_t v = 0xDFC2Au; push32(c, v); }
    // 1006bf  push dword ptr [ebx]
    X86_AT(c, 0x1006bfu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3]))); push32(c, v); }
    // 1006c1  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0x1006c1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 1006c4  call 0x103d84
    X86_AT(c, 0x1006c4u);
    push32(c, 0x1006c9u); f_00103d84(c); X86_RET(c, 0x1006c9u);
    X86_TICK(c, 7);
    // 1006c9  and ax, ax
    X86_AT(c, 0x1006c9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
    // 1006cc  jne 0x1006fc
    X86_AT(c, 0x1006ccu);
    if (x86_cc(c, 5)) { goto L_1006fc; }
    X86_TICK(c, 31);
    // 1006ce  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0x1006ceu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 1006d1  add dword ptr [ebx], eax
    X86_AT(c, 0x1006d1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 1006d3  movzx eax, word ptr [0xdfc28]
    X86_AT(c, 0x1006d3u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0xDFC28u)));
    // 1006da  sub dword ptr [ebx + 4], eax
    X86_AT(c, 0x1006dau);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 1006dd  jmp 0x1006f1
    X86_AT(c, 0x1006ddu);
    goto L_1006f1;
L_1006df:
    X86_TICK(c, 12);
    // 1006df  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x1006dfu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 1006e3  jle 0x1006fc
    X86_AT(c, 0x1006e3u);
    if (x86_cc(c, 14)) { goto L_1006fc; }
    X86_TICK(c, 16);
    // 1006e5  mov eax, dword ptr [ebx]
    X86_AT(c, 0x1006e5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 1006e7  cmp byte ptr [eax], 0xa
    X86_AT(c, 0x1006e7u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0xAu, 0, 1);
    // 1006ea  jne 0x1006fc
    X86_AT(c, 0x1006eau);
    if (x86_cc(c, 5)) { goto L_1006fc; }
    X86_TICK(c, 12);
    // 1006ec  inc dword ptr [ebx]
    X86_AT(c, 0x1006ecu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 1006ee  dec dword ptr [ebx + 4]
    X86_AT(c, 0x1006eeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_1006f1:
    X86_TICK(c, 12);
    // 1006f1  cmp byte ptr [ebp + 0x14], 0
    X86_AT(c, 0x1006f1u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0x0u, 0, 1);
    // 1006f5  je 0x10074f
    X86_AT(c, 0x1006f5u);
    if (x86_cc(c, 4)) { goto L_10074f; }
    X86_TICK(c, 9);
    // 1006f7  mov byte ptr [edi], 0xa
    X86_AT(c, 0x1006f7u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0xAu);
    // 1006fa  jmp 0x100754
    X86_AT(c, 0x1006fau);
    goto L_100754;
L_1006fc:
    X86_TICK(c, 7);
    // 1006fc  and esi, esi
    X86_AT(c, 0x1006fcu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 1006fe  jne 0x1005ac
    X86_AT(c, 0x1006feu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1005acu); goto L_1005ac; }
    X86_TICK(c, 7);
    // 100704  jmp 0x10072b
    X86_AT(c, 0x100704u);
    goto L_10072b;
L_100706:
    X86_TICK(c, 18);
    // 100706  push dword ptr [ebp + 8]
    X86_AT(c, 0x100706u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 100709  push 1
    X86_AT(c, 0x100709u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 10070b  push 1
    X86_AT(c, 0x10070bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 10070d  push edi
    X86_AT(c, 0x10070du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 10070e  call 0x100c58
    X86_AT(c, 0x10070eu);
    push32(c, 0x100713u); f_00100c58(c); X86_RET(c, 0x100713u);
    X86_TICK(c, 11);
    // 100713  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x100713u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 100716  add esp, 0x10
    X86_AT(c, 0x100716u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 100719  and eax, eax
    X86_AT(c, 0x100719u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 10071b  jne 0x100721
    X86_AT(c, 0x10071bu);
    if (x86_cc(c, 5)) { goto L_100721; }
L_10071d:
    X86_TICK(c, 9);
    // 10071d  sub eax, eax
    X86_AT(c, 0x10071du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 10071f  jmp 0x10077e
    X86_AT(c, 0x10071fu);
    goto L_10077e;
L_100721:
    X86_TICK(c, 12);
    // 100721  cmp dword ptr [ebp - 8], 0
    X86_AT(c, 0x100721u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x0u, 0, 4);
    // 100725  je 0x10072b
    X86_AT(c, 0x100725u);
    if (x86_cc(c, 4)) { goto L_10072b; }
    X86_TICK(c, 7);
    // 100727  and esi, esi
    X86_AT(c, 0x100727u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 100729  jne 0x100744
    X86_AT(c, 0x100729u);
    if (x86_cc(c, 5)) { goto L_100744; }
L_10072b:
    X86_TICK(c, 15);
    // 10072b  sub eax, eax
    X86_AT(c, 0x10072bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 10072d  mov byte ptr [edi], al
    X86_AT(c, 0x10072du);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), g8(c, 0));
    // 10072f  cmp ax, word ptr [0xe00b6]
    X86_AT(c, 0x10072fu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(0xE00B6u))), 0, 2);
    // 100736  jne 0x10077e
    X86_AT(c, 0x100736u);
    if (x86_cc(c, 5)) { goto L_10077e; }
    X86_TICK(c, 13);
    // 100738  mov ax, word ptr [ebp - 0xa]
    X86_AT(c, 0x100738u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF6u))));
    // 10073c  mov word ptr [0xe00b6], ax
    X86_AT(c, 0x10073cu);
    wr16((c.sbase[3] + (uint32_t)(0xE00B6u)), (c.r[0] & 0xFFFFu));
    // 100742  jmp 0x100758
    X86_AT(c, 0x100742u);
    goto L_100758;
L_100744:
    X86_TICK(c, 12);
    // 100744  cmp byte ptr [edi], 0xa
    X86_AT(c, 0x100744u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0xAu, 0, 1);
    // 100747  jne 0x10075d
    X86_AT(c, 0x100747u);
    if (x86_cc(c, 5)) { goto L_10075d; }
L_100749:
    X86_TICK(c, 12);
    // 100749  cmp byte ptr [ebp + 0x14], 0
    X86_AT(c, 0x100749u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0x0u, 0, 1);
    // 10074d  jne 0x100754
    X86_AT(c, 0x10074du);
    if (x86_cc(c, 5)) { goto L_100754; }
L_10074f:
    X86_TICK(c, 9);
    // 10074f  mov byte ptr [edi], 0
    X86_AT(c, 0x10074fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0x0u);
    // 100752  jmp 0x100758
    X86_AT(c, 0x100752u);
    goto L_100758;
L_100754:
    X86_TICK(c, 2);
    // 100754  mov byte ptr [edi + 1], 0
    X86_AT(c, 0x100754u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)), 0x0u);
L_100758:
    X86_TICK(c, 11);
    // 100758  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0x100758u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 10075b  jmp 0x10077e
    X86_AT(c, 0x10075bu);
    goto L_10077e;
L_10075d:
    X86_TICK(c, 14);
    // 10075d  inc edi
    X86_AT(c, 0x10075du);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 10075e  cmp byte ptr [ebp + 0x14], 0
    X86_AT(c, 0x10075eu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0x0u, 0, 1);
    // 100762  je 0x100765
    X86_AT(c, 0x100762u);
    if (x86_cc(c, 4)) { goto L_100765; }
    X86_TICK(c, 2);
    // 100764  dec esi
    X86_AT(c, 0x100764u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_100765:
    X86_TICK(c, 7);
    // 100765  and esi, esi
    X86_AT(c, 0x100765u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 100767  jbe 0x100721
    X86_AT(c, 0x100767u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0x100721u); goto L_100721; }
    X86_TICK(c, 18);
    // 100769  push dword ptr [ebp + 8]
    X86_AT(c, 0x100769u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 10076c  push 1
    X86_AT(c, 0x10076cu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 10076e  push 1
    X86_AT(c, 0x10076eu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 100770  push edi
    X86_AT(c, 0x100770u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 100771  call 0x100c58
    X86_AT(c, 0x100771u);
    push32(c, 0x100776u); f_00100c58(c); X86_RET(c, 0x100776u);
    X86_TICK(c, 11);
    // 100776  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x100776u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 100779  add esp, 0x10
    X86_AT(c, 0x100779u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 10077c  jmp 0x100721
    X86_AT(c, 0x10077cu);
    X86_POLL(c, 0x100721u); goto L_100721;
L_10077e:
    X86_TICK(c, 28);
    // 10077e  pop edi
    X86_AT(c, 0x10077eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 10077f  pop esi
    X86_AT(c, 0x10077fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 100780  pop ebx
    X86_AT(c, 0x100780u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 100781  leave 
    X86_AT(c, 0x100781u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 100782  ret 0x10
    X86_AT(c, 0x100782u);
    c.eip = pop32(c); c.r[4] += 0x10u; return;
    x86_fault(c, 0x100508u, "ran off the end of a function");
}
void f_0010078c(X86Cpu& c) {
    X86_TICK(c, 23);
    // 10078c  push ebp
    X86_AT(c, 0x10078cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 10078d  mov ebp, esp
    X86_AT(c, 0x10078du);
    c.r[5] = c.r[4];
    // 10078f  push esi
    X86_AT(c, 0x10078fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 100790  push edi
    X86_AT(c, 0x100790u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 100791  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x100791u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 100794  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x100794u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 100797  cmp esi, 1
    X86_AT(c, 0x100797u);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 10079a  jl 0x1007a4
    X86_AT(c, 0x10079au);
    if (x86_cc(c, 12)) { goto L_1007a4; }
    X86_TICK(c, 7);
    // 10079c  cmp esi, 1
    X86_AT(c, 0x10079cu);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 10079f  jne 0x1007a8
    X86_AT(c, 0x10079fu);
    if (x86_cc(c, 5)) { goto L_1007a8; }
    X86_TICK(c, 2);
    // 1007a1  mov byte ptr [edi], 0
    X86_AT(c, 0x1007a1u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0x0u);
L_1007a4:
    X86_TICK(c, 9);
    // 1007a4  mov eax, edi
    X86_AT(c, 0x1007a4u);
    c.r[0] = c.r[7];
    // 1007a6  jmp 0x1007b7
    X86_AT(c, 0x1007a6u);
    goto L_1007b7;
L_1007a8:
    X86_TICK(c, 20);
    // 1007a8  push 1
    X86_AT(c, 0x1007a8u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 1007aa  lea eax, [esi - 1]
    X86_AT(c, 0x1007aau);
    c.r[0] = (uint32_t)(c.r[6] + 0xFFFFFFFFu);
    // 1007ad  push eax
    X86_AT(c, 0x1007adu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 1007ae  push edi
    X86_AT(c, 0x1007aeu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1007af  push dword ptr [ebp + 0x10]
    X86_AT(c, 0x1007afu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 1007b2  call 0x100508
    X86_AT(c, 0x1007b2u);
    push32(c, 0x1007b7u); f_00100508(c); X86_RET(c, 0x1007b7u);
L_1007b7:
    X86_TICK(c, 24);
    // 1007b7  pop edi
    X86_AT(c, 0x1007b7u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 1007b8  pop esi
    X86_AT(c, 0x1007b8u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 1007b9  leave 
    X86_AT(c, 0x1007b9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 1007ba  ret 
    X86_AT(c, 0x1007bau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10078cu, "ran off the end of a function");
}
void f_001007f0(X86Cpu& c) {
    X86_TICK(c, 42);
    // 1007f0  enter 0x14, 0
    X86_AT(c, 0x1007f0u);
    x86_enter(c, 0x14u, 0x0u, 4);
    // 1007f4  push ebx
    X86_AT(c, 0x1007f4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 1007f5  push esi
    X86_AT(c, 0x1007f5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 1007f6  push edi
    X86_AT(c, 0x1007f6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1007f7  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x1007f7u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 1007fa  mov ax, word ptr [0xe00b6]
    X86_AT(c, 0x1007fau);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xE00B6u))));
    // 100800  mov word ptr [ebp - 0xe], ax
    X86_AT(c, 0x100800u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u)), (c.r[0] & 0xFFFFu));
    // 100804  sub eax, eax
    X86_AT(c, 0x100804u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 100806  mov word ptr [0xe00b6], ax
    X86_AT(c, 0x100806u);
    wr16((c.sbase[3] + (uint32_t)(0xE00B6u)), (c.r[0] & 0xFFFFu));
    // 10080c  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0x10080cu);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 10080f  test byte ptr [ebx + 0xc], 1
    X86_AT(c, 0x10080fu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x1u, 1);
    // 100813  je 0x100b05
    X86_AT(c, 0x100813u);
    if (x86_cc(c, 4)) { goto L_100b05; }
    X86_TICK(c, 9);
    // 100819  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x100819u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 10081c  jmp 0x100ae6
    X86_AT(c, 0x10081cu);
    goto L_100ae6;
L_100821:
    X86_TICK(c, 12);
    // 100821  test byte ptr [ebx + 0xc], 0x40
    X86_AT(c, 0x100821u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x40u, 1);
    // 100825  je 0x100a1e
    X86_AT(c, 0x100825u);
    if (x86_cc(c, 4)) { goto L_100a1e; }
    X86_TICK(c, 12);
    // 10082b  cmp dword ptr [ebx + 4], 1
    X86_AT(c, 0x10082bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x1u, 0, 4);
    // 10082f  jne 0x100876
    X86_AT(c, 0x10082fu);
    if (x86_cc(c, 5)) { goto L_100876; }
    X86_TICK(c, 12);
    // 100831  cmp word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0x100831u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0xFFFEu, 0, 2);
    // 100836  jne 0x100876
    X86_AT(c, 0x100836u);
    if (x86_cc(c, 5)) { goto L_100876; }
    X86_TICK(c, 12);
    // 100838  test byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x100838u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x4u, 1);
    // 10083c  jne 0x100abc
    X86_AT(c, 0x10083cu);
    if (x86_cc(c, 5)) { goto L_100abc; }
    X86_TICK(c, 33);
    // 100842  mov al, byte ptr [0xdfc2a]
    X86_AT(c, 0x100842u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xDFC2Au))));
    // 100847  mov edx, dword ptr [ebx + 8]
    X86_AT(c, 0x100847u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 10084a  mov byte ptr [edx], al
    X86_AT(c, 0x10084au);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 10084c  push 0x1ff
    X86_AT(c, 0x10084cu);
    { uint32_t v = 0x1FFu; push32(c, v); }
    // 100851  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x100851u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 100854  inc eax
    X86_AT(c, 0x100854u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 100855  push eax
    X86_AT(c, 0x100855u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 100856  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x100856u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 100859  push eax
    X86_AT(c, 0x100859u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 10085a  call 0x103a58
    X86_AT(c, 0x10085au);
    push32(c, 0x10085fu); f_00103a58(c); X86_RET(c, 0x10085fu);
    X86_TICK(c, 11);
    // 10085f  inc eax
    X86_AT(c, 0x10085fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 100860  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x100860u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
    // 100863  dec eax
    X86_AT(c, 0x100863u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 100864  jne 0x1008ae
    X86_AT(c, 0x100864u);
    if (x86_cc(c, 5)) { goto L_1008ae; }
    X86_TICK(c, 15);
    // 100866  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x100866u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 100869  mov dword ptr [ebx], eax
    X86_AT(c, 0x100869u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 10086b  mov word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0x10086bu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0x200u);
    // 100871  jmp 0x100abc
    X86_AT(c, 0x100871u);
    goto L_100abc;
L_100876:
    X86_TICK(c, 12);
    // 100876  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x100876u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 10087a  jne 0x1008f3
    X86_AT(c, 0x10087au);
    if (x86_cc(c, 5)) { goto L_1008f3; }
    X86_TICK(c, 12);
    // 100880  test byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0x100880u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x10u, 1);
    // 100884  jne 0x100aee
    X86_AT(c, 0x100884u);
    if (x86_cc(c, 5)) { goto L_100aee; }
    X86_TICK(c, 12);
    // 10088a  test byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x10088au);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x4u, 1);
    // 10088e  jne 0x1008a4
    X86_AT(c, 0x10088eu);
    if (x86_cc(c, 5)) { goto L_1008a4; }
    X86_TICK(c, 20);
    // 100890  push 0x200
    X86_AT(c, 0x100890u);
    { uint32_t v = 0x200u; push32(c, v); }
    // 100895  push dword ptr [ebx + 8]
    X86_AT(c, 0x100895u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 100898  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x100898u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 10089b  push eax
    X86_AT(c, 0x10089bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 10089c  call 0x103a58
    X86_AT(c, 0x10089cu);
    push32(c, 0x1008a1u); f_00103a58(c); X86_RET(c, 0x1008a1u);
    X86_TICK(c, 2);
    // 1008a1  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x1008a1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
L_1008a4:
    X86_TICK(c, 12);
    // 1008a4  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x1008a4u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 1008a8  je 0x100aee
    X86_AT(c, 0x1008a8u);
    if (x86_cc(c, 4)) { goto L_100aee; }
L_1008ae:
    X86_TICK(c, 28);
    // 1008ae  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x1008aeu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 1008b1  mov al, 0x1a
    X86_AT(c, 0x1008b1u);
    s8(c, 0, 0x1Au);
    // 1008b3  mov ecx, dword ptr [ebx + 8]
    X86_AT(c, 0x1008b3u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 1008b6  push edi
    X86_AT(c, 0x1008b6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1008b7  mov edi, ecx
    X86_AT(c, 0x1008b7u);
    c.r[7] = c.r[1];
    // 1008b9  mov ecx, edx
    X86_AT(c, 0x1008b9u);
    c.r[1] = c.r[2];
    // 1008bb  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x1008bbu);
    x86_string(c, 4, 1, 242, 4, 3);
    // 1008bd  jne 0x1008c2
    X86_AT(c, 0x1008bdu);
    if (x86_cc(c, 5)) { goto L_1008c2; }
    X86_TICK(c, 4);
    // 1008bf  inc ecx
    X86_AT(c, 0x1008bfu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 1008c0  sub edx, ecx
    X86_AT(c, 0x1008c0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_1008c2:
    X86_TICK(c, 17);
    // 1008c2  pop edi
    X86_AT(c, 0x1008c2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 1008c3  mov word ptr [ebp - 0x10], dx
    X86_AT(c, 0x1008c3u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), (c.r[2] & 0xFFFFu));
    // 1008c7  cmp edx, dword ptr [ebx + 4]
    X86_AT(c, 0x1008c7u);
    (void)x86_sub(c, c.r[2], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 1008ca  je 0x1008e8
    X86_AT(c, 0x1008cau);
    if (x86_cc(c, 4)) { goto L_1008e8; }
    X86_TICK(c, 32);
    // 1008cc  or byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x1008ccu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x4u, 1)); }
    // 1008d0  push 1
    X86_AT(c, 0x1008d0u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 1008d2  mov dword ptr [ebp - 0x14], edx
    X86_AT(c, 0x1008d2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[2]);
    // 1008d5  sub edx, dword ptr [ebx + 4]
    X86_AT(c, 0x1008d5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4); }
    // 1008d8  push edx
    X86_AT(c, 0x1008d8u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 1008d9  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x1008d9u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 1008dc  push eax
    X86_AT(c, 0x1008dcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 1008dd  call 0x103b30
    X86_AT(c, 0x1008ddu);
    push32(c, 0x1008e2u); f_00103b30(c); X86_RET(c, 0x1008e2u);
    X86_TICK(c, 6);
    // 1008e2  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0x1008e2u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 1008e5  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x1008e5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
L_1008e8:
    X86_TICK(c, 8);
    // 1008e8  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x1008e8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 1008eb  mov dword ptr [ebx], eax
    X86_AT(c, 0x1008ebu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 1008ed  mov word ptr [ebx + 0x10], 0xffff
    X86_AT(c, 0x1008edu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFFu);
L_1008f3:
    X86_TICK(c, 12);
    // 1008f3  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x1008f3u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 1008f7  jle 0x100ae6
    X86_AT(c, 0x1008f7u);
    if (x86_cc(c, 14)) { goto L_100ae6; }
    X86_TICK(c, 11);
    // 1008fd  mov ax, word ptr [ebx + 0x10]
    X86_AT(c, 0x1008fdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))));
    // 100901  cmp ax, 0xffff
    X86_AT(c, 0x100901u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0xFFFFu, 0, 2);
    // 100905  je 0x100915
    X86_AT(c, 0x100905u);
    if (x86_cc(c, 4)) { goto L_100915; }
    X86_TICK(c, 20);
    // 100907  movsx eax, ax
    X86_AT(c, 0x100907u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 10090a  add eax, dword ptr [ebx + 8]
    X86_AT(c, 0x10090au);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 10090d  cmp eax, dword ptr [ebx]
    X86_AT(c, 0x10090du);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4);
    // 10090f  jge 0x1009ac
    X86_AT(c, 0x10090fu);
    if (x86_cc(c, 13)) { goto L_1009ac; }
L_100915:
    X86_TICK(c, 30);
    // 100915  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x100915u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 100918  mov al, byte ptr [0xdfc2a]
    X86_AT(c, 0x100918u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xDFC2Au))));
    // 10091d  mov ecx, dword ptr [ebx]
    X86_AT(c, 0x10091du);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 10091f  push edi
    X86_AT(c, 0x10091fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 100920  mov edi, ecx
    X86_AT(c, 0x100920u);
    c.r[7] = c.r[1];
    // 100922  mov ecx, edx
    X86_AT(c, 0x100922u);
    c.r[1] = c.r[2];
    // 100924  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x100924u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 100926  jne 0x10092b
    X86_AT(c, 0x100926u);
    if (x86_cc(c, 5)) { goto L_10092b; }
    X86_TICK(c, 4);
    // 100928  inc ecx
    X86_AT(c, 0x100928u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 100929  sub edx, ecx
    X86_AT(c, 0x100929u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_10092b:
    X86_TICK(c, 13);
    // 10092b  pop edi
    X86_AT(c, 0x10092bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 10092c  mov word ptr [ebx + 0x10], dx
    X86_AT(c, 0x10092cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), (c.r[2] & 0xFFFFu));
    // 100930  jmp 0x100965
    X86_AT(c, 0x100930u);
    goto L_100965;
L_100932:
    X86_TICK(c, 59);
    // 100932  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x100932u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 100936  add eax, dword ptr [ebx]
    X86_AT(c, 0x100936u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4); }
    // 100938  inc eax
    X86_AT(c, 0x100938u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 100939  mov dx, word ptr [ebx + 0x10]
    X86_AT(c, 0x100939u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))));
    // 10093d  inc edx
    X86_AT(c, 0x10093du);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 10093e  movsx edx, dx
    X86_AT(c, 0x10093eu);
    c.r[2] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 100941  mov ecx, dword ptr [ebx + 4]
    X86_AT(c, 0x100941u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 100944  sub ecx, edx
    X86_AT(c, 0x100944u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 100946  mov edx, ecx
    X86_AT(c, 0x100946u);
    c.r[2] = c.r[1];
    // 100948  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0x100948u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 10094b  mov al, byte ptr [0xdfc2a]
    X86_AT(c, 0x10094bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xDFC2Au))));
    // 100950  mov ecx, dword ptr [ebp - 0x14]
    X86_AT(c, 0x100950u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 100953  push edi
    X86_AT(c, 0x100953u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 100954  mov edi, ecx
    X86_AT(c, 0x100954u);
    c.r[7] = c.r[1];
    // 100956  mov ecx, edx
    X86_AT(c, 0x100956u);
    c.r[1] = c.r[2];
    // 100958  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x100958u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 10095a  jne 0x10095f
    X86_AT(c, 0x10095au);
    if (x86_cc(c, 5)) { goto L_10095f; }
    X86_TICK(c, 4);
    // 10095c  inc ecx
    X86_AT(c, 0x10095cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 10095d  sub edx, ecx
    X86_AT(c, 0x10095du);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_10095f:
    X86_TICK(c, 13);
    // 10095f  pop edi
    X86_AT(c, 0x10095fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 100960  inc edx
    X86_AT(c, 0x100960u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 100961  add word ptr [ebx + 0x10], dx
    X86_AT(c, 0x100961u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
L_100965:
    X86_TICK(c, 19);
    // 100965  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x100965u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 100969  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x100969u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 10096c  dec edx
    X86_AT(c, 0x10096cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 10096d  cmp edx, eax
    X86_AT(c, 0x10096du);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 10096f  jle 0x10097e
    X86_AT(c, 0x10096fu);
    if (x86_cc(c, 14)) { goto L_10097e; }
    X86_TICK(c, 23);
    // 100971  add eax, dword ptr [ebx]
    X86_AT(c, 0x100971u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4); }
    // 100973  inc eax
    X86_AT(c, 0x100973u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 100974  mov al, byte ptr [eax]
    X86_AT(c, 0x100974u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 100976  cmp al, byte ptr [0xdfc2b]
    X86_AT(c, 0x100976u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(0xDFC2Bu))), 0, 1);
    // 10097c  jne 0x100932
    X86_AT(c, 0x10097cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x100932u); goto L_100932; }
L_10097e:
    X86_TICK(c, 17);
    // 10097e  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x10097eu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 100982  cmp eax, dword ptr [ebx + 4]
    X86_AT(c, 0x100982u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 100985  jne 0x10098f
    X86_AT(c, 0x100985u);
    if (x86_cc(c, 5)) { goto L_10098f; }
    X86_TICK(c, 9);
    // 100987  mov word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0x100987u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0x200u);
    // 10098d  jmp 0x1009ac
    X86_AT(c, 0x10098du);
    goto L_1009ac;
L_10098f:
    X86_TICK(c, 19);
    // 10098f  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x10098fu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 100993  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x100993u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 100996  dec edx
    X86_AT(c, 0x100996u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 100997  cmp edx, eax
    X86_AT(c, 0x100997u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 100999  jne 0x1009a3
    X86_AT(c, 0x100999u);
    if (x86_cc(c, 5)) { goto L_1009a3; }
    X86_TICK(c, 9);
    // 10099b  mov word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0x10099bu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFEu);
    // 1009a1  jmp 0x1009ac
    X86_AT(c, 0x1009a1u);
    goto L_1009ac;
L_1009a3:
    X86_TICK(c, 17);
    // 1009a3  mov eax, dword ptr [ebx]
    X86_AT(c, 0x1009a3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 1009a5  sub eax, dword ptr [ebx + 8]
    X86_AT(c, 0x1009a5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 1009a8  add word ptr [ebx + 0x10], ax
    X86_AT(c, 0x1009a8u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_1009ac:
    X86_TICK(c, 12);
    // 1009ac  cmp word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0x1009acu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0x200u, 0, 2);
    // 1009b2  je 0x100abc
    X86_AT(c, 0x1009b2u);
    if (x86_cc(c, 4)) { goto L_100abc; }
    X86_TICK(c, 12);
    // 1009b8  cmp word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0x1009b8u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0xFFFEu, 0, 2);
    // 1009bd  jne 0x1009cd
    X86_AT(c, 0x1009bdu);
    if (x86_cc(c, 5)) { goto L_1009cd; }
    X86_TICK(c, 11);
    // 1009bf  cmp edi, dword ptr [ebx + 4]
    X86_AT(c, 0x1009bfu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 1009c2  jl 0x100a17
    X86_AT(c, 0x1009c2u);
    if (x86_cc(c, 12)) { goto L_100a17; }
    X86_TICK(c, 13);
    // 1009c4  mov esi, dword ptr [ebx + 4]
    X86_AT(c, 0x1009c4u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 1009c7  dec esi
    X86_AT(c, 0x1009c7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 1009c8  jmp 0x100ac8
    X86_AT(c, 0x1009c8u);
    goto L_100ac8;
L_1009cd:
    X86_TICK(c, 25);
    // 1009cd  mov eax, dword ptr [ebx]
    X86_AT(c, 0x1009cdu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 1009cf  sub eax, dword ptr [ebx + 8]
    X86_AT(c, 0x1009cfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 1009d2  movsx esi, word ptr [ebx + 0x10]
    X86_AT(c, 0x1009d2u);
    c.r[6] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 1009d6  sub esi, eax
    X86_AT(c, 0x1009d6u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[0], 0, 4); }
    // 1009d8  cmp edi, esi
    X86_AT(c, 0x1009d8u);
    (void)x86_sub(c, c.r[7], c.r[6], 0, 4);
    // 1009da  jbe 0x100a17
    X86_AT(c, 0x1009dau);
    if (x86_cc(c, 6)) { goto L_100a17; }
    X86_TICK(c, 87);
    // 1009dc  mov ecx, esi
    X86_AT(c, 0x1009dcu);
    c.r[1] = c.r[6];
    // 1009de  mov eax, dword ptr [ebx]
    X86_AT(c, 0x1009deu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 1009e0  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x1009e0u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 1009e3  mov dword ptr [ebp - 0x14], edi
    X86_AT(c, 0x1009e3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[7]);
    // 1009e6  mov edi, dword ptr [ebp - 4]
    X86_AT(c, 0x1009e6u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 1009e9  lea edx, [edx + edi*1]
    X86_AT(c, 0x1009e9u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[7]);
    // 1009ec  push esi
    X86_AT(c, 0x1009ecu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 1009ed  push edi
    X86_AT(c, 0x1009edu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1009ee  mov esi, eax
    X86_AT(c, 0x1009eeu);
    c.r[6] = c.r[0];
    // 1009f0  mov edi, edx
    X86_AT(c, 0x1009f0u);
    c.r[7] = c.r[2];
    // 1009f2  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x1009f2u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 1009f4  pop edi
    X86_AT(c, 0x1009f4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 1009f5  pop esi
    X86_AT(c, 0x1009f5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 1009f6  add edi, esi
    X86_AT(c, 0x1009f6u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[6], 0, 4); }
    // 1009f8  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x1009f8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 1009fb  mov byte ptr [eax + edi*1], 0xa
    X86_AT(c, 0x1009fbu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7])), 0xAu);
    // 1009ff  lea eax, [esi + 1]
    X86_AT(c, 0x1009ffu);
    c.r[0] = (uint32_t)(c.r[6] + 0x1u);
    // 100a02  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x100a02u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 100a05  mov edi, dword ptr [ebp - 0x14]
    X86_AT(c, 0x100a05u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 100a08  sub edi, eax
    X86_AT(c, 0x100a08u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[0], 0, 4); }
    // 100a0a  lea eax, [esi + 2]
    X86_AT(c, 0x100a0au);
    c.r[0] = (uint32_t)(c.r[6] + 0x2u);
    // 100a0d  sub dword ptr [ebx + 4], eax
    X86_AT(c, 0x100a0du);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 100a10  add dword ptr [ebx], eax
    X86_AT(c, 0x100a10u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 100a12  jmp 0x100ae6
    X86_AT(c, 0x100a12u);
    goto L_100ae6;
L_100a17:
    X86_TICK(c, 9);
    // 100a17  mov esi, edi
    X86_AT(c, 0x100a17u);
    c.r[6] = c.r[7];
    // 100a19  jmp 0x100ac8
    X86_AT(c, 0x100a19u);
    goto L_100ac8;
L_100a1e:
    X86_TICK(c, 13);
    // 100a1e  mov word ptr [ebx + 0x10], 0xffff
    X86_AT(c, 0x100a1eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFFu);
    // 100a24  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x100a24u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 100a27  cmp edi, eax
    X86_AT(c, 0x100a27u);
    (void)x86_sub(c, c.r[7], c.r[0], 0, 4);
    // 100a29  jl 0x100a4f
    X86_AT(c, 0x100a29u);
    if (x86_cc(c, 12)) { goto L_100a4f; }
    X86_TICK(c, 7);
    // 100a2b  and eax, eax
    X86_AT(c, 0x100a2bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 100a2d  jle 0x100a4f
    X86_AT(c, 0x100a2du);
    if (x86_cc(c, 14)) { goto L_100a4f; }
    X86_TICK(c, 53);
    // 100a2f  xchg ecx, eax
    X86_AT(c, 0x100a2fu);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
    // 100a30  mov eax, dword ptr [ebx]
    X86_AT(c, 0x100a30u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 100a32  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x100a32u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 100a35  push esi
    X86_AT(c, 0x100a35u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 100a36  push edi
    X86_AT(c, 0x100a36u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 100a37  mov esi, eax
    X86_AT(c, 0x100a37u);
    c.r[6] = c.r[0];
    // 100a39  mov edi, edx
    X86_AT(c, 0x100a39u);
    c.r[7] = c.r[2];
    // 100a3b  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x100a3bu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 100a3d  pop edi
    X86_AT(c, 0x100a3du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 100a3e  pop esi
    X86_AT(c, 0x100a3eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 100a3f  sub edi, dword ptr [ebx + 4]
    X86_AT(c, 0x100a3fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4); }
    // 100a42  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x100a42u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 100a45  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x100a45u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 100a48  mov dword ptr [ebx + 4], 0
    X86_AT(c, 0x100a48u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0x0u);
L_100a4f:
    X86_TICK(c, 7);
    // 100a4f  cmp edi, 0x200
    X86_AT(c, 0x100a4fu);
    (void)x86_sub(c, c.r[7], 0x200u, 0, 4);
    // 100a55  jb 0x100a8d
    X86_AT(c, 0x100a55u);
    if (x86_cc(c, 2)) { goto L_100a8d; }
    X86_TICK(c, 10);
    // 100a57  mov esi, edi
    X86_AT(c, 0x100a57u);
    c.r[6] = c.r[7];
    // 100a59  shr esi, 9
    X86_AT(c, 0x100a59u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 5, v, 0x9u, 4, w); if (w) c.r[6] = r; }
    // 100a5c  shl esi, 9
    X86_AT(c, 0x100a5cu);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[6] = r; }
    // 100a5f  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0x100a5fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
L_100a66:
    X86_TICK(c, 27);
    // 100a66  push esi
    X86_AT(c, 0x100a66u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 100a67  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x100a67u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 100a6a  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0x100a6au);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 100a6d  push eax
    X86_AT(c, 0x100a6du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 100a6e  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x100a6eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 100a71  push eax
    X86_AT(c, 0x100a71u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 100a72  call 0x103a58
    X86_AT(c, 0x100a72u);
    push32(c, 0x100a77u); f_00103a58(c); X86_RET(c, 0x100a77u);
    X86_TICK(c, 25);
    // 100a77  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x100a77u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 100a7a  add dword ptr [ebp - 0xc], eax
    X86_AT(c, 0x100a7au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 100a7d  sub esi, eax
    X86_AT(c, 0x100a7du);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[0], 0, 4); }
    // 100a7f  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x100a7fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 100a82  and esi, esi
    X86_AT(c, 0x100a82u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 100a84  je 0x100a8a
    X86_AT(c, 0x100a84u);
    if (x86_cc(c, 4)) { goto L_100a8a; }
    X86_TICK(c, 7);
    // 100a86  and eax, eax
    X86_AT(c, 0x100a86u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 100a88  jne 0x100a66
    X86_AT(c, 0x100a88u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x100a66u); goto L_100a66; }
L_100a8a:
    X86_TICK(c, 6);
    // 100a8a  sub edi, dword ptr [ebp - 0xc]
    X86_AT(c, 0x100a8au);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 4); }
L_100a8d:
    X86_TICK(c, 7);
    // 100a8d  and edi, edi
    X86_AT(c, 0x100a8du);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 100a8f  jbe 0x100ae6
    X86_AT(c, 0x100a8fu);
    if (x86_cc(c, 6)) { goto L_100ae6; }
    X86_TICK(c, 12);
    // 100a91  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x100a91u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 100a95  jne 0x100ab6
    X86_AT(c, 0x100a95u);
    if (x86_cc(c, 5)) { goto L_100ab6; }
    X86_TICK(c, 12);
    // 100a97  test byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0x100a97u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x10u, 1);
    // 100a9b  jne 0x100aee
    X86_AT(c, 0x100a9bu);
    if (x86_cc(c, 5)) { goto L_100aee; }
    X86_TICK(c, 20);
    // 100a9d  push 0x200
    X86_AT(c, 0x100a9du);
    { uint32_t v = 0x200u; push32(c, v); }
    // 100aa2  push dword ptr [ebx + 8]
    X86_AT(c, 0x100aa2u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 100aa5  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x100aa5u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 100aa8  push eax
    X86_AT(c, 0x100aa8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 100aa9  call 0x103a58
    X86_AT(c, 0x100aa9u);
    push32(c, 0x100aaeu); f_00103a58(c); X86_RET(c, 0x100aaeu);
    X86_TICK(c, 8);
    // 100aae  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x100aaeu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
    // 100ab1  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x100ab1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 100ab4  mov dword ptr [ebx], eax
    X86_AT(c, 0x100ab4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
L_100ab6:
    X86_TICK(c, 12);
    // 100ab6  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x100ab6u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 100aba  jle 0x100aee
    X86_AT(c, 0x100abau);
    if (x86_cc(c, 14)) { goto L_100aee; }
L_100abc:
    X86_TICK(c, 13);
    // 100abc  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x100abcu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 100abf  mov edx, edi
    X86_AT(c, 0x100abfu);
    c.r[2] = c.r[7];
    // 100ac1  cmp edx, eax
    X86_AT(c, 0x100ac1u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 100ac3  jl 0x100ac6
    X86_AT(c, 0x100ac3u);
    if (x86_cc(c, 12)) { goto L_100ac6; }
    X86_TICK(c, 3);
    // 100ac5  xchg edx, eax
    X86_AT(c, 0x100ac5u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_100ac6:
    X86_TICK(c, 2);
    // 100ac6  mov esi, edx
    X86_AT(c, 0x100ac6u);
    c.r[6] = c.r[2];
L_100ac8:
    X86_TICK(c, 62);
    // 100ac8  mov ecx, esi
    X86_AT(c, 0x100ac8u);
    c.r[1] = c.r[6];
    // 100aca  mov eax, dword ptr [ebx]
    X86_AT(c, 0x100acau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 100acc  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x100accu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 100acf  add edx, dword ptr [ebp - 4]
    X86_AT(c, 0x100acfu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 100ad2  push esi
    X86_AT(c, 0x100ad2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 100ad3  push edi
    X86_AT(c, 0x100ad3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 100ad4  mov esi, eax
    X86_AT(c, 0x100ad4u);
    c.r[6] = c.r[0];
    // 100ad6  mov edi, edx
    X86_AT(c, 0x100ad6u);
    c.r[7] = c.r[2];
    // 100ad8  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x100ad8u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 100ada  pop edi
    X86_AT(c, 0x100adau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 100adb  pop esi
    X86_AT(c, 0x100adbu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 100adc  add dword ptr [ebp - 4], esi
    X86_AT(c, 0x100adcu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 100adf  sub dword ptr [ebx + 4], esi
    X86_AT(c, 0x100adfu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[6], 0, 4)); }
    // 100ae2  sub edi, esi
    X86_AT(c, 0x100ae2u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[6], 0, 4); }
    // 100ae4  add dword ptr [ebx], esi
    X86_AT(c, 0x100ae4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
L_100ae6:
    X86_TICK(c, 7);
    // 100ae6  and edi, edi
    X86_AT(c, 0x100ae6u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 100ae8  ja 0x100821
    X86_AT(c, 0x100ae8u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x100821u); goto L_100821; }
L_100aee:
    X86_TICK(c, 12);
    // 100aee  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0x100aeeu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 100af2  jne 0x100af8
    X86_AT(c, 0x100af2u);
    if (x86_cc(c, 5)) { goto L_100af8; }
    X86_TICK(c, 7);
    // 100af4  or byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0x100af4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x10u, 1)); }
L_100af8:
    X86_TICK(c, 13);
    // 100af8  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x100af8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 100afb  mov dword ptr [0xdfc40], eax
    X86_AT(c, 0x100afbu);
    wr32((c.sbase[3] + (uint32_t)(0xDFC40u)), c.r[0]);
    // 100b00  jmp 0x100c30
    X86_AT(c, 0x100b00u);
    goto L_100c30;
L_100b05:
    X86_TICK(c, 14);
    // 100b05  mov dword ptr [0xdfc40], 0
    X86_AT(c, 0x100b05u);
    wr32((c.sbase[3] + (uint32_t)(0xDFC40u)), 0x0u);
    // 100b0f  test byte ptr [ebx + 0xc], 0x40
    X86_AT(c, 0x100b0fu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x40u, 1);
    // 100b13  je 0x100c1b
    X86_AT(c, 0x100b13u);
    if (x86_cc(c, 4)) { goto L_100c1b; }
    X86_TICK(c, 12);
    // 100b19  test byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x100b19u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x4u, 1);
    // 100b1d  jne 0x100c1f
    X86_AT(c, 0x100b1du);
    if (x86_cc(c, 5)) { goto L_100c1f; }
    X86_TICK(c, 7);
    // 100b23  jmp 0x100bed
    X86_AT(c, 0x100b23u);
    goto L_100bed;
L_100b28:
    X86_TICK(c, 19);
    // 100b28  push 1
    X86_AT(c, 0x100b28u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 100b2a  lea eax, [ebp - 0xf]
    X86_AT(c, 0x100b2au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF1u);
    // 100b2d  push eax
    X86_AT(c, 0x100b2du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 100b2e  mov dl, byte ptr [ebx + 0xe]
    X86_AT(c, 0x100b2eu);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 100b31  push edx
    X86_AT(c, 0x100b31u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 100b32  call 0x103a58
    X86_AT(c, 0x100b32u);
    push32(c, 0x100b37u); f_00103a58(c); X86_RET(c, 0x100b37u);
    X86_TICK(c, 10);
    // 100b37  xchg esi, eax
    X86_AT(c, 0x100b37u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 100b38  and esi, esi
    X86_AT(c, 0x100b38u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 100b3a  je 0x100b92
    X86_AT(c, 0x100b3au);
    if (x86_cc(c, 4)) { goto L_100b92; }
    X86_TICK(c, 12);
    // 100b3c  cmp byte ptr [ebp - 0xf], 0x1a
    X86_AT(c, 0x100b3cu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u))), 0x1Au, 0, 1);
    // 100b40  je 0x100b92
    X86_AT(c, 0x100b40u);
    if (x86_cc(c, 4)) { goto L_100b92; }
L_100b42:
    X86_TICK(c, 15);
    // 100b42  mov al, byte ptr [ebp - 0xf]
    X86_AT(c, 0x100b42u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u))));
    // 100b45  cmp al, byte ptr [0xdfc2a]
    X86_AT(c, 0x100b45u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(0xDFC2Au))), 0, 1);
    // 100b4b  jne 0x100bdc
    X86_AT(c, 0x100b4bu);
    if (x86_cc(c, 5)) { goto L_100bdc; }
    X86_TICK(c, 13);
    // 100b51  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x100b51u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 100b54  push eax
    X86_AT(c, 0x100b54u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 100b55  call 0x103ae8
    X86_AT(c, 0x100b55u);
    push32(c, 0x100b5au); f_00103ae8(c); X86_RET(c, 0x100b5au);
    X86_TICK(c, 7);
    // 100b5a  dec al
    X86_AT(c, 0x100b5au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 100b5c  je 0x100ba6
    X86_AT(c, 0x100b5cu);
    if (x86_cc(c, 4)) { goto L_100ba6; }
    X86_TICK(c, 19);
    // 100b5e  push 1
    X86_AT(c, 0x100b5eu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 100b60  lea eax, [ebp - 0xf]
    X86_AT(c, 0x100b60u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF1u);
    // 100b63  push eax
    X86_AT(c, 0x100b63u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 100b64  mov dl, byte ptr [ebx + 0xe]
    X86_AT(c, 0x100b64u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 100b67  push edx
    X86_AT(c, 0x100b67u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 100b68  call 0x103a58
    X86_AT(c, 0x100b68u);
    push32(c, 0x100b6du); f_00103a58(c); X86_RET(c, 0x100b6du);
    X86_TICK(c, 10);
    // 100b6d  xchg esi, eax
    X86_AT(c, 0x100b6du);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 100b6e  and esi, esi
    X86_AT(c, 0x100b6eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 100b70  je 0x100b78
    X86_AT(c, 0x100b70u);
    if (x86_cc(c, 4)) { goto L_100b78; }
    X86_TICK(c, 12);
    // 100b72  cmp byte ptr [ebp - 0xf], 0x1a
    X86_AT(c, 0x100b72u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u))), 0x1Au, 0, 1);
    // 100b76  jne 0x100b9b
    X86_AT(c, 0x100b76u);
    if (x86_cc(c, 5)) { goto L_100b9b; }
L_100b78:
    X86_TICK(c, 28);
    // 100b78  mov al, byte ptr [0xdfc2a]
    X86_AT(c, 0x100b78u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xDFC2Au))));
    // 100b7d  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x100b7du);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 100b80  mov byte ptr [edx], al
    X86_AT(c, 0x100b80u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 100b82  inc dword ptr [0xdfc40]
    X86_AT(c, 0x100b82u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDFC40u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 100b88  cmp byte ptr [ebp - 0xf], 0x1a
    X86_AT(c, 0x100b88u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u))), 0x1Au, 0, 1);
    // 100b8c  jne 0x100c1f
    X86_AT(c, 0x100b8cu);
    if (x86_cc(c, 5)) { goto L_100c1f; }
L_100b92:
    X86_TICK(c, 14);
    // 100b92  or byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x100b92u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x4u, 1)); }
    // 100b96  jmp 0x100c1f
    X86_AT(c, 0x100b96u);
    goto L_100c1f;
L_100b9b:
    X86_TICK(c, 15);
    // 100b9b  mov al, byte ptr [ebp - 0xf]
    X86_AT(c, 0x100b9bu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u))));
    // 100b9e  cmp al, byte ptr [0xdfc2b]
    X86_AT(c, 0x100b9eu);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(0xDFC2Bu))), 0, 1);
    // 100ba4  jne 0x100bae
    X86_AT(c, 0x100ba4u);
    if (x86_cc(c, 5)) { goto L_100bae; }
L_100ba6:
    X86_TICK(c, 13);
    // 100ba6  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x100ba6u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 100ba9  mov byte ptr [eax], 0xa
    X86_AT(c, 0x100ba9u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), 0xAu);
    // 100bac  jmp 0x100be4
    X86_AT(c, 0x100bacu);
    goto L_100be4;
L_100bae:
    X86_TICK(c, 33);
    // 100bae  mov al, byte ptr [0xdfc2a]
    X86_AT(c, 0x100baeu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xDFC2Au))));
    // 100bb3  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x100bb3u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 100bb6  mov byte ptr [edx], al
    X86_AT(c, 0x100bb6u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 100bb8  inc dword ptr [0xdfc40]
    X86_AT(c, 0x100bb8u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDFC40u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 100bbe  inc dword ptr [ebp + 0xc]
    X86_AT(c, 0x100bbeu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 100bc1  cmp edi, dword ptr [0xdfc40]
    X86_AT(c, 0x100bc1u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0xDFC40u))), 0, 4);
    // 100bc7  jne 0x100b42
    X86_AT(c, 0x100bc7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x100b42u); goto L_100b42; }
    X86_TICK(c, 17);
    // 100bcd  push 1
    X86_AT(c, 0x100bcdu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 100bcf  push 0xffffffff
    X86_AT(c, 0x100bcfu);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 100bd1  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x100bd1u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 100bd4  push eax
    X86_AT(c, 0x100bd4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 100bd5  call 0x103b30
    X86_AT(c, 0x100bd5u);
    push32(c, 0x100bdau); f_00103b30(c); X86_RET(c, 0x100bdau);
    X86_TICK(c, 7);
    // 100bda  jmp 0x100c1f
    X86_AT(c, 0x100bdau);
    goto L_100c1f;
L_100bdc:
    X86_TICK(c, 10);
    // 100bdc  mov al, byte ptr [ebp - 0xf]
    X86_AT(c, 0x100bdcu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u))));
    // 100bdf  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x100bdfu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 100be2  mov byte ptr [edx], al
    X86_AT(c, 0x100be2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
L_100be4:
    X86_TICK(c, 12);
    // 100be4  inc dword ptr [0xdfc40]
    X86_AT(c, 0x100be4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDFC40u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 100bea  inc dword ptr [ebp + 0xc]
    X86_AT(c, 0x100beau);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_100bed:
    X86_TICK(c, 11);
    // 100bed  cmp edi, dword ptr [0xdfc40]
    X86_AT(c, 0x100bedu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0xDFC40u))), 0, 4);
    // 100bf3  jbe 0x100c1f
    X86_AT(c, 0x100bf3u);
    if (x86_cc(c, 6)) { goto L_100c1f; }
    X86_TICK(c, 7);
    // 100bf5  jmp 0x100b28
    X86_AT(c, 0x100bf5u);
    X86_POLL(c, 0x100b28u); goto L_100b28;
L_100bfa:
    X86_TICK(c, 27);
    // 100bfa  push edi
    X86_AT(c, 0x100bfau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 100bfb  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x100bfbu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 100bfe  add eax, dword ptr [0xdfc40]
    X86_AT(c, 0x100bfeu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xDFC40u))), 0, 4); }
    // 100c04  push eax
    X86_AT(c, 0x100c04u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 100c05  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x100c05u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 100c08  push eax
    X86_AT(c, 0x100c08u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 100c09  call 0x103a58
    X86_AT(c, 0x100c09u);
    push32(c, 0x100c0eu); f_00103a58(c); X86_RET(c, 0x100c0eu);
    X86_TICK(c, 10);
    // 100c0e  xchg esi, eax
    X86_AT(c, 0x100c0eu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 100c0f  and esi, esi
    X86_AT(c, 0x100c0fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 100c11  je 0x100c1f
    X86_AT(c, 0x100c11u);
    if (x86_cc(c, 4)) { goto L_100c1f; }
    X86_TICK(c, 9);
    // 100c13  add dword ptr [0xdfc40], esi
    X86_AT(c, 0x100c13u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDFC40u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 100c19  sub edi, esi
    X86_AT(c, 0x100c19u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[6], 0, 4); }
L_100c1b:
    X86_TICK(c, 7);
    // 100c1b  and edi, edi
    X86_AT(c, 0x100c1bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 100c1d  ja 0x100bfa
    X86_AT(c, 0x100c1du);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x100bfau); goto L_100bfa; }
L_100c1f:
    X86_TICK(c, 12);
    // 100c1f  cmp dword ptr [0xdfc40], 0
    X86_AT(c, 0x100c1fu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xDFC40u))), 0x0u, 0, 4);
    // 100c26  jne 0x100c30
    X86_AT(c, 0x100c26u);
    if (x86_cc(c, 5)) { goto L_100c30; }
    X86_TICK(c, 7);
    // 100c28  and edi, edi
    X86_AT(c, 0x100c28u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 100c2a  jbe 0x100c30
    X86_AT(c, 0x100c2au);
    if (x86_cc(c, 6)) { goto L_100c30; }
    X86_TICK(c, 7);
    // 100c2c  or byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0x100c2cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x10u, 1)); }
L_100c30:
    X86_TICK(c, 12);
    // 100c30  cmp word ptr [0xe00b6], 0
    X86_AT(c, 0x100c30u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xE00B6u))), 0x0u, 0, 2);
    // 100c38  je 0x100c40
    X86_AT(c, 0x100c38u);
    if (x86_cc(c, 4)) { goto L_100c40; }
    X86_TICK(c, 14);
    // 100c3a  or byte ptr [ebx + 0xc], 0x20
    X86_AT(c, 0x100c3au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
    // 100c3e  jmp 0x100c4a
    X86_AT(c, 0x100c3eu);
    goto L_100c4a;
L_100c40:
    X86_TICK(c, 6);
    // 100c40  mov ax, word ptr [ebp - 0xe]
    X86_AT(c, 0x100c40u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))));
    // 100c44  mov word ptr [0xe00b6], ax
    X86_AT(c, 0x100c44u);
    wr16((c.sbase[3] + (uint32_t)(0xE00B6u)), (c.r[0] & 0xFFFFu));
L_100c4a:
    X86_TICK(c, 28);
    // 100c4a  pop edi
    X86_AT(c, 0x100c4au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 100c4b  pop esi
    X86_AT(c, 0x100c4bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 100c4c  pop ebx
    X86_AT(c, 0x100c4cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 100c4d  leave 
    X86_AT(c, 0x100c4du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 100c4e  ret 0xc
    X86_AT(c, 0x100c4eu);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x1007f0u, "ran off the end of a function");
}
void f_00100ac8(X86Cpu& c) {
    goto L_100ac8;
L_100821:
    X86_TICK(c, 12);
    // 100821  test byte ptr [ebx + 0xc], 0x40
    X86_AT(c, 0x100821u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x40u, 1);
    // 100825  je 0x100a1e
    X86_AT(c, 0x100825u);
    if (x86_cc(c, 4)) { goto L_100a1e; }
    X86_TICK(c, 12);
    // 10082b  cmp dword ptr [ebx + 4], 1
    X86_AT(c, 0x10082bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x1u, 0, 4);
    // 10082f  jne 0x100876
    X86_AT(c, 0x10082fu);
    if (x86_cc(c, 5)) { goto L_100876; }
    X86_TICK(c, 12);
    // 100831  cmp word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0x100831u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0xFFFEu, 0, 2);
    // 100836  jne 0x100876
    X86_AT(c, 0x100836u);
    if (x86_cc(c, 5)) { goto L_100876; }
    X86_TICK(c, 12);
    // 100838  test byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x100838u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x4u, 1);
    // 10083c  jne 0x100abc
    X86_AT(c, 0x10083cu);
    if (x86_cc(c, 5)) { goto L_100abc; }
    X86_TICK(c, 33);
    // 100842  mov al, byte ptr [0xdfc2a]
    X86_AT(c, 0x100842u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xDFC2Au))));
    // 100847  mov edx, dword ptr [ebx + 8]
    X86_AT(c, 0x100847u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 10084a  mov byte ptr [edx], al
    X86_AT(c, 0x10084au);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 10084c  push 0x1ff
    X86_AT(c, 0x10084cu);
    { uint32_t v = 0x1FFu; push32(c, v); }
    // 100851  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x100851u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 100854  inc eax
    X86_AT(c, 0x100854u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 100855  push eax
    X86_AT(c, 0x100855u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 100856  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x100856u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 100859  push eax
    X86_AT(c, 0x100859u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 10085a  call 0x103a58
    X86_AT(c, 0x10085au);
    push32(c, 0x10085fu); f_00103a58(c); X86_RET(c, 0x10085fu);
    X86_TICK(c, 11);
    // 10085f  inc eax
    X86_AT(c, 0x10085fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 100860  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x100860u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
    // 100863  dec eax
    X86_AT(c, 0x100863u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 100864  jne 0x1008ae
    X86_AT(c, 0x100864u);
    if (x86_cc(c, 5)) { goto L_1008ae; }
    X86_TICK(c, 15);
    // 100866  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x100866u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 100869  mov dword ptr [ebx], eax
    X86_AT(c, 0x100869u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 10086b  mov word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0x10086bu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0x200u);
    // 100871  jmp 0x100abc
    X86_AT(c, 0x100871u);
    goto L_100abc;
L_100876:
    X86_TICK(c, 12);
    // 100876  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x100876u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 10087a  jne 0x1008f3
    X86_AT(c, 0x10087au);
    if (x86_cc(c, 5)) { goto L_1008f3; }
    X86_TICK(c, 12);
    // 100880  test byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0x100880u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x10u, 1);
    // 100884  jne 0x100aee
    X86_AT(c, 0x100884u);
    if (x86_cc(c, 5)) { goto L_100aee; }
    X86_TICK(c, 12);
    // 10088a  test byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x10088au);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x4u, 1);
    // 10088e  jne 0x1008a4
    X86_AT(c, 0x10088eu);
    if (x86_cc(c, 5)) { goto L_1008a4; }
    X86_TICK(c, 20);
    // 100890  push 0x200
    X86_AT(c, 0x100890u);
    { uint32_t v = 0x200u; push32(c, v); }
    // 100895  push dword ptr [ebx + 8]
    X86_AT(c, 0x100895u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 100898  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x100898u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 10089b  push eax
    X86_AT(c, 0x10089bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 10089c  call 0x103a58
    X86_AT(c, 0x10089cu);
    push32(c, 0x1008a1u); f_00103a58(c); X86_RET(c, 0x1008a1u);
    X86_TICK(c, 2);
    // 1008a1  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x1008a1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
L_1008a4:
    X86_TICK(c, 12);
    // 1008a4  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x1008a4u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 1008a8  je 0x100aee
    X86_AT(c, 0x1008a8u);
    if (x86_cc(c, 4)) { goto L_100aee; }
L_1008ae:
    X86_TICK(c, 28);
    // 1008ae  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x1008aeu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 1008b1  mov al, 0x1a
    X86_AT(c, 0x1008b1u);
    s8(c, 0, 0x1Au);
    // 1008b3  mov ecx, dword ptr [ebx + 8]
    X86_AT(c, 0x1008b3u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 1008b6  push edi
    X86_AT(c, 0x1008b6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1008b7  mov edi, ecx
    X86_AT(c, 0x1008b7u);
    c.r[7] = c.r[1];
    // 1008b9  mov ecx, edx
    X86_AT(c, 0x1008b9u);
    c.r[1] = c.r[2];
    // 1008bb  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x1008bbu);
    x86_string(c, 4, 1, 242, 4, 3);
    // 1008bd  jne 0x1008c2
    X86_AT(c, 0x1008bdu);
    if (x86_cc(c, 5)) { goto L_1008c2; }
    X86_TICK(c, 4);
    // 1008bf  inc ecx
    X86_AT(c, 0x1008bfu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 1008c0  sub edx, ecx
    X86_AT(c, 0x1008c0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_1008c2:
    X86_TICK(c, 17);
    // 1008c2  pop edi
    X86_AT(c, 0x1008c2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 1008c3  mov word ptr [ebp - 0x10], dx
    X86_AT(c, 0x1008c3u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), (c.r[2] & 0xFFFFu));
    // 1008c7  cmp edx, dword ptr [ebx + 4]
    X86_AT(c, 0x1008c7u);
    (void)x86_sub(c, c.r[2], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 1008ca  je 0x1008e8
    X86_AT(c, 0x1008cau);
    if (x86_cc(c, 4)) { goto L_1008e8; }
    X86_TICK(c, 32);
    // 1008cc  or byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x1008ccu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x4u, 1)); }
    // 1008d0  push 1
    X86_AT(c, 0x1008d0u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 1008d2  mov dword ptr [ebp - 0x14], edx
    X86_AT(c, 0x1008d2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[2]);
    // 1008d5  sub edx, dword ptr [ebx + 4]
    X86_AT(c, 0x1008d5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4); }
    // 1008d8  push edx
    X86_AT(c, 0x1008d8u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 1008d9  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x1008d9u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 1008dc  push eax
    X86_AT(c, 0x1008dcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 1008dd  call 0x103b30
    X86_AT(c, 0x1008ddu);
    push32(c, 0x1008e2u); f_00103b30(c); X86_RET(c, 0x1008e2u);
    X86_TICK(c, 6);
    // 1008e2  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0x1008e2u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 1008e5  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x1008e5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
L_1008e8:
    X86_TICK(c, 8);
    // 1008e8  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x1008e8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 1008eb  mov dword ptr [ebx], eax
    X86_AT(c, 0x1008ebu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 1008ed  mov word ptr [ebx + 0x10], 0xffff
    X86_AT(c, 0x1008edu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFFu);
L_1008f3:
    X86_TICK(c, 12);
    // 1008f3  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x1008f3u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 1008f7  jle 0x100ae6
    X86_AT(c, 0x1008f7u);
    if (x86_cc(c, 14)) { goto L_100ae6; }
    X86_TICK(c, 11);
    // 1008fd  mov ax, word ptr [ebx + 0x10]
    X86_AT(c, 0x1008fdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))));
    // 100901  cmp ax, 0xffff
    X86_AT(c, 0x100901u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0xFFFFu, 0, 2);
    // 100905  je 0x100915
    X86_AT(c, 0x100905u);
    if (x86_cc(c, 4)) { goto L_100915; }
    X86_TICK(c, 20);
    // 100907  movsx eax, ax
    X86_AT(c, 0x100907u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 10090a  add eax, dword ptr [ebx + 8]
    X86_AT(c, 0x10090au);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 10090d  cmp eax, dword ptr [ebx]
    X86_AT(c, 0x10090du);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4);
    // 10090f  jge 0x1009ac
    X86_AT(c, 0x10090fu);
    if (x86_cc(c, 13)) { goto L_1009ac; }
L_100915:
    X86_TICK(c, 30);
    // 100915  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x100915u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 100918  mov al, byte ptr [0xdfc2a]
    X86_AT(c, 0x100918u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xDFC2Au))));
    // 10091d  mov ecx, dword ptr [ebx]
    X86_AT(c, 0x10091du);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 10091f  push edi
    X86_AT(c, 0x10091fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 100920  mov edi, ecx
    X86_AT(c, 0x100920u);
    c.r[7] = c.r[1];
    // 100922  mov ecx, edx
    X86_AT(c, 0x100922u);
    c.r[1] = c.r[2];
    // 100924  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x100924u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 100926  jne 0x10092b
    X86_AT(c, 0x100926u);
    if (x86_cc(c, 5)) { goto L_10092b; }
    X86_TICK(c, 4);
    // 100928  inc ecx
    X86_AT(c, 0x100928u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 100929  sub edx, ecx
    X86_AT(c, 0x100929u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_10092b:
    X86_TICK(c, 13);
    // 10092b  pop edi
    X86_AT(c, 0x10092bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 10092c  mov word ptr [ebx + 0x10], dx
    X86_AT(c, 0x10092cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), (c.r[2] & 0xFFFFu));
    // 100930  jmp 0x100965
    X86_AT(c, 0x100930u);
    goto L_100965;
L_100932:
    X86_TICK(c, 59);
    // 100932  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x100932u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 100936  add eax, dword ptr [ebx]
    X86_AT(c, 0x100936u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4); }
    // 100938  inc eax
    X86_AT(c, 0x100938u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 100939  mov dx, word ptr [ebx + 0x10]
    X86_AT(c, 0x100939u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))));
    // 10093d  inc edx
    X86_AT(c, 0x10093du);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 10093e  movsx edx, dx
    X86_AT(c, 0x10093eu);
    c.r[2] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 100941  mov ecx, dword ptr [ebx + 4]
    X86_AT(c, 0x100941u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 100944  sub ecx, edx
    X86_AT(c, 0x100944u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 100946  mov edx, ecx
    X86_AT(c, 0x100946u);
    c.r[2] = c.r[1];
    // 100948  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0x100948u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 10094b  mov al, byte ptr [0xdfc2a]
    X86_AT(c, 0x10094bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xDFC2Au))));
    // 100950  mov ecx, dword ptr [ebp - 0x14]
    X86_AT(c, 0x100950u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 100953  push edi
    X86_AT(c, 0x100953u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 100954  mov edi, ecx
    X86_AT(c, 0x100954u);
    c.r[7] = c.r[1];
    // 100956  mov ecx, edx
    X86_AT(c, 0x100956u);
    c.r[1] = c.r[2];
    // 100958  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x100958u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 10095a  jne 0x10095f
    X86_AT(c, 0x10095au);
    if (x86_cc(c, 5)) { goto L_10095f; }
    X86_TICK(c, 4);
    // 10095c  inc ecx
    X86_AT(c, 0x10095cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 10095d  sub edx, ecx
    X86_AT(c, 0x10095du);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_10095f:
    X86_TICK(c, 13);
    // 10095f  pop edi
    X86_AT(c, 0x10095fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 100960  inc edx
    X86_AT(c, 0x100960u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 100961  add word ptr [ebx + 0x10], dx
    X86_AT(c, 0x100961u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
L_100965:
    X86_TICK(c, 19);
    // 100965  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x100965u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 100969  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x100969u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 10096c  dec edx
    X86_AT(c, 0x10096cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 10096d  cmp edx, eax
    X86_AT(c, 0x10096du);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 10096f  jle 0x10097e
    X86_AT(c, 0x10096fu);
    if (x86_cc(c, 14)) { goto L_10097e; }
    X86_TICK(c, 23);
    // 100971  add eax, dword ptr [ebx]
    X86_AT(c, 0x100971u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4); }
    // 100973  inc eax
    X86_AT(c, 0x100973u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 100974  mov al, byte ptr [eax]
    X86_AT(c, 0x100974u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 100976  cmp al, byte ptr [0xdfc2b]
    X86_AT(c, 0x100976u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(0xDFC2Bu))), 0, 1);
    // 10097c  jne 0x100932
    X86_AT(c, 0x10097cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x100932u); goto L_100932; }
L_10097e:
    X86_TICK(c, 17);
    // 10097e  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x10097eu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 100982  cmp eax, dword ptr [ebx + 4]
    X86_AT(c, 0x100982u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 100985  jne 0x10098f
    X86_AT(c, 0x100985u);
    if (x86_cc(c, 5)) { goto L_10098f; }
    X86_TICK(c, 9);
    // 100987  mov word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0x100987u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0x200u);
    // 10098d  jmp 0x1009ac
    X86_AT(c, 0x10098du);
    goto L_1009ac;
L_10098f:
    X86_TICK(c, 19);
    // 10098f  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x10098fu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 100993  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x100993u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 100996  dec edx
    X86_AT(c, 0x100996u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 100997  cmp edx, eax
    X86_AT(c, 0x100997u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 100999  jne 0x1009a3
    X86_AT(c, 0x100999u);
    if (x86_cc(c, 5)) { goto L_1009a3; }
    X86_TICK(c, 9);
    // 10099b  mov word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0x10099bu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFEu);
    // 1009a1  jmp 0x1009ac
    X86_AT(c, 0x1009a1u);
    goto L_1009ac;
L_1009a3:
    X86_TICK(c, 17);
    // 1009a3  mov eax, dword ptr [ebx]
    X86_AT(c, 0x1009a3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 1009a5  sub eax, dword ptr [ebx + 8]
    X86_AT(c, 0x1009a5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 1009a8  add word ptr [ebx + 0x10], ax
    X86_AT(c, 0x1009a8u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_1009ac:
    X86_TICK(c, 12);
    // 1009ac  cmp word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0x1009acu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0x200u, 0, 2);
    // 1009b2  je 0x100abc
    X86_AT(c, 0x1009b2u);
    if (x86_cc(c, 4)) { goto L_100abc; }
    X86_TICK(c, 12);
    // 1009b8  cmp word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0x1009b8u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0xFFFEu, 0, 2);
    // 1009bd  jne 0x1009cd
    X86_AT(c, 0x1009bdu);
    if (x86_cc(c, 5)) { goto L_1009cd; }
    X86_TICK(c, 11);
    // 1009bf  cmp edi, dword ptr [ebx + 4]
    X86_AT(c, 0x1009bfu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 1009c2  jl 0x100a17
    X86_AT(c, 0x1009c2u);
    if (x86_cc(c, 12)) { goto L_100a17; }
    X86_TICK(c, 13);
    // 1009c4  mov esi, dword ptr [ebx + 4]
    X86_AT(c, 0x1009c4u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 1009c7  dec esi
    X86_AT(c, 0x1009c7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 1009c8  jmp 0x100ac8
    X86_AT(c, 0x1009c8u);
    goto L_100ac8;
L_1009cd:
    X86_TICK(c, 25);
    // 1009cd  mov eax, dword ptr [ebx]
    X86_AT(c, 0x1009cdu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 1009cf  sub eax, dword ptr [ebx + 8]
    X86_AT(c, 0x1009cfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 1009d2  movsx esi, word ptr [ebx + 0x10]
    X86_AT(c, 0x1009d2u);
    c.r[6] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 1009d6  sub esi, eax
    X86_AT(c, 0x1009d6u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[0], 0, 4); }
    // 1009d8  cmp edi, esi
    X86_AT(c, 0x1009d8u);
    (void)x86_sub(c, c.r[7], c.r[6], 0, 4);
    // 1009da  jbe 0x100a17
    X86_AT(c, 0x1009dau);
    if (x86_cc(c, 6)) { goto L_100a17; }
    X86_TICK(c, 87);
    // 1009dc  mov ecx, esi
    X86_AT(c, 0x1009dcu);
    c.r[1] = c.r[6];
    // 1009de  mov eax, dword ptr [ebx]
    X86_AT(c, 0x1009deu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 1009e0  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x1009e0u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 1009e3  mov dword ptr [ebp - 0x14], edi
    X86_AT(c, 0x1009e3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[7]);
    // 1009e6  mov edi, dword ptr [ebp - 4]
    X86_AT(c, 0x1009e6u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 1009e9  lea edx, [edx + edi*1]
    X86_AT(c, 0x1009e9u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[7]);
    // 1009ec  push esi
    X86_AT(c, 0x1009ecu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 1009ed  push edi
    X86_AT(c, 0x1009edu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1009ee  mov esi, eax
    X86_AT(c, 0x1009eeu);
    c.r[6] = c.r[0];
    // 1009f0  mov edi, edx
    X86_AT(c, 0x1009f0u);
    c.r[7] = c.r[2];
    // 1009f2  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x1009f2u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 1009f4  pop edi
    X86_AT(c, 0x1009f4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 1009f5  pop esi
    X86_AT(c, 0x1009f5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 1009f6  add edi, esi
    X86_AT(c, 0x1009f6u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[6], 0, 4); }
    // 1009f8  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x1009f8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 1009fb  mov byte ptr [eax + edi*1], 0xa
    X86_AT(c, 0x1009fbu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7])), 0xAu);
    // 1009ff  lea eax, [esi + 1]
    X86_AT(c, 0x1009ffu);
    c.r[0] = (uint32_t)(c.r[6] + 0x1u);
    // 100a02  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x100a02u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 100a05  mov edi, dword ptr [ebp - 0x14]
    X86_AT(c, 0x100a05u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 100a08  sub edi, eax
    X86_AT(c, 0x100a08u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[0], 0, 4); }
    // 100a0a  lea eax, [esi + 2]
    X86_AT(c, 0x100a0au);
    c.r[0] = (uint32_t)(c.r[6] + 0x2u);
    // 100a0d  sub dword ptr [ebx + 4], eax
    X86_AT(c, 0x100a0du);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 100a10  add dword ptr [ebx], eax
    X86_AT(c, 0x100a10u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 100a12  jmp 0x100ae6
    X86_AT(c, 0x100a12u);
    goto L_100ae6;
L_100a17:
    X86_TICK(c, 9);
    // 100a17  mov esi, edi
    X86_AT(c, 0x100a17u);
    c.r[6] = c.r[7];
    // 100a19  jmp 0x100ac8
    X86_AT(c, 0x100a19u);
    goto L_100ac8;
L_100a1e:
    X86_TICK(c, 13);
    // 100a1e  mov word ptr [ebx + 0x10], 0xffff
    X86_AT(c, 0x100a1eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFFu);
    // 100a24  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x100a24u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 100a27  cmp edi, eax
    X86_AT(c, 0x100a27u);
    (void)x86_sub(c, c.r[7], c.r[0], 0, 4);
    // 100a29  jl 0x100a4f
    X86_AT(c, 0x100a29u);
    if (x86_cc(c, 12)) { goto L_100a4f; }
    X86_TICK(c, 7);
    // 100a2b  and eax, eax
    X86_AT(c, 0x100a2bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 100a2d  jle 0x100a4f
    X86_AT(c, 0x100a2du);
    if (x86_cc(c, 14)) { goto L_100a4f; }
    X86_TICK(c, 53);
    // 100a2f  xchg ecx, eax
    X86_AT(c, 0x100a2fu);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
    // 100a30  mov eax, dword ptr [ebx]
    X86_AT(c, 0x100a30u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 100a32  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x100a32u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 100a35  push esi
    X86_AT(c, 0x100a35u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 100a36  push edi
    X86_AT(c, 0x100a36u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 100a37  mov esi, eax
    X86_AT(c, 0x100a37u);
    c.r[6] = c.r[0];
    // 100a39  mov edi, edx
    X86_AT(c, 0x100a39u);
    c.r[7] = c.r[2];
    // 100a3b  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x100a3bu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 100a3d  pop edi
    X86_AT(c, 0x100a3du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 100a3e  pop esi
    X86_AT(c, 0x100a3eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 100a3f  sub edi, dword ptr [ebx + 4]
    X86_AT(c, 0x100a3fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4); }
    // 100a42  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x100a42u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 100a45  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x100a45u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 100a48  mov dword ptr [ebx + 4], 0
    X86_AT(c, 0x100a48u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0x0u);
L_100a4f:
    X86_TICK(c, 7);
    // 100a4f  cmp edi, 0x200
    X86_AT(c, 0x100a4fu);
    (void)x86_sub(c, c.r[7], 0x200u, 0, 4);
    // 100a55  jb 0x100a8d
    X86_AT(c, 0x100a55u);
    if (x86_cc(c, 2)) { goto L_100a8d; }
    X86_TICK(c, 10);
    // 100a57  mov esi, edi
    X86_AT(c, 0x100a57u);
    c.r[6] = c.r[7];
    // 100a59  shr esi, 9
    X86_AT(c, 0x100a59u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 5, v, 0x9u, 4, w); if (w) c.r[6] = r; }
    // 100a5c  shl esi, 9
    X86_AT(c, 0x100a5cu);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[6] = r; }
    // 100a5f  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0x100a5fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
L_100a66:
    X86_TICK(c, 27);
    // 100a66  push esi
    X86_AT(c, 0x100a66u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 100a67  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x100a67u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 100a6a  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0x100a6au);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 100a6d  push eax
    X86_AT(c, 0x100a6du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 100a6e  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x100a6eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 100a71  push eax
    X86_AT(c, 0x100a71u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 100a72  call 0x103a58
    X86_AT(c, 0x100a72u);
    push32(c, 0x100a77u); f_00103a58(c); X86_RET(c, 0x100a77u);
    X86_TICK(c, 25);
    // 100a77  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x100a77u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 100a7a  add dword ptr [ebp - 0xc], eax
    X86_AT(c, 0x100a7au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 100a7d  sub esi, eax
    X86_AT(c, 0x100a7du);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[0], 0, 4); }
    // 100a7f  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x100a7fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 100a82  and esi, esi
    X86_AT(c, 0x100a82u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 100a84  je 0x100a8a
    X86_AT(c, 0x100a84u);
    if (x86_cc(c, 4)) { goto L_100a8a; }
    X86_TICK(c, 7);
    // 100a86  and eax, eax
    X86_AT(c, 0x100a86u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 100a88  jne 0x100a66
    X86_AT(c, 0x100a88u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x100a66u); goto L_100a66; }
L_100a8a:
    X86_TICK(c, 6);
    // 100a8a  sub edi, dword ptr [ebp - 0xc]
    X86_AT(c, 0x100a8au);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 4); }
L_100a8d:
    X86_TICK(c, 7);
    // 100a8d  and edi, edi
    X86_AT(c, 0x100a8du);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 100a8f  jbe 0x100ae6
    X86_AT(c, 0x100a8fu);
    if (x86_cc(c, 6)) { goto L_100ae6; }
    X86_TICK(c, 12);
    // 100a91  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x100a91u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 100a95  jne 0x100ab6
    X86_AT(c, 0x100a95u);
    if (x86_cc(c, 5)) { goto L_100ab6; }
    X86_TICK(c, 12);
    // 100a97  test byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0x100a97u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x10u, 1);
    // 100a9b  jne 0x100aee
    X86_AT(c, 0x100a9bu);
    if (x86_cc(c, 5)) { goto L_100aee; }
    X86_TICK(c, 20);
    // 100a9d  push 0x200
    X86_AT(c, 0x100a9du);
    { uint32_t v = 0x200u; push32(c, v); }
    // 100aa2  push dword ptr [ebx + 8]
    X86_AT(c, 0x100aa2u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 100aa5  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x100aa5u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 100aa8  push eax
    X86_AT(c, 0x100aa8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 100aa9  call 0x103a58
    X86_AT(c, 0x100aa9u);
    push32(c, 0x100aaeu); f_00103a58(c); X86_RET(c, 0x100aaeu);
    X86_TICK(c, 8);
    // 100aae  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x100aaeu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
    // 100ab1  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x100ab1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 100ab4  mov dword ptr [ebx], eax
    X86_AT(c, 0x100ab4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
L_100ab6:
    X86_TICK(c, 12);
    // 100ab6  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x100ab6u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 100aba  jle 0x100aee
    X86_AT(c, 0x100abau);
    if (x86_cc(c, 14)) { goto L_100aee; }
L_100abc:
    X86_TICK(c, 13);
    // 100abc  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x100abcu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 100abf  mov edx, edi
    X86_AT(c, 0x100abfu);
    c.r[2] = c.r[7];
    // 100ac1  cmp edx, eax
    X86_AT(c, 0x100ac1u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 100ac3  jl 0x100ac6
    X86_AT(c, 0x100ac3u);
    if (x86_cc(c, 12)) { goto L_100ac6; }
    X86_TICK(c, 3);
    // 100ac5  xchg edx, eax
    X86_AT(c, 0x100ac5u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_100ac6:
    X86_TICK(c, 2);
    // 100ac6  mov esi, edx
    X86_AT(c, 0x100ac6u);
    c.r[6] = c.r[2];
L_100ac8:
    X86_TICK(c, 62);
    // 100ac8  mov ecx, esi
    X86_AT(c, 0x100ac8u);
    c.r[1] = c.r[6];
    // 100aca  mov eax, dword ptr [ebx]
    X86_AT(c, 0x100acau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 100acc  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x100accu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 100acf  add edx, dword ptr [ebp - 4]
    X86_AT(c, 0x100acfu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 100ad2  push esi
    X86_AT(c, 0x100ad2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 100ad3  push edi
    X86_AT(c, 0x100ad3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 100ad4  mov esi, eax
    X86_AT(c, 0x100ad4u);
    c.r[6] = c.r[0];
    // 100ad6  mov edi, edx
    X86_AT(c, 0x100ad6u);
    c.r[7] = c.r[2];
    // 100ad8  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x100ad8u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 100ada  pop edi
    X86_AT(c, 0x100adau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 100adb  pop esi
    X86_AT(c, 0x100adbu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 100adc  add dword ptr [ebp - 4], esi
    X86_AT(c, 0x100adcu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 100adf  sub dword ptr [ebx + 4], esi
    X86_AT(c, 0x100adfu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[6], 0, 4)); }
    // 100ae2  sub edi, esi
    X86_AT(c, 0x100ae2u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[6], 0, 4); }
    // 100ae4  add dword ptr [ebx], esi
    X86_AT(c, 0x100ae4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
L_100ae6:
    X86_TICK(c, 7);
    // 100ae6  and edi, edi
    X86_AT(c, 0x100ae6u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 100ae8  ja 0x100821
    X86_AT(c, 0x100ae8u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x100821u); goto L_100821; }
L_100aee:
    X86_TICK(c, 12);
    // 100aee  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0x100aeeu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 100af2  jne 0x100af8
    X86_AT(c, 0x100af2u);
    if (x86_cc(c, 5)) { goto L_100af8; }
    X86_TICK(c, 7);
    // 100af4  or byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0x100af4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x10u, 1)); }
L_100af8:
    X86_TICK(c, 13);
    // 100af8  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x100af8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 100afb  mov dword ptr [0xdfc40], eax
    X86_AT(c, 0x100afbu);
    wr32((c.sbase[3] + (uint32_t)(0xDFC40u)), c.r[0]);
    // 100b00  jmp 0x100c30
    X86_AT(c, 0x100b00u);
    goto L_100c30;
L_100c30:
    X86_TICK(c, 12);
    // 100c30  cmp word ptr [0xe00b6], 0
    X86_AT(c, 0x100c30u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xE00B6u))), 0x0u, 0, 2);
    // 100c38  je 0x100c40
    X86_AT(c, 0x100c38u);
    if (x86_cc(c, 4)) { goto L_100c40; }
    X86_TICK(c, 14);
    // 100c3a  or byte ptr [ebx + 0xc], 0x20
    X86_AT(c, 0x100c3au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
    // 100c3e  jmp 0x100c4a
    X86_AT(c, 0x100c3eu);
    goto L_100c4a;
L_100c40:
    X86_TICK(c, 6);
    // 100c40  mov ax, word ptr [ebp - 0xe]
    X86_AT(c, 0x100c40u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))));
    // 100c44  mov word ptr [0xe00b6], ax
    X86_AT(c, 0x100c44u);
    wr16((c.sbase[3] + (uint32_t)(0xE00B6u)), (c.r[0] & 0xFFFFu));
L_100c4a:
    X86_TICK(c, 28);
    // 100c4a  pop edi
    X86_AT(c, 0x100c4au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 100c4b  pop esi
    X86_AT(c, 0x100c4bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 100c4c  pop ebx
    X86_AT(c, 0x100c4cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 100c4d  leave 
    X86_AT(c, 0x100c4du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 100c4e  ret 0xc
    X86_AT(c, 0x100c4eu);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x100ac8u, "ran off the end of a function");
}
void f_00100ae6(X86Cpu& c) {
    goto L_100ae6;
L_100821:
    X86_TICK(c, 12);
    // 100821  test byte ptr [ebx + 0xc], 0x40
    X86_AT(c, 0x100821u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x40u, 1);
    // 100825  je 0x100a1e
    X86_AT(c, 0x100825u);
    if (x86_cc(c, 4)) { goto L_100a1e; }
    X86_TICK(c, 12);
    // 10082b  cmp dword ptr [ebx + 4], 1
    X86_AT(c, 0x10082bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x1u, 0, 4);
    // 10082f  jne 0x100876
    X86_AT(c, 0x10082fu);
    if (x86_cc(c, 5)) { goto L_100876; }
    X86_TICK(c, 12);
    // 100831  cmp word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0x100831u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0xFFFEu, 0, 2);
    // 100836  jne 0x100876
    X86_AT(c, 0x100836u);
    if (x86_cc(c, 5)) { goto L_100876; }
    X86_TICK(c, 12);
    // 100838  test byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x100838u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x4u, 1);
    // 10083c  jne 0x100abc
    X86_AT(c, 0x10083cu);
    if (x86_cc(c, 5)) { goto L_100abc; }
    X86_TICK(c, 33);
    // 100842  mov al, byte ptr [0xdfc2a]
    X86_AT(c, 0x100842u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xDFC2Au))));
    // 100847  mov edx, dword ptr [ebx + 8]
    X86_AT(c, 0x100847u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 10084a  mov byte ptr [edx], al
    X86_AT(c, 0x10084au);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 10084c  push 0x1ff
    X86_AT(c, 0x10084cu);
    { uint32_t v = 0x1FFu; push32(c, v); }
    // 100851  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x100851u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 100854  inc eax
    X86_AT(c, 0x100854u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 100855  push eax
    X86_AT(c, 0x100855u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 100856  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x100856u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 100859  push eax
    X86_AT(c, 0x100859u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 10085a  call 0x103a58
    X86_AT(c, 0x10085au);
    push32(c, 0x10085fu); f_00103a58(c); X86_RET(c, 0x10085fu);
    X86_TICK(c, 11);
    // 10085f  inc eax
    X86_AT(c, 0x10085fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 100860  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x100860u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
    // 100863  dec eax
    X86_AT(c, 0x100863u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 100864  jne 0x1008ae
    X86_AT(c, 0x100864u);
    if (x86_cc(c, 5)) { goto L_1008ae; }
    X86_TICK(c, 15);
    // 100866  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x100866u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 100869  mov dword ptr [ebx], eax
    X86_AT(c, 0x100869u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 10086b  mov word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0x10086bu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0x200u);
    // 100871  jmp 0x100abc
    X86_AT(c, 0x100871u);
    goto L_100abc;
L_100876:
    X86_TICK(c, 12);
    // 100876  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x100876u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 10087a  jne 0x1008f3
    X86_AT(c, 0x10087au);
    if (x86_cc(c, 5)) { goto L_1008f3; }
    X86_TICK(c, 12);
    // 100880  test byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0x100880u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x10u, 1);
    // 100884  jne 0x100aee
    X86_AT(c, 0x100884u);
    if (x86_cc(c, 5)) { goto L_100aee; }
    X86_TICK(c, 12);
    // 10088a  test byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x10088au);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x4u, 1);
    // 10088e  jne 0x1008a4
    X86_AT(c, 0x10088eu);
    if (x86_cc(c, 5)) { goto L_1008a4; }
    X86_TICK(c, 20);
    // 100890  push 0x200
    X86_AT(c, 0x100890u);
    { uint32_t v = 0x200u; push32(c, v); }
    // 100895  push dword ptr [ebx + 8]
    X86_AT(c, 0x100895u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 100898  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x100898u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 10089b  push eax
    X86_AT(c, 0x10089bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 10089c  call 0x103a58
    X86_AT(c, 0x10089cu);
    push32(c, 0x1008a1u); f_00103a58(c); X86_RET(c, 0x1008a1u);
    X86_TICK(c, 2);
    // 1008a1  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x1008a1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
L_1008a4:
    X86_TICK(c, 12);
    // 1008a4  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x1008a4u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 1008a8  je 0x100aee
    X86_AT(c, 0x1008a8u);
    if (x86_cc(c, 4)) { goto L_100aee; }
L_1008ae:
    X86_TICK(c, 28);
    // 1008ae  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x1008aeu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 1008b1  mov al, 0x1a
    X86_AT(c, 0x1008b1u);
    s8(c, 0, 0x1Au);
    // 1008b3  mov ecx, dword ptr [ebx + 8]
    X86_AT(c, 0x1008b3u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 1008b6  push edi
    X86_AT(c, 0x1008b6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1008b7  mov edi, ecx
    X86_AT(c, 0x1008b7u);
    c.r[7] = c.r[1];
    // 1008b9  mov ecx, edx
    X86_AT(c, 0x1008b9u);
    c.r[1] = c.r[2];
    // 1008bb  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x1008bbu);
    x86_string(c, 4, 1, 242, 4, 3);
    // 1008bd  jne 0x1008c2
    X86_AT(c, 0x1008bdu);
    if (x86_cc(c, 5)) { goto L_1008c2; }
    X86_TICK(c, 4);
    // 1008bf  inc ecx
    X86_AT(c, 0x1008bfu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 1008c0  sub edx, ecx
    X86_AT(c, 0x1008c0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_1008c2:
    X86_TICK(c, 17);
    // 1008c2  pop edi
    X86_AT(c, 0x1008c2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 1008c3  mov word ptr [ebp - 0x10], dx
    X86_AT(c, 0x1008c3u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), (c.r[2] & 0xFFFFu));
    // 1008c7  cmp edx, dword ptr [ebx + 4]
    X86_AT(c, 0x1008c7u);
    (void)x86_sub(c, c.r[2], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 1008ca  je 0x1008e8
    X86_AT(c, 0x1008cau);
    if (x86_cc(c, 4)) { goto L_1008e8; }
    X86_TICK(c, 32);
    // 1008cc  or byte ptr [ebx + 0xd], 4
    X86_AT(c, 0x1008ccu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x4u, 1)); }
    // 1008d0  push 1
    X86_AT(c, 0x1008d0u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 1008d2  mov dword ptr [ebp - 0x14], edx
    X86_AT(c, 0x1008d2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[2]);
    // 1008d5  sub edx, dword ptr [ebx + 4]
    X86_AT(c, 0x1008d5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4); }
    // 1008d8  push edx
    X86_AT(c, 0x1008d8u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 1008d9  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x1008d9u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 1008dc  push eax
    X86_AT(c, 0x1008dcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 1008dd  call 0x103b30
    X86_AT(c, 0x1008ddu);
    push32(c, 0x1008e2u); f_00103b30(c); X86_RET(c, 0x1008e2u);
    X86_TICK(c, 6);
    // 1008e2  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0x1008e2u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 1008e5  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x1008e5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
L_1008e8:
    X86_TICK(c, 8);
    // 1008e8  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x1008e8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 1008eb  mov dword ptr [ebx], eax
    X86_AT(c, 0x1008ebu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 1008ed  mov word ptr [ebx + 0x10], 0xffff
    X86_AT(c, 0x1008edu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFFu);
L_1008f3:
    X86_TICK(c, 12);
    // 1008f3  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x1008f3u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 1008f7  jle 0x100ae6
    X86_AT(c, 0x1008f7u);
    if (x86_cc(c, 14)) { goto L_100ae6; }
    X86_TICK(c, 11);
    // 1008fd  mov ax, word ptr [ebx + 0x10]
    X86_AT(c, 0x1008fdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))));
    // 100901  cmp ax, 0xffff
    X86_AT(c, 0x100901u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0xFFFFu, 0, 2);
    // 100905  je 0x100915
    X86_AT(c, 0x100905u);
    if (x86_cc(c, 4)) { goto L_100915; }
    X86_TICK(c, 20);
    // 100907  movsx eax, ax
    X86_AT(c, 0x100907u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 10090a  add eax, dword ptr [ebx + 8]
    X86_AT(c, 0x10090au);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 10090d  cmp eax, dword ptr [ebx]
    X86_AT(c, 0x10090du);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4);
    // 10090f  jge 0x1009ac
    X86_AT(c, 0x10090fu);
    if (x86_cc(c, 13)) { goto L_1009ac; }
L_100915:
    X86_TICK(c, 30);
    // 100915  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x100915u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 100918  mov al, byte ptr [0xdfc2a]
    X86_AT(c, 0x100918u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xDFC2Au))));
    // 10091d  mov ecx, dword ptr [ebx]
    X86_AT(c, 0x10091du);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 10091f  push edi
    X86_AT(c, 0x10091fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 100920  mov edi, ecx
    X86_AT(c, 0x100920u);
    c.r[7] = c.r[1];
    // 100922  mov ecx, edx
    X86_AT(c, 0x100922u);
    c.r[1] = c.r[2];
    // 100924  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x100924u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 100926  jne 0x10092b
    X86_AT(c, 0x100926u);
    if (x86_cc(c, 5)) { goto L_10092b; }
    X86_TICK(c, 4);
    // 100928  inc ecx
    X86_AT(c, 0x100928u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 100929  sub edx, ecx
    X86_AT(c, 0x100929u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_10092b:
    X86_TICK(c, 13);
    // 10092b  pop edi
    X86_AT(c, 0x10092bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 10092c  mov word ptr [ebx + 0x10], dx
    X86_AT(c, 0x10092cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), (c.r[2] & 0xFFFFu));
    // 100930  jmp 0x100965
    X86_AT(c, 0x100930u);
    goto L_100965;
L_100932:
    X86_TICK(c, 59);
    // 100932  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x100932u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 100936  add eax, dword ptr [ebx]
    X86_AT(c, 0x100936u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4); }
    // 100938  inc eax
    X86_AT(c, 0x100938u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 100939  mov dx, word ptr [ebx + 0x10]
    X86_AT(c, 0x100939u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))));
    // 10093d  inc edx
    X86_AT(c, 0x10093du);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 10093e  movsx edx, dx
    X86_AT(c, 0x10093eu);
    c.r[2] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 100941  mov ecx, dword ptr [ebx + 4]
    X86_AT(c, 0x100941u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 100944  sub ecx, edx
    X86_AT(c, 0x100944u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 100946  mov edx, ecx
    X86_AT(c, 0x100946u);
    c.r[2] = c.r[1];
    // 100948  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0x100948u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 10094b  mov al, byte ptr [0xdfc2a]
    X86_AT(c, 0x10094bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xDFC2Au))));
    // 100950  mov ecx, dword ptr [ebp - 0x14]
    X86_AT(c, 0x100950u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 100953  push edi
    X86_AT(c, 0x100953u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 100954  mov edi, ecx
    X86_AT(c, 0x100954u);
    c.r[7] = c.r[1];
    // 100956  mov ecx, edx
    X86_AT(c, 0x100956u);
    c.r[1] = c.r[2];
    // 100958  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x100958u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 10095a  jne 0x10095f
    X86_AT(c, 0x10095au);
    if (x86_cc(c, 5)) { goto L_10095f; }
    X86_TICK(c, 4);
    // 10095c  inc ecx
    X86_AT(c, 0x10095cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 10095d  sub edx, ecx
    X86_AT(c, 0x10095du);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_10095f:
    X86_TICK(c, 13);
    // 10095f  pop edi
    X86_AT(c, 0x10095fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 100960  inc edx
    X86_AT(c, 0x100960u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 100961  add word ptr [ebx + 0x10], dx
    X86_AT(c, 0x100961u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
L_100965:
    X86_TICK(c, 19);
    // 100965  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x100965u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 100969  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x100969u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 10096c  dec edx
    X86_AT(c, 0x10096cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 10096d  cmp edx, eax
    X86_AT(c, 0x10096du);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 10096f  jle 0x10097e
    X86_AT(c, 0x10096fu);
    if (x86_cc(c, 14)) { goto L_10097e; }
    X86_TICK(c, 23);
    // 100971  add eax, dword ptr [ebx]
    X86_AT(c, 0x100971u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4); }
    // 100973  inc eax
    X86_AT(c, 0x100973u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 100974  mov al, byte ptr [eax]
    X86_AT(c, 0x100974u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 100976  cmp al, byte ptr [0xdfc2b]
    X86_AT(c, 0x100976u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(0xDFC2Bu))), 0, 1);
    // 10097c  jne 0x100932
    X86_AT(c, 0x10097cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x100932u); goto L_100932; }
L_10097e:
    X86_TICK(c, 17);
    // 10097e  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x10097eu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 100982  cmp eax, dword ptr [ebx + 4]
    X86_AT(c, 0x100982u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 100985  jne 0x10098f
    X86_AT(c, 0x100985u);
    if (x86_cc(c, 5)) { goto L_10098f; }
    X86_TICK(c, 9);
    // 100987  mov word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0x100987u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0x200u);
    // 10098d  jmp 0x1009ac
    X86_AT(c, 0x10098du);
    goto L_1009ac;
L_10098f:
    X86_TICK(c, 19);
    // 10098f  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x10098fu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 100993  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x100993u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 100996  dec edx
    X86_AT(c, 0x100996u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 100997  cmp edx, eax
    X86_AT(c, 0x100997u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 100999  jne 0x1009a3
    X86_AT(c, 0x100999u);
    if (x86_cc(c, 5)) { goto L_1009a3; }
    X86_TICK(c, 9);
    // 10099b  mov word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0x10099bu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFEu);
    // 1009a1  jmp 0x1009ac
    X86_AT(c, 0x1009a1u);
    goto L_1009ac;
L_1009a3:
    X86_TICK(c, 17);
    // 1009a3  mov eax, dword ptr [ebx]
    X86_AT(c, 0x1009a3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 1009a5  sub eax, dword ptr [ebx + 8]
    X86_AT(c, 0x1009a5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 1009a8  add word ptr [ebx + 0x10], ax
    X86_AT(c, 0x1009a8u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_1009ac:
    X86_TICK(c, 12);
    // 1009ac  cmp word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0x1009acu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0x200u, 0, 2);
    // 1009b2  je 0x100abc
    X86_AT(c, 0x1009b2u);
    if (x86_cc(c, 4)) { goto L_100abc; }
    X86_TICK(c, 12);
    // 1009b8  cmp word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0x1009b8u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0xFFFEu, 0, 2);
    // 1009bd  jne 0x1009cd
    X86_AT(c, 0x1009bdu);
    if (x86_cc(c, 5)) { goto L_1009cd; }
    X86_TICK(c, 11);
    // 1009bf  cmp edi, dword ptr [ebx + 4]
    X86_AT(c, 0x1009bfu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 1009c2  jl 0x100a17
    X86_AT(c, 0x1009c2u);
    if (x86_cc(c, 12)) { goto L_100a17; }
    X86_TICK(c, 13);
    // 1009c4  mov esi, dword ptr [ebx + 4]
    X86_AT(c, 0x1009c4u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 1009c7  dec esi
    X86_AT(c, 0x1009c7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 1009c8  jmp 0x100ac8
    X86_AT(c, 0x1009c8u);
    goto L_100ac8;
L_1009cd:
    X86_TICK(c, 25);
    // 1009cd  mov eax, dword ptr [ebx]
    X86_AT(c, 0x1009cdu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 1009cf  sub eax, dword ptr [ebx + 8]
    X86_AT(c, 0x1009cfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 1009d2  movsx esi, word ptr [ebx + 0x10]
    X86_AT(c, 0x1009d2u);
    c.r[6] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 1009d6  sub esi, eax
    X86_AT(c, 0x1009d6u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[0], 0, 4); }
    // 1009d8  cmp edi, esi
    X86_AT(c, 0x1009d8u);
    (void)x86_sub(c, c.r[7], c.r[6], 0, 4);
    // 1009da  jbe 0x100a17
    X86_AT(c, 0x1009dau);
    if (x86_cc(c, 6)) { goto L_100a17; }
    X86_TICK(c, 87);
    // 1009dc  mov ecx, esi
    X86_AT(c, 0x1009dcu);
    c.r[1] = c.r[6];
    // 1009de  mov eax, dword ptr [ebx]
    X86_AT(c, 0x1009deu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 1009e0  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x1009e0u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 1009e3  mov dword ptr [ebp - 0x14], edi
    X86_AT(c, 0x1009e3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[7]);
    // 1009e6  mov edi, dword ptr [ebp - 4]
    X86_AT(c, 0x1009e6u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 1009e9  lea edx, [edx + edi*1]
    X86_AT(c, 0x1009e9u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[7]);
    // 1009ec  push esi
    X86_AT(c, 0x1009ecu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 1009ed  push edi
    X86_AT(c, 0x1009edu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1009ee  mov esi, eax
    X86_AT(c, 0x1009eeu);
    c.r[6] = c.r[0];
    // 1009f0  mov edi, edx
    X86_AT(c, 0x1009f0u);
    c.r[7] = c.r[2];
    // 1009f2  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x1009f2u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 1009f4  pop edi
    X86_AT(c, 0x1009f4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 1009f5  pop esi
    X86_AT(c, 0x1009f5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 1009f6  add edi, esi
    X86_AT(c, 0x1009f6u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[6], 0, 4); }
    // 1009f8  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x1009f8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 1009fb  mov byte ptr [eax + edi*1], 0xa
    X86_AT(c, 0x1009fbu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7])), 0xAu);
    // 1009ff  lea eax, [esi + 1]
    X86_AT(c, 0x1009ffu);
    c.r[0] = (uint32_t)(c.r[6] + 0x1u);
    // 100a02  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x100a02u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 100a05  mov edi, dword ptr [ebp - 0x14]
    X86_AT(c, 0x100a05u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 100a08  sub edi, eax
    X86_AT(c, 0x100a08u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[0], 0, 4); }
    // 100a0a  lea eax, [esi + 2]
    X86_AT(c, 0x100a0au);
    c.r[0] = (uint32_t)(c.r[6] + 0x2u);
    // 100a0d  sub dword ptr [ebx + 4], eax
    X86_AT(c, 0x100a0du);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 100a10  add dword ptr [ebx], eax
    X86_AT(c, 0x100a10u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 100a12  jmp 0x100ae6
    X86_AT(c, 0x100a12u);
    goto L_100ae6;
L_100a17:
    X86_TICK(c, 9);
    // 100a17  mov esi, edi
    X86_AT(c, 0x100a17u);
    c.r[6] = c.r[7];
    // 100a19  jmp 0x100ac8
    X86_AT(c, 0x100a19u);
    goto L_100ac8;
L_100a1e:
    X86_TICK(c, 13);
    // 100a1e  mov word ptr [ebx + 0x10], 0xffff
    X86_AT(c, 0x100a1eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFFu);
    // 100a24  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x100a24u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 100a27  cmp edi, eax
    X86_AT(c, 0x100a27u);
    (void)x86_sub(c, c.r[7], c.r[0], 0, 4);
    // 100a29  jl 0x100a4f
    X86_AT(c, 0x100a29u);
    if (x86_cc(c, 12)) { goto L_100a4f; }
    X86_TICK(c, 7);
    // 100a2b  and eax, eax
    X86_AT(c, 0x100a2bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 100a2d  jle 0x100a4f
    X86_AT(c, 0x100a2du);
    if (x86_cc(c, 14)) { goto L_100a4f; }
    X86_TICK(c, 53);
    // 100a2f  xchg ecx, eax
    X86_AT(c, 0x100a2fu);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
    // 100a30  mov eax, dword ptr [ebx]
    X86_AT(c, 0x100a30u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 100a32  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x100a32u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 100a35  push esi
    X86_AT(c, 0x100a35u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 100a36  push edi
    X86_AT(c, 0x100a36u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 100a37  mov esi, eax
    X86_AT(c, 0x100a37u);
    c.r[6] = c.r[0];
    // 100a39  mov edi, edx
    X86_AT(c, 0x100a39u);
    c.r[7] = c.r[2];
    // 100a3b  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x100a3bu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 100a3d  pop edi
    X86_AT(c, 0x100a3du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 100a3e  pop esi
    X86_AT(c, 0x100a3eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 100a3f  sub edi, dword ptr [ebx + 4]
    X86_AT(c, 0x100a3fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4); }
    // 100a42  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x100a42u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 100a45  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x100a45u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 100a48  mov dword ptr [ebx + 4], 0
    X86_AT(c, 0x100a48u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0x0u);
L_100a4f:
    X86_TICK(c, 7);
    // 100a4f  cmp edi, 0x200
    X86_AT(c, 0x100a4fu);
    (void)x86_sub(c, c.r[7], 0x200u, 0, 4);
    // 100a55  jb 0x100a8d
    X86_AT(c, 0x100a55u);
    if (x86_cc(c, 2)) { goto L_100a8d; }
    X86_TICK(c, 10);
    // 100a57  mov esi, edi
    X86_AT(c, 0x100a57u);
    c.r[6] = c.r[7];
    // 100a59  shr esi, 9
    X86_AT(c, 0x100a59u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 5, v, 0x9u, 4, w); if (w) c.r[6] = r; }
    // 100a5c  shl esi, 9
    X86_AT(c, 0x100a5cu);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[6] = r; }
    // 100a5f  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0x100a5fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
L_100a66:
    X86_TICK(c, 27);
    // 100a66  push esi
    X86_AT(c, 0x100a66u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 100a67  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x100a67u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 100a6a  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0x100a6au);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 100a6d  push eax
    X86_AT(c, 0x100a6du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 100a6e  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x100a6eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 100a71  push eax
    X86_AT(c, 0x100a71u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 100a72  call 0x103a58
    X86_AT(c, 0x100a72u);
    push32(c, 0x100a77u); f_00103a58(c); X86_RET(c, 0x100a77u);
    X86_TICK(c, 25);
    // 100a77  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x100a77u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 100a7a  add dword ptr [ebp - 0xc], eax
    X86_AT(c, 0x100a7au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 100a7d  sub esi, eax
    X86_AT(c, 0x100a7du);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[0], 0, 4); }
    // 100a7f  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x100a7fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 100a82  and esi, esi
    X86_AT(c, 0x100a82u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 100a84  je 0x100a8a
    X86_AT(c, 0x100a84u);
    if (x86_cc(c, 4)) { goto L_100a8a; }
    X86_TICK(c, 7);
    // 100a86  and eax, eax
    X86_AT(c, 0x100a86u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 100a88  jne 0x100a66
    X86_AT(c, 0x100a88u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x100a66u); goto L_100a66; }
L_100a8a:
    X86_TICK(c, 6);
    // 100a8a  sub edi, dword ptr [ebp - 0xc]
    X86_AT(c, 0x100a8au);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 4); }
L_100a8d:
    X86_TICK(c, 7);
    // 100a8d  and edi, edi
    X86_AT(c, 0x100a8du);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 100a8f  jbe 0x100ae6
    X86_AT(c, 0x100a8fu);
    if (x86_cc(c, 6)) { goto L_100ae6; }
    X86_TICK(c, 12);
    // 100a91  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x100a91u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 100a95  jne 0x100ab6
    X86_AT(c, 0x100a95u);
    if (x86_cc(c, 5)) { goto L_100ab6; }
    X86_TICK(c, 12);
    // 100a97  test byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0x100a97u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x10u, 1);
    // 100a9b  jne 0x100aee
    X86_AT(c, 0x100a9bu);
    if (x86_cc(c, 5)) { goto L_100aee; }
    X86_TICK(c, 20);
    // 100a9d  push 0x200
    X86_AT(c, 0x100a9du);
    { uint32_t v = 0x200u; push32(c, v); }
    // 100aa2  push dword ptr [ebx + 8]
    X86_AT(c, 0x100aa2u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 100aa5  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x100aa5u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 100aa8  push eax
    X86_AT(c, 0x100aa8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 100aa9  call 0x103a58
    X86_AT(c, 0x100aa9u);
    push32(c, 0x100aaeu); f_00103a58(c); X86_RET(c, 0x100aaeu);
    X86_TICK(c, 8);
    // 100aae  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0x100aaeu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
    // 100ab1  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x100ab1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 100ab4  mov dword ptr [ebx], eax
    X86_AT(c, 0x100ab4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
L_100ab6:
    X86_TICK(c, 12);
    // 100ab6  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x100ab6u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 100aba  jle 0x100aee
    X86_AT(c, 0x100abau);
    if (x86_cc(c, 14)) { goto L_100aee; }
L_100abc:
    X86_TICK(c, 13);
    // 100abc  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x100abcu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 100abf  mov edx, edi
    X86_AT(c, 0x100abfu);
    c.r[2] = c.r[7];
    // 100ac1  cmp edx, eax
    X86_AT(c, 0x100ac1u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 100ac3  jl 0x100ac6
    X86_AT(c, 0x100ac3u);
    if (x86_cc(c, 12)) { goto L_100ac6; }
    X86_TICK(c, 3);
    // 100ac5  xchg edx, eax
    X86_AT(c, 0x100ac5u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_100ac6:
    X86_TICK(c, 2);
    // 100ac6  mov esi, edx
    X86_AT(c, 0x100ac6u);
    c.r[6] = c.r[2];
L_100ac8:
    X86_TICK(c, 62);
    // 100ac8  mov ecx, esi
    X86_AT(c, 0x100ac8u);
    c.r[1] = c.r[6];
    // 100aca  mov eax, dword ptr [ebx]
    X86_AT(c, 0x100acau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 100acc  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x100accu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 100acf  add edx, dword ptr [ebp - 4]
    X86_AT(c, 0x100acfu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 100ad2  push esi
    X86_AT(c, 0x100ad2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 100ad3  push edi
    X86_AT(c, 0x100ad3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 100ad4  mov esi, eax
    X86_AT(c, 0x100ad4u);
    c.r[6] = c.r[0];
    // 100ad6  mov edi, edx
    X86_AT(c, 0x100ad6u);
    c.r[7] = c.r[2];
    // 100ad8  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x100ad8u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 100ada  pop edi
    X86_AT(c, 0x100adau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 100adb  pop esi
    X86_AT(c, 0x100adbu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 100adc  add dword ptr [ebp - 4], esi
    X86_AT(c, 0x100adcu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 100adf  sub dword ptr [ebx + 4], esi
    X86_AT(c, 0x100adfu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[6], 0, 4)); }
    // 100ae2  sub edi, esi
    X86_AT(c, 0x100ae2u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[6], 0, 4); }
    // 100ae4  add dword ptr [ebx], esi
    X86_AT(c, 0x100ae4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
L_100ae6:
    X86_TICK(c, 7);
    // 100ae6  and edi, edi
    X86_AT(c, 0x100ae6u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 100ae8  ja 0x100821
    X86_AT(c, 0x100ae8u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x100821u); goto L_100821; }
L_100aee:
    X86_TICK(c, 12);
    // 100aee  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0x100aeeu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 100af2  jne 0x100af8
    X86_AT(c, 0x100af2u);
    if (x86_cc(c, 5)) { goto L_100af8; }
    X86_TICK(c, 7);
    // 100af4  or byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0x100af4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x10u, 1)); }
L_100af8:
    X86_TICK(c, 13);
    // 100af8  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x100af8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 100afb  mov dword ptr [0xdfc40], eax
    X86_AT(c, 0x100afbu);
    wr32((c.sbase[3] + (uint32_t)(0xDFC40u)), c.r[0]);
    // 100b00  jmp 0x100c30
    X86_AT(c, 0x100b00u);
    goto L_100c30;
L_100c30:
    X86_TICK(c, 12);
    // 100c30  cmp word ptr [0xe00b6], 0
    X86_AT(c, 0x100c30u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xE00B6u))), 0x0u, 0, 2);
    // 100c38  je 0x100c40
    X86_AT(c, 0x100c38u);
    if (x86_cc(c, 4)) { goto L_100c40; }
    X86_TICK(c, 14);
    // 100c3a  or byte ptr [ebx + 0xc], 0x20
    X86_AT(c, 0x100c3au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
    // 100c3e  jmp 0x100c4a
    X86_AT(c, 0x100c3eu);
    goto L_100c4a;
L_100c40:
    X86_TICK(c, 6);
    // 100c40  mov ax, word ptr [ebp - 0xe]
    X86_AT(c, 0x100c40u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))));
    // 100c44  mov word ptr [0xe00b6], ax
    X86_AT(c, 0x100c44u);
    wr16((c.sbase[3] + (uint32_t)(0xE00B6u)), (c.r[0] & 0xFFFFu));
L_100c4a:
    X86_TICK(c, 28);
    // 100c4a  pop edi
    X86_AT(c, 0x100c4au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 100c4b  pop esi
    X86_AT(c, 0x100c4bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 100c4c  pop ebx
    X86_AT(c, 0x100c4cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 100c4d  leave 
    X86_AT(c, 0x100c4du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 100c4e  ret 0xc
    X86_AT(c, 0x100c4eu);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x100ae6u, "ran off the end of a function");
}
}
