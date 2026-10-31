#include "p_game_funcs.h"
namespace p_game {
void f_000fdde8(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0fdde8  push eax
    X86_AT(c, 0xfdde8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0fdde9  push ds
    X86_AT(c, 0xfdde9u);
    push32(c, c.sreg[3]);
    // 0fddea  mov ax, 0x14
    X86_AT(c, 0xfddeau);
    s16(c, 0, 0x14u);
    // 0fddee  mov ds, eax
    X86_AT(c, 0xfddeeu);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0fddf0  cld 
    X86_AT(c, 0xfddf0u);
    c.fl &= ~X86_DF;
    // 0fddf1  cmp word ptr [0xdea4f], 0
    X86_AT(c, 0xfddf1u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xDEA4Fu))), 0x0u, 0, 2);
    // 0fddf9  jne 0xfde0f
    X86_AT(c, 0xfddf9u);
    if (x86_cc(c, 5)) { goto L_fde0f; }
    X86_TICK(c, 8);
    // 0fddfb  mov dword ptr [0xdea51], esp
    X86_AT(c, 0xfddfbu);
    wr32((c.sbase[3] + (uint32_t)(0xDEA51u)), c.r[4]);
    // 0fde01  mov word ptr [0xdea55], ss
    X86_AT(c, 0xfde01u);
    wr16((c.sbase[3] + (uint32_t)(0xDEA55u)), (uint32_t)c.sreg[2]);
    // 0fde07  mov ss, eax
    X86_AT(c, 0xfde07u);
    x86_load_seg(c, 2, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0fde09  lea esp, [0xdee57]
    X86_AT(c, 0xfde09u);
    c.r[4] = (uint32_t)(0xDEE57u);
L_fde0f:
    X86_TICK(c, 57);
    // 0fde0f  inc word ptr [0xdea4f]
    X86_AT(c, 0xfde0fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDEA4Fu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0fde16  sti 
    X86_AT(c, 0xfde16u);
    c.fl |= X86_IF;
    // 0fde17  push es
    X86_AT(c, 0xfde17u);
    push32(c, c.sreg[0]);
    // 0fde18  push fs
    X86_AT(c, 0xfde18u);
    push32(c, c.sreg[4]);
    // 0fde1a  push gs
    X86_AT(c, 0xfde1au);
    push32(c, c.sreg[5]);
    // 0fde1c  pushal 
    X86_AT(c, 0xfde1cu);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0fde1d  mov es, eax
    X86_AT(c, 0xfde1du);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0fde1f  mov dx, 0x4e9
    X86_AT(c, 0xfde1fu);
    s16(c, 2, 0x4E9u);
    // 0fde23  in al, dx
    X86_AT(c, 0xfde23u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0fde24  push eax
    X86_AT(c, 0xfde24u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0fde25  test al, 1
    X86_AT(c, 0xfde25u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0fde27  je 0xfde71
    X86_AT(c, 0xfde27u);
    if (x86_cc(c, 4)) { goto L_fde71; }
    X86_TICK(c, 9);
    // 0fde2d  mov ah, 0x10
    X86_AT(c, 0xfde2du);
    s8(c, 4, 0x10u);
    // 0fde2f  call 0xfdf3c
    X86_AT(c, 0xfde2fu);
    push32(c, 0xfde34u); f_000fdf3c(c); X86_RET(c, 0xfde34u);
    X86_TICK(c, 7);
    // 0fde34  test dl, 1
    X86_AT(c, 0xfde34u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 0fde37  je 0xfde48
    X86_AT(c, 0xfde37u);
    if (x86_cc(c, 4)) { goto L_fde48; }
    X86_TICK(c, 11);
    // 0fde39  push edx
    X86_AT(c, 0xfde39u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0fde3a  mov ah, 0x17
    X86_AT(c, 0xfde3au);
    s8(c, 4, 0x17u);
    // 0fde3c  call 0xfdf3c
    X86_AT(c, 0xfde3cu);
    push32(c, 0xfde41u); f_000fdf3c(c); X86_RET(c, 0xfde41u);
    X86_TICK(c, 7);
    // 0fde41  call dword ptr [0xdea3c]
    X86_AT(c, 0xfde41u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xDEA3Cu))); push32(c, 0xfde47u); x86_call(c, t); X86_RET(c, 0xfde47u); }
    X86_TICK(c, 4);
    // 0fde47  pop edx
    X86_AT(c, 0xfde47u);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_fde48:
    X86_TICK(c, 7);
    // 0fde48  test dl, 2
    X86_AT(c, 0xfde48u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 0fde4b  je 0xfde71
    X86_AT(c, 0xfde4bu);
    if (x86_cc(c, 4)) { goto L_fde71; }
    X86_TICK(c, 11);
    // 0fde4d  push edx
    X86_AT(c, 0xfde4du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0fde4e  mov ah, 0x18
    X86_AT(c, 0xfde4eu);
    s8(c, 4, 0x18u);
    // 0fde50  call 0xfdf3c
    X86_AT(c, 0xfde50u);
    push32(c, 0xfde55u); f_000fdf3c(c); X86_RET(c, 0xfde55u);
    X86_TICK(c, 11);
    // 0fde55  mov byte ptr [0xdea4d], 0xff
    X86_AT(c, 0xfde55u);
    wr8((c.sbase[3] + (uint32_t)(0xDEA4Du)), 0xFFu);
    // 0fde5c  mov ah, 0x50
    X86_AT(c, 0xfde5cu);
    s8(c, 4, 0x50u);
    // 0fde5e  call 0xfdf3c
    X86_AT(c, 0xfde5eu);
    push32(c, 0xfde63u); f_000fdf3c(c); X86_RET(c, 0xfde63u);
    X86_TICK(c, 9);
    // 0fde63  mov byte ptr [0xdea4d], 0
    X86_AT(c, 0xfde63u);
    wr8((c.sbase[3] + (uint32_t)(0xDEA4Du)), 0x0u);
    // 0fde6a  call dword ptr [0xdea40]
    X86_AT(c, 0xfde6au);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xDEA40u))); push32(c, 0xfde70u); x86_call(c, t); X86_RET(c, 0xfde70u); }
    X86_TICK(c, 4);
    // 0fde70  pop edx
    X86_AT(c, 0xfde70u);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_fde71:
    X86_TICK(c, 11);
    // 0fde71  pop eax
    X86_AT(c, 0xfde71u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0fde72  test al, 8
    X86_AT(c, 0xfde72u);
    (void)x86_logic(c, g8(c, 0) & 0x8u, 1);
    // 0fde74  je 0xfde8d
    X86_AT(c, 0xfde74u);
    if (x86_cc(c, 4)) { goto L_fde8d; }
    X86_TICK(c, 13);
    // 0fde76  push edx
    X86_AT(c, 0xfde76u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0fde77  mov byte ptr [0xdea4d], 0xff
    X86_AT(c, 0xfde77u);
    wr8((c.sbase[3] + (uint32_t)(0xDEA4Du)), 0xFFu);
    // 0fde7e  mov ah, 0x51
    X86_AT(c, 0xfde7eu);
    s8(c, 4, 0x51u);
    // 0fde80  call 0xfdf3c
    X86_AT(c, 0xfde80u);
    push32(c, 0xfde85u); f_000fdf3c(c); X86_RET(c, 0xfde85u);
    X86_TICK(c, 6);
    // 0fde85  mov byte ptr [0xdea4d], 0
    X86_AT(c, 0xfde85u);
    wr8((c.sbase[3] + (uint32_t)(0xDEA4Du)), 0x0u);
    // 0fde8c  pop edx
    X86_AT(c, 0xfde8cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_fde8d:
    X86_TICK(c, 9);
    // 0fde8d  cli 
    X86_AT(c, 0xfde8du);
    c.fl &= ~X86_IF;
    // 0fde8e  call 0xfdef1
    X86_AT(c, 0xfde8eu);
    push32(c, 0xfde93u); f_000fdef1(c); X86_RET(c, 0xfde93u);
    X86_TICK(c, 12);
    // 0fde93  cmp byte ptr [0xdea4e], 0
    X86_AT(c, 0xfde93u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDEA4Eu))), 0x0u, 0, 1);
    // 0fde9a  jne 0xfdecc
    X86_AT(c, 0xfde9au);
    if (x86_cc(c, 5)) { goto L_fdecc; }
    X86_TICK(c, 9);
    // 0fde9c  mov byte ptr [0xdea4e], 0xff
    X86_AT(c, 0xfde9cu);
    wr8((c.sbase[3] + (uint32_t)(0xDEA4Eu)), 0xFFu);
    // 0fdea3  test dl, 1
    X86_AT(c, 0xfdea3u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 0fdea6  je 0xfdeb0
    X86_AT(c, 0xfdea6u);
    if (x86_cc(c, 4)) { goto L_fdeb0; }
    X86_TICK(c, 9);
    // 0fdea8  push edx
    X86_AT(c, 0xfdea8u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0fdea9  call dword ptr [0xdea44]
    X86_AT(c, 0xfdea9u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xDEA44u))); push32(c, 0xfdeafu); x86_call(c, t); X86_RET(c, 0xfdeafu); }
    X86_TICK(c, 4);
    // 0fdeaf  pop edx
    X86_AT(c, 0xfdeafu);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_fdeb0:
    X86_TICK(c, 7);
    // 0fdeb0  test dl, 2
    X86_AT(c, 0xfdeb0u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 0fdeb3  je 0xfdec4
    X86_AT(c, 0xfdeb3u);
    if (x86_cc(c, 4)) { goto L_fdec4; }
    X86_TICK(c, 12);
    // 0fdeb5  xor byte ptr [0xdea4c], 0xff
    X86_AT(c, 0xfdeb5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDEA4Cu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0xFFu, 1)); }
    // 0fdebc  je 0xfdec4
    X86_AT(c, 0xfdebcu);
    if (x86_cc(c, 4)) { goto L_fdec4; }
    X86_TICK(c, 7);
    // 0fdebe  call dword ptr [0xdea48]
    X86_AT(c, 0xfdebeu);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xDEA48u))); push32(c, 0xfdec4u); x86_call(c, t); X86_RET(c, 0xfdec4u); }
L_fdec4:
    X86_TICK(c, 4);
    // 0fdec4  cli 
    X86_AT(c, 0xfdec4u);
    c.fl &= ~X86_IF;
    // 0fdec5  mov byte ptr [0xdea4e], 0
    X86_AT(c, 0xfdec5u);
    wr8((c.sbase[3] + (uint32_t)(0xDEA4Eu)), 0x0u);
L_fdecc:
    X86_TICK(c, 49);
    // 0fdecc  popal 
    X86_AT(c, 0xfdeccu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0fdecd  pop gs
    X86_AT(c, 0xfdecdu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0fdecf  pop fs
    X86_AT(c, 0xfdecfu);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0fded1  pop es
    X86_AT(c, 0xfded1u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0fded2  cli 
    X86_AT(c, 0xfded2u);
    c.fl &= ~X86_IF;
    // 0fded3  dec word ptr [0xdea4f]
    X86_AT(c, 0xfded3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDEA4Fu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 0fdeda  jne 0xfdee8
    X86_AT(c, 0xfdedau);
    if (x86_cc(c, 5)) { goto L_fdee8; }
    X86_TICK(c, 8);
    // 0fdedc  mov esp, dword ptr [0xdea51]
    X86_AT(c, 0xfdedcu);
    c.r[4] = rd32((c.sbase[3] + (uint32_t)(0xDEA51u)));
    // 0fdee2  mov ss, word ptr [0xdea55]
    X86_AT(c, 0xfdee2u);
    x86_load_seg(c, 2, rd16((c.sbase[3] + (uint32_t)(0xDEA55u))) & 0xFFFFu);
L_fdee8:
    X86_TICK(c, 14);
    // 0fdee8  pop ds
    X86_AT(c, 0xfdee8u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0fdee9  pop eax
    X86_AT(c, 0xfdee9u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0fdeea  iretd 
    X86_AT(c, 0xfdeeau);
    x86_iret(c, 4); return;
    x86_fault(c, 0xfdde8u, "ran off the end of a function");
}
void f_000fdeeb(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0fdeeb  mov al, byte ptr [0xdea4d]
    X86_AT(c, 0xfdeebu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xDEA4Du))));
    // 0fdef0  ret 
    X86_AT(c, 0xfdef0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfdeebu, "ran off the end of a function");
}
void f_000fdef1(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0fdef1  push ax
    X86_AT(c, 0xfdef1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0fdef3  mov al, 0xb
    X86_AT(c, 0xfdef3u);
    s8(c, 0, 0xBu);
    // 0fdef5  out 0, al
    X86_AT(c, 0xfdef5u);
    x86_out(c, 0x0u, 1, g8(c, 0));
    // 0fdef7  jmp 0xfdef9
    X86_AT(c, 0xfdef7u);
    goto L_fdef9;
L_fdef9:
    X86_TICK(c, 7);
    // 0fdef9  jmp 0xfdefb
    X86_AT(c, 0xfdef9u);
    goto L_fdefb;
L_fdefb:
    X86_TICK(c, 7);
    // 0fdefb  jmp 0xfdefd
    X86_AT(c, 0xfdefbu);
    goto L_fdefd;
L_fdefd:
    X86_TICK(c, 19);
    // 0fdefd  in al, 0
    X86_AT(c, 0xfdefdu);
    s8(c, 0, x86_in(c, 0x0u, 1));
    // 0fdeff  jmp 0xfdf01
    X86_AT(c, 0xfdeffu);
    goto L_fdf01;
L_fdf01:
    X86_TICK(c, 7);
    // 0fdf01  jmp 0xfdf03
    X86_AT(c, 0xfdf01u);
    goto L_fdf03;
L_fdf03:
    X86_TICK(c, 7);
    // 0fdf03  jmp 0xfdf05
    X86_AT(c, 0xfdf03u);
    goto L_fdf05;
L_fdf05:
    X86_TICK(c, 7);
    // 0fdf05  test al, 0x7f
    X86_AT(c, 0xfdf05u);
    (void)x86_logic(c, g8(c, 0) & 0x7Fu, 1);
    // 0fdf07  je 0xfdf0f
    X86_AT(c, 0xfdf07u);
    if (x86_cc(c, 4)) { goto L_fdf0f; }
    X86_TICK(c, 21);
    // 0fdf09  mov al, 0x20
    X86_AT(c, 0xfdf09u);
    s8(c, 0, 0x20u);
    // 0fdf0b  out 0, al
    X86_AT(c, 0xfdf0bu);
    x86_out(c, 0x0u, 1, g8(c, 0));
    // 0fdf0d  jmp 0xfdf33
    X86_AT(c, 0xfdf0du);
    goto L_fdf33;
L_fdf0f:
    X86_TICK(c, 21);
    // 0fdf0f  mov al, 0x20
    X86_AT(c, 0xfdf0fu);
    s8(c, 0, 0x20u);
    // 0fdf11  out 0x10, al
    X86_AT(c, 0xfdf11u);
    x86_out(c, 0x10u, 1, g8(c, 0));
    // 0fdf13  jmp 0xfdf15
    X86_AT(c, 0xfdf13u);
    goto L_fdf15;
L_fdf15:
    X86_TICK(c, 7);
    // 0fdf15  jmp 0xfdf17
    X86_AT(c, 0xfdf15u);
    goto L_fdf17;
L_fdf17:
    X86_TICK(c, 7);
    // 0fdf17  jmp 0xfdf19
    X86_AT(c, 0xfdf17u);
    goto L_fdf19;
L_fdf19:
    X86_TICK(c, 21);
    // 0fdf19  mov al, 0xb
    X86_AT(c, 0xfdf19u);
    s8(c, 0, 0xBu);
    // 0fdf1b  out 0x10, al
    X86_AT(c, 0xfdf1bu);
    x86_out(c, 0x10u, 1, g8(c, 0));
    // 0fdf1d  jmp 0xfdf1f
    X86_AT(c, 0xfdf1du);
    goto L_fdf1f;
L_fdf1f:
    X86_TICK(c, 7);
    // 0fdf1f  jmp 0xfdf21
    X86_AT(c, 0xfdf1fu);
    goto L_fdf21;
L_fdf21:
    X86_TICK(c, 7);
    // 0fdf21  jmp 0xfdf23
    X86_AT(c, 0xfdf21u);
    goto L_fdf23;
L_fdf23:
    X86_TICK(c, 19);
    // 0fdf23  in al, 0x10
    X86_AT(c, 0xfdf23u);
    s8(c, 0, x86_in(c, 0x10u, 1));
    // 0fdf25  jmp 0xfdf27
    X86_AT(c, 0xfdf25u);
    goto L_fdf27;
L_fdf27:
    X86_TICK(c, 7);
    // 0fdf27  jmp 0xfdf29
    X86_AT(c, 0xfdf27u);
    goto L_fdf29;
L_fdf29:
    X86_TICK(c, 7);
    // 0fdf29  jmp 0xfdf2b
    X86_AT(c, 0xfdf29u);
    goto L_fdf2b;
L_fdf2b:
    X86_TICK(c, 7);
    // 0fdf2b  or al, al
    X86_AT(c, 0xfdf2bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | g8(c, 0), 1)); }
    // 0fdf2d  jne 0xfdf33
    X86_AT(c, 0xfdf2du);
    if (x86_cc(c, 5)) { goto L_fdf33; }
    X86_TICK(c, 14);
    // 0fdf2f  mov al, 0x20
    X86_AT(c, 0xfdf2fu);
    s8(c, 0, 0x20u);
    // 0fdf31  out 0, al
    X86_AT(c, 0xfdf31u);
    x86_out(c, 0x0u, 1, g8(c, 0));
L_fdf33:
    X86_TICK(c, 7);
    // 0fdf33  jmp 0xfdf35
    X86_AT(c, 0xfdf33u);
    goto L_fdf35;
L_fdf35:
    X86_TICK(c, 7);
    // 0fdf35  jmp 0xfdf37
    X86_AT(c, 0xfdf35u);
    goto L_fdf37;
L_fdf37:
    X86_TICK(c, 7);
    // 0fdf37  jmp 0xfdf39
    X86_AT(c, 0xfdf37u);
    goto L_fdf39;
L_fdf39:
    X86_TICK(c, 14);
    // 0fdf39  pop ax
    X86_AT(c, 0xfdf39u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0fdf3b  ret 
    X86_AT(c, 0xfdf3bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfdef1u, "ran off the end of a function");
}
void f_000fdf3c(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0fdf3c  push fs
    X86_AT(c, 0xfdf3cu);
    push32(c, c.sreg[4]);
    // 0fdf3e  push gs
    X86_AT(c, 0xfdf3eu);
    push32(c, c.sreg[5]);
    // 0fdf40  push edi
    X86_AT(c, 0xfdf40u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0fdf41  lgs edi, fword ptr [0xdea2c]
    X86_AT(c, 0xfdf41u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDEA2Cu)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 5, s); c.r[7] = o; }
    // 0fdf48  push ax
    X86_AT(c, 0xfdf48u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0fdf4a  mov ax, 0x110
    X86_AT(c, 0xfdf4au);
    s16(c, 0, 0x110u);
    // 0fdf4e  mov fs, eax
    X86_AT(c, 0xfdf4eu);
    x86_load_seg(c, 4, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0fdf50  pop ax
    X86_AT(c, 0xfdf50u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0fdf52  lcall fword ptr fs:[0x80]
    X86_AT(c, 0xfdf52u);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x80u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0xfdf59u); }
    X86_RET(c, 0xfdf59u);
    X86_TICK(c, 22);
    // 0fdf59  pop edi
    X86_AT(c, 0xfdf59u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0fdf5a  pop gs
    X86_AT(c, 0xfdf5au);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0fdf5c  pop fs
    X86_AT(c, 0xfdf5cu);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0fdf5e  ret 
    X86_AT(c, 0xfdf5eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfdf3cu, "ran off the end of a function");
}
void f_000fdf5f(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0fdf5f  ret 
    X86_AT(c, 0xfdf5fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfdf5fu, "ran off the end of a function");
}
void f_000fdfc0(X86Cpu& c) {
    X86_TICK(c, 31);
    // 0fdfc0  enter 0, 0
    X86_AT(c, 0xfdfc0u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0fdfc4  push ebx
    X86_AT(c, 0xfdfc4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0fdfc5  push edx
    X86_AT(c, 0xfdfc5u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0fdfc6  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0xfdfc6u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0fdfc9  mov dh, byte ptr [ebp + 0xc]
    X86_AT(c, 0xfdfc9u);
    s8(c, 6, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0fdfcc  mov dl, byte ptr [ebp + 0x10]
    X86_AT(c, 0xfdfccu);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 0fdfcf  mov ah, 0x43
    X86_AT(c, 0xfdfcfu);
    s8(c, 4, 0x43u);
    // 0fdfd1  call 0xfe05d
    X86_AT(c, 0xfdfd1u);
    push32(c, 0xfdfd6u); f_000fe05d(c); X86_RET(c, 0xfdfd6u);
    X86_TICK(c, 27);
    // 0fdfd6  movzx eax, al
    X86_AT(c, 0xfdfd6u);
    c.r[0] = g8(c, 0);
    // 0fdfd9  pop edx
    X86_AT(c, 0xfdfd9u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0fdfda  pop ebx
    X86_AT(c, 0xfdfdau);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0fdfdb  leave 
    X86_AT(c, 0xfdfdbu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fdfdc  ret 
    X86_AT(c, 0xfdfdcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfdfc0u, "ran off the end of a function");
}
void f_000fdfdd(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0fdfdd  mov ah, 0x44
    X86_AT(c, 0xfdfddu);
    s8(c, 4, 0x44u);
    // 0fdfdf  call 0xfe05d
    X86_AT(c, 0xfdfdfu);
    push32(c, 0xfdfe4u); f_000fe05d(c); X86_RET(c, 0xfdfe4u);
    X86_TICK(c, 13);
    // 0fdfe4  movzx eax, al
    X86_AT(c, 0xfdfe4u);
    c.r[0] = g8(c, 0);
    // 0fdfe7  ret 
    X86_AT(c, 0xfdfe7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfdfddu, "ran off the end of a function");
}
void f_000fe011(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0fe011  enter 0, 0
    X86_AT(c, 0xfe011u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0fe015  push ebx
    X86_AT(c, 0xfe015u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0fe016  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0xfe016u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0fe019  mov ah, 0x46
    X86_AT(c, 0xfe019u);
    s8(c, 4, 0x46u);
    // 0fe01b  call 0xfe05d
    X86_AT(c, 0xfe01bu);
    push32(c, 0xfe020u); f_000fe05d(c); X86_RET(c, 0xfe020u);
    X86_TICK(c, 23);
    // 0fe020  movzx eax, al
    X86_AT(c, 0xfe020u);
    c.r[0] = g8(c, 0);
    // 0fe023  pop ebx
    X86_AT(c, 0xfe023u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0fe024  leave 
    X86_AT(c, 0xfe024u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fe025  ret 
    X86_AT(c, 0xfe025u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe011u, "ran off the end of a function");
}
void f_000fe048(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0fe048  enter 0, 0
    X86_AT(c, 0xfe048u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0fe04c  push edx
    X86_AT(c, 0xfe04cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0fe04d  mov dl, byte ptr [ebp + 8]
    X86_AT(c, 0xfe04du);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0fe050  mov ah, 0x49
    X86_AT(c, 0xfe050u);
    s8(c, 4, 0x49u);
    // 0fe052  call 0xfe05d
    X86_AT(c, 0xfe052u);
    push32(c, 0xfe057u); f_000fe05d(c); X86_RET(c, 0xfe057u);
    X86_TICK(c, 23);
    // 0fe057  movzx eax, al
    X86_AT(c, 0xfe057u);
    c.r[0] = g8(c, 0);
    // 0fe05a  pop edx
    X86_AT(c, 0xfe05au);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0fe05b  leave 
    X86_AT(c, 0xfe05bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fe05c  ret 
    X86_AT(c, 0xfe05cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe048u, "ran off the end of a function");
}
void f_000fe05d(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0fe05d  push fs
    X86_AT(c, 0xfe05du);
    push32(c, c.sreg[4]);
    // 0fe05f  push ax
    X86_AT(c, 0xfe05fu);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0fe061  mov ax, 0x110
    X86_AT(c, 0xfe061u);
    s16(c, 0, 0x110u);
    // 0fe065  mov fs, eax
    X86_AT(c, 0xfe065u);
    x86_load_seg(c, 4, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0fe067  pop ax
    X86_AT(c, 0xfe067u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0fe069  lcall fword ptr fs:[0x80]
    X86_AT(c, 0xfe069u);
    { uint32_t ea = (c.sbase[4] + (uint32_t)(0x80u)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0xfe070u); }
    X86_RET(c, 0xfe070u);
    X86_TICK(c, 14);
    // 0fe070  pop fs
    X86_AT(c, 0xfe070u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0fe072  ret 
    X86_AT(c, 0xfe072u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe05du, "ran off the end of a function");
}
void f_000fe0c9(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0fe0c9  mov ah, 0
    X86_AT(c, 0xfe0c9u);
    s8(c, 4, 0x0u);
    // 0fe0cb  call 0xfe2c8
    X86_AT(c, 0xfe0cbu);
    push32(c, 0xfe0d0u); f_000fe2c8(c); X86_RET(c, 0xfe0d0u);
    X86_TICK(c, 13);
    // 0fe0d0  movzx eax, al
    X86_AT(c, 0xfe0d0u);
    c.r[0] = g8(c, 0);
    // 0fe0d3  ret 
    X86_AT(c, 0xfe0d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe0c9u, "ran off the end of a function");
}
void f_000fe0d4(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0fe0d4  mov ah, 1
    X86_AT(c, 0xfe0d4u);
    s8(c, 4, 0x1u);
    // 0fe0d6  call 0xfe2c8
    X86_AT(c, 0xfe0d6u);
    push32(c, 0xfe0dbu); f_000fe2c8(c); X86_RET(c, 0xfe0dbu);
    X86_TICK(c, 13);
    // 0fe0db  movzx eax, al
    X86_AT(c, 0xfe0dbu);
    c.r[0] = g8(c, 0);
    // 0fe0de  ret 
    X86_AT(c, 0xfe0deu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe0d4u, "ran off the end of a function");
}
void f_000fe0df(X86Cpu& c) {
    X86_TICK(c, 33);
    // 0fe0df  enter 0, 0
    X86_AT(c, 0xfe0dfu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0fe0e3  push esi
    X86_AT(c, 0xfe0e3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0fe0e4  push ecx
    X86_AT(c, 0xfe0e4u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0fe0e5  push edx
    X86_AT(c, 0xfe0e5u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0fe0e6  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0xfe0e6u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0fe0e9  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xfe0e9u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0fe0ec  mov dl, byte ptr [ebp + 0x10]
    X86_AT(c, 0xfe0ecu);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 0fe0ef  mov ah, 2
    X86_AT(c, 0xfe0efu);
    s8(c, 4, 0x2u);
    // 0fe0f1  call 0xfe2c8
    X86_AT(c, 0xfe0f1u);
    push32(c, 0xfe0f6u); f_000fe2c8(c); X86_RET(c, 0xfe0f6u);
    X86_TICK(c, 31);
    // 0fe0f6  movzx eax, al
    X86_AT(c, 0xfe0f6u);
    c.r[0] = g8(c, 0);
    // 0fe0f9  pop edx
    X86_AT(c, 0xfe0f9u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0fe0fa  pop ecx
    X86_AT(c, 0xfe0fau);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 0fe0fb  pop esi
    X86_AT(c, 0xfe0fbu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0fe0fc  leave 
    X86_AT(c, 0xfe0fcu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fe0fd  ret 
    X86_AT(c, 0xfe0fdu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe0dfu, "ran off the end of a function");
}
void f_000fe0fe(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0fe0fe  mov ah, 3
    X86_AT(c, 0xfe0feu);
    s8(c, 4, 0x3u);
    // 0fe100  call 0xfe2c8
    X86_AT(c, 0xfe100u);
    push32(c, 0xfe105u); f_000fe2c8(c); X86_RET(c, 0xfe105u);
    X86_TICK(c, 13);
    // 0fe105  movzx eax, al
    X86_AT(c, 0xfe105u);
    c.r[0] = g8(c, 0);
    // 0fe108  ret 
    X86_AT(c, 0xfe108u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe0feu, "ran off the end of a function");
}
void f_000fe114(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0fe114  mov ah, 5
    X86_AT(c, 0xfe114u);
    s8(c, 4, 0x5u);
    // 0fe116  call 0xfe2c8
    X86_AT(c, 0xfe116u);
    push32(c, 0xfe11bu); f_000fe2c8(c); X86_RET(c, 0xfe11bu);
    X86_TICK(c, 13);
    // 0fe11b  movzx eax, al
    X86_AT(c, 0xfe11bu);
    c.r[0] = g8(c, 0);
    // 0fe11e  ret 
    X86_AT(c, 0xfe11eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe114u, "ran off the end of a function");
}
void f_000fe11f(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0fe11f  push es
    X86_AT(c, 0xfe11fu);
    push32(c, c.sreg[0]);
    // 0fe120  push esi
    X86_AT(c, 0xfe120u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0fe121  push ebx
    X86_AT(c, 0xfe121u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0fe122  push ecx
    X86_AT(c, 0xfe122u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0fe123  push edx
    X86_AT(c, 0xfe123u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0fe124  mov ah, 6
    X86_AT(c, 0xfe124u);
    s8(c, 4, 0x6u);
    // 0fe126  call 0xfe2c8
    X86_AT(c, 0xfe126u);
    push32(c, 0xfe12bu); f_000fe2c8(c); X86_RET(c, 0xfe12bu);
    X86_TICK(c, 32);
    // 0fe12b  mov eax, esi
    X86_AT(c, 0xfe12bu);
    c.r[0] = c.r[6];
    // 0fe12d  pop edx
    X86_AT(c, 0xfe12du);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0fe12e  pop ecx
    X86_AT(c, 0xfe12eu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 0fe12f  pop ebx
    X86_AT(c, 0xfe12fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0fe130  pop esi
    X86_AT(c, 0xfe130u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0fe131  pop es
    X86_AT(c, 0xfe131u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0fe132  ret 
    X86_AT(c, 0xfe132u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe11fu, "ran off the end of a function");
}
void f_000fe1bb(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0fe1bb  enter 0, 0
    X86_AT(c, 0xfe1bbu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0fe1bf  push edx
    X86_AT(c, 0xfe1bfu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0fe1c0  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xfe1c0u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0fe1c3  cmp dl, 0
    X86_AT(c, 0xfe1c3u);
    (void)x86_sub(c, g8(c, 2), 0x0u, 0, 1);
    // 0fe1c6  je 0xfe1ca
    X86_AT(c, 0xfe1c6u);
    if (x86_cc(c, 4)) { goto L_fe1ca; }
    X86_TICK(c, 2);
    // 0fe1c8  mov dl, 0xff
    X86_AT(c, 0xfe1c8u);
    s8(c, 2, 0xFFu);
L_fe1ca:
    X86_TICK(c, 9);
    // 0fe1ca  mov ah, 8
    X86_AT(c, 0xfe1cau);
    s8(c, 4, 0x8u);
    // 0fe1cc  call 0xfe2c8
    X86_AT(c, 0xfe1ccu);
    push32(c, 0xfe1d1u); f_000fe2c8(c); X86_RET(c, 0xfe1d1u);
    X86_TICK(c, 23);
    // 0fe1d1  movzx eax, al
    X86_AT(c, 0xfe1d1u);
    c.r[0] = g8(c, 0);
    // 0fe1d4  pop edx
    X86_AT(c, 0xfe1d4u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0fe1d5  leave 
    X86_AT(c, 0xfe1d5u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fe1d6  ret 
    X86_AT(c, 0xfe1d6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe1bbu, "ran off the end of a function");
}
void f_000fe1d7(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0fe1d7  enter 0, 0
    X86_AT(c, 0xfe1d7u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0fe1db  push edx
    X86_AT(c, 0xfe1dbu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0fe1dc  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xfe1dcu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0fe1df  mov ah, 9
    X86_AT(c, 0xfe1dfu);
    s8(c, 4, 0x9u);
    // 0fe1e1  call 0xfe2c8
    X86_AT(c, 0xfe1e1u);
    push32(c, 0xfe1e6u); f_000fe2c8(c); X86_RET(c, 0xfe1e6u);
    X86_TICK(c, 23);
    // 0fe1e6  movzx eax, al
    X86_AT(c, 0xfe1e6u);
    c.r[0] = g8(c, 0);
    // 0fe1e9  pop edx
    X86_AT(c, 0xfe1e9u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0fe1ea  leave 
    X86_AT(c, 0xfe1eau);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fe1eb  ret 
    X86_AT(c, 0xfe1ebu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe1d7u, "ran off the end of a function");
}
void f_000fe1ec(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0fe1ec  enter 0, 0
    X86_AT(c, 0xfe1ecu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0fe1f0  push ebx
    X86_AT(c, 0xfe1f0u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0fe1f1  push edx
    X86_AT(c, 0xfe1f1u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0fe1f2  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0xfe1f2u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0fe1f5  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xfe1f5u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0fe1f8  mov ah, 0x10
    X86_AT(c, 0xfe1f8u);
    s8(c, 4, 0x10u);
    // 0fe1fa  call 0xfe2c8
    X86_AT(c, 0xfe1fau);
    push32(c, 0xfe1ffu); f_000fe2c8(c); X86_RET(c, 0xfe1ffu);
    X86_TICK(c, 27);
    // 0fe1ff  movzx eax, al
    X86_AT(c, 0xfe1ffu);
    c.r[0] = g8(c, 0);
    // 0fe202  pop edx
    X86_AT(c, 0xfe202u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0fe203  pop ebx
    X86_AT(c, 0xfe203u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0fe204  leave 
    X86_AT(c, 0xfe204u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fe205  ret 
    X86_AT(c, 0xfe205u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe1ecu, "ran off the end of a function");
}
void f_000fe206(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0fe206  enter 0, 0
    X86_AT(c, 0xfe206u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0fe20a  push ebx
    X86_AT(c, 0xfe20au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0fe20b  push edx
    X86_AT(c, 0xfe20bu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0fe20c  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0xfe20cu);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0fe20f  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xfe20fu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0fe212  mov ah, 0x11
    X86_AT(c, 0xfe212u);
    s8(c, 4, 0x11u);
    // 0fe214  call 0xfe2c8
    X86_AT(c, 0xfe214u);
    push32(c, 0xfe219u); f_000fe2c8(c); X86_RET(c, 0xfe219u);
    X86_TICK(c, 27);
    // 0fe219  movzx eax, al
    X86_AT(c, 0xfe219u);
    c.r[0] = g8(c, 0);
    // 0fe21c  pop edx
    X86_AT(c, 0xfe21cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0fe21d  pop ebx
    X86_AT(c, 0xfe21du);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0fe21e  leave 
    X86_AT(c, 0xfe21eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fe21f  ret 
    X86_AT(c, 0xfe21fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe206u, "ran off the end of a function");
}
void f_000fe220(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0fe220  enter 0, 0
    X86_AT(c, 0xfe220u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0fe224  push ebx
    X86_AT(c, 0xfe224u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0fe225  push edx
    X86_AT(c, 0xfe225u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0fe226  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0xfe226u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0fe229  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xfe229u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0fe22c  mov ah, 0x12
    X86_AT(c, 0xfe22cu);
    s8(c, 4, 0x12u);
    // 0fe22e  call 0xfe2c8
    X86_AT(c, 0xfe22eu);
    push32(c, 0xfe233u); f_000fe2c8(c); X86_RET(c, 0xfe233u);
    X86_TICK(c, 27);
    // 0fe233  movzx eax, al
    X86_AT(c, 0xfe233u);
    c.r[0] = g8(c, 0);
    // 0fe236  pop edx
    X86_AT(c, 0xfe236u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0fe237  pop ebx
    X86_AT(c, 0xfe237u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0fe238  leave 
    X86_AT(c, 0xfe238u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fe239  ret 
    X86_AT(c, 0xfe239u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe220u, "ran off the end of a function");
}
void f_000fe23a(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0fe23a  enter 0, 0
    X86_AT(c, 0xfe23au);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0fe23e  push ebx
    X86_AT(c, 0xfe23eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0fe23f  push edx
    X86_AT(c, 0xfe23fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0fe240  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0xfe240u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0fe243  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xfe243u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0fe246  mov ah, 0x13
    X86_AT(c, 0xfe246u);
    s8(c, 4, 0x13u);
    // 0fe248  call 0xfe2c8
    X86_AT(c, 0xfe248u);
    push32(c, 0xfe24du); f_000fe2c8(c); X86_RET(c, 0xfe24du);
    X86_TICK(c, 27);
    // 0fe24d  movzx eax, al
    X86_AT(c, 0xfe24du);
    c.r[0] = g8(c, 0);
    // 0fe250  pop edx
    X86_AT(c, 0xfe250u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0fe251  pop ebx
    X86_AT(c, 0xfe251u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0fe252  leave 
    X86_AT(c, 0xfe252u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fe253  ret 
    X86_AT(c, 0xfe253u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe23au, "ran off the end of a function");
}
void f_000fe254(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0fe254  enter 0, 0
    X86_AT(c, 0xfe254u);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0fe258  push ebx
    X86_AT(c, 0xfe258u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0fe259  push edx
    X86_AT(c, 0xfe259u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0fe25a  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0xfe25au);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0fe25d  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xfe25du);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0fe260  mov ah, 0x14
    X86_AT(c, 0xfe260u);
    s8(c, 4, 0x14u);
    // 0fe262  call 0xfe2c8
    X86_AT(c, 0xfe262u);
    push32(c, 0xfe267u); f_000fe2c8(c); X86_RET(c, 0xfe267u);
    X86_TICK(c, 27);
    // 0fe267  movzx eax, al
    X86_AT(c, 0xfe267u);
    c.r[0] = g8(c, 0);
    // 0fe26a  pop edx
    X86_AT(c, 0xfe26au);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0fe26b  pop ebx
    X86_AT(c, 0xfe26bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0fe26c  leave 
    X86_AT(c, 0xfe26cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fe26d  ret 
    X86_AT(c, 0xfe26du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe254u, "ran off the end of a function");
}
void f_000fe26e(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0fe26e  enter 0, 0
    X86_AT(c, 0xfe26eu);
    x86_enter(c, 0x0u, 0x0u, 4);
    // 0fe272  push ebx
    X86_AT(c, 0xfe272u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0fe273  push edx
    X86_AT(c, 0xfe273u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0fe274  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0xfe274u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0fe277  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xfe277u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0fe27a  mov ah, 0x20
    X86_AT(c, 0xfe27au);
    s8(c, 4, 0x20u);
    // 0fe27c  call 0xfe2c8
    X86_AT(c, 0xfe27cu);
    push32(c, 0xfe281u); f_000fe2c8(c); X86_RET(c, 0xfe281u);
    X86_TICK(c, 27);
    // 0fe281  movzx eax, al
    X86_AT(c, 0xfe281u);
    c.r[0] = g8(c, 0);
    // 0fe284  pop edx
    X86_AT(c, 0xfe284u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0fe285  pop ebx
    X86_AT(c, 0xfe285u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0fe286  leave 
    X86_AT(c, 0xfe286u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fe287  ret 
    X86_AT(c, 0xfe287u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe26eu, "ran off the end of a function");
}
void f_000fe2c8(X86Cpu& c) {
    X86_TICK(c, 44);
    // 0fe2c8  push gs
    X86_AT(c, 0xfe2c8u);
    push32(c, c.sreg[5]);
    // 0fe2ca  push fs
    X86_AT(c, 0xfe2cau);
    push32(c, c.sreg[4]);
    // 0fe2cc  push es
    X86_AT(c, 0xfe2ccu);
    push32(c, c.sreg[0]);
    // 0fe2cd  push ds
    X86_AT(c, 0xfe2cdu);
    push32(c, c.sreg[3]);
    // 0fe2ce  pushal 
    X86_AT(c, 0xfe2ceu);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0fe2cf  pushfd 
    X86_AT(c, 0xfe2cfu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0fe2d0  mov ebp, esp
    X86_AT(c, 0xfe2d0u);
    c.r[5] = c.r[4];
    // 0fe2d2  movzx ebx, ah
    X86_AT(c, 0xfe2d2u);
    c.r[3] = g8(c, 4);
    // 0fe2d5  call dword ptr cs:[ebx*4 + 0xfe2e6]
    X86_AT(c, 0xfe2d5u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xFE2E6u))); push32(c, 0xfe2ddu);
      switch (t) {
      case 0xfe392u: f_000fe392(c); break;
      case 0xfe397u: f_000fe397(c); break;
      case 0xfe407u: f_000fe407(c); break;
      case 0xfe445u: f_000fe445(c); break;
      case 0xfe4c5u: f_000fe4c5(c); break;
      case 0xfe4dau: f_000fe4da(c); break;
      case 0xfe4eeu: f_000fe4ee(c); break;
      case 0xfe4fdu: f_000fe4fd(c); break;
      case 0xfe545u: f_000fe545(c); break;
      case 0xfe561u: f_000fe561(c); break;
      case 0xfe57du: f_000fe57d(c); break;
      case 0xfe5a3u: f_000fe5a3(c); break;
      case 0xfe5bfu: f_000fe5bf(c); break;
      case 0xfe606u: f_000fe606(c); break;
      case 0xfe62cu: f_000fe62c(c); break;
      case 0xfe652u: f_000fe652(c); break;
      case 0xfe678u: f_000fe678(c); break;
      case 0xfe69eu: f_000fe69e(c); break;
      case 0xfe6c4u: f_000fe6c4(c); break;
      case 0xfe6d3u: f_000fe6d3(c); break;
      case 0xfe70fu: f_000fe70f(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0xfe2ddu); }
    X86_TICK(c, 56);
    // 0fe2dd  popfd 
    X86_AT(c, 0xfe2ddu);
    x86_popfd(c, 4);
    // 0fe2de  popal 
    X86_AT(c, 0xfe2deu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0fe2df  pop ds
    X86_AT(c, 0xfe2dfu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0fe2e0  pop es
    X86_AT(c, 0xfe2e0u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0fe2e1  pop fs
    X86_AT(c, 0xfe2e1u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0fe2e3  pop gs
    X86_AT(c, 0xfe2e3u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0fe2e5  ret 
    X86_AT(c, 0xfe2e5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe2c8u, "ran off the end of a function");
}
void f_000fe392(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0fe392  mov byte ptr [ebp + 0x20], 1
    X86_AT(c, 0xfe392u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x1u);
    // 0fe396  ret 
    X86_AT(c, 0xfe396u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe392u, "ran off the end of a function");
}
void f_000fe397(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0fe397  pushfd 
    X86_AT(c, 0xfe397u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0fe398  cld 
    X86_AT(c, 0xfe398u);
    c.fl &= ~X86_DF;
    // 0fe399  cli 
    X86_AT(c, 0xfe399u);
    c.fl &= ~X86_IF;
    // 0fe39a  call 0xffd00
    X86_AT(c, 0xfe39au);
    push32(c, 0xfe39fu); f_000ffd00(c); X86_RET(c, 0xfe39fu);
    X86_TICK(c, 7);
    // 0fe39f  call 0xff63c
    X86_AT(c, 0xfe39fu);
    push32(c, 0xfe3a4u); f_000ff63c(c); X86_RET(c, 0xfe3a4u);
    X86_TICK(c, 7);
    // 0fe3a4  call 0xff6c3
    X86_AT(c, 0xfe3a4u);
    push32(c, 0xfe3a9u); f_000ff6c3(c); X86_RET(c, 0xfe3a9u);
    X86_TICK(c, 7);
    // 0fe3a9  call 0xff717
    X86_AT(c, 0xfe3a9u);
    push32(c, 0xfe3aeu); f_000ff717(c); X86_RET(c, 0xfe3aeu);
    X86_TICK(c, 7);
    // 0fe3ae  call 0xfe948
    X86_AT(c, 0xfe3aeu);
    push32(c, 0xfe3b3u); f_000fe948(c); X86_RET(c, 0xfe3b3u);
    X86_TICK(c, 7);
    // 0fe3b3  call 0xfe822
    X86_AT(c, 0xfe3b3u);
    push32(c, 0xfe3b8u); f_000fe822(c); X86_RET(c, 0xfe3b8u);
    X86_TICK(c, 7);
    // 0fe3b8  call 0xfe882
    X86_AT(c, 0xfe3b8u);
    push32(c, 0xfe3bdu); f_000fe882(c); X86_RET(c, 0xfe3bdu);
    X86_TICK(c, 7);
    // 0fe3bd  call 0xfe8a3
    X86_AT(c, 0xfe3bdu);
    push32(c, 0xfe3c2u); f_000fe8a3(c); X86_RET(c, 0xfe3c2u);
    X86_TICK(c, 7);
    // 0fe3c2  call 0xfe903
    X86_AT(c, 0xfe3c2u);
    push32(c, 0xfe3c7u); f_000fe903(c); X86_RET(c, 0xfe3c7u);
    X86_TICK(c, 7);
    // 0fe3c7  call 0xff452
    X86_AT(c, 0xfe3c7u);
    push32(c, 0xfe3ccu); f_000ff452(c); X86_RET(c, 0xfe3ccu);
    X86_TICK(c, 5);
    // 0fe3cc  jb 0xfe402
    X86_AT(c, 0xfe3ccu);
    if (x86_cc(c, 2)) { goto L_fe402; }
    X86_TICK(c, 12);
    // 0fe3ce  cmp byte ptr [0xdf0c9], 0
    X86_AT(c, 0xfe3ceu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDF0C9u))), 0x0u, 0, 1);
    // 0fe3d5  jne 0xfe3e8
    X86_AT(c, 0xfe3d5u);
    if (x86_cc(c, 5)) { goto L_fe3e8; }
    X86_TICK(c, 7);
    // 0fe3d7  call 0xff55e
    X86_AT(c, 0xfe3d7u);
    push32(c, 0xfe3dcu); f_000ff55e(c); X86_RET(c, 0xfe3dcu);
    X86_TICK(c, 11);
    // 0fe3dc  mov al, byte ptr [0xdee85]
    X86_AT(c, 0xfe3dcu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xDEE85u))));
    // 0fe3e1  call 0xff8df
    X86_AT(c, 0xfe3e1u);
    push32(c, 0xfe3e6u); f_000ff8df(c); X86_RET(c, 0xfe3e6u);
    X86_TICK(c, 7);
    // 0fe3e6  jmp 0xfe3fc
    X86_AT(c, 0xfe3e6u);
    goto L_fe3fc;
L_fe3e8:
    X86_TICK(c, 7);
    // 0fe3e8  call 0xff4e2
    X86_AT(c, 0xfe3e8u);
    push32(c, 0xfe3edu); f_000ff4e2(c); X86_RET(c, 0xfe3edu);
    X86_TICK(c, 11);
    // 0fe3ed  mov al, byte ptr [0xdee85]
    X86_AT(c, 0xfe3edu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xDEE85u))));
    // 0fe3f2  call 0xff8df
    X86_AT(c, 0xfe3f2u);
    push32(c, 0xfe3f7u); f_000ff8df(c); X86_RET(c, 0xfe3f7u);
    X86_TICK(c, 7);
    // 0fe3f7  call 0xff803
    X86_AT(c, 0xfe3f7u);
    push32(c, 0xfe3fcu); f_000ff803(c); X86_RET(c, 0xfe3fcu);
L_fe3fc:
    X86_TICK(c, 18);
    // 0fe3fc  popfd 
    X86_AT(c, 0xfe3fcu);
    x86_popfd(c, 4);
    // 0fe3fd  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0xfe3fdu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 0fe401  ret 
    X86_AT(c, 0xfe401u);
    c.eip = pop32(c); return;
L_fe402:
    X86_TICK(c, 12);
    // 0fe402  mov byte ptr [ebp + 0x20], 1
    X86_AT(c, 0xfe402u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x1u);
    // 0fe406  ret 
    X86_AT(c, 0xfe406u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe397u, "ran off the end of a function");
}
void f_000fe407(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0fe407  push ds
    X86_AT(c, 0xfe407u);
    push32(c, c.sreg[3]);
    // 0fe408  pop es
    X86_AT(c, 0xfe408u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0fe409  call 0xfe72d
    X86_AT(c, 0xfe409u);
    push32(c, 0xfe40eu); f_000fe72d(c); X86_RET(c, 0xfe40eu);
L_fe40e:
    X86_TICK(c, 19);
    // 0fe40e  lea esi, [0xdf0f5]
    X86_AT(c, 0xfe40eu);
    c.r[6] = (uint32_t)(0xDF0F5u);
    // 0fe414  mov ax, word ptr [esi + 0x10]
    X86_AT(c, 0xfe414u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u))));
    // 0fe418  add ax, word ptr [esi + 0x30]
    X86_AT(c, 0xfe418u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x30u))), 0, 2)); }
    // 0fe41c  or ax, ax
    X86_AT(c, 0xfe41cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | (c.r[0] & 0xFFFFu), 2)); }
    // 0fe41f  jne 0xfe40e
    X86_AT(c, 0xfe41fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xfe40eu); goto L_fe40e; }
    X86_TICK(c, 7);
    // 0fe421  call 0xff7e3
    X86_AT(c, 0xfe421u);
    push32(c, 0xfe426u); f_000ff7e3(c); X86_RET(c, 0xfe426u);
    X86_TICK(c, 7);
    // 0fe426  call 0xff598
    X86_AT(c, 0xfe426u);
    push32(c, 0xfe42bu); f_000ff598(c); X86_RET(c, 0xfe42bu);
    X86_TICK(c, 12);
    // 0fe42b  cmp byte ptr [0xdf0c9], 0
    X86_AT(c, 0xfe42bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDF0C9u))), 0x0u, 0, 1);
    // 0fe432  jne 0xfe43b
    X86_AT(c, 0xfe432u);
    if (x86_cc(c, 5)) { goto L_fe43b; }
    X86_TICK(c, 7);
    // 0fe434  call 0xff613
    X86_AT(c, 0xfe434u);
    push32(c, 0xfe439u); f_000ff613(c); X86_RET(c, 0xfe439u);
    X86_TICK(c, 7);
    // 0fe439  jmp 0xfe440
    X86_AT(c, 0xfe439u);
    goto L_fe440;
L_fe43b:
    X86_TICK(c, 7);
    // 0fe43b  call 0xff5d4
    X86_AT(c, 0xfe43bu);
    push32(c, 0xfe440u); f_000ff5d4(c); X86_RET(c, 0xfe440u);
L_fe440:
    X86_TICK(c, 12);
    // 0fe440  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0xfe440u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 0fe444  ret 
    X86_AT(c, 0xfe444u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe407u, "ran off the end of a function");
}
void f_000fe445(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0fe445  cmp byte ptr [0xdee86], 0
    X86_AT(c, 0xfe445u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDEE86u))), 0x0u, 0, 1);
    // 0fe44c  jne 0xfe4c0
    X86_AT(c, 0xfe44cu);
    if (x86_cc(c, 5)) { goto L_fe4c0; }
    X86_TICK(c, 47);
    // 0fe44e  mov dl, byte ptr [ebp + 0x18]
    X86_AT(c, 0xfe44eu);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 0fe451  mov byte ptr [0xdee84], dl
    X86_AT(c, 0xfe451u);
    wr8((c.sbase[3] + (uint32_t)(0xDEE84u)), g8(c, 2));
    // 0fe457  mov byte ptr [0xdee78], dl
    X86_AT(c, 0xfe457u);
    wr8((c.sbase[3] + (uint32_t)(0xDEE78u)), g8(c, 2));
    // 0fe45d  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0xfe45du);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0fe460  mov ax, word ptr [ebp + 0x24]
    X86_AT(c, 0xfe460u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u))));
    // 0fe464  mov dword ptr [0xdee61], esi
    X86_AT(c, 0xfe464u);
    wr32((c.sbase[3] + (uint32_t)(0xDEE61u)), c.r[6]);
    // 0fe46a  mov word ptr [0xdee65], ax
    X86_AT(c, 0xfe46au);
    wr16((c.sbase[3] + (uint32_t)(0xDEE65u)), (c.r[0] & 0xFFFFu));
    // 0fe470  mov dword ptr [0xdee67], esi
    X86_AT(c, 0xfe470u);
    wr32((c.sbase[3] + (uint32_t)(0xDEE67u)), c.r[6]);
    // 0fe476  mov word ptr [0xdee6b], ax
    X86_AT(c, 0xfe476u);
    wr16((c.sbase[3] + (uint32_t)(0xDEE6Bu)), (c.r[0] & 0xFFFFu));
    // 0fe47c  mov ecx, dword ptr [ebp + 0x1c]
    X86_AT(c, 0xfe47cu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 0fe47f  add ecx, esi
    X86_AT(c, 0xfe47fu);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[6], 0, 4); }
    // 0fe481  mov dword ptr [0xdee6d], ecx
    X86_AT(c, 0xfe481u);
    wr32((c.sbase[3] + (uint32_t)(0xDEE6Du)), c.r[1]);
    // 0fe487  mov word ptr [0xdee71], ax
    X86_AT(c, 0xfe487u);
    wr16((c.sbase[3] + (uint32_t)(0xDEE71u)), (c.r[0] & 0xFFFFu));
    // 0fe48d  mov word ptr [0xdee82], 0
    X86_AT(c, 0xfe48du);
    wr16((c.sbase[3] + (uint32_t)(0xDEE82u)), 0x0u);
    // 0fe496  mov word ptr [0xdee73], 0
    X86_AT(c, 0xfe496u);
    wr16((c.sbase[3] + (uint32_t)(0xDEE73u)), 0x0u);
    // 0fe49f  mov word ptr [0xdee75], 0
    X86_AT(c, 0xfe49fu);
    wr16((c.sbase[3] + (uint32_t)(0xDEE75u)), 0x0u);
    // 0fe4a8  call 0xfe809
    X86_AT(c, 0xfe4a8u);
    push32(c, 0xfe4adu); f_000fe809(c); X86_RET(c, 0xfe4adu);
    X86_TICK(c, 16);
    // 0fe4ad  mov byte ptr [0xdee8d], 0xff
    X86_AT(c, 0xfe4adu);
    wr8((c.sbase[3] + (uint32_t)(0xDEE8Du)), 0xFFu);
    // 0fe4b4  mov byte ptr [0xdee86], 0xff
    X86_AT(c, 0xfe4b4u);
    wr8((c.sbase[3] + (uint32_t)(0xDEE86u)), 0xFFu);
    // 0fe4bb  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0xfe4bbu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 0fe4bf  ret 
    X86_AT(c, 0xfe4bfu);
    c.eip = pop32(c); return;
L_fe4c0:
    X86_TICK(c, 12);
    // 0fe4c0  mov byte ptr [ebp + 0x20], 2
    X86_AT(c, 0xfe4c0u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x2u);
    // 0fe4c4  ret 
    X86_AT(c, 0xfe4c4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe445u, "ran off the end of a function");
}
void f_000fe4c5(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0fe4c5  call 0xfe72d
    X86_AT(c, 0xfe4c5u);
    push32(c, 0xfe4cau); f_000fe72d(c); X86_RET(c, 0xfe4cau);
    X86_TICK(c, 5);
    // 0fe4ca  jb 0xfe4d5
    X86_AT(c, 0xfe4cau);
    if (x86_cc(c, 2)) { goto L_fe4d5; }
    X86_TICK(c, 12);
    // 0fe4d0  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0xfe4d0u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 0fe4d4  ret 
    X86_AT(c, 0xfe4d4u);
    c.eip = pop32(c); return;
L_fe4d5:
    X86_TICK(c, 12);
    // 0fe4d5  mov byte ptr [ebp + 0x20], 1
    X86_AT(c, 0xfe4d5u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x1u);
    // 0fe4d9  ret 
    X86_AT(c, 0xfe4d9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe4c5u, "ran off the end of a function");
}
void f_000fe4da(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0fe4da  mov byte ptr [0xdee88], 0xff
    X86_AT(c, 0xfe4dau);
    wr8((c.sbase[3] + (uint32_t)(0xDEE88u)), 0xFFu);
    // 0fe4e1  mov byte ptr [0xdee8f], 0xff
    X86_AT(c, 0xfe4e1u);
    wr8((c.sbase[3] + (uint32_t)(0xDEE8Fu)), 0xFFu);
    // 0fe4e8  call 0xfe7b8
    X86_AT(c, 0xfe4e8u);
    push32(c, 0xfe4edu); f_000fe7b8(c); X86_RET(c, 0xfe4edu);
    X86_TICK(c, 10);
    // 0fe4ed  ret 
    X86_AT(c, 0xfe4edu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe4dau, "ran off the end of a function");
}
void f_000fe4ee(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0fe4ee  mov byte ptr [0xdee88], 0
    X86_AT(c, 0xfe4eeu);
    wr8((c.sbase[3] + (uint32_t)(0xDEE88u)), 0x0u);
    // 0fe4f5  mov byte ptr [0xdee8e], 0xff
    X86_AT(c, 0xfe4f5u);
    wr8((c.sbase[3] + (uint32_t)(0xDEE8Eu)), 0xFFu);
    // 0fe4fc  ret 
    X86_AT(c, 0xfe4fcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe4eeu, "ran off the end of a function");
}
void f_000fe4fd(X86Cpu& c) {
    X86_TICK(c, 50);
    // 0fe4fd  mov byte ptr [0xdf0e6], 0xff
    X86_AT(c, 0xfe4fdu);
    wr8((c.sbase[3] + (uint32_t)(0xDF0E6u)), 0xFFu);
    // 0fe504  mov ax, word ptr [0xdee65]
    X86_AT(c, 0xfe504u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xDEE65u))));
    // 0fe50a  mov word ptr [ebp + 0x28], ax
    X86_AT(c, 0xfe50au);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0x28u)), (c.r[0] & 0xFFFFu));
    // 0fe50e  mov eax, dword ptr [0xdee61]
    X86_AT(c, 0xfe50eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDEE61u)));
    // 0fe513  mov dword ptr [ebp + 8], eax
    X86_AT(c, 0xfe513u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)), c.r[0]);
    // 0fe516  mov ax, word ptr [0xdee73]
    X86_AT(c, 0xfe516u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xDEE73u))));
    // 0fe51c  mov word ptr [ebp + 0x14], ax
    X86_AT(c, 0xfe51cu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)), (c.r[0] & 0xFFFFu));
    // 0fe520  mov ax, word ptr [0xdee75]
    X86_AT(c, 0xfe520u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xDEE75u))));
    // 0fe526  mov word ptr [ebp + 0x1c], ax
    X86_AT(c, 0xfe526u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)), (c.r[0] & 0xFFFFu));
    // 0fe52a  mov al, byte ptr [0xdee79]
    X86_AT(c, 0xfe52au);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xDEE79u))));
    // 0fe52f  mov ah, byte ptr [0xdee86]
    X86_AT(c, 0xfe52fu);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(0xDEE86u))));
    // 0fe535  mov word ptr [ebp + 0x18], ax
    X86_AT(c, 0xfe535u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)), (c.r[0] & 0xFFFFu));
    // 0fe539  mov byte ptr [0xdf0e6], 0
    X86_AT(c, 0xfe539u);
    wr8((c.sbase[3] + (uint32_t)(0xDF0E6u)), 0x0u);
    // 0fe540  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0xfe540u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 0fe544  ret 
    X86_AT(c, 0xfe544u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe4fdu, "ran off the end of a function");
}
void f_000fe545(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0fe545  mov dl, byte ptr [ebp + 0x18]
    X86_AT(c, 0xfe545u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 0fe548  inc dl
    X86_AT(c, 0xfe548u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 0fe54a  cmp dl, 8
    X86_AT(c, 0xfe54au);
    (void)x86_sub(c, g8(c, 2), 0x8u, 0, 1);
    // 0fe54d  ja 0xfe55c
    X86_AT(c, 0xfe54du);
    if (x86_cc(c, 7)) { goto L_fe55c; }
    X86_TICK(c, 16);
    // 0fe54f  dec dl
    X86_AT(c, 0xfe54fu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 0fe551  mov byte ptr [0xdee92], dl
    X86_AT(c, 0xfe551u);
    wr8((c.sbase[3] + (uint32_t)(0xDEE92u)), g8(c, 2));
    // 0fe557  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0xfe557u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 0fe55b  ret 
    X86_AT(c, 0xfe55bu);
    c.eip = pop32(c); return;
L_fe55c:
    X86_TICK(c, 12);
    // 0fe55c  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0xfe55cu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 0fe560  ret 
    X86_AT(c, 0xfe560u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe545u, "ran off the end of a function");
}
void f_000fe561(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0fe561  mov dl, byte ptr [ebp + 0x18]
    X86_AT(c, 0xfe561u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 0fe564  inc dl
    X86_AT(c, 0xfe564u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 0fe566  cmp dl, 1
    X86_AT(c, 0xfe566u);
    (void)x86_sub(c, g8(c, 2), 0x1u, 0, 1);
    // 0fe569  ja 0xfe578
    X86_AT(c, 0xfe569u);
    if (x86_cc(c, 7)) { goto L_fe578; }
    X86_TICK(c, 16);
    // 0fe56b  dec dl
    X86_AT(c, 0xfe56bu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 0fe56d  mov byte ptr [0xdee89], dl
    X86_AT(c, 0xfe56du);
    wr8((c.sbase[3] + (uint32_t)(0xDEE89u)), g8(c, 2));
    // 0fe573  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0xfe573u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 0fe577  ret 
    X86_AT(c, 0xfe577u);
    c.eip = pop32(c); return;
L_fe578:
    X86_TICK(c, 12);
    // 0fe578  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0xfe578u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 0fe57c  ret 
    X86_AT(c, 0xfe57cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe561u, "ran off the end of a function");
}
void f_000fe57d(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0fe57d  mov dx, word ptr [ebp + 0x18]
    X86_AT(c, 0xfe57du);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 0fe581  cmp dx, 0xfa
    X86_AT(c, 0xfe581u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xFAu, 0, 2);
    // 0fe586  ja 0xfe59e
    X86_AT(c, 0xfe586u);
    if (x86_cc(c, 7)) { goto L_fe59e; }
    X86_TICK(c, 13);
    // 0fe588  mov al, dl
    X86_AT(c, 0xfe588u);
    s8(c, 0, g8(c, 2));
    // 0fe58a  mov byte ptr [0xdee85], al
    X86_AT(c, 0xfe58au);
    wr8((c.sbase[3] + (uint32_t)(0xDEE85u)), g8(c, 0));
    // 0fe58f  mov byte ptr [0xdee79], al
    X86_AT(c, 0xfe58fu);
    wr8((c.sbase[3] + (uint32_t)(0xDEE79u)), g8(c, 0));
    // 0fe594  call 0xff8df
    X86_AT(c, 0xfe594u);
    push32(c, 0xfe599u); f_000ff8df(c); X86_RET(c, 0xfe599u);
    X86_TICK(c, 12);
    // 0fe599  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0xfe599u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 0fe59d  ret 
    X86_AT(c, 0xfe59du);
    c.eip = pop32(c); return;
L_fe59e:
    X86_TICK(c, 12);
    // 0fe59e  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0xfe59eu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 0fe5a2  ret 
    X86_AT(c, 0xfe5a2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe57du, "ran off the end of a function");
}
void f_000fe5a3(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0fe5a3  mov dl, byte ptr [ebp + 0x18]
    X86_AT(c, 0xfe5a3u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 0fe5a6  inc dl
    X86_AT(c, 0xfe5a6u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 0fe5a8  cmp dl, 1
    X86_AT(c, 0xfe5a8u);
    (void)x86_sub(c, g8(c, 2), 0x1u, 0, 1);
    // 0fe5ab  ja 0xfe5ba
    X86_AT(c, 0xfe5abu);
    if (x86_cc(c, 7)) { goto L_fe5ba; }
    X86_TICK(c, 16);
    // 0fe5ad  dec dl
    X86_AT(c, 0xfe5adu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 0fe5af  mov byte ptr [0xdf0e6], dl
    X86_AT(c, 0xfe5afu);
    wr8((c.sbase[3] + (uint32_t)(0xDF0E6u)), g8(c, 2));
    // 0fe5b5  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0xfe5b5u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 0fe5b9  ret 
    X86_AT(c, 0xfe5b9u);
    c.eip = pop32(c); return;
L_fe5ba:
    X86_TICK(c, 12);
    // 0fe5ba  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0xfe5bau);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 0fe5be  ret 
    X86_AT(c, 0xfe5beu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe5a3u, "ran off the end of a function");
}
void f_000fe5bf(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0fe5bf  mov dl, byte ptr [ebp + 0x18]
    X86_AT(c, 0xfe5bfu);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 0fe5c2  inc dl
    X86_AT(c, 0xfe5c2u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_inc(c, v, 1)); }
    // 0fe5c4  cmp dl, 1
    X86_AT(c, 0xfe5c4u);
    (void)x86_sub(c, g8(c, 2), 0x1u, 0, 1);
    // 0fe5c7  ja 0xfe601
    X86_AT(c, 0xfe5c7u);
    if (x86_cc(c, 7)) { goto L_fe601; }
    X86_TICK(c, 14);
    // 0fe5c9  dec dl
    X86_AT(c, 0xfe5c9u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 0fe5cb  cmp byte ptr [0xdf0c9], 0
    X86_AT(c, 0xfe5cbu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDF0C9u))), 0x0u, 0, 1);
    // 0fe5d2  jne 0xfe5ec
    X86_AT(c, 0xfe5d2u);
    if (x86_cc(c, 5)) { goto L_fe5ec; }
    X86_TICK(c, 7);
    // 0fe5d4  and dl, dl
    X86_AT(c, 0xfe5d4u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & g8(c, 2), 1)); }
    // 0fe5d6  je 0xfe5e1
    X86_AT(c, 0xfe5d6u);
    if (x86_cc(c, 4)) { goto L_fe5e1; }
    X86_TICK(c, 9);
    // 0fe5d8  mov ah, 0x17
    X86_AT(c, 0xfe5d8u);
    s8(c, 4, 0x17u);
    // 0fe5da  call 0xfdf3c
    X86_AT(c, 0xfe5dau);
    push32(c, 0xfe5dfu); f_000fdf3c(c); X86_RET(c, 0xfe5dfu);
    X86_TICK(c, 7);
    // 0fe5df  jmp 0xfe5fc
    X86_AT(c, 0xfe5dfu);
    goto L_fe5fc;
L_fe5e1:
    X86_TICK(c, 11);
    // 0fe5e1  mov bl, 0
    X86_AT(c, 0xfe5e1u);
    s8(c, 3, 0x0u);
    // 0fe5e3  mov ah, 0x15
    X86_AT(c, 0xfe5e3u);
    s8(c, 4, 0x15u);
    // 0fe5e5  call 0xfdf3c
    X86_AT(c, 0xfe5e5u);
    push32(c, 0xfe5eau); f_000fdf3c(c); X86_RET(c, 0xfe5eau);
    X86_TICK(c, 7);
    // 0fe5ea  jmp 0xfe5fc
    X86_AT(c, 0xfe5eau);
    goto L_fe5fc;
L_fe5ec:
    X86_TICK(c, 7);
    // 0fe5ec  and dl, dl
    X86_AT(c, 0xfe5ecu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & g8(c, 2), 1)); }
    // 0fe5ee  je 0xfe5f7
    X86_AT(c, 0xfe5eeu);
    if (x86_cc(c, 4)) { goto L_fe5f7; }
    X86_TICK(c, 7);
    // 0fe5f0  call 0xff844
    X86_AT(c, 0xfe5f0u);
    push32(c, 0xfe5f5u); f_000ff844(c); X86_RET(c, 0xfe5f5u);
    X86_TICK(c, 7);
    // 0fe5f5  jmp 0xfe5fc
    X86_AT(c, 0xfe5f5u);
    goto L_fe5fc;
L_fe5f7:
    X86_TICK(c, 7);
    // 0fe5f7  call 0xff803
    X86_AT(c, 0xfe5f7u);
    push32(c, 0xfe5fcu); f_000ff803(c); X86_RET(c, 0xfe5fcu);
L_fe5fc:
    X86_TICK(c, 12);
    // 0fe5fc  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0xfe5fcu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 0fe600  ret 
    X86_AT(c, 0xfe600u);
    c.eip = pop32(c); return;
L_fe601:
    X86_TICK(c, 12);
    // 0fe601  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0xfe601u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 0fe605  ret 
    X86_AT(c, 0xfe605u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe5bfu, "ran off the end of a function");
}
void f_000fe606(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0fe606  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0xfe606u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 0fe609  mov al, byte ptr [ebp + 0x18]
    X86_AT(c, 0xfe609u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 0fe60c  cmp bl, 0x20
    X86_AT(c, 0xfe60cu);
    (void)x86_sub(c, g8(c, 3), 0x20u, 0, 1);
    // 0fe60f  jae 0xfe627
    X86_AT(c, 0xfe60fu);
    if (x86_cc(c, 3)) { goto L_fe627; }
    X86_TICK(c, 9);
    // 0fe611  inc al
    X86_AT(c, 0xfe611u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_inc(c, v, 1)); }
    // 0fe613  cmp al, 8
    X86_AT(c, 0xfe613u);
    (void)x86_sub(c, g8(c, 0), 0x8u, 0, 1);
    // 0fe615  ja 0xfe627
    X86_AT(c, 0xfe615u);
    if (x86_cc(c, 7)) { goto L_fe627; }
    X86_TICK(c, 19);
    // 0fe617  dec al
    X86_AT(c, 0xfe617u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0fe619  movzx ebx, bl
    X86_AT(c, 0xfe619u);
    c.r[3] = g8(c, 3);
    // 0fe61c  mov byte ptr [ebx + 0xdeec5], al
    X86_AT(c, 0xfe61cu);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDEEC5u)), g8(c, 0));
    // 0fe622  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0xfe622u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 0fe626  ret 
    X86_AT(c, 0xfe626u);
    c.eip = pop32(c); return;
L_fe627:
    X86_TICK(c, 12);
    // 0fe627  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0xfe627u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 0fe62b  ret 
    X86_AT(c, 0xfe62bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe606u, "ran off the end of a function");
}
void f_000fe62c(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0fe62c  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0xfe62cu);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 0fe62f  mov al, byte ptr [ebp + 0x18]
    X86_AT(c, 0xfe62fu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 0fe632  cmp bl, 0x20
    X86_AT(c, 0xfe632u);
    (void)x86_sub(c, g8(c, 3), 0x20u, 0, 1);
    // 0fe635  jae 0xfe64d
    X86_AT(c, 0xfe635u);
    if (x86_cc(c, 3)) { goto L_fe64d; }
    X86_TICK(c, 9);
    // 0fe637  inc al
    X86_AT(c, 0xfe637u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_inc(c, v, 1)); }
    // 0fe639  cmp al, 0x10
    X86_AT(c, 0xfe639u);
    (void)x86_sub(c, g8(c, 0), 0x10u, 0, 1);
    // 0fe63b  ja 0xfe64d
    X86_AT(c, 0xfe63bu);
    if (x86_cc(c, 7)) { goto L_fe64d; }
    X86_TICK(c, 19);
    // 0fe63d  dec al
    X86_AT(c, 0xfe63du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0fe63f  movzx ebx, bl
    X86_AT(c, 0xfe63fu);
    c.r[3] = g8(c, 3);
    // 0fe642  mov byte ptr [ebx + 0xdeee5], al
    X86_AT(c, 0xfe642u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDEEE5u)), g8(c, 0));
    // 0fe648  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0xfe648u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 0fe64c  ret 
    X86_AT(c, 0xfe64cu);
    c.eip = pop32(c); return;
L_fe64d:
    X86_TICK(c, 12);
    // 0fe64d  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0xfe64du);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 0fe651  ret 
    X86_AT(c, 0xfe651u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe62cu, "ran off the end of a function");
}
void f_000fe652(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0fe652  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0xfe652u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 0fe655  mov al, byte ptr [ebp + 0x18]
    X86_AT(c, 0xfe655u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 0fe658  cmp bl, 0x20
    X86_AT(c, 0xfe658u);
    (void)x86_sub(c, g8(c, 3), 0x20u, 0, 1);
    // 0fe65b  jae 0xfe673
    X86_AT(c, 0xfe65bu);
    if (x86_cc(c, 3)) { goto L_fe673; }
    X86_TICK(c, 9);
    // 0fe65d  inc al
    X86_AT(c, 0xfe65du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_inc(c, v, 1)); }
    // 0fe65f  cmp al, 1
    X86_AT(c, 0xfe65fu);
    (void)x86_sub(c, g8(c, 0), 0x1u, 0, 1);
    // 0fe661  ja 0xfe673
    X86_AT(c, 0xfe661u);
    if (x86_cc(c, 7)) { goto L_fe673; }
    X86_TICK(c, 19);
    // 0fe663  dec al
    X86_AT(c, 0xfe663u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0fe665  movzx ebx, bl
    X86_AT(c, 0xfe665u);
    c.r[3] = g8(c, 3);
    // 0fe668  mov byte ptr [ebx + 0xdeea5], al
    X86_AT(c, 0xfe668u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDEEA5u)), g8(c, 0));
    // 0fe66e  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0xfe66eu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 0fe672  ret 
    X86_AT(c, 0xfe672u);
    c.eip = pop32(c); return;
L_fe673:
    X86_TICK(c, 12);
    // 0fe673  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0xfe673u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 0fe677  ret 
    X86_AT(c, 0xfe677u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe652u, "ran off the end of a function");
}
void f_000fe678(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0fe678  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0xfe678u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 0fe67b  mov al, byte ptr [ebp + 0x18]
    X86_AT(c, 0xfe67bu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 0fe67e  cmp bl, 0x20
    X86_AT(c, 0xfe67eu);
    (void)x86_sub(c, g8(c, 3), 0x20u, 0, 1);
    // 0fe681  jae 0xfe699
    X86_AT(c, 0xfe681u);
    if (x86_cc(c, 3)) { goto L_fe699; }
    X86_TICK(c, 9);
    // 0fe683  add al, 0x28
    X86_AT(c, 0xfe683u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x28u, 0, 1)); }
    // 0fe685  cmp al, 0x50
    X86_AT(c, 0xfe685u);
    (void)x86_sub(c, g8(c, 0), 0x50u, 0, 1);
    // 0fe687  ja 0xfe699
    X86_AT(c, 0xfe687u);
    if (x86_cc(c, 7)) { goto L_fe699; }
    X86_TICK(c, 19);
    // 0fe689  sub al, 0x28
    X86_AT(c, 0xfe689u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x28u, 0, 1)); }
    // 0fe68b  movzx ebx, bl
    X86_AT(c, 0xfe68bu);
    c.r[3] = g8(c, 3);
    // 0fe68e  mov byte ptr [ebx + 0xdef25], al
    X86_AT(c, 0xfe68eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDEF25u)), g8(c, 0));
    // 0fe694  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0xfe694u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 0fe698  ret 
    X86_AT(c, 0xfe698u);
    c.eip = pop32(c); return;
L_fe699:
    X86_TICK(c, 12);
    // 0fe699  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0xfe699u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 0fe69d  ret 
    X86_AT(c, 0xfe69du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe678u, "ran off the end of a function");
}
void f_000fe69e(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0fe69e  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0xfe69eu);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 0fe6a1  mov al, byte ptr [ebp + 0x18]
    X86_AT(c, 0xfe6a1u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 0fe6a4  cmp bl, 0x20
    X86_AT(c, 0xfe6a4u);
    (void)x86_sub(c, g8(c, 3), 0x20u, 0, 1);
    // 0fe6a7  jae 0xfe6bf
    X86_AT(c, 0xfe6a7u);
    if (x86_cc(c, 3)) { goto L_fe6bf; }
    X86_TICK(c, 9);
    // 0fe6a9  add al, 0x28
    X86_AT(c, 0xfe6a9u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x28u, 0, 1)); }
    // 0fe6ab  cmp al, 0x50
    X86_AT(c, 0xfe6abu);
    (void)x86_sub(c, g8(c, 0), 0x50u, 0, 1);
    // 0fe6ad  ja 0xfe6bf
    X86_AT(c, 0xfe6adu);
    if (x86_cc(c, 7)) { goto L_fe6bf; }
    X86_TICK(c, 19);
    // 0fe6af  sub al, 0x28
    X86_AT(c, 0xfe6afu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x28u, 0, 1)); }
    // 0fe6b1  movzx ebx, bl
    X86_AT(c, 0xfe6b1u);
    c.r[3] = g8(c, 3);
    // 0fe6b4  mov byte ptr [ebx + 0xdef05], al
    X86_AT(c, 0xfe6b4u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDEF05u)), g8(c, 0));
    // 0fe6ba  mov byte ptr [ebp + 0x20], 0
    X86_AT(c, 0xfe6bau);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x0u);
    // 0fe6be  ret 
    X86_AT(c, 0xfe6beu);
    c.eip = pop32(c); return;
L_fe6bf:
    X86_TICK(c, 12);
    // 0fe6bf  mov byte ptr [ebp + 0x20], 3
    X86_AT(c, 0xfe6bfu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), 0x3u);
    // 0fe6c3  ret 
    X86_AT(c, 0xfe6c3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe69eu, "ran off the end of a function");
}
void f_000fe6c4(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0fe6c4  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0xfe6c4u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 0fe6c7  mov dl, byte ptr [ebp + 0x18]
    X86_AT(c, 0xfe6c7u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))));
    // 0fe6ca  call 0xffd82
    X86_AT(c, 0xfe6cau);
    push32(c, 0xfe6cfu); f_000ffd82(c); X86_RET(c, 0xfe6cfu);
    X86_TICK(c, 12);
    // 0fe6cf  mov byte ptr [ebp + 0x20], al
    X86_AT(c, 0xfe6cfu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), g8(c, 0));
    // 0fe6d2  ret 
    X86_AT(c, 0xfe6d2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe6c4u, "ran off the end of a function");
}
void f_000fe6d3(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0fe6d3  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0xfe6d3u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 0fe6d6  inc bl
    X86_AT(c, 0xfe6d6u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_inc(c, v, 1)); }
    // 0fe6d8  cmp bl, 8
    X86_AT(c, 0xfe6d8u);
    (void)x86_sub(c, g8(c, 3), 0x8u, 0, 1);
    // 0fe6db  ja 0xfe70b
    X86_AT(c, 0xfe6dbu);
    if (x86_cc(c, 7)) { goto L_fe70b; }
    X86_TICK(c, 13);
    // 0fe6dd  dec bl
    X86_AT(c, 0xfe6ddu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_dec(c, v, 1)); }
    // 0fe6df  mov ecx, dword ptr [ebp + 0x1c]
    X86_AT(c, 0xfe6dfu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 0fe6e2  cmp ecx, 0
    X86_AT(c, 0xfe6e2u);
    (void)x86_sub(c, c.r[1], 0x0u, 0, 4);
    // 0fe6e5  je 0xfe70b
    X86_AT(c, 0xfe6e5u);
    if (x86_cc(c, 4)) { goto L_fe70b; }
    X86_TICK(c, 12);
    // 0fe6e7  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0xfe6e7u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0fe6ea  mov al, byte ptr [0xdf0e6]
    X86_AT(c, 0xfe6eau);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xDF0E6u))));
    // 0fe6ef  mov byte ptr [0xdf0e6], 0xff
    X86_AT(c, 0xfe6efu);
    wr8((c.sbase[3] + (uint32_t)(0xDF0E6u)), 0xFFu);
    // 0fe6f6  push ax
    X86_AT(c, 0xfe6f6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
L_fe6f8:
    X86_TICK(c, 14);
    // 0fe6f8  lodsb al, byte ptr [esi]
    X86_AT(c, 0xfe6f8u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 0fe6f9  call 0xff3a9
    X86_AT(c, 0xfe6f9u);
    push32(c, 0xfe6feu); f_000ff3a9(c); X86_RET(c, 0xfe6feu);
    X86_TICK(c, 11);
    // 0fe6fe  loop 0xfe6f8
    X86_AT(c, 0xfe6feu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xfe6f8u); goto L_fe6f8; }
    X86_TICK(c, 20);
    // 0fe700  pop ax
    X86_AT(c, 0xfe700u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0fe702  mov byte ptr [0xdf0e6], al
    X86_AT(c, 0xfe702u);
    wr8((c.sbase[3] + (uint32_t)(0xDF0E6u)), g8(c, 0));
    // 0fe707  xor al, al
    X86_AT(c, 0xfe707u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0fe709  clc 
    X86_AT(c, 0xfe709u);
    c.fl &= ~X86_CF;
    // 0fe70a  ret 
    X86_AT(c, 0xfe70au);
    c.eip = pop32(c); return;
L_fe70b:
    X86_TICK(c, 14);
    // 0fe70b  mov al, 3
    X86_AT(c, 0xfe70bu);
    s8(c, 0, 0x3u);
    // 0fe70d  stc 
    X86_AT(c, 0xfe70du);
    c.fl |= X86_CF;
    // 0fe70e  ret 
    X86_AT(c, 0xfe70eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe6d3u, "ran off the end of a function");
}
void f_000fe70f(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0fe70f  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0xfe70fu);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 0fe712  call 0xff356
    X86_AT(c, 0xfe712u);
    push32(c, 0xfe717u); f_000ff356(c); X86_RET(c, 0xfe717u);
    X86_TICK(c, 13);
    // 0fe717  cmp ah, 1
    X86_AT(c, 0xfe717u);
    (void)x86_sub(c, g8(c, 4), 0x1u, 0, 1);
    // 0fe71a  nop 
    X86_AT(c, 0xfe71au);
    // 0fe71b  nop 
    X86_AT(c, 0xfe71bu);
    // 0fe71c  nop 
    X86_AT(c, 0xfe71cu);
    // 0fe71d  ja 0xfe728
    X86_AT(c, 0xfe71du);
    if (x86_cc(c, 7)) { goto L_fe728; }
    X86_TICK(c, 5);
    // 0fe71f  je 0xfe728
    X86_AT(c, 0xfe71fu);
    if (x86_cc(c, 4)) { goto L_fe728; }
    X86_TICK(c, 16);
    // 0fe721  mov byte ptr [ebp + 0x18], al
    X86_AT(c, 0xfe721u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)), g8(c, 0));
    // 0fe724  xor al, al
    X86_AT(c, 0xfe724u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0fe726  clc 
    X86_AT(c, 0xfe726u);
    c.fl &= ~X86_CF;
    // 0fe727  ret 
    X86_AT(c, 0xfe727u);
    c.eip = pop32(c); return;
L_fe728:
    X86_TICK(c, 14);
    // 0fe728  mov byte ptr [ebp + 0x20], ah
    X86_AT(c, 0xfe728u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)), g8(c, 4));
    // 0fe72b  stc 
    X86_AT(c, 0xfe72bu);
    c.fl |= X86_CF;
    // 0fe72c  ret 
    X86_AT(c, 0xfe72cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe70fu, "ran off the end of a function");
}
void f_000fe72d(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0fe72d  cmp byte ptr [0xdee86], 0
    X86_AT(c, 0xfe72du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDEE86u))), 0x0u, 0, 1);
    // 0fe734  je 0xfe75b
    X86_AT(c, 0xfe734u);
    if (x86_cc(c, 4)) { goto L_fe75b; }
    X86_TICK(c, 15);
    // 0fe736  mov byte ptr [0xdee8f], 0xff
    X86_AT(c, 0xfe736u);
    wr8((c.sbase[3] + (uint32_t)(0xDEE8Fu)), 0xFFu);
    // 0fe73d  mov byte ptr [0xdee86], 0
    X86_AT(c, 0xfe73du);
    wr8((c.sbase[3] + (uint32_t)(0xDEE86u)), 0x0u);
    // 0fe744  mov word ptr [0xdee99], 0
    X86_AT(c, 0xfe744u);
    wr16((c.sbase[3] + (uint32_t)(0xDEE99u)), 0x0u);
    // 0fe74d  mov byte ptr [0xdee87], 0
    X86_AT(c, 0xfe74du);
    wr8((c.sbase[3] + (uint32_t)(0xDEE87u)), 0x0u);
    // 0fe754  call 0xfe7b8
    X86_AT(c, 0xfe754u);
    push32(c, 0xfe759u); f_000fe7b8(c); X86_RET(c, 0xfe759u);
    X86_TICK(c, 12);
    // 0fe759  clc 
    X86_AT(c, 0xfe759u);
    c.fl &= ~X86_CF;
    // 0fe75a  ret 
    X86_AT(c, 0xfe75au);
    c.eip = pop32(c); return;
L_fe75b:
    X86_TICK(c, 12);
    // 0fe75b  stc 
    X86_AT(c, 0xfe75bu);
    c.fl |= X86_CF;
    // 0fe75c  ret 
    X86_AT(c, 0xfe75cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe72du, "ran off the end of a function");
}
void f_000fe75d(X86Cpu& c) {
    X86_TICK(c, 57);
    // 0fe75d  movzx ebx, al
    X86_AT(c, 0xfe75du);
    c.r[3] = g8(c, 0);
    // 0fe760  and al, 0xf
    X86_AT(c, 0xfe760u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0fe762  inc al
    X86_AT(c, 0xfe762u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_inc(c, v, 1)); }
    // 0fe764  shr ebx, 4
    X86_AT(c, 0xfe764u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 0fe767  mov bx, word ptr cs:[ebx*2 + 0xfe77d]
    X86_AT(c, 0xfe767u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0xFE77Du))));
    // 0fe770  push eax
    X86_AT(c, 0xfe770u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0fe771  movzx ax, al
    X86_AT(c, 0xfe771u);
    s16(c, 0, g8(c, 0));
    // 0fe775  mul bx
    X86_AT(c, 0xfe775u);
    x86_mul(c, (c.r[3] & 0xFFFFu), 2);
    // 0fe778  mov dx, ax
    X86_AT(c, 0xfe778u);
    s16(c, 2, (c.r[0] & 0xFFFFu));
    // 0fe77b  pop eax
    X86_AT(c, 0xfe77bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0fe77c  ret 
    X86_AT(c, 0xfe77cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe75du, "ran off the end of a function");
}
void f_000fe7ae(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0fe7ae  movzx ebx, dl
    X86_AT(c, 0xfe7aeu);
    c.r[3] = g8(c, 2);
    // 0fe7b1  mov bl, byte ptr [ebx + 0xdeec5]
    X86_AT(c, 0xfe7b1u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDEEC5u))));
    // 0fe7b7  ret 
    X86_AT(c, 0xfe7b7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe7aeu, "ran off the end of a function");
}
void f_000fe7b8(X86Cpu& c) {
    X86_TICK(c, 39);
    // 0fe7b8  pushal 
    X86_AT(c, 0xfe7b8u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0fe7b9  mov al, byte ptr [0xdf0e6]
    X86_AT(c, 0xfe7b9u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xDF0E6u))));
    // 0fe7be  push eax
    X86_AT(c, 0xfe7beu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0fe7bf  mov byte ptr [0xdf0e6], 0xff
    X86_AT(c, 0xfe7bfu);
    wr8((c.sbase[3] + (uint32_t)(0xDF0E6u)), 0xFFu);
    // 0fe7c6  movzx ecx, word ptr [0xdee90]
    X86_AT(c, 0xfe7c6u);
    c.r[1] = rd16((c.sbase[3] + (uint32_t)(0xDEE90u)));
    // 0fe7cd  or ecx, ecx
    X86_AT(c, 0xfe7cdu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v | c.r[1], 4); }
    // 0fe7cf  je 0xfe801
    X86_AT(c, 0xfe7cfu);
    if (x86_cc(c, 4)) { goto L_fe801; }
    X86_TICK(c, 2);
    // 0fe7d1  lea edi, [0xdef45]
    X86_AT(c, 0xfe7d1u);
    c.r[7] = (uint32_t)(0xDEF45u);
L_fe7d7:
    X86_TICK(c, 12);
    // 0fe7d7  cmp byte ptr [edi], 0
    X86_AT(c, 0xfe7d7u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 0fe7da  jne 0xfe7e1
    X86_AT(c, 0xfe7dau);
    if (x86_cc(c, 5)) { goto L_fe7e1; }
    X86_TICK(c, 9);
    // 0fe7dc  add edi, 6
    X86_AT(c, 0xfe7dcu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 0fe7df  jmp 0xfe7d7
    X86_AT(c, 0xfe7dfu);
    X86_POLL(c, 0xfe7d7u); goto L_fe7d7;
L_fe7e1:
    X86_TICK(c, 28);
    // 0fe7e1  push ecx
    X86_AT(c, 0xfe7e1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0fe7e2  xor ch, ch
    X86_AT(c, 0xfe7e2u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v ^ g8(c, 5), 1)); }
    // 0fe7e4  xchg byte ptr [edi], ch
    X86_AT(c, 0xfe7e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7])); uint32_t t = rd8(ea); wr8(ea, g8(c, 5)); s8(c, 5, t); }
    // 0fe7e6  mov bl, byte ptr [edi + 1]
    X86_AT(c, 0xfe7e6u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 0fe7e9  mov cl, byte ptr [edi + 2]
    X86_AT(c, 0xfe7e9u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 0fe7ec  mov bh, byte ptr [edi + 3]
    X86_AT(c, 0xfe7ecu);
    s8(c, 7, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x3u))));
    // 0fe7ef  call 0xfef33
    X86_AT(c, 0xfe7efu);
    push32(c, 0xfe7f4u); f_000fef33(c); X86_RET(c, 0xfe7f4u);
    X86_TICK(c, 23);
    // 0fe7f4  pop ecx
    X86_AT(c, 0xfe7f4u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 0fe7f5  add edi, 6
    X86_AT(c, 0xfe7f5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 0fe7f8  dec word ptr [0xdee90]
    X86_AT(c, 0xfe7f8u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDEE90u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 0fe7ff  loop 0xfe7d7
    X86_AT(c, 0xfe7ffu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xfe7d7u); goto L_fe7d7; }
L_fe801:
    X86_TICK(c, 40);
    // 0fe801  pop eax
    X86_AT(c, 0xfe801u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0fe802  mov byte ptr [0xdf0e6], al
    X86_AT(c, 0xfe802u);
    wr8((c.sbase[3] + (uint32_t)(0xDF0E6u)), g8(c, 0));
    // 0fe807  popal 
    X86_AT(c, 0xfe807u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0fe808  ret 
    X86_AT(c, 0xfe808u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe7b8u, "ran off the end of a function");
}
void f_000fe809(X86Cpu& c) {
    X86_TICK(c, 8);
    // 0fe809  push ebx
    X86_AT(c, 0xfe809u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0fe80a  push ecx
    X86_AT(c, 0xfe80au);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0fe80b  mov ecx, 8
    X86_AT(c, 0xfe80bu);
    c.r[1] = 0x8u;
    // 0fe810  lea ebx, [0xdf0f5]
    X86_AT(c, 0xfe810u);
    c.r[3] = (uint32_t)(0xDF0F5u);
L_fe816:
    X86_TICK(c, 15);
    // 0fe816  mov byte ptr [ebx + 0x1b], 0
    X86_AT(c, 0xfe816u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Bu)), 0x0u);
    // 0fe81a  add ebx, 0x20
    X86_AT(c, 0xfe81au);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x20u, 0, 4); }
    // 0fe81d  loop 0xfe816
    X86_AT(c, 0xfe81du);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xfe816u); goto L_fe816; }
    X86_TICK(c, 18);
    // 0fe81f  pop ecx
    X86_AT(c, 0xfe81fu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 0fe820  pop ebx
    X86_AT(c, 0xfe820u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0fe821  ret 
    X86_AT(c, 0xfe821u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe809u, "ran off the end of a function");
}
void f_000fe822(X86Cpu& c) {
    X86_TICK(c, 69);
    // 0fe822  push es
    X86_AT(c, 0xfe822u);
    push32(c, c.sreg[0]);
    // 0fe823  pushal 
    X86_AT(c, 0xfe823u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0fe824  push ds
    X86_AT(c, 0xfe824u);
    push32(c, c.sreg[3]);
    // 0fe825  pop es
    X86_AT(c, 0xfe825u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0fe826  mov al, 0xff
    X86_AT(c, 0xfe826u);
    s8(c, 0, 0xFFu);
    // 0fe828  lea edi, [0xdeea5]
    X86_AT(c, 0xfe828u);
    c.r[7] = (uint32_t)(0xDEEA5u);
    // 0fe82e  mov ecx, 0x20
    X86_AT(c, 0xfe82eu);
    c.r[1] = 0x20u;
    // 0fe833  stosb byte ptr es:[edi], al
    X86_AT(c, 0xfe833u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 0fe835  mov al, 0xff
    X86_AT(c, 0xfe835u);
    s8(c, 0, 0xFFu);
    // 0fe837  lea edi, [0xdeec5]
    X86_AT(c, 0xfe837u);
    c.r[7] = (uint32_t)(0xDEEC5u);
    // 0fe83d  mov ecx, 0x10
    X86_AT(c, 0xfe83du);
    c.r[1] = 0x10u;
    // 0fe842  stosb byte ptr es:[edi], al
    X86_AT(c, 0xfe842u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 0fe844  xor al, al
    X86_AT(c, 0xfe844u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0fe846  mov ecx, 0x10
    X86_AT(c, 0xfe846u);
    c.r[1] = 0x10u;
    // 0fe84b  stosb byte ptr es:[edi], al
    X86_AT(c, 0xfe84bu);
    x86_string(c, 2, 1, 243, 4, 3);
    // 0fe84d  xor al, al
    X86_AT(c, 0xfe84du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0fe84f  lea edi, [0xdeee5]
    X86_AT(c, 0xfe84fu);
    c.r[7] = (uint32_t)(0xDEEE5u);
    // 0fe855  mov ecx, 0x20
    X86_AT(c, 0xfe855u);
    c.r[1] = 0x20u;
L_fe85a:
    X86_TICK(c, 22);
    // 0fe85a  stosb byte ptr es:[edi], al
    X86_AT(c, 0xfe85au);
    x86_string(c, 2, 1, 0, 4, 3);
    // 0fe85b  inc al
    X86_AT(c, 0xfe85bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_inc(c, v, 1)); }
    // 0fe85d  and al, 0xf
    X86_AT(c, 0xfe85du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0fe85f  loop 0xfe85a
    X86_AT(c, 0xfe85fu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xfe85au); goto L_fe85a; }
    X86_TICK(c, 64);
    // 0fe861  xor al, al
    X86_AT(c, 0xfe861u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0fe863  lea edi, [0xdef05]
    X86_AT(c, 0xfe863u);
    c.r[7] = (uint32_t)(0xDEF05u);
    // 0fe869  mov ecx, 0x20
    X86_AT(c, 0xfe869u);
    c.r[1] = 0x20u;
    // 0fe86e  stosb byte ptr es:[edi], al
    X86_AT(c, 0xfe86eu);
    x86_string(c, 2, 1, 243, 4, 3);
    // 0fe870  xor al, al
    X86_AT(c, 0xfe870u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0fe872  lea edi, [0xdef25]
    X86_AT(c, 0xfe872u);
    c.r[7] = (uint32_t)(0xDEF25u);
    // 0fe878  mov ecx, 0x20
    X86_AT(c, 0xfe878u);
    c.r[1] = 0x20u;
    // 0fe87d  stosb byte ptr es:[edi], al
    X86_AT(c, 0xfe87du);
    x86_string(c, 2, 1, 243, 4, 3);
    // 0fe87f  popal 
    X86_AT(c, 0xfe87fu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0fe880  pop es
    X86_AT(c, 0xfe880u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0fe881  ret 
    X86_AT(c, 0xfe881u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe822u, "ran off the end of a function");
}
void f_000fe882(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0fe882  pushal 
    X86_AT(c, 0xfe882u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0fe883  xor eax, eax
    X86_AT(c, 0xfe883u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0fe885  mov word ptr [0xdee90], ax
    X86_AT(c, 0xfe885u);
    wr16((c.sbase[3] + (uint32_t)(0xDEE90u)), (c.r[0] & 0xFFFFu));
    // 0fe88b  mov ecx, 0x40
    X86_AT(c, 0xfe88bu);
    c.r[1] = 0x40u;
    // 0fe890  lea edi, [0xdef45]
    X86_AT(c, 0xfe890u);
    c.r[7] = (uint32_t)(0xDEF45u);
L_fe896:
    X86_TICK(c, 17);
    // 0fe896  mov dword ptr [edi], eax
    X86_AT(c, 0xfe896u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[0]);
    // 0fe898  mov word ptr [edi + 4], ax
    X86_AT(c, 0xfe898u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 0fe89c  add edi, 6
    X86_AT(c, 0xfe89cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 0fe89f  loop 0xfe896
    X86_AT(c, 0xfe89fu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xfe896u); goto L_fe896; }
    X86_TICK(c, 34);
    // 0fe8a1  popal 
    X86_AT(c, 0xfe8a1u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0fe8a2  ret 
    X86_AT(c, 0xfe8a2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe882u, "ran off the end of a function");
}
void f_000fe8a3(X86Cpu& c) {
    X86_TICK(c, 50);
    // 0fe8a3  xor eax, eax
    X86_AT(c, 0xfe8a3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0fe8a5  mov byte ptr [0xdf0e6], al
    X86_AT(c, 0xfe8a5u);
    wr8((c.sbase[3] + (uint32_t)(0xDF0E6u)), g8(c, 0));
    // 0fe8aa  mov byte ptr [0xdf0e8], al
    X86_AT(c, 0xfe8aau);
    wr8((c.sbase[3] + (uint32_t)(0xDF0E8u)), g8(c, 0));
    // 0fe8af  mov byte ptr [0xdf0e7], al
    X86_AT(c, 0xfe8afu);
    wr8((c.sbase[3] + (uint32_t)(0xDF0E7u)), g8(c, 0));
    // 0fe8b4  mov byte ptr [0xdeea0], 0
    X86_AT(c, 0xfe8b4u);
    wr8((c.sbase[3] + (uint32_t)(0xDEEA0u)), 0x0u);
    // 0fe8bb  mov byte ptr [0xdee86], al
    X86_AT(c, 0xfe8bbu);
    wr8((c.sbase[3] + (uint32_t)(0xDEE86u)), g8(c, 0));
    // 0fe8c0  mov byte ptr [0xdee87], al
    X86_AT(c, 0xfe8c0u);
    wr8((c.sbase[3] + (uint32_t)(0xDEE87u)), g8(c, 0));
    // 0fe8c5  mov byte ptr [0xdee88], al
    X86_AT(c, 0xfe8c5u);
    wr8((c.sbase[3] + (uint32_t)(0xDEE88u)), g8(c, 0));
    // 0fe8ca  mov byte ptr [0xdee89], al
    X86_AT(c, 0xfe8cau);
    wr8((c.sbase[3] + (uint32_t)(0xDEE89u)), g8(c, 0));
    // 0fe8cf  mov byte ptr [0xdee8a], al
    X86_AT(c, 0xfe8cfu);
    wr8((c.sbase[3] + (uint32_t)(0xDEE8Au)), g8(c, 0));
    // 0fe8d4  mov byte ptr [0xdee8b], al
    X86_AT(c, 0xfe8d4u);
    wr8((c.sbase[3] + (uint32_t)(0xDEE8Bu)), g8(c, 0));
    // 0fe8d9  mov byte ptr [0xdee8c], al
    X86_AT(c, 0xfe8d9u);
    wr8((c.sbase[3] + (uint32_t)(0xDEE8Cu)), g8(c, 0));
    // 0fe8de  mov byte ptr [0xdee8d], al
    X86_AT(c, 0xfe8deu);
    wr8((c.sbase[3] + (uint32_t)(0xDEE8Du)), g8(c, 0));
    // 0fe8e3  mov byte ptr [0xdee8e], al
    X86_AT(c, 0xfe8e3u);
    wr8((c.sbase[3] + (uint32_t)(0xDEE8Eu)), g8(c, 0));
    // 0fe8e8  mov byte ptr [0xdee8f], al
    X86_AT(c, 0xfe8e8u);
    wr8((c.sbase[3] + (uint32_t)(0xDEE8Fu)), g8(c, 0));
    // 0fe8ed  lea edi, [0xdeea1]
    X86_AT(c, 0xfe8edu);
    c.r[7] = (uint32_t)(0xDEEA1u);
    // 0fe8f3  mov byte ptr [edi], 0
    X86_AT(c, 0xfe8f3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0x0u);
    // 0fe8f6  mov byte ptr [edi + 1], 1
    X86_AT(c, 0xfe8f6u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)), 0x1u);
    // 0fe8fa  mov byte ptr [edi + 2], 2
    X86_AT(c, 0xfe8fau);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), 0x2u);
    // 0fe8fe  mov byte ptr [edi + 3], 3
    X86_AT(c, 0xfe8feu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x3u)), 0x3u);
    // 0fe902  ret 
    X86_AT(c, 0xfe902u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe8a3u, "ran off the end of a function");
}
void f_000fe903(X86Cpu& c) {
    X86_TICK(c, 34);
    // 0fe903  mov word ptr [0xdee99], 0
    X86_AT(c, 0xfe903u);
    wr16((c.sbase[3] + (uint32_t)(0xDEE99u)), 0x0u);
    // 0fe90c  mov word ptr [0xdee95], 0
    X86_AT(c, 0xfe90cu);
    wr16((c.sbase[3] + (uint32_t)(0xDEE95u)), 0x0u);
    // 0fe915  mov word ptr [0xdee97], 0x10
    X86_AT(c, 0xfe915u);
    wr16((c.sbase[3] + (uint32_t)(0xDEE97u)), 0x10u);
    // 0fe91e  mov al, 0x33
    X86_AT(c, 0xfe91eu);
    s8(c, 0, 0x33u);
    // 0fe920  mov byte ptr [0xdee84], al
    X86_AT(c, 0xfe920u);
    wr8((c.sbase[3] + (uint32_t)(0xDEE84u)), g8(c, 0));
    // 0fe925  mov byte ptr [0xdee78], al
    X86_AT(c, 0xfe925u);
    wr8((c.sbase[3] + (uint32_t)(0xDEE78u)), g8(c, 0));
    // 0fe92a  mov word ptr [0xdee73], ax
    X86_AT(c, 0xfe92au);
    wr16((c.sbase[3] + (uint32_t)(0xDEE73u)), (c.r[0] & 0xFFFFu));
    // 0fe930  mov byte ptr [0xdee77], al
    X86_AT(c, 0xfe930u);
    wr8((c.sbase[3] + (uint32_t)(0xDEE77u)), g8(c, 0));
    // 0fe935  mov word ptr [0xdee75], ax
    X86_AT(c, 0xfe935u);
    wr16((c.sbase[3] + (uint32_t)(0xDEE75u)), (c.r[0] & 0xFFFFu));
    // 0fe93b  mov al, 0x5a
    X86_AT(c, 0xfe93bu);
    s8(c, 0, 0x5Au);
    // 0fe93d  mov byte ptr [0xdee85], al
    X86_AT(c, 0xfe93du);
    wr8((c.sbase[3] + (uint32_t)(0xDEE85u)), g8(c, 0));
    // 0fe942  mov byte ptr [0xdee79], al
    X86_AT(c, 0xfe942u);
    wr8((c.sbase[3] + (uint32_t)(0xDEE79u)), g8(c, 0));
    // 0fe947  ret 
    X86_AT(c, 0xfe947u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe903u, "ran off the end of a function");
}
void f_000fe948(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0fe948  mov byte ptr [0xdee93], 0
    X86_AT(c, 0xfe948u);
    wr8((c.sbase[3] + (uint32_t)(0xDEE93u)), 0x0u);
    // 0fe94f  mov byte ptr [0xdee92], 0xff
    X86_AT(c, 0xfe94fu);
    wr8((c.sbase[3] + (uint32_t)(0xDEE92u)), 0xFFu);
    // 0fe956  mov byte ptr [0xdee94], 0
    X86_AT(c, 0xfe956u);
    wr8((c.sbase[3] + (uint32_t)(0xDEE94u)), 0x0u);
    // 0fe95d  ret 
    X86_AT(c, 0xfe95du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe948u, "ran off the end of a function");
}
void f_000fe95e(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0fe95e  cld 
    X86_AT(c, 0xfe95eu);
    c.fl &= ~X86_DF;
    // 0fe95f  call 0xfea70
    X86_AT(c, 0xfe95fu);
    push32(c, 0xfe964u); f_000fea70(c); X86_RET(c, 0xfe964u);
    X86_TICK(c, 7);
    // 0fe964  call 0xfe9b0
    X86_AT(c, 0xfe964u);
    push32(c, 0xfe969u); f_000fe9b0(c); X86_RET(c, 0xfe969u);
    X86_TICK(c, 7);
    // 0fe969  call 0xfea10
    X86_AT(c, 0xfe969u);
    push32(c, 0xfe96eu); f_000fea10(c); X86_RET(c, 0xfe96eu);
L_fe96e:
    X86_TICK(c, 12);
    // 0fe96e  cmp word ptr [0xdee99], 0
    X86_AT(c, 0xfe96eu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xDEE99u))), 0x0u, 0, 2);
    // 0fe976  je 0xfe9af
    X86_AT(c, 0xfe976u);
    if (x86_cc(c, 4)) { goto L_fe9af; }
    X86_TICK(c, 13);
    // 0fe978  dec word ptr [0xdee99]
    X86_AT(c, 0xfe978u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDEE99u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 0fe97f  call 0xfeabb
    X86_AT(c, 0xfe97fu);
    push32(c, 0xfe984u); f_000feabb(c); X86_RET(c, 0xfe984u);
    X86_TICK(c, 5);
    // 0fe984  jb 0xfe96e
    X86_AT(c, 0xfe984u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xfe96eu); goto L_fe96e; }
    X86_TICK(c, 12);
    // 0fe986  cmp byte ptr [0xdee86], 0
    X86_AT(c, 0xfe986u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDEE86u))), 0x0u, 0, 1);
    // 0fe98d  je 0xfe96e
    X86_AT(c, 0xfe98du);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xfe96eu); goto L_fe96e; }
    X86_TICK(c, 7);
    // 0fe98f  call 0xfeef1
    X86_AT(c, 0xfe98fu);
    push32(c, 0xfe994u); f_000feef1(c); X86_RET(c, 0xfe994u);
    X86_TICK(c, 7);
    // 0fe994  call 0xfeb1d
    X86_AT(c, 0xfe994u);
    push32(c, 0xfe999u); f_000feb1d(c); X86_RET(c, 0xfe999u);
    X86_TICK(c, 7);
    // 0fe999  call 0xfeaa2
    X86_AT(c, 0xfe999u);
    push32(c, 0xfe99eu); f_000feaa2(c); X86_RET(c, 0xfe99eu);
    X86_TICK(c, 7);
    // 0fe99e  call 0xfea70
    X86_AT(c, 0xfe99eu);
    push32(c, 0xfe9a3u); f_000fea70(c); X86_RET(c, 0xfe9a3u);
    X86_TICK(c, 7);
    // 0fe9a3  call 0xfe9b0
    X86_AT(c, 0xfe9a3u);
    push32(c, 0xfe9a8u); f_000fe9b0(c); X86_RET(c, 0xfe9a8u);
    X86_TICK(c, 7);
    // 0fe9a8  call 0xfea10
    X86_AT(c, 0xfe9a8u);
    push32(c, 0xfe9adu); f_000fea10(c); X86_RET(c, 0xfe9adu);
    X86_TICK(c, 7);
    // 0fe9ad  jmp 0xfe96e
    X86_AT(c, 0xfe9adu);
    X86_POLL(c, 0xfe96eu); goto L_fe96e;
L_fe9af:
    X86_TICK(c, 10);
    // 0fe9af  ret 
    X86_AT(c, 0xfe9afu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe95eu, "ran off the end of a function");
}
void f_000fe9b0(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0fe9b0  cmp byte ptr [0xdee8a], 0
    X86_AT(c, 0xfe9b0u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDEE8Au))), 0x0u, 0, 1);
    // 0fe9b7  je 0xfe9ce
    X86_AT(c, 0xfe9b7u);
    if (x86_cc(c, 4)) { goto L_fe9ce; }
    X86_TICK(c, 6);
    // 0fe9b9  mov byte ptr [0xdee8a], 0
    X86_AT(c, 0xfe9b9u);
    wr8((c.sbase[3] + (uint32_t)(0xDEE8Au)), 0x0u);
    // 0fe9c0  mov byte ptr [0xdee88], 0
    X86_AT(c, 0xfe9c0u);
    wr8((c.sbase[3] + (uint32_t)(0xDEE88u)), 0x0u);
    // 0fe9c7  mov byte ptr [0xdee8d], 0xff
    X86_AT(c, 0xfe9c7u);
    wr8((c.sbase[3] + (uint32_t)(0xDEE8Du)), 0xFFu);
L_fe9ce:
    X86_TICK(c, 12);
    // 0fe9ce  cmp byte ptr [0xdee8b], 0
    X86_AT(c, 0xfe9ceu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDEE8Bu))), 0x0u, 0, 1);
    // 0fe9d5  je 0xfe9ec
    X86_AT(c, 0xfe9d5u);
    if (x86_cc(c, 4)) { goto L_fe9ec; }
    X86_TICK(c, 6);
    // 0fe9d7  mov byte ptr [0xdee8b], 0
    X86_AT(c, 0xfe9d7u);
    wr8((c.sbase[3] + (uint32_t)(0xDEE8Bu)), 0x0u);
    // 0fe9de  mov byte ptr [0xdee88], 0
    X86_AT(c, 0xfe9deu);
    wr8((c.sbase[3] + (uint32_t)(0xDEE88u)), 0x0u);
    // 0fe9e5  mov byte ptr [0xdee8e], 0xff
    X86_AT(c, 0xfe9e5u);
    wr8((c.sbase[3] + (uint32_t)(0xDEE8Eu)), 0xFFu);
L_fe9ec:
    X86_TICK(c, 12);
    // 0fe9ec  cmp byte ptr [0xdee8c], 0
    X86_AT(c, 0xfe9ecu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDEE8Cu))), 0x0u, 0, 1);
    // 0fe9f3  je 0xfea0f
    X86_AT(c, 0xfe9f3u);
    if (x86_cc(c, 4)) { goto L_fea0f; }
    X86_TICK(c, 13);
    // 0fe9f5  mov byte ptr [0xdee8c], 0
    X86_AT(c, 0xfe9f5u);
    wr8((c.sbase[3] + (uint32_t)(0xDEE8Cu)), 0x0u);
    // 0fe9fc  mov byte ptr [0xdee88], 0xff
    X86_AT(c, 0xfe9fcu);
    wr8((c.sbase[3] + (uint32_t)(0xDEE88u)), 0xFFu);
    // 0fea03  mov byte ptr [0xdee8f], 0xff
    X86_AT(c, 0xfea03u);
    wr8((c.sbase[3] + (uint32_t)(0xDEE8Fu)), 0xFFu);
    // 0fea0a  call 0xfe7b8
    X86_AT(c, 0xfea0au);
    push32(c, 0xfea0fu); f_000fe7b8(c); X86_RET(c, 0xfea0fu);
L_fea0f:
    X86_TICK(c, 10);
    // 0fea0f  ret 
    X86_AT(c, 0xfea0fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe9b0u, "ran off the end of a function");
}
void f_000fea10(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0fea10  push ax
    X86_AT(c, 0xfea10u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0fea12  cmp byte ptr [0xdee8d], 0
    X86_AT(c, 0xfea12u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDEE8Du))), 0x0u, 0, 1);
    // 0fea19  je 0xfea29
    X86_AT(c, 0xfea19u);
    if (x86_cc(c, 4)) { goto L_fea29; }
    X86_TICK(c, 11);
    // 0fea1b  mov byte ptr [0xdee8d], 0
    X86_AT(c, 0xfea1bu);
    wr8((c.sbase[3] + (uint32_t)(0xDEE8Du)), 0x0u);
    // 0fea22  mov al, 0xfa
    X86_AT(c, 0xfea22u);
    s8(c, 0, 0xFAu);
    // 0fea24  call 0xff43f
    X86_AT(c, 0xfea24u);
    push32(c, 0xfea29u); f_000ff43f(c); X86_RET(c, 0xfea29u);
L_fea29:
    X86_TICK(c, 12);
    // 0fea29  cmp byte ptr [0xdee8e], 0
    X86_AT(c, 0xfea29u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDEE8Eu))), 0x0u, 0, 1);
    // 0fea30  je 0xfea40
    X86_AT(c, 0xfea30u);
    if (x86_cc(c, 4)) { goto L_fea40; }
    X86_TICK(c, 11);
    // 0fea32  mov byte ptr [0xdee8e], 0
    X86_AT(c, 0xfea32u);
    wr8((c.sbase[3] + (uint32_t)(0xDEE8Eu)), 0x0u);
    // 0fea39  mov al, 0xfb
    X86_AT(c, 0xfea39u);
    s8(c, 0, 0xFBu);
    // 0fea3b  call 0xff43f
    X86_AT(c, 0xfea3bu);
    push32(c, 0xfea40u); f_000ff43f(c); X86_RET(c, 0xfea40u);
L_fea40:
    X86_TICK(c, 12);
    // 0fea40  cmp byte ptr [0xdee8f], 0
    X86_AT(c, 0xfea40u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDEE8Fu))), 0x0u, 0, 1);
    // 0fea47  je 0xfea57
    X86_AT(c, 0xfea47u);
    if (x86_cc(c, 4)) { goto L_fea57; }
    X86_TICK(c, 11);
    // 0fea49  mov byte ptr [0xdee8f], 0
    X86_AT(c, 0xfea49u);
    wr8((c.sbase[3] + (uint32_t)(0xDEE8Fu)), 0x0u);
    // 0fea50  mov al, 0xfc
    X86_AT(c, 0xfea50u);
    s8(c, 0, 0xFCu);
    // 0fea52  call 0xff43f
    X86_AT(c, 0xfea52u);
    push32(c, 0xfea57u); f_000ff43f(c); X86_RET(c, 0xfea57u);
L_fea57:
    X86_TICK(c, 12);
    // 0fea57  cmp byte ptr [0xdee93], 0
    X86_AT(c, 0xfea57u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDEE93u))), 0x0u, 0, 1);
    // 0fea5e  je 0xfea6d
    X86_AT(c, 0xfea5eu);
    if (x86_cc(c, 4)) { goto L_fea6d; }
    X86_TICK(c, 15);
    // 0fea60  dec byte ptr [0xdee93]
    X86_AT(c, 0xfea60u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDEE93u)); uint32_t v = rd8(ea); wr8(ea, x86_dec(c, v, 1)); }
    // 0fea66  mov al, 0xf8
    X86_AT(c, 0xfea66u);
    s8(c, 0, 0xF8u);
    // 0fea68  call 0xff43f
    X86_AT(c, 0xfea68u);
    push32(c, 0xfea6du); f_000ff43f(c); X86_RET(c, 0xfea6du);
L_fea6d:
    X86_TICK(c, 14);
    // 0fea6d  pop ax
    X86_AT(c, 0xfea6du);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0fea6f  ret 
    X86_AT(c, 0xfea6fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfea10u, "ran off the end of a function");
}
void f_000fea70(X86Cpu& c) {
    X86_TICK(c, 81);
    // 0fea70  mov dx, 0xe71
    X86_AT(c, 0xfea70u);
    s16(c, 2, 0xE71u);
    // 0fea74  nop 
    X86_AT(c, 0xfea74u);
    // 0fea75  nop 
    X86_AT(c, 0xfea75u);
    // 0fea76  nop 
    X86_AT(c, 0xfea76u);
    // 0fea77  pushf 
    X86_AT(c, 0xfea77u);
    push16(c, c.fl & 0xFFFFu);
    // 0fea79  cli 
    X86_AT(c, 0xfea79u);
    c.fl &= ~X86_IF;
    // 0fea7a  in al, dx
    X86_AT(c, 0xfea7au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0fea7b  mov ah, byte ptr [0xdf0c7]
    X86_AT(c, 0xfea7bu);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(0xDF0C7u))));
    // 0fea81  and al, 0xf0
    X86_AT(c, 0xfea81u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0fea83  or al, ah
    X86_AT(c, 0xfea83u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | g8(c, 4), 1)); }
    // 0fea85  out dx, al
    X86_AT(c, 0xfea85u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0fea86  mov byte ptr [0xdf0c7], al
    X86_AT(c, 0xfea86u);
    wr8((c.sbase[3] + (uint32_t)(0xDF0C7u)), g8(c, 0));
    // 0fea8b  mov al, byte ptr [0xdf0c8]
    X86_AT(c, 0xfea8bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xDF0C8u))));
    // 0fea90  mov byte ptr [0xdf0c8], 0
    X86_AT(c, 0xfea90u);
    wr8((c.sbase[3] + (uint32_t)(0xDF0C8u)), 0x0u);
    // 0fea97  popf 
    X86_AT(c, 0xfea97u);
    x86_popfd(c, 2);
    // 0fea99  and al, 0xf0
    X86_AT(c, 0xfea99u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0fea9b  or byte ptr [0xdeea0], al
    X86_AT(c, 0xfea9bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDEEA0u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 0), 1)); }
    // 0feaa1  ret 
    X86_AT(c, 0xfeaa1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfea70u, "ran off the end of a function");
}
void f_000feaa2(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0feaa2  cmp byte ptr [0xdee87], 0
    X86_AT(c, 0xfeaa2u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDEE87u))), 0x0u, 0, 1);
    // 0feaa9  je 0xfeaba
    X86_AT(c, 0xfeaa9u);
    if (x86_cc(c, 4)) { goto L_feaba; }
    X86_TICK(c, 12);
    // 0feaab  cmp word ptr [0xdee90], 0
    X86_AT(c, 0xfeaabu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xDEE90u))), 0x0u, 0, 2);
    // 0feab3  jne 0xfeaba
    X86_AT(c, 0xfeab3u);
    if (x86_cc(c, 5)) { goto L_feaba; }
    X86_TICK(c, 7);
    // 0feab5  call 0xfe72d
    X86_AT(c, 0xfeab5u);
    push32(c, 0xfeabau); f_000fe72d(c); X86_RET(c, 0xfeabau);
L_feaba:
    X86_TICK(c, 10);
    // 0feaba  ret 
    X86_AT(c, 0xfeabau);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfeaa2u, "ran off the end of a function");
}
void f_000feabb(X86Cpu& c) {
    X86_TICK(c, 88);
    // 0feabb  inc word ptr [0xdee75]
    X86_AT(c, 0xfeabbu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDEE75u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0feac2  movzx ebx, byte ptr [0xdee79]
    X86_AT(c, 0xfeac2u);
    c.r[3] = rd8((c.sbase[3] + (uint32_t)(0xDEE79u)));
    // 0feac9  movzx eax, word ptr cs:[ebx*2 + 0xfef52]
    X86_AT(c, 0xfeac9u);
    c.r[0] = rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0xFEF52u)));
    // 0fead2  add eax, dword ptr [0xdee7a]
    X86_AT(c, 0xfead2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xDEE7Au))), 0, 4); }
    // 0fead8  xor edx, edx
    X86_AT(c, 0xfead8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 0feada  mov ebx, 0x1f4
    X86_AT(c, 0xfeadau);
    c.r[3] = 0x1F4u;
    // 0feadf  div ebx
    X86_AT(c, 0xfeadfu);
    x86_div(c, c.r[3], 4, 0xfeadfu);
    // 0feae1  mov dword ptr [0xdee7a], edx
    X86_AT(c, 0xfeae1u);
    wr32((c.sbase[3] + (uint32_t)(0xDEE7Au)), c.r[2]);
    // 0feae7  add dword ptr [0xdee7e], eax
    X86_AT(c, 0xfeae7u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDEE7Eu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0feaed  mov al, byte ptr [0xdee78]
    X86_AT(c, 0xfeaedu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xDEE78u))));
    // 0feaf2  call 0xfe75d
    X86_AT(c, 0xfeaf2u);
    push32(c, 0xfeaf7u); f_000fe75d(c); X86_RET(c, 0xfeaf7u);
    X86_TICK(c, 11);
    // 0feaf7  cmp dx, word ptr [0xdee75]
    X86_AT(c, 0xfeaf7u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(0xDEE75u))), 0, 2);
    // 0feafe  ja 0xfeb14
    X86_AT(c, 0xfeafeu);
    if (x86_cc(c, 7)) { goto L_feb14; }
    X86_TICK(c, 12);
    // 0feb00  inc word ptr [0xdee73]
    X86_AT(c, 0xfeb00u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDEE73u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0feb07  xor eax, eax
    X86_AT(c, 0xfeb07u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0feb09  mov word ptr [0xdee75], ax
    X86_AT(c, 0xfeb09u);
    wr16((c.sbase[3] + (uint32_t)(0xDEE75u)), (c.r[0] & 0xFFFFu));
    // 0feb0f  mov byte ptr [0xdee77], al
    X86_AT(c, 0xfeb0fu);
    wr8((c.sbase[3] + (uint32_t)(0xDEE77u)), g8(c, 0));
L_feb14:
    X86_TICK(c, 12);
    // 0feb14  clc 
    X86_AT(c, 0xfeb14u);
    c.fl &= ~X86_CF;
    // 0feb15  ret 
    X86_AT(c, 0xfeb15u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfeabbu, "ran off the end of a function");
}
void f_000feb1d(X86Cpu& c) {
L_feb1d:
    X86_TICK(c, 17);
    // 0feb1d  les esi, fword ptr [0xdee61]
    X86_AT(c, 0xfeb1du);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDEE61u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[6] = o; }
    // 0feb23  mov al, byte ptr es:[esi]
    X86_AT(c, 0xfeb23u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6]))));
    // 0feb26  cmp al, 0xff
    X86_AT(c, 0xfeb26u);
    (void)x86_sub(c, g8(c, 0), 0xFFu, 0, 1);
    // 0feb28  je 0xfeb32
    X86_AT(c, 0xfeb28u);
    if (x86_cc(c, 4)) { goto L_feb32; }
    X86_TICK(c, 7);
    // 0feb2a  cmp al, 0xf7
    X86_AT(c, 0xfeb2au);
    (void)x86_sub(c, g8(c, 0), 0xF7u, 0, 1);
    // 0feb2c  je 0xfeb32
    X86_AT(c, 0xfeb2cu);
    if (x86_cc(c, 4)) { goto L_feb32; }
    X86_TICK(c, 7);
    // 0feb2e  cmp al, 0x90
    X86_AT(c, 0xfeb2eu);
    (void)x86_sub(c, g8(c, 0), 0x90u, 0, 1);
    // 0feb30  jae 0xfeb39
    X86_AT(c, 0xfeb30u);
    if (x86_cc(c, 3)) { goto L_feb39; }
L_feb32:
    X86_TICK(c, 7);
    // 0feb32  call 0xfee25
    X86_AT(c, 0xfeb32u);
    push32(c, 0xfeb37u); f_000fee25(c); X86_RET(c, 0xfeb37u);
    X86_TICK(c, 7);
    // 0feb37  jmp 0xfeb1d
    X86_AT(c, 0xfeb37u);
    X86_POLL(c, 0xfeb1du); goto L_feb1d;
L_feb39:
    X86_TICK(c, 15);
    // 0feb39  mov dx, word ptr [0xdee82]
    X86_AT(c, 0xfeb39u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(0xDEE82u))));
    // 0feb40  cmp dx, word ptr [0xdee73]
    X86_AT(c, 0xfeb40u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(0xDEE73u))), 0, 2);
    // 0feb47  ja 0xfeb6e
    X86_AT(c, 0xfeb47u);
    if (x86_cc(c, 7)) { goto L_feb6e; }
    X86_TICK(c, 5);
    // 0feb49  je 0xfeb54
    X86_AT(c, 0xfeb49u);
    if (x86_cc(c, 4)) { goto L_feb54; }
    X86_TICK(c, 7);
    // 0feb4b  call 0xfeb6f
    X86_AT(c, 0xfeb4bu);
    push32(c, 0xfeb50u); f_000feb6f(c); X86_RET(c, 0xfeb50u);
    X86_TICK(c, 5);
    // 0feb50  jae 0xfeb1d
    X86_AT(c, 0xfeb50u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xfeb1du); goto L_feb1d; }
    X86_TICK(c, 7);
    // 0feb52  jmp 0xfeb6e
    X86_AT(c, 0xfeb52u);
    goto L_feb6e;
L_feb54:
    X86_TICK(c, 21);
    // 0feb54  mov dx, word ptr es:[esi + 2]
    X86_AT(c, 0xfeb54u);
    s16(c, 2, rd16((c.sbase[0] + (uint32_t)(c.r[6] + 0x2u))));
    // 0feb59  shl dl, 1
    X86_AT(c, 0xfeb59u);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0feb5b  shr dx, 1
    X86_AT(c, 0xfeb5bu);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 2, r); }
    // 0feb5e  cmp dx, word ptr [0xdee75]
    X86_AT(c, 0xfeb5eu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(0xDEE75u))), 0, 2);
    // 0feb65  ja 0xfeb6e
    X86_AT(c, 0xfeb65u);
    if (x86_cc(c, 7)) { goto L_feb6e; }
    X86_TICK(c, 7);
    // 0feb67  call 0xfeb6f
    X86_AT(c, 0xfeb67u);
    push32(c, 0xfeb6cu); f_000feb6f(c); X86_RET(c, 0xfeb6cu);
    X86_TICK(c, 5);
    // 0feb6c  jae 0xfeb1d
    X86_AT(c, 0xfeb6cu);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xfeb1du); goto L_feb1d; }
L_feb6e:
    X86_TICK(c, 10);
    // 0feb6e  ret 
    X86_AT(c, 0xfeb6eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfeb1du, "ran off the end of a function");
}
void f_000feb6f(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0feb6f  cmp al, 0xfe
    X86_AT(c, 0xfeb6fu);
    (void)x86_sub(c, g8(c, 0), 0xFEu, 0, 1);
    // 0feb71  je 0xfebad
    X86_AT(c, 0xfeb71u);
    if (x86_cc(c, 4)) { goto L_febad; }
    X86_TICK(c, 7);
    // 0feb73  cmp al, 0xfd
    X86_AT(c, 0xfeb73u);
    (void)x86_sub(c, g8(c, 0), 0xFDu, 0, 1);
    // 0feb75  je 0xfebad
    X86_AT(c, 0xfeb75u);
    if (x86_cc(c, 4)) { goto L_febad; }
    X86_TICK(c, 10);
    // 0feb77  movzx ebx, al
    X86_AT(c, 0xfeb77u);
    c.r[3] = g8(c, 0);
    // 0feb7a  cmp al, 0xf0
    X86_AT(c, 0xfeb7au);
    (void)x86_sub(c, g8(c, 0), 0xF0u, 0, 1);
    // 0feb7c  jae 0xfeb98
    X86_AT(c, 0xfeb7cu);
    if (x86_cc(c, 3)) { goto L_feb98; }
    X86_TICK(c, 12);
    // 0feb7e  sub ebx, 0x80
    X86_AT(c, 0xfeb7eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, 0x80u, 0, 4); }
    // 0feb84  shr ebx, 4
    X86_AT(c, 0xfeb84u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 0feb87  call dword ptr cs:[ebx*4 + 0xfec06]
    X86_AT(c, 0xfeb87u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xFEC06u))); push32(c, 0xfeb8fu);
      switch (t) {
      case 0xfec66u: f_000fec66(c); break;
      case 0xfec68u: f_000fec68(c); break;
      case 0xfec9bu: f_000fec9b(c); break;
      case 0xfeca2u: f_000feca2(c); break;
      case 0xfeca9u: f_000feca9(c); break;
      case 0xfecb0u: f_000fecb0(c); break;
      case 0xfed08u: f_000fed08(c); break;
      case 0xfee7cu: f_000fee7c(c); break;
      case 0xfeec5u: f_000feec5(c); break;
      case 0xfeec7u: f_000feec7(c); break;
      case 0xfeec9u: f_000feec9(c); break;
      case 0xfeedbu: f_000feedb(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0xfeb8fu); }
    X86_TICK(c, 5);
    // 0feb8f  jb 0xfebad
    X86_AT(c, 0xfeb8fu);
    if (x86_cc(c, 2)) { goto L_febad; }
    X86_TICK(c, 7);
    // 0feb91  call 0xfee25
    X86_AT(c, 0xfeb91u);
    push32(c, 0xfeb96u); f_000fee25(c); X86_RET(c, 0xfeb96u);
    X86_TICK(c, 12);
    // 0feb96  clc 
    X86_AT(c, 0xfeb96u);
    c.fl &= ~X86_CF;
    // 0feb97  ret 
    X86_AT(c, 0xfeb97u);
    c.eip = pop32(c); return;
L_feb98:
    X86_TICK(c, 9);
    // 0feb98  sub ebx, 0xf0
    X86_AT(c, 0xfeb98u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, 0xF0u, 0, 4); }
    // 0feb9e  call dword ptr cs:[ebx*4 + 0xfec26]
    X86_AT(c, 0xfeb9eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xFEC26u))); push32(c, 0xfeba6u);
      switch (t) {
      case 0xfec66u: f_000fec66(c); break;
      case 0xfee7cu: f_000fee7c(c); break;
      case 0xfeec5u: f_000feec5(c); break;
      case 0xfeec7u: f_000feec7(c); break;
      case 0xfeec9u: f_000feec9(c); break;
      case 0xfeedbu: f_000feedb(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0xfeba6u); }
    X86_TICK(c, 7);
    // 0feba6  call 0xfee25
    X86_AT(c, 0xfeba6u);
    push32(c, 0xfebabu); f_000fee25(c); X86_RET(c, 0xfebabu);
    X86_TICK(c, 12);
    // 0febab  clc 
    X86_AT(c, 0xfebabu);
    c.fl &= ~X86_CF;
    // 0febac  ret 
    X86_AT(c, 0xfebacu);
    c.eip = pop32(c); return;
L_febad:
    X86_TICK(c, 7);
    // 0febad  cmp al, 0xfd
    X86_AT(c, 0xfebadu);
    (void)x86_sub(c, g8(c, 0), 0xFDu, 0, 1);
    // 0febaf  je 0xfebc3
    X86_AT(c, 0xfebafu);
    if (x86_cc(c, 4)) { goto L_febc3; }
    X86_TICK(c, 12);
    // 0febb1  cmp byte ptr [0xdee89], 0
    X86_AT(c, 0xfebb1u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDEE89u))), 0x0u, 0, 1);
    // 0febb8  jne 0xfebcc
    X86_AT(c, 0xfebb8u);
    if (x86_cc(c, 5)) { goto L_febcc; }
    X86_TICK(c, 14);
    // 0febba  mov byte ptr [0xdee87], 0xff
    X86_AT(c, 0xfebbau);
    wr8((c.sbase[3] + (uint32_t)(0xDEE87u)), 0xFFu);
    // 0febc1  stc 
    X86_AT(c, 0xfebc1u);
    c.fl |= X86_CF;
    // 0febc2  ret 
    X86_AT(c, 0xfebc2u);
    c.eip = pop32(c); return;
L_febc3:
    X86_TICK(c, 14);
    // 0febc3  mov byte ptr [0xdee88], 0xff
    X86_AT(c, 0xfebc3u);
    wr8((c.sbase[3] + (uint32_t)(0xDEE88u)), 0xFFu);
    // 0febca  stc 
    X86_AT(c, 0xfebcau);
    c.fl |= X86_CF;
    // 0febcb  ret 
    X86_AT(c, 0xfebcbu);
    c.eip = pop32(c); return;
L_febcc:
    X86_TICK(c, 32);
    // 0febcc  mov byte ptr [0xdee87], 0
    X86_AT(c, 0xfebccu);
    wr8((c.sbase[3] + (uint32_t)(0xDEE87u)), 0x0u);
    // 0febd3  mov eax, dword ptr [0xdee67]
    X86_AT(c, 0xfebd3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDEE67u)));
    // 0febd8  mov dword ptr [0xdee61], eax
    X86_AT(c, 0xfebd8u);
    wr32((c.sbase[3] + (uint32_t)(0xDEE61u)), c.r[0]);
    // 0febdd  mov word ptr [0xdee82], 0
    X86_AT(c, 0xfebddu);
    wr16((c.sbase[3] + (uint32_t)(0xDEE82u)), 0x0u);
    // 0febe6  mov word ptr [0xdee73], 0
    X86_AT(c, 0xfebe6u);
    wr16((c.sbase[3] + (uint32_t)(0xDEE73u)), 0x0u);
    // 0febef  mov word ptr [0xdee75], 0
    X86_AT(c, 0xfebefu);
    wr16((c.sbase[3] + (uint32_t)(0xDEE75u)), 0x0u);
    // 0febf8  mov dl, byte ptr [0xdee84]
    X86_AT(c, 0xfebf8u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(0xDEE84u))));
    // 0febfe  mov byte ptr [0xdee78], dl
    X86_AT(c, 0xfebfeu);
    wr8((c.sbase[3] + (uint32_t)(0xDEE78u)), g8(c, 2));
    // 0fec04  clc 
    X86_AT(c, 0xfec04u);
    c.fl &= ~X86_CF;
    // 0fec05  ret 
    X86_AT(c, 0xfec05u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfeb6fu, "ran off the end of a function");
}
void f_000fec66(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0fec66  clc 
    X86_AT(c, 0xfec66u);
    c.fl &= ~X86_CF;
    // 0fec67  ret 
    X86_AT(c, 0xfec67u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfec66u, "ran off the end of a function");
}
void f_000fec68(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0fec68  mov dl, byte ptr es:[esi + 1]
    X86_AT(c, 0xfec68u);
    s8(c, 2, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x1u))));
    // 0fec6c  call 0xfed97
    X86_AT(c, 0xfec6cu);
    push32(c, 0xfec71u); f_000fed97(c); X86_RET(c, 0xfec71u);
    X86_TICK(c, 5);
    // 0fec71  jb 0xfec99
    X86_AT(c, 0xfec71u);
    if (x86_cc(c, 2)) { goto L_fec99; }
    X86_TICK(c, 7);
    // 0fec73  call 0xfe7ae
    X86_AT(c, 0xfec73u);
    push32(c, 0xfec78u); f_000fe7ae(c); X86_RET(c, 0xfec78u);
    X86_TICK(c, 7);
    // 0fec78  call 0xfedaa
    X86_AT(c, 0xfec78u);
    push32(c, 0xfec7du); f_000fedaa(c); X86_RET(c, 0xfec7du);
    X86_TICK(c, 7);
    // 0fec7d  call 0xff3a9
    X86_AT(c, 0xfec7du);
    push32(c, 0xfec82u); f_000ff3a9(c); X86_RET(c, 0xfec82u);
    X86_TICK(c, 11);
    // 0fec82  mov al, byte ptr es:[esi + 4]
    X86_AT(c, 0xfec82u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x4u))));
    // 0fec86  call 0xfedc7
    X86_AT(c, 0xfec86u);
    push32(c, 0xfec8bu); f_000fedc7(c); X86_RET(c, 0xfec8bu);
    X86_TICK(c, 7);
    // 0fec8b  call 0xff3a9
    X86_AT(c, 0xfec8bu);
    push32(c, 0xfec90u); f_000ff3a9(c); X86_RET(c, 0xfec90u);
    X86_TICK(c, 11);
    // 0fec90  mov al, byte ptr es:[esi + 5]
    X86_AT(c, 0xfec90u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x5u))));
    // 0fec94  call 0xff3a9
    X86_AT(c, 0xfec94u);
    push32(c, 0xfec99u); f_000ff3a9(c); X86_RET(c, 0xfec99u);
L_fec99:
    X86_TICK(c, 12);
    // 0fec99  clc 
    X86_AT(c, 0xfec99u);
    c.fl &= ~X86_CF;
    // 0fec9a  ret 
    X86_AT(c, 0xfec9au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfec68u, "ran off the end of a function");
}
void f_000fec9b(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0fec9b  call 0xfecdb
    X86_AT(c, 0xfec9bu);
    push32(c, 0xfeca0u); f_000fecdb(c); X86_RET(c, 0xfeca0u);
    X86_TICK(c, 12);
    // 0feca0  clc 
    X86_AT(c, 0xfeca0u);
    c.fl &= ~X86_CF;
    // 0feca1  ret 
    X86_AT(c, 0xfeca1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfec9bu, "ran off the end of a function");
}
void f_000feca2(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0feca2  call 0xfecb7
    X86_AT(c, 0xfeca2u);
    push32(c, 0xfeca7u); f_000fecb7(c); X86_RET(c, 0xfeca7u);
    X86_TICK(c, 12);
    // 0feca7  clc 
    X86_AT(c, 0xfeca7u);
    c.fl &= ~X86_CF;
    // 0feca8  ret 
    X86_AT(c, 0xfeca8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfeca2u, "ran off the end of a function");
}
void f_000feca9(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0feca9  call 0xfecb7
    X86_AT(c, 0xfeca9u);
    push32(c, 0xfecaeu); f_000fecb7(c); X86_RET(c, 0xfecaeu);
    X86_TICK(c, 12);
    // 0fecae  clc 
    X86_AT(c, 0xfecaeu);
    c.fl &= ~X86_CF;
    // 0fecaf  ret 
    X86_AT(c, 0xfecafu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfeca9u, "ran off the end of a function");
}
void f_000fecb0(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0fecb0  call 0xfecdb
    X86_AT(c, 0xfecb0u);
    push32(c, 0xfecb5u); f_000fecdb(c); X86_RET(c, 0xfecb5u);
    X86_TICK(c, 12);
    // 0fecb5  clc 
    X86_AT(c, 0xfecb5u);
    c.fl &= ~X86_CF;
    // 0fecb6  ret 
    X86_AT(c, 0xfecb6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfecb0u, "ran off the end of a function");
}
void f_000fecb7(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0fecb7  mov dl, byte ptr es:[esi + 1]
    X86_AT(c, 0xfecb7u);
    s8(c, 2, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x1u))));
    // 0fecbb  call 0xfed97
    X86_AT(c, 0xfecbbu);
    push32(c, 0xfecc0u); f_000fed97(c); X86_RET(c, 0xfecc0u);
    X86_TICK(c, 5);
    // 0fecc0  jb 0xfecda
    X86_AT(c, 0xfecc0u);
    if (x86_cc(c, 2)) { goto L_fecda; }
    X86_TICK(c, 7);
    // 0fecc2  call 0xfe7ae
    X86_AT(c, 0xfecc2u);
    push32(c, 0xfecc7u); f_000fe7ae(c); X86_RET(c, 0xfecc7u);
    X86_TICK(c, 7);
    // 0fecc7  call 0xfedaa
    X86_AT(c, 0xfecc7u);
    push32(c, 0xfecccu); f_000fedaa(c); X86_RET(c, 0xfecccu);
    X86_TICK(c, 7);
    // 0feccc  call 0xff3a9
    X86_AT(c, 0xfecccu);
    push32(c, 0xfecd1u); f_000ff3a9(c); X86_RET(c, 0xfecd1u);
    X86_TICK(c, 11);
    // 0fecd1  mov al, byte ptr es:[esi + 4]
    X86_AT(c, 0xfecd1u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x4u))));
    // 0fecd5  call 0xff3a9
    X86_AT(c, 0xfecd5u);
    push32(c, 0xfecdau); f_000ff3a9(c); X86_RET(c, 0xfecdau);
L_fecda:
    X86_TICK(c, 10);
    // 0fecda  ret 
    X86_AT(c, 0xfecdau);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfecb7u, "ran off the end of a function");
}
void f_000fecdb(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0fecdb  mov dl, byte ptr es:[esi + 1]
    X86_AT(c, 0xfecdbu);
    s8(c, 2, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x1u))));
    // 0fecdf  call 0xfed97
    X86_AT(c, 0xfecdfu);
    push32(c, 0xfece4u); f_000fed97(c); X86_RET(c, 0xfece4u);
    X86_TICK(c, 5);
    // 0fece4  jb 0xfed07
    X86_AT(c, 0xfece4u);
    if (x86_cc(c, 2)) { goto L_fed07; }
    X86_TICK(c, 7);
    // 0fece6  call 0xfe7ae
    X86_AT(c, 0xfece6u);
    push32(c, 0xfecebu); f_000fe7ae(c); X86_RET(c, 0xfecebu);
    X86_TICK(c, 7);
    // 0feceb  call 0xfedaa
    X86_AT(c, 0xfecebu);
    push32(c, 0xfecf0u); f_000fedaa(c); X86_RET(c, 0xfecf0u);
    X86_TICK(c, 7);
    // 0fecf0  call 0xff3a9
    X86_AT(c, 0xfecf0u);
    push32(c, 0xfecf5u); f_000ff3a9(c); X86_RET(c, 0xfecf5u);
    X86_TICK(c, 11);
    // 0fecf5  mov al, byte ptr es:[esi + 4]
    X86_AT(c, 0xfecf5u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x4u))));
    // 0fecf9  call 0xff3a9
    X86_AT(c, 0xfecf9u);
    push32(c, 0xfecfeu); f_000ff3a9(c); X86_RET(c, 0xfecfeu);
    X86_TICK(c, 11);
    // 0fecfe  mov al, byte ptr es:[esi + 5]
    X86_AT(c, 0xfecfeu);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x5u))));
    // 0fed02  call 0xff3a9
    X86_AT(c, 0xfed02u);
    push32(c, 0xfed07u); f_000ff3a9(c); X86_RET(c, 0xfed07u);
L_fed07:
    X86_TICK(c, 10);
    // 0fed07  ret 
    X86_AT(c, 0xfed07u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfecdbu, "ran off the end of a function");
}
void f_000fed08(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0fed08  mov dl, byte ptr es:[esi + 1]
    X86_AT(c, 0xfed08u);
    s8(c, 2, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x1u))));
    // 0fed0c  call 0xfed97
    X86_AT(c, 0xfed0cu);
    push32(c, 0xfed11u); f_000fed97(c); X86_RET(c, 0xfed11u);
    X86_TICK(c, 5);
    // 0fed11  jae 0xfed2d
    X86_AT(c, 0xfed11u);
    if (x86_cc(c, 3)) { goto L_fed2d; }
    X86_TICK(c, 7);
    // 0fed13  call 0xfee25
    X86_AT(c, 0xfed13u);
    push32(c, 0xfed18u); f_000fee25(c); X86_RET(c, 0xfed18u);
    X86_TICK(c, 11);
    // 0fed18  mov al, byte ptr es:[esi]
    X86_AT(c, 0xfed18u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6]))));
    // 0fed1b  cmp al, 0xfe
    X86_AT(c, 0xfed1bu);
    (void)x86_sub(c, g8(c, 0), 0xFEu, 0, 1);
    // 0fed1d  je 0xfed95
    X86_AT(c, 0xfed1du);
    if (x86_cc(c, 4)) { goto L_fed95; }
    X86_TICK(c, 7);
    // 0fed23  cmp al, 0xfd
    X86_AT(c, 0xfed23u);
    (void)x86_sub(c, g8(c, 0), 0xFDu, 0, 1);
    // 0fed25  je 0xfed95
    X86_AT(c, 0xfed25u);
    if (x86_cc(c, 4)) { goto L_fed95; }
    X86_TICK(c, 12);
    // 0fed2b  clc 
    X86_AT(c, 0xfed2bu);
    c.fl &= ~X86_CF;
    // 0fed2c  ret 
    X86_AT(c, 0xfed2cu);
    c.eip = pop32(c); return;
L_fed2d:
    X86_TICK(c, 7);
    // 0fed2d  call 0xfe7ae
    X86_AT(c, 0xfed2du);
    push32(c, 0xfed32u); f_000fe7ae(c); X86_RET(c, 0xfed32u);
    X86_TICK(c, 7);
    // 0fed32  call 0xfedaa
    X86_AT(c, 0xfed32u);
    push32(c, 0xfed37u); f_000fedaa(c); X86_RET(c, 0xfed37u);
    X86_TICK(c, 9);
    // 0fed37  mov ch, al
    X86_AT(c, 0xfed37u);
    s8(c, 5, g8(c, 0));
    // 0fed39  call 0xff3a9
    X86_AT(c, 0xfed39u);
    push32(c, 0xfed3eu); f_000ff3a9(c); X86_RET(c, 0xfed3eu);
    X86_TICK(c, 11);
    // 0fed3e  mov al, byte ptr es:[esi + 4]
    X86_AT(c, 0xfed3eu);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x4u))));
    // 0fed42  call 0xfedc7
    X86_AT(c, 0xfed42u);
    push32(c, 0xfed47u); f_000fedc7(c); X86_RET(c, 0xfed47u);
    X86_TICK(c, 9);
    // 0fed47  mov cl, al
    X86_AT(c, 0xfed47u);
    s8(c, 1, g8(c, 0));
    // 0fed49  call 0xff3a9
    X86_AT(c, 0xfed49u);
    push32(c, 0xfed4eu); f_000ff3a9(c); X86_RET(c, 0xfed4eu);
    X86_TICK(c, 11);
    // 0fed4e  mov al, byte ptr es:[esi + 5]
    X86_AT(c, 0xfed4eu);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x5u))));
    // 0fed52  call 0xfedfa
    X86_AT(c, 0xfed52u);
    push32(c, 0xfed57u); f_000fedfa(c); X86_RET(c, 0xfed57u);
    X86_TICK(c, 7);
    // 0fed57  call 0xff3a9
    X86_AT(c, 0xfed57u);
    push32(c, 0xfed5cu); f_000ff3a9(c); X86_RET(c, 0xfed5cu);
    X86_TICK(c, 7);
    // 0fed5c  call 0xfee25
    X86_AT(c, 0xfed5cu);
    push32(c, 0xfed61u); f_000fee25(c); X86_RET(c, 0xfed61u);
    X86_TICK(c, 11);
    // 0fed61  mov al, byte ptr es:[esi]
    X86_AT(c, 0xfed61u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6]))));
    // 0fed64  cmp al, 0xfe
    X86_AT(c, 0xfed64u);
    (void)x86_sub(c, g8(c, 0), 0xFEu, 0, 1);
    // 0fed66  je 0xfed95
    X86_AT(c, 0xfed66u);
    if (x86_cc(c, 4)) { goto L_fed95; }
    X86_TICK(c, 7);
    // 0fed68  cmp al, 0xfd
    X86_AT(c, 0xfed68u);
    (void)x86_sub(c, g8(c, 0), 0xFDu, 0, 1);
    // 0fed6a  je 0xfed95
    X86_AT(c, 0xfed6au);
    if (x86_cc(c, 4)) { goto L_fed95; }
    X86_TICK(c, 39);
    // 0fed6c  push bx
    X86_AT(c, 0xfed6cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); push16(c, v); }
    // 0fed6e  mov ax, word ptr es:[esi + 1]
    X86_AT(c, 0xfed6eu);
    s16(c, 0, rd16((c.sbase[0] + (uint32_t)(c.r[6] + 0x1u))));
    // 0fed73  shl al, 4
    X86_AT(c, 0xfed73u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 0fed76  shr ax, 4
    X86_AT(c, 0xfed76u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 0fed7a  mov bx, word ptr es:[esi + 3]
    X86_AT(c, 0xfed7au);
    s16(c, 3, rd16((c.sbase[0] + (uint32_t)(c.r[6] + 0x3u))));
    // 0fed7f  shl bl, 4
    X86_AT(c, 0xfed7fu);
    { uint32_t v = g8(c, 3); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 3, r); }
    // 0fed82  shr bx, 4
    X86_AT(c, 0xfed82u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 2, w); if (w) s16(c, 3, r); }
    // 0fed86  mov ah, bl
    X86_AT(c, 0xfed86u);
    s8(c, 4, g8(c, 3));
    // 0fed88  pop bx
    X86_AT(c, 0xfed88u);
    { uint32_t v = pop16(c); s16(c, 3, v); }
    // 0fed8a  mov bh, byte ptr es:[esi + 5]
    X86_AT(c, 0xfed8au);
    s8(c, 7, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x5u))));
    // 0fed8e  call 0xfee3d
    X86_AT(c, 0xfed8eu);
    push32(c, 0xfed93u); f_000fee3d(c); X86_RET(c, 0xfed93u);
    X86_TICK(c, 12);
    // 0fed93  clc 
    X86_AT(c, 0xfed93u);
    c.fl &= ~X86_CF;
    // 0fed94  ret 
    X86_AT(c, 0xfed94u);
    c.eip = pop32(c); return;
L_fed95:
    X86_TICK(c, 12);
    // 0fed95  stc 
    X86_AT(c, 0xfed95u);
    c.fl |= X86_CF;
    // 0fed96  ret 
    X86_AT(c, 0xfed96u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfed08u, "ran off the end of a function");
}
void f_000fed97(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0fed97  push ebx
    X86_AT(c, 0xfed97u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0fed98  movzx ebx, dl
    X86_AT(c, 0xfed98u);
    c.r[3] = g8(c, 2);
    // 0fed9b  cmp byte ptr [ebx + 0xdeea5], 0
    X86_AT(c, 0xfed9bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDEEA5u))), 0x0u, 0, 1);
    // 0feda2  je 0xfeda7
    X86_AT(c, 0xfeda2u);
    if (x86_cc(c, 4)) { goto L_feda7; }
    X86_TICK(c, 16);
    // 0feda4  pop ebx
    X86_AT(c, 0xfeda4u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0feda5  clc 
    X86_AT(c, 0xfeda5u);
    c.fl &= ~X86_CF;
    // 0feda6  ret 
    X86_AT(c, 0xfeda6u);
    c.eip = pop32(c); return;
L_feda7:
    X86_TICK(c, 16);
    // 0feda7  pop ebx
    X86_AT(c, 0xfeda7u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0feda8  stc 
    X86_AT(c, 0xfeda8u);
    c.fl |= X86_CF;
    // 0feda9  ret 
    X86_AT(c, 0xfeda9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfed97u, "ran off the end of a function");
}
void f_000fedaa(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0fedaa  push ebx
    X86_AT(c, 0xfedaau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0fedab  cmp al, 0xf0
    X86_AT(c, 0xfedabu);
    (void)x86_sub(c, g8(c, 0), 0xF0u, 0, 1);
    // 0fedad  jae 0xfedc5
    X86_AT(c, 0xfedadu);
    if (x86_cc(c, 3)) { goto L_fedc5; }
    X86_TICK(c, 7);
    // 0fedaf  cmp al, 0x80
    X86_AT(c, 0xfedafu);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 0fedb1  jb 0xfedc5
    X86_AT(c, 0xfedb1u);
    if (x86_cc(c, 2)) { goto L_fedc5; }
    X86_TICK(c, 17);
    // 0fedb3  movzx ebx, dl
    X86_AT(c, 0xfedb3u);
    c.r[3] = g8(c, 2);
    // 0fedb6  lea ebx, [ebx + 0xdeee5]
    X86_AT(c, 0xfedb6u);
    c.r[3] = (uint32_t)(c.r[3] + 0xDEEE5u);
    // 0fedbc  cmp byte ptr [ebx], 0xf
    X86_AT(c, 0xfedbcu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3]))), 0xFu, 0, 1);
    // 0fedbf  ja 0xfedc5
    X86_AT(c, 0xfedbfu);
    if (x86_cc(c, 7)) { goto L_fedc5; }
    X86_TICK(c, 8);
    // 0fedc1  and al, 0xf0
    X86_AT(c, 0xfedc1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0fedc3  or al, byte ptr [ebx]
    X86_AT(c, 0xfedc3u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[3] + (uint32_t)(c.r[3]))), 1)); }
L_fedc5:
    X86_TICK(c, 14);
    // 0fedc5  pop ebx
    X86_AT(c, 0xfedc5u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0fedc6  ret 
    X86_AT(c, 0xfedc6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfedaau, "ran off the end of a function");
}
void f_000fedc7(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0fedc7  push ebx
    X86_AT(c, 0xfedc7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0fedc8  movzx ebx, dl
    X86_AT(c, 0xfedc8u);
    c.r[3] = g8(c, 2);
    // 0fedcb  mov bl, byte ptr [ebx + 0xdef25]
    X86_AT(c, 0xfedcbu);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDEF25u))));
    // 0fedd1  or bl, bl
    X86_AT(c, 0xfedd1u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | g8(c, 3), 1)); }
    // 0fedd3  je 0xfedf8
    X86_AT(c, 0xfedd3u);
    if (x86_cc(c, 4)) { goto L_fedf8; }
    X86_TICK(c, 7);
    // 0fedd5  and ax, 0x7f
    X86_AT(c, 0xfedd5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x7Fu, 2)); }
    // 0fedd9  movsx bx, bl
    X86_AT(c, 0xfedd9u);
    s16(c, 3, (uint32_t)(int32_t)(int8_t)g8(c, 3));
    // 0feddd  add ax, bx
    X86_AT(c, 0xfedddu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_fede0:
    X86_TICK(c, 7);
    // 0fede0  cmp ax, 0x7f
    X86_AT(c, 0xfede0u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x7Fu, 0, 2);
    // 0fede4  jle 0xfedec
    X86_AT(c, 0xfede4u);
    if (x86_cc(c, 14)) { goto L_fedec; }
    X86_TICK(c, 9);
    // 0fede6  sub ax, 0xc
    X86_AT(c, 0xfede6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0xCu, 0, 2)); }
    // 0fedea  jmp 0xfede0
    X86_AT(c, 0xfedeau);
    X86_POLL(c, 0xfede0u); goto L_fede0;
L_fedec:
    X86_TICK(c, 7);
    // 0fedec  cmp ax, 0
    X86_AT(c, 0xfedecu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x0u, 0, 2);
    // 0fedf0  jge 0xfedf8
    X86_AT(c, 0xfedf0u);
    if (x86_cc(c, 13)) { goto L_fedf8; }
    X86_TICK(c, 9);
    // 0fedf2  add ax, 0xc
    X86_AT(c, 0xfedf2u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0xCu, 0, 2)); }
    // 0fedf6  jmp 0xfedec
    X86_AT(c, 0xfedf6u);
    X86_POLL(c, 0xfedecu); goto L_fedec;
L_fedf8:
    X86_TICK(c, 14);
    // 0fedf8  pop ebx
    X86_AT(c, 0xfedf8u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0fedf9  ret 
    X86_AT(c, 0xfedf9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfedc7u, "ran off the end of a function");
}
void f_000fedfa(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0fedfa  push ebx
    X86_AT(c, 0xfedfau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0fedfb  movzx ebx, dl
    X86_AT(c, 0xfedfbu);
    c.r[3] = g8(c, 2);
    // 0fedfe  mov bl, byte ptr [ebx + 0xdef05]
    X86_AT(c, 0xfedfeu);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDEF05u))));
    // 0fee04  and ax, 0x7f
    X86_AT(c, 0xfee04u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x7Fu, 2)); }
    // 0fee08  movsx bx, bl
    X86_AT(c, 0xfee08u);
    s16(c, 3, (uint32_t)(int32_t)(int8_t)g8(c, 3));
    // 0fee0c  add ax, bx
    X86_AT(c, 0xfee0cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 0fee0f  cmp ax, 0x7f
    X86_AT(c, 0xfee0fu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x7Fu, 0, 2);
    // 0fee13  jg 0xfee1d
    X86_AT(c, 0xfee13u);
    if (x86_cc(c, 15)) { goto L_fee1d; }
    X86_TICK(c, 7);
    // 0fee15  cmp ax, 1
    X86_AT(c, 0xfee15u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x1u, 0, 2);
    // 0fee19  jl 0xfee21
    X86_AT(c, 0xfee19u);
    if (x86_cc(c, 12)) { goto L_fee21; }
    X86_TICK(c, 7);
    // 0fee1b  jmp 0xfee23
    X86_AT(c, 0xfee1bu);
    goto L_fee23;
L_fee1d:
    X86_TICK(c, 9);
    // 0fee1d  mov al, 0x7f
    X86_AT(c, 0xfee1du);
    s8(c, 0, 0x7Fu);
    // 0fee1f  jmp 0xfee23
    X86_AT(c, 0xfee1fu);
    goto L_fee23;
L_fee21:
    X86_TICK(c, 2);
    // 0fee21  mov al, 1
    X86_AT(c, 0xfee21u);
    s8(c, 0, 0x1u);
L_fee23:
    X86_TICK(c, 14);
    // 0fee23  pop ebx
    X86_AT(c, 0xfee23u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0fee24  ret 
    X86_AT(c, 0xfee24u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfedfau, "ran off the end of a function");
}
void f_000fee25(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0fee25  add esi, 6
    X86_AT(c, 0xfee25u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x6u, 0, 4); }
    // 0fee28  cmp esi, dword ptr [0xdee6d]
    X86_AT(c, 0xfee28u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0xDEE6Du))), 0, 4);
    // 0fee2e  jb 0xfee36
    X86_AT(c, 0xfee2eu);
    if (x86_cc(c, 2)) { goto L_fee36; }
    X86_TICK(c, 4);
    // 0fee30  mov esi, dword ptr [0xdee67]
    X86_AT(c, 0xfee30u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xDEE67u)));
L_fee36:
    X86_TICK(c, 12);
    // 0fee36  mov dword ptr [0xdee61], esi
    X86_AT(c, 0xfee36u);
    wr32((c.sbase[3] + (uint32_t)(0xDEE61u)), c.r[6]);
    // 0fee3c  ret 
    X86_AT(c, 0xfee3cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfee25u, "ran off the end of a function");
}
void f_000fee3d(X86Cpu& c) {
    X86_TICK(c, 8);
    // 0fee3d  push edi
    X86_AT(c, 0xfee3du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0fee3e  push ecx
    X86_AT(c, 0xfee3eu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0fee3f  mov ecx, 0x40
    X86_AT(c, 0xfee3fu);
    c.r[1] = 0x40u;
    // 0fee44  lea edi, [0xdef45]
    X86_AT(c, 0xfee44u);
    c.r[7] = (uint32_t)(0xDEF45u);
L_fee4a:
    X86_TICK(c, 12);
    // 0fee4a  cmp byte ptr [edi], 0
    X86_AT(c, 0xfee4au);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 0fee4d  je 0xfee5c
    X86_AT(c, 0xfee4du);
    if (x86_cc(c, 4)) { goto L_fee5c; }
    X86_TICK(c, 13);
    // 0fee4f  add edi, 6
    X86_AT(c, 0xfee4fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 0fee52  loop 0xfee4a
    X86_AT(c, 0xfee52u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xfee4au); goto L_fee4a; }
    X86_TICK(c, 11);
    // 0fee54  pop ecx
    X86_AT(c, 0xfee54u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 0fee55  call 0xfef33
    X86_AT(c, 0xfee55u);
    push32(c, 0xfee5au); f_000fef33(c); X86_RET(c, 0xfee5au);
    X86_TICK(c, 14);
    // 0fee5a  pop edi
    X86_AT(c, 0xfee5au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0fee5b  ret 
    X86_AT(c, 0xfee5bu);
    c.eip = pop32(c); return;
L_fee5c:
    X86_TICK(c, 19);
    // 0fee5c  pop ecx
    X86_AT(c, 0xfee5cu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 0fee5d  mov byte ptr [edi], ch
    X86_AT(c, 0xfee5du);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), g8(c, 5));
    // 0fee5f  mov byte ptr [edi + 1], bl
    X86_AT(c, 0xfee5fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)), g8(c, 3));
    // 0fee62  mov byte ptr [edi + 2], cl
    X86_AT(c, 0xfee62u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u)), g8(c, 1));
    // 0fee65  mov byte ptr [edi + 3], bh
    X86_AT(c, 0xfee65u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x3u)), g8(c, 7));
    // 0fee68  or ax, ax
    X86_AT(c, 0xfee68u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | (c.r[0] & 0xFFFFu), 2)); }
    // 0fee6b  jne 0xfee6f
    X86_AT(c, 0xfee6bu);
    if (x86_cc(c, 5)) { goto L_fee6f; }
    X86_TICK(c, 2);
    // 0fee6d  inc ax
    X86_AT(c, 0xfee6du);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
L_fee6f:
    X86_TICK(c, 22);
    // 0fee6f  mov word ptr [edi + 4], ax
    X86_AT(c, 0xfee6fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 0fee73  inc word ptr [0xdee90]
    X86_AT(c, 0xfee73u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDEE90u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0fee7a  pop edi
    X86_AT(c, 0xfee7au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0fee7b  ret 
    X86_AT(c, 0xfee7bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfee3du, "ran off the end of a function");
}
void f_000fee7c(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0fee7c  mov dl, byte ptr es:[esi + 1]
    X86_AT(c, 0xfee7cu);
    s8(c, 2, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x1u))));
    // 0fee80  call 0xfe7ae
    X86_AT(c, 0xfee80u);
    push32(c, 0xfee85u); f_000fe7ae(c); X86_RET(c, 0xfee85u);
    X86_TICK(c, 9);
    // 0fee85  mov al, 0xf0
    X86_AT(c, 0xfee85u);
    s8(c, 0, 0xF0u);
    // 0fee87  call 0xff3a9
    X86_AT(c, 0xfee87u);
    push32(c, 0xfee8cu); f_000ff3a9(c); X86_RET(c, 0xfee8cu);
    X86_TICK(c, 7);
    // 0fee8c  call 0xfee25
    X86_AT(c, 0xfee8cu);
    push32(c, 0xfee91u); f_000fee25(c); X86_RET(c, 0xfee91u);
L_fee91:
    X86_TICK(c, 4);
    // 0fee91  push esi
    X86_AT(c, 0xfee91u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0fee92  mov ecx, 6
    X86_AT(c, 0xfee92u);
    c.r[1] = 0x6u;
L_fee97:
    X86_TICK(c, 11);
    // 0fee97  mov al, byte ptr es:[esi]
    X86_AT(c, 0xfee97u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6]))));
    // 0fee9a  cmp al, 0xff
    X86_AT(c, 0xfee9au);
    (void)x86_sub(c, g8(c, 0), 0xFFu, 0, 1);
    // 0fee9c  je 0xfeea7
    X86_AT(c, 0xfee9cu);
    if (x86_cc(c, 4)) { goto L_feea7; }
    X86_TICK(c, 7);
    // 0fee9e  call 0xff3a9
    X86_AT(c, 0xfee9eu);
    push32(c, 0xfeea3u); f_000ff3a9(c); X86_RET(c, 0xfeea3u);
    X86_TICK(c, 7);
    // 0feea3  cmp al, 0x80
    X86_AT(c, 0xfeea3u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 0feea5  jae 0xfeeb7
    X86_AT(c, 0xfeea5u);
    if (x86_cc(c, 3)) { goto L_feeb7; }
L_feea7:
    X86_TICK(c, 13);
    // 0feea7  inc esi
    X86_AT(c, 0xfeea7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0feea8  loop 0xfee97
    X86_AT(c, 0xfeea8u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xfee97u); goto L_fee97; }
    X86_TICK(c, 11);
    // 0feeaa  pop esi
    X86_AT(c, 0xfeeaau);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0feeab  call 0xfee25
    X86_AT(c, 0xfeeabu);
    push32(c, 0xfeeb0u); f_000fee25(c); X86_RET(c, 0xfeeb0u);
    X86_TICK(c, 7);
    // 0feeb0  call 0xfeeba
    X86_AT(c, 0xfeeb0u);
    push32(c, 0xfeeb5u); f_000feeba(c); X86_RET(c, 0xfeeb5u);
    X86_TICK(c, 7);
    // 0feeb5  jmp 0xfee91
    X86_AT(c, 0xfeeb5u);
    X86_POLL(c, 0xfee91u); goto L_fee91;
L_feeb7:
    X86_TICK(c, 16);
    // 0feeb7  pop esi
    X86_AT(c, 0xfeeb7u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0feeb8  clc 
    X86_AT(c, 0xfeeb8u);
    c.fl &= ~X86_CF;
    // 0feeb9  ret 
    X86_AT(c, 0xfeeb9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfee7cu, "ran off the end of a function");
}
void f_000feeba(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0feeba  pushal 
    X86_AT(c, 0xfeebau);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0feebb  mov ecx, 0x19
    X86_AT(c, 0xfeebbu);
    c.r[1] = 0x19u;
L_feec0:
    X86_TICK(c, 13);
    // 0feec0  nop 
    X86_AT(c, 0xfeec0u);
    // 0feec1  loop 0xfeec0
    X86_AT(c, 0xfeec1u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xfeec0u); goto L_feec0; }
    X86_TICK(c, 34);
    // 0feec3  popal 
    X86_AT(c, 0xfeec3u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0feec4  ret 
    X86_AT(c, 0xfeec4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfeebau, "ran off the end of a function");
}
void f_000feec5(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0feec5  clc 
    X86_AT(c, 0xfeec5u);
    c.fl &= ~X86_CF;
    // 0feec6  ret 
    X86_AT(c, 0xfeec6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfeec5u, "ran off the end of a function");
}
void f_000feec7(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0feec7  clc 
    X86_AT(c, 0xfeec7u);
    c.fl &= ~X86_CF;
    // 0feec8  ret 
    X86_AT(c, 0xfeec8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfeec7u, "ran off the end of a function");
}
void f_000feec9(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0feec9  inc word ptr [0xdee82]
    X86_AT(c, 0xfeec9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDEE82u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0feed0  mov al, byte ptr es:[esi + 1]
    X86_AT(c, 0xfeed0u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[6] + 0x1u))));
    // 0feed4  mov byte ptr [0xdee78], al
    X86_AT(c, 0xfeed4u);
    wr8((c.sbase[3] + (uint32_t)(0xDEE78u)), g8(c, 0));
    // 0feed9  clc 
    X86_AT(c, 0xfeed9u);
    c.fl &= ~X86_CF;
    // 0feeda  ret 
    X86_AT(c, 0xfeedau);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfeec9u, "ran off the end of a function");
}
void f_000feedb(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0feedb  mov ax, word ptr es:[esi + 4]
    X86_AT(c, 0xfeedbu);
    s16(c, 0, rd16((c.sbase[0] + (uint32_t)(c.r[6] + 0x4u))));
    // 0feee0  shl al, 1
    X86_AT(c, 0xfeee0u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 0feee2  shr ax, 1
    X86_AT(c, 0xfeee2u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 0feee5  mov byte ptr [0xdee79], al
    X86_AT(c, 0xfeee5u);
    wr8((c.sbase[3] + (uint32_t)(0xDEE79u)), g8(c, 0));
    // 0feeea  call 0xff8df
    X86_AT(c, 0xfeeeau);
    push32(c, 0xfeeefu); f_000ff8df(c); X86_RET(c, 0xfeeefu);
    X86_TICK(c, 12);
    // 0feeef  clc 
    X86_AT(c, 0xfeeefu);
    c.fl &= ~X86_CF;
    // 0feef0  ret 
    X86_AT(c, 0xfeef0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfeedbu, "ran off the end of a function");
}
void f_000feef1(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0feef1  movzx ecx, word ptr [0xdee90]
    X86_AT(c, 0xfeef1u);
    c.r[1] = rd16((c.sbase[3] + (uint32_t)(0xDEE90u)));
    // 0feef8  or ecx, ecx
    X86_AT(c, 0xfeef8u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v | c.r[1], 4); }
    // 0feefa  je 0xfef32
    X86_AT(c, 0xfeefau);
    if (x86_cc(c, 4)) { goto L_fef32; }
    X86_TICK(c, 2);
    // 0feefc  lea edi, [0xdef45]
    X86_AT(c, 0xfeefcu);
    c.r[7] = (uint32_t)(0xDEF45u);
L_fef02:
    X86_TICK(c, 12);
    // 0fef02  cmp byte ptr [edi], 0
    X86_AT(c, 0xfef02u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 0fef05  jne 0xfef0c
    X86_AT(c, 0xfef05u);
    if (x86_cc(c, 5)) { goto L_fef0c; }
    X86_TICK(c, 9);
    // 0fef07  add edi, 6
    X86_AT(c, 0xfef07u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 0fef0a  jmp 0xfef02
    X86_AT(c, 0xfef0au);
    X86_POLL(c, 0xfef02u); goto L_fef02;
L_fef0c:
    X86_TICK(c, 11);
    // 0fef0c  dec word ptr [edi + 4]
    X86_AT(c, 0xfef0cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 0fef10  jne 0xfef2d
    X86_AT(c, 0xfef10u);
    if (x86_cc(c, 5)) { goto L_fef2d; }
    X86_TICK(c, 28);
    // 0fef12  push ecx
    X86_AT(c, 0xfef12u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0fef13  xor ch, ch
    X86_AT(c, 0xfef13u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v ^ g8(c, 5), 1)); }
    // 0fef15  xchg byte ptr [edi], ch
    X86_AT(c, 0xfef15u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7])); uint32_t t = rd8(ea); wr8(ea, g8(c, 5)); s8(c, 5, t); }
    // 0fef17  mov bl, byte ptr [edi + 1]
    X86_AT(c, 0xfef17u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 0fef1a  mov cl, byte ptr [edi + 2]
    X86_AT(c, 0xfef1au);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))));
    // 0fef1d  mov bh, byte ptr [edi + 3]
    X86_AT(c, 0xfef1du);
    s8(c, 7, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x3u))));
    // 0fef20  call 0xfef33
    X86_AT(c, 0xfef20u);
    push32(c, 0xfef25u); f_000fef33(c); X86_RET(c, 0xfef25u);
    X86_TICK(c, 10);
    // 0fef25  dec word ptr [0xdee90]
    X86_AT(c, 0xfef25u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDEE90u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 0fef2c  pop ecx
    X86_AT(c, 0xfef2cu);
    { uint32_t v = pop32(c); c.r[1] = v; }
L_fef2d:
    X86_TICK(c, 13);
    // 0fef2d  add edi, 6
    X86_AT(c, 0xfef2du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x6u, 0, 4); }
    // 0fef30  loop 0xfef02
    X86_AT(c, 0xfef30u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xfef02u); goto L_fef02; }
L_fef32:
    X86_TICK(c, 10);
    // 0fef32  ret 
    X86_AT(c, 0xfef32u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfeef1u, "ran off the end of a function");
}
void f_000fef33(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0fef33  push eax
    X86_AT(c, 0xfef33u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0fef34  or bh, bh
    X86_AT(c, 0xfef34u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v | g8(c, 7), 1)); }
    // 0fef36  je 0xfef3b
    X86_AT(c, 0xfef36u);
    if (x86_cc(c, 4)) { goto L_fef3b; }
    X86_TICK(c, 2);
    // 0fef38  and ch, 0x8f
    X86_AT(c, 0xfef38u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v & 0x8Fu, 1)); }
L_fef3b:
    X86_TICK(c, 9);
    // 0fef3b  mov al, ch
    X86_AT(c, 0xfef3bu);
    s8(c, 0, g8(c, 5));
    // 0fef3d  call 0xff3a9
    X86_AT(c, 0xfef3du);
    push32(c, 0xfef42u); f_000ff3a9(c); X86_RET(c, 0xfef42u);
    X86_TICK(c, 9);
    // 0fef42  mov al, cl
    X86_AT(c, 0xfef42u);
    s8(c, 0, g8(c, 1));
    // 0fef44  call 0xff3a9
    X86_AT(c, 0xfef44u);
    push32(c, 0xfef49u); f_000ff3a9(c); X86_RET(c, 0xfef49u);
    X86_TICK(c, 9);
    // 0fef49  mov al, bh
    X86_AT(c, 0xfef49u);
    s8(c, 0, g8(c, 7));
    // 0fef4b  call 0xff3a9
    X86_AT(c, 0xfef4bu);
    push32(c, 0xfef50u); f_000ff3a9(c); X86_RET(c, 0xfef50u);
    X86_TICK(c, 14);
    // 0fef50  pop eax
    X86_AT(c, 0xfef50u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0fef51  ret 
    X86_AT(c, 0xfef51u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfef33u, "ran off the end of a function");
}
void f_000ff356(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0ff356  cld 
    X86_AT(c, 0xff356u);
    c.fl &= ~X86_DF;
    // 0ff357  push esi
    X86_AT(c, 0xff357u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ff358  push ebx
    X86_AT(c, 0xff358u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ff359  and ebx, 7
    X86_AT(c, 0xff359u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 0ff35c  shl ebx, 5
    X86_AT(c, 0xff35cu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[3] = r; }
    // 0ff35f  lea ebx, [ebx + 0xdf1f5]
    X86_AT(c, 0xff35fu);
    c.r[3] = (uint32_t)(c.r[3] + 0xDF1F5u);
    // 0ff365  cmp word ptr [ebx + 0x10], 0
    X86_AT(c, 0xff365u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0x0u, 0, 2);
    // 0ff36a  je 0xff385
    X86_AT(c, 0xff36au);
    if (x86_cc(c, 4)) { goto L_ff385; }
    X86_TICK(c, 28);
    // 0ff36c  mov esi, dword ptr [ebx + 0xc]
    X86_AT(c, 0xff36cu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)));
    // 0ff36f  lodsb al, byte ptr [esi]
    X86_AT(c, 0xff36fu);
    x86_string(c, 3, 1, 0, 4, 3);
    // 0ff370  dec word ptr [ebx + 0x10]
    X86_AT(c, 0xff370u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 0ff374  cmp esi, dword ptr [ebx + 4]
    X86_AT(c, 0xff374u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 0ff377  jne 0xff37b
    X86_AT(c, 0xff377u);
    if (x86_cc(c, 5)) { goto L_ff37b; }
    X86_TICK(c, 4);
    // 0ff379  mov esi, dword ptr [ebx]
    X86_AT(c, 0xff379u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
L_ff37b:
    X86_TICK(c, 16);
    // 0ff37b  mov dword ptr [ebx + 0xc], esi
    X86_AT(c, 0xff37bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)), c.r[6]);
    // 0ff37e  xor ah, ah
    X86_AT(c, 0xff37eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 0ff380  xchg byte ptr [ebx + 0x19], ah
    X86_AT(c, 0xff380u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 4)); s8(c, 4, t); }
    // 0ff383  jmp 0xff387
    X86_AT(c, 0xff383u);
    goto L_ff387;
L_ff385:
    X86_TICK(c, 2);
    // 0ff385  mov ah, 1
    X86_AT(c, 0xff385u);
    s8(c, 4, 0x1u);
L_ff387:
    X86_TICK(c, 7);
    // 0ff387  cmp ah, 1
    X86_AT(c, 0xff387u);
    (void)x86_sub(c, g8(c, 4), 0x1u, 0, 1);
    // 0ff38a  jbe 0xff392
    X86_AT(c, 0xff38au);
    if (x86_cc(c, 6)) { goto L_ff392; }
    X86_TICK(c, 2);
    // 0ff38c  mov byte ptr [0xdee60], ah
    X86_AT(c, 0xff38cu);
    wr8((c.sbase[3] + (uint32_t)(0xDEE60u)), g8(c, 4));
L_ff392:
    X86_TICK(c, 18);
    // 0ff392  pop ebx
    X86_AT(c, 0xff392u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ff393  pop esi
    X86_AT(c, 0xff393u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ff394  ret 
    X86_AT(c, 0xff394u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xff356u, "ran off the end of a function");
}
void f_000ff3a9(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0ff3a9  push eax
    X86_AT(c, 0xff3a9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ff3aa  push ebx
    X86_AT(c, 0xff3aau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ff3ab  push edi
    X86_AT(c, 0xff3abu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ff3ac  cmp bl, 0xff
    X86_AT(c, 0xff3acu);
    (void)x86_sub(c, g8(c, 3), 0xFFu, 0, 1);
    // 0ff3af  je 0xff42e
    X86_AT(c, 0xff3afu);
    if (x86_cc(c, 4)) { goto L_ff42e; }
    X86_TICK(c, 19);
    // 0ff3b5  and ebx, 7
    X86_AT(c, 0xff3b5u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 0ff3b8  shl ebx, 5
    X86_AT(c, 0xff3b8u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[3] = r; }
    // 0ff3bb  lea ebx, [ebx + 0xdf0f5]
    X86_AT(c, 0xff3bbu);
    c.r[3] = (uint32_t)(c.r[3] + 0xDF0F5u);
    // 0ff3c1  cmp byte ptr [ebx + 0x18], 0
    X86_AT(c, 0xff3c1u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x18u))), 0x0u, 0, 1);
    // 0ff3c5  je 0xff439
    X86_AT(c, 0xff3c5u);
    if (x86_cc(c, 4)) { goto L_ff439; }
    X86_TICK(c, 7);
    // 0ff3cb  cmp al, 0x80
    X86_AT(c, 0xff3cbu);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 0ff3cd  jb 0xff3e3
    X86_AT(c, 0xff3cdu);
    if (x86_cc(c, 2)) { goto L_ff3e3; }
    X86_TICK(c, 7);
    // 0ff3cf  cmp al, 0xf8
    X86_AT(c, 0xff3cfu);
    (void)x86_sub(c, g8(c, 0), 0xF8u, 0, 1);
    // 0ff3d1  jae 0xff3e3
    X86_AT(c, 0xff3d1u);
    if (x86_cc(c, 3)) { goto L_ff3e3; }
    X86_TICK(c, 7);
    // 0ff3d3  cmp al, 0xf0
    X86_AT(c, 0xff3d3u);
    (void)x86_sub(c, g8(c, 0), 0xF0u, 0, 1);
    // 0ff3d5  jae 0xff3e0
    X86_AT(c, 0xff3d5u);
    if (x86_cc(c, 3)) { goto L_ff3e0; }
    X86_TICK(c, 11);
    // 0ff3d7  cmp al, byte ptr [ebx + 0x1b]
    X86_AT(c, 0xff3d7u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Bu))), 0, 1);
    // 0ff3da  je 0xff433
    X86_AT(c, 0xff3dau);
    if (x86_cc(c, 4)) { goto L_ff433; }
L_ff3e0:
    X86_TICK(c, 2);
    // 0ff3e0  mov byte ptr [ebx + 0x1b], al
    X86_AT(c, 0xff3e0u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Bu)), g8(c, 0));
L_ff3e3:
    X86_TICK(c, 16);
    // 0ff3e3  mov edi, dword ptr [ebx + 8]
    X86_AT(c, 0xff3e3u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0ff3e6  cmp word ptr [ebx + 0x10], 0x10
    X86_AT(c, 0xff3e6u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0x10u, 0, 2);
    // 0ff3eb  je 0xff3e3
    X86_AT(c, 0xff3ebu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xff3e3u); goto L_ff3e3; }
    X86_TICK(c, 24);
    // 0ff3ed  mov byte ptr [edi], al
    X86_AT(c, 0xff3edu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), g8(c, 0));
    // 0ff3ef  inc edi
    X86_AT(c, 0xff3efu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0ff3f0  pushf 
    X86_AT(c, 0xff3f0u);
    push16(c, c.fl & 0xFFFFu);
    // 0ff3f2  cli 
    X86_AT(c, 0xff3f2u);
    c.fl &= ~X86_IF;
    // 0ff3f3  cmp word ptr [ebx + 0x10], 0
    X86_AT(c, 0xff3f3u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0x0u, 0, 2);
    // 0ff3f8  jne 0xff415
    X86_AT(c, 0xff3f8u);
    if (x86_cc(c, 5)) { goto L_ff415; }
    X86_TICK(c, 32);
    // 0ff3fe  mov al, byte ptr [ebx + 0x1a]
    X86_AT(c, 0xff3feu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Au))));
    // 0ff401  or al, byte ptr [0xdf0c5]
    X86_AT(c, 0xff401u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[3] + (uint32_t)(0xDF0C5u))), 1)); }
    // 0ff407  mov byte ptr [0xdf0c5], al
    X86_AT(c, 0xff407u);
    wr8((c.sbase[3] + (uint32_t)(0xDF0C5u)), g8(c, 0));
    // 0ff40c  push dx
    X86_AT(c, 0xff40cu);
    { uint32_t v = (c.r[2] & 0xFFFFu); push16(c, v); }
    // 0ff40e  mov dx, 0xe70
    X86_AT(c, 0xff40eu);
    s16(c, 2, 0xE70u);
    // 0ff412  out dx, al
    X86_AT(c, 0xff412u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0ff413  pop dx
    X86_AT(c, 0xff413u);
    { uint32_t v = pop16(c); s16(c, 2, v); }
L_ff415:
    X86_TICK(c, 23);
    // 0ff415  inc word ptr [ebx + 0x10]
    X86_AT(c, 0xff415u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0ff419  popf 
    X86_AT(c, 0xff419u);
    x86_popfd(c, 2);
    // 0ff41b  cmp edi, dword ptr [ebx + 4]
    X86_AT(c, 0xff41bu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 0ff41e  jne 0xff426
    X86_AT(c, 0xff41eu);
    if (x86_cc(c, 5)) { goto L_ff426; }
    X86_TICK(c, 4);
    // 0ff424  mov edi, dword ptr [ebx]
    X86_AT(c, 0xff424u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
L_ff426:
    X86_TICK(c, 9);
    // 0ff426  mov dword ptr [ebx + 8], edi
    X86_AT(c, 0xff426u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)), c.r[7]);
    // 0ff429  jmp 0xff433
    X86_AT(c, 0xff429u);
    goto L_ff433;
L_ff42e:
    X86_TICK(c, 7);
    // 0ff42e  call 0xffe24
    X86_AT(c, 0xff42eu);
    push32(c, 0xff433u); f_000ffe24(c); X86_RET(c, 0xff433u);
L_ff433:
    X86_TICK(c, 24);
    // 0ff433  pop edi
    X86_AT(c, 0xff433u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ff434  pop ebx
    X86_AT(c, 0xff434u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ff435  pop eax
    X86_AT(c, 0xff435u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0ff436  xor ah, ah
    X86_AT(c, 0xff436u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 0ff438  ret 
    X86_AT(c, 0xff438u);
    c.eip = pop32(c); return;
L_ff439:
    X86_TICK(c, 24);
    // 0ff439  pop edi
    X86_AT(c, 0xff439u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ff43a  pop ebx
    X86_AT(c, 0xff43au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ff43b  pop eax
    X86_AT(c, 0xff43bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0ff43c  mov ah, 0xf0
    X86_AT(c, 0xff43cu);
    s8(c, 4, 0xF0u);
    // 0ff43e  ret 
    X86_AT(c, 0xff43eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xff3a9u, "ran off the end of a function");
}
void f_000ff43f(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0ff43f  push ebx
    X86_AT(c, 0xff43fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ff440  mov bl, byte ptr [0xdee92]
    X86_AT(c, 0xff440u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(0xDEE92u))));
    // 0ff446  cmp bl, 8
    X86_AT(c, 0xff446u);
    (void)x86_sub(c, g8(c, 3), 0x8u, 0, 1);
    // 0ff449  jae 0xff450
    X86_AT(c, 0xff449u);
    if (x86_cc(c, 3)) { goto L_ff450; }
    X86_TICK(c, 7);
    // 0ff44b  call 0xff3a9
    X86_AT(c, 0xff44bu);
    push32(c, 0xff450u); f_000ff3a9(c); X86_RET(c, 0xff450u);
L_ff450:
    X86_TICK(c, 14);
    // 0ff450  pop ebx
    X86_AT(c, 0xff450u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ff451  ret 
    X86_AT(c, 0xff451u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xff43fu, "ran off the end of a function");
}
void f_000ff452(X86Cpu& c) {
    X86_TICK(c, 49);
    // 0ff452  pushfd 
    X86_AT(c, 0xff452u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0ff453  cli 
    X86_AT(c, 0xff453u);
    c.fl &= ~X86_IF;
    // 0ff454  mov cl, 0x44
    X86_AT(c, 0xff454u);
    s8(c, 1, 0x44u);
    // 0ff456  mov ax, 0x2502
    X86_AT(c, 0xff456u);
    s16(c, 0, 0x2502u);
    // 0ff45a  int 0x21
    X86_AT(c, 0xff45au);
    x86_int(c, 0x21, 0xff45cu);
    X86_TICK(c, 5);
    // 0ff45c  jb 0xff4de
    X86_AT(c, 0xff45cu);
    if (x86_cc(c, 2)) { goto L_ff4de; }
    X86_TICK(c, 9);
    // 0ff462  lea edx, [0xff97f]
    X86_AT(c, 0xff462u);
    c.r[2] = (uint32_t)(0xFF97Fu);
    // 0ff468  cmp ebx, edx
    X86_AT(c, 0xff468u);
    (void)x86_sub(c, c.r[3], c.r[2], 0, 4);
    // 0ff46a  je 0xff4de
    X86_AT(c, 0xff46au);
    if (x86_cc(c, 4)) { goto L_ff4de; }
    X86_TICK(c, 47);
    // 0ff470  mov eax, es
    X86_AT(c, 0xff470u);
    c.r[0] = (uint32_t)c.sreg[0];
    // 0ff472  mov dword ptr [0xdf0ca], ebx
    X86_AT(c, 0xff472u);
    wr32((c.sbase[3] + (uint32_t)(0xDF0CAu)), c.r[3]);
    // 0ff478  mov word ptr [0xdf0ce], ax
    X86_AT(c, 0xff478u);
    wr16((c.sbase[3] + (uint32_t)(0xDF0CEu)), (c.r[0] & 0xFFFFu));
    // 0ff47e  mov cl, 0x44
    X86_AT(c, 0xff47eu);
    s8(c, 1, 0x44u);
    // 0ff480  mov ax, 0x2503
    X86_AT(c, 0xff480u);
    s16(c, 0, 0x2503u);
    // 0ff484  int 0x21
    X86_AT(c, 0xff484u);
    x86_int(c, 0x21, 0xff486u);
    X86_TICK(c, 5);
    // 0ff486  jb 0xff4de
    X86_AT(c, 0xff486u);
    if (x86_cc(c, 2)) { goto L_ff4de; }
    X86_TICK(c, 51);
    // 0ff48c  mov dword ptr [0xdf0d0], ebx
    X86_AT(c, 0xff48cu);
    wr32((c.sbase[3] + (uint32_t)(0xDF0D0u)), c.r[3]);
    // 0ff492  push ds
    X86_AT(c, 0xff492u);
    push32(c, c.sreg[3]);
    // 0ff493  mov eax, cs
    X86_AT(c, 0xff493u);
    c.r[0] = (uint32_t)c.sreg[1];
    // 0ff495  mov ds, eax
    X86_AT(c, 0xff495u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0ff497  mov cl, 0x44
    X86_AT(c, 0xff497u);
    s8(c, 1, 0x44u);
    // 0ff499  lea edx, [0xff97f]
    X86_AT(c, 0xff499u);
    c.r[2] = (uint32_t)(0xFF97Fu);
    // 0ff49f  mov ax, 0x2506
    X86_AT(c, 0xff49fu);
    s16(c, 0, 0x2506u);
    // 0ff4a3  int 0x21
    X86_AT(c, 0xff4a3u);
    x86_int(c, 0x21, 0xff4a5u);
    X86_TICK(c, 9);
    // 0ff4a5  pop ds
    X86_AT(c, 0xff4a5u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0ff4a6  jb 0xff4de
    X86_AT(c, 0xff4a6u);
    if (x86_cc(c, 2)) { goto L_ff4de; }
    X86_TICK(c, 57);
    // 0ff4ac  xor al, al
    X86_AT(c, 0xff4acu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0ff4ae  mov byte ptr [0xdf0c5], al
    X86_AT(c, 0xff4aeu);
    wr8((c.sbase[3] + (uint32_t)(0xDF0C5u)), g8(c, 0));
    // 0ff4b3  mov dx, 0xe70
    X86_AT(c, 0xff4b3u);
    s16(c, 2, 0xE70u);
    // 0ff4b7  out dx, al
    X86_AT(c, 0xff4b7u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0ff4b8  mov al, 0xff
    X86_AT(c, 0xff4b8u);
    s8(c, 0, 0xFFu);
    // 0ff4ba  mov byte ptr [0xdf0c7], al
    X86_AT(c, 0xff4bau);
    wr8((c.sbase[3] + (uint32_t)(0xDF0C7u)), g8(c, 0));
    // 0ff4bf  mov dx, 0xe71
    X86_AT(c, 0xff4bfu);
    s16(c, 2, 0xE71u);
    // 0ff4c3  out dx, al
    X86_AT(c, 0xff4c3u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0ff4c4  mov byte ptr [0xdf0c8], 0
    X86_AT(c, 0xff4c4u);
    wr8((c.sbase[3] + (uint32_t)(0xDF0C8u)), 0x0u);
    // 0ff4cb  in al, 2
    X86_AT(c, 0xff4cbu);
    s8(c, 0, x86_in(c, 0x2u, 1));
    // 0ff4cd  jmp 0xff4cf
    X86_AT(c, 0xff4cdu);
    goto L_ff4cf;
L_ff4cf:
    X86_TICK(c, 7);
    // 0ff4cf  jmp 0xff4d1
    X86_AT(c, 0xff4cfu);
    goto L_ff4d1;
L_ff4d1:
    X86_TICK(c, 7);
    // 0ff4d1  jmp 0xff4d3
    X86_AT(c, 0xff4d1u);
    goto L_ff4d3;
L_ff4d3:
    X86_TICK(c, 36);
    // 0ff4d3  mov dl, 0x10
    X86_AT(c, 0xff4d3u);
    s8(c, 2, 0x10u);
    // 0ff4d5  not dl
    X86_AT(c, 0xff4d5u);
    { uint32_t v = g8(c, 2); s8(c, 2, ~v & 0xFFu); }
    // 0ff4d7  and al, dl
    X86_AT(c, 0xff4d7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 2), 1)); }
    // 0ff4d9  out 2, al
    X86_AT(c, 0xff4d9u);
    x86_out(c, 0x2u, 1, g8(c, 0));
    // 0ff4db  popfd 
    X86_AT(c, 0xff4dbu);
    x86_popfd(c, 4);
    // 0ff4dc  clc 
    X86_AT(c, 0xff4dcu);
    c.fl &= ~X86_CF;
    // 0ff4dd  ret 
    X86_AT(c, 0xff4ddu);
    c.eip = pop32(c); return;
L_ff4de:
    X86_TICK(c, 18);
    // 0ff4de  popf 
    X86_AT(c, 0xff4deu);
    x86_popfd(c, 2);
    // 0ff4e0  stc 
    X86_AT(c, 0xff4e0u);
    c.fl |= X86_CF;
    // 0ff4e1  ret 
    X86_AT(c, 0xff4e1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xff452u, "ran off the end of a function");
}
void f_000ff4e2(X86Cpu& c) {
    X86_TICK(c, 49);
    // 0ff4e2  pushfd 
    X86_AT(c, 0xff4e2u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0ff4e3  cli 
    X86_AT(c, 0xff4e3u);
    c.fl &= ~X86_IF;
    // 0ff4e4  mov cl, 0x45
    X86_AT(c, 0xff4e4u);
    s8(c, 1, 0x45u);
    // 0ff4e6  mov ax, 0x2502
    X86_AT(c, 0xff4e6u);
    s16(c, 0, 0x2502u);
    // 0ff4ea  int 0x21
    X86_AT(c, 0xff4eau);
    x86_int(c, 0x21, 0xff4ecu);
    X86_TICK(c, 5);
    // 0ff4ec  jb 0xff55b
    X86_AT(c, 0xff4ecu);
    if (x86_cc(c, 2)) { goto L_ff55b; }
    X86_TICK(c, 9);
    // 0ff4f2  lea edx, [0xff9fa]
    X86_AT(c, 0xff4f2u);
    c.r[2] = (uint32_t)(0xFF9FAu);
    // 0ff4f8  cmp ebx, edx
    X86_AT(c, 0xff4f8u);
    (void)x86_sub(c, c.r[3], c.r[2], 0, 4);
    // 0ff4fa  je 0xff55b
    X86_AT(c, 0xff4fau);
    if (x86_cc(c, 4)) { goto L_ff55b; }
    X86_TICK(c, 47);
    // 0ff500  mov eax, es
    X86_AT(c, 0xff500u);
    c.r[0] = (uint32_t)c.sreg[0];
    // 0ff502  mov dword ptr [0xdf0d4], ebx
    X86_AT(c, 0xff502u);
    wr32((c.sbase[3] + (uint32_t)(0xDF0D4u)), c.r[3]);
    // 0ff508  mov word ptr [0xdf0d8], ax
    X86_AT(c, 0xff508u);
    wr16((c.sbase[3] + (uint32_t)(0xDF0D8u)), (c.r[0] & 0xFFFFu));
    // 0ff50e  mov cl, 0x45
    X86_AT(c, 0xff50eu);
    s8(c, 1, 0x45u);
    // 0ff510  mov ax, 0x2503
    X86_AT(c, 0xff510u);
    s16(c, 0, 0x2503u);
    // 0ff514  int 0x21
    X86_AT(c, 0xff514u);
    x86_int(c, 0x21, 0xff516u);
    X86_TICK(c, 5);
    // 0ff516  jb 0xff55b
    X86_AT(c, 0xff516u);
    if (x86_cc(c, 2)) { goto L_ff55b; }
    X86_TICK(c, 51);
    // 0ff51c  mov dword ptr [0xdf0d0], ebx
    X86_AT(c, 0xff51cu);
    wr32((c.sbase[3] + (uint32_t)(0xDF0D0u)), c.r[3]);
    // 0ff522  push ds
    X86_AT(c, 0xff522u);
    push32(c, c.sreg[3]);
    // 0ff523  mov eax, cs
    X86_AT(c, 0xff523u);
    c.r[0] = (uint32_t)c.sreg[1];
    // 0ff525  mov ds, eax
    X86_AT(c, 0xff525u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0ff527  lea edx, [0xff9fa]
    X86_AT(c, 0xff527u);
    c.r[2] = (uint32_t)(0xFF9FAu);
    // 0ff52d  mov cl, 0x45
    X86_AT(c, 0xff52du);
    s8(c, 1, 0x45u);
    // 0ff52f  mov ax, 0x2506
    X86_AT(c, 0xff52fu);
    s16(c, 0, 0x2506u);
    // 0ff533  int 0x21
    X86_AT(c, 0xff533u);
    x86_int(c, 0x21, 0xff535u);
    X86_TICK(c, 9);
    // 0ff535  pop ds
    X86_AT(c, 0xff535u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0ff536  jb 0xff55b
    X86_AT(c, 0xff536u);
    if (x86_cc(c, 2)) { goto L_ff55b; }
    X86_TICK(c, 37);
    // 0ff53c  xor al, al
    X86_AT(c, 0xff53cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0ff53e  mov byte ptr [0xdf0c6], al
    X86_AT(c, 0xff53eu);
    wr8((c.sbase[3] + (uint32_t)(0xDF0C6u)), g8(c, 0));
    // 0ff543  mov dx, 0xe73
    X86_AT(c, 0xff543u);
    s16(c, 2, 0xE73u);
    // 0ff547  out dx, al
    X86_AT(c, 0xff547u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0ff548  in al, 2
    X86_AT(c, 0xff548u);
    s8(c, 0, x86_in(c, 0x2u, 1));
    // 0ff54a  jmp 0xff54c
    X86_AT(c, 0xff54au);
    goto L_ff54c;
L_ff54c:
    X86_TICK(c, 7);
    // 0ff54c  jmp 0xff54e
    X86_AT(c, 0xff54cu);
    goto L_ff54e;
L_ff54e:
    X86_TICK(c, 7);
    // 0ff54e  jmp 0xff550
    X86_AT(c, 0xff54eu);
    goto L_ff550;
L_ff550:
    X86_TICK(c, 36);
    // 0ff550  mov dl, 0x20
    X86_AT(c, 0xff550u);
    s8(c, 2, 0x20u);
    // 0ff552  not dl
    X86_AT(c, 0xff552u);
    { uint32_t v = g8(c, 2); s8(c, 2, ~v & 0xFFu); }
    // 0ff554  and al, dl
    X86_AT(c, 0xff554u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 2), 1)); }
    // 0ff556  out 2, al
    X86_AT(c, 0xff556u);
    x86_out(c, 0x2u, 1, g8(c, 0));
    // 0ff558  popfd 
    X86_AT(c, 0xff558u);
    x86_popfd(c, 4);
    // 0ff559  clc 
    X86_AT(c, 0xff559u);
    c.fl &= ~X86_CF;
    // 0ff55a  ret 
    X86_AT(c, 0xff55au);
    c.eip = pop32(c); return;
L_ff55b:
    X86_TICK(c, 18);
    // 0ff55b  popfd 
    X86_AT(c, 0xff55bu);
    x86_popfd(c, 4);
    // 0ff55c  stc 
    X86_AT(c, 0xff55cu);
    c.fl |= X86_CF;
    // 0ff55d  ret 
    X86_AT(c, 0xff55du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xff4e2u, "ran off the end of a function");
}
void f_000ff55e(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0ff55e  pushfd 
    X86_AT(c, 0xff55eu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0ff55f  cli 
    X86_AT(c, 0xff55fu);
    c.fl &= ~X86_IF;
    // 0ff560  call 0xfdcb0
    X86_AT(c, 0xff560u);
    push32(c, 0xff565u); f_000fdcb0(c); X86_RET(c, 0xff565u);
    X86_TICK(c, 9);
    // 0ff565  mov dword ptr [0xdf0de], eax
    X86_AT(c, 0xff565u);
    wr32((c.sbase[3] + (uint32_t)(0xDF0DEu)), c.r[0]);
    // 0ff56a  call 0xfdccc
    X86_AT(c, 0xff56au);
    push32(c, 0xff56fu); f_000fdccc(c); X86_RET(c, 0xff56fu);
    X86_TICK(c, 13);
    // 0ff56f  mov dword ptr [0xdf0e2], eax
    X86_AT(c, 0xff56fu);
    wr32((c.sbase[3] + (uint32_t)(0xDF0E2u)), c.r[0]);
    // 0ff574  lea eax, [0xffb72]
    X86_AT(c, 0xff574u);
    c.r[0] = (uint32_t)(0xFFB72u);
    // 0ff57a  push eax
    X86_AT(c, 0xff57au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ff57b  call 0xfdc90
    X86_AT(c, 0xff57bu);
    push32(c, 0xff580u); f_000fdc90(c); X86_RET(c, 0xff580u);
    X86_TICK(c, 13);
    // 0ff580  add esp, 4
    X86_AT(c, 0xff580u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ff583  lea eax, [0xffc90]
    X86_AT(c, 0xff583u);
    c.r[0] = (uint32_t)(0xFFC90u);
    // 0ff589  push eax
    X86_AT(c, 0xff589u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ff58a  call 0xfdcbc
    X86_AT(c, 0xff58au);
    push32(c, 0xff58fu); f_000fdcbc(c); X86_RET(c, 0xff58fu);
    X86_TICK(c, 20);
    // 0ff58f  add esp, 4
    X86_AT(c, 0xff58fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ff592  popfd 
    X86_AT(c, 0xff592u);
    x86_popfd(c, 4);
    // 0ff593  clc 
    X86_AT(c, 0xff593u);
    c.fl &= ~X86_CF;
    // 0ff594  ret 
    X86_AT(c, 0xff594u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xff55eu, "ran off the end of a function");
}
void f_000ff598(X86Cpu& c) {
    X86_TICK(c, 59);
    // 0ff598  pushfd 
    X86_AT(c, 0xff598u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0ff599  cli 
    X86_AT(c, 0xff599u);
    c.fl &= ~X86_IF;
    // 0ff59a  mov dx, 0xe70
    X86_AT(c, 0xff59au);
    s16(c, 2, 0xE70u);
    // 0ff59e  mov al, 0
    X86_AT(c, 0xff59eu);
    s8(c, 0, 0x0u);
    // 0ff5a0  out dx, al
    X86_AT(c, 0xff5a0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0ff5a1  mov dx, 0xe71
    X86_AT(c, 0xff5a1u);
    s16(c, 2, 0xE71u);
    // 0ff5a5  mov al, 0
    X86_AT(c, 0xff5a5u);
    s8(c, 0, 0x0u);
    // 0ff5a7  out dx, al
    X86_AT(c, 0xff5a7u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0ff5a8  in al, 2
    X86_AT(c, 0xff5a8u);
    s8(c, 0, x86_in(c, 0x2u, 1));
    // 0ff5aa  jmp 0xff5ac
    X86_AT(c, 0xff5aau);
    goto L_ff5ac;
L_ff5ac:
    X86_TICK(c, 7);
    // 0ff5ac  jmp 0xff5ae
    X86_AT(c, 0xff5acu);
    goto L_ff5ae;
L_ff5ae:
    X86_TICK(c, 7);
    // 0ff5ae  jmp 0xff5b0
    X86_AT(c, 0xff5aeu);
    goto L_ff5b0;
L_ff5b0:
    X86_TICK(c, 71);
    // 0ff5b0  or al, 0x10
    X86_AT(c, 0xff5b0u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x10u, 1)); }
    // 0ff5b2  out 2, al
    X86_AT(c, 0xff5b2u);
    x86_out(c, 0x2u, 1, g8(c, 0));
    // 0ff5b4  push ds
    X86_AT(c, 0xff5b4u);
    push32(c, c.sreg[3]);
    // 0ff5b5  mov cl, 0x44
    X86_AT(c, 0xff5b5u);
    s8(c, 1, 0x44u);
    // 0ff5b7  mov edx, dword ptr [0xdf0ca]
    X86_AT(c, 0xff5b7u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xDF0CAu)));
    // 0ff5bd  mov ax, word ptr [0xdf0ce]
    X86_AT(c, 0xff5bdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xDF0CEu))));
    // 0ff5c3  mov ebx, dword ptr [0xdf0d0]
    X86_AT(c, 0xff5c3u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0xDF0D0u)));
    // 0ff5c9  mov ds, eax
    X86_AT(c, 0xff5c9u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0ff5cb  mov ax, 0x2507
    X86_AT(c, 0xff5cbu);
    s16(c, 0, 0x2507u);
    // 0ff5cf  int 0x21
    X86_AT(c, 0xff5cfu);
    x86_int(c, 0x21, 0xff5d1u);
    X86_TICK(c, 20);
    // 0ff5d1  pop ds
    X86_AT(c, 0xff5d1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0ff5d2  popfd 
    X86_AT(c, 0xff5d2u);
    x86_popfd(c, 4);
    // 0ff5d3  ret 
    X86_AT(c, 0xff5d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xff598u, "ran off the end of a function");
}
void f_000ff5d4(X86Cpu& c) {
    X86_TICK(c, 49);
    // 0ff5d4  pushfd 
    X86_AT(c, 0xff5d4u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0ff5d5  cli 
    X86_AT(c, 0xff5d5u);
    c.fl &= ~X86_IF;
    // 0ff5d6  mov al, byte ptr [0xdf0c6]
    X86_AT(c, 0xff5d6u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xDF0C6u))));
    // 0ff5db  and al, 0xfc
    X86_AT(c, 0xff5dbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFCu, 1)); }
    // 0ff5dd  mov dx, 0xe73
    X86_AT(c, 0xff5ddu);
    s16(c, 2, 0xE73u);
    // 0ff5e1  out dx, al
    X86_AT(c, 0xff5e1u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0ff5e2  mov byte ptr [0xdf0c6], al
    X86_AT(c, 0xff5e2u);
    wr8((c.sbase[3] + (uint32_t)(0xDF0C6u)), g8(c, 0));
    // 0ff5e7  in al, 2
    X86_AT(c, 0xff5e7u);
    s8(c, 0, x86_in(c, 0x2u, 1));
    // 0ff5e9  jmp 0xff5eb
    X86_AT(c, 0xff5e9u);
    goto L_ff5eb;
L_ff5eb:
    X86_TICK(c, 7);
    // 0ff5eb  jmp 0xff5ed
    X86_AT(c, 0xff5ebu);
    goto L_ff5ed;
L_ff5ed:
    X86_TICK(c, 7);
    // 0ff5ed  jmp 0xff5ef
    X86_AT(c, 0xff5edu);
    goto L_ff5ef;
L_ff5ef:
    X86_TICK(c, 71);
    // 0ff5ef  or al, 0x20
    X86_AT(c, 0xff5efu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x20u, 1)); }
    // 0ff5f1  out 2, al
    X86_AT(c, 0xff5f1u);
    x86_out(c, 0x2u, 1, g8(c, 0));
    // 0ff5f3  push ds
    X86_AT(c, 0xff5f3u);
    push32(c, c.sreg[3]);
    // 0ff5f4  mov cl, 0x45
    X86_AT(c, 0xff5f4u);
    s8(c, 1, 0x45u);
    // 0ff5f6  mov edx, dword ptr [0xdf0d4]
    X86_AT(c, 0xff5f6u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xDF0D4u)));
    // 0ff5fc  mov ax, word ptr [0xdf0d8]
    X86_AT(c, 0xff5fcu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xDF0D8u))));
    // 0ff602  mov ebx, dword ptr [0xdf0da]
    X86_AT(c, 0xff602u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0xDF0DAu)));
    // 0ff608  mov ds, eax
    X86_AT(c, 0xff608u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0ff60a  mov ax, 0x2507
    X86_AT(c, 0xff60au);
    s16(c, 0, 0x2507u);
    // 0ff60e  int 0x21
    X86_AT(c, 0xff60eu);
    x86_int(c, 0x21, 0xff610u);
    X86_TICK(c, 20);
    // 0ff610  pop ds
    X86_AT(c, 0xff610u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0ff611  popfd 
    X86_AT(c, 0xff611u);
    x86_popfd(c, 4);
    // 0ff612  ret 
    X86_AT(c, 0xff612u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xff5d4u, "ran off the end of a function");
}
void f_000ff613(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0ff613  pushfd 
    X86_AT(c, 0xff613u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0ff614  cli 
    X86_AT(c, 0xff614u);
    c.fl &= ~X86_IF;
    // 0ff615  mov bl, 0
    X86_AT(c, 0xff615u);
    s8(c, 3, 0x0u);
    // 0ff617  mov ah, 0x15
    X86_AT(c, 0xff617u);
    s8(c, 4, 0x15u);
    // 0ff619  call 0xfdf3c
    X86_AT(c, 0xff619u);
    push32(c, 0xff61eu); f_000fdf3c(c); X86_RET(c, 0xff61eu);
    X86_TICK(c, 13);
    // 0ff61e  mov eax, dword ptr [0xdf0de]
    X86_AT(c, 0xff61eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDF0DEu)));
    // 0ff623  push eax
    X86_AT(c, 0xff623u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ff624  call 0xfdc90
    X86_AT(c, 0xff624u);
    push32(c, 0xff629u); f_000fdc90(c); X86_RET(c, 0xff629u);
    X86_TICK(c, 15);
    // 0ff629  add esp, 4
    X86_AT(c, 0xff629u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ff62c  mov eax, dword ptr [0xdf0e2]
    X86_AT(c, 0xff62cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDF0E2u)));
    // 0ff631  push eax
    X86_AT(c, 0xff631u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ff632  call 0xfdcbc
    X86_AT(c, 0xff632u);
    push32(c, 0xff637u); f_000fdcbc(c); X86_RET(c, 0xff637u);
    X86_TICK(c, 18);
    // 0ff637  add esp, 4
    X86_AT(c, 0xff637u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ff63a  popfd 
    X86_AT(c, 0xff63au);
    x86_popfd(c, 4);
    // 0ff63b  ret 
    X86_AT(c, 0xff63bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xff613u, "ran off the end of a function");
}
void f_000ff63c(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0ff63c  pushal 
    X86_AT(c, 0xff63cu);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0ff63d  lea esi, [0xdf0f5]
    X86_AT(c, 0xff63du);
    c.r[6] = (uint32_t)(0xDF0F5u);
    // 0ff643  lea eax, [0xdf275]
    X86_AT(c, 0xff643u);
    c.r[0] = (uint32_t)(0xDF275u);
    // 0ff649  mov bx, 0xe50
    X86_AT(c, 0xff649u);
    s16(c, 3, 0xE50u);
    // 0ff64d  mov ecx, 4
    X86_AT(c, 0xff64du);
    c.r[1] = 0x4u;
    // 0ff652  mov dx, 1
    X86_AT(c, 0xff652u);
    s16(c, 2, 0x1u);
L_ff656:
    X86_TICK(c, 82);
    // 0ff656  mov word ptr [esi + 0x10], 0
    X86_AT(c, 0xff656u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u)), 0x0u);
    // 0ff65c  mov dword ptr [esi], eax
    X86_AT(c, 0xff65cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 0ff65e  mov dword ptr [esi + 8], eax
    X86_AT(c, 0xff65eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), c.r[0]);
    // 0ff661  mov dword ptr [esi + 0xc], eax
    X86_AT(c, 0xff661u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), c.r[0]);
    // 0ff664  add eax, 0x10
    X86_AT(c, 0xff664u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x10u, 0, 4); }
    // 0ff669  mov dword ptr [esi + 4], eax
    X86_AT(c, 0xff669u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), c.r[0]);
    // 0ff66c  mov byte ptr [esi + 0x19], 0
    X86_AT(c, 0xff66cu);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x19u)), 0x0u);
    // 0ff670  mov byte ptr [esi + 0x1a], dl
    X86_AT(c, 0xff670u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x1Au)), g8(c, 2));
    // 0ff673  inc bx
    X86_AT(c, 0xff673u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 0ff675  mov word ptr [esi + 0x12], bx
    X86_AT(c, 0xff675u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x12u)), (c.r[3] & 0xFFFFu));
    // 0ff679  add bx, 2
    X86_AT(c, 0xff679u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x2u, 0, 2)); }
    // 0ff67d  mov word ptr [esi + 0x14], bx
    X86_AT(c, 0xff67du);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x14u)), (c.r[3] & 0xFFFFu));
    // 0ff681  inc bx
    X86_AT(c, 0xff681u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 0ff683  shl dl, 1
    X86_AT(c, 0xff683u);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0ff685  add esi, 0x20
    X86_AT(c, 0xff685u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x20u, 0, 4); }
    // 0ff688  mov word ptr [esi + 0x10], 0
    X86_AT(c, 0xff688u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u)), 0x0u);
    // 0ff68e  mov dword ptr [esi], eax
    X86_AT(c, 0xff68eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 0ff690  mov dword ptr [esi + 8], eax
    X86_AT(c, 0xff690u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), c.r[0]);
    // 0ff693  mov dword ptr [esi + 0xc], eax
    X86_AT(c, 0xff693u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), c.r[0]);
    // 0ff696  add eax, 0x10
    X86_AT(c, 0xff696u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x10u, 0, 4); }
    // 0ff69b  mov dword ptr [esi + 4], eax
    X86_AT(c, 0xff69bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), c.r[0]);
    // 0ff69e  mov byte ptr [esi + 0x19], 0
    X86_AT(c, 0xff69eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x19u)), 0x0u);
    // 0ff6a2  mov byte ptr [esi + 0x1a], dl
    X86_AT(c, 0xff6a2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x1Au)), g8(c, 2));
    // 0ff6a5  inc bx
    X86_AT(c, 0xff6a5u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 0ff6a7  mov word ptr [esi + 0x12], bx
    X86_AT(c, 0xff6a7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x12u)), (c.r[3] & 0xFFFFu));
    // 0ff6ab  inc bx
    X86_AT(c, 0xff6abu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 0ff6ad  inc bx
    X86_AT(c, 0xff6adu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 0ff6af  mov word ptr [esi + 0x14], bx
    X86_AT(c, 0xff6afu);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x14u)), (c.r[3] & 0xFFFFu));
    // 0ff6b3  sub word ptr [esi + 0x14], 4
    X86_AT(c, 0xff6b3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0x14u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, 0x4u, 0, 2)); }
    // 0ff6b8  inc bx
    X86_AT(c, 0xff6b8u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 0ff6ba  shl dl, 1
    X86_AT(c, 0xff6bau);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0ff6bc  add esi, 0x20
    X86_AT(c, 0xff6bcu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x20u, 0, 4); }
    // 0ff6bf  loop 0xff656
    X86_AT(c, 0xff6bfu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xff656u); goto L_ff656; }
    X86_TICK(c, 34);
    // 0ff6c1  popal 
    X86_AT(c, 0xff6c1u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0ff6c2  ret 
    X86_AT(c, 0xff6c2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xff63cu, "ran off the end of a function");
}
void f_000ff6c3(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0ff6c3  pushal 
    X86_AT(c, 0xff6c3u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0ff6c4  lea esi, [0xdf1f5]
    X86_AT(c, 0xff6c4u);
    c.r[6] = (uint32_t)(0xDF1F5u);
    // 0ff6ca  lea eax, [0xdf2f5]
    X86_AT(c, 0xff6cau);
    c.r[0] = (uint32_t)(0xDF2F5u);
    // 0ff6d0  mov bx, 0xe50
    X86_AT(c, 0xff6d0u);
    s16(c, 3, 0xE50u);
    // 0ff6d4  mov ecx, 4
    X86_AT(c, 0xff6d4u);
    c.r[1] = 0x4u;
    // 0ff6d9  mov dx, 1
    X86_AT(c, 0xff6d9u);
    s16(c, 2, 0x1u);
L_ff6dd:
    X86_TICK(c, 44);
    // 0ff6dd  mov word ptr [esi + 0x10], 0
    X86_AT(c, 0xff6ddu);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u)), 0x0u);
    // 0ff6e3  mov dword ptr [esi], eax
    X86_AT(c, 0xff6e3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 0ff6e5  mov dword ptr [esi + 8], eax
    X86_AT(c, 0xff6e5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), c.r[0]);
    // 0ff6e8  mov dword ptr [esi + 0xc], eax
    X86_AT(c, 0xff6e8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), c.r[0]);
    // 0ff6eb  add eax, 0x40
    X86_AT(c, 0xff6ebu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x40u, 0, 4); }
    // 0ff6f0  mov dword ptr [esi + 4], eax
    X86_AT(c, 0xff6f0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), c.r[0]);
    // 0ff6f3  mov byte ptr [esi + 0x19], 0
    X86_AT(c, 0xff6f3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x19u)), 0x0u);
    // 0ff6f7  mov byte ptr [esi + 0x1a], dl
    X86_AT(c, 0xff6f7u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x1Au)), g8(c, 2));
    // 0ff6fa  inc bx
    X86_AT(c, 0xff6fau);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 0ff6fc  mov word ptr [esi + 0x12], bx
    X86_AT(c, 0xff6fcu);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x12u)), (c.r[3] & 0xFFFFu));
    // 0ff700  add bx, 2
    X86_AT(c, 0xff700u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x2u, 0, 2)); }
    // 0ff704  mov word ptr [esi + 0x14], bx
    X86_AT(c, 0xff704u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x14u)), (c.r[3] & 0xFFFFu));
    // 0ff708  inc bx
    X86_AT(c, 0xff708u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 0ff70a  shl dl, 1
    X86_AT(c, 0xff70au);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0ff70c  add bx, 4
    X86_AT(c, 0xff70cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x4u, 0, 2)); }
    // 0ff710  add esi, 0x20
    X86_AT(c, 0xff710u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x20u, 0, 4); }
    // 0ff713  loop 0xff6dd
    X86_AT(c, 0xff713u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xff6ddu); goto L_ff6dd; }
    X86_TICK(c, 34);
    // 0ff715  popal 
    X86_AT(c, 0xff715u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0ff716  ret 
    X86_AT(c, 0xff716u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xff6c3u, "ran off the end of a function");
}
void f_000ff717(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0ff717  pushal 
    X86_AT(c, 0xff717u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0ff718  xor cx, cx
    X86_AT(c, 0xff718u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v ^ (c.r[1] & 0xFFFFu), 2)); }
    // 0ff71b  lea esi, [0xdf1f5]
    X86_AT(c, 0xff71bu);
    c.r[6] = (uint32_t)(0xDF1F5u);
    // 0ff721  lea edi, [0xdf0f5]
    X86_AT(c, 0xff721u);
    c.r[7] = (uint32_t)(0xDF0F5u);
L_ff727:
    X86_TICK(c, 16);
    // 0ff727  mov dx, cx
    X86_AT(c, 0xff727u);
    s16(c, 2, (c.r[1] & 0xFFFFu));
    // 0ff72a  shl dx, 3
    X86_AT(c, 0xff72au);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 2, r); }
    // 0ff72e  add dx, 0xe51
    X86_AT(c, 0xff72eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0xE51u, 0, 2)); }
    // 0ff733  mov al, 0
    X86_AT(c, 0xff733u);
    s8(c, 0, 0x0u);
    // 0ff735  call 0xff7dd
    X86_AT(c, 0xff735u);
    push32(c, 0xff73au); f_000ff7dd(c); X86_RET(c, 0xff73au);
    X86_TICK(c, 7);
    // 0ff73a  call 0xff7dd
    X86_AT(c, 0xff73au);
    push32(c, 0xff73fu); f_000ff7dd(c); X86_RET(c, 0xff73fu);
    X86_TICK(c, 7);
    // 0ff73f  call 0xff7dd
    X86_AT(c, 0xff73fu);
    push32(c, 0xff744u); f_000ff7dd(c); X86_RET(c, 0xff744u);
    X86_TICK(c, 9);
    // 0ff744  mov al, 0x40
    X86_AT(c, 0xff744u);
    s8(c, 0, 0x40u);
    // 0ff746  call 0xff7dd
    X86_AT(c, 0xff746u);
    push32(c, 0xff74bu); f_000ff7dd(c); X86_RET(c, 0xff74bu);
    X86_TICK(c, 9);
    // 0ff74b  mov al, 0x4e
    X86_AT(c, 0xff74bu);
    s8(c, 0, 0x4Eu);
    // 0ff74d  call 0xff7dd
    X86_AT(c, 0xff74du);
    push32(c, 0xff752u); f_000ff7dd(c); X86_RET(c, 0xff752u);
    X86_TICK(c, 9);
    // 0ff752  mov al, 0x37
    X86_AT(c, 0xff752u);
    s8(c, 0, 0x37u);
    // 0ff754  call 0xff7dd
    X86_AT(c, 0xff754u);
    push32(c, 0xff759u); f_000ff7dd(c); X86_RET(c, 0xff759u);
    X86_TICK(c, 25);
    // 0ff759  mov byte ptr [esi + 0x18], 0
    X86_AT(c, 0xff759u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x18u)), 0x0u);
    // 0ff75d  mov byte ptr [edi + 0x18], 0
    X86_AT(c, 0xff75du);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)), 0x0u);
    // 0ff761  mov byte ptr [edi + 0x38], 0
    X86_AT(c, 0xff761u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0x0u);
    // 0ff765  in al, dx
    X86_AT(c, 0xff765u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0ff766  cmp al, 0xff
    X86_AT(c, 0xff766u);
    (void)x86_sub(c, g8(c, 0), 0xFFu, 0, 1);
    // 0ff768  je 0xff77a
    X86_AT(c, 0xff768u);
    if (x86_cc(c, 4)) { goto L_ff77a; }
    X86_TICK(c, 6);
    // 0ff76e  mov byte ptr [esi + 0x18], 0xff
    X86_AT(c, 0xff76eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x18u)), 0xFFu);
    // 0ff772  mov byte ptr [edi + 0x18], 0xff
    X86_AT(c, 0xff772u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)), 0xFFu);
    // 0ff776  mov byte ptr [edi + 0x38], 0xff
    X86_AT(c, 0xff776u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x38u)), 0xFFu);
L_ff77a:
    X86_TICK(c, 31);
    // 0ff77a  add esi, 0x20
    X86_AT(c, 0xff77au);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x20u, 0, 4); }
    // 0ff77d  add edi, 0x40
    X86_AT(c, 0xff77du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x40u, 0, 4); }
    // 0ff780  add dx, 2
    X86_AT(c, 0xff780u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 0ff784  mov al, 1
    X86_AT(c, 0xff784u);
    s8(c, 0, 0x1u);
    // 0ff786  out dx, al
    X86_AT(c, 0xff786u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0ff787  add dx, 2
    X86_AT(c, 0xff787u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 0ff78b  mov al, 0
    X86_AT(c, 0xff78bu);
    s8(c, 0, 0x0u);
    // 0ff78d  call 0xff7dd
    X86_AT(c, 0xff78du);
    push32(c, 0xff792u); f_000ff7dd(c); X86_RET(c, 0xff792u);
    X86_TICK(c, 7);
    // 0ff792  call 0xff7dd
    X86_AT(c, 0xff792u);
    push32(c, 0xff797u); f_000ff7dd(c); X86_RET(c, 0xff797u);
    X86_TICK(c, 7);
    // 0ff797  call 0xff7dd
    X86_AT(c, 0xff797u);
    push32(c, 0xff79cu); f_000ff7dd(c); X86_RET(c, 0xff79cu);
    X86_TICK(c, 9);
    // 0ff79c  mov al, 0x40
    X86_AT(c, 0xff79cu);
    s8(c, 0, 0x40u);
    // 0ff79e  call 0xff7dd
    X86_AT(c, 0xff79eu);
    push32(c, 0xff7a3u); f_000ff7dd(c); X86_RET(c, 0xff7a3u);
    X86_TICK(c, 9);
    // 0ff7a3  mov al, 0x4e
    X86_AT(c, 0xff7a3u);
    s8(c, 0, 0x4Eu);
    // 0ff7a5  call 0xff7dd
    X86_AT(c, 0xff7a5u);
    push32(c, 0xff7aau); f_000ff7dd(c); X86_RET(c, 0xff7aau);
    X86_TICK(c, 9);
    // 0ff7aa  mov al, 0x33
    X86_AT(c, 0xff7aau);
    s8(c, 0, 0x33u);
    // 0ff7ac  call 0xff7dd
    X86_AT(c, 0xff7acu);
    push32(c, 0xff7b1u); f_000ff7dd(c); X86_RET(c, 0xff7b1u);
    X86_TICK(c, 9);
    // 0ff7b1  inc cx
    X86_AT(c, 0xff7b1u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_inc(c, v, 2)); }
    // 0ff7b3  cmp cx, 4
    X86_AT(c, 0xff7b3u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x4u, 0, 2);
    // 0ff7b7  jb 0xff727
    X86_AT(c, 0xff7b7u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xff727u); goto L_ff727; }
    X86_TICK(c, 16);
    // 0ff7bd  mov byte ptr [0xdf0c9], 0
    X86_AT(c, 0xff7bdu);
    wr8((c.sbase[3] + (uint32_t)(0xDF0C9u)), 0x0u);
    // 0ff7c4  lea esi, [0xdf1f5]
    X86_AT(c, 0xff7c4u);
    c.r[6] = (uint32_t)(0xDF1F5u);
    // 0ff7ca  cmp byte ptr [esi + 0x18], 0
    X86_AT(c, 0xff7cau);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x18u))), 0x0u, 0, 1);
    // 0ff7ce  je 0xff7db
    X86_AT(c, 0xff7ceu);
    if (x86_cc(c, 4)) { goto L_ff7db; }
    X86_TICK(c, 2);
    // 0ff7d4  mov byte ptr [0xdf0c9], 1
    X86_AT(c, 0xff7d4u);
    wr8((c.sbase[3] + (uint32_t)(0xDF0C9u)), 0x1u);
L_ff7db:
    X86_TICK(c, 34);
    // 0ff7db  popal 
    X86_AT(c, 0xff7dbu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0ff7dc  ret 
    X86_AT(c, 0xff7dcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xff717u, "ran off the end of a function");
}
void f_000ff7dd(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0ff7dd  jmp 0xff7df
    X86_AT(c, 0xff7ddu);
    goto L_ff7df;
L_ff7df:
    X86_TICK(c, 19);
    // 0ff7df  out dx, al
    X86_AT(c, 0xff7dfu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0ff7e0  jmp 0xff7e2
    X86_AT(c, 0xff7e0u);
    goto L_ff7e2;
L_ff7e2:
    X86_TICK(c, 10);
    // 0ff7e2  ret 
    X86_AT(c, 0xff7e2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xff7ddu, "ran off the end of a function");
}
void f_000ff7e3(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0ff7e3  pushal 
    X86_AT(c, 0xff7e3u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0ff7e4  pushf 
    X86_AT(c, 0xff7e4u);
    push16(c, c.fl & 0xFFFFu);
    // 0ff7e6  cli 
    X86_AT(c, 0xff7e6u);
    c.fl &= ~X86_IF;
    // 0ff7e7  mov ecx, 4
    X86_AT(c, 0xff7e7u);
    c.r[1] = 0x4u;
L_ff7ec:
    X86_TICK(c, 34);
    // 0ff7ec  mov dx, cx
    X86_AT(c, 0xff7ecu);
    s16(c, 2, (c.r[1] & 0xFFFFu));
    // 0ff7ef  dec dx
    X86_AT(c, 0xff7efu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 0ff7f1  shl dx, 3
    X86_AT(c, 0xff7f1u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 2, r); }
    // 0ff7f5  add dx, 0xe53
    X86_AT(c, 0xff7f5u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0xE53u, 0, 2)); }
    // 0ff7fa  mov al, 0
    X86_AT(c, 0xff7fau);
    s8(c, 0, 0x0u);
    // 0ff7fc  out dx, al
    X86_AT(c, 0xff7fcu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0ff7fd  loop 0xff7ec
    X86_AT(c, 0xff7fdu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xff7ecu); goto L_ff7ec; }
    X86_TICK(c, 40);
    // 0ff7ff  popf 
    X86_AT(c, 0xff7ffu);
    x86_popfd(c, 2);
    // 0ff801  popal 
    X86_AT(c, 0xff801u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0ff802  ret 
    X86_AT(c, 0xff802u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xff7e3u, "ran off the end of a function");
}
void f_000ff803(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0ff803  push ax
    X86_AT(c, 0xff803u);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0ff805  push dx
    X86_AT(c, 0xff805u);
    { uint32_t v = (c.r[2] & 0xFFFFu); push16(c, v); }
    // 0ff807  pushf 
    X86_AT(c, 0xff807u);
    push16(c, c.fl & 0xFFFFu);
    // 0ff809  cli 
    X86_AT(c, 0xff809u);
    c.fl &= ~X86_IF;
    // 0ff80a  mov ax, word ptr [0xdee9e]
    X86_AT(c, 0xff80au);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xDEE9Eu))));
    // 0ff810  call 0xff872
    X86_AT(c, 0xff810u);
    push32(c, 0xff815u); f_000ff872(c); X86_RET(c, 0xff815u);
    X86_TICK(c, 46);
    // 0ff815  mov al, byte ptr [0xdf0c6]
    X86_AT(c, 0xff815u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xDF0C6u))));
    // 0ff81a  or al, 1
    X86_AT(c, 0xff81au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x1u, 1)); }
    // 0ff81c  mov dx, 0xe73
    X86_AT(c, 0xff81cu);
    s16(c, 2, 0xE73u);
    // 0ff820  out dx, al
    X86_AT(c, 0xff820u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0ff821  mov byte ptr [0xdf0c6], al
    X86_AT(c, 0xff821u);
    wr8((c.sbase[3] + (uint32_t)(0xDF0C6u)), g8(c, 0));
    // 0ff826  popf 
    X86_AT(c, 0xff826u);
    x86_popfd(c, 2);
    // 0ff828  pop dx
    X86_AT(c, 0xff828u);
    { uint32_t v = pop16(c); s16(c, 2, v); }
    // 0ff82a  pop ax
    X86_AT(c, 0xff82au);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0ff82c  ret 
    X86_AT(c, 0xff82cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xff803u, "ran off the end of a function");
}
void f_000ff844(X86Cpu& c) {
    X86_TICK(c, 46);
    // 0ff844  pushf 
    X86_AT(c, 0xff844u);
    push16(c, c.fl & 0xFFFFu);
    // 0ff846  cli 
    X86_AT(c, 0xff846u);
    c.fl &= ~X86_IF;
    // 0ff847  mov al, byte ptr [0xdf0c6]
    X86_AT(c, 0xff847u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xDF0C6u))));
    // 0ff84c  and al, 0xfe
    X86_AT(c, 0xff84cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFEu, 1)); }
    // 0ff84e  mov dx, 0xe73
    X86_AT(c, 0xff84eu);
    s16(c, 2, 0xE73u);
    // 0ff852  out dx, al
    X86_AT(c, 0xff852u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0ff853  mov byte ptr [0xdf0c6], al
    X86_AT(c, 0xff853u);
    wr8((c.sbase[3] + (uint32_t)(0xDF0C6u)), g8(c, 0));
    // 0ff858  popf 
    X86_AT(c, 0xff858u);
    x86_popfd(c, 2);
    // 0ff85a  ret 
    X86_AT(c, 0xff85au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xff844u, "ran off the end of a function");
}
void f_000ff872(X86Cpu& c) {
    X86_TICK(c, 80);
    // 0ff872  push dx
    X86_AT(c, 0xff872u);
    { uint32_t v = (c.r[2] & 0xFFFFu); push16(c, v); }
    // 0ff874  pushf 
    X86_AT(c, 0xff874u);
    push16(c, c.fl & 0xFFFFu);
    // 0ff876  cli 
    X86_AT(c, 0xff876u);
    c.fl &= ~X86_IF;
    // 0ff877  mov dx, 0xe77
    X86_AT(c, 0xff877u);
    s16(c, 2, 0xE77u);
    // 0ff87b  push ax
    X86_AT(c, 0xff87bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0ff87d  mov al, 0x30
    X86_AT(c, 0xff87du);
    s8(c, 0, 0x30u);
    // 0ff87f  out dx, al
    X86_AT(c, 0xff87fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0ff880  pop ax
    X86_AT(c, 0xff880u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0ff882  mov dx, 0xe74
    X86_AT(c, 0xff882u);
    s16(c, 2, 0xE74u);
    // 0ff886  out dx, al
    X86_AT(c, 0xff886u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0ff887  mov al, ah
    X86_AT(c, 0xff887u);
    s8(c, 0, g8(c, 4));
    // 0ff889  out dx, al
    X86_AT(c, 0xff889u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0ff88a  popf 
    X86_AT(c, 0xff88au);
    x86_popfd(c, 2);
    // 0ff88c  pop dx
    X86_AT(c, 0xff88cu);
    { uint32_t v = pop16(c); s16(c, 2, v); }
    // 0ff88e  ret 
    X86_AT(c, 0xff88eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xff872u, "ran off the end of a function");
}
void f_000ff88f(X86Cpu& c) {
    X86_TICK(c, 57);
    // 0ff88f  mov dx, 0xe77
    X86_AT(c, 0xff88fu);
    s16(c, 2, 0xE77u);
    // 0ff893  mov al, 0
    X86_AT(c, 0xff893u);
    s8(c, 0, 0x0u);
    // 0ff895  out dx, al
    X86_AT(c, 0xff895u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0ff896  mov dx, 0xe74
    X86_AT(c, 0xff896u);
    s16(c, 2, 0xE74u);
    // 0ff89a  in al, dx
    X86_AT(c, 0xff89au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0ff89b  mov ah, al
    X86_AT(c, 0xff89bu);
    s8(c, 4, g8(c, 0));
    // 0ff89d  in al, dx
    X86_AT(c, 0xff89du);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0ff89e  xchg ah, al
    X86_AT(c, 0xff89eu);
    { uint32_t t = g8(c, 4); s8(c, 4, g8(c, 0)); s8(c, 0, t); }
    // 0ff8a0  ret 
    X86_AT(c, 0xff8a0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xff88fu, "ran off the end of a function");
}
void f_000ff8a1(X86Cpu& c) {
    X86_TICK(c, 82);
    // 0ff8a1  push dx
    X86_AT(c, 0xff8a1u);
    { uint32_t v = (c.r[2] & 0xFFFFu); push16(c, v); }
    // 0ff8a3  mov dx, 0xe77
    X86_AT(c, 0xff8a3u);
    s16(c, 2, 0xE77u);
    // 0ff8a7  pushf 
    X86_AT(c, 0xff8a7u);
    push16(c, c.fl & 0xFFFFu);
    // 0ff8a9  cli 
    X86_AT(c, 0xff8a9u);
    c.fl &= ~X86_IF;
    // 0ff8aa  push ax
    X86_AT(c, 0xff8aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); push16(c, v); }
    // 0ff8ac  mov al, 0x70
    X86_AT(c, 0xff8acu);
    s8(c, 0, 0x70u);
    // 0ff8ae  out dx, al
    X86_AT(c, 0xff8aeu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0ff8af  nop 
    X86_AT(c, 0xff8afu);
    // 0ff8b0  mov dx, 0xe75
    X86_AT(c, 0xff8b0u);
    s16(c, 2, 0xE75u);
    // 0ff8b4  pop ax
    X86_AT(c, 0xff8b4u);
    { uint32_t v = pop16(c); s16(c, 0, v); }
    // 0ff8b6  out dx, al
    X86_AT(c, 0xff8b6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0ff8b7  mov al, ah
    X86_AT(c, 0xff8b7u);
    s8(c, 0, g8(c, 4));
    // 0ff8b9  out dx, al
    X86_AT(c, 0xff8b9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0ff8ba  popf 
    X86_AT(c, 0xff8bau);
    x86_popfd(c, 2);
    // 0ff8bc  pop dx
    X86_AT(c, 0xff8bcu);
    { uint32_t v = pop16(c); s16(c, 2, v); }
    // 0ff8be  ret 
    X86_AT(c, 0xff8beu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xff8a1u, "ran off the end of a function");
}
void f_000ff8df(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0ff8df  cmp byte ptr [0xdf0c9], 0
    X86_AT(c, 0xff8dfu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDF0C9u))), 0x0u, 0, 1);
    // 0ff8e6  jne 0xff948
    X86_AT(c, 0xff8e6u);
    if (x86_cc(c, 5)) { goto L_ff948; }
    X86_TICK(c, 13);
    // 0ff8ec  push eax
    X86_AT(c, 0xff8ecu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ff8ed  push ebx
    X86_AT(c, 0xff8edu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ff8ee  movzx ebx, al
    X86_AT(c, 0xff8eeu);
    c.r[3] = g8(c, 0);
    // 0ff8f1  mov ax, word ptr cs:[ebx*2 + 0xff154]
    X86_AT(c, 0xff8f1u);
    s16(c, 0, rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0xFF154u))));
    // 0ff8fa  mov bx, 0x10
    X86_AT(c, 0xff8fau);
    s16(c, 3, 0x10u);
L_ff8fe:
    X86_TICK(c, 7);
    // 0ff8fe  cmp ax, 0x7d
    X86_AT(c, 0xff8feu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x7Du, 0, 2);
    // 0ff902  ja 0xff90c
    X86_AT(c, 0xff902u);
    if (x86_cc(c, 7)) { goto L_ff90c; }
    X86_TICK(c, 13);
    // 0ff904  shl ax, 1
    X86_AT(c, 0xff904u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 0ff907  shl bx, 1
    X86_AT(c, 0xff907u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 0ff90a  jmp 0xff8fe
    X86_AT(c, 0xff90au);
    X86_POLL(c, 0xff8feu); goto L_ff8fe;
L_ff90c:
    X86_TICK(c, 7);
    // 0ff90c  cmp ax, 0x3ff
    X86_AT(c, 0xff90cu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x3FFu, 0, 2);
    // 0ff910  jb 0xff91e
    X86_AT(c, 0xff910u);
    if (x86_cc(c, 2)) { goto L_ff91e; }
    X86_TICK(c, 13);
    // 0ff916  shr ax, 1
    X86_AT(c, 0xff916u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 0ff919  shr bx, 1
    X86_AT(c, 0xff919u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 0ff91c  jmp 0xff90c
    X86_AT(c, 0xff91cu);
    X86_POLL(c, 0xff90cu); goto L_ff90c;
L_ff91e:
    X86_TICK(c, 31);
    // 0ff91e  pushf 
    X86_AT(c, 0xff91eu);
    push16(c, c.fl & 0xFFFFu);
    // 0ff920  cli 
    X86_AT(c, 0xff920u);
    c.fl &= ~X86_IF;
    // 0ff921  mov word ptr [0xdee9e], ax
    X86_AT(c, 0xff921u);
    wr16((c.sbase[3] + (uint32_t)(0xDEE9Eu)), (c.r[0] & 0xFFFFu));
    // 0ff927  mov word ptr [0xdee97], bx
    X86_AT(c, 0xff927u);
    wr16((c.sbase[3] + (uint32_t)(0xDEE97u)), (c.r[3] & 0xFFFFu));
    // 0ff92e  mov ecx, eax
    X86_AT(c, 0xff92eu);
    c.r[1] = c.r[0];
    // 0ff930  sub ecx, 2
    X86_AT(c, 0xff930u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x2u, 0, 4); }
    // 0ff933  neg ecx
    X86_AT(c, 0xff933u);
    { uint32_t v = c.r[1]; c.r[1] = x86_neg(c, v, 4); }
    // 0ff935  mov bl, 0xff
    X86_AT(c, 0xff935u);
    s8(c, 3, 0xFFu);
    // 0ff937  push ecx
    X86_AT(c, 0xff937u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0ff938  push ebx
    X86_AT(c, 0xff938u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ff939  call 0xfdb15
    X86_AT(c, 0xff939u);
    push32(c, 0xff93eu); f_000fdb15(c); X86_RET(c, 0xff93eu);
    X86_TICK(c, 15);
    // 0ff93e  add esp, 8
    X86_AT(c, 0xff93eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ff941  popf 
    X86_AT(c, 0xff941u);
    x86_popfd(c, 2);
    // 0ff943  jmp 0xff97c
    X86_AT(c, 0xff943u);
    goto L_ff97c;
L_ff948:
    X86_TICK(c, 13);
    // 0ff948  push eax
    X86_AT(c, 0xff948u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ff949  push ebx
    X86_AT(c, 0xff949u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ff94a  movzx ebx, al
    X86_AT(c, 0xff94au);
    c.r[3] = g8(c, 0);
    // 0ff94d  mov ax, word ptr cs:[ebx*2 + 0xfef52]
    X86_AT(c, 0xff94du);
    s16(c, 0, rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0xFEF52u))));
    // 0ff956  mov bx, 0x10
    X86_AT(c, 0xff956u);
    s16(c, 3, 0x10u);
L_ff95a:
    X86_TICK(c, 7);
    // 0ff95a  cmp ax, 0x450
    X86_AT(c, 0xff95au);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x450u, 0, 2);
    // 0ff95e  ja 0xff96c
    X86_AT(c, 0xff95eu);
    if (x86_cc(c, 7)) { goto L_ff96c; }
    X86_TICK(c, 13);
    // 0ff964  shl ax, 1
    X86_AT(c, 0xff964u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 0ff967  shl bx, 1
    X86_AT(c, 0xff967u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 0ff96a  jmp 0xff95a
    X86_AT(c, 0xff96au);
    X86_POLL(c, 0xff95au); goto L_ff95a;
L_ff96c:
    X86_TICK(c, 18);
    // 0ff96c  pushfd 
    X86_AT(c, 0xff96cu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0ff96d  cli 
    X86_AT(c, 0xff96du);
    c.fl &= ~X86_IF;
    // 0ff96e  mov word ptr [0xdee9e], ax
    X86_AT(c, 0xff96eu);
    wr16((c.sbase[3] + (uint32_t)(0xDEE9Eu)), (c.r[0] & 0xFFFFu));
    // 0ff974  mov word ptr [0xdee97], bx
    X86_AT(c, 0xff974u);
    wr16((c.sbase[3] + (uint32_t)(0xDEE97u)), (c.r[3] & 0xFFFFu));
    // 0ff97b  popfd 
    X86_AT(c, 0xff97bu);
    x86_popfd(c, 4);
L_ff97c:
    X86_TICK(c, 18);
    // 0ff97c  pop ebx
    X86_AT(c, 0xff97cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ff97d  pop eax
    X86_AT(c, 0xff97du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0ff97e  ret 
    X86_AT(c, 0xff97eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xff8dfu, "ran off the end of a function");
}
}
