#include "p_tbios_funcs.h"
namespace p_tbios {
void f_00012ddb(X86Cpu& c) {
    X86_TICK(c, 16);
    // 012ddb  lea esi, [esi + esi*4]
    X86_AT(c, 0x12ddbu);
    c.r[6] = (uint32_t)(c.r[6] + c.r[6] * 4);
    // 012dde  lea esi, [edi + esi*1 + 0x1aa0]
    X86_AT(c, 0x12ddeu);
    c.r[6] = (uint32_t)(c.r[7] + c.r[6] + 0x1AA0u);
    // 012de5  cmp word ptr gs:[esi + 8], 0
    X86_AT(c, 0x12de5u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u))), 0x0u, 0, 2);
    // 012deb  je 0x12e28
    X86_AT(c, 0x12debu);
    if (x86_cc(c, 4)) { goto L_12e28; }
    X86_TICK(c, 16);
    // 012ded  mov cl, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x12dedu);
    s8(c, 1, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 012df4  test byte ptr gs:[edi + 0x19fc], cl
    X86_AT(c, 0x12df4u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu))) & g8(c, 1), 1);
    // 012dfb  je 0x12e28
    X86_AT(c, 0x12dfbu);
    if (x86_cc(c, 4)) { goto L_12e28; }
    X86_TICK(c, 12);
    // 012dfd  test byte ptr gs:[edi + 0x19fa], cl
    X86_AT(c, 0x12dfdu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu))) & g8(c, 1), 1);
    // 012e04  je 0x12ec4
    X86_AT(c, 0x12e04u);
    if (x86_cc(c, 4)) { goto L_12ec4; }
    X86_TICK(c, 12);
    // 012e0a  test byte ptr gs:[edi + ebx*1 + 0x1a48], 1
    X86_AT(c, 0x12e0au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A48u))) & 0x1u, 1);
    // 012e13  je 0x12e3c
    X86_AT(c, 0x12e13u);
    if (x86_cc(c, 4)) { goto L_12e3c; }
    X86_TICK(c, 12);
    // 012e15  test byte ptr gs:[edi + ebx*1 + 0x1a48], 2
    X86_AT(c, 0x12e15u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A48u))) & 0x2u, 1);
    // 012e1e  je 0x12e6c
    X86_AT(c, 0x12e1eu);
    if (x86_cc(c, 4)) { goto L_12e6c; }
    X86_TICK(c, 7);
    // 012e20  jmp 0x12e9c
    X86_AT(c, 0x12e20u);
    goto L_12e9c;
L_12e28:
    X86_TICK(c, 23);
    // 012e28  mov ch, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x12e28u);
    s8(c, 5, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 012e2f  not ch
    X86_AT(c, 0x12e2fu);
    { uint32_t v = g8(c, 5); s8(c, 5, ~v & 0xFFu); }
    // 012e31  and byte ptr gs:[edi + 0x19fc], ch
    X86_AT(c, 0x12e31u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 5), 1)); }
    // 012e38  ret 
    X86_AT(c, 0x12e38u);
    c.eip = pop32(c); return;
L_12e3c:
    X86_TICK(c, 21);
    // 012e3c  mov ax, word ptr gs:[esi + 6]
    X86_AT(c, 0x12e3cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x6u))));
    // 012e41  add ax, word ptr gs:[esi + 8]
    X86_AT(c, 0x12e41u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u))), 0, 2)); }
    // 012e46  cmp ah, byte ptr gs:[esi]
    X86_AT(c, 0x12e46u);
    (void)x86_sub(c, g8(c, 4), rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 0, 1);
    // 012e49  ja 0x12e65
    X86_AT(c, 0x12e49u);
    if (x86_cc(c, 7)) { goto L_12e65; }
    X86_TICK(c, 60);
    // 012e4b  mov word ptr gs:[esi + 8], ax
    X86_AT(c, 0x12e4bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 012e50  mov dx, 0x4f7
    X86_AT(c, 0x12e50u);
    s16(c, 2, 0x4F7u);
    // 012e54  mov al, 0xc0
    X86_AT(c, 0x12e54u);
    s8(c, 0, 0xC0u);
    // 012e56  add al, bl
    X86_AT(c, 0x12e56u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 012e58  out dx, al
    X86_AT(c, 0x12e58u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012e59  mov al, ah
    X86_AT(c, 0x12e59u);
    s8(c, 0, g8(c, 4));
    // 012e5b  add al, al
    X86_AT(c, 0x12e5bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 012e5d  mov dl, 0xf0
    X86_AT(c, 0x12e5du);
    s8(c, 2, 0xF0u);
    // 012e5f  out dx, al
    X86_AT(c, 0x12e5fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012e60  push ds
    X86_AT(c, 0x12e60u);
    push32(c, c.sreg[3]);
    // 012e61  pop ds
    X86_AT(c, 0x12e61u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012e62  push ds
    X86_AT(c, 0x12e62u);
    push32(c, c.sreg[3]);
    // 012e63  pop ds
    X86_AT(c, 0x12e63u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012e64  ret 
    X86_AT(c, 0x12e64u);
    c.eip = pop32(c); return;
L_12e65:
    X86_TICK(c, 7);
    // 012e65  call 0x12f30
    X86_AT(c, 0x12e65u);
    push32(c, 0x12e6au); f_00012f30(c); X86_RET(c, 0x12e6au);
    X86_TICK(c, 10);
    // 012e6a  ret 
    X86_AT(c, 0x12e6au);
    c.eip = pop32(c); return;
L_12e6c:
    X86_TICK(c, 21);
    // 012e6c  mov ax, word ptr gs:[esi + 8]
    X86_AT(c, 0x12e6cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u))));
    // 012e71  sub ax, word ptr gs:[esi + 6]
    X86_AT(c, 0x12e71u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x6u))), 0, 2)); }
    // 012e76  cmp ah, byte ptr gs:[esi + 3]
    X86_AT(c, 0x12e76u);
    (void)x86_sub(c, g8(c, 4), rd8((c.sbase[5] + (uint32_t)(c.r[6] + 0x3u))), 0, 1);
    // 012e7a  jl 0x12e96
    X86_AT(c, 0x12e7au);
    if (x86_cc(c, 12)) { goto L_12e96; }
    X86_TICK(c, 60);
    // 012e7c  mov word ptr gs:[esi + 8], ax
    X86_AT(c, 0x12e7cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 012e81  mov dx, 0x4f7
    X86_AT(c, 0x12e81u);
    s16(c, 2, 0x4F7u);
    // 012e85  mov al, 0xc0
    X86_AT(c, 0x12e85u);
    s8(c, 0, 0xC0u);
    // 012e87  add al, bl
    X86_AT(c, 0x12e87u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 012e89  out dx, al
    X86_AT(c, 0x12e89u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012e8a  mov al, ah
    X86_AT(c, 0x12e8au);
    s8(c, 0, g8(c, 4));
    // 012e8c  add al, al
    X86_AT(c, 0x12e8cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 012e8e  mov dl, 0xf0
    X86_AT(c, 0x12e8eu);
    s8(c, 2, 0xF0u);
    // 012e90  out dx, al
    X86_AT(c, 0x12e90u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012e91  push ds
    X86_AT(c, 0x12e91u);
    push32(c, c.sreg[3]);
    // 012e92  pop ds
    X86_AT(c, 0x12e92u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012e93  push ds
    X86_AT(c, 0x12e93u);
    push32(c, c.sreg[3]);
    // 012e94  pop ds
    X86_AT(c, 0x12e94u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012e95  ret 
    X86_AT(c, 0x12e95u);
    c.eip = pop32(c); return;
L_12e96:
    X86_TICK(c, 7);
    // 012e96  call 0x12f78
    X86_AT(c, 0x12e96u);
    push32(c, 0x12e9bu); f_00012f78(c); X86_RET(c, 0x12e9bu);
    X86_TICK(c, 10);
    // 012e9b  ret 
    X86_AT(c, 0x12e9bu);
    c.eip = pop32(c); return;
L_12e9c:
    X86_TICK(c, 15);
    // 012e9c  mov ax, word ptr gs:[esi + 8]
    X86_AT(c, 0x12e9cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u))));
    // 012ea1  sub ax, word ptr gs:[esi + 6]
    X86_AT(c, 0x12ea1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x6u))), 0, 2)); }
    // 012ea6  ja 0x12eaa
    X86_AT(c, 0x12ea6u);
    if (x86_cc(c, 7)) { goto L_12eaa; }
    X86_TICK(c, 2);
    // 012ea8  xor eax, eax
    X86_AT(c, 0x12ea8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
L_12eaa:
    X86_TICK(c, 60);
    // 012eaa  mov word ptr gs:[esi + 8], ax
    X86_AT(c, 0x12eaau);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 012eaf  mov dx, 0x4f7
    X86_AT(c, 0x12eafu);
    s16(c, 2, 0x4F7u);
    // 012eb3  mov al, 0xc0
    X86_AT(c, 0x12eb3u);
    s8(c, 0, 0xC0u);
    // 012eb5  add al, bl
    X86_AT(c, 0x12eb5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 012eb7  out dx, al
    X86_AT(c, 0x12eb7u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012eb8  mov al, ah
    X86_AT(c, 0x12eb8u);
    s8(c, 0, g8(c, 4));
    // 012eba  add al, al
    X86_AT(c, 0x12ebau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 012ebc  mov dl, 0xf0
    X86_AT(c, 0x12ebcu);
    s8(c, 2, 0xF0u);
    // 012ebe  out dx, al
    X86_AT(c, 0x12ebeu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012ebf  push ds
    X86_AT(c, 0x12ebfu);
    push32(c, c.sreg[3]);
    // 012ec0  pop ds
    X86_AT(c, 0x12ec0u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012ec1  push ds
    X86_AT(c, 0x12ec1u);
    push32(c, c.sreg[3]);
    // 012ec2  pop ds
    X86_AT(c, 0x12ec2u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012ec3  ret 
    X86_AT(c, 0x12ec3u);
    c.eip = pop32(c); return;
L_12ec4:
    X86_TICK(c, 15);
    // 012ec4  mov ax, word ptr gs:[esi + 8]
    X86_AT(c, 0x12ec4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u))));
    // 012ec9  sub ax, word ptr gs:[esi + 6]
    X86_AT(c, 0x12ec9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x6u))), 0, 2)); }
    // 012ece  ja 0x12ed2
    X86_AT(c, 0x12eceu);
    if (x86_cc(c, 7)) { goto L_12ed2; }
    X86_TICK(c, 2);
    // 012ed0  xor eax, eax
    X86_AT(c, 0x12ed0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
L_12ed2:
    X86_TICK(c, 60);
    // 012ed2  mov word ptr gs:[esi + 8], ax
    X86_AT(c, 0x12ed2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 012ed7  mov dx, 0x4f7
    X86_AT(c, 0x12ed7u);
    s16(c, 2, 0x4F7u);
    // 012edb  mov al, 0xc0
    X86_AT(c, 0x12edbu);
    s8(c, 0, 0xC0u);
    // 012edd  add al, bl
    X86_AT(c, 0x12eddu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 012edf  out dx, al
    X86_AT(c, 0x12edfu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012ee0  mov al, ah
    X86_AT(c, 0x12ee0u);
    s8(c, 0, g8(c, 4));
    // 012ee2  add al, al
    X86_AT(c, 0x12ee2u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 012ee4  mov dl, 0xf0
    X86_AT(c, 0x12ee4u);
    s8(c, 2, 0xF0u);
    // 012ee6  out dx, al
    X86_AT(c, 0x12ee6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012ee7  push ds
    X86_AT(c, 0x12ee7u);
    push32(c, c.sreg[3]);
    // 012ee8  pop ds
    X86_AT(c, 0x12ee8u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012ee9  push ds
    X86_AT(c, 0x12ee9u);
    push32(c, c.sreg[3]);
    // 012eea  pop ds
    X86_AT(c, 0x12eeau);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012eeb  ret 
    X86_AT(c, 0x12eebu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12ddbu, "ran off the end of a function");
}
void f_00012dde(X86Cpu& c) {
    X86_TICK(c, 14);
    // 012dde  lea esi, [edi + esi*1 + 0x1aa0]
    X86_AT(c, 0x12ddeu);
    c.r[6] = (uint32_t)(c.r[7] + c.r[6] + 0x1AA0u);
    // 012de5  cmp word ptr gs:[esi + 8], 0
    X86_AT(c, 0x12de5u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u))), 0x0u, 0, 2);
    // 012deb  je 0x12e28
    X86_AT(c, 0x12debu);
    if (x86_cc(c, 4)) { goto L_12e28; }
    X86_TICK(c, 16);
    // 012ded  mov cl, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x12dedu);
    s8(c, 1, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 012df4  test byte ptr gs:[edi + 0x19fc], cl
    X86_AT(c, 0x12df4u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu))) & g8(c, 1), 1);
    // 012dfb  je 0x12e28
    X86_AT(c, 0x12dfbu);
    if (x86_cc(c, 4)) { goto L_12e28; }
    X86_TICK(c, 12);
    // 012dfd  test byte ptr gs:[edi + 0x19fa], cl
    X86_AT(c, 0x12dfdu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu))) & g8(c, 1), 1);
    // 012e04  je 0x12ec4
    X86_AT(c, 0x12e04u);
    if (x86_cc(c, 4)) { goto L_12ec4; }
    X86_TICK(c, 12);
    // 012e0a  test byte ptr gs:[edi + ebx*1 + 0x1a48], 1
    X86_AT(c, 0x12e0au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A48u))) & 0x1u, 1);
    // 012e13  je 0x12e3c
    X86_AT(c, 0x12e13u);
    if (x86_cc(c, 4)) { goto L_12e3c; }
    X86_TICK(c, 12);
    // 012e15  test byte ptr gs:[edi + ebx*1 + 0x1a48], 2
    X86_AT(c, 0x12e15u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A48u))) & 0x2u, 1);
    // 012e1e  je 0x12e6c
    X86_AT(c, 0x12e1eu);
    if (x86_cc(c, 4)) { goto L_12e6c; }
    X86_TICK(c, 7);
    // 012e20  jmp 0x12e9c
    X86_AT(c, 0x12e20u);
    goto L_12e9c;
L_12e28:
    X86_TICK(c, 23);
    // 012e28  mov ch, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x12e28u);
    s8(c, 5, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 012e2f  not ch
    X86_AT(c, 0x12e2fu);
    { uint32_t v = g8(c, 5); s8(c, 5, ~v & 0xFFu); }
    // 012e31  and byte ptr gs:[edi + 0x19fc], ch
    X86_AT(c, 0x12e31u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 5), 1)); }
    // 012e38  ret 
    X86_AT(c, 0x12e38u);
    c.eip = pop32(c); return;
L_12e3c:
    X86_TICK(c, 21);
    // 012e3c  mov ax, word ptr gs:[esi + 6]
    X86_AT(c, 0x12e3cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x6u))));
    // 012e41  add ax, word ptr gs:[esi + 8]
    X86_AT(c, 0x12e41u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u))), 0, 2)); }
    // 012e46  cmp ah, byte ptr gs:[esi]
    X86_AT(c, 0x12e46u);
    (void)x86_sub(c, g8(c, 4), rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 0, 1);
    // 012e49  ja 0x12e65
    X86_AT(c, 0x12e49u);
    if (x86_cc(c, 7)) { goto L_12e65; }
    X86_TICK(c, 60);
    // 012e4b  mov word ptr gs:[esi + 8], ax
    X86_AT(c, 0x12e4bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 012e50  mov dx, 0x4f7
    X86_AT(c, 0x12e50u);
    s16(c, 2, 0x4F7u);
    // 012e54  mov al, 0xc0
    X86_AT(c, 0x12e54u);
    s8(c, 0, 0xC0u);
    // 012e56  add al, bl
    X86_AT(c, 0x12e56u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 012e58  out dx, al
    X86_AT(c, 0x12e58u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012e59  mov al, ah
    X86_AT(c, 0x12e59u);
    s8(c, 0, g8(c, 4));
    // 012e5b  add al, al
    X86_AT(c, 0x12e5bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 012e5d  mov dl, 0xf0
    X86_AT(c, 0x12e5du);
    s8(c, 2, 0xF0u);
    // 012e5f  out dx, al
    X86_AT(c, 0x12e5fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012e60  push ds
    X86_AT(c, 0x12e60u);
    push32(c, c.sreg[3]);
    // 012e61  pop ds
    X86_AT(c, 0x12e61u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012e62  push ds
    X86_AT(c, 0x12e62u);
    push32(c, c.sreg[3]);
    // 012e63  pop ds
    X86_AT(c, 0x12e63u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012e64  ret 
    X86_AT(c, 0x12e64u);
    c.eip = pop32(c); return;
L_12e65:
    X86_TICK(c, 7);
    // 012e65  call 0x12f30
    X86_AT(c, 0x12e65u);
    push32(c, 0x12e6au); f_00012f30(c); X86_RET(c, 0x12e6au);
    X86_TICK(c, 10);
    // 012e6a  ret 
    X86_AT(c, 0x12e6au);
    c.eip = pop32(c); return;
L_12e6c:
    X86_TICK(c, 21);
    // 012e6c  mov ax, word ptr gs:[esi + 8]
    X86_AT(c, 0x12e6cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u))));
    // 012e71  sub ax, word ptr gs:[esi + 6]
    X86_AT(c, 0x12e71u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x6u))), 0, 2)); }
    // 012e76  cmp ah, byte ptr gs:[esi + 3]
    X86_AT(c, 0x12e76u);
    (void)x86_sub(c, g8(c, 4), rd8((c.sbase[5] + (uint32_t)(c.r[6] + 0x3u))), 0, 1);
    // 012e7a  jl 0x12e96
    X86_AT(c, 0x12e7au);
    if (x86_cc(c, 12)) { goto L_12e96; }
    X86_TICK(c, 60);
    // 012e7c  mov word ptr gs:[esi + 8], ax
    X86_AT(c, 0x12e7cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 012e81  mov dx, 0x4f7
    X86_AT(c, 0x12e81u);
    s16(c, 2, 0x4F7u);
    // 012e85  mov al, 0xc0
    X86_AT(c, 0x12e85u);
    s8(c, 0, 0xC0u);
    // 012e87  add al, bl
    X86_AT(c, 0x12e87u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 012e89  out dx, al
    X86_AT(c, 0x12e89u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012e8a  mov al, ah
    X86_AT(c, 0x12e8au);
    s8(c, 0, g8(c, 4));
    // 012e8c  add al, al
    X86_AT(c, 0x12e8cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 012e8e  mov dl, 0xf0
    X86_AT(c, 0x12e8eu);
    s8(c, 2, 0xF0u);
    // 012e90  out dx, al
    X86_AT(c, 0x12e90u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012e91  push ds
    X86_AT(c, 0x12e91u);
    push32(c, c.sreg[3]);
    // 012e92  pop ds
    X86_AT(c, 0x12e92u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012e93  push ds
    X86_AT(c, 0x12e93u);
    push32(c, c.sreg[3]);
    // 012e94  pop ds
    X86_AT(c, 0x12e94u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012e95  ret 
    X86_AT(c, 0x12e95u);
    c.eip = pop32(c); return;
L_12e96:
    X86_TICK(c, 7);
    // 012e96  call 0x12f78
    X86_AT(c, 0x12e96u);
    push32(c, 0x12e9bu); f_00012f78(c); X86_RET(c, 0x12e9bu);
    X86_TICK(c, 10);
    // 012e9b  ret 
    X86_AT(c, 0x12e9bu);
    c.eip = pop32(c); return;
L_12e9c:
    X86_TICK(c, 15);
    // 012e9c  mov ax, word ptr gs:[esi + 8]
    X86_AT(c, 0x12e9cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u))));
    // 012ea1  sub ax, word ptr gs:[esi + 6]
    X86_AT(c, 0x12ea1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x6u))), 0, 2)); }
    // 012ea6  ja 0x12eaa
    X86_AT(c, 0x12ea6u);
    if (x86_cc(c, 7)) { goto L_12eaa; }
    X86_TICK(c, 2);
    // 012ea8  xor eax, eax
    X86_AT(c, 0x12ea8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
L_12eaa:
    X86_TICK(c, 60);
    // 012eaa  mov word ptr gs:[esi + 8], ax
    X86_AT(c, 0x12eaau);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 012eaf  mov dx, 0x4f7
    X86_AT(c, 0x12eafu);
    s16(c, 2, 0x4F7u);
    // 012eb3  mov al, 0xc0
    X86_AT(c, 0x12eb3u);
    s8(c, 0, 0xC0u);
    // 012eb5  add al, bl
    X86_AT(c, 0x12eb5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 012eb7  out dx, al
    X86_AT(c, 0x12eb7u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012eb8  mov al, ah
    X86_AT(c, 0x12eb8u);
    s8(c, 0, g8(c, 4));
    // 012eba  add al, al
    X86_AT(c, 0x12ebau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 012ebc  mov dl, 0xf0
    X86_AT(c, 0x12ebcu);
    s8(c, 2, 0xF0u);
    // 012ebe  out dx, al
    X86_AT(c, 0x12ebeu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012ebf  push ds
    X86_AT(c, 0x12ebfu);
    push32(c, c.sreg[3]);
    // 012ec0  pop ds
    X86_AT(c, 0x12ec0u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012ec1  push ds
    X86_AT(c, 0x12ec1u);
    push32(c, c.sreg[3]);
    // 012ec2  pop ds
    X86_AT(c, 0x12ec2u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012ec3  ret 
    X86_AT(c, 0x12ec3u);
    c.eip = pop32(c); return;
L_12ec4:
    X86_TICK(c, 15);
    // 012ec4  mov ax, word ptr gs:[esi + 8]
    X86_AT(c, 0x12ec4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u))));
    // 012ec9  sub ax, word ptr gs:[esi + 6]
    X86_AT(c, 0x12ec9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x6u))), 0, 2)); }
    // 012ece  ja 0x12ed2
    X86_AT(c, 0x12eceu);
    if (x86_cc(c, 7)) { goto L_12ed2; }
    X86_TICK(c, 2);
    // 012ed0  xor eax, eax
    X86_AT(c, 0x12ed0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
L_12ed2:
    X86_TICK(c, 60);
    // 012ed2  mov word ptr gs:[esi + 8], ax
    X86_AT(c, 0x12ed2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 012ed7  mov dx, 0x4f7
    X86_AT(c, 0x12ed7u);
    s16(c, 2, 0x4F7u);
    // 012edb  mov al, 0xc0
    X86_AT(c, 0x12edbu);
    s8(c, 0, 0xC0u);
    // 012edd  add al, bl
    X86_AT(c, 0x12eddu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 012edf  out dx, al
    X86_AT(c, 0x12edfu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012ee0  mov al, ah
    X86_AT(c, 0x12ee0u);
    s8(c, 0, g8(c, 4));
    // 012ee2  add al, al
    X86_AT(c, 0x12ee2u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 012ee4  mov dl, 0xf0
    X86_AT(c, 0x12ee4u);
    s8(c, 2, 0xF0u);
    // 012ee6  out dx, al
    X86_AT(c, 0x12ee6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012ee7  push ds
    X86_AT(c, 0x12ee7u);
    push32(c, c.sreg[3]);
    // 012ee8  pop ds
    X86_AT(c, 0x12ee8u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012ee9  push ds
    X86_AT(c, 0x12ee9u);
    push32(c, c.sreg[3]);
    // 012eea  pop ds
    X86_AT(c, 0x12eeau);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012eeb  ret 
    X86_AT(c, 0x12eebu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12ddeu, "ran off the end of a function");
}
void f_00012de5(X86Cpu& c) {
    X86_TICK(c, 12);
    // 012de5  cmp word ptr gs:[esi + 8], 0
    X86_AT(c, 0x12de5u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u))), 0x0u, 0, 2);
    // 012deb  je 0x12e28
    X86_AT(c, 0x12debu);
    if (x86_cc(c, 4)) { goto L_12e28; }
    X86_TICK(c, 16);
    // 012ded  mov cl, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x12dedu);
    s8(c, 1, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 012df4  test byte ptr gs:[edi + 0x19fc], cl
    X86_AT(c, 0x12df4u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu))) & g8(c, 1), 1);
    // 012dfb  je 0x12e28
    X86_AT(c, 0x12dfbu);
    if (x86_cc(c, 4)) { goto L_12e28; }
    X86_TICK(c, 12);
    // 012dfd  test byte ptr gs:[edi + 0x19fa], cl
    X86_AT(c, 0x12dfdu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu))) & g8(c, 1), 1);
    // 012e04  je 0x12ec4
    X86_AT(c, 0x12e04u);
    if (x86_cc(c, 4)) { goto L_12ec4; }
    X86_TICK(c, 12);
    // 012e0a  test byte ptr gs:[edi + ebx*1 + 0x1a48], 1
    X86_AT(c, 0x12e0au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A48u))) & 0x1u, 1);
    // 012e13  je 0x12e3c
    X86_AT(c, 0x12e13u);
    if (x86_cc(c, 4)) { goto L_12e3c; }
    X86_TICK(c, 12);
    // 012e15  test byte ptr gs:[edi + ebx*1 + 0x1a48], 2
    X86_AT(c, 0x12e15u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A48u))) & 0x2u, 1);
    // 012e1e  je 0x12e6c
    X86_AT(c, 0x12e1eu);
    if (x86_cc(c, 4)) { goto L_12e6c; }
    X86_TICK(c, 7);
    // 012e20  jmp 0x12e9c
    X86_AT(c, 0x12e20u);
    goto L_12e9c;
L_12e28:
    X86_TICK(c, 23);
    // 012e28  mov ch, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x12e28u);
    s8(c, 5, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 012e2f  not ch
    X86_AT(c, 0x12e2fu);
    { uint32_t v = g8(c, 5); s8(c, 5, ~v & 0xFFu); }
    // 012e31  and byte ptr gs:[edi + 0x19fc], ch
    X86_AT(c, 0x12e31u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 5), 1)); }
    // 012e38  ret 
    X86_AT(c, 0x12e38u);
    c.eip = pop32(c); return;
L_12e3c:
    X86_TICK(c, 21);
    // 012e3c  mov ax, word ptr gs:[esi + 6]
    X86_AT(c, 0x12e3cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x6u))));
    // 012e41  add ax, word ptr gs:[esi + 8]
    X86_AT(c, 0x12e41u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u))), 0, 2)); }
    // 012e46  cmp ah, byte ptr gs:[esi]
    X86_AT(c, 0x12e46u);
    (void)x86_sub(c, g8(c, 4), rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 0, 1);
    // 012e49  ja 0x12e65
    X86_AT(c, 0x12e49u);
    if (x86_cc(c, 7)) { goto L_12e65; }
    X86_TICK(c, 60);
    // 012e4b  mov word ptr gs:[esi + 8], ax
    X86_AT(c, 0x12e4bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 012e50  mov dx, 0x4f7
    X86_AT(c, 0x12e50u);
    s16(c, 2, 0x4F7u);
    // 012e54  mov al, 0xc0
    X86_AT(c, 0x12e54u);
    s8(c, 0, 0xC0u);
    // 012e56  add al, bl
    X86_AT(c, 0x12e56u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 012e58  out dx, al
    X86_AT(c, 0x12e58u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012e59  mov al, ah
    X86_AT(c, 0x12e59u);
    s8(c, 0, g8(c, 4));
    // 012e5b  add al, al
    X86_AT(c, 0x12e5bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 012e5d  mov dl, 0xf0
    X86_AT(c, 0x12e5du);
    s8(c, 2, 0xF0u);
    // 012e5f  out dx, al
    X86_AT(c, 0x12e5fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012e60  push ds
    X86_AT(c, 0x12e60u);
    push32(c, c.sreg[3]);
    // 012e61  pop ds
    X86_AT(c, 0x12e61u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012e62  push ds
    X86_AT(c, 0x12e62u);
    push32(c, c.sreg[3]);
    // 012e63  pop ds
    X86_AT(c, 0x12e63u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012e64  ret 
    X86_AT(c, 0x12e64u);
    c.eip = pop32(c); return;
L_12e65:
    X86_TICK(c, 7);
    // 012e65  call 0x12f30
    X86_AT(c, 0x12e65u);
    push32(c, 0x12e6au); f_00012f30(c); X86_RET(c, 0x12e6au);
    X86_TICK(c, 10);
    // 012e6a  ret 
    X86_AT(c, 0x12e6au);
    c.eip = pop32(c); return;
L_12e6c:
    X86_TICK(c, 21);
    // 012e6c  mov ax, word ptr gs:[esi + 8]
    X86_AT(c, 0x12e6cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u))));
    // 012e71  sub ax, word ptr gs:[esi + 6]
    X86_AT(c, 0x12e71u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x6u))), 0, 2)); }
    // 012e76  cmp ah, byte ptr gs:[esi + 3]
    X86_AT(c, 0x12e76u);
    (void)x86_sub(c, g8(c, 4), rd8((c.sbase[5] + (uint32_t)(c.r[6] + 0x3u))), 0, 1);
    // 012e7a  jl 0x12e96
    X86_AT(c, 0x12e7au);
    if (x86_cc(c, 12)) { goto L_12e96; }
    X86_TICK(c, 60);
    // 012e7c  mov word ptr gs:[esi + 8], ax
    X86_AT(c, 0x12e7cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 012e81  mov dx, 0x4f7
    X86_AT(c, 0x12e81u);
    s16(c, 2, 0x4F7u);
    // 012e85  mov al, 0xc0
    X86_AT(c, 0x12e85u);
    s8(c, 0, 0xC0u);
    // 012e87  add al, bl
    X86_AT(c, 0x12e87u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 012e89  out dx, al
    X86_AT(c, 0x12e89u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012e8a  mov al, ah
    X86_AT(c, 0x12e8au);
    s8(c, 0, g8(c, 4));
    // 012e8c  add al, al
    X86_AT(c, 0x12e8cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 012e8e  mov dl, 0xf0
    X86_AT(c, 0x12e8eu);
    s8(c, 2, 0xF0u);
    // 012e90  out dx, al
    X86_AT(c, 0x12e90u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012e91  push ds
    X86_AT(c, 0x12e91u);
    push32(c, c.sreg[3]);
    // 012e92  pop ds
    X86_AT(c, 0x12e92u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012e93  push ds
    X86_AT(c, 0x12e93u);
    push32(c, c.sreg[3]);
    // 012e94  pop ds
    X86_AT(c, 0x12e94u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012e95  ret 
    X86_AT(c, 0x12e95u);
    c.eip = pop32(c); return;
L_12e96:
    X86_TICK(c, 7);
    // 012e96  call 0x12f78
    X86_AT(c, 0x12e96u);
    push32(c, 0x12e9bu); f_00012f78(c); X86_RET(c, 0x12e9bu);
    X86_TICK(c, 10);
    // 012e9b  ret 
    X86_AT(c, 0x12e9bu);
    c.eip = pop32(c); return;
L_12e9c:
    X86_TICK(c, 15);
    // 012e9c  mov ax, word ptr gs:[esi + 8]
    X86_AT(c, 0x12e9cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u))));
    // 012ea1  sub ax, word ptr gs:[esi + 6]
    X86_AT(c, 0x12ea1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x6u))), 0, 2)); }
    // 012ea6  ja 0x12eaa
    X86_AT(c, 0x12ea6u);
    if (x86_cc(c, 7)) { goto L_12eaa; }
    X86_TICK(c, 2);
    // 012ea8  xor eax, eax
    X86_AT(c, 0x12ea8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
L_12eaa:
    X86_TICK(c, 60);
    // 012eaa  mov word ptr gs:[esi + 8], ax
    X86_AT(c, 0x12eaau);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 012eaf  mov dx, 0x4f7
    X86_AT(c, 0x12eafu);
    s16(c, 2, 0x4F7u);
    // 012eb3  mov al, 0xc0
    X86_AT(c, 0x12eb3u);
    s8(c, 0, 0xC0u);
    // 012eb5  add al, bl
    X86_AT(c, 0x12eb5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 012eb7  out dx, al
    X86_AT(c, 0x12eb7u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012eb8  mov al, ah
    X86_AT(c, 0x12eb8u);
    s8(c, 0, g8(c, 4));
    // 012eba  add al, al
    X86_AT(c, 0x12ebau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 012ebc  mov dl, 0xf0
    X86_AT(c, 0x12ebcu);
    s8(c, 2, 0xF0u);
    // 012ebe  out dx, al
    X86_AT(c, 0x12ebeu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012ebf  push ds
    X86_AT(c, 0x12ebfu);
    push32(c, c.sreg[3]);
    // 012ec0  pop ds
    X86_AT(c, 0x12ec0u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012ec1  push ds
    X86_AT(c, 0x12ec1u);
    push32(c, c.sreg[3]);
    // 012ec2  pop ds
    X86_AT(c, 0x12ec2u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012ec3  ret 
    X86_AT(c, 0x12ec3u);
    c.eip = pop32(c); return;
L_12ec4:
    X86_TICK(c, 15);
    // 012ec4  mov ax, word ptr gs:[esi + 8]
    X86_AT(c, 0x12ec4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u))));
    // 012ec9  sub ax, word ptr gs:[esi + 6]
    X86_AT(c, 0x12ec9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x6u))), 0, 2)); }
    // 012ece  ja 0x12ed2
    X86_AT(c, 0x12eceu);
    if (x86_cc(c, 7)) { goto L_12ed2; }
    X86_TICK(c, 2);
    // 012ed0  xor eax, eax
    X86_AT(c, 0x12ed0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
L_12ed2:
    X86_TICK(c, 60);
    // 012ed2  mov word ptr gs:[esi + 8], ax
    X86_AT(c, 0x12ed2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 012ed7  mov dx, 0x4f7
    X86_AT(c, 0x12ed7u);
    s16(c, 2, 0x4F7u);
    // 012edb  mov al, 0xc0
    X86_AT(c, 0x12edbu);
    s8(c, 0, 0xC0u);
    // 012edd  add al, bl
    X86_AT(c, 0x12eddu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 012edf  out dx, al
    X86_AT(c, 0x12edfu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012ee0  mov al, ah
    X86_AT(c, 0x12ee0u);
    s8(c, 0, g8(c, 4));
    // 012ee2  add al, al
    X86_AT(c, 0x12ee2u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 012ee4  mov dl, 0xf0
    X86_AT(c, 0x12ee4u);
    s8(c, 2, 0xF0u);
    // 012ee6  out dx, al
    X86_AT(c, 0x12ee6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012ee7  push ds
    X86_AT(c, 0x12ee7u);
    push32(c, c.sreg[3]);
    // 012ee8  pop ds
    X86_AT(c, 0x12ee8u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012ee9  push ds
    X86_AT(c, 0x12ee9u);
    push32(c, c.sreg[3]);
    // 012eea  pop ds
    X86_AT(c, 0x12eeau);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012eeb  ret 
    X86_AT(c, 0x12eebu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12de5u, "ran off the end of a function");
}
void f_00012deb(X86Cpu& c) {
    X86_TICK(c, 5);
    // 012deb  je 0x12e28
    X86_AT(c, 0x12debu);
    if (x86_cc(c, 4)) { goto L_12e28; }
    X86_TICK(c, 16);
    // 012ded  mov cl, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x12dedu);
    s8(c, 1, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 012df4  test byte ptr gs:[edi + 0x19fc], cl
    X86_AT(c, 0x12df4u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu))) & g8(c, 1), 1);
    // 012dfb  je 0x12e28
    X86_AT(c, 0x12dfbu);
    if (x86_cc(c, 4)) { goto L_12e28; }
    X86_TICK(c, 12);
    // 012dfd  test byte ptr gs:[edi + 0x19fa], cl
    X86_AT(c, 0x12dfdu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu))) & g8(c, 1), 1);
    // 012e04  je 0x12ec4
    X86_AT(c, 0x12e04u);
    if (x86_cc(c, 4)) { goto L_12ec4; }
    X86_TICK(c, 12);
    // 012e0a  test byte ptr gs:[edi + ebx*1 + 0x1a48], 1
    X86_AT(c, 0x12e0au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A48u))) & 0x1u, 1);
    // 012e13  je 0x12e3c
    X86_AT(c, 0x12e13u);
    if (x86_cc(c, 4)) { goto L_12e3c; }
    X86_TICK(c, 12);
    // 012e15  test byte ptr gs:[edi + ebx*1 + 0x1a48], 2
    X86_AT(c, 0x12e15u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A48u))) & 0x2u, 1);
    // 012e1e  je 0x12e6c
    X86_AT(c, 0x12e1eu);
    if (x86_cc(c, 4)) { goto L_12e6c; }
    X86_TICK(c, 7);
    // 012e20  jmp 0x12e9c
    X86_AT(c, 0x12e20u);
    goto L_12e9c;
L_12e28:
    X86_TICK(c, 23);
    // 012e28  mov ch, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x12e28u);
    s8(c, 5, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 012e2f  not ch
    X86_AT(c, 0x12e2fu);
    { uint32_t v = g8(c, 5); s8(c, 5, ~v & 0xFFu); }
    // 012e31  and byte ptr gs:[edi + 0x19fc], ch
    X86_AT(c, 0x12e31u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 5), 1)); }
    // 012e38  ret 
    X86_AT(c, 0x12e38u);
    c.eip = pop32(c); return;
L_12e3c:
    X86_TICK(c, 21);
    // 012e3c  mov ax, word ptr gs:[esi + 6]
    X86_AT(c, 0x12e3cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x6u))));
    // 012e41  add ax, word ptr gs:[esi + 8]
    X86_AT(c, 0x12e41u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u))), 0, 2)); }
    // 012e46  cmp ah, byte ptr gs:[esi]
    X86_AT(c, 0x12e46u);
    (void)x86_sub(c, g8(c, 4), rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 0, 1);
    // 012e49  ja 0x12e65
    X86_AT(c, 0x12e49u);
    if (x86_cc(c, 7)) { goto L_12e65; }
    X86_TICK(c, 60);
    // 012e4b  mov word ptr gs:[esi + 8], ax
    X86_AT(c, 0x12e4bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 012e50  mov dx, 0x4f7
    X86_AT(c, 0x12e50u);
    s16(c, 2, 0x4F7u);
    // 012e54  mov al, 0xc0
    X86_AT(c, 0x12e54u);
    s8(c, 0, 0xC0u);
    // 012e56  add al, bl
    X86_AT(c, 0x12e56u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 012e58  out dx, al
    X86_AT(c, 0x12e58u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012e59  mov al, ah
    X86_AT(c, 0x12e59u);
    s8(c, 0, g8(c, 4));
    // 012e5b  add al, al
    X86_AT(c, 0x12e5bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 012e5d  mov dl, 0xf0
    X86_AT(c, 0x12e5du);
    s8(c, 2, 0xF0u);
    // 012e5f  out dx, al
    X86_AT(c, 0x12e5fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012e60  push ds
    X86_AT(c, 0x12e60u);
    push32(c, c.sreg[3]);
    // 012e61  pop ds
    X86_AT(c, 0x12e61u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012e62  push ds
    X86_AT(c, 0x12e62u);
    push32(c, c.sreg[3]);
    // 012e63  pop ds
    X86_AT(c, 0x12e63u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012e64  ret 
    X86_AT(c, 0x12e64u);
    c.eip = pop32(c); return;
L_12e65:
    X86_TICK(c, 7);
    // 012e65  call 0x12f30
    X86_AT(c, 0x12e65u);
    push32(c, 0x12e6au); f_00012f30(c); X86_RET(c, 0x12e6au);
    X86_TICK(c, 10);
    // 012e6a  ret 
    X86_AT(c, 0x12e6au);
    c.eip = pop32(c); return;
L_12e6c:
    X86_TICK(c, 21);
    // 012e6c  mov ax, word ptr gs:[esi + 8]
    X86_AT(c, 0x12e6cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u))));
    // 012e71  sub ax, word ptr gs:[esi + 6]
    X86_AT(c, 0x12e71u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x6u))), 0, 2)); }
    // 012e76  cmp ah, byte ptr gs:[esi + 3]
    X86_AT(c, 0x12e76u);
    (void)x86_sub(c, g8(c, 4), rd8((c.sbase[5] + (uint32_t)(c.r[6] + 0x3u))), 0, 1);
    // 012e7a  jl 0x12e96
    X86_AT(c, 0x12e7au);
    if (x86_cc(c, 12)) { goto L_12e96; }
    X86_TICK(c, 60);
    // 012e7c  mov word ptr gs:[esi + 8], ax
    X86_AT(c, 0x12e7cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 012e81  mov dx, 0x4f7
    X86_AT(c, 0x12e81u);
    s16(c, 2, 0x4F7u);
    // 012e85  mov al, 0xc0
    X86_AT(c, 0x12e85u);
    s8(c, 0, 0xC0u);
    // 012e87  add al, bl
    X86_AT(c, 0x12e87u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 012e89  out dx, al
    X86_AT(c, 0x12e89u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012e8a  mov al, ah
    X86_AT(c, 0x12e8au);
    s8(c, 0, g8(c, 4));
    // 012e8c  add al, al
    X86_AT(c, 0x12e8cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 012e8e  mov dl, 0xf0
    X86_AT(c, 0x12e8eu);
    s8(c, 2, 0xF0u);
    // 012e90  out dx, al
    X86_AT(c, 0x12e90u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012e91  push ds
    X86_AT(c, 0x12e91u);
    push32(c, c.sreg[3]);
    // 012e92  pop ds
    X86_AT(c, 0x12e92u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012e93  push ds
    X86_AT(c, 0x12e93u);
    push32(c, c.sreg[3]);
    // 012e94  pop ds
    X86_AT(c, 0x12e94u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012e95  ret 
    X86_AT(c, 0x12e95u);
    c.eip = pop32(c); return;
L_12e96:
    X86_TICK(c, 7);
    // 012e96  call 0x12f78
    X86_AT(c, 0x12e96u);
    push32(c, 0x12e9bu); f_00012f78(c); X86_RET(c, 0x12e9bu);
    X86_TICK(c, 10);
    // 012e9b  ret 
    X86_AT(c, 0x12e9bu);
    c.eip = pop32(c); return;
L_12e9c:
    X86_TICK(c, 15);
    // 012e9c  mov ax, word ptr gs:[esi + 8]
    X86_AT(c, 0x12e9cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u))));
    // 012ea1  sub ax, word ptr gs:[esi + 6]
    X86_AT(c, 0x12ea1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x6u))), 0, 2)); }
    // 012ea6  ja 0x12eaa
    X86_AT(c, 0x12ea6u);
    if (x86_cc(c, 7)) { goto L_12eaa; }
    X86_TICK(c, 2);
    // 012ea8  xor eax, eax
    X86_AT(c, 0x12ea8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
L_12eaa:
    X86_TICK(c, 60);
    // 012eaa  mov word ptr gs:[esi + 8], ax
    X86_AT(c, 0x12eaau);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 012eaf  mov dx, 0x4f7
    X86_AT(c, 0x12eafu);
    s16(c, 2, 0x4F7u);
    // 012eb3  mov al, 0xc0
    X86_AT(c, 0x12eb3u);
    s8(c, 0, 0xC0u);
    // 012eb5  add al, bl
    X86_AT(c, 0x12eb5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 012eb7  out dx, al
    X86_AT(c, 0x12eb7u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012eb8  mov al, ah
    X86_AT(c, 0x12eb8u);
    s8(c, 0, g8(c, 4));
    // 012eba  add al, al
    X86_AT(c, 0x12ebau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 012ebc  mov dl, 0xf0
    X86_AT(c, 0x12ebcu);
    s8(c, 2, 0xF0u);
    // 012ebe  out dx, al
    X86_AT(c, 0x12ebeu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012ebf  push ds
    X86_AT(c, 0x12ebfu);
    push32(c, c.sreg[3]);
    // 012ec0  pop ds
    X86_AT(c, 0x12ec0u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012ec1  push ds
    X86_AT(c, 0x12ec1u);
    push32(c, c.sreg[3]);
    // 012ec2  pop ds
    X86_AT(c, 0x12ec2u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012ec3  ret 
    X86_AT(c, 0x12ec3u);
    c.eip = pop32(c); return;
L_12ec4:
    X86_TICK(c, 15);
    // 012ec4  mov ax, word ptr gs:[esi + 8]
    X86_AT(c, 0x12ec4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u))));
    // 012ec9  sub ax, word ptr gs:[esi + 6]
    X86_AT(c, 0x12ec9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x6u))), 0, 2)); }
    // 012ece  ja 0x12ed2
    X86_AT(c, 0x12eceu);
    if (x86_cc(c, 7)) { goto L_12ed2; }
    X86_TICK(c, 2);
    // 012ed0  xor eax, eax
    X86_AT(c, 0x12ed0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
L_12ed2:
    X86_TICK(c, 60);
    // 012ed2  mov word ptr gs:[esi + 8], ax
    X86_AT(c, 0x12ed2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 012ed7  mov dx, 0x4f7
    X86_AT(c, 0x12ed7u);
    s16(c, 2, 0x4F7u);
    // 012edb  mov al, 0xc0
    X86_AT(c, 0x12edbu);
    s8(c, 0, 0xC0u);
    // 012edd  add al, bl
    X86_AT(c, 0x12eddu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 012edf  out dx, al
    X86_AT(c, 0x12edfu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012ee0  mov al, ah
    X86_AT(c, 0x12ee0u);
    s8(c, 0, g8(c, 4));
    // 012ee2  add al, al
    X86_AT(c, 0x12ee2u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 012ee4  mov dl, 0xf0
    X86_AT(c, 0x12ee4u);
    s8(c, 2, 0xF0u);
    // 012ee6  out dx, al
    X86_AT(c, 0x12ee6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012ee7  push ds
    X86_AT(c, 0x12ee7u);
    push32(c, c.sreg[3]);
    // 012ee8  pop ds
    X86_AT(c, 0x12ee8u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012ee9  push ds
    X86_AT(c, 0x12ee9u);
    push32(c, c.sreg[3]);
    // 012eea  pop ds
    X86_AT(c, 0x12eeau);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012eeb  ret 
    X86_AT(c, 0x12eebu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12debu, "ran off the end of a function");
}
void f_00012ded(X86Cpu& c) {
    X86_TICK(c, 16);
    // 012ded  mov cl, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x12dedu);
    s8(c, 1, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 012df4  test byte ptr gs:[edi + 0x19fc], cl
    X86_AT(c, 0x12df4u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu))) & g8(c, 1), 1);
    // 012dfb  je 0x12e28
    X86_AT(c, 0x12dfbu);
    if (x86_cc(c, 4)) { goto L_12e28; }
    X86_TICK(c, 12);
    // 012dfd  test byte ptr gs:[edi + 0x19fa], cl
    X86_AT(c, 0x12dfdu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu))) & g8(c, 1), 1);
    // 012e04  je 0x12ec4
    X86_AT(c, 0x12e04u);
    if (x86_cc(c, 4)) { goto L_12ec4; }
    X86_TICK(c, 12);
    // 012e0a  test byte ptr gs:[edi + ebx*1 + 0x1a48], 1
    X86_AT(c, 0x12e0au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A48u))) & 0x1u, 1);
    // 012e13  je 0x12e3c
    X86_AT(c, 0x12e13u);
    if (x86_cc(c, 4)) { goto L_12e3c; }
    X86_TICK(c, 12);
    // 012e15  test byte ptr gs:[edi + ebx*1 + 0x1a48], 2
    X86_AT(c, 0x12e15u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A48u))) & 0x2u, 1);
    // 012e1e  je 0x12e6c
    X86_AT(c, 0x12e1eu);
    if (x86_cc(c, 4)) { goto L_12e6c; }
    X86_TICK(c, 7);
    // 012e20  jmp 0x12e9c
    X86_AT(c, 0x12e20u);
    goto L_12e9c;
L_12e28:
    X86_TICK(c, 23);
    // 012e28  mov ch, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x12e28u);
    s8(c, 5, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 012e2f  not ch
    X86_AT(c, 0x12e2fu);
    { uint32_t v = g8(c, 5); s8(c, 5, ~v & 0xFFu); }
    // 012e31  and byte ptr gs:[edi + 0x19fc], ch
    X86_AT(c, 0x12e31u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 5), 1)); }
    // 012e38  ret 
    X86_AT(c, 0x12e38u);
    c.eip = pop32(c); return;
L_12e3c:
    X86_TICK(c, 21);
    // 012e3c  mov ax, word ptr gs:[esi + 6]
    X86_AT(c, 0x12e3cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x6u))));
    // 012e41  add ax, word ptr gs:[esi + 8]
    X86_AT(c, 0x12e41u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u))), 0, 2)); }
    // 012e46  cmp ah, byte ptr gs:[esi]
    X86_AT(c, 0x12e46u);
    (void)x86_sub(c, g8(c, 4), rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 0, 1);
    // 012e49  ja 0x12e65
    X86_AT(c, 0x12e49u);
    if (x86_cc(c, 7)) { goto L_12e65; }
    X86_TICK(c, 60);
    // 012e4b  mov word ptr gs:[esi + 8], ax
    X86_AT(c, 0x12e4bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 012e50  mov dx, 0x4f7
    X86_AT(c, 0x12e50u);
    s16(c, 2, 0x4F7u);
    // 012e54  mov al, 0xc0
    X86_AT(c, 0x12e54u);
    s8(c, 0, 0xC0u);
    // 012e56  add al, bl
    X86_AT(c, 0x12e56u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 012e58  out dx, al
    X86_AT(c, 0x12e58u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012e59  mov al, ah
    X86_AT(c, 0x12e59u);
    s8(c, 0, g8(c, 4));
    // 012e5b  add al, al
    X86_AT(c, 0x12e5bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 012e5d  mov dl, 0xf0
    X86_AT(c, 0x12e5du);
    s8(c, 2, 0xF0u);
    // 012e5f  out dx, al
    X86_AT(c, 0x12e5fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012e60  push ds
    X86_AT(c, 0x12e60u);
    push32(c, c.sreg[3]);
    // 012e61  pop ds
    X86_AT(c, 0x12e61u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012e62  push ds
    X86_AT(c, 0x12e62u);
    push32(c, c.sreg[3]);
    // 012e63  pop ds
    X86_AT(c, 0x12e63u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012e64  ret 
    X86_AT(c, 0x12e64u);
    c.eip = pop32(c); return;
L_12e65:
    X86_TICK(c, 7);
    // 012e65  call 0x12f30
    X86_AT(c, 0x12e65u);
    push32(c, 0x12e6au); f_00012f30(c); X86_RET(c, 0x12e6au);
    X86_TICK(c, 10);
    // 012e6a  ret 
    X86_AT(c, 0x12e6au);
    c.eip = pop32(c); return;
L_12e6c:
    X86_TICK(c, 21);
    // 012e6c  mov ax, word ptr gs:[esi + 8]
    X86_AT(c, 0x12e6cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u))));
    // 012e71  sub ax, word ptr gs:[esi + 6]
    X86_AT(c, 0x12e71u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x6u))), 0, 2)); }
    // 012e76  cmp ah, byte ptr gs:[esi + 3]
    X86_AT(c, 0x12e76u);
    (void)x86_sub(c, g8(c, 4), rd8((c.sbase[5] + (uint32_t)(c.r[6] + 0x3u))), 0, 1);
    // 012e7a  jl 0x12e96
    X86_AT(c, 0x12e7au);
    if (x86_cc(c, 12)) { goto L_12e96; }
    X86_TICK(c, 60);
    // 012e7c  mov word ptr gs:[esi + 8], ax
    X86_AT(c, 0x12e7cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 012e81  mov dx, 0x4f7
    X86_AT(c, 0x12e81u);
    s16(c, 2, 0x4F7u);
    // 012e85  mov al, 0xc0
    X86_AT(c, 0x12e85u);
    s8(c, 0, 0xC0u);
    // 012e87  add al, bl
    X86_AT(c, 0x12e87u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 012e89  out dx, al
    X86_AT(c, 0x12e89u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012e8a  mov al, ah
    X86_AT(c, 0x12e8au);
    s8(c, 0, g8(c, 4));
    // 012e8c  add al, al
    X86_AT(c, 0x12e8cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 012e8e  mov dl, 0xf0
    X86_AT(c, 0x12e8eu);
    s8(c, 2, 0xF0u);
    // 012e90  out dx, al
    X86_AT(c, 0x12e90u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012e91  push ds
    X86_AT(c, 0x12e91u);
    push32(c, c.sreg[3]);
    // 012e92  pop ds
    X86_AT(c, 0x12e92u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012e93  push ds
    X86_AT(c, 0x12e93u);
    push32(c, c.sreg[3]);
    // 012e94  pop ds
    X86_AT(c, 0x12e94u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012e95  ret 
    X86_AT(c, 0x12e95u);
    c.eip = pop32(c); return;
L_12e96:
    X86_TICK(c, 7);
    // 012e96  call 0x12f78
    X86_AT(c, 0x12e96u);
    push32(c, 0x12e9bu); f_00012f78(c); X86_RET(c, 0x12e9bu);
    X86_TICK(c, 10);
    // 012e9b  ret 
    X86_AT(c, 0x12e9bu);
    c.eip = pop32(c); return;
L_12e9c:
    X86_TICK(c, 15);
    // 012e9c  mov ax, word ptr gs:[esi + 8]
    X86_AT(c, 0x12e9cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u))));
    // 012ea1  sub ax, word ptr gs:[esi + 6]
    X86_AT(c, 0x12ea1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x6u))), 0, 2)); }
    // 012ea6  ja 0x12eaa
    X86_AT(c, 0x12ea6u);
    if (x86_cc(c, 7)) { goto L_12eaa; }
    X86_TICK(c, 2);
    // 012ea8  xor eax, eax
    X86_AT(c, 0x12ea8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
L_12eaa:
    X86_TICK(c, 60);
    // 012eaa  mov word ptr gs:[esi + 8], ax
    X86_AT(c, 0x12eaau);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 012eaf  mov dx, 0x4f7
    X86_AT(c, 0x12eafu);
    s16(c, 2, 0x4F7u);
    // 012eb3  mov al, 0xc0
    X86_AT(c, 0x12eb3u);
    s8(c, 0, 0xC0u);
    // 012eb5  add al, bl
    X86_AT(c, 0x12eb5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 012eb7  out dx, al
    X86_AT(c, 0x12eb7u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012eb8  mov al, ah
    X86_AT(c, 0x12eb8u);
    s8(c, 0, g8(c, 4));
    // 012eba  add al, al
    X86_AT(c, 0x12ebau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 012ebc  mov dl, 0xf0
    X86_AT(c, 0x12ebcu);
    s8(c, 2, 0xF0u);
    // 012ebe  out dx, al
    X86_AT(c, 0x12ebeu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012ebf  push ds
    X86_AT(c, 0x12ebfu);
    push32(c, c.sreg[3]);
    // 012ec0  pop ds
    X86_AT(c, 0x12ec0u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012ec1  push ds
    X86_AT(c, 0x12ec1u);
    push32(c, c.sreg[3]);
    // 012ec2  pop ds
    X86_AT(c, 0x12ec2u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012ec3  ret 
    X86_AT(c, 0x12ec3u);
    c.eip = pop32(c); return;
L_12ec4:
    X86_TICK(c, 15);
    // 012ec4  mov ax, word ptr gs:[esi + 8]
    X86_AT(c, 0x12ec4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u))));
    // 012ec9  sub ax, word ptr gs:[esi + 6]
    X86_AT(c, 0x12ec9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x6u))), 0, 2)); }
    // 012ece  ja 0x12ed2
    X86_AT(c, 0x12eceu);
    if (x86_cc(c, 7)) { goto L_12ed2; }
    X86_TICK(c, 2);
    // 012ed0  xor eax, eax
    X86_AT(c, 0x12ed0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
L_12ed2:
    X86_TICK(c, 60);
    // 012ed2  mov word ptr gs:[esi + 8], ax
    X86_AT(c, 0x12ed2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 012ed7  mov dx, 0x4f7
    X86_AT(c, 0x12ed7u);
    s16(c, 2, 0x4F7u);
    // 012edb  mov al, 0xc0
    X86_AT(c, 0x12edbu);
    s8(c, 0, 0xC0u);
    // 012edd  add al, bl
    X86_AT(c, 0x12eddu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 012edf  out dx, al
    X86_AT(c, 0x12edfu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012ee0  mov al, ah
    X86_AT(c, 0x12ee0u);
    s8(c, 0, g8(c, 4));
    // 012ee2  add al, al
    X86_AT(c, 0x12ee2u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 012ee4  mov dl, 0xf0
    X86_AT(c, 0x12ee4u);
    s8(c, 2, 0xF0u);
    // 012ee6  out dx, al
    X86_AT(c, 0x12ee6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012ee7  push ds
    X86_AT(c, 0x12ee7u);
    push32(c, c.sreg[3]);
    // 012ee8  pop ds
    X86_AT(c, 0x12ee8u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012ee9  push ds
    X86_AT(c, 0x12ee9u);
    push32(c, c.sreg[3]);
    // 012eea  pop ds
    X86_AT(c, 0x12eeau);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012eeb  ret 
    X86_AT(c, 0x12eebu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12dedu, "ran off the end of a function");
}
void f_00012df4(X86Cpu& c) {
    X86_TICK(c, 12);
    // 012df4  test byte ptr gs:[edi + 0x19fc], cl
    X86_AT(c, 0x12df4u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu))) & g8(c, 1), 1);
    // 012dfb  je 0x12e28
    X86_AT(c, 0x12dfbu);
    if (x86_cc(c, 4)) { goto L_12e28; }
    X86_TICK(c, 12);
    // 012dfd  test byte ptr gs:[edi + 0x19fa], cl
    X86_AT(c, 0x12dfdu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu))) & g8(c, 1), 1);
    // 012e04  je 0x12ec4
    X86_AT(c, 0x12e04u);
    if (x86_cc(c, 4)) { goto L_12ec4; }
    X86_TICK(c, 12);
    // 012e0a  test byte ptr gs:[edi + ebx*1 + 0x1a48], 1
    X86_AT(c, 0x12e0au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A48u))) & 0x1u, 1);
    // 012e13  je 0x12e3c
    X86_AT(c, 0x12e13u);
    if (x86_cc(c, 4)) { goto L_12e3c; }
    X86_TICK(c, 12);
    // 012e15  test byte ptr gs:[edi + ebx*1 + 0x1a48], 2
    X86_AT(c, 0x12e15u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A48u))) & 0x2u, 1);
    // 012e1e  je 0x12e6c
    X86_AT(c, 0x12e1eu);
    if (x86_cc(c, 4)) { goto L_12e6c; }
    X86_TICK(c, 7);
    // 012e20  jmp 0x12e9c
    X86_AT(c, 0x12e20u);
    goto L_12e9c;
L_12e28:
    X86_TICK(c, 23);
    // 012e28  mov ch, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x12e28u);
    s8(c, 5, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 012e2f  not ch
    X86_AT(c, 0x12e2fu);
    { uint32_t v = g8(c, 5); s8(c, 5, ~v & 0xFFu); }
    // 012e31  and byte ptr gs:[edi + 0x19fc], ch
    X86_AT(c, 0x12e31u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 5), 1)); }
    // 012e38  ret 
    X86_AT(c, 0x12e38u);
    c.eip = pop32(c); return;
L_12e3c:
    X86_TICK(c, 21);
    // 012e3c  mov ax, word ptr gs:[esi + 6]
    X86_AT(c, 0x12e3cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x6u))));
    // 012e41  add ax, word ptr gs:[esi + 8]
    X86_AT(c, 0x12e41u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u))), 0, 2)); }
    // 012e46  cmp ah, byte ptr gs:[esi]
    X86_AT(c, 0x12e46u);
    (void)x86_sub(c, g8(c, 4), rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 0, 1);
    // 012e49  ja 0x12e65
    X86_AT(c, 0x12e49u);
    if (x86_cc(c, 7)) { goto L_12e65; }
    X86_TICK(c, 60);
    // 012e4b  mov word ptr gs:[esi + 8], ax
    X86_AT(c, 0x12e4bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 012e50  mov dx, 0x4f7
    X86_AT(c, 0x12e50u);
    s16(c, 2, 0x4F7u);
    // 012e54  mov al, 0xc0
    X86_AT(c, 0x12e54u);
    s8(c, 0, 0xC0u);
    // 012e56  add al, bl
    X86_AT(c, 0x12e56u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 012e58  out dx, al
    X86_AT(c, 0x12e58u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012e59  mov al, ah
    X86_AT(c, 0x12e59u);
    s8(c, 0, g8(c, 4));
    // 012e5b  add al, al
    X86_AT(c, 0x12e5bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 012e5d  mov dl, 0xf0
    X86_AT(c, 0x12e5du);
    s8(c, 2, 0xF0u);
    // 012e5f  out dx, al
    X86_AT(c, 0x12e5fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012e60  push ds
    X86_AT(c, 0x12e60u);
    push32(c, c.sreg[3]);
    // 012e61  pop ds
    X86_AT(c, 0x12e61u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012e62  push ds
    X86_AT(c, 0x12e62u);
    push32(c, c.sreg[3]);
    // 012e63  pop ds
    X86_AT(c, 0x12e63u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012e64  ret 
    X86_AT(c, 0x12e64u);
    c.eip = pop32(c); return;
L_12e65:
    X86_TICK(c, 7);
    // 012e65  call 0x12f30
    X86_AT(c, 0x12e65u);
    push32(c, 0x12e6au); f_00012f30(c); X86_RET(c, 0x12e6au);
    X86_TICK(c, 10);
    // 012e6a  ret 
    X86_AT(c, 0x12e6au);
    c.eip = pop32(c); return;
L_12e6c:
    X86_TICK(c, 21);
    // 012e6c  mov ax, word ptr gs:[esi + 8]
    X86_AT(c, 0x12e6cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u))));
    // 012e71  sub ax, word ptr gs:[esi + 6]
    X86_AT(c, 0x12e71u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x6u))), 0, 2)); }
    // 012e76  cmp ah, byte ptr gs:[esi + 3]
    X86_AT(c, 0x12e76u);
    (void)x86_sub(c, g8(c, 4), rd8((c.sbase[5] + (uint32_t)(c.r[6] + 0x3u))), 0, 1);
    // 012e7a  jl 0x12e96
    X86_AT(c, 0x12e7au);
    if (x86_cc(c, 12)) { goto L_12e96; }
    X86_TICK(c, 60);
    // 012e7c  mov word ptr gs:[esi + 8], ax
    X86_AT(c, 0x12e7cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 012e81  mov dx, 0x4f7
    X86_AT(c, 0x12e81u);
    s16(c, 2, 0x4F7u);
    // 012e85  mov al, 0xc0
    X86_AT(c, 0x12e85u);
    s8(c, 0, 0xC0u);
    // 012e87  add al, bl
    X86_AT(c, 0x12e87u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 012e89  out dx, al
    X86_AT(c, 0x12e89u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012e8a  mov al, ah
    X86_AT(c, 0x12e8au);
    s8(c, 0, g8(c, 4));
    // 012e8c  add al, al
    X86_AT(c, 0x12e8cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 012e8e  mov dl, 0xf0
    X86_AT(c, 0x12e8eu);
    s8(c, 2, 0xF0u);
    // 012e90  out dx, al
    X86_AT(c, 0x12e90u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012e91  push ds
    X86_AT(c, 0x12e91u);
    push32(c, c.sreg[3]);
    // 012e92  pop ds
    X86_AT(c, 0x12e92u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012e93  push ds
    X86_AT(c, 0x12e93u);
    push32(c, c.sreg[3]);
    // 012e94  pop ds
    X86_AT(c, 0x12e94u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012e95  ret 
    X86_AT(c, 0x12e95u);
    c.eip = pop32(c); return;
L_12e96:
    X86_TICK(c, 7);
    // 012e96  call 0x12f78
    X86_AT(c, 0x12e96u);
    push32(c, 0x12e9bu); f_00012f78(c); X86_RET(c, 0x12e9bu);
    X86_TICK(c, 10);
    // 012e9b  ret 
    X86_AT(c, 0x12e9bu);
    c.eip = pop32(c); return;
L_12e9c:
    X86_TICK(c, 15);
    // 012e9c  mov ax, word ptr gs:[esi + 8]
    X86_AT(c, 0x12e9cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u))));
    // 012ea1  sub ax, word ptr gs:[esi + 6]
    X86_AT(c, 0x12ea1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x6u))), 0, 2)); }
    // 012ea6  ja 0x12eaa
    X86_AT(c, 0x12ea6u);
    if (x86_cc(c, 7)) { goto L_12eaa; }
    X86_TICK(c, 2);
    // 012ea8  xor eax, eax
    X86_AT(c, 0x12ea8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
L_12eaa:
    X86_TICK(c, 60);
    // 012eaa  mov word ptr gs:[esi + 8], ax
    X86_AT(c, 0x12eaau);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 012eaf  mov dx, 0x4f7
    X86_AT(c, 0x12eafu);
    s16(c, 2, 0x4F7u);
    // 012eb3  mov al, 0xc0
    X86_AT(c, 0x12eb3u);
    s8(c, 0, 0xC0u);
    // 012eb5  add al, bl
    X86_AT(c, 0x12eb5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 012eb7  out dx, al
    X86_AT(c, 0x12eb7u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012eb8  mov al, ah
    X86_AT(c, 0x12eb8u);
    s8(c, 0, g8(c, 4));
    // 012eba  add al, al
    X86_AT(c, 0x12ebau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 012ebc  mov dl, 0xf0
    X86_AT(c, 0x12ebcu);
    s8(c, 2, 0xF0u);
    // 012ebe  out dx, al
    X86_AT(c, 0x12ebeu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012ebf  push ds
    X86_AT(c, 0x12ebfu);
    push32(c, c.sreg[3]);
    // 012ec0  pop ds
    X86_AT(c, 0x12ec0u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012ec1  push ds
    X86_AT(c, 0x12ec1u);
    push32(c, c.sreg[3]);
    // 012ec2  pop ds
    X86_AT(c, 0x12ec2u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012ec3  ret 
    X86_AT(c, 0x12ec3u);
    c.eip = pop32(c); return;
L_12ec4:
    X86_TICK(c, 15);
    // 012ec4  mov ax, word ptr gs:[esi + 8]
    X86_AT(c, 0x12ec4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u))));
    // 012ec9  sub ax, word ptr gs:[esi + 6]
    X86_AT(c, 0x12ec9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x6u))), 0, 2)); }
    // 012ece  ja 0x12ed2
    X86_AT(c, 0x12eceu);
    if (x86_cc(c, 7)) { goto L_12ed2; }
    X86_TICK(c, 2);
    // 012ed0  xor eax, eax
    X86_AT(c, 0x12ed0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
L_12ed2:
    X86_TICK(c, 60);
    // 012ed2  mov word ptr gs:[esi + 8], ax
    X86_AT(c, 0x12ed2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 012ed7  mov dx, 0x4f7
    X86_AT(c, 0x12ed7u);
    s16(c, 2, 0x4F7u);
    // 012edb  mov al, 0xc0
    X86_AT(c, 0x12edbu);
    s8(c, 0, 0xC0u);
    // 012edd  add al, bl
    X86_AT(c, 0x12eddu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 012edf  out dx, al
    X86_AT(c, 0x12edfu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012ee0  mov al, ah
    X86_AT(c, 0x12ee0u);
    s8(c, 0, g8(c, 4));
    // 012ee2  add al, al
    X86_AT(c, 0x12ee2u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 012ee4  mov dl, 0xf0
    X86_AT(c, 0x12ee4u);
    s8(c, 2, 0xF0u);
    // 012ee6  out dx, al
    X86_AT(c, 0x12ee6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012ee7  push ds
    X86_AT(c, 0x12ee7u);
    push32(c, c.sreg[3]);
    // 012ee8  pop ds
    X86_AT(c, 0x12ee8u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012ee9  push ds
    X86_AT(c, 0x12ee9u);
    push32(c, c.sreg[3]);
    // 012eea  pop ds
    X86_AT(c, 0x12eeau);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012eeb  ret 
    X86_AT(c, 0x12eebu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12df4u, "ran off the end of a function");
}
void f_00012dfb(X86Cpu& c) {
    X86_TICK(c, 5);
    // 012dfb  je 0x12e28
    X86_AT(c, 0x12dfbu);
    if (x86_cc(c, 4)) { goto L_12e28; }
    X86_TICK(c, 12);
    // 012dfd  test byte ptr gs:[edi + 0x19fa], cl
    X86_AT(c, 0x12dfdu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu))) & g8(c, 1), 1);
    // 012e04  je 0x12ec4
    X86_AT(c, 0x12e04u);
    if (x86_cc(c, 4)) { goto L_12ec4; }
    X86_TICK(c, 12);
    // 012e0a  test byte ptr gs:[edi + ebx*1 + 0x1a48], 1
    X86_AT(c, 0x12e0au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A48u))) & 0x1u, 1);
    // 012e13  je 0x12e3c
    X86_AT(c, 0x12e13u);
    if (x86_cc(c, 4)) { goto L_12e3c; }
    X86_TICK(c, 12);
    // 012e15  test byte ptr gs:[edi + ebx*1 + 0x1a48], 2
    X86_AT(c, 0x12e15u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A48u))) & 0x2u, 1);
    // 012e1e  je 0x12e6c
    X86_AT(c, 0x12e1eu);
    if (x86_cc(c, 4)) { goto L_12e6c; }
    X86_TICK(c, 7);
    // 012e20  jmp 0x12e9c
    X86_AT(c, 0x12e20u);
    goto L_12e9c;
L_12e28:
    X86_TICK(c, 23);
    // 012e28  mov ch, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x12e28u);
    s8(c, 5, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 012e2f  not ch
    X86_AT(c, 0x12e2fu);
    { uint32_t v = g8(c, 5); s8(c, 5, ~v & 0xFFu); }
    // 012e31  and byte ptr gs:[edi + 0x19fc], ch
    X86_AT(c, 0x12e31u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 5), 1)); }
    // 012e38  ret 
    X86_AT(c, 0x12e38u);
    c.eip = pop32(c); return;
L_12e3c:
    X86_TICK(c, 21);
    // 012e3c  mov ax, word ptr gs:[esi + 6]
    X86_AT(c, 0x12e3cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x6u))));
    // 012e41  add ax, word ptr gs:[esi + 8]
    X86_AT(c, 0x12e41u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u))), 0, 2)); }
    // 012e46  cmp ah, byte ptr gs:[esi]
    X86_AT(c, 0x12e46u);
    (void)x86_sub(c, g8(c, 4), rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 0, 1);
    // 012e49  ja 0x12e65
    X86_AT(c, 0x12e49u);
    if (x86_cc(c, 7)) { goto L_12e65; }
    X86_TICK(c, 60);
    // 012e4b  mov word ptr gs:[esi + 8], ax
    X86_AT(c, 0x12e4bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 012e50  mov dx, 0x4f7
    X86_AT(c, 0x12e50u);
    s16(c, 2, 0x4F7u);
    // 012e54  mov al, 0xc0
    X86_AT(c, 0x12e54u);
    s8(c, 0, 0xC0u);
    // 012e56  add al, bl
    X86_AT(c, 0x12e56u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 012e58  out dx, al
    X86_AT(c, 0x12e58u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012e59  mov al, ah
    X86_AT(c, 0x12e59u);
    s8(c, 0, g8(c, 4));
    // 012e5b  add al, al
    X86_AT(c, 0x12e5bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 012e5d  mov dl, 0xf0
    X86_AT(c, 0x12e5du);
    s8(c, 2, 0xF0u);
    // 012e5f  out dx, al
    X86_AT(c, 0x12e5fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012e60  push ds
    X86_AT(c, 0x12e60u);
    push32(c, c.sreg[3]);
    // 012e61  pop ds
    X86_AT(c, 0x12e61u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012e62  push ds
    X86_AT(c, 0x12e62u);
    push32(c, c.sreg[3]);
    // 012e63  pop ds
    X86_AT(c, 0x12e63u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012e64  ret 
    X86_AT(c, 0x12e64u);
    c.eip = pop32(c); return;
L_12e65:
    X86_TICK(c, 7);
    // 012e65  call 0x12f30
    X86_AT(c, 0x12e65u);
    push32(c, 0x12e6au); f_00012f30(c); X86_RET(c, 0x12e6au);
    X86_TICK(c, 10);
    // 012e6a  ret 
    X86_AT(c, 0x12e6au);
    c.eip = pop32(c); return;
L_12e6c:
    X86_TICK(c, 21);
    // 012e6c  mov ax, word ptr gs:[esi + 8]
    X86_AT(c, 0x12e6cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u))));
    // 012e71  sub ax, word ptr gs:[esi + 6]
    X86_AT(c, 0x12e71u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x6u))), 0, 2)); }
    // 012e76  cmp ah, byte ptr gs:[esi + 3]
    X86_AT(c, 0x12e76u);
    (void)x86_sub(c, g8(c, 4), rd8((c.sbase[5] + (uint32_t)(c.r[6] + 0x3u))), 0, 1);
    // 012e7a  jl 0x12e96
    X86_AT(c, 0x12e7au);
    if (x86_cc(c, 12)) { goto L_12e96; }
    X86_TICK(c, 60);
    // 012e7c  mov word ptr gs:[esi + 8], ax
    X86_AT(c, 0x12e7cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 012e81  mov dx, 0x4f7
    X86_AT(c, 0x12e81u);
    s16(c, 2, 0x4F7u);
    // 012e85  mov al, 0xc0
    X86_AT(c, 0x12e85u);
    s8(c, 0, 0xC0u);
    // 012e87  add al, bl
    X86_AT(c, 0x12e87u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 012e89  out dx, al
    X86_AT(c, 0x12e89u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012e8a  mov al, ah
    X86_AT(c, 0x12e8au);
    s8(c, 0, g8(c, 4));
    // 012e8c  add al, al
    X86_AT(c, 0x12e8cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 012e8e  mov dl, 0xf0
    X86_AT(c, 0x12e8eu);
    s8(c, 2, 0xF0u);
    // 012e90  out dx, al
    X86_AT(c, 0x12e90u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012e91  push ds
    X86_AT(c, 0x12e91u);
    push32(c, c.sreg[3]);
    // 012e92  pop ds
    X86_AT(c, 0x12e92u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012e93  push ds
    X86_AT(c, 0x12e93u);
    push32(c, c.sreg[3]);
    // 012e94  pop ds
    X86_AT(c, 0x12e94u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012e95  ret 
    X86_AT(c, 0x12e95u);
    c.eip = pop32(c); return;
L_12e96:
    X86_TICK(c, 7);
    // 012e96  call 0x12f78
    X86_AT(c, 0x12e96u);
    push32(c, 0x12e9bu); f_00012f78(c); X86_RET(c, 0x12e9bu);
    X86_TICK(c, 10);
    // 012e9b  ret 
    X86_AT(c, 0x12e9bu);
    c.eip = pop32(c); return;
L_12e9c:
    X86_TICK(c, 15);
    // 012e9c  mov ax, word ptr gs:[esi + 8]
    X86_AT(c, 0x12e9cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u))));
    // 012ea1  sub ax, word ptr gs:[esi + 6]
    X86_AT(c, 0x12ea1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x6u))), 0, 2)); }
    // 012ea6  ja 0x12eaa
    X86_AT(c, 0x12ea6u);
    if (x86_cc(c, 7)) { goto L_12eaa; }
    X86_TICK(c, 2);
    // 012ea8  xor eax, eax
    X86_AT(c, 0x12ea8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
L_12eaa:
    X86_TICK(c, 60);
    // 012eaa  mov word ptr gs:[esi + 8], ax
    X86_AT(c, 0x12eaau);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 012eaf  mov dx, 0x4f7
    X86_AT(c, 0x12eafu);
    s16(c, 2, 0x4F7u);
    // 012eb3  mov al, 0xc0
    X86_AT(c, 0x12eb3u);
    s8(c, 0, 0xC0u);
    // 012eb5  add al, bl
    X86_AT(c, 0x12eb5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 012eb7  out dx, al
    X86_AT(c, 0x12eb7u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012eb8  mov al, ah
    X86_AT(c, 0x12eb8u);
    s8(c, 0, g8(c, 4));
    // 012eba  add al, al
    X86_AT(c, 0x12ebau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 012ebc  mov dl, 0xf0
    X86_AT(c, 0x12ebcu);
    s8(c, 2, 0xF0u);
    // 012ebe  out dx, al
    X86_AT(c, 0x12ebeu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012ebf  push ds
    X86_AT(c, 0x12ebfu);
    push32(c, c.sreg[3]);
    // 012ec0  pop ds
    X86_AT(c, 0x12ec0u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012ec1  push ds
    X86_AT(c, 0x12ec1u);
    push32(c, c.sreg[3]);
    // 012ec2  pop ds
    X86_AT(c, 0x12ec2u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012ec3  ret 
    X86_AT(c, 0x12ec3u);
    c.eip = pop32(c); return;
L_12ec4:
    X86_TICK(c, 15);
    // 012ec4  mov ax, word ptr gs:[esi + 8]
    X86_AT(c, 0x12ec4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u))));
    // 012ec9  sub ax, word ptr gs:[esi + 6]
    X86_AT(c, 0x12ec9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x6u))), 0, 2)); }
    // 012ece  ja 0x12ed2
    X86_AT(c, 0x12eceu);
    if (x86_cc(c, 7)) { goto L_12ed2; }
    X86_TICK(c, 2);
    // 012ed0  xor eax, eax
    X86_AT(c, 0x12ed0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
L_12ed2:
    X86_TICK(c, 60);
    // 012ed2  mov word ptr gs:[esi + 8], ax
    X86_AT(c, 0x12ed2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 012ed7  mov dx, 0x4f7
    X86_AT(c, 0x12ed7u);
    s16(c, 2, 0x4F7u);
    // 012edb  mov al, 0xc0
    X86_AT(c, 0x12edbu);
    s8(c, 0, 0xC0u);
    // 012edd  add al, bl
    X86_AT(c, 0x12eddu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 012edf  out dx, al
    X86_AT(c, 0x12edfu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012ee0  mov al, ah
    X86_AT(c, 0x12ee0u);
    s8(c, 0, g8(c, 4));
    // 012ee2  add al, al
    X86_AT(c, 0x12ee2u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 012ee4  mov dl, 0xf0
    X86_AT(c, 0x12ee4u);
    s8(c, 2, 0xF0u);
    // 012ee6  out dx, al
    X86_AT(c, 0x12ee6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012ee7  push ds
    X86_AT(c, 0x12ee7u);
    push32(c, c.sreg[3]);
    // 012ee8  pop ds
    X86_AT(c, 0x12ee8u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012ee9  push ds
    X86_AT(c, 0x12ee9u);
    push32(c, c.sreg[3]);
    // 012eea  pop ds
    X86_AT(c, 0x12eeau);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012eeb  ret 
    X86_AT(c, 0x12eebu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12dfbu, "ran off the end of a function");
}
void f_00012e28(X86Cpu& c) {
    X86_TICK(c, 23);
    // 012e28  mov ch, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x12e28u);
    s8(c, 5, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 012e2f  not ch
    X86_AT(c, 0x12e2fu);
    { uint32_t v = g8(c, 5); s8(c, 5, ~v & 0xFFu); }
    // 012e31  and byte ptr gs:[edi + 0x19fc], ch
    X86_AT(c, 0x12e31u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 5), 1)); }
    // 012e38  ret 
    X86_AT(c, 0x12e38u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12e28u, "ran off the end of a function");
}
void f_00012e2f(X86Cpu& c) {
    X86_TICK(c, 19);
    // 012e2f  not ch
    X86_AT(c, 0x12e2fu);
    { uint32_t v = g8(c, 5); s8(c, 5, ~v & 0xFFu); }
    // 012e31  and byte ptr gs:[edi + 0x19fc], ch
    X86_AT(c, 0x12e31u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 5), 1)); }
    // 012e38  ret 
    X86_AT(c, 0x12e38u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12e2fu, "ran off the end of a function");
}
void f_00012e31(X86Cpu& c) {
    X86_TICK(c, 17);
    // 012e31  and byte ptr gs:[edi + 0x19fc], ch
    X86_AT(c, 0x12e31u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 5), 1)); }
    // 012e38  ret 
    X86_AT(c, 0x12e38u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12e31u, "ran off the end of a function");
}
void f_00012e38(X86Cpu& c) {
    X86_TICK(c, 10);
    // 012e38  ret 
    X86_AT(c, 0x12e38u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12e38u, "ran off the end of a function");
}
void f_00012eec(X86Cpu& c) {
    X86_TICK(c, 41);
    // 012eec  pushal 
    X86_AT(c, 0x12eecu);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 012eed  xor edx, edx
    X86_AT(c, 0x12eedu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 012eef  mov byte ptr gs:[edi + ebx*1 + 0x1a48], dl
    X86_AT(c, 0x12eefu);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A48u)), g8(c, 2));
    // 012ef7  mov ah, byte ptr gs:[esi]
    X86_AT(c, 0x12ef7u);
    s8(c, 4, rd8((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 012efa  xor al, al
    X86_AT(c, 0x12efau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012efc  movzx ecx, byte ptr gs:[esi + 1]
    X86_AT(c, 0x12efcu);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[6] + 0x1u)));
    // 012f01  test cl, cl
    X86_AT(c, 0x12f01u);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 012f03  je 0x12f1b
    X86_AT(c, 0x12f03u);
    if (x86_cc(c, 4)) { goto L_12f1b; }
    X86_TICK(c, 7);
    // 012f05  cmp cl, 0x7f
    X86_AT(c, 0x12f05u);
    (void)x86_sub(c, g8(c, 1), 0x7Fu, 0, 1);
    // 012f08  je 0x12f27
    X86_AT(c, 0x12f08u);
    if (x86_cc(c, 4)) { goto L_12f27; }
    X86_TICK(c, 51);
    // 012f0a  div cx
    X86_AT(c, 0x12f0au);
    x86_div(c, (c.r[1] & 0xFFFFu), 2, 0x12f0au);
    // 012f0d  mov word ptr gs:[esi + 6], ax
    X86_AT(c, 0x12f0du);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x6u)), (c.r[0] & 0xFFFFu));
    // 012f12  mov word ptr gs:[esi + 8], 1
    X86_AT(c, 0x12f12u);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)), 0x1u);
    // 012f19  jmp 0x12f2b
    X86_AT(c, 0x12f19u);
    goto L_12f2b;
L_12f1b:
    X86_TICK(c, 9);
    // 012f1b  mov word ptr gs:[esi + 8], ax
    X86_AT(c, 0x12f1bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 012f20  call 0x12f30
    X86_AT(c, 0x12f20u);
    push32(c, 0x12f25u); f_00012f30(c); X86_RET(c, 0x12f25u);
    X86_TICK(c, 7);
    // 012f25  jmp 0x12f2b
    X86_AT(c, 0x12f25u);
    goto L_12f2b;
L_12f27:
    X86_TICK(c, 2);
    // 012f27  mov dword ptr gs:[esi + 6], edx
    X86_AT(c, 0x12f27u);
    wr32((c.sbase[5] + (uint32_t)(c.r[6] + 0x6u)), c.r[2]);
L_12f2b:
    X86_TICK(c, 34);
    // 012f2b  popal 
    X86_AT(c, 0x12f2bu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012f2c  ret 
    X86_AT(c, 0x12f2cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12eecu, "ran off the end of a function");
}
void f_00012f30(X86Cpu& c) {
    X86_TICK(c, 26);
    // 012f30  or byte ptr gs:[edi + ebx*1 + 0x1a48], 1
    X86_AT(c, 0x12f30u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A48u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x1u, 1)); }
    // 012f39  xor edx, edx
    X86_AT(c, 0x12f39u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 012f3b  mov ah, byte ptr gs:[esi]
    X86_AT(c, 0x12f3bu);
    s8(c, 4, rd8((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 012f3e  xor al, al
    X86_AT(c, 0x12f3eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012f40  sub ah, byte ptr gs:[esi + 3]
    X86_AT(c, 0x12f40u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[6] + 0x3u))), 0, 1)); }
    // 012f44  jb 0x12f71
    X86_AT(c, 0x12f44u);
    if (x86_cc(c, 2)) { goto L_12f71; }
    X86_TICK(c, 13);
    // 012f46  movzx cx, byte ptr gs:[esi + 2]
    X86_AT(c, 0x12f46u);
    s16(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u))));
    // 012f4c  test cl, cl
    X86_AT(c, 0x12f4cu);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 012f4e  je 0x12f5f
    X86_AT(c, 0x12f4eu);
    if (x86_cc(c, 4)) { goto L_12f5f; }
    X86_TICK(c, 7);
    // 012f50  cmp cl, 0x7f
    X86_AT(c, 0x12f50u);
    (void)x86_sub(c, g8(c, 1), 0x7Fu, 0, 1);
    // 012f53  je 0x12f71
    X86_AT(c, 0x12f53u);
    if (x86_cc(c, 4)) { goto L_12f71; }
    X86_TICK(c, 49);
    // 012f55  div cx
    X86_AT(c, 0x12f55u);
    x86_div(c, (c.r[1] & 0xFFFFu), 2, 0x12f55u);
    // 012f58  mov word ptr gs:[esi + 6], ax
    X86_AT(c, 0x12f58u);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x6u)), (c.r[0] & 0xFFFFu));
    // 012f5d  jmp 0x12f76
    X86_AT(c, 0x12f5du);
    goto L_12f76;
L_12f5f:
    X86_TICK(c, 15);
    // 012f5f  mov ah, byte ptr gs:[esi + 3]
    X86_AT(c, 0x12f5fu);
    s8(c, 4, rd8((c.sbase[5] + (uint32_t)(c.r[6] + 0x3u))));
    // 012f63  xor al, al
    X86_AT(c, 0x12f63u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012f65  mov word ptr gs:[esi + 8], ax
    X86_AT(c, 0x12f65u);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 012f6a  call 0x12f78
    X86_AT(c, 0x12f6au);
    push32(c, 0x12f6fu); f_00012f78(c); X86_RET(c, 0x12f6fu);
    X86_TICK(c, 7);
    // 012f6f  jmp 0x12f76
    X86_AT(c, 0x12f6fu);
    goto L_12f76;
L_12f71:
    X86_TICK(c, 2);
    // 012f71  mov word ptr gs:[esi + 6], dx
    X86_AT(c, 0x12f71u);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x6u)), (c.r[2] & 0xFFFFu));
L_12f76:
    X86_TICK(c, 10);
    // 012f76  ret 
    X86_AT(c, 0x12f76u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12f30u, "ran off the end of a function");
}
void f_00012f78(X86Cpu& c) {
    X86_TICK(c, 21);
    // 012f78  or byte ptr gs:[edi + ebx*1 + 0x1a48], 2
    X86_AT(c, 0x12f78u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A48u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 012f81  xor edx, edx
    X86_AT(c, 0x12f81u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 012f83  cmp byte ptr gs:[esi + 3], dl
    X86_AT(c, 0x12f83u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[6] + 0x3u))), g8(c, 2), 0, 1);
    // 012f87  je 0x12fa9
    X86_AT(c, 0x12f87u);
    if (x86_cc(c, 4)) { goto L_12fa9; }
    X86_TICK(c, 13);
    // 012f89  movzx ecx, byte ptr gs:[esi + 4]
    X86_AT(c, 0x12f89u);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[6] + 0x4u)));
    // 012f8e  test cl, cl
    X86_AT(c, 0x12f8eu);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 012f90  je 0x12fa9
    X86_AT(c, 0x12f90u);
    if (x86_cc(c, 4)) { goto L_12fa9; }
    X86_TICK(c, 7);
    // 012f92  cmp cl, 0x7f
    X86_AT(c, 0x12f92u);
    (void)x86_sub(c, g8(c, 1), 0x7Fu, 0, 1);
    // 012f95  je 0x12fb6
    X86_AT(c, 0x12f95u);
    if (x86_cc(c, 4)) { goto L_12fb6; }
    X86_TICK(c, 56);
    // 012f97  mov ax, word ptr gs:[esi + 8]
    X86_AT(c, 0x12f97u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u))));
    // 012f9c  div cx
    X86_AT(c, 0x12f9cu);
    x86_div(c, (c.r[1] & 0xFFFFu), 2, 0x12f9cu);
    // 012f9f  shr ax, 1
    X86_AT(c, 0x12f9fu);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 012fa2  mov word ptr gs:[esi + 6], ax
    X86_AT(c, 0x12fa2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x6u)), (c.r[0] & 0xFFFFu));
    // 012fa7  jmp 0x12fbb
    X86_AT(c, 0x12fa7u);
    goto L_12fbb;
L_12fa9:
    X86_TICK(c, 13);
    // 012fa9  inc edx
    X86_AT(c, 0x12fa9u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 012faa  mov word ptr gs:[esi + 6], dx
    X86_AT(c, 0x12faau);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x6u)), (c.r[2] & 0xFFFFu));
    // 012faf  mov word ptr gs:[esi + 8], dx
    X86_AT(c, 0x12fafu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)), (c.r[2] & 0xFFFFu));
    // 012fb4  jmp 0x12fbb
    X86_AT(c, 0x12fb4u);
    goto L_12fbb;
L_12fb6:
    X86_TICK(c, 2);
    // 012fb6  mov word ptr gs:[esi + 6], dx
    X86_AT(c, 0x12fb6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x6u)), (c.r[2] & 0xFFFFu));
L_12fbb:
    X86_TICK(c, 10);
    // 012fbb  ret 
    X86_AT(c, 0x12fbbu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12f78u, "ran off the end of a function");
}
void f_00012fbc(X86Cpu& c) {
    X86_TICK(c, 7);
    // 012fbc  cmp bl, 0x40
    X86_AT(c, 0x12fbcu);
    (void)x86_sub(c, g8(c, 3), 0x40u, 0, 1);
    // 012fbf  jb 0x1354c
    X86_AT(c, 0x12fbfu);
    if (x86_cc(c, 2)) { goto L_1354c; }
    X86_TICK(c, 7);
    // 012fc5  cmp bl, 0x47
    X86_AT(c, 0x12fc5u);
    (void)x86_sub(c, g8(c, 3), 0x47u, 0, 1);
    // 012fc8  ja 0x1354c
    X86_AT(c, 0x12fc8u);
    if (x86_cc(c, 7)) { goto L_1354c; }
    X86_TICK(c, 144);
    // 012fce  push eax
    X86_AT(c, 0x12fceu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 012fcf  push edx
    X86_AT(c, 0x12fcfu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 012fd0  pushfd 
    X86_AT(c, 0x12fd0u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 012fd1  movzx edx, bl
    X86_AT(c, 0x12fd1u);
    c.r[2] = g8(c, 3);
    // 012fd4  sub dl, 0x40
    X86_AT(c, 0x12fd4u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_sub(c, v, 0x40u, 0, 1)); }
    // 012fd7  mov ah, byte ptr cs:[edx + 0x13580]
    X86_AT(c, 0x12fd7u);
    s8(c, 4, rd8((c.sbase[1] + (uint32_t)(c.r[2] + 0x13580u))));
    // 012fde  cli 
    X86_AT(c, 0x12fdeu);
    c.fl &= ~X86_IF;
    // 012fdf  or byte ptr gs:[edi + 0x19fd], ah
    X86_AT(c, 0x12fdfu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 4), 1)); }
    // 012fe6  not ah
    X86_AT(c, 0x12fe6u);
    { uint32_t v = g8(c, 4); s8(c, 4, ~v & 0xFFu); }
    // 012fe8  mov dx, 0x4ea
    X86_AT(c, 0x12fe8u);
    s16(c, 2, 0x4EAu);
    // 012fec  in al, dx
    X86_AT(c, 0x12fecu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 012fed  and al, ah
    X86_AT(c, 0x12fedu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 4), 1)); }
    // 012fef  out dx, al
    X86_AT(c, 0x12fefu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012ff0  and byte ptr gs:[edi + 0x19fa], ah
    X86_AT(c, 0x12ff0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 4), 1)); }
    // 012ff7  and byte ptr gs:[edi + 0x19fb], ah
    X86_AT(c, 0x12ff7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FBu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 4), 1)); }
    // 012ffe  and byte ptr gs:[edi + 0x19fc], ah
    X86_AT(c, 0x12ffeu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 4), 1)); }
    // 013005  and byte ptr gs:[edi + 0x19fe], ah
    X86_AT(c, 0x13005u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FEu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 4), 1)); }
    // 01300c  mov al, byte ptr gs:[edi + 0x19fa]
    X86_AT(c, 0x1300cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu))));
    // 013013  or al, byte ptr gs:[edi + 0x19fb]
    X86_AT(c, 0x13013u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FBu))), 1)); }
    // 01301a  or al, byte ptr gs:[edi + 0x19fc]
    X86_AT(c, 0x1301au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu))), 1)); }
    // 013021  not al
    X86_AT(c, 0x13021u);
    { uint32_t v = g8(c, 0); s8(c, 0, ~v & 0xFFu); }
    // 013023  mov dl, 0xf8
    X86_AT(c, 0x13023u);
    s8(c, 2, 0xF8u);
    // 013025  out dx, al
    X86_AT(c, 0x13025u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013026  popfd 
    X86_AT(c, 0x13026u);
    x86_popfd(c, 4);
    // 013027  pop edx
    X86_AT(c, 0x13027u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 013028  pop eax
    X86_AT(c, 0x13028u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 013029  xor al, al
    X86_AT(c, 0x13029u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01302b  ret 
    X86_AT(c, 0x1302bu);
    c.eip = pop32(c); return;
L_1354c:
    X86_TICK(c, 12);
    // 01354c  mov al, 1
    X86_AT(c, 0x1354cu);
    s8(c, 0, 0x1u);
    // 01354e  ret 
    X86_AT(c, 0x1354eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12fbcu, "ran off the end of a function");
}
void f_0001302c(X86Cpu& c) {
    X86_TICK(c, 76);
    // 01302c  push eax
    X86_AT(c, 0x1302cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01302d  push edx
    X86_AT(c, 0x1302du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01302e  pushfd 
    X86_AT(c, 0x1302eu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 01302f  xor eax, eax
    X86_AT(c, 0x1302fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 013031  mov dx, 0x4f8
    X86_AT(c, 0x13031u);
    s16(c, 2, 0x4F8u);
    // 013035  cli 
    X86_AT(c, 0x13035u);
    c.fl &= ~X86_IF;
    // 013036  mov dword ptr gs:[edi + 0x19f9], eax
    X86_AT(c, 0x13036u);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F9u)), c.r[0]);
    // 01303d  dec al
    X86_AT(c, 0x1303du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 01303f  mov word ptr gs:[edi + 0x19fd], ax
    X86_AT(c, 0x1303fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FDu)), (c.r[0] & 0xFFFFu));
    // 013047  out dx, al
    X86_AT(c, 0x13047u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013048  mov dl, 0xea
    X86_AT(c, 0x13048u);
    s8(c, 2, 0xEAu);
    // 01304a  xor al, al
    X86_AT(c, 0x1304au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01304c  out dx, al
    X86_AT(c, 0x1304cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01304d  popfd 
    X86_AT(c, 0x1304du);
    x86_popfd(c, 4);
    // 01304e  pop edx
    X86_AT(c, 0x1304eu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01304f  pop eax
    X86_AT(c, 0x1304fu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 013050  xor al, al
    X86_AT(c, 0x13050u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013052  ret 
    X86_AT(c, 0x13052u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1302cu, "ran off the end of a function");
}
void f_0001302d(X86Cpu& c) {
    X86_TICK(c, 74);
    // 01302d  push edx
    X86_AT(c, 0x1302du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01302e  pushfd 
    X86_AT(c, 0x1302eu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 01302f  xor eax, eax
    X86_AT(c, 0x1302fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 013031  mov dx, 0x4f8
    X86_AT(c, 0x13031u);
    s16(c, 2, 0x4F8u);
    // 013035  cli 
    X86_AT(c, 0x13035u);
    c.fl &= ~X86_IF;
    // 013036  mov dword ptr gs:[edi + 0x19f9], eax
    X86_AT(c, 0x13036u);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F9u)), c.r[0]);
    // 01303d  dec al
    X86_AT(c, 0x1303du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 01303f  mov word ptr gs:[edi + 0x19fd], ax
    X86_AT(c, 0x1303fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FDu)), (c.r[0] & 0xFFFFu));
    // 013047  out dx, al
    X86_AT(c, 0x13047u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013048  mov dl, 0xea
    X86_AT(c, 0x13048u);
    s8(c, 2, 0xEAu);
    // 01304a  xor al, al
    X86_AT(c, 0x1304au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01304c  out dx, al
    X86_AT(c, 0x1304cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01304d  popfd 
    X86_AT(c, 0x1304du);
    x86_popfd(c, 4);
    // 01304e  pop edx
    X86_AT(c, 0x1304eu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01304f  pop eax
    X86_AT(c, 0x1304fu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 013050  xor al, al
    X86_AT(c, 0x13050u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013052  ret 
    X86_AT(c, 0x13052u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1302du, "ran off the end of a function");
}
void f_0001302e(X86Cpu& c) {
    X86_TICK(c, 72);
    // 01302e  pushfd 
    X86_AT(c, 0x1302eu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 01302f  xor eax, eax
    X86_AT(c, 0x1302fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 013031  mov dx, 0x4f8
    X86_AT(c, 0x13031u);
    s16(c, 2, 0x4F8u);
    // 013035  cli 
    X86_AT(c, 0x13035u);
    c.fl &= ~X86_IF;
    // 013036  mov dword ptr gs:[edi + 0x19f9], eax
    X86_AT(c, 0x13036u);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F9u)), c.r[0]);
    // 01303d  dec al
    X86_AT(c, 0x1303du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 01303f  mov word ptr gs:[edi + 0x19fd], ax
    X86_AT(c, 0x1303fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FDu)), (c.r[0] & 0xFFFFu));
    // 013047  out dx, al
    X86_AT(c, 0x13047u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013048  mov dl, 0xea
    X86_AT(c, 0x13048u);
    s8(c, 2, 0xEAu);
    // 01304a  xor al, al
    X86_AT(c, 0x1304au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01304c  out dx, al
    X86_AT(c, 0x1304cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01304d  popfd 
    X86_AT(c, 0x1304du);
    x86_popfd(c, 4);
    // 01304e  pop edx
    X86_AT(c, 0x1304eu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01304f  pop eax
    X86_AT(c, 0x1304fu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 013050  xor al, al
    X86_AT(c, 0x13050u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013052  ret 
    X86_AT(c, 0x13052u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1302eu, "ran off the end of a function");
}
void f_0001302f(X86Cpu& c) {
    X86_TICK(c, 66);
    // 01302f  xor eax, eax
    X86_AT(c, 0x1302fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 013031  mov dx, 0x4f8
    X86_AT(c, 0x13031u);
    s16(c, 2, 0x4F8u);
    // 013035  cli 
    X86_AT(c, 0x13035u);
    c.fl &= ~X86_IF;
    // 013036  mov dword ptr gs:[edi + 0x19f9], eax
    X86_AT(c, 0x13036u);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F9u)), c.r[0]);
    // 01303d  dec al
    X86_AT(c, 0x1303du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 01303f  mov word ptr gs:[edi + 0x19fd], ax
    X86_AT(c, 0x1303fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FDu)), (c.r[0] & 0xFFFFu));
    // 013047  out dx, al
    X86_AT(c, 0x13047u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013048  mov dl, 0xea
    X86_AT(c, 0x13048u);
    s8(c, 2, 0xEAu);
    // 01304a  xor al, al
    X86_AT(c, 0x1304au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01304c  out dx, al
    X86_AT(c, 0x1304cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01304d  popfd 
    X86_AT(c, 0x1304du);
    x86_popfd(c, 4);
    // 01304e  pop edx
    X86_AT(c, 0x1304eu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01304f  pop eax
    X86_AT(c, 0x1304fu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 013050  xor al, al
    X86_AT(c, 0x13050u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013052  ret 
    X86_AT(c, 0x13052u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1302fu, "ran off the end of a function");
}
void f_00013031(X86Cpu& c) {
    X86_TICK(c, 64);
    // 013031  mov dx, 0x4f8
    X86_AT(c, 0x13031u);
    s16(c, 2, 0x4F8u);
    // 013035  cli 
    X86_AT(c, 0x13035u);
    c.fl &= ~X86_IF;
    // 013036  mov dword ptr gs:[edi + 0x19f9], eax
    X86_AT(c, 0x13036u);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F9u)), c.r[0]);
    // 01303d  dec al
    X86_AT(c, 0x1303du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 01303f  mov word ptr gs:[edi + 0x19fd], ax
    X86_AT(c, 0x1303fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FDu)), (c.r[0] & 0xFFFFu));
    // 013047  out dx, al
    X86_AT(c, 0x13047u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013048  mov dl, 0xea
    X86_AT(c, 0x13048u);
    s8(c, 2, 0xEAu);
    // 01304a  xor al, al
    X86_AT(c, 0x1304au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01304c  out dx, al
    X86_AT(c, 0x1304cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01304d  popfd 
    X86_AT(c, 0x1304du);
    x86_popfd(c, 4);
    // 01304e  pop edx
    X86_AT(c, 0x1304eu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01304f  pop eax
    X86_AT(c, 0x1304fu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 013050  xor al, al
    X86_AT(c, 0x13050u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013052  ret 
    X86_AT(c, 0x13052u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x13031u, "ran off the end of a function");
}
void f_00013035(X86Cpu& c) {
    X86_TICK(c, 62);
    // 013035  cli 
    X86_AT(c, 0x13035u);
    c.fl &= ~X86_IF;
    // 013036  mov dword ptr gs:[edi + 0x19f9], eax
    X86_AT(c, 0x13036u);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F9u)), c.r[0]);
    // 01303d  dec al
    X86_AT(c, 0x1303du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 01303f  mov word ptr gs:[edi + 0x19fd], ax
    X86_AT(c, 0x1303fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FDu)), (c.r[0] & 0xFFFFu));
    // 013047  out dx, al
    X86_AT(c, 0x13047u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013048  mov dl, 0xea
    X86_AT(c, 0x13048u);
    s8(c, 2, 0xEAu);
    // 01304a  xor al, al
    X86_AT(c, 0x1304au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01304c  out dx, al
    X86_AT(c, 0x1304cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01304d  popfd 
    X86_AT(c, 0x1304du);
    x86_popfd(c, 4);
    // 01304e  pop edx
    X86_AT(c, 0x1304eu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01304f  pop eax
    X86_AT(c, 0x1304fu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 013050  xor al, al
    X86_AT(c, 0x13050u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013052  ret 
    X86_AT(c, 0x13052u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x13035u, "ran off the end of a function");
}
void f_00013036(X86Cpu& c) {
    X86_TICK(c, 60);
    // 013036  mov dword ptr gs:[edi + 0x19f9], eax
    X86_AT(c, 0x13036u);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F9u)), c.r[0]);
    // 01303d  dec al
    X86_AT(c, 0x1303du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 01303f  mov word ptr gs:[edi + 0x19fd], ax
    X86_AT(c, 0x1303fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FDu)), (c.r[0] & 0xFFFFu));
    // 013047  out dx, al
    X86_AT(c, 0x13047u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013048  mov dl, 0xea
    X86_AT(c, 0x13048u);
    s8(c, 2, 0xEAu);
    // 01304a  xor al, al
    X86_AT(c, 0x1304au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01304c  out dx, al
    X86_AT(c, 0x1304cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01304d  popfd 
    X86_AT(c, 0x1304du);
    x86_popfd(c, 4);
    // 01304e  pop edx
    X86_AT(c, 0x1304eu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01304f  pop eax
    X86_AT(c, 0x1304fu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 013050  xor al, al
    X86_AT(c, 0x13050u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013052  ret 
    X86_AT(c, 0x13052u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x13036u, "ran off the end of a function");
}
void f_0001303d(X86Cpu& c) {
    X86_TICK(c, 58);
    // 01303d  dec al
    X86_AT(c, 0x1303du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 01303f  mov word ptr gs:[edi + 0x19fd], ax
    X86_AT(c, 0x1303fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FDu)), (c.r[0] & 0xFFFFu));
    // 013047  out dx, al
    X86_AT(c, 0x13047u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013048  mov dl, 0xea
    X86_AT(c, 0x13048u);
    s8(c, 2, 0xEAu);
    // 01304a  xor al, al
    X86_AT(c, 0x1304au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01304c  out dx, al
    X86_AT(c, 0x1304cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01304d  popfd 
    X86_AT(c, 0x1304du);
    x86_popfd(c, 4);
    // 01304e  pop edx
    X86_AT(c, 0x1304eu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01304f  pop eax
    X86_AT(c, 0x1304fu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 013050  xor al, al
    X86_AT(c, 0x13050u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013052  ret 
    X86_AT(c, 0x13052u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1303du, "ran off the end of a function");
}
void f_0001303f(X86Cpu& c) {
    X86_TICK(c, 56);
    // 01303f  mov word ptr gs:[edi + 0x19fd], ax
    X86_AT(c, 0x1303fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FDu)), (c.r[0] & 0xFFFFu));
    // 013047  out dx, al
    X86_AT(c, 0x13047u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013048  mov dl, 0xea
    X86_AT(c, 0x13048u);
    s8(c, 2, 0xEAu);
    // 01304a  xor al, al
    X86_AT(c, 0x1304au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01304c  out dx, al
    X86_AT(c, 0x1304cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01304d  popfd 
    X86_AT(c, 0x1304du);
    x86_popfd(c, 4);
    // 01304e  pop edx
    X86_AT(c, 0x1304eu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01304f  pop eax
    X86_AT(c, 0x1304fu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 013050  xor al, al
    X86_AT(c, 0x13050u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013052  ret 
    X86_AT(c, 0x13052u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1303fu, "ran off the end of a function");
}
void f_00013047(X86Cpu& c) {
    X86_TICK(c, 54);
    // 013047  out dx, al
    X86_AT(c, 0x13047u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013048  mov dl, 0xea
    X86_AT(c, 0x13048u);
    s8(c, 2, 0xEAu);
    // 01304a  xor al, al
    X86_AT(c, 0x1304au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01304c  out dx, al
    X86_AT(c, 0x1304cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01304d  popfd 
    X86_AT(c, 0x1304du);
    x86_popfd(c, 4);
    // 01304e  pop edx
    X86_AT(c, 0x1304eu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01304f  pop eax
    X86_AT(c, 0x1304fu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 013050  xor al, al
    X86_AT(c, 0x13050u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013052  ret 
    X86_AT(c, 0x13052u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x13047u, "ran off the end of a function");
}
void f_00013048(X86Cpu& c) {
    X86_TICK(c, 42);
    // 013048  mov dl, 0xea
    X86_AT(c, 0x13048u);
    s8(c, 2, 0xEAu);
    // 01304a  xor al, al
    X86_AT(c, 0x1304au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01304c  out dx, al
    X86_AT(c, 0x1304cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01304d  popfd 
    X86_AT(c, 0x1304du);
    x86_popfd(c, 4);
    // 01304e  pop edx
    X86_AT(c, 0x1304eu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01304f  pop eax
    X86_AT(c, 0x1304fu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 013050  xor al, al
    X86_AT(c, 0x13050u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013052  ret 
    X86_AT(c, 0x13052u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x13048u, "ran off the end of a function");
}
void f_0001304a(X86Cpu& c) {
    X86_TICK(c, 40);
    // 01304a  xor al, al
    X86_AT(c, 0x1304au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01304c  out dx, al
    X86_AT(c, 0x1304cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01304d  popfd 
    X86_AT(c, 0x1304du);
    x86_popfd(c, 4);
    // 01304e  pop edx
    X86_AT(c, 0x1304eu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01304f  pop eax
    X86_AT(c, 0x1304fu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 013050  xor al, al
    X86_AT(c, 0x13050u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013052  ret 
    X86_AT(c, 0x13052u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1304au, "ran off the end of a function");
}
void f_0001304c(X86Cpu& c) {
    X86_TICK(c, 38);
    // 01304c  out dx, al
    X86_AT(c, 0x1304cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01304d  popfd 
    X86_AT(c, 0x1304du);
    x86_popfd(c, 4);
    // 01304e  pop edx
    X86_AT(c, 0x1304eu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01304f  pop eax
    X86_AT(c, 0x1304fu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 013050  xor al, al
    X86_AT(c, 0x13050u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013052  ret 
    X86_AT(c, 0x13052u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1304cu, "ran off the end of a function");
}
void f_0001304d(X86Cpu& c) {
    X86_TICK(c, 26);
    // 01304d  popfd 
    X86_AT(c, 0x1304du);
    x86_popfd(c, 4);
    // 01304e  pop edx
    X86_AT(c, 0x1304eu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01304f  pop eax
    X86_AT(c, 0x1304fu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 013050  xor al, al
    X86_AT(c, 0x13050u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013052  ret 
    X86_AT(c, 0x13052u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1304du, "ran off the end of a function");
}
void f_0001304e(X86Cpu& c) {
    X86_TICK(c, 20);
    // 01304e  pop edx
    X86_AT(c, 0x1304eu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01304f  pop eax
    X86_AT(c, 0x1304fu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 013050  xor al, al
    X86_AT(c, 0x13050u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013052  ret 
    X86_AT(c, 0x13052u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1304eu, "ran off the end of a function");
}
void f_0001304f(X86Cpu& c) {
    X86_TICK(c, 16);
    // 01304f  pop eax
    X86_AT(c, 0x1304fu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 013050  xor al, al
    X86_AT(c, 0x13050u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013052  ret 
    X86_AT(c, 0x13052u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1304fu, "ran off the end of a function");
}
void f_00013050(X86Cpu& c) {
    X86_TICK(c, 12);
    // 013050  xor al, al
    X86_AT(c, 0x13050u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013052  ret 
    X86_AT(c, 0x13052u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x13050u, "ran off the end of a function");
}
void f_00013052(X86Cpu& c) {
    X86_TICK(c, 10);
    // 013052  ret 
    X86_AT(c, 0x13052u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x13052u, "ran off the end of a function");
}
void f_00013054(X86Cpu& c) {
    X86_TICK(c, 7);
    // 013054  cmp ebx, 0x10000
    X86_AT(c, 0x13054u);
    (void)x86_sub(c, c.r[3], 0x10000u, 0, 4);
    // 01305a  jae 0x13557
    X86_AT(c, 0x1305au);
    if (x86_cc(c, 3)) { goto L_13557; }
    X86_TICK(c, 7);
    // 013060  cmp ecx, 0x10000
    X86_AT(c, 0x13060u);
    (void)x86_sub(c, c.r[1], 0x10000u, 0, 4);
    // 013066  ja 0x13557
    X86_AT(c, 0x13066u);
    if (x86_cc(c, 7)) { goto L_13557; }
    X86_TICK(c, 7);
    // 01306c  test ecx, ecx
    X86_AT(c, 0x1306cu);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 01306e  je 0x13557
    X86_AT(c, 0x1306eu);
    if (x86_cc(c, 4)) { goto L_13557; }
    X86_TICK(c, 9);
    // 013074  lea ebp, [ebx + ecx*1]
    X86_AT(c, 0x13074u);
    c.r[5] = (uint32_t)(c.r[3] + c.r[1]);
    // 013077  cmp ebp, 0x10000
    X86_AT(c, 0x13077u);
    (void)x86_sub(c, c.r[5], 0x10000u, 0, 4);
    // 01307d  ja 0x1355d
    X86_AT(c, 0x1307du);
    if (x86_cc(c, 7)) { goto L_1355d; }
    X86_TICK(c, 69);
    // 013083  pushal 
    X86_AT(c, 0x13083u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 013084  push es
    X86_AT(c, 0x13084u);
    push32(c, c.sreg[0]);
    // 013085  push 0x140
    X86_AT(c, 0x13085u);
    { uint32_t v = 0x140u; push32(c, v); }
    // 01308a  pop es
    X86_AT(c, 0x1308au);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01308b  mov ebp, edi
    X86_AT(c, 0x1308bu);
    c.r[5] = c.r[7];
    // 01308d  mov eax, ebx
    X86_AT(c, 0x1308du);
    c.r[0] = c.r[3];
    // 01308f  shr eax, 0xc
    X86_AT(c, 0x1308fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0xCu, 4, w); if (w) c.r[0] = r; }
    // 013092  or al, 0x80
    X86_AT(c, 0x13092u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x80u, 1)); }
    // 013094  mov dx, 0x4f7
    X86_AT(c, 0x13094u);
    s16(c, 2, 0x4F7u);
    // 013098  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x13098u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 01309f  out dx, al
    X86_AT(c, 0x1309fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0130a0  push ds
    X86_AT(c, 0x130a0u);
    push32(c, c.sreg[3]);
    // 0130a1  pop ds
    X86_AT(c, 0x130a1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0130a2  push ds
    X86_AT(c, 0x130a2u);
    push32(c, c.sreg[3]);
    // 0130a3  pop ds
    X86_AT(c, 0x130a3u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0130a4  mov ah, al
    X86_AT(c, 0x130a4u);
    s8(c, 4, g8(c, 0));
    // 0130a6  mov edi, ebx
    X86_AT(c, 0x130a6u);
    c.r[7] = c.r[3];
    // 0130a8  mov ebx, ecx
    X86_AT(c, 0x130a8u);
    c.r[3] = c.r[1];
L_130aa:
    X86_TICK(c, 13);
    // 0130aa  and edi, 0xfff
    X86_AT(c, 0x130aau);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & 0xFFFu, 4); }
    // 0130b0  mov ecx, 0x1000
    X86_AT(c, 0x130b0u);
    c.r[1] = 0x1000u;
    // 0130b5  sub ecx, edi
    X86_AT(c, 0x130b5u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0130b7  cmp ebx, ecx
    X86_AT(c, 0x130b7u);
    (void)x86_sub(c, c.r[3], c.r[1], 0, 4);
    // 0130b9  jbe 0x130dd
    X86_AT(c, 0x130b9u);
    if (x86_cc(c, 6)) { goto L_130dd; }
    X86_TICK(c, 2);
    // 0130bb  sub ebx, ecx
    X86_AT(c, 0x130bbu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[1], 0, 4); }
L_130bd:
    X86_TICK(c, 14);
    // 0130bd  lodsb al, byte ptr [esi]
    X86_AT(c, 0x130bdu);
    x86_string(c, 3, 1, 0, 4, 3);
    // 0130be  cmp al, 0xff
    X86_AT(c, 0x130beu);
    (void)x86_sub(c, g8(c, 0), 0xFFu, 0, 1);
    // 0130c0  jne 0x130c5
    X86_AT(c, 0x130c0u);
    if (x86_cc(c, 5)) { goto L_130c5; }
    X86_TICK(c, 4);
    // 0130c2  dec eax
    X86_AT(c, 0x130c2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0130c3  mov al, al
    X86_AT(c, 0x130c3u);
    s8(c, 0, g8(c, 0));
L_130c5:
    X86_TICK(c, 16);
    // 0130c5  stosb byte ptr es:[edi], al
    X86_AT(c, 0x130c5u);
    x86_string(c, 2, 1, 0, 4, 3);
    // 0130c6  nop 
    X86_AT(c, 0x130c6u);
    // 0130c7  jmp 0x130c9
    X86_AT(c, 0x130c7u);
    goto L_130c9;
L_130c9:
    X86_TICK(c, 11);
    // 0130c9  loop 0x130bd
    X86_AT(c, 0x130c9u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x130bdu); goto L_130bd; }
    X86_TICK(c, 37);
    // 0130cb  inc ah
    X86_AT(c, 0x130cbu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 0130cd  mov byte ptr gs:[ebp + 0x19f7], ah
    X86_AT(c, 0x130cdu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 4));
    // 0130d4  mov al, ah
    X86_AT(c, 0x130d4u);
    s8(c, 0, g8(c, 4));
    // 0130d6  out dx, al
    X86_AT(c, 0x130d6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0130d7  push ds
    X86_AT(c, 0x130d7u);
    push32(c, c.sreg[3]);
    // 0130d8  pop ds
    X86_AT(c, 0x130d8u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0130d9  push ds
    X86_AT(c, 0x130d9u);
    push32(c, c.sreg[3]);
    // 0130da  pop ds
    X86_AT(c, 0x130dau);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0130db  jmp 0x130aa
    X86_AT(c, 0x130dbu);
    X86_POLL(c, 0x130aau); goto L_130aa;
L_130dd:
    X86_TICK(c, 2);
    // 0130dd  mov ecx, ebx
    X86_AT(c, 0x130ddu);
    c.r[1] = c.r[3];
L_130df:
    X86_TICK(c, 14);
    // 0130df  lodsb al, byte ptr [esi]
    X86_AT(c, 0x130dfu);
    x86_string(c, 3, 1, 0, 4, 3);
    // 0130e0  cmp al, 0xff
    X86_AT(c, 0x130e0u);
    (void)x86_sub(c, g8(c, 0), 0xFFu, 0, 1);
    // 0130e2  jne 0x130e7
    X86_AT(c, 0x130e2u);
    if (x86_cc(c, 5)) { goto L_130e7; }
    X86_TICK(c, 4);
    // 0130e4  dec eax
    X86_AT(c, 0x130e4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0130e5  mov al, al
    X86_AT(c, 0x130e5u);
    s8(c, 0, g8(c, 0));
L_130e7:
    X86_TICK(c, 16);
    // 0130e7  stosb byte ptr es:[edi], al
    X86_AT(c, 0x130e7u);
    x86_string(c, 2, 1, 0, 4, 3);
    // 0130e8  nop 
    X86_AT(c, 0x130e8u);
    // 0130e9  jmp 0x130eb
    X86_AT(c, 0x130e9u);
    goto L_130eb;
L_130eb:
    X86_TICK(c, 11);
    // 0130eb  loop 0x130df
    X86_AT(c, 0x130ebu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x130dfu); goto L_130df; }
    X86_TICK(c, 40);
    // 0130ed  pop es
    X86_AT(c, 0x130edu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0130ee  popal 
    X86_AT(c, 0x130eeu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0130ef  xor al, al
    X86_AT(c, 0x130efu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0130f1  ret 
    X86_AT(c, 0x130f1u);
    c.eip = pop32(c); return;
L_13557:
    X86_TICK(c, 12);
    // 013557  mov al, 3
    X86_AT(c, 0x13557u);
    s8(c, 0, 0x3u);
    // 013559  ret 
    X86_AT(c, 0x13559u);
    c.eip = pop32(c); return;
L_1355d:
    X86_TICK(c, 12);
    // 01355d  mov al, 5
    X86_AT(c, 0x1355du);
    s8(c, 0, 0x5u);
    // 01355f  ret 
    X86_AT(c, 0x1355fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x13054u, "ran off the end of a function");
}
void f_000130f4(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0130f4  cmp ebx, 0x10000
    X86_AT(c, 0x130f4u);
    (void)x86_sub(c, c.r[3], 0x10000u, 0, 4);
    // 0130fa  jae 0x13557
    X86_AT(c, 0x130fau);
    if (x86_cc(c, 3)) { goto L_13557; }
    X86_TICK(c, 7);
    // 013100  cmp ecx, 0x10000
    X86_AT(c, 0x13100u);
    (void)x86_sub(c, c.r[1], 0x10000u, 0, 4);
    // 013106  ja 0x13557
    X86_AT(c, 0x13106u);
    if (x86_cc(c, 7)) { goto L_13557; }
    X86_TICK(c, 7);
    // 01310c  test ecx, ecx
    X86_AT(c, 0x1310cu);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 01310e  je 0x13557
    X86_AT(c, 0x1310eu);
    if (x86_cc(c, 4)) { goto L_13557; }
    X86_TICK(c, 9);
    // 013114  lea ebp, [ebx + ecx*1]
    X86_AT(c, 0x13114u);
    c.r[5] = (uint32_t)(c.r[3] + c.r[1]);
    // 013117  cmp ebp, 0x10000
    X86_AT(c, 0x13117u);
    (void)x86_sub(c, c.r[5], 0x10000u, 0, 4);
    // 01311d  ja 0x1355d
    X86_AT(c, 0x1311du);
    if (x86_cc(c, 7)) { goto L_1355d; }
    X86_TICK(c, 29);
    // 013123  pushal 
    X86_AT(c, 0x13123u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 013124  push ds
    X86_AT(c, 0x13124u);
    push32(c, c.sreg[3]);
    // 013125  push es
    X86_AT(c, 0x13125u);
    push32(c, c.sreg[0]);
    // 013126  call 0x1302c
    X86_AT(c, 0x13126u);
    push32(c, 0x1312bu); f_0001302c(c); X86_RET(c, 0x1312bu);
    X86_TICK(c, 43);
    // 01312b  push ds
    X86_AT(c, 0x1312bu);
    push32(c, c.sreg[3]);
    // 01312c  pop es
    X86_AT(c, 0x1312cu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01312d  push 0x140
    X86_AT(c, 0x1312du);
    { uint32_t v = 0x140u; push32(c, v); }
    // 013132  pop ds
    X86_AT(c, 0x13132u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 013133  mov ebp, edi
    X86_AT(c, 0x13133u);
    c.r[5] = c.r[7];
    // 013135  mov eax, ebx
    X86_AT(c, 0x13135u);
    c.r[0] = c.r[3];
    // 013137  shr eax, 0xc
    X86_AT(c, 0x13137u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0xCu, 4, w); if (w) c.r[0] = r; }
    // 01313a  and al, 0xf
    X86_AT(c, 0x1313au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 01313c  mov dx, 0x4f7
    X86_AT(c, 0x1313cu);
    s16(c, 2, 0x4F7u);
    // 013140  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x13140u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 013147  out dx, al
    X86_AT(c, 0x13147u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013148  push eax
    X86_AT(c, 0x13148u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 013149  mov al, 0x5c
    X86_AT(c, 0x13149u);
    s8(c, 0, 0x5Cu);
    // 01314b  xor edi, edi
    X86_AT(c, 0x1314bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v ^ c.r[7], 4); }
L_1314d:
    X86_TICK(c, 11);
    // 01314d  mov ah, byte ptr [edi]
    X86_AT(c, 0x1314du);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 01314f  cmp ah, 0xff
    X86_AT(c, 0x1314fu);
    (void)x86_sub(c, g8(c, 4), 0xFFu, 0, 1);
    // 013152  jne 0x13158
    X86_AT(c, 0x13152u);
    if (x86_cc(c, 5)) { goto L_13158; }
    X86_TICK(c, 7);
    // 013154  dec al
    X86_AT(c, 0x13154u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 013156  jne 0x1314d
    X86_AT(c, 0x13156u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1314du); goto L_1314d; }
L_13158:
    X86_TICK(c, 12);
    // 013158  pop eax
    X86_AT(c, 0x13158u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 013159  mov ah, al
    X86_AT(c, 0x13159u);
    s8(c, 4, g8(c, 0));
    // 01315b  mov edi, esi
    X86_AT(c, 0x1315bu);
    c.r[7] = c.r[6];
    // 01315d  mov esi, ebx
    X86_AT(c, 0x1315du);
    c.r[6] = c.r[3];
    // 01315f  mov ebx, ecx
    X86_AT(c, 0x1315fu);
    c.r[3] = c.r[1];
L_13161:
    X86_TICK(c, 13);
    // 013161  and esi, 0xfff
    X86_AT(c, 0x13161u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFu, 4); }
    // 013167  mov ecx, 0x1000
    X86_AT(c, 0x13167u);
    c.r[1] = 0x1000u;
    // 01316c  sub ecx, esi
    X86_AT(c, 0x1316cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[6], 0, 4); }
    // 01316e  cmp ebx, ecx
    X86_AT(c, 0x1316eu);
    (void)x86_sub(c, c.r[3], c.r[1], 0, 4);
    // 013170  jbe 0x13188
    X86_AT(c, 0x13170u);
    if (x86_cc(c, 6)) { goto L_13188; }
    X86_TICK(c, 46);
    // 013172  sub ebx, ecx
    X86_AT(c, 0x13172u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[1], 0, 4); }
    // 013174  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x13174u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 013176  inc ah
    X86_AT(c, 0x13176u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 013178  mov byte ptr gs:[ebp + 0x19f7], ah
    X86_AT(c, 0x13178u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 4));
    // 01317f  mov al, ah
    X86_AT(c, 0x1317fu);
    s8(c, 0, g8(c, 4));
    // 013181  out dx, al
    X86_AT(c, 0x13181u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013182  push ds
    X86_AT(c, 0x13182u);
    push32(c, c.sreg[3]);
    // 013183  pop ds
    X86_AT(c, 0x13183u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 013184  push ds
    X86_AT(c, 0x13184u);
    push32(c, c.sreg[3]);
    // 013185  pop ds
    X86_AT(c, 0x13185u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 013186  jmp 0x13161
    X86_AT(c, 0x13186u);
    X86_POLL(c, 0x13161u); goto L_13161;
L_13188:
    X86_TICK(c, 53);
    // 013188  mov ecx, ebx
    X86_AT(c, 0x13188u);
    c.r[1] = c.r[3];
    // 01318a  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x1318au);
    x86_string(c, 0, 1, 243, 4, 3);
    // 01318c  pop es
    X86_AT(c, 0x1318cu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01318d  pop ds
    X86_AT(c, 0x1318du);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 01318e  popal 
    X86_AT(c, 0x1318eu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 01318f  xor al, al
    X86_AT(c, 0x1318fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013191  ret 
    X86_AT(c, 0x13191u);
    c.eip = pop32(c); return;
L_13557:
    X86_TICK(c, 12);
    // 013557  mov al, 3
    X86_AT(c, 0x13557u);
    s8(c, 0, 0x3u);
    // 013559  ret 
    X86_AT(c, 0x13559u);
    c.eip = pop32(c); return;
L_1355d:
    X86_TICK(c, 12);
    // 01355d  mov al, 5
    X86_AT(c, 0x1355du);
    s8(c, 0, 0x5u);
    // 01355f  ret 
    X86_AT(c, 0x1355fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x130f4u, "ran off the end of a function");
}
void f_00013194(X86Cpu& c) {
    X86_TICK(c, 7);
    // 013194  cmp esi, 0xff00
    X86_AT(c, 0x13194u);
    (void)x86_sub(c, c.r[6], 0xFF00u, 0, 4);
    // 01319a  ja 0x13557
    X86_AT(c, 0x1319au);
    if (x86_cc(c, 7)) { goto L_13557; }
    X86_TICK(c, 7);
    // 0131a0  cmp ebx, 0xff00
    X86_AT(c, 0x131a0u);
    (void)x86_sub(c, c.r[3], 0xFF00u, 0, 4);
    // 0131a6  ja 0x13557
    X86_AT(c, 0x131a6u);
    if (x86_cc(c, 7)) { goto L_13557; }
    X86_TICK(c, 7);
    // 0131ac  cmp ecx, 0xff00
    X86_AT(c, 0x131acu);
    (void)x86_sub(c, c.r[1], 0xFF00u, 0, 4);
    // 0131b2  ja 0x13557
    X86_AT(c, 0x131b2u);
    if (x86_cc(c, 7)) { goto L_13557; }
    X86_TICK(c, 7);
    // 0131b8  test ecx, ecx
    X86_AT(c, 0x131b8u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0131ba  je 0x13557
    X86_AT(c, 0x131bau);
    if (x86_cc(c, 4)) { goto L_13557; }
    X86_TICK(c, 9);
    // 0131c0  lea ebp, [esi + ecx*1]
    X86_AT(c, 0x131c0u);
    c.r[5] = (uint32_t)(c.r[6] + c.r[1]);
    // 0131c3  cmp ebp, 0x10000
    X86_AT(c, 0x131c3u);
    (void)x86_sub(c, c.r[5], 0x10000u, 0, 4);
    // 0131c9  ja 0x1355d
    X86_AT(c, 0x131c9u);
    if (x86_cc(c, 7)) { goto L_1355d; }
    X86_TICK(c, 9);
    // 0131cf  lea ebp, [ebx + ecx*1]
    X86_AT(c, 0x131cfu);
    c.r[5] = (uint32_t)(c.r[3] + c.r[1]);
    // 0131d2  cmp ebp, 0x10000
    X86_AT(c, 0x131d2u);
    (void)x86_sub(c, c.r[5], 0x10000u, 0, 4);
    // 0131d8  ja 0x1355d
    X86_AT(c, 0x131d8u);
    if (x86_cc(c, 7)) { goto L_1355d; }
    X86_TICK(c, 49);
    // 0131de  pushal 
    X86_AT(c, 0x131deu);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0131df  push ds
    X86_AT(c, 0x131dfu);
    push32(c, c.sreg[3]);
    // 0131e0  push es
    X86_AT(c, 0x131e0u);
    push32(c, c.sreg[0]);
    // 0131e1  push 0x140
    X86_AT(c, 0x131e1u);
    { uint32_t v = 0x140u; push32(c, v); }
    // 0131e6  pop ds
    X86_AT(c, 0x131e6u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0131e7  push gs
    X86_AT(c, 0x131e7u);
    push32(c, c.sreg[5]);
    // 0131e9  pop es
    X86_AT(c, 0x131e9u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0131ea  mov ebp, edi
    X86_AT(c, 0x131eau);
    c.r[5] = c.r[7];
    // 0131ec  mov dx, 0x4f7
    X86_AT(c, 0x131ecu);
    s16(c, 2, 0x4F7u);
    // 0131f0  and esi, 0xff00
    X86_AT(c, 0x131f0u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFF00u, 4); }
    // 0131f6  and ebx, 0xff00
    X86_AT(c, 0x131f6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0xFF00u, 4); }
    // 0131fc  test cl, cl
    X86_AT(c, 0x131fcu);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 0131fe  je 0x13204
    X86_AT(c, 0x131feu);
    if (x86_cc(c, 4)) { goto L_13204; }
    X86_TICK(c, 4);
    // 013200  xor cl, cl
    X86_AT(c, 0x13200u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v ^ g8(c, 1), 1)); }
    // 013202  inc ch
    X86_AT(c, 0x13202u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_inc(c, v, 1)); }
L_13204:
    X86_TICK(c, 7);
    // 013204  cmp ebx, esi
    X86_AT(c, 0x13204u);
    (void)x86_sub(c, c.r[3], c.r[6], 0, 4);
    // 013206  ja 0x132b4
    X86_AT(c, 0x13206u);
    if (x86_cc(c, 7)) { goto L_132b4; }
    X86_TICK(c, 5);
    // 01320c  jb 0x13214
    X86_AT(c, 0x1320cu);
    if (x86_cc(c, 2)) { goto L_13214; }
    X86_TICK(c, 44);
    // 01320e  pop es
    X86_AT(c, 0x1320eu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01320f  pop ds
    X86_AT(c, 0x1320fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 013210  popal 
    X86_AT(c, 0x13210u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 013211  xor al, al
    X86_AT(c, 0x13211u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013213  ret 
    X86_AT(c, 0x13213u);
    c.eip = pop32(c); return;
L_13214:
    X86_TICK(c, 6);
    // 013214  mov dword ptr gs:[ebp + 0x1a08], esi
    X86_AT(c, 0x13214u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1A08u)), c.r[6]);
    // 01321b  mov dword ptr gs:[ebp + 0x1a0c], ebx
    X86_AT(c, 0x1321bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1A0Cu)), c.r[3]);
    // 013222  mov ebx, ecx
    X86_AT(c, 0x13222u);
    c.r[3] = c.r[1];
L_13224:
    X86_TICK(c, 35);
    // 013224  mov al, byte ptr gs:[ebp + 0x1a09]
    X86_AT(c, 0x13224u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1A09u))));
    // 01322b  shr al, 4
    X86_AT(c, 0x1322bu);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 01322e  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x1322eu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 013235  out dx, al
    X86_AT(c, 0x13235u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013236  mov esi, dword ptr gs:[ebp + 0x1a08]
    X86_AT(c, 0x13236u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1A08u)));
    // 01323d  and esi, 0xfff
    X86_AT(c, 0x1323du);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFu, 4); }
    // 013243  lea edi, [ebp + 0x3f00]
    X86_AT(c, 0x13243u);
    c.r[7] = (uint32_t)(c.r[5] + 0x3F00u);
    // 013249  mov ecx, 0x100
    X86_AT(c, 0x13249u);
    c.r[1] = 0x100u;
    // 01324e  push eax
    X86_AT(c, 0x1324eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01324f  mov al, 0x5c
    X86_AT(c, 0x1324fu);
    s8(c, 0, 0x5Cu);
L_13251:
    X86_TICK(c, 11);
    // 013251  mov ah, byte ptr [esi]
    X86_AT(c, 0x13251u);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 013253  cmp ah, 0xff
    X86_AT(c, 0x13253u);
    (void)x86_sub(c, g8(c, 4), 0xFFu, 0, 1);
    // 013256  jne 0x1325c
    X86_AT(c, 0x13256u);
    if (x86_cc(c, 5)) { goto L_1325c; }
    X86_TICK(c, 7);
    // 013258  dec al
    X86_AT(c, 0x13258u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 01325a  jne 0x13251
    X86_AT(c, 0x1325au);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x13251u); goto L_13251; }
L_1325c:
    X86_TICK(c, 56);
    // 01325c  pop eax
    X86_AT(c, 0x1325cu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01325d  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x1325du);
    x86_string(c, 0, 1, 243, 4, 3);
    // 01325f  push ds
    X86_AT(c, 0x1325fu);
    push32(c, c.sreg[3]);
    // 013260  push es
    X86_AT(c, 0x13260u);
    push32(c, c.sreg[0]);
    // 013261  pop ds
    X86_AT(c, 0x13261u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 013262  pop es
    X86_AT(c, 0x13262u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 013263  mov al, byte ptr gs:[ebp + 0x1a0d]
    X86_AT(c, 0x13263u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1A0Du))));
    // 01326a  shr al, 4
    X86_AT(c, 0x1326au);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 01326d  or al, 0x80
    X86_AT(c, 0x1326du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x80u, 1)); }
    // 01326f  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x1326fu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 013276  out dx, al
    X86_AT(c, 0x13276u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013277  lea esi, [ebp + 0x3f00]
    X86_AT(c, 0x13277u);
    c.r[6] = (uint32_t)(c.r[5] + 0x3F00u);
    // 01327d  mov edi, dword ptr gs:[ebp + 0x1a0c]
    X86_AT(c, 0x1327du);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1A0Cu)));
    // 013284  and edi, 0xfff
    X86_AT(c, 0x13284u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & 0xFFFu, 4); }
    // 01328a  inc ch
    X86_AT(c, 0x1328au);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_inc(c, v, 1)); }
L_1328c:
    X86_TICK(c, 14);
    // 01328c  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x1328cu);
    x86_string(c, 0, 1, 0, 4, 3);
    // 01328d  jmp 0x1328f
    X86_AT(c, 0x1328du);
    goto L_1328f;
L_1328f:
    X86_TICK(c, 15);
    // 01328f  nop 
    X86_AT(c, 0x1328fu);
    // 013290  nop 
    X86_AT(c, 0x13290u);
    // 013291  loop 0x1328c
    X86_AT(c, 0x13291u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x1328cu); goto L_1328c; }
    X86_TICK(c, 31);
    // 013293  push ds
    X86_AT(c, 0x13293u);
    push32(c, c.sreg[3]);
    // 013294  push es
    X86_AT(c, 0x13294u);
    push32(c, c.sreg[0]);
    // 013295  pop ds
    X86_AT(c, 0x13295u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 013296  pop es
    X86_AT(c, 0x13296u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 013297  inc byte ptr gs:[ebp + 0x1a09]
    X86_AT(c, 0x13297u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1A09u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 01329e  inc byte ptr gs:[ebp + 0x1a0d]
    X86_AT(c, 0x1329eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1A0Du)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 0132a5  dec bh
    X86_AT(c, 0x132a5u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_dec(c, v, 1)); }
    // 0132a7  jne 0x13224
    X86_AT(c, 0x132a7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x13224u); goto L_13224; }
    X86_TICK(c, 44);
    // 0132ad  pop es
    X86_AT(c, 0x132adu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0132ae  pop ds
    X86_AT(c, 0x132aeu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0132af  popal 
    X86_AT(c, 0x132afu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0132b0  xor al, al
    X86_AT(c, 0x132b0u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0132b2  ret 
    X86_AT(c, 0x132b2u);
    c.eip = pop32(c); return;
L_132b4:
    X86_TICK(c, 10);
    // 0132b4  lea esi, [esi + ecx*1 - 0x100]
    X86_AT(c, 0x132b4u);
    c.r[6] = (uint32_t)(c.r[6] + c.r[1] + 0xFFFFFF00u);
    // 0132bb  lea ebx, [ebx + ecx*1 - 0x100]
    X86_AT(c, 0x132bbu);
    c.r[3] = (uint32_t)(c.r[3] + c.r[1] + 0xFFFFFF00u);
    // 0132c2  mov dword ptr gs:[ebp + 0x1a08], esi
    X86_AT(c, 0x132c2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1A08u)), c.r[6]);
    // 0132c9  mov dword ptr gs:[ebp + 0x1a0c], ebx
    X86_AT(c, 0x132c9u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1A0Cu)), c.r[3]);
    // 0132d0  mov ebx, ecx
    X86_AT(c, 0x132d0u);
    c.r[3] = c.r[1];
L_132d2:
    X86_TICK(c, 35);
    // 0132d2  mov al, byte ptr gs:[ebp + 0x1a09]
    X86_AT(c, 0x132d2u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1A09u))));
    // 0132d9  shr al, 4
    X86_AT(c, 0x132d9u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 0132dc  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x132dcu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 0132e3  out dx, al
    X86_AT(c, 0x132e3u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0132e4  mov esi, dword ptr gs:[ebp + 0x1a08]
    X86_AT(c, 0x132e4u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1A08u)));
    // 0132eb  lea edi, [ebp + 0x3f00]
    X86_AT(c, 0x132ebu);
    c.r[7] = (uint32_t)(c.r[5] + 0x3F00u);
    // 0132f1  and esi, 0xfff
    X86_AT(c, 0x132f1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFu, 4); }
    // 0132f7  mov ecx, 0x100
    X86_AT(c, 0x132f7u);
    c.r[1] = 0x100u;
    // 0132fc  push eax
    X86_AT(c, 0x132fcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0132fd  mov al, 0x5c
    X86_AT(c, 0x132fdu);
    s8(c, 0, 0x5Cu);
L_132ff:
    X86_TICK(c, 11);
    // 0132ff  mov ah, byte ptr [esi]
    X86_AT(c, 0x132ffu);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 013301  cmp ah, 0xff
    X86_AT(c, 0x13301u);
    (void)x86_sub(c, g8(c, 4), 0xFFu, 0, 1);
    // 013304  jne 0x1330a
    X86_AT(c, 0x13304u);
    if (x86_cc(c, 5)) { goto L_1330a; }
    X86_TICK(c, 7);
    // 013306  dec al
    X86_AT(c, 0x13306u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 013308  jne 0x132ff
    X86_AT(c, 0x13308u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x132ffu); goto L_132ff; }
L_1330a:
    X86_TICK(c, 56);
    // 01330a  pop eax
    X86_AT(c, 0x1330au);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01330b  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x1330bu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 01330d  push ds
    X86_AT(c, 0x1330du);
    push32(c, c.sreg[3]);
    // 01330e  push es
    X86_AT(c, 0x1330eu);
    push32(c, c.sreg[0]);
    // 01330f  pop ds
    X86_AT(c, 0x1330fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 013310  pop es
    X86_AT(c, 0x13310u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 013311  mov al, byte ptr gs:[ebp + 0x1a0d]
    X86_AT(c, 0x13311u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1A0Du))));
    // 013318  shr al, 4
    X86_AT(c, 0x13318u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 01331b  or al, 0x80
    X86_AT(c, 0x1331bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x80u, 1)); }
    // 01331d  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x1331du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 013324  out dx, al
    X86_AT(c, 0x13324u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013325  lea esi, [ebp + 0x3f00]
    X86_AT(c, 0x13325u);
    c.r[6] = (uint32_t)(c.r[5] + 0x3F00u);
    // 01332b  mov edi, dword ptr gs:[ebp + 0x1a0c]
    X86_AT(c, 0x1332bu);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1A0Cu)));
    // 013332  and edi, 0xfff
    X86_AT(c, 0x13332u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & 0xFFFu, 4); }
    // 013338  inc ch
    X86_AT(c, 0x13338u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_inc(c, v, 1)); }
L_1333a:
    X86_TICK(c, 14);
    // 01333a  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x1333au);
    x86_string(c, 0, 1, 0, 4, 3);
    // 01333b  jmp 0x1333d
    X86_AT(c, 0x1333bu);
    goto L_1333d;
L_1333d:
    X86_TICK(c, 15);
    // 01333d  nop 
    X86_AT(c, 0x1333du);
    // 01333e  nop 
    X86_AT(c, 0x1333eu);
    // 01333f  loop 0x1333a
    X86_AT(c, 0x1333fu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x1333au); goto L_1333a; }
    X86_TICK(c, 31);
    // 013341  push ds
    X86_AT(c, 0x13341u);
    push32(c, c.sreg[3]);
    // 013342  push es
    X86_AT(c, 0x13342u);
    push32(c, c.sreg[0]);
    // 013343  pop ds
    X86_AT(c, 0x13343u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 013344  pop es
    X86_AT(c, 0x13344u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 013345  dec byte ptr gs:[ebp + 0x1a09]
    X86_AT(c, 0x13345u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1A09u)); uint32_t v = rd8(ea); wr8(ea, x86_dec(c, v, 1)); }
    // 01334c  dec byte ptr gs:[ebp + 0x1a0d]
    X86_AT(c, 0x1334cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1A0Du)); uint32_t v = rd8(ea); wr8(ea, x86_dec(c, v, 1)); }
    // 013353  dec bh
    X86_AT(c, 0x13353u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_dec(c, v, 1)); }
    // 013355  jne 0x132d2
    X86_AT(c, 0x13355u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x132d2u); goto L_132d2; }
    X86_TICK(c, 44);
    // 01335b  pop es
    X86_AT(c, 0x1335bu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01335c  pop ds
    X86_AT(c, 0x1335cu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 01335d  popal 
    X86_AT(c, 0x1335du);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 01335e  xor al, al
    X86_AT(c, 0x1335eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013360  ret 
    X86_AT(c, 0x13360u);
    c.eip = pop32(c); return;
L_13557:
    X86_TICK(c, 12);
    // 013557  mov al, 3
    X86_AT(c, 0x13557u);
    s8(c, 0, 0x3u);
    // 013559  ret 
    X86_AT(c, 0x13559u);
    c.eip = pop32(c); return;
L_1355d:
    X86_TICK(c, 12);
    // 01355d  mov al, 5
    X86_AT(c, 0x1355du);
    s8(c, 0, 0x5u);
    // 01355f  ret 
    X86_AT(c, 0x1355fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x13194u, "ran off the end of a function");
}
void f_00013364(X86Cpu& c) {
    X86_TICK(c, 22);
    // 013364  push eax
    X86_AT(c, 0x13364u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 013365  push edx
    X86_AT(c, 0x13365u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 013366  mov dx, 0x4ec
    X86_AT(c, 0x13366u);
    s16(c, 2, 0x4ECu);
    // 01336a  mov al, 0x3f
    X86_AT(c, 0x1336au);
    s8(c, 0, 0x3Fu);
    // 01336c  out dx, al
    X86_AT(c, 0x1336cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01336d  xor ah, ah
    X86_AT(c, 0x1336du);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
L_1336f:
    X86_TICK(c, 73);
    // 01336f  mov dl, 0xe3
    X86_AT(c, 0x1336fu);
    s8(c, 2, 0xE3u);
    // 013371  mov al, ah
    X86_AT(c, 0x13371u);
    s8(c, 0, g8(c, 4));
    // 013373  out dx, al
    X86_AT(c, 0x13373u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013374  dec edx
    X86_AT(c, 0x13374u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013375  xor al, al
    X86_AT(c, 0x13375u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013377  out dx, al
    X86_AT(c, 0x13377u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013378  dec edx
    X86_AT(c, 0x13378u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013379  mov al, ah
    X86_AT(c, 0x13379u);
    s8(c, 0, g8(c, 4));
    // 01337b  out dx, al
    X86_AT(c, 0x1337bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01337c  dec edx
    X86_AT(c, 0x1337cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01337d  xor al, al
    X86_AT(c, 0x1337du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01337f  out dx, al
    X86_AT(c, 0x1337fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013380  inc ah
    X86_AT(c, 0x13380u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 013382  cmp ah, 4
    X86_AT(c, 0x13382u);
    (void)x86_sub(c, g8(c, 4), 0x4u, 0, 1);
    // 013385  jne 0x1336f
    X86_AT(c, 0x13385u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1336fu); goto L_1336f; }
    X86_TICK(c, 52);
    // 013387  mov dl, 0xd5
    X86_AT(c, 0x13387u);
    s8(c, 2, 0xD5u);
    // 013389  xor al, al
    X86_AT(c, 0x13389u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01338b  out dx, al
    X86_AT(c, 0x1338bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01338c  mov dl, 0xec
    X86_AT(c, 0x1338cu);
    s8(c, 2, 0xECu);
    // 01338e  mov al, 0x7f
    X86_AT(c, 0x1338eu);
    s8(c, 0, 0x7Fu);
    // 013390  out dx, al
    X86_AT(c, 0x13390u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013391  pop edx
    X86_AT(c, 0x13391u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 013392  pop eax
    X86_AT(c, 0x13392u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 013393  xor al, al
    X86_AT(c, 0x13393u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013395  ret 
    X86_AT(c, 0x13395u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x13364u, "ran off the end of a function");
}
void f_00013365(X86Cpu& c) {
    X86_TICK(c, 20);
    // 013365  push edx
    X86_AT(c, 0x13365u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 013366  mov dx, 0x4ec
    X86_AT(c, 0x13366u);
    s16(c, 2, 0x4ECu);
    // 01336a  mov al, 0x3f
    X86_AT(c, 0x1336au);
    s8(c, 0, 0x3Fu);
    // 01336c  out dx, al
    X86_AT(c, 0x1336cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01336d  xor ah, ah
    X86_AT(c, 0x1336du);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
L_1336f:
    X86_TICK(c, 73);
    // 01336f  mov dl, 0xe3
    X86_AT(c, 0x1336fu);
    s8(c, 2, 0xE3u);
    // 013371  mov al, ah
    X86_AT(c, 0x13371u);
    s8(c, 0, g8(c, 4));
    // 013373  out dx, al
    X86_AT(c, 0x13373u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013374  dec edx
    X86_AT(c, 0x13374u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013375  xor al, al
    X86_AT(c, 0x13375u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013377  out dx, al
    X86_AT(c, 0x13377u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013378  dec edx
    X86_AT(c, 0x13378u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013379  mov al, ah
    X86_AT(c, 0x13379u);
    s8(c, 0, g8(c, 4));
    // 01337b  out dx, al
    X86_AT(c, 0x1337bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01337c  dec edx
    X86_AT(c, 0x1337cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01337d  xor al, al
    X86_AT(c, 0x1337du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01337f  out dx, al
    X86_AT(c, 0x1337fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013380  inc ah
    X86_AT(c, 0x13380u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 013382  cmp ah, 4
    X86_AT(c, 0x13382u);
    (void)x86_sub(c, g8(c, 4), 0x4u, 0, 1);
    // 013385  jne 0x1336f
    X86_AT(c, 0x13385u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1336fu); goto L_1336f; }
    X86_TICK(c, 52);
    // 013387  mov dl, 0xd5
    X86_AT(c, 0x13387u);
    s8(c, 2, 0xD5u);
    // 013389  xor al, al
    X86_AT(c, 0x13389u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01338b  out dx, al
    X86_AT(c, 0x1338bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01338c  mov dl, 0xec
    X86_AT(c, 0x1338cu);
    s8(c, 2, 0xECu);
    // 01338e  mov al, 0x7f
    X86_AT(c, 0x1338eu);
    s8(c, 0, 0x7Fu);
    // 013390  out dx, al
    X86_AT(c, 0x13390u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013391  pop edx
    X86_AT(c, 0x13391u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 013392  pop eax
    X86_AT(c, 0x13392u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 013393  xor al, al
    X86_AT(c, 0x13393u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013395  ret 
    X86_AT(c, 0x13395u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x13365u, "ran off the end of a function");
}
void f_00013366(X86Cpu& c) {
    X86_TICK(c, 18);
    // 013366  mov dx, 0x4ec
    X86_AT(c, 0x13366u);
    s16(c, 2, 0x4ECu);
    // 01336a  mov al, 0x3f
    X86_AT(c, 0x1336au);
    s8(c, 0, 0x3Fu);
    // 01336c  out dx, al
    X86_AT(c, 0x1336cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01336d  xor ah, ah
    X86_AT(c, 0x1336du);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
L_1336f:
    X86_TICK(c, 73);
    // 01336f  mov dl, 0xe3
    X86_AT(c, 0x1336fu);
    s8(c, 2, 0xE3u);
    // 013371  mov al, ah
    X86_AT(c, 0x13371u);
    s8(c, 0, g8(c, 4));
    // 013373  out dx, al
    X86_AT(c, 0x13373u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013374  dec edx
    X86_AT(c, 0x13374u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013375  xor al, al
    X86_AT(c, 0x13375u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013377  out dx, al
    X86_AT(c, 0x13377u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013378  dec edx
    X86_AT(c, 0x13378u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013379  mov al, ah
    X86_AT(c, 0x13379u);
    s8(c, 0, g8(c, 4));
    // 01337b  out dx, al
    X86_AT(c, 0x1337bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01337c  dec edx
    X86_AT(c, 0x1337cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01337d  xor al, al
    X86_AT(c, 0x1337du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01337f  out dx, al
    X86_AT(c, 0x1337fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013380  inc ah
    X86_AT(c, 0x13380u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 013382  cmp ah, 4
    X86_AT(c, 0x13382u);
    (void)x86_sub(c, g8(c, 4), 0x4u, 0, 1);
    // 013385  jne 0x1336f
    X86_AT(c, 0x13385u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1336fu); goto L_1336f; }
    X86_TICK(c, 52);
    // 013387  mov dl, 0xd5
    X86_AT(c, 0x13387u);
    s8(c, 2, 0xD5u);
    // 013389  xor al, al
    X86_AT(c, 0x13389u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01338b  out dx, al
    X86_AT(c, 0x1338bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01338c  mov dl, 0xec
    X86_AT(c, 0x1338cu);
    s8(c, 2, 0xECu);
    // 01338e  mov al, 0x7f
    X86_AT(c, 0x1338eu);
    s8(c, 0, 0x7Fu);
    // 013390  out dx, al
    X86_AT(c, 0x13390u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013391  pop edx
    X86_AT(c, 0x13391u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 013392  pop eax
    X86_AT(c, 0x13392u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 013393  xor al, al
    X86_AT(c, 0x13393u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013395  ret 
    X86_AT(c, 0x13395u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x13366u, "ran off the end of a function");
}
void f_0001336a(X86Cpu& c) {
    X86_TICK(c, 16);
    // 01336a  mov al, 0x3f
    X86_AT(c, 0x1336au);
    s8(c, 0, 0x3Fu);
    // 01336c  out dx, al
    X86_AT(c, 0x1336cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01336d  xor ah, ah
    X86_AT(c, 0x1336du);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
L_1336f:
    X86_TICK(c, 73);
    // 01336f  mov dl, 0xe3
    X86_AT(c, 0x1336fu);
    s8(c, 2, 0xE3u);
    // 013371  mov al, ah
    X86_AT(c, 0x13371u);
    s8(c, 0, g8(c, 4));
    // 013373  out dx, al
    X86_AT(c, 0x13373u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013374  dec edx
    X86_AT(c, 0x13374u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013375  xor al, al
    X86_AT(c, 0x13375u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013377  out dx, al
    X86_AT(c, 0x13377u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013378  dec edx
    X86_AT(c, 0x13378u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013379  mov al, ah
    X86_AT(c, 0x13379u);
    s8(c, 0, g8(c, 4));
    // 01337b  out dx, al
    X86_AT(c, 0x1337bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01337c  dec edx
    X86_AT(c, 0x1337cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01337d  xor al, al
    X86_AT(c, 0x1337du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01337f  out dx, al
    X86_AT(c, 0x1337fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013380  inc ah
    X86_AT(c, 0x13380u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 013382  cmp ah, 4
    X86_AT(c, 0x13382u);
    (void)x86_sub(c, g8(c, 4), 0x4u, 0, 1);
    // 013385  jne 0x1336f
    X86_AT(c, 0x13385u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1336fu); goto L_1336f; }
    X86_TICK(c, 52);
    // 013387  mov dl, 0xd5
    X86_AT(c, 0x13387u);
    s8(c, 2, 0xD5u);
    // 013389  xor al, al
    X86_AT(c, 0x13389u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01338b  out dx, al
    X86_AT(c, 0x1338bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01338c  mov dl, 0xec
    X86_AT(c, 0x1338cu);
    s8(c, 2, 0xECu);
    // 01338e  mov al, 0x7f
    X86_AT(c, 0x1338eu);
    s8(c, 0, 0x7Fu);
    // 013390  out dx, al
    X86_AT(c, 0x13390u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013391  pop edx
    X86_AT(c, 0x13391u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 013392  pop eax
    X86_AT(c, 0x13392u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 013393  xor al, al
    X86_AT(c, 0x13393u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013395  ret 
    X86_AT(c, 0x13395u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1336au, "ran off the end of a function");
}
void f_0001336c(X86Cpu& c) {
    X86_TICK(c, 14);
    // 01336c  out dx, al
    X86_AT(c, 0x1336cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01336d  xor ah, ah
    X86_AT(c, 0x1336du);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
L_1336f:
    X86_TICK(c, 73);
    // 01336f  mov dl, 0xe3
    X86_AT(c, 0x1336fu);
    s8(c, 2, 0xE3u);
    // 013371  mov al, ah
    X86_AT(c, 0x13371u);
    s8(c, 0, g8(c, 4));
    // 013373  out dx, al
    X86_AT(c, 0x13373u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013374  dec edx
    X86_AT(c, 0x13374u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013375  xor al, al
    X86_AT(c, 0x13375u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013377  out dx, al
    X86_AT(c, 0x13377u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013378  dec edx
    X86_AT(c, 0x13378u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013379  mov al, ah
    X86_AT(c, 0x13379u);
    s8(c, 0, g8(c, 4));
    // 01337b  out dx, al
    X86_AT(c, 0x1337bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01337c  dec edx
    X86_AT(c, 0x1337cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01337d  xor al, al
    X86_AT(c, 0x1337du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01337f  out dx, al
    X86_AT(c, 0x1337fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013380  inc ah
    X86_AT(c, 0x13380u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 013382  cmp ah, 4
    X86_AT(c, 0x13382u);
    (void)x86_sub(c, g8(c, 4), 0x4u, 0, 1);
    // 013385  jne 0x1336f
    X86_AT(c, 0x13385u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1336fu); goto L_1336f; }
    X86_TICK(c, 52);
    // 013387  mov dl, 0xd5
    X86_AT(c, 0x13387u);
    s8(c, 2, 0xD5u);
    // 013389  xor al, al
    X86_AT(c, 0x13389u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01338b  out dx, al
    X86_AT(c, 0x1338bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01338c  mov dl, 0xec
    X86_AT(c, 0x1338cu);
    s8(c, 2, 0xECu);
    // 01338e  mov al, 0x7f
    X86_AT(c, 0x1338eu);
    s8(c, 0, 0x7Fu);
    // 013390  out dx, al
    X86_AT(c, 0x13390u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013391  pop edx
    X86_AT(c, 0x13391u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 013392  pop eax
    X86_AT(c, 0x13392u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 013393  xor al, al
    X86_AT(c, 0x13393u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013395  ret 
    X86_AT(c, 0x13395u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1336cu, "ran off the end of a function");
}
void f_0001336d(X86Cpu& c) {
    X86_TICK(c, 2);
    // 01336d  xor ah, ah
    X86_AT(c, 0x1336du);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
L_1336f:
    X86_TICK(c, 73);
    // 01336f  mov dl, 0xe3
    X86_AT(c, 0x1336fu);
    s8(c, 2, 0xE3u);
    // 013371  mov al, ah
    X86_AT(c, 0x13371u);
    s8(c, 0, g8(c, 4));
    // 013373  out dx, al
    X86_AT(c, 0x13373u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013374  dec edx
    X86_AT(c, 0x13374u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013375  xor al, al
    X86_AT(c, 0x13375u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013377  out dx, al
    X86_AT(c, 0x13377u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013378  dec edx
    X86_AT(c, 0x13378u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013379  mov al, ah
    X86_AT(c, 0x13379u);
    s8(c, 0, g8(c, 4));
    // 01337b  out dx, al
    X86_AT(c, 0x1337bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01337c  dec edx
    X86_AT(c, 0x1337cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01337d  xor al, al
    X86_AT(c, 0x1337du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01337f  out dx, al
    X86_AT(c, 0x1337fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013380  inc ah
    X86_AT(c, 0x13380u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 013382  cmp ah, 4
    X86_AT(c, 0x13382u);
    (void)x86_sub(c, g8(c, 4), 0x4u, 0, 1);
    // 013385  jne 0x1336f
    X86_AT(c, 0x13385u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1336fu); goto L_1336f; }
    X86_TICK(c, 52);
    // 013387  mov dl, 0xd5
    X86_AT(c, 0x13387u);
    s8(c, 2, 0xD5u);
    // 013389  xor al, al
    X86_AT(c, 0x13389u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01338b  out dx, al
    X86_AT(c, 0x1338bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01338c  mov dl, 0xec
    X86_AT(c, 0x1338cu);
    s8(c, 2, 0xECu);
    // 01338e  mov al, 0x7f
    X86_AT(c, 0x1338eu);
    s8(c, 0, 0x7Fu);
    // 013390  out dx, al
    X86_AT(c, 0x13390u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013391  pop edx
    X86_AT(c, 0x13391u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 013392  pop eax
    X86_AT(c, 0x13392u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 013393  xor al, al
    X86_AT(c, 0x13393u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013395  ret 
    X86_AT(c, 0x13395u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1336du, "ran off the end of a function");
}
void f_0001336f(X86Cpu& c) {
L_1336f:
    X86_TICK(c, 73);
    // 01336f  mov dl, 0xe3
    X86_AT(c, 0x1336fu);
    s8(c, 2, 0xE3u);
    // 013371  mov al, ah
    X86_AT(c, 0x13371u);
    s8(c, 0, g8(c, 4));
    // 013373  out dx, al
    X86_AT(c, 0x13373u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013374  dec edx
    X86_AT(c, 0x13374u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013375  xor al, al
    X86_AT(c, 0x13375u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013377  out dx, al
    X86_AT(c, 0x13377u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013378  dec edx
    X86_AT(c, 0x13378u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013379  mov al, ah
    X86_AT(c, 0x13379u);
    s8(c, 0, g8(c, 4));
    // 01337b  out dx, al
    X86_AT(c, 0x1337bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01337c  dec edx
    X86_AT(c, 0x1337cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01337d  xor al, al
    X86_AT(c, 0x1337du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01337f  out dx, al
    X86_AT(c, 0x1337fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013380  inc ah
    X86_AT(c, 0x13380u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 013382  cmp ah, 4
    X86_AT(c, 0x13382u);
    (void)x86_sub(c, g8(c, 4), 0x4u, 0, 1);
    // 013385  jne 0x1336f
    X86_AT(c, 0x13385u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1336fu); goto L_1336f; }
    X86_TICK(c, 52);
    // 013387  mov dl, 0xd5
    X86_AT(c, 0x13387u);
    s8(c, 2, 0xD5u);
    // 013389  xor al, al
    X86_AT(c, 0x13389u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01338b  out dx, al
    X86_AT(c, 0x1338bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01338c  mov dl, 0xec
    X86_AT(c, 0x1338cu);
    s8(c, 2, 0xECu);
    // 01338e  mov al, 0x7f
    X86_AT(c, 0x1338eu);
    s8(c, 0, 0x7Fu);
    // 013390  out dx, al
    X86_AT(c, 0x13390u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013391  pop edx
    X86_AT(c, 0x13391u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 013392  pop eax
    X86_AT(c, 0x13392u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 013393  xor al, al
    X86_AT(c, 0x13393u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013395  ret 
    X86_AT(c, 0x13395u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1336fu, "ran off the end of a function");
}
void f_00013371(X86Cpu& c) {
    goto L_13371;
L_1336f:
    X86_TICK(c, 2);
    // 01336f  mov dl, 0xe3
    X86_AT(c, 0x1336fu);
    s8(c, 2, 0xE3u);
L_13371:
    X86_TICK(c, 71);
    // 013371  mov al, ah
    X86_AT(c, 0x13371u);
    s8(c, 0, g8(c, 4));
    // 013373  out dx, al
    X86_AT(c, 0x13373u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013374  dec edx
    X86_AT(c, 0x13374u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013375  xor al, al
    X86_AT(c, 0x13375u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013377  out dx, al
    X86_AT(c, 0x13377u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013378  dec edx
    X86_AT(c, 0x13378u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013379  mov al, ah
    X86_AT(c, 0x13379u);
    s8(c, 0, g8(c, 4));
    // 01337b  out dx, al
    X86_AT(c, 0x1337bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01337c  dec edx
    X86_AT(c, 0x1337cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01337d  xor al, al
    X86_AT(c, 0x1337du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01337f  out dx, al
    X86_AT(c, 0x1337fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013380  inc ah
    X86_AT(c, 0x13380u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 013382  cmp ah, 4
    X86_AT(c, 0x13382u);
    (void)x86_sub(c, g8(c, 4), 0x4u, 0, 1);
    // 013385  jne 0x1336f
    X86_AT(c, 0x13385u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1336fu); goto L_1336f; }
    X86_TICK(c, 52);
    // 013387  mov dl, 0xd5
    X86_AT(c, 0x13387u);
    s8(c, 2, 0xD5u);
    // 013389  xor al, al
    X86_AT(c, 0x13389u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01338b  out dx, al
    X86_AT(c, 0x1338bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01338c  mov dl, 0xec
    X86_AT(c, 0x1338cu);
    s8(c, 2, 0xECu);
    // 01338e  mov al, 0x7f
    X86_AT(c, 0x1338eu);
    s8(c, 0, 0x7Fu);
    // 013390  out dx, al
    X86_AT(c, 0x13390u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013391  pop edx
    X86_AT(c, 0x13391u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 013392  pop eax
    X86_AT(c, 0x13392u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 013393  xor al, al
    X86_AT(c, 0x13393u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013395  ret 
    X86_AT(c, 0x13395u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x13371u, "ran off the end of a function");
}
void f_00013373(X86Cpu& c) {
    goto L_13373;
L_1336f:
    X86_TICK(c, 4);
    // 01336f  mov dl, 0xe3
    X86_AT(c, 0x1336fu);
    s8(c, 2, 0xE3u);
    // 013371  mov al, ah
    X86_AT(c, 0x13371u);
    s8(c, 0, g8(c, 4));
L_13373:
    X86_TICK(c, 69);
    // 013373  out dx, al
    X86_AT(c, 0x13373u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013374  dec edx
    X86_AT(c, 0x13374u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013375  xor al, al
    X86_AT(c, 0x13375u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013377  out dx, al
    X86_AT(c, 0x13377u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013378  dec edx
    X86_AT(c, 0x13378u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013379  mov al, ah
    X86_AT(c, 0x13379u);
    s8(c, 0, g8(c, 4));
    // 01337b  out dx, al
    X86_AT(c, 0x1337bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01337c  dec edx
    X86_AT(c, 0x1337cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01337d  xor al, al
    X86_AT(c, 0x1337du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01337f  out dx, al
    X86_AT(c, 0x1337fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013380  inc ah
    X86_AT(c, 0x13380u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 013382  cmp ah, 4
    X86_AT(c, 0x13382u);
    (void)x86_sub(c, g8(c, 4), 0x4u, 0, 1);
    // 013385  jne 0x1336f
    X86_AT(c, 0x13385u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1336fu); goto L_1336f; }
    X86_TICK(c, 52);
    // 013387  mov dl, 0xd5
    X86_AT(c, 0x13387u);
    s8(c, 2, 0xD5u);
    // 013389  xor al, al
    X86_AT(c, 0x13389u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01338b  out dx, al
    X86_AT(c, 0x1338bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01338c  mov dl, 0xec
    X86_AT(c, 0x1338cu);
    s8(c, 2, 0xECu);
    // 01338e  mov al, 0x7f
    X86_AT(c, 0x1338eu);
    s8(c, 0, 0x7Fu);
    // 013390  out dx, al
    X86_AT(c, 0x13390u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013391  pop edx
    X86_AT(c, 0x13391u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 013392  pop eax
    X86_AT(c, 0x13392u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 013393  xor al, al
    X86_AT(c, 0x13393u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013395  ret 
    X86_AT(c, 0x13395u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x13373u, "ran off the end of a function");
}
void f_00013374(X86Cpu& c) {
    goto L_13374;
L_1336f:
    X86_TICK(c, 16);
    // 01336f  mov dl, 0xe3
    X86_AT(c, 0x1336fu);
    s8(c, 2, 0xE3u);
    // 013371  mov al, ah
    X86_AT(c, 0x13371u);
    s8(c, 0, g8(c, 4));
    // 013373  out dx, al
    X86_AT(c, 0x13373u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
L_13374:
    X86_TICK(c, 57);
    // 013374  dec edx
    X86_AT(c, 0x13374u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013375  xor al, al
    X86_AT(c, 0x13375u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013377  out dx, al
    X86_AT(c, 0x13377u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013378  dec edx
    X86_AT(c, 0x13378u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013379  mov al, ah
    X86_AT(c, 0x13379u);
    s8(c, 0, g8(c, 4));
    // 01337b  out dx, al
    X86_AT(c, 0x1337bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01337c  dec edx
    X86_AT(c, 0x1337cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01337d  xor al, al
    X86_AT(c, 0x1337du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01337f  out dx, al
    X86_AT(c, 0x1337fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013380  inc ah
    X86_AT(c, 0x13380u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 013382  cmp ah, 4
    X86_AT(c, 0x13382u);
    (void)x86_sub(c, g8(c, 4), 0x4u, 0, 1);
    // 013385  jne 0x1336f
    X86_AT(c, 0x13385u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1336fu); goto L_1336f; }
    X86_TICK(c, 52);
    // 013387  mov dl, 0xd5
    X86_AT(c, 0x13387u);
    s8(c, 2, 0xD5u);
    // 013389  xor al, al
    X86_AT(c, 0x13389u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01338b  out dx, al
    X86_AT(c, 0x1338bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01338c  mov dl, 0xec
    X86_AT(c, 0x1338cu);
    s8(c, 2, 0xECu);
    // 01338e  mov al, 0x7f
    X86_AT(c, 0x1338eu);
    s8(c, 0, 0x7Fu);
    // 013390  out dx, al
    X86_AT(c, 0x13390u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013391  pop edx
    X86_AT(c, 0x13391u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 013392  pop eax
    X86_AT(c, 0x13392u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 013393  xor al, al
    X86_AT(c, 0x13393u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013395  ret 
    X86_AT(c, 0x13395u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x13374u, "ran off the end of a function");
}
void f_00013375(X86Cpu& c) {
    goto L_13375;
L_1336f:
    X86_TICK(c, 18);
    // 01336f  mov dl, 0xe3
    X86_AT(c, 0x1336fu);
    s8(c, 2, 0xE3u);
    // 013371  mov al, ah
    X86_AT(c, 0x13371u);
    s8(c, 0, g8(c, 4));
    // 013373  out dx, al
    X86_AT(c, 0x13373u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013374  dec edx
    X86_AT(c, 0x13374u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
L_13375:
    X86_TICK(c, 55);
    // 013375  xor al, al
    X86_AT(c, 0x13375u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013377  out dx, al
    X86_AT(c, 0x13377u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013378  dec edx
    X86_AT(c, 0x13378u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013379  mov al, ah
    X86_AT(c, 0x13379u);
    s8(c, 0, g8(c, 4));
    // 01337b  out dx, al
    X86_AT(c, 0x1337bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01337c  dec edx
    X86_AT(c, 0x1337cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01337d  xor al, al
    X86_AT(c, 0x1337du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01337f  out dx, al
    X86_AT(c, 0x1337fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013380  inc ah
    X86_AT(c, 0x13380u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 013382  cmp ah, 4
    X86_AT(c, 0x13382u);
    (void)x86_sub(c, g8(c, 4), 0x4u, 0, 1);
    // 013385  jne 0x1336f
    X86_AT(c, 0x13385u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1336fu); goto L_1336f; }
    X86_TICK(c, 52);
    // 013387  mov dl, 0xd5
    X86_AT(c, 0x13387u);
    s8(c, 2, 0xD5u);
    // 013389  xor al, al
    X86_AT(c, 0x13389u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01338b  out dx, al
    X86_AT(c, 0x1338bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01338c  mov dl, 0xec
    X86_AT(c, 0x1338cu);
    s8(c, 2, 0xECu);
    // 01338e  mov al, 0x7f
    X86_AT(c, 0x1338eu);
    s8(c, 0, 0x7Fu);
    // 013390  out dx, al
    X86_AT(c, 0x13390u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013391  pop edx
    X86_AT(c, 0x13391u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 013392  pop eax
    X86_AT(c, 0x13392u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 013393  xor al, al
    X86_AT(c, 0x13393u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013395  ret 
    X86_AT(c, 0x13395u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x13375u, "ran off the end of a function");
}
void f_00013377(X86Cpu& c) {
    goto L_13377;
L_1336f:
    X86_TICK(c, 20);
    // 01336f  mov dl, 0xe3
    X86_AT(c, 0x1336fu);
    s8(c, 2, 0xE3u);
    // 013371  mov al, ah
    X86_AT(c, 0x13371u);
    s8(c, 0, g8(c, 4));
    // 013373  out dx, al
    X86_AT(c, 0x13373u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013374  dec edx
    X86_AT(c, 0x13374u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013375  xor al, al
    X86_AT(c, 0x13375u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
L_13377:
    X86_TICK(c, 53);
    // 013377  out dx, al
    X86_AT(c, 0x13377u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013378  dec edx
    X86_AT(c, 0x13378u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013379  mov al, ah
    X86_AT(c, 0x13379u);
    s8(c, 0, g8(c, 4));
    // 01337b  out dx, al
    X86_AT(c, 0x1337bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01337c  dec edx
    X86_AT(c, 0x1337cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01337d  xor al, al
    X86_AT(c, 0x1337du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01337f  out dx, al
    X86_AT(c, 0x1337fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013380  inc ah
    X86_AT(c, 0x13380u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 013382  cmp ah, 4
    X86_AT(c, 0x13382u);
    (void)x86_sub(c, g8(c, 4), 0x4u, 0, 1);
    // 013385  jne 0x1336f
    X86_AT(c, 0x13385u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1336fu); goto L_1336f; }
    X86_TICK(c, 52);
    // 013387  mov dl, 0xd5
    X86_AT(c, 0x13387u);
    s8(c, 2, 0xD5u);
    // 013389  xor al, al
    X86_AT(c, 0x13389u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01338b  out dx, al
    X86_AT(c, 0x1338bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01338c  mov dl, 0xec
    X86_AT(c, 0x1338cu);
    s8(c, 2, 0xECu);
    // 01338e  mov al, 0x7f
    X86_AT(c, 0x1338eu);
    s8(c, 0, 0x7Fu);
    // 013390  out dx, al
    X86_AT(c, 0x13390u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013391  pop edx
    X86_AT(c, 0x13391u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 013392  pop eax
    X86_AT(c, 0x13392u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 013393  xor al, al
    X86_AT(c, 0x13393u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013395  ret 
    X86_AT(c, 0x13395u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x13377u, "ran off the end of a function");
}
void f_00013378(X86Cpu& c) {
    goto L_13378;
L_1336f:
    X86_TICK(c, 32);
    // 01336f  mov dl, 0xe3
    X86_AT(c, 0x1336fu);
    s8(c, 2, 0xE3u);
    // 013371  mov al, ah
    X86_AT(c, 0x13371u);
    s8(c, 0, g8(c, 4));
    // 013373  out dx, al
    X86_AT(c, 0x13373u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013374  dec edx
    X86_AT(c, 0x13374u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013375  xor al, al
    X86_AT(c, 0x13375u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013377  out dx, al
    X86_AT(c, 0x13377u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
L_13378:
    X86_TICK(c, 41);
    // 013378  dec edx
    X86_AT(c, 0x13378u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013379  mov al, ah
    X86_AT(c, 0x13379u);
    s8(c, 0, g8(c, 4));
    // 01337b  out dx, al
    X86_AT(c, 0x1337bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01337c  dec edx
    X86_AT(c, 0x1337cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01337d  xor al, al
    X86_AT(c, 0x1337du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01337f  out dx, al
    X86_AT(c, 0x1337fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013380  inc ah
    X86_AT(c, 0x13380u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 013382  cmp ah, 4
    X86_AT(c, 0x13382u);
    (void)x86_sub(c, g8(c, 4), 0x4u, 0, 1);
    // 013385  jne 0x1336f
    X86_AT(c, 0x13385u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1336fu); goto L_1336f; }
    X86_TICK(c, 52);
    // 013387  mov dl, 0xd5
    X86_AT(c, 0x13387u);
    s8(c, 2, 0xD5u);
    // 013389  xor al, al
    X86_AT(c, 0x13389u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01338b  out dx, al
    X86_AT(c, 0x1338bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01338c  mov dl, 0xec
    X86_AT(c, 0x1338cu);
    s8(c, 2, 0xECu);
    // 01338e  mov al, 0x7f
    X86_AT(c, 0x1338eu);
    s8(c, 0, 0x7Fu);
    // 013390  out dx, al
    X86_AT(c, 0x13390u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013391  pop edx
    X86_AT(c, 0x13391u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 013392  pop eax
    X86_AT(c, 0x13392u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 013393  xor al, al
    X86_AT(c, 0x13393u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013395  ret 
    X86_AT(c, 0x13395u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x13378u, "ran off the end of a function");
}
void f_00013379(X86Cpu& c) {
    goto L_13379;
L_1336f:
    X86_TICK(c, 34);
    // 01336f  mov dl, 0xe3
    X86_AT(c, 0x1336fu);
    s8(c, 2, 0xE3u);
    // 013371  mov al, ah
    X86_AT(c, 0x13371u);
    s8(c, 0, g8(c, 4));
    // 013373  out dx, al
    X86_AT(c, 0x13373u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013374  dec edx
    X86_AT(c, 0x13374u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013375  xor al, al
    X86_AT(c, 0x13375u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013377  out dx, al
    X86_AT(c, 0x13377u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013378  dec edx
    X86_AT(c, 0x13378u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
L_13379:
    X86_TICK(c, 39);
    // 013379  mov al, ah
    X86_AT(c, 0x13379u);
    s8(c, 0, g8(c, 4));
    // 01337b  out dx, al
    X86_AT(c, 0x1337bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01337c  dec edx
    X86_AT(c, 0x1337cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01337d  xor al, al
    X86_AT(c, 0x1337du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01337f  out dx, al
    X86_AT(c, 0x1337fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013380  inc ah
    X86_AT(c, 0x13380u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 013382  cmp ah, 4
    X86_AT(c, 0x13382u);
    (void)x86_sub(c, g8(c, 4), 0x4u, 0, 1);
    // 013385  jne 0x1336f
    X86_AT(c, 0x13385u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1336fu); goto L_1336f; }
    X86_TICK(c, 52);
    // 013387  mov dl, 0xd5
    X86_AT(c, 0x13387u);
    s8(c, 2, 0xD5u);
    // 013389  xor al, al
    X86_AT(c, 0x13389u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01338b  out dx, al
    X86_AT(c, 0x1338bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01338c  mov dl, 0xec
    X86_AT(c, 0x1338cu);
    s8(c, 2, 0xECu);
    // 01338e  mov al, 0x7f
    X86_AT(c, 0x1338eu);
    s8(c, 0, 0x7Fu);
    // 013390  out dx, al
    X86_AT(c, 0x13390u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013391  pop edx
    X86_AT(c, 0x13391u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 013392  pop eax
    X86_AT(c, 0x13392u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 013393  xor al, al
    X86_AT(c, 0x13393u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013395  ret 
    X86_AT(c, 0x13395u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x13379u, "ran off the end of a function");
}
void f_0001337b(X86Cpu& c) {
    goto L_1337b;
L_1336f:
    X86_TICK(c, 36);
    // 01336f  mov dl, 0xe3
    X86_AT(c, 0x1336fu);
    s8(c, 2, 0xE3u);
    // 013371  mov al, ah
    X86_AT(c, 0x13371u);
    s8(c, 0, g8(c, 4));
    // 013373  out dx, al
    X86_AT(c, 0x13373u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013374  dec edx
    X86_AT(c, 0x13374u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013375  xor al, al
    X86_AT(c, 0x13375u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013377  out dx, al
    X86_AT(c, 0x13377u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013378  dec edx
    X86_AT(c, 0x13378u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013379  mov al, ah
    X86_AT(c, 0x13379u);
    s8(c, 0, g8(c, 4));
L_1337b:
    X86_TICK(c, 37);
    // 01337b  out dx, al
    X86_AT(c, 0x1337bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01337c  dec edx
    X86_AT(c, 0x1337cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01337d  xor al, al
    X86_AT(c, 0x1337du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01337f  out dx, al
    X86_AT(c, 0x1337fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013380  inc ah
    X86_AT(c, 0x13380u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 013382  cmp ah, 4
    X86_AT(c, 0x13382u);
    (void)x86_sub(c, g8(c, 4), 0x4u, 0, 1);
    // 013385  jne 0x1336f
    X86_AT(c, 0x13385u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1336fu); goto L_1336f; }
    X86_TICK(c, 52);
    // 013387  mov dl, 0xd5
    X86_AT(c, 0x13387u);
    s8(c, 2, 0xD5u);
    // 013389  xor al, al
    X86_AT(c, 0x13389u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01338b  out dx, al
    X86_AT(c, 0x1338bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01338c  mov dl, 0xec
    X86_AT(c, 0x1338cu);
    s8(c, 2, 0xECu);
    // 01338e  mov al, 0x7f
    X86_AT(c, 0x1338eu);
    s8(c, 0, 0x7Fu);
    // 013390  out dx, al
    X86_AT(c, 0x13390u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013391  pop edx
    X86_AT(c, 0x13391u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 013392  pop eax
    X86_AT(c, 0x13392u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 013393  xor al, al
    X86_AT(c, 0x13393u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013395  ret 
    X86_AT(c, 0x13395u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1337bu, "ran off the end of a function");
}
void f_0001337c(X86Cpu& c) {
    goto L_1337c;
L_1336f:
    X86_TICK(c, 48);
    // 01336f  mov dl, 0xe3
    X86_AT(c, 0x1336fu);
    s8(c, 2, 0xE3u);
    // 013371  mov al, ah
    X86_AT(c, 0x13371u);
    s8(c, 0, g8(c, 4));
    // 013373  out dx, al
    X86_AT(c, 0x13373u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013374  dec edx
    X86_AT(c, 0x13374u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013375  xor al, al
    X86_AT(c, 0x13375u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013377  out dx, al
    X86_AT(c, 0x13377u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013378  dec edx
    X86_AT(c, 0x13378u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013379  mov al, ah
    X86_AT(c, 0x13379u);
    s8(c, 0, g8(c, 4));
    // 01337b  out dx, al
    X86_AT(c, 0x1337bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
L_1337c:
    X86_TICK(c, 25);
    // 01337c  dec edx
    X86_AT(c, 0x1337cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01337d  xor al, al
    X86_AT(c, 0x1337du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01337f  out dx, al
    X86_AT(c, 0x1337fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013380  inc ah
    X86_AT(c, 0x13380u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 013382  cmp ah, 4
    X86_AT(c, 0x13382u);
    (void)x86_sub(c, g8(c, 4), 0x4u, 0, 1);
    // 013385  jne 0x1336f
    X86_AT(c, 0x13385u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1336fu); goto L_1336f; }
    X86_TICK(c, 52);
    // 013387  mov dl, 0xd5
    X86_AT(c, 0x13387u);
    s8(c, 2, 0xD5u);
    // 013389  xor al, al
    X86_AT(c, 0x13389u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01338b  out dx, al
    X86_AT(c, 0x1338bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01338c  mov dl, 0xec
    X86_AT(c, 0x1338cu);
    s8(c, 2, 0xECu);
    // 01338e  mov al, 0x7f
    X86_AT(c, 0x1338eu);
    s8(c, 0, 0x7Fu);
    // 013390  out dx, al
    X86_AT(c, 0x13390u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013391  pop edx
    X86_AT(c, 0x13391u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 013392  pop eax
    X86_AT(c, 0x13392u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 013393  xor al, al
    X86_AT(c, 0x13393u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013395  ret 
    X86_AT(c, 0x13395u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1337cu, "ran off the end of a function");
}
void f_0001337d(X86Cpu& c) {
    goto L_1337d;
L_1336f:
    X86_TICK(c, 50);
    // 01336f  mov dl, 0xe3
    X86_AT(c, 0x1336fu);
    s8(c, 2, 0xE3u);
    // 013371  mov al, ah
    X86_AT(c, 0x13371u);
    s8(c, 0, g8(c, 4));
    // 013373  out dx, al
    X86_AT(c, 0x13373u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013374  dec edx
    X86_AT(c, 0x13374u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013375  xor al, al
    X86_AT(c, 0x13375u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013377  out dx, al
    X86_AT(c, 0x13377u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013378  dec edx
    X86_AT(c, 0x13378u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013379  mov al, ah
    X86_AT(c, 0x13379u);
    s8(c, 0, g8(c, 4));
    // 01337b  out dx, al
    X86_AT(c, 0x1337bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01337c  dec edx
    X86_AT(c, 0x1337cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
L_1337d:
    X86_TICK(c, 23);
    // 01337d  xor al, al
    X86_AT(c, 0x1337du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01337f  out dx, al
    X86_AT(c, 0x1337fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013380  inc ah
    X86_AT(c, 0x13380u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 013382  cmp ah, 4
    X86_AT(c, 0x13382u);
    (void)x86_sub(c, g8(c, 4), 0x4u, 0, 1);
    // 013385  jne 0x1336f
    X86_AT(c, 0x13385u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1336fu); goto L_1336f; }
    X86_TICK(c, 52);
    // 013387  mov dl, 0xd5
    X86_AT(c, 0x13387u);
    s8(c, 2, 0xD5u);
    // 013389  xor al, al
    X86_AT(c, 0x13389u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01338b  out dx, al
    X86_AT(c, 0x1338bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01338c  mov dl, 0xec
    X86_AT(c, 0x1338cu);
    s8(c, 2, 0xECu);
    // 01338e  mov al, 0x7f
    X86_AT(c, 0x1338eu);
    s8(c, 0, 0x7Fu);
    // 013390  out dx, al
    X86_AT(c, 0x13390u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013391  pop edx
    X86_AT(c, 0x13391u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 013392  pop eax
    X86_AT(c, 0x13392u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 013393  xor al, al
    X86_AT(c, 0x13393u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013395  ret 
    X86_AT(c, 0x13395u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1337du, "ran off the end of a function");
}
void f_0001337f(X86Cpu& c) {
    goto L_1337f;
L_1336f:
    X86_TICK(c, 52);
    // 01336f  mov dl, 0xe3
    X86_AT(c, 0x1336fu);
    s8(c, 2, 0xE3u);
    // 013371  mov al, ah
    X86_AT(c, 0x13371u);
    s8(c, 0, g8(c, 4));
    // 013373  out dx, al
    X86_AT(c, 0x13373u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013374  dec edx
    X86_AT(c, 0x13374u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013375  xor al, al
    X86_AT(c, 0x13375u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013377  out dx, al
    X86_AT(c, 0x13377u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013378  dec edx
    X86_AT(c, 0x13378u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013379  mov al, ah
    X86_AT(c, 0x13379u);
    s8(c, 0, g8(c, 4));
    // 01337b  out dx, al
    X86_AT(c, 0x1337bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01337c  dec edx
    X86_AT(c, 0x1337cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01337d  xor al, al
    X86_AT(c, 0x1337du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
L_1337f:
    X86_TICK(c, 21);
    // 01337f  out dx, al
    X86_AT(c, 0x1337fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013380  inc ah
    X86_AT(c, 0x13380u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 013382  cmp ah, 4
    X86_AT(c, 0x13382u);
    (void)x86_sub(c, g8(c, 4), 0x4u, 0, 1);
    // 013385  jne 0x1336f
    X86_AT(c, 0x13385u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1336fu); goto L_1336f; }
    X86_TICK(c, 52);
    // 013387  mov dl, 0xd5
    X86_AT(c, 0x13387u);
    s8(c, 2, 0xD5u);
    // 013389  xor al, al
    X86_AT(c, 0x13389u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01338b  out dx, al
    X86_AT(c, 0x1338bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01338c  mov dl, 0xec
    X86_AT(c, 0x1338cu);
    s8(c, 2, 0xECu);
    // 01338e  mov al, 0x7f
    X86_AT(c, 0x1338eu);
    s8(c, 0, 0x7Fu);
    // 013390  out dx, al
    X86_AT(c, 0x13390u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013391  pop edx
    X86_AT(c, 0x13391u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 013392  pop eax
    X86_AT(c, 0x13392u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 013393  xor al, al
    X86_AT(c, 0x13393u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013395  ret 
    X86_AT(c, 0x13395u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1337fu, "ran off the end of a function");
}
void f_00013380(X86Cpu& c) {
    goto L_13380;
L_1336f:
    X86_TICK(c, 64);
    // 01336f  mov dl, 0xe3
    X86_AT(c, 0x1336fu);
    s8(c, 2, 0xE3u);
    // 013371  mov al, ah
    X86_AT(c, 0x13371u);
    s8(c, 0, g8(c, 4));
    // 013373  out dx, al
    X86_AT(c, 0x13373u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013374  dec edx
    X86_AT(c, 0x13374u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013375  xor al, al
    X86_AT(c, 0x13375u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013377  out dx, al
    X86_AT(c, 0x13377u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013378  dec edx
    X86_AT(c, 0x13378u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013379  mov al, ah
    X86_AT(c, 0x13379u);
    s8(c, 0, g8(c, 4));
    // 01337b  out dx, al
    X86_AT(c, 0x1337bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01337c  dec edx
    X86_AT(c, 0x1337cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01337d  xor al, al
    X86_AT(c, 0x1337du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01337f  out dx, al
    X86_AT(c, 0x1337fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
L_13380:
    X86_TICK(c, 9);
    // 013380  inc ah
    X86_AT(c, 0x13380u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 013382  cmp ah, 4
    X86_AT(c, 0x13382u);
    (void)x86_sub(c, g8(c, 4), 0x4u, 0, 1);
    // 013385  jne 0x1336f
    X86_AT(c, 0x13385u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1336fu); goto L_1336f; }
    X86_TICK(c, 52);
    // 013387  mov dl, 0xd5
    X86_AT(c, 0x13387u);
    s8(c, 2, 0xD5u);
    // 013389  xor al, al
    X86_AT(c, 0x13389u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01338b  out dx, al
    X86_AT(c, 0x1338bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01338c  mov dl, 0xec
    X86_AT(c, 0x1338cu);
    s8(c, 2, 0xECu);
    // 01338e  mov al, 0x7f
    X86_AT(c, 0x1338eu);
    s8(c, 0, 0x7Fu);
    // 013390  out dx, al
    X86_AT(c, 0x13390u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013391  pop edx
    X86_AT(c, 0x13391u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 013392  pop eax
    X86_AT(c, 0x13392u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 013393  xor al, al
    X86_AT(c, 0x13393u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013395  ret 
    X86_AT(c, 0x13395u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x13380u, "ran off the end of a function");
}
void f_00013382(X86Cpu& c) {
    goto L_13382;
L_1336f:
    X86_TICK(c, 66);
    // 01336f  mov dl, 0xe3
    X86_AT(c, 0x1336fu);
    s8(c, 2, 0xE3u);
    // 013371  mov al, ah
    X86_AT(c, 0x13371u);
    s8(c, 0, g8(c, 4));
    // 013373  out dx, al
    X86_AT(c, 0x13373u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013374  dec edx
    X86_AT(c, 0x13374u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013375  xor al, al
    X86_AT(c, 0x13375u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013377  out dx, al
    X86_AT(c, 0x13377u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013378  dec edx
    X86_AT(c, 0x13378u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013379  mov al, ah
    X86_AT(c, 0x13379u);
    s8(c, 0, g8(c, 4));
    // 01337b  out dx, al
    X86_AT(c, 0x1337bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01337c  dec edx
    X86_AT(c, 0x1337cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01337d  xor al, al
    X86_AT(c, 0x1337du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01337f  out dx, al
    X86_AT(c, 0x1337fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013380  inc ah
    X86_AT(c, 0x13380u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
L_13382:
    X86_TICK(c, 7);
    // 013382  cmp ah, 4
    X86_AT(c, 0x13382u);
    (void)x86_sub(c, g8(c, 4), 0x4u, 0, 1);
    // 013385  jne 0x1336f
    X86_AT(c, 0x13385u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1336fu); goto L_1336f; }
    X86_TICK(c, 52);
    // 013387  mov dl, 0xd5
    X86_AT(c, 0x13387u);
    s8(c, 2, 0xD5u);
    // 013389  xor al, al
    X86_AT(c, 0x13389u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01338b  out dx, al
    X86_AT(c, 0x1338bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01338c  mov dl, 0xec
    X86_AT(c, 0x1338cu);
    s8(c, 2, 0xECu);
    // 01338e  mov al, 0x7f
    X86_AT(c, 0x1338eu);
    s8(c, 0, 0x7Fu);
    // 013390  out dx, al
    X86_AT(c, 0x13390u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013391  pop edx
    X86_AT(c, 0x13391u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 013392  pop eax
    X86_AT(c, 0x13392u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 013393  xor al, al
    X86_AT(c, 0x13393u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013395  ret 
    X86_AT(c, 0x13395u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x13382u, "ran off the end of a function");
}
void f_00013385(X86Cpu& c) {
    goto L_13385;
L_1336f:
    X86_TICK(c, 68);
    // 01336f  mov dl, 0xe3
    X86_AT(c, 0x1336fu);
    s8(c, 2, 0xE3u);
    // 013371  mov al, ah
    X86_AT(c, 0x13371u);
    s8(c, 0, g8(c, 4));
    // 013373  out dx, al
    X86_AT(c, 0x13373u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013374  dec edx
    X86_AT(c, 0x13374u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013375  xor al, al
    X86_AT(c, 0x13375u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013377  out dx, al
    X86_AT(c, 0x13377u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013378  dec edx
    X86_AT(c, 0x13378u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013379  mov al, ah
    X86_AT(c, 0x13379u);
    s8(c, 0, g8(c, 4));
    // 01337b  out dx, al
    X86_AT(c, 0x1337bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01337c  dec edx
    X86_AT(c, 0x1337cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01337d  xor al, al
    X86_AT(c, 0x1337du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01337f  out dx, al
    X86_AT(c, 0x1337fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013380  inc ah
    X86_AT(c, 0x13380u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 013382  cmp ah, 4
    X86_AT(c, 0x13382u);
    (void)x86_sub(c, g8(c, 4), 0x4u, 0, 1);
L_13385:
    X86_TICK(c, 5);
    // 013385  jne 0x1336f
    X86_AT(c, 0x13385u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1336fu); goto L_1336f; }
    X86_TICK(c, 52);
    // 013387  mov dl, 0xd5
    X86_AT(c, 0x13387u);
    s8(c, 2, 0xD5u);
    // 013389  xor al, al
    X86_AT(c, 0x13389u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01338b  out dx, al
    X86_AT(c, 0x1338bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01338c  mov dl, 0xec
    X86_AT(c, 0x1338cu);
    s8(c, 2, 0xECu);
    // 01338e  mov al, 0x7f
    X86_AT(c, 0x1338eu);
    s8(c, 0, 0x7Fu);
    // 013390  out dx, al
    X86_AT(c, 0x13390u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013391  pop edx
    X86_AT(c, 0x13391u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 013392  pop eax
    X86_AT(c, 0x13392u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 013393  xor al, al
    X86_AT(c, 0x13393u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013395  ret 
    X86_AT(c, 0x13395u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x13385u, "ran off the end of a function");
}
void f_00013387(X86Cpu& c) {
    X86_TICK(c, 52);
    // 013387  mov dl, 0xd5
    X86_AT(c, 0x13387u);
    s8(c, 2, 0xD5u);
    // 013389  xor al, al
    X86_AT(c, 0x13389u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01338b  out dx, al
    X86_AT(c, 0x1338bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01338c  mov dl, 0xec
    X86_AT(c, 0x1338cu);
    s8(c, 2, 0xECu);
    // 01338e  mov al, 0x7f
    X86_AT(c, 0x1338eu);
    s8(c, 0, 0x7Fu);
    // 013390  out dx, al
    X86_AT(c, 0x13390u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013391  pop edx
    X86_AT(c, 0x13391u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 013392  pop eax
    X86_AT(c, 0x13392u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 013393  xor al, al
    X86_AT(c, 0x13393u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013395  ret 
    X86_AT(c, 0x13395u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x13387u, "ran off the end of a function");
}
void f_00013389(X86Cpu& c) {
    X86_TICK(c, 50);
    // 013389  xor al, al
    X86_AT(c, 0x13389u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01338b  out dx, al
    X86_AT(c, 0x1338bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01338c  mov dl, 0xec
    X86_AT(c, 0x1338cu);
    s8(c, 2, 0xECu);
    // 01338e  mov al, 0x7f
    X86_AT(c, 0x1338eu);
    s8(c, 0, 0x7Fu);
    // 013390  out dx, al
    X86_AT(c, 0x13390u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013391  pop edx
    X86_AT(c, 0x13391u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 013392  pop eax
    X86_AT(c, 0x13392u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 013393  xor al, al
    X86_AT(c, 0x13393u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013395  ret 
    X86_AT(c, 0x13395u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x13389u, "ran off the end of a function");
}
void f_0001338b(X86Cpu& c) {
    X86_TICK(c, 48);
    // 01338b  out dx, al
    X86_AT(c, 0x1338bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01338c  mov dl, 0xec
    X86_AT(c, 0x1338cu);
    s8(c, 2, 0xECu);
    // 01338e  mov al, 0x7f
    X86_AT(c, 0x1338eu);
    s8(c, 0, 0x7Fu);
    // 013390  out dx, al
    X86_AT(c, 0x13390u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013391  pop edx
    X86_AT(c, 0x13391u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 013392  pop eax
    X86_AT(c, 0x13392u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 013393  xor al, al
    X86_AT(c, 0x13393u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013395  ret 
    X86_AT(c, 0x13395u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1338bu, "ran off the end of a function");
}
void f_0001338c(X86Cpu& c) {
    X86_TICK(c, 36);
    // 01338c  mov dl, 0xec
    X86_AT(c, 0x1338cu);
    s8(c, 2, 0xECu);
    // 01338e  mov al, 0x7f
    X86_AT(c, 0x1338eu);
    s8(c, 0, 0x7Fu);
    // 013390  out dx, al
    X86_AT(c, 0x13390u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013391  pop edx
    X86_AT(c, 0x13391u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 013392  pop eax
    X86_AT(c, 0x13392u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 013393  xor al, al
    X86_AT(c, 0x13393u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013395  ret 
    X86_AT(c, 0x13395u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1338cu, "ran off the end of a function");
}
void f_0001338e(X86Cpu& c) {
    X86_TICK(c, 34);
    // 01338e  mov al, 0x7f
    X86_AT(c, 0x1338eu);
    s8(c, 0, 0x7Fu);
    // 013390  out dx, al
    X86_AT(c, 0x13390u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013391  pop edx
    X86_AT(c, 0x13391u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 013392  pop eax
    X86_AT(c, 0x13392u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 013393  xor al, al
    X86_AT(c, 0x13393u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013395  ret 
    X86_AT(c, 0x13395u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1338eu, "ran off the end of a function");
}
void f_00013390(X86Cpu& c) {
    X86_TICK(c, 32);
    // 013390  out dx, al
    X86_AT(c, 0x13390u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013391  pop edx
    X86_AT(c, 0x13391u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 013392  pop eax
    X86_AT(c, 0x13392u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 013393  xor al, al
    X86_AT(c, 0x13393u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013395  ret 
    X86_AT(c, 0x13395u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x13390u, "ran off the end of a function");
}
}
