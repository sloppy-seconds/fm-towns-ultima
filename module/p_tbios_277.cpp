#include "p_tbios_funcs.h"
namespace p_tbios {
void f_00011234(X86Cpu& c) {
    X86_TICK(c, 7);
    // 011234  cmp bl, 0x40
    X86_AT(c, 0x11234u);
    (void)x86_sub(c, g8(c, 3), 0x40u, 0, 1);
    // 011237  jb 0x115d4
    X86_AT(c, 0x11237u);
    if (x86_cc(c, 2)) { goto L_115d4; }
    X86_TICK(c, 7);
    // 01123d  jmp 0x120b8
    X86_AT(c, 0x1123du);
    goto L_120b8;
L_115d4:
    X86_TICK(c, 7);
    // 0115d4  cmp bl, 5
    X86_AT(c, 0x115d4u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0115d7  ja 0x1354c
    X86_AT(c, 0x115d7u);
    if (x86_cc(c, 7)) { goto L_1354c; }
    X86_TICK(c, 29);
    // 0115dd  push eax
    X86_AT(c, 0x115ddu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0115de  push ecx
    X86_AT(c, 0x115deu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0115df  push edx
    X86_AT(c, 0x115dfu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0115e0  movzx ecx, bl
    X86_AT(c, 0x115e0u);
    c.r[1] = g8(c, 3);
    // 0115e3  mov ch, byte ptr cs:[ecx + 0x13588]
    X86_AT(c, 0x115e3u);
    s8(c, 5, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x13588u))));
    // 0115ea  and byte ptr gs:[edi + 0x1e6], ch
    X86_AT(c, 0x115eau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x1E6u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 5), 1)); }
    // 0115f1  mov dx, 0x4d8
    X86_AT(c, 0x115f1u);
    s16(c, 2, 0x4D8u);
    // 0115f5  cmp bl, 2
    X86_AT(c, 0x115f5u);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 0115f8  jbe 0x115fb
    X86_AT(c, 0x115f8u);
    if (x86_cc(c, 6)) { goto L_115fb; }
    X86_TICK(c, 2);
    // 0115fa  inc ecx
    X86_AT(c, 0x115fau);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
L_115fb:
    X86_TICK(c, 11);
    // 0115fb  mov al, cl
    X86_AT(c, 0x115fbu);
    s8(c, 0, g8(c, 1));
    // 0115fd  mov ah, 0x28
    X86_AT(c, 0x115fdu);
    s8(c, 4, 0x28u);
    // 0115ff  call 0x11bf0
    X86_AT(c, 0x115ffu);
    push32(c, 0x11604u); f_00011bf0(c); X86_RET(c, 0x11604u);
    X86_TICK(c, 24);
    // 011604  pop edx
    X86_AT(c, 0x11604u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011605  pop ecx
    X86_AT(c, 0x11605u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 011606  pop eax
    X86_AT(c, 0x11606u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011607  xor al, al
    X86_AT(c, 0x11607u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011609  ret 
    X86_AT(c, 0x11609u);
    c.eip = pop32(c); return;
L_120b8:
    X86_TICK(c, 7);
    // 0120b8  cmp bl, 0x47
    X86_AT(c, 0x120b8u);
    (void)x86_sub(c, g8(c, 3), 0x47u, 0, 1);
    // 0120bb  ja 0x1354c
    X86_AT(c, 0x120bbu);
    if (x86_cc(c, 7)) { goto L_1354c; }
    X86_TICK(c, 59);
    // 0120c1  pushal 
    X86_AT(c, 0x120c1u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0120c2  sub bl, 0x40
    X86_AT(c, 0x120c2u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x40u, 0, 1)); }
    // 0120c5  movzx ebx, bl
    X86_AT(c, 0x120c5u);
    c.r[3] = g8(c, 3);
    // 0120c8  mov ah, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x120c8u);
    s8(c, 4, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 0120cf  not ah
    X86_AT(c, 0x120cfu);
    { uint32_t v = g8(c, 4); s8(c, 4, ~v & 0xFFu); }
    // 0120d1  and byte ptr gs:[edi + 0x19fa], ah
    X86_AT(c, 0x120d1u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 4), 1)); }
    // 0120d8  xor edx, edx
    X86_AT(c, 0x120d8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 0120da  lea esi, [ebx + ebx*1]
    X86_AT(c, 0x120dau);
    c.r[6] = (uint32_t)(c.r[3] + c.r[3]);
    // 0120dd  lea esi, [esi + esi*4 + 0x1aa0]
    X86_AT(c, 0x120ddu);
    c.r[6] = (uint32_t)(c.r[6] + c.r[6] * 4 + 0x1AA0u);
    // 0120e4  movzx ecx, byte ptr gs:[edi + esi*1 + 5]
    X86_AT(c, 0x120e4u);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x5u)));
    // 0120ea  mov ax, word ptr gs:[edi + esi*1 + 8]
    X86_AT(c, 0x120eau);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8u))));
    // 0120f0  test cl, cl
    X86_AT(c, 0x120f0u);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 0120f2  je 0x12104
    X86_AT(c, 0x120f2u);
    if (x86_cc(c, 4)) { goto L_12104; }
    X86_TICK(c, 7);
    // 0120f4  cmp cl, 0x7f
    X86_AT(c, 0x120f4u);
    (void)x86_sub(c, g8(c, 1), 0x7Fu, 0, 1);
    // 0120f7  je 0x12113
    X86_AT(c, 0x120f7u);
    if (x86_cc(c, 4)) { goto L_12113; }
    X86_TICK(c, 49);
    // 0120f9  div cx
    X86_AT(c, 0x120f9u);
    x86_div(c, (c.r[1] & 0xFFFFu), 2, 0x120f9u);
    // 0120fc  mov word ptr gs:[edi + esi*1 + 6], ax
    X86_AT(c, 0x120fcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)), (c.r[0] & 0xFFFFu));
    // 012102  jmp 0x12119
    X86_AT(c, 0x12102u);
    goto L_12119;
L_12104:
    X86_TICK(c, 13);
    // 012104  inc edx
    X86_AT(c, 0x12104u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 012105  mov word ptr gs:[edi + esi*1 + 6], dx
    X86_AT(c, 0x12105u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)), (c.r[2] & 0xFFFFu));
    // 01210b  mov word ptr gs:[edi + esi*1 + 8], dx
    X86_AT(c, 0x1210bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8u)), (c.r[2] & 0xFFFFu));
    // 012111  jmp 0x12119
    X86_AT(c, 0x12111u);
    goto L_12119;
L_12113:
    X86_TICK(c, 2);
    // 012113  mov word ptr gs:[edi + esi*1 + 6], dx
    X86_AT(c, 0x12113u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)), (c.r[2] & 0xFFFFu));
L_12119:
    X86_TICK(c, 36);
    // 012119  popal 
    X86_AT(c, 0x12119u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 01211a  xor al, al
    X86_AT(c, 0x1211au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01211c  ret 
    X86_AT(c, 0x1211cu);
    c.eip = pop32(c); return;
L_1354c:
    X86_TICK(c, 12);
    // 01354c  mov al, 1
    X86_AT(c, 0x1354cu);
    s8(c, 0, 0x1u);
    // 01354e  ret 
    X86_AT(c, 0x1354eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11234u, "ran off the end of a function");
}
void f_00011237(X86Cpu& c) {
    X86_TICK(c, 5);
    // 011237  jb 0x115d4
    X86_AT(c, 0x11237u);
    if (x86_cc(c, 2)) { goto L_115d4; }
    X86_TICK(c, 7);
    // 01123d  jmp 0x120b8
    X86_AT(c, 0x1123du);
    goto L_120b8;
L_115d4:
    X86_TICK(c, 7);
    // 0115d4  cmp bl, 5
    X86_AT(c, 0x115d4u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0115d7  ja 0x1354c
    X86_AT(c, 0x115d7u);
    if (x86_cc(c, 7)) { goto L_1354c; }
    X86_TICK(c, 29);
    // 0115dd  push eax
    X86_AT(c, 0x115ddu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0115de  push ecx
    X86_AT(c, 0x115deu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0115df  push edx
    X86_AT(c, 0x115dfu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0115e0  movzx ecx, bl
    X86_AT(c, 0x115e0u);
    c.r[1] = g8(c, 3);
    // 0115e3  mov ch, byte ptr cs:[ecx + 0x13588]
    X86_AT(c, 0x115e3u);
    s8(c, 5, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x13588u))));
    // 0115ea  and byte ptr gs:[edi + 0x1e6], ch
    X86_AT(c, 0x115eau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x1E6u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 5), 1)); }
    // 0115f1  mov dx, 0x4d8
    X86_AT(c, 0x115f1u);
    s16(c, 2, 0x4D8u);
    // 0115f5  cmp bl, 2
    X86_AT(c, 0x115f5u);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 0115f8  jbe 0x115fb
    X86_AT(c, 0x115f8u);
    if (x86_cc(c, 6)) { goto L_115fb; }
    X86_TICK(c, 2);
    // 0115fa  inc ecx
    X86_AT(c, 0x115fau);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
L_115fb:
    X86_TICK(c, 11);
    // 0115fb  mov al, cl
    X86_AT(c, 0x115fbu);
    s8(c, 0, g8(c, 1));
    // 0115fd  mov ah, 0x28
    X86_AT(c, 0x115fdu);
    s8(c, 4, 0x28u);
    // 0115ff  call 0x11bf0
    X86_AT(c, 0x115ffu);
    push32(c, 0x11604u); f_00011bf0(c); X86_RET(c, 0x11604u);
    X86_TICK(c, 24);
    // 011604  pop edx
    X86_AT(c, 0x11604u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011605  pop ecx
    X86_AT(c, 0x11605u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 011606  pop eax
    X86_AT(c, 0x11606u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011607  xor al, al
    X86_AT(c, 0x11607u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011609  ret 
    X86_AT(c, 0x11609u);
    c.eip = pop32(c); return;
L_120b8:
    X86_TICK(c, 7);
    // 0120b8  cmp bl, 0x47
    X86_AT(c, 0x120b8u);
    (void)x86_sub(c, g8(c, 3), 0x47u, 0, 1);
    // 0120bb  ja 0x1354c
    X86_AT(c, 0x120bbu);
    if (x86_cc(c, 7)) { goto L_1354c; }
    X86_TICK(c, 59);
    // 0120c1  pushal 
    X86_AT(c, 0x120c1u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0120c2  sub bl, 0x40
    X86_AT(c, 0x120c2u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x40u, 0, 1)); }
    // 0120c5  movzx ebx, bl
    X86_AT(c, 0x120c5u);
    c.r[3] = g8(c, 3);
    // 0120c8  mov ah, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x120c8u);
    s8(c, 4, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 0120cf  not ah
    X86_AT(c, 0x120cfu);
    { uint32_t v = g8(c, 4); s8(c, 4, ~v & 0xFFu); }
    // 0120d1  and byte ptr gs:[edi + 0x19fa], ah
    X86_AT(c, 0x120d1u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 4), 1)); }
    // 0120d8  xor edx, edx
    X86_AT(c, 0x120d8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 0120da  lea esi, [ebx + ebx*1]
    X86_AT(c, 0x120dau);
    c.r[6] = (uint32_t)(c.r[3] + c.r[3]);
    // 0120dd  lea esi, [esi + esi*4 + 0x1aa0]
    X86_AT(c, 0x120ddu);
    c.r[6] = (uint32_t)(c.r[6] + c.r[6] * 4 + 0x1AA0u);
    // 0120e4  movzx ecx, byte ptr gs:[edi + esi*1 + 5]
    X86_AT(c, 0x120e4u);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x5u)));
    // 0120ea  mov ax, word ptr gs:[edi + esi*1 + 8]
    X86_AT(c, 0x120eau);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8u))));
    // 0120f0  test cl, cl
    X86_AT(c, 0x120f0u);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 0120f2  je 0x12104
    X86_AT(c, 0x120f2u);
    if (x86_cc(c, 4)) { goto L_12104; }
    X86_TICK(c, 7);
    // 0120f4  cmp cl, 0x7f
    X86_AT(c, 0x120f4u);
    (void)x86_sub(c, g8(c, 1), 0x7Fu, 0, 1);
    // 0120f7  je 0x12113
    X86_AT(c, 0x120f7u);
    if (x86_cc(c, 4)) { goto L_12113; }
    X86_TICK(c, 49);
    // 0120f9  div cx
    X86_AT(c, 0x120f9u);
    x86_div(c, (c.r[1] & 0xFFFFu), 2, 0x120f9u);
    // 0120fc  mov word ptr gs:[edi + esi*1 + 6], ax
    X86_AT(c, 0x120fcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)), (c.r[0] & 0xFFFFu));
    // 012102  jmp 0x12119
    X86_AT(c, 0x12102u);
    goto L_12119;
L_12104:
    X86_TICK(c, 13);
    // 012104  inc edx
    X86_AT(c, 0x12104u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 012105  mov word ptr gs:[edi + esi*1 + 6], dx
    X86_AT(c, 0x12105u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)), (c.r[2] & 0xFFFFu));
    // 01210b  mov word ptr gs:[edi + esi*1 + 8], dx
    X86_AT(c, 0x1210bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8u)), (c.r[2] & 0xFFFFu));
    // 012111  jmp 0x12119
    X86_AT(c, 0x12111u);
    goto L_12119;
L_12113:
    X86_TICK(c, 2);
    // 012113  mov word ptr gs:[edi + esi*1 + 6], dx
    X86_AT(c, 0x12113u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)), (c.r[2] & 0xFFFFu));
L_12119:
    X86_TICK(c, 36);
    // 012119  popal 
    X86_AT(c, 0x12119u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 01211a  xor al, al
    X86_AT(c, 0x1211au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01211c  ret 
    X86_AT(c, 0x1211cu);
    c.eip = pop32(c); return;
L_1354c:
    X86_TICK(c, 12);
    // 01354c  mov al, 1
    X86_AT(c, 0x1354cu);
    s8(c, 0, 0x1u);
    // 01354e  ret 
    X86_AT(c, 0x1354eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11237u, "ran off the end of a function");
}
void f_00011244(X86Cpu& c) {
    X86_TICK(c, 7);
    // 011244  cmp bl, 0x40
    X86_AT(c, 0x11244u);
    (void)x86_sub(c, g8(c, 3), 0x40u, 0, 1);
    // 011247  jb 0x1160c
    X86_AT(c, 0x11247u);
    if (x86_cc(c, 2)) { goto L_1160c; }
    X86_TICK(c, 7);
    // 01124d  jmp 0x12120
    X86_AT(c, 0x1124du);
    goto L_12120;
L_1160c:
    X86_TICK(c, 7);
    // 01160c  cmp bl, 5
    X86_AT(c, 0x1160cu);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 01160f  ja 0x1354c
    X86_AT(c, 0x1160fu);
    if (x86_cc(c, 7)) { goto L_1354c; }
    X86_TICK(c, 15);
    // 011615  push eax
    X86_AT(c, 0x11615u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 011616  push ebx
    X86_AT(c, 0x11616u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 011617  push edx
    X86_AT(c, 0x11617u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 011618  push edi
    X86_AT(c, 0x11618u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 011619  cmp dl, 0x40
    X86_AT(c, 0x11619u);
    (void)x86_sub(c, g8(c, 2), 0x40u, 0, 1);
    // 01161c  ja 0x11624
    X86_AT(c, 0x1161cu);
    if (x86_cc(c, 7)) { goto L_11624; }
    X86_TICK(c, 5);
    // 01161e  jb 0x11628
    X86_AT(c, 0x1161eu);
    if (x86_cc(c, 2)) { goto L_11628; }
    X86_TICK(c, 9);
    // 011620  mov bh, 0xc0
    X86_AT(c, 0x11620u);
    s8(c, 7, 0xC0u);
    // 011622  jmp 0x1162a
    X86_AT(c, 0x11622u);
    goto L_1162a;
L_11624:
    X86_TICK(c, 9);
    // 011624  mov bh, 0x40
    X86_AT(c, 0x11624u);
    s8(c, 7, 0x40u);
    // 011626  jmp 0x1162a
    X86_AT(c, 0x11626u);
    goto L_1162a;
L_11628:
    X86_TICK(c, 2);
    // 011628  mov bh, 0x80
    X86_AT(c, 0x11628u);
    s8(c, 7, 0x80u);
L_1162a:
    X86_TICK(c, 9);
    // 01162a  mov dx, 0x4d8
    X86_AT(c, 0x1162au);
    s16(c, 2, 0x4D8u);
    // 01162e  cmp bl, 2
    X86_AT(c, 0x1162eu);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 011631  jbe 0x1163f
    X86_AT(c, 0x11631u);
    if (x86_cc(c, 6)) { goto L_1163f; }
    X86_TICK(c, 6);
    // 011633  add dl, 4
    X86_AT(c, 0x11633u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x4u, 0, 1)); }
    // 011636  add edi, 0xf0
    X86_AT(c, 0x11636u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF0u, 0, 4); }
    // 01163c  sub bl, 3
    X86_AT(c, 0x1163cu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x3u, 0, 1)); }
L_1163f:
    X86_TICK(c, 24);
    // 01163f  mov al, bh
    X86_AT(c, 0x1163fu);
    s8(c, 0, g8(c, 7));
    // 011641  movzx ebx, bl
    X86_AT(c, 0x11641u);
    c.r[3] = g8(c, 3);
    // 011644  mov bh, byte ptr gs:[edi + ebx*1 + 0xb4]
    X86_AT(c, 0x11644u);
    s8(c, 7, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xB4u))));
    // 01164c  and bh, 0x3f
    X86_AT(c, 0x1164cu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v & 0x3Fu, 1)); }
    // 01164f  or al, bh
    X86_AT(c, 0x1164fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | g8(c, 7), 1)); }
    // 011651  mov ah, 0xb4
    X86_AT(c, 0x11651u);
    s8(c, 4, 0xB4u);
    // 011653  add ah, bl
    X86_AT(c, 0x11653u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011655  call 0x11bf0
    X86_AT(c, 0x11655u);
    push32(c, 0x1165au); f_00011bf0(c); X86_RET(c, 0x1165au);
    X86_TICK(c, 28);
    // 01165a  pop edi
    X86_AT(c, 0x1165au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 01165b  pop edx
    X86_AT(c, 0x1165bu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01165c  pop ebx
    X86_AT(c, 0x1165cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 01165d  pop eax
    X86_AT(c, 0x1165du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01165e  xor al, al
    X86_AT(c, 0x1165eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011660  ret 
    X86_AT(c, 0x11660u);
    c.eip = pop32(c); return;
L_12120:
    X86_TICK(c, 7);
    // 012120  cmp bl, 0x47
    X86_AT(c, 0x12120u);
    (void)x86_sub(c, g8(c, 3), 0x47u, 0, 1);
    // 012123  ja 0x1354c
    X86_AT(c, 0x12123u);
    if (x86_cc(c, 7)) { goto L_1354c; }
    X86_TICK(c, 7);
    // 012129  test dl, 0x80
    X86_AT(c, 0x12129u);
    (void)x86_logic(c, g8(c, 2) & 0x80u, 1);
    // 01212c  jne 0x13557
    X86_AT(c, 0x1212cu);
    if (x86_cc(c, 5)) { goto L_13557; }
    X86_TICK(c, 51);
    // 012132  push eax
    X86_AT(c, 0x12132u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 012133  push ebx
    X86_AT(c, 0x12133u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 012134  push edx
    X86_AT(c, 0x12134u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 012135  sub bl, 0x40
    X86_AT(c, 0x12135u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x40u, 0, 1)); }
    // 012138  mov ah, dl
    X86_AT(c, 0x12138u);
    s8(c, 4, g8(c, 2));
    // 01213a  mov al, 0xc0
    X86_AT(c, 0x1213au);
    s8(c, 0, 0xC0u);
    // 01213c  add al, bl
    X86_AT(c, 0x1213cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 01213e  mov byte ptr gs:[edi + 0x19f7], al
    X86_AT(c, 0x1213eu);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F7u)), g8(c, 0));
    // 012145  mov dx, 0x4f7
    X86_AT(c, 0x12145u);
    s16(c, 2, 0x4F7u);
    // 012149  out dx, al
    X86_AT(c, 0x12149u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01214a  push ds
    X86_AT(c, 0x1214au);
    push32(c, c.sreg[3]);
    // 01214b  pop ds
    X86_AT(c, 0x1214bu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 01214c  push ds
    X86_AT(c, 0x1214cu);
    push32(c, c.sreg[3]);
    // 01214d  pop ds
    X86_AT(c, 0x1214du);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 01214e  mov al, 0x77
    X86_AT(c, 0x1214eu);
    s8(c, 0, 0x77u);
    // 012150  cmp ah, 0x40
    X86_AT(c, 0x12150u);
    (void)x86_sub(c, g8(c, 4), 0x40u, 0, 1);
    // 012153  jb 0x12168
    X86_AT(c, 0x12153u);
    if (x86_cc(c, 2)) { goto L_12168; }
    X86_TICK(c, 5);
    // 012155  je 0x12177
    X86_AT(c, 0x12155u);
    if (x86_cc(c, 4)) { goto L_12177; }
    X86_TICK(c, 21);
    // 012157  sub ah, 0x40
    X86_AT(c, 0x12157u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, 0x40u, 0, 1)); }
    // 01215a  shr ah, 3
    X86_AT(c, 0x1215au);
    { uint32_t v = g8(c, 4); bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 1, w); if (w) s8(c, 4, r); }
    // 01215d  xor al, ah
    X86_AT(c, 0x1215du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 01215f  mov dl, ah
    X86_AT(c, 0x1215fu);
    s8(c, 2, g8(c, 4));
    // 012161  shl dl, 4
    X86_AT(c, 0x12161u);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 2, r); }
    // 012164  add al, dl
    X86_AT(c, 0x12164u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 2), 0, 1)); }
    // 012166  jmp 0x12177
    X86_AT(c, 0x12166u);
    goto L_12177;
L_12168:
    X86_TICK(c, 14);
    // 012168  shr ah, 3
    X86_AT(c, 0x12168u);
    { uint32_t v = g8(c, 4); bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 1, w); if (w) s8(c, 4, r); }
    // 01216b  xor ah, 7
    X86_AT(c, 0x1216bu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ 0x7u, 1)); }
    // 01216e  mov dl, ah
    X86_AT(c, 0x1216eu);
    s8(c, 2, g8(c, 4));
    // 012170  add al, ah
    X86_AT(c, 0x12170u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 012172  shl dl, 4
    X86_AT(c, 0x12172u);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 2, r); }
    // 012175  xor al, dl
    X86_AT(c, 0x12175u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 2), 1)); }
L_12177:
    X86_TICK(c, 38);
    // 012177  mov dl, 0xf1
    X86_AT(c, 0x12177u);
    s8(c, 2, 0xF1u);
    // 012179  out dx, al
    X86_AT(c, 0x12179u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01217a  pop edx
    X86_AT(c, 0x1217au);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01217b  pop ebx
    X86_AT(c, 0x1217bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 01217c  pop eax
    X86_AT(c, 0x1217cu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01217d  xor al, al
    X86_AT(c, 0x1217du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01217f  ret 
    X86_AT(c, 0x1217fu);
    c.eip = pop32(c); return;
L_1354c:
    X86_TICK(c, 12);
    // 01354c  mov al, 1
    X86_AT(c, 0x1354cu);
    s8(c, 0, 0x1u);
    // 01354e  ret 
    X86_AT(c, 0x1354eu);
    c.eip = pop32(c); return;
L_13557:
    X86_TICK(c, 12);
    // 013557  mov al, 3
    X86_AT(c, 0x13557u);
    s8(c, 0, 0x3u);
    // 013559  ret 
    X86_AT(c, 0x13559u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11244u, "ran off the end of a function");
}
void f_00011254(X86Cpu& c) {
    X86_TICK(c, 7);
    // 011254  cmp bl, 0x40
    X86_AT(c, 0x11254u);
    (void)x86_sub(c, g8(c, 3), 0x40u, 0, 1);
    // 011257  jb 0x11664
    X86_AT(c, 0x11257u);
    if (x86_cc(c, 2)) { goto L_11664; }
    X86_TICK(c, 7);
    // 01125d  jmp 0x11e50
    X86_AT(c, 0x1125du);
    goto L_11e50;
L_11664:
    X86_TICK(c, 7);
    // 011664  cmp bl, 5
    X86_AT(c, 0x11664u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 011667  ja 0x1354c
    X86_AT(c, 0x11667u);
    if (x86_cc(c, 7)) { goto L_1354c; }
    X86_TICK(c, 7);
    // 01166d  test dh, 0x80
    X86_AT(c, 0x1166du);
    (void)x86_logic(c, g8(c, 6) & 0x80u, 1);
    // 011670  jne 0x13557
    X86_AT(c, 0x11670u);
    if (x86_cc(c, 5)) { goto L_13557; }
    X86_TICK(c, 37);
    // 011676  pushal 
    X86_AT(c, 0x11676u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 011677  movzx esi, dh
    X86_AT(c, 0x11677u);
    c.r[6] = g8(c, 6);
    // 01167a  shl esi, 4
    X86_AT(c, 0x1167au);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[6] = r; }
    // 01167d  lea esi, [esi + esi*2 + 0x1fc]
    X86_AT(c, 0x1167du);
    c.r[6] = (uint32_t)(c.r[6] + c.r[6] * 2 + 0x1FCu);
    // 011684  lea esi, [esi + edi*1]
    X86_AT(c, 0x11684u);
    c.r[6] = (uint32_t)(c.r[6] + c.r[7]);
    // 011687  mov dx, 0x4d8
    X86_AT(c, 0x11687u);
    s16(c, 2, 0x4D8u);
    // 01168b  cmp bl, 2
    X86_AT(c, 0x1168bu);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 01168e  jbe 0x1169c
    X86_AT(c, 0x1168eu);
    if (x86_cc(c, 6)) { goto L_1169c; }
    X86_TICK(c, 6);
    // 011690  add dl, 4
    X86_AT(c, 0x11690u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x4u, 0, 1)); }
    // 011693  add edi, 0xf0
    X86_AT(c, 0x11693u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF0u, 0, 4); }
    // 011699  sub bl, 3
    X86_AT(c, 0x11699u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x3u, 0, 1)); }
L_1169c:
    X86_TICK(c, 21);
    // 01169c  movzx ebx, bl
    X86_AT(c, 0x1169cu);
    c.r[3] = g8(c, 3);
    // 01169f  mov ah, 0x30
    X86_AT(c, 0x1169fu);
    s8(c, 4, 0x30u);
    // 0116a1  add ah, bl
    X86_AT(c, 0x116a1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 0116a3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116a3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116a5  call 0x11bf0
    X86_AT(c, 0x116a5u);
    push32(c, 0x116aau); f_00011bf0(c); X86_RET(c, 0x116aau);
    X86_TICK(c, 16);
    // 0116aa  add ah, 4
    X86_AT(c, 0x116aau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116ad  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116adu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116af  call 0x11bf0
    X86_AT(c, 0x116afu);
    push32(c, 0x116b4u); f_00011bf0(c); X86_RET(c, 0x116b4u);
    X86_TICK(c, 16);
    // 0116b4  add ah, 4
    X86_AT(c, 0x116b4u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116b7  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116b7u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116b9  call 0x11bf0
    X86_AT(c, 0x116b9u);
    push32(c, 0x116beu); f_00011bf0(c); X86_RET(c, 0x116beu);
    X86_TICK(c, 16);
    // 0116be  add ah, 4
    X86_AT(c, 0x116beu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116c1  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116c1u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116c3  call 0x11bf0
    X86_AT(c, 0x116c3u);
    push32(c, 0x116c8u); f_00011bf0(c); X86_RET(c, 0x116c8u);
    X86_TICK(c, 18);
    // 0116c8  add ah, 4
    X86_AT(c, 0x116c8u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116cb  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116cbu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116cd  mov byte ptr gs:[edi + ebx*1 + 0xc0], al
    X86_AT(c, 0x116cdu);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xC0u)), g8(c, 0));
    // 0116d5  call 0x11bf0
    X86_AT(c, 0x116d5u);
    push32(c, 0x116dau); f_00011bf0(c); X86_RET(c, 0x116dau);
    X86_TICK(c, 18);
    // 0116da  add ah, 4
    X86_AT(c, 0x116dau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116dd  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116ddu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116df  mov byte ptr gs:[edi + ebx*1 + 0xc4], al
    X86_AT(c, 0x116dfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xC4u)), g8(c, 0));
    // 0116e7  call 0x11bf0
    X86_AT(c, 0x116e7u);
    push32(c, 0x116ecu); f_00011bf0(c); X86_RET(c, 0x116ecu);
    X86_TICK(c, 18);
    // 0116ec  add ah, 4
    X86_AT(c, 0x116ecu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116ef  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116efu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116f1  mov byte ptr gs:[edi + ebx*1 + 0xc8], al
    X86_AT(c, 0x116f1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xC8u)), g8(c, 0));
    // 0116f9  call 0x11bf0
    X86_AT(c, 0x116f9u);
    push32(c, 0x116feu); f_00011bf0(c); X86_RET(c, 0x116feu);
    X86_TICK(c, 18);
    // 0116fe  add ah, 4
    X86_AT(c, 0x116feu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011701  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11701u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011703  mov byte ptr gs:[edi + ebx*1 + 0xcc], al
    X86_AT(c, 0x11703u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xCCu)), g8(c, 0));
    // 01170b  call 0x11bf0
    X86_AT(c, 0x1170bu);
    push32(c, 0x11710u); f_00011bf0(c); X86_RET(c, 0x11710u);
    X86_TICK(c, 16);
    // 011710  add ah, 4
    X86_AT(c, 0x11710u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011713  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11713u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011715  call 0x11bf0
    X86_AT(c, 0x11715u);
    push32(c, 0x1171au); f_00011bf0(c); X86_RET(c, 0x1171au);
    X86_TICK(c, 16);
    // 01171a  add ah, 4
    X86_AT(c, 0x1171au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01171d  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1171du);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01171f  call 0x11bf0
    X86_AT(c, 0x1171fu);
    push32(c, 0x11724u); f_00011bf0(c); X86_RET(c, 0x11724u);
    X86_TICK(c, 16);
    // 011724  add ah, 4
    X86_AT(c, 0x11724u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011727  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11727u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011729  call 0x11bf0
    X86_AT(c, 0x11729u);
    push32(c, 0x1172eu); f_00011bf0(c); X86_RET(c, 0x1172eu);
    X86_TICK(c, 16);
    // 01172e  add ah, 4
    X86_AT(c, 0x1172eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011731  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11731u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011733  call 0x11bf0
    X86_AT(c, 0x11733u);
    push32(c, 0x11738u); f_00011bf0(c); X86_RET(c, 0x11738u);
    X86_TICK(c, 16);
    // 011738  add ah, 4
    X86_AT(c, 0x11738u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01173b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1173bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01173d  call 0x11bf0
    X86_AT(c, 0x1173du);
    push32(c, 0x11742u); f_00011bf0(c); X86_RET(c, 0x11742u);
    X86_TICK(c, 16);
    // 011742  add ah, 4
    X86_AT(c, 0x11742u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011745  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11745u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011747  call 0x11bf0
    X86_AT(c, 0x11747u);
    push32(c, 0x1174cu); f_00011bf0(c); X86_RET(c, 0x1174cu);
    X86_TICK(c, 16);
    // 01174c  add ah, 4
    X86_AT(c, 0x1174cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01174f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1174fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011751  call 0x11bf0
    X86_AT(c, 0x11751u);
    push32(c, 0x11756u); f_00011bf0(c); X86_RET(c, 0x11756u);
    X86_TICK(c, 16);
    // 011756  add ah, 4
    X86_AT(c, 0x11756u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011759  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11759u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01175b  call 0x11bf0
    X86_AT(c, 0x1175bu);
    push32(c, 0x11760u); f_00011bf0(c); X86_RET(c, 0x11760u);
    X86_TICK(c, 16);
    // 011760  add ah, 4
    X86_AT(c, 0x11760u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011763  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11763u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011765  call 0x11bf0
    X86_AT(c, 0x11765u);
    push32(c, 0x1176au); f_00011bf0(c); X86_RET(c, 0x1176au);
    X86_TICK(c, 16);
    // 01176a  add ah, 4
    X86_AT(c, 0x1176au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01176d  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1176du);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01176f  call 0x11bf0
    X86_AT(c, 0x1176fu);
    push32(c, 0x11774u); f_00011bf0(c); X86_RET(c, 0x11774u);
    X86_TICK(c, 16);
    // 011774  add ah, 4
    X86_AT(c, 0x11774u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011777  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11777u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011779  call 0x11bf0
    X86_AT(c, 0x11779u);
    push32(c, 0x1177eu); f_00011bf0(c); X86_RET(c, 0x1177eu);
    X86_TICK(c, 16);
    // 01177e  add ah, 4
    X86_AT(c, 0x1177eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011781  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11781u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011783  call 0x11bf0
    X86_AT(c, 0x11783u);
    push32(c, 0x11788u); f_00011bf0(c); X86_RET(c, 0x11788u);
    X86_TICK(c, 16);
    // 011788  add ah, 4
    X86_AT(c, 0x11788u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01178b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1178bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01178d  call 0x11bf0
    X86_AT(c, 0x1178du);
    push32(c, 0x11792u); f_00011bf0(c); X86_RET(c, 0x11792u);
    X86_TICK(c, 16);
    // 011792  add ah, 4
    X86_AT(c, 0x11792u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011795  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11795u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011797  call 0x11bf0
    X86_AT(c, 0x11797u);
    push32(c, 0x1179cu); f_00011bf0(c); X86_RET(c, 0x1179cu);
    X86_TICK(c, 16);
    // 01179c  add ah, 4
    X86_AT(c, 0x1179cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01179f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1179fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117a1  call 0x11bf0
    X86_AT(c, 0x117a1u);
    push32(c, 0x117a6u); f_00011bf0(c); X86_RET(c, 0x117a6u);
    X86_TICK(c, 16);
    // 0117a6  add ah, 4
    X86_AT(c, 0x117a6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117a9  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117a9u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117ab  call 0x11bf0
    X86_AT(c, 0x117abu);
    push32(c, 0x117b0u); f_00011bf0(c); X86_RET(c, 0x117b0u);
    X86_TICK(c, 16);
    // 0117b0  add ah, 0x24
    X86_AT(c, 0x117b0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x24u, 0, 1)); }
    // 0117b3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117b3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117b5  call 0x11bf0
    X86_AT(c, 0x117b5u);
    push32(c, 0x117bau); f_00011bf0(c); X86_RET(c, 0x117bau);
    X86_TICK(c, 13);
    // 0117ba  add ah, 4
    X86_AT(c, 0x117bau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117bd  mov al, byte ptr gs:[esi]
    X86_AT(c, 0x117bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 0117c0  cmp al, 0x40
    X86_AT(c, 0x117c0u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0117c2  jae 0x117d0
    X86_AT(c, 0x117c2u);
    if (x86_cc(c, 3)) { goto L_117d0; }
    X86_TICK(c, 15);
    // 0117c4  movzx ebx, ah
    X86_AT(c, 0x117c4u);
    c.r[3] = g8(c, 4);
    // 0117c7  mov al, byte ptr gs:[edi + ebx*1]
    X86_AT(c, 0x117c7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3]))));
    // 0117cb  and al, 0xc0
    X86_AT(c, 0x117cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xC0u, 1)); }
    // 0117cd  or al, byte ptr gs:[esi]
    X86_AT(c, 0x117cdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 1)); }
L_117d0:
    X86_TICK(c, 7);
    // 0117d0  call 0x11bf0
    X86_AT(c, 0x117d0u);
    push32(c, 0x117d5u); f_00011bf0(c); X86_RET(c, 0x117d5u);
    X86_TICK(c, 36);
    // 0117d5  popal 
    X86_AT(c, 0x117d5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0117d6  xor al, al
    X86_AT(c, 0x117d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0117d8  ret 
    X86_AT(c, 0x117d8u);
    c.eip = pop32(c); return;
L_11e50:
    X86_TICK(c, 7);
    // 011e50  cmp bl, 0x47
    X86_AT(c, 0x11e50u);
    (void)x86_sub(c, g8(c, 3), 0x47u, 0, 1);
    // 011e53  ja 0x1354c
    X86_AT(c, 0x11e53u);
    if (x86_cc(c, 7)) { goto L_1354c; }
    X86_TICK(c, 7);
    // 011e59  cmp dh, 0x1f
    X86_AT(c, 0x11e59u);
    (void)x86_sub(c, g8(c, 6), 0x1Fu, 0, 1);
    // 011e5c  ja 0x13557
    X86_AT(c, 0x11e5cu);
    if (x86_cc(c, 7)) { goto L_13557; }
    X86_TICK(c, 39);
    // 011e62  push ebx
    X86_AT(c, 0x11e62u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 011e63  push edx
    X86_AT(c, 0x11e63u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 011e64  sub bl, 0x40
    X86_AT(c, 0x11e64u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x40u, 0, 1)); }
    // 011e67  movzx ebx, bl
    X86_AT(c, 0x11e67u);
    c.r[3] = g8(c, 3);
    // 011e6a  movzx edx, dh
    X86_AT(c, 0x11e6au);
    c.r[2] = g8(c, 6);
    // 011e6d  shl edx, 7
    X86_AT(c, 0x11e6du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x7u, 4, w); if (w) c.r[2] = r; }
    // 011e70  lea edx, [edi + edx*1 + 0x2b00]
    X86_AT(c, 0x11e70u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[2] + 0x2B00u);
    // 011e77  mov dword ptr gs:[edi + ebx*4 + 0x1a10], edx
    X86_AT(c, 0x11e77u);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] * 4 + 0x1A10u)), c.r[2]);
    // 011e7f  pop edx
    X86_AT(c, 0x11e7fu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011e80  pop ebx
    X86_AT(c, 0x11e80u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011e81  xor al, al
    X86_AT(c, 0x11e81u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e83  ret 
    X86_AT(c, 0x11e83u);
    c.eip = pop32(c); return;
L_1354c:
    X86_TICK(c, 12);
    // 01354c  mov al, 1
    X86_AT(c, 0x1354cu);
    s8(c, 0, 0x1u);
    // 01354e  ret 
    X86_AT(c, 0x1354eu);
    c.eip = pop32(c); return;
L_13557:
    X86_TICK(c, 12);
    // 013557  mov al, 3
    X86_AT(c, 0x13557u);
    s8(c, 0, 0x3u);
    // 013559  ret 
    X86_AT(c, 0x13559u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11254u, "ran off the end of a function");
}
void f_00011257(X86Cpu& c) {
    X86_TICK(c, 5);
    // 011257  jb 0x11664
    X86_AT(c, 0x11257u);
    if (x86_cc(c, 2)) { goto L_11664; }
    X86_TICK(c, 7);
    // 01125d  jmp 0x11e50
    X86_AT(c, 0x1125du);
    goto L_11e50;
L_11664:
    X86_TICK(c, 7);
    // 011664  cmp bl, 5
    X86_AT(c, 0x11664u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 011667  ja 0x1354c
    X86_AT(c, 0x11667u);
    if (x86_cc(c, 7)) { goto L_1354c; }
    X86_TICK(c, 7);
    // 01166d  test dh, 0x80
    X86_AT(c, 0x1166du);
    (void)x86_logic(c, g8(c, 6) & 0x80u, 1);
    // 011670  jne 0x13557
    X86_AT(c, 0x11670u);
    if (x86_cc(c, 5)) { goto L_13557; }
    X86_TICK(c, 37);
    // 011676  pushal 
    X86_AT(c, 0x11676u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 011677  movzx esi, dh
    X86_AT(c, 0x11677u);
    c.r[6] = g8(c, 6);
    // 01167a  shl esi, 4
    X86_AT(c, 0x1167au);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[6] = r; }
    // 01167d  lea esi, [esi + esi*2 + 0x1fc]
    X86_AT(c, 0x1167du);
    c.r[6] = (uint32_t)(c.r[6] + c.r[6] * 2 + 0x1FCu);
    // 011684  lea esi, [esi + edi*1]
    X86_AT(c, 0x11684u);
    c.r[6] = (uint32_t)(c.r[6] + c.r[7]);
    // 011687  mov dx, 0x4d8
    X86_AT(c, 0x11687u);
    s16(c, 2, 0x4D8u);
    // 01168b  cmp bl, 2
    X86_AT(c, 0x1168bu);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 01168e  jbe 0x1169c
    X86_AT(c, 0x1168eu);
    if (x86_cc(c, 6)) { goto L_1169c; }
    X86_TICK(c, 6);
    // 011690  add dl, 4
    X86_AT(c, 0x11690u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x4u, 0, 1)); }
    // 011693  add edi, 0xf0
    X86_AT(c, 0x11693u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF0u, 0, 4); }
    // 011699  sub bl, 3
    X86_AT(c, 0x11699u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x3u, 0, 1)); }
L_1169c:
    X86_TICK(c, 21);
    // 01169c  movzx ebx, bl
    X86_AT(c, 0x1169cu);
    c.r[3] = g8(c, 3);
    // 01169f  mov ah, 0x30
    X86_AT(c, 0x1169fu);
    s8(c, 4, 0x30u);
    // 0116a1  add ah, bl
    X86_AT(c, 0x116a1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 0116a3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116a3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116a5  call 0x11bf0
    X86_AT(c, 0x116a5u);
    push32(c, 0x116aau); f_00011bf0(c); X86_RET(c, 0x116aau);
    X86_TICK(c, 16);
    // 0116aa  add ah, 4
    X86_AT(c, 0x116aau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116ad  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116adu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116af  call 0x11bf0
    X86_AT(c, 0x116afu);
    push32(c, 0x116b4u); f_00011bf0(c); X86_RET(c, 0x116b4u);
    X86_TICK(c, 16);
    // 0116b4  add ah, 4
    X86_AT(c, 0x116b4u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116b7  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116b7u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116b9  call 0x11bf0
    X86_AT(c, 0x116b9u);
    push32(c, 0x116beu); f_00011bf0(c); X86_RET(c, 0x116beu);
    X86_TICK(c, 16);
    // 0116be  add ah, 4
    X86_AT(c, 0x116beu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116c1  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116c1u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116c3  call 0x11bf0
    X86_AT(c, 0x116c3u);
    push32(c, 0x116c8u); f_00011bf0(c); X86_RET(c, 0x116c8u);
    X86_TICK(c, 18);
    // 0116c8  add ah, 4
    X86_AT(c, 0x116c8u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116cb  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116cbu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116cd  mov byte ptr gs:[edi + ebx*1 + 0xc0], al
    X86_AT(c, 0x116cdu);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xC0u)), g8(c, 0));
    // 0116d5  call 0x11bf0
    X86_AT(c, 0x116d5u);
    push32(c, 0x116dau); f_00011bf0(c); X86_RET(c, 0x116dau);
    X86_TICK(c, 18);
    // 0116da  add ah, 4
    X86_AT(c, 0x116dau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116dd  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116ddu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116df  mov byte ptr gs:[edi + ebx*1 + 0xc4], al
    X86_AT(c, 0x116dfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xC4u)), g8(c, 0));
    // 0116e7  call 0x11bf0
    X86_AT(c, 0x116e7u);
    push32(c, 0x116ecu); f_00011bf0(c); X86_RET(c, 0x116ecu);
    X86_TICK(c, 18);
    // 0116ec  add ah, 4
    X86_AT(c, 0x116ecu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0116ef  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x116efu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0116f1  mov byte ptr gs:[edi + ebx*1 + 0xc8], al
    X86_AT(c, 0x116f1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xC8u)), g8(c, 0));
    // 0116f9  call 0x11bf0
    X86_AT(c, 0x116f9u);
    push32(c, 0x116feu); f_00011bf0(c); X86_RET(c, 0x116feu);
    X86_TICK(c, 18);
    // 0116fe  add ah, 4
    X86_AT(c, 0x116feu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011701  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11701u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011703  mov byte ptr gs:[edi + ebx*1 + 0xcc], al
    X86_AT(c, 0x11703u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0xCCu)), g8(c, 0));
    // 01170b  call 0x11bf0
    X86_AT(c, 0x1170bu);
    push32(c, 0x11710u); f_00011bf0(c); X86_RET(c, 0x11710u);
    X86_TICK(c, 16);
    // 011710  add ah, 4
    X86_AT(c, 0x11710u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011713  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11713u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011715  call 0x11bf0
    X86_AT(c, 0x11715u);
    push32(c, 0x1171au); f_00011bf0(c); X86_RET(c, 0x1171au);
    X86_TICK(c, 16);
    // 01171a  add ah, 4
    X86_AT(c, 0x1171au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01171d  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1171du);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01171f  call 0x11bf0
    X86_AT(c, 0x1171fu);
    push32(c, 0x11724u); f_00011bf0(c); X86_RET(c, 0x11724u);
    X86_TICK(c, 16);
    // 011724  add ah, 4
    X86_AT(c, 0x11724u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011727  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11727u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011729  call 0x11bf0
    X86_AT(c, 0x11729u);
    push32(c, 0x1172eu); f_00011bf0(c); X86_RET(c, 0x1172eu);
    X86_TICK(c, 16);
    // 01172e  add ah, 4
    X86_AT(c, 0x1172eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011731  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11731u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011733  call 0x11bf0
    X86_AT(c, 0x11733u);
    push32(c, 0x11738u); f_00011bf0(c); X86_RET(c, 0x11738u);
    X86_TICK(c, 16);
    // 011738  add ah, 4
    X86_AT(c, 0x11738u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01173b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1173bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01173d  call 0x11bf0
    X86_AT(c, 0x1173du);
    push32(c, 0x11742u); f_00011bf0(c); X86_RET(c, 0x11742u);
    X86_TICK(c, 16);
    // 011742  add ah, 4
    X86_AT(c, 0x11742u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011745  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11745u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011747  call 0x11bf0
    X86_AT(c, 0x11747u);
    push32(c, 0x1174cu); f_00011bf0(c); X86_RET(c, 0x1174cu);
    X86_TICK(c, 16);
    // 01174c  add ah, 4
    X86_AT(c, 0x1174cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01174f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1174fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011751  call 0x11bf0
    X86_AT(c, 0x11751u);
    push32(c, 0x11756u); f_00011bf0(c); X86_RET(c, 0x11756u);
    X86_TICK(c, 16);
    // 011756  add ah, 4
    X86_AT(c, 0x11756u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011759  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11759u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01175b  call 0x11bf0
    X86_AT(c, 0x1175bu);
    push32(c, 0x11760u); f_00011bf0(c); X86_RET(c, 0x11760u);
    X86_TICK(c, 16);
    // 011760  add ah, 4
    X86_AT(c, 0x11760u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011763  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11763u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011765  call 0x11bf0
    X86_AT(c, 0x11765u);
    push32(c, 0x1176au); f_00011bf0(c); X86_RET(c, 0x1176au);
    X86_TICK(c, 16);
    // 01176a  add ah, 4
    X86_AT(c, 0x1176au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01176d  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1176du);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01176f  call 0x11bf0
    X86_AT(c, 0x1176fu);
    push32(c, 0x11774u); f_00011bf0(c); X86_RET(c, 0x11774u);
    X86_TICK(c, 16);
    // 011774  add ah, 4
    X86_AT(c, 0x11774u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011777  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11777u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011779  call 0x11bf0
    X86_AT(c, 0x11779u);
    push32(c, 0x1177eu); f_00011bf0(c); X86_RET(c, 0x1177eu);
    X86_TICK(c, 16);
    // 01177e  add ah, 4
    X86_AT(c, 0x1177eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011781  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11781u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011783  call 0x11bf0
    X86_AT(c, 0x11783u);
    push32(c, 0x11788u); f_00011bf0(c); X86_RET(c, 0x11788u);
    X86_TICK(c, 16);
    // 011788  add ah, 4
    X86_AT(c, 0x11788u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01178b  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1178bu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 01178d  call 0x11bf0
    X86_AT(c, 0x1178du);
    push32(c, 0x11792u); f_00011bf0(c); X86_RET(c, 0x11792u);
    X86_TICK(c, 16);
    // 011792  add ah, 4
    X86_AT(c, 0x11792u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011795  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x11795u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 011797  call 0x11bf0
    X86_AT(c, 0x11797u);
    push32(c, 0x1179cu); f_00011bf0(c); X86_RET(c, 0x1179cu);
    X86_TICK(c, 16);
    // 01179c  add ah, 4
    X86_AT(c, 0x1179cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01179f  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x1179fu);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117a1  call 0x11bf0
    X86_AT(c, 0x117a1u);
    push32(c, 0x117a6u); f_00011bf0(c); X86_RET(c, 0x117a6u);
    X86_TICK(c, 16);
    // 0117a6  add ah, 4
    X86_AT(c, 0x117a6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117a9  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117a9u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117ab  call 0x11bf0
    X86_AT(c, 0x117abu);
    push32(c, 0x117b0u); f_00011bf0(c); X86_RET(c, 0x117b0u);
    X86_TICK(c, 16);
    // 0117b0  add ah, 0x24
    X86_AT(c, 0x117b0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x24u, 0, 1)); }
    // 0117b3  lodsb al, byte ptr gs:[esi]
    X86_AT(c, 0x117b3u);
    x86_string(c, 3, 1, 0, 4, 5);
    // 0117b5  call 0x11bf0
    X86_AT(c, 0x117b5u);
    push32(c, 0x117bau); f_00011bf0(c); X86_RET(c, 0x117bau);
    X86_TICK(c, 13);
    // 0117ba  add ah, 4
    X86_AT(c, 0x117bau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0117bd  mov al, byte ptr gs:[esi]
    X86_AT(c, 0x117bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 0117c0  cmp al, 0x40
    X86_AT(c, 0x117c0u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0117c2  jae 0x117d0
    X86_AT(c, 0x117c2u);
    if (x86_cc(c, 3)) { goto L_117d0; }
    X86_TICK(c, 15);
    // 0117c4  movzx ebx, ah
    X86_AT(c, 0x117c4u);
    c.r[3] = g8(c, 4);
    // 0117c7  mov al, byte ptr gs:[edi + ebx*1]
    X86_AT(c, 0x117c7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3]))));
    // 0117cb  and al, 0xc0
    X86_AT(c, 0x117cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xC0u, 1)); }
    // 0117cd  or al, byte ptr gs:[esi]
    X86_AT(c, 0x117cdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[6]))), 1)); }
L_117d0:
    X86_TICK(c, 7);
    // 0117d0  call 0x11bf0
    X86_AT(c, 0x117d0u);
    push32(c, 0x117d5u); f_00011bf0(c); X86_RET(c, 0x117d5u);
    X86_TICK(c, 36);
    // 0117d5  popal 
    X86_AT(c, 0x117d5u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0117d6  xor al, al
    X86_AT(c, 0x117d6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0117d8  ret 
    X86_AT(c, 0x117d8u);
    c.eip = pop32(c); return;
L_11e50:
    X86_TICK(c, 7);
    // 011e50  cmp bl, 0x47
    X86_AT(c, 0x11e50u);
    (void)x86_sub(c, g8(c, 3), 0x47u, 0, 1);
    // 011e53  ja 0x1354c
    X86_AT(c, 0x11e53u);
    if (x86_cc(c, 7)) { goto L_1354c; }
    X86_TICK(c, 7);
    // 011e59  cmp dh, 0x1f
    X86_AT(c, 0x11e59u);
    (void)x86_sub(c, g8(c, 6), 0x1Fu, 0, 1);
    // 011e5c  ja 0x13557
    X86_AT(c, 0x11e5cu);
    if (x86_cc(c, 7)) { goto L_13557; }
    X86_TICK(c, 39);
    // 011e62  push ebx
    X86_AT(c, 0x11e62u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 011e63  push edx
    X86_AT(c, 0x11e63u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 011e64  sub bl, 0x40
    X86_AT(c, 0x11e64u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x40u, 0, 1)); }
    // 011e67  movzx ebx, bl
    X86_AT(c, 0x11e67u);
    c.r[3] = g8(c, 3);
    // 011e6a  movzx edx, dh
    X86_AT(c, 0x11e6au);
    c.r[2] = g8(c, 6);
    // 011e6d  shl edx, 7
    X86_AT(c, 0x11e6du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x7u, 4, w); if (w) c.r[2] = r; }
    // 011e70  lea edx, [edi + edx*1 + 0x2b00]
    X86_AT(c, 0x11e70u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[2] + 0x2B00u);
    // 011e77  mov dword ptr gs:[edi + ebx*4 + 0x1a10], edx
    X86_AT(c, 0x11e77u);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] * 4 + 0x1A10u)), c.r[2]);
    // 011e7f  pop edx
    X86_AT(c, 0x11e7fu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011e80  pop ebx
    X86_AT(c, 0x11e80u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011e81  xor al, al
    X86_AT(c, 0x11e81u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e83  ret 
    X86_AT(c, 0x11e83u);
    c.eip = pop32(c); return;
L_1354c:
    X86_TICK(c, 12);
    // 01354c  mov al, 1
    X86_AT(c, 0x1354cu);
    s8(c, 0, 0x1u);
    // 01354e  ret 
    X86_AT(c, 0x1354eu);
    c.eip = pop32(c); return;
L_13557:
    X86_TICK(c, 12);
    // 013557  mov al, 3
    X86_AT(c, 0x13557u);
    s8(c, 0, 0x3u);
    // 013559  ret 
    X86_AT(c, 0x13559u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11257u, "ran off the end of a function");
}
void f_00011264(X86Cpu& c) {
    X86_TICK(c, 7);
    // 011264  cmp bl, 0x40
    X86_AT(c, 0x11264u);
    (void)x86_sub(c, g8(c, 3), 0x40u, 0, 1);
    // 011267  jb 0x117dc
    X86_AT(c, 0x11267u);
    if (x86_cc(c, 2)) { goto L_117dc; }
    X86_TICK(c, 7);
    // 01126d  jmp 0x11e84
    X86_AT(c, 0x1126du);
    goto L_11e84;
L_117dc:
    X86_TICK(c, 7);
    // 0117dc  test dh, 0x80
    X86_AT(c, 0x117dcu);
    (void)x86_logic(c, g8(c, 6) & 0x80u, 1);
    // 0117df  jne 0x13557
    X86_AT(c, 0x117dfu);
    if (x86_cc(c, 5)) { goto L_13557; }
    X86_TICK(c, 61);
    // 0117e5  push ecx
    X86_AT(c, 0x117e5u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0117e6  push esi
    X86_AT(c, 0x117e6u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0117e7  push edi
    X86_AT(c, 0x117e7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0117e8  push es
    X86_AT(c, 0x117e8u);
    push32(c, c.sreg[0]);
    // 0117e9  push gs
    X86_AT(c, 0x117e9u);
    push32(c, c.sreg[5]);
    // 0117eb  pop es
    X86_AT(c, 0x117ebu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0117ec  movzx ecx, dh
    X86_AT(c, 0x117ecu);
    c.r[1] = g8(c, 6);
    // 0117ef  shl ecx, 4
    X86_AT(c, 0x117efu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 0117f2  lea ecx, [ecx + ecx*2]
    X86_AT(c, 0x117f2u);
    c.r[1] = (uint32_t)(c.r[1] + c.r[1] * 2);
    // 0117f5  lea edi, [edi + ecx*1 + 0x1f4]
    X86_AT(c, 0x117f5u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[1] + 0x1F4u);
    // 0117fc  mov ecx, 0xc
    X86_AT(c, 0x117fcu);
    c.r[1] = 0xCu;
    // 011801  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x11801u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 011803  pop es
    X86_AT(c, 0x11803u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011804  pop edi
    X86_AT(c, 0x11804u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 011805  pop esi
    X86_AT(c, 0x11805u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 011806  pop ecx
    X86_AT(c, 0x11806u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 011807  xor al, al
    X86_AT(c, 0x11807u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011809  ret 
    X86_AT(c, 0x11809u);
    c.eip = pop32(c); return;
L_11e84:
    X86_TICK(c, 7);
    // 011e84  cmp dh, 0x1f
    X86_AT(c, 0x11e84u);
    (void)x86_sub(c, g8(c, 6), 0x1Fu, 0, 1);
    // 011e87  ja 0x13557
    X86_AT(c, 0x11e87u);
    if (x86_cc(c, 7)) { goto L_13557; }
    X86_TICK(c, 59);
    // 011e8d  push ecx
    X86_AT(c, 0x11e8du);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 011e8e  push esi
    X86_AT(c, 0x11e8eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 011e8f  push edi
    X86_AT(c, 0x11e8fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 011e90  push es
    X86_AT(c, 0x11e90u);
    push32(c, c.sreg[0]);
    // 011e91  push gs
    X86_AT(c, 0x11e91u);
    push32(c, c.sreg[5]);
    // 011e93  pop es
    X86_AT(c, 0x11e93u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011e94  movzx ecx, dh
    X86_AT(c, 0x11e94u);
    c.r[1] = g8(c, 6);
    // 011e97  shl ecx, 7
    X86_AT(c, 0x11e97u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x7u, 4, w); if (w) c.r[1] = r; }
    // 011e9a  lea edi, [edi + ecx*1 + 0x2b00]
    X86_AT(c, 0x11e9au);
    c.r[7] = (uint32_t)(c.r[7] + c.r[1] + 0x2B00u);
    // 011ea1  mov ecx, 0x20
    X86_AT(c, 0x11ea1u);
    c.r[1] = 0x20u;
    // 011ea6  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x11ea6u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 011ea8  pop es
    X86_AT(c, 0x11ea8u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011ea9  pop edi
    X86_AT(c, 0x11ea9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 011eaa  pop esi
    X86_AT(c, 0x11eaau);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 011eab  pop ecx
    X86_AT(c, 0x11eabu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 011eac  xor al, al
    X86_AT(c, 0x11eacu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011eae  ret 
    X86_AT(c, 0x11eaeu);
    c.eip = pop32(c); return;
L_13557:
    X86_TICK(c, 12);
    // 013557  mov al, 3
    X86_AT(c, 0x13557u);
    s8(c, 0, 0x3u);
    // 013559  ret 
    X86_AT(c, 0x13559u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11264u, "ran off the end of a function");
}
void f_00011267(X86Cpu& c) {
    X86_TICK(c, 5);
    // 011267  jb 0x117dc
    X86_AT(c, 0x11267u);
    if (x86_cc(c, 2)) { goto L_117dc; }
    X86_TICK(c, 7);
    // 01126d  jmp 0x11e84
    X86_AT(c, 0x1126du);
    goto L_11e84;
L_117dc:
    X86_TICK(c, 7);
    // 0117dc  test dh, 0x80
    X86_AT(c, 0x117dcu);
    (void)x86_logic(c, g8(c, 6) & 0x80u, 1);
    // 0117df  jne 0x13557
    X86_AT(c, 0x117dfu);
    if (x86_cc(c, 5)) { goto L_13557; }
    X86_TICK(c, 61);
    // 0117e5  push ecx
    X86_AT(c, 0x117e5u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0117e6  push esi
    X86_AT(c, 0x117e6u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0117e7  push edi
    X86_AT(c, 0x117e7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0117e8  push es
    X86_AT(c, 0x117e8u);
    push32(c, c.sreg[0]);
    // 0117e9  push gs
    X86_AT(c, 0x117e9u);
    push32(c, c.sreg[5]);
    // 0117eb  pop es
    X86_AT(c, 0x117ebu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0117ec  movzx ecx, dh
    X86_AT(c, 0x117ecu);
    c.r[1] = g8(c, 6);
    // 0117ef  shl ecx, 4
    X86_AT(c, 0x117efu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 0117f2  lea ecx, [ecx + ecx*2]
    X86_AT(c, 0x117f2u);
    c.r[1] = (uint32_t)(c.r[1] + c.r[1] * 2);
    // 0117f5  lea edi, [edi + ecx*1 + 0x1f4]
    X86_AT(c, 0x117f5u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[1] + 0x1F4u);
    // 0117fc  mov ecx, 0xc
    X86_AT(c, 0x117fcu);
    c.r[1] = 0xCu;
    // 011801  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x11801u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 011803  pop es
    X86_AT(c, 0x11803u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011804  pop edi
    X86_AT(c, 0x11804u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 011805  pop esi
    X86_AT(c, 0x11805u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 011806  pop ecx
    X86_AT(c, 0x11806u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 011807  xor al, al
    X86_AT(c, 0x11807u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011809  ret 
    X86_AT(c, 0x11809u);
    c.eip = pop32(c); return;
L_11e84:
    X86_TICK(c, 7);
    // 011e84  cmp dh, 0x1f
    X86_AT(c, 0x11e84u);
    (void)x86_sub(c, g8(c, 6), 0x1Fu, 0, 1);
    // 011e87  ja 0x13557
    X86_AT(c, 0x11e87u);
    if (x86_cc(c, 7)) { goto L_13557; }
    X86_TICK(c, 59);
    // 011e8d  push ecx
    X86_AT(c, 0x11e8du);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 011e8e  push esi
    X86_AT(c, 0x11e8eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 011e8f  push edi
    X86_AT(c, 0x11e8fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 011e90  push es
    X86_AT(c, 0x11e90u);
    push32(c, c.sreg[0]);
    // 011e91  push gs
    X86_AT(c, 0x11e91u);
    push32(c, c.sreg[5]);
    // 011e93  pop es
    X86_AT(c, 0x11e93u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011e94  movzx ecx, dh
    X86_AT(c, 0x11e94u);
    c.r[1] = g8(c, 6);
    // 011e97  shl ecx, 7
    X86_AT(c, 0x11e97u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x7u, 4, w); if (w) c.r[1] = r; }
    // 011e9a  lea edi, [edi + ecx*1 + 0x2b00]
    X86_AT(c, 0x11e9au);
    c.r[7] = (uint32_t)(c.r[7] + c.r[1] + 0x2B00u);
    // 011ea1  mov ecx, 0x20
    X86_AT(c, 0x11ea1u);
    c.r[1] = 0x20u;
    // 011ea6  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x11ea6u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 011ea8  pop es
    X86_AT(c, 0x11ea8u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011ea9  pop edi
    X86_AT(c, 0x11ea9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 011eaa  pop esi
    X86_AT(c, 0x11eaau);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 011eab  pop ecx
    X86_AT(c, 0x11eabu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 011eac  xor al, al
    X86_AT(c, 0x11eacu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011eae  ret 
    X86_AT(c, 0x11eaeu);
    c.eip = pop32(c); return;
L_13557:
    X86_TICK(c, 12);
    // 013557  mov al, 3
    X86_AT(c, 0x13557u);
    s8(c, 0, 0x3u);
    // 013559  ret 
    X86_AT(c, 0x13559u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11267u, "ran off the end of a function");
}
void f_00011274(X86Cpu& c) {
    X86_TICK(c, 7);
    // 011274  cmp bl, 0x40
    X86_AT(c, 0x11274u);
    (void)x86_sub(c, g8(c, 3), 0x40u, 0, 1);
    // 011277  jb 0x1180c
    X86_AT(c, 0x11277u);
    if (x86_cc(c, 2)) { goto L_1180c; }
    X86_TICK(c, 7);
    // 01127d  jmp 0x11eb0
    X86_AT(c, 0x1127du);
    goto L_11eb0;
L_1180c:
    X86_TICK(c, 7);
    // 01180c  test dh, 0x80
    X86_AT(c, 0x1180cu);
    (void)x86_logic(c, g8(c, 6) & 0x80u, 1);
    // 01180f  jne 0x13557
    X86_AT(c, 0x1180fu);
    if (x86_cc(c, 5)) { goto L_13557; }
    X86_TICK(c, 64);
    // 011815  push ecx
    X86_AT(c, 0x11815u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 011816  push esi
    X86_AT(c, 0x11816u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 011817  push edi
    X86_AT(c, 0x11817u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 011818  push es
    X86_AT(c, 0x11818u);
    push32(c, c.sreg[0]);
    // 011819  push ds
    X86_AT(c, 0x11819u);
    push32(c, c.sreg[3]);
    // 01181a  pop es
    X86_AT(c, 0x1181au);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01181b  movzx ecx, dh
    X86_AT(c, 0x1181bu);
    c.r[1] = g8(c, 6);
    // 01181e  shl ecx, 4
    X86_AT(c, 0x1181eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 011821  lea ecx, [ecx + ecx*2 + 0x1f4]
    X86_AT(c, 0x11821u);
    c.r[1] = (uint32_t)(c.r[1] + c.r[1] * 2 + 0x1F4u);
    // 011828  add edi, ecx
    X86_AT(c, 0x11828u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[1], 0, 4); }
    // 01182a  xchg esi, edi
    X86_AT(c, 0x1182au);
    { uint32_t t = c.r[6]; c.r[6] = c.r[7]; c.r[7] = t; }
    // 01182c  mov ecx, 0xc
    X86_AT(c, 0x1182cu);
    c.r[1] = 0xCu;
    // 011831  movsd dword ptr es:[edi], dword ptr gs:[esi]
    X86_AT(c, 0x11831u);
    x86_string(c, 0, 4, 243, 4, 5);
    // 011834  pop es
    X86_AT(c, 0x11834u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011835  pop edi
    X86_AT(c, 0x11835u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 011836  pop esi
    X86_AT(c, 0x11836u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 011837  pop ecx
    X86_AT(c, 0x11837u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 011838  xor al, al
    X86_AT(c, 0x11838u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01183a  ret 
    X86_AT(c, 0x1183au);
    c.eip = pop32(c); return;
L_11eb0:
    X86_TICK(c, 7);
    // 011eb0  cmp dh, 0x1f
    X86_AT(c, 0x11eb0u);
    (void)x86_sub(c, g8(c, 6), 0x1Fu, 0, 1);
    // 011eb3  ja 0x13557
    X86_AT(c, 0x11eb3u);
    if (x86_cc(c, 7)) { goto L_13557; }
    X86_TICK(c, 62);
    // 011eb9  push ecx
    X86_AT(c, 0x11eb9u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 011eba  push esi
    X86_AT(c, 0x11ebau);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 011ebb  push edi
    X86_AT(c, 0x11ebbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 011ebc  push es
    X86_AT(c, 0x11ebcu);
    push32(c, c.sreg[0]);
    // 011ebd  push ds
    X86_AT(c, 0x11ebdu);
    push32(c, c.sreg[3]);
    // 011ebe  pop es
    X86_AT(c, 0x11ebeu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011ebf  movzx ecx, dh
    X86_AT(c, 0x11ebfu);
    c.r[1] = g8(c, 6);
    // 011ec2  shl ecx, 7
    X86_AT(c, 0x11ec2u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x7u, 4, w); if (w) c.r[1] = r; }
    // 011ec5  lea edi, [edi + ecx*1 + 0x2b00]
    X86_AT(c, 0x11ec5u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[1] + 0x2B00u);
    // 011ecc  xchg edi, esi
    X86_AT(c, 0x11eccu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[6]; c.r[6] = t; }
    // 011ece  mov ecx, 0x20
    X86_AT(c, 0x11eceu);
    c.r[1] = 0x20u;
    // 011ed3  movsd dword ptr es:[edi], dword ptr gs:[esi]
    X86_AT(c, 0x11ed3u);
    x86_string(c, 0, 4, 243, 4, 5);
    // 011ed6  pop es
    X86_AT(c, 0x11ed6u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 011ed7  pop edi
    X86_AT(c, 0x11ed7u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 011ed8  pop esi
    X86_AT(c, 0x11ed8u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 011ed9  pop ecx
    X86_AT(c, 0x11ed9u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 011eda  xor al, al
    X86_AT(c, 0x11edau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011edc  ret 
    X86_AT(c, 0x11edcu);
    c.eip = pop32(c); return;
L_13557:
    X86_TICK(c, 12);
    // 013557  mov al, 3
    X86_AT(c, 0x13557u);
    s8(c, 0, 0x3u);
    // 013559  ret 
    X86_AT(c, 0x13559u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11274u, "ran off the end of a function");
}
void f_00011284(X86Cpu& c) {
    X86_TICK(c, 7);
    // 011284  cmp bl, 0x40
    X86_AT(c, 0x11284u);
    (void)x86_sub(c, g8(c, 3), 0x40u, 0, 1);
    // 011287  jb 0x1183c
    X86_AT(c, 0x11287u);
    if (x86_cc(c, 2)) { goto L_1183c; }
    X86_TICK(c, 7);
    // 01128d  jmp 0x12228
    X86_AT(c, 0x1128du);
    goto L_12228;
L_1183c:
    X86_TICK(c, 7);
    // 01183c  cmp bl, 5
    X86_AT(c, 0x1183cu);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 01183f  ja 0x1354c
    X86_AT(c, 0x1183fu);
    if (x86_cc(c, 7)) { goto L_1354c; }
    X86_TICK(c, 38);
    // 011845  pushal 
    X86_AT(c, 0x11845u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 011846  movzx ebx, bl
    X86_AT(c, 0x11846u);
    c.r[3] = g8(c, 3);
    // 011849  lea ebp, [edi + ebx*2 + 0x1e8]
    X86_AT(c, 0x11849u);
    c.r[5] = (uint32_t)(c.r[7] + c.r[3] * 2 + 0x1E8u);
    // 011850  mov bh, byte ptr gs:[edi + ebx*1 + 0x1e0]
    X86_AT(c, 0x11850u);
    s8(c, 7, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1E0u))));
    // 011858  mov ecx, edx
    X86_AT(c, 0x11858u);
    c.r[1] = c.r[2];
    // 01185a  mov dx, 0x4d8
    X86_AT(c, 0x1185au);
    s16(c, 2, 0x4D8u);
    // 01185e  cmp bl, 2
    X86_AT(c, 0x1185eu);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 011861  jbe 0x1186f
    X86_AT(c, 0x11861u);
    if (x86_cc(c, 6)) { goto L_1186f; }
    X86_TICK(c, 6);
    // 011863  add dl, 4
    X86_AT(c, 0x11863u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x4u, 0, 1)); }
    // 011866  add edi, 0xf0
    X86_AT(c, 0x11866u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF0u, 0, 4); }
    // 01186c  sub bl, 3
    X86_AT(c, 0x1186cu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x3u, 0, 1)); }
L_1186f:
    X86_TICK(c, 11);
    // 01186f  push edx
    X86_AT(c, 0x1186fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 011870  xor edx, edx
    X86_AT(c, 0x11870u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 011872  test cx, cx
    X86_AT(c, 0x11872u);
    (void)x86_logic(c, (c.r[1] & 0xFFFFu) & (c.r[1] & 0xFFFFu), 2);
    // 011875  jl 0x118a0
    X86_AT(c, 0x11875u);
    if (x86_cc(c, 12)) { goto L_118a0; }
    X86_TICK(c, 5);
    // 011877  jg 0x118fc
    X86_AT(c, 0x11877u);
    if (x86_cc(c, 15)) { goto L_118fc; }
    X86_TICK(c, 9);
    // 01187d  mov word ptr gs:[ebp], dx
    X86_AT(c, 0x1187du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5])), (c.r[2] & 0xFFFFu));
    // 011882  test bh, bh
    X86_AT(c, 0x11882u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 011884  je 0x118f4
    X86_AT(c, 0x11884u);
    if (x86_cc(c, 4)) { goto L_118f4; }
    X86_TICK(c, 61);
    // 011886  movzx eax, bh
    X86_AT(c, 0x11886u);
    c.r[0] = g8(c, 7);
    // 011889  dec eax
    X86_AT(c, 0x11889u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 01188a  mov bh, 0xc
    X86_AT(c, 0x1188au);
    s8(c, 7, 0xCu);
    // 01188c  div bh
    X86_AT(c, 0x1188cu);
    x86_div(c, g8(c, 7), 1, 0x1188cu);
    // 01188e  movzx ecx, ah
    X86_AT(c, 0x1188eu);
    c.r[1] = g8(c, 4);
    // 011891  mov cx, word ptr cs:[ecx*2 + 0x13590]
    X86_AT(c, 0x11891u);
    s16(c, 1, rd16((c.sbase[1] + (uint32_t)(c.r[1] * 2 + 0x13590u))));
    // 01189a  jmp 0x1195e
    X86_AT(c, 0x1189au);
    goto L_1195e;
L_118a0:
    X86_TICK(c, 7);
    // 0118a0  test bh, bh
    X86_AT(c, 0x118a0u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 0118a2  je 0x118f4
    X86_AT(c, 0x118a2u);
    if (x86_cc(c, 4)) { goto L_118f4; }
    X86_TICK(c, 7);
    // 0118a4  cmp cx, 0xe0b8
    X86_AT(c, 0x118a4u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0xE0B8u, 0, 2);
    // 0118a9  jge 0x118af
    X86_AT(c, 0x118a9u);
    if (x86_cc(c, 13)) { goto L_118af; }
    X86_TICK(c, 2);
    // 0118ab  mov cx, 0xe0b8
    X86_AT(c, 0x118abu);
    s16(c, 1, 0xE0B8u);
L_118af:
    X86_TICK(c, 118);
    // 0118af  neg cx
    X86_AT(c, 0x118afu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_neg(c, v, 2)); }
    // 0118b2  mov eax, ecx
    X86_AT(c, 0x118b2u);
    c.r[0] = c.r[1];
    // 0118b4  mov cx, 0xd
    X86_AT(c, 0x118b4u);
    s16(c, 1, 0xDu);
    // 0118b8  div cx
    X86_AT(c, 0x118b8u);
    x86_div(c, (c.r[1] & 0xFFFFu), 2, 0x118b8u);
    // 0118bb  mov si, ax
    X86_AT(c, 0x118bbu);
    s16(c, 6, (c.r[0] & 0xFFFFu));
    // 0118be  movzx eax, bh
    X86_AT(c, 0x118beu);
    c.r[0] = g8(c, 7);
    // 0118c1  dec eax
    X86_AT(c, 0x118c1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0118c2  mov bh, 0xc
    X86_AT(c, 0x118c2u);
    s8(c, 7, 0xCu);
    // 0118c4  div bh
    X86_AT(c, 0x118c4u);
    x86_div(c, g8(c, 7), 1, 0x118c4u);
    // 0118c6  movzx ecx, ah
    X86_AT(c, 0x118c6u);
    c.r[1] = g8(c, 4);
    // 0118c9  mov cx, word ptr cs:[ecx*2 + 0x13590]
    X86_AT(c, 0x118c9u);
    s16(c, 1, rd16((c.sbase[1] + (uint32_t)(c.r[1] * 2 + 0x13590u))));
    // 0118d2  sub cx, si
    X86_AT(c, 0x118d2u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 0118d5  neg si
    X86_AT(c, 0x118d5u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_neg(c, v, 2)); }
    // 0118d8  movzx ebx, bl
    X86_AT(c, 0x118d8u);
    c.r[3] = g8(c, 3);
    // 0118db  mov word ptr gs:[ebp], si
    X86_AT(c, 0x118dbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5])), (c.r[6] & 0xFFFFu));
    // 0118e0  cmp cx, 0x268
    X86_AT(c, 0x118e0u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x268u, 0, 2);
    // 0118e5  jge 0x1195e
    X86_AT(c, 0x118e5u);
    if (x86_cc(c, 13)) { goto L_1195e; }
    X86_TICK(c, 7);
    // 0118e7  test al, al
    X86_AT(c, 0x118e7u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0118e9  je 0x118f4
    X86_AT(c, 0x118e9u);
    if (x86_cc(c, 4)) { goto L_118f4; }
    X86_TICK(c, 11);
    // 0118eb  add cx, 0x268
    X86_AT(c, 0x118ebu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, 0x268u, 0, 2)); }
    // 0118f0  dec eax
    X86_AT(c, 0x118f0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0118f1  jmp 0x1195e
    X86_AT(c, 0x118f1u);
    goto L_1195e;
L_118f4:
    X86_TICK(c, 11);
    // 0118f4  mov cx, 0x268
    X86_AT(c, 0x118f4u);
    s16(c, 1, 0x268u);
    // 0118f8  xor al, al
    X86_AT(c, 0x118f8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0118fa  jmp 0x1195e
    X86_AT(c, 0x118fau);
    goto L_1195e;
L_118fc:
    X86_TICK(c, 7);
    // 0118fc  cmp bh, 0x60
    X86_AT(c, 0x118fcu);
    (void)x86_sub(c, g8(c, 7), 0x60u, 0, 1);
    // 0118ff  jae 0x11958
    X86_AT(c, 0x118ffu);
    if (x86_cc(c, 3)) { goto L_11958; }
    X86_TICK(c, 7);
    // 011901  cmp cx, 0x1f48
    X86_AT(c, 0x11901u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x1F48u, 0, 2);
    // 011906  jle 0x1190c
    X86_AT(c, 0x11906u);
    if (x86_cc(c, 14)) { goto L_1190c; }
    X86_TICK(c, 2);
    // 011908  mov cx, 0x1f48
    X86_AT(c, 0x11908u);
    s16(c, 1, 0x1F48u);
L_1190c:
    X86_TICK(c, 53);
    // 01190c  mov eax, ecx
    X86_AT(c, 0x1190cu);
    c.r[0] = c.r[1];
    // 01190e  mov cx, 0xd
    X86_AT(c, 0x1190eu);
    s16(c, 1, 0xDu);
    // 011912  div cx
    X86_AT(c, 0x11912u);
    x86_div(c, (c.r[1] & 0xFFFFu), 2, 0x11912u);
    // 011915  mov si, ax
    X86_AT(c, 0x11915u);
    s16(c, 6, (c.r[0] & 0xFFFFu));
    // 011918  test bh, bh
    X86_AT(c, 0x11918u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 01191a  jne 0x11924
    X86_AT(c, 0x1191au);
    if (x86_cc(c, 5)) { goto L_11924; }
    X86_TICK(c, 11);
    // 01191c  mov cx, 0x268
    X86_AT(c, 0x1191cu);
    s16(c, 1, 0x268u);
    // 011920  xor al, al
    X86_AT(c, 0x11920u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011922  jmp 0x11938
    X86_AT(c, 0x11922u);
    goto L_11938;
L_11924:
    X86_TICK(c, 54);
    // 011924  movzx eax, bh
    X86_AT(c, 0x11924u);
    c.r[0] = g8(c, 7);
    // 011927  dec eax
    X86_AT(c, 0x11927u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 011928  mov bh, 0xc
    X86_AT(c, 0x11928u);
    s8(c, 7, 0xCu);
    // 01192a  div bh
    X86_AT(c, 0x1192au);
    x86_div(c, g8(c, 7), 1, 0x1192au);
    // 01192c  movzx ecx, ah
    X86_AT(c, 0x1192cu);
    c.r[1] = g8(c, 4);
    // 01192f  mov cx, word ptr cs:[ecx*2 + 0x13590]
    X86_AT(c, 0x1192fu);
    s16(c, 1, rd16((c.sbase[1] + (uint32_t)(c.r[1] * 2 + 0x13590u))));
L_11938:
    X86_TICK(c, 14);
    // 011938  add cx, si
    X86_AT(c, 0x11938u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 01193b  movzx ebx, bl
    X86_AT(c, 0x1193bu);
    c.r[3] = g8(c, 3);
    // 01193e  mov word ptr gs:[ebp], si
    X86_AT(c, 0x1193eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5])), (c.r[6] & 0xFFFFu));
    // 011943  cmp cx, 0x4d0
    X86_AT(c, 0x11943u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x4D0u, 0, 2);
    // 011948  jbe 0x11980
    X86_AT(c, 0x11948u);
    if (x86_cc(c, 6)) { goto L_11980; }
    X86_TICK(c, 7);
    // 01194a  cmp al, 7
    X86_AT(c, 0x1194au);
    (void)x86_sub(c, g8(c, 0), 0x7u, 0, 1);
    // 01194c  jae 0x11958
    X86_AT(c, 0x1194cu);
    if (x86_cc(c, 3)) { goto L_11958; }
    X86_TICK(c, 11);
    // 01194e  sub cx, 0x268
    X86_AT(c, 0x1194eu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, 0x268u, 0, 2)); }
    // 011953  inc eax
    X86_AT(c, 0x11953u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011954  jmp 0x1195e
    X86_AT(c, 0x11954u);
    goto L_1195e;
L_11958:
    X86_TICK(c, 4);
    // 011958  mov cx, 0x48c
    X86_AT(c, 0x11958u);
    s16(c, 1, 0x48Cu);
    // 01195c  mov al, 7
    X86_AT(c, 0x1195cu);
    s8(c, 0, 0x7u);
L_1195e:
    X86_TICK(c, 22);
    // 01195e  pop edx
    X86_AT(c, 0x1195eu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01195f  shl al, 3
    X86_AT(c, 0x1195fu);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 0, r); }
    // 011962  or ch, al
    X86_AT(c, 0x11962u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v | g8(c, 0), 1)); }
    // 011964  mov ah, 0xa4
    X86_AT(c, 0x11964u);
    s8(c, 4, 0xA4u);
    // 011966  add ah, bl
    X86_AT(c, 0x11966u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011968  mov al, ch
    X86_AT(c, 0x11968u);
    s8(c, 0, g8(c, 5));
    // 01196a  call 0x11bf0
    X86_AT(c, 0x1196au);
    push32(c, 0x1196fu); f_00011bf0(c); X86_RET(c, 0x1196fu);
    X86_TICK(c, 11);
    // 01196f  sub ah, 4
    X86_AT(c, 0x1196fu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, 0x4u, 0, 1)); }
    // 011972  mov al, cl
    X86_AT(c, 0x11972u);
    s8(c, 0, g8(c, 1));
    // 011974  call 0x11bf0
    X86_AT(c, 0x11974u);
    push32(c, 0x11979u); f_00011bf0(c); X86_RET(c, 0x11979u);
    X86_TICK(c, 36);
    // 011979  popal 
    X86_AT(c, 0x11979u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 01197a  xor al, al
    X86_AT(c, 0x1197au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01197c  ret 
    X86_AT(c, 0x1197cu);
    c.eip = pop32(c); return;
L_11980:
    X86_TICK(c, 7);
    // 011980  cmp al, 7
    X86_AT(c, 0x11980u);
    (void)x86_sub(c, g8(c, 0), 0x7u, 0, 1);
    // 011982  jb 0x1195e
    X86_AT(c, 0x11982u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x1195eu); goto L_1195e; }
    X86_TICK(c, 7);
    // 011984  cmp cx, 0x48c
    X86_AT(c, 0x11984u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x48Cu, 0, 2);
    // 011989  jbe 0x1195e
    X86_AT(c, 0x11989u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0x1195eu); goto L_1195e; }
    X86_TICK(c, 9);
    // 01198b  mov cx, 0x48c
    X86_AT(c, 0x1198bu);
    s16(c, 1, 0x48Cu);
    // 01198f  jmp 0x1195e
    X86_AT(c, 0x1198fu);
    X86_POLL(c, 0x1195eu); goto L_1195e;
L_12228:
    X86_TICK(c, 7);
    // 012228  cmp bl, 0x47
    X86_AT(c, 0x12228u);
    (void)x86_sub(c, g8(c, 3), 0x47u, 0, 1);
    // 01222b  ja 0x1354c
    X86_AT(c, 0x1222bu);
    if (x86_cc(c, 7)) { goto L_1354c; }
    X86_TICK(c, 7);
    // 012231  cmp dx, 0x1fff
    X86_AT(c, 0x12231u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x1FFFu, 0, 2);
    // 012236  jg 0x13557
    X86_AT(c, 0x12236u);
    if (x86_cc(c, 15)) { goto L_13557; }
    X86_TICK(c, 7);
    // 01223c  cmp dx, 0xe000
    X86_AT(c, 0x1223cu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xE000u, 0, 2);
    // 012241  jl 0x13557
    X86_AT(c, 0x12241u);
    if (x86_cc(c, 12)) { goto L_13557; }
    X86_TICK(c, 65);
    // 012247  pushal 
    X86_AT(c, 0x12247u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 012248  sub bl, 0x40
    X86_AT(c, 0x12248u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x40u, 0, 1)); }
    // 01224b  movzx ebx, bl
    X86_AT(c, 0x1224bu);
    c.r[3] = g8(c, 3);
    // 01224e  movsx ecx, dx
    X86_AT(c, 0x1224eu);
    c.r[1] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 012251  mov al, bl
    X86_AT(c, 0x12251u);
    s8(c, 0, g8(c, 3));
    // 012253  add al, 0xc0
    X86_AT(c, 0x12253u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0xC0u, 0, 1)); }
    // 012255  mov byte ptr gs:[edi + 0x19f7], al
    X86_AT(c, 0x12255u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F7u)), g8(c, 0));
    // 01225c  mov dx, 0x4f7
    X86_AT(c, 0x1225cu);
    s16(c, 2, 0x4F7u);
    // 012260  out dx, al
    X86_AT(c, 0x12260u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012261  push ds
    X86_AT(c, 0x12261u);
    push32(c, c.sreg[3]);
    // 012262  pop ds
    X86_AT(c, 0x12262u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012263  push ds
    X86_AT(c, 0x12263u);
    push32(c, c.sreg[3]);
    // 012264  pop ds
    X86_AT(c, 0x12264u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012265  test ecx, ecx
    X86_AT(c, 0x12265u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 012267  jg 0x12274
    X86_AT(c, 0x12267u);
    if (x86_cc(c, 15)) { goto L_12274; }
    X86_TICK(c, 5);
    // 012269  jl 0x12290
    X86_AT(c, 0x12269u);
    if (x86_cc(c, 12)) { goto L_12290; }
    X86_TICK(c, 9);
    // 01226b  mov eax, 0x4000
    X86_AT(c, 0x1226bu);
    c.r[0] = 0x4000u;
    // 012270  jmp 0x122a5
    X86_AT(c, 0x12270u);
    goto L_122a5;
L_12274:
    X86_TICK(c, 64);
    // 012274  inc ecx
    X86_AT(c, 0x12274u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 012275  add ecx, 0x2000
    X86_AT(c, 0x12275u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x2000u, 0, 4); }
    // 01227b  shl ecx, 0x10
    X86_AT(c, 0x1227bu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 01227e  xor edx, edx
    X86_AT(c, 0x1227eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 012280  mov eax, 0x2000
    X86_AT(c, 0x12280u);
    c.r[0] = 0x2000u;
    // 012285  xchg ecx, eax
    X86_AT(c, 0x12285u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
    // 012286  div ecx
    X86_AT(c, 0x12286u);
    x86_div(c, c.r[1], 4, 0x12286u);
    // 012288  shr eax, 2
    X86_AT(c, 0x12288u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[0] = r; }
    // 01228b  jmp 0x122a5
    X86_AT(c, 0x1228bu);
    goto L_122a5;
L_12290:
    X86_TICK(c, 53);
    // 012290  neg ecx
    X86_AT(c, 0x12290u);
    { uint32_t v = c.r[1]; c.r[1] = x86_neg(c, v, 4); }
    // 012292  inc ecx
    X86_AT(c, 0x12292u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 012293  add ecx, 0x2000
    X86_AT(c, 0x12293u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x2000u, 0, 4); }
    // 012299  mov eax, 0x20000000
    X86_AT(c, 0x12299u);
    c.r[0] = 0x20000000u;
    // 01229e  xor edx, edx
    X86_AT(c, 0x1229eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 0122a0  div ecx
    X86_AT(c, 0x122a0u);
    x86_div(c, c.r[1], 4, 0x122a0u);
    // 0122a2  shr eax, 2
    X86_AT(c, 0x122a2u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[0] = r; }
L_122a5:
    X86_TICK(c, 49);
    // 0122a5  mov word ptr gs:[edi + ebx*2 + 0x1af0], ax
    X86_AT(c, 0x122a5u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] * 2 + 0x1AF0u)), (c.r[0] & 0xFFFFu));
    // 0122ae  movzx edx, word ptr gs:[edi + ebx*2 + 0x110]
    X86_AT(c, 0x122aeu);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] * 2 + 0x110u)));
    // 0122b7  mul edx
    X86_AT(c, 0x122b7u);
    x86_mul(c, c.r[2], 4);
    // 0122b9  shr eax, 0xe
    X86_AT(c, 0x122b9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0xEu, 4, w); if (w) c.r[0] = r; }
    // 0122bc  mov ch, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x122bcu);
    s8(c, 5, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 0122c3  test byte ptr gs:[edi + 0x19fb], ch
    X86_AT(c, 0x122c3u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FBu))) & g8(c, 5), 1);
    // 0122ca  je 0x122d6
    X86_AT(c, 0x122cau);
    if (x86_cc(c, 4)) { goto L_122d6; }
    X86_TICK(c, 7);
    // 0122cc  cmp ax, 0x800
    X86_AT(c, 0x122ccu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x800u, 0, 2);
    // 0122d0  ja 0x13577
    X86_AT(c, 0x122d0u);
    if (x86_cc(c, 7)) { goto L_13577; }
L_122d6:
    X86_TICK(c, 78);
    // 0122d6  mov dx, 0x4f2
    X86_AT(c, 0x122d6u);
    s16(c, 2, 0x4F2u);
    // 0122da  out dx, al
    X86_AT(c, 0x122dau);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0122db  push ds
    X86_AT(c, 0x122dbu);
    push32(c, c.sreg[3]);
    // 0122dc  pop ds
    X86_AT(c, 0x122dcu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0122dd  push ds
    X86_AT(c, 0x122ddu);
    push32(c, c.sreg[3]);
    // 0122de  pop ds
    X86_AT(c, 0x122deu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0122df  inc edx
    X86_AT(c, 0x122dfu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0122e0  mov al, ah
    X86_AT(c, 0x122e0u);
    s8(c, 0, g8(c, 4));
    // 0122e2  out dx, al
    X86_AT(c, 0x122e2u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0122e3  popal 
    X86_AT(c, 0x122e3u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0122e4  xor al, al
    X86_AT(c, 0x122e4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0122e6  ret 
    X86_AT(c, 0x122e6u);
    c.eip = pop32(c); return;
L_1354c:
    X86_TICK(c, 12);
    // 01354c  mov al, 1
    X86_AT(c, 0x1354cu);
    s8(c, 0, 0x1u);
    // 01354e  ret 
    X86_AT(c, 0x1354eu);
    c.eip = pop32(c); return;
L_13557:
    X86_TICK(c, 12);
    // 013557  mov al, 3
    X86_AT(c, 0x13557u);
    s8(c, 0, 0x3u);
    // 013559  ret 
    X86_AT(c, 0x13559u);
    c.eip = pop32(c); return;
L_13577:
    X86_TICK(c, 36);
    // 013577  popal 
    X86_AT(c, 0x13577u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 013578  mov al, 0xb
    X86_AT(c, 0x13578u);
    s8(c, 0, 0xBu);
    // 01357a  ret 
    X86_AT(c, 0x1357au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11284u, "ran off the end of a function");
}
void f_00011294(X86Cpu& c) {
    X86_TICK(c, 7);
    // 011294  cmp bl, 0x40
    X86_AT(c, 0x11294u);
    (void)x86_sub(c, g8(c, 3), 0x40u, 0, 1);
    // 011297  jb 0x11994
    X86_AT(c, 0x11297u);
    if (x86_cc(c, 2)) { goto L_11994; }
    X86_TICK(c, 7);
    // 01129d  jmp 0x12180
    X86_AT(c, 0x1129du);
    goto L_12180;
L_11994:
    X86_TICK(c, 7);
    // 011994  cmp bl, 5
    X86_AT(c, 0x11994u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 011997  ja 0x1354c
    X86_AT(c, 0x11997u);
    if (x86_cc(c, 7)) { goto L_1354c; }
    X86_TICK(c, 7);
    // 01199d  test dl, 0x80
    X86_AT(c, 0x1199du);
    (void)x86_logic(c, g8(c, 2) & 0x80u, 1);
    // 0119a0  jne 0x13557
    X86_AT(c, 0x119a0u);
    if (x86_cc(c, 5)) { goto L_13557; }
    X86_TICK(c, 29);
    // 0119a6  pushal 
    X86_AT(c, 0x119a6u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0119a7  mov cl, dl
    X86_AT(c, 0x119a7u);
    s8(c, 1, g8(c, 2));
    // 0119a9  mov dx, 0x4d8
    X86_AT(c, 0x119a9u);
    s16(c, 2, 0x4D8u);
    // 0119ad  cmp bl, 2
    X86_AT(c, 0x119adu);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 0119b0  jbe 0x119be
    X86_AT(c, 0x119b0u);
    if (x86_cc(c, 6)) { goto L_119be; }
    X86_TICK(c, 6);
    // 0119b2  add dl, 4
    X86_AT(c, 0x119b2u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x4u, 0, 1)); }
    // 0119b5  add edi, 0xf0
    X86_AT(c, 0x119b5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF0u, 0, 4); }
    // 0119bb  sub bl, 3
    X86_AT(c, 0x119bbu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x3u, 0, 1)); }
L_119be:
    X86_TICK(c, 22);
    // 0119be  movzx esi, bl
    X86_AT(c, 0x119beu);
    c.r[6] = g8(c, 3);
    // 0119c1  mov byte ptr gs:[edi + esi*1 + 0xd0], cl
    X86_AT(c, 0x119c1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u)), g8(c, 1));
    // 0119c9  mov al, byte ptr gs:[edi + esi*1 + 0xb0]
    X86_AT(c, 0x119c9u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xB0u))));
    // 0119d1  and eax, 7
    X86_AT(c, 0x119d1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 0119d6  mov bh, byte ptr cs:[eax + 0x135a8]
    X86_AT(c, 0x119d6u);
    s8(c, 7, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x135A8u))));
    // 0119dd  add bh, bh
    X86_AT(c, 0x119ddu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0119df  jae 0x11a08
    X86_AT(c, 0x119dfu);
    if (x86_cc(c, 3)) { goto L_11a08; }
    X86_TICK(c, 73);
    // 0119e1  mov al, byte ptr gs:[edi + esi*1 + 0xc0]
    X86_AT(c, 0x119e1u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC0u))));
    // 0119e9  xor al, 0x7f
    X86_AT(c, 0x119e9u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0119eb  mul cl
    X86_AT(c, 0x119ebu);
    x86_mul(c, g8(c, 1), 1);
    // 0119ed  shr eax, 7
    X86_AT(c, 0x119edu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0119f0  inc eax
    X86_AT(c, 0x119f0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0119f1  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x119f1u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 0119f9  shr eax, 7
    X86_AT(c, 0x119f9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0119fc  inc eax
    X86_AT(c, 0x119fcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0119fd  xor al, 0x7f
    X86_AT(c, 0x119fdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0119ff  mov ah, 0x40
    X86_AT(c, 0x119ffu);
    s8(c, 4, 0x40u);
    // 011a01  add ah, bl
    X86_AT(c, 0x11a01u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a03  call 0x11bf0
    X86_AT(c, 0x11a03u);
    push32(c, 0x11a08u); f_00011bf0(c); X86_RET(c, 0x11a08u);
L_11a08:
    X86_TICK(c, 7);
    // 011a08  add bh, bh
    X86_AT(c, 0x11a08u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a0a  jae 0x11a33
    X86_AT(c, 0x11a0au);
    if (x86_cc(c, 3)) { goto L_11a33; }
    X86_TICK(c, 73);
    // 011a0c  mov al, byte ptr gs:[edi + esi*1 + 0xc4]
    X86_AT(c, 0x11a0cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC4u))));
    // 011a14  xor al, 0x7f
    X86_AT(c, 0x11a14u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a16  mul cl
    X86_AT(c, 0x11a16u);
    x86_mul(c, g8(c, 1), 1);
    // 011a18  shr eax, 7
    X86_AT(c, 0x11a18u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a1b  inc eax
    X86_AT(c, 0x11a1bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a1c  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a1cu);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a24  shr eax, 7
    X86_AT(c, 0x11a24u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a27  inc eax
    X86_AT(c, 0x11a27u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a28  xor al, 0x7f
    X86_AT(c, 0x11a28u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a2a  mov ah, 0x44
    X86_AT(c, 0x11a2au);
    s8(c, 4, 0x44u);
    // 011a2c  add ah, bl
    X86_AT(c, 0x11a2cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a2e  call 0x11bf0
    X86_AT(c, 0x11a2eu);
    push32(c, 0x11a33u); f_00011bf0(c); X86_RET(c, 0x11a33u);
L_11a33:
    X86_TICK(c, 7);
    // 011a33  add bh, bh
    X86_AT(c, 0x11a33u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a35  jae 0x11a5e
    X86_AT(c, 0x11a35u);
    if (x86_cc(c, 3)) { goto L_11a5e; }
    X86_TICK(c, 73);
    // 011a37  mov al, byte ptr gs:[edi + esi*1 + 0xc8]
    X86_AT(c, 0x11a37u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC8u))));
    // 011a3f  xor al, 0x7f
    X86_AT(c, 0x11a3fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a41  mul cl
    X86_AT(c, 0x11a41u);
    x86_mul(c, g8(c, 1), 1);
    // 011a43  shr eax, 7
    X86_AT(c, 0x11a43u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a46  inc eax
    X86_AT(c, 0x11a46u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a47  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a47u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a4f  shr eax, 7
    X86_AT(c, 0x11a4fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a52  inc eax
    X86_AT(c, 0x11a52u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a53  xor al, 0x7f
    X86_AT(c, 0x11a53u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a55  mov ah, 0x48
    X86_AT(c, 0x11a55u);
    s8(c, 4, 0x48u);
    // 011a57  add ah, bl
    X86_AT(c, 0x11a57u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a59  call 0x11bf0
    X86_AT(c, 0x11a59u);
    push32(c, 0x11a5eu); f_00011bf0(c); X86_RET(c, 0x11a5eu);
L_11a5e:
    X86_TICK(c, 7);
    // 011a5e  add bh, bh
    X86_AT(c, 0x11a5eu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 011a60  jae 0x11a89
    X86_AT(c, 0x11a60u);
    if (x86_cc(c, 3)) { goto L_11a89; }
    X86_TICK(c, 73);
    // 011a62  mov al, byte ptr gs:[edi + esi*1 + 0xcc]
    X86_AT(c, 0x11a62u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xCCu))));
    // 011a6a  xor al, 0x7f
    X86_AT(c, 0x11a6au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a6c  mul cl
    X86_AT(c, 0x11a6cu);
    x86_mul(c, g8(c, 1), 1);
    // 011a6e  shr eax, 7
    X86_AT(c, 0x11a6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a71  inc eax
    X86_AT(c, 0x11a71u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a72  mul byte ptr gs:[edi + esi*1 + 0xe0]
    X86_AT(c, 0x11a72u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u))), 1);
    // 011a7a  shr eax, 7
    X86_AT(c, 0x11a7au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011a7d  inc eax
    X86_AT(c, 0x11a7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011a7e  xor al, 0x7f
    X86_AT(c, 0x11a7eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011a80  mov ah, 0x4c
    X86_AT(c, 0x11a80u);
    s8(c, 4, 0x4Cu);
    // 011a82  add ah, bl
    X86_AT(c, 0x11a82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011a84  call 0x11bf0
    X86_AT(c, 0x11a84u);
    push32(c, 0x11a89u); f_00011bf0(c); X86_RET(c, 0x11a89u);
L_11a89:
    X86_TICK(c, 36);
    // 011a89  popal 
    X86_AT(c, 0x11a89u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011a8a  xor al, al
    X86_AT(c, 0x11a8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011a8c  ret 
    X86_AT(c, 0x11a8cu);
    c.eip = pop32(c); return;
L_12180:
    X86_TICK(c, 7);
    // 012180  cmp bl, 0x47
    X86_AT(c, 0x12180u);
    (void)x86_sub(c, g8(c, 3), 0x47u, 0, 1);
    // 012183  ja 0x1354c
    X86_AT(c, 0x12183u);
    if (x86_cc(c, 7)) { goto L_1354c; }
    X86_TICK(c, 7);
    // 012189  test dl, 0x80
    X86_AT(c, 0x12189u);
    (void)x86_logic(c, g8(c, 2) & 0x80u, 1);
    // 01218c  jne 0x13557
    X86_AT(c, 0x1218cu);
    if (x86_cc(c, 5)) { goto L_13557; }
    X86_TICK(c, 74);
    // 012192  pushal 
    X86_AT(c, 0x12192u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 012193  sub bl, 0x40
    X86_AT(c, 0x12193u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x40u, 0, 1)); }
    // 012196  movzx ebx, bl
    X86_AT(c, 0x12196u);
    c.r[3] = g8(c, 3);
    // 012199  movzx ecx, dl
    X86_AT(c, 0x12199u);
    c.r[1] = g8(c, 2);
    // 01219c  mov al, bl
    X86_AT(c, 0x1219cu);
    s8(c, 0, g8(c, 3));
    // 01219e  add al, 0xc0
    X86_AT(c, 0x1219eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0xC0u, 0, 1)); }
    // 0121a0  mov byte ptr gs:[edi + 0x19f7], al
    X86_AT(c, 0x121a0u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F7u)), g8(c, 0));
    // 0121a7  mov dx, 0x4f7
    X86_AT(c, 0x121a7u);
    s16(c, 2, 0x4F7u);
    // 0121ab  out dx, al
    X86_AT(c, 0x121abu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0121ac  push ds
    X86_AT(c, 0x121acu);
    push32(c, c.sreg[3]);
    // 0121ad  pop ds
    X86_AT(c, 0x121adu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0121ae  push ds
    X86_AT(c, 0x121aeu);
    push32(c, c.sreg[3]);
    // 0121af  pop ds
    X86_AT(c, 0x121afu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0121b0  mov ah, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x121b0u);
    s8(c, 4, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 0121b7  test byte ptr gs:[edi + 0x19f8], ah
    X86_AT(c, 0x121b7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u))) & g8(c, 4), 1);
    // 0121be  jne 0x12210
    X86_AT(c, 0x121beu);
    if (x86_cc(c, 5)) { goto L_12210; }
    X86_TICK(c, 44);
    // 0121c0  lea esi, [ebx + ebx*1]
    X86_AT(c, 0x121c0u);
    c.r[6] = (uint32_t)(c.r[3] + c.r[3]);
    // 0121c3  lea esi, [esi + esi*4 + 0x1aa0]
    X86_AT(c, 0x121c3u);
    c.r[6] = (uint32_t)(c.r[6] + c.r[6] * 4 + 0x1AA0u);
    // 0121ca  movzx eax, word ptr gs:[edi + esi*1 + 6]
    X86_AT(c, 0x121cau);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)));
    // 0121d0  mul ecx
    X86_AT(c, 0x121d0u);
    x86_mul(c, c.r[1], 4);
    // 0121d2  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121d2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121da  test ecx, ecx
    X86_AT(c, 0x121dau);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0121dc  je 0x121e0
    X86_AT(c, 0x121dcu);
    if (x86_cc(c, 4)) { goto L_121e0; }
    X86_TICK(c, 40);
    // 0121de  div ecx
    X86_AT(c, 0x121deu);
    x86_div(c, c.r[1], 4, 0x121deu);
L_121e0:
    X86_TICK(c, 55);
    // 0121e0  pushfd 
    X86_AT(c, 0x121e0u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0121e1  cli 
    X86_AT(c, 0x121e1u);
    c.fl &= ~X86_IF;
    // 0121e2  mov word ptr gs:[edi + esi*1 + 6], ax
    X86_AT(c, 0x121e2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)), (c.r[0] & 0xFFFFu));
    // 0121e8  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121e8u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121f0  movzx eax, word ptr gs:[esi + 8]
    X86_AT(c, 0x121f0u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)));
    // 0121f5  mul ecx
    X86_AT(c, 0x121f5u);
    x86_mul(c, c.r[1], 4);
    // 0121f7  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121ff  test ecx, ecx
    X86_AT(c, 0x121ffu);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 012201  je 0x12205
    X86_AT(c, 0x12201u);
    if (x86_cc(c, 4)) { goto L_12205; }
    X86_TICK(c, 40);
    // 012203  div ecx
    X86_AT(c, 0x12203u);
    x86_div(c, c.r[1], 4, 0x12203u);
L_12205:
    X86_TICK(c, 17);
    // 012205  mov word ptr gs:[edi + esi*1 + 8], ax
    X86_AT(c, 0x12205u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 01220b  popfd 
    X86_AT(c, 0x1220bu);
    x86_popfd(c, 4);
    // 01220c  mov al, ah
    X86_AT(c, 0x1220cu);
    s8(c, 0, g8(c, 4));
    // 01220e  jmp 0x1221c
    X86_AT(c, 0x1220eu);
    goto L_1221c;
L_12210:
    X86_TICK(c, 6);
    // 012210  mov al, cl
    X86_AT(c, 0x12210u);
    s8(c, 0, g8(c, 1));
    // 012212  mov byte ptr gs:[edi + ebx*1 + 0x1a40], cl
    X86_AT(c, 0x12212u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A40u)), g8(c, 1));
    // 01221a  add al, al
    X86_AT(c, 0x1221au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
L_1221c:
    X86_TICK(c, 50);
    // 01221c  mov dx, 0x4f0
    X86_AT(c, 0x1221cu);
    s16(c, 2, 0x4F0u);
    // 012220  out dx, al
    X86_AT(c, 0x12220u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012221  popal 
    X86_AT(c, 0x12221u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012222  xor al, al
    X86_AT(c, 0x12222u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012224  ret 
    X86_AT(c, 0x12224u);
    c.eip = pop32(c); return;
L_1354c:
    X86_TICK(c, 12);
    // 01354c  mov al, 1
    X86_AT(c, 0x1354cu);
    s8(c, 0, 0x1u);
    // 01354e  ret 
    X86_AT(c, 0x1354eu);
    c.eip = pop32(c); return;
L_13557:
    X86_TICK(c, 12);
    // 013557  mov al, 3
    X86_AT(c, 0x13557u);
    s8(c, 0, 0x3u);
    // 013559  ret 
    X86_AT(c, 0x13559u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11294u, "ran off the end of a function");
}
void f_000112a4(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0112a4  cmp bl, 0x40
    X86_AT(c, 0x112a4u);
    (void)x86_sub(c, g8(c, 3), 0x40u, 0, 1);
    // 0112a7  jb 0x11b64
    X86_AT(c, 0x112a7u);
    if (x86_cc(c, 2)) { goto L_11b64; }
    X86_TICK(c, 7);
    // 0112ad  jmp 0x12fbc
    X86_AT(c, 0x112adu);
    goto L_12fbc;
L_11b64:
    X86_TICK(c, 7);
    // 011b64  cmp bl, 5
    X86_AT(c, 0x11b64u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 011b67  ja 0x1354c
    X86_AT(c, 0x11b67u);
    if (x86_cc(c, 7)) { goto L_1354c; }
    X86_TICK(c, 43);
    // 011b6d  pushal 
    X86_AT(c, 0x11b6du);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 011b6e  movzx ebx, bl
    X86_AT(c, 0x11b6eu);
    c.r[3] = g8(c, 3);
    // 011b71  mov ah, byte ptr cs:[ebx + 0x13588]
    X86_AT(c, 0x11b71u);
    s8(c, 4, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13588u))));
    // 011b78  and byte ptr gs:[edi + 0x1e6], ah
    X86_AT(c, 0x11b78u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x1E6u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 4), 1)); }
    // 011b7f  mov ecx, ebx
    X86_AT(c, 0x11b7fu);
    c.r[1] = c.r[3];
    // 011b81  mov dx, 0x4d8
    X86_AT(c, 0x11b81u);
    s16(c, 2, 0x4D8u);
    // 011b85  cmp bl, 2
    X86_AT(c, 0x11b85u);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 011b88  jbe 0x11b97
    X86_AT(c, 0x11b88u);
    if (x86_cc(c, 6)) { goto L_11b97; }
    X86_TICK(c, 8);
    // 011b8a  add edi, 0xf0
    X86_AT(c, 0x11b8au);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF0u, 0, 4); }
    // 011b90  add dl, 4
    X86_AT(c, 0x11b90u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x4u, 0, 1)); }
    // 011b93  sub bl, 3
    X86_AT(c, 0x11b93u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x3u, 0, 1)); }
    // 011b96  inc ecx
    X86_AT(c, 0x11b96u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
L_11b97:
    X86_TICK(c, 17);
    // 011b97  mov ah, 0x80
    X86_AT(c, 0x11b97u);
    s8(c, 4, 0x80u);
    // 011b99  add ah, bl
    X86_AT(c, 0x11b99u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011b9b  mov al, byte ptr gs:[edi + ebx*1 + 0x80]
    X86_AT(c, 0x11b9bu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x80u))));
    // 011ba3  or al, 0xf
    X86_AT(c, 0x11ba3u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 011ba5  call 0x11c20
    X86_AT(c, 0x11ba5u);
    push32(c, 0x11baau); f_00011c20(c); X86_RET(c, 0x11baau);
    X86_TICK(c, 15);
    // 011baa  add ah, 4
    X86_AT(c, 0x11baau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011bad  mov al, byte ptr gs:[edi + ebx*1 + 0x84]
    X86_AT(c, 0x11badu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x84u))));
    // 011bb5  or al, 0xf
    X86_AT(c, 0x11bb5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 011bb7  call 0x11c20
    X86_AT(c, 0x11bb7u);
    push32(c, 0x11bbcu); f_00011c20(c); X86_RET(c, 0x11bbcu);
    X86_TICK(c, 15);
    // 011bbc  add ah, 4
    X86_AT(c, 0x11bbcu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011bbf  mov al, byte ptr gs:[edi + ebx*1 + 0x88]
    X86_AT(c, 0x11bbfu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x88u))));
    // 011bc7  or al, 0xf
    X86_AT(c, 0x11bc7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 011bc9  call 0x11c20
    X86_AT(c, 0x11bc9u);
    push32(c, 0x11bceu); f_00011c20(c); X86_RET(c, 0x11bceu);
    X86_TICK(c, 15);
    // 011bce  add ah, 4
    X86_AT(c, 0x11bceu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011bd1  mov al, byte ptr gs:[edi + ebx*1 + 0x8c]
    X86_AT(c, 0x11bd1u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x8Cu))));
    // 011bd9  or al, 0xf
    X86_AT(c, 0x11bd9u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 011bdb  call 0x11c20
    X86_AT(c, 0x11bdbu);
    push32(c, 0x11be0u); f_00011c20(c); X86_RET(c, 0x11be0u);
    X86_TICK(c, 13);
    // 011be0  mov dl, 0xd8
    X86_AT(c, 0x11be0u);
    s8(c, 2, 0xD8u);
    // 011be2  mov al, cl
    X86_AT(c, 0x11be2u);
    s8(c, 0, g8(c, 1));
    // 011be4  mov ah, 0x28
    X86_AT(c, 0x11be4u);
    s8(c, 4, 0x28u);
    // 011be6  call 0x11c20
    X86_AT(c, 0x11be6u);
    push32(c, 0x11bebu); f_00011c20(c); X86_RET(c, 0x11bebu);
    X86_TICK(c, 36);
    // 011beb  popal 
    X86_AT(c, 0x11bebu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011bec  xor al, al
    X86_AT(c, 0x11becu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011bee  ret 
    X86_AT(c, 0x11beeu);
    c.eip = pop32(c); return;
L_12fbc:
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
    x86_fault(c, 0x112a4u, "ran off the end of a function");
}
void f_000112b4(X86Cpu& c) {
    X86_TICK(c, 30);
    // 0112b4  pushal 
    X86_AT(c, 0x112b4u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 0112b5  push es
    X86_AT(c, 0x112b5u);
    push32(c, c.sreg[0]);
    // 0112b6  push edi
    X86_AT(c, 0x112b6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0112b7  push gs
    X86_AT(c, 0x112b7u);
    push32(c, c.sreg[5]);
    // 0112b9  pop es
    X86_AT(c, 0x112b9u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0112ba  mov bl, 2
    X86_AT(c, 0x112bau);
    s8(c, 3, 0x2u);
L_112bc:
    X86_TICK(c, 50);
    // 0112bc  xor eax, eax
    X86_AT(c, 0x112bcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0112be  dec eax
    X86_AT(c, 0x112beu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0112bf  mov ecx, 0x38
    X86_AT(c, 0x112bfu);
    c.r[1] = 0x38u;
    // 0112c4  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112c4u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 0112c6  mov eax, 0xff7f7f7f
    X86_AT(c, 0x112c6u);
    c.r[0] = 0xFF7F7F7Fu;
    // 0112cb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112cbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112cc  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112ccu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112cd  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112cdu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112ce  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112ceu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112cf  dec bl
    X86_AT(c, 0x112cfu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_dec(c, v, 1)); }
    // 0112d1  jne 0x112bc
    X86_AT(c, 0x112d1u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x112bcu); goto L_112bc; }
    X86_TICK(c, 39);
    // 0112d3  xor eax, eax
    X86_AT(c, 0x112d3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0112d5  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d5u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d6  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d6u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d7  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d7u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d8  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d8u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112da  mov al, 0x80
    X86_AT(c, 0x112dau);
    s8(c, 0, 0x80u);
L_112dc:
    X86_TICK(c, 18);
    // 0112dc  mov esi, 0x135b0
    X86_AT(c, 0x112dcu);
    c.r[6] = 0x135B0u;
    // 0112e1  mov cl, 0xc
    X86_AT(c, 0x112e1u);
    s8(c, 1, 0xCu);
    // 0112e3  movsd dword ptr es:[edi], dword ptr cs:[esi]
    X86_AT(c, 0x112e3u);
    x86_string(c, 0, 4, 243, 4, 1);
    // 0112e6  dec al
    X86_AT(c, 0x112e6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0112e8  jne 0x112dc
    X86_AT(c, 0x112e8u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x112dcu); goto L_112dc; }
    X86_TICK(c, 19);
    // 0112ea  pop edi
    X86_AT(c, 0x112eau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0112eb  pop es
    X86_AT(c, 0x112ebu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0112ec  mov dx, 0x4d8
    X86_AT(c, 0x112ecu);
    s16(c, 2, 0x4D8u);
    // 0112f0  mov ax, 0x2100
    X86_AT(c, 0x112f0u);
    s16(c, 0, 0x2100u);
    // 0112f4  call 0x11bf0
    X86_AT(c, 0x112f4u);
    push32(c, 0x112f9u); f_00011bf0(c); X86_RET(c, 0x112f9u);
    X86_TICK(c, 9);
    // 0112f9  mov ax, 0x2c80
    X86_AT(c, 0x112f9u);
    s16(c, 0, 0x2C80u);
    // 0112fd  call 0x11bf0
    X86_AT(c, 0x112fdu);
    push32(c, 0x11302u); f_00011bf0(c); X86_RET(c, 0x11302u);
    X86_TICK(c, 9);
    // 011302  mov ax, 0x2b00
    X86_AT(c, 0x11302u);
    s16(c, 0, 0x2B00u);
    // 011306  call 0x11bf0
    X86_AT(c, 0x11306u);
    push32(c, 0x1130bu); f_00011bf0(c); X86_RET(c, 0x1130bu);
    X86_TICK(c, 9);
    // 01130b  mov ax, 0x2730
    X86_AT(c, 0x1130bu);
    s16(c, 0, 0x2730u);
    // 01130f  call 0x11bf0
    X86_AT(c, 0x1130fu);
    push32(c, 0x11314u); f_00011bf0(c); X86_RET(c, 0x11314u);
    X86_TICK(c, 4);
    // 011314  xor bl, bl
    X86_AT(c, 0x11314u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v ^ g8(c, 3), 1)); }
    // 011316  mov dx, 0x7f
    X86_AT(c, 0x11316u);
    s16(c, 2, 0x7Fu);
L_1131a:
    X86_TICK(c, 7);
    // 01131a  call 0x115d4
    X86_AT(c, 0x1131au);
    push32(c, 0x1131fu); f_000115d4(c); X86_RET(c, 0x1131fu);
    X86_TICK(c, 7);
    // 01131f  call 0x11664
    X86_AT(c, 0x1131fu);
    push32(c, 0x11324u); f_00011664(c); X86_RET(c, 0x11324u);
    X86_TICK(c, 7);
    // 011324  call 0x11994
    X86_AT(c, 0x11324u);
    push32(c, 0x11329u); f_00011994(c); X86_RET(c, 0x11329u);
    X86_TICK(c, 9);
    // 011329  inc ebx
    X86_AT(c, 0x11329u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 01132a  cmp bl, 5
    X86_AT(c, 0x1132au);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 01132d  jbe 0x1131a
    X86_AT(c, 0x1132du);
    if (x86_cc(c, 6)) { X86_POLL(c, 0x1131au); goto L_1131a; }
    X86_TICK(c, 36);
    // 01132f  popal 
    X86_AT(c, 0x1132fu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011330  xor al, al
    X86_AT(c, 0x11330u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011332  ret 
    X86_AT(c, 0x11332u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x112b4u, "ran off the end of a function");
}
void f_000112b5(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0112b5  push es
    X86_AT(c, 0x112b5u);
    push32(c, c.sreg[0]);
    // 0112b6  push edi
    X86_AT(c, 0x112b6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0112b7  push gs
    X86_AT(c, 0x112b7u);
    push32(c, c.sreg[5]);
    // 0112b9  pop es
    X86_AT(c, 0x112b9u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0112ba  mov bl, 2
    X86_AT(c, 0x112bau);
    s8(c, 3, 0x2u);
L_112bc:
    X86_TICK(c, 50);
    // 0112bc  xor eax, eax
    X86_AT(c, 0x112bcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0112be  dec eax
    X86_AT(c, 0x112beu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0112bf  mov ecx, 0x38
    X86_AT(c, 0x112bfu);
    c.r[1] = 0x38u;
    // 0112c4  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112c4u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 0112c6  mov eax, 0xff7f7f7f
    X86_AT(c, 0x112c6u);
    c.r[0] = 0xFF7F7F7Fu;
    // 0112cb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112cbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112cc  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112ccu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112cd  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112cdu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112ce  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112ceu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112cf  dec bl
    X86_AT(c, 0x112cfu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_dec(c, v, 1)); }
    // 0112d1  jne 0x112bc
    X86_AT(c, 0x112d1u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x112bcu); goto L_112bc; }
    X86_TICK(c, 39);
    // 0112d3  xor eax, eax
    X86_AT(c, 0x112d3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0112d5  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d5u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d6  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d6u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d7  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d7u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d8  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d8u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112da  mov al, 0x80
    X86_AT(c, 0x112dau);
    s8(c, 0, 0x80u);
L_112dc:
    X86_TICK(c, 18);
    // 0112dc  mov esi, 0x135b0
    X86_AT(c, 0x112dcu);
    c.r[6] = 0x135B0u;
    // 0112e1  mov cl, 0xc
    X86_AT(c, 0x112e1u);
    s8(c, 1, 0xCu);
    // 0112e3  movsd dword ptr es:[edi], dword ptr cs:[esi]
    X86_AT(c, 0x112e3u);
    x86_string(c, 0, 4, 243, 4, 1);
    // 0112e6  dec al
    X86_AT(c, 0x112e6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0112e8  jne 0x112dc
    X86_AT(c, 0x112e8u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x112dcu); goto L_112dc; }
    X86_TICK(c, 19);
    // 0112ea  pop edi
    X86_AT(c, 0x112eau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0112eb  pop es
    X86_AT(c, 0x112ebu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0112ec  mov dx, 0x4d8
    X86_AT(c, 0x112ecu);
    s16(c, 2, 0x4D8u);
    // 0112f0  mov ax, 0x2100
    X86_AT(c, 0x112f0u);
    s16(c, 0, 0x2100u);
    // 0112f4  call 0x11bf0
    X86_AT(c, 0x112f4u);
    push32(c, 0x112f9u); f_00011bf0(c); X86_RET(c, 0x112f9u);
    X86_TICK(c, 9);
    // 0112f9  mov ax, 0x2c80
    X86_AT(c, 0x112f9u);
    s16(c, 0, 0x2C80u);
    // 0112fd  call 0x11bf0
    X86_AT(c, 0x112fdu);
    push32(c, 0x11302u); f_00011bf0(c); X86_RET(c, 0x11302u);
    X86_TICK(c, 9);
    // 011302  mov ax, 0x2b00
    X86_AT(c, 0x11302u);
    s16(c, 0, 0x2B00u);
    // 011306  call 0x11bf0
    X86_AT(c, 0x11306u);
    push32(c, 0x1130bu); f_00011bf0(c); X86_RET(c, 0x1130bu);
    X86_TICK(c, 9);
    // 01130b  mov ax, 0x2730
    X86_AT(c, 0x1130bu);
    s16(c, 0, 0x2730u);
    // 01130f  call 0x11bf0
    X86_AT(c, 0x1130fu);
    push32(c, 0x11314u); f_00011bf0(c); X86_RET(c, 0x11314u);
    X86_TICK(c, 4);
    // 011314  xor bl, bl
    X86_AT(c, 0x11314u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v ^ g8(c, 3), 1)); }
    // 011316  mov dx, 0x7f
    X86_AT(c, 0x11316u);
    s16(c, 2, 0x7Fu);
L_1131a:
    X86_TICK(c, 7);
    // 01131a  call 0x115d4
    X86_AT(c, 0x1131au);
    push32(c, 0x1131fu); f_000115d4(c); X86_RET(c, 0x1131fu);
    X86_TICK(c, 7);
    // 01131f  call 0x11664
    X86_AT(c, 0x1131fu);
    push32(c, 0x11324u); f_00011664(c); X86_RET(c, 0x11324u);
    X86_TICK(c, 7);
    // 011324  call 0x11994
    X86_AT(c, 0x11324u);
    push32(c, 0x11329u); f_00011994(c); X86_RET(c, 0x11329u);
    X86_TICK(c, 9);
    // 011329  inc ebx
    X86_AT(c, 0x11329u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 01132a  cmp bl, 5
    X86_AT(c, 0x1132au);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 01132d  jbe 0x1131a
    X86_AT(c, 0x1132du);
    if (x86_cc(c, 6)) { X86_POLL(c, 0x1131au); goto L_1131a; }
    X86_TICK(c, 36);
    // 01132f  popal 
    X86_AT(c, 0x1132fu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011330  xor al, al
    X86_AT(c, 0x11330u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011332  ret 
    X86_AT(c, 0x11332u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x112b5u, "ran off the end of a function");
}
void f_000112b6(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0112b6  push edi
    X86_AT(c, 0x112b6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0112b7  push gs
    X86_AT(c, 0x112b7u);
    push32(c, c.sreg[5]);
    // 0112b9  pop es
    X86_AT(c, 0x112b9u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0112ba  mov bl, 2
    X86_AT(c, 0x112bau);
    s8(c, 3, 0x2u);
L_112bc:
    X86_TICK(c, 50);
    // 0112bc  xor eax, eax
    X86_AT(c, 0x112bcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0112be  dec eax
    X86_AT(c, 0x112beu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0112bf  mov ecx, 0x38
    X86_AT(c, 0x112bfu);
    c.r[1] = 0x38u;
    // 0112c4  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112c4u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 0112c6  mov eax, 0xff7f7f7f
    X86_AT(c, 0x112c6u);
    c.r[0] = 0xFF7F7F7Fu;
    // 0112cb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112cbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112cc  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112ccu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112cd  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112cdu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112ce  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112ceu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112cf  dec bl
    X86_AT(c, 0x112cfu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_dec(c, v, 1)); }
    // 0112d1  jne 0x112bc
    X86_AT(c, 0x112d1u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x112bcu); goto L_112bc; }
    X86_TICK(c, 39);
    // 0112d3  xor eax, eax
    X86_AT(c, 0x112d3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0112d5  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d5u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d6  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d6u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d7  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d7u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d8  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d8u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112da  mov al, 0x80
    X86_AT(c, 0x112dau);
    s8(c, 0, 0x80u);
L_112dc:
    X86_TICK(c, 18);
    // 0112dc  mov esi, 0x135b0
    X86_AT(c, 0x112dcu);
    c.r[6] = 0x135B0u;
    // 0112e1  mov cl, 0xc
    X86_AT(c, 0x112e1u);
    s8(c, 1, 0xCu);
    // 0112e3  movsd dword ptr es:[edi], dword ptr cs:[esi]
    X86_AT(c, 0x112e3u);
    x86_string(c, 0, 4, 243, 4, 1);
    // 0112e6  dec al
    X86_AT(c, 0x112e6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0112e8  jne 0x112dc
    X86_AT(c, 0x112e8u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x112dcu); goto L_112dc; }
    X86_TICK(c, 19);
    // 0112ea  pop edi
    X86_AT(c, 0x112eau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0112eb  pop es
    X86_AT(c, 0x112ebu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0112ec  mov dx, 0x4d8
    X86_AT(c, 0x112ecu);
    s16(c, 2, 0x4D8u);
    // 0112f0  mov ax, 0x2100
    X86_AT(c, 0x112f0u);
    s16(c, 0, 0x2100u);
    // 0112f4  call 0x11bf0
    X86_AT(c, 0x112f4u);
    push32(c, 0x112f9u); f_00011bf0(c); X86_RET(c, 0x112f9u);
    X86_TICK(c, 9);
    // 0112f9  mov ax, 0x2c80
    X86_AT(c, 0x112f9u);
    s16(c, 0, 0x2C80u);
    // 0112fd  call 0x11bf0
    X86_AT(c, 0x112fdu);
    push32(c, 0x11302u); f_00011bf0(c); X86_RET(c, 0x11302u);
    X86_TICK(c, 9);
    // 011302  mov ax, 0x2b00
    X86_AT(c, 0x11302u);
    s16(c, 0, 0x2B00u);
    // 011306  call 0x11bf0
    X86_AT(c, 0x11306u);
    push32(c, 0x1130bu); f_00011bf0(c); X86_RET(c, 0x1130bu);
    X86_TICK(c, 9);
    // 01130b  mov ax, 0x2730
    X86_AT(c, 0x1130bu);
    s16(c, 0, 0x2730u);
    // 01130f  call 0x11bf0
    X86_AT(c, 0x1130fu);
    push32(c, 0x11314u); f_00011bf0(c); X86_RET(c, 0x11314u);
    X86_TICK(c, 4);
    // 011314  xor bl, bl
    X86_AT(c, 0x11314u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v ^ g8(c, 3), 1)); }
    // 011316  mov dx, 0x7f
    X86_AT(c, 0x11316u);
    s16(c, 2, 0x7Fu);
L_1131a:
    X86_TICK(c, 7);
    // 01131a  call 0x115d4
    X86_AT(c, 0x1131au);
    push32(c, 0x1131fu); f_000115d4(c); X86_RET(c, 0x1131fu);
    X86_TICK(c, 7);
    // 01131f  call 0x11664
    X86_AT(c, 0x1131fu);
    push32(c, 0x11324u); f_00011664(c); X86_RET(c, 0x11324u);
    X86_TICK(c, 7);
    // 011324  call 0x11994
    X86_AT(c, 0x11324u);
    push32(c, 0x11329u); f_00011994(c); X86_RET(c, 0x11329u);
    X86_TICK(c, 9);
    // 011329  inc ebx
    X86_AT(c, 0x11329u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 01132a  cmp bl, 5
    X86_AT(c, 0x1132au);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 01132d  jbe 0x1131a
    X86_AT(c, 0x1132du);
    if (x86_cc(c, 6)) { X86_POLL(c, 0x1131au); goto L_1131a; }
    X86_TICK(c, 36);
    // 01132f  popal 
    X86_AT(c, 0x1132fu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011330  xor al, al
    X86_AT(c, 0x11330u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011332  ret 
    X86_AT(c, 0x11332u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x112b6u, "ran off the end of a function");
}
void f_000112b7(X86Cpu& c) {
    X86_TICK(c, 8);
    // 0112b7  push gs
    X86_AT(c, 0x112b7u);
    push32(c, c.sreg[5]);
    // 0112b9  pop es
    X86_AT(c, 0x112b9u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0112ba  mov bl, 2
    X86_AT(c, 0x112bau);
    s8(c, 3, 0x2u);
L_112bc:
    X86_TICK(c, 50);
    // 0112bc  xor eax, eax
    X86_AT(c, 0x112bcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0112be  dec eax
    X86_AT(c, 0x112beu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0112bf  mov ecx, 0x38
    X86_AT(c, 0x112bfu);
    c.r[1] = 0x38u;
    // 0112c4  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112c4u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 0112c6  mov eax, 0xff7f7f7f
    X86_AT(c, 0x112c6u);
    c.r[0] = 0xFF7F7F7Fu;
    // 0112cb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112cbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112cc  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112ccu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112cd  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112cdu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112ce  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112ceu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112cf  dec bl
    X86_AT(c, 0x112cfu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_dec(c, v, 1)); }
    // 0112d1  jne 0x112bc
    X86_AT(c, 0x112d1u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x112bcu); goto L_112bc; }
    X86_TICK(c, 39);
    // 0112d3  xor eax, eax
    X86_AT(c, 0x112d3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0112d5  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d5u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d6  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d6u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d7  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d7u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d8  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d8u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112da  mov al, 0x80
    X86_AT(c, 0x112dau);
    s8(c, 0, 0x80u);
L_112dc:
    X86_TICK(c, 18);
    // 0112dc  mov esi, 0x135b0
    X86_AT(c, 0x112dcu);
    c.r[6] = 0x135B0u;
    // 0112e1  mov cl, 0xc
    X86_AT(c, 0x112e1u);
    s8(c, 1, 0xCu);
    // 0112e3  movsd dword ptr es:[edi], dword ptr cs:[esi]
    X86_AT(c, 0x112e3u);
    x86_string(c, 0, 4, 243, 4, 1);
    // 0112e6  dec al
    X86_AT(c, 0x112e6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0112e8  jne 0x112dc
    X86_AT(c, 0x112e8u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x112dcu); goto L_112dc; }
    X86_TICK(c, 19);
    // 0112ea  pop edi
    X86_AT(c, 0x112eau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0112eb  pop es
    X86_AT(c, 0x112ebu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0112ec  mov dx, 0x4d8
    X86_AT(c, 0x112ecu);
    s16(c, 2, 0x4D8u);
    // 0112f0  mov ax, 0x2100
    X86_AT(c, 0x112f0u);
    s16(c, 0, 0x2100u);
    // 0112f4  call 0x11bf0
    X86_AT(c, 0x112f4u);
    push32(c, 0x112f9u); f_00011bf0(c); X86_RET(c, 0x112f9u);
    X86_TICK(c, 9);
    // 0112f9  mov ax, 0x2c80
    X86_AT(c, 0x112f9u);
    s16(c, 0, 0x2C80u);
    // 0112fd  call 0x11bf0
    X86_AT(c, 0x112fdu);
    push32(c, 0x11302u); f_00011bf0(c); X86_RET(c, 0x11302u);
    X86_TICK(c, 9);
    // 011302  mov ax, 0x2b00
    X86_AT(c, 0x11302u);
    s16(c, 0, 0x2B00u);
    // 011306  call 0x11bf0
    X86_AT(c, 0x11306u);
    push32(c, 0x1130bu); f_00011bf0(c); X86_RET(c, 0x1130bu);
    X86_TICK(c, 9);
    // 01130b  mov ax, 0x2730
    X86_AT(c, 0x1130bu);
    s16(c, 0, 0x2730u);
    // 01130f  call 0x11bf0
    X86_AT(c, 0x1130fu);
    push32(c, 0x11314u); f_00011bf0(c); X86_RET(c, 0x11314u);
    X86_TICK(c, 4);
    // 011314  xor bl, bl
    X86_AT(c, 0x11314u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v ^ g8(c, 3), 1)); }
    // 011316  mov dx, 0x7f
    X86_AT(c, 0x11316u);
    s16(c, 2, 0x7Fu);
L_1131a:
    X86_TICK(c, 7);
    // 01131a  call 0x115d4
    X86_AT(c, 0x1131au);
    push32(c, 0x1131fu); f_000115d4(c); X86_RET(c, 0x1131fu);
    X86_TICK(c, 7);
    // 01131f  call 0x11664
    X86_AT(c, 0x1131fu);
    push32(c, 0x11324u); f_00011664(c); X86_RET(c, 0x11324u);
    X86_TICK(c, 7);
    // 011324  call 0x11994
    X86_AT(c, 0x11324u);
    push32(c, 0x11329u); f_00011994(c); X86_RET(c, 0x11329u);
    X86_TICK(c, 9);
    // 011329  inc ebx
    X86_AT(c, 0x11329u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 01132a  cmp bl, 5
    X86_AT(c, 0x1132au);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 01132d  jbe 0x1131a
    X86_AT(c, 0x1132du);
    if (x86_cc(c, 6)) { X86_POLL(c, 0x1131au); goto L_1131a; }
    X86_TICK(c, 36);
    // 01132f  popal 
    X86_AT(c, 0x1132fu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011330  xor al, al
    X86_AT(c, 0x11330u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011332  ret 
    X86_AT(c, 0x11332u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x112b7u, "ran off the end of a function");
}
void f_000112b9(X86Cpu& c) {
    X86_TICK(c, 6);
    // 0112b9  pop es
    X86_AT(c, 0x112b9u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0112ba  mov bl, 2
    X86_AT(c, 0x112bau);
    s8(c, 3, 0x2u);
L_112bc:
    X86_TICK(c, 50);
    // 0112bc  xor eax, eax
    X86_AT(c, 0x112bcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0112be  dec eax
    X86_AT(c, 0x112beu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0112bf  mov ecx, 0x38
    X86_AT(c, 0x112bfu);
    c.r[1] = 0x38u;
    // 0112c4  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112c4u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 0112c6  mov eax, 0xff7f7f7f
    X86_AT(c, 0x112c6u);
    c.r[0] = 0xFF7F7F7Fu;
    // 0112cb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112cbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112cc  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112ccu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112cd  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112cdu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112ce  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112ceu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112cf  dec bl
    X86_AT(c, 0x112cfu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_dec(c, v, 1)); }
    // 0112d1  jne 0x112bc
    X86_AT(c, 0x112d1u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x112bcu); goto L_112bc; }
    X86_TICK(c, 39);
    // 0112d3  xor eax, eax
    X86_AT(c, 0x112d3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0112d5  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d5u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d6  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d6u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d7  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d7u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d8  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d8u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112da  mov al, 0x80
    X86_AT(c, 0x112dau);
    s8(c, 0, 0x80u);
L_112dc:
    X86_TICK(c, 18);
    // 0112dc  mov esi, 0x135b0
    X86_AT(c, 0x112dcu);
    c.r[6] = 0x135B0u;
    // 0112e1  mov cl, 0xc
    X86_AT(c, 0x112e1u);
    s8(c, 1, 0xCu);
    // 0112e3  movsd dword ptr es:[edi], dword ptr cs:[esi]
    X86_AT(c, 0x112e3u);
    x86_string(c, 0, 4, 243, 4, 1);
    // 0112e6  dec al
    X86_AT(c, 0x112e6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0112e8  jne 0x112dc
    X86_AT(c, 0x112e8u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x112dcu); goto L_112dc; }
    X86_TICK(c, 19);
    // 0112ea  pop edi
    X86_AT(c, 0x112eau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0112eb  pop es
    X86_AT(c, 0x112ebu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0112ec  mov dx, 0x4d8
    X86_AT(c, 0x112ecu);
    s16(c, 2, 0x4D8u);
    // 0112f0  mov ax, 0x2100
    X86_AT(c, 0x112f0u);
    s16(c, 0, 0x2100u);
    // 0112f4  call 0x11bf0
    X86_AT(c, 0x112f4u);
    push32(c, 0x112f9u); f_00011bf0(c); X86_RET(c, 0x112f9u);
    X86_TICK(c, 9);
    // 0112f9  mov ax, 0x2c80
    X86_AT(c, 0x112f9u);
    s16(c, 0, 0x2C80u);
    // 0112fd  call 0x11bf0
    X86_AT(c, 0x112fdu);
    push32(c, 0x11302u); f_00011bf0(c); X86_RET(c, 0x11302u);
    X86_TICK(c, 9);
    // 011302  mov ax, 0x2b00
    X86_AT(c, 0x11302u);
    s16(c, 0, 0x2B00u);
    // 011306  call 0x11bf0
    X86_AT(c, 0x11306u);
    push32(c, 0x1130bu); f_00011bf0(c); X86_RET(c, 0x1130bu);
    X86_TICK(c, 9);
    // 01130b  mov ax, 0x2730
    X86_AT(c, 0x1130bu);
    s16(c, 0, 0x2730u);
    // 01130f  call 0x11bf0
    X86_AT(c, 0x1130fu);
    push32(c, 0x11314u); f_00011bf0(c); X86_RET(c, 0x11314u);
    X86_TICK(c, 4);
    // 011314  xor bl, bl
    X86_AT(c, 0x11314u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v ^ g8(c, 3), 1)); }
    // 011316  mov dx, 0x7f
    X86_AT(c, 0x11316u);
    s16(c, 2, 0x7Fu);
L_1131a:
    X86_TICK(c, 7);
    // 01131a  call 0x115d4
    X86_AT(c, 0x1131au);
    push32(c, 0x1131fu); f_000115d4(c); X86_RET(c, 0x1131fu);
    X86_TICK(c, 7);
    // 01131f  call 0x11664
    X86_AT(c, 0x1131fu);
    push32(c, 0x11324u); f_00011664(c); X86_RET(c, 0x11324u);
    X86_TICK(c, 7);
    // 011324  call 0x11994
    X86_AT(c, 0x11324u);
    push32(c, 0x11329u); f_00011994(c); X86_RET(c, 0x11329u);
    X86_TICK(c, 9);
    // 011329  inc ebx
    X86_AT(c, 0x11329u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 01132a  cmp bl, 5
    X86_AT(c, 0x1132au);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 01132d  jbe 0x1131a
    X86_AT(c, 0x1132du);
    if (x86_cc(c, 6)) { X86_POLL(c, 0x1131au); goto L_1131a; }
    X86_TICK(c, 36);
    // 01132f  popal 
    X86_AT(c, 0x1132fu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011330  xor al, al
    X86_AT(c, 0x11330u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011332  ret 
    X86_AT(c, 0x11332u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x112b9u, "ran off the end of a function");
}
void f_000112ba(X86Cpu& c) {
    X86_TICK(c, 2);
    // 0112ba  mov bl, 2
    X86_AT(c, 0x112bau);
    s8(c, 3, 0x2u);
L_112bc:
    X86_TICK(c, 50);
    // 0112bc  xor eax, eax
    X86_AT(c, 0x112bcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0112be  dec eax
    X86_AT(c, 0x112beu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0112bf  mov ecx, 0x38
    X86_AT(c, 0x112bfu);
    c.r[1] = 0x38u;
    // 0112c4  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112c4u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 0112c6  mov eax, 0xff7f7f7f
    X86_AT(c, 0x112c6u);
    c.r[0] = 0xFF7F7F7Fu;
    // 0112cb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112cbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112cc  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112ccu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112cd  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112cdu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112ce  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112ceu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112cf  dec bl
    X86_AT(c, 0x112cfu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_dec(c, v, 1)); }
    // 0112d1  jne 0x112bc
    X86_AT(c, 0x112d1u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x112bcu); goto L_112bc; }
    X86_TICK(c, 39);
    // 0112d3  xor eax, eax
    X86_AT(c, 0x112d3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0112d5  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d5u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d6  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d6u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d7  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d7u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d8  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d8u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112da  mov al, 0x80
    X86_AT(c, 0x112dau);
    s8(c, 0, 0x80u);
L_112dc:
    X86_TICK(c, 18);
    // 0112dc  mov esi, 0x135b0
    X86_AT(c, 0x112dcu);
    c.r[6] = 0x135B0u;
    // 0112e1  mov cl, 0xc
    X86_AT(c, 0x112e1u);
    s8(c, 1, 0xCu);
    // 0112e3  movsd dword ptr es:[edi], dword ptr cs:[esi]
    X86_AT(c, 0x112e3u);
    x86_string(c, 0, 4, 243, 4, 1);
    // 0112e6  dec al
    X86_AT(c, 0x112e6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0112e8  jne 0x112dc
    X86_AT(c, 0x112e8u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x112dcu); goto L_112dc; }
    X86_TICK(c, 19);
    // 0112ea  pop edi
    X86_AT(c, 0x112eau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0112eb  pop es
    X86_AT(c, 0x112ebu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0112ec  mov dx, 0x4d8
    X86_AT(c, 0x112ecu);
    s16(c, 2, 0x4D8u);
    // 0112f0  mov ax, 0x2100
    X86_AT(c, 0x112f0u);
    s16(c, 0, 0x2100u);
    // 0112f4  call 0x11bf0
    X86_AT(c, 0x112f4u);
    push32(c, 0x112f9u); f_00011bf0(c); X86_RET(c, 0x112f9u);
    X86_TICK(c, 9);
    // 0112f9  mov ax, 0x2c80
    X86_AT(c, 0x112f9u);
    s16(c, 0, 0x2C80u);
    // 0112fd  call 0x11bf0
    X86_AT(c, 0x112fdu);
    push32(c, 0x11302u); f_00011bf0(c); X86_RET(c, 0x11302u);
    X86_TICK(c, 9);
    // 011302  mov ax, 0x2b00
    X86_AT(c, 0x11302u);
    s16(c, 0, 0x2B00u);
    // 011306  call 0x11bf0
    X86_AT(c, 0x11306u);
    push32(c, 0x1130bu); f_00011bf0(c); X86_RET(c, 0x1130bu);
    X86_TICK(c, 9);
    // 01130b  mov ax, 0x2730
    X86_AT(c, 0x1130bu);
    s16(c, 0, 0x2730u);
    // 01130f  call 0x11bf0
    X86_AT(c, 0x1130fu);
    push32(c, 0x11314u); f_00011bf0(c); X86_RET(c, 0x11314u);
    X86_TICK(c, 4);
    // 011314  xor bl, bl
    X86_AT(c, 0x11314u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v ^ g8(c, 3), 1)); }
    // 011316  mov dx, 0x7f
    X86_AT(c, 0x11316u);
    s16(c, 2, 0x7Fu);
L_1131a:
    X86_TICK(c, 7);
    // 01131a  call 0x115d4
    X86_AT(c, 0x1131au);
    push32(c, 0x1131fu); f_000115d4(c); X86_RET(c, 0x1131fu);
    X86_TICK(c, 7);
    // 01131f  call 0x11664
    X86_AT(c, 0x1131fu);
    push32(c, 0x11324u); f_00011664(c); X86_RET(c, 0x11324u);
    X86_TICK(c, 7);
    // 011324  call 0x11994
    X86_AT(c, 0x11324u);
    push32(c, 0x11329u); f_00011994(c); X86_RET(c, 0x11329u);
    X86_TICK(c, 9);
    // 011329  inc ebx
    X86_AT(c, 0x11329u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 01132a  cmp bl, 5
    X86_AT(c, 0x1132au);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 01132d  jbe 0x1131a
    X86_AT(c, 0x1132du);
    if (x86_cc(c, 6)) { X86_POLL(c, 0x1131au); goto L_1131a; }
    X86_TICK(c, 36);
    // 01132f  popal 
    X86_AT(c, 0x1132fu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011330  xor al, al
    X86_AT(c, 0x11330u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011332  ret 
    X86_AT(c, 0x11332u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x112bau, "ran off the end of a function");
}
void f_000112bc(X86Cpu& c) {
L_112bc:
    X86_TICK(c, 50);
    // 0112bc  xor eax, eax
    X86_AT(c, 0x112bcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0112be  dec eax
    X86_AT(c, 0x112beu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0112bf  mov ecx, 0x38
    X86_AT(c, 0x112bfu);
    c.r[1] = 0x38u;
    // 0112c4  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112c4u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 0112c6  mov eax, 0xff7f7f7f
    X86_AT(c, 0x112c6u);
    c.r[0] = 0xFF7F7F7Fu;
    // 0112cb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112cbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112cc  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112ccu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112cd  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112cdu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112ce  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112ceu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112cf  dec bl
    X86_AT(c, 0x112cfu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_dec(c, v, 1)); }
    // 0112d1  jne 0x112bc
    X86_AT(c, 0x112d1u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x112bcu); goto L_112bc; }
    X86_TICK(c, 39);
    // 0112d3  xor eax, eax
    X86_AT(c, 0x112d3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0112d5  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d5u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d6  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d6u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d7  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d7u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d8  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d8u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112da  mov al, 0x80
    X86_AT(c, 0x112dau);
    s8(c, 0, 0x80u);
L_112dc:
    X86_TICK(c, 18);
    // 0112dc  mov esi, 0x135b0
    X86_AT(c, 0x112dcu);
    c.r[6] = 0x135B0u;
    // 0112e1  mov cl, 0xc
    X86_AT(c, 0x112e1u);
    s8(c, 1, 0xCu);
    // 0112e3  movsd dword ptr es:[edi], dword ptr cs:[esi]
    X86_AT(c, 0x112e3u);
    x86_string(c, 0, 4, 243, 4, 1);
    // 0112e6  dec al
    X86_AT(c, 0x112e6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0112e8  jne 0x112dc
    X86_AT(c, 0x112e8u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x112dcu); goto L_112dc; }
    X86_TICK(c, 19);
    // 0112ea  pop edi
    X86_AT(c, 0x112eau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0112eb  pop es
    X86_AT(c, 0x112ebu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0112ec  mov dx, 0x4d8
    X86_AT(c, 0x112ecu);
    s16(c, 2, 0x4D8u);
    // 0112f0  mov ax, 0x2100
    X86_AT(c, 0x112f0u);
    s16(c, 0, 0x2100u);
    // 0112f4  call 0x11bf0
    X86_AT(c, 0x112f4u);
    push32(c, 0x112f9u); f_00011bf0(c); X86_RET(c, 0x112f9u);
    X86_TICK(c, 9);
    // 0112f9  mov ax, 0x2c80
    X86_AT(c, 0x112f9u);
    s16(c, 0, 0x2C80u);
    // 0112fd  call 0x11bf0
    X86_AT(c, 0x112fdu);
    push32(c, 0x11302u); f_00011bf0(c); X86_RET(c, 0x11302u);
    X86_TICK(c, 9);
    // 011302  mov ax, 0x2b00
    X86_AT(c, 0x11302u);
    s16(c, 0, 0x2B00u);
    // 011306  call 0x11bf0
    X86_AT(c, 0x11306u);
    push32(c, 0x1130bu); f_00011bf0(c); X86_RET(c, 0x1130bu);
    X86_TICK(c, 9);
    // 01130b  mov ax, 0x2730
    X86_AT(c, 0x1130bu);
    s16(c, 0, 0x2730u);
    // 01130f  call 0x11bf0
    X86_AT(c, 0x1130fu);
    push32(c, 0x11314u); f_00011bf0(c); X86_RET(c, 0x11314u);
    X86_TICK(c, 4);
    // 011314  xor bl, bl
    X86_AT(c, 0x11314u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v ^ g8(c, 3), 1)); }
    // 011316  mov dx, 0x7f
    X86_AT(c, 0x11316u);
    s16(c, 2, 0x7Fu);
L_1131a:
    X86_TICK(c, 7);
    // 01131a  call 0x115d4
    X86_AT(c, 0x1131au);
    push32(c, 0x1131fu); f_000115d4(c); X86_RET(c, 0x1131fu);
    X86_TICK(c, 7);
    // 01131f  call 0x11664
    X86_AT(c, 0x1131fu);
    push32(c, 0x11324u); f_00011664(c); X86_RET(c, 0x11324u);
    X86_TICK(c, 7);
    // 011324  call 0x11994
    X86_AT(c, 0x11324u);
    push32(c, 0x11329u); f_00011994(c); X86_RET(c, 0x11329u);
    X86_TICK(c, 9);
    // 011329  inc ebx
    X86_AT(c, 0x11329u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 01132a  cmp bl, 5
    X86_AT(c, 0x1132au);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 01132d  jbe 0x1131a
    X86_AT(c, 0x1132du);
    if (x86_cc(c, 6)) { X86_POLL(c, 0x1131au); goto L_1131a; }
    X86_TICK(c, 36);
    // 01132f  popal 
    X86_AT(c, 0x1132fu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011330  xor al, al
    X86_AT(c, 0x11330u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011332  ret 
    X86_AT(c, 0x11332u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x112bcu, "ran off the end of a function");
}
void f_000112be(X86Cpu& c) {
    goto L_112be;
L_112bc:
    X86_TICK(c, 2);
    // 0112bc  xor eax, eax
    X86_AT(c, 0x112bcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
L_112be:
    X86_TICK(c, 48);
    // 0112be  dec eax
    X86_AT(c, 0x112beu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0112bf  mov ecx, 0x38
    X86_AT(c, 0x112bfu);
    c.r[1] = 0x38u;
    // 0112c4  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112c4u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 0112c6  mov eax, 0xff7f7f7f
    X86_AT(c, 0x112c6u);
    c.r[0] = 0xFF7F7F7Fu;
    // 0112cb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112cbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112cc  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112ccu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112cd  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112cdu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112ce  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112ceu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112cf  dec bl
    X86_AT(c, 0x112cfu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_dec(c, v, 1)); }
    // 0112d1  jne 0x112bc
    X86_AT(c, 0x112d1u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x112bcu); goto L_112bc; }
    X86_TICK(c, 39);
    // 0112d3  xor eax, eax
    X86_AT(c, 0x112d3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0112d5  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d5u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d6  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d6u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d7  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d7u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d8  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d8u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112da  mov al, 0x80
    X86_AT(c, 0x112dau);
    s8(c, 0, 0x80u);
L_112dc:
    X86_TICK(c, 18);
    // 0112dc  mov esi, 0x135b0
    X86_AT(c, 0x112dcu);
    c.r[6] = 0x135B0u;
    // 0112e1  mov cl, 0xc
    X86_AT(c, 0x112e1u);
    s8(c, 1, 0xCu);
    // 0112e3  movsd dword ptr es:[edi], dword ptr cs:[esi]
    X86_AT(c, 0x112e3u);
    x86_string(c, 0, 4, 243, 4, 1);
    // 0112e6  dec al
    X86_AT(c, 0x112e6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0112e8  jne 0x112dc
    X86_AT(c, 0x112e8u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x112dcu); goto L_112dc; }
    X86_TICK(c, 19);
    // 0112ea  pop edi
    X86_AT(c, 0x112eau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0112eb  pop es
    X86_AT(c, 0x112ebu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0112ec  mov dx, 0x4d8
    X86_AT(c, 0x112ecu);
    s16(c, 2, 0x4D8u);
    // 0112f0  mov ax, 0x2100
    X86_AT(c, 0x112f0u);
    s16(c, 0, 0x2100u);
    // 0112f4  call 0x11bf0
    X86_AT(c, 0x112f4u);
    push32(c, 0x112f9u); f_00011bf0(c); X86_RET(c, 0x112f9u);
    X86_TICK(c, 9);
    // 0112f9  mov ax, 0x2c80
    X86_AT(c, 0x112f9u);
    s16(c, 0, 0x2C80u);
    // 0112fd  call 0x11bf0
    X86_AT(c, 0x112fdu);
    push32(c, 0x11302u); f_00011bf0(c); X86_RET(c, 0x11302u);
    X86_TICK(c, 9);
    // 011302  mov ax, 0x2b00
    X86_AT(c, 0x11302u);
    s16(c, 0, 0x2B00u);
    // 011306  call 0x11bf0
    X86_AT(c, 0x11306u);
    push32(c, 0x1130bu); f_00011bf0(c); X86_RET(c, 0x1130bu);
    X86_TICK(c, 9);
    // 01130b  mov ax, 0x2730
    X86_AT(c, 0x1130bu);
    s16(c, 0, 0x2730u);
    // 01130f  call 0x11bf0
    X86_AT(c, 0x1130fu);
    push32(c, 0x11314u); f_00011bf0(c); X86_RET(c, 0x11314u);
    X86_TICK(c, 4);
    // 011314  xor bl, bl
    X86_AT(c, 0x11314u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v ^ g8(c, 3), 1)); }
    // 011316  mov dx, 0x7f
    X86_AT(c, 0x11316u);
    s16(c, 2, 0x7Fu);
L_1131a:
    X86_TICK(c, 7);
    // 01131a  call 0x115d4
    X86_AT(c, 0x1131au);
    push32(c, 0x1131fu); f_000115d4(c); X86_RET(c, 0x1131fu);
    X86_TICK(c, 7);
    // 01131f  call 0x11664
    X86_AT(c, 0x1131fu);
    push32(c, 0x11324u); f_00011664(c); X86_RET(c, 0x11324u);
    X86_TICK(c, 7);
    // 011324  call 0x11994
    X86_AT(c, 0x11324u);
    push32(c, 0x11329u); f_00011994(c); X86_RET(c, 0x11329u);
    X86_TICK(c, 9);
    // 011329  inc ebx
    X86_AT(c, 0x11329u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 01132a  cmp bl, 5
    X86_AT(c, 0x1132au);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 01132d  jbe 0x1131a
    X86_AT(c, 0x1132du);
    if (x86_cc(c, 6)) { X86_POLL(c, 0x1131au); goto L_1131a; }
    X86_TICK(c, 36);
    // 01132f  popal 
    X86_AT(c, 0x1132fu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011330  xor al, al
    X86_AT(c, 0x11330u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011332  ret 
    X86_AT(c, 0x11332u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x112beu, "ran off the end of a function");
}
void f_000112bf(X86Cpu& c) {
    goto L_112bf;
L_112bc:
    X86_TICK(c, 4);
    // 0112bc  xor eax, eax
    X86_AT(c, 0x112bcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0112be  dec eax
    X86_AT(c, 0x112beu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
L_112bf:
    X86_TICK(c, 46);
    // 0112bf  mov ecx, 0x38
    X86_AT(c, 0x112bfu);
    c.r[1] = 0x38u;
    // 0112c4  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112c4u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 0112c6  mov eax, 0xff7f7f7f
    X86_AT(c, 0x112c6u);
    c.r[0] = 0xFF7F7F7Fu;
    // 0112cb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112cbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112cc  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112ccu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112cd  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112cdu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112ce  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112ceu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112cf  dec bl
    X86_AT(c, 0x112cfu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_dec(c, v, 1)); }
    // 0112d1  jne 0x112bc
    X86_AT(c, 0x112d1u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x112bcu); goto L_112bc; }
    X86_TICK(c, 39);
    // 0112d3  xor eax, eax
    X86_AT(c, 0x112d3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0112d5  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d5u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d6  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d6u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d7  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d7u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d8  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d8u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112da  mov al, 0x80
    X86_AT(c, 0x112dau);
    s8(c, 0, 0x80u);
L_112dc:
    X86_TICK(c, 18);
    // 0112dc  mov esi, 0x135b0
    X86_AT(c, 0x112dcu);
    c.r[6] = 0x135B0u;
    // 0112e1  mov cl, 0xc
    X86_AT(c, 0x112e1u);
    s8(c, 1, 0xCu);
    // 0112e3  movsd dword ptr es:[edi], dword ptr cs:[esi]
    X86_AT(c, 0x112e3u);
    x86_string(c, 0, 4, 243, 4, 1);
    // 0112e6  dec al
    X86_AT(c, 0x112e6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0112e8  jne 0x112dc
    X86_AT(c, 0x112e8u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x112dcu); goto L_112dc; }
    X86_TICK(c, 19);
    // 0112ea  pop edi
    X86_AT(c, 0x112eau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0112eb  pop es
    X86_AT(c, 0x112ebu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0112ec  mov dx, 0x4d8
    X86_AT(c, 0x112ecu);
    s16(c, 2, 0x4D8u);
    // 0112f0  mov ax, 0x2100
    X86_AT(c, 0x112f0u);
    s16(c, 0, 0x2100u);
    // 0112f4  call 0x11bf0
    X86_AT(c, 0x112f4u);
    push32(c, 0x112f9u); f_00011bf0(c); X86_RET(c, 0x112f9u);
    X86_TICK(c, 9);
    // 0112f9  mov ax, 0x2c80
    X86_AT(c, 0x112f9u);
    s16(c, 0, 0x2C80u);
    // 0112fd  call 0x11bf0
    X86_AT(c, 0x112fdu);
    push32(c, 0x11302u); f_00011bf0(c); X86_RET(c, 0x11302u);
    X86_TICK(c, 9);
    // 011302  mov ax, 0x2b00
    X86_AT(c, 0x11302u);
    s16(c, 0, 0x2B00u);
    // 011306  call 0x11bf0
    X86_AT(c, 0x11306u);
    push32(c, 0x1130bu); f_00011bf0(c); X86_RET(c, 0x1130bu);
    X86_TICK(c, 9);
    // 01130b  mov ax, 0x2730
    X86_AT(c, 0x1130bu);
    s16(c, 0, 0x2730u);
    // 01130f  call 0x11bf0
    X86_AT(c, 0x1130fu);
    push32(c, 0x11314u); f_00011bf0(c); X86_RET(c, 0x11314u);
    X86_TICK(c, 4);
    // 011314  xor bl, bl
    X86_AT(c, 0x11314u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v ^ g8(c, 3), 1)); }
    // 011316  mov dx, 0x7f
    X86_AT(c, 0x11316u);
    s16(c, 2, 0x7Fu);
L_1131a:
    X86_TICK(c, 7);
    // 01131a  call 0x115d4
    X86_AT(c, 0x1131au);
    push32(c, 0x1131fu); f_000115d4(c); X86_RET(c, 0x1131fu);
    X86_TICK(c, 7);
    // 01131f  call 0x11664
    X86_AT(c, 0x1131fu);
    push32(c, 0x11324u); f_00011664(c); X86_RET(c, 0x11324u);
    X86_TICK(c, 7);
    // 011324  call 0x11994
    X86_AT(c, 0x11324u);
    push32(c, 0x11329u); f_00011994(c); X86_RET(c, 0x11329u);
    X86_TICK(c, 9);
    // 011329  inc ebx
    X86_AT(c, 0x11329u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 01132a  cmp bl, 5
    X86_AT(c, 0x1132au);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 01132d  jbe 0x1131a
    X86_AT(c, 0x1132du);
    if (x86_cc(c, 6)) { X86_POLL(c, 0x1131au); goto L_1131a; }
    X86_TICK(c, 36);
    // 01132f  popal 
    X86_AT(c, 0x1132fu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011330  xor al, al
    X86_AT(c, 0x11330u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011332  ret 
    X86_AT(c, 0x11332u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x112bfu, "ran off the end of a function");
}
void f_000112c4(X86Cpu& c) {
    goto L_112c4;
L_112bc:
    X86_TICK(c, 6);
    // 0112bc  xor eax, eax
    X86_AT(c, 0x112bcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0112be  dec eax
    X86_AT(c, 0x112beu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0112bf  mov ecx, 0x38
    X86_AT(c, 0x112bfu);
    c.r[1] = 0x38u;
L_112c4:
    X86_TICK(c, 44);
    // 0112c4  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112c4u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 0112c6  mov eax, 0xff7f7f7f
    X86_AT(c, 0x112c6u);
    c.r[0] = 0xFF7F7F7Fu;
    // 0112cb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112cbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112cc  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112ccu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112cd  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112cdu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112ce  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112ceu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112cf  dec bl
    X86_AT(c, 0x112cfu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_dec(c, v, 1)); }
    // 0112d1  jne 0x112bc
    X86_AT(c, 0x112d1u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x112bcu); goto L_112bc; }
    X86_TICK(c, 39);
    // 0112d3  xor eax, eax
    X86_AT(c, 0x112d3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0112d5  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d5u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d6  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d6u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d7  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d7u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d8  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d8u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112da  mov al, 0x80
    X86_AT(c, 0x112dau);
    s8(c, 0, 0x80u);
L_112dc:
    X86_TICK(c, 18);
    // 0112dc  mov esi, 0x135b0
    X86_AT(c, 0x112dcu);
    c.r[6] = 0x135B0u;
    // 0112e1  mov cl, 0xc
    X86_AT(c, 0x112e1u);
    s8(c, 1, 0xCu);
    // 0112e3  movsd dword ptr es:[edi], dword ptr cs:[esi]
    X86_AT(c, 0x112e3u);
    x86_string(c, 0, 4, 243, 4, 1);
    // 0112e6  dec al
    X86_AT(c, 0x112e6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0112e8  jne 0x112dc
    X86_AT(c, 0x112e8u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x112dcu); goto L_112dc; }
    X86_TICK(c, 19);
    // 0112ea  pop edi
    X86_AT(c, 0x112eau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0112eb  pop es
    X86_AT(c, 0x112ebu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0112ec  mov dx, 0x4d8
    X86_AT(c, 0x112ecu);
    s16(c, 2, 0x4D8u);
    // 0112f0  mov ax, 0x2100
    X86_AT(c, 0x112f0u);
    s16(c, 0, 0x2100u);
    // 0112f4  call 0x11bf0
    X86_AT(c, 0x112f4u);
    push32(c, 0x112f9u); f_00011bf0(c); X86_RET(c, 0x112f9u);
    X86_TICK(c, 9);
    // 0112f9  mov ax, 0x2c80
    X86_AT(c, 0x112f9u);
    s16(c, 0, 0x2C80u);
    // 0112fd  call 0x11bf0
    X86_AT(c, 0x112fdu);
    push32(c, 0x11302u); f_00011bf0(c); X86_RET(c, 0x11302u);
    X86_TICK(c, 9);
    // 011302  mov ax, 0x2b00
    X86_AT(c, 0x11302u);
    s16(c, 0, 0x2B00u);
    // 011306  call 0x11bf0
    X86_AT(c, 0x11306u);
    push32(c, 0x1130bu); f_00011bf0(c); X86_RET(c, 0x1130bu);
    X86_TICK(c, 9);
    // 01130b  mov ax, 0x2730
    X86_AT(c, 0x1130bu);
    s16(c, 0, 0x2730u);
    // 01130f  call 0x11bf0
    X86_AT(c, 0x1130fu);
    push32(c, 0x11314u); f_00011bf0(c); X86_RET(c, 0x11314u);
    X86_TICK(c, 4);
    // 011314  xor bl, bl
    X86_AT(c, 0x11314u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v ^ g8(c, 3), 1)); }
    // 011316  mov dx, 0x7f
    X86_AT(c, 0x11316u);
    s16(c, 2, 0x7Fu);
L_1131a:
    X86_TICK(c, 7);
    // 01131a  call 0x115d4
    X86_AT(c, 0x1131au);
    push32(c, 0x1131fu); f_000115d4(c); X86_RET(c, 0x1131fu);
    X86_TICK(c, 7);
    // 01131f  call 0x11664
    X86_AT(c, 0x1131fu);
    push32(c, 0x11324u); f_00011664(c); X86_RET(c, 0x11324u);
    X86_TICK(c, 7);
    // 011324  call 0x11994
    X86_AT(c, 0x11324u);
    push32(c, 0x11329u); f_00011994(c); X86_RET(c, 0x11329u);
    X86_TICK(c, 9);
    // 011329  inc ebx
    X86_AT(c, 0x11329u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 01132a  cmp bl, 5
    X86_AT(c, 0x1132au);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 01132d  jbe 0x1131a
    X86_AT(c, 0x1132du);
    if (x86_cc(c, 6)) { X86_POLL(c, 0x1131au); goto L_1131a; }
    X86_TICK(c, 36);
    // 01132f  popal 
    X86_AT(c, 0x1132fu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011330  xor al, al
    X86_AT(c, 0x11330u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011332  ret 
    X86_AT(c, 0x11332u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x112c4u, "ran off the end of a function");
}
void f_000112c6(X86Cpu& c) {
    goto L_112c6;
L_112bc:
    X86_TICK(c, 13);
    // 0112bc  xor eax, eax
    X86_AT(c, 0x112bcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0112be  dec eax
    X86_AT(c, 0x112beu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0112bf  mov ecx, 0x38
    X86_AT(c, 0x112bfu);
    c.r[1] = 0x38u;
    // 0112c4  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112c4u);
    x86_string(c, 2, 4, 243, 4, 3);
L_112c6:
    X86_TICK(c, 37);
    // 0112c6  mov eax, 0xff7f7f7f
    X86_AT(c, 0x112c6u);
    c.r[0] = 0xFF7F7F7Fu;
    // 0112cb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112cbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112cc  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112ccu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112cd  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112cdu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112ce  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112ceu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112cf  dec bl
    X86_AT(c, 0x112cfu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_dec(c, v, 1)); }
    // 0112d1  jne 0x112bc
    X86_AT(c, 0x112d1u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x112bcu); goto L_112bc; }
    X86_TICK(c, 39);
    // 0112d3  xor eax, eax
    X86_AT(c, 0x112d3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0112d5  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d5u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d6  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d6u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d7  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d7u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d8  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d8u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112da  mov al, 0x80
    X86_AT(c, 0x112dau);
    s8(c, 0, 0x80u);
L_112dc:
    X86_TICK(c, 18);
    // 0112dc  mov esi, 0x135b0
    X86_AT(c, 0x112dcu);
    c.r[6] = 0x135B0u;
    // 0112e1  mov cl, 0xc
    X86_AT(c, 0x112e1u);
    s8(c, 1, 0xCu);
    // 0112e3  movsd dword ptr es:[edi], dword ptr cs:[esi]
    X86_AT(c, 0x112e3u);
    x86_string(c, 0, 4, 243, 4, 1);
    // 0112e6  dec al
    X86_AT(c, 0x112e6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0112e8  jne 0x112dc
    X86_AT(c, 0x112e8u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x112dcu); goto L_112dc; }
    X86_TICK(c, 19);
    // 0112ea  pop edi
    X86_AT(c, 0x112eau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0112eb  pop es
    X86_AT(c, 0x112ebu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0112ec  mov dx, 0x4d8
    X86_AT(c, 0x112ecu);
    s16(c, 2, 0x4D8u);
    // 0112f0  mov ax, 0x2100
    X86_AT(c, 0x112f0u);
    s16(c, 0, 0x2100u);
    // 0112f4  call 0x11bf0
    X86_AT(c, 0x112f4u);
    push32(c, 0x112f9u); f_00011bf0(c); X86_RET(c, 0x112f9u);
    X86_TICK(c, 9);
    // 0112f9  mov ax, 0x2c80
    X86_AT(c, 0x112f9u);
    s16(c, 0, 0x2C80u);
    // 0112fd  call 0x11bf0
    X86_AT(c, 0x112fdu);
    push32(c, 0x11302u); f_00011bf0(c); X86_RET(c, 0x11302u);
    X86_TICK(c, 9);
    // 011302  mov ax, 0x2b00
    X86_AT(c, 0x11302u);
    s16(c, 0, 0x2B00u);
    // 011306  call 0x11bf0
    X86_AT(c, 0x11306u);
    push32(c, 0x1130bu); f_00011bf0(c); X86_RET(c, 0x1130bu);
    X86_TICK(c, 9);
    // 01130b  mov ax, 0x2730
    X86_AT(c, 0x1130bu);
    s16(c, 0, 0x2730u);
    // 01130f  call 0x11bf0
    X86_AT(c, 0x1130fu);
    push32(c, 0x11314u); f_00011bf0(c); X86_RET(c, 0x11314u);
    X86_TICK(c, 4);
    // 011314  xor bl, bl
    X86_AT(c, 0x11314u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v ^ g8(c, 3), 1)); }
    // 011316  mov dx, 0x7f
    X86_AT(c, 0x11316u);
    s16(c, 2, 0x7Fu);
L_1131a:
    X86_TICK(c, 7);
    // 01131a  call 0x115d4
    X86_AT(c, 0x1131au);
    push32(c, 0x1131fu); f_000115d4(c); X86_RET(c, 0x1131fu);
    X86_TICK(c, 7);
    // 01131f  call 0x11664
    X86_AT(c, 0x1131fu);
    push32(c, 0x11324u); f_00011664(c); X86_RET(c, 0x11324u);
    X86_TICK(c, 7);
    // 011324  call 0x11994
    X86_AT(c, 0x11324u);
    push32(c, 0x11329u); f_00011994(c); X86_RET(c, 0x11329u);
    X86_TICK(c, 9);
    // 011329  inc ebx
    X86_AT(c, 0x11329u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 01132a  cmp bl, 5
    X86_AT(c, 0x1132au);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 01132d  jbe 0x1131a
    X86_AT(c, 0x1132du);
    if (x86_cc(c, 6)) { X86_POLL(c, 0x1131au); goto L_1131a; }
    X86_TICK(c, 36);
    // 01132f  popal 
    X86_AT(c, 0x1132fu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011330  xor al, al
    X86_AT(c, 0x11330u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011332  ret 
    X86_AT(c, 0x11332u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x112c6u, "ran off the end of a function");
}
void f_000112cb(X86Cpu& c) {
    goto L_112cb;
L_112bc:
    X86_TICK(c, 15);
    // 0112bc  xor eax, eax
    X86_AT(c, 0x112bcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0112be  dec eax
    X86_AT(c, 0x112beu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0112bf  mov ecx, 0x38
    X86_AT(c, 0x112bfu);
    c.r[1] = 0x38u;
    // 0112c4  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112c4u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 0112c6  mov eax, 0xff7f7f7f
    X86_AT(c, 0x112c6u);
    c.r[0] = 0xFF7F7F7Fu;
L_112cb:
    X86_TICK(c, 35);
    // 0112cb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112cbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112cc  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112ccu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112cd  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112cdu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112ce  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112ceu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112cf  dec bl
    X86_AT(c, 0x112cfu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_dec(c, v, 1)); }
    // 0112d1  jne 0x112bc
    X86_AT(c, 0x112d1u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x112bcu); goto L_112bc; }
    X86_TICK(c, 39);
    // 0112d3  xor eax, eax
    X86_AT(c, 0x112d3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0112d5  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d5u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d6  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d6u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d7  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d7u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d8  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d8u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112da  mov al, 0x80
    X86_AT(c, 0x112dau);
    s8(c, 0, 0x80u);
L_112dc:
    X86_TICK(c, 18);
    // 0112dc  mov esi, 0x135b0
    X86_AT(c, 0x112dcu);
    c.r[6] = 0x135B0u;
    // 0112e1  mov cl, 0xc
    X86_AT(c, 0x112e1u);
    s8(c, 1, 0xCu);
    // 0112e3  movsd dword ptr es:[edi], dword ptr cs:[esi]
    X86_AT(c, 0x112e3u);
    x86_string(c, 0, 4, 243, 4, 1);
    // 0112e6  dec al
    X86_AT(c, 0x112e6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0112e8  jne 0x112dc
    X86_AT(c, 0x112e8u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x112dcu); goto L_112dc; }
    X86_TICK(c, 19);
    // 0112ea  pop edi
    X86_AT(c, 0x112eau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0112eb  pop es
    X86_AT(c, 0x112ebu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0112ec  mov dx, 0x4d8
    X86_AT(c, 0x112ecu);
    s16(c, 2, 0x4D8u);
    // 0112f0  mov ax, 0x2100
    X86_AT(c, 0x112f0u);
    s16(c, 0, 0x2100u);
    // 0112f4  call 0x11bf0
    X86_AT(c, 0x112f4u);
    push32(c, 0x112f9u); f_00011bf0(c); X86_RET(c, 0x112f9u);
    X86_TICK(c, 9);
    // 0112f9  mov ax, 0x2c80
    X86_AT(c, 0x112f9u);
    s16(c, 0, 0x2C80u);
    // 0112fd  call 0x11bf0
    X86_AT(c, 0x112fdu);
    push32(c, 0x11302u); f_00011bf0(c); X86_RET(c, 0x11302u);
    X86_TICK(c, 9);
    // 011302  mov ax, 0x2b00
    X86_AT(c, 0x11302u);
    s16(c, 0, 0x2B00u);
    // 011306  call 0x11bf0
    X86_AT(c, 0x11306u);
    push32(c, 0x1130bu); f_00011bf0(c); X86_RET(c, 0x1130bu);
    X86_TICK(c, 9);
    // 01130b  mov ax, 0x2730
    X86_AT(c, 0x1130bu);
    s16(c, 0, 0x2730u);
    // 01130f  call 0x11bf0
    X86_AT(c, 0x1130fu);
    push32(c, 0x11314u); f_00011bf0(c); X86_RET(c, 0x11314u);
    X86_TICK(c, 4);
    // 011314  xor bl, bl
    X86_AT(c, 0x11314u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v ^ g8(c, 3), 1)); }
    // 011316  mov dx, 0x7f
    X86_AT(c, 0x11316u);
    s16(c, 2, 0x7Fu);
L_1131a:
    X86_TICK(c, 7);
    // 01131a  call 0x115d4
    X86_AT(c, 0x1131au);
    push32(c, 0x1131fu); f_000115d4(c); X86_RET(c, 0x1131fu);
    X86_TICK(c, 7);
    // 01131f  call 0x11664
    X86_AT(c, 0x1131fu);
    push32(c, 0x11324u); f_00011664(c); X86_RET(c, 0x11324u);
    X86_TICK(c, 7);
    // 011324  call 0x11994
    X86_AT(c, 0x11324u);
    push32(c, 0x11329u); f_00011994(c); X86_RET(c, 0x11329u);
    X86_TICK(c, 9);
    // 011329  inc ebx
    X86_AT(c, 0x11329u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 01132a  cmp bl, 5
    X86_AT(c, 0x1132au);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 01132d  jbe 0x1131a
    X86_AT(c, 0x1132du);
    if (x86_cc(c, 6)) { X86_POLL(c, 0x1131au); goto L_1131a; }
    X86_TICK(c, 36);
    // 01132f  popal 
    X86_AT(c, 0x1132fu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011330  xor al, al
    X86_AT(c, 0x11330u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011332  ret 
    X86_AT(c, 0x11332u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x112cbu, "ran off the end of a function");
}
void f_000112cc(X86Cpu& c) {
    goto L_112cc;
L_112bc:
    X86_TICK(c, 22);
    // 0112bc  xor eax, eax
    X86_AT(c, 0x112bcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0112be  dec eax
    X86_AT(c, 0x112beu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0112bf  mov ecx, 0x38
    X86_AT(c, 0x112bfu);
    c.r[1] = 0x38u;
    // 0112c4  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112c4u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 0112c6  mov eax, 0xff7f7f7f
    X86_AT(c, 0x112c6u);
    c.r[0] = 0xFF7F7F7Fu;
    // 0112cb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112cbu);
    x86_string(c, 2, 4, 0, 4, 3);
L_112cc:
    X86_TICK(c, 28);
    // 0112cc  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112ccu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112cd  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112cdu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112ce  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112ceu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112cf  dec bl
    X86_AT(c, 0x112cfu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_dec(c, v, 1)); }
    // 0112d1  jne 0x112bc
    X86_AT(c, 0x112d1u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x112bcu); goto L_112bc; }
    X86_TICK(c, 39);
    // 0112d3  xor eax, eax
    X86_AT(c, 0x112d3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0112d5  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d5u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d6  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d6u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d7  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d7u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d8  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d8u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112da  mov al, 0x80
    X86_AT(c, 0x112dau);
    s8(c, 0, 0x80u);
L_112dc:
    X86_TICK(c, 18);
    // 0112dc  mov esi, 0x135b0
    X86_AT(c, 0x112dcu);
    c.r[6] = 0x135B0u;
    // 0112e1  mov cl, 0xc
    X86_AT(c, 0x112e1u);
    s8(c, 1, 0xCu);
    // 0112e3  movsd dword ptr es:[edi], dword ptr cs:[esi]
    X86_AT(c, 0x112e3u);
    x86_string(c, 0, 4, 243, 4, 1);
    // 0112e6  dec al
    X86_AT(c, 0x112e6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0112e8  jne 0x112dc
    X86_AT(c, 0x112e8u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x112dcu); goto L_112dc; }
    X86_TICK(c, 19);
    // 0112ea  pop edi
    X86_AT(c, 0x112eau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0112eb  pop es
    X86_AT(c, 0x112ebu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0112ec  mov dx, 0x4d8
    X86_AT(c, 0x112ecu);
    s16(c, 2, 0x4D8u);
    // 0112f0  mov ax, 0x2100
    X86_AT(c, 0x112f0u);
    s16(c, 0, 0x2100u);
    // 0112f4  call 0x11bf0
    X86_AT(c, 0x112f4u);
    push32(c, 0x112f9u); f_00011bf0(c); X86_RET(c, 0x112f9u);
    X86_TICK(c, 9);
    // 0112f9  mov ax, 0x2c80
    X86_AT(c, 0x112f9u);
    s16(c, 0, 0x2C80u);
    // 0112fd  call 0x11bf0
    X86_AT(c, 0x112fdu);
    push32(c, 0x11302u); f_00011bf0(c); X86_RET(c, 0x11302u);
    X86_TICK(c, 9);
    // 011302  mov ax, 0x2b00
    X86_AT(c, 0x11302u);
    s16(c, 0, 0x2B00u);
    // 011306  call 0x11bf0
    X86_AT(c, 0x11306u);
    push32(c, 0x1130bu); f_00011bf0(c); X86_RET(c, 0x1130bu);
    X86_TICK(c, 9);
    // 01130b  mov ax, 0x2730
    X86_AT(c, 0x1130bu);
    s16(c, 0, 0x2730u);
    // 01130f  call 0x11bf0
    X86_AT(c, 0x1130fu);
    push32(c, 0x11314u); f_00011bf0(c); X86_RET(c, 0x11314u);
    X86_TICK(c, 4);
    // 011314  xor bl, bl
    X86_AT(c, 0x11314u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v ^ g8(c, 3), 1)); }
    // 011316  mov dx, 0x7f
    X86_AT(c, 0x11316u);
    s16(c, 2, 0x7Fu);
L_1131a:
    X86_TICK(c, 7);
    // 01131a  call 0x115d4
    X86_AT(c, 0x1131au);
    push32(c, 0x1131fu); f_000115d4(c); X86_RET(c, 0x1131fu);
    X86_TICK(c, 7);
    // 01131f  call 0x11664
    X86_AT(c, 0x1131fu);
    push32(c, 0x11324u); f_00011664(c); X86_RET(c, 0x11324u);
    X86_TICK(c, 7);
    // 011324  call 0x11994
    X86_AT(c, 0x11324u);
    push32(c, 0x11329u); f_00011994(c); X86_RET(c, 0x11329u);
    X86_TICK(c, 9);
    // 011329  inc ebx
    X86_AT(c, 0x11329u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 01132a  cmp bl, 5
    X86_AT(c, 0x1132au);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 01132d  jbe 0x1131a
    X86_AT(c, 0x1132du);
    if (x86_cc(c, 6)) { X86_POLL(c, 0x1131au); goto L_1131a; }
    X86_TICK(c, 36);
    // 01132f  popal 
    X86_AT(c, 0x1132fu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011330  xor al, al
    X86_AT(c, 0x11330u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011332  ret 
    X86_AT(c, 0x11332u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x112ccu, "ran off the end of a function");
}
void f_000112cd(X86Cpu& c) {
    goto L_112cd;
L_112bc:
    X86_TICK(c, 29);
    // 0112bc  xor eax, eax
    X86_AT(c, 0x112bcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0112be  dec eax
    X86_AT(c, 0x112beu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0112bf  mov ecx, 0x38
    X86_AT(c, 0x112bfu);
    c.r[1] = 0x38u;
    // 0112c4  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112c4u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 0112c6  mov eax, 0xff7f7f7f
    X86_AT(c, 0x112c6u);
    c.r[0] = 0xFF7F7F7Fu;
    // 0112cb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112cbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112cc  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112ccu);
    x86_string(c, 2, 4, 0, 4, 3);
L_112cd:
    X86_TICK(c, 21);
    // 0112cd  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112cdu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112ce  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112ceu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112cf  dec bl
    X86_AT(c, 0x112cfu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_dec(c, v, 1)); }
    // 0112d1  jne 0x112bc
    X86_AT(c, 0x112d1u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x112bcu); goto L_112bc; }
    X86_TICK(c, 39);
    // 0112d3  xor eax, eax
    X86_AT(c, 0x112d3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0112d5  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d5u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d6  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d6u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d7  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d7u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d8  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d8u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112da  mov al, 0x80
    X86_AT(c, 0x112dau);
    s8(c, 0, 0x80u);
L_112dc:
    X86_TICK(c, 18);
    // 0112dc  mov esi, 0x135b0
    X86_AT(c, 0x112dcu);
    c.r[6] = 0x135B0u;
    // 0112e1  mov cl, 0xc
    X86_AT(c, 0x112e1u);
    s8(c, 1, 0xCu);
    // 0112e3  movsd dword ptr es:[edi], dword ptr cs:[esi]
    X86_AT(c, 0x112e3u);
    x86_string(c, 0, 4, 243, 4, 1);
    // 0112e6  dec al
    X86_AT(c, 0x112e6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0112e8  jne 0x112dc
    X86_AT(c, 0x112e8u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x112dcu); goto L_112dc; }
    X86_TICK(c, 19);
    // 0112ea  pop edi
    X86_AT(c, 0x112eau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0112eb  pop es
    X86_AT(c, 0x112ebu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0112ec  mov dx, 0x4d8
    X86_AT(c, 0x112ecu);
    s16(c, 2, 0x4D8u);
    // 0112f0  mov ax, 0x2100
    X86_AT(c, 0x112f0u);
    s16(c, 0, 0x2100u);
    // 0112f4  call 0x11bf0
    X86_AT(c, 0x112f4u);
    push32(c, 0x112f9u); f_00011bf0(c); X86_RET(c, 0x112f9u);
    X86_TICK(c, 9);
    // 0112f9  mov ax, 0x2c80
    X86_AT(c, 0x112f9u);
    s16(c, 0, 0x2C80u);
    // 0112fd  call 0x11bf0
    X86_AT(c, 0x112fdu);
    push32(c, 0x11302u); f_00011bf0(c); X86_RET(c, 0x11302u);
    X86_TICK(c, 9);
    // 011302  mov ax, 0x2b00
    X86_AT(c, 0x11302u);
    s16(c, 0, 0x2B00u);
    // 011306  call 0x11bf0
    X86_AT(c, 0x11306u);
    push32(c, 0x1130bu); f_00011bf0(c); X86_RET(c, 0x1130bu);
    X86_TICK(c, 9);
    // 01130b  mov ax, 0x2730
    X86_AT(c, 0x1130bu);
    s16(c, 0, 0x2730u);
    // 01130f  call 0x11bf0
    X86_AT(c, 0x1130fu);
    push32(c, 0x11314u); f_00011bf0(c); X86_RET(c, 0x11314u);
    X86_TICK(c, 4);
    // 011314  xor bl, bl
    X86_AT(c, 0x11314u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v ^ g8(c, 3), 1)); }
    // 011316  mov dx, 0x7f
    X86_AT(c, 0x11316u);
    s16(c, 2, 0x7Fu);
L_1131a:
    X86_TICK(c, 7);
    // 01131a  call 0x115d4
    X86_AT(c, 0x1131au);
    push32(c, 0x1131fu); f_000115d4(c); X86_RET(c, 0x1131fu);
    X86_TICK(c, 7);
    // 01131f  call 0x11664
    X86_AT(c, 0x1131fu);
    push32(c, 0x11324u); f_00011664(c); X86_RET(c, 0x11324u);
    X86_TICK(c, 7);
    // 011324  call 0x11994
    X86_AT(c, 0x11324u);
    push32(c, 0x11329u); f_00011994(c); X86_RET(c, 0x11329u);
    X86_TICK(c, 9);
    // 011329  inc ebx
    X86_AT(c, 0x11329u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 01132a  cmp bl, 5
    X86_AT(c, 0x1132au);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 01132d  jbe 0x1131a
    X86_AT(c, 0x1132du);
    if (x86_cc(c, 6)) { X86_POLL(c, 0x1131au); goto L_1131a; }
    X86_TICK(c, 36);
    // 01132f  popal 
    X86_AT(c, 0x1132fu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011330  xor al, al
    X86_AT(c, 0x11330u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011332  ret 
    X86_AT(c, 0x11332u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x112cdu, "ran off the end of a function");
}
void f_000112ce(X86Cpu& c) {
    goto L_112ce;
L_112bc:
    X86_TICK(c, 36);
    // 0112bc  xor eax, eax
    X86_AT(c, 0x112bcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0112be  dec eax
    X86_AT(c, 0x112beu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0112bf  mov ecx, 0x38
    X86_AT(c, 0x112bfu);
    c.r[1] = 0x38u;
    // 0112c4  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112c4u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 0112c6  mov eax, 0xff7f7f7f
    X86_AT(c, 0x112c6u);
    c.r[0] = 0xFF7F7F7Fu;
    // 0112cb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112cbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112cc  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112ccu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112cd  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112cdu);
    x86_string(c, 2, 4, 0, 4, 3);
L_112ce:
    X86_TICK(c, 14);
    // 0112ce  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112ceu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112cf  dec bl
    X86_AT(c, 0x112cfu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_dec(c, v, 1)); }
    // 0112d1  jne 0x112bc
    X86_AT(c, 0x112d1u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x112bcu); goto L_112bc; }
    X86_TICK(c, 39);
    // 0112d3  xor eax, eax
    X86_AT(c, 0x112d3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0112d5  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d5u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d6  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d6u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d7  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d7u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d8  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d8u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112da  mov al, 0x80
    X86_AT(c, 0x112dau);
    s8(c, 0, 0x80u);
L_112dc:
    X86_TICK(c, 18);
    // 0112dc  mov esi, 0x135b0
    X86_AT(c, 0x112dcu);
    c.r[6] = 0x135B0u;
    // 0112e1  mov cl, 0xc
    X86_AT(c, 0x112e1u);
    s8(c, 1, 0xCu);
    // 0112e3  movsd dword ptr es:[edi], dword ptr cs:[esi]
    X86_AT(c, 0x112e3u);
    x86_string(c, 0, 4, 243, 4, 1);
    // 0112e6  dec al
    X86_AT(c, 0x112e6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0112e8  jne 0x112dc
    X86_AT(c, 0x112e8u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x112dcu); goto L_112dc; }
    X86_TICK(c, 19);
    // 0112ea  pop edi
    X86_AT(c, 0x112eau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0112eb  pop es
    X86_AT(c, 0x112ebu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0112ec  mov dx, 0x4d8
    X86_AT(c, 0x112ecu);
    s16(c, 2, 0x4D8u);
    // 0112f0  mov ax, 0x2100
    X86_AT(c, 0x112f0u);
    s16(c, 0, 0x2100u);
    // 0112f4  call 0x11bf0
    X86_AT(c, 0x112f4u);
    push32(c, 0x112f9u); f_00011bf0(c); X86_RET(c, 0x112f9u);
    X86_TICK(c, 9);
    // 0112f9  mov ax, 0x2c80
    X86_AT(c, 0x112f9u);
    s16(c, 0, 0x2C80u);
    // 0112fd  call 0x11bf0
    X86_AT(c, 0x112fdu);
    push32(c, 0x11302u); f_00011bf0(c); X86_RET(c, 0x11302u);
    X86_TICK(c, 9);
    // 011302  mov ax, 0x2b00
    X86_AT(c, 0x11302u);
    s16(c, 0, 0x2B00u);
    // 011306  call 0x11bf0
    X86_AT(c, 0x11306u);
    push32(c, 0x1130bu); f_00011bf0(c); X86_RET(c, 0x1130bu);
    X86_TICK(c, 9);
    // 01130b  mov ax, 0x2730
    X86_AT(c, 0x1130bu);
    s16(c, 0, 0x2730u);
    // 01130f  call 0x11bf0
    X86_AT(c, 0x1130fu);
    push32(c, 0x11314u); f_00011bf0(c); X86_RET(c, 0x11314u);
    X86_TICK(c, 4);
    // 011314  xor bl, bl
    X86_AT(c, 0x11314u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v ^ g8(c, 3), 1)); }
    // 011316  mov dx, 0x7f
    X86_AT(c, 0x11316u);
    s16(c, 2, 0x7Fu);
L_1131a:
    X86_TICK(c, 7);
    // 01131a  call 0x115d4
    X86_AT(c, 0x1131au);
    push32(c, 0x1131fu); f_000115d4(c); X86_RET(c, 0x1131fu);
    X86_TICK(c, 7);
    // 01131f  call 0x11664
    X86_AT(c, 0x1131fu);
    push32(c, 0x11324u); f_00011664(c); X86_RET(c, 0x11324u);
    X86_TICK(c, 7);
    // 011324  call 0x11994
    X86_AT(c, 0x11324u);
    push32(c, 0x11329u); f_00011994(c); X86_RET(c, 0x11329u);
    X86_TICK(c, 9);
    // 011329  inc ebx
    X86_AT(c, 0x11329u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 01132a  cmp bl, 5
    X86_AT(c, 0x1132au);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 01132d  jbe 0x1131a
    X86_AT(c, 0x1132du);
    if (x86_cc(c, 6)) { X86_POLL(c, 0x1131au); goto L_1131a; }
    X86_TICK(c, 36);
    // 01132f  popal 
    X86_AT(c, 0x1132fu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011330  xor al, al
    X86_AT(c, 0x11330u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011332  ret 
    X86_AT(c, 0x11332u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x112ceu, "ran off the end of a function");
}
void f_000112cf(X86Cpu& c) {
    goto L_112cf;
L_112bc:
    X86_TICK(c, 43);
    // 0112bc  xor eax, eax
    X86_AT(c, 0x112bcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0112be  dec eax
    X86_AT(c, 0x112beu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0112bf  mov ecx, 0x38
    X86_AT(c, 0x112bfu);
    c.r[1] = 0x38u;
    // 0112c4  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112c4u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 0112c6  mov eax, 0xff7f7f7f
    X86_AT(c, 0x112c6u);
    c.r[0] = 0xFF7F7F7Fu;
    // 0112cb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112cbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112cc  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112ccu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112cd  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112cdu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112ce  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112ceu);
    x86_string(c, 2, 4, 0, 4, 3);
L_112cf:
    X86_TICK(c, 7);
    // 0112cf  dec bl
    X86_AT(c, 0x112cfu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_dec(c, v, 1)); }
    // 0112d1  jne 0x112bc
    X86_AT(c, 0x112d1u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x112bcu); goto L_112bc; }
    X86_TICK(c, 39);
    // 0112d3  xor eax, eax
    X86_AT(c, 0x112d3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0112d5  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d5u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d6  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d6u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d7  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d7u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d8  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d8u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112da  mov al, 0x80
    X86_AT(c, 0x112dau);
    s8(c, 0, 0x80u);
L_112dc:
    X86_TICK(c, 18);
    // 0112dc  mov esi, 0x135b0
    X86_AT(c, 0x112dcu);
    c.r[6] = 0x135B0u;
    // 0112e1  mov cl, 0xc
    X86_AT(c, 0x112e1u);
    s8(c, 1, 0xCu);
    // 0112e3  movsd dword ptr es:[edi], dword ptr cs:[esi]
    X86_AT(c, 0x112e3u);
    x86_string(c, 0, 4, 243, 4, 1);
    // 0112e6  dec al
    X86_AT(c, 0x112e6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0112e8  jne 0x112dc
    X86_AT(c, 0x112e8u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x112dcu); goto L_112dc; }
    X86_TICK(c, 19);
    // 0112ea  pop edi
    X86_AT(c, 0x112eau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0112eb  pop es
    X86_AT(c, 0x112ebu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0112ec  mov dx, 0x4d8
    X86_AT(c, 0x112ecu);
    s16(c, 2, 0x4D8u);
    // 0112f0  mov ax, 0x2100
    X86_AT(c, 0x112f0u);
    s16(c, 0, 0x2100u);
    // 0112f4  call 0x11bf0
    X86_AT(c, 0x112f4u);
    push32(c, 0x112f9u); f_00011bf0(c); X86_RET(c, 0x112f9u);
    X86_TICK(c, 9);
    // 0112f9  mov ax, 0x2c80
    X86_AT(c, 0x112f9u);
    s16(c, 0, 0x2C80u);
    // 0112fd  call 0x11bf0
    X86_AT(c, 0x112fdu);
    push32(c, 0x11302u); f_00011bf0(c); X86_RET(c, 0x11302u);
    X86_TICK(c, 9);
    // 011302  mov ax, 0x2b00
    X86_AT(c, 0x11302u);
    s16(c, 0, 0x2B00u);
    // 011306  call 0x11bf0
    X86_AT(c, 0x11306u);
    push32(c, 0x1130bu); f_00011bf0(c); X86_RET(c, 0x1130bu);
    X86_TICK(c, 9);
    // 01130b  mov ax, 0x2730
    X86_AT(c, 0x1130bu);
    s16(c, 0, 0x2730u);
    // 01130f  call 0x11bf0
    X86_AT(c, 0x1130fu);
    push32(c, 0x11314u); f_00011bf0(c); X86_RET(c, 0x11314u);
    X86_TICK(c, 4);
    // 011314  xor bl, bl
    X86_AT(c, 0x11314u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v ^ g8(c, 3), 1)); }
    // 011316  mov dx, 0x7f
    X86_AT(c, 0x11316u);
    s16(c, 2, 0x7Fu);
L_1131a:
    X86_TICK(c, 7);
    // 01131a  call 0x115d4
    X86_AT(c, 0x1131au);
    push32(c, 0x1131fu); f_000115d4(c); X86_RET(c, 0x1131fu);
    X86_TICK(c, 7);
    // 01131f  call 0x11664
    X86_AT(c, 0x1131fu);
    push32(c, 0x11324u); f_00011664(c); X86_RET(c, 0x11324u);
    X86_TICK(c, 7);
    // 011324  call 0x11994
    X86_AT(c, 0x11324u);
    push32(c, 0x11329u); f_00011994(c); X86_RET(c, 0x11329u);
    X86_TICK(c, 9);
    // 011329  inc ebx
    X86_AT(c, 0x11329u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 01132a  cmp bl, 5
    X86_AT(c, 0x1132au);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 01132d  jbe 0x1131a
    X86_AT(c, 0x1132du);
    if (x86_cc(c, 6)) { X86_POLL(c, 0x1131au); goto L_1131a; }
    X86_TICK(c, 36);
    // 01132f  popal 
    X86_AT(c, 0x1132fu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011330  xor al, al
    X86_AT(c, 0x11330u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011332  ret 
    X86_AT(c, 0x11332u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x112cfu, "ran off the end of a function");
}
void f_000112d1(X86Cpu& c) {
    goto L_112d1;
L_112bc:
    X86_TICK(c, 45);
    // 0112bc  xor eax, eax
    X86_AT(c, 0x112bcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0112be  dec eax
    X86_AT(c, 0x112beu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0112bf  mov ecx, 0x38
    X86_AT(c, 0x112bfu);
    c.r[1] = 0x38u;
    // 0112c4  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112c4u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 0112c6  mov eax, 0xff7f7f7f
    X86_AT(c, 0x112c6u);
    c.r[0] = 0xFF7F7F7Fu;
    // 0112cb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112cbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112cc  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112ccu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112cd  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112cdu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112ce  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112ceu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112cf  dec bl
    X86_AT(c, 0x112cfu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_dec(c, v, 1)); }
L_112d1:
    X86_TICK(c, 5);
    // 0112d1  jne 0x112bc
    X86_AT(c, 0x112d1u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x112bcu); goto L_112bc; }
    X86_TICK(c, 39);
    // 0112d3  xor eax, eax
    X86_AT(c, 0x112d3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0112d5  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d5u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d6  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d6u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d7  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d7u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d8  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d8u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112da  mov al, 0x80
    X86_AT(c, 0x112dau);
    s8(c, 0, 0x80u);
L_112dc:
    X86_TICK(c, 18);
    // 0112dc  mov esi, 0x135b0
    X86_AT(c, 0x112dcu);
    c.r[6] = 0x135B0u;
    // 0112e1  mov cl, 0xc
    X86_AT(c, 0x112e1u);
    s8(c, 1, 0xCu);
    // 0112e3  movsd dword ptr es:[edi], dword ptr cs:[esi]
    X86_AT(c, 0x112e3u);
    x86_string(c, 0, 4, 243, 4, 1);
    // 0112e6  dec al
    X86_AT(c, 0x112e6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0112e8  jne 0x112dc
    X86_AT(c, 0x112e8u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x112dcu); goto L_112dc; }
    X86_TICK(c, 19);
    // 0112ea  pop edi
    X86_AT(c, 0x112eau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0112eb  pop es
    X86_AT(c, 0x112ebu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0112ec  mov dx, 0x4d8
    X86_AT(c, 0x112ecu);
    s16(c, 2, 0x4D8u);
    // 0112f0  mov ax, 0x2100
    X86_AT(c, 0x112f0u);
    s16(c, 0, 0x2100u);
    // 0112f4  call 0x11bf0
    X86_AT(c, 0x112f4u);
    push32(c, 0x112f9u); f_00011bf0(c); X86_RET(c, 0x112f9u);
    X86_TICK(c, 9);
    // 0112f9  mov ax, 0x2c80
    X86_AT(c, 0x112f9u);
    s16(c, 0, 0x2C80u);
    // 0112fd  call 0x11bf0
    X86_AT(c, 0x112fdu);
    push32(c, 0x11302u); f_00011bf0(c); X86_RET(c, 0x11302u);
    X86_TICK(c, 9);
    // 011302  mov ax, 0x2b00
    X86_AT(c, 0x11302u);
    s16(c, 0, 0x2B00u);
    // 011306  call 0x11bf0
    X86_AT(c, 0x11306u);
    push32(c, 0x1130bu); f_00011bf0(c); X86_RET(c, 0x1130bu);
    X86_TICK(c, 9);
    // 01130b  mov ax, 0x2730
    X86_AT(c, 0x1130bu);
    s16(c, 0, 0x2730u);
    // 01130f  call 0x11bf0
    X86_AT(c, 0x1130fu);
    push32(c, 0x11314u); f_00011bf0(c); X86_RET(c, 0x11314u);
    X86_TICK(c, 4);
    // 011314  xor bl, bl
    X86_AT(c, 0x11314u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v ^ g8(c, 3), 1)); }
    // 011316  mov dx, 0x7f
    X86_AT(c, 0x11316u);
    s16(c, 2, 0x7Fu);
L_1131a:
    X86_TICK(c, 7);
    // 01131a  call 0x115d4
    X86_AT(c, 0x1131au);
    push32(c, 0x1131fu); f_000115d4(c); X86_RET(c, 0x1131fu);
    X86_TICK(c, 7);
    // 01131f  call 0x11664
    X86_AT(c, 0x1131fu);
    push32(c, 0x11324u); f_00011664(c); X86_RET(c, 0x11324u);
    X86_TICK(c, 7);
    // 011324  call 0x11994
    X86_AT(c, 0x11324u);
    push32(c, 0x11329u); f_00011994(c); X86_RET(c, 0x11329u);
    X86_TICK(c, 9);
    // 011329  inc ebx
    X86_AT(c, 0x11329u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 01132a  cmp bl, 5
    X86_AT(c, 0x1132au);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 01132d  jbe 0x1131a
    X86_AT(c, 0x1132du);
    if (x86_cc(c, 6)) { X86_POLL(c, 0x1131au); goto L_1131a; }
    X86_TICK(c, 36);
    // 01132f  popal 
    X86_AT(c, 0x1132fu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011330  xor al, al
    X86_AT(c, 0x11330u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011332  ret 
    X86_AT(c, 0x11332u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x112d1u, "ran off the end of a function");
}
void f_000112d3(X86Cpu& c) {
    X86_TICK(c, 39);
    // 0112d3  xor eax, eax
    X86_AT(c, 0x112d3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0112d5  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d5u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d6  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d6u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d7  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d7u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d8  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d8u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112d9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x112d9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0112da  mov al, 0x80
    X86_AT(c, 0x112dau);
    s8(c, 0, 0x80u);
L_112dc:
    X86_TICK(c, 18);
    // 0112dc  mov esi, 0x135b0
    X86_AT(c, 0x112dcu);
    c.r[6] = 0x135B0u;
    // 0112e1  mov cl, 0xc
    X86_AT(c, 0x112e1u);
    s8(c, 1, 0xCu);
    // 0112e3  movsd dword ptr es:[edi], dword ptr cs:[esi]
    X86_AT(c, 0x112e3u);
    x86_string(c, 0, 4, 243, 4, 1);
    // 0112e6  dec al
    X86_AT(c, 0x112e6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0112e8  jne 0x112dc
    X86_AT(c, 0x112e8u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x112dcu); goto L_112dc; }
    X86_TICK(c, 19);
    // 0112ea  pop edi
    X86_AT(c, 0x112eau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0112eb  pop es
    X86_AT(c, 0x112ebu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0112ec  mov dx, 0x4d8
    X86_AT(c, 0x112ecu);
    s16(c, 2, 0x4D8u);
    // 0112f0  mov ax, 0x2100
    X86_AT(c, 0x112f0u);
    s16(c, 0, 0x2100u);
    // 0112f4  call 0x11bf0
    X86_AT(c, 0x112f4u);
    push32(c, 0x112f9u); f_00011bf0(c); X86_RET(c, 0x112f9u);
    X86_TICK(c, 9);
    // 0112f9  mov ax, 0x2c80
    X86_AT(c, 0x112f9u);
    s16(c, 0, 0x2C80u);
    // 0112fd  call 0x11bf0
    X86_AT(c, 0x112fdu);
    push32(c, 0x11302u); f_00011bf0(c); X86_RET(c, 0x11302u);
    X86_TICK(c, 9);
    // 011302  mov ax, 0x2b00
    X86_AT(c, 0x11302u);
    s16(c, 0, 0x2B00u);
    // 011306  call 0x11bf0
    X86_AT(c, 0x11306u);
    push32(c, 0x1130bu); f_00011bf0(c); X86_RET(c, 0x1130bu);
    X86_TICK(c, 9);
    // 01130b  mov ax, 0x2730
    X86_AT(c, 0x1130bu);
    s16(c, 0, 0x2730u);
    // 01130f  call 0x11bf0
    X86_AT(c, 0x1130fu);
    push32(c, 0x11314u); f_00011bf0(c); X86_RET(c, 0x11314u);
    X86_TICK(c, 4);
    // 011314  xor bl, bl
    X86_AT(c, 0x11314u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v ^ g8(c, 3), 1)); }
    // 011316  mov dx, 0x7f
    X86_AT(c, 0x11316u);
    s16(c, 2, 0x7Fu);
L_1131a:
    X86_TICK(c, 7);
    // 01131a  call 0x115d4
    X86_AT(c, 0x1131au);
    push32(c, 0x1131fu); f_000115d4(c); X86_RET(c, 0x1131fu);
    X86_TICK(c, 7);
    // 01131f  call 0x11664
    X86_AT(c, 0x1131fu);
    push32(c, 0x11324u); f_00011664(c); X86_RET(c, 0x11324u);
    X86_TICK(c, 7);
    // 011324  call 0x11994
    X86_AT(c, 0x11324u);
    push32(c, 0x11329u); f_00011994(c); X86_RET(c, 0x11329u);
    X86_TICK(c, 9);
    // 011329  inc ebx
    X86_AT(c, 0x11329u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 01132a  cmp bl, 5
    X86_AT(c, 0x1132au);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 01132d  jbe 0x1131a
    X86_AT(c, 0x1132du);
    if (x86_cc(c, 6)) { X86_POLL(c, 0x1131au); goto L_1131a; }
    X86_TICK(c, 36);
    // 01132f  popal 
    X86_AT(c, 0x1132fu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 011330  xor al, al
    X86_AT(c, 0x11330u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011332  ret 
    X86_AT(c, 0x11332u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x112d3u, "ran off the end of a function");
}
}
